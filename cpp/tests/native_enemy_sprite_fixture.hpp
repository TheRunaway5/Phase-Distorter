#pragma once
#include "eb/native/enemy_sprite_catalog.hpp"
#include <algorithm>

namespace enemy_sprite_test {
struct Fixture {
  std::vector<std::uint8_t> bytes = std::vector<std::uint8_t>(0xd400);
  eb::native::EnemySpriteCatalogLayout layout{
      0,      0xa000, 0xa100, 0xa160, 0xa200, 0xa300, 0xa320, 0xa400,
      0xb000, 0xc000, 4,      4,      4,      4,      0,      3};
  void word(unsigned at, unsigned value) {
    bytes[at] = value;
    bytes[at + 1] = value >> 8;
  }
  void pointer(unsigned at, unsigned value) {
    value += 0xc00000;
    for (unsigned i = 0; i < 4; ++i)
      bytes[at + i] = value >> (i * 8);
  }
  Fixture() {
    for (unsigned i = 0; i < 4; ++i) {
      pointer(0xa000 + i * 4, 0xa100 + i * 16);
      pointer(0xa200 + i * 8, 0xa300 + i * 8);
      bytes[0xa300 + i * 8] = 1;
      word(0xa301 + i * 8, i);
      bytes[0xa303 + i * 8] = 255;
      word(0xa400 + i * 4, i);
    }
    // Encounter1 has weighted normal and alternate branches; a zero row
    // precedes its normal branch exactly as several original records do.
    word(0xa110, 1);
    bytes[0xa112] = 100;
    bytes[0xa113] = 100;
    bytes[0xa114] = 0;
    word(0xa115, 2);
    bytes[0xa117] = 8;
    word(0xa118, 0);
    bytes[0xa11a] = 8;
    word(0xa11b, 1);
    // With no base chance the flag-on branch uses slot0, not slot8.
    word(0xa120, 2);
    bytes[0xa123] = 100;
    bytes[0xa124] = 8;
    word(0xa125, 2);
    bytes[0xa310] = 0;
    word(0xa311, 2);
    bytes[0xa313] = 1;
    word(0xa314, 1);
    bytes[0xa316] = 255;
    word(0xa408, 777); // Zero-count member must never request its sprite.
    word(0, 1);
    word(2, 2);
    word(4, 3);
    std::fill(bytes.begin() + 0xb000, bytes.begin() + 0xba00, 3 * 8);
    for (unsigned i = 0; i < 2560; ++i)
      word(0xc000 + i * 2, 1); // No butterfly.
    word(0xc002,
         4); // Adjacent sector admits butterflies, including cell encounter0.
  }
};
} // namespace enemy_sprite_test
