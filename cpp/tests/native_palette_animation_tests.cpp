#include "eb/native/world_palette_animation.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool value, const char *message) {
  if (!value)
    throw std::runtime_error(message);
}
template <class F> void rejects(F operation) {
  try {
    operation();
  } catch (const std::exception &) {
    return;
  }
  throw std::runtime_error("Malformed palette animation was accepted");
}
struct Fixture {
  std::vector<std::uint8_t> bytes = std::vector<std::uint8_t>(4096);
  WorldPaletteAnimationLayout layout{0x10, 2};
  void pointer(unsigned at, unsigned offset) {
    const unsigned address = 0xc00000 + offset;
    for (unsigned i = 0; i < 4; ++i)
      bytes.at(at + i) = address >> (i * 8);
  }
  Fixture() {
    pointer(0x10, 0x100);
    pointer(0x14, 0x120);
    pointer(0x100, 0x200);
    bytes[0x104] = 3;
    bytes[0x105] = 2;
    bytes[0x106] = 3;
    bytes[0x107] = 1;
    // Three literal scenery frames, including high-bit/control word data.
    bytes[0x200] = 0xe2;
    bytes[0x201] = 0x3f;
    for (unsigned f = 0; f < 3; ++f)
      for (unsigned i = 0; i < 96; ++i) {
        const unsigned packed =
            0x8000 | (f + 1) | ((i & 31) << 5) | ((i / 16) << 10);
        const unsigned at = 0x202 + f * 192 + i * 2;
        bytes[at] = packed;
        bytes[at + 1] = packed >> 8;
      }
    bytes[0x202 + 3 * 192] = 0xff;
  }
};
AreaPalettes base() {
  AreaPalettes colors;
  colors.selected = {4, 1};
  colors.animation_id = 1;
  for (auto &p : colors.scenery)
    p.fill(0xff123456);
  for (auto &p : colors.sprites)
    p.fill(0xffabcdef);
  return colors;
}
void verify() {
  Fixture fixture;
  WorldPaletteAnimations catalog(fixture.bytes, fixture.layout);
  auto state = catalog.prepare(base());
  const auto frozen = state.colors();
  require(catalog.size() == 2 && catalog.track(1).frames.size() == 3 &&
              catalog.track(2).frames.empty(),
          "Palette track counts differ");
  for (unsigned i = 0; i < 100; ++i)
    state.colors();
  require(state.ticks_until_change() == 2 && state.next_frame_index() == 1 &&
              state.colors().scenery == frozen.scenery,
          "Sampling moved the palette clock");
  auto copy = state;
  require(!state.advance() && state.advance() &&
              state.next_frame_index() == 2 &&
              state.ticks_until_change() == 3 &&
              state.colors().scenery == catalog.track(1).frames[1].scenery,
          "Source first delayed publication must select frame1");
  for(unsigned p=0;p<6;++p)for(unsigned i=0;i<16;++i)
    require(state.colors().scenery_word(p,i)==std::uint16_t(0x8000|2|(((p*16+i)&31)<<5)|(p<<10)),
            "Animated source word lost raw high/control bits");
  require(state.colors().scenery_high_bits==catalog.track(1).frames[1].scenery_high_bits,
          "Animation publication did not retain complementary source bits");
  require(copy.ticks_until_change() == 2 &&
              copy.colors().scenery == frozen.scenery,
          "Copied scene shared a mutable palette clock");
  require(!state.advance() && !state.advance() && state.advance() &&
              state.colors().scenery == catalog.track(1).frames[2].scenery,
          "Palette delays or second frame differ");
  require(state.advance() && state.next_frame_index() == 1 &&
              state.colors().scenery == catalog.track(1).frames[0].scenery,
          "Palette end sentinel did not wrap to frame0");
  require(state.colors().sprites == frozen.sprites &&
              state.colors().selected == frozen.selected &&
              state.colors().animation_id == 1,
          "Animation changed actor tint or area ownership");
  for (const auto &frame : catalog.track(1).frames)
    for (const auto &palette : frame.scenery)
      require(palette[0] == 0 && (palette[1] >> 24) == 255,
              "Palette control words became visible or colors lost alpha");
  auto bad_selection = base();
  bad_selection.animation_id = 3;
  const auto before = state.colors().scenery;
  rejects([&] { state = catalog.prepare(bad_selection); });
  require(state.colors().scenery == before && state.next_frame_index() == 1,
          "Failed palette preparation damaged the previous scene");
  for (unsigned id : {0u, 2u}) {
    auto colors = base();
    colors.animation_id = id;
    auto inactive = catalog.prepare(colors);
    require(!inactive.active() && !inactive.advance() &&
                inactive.colors().scenery == colors.scenery,
            "Absent/empty animation changed steady colors");
  }
  auto retained = [] {
    Fixture local;
    WorldPaletteAnimations temporary(local.bytes, local.layout);
    auto result = temporary.prepare(base());
    std::fill(local.bytes.begin(), local.bytes.end(), 0);
    return result;
  }();
  require(!retained.advance() && retained.advance() &&
              retained.colors().scenery == catalog.track(1).frames[1].scenery,
          "Palette clock retained borrowed content/catalog storage");
  Fixture zero;
  zero.bytes[0x105] = 0;
  auto underflow =
      WorldPaletteAnimations(zero.bytes, zero.layout).prepare(base());
  for (unsigned i = 0; i < 65535; ++i)
    require(!underflow.advance(), "Zero delay lost 16-bit timer wrap");
  require(underflow.advance() && underflow.next_frame_index() == 2,
          "Zero-delay timer never reached its authored next frame");
  zero = Fixture();
  zero.bytes[0x106] = 0;
  auto sentinel =
      WorldPaletteAnimations(zero.bytes, zero.layout).prepare(base());
  require(!sentinel.advance() && sentinel.advance() &&
              sentinel.next_frame_index() == 1 &&
              sentinel.colors().scenery == catalog.track(1).frames[0].scenery,
          "Interior zero-delay sentinel did not restart the sequence");
  rejects([&] { catalog.track(0); });
  rejects([&] { catalog.track(3); });
  for (unsigned fault = 0; fault < 8; ++fault) {
    Fixture bad;
    switch (fault) {
    case 0:
      bad.bytes.resize(0x12);
      break;
    case 1:
      bad.bytes[0x104] = 9;
      break;
    case 2:
      bad.bytes[0x200] = 0xff;
      break;
    case 3:
      bad.bytes[0x200] = 0xe3;
      bad.bytes[0x201] = 0xff;
      break;
    case 4:
      bad.bytes[0x200] = 0x80;
      bad.bytes[0x201] = bad.bytes[0x202] = 0;
      break;
    case 5:
      bad.bytes.resize(0x250);
      break;
    case 6:
      bad.bytes[0x13] = 0x80;
      break;
    case 7:
      bad.layout.tracks = 32;
      break;
    }
    rejects([&] { WorldPaletteAnimations invalid(bad.bytes, bad.layout); });
  }
}
} // namespace
int main() {
  try {
    verify();
    std::cout << "PASS native palette track content, logic clock, "
                 "sentinel/wrap, tint isolation, copies and malformed bounds\n";
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
