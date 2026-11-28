# Progress scale

Ten levels, ordered by **what the recovered code can actually do**, not by how
close it reads to the retail image. Level 10 is a working subsystem: something a
person can run against the shipped files and get correct output from. Byte
matching is a separate axis (`docs/objdiff.md`) and is not required at any level
here — a body only has to be correct and attributable.

The rule that keeps the number honest: **a level is reached when the claim is
demonstrated on real archives, not when the code looks right.** Each rung names
the evidence that proves it, and an unmet rung is reported as unmet.

| Level | Name | What has to be true |
|---|---|---|
| 1 | **Not even close** | Nothing identified. Magic numbers and strings maybe found, no structure. |
| 2 | **Located** | The subsystem is found in the image: its entry points, literals and data are anchored to addresses. Nothing is understood yet. |
| 3 | **Layout** | The on-disk structures are proven field by field against real files — offsets, widths, and the arithmetic that turns them into byte ranges. |
| 4 | **Opens** | The open path runs: a real archive's header is read and its geometry resolved, with the error/edge cases handled instead of assumed. |
| 5 | **Indexes** | Real archives list their real entries. Every field of an entry is measured, not inferred, and an id or key provably resolves to a row. |
| 6 | **Decrypts** | Entry payloads come back decrypted. The cipher is the one the shipped build uses, driven by the archive's own key material. |
| 7 | **Decompresses** | Decrypted entries are decompressed and handed back at their recorded unpacked size, checked entry by entry. |
| 8 | **Extracts** | A whole archive extracts: every entry written out, sizes verified, no manual per-file steps. |
| 9 | **Streams** | Partial and seekable reads work — read a range of an entry without materialising it — and dependent archives resolve. |
| 10 | **Works** | End to end on the shipped data: list, extract and verify across every retail archive, with failures reported rather than crashed on. Names resolve where the archive carries them. |

## Why this replaces the old scale

The previous scale topped out at "byte-identical against the retail image". That
is a real and interesting goal, but it is not a measure of whether the recovered
subsystem *works*: it is gated on a matching PS5 toolchain and per-translation-unit
objects that the dump does not contain, and this project's honest baseline there
is 0 matched functions (`docs/objdiff.md`). Under it, a fully working RPF9 reader
would still have scored 9.

So the working scale measures capability, and `docs/objdiff.md` keeps the
byte-match number as its own axis. Neither number is allowed to stand in for the
other.

## Objective 1 — RPF loading / extracting / streaming

**Level 9 of 10 — Streams. Reached.**

Proven: the table of contents decrypts on all 18 retail archives, and the column
store behind it parses into real entries. Offset, stored and unpacked size,
flags, crypto record, 64-bit file id and the 32-bit search key all resolve, and
the C++ parse agrees with an independent one on 1,081 entries across four
archives (`docs/evidence/rpf9-toc-transform.md`). An id becomes a row, and the
row's fields are measured.

**Level 6 of 10 — Decrypts. Reached.**

The payload family is the white-box CTR at vtable `0xa397c20`:
`+0x10 → 0x3985bc0` (init) and `+0x18 → 0x2ae0a50` (decrypt), which consumes the
`0x1120`-byte state. Init takes a `0x2718ce5d` blob from the archive's own 24-record
key list, a 16-byte seed written to `state+0x10f0`, and block size `0x10`; decrypt
XORs against the keystream block at `state+0x1101`, regenerating it and advancing
the seed as a big-endian counter. A fresh state is required per payload because
the counter is stateful. `0x43697c0` is not a gate — it is a lazy table loader
that returns the fixed success token `0x24a187b9`, and short-circuiting its
readiness byte `0xac6e511` is all the cipher needs outside the game.

Demonstrated in `tools/rpf9payload.py` with no game object: `appdata0` 2/2 rows
decrypted and inflated to their exact recorded sizes (976 and 25264 bytes), with
readable `PSIN`/`SUB_STORY` content.

**Level 7 of 10 — Decompresses. Reached, with an open class of entries.**

Decrypted payloads are raw deflate (`wbits=-15`) and are handed back at the
recorded unpacked size, entry by entry: `common` 123 encrypted rows plus 269
stored rows, `data` 109 plus 384, `shaders` 2 stored. What is *not* yet covered is
entries whose crypto record carries a non-zero pattern — `(0x400, 0x400, 0x1c00,
0, 4)` versus `(0, 0x1000, 0, 0, 4)` — three known cases (`common` 410/416,
`data` 656). They do not yield to the recorded seed, a body-carried seed, a
keystream block shift, or an offset-derived counter base, so the pattern selects
a chunked framing that is still undecoded (`docs/evidence/rpf9-toc-transform.md`).

**Level 8 of 10 — Extracts. Reached, with one named class outstanding.**

The payload turned out to be only *partly* encrypted: the crypto record's pattern
`(0x400, 0x400, 0x1c00, 0, 4)` masks the first `0x800` bytes and leaves the rest
of the stored range plaintext, and `(0, 0x1000, 0, 0, 4)` covers the whole range.
With that rule, `tools/rpf9extract.py` writes every entry of an archive, records
a manifest and verifies each file against its recorded unpacked size, with no
manual per-file steps.

Demonstrated on ten archives: `appdata0` 2/2, `navmeshes` 1/1, `script_concat`
2/2, `levels` 29/29 and `shaders` 2/2 extract completely and verify; `common`
415/418, `packs` 106/112, `anim` 24/30, `textures` 1/2 and `data` 545/659. Two
runs were written to disk and the files re-checked one by one (`appdata0` 2/2,
`levels` 29/29, exact sizes).

The outstanding class is entries with more than `0x1c00` stored bytes — the
pattern's third word — and it is concentrated in `data`. Level 10 needs that
class, and the name heap is still encrypted so entries are addressed by id
rather than by path.

**Level 9 of 10 — Streams. Reached, with the same residual class.**

`tools/rpf9stream.py` serves a byte range of one entry without materialising it.
The two storage shapes get two different paths, and both are measured:

* **stored** (`stored >= unpacked`): a seek and a read. `common` row 314 is
  14,262,160 bytes and 64 bytes at offset 4096 cost **64 stored bytes**;
  `levels_concat` row 874 is 3,512,489,616 bytes and 4,096 bytes at offset
  3,000,000,000 cost **4,096 stored bytes**, equal to a direct `pread` into the
  202 GB archive.
* **deflated**: the stored bytes are streamed in chunks, decrypted chunk by
  chunk with one persistent cipher state (the CTR counter is state), inflated
  incrementally, and output before the requested offset is discarded. Reading
  stops when the range is complete, so peak memory is one chunk. `data` row 573
  (335,136 stored → 9,905,576 unpacked) serves its last 64 bytes for 196,608
  stored bytes — 59% of the entry, not all of it.

Demonstrated: **1,128 entries across ten archives and 3,551 random windows**,
compared byte for byte against the level-8 decode
(`rpf9extract.decrypt_payload` + raw inflate) with **0 mismatches** — the ranges
are checked against an independent decode, not against themselves. The skipped
rows are exactly level 8's residual class: `common` 3, `data` 114, `packs` 6,
`anim` 6, `textures` 1. Per archive: `appdata0` 2, `navmeshes` 1, `shaders` 2,
`textures` 1, `levels` 29, `script_concat` 2, `anim` 24, `packs` 106, `common`
415, `data` 546.

**Dependent archives resolve.** An entry's payload can itself be an RPF9.
`--scan-nested` finds them by the magic on the entry's first four *unpacked*
bytes, and `--nested ROW` opens one in place — a zero-copy view when the entry
is stored. Found in three archives:

| archive | row | payload | nested rows |
|---|---|---|---|
| `levels` | 0 | 819,120 B | 1 |
| `data` | 0 | 701,744 B | 156 |
| `script_concat` | 0 | 3,488,880 B | 2 |
| `script_concat` | 1 | 4,107,904 B | 1,012 |

Their rows are readable and verify against the same oracle: 1/1, 156/156 and
1,012/1,012. That also turned up a rule the extractor was missing — a row that
is compressed but carries **no crypto record is plain deflate**, which is every
row of the `data` nested archive — and the chain is two deep, because the nested
`levels.rpf[0]` row 0 is itself 2,314,640 bytes of plain deflate.

Not claimed at this rung: the `X.rpf` / `X_concat.rpf` / `X_script_concat.rpf`
naming convention is visible in the dump, but no code path that resolves one
from the other has been recovered, so it is not called a dependency. Names still
do not resolve; entries are addressed by row id.

## What the levels are not

- Not a schedule. A rung can stay blocked for a long time and that is the point
  of naming the blocker.
- Not a proxy for code volume. Ten thousand identified functions with no working
  path is still level 2.
- Not comparable across objectives. Objective 7's rungs are about matching;
  objective 1's are about behaviour.
