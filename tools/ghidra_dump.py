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


def choose_entry(self_file, addr):
    """Pick an entry point that is provably an instruction boundary.

    The windowed ELF's `e_entry` is what Ghidra's `Disassemble Entry Points`
    analyzer decodes from, and it is also what seeds function-start search. If
    it is interior to an instruction, x86 decoding silently invents an
    instruction there and the whole dump inherits the shift. So only ever seed
    analysis on an address a backwards scan can vouch for; otherwise leave the
    image's own entry point alone.
    """
    try:
        if HERE not in sys.path:
            sys.path.insert(0, HERE)
        import boundary
        import ps5elf
        image = ps5elf.load_image(self_file)
        va = int(addr, 0)
        start, exact = boundary.prove(image, va)
        if exact:
            return start
        # Interior: the spanning instruction's start is a candidate, but only
        # use it if it is itself provable from further back.
        inner, inner_exact = boundary.prove(image, start)
        if inner_exact and inner < va:
            return inner
        return None
    except Exception:
        return None


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
    ap.add_argument("--noanalysis", action="store_true",
                    help="skip import-time auto-analysis. Deterministic, but a "
                         "range that starts mid-instruction can no longer be "
                         "detected, because nothing has been decoded yet; "
                         "leave analysis on unless you need a pure sweep")
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
        cmd = [sys.executable, PS5ELF, "convert", args.self_file, elf]
        entry = choose_entry(args.self_file, addrs[0])
        if entry is not None:
            cmd += ["--entry", "%#x" % entry]
        else:
            print("// note: %s is not a proven instruction boundary; leaving "
                  "the image entry point as the analysis seed" % addrs[0],
                  file=sys.stderr)
        for window in windows:
            cmd += ["--window", window]
        subprocess.run(cmd, check=True, stdout=subprocess.DEVNULL)

        if args.script:
            parts = args.script.split()
            post = ["-postScript", parts[0]] + parts[1:]
        else:
            post = ["-postScript", "DumpC.java", ",".join(addrs)]

        # Headless sends GhidraScript.println to the application log, not to
        # this process's stdout, so a script's output never reaches the caller
        # through the pipe. DumpAsm can write to a file instead; ask it to, and
        # print that file. Without this the run looks like it produced nothing.
        script_name = post[1]
        script_out = None
        if script_name == "DumpAsm.java" and not any(
                a.startswith("out=") for a in post[2:]):
            script_out = os.path.join(work, "script.out")
            post.append("out=" + script_out)

        run = [headless, project_dir, "dump", "-import", elf]
        if args.noanalysis:
            run.append("-noanalysis")
        run += ["-scriptPath", HERE] + post + ["-deleteProject"]
        result = subprocess.run(run, check=False, text=True,
                                stdout=subprocess.PIPE,
                                stderr=subprocess.STDOUT,
                                timeout=args.timeout)
        text = result.stdout
        if script_out and os.path.isfile(script_out):
            with open(script_out, "r", encoding="utf-8", errors="replace") as fh:
                print(fh.read(), end="")
            if result.returncode != 0:
                print("// analyzeHeadless exit %d" % result.returncode,
                      file=sys.stderr)
                return result.returncode
            return 0
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
