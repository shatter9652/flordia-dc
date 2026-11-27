# Progress scale

The 1–10 scale this project uses for an objective. It measures **one objective**,
not the whole game, and it is a scale of *evidence*, not of effort: a level is
reached only when the code that level names exists as readable C in the tree and
every name in it is backed by a recorded address or measurement.

| Level | Name | What has to be true |
|---|---|---|
| 1 | Nothing | No code. Strings or constants may have been noticed, nothing recovered. |
| 2 | Anchors | The subsystem's literals, magics and entry-point candidates are located and recorded with addresses. No body is explained. |
| 3 | Layout | The on-disk/in-memory structures are proven field by field (sizes, offsets, `static_assert`s), from at least one build. |
| 4 | Open path | The construction path — open, header read, object graph — is readable C with every call named by address. |
| 5 | Index | The subsystem's lookup layer is readable C: how an id/name becomes a record, and what the record's fields mean. |
| 6 | Read path | The data path is readable C: reading, decompressing and handing bytes back, including the error/clamp arithmetic. |
| 7 | Write path | The inverse path exists: creating, packing, rewriting, with the same evidence standard. |
| 8 | Streaming | Asynchronous and dependent behaviour is reconstructed: streaming, prefetch, dependent archives, lifetimes. |
| 9 | Integration | The subsystem is wired into the rest of the engine the way the build wires it: device manager, mounts, consumers. |
| 10 | Finished | Human-readable, evidence-backed, and it **rebuilds byte-identically** against the retail image. |

Level 10 is the only level that proves the C is *correct*; levels 2–9 prove it is
*plausible and traceable*. Byte matching is objective 7 of the build order for
exactly that reason.

## Where each objective stands

| # | Objective | Level | Name |
|---|---|---|---|
| 1 | RPF loading / extracting / streaming | **5** | Index |
| 2 | Fuel | 2 | Anchors |
| 3 | Police & wanted | 2 | Anchors |
| 4 | Taunt / aggravate / diffuse / threaten | 1 | Nothing |
| 5 | Cameras (incl. vehicle slow-mo injury camera) | 2 | Anchors |
| 6 | Remaining subsystems | 1 | Nothing |
| 7 | Byte matching | 2 | Anchors (tooling built, 0 matched) |

## Why objective 1 is a 5 and not a 6

The open path (level 4) is complete on both builds: `fiFile`, `fiPackfile`, the
header read and the derived layout are readable C in
`src/sub_story/rage/base/file/packfile.cpp`. The lookup layer (level 5) is now
recovered from the PS5 build as a keyed index — `fiPackEntry_Offset`,
`fiPackEntry_Handle`, `fiPackEntry_IsCompressed`, `fiPackEntry_MakeId` — and the
directory scan that fills the handle array is transcribed (`fiFile_ScanDirectory`).

Level 5 is now complete rather than inferred. The table of contents decrypts on
all 18 retail archives, and the store behind it parses into real records in
`src/file/packfile_rpf9.cpp`: an id or a 32-bit name hash becomes a row, and
every field of that row is measured — offset, stored and unpacked size, flags,
crypto record, file id. The archive's own lookup body (`0x1cc1900`) is what names
the searched column, and the six column hashes are identified from the code that
loads them. `docs/evidence/rpf9-toc-transform.md` has the evidence.

Level 6 asks for reading, decompressing and handing bytes back. The bytes are
locatable and their sizes and compression flag are known, but the decompression
hand-off itself is not written out, so the rung is not claimed. The name heap is a
second open item: it is encrypted with a key the image does not expose here. So
the level is 5, complete, and the gap to 6 is named rather than papered over.
