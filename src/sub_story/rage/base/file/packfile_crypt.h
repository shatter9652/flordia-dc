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

// The 16-byte RPF9 header, decoded from FUN_141fb2600.
//
// The function reads 16 bytes, checks `magic`, then takes the entry-table size
// from `+0x04` on a plain read and `+0x08` on a full read. That is only
// consistent if `+0x08` is the header size -- where the entry table ends and the
// name blob starts -- and `+0x04` ends the name blob. The full path's name
// length is exactly `namesEnd - headerSize`.
struct fiPackHeader9 {
    uint32_t magic;        // +0x00  0x52504639
    uint32_t namesEnd;     // +0x04  end offset of the name blob
    uint32_t headerSize;   // +0x08  size of header + entry table
    uint32_t encryption;   // +0x0C  not tested in either recovered body
};
static_assert(sizeof(fiPackHeader9) == 16, "RPF9 header is 16 bytes");

// ---------------------------------------------------------------------------
// fiPackCrypt -- the TOC encryption block
// ---------------------------------------------------------------------------

// GTA V's own writer shows the shape (MiscRef/GTAVSRC/tools/cli/rekey_rpf/
// rekey_rpf.cpp): after the 16-byte header, `sizeof(fiPackEntry) * count +
// nameHeapSize` bytes are decrypted in place with `AES::Decrypt(keyId, 0,
// data, size)`, and re-encrypted the same way. rage's AES block is AES-256 in
// ECB mode -- data/aes.cpp ends in rijndael_ecb_decrypt_mem and there is no IV
// anywhere in it -- so every 16-byte block stands alone.
//
// The same block is in this image:
//   FUN_0215f06c  the cipher core and key schedule (loads TE0/TD0/rcon)
//   AES tables at RVA 0x5fc1b20 (TE0), 0x5fc2b50 (TD0), 0x5fc2b20 (rcon)
// and the key ids are the AES_KEY_ID_* family in data/aes.h.
//
// RPF9 puts the same 16-byte header in front of an opaque region that ends at
// `namesEnd`, so the equivalent call is on [0x10, namesEnd). Two things are
// *not* proven and are deliberately left to the caller:
//   * which key id an RPF9 archive uses -- the recovered reader never reads
//     +0x0C, so it cannot be taken from the header;
//   * that this build calls the block here at all. FUN_141fb2600 reads the
//     table without calling AES, so on Xbox Series X the decryption may sit
//     below this layer. tools/rpf9crypt.cpp therefore takes a key id and a key
//     explicitly instead of inventing one.
struct fiPackCrypt {
    static constexpr uint32_t kTocStart = 0x10;  // the header is plaintext

    // Size of the cipher stream: everything after the header to `namesEnd`,
    // rounded down to a whole number of AES blocks.
    static uint32_t TocBytes(const fiPackHeader9* header) {
        if (header == nullptr || header->namesEnd <= kTocStart) return 0;
        return (header->namesEnd - kTocStart) & ~15u;
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
