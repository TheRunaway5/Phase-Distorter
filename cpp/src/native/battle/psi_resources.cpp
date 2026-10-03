#include "eb/native/battle/psi_resources.hpp"
#include "eb/native/content_compression.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::battle {
namespace {
struct Reader {
  std::span<const std::uint8_t> bytes;
  std::uint8_t byte(std::size_t offset) const {
    if (offset >= bytes.size())
      throw std::invalid_argument("Truncated PSI resources");
    return bytes[offset];
  }
  std::uint16_t word(std::size_t offset) const {
    return std::uint16_t(byte(offset) | unsigned(byte(offset + 1)) << 8);
  }
  std::uint32_t dword(std::size_t offset) const {
    return std::uint32_t(word(offset)) | std::uint32_t(word(offset + 2)) << 16;
  }
  unsigned pointer(std::size_t offset) const {
    const auto value = dword(offset);
    if (value < 0xc00000 || value >= 0xf00000)
      throw std::invalid_argument(
          "PSI arrangement does not reference asset content");
    return value - 0xc00000;
  }
};
} // namespace
std::shared_ptr<const PsiResources>
PsiResources::import(std::span<const std::uint8_t> image, GameVersion version) {
  unsigned config, palettes, pointers, enemies, misc;
  std::array<unsigned, 4> graphics;
  switch (version) {
  case GameVersion::US:
    config = 0xcf04d;
    palettes = 0xcf47f;
    pointers = 0xcf58f;
    graphics = {0xcac25, 0xcb613, 0xcdb27, 0xce31d};
    enemies = 0x3f951;
    misc = 0x3f972;
    break;
  case GameVersion::JP:
    config = 0xcf164;
    palettes = 0xcf596;
    pointers = 0xcf6a6;
    graphics = {0xcad3c, 0xcb72a, 0xcdc3e, 0xce434};
    enemies = 0x3f496;
    misc = 0x3f4b7;
    break;
  default:
    throw std::invalid_argument("Unsupported PSI resource region");
  }
  const Reader r{image};
  auto result = std::shared_ptr<PsiResources>(new PsiResources(version));
  for (unsigned set = 0; set < graphics.size(); ++set)
    result->graphics_[set] = decompress_content(image, graphics[set], 4096);
  for (unsigned id = 0; id < animation_count; ++id) {
    const auto at = config + id * 12;
    auto &d = result->definitions_[id];
    const unsigned source = 0xc0000u + r.word(at);
    const auto found = std::find(graphics.begin(), graphics.end(), source);
    if (found == graphics.end())
      throw std::invalid_argument("Unknown PSI graphics source");
    d.graphics = unsigned(found - graphics.begin());
    d.frame_hold = r.byte(at + 2);
    d.palette_hold = r.byte(at + 3);
    d.palette_lower = r.byte(at + 4);
    d.palette_upper = r.byte(at + 5);
    d.frames = r.byte(at + 6);
    d.target_mode = r.byte(at + 7);
    d.enemy_start = r.byte(at + 8);
    d.enemy_end = r.byte(at + 9);
    d.enemy_color = r.word(at + 10);
    for (unsigned color = 0; color < d.palette.size(); ++color)
      d.palette[color] = r.word(palettes + id * 8 + color * 2);
    d.frame_data =
        decompress_content(image, r.pointer(pointers + id * 4), 65536);
    if (d.frame_data.size() < unsigned(d.frames) * 1024)
      throw std::invalid_argument(
          "PSI arrangement does not contain its declared frames");
  }
  for (unsigned i = 0; i < result->enemy_colors_.size(); ++i)
    for (unsigned channel = 0; channel < 3; ++channel)
      result->enemy_colors_[i][channel] = r.byte(enemies + i * 3 + channel);
  for (unsigned i = 0; i < result->misc_colors_.size(); ++i)
    for (unsigned channel = 0; channel < 3; ++channel)
      result->misc_colors_[i][channel] = r.byte(misc + i * 3 + channel);
  for (unsigned i = 0; i < result->alias_.configuration.size(); ++i)
    result->alias_.configuration[i] = r.byte(config + animation_count * 12 + i);
  for (unsigned i = 0; i < result->alias_.palette.size(); ++i)
    result->alias_.palette[i] = r.word(palettes + animation_count * 8 + i * 2);
  result->alias_.frame_pointer = r.dword(pointers + animation_count * 4);
  return result;
}
} // namespace eb::native::battle
