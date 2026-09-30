#include "eb/native/battle_background.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool ok, const char *message) {
  if (!ok)
    throw std::runtime_error(message);
}
template <class F> void rejects(F f) {
  bool rejected = false;
  try {
    f();
  } catch (const std::exception &) {
    rejected = true;
  }
  require(rejected, "Malformed input was accepted");
}
struct Fixture {
  std::vector<std::uint8_t> data = std::vector<std::uint8_t>(4096);
  BattleBackgroundLayout layout{0, 128, 132, 136, 160, 224, 512, 4, 1, 1, 3, 5};
  void word(unsigned at, unsigned v) {
    data.at(at) = v;
    data.at(at + 1) = v >> 8;
  }
  void pointer(unsigned at, unsigned v) {
    word(at, 0xc00000 + v);
    word(at + 2, 0xc0);
  }
  Fixture() {
    pointer(128, 800);
    pointer(132, 850);
    pointer(136, 900);
    data[800] = 31;
    for (unsigned i = 0; i < 32; ++i)
      data[801 + i] = i < 16 ? 0xaa : 0;
    data[833] = 0xff;
    data[850] = 0xe7;
    data[851] = 0xff;
    data[852] = 0;
    data[853] = 0xe7;
    data[854] = 0xff;
    data[855] = 0;
    data[856] = 0xff;
    for (unsigned i = 0; i < 16; ++i)
      word(900 + i * 2, i | i << 5 | i << 10);
    for (unsigned i = 0; i < 256; ++i)
      data[512 + i] = i;
    word(170, 2);
    word(172, 0x100);
    word(174, 0xff00);
    word(176, 0x40);
    word(178, 0xffc0);
    word(180, 0);
    word(182, 0xff80);
    word(184, 0x80);
    for (unsigned i = 1; i < 5; ++i) {
      unsigned at = 224 + i * 17;
      word(at, 0);
      data[at + 2] = i;
      word(at + 3, 0x100);
      word(at + 5, 0x8000);
      data[at + 7] = 1;
      word(at + 8, 0x100);
    }
    for (unsigned i = 0; i < 4; ++i) {
      auto at = i * 17;
      data[at + 2] = i == 3 ? 4 : 2;
      data[at + 3] = i;
      data[at + 4] = 1;
      data[at + 5] = 3;
      data[at + 6] = 2;
      data[at + 7] = 4;
      data[at + 8] = 1;
      data[at + 9] = 1;
      data[at + 13] = i + 1;
    }
  }
};
void test() {
  Fixture f;
  BattleBackgrounds catalog(f.data, f.layout);
  auto a = catalog.prepare(1);
  auto b = catalog.prepare(1);
  auto initial = a.snapshot();
  require(initial.artwork == b.snapshot().artwork,
          "Catalog artwork aliases were not deduplicated");
  std::fill(f.data.begin(), f.data.end(), 0);
  require(a.snapshot().sample(0, 0).index == 3,
          "Importer retained caller-owned storage");
  for (unsigned i = 0; i < 100; ++i) {
    (void)a.snapshot().sample(-133, 17);
    require(a.state() == b.state(), "Render sampling advanced animation");
  }
  auto first = a.advance({0, 0});
  require(first.palette && first.offsets,
          "First authored update did not publish");
  require(a.state().scroll.horizontal_velocity == 0x140 &&
              a.state().horizontal_position == 0x140 &&
              a.state().vertical_position == 0xfec0,
          "Scroll acceleration/order differs");
  require(a.state().palette_step1 == 1 &&
              a.snapshot().palette == initial.palette,
          "First palette cycle must publish step zero");
  require(a.snapshot().offsets[0] == 0 && a.snapshot().offsets[1] == 1,
          "Horizontal interlaced signed wave differs");
  auto held = a.snapshot();
  auto copy = a;
  a.advance({0, 1, true});
  require(a.state().horizontal_position != copy.state().horizontal_position &&
              a.snapshot().offsets == held.offsets &&
              initial.horizontal_scroll == 0 &&
              initial.palette == b.snapshot().palette,
          "Copy/snapshot isolation or alternate publication failed");
  const auto before = a.state();
  const auto display = a.snapshot();
  rejects([&] { a.advance({2, 0}); });
  rejects([&] { a.advance({0, 2}); });
  require(a.state() == before && a.snapshot().offsets == display.offsets,
          "Rejected tick mutated state");
  auto frozen = catalog.prepare(2);
  auto unfrozen = frozen;
  auto update = frozen.advance({0, 0, false, true, true});
  require(!update.palette && update.offsets &&
              frozen.state().horizontal_position == 0 &&
              frozen.state().palette_remaining == 1 &&
              frozen.state().distortion.style == 3,
          "Freeze must skip palette/scroll and permit distortion even after "
          "defeat");
  update = unfrozen.advance({0, 0, false, false, true});
  require(update.palette && !update.offsets &&
              unfrozen.state().distortion.duration == 1,
          "Defeated gate ordering differs");
  for (unsigned i = 0; i < 4; ++i) {
    auto layer = catalog.prepare(i);
    auto original = layer.snapshot();
    for (unsigned tick = 0; tick < 16; ++tick)
      layer.advance({i & 1, tick & 1});
    auto frame = layer.snapshot();
    require(frame.palette[0] == original.palette[0],
            "Palette cycle changed an unselected color");
    for (unsigned y = 0; y < 224; ++y) {
      require(frame.sample(-1, y).index == frame.sample(255, y).index &&
                  frame.sample(256, y).index == frame.sample(0, y).index,
              "Signed edge wrapping differs");
    }
  }
  // Source initializes indices to zero and duration to one. Its first update
  // increments the index before selecting, so a nonzero second track wins.
  Fixture chain;
  chain.data[10] = 2;
  BattleBackgrounds chained(chain.data, chain.layout);
  auto selected = chained.prepare(0);
  selected.advance({});
  require(selected.state().scroll_index == 1 &&
              selected.state().scroll.duration == 0 &&
              selected.state().horizontal_position == 0xff80,
          "Initial second-track selection differs");
  Fixture zero;
  zero.data[8] = 0;
  BattleBackgrounds zero_catalog(zero.data, zero.layout);
  auto stopped = zero_catalog.prepare(0);
  require(stopped.advance({}).palette && !stopped.advance({}).palette,
          "Zero palette speed should stop after initial publication");
  rejects([&] { catalog.prepare(4); });
  rejects([&] { initial.sample(0, 224); });
  rejects([&] { BattleBackgroundFrame{}.sample(0, 0); });
  Fixture bad;
  bad.data[2] = 8;
  rejects([&] { BattleBackgrounds invalid(bad.data, bad.layout); });
  bad = Fixture{};
  bad.data[13] = 5;
  rejects([&] { BattleBackgrounds invalid(bad.data, bad.layout); });
  bad = Fixture{};
  bad.data[4] = 9;
  rejects([&] { BattleBackgrounds invalid(bad.data, bad.layout); });
  bad = Fixture{};
  bad.pointer(128, 4095);
  rejects([&] { BattleBackgrounds invalid(bad.data, bad.layout); });
  bad = Fixture{};
  bad.data[128] = 0;
  bad.data[130] = 0x7e;
  rejects([&] { BattleBackgrounds invalid(bad.data, bad.layout); });
  bad = Fixture{};
  bad.data.resize(200);
  rejects([&] { BattleBackgrounds invalid(bad.data, bad.layout); });
  bad = Fixture{};
  bad.layout.configuration_count = 328;
  rejects([&] { BattleBackgrounds invalid(bad.data, bad.layout); });
  rejects([] { battle_background_layout(static_cast<eb::GameVersion>(99)); });
}
} // namespace
int main() {
  try {
    test();
    std::cout << "PASS native battle background ownership, ticks, cycles, "
                 "wrapping and validation\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
