// Compare ordered logical sprite-service inputs from real boot execution.
// Graphics allocation storage, instruction counts and transport return values
// are deliberately outside this contract. Do not relax a logical divergence.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_audio_dsp.hpp"
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include <array>
#include <deque>
#include <iostream>
#include <limits>
#include <memory>
#include <optional>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
struct Event {
  unsigned kind{}, slot{};
  std::array<unsigned, 30> logical{};
  std::array<unsigned, 11> timing{};
  std::uint64_t frame{}, actor_updates{};
  bool same(const Event &b) const {
    return kind == b.kind && slot == b.slot && logical == b.logical;
  }
};
struct SceneScope {
  unsigned id{}, return_pc{}, return_stack{};
  std::uint64_t start_passes{}, completed_passes{}, fade_ticks{};
  std::optional<std::uint64_t> exit_fade_completed;
};
struct SaveWrite {
  unsigned offset{}, value{}, writer{};
  bool operator==(const SaveWrite &) const = default;
};
struct Core {
  eb::SnesBus bus;
  eb::Spc700AudioCpu apu;
  eb::SnesAudioDsp dsp;
  eb::MainCpu65816 cpu;
  const eb::SourceProfile &profile;
  bool jp, native_resources, same_clock;
  std::uint64_t actor_updates{};
  std::uint64_t actor_starts{}, actor_completions{};
  std::deque<Event> events;
  std::optional<SceneScope> scene, barrier;
  unsigned scenes_started{};
  std::vector<SaveWrite> save_writes;
  std::optional<std::array<std::uint8_t, 8192>> initialized_save;
  std::size_t bootstrap_save_writes{};
  explicit Core(const eb::GameAssets &assets, bool native, bool matched_clock)
      : bus(assets.image, assets.version), apu(bus), dsp(apu), cpu(bus),
        profile(eb::source_profile(assets.version)),
        jp(assets.version == eb::GameVersion::JP), native_resources(native),
        same_clock(matched_clock) {
    const auto clock = native || same_clock
                           ? eb::LogicalClockPolicy::ActorFrames
                           : eb::LogicalClockPolicy::SourceTiming;
    bus.set_logical_clock_policy(clock);
    if (native)
      bus.enable_native_sprite_runtime(true);
    if (bus.logical_clock_policy() != clock ||
        bool(bus.native_sprite_runtime()) != native ||
        bus.native_actor_tick_count() ||
        bus.native_actor_fades().actor_fade_ticks())
      throw std::runtime_error("Reference clock/resource initialization "
                               "differs from requested ownership");
    if (same_clock)
      cpu.observe_memory_write = [&](unsigned address, std::uint8_t value) {
        const auto bank = address >> 16, offset = address & 0xffff;
        if ((bank & 0x7f) >= 0x20 && (bank & 0x7f) < 0x40 && offset >= 0x6000 &&
            offset < 0x8000)
          save_writes.push_back({offset - 0x6000, value, code_pc()});
      };
    cpu.reset_from_vector();
    cpu.set_gameplay_timing(true);
    bus.set_presentation_width(522);
  }
  unsigned word(unsigned at) const {
    return bus.work_ram.at(at) | unsigned(bus.work_ram.at(at + 1)) << 8;
  }
  unsigned code_pc() const { return normalized(cpu.program_counter); }
  static unsigned normalized(unsigned pc) {
    const unsigned bank = pc >> 16;
    if (bank != 0x7e && bank != 0x7f && ((bank & 0x40) || (pc & 0x8000)))
      pc |= 0xc00000;
    return pc;
  }
  unsigned caller_return() const {
    const auto at = std::uint16_t(cpu.stack_pointer + 1);
    return word(at) | unsigned(bus.work_ram[std::uint16_t(at + 2)]) << 16;
  }
  std::vector<std::pair<std::string, unsigned>> semantic_state() const {
    std::vector<std::pair<std::string, unsigned>> state;
    const auto add = [&](std::string name, unsigned at) {
      state.emplace_back(std::move(name), word(at));
    };
    add("random.low", 0x24);
    add("random.high", 0x26);
    for (unsigned i = 0; i < 8; ++i)
      add("input." + std::to_string(i), 0x65 + i * 2);
    add("input.raw0", 0x77);
    add("input.raw1", 0x79);
    for (unsigned i = 0; i < 9; ++i)
      add("demo." + std::to_string(i), 0x7b + i * 2);
    add("actionscript_state", jp ? 0x9939 : 0x9641);
    add("battle_mode_flag", jp ? 0x993b : 0x9643);
    add("replay_mode", jp ? 0xb718 : 0xb567);
    add("input_disable_frames", jp ? 0x60fa : 0x5d74);
    add("interaction.current", jp ? 0x6188 : 0x5e02);
    add("interaction.next", jp ? 0x618a : 0x5e04);
    add("battle_mode", jp ? 0x5148 : 0x4dc2);
    add("npc_spawns", jp ? 0x4dde : 0x4a58);
    add("enemy_spawns", jp ? 0x4de0 : 0x4a5a);
    add("first_entity", profile.wram_first_entity);
    add("leader.x", profile.party_state.leader_x);
    add("leader.y", profile.party_state.leader_y);
    add("walking_style", profile.party_state.walking_style);
    for (unsigned i = 0; i < 30; ++i) {
      const auto name = "actor" + std::to_string(i) + ".";
      const auto slot = i * 2;
      add(name + "script", profile.wram_entity_script_ids + slot);
      add(name + "next", profile.wram_entity_next + slot);
      add(name + "sprite", (jp ? 0x30d4 : 0x2cd6) + slot);
      add(name + "x", profile.wram_entity_world_coordinates.x + slot);
      add(name + "y", profile.wram_entity_world_coordinates.y + slot);
      add(name + "z", (jp ? 0x0bfc : 0x0c06) + slot);
      add(name + "facing", (jp ? 0x2ef4 : 0x2af6) + slot);
      add(name + "animation", profile.wram_entity_animation_frame + slot);
      add(name + "surface", profile.wram_entity_surface_flags + slot);
      add(name + "priority", profile.wram_entity_draw_priority + slot);
      add(name + "script_index", (jp ? 0x0ad0 : 0x0ada) + slot);
      for (unsigned axis = 0; axis < 3; ++axis) {
        const auto suffix = std::to_string(axis);
        add(name + "fraction" + suffix,
            (jp ? 0x0c38 : 0x0c42) + axis * 60 + slot);
        add(name + "velocity" + suffix,
            (jp ? 0x0cec : 0x0cf6) + axis * 60 + slot);
        add(name + "velocity_fraction" + suffix,
            (jp ? 0x0da0 : 0x0daa) + axis * 60 + slot);
      }
      for (unsigned v = 0; v < 8; ++v)
        add(name + "var" + std::to_string(v),
            profile.wram_entity_script_variable0 + v * 60 + slot);
    }
    // Actor indices address a separate 70-task VM, including child scripts.
    // Compare its scheduling/control-flow state without interpreting source
    // graphics addresses retained as otherwise-unused call results.
    for (unsigned i = 0; i < 70; ++i) {
      const auto name = "task" + std::to_string(i) + ".";
      const auto slot = i * 2;
      add(name + "next", (jp ? 0x1250 : 0x125a) + slot);
      add(name + "stack_offset", (jp ? 0x12dc : 0x12e6) + slot);
      add(name + "sleep", (jp ? 0x1368 : 0x1372) + slot);
      add(name + "cursor", (jp ? 0x13f4 : 0x13fe) + slot);
      add(name + "bank", (jp ? 0x1480 : 0x148a) + slot);
      for (unsigned entry = 0; entry < 8; ++entry)
        add(name + "stack" + std::to_string(entry),
            (jp ? 0x1598 : 0x15a2) + i * 16 + entry * 2);
    }
    // These are semantic fade parameters, not elapsed hardware counters.
    for (auto at : {0x0du, 0x28u, 0x29u, 0x2au})
      state.emplace_back("fade.byte" + std::to_string(at), bus.work_ram[at]);
    return state;
  }
  std::optional<Event> event() const {
    const auto pc = code_pc();
    Event e;
    if (pc == (jp ? 0xc020feu : 0xc020f0u)) {
      e.kind = 1;
      e.slot = cpu.accumulator * 2;
    } else if (pc == (jp ? 0xc0a4a3u : 0xc0a4c4u)) {
      e.kind = 2;
      e.slot = cpu.y_index;
    } else if (pc == (jp ? 0xc0a773u : 0xc0a794u)) {
      e.kind = 3;
      e.slot = word(jp ? 0x2c94 : 0x2896);
    } else if (pc == (jp ? 0xc020ffu : 0xc020f1u)) {
      e.kind = 4;
      e.slot = word(jp ? 0x1a38 : 0x1a42) * 2;
    } else if (pc == (jp ? 0xc0214eu : 0xc02140u)) {
      e.kind = 5;
      e.slot = cpu.accumulator * 2;
    } else
      return {};
    if (e.slot >= 60 || (e.slot & 1))
      throw std::runtime_error("Invalid logical event actor slot");
    const unsigned s = e.slot;
    e.logical = {
        word(profile.wram_entity_script_ids + s),
        word((jp ? 0x30d4 : 0x2cd6) + s),
        word(profile.wram_entity_world_coordinates.x + s),
        word(profile.wram_entity_world_coordinates.y + s),
        word((jp ? 0x0bfc : 0x0c06) + s), // world Z; three 30-word axis tables
        word((jp ? 0x2ef4 : 0x2af6) + s),
        word(profile.wram_entity_animation_frame + s),
        word(profile.wram_entity_surface_flags + s),
        word(profile.wram_entity_draw_priority + s),
        word(profile.wram_entity_spritemap_pointers.high + s),
        word(profile.wram_entity_script_variable0 + s),
        word(profile.wram_entity_script_variable1 + s),
        word(profile.wram_entity_script_variable0 + 120 + s),
        word(profile.wram_entity_script_variable0 + 180 + s),
        word(profile.wram_entity_script_variable0 + 240 + s),
        word(profile.wram_entity_script_variable0 + 300 + s),
        word(profile.wram_entity_script_variable0 + 360 + s),
        word(profile.wram_entity_script_variable0 + 420 + s),
        word(profile.party_state.walking_style),
        e.kind == 2 ? word(jp ? 0x2c90 : 0x2892) : 0,
        word((jp ? 0x0c38 : 0x0c42) + s),
        word((jp ? 0x0c74 : 0x0c7e) + s),
        word((jp ? 0x0cb0 : 0x0cba) + s),
        word((jp ? 0x0cec : 0x0cf6) + s),
        word((jp ? 0x0d28 : 0x0d32) + s),
        word((jp ? 0x0d64 : 0x0d6e) + s),
        word((jp ? 0x0da0 : 0x0daa) + s),
        word((jp ? 0x0ddc : 0x0de6) + s),
        word((jp ? 0x0e18 : 0x0e22) + s),
        word((jp ? 0x0ad0 : 0x0ada) + s)};
    e.frame = bus.completed_frames;
    e.timing = {bus.work_ram[2],
                word(0x81),
                word(0x7d) | unsigned(bus.work_ram[0x7f]) << 16,
                word(0x7b),
                word(profile.party_state.leader_x),
                word(profile.party_state.leader_y),
                bus.work_ram[0x28],
                bus.work_ram[0x29],
                bus.work_ram[0x2a],
                bus.work_ram[0x0d],
                word(std::uint16_t(cpu.stack_pointer + 1)) |
                    unsigned(bus.work_ram[std::uint16_t(cpu.stack_pointer + 3)])
                        << 16};
    e.actor_updates = actor_updates;
    return e;
  }
  void advance() {
    if (barrier)
      return;
    const auto frame = bus.completed_frames;
    do {
      if (cpu.is_stopped)
        throw std::runtime_error("CPU stopped in logical sprite comparison");
      const auto pending = event();
      const auto pc = code_pc();
      const bool update = pc == (jp ? 0xc100c4u : 0xc1004eu);
      std::optional<SceneScope> entered;
      if (same_clock && pc == (jp ? 0xc4ac5cu : 0xc4d989u)) {
        constexpr std::array ids{0u, 2u, 3u, 4u, 5u, 6u, 7u, 9u};
        if (scene || scenes_started >= ids.size() ||
            cpu.accumulator != ids[scenes_started])
          throw std::runtime_error(
              "Attract controller did not enter the next authored scene");
        const auto back = caller_return();
        entered =
            SceneScope{cpu.accumulator,
                       normalized((back & 0xff0000) | std::uint16_t(back + 1)),
                       std::uint16_t(cpu.stack_pointer + 3),
                       actor_starts,
                       actor_completions,
                       bus.native_actor_fades().actor_fade_ticks(),
                       {}};
      }
      const bool exit_fade =
          same_clock && scene && pc == (jp ? 0xc0886cu : 0xc0887au) &&
          normalized(caller_return()) == (jp ? 0xc4ad93u : 0xc4dab3u);
      if (exit_fade && (cpu.accumulator != 1 || cpu.x_index != 1 ||
                        scene->exit_fade_completed))
        throw std::runtime_error(
            "Scene exit fade did not start with its authored one/one request");
      const auto instructions = cpu.instruction_count;
      cpu.advance_gameplay(std::numeric_limits<unsigned>::max());
      // An interrupt can preempt this entry. Record it only when an
      // instruction or native service actually retired at the boundary.
      if (pending && cpu.instruction_count != instructions)
        events.push_back(*pending);
      if (update && cpu.instruction_count != instructions)
        ++actor_updates;
      if (cpu.instruction_count != instructions) {
        if (pc == (jp ? 0xc0944fu : 0xc09470u))
          ++actor_starts;
        if (pc == (jp ? 0xc094aeu : 0xc094cfu))
          ++actor_completions;
        if (entered) {
          scene = entered;
          ++scenes_started;
          if (!initialized_save) {
            initialized_save = bus.save_ram;
            bootstrap_save_writes = save_writes.size();
          }
        }
        if (exit_fade) {
          if (bus.work_ram[0x0d] != 15 || bus.work_ram[0x28] != 255 ||
              bus.work_ram[0x29] != 1 || bus.work_ram[0x2a] != 1 ||
              bus.native_actor_fades().owner() != eb::FadeClockOwner::ActorPass)
            throw std::runtime_error(
                "Shared-clock exit fade initialization changed");
          scene->exit_fade_completed = actor_completions;
        }
      }
      if (scene && code_pc() == scene->return_pc &&
          cpu.stack_pointer == scene->return_stack) {
        if (!scene->exit_fade_completed ||
            actor_completions - *scene->exit_fade_completed != 32 ||
            actor_starts != actor_completions || bus.work_ram[0x28] ||
            cpu.accumulator != 0)
          throw std::runtime_error(
              "Scene cleanup did not follow exactly32 completed fade passes");
        barrier = scene;
        scene.reset();
        break;
      }
    } while (bus.completed_frames == frame);
    dsp.take_stereo_samples();
  }
};
void run(const eb::GameAssets &assets, unsigned frames, bool same_clock) {
  auto source = std::make_unique<Core>(assets, false, same_clock);
  auto native = std::make_unique<Core>(assets, true, same_clock);
  std::uint64_t compared = 0;
  std::deque<std::pair<Event, Event>> history;
  std::array<std::optional<std::pair<Event, Event>>, 30> last_actor;
  const auto describe = [](const Event &e) {
    std::cerr << "frame=" << e.frame << " kind=" << e.kind << " slot=" << e.slot
              << " script=" << e.logical[0] << " sprite=" << e.logical[1]
              << " position=" << e.logical[2] << ',' << e.logical[3] << ','
              << e.logical[4] << " facing=" << e.logical[5]
              << " animation=" << e.logical[6] << " surface=" << e.logical[7]
              << " vars=";
    for (unsigned i = 10; i < 18; ++i)
      std::cerr << e.logical[i] << ',';
    std::cerr << " frame_counter=" << e.timing[0]
              << " demo_left=" << e.timing[1] << " demo_source=" << e.timing[2]
              << " demo_flags=" << e.timing[3] << " leader=" << e.timing[4]
              << ',' << e.timing[5] << " fade=" << e.timing[6] << ','
              << e.timing[7] << ',' << e.timing[8]
              << " brightness=" << e.timing[9] << " caller=" << std::hex
              << e.timing[10] << std::dec
              << " actor_updates=" << e.actor_updates << '\n';
  };
  const auto compare = [&] {
    while (!source->events.empty() && !native->events.empty()) {
      const auto &a = source->events.front(), &b = native->events.front();
      if (!a.same(b)) {
        if (const auto &last = last_actor.at(a.slot / 2)) {
          std::cerr << "  last matched actor source ";
          describe(last->first);
          std::cerr << "  last matched actor native ";
          describe(last->second);
        }
        for (const auto &[old, current] : history) {
          std::cerr << "  preceding source ";
          describe(old);
          std::cerr << "  preceding native ";
          describe(current);
        }
        std::cerr << "Logical sprite event " << compared
                  << " differs: source frame=" << a.frame << " kind=" << a.kind
                  << " slot=" << a.slot << "; native frame=" << b.frame
                  << " kind=" << b.kind << " slot=" << b.slot << '\n';
        std::cerr << "  source ";
        describe(a);
        std::cerr << "  native ";
        describe(b);
        for (unsigned i = 0; i < a.logical.size(); ++i)
          if (a.logical[i] != b.logical[i])
            std::cerr << "  field " << i << " source=" << a.logical[i]
                      << " native=" << b.logical[i] << '\n';
        throw std::runtime_error("Native resource cutover changed an ordered "
                                 "logical sprite-service input");
      }
      history.emplace_back(a, b);
      last_actor.at(a.slot / 2) = std::pair{a, b};
      if (history.size() > 12)
        history.pop_front();
      ++compared;
      source->events.pop_front();
      native->events.pop_front();
    }
  };
  if (same_clock) {
    std::cout << "Comparing original versus native sprite resources; both "
                 "clocks=ActorFrames; "
                 "eight complete authored attract returns; no legacy timing "
                 "parity claim\n";
    for (unsigned index = 0; index < 8; ++index) {
      const auto previous_compared = compared;
      while (!source->barrier || !native->barrier) {
        if ((!source->barrier && source->bus.completed_frames >= frames) ||
            (!native->barrier && native->bus.completed_frames >= frames))
          throw std::runtime_error("Shared-clock reference failed to reach "
                                   "authored scene return before timeout");
        if (!source->barrier)
          source->advance();
        if (!native->barrier)
          native->advance();
        compare();
      }
      compare();
      if (!source->events.empty() || !native->events.empty())
        throw std::runtime_error("Unmatched sprite-service event tail at a "
                                 "complete authored scene return");
      const auto &a = *source->barrier, &b = *native->barrier;
      if (a.id != b.id || compared == previous_compared)
        throw std::runtime_error("Scene barrier identity or meaningful "
                                 "sprite-event coverage differs");
      const auto old_passes = source->actor_completions - a.completed_passes;
      const auto new_passes = native->actor_completions - b.completed_passes;
      const auto old_fades =
          source->bus.native_actor_fades().actor_fade_ticks() - a.fade_ticks;
      const auto new_fades =
          native->bus.native_actor_fades().actor_fade_ticks() - b.fade_ticks;
      if (old_passes != new_passes || old_fades != new_fades ||
          old_fades < 32 ||
          source->actor_completions != native->actor_completions ||
          source->bus.native_actor_tick_count() != source->actor_starts ||
          native->bus.native_actor_tick_count() != native->actor_starts)
        throw std::runtime_error(
            "Shared-clock scene actor/fade completion counts differ");
      const auto old_state = source->semantic_state(),
                 new_state = native->semantic_state();
      bool state_differs = false;
      for (unsigned i = 0; i < old_state.size(); ++i) {
        if (old_state[i] != new_state[i]) {
          std::cerr << "Scene " << a.id << " semantic field "
                    << old_state[i].first << " source=" << old_state[i].second
                    << " native=" << new_state[i].second << '\n';
          state_differs = true;
        }
      }
      if (state_differs)
        throw std::runtime_error("Shared-clock actor/RNG/input/controller "
                                 "state differs at scene cleanup");
      if (!source->initialized_save || !native->initialized_save ||
          source->save_writes.empty() ||
          source->save_writes != native->save_writes ||
          source->bootstrap_save_writes != source->save_writes.size() ||
          native->bootstrap_save_writes != native->save_writes.size() ||
          source->bus.save_ram != *source->initialized_save ||
          native->bus.save_ram != *native->initialized_save ||
          source->bus.save_ram != native->bus.save_ram)
        throw std::runtime_error("Source save bootstrap differs or attract "
                                 "scenes changed initialized SRAM");
      if (index == 0) {
        unsigned formatted = 0;
        for (auto byte : source->bus.save_ram)
          formatted += byte != 0xff;
        const auto &first = source->save_writes.front();
        std::cout << "Exact source SRAM bootstrap: writes="
                  << source->bootstrap_save_writes
                  << " bytes_changed_from_erased=" << formatted
                  << " first_writer_after_pc=" << std::hex << first.writer
                  << " first_offset=" << first.offset << std::dec
                  << " first_value=" << first.value
                  << "; no SRAM writes after first attract entry\n";
      }
      std::cout << "Scene return " << index + 1 << " authored_id=" << a.id
                << " exact_events=" << compared - previous_compared
                << " completed_passes=" << old_passes
                << " fade_ticks=" << old_fades
                << " exit_fade_passes=32 semantic_words=" << old_state.size()
                << " hardware_frames=" << source->bus.completed_frames << ','
                << native->bus.completed_frames
                << " frame_counter=" << unsigned(source->bus.work_ram[2]) << ','
                << unsigned(native->bus.work_ram[2]) << " hardware_timer=" << source->word(0xa7)
                << ',' << native->word(0xa7)
                << " pending_frame=" << unsigned(source->bus.work_ram[0x2b])
                << ',' << unsigned(native->bus.work_ram[0x2b]) << '\n'
                << std::flush;
      source->barrier.reset();
      native->barrier.reset();
    }
    std::cout << "PASS complete shared-clock resource ownership: 8 authored "
                 "scenes, events="
              << compared
              << ", completed actor passes=" << source->actor_completions
              << ", no unmatched event tails, exact actor/RNG/input/controller "
                 "barriers, saves unchanged. "
                 "Hardware clocks are diagnostic; the strict original-timing "
                 "comparator is separate.\n";
    return;
  }
  while (source->bus.completed_frames < frames ||
         native->bus.completed_frames < frames) {
    if (source->bus.completed_frames < frames)
      source->advance();
    if (native->bus.completed_frames < frames)
      native->advance();
    compare();
    if (source->bus.completed_frames % 1000 == 0 &&
        source->bus.completed_frames <= frames)
      std::cout << "frame=" << source->bus.completed_frames
                << " compared=" << compared << '\n'
                << std::flush;
  }
  if (!compared)
    throw std::runtime_error("No logical sprite services compared");
  std::cout << "PASS ordered sprite-service prefix: events=" << compared
            << " source_tail=" << source->events.size()
            << " native_tail=" << native->events.size()
            << " (not complete gameplay/timing parity)\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    if (argc < 2 || argc > 4)
      throw std::invalid_argument("native_sprite_gameplay_reference pack.ebpak "
                                  "[frames] [--same-clock]");
    const unsigned frames = argc >= 3 ? std::stoul(argv[2]) : 9000;
    const bool same_clock = argc == 4 && std::string(argv[3]) == "--same-clock";
    if (argc == 4 && !same_clock)
      throw std::invalid_argument("Unknown sprite gameplay reference option");
    if (!frames)
      throw std::invalid_argument("Frames must be positive");
    run(eb::load_game_assets(argv[1], eb::asset_profiles()), frames,
        same_clock);
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
