#!/usr/bin/env python3
"""Turn the GDK headers and a PE import table into Ghidra-ready naming input.

Two problems stop Ghidra from showing GTA VI's calls the way the game's own
source does:

  1. the executable imports GDK and Win32 functions, but Ghidra only knows the
     names -- not the return type or argument list -- so the decompiler prints
     `undefined8 XGameRuntimeInitialize()` and call sites lose their arguments;
  2. the game's own vocabulary is hashed, so gameplay functions have no names.

This tool addresses (1) from the GDK that the title targets, and produces the
lookup tables for (2) from the GTA V source tree:

  * parse the title's import table with objdump;
  * find each imported function's declaration in the matching GDK headers
    (`gdk/GDKs/GDK_2610.0.9661/.../include`), which the October 2026 kit ships
    as ordinary C/C++ headers -- there is no .winmd in this kit;
  * normalise the declaration to a C prototype Ghidra's C parser accepts,
    replacing GDK/WinRT-only types with `void*` or a fixed-width integer;
  * write `include/gdk_imports.h` (import into Ghidra with Parse C Source, or
    with tools/ImportHeaders.java) and `imports/gdk_symbols.tsv`.

Usage:
    python3 gta6decomp/tools/gdk_imports.py
    python3 gta6decomp/tools/gdk_imports.py --gdk gdk/GDKs/GDK_2604.5.7903
"""

import argparse
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
DEFAULT_EXE = os.path.join(ROOT, "6RE", "DUMP", "game_scarlett_master.exe")
DEFAULT_GDK = os.path.join(ROOT, "gdk", "GDKs", "GDK_2610.0.9661")

DECL_START = re.compile(r"^\s*(?:STDAPI_?|WINAPI|HRESULT|void|bool|int|UINT32|"
                        r"UINT64|LPCSTR|size_t|HRESULT WINAPI)\b")
SAL = re.compile(r"\b_(?:In|Out|Inout|In_opt|Out_opt|Inout_opt|In_z|Out_z|"
                 r"Ret|Check_return|Must_inspect_result|Printf_format_string|"
                 r"Use_decl_annotations|Field_size_|Post_|Pre_|Success|"
                 r"When_|Deref_|Reads_|Writes_|cs|In_reads_|In_reads_bytes_|"
                 r"Out_writes_|Out_writes_bytes_|Inout_updates_|Reserved|Analysis_assume_)\w*\b")
JUNK = re.compile(r"\b(?:_pplx_cdecl|__declspec\([^)]*\)|inline|virtual|static|constexpr)\b")
WIN_TYPES = {
    "HRESULT": "long", "BOOL": "int", "BOOLEAN": "unsigned char",
    "DWORD": "unsigned long", "UINT": "unsigned int", "INT": "int",
    "UINT32": "unsigned int", "UINT64": "unsigned long long",
    "INT32": "int", "INT64": "long long", "SIZE_T": "unsigned long long",
    "ULONG": "unsigned long", "LONG": "long", "BYTE": "unsigned char",
    "WORD": "unsigned short", "FLOAT": "float", "DOUBLE": "double",
    "LPCSTR": "const char*", "LPSTR": "char*", "LPCWSTR": "const unsigned short*",
    "LPWSTR": "unsigned short*", "void*": "void*", "VOID": "void",
    "XTaskQueueHandle": "void*", "XUserHandle": "void*", "XAsyncBlock": "void*",
    "XblContextHandle": "void*", "XStoreContextHandle": "void*",
}


def imports(exe):
    """[(dll, function)] from the PE import table."""
    text = subprocess.run(["objdump", "-p", exe], capture_output=True, text=True,
                          check=True).stdout
    rows, dll = [], None
    for line in text.splitlines():
        m = re.match(r"\s*DLL Name:\s*(\S+)", line)
        if m:
            dll = m.group(1)
            continue
        m = re.match(r"\s*([0-9a-fA-F]{8})\s+(?:<none>|[0-9a-fA-F]+)\s+[0-9a-fA-F]{4}\s+(\S+)", line)
        if m and dll:
            rows.append((dll, m.group(2), m.group(1)))
    return rows


def header_index(gdk, win32=None):
    """{function_name: declaration} from the GDK (and optional Win32) include trees."""
    found = {}
    roots = [gdk] + ([win32] if win32 else [])
    for root in roots:
      for base, _dirs, files in os.walk(root):
        if os.sep + ".git" in base:
            continue
        for name in files:
            if not name.lower().endswith((".h", ".hpp")):
                continue
            path = os.path.join(base, name)
            try:
                with open(path, encoding="utf-8", errors="replace") as handle:
                    lines = handle.readlines()
            except OSError:
                continue
            for i, line in enumerate(lines):
                if "(" not in line or ";" not in "".join(lines[i:i + 4]):
                    continue
                # collect a declaration spanning up to four lines
                chunk = line
                for extra in lines[i + 1:i + 4]:
                    chunk += extra
                    if ";" in extra:
                        break
                if ";" not in chunk:
                    continue
                m = re.search(r"\b([A-Za-z_][A-Za-z0-9_]*)\s*\(", chunk)
                if not m:
                    continue
                fname = m.group(1)
                if fname not in found:
                    found[fname] = (path, " ".join(chunk.split()))
    return found


def clean(decl):
    """Normalise one declaration to a C prototype, or None."""
    decl = SAL.sub("", decl)
    decl = JUNK.sub("", decl)
    decl = decl.replace("STDAPI_(", "").replace("STDAPI(", "")
    decl = decl.replace("WINAPI", "").replace("__cdecl", "").replace("extern \"C\"", "")
    decl = re.sub(r"#.*", "", decl)
    m = re.search(r"([A-Za-z_][A-Za-z0-9_]*)\s*\((.*)\)\s*;", decl)
    if not m:
        return None
    name, args = m.group(1), m.group(2).strip()
    head = decl[:m.start()].strip()
    ret = head.split()[-1] if head else "long"
    ret = WIN_TYPES.get(ret, ret if re.match(r"^[A-Za-z_][A-Za-z0-9_*]*$", ret) else "long")
    if args in ("", "void"):
        args = "void"
    else:
        parts = []
        for arg in args.split(","):
            arg = arg.strip()
            if not arg or arg == "...":
                continue
            arg = re.sub(r"\[[^\]]*\]", "*", arg)
            words = [w for w in arg.split() if w not in ("const", "struct", "enum", "class")]
            if not words:
                continue
            # last token is the parameter name when there are two or more words
            typ = " ".join(words[:-1]) if len(words) > 1 else words[0]
            if typ in WIN_TYPES:
                typ = WIN_TYPES[typ]
            elif not re.match(r"^[A-Za-z_][A-Za-z0-9_ ]*[*]*$", typ):
                typ = "void*"
            parts.append(typ)
        args = ", ".join(parts) if parts else "void"
    return f"{ret} {name}({args});"


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--exe", default=DEFAULT_EXE)
    ap.add_argument("--gdk", default=DEFAULT_GDK)
    ap.add_argument("--out-header", default=os.path.join(ROOT, "gta6decomp", "include", "gdk_imports.h"))
    ap.add_argument("--out-tsv", default=os.path.join(ROOT, "gta6decomp", "imports", "gdk_symbols.tsv"))
    ap.add_argument("--win32-include", default="/usr/x86_64-w64-mingw32/include",
                    help="Win32 headers used for the api-ms-win-* imports")
    args = ap.parse_args()

    rows = imports(args.exe)
    if not rows:
        print("no imports parsed", file=sys.stderr)
        return 1
    win32 = args.win32_include if os.path.isdir(args.win32_include) else None
    index = header_index(args.gdk, win32)
    protos, missing = [], []
    for dll, name, rva in rows:
        if name in index:
            proto = clean(index[name][1])
            if proto:
                protos.append((dll, name, proto, rva))
                continue
        missing.append((dll, name, rva))

    os.makedirs(os.path.dirname(args.out_header), exist_ok=True)
    os.makedirs(os.path.dirname(args.out_tsv), exist_ok=True)
    with open(args.out_header, "w", encoding="utf-8", newline="\n") as handle:
        handle.write("// Auto-generated by gta6decomp/tools/gdk_imports.py -- do not edit.\n")
        handle.write("// Prototypes for functions game_scarlett_master.exe imports from the\n")
        handle.write("// Xbox GDK and Win32 API sets. Parse this in Ghidra (Parse C Source) or\n")
        handle.write("// load it through tools/ReExport.java, which also labels the IAT slots.\n\n")
        handle.write("typedef long HRESULT;\n")
        handle.write("typedef int BOOL;\n")
        handle.write("typedef unsigned char BOOLEAN;\n")
        handle.write("typedef unsigned long DWORD;\n")
        handle.write("typedef unsigned int UINT;\n")
        handle.write("typedef unsigned long long SIZE_T;\n")
        handle.write("typedef unsigned long long UINT64;\n")
        handle.write("typedef unsigned int UINT32;\n\n")
        for dll, name, proto, _rva in protos:
            handle.write(f"// {dll}\n{proto}\n")
    with open(args.out_tsv, "w", encoding="utf-8", newline="\n") as handle:
        handle.write("dll\tfunction\tprototype\trva\n")
        for dll, name, proto, rva in protos:
            handle.write(f"{dll}\t{name}\t{proto}\t{rva}\n")
        for dll, name, rva in missing:
            handle.write(f"{dll}\t{name}\t\t{rva}\n")

    print(f"imports: {len(rows)}  typed: {len(protos)}  untyped: {len(missing)}")
    print(f"iat slots: {len({r for *_x, r in protos})}")
    print("header:", args.out_header)
    print("table :", args.out_tsv)
    for dll, name, proto, _rva in protos[:12]:
        print(f"  {name:38} {proto}")
    return 0


if __name__ == "__main__":
    try:
        sys.stdout.reconfigure(errors="replace")
    except (AttributeError, ValueError, OSError):
        pass
    sys.exit(main())
