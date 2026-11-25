# Layout rules

The tree mirrors `MiscRef/GTAVSRC/src/dev_ng` so a recovered body sits where the same code sits in GTA V's
source, and follows `gta_decomps/` (re3, reVC, gta-reversed) for the one-body-per-folder convention.

```
src/sub_story/
├── game/
│   ├── Core/<Function>/<Function>.cpp
│   ├── audio/<Function>/<Function>.cpp
│   ├── ai/<Function>/<Function>.cpp
│   ├── Peds/<Function>/<Function>.cpp
│   ├── Vehicles/<Function>/<Function>.cpp
│   ├── renderer/<Function>/<Function>.cpp
│   ├── physics/<Function>/<Function>.cpp
│   ├── streaming/<Function>/<Function>.cpp
│   ├── network/<Function>/<Function>.cpp
│   ├── frontend/<Function>/<Function>.cpp
│   ├── script/<Function>/<Function>.cpp
│   ├── task/Scenario/<Function>/<Function>.cpp
│   ├── vfx/particles/<Function>/<Function>.cpp
│   └── <source dir from the match>/…
└── rage/
    ├── base/<Function>/<Function>.cpp
    ├── framework/<Function>/<Function>.cpp
    ├── suite/<Function>/<Function>.cpp
    └── script/<Function>/<Function>.cpp
```

## Rules

1. **Named bodies land in their GTA V source directory.** `matches/gtav_source_functions.tsv` records the
   GTAVSRC file the owning function lives in, so `atLiteralHashString::TryGetString` (from
   `rage/base/tools/cli/parsertools/psoprinter.cpp`) is written to
   `src/sub_story/rage/base/tools/cli/parsertools/…`. The two trees line up file for file.
2. **Unnamed bodies use the resource paths they load**, then a subsystem bucket: `common:/data/ai/...` →
   `game/ai`, `platform:/data/ui/loose/...` → `game/frontend/ui`, `peds` → `game/Peds`, `vehicle` →
   `game/Vehicles`, `rage` → `rage/base`, fallback `game/Core`. The paths come from the image itself
   (`names/exe_paths.tsv`).
3. **One folder per function**, `<Function>/<Function>.cpp`, with `::` flattened to `__` so the path is
   legal: `src/sub_story/game/task/Scenario/<Function>/<Function>.cpp`.
4. **The body header is provenance**: address, size, name, subsystem, class, the GTAVSRC function and file,
   the literal that proved the match, and the strings the body loads.
5. **Per-class headers are generated** into `include/gta6decomp/<Class>.h`, GTAVSRC-style: one header per
   class, listing the recovered methods and where their bodies live.
6. **A `FUN_<address>` name means the evidence ran out**, and it stays visible.

## Why not one file per class, like GTAVSRC?

Because a GTA VI function boundary is known exactly (`.pdata`) while a GTA V class's method grouping is not
recoverable from a stripped binary. One body per folder keeps the mapping 1:1 with evidence; the generated
class headers give the GTAVSRC reading view without inventing the grouping.
