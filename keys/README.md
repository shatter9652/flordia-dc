# keys/

The archive key is game data, not decompiled source, so nothing in this folder
is committed. `.gitignore` keeps `keys/*` out and allows only this file; the
folder stays so the tools have a place to look.

A keyring is text, one key per line, `#` comments allowed:

```
# <key id, hex>  <64 hex digits, AES-256>
0x0fffefff  b1698e1462a033bb8efab064b2522c30a866ce6802c04c8eacde21bce8e7b70e
```

`tools/rpf9crypt.cpp` reads it with `--keyring`, `tools/rpf9keyhunt.cpp` tests
raw 16/32-byte windows without one.

## What is known about the RPF9 key

1. **The image carries exactly one RAGE key array.** `unique_key_gta5_xboxone`
   is at RVA `0x65b5758` (VA `0x1465b5758`), 32 bytes, byte-for-byte the GTA V
   Durango key from `MiscRef/GTAVSRC/.../data/aes.cpp`. No other
   `unique_key_*` array from that file survives in this build.

   Key arrays do survive across titles, so their absence here is meaningful:
   both RDR2 PS4 eboots (`roms/rdr2ps4/base/eboot.bin` at `0x6983980`,
   `.../upd/eboot.bin` at `0x7ab65c0`) still carry the GTA V PS4 key
   (`unique_key_gta5_ps4`, id `0x0FFEFFFF`) in plaintext. A title that encrypted
   its RPF with an embedded array would show the array the same way; this one
   does not.
2. **That key does not open an RPF9 archive.** `appdata0.rpf`, `script.rpf`,
   `common.rpf` and `data.rpf` all decrypt to noise with it (printable-ASCII
   share 0.34-0.38 over the entry region).
3. **No other window in the image is the key either.** `rpf9keyhunt` expanded
   all 7,210,119 16-aligned 32-byte windows of `.text`, `.rdata`, `.data`,
   `.retplne` and `.tls` and decrypted the name-region tail block of
   `appdata0.rpf` and `script.rpf` with each. A correct key turns that block
   into padding (mostly zeros); the best any window reached was 0. `selftest`
   plants a key in a synthetic image and the same scan finds it, so the negative
   is the image, not the scanner.
4. **The packfile code never decrypts.** The recovered open path is
   `FUN_140fc2540 -> FUN_141fb2600 -> FUN_141fb2780 -> FUN_1408ec200 ->
   FUN_14087aec0`, and it contains no call to the AES block. `FUN_141fb2600`
   reads the TOC through a `fiDevice` vtable slot and nothing else.
5. **The AES block's callers in this image are the HTTP stack**, not the file
   layer: `FUN_021a8e3d <- FUN_021a927b <- FUN_0218809a`, and
   `FUN_0218809a` builds the `CLNT`/`SRVR` request strings.

So on this Series X build the archive TOC is either decrypted below the
packfile layer (a device class we have not reconstructed yet) or is not
AES-encrypted at all. A key pasted in here would not be proven by anything; the
measurement above is what the repository can honestly record, and `rpf9keyhunt`
is how a candidate can be checked in seconds once one is proposed.
