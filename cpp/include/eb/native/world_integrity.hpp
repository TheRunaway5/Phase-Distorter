#pragma once
#include "eb/game_version.hpp"
#include <cstdint>
#include <span>
namespace eb::native {
// Immutable CHECK_HARDWARE checksum input, evaluated only at import. The
// controller's named native callback publishes this exact16-bit difference.
// No instructions are executed, retained or addressed by native gameplay.
std::uint16_t import_world_integrity_difference(std::span<const std::uint8_t>,GameVersion);
} // namespace eb::native
