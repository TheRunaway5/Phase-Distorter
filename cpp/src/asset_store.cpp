#include "eb/asset_store.hpp"

// The distributable keeps translated code; the user's local pack supplies the
// remaining ROM data. Every load reconstructs and verifies the same full image,
// so a pack cannot silently mix one game's data with another game's code.

#include <algorithm>
#include <array>
#include <bit>
#include <chrono>
#include <fstream>
#include <random>
#include <stdexcept>
#include <system_error>

#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#endif

namespace eb {
namespace {
// Pack v1: magic, image size, range count, 64 ASCII SHA-256 characters, followed
// by (offset, size, payload) records. Integers are explicitly little-endian.
constexpr std::array<std::uint8_t, 8> magic{'E','B','C','D','A','T','A','1'};
constexpr std::size_t header_size = 8 + 4 + 4 + 64;

std::size_t payload_size(const AssetLayout& layout) {
    // Validate generated metadata before it is used for allocation or indexing.
    // Asset gaps must be zero in the template to prevent embedding donor data.
    if (layout.code_image.empty() || layout.code_image.size() > 0x1000000 || layout.rom_sha256.size() != 64 ||
        !std::all_of(layout.rom_sha256.begin(), layout.rom_sha256.end(), [](char c) {
            return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f');
        })) throw std::invalid_argument("Invalid compiled asset layout");
    std::size_t size = 0, end = 0;
    for (const auto& range : layout.ranges) {
        if (!range.size || range.offset < end || range.offset > layout.code_image.size() ||
            range.size > layout.code_image.size() - range.offset)
            throw std::invalid_argument("Invalid compiled asset range");
        end = std::size_t(range.offset) + range.size;
        if (std::any_of(layout.code_image.begin() + range.offset, layout.code_image.begin() + end,
                        [](auto byte) { return byte != 0; }))
            throw std::invalid_argument("Compiled asset range must be empty");
        size += range.size;
    }
    return size;
}

std::vector<std::uint8_t> read_file(const std::filesystem::path& path, std::uintmax_t maximum) {
    // Bound allocations to the expected format and reject files that grow while
    // being read. Short reads also fail instead of returning a partial image.
    const auto size = std::filesystem::file_size(path);
    if (size > maximum) throw std::runtime_error("File is too large: " + path.string());
    std::ifstream input(path, std::ios::binary);
    std::vector<std::uint8_t> bytes(static_cast<std::size_t>(size));
    if (!input || !input.read(reinterpret_cast<char*>(bytes.data()), static_cast<std::streamsize>(bytes.size())))
        throw std::runtime_error("Cannot read file: " + path.string());
    if (input.peek() != std::char_traits<char>::eof()) throw std::runtime_error("File changed while reading: " + path.string());
    return bytes;
}

void put32(std::vector<std::uint8_t>& out, std::uint32_t value) {
    for (unsigned shift = 0; shift < 32; shift += 8) out.push_back(static_cast<std::uint8_t>(value >> shift));
}
std::uint32_t get32(std::span<const std::uint8_t> bytes, std::size_t offset) {
    return std::uint32_t(bytes[offset]) | (std::uint32_t(bytes[offset + 1]) << 8) |
           (std::uint32_t(bytes[offset + 2]) << 16) | (std::uint32_t(bytes[offset + 3]) << 24);
}

std::vector<std::uint8_t> decode(std::span<const std::uint8_t> packed, const AssetLayout& layout) {
    const auto size = payload_size(layout);
    // Exact size comes first: short-circuit evaluation protects all header reads.
    // The format deliberately accepts no trailing bytes or alternate layouts.
    if (packed.size() != header_size + layout.ranges.size() * 8 + size ||
        !std::equal(magic.begin(), magic.end(), packed.begin()) ||
        get32(packed, 8) != layout.code_image.size() || get32(packed, 12) != layout.ranges.size() ||
        !std::equal(layout.rom_sha256.begin(), layout.rom_sha256.end(), packed.begin() + 16))
        throw std::runtime_error("Asset pack is incompatible or incomplete. Import your supported ROM again.");
    std::vector<std::uint8_t> image(layout.code_image.begin(), layout.code_image.end());
    // Reinsert only the declared data gaps. Instruction bytes always come from
    // this build's template, then the whole image is checked against the donor.
    std::size_t cursor = header_size;
    for (const auto& range : layout.ranges) {
        if (get32(packed, cursor) != range.offset || get32(packed, cursor + 4) != range.size)
            throw std::runtime_error("Asset pack layout does not match this build. Import your ROM again.");
        cursor += 8;
        std::copy_n(packed.begin() + cursor, range.size, image.begin() + range.offset);
        cursor += range.size;
    }
    if (sha256(image) != layout.rom_sha256)
        throw std::runtime_error("Asset pack data is damaged or does not match this build. Import your ROM again.");
    return image;
}

void atomic_write(const std::filesystem::path& path, std::span<const std::uint8_t> bytes) {
    if (!path.parent_path().empty()) std::filesystem::create_directories(path.parent_path());
    auto temporary = path;
    // A sibling temporary stays on the destination filesystem, allowing rename
    // to replace an existing pack only after writing and closing has succeeded.
    temporary += ".tmp." + std::to_string(std::random_device{}()) + "." +
                 std::to_string(std::chrono::steady_clock::now().time_since_epoch().count());
    try {
        std::ofstream output(temporary, std::ios::binary | std::ios::trunc);
        if (!output || !output.write(reinterpret_cast<const char*>(bytes.data()), static_cast<std::streamsize>(bytes.size())))
            throw std::runtime_error("Cannot write extracted assets: " + path.string());
        output.close();
        if (!output) throw std::runtime_error("Cannot finish extracted assets: " + path.string());
#ifdef _WIN32
        // Windows rename cannot replace an existing file through the POSIX API.
        if (!MoveFileExW(temporary.c_str(), path.c_str(), MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH))
            throw std::system_error(GetLastError(), std::system_category(), "Cannot replace extracted assets");
#else
        std::filesystem::rename(temporary, path);
#endif
    } catch (...) {
        // Failed imports leave a previous good pack intact and remove our temp.
        std::error_code ignored;
        std::filesystem::remove(temporary, ignored);
        throw;
    }
}
} // namespace

std::string sha256(std::span<const std::uint8_t> bytes) {
    // SHA-256, following the operations and constants in RFC 6234 sections 4-6.
    // This compact implementation accepts whole bytes, as used by asset files.
    constexpr std::uint32_t k[64] = {
        0x428a2f98,0x71374491,0xb5c0fbcf,0xe9b5dba5,0x3956c25b,0x59f111f1,0x923f82a4,0xab1c5ed5,
        0xd807aa98,0x12835b01,0x243185be,0x550c7dc3,0x72be5d74,0x80deb1fe,0x9bdc06a7,0xc19bf174,
        0xe49b69c1,0xefbe4786,0x0fc19dc6,0x240ca1cc,0x2de92c6f,0x4a7484aa,0x5cb0a9dc,0x76f988da,
        0x983e5152,0xa831c66d,0xb00327c8,0xbf597fc7,0xc6e00bf3,0xd5a79147,0x06ca6351,0x14292967,
        0x27b70a85,0x2e1b2138,0x4d2c6dfc,0x53380d13,0x650a7354,0x766a0abb,0x81c2c92e,0x92722c85,
        0xa2bfe8a1,0xa81a664b,0xc24b8b70,0xc76c51a3,0xd192e819,0xd6990624,0xf40e3585,0x106aa070,
        0x19a4c116,0x1e376c08,0x2748774c,0x34b0bcb5,0x391c0cb3,0x4ed8aa4a,0x5b9cca4f,0x682e6ff3,
        0x748f82ee,0x78a5636f,0x84c87814,0x8cc70208,0x90befffa,0xa4506ceb,0xbef9a3f7,0xc67178f2};
    std::array<std::uint32_t, 8> hash{0x6a09e667,0xbb67ae85,0x3c6ef372,0xa54ff53a,
                                      0x510e527f,0x9b05688c,0x1f83d9ab,0x5be0cd19};
    const auto padded_size = (bytes.size() + 9 + 63) / 64 * 64;
    const auto bits = std::uint64_t(bytes.size()) * 8;
    // Build each padded block on demand: one marker byte, zero fill, then the
    // original bit length in big-endian order. No second whole-file copy needed.
    for (std::size_t block = 0; block < padded_size; block += 64) {
        std::array<std::uint32_t, 64> words{};
        for (std::size_t index = 0; index < 64; ++index) {
            const auto at = block + index;
            const std::uint8_t value = at < bytes.size() ? bytes[at] : at == bytes.size() ? 0x80 :
                at >= padded_size - 8 ? static_cast<std::uint8_t>(bits >> ((padded_size - 1 - at) * 8)) : 0;
            words[index / 4] |= std::uint32_t(value) << ((3 - index % 4) * 8);
        }
        for (unsigned i = 16; i < 64; ++i) {
            const auto a = words[i - 15], b = words[i - 2];
            words[i] = words[i - 16] + (std::rotr(a, 7) ^ std::rotr(a, 18) ^ (a >> 3)) + words[i - 7] +
                       (std::rotr(b, 17) ^ std::rotr(b, 19) ^ (b >> 10));
        }
        auto state = hash;
        // Unsigned 32-bit arithmetic intentionally wraps modulo 2^32.
        for (unsigned i = 0; i < 64; ++i) {
            const auto e = state[4], a = state[0];
            const auto t1 = state[7] + (std::rotr(e, 6) ^ std::rotr(e, 11) ^ std::rotr(e, 25)) +
                            ((e & state[5]) ^ (~e & state[6])) + k[i] + words[i];
            const auto t2 = (std::rotr(a, 2) ^ std::rotr(a, 13) ^ std::rotr(a, 22)) +
                            ((a & state[1]) ^ (a & state[2]) ^ (state[1] & state[2]));
            for (unsigned j = 7; j > 0; --j) state[j] = state[j - 1];
            state[4] += t1;
            state[0] = t1 + t2;
        }
        for (unsigned i = 0; i < 8; ++i) hash[i] += state[i];
    }
    constexpr char hex[] = "0123456789abcdef";
    std::string result;
    result.reserve(64);
    for (auto word : hash) for (int shift = 28; shift >= 0; shift -= 4) result += hex[(word >> shift) & 15];
    return result;
}

void import_assets(const std::filesystem::path& rom_path, const std::filesystem::path& pack_path,
                   const AssetLayout& layout) {
    payload_size(layout);
    std::error_code ignored;
    // Check both filesystem identity (including hard links) and canonical path
    // spelling before opening any output. The donor must remain untouched.
    if (std::filesystem::equivalent(rom_path, pack_path, ignored) ||
        std::filesystem::weakly_canonical(rom_path) == std::filesystem::weakly_canonical(pack_path))
        throw std::runtime_error("Choose a separate asset-pack destination; the original ROM is never overwritten.");
    const auto rom = read_file(rom_path, layout.code_image.size() + 512);
    std::span<const std::uint8_t> image(rom);
    // Copier headers are recognized by exact excess length, not guessed from
    // contents. Hashing always covers the canonical headerless image.
    if (image.size() == layout.code_image.size() + 512) image = image.subspan(512);
    if (image.size() != layout.code_image.size() || sha256(image) != layout.rom_sha256)
        throw std::runtime_error("This file does not match the selected game version. "
                                 "Choose an unmodified .sfc or .smc dump of your own copy "
                                 "(a 512-byte copier header is accepted).");
    std::vector<std::uint8_t> packed(magic.begin(), magic.end());
    // Pack only asset ranges; the executable already contains the code template.
    put32(packed, static_cast<std::uint32_t>(image.size()));
    put32(packed, static_cast<std::uint32_t>(layout.ranges.size()));
    packed.insert(packed.end(), layout.rom_sha256.begin(), layout.rom_sha256.end());
    for (const auto& range : layout.ranges) {
        put32(packed, range.offset);
        put32(packed, range.size);
        packed.insert(packed.end(), image.begin() + range.offset, image.begin() + range.offset + range.size);
    }
    decode(packed, layout); // Validate reconstruction before replacing an existing good pack.
    atomic_write(pack_path, packed);
}

std::vector<std::uint8_t> load_assets(const std::filesystem::path& pack_path, const AssetLayout& layout) {
    const auto size = header_size + layout.ranges.size() * 8 + payload_size(layout);
    return decode(read_file(pack_path, size), layout);
}

const AssetProfile& identify_rom(const std::filesystem::path& path, std::span<const AssetProfile> profiles) {
    // Read once within the largest supported size, then identify by full digest.
    // Region labels and filenames are not reliable indicators of compatibility.
    std::size_t maximum = 0;
    for (const auto& profile : profiles) maximum = std::max(maximum, profile.layout.code_image.size() + 512);
    const auto bytes = read_file(path, maximum);
    for (const auto& profile : profiles) {
        std::span<const std::uint8_t> image(bytes);
        if (image.size() == profile.layout.code_image.size() + 512) image = image.subspan(512);
        if (image.size() == profile.layout.code_image.size() && sha256(image) == profile.layout.rom_sha256)
            return profile;
    }
    throw std::runtime_error("Unsupported ROM. Select an unmodified US EarthBound or Japanese Mother 2 "
                             "dump from your own copy. Both .sfc and copier-header .smc files are accepted.");
}

GameVersion import_game_assets(const std::filesystem::path& rom_path, const std::filesystem::path& pack_path,
                               std::span<const AssetProfile> profiles) {
    const auto& profile = identify_rom(rom_path, profiles);
    import_assets(rom_path, pack_path, profile.layout);
    return profile.version;
}

GameAssets load_game_assets(const std::filesystem::path& pack_path, std::span<const AssetProfile> profiles) {
    std::size_t maximum = 0;
    for (const auto& profile : profiles)
        maximum = std::max(maximum, header_size + profile.layout.ranges.size() * 8 + payload_size(profile.layout));
    const auto bytes = read_file(pack_path, maximum);
    // The stored digest selects a candidate profile only. decode() still checks
    // all records and hashes the reconstructed image before exposing any data.
    if (bytes.size() >= header_size && std::equal(magic.begin(), magic.end(), bytes.begin())) {
        for (const auto& profile : profiles) {
            if (std::equal(profile.layout.rom_sha256.begin(), profile.layout.rom_sha256.end(), bytes.begin() + 16))
                return {profile.version, std::string(profile.title), decode(bytes, profile.layout)};
        }
    }
    throw std::runtime_error("Unrecognized asset pack. Import your EarthBound or Mother 2 ROM again.");
}
} // namespace eb
