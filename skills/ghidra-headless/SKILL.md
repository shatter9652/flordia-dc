# Ghidra headless skill (this project)

Ghidra **12.1.4** at `/home/nate/ghidra/ghidra_12.1.4_PUBLIC`, and **12.2** at
`/home/nate/ghidra/ghidra_12.2_PUBLIC`. REA now reports the 12.2 provider, but it
rejects the SELF as an unsupported format and a 195 MB import does not finish
inside an MCP tool deadline, so native work still goes through `analyzeHeadless`
directly. This page is the working recipe plus the MCP options, so the same
commands do not have to be rediscovered. 12.1.4 needs
`JAVA_HOME=/usr/lib/jvm/java-21-openjdk`; 12.2 needs a 25+ JDK
(`/usr/lib/jvm/java-27-jdk` is installed).

## 1. Full-image analysis (Xbox PE) and symbol pass

```sh
HL=/home/nate/ghidra/ghidra_12.1.4_PUBLIC/support/analyzeHeadless
PROJ=/home/nate/Port2PS4/ghidra_proj/gta6_full

# one-time import (no analysis; imports become externals)
MAXMEM=3000M "$HL" "$PROJ" gta6_full -import ../6RE/DUMP/game_scarlett_master.exe -noanalysis

# analyse + apply the symbol script; prints one REFS| line
MAXMEM=6000M "$HL" "$PROJ" gta6_full -process game_scarlett_master.exe \
  -scriptPath tools -postScript ApplyRefs.java "$PWD"
```

The Xbox image is not present on this machine any more
(`../6RE/DUMP/game_scarlett_master.exe` is gone), so the PS5 SELF is the live
target:

```sh
MAXMEM=6000M "$HL" /home/nate/Port2PS4/ghidra_proj/gta6_full gta6_full \
  -process eboot.bin -scriptPath tools -postScript ApplyPs5.java "$PWD" \
  > /tmp/gta6_analyze.log 2>&1
```

`ApplyPs5.java` prints the `REFS|...` line that `tools/progress.py` reads.
**Run it with `-noanalysis`** once the project is analysed — the post-script then
finishes in seconds and prints the line:

```sh
JAVA_HOME=/usr/lib/jvm/java-21-openjdk "$HL" \
  /home/nate/Port2PS4/ghidra_proj/gta6_full gta6_full \
  -process eboot.bin -noanalysis -scriptPath tools \
  -postScript ApplyPs5.java "$PWD"
# REFS|ps5_libraries=46|rage_structs=7|rage_fields=43|gtav_classes=27903|string_named=0|renamed_total=0
```

With analysis enabled instead, the JVM is killed on this 3 GB host (and a 1800 MB
retry was still analysing at 15 minutes). Two path details: the project argument
is the **project directory**, not its parent, and 12.2 refuses this 12.1.4
project with `Could not find project`.

Do not open the project with two processes at once: Ghidra writes a lock into
the `.rep`, and the second run dies right after `Opening project`, which is
exactly the symptom above. Check for a stale `ghidra_proj/gta6_full/gta6_full.rep/*.lock`
before blaming memory.

## 2. Window decompilation (the fast path)

Decompiling the whole 150 MB text is never necessary. `tools/ps5elf.py` cuts a
virtual window out of the SELF, and `tools/ghidra_dump.py` imports it into a
throwaway project and runs `tools/DumpC.java`:

```sh
python3 tools/ghidra_dump.py ../6RE/DUMPS/PS5Dump/eboot/eboot.bin \
  --window 0x8e0000:0x8e3000 \
  --addrs 0x8e0990,0x8e1100 --timeout 300
```

Rules learned the hard way:

* **Windows must not overlap.** Overlapping `PT_LOAD`s make Ghidra refuse the
  addresses, and the only sign is `// DumpC: no function at ...` for every id.
  Merge intervals before passing them (`tools/ghidra_dump.py` does not merge).
* **Use the SELF**, not the converted ELF: `--window` values are SELF-mapped
  virtual addresses (`docs/ps5-symbols.md`).
* Script output goes to `~/.config/ghidra/ghidra_12.1.4_PUBLIC/application.log`
  (`(GhidraScript)` lines) even when stdout looks empty; grep that file.
* A decompile of a 12 KB window takes ~7 s. If one address hangs, it is usually
  a switch on a jump table outside the window: widen the window, do not raise
  the timeout first.

## 3. Recovering a vtable

PS5 vtable bytes are **zero in the file** and filled at load. They come from the
load-time pointer table in the `---` segment
(file `0xac33c10`, VA `0xe7c54f0`): 24-byte records `(kind=8, function,
destination)`. Reconstruct with:

```sh
python3 - <<'PY'
import struct
d=open('../6RE/DUMPS/PS5Dump/eboot/eboot.bin','rb').read()
seg=d[0xac33c10:0xac33c10+0xe48b58]
recs={}
for i in range(0,len(seg)-24,8):
    t,v,a=struct.unpack_from('<QQQ',seg,i)
    if t==8 and 0<v<0x8f692dc and 0x9ecc000<=a<0xf60d048:
        recs.setdefault(a,v)
base=0xa3dca50                      # fiPackfile
for s in range(0,0x3c0,8):
    if recs.get(base+s): print(hex(s), hex(recs[base+s]))
PY
```

Slot numbers are byte offsets into the vtable, and the recovered bodies call
through them as `*(vtable + 0x3f0)` etc., so the offset is the name until the
declaration is matched.

## 4. NID naming

`tools/ps5nids.py` turns SDK symbol names into the 11-character NIDs the loader
uses and joins them against the eboot's imports. It is verified against the
AnyDevKit NID map (3/3 test symbols). See `docs/ps5-symbols.md`.

## 5. Imports and callers (both `-noanalysis`)

```sh
# every external/thunk of the program, as IMPORT|<va>|<library>|<name>
"$HL" "$PROJ" gta6_full -process eboot.bin -noanalysis -scriptPath tools \
  -postScript DumpImports.java

# callers of addresses, optionally decompiled
"$HL" "$PROJ" gta6_full -process eboot.bin -noanalysis -scriptPath tools \
  -postScript Xrefs.java 0x8401550,0x8401440 --decompile
```

Then `python3 tools/ps5nids.py imports --log <that log>` writes
`names/ps5_eboot_imports.tsv` (730 stubs, all named).

A program with no analysed functions returns **no** xrefs — that is not
"nothing calls it". For a body the project has not analysed, cut a window and
analyse it (`tools/ghidra_dump.py --window 0x8df0000:0x8e20000`): a 196 KB
window analyses in about **12 seconds**, so callers are chased this way.

If the project is missing functions where you expect them, check that you passed
the project directory (`.../ghidra_proj/gta6_full`) and not its parent.

## 6. MCP options

There is no Ghidra MCP server installed here (`ghidra-mcp`, `mcp-server-ghidra`
are absent), and the REA bridge cannot host 12.1.4. The options, in order of how
little they cost:

1. **Headless scripts (current).** `DumpC.java`, `ApplyPs5.java`, `ExtDiag.java`
   over `analyzeHeadless`. No server, reproducible, works today.
2. **GhidraMCP** (`https://github.com/LaurieWired/GhidraMCP`) — a Ghidra
   extension plus a Python MCP server; requires a **running Ghidra GUI** with
   the extension installed, i.e. a display, and it targets 11.x/12.x. If it is
   wanted: build the extension, drop it in
   `~/.config/ghidra/ghidra_12.1.4_PUBLIC/Extensions/GhidraMCP/`, start Ghidra
   with the program open, run `python3 bridge_mcp_ghidra.py`, then register:

   ```json
   {
     "mcpServers": {
       "ghidra": {
         "command": "python3",
         "args": ["/path/to/GhidraMCP/bridge_mcp_ghidra.py"],
         "env": { "GHIDRA_SERVER": "http://127.0.0.1:8080/" }
       }
     }
   }
   ```

3. **Upgrade Ghidra to ≥ 12.2** and let REA's own Ghidra provider drive it:
   `open_binary` + `analyze_function` + `procedure_pseudo_code`. This is the
   least custom code of the three and the only one that gives decompiled C with
   typed references through a stable API, but it means re-importing
   `ghidra_proj/gta6_full` under the new version.

Nothing in this repo installs or starts a server automatically; all three are
opt-in.
