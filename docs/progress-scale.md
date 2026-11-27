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
row's fields are measured. That is exactly what level 5 asks for and no more.

**Level 6 — Decrypts. Blocked, and honestly located.**

Payloads are encrypted, not merely deflated: the stored bytes of an entry do not
inflate on their own, and the bytes at an entry's offset look random. The crypto
record names a key id and a 16-byte IV per file. Those ids — `0x10000021` through
`0x10000028` — are live in the image's 24-record key list, but they are a
different white-box family (magic `0x2718ce5d`) from the TOC family
(`0x4e3b9b8e`), and the TOC's table loader rejects them.

That family's initialiser is located: `0x39ce1c0`, which checks the magic, sizes
its state at `0x1120` bytes, bounds one argument to `1..16`, and returns
`0x72788da6` on a magic mismatch — the same code the TOC loader reports. What is
not yet established is the argument order the initialiser expects and where the
IV is placed in the resulting state, so the decryptor is not yet wired to it.
Level 6 is therefore not claimed.

Everything above 6 depends on it: 7 decompresses what 6 produces, 8 and 9 need
7, and 10 needs all of them.

## What the levels are not

- Not a schedule. A rung can stay blocked for a long time and that is the point
  of naming the blocker.
- Not a proxy for code volume. Ten thousand identified functions with no working
  path is still level 2.
- Not comparable across objectives. Objective 7's rungs are about matching;
  objective 1's are about behaviour.
