#include "eb/native/battle/psi_animation.hpp"
#include "eb/native/battle_background_scene.hpp"
#include "eb/native/world_display_fade.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
namespace {
using namespace eb::native;
using namespace eb::native::battle;
unsigned checks{};
void require(bool condition, const char *message) {
  ++checks;
  if (!condition)
    throw std::runtime_error(message);
}
template <class F> void rejects(F f, const char *message) {
  bool rejected = false;
  try {
    f();
  } catch (const std::exception &) {
    rejected = true;
  }
  require(rejected, message);
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

void finish(PsiDisplayState::TransferOperation &operation) {
  require(operation.advance() && operation.complete() &&
              !operation.needs_publication(),
          "Ordinary transfer did not complete admission");
}
void ring() {
  PsiScratch scratch;
  PsiDisplayState display;
  WorldDisplayFade fade(WorldDisplayFadeState{15});
  for (unsigned cycle = 0; cycle < 40; ++cycle) {
    for (unsigned i = 0; i < 31; ++i) {
      scratch.bytes[i] = std::uint8_t(cycle + i);
      auto op =
          display.begin_transfer({PsiTransferKind::Graphics, std::uint16_t(i),
                                  1, std::uint16_t(i * 2)},
                                 scratch, fade);
      finish(*op);
    }
    const auto producer = display.producer_index();
    const auto consumer = display.consumer_index();
    require(display.pending().size() == 31 && display.pending_bytes() == 31,
            "Ring seeding did not use actual transfer admission");
    auto last = display.begin_transfer({PsiTransferKind::Graphics, 40, 1, 100},
                                       scratch, fade);
    require(!last->advance() && last->needs_publication(),
            "Full ring failed to suspend producer publication");
    require(display.producer_index() == producer &&
                display.consumer_index() == consumer &&
                display.pending_bytes() == 32 && display.pending().size() == 31,
            "Full ring published or omitted credit for its held descriptor");
    rejects([&] { last->respond(); }, "Ring accepted a fake publication");
    scratch.bytes[40] = std::uint8_t(cycle + 90);
    const auto held_old = display.graphics[100];
    display.publish_pending(scratch);
    require(display.graphics[100] == held_old && display.pending().empty() &&
                !display.pending_bytes(),
            "NMI consumed an unpublished ring record");
    last->respond();
    finish(*last);
    require(display.pending().size() == 1 && !display.pending_bytes(),
            "Resumed producer fabricated a byte credit after actual NMI reset");
    rejects([&] { last->respond(); },
            "Completed transfer accepted second acknowledgment");
    display.publish_pending(scratch);
    require(display.graphics[100] == std::uint8_t(cycle + 90),
            "Next NMI omitted held descriptor");
    for (unsigned i = 0; i < 31; ++i)
      require(display.graphics[i * 2] == std::uint8_t(cycle + i),
              "Live ring data order changed");
    require(display.producer_index() == display.consumer_index(),
            "Drained ring cursors disagree");
  }
}
void budget_and_live_parameters() {
  PsiScratch scratch;
  PsiDisplayState display;
  WorldDisplayFade fade(WorldDisplayFadeState{15});
  auto seed = display.begin_transfer({PsiTransferKind::Graphics, 0, 0x1200, 0},
                                     scratch, fade);
  finish(*seed);
  auto blocked = display.begin_transfer({PsiTransferKind::FrameLowBytes, 100},
                                        scratch, fade);
  require(!blocked->advance() && display.pending_bytes() == 0x1200,
          "Budget wait prematurely credited its unadmitted descriptor");
  display.publish_pending(scratch);
  // A real callback producer replaces shared COPY parameters and adds new work.
  auto callback =
      display.begin_transfer({PsiTransferKind::Clear, 0}, scratch, fade);
  finish(*callback);
  blocked->respond();
  require(!blocked->advance() && blocked->needs_publication(),
          "Budget wait ignored callback-restaged actual bytes");
  display.publish_pending(scratch);
  blocked->respond();
  finish(*blocked);
  require(display.pending_bytes() == 2048 && display.pending().size() == 1 &&
              display.pending().front().kind == PsiTransferKind::Clear,
          "Budget continuation hid shared COPY parameter replacement");
  display.publish_pending(scratch);

  auto again = display.begin_transfer({PsiTransferKind::Graphics, 0, 0x1200, 0},
                                      scratch, fade);
  finish(*again);
  auto low = display.begin_transfer({PsiTransferKind::FrameLowBytes, 65530},
                                    scratch, fade);
  require(!low->advance(), "Expected low-plane budget wait");
  fade.begin_out(16, 0);
  fade.commit_frame(fade.preview_next_frame());
  require(fade.state().brightness == 0x80, "Fixture fade did not force blank");
  display.publish_pending(scratch);
  low->respond();
  finish(*low);
  require(display.pending().size() == 1 && display.pending_bytes() == 1024,
          "COPY incorrectly reread blank after its budget wait");
  auto high = display.begin_transfer({PsiTransferKind::FrameHighBytes, 0},
                                     scratch, fade);
  finish(*high);
  require(display.tilemap[0] == 0x3000 && display.pending().size() == 1,
          "Next forced-blank COPY did not execute immediately");
  scratch.bytes[65530] = 0x83;
  scratch.bytes[0] = 0x47;
  display.publish_pending(scratch);
  require(display.tilemap[0] == 0x3083 && display.tilemap[6] == 0x3047,
          "Delayed map DMA failed live-source bank wrapping");
}
void destination_domain() {
  PsiScratch scratch;
  PsiDisplayState display;
  WorldDisplayFade fade(WorldDisplayFadeState{15});
  const auto before = display.copy_parameters();
  rejects(
      [&] {
        display.begin_transfer({PsiTransferKind::Graphics, 0, 1, 3}, scratch,
                               fade);
      },
      "Word-addressed source DMA accepted an odd byte destination");
  require(display.pending().empty() && !display.pending_bytes() &&
              display.copy_parameters() == before && !display.failed(),
          "Rejected graphics destination changed its transport owner");
}
void wrapping_budget() {
  PsiScratch scratch;
  PsiDisplayState display;
  WorldDisplayFade fade(WorldDisplayFadeState{15});
  // Raw owned entry state:31 clear records credit63488. The source addition
  // wraps before comparing, so the32nd credit becomes0 and reaches ring wait.
  for (unsigned i = 0; i < 31; ++i)
    display.queue_clear();
  auto clear =
      display.begin_transfer({PsiTransferKind::Clear, 0}, scratch, fade);
  require(!clear->advance() && display.pending_bytes() == 0,
          "Budget addition did not wrap before unsigned threshold");
  display.publish_pending(scratch);
  clear->respond();
  finish(*clear);
  display.publish_pending(scratch);
}
void animation_order() {
  BackgroundFixture input;
  BattleBackgroundScenes catalog(input.bytes, eb::GameVersion::US);
  auto background = catalog.prepare(BattleBackgroundPair{0, 0, 0});
  PsiAnimationState state;
  PsiScratch scratch;
  PsiDisplayState display;
  PaletteBankState colors;
  PaletteEffectState ramps;
  PaletteEffects effects(colors, ramps);
  PsiAnimation animation(state, scratch, display, effects, background);
  WorldDisplayFade fade(WorldDisplayFadeState{15});
  state.time_until_next_frame = 1;
  state.frame_hold = 7;
  state.total_frames = 4;
  state.frame_offset = 0xff80;
  state.palette_countdown = 1;
  state.palette_hold = 9;
  state.palette_lower = state.palette_upper = 1;
  state.palette_base = 48;
  state.palette[1] = 0x91ab;
  state.enemy_start = 1;
  effects.set_speed(3);
  auto earlier = display.begin_transfer(
      {PsiTransferKind::Graphics, 0, 0xc00, 0}, scratch, fade);
  finish(*earlier);
  const auto saved = state;
  rejects([&] { animation.advance(); },
          "Synchronous advance silently crossed a required publication");
  require(state == saved && display.pending_bytes() == 0xc00,
          "Nonblocking preflight rejection mutated state");
  animation.validate_begin();
  auto operation = animation.begin(fade);
  rejects([&] { animation.validate_begin(); },
          "Frame preflight accepted an already active PSI child");
  require(!operation->advance() && operation->needs_publication(),
          "High-plane call did not suspend independently");
  require(state.time_until_next_frame == 7 && state.total_frames == 4 &&
              state.frame_offset == 0xff80 && state.palette_countdown == 1 &&
              state.enemy_start == 1 && ramps.speed == 3,
          "Animation tail ran before both transfer admissions completed");
  require(display.pending_bytes() == 0x1000 &&
              display.pending().back().kind == PsiTransferKind::FrameLowBytes,
          "Low-plane transfer was not admitted before high-plane wait");
  rejects([&] { operation->respond(); },
          "Animation accepted a fake publication");
  scratch.bytes[0xff80] = 0x85;
  display.publish_pending(scratch);
  require(display.tilemap[0] == 0x85,
          "Real intermediate low plane was not visible");
  state.frame_offset = 0x7f00;
  state.total_frames = 10;
  operation->respond();
  require(operation->advance() && operation->complete(),
          "Animation did not finish after real budget drain");
  require(state.frame_offset == 0x8300 && state.total_frames == 9 &&
              state.palette_countdown == 9 &&
              colors.staged_color(49) == 0x91ab && ramps.speed == 20,
          "Post-wait cursor/count/palette/enemy reads were stale or reordered");
  require(display.pending().size() == 1 &&
              display.pending().front().kind == PsiTransferKind::FrameHighBytes,
          "Animation incorrectly waited for or omitted final high-plane "
          "publication");
  display.publish_pending(scratch);
  require(display.tilemap[0] == 0x3085,
          "Final high plane did not preserve published low bytes");
  auto next = animation.begin(fade);
  require(next->advance(),
          "Completed retained operation blocked the next advance");
}
} // namespace
int main() {
  try {
    ring();
    budget_and_live_parameters();
    destination_domain();
    wrapping_budget();
    animation_order();
    std::cout << "Native PSI transfer tests passed: " << checks << " checks\n";
    return 0;
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
