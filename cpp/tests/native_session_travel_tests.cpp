#include "eb/asset_store.hpp"
#include "eb/direct_scene.hpp"
#include "eb/native/world/menu/resources.hpp"
#include "eb/native_session.hpp"
#include "generated_assets.hpp"
#include "native_session_fixture.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
namespace {
void check(bool value, const char *message) {
  if (!value)
    throw std::runtime_error(message);
}
void run(const eb::GameAssets &assets, bool beta) {
  auto archive = native_session_save(assets.version);
  auto saved = archive.load(0);
  saved.game.leader_x = 0x456;
  saved.game.leader_y = 0x678;
  saved.game.leader_direction = 2;
  saved.game.party_psi = 9;
  const auto menus =
      eb::native::world::menu::Resources::import(assets.image, assets.version);
  const auto flag = menus->teleport_destination(1).event_flag;
  saved.event_flags[(flag - 1) / 8] |= std::uint8_t(1u << ((flag - 1) % 8));
  saved.event_flags[(754 - 1) / 8] &= std::uint8_t(~(1u << ((754 - 1) % 8)));
  archive.save(0, saved, 0);
  eb::NativeSession baseline(assets.image, assets.version, archive.bytes(), 1);
  eb::NativeSession sampled(assets.image, assets.version, archive.bytes(), 1);
  std::shared_ptr<const eb::DirectSceneFrame> retained;
  std::vector<std::uint32_t> retained_pixels;
  std::uint64_t observed{};
  sampled.observe_completed_frames([&](auto) { ++observed; });
  auto frame = [&](std::uint16_t buttons, unsigned count = 1) {
    for (unsigned i = 0; i < count; ++i) {
      const auto before = sampled.diagnostics();
      for (unsigned width : {320u, 398u, 1024u, 256u}) {
        sampled.configure_presentation(width, false, true);
        (void)sampled.presentation_frame();
        const auto state = sampled.diagnostics();
        check(state.frames == before.frames && state.steps == before.steps &&
                  state.master_clocks == before.master_clocks,
              "PSI travel display sampling advanced gameplay or audio");
      }
      const auto receipt = baseline.advance_frame(buttons);
      check(receipt && sampled.advance_frame(buttons) == receipt,
            "Actual PSI sessions produced different physical frame receipts");
      const auto actual = sampled.diagnostics(),
                 expected = baseline.diagnostics();
      check(actual.native_travel_started == expected.native_travel_started &&
                actual.native_travel_completed ==
                    expected.native_travel_completed &&
                actual.native_world_menus_opened ==
                    expected.native_world_menus_opened &&
                actual.native_world_menus_completed ==
                    expected.native_world_menus_completed &&
                actual.frames == expected.frames &&
                actual.steps == expected.steps &&
                actual.master_clocks == expected.master_clocks &&
                actual.cpu_instructions == 0 && !actual.machine_debug_available,
            "Actual PSI menu/travel cadence depends on display sampling");
      check(std::equal(sampled.native_pixels().begin(),
                       sampled.native_pixels().end(),
                       baseline.native_pixels().begin()),
            "Actual PSI menu/travel pixels depend on display sampling");
      check(sampled.take_audio_samples() == baseline.take_audio_samples(),
            "Actual PSI menu/travel PCM depends on display sampling");
      if (!retained && actual.native_travel_active) {
        retained = sampled.presentation_frame().scene;
        check(bool(retained), "Actual PSI travel lacks a retained scene frame");
        retained_pixels = eb::rasterize_direct_scene({retained, {}});
      }
    }
  };
  auto tap = [&](std::uint16_t buttons) {
    frame(buttons, 2);
    frame(0, 24);
  };
  frame(0, 100);
  tap(0x80);
  tap(0x400);
  tap(0x80);
  tap(0x400);
  tap(0x400);
  if (beta)
    tap(0x100);
  tap(0x80);
  tap(0x80);
  unsigned resumed{};
  for (unsigned call = 0; call < 1600; ++call) {
    frame(0);
    const auto state = sampled.diagnostics();
    if (state.native_travel_completed && ++resumed == 120) {
      check(state.native_travel_started == 1 &&
                state.native_travel_completed == 1 &&
                !state.native_travel_active && state.cpu_instructions == 0 &&
                !state.machine_debug_available && retained &&
                observed == state.frames,
            "Actual PSI menu did not complete one native travel owner");
      check(eb::rasterize_direct_scene({retained, {}}) == retained_pixels,
            "PSI travel mutated an earlier completed scene frame");
      check(std::equal(sampled.save_memory().begin(),
                       sampled.save_memory().end(), archive.bytes().begin()),
            "PSI travel silently overwrote the synthetic battery archive");
      std::cout << "PASS " << assets.title << " real PSI "
                << (beta ? "beta" : "alpha")
                << " destination -> Travel ->120 world calls frames="
                << state.frames
                << " CPU=0; canonical pixels, PCM and sampling identical\n";
      return;
    }
  }
  const auto state = sampled.diagnostics();
  throw std::runtime_error(
      "Actual PSI UI never completed Travel: started=" +
      std::to_string(state.native_travel_started) +
      " completed=" + std::to_string(state.native_travel_completed) +
      " active=" + std::to_string(state.native_travel_active));
}
} // namespace
int main(int argc, char **argv) {
  if (argc < 2)
    return 77;
  try {
    for (int i = 1; i < argc; ++i) {
      const auto a = eb::load_game_assets(argv[i], eb::asset_profiles());
      run(a, false);
      run(a, true);
    }
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
