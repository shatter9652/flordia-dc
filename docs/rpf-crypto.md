# RPF9 TOC encryption

Objective 1 needs the archive table of contents, and the table of contents is
the encrypted part of an RPF. This page records the block that does it, where
it is in the image, how it is reconstructed, what was measured, and the two
things still missing before a retail archive can be listed.

Code: `src/sub_story/rage/base/data/aes.{h,cpp}` (the cipher),
`src/sub_story/rage/base/file/packfile_crypt.h` (the TOC call),
`tools/rpf9crypt.cpp` (the command and its self-test).
Reference: `MiscRef/GTAVSRC/src/dev_ng/rage/base/src/data/aes.cpp`,
`.../tools/cli/rekey_rpf/rekey_rpf.cpp`.

## What the engine does

RPF7/8's writer is in the GTA V tree and states the shape outright:

```cpp
unsigned totalSize = (sizeof(fiPackEntry) * entryCount) + nameHeapSize;
u8* buffer = buf + sizeof(fiPackHeader);          // 16-byte header is plaintext
AES aes(source_key);
aes.Decrypt(buffer, totalSize);                   // entries + name heap, in place
...
aes2.Encrypt(buffer, totalSize);
```

`AES::Decrypt` ends in `rijndael_ecb_decrypt_mem`; there is **no IV anywhere in
`data/aes.cpp`**. So the cipher stream is AES-256 in ECB mode, and each 16-byte
block stands alone. The key comes from the key id in the header (`+0x0C` of an
RPF7/8 header, `m_Encrypted`), through the `AES_KEY_ID_*` table.

That prediction matches the bytes. Across the 193 headers the 6RE notes sample,
`[0x40,0x50)` is the **same** 16 bytes in every archive, and the next block has
only four variants. With ECB and one fixed key, identical plaintext gives
identical ciphertext; with CBC every archive would differ from the first block
on. The "not ECB" argument in those notes rests on finding no repeated 16-byte
block in the *varying* part, which ECB does not promise.

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
(`imports/gdk_symbols.tsv`) — and **no** `BCryptEncrypt` / `BCryptDecrypt`. The
archive crypto is RAGE's own block.

The GTA V Durango key is still in the image, at RVA `0x65b5758`
(`unique_key_gta5_xboxone`, 32 bytes, matched byte for byte). That is how the
key arrays are addressed, and it is why the reconstruction does not embed them:
the algorithm is source, the key is project data.

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

`fiPackCrypt` in `file/packfile_crypt.h` is the RPF9 call: the header's 16 bytes
stay plaintext (the magic must be readable before any key is chosen), and the
cipher covers `[0x10, namesEnd)` rounded down to whole blocks, in place,
through `AES::Decrypt(keyId, 0, ...)` / `AES::Encrypt(keyId, 0, ...)`.

Two things are deliberately *not* asserted:

- The key id is a parameter. `FUN_141fb2600` never reads `+0x0C`, so an RPF9
  header does not tell us its own key id; taking it from that field would be
  invention.
- The call site. The recovered reader reads the table without calling AES, so in
  this Xbox Series X build the decryption may sit below the packfile — in a
  device layer — or the archives may be decrypted elsewhere. The block is
  reconstructed because the engine owns it and the tooling needs it; the
  recovered function is left exactly as decompiled.

## Measured

`tools/rpf9crypt.cpp selftest` (built with the reconstruction):

```
ok    FIPS-197 C.3 AES-256 encrypt
ok    FIPS-197 C.3 AES-256 decrypt
ok    4096-byte keyring round trip
ok    unregistered key id refused
ok    RPF9 TOC encrypt/decrypt round trip
ok    header untouched by the TOC cipher
all passed (0 failures)
```

Does a GTA V key open a VI archive? No. `appdata0.rpf` (8,880 B,
`namesEnd 0x360`, 53 TOC blocks), decrypted with each key in
`MiscRef/GTAVSRC/.../aes.cpp`:

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

The key is never in the repository. `keys/` and `*.keyring` are ignored.

```sh
g++ -std=c++17 -O2 -o build/rpf9crypt tools/rpf9crypt.cpp \
    src/sub_story/rage/base/data/aes.cpp

./build/rpf9crypt selftest
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

## Still blocked

1. **The key.** 32 bytes that are not in the image's GTA V arrays and not in any
   public note. Nothing in `6RE/new` or `6RE/docs` supplies it: those projects
   carve payloads and explicitly do not decode the TOC.
2. **The entry record layout.** Once the table decrypts, entries are 9 bytes
   each in mode 1 (`A - B = align16(N * 9)`) and 12 in mode 2
   (`align16(N * 12 + 8)`), with the name heap presumably between the table and
   `namesEnd`. The fields inside those 9/12 bytes are not established, so
   `list`/`extract` by name cannot be written yet even with a key.

Payload extraction does not need either: file bodies are plain zlib streams on
16-byte boundaries, which is what `6RE/new/G6Recomp` and `6RE/docs/RPF9-tools`
carve. This page is about the part they cannot do.
