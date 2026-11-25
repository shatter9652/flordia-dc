// RAGE AES block -- see data/aes.h for the recovered addresses and the two
// deliberate deviations (no embedded keys, one S-box instead of TE0/TD0).
//
// Reference: MiscRef/GTAVSRC/src/dev_ng/rage/base/src/data/aes.cpp. The
// structure follows it: rijndael_setup, the two ECB primitives, the _mem
// wrappers with the TransformIT sixteen-pass quirk, then class AES.

#include "aes.h"

#include <cstring>

namespace rage {

namespace {

constexpr uint8_t kSbox[256] = {
    0x63, 0x7c, 0x77, 0x7b, 0xf2, 0x6b, 0x6f, 0xc5, 0x30, 0x01, 0x67, 0x2b,
    0xfe, 0xd7, 0xab, 0x76, 0xca, 0x82, 0xc9, 0x7d, 0xfa, 0x59, 0x47, 0xf0,
    0xad, 0xd4, 0xa2, 0xaf, 0x9c, 0xa4, 0x72, 0xc0, 0xb7, 0xfd, 0x93, 0x26,
    0x36, 0x3f, 0xf7, 0xcc, 0x34, 0xa5, 0xe5, 0xf1, 0x71, 0xd8, 0x31, 0x15,
    0x04, 0xc7, 0x23, 0xc3, 0x18, 0x96, 0x05, 0x9a, 0x07, 0x12, 0x80, 0xe2,
    0xeb, 0x27, 0xb2, 0x75, 0x09, 0x83, 0x2c, 0x1a, 0x1b, 0x6e, 0x5a, 0xa0,
    0x52, 0x3b, 0xd6, 0xb3, 0x29, 0xe3, 0x2f, 0x84, 0x53, 0xd1, 0x00, 0xed,
    0x20, 0xfc, 0xb1, 0x5b, 0x6a, 0xcb, 0xbe, 0x39, 0x4a, 0x4c, 0x58, 0xcf,
    0xd0, 0xef, 0xaa, 0xfb, 0x43, 0x4d, 0x33, 0x85, 0x45, 0xf9, 0x02, 0x7f,
    0x50, 0x3c, 0x9f, 0xa8, 0x51, 0xa3, 0x40, 0x8f, 0x92, 0x9d, 0x38, 0xf5,
    0xbc, 0xb6, 0xda, 0x21, 0x10, 0xff, 0xf3, 0xd2, 0xcd, 0x0c, 0x13, 0xec,
    0x5f, 0x97, 0x44, 0x17, 0xc4, 0xa7, 0x7e, 0x3d, 0x64, 0x5d, 0x19, 0x73,
    0x60, 0x81, 0x4f, 0xdc, 0x22, 0x2a, 0x90, 0x88, 0x46, 0xee, 0xb8, 0x14,
    0xde, 0x5e, 0x0b, 0xdb, 0xe0, 0x32, 0x3a, 0x0a, 0x49, 0x06, 0x24, 0x5c,
    0xc2, 0xd3, 0xac, 0x62, 0x91, 0x95, 0xe4, 0x79, 0xe7, 0xc8, 0x37, 0x6d,
    0x8d, 0xd5, 0x4e, 0xa9, 0x6c, 0x56, 0xf4, 0xea, 0x65, 0x7a, 0xae, 0x08,
    0xba, 0x78, 0x25, 0x2e, 0x1c, 0xa6, 0xb4, 0xc6, 0xe8, 0xdd, 0x74, 0x1f,
    0x4b, 0xbd, 0x8b, 0x8a, 0x70, 0x3e, 0xb5, 0x66, 0x48, 0x03, 0xf6, 0x0e,
    0x61, 0x35, 0x57, 0xb9, 0x86, 0xc1, 0x1d, 0x9e, 0xe1, 0xf8, 0x98, 0x11,
    0x69, 0xd9, 0x8e, 0x94, 0x9b, 0x1e, 0x87, 0xe9, 0xce, 0x55, 0x28, 0xdf,
    0x8c, 0xa1, 0x89, 0x0d, 0xbf, 0xe6, 0x42, 0x68, 0x41, 0x99, 0x2d, 0x0f,
    0xb0, 0x54, 0xbb, 0x16,
};

constexpr uint8_t kInvSbox[256] = {
    0x52, 0x09, 0x6a, 0xd5, 0x30, 0x36, 0xa5, 0x38, 0xbf, 0x40, 0xa3, 0x9e,
    0x81, 0xf3, 0xd7, 0xfb, 0x7c, 0xe3, 0x39, 0x82, 0x9b, 0x2f, 0xff, 0x87,
    0x34, 0x8e, 0x43, 0x44, 0xc4, 0xde, 0xe9, 0xcb, 0x54, 0x7b, 0x94, 0x32,
    0xa6, 0xc2, 0x23, 0x3d, 0xee, 0x4c, 0x95, 0x0b, 0x42, 0xfa, 0xc3, 0x4e,
    0x08, 0x2e, 0xa1, 0x66, 0x28, 0xd9, 0x24, 0xb2, 0x76, 0x5b, 0xa2, 0x49,
    0x6d, 0x8b, 0xd1, 0x25, 0x72, 0xf8, 0xf6, 0x64, 0x86, 0x68, 0x98, 0x16,
    0xd4, 0xa4, 0x5c, 0xcc, 0x5d, 0x65, 0xb6, 0x92, 0x6c, 0x70, 0x48, 0x50,
    0xfd, 0xed, 0xb9, 0xda, 0x5e, 0x15, 0x46, 0x57, 0xa7, 0x8d, 0x9d, 0x84,
    0x90, 0xd8, 0xab, 0x00, 0x8c, 0xbc, 0xd3, 0x0a, 0xf7, 0xe4, 0x58, 0x05,
    0xb8, 0xb3, 0x45, 0x06, 0xd0, 0x2c, 0x1e, 0x8f, 0xca, 0x3f, 0x0f, 0x02,
    0xc1, 0xaf, 0xbd, 0x03, 0x01, 0x13, 0x8a, 0x6b, 0x3a, 0x91, 0x11, 0x41,
    0x4f, 0x67, 0xdc, 0xea, 0x97, 0xf2, 0xcf, 0xce, 0xf0, 0xb4, 0xe6, 0x73,
    0x96, 0xac, 0x74, 0x22, 0xe7, 0xad, 0x35, 0x85, 0xe2, 0xf9, 0x37, 0xe8,
    0x1c, 0x75, 0xdf, 0x6e, 0x47, 0xf1, 0x1a, 0x71, 0x1d, 0x29, 0xc5, 0x89,
    0x6f, 0xb7, 0x62, 0x0e, 0xaa, 0x18, 0xbe, 0x1b, 0xfc, 0x56, 0x3e, 0x4b,
    0xc6, 0xd2, 0x79, 0x20, 0x9a, 0xdb, 0xc0, 0xfe, 0x78, 0xcd, 0x5a, 0xf4,
    0x1f, 0xdd, 0xa8, 0x33, 0x88, 0x07, 0xc7, 0x31, 0xb1, 0x12, 0x10, 0x59,
    0x27, 0x80, 0xec, 0x5f, 0x60, 0x51, 0x7f, 0xa9, 0x19, 0xb5, 0x4a, 0x0d,
    0x2d, 0xe5, 0x7a, 0x9f, 0x93, 0xc9, 0x9c, 0xef, 0xa0, 0xe0, 0x3b, 0x4d,
    0xae, 0x2a, 0xf5, 0xb0, 0xc8, 0xeb, 0xbb, 0x3c, 0x83, 0x53, 0x99, 0x61,
    0x17, 0x2b, 0x04, 0x7e, 0xba, 0x77, 0xd6, 0x26, 0xe1, 0x69, 0x14, 0x63,
    0x55, 0x21, 0x0c, 0x7d,
};

// data/aes.cpp stores rcon as 0x01000000, 0x02000000, ... and uses the top
// byte; here the same values are kept as bytes.
constexpr uint8_t kRcon[11] = {0x00, 0x01, 0x02, 0x04, 0x08,
                               0x10, 0x20, 0x40, 0x80, 0x1b, 0x36};

inline uint8_t XTime(uint8_t x) {
    return static_cast<uint8_t>((x << 1) ^ ((x >> 7) * 0x1b));
}

inline uint8_t Mul(uint8_t a, uint8_t b) {
    uint8_t p = 0;
    for (int i = 0; i < 8; ++i) {
        if (b & 1) p = static_cast<uint8_t>(p ^ a);
        uint8_t high = static_cast<uint8_t>(a & 0x80);
        a = static_cast<uint8_t>(a << 1);
        if (high) a = static_cast<uint8_t>(a ^ 0x1b);
        b = static_cast<uint8_t>(b >> 1);
    }
    return p;
}

inline uint32_t Load32BE(const uint8_t* p) {
    return (static_cast<uint32_t>(p[0]) << 24) |
           (static_cast<uint32_t>(p[1]) << 16) |
           (static_cast<uint32_t>(p[2]) << 8) | static_cast<uint32_t>(p[3]);
}

inline uint32_t SubWord(uint32_t w) {
    return (static_cast<uint32_t>(kSbox[(w >> 24) & 0xff]) << 24) |
           (static_cast<uint32_t>(kSbox[(w >> 16) & 0xff]) << 16) |
           (static_cast<uint32_t>(kSbox[(w >> 8) & 0xff]) << 8) |
           static_cast<uint32_t>(kSbox[w & 0xff]);
}

// State is column-major, exactly as FIPS-197 numbers it: byte 4*c+r.
void AddRoundKey(uint8_t* s, const uint32_t* w) {
    for (int c = 0; c < 4; ++c) {
        const uint32_t k = w[c];
        s[4 * c + 0] ^= static_cast<uint8_t>(k >> 24);
        s[4 * c + 1] ^= static_cast<uint8_t>(k >> 16);
        s[4 * c + 2] ^= static_cast<uint8_t>(k >> 8);
        s[4 * c + 3] ^= static_cast<uint8_t>(k);
    }
}

void SubBytes(uint8_t* s) {
    for (int i = 0; i < 16; ++i) s[i] = kSbox[s[i]];
}

void InvSubBytes(uint8_t* s) {
    for (int i = 0; i < 16; ++i) s[i] = kInvSbox[s[i]];
}

void ShiftRows(uint8_t* s) {
    uint8_t t = s[1];
    s[1] = s[5]; s[5] = s[9]; s[9] = s[13]; s[13] = t;
    t = s[2]; s[2] = s[10]; s[10] = t;
    t = s[6]; s[6] = s[14]; s[14] = t;
    t = s[15]; s[15] = s[11]; s[11] = s[7]; s[7] = s[3]; s[3] = t;
}

void InvShiftRows(uint8_t* s) {
    uint8_t t = s[13];
    s[13] = s[9]; s[9] = s[5]; s[5] = s[1]; s[1] = t;
    t = s[2]; s[2] = s[10]; s[10] = t;
    t = s[6]; s[6] = s[14]; s[14] = t;
    t = s[3]; s[3] = s[7]; s[7] = s[11]; s[11] = s[15]; s[15] = t;
}

void MixColumns(uint8_t* s) {
    for (int c = 0; c < 4; ++c) {
        uint8_t* p = s + 4 * c;
        const uint8_t a0 = p[0], a1 = p[1], a2 = p[2], a3 = p[3];
        p[0] = static_cast<uint8_t>(XTime(a0) ^ (XTime(a1) ^ a1) ^ a2 ^ a3);
        p[1] = static_cast<uint8_t>(a0 ^ XTime(a1) ^ (XTime(a2) ^ a2) ^ a3);
        p[2] = static_cast<uint8_t>(a0 ^ a1 ^ XTime(a2) ^ (XTime(a3) ^ a3));
        p[3] = static_cast<uint8_t>((XTime(a0) ^ a0) ^ a1 ^ a2 ^ XTime(a3));
    }
}

void InvMixColumns(uint8_t* s) {
    for (int c = 0; c < 4; ++c) {
        uint8_t* p = s + 4 * c;
        const uint8_t a0 = p[0], a1 = p[1], a2 = p[2], a3 = p[3];
        p[0] = static_cast<uint8_t>(Mul(a0, 0x0e) ^ Mul(a1, 0x0b) ^
                                    Mul(a2, 0x0d) ^ Mul(a3, 0x09));
        p[1] = static_cast<uint8_t>(Mul(a0, 0x09) ^ Mul(a1, 0x0e) ^
                                    Mul(a2, 0x0b) ^ Mul(a3, 0x0d));
        p[2] = static_cast<uint8_t>(Mul(a0, 0x0d) ^ Mul(a1, 0x09) ^
                                    Mul(a2, 0x0e) ^ Mul(a3, 0x0b));
        p[3] = static_cast<uint8_t>(Mul(a0, 0x0b) ^ Mul(a1, 0x0d) ^
                                    Mul(a2, 0x09) ^ Mul(a3, 0x0e));
    }
}

// ---------------------------------------------------------------------------
// cryKeyRing
// ---------------------------------------------------------------------------

struct KeySlot {
    uint32_t id;
    uint8_t key[32];
    bool used;
};

KeySlot g_keys[cryKeyRing::kMaxKeys] = {};

}  // namespace

bool cryKeyRing::Register(uint32_t keyId, const uint8_t* key32) {
    if (key32 == nullptr) return false;
    for (size_t i = 0; i < kMaxKeys; ++i) {
        if (g_keys[i].used && g_keys[i].id == keyId) {
            std::memcpy(g_keys[i].key, key32, 32);
            return true;
        }
    }
    for (size_t i = 0; i < kMaxKeys; ++i) {
        if (!g_keys[i].used) {
            g_keys[i].used = true;
            g_keys[i].id = keyId;
            std::memcpy(g_keys[i].key, key32, 32);
            return true;
        }
    }
    return false;
}

const uint8_t* cryKeyRing::Find(uint32_t keyId) {
    for (size_t i = 0; i < kMaxKeys; ++i) {
        if (g_keys[i].used && g_keys[i].id == keyId) return g_keys[i].key;
    }
    return nullptr;
}

void cryKeyRing::Clear() {
    for (size_t i = 0; i < kMaxKeys; ++i) g_keys[i].used = false;
}

// ---------------------------------------------------------------------------
// rijndael_setup -- the key schedule, FIPS-197 section 5.2
// ---------------------------------------------------------------------------

bool rijndael_setup(const uint8_t* key, int keylen, int numRounds,
                    symmetric_key* skey) {
    if (key == nullptr || skey == nullptr) return false;
    if (keylen != 16 && keylen != 24 && keylen != 32) return false;

    const int nk = keylen / 4;
    int nr = numRounds;
    if (nr == 0) nr = nk + 6;  // 10, 12 or 14
    if (nr < 10 || nr > 14) return false;

    const int words = 4 * (nr + 1);
    for (int i = 0; i < nk; ++i) skey->eK[i] = Load32BE(key + 4 * i);
    for (int i = nk; i < words; ++i) {
        uint32_t temp = skey->eK[i - 1];
        if (i % nk == 0) {
            temp = (temp << 8) | (temp >> 24);          // RotWord
            temp = SubWord(temp) ^ (static_cast<uint32_t>(kRcon[i / nk]) << 24);
        } else if (nk > 6 && i % nk == 4) {
            temp = SubWord(temp);                       // AES-256 extra step
        }
        skey->eK[i] = skey->eK[i - nk] ^ temp;
    }
    skey->nr = nr;
    skey->extraRounds = 0;
    return true;
}

void rijndael_ecb_encrypt(uint8_t* block, const symmetric_key* skey) {
    uint8_t s[16];
    std::memcpy(s, block, 16);
    AddRoundKey(s, skey->eK);
    for (int r = 1; r < skey->nr; ++r) {
        SubBytes(s);
        ShiftRows(s);
        MixColumns(s);
        AddRoundKey(s, skey->eK + 4 * r);
    }
    SubBytes(s);
    ShiftRows(s);
    AddRoundKey(s, skey->eK + 4 * skey->nr);
    std::memcpy(block, s, 16);
}

// Equivalent inverse cipher: the forward schedule is read backwards, which is
// why no separate decryption schedule is kept.
void rijndael_ecb_decrypt(uint8_t* block, const symmetric_key* skey) {
    uint8_t s[16];
    std::memcpy(s, block, 16);
    AddRoundKey(s, skey->eK + 4 * skey->nr);
    for (int r = skey->nr - 1; r >= 1; --r) {
        InvShiftRows(s);
        InvSubBytes(s);
        AddRoundKey(s, skey->eK + 4 * r);
        InvMixColumns(s);
    }
    InvShiftRows(s);
    InvSubBytes(s);
    AddRoundKey(s, skey->eK);
    std::memcpy(block, s, 16);
}

bool rijndael_ecb_encrypt_mem(void* data, unsigned size,
                              const symmetric_key* skey) {
    if (data == nullptr || skey == nullptr) return false;
    auto* p = static_cast<uint8_t*>(data);
    for (unsigned done = 0; done + 16 <= size; done += 16) {
        rijndael_ecb_encrypt(p + done, skey);
    }
    return true;
}

// data/aes.cpp: key ids whose top nibble is 15 run the cipher sixteen times per
// block (the TransformIT multi-key path). Reproduced as written; the mode is
// not reachable from an RPF9 archive, which uses a plain project key.
bool rijndael_ecb_decrypt_mem(void* data, unsigned size,
                              const symmetric_key* skey) {
    if (data == nullptr || skey == nullptr) return false;
    auto* p = static_cast<uint8_t*>(data);
    const int passes = skey->extraRounds == 15 ? 16 : 1;
    for (unsigned done = 0; done + 16 <= size; done += 16) {
        for (int i = 0; i < passes; ++i) rijndael_ecb_decrypt(p + done, skey);
    }
    return true;
}

// ---------------------------------------------------------------------------
// class AES
// ---------------------------------------------------------------------------

AES::AES(uint32_t id) : keyId(id), valid(false) {
    std::memset(&key, 0, sizeof(key));
    if (keyId == 0) keyId = AES_KEY_ID_DEFAULT;
    const uint8_t* raw = cryKeyRing::Find(keyId);
    if (raw == nullptr) return;               // key not supplied: refuse
    valid = rijndael_setup(raw, 32, 0, &key);
    key.extraRounds = static_cast<int>(keyId >> 28);
}

AES::AES(const uint8_t* rawKey32) : keyId(AES_KEY_ID_RAGE), valid(false) {
    std::memset(&key, 0, sizeof(key));
    if (rawKey32 == nullptr) return;
    valid = rijndael_setup(rawKey32, 32, 0, &key);
}

bool AES::Encrypt(void* data, unsigned size) const {
    if (!valid) return false;
    return rijndael_ecb_encrypt_mem(data, size, &key);
}

bool AES::Decrypt(void* data, unsigned size) const {
    if (!valid) return false;
    return rijndael_ecb_decrypt_mem(data, size, &key);
}

bool AES::isTransformITKeyId(uint32_t id) {
    return (id & 0x0FF00000u) == 0x0FE00000u;
}

// `selector` picks the TransformIT key in the retail block. Those per-game keys
// are not in the image, so a TransformIT id is reported rather than guessed.
bool AES::Encrypt(uint32_t id, uint32_t selector, void* data, unsigned size) {
    (void)selector;
    if (isTransformITKeyId(id)) return false;
    AES aes(id);
    return aes.Encrypt(data, size);
}

bool AES::Decrypt(uint32_t id, uint32_t selector, void* data, unsigned size) {
    (void)selector;
    if (isTransformITKeyId(id)) return false;
    AES aes(id);
    return aes.Decrypt(data, size);
}

}  // namespace rage
