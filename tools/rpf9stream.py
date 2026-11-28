#!/usr/bin/env python3
"""Streaming, seekable RPF9 reads.

This is the level-9 driver. It answers one question -- "what are the bytes at
offset N of this entry?" -- without materialising the entry, and it opens the
archives that are stored *inside* entries, which is how this build ships a
dependent archive.

    python3 tools/rpf9stream.py --archive ../6RE/DUMPS/PS5Dump/levels.rpf \
        --row 5 --offset 0x100 --length 64

    python3 tools/rpf9stream.py --archive ../6RE/DUMPS/PS5Dump/levels.rpf \
        --scan-nested                      # entries whose payload is an RPF9

    python3 tools/rpf9stream.py --archive ../6RE/DUMPS/PS5Dump/levels.rpf \
        --nested 0 --list                  # open that nested archive

    python3 tools/rpf9stream.py --archive ../6RE/DUMPS/PS5Dump/packs.rpf \
        --verify --windows 4               # ranges vs. the full extraction

How a range is served:

  * stored entry (stored >= unpacked): one seek and one read, O(1) in the
    entry's size. This is the whole `*_concat.rpf` family, where a single
    entry can be 3.5 GB.
  * deflated entry: the stored bytes are streamed in chunks, decrypted
    chunk by chunk with one persistent cipher state, inflated incrementally,
    and output before `offset` is discarded. Peak memory is the chunk size,
    not the entry size, and reading stops as soon as `length` bytes exist --
    so the tail of a large entry is never touched.

Payload decryption is the same rule as `tools/rpf9extract.py`, shared through
`rpf9payload.crypto_windows`: the whole range is encrypted when `pattern[2]`
is zero, and otherwise the payload is encrypted in windows -- the first
`pattern[0] + pattern[1]` bytes, then one `pattern[0]`-byte window per
`pattern[0] + pattern[2]` bytes. `(0x400, 0x400, 0x1c00, 0, 4)` gives
[0, 0x800), [0x2400, 0x2800), [0x4400, 0x4800), ... The counter lives in the
cipher state, so a state decrypts exactly one entry, and the keystream is
produced over every stored byte even though only the windows keep it.

`--verify` compares every served range against the level-8 path
(`rpf9extract.decrypt_payload` + raw inflate), so the streaming reader is
checked against an independent decode rather than against itself.
"""

import argparse
import mmap
import os
import random
import struct
import sys
import zlib

HERE = os.path.dirname(os.path.abspath(__file__))
if HERE not in sys.path:
    sys.path.insert(0, HERE)

import ps5elf          # noqa: E402
import rpf9cols        # noqa: E402
import rpf9key         # noqa: E402
import rpf9payload as P  # noqa: E402
import rpf9wb          # noqa: E402

COL_RESOURCE_ENTRY = 0xBA180AFB232D1B4B
RPF9_MAGIC = b"9FPR"

# Output produced by one inflate call. The compressed chunk is small, but a
# highly compressible entry expands far more per chunk than it stores, so the
# call is capped and the remainder goes through `unconsumed_tail`.
INFLATE_CAP = 1 << 20


class Archive:
    """A readable RPF9 image: a file, or an entry's payload held in memory."""

    def __init__(self, img, keyimg, name, buf):
        self.img = img
        self.keyimg = keyimg
        self.name = name
        self.buf = buf
        self.bytes_read = 0

        toc, geo, secs, info = rpf9cols.decrypt_toc_buffer(img, keyimg, buf, name)
        if info is None or info[3] is None:
            raise SystemExit("%s: the table of contents did not decrypt" % name)
        self.toc, self.geo, self.sections, self.info = toc, geo, secs, info
        self.meta = info[3]
        self.cols, self.cells = P.column_cells(toc, geo, self.meta)
        self.file_col = P.find_column(self.cols, P.COL_FILE_ENTRY)
        self.crypto_col = P.find_column(self.cols, P.COL_CRYPTO)
        self.resource_col = P.find_column(self.cols, COL_RESOURCE_ENTRY)
        self._blobs = {}

    def __len__(self):
        return len(self.buf)

    def rows(self):
        return range(self.meta["rows"])

    # -- entries ----------------------------------------------------------

    def entry(self, row):
        """The row's file or resource entry, or None when it has neither."""
        raw = None
        resource = False
        if self.file_col is not None:
            raw = self.cells.get((self.file_col, row))
        if raw is None and self.resource_col is not None:
            raw = self.cells.get((self.resource_col, row))
            resource = raw is not None
        if raw is None:
            return None

        e = {"row": row, "resource": resource, "crypto": None}
        if resource:
            q = P.u64(raw, 0)
            e["offset"] = P.u32(raw, 12) * 16
            e["stored"] = P.u32(raw, 8) * 16
            e["unpacked"] = q & 0xFFFFFFF0
            e["flags"] = 0
            e["resourceType"] = P.u32(raw, 16)
            e["dataStart"] = 16
        else:
            q = P.u64(raw, 0)
            e["offset"] = (q & 0xFFFFFFFFFF) * 16
            e["flags"] = q >> 40
            e["stored"] = P.u64(raw, 8) * 16
            e["unpacked"] = P.u64(raw, 16)
            e["dataStart"] = 0
        if self.crypto_col is not None:
            e["crypto"] = self.cells.get((self.crypto_col, row))
        return e

    def key_blob(self, key_id):
        blob = self._blobs.get(key_id)
        if blob is None:
            found = rpf9key.find_key(self.keyimg, key_id)
            blob = b""
            if found is not None and found["ptr"]:
                blob = rpf9key.read_at(self.keyimg, found["ptr"], found["len"])
            self._blobs[key_id] = blob
        return blob

    def windows(self, e):
        """Stored byte ranges the crypto pattern encrypts (see P.crypto_windows)."""
        body = e["stored"] - e["dataStart"]
        if e["crypto"] is None:
            return []
        return P.crypto_windows(e["crypto"], body)

    # -- the stream -------------------------------------------------------

    def plain_chunks(self, e, chunk=1 << 16):
        """Yield the entry's stored bytes in order, decrypted where encrypted.

        One cipher state lives for the whole generator, because the payload
        cipher is CTR and its counter is state. Abandoning the generator stops
        the reads, which is what makes a short range cheap.

        The keystream is produced over every stored byte -- the counter is
        positional -- but only the pattern's windows keep the decrypted bytes.
        """
        body = e["stored"] - e["dataStart"]
        if body <= 0:
            return
        start = e["offset"] + e["dataStart"]
        windows = self.windows(e)
        state = None
        if windows:
            rec = e["crypto"]
            state = P.init_state(self.img, self.key_blob(P.u32(rec, 0)), rec[6:22])

        pos = 0
        while pos < body:
            n = min(chunk, body - pos)
            piece = bytes(self.buf[start + pos:start + pos + n])
            self.bytes_read += n
            if state is not None:
                plain = P.stream_decrypt(self.img, state, piece)
                if windows:
                    out = bytearray(piece)
                    for lo, hi in windows:
                        a, b = max(lo, pos), min(hi, pos + n)
                        if a < b:
                            out[a - pos:b - pos] = plain[a - pos:b - pos]
                    piece = bytes(out)
            pos += n
            yield piece

    def read_range(self, e, offset, length, chunk=1 << 16):
        """Bytes [offset, offset+length) of the unpacked entry."""
        if length <= 0 or offset >= e["unpacked"]:
            return b""
        length = min(length, e["unpacked"] - offset)

        # Stored entries are addressed directly: the unpacked bytes are the
        # stored bytes, so a range is a seek. The 3.5 GB concat rows land here.
        if e["stored"] >= e["unpacked"]:
            start = e["offset"] + e["dataStart"] + offset
            self.bytes_read += length
            return bytes(self.buf[start:start + length])

        if e["crypto"] is None:
            # No crypto record but stored < unpacked: the row is plain deflate,
            # not ciphertext. The nested archives inside `data.rpf` are all
            # this shape (156/156 rows), which is why the rule has to be tried
            # before calling the row undecodable.
            pass

        out = bytearray()
        pos = 0
        inflater = zlib.decompressobj(-15)
        for piece in self.plain_chunks(e, chunk):
            data = piece
            while data:
                try:
                    block = inflater.decompress(data, INFLATE_CAP)
                except zlib.error:
                    # A payload that does not inflate is the level-8 residual
                    # class (stored bytes beyond what the pattern describes).
                    # A range read reports what it could produce rather than
                    # turning a damaged entry into a crash.
                    return bytes(out)
                data = inflater.unconsumed_tail
                if block:
                    if pos + len(block) <= offset:
                        pos += len(block)
                    else:
                        skip = max(0, offset - pos)
                        out += block[skip:skip + (length - len(out))]
                        pos += len(block)
                        if len(out) >= length:
                            return bytes(out)
                if inflater.eof:
                    return bytes(out)
        return bytes(out)

    def payload(self, e):
        """The whole unpacked entry. Only for small entries -- see read_range."""
        return self.read_range(e, 0, e["unpacked"])

    # -- dependent archives ----------------------------------------------

    def nested(self, row, cap=1 << 31):
        """Open row's payload as an archive.

        A stored nested archive is a zero-copy view of the parent image; a
        deflated one has to be materialised, and is refused above `cap`.
        """
        e = self.entry(row)
        if e is None:
            raise SystemExit("%s: row %d has no entry" % (self.name, row))
        head = self.read_range(e, 0, 4)
        if head != RPF9_MAGIC:
            raise SystemExit("%s: row %d is not an RPF9 (payload starts %s)"
                             % (self.name, row, head.hex() or "empty"))
        if e["stored"] >= e["unpacked"]:
            start = e["offset"] + e["dataStart"]
            buf = memoryview(self.buf)[start:start + e["unpacked"]]
        else:
            if e["unpacked"] > cap:
                raise SystemExit("%s: row %d is a %d-byte nested archive"
                                 % (self.name, row, e["unpacked"]))
            buf = self.payload(e)
        return Archive(self.img, self.keyimg,
                       "%s[%d]" % (self.name, row), buf)


# -- commands -------------------------------------------------------------


def describe(arch):
    print("%s: rows %d  toc_end %#x  idx_end %#x  columns %d"
          % (arch.name, arch.meta["rows"], arch.geo["toc_end"],
             arch.geo["idx_end"], len(arch.cols)))


def cmd_list(arch):
    describe(arch)
    for row in arch.rows():
        e = arch.entry(row)
        if e is None:
            continue
        print("  row %-5d off %#012x stored %12d unpacked %12d flags %#05x%s"
              % (row, e["offset"], e["stored"], e["unpacked"], e["flags"],
                 "  resource" if e["resource"] else ""))


def cmd_read(arch, row, offset, length, out):
    e = arch.entry(row)
    if e is None:
        raise SystemExit("%s: row %d has no entry" % (arch.name, row))
    before = arch.bytes_read
    data = arch.read_range(e, offset, length)
    used = arch.bytes_read - before
    body = e["stored"] - e["dataStart"]
    print("%s row %d: %d bytes at offset %d of %d (stored %d)"
          % (arch.name, row, len(data), offset, e["unpacked"], body))
    print("  read %d stored bytes (%.1f%% of the entry)%s"
          % (used, 100.0 * used / body if body else 0.0,
             ", direct seek" if e["stored"] >= e["unpacked"] else ", streamed"))
    if out:
        with open(out, "wb") as f:
            f.write(data)
        print("  wrote %s" % out)
    else:
        print("  %s" % data[:64].hex())
    return 0 if data or length == 0 else 1


def cmd_scan_nested(arch):
    describe(arch)
    found = 0
    for row in arch.rows():
        e = arch.entry(row)
        if e is None or e["unpacked"] < 0x40:
            continue
        if arch.read_range(e, 0, 4) != RPF9_MAGIC:
            continue
        found += 1
        child = arch.nested(row)
        print("  row %-5d off %#012x %10d bytes -> RPF9 rows %d  toc_end %#x"
              % (row, e["offset"], e["unpacked"], child.meta["rows"],
                 child.geo["toc_end"]))
    print("  %d dependent archive%s" % (found, "" if found == 1 else "s"))
    return 0


def cmd_verify(arch, rows, windows, seed, chunk):
    import rpf9extract as X

    rng = random.Random(seed)
    checked = skipped = compared = bad = 0
    before = arch.bytes_read

    for row in rows:
        e = arch.entry(row)
        if e is None or e["stored"] == 0:
            continue
        start = e["offset"] + e["dataStart"]
        if e["stored"] >= e["unpacked"]:
            truth = bytes(arch.buf[start:start + e["unpacked"]])
        else:
            body = bytes(arch.buf[start:start + e["stored"]])
            if e["crypto"] is None:
                plain = body
            else:
                plain = X.decrypt_payload(arch.img,
                                          arch.key_blob(P.u32(e["crypto"], 0)),
                                          e["crypto"], body)
            truth, complete = X.inflate(plain)
            if truth is None or not complete or len(truth) != e["unpacked"]:
                # The level-8 residual class: entries whose stored size is
                # larger than the mask the pattern describes.
                skipped += 1
                continue

        full = arch.read_range(e, 0, e["unpacked"], chunk)
        if full != truth:
            bad += 1
            print("  row %-5d FULL MISMATCH (%d vs %d bytes)"
                  % (row, len(full), len(truth)))
            continue

        for _ in range(windows):
            off = rng.randrange(0, max(1, e["unpacked"]))
            n = min(rng.choice((1, 16, 4096, 65536)), e["unpacked"] - off)
            got = arch.read_range(e, off, n, chunk)
            compared += 1
            if got != truth[off:off + n]:
                bad += 1
                print("  row %-5d window %d+%d MISMATCH" % (row, off, n))
                break
        checked += 1

    used = arch.bytes_read - before
    print("%s: %d entries verified, %d windows compared, %d skipped, %d bad"
          % (arch.name, checked, compared, skipped, bad))
    print("  %d stored bytes read for %d unpacked bytes verified"
          % (used, sum(arch.entry(r)["unpacked"] for r in rows
                       if arch.entry(r) is not None)))
    return 0 if bad == 0 and checked > 0 else 1


def parse_rows(text):
    out = []
    for part in text.split(","):
        part = part.strip()
        if not part:
            continue
        if "-" in part:
            a, b = part.split("-", 1)
            out.extend(range(int(a, 0), int(b, 0) + 1))
        else:
            out.append(int(part, 0))
    return out


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--eboot", default="../6RE/DUMPS/PS5Dump/eboot.bin")
    ap.add_argument("--archive", required=True)
    ap.add_argument("--nested", type=int, action="append", default=[],
                    metavar="ROW",
                    help="descend into row's payload as an archive (repeatable)")
    ap.add_argument("--list", action="store_true", help="print the rows")
    ap.add_argument("--scan-nested", action="store_true",
                    help="report rows whose payload is itself an RPF9")
    ap.add_argument("--row", type=int, help="row to read")
    ap.add_argument("--offset", type=lambda s: int(s, 0), default=0)
    ap.add_argument("--length", type=lambda s: int(s, 0), default=64)
    ap.add_argument("--chunk", type=lambda s: int(s, 0), default=1 << 16,
                    help="stored bytes per read (default 65536)")
    ap.add_argument("--out")
    ap.add_argument("--verify", action="store_true",
                    help="compare served ranges against the level-8 decode")
    ap.add_argument("--rows", help="row list for --verify, e.g. 0-9,20")
    ap.add_argument("--windows", type=int, default=3,
                    help="random windows per entry in --verify")
    ap.add_argument("--seed", type=int, default=1)
    args = ap.parse_args(argv)

    keyimg = ps5elf.load_image(args.eboot)
    img = rpf9wb.Image(args.eboot)
    img.patch()

    fh = open(args.archive, "rb")
    raw = mmap.mmap(fh.fileno(), 0, access=mmap.ACCESS_READ)
    arch = Archive(img, keyimg, os.path.basename(args.archive), memoryview(raw))
    for row in args.nested:
        arch = arch.nested(row)

    status = 0
    if args.list:
        cmd_list(arch)
    if args.scan_nested:
        status |= cmd_scan_nested(arch)
    if args.verify:
        rows = parse_rows(args.rows) if args.rows else list(arch.rows())
        status |= cmd_verify(arch, rows, args.windows, args.seed, args.chunk)
    if args.row is not None:
        status |= cmd_read(arch, args.row, args.offset, args.length, args.out)
    if not (args.list or args.scan_nested or args.verify or args.row is not None):
        describe(arch)
    return status


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
