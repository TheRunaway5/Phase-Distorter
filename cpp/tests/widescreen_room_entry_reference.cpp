#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "eb/snes_audio_dsp.hpp"
#include "eb/native/saves/archive.hpp"
#include "eb/native/npcs/map_text.hpp"
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
std::vector<unsigned> enter(const GameAssets &assets, unsigned width, unsigned x, unsigned y) {
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
  while (bus.completed_frames < 2200) {
    const auto frame = bus.completed_frames;
    bus.set_buttons(frame >= 660 && frame < 1800 && frame % 60 < 5 ? 0x1080 : 0);
    for (unsigned steps = 0; bus.completed_frames == frame; ++steps) {
      if (steps > 2000000 || cpu.is_stopped) throw std::runtime_error("Room entry stalled: " + cpu.describe_registers());
      cpu.step_instruction();
    }
    (void)dsp.take_stereo_samples();
  }
  const auto &p = source_profile(assets.version);
  std::cout << assets.title << " width=" << width << " leader=" << word(bus, p.party_state.leader_x)
      << ',' << word(bus, p.party_state.leader_y) << " camera=" << word(bus, 0x31) << ',' << word(bus, 0x33)
      << " mode=" << word(bus, enabled) << " NPCs:";
  std::vector<unsigned> ids;
  for (unsigned role = 0; role < 30; ++role) if (word(bus, npc + role * 2) < 1584) {
    ids.push_back(word(bus, npc + role * 2)); std::cout << ' ' << ids.back();
  }
  std::cout << '\n';
  if (word(bus, enabled) != 0xffff || word(bus, p.party_state.leader_x) != x || word(bus, p.party_state.leader_y) != y)
    throw std::runtime_error("Synthetic Continue did not enter the requested room");
  return ids;
}
}
int main(int argc, char **argv) {
  if (argc < 2) return 77;
  try {
    for (int arg = 1; arg < argc; ++arg) {
      const auto assets = load_game_assets(argv[arg], asset_profiles());
      const auto map = native::npcs::MapTextResources::import(assets.image, assets.version);
      for (unsigned y = 0; y < 256; ++y) for (unsigned x = 0; x < 256; ++x) {
        native::npcs::MapTextState found;
        if (map->lookup(x, y, found) != 2) continue;
        const auto at = 0xf0000 + (found.door_found & 0x7fff);
        const unsigned dest_x = (assets.image[at + 8] | unsigned(assets.image[at + 9]) << 8) * 8;
        const unsigned dest_y = (assets.image[at + 6] | unsigned(assets.image[at + 7]) << 8) % 0x4000 * 8;
        if (dest_x >= 7424 && dest_x < 7680 && dest_y < 512)
          std::cout << "Door at " << x * 8 << ',' << y * 8 << " goes to " << dest_x << ',' << dest_y << std::endl;
      }
      for (unsigned x : {7640u, 7648u, 7656u}) {
        const auto expected = enter(assets, 256, x, 488);
        if (expected.empty()) throw std::runtime_error("Native-width control loaded no room NPCs");
        const auto actual = enter(assets, 398, x, 488);
        for (auto id : expected)
          if (std::find(actual.begin(), actual.end(), id) == actual.end())
            throw std::runtime_error("Widescreen room entry omitted canonical NPC " + std::to_string(id));
      }
    }
  } catch (const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
