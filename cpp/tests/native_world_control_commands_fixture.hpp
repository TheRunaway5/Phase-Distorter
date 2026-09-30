#pragma once
#include "eb/native/world_automatic.hpp"
#include "eb/native/world_control_commands.hpp"
#include "eb/native/world_door_transitions.hpp"
#include "native_world_walking_fixture.hpp"

namespace control_command_test {
using namespace eb::native;
struct Fixture {
  std::vector<std::uint8_t> bytes;
  WalkingData data;
  std::shared_ptr<SpriteResources> sprites;
  std::shared_ptr<const ActionScriptData> scripts =
      std::make_shared<ActionScriptData>(std::vector<std::uint8_t>{0x09}, 0,
                                         std::vector<std::uint32_t>{0});
  ActorWorld actors;
  WorldEnemies enemies;
  npcs::InteractionState leader;
  WorldControlState control;
  WorldDoorTransitionState transitions;
  WorldPartyState formation;
  PartyTrail trail;
  WorldMaintenanceState maintenance;
  story::InputState input;
  npcs::InteractionQueueState queued;
  npcs::DadPhoneState phone;
  WorldInteractionQueue queue;
  WorldAutomatic automatic;
  WorldControlCommands commands;
  ActorId player;
  explicit Fixture(eb::GameVersion region,
                   std::shared_ptr<SpriteResources> artwork = {},
                   std::shared_ptr<const EnemySpawnData> enemy_data = {})
      : bytes(walking_test::content(region)), data(bytes, region),
        sprites(artwork ? std::move(artwork)
                        : walking_test::data::make_sprites()),
        actors(sprites, scripts, region),
        enemies(enemy_data ? std::move(enemy_data)
                           : walking_test::empty_enemies(),
                sprites, scripts, EnemyPopulation{.maximum = 8}),
        queue(region, queued, actors.appearance_scene().intangibility_ticks,
              phone),
        automatic(data, actors, enemies, leader, control, transitions,
                  formation, trail, maintenance, input, queue),
        commands(automatic) {
    player = create(24, 1, 0xffff);
    leader.leader = player;
    leader.leader_x = 128;
    leader.leader_y = 80;
    control.x_fraction = 0x1234;
    control.y_fraction = 0xabcd;
    formation.roles[0] = 24;
    formation.current_leader_role = 24;
  }
  ActorId create(unsigned role, unsigned sprite, unsigned npc) {
    WorldActorSpec spec;
    spec.sprite = sprite;
    if (npc != 0xffff)
      spec.npc = std::uint16_t(npc);
    spec.action.position = {128u << 16, 80u << 16, 0};
    spec.action.animation = 0;
    spec.behavior.direction = 2;
    return *actors.create_authored(spec, {role, role + 1});
  }
};
} // namespace control_command_test
