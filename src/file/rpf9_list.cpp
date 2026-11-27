// rpf9_list — read RPF9 headers with src/file/packfile_rpf9.cpp.
//
//   rpf9_list --selftest
//   rpf9_list --file <archive.rpf> [--file ...]
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
using gta6::file::Rpf9Status;

int g_failures = 0;

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
        } else {
            std::printf("usage: %s [--selftest] [--file <archive.rpf>]...\n", argv[0]);
            return 2;
        }
    }
    if (!any) {
        std::printf("usage: %s [--selftest] [--file <archive.rpf>]...\n", argv[0]);
        return 2;
    }
    return status;
}
