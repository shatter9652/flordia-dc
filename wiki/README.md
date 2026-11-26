---
title: florida-dc wiki
category: index
tags: [gta6, decompilation, rpf, ps5]
sources: [README.md, docs/objectives.md, docs/ps5-build.md]
updated: 2026-11-25
---

# florida-dc wiki

A working memory for the GTA VI reconstruction: what is proven, where the
evidence lives, and what is still open. The prose docs under `docs/` are the
deliverables; these pages are the index into them and the trail of decisions.

## Start here

- [[florida-dc]] — what the project is, what it is not, and the build order.
- [[objective-1-rpf]] — the current objective, its level, and its open ends.
- [[ps5-entry-index]] — the keyed RPF9 index recovered from the PS5 build.
- [[rpf-path-to-id]] — where the 16-bit entry id comes from; still open.
- [[nid-names]] — how PS5 NIDs were turned back into symbol names.
- [[ps5-import-names]] — all 730 eboot imports, named.
- [[ps5ref-corpus]] — what is worth reading in `ps5ref/` (nid-map, AnyPS5,
  opengnm, psbc).
- [[ps5-toolchain]] — which tools work on this machine and which do not.
- [[2026-11-25]] — session log for this pass.

## State at a glance

| Objective | Level | Name |
|---|---|---|
| 1 RPF | 5 | Index (symbol pass now emits its REFS line) |
| 2 Fuel | 2 | Anchors |
| 3 Police | 2 | Anchors |
| 4 Taunts | 1 | Nothing |
| 5 Cameras | 2 | Anchors |
| 6 Remaining | 1 | Nothing |
| 7 Byte matching | 2 | Anchors |

Scale definition: `docs/progress-scale.md`. Level 10 is byte-identical rebuild;
nothing above 5 has been reached by any objective.

## Hard rules

- The Xbox image and the retail game binaries are never committed or redistributed.
- `MiscRef/GTAVSRC` is read-only reference; never modify it.
- Use the SELF (`6RE/DUMPS/PS5Dump/eboot/eboot.bin`), not the converted ELF.
- Every name in `src/` needs an address or a measurement behind it.
