#pragma once
#include "eb/native/world_maintenance.hpp"
#include "eb/native/world_walking.hpp"
#include "native_interaction_test_assets.hpp"
#include "native_world_movement_fixture.hpp"

namespace walking_test {
using namespace eb::native;
namespace data = interaction_test_assets;
inline std::vector<std::uint8_t> content(eb::GameVersion version,
                                         unsigned door_type = 1,
                                         unsigned door_value = 0) {
  auto bytes = data::Content(version).bytes;
  const auto l = walking_data_layout(version);
  for (unsigned style = 0; style < 14; ++style) {
    data::put(bytes, l.cardinal + style * 4, 0x6000);
    data::put(bytes, l.cardinal + style * 4 + 2, 1);
    data::put(bytes, l.diagonal + style * 4, 0xf8e6);
    data::put(bytes, l.allowed + style * 2,
              style == 12                ? 0
              : style == 7 || style == 8 ? 0x11
                                         : 0xff);
  }
  // Independent clockwise rotation of the input direction bits.
  for (unsigned table = 0; table < 3; ++table)
    for (unsigned mask = 0; mask < 16; ++mask) {
      unsigned out = mask;
      for (unsigned n = 0; n <= table; ++n)
        out = ((out & 8) >> 3) | ((out & 1) << 2) | ((out & 4) >> 1) |
              ((out & 2) << 2);
      data::put(bytes, l.mushroom_remapping + table * 32 + mask * 2, out << 8);
    }
  // One full 32x32 door directory for all source cells. The payload and
  // directory are separate; type0 has a legitimate flag1/text payload.
  for (unsigned cell = 0; cell < 1280; ++cell)
    data::pointer(bytes, 0x100000 + cell * 4, 0xf3000);
  data::put(bytes, 0xf3000, 1024);
  for (unsigned y = 0; y < 32; ++y)
    for (unsigned x = 0; x < 32; ++x) {
      const auto at = 0xf3002 + (y * 32 + x) * 5;
      bytes[at] = y;
      bytes[at + 1] = x;
      bytes[at + 2] = door_type;
      data::put(bytes, at + 3, door_value);
    }
  data::put(bytes, 0xf0200, 1);
  data::pointer(bytes, 0xf0202, 0x1d0042);
  return bytes;
}
inline movement_test::Fixture terrain(unsigned flags) {
  movement_test::Fixture map;
  std::fill(map.bytes.begin(), map.bytes.begin() + 0x19000, 0);
  std::array<std::uint8_t, 16> pattern;
  pattern.fill(flags);
  map.pattern(pattern);
  return map;
}
inline std::shared_ptr<EnemySpawnData> empty_enemies() {
  auto data = std::make_shared<EnemySpawnData>();
  data->butterfly_enemy = 0;
  data->battles = {{{1, 0}}};
  data->enemies = {{1, 0, 4, 0}};
  data->encounters.resize(2);
  data->encounters[1] = {0, {100, 0}, std::vector<unsigned>(8, 0)};
  return data;
}
struct Fixture {
  eb::GameVersion version;
  std::shared_ptr<SpriteResources> sprites = data::make_sprites();
  std::shared_ptr<const ActionScriptData> scripts =
      std::make_shared<ActionScriptData>(std::vector<std::uint8_t>{0x09}, 0,
                                         std::vector<std::uint32_t>{0});
  ActorWorld actors;
  std::shared_ptr<EnemySpawnData> enemy_content = empty_enemies();
  WorldEnemies enemies;
  npcs::InteractionState leader;
  WorldControlState control;
  WorldPartyState formation;
  party::State party;
  party::MovementPolicyState mushroom;
  dialogue::PromptState prompt;
  story::InputState input;
  story::TickState clock;
  WorldNavigationState navigation;
  WorldMaintenanceState maintenance;
  npcs::InteractionQueueState queued;
  npcs::DadPhoneState phone;
  WorldInteractionQueue queue;
  WorldHotspotState hotspot_state;
  WorldHotspots hotspots;
  std::shared_ptr<const npcs::MapTextResources> maps;
  std::shared_ptr<const WorldDoorResources> door_content;
  WorldDoors doors;
  WorldWalking walking;
  std::array<std::uint8_t, 128> flags{};
  ActorId player;
  Fixture(eb::GameVersion region, const WalkingData &walking_data,
          std::span<const std::uint8_t> bytes, const WorldCollision &collision,
          const WorldMovement &movement, const WorldMapArea &area)
      : version(region), actors(sprites, scripts, region),
        enemies(enemy_content, sprites, scripts, EnemyPopulation{.maximum = 8}),
        party(region),
        queue(region, queued, actors.appearance_scene().intangibility_ticks,
              phone),
        hotspots(region, hotspot_state, leader, clock,
                 actors.appearance_scene(), queue),
        maps(npcs::MapTextResources::import(bytes, region)),
        door_content(WorldDoorResources::import(bytes, region)),
        doors(maps, door_content, actors, leader, control, navigation,
              maintenance, input, queue),
        walking(walking_data, actors, enemies, leader, control, formation,
                party, mushroom, prompt, input, clock, navigation, queue,
                hotspots, doors, collision, movement, area) {
    actors.scene().event_flags = flags;
    player = create(24, 0xffff, {3, 9, 7, 5});
    leader.leader = player;
    formation.roles[0] = 24; formation.current_leader_role = 24;
    leader.leader_x = 128;
    leader.leader_y = 80;
    leader.leader_direction = 2;
    control.x_fraction = 0x1234;
    control.y_fraction = 0xabcd;
    input.state[0] = 0x100;
  }
  ActorId create(unsigned role, unsigned npc,
                 std::array<unsigned, 4> geometry = {4, 8, 4, 8}) {
    WorldActorSpec spec;
    spec.sprite = 1;
    if (npc != 0xffff)
      spec.npc = std::uint16_t(npc);
    spec.action.animation = 0;
    spec.action.position = {128 << 16, 80 << 16, 0};
    spec.behavior.direction = 2;
    spec.hitbox =
        ActorHitbox{1,
                    {std::uint16_t(geometry[0]), std::uint16_t(geometry[1])},
                    {std::uint16_t(geometry[2]), std::uint16_t(geometry[3])}};
    return role < 30 ? *actors.create_authored(spec, {role, role + 1})
                     : actors.create(spec);
  }
  ActorId spawn_enemy() {
    EnemySpawnState state;
    state.event_flags.resize(128);
    state.bypass_chance = true;
    enemies.begin_cell(actors, 0, 0, 1, 32, 32, state);
    for (unsigned step = 0; enemies.busy(); ++step) {
      if (step > 20 || !enemies.request())
        throw std::runtime_error("Fixture enemy did not complete");
      if (const auto *random =
              std::get_if<EnemyRandomRequest>(&*enemies.request())) {
        const unsigned value =
            random->purpose == EnemyRandomPurpose::PositionX   ? 16
            : random->purpose == EnemyRandomPurpose::PositionY ? 10
                                                               : 0;
        enemies.respond_random(actors, value);
      } else
        enemies.respond_terrain(actors, 0);
    }
    if (enemies.actors().size() != 1)
      throw std::runtime_error("Fixture did not create one native enemy");
    const auto id = enemies.actors()[0].actor;
    actors.actor(id).hitbox = ActorHitbox{1, {4, 8}, {4, 8}};
    return id;
  }
};
} // namespace walking_test
