---
title: Objective 1 — RPF loading, extracting, streaming
category: project
tags: [rpf, rpf9, packfile, objective]
sources: [src/sub_story/rage/base/file/packfile.cpp, docs/ps5-build.md, docs/rpf-crypto.md, docs/progress-scale.md]
updated: 2026-11-25
---

# Objective 1 — RPF9

**Level 5 / 10 — "Index".** Open path (level 4) is done on both builds; the
lookup layer (level 5) is now recovered from PS5. Level 6 is blocked on the TOC.

## What exists as readable C

`src/sub_story/rage/base/file/packfile.cpp` (982 lines):

| Piece | Build | Evidence |
|---|---|---|
| `fiFile` (0x60), `atString`, device slots | Xbox | `FUN_140fc2240`, `FUN_1456dd530` |
| `fiPackfile` (0x80), header + names + index | Xbox | `FUN_140fc2540`, `FUN_141fb2600` |
| `fiPackIndex` construct/build | Xbox | `FUN_141fb2780`, `FUN_14087aec0` |
| derived layout `+0x38..+0x68` | PS5 | `0x008e0990` |
| `fiPackEntry_Offset/Handle/IsCompressed/Read` | PS5 | `0x08401550`, `0x08401440`, `0x084015e0`, `0x08401690` |
| `fiFile_ScanDirectory` | PS5 | `0x03544790` |

## The two objects

`fiFile` is a 0x60-byte handle wrapper (device `+0x10`, handle `+0x18`, size
`+0x30`, path `+0x38`, extra handles `+0x50`). `fiPackfile` is a 0x80-byte
archive object that reads a header through it (file `+0x08`, header `+0x18`,
names `+0x20`, index `+0x28`). Proven by the vtable slot: `0x1462fd890` slot 1
is the allocator that calls the ctor.

## Open ends

1. **Name → id.** The PS5 index is keyed (`[[ps5-entry-index]]`); the caller-side
   hash that turns a path into an id is not identified yet.
2. **TOC contents.** Still opaque; the open path never calls the AES block, and
   7,210,119 aligned key windows find no key (`docs/rpf-crypto.md`).
3. **`RPFV`/`9` tag.** The 8-byte gate in the directory scan is proven as a gate,
   not explained as a format.
4. **Read diagnostics.** `fiPackEntry_Read` keeps the byte arithmetic, not the
   full reporting path.

## Related

- [[ps5-entry-index]]
- [[nid-names]]
- [[florida-dc]]
