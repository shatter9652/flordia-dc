// RPF9 packfile reader — reconstructed from the PS5 eboot.
//
// Layout evidence (see docs/evidence/rpf9-cluster/):
//   0x8e0990  open path: 0x80-byte object, vtable 0xa3dca50, magic 0x52504639
//             ("9FPR" little-endian), geometry computed, calls 0x8e1100
//   0x8e1100  TOC/decrypt init: entry array at obj+0x10, data base at obj+0x18,
//             header at obj+0x08, loop bound hdr+0x1A, entries 8 bytes
//             {u16 type, u32 offset}, type 1 region = align(count*8) + 0x40 +
//             hdr+0x1C, alignment chosen by hdr+0x2D bit 0.
//
// Header bytes confirmed against 20 retail archives (shaders.rpf, common.rpf,
// levels_concat.rpf, ...). The header is plaintext; the entry table after it is
// not, which is why decryption is a hook rather than something this reader
// pretends to do. No keys are shipped or required to parse the header.
//
// This is portable C++: no console APIs, no allocation of game types.

#ifndef GTA6_FILE_PACKFILE_RPF9_H
#define GTA6_FILE_PACKFILE_RPF9_H

#include <cstdint>
#include <functional>
#include <string>
#include <vector>

namespace gta6::file {

// '9FPR' read as a little-endian dword, the value 0x8e0990 compares against.
inline constexpr std::uint32_t kRpf9Magic = 0x52504639u;

// Header fields, in file order. Offsets are into the first 0x40 bytes.
struct Rpf9Header {
    std::uint32_t magic = 0;           // +0x00  kRpf9Magic
    std::uint32_t tocSizeA = 0;        // +0x04  differs per archive; 0x20 larger than B
    std::uint32_t tocSizeB = 0;        // +0x08  used by the open path as a size
    std::uint32_t nameHeapSize = 0;    // +0x0C  name-heap bytes (0x40..0x70 seen)
    std::uint8_t nonce[8] = {};        // +0x10  per-archive, probably IV/key material
    std::uint16_t unknown18 = 0;       // +0x18  0x7000 in every archive seen
    std::uint16_t entryCount = 0;      // +0x1A  loop bound in 0x8e1100
    std::uint32_t extraTableSize = 0;  // +0x1C  0x150 in every archive seen
    std::uint16_t tableRowsA = 0;      // +0x20  4..6 seen
    std::uint16_t tableRowsB = 0;      // +0x22  1 in every archive seen
    std::uint32_t tableStride = 0;     // +0x24  2..2049 seen, scales with archive size
    std::uint32_t checksum = 0;        // +0x28  differs even when siblings match
    std::uint8_t keyId = 0;            // +0x2C  1 or 2 in the retail set
    std::uint8_t flags = 0;            // +0x2D  0x0f in every archive seen
    std::uint8_t mode = 0;             // +0x2E  0x07 -> (>>1) == 3, a decrypt context
    std::uint8_t pad2F = 0;            // +0x2F
    std::uint32_t pageSize = 0;        // +0x30  0x10 in every archive seen

    // Alignment used for the tables: 16 when flags bit 0 is set, 4 otherwise.
    // (0x8e0990: mask -16 with (hdr+0x0F), mask -4 with (hdr+0x03).)
    std::uint32_t tableAlignment() const { return (flags & 1u) ? 16u : 4u; }
    bool encrypted() const { return (flags & 1u) != 0; }
};

// The table geometry 0x8e0990 computes and hands to 0x8e1100 as
// {mode, header, entries, data, ...}. Offsets are absolute in the archive.
struct Rpf9Layout {
    std::uint64_t entryTable = 0;       // (hdr + 0x40) aligned
    std::uint64_t entryTableSize = 0;   // align(entryCount * 8)
    std::uint64_t extraTable = 0;       // entryTable + entryTableSize
    std::uint64_t dataStart = 0;        // extraTable + extraTableSize
    std::uint64_t blockTable = 0;       // align(dataStart + rowsA*0x18, keyId)
    std::uint64_t blockTableSize = 0;   // (rowsA - rowsB) * (stride * keyId)

    // Type-1 payload base as 0x8e0990 computes it: 0x40 + align(count*8, 16) +
    // hdr+0x1C. This is the expression the open path uses for in-archive files,
    // and it is the base an entry's offset is added to.

    // The range 0x8e0990 passes to the decryptor: from dataStart to
    // tocSizeB + pageSize, as computed in the open path.
    std::uint64_t decryptSpan = 0;
    std::uint64_t filePayloadBase = 0;
};

// One 8-byte entry. Only the type and offset are read by the decompiled code;
// the two bytes at +2 are never touched.
struct Rpf9Entry {
    std::uint16_t type = 0;    // 1 = file, 2 = ?, 6 = block (from 0x8e1100)
    std::uint32_t offset = 0;  // relative to the data base
};

enum class Rpf9Status {
    Ok,
    NotAnRpf9,      // magic mismatch
    ShortHeader,    // fewer than 0x40 bytes
    BadGeometry,    // geometry does not fit the file
    EncryptedToc,   // entry table is ciphertext; needs a decryptor
    BadEntryType,   // parsed an entry whose type is not 1, 2 or 6
};

const char* to_string(Rpf9Status status);

// Reader over an in-memory archive image. Holds no ownership.
class Rpf9Archive {
public:
    // Parses the header only. `data` must outlive the archive. `size` is how
    // many bytes of it are readable; `fileSize` is the archive's real length when
    // only its front was loaded (0 means "same as size").
    static Rpf9Status open(const std::uint8_t* data, std::uint64_t size, Rpf9Archive& out);
    static Rpf9Status open(const std::uint8_t* data, std::uint64_t size, std::uint64_t fileSize,
                           Rpf9Archive& out);

    const Rpf9Header& header() const { return m_header; }
    const Rpf9Layout& layout() const { return m_layout; }
    std::uint64_t archiveSize() const { return m_fileSize; }
    std::uint64_t loadedSize() const { return m_size; }

    // True when the entry table looks like ciphertext: at least one entry's type
    // is not 1, 2 or 6. Retail archives all report true.
    bool tocLooksEncrypted() const;

    // Parses the entry table as plaintext. Call `decrypt` first (or pass a
    // decryptor here) for a retail archive. On EncryptedToc/BadEntryType the
    // entries are left empty rather than partially filled.
    Rpf9Status readEntries(std::vector<Rpf9Entry>& out) const;

    // Same, but decrypts entryTableSize bytes in place through `decryptor`.
    // The callback receives the buffer and its length and returns false on
    // failure. Nothing here knows a key.
    using Decryptor = std::function<bool(std::uint8_t* data, std::uint64_t length)>;
    Rpf9Status readEntriesDecrypted(const Decryptor& decryptor,
                                    std::vector<Rpf9Entry>& out);

    // Offset of a type-1 entry's payload, as 0x8e1100 computes it, or 0 when the
    // entry is not a file. `size` stays 0: payload lengths live in the resource
    // table, which is not decoded yet.
    std::uint64_t fileOffset(const Rpf9Entry& entry) const;

    std::string describe() const;

private:
    const std::uint8_t* m_data = nullptr;
    std::uint64_t m_size = 0;
    std::uint64_t m_fileSize = 0;
    Rpf9Header m_header{};
    Rpf9Layout m_layout{};
};

}  // namespace gta6::file

#endif  // GTA6_FILE_PACKFILE_RPF9_H
