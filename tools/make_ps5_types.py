#!/usr/bin/env python3
"""Turn the recovered RAGE headers into a struct table Ghidra can import.

The Xbox side gets its types from the GDK import table plus GTA V's class list.
The PS5 side has no GDK, so its types come from this tree's own headers -- the
ones written from the recovered bodies. `ApplyPs5.java` turns the table into
real Ghidra structures, so the decompiler prints
``header->entryCount`` instead of ``*(uint *)(param_1 + 0x24)``.

Only a deliberately small C subset is parsed, and anything it cannot account
for byte-for-byte is reported and skipped rather than guessed:

    struct Name {                      // plain members only
        uint32_t magic;                // known scalar or pointer type
        uint8_t  reserved[3];          // fixed-size array
        f32      x, y;                 // two members on one line
    };

Members must have a known width, so the offsets in the output are computed and
then cross-checked against the header's own ``static_assert`` lines when it has
them -- a mismatch drops the struct.

Output: ``names/rage_structs.tsv`` with ``struct, size, offset, type, name,
bytes``; ``bytes`` is the field's full width, so an array keeps its extent.

Usage:
    python3 gta6decomp/tools/make_ps5_types.py
"""

import argparse
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
DEFAULT_OUT = os.path.join(ROOT, "gta6decomp", "names")

DEFAULT_HEADERS = (
    os.path.join("gta6decomp", "src/sub_story/rage/base/file/packfile_crypt.h"),
    os.path.join("gta6decomp", "src/sub_story/rage/base/file/packfile.cpp"),
    os.path.join("gta6decomp", "include/gta6decomp/rage_types.h"),
)

# name -> (tsv type, size, alignment)
SCALARS = {
    "uint8_t": ("u8", 1, 1), "u8": ("u8", 1, 1), "byte": ("u8", 1, 1),
    "undefined1": ("u8", 1, 1), "undefined": ("u8", 1, 1), "char": ("u8", 1, 1),
    "int8_t": ("i8", 1, 1), "s8": ("i8", 1, 1),
    "uint16_t": ("u16", 2, 2), "u16": ("u16", 2, 2),
    "undefined2": ("u16", 2, 2), "int16_t": ("i16", 2, 2), "s16": ("i16", 2, 2),
    "uint32_t": ("u32", 4, 4), "u32": ("u32", 4, 4), "uint": ("u32", 4, 4),
    "undefined4": ("u32", 4, 4), "joaat_t": ("u32", 4, 4),
    "int32_t": ("i32", 4, 4), "s32": ("i32", 4, 4),
    "uint64_t": ("u64", 8, 8), "u64": ("u64", 8, 8), "ulong": ("u64", 8, 8),
    "ulonglong": ("u64", 8, 8), "undefined8": ("u64", 8, 8),
    "int64_t": ("i64", 8, 8), "s64": ("i64", 8, 8), "longlong": ("i64", 8, 8),
    "float": ("f32", 4, 4), "f32": ("f32", 4, 4),
    "double": ("f64", 8, 8), "f64": ("f64", 8, 8),
}

STRUCT_RE = re.compile(r"\bstruct\s+(?:alignas\s*\(\s*\d+\s*\)\s+)?([A-Za-z_]\w*)\s*\{")
MEMBER_RE = re.compile(
    r"^(?P<type>(?:const\s+)?[A-Za-z_]\w*(?:\s*\*)?)\s+(?P<names>[A-Za-z_]\w*"
    r"(?:\s*\[\s*[0-9]+\s*\])?(?:\s*,\s*[A-Za-z_]\w*(?:\s*\[\s*[0-9]+\s*\])?)*)$")
ASSERT_RE = re.compile(
    r"static_assert\s*\(\s*(?:sizeof\s*\(\s*[A-Za-z_]\w*\s*\)|offsetof\s*\(\s*"
    r"[A-Za-z_]\w*\s*,\s*([A-Za-z_]\w*)\s*\))\s*==\s*(0x[0-9A-Fa-f]+|\d+)")


def strip_comments(text):
    text = re.sub(r"/\*.*?\*/", "", text, flags=re.S)
    return re.sub(r"//[^\n]*", "", text)


def parse_header(path):
    """Return ([(struct, size, [(offset, type, name)])], [skipped])."""
    try:
        with open(path, encoding="utf-8", errors="replace") as handle:
            text = strip_comments(handle.read())
    except OSError:
        return [], [path]
    out, skipped = [], []
    for match in STRUCT_RE.finditer(text):
        name = match.group(1)
        depth, i = 1, match.end()
        while i < len(text) and depth:
            if text[i] == "{":
                depth += 1
            elif text[i] == "}":
                depth -= 1
            i += 1
        body = text[match.end():i - 1]
        members, offset, align = [], 0, 1
        ok = True
        for raw in body.split(";"):
            decl = " ".join(raw.split())
            if not decl or decl.startswith(("static", "constexpr", "using",
                                            "typedef", "enum", "struct",
                                            "template", "#")):
                continue
            if "(" in decl or ":" in decl or "{" in decl:
                ok = False
                break
            m = MEMBER_RE.match(decl)
            if not m:
                ok = False
                break
            base = m.group("type").replace("*", "").strip()
            is_ptr = "*" in m.group("type")
            if is_ptr:
                size, al = 8, 8
                ttype = "ptr"
            elif base in SCALARS:
                ttype, size, al = SCALARS[base]
            else:
                ok = False          # unknown width: do not guess an offset
                break
            for one in m.group("names").split(","):
                one = one.strip()
                arr = re.search(r"\[\s*([0-9]+)\s*\]", one)
                count = int(arr.group(1)) if arr else 1
                fname = one.split("[")[0].strip()
                offset = (offset + al - 1) // al * al
                members.append((offset, ttype, fname, size * count))
                offset += size * count
                align = max(align, al)
        if not ok or not members:
            skipped.append(name)
            continue
        size = (offset + align - 1) // align * align
        # Cross-check the header's own static_asserts for this struct.
        for m in ASSERT_RE.finditer(text):
            field = m.group(1)
            want = int(m.group(2), 0)
            rec = next((o for o, _t, n, _s in members if n == field), None)
            if field is not None and rec is not None and rec != want:
                ok = False
        if not ok:
            skipped.append(name)
            continue
        out.append((name, size, members))
    return out, skipped


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("headers", nargs="*", default=list(DEFAULT_HEADERS))
    ap.add_argument("--out-dir", default=DEFAULT_OUT)
    args = ap.parse_args()

    structs, skipped = [], []
    for rel in args.headers:
        path = rel if os.path.isabs(rel) else os.path.join(ROOT, rel)
        found, skip = parse_header(path)
        structs.extend(found)
        skipped.extend((os.path.basename(path), s) for s in skip)

    os.makedirs(args.out_dir, exist_ok=True)
    out = os.path.join(args.out_dir, "rage_structs.tsv")
    with open(out, "w", encoding="utf-8", newline="\n") as handle:
        handle.write("struct\tsize\toffset\ttype\tname\tbytes\n")
        for name, size, members in structs:
            for offset, ttype, fname, fsize in members:
                handle.write("%s\t%#x\t%#x\t%s\t%s\t%d\n"
                             % (name, size, offset, ttype, fname, fsize))
    print("structs: %d  fields: %d" % (len(structs),
                                       sum(len(m) for _n, _s, m in structs)))
    for name, size, members in structs:
        print("  %-18s %#04x  %d fields" % (name, size, len(members)))
    if skipped:
        print("skipped (not byte-accountable): %s"
              % ", ".join(sorted({s for _f, s in skipped})))
    print("wrote", out)
    return 0


if __name__ == "__main__":
    try:
        sys.stdout.reconfigure(errors="replace")
    except (AttributeError, ValueError, OSError):
        pass
    sys.exit(main())
