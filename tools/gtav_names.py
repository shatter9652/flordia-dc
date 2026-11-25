#!/usr/bin/env python3
"""Extract GTA V's naming conventions into tables the Ghidra exporter can use.

GTA VI keeps GTA V's RAGE architecture, and MiscRef/GTAVSRC is the shipped
GTA V source tree. It cannot be compiled into Ghidra (it is C++ with RAGE
macros and a proprietary build), but its vocabulary is the naming authority:

  * `rage::` namespaces and `C*`/`fw*`/`at*` class names,
  * subsystem directories (`rage/base`, `game/vehicle`, `game/ai`, ...),
  * the class-to-header mapping, which gives a function's likely subsystem.

This tool writes:

  names/gtav_classes.tsv    namespace, class, header
  names/gtav_subsystems.tsv subsystem, class count, example classes

The exporter uses the subsystem table to place a recovered body under
`src/<subsystem>/` and the class table to prefer RAGE spelling over a slug.
Nothing here claims a binary match: a class name is a convention to borrow,
not proof that a given body is that class's method.

Usage:
    python3 gta6decomp/tools/gtav_names.py
"""

import argparse
import os
import re
import sys
from collections import Counter, defaultdict

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
DEFAULT_SRC = os.path.join(ROOT, "MiscRef", "GTAVSRC", "src", "dev_ng")

NS_RE = re.compile(r"^\s*namespace\s+([A-Za-z_][A-Za-z0-9_]*)")
CLASS_RE = re.compile(r"^\s*(?:class|struct)\s+(?:alignas\([^)]*\)\s+)?([A-Za-z_][A-Za-z0-9_]*)")
SUBSYSTEMS = ("rage/base", "rage/vector", "rage/graphics", "rage/net", "rage/script",
              "game/vehicle", "game/ai", "game/peds", "game/weapons", "game/frontend",
              "game/audio", "game/network", "game/streaming", "game/system",
              "game/weather", "game/camera", "game/physics", "game/modelinfo",
              "game/task", "game/scenario", "game/pathserver", "game/control")


def subsystem(rel):
    for name in SUBSYSTEMS:
        if rel.startswith(name):
            return name
    parts = rel.split(os.sep)
    return "/".join(parts[:2]) if len(parts) >= 2 else "other"


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--src", default=DEFAULT_SRC)
    ap.add_argument("--out-dir", default=os.path.join(ROOT, "gta6decomp", "names"))
    args = ap.parse_args()

    classes = []          # (namespace, name, relative header)
    per_sub = defaultdict(list)
    for base, _dirs, files in os.walk(args.src):
        for name in files:
            if not name.endswith((".h", ".hpp")):
                continue
            path = os.path.join(base, name)
            rel = os.path.relpath(path, args.src)
            try:
                with open(path, encoding="utf-8", errors="replace") as handle:
                    text = handle.read(400000)
            except OSError:
                continue
            ns = ""
            for line in text.splitlines():
                m = NS_RE.match(line)
                if m:
                    ns = m.group(1)
                m = CLASS_RE.match(line)
                if not m:
                    continue
                cls = m.group(1)
                if cls in ("public", "private", "protected"):
                    continue
                classes.append((ns, cls, rel))
                per_sub[subsystem(rel)].append(cls)

    os.makedirs(args.out_dir, exist_ok=True)
    with open(os.path.join(args.out_dir, "gtav_classes.tsv"), "w",
              encoding="utf-8", newline="\n") as handle:
        handle.write("namespace\tclass\theader\n")
        for ns, cls, rel in classes:
            handle.write(f"{ns}\t{cls}\t{rel}\n")
    with open(os.path.join(args.out_dir, "gtav_subsystems.tsv"), "w",
              encoding="utf-8", newline="\n") as handle:
        handle.write("subsystem\tclasses\texamples\n")
        for sub, names in sorted(per_sub.items(), key=lambda kv: -len(kv[1])):
            examples = ", ".join(sorted(set(names))[:8])
            handle.write(f"{sub}\t{len(set(names))}\t{examples}\n")

    print(f"classes: {len(classes)}  unique: {len({c for _n, c, _r in classes})}")
    print(f"subsystems: {len(per_sub)}")
    for sub, names in sorted(per_sub.items(), key=lambda kv: -len(kv[1]))[:10]:
        print(f"  {sub:24} {len(set(names)):5}  {', '.join(sorted(set(names))[:4])}")
    print("wrote", args.out_dir)
    return 0


if __name__ == "__main__":
    try:
        sys.stdout.reconfigure(errors="replace")
    except (AttributeError, ValueError, OSError):
        pass
    sys.exit(main())
