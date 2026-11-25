// rpf9keyhunt -- look for an RPF9 table-of-contents key inside a binary.
//
// The archives in the dump have an opaque table of contents: [0x40, tocEnd) is
// high entropy, has no duplicate 16-byte block, no zero word and no small word.
// Either it is encrypted, or it is a packed hash table (see docs/rpf-crypto.md).
// If it is encrypted and this build carries the key, the key is a 16- or
// 32-byte array in the image, so this tool does the one experiment that can
// settle it: take every aligned window of the image, expand it as an AES key,
// decrypt the archive's probe blocks, and score the plaintext.
//
// The score is structural, not a guess at the format. A table of contents is
// built by appending records to a 16-aligned heap, so the last block before
// tocEnd is padding: mostly zeros. A random key turns it into noise, which has
// almost no zeros. Two archives must agree on the same key, which removes the
// remaining false positives.
//
//   rpf9keyhunt selftest
//   rpf9keyhunt scan <image> <archive.rpf> [<second.rpf>]
//       [--keylen 16|32|both] [--align 16] [--min-zeros 8] [--top 8]
//       [--start N] [--limit N]
//
// Nothing is written and no key is printed as "found" without the score that
// produced it, so a hit can be re-checked by hand with rpf9crypt.
//
// Build:
//   g++ -std=c++17 -O2 -o build/rpf9keyhunt tools/rpf9keyhunt.cpp
//       src/sub_story/rage/base/data/aes.cpp

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>

#include "../src/sub_story/rage/base/data/aes.h"
#include "../src/sub_story/rage/base/file/packfile_crypt.h"

namespace {

constexpr uint32_t kRpfMagic9 = 0x52504639u;

bool ReadFile(const char* path, std::vector<uint8_t>* out) {
    std::FILE* f = std::fopen(path, "rb");
    if (f == nullptr) {
        std::fprintf(stderr, "cannot open %s\n", path);
        return false;
    }
    std::fseek(f, 0, SEEK_END);
    const long size = std::ftell(f);
    std::rewind(f);
    if (size <= 0) {
        std::fclose(f);
        std::fprintf(stderr, "%s is empty\n", path);
        return false;
    }
    out->resize(static_cast<size_t>(size));
    const size_t got = std::fread(out->data(), 1, out->size(), f);
    std::fclose(f);
    return got == out->size();
}

// ---------------------------------------------------------------------------
// Probe blocks taken from one archive
// ---------------------------------------------------------------------------

// The cipher covers [0x40, tocEnd). Three blocks are enough to score a key and
// cheap enough to run seven million times:
//   tail  -- the last block, expected to be name-record padding (zeros)
//   head  -- the first block, the same ciphertext in every archive
//   names -- the first block of the name region when it is not the tail
struct ArchiveProbe {
    std::string name;
    std::vector<uint8_t> tail;   // 16 bytes at tocEnd - 16
    std::vector<uint8_t> head;   // 16 bytes at 0x40
    std::vector<uint8_t> names;  // 16 bytes at namesOffset
};

bool LoadProbe(const char* path, ArchiveProbe* probe) {
    std::vector<uint8_t> bytes;
    if (!ReadFile(path, &bytes)) return false;
    if (bytes.size() < sizeof(rage::fiPackHeader9)) {
        std::fprintf(stderr, "%s is smaller than an RPF9 header\n", path);
        return false;
    }
    const auto* h = reinterpret_cast<const rage::fiPackHeader9*>(bytes.data());
    if (h->magic != kRpfMagic9) {
        std::fprintf(stderr, "%s is not an RPF9 archive\n", path);
        return false;
    }
    if (h->tocEnd > bytes.size() || h->namesOffset >= h->tocEnd ||
        h->namesOffset < rage::fiPackCrypt::kTocStart) {
        std::fprintf(stderr, "%s has an inconsistent TOC range\n", path);
        return false;
    }
    auto block = [&](uint32_t offset) {
        std::vector<uint8_t> b(16);
        std::memcpy(b.data(), bytes.data() + offset, 16);
        return b;
    };
    probe->name = path;
    probe->tail = block(h->tocEnd - 16);
    probe->head = block(rage::fiPackCrypt::kTocStart);
    probe->names = block(h->namesOffset);
    return true;
}

// ---------------------------------------------------------------------------
// Candidate regions of the image
// ---------------------------------------------------------------------------

struct Region {
    std::string name;
    size_t offset;   // file offset
    size_t size;
    uint64_t rva;    // 0 when the image is not a PE
};

uint16_t U16(const uint8_t* p) {
    return static_cast<uint16_t>(p[0] | (p[1] << 8));
}
uint32_t U32(const uint8_t* p) {
    return static_cast<uint32_t>(p[0]) | (static_cast<uint32_t>(p[1]) << 8) |
           (static_cast<uint32_t>(p[2]) << 16) |
           (static_cast<uint32_t>(p[3]) << 24);
}

// PE: the sections that can hold a constant array. ELF and anything else: the
// whole file as one region, which is correct but slower.
std::vector<Region> Regions(const std::vector<uint8_t>& image) {
    std::vector<Region> out;
    if (image.size() < 0x40 || image[0] != 'M' || image[1] != 'Z') {
        out.push_back({"file", 0, image.size(), 0});
        return out;
    }
    const uint32_t pe = U32(image.data() + 0x3c);
    if (pe + 24 > image.size() || std::memcmp(image.data() + pe, "PE\0\0", 4) != 0) {
        out.push_back({"file", 0, image.size(), 0});
        return out;
    }
    const uint16_t sections = U16(image.data() + pe + 6);
    const uint16_t optional = U16(image.data() + pe + 20);
    size_t walk = pe + 24 + optional;
    for (uint16_t i = 0; i < sections; ++i, walk += 40) {
        if (walk + 40 > image.size()) break;
        char name[9] = {};
        std::memcpy(name, image.data() + walk, 8);
        const uint32_t vsize = U32(image.data() + walk + 8);
        const uint32_t rva = U32(image.data() + walk + 12);
        const uint32_t rawSize = U32(image.data() + walk + 16);
        const uint32_t raw = U32(image.data() + walk + 20);
        if (raw == 0 || rawSize == 0) continue;             // .bss and friends
        if (raw + rawSize > image.size()) continue;
        if (std::strcmp(name, ".pdata") == 0 ||
            std::strcmp(name, ".reloc") == 0 ||
            std::strcmp(name, ".voltbl") == 0 ||
            std::strcmp(name, ".xbld") == 0) {
            continue;                                       // no keys live here
        }
        out.push_back({name, raw, std::min<size_t>(rawSize, vsize ? vsize : rawSize),
                       rva});
    }
    if (out.empty()) out.push_back({"file", 0, image.size(), 0});
    return out;
}

// ---------------------------------------------------------------------------
// Scoring
// ---------------------------------------------------------------------------

struct Score {
    int zeros;      // zero bytes in the tail block
    int printable;  // printable ASCII in the tail block
    int smallWords; // 32-bit little-endian words below 0x10000
};

Score ScoreOf(const std::vector<uint8_t>& block) {
    Score s{0, 0, 0};
    for (uint8_t b : block) {
        if (b == 0) ++s.zeros;
        if (b >= 0x20 && b < 0x7f) ++s.printable;
    }
    for (size_t i = 0; i + 4 <= block.size(); i += 4) {
        if (U32(block.data() + i) < 0x10000) ++s.smallWords;
    }
    return s;
}

// Decrypt one block with one expanded key.
std::vector<uint8_t> Decrypt(const rage::symmetric_key& skey,
                             const std::vector<uint8_t>& in) {
    std::vector<uint8_t> out(in);
    rage::rijndael_ecb_decrypt(out.data(), &skey);
    return out;
}

// ---------------------------------------------------------------------------
// Scan
// ---------------------------------------------------------------------------

std::string Hex(const std::vector<uint8_t>& bytes) {
    std::string out;
    out.reserve(bytes.size() * 2);
    char pair[3] = {};
    for (uint8_t b : bytes) {
        std::snprintf(pair, sizeof(pair), "%02x", b);
        out += pair;
    }
    return out;
}

struct Options {
    int keyLen = 32;     // 16 or 32; 0 = both
    size_t align = 16;
    int minZeros = 8;
    int top = 8;
    size_t start = 0;
    size_t limit = 0;    // 0 = the whole image
};

int Scan(const char* imagePath, const std::vector<const char*>& archivePaths,
         const Options& opt) {
    std::vector<uint8_t> image;
    if (!ReadFile(imagePath, &image)) return 1;

    std::vector<ArchiveProbe> probes;
    for (const char* path : archivePaths) {
        ArchiveProbe probe;
        if (!LoadProbe(path, &probe)) return 1;
        probes.push_back(std::move(probe));
    }
    if (probes.empty()) {
        std::fprintf(stderr, "give at least one archive\n");
        return 2;
    }

    const std::vector<Region> regions = Regions(image);
    std::printf("image   %s (%zu bytes, %zu region%s)\n", imagePath, image.size(),
                regions.size(), regions.size() == 1 ? "" : "s");
    for (const auto& p : probes) {
        std::printf("probe   %s tail %s names %s\n", p.name.c_str(),
                    Hex(p.tail).c_str(), Hex(p.names).c_str());
    }
    std::printf("keys    %s, align %zu, hit at >= %d zero bytes in the tail block\n",
                opt.keyLen == 0 ? "16 and 32 bytes"
                                : (opt.keyLen == 16 ? "16 bytes" : "32 bytes"),
                opt.align, opt.minZeros);

    struct Hit {
        std::string region;
        size_t offset;
        uint64_t rva;
        int keyLen;
        Score score;
        std::string key;
    };
    std::vector<Hit> best;
    size_t examined = 0;
    size_t skippedByStart = 0;
    const int lens[2] = {opt.keyLen == 0 ? 16 : opt.keyLen,
                         opt.keyLen == 0 ? 32 : 0};
    const int keyLens = lens[1] != 0 ? 2 : 1;

    for (const Region& region : regions) {
        if (region.size < 16) continue;
        const uint8_t* base = image.data() + region.offset;
        const size_t end = region.size;
        for (size_t i = 0; i + 16 <= end; i += opt.align) {
            const size_t absolute = region.offset + i;
            if (absolute < opt.start) {
                ++skippedByStart;
                continue;
            }
            if (opt.limit != 0 && absolute >= opt.start + opt.limit) break;

            for (int li = 0; li < keyLens; ++li) {
                const int keyLen = lens[li];
                if (i + static_cast<size_t>(keyLen) > end) break;
                rage::symmetric_key skey;
                if (!rage::rijndael_setup(base + i, keyLen, 0, &skey)) continue;
                skey.extraRounds = 0;

                bool allTail = true;
                Score first{};
                for (size_t pi = 0; pi < probes.size() && allTail; ++pi) {
                    const std::vector<uint8_t> tail =
                        Decrypt(skey, probes[pi].tail);
                    const Score s = ScoreOf(tail);
                    if (pi == 0) first = s;
                    if (s.zeros < opt.minZeros) allTail = false;
                }
                ++examined;
                if (!allTail) continue;

                Hit hit;
                hit.region = region.name;
                hit.offset = absolute;
                hit.rva = region.rva + i;
                hit.keyLen = keyLen;
                hit.score = first;
                char hex[2 * 32 + 1] = {};
                for (int b = 0; b < keyLen; ++b)
                    std::snprintf(hex + 2 * b, 3, "%02x", base[i + b]);
                hit.key = hex;
                best.push_back(std::move(hit));
            }
        }
        std::printf("  %-8s %zu bytes scanned\n", region.name.c_str(), end);
    }

    std::printf("examined %zu candidate keys (%zu before --start)\n", examined,
                skippedByStart);
    if (best.empty()) {
        std::printf("no key found: no window in this image decrypts the probe "
                    "blocks to padding\n");
        return 1;
    }
    std::sort(best.begin(), best.end(), [](const Hit& a, const Hit& b) {
        if (a.score.zeros != b.score.zeros) return a.score.zeros > b.score.zeros;
        return a.score.printable > b.score.printable;
    });
    const size_t show = std::min<size_t>(best.size(), static_cast<size_t>(opt.top));
    for (size_t i = 0; i < show; ++i) {
        const Hit& h = best[i];
        std::printf("hit  %s+0x%zx (rva 0x%llx) key%d %s  zeros %d printable %d\n",
                    h.region.c_str(), h.offset,
                    static_cast<unsigned long long>(h.rva), h.keyLen * 8,
                    h.key.c_str(), h.score.zeros, h.score.printable);
    }
    return 0;
}

// ---------------------------------------------------------------------------
// Self-test: prove the scanner finds a key when the plaintext is padding
// ---------------------------------------------------------------------------

bool EncryptBlock(const rage::symmetric_key& skey, std::vector<uint8_t>* block) {
    rage::rijndael_ecb_encrypt(block->data(), &skey);
    return true;
}

int SelfTest() {
    int failures = 0;
    auto check = [&](bool ok, const char* what) {
        std::printf("%s  %s\n", ok ? "ok  " : "FAIL", what);
        if (!ok) ++failures;
    };

    // A synthetic archive: 64-byte header, entry region, and a name region whose
    // last block is 12 record bytes plus zero padding -- the shape the real
    // archives have.
    uint8_t key[32];
    for (int i = 0; i < 32; ++i) key[i] = static_cast<uint8_t>(i * 7 + 3);

    rage::symmetric_key skey;
    check(rage::rijndael_setup(key, 32, 0, &skey), "key schedule");

    std::vector<uint8_t> archive(0x200, 0xAA);
    auto* header = reinterpret_cast<rage::fiPackHeader9*>(archive.data());
    header->magic = kRpfMagic9;
    header->tocEnd = 0x1E0;
    header->namesOffset = 0x1C0;
    header->entryCount = 1;
    header->mode = 1;
    header->alignment = 0x10;
    header->field22 = 1;
    // Zero the name-region padding exactly as a writer would.
    for (uint32_t i = 0x1C0 + 9; i < 0x1E0; ++i) archive[i] = 0;
    for (uint32_t i = 0x40; i < 0x1C0; ++i)
        archive[i] = static_cast<uint8_t>(i * 13 + 1);

    for (uint32_t i = 0x40; i < 0x1E0; i += 16) {
        std::vector<uint8_t> block(archive.begin() + i, archive.begin() + i + 16);
        EncryptBlock(skey, &block);
        std::memcpy(archive.data() + i, block.data(), 16);
    }

    // Plant the key in a synthetic image at a 16-aligned offset.
    std::vector<uint8_t> image(0x1000, 0x00);
    for (size_t i = 0; i < image.size(); ++i) image[i] = static_cast<uint8_t>(i);
    std::memcpy(image.data() + 0x340, key, 32);

    const std::string archivePath = "/tmp/rpf9keyhunt_selftest.rpf";
    const std::string imagePath = "/tmp/rpf9keyhunt_selftest.bin";
    bool wrote = true;
    for (const auto& pair : {std::pair<const char*, const std::vector<uint8_t>*>{
             archivePath.c_str(), &archive},
         {imagePath.c_str(), &image}}) {
        std::FILE* f = std::fopen(pair.first, "wb");
        if (f == nullptr) {
            wrote = false;
            break;
        }
        wrote = std::fwrite(pair.second->data(), 1, pair.second->size(), f) ==
                    pair.second->size() &&
                wrote;
        std::fclose(f);
    }
    check(wrote, "synthetic image and archive written");

    ArchiveProbe probe;
    check(LoadProbe(archivePath.c_str(), &probe), "synthetic archive parses");

    // Scan only the region around the planted key.
    Options opt;
    opt.keyLen = 32;
    opt.align = 16;
    opt.minZeros = 8;
    opt.start = 0x300;
    opt.limit = 0x100;
    const int found = Scan(imagePath.c_str(), {archivePath.c_str()}, opt);
    check(found == 0, "scanner reports a hit for the planted key");

    std::remove(archivePath.c_str());
    std::remove(imagePath.c_str());

    std::printf("%s (%d failure%s)\n", failures ? "FAILED" : "all passed",
                failures, failures == 1 ? "" : "s");
    return failures ? 1 : 0;
}

void Usage() {
    std::fprintf(stderr,
                 "usage:\n"
                 "  rpf9keyhunt selftest\n"
                 "  rpf9keyhunt scan <image> <archive.rpf> [<second.rpf>] "
                 "[--keylen 16|32|both] [--align N] [--min-zeros N] [--top N] "
                 "[--start N] [--limit N]\n");
}

size_t ParseSize(const char* text) {
    return static_cast<size_t>(std::strtoull(text, nullptr, 0));
}

}  // namespace

int main(int argc, char** argv) {
    if (argc < 2) {
        Usage();
        return 2;
    }
    if (std::strcmp(argv[1], "selftest") == 0) return SelfTest();
    if (std::strcmp(argv[1], "scan") != 0) {
        Usage();
        return 2;
    }
    if (argc < 4) {
        Usage();
        return 2;
    }

    const char* imagePath = argv[2];
    std::vector<const char*> archives;
    archives.push_back(argv[3]);
    Options opt;
    bool archivesDone = false;

    for (int i = 4; i < argc; ++i) {
        const char* arg = argv[i];
        if (arg[0] != '-') {
            if (!archivesDone) {
                archives.push_back(arg);
                continue;
            }
            std::fprintf(stderr, "unexpected argument %s\n", arg);
            return 2;
        }
        if (i + 1 >= argc) {
            std::fprintf(stderr, "missing value for %s\n", arg);
            return 2;
        }
        const char* value = argv[++i];
        archivesDone = true;
        if (std::strcmp(arg, "--keylen") == 0) {
            if (std::strcmp(value, "both") == 0) {
                opt.keyLen = 0;
            } else {
                opt.keyLen = std::atoi(value);
                if (opt.keyLen != 16 && opt.keyLen != 32) {
                    std::fprintf(stderr, "--keylen is 16, 32 or both\n");
                    return 2;
                }
            }
        } else if (std::strcmp(arg, "--align") == 0) {
            opt.align = ParseSize(value) ? ParseSize(value) : 1;
        } else if (std::strcmp(arg, "--min-zeros") == 0) {
            opt.minZeros = std::atoi(value);
        } else if (std::strcmp(arg, "--top") == 0) {
            opt.top = std::atoi(value);
        } else if (std::strcmp(arg, "--start") == 0) {
            opt.start = ParseSize(value);
        } else if (std::strcmp(arg, "--limit") == 0) {
            opt.limit = ParseSize(value);
        } else {
            std::fprintf(stderr, "unknown option %s\n", arg);
            Usage();
            return 2;
        }
    }
    return Scan(imagePath, archives, opt);
}
