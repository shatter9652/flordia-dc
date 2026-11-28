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
stored rows, `data` 109 plus 384, `shaders` 2 stored. Entries whose crypto record
carries a non-zero pattern — `(0x400, 0x400, 0x1c00, 0, 4)` versus
`(0, 0x1000, 0, 0, 4)` — were an open class at this rung; level 10 explains them
as encryption *windows*, not a different framing.

**Level 8 of 10 — Extracts. Reached.**

The payload is only *partly* encrypted: the crypto record's pattern
`(0x400, 0x400, 0x1c00, 0, 4)` encrypts the head and then one window per region,
while `(0, 0x1000, 0, 0, 4)` covers the whole range. `tools/rpf9extract.py`
writes every entry of an archive, records a manifest and verifies each file
against its recorded unpacked size, with no manual per-file steps.

As measured at this rung — the head-only reading of the pattern — ten archives
extracted with the larger entries outstanding: `appdata0` 2/2, `navmeshes` 1/1,
`script_concat` 2/2, `levels` 29/29 and `shaders` 2/2 complete, `common` 415/418,
`packs` 106/112, `anim` 24/30, `textures` 1/2 and `data` 545/659. Level 10 shows
those shortfalls were the missing windows, not undecodable entries.

**Level 9 of 10 — Streams. Reached.**

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

Demonstrated as first measured: **1,128 entries across ten archives and 3,551
random windows**, compared byte for byte against the level-8 decode
(`rpf9extract.decrypt_payload` + raw inflate) with **0 mismatches** — the ranges
are checked against an independent decode, not against themselves — and 130
rows skipped because the verifier shared the head-only mask. Level 10 closes
that: re-run with the window rule, the same command reports **1,258 entries,
5,032 windows, 0 skipped, 0 bad**.

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

**Level 10 of 10 — Works. Reached on every archive that fits on this disk.**

The residual class was a misreading of the crypto pattern, not a second codec.
The pattern's five words are `(w0, w1, gap, 0, 4)`, and with `gap != 0` a payload
is encrypted in **windows**, not over a prefix:

* `[0, w0 + w1)` — the head, two windows, which is why `0x800` looked right;
* then one `w0`-byte window every `w0 + gap` bytes, starting at `w0 + w1 + gap`.

For `(0x400, 0x400, 0x1c00, 0, 4)` that is `[0, 0x800)`,
`[0x2400, 0x2800)`, `[0x4400, 0x4800)`, … — one encrypted `0x400` block per
`0x2000`-byte region, plus the extra head block. The counter is positional, so
the keystream still has to be produced over the whole stored range; only the
windows keep the decrypted bytes.

The rule was found by treating deflate as an oracle: with the head decrypted the
stream fails at a definite byte, and searching for the second window that makes
the whole stream complete lands on `0x2400` every time. Checked over every
compressed entry in the ten archives, the windowed rule reproduces the recorded
unpacked size **454 of 454** times, with `eof` set on each stream; the head-only
rule managed 330 of 454.

With that one change (`rpf9payload.crypto_windows`, shared by both drivers),
objective 1 runs end to end:

| archive | rows | extract | stream verify |
|---|---|---|---|
| `appdata0` | 2 | 2/2 | 2 |
| `navmeshes` | 1 | 1/1 | 1 |
| `script_concat` | 2 | 2/2 | 2 |
| `levels` | 29 | 29/29 | 29 |
| `shaders` | 2 | 2/2 | 2 |
| `common` | 418 | 418/418 | 418 |
| `packs` | 112 | 112/112 | 112 |
| `anim` | 30 | 30/30 | 30 |
| `textures` | 2 | 2/2 | 2 |
| `data` | 659 | 659/659 | 660 |

`tools/rpf9extract.py` reports `0 failed` for all ten — **1,257 rows, every size
verified** — and `tools/rpf9stream.py --verify` reports **1,258 entries, 5,032
random windows, 0 skipped, 0 bad**. The nested archives improve the same way:
`data.rpf[0]` 156/156, `script_concat.rpf[1]` 1,012/1,012, `levels.rpf[0]` 1/1.
One nested row stays out of reach and is named: `script_concat.rpf[0]` row 0 is
a *resource* entry (`resourceType 0x159`, 343,232 stored → 1,310,720 unpacked)
whose payload is a GPU resource blob, not a deflate stream.

Boundary of the claim: ten archives are on this machine and all ten are complete.
The eight `*_concat` archives (202 GB alone) cannot be extracted here — the whole
set is 278 GB and this disk has 158 GB free — but their tables decrypt and their
stored entries stream, spot-checked against a direct `pread`.

Not claimed: **path addressing.** The trailing name blob is real — the header's
`+0x0C` word is its exact size, 64 B for `appdata0` up to 21,632 B for `data` —
and it is encrypted; it does not inflate, and it is not decrypted by any of the
22 key blobs in the eboot against 8 candidate seeds. Section 5's record names
key id `0x10000007`, which the eboot's key list does not contain, and `0x10000007`
appears nowhere in the key table. Section 6's 0x100-byte block is the path that
does resolve it, and it is fully decoded in `docs/evidence/rpf9-toc-transform.md`:
a gather list over archive bytes, SHA-256 to 32 bytes, then
`0x2122360(6, 3, …)` through a factory-created block handle. Reproducing that
needs the factory registration the offline harness does not run, which is why
entries stay addressed by row id.

## What the levels are not

- Not a schedule. A rung can stay blocked for a long time and that is the point
  of naming the blocker.
- Not a proxy for code volume. Ten thousand identified functions with no working
  path is still level 2.
- Not comparable across objectives. Objective 7's rungs are about matching;
  objective 1's are about behaviour.
