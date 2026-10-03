#include "eb/native/battle/psi_animation.hpp"
#include "eb/native/battle/psi_resources.hpp"
#include "eb/native/battle_background_scene.hpp"
#include "eb/native/world_encounter.hpp"
#include <algorithm>
#include <iostream>
#include <limits>
#include <stdexcept>
#include <type_traits>

namespace {
using namespace eb::native;
using namespace eb::native::battle;
unsigned checks{};
void require(bool condition, const char *reason) {
  ++checks;
  if (!condition)
    throw std::runtime_error(reason);
}
template <class F> void rejects(F function, const char *reason) {
  bool caught = false;
  try {
    function();
  } catch (const std::exception &) {
    caught = true;
  }
  require(caught, reason);
}
struct BackgroundFixture {
  std::vector<std::uint8_t> bytes = std::vector<std::uint8_t>(0x110000);
  void word(unsigned at, unsigned value) {
    bytes.at(at) = std::uint8_t(value);
    bytes.at(at + 1) = std::uint8_t(value >> 8);
  }
  void pointer(unsigned at, unsigned offset) {
    word(at, offset);
    word(at + 2, 0xc0 + (offset >> 16));
  }
  BackgroundFixture() {
    const auto layout = battle_background_layout(eb::GameVersion::US);
    for (unsigned i = 0; i < 327; ++i)
      bytes[layout.configurations + i * 17 + 2] = 4;
    for (unsigned i = 0; i < 103; ++i) {
      pointer(layout.graphics + i * 4, 0x1000);
      pointer(layout.arrangements + i * 4, 0x1100);
    }
    for (unsigned i = 0; i < 114; ++i)
      pointer(layout.palettes + i * 4, 0x1200);
    bytes[0x1000] = 0x3f;
    bytes[0x1001] = 0;
    bytes[0x1002] = 0xff;
    for (unsigned at : {0x1100u, 0x1103u}) {
      bytes[at] = 0xe7;
      bytes[at + 1] = 0xff;
      bytes[at + 2] = 0;
    }
    bytes[0x1106] = 0xff;
    for (unsigned i = 0; i < 16; ++i)
      word(0x1200 + i * 2, 0x7fff - i);
    for (unsigned i = 0; i < 484; ++i)
      bytes[0x10c614 + i * 8] = 1;
  }
};
void publication() {
  static_assert(!std::is_copy_constructible_v<PsiScratch>);
  static_assert(!std::is_move_constructible_v<PsiDisplayState>);
  PaletteBankState colors;
  for (unsigned b = 0; b < 16; ++b)
    for (unsigned c = 0; c < 16; ++c) {
      colors.staged[b][c] = std::uint16_t(0x8000 + b * 16 + c);
      colors.displayed[b][c] = std::uint16_t(0x1200 + b * 16 + c);
    }
  require(&colors.palette(0) == &colors.staged_palette(12),
          "Alternate bank lost actual staging identity");
  rejects([&] { colors.palette(4); }, "Fifth alternate bank accepted");
  rejects([&] { colors.palette(std::numeric_limits<unsigned>::max()); },
          "Alternate bank addition overflowed");
  for (unsigned mode : {8u, 16u, 24u}) {
    for (auto &p : colors.displayed)
      p.fill(0x1234);
    colors.upload_mode = std::uint8_t(mode);
    require(colors.publish_pending() && !colors.upload_mode,
            "Publication did not consume its mode");
    for (unsigned b = 0; b < 16; ++b)
      for (unsigned c = 0; c < 16; ++c)
        require(colors.displayed[b][c] ==
                    ((mode == 24 || (mode == 8 ? b < 8 : b >= 8))
                         ? (colors.staged[b][c] & 0x7fff)
                         : 0x1234),
                "Palette transfer exposed the wrong physical range");
  }
  const auto saved = colors.displayed;
  require(!colors.publish_pending() && colors.displayed == saved,
          "Idle publication changed colors");
  for (unsigned mode : {1u, 7u, 17u, 255u}) {
    colors.upload_mode = std::uint8_t(mode);
    rejects([&] { colors.publish_pending(); },
            "Unsupported DMA table alias accepted");
    require(colors.displayed == saved && colors.upload_mode == mode,
            "Rejected palette transfer partially committed");
  }
  PsiScratch scratch;
  PsiDisplayState display;
  display.tilemap.fill(0xabcd);
  display.graphics.fill(0x5c);
  display.staged_scroll = {{{0xffff, 27}, {42, 0x8001}}};
  display.queue_frame(0xff80);
  require(display.pending().size() == 2 &&
              display.pending()[0].kind == PsiTransferKind::FrameLowBytes &&
              display.pending()[1].kind == PsiTransferKind::FrameHighBytes,
          "Source descriptor order collapsed");
  for (unsigned i = 0; i < 1024; ++i)
    scratch.bytes[std::uint16_t(0xff80 + i)] = std::uint8_t(i * 7 + 3);
  require(display.tilemap[0] == 0xabcd, "Queueing eagerly changed visible map");
  const auto preview = display.preview_pending(scratch);
  require(display.pending().size() == 2 && display.tilemap[0] == 0xabcd &&
              preview[0] == 0x3003,
          "Transactional preview consumed or changed live publication");
  display.publish_pending(scratch);
  require(display.tilemap == preview, "Preview and actual publication differ");
  for (unsigned i = 0; i < 1024; ++i)
    require(display.tilemap[i] ==
                std::uint16_t(0x3000 | std::uint8_t(i * 7 + 3)),
            "DMA did not read live scratch across its bank boundary");
  require(display.pending().empty() &&
              display.scroll == std::array<PsiScroll, 4>{} &&
              display.graphics[0] == 0x5c,
          "Map publication changed independent owners");
  display.publish_scroll();
  require(display.scroll == display.staged_scroll,
          "Explicit scroll latch omitted exact raw offsets");
  display.queue_clear();
  display.queue_frame(5);
  display.queue_clear();
  require(display.pending().size() == 4,
          "Ordered clear/frame descriptors were coalesced");
  display.publish_pending(scratch);
  require(std::ranges::all_of(display.tilemap, [](auto x) { return !x; }),
          "Final clear did not win ordered DMA");
  display.queue_clear();
  display.queue_frame(5);
  scratch.bytes[5] = 0x8e;
  display.publish_pending(scratch);
  require(display.tilemap[0] == 0x308e,
          "Frame after clear failed to replace visible map");
}
void advancement() {
  BackgroundFixture fixture;
  BattleBackgroundScenes catalog(fixture.bytes, eb::GameVersion::US);
  auto background = catalog.prepare(BattleBackgroundPair{0, 0, 0});
  PsiAnimationState state;
  PsiScratch scratch;
  PsiDisplayState display;
  PaletteBankState colors;
  PaletteEffectState ramps;
  PaletteEffects effects(colors, ramps);
  PsiAnimation animation(state, scratch, display, effects, background);
  require(animation.uses(state, scratch, display, effects, background),
          "Animation copied authoritative state");
  WorldSwirlState swirl;
  state.time_until_next_frame = 1;
  state.frame_hold = 2;
  state.total_frames = 2;
  state.frame_offset = 0xfe00;
  state.palette_lower = 1;
  state.palette_upper = 3;
  state.palette_countdown = 1;
  state.palette_hold = 2;
  state.palette_base = 48;
  state.palette[1] = 0x8123;
  state.palette[2] = 0xfabc;
  state.palette[3] = 0x9234;
  state.enemy_start = 1;
  state.enemy_end = 1;
  state.enemy_targets[2] = 0x8000;
  state.enemy_red = 31;
  state.enemy_green = 2;
  state.enemy_blue = 5;
  colors.displayed[3].fill(0x4567);
  ramps.banks[1].steps[0] = 0x7777;
  animation.advance();
  require(state.frame_offset == 0x200 && state.total_frames == 1 &&
              state.time_until_next_frame == 2,
          "Frame count/cursor did not wrap at source width");
  require(display.pending().size() == 2 && display.tilemap[0] == 0,
          "Advance skipped deferred transfer");
  require(colors.staged[3][1] == 0x8123 && colors.staged[3][2] == 0xfabc &&
              colors.staged[3][3] == 0x9234 && colors.upload_mode == 24 &&
              state.palette_index == 1 && state.palette_countdown == 2,
          "First palette cycle did not publish retained raw words");
  require(ramps.speed == 20 && ramps.banks[2].frames_left == 20 &&
              ramps.banks[2].deltas[3] == 0xffff &&
              ramps.banks[2].deltas[4] == 0xffe0 &&
              ramps.banks[2].deltas[5] == 0xfc00 &&
              ramps.banks[1].steps[0] == 0x7777,
          "Simultaneous target/reverse order or unrelated state changed");
  effects.advance();
  require(colors.upload_mode == 16,
          "Later enemy effect did not replace full palette request");
  colors.publish_pending();
  require(colors.displayed[3][1] == 0x4567,
          "Upper-only transfer prematurely exposed PSI colors");
  animation.advance();
  require(state.time_until_next_frame == 1 && state.palette_countdown == 1 &&
              display.pending().size() == 2,
          "Held frame queued or cycled early");
  animation.advance();
  require(state.time_until_next_frame == 2 && state.total_frames == 0 &&
              state.frame_offset == 0x600 && display.pending().size() == 4,
          "Second frame publication/count mismatch");
  require(colors.staged[3][1] == 0x9234 && colors.staged[3][2] == 0x8123 &&
              colors.staged[3][3] == 0xfabc,
          "Palette rotation direction differs from original");
  colors.publish_pending();
  require(colors.displayed[3][1] == 0x1234,
          "Later full publication did not reveal PSI colors");
  // Real NMI drains the accumulated descriptors before a terminating clear.
  display.publish_pending(scratch);
  // Ending restores first, then this same call still rotates its palette.
  background.halve_palette(colors);
  state.time_until_next_frame = 1;
  state.palette_countdown = 1;
  state.palette_base = 32;
  state.palette_index = 0;
  animation.advance();
  require(!state.time_until_next_frame &&
              display.pending().back().kind == PsiTransferKind::Clear,
          "Terminal frame did not queue complete clear");
  require(colors.staged[2][0] == 0x7fff && colors.staged[2][1] == 0x8123,
          "Terminal restore/cycle order or color0 restoration differs");
  require(!animation.busy(swirl),
          "Busy includes terminal palette or ramp state");
  swirl.update_in = 0x80;
  require(animation.busy(swirl), "Busy lost shared raw swirl countdown");
  swirl = {};
  state.enemy_start = 1;
  state.enemy_targets = {};
  effects.set_speed(7);
  state.palette_countdown = 1;
  state.palette_lower = 255;
  const auto retained = colors.staged;
  animation.advance();
  require(ramps.speed == 20 && colors.staged == retained &&
              state.palette_countdown == 1,
          "Inactive animation skipped independent timer or advanced palette");
  display.publish_pending(scratch);
  // A valid zero hold freezes after publishing one frame. It does not invent
  // a duration or keep the busy predicate alive from remaining frames.
  state = {};
  state.time_until_next_frame = 1;
  state.total_frames = 5;
  animation.advance();
  require(!state.time_until_next_frame && state.total_frames == 4 &&
              !animation.busy(swirl),
          "Zero frame hold was normalized");
  const auto count = display.pending().size();
  animation.advance();
  require(display.pending().size() == count,
          "Zero frame hold continued hidden work");
  // Domain rejection precedes frame, palette, ramp and background mutation.
  state = {};
  state.time_until_next_frame = 1;
  state.total_frames = 1;
  state.palette_countdown = 1;
  state.palette_lower = 15;
  state.palette_upper = 16;
  state.enemy_start = 1;
  const auto before_state = state;
  const auto before_colors = colors.staged;
  const auto before_ramps = ramps;
  rejects([&] { animation.advance(); }, "Out-of-owner cycle accepted");
  require(state == before_state && colors.staged == before_colors &&
              ramps == before_ramps && display.pending().size() == count,
          "Rejected advance partially changed authoritative state");
  state.palette_lower = 2;
  state.palette_upper = 1;
  rejects([&] { animation.advance(); },
          "Wrapped256-color range was normalized");
  state.palette_lower = 0;
  state.palette_upper = 0;
  state.palette_base = 256;
  rejects([&] { animation.advance(); }, "Out-of-owner destination accepted");
  state.palette_base = 0;
  state.palette_index = 2;
  rejects([&] { animation.advance(); },
          "Raw negative source-index alias accepted");
  // Invalid inactive cycle fields are not consulted by the source.
  state.palette_countdown = 0;
  animation.advance();
  require(state.total_frames == 0,
          "Inactive cycle domain blocked a valid frame");
  auto shared = catalog.prepare(BattleBackgroundPair{0, 1, 1});
  PsiAnimationState blocked;
  blocked.time_until_next_frame = 1;
  PsiAnimation dependency(blocked, scratch, display, effects, shared);
  const auto pending_count = display.pending().size();
  rejects([&] { dependency.advance(); },
          "Missing shared-artwork reset owner was swallowed");
  require(blocked.time_until_next_frame == 1 &&
              display.pending().size() == pending_count,
          "Missing restoration owner partially consumed frame");
}
struct ResourceFixture {
  std::vector<std::uint8_t> bytes = std::vector<std::uint8_t>(0xd0000);
  unsigned config{}, palettes{}, pointers{}, enemies{}, misc{};
  std::array<unsigned, 4> graphics{};
  void word(unsigned p, unsigned v) {
    bytes.at(p) = std::uint8_t(v);
    bytes.at(p + 1) = std::uint8_t(v >> 8);
  }
  void dword(unsigned p, unsigned v) {
    word(p, v);
    word(p + 2, v >> 16);
  }
  explicit ResourceFixture(eb::GameVersion version) {
    const bool us = version == eb::GameVersion::US;
    config = us ? 0xcf04d : 0xcf164;
    palettes = us ? 0xcf47f : 0xcf596;
    pointers = us ? 0xcf58f : 0xcf6a6;
    graphics = us ? std::array<unsigned, 4>{0xcac25, 0xcb613, 0xcdb27, 0xce31d}
                  : std::array<unsigned, 4>{0xcad3c, 0xcb72a, 0xcdc3e, 0xce434};
    enemies = us ? 0x3f951 : 0x3f496;
    misc = us ? 0x3f972 : 0x3f4b7;
    for (unsigned i = 0; i < graphics.size(); ++i) {
      const auto p = graphics[i];
      bytes[p] = std::uint8_t(0x20 | i);
      bytes[p + 1] = std::uint8_t(0xa0 + i);
      bytes[p + 2] = 0xff;
    }
    // A64KiB stream contains authored extra data beyond the declared frame.
    for (unsigned i = 0; i < 64; ++i) {
      bytes[0x1000 + i * 3] = 0xe7;
      bytes[0x1001 + i * 3] = 0xff;
      bytes[0x1002 + i * 3] = std::uint8_t(i);
    }
    bytes[0x10c0] = 0xff;
    for (unsigned i = 0; i < 34; ++i) {
      const auto p = config + i * 12;
      word(p, graphics[i % 4]);
      bytes[p + 2] = std::uint8_t(i);
      bytes[p + 3] = 2;
      bytes[p + 4] = 1;
      bytes[p + 5] = 3;
      bytes[p + 6] = 1;
      bytes[p + 7] = std::uint8_t(i % 4);
      bytes[p + 8] = 7;
      bytes[p + 9] = 13;
      word(p + 10, 0xfedc);
      dword(pointers + i * 4, 0xc01000);
      for (unsigned c = 0; c < 4; ++c)
        word(palettes + i * 8 + c * 2, 0x8000 + i * 4 + c);
    }
    for (unsigned i = 0; i < 12; ++i)
      bytes[config + 34 * 12 + i] = std::uint8_t(200 + i);
    dword(pointers + 34 * 4, 0x580005be);
    for (unsigned i = 0; i < 33; ++i)
      bytes[enemies + i] = std::uint8_t(i + 40);
    for (unsigned i = 0; i < 15; ++i)
      bytes[misc + i] = std::uint8_t(i + 90);
  }
};
void resources() {
  for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
    ResourceFixture f(version);
    const auto content = PsiResources::import(f.bytes, version);
    require(content->version() == version, "Imported resource region changed");
    for (unsigned id = 0; id < 34; ++id) {
      const auto &d = content->definition(id);
      require(d.graphics == id % 4 && d.frame_hold == id && d.frames == 1 &&
                  d.target_mode == id % 4 && d.enemy_color == 0xfedc &&
                  d.enemy_start == 7 && d.enemy_end == 13,
              "Imported configuration lost raw metadata");
      require(d.frame_data.size() == 65536 && d.frame_data.back() == 63,
              "Declared count truncated retained arrangement data");
      require(d.palette[3] == 0x8000 + id * 4 + 3,
              "Palette import dropped raw high bit");
    }
    for (unsigned i = 0; i < 4; ++i)
      require(content->graphics(i).size() == i + 1 &&
                  content->graphics(i).front() == 0xa0 + i,
              "Graphics import padded retained scratch tail");
    require(content->enemy_color(10)[2] == 72 &&
                content->misc_color(4)[2] == 104,
            "Dispatcher imported the wrong RGB tables");
    require(content->alias34().configuration[0] == 200 &&
                content->alias34().frame_pointer == 0x580005be,
            "Adjacent ID34 metadata was normalized");
    std::fill(f.bytes.begin(), f.bytes.end(), 0);
    require(content->definition(33).frame_data.back() == 63 &&
                content->graphics(3).front() == 0xa3,
            "Immutable resources retained borrowed input storage");
    rejects([&] { content->definition(34); },
            "Missing35th authored animation was fabricated");
    ResourceFixture invalid(version);
    invalid.dword(invalid.pointers, 0);
    rejects([&] { PsiResources::import(invalid.bytes, version); },
            "Nonasset arrangement pointer accepted");
    invalid = ResourceFixture(version);
    invalid.word(invalid.config, 0x1111);
    rejects([&] { PsiResources::import(invalid.bytes, version); },
            "Unknown graphics identity accepted");
    invalid = ResourceFixture(version);
    invalid.bytes[0x1000] = 0xff;
    rejects([&] { PsiResources::import(invalid.bytes, version); },
            "Short declared arrangement accepted");
  }
  rejects([] { PsiResources::import({}, static_cast<eb::GameVersion>(99)); },
          "Unsupported resource region accepted");
  rejects([] { PsiResources::import({}, eb::GameVersion::US); },
          "Truncated resource image accepted");
}
} // namespace
int main() {
  try {
    publication();
    advancement();
    resources();
    std::cout << "Native PSI state tests passed " << checks << " checks\n";
    return 0;
  } catch (const std::exception &error) {
    std::cerr << "Native PSI state tests failed after " << checks << ": "
              << error.what() << '\n';
    return 1;
  }
}
