---
title: PS5 RPF9 entry index — keyed, not name-sorted
category: finding
tags: [rpf9, packfile, ps5, index, vtable]
sources: [docs/ps5-build.md, src/sub_story/rage/base/file/packfile.cpp]
updated: 2026-11-25
---

# The PS5 index is keyed

**Claim.** The PS5 build does not binary-search a name-sorted entry array. Every
entry question is `lookup(vtable + 0x400)(packfile, 64-bit key, 32-bit id)`.

**How it was found.** The `fiPackfile` vtable bytes are zero in the file; they
are rebuilt from the load-time pointer table in the `---` segment (24-byte
records `(8, function, destination)`, base `0xa3dca50`). All 116 reachable
bodies were decompiled and searched for the Xbox `FindEntry` signature — an
`0x41..0x5A` range test, `+0x20` lowercase, `>> 1` midpoint. **Zero hits.** What
the bodies do instead is a constant-keyed lookup.

## The four keys

| Key | Shape | Fields read |
|---|---|---|
| `0xba180afb232d1b4b` | head | `+0x0C` offset; `+0x11` flag; span packed in `+0x00` |
| `0x33f70dfaf2c50989` | body | low 40 bits of `+0x00`; `+0x06` flag |
| `0x4eaa16dd829995bc` | tail | `+0x04` offset; `+0x08` low 48; `+0x0F` flag |
| `0xcbb68ff7b7078db7` | handle | `+0x00` slot index; `0xFFFFFFFF` = none |

## The ids

`id = (GetPackfileIndex() << 16) | entryId`, built in `FUN_08401440` from
`+0x3c8` and `+0x3d8`. `entryId << 4` is always the TOC offset, so the records
are the same 16-byte `fiPackEntry` the Xbox build has.

## Span arithmetic (the extractor's bit)

`FUN_08401690` computes an entry's span as

```
span = (head >> 32 & 0xFFFFFFF0) + (head & 0x7FFFFFF0)
```

two 28-bit counts scaled by 16 and summed — the stored and the uncompressed size
of the entry. That is the number a streaming read clamps against.

## Directory scan

`0x03544790` builds the handle array the index points into: 0x108-byte find
records, `path/name`, open `[dev+0x30]`, read 16 bytes `[dev+0x68]`, gate on the
8-byte tag `0x5250465639000000` ("RPFV"/"9"), close `[dev+0x98]` on mismatch,
push on match. Capacity `+0x48`, count `+0x4C`, array `+0x50`, doubling.

## Unknown

- Which function hashes a path into `entryId`. Not found; the eboot's
  `atStringHash64` analogue is unidentified.
- What `RPFV`/`9` names.
- Whether the head/body/tail records are three versions of the same struct or
  three kinds of entry.

## Related

- [[objective-1-rpf]]
- [[ps5-toolchain]]
