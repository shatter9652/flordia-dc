---
title: florida-dc
category: project
tags: [gta6, rage, decompilation, scope]
sources: [README.md, docs/objectives.md, docs/layout.md]
updated: 2026-11-25
---

# florida-dc

Recovered, source-shaped C/C++ for **GTA VI** — Xbox Series X build
`game_scarlett_master.exe` 1.0.2.1, cross-checked against the PS5 `eboot.bin`.
Not a leak, not a disassembly dump, not runnable: decompiled functions written
the way RAGE code is written, each name backed by an address or a measurement.

## Shape of the tree

- `src/sub_story/rage/<layer>/...` and `src/sub_story/game/<area>/...` mirror
  GTA V's `src/dev_ng` split. The image's own PDB path names `src/sub_story`, so
  that is the VI analogue and not a guess.
- `docs/` holds the deliverables: objectives, layout rules, PS5 container and
  symbols, RPF crypto, matching toolchain.
- `tools/` is every reader, matcher, generator and Ghidra script.
- `wiki/` (this vault) is memory, not a deliverable.

## Build order

Objective order is fixed and lives in `README.md` and `docs/objectives.md`:

1. RPF loading / extracting / streaming ← current
2. Fuel
3. Police & wanted
4. Taunt / aggravate / diffuse / threaten
5. Cameras, including the vehicle slow-motion injury camera
6. Remaining subsystems
7. Byte matching (last, because it is the only proof)

## What the anchors taught

Subsystem names in this build are mostly **lookup keys, not code strings**:
`%s.rpf`, `Crime Tuning`, `LOW_FUELH`, `driverSettings_Rpf*` each occur once and
have zero code references, direct or through a pointer slot. Only `Camera_Move`
is addressed by code. So names say what data is called, never where a function
is; structure has to come from constants. See [[objective-1-rpf]].

## Related

- [[objective-1-rpf]]
- [[ps5-toolchain]]
