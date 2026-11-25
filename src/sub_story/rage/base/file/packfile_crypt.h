// RPF9 header and TOC cipher, shared by the recovered packfile and the tools.
//
// Split out of packfile.cpp so tools/rpf9crypt.cpp can use the block without
// pulling in the whole recovered object graph (packfile.cpp declares device and
// registry functions that only the game provides).
//
// Syntax-checked with g++ -std=c++17 -fsyntax-only -Wall -Wextra.

#ifndef GTA6DECOMP_RAGE_BASE_FILE_PACKFILE_CRYPT_H
#define GTA6DECOMP_RAGE_BASE_FILE_PACKFILE_CRYPT_H

#include <cstddef>
#include <cstdint>

#include "../data/aes.h"

namespace rage {

// ---------------------------------------------------------------------------
// fiPackHeader9 -- the 64-byte RPF9 header
// ---------------------------------------------------------------------------

// Layout measured on the four archives in the dump (appdata0, common, script,
// data); every field below is either read by a recovered body or has the same
// value in all four. The one number that proves the header length is 0x40 is
// the geometry in `fiPackCrypt`: namesOffset + align16(entryCount * (8 + mode))
// equals tocEnd exactly, byte for byte, with no slack, on all four archives.
//
// SixRE's reader (6RE/new/G6Recomp/common/include/g6/rpf9.h) also reads the
// header as 64 bytes and calls +0x04 the table-of-contents size. The offsets
// here are *absolute file offsets from the header*, not TOC-relative: with
// tocEnd 0x360 and namesOffset 0x340 in appdata0, a TOC-relative reading would
// put the name records at 0x3A0, past the end of the table. 6RE's size reading
// starts the data area at 0x3A0 instead of 0x360; its own notes say the data
// area is only checked "loosely" and that the first file always starts later,
// which is how that 0x40 would go unnoticed.
struct fiPackHeader9 {
    uint32_t magic;        // +0x00  0x52504639, "9FPR" little-endian
    uint32_t tocEnd;       // +0x04  end of the TOC == namesOffset + name bytes
    uint32_t namesOffset;  // +0x08  first name record; entry records are
                           //        [0x40, namesOffset)
    uint32_t field0C;      // +0x0C  named `names_size` by 6RE, but it is not
                           //        tocEnd - namesOffset on any sampled
                           //        archive (0x40 vs 0x20 in appdata0), so the
                           //        name is not adopted here
    uint64_t tocHash;      // +0x10  per-archive value (6RE reads big-endian);
                           //        not a key id -- it differs between archives
                           //        that share everything else
    uint32_t field18;      // +0x18  0x47A00 in all four
    uint32_t field1C;      // +0x1C  0x150 in all four
    uint16_t field20;      // +0x20  3, 6, 6, 7 in the four
    uint16_t field22;      // +0x22  1 in all four
    uint32_t entryCount;   // +0x24  2, 418, 2, 699: the count the name-byte
                           //        geometry is exact against
    uint32_t field28;      // +0x28  6RE calls it the key id; equal in
                           //        appdata0/common, different in script/data,
                           //        so it is not proven to select a key
    uint8_t  mode;         // +0x2C  1 or 2; a name record is 8 + mode bytes
    uint8_t  field2D;      // +0x2D  0x0F in all four
    uint8_t  field2E;      // +0x2E  0x09 in all four
    uint8_t  field2F;      // +0x2F  0 in all four
    uint32_t alignment;    // +0x30  0x10 in all four
    uint32_t reserved[3];  // +0x34  zero in all four
};
static_assert(sizeof(fiPackHeader9) == 0x40, "RPF9 header is 64 bytes");
static_assert(offsetof(fiPackHeader9, tocEnd) == 0x04, "tocEnd is at +0x04");
static_assert(offsetof(fiPackHeader9, namesOffset) == 0x08,
              "namesOffset is at +0x08");
static_assert(offsetof(fiPackHeader9, entryCount) == 0x24,
              "entryCount is at +0x24");
static_assert(offsetof(fiPackHeader9, mode) == 0x2C, "mode is at +0x2C");

// ---------------------------------------------------------------------------
// fiPackCrypt -- the TOC encryption block
// ---------------------------------------------------------------------------

// GTA V's own writer shows the shape (MiscRef/GTAVSRC/tools/cli/rekey_rpf/
// rekey_rpf.cpp): after the header, `sizeof(fiPackEntry) * count + nameHeapSize`
// bytes are decrypted in place with `AES::Decrypt(keyId, 0, data, size)`, and
// re-encrypted the same way. rage's AES block is AES-256 in ECB mode --
// data/aes.cpp ends in rijndael_ecb_decrypt_mem and there is no IV anywhere in
// it -- so every 16-byte block stands alone.
//
// The same block is in this image:
//   FUN_0215f06c  the cipher core and key schedule (loads TE0/TD0/rcon)
//   AES tables at RVA 0x5fc1b20 (TE0), 0x5fc2b50 (TD0), 0x5fc2b20 (rcon)
// and the key ids are the AES_KEY_ID_* family in data/aes.h.
//
// RPF9's table of contents is [0x40, tocEnd): the 64-byte header stays
// plaintext, because the magic, the TOC size and the name offset have to be
// readable before any key is chosen. Both ends are 16-aligned in every sampled
// archive (tocEnd is a multiple of 16 in all four). Two things are *not*
// proven and are deliberately left to the caller:
//   * which key id an RPF9 archive uses -- the recovered reader never reads
//     +0x28, and that field is not constant across archives anyway;
//   * that this build calls the block here at all. FUN_141fb2600 reads the
//     table without calling AES, so on Xbox Series X the decryption may sit
//     below this layer. tools/rpf9crypt.cpp therefore takes a key id and a key
//     explicitly instead of inventing one.
struct fiPackCrypt {
    static constexpr uint32_t kTocStart = 0x40;  // the header is plaintext
    static constexpr uint32_t kAlignment = 16;

    // Size of the cipher stream: the table of contents after the header,
    // rounded down to a whole number of AES blocks.
    static uint32_t TocBytes(const fiPackHeader9* header) {
        if (header == nullptr || header->tocEnd <= kTocStart) return 0;
        return (header->tocEnd - kTocStart) & ~(kAlignment - 1);
    }

    // Bytes of name records: [namesOffset, tocEnd).
    static uint32_t NamesBytes(const fiPackHeader9* header) {
        if (header == nullptr || header->tocEnd <= header->namesOffset) return 0;
        return header->tocEnd - header->namesOffset;
    }

    // A name record is an 8-byte hash plus `mode` bytes of flags, so 9 bytes in
    // mode 1 and 10 in mode 2.
    static uint32_t NameRecordBytes(const fiPackHeader9* header) {
        return header == nullptr ? 0 : 8u + header->mode;
    }

    // What the name region must be for `entryCount` records, aligned up to 16.
    static uint32_t NamesBytesExpected(const fiPackHeader9* header) {
        if (header == nullptr) return 0;
        const uint64_t bytes =
            static_cast<uint64_t>(header->entryCount) * NameRecordBytes(header);
        return static_cast<uint32_t>((bytes + kAlignment - 1) &
                                     ~static_cast<uint64_t>(kAlignment - 1));
    }

    // True when the header's own numbers agree: the name region starts after
    // the 64-byte header, and its length is exactly the aligned record count.
    // This is checkable on a retail archive without a key, which is why the
    // tool prints it.
    static bool LayoutMatches(const fiPackHeader9* header) {
        if (header == nullptr || header->magic != 0x52504639u) return false;
        if (header->namesOffset < kTocStart) return false;
        if (header->namesOffset > header->tocEnd) return false;
        if ((header->tocEnd & (kAlignment - 1)) != 0) return false;
        if (header->mode != 1 && header->mode != 2) return false;
        return NamesBytes(header) == NamesBytesExpected(header);
    }

    // In-place, exactly like AES::Decrypt(keyId, 0, data, size).
    static bool DecryptToc(fiPackHeader9* header, uint32_t keyId) {
        const uint32_t bytes = TocBytes(header);
        if (bytes == 0) return false;
        return AES::Decrypt(keyId, 0,
                            reinterpret_cast<uint8_t*>(header) + kTocStart,
                            bytes);
    }

    // The inverse, for writing an archive: AES::Encrypt on the same range.
    static bool EncryptToc(fiPackHeader9* header, uint32_t keyId) {
        const uint32_t bytes = TocBytes(header);
        if (bytes == 0) return false;
        return AES::Encrypt(keyId, 0,
                            reinterpret_cast<uint8_t*>(header) + kTocStart,
                            bytes);
    }
};

}  // namespace rage

#endif  // GTA6DECOMP_RAGE_BASE_FILE_PACKFILE_CRYPT_H
