// Actual regional C048D3, integer velocity import, directional terrain, NPC
// collision and complete PLAY_SOUND queue producer execute only in this oracle.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/world_bicycle.hpp"
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
    return {0xc048d3, 0xc430ec, 0x97f5, 0,      0x436c, 0x4dc2, 0x5d60, 0x5da4,
            0x2890,   0x5d56,   0x5d58, 0x5dc4, 0x289e, 0x0a62, 0x2af6, 0x0b8e,
            0x0bca,   0x332a,   0x1a4a, 0x33de, 0x33a2, 0x3366, 0x2c9a, 0x5e3c,
            0x9f3f,   0x5dea,   0x5e02, 0x5e04, 0x5d9a, 0x5dc0, 0x5dc2, 0x5dbc,
            0x5dbe,   0x9c08,   0x0a34, 0x4dba};
  return {0xc04b65, 0xc02c4e, 0x9aa9, 3,      0x46f2, 0x5148, 0x60e6, 0x612a,
          0x2c8e,   0x60dc,   0x60de, 0x614a, 0x2c9c, 0x0a58, 0x2ef4, 0x0b84,
          0x0bc0,   0x3728,   0x1a40, 0x37dc, 0x37a0, 0x3764, 0x3098, 0x61c2,
          0xa141,   0x6170,   0x6188, 0x618a, 0x6120, 0x6146, 0x6148, 0x6142,
          0x6144,   0x9eb3,   0x0a2a, 0x5140};
}
struct BellPoint {
  dialogue::ScriptSoundRequest intent;
  std::array<unsigned, 8> state;
  bool operator==(const BellPoint &) const = default;
};
BellPoint bell_point(const Fixture &f, const dialogue::ScriptSoundRequest &r) {
  return {r,
          {f.leader.leader_x, f.leader.leader_y, f.control.x_fraction,
           f.control.y_fraction, f.control.bicycle_turn_frames,
           f.leader.leader_direction, f.navigation.ladder_stairs.x,
           f.control.moved_this_tick}};
}
struct Oracle {
  Layout l;
  unsigned turn, shape, sound, queue, end, flip;
  std::vector<BellPoint> bells;
  unsigned calls{}, steps{};
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  Oracle(std::span<const std::uint8_t> bytes, eb::GameVersion v)
      : l(layout(v)), turn(v == eb::GameVersion::US ? 0x5d5a : 0x60e0),
        shape(v == eb::GameVersion::US ? 0x2b6e : 0x2f6c),
        sound(v == eb::GameVersion::US ? 0xc0abe0 : 0xc0abbf),
        queue(v == eb::GameVersion::US ? 0x1ac2 : 0x1b30),
        end(v == eb::GameVersion::US ? 0xca : 0xc8),
        flip(v == eb::GameVersion::US ? 0x1aca : 0x1b38),
        bus(std::make_unique<eb::SnesBus>(bytes, v)), cpu(*bus) {
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
  bool call(unsigned entry, bool far = false, unsigned boundary = 0,
            unsigned previous = 0) {
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = previous;
    cpu.x_index = cpu.y_index = 0;
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
      if (cpu.program_counter == sound) {
        bells.push_back(
            {{dialogue::ScriptSoundKind::QueueEffect,
              std::uint8_t(cpu.accumulator), std::uint16_t(cpu.accumulator)},
             {word(game(130)), word(game(134)), word(game(128)),
              word(game(132)), word(turn), word(game(138)), word(l.flags + 4),
              word(game(144))}});
      }
      cpu.step_instruction();
      ++this->steps;
    }
    throw std::runtime_error("Bicycle source did not return: " +
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
    bells.clear();
    put(turn, f.control.bicycle_turn_frames);
    for (unsigned i = 0; i < 8; ++i)
      bus->work_ram[queue + i] = 0xa0 + i;
    bus->work_ram[end] = 7;
    bus->work_ram[flip] = 0x80;
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
        put(shape + role * 2, actor.appearance_context.shape);
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
    equal("bicycle turn", turn, f.control.bicycle_turn_frames);
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
  unsigned calls{}, bells{}, stopped{}, collisions{}, coasts{}, wraps{};
};
void compare_case(Oracle &o, Fixture &f, const WalkingData &data,
                  const WorldCollision &collision, const WorldMapArea &area,
                  unsigned previous, Counts &counts, bool seed = true) {
  if (seed)
    o.seed(f, area);
  else {
    // Only the caller's newly supplied processed input and cleared movement
    // word change. Retain source XY, fractions, turn counter and audio queue
    // from the preceding actual call, all already compared to native state.
    o.bells.clear();
    o.put(0x65, f.input.state[0]);
    o.put(0x6d, f.input.pressed[0]);
    o.put(o.game(144), f.control.moved_this_tick);
    o.cache(area, {f.leader.leader_x, f.leader.leader_y});
  }
  const unsigned old_end = o.bus->work_ram[o.end],
                 old_flip = o.bus->work_ram[o.flip];
  std::array<std::uint8_t, 8> old_queue;
  std::copy_n(o.bus->work_ram.begin() + o.queue, 8, old_queue.begin());
  std::vector<BellPoint> bells;
  WorldBicycle bicycle(data, f.actors, f.enemies, f.leader, f.control,
                       f.formation, f.prompt, f.input, f.navigation, f.queue,
                       collision, area,
                       [&](const dialogue::ScriptSoundRequest &r) {
                         bells.push_back(bell_point(f, r));
                       });
  const auto before_x = f.leader.leader_x;
  o.call(o.l.entry, false, 0, previous);
  bicycle.execute(previous);
  o.compare(f);
  require(o.bells == bells, "Bicycle sound intent or ordering differs");
  require(o.bus->work_ram[o.end] ==
                  (bells.empty() ? old_end : (old_end + 1) & 7) &&
              o.bus->work_ram[o.flip] ==
                  (bells.empty() ? old_flip : old_flip ^ 0x80),
          "Original bell queue effects differ");
  for (unsigned i = 0; i < 8; ++i)
    require(o.bus->work_ram[o.queue + i] ==
                (i == old_end && !bells.empty() ? 23 | old_flip : old_queue[i]),
            "Original bell queue byte differs");
  ++counts.calls;
  counts.bells += bells.size();
  counts.stopped += f.control.moved_this_tick == 0;
  counts.collisions += f.leader.collision_actor.has_value();
  counts.coasts += !(f.input.state[0] & 0xf00) && previous;
  counts.wraps += before_x > 65000 && f.leader.leader_x < 10;
}
void run(const eb::GameAssets &assets) {
  const auto region = assets.version;
  const WalkingData data(assets.image, region);
  const WorldCollision collision(assets.image, world_collision_layout(region));
  const WorldMovement movement(assets.image, world_movement_layout(region));
  Oracle oracle(assets.image, region);
  Counts counts;
  for (unsigned surface : {0u, 8u, 12u, 0x40u, 0x80u, 0xc0u, 0x10u}) {
    auto flat = terrain(surface);
    auto area = flat.area();
    for (unsigned nibble = 0; nibble < 16; ++nibble)
      for (unsigned previous : {0u, 1u, 0xffffu})
        for (unsigned turn : {0u, 1u, 2u, 4u, 0xffffu}) {
          Fixture f(region, data, assets.image, collision, movement, area);
          f.leader.walking_style = 3;
          f.leader.leader_direction = (nibble + turn) % 8;
          f.actors.actor(f.player).appearance_context.shape = nibble % 17;
          f.input.state[0] = nibble << 8;
          f.input.pressed[0] = nibble & 4 ? 0x10 : 0;
          f.input.state[1] = 0x2222;
          f.input.pressed[1] = 0x4444;
          f.control.bicycle_turn_frames = turn;
          f.control.moved_this_tick = previous ? 0 : 0xffff;
          f.control.trodden_surface_flags = 0xbeef;
          f.control.x_fraction = std::uint16_t(turn * 0x7777);
          f.control.y_fraction = 0xffff - f.control.x_fraction;
          f.navigation = {0x300, 0x72, 0x1234, 0x56, 0x77, {0x1234, 0x789a}};
          f.actors.appearance_scene().movement_counter = 0xffff;
          f.leader.checked_surface_origin = {0x5687, 0x789a};
          f.leader.surface_flags = 0xaabb;
          f.formation.projection.movement_mismatch = 0x18;
          f.mushroom = {1, 2, 3};
          f.party.party_status = 3;
          f.clock.frame_counter = 42;
          f.control.automatic_mode = 0x1234;
          context = assets.title + " surface=" + std::to_string(surface) +
                    " input=" + std::to_string(nibble) +
                    " previous=" + std::to_string(previous) +
                    " turn=" + std::to_string(turn);
          compare_case(oracle, f, data, collision, area, previous, counts);
        }
  }
  auto flat = terrain(0);
  auto area = flat.area();
  for (unsigned kind = 0; kind < 8; ++kind)
    for (unsigned swirl : {0u, 1u, 2u, 0xffffu})
      for (unsigned flags : {0u, 1u, 2u, 3u}) {
        Fixture f(region, data, assets.image, collision, movement, area);
        f.leader.walking_style = 3;
        f.input.state[0] = 0x100;
        f.input.pressed[0] = 0x10;
        f.control.moved_this_tick = 7;
        f.control.bicycle_turn_frames = 3;
        f.leader.movement_flags = flags;
        f.leader.collision_actor = f.player;
        f.actors.appearance_scene().battle_swirl_ticks = swirl;
        if (kind == 0)
          f.create(0, 7);
        if (kind == 1) {
          auto a = f.create(1, 7);
          f.actors.actor(a).hitbox->enabled = 0;
        }
        if (kind == 2) {
          auto a = f.create(2, 7);
          f.actors.actor(a).behavior.collision_object = -32768;
        }
        if (kind == 3) {
          auto a = f.create(3, 7);
          f.actors.actor(a).action().alive = false;
        }
        if (kind == 4) {
          f.create(4, 0xffff);
          f.actors.appearance_scene().intangibility_ticks = 1;
        }
        if (kind == 5) {
          auto enemy = f.spawn_enemy();
          f.actors.actor(enemy).action().position = {128 << 16, 80 << 16, 0};
          f.actors.appearance_scene().intangibility_ticks = 1;
        }
        if (kind == 6) {
          f.formation.roles[0] = 25; f.formation.current_leader_role = 25;
          f.create(25, 0xffff, {1, 1, 1, 1});
          f.create(0, 7);
        }
        if (kind == 7) {
          f.queued.pending = 1;
          f.input.state[0] = 0;
          f.leader.leader_direction = 7;
        }
        context = assets.title + " NPC kind=" + std::to_string(kind) +
                  " swirl=" + std::to_string(swirl) +
                  " flags=" + std::to_string(flags);
        compare_case(oracle, f, data, collision, area, 1, counts);
      }
  for (unsigned direction = 0; direction < 8; ++direction) {
    Fixture f(region, data, assets.image, collision, movement, area);
    f.leader.walking_style = 3;
    f.leader.leader_x = f.leader.leader_y = 65535;
    f.control.x_fraction = f.control.y_fraction = 0xffff;
    f.leader.leader_direction = direction;
    f.input.state[0] = 0;
    context =
        assets.title + " wrappedcoast direction=" + std::to_string(direction);
    compare_case(oracle, f, data, collision, area, 1, counts);
  }
  // Consecutive source calls retain actual turn/input/fraction state. No helper
  // ACK or frame advancement substitutes for the diagonal/coast progression.
  for (unsigned initial = 0; initial < 8; ++initial) {
    Fixture f(region, data, assets.image, collision, movement, area);
    f.leader.walking_style = 3;
    f.leader.leader_direction = initial;
    constexpr std::array<unsigned, 8> pads{0x900, 0x100, 0x100, 0x100,
                                           0x100, 0,     0x800, 0};
    for (unsigned tick = 0; tick < 32; ++tick) {
      f.input.state[0] = pads[tick % pads.size()];
      f.input.pressed[0] = tick % 5 == 0 ? 0x10 : 0;
      const auto previous = f.control.moved_this_tick;
      f.control.moved_this_tick = 0;
      context = assets.title +
                " retained turn initial=" + std::to_string(initial) +
                " step=" + std::to_string(tick);
      compare_case(oracle, f, data, collision, area, previous, counts,
                   tick == 0);
    }
  }
  std::cout << "PASS " << assets.title << ": " << counts.calls
            << " complete original bicycle reducers, " << counts.bells
            << " real bell queue calls/ordered native intents, "
            << counts.collisions << " NPC contacts, " << counts.coasts
            << " coasting cases, " << counts.wraps << " X wraps, "
            << oracle.steps
            << " original instructions; shared "
               "input/leader/terrain/queue/hotspot/RNG/frame fields equal\n";
}
} // namespace
int main(int argc, char **argv) {
  try {
    require(argc > 1, "native_world_bicycle_reference pack.ebpak ...");
    for (int i = 1; i < argc; ++i)
      run(eb::load_game_assets(argv[i], eb::asset_profiles()));
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
