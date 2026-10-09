#pragma once
#include "eb/game_version.hpp"
#include <array>
#include <cstdint>
#include <span>
#include <vector>
namespace eb::native::cutscenes::coffee {
// Immutable authored scripts and the two regional flyover font domains.
// US preserves the source's 128 metric lookahead, including neighboring bytes.
class Resources {
public:
  Resources(std::span<const std::uint8_t>,GameVersion);
  GameVersion version() const noexcept { return version_; }
  std::span<const std::uint8_t> script(unsigned selector) const;
  const std::array<std::uint16_t,4> &palette() const noexcept { return palette_; }
  unsigned advance(std::uint16_t encoded) const;
  std::span<const std::uint8_t> strip(std::uint16_t encoded,unsigned strip) const;
  std::array<std::uint8_t,36> packed_glyph(std::uint16_t encoded,unsigned shift) const;
  std::uint16_t name_glyph(std::uint8_t encoded) const;
private:
  GameVersion version_;
  std::array<std::vector<std::uint8_t>,2> scripts_;
  std::array<std::uint16_t,4> palette_{};
  std::array<std::uint8_t,128> metrics_{};
  std::vector<std::uint8_t> font_;
  std::array<std::uint8_t,224> name_map_{};
};
}
