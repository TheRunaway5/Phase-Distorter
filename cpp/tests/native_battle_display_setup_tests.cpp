#include "eb/native/battle/background_loader.hpp"
#include "native_battle_frame_fixture.hpp"

namespace {
using namespace battle_frame_test;
using eb::GameVersion;
using battle::DisplayBlankKind;
using battle::DisplaySetup;

struct AdmissionState {
  WorldDisplayFadeState fade;
  std::uint8_t hdma{}, displayed_hdma{}, pending_frame{};
  bool rows{};
  std::uint64_t revision{}, publications{}, polls{};
  bool operator==(const AdmissionState &) const = default;
};

AdmissionState state(const FrameFixture &a) {
  return {a.fade.state(), a.frame_display.hdma_enable,
          a.frame_display.displayed_hdma_enable, a.f.clock.new_frame_started,
          a.visual.window_rows_enabled, a.visual.window_revision,
          a.f.clock.publications, a.f.clock.input_polls};
}

void publish(FrameFixture &a) {
  auto operation = a.f.scene->begin_publication();
  service(*operation, story::SceneService::Publication);
  operation->complete_publication();
  finish(*operation);
}

void helper_flow(GameVersion region, DisplayBlankKind kind, std::uint8_t step,
                 bool initial_rows) {
  FrameFixture a(region, 4);
  a.fade.begin_in(step, 0);
  a.frame_display.hdma_enable = 0x64;
  a.frame_display.displayed_hdma_enable = 0x64;
  a.visual.window_rows_enabled = initial_rows;
  a.visual.window_revision = 27;
  a.f.clock.new_frame_started = 255;
  a.f.input.held = {0x8123, 0x4567};
  const auto before = state(a);
  const auto random = a.f.random;
  const auto actors = a.f.actors.ticks();
  const auto input = a.f.input.held;
  const auto old_frame = a.f.scene->frame();
  DisplaySetup setup(region, a.fade, a.frame_display, a.f.clock, a.visual,
                     *a.f.scene);
  rejects([&] { setup.finish(); }, "Unstarted blank helper accepted completion");
  setup.begin(kind);
  const bool reset = kind == DisplayBlankKind::Reset;
  const bool stop = reset && region == GameVersion::US;
  const auto admitted = state(a);
  check(setup.pending() && admitted.fade.brightness == 0x80 &&
            admitted.fade.step == (stop ? 0 : step) &&
            admitted.fade.delay == before.fade.delay &&
            admitted.fade.remaining == before.fade.remaining,
        "Blank helper changed fade fields beyond INIDISP and regional step clear");
  check(admitted.hdma == (reset ? 0 : before.hdma) &&
            admitted.displayed_hdma == before.displayed_hdma &&
            admitted.rows == (!reset && initial_rows) &&
            admitted.revision == before.revision + (reset && initial_rows),
        "Blank helper did not separate immediate mirrors from retained hardware");
  check(!admitted.pending_frame && admitted.publications == before.publications &&
            admitted.polls == before.polls && a.f.scene->frame() == old_frame,
        "Blank helper fabricated a publication, poll, or immutable scene update");
  rejects([&] { setup.finish(); }, "Pending byte reset alone completed a blank helper");
  rejects([&] { setup.begin(kind); }, "Pending blank helper accepted another begin");
  check(state(a) == admitted, "Rejected pending helper call changed shared state");

  publish(a);
  const bool underflow = !stop && (step & 0x80);
  const bool positive = !stop && step && !(step & 0x80);
  check(a.fade.state().brightness == (positive ? step : 0x80) &&
            a.fade.state().step == (positive ? step : 0),
        "Real NMI did not process retained positive/negative fade from forced blank");
  check(a.frame_display.hdma_enable == (reset || underflow ? 0 : 0x64) &&
            a.frame_display.displayed_hdma_enable == (!reset && positive ? 0x64 : 0),
        "Actual publication did not apply forced blank and fade-underflow HDMA semantics");
  check(a.visual.window_rows_enabled == (initial_rows && !reset && !underflow) &&
            a.visual.window_revision == before.revision + 1 +
                (initial_rows && (reset || underflow)),
        "Row disable or the distinct NMI window-bound reset changed revision incorrectly");
  check(a.visual.window_left[1] == 255 && !a.visual.window_right[1],
        "Actual NMI failed to reset the second window's incoming zero bounds");
  check(a.f.clock.publications == before.publications + 1 &&
            a.f.clock.new_frame_started == 1 && a.f.clock.input_polls == before.polls &&
            a.f.clock.frame_counter == 0 && a.f.input.held == input &&
            a.f.random == random && a.f.actors.ticks() == actors,
        "Blank wait polled input, advanced actors/RNG, or lost the fresh NMI receipt");
  const auto published = state(a);
  setup.finish();
  check(!setup.pending() && state(a) == published,
        "Helper completion repeated NMI effects or consumed its pending byte");
  rejects([&] { setup.finish(); }, "Blank helper accepted duplicate completion");

  // Reusing the same helper requires another real boundary, even though the
  // preceding publication's pending byte is intentionally still nonzero.
  setup.begin(DisplayBlankKind::Retain);
  rejects([&] { setup.finish(); }, "Prior publication completed a later helper invocation");
  publish(a);
  setup.finish();
  check(a.f.clock.publications == before.publications + 2 &&
            a.f.clock.input_polls == before.polls,
        "Repeated helper did not perform exactly one new publication");
}

void admission(GameVersion region) {
  FrameFixture a(region, 4);
  a.fade.begin_in(1, 3);
  a.frame_display.hdma_enable = 0x64;
  a.visual.window_rows_enabled = true;
  a.visual.window_revision = 11;
  a.f.clock.new_frame_started = 8;
  const auto before = state(a);
  const auto reject_begin = [&](DisplaySetup &setup, const char *message) {
    rejects([&] { setup.begin(DisplayBlankKind::Reset); }, message);
    check(!setup.pending() && state(a) == before,
          "Rejected owner admission partially blanked shared display state");
  };
  story::TickState other_clock;
  other_clock.new_frame_started = 9;
  DisplaySetup wrong_clock(region, a.fade, a.frame_display, other_clock, a.visual,
                           *a.f.scene);
  reject_begin(wrong_clock, "Blank helper admitted a clock foreign to its Scene");
  check(other_clock.new_frame_started == 9 && !other_clock.publications,
        "Rejected foreign clock was mutated");
  WorldDisplayFade other_fade(WorldDisplayFadeState{7, 2, 3, 4});
  DisplaySetup wrong_fade(region, other_fade, a.frame_display, a.f.clock, a.visual,
                          *a.f.scene);
  reject_begin(wrong_fade, "Blank helper admitted a fade foreign to its publisher");
  check(other_fade.state() == WorldDisplayFadeState{7, 2, 3, 4},
        "Rejected foreign fade was blanked");
  battle::FrameDisplay other_frames(a.display);
  other_frames.hdma_enable = 0x20;
  DisplaySetup wrong_frames(region, a.fade, other_frames, a.f.clock, a.visual,
                            *a.f.scene);
  reject_begin(wrong_frames, "Blank helper admitted a different display owner on the same transport");
  check(other_frames.hdma_enable == 0x20,
        "Rejected foreign display lost its HDMA enable");
  WorldEncounterVisualState other_visual;
  other_visual.window_rows_enabled = true;
  other_visual.window_revision = 29;
  DisplaySetup wrong_visual(region, a.fade, a.frame_display, a.f.clock,
                            other_visual, *a.f.scene);
  reject_begin(wrong_visual, "Blank helper admitted a visual owner foreign to its publisher");
  check(other_visual.window_rows_enabled && other_visual.window_revision == 29,
        "Rejected foreign visual owner lost rows or changed revision");
  DisplaySetup valid(region, a.fade, a.frame_display, a.f.clock, a.visual,
                    *a.f.scene);
  rejects([&] { valid.begin(static_cast<DisplayBlankKind>(255)); },
          "Blank helper admitted an unknown operation kind");
  check(state(a) == before, "Invalid helper kind mutated shared state");
  a.f.clock.interrupt_mask = 0x30;
  reject_begin(valid, "Blank helper admitted an unowned IRQ-only timing domain");
  a.f.clock.interrupt_mask = 0x80;
  auto publication = a.f.scene->begin_publication();
  reject_begin(valid, "Blank helper interrupted an existing Scene operation");
  publication->complete_publication();
  finish(*publication);

  FrameFixture missing(region, 4, false);
  const auto missing_before = state(missing);
  DisplaySetup no_publication(region, missing.fade, missing.frame_display,
                              missing.f.clock, missing.visual, *missing.f.scene);
  rejects([&] { no_publication.begin(DisplayBlankKind::Reset); },
          "Blank helper admitted a Scene without its publication owner");
  check(state(missing) == missing_before && !no_publication.pending(),
        "Missing-publication rejection changed state");

  FrameFixture failed(region, 4);
  { auto abandoned = failed.f.scene->begin_publication(); }
  check(failed.f.scene->failed(), "Abandoned actual Scene did not preserve failure");
  const auto failed_before = state(failed);
  DisplaySetup dead(region, failed.fade, failed.frame_display, failed.f.clock,
                    failed.visual, *failed.f.scene);
  rejects([&] { dead.begin(DisplayBlankKind::Reset); },
          "Blank helper admitted a failed Scene");
  check(state(failed) == failed_before, "Failed Scene admission changed display state");
}

void failed_publication(GameVersion region) {
  FrameFixture a(region, 4);
  DisplaySetup setup(region, a.fade, a.frame_display, a.f.clock, a.visual,
                     *a.f.scene);
  setup.begin(DisplayBlankKind::Retain);
  a.colors.upload_mode = 7; // Unsupported real palette transfer, before commit.
  const auto before = state(a);
  auto publication = a.f.scene->begin_publication();
  service(*publication, story::SceneService::Publication);
  rejects([&] { publication->complete_publication(); },
          "Invalid real palette publication unexpectedly succeeded");
  rejects([&] { setup.finish(); },
          "Failed publication supplied a successful blank-helper receipt");
  check(state(a) == before && setup.pending() && !a.f.scene->failed() &&
            publication->service() == story::SceneService::Publication,
        "Failed publication consumed input, advanced fade, or completed the helper");
  a.colors.upload_mode = 0;
  publication->complete_publication();
  finish(*publication);
  setup.finish();
  check(!setup.pending() && a.f.clock.publications == before.publications + 1 &&
            a.f.clock.input_polls == before.polls,
        "Corrected capture did not retry the same real boundary exactly once");
}
} // namespace

int main() {
  try {
    for (const auto region : {GameVersion::US, GameVersion::JP}) {
      for (const auto kind : {DisplayBlankKind::Reset, DisplayBlankKind::Retain})
        for (const std::uint8_t step : {0, 1, 255})
          for (const bool rows : {false, true})
            helper_flow(region, kind, step, rows);
      admission(region);
      failed_publication(region);
    }
    std::cout << "Native battle display setup tests passed " << checks << " checks\n";
  } catch (const std::exception &error) {
    std::cerr << "Native battle display setup tests failed after " << checks
              << ": " << error.what() << '\n';
    return 1;
  }
}
