// Complete original ordinary enemy decisions and unchanged EVENT_19/24/28.
// CPU execution is a test oracle only. Source fixtures start from identical
// owned enemy/actor states; no helper or audio-driver command is substituted.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/enemy_sprite_catalog.hpp"
#include "eb/native/world_activation.hpp"
#include "eb/native/world_actor_movement.hpp"
#include "eb/native/world_enemy_behavior.hpp"
#include "eb/native/world_enemy_movement.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "native_world_enemy_contact_fixture.hpp"
#include <iostream>
#include <set>

namespace {
using namespace eb::native;
using Fixture = enemy_contact_test::Fixture;
std::string context;
std::uint64_t checks{}, instructions{}, calls{};
void check(bool okay, const std::string &message) {
  ++checks;
  if (!okay)
    throw std::runtime_error(message + ": " + context);
}
unsigned packed(PaletteColor c) {
  return c.red | unsigned(c.green) << 5 | unsigned(c.blue) << 10;
}
struct Oracle {
  bool jp;
  std::unique_ptr<eb::SnesBus> bus;
  eb::MainCpu65816 cpu;
  unsigned game, shift, current, collisions, path_counts, enemy, tick, touched,
      target, touched_flag, swirl_count, remaining, roster, swirl, battle, door,
      movement_flags, intangible, interval, previous, suppression, position,
      fraction, velocity, velocity_fraction, direction, shape, obstacle,
      prospective;
  explicit Oracle(const eb::GameAssets &a)
      : jp(a.version == eb::GameVersion::JP),
        bus(std::make_unique<eb::SnesBus>(a.image, a.version)), cpu(*bus) {
    cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    bus->work_ram[0xd] = 0x80;
    game = jp ? 0x9aa9 : 0x97f5;
    shift = jp ? 3 : 0;
    current = jp ? 0x1a38 : 0x1a42;
    collisions = jp ? 0x2c9c : 0x289e;
    path_counts = jp ? 0x323c : 0x2e3e;
    enemy = jp ? 0x3110 : 0x2d12;
    tick = jp ? 0x10ac : 0x10b6;
    touched = jp ? 0x513c : 0x4db6;
    target = touched + 2;
    touched_flag = touched + 4;
    swirl_count = jp ? 0x60e6 : 0x5d60;
    remaining = jp ? 0x4e02 : 0x4a7c;
    roster = jp ? 0xa18c : 0x9f8a;
    swirl = jp ? 0xb097 : 0xaec2;
    battle = jp ? 0x5148 : 0x4dc2;
    door = jp ? 0x6148 : 0x5dc2;
    movement_flags = jp ? 0x60dc : 0x5d56;
    intangible = jp ? 0x60de : 0x5d58;
    interval = jp ? 0x6102 : 0x5d7c;
    previous = jp ? 0x6100 : 0x5d7a;
    suppression = jp ? 0x611e : 0x5d98;
    position = jp ? 0xb84 : 0xb8e;
    fraction = jp ? 0xc38 : 0xc42;
    velocity = jp ? 0xcec : 0xcf6;
    velocity_fraction = jp ? 0xda0 : 0xdaa;
    direction = jp ? 0x2ef4 : 0x2af6;
    shape = jp ? 0x2f6c : 0x2b6e;
    obstacle = jp ? 0x2cd8 : 0x28da;
    prospective = jp ? 0x2c48 : 0x2848;
  }
  void put(unsigned at, unsigned value) {
    bus->work_ram[at] = value;
    bus->work_ram[at + 1] = value >> 8;
  }
  unsigned get(unsigned at) const {
    return bus->work_ram[at] | unsigned(bus->work_ram[at + 1]) << 8;
  }
  unsigned role(const Fixture &f, ActorId id) const {
    return *f.actors.actor(id).authored_role();
  }
  void seed(const Fixture &f, ActorId id) {
    put(current, role(f, id));
    put(current + 2, role(f, id) * 2);
    put(game + 176 - shift, f.control.automatic_mode);
    put(game + 142 - shift, f.leader.walking_style);
    put(battle, f.control.encounter.mode);
    put(door, f.navigation.using_door);
    put(movement_flags, f.leader.movement_flags);
    put(intangible, f.actors.appearance_scene().intangibility_ticks);
    put(swirl_count, f.actors.appearance_scene().battle_swirl_ticks);
    put(touched, f.state.touched ? role(f, *f.state.touched) : 0xffff);
    put(target,
        f.state.pathfinding_target
            ? std::get<AuthoredRoleRef>(*f.state.pathfinding_target).value()
            : 0xffff);
    put(touched_flag, f.maintenance.enemy_touched);
    put(interval, f.control.direction_interval_ticks);
    put(previous, f.control.direction_interval_previous_mode);
    put(suppression, f.maintenance.overworld_status_suppression);
    for (unsigned i = 0; i < 4; ++i) {
      put(remaining + i * 2, f.state.remaining[i].enemy);
      put(remaining + 8 + i * 2, f.state.remaining[i].count);
    }
    put(roster, f.state.roster.size());
    for (unsigned i = 0; i < f.state.roster.size(); ++i)
      put(roster + 2 + i * 2, f.state.roster[i]);
    bus->work_ram[swirl] = f.swirl.update_in;
    bus->work_ram[swirl + 8] = f.swirl.padding;
    bus->work_ram[0x30] = f.visual.palette_dirty ? 24 : 0;
    for (unsigned i = 0; i < 256; ++i) {
      put(0x200 + i * 2, packed(f.colors[i]));
      put(0x12000 + i * 2, packed(f.palette_backup[i]));
    }
    for (unsigned r = 0; r < 30; ++r) {
      const auto actor = f.actors.actor_for_role(r);
      const auto b = f.actors.authored_behavior(r);
      const auto p = f.actors.authored_pause(r);
      put(collisions + r * 2, std::uint16_t(b.collision_object));
      put(path_counts + r * 2, actor ? f.paths.remaining(*actor) : 0);
      put(enemy + r * 2, f.actors.authored_enemy_selector(r));
      put(tick + r * 2, 0xc0 | (!p.scripts_and_physics_enabled ? 0x4000 : 0) |
                            (!p.tick_callback_enabled ? 0x8000 : 0));
      if (actor) {
        const auto &a = f.actors.actor(*actor);
        put(direction + r * 2, a.behavior.direction);
        put(shape + r * 2, a.appearance_context.shape);
        put(obstacle + r * 2, a.behavior.obstacle_flags);
        for (unsigned axis = 0; axis < 3; ++axis) {
          put(position + axis * 60 + r * 2, a.action().position[axis] >> 16);
          put(fraction + axis * 60 + r * 2, a.action().position[axis]);
          put(velocity + axis * 60 + r * 2, a.action().velocity[axis] >> 16);
          put(velocity_fraction + axis * 60 + r * 2, a.action().velocity[axis]);
        }
      }
    }
    put(collisions + 46,
        f.leader.collision_actor ? role(f, *f.leader.collision_actor) : 0xffff);
    for (unsigned y = 32; y < 96; ++y)
      for (unsigned x = 32; x < 96; ++x)
        bus->work_ram[0xe000 + (y & 63) * 64 + (x & 63)] =
            f.area.collision(x, y);
  }
  unsigned run(unsigned address, unsigned input = 0xa5a5) {
    ++calls;
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = input;
    cpu.x_index = 0x5a5a;
    cpu.y_index = 0x1234;
    cpu.execute_instruction<0x22>(address, 4);
    for (unsigned n = 0; n < 300000; ++n) {
      if (cpu.program_counter == 0xc0ff04 && cpu.stack_pointer == 0x1fff)
        return cpu.accumulator;
      cpu.step_instruction();
      ++instructions;
    }
    throw std::runtime_error(
        "Complete original contact helper did not return: " +
        cpu.describe_registers() + ": " + context);
  }
  void compare(const Fixture &f) {
    check(get(game + 176 - shift) == f.control.automatic_mode &&
              get(interval) == f.control.direction_interval_ticks &&
              get(previous) == f.control.direction_interval_previous_mode &&
              get(suppression) == f.maintenance.overworld_status_suppression,
          "Ordered interval state differs");
    check(get(touched) ==
                  (f.state.touched ? role(f, *f.state.touched) : 0xffff) &&
              get(target) ==
                  (f.state.pathfinding_target
                       ? std::get<AuthoredRoleRef>(*f.state.pathfinding_target)
                             .value()
                       : 0xffff) &&
              get(touched_flag) == f.maintenance.enemy_touched,
          "Selected contact identities differ");
    check(get(swirl_count) == f.actors.appearance_scene().battle_swirl_ticks,
          "Arrival countdown differs");
    check(get(roster) == f.state.roster.size(), "Arrival roster count differs");
    for (unsigned i = 0; i < f.state.roster.size(); ++i)
      check(get(roster + 2 + i * 2) == f.state.roster[i],
            "Arrival roster order differs");
    for (unsigned i = 0; i < 4; ++i)
      check(get(remaining + i * 2) == f.state.remaining[i].enemy &&
                get(remaining + 8 + i * 2) == f.state.remaining[i].count,
            "Remaining group differs");
    for (unsigned r = 0; r < 30; ++r) {
      const auto p = f.actors.authored_pause(r);
      check(bool(get(tick + r * 2) & 0x8000) == !p.tick_callback_enabled &&
                bool(get(tick + r * 2) & 0x4000) ==
                    !p.scripts_and_physics_enabled,
            "Live or vacant pause gate differs");
      if (r != 23)
        check(get(collisions + r * 2) ==
                  std::uint16_t(f.actors.authored_behavior(r).collision_object),
              "Actor collision result differs");
    }
    check(bus->work_ram[0x30] == (f.visual.palette_dirty ? 24 : 0),
          "Contact palette publication differs");
    for (unsigned i = 0; i < 256; ++i) {
      check(get(0x200 + i * 2) == packed(f.colors[i]),
            "Prepared palette differs");
      check(get(0x12000 + i * 2) == packed(f.palette_backup[i]),
            "Full palette backup differs");
    }
  }
};
struct Assets {
  const eb::GameAssets &a;
  std::shared_ptr<EnemySpawnData> enemies;
  std::shared_ptr<SpriteResources> sprites;
  std::shared_ptr<const ActionScriptData> scripts;
  unsigned encounter{}, choice{};
  explicit Assets(const eb::GameAssets &assets, unsigned script = 19)
      : a(assets), enemies(std::make_shared<EnemySpawnData>(
                       import_enemy_spawn_data(a.image, a.version))),
        sprites(std::make_shared<SpriteResources>(
            a.image, sprite_catalog_layout(a.version))),
        scripts(import_action_scripts(a.image, a.version)) {
    for (unsigned e = 1; e < enemies->encounters.size() && !encounter; ++e) {
      const auto &record = enemies->encounters[e];
      for (unsigned i = 0; i < record.choices.size(); ++i) {
        const auto &group = enemies->battles[record.choices[i]];
        if (group.size() == 1 && group[0].count > 0 && group[0].count < 20 &&
            enemies->enemies[group[0].enemy].script == script &&
            group[0].enemy != enemies->butterfly_enemy) {
          encounter = e;
          choice = i;
          break;
        }
      }
    }
    if (!encounter) {
      // EVENT_19 definitions occur in authored battle rows but not weighted
      // map encounters. This fixture selector admits a real original row;
      // enemy definitions, battle metadata and every task byte stay original.
      for (unsigned battle = 0; battle < enemies->battles.size() && !encounter;
           ++battle) {
        const auto &group = enemies->battles[battle];
        if (group.size() == 1 && group[0].count > 0 && group[0].count < 20 &&
            enemies->enemies[group[0].enemy].script == script &&
            enemies->enemies[group[0].enemy].sprite != 0 &&
            group[0].enemy != enemies->butterfly_enemy) {
          encounter = enemies->encounters.size();
          enemies->encounters.push_back(
              {0, {100, 0}, std::vector<unsigned>(8, battle)});
        }
      }
    }
    check(encounter != 0, "No actual battle row for requested enemy script");
  }
  std::unique_ptr<Fixture> fixture() {
    return std::make_unique<Fixture>(
        a.version, a.image, sprites, scripts, enemies,
        WorldCollision(a.image, world_collision_layout(a.version)),
        import_world_swirl_data(a.image));
  }
};
ActorId spawn(Fixture &f, unsigned encounter, unsigned choice,
              unsigned weakness) {
  EnemySpawnState input;
  input.event_flags.resize(128);
  input.bypass_chance = true;
  input.tileset = f.enemy_data->sectors[0].tileset;
  const auto &record = f.enemy_data->encounters.at(encounter);
  if (!record.chance[0] || choice >= 8) {
    check(record.event_flag != 0,
          "Alternative encounter branch has no event flag");
    input.event_flags.at((record.event_flag - 1) / 8) |=
        1u << ((record.event_flag - 1) & 7);
  }
  f.enemies.begin_cell(f.actors, 0, 0, encounter, 8, 8, input);
  while (f.enemies.busy()) {
    if (const auto *r = std::get_if<EnemyRandomRequest>(&*f.enemies.request()))
      f.enemies.respond_random(
          f.actors, r->purpose == EnemyRandomPurpose::WeightedGroup ? choice & 7
                    : r->purpose == EnemyRandomPurpose::Weakness    ? weakness
                                                                    : 0);
    else
      f.enemies.respond_terrain(f.actors, 0);
  }
  check(!f.enemies.actors().empty(), "Expected a real spawned enemy");
  const auto id = f.enemies.actors()[0].actor;
  std::vector<ActorId> others;
  for (const auto &entry : f.enemies.actors())
    if (entry.actor != id)
      others.push_back(entry.actor);
  for (const auto other : others)
    f.enemies.erase(f.actors, other);
  return id;
}
void seed_behavior(Oracle &o, const Fixture &f, ActorId id) {
  o.seed(f, id);
  const auto &a = f.actors.actor(id);
  const unsigned offset = o.role(f, id) * 2;
  o.put(o.game + 130 - o.shift, f.leader.leader_x);
  o.put(o.game + 134 - o.shift, f.leader.leader_y);
  o.put((o.jp ? 0x305c : 0x2c5e) + offset, a.behavior.path_state);
  o.put((o.jp ? 0x1a7c : 0x1a86) + offset, a.behavior.moving_direction);
  o.put((o.jp ? 0x2f30 : 0x2b32) + offset, a.behavior.movement_speed);
  o.put((o.jp ? 0x3098 : 0x2c9a) + offset,
        f.actors.authored_npc_selector(o.role(f, id)));
  for (const auto &e : f.enemies.actors())
    if (e.actor == id)
      o.put((o.jp ? 0x3584 : 0x3186) + offset, e.weakness);
  const unsigned flags = o.jp ? 0x9eb3 : 0x9c08;
  const auto bits = f.actors.scene().event_flags;
  for (unsigned i = 0; i < bits.size(); ++i)
    o.bus->work_ram[flags + i] = bits[i];
  o.bus->work_ram[o.game + 174 - o.shift] = f.party.party_count;
  for (unsigned i = 0; i < 6; ++i) {
    o.bus->work_ram[o.game + 150 - o.shift + i] = f.party.display_order[i];
    o.bus->work_ram[o.game + 156 - o.shift + i] = f.party.controlled_order[i];
    o.bus->work_ram[(o.jp ? 0x9c7f : 0x99ce) + i * (o.jp ? 94 : 95) +
                    (o.jp ? 4 : 5)] = f.party.character(i + 1).level;
  }
  for (unsigned i = 0; i < 8; ++i)
    o.put((o.jp ? 0xe54 : 0xe5e) + i * 60 + offset, a.action().variables[i]);
  o.put(2, 0x45ab);
  o.put(0x24, 0x1234);
  o.put(0x26, 0x9876);
}
void helpers(Assets &assets) {
  const auto layout = enemy_sprite_catalog_layout(assets.a.version);
  const auto word = [&](unsigned at) {
    return unsigned(assets.a.image.at(at)) | unsigned(assets.a.image.at(at + 1))
                                                 << 8;
  };
  check(assets.enemies->battle_behaviors.size() == layout.battle_count,
        "Imported behavior rows lost battle identity alignment");
  for (unsigned i = 0; i < layout.battle_count; ++i)
    check(assets.enemies->battle_behaviors[i].run_away_flag ==
                  word(layout.battle_pointers + i * 8 + 4) &&
              assets.enemies->battle_behaviors[i].run_away_state ==
                  assets.a.image.at(layout.battle_pointers + i * 8 + 6),
          "Imported battle flee metadata differs");
  for (unsigned i = 0; i < layout.enemy_count; ++i)
    check(assets.enemies->enemies[i].level ==
              assets.a.image.at(layout.enemies + i * layout.enemy_stride +
                                layout.enemy_sprite_offset + 24),
          "Imported enemy level differs");
  auto owner = assets.fixture();
  auto &f = *owner;
  std::array<std::uint8_t, 128> flags{};
  f.actors.scene().event_flags = flags;
  const auto id = spawn(f, assets.encounter, assets.choice, 0);
  auto &actor = f.actors.actor(id);
  EnemyMovementData movement(assets.a.image, assets.a.version);
  GeneratedInputData angles(assets.a.image, assets.a.version);
  WorldEnemyBehavior behavior(movement, angles, f.actors, f.enemies, f.party,
                              f.leader);
  Oracle o(assets.a);
  actor.action().position = {0x12345678, 0x43218765, 0xdeadbeef};
  f.party.party_count = 1;
  f.party.display_order[0] = 1;
  f.party.controlled_order[0] = 0;
  for (unsigned path : {0u, 1u, 0x7fffu, 0x8000u, 0xffffu})
    for (unsigned intangible : {0u, 1u, 0xffffu})
      for (unsigned dx : {0u,   1u,   63u,  64u,     65u,     79u,     80u,
                          81u,  127u, 128u, 129u,    159u,    160u,    161u,
                          255u, 256u, 257u, 0x7fffu, 0x8000u, 0x8001u, 0xffffu})
        for (unsigned dy : {0u, 1u, 0x7fffu, 0x8000u, 0xffffu}) {
          actor.behavior.path_state = path;
          f.actors.appearance_scene().intangibility_ticks = intangible;
          f.leader.leader_x = std::uint16_t(0x1234 + dx);
          f.leader.leader_y = std::uint16_t(0x4321 + dy);
          seed_behavior(o, f, id);
          for (bool small : {false, true}) {
            context = assets.a.title + " distance " + std::to_string(path) +
                      "," + std::to_string(intangible) + "," +
                      std::to_string(dx) + "," + std::to_string(dy);
            const auto original = o.run(small ? (o.jp ? 0xc0c491 : 0xc0c4af)
                                              : (o.jp ? 0xc0c471 : 0xc0c48f));
            check(original == behavior.distance_band(id, small),
                  "Distance gate differs");
          }
        }
  actor.behavior.path_state = 0;
  for(unsigned dx:{0u,1u,2u,0x7fffu,0x8000u,0x8001u,0xfffeu,0xffffu})
    for(unsigned dy:{0u,1u,2u,0x7fffu,0x8000u,0x8001u,0xfffeu,0xffffu}) {
      f.leader.leader_x=std::uint16_t(0x1234+dx);f.leader.leader_y=std::uint16_t(0x4321+dy);
      seed_behavior(o,f,id);
      context=assets.a.title+" live leader direction "+std::to_string(dx)+","+std::to_string(dy);
      check(o.run(o.jp?0xc0c4d9:0xc0c4f7)==behavior.direction_from_leader(id),
            "Actual entity/leader direction differs");
    }
  f.actors.appearance_scene().intangibility_ticks = 0;
  for (unsigned count = 0; count <= 6; ++count)
    for (unsigned display : {0u, 1u, 4u, 5u, 6u, 255u}) {
      f.party.party_count = count;
      for (unsigned i = 0; i < 6; ++i) {
        f.party.display_order[i] = i % 2 ? display : i;
        f.party.controlled_order[i] = 5 - i;
        f.party.character(i + 1).level = std::uint8_t(19 + i * 47);
      }
      seed_behavior(o, f, id);
      check(o.run(o.jp ? 0xc05699 : 0xc0546b) == behavior.party_level_sum(),
            "Complete original level sum differs");
    }
  f.leader.leader_x = 611;
  f.leader.leader_y = 337;
  seed_behavior(o, f, id);
  check(o.run(o.jp ? 0xc448e1 : 0xc46b65) ==
                behavior.capture_leader_target(id) &&
            o.get(o.jp ? 0xfbc : 0xfc6) == actor.action().variables[6] &&
            o.get(o.jp ? 0xff8 : 0x1002) == actor.action().variables[7],
        "Leader target capture differs");
  for (unsigned theta = 0; theta < 65536; theta += 127)
    for (unsigned speed : {0u, 1u, 255u, 256u, 257u, 32767u, 65535u}) {
      actor.behavior.movement_speed = speed;
      actor.action().velocity[2] = 0x87654321;
      seed_behavior(o, f, id);
      check(o.run(o.jp ? 0xc44dc8 : 0xc47044, theta) ==
                behavior.set_velocity(id, theta),
            "Velocity return differs");
      for (unsigned axis = 0; axis < 3; ++axis)
        check(actor.action().velocity[axis] ==
                  (o.get(o.velocity + axis * 60) << 16 |
                   o.get(o.velocity_fraction + axis * 60)),
              "Velocity fraction differs");
      check(o.run(o.jp ? 0xc44886 : 0xc46b0a, theta) ==
                    behavior.set_moving_direction(id, theta) &&
                o.get(o.jp ? 0x1a7c : 0x1a86) ==
                    actor.behavior.moving_direction,
            "Moving direction differs");
    }
  for (unsigned speed : {0u, 1u, 2u, 255u, 256u, 512u, 32768u, 65535u})
    for (unsigned distance : {0u, 1u, 8u, 255u, 256u, 32768u, 65535u}) {
      actor.behavior.movement_speed = speed;
      seed_behavior(o, f, id);
      o.put(o.jp ? 0x1a3c : 0x1a46, 0);
      const auto result = o.run(o.jp ? 0xc0cbb5 : 0xc0cbd3, distance);
      check(result == behavior.distance_sleep(id, distance) &&
                o.get(o.jp ? 0x1368 : 0x1372) == result,
            "Distance sleep helper differs");
    }
  check(!f.actors.ticks() && o.get(2) == 0x45ab && o.get(0x24) == 0x1234 &&
            o.get(0x26) == 0x9876,
        "Decision helpers changed time or RNG");
  // Use real enemy-group/level metadata and real spawn weakness for every
  // branch, never replace the authoritative identity collection with a test
  // map.
  for (unsigned weakness : {0u, 127u, 128u, 191u, 192u, 255u}) {
    auto ptr = assets.fixture();
    auto &g = *ptr;
    const auto who = spawn(g, assets.encounter, assets.choice, weakness);
    g.actors.scene().event_flags = flags;
    WorldEnemyBehavior b(movement, angles, g.actors, g.enemies, g.party,
                         g.leader);
    const unsigned level =
        assets.enemies->enemies[*g.enemies.enemy_type(who)].level;
    for (unsigned factor : {6u, 8u, 10u})
      for (int edge : {-1, 0, 1}) {
        const unsigned total =
            unsigned(std::max(0, int(level * factor) + edge));
        if (total > 1530)
          continue;
        g.party.party_count = 6;
        unsigned left = total;
        for (unsigned i = 0; i < 6; ++i) {
          g.party.display_order[i] = 1;
          g.party.controlled_order[i] = i;
          g.party.character(i + 1).level = std::min(left, 255u);
          left -= g.party.character(i + 1).level;
        }
        for (unsigned flag_value : {0u, 255u}) {
          flags.fill(flag_value);
          auto &a = g.actors.actor(who);
          a.action().position = {384u << 16, 384u << 16, 0};
          a.action().variables[6] = 457;
          a.action().variables[7] = 313;
          seed_behavior(o, g, who);
          context = assets.a.title + " flee " + std::to_string(weakness) + "," +
                    std::to_string(total) + "," + std::to_string(flag_value);
          check(o.run(o.jp ? 0xc0c506 : 0xc0c524) ==
                    unsigned(b.should_flee(who)),
                "Flee predicate differs");
          check(o.run(o.jp ? 0xc0c60d : 0xc0c62b) == b.chase_angle(who),
                "Complete chase/flee angle differs");
        }
      }
  }
}
void imported_flags(Assets &assets) {
  EnemyMovementData movement(assets.a.image, assets.a.version);
  GeneratedInputData angles(assets.a.image, assets.a.version);
  std::array<std::uint8_t, 128> flags{};
  Oracle o(assets.a);
  unsigned rows = 0;
  for (unsigned battle = 0; battle < assets.enemies->battles.size() && rows < 8;
       ++battle) {
    const auto &group = assets.enemies->battles[battle];
    const auto &rule = assets.enemies->battle_behaviors[battle];
    if (!rule.run_away_flag || group.size() != 1 || !group[0].count ||
        group[0].count >= 20 || !assets.enemies->enemies[group[0].enemy].sprite)
      continue;
    auto content = std::make_shared<EnemySpawnData>(*assets.enemies);
    const auto selected = content->encounters.size();
    content->encounters.push_back(
        {0, {100, 0}, std::vector<unsigned>(8, battle)});
    Fixture g(assets.a.version, assets.a.image, assets.sprites, assets.scripts,
              content,
              WorldCollision(assets.a.image,
                             world_collision_layout(assets.a.version)),
              import_world_swirl_data(assets.a.image));
    const auto who = spawn(g, selected, 0, 255);
    g.actors.scene().event_flags = flags;
    g.party.party_count = 0;
    WorldEnemyBehavior b(movement, angles, g.actors, g.enemies, g.party,
                         g.leader);
    for (unsigned value : {0u, 255u}) {
      flags.fill(value);
      seed_behavior(o, g, who);
      context = assets.a.title +
                " actual flee-flag row=" + std::to_string(battle) +
                ",flags=" + std::to_string(value);
      check(o.run(o.jp ? 0xc0c506 : 0xc0c524) == unsigned(b.should_flee(who)),
            "Original event-flag flee branch differs");
    }
    for (unsigned theta :
         {0u, 0xfffu, 0x1000u, 0x1fffu, 0xefffu, 0xf000u, 0xffffu}) {
      seed_behavior(o, g, who);
      check(o.run(o.jp ? 0xc44886 : 0xc46b0a, theta) ==
                b.set_moving_direction(who, theta),
            "Moving direction boundary differs");
    }
    ++rows;
  }
  check(rows == 8, "Insufficient imported nonzero run-away flags tested");
}
unsigned imported_behavior_tasks(const eb::GameAssets &original) {
  unsigned passes = 0;
  for (unsigned script : {19u, 24u, 28u}) {
    Assets source(original, script);
    for (unsigned mode = 0; mode < 5; ++mode) {
      auto assets = source.a;
      const bool jp = assets.version == eb::GameVersion::JP;
      const unsigned entry = source.scripts->entry(script);
      // All bytes of the actual selected enemy script and its shared tasks
      // stay unchanged. Other directory entries point to an idle fixture.
      assets.image[0x38010] = 0x09;
      const unsigned directory = jp ? 0x4002f : 0x400d4;
      for (unsigned i = 0; i < (jp ? 890 : 895); ++i) {
        const unsigned at = i == script ? entry + 0xc00000 : 0xc38010;
        for (unsigned j = 0; j < 3; ++j)
          assets.image[directory + i * 3 + j] = at >> (j * 8);
      }
      Fixture f(
          assets.version, assets.image, source.sprites,
          import_action_scripts(assets.image, assets.version), source.enemies,
          WorldCollision(assets.image, world_collision_layout(assets.version)),
          import_world_swirl_data(assets.image),
          import_appearance_data(assets.image, assets.version));
      const auto id = spawn(f, source.encounter, source.choice, 0);
      auto &actor = f.actors.actor(id);
      check(actor.authored_role() == 0,
            "Imported behavior task fixture did not own role0");
      actor.action().position = {std::uint32_t(mode == 3   ? 400
                                               : mode == 0 ? 560
                                               : mode == 1 && script == 19
                                                   ? 480
                                                   : 432)
                                     << 16,
                                 384u << 16, 0};
      actor.action().velocity = {};
      actor.behavior.direction = 6;
      actor.behavior.moving_direction = 6;
      actor.behavior.physics = ActorPhysics::Planar;
      f.leader.leader_x = f.leader.leader_y = 384;
      WorldActorMovement movement(f.collision, f.area);
      f.actors.bind_movement(movement);
      EnemyMovementData speed(assets.image, assets.version);
      GeneratedInputData angles(assets.image, assets.version);
      WorldEnemyMovement follow(speed, angles, f.actors, f.paths, f.collision);
      WorldEnemyBehavior behavior(speed, angles, f.actors, f.enemies, f.party,
                                  f.leader);
      if (mode == 4) {
        std::array<std::uint8_t, 16> cells;
        cells.fill(0x40);
        f.terrain.pattern(cells);
        f.area = f.terrain.area();
      }
      std::array<std::uint8_t, 128> flags{};
      f.actors.scene().event_flags = flags;
      f.party.party_count = 6;
      for (unsigned i = 0; i < 6; ++i) {
        f.party.display_order[i] = 1;
        f.party.controlled_order[i] = i;
        f.party.character(i + 1).level = mode == 2 ? 255 : 0;
      }
      Oracle o(assets);
      seed_behavior(o, f, id);
      const unsigned shift = jp ? 10 : 0, task = 0xada - shift,
                     next_task = 0x125a - shift, cursor = 0x13fe - shift,
                     bank = 0x148a - shift, sleep = 0x1372 - shift,
                     stack = 0x12e6 - shift, temporary = 0x1516 - shift,
                     tick_low = 0x107a - shift, physics = 0x121e - shift,
                     projection = 0x11a6 - shift, animation = 0x10f2 - shift,
                     vars = 0xe5e - shift;
      o.put(0xa50 - shift, 0);
      o.put(0xa9e - shift, 0xffff);
      o.put(task, 0);
      o.put(next_task, 0xffff);
      o.put(cursor, entry);
      o.put(bank, (entry >> 16) + 0xc0);
      o.put(sleep, 0);
      o.put(stack, 0);
      o.put(temporary, 0);
      o.put(0xa54 - shift, 2);
      o.put(next_task + 2, 4);
      o.put(next_task + 4, 0xffff);
      const unsigned none = jp ? 0xc0941a : 0xc0943b;
      o.put(tick_low, none);
      o.put(o.tick, none >> 16);
      o.put(physics, jp ? 0x9fa7 : 0x9fc8);
      o.put(projection, jp ? 0xa002 : 0xa023);
      // Omit final display-list publication only; both real actor traversals,
      // source sprite refresh, collision helpers and contact effects execute.
      o.put(0xa5e - shift, jp ? 0xa018 : 0xa039);
      o.put(animation, actor.action().animation);
      o.put(jp ? 0x305c : 0x2c5e, actor.behavior.path_state);
      o.put(jp ? 0x2fa8 : 0x2baa, actor.behavior.surface_flags);
      o.put(jp ? 0x1a7c : 0x1a86, actor.behavior.moving_direction);
      o.put(jp ? 0x2f30 : 0x2b32, actor.behavior.movement_speed);
      for (unsigned v = 0; v < 8; ++v)
        o.put(vars + v * 60, actor.action().variables[v]);
      for (unsigned role = 0; role < 30; ++role) {
        const auto present = f.actors.actor_for_role(role);
        o.put(0xa62 - shift + role * 2, present ? 0 : 0xffff);
        o.put((jp ? 0x3098 : 0x2c9a) + role * 2,
              f.actors.authored_npc_selector(role));
        if (!present)
          continue;
        const auto &a = f.actors.actor(*present);
        const auto &box = *a.hitbox;
        o.put((jp ? 0x3728 : 0x332a) + role * 2, box.enabled);
        o.put((jp ? 0x3764 : 0x3366) + role * 2, box.vertical.half_width);
        o.put((jp ? 0x37a0 : 0x33a2) + role * 2, box.vertical.height);
        o.put((jp ? 0x37dc : 0x33de) + role * 2, box.lateral.half_width);
        o.put((jp ? 0x1a40 : 0x1a4a) + role * 2, box.lateral.height);
      }
      const auto layout = sprite_catalog_layout(assets.version);
      const auto read = [&](unsigned at) {
        return unsigned(assets.image[at]) | unsigned(assets.image[at + 1]) << 8;
      };
      const unsigned sprite = actor.appearance.sprite();
      const unsigned base = (read(layout.groups + sprite * 4) |
                             read(layout.groups + sprite * 4 + 2) << 16) -
                            0xc00000;
      const unsigned low = jp ? 0x2dc8 : 0x29ca, high = jp ? 0x2e04 : 0x2a06,
                     graphics_bank = jp ? 0x2e40 : 0x2a42,
                     width = jp ? 0x2e7c : 0x2a7e, rows = jp ? 0x2eb8 : 0x2aba,
                     vram = jp ? 0x2d8c : 0x298e,
                     displayed = jp ? 0x1ab8 : 0x341a,
                     fingerprint = jp ? 0x1af4 : 0x3456;
      o.put(low, base + 9);
      o.put(high, (base + 9 + 0xc00000) >> 16);
      o.put(graphics_bank, assets.image[base + 8]);
      o.put(width, assets.image[base + 1] * 2);
      o.put(rows, assets.image[base]);
      o.put(vram, 0x4000);
      o.put(displayed, 0xffff);
      o.put(fingerprint, actor.appearance.fingerprint());
      o.put(o.game + 130 - o.shift, 384);
      o.put(o.game + 134 - o.shift, 384);
      unsigned contacts = 0, obstacles = 0, steering = 0,
               sleeps = 0;
      const auto starting_position = actor.action().position;
      for (unsigned frame = 0; frame < (mode == 2 ? 48u : 160u); ++frame) {
        context = assets.title + " imported EVENT_" + std::to_string(script) +
                  ",mode=" + std::to_string(mode) +
                  " frame=" + std::to_string(frame);
        o.run(jp ? 0xc09445 : 0xc09466);
        while (f.actors.advance_tick() != WorldTickResult::Complete) {
          check(bool(f.actors.request()),
                "Imported behavior task requested unexpected camera work");
          const auto request = *f.actors.request();
          switch (request.binding.operation) {
          case NativeAction::EnemyDistanceBand:
            f.actors.respond(behavior.distance_band(request.actor));
            break;
          case NativeAction::EnemyShortDistanceBand:
            f.actors.respond(behavior.distance_band(request.actor, true));
            break;
          case NativeAction::CaptureEnemyLeaderTarget:
            f.actors.respond(behavior.capture_leader_target(request.actor));
            break;
          case NativeAction::EnemyChaseAngle:
            f.actors.respond(behavior.chase_angle(request.actor));
            break;
          case NativeAction::EnemyAngleVelocity:
            f.actors.respond(
                behavior.set_velocity(request.actor, request.action.temporary));
            ++steering;
            break;
          case NativeAction::EnemyAngleDirection:
            f.actors.respond(behavior.set_moving_direction(
                request.actor, request.action.temporary));
            break;
          case NativeAction::EnemyDistanceSleep: {
            const auto sleep =
                behavior.distance_sleep(request.actor, request.binding.operand);
            f.actors.respond(sleep, 2, sleep);
            ++sleeps;
            break;
          }
          case NativeAction::RunEnemyPath:
            follow.tick(request.actor);
            f.actors.respond();
            break;
          case NativeAction::EnemyDirectionalObstacles:
            f.actors.respond(
                f.contact->prepare_directional_obstacles(request.actor));
            ++obstacles;
            break;
          case NativeAction::EnemyVerticalObstacles:
            f.actors.respond(
                f.contact->prepare_vertical_obstacles(request.actor));
            ++obstacles;
            break;
          case NativeAction::EnemyContact:
            f.actors.respond(f.contact->contact(request.actor));
            ++contacts;
            break;
          case NativeAction::EnemyContactActive:
            f.actors.respond(f.contact->active());
            break;
          case NativeAction::WithinLoadingArea: {
            const auto &a = f.actors.actor(request.actor);
            f.actors.respond(npc_within_retention_area(
                                 a.action().position[0] >> 16,
                                 a.action().position[1] >> 16, 384, 384, 0)
                                 ? 0xffff
                                 : 0);
            break;
          }
          default:
            throw std::runtime_error(
                "Imported behavior task reached unsupported real service " +
                std::to_string(unsigned(request.binding.operation)) + ": " +
                context);
          }
        }
        o.compare(f);
        check(f.actors.ticks() == frame + 1,
              "Imported behavior task advanced extra actor frames");
        check(o.get(2) == 0x45ab && o.get(0x24) == 0x1234 &&
                  o.get(0x26) == 0x9876,
              "Enemy task changed unconsumed source input/frame/RNG state");
        for (unsigned axis = 0; axis < 3; ++axis) {
          check(actor.action().position[axis] ==
                    (o.get(o.position + axis * 60) << 16 |
                     o.get(o.fraction + axis * 60)),
                "Imported behavior task position differs");
          check(actor.action().velocity[axis] ==
                    (o.get(o.velocity + axis * 60) << 16 |
                     o.get(o.velocity_fraction + axis * 60)),
                "Imported behavior task velocity differs");
        }
        const auto tasks = actor.tasks();
        unsigned source_task = o.get(task), index = 0;
        while (source_task != 0xffff) {
          check(index < tasks.size(),
                "Original behavior task list longer than native");
          const auto &t = tasks[index++];
          check(t.cursor ==
                        ((o.get(bank + source_task) & 255) - 0xc0) * 65536u +
                            o.get(cursor + source_task) &&
                    t.sleep_frames == o.get(sleep + source_task) &&
                    t.stack_depth == o.get(stack + source_task) / 2,
                "Imported behavior task cursor/sleep/stack differs");
          source_task = o.get(next_task + source_task);
        }
        check(index == tasks.size(),
              "Native behavior task list longer than original");
        check(actor.action().animation == o.get(animation),
              "Imported behavior animation differs");
        for (unsigned v = 0; v < 8; ++v)
          check(actor.action().variables[v] == o.get(vars + v * 60),
                "Imported behavior variable differs");
        if (frame) {
          check(actor.appearance.fingerprint() == o.get(fingerprint),
                "Imported behavior artwork fingerprint differs");
          const auto selected = *actor.appearance.displayed();
          const auto image =
              f.sprites->acquire(selected.sprite, selected.pose,
                                 selected.surface, selected.format);
          unsigned destination = o.get(vram);
          const unsigned byte_width = o.get(width), tile_rows = o.get(rows),
                         padding = (tile_rows & 1) * 8;
          bool equal = true;
          for (unsigned row = 0; row < tile_rows; ++row) {
            for (unsigned yy = 0; yy < 8; ++yy)
              for (unsigned xx = 0; xx < byte_width / 4; ++xx) {
                const unsigned at = destination * 2 + (xx / 8) * 32 + yy * 2;
                unsigned color = 0;
                for (unsigned bit = 0; bit < 4; ++bit)
                  color |=
                      ((o.bus->video_ram[(at + (bit / 2) * 16 + (bit & 1)) &
                                         65535] >>
                        (7 - (xx & 7))) &
                       1)
                      << bit;
                equal &=
                    color == (*image->canvas)[(padding + row * 8 + yy) *
                                                  image->layout->canvas_width +
                                              xx];
              }
            if (!(destination & 0x100))
              destination += 0x100;
            else {
              const unsigned next =
                  destination + ((byte_width + 32) & 0xffc0) / 2;
              destination = (next ^ destination) & 0x100 ? next : next - 0x100;
            }
          }
          check(equal, "Imported behavior artwork pixels differ");
        }
        ++passes;
      }
      check(contacts > 0 && obstacles == contacts,
            "Imported task did not execute its real obstacle/contact sequence");
      check(mode != 3 ||
                (f.maintenance.enemy_touched == 1 && f.sounds.size() == 1),
            "Actual roaming/contact did not admit the encounter");
      check(mode == 0 || steering > 0,
            "Intended enemy movement branch never ran");
      check(mode != 2 || actor.action().position[0] > starting_position[0],
            "Flee branch did not move away from leader");
      check(mode != 4 || actor.action().position == starting_position,
            "Blocked enemy integrated through terrain");
      check(script == 28 || mode == 0 || sleeps > 0,
            "Distance-based task sleep never ran");
      f.actors.clear_movement(movement);
    }
  }
  return passes;
}
} // namespace
int main(int argc, char **argv) {
  try {
    if (argc < 2)
      throw std::invalid_argument("Provide US/JP packs");
    for (int i = 1; i < argc; ++i) {
      auto a = eb::load_game_assets(argv[i], eb::asset_profiles());
      const auto before = checks, start = calls;
      Assets source(a);
      helpers(source);
      imported_flags(source);
      const auto frames = imported_behavior_tasks(a);
      std::cout << a.title << ": " << calls - start << " whole original calls, "
                << frames << " unchanged enemy task passes, " << checks - before
                << " checks\n";
    }
    std::cout << "Source instructions: " << instructions << '\n';
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
