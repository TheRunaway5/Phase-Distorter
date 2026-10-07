// Actual C047CF, its terrain/door/generated-input helpers and VELOCITY_STORE
// execute here. No movement or door result is substituted. The undefined
// source route X fraction follows the documented native zero-phase policy.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/world_escalator.hpp"
#include "eb/native/world_door_transitions.hpp"
#include "eb/native/world_input_playback.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "native_world_walking_fixture.hpp"
#include <iostream>
#include <sstream>

namespace {
using namespace walking_test;
std::string context;
void require(bool okay, const std::string &message) {
  if (!okay)
    throw std::runtime_error(message + ": " + context);
}
struct Layout {
  unsigned entry, velocity, game, shift, debug, battle, swirl, flags, counter,
      movement_flags, intangible, stairs, collided, scripts, direction, x, y,
      enabled, lateral_h, lateral_w, vertical_h, vertical_w, npc, hotspots,
      teleport, queued, current, next, pending, queue_type, using_door, found,
      found_type, event_flags, activity, enemy_touched;
};
Layout layout(eb::GameVersion v) {
  if (v == eb::GameVersion::US)
    return {0xc047cf, 0xc430ec, 0x97f5, 0,      0x436c, 0x4dc2, 0x5d60, 0x5da4,
            0x2890,   0x5d56,   0x5d58, 0x5dc4, 0x289e, 0x0a62, 0x2af6, 0x0b8e,
            0x0bca,   0x332a,   0x1a4a, 0x33de, 0x33a2, 0x3366, 0x2c9a, 0x5e3c,
            0x9f3f,   0x5dea,   0x5e02, 0x5e04, 0x5d9a, 0x5dc0, 0x5dc2, 0x5dbc,
            0x5dbe,   0x9c08,   0x0a34, 0x4dba};
  return {0xc04a56, 0xc02c4e, 0x9aa9, 3,      0x46f2, 0x5148, 0x60e6, 0x612a,
          0x2c8e,   0x60dc,   0x60de, 0x614a, 0x2c9c, 0x0a58, 0x2ef4, 0x0b84,
          0x0bc0,   0x3728,   0x1a40, 0x37dc, 0x37a0, 0x3764, 0x3098, 0x61c2,
          0xa141,   0x6170,   0x6188, 0x618a, 0x6120, 0x6146, 0x6148, 0x6142,
          0x6144,   0x9eb3,   0x0a2a, 0x5140};
}
struct Oracle {
  Layout l;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  unsigned route_entry{}, normalized_routes{};
  Oracle(std::span<const std::uint8_t> bytes, eb::GameVersion v)
      : l(layout(v)), bus(std::make_unique<eb::SnesBus>(bytes, v)), cpu(*bus) {
    route_entry = v == eb::GameVersion::US ? 0xc48d58 : 0xc463a2;
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    bus->work_ram[0xd] = 0x80;
    call(l.velocity, true);
  }
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
      if (cpu.program_counter == route_entry) {
        put(std::uint16_t(cpu.direct_page - 32 + 16), 0);
        ++normalized_routes;
      }
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
             {l.battle, f.control.encounter.mode},
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
    equal("movement flags", l.movement_flags, f.leader.movement_flags);
    equal("movement counter", l.counter, a.movement_counter);
    equal("swirl", l.swirl, a.battle_swirl_ticks);
    equal("battle", l.battle, f.control.encounter.mode);
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
    require(f.actors.ticks() == 0, "Escalator advanced native actors");
  }
};
struct Counts { unsigned calls{}, gates{}, door_routes{}, motion_despite_collision{}, wrapped{}; };
struct TransitionContent {
  std::shared_ptr<const dialogue::FontResources> fonts;
  std::shared_ptr<const dialogue::WindowResources> windows;
  GeneratedInputData generated;
  WorldDoorTransitionData doors;
  explicit TransitionContent(const eb::GameAssets &assets)
      : fonts(dialogue::FontResources::import(assets.image, assets.version)),
        windows(dialogue::WindowResources::import(assets.image, assets.version)),
        generated(assets.image, assets.version), doors(assets.image, assets.version) {}
};
struct Extra {
  dialogue::State text;
  dialogue::TextOutput output;
  dialogue::WindowHost windows;
  WorldDoorTransitionState state;
  WorldInputPlayback playback;
  WorldScheduler scheduler;
  WorldDoorTransitions transitions;
  Extra(TransitionContent &c, Fixture &f, const WalkingData &data)
      : output(c.fonts, text), windows(c.windows, text, output),
        playback(f.leader, f.input), scheduler(windows, f.clock, f.phone, f.actors.appearance_scene(), f.maintenance),
        transitions(c.doors, c.generated, data, playback, scheduler, f.leader,
                    f.control, f.navigation, f.formation, state) { f.walking.bind_transitions(transitions); }
};
std::array<unsigned, 4> callback_addresses(eb::GameVersion v) {
  return v == eb::GameVersion::US
      ? std::array<unsigned, 4>{0xc06e2c, 0xc06e4a, 0xc06f82, 0xc06fed}
      : std::array<unsigned, 4>{0xc0705a, 0xc07078, 0xc071b0, 0xc0721b};
}
void seed_extra(Oracle &o, const Extra &e, eb::GameVersion v) {
  o.put(o.l.stairs + 2, e.state.escalator_entrance);
  o.put(o.l.stairs + 6, e.state.automatic_direction);
  o.put(o.l.stairs + 8, e.state.stairs_target.x);
  o.put(o.l.stairs + 10, e.state.stairs_target.y);
  o.put(o.l.stairs + 12, e.state.escalator_target.x);
  o.put(o.l.stairs + 14, e.state.escalator_target.y);
  o.put(0x77, e.playback.state().raw[0]);
  o.put(0x79, e.playback.state().raw[1]);
  o.put(0x7b, e.playback.state().flags);
  o.put(0x83, e.playback.state().initial_pad);
  const unsigned tasks = v == eb::GameVersion::US ? 0x9e3c : 0xa042;
  const unsigned buffer = v == eb::GameVersion::US ? 0x9e58 : 0xa05e;
  std::fill(o.bus->work_ram.begin() + buffer, o.bus->work_ram.begin() + buffer + 194, 0);
  const auto callbacks = callback_addresses(v);
  for (unsigned i = 0; i < 4; ++i) {
    o.put(tasks + i * 6, e.scheduler.tasks()[i].frames_left);
    const auto address = callbacks[unsigned(e.scheduler.tasks()[i].callback)];
    o.put(tasks + i * 6 + 2, address);
    o.put(tasks + i * 6 + 4, address >> 16);
  }
}
void compare_extra(const Oracle &o, const Fixture &f, const Extra &e, eb::GameVersion v) {
  require(o.word(o.l.stairs + 2) == e.state.escalator_entrance &&
          o.word(o.l.stairs + 6) == e.state.automatic_direction &&
          o.word(o.l.stairs + 8) == e.state.stairs_target.x && o.word(o.l.stairs + 10) == e.state.stairs_target.y &&
          o.word(o.l.stairs + 12) == e.state.escalator_target.x && o.word(o.l.stairs + 14) == e.state.escalator_target.y,
          "Real door producer changed transition state differently");
  require(o.word(0x77) == e.playback.state().raw[0] && o.word(0x79) == e.playback.state().raw[1] &&
          o.word(0x7b) == e.playback.state().flags && o.word(0x83) == e.playback.state().initial_pad &&
          o.word(0x81) == f.leader.demo_frames, "Actual producer playback differs");
  const unsigned tasks = v == eb::GameVersion::US ? 0x9e3c : 0xa042;
  const unsigned buffer = v == eb::GameVersion::US ? 0x9e58 : 0xa05e;
  const auto callbacks = callback_addresses(v);
  for (unsigned i = 0; i < 4; ++i) {
    const auto address = callbacks[unsigned(e.scheduler.tasks()[i].callback)];
    require(o.word(tasks + i * 6) == e.scheduler.tasks()[i].frames_left &&
            o.word(tasks + i * 6 + 2) == (address & 0xffff) && o.word(tasks + i * 6 + 4) == address >> 16,
            "Actual door producer scheduled different task");
  }
  const auto runs = e.transitions.builder().runs();
  for (unsigned i = 0; i < runs.size(); ++i)
    require(o.bus->work_ram[buffer + 3 * i] == runs[i].frames && o.word(buffer + 3 * i + 1) == runs[i].pad,
            "Actual door producer generated different run");
  if (e.playback.sequence()) {
    const auto seq = e.playback.sequence()->runs();
    for (unsigned i = 0; i < seq.size(); ++i)
      require(o.bus->work_ram[buffer + 3 * i] == seq[i].frames && o.word(buffer + 3 * i + 1) == seq[i].pad,
              "Installed sequence including terminator differs");
    require(o.word(0x7d) == buffer && o.word(0x7f) == 0x7e && e.playback.run_index() == 0,
            "Escalator consumed installed playback within the same control tick");
  }
}
void invoke(Oracle &o, Fixture &f, WorldDoorTransitionState &state, const WalkingData &data,
            const WorldCollision &collision, const WorldMovement &movement, const WorldMapArea &area,
            Counts &counts, Extra *extra = nullptr) {
  WorldEscalator escalator(data, f.actors, f.leader, f.control, f.formation, f.navigation,
      state, f.maintenance, f.input, f.queue, f.doors, collision, movement, area);
  o.seed(f, area);
  o.put(o.l.stairs + 2, state.escalator_entrance);
  if (extra) seed_extra(o, *extra, f.version);
  const auto x = f.leader.leader_x;
  const bool gated = f.maintenance.enemy_touched || f.actors.appearance_scene().battle_swirl_ticks;
  o.call(o.l.entry);
  auto native = escalator.begin();
  require(native->advance() && native->complete(), "Actual escalator left an unimplemented door producer");
  o.compare(f);
  if (extra) compare_extra(o, f, *extra, f.version);
  require(o.word(o.l.stairs + 2) == state.escalator_entrance, "Entrance control differs");
  ++counts.calls;
  counts.gates += gated;
  counts.door_routes += f.leader.map_text.door_found_type != 0x1234;
  counts.motion_despite_collision += !gated && bool(f.leader.surface_flags & 0xc0);
  counts.wrapped += (x > 65000 && f.leader.leader_x < 10) || (x < 10 && f.leader.leader_x > 65000);
}
void run(const eb::GameAssets &assets) {
  const auto version = assets.version;
  const WalkingData data(assets.image, version);
  const WorldCollision collision(assets.image, world_collision_layout(version));
  const WorldMovement movement(assets.image, world_movement_layout(version));
  auto bytes = assets.image;
  const auto custom = content(version);
  std::copy(custom.begin() + 0xf3000, custom.begin() + 0xf4402, bytes.begin() + 0xf3000);
  std::copy(custom.begin() + 0x100000, custom.begin() + 0x101400, bytes.begin() + 0x100000);
  Oracle oracle(bytes, version);
  Counts counts;
  for (unsigned surface : {0u, 8u, 12u, 0x40u, 0x80u, 0xc0u, 0x10u}) {
    auto map = terrain(surface);
    const auto area = map.area();
    for (unsigned direction = 0; direction < 4; ++direction)
      for (unsigned variation = 0; variation < 8; ++variation) {
        context = "surface=" + std::to_string(surface) + " direction=" + std::to_string(direction) + " variant=" + std::to_string(variation);
        Fixture f(version, data, bytes, collision, movement, area);
        WorldDoorTransitionState state;
        state.escalator_entrance = (direction << 8) | 0x8055;
        f.leader.walking_style = 12;
        f.leader.leader_x = variation & 1 ? 0xffff : 0;
        f.leader.leader_y = variation & 2 ? 0xffff : 0;
        f.control.x_fraction = variation * 0x2345;
        f.control.y_fraction = 0xffff - variation * 0x1234;
        f.control.moved_this_tick = 7;
        f.control.trodden_surface_flags = 12;
        f.navigation = {0x1234, 0x71, 0x12, 0x34, 0x56, {0x789a, 0x9abc}};
        f.leader.checked_surface_origin = {0xabcd, 0xbcde};
        f.leader.surface_flags = 0x1234;
        f.leader.collision_actor = f.player;
        f.leader.map_text.door_found_type = 0x1234;
        f.formation.projection.movement_mismatch = 7;
        f.mushroom = {1, 17, 2};
        f.queued.pending = variation & 4;
        f.actors.appearance_scene().movement_counter = 0xabcd;
        invoke(oracle, f, state, data, collision, movement, area, counts);
      }
  }
  movement_test::Fixture mixed;
  const auto mixed_area = mixed.area();
  for (unsigned pattern = 0; pattern < 256; pattern += 3)
    for (unsigned direction = 0; direction < 4; ++direction)
      for (unsigned phase : {0u, 3u, 7u}) {
        context = "mixed pattern=" + std::to_string(pattern) + " direction=" + std::to_string(direction) + " phase=" + std::to_string(phase);
        Fixture f(version, data, bytes, collision, movement, mixed_area);
        WorldDoorTransitionState state;
        state.escalator_entrance = direction << 8;
        f.leader.walking_style = 12;
        f.leader.leader_x = pattern * 32 + 16 + phase;
        f.leader.leader_y = 8 + phase;
        f.leader.map_text.door_found_type = 0x1234;
        invoke(oracle, f, state, data, collision, movement, mixed_area, counts);
      }
  auto flat = terrain(0);
  const auto flat_area = flat.area();
  for (unsigned enemy : {0u, 1u, 0xffffu})
    for (unsigned swirl : {0u, 1u, 2u, 0xffffu}) {
      context = "enemy=" + std::to_string(enemy) + " swirl=" + std::to_string(swirl);
      Fixture f(version, data, bytes, collision, movement, flat_area);
      WorldDoorTransitionState state;
      f.maintenance.enemy_touched = enemy;
      f.actors.appearance_scene().battle_swirl_ticks = swirl;
      f.control.encounter.mode = 0x1234;
      f.control.moved_this_tick = 9;
      f.leader.map_text.door_found_type = 0x1234;
      invoke(oracle, f, state, data, collision, movement, flat_area, counts);
    }
  TransitionContent transition_content(assets);
  auto ladder = terrain(0x10);
  const auto ladder_area = ladder.area();
  for (unsigned door : {0u, 1u, 2u, 3u, 4u, 5u, 6u, 7u})
    for (unsigned direction = 0; direction < 4; ++direction)
      for (unsigned mode = 0; mode < 3; ++mode) {
        const unsigned value = door == 0 ? 0x200 : door == 3 ? 0x8000 : door == 4 ? direction << 8 : 0;
        auto door_bytes = bytes;
        const auto payload = content(version, door, value);
        std::copy(payload.begin() + 0xf3000, payload.begin() + 0xf4402, door_bytes.begin() + 0xf3000);
        if (door == 0) std::copy(payload.begin() + 0xf0200, payload.begin() + 0xf0206, door_bytes.begin() + 0xf0200);
        Oracle source(door_bytes, version);
        Fixture f(version, data, door_bytes, collision, movement, ladder_area);
        Extra extra(transition_content, f, data);
        extra.state.escalator_entrance = direction << 8;
        extra.state.automatic_direction = 6;
        extra.state.escalator_target = {1, 2};
        extra.state.stairs_target = {3, 4};
        f.leader.walking_style = mode == 2 ? 0 : 12;
        f.leader.demo_frames = mode == 1 ? 3 : 0;
        f.input.player_activity = 1;
        f.leader.map_text.door_found_type = 0x1234;
        f.flags[0] = 1;
        context = "actual door=" + std::to_string(door) + " direction=" + std::to_string(direction) + " mode=" + std::to_string(mode);
        invoke(source, f, extra.state, data, collision, movement, ladder_area, counts, &extra);
        oracle.normalized_routes += source.normalized_routes;
      }
  std::cout << (version == eb::GameVersion::US ? "US" : "JP") << " escalator: " << counts.calls
            << " complete source calls, " << counts.gates << " early gates, " << counts.door_routes
            << " actual door routes, " << counts.motion_despite_collision << " motions despite collision flags, "
            << counts.wrapped << " X wraps, " << oracle.normalized_routes << " real generated routes with documented X phase\n";
}
}
int main(int argc, char **argv) {
  try {
    require(argc >= 2, "native_world_escalator_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i) run(eb::load_game_assets(argv[i], eb::asset_profiles()));
    return 0;
  } catch (const std::exception &e) { std::cerr << e.what() << '\n'; return 1; }
}
