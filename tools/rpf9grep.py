#!/usr/bin/env python3
"""Search RPF9 entry contents, by row, without extracting to disk.

Objective 1 can now read every entry of an archive, so a subsystem can be
looked for by what it *stores*, not only by what the executable loads. That
matters here because RAGE's tuning data is hash-keyed: a literal like
`LOW_FUELH` appears once in the image and never in an instruction, while the
data it names lives in an archive entry and does carry readable text.

    python3 tools/rpf9grep.py --archive common.rpf --pattern fuel
    python3 tools/rpf9grep.py --archive data.rpf --pattern fuel --context 0x80
    python3 tools/rpf9grep.py --archive packs.rpf --pattern fuel --nested 0

Each hit prints the archive, the row, the offset inside the *unpacked* entry,
and the printable run around the match, so a tuning field can be read straight
out of the output. Matching is case-insensitive over ASCII; offsets are those
of the payload, so they line up with `rpf9stream.py --row N --offset O`.

Ending the run on the first hit is deliberate: `--limit` bounds the output per
archive, and a row that is larger than `--cap` is reported and skipped rather
than silently ignored.
"""

import argparse
import mmap
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
if HERE not in sys.path:
    sys.path.insert(0, HERE)

import ps5elf            # noqa: E402
import rpf9stream        # noqa: E402
import rpf9wb            # noqa: E402

DEFAULT_CAP = 64 << 20


def printable_run(payload, at, width):
    """The printable ASCII run around `at`, trimmed to `width` each side."""
    lo = at
    while lo > 0 and 0x20 <= payload[lo - 1] < 0x7F and at - lo < width:
        lo -= 1
    hi = at
    while hi < len(payload) and 0x20 <= payload[hi] < 0x7F and hi - at < width:
        hi += 1
    return payload[lo:hi].decode("ascii", "replace")


def search(arch, needle, cap, context, limit):
    """Yield (row, offset, snippet) for every hit in the archive."""
    lower = needle.lower()
    hits = 0
    for row in arch.rows():
        e = arch.entry(row)
        if e is None or e["unpacked"] == 0:
            continue
        if e["unpacked"] > cap:
            print("  row %-5d skipped: %d unpacked bytes over the cap"
                  % (row, e["unpacked"]))
            continue
        payload = arch.read_range(e, 0, e["unpacked"])
        hay = payload.lower()
        at = hay.find(lower)
        while at >= 0:
            yield row, at, printable_run(payload, at, context)
            hits += 1
            if hits >= limit:
                return
            at = hay.find(lower, at + 1)


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--eboot", default="../6RE/DUMPS/PS5Dump/eboot.bin")
    ap.add_argument("--archive", required=True, action="append",
                    help="archive to search (repeatable)")
    ap.add_argument("--pattern", required=True,
                    help="ASCII text to look for, case-insensitive")
    ap.add_argument("--nested", type=int, action="append", default=[],
                    metavar="ROW", help="descend into row's payload first")
    ap.add_argument("--context", type=lambda s: int(s, 0), default=0x40,
                    help="printable characters shown each side (default 0x40)")
    ap.add_argument("--cap", type=lambda s: int(s, 0), default=DEFAULT_CAP,
                    help="largest entry read whole (default 64 MiB)")
    ap.add_argument("--limit", type=int, default=40,
                    help="hits printed per archive (default 40)")
    args = ap.parse_args(argv)

    keyimg = ps5elf.load_image(args.eboot)
    img = rpf9wb.Image(args.eboot)
    img.patch()

    needle = args.pattern.encode("ascii")
    total = 0
    for path in args.archive:
        fh = open(path, "rb")
        raw = mmap.mmap(fh.fileno(), 0, access=mmap.ACCESS_READ)
        arch = rpf9stream.Archive(img, keyimg, os.path.basename(path),
                                  memoryview(raw))
        for row in args.nested:
            arch = arch.nested(row)
        print("== %s" % arch.name)
        found = 0
        for row, at, snippet in search(arch, needle, args.cap, args.context,
                                       args.limit):
            print("  row %-5d @ %#010x  %s" % (row, at, snippet))
            found += 1
        print("  %d hit%s" % (found, "" if found == 1 else "s"))
        total += found
        fh.close()
    print("%d hit%s for %r" % (total, "" if total == 1 else "s", args.pattern))
    return 0 if total else 1


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
