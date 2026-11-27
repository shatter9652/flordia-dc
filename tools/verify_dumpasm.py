#!/usr/bin/env python3
"""Check that DumpAsm's sweep agrees with objdump on the same bytes.

objdump is the ground truth here: it is a straight linear sweep over the exact
bytes the loader maps, so an address/length disagreement is a real decoder
disagreement and not an artefact of Ghidra's analysis state.

    python3 tools/verify_dumpasm.py ../6RE/DUMPS/PS5Dump/eboot.bin 0x438c600:0x438c6a0
"""
import re
import subprocess
import sys
import os

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import ps5elf  # noqa: E402

GH = re.compile(r"^([0-9a-f]{8}): (.+?)\s+; (\d+) bytes")
OB = re.compile(r"^\s+([0-9a-f]+):\t([0-9a-f ]+)\t(.*)$")


def ghidra(self_file, rng):
    out = subprocess.run(
        [sys.executable, os.path.join(HERE, "ghidra_dump.py"), self_file,
         "--window", "%#x:%#x" % (rng[0] & ~0xFFF, (rng[1] + 0xFFF) & ~0xFFF),
         "--addrs", hex(rng[0]),
         "--script", "DumpAsm.java %#x:%#x" % rng],
        capture_output=True, text=True, check=False).stdout
    rows = []
    for line in out.splitlines():
        m = GH.match(line)
        if m:
            rows.append((int(m.group(1), 16), int(m.group(3)), m.group(2)))
    return rows


def objdump(self_file, rng):
    img = ps5elf.load_image(self_file)
    base = rng[0] & ~0xFFF
    off = ps5elf.resolve(img, va=base)
    raw = img["data"][off:off + (rng[1] - base) + 0x100]
    path = "/tmp/verify_dumpasm.bin"
    with open(path, "wb") as fh:
        fh.write(raw)
    out = subprocess.run(
        ["objdump", "-D", "-b", "binary", "-m", "i386:x86-64", "-M", "intel",
         "--adjust-vma=%#x" % base, path],
        capture_output=True, text=True, check=True).stdout
    rows = []
    for line in out.splitlines():
        m = OB.match(line)
        if m:
            rows.append((int(m.group(1), 16), m.group(3)))
    rows.sort()
    # objdump wraps long instructions onto a continuation line, so the byte
    # column under-reports the length. The address delta does not: the next
    # instruction starts exactly where this one ends.
    o = {}
    for i, (addr, text) in enumerate(rows):
        nxt = rows[i + 1][0] if i + 1 < len(rows) else addr + 0x10
        o[addr] = (nxt - addr, text)
    return o


def main(argv):
    self_file, spec = argv[0], argv[1]
    a, b = spec.split(":")
    rng = (int(a, 0), int(b, 0))
    g = ghidra(self_file, rng)
    o = objdump(self_file, rng)
    bad = 0
    for addr, length, text in g:
        want = o.get(addr)
        if want is None:
            print("MISMATCH %#x: not an instruction boundary in objdump" % addr)
            bad += 1
        elif want[0] != length:
            print("MISMATCH %#x: ghidra %d bytes (%s) vs objdump %d (%s)"
                  % (addr, length, text, want[0], want[1].strip()))
            bad += 1
    # Coverage: every objdump boundary inside the range must be visited.
    visited = {addr for addr, _l, _t in g}
    missing = [addr for addr in sorted(o) if rng[0] <= addr < rng[1]
               and addr not in visited]
    for addr in missing:
        print("MISSING  %#x: objdump has an instruction here" % addr)
        bad += 1
    print("%s: %d instructions compared, %d problems"
          % ("PASS" if bad == 0 else "FAIL", len(g), bad))
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
