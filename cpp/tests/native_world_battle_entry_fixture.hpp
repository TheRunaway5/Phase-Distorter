#pragma once
#include "eb/native/world_battle_entry.hpp"
#include "native_world_movement_fixture.hpp"

namespace battle_entry_test {
using namespace eb::native;
struct Fixture {
  std::shared_ptr<SpriteResources> sprites;
  std::shared_ptr<const ActionScriptData> scripts;
  GeneratedInputData angles;
  std::shared_ptr<const EnemySpawnData> data;
  ActorWorld actors;
  WorldEnemies enemies;
  WorldCollision collision;
  movement_test::Fixture terrain;
  WorldMapArea area;
  WorldPartyState formation;
  party::State party;
  npcs::InteractionState leader;
  WorldMaintenanceState maintenance;
  WorldPathfinding paths;
  WorldEncounterState state;
  WorldSwirlData swirl_data;
  WorldSwirlState swirl;
  ScenePalette colors;
  PaletteColor backup{29, 8, 14};
  WorldEncounterVisualState visual;
  std::vector<WorldEncounterMusicChange> music;
  std::function<void()> music_work;
  WorldEncounter encounter;
  std::unique_ptr<WorldBattleEntry> entry;
  ActorId player{}, target_actor{};
  Fixture(eb::GameVersion version, std::shared_ptr<SpriteResources> graphics,
          std::shared_ptr<const ActionScriptData> actions,
          GeneratedInputData angle_data,
          std::shared_ptr<const EnemySpawnData> enemy_data,
          WorldCollision collision_data, WorldSwirlData definitions)
      : sprites(std::move(graphics)), scripts(std::move(actions)),
        angles(std::move(angle_data)), data(std::move(enemy_data)),
        actors(sprites, scripts, version),
        enemies(data, sprites, scripts, EnemyPopulation{.maximum = 20}),
        collision(std::move(collision_data)), area(terrain.area()),
        party(version), paths(actors, collision, area, formation, party),
        swirl_data(definitions),
        encounter(swirl_data, state, swirl, colors, backup, visual,
                  [this](const auto &request) {
                    music.push_back(request);
                    if (music_work)
                      music_work();
                  }) {
    std::fill(terrain.bytes.begin(), terrain.bytes.begin() + 0x19000, 0);
    terrain.pattern({});
    area = terrain.area();
    actors.bind_enemies(enemies);
    for (unsigned role : {24u, 25u}) {
      WorldActorSpec spec;
      spec.sprite = 1;
      spec.action.position = {0x1801234, 0x1805678, 0x23458000};
      const auto id = *actors.create_authored(spec, {role, role + 1});
      if (role == 24)
        player = id;
      else
        target_actor = id;
    }
    party.party_count = 1;
    party.controlled_count = 1;
    formation.current_leader_role = 24;
    formation.roles = {24, 0, 0, 0, 0, 0};
    leader.leader = player;
    leader.leader_direction = 6;
    maintenance.enemy_touched = 0x1234;
    colors.fill({1, 2, 3});
    swirl.repeat_speed = 73;
    swirl.repeats_until_speedup = 49;
    state.remaining.fill({0xabcd, 0xfedc});
    state.roster = {99, 98, 97};
    state.pathfinding_target = AuthoredRoleRef{25};
    entry = std::make_unique<WorldBattleEntry>(angles, actors, enemies, leader,
                                               formation, party, maintenance,
                                               state, encounter, paths);
  }
  std::vector<ActorId> spawn(unsigned encounter_id, unsigned choice,
                             unsigned cell = 0) {
    const auto before = enemies.actors().size();
    EnemySpawnState input;
    input.event_flags.resize(128);
    input.bypass_chance = true;
    input.tileset = data->sectors.at(0).tileset;
    enemies.begin_cell(actors, cell, 0, encounter_id, 8, 8, input);
    unsigned steps = 0;
    while (enemies.busy()) {
      if (++steps > 1000)
        throw std::runtime_error(
            "Battle fixture enemy spawning did not finish");
      if (const auto random =
              std::get_if<EnemyRandomRequest>(&*enemies.request()))
        enemies.respond_random(
            actors,
            random->purpose == EnemyRandomPurpose::WeightedGroup ? choice : 0);
      else
        enemies.respond_terrain(actors, 0);
    }
    std::vector<ActorId> result;
    for (unsigned i = before; i < enemies.actors().size(); ++i)
      result.push_back(enemies.actors()[i].actor);
    return result;
  }
  void arrange(std::span<const ActorId> ids, bool touched_farthest = false) {
    if (ids.empty())
      throw std::runtime_error("Battle fixture lacks spawned enemies");
    for (unsigned i = 0; i < ids.size(); ++i) {
      auto &a = actors.actor(ids[i]);
      const unsigned distance =
          touched_farthest ? unsigned(ids.size() - i) : i + 1;
      a.action().position[0] = (384 + distance * 16) << 16 | 0x1234;
      a.action().position[1] = 384 << 16 | 0x5678;
      a.behavior.moving_direction = 8;
      a.behavior.path_state = 0;
    }
    state.touched = ids[0];
    for (unsigned role = 0; role < 30; ++role)
      actors.set_authored_pause(role, false, false);
    actors.set_authored_path_state(22, 0xffff);
    actors.set_authored_sprite_hidden(21, false);
  }
};
} // namespace battle_entry_test
