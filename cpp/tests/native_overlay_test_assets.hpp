#pragma once
#include "eb/native/overlay_sprites.hpp"

namespace eb::native::overlay_test {
// Synthetic content follows the real four-clip descriptor format. The supplied
// group0 must offer two 16x16-or-taller poses; no installed game assets needed.
inline std::vector<std::uint8_t> content(GameVersion version) {
  const unsigned count = version == GameVersion::JP ? 0x40d7d : 0x40e31;
  const unsigned maps = count + 17;
  std::vector<std::uint8_t> bytes(maps + 214);
  const auto word = [&](unsigned at, unsigned value) {
    bytes.at(at) = value;
    bytes.at(at + 1) = value >> 8;
  };
  bytes[count] = 4;
  for (unsigned i = 0; i < 4; ++i) {
    word(count + 1 + i * 4, 0);
    bytes[count + 3 + i * 4] = 0;
    bytes[count + 4 + i * 4] = (i == 0 || i == 3) ? 1 : 0xff;
  }
  const auto part = [&](unsigned at, int y, unsigned tile, unsigned attr, int x,
                        bool last) {
    bytes[maps + at] = y;
    bytes[maps + at + 1] = tile;
    bytes[maps + at + 2] = attr;
    bytes[maps + at + 3] = x;
    bytes[maps + at + 4] = last ? 0x80 : 0;
  };
  for (unsigned i = 0; i < 8; ++i)
    part(i * 5, -16, 0x60 + ((i / 2) & 1) * 2,
         (i & 1 ? 0x23 : 0x33) | (i < 4 ? 0x40 : 0), i < 4 ? -22 : 4, true);
  part(40, -24, 0x64, 0x33, -8, true);
  part(45, -24, 0x64, 0x23, -8, true);
  for (unsigned i = 0; i < 4; ++i)
    part(50 + i * 5, -2, 0x66, (i & 1 ? 0x23 : 0x33) | (i >= 2 ? 0x40 : 0), -8,
         true);
  for (unsigned i = 0; i < 4; ++i)
    for (unsigned p = 0; p < 2; ++p)
      part(70 + i * 10 + p * 5, -8, 0x68 + ((i < 2 ? p : 1 - p) * 2),
           (i & 1 ? 0x23 : 0x33) | (i >= 2 ? 0x40 : 0), -16 + p * 16, p == 1);
  const auto clip = [&](unsigned start,
                        std::initializer_list<std::pair<int, unsigned>> steps) {
    unsigned at = maps + start;
    for (const auto &[frame, duration] : steps) {
      word(at, 1);
      word(at + 2, frame < 0 ? 0 : (maps + frame) & 0xffff);
      word(at + 4, 2);
      word(at + 6, duration);
      at += 8;
    }
    word(at, 3);
    word(at + 2, (maps + start) & 0xffff);
  };
  clip(110, {{0, 8}, {10, 8}, {-1, 16}, {20, 8}, {30, 8}, {-1, 16}});
  clip(162, {{40, 255}});
  clip(174, {{50, 12}, {60, 12}});
  clip(194, {{70, 12}, {90, 12}});
  return bytes;
}
inline OverlaySprites make(SpriteResources &sprites, GameVersion version) {
  return OverlaySprites(content(version), version, sprites);
}
} // namespace eb::native::overlay_test
