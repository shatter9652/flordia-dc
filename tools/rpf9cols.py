#!/usr/bin/env python3
"""Dump the fully decrypted RPF9 table of contents and enumerate its columns.

This is the diagnostic behind the column store in src/file/packfile_rpf9.cpp:
it reassembles the whole `[0, toc_end)` image (both decrypt stages plus the
plaintext tail), parses the column table and the row index, and prints each
column with a few sample cells so an unknown column hash can be identified from
its contents.

    python3 tools/rpf9cols.py --archive ../6RE/DUMPS/PS5Dump/appdata0.rpf
    python3 tools/rpf9cols.py --archive ... --cells 6 --out toc.bin
"""
import argparse
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
if HERE not in sys.path:
    sys.path.insert(0, HERE)
import ps5elf    # noqa: E402
import rpf9key   # noqa: E402
import rpf9wb    # noqa: E402

KNOWN = {
    0x33F70DFAF2C50989: ("file entry", 24),
    0xBA180AFB232D1B4B: ("resource entry", 20),
    0x286030A358A789FB: ("crypto record", 64),
    0x73BCB72DCE74F11F: ("file id", 8),
}


def r16(x):
    return (x + 15) & ~15


def u16(b, o):
    return struct.unpack_from("<H", b, o)[0]


def u32(b, o):
    return struct.unpack_from("<I", b, o)[0]


def u64(b, o):
    return struct.unpack_from("<Q", b, o)[0]


def decrypt_toc(img, keyimg, path):
    with open(path, "rb") as f:
        hdr = f.read(0x40)
        toc_end = struct.unpack_from("<I", hdr, 0x04)[0]
        f.seek(0)
        raw = f.read(toc_end)
    return decrypt_toc_buffer(img, keyimg, raw, os.path.basename(path))


def decrypt_toc_buffer(img, keyimg, raw, name="archive"):
    """Same as decrypt_toc, over an in-memory archive image.

    `raw` is the front of the archive (at least `toc_end` bytes) and may be any
    buffer type, which is what lets a nested archive -- an entry whose payload
    is itself an RPF9 -- be decrypted without writing it to a file.
    """
    hdr = bytes(raw[:0x40])
    geo = rpf9wb.rpf9_geometry(hdr)
    nsec = u16(hdr, 0x1A)
    n22 = u16(hdr, 0x22)
    rows = u32(hdr, 0x24)
    w = hdr[0x2C]
    ncol = u16(hdr, 0x20)
    tail = geo["tail"]
    a, b = geo["A"], geo["B"]
    bsz, idx_end, toc_end = geo["bsz"], geo["idx_end"], geo["toc_end"]

    out = bytearray(raw[:toc_end])

    rec = rpf9key.find_key(keyimg, 0x10000005)
    blob = rpf9key.read_at(keyimg, rec["ptr"], rec["len"])
    tables, _ = rpf9wb.load_tables(img, blob)
    iv = bytes.fromhex(rpf9wb.DEFAULT_IV)
    plain1, _ = rpf9wb.run_decrypt(img, tables, raw[a:b + bsz - tail], iv)
    out[a:b + bsz - tail] = plain1

    secs = [(u16(out, a + i * 8), u32(out, a + i * 8 + 4)) for i in range(nsec)]
    s1 = next((off for sid, off in secs if sid == 1), None)
    if s1 is None:
        return bytes(out), geo, secs, None

    key_id = u32(out, b + s1)
    kind = u16(out, b + s1 + 4)
    iv2 = bytes(out[b + s1 + 6:b + s1 + 22])
    rec2 = rpf9key.find_key(keyimg, key_id)
    if rec2 is None or not rec2["ptr"]:
        return bytes(out), geo, secs, (key_id, kind, iv2, None)

    tables2, _ = rpf9wb.load_tables(
        img, rpf9key.read_at(keyimg, rec2["ptr"], rec2["len"]))
    s0 = b + bsz - tail
    if 3 <= kind <= 5:
        # The chain restarts between the two spans for these types.
        p, _ = rpf9wb.run_decrypt(img, tables2, raw[s0:s0 + tail], iv2)
        out[s0:s0 + tail] = p
        p, _ = rpf9wb.run_decrypt(img, tables2, raw[b + bsz:idx_end], iv2)
        out[b + bsz:idx_end] = p
    else:
        p, _ = rpf9wb.run_decrypt(img, tables2, raw[s0:idx_end], iv2)
        out[s0:idx_end] = p

    meta = {"nsec": nsec, "n22": n22, "rows": rows, "w": w, "ncol": ncol}
    return bytes(out), geo, secs, (key_id, kind, iv2, meta)


def parse(toc, geo, meta):
    c = geo["C"]
    ncol = meta["ncol"]
    rows, w = meta["rows"], meta["w"]
    cols = []
    for i in range(ncol):
        o = c + i * 24
        cols.append({
            "index": i,
            "hash": u64(toc, o),
            "count": u32(toc, o + 8),
            "offset": u32(toc, o + 12),
            "elem_size": u16(toc, o + 16),
            "flags": u16(toc, o + 18),
        })
    indexed = [i for i, col in enumerate(cols) if col["flags"] == 0]
    d = c + ncol * 24
    t = (d + len(indexed) * rows * w + 7) & ~7
    return cols, indexed, d, t


def cell(toc, col, i, idx_end, t):
    sz = col["elem_size"]
    if not sz:
        return b""
    base = idx_end if col["flags"] != 0 else t + col["offset"]
    o = base + i * sz
    return toc[o:o + sz]


def row_index(toc, indexed, d, w, rows, row):
    out = []
    for j in range(len(indexed)):
        o = d + (row * len(indexed) + j) * w
        v = int.from_bytes(toc[o:o + w], "little")
        none = (1 << (8 * w)) - 1
        out.append(None if v == none else v)
    return out


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--eboot", default="../6RE/DUMPS/PS5Dump/eboot.bin")
    ap.add_argument("--archive", required=True)
    ap.add_argument("--cells", type=int, default=4)
    ap.add_argument("--out")
    args = ap.parse_args(argv)

    keyimg = ps5elf.load_image(args.eboot)
    img = rpf9wb.Image(args.eboot)
    img.patch()

    toc, geo, secs, info = decrypt_toc(img, keyimg, args.archive)
    if info is None:
        raise SystemExit("no section 1: cannot decrypt stage 2")
    key_id, kind, iv2, meta = info
    if meta is None:
        raise SystemExit("section 1 names key %#x, which is not in the key list"
                         % key_id)

    print("archive %s  toc_end %#x  idx_end %#x"
          % (os.path.basename(args.archive), geo["toc_end"], geo["idx_end"]))
    print("  nsec %d  bsz %#x  tail %#x  ncol %d  n22 %d  rows %d  w %d"
          % (meta["nsec"], geo["bsz"], geo["tail"], meta["ncol"], meta["n22"],
             meta["rows"], meta["w"]))
    print("  stage 2 key %#x type %#x IV %s" % (key_id, kind, iv2.hex()))
    print("  sections %s" % ", ".join("%d@%#x" % s for s in secs))

    cols, indexed, d, t = parse(toc, geo, meta)
    print()
    print("  columns: %d indexed, %d direct (header says %d direct)"
          % (len(indexed), meta["ncol"] - len(indexed), meta["n22"]))
    print("  C %#x  D %#x  T %#x" % (geo["C"], d, t))
    print()
    print("  idx  hash              count  offset    size  flags  kind")
    for col in cols:
        name = KNOWN.get(col["hash"], ("", 0))[0]
        print("  %3d  %016x  %5d  %08x  %4d  %5d  %s"
              % (col["index"], col["hash"], col["count"], col["offset"],
                 col["elem_size"], col["flags"], name or "(unknown)"))

    for col in cols:
        if col["hash"] in KNOWN:
            continue
        print()
        print("  --- unknown column %d: %016x  size %d  count %d  flags %d"
              % (col["index"], col["hash"], col["elem_size"], col["count"],
                 col["flags"]))
        n = min(args.cells, col["count"])
        for i in range(n):
            raw = cell(toc, col, i, geo["idx_end"], t)
            if not raw:
                print("    [%d] (empty)" % i)
                continue
            as_u64 = struct.unpack_from("<Q", raw, 0)[0] if len(raw) >= 8 else None
            as_u32 = struct.unpack_from("<I", raw, 0)[0] if len(raw) >= 4 else None
            print("    [%d] %s   u64=%s u32=%s"
                  % (i, raw.hex(),
                     "0x%x" % as_u64 if as_u64 is not None else "-",
                     "0x%x" % as_u32 if as_u32 is not None else "-"))

    if indexed and meta["rows"]:
        print()
        print("  first 6 rows of the row index (columns %s):" % indexed)
        for row in range(min(6, meta["rows"])):
            print("    row %d -> %s" % (row, row_index(toc, indexed, d, meta["w"],
                                                       meta["rows"], row)))

    if args.out:
        with open(args.out, "wb") as fh:
            fh.write(toc)
        print("\nwrote %s (%d bytes)" % (args.out, len(toc)))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
