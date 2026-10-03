#include "eb/native/battle/background_loader.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
using namespace eb::native::battle;
unsigned checks{};
void check(bool ok, const char *message) {
  ++checks;
  if (!ok) throw std::runtime_error(message);
}
template<class F> void rejects(F operation, const char *message) {
  bool caught = false;
  try { operation(); } catch (const std::exception &) { caught = true; }
  check(caught, message);
}
void word(std::vector<std::uint8_t> &bytes, unsigned at, unsigned value) {
  bytes.at(at) = std::uint8_t(value);
  bytes.at(at + 1) = std::uint8_t(value >> 8);
}
void pointer(std::vector<std::uint8_t> &bytes, unsigned at, unsigned value) {
  word(bytes, at, value); word(bytes, at + 2, 0xc0 + (value >> 16));
}
std::vector<std::uint8_t> image(eb::GameVersion version) {
  std::vector<std::uint8_t> bytes(0x110000);
  const auto layout = battle_background_layout(version);
  for (unsigned i = 0; i < 327; ++i) {
    const auto at = layout.configurations + i * 17;
    bytes[at + 2] = i == 2 || i == 3 ? 2 : 4;
    bytes[at + 3] = 1; bytes[at + 4] = 1; bytes[at + 5] = 3;
    bytes[at + 8] = 1;
  }
  bytes[layout.configurations + 3 * 17 + 3] = 0;
  // A nonzero second distortion slot, with slot0 zero, is admitted by GENERATE.
  bytes[layout.configurations + 4 * 17 + 14] = 1;
  word(bytes, layout.distortions + 17, 5);
  bytes[layout.distortions + 19] = 1;
  word(bytes, layout.distortions + 20, 0x100);
  word(bytes, layout.distortions + 22, 0x1000);
  word(bytes, layout.distortions + 32, 0xabcd);
  for (unsigned i = 0; i < 103; ++i) {
    pointer(bytes, layout.graphics + i * 4, 0x1000);
    pointer(bytes, layout.arrangements + i * 4, 0x1100);
  }
  for (unsigned i = 0; i < 114; ++i)
    pointer(bytes, layout.palettes + i * 4, 0x1200);
  bytes[0x1000] = 31;
  for (unsigned i = 0; i < 32; ++i) bytes[0x1001 + i] = std::uint8_t(i * 7 + 1);
  bytes[0x1021] = 0xff;
  // Two repetitions yield a complete2048-byte map with tile0 only.
  bytes[0x1100] = 0xe7; bytes[0x1101] = 0xff; bytes[0x1102] = 0;
  bytes[0x1103] = 0xe7; bytes[0x1104] = 0xff; bytes[0x1105] = 0;
  bytes[0x1106] = 0xff;
  for (unsigned i = 0; i < 16; ++i) word(bytes, 0x1200 + i * 2, 0x8000 | i * 0x421);
  return bytes;
}
struct Fixture {
  eb::GameVersion version;
  std::vector<std::uint8_t> bytes;
  BattleBackgroundScenes resources;
  BattleBackgroundScene background;
  BackgroundDisplayState layout{0xa5, {1, 2, 3, 4}, {0x56, 0x78}};
  PaletteBankState colors;
  PsiScratch scratch;
  PsiDisplayState display;
  FrameDisplay frames{display};
  WorldDisplayFade fade{WorldDisplayFadeState{15}};
  story::TickState clock;
  FrameState state;
  WorldSwirlState swirl;
  WorldEncounterVisualState visual;
  WorldLayerConfigurations layers;
  WorldLayerSelection selection{9};
  BackgroundLoader loader;
  explicit Fixture(eb::GameVersion region)
      : version(region), bytes(image(region)), resources(bytes, region),
        background(resources.prepare(BattleBackgroundPair{0, 0, 0})),
        layers(bytes, region), loader(resources, background, layout, colors, scratch,
        display, frames, fade, clock, state, swirl, visual, layers, selection) {
    for (unsigned i = 0; i < 65536; ++i) {
      scratch.bytes[i] = std::uint8_t((i * 13 + 17) % 251);
      display.set_vram_byte(std::uint16_t(i), std::uint8_t(i * 3 + 9));
    }
    display.staged_scroll = {{{11, 12}, {21, 22}, {31, 32}, {41, 42}}};
    frames.hdma_enable = 0x9b;
    swirl.hdma_channel_offset = 1; swirl.update_in = 7;
    visual.window_rows_enabled = true;
    visual.window_layers.fill(true); visual.window_invert = true;
    colors.staged[1].fill(0x9abc); colors.displayed[2].fill(0x1234);
  }
};
void run(eb::GameVersion version) {
  Fixture f(version);
  const auto incoming = f.display.vram();
  const auto scratch = f.scratch.bytes;
  const auto layout = f.layout;
  rejects([&] { f.loader.load(BattleBackgroundPair{0, 1, 4}); }, "Visible loader admission accepted");
  check(f.display.vram() == incoming && f.scratch.bytes == scratch && f.layout == layout && !f.loader.failed(),
        "Failed admission mutated loader owners");
  auto queued = f.display.begin_transfer({PsiTransferKind::Vram, 0x300, 32, 0x4400, 0}, f.scratch, f.fade);
  check(queued->advance(), "Ordinary pending copy unexpectedly suspended");
  check(f.display.pending().size() == 1 && f.display.pending_bytes() == 32, "Pending copy missing");
  f.fade.force_blank();
  rejects([&] { f.loader.load(BattleBackgroundPair{0, 2, 4}); }, "Mixed depth pair accepted");
  check(!f.loader.failed() && f.scratch.bytes == scratch, "Rejected pair mutated shared scratch");
  auto *const owner = &f.background;
  f.loader.load(BattleBackgroundPair{0, 1, 5});
  check(&f.background == owner && f.loader.uses(f.background, f.colors, f.scratch, f.display, f.frames),
        "Stable loader owner changed");
  check(f.display.pending().size() == 1 && f.display.pending_bytes() == 32 && f.clock.publications == 0,
        "Forced blank loader consumed existing queue or invented a publication");
  check(f.layout.mode == 0xa9 && f.layout.maps == layout.maps && f.layout.graphics == layout.graphics,
        "Ordinary four-bit bases failed retention");
  for (unsigned i = 0; i < 0x2000; ++i) {
    const auto expected = i < 32 ? f.resources.layers().graphics(0)[i] : scratch[i];
    check(f.display.vram_byte(std::uint16_t(0x2000 + i)) == expected,
          "Primary fixed copy lost exact decoded extent or scratch tail");
  }
  check(f.scratch.bytes[0x800] == scratch[0x800] && f.scratch.bytes[0xffff] == scratch[0xffff],
        "Arrangement decode zero-filled retained scratch tail");
  check(f.colors.staged_palette(2) == f.resources.layers().palette(0) &&
            f.colors.staged_palette(4) == f.resources.layers().palette(1) && f.colors.upload_mode == 24 &&
            f.colors.displayed[2][0] == 0x1234 && f.colors.staged[1][0] == 0x9abc,
        "Loader palette writes lost raw high bit or published too early");
  check(f.frames.letterbox.visible == 0x215 && f.frames.letterbox.nonvisible == 0x14 &&
            f.frames.letterbox.top_end == 47 && f.frames.letterbox.bottom_start == 176,
        "Independent four-bit letterbox descriptor differs");
  check(f.selection.value == 7 && !f.visual.window_invert &&
            std::none_of(f.visual.window_layers.begin(), f.visual.window_layers.end(), [](bool b) { return b; }) &&
            f.swirl.update_in == 0 && f.frames.hdma_enable == 0x8f,
        "LOAD final selected layers or swirl disable differs");
  f.loader.load(BattleBackgroundPair{4, 0, 0});
  check((f.frames.hdma_enable & 0x20) != 0 && f.background.primary().state().distortion_index == 1,
        "Slot1-only distortion did not install the real generated stream");
  check(f.background.primary().state().distortion.compression_acceleration == 0xabcd,
        "Generated distortion data differs");
  f.loader.load(BattleBackgroundPair{2, 3, 1});
  check(f.background.primary().state().distortion.compression_acceleration == 0xab00,
        "MEMSET16 odd compression byte did not survive two-bit loading");
  check(f.layout.mode == 0xa8 && f.layout.maps == std::array<std::uint8_t,4>{0x7c,0x58,0x5c,0x0c} &&
            f.layout.graphics == std::array<std::uint8_t,2>{6,0x31}, "Two-bit layout differs");
  check(f.display.staged_scroll == std::array<PsiScroll,4>{} && f.selection.value == 3,
        "Two-bit layout failed exact staged scroll reset");
  const auto secondary = f.background.secondary()->state();
  const auto metadata = f.background.layer_metadata(1);
  f.loader.load(BattleBackgroundPair{2, 0, 0});
  check(!f.background.secondary() && f.background.retained_secondary_background()->state() == secondary &&
            f.background.layer_metadata(1).target_layer == 0 &&
            f.background.layer_metadata(1).palette_base == metadata.palette_base && f.selection.value == 3,
        "Disabled secondary lost actual previous metadata or state");
  check(f.background.can_brighten_inactive_secondary(), "Retained known palette destination rejected");
  f.background.darken();
  f.background.advance_effects(&f.colors);
  check(f.background.retained_secondary_background()->packed_palette_base() == f.colors.staged_palette(6),
        "Inactive retained brightness failed real palette destination");
  Fixture prayer(version);
  prayer.fade.force_blank();
  const auto tail = prayer.scratch.bytes;
  prayer.loader.load(BattleBackgroundPair{0, 0, 0}, BattleArtworkPublication::GiygasPrayer);
  check(prayer.layout.maps[1] == 0x5c && prayer.layout.graphics[0] == 0x36 &&
            prayer.display.vram_byte(0x6000 + 0x3000) == tail[0x3000],
        "Prayer extended graphics publication differs");
  Fixture invalid(version);
  invalid.fade.force_blank(); invalid.swirl.hdma_channel_offset = 2;
  rejects([&] { invalid.loader.load(0); }, "Invalid channel owner accepted");
  check(!invalid.loader.failed(), "Preflight poisoned loader");
  BattleBackgroundStart bad;
  bad.retained_secondary_metadata.palette_base = 241;
  rejects([&] { f.resources.prepare(BattleBackgroundPair{2,0,0}, bad); }, "Invalid retained metadata accepted");
  bad = {}; bad.primary_axis = BattleDistortionAxis(99);
  rejects([&] { f.resources.prepare(BattleBackgroundPair{2,0,0}, bad); }, "Invalid retained raster accepted");
}
} // namespace
int main() {
  try {
    run(eb::GameVersion::US); run(eb::GameVersion::JP);
    std::cout << "Native battle background loader tests: " << checks << " checks passed\n";
    return 0;
  } catch (const std::exception &e) { std::cerr << e.what() << '\n'; return 1; }
}
