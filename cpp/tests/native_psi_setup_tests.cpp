#include "eb/native/battle/action_state.hpp"
#include "eb/native/battle/psi_setup.hpp"
#include "eb/native/battle/roster.hpp"
#include "eb/native/battle_background_scene.hpp"
#include "eb/native/battle_combatants.hpp"
#include "eb/native/story/input.hpp"
#include "eb/native/story/ticks.hpp"
#include "eb/native/world_display_fade.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <type_traits>

namespace {
using namespace eb::native;
using namespace eb::native::battle;
unsigned checks{};
void check(bool value, const char *why) {
  ++checks;
  if (!value)
    throw std::runtime_error(why);
}
template <class F> void rejects(F call, const char *why) {
  bool rejected = false;
  try {
    call();
  } catch (const std::exception &) {
    rejected = true;
  }
  check(rejected, why);
}
struct Input {
  std::vector<std::uint8_t> bytes = std::vector<std::uint8_t>(0x180000);
  BattleCombatantLayout sprites{
      0x4000, 0x4100, 0x4200, 0x4300, 0x4400, 0x4500, 4, 0, 2, 3, 1, 3, 1};
  void word(unsigned at, unsigned value) {
    bytes.at(at) = std::uint8_t(value);
    bytes.at(at + 1) = std::uint8_t(value >> 8);
  }
  void pointer(unsigned at, unsigned value) {
    word(at, value);
    word(at + 2, 0xc0 + (value >> 16));
  }
  void fill_stream(unsigned at, unsigned count, unsigned value) {
    while (count) {
      const unsigned size = std::min(count, 1024u);
      bytes.at(at++) = std::uint8_t(0xe4 | ((size - 1) >> 8));
      bytes.at(at++) = std::uint8_t(size - 1);
      bytes.at(at++) = std::uint8_t(value);
      count -= size;
    }
    bytes.at(at) = 255;
  }
  Input(eb::GameVersion version, unsigned depth, unsigned target_mode) {
    const auto bg = battle_background_layout(version);
    for (unsigned i = 0; i < 327; ++i)
      bytes[bg.configurations + i * 17 + 2] = std::uint8_t(depth);
    bytes[bg.configurations + 17 + 2] = std::uint8_t(depth == 2 ? 4 : 2);
    for (unsigned i = 0; i < 103; ++i) {
      pointer(bg.graphics + i * 4, 0x2000);
      pointer(bg.arrangements + i * 4, 0x2100);
    }
    for (unsigned i = 0; i < 114; ++i)
      pointer(bg.palettes + i * 4, 0x2200);
    fill_stream(0x2000, 32, 0);
    fill_stream(0x2100, 2048, 0);
    for (unsigned i = 0; i < 16; ++i)
      word(0x2200 + i * 2, 0xffff - i * 73);
    const bool us = version == eb::GameVersion::US;
    const unsigned cfg = us ? 0xcf04d : 0xcf164,
                   palettes = us ? 0xcf47f : 0xcf596,
                   pointers = us ? 0xcf58f : 0xcf6a6;
    const std::array<unsigned, 4> graphics =
        us ? std::array<unsigned, 4>{0xcac25, 0xcb613, 0xcdb27, 0xce31d}
           : std::array<unsigned, 4>{0xcad3c, 0xcb72a, 0xcdc3e, 0xce434};
    for (unsigned i = 0; i < 4; ++i)
      fill_stream(graphics[i], i + 1, 0xa0 + i);
    fill_stream(0x3000, 1024, 0x71);
    fill_stream(0x3003, 1024,
                0x72); // Replace prior terminator with second block.
    for (unsigned id = 0; id < 34; ++id) {
      const auto at = cfg + id * 12;
      word(at, graphics[id % 4]);
      bytes[at + 2] = 3;
      bytes[at + 3] = 2;
      bytes[at + 4] = 1;
      bytes[at + 5] = 3;
      bytes[at + 6] = 1;
      bytes[at + 7] = std::uint8_t(target_mode);
      bytes[at + 8] = 7;
      bytes[at + 9] = 13;
      word(at + 10, 0xfedc);
      pointer(pointers + id * 4, 0x3000);
      for (unsigned c = 0; c < 4; ++c)
        word(palettes + id * 8 + c * 2, 0x8120 + id * 4 + c);
    }
    for (unsigned i = 0; i < 3; ++i) {
      const unsigned stream = i == 0 ? 0x4603 : 0x4600 + i * 32;
      pointer(0x4000 + i * 5, stream);
      bytes[0x4004 + i * 5] = std::uint8_t(i == 0 ? 1 : i == 1 ? 3 : 6);
      fill_stream(stream, i == 0 ? 512 : i == 1 ? 1024 : 8192, 0);
      word(0x4200 + i * 4, i + 1);
    }
    // FFFF*5 includes ASL carry: FFFC, then four INX wrap to0. The
    // first pointer's low byte3 is the actual zero-ID shape alias.
    bytes[0x13fff] = 6; // Poison the obsolete pictures+FFFF interpretation.
    pointer(0x4300, 0x4400);
    bytes[0x4400] = 255;
  }
};
void zero_sprite_alias() {
  constexpr std::array<unsigned, 8> shapes{0, 1, 2, 3, 4, 5, 6, 255};
  constexpr std::array<unsigned, 8> widths{0, 4, 8, 4, 8, 16, 16, 0};
  constexpr std::array<unsigned, 8> heights{0, 4, 4, 8, 8, 8, 16, 0};
  for (auto version : {eb::GameVersion::US, eb::GameVersion::JP})
    for (unsigned i = 0; i < shapes.size(); ++i) {
      Input input(version, 2, 0);
      const auto stream = 0x5000 + shapes[i];
      input.pointer(input.sprites.pictures, stream);
      input.fill_stream(stream, 512, 0);
      input.bytes[input.sprites.pictures + 0xffff] = shapes[i] == 3 ? 6 : 3;
      input.bytes[input.sprites.pictures - 1] = 6;
      BattleCombatants sprites(input.bytes, input.sprites);
      check(sprites.width(0) == widths[i] && sprites.height(0) == heights[i],
            "Zero-ID dimensions did not read the carry-wrapped table0 alias");
      check(sprites.width(1) == 4 && sprites.height(1) == 4,
            "Zero-ID fixture changed ordinary sprite dimensions");
    }
}
struct Fixture {
  Input input;
  std::shared_ptr<const PsiResources> resources;
  std::shared_ptr<const EnemyResources> enemies;
  BattleBackgroundScenes backgrounds;
  BattleBackgroundScene background;
  BattleCombatants sprites;
  Roster roster;
  ActionState action;
  PsiAnimationState state;
  PsiScratch scratch;
  PsiDisplayState display;
  PaletteBankState colors;
  PaletteEffectState ramp;
  PaletteEffects effects;
  WorldDisplayFade fade;
  story::TickState clock;
  story::InputState controls;
  PsiSetup setup;
  Fixture(eb::GameVersion version, unsigned depth, bool blank, unsigned mode)
      : input(version, depth, mode),
        resources(PsiResources::import(input.bytes, version)),
        enemies(EnemyResources::import(input.bytes, version)),
        backgrounds(input.bytes, version),
        background(backgrounds.prepare(BattleBackgroundPair{0, 0, 0})),
        sprites(input.bytes, input.sprites), roster(enemies),
        effects(colors, ramp),
        fade(WorldDisplayFadeState{std::uint8_t(blank ? 0x80 : 15), 0, 0, 0}),
        setup(resources, state, scratch, display, effects, background, roster,
              action, sprites, fade, clock) {
    action.target = 8;
    for (unsigned i = 0; i < 65536; ++i)
      scratch.bytes[i] = std::uint8_t(i * 7 + 0x53);
    for (unsigned i = 0; i < 16; ++i)
      state.palette[i] = std::uint16_t(0xa000 + i * 19);
    for (unsigned bank = 0; bank < 16; ++bank) {
      colors.staged[bank].fill(std::uint16_t(0x9000 + bank * 37));
      colors.displayed[bank].fill(std::uint16_t(0x1000 + bank));
    }
    state.time_until_next_frame = 23;
    state.x_offset = 0x5566;
    state.y_offset = 0x7788;
    state.enemy_targets.fill(0x1234);
    colors.upload_mode = 24;
    ramp.speed = 17;
    ramp.banks[1].frames_left = 9;
    ramp.banks[2].steps[4] = 0xabcd;
    display.graphics.fill(0x5d);
    display.tilemap.fill(0xaabb);
    display.staged_scroll = {{{11, 12}, {21, 22}}};
    display.scroll = {{{31, 32}, {41, 42}}};
    for (unsigned slot = 8; slot <= 13; ++slot) {
      auto &a = roster.at(slot);
      a.consciousness = 1;
      a.side = 1;
      a.sprite = 1;
      a.resource = std::uint8_t(std::min(slot - 8, 3u));
      a.x = 250;
      a.y = 240;
      a.alternate = std::uint8_t(17 - slot);
    }
    roster.at(9).sprite = 2;
    roster.at(10).y = 239;
    roster.at(11).afflictions[0] = 1;
    roster.at(12).side = 2;
    roster.at(13).consciousness = 0;
  }
  void publish() {
    colors.publish_pending();
    display.publish_pending(scratch);
    ++clock.frame_counter;
    ++clock.new_frame_started;
  }
  void poll() {
    if (!clock.new_frame_started)
      publish();
    clock.new_frame_started = 0;
    story::poll_input(controls, {0x8000, 0x4000});
    ++clock.input_polls;
  }
};
void complete(PsiSetup::Operation &op, Fixture &f) {
  unsigned remaining = 10;
  while (!op.advance()) {
    check(remaining-- != 0, "Setup did not finish bounded ordinary work");
    if (*op.service() == PsiSetupService::Publication)
      f.publish();
    else
      f.poll();
    op.respond();
  }
}
void setup_modes() {
  for (auto version : {eb::GameVersion::US, eb::GameVersion::JP})
    for (unsigned depth : {2u, 4u})
      for (bool blank : {false, true})
        for (unsigned mode = 0; mode <= 4; ++mode) {
          Fixture f(version, depth, blank, mode);
          const auto old_scratch = f.scratch.bytes;
          const auto old_palette = f.state.palette;
          const auto old_ramp = f.ramp;
          const auto old_displayed = f.display.scroll;
          check(
              f.setup.uses(f.roster, f.action, f.background, f.colors,
                           *f.resources) &&
                  f.setup.uses(f.display, f.scratch, f.colors, f.background) &&
                  f.setup.uses(f.clock),
              "Setup lost authoritative owner identity");
          check(f.sprites.height(0) == 8 && f.sprites.height(1) == 4 &&
                    f.sprites.height(2) == 8 && f.sprites.height(3) == 16,
                "Sprite height lost source units or raw zero-ID alias");
          auto op = f.setup.begin(1);
          check(!op->advance(), "Setup omitted its actual explicit wait");
          rejects([&] { op->respond(); },
                  "Setup accepted a service without actual work");
          check(f.state.time_until_next_frame == 23 &&
                    f.state.palette == old_palette,
                "Post-WAIT setup leaked into transfer phase");
          const auto expected_publications = blank ? 0u : depth == 2 ? 1u : 2u;
          while (*op->service() == PsiSetupService::Publication) {
            f.publish();
            op->respond();
            op->advance();
          }
          check(f.clock.frame_counter == expected_publications &&
                    f.clock.input_polls == 0,
                "Graphics transfers invented input polls or wrong chunk count");
          check(*op->service() == PsiSetupService::FrameWait,
                "Missing explicit WAIT phase");
          for (unsigned i = 0; i < (depth == 2 ? 4096u : 8192u); ++i) {
            const auto low = depth == 2 ? i : i / 32 * 16 + i % 32;
            const auto expected =
                depth == 4 && i % 32 >= 16 ? 0
                : low < 2 ? 0xa1
                          : old_scratch[(depth == 2 ? 0x8000 : 0) + low];
            check(f.display.graphics[i] == expected,
                  "Graphics expansion or retained tail differs");
          }
          if (depth == 2)
            check(f.display.graphics[4096] == 0x5d,
                  "Short upload changed upper artwork");
          const auto scratch_at_wait = f.scratch.bytes;
          f.poll();
          op->respond();
          check(op->advance(), "Setup did not return after WAIT");
          check(f.clock.input_polls == 1 && f.controls.held[0] == 0xc000,
                "Setup did not use one real merged input sample");
          check(f.state.frame_hold == 3 && f.state.total_frames == 1 &&
                    f.state.frame_offset == 0 &&
                    f.state.time_until_next_frame == 1 &&
                    f.state.enemy_start == 7 && f.state.enemy_end == 13,
                "Setup configuration or frame cursor differs");
          for (unsigned i = 4; i < 16; ++i)
            check(f.state.palette[i] == old_palette[i],
                  "Setup cleared local palette tail");
          for (unsigned i = 0; i < 65536; ++i)
            check(f.scratch.bytes[i] == (i < 1024   ? 0x71
                                         : i < 2048 ? 0x72
                                                    : scratch_at_wait[i]),
                  "Frame decompression cleared retained scratch");
          check(f.ramp == old_ramp, "Setup reset independent palette ramps");
          for (unsigned bank = 0; bank < 4; ++bank)
            check(f.colors.staged[12 + bank] == f.colors.staged[8 + bank],
                  "Normal palette copy lost a raw color");
          const std::array<std::uint16_t, 4> mask =
              mode == 0 || mode == 3 ? std::array<std::uint16_t, 4>{1, 0, 0, 0}
              : mode == 1            ? std::array<std::uint16_t, 4>{1, 1, 0, 0}
              : mode == 2            ? std::array<std::uint16_t, 4>{1, 1, 1, 0}
                                     : std::array<std::uint16_t, 4>{};
          check(f.state.enemy_targets == mask,
                "Single/row/all target selection differs");
          check(
              f.state.x_offset ==
                      (mode == 0 || mode == 3 ? std::uint16_t(128 - 250) : 0) &&
                  f.state.y_offset ==
                      (mode == 0 || mode == 3 ? std::uint16_t(144 - 240)
                       : mode == 1            ? std::uint16_t(144 - 240 + 16)
                       : mode == 2            ? 16
                                              : 0x7788),
              "Setup offsets differ");
          check(f.roster.at(11).alternate == 6 &&
                    f.roster.at(12).alternate == 5 &&
                    f.roster.at(13).alternate == 4,
                "Setup cleared unselected alternate bytes");
          check(f.display.scroll == old_displayed,
                "Setup latched scroll without UPDATE_SCREEN");
        }
}
void late_and_queued_inputs() {
  Fixture f(eb::GameVersion::US, 4, false, 0);
  f.display.queue_frame(
      0); // Old queued live scratch is overwritten before its drain.
  auto op = f.setup.begin(0);
  check(!op->advance() && *op->service() == PsiSetupService::Publication,
        "Setup skipped prior queued DMA");
  f.publish();
  check(f.display.tilemap[0] == 0x30a0,
        "Earlier map did not see setup's new live scratch");
  f.display.queue_clear(); // Actual IRQ callback stages work after byte counter
                           // clears.
  op->respond();
  check(!op->advance(), "Setup skipped callback-added queue");
  check(f.display.pending().front().kind == PsiTransferKind::Clear,
        "Graphics replaced the callback's pending work");
  f.publish();
  op->respond();
  op->advance();
  check(f.display.pending().front().kind == PsiTransferKind::Graphics &&
            f.display.pending_bytes() == 0x1200,
        "First graphics chunk is not1200");
  f.scratch.bytes[0x8000] = 0x7b;
  f.publish();
  check(f.display.graphics[0] == 0x7b && f.display.graphics[0x1200] == 0x5d,
        "Partial graphics DMA ignored late data or copied next chunk");
  op->respond();
  op->advance();
  check(f.display.pending_bytes() == 0xe00 &&
            f.display.pending().front().destination == 0x1200,
        "Second chunk source/destination did not advance");
  f.publish();
  op->respond();
  op->advance();
  f.action.target = 9;
  f.roster.at(9).x = 4;
  f.roster.at(9).y = 20;
  f.background = f.backgrounds.prepare(BattleBackgroundPair{1, 0, 0});
  f.poll();
  op->respond();
  check(op->advance(), "Late target setup failed");
  check(f.state.palette_base == 64 && f.state.x_offset == 124 &&
            f.state.y_offset == 140 && f.state.enemy_targets[1] == 1 &&
            f.display.staged_scroll[1] == PsiScroll{124, 140},
        "Setup cached target or final background mode across WAIT");
  check(f.display.scroll[1] == PsiScroll{41, 42},
        "Late placement prematurely latched scroll");
  Fixture inactive(eb::GameVersion::US, 2, true, 0);
  inactive.roster.at(8).consciousness = 0;
  inactive.roster.at(8).resource = 255;
  auto skip = inactive.setup.begin(0);
  complete(*skip, inactive);
  check(inactive.state.x_offset == 0x5566 &&
            inactive.state.y_offset == 0x7788 &&
            inactive.display.staged_scroll[1] == PsiScroll{21, 22} &&
            inactive.state.enemy_targets == std::array<std::uint16_t, 4>{},
        "Inactive target consulted resource or changed offsets");
  Fixture invalid(eb::GameVersion::JP, 2, true, 0);
  auto rejected = invalid.setup.begin(0);
  rejected->advance();
  invalid.poll();
  rejected->respond();
  invalid.roster.at(8).resource = 4;
  const auto state = invalid.state;
  const auto colors = invalid.colors.staged;
  const auto scratch = invalid.scratch.bytes;
  rejects([&] { rejected->advance(); },
          "Out-of-owned live target resource accepted");
  check(invalid.state == state && invalid.colors.staged == colors &&
            invalid.scratch.bytes == scratch,
        "Rejected late target partially changed setup tail");
}
void lifecycle_and_transport() {
  Fixture f(eb::GameVersion::US, 2, true, 0);
  rejects([&] { f.setup.begin(34); },
          "Malformed adjacent animation alias accepted");
  auto op = f.setup.begin(0);
  rejects([&] { f.setup.begin(0); }, "Concurrent setup operation accepted");
  complete(*op, f);
  op.reset();
  auto again = f.setup.begin(0);
  complete(*again, f);
  Fixture changing(eb::GameVersion::US, 4, false, 0);
  auto chunked = changing.setup.begin(0);
  chunked->advance();
  changing.publish();
  changing.fade.begin_out(16, 0);
  changing.fade.commit_frame(changing.fade.preview_next_frame());
  chunked->respond();
  rejects([&] { chunked->respond(); },
          "Completed publication acknowledged twice");
  check(!chunked->advance() &&
            *chunked->service() == PsiSetupService::FrameWait &&
            changing.display.pending().empty() &&
            changing.clock.frame_counter == 1,
        "Live forced blank did not make the remaining chunk immediate");
  changing.poll();
  chunked->respond();
  chunked->advance();
  for (unsigned mask : {0u, 0x10u, 0x20u}) {
    Fixture unsupported(eb::GameVersion::US, 4, false, 0);
    unsupported.clock.interrupt_mask = std::uint8_t(mask);
    const auto original = unsupported.scratch.bytes;
    rejects([&] { unsupported.setup.begin(0); },
            "Unowned queued publication timing was accepted");
    check(unsupported.scratch.bytes == original &&
              unsupported.display.pending().empty(),
          "Unsupported transfer admission mutated shared state");
  }
  PsiScratch scratch;
  PsiDisplayState display;
  scratch.bytes[65535] = 91;
  scratch.bytes[0] = 92;
  display.queue_graphics(65535, 2, 8190);
  const auto preview = display.preview_graphics(scratch);
  check(preview[8190] == 91 && preview[8191] == 92 &&
            display.graphics[8190] == 0,
        "Graphics preview lost source-bank wrapping or mutated visible state");
  display.publish_pending(scratch);
  check(display.graphics == preview && display.pending_bytes() == 0 &&
            display.publication_serial() == 1,
        "Actual graphics publication differs from preview");
  rejects([&] { display.queue_graphics(0, 0, 0); },
          "Unowned zero-size DMA accepted");
  rejects([&] { display.queue_graphics(0, 0x1201, 0); },
          "Oversized transfer chunk accepted");
  rejects([&] { display.queue_graphics(0, 2, 8191); },
          "Graphics destination overflow accepted");
  check(display.pending().empty(), "Rejected transfer mutated queue");
}
void held_ring_setup() {
  Fixture f(eb::GameVersion::US, 2, false, 0);
  for (unsigned i = 0; i < 31; ++i) {
    auto write = f.display.begin_transfer(
        {PsiTransferKind::Graphics, std::uint16_t(i), 1, std::uint16_t(i * 2)},
        f.scratch, f.fade);
    check(write->advance(),
          "Initial tiny transfer required an unexpected wait");
  }
  auto held = f.display.begin_transfer({PsiTransferKind::Graphics, 5, 1, 8190},
                                       f.scratch, f.fade);
  check(!held->advance(), "Fixture did not reach actual ring admission wait");
  f.publish();
  held->respond();
  check(held->advance() && f.display.pending_bytes() == 0 &&
            f.display.pending().size() == 1,
        "Fixture did not retain its admitted record after raw counter reset");
  const auto retained = f.scratch.bytes[5];
  auto setup = f.setup.begin(0);
  check(
      !setup->advance() && setup->service() == PsiSetupService::Publication &&
          f.display.pending().size() == 2 &&
          f.display.pending_bytes() == 0x1000,
      "SHOW rejected or prematurely drained the valid raw-counter-zero queue");
  f.publish();
  check(f.display.graphics[8190] == retained,
        "SHOW graphics chunk reordered the earlier held descriptor");
  setup->respond();
  complete(*setup, f);
  check(setup->complete() && f.clock.input_polls == 1,
        "Held queue changed SHOW completion or explicit input count");
}
} // namespace
int main() {
  try {
    static_assert(!std::is_copy_constructible_v<PsiSetup>);
    zero_sprite_alias();
    setup_modes();
    late_and_queued_inputs();
    lifecycle_and_transport();
    held_ring_setup();
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
  std::cout << "Native PSI setup tests passed: " << checks << " checks\n";
}
