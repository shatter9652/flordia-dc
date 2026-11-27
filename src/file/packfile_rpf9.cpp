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

}  // namespace gta6::file
