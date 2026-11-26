// shadertool -- inspect, compile and (eventually) decompile console shaders.
//
// The three commands are deliberately separate, because they have very
// different amounts of shipped machinery behind them:
//
//   info       parses a GNM shader container. The layout is public in the
//              console SDK headers and in ps5ref/AnyDevKit/3rdparty/opengnm
//              (include/gnm_shaderbinary.h): a 0x10 GnmShaderFileHeader with
//              magic "Shdr", then a per-stage struct, then the RDNA/GCN code.
//              This command is exact for that format.
//
//   compile    drives the shader compiler Sony ships in the SDK
//              (orbis-psslc.exe / orbis-wave-psslc.exe for PS4,
//              prospero-wave-psslc.exe for PS5) under Wine. Wrapping the real
//              compiler is the only honest way to produce a binary the console
//              accepts: PSSL is proprietary and its back end is not described
//              anywhere in the SDK.
//
//   decompile  dispatches to a built shader recompiler when one is supplied.
//              Recovering PSSL/HLSL from GCN or RDNA2 code needs a full ISA
//              decoder, an SSA IR and a structurizer; the AnyPS5 tree in
//              ps5ref vendors exactly that (core/shader/recompiler:
//              RdnaDecoder, IntermediateRepresentation, Structurizer), and
//              this command refuses rather than inventing output when that
//              build is absent.
//
// Build: make -C tools/shadertool

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>

namespace {

struct GnmShaderFileHeader {
    uint32_t magic;
    uint16_t vermajor;
    uint16_t verminor;
    uint8_t type;
    uint8_t headersizedwords;
    uint8_t auxdata;
    uint8_t targetgpumodes;
    uint32_t unused;
};

struct GnmShaderCommonData {
    uint32_t shadersize : 23;
    uint32_t isusingsrt : 1;
    uint32_t numinputusageslots : 8;
    uint16_t embeddedconstantbufferdqwords;
    uint16_t scratchsizeperthreaddwords;
};

constexpr uint32_t kShaderFileMagic = 0x72646853;  // "Shdr"
constexpr char kBinaryInfoMagic[] = "OrbShdr";

const char* stageName(uint8_t type) {
    switch (type) {
    case 0x1: return "vertex";
    case 0x2: return "pixel";
    case 0x3: return "geometry";
    case 0x4: return "compute";
    case 0x5: return "export";
    case 0x6: return "local";
    case 0x7: return "hull";
    default: return "unknown";
    }
}

uint32_t crc32(const uint8_t* data, size_t size) {
    uint32_t crc = 0xFFFFFFFFu;
    for (size_t i = 0; i < size; i++) {
        crc ^= data[i];
        for (int bit = 0; bit < 8; bit++) {
            crc = (crc >> 1) ^ (0xEDB88320u & (~(crc & 1u) + 1u));
        }
    }
    return ~crc;
}

bool readFile(const char* path, std::vector<uint8_t>* out) {
    FILE* file = std::fopen(path, "rb");
    if (file == nullptr) {
        std::fprintf(stderr, "shadertool: cannot open %s\n", path);
        return false;
    }
    std::fseek(file, 0, SEEK_END);
    long size = std::ftell(file);
    std::fseek(file, 0, SEEK_SET);
    if (size <= 0) {
        std::fclose(file);
        std::fprintf(stderr, "shadertool: %s is empty\n", path);
        return false;
    }
    out->resize(static_cast<size_t>(size));
    size_t got = std::fread(out->data(), 1, out->size(), file);
    std::fclose(file);
    return got == out->size();
}

int commandInfo(const char* path) {
    std::vector<uint8_t> bytes;
    if (!readFile(path, &bytes)) {
        return 1;
    }

    size_t offset = 0;
    bool found = false;
    for (size_t i = 0; i + sizeof(GnmShaderFileHeader) <= bytes.size(); i++) {
        uint32_t magic = 0;
        std::memcpy(&magic, bytes.data() + i, sizeof(magic));
        if (magic == kShaderFileMagic) {
            offset = i;
            found = true;
            break;
        }
    }
    std::printf("file\t%s\nsize\t%zu\n", path, bytes.size());
    if (!found) {
        std::printf("format\tunknown\n"
                    "note\tno \"Shdr\" GNM container; PS5 Wave binaries and DXBC/SPIR-V\n"
                    "\twrappers are not parsed yet, only hashed\n");
        std::printf("sha-free\tcrc32=%08x\n", crc32(bytes.data(), bytes.size()));
        return 0;
    }

    GnmShaderFileHeader header;
    std::memcpy(&header, bytes.data() + offset, sizeof(header));
    std::printf("format\tGNM shader container at 0x%zx\n", offset);
    std::printf("version\t%u.%u\n", header.vermajor, header.verminor);
    std::printf("stage\t%s (0x%02x)\n", stageName(header.type), header.type);
    std::printf("headersizedwords\t%u\n", header.headersizedwords);
    std::printf("targetgpumodes\t0x%02x (%s)\n", header.targetgpumodes,
                header.targetgpumodes == 2 ? "NEO/PS4 Pro" : "BASE");

    size_t commonAt = offset + sizeof(GnmShaderFileHeader);
    if (commonAt + sizeof(GnmShaderCommonData) <= bytes.size()) {
        GnmShaderCommonData common;
        std::memcpy(&common, bytes.data() + commonAt, sizeof(common));
        std::printf("common\tshadersize=%u dwords, srt=%u, usageslots=%u, "
                    "embeddedcb=%u dqwords, scratch=%u dwords\n",
                    common.shadersize, common.isusingsrt, common.numinputusageslots,
                    common.embeddedconstantbufferdqwords,
                    common.scratchsizeperthreaddwords);
        uint64_t codeBytes = uint64_t(common.shadersize) * 4
                           + uint64_t(common.embeddedconstantbufferdqwords) * 16;
        std::printf("codebytes\t%llu\n", static_cast<unsigned long long>(codeBytes));
    }

    // The embedded OrbShdr copy carries the length, hashes and a CRC32 that
    // covers everything up to itself; that is the only integrity check the
    // container offers, so report it rather than assume it holds.
    for (size_t i = offset; i + 8 + 0x1c <= bytes.size(); i++) {
        if (std::memcmp(bytes.data() + i, kBinaryInfoMagic, 7) != 0) {
            continue;
        }
        const uint8_t* info = bytes.data() + i;
        uint32_t bits = 0;
        std::memcpy(&bits, info + 8, sizeof(bits));
        uint32_t length = (bits >> 4) & 0xFFFFFFu;
        uint32_t sourceType = (bits >> 2) & 0x3u;
        uint32_t binaryType = bits & 0xFu;
        uint32_t hash0 = 0, hash1 = 0, storedCrc = 0;
        std::memcpy(&hash0, info + 0x10, 4);
        std::memcpy(&hash1, info + 0x14, 4);
        std::memcpy(&storedCrc, info + 0x18, 4);
        uint32_t computed = crc32(bytes.data(), i + 0x18);
        std::printf("binaryinfo\tat 0x%zx version=%u type=%u source=%u length=%u\n",
                    i, info[7], binaryType, sourceType, length);
        std::printf("hash\t%08x%08x\n", hash0, hash1);
        std::printf("crc32\tstored=%08x computed=%08x %s\n", storedCrc, computed,
                    storedCrc == computed ? "match" : "MISMATCH");
        break;
    }
    return 0;
}

struct Compiler {
    const char* exe;
    const char* sdk;  // directory the executable lives in, for the record
};

Compiler pickCompiler(const std::string& target) {
    if (target == "ps4") {
        return {"orbis-wave-psslc.exe",
                "SonySDKS/PS4/2.500/host_tools/bin"};
    }
    if (target == "ps5") {
        return {"prospero-wave-psslc.exe",
                "SonySDKS/PS5/11.000/host_tools/bin"};
    }
    return {nullptr, nullptr};
}

std::string shellQuote(const std::string& text) {
    std::string out = "'";
    for (char c : text) {
        if (c == '\'') {
            out += "'\\''";
        } else {
            out += c;
        }
    }
    out += "'";
    return out;
}

int commandCompile(int argc, char** argv) {
    std::string target, input, output, sdkRoot;
    std::vector<std::string> extra;
    for (int i = 0; i < argc; i++) {
        std::string arg = argv[i];
        if (arg == "--target" && i + 1 < argc) {
            target = argv[++i];
        } else if (arg == "-o" && i + 1 < argc) {
            output = argv[++i];
        } else if (arg == "--sdk" && i + 1 < argc) {
            sdkRoot = argv[++i];
        } else if (arg == "--") {
            for (int j = i + 1; j < argc; j++) {
                extra.push_back(argv[j]);
            }
            break;
        } else if (input.empty()) {
            input = arg;
        } else {
            extra.push_back(arg);
        }
    }
    if (input.empty() || target.empty()) {
        std::fprintf(stderr,
                     "usage: shadertool compile <shader.pssl> --target ps4|ps5 "
                     "-o <out.bin> [--sdk DIR] [-- psslc args]\n");
        return 2;
    }
    Compiler compiler = pickCompiler(target);
    if (compiler.exe == nullptr) {
        std::fprintf(stderr, "shadertool: unknown target '%s' (ps4 or ps5)\n",
                     target.c_str());
        return 2;
    }
    if (output.empty()) {
        output = input + (target == "ps4" ? ".ps4.bin" : ".ps5.bin");
    }
    if (sdkRoot.empty()) {
        const char* fromEnv = std::getenv("PS_SDK_ROOT");
        sdkRoot = fromEnv != nullptr ? fromEnv : ".";
    }

    std::string command = "wine " + shellQuote(sdkRoot + "/" + compiler.sdk + "/"
                                               + compiler.exe) + " "
                        + shellQuote(input) + " -o " + shellQuote(output);
    for (const std::string& arg : extra) {
        command += " " + shellQuote(arg);
    }
    std::printf("exec\t%s\n", command.c_str());
    // The compiler is Sony's; this tool only resolves and runs it, so a missing
    // Wine or a missing SDK is reported instead of simulated.
    int status = std::system(command.c_str());
    if (status != 0) {
        std::fprintf(stderr,
                     "shadertool: compiler failed (status %d). Needs Wine and the "
                     "SDK at %s/%s; see tools/shadertool/README.md.\n",
                     status, sdkRoot.c_str(), compiler.sdk);
        return 1;
    }
    std::printf("ok\t%s\n", output.c_str());
    return 0;
}

int commandDecompile(int argc, char** argv) {
    std::string input, recompiler;
    for (int i = 0; i < argc; i++) {
        std::string arg = argv[i];
        if (arg == "--recompiler" && i + 1 < argc) {
            recompiler = argv[++i];
        } else if (input.empty()) {
            input = arg;
        }
    }
    if (input.empty()) {
        std::fprintf(stderr,
                     "usage: shadertool decompile <shader.bin> [--recompiler PATH]\n");
        return 2;
    }
    if (!recompiler.empty()) {
        std::string command = shellQuote(recompiler) + " " + shellQuote(input);
        std::printf("exec\t%s\n", command.c_str());
        return std::system(command.c_str()) == 0 ? 0 : 1;
    }
    std::fprintf(stderr,
                 "shadertool: no shader recompiler configured, so nothing is "
                 "decompiled.\n\n"
                 "Recovering PSSL/HLSL needs an ISA decoder, an SSA IR and a "
                 "structurizer; neither the PS4 nor the PS5 SDK ships one. The "
                 "AnyPS5 tree in ps5ref vendors the pieces:\n"
                 "  ps5ref/AnyDevKit/3rdparty/AnyPS5/core/shader/recompiler/\n"
                 "    RdnaDecoder/ IntermediateRepresentation/ Structurizer/\n"
                 "  ps5ref/AnyDevKit/3rdparty/opengnm-psbc/libpsbc  "
                 "(SPIR-V -> GCN binary, the compile direction)\n"
                 "Build one of those and pass --recompiler PATH. Until then this "
                 "command refuses rather than printing guessed source.\n");
    return 1;
}

}  // namespace

int main(int argc, char** argv) {
    if (argc < 2) {
        std::fprintf(stderr,
                     "usage: shadertool <info|compile|decompile> ...\n"
                     "  info      <file>                     parse a GNM shader container\n"
                     "  compile   <in.pssl> --target ps4|ps5 -o out\n"
                     "  decompile <file> [--recompiler PATH]\n");
        return 2;
    }
    std::string command = argv[1];
    if (command == "info") {
        if (argc < 3) {
            std::fprintf(stderr, "usage: shadertool info <file>\n");
            return 2;
        }
        return commandInfo(argv[2]);
    }
    if (command == "compile") {
        return commandCompile(argc - 2, argv + 2);
    }
    if (command == "decompile") {
        return commandDecompile(argc - 2, argv + 2);
    }
    std::fprintf(stderr, "shadertool: unknown command '%s'\n", command.c_str());
    return 2;
}
