// gta6decomp/include/gta6decomp/rage_types.h
//
// Minimal type shim used by every recovered .cpp file in this tree.
//
// Ghidra emits its own primitive spellings (undefined8, undefined4, code,
// longlong, ...) and RAGE's public headers use an aliased style (u32, s32,
// f32, Vec3V, atArray, fwFlags). This header bridges the two so a recovered
// file reads like it belongs in MiscRef/GTAVSRC/src/dev_ng rather than in a
// disassembler listing.
//
// Nothing here is decompiled game code: these are declarations reconstructed
// from GTA V's shipped source layout (MiscRef/GTAVSRC) and RAGE conventions.
// Types whose real layout is unknown are marked RECOVERED_UNKNOWN_SIZE and are
// deliberately opaque; do not assume their size.

#ifndef GTA6DECOMP_RAGE_TYPES_H
#define GTA6DECOMP_RAGE_TYPES_H

#include <stdint.h>
#include <stddef.h>

// ---------------------------------------------------------------------------
// Ghidra primitive spellings
// ---------------------------------------------------------------------------
typedef uint8_t  undefined1;
typedef uint16_t undefined2;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef uint8_t  undefined;
typedef uint8_t  byte;
typedef uint32_t uint;
typedef uint64_t ulong;
typedef int64_t  longlong;
typedef uint64_t ulonglong;
typedef void     code;

// ---------------------------------------------------------------------------
// RAGE scalar aliases (MiscRef/GTAVSRC/src/dev_ng/rage/base/types.h style)
// ---------------------------------------------------------------------------
typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef int8_t   s8;
typedef int16_t  s16;
typedef int32_t  s32;
typedef int64_t  s64;
typedef float    f32;
typedef double   f64;
typedef bool     b32;

typedef u32 joaat_t;   // RAGE name hash (lower-case one-at-a-time)

// ---------------------------------------------------------------------------
// Math / container primitives
// ---------------------------------------------------------------------------
namespace rage {

struct Vector2 { f32 x, y; };

struct Vector3 {
    f32 x, y, z;
    Vector3() : x(0), y(0), z(0) {}
    Vector3(f32 ax, f32 ay, f32 az) : x(ax), y(ay), z(az) {}
};

struct Vector4 { f32 x, y, z, w; };

struct Matrix34 { Vector4 a, b, c; };
struct Matrix44 { Vector4 a, b, c, d; };

struct alignas(16) Vec3V { f32 x, y, z, pad; };

// Dynamic array header used throughout RAGE. Layout is the shipped one:
// pointer, count, capacity. Element stride is type-specific.
template <typename T>
class atArray {
public:
    T*      m_Data;
    u16     m_Count;
    u16     m_Capacity;
};

// Bit flags with a fixed storage width.
template <typename T, typename Storage = u32>
class fwFlags {
public:
    Storage m_Value;
    bool IsSet(T bit) const { return (m_Value & (Storage)bit) != 0; }
    void Set(T bit)        { m_Value |= (Storage)bit; }
    void Clear(T bit)      { m_Value &= ~(Storage)bit; }
};

} // namespace rage

using namespace rage;

// ---------------------------------------------------------------------------
// Opaque recovered types
// ---------------------------------------------------------------------------
// Ghidra names structures it cannot fully type as undefined1[..] or as a
// pointer to an anonymous struct. Where a recovered function passes such a
// value through, the exporter leaves the provider spelling in place and the
// reader should treat it as an opaque handle.
typedef void* RECOVERED_HANDLE;

#endif // GTA6DECOMP_RAGE_TYPES_H
