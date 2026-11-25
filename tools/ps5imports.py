#!/usr/bin/env python3
"""Recover the PS5 build's import manifest and match it to firmware modules.

A Prospero executable is stripped of C++ names, RTTI and assert strings, so the
only symbolic information it keeps is the list of system libraries it imports
and the names of the modules that implement them. This tool recovers both:

  * the library table in the eboot -- pairs of ``libSceX.prx`` and ``libSceX``
    strings that the loader uses to pull in each module -- and
  * the module file for each library in an extracted firmware tree, plus
    whether that module is still encrypted.

The second half is a measured fact, not an assumption: PS5 firmware ships every
``.sprx``/``.prx`` as a SELF with magic ``5414f5ee`` (encrypted body), so the
module list names the code that implements a library but does not give its
bytes. The game's own ``sce_module`` copies use ``4f153d1d`` (plaintext) and do
decompile; ``libc.prx`` there keeps its libc error strings.

Output (``imports/``):

    ps5_libraries.tsv   library, prx, name offset, vaddr, firmware module, state
    ps5_firmware.tsv    every module in the firmware tree and its container

Usage:
    python3 gta6decomp/tools/ps5imports.py \\
        --eboot 6RE/DUMPS/PS5Dump/eboot/eboot.bin \\
        --firmware PS5FW/dumps/11.60/extracted \\
        --out-dir gta6decomp/imports
"""

import argparse
import os
import re
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import ps5elf  # noqa: E402  (the SELF reader is the authority on layout)

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

PLAINTEXT_SELF = b"\x4f\x15\x3d\x1d"
ENCRYPTED_SELF = b"\x54\x14\xf5\xee"

LIB_RE = re.compile(rb"libSce[A-Za-z0-9_]*(?:\.prx|\.sprx)?\x00")


def read_libraries(image):
    """Return [(prx, library, name file offset, name vaddr)] from the eboot.

    The loader's table is a run of ``libSceX.prx\0libSceX\0`` pairs inside the
    last load segment. Only pairs are accepted, so a lone occurrence of either
    spelling (a log message, a path) cannot invent a library entry.
    """
    data = image["data"]
    out = []
    for m in LIB_RE.finditer(data):
        prx = m.group(0)[:-1].decode("ascii", "replace")
        if not prx.endswith((".prx", ".sprx")):
            continue
        after = m.end()
        m2 = LIB_RE.match(data, after)
        if m2 is None:
            continue
        library = m2.group(0)[:-1].decode("ascii", "replace")
        if library.endswith((".prx", ".sprx")):
            continue
        vaddr = ps5elf.resolve(image, offset=m.start())
        out.append((prx, library, m.start(), vaddr))
    return out


def scan_firmware(root, table=None):
    """Add {basename without extension: (relative path, container state)}.

    Earlier roots win, so passing the game's own ``sce_module`` folder first
    keeps its plaintext copies over the encrypted firmware ones.
    """
    if table is None:
        table = {}
    for base, _dirs, files in os.walk(root):
        for name in files:
            if not name.endswith((".sprx", ".prx", ".elf")):
                continue
            path = os.path.join(base, name)
            try:
                with open(path, "rb") as handle:
                    head = handle.read(4)
            except OSError:
                continue
            if head == PLAINTEXT_SELF:
                state = "plaintext-self"
            elif head == ENCRYPTED_SELF:
                state = "encrypted-self"
            elif head == b"\x7fELF":
                state = "plain-elf"
            else:
                state = "unknown"
            stem = os.path.splitext(name)[0]
            rel = os.path.relpath(path, root)
            # First match wins: the tree lists some modules twice (system and
            # system_ex), and the shorter path is the canonical copy.
            table.setdefault(stem, (rel, state))
    return table


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--eboot", default=os.path.join(
        ROOT, "6RE/DUMPS/PS5Dump/eboot/eboot.bin"))
    ap.add_argument("--firmware", action="append", default=None,
                    help="extracted firmware tree (repeatable; earlier wins)")
    ap.add_argument("--game-modules", default=os.path.join(
        ROOT, "6RE/DUMPS/PS5Dump/eboot/sce_module"),
        help="the game's own sce_module folder, which is plaintext SELF")
    ap.add_argument("--out-dir", default=os.path.join(ROOT, "gta6decomp", "imports"))
    args = ap.parse_args()
    if not args.firmware:
        args.firmware = [os.path.join(ROOT, "PS5FW/dumps/11.60/extracted")]

    image = ps5elf.load_image(args.eboot)
    libraries = read_libraries(image)
    firmware = {}
    for root in [args.game_modules] + list(args.firmware):
        if root and os.path.isdir(root):
            scan_firmware(root, firmware)

    os.makedirs(args.out_dir, exist_ok=True)
    lib_path = os.path.join(args.out_dir, "ps5_libraries.tsv")
    with open(lib_path, "w", encoding="utf-8", newline="\n") as handle:
        handle.write("library\tprx\tname_offset\tname_vaddr\tfirmware_module\tstate\n")
        for prx, library, offset, vaddr in libraries:
            stem = os.path.splitext(prx)[0]
            entry = (firmware.get(stem) or firmware.get(library)
                     or firmware.get(stem + ".native")
                     or firmware.get(library + ".native"))
            module, state = entry if entry else ("", "not-in-firmware-tree")
            handle.write("%s\t%s\t%#x\t%s\t%s\t%s\n"
                         % (library, prx, offset,
                            ("%#x" % vaddr) if vaddr is not None else "",
                            module, state))

    fw_path = os.path.join(args.out_dir, "ps5_firmware.tsv")
    with open(fw_path, "w", encoding="utf-8", newline="\n") as handle:
        handle.write("module\tpath\tstate\n")
        for stem, (rel, state) in sorted(firmware.items()):
            handle.write("%s\t%s\t%s\n" % (stem, rel, state))

    enc = sum(1 for _s, st in firmware.values() if st == "encrypted-self")
    plain = sum(1 for _s, st in firmware.values() if st != "encrypted-self")
    resolved = sum(1 for prx, lib, _o, _v in libraries
                   if firmware.get(os.path.splitext(prx)[0]) or firmware.get(lib))
    print("libraries imported by the eboot: %d" % len(libraries))
    print("  resolved to a firmware module: %d" % resolved)
    print("firmware modules: %d (%d encrypted, %d readable)"
          % (len(firmware), enc, plain))
    print("wrote", lib_path)
    print("wrote", fw_path)
    return 0


if __name__ == "__main__":
    try:
        sys.stdout.reconfigure(errors="replace")
    except (AttributeError, ValueError, OSError):
        pass
    sys.exit(main())
