# Reference sources and what each one contributes

| Source | What it is | What it gives this project |
|---|---|---|
| `MiscRef/GTAVSRC/src/dev_ng` | GTA V source tree (game + rage layers) | class vocabulary, `Class::Method` names, string literals, subsystem layout |
| `gdk/GDKs/GDK_2610.0.9661` | October 2026 Xbox GDK: headers + `.lib` import libraries, no `.winmd` | C prototypes for imported GDK functions |
| `/usr/x86_64-w64-mingw32/include` | mingw Win32 headers | prototypes for the `api-ms-win-*` imports |
| `6RE/DUMP/*.dll` | shipped GDK/middleware side DLLs (XCurl, libHttpClient.GDK, Bink2Scarlett, AMD FidelityFX, vcruntime/msvcp) | named functions with `.pdata` bounds, used as a byte-marker corpus |
| `roms/gtavps4/upd/eboot.bin` | GTA V PS4 (ELF64, stripped, no sections) | 122,153 function ranges from `.eh_frame_hdr`, used as a byte-marker corpus |
| `roms/rdr2ps4/upd/eboot.bin` | Red Dead Redemption 2 PS4 (same shape) | 147,119 function ranges, same use |
| `6RE/new/G6Recomp/docs` | notes from an independent recompilation effort on this exact executable | ground truth for structure: 298,742 `.pdata` functions, 139,307 leaves, imports, TLS, CFG absence, `int3` asserts |
| `6RE/new/five-star-recomp` | independent intake tooling | GDK thunk shape (`lea rcx,[clsid]`, `lea rdx,[iid]`, `call QueryApiImpl`), import classification |
| `misrefxbx/ScarlettX`, `gdk/other/OpenScarlett` | GDK HLE implementations | export lists and calling conventions for `xgameruntime`, `d3d12_xs`, `XTaskQueue`, `XAsync`, storage and input |

## What the PS4 eboots cannot provide

Both eboots are stripped: `e_shnum = 0`, no `.symtab`, no `.dynsym`, no MSVC RTTI (`.?AV…`) and no Itanium
vtable names (`_ZTV…`). They contribute function *ranges and bytes*, nothing with a name. Any naming that
mentions GTA V comes from the source tree, not from the eboot.

## GTA V source transfer

`gtav_strings.py` walks 16,873 source files and records the nearest qualified `Class::Method` for every
literal, keeping 148,314 literals of 12+ characters. It then looks each literal up in the executable's
string pool (all sections; `.text` itself holds ~201k printable runs in this build). 295 literals match,
covering 150 source functions.

`resolve_strings.py` maps a literal's RVA to the code that loads it by scanning every 4-byte window for a
RIP-relative operand: `target = position + 4 + displacement`. Instructions are not 4-byte aligned, so all
four phases are swept; an aligned-only scan found 56 of the 130 functions, the four-phase scan finds 130.

The transfer is deliberately conservative: it only renames a function that still has a `FUN_`/`sub_` name,
and the source function and literal are written into the body header as evidence.

## GDK prototypes

`gdk_imports.py` parses the import table, finds each function's declaration in the GDK and mingw headers,
normalises it to a C prototype, and records the IAT RVA from the PE (not from `objdump`'s `vma` column,
which is a different coordinate). 563 rows, 307 with a prototype.

`ApplyRefs.java` attaches them to the `ExternalLocation`s. 269 succeed; the remaining 38 take function
pointer parameters whose types Ghidra cannot synthesise, and are reported rather than silently dropped.
