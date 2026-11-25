#!/usr/bin/env python3
"""Minimal, dependency-free PE32+ / ELF64 readers used by the GTA VI tools.

`objdump -p` on the 120 MB executable takes minutes and prints megabytes, so the
tools read the headers themselves. Everything here is bounds-checked and returns
RVAs (image-relative), never file offsets, so callers can talk to Ghidra in the
same coordinates.
"""

import struct

IMAGE_DIRECTORY_ENTRY_EXPORT = 0
IMAGE_DIRECTORY_ENTRY_IMPORT = 1
IMAGE_DIRECTORY_ENTRY_EXCEPTION = 3
IMAGE_DIRECTORY_ENTRY_DELAY_IMPORT = 13


class PE:
    def __init__(self, path):
        with open(path, "rb") as handle:
            self.data = handle.read()
        self.path = path
        d = self.data
        if d[:2] != b"MZ":
            raise ValueError("not a PE: missing MZ")
        e_lfanew = struct.unpack_from("<I", d, 0x3C)[0]
        if d[e_lfanew:e_lfanew + 4] != b"PE\0\0":
            raise ValueError("not a PE: missing PE signature")
        coff = e_lfanew + 4
        self.machine, self.nsections = struct.unpack_from("<HH", d, coff)
        opt_size = struct.unpack_from("<H", d, coff + 16)[0]
        opt = coff + 20
        magic = struct.unpack_from("<H", d, opt)[0]
        if magic != 0x20B:
            raise ValueError("not PE32+: optional header magic 0x%x" % magic)
        self.image_base = struct.unpack_from("<Q", d, opt + 24)[0]
        self.entry_rva = struct.unpack_from("<I", d, opt + 16)[0]
        self.size_of_image = struct.unpack_from("<I", d, opt + 56)[0]
        self.size_of_headers = struct.unpack_from("<I", d, opt + 60)[0]
        ndirs = struct.unpack_from("<I", d, opt + 108)[0]
        self.dirs = []
        for i in range(min(ndirs, 16)):
            rva, size = struct.unpack_from("<II", d, opt + 112 + i * 8)
            self.dirs.append((rva, size))
        sec = opt + opt_size
        self.sections = []
        for i in range(self.nsections):
            o = sec + i * 40
            name = d[o:o + 8].rstrip(b"\0").decode("latin1")
            vsize, va, raw_size, raw_off = struct.unpack_from("<IIII", d, o + 8)
            chars = struct.unpack_from("<I", d, o + 36)[0]
            self.sections.append({
                "name": name, "va": va, "vsize": vsize, "raw_off": raw_off,
                "raw_size": raw_size, "chars": chars,
            })

    # ---- coordinates -------------------------------------------------
    def dir(self, index):
        if index >= len(self.dirs):
            return (0, 0)
        return self.dirs[index]

    def section_of(self, rva):
        for s in self.sections:
            if s["va"] <= rva < s["va"] + max(s["vsize"], s["raw_size"]):
                return s
        return None

    def rva_to_off(self, rva):
        s = self.section_of(rva)
        if s is None or rva - s["va"] >= s["raw_size"]:
            return None
        return s["raw_off"] + (rva - s["va"])

    def read(self, rva, size):
        off = self.rva_to_off(rva)
        if off is None or off + size > len(self.data):
            return None
        return self.data[off:off + size]

    def cstring(self, rva, limit=512):
        off = self.rva_to_off(rva)
        if off is None:
            return None
        end = self.data.find(b"\0", off, min(off + limit, len(self.data)))
        if end < 0:
            return None
        return self.data[off:end].decode("latin1", "replace")

    def is_exec(self, rva):
        s = self.section_of(rva)
        return bool(s and (s["chars"] & 0x20000000))

    # ---- tables ------------------------------------------------------
    def exports(self):
        rva, size = self.dir(IMAGE_DIRECTORY_ENTRY_EXPORT)
        if not rva:
            return []
        head = self.read(rva, 40)
        if not head:
            return []
        (nfuncs, nnames, funcs_rva, names_rva, ords_rva) = struct.unpack_from("<IIIII", head, 20)
        out = []
        named = {}
        for i in range(nnames):
            e = self.read(names_rva + i * 4, 4)
            if not e:
                break
            name_rva = struct.unpack("<I", e)[0]
            name = self.cstring(name_rva) or ""
            o = self.read(ords_rva + i * 2, 2)
            if not o:
                break
            named[struct.unpack("<H", o)[0]] = name
        for i in range(nfuncs):
            e = self.read(funcs_rva + i * 4, 4)
            if not e:
                break
            frva = struct.unpack("<I", e)[0]
            if frva == 0:
                continue
            out.append({"ordinal": i, "rva": frva, "name": named.get(i, "")})
        # forwarders point outside the image; mark them
        for row in out:
            if rva <= row["rva"] < rva + size:
                row["forwarder"] = self.cstring(row["rva"]) or ""
        return out

    def imports(self):
        """[(dll, name|'#ord', iat_rva, hint)] for normal and delay imports."""
        rows = []
        for index in (IMAGE_DIRECTORY_ENTRY_IMPORT, IMAGE_DIRECTORY_ENTRY_DELAY_IMPORT):
            rva, size = self.dir(index)
            if not rva:
                continue
            for i in range(4096):
                desc = self.read(rva + i * 20, 20)
                if not desc or desc == b"\0" * 20:
                    break
                if index == IMAGE_DIRECTORY_ENTRY_DELAY_IMPORT:
                    attrs = struct.unpack_from("<I", desc, 0)[0]
                    name_rva = struct.unpack_from("<I", desc, 4)[0]
                    iat = struct.unpack_from("<I", desc, 12)[0]
                    int_rva = struct.unpack_from("<I", desc, 16)[0]
                    if not (attrs & 1):  # old-style VA-based descriptor
                        name_rva -= self.image_base
                        iat -= self.image_base
                        int_rva -= self.image_base
                else:
                    int_rva, _ts, _fwd, name_rva, iat = struct.unpack_from("<IIIII", desc, 0)
                dll = self.cstring(name_rva) or ""
                thunk = int_rva or iat
                for j in range(65536):
                    t = self.read(thunk + j * 8, 8)
                    if not t:
                        break
                    value = struct.unpack("<Q", t)[0]
                    if value == 0:
                        break
                    if value & (1 << 63):
                        rows.append((dll, "#%d" % (value & 0xFFFF), iat + j * 8, 0))
                    else:
                        hint = struct.unpack("<H", self.read(value, 2) or b"\0\0")[0]
                        name = self.cstring(value + 2) or ""
                        rows.append((dll, name, iat + j * 8, hint))
        return rows

    def pdata(self):
        """[(begin_rva, end_rva, unwind_rva)] from the exception directory."""
        rva, size = self.dir(IMAGE_DIRECTORY_ENTRY_EXCEPTION)
        if not rva or not size:
            return []
        blob = self.read(rva, size)
        if not blob:
            return []
        out = []
        for o in range(0, len(blob) - 11, 12):
            begin, end, unwind = struct.unpack_from("<III", blob, o)
            if begin and end > begin:
                out.append((begin, end, unwind))
        return out

    def strings(self, min_length=6, utf16=False):
        """[(rva, text)] printable strings inside readable sections."""
        out = []
        if utf16:
            pattern = None
        for s in self.sections:
            if s["chars"] & 0x20000000:  # skip executable
                continue
            blob = self.data[s["raw_off"]:s["raw_off"] + s["raw_size"]]
            if utf16:
                cur = bytearray()
                start = 0
                for i in range(0, len(blob) - 1, 2):
                    lo, hi = blob[i], blob[i + 1]
                    if hi == 0 and 0x20 <= lo < 0x7F:
                        if not cur:
                            start = i
                        cur.append(lo)
                    else:
                        if len(cur) >= min_length:
                            out.append((s["va"] + start, cur.decode("latin1")))
                        cur = bytearray()
                if len(cur) >= min_length:
                    out.append((s["va"] + start, cur.decode("latin1")))
            else:
                cur = bytearray()
                start = 0
                for i, b in enumerate(blob):
                    if 0x20 <= b < 0x7F:
                        if not cur:
                            start = i
                        cur.append(b)
                    else:
                        if len(cur) >= min_length:
                            out.append((s["va"] + start, cur.decode("latin1")))
                        cur = bytearray()
                if len(cur) >= min_length:
                    out.append((s["va"] + start, cur.decode("latin1")))
        return out


PT_LOAD = 1
PT_GNU_EH_FRAME = 0x6474E550


class ELF:
    """ELF64 reader limited to what a PS4 eboot keeps: program headers, no sections."""

    def __init__(self, path):
        with open(path, "rb") as handle:
            self.data = handle.read()
        d = self.data
        if d[:4] != b"\x7fELF" or d[4] != 2:
            raise ValueError("not ELF64")
        self.entry = struct.unpack_from("<Q", d, 24)[0]
        e_phoff = struct.unpack_from("<Q", d, 0x20)[0]
        e_phentsize = struct.unpack_from("<H", d, 0x36)[0]
        e_phnum = struct.unpack_from("<H", d, 0x38)[0]
        self.loads = []
        self.eh_frame_hdr = None
        for i in range(e_phnum):
            o = e_phoff + i * e_phentsize
            p_type, p_flags = struct.unpack_from("<II", d, o)
            p_offset, p_vaddr, _paddr, p_filesz, p_memsz = struct.unpack_from("<QQQQQ", d, o + 8)
            if p_type == PT_LOAD:
                self.loads.append({"off": p_offset, "va": p_vaddr,
                                   "filesz": p_filesz, "memsz": p_memsz,
                                   "flags": p_flags})
            elif p_type == PT_GNU_EH_FRAME:
                self.eh_frame_hdr = {"off": p_offset, "va": p_vaddr, "size": p_filesz}

    def read(self, va, size):
        for seg in self.loads:
            if seg["va"] <= va and va + size <= seg["va"] + seg["filesz"]:
                off = seg["off"] + (va - seg["va"])
                return self.data[off:off + size]
        return None

    def executable_ranges(self):
        return [(s["va"], s["va"] + s["filesz"]) for s in self.loads if s["flags"] & 1]

    def function_starts(self):
        """Sorted function starts from the .eh_frame_hdr binary search table."""
        if not self.eh_frame_hdr:
            return []
        h = self.eh_frame_hdr
        d = self.data
        off = h["off"]
        ptr_enc, cnt_enc, tab_enc = d[off + 1], d[off + 2], d[off + 3]

        def rd(enc, pos):
            fmt = enc & 0x0F
            if fmt == 0x03:
                return struct.unpack_from("<I", d, pos)[0], 4
            if fmt == 0x04:
                return struct.unpack_from("<Q", d, pos)[0], 8
            if fmt == 0x0B:
                return struct.unpack_from("<i", d, pos)[0], 4
            if fmt == 0x0C:
                return struct.unpack_from("<q", d, pos)[0], 8
            raise ValueError("unsupported pointer encoding 0x%x" % enc)

        pos = off + 4
        _v, n = rd(ptr_enc, pos)
        pos += n
        count, n = rd(cnt_enc, pos)
        pos += n
        starts = []
        for _ in range(count):
            v, n = rd(tab_enc, pos)
            pos += n
            if (tab_enc & 0x70) == 0x30:  # DW_EH_PE_datarel
                v += h["va"]
            starts.append(v & 0xFFFFFFFFFFFFFFFF)
            _f, n = rd(tab_enc, pos)
            pos += n
        return sorted(set(starts))

    def strings(self, min_length=6):
        out = []
        for seg in self.loads:
            if seg["flags"] & 1:  # skip executable
                continue
            blob = self.data[seg["off"]:seg["off"] + seg["filesz"]]
            cur = bytearray()
            start = 0
            for i, b in enumerate(blob):
                if 0x20 <= b < 0x7F:
                    if not cur:
                        start = i
                    cur.append(b)
                else:
                    if len(cur) >= min_length:
                        out.append((seg["va"] + start, cur.decode("latin1")))
                    cur = bytearray()
        return out


if __name__ == "__main__":
    import sys
    pe = PE(sys.argv[1])
    print("image_base=0x%x entry=0x%x sections=%d" % (pe.image_base, pe.entry_rva, len(pe.sections)))
    print("imports=%d exports=%d pdata=%d strings=%d" % (
        len(pe.imports()), len(pe.exports()), len(pe.pdata()), len(pe.strings())))
    for s in pe.sections:
        print("  %-10s va=0x%08x vsize=0x%08x raw=0x%08x/0x%08x %s" % (
            s["name"], s["va"], s["vsize"], s["raw_off"], s["raw_size"],
            "X" if s["chars"] & 0x20000000 else "-"))
