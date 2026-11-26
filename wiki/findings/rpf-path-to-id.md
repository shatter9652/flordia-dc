---
title: RPF9 on PS5 — where an entry id comes from
type: finding
status: open
created: 2026-11-25
updated: 2026-11-25
tags: [ps5, rpf, packfile, objective-1]
---

# Where an entry id comes from

The keyed index answers `(field key, id) -> record`, and the id is **16 bits**:

```c
uint32_t fiPackEntry_MakeId(fiPackfile* self, uint32_t entryId) {
    return (fiPack_SlotPackfileIndex(self)(self) << 16)
         | ((entryId != 0 ? entryId : fiPack_SlotContextId(self)(self)) & 0xFFFFu);
}
```

So the caller we are looking for is the function that turns an archive path into
a 16-bit entry id, and everything above it composes that id with the packfile's
own index into the 32-bit key the index actually stores.

## What the call graph says

All four entry functions (`MakeId` 0x8401410, `Handle` 0x8401440, `Offset`
0x8401550, `Read` 0x8401690) have **zero direct callers**: an `E8 rel32` scan over
the whole image (mapping file offsets through the `PT_LOAD` table) finds none.
They are reached only through the vtable, which is why they appear as four-digit
slot calls rather than calls:

| byte pattern | meaning | sites in text |
| --- | --- | --- |
| `FF 90 00 04 00 00` | `call qword ptr [reg+0x400]` (record lookup) | 131 |
| `FF 90 C8 03 00 00` | `call qword ptr [reg+0x3c8]` (packfile index) | 48 |
| `FF 90 D8 03 00 00` | `call qword ptr [reg+0x3d8]` (context id) | 13 |

`fiFile_ScanDirectory` (0x3544790) is different: it has exactly **one** direct
caller, at **VA 0x8e0ce8**. That is the best lead for the directory-open path.

## What has not worked yet

* A windowed import of `0x8df0000:0x8e20000` (196 KB, 12 s of analysis) did not
  seed a function at `0x8e0ce8`, so the containing body is still unrecovered;
  `DumpC.java` now falls back to `getFunctionContaining` and reports
  `no function at ...` rather than creating a fragment.
* The full-program project has 730 import stubs and no analysed code outside
  them, so `Xrefs.java` against it returns nothing for these addresses. The
  windowed path is the one that has to be used for callers.

## Next probes

1. Disassemble backwards from `0x8e0ce8` for a prologue (`55 48 89 e5`,
   `48 83 EC ..`, `41 57`) and decompile from there in the same window.
2. A wider window (`0x8d00000:0x8f00000`) if the entry lies further back.
3. Once the caller is recovered, check whether it hashes the basename or the
   full normalised path — that decides whether `fiPackEntry_MakeId`'s 16-bit half
   is an index into a per-directory array or a name hash.

Related: [[ps5-entry-index]], [[objective-1-rpf]]
