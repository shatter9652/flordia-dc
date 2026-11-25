// rpf9crypt -- the recovered RAGE AES block as a command, for RPF9 archives.
//
// The archive's table of contents -- [0x40, tocEnd) -- is AES-256 in ECB mode,
// keyed by an AES key id (docs/rpf-crypto.md). This tool decrypts or encrypts
// that region in place on a copy, so an archive can be inspected by an ordinary
// parser afterwards, and a repacked archive can be written back. `info` prints
// the header and checks its own geometry without needing a key at all.
//
// The key is never in the repository. Pass 32 raw bytes, or a keyring line:
//
//   rpf9crypt selftest
//   rpf9crypt decrypt common.rpf common.clear.rpf --key keys/rpf9.key
//   rpf9crypt decrypt common.rpf common.clear.rpf --keyring keys/rpf9.keyring
//                    --key-id 0x0ffffff9
//   rpf9crypt encrypt common.clear.rpf common.rpf --key keys/rpf9.key
//
// A keyring is text, one key per line, '#' comments allowed:
//
//   0x0ffffff9  000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f
//
// Build:
//   g++ -std=c++17 -O2 -o build/rpf9crypt tools/rpf9crypt.cpp
//       src/sub_story/rage/base/data/aes.cpp

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
    if (got != out->size()) {
        std::fprintf(stderr, "short read on %s\n", path);
        return false;
    }
    return true;
}

bool WriteFile(const char* path, const std::vector<uint8_t>& data) {
    std::FILE* f = std::fopen(path, "wb");
    if (f == nullptr) {
        std::fprintf(stderr, "cannot write %s\n", path);
        return false;
    }
    const size_t put = std::fwrite(data.data(), 1, data.size(), f);
    std::fclose(f);
    if (put != data.size()) {
        std::fprintf(stderr, "short write on %s\n", path);
        return false;
    }
    return true;
}

int HexNibble(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'a' && c <= 'f') return c - 'a' + 10;
    if (c >= 'A' && c <= 'F') return c - 'A' + 10;
    return -1;
}

bool ParseHex32(const char* text, uint8_t out[32]) {
    size_t n = 0;
    while (n < 64 && text[n] != '\0') {
        const int hi = HexNibble(text[n]);
        const int lo = text[n + 1] ? HexNibble(text[n + 1]) : -1;
        if (hi < 0 || lo < 0) return false;
        out[n / 2] = static_cast<uint8_t>((hi << 4) | lo);
        n += 2;
    }
    return n == 64;
}

// 32 raw bytes.
bool LoadRawKey(const char* path, uint8_t out[32]) {
    std::vector<uint8_t> bytes;
    if (!ReadFile(path, &bytes)) return false;
    if (bytes.size() < 32) {
        std::fprintf(stderr, "%s holds %zu bytes, expected 32\n", path,
                     bytes.size());
        return false;
    }
    std::memcpy(out, bytes.data(), 32);
    return true;
}

// Text keyring: '<key id, hex> <64 hex digits>' per line.
bool LoadRingKey(const char* path, uint32_t keyId, uint8_t out[32]) {
    std::vector<uint8_t> bytes;
    if (!ReadFile(path, &bytes)) return false;
    std::string text(bytes.begin(), bytes.end());
    size_t pos = 0;
    while (pos <= text.size()) {
        const size_t end = text.find('\n', pos);
        std::string line = text.substr(
            pos, end == std::string::npos ? std::string::npos : end - pos);
        pos = end == std::string::npos ? text.size() + 1 : end + 1;

        const size_t hash = line.find('#');
        if (hash != std::string::npos) line.resize(hash);
        char id_text[32] = {0};
        char key_text[80] = {0};
        if (std::sscanf(line.c_str(), "%31s %79s", id_text, key_text) != 2) {
            continue;
        }
        const uint32_t id = static_cast<uint32_t>(
            std::strtoul(id_text, nullptr, 0));
        if (id != keyId) continue;
        if (!ParseHex32(key_text, out)) {
            std::fprintf(stderr, "keyring line for 0x%08x is not 32 bytes of "
                                 "hex\n", keyId);
            return false;
        }
        return true;
    }
    std::fprintf(stderr, "key id 0x%08x is not in %s\n", keyId, path);
    return false;
}

void PrintHeader(const rage::fiPackHeader9* header) {
    const uint32_t toc = rage::fiPackCrypt::TocBytes(header);
    const uint32_t names = rage::fiPackCrypt::NamesBytes(header);
    const uint32_t expect = rage::fiPackCrypt::NamesBytesExpected(header);
    std::printf("magic         %08x %s\n", header->magic,
                header->magic == kRpfMagic9 ? "(RPF9)" : "(not RPF9)");
    std::printf("tocEnd        %#x\nnamesOffset   %#x\nfield +0x0C   %#x\n",
                header->tocEnd, header->namesOffset, header->field0C);
    std::printf("entryCount    %u\nmode          %u (name record %u bytes)\n",
                header->entryCount, header->mode,
                rage::fiPackCrypt::NameRecordBytes(header));
    std::printf("names bytes   %#x (geometry wants %#x) %s\n", names, expect,
                names == expect ? "match" : "MISMATCH");
    std::printf("TOC           [0x40, %#x) = %#x bytes, %u AES blocks\n",
                header->tocEnd, toc, toc / 16);
}

// A cheap "does this look decrypted" measure: readable ASCII and zero bytes.
void PrintShape(const uint8_t* data, uint32_t bytes, const char* label) {
    unsigned printable = 0;
    unsigned zero = 0;
    for (uint32_t i = 0; i < bytes; ++i) {
        if (data[i] >= 0x20 && data[i] < 0x7f) ++printable;
        if (data[i] == 0) ++zero;
    }
    std::printf("%s: ascii %.2f, zero %.2f, first 32 bytes ", label,
                bytes ? static_cast<double>(printable) / bytes : 0.0,
                bytes ? static_cast<double>(zero) / bytes : 0.0);
    for (uint32_t i = 0; i < 32 && i < bytes; ++i) {
        std::printf("%02x", data[i]);
    }
    std::printf("\n");
}

int ApplyCipher(const char* mode, const char* in_path, const char* out_path,
                uint32_t key_id, const uint8_t key[32]) {
    std::vector<uint8_t> bytes;
    if (!ReadFile(in_path, &bytes)) return 1;
    if (bytes.size() < sizeof(rage::fiPackHeader9)) {
        std::fprintf(stderr, "%s is smaller than an RPF9 header\n", in_path);
        return 1;
    }
    auto* header = reinterpret_cast<rage::fiPackHeader9*>(bytes.data());
    PrintHeader(header);
    if (header->magic != kRpfMagic9) {
        std::fprintf(stderr, "not an RPF9 archive\n");
        return 1;
    }
    if (header->tocEnd > bytes.size()) {
        std::fprintf(stderr, "tocEnd %#x is past the end of the file\n",
                     header->tocEnd);
        return 1;
    }
    const uint32_t toc = rage::fiPackCrypt::TocBytes(header);
    if (toc == 0) {
        std::fprintf(stderr, "nothing to cipher\n");
        return 1;
    }
    PrintShape(bytes.data() + rage::fiPackCrypt::kTocStart, toc, "before");

    if (!rage::cryKeyRing::Register(key_id, key)) {
        std::fprintf(stderr, "keyring is full\n");
        return 1;
    }
    const bool decrypt = std::strcmp(mode, "decrypt") == 0;
    const bool ok = decrypt ? rage::fiPackCrypt::DecryptToc(header, key_id)
                            : rage::fiPackCrypt::EncryptToc(header, key_id);
    if (!ok) {
        std::fprintf(stderr, "%s failed (key id 0x%08x not registered?)\n",
                     mode, key_id);
        return 1;
    }
    PrintShape(bytes.data() + rage::fiPackCrypt::kTocStart, toc,
               decrypt ? "after  " : "after  ");
    if (!WriteFile(out_path, bytes)) return 1;
    std::printf("%s -> %s\n", in_path, out_path);
    return 0;
}

int SelfTest() {
    int failures = 0;

    // 1. FIPS-197 appendix C.3: AES-256, one block.
    uint8_t key[32];
    for (int i = 0; i < 32; ++i) key[i] = static_cast<uint8_t>(i);
    const uint8_t plain[16] = {0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
                               0x88, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff};
    const uint8_t expect[16] = {0x8e, 0xa2, 0xb7, 0xca, 0x51, 0x67, 0x45, 0xbf,
                                0xea, 0xfc, 0x49, 0x90, 0x4b, 0x49, 0x60, 0x89};
    uint8_t block[16];
    std::memcpy(block, plain, 16);
    rage::rijndael_setup(key, 32, 0, nullptr);  // rejected, must not crash

    rage::AES aes(key);
    aes.Encrypt(block, 16);
    if (std::memcmp(block, expect, 16) != 0) {
        std::printf("FAIL  FIPS-197 C.3 encrypt\n");
        ++failures;
    } else {
        std::printf("ok    FIPS-197 C.3 AES-256 encrypt\n");
    }
    aes.Decrypt(block, 16);
    if (std::memcmp(block, plain, 16) != 0) {
        std::printf("FAIL  FIPS-197 C.3 decrypt\n");
        ++failures;
    } else {
        std::printf("ok    FIPS-197 C.3 AES-256 decrypt\n");
    }

    // 2. The _mem wrappers and the key ring, over many blocks.
    std::vector<uint8_t> data(4096);
    uint32_t x = 0x12345678u;
    for (auto& b : data) {
        x = x * 1664525u + 1013904223u;
        b = static_cast<uint8_t>(x >> 24);
    }
    const std::vector<uint8_t> original = data;
    rage::cryKeyRing::Clear();
    rage::cryKeyRing::Register(rage::AES_KEY_ID_GTA5_PC, key);
    const bool ok = rage::AES::Encrypt(rage::AES_KEY_ID_GTA5_PC, 0, data.data(),
                                       static_cast<unsigned>(data.size())) &&
                    rage::AES::Decrypt(rage::AES_KEY_ID_GTA5_PC, 0, data.data(),
                                       static_cast<unsigned>(data.size()));
    if (!ok || data != original) {
        std::printf("FAIL  4096-byte keyring round trip\n");
        ++failures;
    } else {
        std::printf("ok    4096-byte keyring round trip\n");
    }

    // 3. A key that was never registered must refuse, not guess.
    rage::AES missing(0x0FFFFF11u);
    uint8_t zero[16] = {0};
    if (missing.IsValid() || missing.Decrypt(zero, 16)) {
        std::printf("FAIL  unregistered key id was accepted\n");
        ++failures;
    } else {
        std::printf("ok    unregistered key id refused\n");
    }

    // 4. RPF9-shaped TOC: 0x40-byte header then 0x400 cipher bytes, encrypt
    // then decrypt. The header's geometry is made self-consistent (2 records
    // of 9 bytes is 0x20 aligned), so the same LayoutMatches the tool prints
    // for a retail archive is exercised here.
    std::vector<uint8_t> archive(rage::fiPackCrypt::kTocStart + 0x400, 0xaa);
    auto* header = reinterpret_cast<rage::fiPackHeader9*>(archive.data());
    header->magic = kRpfMagic9;
    header->tocEnd = rage::fiPackCrypt::kTocStart + 0x400;
    header->namesOffset = header->tocEnd - 0x20;
    header->field0C = 0;
    header->entryCount = 2;
    header->mode = 1;
    header->alignment = 16;
    if (!rage::fiPackCrypt::LayoutMatches(header)) {
        std::printf("FAIL  self-test header geometry is inconsistent\n");
        ++failures;
    } else {
        std::printf("ok    header geometry check accepts a valid one\n");
    }
    const std::vector<uint8_t> clear = archive;
    rage::cryKeyRing::Clear();
    rage::cryKeyRing::Register(rage::AES_KEY_ID_GTA5_PC, key);
    const bool wrapped =
        rage::fiPackCrypt::EncryptToc(header, rage::AES_KEY_ID_GTA5_PC);
    const bool changed = archive != clear;
    const bool unwrapped =
        rage::fiPackCrypt::DecryptToc(header, rage::AES_KEY_ID_GTA5_PC);
    if (!wrapped || !changed || !unwrapped || archive != clear) {
        std::printf("FAIL  RPF9 TOC encrypt/decrypt round trip\n");
        ++failures;
    } else {
        std::printf("ok    RPF9 TOC encrypt/decrypt round trip\n");
    }

    // 5. The region is exactly [0x40, tocEnd): the header stays readable.
    if (header->magic != kRpfMagic9 ||
        header->tocEnd != rage::fiPackCrypt::kTocStart + 0x400 ||
        !rage::fiPackCrypt::LayoutMatches(header)) {
        std::printf("FAIL  header was modified by the TOC cipher\n");
        ++failures;
    } else {
        std::printf("ok    header untouched by the TOC cipher\n");
    }

    std::printf("%s (%d failure%s)\n", failures ? "FAILED" : "all passed",
                failures, failures == 1 ? "" : "s");
    return failures ? 1 : 0;
}

void Usage() {
    std::fprintf(stderr,
                 "usage:\n"
                 "  rpf9crypt selftest\n"
                 "  rpf9crypt info <in.rpf>\n"
                 "  rpf9crypt decrypt|encrypt <in.rpf> <out.rpf> "
                 "--key <32-byte file> [--key-id <hex>]\n"
                 "  rpf9crypt decrypt|encrypt <in.rpf> <out.rpf> "
                 "--keyring <file> --key-id <hex>\n");
}

}  // namespace

int main(int argc, char** argv) {
    if (argc < 2) {
        Usage();
        return 2;
    }
    if (std::strcmp(argv[1], "selftest") == 0) return SelfTest();

    if (std::strcmp(argv[1], "info") == 0) {
        std::vector<uint8_t> bytes;
        if (argc < 3 || !ReadFile(argv[2], &bytes)) return 2;
        if (bytes.size() < sizeof(rage::fiPackHeader9)) {
            std::fprintf(stderr, "%s is smaller than an RPF9 header\n",
                         argv[2]);
            return 1;
        }
        auto* header = reinterpret_cast<rage::fiPackHeader9*>(bytes.data());
        PrintHeader(header);
        return header->magic == kRpfMagic9 ? 0 : 1;
    }

    if (argc < 4) {
        Usage();
        return 2;
    }
    const char* mode = argv[1];
    if (std::strcmp(mode, "decrypt") != 0 && std::strcmp(mode, "encrypt") != 0) {
        Usage();
        return 2;
    }
    const char* in_path = argv[2];
    const char* out_path = argv[3];
    uint32_t key_id = rage::AES_KEY_ID_RAGE;
    const char* key_path = nullptr;
    const char* ring_path = nullptr;
    for (int i = 4; i + 1 < argc; i += 2) {
        if (std::strcmp(argv[i], "--key") == 0) {
            key_path = argv[i + 1];
        } else if (std::strcmp(argv[i], "--keyring") == 0) {
            ring_path = argv[i + 1];
        } else if (std::strcmp(argv[i], "--key-id") == 0) {
            key_id = static_cast<uint32_t>(std::strtoul(argv[i + 1], nullptr, 0));
        } else {
            std::fprintf(stderr, "unknown option %s\n", argv[i]);
            Usage();
            return 2;
        }
    }

    // AES::AES(0) means "the project default", so a 0 on the command line is
    // that same id rather than an unregistered slot.
    if (key_id == 0) key_id = rage::AES_KEY_ID_RAGE;

    uint8_t key[32];
    if (key_path != nullptr) {
        if (!LoadRawKey(key_path, key)) return 1;
    } else if (ring_path != nullptr) {
        if (!LoadRingKey(ring_path, key_id, key)) return 1;
    } else {
        std::fprintf(stderr, "give --key or --keyring\n");
        Usage();
        return 2;
    }
    return ApplyCipher(mode, in_path, out_path, key_id, key);
}
