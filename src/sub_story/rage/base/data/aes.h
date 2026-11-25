// GTA VI RAGE encryption block, reconstructed -- objective 1 support code.
//
// Recovered from game_scarlett_master.exe (Xbox Series X, 1.0.2.1). The block
// is rage's own data/aes.cpp, not CNG: the image imports
// BCryptOpenAlgorithmProvider, BCryptGenRandom and BCryptCloseAlgorithmProvider
// and *no* BCryptEncrypt / BCryptDecrypt (imports/gdk_symbols.tsv), and the
// AES tables are theirs:
//
//   FUN_0215f06c  RVA 0x215f06c  the cipher core and key schedule; it is the
//                                only code that loads TE0 (0x5fc1b20),
//                                TD0 (0x5fc2b50) and rcon (0x5fc2b20)
//   FUN_021612ed  RVA 0x21612ed  second TE0 user
//   FUN_0216200a  RVA 0x216200a  second TD0 user
//
// Evidence and the RPF wiring are in docs/rpf-crypto.md.
//
// Deviations from the retail block, both deliberate:
//   * The 32-byte key arrays are read from rage::cryKeyRing instead of being
//     literals. The key is game data; the repo publishes the algorithm only.
//   * The cipher is written with one S-box instead of TE0/TD0 plus AES-NI.
//     The output is the same (FIPS-197); tools/rpf9crypt.cpp selftest checks
//     it against the standard vector.
//
// Syntax-checked with g++ -std=c++17 -fsyntax-only -Wall -Wextra.

#ifndef GTA6DECOMP_RAGE_BASE_DATA_AES_H
#define GTA6DECOMP_RAGE_BASE_DATA_AES_H

#include <cstddef>
#include <cstdint>

namespace rage {

// Key identifiers, from data/aes.h in MiscRef/GTAVSRC. The low 28 bits are the
// project key; the top nibble is a key-generation counter (see extraRounds).
constexpr uint32_t AES_KEY_ID_MASK              = 0x0FFFFFFFu;
constexpr uint32_t AES_KEY_ID_GTA4              = 0x0FFFFFFFu;
constexpr uint32_t AES_KEY_ID_RDR2              = 0x0FFFFFFDu;
constexpr uint32_t AES_KEY_ID_GTA5_PC           = 0x0FFFFFF9u;
constexpr uint32_t AES_KEY_ID_GTA5_PS3          = 0x0FFFFFF8u;
constexpr uint32_t AES_KEY_ID_GTA5_360          = 0x0FFFFFF7u;
constexpr uint32_t AES_KEY_ID_RAGE              = 0x0FFFFF00u;
constexpr uint32_t AES_KEY_ID_WBC_GTA5_PC       = 0x0FEFFFFFu;
constexpr uint32_t AES_MULTIKEY_ID_GTA5_PS4     = 0x0FFEFFFFu;
constexpr uint32_t AES_MULTIKEY_ID_GTA5_XBOXONE = 0x0FFFEFFFu;

// A key id of 0 means "the default for this project".
constexpr uint32_t AES_KEY_ID_DEFAULT = AES_KEY_ID_RAGE;

// The retail block holds the 32-byte arrays as file-scope data in .rdata (the
// GTA V Durango key is still in this image at RVA 0x65b5758). A reconstruction
// must not embed them, so a host registers the keys it is allowed to use.
//
// Tools supply them from an ignored keyring file:
//   <key id, hex> <64 hex digits>
struct cryKeyRing {
    static constexpr size_t kMaxKeys = 32;

    static bool Register(uint32_t keyId, const uint8_t* key32);
    static const uint8_t* Find(uint32_t keyId);
    static void Clear();
};

// Expanded key. The retail layout is 60 encryption dwords, 60 decryption
// dwords and a round count; only the forward schedule is needed for the
// equivalent inverse cipher, so decryption reads the same words backwards.
struct alignas(16) symmetric_key {
    uint32_t eK[60];
    int nr;
    int extraRounds;
};

// data/aes.cpp: rijndael_setup, rijndael_ecb_encrypt/decrypt and the _mem
// wrappers. `keylen` is 32 for every RAGE key; 16 and 24 also work.
bool rijndael_setup(const uint8_t* key, int keylen, int numRounds,
                    symmetric_key* skey);
void rijndael_ecb_encrypt(uint8_t* block, const symmetric_key* skey);
void rijndael_ecb_decrypt(uint8_t* block, const symmetric_key* skey);
bool rijndael_ecb_encrypt_mem(void* data, unsigned size,
                              const symmetric_key* skey);
bool rijndael_ecb_decrypt_mem(void* data, unsigned size,
                              const symmetric_key* skey);

// class AES, same surface as the retail one. ECB mode, no IV, size is rounded
// down to 16 bytes.
class AES {
public:
    // Resolves `keyId` through cryKeyRing. IsValid() is false when the key was
    // not registered, and Encrypt/Decrypt then refuse instead of guessing.
    explicit AES(uint32_t keyId = 0);
    explicit AES(const uint8_t* rawKey32);

    bool Encrypt(void* data, unsigned size) const;
    bool Decrypt(void* data, unsigned size) const;

    static bool Encrypt(uint32_t keyId, uint32_t selector, void* data,
                        unsigned size);
    static bool Decrypt(uint32_t keyId, uint32_t selector, void* data,
                        unsigned size);

    // 0x0FE00000 ids select the TransformIT key set (data/aes.cpp). Those keys
    // are not recoverable from the image, so the block reports them and stops.
    static bool isTransformITKeyId(uint32_t keyId);

    bool IsValid() const { return valid; }
    uint32_t GetKeyId() const { return keyId; }

private:
    symmetric_key key;
    uint32_t keyId;
    bool valid;
};

}  // namespace rage

#endif  // GTA6DECOMP_RAGE_BASE_DATA_AES_H
