#!/usr/bin/env python3
"""Decompile addresses from a PS5 SELF without an interactive Ghidra session.

REA speaks to Ghidra only through releases it has verified (12.2+ today), and
this machine has 12.1.4, so the windowed-ELF path is driven directly through
`analyzeHeadless` instead. This wrapper does the three steps by hand:

  1. `tools/ps5elf.py convert` the SELF into a windowed ELF (segment blocks,
     not `p_offset`, so the addresses are the retail image's);
  2. import it into a throw-away Ghidra project under /tmp;
  3. run `tools/DumpC.java`, which disassembles each requested address, creates
     a function if the stripped image did not seed one, and prints the
     decompiler's C.

Example -- the RPF9 cluster of the GTA VI PS5 eboot:

    python3 tools/ghidra_dump.py 6RE/DUMPS/PS5Dump/eboot/eboot.bin \\
        --window 0x8e0000:0x8e3000 \\
        --addrs 0x8e0800,0x8e0990,0x8e1100

The output is the decompiler's, unedited. It is evidence to read alongside the
disassembly, not a recovered source file.
"""

import argparse
import os
import shutil
import subprocess
import sys
import tempfile

HERE = os.path.dirname(os.path.abspath(__file__))
PS5ELF = os.path.join(HERE, "ps5elf.py")
DUMPER = os.path.join(HERE, "DumpC.java")

DEFAULT_GHIDRA = "/home/nate/ghidra/ghidra_12.1.4_PUBLIC"


def find_headless(explicit):
    candidates = []
    if explicit:
        candidates.append(explicit)
    if os.environ.get("GHIDRA_INSTALL_DIR"):
        candidates.append(os.path.join(os.environ["GHIDRA_INSTALL_DIR"],
                                       "support", "analyzeHeadless"))
    candidates.append(os.path.join(DEFAULT_GHIDRA, "support", "analyzeHeadless"))
    for path in candidates:
        if os.path.isfile(path):
            return path
    raise SystemExit("analyzeHeadless not found; pass --ghidra DIR")


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("self_file", help="SELF (eboot.bin / *.prx) to read")
    ap.add_argument("--addrs", required=True,
                    help="comma-separated image virtual addresses")
    ap.add_argument("--window", action="append", default=[],
                    help="START:END virtual range to convert (repeatable); "
                         "defaults to the span of --addrs plus 0x1000 either side")
    ap.add_argument("--script",
                    help="run another script instead of DumpC, e.g. "
                         "'Blocks.java 0 12' or 'Xrefs.java 0x8e0ce8 --decompile'")
    ap.add_argument("--ghidra", help="Ghidra install directory")
    ap.add_argument("--timeout", type=int, default=600)
    args = ap.parse_args(argv)

    addrs = [a.strip() for a in args.addrs.split(",") if a.strip()]
    if not addrs:
        raise SystemExit("--addrs is empty")
    windows = list(args.window)
    if not windows:
        values = [int(a, 0) for a in addrs]
        lo = min(values) & ~0xFFF
        hi = (max(values) + 0x1000 + 0xFFF) & ~0xFFF
        windows = ["%#x:%#x" % (lo, hi)]

    headless = find_headless(args.ghidra)
    work = tempfile.mkdtemp(prefix="ghidra_dump_")
    project_dir = os.path.join(work, "proj")
    os.makedirs(project_dir)
    elf = os.path.join(work, "window.elf")
    try:
        cmd = [sys.executable, PS5ELF, "convert", args.self_file, elf,
               "--entry", addrs[0]]
        for window in windows:
            cmd += ["--window", window]
        subprocess.run(cmd, check=True, stdout=subprocess.DEVNULL)

        if args.script:
            parts = args.script.split()
            post = ["-postScript", parts[0]] + parts[1:]
        else:
            post = ["-postScript", "DumpC.java", ",".join(addrs)]
        run = [headless, project_dir, "dump", "-import", elf,
               "-scriptPath", HERE] + post + ["-deleteProject"]
        result = subprocess.run(run, check=False, text=True,
                                stdout=subprocess.PIPE,
                                stderr=subprocess.STDOUT,
                                timeout=args.timeout)
        text = result.stdout
        # Keep only the decompiler's own lines; the Ghidra banner and the
        # analyzer's INFO lines are noise around the evidence.
        keep = []
        for line in text.splitlines():
            if (line.startswith("// ") or line.startswith("//")
                    or line.startswith("\t") or line.startswith("  ")
                    or line.startswith("{") or line.startswith("}")
                    or line.startswith("undefined") or line.startswith("void ")
                    or line.startswith("int ") or line.startswith("uint ")
                    or line.startswith("long") or line.startswith("ulong")
                    or line.startswith("char") or line.startswith("short")
                    or line.startswith("byte") or line.startswith("float")
                    or line.startswith("double") or line.startswith("bool")
                    or (line and not line[0].isalpha())):
                keep.append(line)
        print("\n".join(keep))
        if result.returncode != 0:
            print("// analyzeHeadless exit %d" % result.returncode,
                  file=sys.stderr)
            return result.returncode
        return 0
    finally:
        shutil.rmtree(work, ignore_errors=True)


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
