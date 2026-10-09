#pragma once
#include "eb/game_version.hpp"
#include <array>
#include <span>
#include <vector>
namespace eb::native::cutscenes::cast {
struct NameFormat {std::uint16_t tile{};std::uint8_t columns{};};
// Source-owned Cast data imported once. Name bytes retain their regional
// encoding; no translated strings or source-address callback survives import.
class Resources {
public:
  Resources(std::span<const std::uint8_t>,GameVersion);
  GameVersion version() const noexcept {return version_;}
  // The JP enum omits four US title scripts before EVENT_801.
  std::uint16_t controller_script() const noexcept {return version_==GameVersion::JP?797:801;}
  std::span<const std::uint8_t> header() const noexcept {return header_;}
  std::span<const std::uint8_t> names_graphics() const noexcept {return graphics_;}
  std::span<const std::uint8_t> special_palettes() const noexcept {return special_;}
  const std::array<std::uint16_t,16> &header_palette() const noexcept {return palette_;}
  const std::array<std::uint16_t,128> &sprite_palettes() const noexcept {return sprites_;}
  const NameFormat &format(unsigned index) const {return formats_.at(index);}
  std::span<const std::uint8_t> name(unsigned index) const {return names_.at(index);}
  std::uint16_t party_tile(unsigned index) const {return party_tiles_.at(index);}
  std::span<const std::uint8_t> guardian(unsigned index) const {return guardians_.at(index);}
  std::uint8_t glyph_width(unsigned index) const {return widths_.at(index);}
  std::span<const std::uint8_t> glyph_strip(unsigned index,unsigned strip) const;
private:
  GameVersion version_;
  std::vector<std::uint8_t> header_,graphics_,special_,font_;
  std::array<std::uint16_t,16> palette_{};
  std::array<std::uint16_t,128> sprites_{};
  std::array<NameFormat,48> formats_{};
  std::array<std::vector<std::uint8_t>,48> names_;
  std::array<std::vector<std::uint8_t>,3> guardians_;
  std::array<std::uint16_t,4> party_tiles_{};
  std::array<std::uint8_t,128> widths_{};
};
}
