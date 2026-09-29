#pragma once

#include "eb/game_version.hpp"
#include <cstdint>
#include <filesystem>
#include <span>
#include <string>

namespace eb {
// Application path strings are UTF-8 even when the host uses native wide paths.
std::filesystem::path native_path(const std::string &path);
const char *game_basename(GameVersion version);

// Missing battery RAM is a fresh cartridge. Existing data must match the entire
// destination span; stores replace only after the temporary file is closed.
void load_save(const std::string &path, std::span<std::uint8_t> save_ram);
void store_save(const std::string &path, std::span<const std::uint8_t> save_ram);

// Captures consume completed pictures without borrowing or mutating hardware.
void screenshot(const std::string &path, std::span<const std::uint32_t, 256 * 224> pixels);
void presentation_screenshot(const std::string &path, std::span<const std::uint32_t> pixels,
                             int source_width);
} // namespace eb
