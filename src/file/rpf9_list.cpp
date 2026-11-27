// rpf9_list — read RPF9 headers with src/file/packfile_rpf9.cpp.
//
//   rpf9_list --selftest
//   rpf9_list --file <archive.rpf> [--file ...]
//   rpf9_list --toc <decrypted-toc.bin>
//
// The self-test builds a plaintext archive to the reconstructed layout and runs
// the parser, the entry validator and the decryptor hook against it, so the code
// path is exercised even where no retail archive can be (all retail RPF9s are
// TOC-encrypted and no key ships here). Exit status is non-zero on failure.

#include "packfile_rpf9.h"

#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

namespace {

using gta6::file::Rpf9Archive;
using gta6::file::Rpf9Entry;
using gta6::file::Rpf9File;
using gta6::file::Rpf9Status;
using gta6::file::Rpf9Toc;

int g_failures = 0;

void columnTest();  // defined below; declared so selfTest can call it

void expect(bool condition, const char* what) {
    std::printf("%s %s\n", condition ? "PASS" : "FAIL", what);
    if (!condition) {
        ++g_failures;
    }
}

void put16(std::vector<std::uint8_t>& b, std::size_t at, std::uint16_t v) {
    b[at + 0] = static_cast<std::uint8_t>(v & 0xFF);
    b[at + 1] = static_cast<std::uint8_t>(v >> 8);
}

void put32(std::vector<std::uint8_t>& b, std::size_t at, std::uint32_t v) {
    for (int i = 0; i < 4; ++i) {
        b[at + i] = static_cast<std::uint8_t>((v >> (8 * i)) & 0xFF);
    }
}

void put64(std::vector<std::uint8_t>& b, std::size_t at, std::uint64_t v) {
    put32(b, at, static_cast<std::uint32_t>(v & 0xFFFFFFFFu));
    put32(b, at + 4, static_cast<std::uint32_t>(v >> 32));
}

// Builds a header identical in shape to the retail ones, with `encrypted`
// selecting the flag bit and `xored` scrambling the entry table the way a
// ciphertext would look.
std::vector<std::uint8_t> buildArchive(bool encrypted, bool xored, std::uint16_t entryCount) {
    std::vector<std::uint8_t> b(0x2000, 0);
    put32(b, 0x00, gta6::file::kRpf9Magic);
    put32(b, 0x04, 0x280);
    put32(b, 0x08, 0x260);
    put32(b, 0x0C, 0x70);
    for (int i = 0; i < 8; ++i) {
        b[0x10 + i] = static_cast<std::uint8_t>(0xA0 + i);
    }
    put16(b, 0x18, 0x7000);
    put16(b, 0x1A, entryCount);
    put32(b, 0x1C, 0x150);
    put16(b, 0x20, 3);
    put16(b, 0x22, 1);
    put32(b, 0x24, 2);
    put32(b, 0x28, 0xDA72573E);
    b[0x2C] = 2;
    b[0x2D] = encrypted ? 0x0F : 0x0E;
    b[0x2E] = 0x07;
    put32(b, 0x30, 0x10);

    const std::uint16_t types[3] = {1, 1, 6};
    const std::uint32_t offsets[3] = {0x0, 0x40, 0x80};
    for (std::uint16_t i = 0; i < entryCount && i < 3; ++i) {
        const std::size_t at = 0x40 + i * 8;
        put16(b, at, types[i]);
        put16(b, at + 2, 0);
        put32(b, at + 4, offsets[i]);
    }
    if (xored) {
        for (std::uint16_t i = 0; i < entryCount; ++i) {
            for (std::size_t j = 0; j < 8; ++j) {
                b[0x40 + i * 8 + j] ^= 0xA5;
            }
        }
    }
    return b;
}

int selfTest() {
    std::printf("== selftest: plaintext archive ==\n");
    {
        std::vector<std::uint8_t> image = buildArchive(false, false, 3);
        Rpf9Archive a;
        Rpf9Status s = Rpf9Archive::open(image.data(), image.size(), a);
        expect(s == Rpf9Status::Ok, "open() accepts a plaintext archive");
        expect(a.header().entryCount == 3, "header entryCount = 3");
        expect(a.header().keyId == 2, "header keyId = 2");
        expect(a.header().encrypted() == false, "flags bit 0 clear -> not encrypted");
        expect(a.header().tableAlignment() == 4, "plaintext alignment is 4");
        expect(a.layout().entryTable == 0x40, "entry table at 0x40");
        expect(a.layout().entryTableSize == 0x20, "entry table size = align(3*8+7, 8) = 0x20");
        expect(a.layout().extraTable == 0x60, "extra table starts after entries");
        expect(a.layout().dataStart == 0x1B0, "data start = 0x1B0 (0x60 + 0x150)");
        expect(a.layout().filePayloadBase == 0x1B0, "payload base = 0x40 + align(24,16) + 0x150");
        expect(a.tocLooksEncrypted() == false, "plaintext table is not mistaken for ciphertext");

        std::vector<Rpf9Entry> entries;
        s = a.readEntries(entries);
        expect(s == Rpf9Status::Ok, "readEntries() succeeds");
        expect(entries.size() == 3, "three entries read");
        if (entries.size() == 3) {
            expect(entries[0].type == 1 && entries[0].offset == 0x0, "entry 0 = file @ 0x0");
            expect(entries[1].type == 1 && entries[1].offset == 0x40, "entry 1 = file @ 0x40");
            expect(entries[2].type == 6 && entries[2].offset == 0x80, "entry 2 = block @ 0x80");
            expect(a.fileOffset(entries[1]) == 0x1B0 + 0x40,
                   "file offset = payload base + entry offset");
            expect(a.fileOffset(entries[2]) == 0, "a block entry has no file offset");
        }
    }

    std::printf("== selftest: bad entry type is rejected ==\n");
    {
        std::vector<std::uint8_t> image = buildArchive(false, false, 3);
        put16(image, 0x48, 0x4C4A);  // second entry: not 1, 2 or 6
        Rpf9Archive a;
        Rpf9Archive::open(image.data(), image.size(), a);
        std::vector<Rpf9Entry> entries;
        Rpf9Status s = a.readEntries(entries);
        expect(s == Rpf9Status::BadEntryType, "unknown type rejected");
        expect(entries.empty(), "no partial entry list on rejection");
    }

    std::printf("== selftest: encrypted table needs a decryptor ==\n");
    {
        std::vector<std::uint8_t> image = buildArchive(true, true, 3);
        Rpf9Archive a;
        Rpf9Status s = Rpf9Archive::open(image.data(), image.size(), a);
        expect(s == Rpf9Status::Ok, "open() accepts an encrypted archive header");
        expect(a.header().tableAlignment() == 16, "encrypted alignment is 16");
        expect(a.tocLooksEncrypted() == true, "scrambled table detected as ciphertext");

        std::vector<Rpf9Entry> entries;
        s = a.readEntries(entries);
        expect(s == Rpf9Status::EncryptedToc, "readEntries() refuses ciphertext");

        s = a.readEntriesDecrypted(
            [](std::uint8_t* data, std::uint64_t length) {
                for (std::uint64_t i = 0; i < length; ++i) {
                    data[i] ^= 0xA5;
                }
                return true;
            },
            entries);
        expect(s == Rpf9Status::Ok, "readEntriesDecrypted() with the matching hook succeeds");
        expect(entries.size() == 3, "three entries after decryption");
        if (entries.size() == 3) {
            expect(entries[0].type == 1 && entries[0].offset == 0x0, "decrypted entry 0 matches");
            expect(entries[2].type == 6 && entries[2].offset == 0x80, "decrypted entry 2 matches");
        }

        entries.clear();
        s = a.readEntriesDecrypted(
            [](std::uint8_t*, std::uint64_t) { return false; }, entries);
        expect(s == Rpf9Status::EncryptedToc, "a failing hook reports EncryptedToc");
    }

    std::printf("== selftest: wrong magic and short input ==\n");
    {
        std::vector<std::uint8_t> image = buildArchive(false, false, 3);
        image[0] = 'X';
        Rpf9Archive a;
        expect(Rpf9Archive::open(image.data(), image.size(), a) == Rpf9Status::NotAnRpf9,
               "magic mismatch rejected");
        std::vector<std::uint8_t> tiny(0x10, 0);
        Rpf9Archive b;
        expect(Rpf9Archive::open(tiny.data(), tiny.size(), b) == Rpf9Status::ShortHeader,
               "short input rejected");
    }

    columnTest();

    std::printf("selftest: %s (%d failure%s)\n", g_failures ? "FAILED" : "ok", g_failures,
                g_failures == 1 ? "" : "s");
    return g_failures ? 1 : 0;
}

int readFile(const std::string& path) {
    std::FILE* f = std::fopen(path.c_str(), "rb");
    if (f == nullptr) {
        std::printf("FAIL cannot open %s\n", path.c_str());
        return 1;
    }
    std::fseek(f, 0, SEEK_END);
    const long fileSize = std::ftell(f);
    std::fseek(f, 0, SEEK_SET);

    // Headers and entry tables live in the first kilobyte; the biggest archive
    // here is 189 GB, so only the front of the file is read.
    const std::size_t want = 1u << 20;
    std::vector<std::uint8_t> image(want);
    const std::size_t got = std::fread(image.data(), 1, want, f);
    std::fclose(f);
    image.resize(got);

    std::printf("== %s (file %ld bytes, read %zu) ==\n", path.c_str(), fileSize, got);

    Rpf9Archive a;
    const Rpf9Status s = Rpf9Archive::open(image.data(), image.size(),
                                          fileSize > 0 ? static_cast<std::uint64_t>(fileSize) : 0, a);
    if (s != Rpf9Status::Ok) {
        std::printf("  FAIL %s\n", gta6::file::to_string(s));
        return 1;
    }
    std::printf("%s\n", a.describe().c_str());

    std::vector<Rpf9Entry> entries;
    const Rpf9Status es = a.readEntries(entries);
    if (es == Rpf9Status::Ok) {
        for (std::size_t i = 0; i < entries.size(); ++i) {
            std::printf("  [%zu] type=%u offset=0x%x file=0x%llx\n", i, entries[i].type,
                        entries[i].offset,
                        static_cast<unsigned long long>(a.fileOffset(entries[i])));
        }
        return 0;
    }
    std::printf("  entries: %s\n", gta6::file::to_string(es));
    if (es == Rpf9Status::EncryptedToc) {
        std::printf("  header is valid; the table after 0x40 is ciphertext (keyId=%u mode=%u)\n",
                    a.header().keyId, a.header().mode);
        return 0;
    }
    return 1;
}

// Builds a plaintext table of contents to the reconstructed layout: two
// sections, four columns (three indexed, one direct) and three rows.
//
//   A 0x40  B 0x50  block 0x50..0x90  C 0x90  D 0xF0  T 0x100
//   indexed data 0x100..0x16C   direct column 0x16C..0x184
std::vector<std::uint8_t> buildToc() {
    const std::uint64_t a = 0x40;
    const std::uint64_t b = a + 0x10;                      // align(2 * 8, 16)
    const std::uint32_t bsz = 0x40;
    const std::uint32_t tail = 0x10;
    const std::uint64_t c = b + bsz;                       // 0x90
    const std::uint64_t d = c + 4 * 24;                    // 0xF0
    const std::uint64_t t = 0x100;                         // align8(d + 3 * 3 * 1)
    const std::uint64_t idxEnd = t + 3 * 24 + 3 * 4 + 3 * 8;  // 0x16C
    const std::uint64_t tocEnd = idxEnd + 3 * 8;           // 0x184

    std::vector<std::uint8_t> toc(static_cast<std::size_t>(tocEnd + 0x10), 0);
    put32(toc, 0x00, gta6::file::kRpf9Magic);
    put32(toc, 0x04, static_cast<std::uint32_t>(tocEnd));
    put32(toc, 0x08, static_cast<std::uint32_t>(idxEnd));
    put32(toc, 0x0C, 0x40);
    put16(toc, 0x1A, 2);   // sections
    put32(toc, 0x1C, bsz);
    put16(toc, 0x20, 4);   // columns
    put16(toc, 0x22, 1);   // direct columns
    put32(toc, 0x24, 3);   // rows
    toc[0x2C] = 1;         // row index width
    toc[0x2D] = 0x0F;
    toc[0x2E] = 0;         // already plaintext
    put32(toc, 0x30, tail);

    // Section table: 1 carries the key record, 5 is present but unused here.
    put16(toc, a + 0, 1);
    put32(toc, a + 4, 0x00);
    put16(toc, a + 8, 5);
    put32(toc, a + 12, 0x20);
    put32(toc, b + 0x00, 0x10000011u);
    put16(toc, b + 0x04, 0x10);

    struct Spec {
        std::uint64_t hash;
        std::uint32_t count;
        std::uint32_t offset;
        std::uint16_t elem;
        std::uint16_t flags;
    };
    const Spec specs[4] = {
        {gta6::file::kColFileEntry, 3, 0x00, 24, 0},
        {gta6::file::kColLookupKey, 3, 0x48, 4, 0},
        {gta6::file::kColFileId, 3, 0x54, 8, 0},
        {gta6::file::kColDirect64, 3, 0x00, 8, 1},
    };
    for (int i = 0; i < 4; ++i) {
        const std::size_t at = static_cast<std::size_t>(c) + static_cast<std::size_t>(i) * 24;
        put64(toc, at, specs[i].hash);
        put32(toc, at + 8, specs[i].count);
        put32(toc, at + 12, specs[i].offset);
        put16(toc, at + 16, specs[i].elem);
        put16(toc, at + 18, specs[i].flags);
    }

    // Row index: row r maps each indexed column to element r.
    for (std::uint32_t r = 0; r < 3; ++r) {
        for (std::uint32_t j = 0; j < 3; ++j) {
            toc[static_cast<std::size_t>(d + r * 3 + j)] = static_cast<std::uint8_t>(r);
        }
    }

    // File entries: offset/16 in the low 40 bits, flags above.
    for (std::uint32_t r = 0; r < 3; ++r) {
        const std::size_t at = static_cast<std::size_t>(t) + static_cast<std::size_t>(r) * 24;
        put64(toc, at, (static_cast<std::uint64_t>(0x1FF) << 40) | (0x2B + r * 4));
        put64(toc, at + 8, 4 + r);       // stored / 16
        put64(toc, at + 16, 0x100 + r);  // unpacked
    }
    put32(toc, static_cast<std::size_t>(t + 0x48) + 0, 0x12FD3D26u);
    put32(toc, static_cast<std::size_t>(t + 0x48) + 4, 0x820D8108u);
    put32(toc, static_cast<std::size_t>(t + 0x48) + 8, 0x00000001u);
    put64(toc, static_cast<std::size_t>(t + 0x54) + 0, 0x092DF78629F7833Aull);
    put64(toc, static_cast<std::size_t>(t + 0x54) + 8, 0x336373B5566693F1ull);
    put64(toc, static_cast<std::size_t>(t + 0x54) + 16, 0xAAAAAAAAAAAAAAAAull);
    put64(toc, static_cast<std::size_t>(idxEnd) + 0, 0xCD6C2B96643450BDull);
    put64(toc, static_cast<std::size_t>(idxEnd) + 8, 0x712B3A7EE90ACC5Full);
    put64(toc, static_cast<std::size_t>(idxEnd) + 16, 0x0000000000000000ull);
    return toc;
}

// Exercises the column store on a table of contents built to the layout, so
// the geometry, the row index, cell addressing and files() are covered without
// a key.
void columnTest() {
    std::printf("== selftest: column store ==\n");
    std::vector<std::uint8_t> image = buildToc();

    Rpf9Toc toc;
    Rpf9Status s = Rpf9Toc::parse(image.data(), image.size(), toc);
    expect(s == Rpf9Status::Ok, "parse() accepts a plaintext table of contents");
    expect(toc.rows() == 3 && toc.columns().size() == 4, "3 rows and 4 columns read");
    expect(toc.columnTable() == 0x90 && toc.rowIndex() == 0xF0 && toc.columnData() == 0x100,
           "geometry C=0x90 D=0xF0 T=0x100");
    expect(toc.findColumn(gta6::file::kColFileEntry) == 0, "file-entry column found at 0");
    expect(toc.findColumn(gta6::file::kColDirect64) == 3, "direct column found at 3");
    expect(toc.findColumn(0xDEADBEEFull) == -1, "an absent column reports -1");

    std::uint32_t element = 0xFFFFFFFFu;
    expect(toc.index(1, 1, element) && element == 1, "indexed column 1 maps row 1 to element 1");
    expect(toc.index(3, 2, element) && element == 2, "a direct column maps row 2 to element 2");
    expect(toc.cell(3, 1) == toc.raw().data() + toc.idxEnd() + 8,
           "a direct element is addressed from idx_end");

    std::vector<Rpf9File> files;
    s = toc.files(files);
    expect(s == Rpf9Status::Ok && files.size() == 3, "files() returns one entry per row");
    if (files.size() == 3) {
        expect(files[0].offset == 0x2B0 && files[0].flags == 0x1FF,
               "file entry: offset = (q & 2^40-1) << 4, flags = q >> 40");
        expect(files[0].stored == 0x40 && files[0].unpacked == 0x100,
               "file entry: stored = (+8) << 4, unpacked = (+16)");
        expect(files[0].hasFileId && files[0].fileId == 0x092DF78629F7833Aull,
               "file id read from its column");
        expect(files[0].hasLookupKey && files[0].lookupKey == 0x12FD3D26u,
               "lookup key read from its column");
        expect(files[0].hasDirect64 && files[0].direct64 == 0xCD6C2B96643450BDull,
               "direct column value read per row");
        expect(files[2].offset == 0x330, "row 2 offset follows the row index");
    }

    std::vector<std::uint8_t> bad = buildToc();
    put16(bad, 0x22, 0);  // no direct column declared
    Rpf9Toc rejected;
    expect(Rpf9Toc::parse(bad.data(), bad.size(), rejected) == Rpf9Status::BadColumnTable,
           "indexed + direct columns that do not add up are rejected");
}

// Prints a table of contents that is already plaintext. A decrypted dump can be
// checked this way without a key ever being shipped here.
int readToc(const std::string& path) {
    std::FILE* f = std::fopen(path.c_str(), "rb");
    if (f == nullptr) {
        std::printf("FAIL cannot open %s\n", path.c_str());
        return 1;
    }
    std::fseek(f, 0, SEEK_END);
    const long size = std::ftell(f);
    std::fseek(f, 0, SEEK_SET);
    std::vector<std::uint8_t> buf(size > 0 ? static_cast<std::size_t>(size) : 0);
    const std::size_t got = buf.empty() ? 0 : std::fread(buf.data(), 1, buf.size(), f);
    std::fclose(f);
    buf.resize(got);

    std::printf("== toc %s (%zu bytes) ==\n", path.c_str(), got);

    Rpf9Toc toc;
    Rpf9Status s = Rpf9Toc::parse(buf.data(), buf.size(), toc);
    if (s != Rpf9Status::Ok) {
        std::printf("  FAIL %s\n", gta6::file::to_string(s));
        return 1;
    }
    std::printf("  sections=%zu rows=%llu indexWidth=%u columns=%zu\n", toc.sections().size(),
                static_cast<unsigned long long>(toc.rows()), toc.indexWidth(),
                toc.columns().size());
    for (std::size_t i = 0; i < toc.columns().size(); ++i) {
        const gta6::file::Rpf9Column& c = toc.columns()[i];
        std::printf("  col[%zu] %016llx elem=%u count=%u %s\n", i,
                    static_cast<unsigned long long>(c.hash), c.elemSize, c.count,
                    c.direct() ? "direct" : "indexed");
    }

    std::vector<Rpf9File> files;
    s = toc.files(files);
    if (s != Rpf9Status::Ok) {
        std::printf("  FAIL files: %s\n", gta6::file::to_string(s));
        return 1;
    }
    for (std::size_t i = 0; i < files.size(); ++i) {
        const Rpf9File& e = files[i];
        std::printf("  [%u] %-4s offset=0x%llx stored=%llu unpacked=%llu flags=0x%x", e.row,
                    e.resource ? "res" : "file", static_cast<unsigned long long>(e.offset),
                    static_cast<unsigned long long>(e.stored),
                    static_cast<unsigned long long>(e.unpacked), e.flags);
        if (e.hasFileId) {
            std::printf(" id=%016llx", static_cast<unsigned long long>(e.fileId));
        }
        if (e.hasLookupKey) {
            std::printf(" key=%08x", e.lookupKey);
        }
        if (e.hasDirect64) {
            std::printf(" dir=%016llx", static_cast<unsigned long long>(e.direct64));
        }
        if (e.hasCrypto) {
            std::printf(" crypto=%08x/%u", e.crypto.keyId, e.crypto.kind);
        }
        std::printf("\n");
    }
    std::printf("  %zu file entr%s\n", files.size(), files.size() == 1 ? "y" : "ies");
    return 0;
}

}  // namespace

int main(int argc, char** argv) {
    bool any = false;
    int status = 0;
    for (int i = 1; i < argc; ++i) {
        if (std::strcmp(argv[i], "--selftest") == 0) {
            any = true;
            status |= selfTest();
        } else if (std::strcmp(argv[i], "--file") == 0 && i + 1 < argc) {
            any = true;
            status |= readFile(argv[++i]);
        } else if (std::strcmp(argv[i], "--toc") == 0 && i + 1 < argc) {
            any = true;
            status |= readToc(argv[++i]);
        } else {
            std::printf("usage: %s [--selftest] [--file <archive.rpf>]... [--toc <decrypted-toc.bin>]\n", argv[0]);
            return 2;
        }
    }
    if (!any) {
        std::printf("usage: %s [--selftest] [--file <archive.rpf>]... [--toc <decrypted-toc.bin>]\n", argv[0]);
        return 2;
    }
    return status;
}
