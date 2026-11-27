#include "packfile_rpf9.h"

#include <cstdio>
#include <cstring>

namespace gta6::file {
namespace {

std::uint16_t rd16(const std::uint8_t* p) {
    return static_cast<std::uint16_t>(p[0] | (p[1] << 8));
}

std::uint32_t rd32(const std::uint8_t* p) {
    return static_cast<std::uint32_t>(p[0]) | (static_cast<std::uint32_t>(p[1]) << 8) |
           (static_cast<std::uint32_t>(p[2]) << 16) | (static_cast<std::uint32_t>(p[3]) << 24);
}

std::uint64_t rd64(const std::uint8_t* p) {
    return static_cast<std::uint64_t>(rd32(p)) |
           (static_cast<std::uint64_t>(rd32(p + 4)) << 32);
}

// align_up with a power-of-two alignment, the form the open path uses
// ((x + a - 1) & -a).
std::uint64_t align_up(std::uint64_t value, std::uint64_t alignment) {
    if (alignment < 2) {
        return value;
    }
    return (value + alignment - 1) & ~(alignment - 1);
}

bool knownType(std::uint16_t type) {
    return type == 1 || type == 2 || type == 6;
}

}  // namespace

const char* to_string(Rpf9Status status) {
    switch (status) {
        case Rpf9Status::Ok: return "ok";
        case Rpf9Status::NotAnRpf9: return "not an RPF9 (magic mismatch)";
        case Rpf9Status::ShortHeader: return "short header";
        case Rpf9Status::BadGeometry: return "geometry does not fit the file";
        case Rpf9Status::EncryptedToc: return "entry table is encrypted";
        case Rpf9Status::BadEntryType: return "entry type is not 1, 2 or 6";
        case Rpf9Status::BadColumnTable: return "column table does not add up";
        case Rpf9Status::BadRowIndex: return "row index does not fit the table";
        case Rpf9Status::NoEntryColumn: return "no file-entry or resource-entry column";
    }
    return "unknown";
}

Rpf9Status Rpf9Archive::open(const std::uint8_t* data, std::uint64_t size, Rpf9Archive& out) {
    return open(data, size, size, out);
}

Rpf9Status Rpf9Archive::open(const std::uint8_t* data, std::uint64_t size, std::uint64_t fileSize,
                             Rpf9Archive& out) {
    if (data == nullptr || size < 0x40) {
        return Rpf9Status::ShortHeader;
    }

    Rpf9Header& h = out.m_header;
    h.magic = rd32(data + 0x00);
    if (h.magic != kRpf9Magic) {
        return Rpf9Status::NotAnRpf9;
    }
    h.tocSizeA = rd32(data + 0x04);
    h.tocSizeB = rd32(data + 0x08);
    h.nameHeapSize = rd32(data + 0x0C);
    std::memcpy(h.nonce, data + 0x10, sizeof(h.nonce));
    h.unknown18 = rd16(data + 0x18);
    h.entryCount = rd16(data + 0x1A);
    h.extraTableSize = rd32(data + 0x1C);
    h.tableRowsA = rd16(data + 0x20);
    h.tableRowsB = rd16(data + 0x22);
    h.tableStride = rd32(data + 0x24);
    h.checksum = rd32(data + 0x28);
    h.keyId = data[0x2C];
    h.flags = data[0x2D];
    h.mode = data[0x2E];
    h.pad2F = data[0x2F];
    h.pageSize = rd32(data + 0x30);

    out.m_data = data;
    out.m_size = size;
    out.m_fileSize = fileSize != 0 ? fileSize : size;

    // Geometry, transcribed from 0x8e0990 (bVar24 = flags bit 0 clear):
    //   base   = (hdr + 0x40) rounded to 16 (encrypted) or 4 (plain)
    //   entries= base
    //   +count = (entries + count*8 + 7 + enc*8) & mask
    //   +extra = (hdr[0x1C] + previous + 7 + enc*8) & mask
    //   block  = (keyId-1 + previous + rowsA*0x18) & ~(keyId-1)
    //   blockSize = (rowsA - rowsB) * (stride * keyId), rounded to 8
    const std::uint64_t alignment = h.tableAlignment();
    const std::uint64_t enc = h.flags & 1u;

    Rpf9Layout& l = out.m_layout;
    l.entryTable = align_up(0x40, alignment);
    // Mask is -8 for plaintext and -16 for encrypted ((bVar24 << 3) | -16).
    l.entryTableSize = align_up(static_cast<std::uint64_t>(h.entryCount) * 8u + 7u + enc * 8u,
                                h.encrypted() ? 16u : 8u);
    l.extraTable = align_up(l.entryTable + l.entryTableSize + enc * 8u, alignment);
    l.dataStart = align_up(l.extraTable + h.extraTableSize + enc * 8u, alignment);
    // Type-1 expression in the open path: ((count*8+0xF) & ~0xF) + 0x40 + hdr[0x1C].
    l.filePayloadBase = 0x40 + align_up(static_cast<std::uint64_t>(h.entryCount) * 8u, 16u) +
                        h.extraTableSize;
    l.blockTable = align_up(static_cast<std::uint64_t>(h.keyId ? h.keyId - 1 : 0) +
                                l.dataStart + static_cast<std::uint64_t>(h.tableRowsA) * 0x18u,
                            h.keyId ? h.keyId : 1u);
    const std::uint64_t rowDelta = h.tableRowsA > h.tableRowsB ? h.tableRowsA - h.tableRowsB : 0;
    l.blockTableSize = align_up(rowDelta * (static_cast<std::uint64_t>(h.tableStride) * h.keyId), 8);

    // The open path's decrypt range: {data + dataStart, tocSizeB + pageSize - dataStart}.
    const std::uint64_t spanEnd = static_cast<std::uint64_t>(h.tocSizeB) + h.pageSize;
    l.decryptSpan = spanEnd > l.dataStart ? spanEnd - l.dataStart : 0;

    if (l.dataStart > out.m_fileSize || l.entryTable >= size) {
        return Rpf9Status::BadGeometry;
    }
    return Rpf9Status::Ok;
}

bool Rpf9Archive::tocLooksEncrypted() const {
    if (m_header.entryCount == 0 || m_layout.entryTableSize < 8) {
        return false;
    }
    const std::uint64_t offset = m_layout.entryTable;
    if (offset + 8 > m_size) {
        return true;
    }
    // One known type is enough to call it plaintext: ciphertext hitting 1, 2 or 6
    // by chance is possible, all entries hitting it is not.
    for (std::uint16_t i = 0; i < m_header.entryCount; ++i) {
        const std::uint64_t at = offset + static_cast<std::uint64_t>(i) * 8;
        if (at + 8 > m_size) {
            return true;
        }
        if (knownType(rd16(m_data + at))) {
            return false;
        }
    }
    return true;
}

Rpf9Status Rpf9Archive::readEntries(std::vector<Rpf9Entry>& out) const {
    out.clear();
    if (m_data == nullptr) {
        return Rpf9Status::ShortHeader;
    }
    if (m_header.entryCount == 0) {
        return Rpf9Status::Ok;
    }
    const std::uint64_t first = m_layout.entryTable;
    const std::uint64_t bytes = static_cast<std::uint64_t>(m_header.entryCount) * 8;
    if (first + bytes > m_size) {
        return Rpf9Status::BadGeometry;
    }
    if (tocLooksEncrypted()) {
        return Rpf9Status::EncryptedToc;
    }

    std::vector<Rpf9Entry> parsed;
    parsed.reserve(m_header.entryCount);
    for (std::uint16_t i = 0; i < m_header.entryCount; ++i) {
        const std::uint8_t* p = m_data + first + static_cast<std::uint64_t>(i) * 8;
        Rpf9Entry entry;
        entry.type = rd16(p);
        entry.offset = rd32(p + 4);
        if (!knownType(entry.type)) {
            return Rpf9Status::BadEntryType;
        }
        parsed.push_back(entry);
    }
    out = std::move(parsed);
    return Rpf9Status::Ok;
}

Rpf9Status Rpf9Archive::readEntriesDecrypted(const Decryptor& decryptor,
                                             std::vector<Rpf9Entry>& out) {
    out.clear();
    if (m_data == nullptr) {
        return Rpf9Status::ShortHeader;
    }
    const std::uint64_t first = m_layout.entryTable;
    const std::uint64_t bytes = static_cast<std::uint64_t>(m_header.entryCount) * 8;
    if (first + bytes > m_size) {
        return Rpf9Status::BadGeometry;
    }
    if (!m_header.encrypted() || !tocLooksEncrypted()) {
        return readEntries(out);
    }
    if (!decryptor) {
        return Rpf9Status::EncryptedToc;
    }

    std::vector<std::uint8_t> table(m_data + first, m_data + first + bytes);
    if (!decryptor(table.data(), static_cast<std::uint64_t>(table.size()))) {
        return Rpf9Status::EncryptedToc;
    }

    std::vector<Rpf9Entry> parsed;
    parsed.reserve(m_header.entryCount);
    for (std::uint16_t i = 0; i < m_header.entryCount; ++i) {
        const std::uint8_t* p = table.data() + static_cast<std::uint64_t>(i) * 8;
        Rpf9Entry entry;
        entry.type = rd16(p);
        entry.offset = rd32(p + 4);
        if (!knownType(entry.type)) {
            return Rpf9Status::BadEntryType;
        }
        parsed.push_back(entry);
    }
    out = std::move(parsed);
    return Rpf9Status::Ok;
}

std::uint64_t Rpf9Archive::fileOffset(const Rpf9Entry& entry) const {
    if (entry.type != 1) {
        return 0;
    }
    // 0x8e1100: region = data + align(count*8) + 0x40 + hdr[0x1C]; the entry's
    // offset is added to the data base the caller passes in.
    return m_layout.filePayloadBase + entry.offset;
}

std::string Rpf9Archive::describe() const {
    char buffer[1024];
    const Rpf9Header& h = m_header;
    const Rpf9Layout& l = m_layout;
    std::snprintf(buffer, sizeof(buffer),
                  "magic=RPF9 file=%llu loaded=%llu\n"
                  "  tocSizeA=0x%x tocSizeB=0x%x nameHeap=0x%x pageSize=0x%x\n"
                  "  entries=%u extraTable=0x%x rowsA=%u rowsB=%u stride=%u\n"
                  "  keyId=%u flags=0x%02x mode=%u aligned=%u encrypted=%s\n"
                  "  layout: entries@0x%llx (0x%llx) extra@0x%llx data@0x%llx\n"
                  "          payload@0x%llx block@0x%llx (0x%llx) decryptSpan=0x%llx\n"
                  "  toc: %s",
                  static_cast<unsigned long long>(m_fileSize),
                  static_cast<unsigned long long>(m_size), h.tocSizeA, h.tocSizeB,
                  h.nameHeapSize, h.pageSize, h.entryCount, h.extraTableSize, h.tableRowsA,
                  h.tableRowsB, h.tableStride, h.keyId, h.flags, h.mode, h.tableAlignment(),
                  h.encrypted() ? "yes" : "no", static_cast<unsigned long long>(l.entryTable),
                  static_cast<unsigned long long>(l.entryTableSize),
                  static_cast<unsigned long long>(l.extraTable),
                  static_cast<unsigned long long>(l.dataStart),
                  static_cast<unsigned long long>(l.filePayloadBase),
                  static_cast<unsigned long long>(l.blockTable),
                  static_cast<unsigned long long>(l.blockTableSize),
                  static_cast<unsigned long long>(l.decryptSpan),
                  tocLooksEncrypted() ? "ciphertext" : "plaintext");
    return std::string(buffer);
}

// ---------------------------------------------------------------------------
// Column store

Rpf9Status Rpf9Toc::parse(const std::uint8_t* toc, std::uint64_t size, Rpf9Toc& out) {
    if (toc == nullptr || size < 0x40) {
        return Rpf9Status::ShortHeader;
    }
    if (rd32(toc) != kRpf9Magic) {
        return Rpf9Status::NotAnRpf9;
    }
    out.m_raw.assign(toc, toc + size);
    out.m_columns.clear();
    out.m_indexed.clear();
    out.m_sections.clear();
    return layout(out);
}

// Reads the geometry, the column table and the section table out of a
// plaintext table of contents. Every offset is validated against the buffer.
Rpf9Status Rpf9Toc::layout(Rpf9Toc& out) {
    const std::uint8_t* b = out.m_raw.data();
    const std::uint64_t size = out.m_raw.size();
    if (b == nullptr || size < 0x40) {
        return Rpf9Status::ShortHeader;
    }
    if (rd32(b) != kRpf9Magic) {
        return Rpf9Status::NotAnRpf9;
    }

    out.m_tocEnd = rd32(b + 0x04);
    out.m_idxEnd = rd32(b + 0x08);
    out.m_nsec = rd16(b + 0x1A);
    out.m_bsz = rd32(b + 0x1C);
    out.m_ncol = rd16(b + 0x20);
    out.m_n22 = rd16(b + 0x22);
    out.m_rows = rd32(b + 0x24);
    out.m_w = b[0x2C];
    out.m_tail = rd32(b + 0x30);

    if (out.m_tocEnd > size || out.m_idxEnd > out.m_tocEnd) {
        return Rpf9Status::BadGeometry;
    }

    const std::uint64_t a = 0x40;
    const std::uint64_t bb = a + align_up(static_cast<std::uint64_t>(out.m_nsec) * 8, 16);
    const std::uint64_t c = align_up(bb + out.m_bsz, 16);
    const std::uint64_t d = c + static_cast<std::uint64_t>(out.m_ncol) * 24;
    if (d > out.m_raw.size()) {
        return Rpf9Status::BadColumnTable;
    }

    out.m_a = a;
    out.m_b = bb;
    out.m_c = c;
    out.m_d = d;

    out.m_columns.clear();
    out.m_indexed.clear();
    for (std::uint16_t i = 0; i < out.m_ncol; ++i) {
        const std::uint8_t* p = b + c + static_cast<std::uint64_t>(i) * 24;
        Rpf9Column col;
        col.hash = rd64(p);
        col.count = rd32(p + 8);
        col.offset = rd32(p + 12);
        col.elemSize = rd16(p + 16);
        col.flags = rd16(p + 18);
        if (col.flags == 0) {
            out.m_indexed.push_back(i);
        }
        out.m_columns.push_back(col);
    }

    // Every column is either indexed or one of the n22 direct columns.
    if (out.m_indexed.size() + out.m_n22 != out.m_ncol) {
        return Rpf9Status::BadColumnTable;
    }
    if (!out.m_indexed.empty() && (out.m_w < 1 || out.m_w > 4)) {
        return Rpf9Status::BadRowIndex;
    }

    const std::uint64_t t =
        align_up(d + static_cast<std::uint64_t>(out.m_indexed.size()) * out.m_rows * out.m_w, 8);
    if (t > out.m_raw.size()) {
        return Rpf9Status::BadRowIndex;
    }
    out.m_t = t;

    out.m_sections.clear();
    for (std::uint16_t i = 0; i < out.m_nsec; ++i) {
        const std::uint8_t* p = b + a + static_cast<std::uint64_t>(i) * 8;
        out.m_sections.emplace_back(rd16(p), rd32(p + 4));
    }
    return Rpf9Status::Ok;
}

Rpf9Status Rpf9Toc::open(const Rpf9Archive& archive, Rpf9Cipher& cipher, Rpf9Toc& out) {
    const std::uint8_t* src = archive.data();
    if (src == nullptr) {
        return Rpf9Status::ShortHeader;
    }

    const std::uint64_t tocEnd = rd32(src + 0x04);
    const std::uint64_t idxEnd = rd32(src + 0x08);
    if (tocEnd < 0x40 || tocEnd > (1ull << 28) || tocEnd > archive.loadedSize() ||
        idxEnd > tocEnd) {
        return Rpf9Status::BadGeometry;
    }

    out.m_raw.assign(src, src + tocEnd);
    out.m_columns.clear();
    out.m_indexed.clear();
    out.m_sections.clear();

    const std::uint64_t a = 0x40;
    const std::uint64_t bb = a + align_up(static_cast<std::uint64_t>(rd16(src + 0x1A)) * 8, 16);
    const std::uint32_t bsz = rd32(src + 0x1C);
    const std::uint32_t tail = rd32(src + 0x30);
    const std::uint8_t selector = src[0x2E];
    if (bb + bsz > idxEnd || tail > bsz) {
        return Rpf9Status::BadGeometry;
    }

    if (selector != 0) {
        // The header key drives one chained run over the section table and the
        // block, and the block's last `tail` bytes are held back for the next
        // key's run.
        if (((selector & 1u) + 1u) != 2u) {
            return Rpf9Status::BadGeometry;
        }
        std::uint32_t ctx = 0;
        if (!cipher.headerKey(static_cast<std::uint8_t>(selector >> 1), ctx)) {
            return Rpf9Status::EncryptedToc;
        }
        if (!cipher.blockDecrypt(ctx, out.m_raw.data() + a, bb - a)) {
            return Rpf9Status::EncryptedToc;
        }
        if (!cipher.blockDecrypt(ctx, out.m_raw.data() + bb, bsz - tail)) {
            return Rpf9Status::EncryptedToc;
        }
    }

    // Section 1 names the key and IV for the rest of the index.
    std::uint32_t sectionOffset = 0;
    bool haveSection = false;
    for (std::uint16_t i = 0; i < rd16(src + 0x1A); ++i) {
        const std::uint8_t* p = out.m_raw.data() + a + static_cast<std::uint64_t>(i) * 8;
        if (rd16(p) == 1) {
            sectionOffset = rd32(p + 4);
            haveSection = true;
            break;
        }
    }
    if (!haveSection) {
        return Rpf9Status::BadGeometry;
    }

    const std::uint64_t rec = bb + sectionOffset;
    if (rec + 22 > out.m_raw.size()) {
        return Rpf9Status::BadGeometry;
    }
    const std::uint32_t keyId = rd32(out.m_raw.data() + rec);
    const std::uint16_t kind = rd16(out.m_raw.data() + rec + 4);
    // Copy the IV out: the record it lives in is about to be decrypted.
    std::uint8_t iv[16] = {};
    std::memcpy(iv, out.m_raw.data() + rec + 6, sizeof(iv));

    std::uint32_t ctx = 0;
    if (!cipher.blockKey(keyId, iv, ctx)) {
        return Rpf9Status::EncryptedToc;
    }

    const std::uint64_t s0 = bb + bsz - tail;
    if (tail != 0) {
        if (!cipher.blockDecrypt(ctx, out.m_raw.data() + s0, tail)) {
            return Rpf9Status::EncryptedToc;
        }
        if (kind >= 3 && kind <= 5) {
            cipher.blockReset(ctx, iv);
        }
    }
    if (idxEnd > bb + bsz) {
        if (!cipher.blockDecrypt(ctx, out.m_raw.data() + bb + bsz, idxEnd - (bb + bsz))) {
            return Rpf9Status::EncryptedToc;
        }
    }

    return layout(out);
}

int Rpf9Toc::findColumn(std::uint64_t hash) const {
    for (std::size_t i = 0; i < m_columns.size(); ++i) {
        if (m_columns[i].hash == hash) {
            return static_cast<int>(i);
        }
    }
    return -1;
}

bool Rpf9Toc::index(std::uint32_t column, std::uint32_t row, std::uint32_t& element) const {
    if (column >= m_columns.size() || row >= m_rows) {
        return false;
    }
    const Rpf9Column& col = m_columns[column];
    if (col.direct()) {
        // A direct column has one element per row, in row order.
        element = row;
        return true;
    }

    int position = -1;
    for (std::size_t i = 0; i < m_indexed.size(); ++i) {
        if (m_indexed[i] == column) {
            position = static_cast<int>(i);
            break;
        }
    }
    if (position < 0) {
        return false;
    }

    const std::uint64_t at = m_d + (static_cast<std::uint64_t>(row) * m_indexed.size() +
                                     static_cast<std::uint64_t>(position)) *
                                        m_w;
    if (at + m_w > m_raw.size()) {
        return false;
    }

    std::uint32_t value = 0;
    for (std::uint32_t k = 0; k < m_w; ++k) {
        value |= static_cast<std::uint32_t>(m_raw[at + k]) << (8 * k);
    }
    const std::uint32_t none = (m_w >= 4) ? 0xFFFFFFFFu : ((1u << (8 * m_w)) - 1u);
    if (value == none) {
        return false;
    }
    element = value;
    return true;
}

const std::uint8_t* Rpf9Toc::cell(std::uint32_t column, std::uint32_t element) const {
    if (column >= m_columns.size()) {
        return nullptr;
    }
    const Rpf9Column& col = m_columns[column];
    if (col.elemSize == 0) {
        return nullptr;
    }
    const std::uint64_t base = col.direct() ? m_idxEnd : m_t + col.offset;
    const std::uint64_t at = base + static_cast<std::uint64_t>(element) * col.elemSize;
    if (at + col.elemSize > m_raw.size()) {
        return nullptr;
    }
    return m_raw.data() + at;
}

Rpf9Status Rpf9Toc::files(std::vector<Rpf9File>& out) const {
    out.clear();

    const int entryColumn = findColumn(kColFileEntry);
    const int resourceColumn = findColumn(kColResourceEntry);
    if (entryColumn < 0 && resourceColumn < 0) {
        return Rpf9Status::NoEntryColumn;
    }
    if (entryColumn >= 0 && m_columns[entryColumn].elemSize != 24) {
        return Rpf9Status::BadColumnTable;
    }
    if (resourceColumn >= 0 && m_columns[resourceColumn].elemSize != 20) {
        return Rpf9Status::BadColumnTable;
    }

    // Optional companion columns; a wrong element size means the column is not
    // what its hash says it is, so ignore it rather than misread it.
    auto optional = [this](std::uint64_t hash, std::uint16_t elemSize) {
        const int i = findColumn(hash);
        if (i < 0 || m_columns[i].elemSize != elemSize) {
            return -1;
        }
        return i;
    };
    const int cryptoColumn = optional(kColCryptoRecord, 64);
    const int fileIdColumn = optional(kColFileId, 8);
    const int lookupColumn = optional(kColLookupKey, 4);
    const int directColumn = optional(kColDirect64, 8);

    for (std::uint32_t row = 0; row < m_rows; ++row) {
        std::uint32_t element = 0;
        const bool hasFile = entryColumn >= 0 && index(static_cast<std::uint32_t>(entryColumn),
                                                     row, element);
        std::uint32_t resourceElement = 0;
        const bool hasResource =
            resourceColumn >= 0 &&
            index(static_cast<std::uint32_t>(resourceColumn), row, resourceElement);
        if (!hasFile && !hasResource) {
            continue;
        }

        Rpf9File file;
        file.row = row;
        if (hasFile) {
            const std::uint8_t* e = cell(static_cast<std::uint32_t>(entryColumn), element);
            if (e == nullptr) {
                return Rpf9Status::BadColumnTable;
            }
            const std::uint64_t q = rd64(e);
            file.offset = (q & 0xFFFFFFFFFFull) << 4;
            file.flags = static_cast<std::uint32_t>(q >> 40);
            file.stored = rd64(e + 8) << 4;
            file.unpacked = rd64(e + 16);
        } else {
            const std::uint8_t* e =
                cell(static_cast<std::uint32_t>(resourceColumn), resourceElement);
            if (e == nullptr) {
                return Rpf9Status::BadColumnTable;
            }
            const std::uint64_t q = rd64(e);
            file.resource = true;
            file.resourceQ = q;
            file.stored = static_cast<std::uint64_t>(rd32(e + 8)) << 4;
            file.offset = static_cast<std::uint64_t>(rd32(e + 12)) << 4;
            file.unpacked = q & 0xFFFFFFF0ull;
            file.resourceType = rd32(e + 16);
        }

        if (cryptoColumn >= 0) {
            std::uint32_t i = 0;
            if (index(static_cast<std::uint32_t>(cryptoColumn), row, i)) {
                const std::uint8_t* d = cell(static_cast<std::uint32_t>(cryptoColumn), i);
                if (d != nullptr) {
                    file.hasCrypto = true;
                    file.crypto.keyId = rd32(d);
                    file.crypto.kind = rd16(d + 4);
                    std::memcpy(file.crypto.iv, d + 6, sizeof(file.crypto.iv));
                    for (int k = 0; k < 5; ++k) {
                        file.crypto.pattern[k] = rd64(d + 0x18 + k * 8);
                    }
                }
            }
        }
        if (fileIdColumn >= 0) {
            std::uint32_t i = 0;
            if (index(static_cast<std::uint32_t>(fileIdColumn), row, i)) {
                const std::uint8_t* d = cell(static_cast<std::uint32_t>(fileIdColumn), i);
                if (d != nullptr) {
                    file.hasFileId = true;
                    file.fileId = rd64(d);
                }
            }
        }
        if (lookupColumn >= 0) {
            std::uint32_t i = 0;
            if (index(static_cast<std::uint32_t>(lookupColumn), row, i)) {
                const std::uint8_t* d = cell(static_cast<std::uint32_t>(lookupColumn), i);
                if (d != nullptr) {
                    file.hasLookupKey = true;
                    file.lookupKey = rd32(d);
                }
            }
        }
        if (directColumn >= 0) {
            const std::uint8_t* d = cell(static_cast<std::uint32_t>(directColumn), row);
            if (d != nullptr) {
                file.hasDirect64 = true;
                file.direct64 = rd64(d);
            }
        }

        out.push_back(file);
    }
    return Rpf9Status::Ok;
}

}  // namespace gta6::file
