# Byte markers: what was matched, and what was not

The goal was to name GTA VI functions by matching byte patterns from binaries whose functions are known:
the GDK DLLs that ship with the title, and the GTA V and RDR2 PS4 eboots.

## Corpora

| Corpus | Functions | Names? | Where the bounds come from |
|---|---|---|---|
| GDK / middleware DLLs in `6RE/DUMP` | 1,300 | yes (export table) | `.pdata` of each DLL |
| `roms/gtavps4/upd/eboot.bin` | 122,153 | no | `.eh_frame_hdr` binary search table |
| `roms/rdr2ps4/upd/eboot.bin` | 147,119 | no | `.eh_frame_hdr` binary search table |

The eboots keep no section headers and no symbol table, but they do have `PT_GNU_EH_FRAME`, whose
`eh_frame_hdr` lists every FDE initial location. The encodings are `pcrel|sdata4` for the header pointer and
`datarel|sdata4` for the table, both relative to the header's virtual address. That yields 162,857 and
215,406 starts respectively; after filtering to executable segments and sane sizes, 122k and 147k ranges.

## Method

1. Index every 8-byte shingle of the executable's 99.9 MB `.text` at a 4-byte stride, keyed by function
   (19,750,702 shingles). A shingle is hashed from two 32-bit words so the index is one `uint32` per entry.
2. For each reference function, hash its shingles, look them up, and count how many land in each candidate
   function. Take the best eight candidates.
3. Verify byte-by-byte, masking any 4-byte value whose `position + 4 + value` points back into the image
   (call/jump displacements and RIP-relative operands), at all four byte phases.
4. Accept a candidate at ≥ 6 shared shingles, ≥ 40 % coverage, ≥ 80 % equality on unmasked bytes.

## Result

**Zero matches across all 270,572 reference functions.**

That is not a bug in the index. A self-test that feeds 300 random executable functions back through the
matcher finds the function's own entry **291 times**, so fingerprinting, lookup and verification all work.

The largest reference functions show why the corpora do not transfer:

| Reference | Size | Shingle hits in the whole index | Best per-function coverage |
|---|---|---|---|
| `curl_url_set` (XCurl.dll) | 1,777 B | 578 | < 1 % |
| `memmove` (vcruntime140.dll) | 1,653 B | 10,265 (spread over thousands of functions) | < 2 % |
| GTA V PS4 largest functions | 4,000 B cap | hits scattered | < 2 % |

The GDK is imported, not statically linked: the executable calls `libHttpClient.GDK.dll` and
`Bink2Scarlett.dll` through the IAT, so their bodies are not in the image. The PS4 eboots are clang builds
of a different game version, while this executable is MSVC; the same source compiles to different
instruction sequences, register allocation and inlining, so 8-byte windows do not survive.

## What to do with the tool

Keep it for a corpus that *can* transfer: another Xbox GDK build of the same title, a build with symbols,
or a statically linked middleware library. A negative result from a corpus is a fact worth recording; it
should not be turned into low-confidence names.

## Why strings work where bytes do not

String literals are compiler-independent: `"shadtexture_wdcascade"` is the same bytes in a clang PS4 build
and an MSVC Xbox build. `tools/gtav_strings.py` finds 295 literals shared between GTA V's source tree and
this executable, and `tools/resolve_strings.py` resolves 130 of them to the function that loads them (a
RIP-relative operand at any of the four byte phases). Those 130 are the names the tree actually carries.
