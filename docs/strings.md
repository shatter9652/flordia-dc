# What the string dumps contain, and what they yielded

Six dumps of `game_scarlett_master.exe` were checked for source paths, file names and identifiers.
The honest result: the executable keeps almost no source vocabulary, and most of the raw dumps are
byte noise rather than strings.

| Dump | Size | What it is | Useful? |
|---|---|---|---|
| `strings2.txt` | 216,422 lines | plain `strings` pass, min length 4 | yes: 50 content paths, `Class::Method` names for GDK services |
| `all_strings.txt` | 29,040 lines | filtered printable run set | yes: same names, plus `%s`-style format strings |
| `game_scarlett_master.exe.strings.txt` | 1,160,706 lines | raw 8-bit run dump | mostly false positives: hashing tables and float data read as text |
| `game_scarlett_master.exe.unicodestrings.txt` | 125 lines | UTF-16LE runs | no: the image stores its text as UTF-8 |
| `rdata_strings.txt` | 565,443 lines | `objdump -s` hex + ASCII of `.rdata` | only through the ASCII column; the hex column inflates every count |
| `out.txt` | 999 lines | `objdump -x` headers | no strings, but confirms the section map |

## What was recovered

- **The source root.** One absolute path, in the linker's PDB name:
  `X:/americas/src/sub_story/game/vs_project/Gaming.Xbox.Scarlett.x64/Build/master/game_scarlett_master.pdb`
  (see `docs/source-layout.md`).
- **Content namespaces.** 50 `common:/`, `platform:/`, `assets:/`, `levels:/` paths naming the areas the
  data is split into (`ai`, `ui`, `audio`, `shaders`, …). `tools/exe_paths.py` writes all 65 path rows to
  `names/exe_paths.tsv`.
- **SDK method names** in `all_strings.txt`, e.g. `LocalStorageService::DeleteAsync`,
  `HttpCall::Perform`, `User::Copy` — the GDK service surface the title calls. These describe imports, not
  game functions, so they are not used to rename bodies.
- **A handful of loose file names** (`prompts.meta`, `speechevents.meta`, `dlclist.xml`,
  `fallback_heightmap.dat`), which confirm the `.meta`/`.xml` content convention but do not map to code.

## What is not there

- **No `__FILE__` paths.** Not one `.cpp` path exists outside the PDB. MSVC only emits `__FILE__` for
  assert text, and this build's assert strings carry no file names.
- **No `rage/…` or `game/…` directory strings.** The rage layer is only visible through class names and the
  GTA V source match table.
- **No symbol table, no RTTI names in the exe** (`.pdata` only), and no Itanium vtable names.

## Consequence for the layout

Directory assignment is therefore three-tiered, strongest evidence first, and each body header says which
tier placed it:

1. the GTA V source file that named the function (`matches/gtav_source_functions.tsv`), 130 functions;
2. the content namespace the body itself loads (`common:/data/ai/...` → `game/ai`);
3. the subsystem bucket derived from the strings and the class (`game/Core` fallback).

`strings2.txt` was also compared against GTAVSRC for name transfer: 295 literals match, 150 GTA V source
functions, 130 resolvable to the loading function. That is the naming pipeline, and it is the only one that
produced function names.
