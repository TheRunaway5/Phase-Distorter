// Whole original US/JP contact, predicates, palette and obstacle routines.
// CPU execution is a test oracle only. Source fixtures start from identical
// owned enemy/actor states; no helper or audio-driver command is substituted.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/battle/psi_animation.hpp"
#include "eb/native/world_activation.hpp"
#include "eb/native/world_actor_movement.hpp"
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
  unsigned run(unsigned address) {
    ++calls;
    cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e;
    cpu.direct_page = 0x1e00;
    cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.accumulator = 0xa5a5;
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
  explicit Assets(const eb::GameAssets &assets)
      : a(assets), enemies(std::make_shared<EnemySpawnData>(
                       import_enemy_spawn_data(a.image, a.version))),
        sprites(std::make_shared<SpriteResources>(
            a.image, sprite_catalog_layout(a.version))),
        scripts(import_action_scripts(a.image, a.version)) {
    for (unsigned e = 1; e < enemies->encounters.size() && !encounter; ++e) {
      const auto &record = enemies->encounters[e];
      if (!record.chance[0])
        continue;
      for (unsigned i = 0; i < 8; ++i) {
        const auto &group = enemies->battles[record.choices[i]];
        if (group.size() == 1 && group[0].count == 2 &&
            group[0].enemy != enemies->butterfly_enemy) {
          encounter = e;
          choice = i;
          break;
        }
      }
    }
    check(encounter != 0, "No actual two-enemy group available");
  }
  std::unique_ptr<Fixture> fixture() {
    return std::make_unique<Fixture>(
        a.version, a.image, sprites, scripts, enemies,
        WorldCollision(a.image, world_collision_layout(a.version)),
        import_world_swirl_data(a.image));
  }
};
void contact_cases(Assets &assets) {
  for (unsigned mode = 0; mode < 40; ++mode) {
    auto ptr = assets.fixture();
    auto &f = *ptr;
    const auto ids = f.spawn(assets.encounter, assets.choice);
    const auto id = ids[0];
    const auto type = std::uint16_t(*f.enemies.enemy_type(id));
    f.leader.collision_actor = id;
    f.state.roster = {201, 202};
    f.control.automatic_mode = 0x102;
    f.control.direction_interval_ticks = 0xabcd;
    f.control.direction_interval_previous_mode = 0x1234;
    if (mode == 1)
      f.leader.collision_actor.reset();
    if (mode == 2 || mode == 3) {
      f.leader.collision_actor.reset();
      f.actors.actor(id).behavior.collision_object = mode == 2 ? 23 : 25;
    }
    if (mode >= 4 && mode <= 9) {
      switch (mode) {
      case 4:
        f.control.encounter.mode = 1;
        break;
      case 5:
        f.navigation.using_door = 1;
        break;
      case 6:
        f.control.automatic_mode = 2;
        break;
      case 7:
        f.leader.movement_flags = 2;
        break;
      case 8:
        f.leader.walking_style = 12;
        break;
      case 9:
        f.actors.appearance_scene().intangibility_ticks = 1;
        break;
      }
    }
    if (mode >= 10) {
      f.state.touched = mode < 18 ? id : ids[1];
      f.maintenance.enemy_touched = mode == 10 ? 1 : 0;
      f.actors.appearance_scene().battle_swirl_ticks = mode == 10 ? 0 : 120;
      f.leader.collision_actor.reset();
      f.state.remaining = {WorldEncounterGroup{type, 1},
                           {type, 1},
                           {std::uint16_t(type + 1), 0},
                           {0, 0}};
      if (mode >= 11 && mode <= 17) {
        switch (mode) {
        case 11:
          f.control.automatic_mode = 2;
          break;
        case 12:
          f.leader.movement_flags = 2;
          break;
        case 13:
          f.leader.walking_style = 12;
          break;
        case 14:
          f.actors.appearance_scene().intangibility_ticks = 1;
          break;
        case 15:
          f.control.encounter.mode = 1;
          break;
        case 16:
          f.navigation.using_door = 1;
          break;
        case 17:
          f.leader.collision_actor = id;
          break;
        }
      }
      if (mode >= 18) {
        f.swirl.update_in = (mode & 1) ? 1 : 0;
        f.swirl.padding = std::uint8_t((mode % 3) + 4);
        if (mode >= 22 && mode < 26) {
          f.state.remaining[2].count = 0xffff;
          f.state.remaining[3].count = 1;
        }
        if (mode >= 26 && mode < 30) {
          f.state.remaining[0].enemy = type + 1;
          f.state.remaining[1].enemy = type + 2;
        }
        if (mode >= 30) {
          for (unsigned i = 0; i < ids.size(); ++i) {
            auto &a = f.actors.actor(ids[i]);
            a.behavior.path_state = 0xffff;
            a.action().position = {std::uint32_t(416 + i * 24) << 16,
                                   384u << 16, 0};
          }
          check(f.paths.find_to_party() > 0 && f.paths.remaining(id) > 0,
                "Contact path fixture has no original producer route");
          if (mode & 1)
            f.actors.actor(id).behavior.collision_object = 25;
        }
      }
    }
    context = assets.a.title + " contact case=" + std::to_string(mode);
    Oracle o(assets.a);
    o.seed(f, id);
    const auto expected = o.run(o.jp ? 0xc0d578 : 0xc0d5b0);
    check(expected == unsigned(f.contact->contact(id)),
          "Contact/arrival return differs");
    o.compare(f);
    check(f.actors.ticks() == 0, "Contact introduced an actor frame");
  }
}
void predicates_palette(Assets &assets) {
  auto ptr = assets.fixture();
  auto &f = *ptr;
  const auto id = f.spawn(assets.encounter, assets.choice)[0];
  Oracle o(assets.a);
  for (unsigned flags : {0u, 1u, 2u, 3u, 0x100u, 0xffffu})
    for (bool leader : {false, true})
      for (int object : {-32768, -1, 0, 22, 23, 24, 29, 30, 0x7fff}) {
        f.leader.movement_flags = flags;
        f.leader.collision_actor =
            leader ? std::optional<ActorId>(id) : std::nullopt;
        f.actors.actor(id).behavior.collision_object = object;
        o.seed(f, id);
        context = assets.a.title + " contact predicate " +
                  std::to_string(flags) + "," + std::to_string(leader) + "," +
                  std::to_string(object);
        check(o.run(o.jp ? 0xc0d126 : 0xc0d15c) ==
                  (f.contact->collided(id) ? 0xffff : 0),
              "Original contact predicate differs");
      }
  for (unsigned swirl : {0u, 1u, 0xffffu})
    for (unsigned touched : {0u, 1u, 0xffffu}) {
      f.actors.appearance_scene().battle_swirl_ticks = swirl;
      f.maintenance.enemy_touched = touched;
      o.seed(f, id);
      check(o.run(o.jp ? 0xc0d563 : 0xc0d59b) == unsigned(f.contact->active()),
            "Original touched/swirl predicate differs");
    }
  for (unsigned base = 0; base < 32768; base += 128) {
    for (unsigned i = 0; i < 256; ++i) {
      const auto value = (base + i) & 32767;
      f.colors[i] = {std::uint8_t(value & 31), std::uint8_t((value >> 5) & 31),
                     std::uint8_t(value >> 10)};
    }
    o.seed(f, id);
    context = assets.a.title + " palette base=" + std::to_string(base);
    check(o.run(o.jp ? 0xc0d4a6 : 0xc0d4de) == 24,
          "Palette source incidental return is not24");
    f.contact->prepare_palette();
    o.compare(f);
  }
}
void raw_palette_transport(Assets &assets) {
  battle::PaletteBankState palette;
  battle::PsiScratch scratch;
  auto fixture = assets.fixture();
  auto &f = *fixture;
  Oracle source(assets.a);
  f.contact->bind_palette_transport(palette, scratch);
  for (unsigned pattern = 0; pattern < 4; ++pattern) {
    context = assets.a.title + " raw contact palette=" + std::to_string(pattern);
    for (unsigned i = 0; i < scratch.bytes.size(); ++i) {
      scratch.bytes[i] = std::uint8_t(i * 29 + pattern * 71);
      source.bus->work_ram[0x10000 + i] = scratch.bytes[i];
    }
    for (unsigned i = 0; i < 256; ++i) {
      const auto word = std::uint16_t(i * 271 + pattern * 0x8421);
      palette.staged_color(i) = word;
      source.put(0x200 + i * 2, word);
      palette.displayed[i / 16][i % 16] = std::uint16_t(i ^ 0x1234);
    }
    const auto shown = palette.displayed;
    palette.upload_mode = 16;
    source.bus->work_ram[0x30] = 16;
    // The semantic decoded projection is deliberately stale: raw transport is
    // the source palette owner when bound, including upper-bank bit15.
    f.colors.fill({31, 0, 31});
    check(source.run(source.jp ? 0xc0d4a6 : 0xc0d4de) == 24,
          "Raw contact palette helper did not return");
    f.contact->prepare_palette();
    for (unsigned i = 0; i < 256; ++i)
      check(source.get(0x200 + i * 2) == palette.staged_color(i),
            "Raw contact staged word differs");
    for (unsigned i = 0; i < scratch.bytes.size(); ++i)
      check(source.bus->work_ram[0x10000 + i] == scratch.bytes[i],
            "Raw contact backup or retained scratch differs");
    check(palette.displayed == shown && palette.upload_mode == 24 && source.bus->work_ram[0x30] == 24,
          "Contact published colors before the actual boundary");
  }
}
void imported_special_cases(Assets &assets) {
  {
    auto ptr = assets.fixture();
    auto &f = *ptr;
    for (unsigned i = 0; i < 15; ++i)
      check(
          f.spawn(0, 0, 0, 0, false).empty(),
          "Empty spawn unexpectedly produced an actor before butterfly phase");
    unsigned sector = 0;
    while (sector < f.enemy_data->sectors.size() &&
           !f.enemy_data->sectors[sector].butterfly_chance)
      ++sector;
    check(sector < f.enemy_data->sectors.size(),
          "Imported content lacks an eligible butterfly sector");
    const auto id = f.spawn(0, 0, (sector % 32) * 4, (sector / 32) * 2)[0];
    check(f.enemies.enemy_type(id) == f.enemy_data->butterfly_enemy,
          "Actual sixteenth-cell spawn did not create a butterfly");
    f.leader.collision_actor = id;
    Oracle o(assets.a);
    o.seed(f, id);
    context = assets.a.title + " imported butterfly contact";
    check(o.run(o.jp ? 0xc0d578 : 0xc0d5b0) == unsigned(f.contact->contact(id)),
          "Actual butterfly contact return differs");
    o.compare(f);
    check(!f.maintenance.enemy_touched && !f.state.touched && f.sounds.empty(),
          "Actual butterfly initialized a combat encounter");
  }
  std::set<unsigned> masks;
  for (unsigned e = 1; e < assets.enemies->encounters.size(); ++e) {
    const auto &record = assets.enemies->encounters[e];
    if (!record.chance[0])
      continue;
    for (unsigned choice = 0; choice < 8; ++choice) {
      const auto &group = assets.enemies->battles[record.choices[choice]];
      unsigned count = 0;
      for (const auto member : group)
        count += member.count;
      if (!count || count > 4)
        continue;
      bool wanted = false;
      for (const auto member : group)
        if (member.count &&
            !masks.contains(assets.enemies->enemies[member.enemy].terrain_mask))
          wanted = true;
      if (!wanted)
        continue;
      auto ptr = assets.fixture();
      auto &f = *ptr;
      const auto ids = f.spawn(e, choice);
      for (const auto id : ids) {
        const auto type = *f.enemies.enemy_type(id);
        const auto mask = f.enemy_data->enemies[type].terrain_mask;
        if (!masks.insert(mask).second)
          continue;
        auto &actor = f.actors.actor(id);
        actor.action().position = {384u << 16, 384u << 16, 0};
        actor.action().velocity = {1u << 16, 1u << 16, 0};
        for (const bool vertical : {false, true}) {
          actor.behavior.obstacle_flags = 0x1234;
          Oracle o(assets.a);
          o.seed(f, id);
          context =
              assets.a.title + " imported terrain mask=" + std::to_string(mask);
          const auto expected = o.run(vertical ? (o.jp ? 0xc060fc : 0xc05ece)
                                               : (o.jp ? 0xc060b0 : 0xc05e82));
          const auto result =
              vertical ? f.contact->prepare_vertical_obstacles(id)
                       : f.contact->prepare_directional_obstacles(id);
          check(expected == result && result == ((mask & 4) ? 0 : 0x80) &&
                    o.get(o.obstacle + o.role(f, id) * 2) ==
                        actor.behavior.obstacle_flags,
                "Original imported terrain permission differs");
        }
      }
    }
  }
  // All shipped definitions permit surface class zero. Both callers discard
  // terrain bits2/3 before C05DE7, so its rejecting branch is not reachable
  // here in either pack. Custom content rejection is a separate native unit.
  check(!masks.empty(), "No imported terrain masks exercised");
  for (const auto &enemy : assets.enemies->enemies)
    check((enemy.terrain_mask & 4) != 0,
          "Imported terrain rejection coverage needs extending");
}
unsigned imported_contact_tasks(Assets &source) {
  unsigned passes = 0;
  for (bool vertical : {false, true})
    for (bool overlap : {false, true}) {
      auto assets = source.a;
      const bool jp = assets.version == eb::GameVersion::JP;
      const unsigned group =
          source.enemies->encounters[source.encounter].choices[source.choice];
      const unsigned enemy_type = source.enemies->battles[group][0].enemy;
      const unsigned script = source.enemies->enemies[enemy_type].script;
      const unsigned setup = (jp ? 0xa416 : 0xa426) + (vertical ? 7 : 0);
      // The caller/idle bytes and directory roots are fixture content. Every
      // byte in C3A426/C3A42D, C3A401, C3A20E and C3A434/C3A448 stays original.
      assets.image[0x38000] = 0x1a;
      assets.image[0x38001] = setup;
      assets.image[0x38002] = setup >> 8;
      assets.image[0x38003] = 0x09;
      assets.image[0x38010] = 0x09;
      const unsigned directory = jp ? 0x4002f : 0x400d4;
      for (unsigned i = 0; i < (jp ? 890 : 895); ++i) {
        const unsigned entry = i == script ? 0xc38000 : 0xc38010;
        for (unsigned j = 0; j < 3; ++j)
          assets.image[directory + i * 3 + j] = entry >> (j * 8);
      }
      Fixture f(
          assets.version, assets.image, source.sprites,
          import_action_scripts(assets.image, assets.version), source.enemies,
          WorldCollision(assets.image, world_collision_layout(assets.version)),
          import_world_swirl_data(assets.image),
          import_appearance_data(assets.image, assets.version));
      const auto ids = f.spawn(source.encounter, source.choice);
      const auto id = ids[0];
      for (unsigned i = 1; i < ids.size(); ++i)
        f.enemies.erase(f.actors, ids[i]);
      auto &actor = f.actors.actor(id);
      check(actor.authored_role() == 0,
            "Imported contact task fixture did not own role0");
      actor.action().position = {std::uint32_t(overlap ? 384 : 416) << 16,
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
      Oracle o(assets);
      o.seed(f, id);
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
      o.put(cursor, 0x8000);
      o.put(bank, 0xc3);
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
      unsigned contacts = 0, obstacles = 0;
      [[maybe_unused]] unsigned predicates = 0;
      for (unsigned frame = 0; frame < 32; ++frame) {
        context = assets.title + " imported contact " +
                  std::to_string(vertical) + "," + std::to_string(overlap) +
                  " frame=" + std::to_string(frame);
        o.run(jp ? 0xc09445 : 0xc09466);
        while (f.actors.advance_tick() != WorldTickResult::Complete) {
          check(bool(f.actors.request()),
                "Imported contact task requested unexpected camera work");
          const auto request = *f.actors.request();
          switch (request.binding.operation) {
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
            ++predicates;
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
                "Imported contact task reached unsupported real service " +
                std::to_string(unsigned(request.binding.operation)) + ": " +
                context);
          }
        }
        o.compare(f);
        check(f.actors.ticks() == frame + 1,
              "Imported contact task advanced extra actor frames");
        for (unsigned axis = 0; axis < 3; ++axis) {
          check(actor.action().position[axis] ==
                    (o.get(o.position + axis * 60) << 16 |
                     o.get(o.fraction + axis * 60)),
                "Imported contact task position differs");
          check(actor.action().velocity[axis] ==
                    (o.get(o.velocity + axis * 60) << 16 |
                     o.get(o.velocity_fraction + axis * 60)),
                "Imported contact task velocity differs");
        }
        const auto tasks = actor.tasks();
        unsigned source_task = o.get(task), index = 0;
        while (source_task != 0xffff) {
          check(index < tasks.size(),
                "Original contact task list longer than native");
          const auto &t = tasks[index++];
          check(t.cursor ==
                        ((o.get(bank + source_task) & 255) - 0xc0) * 65536u +
                            o.get(cursor + source_task) &&
                    t.sleep_frames == o.get(sleep + source_task) &&
                    t.stack_depth == o.get(stack + source_task) / 2,
                "Imported contact task cursor/sleep/stack differs");
          source_task = o.get(next_task + source_task);
        }
        check(index == tasks.size(),
              "Native contact task list longer than original");
        check(actor.action().animation == o.get(animation),
              "Imported contact animation differs");
        for (unsigned v = 0; v < 8; ++v)
          check(actor.action().variables[v] == o.get(vars + v * 60),
                "Imported contact variable differs");
        if (frame) {
          check(actor.appearance.fingerprint() == o.get(fingerprint),
                "Imported contact artwork fingerprint differs");
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
          check(equal, "Imported contact artwork pixels differ");
        }
        ++passes;
      }
      check(contacts > 0 && obstacles == contacts,
            "Imported task did not execute its real obstacle/contact sequence");
      check(
          overlap ? (f.maintenance.enemy_touched == 1 && f.sounds.size() == 1)
                  : (!f.maintenance.enemy_touched && f.sounds.empty()),
          "Imported collision producer did not select intended contact branch");
      f.actors.clear_movement(movement);
    }
  return passes;
}
void obstacles(Assets &assets) {
  auto ptr = assets.fixture();
  auto &f = *ptr;
  const auto id = f.spawn(assets.encounter, assets.choice)[0];
  Oracle o(assets.a);
  auto &a = f.actors.actor(id);
  // Exercise actual imported run flags of both supported and blocked terrain
  // types using legitimate spawned groups; source below reads unchanged data.
  for (unsigned pattern = 0; pattern < 16; ++pattern) {
    std::array<std::uint8_t, 16> flags{};
    for (unsigned i = 0; i < 16; ++i)
      flags[i] = std::uint8_t((i * 3 + pattern) & 15) |
                 ((pattern & (1 << (i % 4))) ? (i & 1 ? 0x80 : 0x40) : 0) |
                 ((pattern == 15 && i % 3 == 0) ? 0x10 : 0);
    f.terrain.pattern(flags);
    f.area = f.terrain.area();
    for (unsigned shape = 0; shape < 17; ++shape)
      for (unsigned direction : {0u, 1u, 2u, 3u, 4u, 5u, 6u, 7u, 8u, 0xffffu})
        for (unsigned motion = 0; motion < 3; ++motion)
          for (bool vertical : {false, true}) {
            a.appearance_context.shape = shape;
            a.behavior.direction = direction;
            a.behavior.obstacle_flags = 0x1234;
            a.action().position = {0x01808000, 0x0180ffff, 0};
            a.action().velocity =
                motion == 0 ? std::array<std::uint32_t, 3>{0x7fff, 0, 0}
                : motion == 1
                    ? std::array<std::uint32_t, 3>{0x18000, 0x18000, 0}
                    : std::array<std::uint32_t, 3>{0xfffe8000, 0xffff0000, 0};
            const auto before = a.action();
            o.seed(f, id);
            context = assets.a.title + " obstacle=" + std::to_string(pattern) +
                      "," + std::to_string(shape) + "," +
                      std::to_string(direction) + "," + std::to_string(motion) +
                      "," + std::to_string(vertical);
            const auto source = o.run(vertical ? (o.jp ? 0xc060fc : 0xc05ece)
                                               : (o.jp ? 0xc060b0 : 0xc05e82));
            const auto result =
                vertical ? f.contact->prepare_vertical_obstacles(id)
                         : f.contact->prepare_directional_obstacles(id);
            check(source == result && o.get(o.obstacle + o.role(f, id) * 2) ==
                                          a.behavior.obstacle_flags,
                  "Original prospective obstacle result differs");
            check(a.action().position == before.position &&
                      a.action().velocity == before.velocity,
                  "Obstacle preparation integrated motion");
            check(o.get(o.prospective) == std::uint16_t((before.position[0] +
                                                         before.velocity[0]) >>
                                                        16) &&
                      o.get(o.prospective + 2) ==
                          std::uint16_t(
                              (before.position[1] + before.velocity[1]) >> 16),
                  "Source prospective integer carry differs");
          }
  }
}
} // namespace
int main(int argc, char **argv) {
  try {
    if (argc < 2)
      throw std::invalid_argument("Provide US/JP packs");
    for (int i = 1; i < argc; ++i) {
      auto a = eb::load_game_assets(argv[i], eb::asset_profiles());
      Assets assets(a);
      const auto before = checks, start = calls;
      contact_cases(assets);
      predicates_palette(assets);
      raw_palette_transport(assets);
      imported_special_cases(assets);
      const auto task_passes = imported_contact_tasks(assets);
      obstacles(assets);
      std::cout << a.title << ": " << calls - start
                << " whole original contact/predicate/palette/obstacle calls; "
                << task_passes << " imported contact task passes; "
                << checks - before << " checks\n";
    }
    std::cout << "Source instructions: " << instructions << '\n';
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
