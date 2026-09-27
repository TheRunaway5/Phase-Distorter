#pragma once

#include "eb/game_version.hpp"

#include <cstdint>
#include <filesystem>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace eb {
// Offsets are within the headerless ROM address image, not CPU bus addresses.
// Generated layouts list the data gaps left between compiled instructions.
struct AssetRange {
    std::uint32_t offset;
    std::uint32_t size;
};

struct AssetLayout {
    // Source-declared instructions only; all asset ranges contain zeroes.
    std::span<const std::uint8_t> code_image;
    // Ordered, disjoint gaps. Import fills these; compiled bytes stay fixed.
    std::span<const AssetRange> ranges;
    // Identifies the complete reconstructed ROM, including code and assets.
    std::string_view rom_sha256;
};

// Non-owning metadata backed by generated, process-lifetime storage.
struct AssetProfile {
    GameVersion version;
    std::string_view title;
    AssetLayout layout;
};

struct GameAssets {
    GameVersion version = GameVersion::US;
    std::string title;
    // Owns the verified, complete address image used to initialize the bus.
    std::vector<std::uint8_t> image;
};

std::string sha256(std::span<const std::uint8_t> bytes);

// Both paths are user-selected/local. Import never modifies the donor ROM.
// Replacement is atomic and validation finishes before the previous pack changes.
void import_assets(const std::filesystem::path& rom_path,
                   const std::filesystem::path& pack_path, const AssetLayout& layout);
std::vector<std::uint8_t> load_assets(const std::filesystem::path& pack_path,
                                    const AssetLayout& layout);
// Identification uses file contents, never the extension or supplied filename.
// The returned reference belongs to profiles and has the same lifetime.
const AssetProfile& identify_rom(const std::filesystem::path& path, std::span<const AssetProfile> profiles);
// Multi-profile helpers keep the selected compiled program and its assets paired.
GameVersion import_game_assets(const std::filesystem::path& rom_path, const std::filesystem::path& pack_path,
                               std::span<const AssetProfile> profiles);
GameAssets load_game_assets(const std::filesystem::path& pack_path, std::span<const AssetProfile> profiles);
} // namespace eb
