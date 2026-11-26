---
title: The RPF9 open path on PS5 (0x8e0990)
type: finding
status: observed
created: 2026-11-25
updated: 2026-11-25
tags: [ps5, rpf, packfile, objective-1]
---

# The RPF9 open path

`0x8e0990` (1878 bytes) is the only direct caller of `fiFile_ScanDirectory`
(`0x3544790`, at `0x8e0ce8`). Raw decompiler output is kept at
`docs/evidence/ps5-rpf9-open-8e0990.c`; recover it with

```
python3 tools/ghidra_dump.py ../6RE/DUMPS/PS5Dump/eboot/eboot.bin --addrs 0x8e0990
```

## What it does, in order

1. Fetches the allocator from TLS (`fs:-0x140`) and allocates **0x80** bytes with
   the allocator's `vtable[0]` — the object it builds is a packfile.
2. Writes the packfile vtable base **`0xa3dca50`** into `*object` — the same
   base that the entry functions' slots were read from, so this constructor and
   the keyed index belong to the same class.
3. Stores the owner/file at **`+0x08`**, zeroes `+0x10 .. +0x20`, `+0x28`,
   `+0x30 .. +0x50`, `+0x5c`, sets the state dword at **`+0x28` = 2**.
4. Calls `FUN_008d89f0(object)` *(initialiser, body not recovered yet)*.
5. If a caller-supplied header pointer is present, checks
   **`*header == 0x52504639`** — the **RPF9** magic, compared as a 32-bit dword
   on the header, not on the 8-byte `RPFV` tag the directory scan uses.
6. Otherwise reads **16 bytes** through `file->vtable[+0x68]` at the file's
   `+0x18`/`+0x20` and checks the same dword; a short read or a wrong magic
   jumps to the failure label that clears `object+0x08`.
7. Computes the TOC geometry from the header (offsets as observed on the
   decompiler's `int*` header pointer):

   | field | meaning in this code |
   | --- | --- |
   | `+0x00` | magic `0x52504639` |
   | `+0x08` | dword added to the header base to reach the first table |
   | `+0x1A` (u16) | count used with `*8` in the names-table offset |
   | `+0x1C` | dword added to the names-table offset |
   | `+0x20` (u16) | total entry-ish count; `(count - +0x1A) * entryStride` sizes the TOC |
   | `+0x22` (u16) | subtracted from `+0x20` in the same expression |
   | `+0x24` | `entryStride` (multiplied by the byte at `+0x2C`) |
   | `+0x2C` (u8) | `entryStride` multiplier / entry size in dwords |
   | `+0x2D` bit 0 | encryption flag; selects base `+0xf` (set) or `+0x3` (clear) |

   The alignment dance is `(x + 0x40) & -0x10` for encrypted archives and
   `(x + 0x10) & -0x4` for plain ones, then 8-byte rounding for the tables.
8. Calls `FUN_008e1100` with the computed table set and the file's flag
   `(file->+0x08 & 1) == 0`; a zero return is a failure.
9. On success `object+0x28 = 2` and `object+0x50 = 0`.

## Why this matters for objective 1

The magic comparison (`0x52504639`) and the geometry constants are the first
`Open`-side evidence recovered from the PS5 build itself, and they explain the
two-magic picture: the **header** is checked as `RPF9`, while the directory
scan's 8-byte gate is `RPFV`/`9` — different tags, different checks, same open
path. The entry count at `+0x20`/`+0x22` and the stride at `+0x24`/`+0x2C` are
exactly the inputs the keyed index needs, which makes this the natural bridge to
[[rpf-path-to-id]].

Related: [[ps5-entry-index]], [[objective-1-rpf]]
