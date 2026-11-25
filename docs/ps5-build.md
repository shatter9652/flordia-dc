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

The image base is 0 — text starts at virtual address 0. For the first four
segments the file offset is the VA plus `0x4000`; the fifth is mapped from a
lower offset, so it does not follow that rule and `tools/ps5elf.py` reports the
pair rather than deriving one from the other. Its flags are `---` while it still
carries file bytes, which is what the container says and not a reading error.

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
    --window 0x924e00:0x926000 --entry 0x924f60
```

That produces a 4,728-byte ELF that Ghidra loads as x86-64 in a few seconds and
decompiles `0x924f60` from.

## What the eboot gave

| Address | Size | Body |
|---|---|---|
| `0x00924f60` | 1878 B | `fiPackfile::Open` — allocate `0x80`, read header, derive layout, mount |
| `0x009256d0` | 976 B | device selection; compares device-type strings |
| `0x03588d60` | — | mount + directory listing, allocates `count * 0x108` |
| `0x02889420` | 275 B | `fiFile::Open` — magic-gates the caller's header, destroys on `-1` |
| `0x02889540` | — | `fiFile::Initialise` |

`RPF9` appears at `0x925092`, `0x9252f8`, `0x288943c` and twice in tables. `RPF0`
appears zero times, exactly as on Xbox: this build reads RPF9 only.

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
