# The PlayStation 5 build

VI ships for PlayStation 5 as well as Xbox Series X, from the same source tree.
The PS5 release is the more useful of the two to read in one respect: its
`eboot.bin` is not stripped to the same degree, and its warm paths are inlined
differently, so a body that is a 158-byte stub on Xbox is 1878 bytes of explicit
arithmetic on PS5. This page is about reading that image, and about the one thing
it turned out *not* to give us.

Nothing here changes the objective 1 result. It is a second reading of the same
layer, and `docs/rpf-crypto.md` has the crypto half of it.

## The container, and why a stock loader refuses it

`eboot.bin` and every `*.prx` in `sce_module/` start with a SELF header, not with
`\x7fELF`:

| Field | `eboot.bin` | `sce_module/*.prx` |
|---|---|---|
| first 4 bytes | `4f 15 3d 1d` | `4f 15 3d 1d` |
| embedded ELF | at `0x1a0` | same |
| `e_type` | `0xfe10` `ET_SCE_DYNEXEC` | `0xfe10` |
| `e_machine` | `0x3e` (x86-64) | `0x3e` |
| OSABI / ABIVERSION | `9` / `2` (**Prospero**) | same |
| `e_entry` | `0x4366790` | per module |

Two separate things break a normal import, and both are container-level:

1. The first bytes are a SELF magic, so format detection either gives up or
   guesses.
2. `e_type` is an SCE type. Even when the ELF is found, a loader that only knows
   `ET_EXEC`/`ET_DYN` reports it as an unsupported — often "Orbis" — image.

Neither is a property of the code. The program header table already describes the
Prospero image correctly, and its `p_offset` values are absolute offsets into the
SELF file, so the bytes at those offsets are the loaded image as shipped.
`tools/ps5elf.py` therefore rewrites *only the container*:

* a 64-byte ELF header at offset 0, `e_type = ET_DYN`;
* the original `PT_LOAD` entries with `p_vaddr` / `p_memsz` unchanged, so every
  address in the decompiler matches the retail image;
* the new program header table appended at end of file, so no segment byte moves.

Executable segments are rewritten to `r-x`. SCE marks text `--x`, which is legal
in the container and fatal for a disassembler: Ghidra will not disassemble a block
it cannot read.

```sh
python3 tools/ps5elf.py info 6RE/DUMPS/PS5Dump/eboot/eboot.bin
python3 tools/ps5elf.py convert 6RE/DUMPS/PS5Dump/eboot/eboot.bin /tmp/eboot.elf
```

## The image as loaded

The eboot is 195,555,354 bytes. Its ELF has no section headers and 14 program
headers, of which five are `PT_LOAD`:

| Segment | Flags | File | VA | Filesz | Memsz |
|---|---|---|---|---|---|
| text | `--x` | `0x00004000` | `0x00000000` | `0x8f692dc` | `0x8f692dc` |
| rodata | `r--` | `0x08f70000` | `0x08f6c000` | `0x0f5cec0` | `0x0f5cec0` |
| data | `rw-` | `0x09ed0000` | `0x09ecc000` | `0x05219e0` | `0x0524000` |
| data | `rw-` | `0x0a3f4000` | `0x0a3f0000` | `0x07ee4b6` | `0x43d54e8` |
| `---` | `---` | `0x0abe54f0` | `0x0e7c54f0` | `0x0e48b58` | `0x0e48b58` |

The image base is 0 — text starts at virtual address 0. The `p_offset` column is
an *image* offset, not a file offset: the SELF repacks every segment into its own
block, and the blocks are listed in the entry table right after the 0x20-byte
header. For the text segment that is the difference between reading code and
reading 280,016 bytes of zero padding:

| Segment | `p_offset` | SELF block | delta |
|---|---|---|---|
| text | `0x00004000` | `0x000485d0` | `+0x445d0` |
| rodata | `0x08f70000` | `0x08fb93b0` | `+0x493b0` |
| data | `0x09ed0000` | `0x09f18b90` | `+0x48b90` |
| data | `0x0a3f4000` | `0x0a43e4f0` | `+0x4a4f0` |
| `---` | `0x0abe54f0` | `0x0ac33c10` | `+0x4e720` |

Three measurements pin this down: bytes `0x4000..0x485d0` are entirely zero;
the text block starts with `cc` padding and a function prologue at `+0x10`,
which is where `_start` belongs; and `e_entry` (`0x4366790`) disassembles as a
function entry only at file offset `0x43aed60`, i.e. `e_entry + 0x485d0`. The
deltas differ per segment, so a single `VA - 0x4000` rule is wrong for every
segment except by accident — and a cross-segment reference shifts by the
difference of the two deltas. `tools/ps5elf.py` resolves segment to block by
exact length and now prints both numbers; `va`/`off` convert between them.

The fifth segment's flags are `---` while it still carries file bytes, which is
what the container says and not a reading error.

The remaining headers are SCE-specific — `PT_SCE_DYNLIBDATA`,
`PT_SCE_LIBVERSION`, `PT_SCE_RELA` — alongside `PT_GNU_EH_FRAME`,
`PT_GNU_RELRO`, `PT_TLS`, `PT_NOTE` and `PT_DYNAMIC`. The SCE segment types are a
second reason a stock loader classifies this as an unknown platform.

An eboot this size cannot be imported whole and analysed in a sitting. The tool
takes a window instead, and one detail matters there: a stripped ELF with no
entry point inside the window gets *one* function and nothing else, because
Ghidra only creates bodies from entry points and seeds. Pass `--entry`:

```sh
python3 tools/ps5elf.py convert 6RE/DUMPS/PS5Dump/eboot/eboot.bin /tmp/fipack_open.elf \
    --window 0x8e0800:0x8e1400 --entry 0x8e0990
```

That produces a 3,192-byte ELF that Ghidra loads as x86-64 in a few seconds and
decompiles `0x8e0990` from.

## What the eboot gave

| Address | Size | Body |
|---|---|---|
| `0x008e0990` | 1878 B | `fiPackfile::Open` — allocate `0x80`, read header, derive layout, mount |
| `0x008e1100` | 976 B | device selection; compares device-type strings |
| `0x03544790` | — | mount + directory listing, allocates `count * 0x108` |
| `0x02844e50` | 275 B | `fiFile::Open` — magic-gates the caller's header, destroys on `-1` |
| `0x02844f70` | — | `fiFile::Initialise` |

`RPF9` appears at `0x8e0ac2`, `0x8e0d28`, `0x2844e6c` and twice in tables
(`0x8403ad0`, `0x8403b06`). `RPF0` appears zero times, exactly as on Xbox: this
build reads RPF9 only. These are the corrected image addresses; the first pass
of this page listed them `0x445d0` too high because it treated `p_offset` as a
file offset (`docs/ps5-symbols.md` has the correction and the measurement).

The field map is the one already reconstructed from the Xbox bodies, and the PS5
body confirms it rather than correcting it — a `0x60`-byte file object (`device
+0x10`, handle `+0x18`, size `+0x30`, `atString` path `+0x38`) and a `0x80`-byte
packfile object (`file +0x08`, header `+0x18`, names `+0x20`, index kind `+0x28`,
block `+0x30`). The header is consumed at the same 64-byte offsets. Two details
are new, and are transcribed into `packfile.cpp` as `fiPack_ComputeLayout`:

* `mode` (`+0x2C`) is used as an alignment, not just as the `8 + mode` name-record
  stride;
* bit 0 of `+0x2D` selects a 16-byte or 4-byte alignment class for the derived
  regions, and `0x0F` — the value in all four archives in the dump — takes the
  16-byte path.

One slot is still open. The Xbox bodies call `Read` through `[device+0x60]`, the
PS5 body through `[device+0x68]`. Both are recorded in `fiDevice` and neither is
called settled.

## The firmware dump is not decrypted

`PS5FW/dumps/{11.60,12.70}/2_updatemode.elf` is a SELF (`54 14 f5 ee`) around a
Prospero `ET_SCE_EXEC` (`0xfe00`) ELF, text at `0x400000`. It converts and loads
as Prospero — that part of the import problem is solved:

```sh
python3 tools/ps5elf.py convert PS5FW/dumps/11.60/2_updatemode.elf /tmp/updatemode.elf
```

and it opens as x86-64. But only the SELF and ELF headers are plaintext. Every
segment body measures entropy 8.000 with no real strings, so Ghidra analyses it
and finds one procedure and zero strings. That is the correct answer for an
encrypted payload, not a loader failure — the same conversion on the eboot yields
4,429 defined strings and the bodies above.

The rest of the dump is in the same state: `kdata1001.bin` (86 MB) begins with a
pointer table rather than an ELF, and `5_kernel.bin` is high entropy. The dump is
therefore **not** usable as a firmware reference until its bodies are decrypted;
only container-level facts can be read from it today.

`sce_module/libc.prx` and `sce_module/libSceNpCppWebApi.prx` are SELF-wrapped like
the eboot and have not been analysed yet. They are the natural next read: a
libc that is less stripped than the game would name a good deal of what the eboot
calls into.

## Addresses are not shared between builds

The PS5 addresses are PS5 addresses. They are recorded because they are the
evidence, not because they map to anything in `GTA5.exe`'s tree or in the Xbox
image. Where a body is named in `packfile.cpp`, the comment says which build its
address came from.

## Entry lookup: a keyed index, not a name search

The single most important PS5 finding for objective 1. On Xbox, `FindEntry`
(`GTAVSRC packfile.cpp:881`) binary-searches a name-sorted array of 16-byte
`fiPackEntry` records, lowercasing each path component inline and comparing
against `m_NameHeap + (m_Entries[mid].m_NameOffset << m_NameShift)`. **None of
that exists in the PS5 bodies that were decompiled.** There is no `0x41`/`0x5A`
range test, no `+0x20` lowercase and no `>> 1` midpoint in the 50 bodies of the
packfile cluster (`0x83fda90`–`0x8403dc0`) that decompiled successfully; a
handful of vtable slots outside that cluster did not answer in the windowed
decompile, so "all 116" is not claimed.

Instead every entry question is a lookup by `(64-bit key, 32-bit id)` through
vtable slot **+0x400**, and the four keys are constants:

| Key | Record | Fields the recovered bodies read |
|---|---|---|
| `0xba180afb232d1b4b` | head | `+0x0C` u32 offset; `+0x11` compressed flag; packed span in `+0x00` |
| `0x33f70dfaf2c50989` | body | low 40 bits of `+0x00` = offset; `+0x06` flag |
| `0x4eaa16dd829995bc` | tail | `+0x04` u32 offset; `+0x08` low 48 bits; `+0x0F` flag |
| `0xcbb68ff7b7078db7` | handle | `+0x00` u32 slot into the handle array; `0xFFFFFFFF` = none |

The interface around them, taken from the call sites:

| Slot | Shape | Reading |
|---|---|---|
| `+0x3c8` | `u32 f()` | `GetPackfileIndex` — high half of every lookup id |
| `+0x3d8` | `u16 f()` | the object's own context id |
| `+0x3f8` | `bool f(obj, key, id)` | per-entry flag query |
| `+0x400` | `void* f(obj, key, id)` | record lookup, null = no such record |

An id is `(packfileIndex << 16) | entryId`, built in `FUN_08401440` from the two
slots above; the read state stores the composed value at `+0x10008`. A record's
TOC offset is always `entryId << 4`, which is what ties the keyed store back to
the 16-byte `fiPackEntry` of the Xbox build.

Bodies transcribed in `packfile.cpp`:

| Address | Name | What it does |
|---|---|---|
| `0x08401440` | `fiPackEntry_Handle` | id -> (offset, read handle); handle table or the pack's own handle |
| `0x08401550` | `fiPackEntry_Offset` | id -> TOC byte offset, all three record shapes |
| `0x084015e0` | `fiPackEntry_IsCompressed` | the flag byte of whichever shape answered |
| `0x08401690` | `fiPackEntry_Read` | read with whence semantics; span = `(hi32 & 0xFFFFFFF0) + (lo32 & 0x7FFFFFF0)` |

### Where the names went

If the index is keyed, a path lookup has to become an id somewhere above it. The
caller-side hash is **not yet recovered**: the eboot's own `atStringHash64`-like
function has not been identified, so "`common:/data/x.ymt` becomes id N" is an
open question, not a result. Recorded as an unknown in `wiki/findings/ps5-entry-index.md`.

## Directory iteration: `0x03544790`

The other half of objective 1's index work. `fiFile_ScanDirectory` in
`packfile.cpp` walks a device find list of **0x108-byte** records and, per record:

1. builds `path = *atString(file + 0x38) + '/' + record.name` (name at `+0x2C`)
2. opens it through device vtable **+0x30**
3. reads **16 bytes** through **+0x68**
4. compares the first 8 against `0x5250465639000000` and closes through
   **+0x98** on a mismatch
5. keeps the handle in the growable array at `file + 0x50` (capacity `+0x48`,
   count `+0x4C`, doubling growth)

The 8-byte tag is the big-endian pair **`RPFV` / `9`**, not the RPF9 header magic
(`0x52504639`, a 32-bit compare inside `Open`). What sub-format `RPFV` names is
still unrecovered; what is proven is that a 16-byte read is gated on it and that
only gated handles ever reach the array `fiPackEntry_Handle` indexes. The entry
slots in the keyed index point into exactly this array.

## The symbol pass is blocked, not passing

`ApplyPs5.java` runs under `analyzeHeadless` and prints the `REFS|...` line that
`tools/progress.py` consumes. On this machine the run reaches `Opening project`
and the JVM exits with no report and no `REFS|` line, twice, on a 195 MB image.
The host is the limit: **3 GB of RAM (about 1 GB free + 9.8 GB swap)**, a
941 MB Ghidra project and a 195 MB image. The earlier attempts asked for
`MAXMEM=6000M`, which cannot be honoured here, and the JVM disappeared right
after `Opening project` — that is an out-of-memory kill, not a script error. A
stale `gta6_full.lock` from the killed run was also present and has been removed.

A retry bounded to the host was made: `MAXMEM=1800M`, `timeout 900`,
`-process eboot.bin -postScript ApplyPs5.java`. Result, measured:

* the project opened and the file was reached (`REPORT: Processing project file: /eboot.bin`)
* GhidraProspero's `NIDAnalyzer` resolved **736** import NIDs in place, e.g.
  `f7uOxY9mM1U` → `__stack_chk_guard` (libkernel.prx),
  `2sWzhYqFH4E` → `_Stdout` (libc.prx); zero unresolved
* auto-analysis of the 195 MB image did not finish inside 15 minutes, so the
  run was killed and **`ApplyPs5` never ran** — **no `REFS|` line was produced**

The PS5 symbol pass therefore stays "not produced" in `docs/ps5-symbols.md`.
It needs a host with more RAM and a longer wall clock, not a different script.
The 736 resolved NIDs are the one durable result of the attempt.
