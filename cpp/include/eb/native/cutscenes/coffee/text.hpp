#pragma once
#include "eb/native/cutscenes/coffee/resources.hpp"
#include <array>
#include <cstdint>
#include <span>
namespace eb::native::cutscenes::coffee {
struct TextTransfer {
  std::uint16_t source_offset{},byte_count{},destination{};
  bool operator==(const TextTransfer &) const = default;
};
// C49A56's retained flyover state. Cursor units differ by region: US has a
// separate variable-width pixel/byte cursor; JP retains x/y across row shifts.
class Text {
public:
  explicit Text(const Resources &resources):resources_(resources) {}
  void initialize();
  void position(std::uint8_t argument);
  void glyph(std::uint16_t encoded);
  void name(std::span<const std::uint8_t>);
  std::array<TextTransfer,2> prepare_row();
  void consume_row();
  std::span<const std::uint8_t,1664> bytes() const noexcept { return bytes_; }
  std::span<std::uint8_t,1664> bytes() noexcept { return bytes_; }
  const std::array<std::uint16_t,1024> &tilemap() const noexcept { return tilemap_; }
  GameVersion version() const noexcept { return resources_.version(); }
  std::uint16_t source_origin() const noexcept { return version()==GameVersion::JP?0x3918:0x3492; }
  std::uint16_t x{},y{},columns{26},tile_base{},dirty_low{0xffff},dirty_high{};
  std::uint16_t screen_offset{},pixel_offset{},byte_offset{};
  // DECOMP_ENTRY2's shared 36-byte packed glyph output, retained after print.
  std::array<std::uint8_t,36> decoded_glyph{};
private:
  void strip(std::span<const std::uint8_t>,unsigned advance);
  void set_byte(unsigned,std::uint8_t);
  const Resources &resources_;
  std::array<std::uint8_t,1664> bytes_{};
  std::array<std::uint16_t,1024> tilemap_{};
};
}
