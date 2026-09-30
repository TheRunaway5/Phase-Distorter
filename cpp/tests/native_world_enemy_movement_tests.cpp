#include "eb/native/world_enemy_movement.hpp"
#include "native_sprite_fixture.hpp"
#include "native_world_movement_fixture.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
unsigned checks{};
void check(bool ok, const char *why) {
  ++checks;
  if (!ok)
    throw std::runtime_error(why);
}
template <class F> void rejects(F f, const char *why) {
  bool threw = false;
  try {
    f();
  } catch (const std::exception &) {
    threw = true;
  }
  check(threw, why);
}
std::vector<std::uint8_t> content(eb::GameVersion version) {
  std::vector<std::uint8_t> bytes(0x50000);
  const auto put = [&](unsigned at, unsigned value) {
    bytes.at(at) = value;
    bytes.at(at + 1) = value >> 8;
  };
  const auto layout = generated_input_data_layout(version);
  const std::array<unsigned, 13> bases{0x4000, 0x8000, 0,      0xc000, 0x8000,
                                       0xffff, 0,      0xffff, 0x4000, 0xc000,
                                       0xffff, 0xffff, 0};
  const std::array<unsigned, 16> thresholds{13,  38,   64,   92,  121, 153,
                                            190, 232,  282,  345, 427, 541,
                                            715, 1021, 1723, 5181};
  for (unsigned i = 0; i < bases.size(); ++i)
    put(layout.angle_bases + i * 2, bases[i]);
  for (unsigned i = 0; i < thresholds.size(); ++i)
    put(layout.angle_thresholds + i * 2, thresholds[i]);
  // Independent synthetic cardinal component table; boundary tests choose
  // cardinal routes, and diagonal raw factors intentionally remain zero.
  const unsigned x = version == eb::GameVersion::US ? 0x4205d : 0x41fa9;
  const unsigned y = version == eb::GameVersion::US ? 0x420bd : 0x42009;
  put(x + 16 * 2, 256);
  put(x + 48 * 2, 256);
  put(y, 256);
  put(y + 32 * 2, 256);
  return bytes;
}
struct Fixture {
  std::vector<std::uint8_t> bytes;
  EnemyMovementData data;
  GeneratedInputData angles;
  native_sprite_test::Fixture graphics;
  std::shared_ptr<SpriteResources> sprites;
  std::shared_ptr<const ActionScriptData> scripts;
  ActorWorld actors;
  movement_test::Fixture terrain;
  WorldCollision collision;
  WorldMapArea area;
  WorldPartyState formation;
  party::State party;
  WorldPathfinding paths;
  WorldEnemyMovement movement;
  ActorId player{}, enemy{};
  explicit Fixture(eb::GameVersion version)
      : bytes(content(version)), data(bytes, version), angles(bytes, version),
        sprites(
            std::make_shared<SpriteResources>(graphics.bytes, graphics.layout)),
        scripts(std::make_shared<ActionScriptData>(
            std::vector<std::uint8_t>{0x09}, 0, std::vector<std::uint32_t>{0})),
        actors(sprites, scripts, version),
        collision(terrain.bytes, terrain.collision_layout),
        area(terrain.area()), party(version),
        paths(actors, collision, area, formation, party),
        movement(data, angles, actors, paths, collision) {
    std::fill(terrain.bytes.begin(), terrain.bytes.begin() + 0x19000, 0);
    terrain.pattern({});
    area = terrain.area();
    WorldActorSpec spec;
    spec.sprite = 1;
    spec.action.position = {128u << 16, 78u << 16, 0x12345678};
    spec.action.velocity = {0x12345678, 0x76543210, 0x31415926};
    spec.behavior.movement_speed = 256;
    player = *actors.create_authored(spec, {24, 25});
    spec.action.position[0] = 152u << 16;
    enemy = *actors.create_authored(spec, {0, 1});
    formation.roles[0] = 24;
    formation.current_leader_role = 24;
    party.party_count = 1;
    actors.actor(enemy).behavior.path_state = 0xffff;
    check(paths.find_to_party() == 1,
          "Unit fixture did not generate real path");
  }
};
void run(eb::GameVersion version) {
  Fixture f(version);
  const auto east = f.data.velocity(0x4000, 256),
             west = f.data.velocity(0xc000, 256);
  check(east == std::array<std::uint32_t, 2>{0x10000, 0} &&
            west == std::array<std::uint32_t, 2>{0xffff00ff, 0},
        "Cardinal signed velocity conversion differs");
  check(f.data.velocity(0, 256) == std::array<std::uint32_t, 2>{0, 0xffff00ff},
        "Negative fraction must retain source low FF byte");
  check(f.movement.uses(f.actors, f.paths, f.collision),
        "Movement owner identity differs");
  auto &a = f.actors.actor(f.enemy);
  const auto position = a.action().position;
  const auto z = a.action().velocity[2];
  const auto count = f.paths.remaining(f.enemy);
  f.movement.tick(f.enemy);
  check(f.paths.remaining(f.enemy) == count - 1 &&
            f.paths.path(f.enemy)->next == 1 && a.behavior.direction == 6 &&
            a.behavior.moving_direction == 6 &&
            a.action().velocity[0] == 0xffff00ff && a.action().velocity[1] == 0,
        "Actual path tick did not consume start and steer west");
  check(a.action().position == position && a.action().velocity[2] == z &&
            f.actors.ticks() == 0,
        "Path tick integrated physics, height or actor time");
  unsigned frames = 0;
  while (a.behavior.path_state == 0xffff && frames < 40) {
    f.movement.tick(f.enemy);
    run_actor_physics(a.action(), a.behavior);
    ++frames;
  }
  check(frames > 1 && frames < 40 && !a.behavior.path_state &&
            (a.behavior.obstacle_flags & 0x80) && !f.paths.remaining(f.enemy) &&
            f.paths.path(f.enemy)->next + 1 ==
                f.paths.path(f.enemy)->points.size(),
        "Real movement frames did not finish at retained final cursor");
  const auto velocity = a.action().velocity;
  f.movement.tick(f.enemy);
  check(a.action().velocity == velocity,
        "Completed path tick erased retained velocity");
  const auto vars = a.action().variables;
  check(!f.movement.consume_waypoint(f.enemy) && a.action().variables == vars,
        "Empty waypoint command changed script variables");

  Fixture script(version);
  auto &b = script.actors.actor(script.enemy);
  const auto old_position = b.action().position,
             old_velocity = b.action().velocity;
  unsigned consumed = 0;
  while (script.movement.consume_waypoint(script.enemy))
    ++consumed;
  check(consumed == script.paths.path(script.enemy)->points.size() &&
            script.paths.path(script.enemy)->next == consumed &&
            !script.paths.remaining(script.enemy),
        "Script waypoint did not advance past its final point");
  check(b.action().variables[6] == 128 && b.action().variables[7] == 78 &&
            b.action().position == old_position &&
            b.action().velocity == old_velocity &&
            b.behavior.path_state == 0xffff,
        "Waypoint command changed gates/physics or wrong target");
  rejects([&] { script.movement.tick(script.enemy); },
          "Exhausted script cursor invented a point");
  check(script.movement.failed(),
        "Missing point did not fail its movement owner");

  Fixture missing(version);
  check(!missing.movement.consume_waypoint(missing.player),
        "No installed path invented a waypoint");
  const auto saved = missing.actors.actor(missing.player).action().velocity;
  missing.movement.tick(missing.player);
  check(missing.actors.actor(missing.player).action().velocity == saved,
        "Unmarked actor required a path or changed velocity");
  missing.actors.erase(missing.enemy);
  rejects([&] { missing.movement.consume_waypoint(missing.enemy); },
          "Dead actor identity consumed retained route");
  Fixture reused(version);
  const auto prior = reused.enemy;
  const auto first_remaining = reused.paths.remaining(prior);
  check(reused.movement.consume_waypoint(prior),
        "Initial retained waypoint absent");
  const auto cursor = reused.paths.path(prior)->next;
  reused.actors.retire(prior);
  WorldActorSpec replacement;
  replacement.sprite = 1;
  replacement.action.position = {152u << 16, 78u << 16, 0};
  const auto next = *reused.actors.create_authored(replacement, {0, 1});
  check(next != prior && reused.paths.remaining(next) == first_remaining - 1 &&
            reused.paths.path(next)->next == cursor,
        "Authored role reuse discarded its route");
  rejects([&] { (void)reused.paths.remaining(prior); },
          "Stale host ID read retained role route");
  check(reused.movement.consume_waypoint(next),
        "New role identity could not consume retained route");
  check(reused.movement.uses(reused.actors, reused.collision, reused.area,
                             reused.formation, reused.party),
        "Complete borrowed path state identity differs");
  Fixture other(version);
  rejects(
      [&] {
        WorldEnemyMovement wrong(f.data, f.angles, other.actors, f.paths,
                                 f.collision);
      },
      "Foreign actor owner was accepted");
  rejects([&] { EnemyMovementData truncated({}, version); },
          "Truncated component data accepted");
}
} // namespace
int main() {
  try {
    run(eb::GameVersion::US);
    run(eb::GameVersion::JP);
    std::cout << checks << " native enemy movement checks passed\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
