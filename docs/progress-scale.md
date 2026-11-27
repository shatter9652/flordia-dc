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

**Level 5 of 10 — Indexes. Complete.**

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
pattern's third word — and it is concentrated in `data`. Levels 9 and 10 need
that class, and the name heap is still encrypted so entries are addressed by id
rather than by path.

## What the levels are not

- Not a schedule. A rung can stay blocked for a long time and that is the point
  of naming the blocker.
- Not a proxy for code volume. Ten thousand identified functions with no working
  path is still level 2.
- Not comparable across objectives. Objective 7's rungs are about matching;
  objective 1's are about behaviour.
