#!/usr/bin/env python3
"""Decrypt and inflate RPF9 entry payloads by running the game's own cipher.

The table of contents is one cipher family (white-box AES-256, magic
0x4e3b9b8e, init 0x255a3b0 / decrypt 0x2ae0890). Entry payloads use a second
family (magic 0x2718ce5d), and this tool drives it the same way: the game's
code, mapped natively, with only the allocator and the libc imports replaced.

Call shape, from the two vtable slots at 0xa397c20 (RELA-filled):

    +0x10  0x3985bc0(this, blob, seed, &state)
              -> 0x3985bf0(blob, seed, 16, &state)
    +0x18  0x2ae0a50(this, state, src, len, dst)
              -> 0x2ae0a70(state, src, len, dst)

0x3985bf0 allocates a 0x1120-byte state:

    +0x0000  60 round-key words, big-endian, from blob+4
    +0x00f0  16 x 256-byte key-dependent S-boxes, from blob+0xf4
    +0x10f0  16-byte seed (the crypto record's IV), copied by the caller
    +0x1100  block size (16)
    +0x1101  16-byte keystream buffer, zeroed at init
    +0x1118  bytes of keystream still unused

0x2ae0a70 is CTR over that block cipher: when +0x1118 reaches zero it copies
the seed from +0x10f0, increments it as a big-endian counter, runs 14 rounds
over the global T-tables and the blob's S-boxes, and restarts the buffer.

    python3 tools/rpf9payload.py --archive ../6RE/DUMPS/PS5Dump/appdata0.rpf
    python3 tools/rpf9payload.py --archive ... --row 0 --out entry.bin
"""
import argparse
import os
import struct
import sys
import zlib

HERE = os.path.dirname(os.path.abspath(__file__))
if HERE not in sys.path:
    sys.path.insert(0, HERE)
import ps5elf    # noqa: E402
import rpf9key   # noqa: E402
import rpf9wb    # noqa: E402
import rpf9cols  # noqa: E402

STREAM_INIT = 0x3985BC0
STREAM_DECRYPT = 0x2AE0A50
STATE_SIZE = 0x1120

COL_FILE_ENTRY = 0x33F70DFAF2C50989
COL_RESOURCE_ENTRY = 0xBA180AFB232D1B4B
COL_CRYPTO = 0x286030A358A789FB

INIT_PROTO = (0x3985BC0, 0x3985BF0)


def init_state(img, blob, seed):
    """0x3985bc0(this, blob, seed, &state) -> host pointer to the state."""
    blob_at = img.alloc(0x2000)
    img.hwrite(blob_at, blob)
    seed_at = img.alloc(0x40)
    img.hwrite(seed_at, seed)
    out_slot = img.alloc(0x10)
    proto = ctypes_fn(4)
    fn = proto(img.ptr(STREAM_INIT).value)
    ok = fn(ctypes_void(), ctypes_void(blob_at), ctypes_void(seed_at),
            ctypes_void(out_slot))
    state, = struct.unpack("<Q", img.hread(out_slot, 8))
    if not ok or not state:
        raise SystemExit("stream init rejected blob %#x (ok=%s)"
                         % (struct.unpack_from("<I", blob, 0)[0], ok))
    return state


def stream_decrypt(img, state, data):
    """0x2ae0a50(this, state, src, len, dst) over the whole buffer."""
    length = len(data)
    src = img.alloc(length + 0x20)
    dst = img.alloc(length + 0x20)
    img.hwrite(src, data)
    proto = ctypes_fn(5)
    fn = proto(img.ptr(STREAM_DECRYPT).value)
    ok = fn(ctypes_void(), ctypes_void(state), ctypes_void(src),
            length, ctypes_void(dst))
    if not ok:
        raise SystemExit("stream decrypt returned failure")
    return img.hread(dst, length)


def ctypes_fn(n):
    import ctypes
    if n == 4:
        return ctypes.CFUNCTYPE(ctypes.c_int, ctypes.c_void_p, ctypes.c_void_p,
                                ctypes.c_void_p, ctypes.c_void_p)
    return ctypes.CFUNCTYPE(ctypes.c_int, ctypes.c_void_p, ctypes.c_void_p,
                            ctypes.c_void_p, ctypes.c_size_t, ctypes.c_void_p)


def ctypes_void(value=None):
    import ctypes
    return ctypes.c_void_p(value)


def crypto_pattern(rec):
    """The crypto record's five-word payload pattern (record + 0x18)."""
    return struct.unpack_from("<5Q", rec, 0x18)


def crypto_windows(rec, body):
    """Byte ranges of a stored payload that the cipher actually encrypts.

    The pattern is (w0, w1, gap, _, _). `gap == 0` means the whole stored
    range is one CTR stream. Otherwise the payload is encrypted in windows:
    the first `w0 + w1` bytes, then one `w0`-byte window once per
    `w0 + gap` bytes, starting where the head and one gap end.

    For the pattern every compressed entry carries -- (0x400, 0x400, 0x1c00,
    0, 4) -- that is [0, 0x800) plus [0x2400, 0x2800), [0x4400, 0x4800), ...
    i.e. one encrypted 0x400 block per 0x2000-byte region, with an extra one
    at the head. Reading only the head, as levels 8 and 9 did, leaves every
    later window encrypted; that is what made entries above 0x1c00 stored
    bytes undecodable, not a second compression scheme.
    """
    w0, w1, gap = crypto_pattern(rec)[:3]
    if gap == 0:
        return [(0, body)]
    out = []
    pre = w0 + w1
    if pre:
        out.append((0, min(pre, body)))
    if w0 and pre + gap < body:
        step = w0 + gap
        start = pre + gap
        while start < body:
            out.append((start, min(start + w0, body)))
            start += step
    return out


def decrypt_regions(img, blob, rec, body):
    """The payload plaintext: ciphertext windows replaced by the CTR stream.

    The counter is state, so the keystream has to be produced over the whole
    stored range even though only the windows use it.
    """
    body = bytes(body)
    windows = crypto_windows(rec, len(body))
    if not windows:
        return body
    state = init_state(img, blob, rec[6:22])
    plain = stream_decrypt(img, state, body)
    out = bytearray(body)
    for start, end in windows:
        out[start:end] = plain[start:end]
    return bytes(out)


def u64(b, o):
    return struct.unpack_from("<Q", b, o)[0]


def u32(b, o):
    return struct.unpack_from("<I", b, o)[0]


def u16(b, o):
    return struct.unpack_from("<H", b, o)[0]


def column_cells(toc, geo, meta):
    """{(column index, row): raw element bytes} for indexed columns."""
    cols, indexed, d, t = rpf9cols.parse(toc, geo, meta)
    rows, w = meta["rows"], meta["w"]
    out = {}
    none = (1 << (8 * w)) - 1
    for row in range(rows):
        for j, ci in enumerate(indexed):
            o = d + (row * len(indexed) + j) * w
            element = int.from_bytes(toc[o:o + w], "little")
            if element == none:
                continue
            col = cols[ci]
            base = t + col["offset"]
            start = base + element * col["elem_size"]
            out[(ci, row)] = toc[start:start + col["elem_size"]]
    return cols, out


def find_column(cols, wanted):
    for i, col in enumerate(cols):
        if col["hash"] == wanted:
            return i
    return None


def entries(toc, geo, meta, rows):
    cols, cells = column_cells(toc, geo, meta)
    fi = find_column(cols, COL_FILE_ENTRY)
    ci = find_column(cols, COL_CRYPTO)
    ri = find_column(cols, COL_RESOURCE_ENTRY)
    if fi is None:
        raise SystemExit("no file-entry column")
    items = []
    for row in rows:
        raw = cells.get((fi, row))
        if raw is None:
            continue
        q = u64(raw, 0)
        item = {
            "row": row,
            "offset": (q & 0xFFFFFFFFFF) * 16,
            "flags": q >> 40,
            "stored": u64(raw, 8) * 16,
            "unpacked": u64(raw, 16),
            "resource": False,
        }
        rraw = cells.get((ri, row)) if ri is not None else None
        if rraw is not None:
            item["resource"] = True
            item["resourceType"] = u32(rraw, 0)
            item["dataStart"] = 16
        crypto = cells.get((ci, row)) if ci is not None else None
        if crypto is not None:
            item["keyId"] = u32(crypto, 0)
            item["kind"] = u16(crypto, 4)
            item["iv"] = bytes(crypto[6:22])
        items.append(item)
    return items


def inflate(data):
    for wbits in (-15, 15, 47):
        try:
            return zlib.decompress(data, wbits), wbits
        except zlib.error:
            continue
    return None, None


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--eboot", default="../6RE/DUMPS/PS5Dump/eboot.bin")
    ap.add_argument("--archive", required=True)
    ap.add_argument("--row", type=int, action="append",
                    help="row to decrypt (repeatable); default: every file row")
    ap.add_argument("--limit", type=int, default=0, help="stop after N rows")
    ap.add_argument("--out", help="write the last decrypted payload here")
    args = ap.parse_args(argv)

    keyimg = ps5elf.load_image(args.eboot)
    img = rpf9wb.Image(args.eboot)
    img.patch()

    toc, geo, secs, info = rpf9cols.decrypt_toc(img, keyimg, args.archive)
    if info is None or info[3] is None:
        raise SystemExit("cannot decrypt the table of contents")
    key_id, kind, iv2, meta = info

    raw = open(args.archive, "rb").read()
    print("archive %s  toc_end %#x  idx_end %#x  rows %d"
          % (os.path.basename(args.archive), geo["toc_end"], geo["idx_end"],
             meta["rows"]))

    rows = args.row if args.row else range(meta["rows"])
    items = entries(toc, geo, meta, rows)
    if args.limit:
        items = items[:args.limit]

    good = bad = stored_rows = 0
    for item in items:
        start = item["offset"] + item.get("dataStart", 0)
        stored = item["stored"] - item.get("dataStart", 0)
        body = raw[start:start + stored]

        if "keyId" not in item:
            # No crypto record: the entry is stored, and `stored` is the byte
            # count rounded up to the 16-byte address grid.
            if stored >= item["unpacked"]:
                stored_rows += 1
                if args.out:
                    with open(args.out, "wb") as fh:
                        fh.write(body[:item["unpacked"]])
            else:
                bad += 1
                print("row %-4d  no crypto record and %d < unpacked %d"
                      % (item["row"], stored, item["unpacked"]))
            continue

        rec = rpf9key.find_key(keyimg, item["keyId"])
        if rec is None or not rec["ptr"]:
            print("row %-4d  key %#x not in the key list"
                  % (item["row"], item["keyId"]))
            bad += 1
            continue
        blob = rpf9key.read_at(keyimg, rec["ptr"], rec["len"])
        # The stream cipher keeps its counter in the state, so two entries that
        # name the same key and seed must not share one: each gets a fresh init.
        state = init_state(img, blob, item["iv"])

        plain = stream_decrypt(img, state, body)
        out, wbits = inflate(plain)
        if out is None:
            bad += 1
            print("row %-4d  key %#x kind %#02x off %#08x stored %5d "
                  "-> %d bytes, INFLATE FAILED (head %s)"
                  % (item["row"], item["keyId"], item["kind"], item["offset"],
                     stored, len(plain), plain[:16].hex()))
            continue
        good += 1
        print("row %-4d  key %#x kind %#02x off %#08x stored %5d "
              "unpacked %5d -> %5d bytes wbits %d  %s"
              % (item["row"], item["keyId"], item["kind"], item["offset"],
                 stored, item["unpacked"], len(out), wbits,
                 "size OK" if len(out) == item["unpacked"] else "SIZE MISMATCH"))
        if args.out:
            with open(args.out, "wb") as fh:
                fh.write(out)

    print("\n%d/%d payloads decrypted and inflated; %d stored uncompressed"
          % (good, good + bad, stored_rows))
    return 0 if good and not bad else 1


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
