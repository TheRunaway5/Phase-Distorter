#include "eb/native/world_enemy_behavior.hpp"
#include "native_world_walking_fixture.hpp"
#include <iostream>

namespace {
using namespace eb::native;
unsigned checks{};
void check(bool okay, const char *why) {
  ++checks;
  if (!okay)
    throw std::runtime_error(why);
}
template <class F> void rejects(F fn, const char *why) {
  bool threw = false;
  try {
    fn();
  } catch (const std::exception &) {
    threw = true;
  }
  check(threw, why);
}
struct Fixture {
  std::vector<std::uint8_t> bytes;
  WalkingData walking;
  EnemyMovementData movement;
  GeneratedInputData angles;
  movement_test::Fixture terrain;
  WorldCollision collision;
  WorldMovement map_movement;
  WorldMapArea area;
  walking_test::Fixture world;
  WorldEnemyBehavior behavior;
  ActorId enemy;
  explicit Fixture(eb::GameVersion version)
      : bytes(walking_test::content(version)), walking(bytes, version),
        movement(bytes, version), angles(bytes, version),
        terrain(walking_test::terrain(0)),
        collision(terrain.bytes, terrain.collision_layout),
        map_movement(terrain.bytes, terrain.movement_layout),
        area(terrain.area()),
        world(version, walking, bytes, collision, map_movement, area),
        behavior(movement, angles, world.actors, world.enemies, world.party,
                 world.leader) {
    world.enemy_content->battle_behaviors.resize(1);
    world.enemy_content->enemies[0].level = 10;
    world.party.party_count = 1;
    world.party.display_order[0] = 1;
    world.party.controlled_order[0] = 0;
    enemy = world.spawn_enemy();
  }
};
void run(eb::GameVersion version) {
  Fixture f(version);
  auto &w = f.world;
  auto &a = w.actors.actor(f.enemy);
  a.action().position = {0x1234, 0x5678, 0xdeadbeef};
  w.leader.leader_y = 0;
  for (bool small : {false, true}) {
    const std::array<unsigned, 3> thresholds =
        small ? std::array<unsigned, 3>{64, 80, 128}
              : std::array<unsigned, 3>{128, 160, 256};
    for (unsigned edge = 0; edge < thresholds.size(); ++edge)
      for (int delta : {-1, 0, 1}) {
        w.leader.leader_x = thresholds[edge] + delta;
        check(f.behavior.distance_band(f.enemy, small) == edge + (delta == 1),
              "Distance threshold changed");
      }
  }
  w.leader.leader_x = 0x8000;
  check(f.behavior.distance_band(f.enemy) == 0,
        "Wrapped absolute overflow changed");
  w.actors.appearance_scene().intangibility_ticks = 1;
  check(f.behavior.distance_band(f.enemy) == 0xffff, "Intangibility gate lost");
  a.behavior.path_state = 0x1234;
  check(f.behavior.distance_band(f.enemy) == 0,
        "Path gate must precede intangibility");
  a.behavior.path_state = 0;
  w.actors.appearance_scene().intangibility_ticks = 0;
  w.leader.leader_x = 451;
  w.leader.leader_y = 367;
  const auto position = a.action().position;
  check(f.behavior.capture_leader_target(f.enemy) == 367 &&
            a.action().variables[6] == 451 && a.action().variables[7] == 367 &&
            a.action().position == position,
        "Leader target capture changed geometry or result");
  for (unsigned level : {59u, 60u, 61u, 80u, 81u, 100u, 101u}) {
    w.party.character(1).level = level;
    check(f.behavior.should_flee(f.enemy) == (level > 60),
          "Retained zero weakness flee boundary changed");
  }
  w.party.party_count = 4;
  w.party.display_order = {1, 5, 0, 4, 0, 0};
  w.party.controlled_order = {3, 250, 2, 5, 0, 0};
  w.party.character(4).level = 7;
  w.party.character(3).level = 19;
  w.party.character(6).level = 31;
  check(f.behavior.party_level_sum() == 57,
        "Level sum lost display filter or controlled record mapping");
  w.enemy_content->battle_behaviors[0] = {1, 0};
  check(f.behavior.should_flee(f.enemy),
        "Clear event flag branch did not force flee");
  w.flags[0] = 1;
  check(!f.behavior.should_flee(f.enemy),
        "Mismatched flag bypassed actual levels");
  const auto toward = f.angles.angle({0, 0}, {451, 367});
  check(f.behavior.chase_angle(f.enemy) == toward,
        "Chase did not use exact angle owner");
  w.flags[0] = 0;
  check(f.behavior.chase_angle(f.enemy) == std::uint16_t(toward + 0x8000),
        "Flee angle did not wrap by half turn");
  a.action().velocity[2] = 0x98765432;
  for (unsigned angle = 0; angle < 65536; angle += 127) {
    a.behavior.movement_speed = std::uint16_t(angle * 3);
    check(f.behavior.set_velocity(f.enemy, angle) == angle &&
              a.action().velocity[2] == 0x98765432 &&
              a.action().position == position,
          "Velocity setter changed height/position or returned wrong angle");
    check(f.behavior.set_moving_direction(f.enemy, angle) ==
              std::uint16_t(angle + 0x1000) / 0x2000,
          "Moving direction rounding changed");
  }
  for (unsigned speed : {0u, 1u, 127u, 256u, 512u, 32768u, 65535u})
    for (unsigned distance : {0u, 1u, 8u, 255u, 256u, 65535u}) {
      a.behavior.movement_speed = speed;
      check(f.behavior.distance_sleep(f.enemy, distance) ==
                (speed ? std::uint16_t((distance << 8) / speed) : 0xffff),
            "Distance sleep quotient changed");
    }
  check(!w.actors.ticks() && !w.clock.frame_counter &&
            f.behavior.uses(w.actors, w.enemies, w.party, w.leader) &&
            f.behavior.uses(f.movement, f.angles),
        "Behavior added frame work or lost owner identity");
  Fixture other(version);
  check(!f.behavior.uses(other.world.actors, w.enemies, w.party, w.leader),
        "Foreign actor owner accepted");
  check(!f.behavior.uses(w.actors, other.world.enemies, w.party, w.leader),
        "Foreign enemy owner accepted");
  check(!f.behavior.uses(w.actors, w.enemies, other.world.party, w.leader),
        "Foreign party owner accepted");
  check(!f.behavior.uses(w.actors, w.enemies, w.party, other.world.leader),
        "Foreign leader owner accepted");
  const auto population = w.enemies.population();
  w.enemies.reset_population_for_map();
  check(w.enemies.population().count == 0 &&
            w.enemies.population().butterfly_spawned == 0 &&
            w.enemies.population().capacity_failures == 0 &&
            w.enemies.population().maximum == population.maximum &&
            w.enemies.population().spawn_counter == population.spawn_counter &&
            w.enemies.actors().size() == 1,
        "Map population reset cleared unrelated state or retired an actor");
  w.enemies.erase(w.actors, f.enemy);
  check(w.enemies.population().count == 0xffff,
        "Ordered map release lost source decrement wrap");
  rejects([&] { f.behavior.distance_band(f.enemy); },
          "Dead identity used retained actor state");
  check(f.behavior.failed(), "Failed behavior owner resumed");
}
} // namespace
int main() {
  try {
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP})
      run(version);
    std::cout << checks << " native enemy behavior checks passed\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
