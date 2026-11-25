#!/usr/bin/env python3
"""Write `objdiff.json` for every unit in the tree.

objdiff compares pairs of **relocatable object files**, so a unit is meaningful
only when both sides exist:

* `base_path` -- the rebuilt object. `objdiff.build.mk` produces these with
  clang-cl, which targets `x86_64-pc-windows-msvc` and therefore emits the same
  ABI and name mangling as the retail image.
* `target_path` -- the retail object. A linked PE is not one, so this side is
  absent for every unit until a matching-toolchain build provides it.

Two kinds of unit are emitted:

* **generated** -- one per `src/sub_story/<area>/<Function>/<Function>.cpp`.
  These do not compile yet (Ghidra's `undefined8`/`param_N` is not C++), so they
  are marked `awaiting_rewrite`.
* **hand-written** -- a `.cpp` that sits directly in an area directory, such as
  `rage/base/file/packfile.cpp`. These compile, so they are marked `built` when
  `build/...obj` exists and `needs_build` otherwise.

    python3 gta6decomp/tools/gen_objdiff.py
    python3 gta6decomp/tools/gen_objdiff.py --check
"""

import argparse
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
OUT = os.path.dirname(HERE)
SRC = os.path.join(OUT, "src")
BUILD = os.path.join(OUT, "build")


def units():
    for base, _dirs, files in os.walk(SRC):
        for entry in sorted(files):
            if not entry.endswith(".cpp"):
                continue
            path = os.path.join(base, entry)
            rel = os.path.relpath(path, OUT).replace(os.sep, "/")
            name = os.path.splitext(entry)[0]
            parent = os.path.basename(base)
            area = os.path.relpath(base, SRC).replace(os.sep, "/")

            hand_written = parent != name
            # objdiff.build.mk emits build/<area>/<name>.obj where <area> is the
            # area below sub_story, matching the GTAVSRC-shaped source path.
            build_area = area[len("sub_story/"):] if area.startswith("sub_story/") else area
            obj = os.path.join(BUILD, build_area, name + ".obj").replace(os.sep, "/")
            built = os.path.exists(obj)

            if hand_written:
                status = "built" if built else "needs_build"
            else:
                status = "awaiting_rewrite"

            yield {
                "name": area + "/" + name,
                "target_path": obj,       # retail side: not available
                "base_path": obj,
                "metadata": {
                    "source_path": rel,
                    "kind": "hand-written" if hand_written else "generated",
                    "status": status,
                },
            }


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--check", action="store_true")
    args = ap.parse_args()

    items = list(units())
    hand = [u for u in items if u["metadata"]["kind"] == "hand-written"]
    built = [u for u in hand if u["metadata"]["status"] == "built"]

    config = {
        "$schema": "https://raw.githubusercontent.com/encounter/objdiff/main/config.schema.json",
        "custom_make": "make -f objdiff.build.mk",
        "build_base": True,
        "build_target": False,
        "watch_patterns": ["*.c", "*.cpp", "*.h", "*.hpp", "*.json", "*.mk"],
        "ignore_patterns": ["build/compat/**/*"],
        "units": items,
    }

    print("units: %d total, %d hand-written, %d built, 0 retail objects" % (
        len(items), len(hand), len(built)))
    for unit in hand:
        print("   %-40s %s" % (unit["name"], unit["metadata"]["status"]))

    if args.check:
        return

    path = os.path.join(OUT, "objdiff.json")
    with open(path, "w", encoding="utf-8") as handle:
        json.dump(config, handle, indent=2)
        handle.write("\n")
    print("wrote %s" % path)


if __name__ == "__main__":
    sys.exit(main())
