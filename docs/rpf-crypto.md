# RPF9 header and TOC encryption

Objective 1 needs the archive table of contents, and the table of contents is
the encrypted part of an RPF. This page records the header it sits behind, the
block that ciphers it, where that block is in the image, what was measured, and
the two things still missing before a retail archive can be listed.

Code: `src/sub_story/rage/base/data/aes.{h,cpp}` (the cipher),
`src/sub_story/rage/base/file/packfile_crypt.h` (the header and the TOC call),
`tools/rpf9crypt.cpp` (the command and its self-test).
Reference: `MiscRef/GTAVSRC/src/dev_ng/rage/base/src/data/aes.cpp`,
`.../tools/cli/rekey_rpf/rekey_rpf.cpp`.

## The header is 64 bytes

Measured on the four archives in the dump. Every field is either read by a
recovered body or has the same value in all four.

| Offset | Field | Values | Evidence |
|---|---|---|---|
| `+0x00` | `magic` | `0x52504639` (`"9FPR"`) | compared before anything else in `FUN_141fb2600` |
| `+0x04` | `tocEnd` | `0x360`, `0x9580`, `0x260`, `0x11060` | the geometry below is exact against it |
| `+0x08` | `namesOffset` | `0x340`, `0x8520`, `0x240`, `0xF510` | `FUN_14087aec0` kind 0 computes `block + *(u32*)(block + 8)` |
| `+0x0C` | `field0C` | `0x40`, `0x3A10`, `0x80`, `0x5870` | 6RE names it `names_size`; it is not `tocEnd - namesOffset`, so the name is not used |
| `+0x10` | `tocHash` | per archive | 6RE reads it big-endian; it differs between archives that agree on everything else, so it is not a key id |
| `+0x18` | `field18` | `0x47A00` in all four | constant |
| `+0x1C` | `field1C` | `0x150` in all four | constant |
| `+0x20` | `field20` | `3`, `6`, `6`, `7` | per archive |
| `+0x22` | `field22` | `1` in all four | passed to the geometry walk |
| `+0x24` | `entryCount` | `2`, `418`, `2`, `699` | the count the name geometry is exact against |
| `+0x28` | `field28` | per archive | 6RE calls it the key id; equal in `appdata0`/`common`, different in `script`/`data`, so a key selector is not proven |
| `+0x2C` | `mode` | `1` or `2` | a name record is `8 + mode` bytes |
| `+0x2D` | `field2D` | `0x0F` in all four | constant |
| `+0x2E` | `field2E` | `0x09` in all four | constant |
| `+0x30` | `alignment` | `0x10` in all four | constant |

The offsets are **absolute offsets from the start of the header**, not
TOC-relative. In `appdata0`, `namesOffset` is `0x340` and `tocEnd` is `0x360`; a
TOC-relative reading would put the name records at `0x3A0`, past the end of the
table.

What fixes the length at `0x40` is the byte-exact geometry of the name region:

```
tocEnd - namesOffset  ==  align16(entryCount * (8 + mode))
```

| Archive | `entryCount` | `mode` | record | names bytes | `tocEnd - namesOffset` |
|---|---|---|---|---|---|
| `appdata0` | 2 | 1 | 9 | `align16(0x12) = 0x20` | `0x20` |
| `common` | 418 | 2 | 10 | `align16(0x1054) = 0x1060` | `0x1060` |
| `script` | 2 | 1 | 9 | `0x20` | `0x20` |
| `data` | 699 | 2 | 10 | `align16(0x1B4E) = 0x1B50` | `0x1B50` |

Four archives, no slack, and a different record size in each mode. That is what
`rpf9crypt info` prints as `names bytes ... match`, and it is checkable on a
retail archive without a key.

This corrects the first revision of this page, which read the header as 16 bytes
and took `+0x04`/`+0x08` for `namesEnd`/`headerSize`. Three measurements settle
it: the fields at `+0x18`..`+0x30` carry the same coherent small values across
all four archives (a ciphertext would not), the name geometry above is exact
against `tocEnd`, and 6RE's independent reader
(`6RE/new/G6Recomp/common/include/g6/rpf9.h`) also reads 64 bytes.

One disagreement is worth recording. 6RE calls `+0x04` the *size* of the table
of contents and starts the data area `0x40` bytes later, at `0x3A0` in
`appdata0` instead of `0x360`. Their own notes say the data area is checked only
"loosely" and that the first file always starts later, often on a 4 KiB
boundary — which is exactly how a `0x40` error in the data-area start would go
unnoticed. The `tocEnd` reading above is the one the geometry and the recovered
reader agree on.

## What the engine does

GTA V's writer is in the reference tree and states the shape outright:

```cpp
unsigned totalSize = (sizeof(fiPackEntry) * entryCount) + nameHeapSize;
u8* buffer = buf + sizeof(fiPackHeader);          // the header is plaintext
AES aes(source_key);
aes.Decrypt(buffer, totalSize);                   // table + names, in place
...
aes2.Encrypt(buffer, totalSize);
```

`AES::Decrypt` ends in `rijndael_ecb_decrypt_mem`; there is **no IV anywhere in
`data/aes.cpp`**. So the cipher stream is AES-256 in ECB mode, each 16-byte block
standing alone.

RPF9 keeps the same *shape* for the region after the header, but two things
that an earlier revision of this page asserted are not established, and one of
them is now measured false:

1. **The bytes are opaque, but not with a proven cipher.** `[0x40, tocEnd)` is
   16-aligned on both ends in all four archives and has entropy 7.59-8.00 with
   **no repeated 16-byte block at all** (0 of 3,917 blocks in `data.rpf`, 0 of
   2,126 in `common.rpf`). A packed table of contents that stored records would
   repeat slots; ECB over it would repeat blocks. So either the plaintext has no
   repeated block (a table of 64-bit hashes does not) or the mode is not ECB.
2. **The shared 32-byte prefix does not identify ECB.** `[0x40,0x60)` is the
   same 32 bytes in all four archives. That proves the first two plaintext
   blocks are the same in all four; it does not distinguish ECB from CBC with a
   fixed IV, because in CBC `block0 = E(P0 xor IV)` and `block1 = E(P1 xor C0)`
   are also equal when `P0`, `P1` and `IV` are. The sixth revision of the 6RE
   notes rejects ECB from the absence of duplicates in the varying part; this
   page rejects the *proof* of ECB for the same reason, not the mode.

What is left is a hypothesis, and the code below is written as one: the range is
`[0x40, tocEnd)`, the cipher is RAGE's own AES block, and the key is unknown.

## Where the block is in this image

The AES tables survive in `.rdata` and are byte-identical to the reference:

| Table | RVA | First word |
|---|---|---|
| `TE0` | `0x5fc1b20` | `0xc66363a5` |
| `TD0` | `0x5fc2b50` | `0x51f4a750` |
| `rcon` | `0x5fc2b20` | `0x01000000` |

`rcon` and other words are only constants until something loads them. The RIP
sweep in `tools/anchors.py` finds:

| Function | Size | Loads |
|---|---|---|
| `FUN_0215f06c` | cipher core + key schedule | `TE0` (4 sites), `TD0`, `rcon` (3 sites) |
| `FUN_021612ed` | `TE0` user | `TE0` |
| `FUN_0216200a` | `TD0` user | `TD0` |

The dispatcher above them, found with `tools/callers.py`, is `FUN_021a8e3d`
(1086 B): one callee builds the expanded key (`FUN_021600e1`), the other runs
the block (`FUN_01b43cee`) — the `AES::Decrypt(keyId, selector, data, size)`
shape. Above it sits `FUN_021a927b` (156 B) and then the users
(`FUN_0218809a`, `FUN_02189816`).

It is **not** CNG. `/opt/xwin/sdk/Include/10.0.26100/um/bcrypt.h` is the header
this build would use, and the import table has exactly three bcrypt entries —
`BCryptOpenAlgorithmProvider`, `BCryptGenRandom`, `BCryptCloseAlgorithmProvider`
(`imports/gdk_symbols.tsv`) — and **no** `BCryptEncrypt` / `BCryptDecrypt`.

Where the block is **not** used is as important. The two callers above
`FUN_021a927b` are not file code:

| Function | Size | Evidence |
|---|---|---|
| `FUN_0218809a` | 6012 B | loads the literals `CLNT` and `SRVR` — an HTTP client/server request builder |
| `FUN_02189816` | 424 B | same neighbourhood, no file or archive literal |

And the recovered RPF9 open path contains no call to the block at all:

```
FUN_140fc2540  packfile ctor
  -> FUN_141fb2600  read header + TOC through a fiDevice vtable slot
       callees: none (the vtable read is the only call)
  -> FUN_141fb2780  index ctor
  -> FUN_1408ec200  validate index against the file
  -> FUN_14087aec0  build index from the header block
```

So on this build the packfile layer reads the TOC as opaque bytes. If it is
encrypted, the decryption sits below it — in the `fiDevice` implementation that
`FUN_140968480` returns — not here.

The GTA V Durango key is still in the image, at RVA `0x65b5758`
(`unique_key_gta5_xboxone`, 32 bytes, matched byte for byte). That is how the
key arrays are addressed, and it is why the reconstruction does not embed them:
the algorithm is source, the key is project data.

## The PlayStation 5 build

VI ships for PS5 as well, and its `eboot.bin` is a SELF container around a
plaintext Prospero ELF, so the same layer decompiles a second time from a
different compiler (`docs/ps5-build.md`, `tools/ps5elf.py`). It changes the conclusion, and it removes two of the open edges:

| Question | Xbox Series X | PlayStation 5 |
|---|---|---|
| RPF magics in `.text` | `RPF9` only | `RPF9` only — `0x8e0ac2`, `0x8e0d28`, `0x2844e6c`, plus 2 table slots |
| Header read on the open path | `[device+0x60]` | `[device+0x68]`, 16 bytes at a time |
| A cipher on the open path | none | yes — through a vtable, behind the readiness flag `0xac6e511` |
| AES in the image | table-driven `FUN_0215f06c` | AES-NI: `aesenc` 559, `aesdec` 43, `aeskeygenassist` 31, all at `0x443d…` |
| `TE0`/`TD0` users | 3 bodies | **no code reference at all** (`0x9c96370` is a data copy) |

The last row is the one worth having, but not for the reason first written
here. The PS5 build carries the RAGE AES tables and nothing loads them, so the
table code in `data/aes.cpp` is not what this build reaches for: the cipher on
the RPF path is the white-box scheme in `docs/evidence/rpf9-toc-transform.md`.
What the measurement still establishes is that on Xbox the decryption sits
below the packfile layer, and that it is not the RAGE AES block on either
build.

The header is corroborated too. The PS5 open body consumes the same 64-byte
header at the same offsets — `+0x1A` (u16, the high half of `field18`), `+0x1C`,
`+0x20` (u16), `+0x22` (u16), `+0x24` (u32), `+0x2C` (u8 `mode`), `+0x2D` (u8
flags, bit 0 tested) — and its layout arithmetic is readable in full, which is
what `fiPack_ComputeLayout` in `packfile.cpp` transcribes. Two things it settles:

* `mode` is not only the name-record stride (8 + mode); it is also an alignment,
  used to align the name-blob base and the record run.
* bit 0 of `+0x2D` selects the alignment class: set → 16-byte regions and 16-byte
  ends, clear → 4-byte regions and 8-byte ends. The byte is `0x0F` in all four
  archives, so the wide path is the one VI takes.

What it does **not** settle is the on-disk geometry. The seven numbers the PS5
body derives from the header come out at `0x40, 0x60, 0x1B0, 0x1F8, 0x200, …`
for appdata0, while that archive's header says `namesOffset 0x340`,
`tocEnd 0x360`. So those seven describe a buffer built *from* the counts, not the
file, and `namesOffset`/`tocEnd` remain the authority for the archive layout.

## What was reconstructed

`data/aes.cpp` keeps the retail structure — `rijndael_setup` with the AES-256
`i % nk == 4` extra SubWord, the two ECB primitives, the `_mem` wrappers with
the `extraRounds == 15` sixteen-pass TransformIT quirk, and `class AES` with the
static and member `Encrypt`/`Decrypt` overloads — with two deliberate
deviations:

1. **No key literals.** `AES(keyId)` looks the 32-byte key up in
   `rage::cryKeyRing`, which a host fills at run time. An unregistered id makes
   `IsValid()` false and `Encrypt`/`Decrypt` return false instead of guessing.
2. **No `TE0`/`TD0`.** The cipher uses one S-box; the output is FIPS-197, which
   `rpf9crypt selftest` checks against the standard AES-256 vector
   (`8ea2b7ca516745bfeafc49904b496089`).

`packfile_crypt.h` now carries the measured `fiPackHeader9` (64 bytes, fields
above) and `fiPackCrypt`, which ciphers `[0x40, tocEnd)` rounded down to whole
blocks, in place, through `AES::Decrypt(keyId, 0, ...)` /
`AES::Encrypt(keyId, 0, ...)`. `LayoutMatches` re-checks the name geometry, so a
caller can tell a real RPF9 header from a guess without a key.

Two things are deliberately *not* asserted:

- The key id is a parameter. `FUN_141fb2600` never reads `+0x28`, so an RPF9
  header does not tell us its own key id; taking it from that field would be
  invention (and the field is not constant across archives anyway).
- The call site. The recovered reader reads the table without calling AES, so in
  this Xbox Series X build the decryption may sit below the packfile — in a
  device layer — or the archives may be decrypted elsewhere. The block is
  reconstructed because the engine owns it and the tooling needs it; the
  recovered function is left exactly as decompiled.

The geometry walk that fills the packfile index is also reconstructed now:
`FUN_14087b0f0` (64 B) computes `{align_up(base, align), align8(begin +
count * stride * align), align16(...)}` and both call sites store the first two
into index `+0x38` / `+0x40`. It has **no `.pdata` record**, so Ghidra never
defined it and the batch export skipped it; the disassembly and the exact
arithmetic are in `src/sub_story/game/Core/FUN_14087b0f0/`. What the run counts
is still open — it is not the name region, which the four archives fix at
`align16(entryCount * (8 + mode))`.

## The key hunt

`tools/rpf9keyhunt.cpp` turns the question into an experiment. Every aligned
window of the image is expanded as an AES key, the archive's name-region tail
block is decrypted, and the plaintext is scored. The tail block is the probe
because a packed name region is built into a 16-aligned heap: its last block is
record bytes plus zero padding, so a correct key produces zeros where a wrong
one produces noise. Two archives must agree.

```sh
g++ -std=c++17 -O2 -o build/rpf9keyhunt tools/rpf9keyhunt.cpp \
    src/sub_story/rage/base/data/aes.cpp
./build/rpf9keyhunt selftest
./build/rpf9keyhunt scan 6RE/DUMP/game_scarlett_master.exe \
    6RE/DUMP/appdata0.rpf 6RE/DUMP/script.rpf --keylen 32 --min-zeros 8
```

The self-test plants a key in a synthetic image and requires the scan to find
it at the right offset, so a negative is a statement about the image:

```
ok    key schedule
ok    synthetic image and archive written
ok    synthetic archive parses
hit   file+0x340 (rva 0x340) key256 030a1118…  zeros 16 printable 0
ok    scanner reports a hit for the planted key
```

On the retail image:

```
.text    99875174 bytes scanned
.rdata    9047052 bytes scanned
.data     6434304 bytes scanned
.retplne      228 bytes scanned
.tls         5249 bytes scanned
examined 7210119 candidate keys (0 before --start)
no key found: no window in this image decrypts the probe blocks to padding
```

7,210,119 32-byte windows at 16-alignment, all four archives' geometry, zero
hits. The same scan over both RDR2 PS4 eboots (`roms/rdr2ps4/base/eboot.bin`,
`.../upd/eboot.bin`) at 16- and 32-byte windows is also empty. The only RAGE key
array the image carries is the GTA V Durango key at RVA `0x65b5758`, and it does
not open these archives.

## Measured

`tools/rpf9crypt.cpp selftest` (built with the reconstruction):

```
ok    FIPS-197 C.3 AES-256 encrypt
ok    FIPS-197 C.3 AES-256 decrypt
ok    4096-byte keyring round trip
ok    unregistered key id refused
ok    header geometry check accepts a valid one
ok    RPF9 TOC encrypt/decrypt round trip
ok    header untouched by the TOC cipher
all passed (0 failures)
```

`rpf9crypt info` on the four archives, all four `match`:

```
== appdata0 ==
tocEnd        0x360      namesOffset   0x340
entryCount    2          mode          1 (name record 9 bytes)
names bytes   0x20 (geometry wants 0x20) match
TOC           [0x40, 0x360) = 0x320 bytes, 50 AES blocks
== common ==
tocEnd        0x9580     namesOffset   0x8520
entryCount    418        mode          2 (name record 10 bytes)
names bytes   0x1060 (geometry wants 0x1060) match
TOC           [0x40, 0x9580) = 0x9540 bytes, 2388 AES blocks
== script ==
tocEnd        0x260      namesOffset   0x240
entryCount    2          mode          1
names bytes   0x20 (geometry wants 0x20) match
== data ==
tocEnd        0x11060    namesOffset   0xF510
entryCount    699        mode          2
names bytes   0x1B50 (geometry wants 0x1B50) match
TOC           [0x40, 0x11060) = 0x11020 bytes, 4354 AES blocks
```

Does a GTA V key open a VI archive? No. `appdata0.rpf` decrypted with each key
in `MiscRef/GTAVSRC/.../aes.cpp`:

| Key | id | printable ASCII after | verdict |
|---|---|---|---|
| `unique_key_gta5_xboxone` | `0x0FFFEFFF` | 0.38 | random |
| `unique_key_gta5_ps4` | `0x0FFEFFFF` | 0.34 | random |
| `unique_key_gta5_pc` | `0x0FFFFFF9` | 0.38 | random |
| `unique_key_rage` | `0x0FFFFF00` | 0.36 | random |

A correct key turns that region into a table and a name heap, i.e. mostly
printable ASCII and zeros. So RPF9 uses a key this image does not carry in the
GTA V arrays.

## Using it

The key is never in the repository. `keys/*` and `*.keyring` are ignored;
`keys/README.md` records the format and the measured result, and is tracked.

```sh
g++ -std=c++17 -O2 -o build/rpf9crypt tools/rpf9crypt.cpp \
    src/sub_story/rage/base/data/aes.cpp

./build/rpf9crypt selftest
./build/rpf9crypt info common.rpf                 # header + geometry, no key
./build/rpf9crypt decrypt common.rpf common.clear.rpf --key keys/rpf9.key
./build/rpf9crypt decrypt common.rpf common.clear.rpf \
    --keyring keys/rpf9.keyring --key-id 0x0fffff00
./build/rpf9crypt encrypt common.clear.rpf common.rpf --key keys/rpf9.key
```

A keyring is text, one key per line, `#` comments allowed:

```
0x0fffff00  <64 hex digits>
```

The tool prints the header, the cipher length and the shape of the region before
and after, so a wrong key is visible immediately instead of silent.

## What resolved

Both open items on this page are closed by the PS5 build.

**The key and the cipher.** The open path does call a cipher, through a vtable and
behind a readiness flag at `0xac6e511`; until that flag is set the path
decompresses a `0x4feac`-byte global block instead, which is why every earlier
sweep saw no caller. Driven with the flag set, the game's own routine decrypts
the table of contents of all 18 retail archives. It is not AES: a key id resolves
to a `0x10f4`-byte white-box blob (magic `0x4e3b9b8e`) that decodes to 60
big-endian dwords and 16 S-box tables, and all ten blobs decode to 16/16
bijective permutations. So the AES hypothesis above is superseded; `data/aes.cpp`
stays in the tree as the engine's own block, not as RPF9's cipher.

**The entry records.** On the PS5 archives `[A, idx_end)` is not a variable-length
record run; it is a column store — a section table, a column table, a row index
and the column data — which is why the span divides by no useful stride. Its
fields are placed and verified now that the bytes decrypt, and the six column
hashes are identified from the code that loads them.

Full record: `docs/evidence/rpf9-toc-transform.md`.

Payload extraction still does not need any of this: file bodies are plain deflate
streams on 16-byte boundaries, which is what `6RE/new/G6Recomp` and
`6RE/docs/RPF9-tools` carve. What the column store adds is the entry list those
tools cannot produce.
