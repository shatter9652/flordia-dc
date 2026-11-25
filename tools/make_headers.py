#!/usr/bin/env python3
"""Write per-class headers and the index from the exported tree.

GTAVSRC keeps one header per class (`CVehicle.h` declares `CVehicle::...`);
`gta_decomps/re3` keeps one folder per subsystem with `.h`/`.cpp` pairs. This
project exports one folder per function, so the class view is generated from
`index.tsv`: every `Class::Method` that was recovered becomes a declaration in
`include/gta6decomp/<Class>.h`, with the address and the body that implements it.

    python3 gta6decomp/tools/make_headers.py
"""

import os
import re
from collections import defaultdict

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
OUT = os.path.join(ROOT, "gta6decomp")


def main():
    index = os.path.join(OUT, "index.tsv")
    if not os.path.isfile(index):
        raise SystemExit("no index.tsv: export some functions first")
    classes = defaultdict(list)
    rows = []
    with open(index, encoding="utf-8", errors="replace") as handle:
        header = handle.readline()
        for line in handle:
            c = line.rstrip("\n").split("\t")
            if len(c) < 6:
                continue
            address, size, name, sub, nstr, path = c[:6]
            rows.append((address, size, name, sub, nstr, path))
            if "::" in name and not name.startswith(("sub_", "FUN_")):
                cls, method = name.split("::", 1)
                classes[cls].append((method, address, path))

    inc = os.path.join(OUT, "include", "gta6decomp")
    os.makedirs(inc, exist_ok=True)
    written = 0
    for cls, methods in sorted(classes.items()):
        filename = re.sub(r"[^A-Za-z0-9_]", "_", cls) + ".h"
        path = os.path.join(inc, filename)
        with open(path, "w", encoding="utf-8", newline="\n") as handle:
            handle.write("// Recovered declarations for %s.\n" % cls)
            handle.write("// Generated from index.tsv; signatures are not recovered yet,\n")
            handle.write("// so each entry names the body that implements it.\n")
            handle.write("#pragma once\n\n")
            handle.write("struct %s;\n\n" % re.sub(r"[^A-Za-z0-9_]", "_", cls))
            handle.write("namespace %s {\n" % re.sub(r"[^A-Za-z0-9_]", "_", cls))
            for method, address, body in sorted(methods):
                handle.write("    // %s  (%s)\n    //   %s\n" % (method, address, body))
            handle.write("}\n")
        written += 1
    print("headers written: %d classes, %d functions" % (written, len(rows)))

    # INDEX.md grouped by source directory, in the style of GTAVSRC's own tree:
    # src/sub_story/game/audio, src/sub_story/rage/base, ...
    by_dir = defaultdict(list)
    for address, size, name, sub, nstr, path in rows:
        tree = os.path.dirname(os.path.dirname(path))
        tree = tree[len("src/"):] if tree.startswith("src/") else tree
        by_dir[tree].append((name, address, path))
    md = os.path.join(OUT, "INDEX.md")
    with open(md, "w", encoding="utf-8", newline="\n") as handle:
        handle.write("# GTA VI recovered functions\n\n")
        handle.write("%d functions across %d source directories.\n\n" % (len(rows), len(by_dir)))
        for tree in sorted(by_dir):
            handle.write("## %s (%d)\n\n" % (tree, len(by_dir[tree])))
            for name, address, path in sorted(by_dir[tree]):
                handle.write("- `%s` — %s — `%s`\n" % (name, address, path))
            handle.write("\n")
    print("wrote", md)


if __name__ == "__main__":
    main()
