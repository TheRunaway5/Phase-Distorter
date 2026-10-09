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
#include <set>
#include <stdexcept>
#include <vector>

namespace {
using namespace eb;
unsigned word(const SnesBus &bus, unsigned at) {
  return bus.work_ram[at] | unsigned(bus.work_ram[at + 1]) << 8;
}
std::vector<unsigned> enter(const GameAssets &assets, unsigned width, bool stairs, bool twoson = false) {
  const unsigned x = twoson ? 1856 : stairs ? 7448 : 7552,
                 y = twoson ? 6568 : stairs ? 1000 : 344;
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
  if (twoson) {
    if (word(bus, enabled) != 0xffff || word(bus, p.party_state.leader_x) != x ||
        word(bus, p.party_state.leader_y) != y)
      throw std::runtime_error("Synthetic Continue did not enter Twoson");
    std::set<std::uint64_t> generations;
    unsigned births = 0, minimum_x = x, maximum_x = x;
    const auto observe = [&](bool initial) {
      for (unsigned role = 0; role < 30; ++role) {
        const auto id = word(bus, npc + role * 2);
        if (id != 357 && id != 358 && id != 360) continue;
        const auto actor = bus.native_sprite_runtime()->snapshot(role * 2);
        if (!actor || !generations.insert(actor->id).second || initial) continue;
        ++births;
        const int dx = std::int16_t(word(bus, p.wram_entity_world_coordinates.x + role * 2)) -
                       std::int16_t(word(bus, p.wram_background_scroll.layer1_x));
        const int dy = std::int16_t(word(bus, p.wram_entity_world_coordinates.y + role * 2)) -
                       std::int16_t(word(bus, p.wram_background_scroll.layer1_y));
        const int margin = int(width - 256) / 2;
        const unsigned group = word(bus, (jp ? 0x30d4 : 0x2cd6) + role * 2);
        const auto shape = bus.native_sprite_runtime()->resources()->raw_shape(group);
        for (unsigned i = 0; i < shape.size(); i += 5) {
          const int left = dx + std::int8_t(shape[i + 3]), top = dy + std::int8_t(shape[i]) - 1;
          if (left < 256 + margin && left + 16 > -margin && top < 224 && top + 16 > 0)
            throw std::runtime_error("Twoson road traversal spawned visible traffic npc=" +
                std::to_string(id) + " width=" + std::to_string(width));
        }
      }
    };
    observe(true);
    const auto start = bus.completed_frames;
    while (bus.completed_frames < start + 1600) {
      const auto frame = bus.completed_frames;
      bus.set_buttons(frame - start < 400 || frame - start >= 1200 ? 0x0100 : 0x0200);
      for (unsigned steps = 0; bus.completed_frames == frame; ++steps) {
        if (steps > 2000000 || cpu.is_stopped)
          throw std::runtime_error("Twoson traversal stopped: " + cpu.describe_registers());
        cpu.advance_gameplay(1000000);
      }
      (void)dsp.take_stereo_samples();
      minimum_x = std::min(minimum_x, word(bus, p.party_state.leader_x));
      maximum_x = std::max(maximum_x, word(bus, p.party_state.leader_x));
      observe(false);
    }
    if (maximum_x - minimum_x < 256) {
      throw std::runtime_error("Twoson road input did not cross a source loading column: x=" +
          std::to_string(minimum_x) + ".." + std::to_string(maximum_x) + " y=" +
          std::to_string(word(bus, p.party_state.leader_y)));
    }
    std::cout << assets.title << " Twoson width=" << width << " walked=" << maximum_x - minimum_x
              << " new_offscreen_traffic=" << births << '\n';
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
  if (word(bus, enabled) != 0xffff || (!twoson && (stairs ? word(bus, p.party_state.leader_y) > 512 :
      word(bus, p.party_state.leader_x) != x || word(bus, p.party_state.leader_y) != y)))
    throw std::runtime_error("Synthetic Continue did not enter the requested room");
  return ids;
}
}
int main(int argc, char **argv) {
  if (argc < 2) return 77;
  try {
    const bool twoson = std::string_view(argv[1]) == "--twoson";
    for (int arg = twoson ? 2 : 1; arg < argc; ++arg) {
      const auto assets = load_game_assets(argv[arg], asset_profiles());
      if (twoson) {
        for (unsigned width : {398u, 522u, 1024u}) enter(assets, width, false, true);
        continue;
      }
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
