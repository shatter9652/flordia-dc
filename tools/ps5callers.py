#!/usr/bin/env python3
"""Map an address to its function, and find callers, on the PS5 eboot.

`tools/callers.py` answers this for the Xbox image through `.pdata`. The eboot
has no `.pdata`, but it does carry `PT_GNU_EH_FRAME`, and that header holds the
same thing: a sorted table of function start addresses (the FDE search table).
Parsing it gives every function boundary without a disassembler, which is what
makes "which function reads this immediate" and "who calls it" answerable on
this image in seconds.

    python3 tools/ps5callers.py --addr 0x27d089
    python3 tools/ps5callers.py --imm 0xd95d39a4
    python3 tools/ps5callers.py --target 0x27d0c0,0x54512b --depth 2

Two instruction forms are scanned in an executable segment:

  * `E8 rel32`     -- direct call, `position + 5 + rel`
  * `FF 15 disp32` -- call through [rip+disp], the IAT and pointer tables

Every hit is attributed to its containing function, so a target can be walked
outwards. Function ends are the next start in the table (the table is sorted
and covers the code), which is the same approximation `.pdata` gives.
"""

import argparse
import bisect
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
if HERE not in sys.path:
    sys.path.insert(0, HERE)

import ps5elf            # noqa: E402

PT_GNU_EH_FRAME = 0x6474E550
PT_LOAD = 1

# DW_EH_PE encodings, low nibble = format, high nibble = application.
DW_EH_PE_omit = 0xFF
DW_EH_PE_absptr = 0x00
DW_EH_PE_udata4 = 0x03
DW_EH_PE_sdata4 = 0x0B
DW_EH_PE_sdata8 = 0x0C
DW_EH_PE_pcrel = 0x10
DW_EH_PE_datarel = 0x30


def read_encoded(data, off, enc, delta, datarel_va):
    """Read one DW_EH_PE value at file offset `off`; (value, next_offset).

    `delta` is ``va - file offset`` for the header, so the address of the field
    is ``off + delta`` (pcrel) and the datarel base is the header's VA. Using a
    file offset as the base here shifts every entry by the header's offset and
    still yields a sorted, plausible-looking table -- it was out by a constant
    and only the call-target cross-check caught it.
    """
    if enc == DW_EH_PE_omit:
        return None, off
    fmt = enc & 0x0F
    app = enc & 0x70
    start = off
    if fmt == DW_EH_PE_absptr:
        value = struct.unpack_from("<Q", data, off)[0]
        off += 8
    elif fmt == DW_EH_PE_udata4:
        value = struct.unpack_from("<I", data, off)[0]
        off += 4
    elif fmt == DW_EH_PE_sdata4:
        value = struct.unpack_from("<i", data, off)[0]
        off += 4
    elif fmt == DW_EH_PE_sdata8:
        value = struct.unpack_from("<q", data, off)[0]
        off += 8
    else:
        raise SystemExit("unsupported DW_EH_PE format %#x" % enc)
    if app == DW_EH_PE_pcrel:
        value += start + delta
    elif app == DW_EH_PE_datarel:
        value += datarel_va
    elif app != 0:
        raise SystemExit("unsupported DW_EH_PE application %#x" % enc)
    return value & 0xFFFFFFFFFFFFFFFF, off


def function_starts(image):
    """Sorted function start addresses from PT_GNU_EH_FRAME."""
    hdr_va = None
    for p in image["phdrs"]:
        if p[0] == PT_GNU_EH_FRAME:
            hdr_va, hdr_size = p[3], p[5]
            break
    if hdr_va is None:
        raise SystemExit("no PT_GNU_EH_FRAME in this image")
    off = ps5elf.resolve(image, va=hdr_va)
    if off is None:
        raise SystemExit("the eh_frame_hdr is not file-backed")
    data = image["data"]
    head = data[off:off + 4]
    version, ptr_enc, count_enc, table_enc = head[0], head[1], head[2], head[3]
    if version != 1:
        raise SystemExit("unexpected eh_frame_hdr version %d" % version)
    delta = hdr_va - off
    cur = off + 4
    _eh_frame_ptr, cur = read_encoded(data, cur, ptr_enc, delta, hdr_va)
    count, cur = read_encoded(data, cur, count_enc, delta, hdr_va)
    if not count or count < 1000 or count > 2000000:
        raise SystemExit("implausible FDE count %r" % (count,))
    starts = []
    for _ in range(int(count)):
        pc, cur = read_encoded(data, cur, table_enc, delta, hdr_va)
        _fde, cur = read_encoded(data, cur, table_enc, delta, hdr_va)
        if pc:
            starts.append(pc)
    starts.sort()
    return starts


def ranges(starts, top):
    """[(begin, end)] using the next start as the end."""
    out = []
    for i, begin in enumerate(starts):
        end = starts[i + 1] if i + 1 < len(starts) else top
        if end > begin:
            out.append((begin, end))
    return out


class Table:
    def __init__(self, image):
        self.starts = function_starts(image)
        top = 0
        for p in image["phdrs"]:
            if p[0] == PT_LOAD and p[5]:
                top = max(top, p[3] + p[5])
        self.rows = ranges(self.starts, top)
        self.begins = [r[0] for r in self.rows]

    def containing(self, va):
        i = bisect.bisect_right(self.begins, va) - 1
        if i < 0:
            return None
        begin, end = self.rows[i]
        return (begin, end) if begin <= va < end else None

    def callsites(self, image, targets):
        """{target: sorted(set(caller begin))} for direct calls and [rip] calls."""
        want = set(targets)
        out = {t: set() for t in targets}
        data = image["data"]
        for p in image["phdrs"]:
            if p[0] != PT_LOAD or not p[5]:
                continue
            mapped = image["maps"][image["phdrs"].index(p)]
            src = mapped[0] if mapped else p[2]
            base_va, size = p[3], p[5]
            body = data[src:src + size]
            at = body.find(b"\xe8")
            while at >= 0 and at <= len(body) - 5:
                rel = struct.unpack_from("<i", body, at + 1)[0]
                tgt = base_va + at + 5 + rel
                if tgt in want:
                    hit = self.containing(base_va + at)
                    if hit:
                        out[tgt].add(hit[0])
                at = body.find(b"\xe8", at + 1)
            # FF 15 disp32, every byte phase
            at = body.find(b"\xff\x15")
            while at >= 0 and at <= len(body) - 6:
                disp = struct.unpack_from("<i", body, at + 2)[0]
                va = base_va + at
                if va & 1 == 0 or True:
                    slot_va = va + 6 + disp
                    slot = ps5elf.resolve(image, va=slot_va)
                    if slot is not None:
                        ptr = struct.unpack_from("<Q", data, slot)[0]
                        if ptr in want:
                            hit = self.containing(va)
                            if hit:
                                out[ptr].add(hit[0])
                at = body.find(b"\xff\x15", at + 1)
        return {t: sorted(v) for t, v in out.items()}


def rip_refs(image, target):
    """Addresses of instructions that form `target` as a rip-relative operand.

    A string load is `lea reg, [rip+disp32]` and a global read is
    `mov reg, [rip+disp32]`, so the operand is `8d`/`8b` with mod=00 rm=101
    and a REX prefix. Matching the resolved target exactly keeps the scan from
    reporting unrelated instructions.
    """
    hits = []
    data = image["data"]
    for i, p in enumerate(image["phdrs"]):
        if p[0] != PT_LOAD or not p[5]:
            continue
        mapped = image["maps"][i]
        src = mapped[0] if mapped else p[2]
        body = data[src:src + p[5]]
        base_va = p[3]
        for opcode in (b"\x8d", b"\x8b", b"\x89"):
            at = body.find(opcode)
            while at >= 0:
                if (at > 0 and body[at - 1] in (0x48, 0x49, 0x4C, 0x4D)
                        and at + 6 <= len(body) and body[at + 1] & 0xC7 == 0x05):
                    disp = struct.unpack_from("<i", body, at + 2)[0]
                    insn_va = base_va + at - 1
                    if insn_va + 7 + disp == target:
                        hits.append(insn_va)
                at = body.find(opcode, at + 1)
    return sorted(set(hits))


def call_targets(image):
    """Set of direct `call rel32` destinations in the executable segments."""
    out = set()
    data = image["data"]
    for i, p in enumerate(image["phdrs"]):
        if p[0] != PT_LOAD or not p[5]:
            continue
        mapped = image["maps"][i]
        src = mapped[0] if mapped else p[2]
        body = data[src:src + p[5]]
        base_va = p[3]
        at = body.find(b"\xe8")
        while at >= 0 and at <= len(body) - 5:
            rel = struct.unpack_from("<i", body, at + 1)[0]
            out.add(base_va + at + 5 + rel)
            at = body.find(b"\xe8", at + 1)
    return out


def immediates(image, table, value):
    """Addresses where `value` appears as a 4-byte little-endian immediate."""
    needle = struct.pack("<I", value)
    hits = []
    data = image["data"]
    at = data.find(needle)
    while at >= 0:
        va = ps5elf.resolve(image, offset=at)
        if va is not None:
            hits.append(va)
        at = data.find(needle, at + 1)
    return hits


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--eboot", default="../6RE/DUMPS/PS5Dump/eboot.bin")
    ap.add_argument("--addr", help="addresses whose containing function to print")
    ap.add_argument("--imm", help="hex immediates to locate (comma separated)")
    ap.add_argument("--target", help="function starts to find callers for")
    ap.add_argument("--depth", type=int, default=1, help="caller levels to walk")
    ap.add_argument("--refs", help="addresses whose rip-relative readers to find")
    ap.add_argument("--check", type=int, default=0,
                    help="validate N sampled starts against direct call targets")
    args = ap.parse_args(argv)

    image = ps5elf.load_image(args.eboot)
    table = Table(image)
    print("%d function starts from PT_GNU_EH_FRAME" % len(table.starts))

    if args.check:
        targets = call_targets(image)
        sample = table.starts[::max(1, len(table.starts) // args.check)][:args.check]
        hit = sum(1 for s in sample if s in targets)
        print("%d/%d sampled starts are direct call targets (%.1f%%)"
              % (hit, len(sample), 100.0 * hit / max(1, len(sample))))

    if args.addr:
        for text in args.addr.split(","):
            va = int(text, 0)
            hit = table.containing(va)
            if hit:
                print("%#x is in FUN_%08x..%08x (%d bytes)"
                      % (va, hit[0], hit[1], hit[1] - hit[0]))
            else:
                print("%#x is not inside a function" % va)

    if args.imm:
        for text in args.imm.split(","):
            value = int(text, 0)
            hits = immediates(image, table, value & 0xFFFFFFFF)
            print("%#010x: %d occurrence(s)" % (value & 0xFFFFFFFF, len(hits)))
            for va in hits:
                hit = table.containing(va)
                where = ("FUN_%08x..%08x" % hit) if hit else "outside a function"
                print("   %#010x  %s" % (va, where))

    if args.refs:
        for text in args.refs.split(","):
            target = int(text, 0)
            hits = rip_refs(image, target)
            print("%#x: %d rip-relative reference(s)" % (target, len(hits)))
            for va in hits:
                hit = table.containing(va)
                print("   %#010x  %s" % (va, ("FUN_%08x..%08x" % hit) if hit
                                         else "outside a function"))

    if args.target:
        level = [int(t, 0) for t in args.target.split(",")]
        for depth in range(args.depth):
            found = table.callsites(image, level)
            nxt = []
            for target in level:
                callers = found.get(target, [])
                print("target FUN_%08x: %d caller(s)" % (target, len(callers)))
                for c in callers:
                    print("   FUN_%08x" % c)
                nxt.extend(callers)
            level = sorted(set(nxt))
            if not level:
                break
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
