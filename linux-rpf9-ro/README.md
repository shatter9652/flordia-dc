# linux-rpf9-ro

A read-only Linux filesystem that mounts an RPF9 archive and decrypts entries on
the way out.

RPF9 is not a block-device filesystem. The whole archive is one file and its
table of contents is a small column store at the front, so the mount keeps a
`struct file` open on the archive and reads through `kernel_read`. Nothing is
written, and the only thing held in memory is the table of contents.

This module is original work. `linux-apfs-rw/` next door was read for module
structure only; APFS and RPF9 share no on-disk format, no cipher and no code.

## What the archive looks like

```
A = 0x40             nsec x { u16 id, u16, u32 offset from B }
B = A + r16(nsec*8)    bsz bytes of section payload
C = r16(B + bsz)       ncol x 24-byte column records
D = C + ncol*24        rows x indexed x w bytes of row index
T = align8(D + ...)    column data
```

A row is a file. A column is one attribute of every file, reached through the
row index unless the column is marked direct. The columns this module reads:

| hash                 | size | kind    | meaning                                   |
| -------------------- | ---- | ------- | ----------------------------------------- |
| `33f70dfaf2c50989`   | 24   | indexed | file entry: offset, flags, stored, unpacked |
| `ba180afb232d1b4b`   | 20   | indexed | resource entry (payload after 16 zero bytes) |
| `286030a358a789fb`   | 64   | indexed | crypto record: key id, kind, IV, pattern   |
| `73bcb72dce74f11f`   | 8    | indexed | 64-bit file id                             |
| `b7076b6245d35fb5`   | 4    | indexed | equality-searched lookup key               |
| `b6f5bdb2c66da2e9`   | 8    | direct  | one value per row, addressed by row         |

## Build

```
make -C linux-rpf9-ro
sudo make -C linux-rpf9-ro install
sudo depmod -a
```

Or with DKMS:

```
sudo cp -r linux-rpf9-ro /usr/src/linux-rpf9-ro-0.1.0
sudo dkms add    linux-rpf9-ro/0.1.0
sudo dkms build  linux-rpf9-ro/0.1.0
sudo dkms install linux-rpf9-ro/0.1.0
```

## Mount

```
sudo modprobe rpf9 toc_path=/tmp/appdata0.toc key_path=/tmp/keys.bin
sudo mount -t rpf9 /path/to/appdata0.rpf /mnt/rpf9
```

Both parameters are module options, so they are read at load time:

| parameter  | meaning                                                              |
| ---------- | -------------------------------------------------------------------- |
| `toc_path` | a decrypted table of contents. Omit only if the archive's own table is plaintext. |
| `key_path` | a decoded key table, `n` records of `{ u32 id; u8 key[32]; }`, 36 bytes each. |

The mount point lists one entry per row, named by the 64-bit file id in 16 hex
digits, plus a `manifest.txt` with the geometry and one line per entry. Reading
an entry returns its payload, decrypted in place when the entry carries a crypto
record and the matching key is in the table.

## Why a decrypted table of contents is a parameter

The table of contents is protected in two stages. The second stage is AES with a
key named by section 1, but the first stage uses the game image's white-box
block cipher, whose key schedule lives in the executable. Reimplementing that in
kernel space would mean shipping key material, which this repository does not do.
So the table is decrypted by the tooling (`tools/rpf9wb.py`, `tools/rpf9cols.py`)
and handed to the mount.

Payload decryption has no such problem: the records name ordinary AES-256 keys,
so once a decoded key table is present, reads decrypt automatically.

## Limits

- Read-only. No writes, no truncation, no rename.
- Raw-deflate entries (`flags & 0x100`) are refused with `EOPNOTSUPP`; inflating
  needs the whole stream and this module does not buffer entries.
- Names are file ids, not the archive's real paths. The name heap is encrypted
  with a key the image does not expose here.
- `lookup` scans the row list, which is linear in the number of rows.
- The crypto pattern (`first`, `on`, `off`, `tail`) is applied as: blocks before
  `first`, a run of `on` encrypted blocks every `on + off`, and `tail` blocks at
  the end. The fifth pattern word is unused.
