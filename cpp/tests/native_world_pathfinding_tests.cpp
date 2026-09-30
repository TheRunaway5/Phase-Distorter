#include "eb/native/world_pathfinding.hpp"
#include "native_world_walking_fixture.hpp"
#include <iostream>

namespace {
using namespace eb::native;
unsigned checks{};
void check(bool value, const char *message) {
  ++checks;
  if (!value)
    throw std::runtime_error(message);
}
template <class F> void rejects(F f, const char *message) {
  bool failed = false;
  try {
    f();
  } catch (const std::exception &) {
    failed = true;
  }
  check(failed, message);
}
struct Fixture {
  eb::GameVersion version;
  std::vector<std::uint8_t> bytes;
  WalkingData data;
  movement_test::Fixture terrain;
  WorldCollision collision;
  WorldMovement movement;
  WorldMapArea area;
  walking_test::Fixture world;
  WorldPathfinding paths;
  Fixture(eb::GameVersion v)
      : version(v), bytes(walking_test::content(v)), data(bytes, v),
        terrain(walking_test::terrain(0)),
        collision(terrain.bytes, terrain.collision_layout),
        movement(terrain.bytes, terrain.movement_layout), area(terrain.area()),
        world(v, data, bytes, collision, movement, area),
        paths(world.actors, collision, area, world.formation, world.party) {
    world.party.party_count = 1;
  }
  void blocked(bool value) {
    std::array<std::uint8_t, 16> cells{};
    cells.fill(value ? 0x40 : 0);
    terrain.pattern(cells);
    area = terrain.area();
  }
};
void real_enemy(eb::GameVersion version) {
  Fixture f(version);
  auto &w = f.world;
  const auto enemy = w.spawn_enemy();
  auto &actor = w.actors.actor(enemy);
  actor.behavior.path_state = 0xffff;
  auto &player = w.actors.actor(w.player);
  player.behavior.path_state = 77;
  const auto position = actor.action().position,
             velocity = actor.action().velocity;
  const auto random_count = w.enemies.population().spawn_counter;
  check(f.paths.find_to_party() == 1,
        "Actual placed enemy did not find party path");
  check(f.paths.candidates().size() == 1 &&
            f.paths.candidates()[0].actor == enemy,
        "Path candidates did not use actual enemy identity");
  check(f.paths.centre() == CollisionCell{15, 10} &&
            f.paths.half_extent() == CollisionCell{32, 32},
        "Party creation shape did not determine search centre");
  check(f.paths.candidates()[0].raw_length == 1 &&
            f.paths.path(enemy)->points == std::vector<CollisionCell>{{32, 32}},
        "Coincident actual enemy did not receive one target point");
  check(actor.action().position == position &&
            actor.action().velocity == velocity &&
            actor.behavior.path_state == 0xffff &&
            player.behavior.path_state == 77 && w.actors.ticks() == 0 &&
            w.clock.frame_counter == 0 &&
            w.enemies.population().spawn_counter == random_count,
        "Pathfinding performed movement/frame/spawn work");
  actor.action().position[0] += 24u << 16;
  check(f.paths.find_to_party() == 1, "Open cardinal route was not found");
  check(f.paths.candidates()[0].raw_length == 4 &&
            f.paths.path(enemy)->points ==
                std::vector<CollisionCell>{{35, 32}, {32, 32}},
        "Path did not retain raw length while compressing cardinal points");
  const auto original_points = f.paths.path(enemy)->points;
  f.paths.clear_candidate_cost(0);
  check(f.paths.candidates()[0].raw_length == 0 &&
            f.paths.path(enemy)->points == original_points &&
            actor.behavior.path_state == 0xffff,
        "Pruning cost changed the installed route or actor gate");
  w.formation.current_leader_role = *actor.authored_role();
  check(f.paths.find_to_party() == 1 &&
            f.paths.centre() == CollisionCell{18, 10} &&
            f.paths.targets().size() == 1 &&
            f.paths.targets()[0] == CollisionCell{29, 32},
        "Path centre used sorted formation zero instead of current leader");
  w.formation.current_leader_role = 24;
  check(f.paths.find_to_party() == 1, "Restoring current leader lost route");
  const auto retained = f.paths.path(enemy)->points;
  const auto dead = w.create(10, 40);
  w.actors.actor(dead).action().alive = false;
  w.actors.actor(dead).behavior.path_state = 0xabcd;
  const auto untagged = w.create(30, 41);
  w.actors.actor(untagged).behavior.path_state = 0xffff;
  f.blocked(true);
  check(f.paths.find_to_party() == 0, "Blocked terrain manufactured a path");
  check(actor.behavior.path_state == 1 && player.behavior.path_state == 1 &&
            w.actors.actor(dead).behavior.path_state == 0xabcd &&
            w.actors.actor(untagged).behavior.path_state == 0xffff,
        "All-failed path search missed exact active authored-actor gates");
  check(f.paths.path(enemy)->points == retained &&
            f.paths.candidates()[0].points.empty(),
        "Failed search changed a retained installed path or hid its failed "
        "result");
  f.blocked(false);
  actor.behavior.path_state = 0;
  check(f.paths.find_to_party() == 0 && f.paths.candidates().empty(),
        "No candidates manufactured successful entry");
  check(f.paths.uses(w.actors, f.collision, f.area, w.formation, w.party),
        "Path owner identity check failed");
  Fixture other(version);
  check(!f.paths.uses(other.world.actors, f.collision, f.area, w.formation,
                      w.party),
        "Foreign actor owner passed binding check");
  check(!f.paths.uses(w.actors, other.collision, f.area, w.formation, w.party),
        "Foreign collision owner passed binding check");
  check(!f.paths.uses(w.actors, f.collision, other.area, w.formation, w.party),
        "Foreign terrain owner passed binding check");
  check(!f.paths.uses(w.actors, f.collision, f.area, other.world.formation,
                      w.party),
        "Foreign formation owner passed binding check");
  check(!f.paths.uses(w.actors, f.collision, f.area, w.formation,
                      other.world.party),
        "Foreign party owner passed binding check");
  const auto role = *actor.authored_role();
  const auto saved_route = *f.paths.path(enemy);
  w.enemies.erase(w.actors, enemy);
  f.paths.find_to_party();
  rejects([&] { (void)f.paths.path(enemy); },
          "Retired host identity accessed retained authored-role route");
  const auto replacement = w.create(role, 43);
  const auto *replacement_route = f.paths.path(replacement);
  check(replacement != enemy && replacement_route &&
            replacement_route->points == saved_route.points &&
            replacement_route->next == saved_route.next &&
            replacement_route->remaining == saved_route.remaining,
        "Role reuse discarded retained route, cursor or remaining count");
  rejects([&] { (void)f.paths.path(enemy); },
          "Reused role admitted its previous host identity");
}
void invalid(eb::GameVersion version) {
  for (unsigned kind = 0; kind < 5; ++kind) {
    Fixture f(version);
    auto &w = f.world;
    const auto id = w.create(0, 42);
    w.actors.actor(id).behavior.path_state = 0xffff;
    const auto before = w.actors.actor(id).action().position;
    if (kind == 0)
      w.party.party_count = 0;
    if (kind == 1)
      w.party.party_count = 7;
    if (kind == 2)
      w.formation.roles[0] = 29;
    rejects(
        [&] {
          f.paths.find_to_party(kind == 3 ? 48 : kind == 4 ? 65 : 64, 64);
        },
        "Undefined pathfinding domain was accepted");
    check(f.paths.failed() &&
              w.actors.actor(id).behavior.path_state == 0xffff &&
              w.actors.actor(id).action().position == before &&
              f.paths.candidates().empty(),
          "Failed path request committed partial actor work");
    rejects([&] { f.paths.find_to_party(); },
            "Failed path owner silently resumed");
  }
}
} // namespace
int main() {
  try {
    for (auto v : {eb::GameVersion::US, eb::GameVersion::JP}) {
      real_enemy(v);
      invalid(v);
    }
    std::cout << "Native world pathfinding checks: " << checks << '\n';
    return 0;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
