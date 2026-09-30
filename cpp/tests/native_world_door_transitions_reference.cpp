// Actual complete C06E6E/C070CB producers, including route generation,
// scheduling and raw playback installation. Only undefined route X scratch
// is normalized to zero; the independently proved reset-produced Y stays63.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/world_door_transitions.hpp"
#include "eb/native/world_escalator.hpp"
#include "eb/native/world_input_playback.hpp"
#include "eb/native/world_maintenance.hpp"
#include "eb/native/world_walking.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "native_world_walking_fixture.hpp"
#include <algorithm>
#include <iostream>
#include <sstream>
#include <stdexcept>

namespace {
using namespace eb::native;
using Callback = WorldScheduledCallback;
std::string context;
void require(bool condition, const std::string &why) {
  if (!condition)
    throw std::runtime_error(why + ": " + context);
}
struct Layout {
  unsigned schedule, process, tasks, timer, window, battle, swirl, enemy;
  unsigned game, shift, movement, stairs_direction, escalator_x, stairs_x;
  std::array<unsigned, 4> callbacks;
};
Layout layout(eb::GameVersion version) {
  if (version == eb::GameVersion::US)
    return {0xc0dbe6, 0xc0dc4e, 0x9e3c,
            0x9e54,   0x88e0,   0x9643,
            0x5d60,   0x4dba,   0x97f5,
            0,        0x5d56,   0x5dc4,
            0x5dd0,   0x5dcc,   {0xc06e2c, 0xc06e4a, 0xc06f82, 0xc06fed}};
  return {0xc0dbae, 0xc0dc16, 0xa042,
          0xa05a,   0x8c22,   0x993b,
          0x60e6,   0x5140,   0x9aa9,
          3,        0x60dc,   0x614a,
          0x6156,   0x6152,   {0xc0705a, 0xc07078, 0xc071b0, 0xc0721b}};
}
struct Content {
  eb::GameVersion version;
  std::shared_ptr<const dialogue::FontResources> fonts;
  std::shared_ptr<const dialogue::WindowResources> windows;
  WalkingData walking;
  GeneratedInputData generated;
  WorldDoorTransitionData transitions;
  explicit Content(const eb::GameAssets &a)
      : version(a.version),
        fonts(dialogue::FontResources::import(a.image, a.version)),
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
  explicit Fixture(Content &c, WorldRawInputState raw = {})
      : output(c.fonts, text), windows(c.windows, text, output),
        playback(leader, input, raw),
        scheduler(windows, clock, phone, appearance, maintenance),
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
    auto op = windows.begin(
        {dialogue::WindowAction::Open, dialogue::WindowId{0}, {}, 0});
    unsigned iterations = 0;
    while (!op->complete() && ++iterations < 20) {
      if (op->advance() == dialogue::OutputProgress::Suspended)
        op->respond();
    }
    require(op->complete() && !windows.draw_order().empty(),
            "Actual window owner failed to open");
  }
};
struct Original {
  Layout l;
  bool jp;
  unsigned route, buffer, index, auto_direction, entrance;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  std::uint64_t calls{}, routes{}, fields{}, steps{};
  std::vector<std::uint8_t> before;
  std::vector<bool> owned = std::vector<bool>(131072);
  Original(const eb::GameAssets &a)
      : l(layout(a.version)), jp(a.version == eb::GameVersion::JP),
        route(jp ? 0xc463a2 : 0xc48d58), buffer(jp ? 0xa05e : 0x9e58),
        index(buffer + 192), auto_direction(jp ? 0x6150 : 0x5dca),
        entrance(jp ? 0x614c : 0x5dc6),
        bus(std::make_unique<eb::SnesBus>(a.image, a.version)), cpu(*bus) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    bus->work_ram[0xd] = 0x80;
    start(jp ? 0xc02c4e : 0xc430ec, true);
    until(0xc0ff04);
  }
  unsigned word(unsigned at) const {
    return bus->work_ram[at] | unsigned(bus->work_ram[at + 1]) << 8;
  }
  unsigned dword(unsigned at) const { return word(at) | word(at + 2) << 16; }
  unsigned game(unsigned offset) const { return l.game + offset - l.shift; }
  void put(unsigned at, unsigned v) {
    bus->work_ram[at] = v;
    bus->work_ram[at + 1] = v >> 8;
  }
  void wide(unsigned at, unsigned v) {
    put(at, v);
    put(at + 2, v >> 16);
  }
  void allow(unsigned at, unsigned count = 2) {
    std::fill(owned.begin() + at, owned.begin() + at + count, true);
  }
  void start(unsigned entry, bool far, unsigned a = 0, unsigned x = 0,
             unsigned y = 0) {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = a;
    cpu.x_index = x;
    cpu.y_index = y;
    if (far)
      cpu.execute_instruction<0x22>(entry, 4);
    else
      cpu.execute_instruction<0x20>(entry & 65535, 3);
  }
  void until(unsigned pc) {
    for (unsigned n = 0; n < 10000000; ++n) {
      if (cpu.program_counter == pc)
        return;
      cpu.step_instruction();
      ++steps;
    }
    throw std::runtime_error("Producer source timed out: " +
                             cpu.describe_registers() + ": " + context);
  }
  template <class F> void seed(const F &f) {
    std::fill(owned.begin(), owned.end(), false);
    std::fill(bus->work_ram.begin() + 0x1b00, bus->work_ram.begin() + 0x2000,
              0xa5);
    allow(0x1b00, 0x500);
    for (auto [at, v] : std::initializer_list<std::pair<unsigned, unsigned>>{
             {game(128), f.control.x_fraction},
             {game(130), f.leader.leader_x},
             {game(132), f.control.y_fraction},
             {game(134), f.leader.leader_y},
             {game(138), f.leader.leader_direction},
             {game(142), f.leader.walking_style},
             {l.movement, f.leader.movement_flags},
             {l.stairs_direction, f.navigation.stairs_direction},
             {entrance, f.transition_state.escalator_entrance},
             {auto_direction, f.transition_state.automatic_direction},
             {l.escalator_x, f.transition_state.escalator_target.x},
             {l.escalator_x + 2, f.transition_state.escalator_target.y},
             {l.stairs_x, f.transition_state.stairs_target.x},
             {l.stairs_x + 2, f.transition_state.stairs_target.y},
             {l.stairs_direction - 12, f.party.projection.movement_mismatch},
             {0x81, f.leader.demo_frames},
             {0x83, f.playback.state().initial_pad},
             {0x77, f.playback.state().raw[0]},
             {0x79, f.playback.state().raw[1]},
             {0x7b, f.playback.state().flags}}) {
      put(at, v);
      allow(at);
    }
    for (unsigned i = 0; i < 4; ++i) {
      put(l.tasks + 6 * i, f.scheduler.tasks()[i].frames_left);
      wide(l.tasks + 6 * i + 2,
           l.callbacks[unsigned(f.scheduler.tasks()[i].callback)]);
    }
    allow(l.tasks, 24);
    std::fill(bus->work_ram.begin() + buffer,
              bus->work_ram.begin() + buffer + 194, 0);
    const auto runs = f.transitions.builder().runs();
    for (unsigned i = 0; i < runs.size(); ++i) {
      bus->work_ram[buffer + 3 * i] = runs[i].frames;
      put(buffer + 3 * i + 1, runs[i].pad);
    }
    put(index, runs.size() - 1);
    allow(buffer, 194);
    if (f.playback.sequence()) {
      const auto seq = f.playback.sequence()->runs();
      for (unsigned i = 0; i < seq.size(); ++i) {
        bus->work_ram[0x10000 + 3 * i] = seq[i].frames;
        put(0x10001 + 3 * i, seq[i].pad);
      }
    }
    wide(0x7d, 0x7f0000 + 3 * f.playback.run_index());
    allow(0x7d, 4);
    // This write-only word has no native consumer. All discovered references
    // are writes, so it is neither a second world owner nor an asserted value.
    allow(l.stairs_direction - 10);
    // C41EFF's documented scratch used by integer division differs by region.
    allow(jp ? 0xae : 0xb0, 4);
    before.assign(bus->work_ram.begin(), bus->work_ram.end());
  }
  void execute(WorldDoorTransitionRequest request) {
    start(request.kind == WorldDoorTransitionKind::Escalator
              ? (jp ? 0xc0709c : 0xc06e6e)
              : (jp ? 0xc072f9 : 0xc070cb),
          false, request.control, request.cell.x, request.cell.y);
    for (unsigned n = 0; n < 10000000; ++n) {
      if (cpu.program_counter == 0xc0ff03 && cpu.stack_pointer == 0x1fff) {
        ++calls;
        return;
      }
      if (cpu.program_counter == route + 30) {
        // This breakpoint happens only once: first loop entry before a route
        // iteration. Later iterations revisit it, so normalize at route entry
        // below instead, before the source initializes its integer halves.
      }
      if (cpu.program_counter == route) {
        put(std::uint16_t(cpu.direct_page - 32 + 16), 0);
        ++routes;
      }
      cpu.step_instruction();
      ++steps;
    }
    throw std::runtime_error("Full door producer failed to return: " + context);
  }
  template <class F> void compare(const F &f, bool audit_ram = true) {
    const auto eq = [&](unsigned at, unsigned actual, const char *label) {
      ++fields;
      require(word(at) == actual, std::string(label) +
                                      " source=" + std::to_string(word(at)) +
                                      " native=" + std::to_string(actual));
    };
    eq(game(128), f.control.x_fraction, "leader X fraction");
    eq(game(132), f.control.y_fraction, "leader Y fraction");
    eq(game(130), f.leader.leader_x, "leader X");
    eq(game(134), f.leader.leader_y, "leader Y");
    eq(game(138), f.leader.leader_direction, "leader facing");
    eq(game(142), f.leader.walking_style, "leader style");
    eq(l.movement, f.leader.movement_flags, "movement flags");
    eq(l.stairs_direction, f.navigation.stairs_direction, "stairs direction");
    eq(entrance, f.transition_state.escalator_entrance, "escalator entrance");
    eq(auto_direction, f.transition_state.automatic_direction,
       "automatic direction");
    eq(l.escalator_x, f.transition_state.escalator_target.x,
       "escalator target X");
    eq(l.escalator_x + 2, f.transition_state.escalator_target.y,
       "escalator target Y");
    eq(l.stairs_x, f.transition_state.stairs_target.x, "stairs target X");
    eq(l.stairs_x + 2, f.transition_state.stairs_target.y, "stairs target Y");
    eq(l.stairs_direction - 12, f.party.projection.movement_mismatch,
       "formation movement mismatch");
    eq(0x81, f.leader.demo_frames, "playback countdown");
    eq(0x83, f.playback.state().initial_pad, "initial pad");
    eq(0x77, f.playback.state().raw[0], "raw pad1");
    eq(0x79, f.playback.state().raw[1], "raw pad2");
    eq(0x7b, f.playback.state().flags, "playback flags");
    for (unsigned i = 0; i < 4; ++i) {
      eq(l.tasks + 6 * i, f.scheduler.tasks()[i].frames_left,
         "scheduled delay");
      require(dword(l.tasks + 6 * i + 2) ==
                  l.callbacks[unsigned(f.scheduler.tasks()[i].callback)],
              "Scheduled callback differs");
      ++fields;
    }
    const auto runs = f.transitions.builder().runs();
    for (unsigned i = 0; i < runs.size(); ++i) {
      require(bus->work_ram[buffer + 3 * i] == runs[i].frames &&
                  word(buffer + 3 * i + 1) == runs[i].pad,
              "Generated producer run bytes differ index=" + std::to_string(i));
      fields += 2;
    }
    // Native publication returns immutable content; it does not retain the
    // source's mutable-buffer index increment. Prove the actual suffix instead.
    require(word(index) == runs.size() - 1 ||
                (word(index) == runs.size() &&
                 bus->work_ram[buffer + 3 * runs.size()] == 0),
            "Source builder publication boundary differs");
    if (f.playback.sequence() && dword(0x7d) == 0x7e0000 + buffer) {
      const auto seq = f.playback.sequence()->runs();
      require(seq.size() == runs.size() + 1 && seq.back().frames == 0,
              "Installed producer sequence differs");
      for (unsigned i = 0; i < seq.size(); ++i)
        require(seq[i].frames == bus->work_ram[buffer + 3 * i] &&
                    seq[i].pad == word(buffer + 3 * i + 1),
                "Installed source sequence bytes differ");
    }
    for (unsigned at = 0; audit_ram && at < before.size(); ++at)
      require(owned[at] || before[at] == bus->work_ram[at],
              "Producer changed unowned RAM offset=" + std::to_string(at));
    require(!f.transitions.failed() && !f.scheduler.failed(),
            "Native producer failed");
  }
};
namespace walking_source {
using namespace walking_test;
using Fixture = walking_test::Fixture;
struct Layout {
  unsigned entry, velocity, game, shift, debug, battle, swirl, flags, counter,
      movement_flags, intangible, stairs, collided, scripts, direction, x, y,
      enabled, lateral_h, lateral_w, vertical_h, vertical_w, npc, hotspots,
      teleport, queued, current, next, pending, queue_type, using_door, found,
      found_type, event_flags, activity, enemy_touched;
};
Layout layout(eb::GameVersion v) {
  if (v == eb::GameVersion::US)
    return {0xc0449b, 0xc430ec, 0x97f5, 0,      0x436c, 0x4dc2, 0x5d60, 0x5da4,
            0x2890,   0x5d56,   0x5d58, 0x5dc4, 0x289e, 0x0a62, 0x2af6, 0x0b8e,
            0x0bca,   0x332a,   0x1a4a, 0x33de, 0x33a2, 0x3366, 0x2c9a, 0x5e3c,
            0x9f3f,   0x5dea,   0x5e02, 0x5e04, 0x5d9a, 0x5dc0, 0x5dc2, 0x5dbc,
            0x5dbe,   0x9c08,   0x0a34, 0x4dba};
  return {0xc04722, 0xc02c4e, 0x9aa9, 3,      0x46f2, 0x5148, 0x60e6, 0x612a,
          0x2c8e,   0x60dc,   0x60de, 0x614a, 0x2c9c, 0x0a58, 0x2ef4, 0x0b84,
          0x0bc0,   0x3728,   0x1a40, 0x37dc, 0x37a0, 0x3764, 0x3098, 0x61c2,
          0xa141,   0x6170,   0x6188, 0x618a, 0x6120, 0x6146, 0x6148, 0x6142,
          0x6144,   0x9eb3,   0x0a2a, 0x5140};
}
struct Oracle {
  Layout l;
  std::unique_ptr<eb::SnesBus> &bus;
  eb::MainCpu65816 &cpu;
  Oracle(Original &owner, eb::GameVersion version)
      : l(layout(version)), bus(owner.bus), cpu(owner.cpu) {}
  unsigned game(unsigned offset) const { return l.game + offset - l.shift; }
  unsigned word(unsigned at) const {
    return bus->work_ram[at] | unsigned(bus->work_ram[at + 1]) << 8;
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram[at] = value;
    bus->work_ram[at + 1] = value >> 8;
  }
  bool call(unsigned entry, bool far = false, unsigned boundary = 0) {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = cpu.x_index = cpu.y_index = 0;
    if (far)
      cpu.execute_instruction<0x22>(entry, 4);
    else
      cpu.execute_instruction<0x20>(entry & 0xffff, 3);
    for (unsigned steps = 0; steps < 200000; ++steps) {
      if (cpu.program_counter == 0xc0ff00u + (far ? 4 : 3) &&
          cpu.stack_pointer == 0x1fff)
        return true;
      if (boundary && cpu.program_counter == boundary)
        return false;
      cpu.step_instruction();
    }
    throw std::runtime_error("Walking source did not return: " +
                             cpu.describe_registers() + ": " + context);
  }
  void cache(const WorldMapArea &area, CollisionPoint at) {
    for (int dy = -32; dy < 32; ++dy)
      for (int dx = -32; dx < 32; ++dx) {
        const unsigned x = (unsigned(at.x / 8) + dx) & 8191,
                       y = (unsigned(at.y / 8) + dy) & 8191;
        bus->work_ram[0xe000 + (y & 63) * 64 + (x & 63)] = area.collision(x, y);
      }
  }
  void seed(const Fixture &f, const WorldMapArea &area) {
    const auto &a = f.actors.appearance_scene();
    for (auto [at, value] :
         std::initializer_list<std::pair<unsigned, unsigned>>{
             {game(128), f.control.x_fraction},
             {game(130), f.leader.leader_x},
             {game(132), f.control.y_fraction},
             {game(134), f.leader.leader_y},
             {game(138), f.leader.leader_direction},
             {game(140), f.control.trodden_surface_flags},
             {game(142), f.leader.walking_style},
             {game(144), f.control.moved_this_tick},
             {game(148), f.formation.roles[0]},
             {game(176), f.control.automatic_mode},
             {l.counter, a.movement_counter},
             {l.swirl, a.battle_swirl_ticks},
             {l.intangible, a.intangibility_ticks},
             {l.teleport, a.teleport_destination},
             {l.flags - 8, f.mushroom.timer},
             {l.flags - 6, f.mushroom.modifier},
             {l.flags - 4, f.mushroom.mushroomized},
             {l.flags, f.leader.surface_flags},
             {l.flags + 2, f.navigation.final_direction},
             {l.flags + 4, f.navigation.ladder_stairs.x},
             {l.flags + 6, f.navigation.ladder_stairs.y},
             {l.flags + 8, f.leader.checked_surface_origin.x},
             {l.flags + 10, f.leader.checked_surface_origin.y},
             {l.flags + 16, f.navigation.surface_write_counter},
             {l.flags + 18, f.navigation.vertical_obstacles},
             {l.flags + 20, f.formation.projection.movement_mismatch},
             {l.stairs, f.navigation.stairs_direction},
             {l.using_door, f.navigation.using_door},
             {l.movement_flags, f.leader.movement_flags},
             {l.debug, f.prompt.debug},
             {l.battle, f.prompt.battle_mode},
             {0x81, f.leader.demo_frames},
             {0x65, f.input.state[0]},
             {0x67, f.input.state[1]},
             {0x6d, f.input.pressed[0]},
             {0x6f, f.input.pressed[1]},
             {l.activity, f.input.player_activity},
             {l.enemy_touched, f.maintenance.enemy_touched},
             {2, 0xa500u | f.clock.frame_counter},
             {0x24, 0x89ab},
             {0x26, 0xcdef},
             {l.found, f.leader.map_text.door_found},
             {l.found_type, f.leader.map_text.door_found_type},
             {l.current, f.queued.current},
             {l.next, f.queued.next},
             {l.pending, f.queued.pending},
             {l.queue_type, f.queued.current_type}})
      put(at, value);
    bus->work_ram[game(75)] = f.party.party_status;
    for (unsigned i = 0; i < 128; ++i)
      bus->work_ram[l.event_flags + i] = f.flags[i];
    for (unsigned role = 0; role < 30; ++role) {
      put(l.scripts + role * 2, 0xffff);
      put(l.collided + role * 2, 0xffff);
      if (const auto id = f.actors.actor_for_role(role)) {
        const auto &actor = f.actors.actor(*id);
        const auto &h = *actor.hitbox;
        put(l.scripts + role * 2, actor.action().alive ? 0 : 0xffff);
        put(l.collided + role * 2,
            actor.behavior.collision_object == -32768 ? 0x8000 : 0xffff);
        put(l.direction + role * 2, actor.behavior.direction);
        put(l.x + role * 2, unsigned(actor.action().position[0] >> 16));
        put(l.y + role * 2, unsigned(actor.action().position[1] >> 16));
        put(l.enabled + role * 2, h.enabled);
        put(l.vertical_w + role * 2, h.vertical.half_width);
        put(l.vertical_h + role * 2, h.vertical.height);
        put(l.lateral_w + role * 2, h.lateral.half_width);
        put(l.lateral_h + role * 2, h.lateral.height);
        unsigned identity = actor.npc().value_or(0xffff);
        for (const auto &enemy : f.enemies.actors())
          if (enemy.actor == *id)
            identity = enemy.has_identity ? 0x8000 | enemy.spawn_cell : 0xffff;
        put(l.npc + role * 2, identity);
      }
    }
    put(l.collided + 46,
        f.leader.collision_actor
            ? *f.actors.actor(*f.leader.collision_actor).authored_role()
            : 0xffff);
    for (unsigned slot = 0; slot < 2; ++slot) {
      const auto &h = f.hotspot_state.live[slot];
      const auto at = l.hotspots + slot * 14;
      const std::array<unsigned, 7> values{h.mode,
                                           h.x1,
                                           h.y1,
                                           h.x2,
                                           h.y2,
                                           h.content_reference & 0xffff,
                                           h.content_reference >> 16};
      for (unsigned i = 0; i < values.size(); ++i)
        put(at + i * 2, values[i]);
      bus->work_ram[game(200) + slot] = f.hotspot_state.saved_modes[slot];
    }
    for (unsigned i = 0; i < 4; ++i) {
      put(l.queued + i * 6, f.queued.records[i].type);
      for (unsigned n = 0; n < 4; ++n)
        bus->work_ram[l.queued + i * 6 + 2 + n] = f.queued.records[i].key[n];
    }
    cache(area, {f.leader.leader_x, f.leader.leader_y});
  }
  void compare(const Fixture &f) const {
    const auto &a = f.actors.appearance_scene();
    const auto equal = [&](const char *field, unsigned at, unsigned expected) {
      if (word(at) != expected) {
        std::ostringstream out;
        out << field << " at " << std::hex << at << " source=" << word(at)
            << " native=" << expected;
        require(false, out.str());
      }
    };
    equal("fraction X", game(128), f.control.x_fraction);
    equal("X", game(130), f.leader.leader_x);
    equal("fraction Y", game(132), f.control.y_fraction);
    equal("Y", game(134), f.leader.leader_y);
    equal("facing", game(138), f.leader.leader_direction);
    equal("terrain", game(140), f.control.trodden_surface_flags);
    equal("style", game(142), f.leader.walking_style);
    equal("moved", game(144), f.control.moved_this_tick);
    equal("movement counter", l.counter, a.movement_counter);
    equal("swirl", l.swirl, a.battle_swirl_ticks);
    equal("battle", l.battle, f.prompt.battle_mode);
    equal("input", 0x65, f.input.state[0]);
    equal("pressed", 0x6d, f.input.pressed[0]);
    equal("input2", 0x67, f.input.state[1]);
    equal("pressed2", 0x6f, f.input.pressed[1]);
    equal("mushroom timer", l.flags - 8, f.mushroom.timer);
    equal("mushroom modifier", l.flags - 6, f.mushroom.modifier);
    equal("temporary surface", l.flags, f.leader.surface_flags);
    equal("final direction", l.flags + 2, f.navigation.final_direction);
    equal("ladder X", l.flags + 4, f.navigation.ladder_stairs.x);
    equal("ladder Y", l.flags + 6, f.navigation.ladder_stairs.y);
    equal("origin X", l.flags + 8, f.leader.checked_surface_origin.x);
    equal("origin Y", l.flags + 10, f.leader.checked_surface_origin.y);
    equal("surface counter", l.flags + 16, f.navigation.surface_write_counter);
    equal("vertical obstacles", l.flags + 18, f.navigation.vertical_obstacles);
    equal("redirect", l.flags + 20, f.formation.projection.movement_mismatch);
    equal("stairs", l.stairs, f.navigation.stairs_direction);
    equal("door latch", l.using_door, f.navigation.using_door);
    equal("selected door", l.found, f.leader.map_text.door_found);
    equal("selected type", l.found_type, f.leader.map_text.door_found_type);
    equal("collision", l.collided + 46,
          f.leader.collision_actor
              ? *f.actors.actor(*f.leader.collision_actor).authored_role()
              : 0xffff);
    equal("queue pending", l.pending, f.queued.pending);
    equal("queue next", l.next, f.queued.next);
    equal("queue current", l.current, f.queued.current);
    equal("queue type", l.queue_type, f.queued.current_type);
    for (unsigned i = 0; i < 4; ++i) {
      equal("queued kind", l.queued + i * 6, f.queued.records[i].type);
      for (unsigned n = 0; n < 4; ++n)
        require(bus->work_ram[l.queued + i * 6 + 2 + n] ==
                    f.queued.records[i].key[n],
                "Queued payload differs");
    }
    for (unsigned slot = 0; slot < 2; ++slot) {
      const auto &h = f.hotspot_state.live[slot];
      const auto at = l.hotspots + slot * 14;
      const std::array<unsigned, 7> values{h.mode,
                                           h.x1,
                                           h.y1,
                                           h.x2,
                                           h.y2,
                                           h.content_reference & 0xffff,
                                           h.content_reference >> 16};
      for (unsigned i = 0; i < values.size(); ++i)
        equal("hotspot word", at + i * 2, values[i]);
      require(bus->work_ram[game(200) + slot] ==
                  f.hotspot_state.saved_modes[slot],
              "Persisted hotspot mode differs");
    }
    equal("RNG1", 0x24, 0x89ab);
    equal("RNG2", 0x26, 0xcdef);
    equal("frame counter", 2, 0xa500u | f.clock.frame_counter);
    require(f.actors.ticks() == 0, "Walking advanced native actors");
  }
};
} // namespace walking_source

// Compose actual reducers over successive normal frame phases. These fixtures
// use flat terrain, not an authored scene, and do not substitute actor
// positions or acknowledgments for scheduled completion.
struct MultiFrame {
  walking_test::Fixture world;
  dialogue::State text;
  dialogue::TextOutput output;
  dialogue::WindowHost windows;
  npcs::InteractionState &leader;
  WorldControlState &control;
  WorldNavigationState &navigation;
  WorldPartyState &party;
  story::InputState &input;
  story::TickState &clock;
  npcs::DadPhoneState &phone;
  WorldDoorTransitionState transition_state;
  WorldInputPlayback playback;
  WorldScheduler scheduler;
  WorldDoorTransitions transitions;
  WorldEscalator escalator;
  MultiFrame(Content &c, const eb::GameAssets &assets,
             const WorldCollision &collision, const WorldMovement &movement,
             const WorldMapArea &area)
      : world(assets.version, c.walking, assets.image, collision, movement,
              area),
        output(c.fonts, text), windows(c.windows, text, output),
        leader(world.leader), control(world.control),
        navigation(world.navigation), party(world.formation),
        input(world.input), clock(world.clock), phone(world.phone),
        playback(leader, input),
        scheduler(windows, clock, phone, world.actors.appearance_scene(),
                  world.maintenance),
        transitions(c.transitions, c.generated, c.walking, playback, scheduler,
                    leader, control, navigation, party, transition_state),
        escalator(c.walking, world.actors, leader, control, party, navigation,
                  transition_state, world.maintenance, input, world.queue,
                  world.doors, collision, movement, area) {
    world.doors.bind_transitions(transitions);
  }
};
void multi_frame(const eb::GameAssets &assets) {
  Content c(assets);
  Original original(assets);
  walking_source::Oracle walking(original, assets.version);
  const WorldCollision collision(assets.image,
                                 world_collision_layout(assets.version));
  const WorldMovement movement(assets.image,
                               world_movement_layout(assets.version));
  auto flat = walking_test::terrain(0);
  const auto area = flat.area();
  unsigned scenarios{}, frames{}, walking_calls{}, escalator_calls{};
  for (unsigned type = 0; type < 2; ++type)
    for (unsigned exit = 0; exit < 2; ++exit)
      for (unsigned direction = 0; direction < 4; ++direction)
        for (unsigned phase = 0; phase < 3; ++phase) {
          MultiFrame f(c, assets, collision, movement, area);
          // Begin on the selected eight-pixel door cell. A farther start
          // can legitimately exhaust the generated pads before the source
          // stair callback threshold, leaving its scheduled retry pending.
          f.leader.leader_x = f.leader.leader_y = 264;
          f.leader.leader_direction = 2;
          f.leader.walking_style = exit ? (type ? 13 : 12) : 0;
          f.control.x_fraction = std::uint16_t(phase * 0x7fff);
          f.control.y_fraction = std::uint16_t(phase * 0x5555);
          f.transition_state.escalator_entrance = direction << 8;
          // Authored stair endpoints pair controls 0/3 and 1/2. Exit
          // retains the entrance direction rather than adopting its own code.
          f.navigation.stairs_direction =
              (type && exit ? direction ^ 3 : direction) << 8;
          f.clock.frame_counter = 254;
          f.phone.timer = 9;
          const WorldDoorTransitionRequest request{
              type ? WorldDoorTransitionKind::Stairs
                   : WorldDoorTransitionKind::Escalator,
              {33, 33},
              std::uint16_t(direction << 8 | (!type && exit ? 0x8000 : 0))};
          context = assets.title + " multiframe type=" + std::to_string(type) +
                    " exit=" + std::to_string(exit) +
                    " direction=" + std::to_string(direction) +
                    " phase=" + std::to_string(phase);
          original.seed(f);
          walking.seed(f.world, area);
          original.put(original.l.window, 0xffff);
          original.put(original.l.battle, 0);
          original.put(original.l.timer, f.phone.timer);
          original.put(original.l.timer + 2, f.phone.queued);
          for (unsigned pad = 0; pad < 2; ++pad) {
            original.put(0x65 + 2 * pad, f.input.state[pad]);
            original.put(0x69 + 2 * pad, f.input.held[pad]);
            original.put(0x6d + 2 * pad, f.input.pressed[pad]);
            original.put(0x71 + 2 * pad, f.input.repeat_timer[pad]);
          }
          original.before.assign(original.bus->work_ram.begin(),
                                 original.bus->work_ram.end());
          original.execute(request);
          f.transitions.execute(request);
          original.compare(f);
          walking.compare(f.world);
          unsigned finished_frames{};
          for (unsigned step = 0; step < 512; ++step) {
            const auto prefix = context;
            context = prefix + " frame=" + std::to_string(step);
            ++f.clock.frame_counter;
            original.put(2, 0xa500u | f.clock.frame_counter);
            original.start(original.l.process, false);
            original.until(0xc0ff03);
            f.scheduler.process_frame();
            original.compare(f, false);
            require(original.word(original.l.timer) == f.phone.timer,
                    "Phone cadence differs during transition");
            walking.compare(f.world);
            original.start(0xc08496, false);
            original.cpu.direct_page = 0;
            original.cpu.data_bank = 0;
            original.until(0xc0ff03);
            f.playback.poll({0, 0});
            original.compare(f, false);
            for (unsigned pad = 0; pad < 2; ++pad) {
              require(original.word(0x65 + 2 * pad) == f.input.state[pad] &&
                          original.word(0x69 + 2 * pad) == f.input.held[pad] &&
                          original.word(0x6d + 2 * pad) ==
                              f.input.pressed[pad] &&
                          original.word(0x71 + 2 * pad) ==
                              f.input.repeat_timer[pad],
                      "Multiframe processed input differs");
            }
            require(original.word(walking.l.activity) ==
                        f.input.player_activity,
                    "Multiframe input activity differs");
            // Preserve source phase order: the callback may have changed style
            // before this frame's movement routine is selected.
            walking.cache(area, {f.leader.leader_x, f.leader.leader_y});
            if (f.leader.walking_style == 12) {
              walking.call(assets.version == eb::GameVersion::US ? 0xc047cf
                                                                 : 0xc04a56);
              auto op = f.escalator.begin();
              require(op->advance(),
                      "Flat escalator reducer unexpectedly suspended");
              ++escalator_calls;
            } else {
              walking.call(walking.l.entry);
              auto op = f.world.walking.begin();
              require(op->advance(),
                      "Flat walking reducer unexpectedly suspended");
              ++walking_calls;
            }
            original.compare(f, false);
            walking.compare(f.world);
            ++frames;
            const bool done =
                !f.playback.active() &&
                std::all_of(f.scheduler.tasks().begin(),
                            f.scheduler.tasks().end(),
                            [](auto task) { return task.frames_left == 0; });
            finished_frames = done ? finished_frames + 1 : 0;
            context = prefix;
            if (finished_frames == 3)
              break;

            require(step != 511, "Transition did not complete through real "
                                 "input/movement/callback phases");
          }
          ++scenarios;
        }
  std::cout << "PASS " << assets.title << ": " << scenarios
            << " flat-terrain multiframe transitions, " << frames
            << " actual scheduled/input/movement phases, " << walking_calls
            << " walking calls and " << escalator_calls
            << " escalator calls; real coordinates, fractions, style, pad "
               "state, callback delays, phone cadence and unchanged RNG "
               "compared after each phase; authored scene/outer camera remains "
               "a separate integration scope\n";
}
void run(const eb::GameAssets &assets) {
  Content c(assets);
  Original original(assets);
  unsigned scenarios{};
  for (unsigned type = 0; type < 2; ++type)
    for (unsigned exit = 0; exit < 2; ++exit)
      for (unsigned direction = 0; direction < 4; ++direction)
        for (unsigned origin : {0u, 256u, 65528u})
          for (unsigned variant = 0; variant < 12; ++variant) {
            WorldRawInputState raw{{0x101, 0x202},
                                   std::uint16_t(variant & 1 ? 0x8005 : 5),
                                   0xabcd};
            Fixture f(c, raw);
            f.leader.leader_x = f.leader.leader_y = origin;
            f.leader.walking_style = exit ? (type ? 13 : 12) : 0;
            f.leader.leader_direction = variant % 8;
            f.party.projection.movement_mismatch = 0x55aa;
            f.transition_state.automatic_direction = 0xfafa;
            f.transition_state.escalator_entrance = direction << 8;
            for (unsigned i = 0; i < variant % 4; ++i)
              f.scheduler.schedule(std::uint16_t(i + 2), Callback(i));
            WorldDoorTransitionRequest request{
                type ? WorldDoorTransitionKind::Stairs
                     : WorldDoorTransitionKind::Escalator,
                {std::uint16_t((origin / 8 + 1) & 8191),
                 std::uint16_t((origin / 8 + 1) & 8191)},
                std::uint16_t(direction << 8 | (!type && exit ? 0x8000 : 0))};
            if (variant == 8) { // A source-supported active flag with
                                // externally zeroed countdown.
              f.playback.install(std::make_shared<const GeneratedInputSequence>(
                  std::vector<GeneratedInputRun>{{9, 0x900}, {0, 0}}));
              f.leader.demo_frames = 0;
            }
            if (variant == 9)
              f.leader.demo_frames = 7;
            if (variant == 10) { // Source style guards execute after reset.
              if (!type)
                f.leader.walking_style = exit ? 0 : 12;
              else if (!exit)
                request.control |= 1;
            }
            if (variant ==
                11) { // Exact target means zero route and source count clamp.
              const CollisionPoint cell{std::uint16_t(request.cell.x * 8),
                                        std::uint16_t(request.cell.y * 8)};
              const auto offset =
                  type
                      ? c.transitions.stair_offset(direction, exit)
                      : CollisionPoint{
                            c.transitions.escalator_offset(direction, exit), 0};
              f.leader.leader_x = std::uint16_t(cell.x + offset.x);
              f.leader.leader_y = std::uint16_t(cell.y + offset.y);
              f.leader.leader_direction = 2;
            }
            context = assets.title + " type=" + std::to_string(type) +
                      " exit=" + std::to_string(exit) +
                      " direction=" + std::to_string(direction) +
                      " origin=" + std::to_string(origin) +
                      " variant=" + std::to_string(variant);
            original.seed(f);
            original.execute(request);
            f.transitions.execute(request);
            original.compare(f);
            ++scenarios;
          }
  std::cout << "PASS " << assets.title << ": " << scenarios
            << " complete original escalator/stair producers, "
            << original.routes << " normalized-X source routes; "
            << original.fields
            << " semantic fields and generated/install/task bytes; all other "
               "RAM unchanged except bounded source workspace and unused "
               "write-only word; "
            << original.steps << " source instructions\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    require(argc > 1, "native_world_door_transitions_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i) {
      const auto assets = eb::load_game_assets(argv[i], eb::asset_profiles());
      run(assets);
      multi_frame(assets);
    }
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
