// Original SCHEDULE_OVERWORLD_TASK / PROCESS_OVERWORLD_TASKS and all four
// regional door callbacks run here. Production uses the actual native door
// transition callback owner, without a substituted callback result.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/world_door_transitions.hpp"
#include "eb/native/world_input_playback.hpp"
#include "eb/native/world_maintenance.hpp"
#include "eb/native/world_walking.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
using Callback = WorldScheduledCallback;
std::string context;
void require(bool condition, const std::string &why) {
  if (!condition) throw std::runtime_error(why + ": " + context);
}
struct Layout {
  unsigned schedule, process, tasks, timer, window, battle, swirl, enemy;
  unsigned game, shift, movement, stairs_direction, escalator_x, stairs_x;
  std::array<unsigned, 4> callbacks;
};
Layout layout(eb::GameVersion version) {
  if (version == eb::GameVersion::US)
    return {0xc0dbe6, 0xc0dc4e, 0x9e3c, 0x9e54, 0x88e0, 0x9643,
            0x5d60, 0x4dba, 0x97f5, 0, 0x5d56, 0x5dc4, 0x5dd0, 0x5dcc,
            {0xc06e2c, 0xc06e4a, 0xc06f82, 0xc06fed}};
  return {0xc0dbae, 0xc0dc16, 0xa042, 0xa05a, 0x8c22, 0x993b,
          0x60e6, 0x5140, 0x9aa9, 3, 0x60dc, 0x614a, 0x6156, 0x6152,
          {0xc0705a, 0xc07078, 0xc071b0, 0xc0721b}};
}
struct Content {
  eb::GameVersion version;
  std::shared_ptr<const dialogue::FontResources> fonts;
  std::shared_ptr<const dialogue::WindowResources> windows;
  WalkingData walking;
  GeneratedInputData generated;
  WorldDoorTransitionData transitions;
  explicit Content(const eb::GameAssets &a)
      : version(a.version), fonts(dialogue::FontResources::import(a.image, a.version)),
        windows(dialogue::WindowResources::import(a.image, a.version)),
        walking(a.image, a.version), generated(a.image, a.version),
        transitions(a.image, a.version) {}
};
struct Fixture {
  dialogue::State text;
  dialogue::TextOutput output;
  dialogue::WindowHost windows;
  story::TickState clock;
  npcs::DadPhoneState phone;
  AppearanceSceneContext appearance;
  WorldMaintenanceState maintenance;
  npcs::InteractionState leader;
  WorldControlState control;
  WorldNavigationState navigation;
  WorldPartyState party;
  WorldDoorTransitionState transition_state;
  story::InputState input;
  WorldInputPlayback playback;
  WorldScheduler scheduler;
  WorldDoorTransitions transitions;
  explicit Fixture(Content &c)
      : output(c.fonts, text), windows(c.windows, text, output),
        playback(leader, input), scheduler(windows, clock, phone, appearance, maintenance),
        transitions(c.transitions, c.generated, c.walking, playback, scheduler,
                    leader, control, navigation, party, transition_state) {
    leader.leader_x = 0x1234;
    leader.leader_y = 500;
    leader.leader_direction = 6;
    leader.walking_style = 7;
    leader.movement_flags = 3;
    control.x_fraction = 0xabcd;
    control.y_fraction = 0xfedc;
    transition_state.escalator_target = {0x4321, 502};
    transition_state.stairs_target = {0x6789, 498};
    navigation.stairs_direction = 0;
  }
  void open() {
    auto op = windows.begin({dialogue::WindowAction::Open, dialogue::WindowId{0}, {}, 0});
    unsigned iterations = 0;
    while (!op->complete() && ++iterations < 20) {
      if (op->advance() == dialogue::OutputProgress::Suspended) op->respond();
    }
    require(op->complete() && !windows.draw_order().empty(), "Actual window owner failed to open");
  }
};
struct Original {
  Layout l;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  std::uint64_t schedule_calls{}, process_calls{}, callback_calls{}, fields{}, instructions{};
  explicit Original(const eb::GameAssets &a)
      : l(layout(a.version)), bus(std::make_unique<eb::SnesBus>(a.image, a.version)), cpu(*bus) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
  }
  void word(unsigned at, unsigned value) {
    bus->work_ram.at(at) = std::uint8_t(value);
    bus->work_ram.at(at + 1) = std::uint8_t(value >> 8);
  }
  void dword(unsigned at, unsigned value) { word(at, value); word(at + 2, value >> 16); }
  unsigned word(unsigned at) const { return bus->work_ram.at(at) | unsigned(bus->work_ram.at(at + 1)) << 8; }
  unsigned dword(unsigned at) const { return word(at) | word(at + 2) << 16; }
  unsigned game(unsigned offset) const { return l.game + offset - l.shift; }
  void seed(const Fixture &f) {
    std::fill(bus->work_ram.begin() + 0x1c00, bus->work_ram.begin() + 0x2000, 0x39);
    bus->work_ram[2] = f.clock.frame_counter;
    // LDA FRAME_COUNTER reads the following OAM byte too; AND00FF must discard it.
    bus->work_ram[3] = 0xa5;
    word(l.window, f.windows.draw_order().empty() ? 0xffff : 0);
    word(l.battle, f.windows.prompt_state().battle_mode);
    word(l.swirl, f.appearance.battle_swirl_ticks);
    word(l.enemy, f.maintenance.enemy_touched);
    word(l.timer, f.phone.timer);
    word(l.timer + 2, f.phone.queued);
    for (unsigned i = 0; i < 4; ++i) {
      word(l.tasks + i * 6, f.scheduler.tasks()[i].frames_left);
      dword(l.tasks + i * 6 + 2, l.callbacks[unsigned(f.scheduler.tasks()[i].callback)]);
    }
    word(game(128), f.control.x_fraction);
    word(game(130), f.leader.leader_x);
    word(game(132), f.control.y_fraction);
    word(game(134), f.leader.leader_y);
    word(game(142), f.leader.walking_style);
    word(l.movement, f.leader.movement_flags);
    word(l.stairs_direction, f.navigation.stairs_direction);
    word(l.escalator_x, f.transition_state.escalator_target.x);
    word(l.escalator_x + 2, f.transition_state.escalator_target.y);
    word(l.stairs_x, f.transition_state.stairs_target.x);
    word(l.stairs_x + 2, f.transition_state.stairs_target.y);
  }
  unsigned invoke(bool process, unsigned delay = 0, Callback callback = {}) {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = delay;
    cpu.x_index = 0;
    cpu.y_index = 0;
    dword(0x1e0e, l.callbacks[unsigned(callback)]);
    const unsigned return_pc = process ? 0xc0ff03 : 0xc0ff04;
    if (process) cpu.execute_instruction<0x20>(l.process & 0xffff, 3);
    else cpu.execute_instruction<0x22>(l.schedule, 4);
    for (unsigned i = 0; i < 10000; ++i) {
      if (cpu.program_counter == return_pc && cpu.stack_pointer == 0x1fff) {
        require(cpu.direct_page == 0x1e00 && cpu.data_bank == 0x7e, "Scheduler damaged caller ABI");
        if (process) ++process_calls; else ++schedule_calls;
        return cpu.accumulator;
      }
      for (auto address : l.callbacks)
        if (cpu.program_counter == address) ++callback_calls;
      cpu.step_instruction();
      ++instructions;
    }
    throw std::runtime_error("Original scheduler failed to return: " + cpu.describe_registers() + ": " + context);
  }
  void compare(const Fixture &f) {
    for (unsigned i = 0; i < 4; ++i) {
      require(word(l.tasks + i * 6) == f.scheduler.tasks()[i].frames_left,
              "Task countdown mismatch slot" + std::to_string(i));
      require(dword(l.tasks + i * 6 + 2) == l.callbacks[unsigned(f.scheduler.tasks()[i].callback)],
              "Task callback identity mismatch slot" + std::to_string(i));
      fields += 2;
    }
    require(bus->work_ram[2] == f.clock.frame_counter && bus->work_ram[3] == 0xa5,
            "Scheduler changed clock or read frame high byte");
    require(word(l.timer) == f.phone.timer && word(l.timer + 2) == f.phone.queued, "Phone state mismatch");
    require(word(l.window) == (f.windows.draw_order().empty() ? 0xffff : 0) &&
            word(l.battle) == f.windows.prompt_state().battle_mode && word(l.swirl) == f.appearance.battle_swirl_ticks &&
            word(l.enemy) == f.maintenance.enemy_touched, "Scheduler changed pause gates");
    require(word(game(128)) == f.control.x_fraction && word(game(132)) == f.control.y_fraction &&
            word(game(130)) == f.leader.leader_x && word(game(134)) == f.leader.leader_y &&
            word(game(142)) == f.leader.walking_style && word(l.movement) == f.leader.movement_flags &&
            word(l.stairs_direction) == f.navigation.stairs_direction, "Actual door callback state mismatch");
    require(word(l.escalator_x) == f.transition_state.escalator_target.x &&
            word(l.escalator_x + 2) == f.transition_state.escalator_target.y &&
            word(l.stairs_x) == f.transition_state.stairs_target.x &&
            word(l.stairs_x + 2) == f.transition_state.stairs_target.y,
            "Scheduler or callback changed retained transition targets");
    require(!f.scheduler.failed() && !f.transitions.failed() && !f.playback.active(),
            "Actual callback failed or invented playback");
    fields += 18;
  }
};
void run(const eb::GameAssets &assets) {
  Content content(assets);
  Original original(assets);
  unsigned scenarios{}, capacity_rejections{};
  // Real scheduling entrypoint, including zero writes, all callback identities,
  // first free slot selection, 16-bit delays and the unsafe source fifth write.
  for (unsigned kind = 0; kind < 4; ++kind)
    for (unsigned delay : {0u, 1u, 2u, 255u, 256u, 32768u, 65535u}) {
      Fixture f(content);
      original.seed(f);
      for (unsigned n = 0; n < 5; ++n) {
        context = "schedule kind=" + std::to_string(kind) + " delay=" + std::to_string(delay) + " n=" + std::to_string(n);
        const auto before = f.scheduler.tasks();
        const auto slot = f.scheduler.schedule(std::uint16_t(delay), Callback(kind));
        const auto source = original.invoke(false, delay, Callback(kind));
        if (slot) {
          require(source == *slot, "Source selected a different first free slot");
          original.compare(f);
        } else {
          require(source == 4 && f.scheduler.tasks() == before, "Full native queue mutated or source capacity premise changed");
          require(original.word(original.l.tasks + 24) == delay &&
                  original.dword(original.l.tasks + 26) == original.l.callbacks[kind],
                  "Source full-array write no longer extends into adjacent owners");
          ++capacity_rejections;
        }
      }
      ++scenarios;
    }
  for (unsigned gates = 0; gates < 16; ++gates)
    for (unsigned frame : {0u, 1u, 255u})
      for (unsigned timer : {0u, 1u, 65535u}) {
        Fixture f(content);
        if (gates & 1) f.open();
        f.windows.prompt_state().battle_mode = gates & 2;
        f.appearance.battle_swirl_ticks = gates & 4;
        f.maintenance.enemy_touched = gates & 8;
        f.clock.frame_counter = frame;
        f.phone = {std::uint16_t(timer), 0xbeef};
        f.scheduler.schedule(1, Callback::EscalatorEnter);
        f.scheduler.schedule(2, Callback::EscalatorExit);
        f.scheduler.schedule(1, Callback::StairsEnter);
        f.scheduler.schedule(3, Callback::StairsExit);
        original.seed(f);
        for (unsigned step = 0; step < 5; ++step) {
          context = "gates=" + std::to_string(gates) + " frame=" + std::to_string(frame) + " timer=" + std::to_string(timer) + " step=" + std::to_string(step);
          original.invoke(true);
          f.scheduler.process_frame();
          original.compare(f);
          ++f.clock.frame_counter;
          original.bus->work_ram[2] = f.clock.frame_counter;
        }
        ++scenarios;
      }
  // Actual callbacks, including uint16 boundary thresholds and stairs that
  // reschedule themselves into the same/earlier expired slot on later frames.
  for (unsigned kind = 0; kind < 4; ++kind)
    for (unsigned direction : {0u, 0x100u, 0x200u, 0x300u, 1u, 0xffffu})
      for (unsigned target_y : {0u, 1u, 500u, 0x7fffu, 0xfffeu, 0xffffu})
        for (int displacement : {-2, -1, 0, 1, 2}) {
          Fixture f(content);
          f.navigation.stairs_direction = direction;
          f.transition_state.stairs_target.y = target_y;
          f.transition_state.escalator_target.y = target_y;
          f.leader.leader_y = std::uint16_t(target_y + displacement);
          f.scheduler.schedule(1, Callback(kind));
          original.seed(f);
          for (unsigned step = 0; step < 3; ++step) {
            context = "callback=" + std::to_string(kind) + " direction=" + std::to_string(direction) + " target=" + std::to_string(target_y) + " delta=" + std::to_string(displacement) + " step=" + std::to_string(step);
            original.invoke(true);
            f.scheduler.process_frame();
            original.compare(f);
            ++f.clock.frame_counter;
            original.bus->work_ram[2] = f.clock.frame_counter;
          }
          ++scenarios;
        }
  std::cout << (assets.version == eb::GameVersion::US ? "US" : "JP")
            << " scheduler: " << scenarios << " scenarios, " << original.schedule_calls
            << " schedule calls, " << original.process_calls << " frame phases, "
            << original.callback_calls << " actual callbacks, " << capacity_rejections
            << " rejected corrupting fifth writes, " << original.fields << " fields, "
            << original.instructions << " source instructions\n";
}
}
int main(int argc, char **argv) {
  try {
    require(argc >= 2, "native_world_scheduler_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i) run(eb::load_game_assets(argv[i], eb::asset_profiles()));
    return 0;
  } catch (const std::exception &e) { std::cerr << e.what() << '\n'; return 1; }
}
