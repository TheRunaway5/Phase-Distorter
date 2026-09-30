#include "eb/native/overlay_sprites.hpp"
#include <array>
#include <stdexcept>

namespace eb::native {
OverlaySprites::OverlaySprites(std::span<const std::uint8_t> assets,
                               GameVersion version, SpriteResources &sprites)
    : version_(version) {
  const unsigned count = version == GameVersion::JP ? 0x40d7d : 0x40e31;
  constexpr std::array<unsigned, 18> starts{
      0, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 80, 90, 100};
  const unsigned maps = count + 17;
  if (assets.size() < maps + 110 || assets[count] != 4)
    throw std::invalid_argument("Truncated authored overlay catalog");
  const auto word = [&](unsigned at) {
    return assets[at] | unsigned(assets[at + 1]) << 8;
  };
  std::map<unsigned, std::array<std::uint8_t, 64>> tiles;
  unsigned tile_base = 0x160;
  for (unsigned entry = 0; entry < 4; ++entry) {
    const unsigned at = count + 1 + entry * 4, group = word(at);
    const auto &definition = sprites.definition(group);
    if (definition.height < 16 || definition.width % 8 || definition.width > 64)
      throw std::invalid_argument("Unsupported authored overlay geometry");
    for (unsigned selection = 0; selection < 2; ++selection) {
      const unsigned pose = assets[at + 2 + selection];
      if (pose == 0xff)
        continue;
      const auto image = sprites.acquire(group, pose, SpriteSurface::Normal,
                                         SpriteFrameFormat::EightDirection,
                                         SpriteOrientation::Normal);
      if (!image->canvas || !image->layout)
        throw std::invalid_argument("Overlay has no imported artwork");
      // C4B1B8 imports exactly two 8px rows. The source row split is
      // content placement metadata only; the retained tiles are pixels.
      const unsigned columns = definition.width / 8;
      for (unsigned row = 0; row < 2; ++row)
        for (unsigned col = 0; col < columns; ++col) {
          std::array<std::uint8_t, 64> tile{};
          for (unsigned y = 0; y < 8; ++y)
            for (unsigned x = 0; x < 8; ++x)
              tile[y * 8 + x] =
                  (*image->canvas)[(row * 8 + y) * image->layout->canvas_width +
                                   col * 8 + x];
          if (!tiles.emplace(tile_base + row * 16 + col, tile).second)
            throw std::invalid_argument("Authored overlay tiles overlap");
        }
      tile_base += columns;
    }
  }
  for (auto start : starts) {
    std::vector<SpriteFragment> parts;
    bool complete = false;
    for (unsigned at = maps + start; at + 5 <= maps + 110; at += 5) {
      if (assets[at] == 0x80 || (assets[at + 4] & 1))
        throw std::invalid_argument("Unsupported authored overlay descriptor");
      const unsigned attributes = assets[at + 2];
      const unsigned first_tile = assets[at + 1] | (attributes & 1) << 8;
      auto pixels = std::make_shared<SpriteFragmentPixels>();
      pixels->width = pixels->height = 16;
      pixels->indices.resize(256);
      for (unsigned y = 0; y < 16; ++y)
        for (unsigned x = 0; x < 16; ++x) {
          const unsigned sx = attributes & 0x40 ? 15 - x : x,
                         sy = attributes & 0x80 ? 15 - y : y;
          const unsigned tile_index =
              (first_tile & 0x100) |
              (((first_tile & 0xf0) + (sy / 8) * 16) & 0xf0) |
              ((first_tile + sx / 8) & 15);
          const auto tile = tiles.find(tile_index);
          if (tile == tiles.end())
            throw std::invalid_argument(
                "Overlay references unimported artwork");
          pixels->indices[y * 16 + x] = tile->second[(sy & 7) * 8 + (sx & 7)];
        }
      parts.push_back({std::int8_t(assets[at + 3]), std::int8_t(assets[at]),
                       (attributes >> 1) & 7, (attributes >> 4) & 3,
                       std::move(pixels)});
      if (assets[at + 4] & 0x80) {
        complete = true;
        break;
      }
    }
    if (!complete)
      throw std::invalid_argument("Unterminated authored overlay frame");
    frames_.emplace(0xc00000 + maps + start, std::move(parts));
  }
  // Normalize the four finite authored animation loops to timed frames.
  // Source command pointers are content identities used only during import.
  const std::array<unsigned, 4> clip_starts{maps + 162, maps + 110, maps + 174,
                                            maps + 194};
  for (unsigned kind = 0; kind < clip_starts.size(); ++kind) {
    unsigned cursor = clip_starts[kind];
    std::optional<std::uint32_t> current;
    bool complete = false;
    for (unsigned commands = 0; commands < 64; ++commands) {
      if (cursor + 4 > assets.size())
        throw std::invalid_argument("Truncated authored overlay clip");
      const unsigned command = word(cursor), operand = word(cursor + 2);
      cursor += 4;
      if (command == 1) {
        current = operand ? std::optional<std::uint32_t>(0xc40000 + operand)
                          : std::nullopt;
        if (current)
          (void)frame(*current);
      } else if (command == 2) {
        if (!operand)
          throw std::invalid_argument("Zero authored overlay frame duration");
        clips_[kind].push_back({current, std::uint16_t(operand)});
      } else if (command == 3) {
        if (0x40000 + operand != clip_starts[kind] || clips_[kind].empty())
          throw std::invalid_argument("Unsupported authored overlay loop");
        complete = true;
        break;
      } else
        throw std::invalid_argument("Unknown authored overlay command");
    }
    if (!complete)
      throw std::invalid_argument("Unterminated authored overlay clip");
  }
}
std::span<const OverlayClipStep> OverlaySprites::clip(OverlayKind kind) const {
  return clips_.at(static_cast<unsigned>(kind));
}
std::span<const SpriteFragment>
OverlaySprites::frame(std::uint32_t authored_address) const {
  const auto found = frames_.find(authored_address);
  if (found == frames_.end())
    throw std::out_of_range("Unknown authored overlay frame");
  return found->second;
}
} // namespace eb::native
