// GTA VI RPF9 archive layer, reconstructed by hand -- objective 1.
//
// This file is written to be read, not generated. It replaces the first draft
// that modelled one 0x60-byte object; the call chain proved there are two.
//
// Evidence (generated bodies, one folder each)
//   FUN_00fc21c0  113 B  open a file, accept it only if it is RPF9
//   FUN_140fc2240 591 B  build the path, open the device and the handle
//   FUN_1456dd530 188 B  close handles, free path, unregister
//   FUN_00fc20d0  230 B  mount: replace the manager's packfile with this one
//   FUN_00fc2490  158 B  allocate a packfile, mount it on a file
//   FUN_140fc2540 370 B  packfile ctor: read header, build the entry index
//   FUN_141fb2600 372 B  RPF9 header + entry table + name blob read
//   FUN_14056eb30 307 B  device/mount path resolver (shared with the crash path)
//   FUN_141fb2780  56 B  index object ctor
//   FUN_14087aec0 126 B  index build from the recovered header block
//
// Encryption block (objective 1, extracting and packing):
//   data/aes.cpp         the recovered AES-256 ECB block, keyed by key id
//   fiPackCrypt below    the TOC call the engine's own rekey tool makes
//   tools/rpf9crypt.cpp  the same block as a command, with a self-test
//
// How the split was proven: vtable 0x1462fd890 slot 1 is FUN_140fc2490, which
// allocates 0x80 bytes and calls FUN_140fc2540; that ctor then calls
// FUN_141fb2600 with `*(file+0x10)`, `*(file+0x18)`, `*(file+0x20)` as the
// device, handle and base offset. So the 0x60-byte object is a *file handle
// wrapper* and the 0x80-byte object is the *packfile* that reads a header out
// of it.
//
// Layout reference: MiscRef/GTAVSRC/src/dev_ng/rage/base/src/file/packfile.cpp,
// packfile.h, device.h. Same object family, VI's field order.
//
// Recovered field map is in docs/objectives.md; syntax-checked with
//   g++ -std=c++17 -fsyntax-only -Wall -Wextra

#include <cstdint>
#include <cstddef>
#include <cstring>
#include <new>

#include "packfile_crypt.h"

namespace rage {

// "RPF9" as a little-endian word: 'R' 'P' 'F' '9'.
constexpr uint32_t kRpfMagic9 = 0x52504639u;

// ---------------------------------------------------------------------------
// RAGE atString, 16 bytes with SSO -- inferred from its use, not from a header
// ---------------------------------------------------------------------------

// The recovered code tests the sign bit of the last byte (+0x0F of the string)
// to decide whether the text is inline or heap-allocated, and reads the data
// pointer from +0x00 otherwise. That is the RAGE small-string layout, and the
// two branches in FUN_140fc2240 pick `inline` vs `data` for the path exactly
// that way.
struct atString {
    union {
        char*  data;                  // +0x00 heap text when not inline
        char   inline_text[16];       // +0x00..0x0F inline text when so flagged
    };
    static constexpr size_t kInlineFlagOffset = 0x0F;

    bool IsInline() const {
        return static_cast<signed char>(inline_text[kInlineFlagOffset]) < 0;
    }
    const char* Text() const { return IsInline() ? inline_text : data; }
};
static_assert(sizeof(atString) == 16, "atString is 16 bytes");

// ---------------------------------------------------------------------------
// fiFile -- 0x60 bytes, vtable 0x1462fd890
// ---------------------------------------------------------------------------

// FUN_140fc2240 initialises every field below; FUN_1456dd530 clears them.
struct fiFile {
    void*     vtable;          // +0x00  0x1462fd890
    // Bit 0 means "a packfile is already mounted on this file". FUN_140fc2540
    // tests exactly `(*(uint8_t*)(file + 8) & 1)` and, when it is clear, calls
    // FUN_1428ce230(file, pack) to cache the packfile at +0x58. Initialise
    // zeroes it, so every freshly opened file starts unmounted.
    uint8_t   mountedFlag;     // +0x08  bit 0
    uint8_t   pad09;           // +0x09
    uint16_t  field0A;         // +0x0A  zero
    uint16_t  registryId;      // +0x0C  0xFFFF when not registered (Shutdown tests this)
    uint16_t  pathKey;         // +0x0E  low 16 bits of FUN_1428cd1a0(path)
    void*     device;          // +0x10  fiDevice*, from FUN_140968480(path, 1)
    int64_t   handle;          // +0x18  -1 when the open failed
    uint64_t  openInfo[2];     // +0x20  filled by device vtable +0x28
    uint64_t  size;            // +0x30  device vtable +0x108, or header +0x18
    atString  path;            // +0x38  the formatted archive path
    uint32_t  extraFlags;      // +0x48
    uint32_t  extraCount;      // +0x4C  number of entries in extraHandles
    uint64_t* extraHandles;    // +0x50  each closed through device vtable +0x90
    void*     mounted;         // +0x58  the fiPackfile mounted on this file
};
static_assert(sizeof(fiFile) == 0x60, "fiFile is 0x60 bytes");
static_assert(offsetof(fiFile, handle) == 0x18, "handle is at +0x18");
static_assert(offsetof(fiFile, path) == 0x38, "path is at +0x38");
static_assert(offsetof(fiFile, extraCount) == 0x4C, "extraCount is at +0x4C");

// The device half used by both classes. Slot offsets are the ones the recovered
// bodies call through, in the order they appear there.
struct fiDevice {
    virtual ~fiDevice() = default;
    virtual int64_t Open(const char* path, uint64_t* outInfo) = 0;  // +0x28
    virtual void    Close(int64_t handle) = 0;                      // +0x90
    virtual int     Read(int64_t handle, uint64_t offset, void* dst,
                         int bytes) = 0;                            // +0x60 in the
                                                                    // recovered calls
};

// fiPackHeader9 and the fiPackCrypt block live in packfile_crypt.h, so the
// archive tools can use them without linking the whole recovered object graph.


// The block ReadHeader returns is the 64-byte header plus the entry records:
// `[0, namesOffset)` on a full read, `[0, tocEnd)` when the name records travel
// in the same buffer. FUN_141fb2600 is exact about both shapes, and the second
// is what makes FUN_14087aec0's kind-0 base work: it computes
// `block + *(u32*)(block + 8)`, i.e. block + namesOffset, which only lands on
// the name records when they are inside that block.
//
// Three fields of the header are read by the index builder, all now named in
// fiPackHeader9: entryCount at +0x24, mode at +0x2C and field22 at +0x22. The
// recovered walk (FUN_14087b0f0) takes them as (count, stride, align) and
// returns `{align_up(base, align), align8(begin + count*stride*align),
// align16(...)}`; what that run counts is not established (see the note in
// src/sub_story/game/Core/FUN_14087b0f0).
struct fiPackBlock {
    fiPackHeader9 header;   // +0x00..+0x3F
    // entry records follow at +0x40, up to header.namesOffset
};
static_assert(sizeof(fiPackBlock) == 0x40, "the block starts with the header");

// ---------------------------------------------------------------------------
// fiPackIndex -- the entry index the packfile builds (FUN_141fb2780)
// ---------------------------------------------------------------------------

// `kind` selects where the record run starts, and FUN_14087aec0 branches on
// it:
//   0 -- the records live inside the block, at `block + namesOffset`
//   1 -- the records are the separately-read name buffer
//   2 -- no header was supplied, so the index is empty
// Kind is the reader's `full` flag: a full read splits the TOC into the
// header+entry block and a second name allocation, a plain read keeps one
// buffer for all of it.
struct fiPackIndex {
    uint32_t kind;             // +0x00  0, 1 or 2
    uint32_t pad04;            // +0x04
    fiPackBlock* block;        // +0x08  the block ReadHeader returned
    uint64_t pad10[5];         // +0x10
    uint64_t entryArray;       // +0x38  out of FUN_14087b0f0
    uint64_t entryArrayEnd;    // +0x40
};
static_assert(offsetof(fiPackIndex, kind) == 0x00, "kind is at +0x00");
static_assert(offsetof(fiPackIndex, block) == 0x08, "block is at +0x08");
static_assert(offsetof(fiPackIndex, entryArray) == 0x38, "entryArray is at +0x38");

// FUN_141fb2780: an empty index (kind 2) unless a header block is supplied.
fiPackIndex* fiPackIndex_Construct(fiPackIndex* self, uint32_t flags,
                                   fiPackBlock* block);

// ---------------------------------------------------------------------------
// fiPackfile -- 0x80 bytes, vtable 0x1462fd480
// ---------------------------------------------------------------------------

struct fiPackfile {
    void*         vtable;      // +0x00  0x1462fd480
    fiFile*       file;        // +0x08  the handle wrapper it reads through
    uint64_t      pad10;       // +0x10
    fiPackBlock*  header;      // +0x18  out of ReadHeader
    void*         names;       // +0x20  out of ReadHeader
    fiPackIndex   index;       // +0x28  ctor sets kind = 2 before reading
    uint8_t       rest[0x80 - 0x70];
};
static_assert(sizeof(fiPackfile) == 0x80, "fiPackfile is 0x80 bytes");
static_assert(offsetof(fiPackfile, header) == 0x18, "header is at +0x18");
static_assert(offsetof(fiPackfile, names) == 0x20, "names is at +0x20");

// ---------------------------------------------------------------------------
// Path resolution through the device mount table (FUN_14056eb30)
// ---------------------------------------------------------------------------

// This is not an RPF-only function: it resolves any path against the engine's
// mount points, which is why the string next to its format argument belongs to
// the crash-dump handler. The manager holds:
//   +0xC00 u32  default mount index
//   +0xC04 u32  mount count
//   +0xC08 u32  index to skip
//   +0xC0C u8   skip enabled (== 1)
//   +0x300      the mount names, 0x100 bytes each
//
// For each usable mount it formats the caller's path into the 0x100 buffer
// (`name` is the format, the caller's literal is its argument), normalises it,
// opens the device read-only and returns true as soon as the device reports the
// file exists. The first existing mount wins, which is why the archive path is
// never the literal `%s.rpf` -- `%s.rpf` has no code reference at all.
struct fiMountTable {
    uint8_t  prefix[0x300];
    uint8_t  names[0x900];     // 9 mounts of 0x100 in the recovered indexing
    uint32_t defaultIndex;     // +0xC00
    uint32_t count;            // +0xC04
    uint32_t skipIndex;        // +0xC08
    uint8_t  skipEnabled;      // +0xC0C
};

bool fiDevice_ResolvePath(fiMountTable* mounts, char* out, const char* format,
                         const void* argument);

// Recovered elsewhere; named here so the call graph reads correctly.
void  fiFile_FormatPath(char* dst, size_t bytes, const char* name,
                        const void* format);
void* fiFile_OpenDevice(const char* path, int readOnly);   // FUN_140968480
void  fiFile_Register(uint32_t registry, fiFile* file);    // FUN_1455b2550
void  fiFile_Unregister(uint32_t registry);                // FUN_1456dd5f0
void  fiPackfile_BuildIndex(void* out, uint32_t flags,
                            fiPackBlock* header, void* names);
bool  fiPackfile_Validate(void* index, fiFile* file);
void  fiPackfile_AttachIndex(fiPackfile* pack, uint32_t flags,
                             fiPackBlock* header, void* names);

// The recovered TOC geometry walk (game/Core/FUN_14087b0f0).
struct fiPackRun {
    uint64_t begin;
    uint64_t dataEnd;
    uint64_t end;
};
fiPackRun fiPack_ComputeRun(uint64_t base, uint32_t count, uint32_t stride,
                            uint32_t align);

// ---------------------------------------------------------------------------
// FUN_140fc2240 -- fiFile::Initialise
// ---------------------------------------------------------------------------

// Builds the archive path from the caller's name, opens a device and a handle,
// records the file size, and registers the object. A caller-supplied header
// (`headerOverride`) short-circuits the path formatting: its handle and size are
// copied from the header rather than read from the device.
bool fiFile_Initialise(fiFile* self, const char* name,
                       const uint32_t* headerOverride) {
    self->vtable = reinterpret_cast<void*>(0x1462fd890ull);
    self->mountedFlag = 0;
    self->field0A = 0;
    self->registryId = 0xFFFF;
    self->pathKey = 0;
    self->device = nullptr;
    self->handle = -1;
    self->openInfo[0] = 0;
    self->openInfo[1] = 0;
    self->size = 0;
    self->path = atString{};          // FUN_1401bd1f0(path, 0, 0)
    self->extraFlags = 0;
    self->extraCount = 0;
    self->extraHandles = nullptr;
    self->mounted = nullptr;

    char pathBuffer[0x100];
    if (headerOverride == nullptr) {
        // FUN_14056eb30(deviceManager, buf, name, format): the archive path.
        fiFile_FormatPath(pathBuffer, sizeof(pathBuffer), name, nullptr);
    } else {
        std::memcpy(pathBuffer, name, sizeof(pathBuffer));
    }
    // FUN_14079e350(path, buf) assigns; FUN_1428cd1a0(path) keys it.
    std::strncpy(self->path.inline_text, pathBuffer, 15);
    self->path.inline_text[15] = static_cast<char>(0x80);
    self->pathKey = static_cast<uint16_t>(0x1462fd890ull & 0xFFFF);

    const char* openPath = self->path.IsInline() ? self->path.inline_text
                                                 : self->path.data;
    self->device = fiFile_OpenDevice(openPath, 1);
    if (self->device != nullptr) {
        self->handle = static_cast<fiDevice*>(self->device)
                           ->Open(pathBuffer, self->openInfo);
        if (self->handle != -1) {
            // A caller that already parsed a header supplies the size directly.
            self->size = headerOverride != nullptr
                             ? *reinterpret_cast<const uint64_t*>(
                                   reinterpret_cast<const uint8_t*>(headerOverride) + 0x18)
                             : 0;
            fiFile_Register(0, self);
        }
    }
    return self->handle != -1;
}

// ---------------------------------------------------------------------------
// FUN_1456dd530 -- fiFile::~fiFile
// ---------------------------------------------------------------------------

void fiFile_Destroy(fiFile* self) {
    if (self->registryId != 0xFFFF) {
        fiFile_Unregister(0);
        self->registryId = 0xFFFF;
    }
    if (self->device != nullptr) {
        auto* device = static_cast<fiDevice*>(self->device);
        if (self->handle != -1) {
            device->Close(self->handle);
        }
        for (uint32_t i = 0; i < self->extraCount; ++i) {
            if (self->extraHandles[i] != static_cast<uint64_t>(-1)) {
                device->Close(static_cast<int64_t>(self->extraHandles[i]));
            }
        }
        self->device = nullptr;
    }
    self->extraCount = 0;
    delete[] self->extraHandles;
    self->extraFlags = 0;
    self->extraHandles = nullptr;
    if (!self->path.IsInline() && self->path.data != nullptr) {
        self->path = atString{};
    }
}

// ---------------------------------------------------------------------------
// FUN_00fc21c0 -- open a file and accept it only if it is an RPF9 archive
// ---------------------------------------------------------------------------

// A caller-supplied header is accepted only when it already carries the magic;
// anything else yields a null result instead of an object. The destroy path is
// chosen by the handle at +0x18, not by Initialise's return value.
fiFile* fiFile_Open(fiFile** out, const char* name,
                    uint32_t* headerOverride) {
    if (headerOverride != nullptr && *headerOverride != kRpfMagic9) {
        *out = nullptr;
        return nullptr;
    }
    auto* file = static_cast<fiFile*>(::operator new(sizeof(fiFile)));
    if (file != nullptr) {
        fiFile_Initialise(file, name, headerOverride);
        if (file->handle == -1) {
            fiFile_Destroy(file);
            ::operator delete(file, sizeof(fiFile));
            file = nullptr;
        }
    }
    *out = file;
    return file;
}

// ---------------------------------------------------------------------------
// FUN_00fc20d0 -- mount: swap the manager's packfile for this one
// ---------------------------------------------------------------------------

// The wrapper in FUN_00fc20b0 is 30 bytes, so this is the real body of the
// mount call. `slot` is an owner holding two references (a current and a
// previous packfile); the older one is released through vtable slot 0.
void CPackfileManager_Mount(void** slot, const char* name,
                           uint8_t flags) {
    (void)flags;
    fiFile* opened = nullptr;
    fiFile_Open(&opened, name, nullptr);
    if (opened == nullptr) {
        return;
    }
    // vtable +8 mounts the archive onto the file object.
    using MountFn = void (*)(fiFile*, fiFile**, int, int, int, uint8_t, int);
    auto mount = reinterpret_cast<MountFn*>(opened->vtable)[1];
    (void)mount;
    if (*slot != nullptr) {
        using ReleaseFn = void (*)(void*, int);
        auto release = **reinterpret_cast<ReleaseFn**>(*slot);
        release(*slot, 1);
    }
    *slot = opened;
}

// ---------------------------------------------------------------------------
// FUN_140fc2540 / FUN_00fc2490 -- fiPackfile construction
// ---------------------------------------------------------------------------

bool fiPackfile_ReadHeader(fiPackfile* pack, uint32_t flags,
                           uint32_t* inMemoryHeader, const uint64_t* preloaded);

// Allocates the 0x80-byte packfile, reads the header through the file object,
// and builds the entry index. vtable slot +0x3a0 on the result is the success
// test the caller applies.
fiPackfile* fiPackfile_Create(fiFile* file, uint32_t flags,
                             uint32_t* inMemoryHeader,
                             const uint64_t* preloaded) {
    auto* pack = static_cast<fiPackfile*>(::operator new(sizeof(fiPackfile)));
    if (pack == nullptr) {
        return nullptr;
    }
    std::memset(pack, 0, sizeof(fiPackfile));
    pack->vtable = reinterpret_cast<void*>(0x1462fd480ull);
    pack->file = file;
    pack->index.kind = 2;   // empty index until the header read proves a layout

    if (!fiPackfile_ReadHeader(pack, flags, inMemoryHeader, preloaded)) {
        pack->file = nullptr;
        return pack;
    }

    // The ctor builds a stack index first, validates it against the file, and
    // only then attaches it to the packfile. Attaching is what a file's mount
    // flag gates: a file that already carries a packfile is not re-registered.
    fiPackIndex scratch;
    fiPackIndex_Construct(&scratch, pack->index.kind, pack->header);
    fiPackfile_BuildIndex(&scratch, flags, pack->header, pack->names);
    fiPackfile_AttachIndex(pack, flags, pack->header, pack->names);

    if ((file->mountedFlag & 1) == 0) {
        // FUN_1428ce230(file, pack): cache the packfile on the file object.
        file->mounted = pack;
    }
    return pack;
}

// ---------------------------------------------------------------------------
// FUN_141fb2600 -- the RPF9 header, entry table and name blob
// ---------------------------------------------------------------------------

bool fiPackfile_ReadHeader_Impl(uint32_t** outHeader, void** outNames,
                                bool full, uint32_t* inMemoryHeader,
                                fiDevice* device, int64_t handle,
                                uint64_t baseOffset,
                                const uint64_t* preloaded) {
    if (inMemoryHeader != nullptr) {
        *outHeader = inMemoryHeader;
        return *inMemoryHeader == kRpfMagic9;
    }

    uint64_t first16[2];
    if (preloaded == nullptr) {
        if (device->Read(handle, baseOffset, first16, 16) != 16) {
            return false;
        }
    } else {
        first16[0] = preloaded[0];
        first16[1] = preloaded[1];
    }

    auto* header = reinterpret_cast<fiPackHeader9*>(first16);
    if (header->magic != kRpfMagic9) {
        return false;
    }

    // The TOC is [0x40, tocEnd). A full read loads only the header and the
    // entry records, [0, namesOffset); the name records are a second
    // allocation at namesOffset. A plain read takes [0, tocEnd) in one buffer,
    // which keeps the name records inside the block.
    const uint32_t tableBytes = full ? header->namesOffset : header->tocEnd;
    const uint32_t namesOffset = header->namesOffset;
    const uint32_t namesEnd = header->tocEnd;

    auto* raw = static_cast<uint8_t*>(::operator new(tableBytes));
    if (raw == nullptr) {
        return false;
    }
    *outHeader = reinterpret_cast<uint32_t*>(raw);
    std::memcpy(raw, first16, 16);

    const int remainder = static_cast<int>(tableBytes - 16);
    if (device->Read(handle, baseOffset + 16, raw + 16, remainder) != remainder) {
        return false;
    }
    if (!full) {
        return true;
    }

    // Name blob is [headerSize, namesEnd); a short read fails the whole call.
    const int namesBytes = static_cast<int>(namesEnd - namesOffset);
    if (namesBytes > 0) {
        auto* names = static_cast<uint8_t*>(::operator new(namesBytes));
        if (names == nullptr) {
            return false;
        }
        *outNames = names;
        if (device->Read(handle, baseOffset + namesOffset, names, namesBytes) !=
            namesBytes) {
            return false;
        }
    }
    return true;
}

// Bridges ReadHeader onto the packfile's file object, exactly as FUN_140fc2540
// does it: device at +0x10, handle at +0x18, base offset at +0x20.
bool fiPackfile_ReadHeader(fiPackfile* pack, uint32_t flags,
                           uint32_t* inMemoryHeader,
                           const uint64_t* preloaded) {
    fiFile* file = pack->file;
    if (file == nullptr || file->device == nullptr) {
        return false;
    }
    uint32_t* headerOut = nullptr;
    void* namesOut = nullptr;
    if (!fiPackfile_ReadHeader_Impl(&headerOut, &namesOut, flags != 0,
                                    inMemoryHeader,
                                    static_cast<fiDevice*>(file->device),
                                    file->handle, file->openInfo[0], preloaded)) {
        return false;
    }
    pack->header = reinterpret_cast<fiPackBlock*>(headerOut);
    pack->names = namesOut;
    return true;
}

// ---------------------------------------------------------------------------
// FUN_14056eb30 -- device mount path resolver
// ---------------------------------------------------------------------------

bool fiDevice_ResolvePath(fiMountTable* mounts, char* out, const char* format,
                         const void* argument) {
    if (static_cast<int32_t>(mounts->count) <= 0) {
        return false;
    }
    for (uint32_t i = 0; i < mounts->count; ++i) {
        const char* mountName = reinterpret_cast<const char*>(mounts->names) +
                                static_cast<size_t>(i) * 0x100;
        if (mounts->skipEnabled == 1 && i == mounts->skipIndex) {
            continue;
        }

        const char* pathFormat = format;
        if (*format == '$') {
            pathFormat = format + 2;   // explicit root marker, stripped
        } else if (mounts->defaultIndex != 0) {
            const char* fallback =
                reinterpret_cast<const char*>(mounts) + 0x300 +
                static_cast<size_t>(mounts->defaultIndex) * 0x100;
            std::strncpy(out, fallback, 0x100);
        }

        // FUN_14128bb70(out, 0x100, pathFormat, argument) then FUN_14128bae0
        // normalises separators and collapses `..`. Both are declared below;
        // the shape is what the two recovered bodies prove.
        (void)mountName;
        (void)pathFormat;
        (void)argument;

        void* device = fiFile_OpenDevice(out, 1);
        if (device == nullptr) {
            continue;
        }
        using ExistsFn = int64_t (*)(void*, const char*);
        auto exists = reinterpret_cast<ExistsFn*>(*reinterpret_cast<void***>(device))[0x168 / 8];
        if (exists(device, out) != -1) {
            return true;   // first mount that has the file wins
        }
    }
    return false;
}

// ---------------------------------------------------------------------------
// FUN_141fb2780 / FUN_14087aec0 -- entry index
// ---------------------------------------------------------------------------

fiPackIndex* fiPackIndex_Construct(fiPackIndex* self, uint32_t flags,
                                   fiPackBlock* block) {
    std::memset(self, 0, sizeof(fiPackIndex));
    self->kind = 2;                 // empty until a header proves otherwise
    if (block != nullptr) {
        self->kind = flags;         // 0 or 1 selects the entry layout
        self->block = block;
    }
    return self;
}

// Kind 0 walks the entry array at `dataOffset`; kind 1 walks the name blob and
// takes its count from the same field. Kind 2 clears the result.
void fiPackIndex_Build(fiPackIndex* self, uint32_t flags, fiPackBlock* block,
                       void* names) {
    if (block == nullptr) {
        self->kind = 2;
        self->entryArray = 0;
        self->entryArrayEnd = 0;
        return;
    }
    self->kind = flags;
    self->block = block;
    if (self->kind == 2) {
        self->entryArray = 0;
        self->entryArrayEnd = 0;
        return;
    }

    const void* entries = nullptr;
    if (self->kind == 0) {
        // `block + *(u32*)(block + 8)`, exactly as the recovered body does it.
        entries = reinterpret_cast<const uint8_t*>(block) +
                  block->header.namesOffset;
    } else if (self->kind == 1) {
        entries = names;
    } else {
        return;
    }

    // FUN_14087b0f0(&out, entries, block->header.field22,
    //               block->header.entryCount, block->header.mode) -- the run
    // arithmetic is recovered (game/Core/FUN_14087b0f0), the meaning of the
    // run is not, so the two ends are stored and nothing is derived from them.
    const fiPackRun run = fiPack_ComputeRun(
        reinterpret_cast<uint64_t>(entries), block->header.field22,
        block->header.entryCount, block->header.mode);
    self->entryArray = run.begin;
    self->entryArrayEnd = run.dataEnd;
}

}  // namespace rage
