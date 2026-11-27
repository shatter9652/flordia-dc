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
#include <utility>
#include <vector>

namespace gta6::file {

// '9FPR' read as a little-endian dword, the value 0x8e0990 compares against.
inline constexpr std::uint32_t kRpf9Magic = 0x52504639u;

// Column hashes: the little-endian u64 at the start of each 24-byte column
// record in the table at C. Two of these are named by what the image does with
// them rather than by what they are called.
inline constexpr std::uint64_t kColFileEntry = 0x33F70DFAF2C50989ull;
inline constexpr std::uint64_t kColResourceEntry = 0xBA180AFB232D1B4Bull;
inline constexpr std::uint64_t kColCryptoRecord = 0x286030A358A789FBull;
inline constexpr std::uint64_t kColFileId = 0x73BCB72DCE74F11Full;

// A 4-byte indexed column. 0x1cc1900 compares each element against a
// caller-supplied u32 and, on a match, resolves the row and checks a type
// byte, so this is the archive's equality-searched key (a name hash). The
// retail archives do not store it sorted, so the linear-scan branch runs.
inline constexpr std::uint64_t kColLookupKey = 0xB7076B6245D35FB5ull;

// The archive's single direct column (flags != 0), one u64 per row. The value
// appears nowhere in the image, as a 64-bit immediate or as either 32-bit
// half, so the game never looks this column up by hash -- it is addressed by
// row. It is the companion half of the 128-bit asset id whose first half is
// kColFileId; that pairing is the reading the evidence supports but it is not
// separately proven here.
inline constexpr std::uint64_t kColDirect64 = 0xB6F5BDB2C66DA2E9ull;

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
    BadColumnTable, // column table or its flags do not add up
    BadRowIndex,    // row index does not fit the table of contents
    NoEntryColumn,  // no file-entry and no resource-entry column
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
    const std::uint8_t* data() const { return m_data; }
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

// ---------------------------------------------------------------------------
// The column store behind the header.
//
// The table of contents is not an array of entries: it is a small column
// store. Behind the 0x40-byte header sit a section table, a block of section
// payloads, a column table, a row index and the column data. Rows are files;
// each column is one attribute of every file, addressed through the row index
// unless the column is marked direct.
//
//   A = 0x40            section table: nsec x { u16 id, u16, u32 offset from B }
//   B = A + r16(nsec*8) block of bsz bytes holding the sections
//   C = r16(B + bsz)    column table: ncol x 24 bytes
//   D = C + ncol*24     row index: rows x (indexed columns) x w bytes
//   T = align8(D + ..)  column data; a flag-0 column's elements start at
//                       T + offset, a flag-1 column's at idx_end, one per row
//
// Decryption is two chained runs and is supplied by the caller, because no key
// ships with this code:
//   [A, B) then [B, B+bsz-tail)          header key, one chained CBC run
//   [B+bsz-tail, idx_end)                the key and IV named by section 1,
//                                        the chain restarting for types 3..5
//   [idx_end, toc_end)                   plaintext

// One 24-byte column record. Only the first 0x14 bytes are read.
struct Rpf9Column {
    std::uint64_t hash = 0;      // +0x00  kCol* constant
    std::uint32_t count = 0;     // +0x08  elements in the column
    std::uint32_t offset = 0;    // +0x0C  from T, for an indexed column
    std::uint16_t elemSize = 0;  // +0x10
    std::uint16_t flags = 0;     // +0x12  0 = indexed, non-zero = direct

    bool direct() const { return flags != 0; }
};

// Section 1's record, and the same shape stored per file in kColCryptoRecord.
struct Rpf9CryptoRecord {
    std::uint32_t keyId = 0;       // +0x00
    std::uint16_t kind = 0;        // +0x04  0x11 = stream cipher
    std::uint8_t iv[16] = {};      // +0x06
    std::uint64_t pattern[5] = {}; // +0x18  first, on, off, tail, ?
};

// One row that carries a file entry or a resource entry.
struct Rpf9File {
    std::uint32_t row = 0;
    std::uint64_t offset = 0;      // absolute, from the start of the archive
    std::uint32_t flags = 0;       // file entry: bits 40..63 of q
    std::uint64_t stored = 0;      // bytes on disk
    std::uint64_t unpacked = 0;    // bytes after decompression

    // Set when the row came from the resource-entry column instead. A resource
    // is prefixed with 16 zero bytes and its data starts after them.
    bool resource = false;
    std::uint32_t resourceType = 0;
    std::uint64_t resourceQ = 0;

    bool hasCrypto = false;
    Rpf9CryptoRecord crypto{};

    bool hasFileId = false;
    std::uint64_t fileId = 0;

    bool hasLookupKey = false;
    std::uint32_t lookupKey = 0;

    bool hasDirect64 = false;
    std::uint64_t direct64 = 0;

    // Where the payload starts inside the stored bytes.
    std::uint32_t dataStart() const { return resource ? 16u : 0u; }
};

// What the table of contents needs from a cipher. Contexts are opaque handles
// the caller owns; nothing here knows a key.
class Rpf9Cipher {
public:
    virtual ~Rpf9Cipher() = default;
    virtual bool headerKey(std::uint8_t selector, std::uint32_t& ctx) = 0;
    virtual bool blockKey(std::uint32_t keyId, const std::uint8_t iv[16],
                          std::uint32_t& ctx) = 0;
    virtual bool blockReset(std::uint32_t ctx, const std::uint8_t iv[16]) = 0;
    virtual bool blockDecrypt(std::uint32_t ctx, std::uint8_t* data,
                              std::uint64_t length) = 0;
    virtual bool streamDecrypt(std::uint32_t keyId, const std::uint8_t iv[16],
                               std::uint8_t* data, std::uint64_t length) = 0;
};

// A decrypted, parsed table of contents. Owns its bytes.
class Rpf9Toc {
public:
    // Reads and decrypts the table of contents of `archive`.
    static Rpf9Status open(const Rpf9Archive& archive, Rpf9Cipher& cipher, Rpf9Toc& out);

    // Parses a table of contents that is already plaintext, e.g. one written
    // out by a tool that decrypted it elsewhere. Validates the header itself.
    static Rpf9Status parse(const std::uint8_t* toc, std::uint64_t size, Rpf9Toc& out);

    const std::vector<std::uint8_t>& raw() const { return m_raw; }
    std::uint64_t tocEnd() const { return m_tocEnd; }
    std::uint64_t idxEnd() const { return m_idxEnd; }
    std::uint64_t rows() const { return m_rows; }
    std::uint32_t indexWidth() const { return m_w; }
    std::uint64_t columnTable() const { return m_c; }
    std::uint64_t rowIndex() const { return m_d; }
    std::uint64_t columnData() const { return m_t; }
    const std::vector<Rpf9Column>& columns() const { return m_columns; }
    // Section id and its offset from B, in table order.
    const std::vector<std::pair<std::uint16_t, std::uint32_t>>& sections() const {
        return m_sections;
    }

    // Index of a column by hash, or -1.
    int findColumn(std::uint64_t hash) const;

    // Element index of `row` in `column`. False when the row has no value.
    bool index(std::uint32_t column, std::uint32_t row, std::uint32_t& element) const;

    // Pointer to element `element` of `column`, or null when out of range.
    const std::uint8_t* cell(std::uint32_t column, std::uint32_t element) const;

    // Every row that has a file entry or a resource entry.
    Rpf9Status files(std::vector<Rpf9File>& out) const;

private:
    static Rpf9Status layout(Rpf9Toc& out);

    std::vector<std::uint8_t> m_raw;
    std::vector<Rpf9Column> m_columns;
    std::vector<std::uint32_t> m_indexed;  // column indices with flags == 0
    std::vector<std::pair<std::uint16_t, std::uint32_t>> m_sections;
    std::uint64_t m_tocEnd = 0;
    std::uint64_t m_idxEnd = 0;
    std::uint64_t m_rows = 0;
    std::uint64_t m_a = 0x40;
    std::uint64_t m_b = 0;
    std::uint64_t m_c = 0;
    std::uint64_t m_d = 0;
    std::uint64_t m_t = 0;
    std::uint32_t m_w = 0;
    std::uint16_t m_nsec = 0;
    std::uint16_t m_ncol = 0;
    std::uint16_t m_n22 = 0;
    std::uint32_t m_bsz = 0;
    std::uint32_t m_tail = 0;
};

}  // namespace gta6::file

#endif  // GTA6_FILE_PACKFILE_RPF9_H
