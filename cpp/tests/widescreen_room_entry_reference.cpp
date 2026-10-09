#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "eb/snes_audio_dsp.hpp"
#include "eb/native/saves/archive.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include "native_session_fixture.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <vector>

namespace {
using namespace eb;
unsigned word(const SnesBus &bus, unsigned at) {
  return bus.work_ram[at] | unsigned(bus.work_ram[at + 1]) << 8;
}
std::vector<unsigned> enter(const GameAssets &assets, unsigned width, bool stairs) {
  const unsigned x = stairs ? 7448 : 7552, y = stairs ? 1000 : 344;
  auto owned = std::make_unique<SnesBus>(assets.image, assets.version, true);
  auto &bus = *owned;
  Spc700AudioCpu audio(bus); SnesAudioDsp dsp(audio); MainCpu65816 cpu(bus);
  auto archive = native_session_save(assets.version);
  auto state = archive.load(0);
  state.game.leader_x = x; state.game.leader_y = y;
  archive.save(0, state, 0);
  std::copy(archive.bytes().begin(), archive.bytes().end(), bus.save_ram.begin());
  bus.enable_native_sprite_runtime(true, true);
  bus.set_logical_clock_policy(LogicalClockPolicy::ActorFrames);
  bus.set_presentation_width(width);
  cpu.reset_from_vector(); cpu.set_gameplay_timing(true); cpu.set_world_preload_width(width);
  const bool jp = assets.version == GameVersion::JP;
  const unsigned enabled = jp ? 0x4dde : 0x4a58, npc = jp ? 0x3098 : 0x2c9a;
  const auto &p = source_profile(assets.version);
  while (bus.completed_frames < 2200) {
    const auto frame = bus.completed_frames;
    const bool ready = word(bus, enabled) == 0xffff && word(bus, p.party_state.leader_x) == x;
    bus.set_buttons(!ready && frame >= 660 && frame < 1800 && frame % 60 < 5 ? 0x1080 : 0);
    for (unsigned steps = 0; bus.completed_frames == frame; ++steps) {
      if (steps > 2000000 || cpu.is_stopped) throw std::runtime_error("Room entry stalled: " + cpu.describe_registers());
      cpu.advance_gameplay(1000000);
    }
    (void)dsp.take_stereo_samples();
  }
  if (stairs) {
    const auto stop = bus.completed_frames + 180;
    while (bus.completed_frames < stop) {
      const auto frame = bus.completed_frames;
      bus.set_buttons(word(bus, p.party_state.leader_y) > 512 ? 0x0200 : 0);
      for (unsigned steps = 0; bus.completed_frames == frame; ++steps) {
        if (steps > 2000000 || cpu.is_stopped) throw std::runtime_error("Door entry stalled: " + cpu.describe_registers());
        cpu.advance_gameplay(1000000);
      }
      (void)dsp.take_stereo_samples();
    }
  }
  std::cout << assets.title << " width=" << width << " leader=" << word(bus, p.party_state.leader_x)
      << ',' << word(bus, p.party_state.leader_y) << " camera=" << word(bus, 0x31) << ',' << word(bus, 0x33)
      << " mode=" << word(bus, enabled) << " NPCs:";
  std::vector<unsigned> ids;
  for (unsigned role = 0; role < 30; ++role) if (word(bus, npc + role * 2) < 1584) {
    ids.push_back(word(bus, npc + role * 2)); std::cout << ' ' << ids.back();
  }
  std::cout << '\n';
  if (word(bus, enabled) != 0xffff || (stairs ? word(bus, p.party_state.leader_y) > 512 :
      word(bus, p.party_state.leader_x) != x || word(bus, p.party_state.leader_y) != y))
    throw std::runtime_error("Synthetic Continue did not enter the requested room");
  return ids;
}
}
int main(int argc, char **argv) {
  if (argc < 2) return 77;
  try {
    for (int arg = 1; arg < argc; ++arg) {
      const auto assets = load_game_assets(argv[arg], asset_profiles());
      for (bool stairs : {true, false}) {
        const auto expected = enter(assets, 256, stairs);
        if (expected.empty()) throw std::runtime_error("Native-width control loaded no room NPCs");
        for (unsigned width : {398u, 522u, 1024u}) {
          const auto actual = enter(assets, width, stairs);
          for (auto id : expected)
            if (std::find(actual.begin(), actual.end(), id) == actual.end())
              throw std::runtime_error("Widescreen room entry omitted canonical NPC " + std::to_string(id));
        }
      }
    }
  } catch (const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
