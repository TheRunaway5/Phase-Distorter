// Actual C0449B, its terrain/NPC/door/hotspot helpers and VELOCITY_STORE
// execute only here. No helper is replaced for completed native walking cases.
#include "eb/main_cpu_65816.hpp"
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
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  Oracle(std::span<const std::uint8_t> bytes, eb::GameVersion v)
      : l(layout(v)), bus(std::make_unique<eb::SnesBus>(bytes, v)), cpu(*bus) {
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
             {game(148), f.formation.current_leader_role},
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
struct Counts {
  unsigned calls{}, redirects{}, blocked{}, collisions{}, queued{}, climb{},
      wrapped{};
};
void run_case(Oracle &oracle, Fixture &f, const WorldMapArea &area,
              Counts &counts) {
  oracle.seed(f, area);
  const auto oldx = f.leader.leader_x;
  oracle.call(oracle.l.entry);
  const auto native = f.walking.begin();
  require(native->advance(),
          "Expected complete original walking, got pending transition");
  oracle.compare(f);
  ++counts.calls;
  counts.redirects += f.formation.projection.movement_mismatch == 1;
  counts.blocked += f.control.moved_this_tick == 0;
  counts.collisions += f.leader.collision_actor.has_value();
  counts.queued += f.queued.pending != 0;
  counts.climb += f.leader.walking_style == 7 || f.leader.walking_style == 8;
  counts.wrapped += oldx > 65000 && f.leader.leader_x < 10;
}
void run(const eb::GameAssets &assets) {
  const auto v = assets.version;
  const WalkingData data(assets.image, v);
  const WorldCollision collision(assets.image, world_collision_layout(v));
  const WorldMovement movement(assets.image, world_movement_layout(v));
  auto bytes = assets.image;
  const auto door_bytes = content(v);
  std::copy(door_bytes.begin() + 0xf3000, door_bytes.begin() + 0xf4402,
            bytes.begin() + 0xf3000);
  std::copy(door_bytes.begin() + 0x100000, door_bytes.begin() + 0x101400,
            bytes.begin() + 0x100000);
  Oracle oracle(bytes, v);
  Counts counts;
  for (unsigned surface : {0u, 8u, 12u, 0x40u, 0x80u, 0x10u}) {
    auto map = terrain(surface);
    auto area = map.area();
    for (unsigned style = 0; style < 14; ++style)
      for (unsigned nibble = 0; nibble < 16; ++nibble)
        for (unsigned variation = 0; variation < 4; ++variation) {
          context = "surface=" + std::to_string(surface) +
                    " style=" + std::to_string(style) +
                    " input=" + std::to_string(nibble) +
                    " variant=" + std::to_string(variation);
          Fixture f(v, data, bytes, collision, movement, area);
          f.leader.walking_style = style;
          f.input.state[0] = std::uint16_t(nibble << 8 | 0x40);
          f.input.pressed[0] = std::uint16_t((15 - nibble) << 8 | 0x8040);
          f.input.state[1] = 0x3456;
          f.input.pressed[1] = 0x9876;
          f.control.trodden_surface_flags = surface;
          f.party.party_status = variation == 2 ? 3 : 0;
          f.leader.movement_flags = variation == 3 ? 2 : variation == 2 ? 1 : 0;
          f.leader.demo_frames = variation == 3 ? (nibble & 1 ? 7 : 0) : 0;
          f.navigation = {std::uint16_t(variation * 0x100),
                          0x71,
                          0x1234,
                          0x56,
                          0x77,
                          {0x1234, 0x9876}};
          f.leader.checked_surface_origin = {0x5678, 0x789a};
          f.leader.surface_flags = 0xabcd;
          f.formation.projection.movement_mismatch = 0x18;
          f.actors.appearance_scene().movement_counter = 0xffff;
          f.control.x_fraction = std::uint16_t(variation * 0x5555);
          f.control.y_fraction = std::uint16_t(0xffff - variation * 0x5555);
          f.leader.leader_x = std::uint16_t(128 + variation);
          f.leader.leader_y = std::uint16_t(80 + variation);
          f.prompt.debug = variation == 1;
          f.clock.frame_counter = variation;
          run_case(oracle, f, area, counts);
        }
  }
  auto flat = terrain(0);
  auto area = flat.area();
  // Nonuniform authored test arrangements force corner steering and retries;
  // reference CPU receives a coherent cache of the exact native world cells.
  movement_test::Fixture mixed;
  const auto mixed_area = mixed.area();
  constexpr std::array<unsigned, 8> direction_pads{0x800, 0x900, 0x100, 0x500,
                                                   0x400, 0x600, 0x200, 0xa00};
  for (unsigned pattern = 0; pattern < 256; pattern += 3)
    for (unsigned d = 0; d < 8; ++d)
      for (unsigned phase : {0u, 3u, 7u}) {
        context = "nonuniform pattern=" + std::to_string(pattern) +
                  " dir=" + std::to_string(d) +
                  " phase=" + std::to_string(phase);
        Fixture f(v, data, bytes, collision, movement, mixed_area);
        f.leader.leader_x = std::uint16_t(pattern * 32 + 16 + phase);
        f.leader.leader_y = std::uint16_t(8 + phase);
        f.input.state[0] = direction_pads[d];
        run_case(oracle, f, mixed_area, counts);
      }
  for (unsigned timer : {0u, 1u, 1800u})
    for (unsigned modifier = 0; modifier < 4; ++modifier)
      for (unsigned nibble = 0; nibble < 16; ++nibble)
        for (unsigned swirl : {0u, 1u, 2u}) {
          context = "mushroom timer=" + std::to_string(timer) +
                    " modifier=" + std::to_string(modifier) +
                    " input=" + std::to_string(nibble) +
                    " swirl=" + std::to_string(swirl);
          Fixture f(v, data, bytes, collision, movement, area);
          f.mushroom = {1, std::uint16_t(timer), std::uint16_t(modifier)};
          f.input.state[0] = std::uint16_t(nibble << 8 | 0x41);
          f.input.pressed[0] = std::uint16_t((15 - nibble) << 8 | 0x8240);
          f.actors.appearance_scene().battle_swirl_ticks = swirl;
          f.leader.collision_actor = f.player;
          f.leader.demo_frames = nibble % 5 == 0 ? 3 : 0;
          f.queued.pending = nibble % 7 == 0 ? 1 : 0;
          run_case(oracle, f, area, counts);
        }
  for (unsigned intangible : {0u, 1u, 65535u})
    for (unsigned released : {0u, 1u}) {
      context = "actual enemy intangible=" + std::to_string(intangible) +
                " released=" + std::to_string(released);
      Fixture f(v, data, bytes, collision, movement, area);
      const auto enemy = f.spawn_enemy();
      if (released)
        f.enemies.release_appearance(f.actors, enemy);
      f.actors.appearance_scene().intangibility_ticks = intangible;
      run_case(oracle, f, area, counts);
    }
  for (unsigned leader_role : {24u, 25u})
    for (unsigned direction = 0; direction < 8; ++direction)
      for (unsigned obstacle_role : {0u, 22u, 23u})
        for (unsigned disabled : {0u, 1u}) {
          context = "collision leader=" + std::to_string(leader_role) +
                    " facing=" + std::to_string(direction) +
                    " obstacle=" + std::to_string(obstacle_role) +
                    " disabled=" + std::to_string(disabled);
          Fixture f(v, data, bytes, collision, movement, area);
          const auto other = f.create(25, 0xffff, {1, 2, 1, 2});
          f.formation.current_leader_role = leader_role; // Independent source current_party_members.
          f.actors.actor(other).behavior.direction = direction;
          f.actors.actor(f.player).behavior.direction = direction;
          const auto obstacle = f.create(obstacle_role, 7);
          f.actors.actor(obstacle).behavior.collision_object =
              disabled ? -32768 : -1;
          run_case(oracle, f, area, counts);
        }
  for (unsigned frame = 0; frame < 2; ++frame)
    for (unsigned mode : {1u, 2u})
      for (unsigned teleport : {0u, 1u})
        for (unsigned suppress : {0u, 1u}) {
          context = "hotspot parity=" + std::to_string(frame) +
                    " mode=" + std::to_string(mode) +
                    " teleport=" + std::to_string(teleport) +
                    " suppress=" + std::to_string(suppress);
          Fixture f(v, data, bytes, collision, movement, area);
          f.clock.frame_counter = frame;
          for (unsigned i = 0; i < 2; ++i) {
            f.hotspot_state.live[i] = {
                std::uint16_t(mode),
                mode == 1 ? std::uint16_t(0) : std::uint16_t(120),
                0,
                mode == 1 ? std::uint16_t(1) : std::uint16_t(140),
                100,
                0xdd0042 + i};
            f.hotspot_state.saved_modes[i] = mode;
          }
          f.actors.appearance_scene().teleport_destination = teleport;
          f.queued.current_type = suppress ? 9 : 0xffff;
          run_case(oracle, f, area, counts);
        }
  // Collision field wraps as the source does, using a coherent cache per
  // center.
  for (unsigned x : {0u, 1u, 65534u, 65535u})
    for (unsigned y : {0u, 65535u})
      for (unsigned pad : {0x100u, 0x200u, 0x800u, 0x400u}) {
        context = "wrapped x=" + std::to_string(x) + " y=" + std::to_string(y) +
                  " pad=" + std::to_string(pad);
        Fixture f(v, data, bytes, collision, movement, area);
        f.leader.leader_x = x;
        f.leader.leader_y = y;
        f.input.state[0] = pad;
        run_case(oracle, f, area, counts);
      }
  auto ladder = terrain(0x10);
  const auto ladder_area = ladder.area();
  for (unsigned type = 0; type < 8; ++type)
    for (unsigned gates = 0; gates < 8; ++gates) {
      const unsigned control = type == 0   ? 0x200
                               : type == 1 ? (gates & 1)
                                           : 0x1234;
      auto selected = bytes;
      const auto contents = content(v, type, control);
      std::copy(contents.begin() + 0xf3000, contents.begin() + 0xf4402,
                selected.begin() + 0xf3000);
      std::copy(contents.begin() + 0xf0200, contents.begin() + 0xf0206,
                selected.begin() + 0xf0200);
      Oracle door_oracle(selected, v);
      context = "walking door type=" + std::to_string(type) +
                " gates=" + std::to_string(gates);
      Fixture f(v, data, selected, collision, movement, ladder_area);
      f.flags[0] = gates & 1;
      f.input.player_activity = gates & 1;
      f.maintenance.enemy_touched = (gates & 2) ? 1 : 0;
      f.control.automatic_mode = (gates & 4) ? 2 : 0;
      f.leader.demo_frames = type == 3 || type == 4 ? 1 : 0;
      f.hotspot_state.live[0] = {2, 0, 0, 1000, 1000, 0xdd0077};
      f.hotspot_state.saved_modes[0] = 2;
      run_case(door_oracle, f, ladder_area, counts);
    }
  unsigned pending_transitions{};
  for (unsigned type : {3u, 4u})
    for (unsigned direction : {0u, 2u, 4u, 6u}) {
      auto selected = bytes;
      const auto contents = content(v, type, 0x200);
      std::copy(contents.begin() + 0xf3000, contents.begin() + 0xf4402,
                selected.begin() + 0xf3000);
      Oracle boundary(selected, v);
      context = "pending walking transition type=" + std::to_string(type) +
                " direction=" + std::to_string(direction);
      Fixture f(v, data, selected, collision, movement, ladder_area);
      f.input.state[0] = direction_pads[direction];
      f.hotspot_state.live[0] = {2, 0, 0, 1000, 1000, 0xdd0077};
      f.hotspot_state.saved_modes[0] = 2;
      boundary.seed(f, ladder_area);
      require(!boundary.call(boundary.l.entry, false,
                             v == eb::GameVersion::US ? 0xc48c69 : 0xc462b3),
              "Source transition completed before its real input producer");
      const auto native = f.walking.begin();
      require(!native->advance() && native->request() &&
                  native->request()->control == 0x200 &&
                  native->request()->cell == f.navigation.ladder_stairs &&
                  native->request()->kind ==
                      (type == 3 ? WorldDoorTransitionKind::Escalator
                                 : WorldDoorTransitionKind::Stairs),
              "Walking lost its required transition request");
      boundary.compare(f);
      for (unsigned resume = 0; resume < 5; ++resume) {
        require(!native->advance(), "Pending walking falsely completed");
        boundary.compare(f);
      }
      ++pending_transitions;
    }
  require(counts.calls && counts.redirects && counts.blocked &&
              counts.collisions && counts.queued && counts.climb &&
              counts.wrapped,
          "Walking source coverage missing");
  std::cout << "PASS " << assets.title << ": " << counts.calls
            << " actual walking calls, " << counts.blocked << " stopped, "
            << counts.collisions << " NPC collisions, " << counts.queued
            << " queued, " << counts.climb << " climbing, " << counts.wrapped
            << " X wraps, " << counts.redirects << " redirects, "
            << pending_transitions << " actual producer boundaries\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    require(argc >= 2, "native_world_walking_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i)
      run(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
