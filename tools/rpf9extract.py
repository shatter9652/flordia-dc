#!/usr/bin/env python3
"""Extract every entry of an RPF9 archive with the recovered payload cipher.

This is the level-8 driver: one command per archive, every entry written out,
every size checked against the file entry's recorded unpacked size.

    python3 tools/rpf9extract.py --archive ../6RE/DUMPS/PS5Dump/common.rpf \
        --out /tmp/common

Payload encryption is not uniform, and the difference is in the crypto record's
five-word pattern (record + 0x18):

  * pattern[2] == 0   the whole stored range is one CTR stream;
  * pattern[2] != 0   only the first pattern[0] + pattern[1] bytes are encrypted
                      (`(0x400, 0x400, 0x1c00, 0, 4)` -> the first 0x800 bytes),
                      and the rest of the stored range is plaintext.

In both cases the cipher state is fresh per entry: the counter lives in the
state, so a state decrypts exactly one stream.

Entries whose stored size is not smaller than their unpacked size are stored
uncompressed and are copied as-is.

Rows are addressed by index, not by name: the name heap is still encrypted.
The manifest written next to the entries records what each row is.
"""

import argparse
import json
import mmap
import os
import struct
import sys
import zlib

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

import ps5elf
import rpf9cols
import rpf9key
import rpf9payload as P

PATTERN_OFFSETS = (0x18, 0x20, 0x28, 0x30, 0x38)


def crypto_pattern(rec):
    return tuple(struct.unpack_from("<Q", rec, o)[0] for o in PATTERN_OFFSETS)


def decrypt_payload(img, blob, rec, body):
    """Return the payload plaintext under the record's pattern rule."""
    pattern = crypto_pattern(rec)
    if pattern[2] == 0:
        covered = len(body)
    else:
        covered = min(pattern[0] + pattern[1], len(body))
    state = P.init_state(img, blob, rec[6:22])
    if covered == 0:
        return bytes(body)
    head = P.stream_decrypt(img, state, bytes(body[:covered]))
    return head + bytes(body[covered:])


def inflate(plain):
    """Raw deflate, one stream. Returns (data, ok)."""
    try:
        obj = zlib.decompressobj(-15)
        out = obj.decompress(plain)
    except zlib.error:
        return None, False
    return out, bool(obj.eof)


def main(argv):
    ap = argparse.ArgumentParser()
    ap.add_argument("--eboot", default="../6RE/DUMPS/PS5Dump/eboot.bin")
    ap.add_argument("--archive", required=True)
    ap.add_argument("--out", help="write entries here (default: verify only)")
    ap.add_argument("--quiet", action="store_true")
    args = ap.parse_args(argv)

    keyimg = ps5elf.load_image(args.eboot)
    img = rpf9wb_image(args.eboot)

    toc, geo, sections, info = rpf9cols.decrypt_toc(img, keyimg, args.archive)
    meta = info[3]
    # The archive is 278 GB across the retail set, so map it instead of reading.
    fh = open(args.archive, "rb")
    raw = mmap.mmap(fh.fileno(), 0, access=mmap.ACCESS_READ)
    cols, cells = P.column_cells(toc, geo, meta)
    fi = P.find_column(cols, P.COL_FILE_ENTRY)
    ci = P.find_column(cols, P.COL_CRYPTO)
    if fi is None:
        raise SystemExit("no file-entry column")

    if args.out:
        os.makedirs(args.out, exist_ok=True)

    manifest = []
    written = verified = stored_rows = 0
    failures = []
    blobs = {}

    for row in range(meta["rows"]):
        entry = cells.get((fi, row))
        if entry is None:
            continue
        q = P.u64(entry, 0)
        offset = (q & 0xFFFFFFFFFF) * 16
        stored = P.u64(entry, 8) * 16
        unpacked = P.u64(entry, 16)
        rec = cells.get((ci, row))
        body = raw[offset:offset + stored] if stored else b""

        if stored == 0:
            data, ok, how = b"", unpacked == 0, "empty"
        elif stored >= unpacked:
            data, ok, how = body[:unpacked], True, "stored"
            stored_rows += 1
        elif rec is None:
            data, ok, how = None, False, "no-crypto-record"
        else:
            key_id = P.u32(rec, 0)
            blob = blobs.get(key_id)
            if blob is None:
                found = rpf9key.find_key(keyimg, key_id)
                if found is None or not found["ptr"]:
                    data, ok, how = None, False, "key-not-in-list"
                    blobs[key_id] = b""
                    continue
                blob = rpf9key.read_at(keyimg, found["ptr"], found["len"])
                blobs[key_id] = blob
            if not blob:
                data, ok, how = None, False, "key-not-in-list"
            else:
                plain = decrypt_payload(img, blob, rec, body)
                out, complete = inflate(plain)
                data, ok, how = out, bool(out is not None and complete
                                          and len(out) == unpacked), "deflate"

        name = "row_%05d.bin" % row
        if args.out and data is not None:
            with open(os.path.join(args.out, name), "wb") as fh:
                fh.write(data)
            written += 1
        if ok:
            verified += 1
        else:
            failures.append({"row": row, "stored": stored,
                             "unpacked": unpacked,
                             "got": None if data is None else len(data),
                             "reason": how})
        manifest.append({"row": row, "offset": offset, "stored": stored,
                         "unpacked": unpacked, "file": name,
                         "mode": how, "ok": bool(ok)})

    if args.out:
        with open(os.path.join(args.out, "manifest.json"), "w") as fh:
            json.dump({"archive": os.path.basename(args.archive),
                       "rows": len(manifest),
                       "verified": verified,
                       "failures": failures,
                       "entries": manifest}, fh, indent=1)

    total = len(manifest)
    print("%-14s %4d rows  %4d verified  %3d stored  %3d failed%s"
          % (os.path.basename(args.archive), total, verified, stored_rows,
             len(failures),
             "" if args.quiet or not failures else
             "  first: " + ", ".join(str(f["row"]) for f in failures[:5])))
    return 0 if not failures else 1


def rpf9wb_image(path):
    import rpf9wb
    img = rpf9wb.Image(path)
    img.patch()
    return img


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
