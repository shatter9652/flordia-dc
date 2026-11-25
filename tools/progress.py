#!/usr/bin/env python3
"""Regenerate the two progress reports the README embeds.

Decompilation projects report progress two ways, and this project does both:

* `docs/progress.svg` -- the generated graph isle publishes for its reccmp
  run (`ISLEPROGRESS.SVG`): one ring per binary, filled in proportion to
  decompiled code. Ours is filled in proportion to **bodies written out of
  `.pdata`**, because that is the only denominator this image actually gives
  us: 298,743 function starts, complete, with no source to compare against.
* `docs/objdiff.svg` -- the bar decomp.dev / objdiff publish: matched code as
  a fraction of total. It is zero until a rebuilt object exists to diff.

Both numbers are computed here from `index.tsv` and the `.pdata` count, never
typed by hand, so the README cannot drift from the tree.

    python3 gta6decomp/tools/progress.py
"""

import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
OUT = os.path.dirname(HERE)
sys.path.insert(0, HERE)
from pe import PE  # noqa: E402

EXE = os.path.join(ROOT, "6RE", "DUMP", "game_scarlett_master.exe")


def read_index(path):
    rows = []
    with open(path, encoding="utf-8", errors="replace") as handle:
        handle.readline()
        for line in handle:
            cells = line.rstrip("\n").split("\t")
            if len(cells) >= 6:
                rows.append(cells)
    return rows


def ring(cx, cy, radius, fraction, colour, width=18):
    """A ring filled clockwise from twelve o'clock."""
    import math
    circumference = 2 * math.pi * radius
    filled = max(0.0, min(1.0, fraction)) * circumference
    return (
        '<circle cx="%d" cy="%d" r="%d" fill="none" stroke="#242a33" '
        'stroke-width="%d"/>'
        '<circle cx="%d" cy="%d" r="%d" fill="none" stroke="%s" '
        'stroke-width="%d" stroke-linecap="round" '
        'stroke-dasharray="%.2f %.2f" '
        'transform="rotate(-90 %d %d)"/>'
        % (cx, cy, radius, width, cx, cy, radius, colour, width,
           filled, circumference - filled, cx, cy)
    )


def bar(x, y, width, height, fraction, colour):
    filled = max(0.0, min(1.0, fraction)) * width
    return (
        '<rect x="%d" y="%d" width="%d" height="%d" rx="4" fill="#242a33"/>'
        '<rect x="%d" y="%d" width="%.2f" height="%d" rx="4" fill="%s"/>'
        % (x, y, width, height, x, y, filled, height, colour)
    )


def main():
    index_path = os.path.join(OUT, "index.tsv")
    rows = read_index(index_path)
    written = len(rows)

    named = [r for r in rows if not (r[2].startswith("FUN_") or r[2].startswith("sub_"))]
    with_strings = [r for r in rows if r[4].isdigit() and int(r[4]) > 0]

    pe = PE(EXE)
    total = len(pe.pdata())
    matched = 0  # no function has been reproduced byte for byte yet

    stage = os.path.join(OUT, "matches", "objdiff_summary.json")
    if os.path.exists(stage):
        with open(stage, encoding="utf-8") as handle:
            matched = int(json.load(handle).get("matched_functions", 0))

    covered = written / total if total else 0.0
    named_fraction = len(named) / total if total else 0.0
    match_fraction = matched / total if total else 0.0

    # -- isle-style ring ----------------------------------------------------
    svg = ['<svg xmlns="http://www.w3.org/2000/svg" width="640" height="300" '
           'viewBox="0 0 640 300" role="img" '
           'aria-label="GTA VI decompilation progress">',
           '<rect width="640" height="300" fill="#12161c"/>',
           '<text x="32" y="42" fill="#e8edf4" font-family="monospace" '
           'font-size="17" font-weight="bold">game_scarlett_master.exe</text>',
           '<text x="32" y="64" fill="#7d8896" font-family="monospace" '
           'font-size="12">GTA VI 1.0.2.1 / Xbox Series X / PE32+ x64</text>',
           ring(120, 175, 78, covered, "#e2703a"),
           '<text x="120" y="172" fill="#e8edf4" font-family="monospace" '
           'font-size="24" font-weight="bold" text-anchor="middle">%.1f%%</text>'
           % (covered * 100),
           '<text x="120" y="192" fill="#7d8896" font-family="monospace" '
           'font-size="11" text-anchor="middle">bodies written</text>']
    svg.append(ring(120, 175, 52, named_fraction, "#4f8fd6", width=10))

    lines = [
        ("function starts (.pdata)", "{:,}".format(total)),
        ("bodies written out", "{:,}".format(written)),
        ("named from evidence", "{:,}".format(len(named))),
        ("bodies loading a shared literal", "{:,}".format(len(with_strings))),
        ("byte-identical to retail", "{:,}".format(matched)),
    ]
    for i, (label, value) in enumerate(lines):
        y = 108 + i * 34
        svg.append('<text x="248" y="%d" fill="#aab4c0" font-family="monospace" '
                   'font-size="12">%s</text>' % (y, label))
        svg.append('<text x="608" y="%d" fill="#e8edf4" font-family="monospace" '
                   'font-size="12" text-anchor="end">%s</text>' % (y, value))
    svg.append('<text x="32" y="284" fill="#5c6673" font-family="monospace" '
               'font-size="10">outer ring: bodies written / .pdata starts   '
               'inner ring: named from evidence   generated by '
               'tools/progress.py</text>')
    svg.append("</svg>")
    with open(os.path.join(OUT, "docs", "progress.svg"), "w",
              encoding="utf-8") as handle:
        handle.write("\n".join(svg))

    # -- objdiff / decomp.dev-style bar ------------------------------------
    osvg = ['<svg xmlns="http://www.w3.org/2000/svg" width="640" height="150" '
            'viewBox="0 0 640 150" role="img" '
            'aria-label="objdiff matched-code report">',
            '<rect width="640" height="150" fill="#12161c"/>',
            '<text x="32" y="38" fill="#e8edf4" font-family="monospace" '
            'font-size="15" font-weight="bold">objdiff: matched code</text>',
            '<text x="32" y="58" fill="#7d8896" font-family="monospace" '
            'font-size="11">x86_64 / MSVC demangling supported by objdiff; '
            'no retail object exists to diff yet</text>',
            bar(32, 74, 576, 20, match_fraction, "#3fa66a"),
            '<text x="32" y="122" fill="#aab4c0" font-family="monospace" '
            'font-size="12">matched functions</text>',
            '<text x="608" y="122" fill="#e8edf4" font-family="monospace" '
            'font-size="12" text-anchor="end">%d / %s (%.1f%%)</text>'
            % (matched, "{:,}".format(total), match_fraction * 100),
            '<text x="32" y="140" fill="#5c6673" font-family="monospace" '
            'font-size="10">objdiff.json is generated by tools/gen_objdiff.py '
            'once build/ produces objects</text>']
    osvg.append("</svg>")
    with open(os.path.join(OUT, "docs", "objdiff.svg"), "w",
              encoding="utf-8") as handle:
        handle.write("\n".join(osvg))

    summary = {
        "binary": "game_scarlett_master.exe",
        "function_starts": total,
        "bodies_written": written,
        "named_from_evidence": len(named),
        "bodies_with_shared_literal": len(with_strings),
        "matched_functions": matched,
        "coverage": round(covered, 6),
    }
    with open(os.path.join(OUT, "docs", "progress.json"), "w",
              encoding="utf-8") as handle:
        json.dump(summary, handle, indent=2)
        handle.write("\n")

    print("%d/%d bodies (%.2f%%), %d named, %d matched" % (
        written, total, covered * 100, len(named), matched))
    print("wrote docs/progress.svg, docs/objdiff.svg, docs/progress.json")


if __name__ == "__main__":
    main()
