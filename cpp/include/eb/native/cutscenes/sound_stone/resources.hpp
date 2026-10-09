#pragma once

#include "eb/game_version.hpp"
#include <array>
#include <cstdint>
#include <span>
#include <vector>

namespace eb::native::cutscenes::sound_stone {
// The authored Sound Stone domains are imported once. UNKNOWN7 deliberately
// consumes the adjacent UNKNOWN8: together they are nine duration words.
class Resources {
public:
  Resources(std::span<const std::uint8_t>, GameVersion);
  GameVersion version() const noexcept { return version_; }
  std::span<const std::uint8_t> graphics() const noexcept { return graphics_; }
  const std::array<std::uint16_t,96> &palette() const noexcept { return palette_; }
  std::uint8_t flag(unsigned i) const { return flags_.at(i); }
  std::uint8_t music(unsigned i) const { return music_.at(i); }
  std::uint16_t duration(unsigned i) const { return durations_.at(i); }
  std::uint8_t x(unsigned i) const { return x_.at(i); }
  std::uint8_t y(unsigned i) const { return y_.at(i); }
  std::uint8_t center_tile(unsigned i) const { return tiles_.at(i); }
  std::uint8_t center_palette(unsigned i) const { return center_palettes_.at(i); }
  std::uint8_t orbit_tile(unsigned i) const { return orbit_tiles_.at(i); }
  std::uint8_t orbit_palette(unsigned i) const { return orbit_palettes_.at(i); }
  std::uint8_t radius(unsigned i, unsigned frame) const { return radii_.at(i).at(frame); }
  std::span<const std::uint8_t> radii(unsigned i) const { return radii_.at(i); }
  // Exact signed Mode7 products returned by COSINE_SINE and COSINE.
  std::array<std::uint16_t,2> motion(std::uint16_t radius, std::uint8_t angle) const noexcept;
private:
  GameVersion version_;
  std::vector<std::uint8_t> graphics_;
  std::array<std::uint16_t,96> palette_{};
  std::array<std::uint8_t,8> flags_{}, x_{}, y_{}, tiles_{}, center_palettes_{}, orbit_tiles_{}, orbit_palettes_{};
  std::array<std::uint8_t,9> music_{};
  std::array<std::uint16_t,9> durations_{};
  std::array<std::vector<std::uint8_t>,9> radii_;
  std::array<std::uint8_t,256> sine_{};
};
}
