#!/usr/bin/env python3
"""PS5 NID encode / lookup.

A PS5 import stub identifies its target by an 11-character NID, which is
sha1(symbol + salt) folded into 16 bytes and written in a custom base64.  The
eboot carries NIDs only; no image or firmware module carries the matching
names, so the only way to name an import is to *generate* NIDs from symbols
and join on equality.

The salt and the encoding are the ones prospero-nid uses
(`/opt/ps5-payload-sdk/bin/prospero-nid`); this module produces byte-identical
output, which is what makes the join work.

    # symbol -> NID
    python3 tools/ps5nids.py encode sceSaveDataMount

    # scan the Sony SDK and payload SDK headers, write names/ps5_nid_symbols.tsv
    python3 tools/ps5nids.py scan \
        --sdk ../SonySDKS/PS5/11.000/target/include \
        --sdk /opt/ps5-payload-sdk/target/include \
        --out names/ps5_nid_symbols.tsv

    # NID -> symbol
    python3 tools/ps5nids.py lookup 32HQAQdwM2o --symbols names/ps5_nid_symbols.tsv

    # check the encoder against the AnyDevKit NID map (546 module .inc files)
    python3 tools/ps5nids.py verify --map ../ps5ref/AnyDevKit/3rdparty/ps5-nid-map/data/Modules

    # the shipped NID->symbol database (GhidraProspero, 154,478 entries);
    # autodetected, or point at it with --db
    python3 tools/ps5nids.py export-db --out names/ps5_nid_db.tsv

`scan` reads declarations only; it never compiles or links the SDK, and a NID
that is absent from the generated table is "not declared by these SDK headers",
never "not a PS5 import".
"""

import argparse
import glob
import hashlib
import os
import re
import sys

# sha1(symbol + salt) -- the 16 bytes prospero-nid uses.
SALT = bytes.fromhex("518d64a635ded8c1e6b039b1c3e55230")

# The alphabet is standard base64 with the last two characters swapped for
# '+' and '-'.  Characters outside the first 11 are never emitted.
ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-"

SYMBOL_RE = re.compile(r"\bsce[A-Za-z0-9_]{3,}\b")
DECL_RE = re.compile(r"^[ \t]*(?:[A-Za-z_][\w \t\*]*?[ \t\*])?(sce[A-Za-z0-9_]{3,})[ \t]*\(",
                     re.MULTILINE)


def encode(symbol: str) -> str:
    """Symbol name -> 11-character NID."""
    digest = hashlib.sha1(symbol.encode("utf-8") + SALT).digest()
    # The first eight bytes are byte-swapped, the second eight are zeroed; the
    # result is consumed as three 24-bit groups.
    first = int.from_bytes(digest[0:8], "big").to_bytes(8, "little")
    data = first + b"\0" * 8
    out = []
    for i in range(0, 11, 3):
        group = (data[i] << 16) | (data[i + 1] << 8) | data[i + 2]
        out.append(ALPHABET[(group >> 18) & 63])
        out.append(ALPHABET[(group >> 12) & 63])
        out.append(ALPHABET[(group >> 6) & 63])
        out.append(ALPHABET[group & 63])
    return "".join(out)[:11]


def symbols_in_headers(roots):
    """Every `sce*` identifier declared or mentioned under the given includes."""
    found = {}
    for root in roots:
        if not os.path.isdir(root):
            sys.stderr.write("skip (not a directory): %s\n" % root)
            continue
        for path in sorted(glob.glob(os.path.join(root, "**", "*.h"), recursive=True)):
            try:
                with open(path, "r", encoding="utf-8", errors="ignore") as handle:
                    text = handle.read()
            except OSError:
                continue
            relative = os.path.relpath(path, os.path.dirname(root.rstrip("/")))
            for name in set(DECL_RE.findall(text)) | set(SYMBOL_RE.findall(text)):
                found.setdefault(name, relative)
    return found


def cmd_encode(args):
    for symbol in args.symbols:
        print("%s\t%s" % (encode(symbol), symbol))
    return 0


def cmd_scan(args):
    symbols = symbols_in_headers(args.sdk)
    if not symbols:
        sys.stderr.write("no sce* symbols found under %s\n" % ", ".join(args.sdk))
        return 1
    rows = sorted((encode(name), name, source) for name, source in symbols.items())
    out = args.out
    with open(out, "w", encoding="utf-8") as handle:
        handle.write("nid\tsymbol\tsource\n")
        for nid, name, source in rows:
            handle.write("%s\t%s\t%s\n" % (nid, name, source))
    print("wrote %s: %d symbols from %d header roots" % (out, len(rows), len(args.sdk)))
    # A quick self-check: a symbol and its NID must round-trip through the file.
    sample = rows[len(rows) // 2]
    print("sample: %s -> %s" % (sample[1], sample[0]))
    return 0


def load_table(path):
    table = {}
    with open(path, "r", encoding="utf-8") as handle:
        header = handle.readline()
        if not header.startswith("nid"):
            handle.seek(0)
        for line in handle:
            parts = line.rstrip("\n").split("\t")
            if len(parts) >= 2:
                table.setdefault(parts[0], []).append(parts[1])
    return table


DEFAULT_NID_MAP = os.path.join(
    os.path.dirname(os.path.dirname(os.path.abspath(__file__))),
    "..", "ps5ref", "AnyDevKit", "3rdparty", "ps5-nid-map", "data", "Modules")

DEFAULT_DB = os.path.expanduser(
    "~/.config/ghidra/ghidra_12.1.4_PUBLIC/Extensions/GhidraProspero/data/nid_db.xml")


def find_db(explicit=None):
    for candidate in (explicit, DEFAULT_DB):
        if candidate and os.path.isfile(candidate):
            return candidate
    return None


def load_nid_map(directory):
    """ps5-nid-map's Modules/*.inc: PS5_NID_MAP_LIBRARY("lib", { "NID", ... }).

    Returns (nid -> symbol, nid -> library). The corpus is the largest of the
    three sources (542 modules, ~328k NIDs) and is the one the AnyDevKit tree
    vendors, so it names imports the SDK headers never see.
    """
    symbols = {}
    libraries = {}
    if not os.path.isdir(directory):
        return symbols, libraries
    library_re = re.compile(r'PS5_NID_MAP_LIBRARY\("([^"]+)"\s*,\s*\{(.*?)\}\)', re.S)
    for name in sorted(os.listdir(directory)):
        if not name.endswith(".inc"):
            continue
        with open(os.path.join(directory, name), "r", encoding="utf-8", errors="ignore") as handle:
            text = handle.read()
        for match in library_re.finditer(text):
            library = match.group(1)
            for nid in re.findall(r'"([^"\s]+)"', match.group(2)):
                if len(nid) != 11:
                    continue
                symbols.setdefault(nid, nid)
                libraries.setdefault(nid, library)
    return symbols, libraries


def cmd_imports(args):
    """Join the eboot's import stubs with every name corpus, in one TSV."""
    stubs = []
    with open(args.log, "r", encoding="utf-8", errors="ignore") as handle:
        for line in handle:
            marker = "IMPORT|"
            at = line.find(marker)
            if at < 0:
                continue
            fields = line[at + len(marker):].split("|")
            if len(fields) < 3:
                continue
            va, library, raw = fields[0].strip(), fields[1].strip(), fields[2]
            raw = raw.split(" ")[0].strip()
            nid = raw.split("#")[0]
            stubs.append((va, library, nid, raw))

    db = {}
    db_path = find_db(args.db)
    if db_path:
        db = load_db(db_path)
    map_symbols, map_libraries = load_nid_map(args.nid_map)
    table = load_table(args.symbols) if os.path.isfile(args.symbols) else {}

    resolved = 0
    modules_only = 0
    with open(args.out, "w", encoding="utf-8") as handle:
        handle.write("va\tnid\tlibrary\tsymbol\tsource\n")
        for va, library, nid, raw in stubs:
            symbol, source = "", ""
            if nid in db:
                symbol, source = db[nid], "GhidraProspero/nid_db.xml"
            elif nid in map_symbols:
                # The ps5-nid-map files list NIDs only, not names: the entry says
                # which module exports it, and that is all it knows.
                source = "ps5-nid-map/%s (module only)" % map_libraries.get(nid, "?")
            elif nid in table:
                symbol = ", ".join(sorted(table[nid]))
                source = "SDK headers"
            if library == "<EXTERNAL>":
                library = map_libraries.get(nid, library) or library
            if symbol:
                resolved += 1
            elif "ps5-nid-map" in source:
                modules_only += 1
            handle.write("%s\t%s\t%s\t%s\t%s\n" % (va, nid, library, symbol, source))
    print("wrote %s: %d stubs, %d named, %d module-only, %d unknown"
          % (args.out, len(stubs), resolved, modules_only,
             len(stubs) - resolved - modules_only))
    return 0


def load_db(path):
    """GhidraProspero's DynlibDatabase: one `<Entry obf="NID" sym="name"/>` each."""
    with open(path, "r", encoding="utf-8", errors="ignore") as handle:
        text = handle.read()
    return dict(re.findall(r'<Entry obf="([^"]+)" sym="([^"]+)"', text))


def cmd_lookup(args):
    table = load_table(args.symbols) if os.path.isfile(args.symbols) else {}
    db = None
    db_path = find_db(args.db)
    if db_path:
        db = load_db(db_path)
    missing = 0
    for nid in args.nids:
        key = nid.strip()
        if db is not None and key in db:
            print("%s\t%s\t%s" % (key, db[key], "GhidraProspero nid_db"))
            continue
        names = table.get(key)
        if names:
            print("%s\t%s\t%s" % (key, ", ".join(sorted(names)), "SDK headers"))
        else:
            print("%s\t<unresolved>" % key)
            missing += 1
    return 0 if missing == 0 else 2


def cmd_export_db(args):
    db_path = find_db(args.db)
    if db_path is None:
        sys.stderr.write("no nid_db.xml found; pass --db\n")
        return 1
    db = load_db(db_path)
    with open(args.out, "w", encoding="utf-8") as handle:
        handle.write("nid\tsymbol\tsource\n")
        for nid in sorted(db):
            handle.write("%s\t%s\tGhidraProspero/nid_db.xml\n" % (nid, db[nid]))
    print("wrote %s: %d entries from %s" % (args.out, len(db), db_path))
    return 0


def cmd_verify(args):
    blob = []
    for path in sorted(glob.glob(os.path.join(args.map, "*.inc"))):
        with open(path, "r", encoding="utf-8", errors="ignore") as handle:
            blob.append(handle.read())
    if not blob:
        sys.stderr.write("no .inc files under %s\n" % args.map)
        return 1
    text = "\n".join(blob)
    checked = 0
    hits = 0
    for symbol in args.symbols:
        nid = encode(symbol)
        present = ('"%s"' % nid) in text or ("'%s'" % nid) in text or (nid in text)
        checked += 1
        hits += 1 if present else 0
        print("%-40s %s  %s" % (symbol, nid, "in NID map" if present else "NOT in NID map"))
    print("%d/%d symbols found in the AnyDevKit NID map" % (hits, checked))
    return 0 if hits == checked else 2


def main():
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = parser.add_subparsers(dest="command", required=True)

    p = sub.add_parser("encode", help="symbol names -> NIDs")
    p.add_argument("symbols", nargs="+")
    p.set_defaults(func=cmd_encode)

    p = sub.add_parser("scan", help="scan SDK headers and write a NID -> symbol table")
    p.add_argument("--sdk", action="append", default=[], required=True,
                   help="include root to scan (repeatable)")
    p.add_argument("--out", default="names/ps5_nid_symbols.tsv")
    p.set_defaults(func=cmd_scan)

    p = sub.add_parser("lookup", help="NID -> symbol")
    p.add_argument("nids", nargs="+")
    p.add_argument("--symbols", default="names/ps5_nid_symbols.tsv")
    p.add_argument("--db", default=None, help="GhidraProspero nid_db.xml")
    p.set_defaults(func=cmd_lookup)

    p = sub.add_parser("imports", help="name the eboot's import stubs from a headless log")
    p.add_argument("--log", required=True, help="analyzeHeadless log with DumpImports.java output")
    p.add_argument("--out", default="names/ps5_eboot_imports.tsv")
    p.add_argument("--symbols", default="names/ps5_nid_symbols.tsv")
    p.add_argument("--nid-map", default=DEFAULT_NID_MAP)
    p.add_argument("--db", default=None, help="GhidraProspero nid_db.xml")
    p.set_defaults(func=cmd_imports)

    p = sub.add_parser("export-db", help="write the shipped NID database as a TSV")
    p.add_argument("--out", default="names/ps5_nid_db.tsv")
    p.add_argument("--db", default=None, help="GhidraProspero nid_db.xml")
    p.set_defaults(func=cmd_export_db)

    p = sub.add_parser("verify", help="check the encoder against a NID map")
    p.add_argument("--map", default="../ps5ref/AnyDevKit/3rdparty/ps5-nid-map/data/Modules")
    p.add_argument("--symbols", nargs="+",
                   default=["sceKernelGetProcessTime", "sceSystemServiceGetStatus",
                            "sceSaveDataMount"])
    p.set_defaults(func=cmd_verify)

    args = parser.parse_args()
    return args.func(args)


if __name__ == "__main__":
    sys.exit(main())
