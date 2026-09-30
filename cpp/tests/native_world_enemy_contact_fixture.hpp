#pragma once
#include "eb/native/world_door_transitions.hpp"
#include "eb/native/world_enemy_contact.hpp"
#include "eb/native/world_maintenance.hpp"
#include "native_world_movement_fixture.hpp"

namespace enemy_contact_test {
using namespace eb::native;
struct Fixture {
  WalkingData data;
  std::shared_ptr<SpriteResources> sprites;
  std::shared_ptr<const ActionScriptData> scripts;
  ActorWorld actors;
  std::shared_ptr<const EnemySpawnData> enemy_data;
  WorldEnemies enemies;
  WorldCollision collision;
  movement_test::Fixture terrain;
  WorldMapArea area;
  npcs::InteractionState leader;
  WorldControlState control;
  WorldNavigationState navigation;
  dialogue::PromptState prompt;
  WorldMaintenanceState maintenance;
  WorldPartyState formation;
  party::State party;
  PartyTrail trail;
  WorldDoorTransitionState transitions;
  story::InputState input;
  npcs::InteractionQueueState queued;
  npcs::DadPhoneState phone;
  WorldInteractionQueue queue;
  WorldAutomatic automatic;
  WorldPathfinding paths;
  WorldEncounterState state;
  WorldSwirlData swirl_data;
  WorldSwirlState swirl;
  ScenePalette colors{}, palette_backup{};
  PaletteColor backdrop_backup{};
  WorldEncounterVisualState visual;
  WorldEncounter encounter;
  std::vector<dialogue::ScriptSoundRequest> sounds;
  std::function<void()> sound_work;
  std::unique_ptr<WorldEnemyContact> contact;
  Fixture(eb::GameVersion version, std::span<const std::uint8_t> bytes,
          std::shared_ptr<SpriteResources> graphics,
          std::shared_ptr<const ActionScriptData> actions,
          std::shared_ptr<const EnemySpawnData> enemy_content,
          WorldCollision collision_data, WorldSwirlData definitions = {},
          std::optional<AppearanceData> appearance = std::nullopt)
      : data(bytes, version), sprites(std::move(graphics)),
        scripts(std::move(actions)),
        actors(sprites, scripts, version, std::move(appearance)),
        enemy_data(std::move(enemy_content)),
        enemies(enemy_data, sprites, scripts, EnemyPopulation{.maximum = 20}),
        collision(std::move(collision_data)), area(terrain.area()),
        party(version),
        queue(version, queued, actors.appearance_scene().intangibility_ticks,
              phone),
        automatic(data, actors, enemies, leader, control, transitions,
                  formation, trail, maintenance, input, queue),
        paths(actors, collision, area, formation, party),
        swirl_data(definitions),
        encounter(swirl_data, state, swirl, colors, backdrop_backup, visual,
                  [](const auto &) {}) {
    std::fill(terrain.bytes.begin(), terrain.bytes.begin() + 0x19000, 0);
    terrain.pattern({});
    area = terrain.area();
    actors.bind_enemies(enemies);
    for (unsigned role : {23u, 24u, 25u}) {
      WorldActorSpec spec;
      spec.sprite = 1;
      spec.action.position = {384u << 16, 384u << 16, 0};
      const auto id = *actors.create_authored(spec, {role, role + 1});
      if (role == 24)
        leader.leader = id;
    }
    formation.roles[0] = 24;
    formation.current_leader_role = 24;
    party.party_count = party.controlled_count = 1;
    for (unsigned i = 0; i < colors.size(); ++i)
      colors[i] = {std::uint8_t(i & 31), std::uint8_t((i * 3 + 7) & 31),
                   std::uint8_t((i * 11 + 5) & 31)};
    palette_backup.fill({29, 28, 27});
    contact = std::make_unique<WorldEnemyContact>(
        actors, enemies, leader, control, prompt, navigation, maintenance,
        paths, state, encounter, automatic, colors, palette_backup, collision,
        area, [this](const auto &sound) {
          sounds.push_back(sound);
          if (sound_work)
            sound_work();
        });
  }
  ~Fixture() { actors.clear_enemies(enemies); }
  std::vector<ActorId> spawn(unsigned encounter_id = 1, unsigned choice = 0,
                             unsigned cell = 0, unsigned cell_y = 0,
                             bool require_actor = true) {
    const auto before = enemies.actors().size();
    EnemySpawnState input;
    input.event_flags.resize(128);
    input.bypass_chance = true;
    input.tileset = enemy_data->sectors[(cell_y / 2) * 32 + cell / 4].tileset;
    enemies.begin_cell(actors, cell, cell_y, encounter_id, 8, 8, input);
    for (unsigned steps = 0; enemies.busy(); ++steps) {
      if (steps > 1000)
        throw std::runtime_error("Contact fixture spawn failed");
      if (const auto random =
              std::get_if<EnemyRandomRequest>(&*enemies.request()))
        enemies.respond_random(
            actors,
            random->purpose == EnemyRandomPurpose::WeightedGroup ? choice : 0);
      else {
        const auto &terrain = std::get<EnemyTerrainRequest>(*enemies.request());
        const auto mask = enemy_data->enemies.at(terrain.enemy).terrain_mask;
        enemies.respond_terrain(actors, mask & 4 ? 0 : mask & 2 ? 4 : 8);
      }
    }
    std::vector<ActorId> ids;
    for (unsigned i = before; i < enemies.actors().size(); ++i)
      ids.push_back(enemies.actors()[i].actor);
    if (require_actor && ids.empty())
      throw std::runtime_error("Contact fixture did not spawn an enemy");
    return ids;
  }
};
} // namespace enemy_contact_test
