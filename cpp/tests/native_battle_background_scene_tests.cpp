#include "eb/native/battle_background_scene.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool ok, const char *s) {
  if (!ok)
    throw std::runtime_error(s);
}
template <class F> void rejects(F f) {
  bool caught = false;
  try {
    f();
  } catch (const std::exception &) {
    caught = true;
  }
  require(caught, "Invalid input accepted");
}
struct Fixture {
  std::vector<std::uint8_t> bytes = std::vector<std::uint8_t>(0x110000);
  void word(unsigned p, unsigned v) {
    bytes.at(p) = v;
    bytes.at(p + 1) = v >> 8;
  }
  void pointer(unsigned p, unsigned v) {
    word(p, v);
    word(p + 2, 0xc0 + (v >> 16));
  }
  Fixture() {
    auto l = battle_background_layout(eb::GameVersion::US);
    for (unsigned i = 0; i < 327; ++i) {
      auto p = l.configurations + i * 17;
      bytes[p + 2] = i == 2 || i == 3 ? 2 : 4;
      bytes[p + 3] = 1;
      bytes[p + 4] = 1;
      bytes[p + 5] = 3;
      bytes[p + 8] = 1;
      bytes[p + 9] = 1;
      bytes[p + 13] = 1;
    }
    for (unsigned i = 0; i < 103; ++i) {
      pointer(l.graphics + i * 4, 0x1000);
      pointer(l.arrangements + i * 4, 0x1100);
    }
    for (unsigned i = 0; i < 114; ++i)
      pointer(l.palettes + i * 4, 0x1200);
    bytes[0x1000] = 31;
    for (unsigned i = 0; i < 32; ++i)
      bytes[0x1001 + i] = i < 16 ? 0xff : 0;
    bytes[0x1021] = 0xff;
    bytes[0x1100] = 0xe7;
    bytes[0x1101] = 0xff;
    bytes[0x1102] = 0;
    bytes[0x1103] = 0xe7;
    bytes[0x1104] = 0xff;
    bytes[0x1105] = 0;
    bytes[0x1106] = 0xff;
    for (unsigned i = 0; i < 16; ++i)
      word(0x1200 + i * 2, i | (i + 2) << 5 | (i + 4) << 10);
    word(l.scrolling + 10, 0);
    word(l.scrolling + 12, 0x100);
    word(l.scrolling + 14, 0x200);
    word(l.distortions + 17, 0);
    bytes[l.distortions + 19] = 1;
    word(l.distortions + 20, 0x100);
    word(l.distortions + 22, 0x1000);
    for (unsigned i = 0; i < 256; ++i)
      bytes[l.sine + i] = i;
    for (unsigned i = 0; i < 484; ++i)
      bytes[0x10c614 + i * 8] = 1;
    for (unsigned i = 0; i < 61; ++i)
      bytes[0x4a591 + i] = i % 2 ? 251 : 5;
  }
};
void test() {
  Fixture f;
  BattleBackgroundScenes c(f.bytes, eb::GameVersion::US);
  auto four = c.prepare(BattleBackgroundPair{0, 1, 5});
  require(four.primary().state().horizontal_position == 0x100 &&
              four.secondary()->state().horizontal_position == 0x100,
          "4bpp load must immediately generate both artwork layers");
  auto two = c.prepare(BattleBackgroundPair{2, 3, 1});
  require(two.primary().state().horizontal_position == 0 &&
              two.secondary()->state().horizontal_position == 0,
          "2bpp load advanced before its first controller tick");
  auto shared = c.prepare(BattleBackgroundPair{0, 1, 1});
  require(shared.secondary()->state().distortion.duration == 1,
          "Distortion-only secondary advanced during loading");
  shared.advance({1});
  require(shared.secondary()->state().horizontal_position == 0 &&
              shared.secondary()->snapshot().horizontal_scroll ==
                  shared.primary().snapshot().horizontal_scroll,
          "Shared distortion failed to borrow primary scroll without advancing "
          "its own");
  const auto held = two.snapshot();
  auto copy = two;
  std::fill(f.bytes.begin(), f.bytes.end(), 0);
  two.advance({0});
  require(copy.primary().state().horizontal_position == 0 &&
              held.primary.horizontal_scroll == 0,
          "Copied scene or snapshot mutated");
  const auto initial = copy.snapshot().draw(320, 4, 8);
  for (unsigned i = 0; i < 10; ++i)
    require(copy.snapshot().draw(320)->atlas == initial->atlas,
            "Drawing mutated scene clocks");
  require(eb::rasterize_direct_scene({initial, {{0, 0}}}) == initial->atlas,
          "Native draw commands failed exact raster reconstruction");
  copy.reflect(4);
  copy.green_background(3);
  copy.flash_red(24);
  copy.flash_green(24);
  copy.advance({0});
  require(copy.effects().addition == PaletteColor{0, 31, 4},
          "Authored flashes must include blue4; green flash wins after red");
  require(copy.effects().backdrop == PaletteColor{0, 31, 0},
          "Green background flash ordering differs");
  auto before = copy.snapshot();
  rejects([&] { copy.advance({2}); });
  rejects([&] { copy.quake(61); });
  require(copy.effects() == before.effects &&
              copy.primary().snapshot().palette == before.primary.palette,
          "Invalid request mutated owner");
  rejects([&] { before.draw(255); });
  rejects([&] { before.draw(257); });
  rejects([&] { before.draw(4098); });
  rejects([&] { before.sample(0, 224); });
  rejects([&] { c.prepare(484); });
  rejects([&] { c.prepare(BattleBackgroundPair{0, 2, 4}); });
  rejects([&] { c.prepare(BattleBackgroundPair{0, 0, 8}); });
  BattleBackgroundStart start;
  start.frame_parity = 2;
  rejects([&] { c.prepare(0, start); });
  start = {};
  start.backdrop.red = 32;
  rejects([&] { c.prepare(0, start); });
  Fixture bad;
  bad.word(0xbd89a, 327);
  rejects(
      [&] { BattleBackgroundScenes invalid(bad.bytes, eb::GameVersion::US); });
  bad = Fixture{};
  bad.bytes.resize(0x100000);
  rejects(
      [&] { BattleBackgroundScenes invalid(bad.bytes, eb::GameVersion::US); });
  // A second 2bpp arrangement can name tiles beyond its authored 384-tile
  // publication. The scene must demand the missing owner rather than showing
  // all imported artwork or sampling inherited video memory.
  Fixture unpublished;
  for (unsigned i = 0; i < 16; ++i) {
    unpublished.bytes[0x1000 + i * 3] = 0xe7;
    unpublished.bytes[0x1001 + i * 3] = 0xff;
    unpublished.bytes[0x1002 + i * 3] = 1;
  }
  unpublished.bytes[0x1030] = 0xff;
  unpublished.bytes[0x1100] = 0xe0;
  unpublished.bytes[0x1101] = 0x01;
  unpublished.bytes[0x1102] = 0x80;
  unpublished.bytes[0x1103] = 1;
  // 2046 remaining bytes of zero arrangement data.
  unpublished.bytes[0x1104] = 0xe7;
  unpublished.bytes[0x1105] = 0xff;
  unpublished.bytes[0x1106] = 0;
  unpublished.bytes[0x1107] = 0xe7;
  unpublished.bytes[0x1108] = 0xfd;
  unpublished.bytes[0x1109] = 0;
  unpublished.bytes[0x110a] = 0xff;
  BattleBackgroundScenes incomplete(unpublished.bytes, eb::GameVersion::US);
  const auto dependency = incomplete.artwork_dependency({2, 3, 1});
  require(dependency && dependency->layer == 1 &&
              dependency->first_unpublished_tile == 384,
          "Missing authored partial-publication dependency");
  bool typed = false;
  try {
    (void)incomplete.prepare(BattleBackgroundPair{2, 3, 1});
  } catch (const BattleBackgroundArtworkRequired &e) {
    typed = e.dependency == *dependency;
  }
  require(typed, "Missing artwork did not retain a typed preparation failure");
  const auto primary_dependency = incomplete.artwork_dependency({0, 0, 0});
  require(primary_dependency && primary_dependency->layer == 0 &&
              primary_dependency->first_unpublished_tile == 384,
          "Ordinary primary publication silently exposed extended prayer art");
  rejects([&] { incomplete.prepare(BattleBackgroundPair{0, 0, 0}); });
  require(!incomplete.artwork_dependency(
              {0, 0, 0}, BattleArtworkPublication::GiygasPrayer),
          "Extended prayer publication retained an ordinary artwork limit");
  (void)incomplete.prepare(BattleBackgroundPair{0, 0, 0}, {},
                           BattleArtworkPublication::GiygasPrayer);
  rejects([&] {
    incomplete.prepare(BattleBackgroundPair{2, 0, 0}, {},
                       BattleArtworkPublication::GiygasPrayer);
  });
  rejects([&] {
    incomplete.artwork_dependency({0, 0, 0},
                                  static_cast<BattleArtworkPublication>(99));
  });

  // Brightness changes cycling sources without prematurely publishing them.
  Fixture brightness;
  BattleBackgrounds layers(brightness.bytes,
                           battle_background_layout(eb::GameVersion::US));
  auto l = layers.prepare(0);
  const auto original = l.snapshot().palette;
  l.apply_palette_brightness(128, 1, 4);
  require(l.snapshot().palette[1] == original[1] &&
              l.snapshot().palette[4] != original[4],
          "Brightness published cycling entries too early");
  l.advance({});
  require(l.snapshot().palette[1] != original[1],
          "Palette tick ignored newly scaled cycling source");
  l.apply_palette_brightness(0xffff, 1, 3);
  require(l.snapshot().palette[1] == PaletteColor{31, 31, 31},
          "White command must publish cycling entries immediately");
  l.apply_palette_brightness(0x100, 1, 3);
  require(l.snapshot().palette[1] == original[1],
          "Restore used modified palette instead of immutable backup");
  const auto palette = l.snapshot().palette;
  rejects([&] { l.apply_palette_brightness(128, 5, 4); });
  require(l.snapshot().palette == palette,
          "Invalid palette range was not atomic");
  // Independent high/low alpha sampling, 5-bit half-add, and fallback to full
  // main brightness when the subscreen is transparent.
  BattleBackgroundSceneFrame frame;
  auto art = std::make_shared<BattleBackgroundArtwork>();
  art->indices.fill(1);
  art->opaque.fill(1);
  frame.primary.artwork = art;
  frame.primary.palette[1] = {31, 30, 29};
  frame.secondary = frame.primary;
  frame.secondary->palette[1] = {10, 11, 12};
  frame.blend = BattleBackgroundBlend::HalfAdd;
  require(frame.sample(0, 0) == PaletteColor{20, 20, 20},
          "Pair half-add rounding differs");
  auto transparent = std::make_shared<BattleBackgroundArtwork>();
  frame.secondary->artwork = transparent;
  require(frame.sample(0, 0) == PaletteColor{31, 30, 29},
          "Transparent subscreen incorrectly halved main");
  frame.effects.top_end = 47;
  frame.effects.bottom_start = 176;
  require(frame.sample(0, 46) == PaletteColor{} &&
              frame.sample(0, 47) == PaletteColor{31, 30, 29} &&
              frame.sample(0, 176) == PaletteColor{},
          "Letterbox edge registration differs");
}
} // namespace
int main() {
  try {
    test();
    std::cout << "PASS native battle scene selection, publication, ownership, "
                 "composition and effects\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
