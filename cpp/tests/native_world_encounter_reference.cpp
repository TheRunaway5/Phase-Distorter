// Actual regional BATTLE_SWIRL_SEQUENCE, C2E8C4/C4A67E and C2E9C8 execute
// without helper replacement. CHANGE_MUSIC uses its real same-track return;
// this test proves the non-audio owner and the ordered music boundary only.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/world_encounter.hpp"
#include "eb/scene_read_view.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <iostream>
#include <memory>
#include <stdexcept>

namespace {
using namespace eb::native;
unsigned checks{};
std::string context;
void check(bool ok, const char *message) {
  ++checks;
  if (!ok) throw std::runtime_error(std::string(message) + ": " + context);
}
unsigned packed(PaletteColor color) {
  return color.red | unsigned(color.green) << 5 | unsigned(color.blue) << 10;
}
unsigned mask(const std::array<bool,6> &layers) {
  unsigned result = 0;
  for (unsigned i = 0; i < 6; ++i) if (layers[i]) result |= 1u << i;
  return result;
}
struct Oracle {
  bool jp;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  unsigned swirl, repeat, backup, track, initiative, group;
  explicit Oracle(const eb::GameAssets &assets)
      : jp(assets.version == eb::GameVersion::JP),
        bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)), cpu(*bus),
        swirl(jp ? 0xb097 : 0xaec2), repeat(jp ? 0xb0b9 : 0xaee4),
        backup(jp ? 0x60f8 : 0x5d72), track(jp ? 0xb6ec : 0xb53b),
        initiative(jp ? 0x5142 : 0x4dbc), group(jp ? 0x4e12 : 0x4a8c) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram[at] = value; bus->work_ram[at+1] = value >> 8;
  }
  unsigned get(unsigned at) const {
    return bus->work_ram[at] | unsigned(bus->work_ram[at+1]) << 8;
  }
  void seed(const WorldSwirlState &state) {
    auto &b = bus->work_ram;
    b[swirl] = state.update_in; b[swirl+1] = state.interval;
    b[swirl+2] = state.frames_left; b[swirl+3] = state.frame;
    b[swirl+4] = state.invert; b[swirl+5] = state.reverse;
    b[swirl+6] = mask(state.masked_layers); b[swirl+7] = 1;
    b[swirl+8] = state.padding; b[swirl+9] = state.restore_after;
    put(swirl+10,0xabcd); put(swirl+12,0xef12);
    b[repeat] = state.next; b[repeat+1] = state.repeat_speed;
    b[repeat+2] = state.repeats_until_speedup;
    put(0x24,0xa21b); put(0x26,0x8f34);
  }
  void seed_windows(const WorldEncounterVisualState &visual) {
    for (unsigned i = 0; i < 2; ++i) {
      bus->write_byte(0x2126 + i * 2, visual.window_left[i]);
      bus->write_byte(0x2127 + i * 2, visual.window_right[i]);
    }
  }
  unsigned call(unsigned entry, unsigned a = 0, unsigned x = 0, unsigned y = 0) {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e; cpu.direct_page = 0x1e00; cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = a; cpu.x_index = x; cpu.y_index = y;
    cpu.execute_instruction<0x22>(entry,4);
    for (unsigned i = 0; i < 100000; ++i) {
      if (cpu.program_counter == 0xc0ff04 && cpu.stack_pointer == 0x1fff)
        return cpu.accumulator;
      cpu.step_instruction();
    }
    throw std::runtime_error("Original swirl did not return: " + cpu.describe_registers());
  }
  void same(const WorldSwirlState &s, const WorldEncounterVisualState &v) {
    const auto &b = bus->work_ram;
    check(b[swirl] == s.update_in && b[swirl+1] == s.interval &&
              b[swirl+2] == s.frames_left && b[swirl+3] == s.frame,
          "Authored swirl counters differ");
    check(b[swirl+4] == s.invert && b[swirl+5] == s.reverse &&
              b[swirl+6] == mask(s.masked_layers) && b[swirl+8] == s.padding &&
              b[swirl+9] == s.restore_after, "Swirl effect flags differ");
    check(bool(get(swirl+10) | get(swirl+12)) == s.oval,
          "Oval animation selection differs");
    check(b[repeat] == s.next && b[repeat+1] == s.repeat_speed &&
              b[repeat+2] == s.repeats_until_speedup,
          "Repeat initialization or retained counters differ");
    const auto view = bus->scene_read_view();
    check(view.ppu_registers[0x26] == v.window_left[0] &&
              view.ppu_registers[0x27] == v.window_right[0] &&
              view.ppu_registers[0x28] == v.window_left[1] &&
              view.ppu_registers[0x29] == v.window_right[1],
          "Initial clip bounds differ");
    check(get(0x24) == 0xa21b && get(0x26) == 0x8f34,
          "Swirl initialization changed source RNG");
  }
};
void run(const eb::GameAssets &assets) {
  const auto before = checks;
  auto data = import_world_swirl_data(assets.image);
  Oracle oracle(assets);
  WorldEncounterState encounter;
  WorldSwirlState swirl;
  ScenePalette colors{};
  PaletteColor backup{29,8,14};
  WorldEncounterVisualState visual;
  unsigned music_calls = 0;
  unsigned expected_music = 0;
  WorldEncounter owner(data, encounter, swirl, colors, backup, visual,
      [&](const WorldEncounterMusicChange &request) {
        check(request.track == expected_music, "Music request differs");
        check(colors[0] == PaletteColor{1,2,3}, "Backdrop changed before music");
        ++music_calls;
      });
  unsigned calls = 0;
  for (unsigned id = 0; id < 7; ++id)
    for (unsigned options = 0; options < 256; ++options) {
      context = std::string(assets.title) + " general swirl " + std::to_string(id) +
                " options " + std::to_string(options);
      swirl.repeat_speed = 73; swirl.repeats_until_speedup = 49;
      visual.window_left = {17, 53}; visual.window_right = {91, 207};
      oracle.seed(swirl);
      oracle.seed_windows(visual);
      const auto padding = std::uint8_t(options + id * 11);
      oracle.call(oracle.jp ? 0xc2e7dd : 0xc2e8c4, id, options, padding);
      owner.configure_swirl(id, options, padding);
      oracle.same(swirl, visual);
      ++calls;
    }
  for (unsigned init = 0; init < 3; ++init)
    for (unsigned group : {0u, 1u, 447u, 448u, 483u, 65535u}) {
      context = std::string(assets.title) + " battle init " + std::to_string(init) +
                " group " + std::to_string(group);
      encounter = {WorldBattleInitiative(init), std::uint16_t(group)};
      colors.fill({1,2,3});
      visual.window_left = {17, 53}; visual.window_right = {91, 207};
      oracle.seed(swirl);
      oracle.seed_windows(visual);
      oracle.put(oracle.initiative, init); oracle.put(oracle.group, group);
      oracle.put(oracle.backup, packed(backup)); oracle.put(0x200, packed(colors[0]));
      expected_music = group >= 448 ? 8u : init == 2 ? 9u : 176u;
      oracle.put(oracle.track, expected_music);
      oracle.call(oracle.jp ? 0xc2e7f9 : 0xc2e8e0);
      owner.begin_swirl();
      oracle.same(swirl, visual);
      check(oracle.get(0x200) == packed(colors[0]) && oracle.bus->work_ram[0x30] == 8,
            "Restored palette publication differs");
      unsigned visible = 0;
      for (unsigned i = 0; i < 5; ++i) if (visual.visible_layers[i]) visible |= 1u << i;
      check(oracle.bus->work_ram[0x1a] == visible, "Enabled scene layers differ");
      const auto view = oracle.bus->scene_read_view();
      check(view.fixed_color == packed(visual.fixed_color), "Swirl fixed color differs");
      check(view.ppu_registers[0x30] == ((unsigned(visual.clip_colors) << 6) | (unsigned(visual.prevent_math) << 4) | (visual.use_subscreen ? 2 : 0)) &&
                view.ppu_registers[0x31] == (mask(visual.color_math_layers) |
                   (visual.subtract ? 0x80 : 0) | (visual.half_intensity ? 0x40 : 0)),
            "Swirl color math differs");
      ++calls;
    }
  for (unsigned timer : {0u,1u,255u})
    for (unsigned padding = 0; padding < 256; ++padding) {
      context = std::string(assets.title) + " active predicate timer=" +
                std::to_string(timer) + " padding=" + std::to_string(padding);
      swirl.update_in = timer; swirl.padding = padding;
      oracle.seed(swirl);
      const auto result = oracle.call(oracle.jp ? 0xc2e8e1 : 0xc2e9c8);
      context += " result=" + std::to_string(result);
      check(result == unsigned(owner.swirl_active()), "Active predicate differs");
      ++calls;
    }
  check(music_calls == 18, "Wrong number of actual music boundaries");
  std::cout << assets.title << ": " << calls << " original swirl calls; "
            << checks - before << " checks\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    if(argc < 2) throw std::runtime_error("Provide regional ebpak paths");
    for(int i = 1; i < argc; ++i) run(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch(const std::exception &e) { std::cerr << e.what() << '\n'; return 1; }
}
