#include "native_battle_frame_fixture.hpp"

namespace {
using namespace battle_frame_test;
namespace battle = eb::native::battle;

void finish_body(FrameFixture &f) {
  auto operation = f.frame.begin();
  check(operation->advance() && operation->complete() &&
            !operation->needs_publication(),
        "Uncontended frame body did not complete");
  check(operation->advance(), "Completed frame body restarted");
  rejects([&] { operation->respond(); },
          "Completed frame accepted a publication response");
}

void prefix_and_selection(eb::GameVersion version, unsigned depth, bool battle_mode) {
  FrameFixture f(version, depth);
  f.f.windows.prompt_state().battle_mode = battle_mode;
  f.background.shake(3);
  f.background.wobble(17);
  f.background.wait(9);
  f.display.staged_scroll = {{{11, 12}, {21, 22}, {31, 32}, {41, 42}}};
  const auto old_scroll = f.display.scroll;
  const auto old_colors = f.colors.displayed;
  const auto old_clock = f.f.clock.frame_counter;
  const auto old_polls = f.f.clock.input_polls;
  // Every skipped record deliberately has an unowned resource. The original
  // row reader must apply its participation gates before touching that field.
  for (unsigned slot = 9; slot < 14; ++slot) {
    f.roster.at(slot) = f.roster.at(8);
    f.roster.at(slot).resource = 0xff;
  }
  f.roster.at(9).consciousness = 0;
  f.roster.at(10).afflictions[0] = 1;
  f.roster.at(11).side = 0;
  f.roster.at(12).row = 2;
  f.roster.at(13).sprite = 0;
  // These are not enemy slots even with otherwise drawable records.
  f.roster.at(0) = f.roster.at(8);
  f.roster.at(0).resource = 0xff;
  finish_body(f);
  check(f.background.effects().shake_duration == 2 &&
            f.background.effects().wobble_duration == 16 &&
            f.background.effects().minimum_wait == 8 &&
            f.background.effects().horizontal_offset == 0xfffe,
        "Frame prefix timers or shake override differ");
  check(f.f.clock.frame_counter == old_clock && f.f.clock.input_polls == old_polls,
        "Direct frame body advanced the external clock or input");
  check(f.display.scroll == old_scroll && f.colors.displayed == old_colors,
        "Frame body published staging before a real boundary");
  check(f.frame_display.pending() == battle_mode,
        "Battle mode did not gate the actual UPDATE_SCREEN selection");
  const unsigned ui = depth == 2 ? 0 : 2;
  if (depth == 2 || battle_mode)
    check(f.display.staged_scroll[ui] == battle::PsiScroll{0xfffe, 0},
          "UI scroll was staged on the wrong background plane");
  else
    check(f.display.staged_scroll[2] == battle::PsiScroll{31, 32},
          "Nonbattle four-bit frame changed the UI scroll");
  if (battle_mode) {
    const auto pending = f.frame_display.preview_screen();
    check(pending.display_id == 1 && f.frame_display.next_buffer_id() == 2,
          "UPDATE_SCREEN did not choose and toggle its real buffer");
    check(pending.scroll[ui] == battle::PsiScroll{0xfffe, 0},
          "Pending screen missed the earlier UI scroll write");
    const unsigned generated = depth == 4 ? 1 : 2;
    check(pending.scroll[generated] == (depth == 4 ? battle::PsiScroll{21, 22}
                                                               : battle::PsiScroll{31, 32}),
          "Pending screen incorrectly captured later background generation");
    check(pending.objects && pending.objects->commands().size() == 1 &&
              pending.objects->commands()[0].slot == 8,
          "Frame rows selected a skipped or player record");
    f.frame_display.commit_publication();
    check(f.display.scroll == pending.scroll && !f.frame_display.pending(),
          "Actual screen commit did not latch the retained scroll snapshot");
  }
  // A completed operation can remain alive while the next real frame begins.
  auto first = f.frame.begin();
  check(first->advance(), "Second body did not complete");
  auto second = f.frame.begin();
  check(second->advance() && first->complete(),
        "Retaining a completed body blocked its successor");
}

void pressure_and_live_tail(eb::GameVersion version) {
  FrameFixture f(version, 4);
  for (unsigned i = 0; i < f.scratch.bytes.size(); ++i)
    f.scratch.bytes[i] = std::uint8_t(i * 13 + 7);
  auto seed = f.display.begin_transfer(
      {battle::PsiTransferKind::Graphics, 0, 0xc00, 0}, f.scratch, f.fade);
  check(seed->advance(), "Pressure seed unexpectedly waited");
  f.psi_state.time_until_next_frame = 1;
  f.psi_state.frame_hold = 5;
  f.psi_state.total_frames = 3;
  f.psi_state.frame_offset = 0xff00;
  f.psi_state.palette_countdown = 1;
  f.psi_state.palette_hold = 4;
  f.psi_state.palette_lower = 1;
  f.psi_state.palette_upper = 2;
  f.psi_state.palette[1] = 0x001f;
  f.psi_state.palette[2] = 0x03e0;
  f.background.shake(3);
  f.background.flash_red(26);
  f.background.flash_green(14);
  f.frame_state.hp_pp_blink_duration = 7;
  f.f.meters.state().drawn_mask = 1;
  f.f.meters.state().area_dirty = 0;
  f.ramps.speed = 1;
  f.ramps.banks[0].frames_left = 2;
  f.ramps.banks[0].steps[3] = 1;
  f.ramps.banks[0].deltas[3] = 1;
  const auto clock = f.f.clock.frame_counter;
  const auto polls = f.f.clock.input_polls;
  const auto pending_frame = f.f.clock.new_frame_started;
  auto body = f.frame.begin();
  check(!body->advance() && body->needs_publication(),
        "High-byte submission did not wait for the shared DMA budget");
  check(f.display.pending_bytes() == 0x1000 && f.display.pending().size() == 2,
        "Frame low bytes did not follow the older graphics transfer");
  check(f.psi_state.time_until_next_frame == 5 && f.psi_state.frame_offset == 0xff00 &&
            f.psi_state.total_frames == 3 && f.psi_state.palette_countdown == 1,
        "Frame advanced post-transfer PSI state before admission");
  check(f.background.effects().shake_duration == 2 &&
            f.background.effects().red_duration == 26 &&
            f.background.effects().green_duration == 14 &&
            f.frame_state.hp_pp_blink_duration == 7 && f.ramps.banks[0].frames_left == 2,
        "Suspended frame ran its tail or replayed its prefix");
  const auto buffer = f.frame_display.next_buffer_id();
  rejects([&] { body->respond(); }, "Frame accepted a fabricated DMA receipt");
  check(!body->advance() && f.frame_display.next_buffer_id() == buffer,
        "Repeated suspended advance replayed UPDATE_SCREEN");
  // Execute the real shared palette/map/graphics/OAM publication. This direct
  // body test deliberately leaves scheduler/input ownership to the Scene suite.
  const auto picture = f.publication.capture_next(*f.f.scene->frame());
  check(bool(picture) && f.display.pending_bytes() == 0 &&
            f.display.pending().empty() && !f.frame_display.pending(),
        "Publication did not actually drain the submitted work");
  check(f.display.tilemap[0] == f.scratch.bytes[0xff00] &&
            f.display.tilemap[256] == f.scratch.bytes[0],
        "Real low-byte publication lost the retained scratch wrap");
  // These are changes at the actual continuation boundary, not a second
  // shadow state. Source rereads the shared fields after the COPY returns.
  f.psi_state.frame_offset = 0xfe00;
  f.psi_state.total_frames = 7;
  f.background.flash_red(14);
  f.background.flash_green(13);
  f.frame_state.hp_pp_blink_duration = 4;
  body->respond();
  rejects([&] { body->respond(); }, "Frame consumed one publication twice");
  check(body->advance() && body->complete(), "Published frame did not resume");
  check(f.psi_state.frame_offset == 0x0200 && f.psi_state.total_frames == 6 &&
            f.psi_state.palette_countdown == 4 && f.psi_state.palette_index == 1,
        "PSI completion did not use the live callback state");
  check(f.display.pending_bytes() == 1024 && f.display.pending().size() == 1 &&
            f.display.pending()[0].kind == battle::PsiTransferKind::FrameHighBytes,
        "Resumed frame failed to queue its remaining high bytes");
  check(f.background.effects().shake_duration == 2 &&
            f.background.effects().red_duration == 13 &&
            f.background.effects().green_duration == 12 &&
            f.visual.fixed_color == PaletteColor{0, 31, 4},
        "Resumed frame replayed its prefix or lost red-then-green precedence");
  check(f.frame_state.hp_pp_blink_duration == 3 &&
            f.f.meters.state().drawn_mask == 0 && f.f.meters.state().area_dirty == 1,
        "Live meter blink did not undraw the actual window");
  check(f.ramps.banks[0].frames_left == 1 && f.colors.palette(0)[1] == 1 &&
            f.colors.staged[0][1] == 0x001f && f.colors.upload_mode == 16,
        "Palette effects did not run after PSI and overwrite its upload mode");
  check(f.colors.displayed[0][1] == 0 && f.colors.displayed[12][1] == 0,
        "Frame tail bypassed the staged palette boundary");
  check(f.f.clock.frame_counter == clock && f.f.clock.input_polls == polls &&
            f.f.clock.new_frame_started == pending_frame,
        "Direct body claimed another owner's clock or input receipt");
  f.publication.capture_next(*picture);
  check(f.display.tilemap[0] == (0x3000 | f.scratch.bytes[0xff00]) &&
            f.colors.displayed[12][1] == 1 && f.colors.displayed[0][1] == 0,
        "Later real upload lost high-byte order or mode16's delayed lower colors");
}

void raw_flash_and_meter(eb::GameVersion version) {
  FrameFixture f(version, 4);
  f.background.flash_red(0x8000);
  f.frame_state.hp_pp_blink_duration = 0x8000;
  f.f.meters.state().drawn_mask = 1;
  finish_body(f);
  check(f.background.effects().red_duration == 0x7fff &&
            f.visual.fixed_color == PaletteColor{},
        "Raw flash duration did not divide its decremented unsigned word");
  check(f.frame_state.hp_pp_blink_duration == 0x7fff &&
            f.f.meters.state().drawn_mask == 1,
        "High-bit meter duration incorrectly used signed division");
  f.background.flash_red(0x8001);
  f.frame_state.hp_pp_blink_duration = 0x8001;
  finish_body(f);
  check(f.background.effects().red_duration == 0x8000 &&
            f.visual.fixed_color == PaletteColor{},
        "High-bit red countdown changed its unsigned quotient");
  check(f.frame_state.hp_pp_blink_duration == 0x8000 &&
            f.f.meters.state().drawn_mask == 1,
        "High-bit meter quotient altered its visible phase");
  f.background.flash_red(0xffff);
  f.frame_state.hp_pp_blink_duration = 0x8002;
  finish_body(f);
  check(f.background.effects().red_duration == 0xfffe &&
            f.visual.fixed_color == PaletteColor{31, 0, 4},
        "Raw red duration used a signed negative quotient");
  check(f.frame_state.hp_pp_blink_duration == 0x8001 &&
            f.f.meters.state().drawn_mask == 0,
        "Raw meter duration used a signed negative quotient");
  f.background.flash_red(13);
  f.background.flash_green(1);
  finish_body(f);
  check(f.visual.fixed_color == PaletteColor{} &&
            std::none_of(f.visual.visible_layers.begin(), f.visual.visible_layers.end(),
                         [](bool enabled) { return enabled; }),
        "Later green-off branch failed to restore the selected layer configuration");
  f.frame_state.hp_pp_blink_duration = 2;
  f.f.meters.state().drawn_mask = 0;
  f.f.meters.state().area_dirty = 0;
  finish_body(f);
  check(f.frame_state.hp_pp_blink_duration == 1 &&
            f.f.meters.state().drawn_mask == 1 && f.f.meters.state().area_dirty == 1,
        "Meter redraw failed to restore mask and dirty the shared area");
}

void admission_and_lifetime(eb::GameVersion version) {
  FrameFixture f(version, 4);
  f.background.shake(3);
  auto child = f.psi.begin(f.fade);
  rejects([&] { f.frame.validate_begin(); }, "Frame accepted an active PSI child");
  check(f.background.effects().shake_duration == 3 && !f.frame_display.pending(),
        "Rejected active-child admission changed the frame prefix");
  check(child->advance(), "Inactive PSI child did not finish");
  f.frame_state.hp_pp_blink_duration = 1;
  f.frame_state.hp_pp_blink_target = 4;
  rejects([&] { f.frame.begin(); }, "Frame accepted an unowned meter target");
  check(f.background.effects().shake_duration == 3 && !f.frame.failed(),
        "Admission rejection mutated or poisoned the unused frame");
  f.frame_state.hp_pp_blink_target = 0;
  finish_body(f);
  auto unfinished = f.frame.begin();
  unfinished.reset();
  check(f.frame.failed(), "Abandoned frame continuation remained reusable");
  rejects([&] { f.frame.begin(); }, "Failed frame accepted another operation");
}

void inactive_secondary_frontier(eb::GameVersion version) {
  FrameFixture f(version, 2);
  f.background.darken();
  const auto effects = f.background.effects();
  const auto palette = f.colors.staged;
  bool matched = false;
  try { (void)f.frame.begin(); }
  catch (const BattlePaletteRestorationRequired &error) {
    matched = error.dependency == BattlePaletteDependency::InactiveSecondaryDestination;
  }
  check(matched, "Inactive destination frontier was mislabeled as a scene reset");
  check(f.background.effects() == effects && f.colors.staged == palette &&
            !f.frame.failed() && !f.frame_display.pending(),
        "Inactive destination rejection changed the unused frame");
}

void swirl_channel(eb::GameVersion version) {
  FrameFixture f(version, 4);
  f.swirl_data.definitions[1] = {1, 0, 2};
  f.swirl.hdma_channel_offset = 1;
  f.frame_display.hdma_enable = 0x6c;
  configure_world_swirl(f.swirl_data, f.swirl, f.visual, 1, 0);
  check(f.swirl.hdma_channel_offset == 0 && f.frame_display.hdma_enable == 0x6c,
        "Swirl setup did not reset its offset independently of installed HDMA");
  finish_body(f);
  check(f.swirl.hdma_channel_offset == 1 && f.swirl.frames_left == 1 &&
            f.frame_display.hdma_enable == 0x74,
        "Real frame clip did not replace only its previous HDMA channel");
  finish_body(f);
  check(f.swirl.hdma_channel_offset == 0 && f.swirl.frames_left == 0 &&
            f.frame_display.hdma_enable == 0x6c,
        "Alternating frame clip did not preserve unrelated HDMA channels");
}

void late_invalid_meter(eb::GameVersion version) {
  FrameFixture f(version, 4);
  auto seed = f.display.begin_transfer(
      {battle::PsiTransferKind::Graphics, 0, 0xc00, 0}, f.scratch, f.fade);
  check(seed->advance(), "Late-admission pressure seed waited");
  f.psi_state.time_until_next_frame = 1;
  f.psi_state.frame_hold = 2;
  f.psi_state.total_frames = 2;
  auto body = f.frame.begin();
  check(!body->advance() && body->needs_publication(),
        "Late-admission frame did not reach its actual publication");
  f.publication.capture_next(*f.f.scene->frame());
  f.frame_state.hp_pp_blink_duration = 2;
  f.frame_state.hp_pp_blink_target = 32;
  f.f.meters.state().drawn_mask = 0;
  f.f.meters.state().area_dirty = 0;
  body->respond();
  rejects([&] { body->advance(); }, "Live callback installed an unowned meter target");
  check(f.frame.failed() && f.frame_state.hp_pp_blink_duration == 2 &&
            f.f.meters.state().drawn_mask == 0 && f.f.meters.state().area_dirty == 0,
        "Late meter rejection performed an invalid shift or partial meter write");
  rejects([&] { body->advance(); }, "Failed tail was replayed after rejection");
}
} // namespace

int main() {
  try {
    for (const auto region : {eb::GameVersion::US, eb::GameVersion::JP}) {
      for (const unsigned depth : {2u, 4u})
        for (const bool battle_mode : {false, true})
          prefix_and_selection(region, depth, battle_mode);
      pressure_and_live_tail(region);
      raw_flash_and_meter(region);
      admission_and_lifetime(region);
      inactive_secondary_frontier(region);
      swirl_channel(region);
      late_invalid_meter(region);
    }
    std::cout << "Native battle frame tests passed: " << checks << " checks\n";
    return 0;
  } catch (const std::exception &error) {
    std::cerr << "Native battle frame tests failed after " << checks << ": "
              << error.what() << '\n';
    return 1;
  }
}
