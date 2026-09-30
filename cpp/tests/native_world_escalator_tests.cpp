#include "eb/native/world_escalator.hpp"
#include "eb/native/world_door_transitions.hpp"
#include "native_world_walking_fixture.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace walking_test;
unsigned checks{};
void check(bool okay, const char *why) { ++checks; if (!okay) throw std::runtime_error(why); }
template <class F> void rejects(F call, const char *why) {
  bool rejected = false;
  try { call(); } catch (const std::exception &) { rejected = true; }
  check(rejected, why);
}
std::unique_ptr<WorldEscalator> make(Fixture &f, const WalkingData &data,
                                    WorldDoorTransitionState &state,
                                    const WorldCollision &collision, const WorldMovement &movement,
                                    const WorldMapArea &area) {
  return std::make_unique<WorldEscalator>(data, f.actors, f.leader, f.control, f.formation,
      f.navigation, state, f.maintenance, f.input, f.queue, f.doors, collision, movement, area);
}
void run(eb::GameVersion version) {
  const auto bytes = content(version);
  const WalkingData data(bytes, version);
  for (unsigned flags : {0u, 8u, 12u, 0x40u, 0x80u, 0xc0u, 0x10u}) {
    auto map = terrain(flags);
    const WorldCollision collision(map.bytes, map.collision_layout);
    const WorldMovement movement(map.bytes, map.movement_layout);
    auto area = map.area();
    for (unsigned direction = 0; direction < 4; ++direction)
      for (unsigned phase : {0u, 1u, 0xffffu}) {
        Fixture f(version, data, bytes, collision, movement, area);
        WorldDoorTransitionState state;
        state.escalator_entrance = std::uint16_t(direction << 8 | 0x8055);
        auto escalator = make(f, data, state, collision, movement, area);
        f.leader.walking_style = 12;
        f.leader.leader_direction = 2;
        f.leader.leader_x = f.leader.leader_y = 0;
        f.control.x_fraction = f.control.y_fraction = phase;
        f.control.moved_this_tick = 7;
        f.control.trodden_surface_flags = 12;
        f.leader.collision_actor = f.player;
        f.actors.appearance_scene().movement_counter = 0xffff;
        f.mushroom = {1, 3, 17};
        f.hotspot_state.live[0] = {2, 0, 0, 100, 100, 0x123456};
        f.navigation.ladder_stairs = {11, 0x4567};
        constexpr std::array directions{CollisionDirection::NorthWest, CollisionDirection::NorthEast,
                                         CollisionDirection::SouthWest, CollisionDirection::SouthEast};
        const auto x = std::uint32_t(phase) + data.raw_delta(0, 12, directions[direction]);
        const auto y = std::uint32_t(phase) + data.raw_delta(1, 12, directions[direction]);
        const auto before_input = f.input;
        const auto before_hotspots = f.hotspot_state;
        auto op = escalator->begin();
        rejects([&] { escalator->begin(); }, "Concurrent escalator operation accepted");
        check(op->advance() && op->complete() && !escalator->busy(), "Escalator did not complete");
        check(f.leader.leader_x == x >> 16 && f.control.x_fraction == std::uint16_t(x) &&
              f.leader.leader_y == y >> 16 && f.control.y_fraction == std::uint16_t(y),
              "Escalator changed raw style12 movement for terrain or applied redirect");
        check(f.control.moved_this_tick == 1 && f.control.trodden_surface_flags == 12 &&
              f.actors.appearance_scene().movement_counter == 0xffff && f.leader.leader_direction == 2,
              "Escalator changed outer terrain/facing/movement counter");
        check(f.leader.collision_actor == f.player && f.hotspot_state == before_hotspots &&
              f.mushroom.timer == 3 && f.input.state == before_input.state &&
              f.actors.ticks() == 0 && f.clock.frame_counter == 0,
              "Escalator ran NPC/hotspot/mushroom/input/actor/frame work");
        if (!(flags & 0x10))
          check(f.navigation.ladder_stairs.x == 0xffff && f.navigation.ladder_stairs.y == 0x4567,
                "Ladder invalidation changed retained Y");
        const auto after_x = f.leader.leader_x;
        const auto after_fraction = f.control.x_fraction;
        check(op->advance() && f.leader.leader_x == after_x && f.control.x_fraction == after_fraction,
              "Completed escalator replayed movement");
      }
  }
  auto flat = terrain(0);
  const WorldCollision collision(flat.bytes, flat.collision_layout);
  const WorldMovement movement(flat.bytes, flat.movement_layout);
  const auto area = flat.area();
  for (unsigned enemy : {0u, 1u, 0xffffu})
    for (unsigned swirl : {0u, 1u, 2u, 0xffffu}) {
      Fixture f(version, data, bytes, collision, movement, area);
      WorldDoorTransitionState state;
      auto escalator = make(f, data, state, collision, movement, area);
      f.maintenance.enemy_touched = enemy;
      f.actors.appearance_scene().battle_swirl_ticks = swirl;
      f.control.moved_this_tick = 7;
      f.prompt.battle_mode = 0x1234;
      const auto oldx = f.leader.leader_x;
      const auto oldfraction = f.control.x_fraction;
      auto op = escalator->begin();
      check(op->advance(), "Early gate failed to complete");
      check(f.actors.appearance_scene().battle_swirl_ticks == (enemy || !swirl ? swirl : swirl - 1) &&
            f.prompt.battle_mode == 0x1234, "Enemy/swirl precedence or battle mode changed");
      if (enemy || swirl)
        check(f.leader.leader_x == oldx && f.control.x_fraction == oldfraction && f.control.moved_this_tick == 7,
              "Early gate changed position or reset outer movement word");
    }
  // All shared doors are real. Permission-zero type2 still cannot stop the
  // escalator, whereas unbound type3 retains a genuine pending producer.
  for (unsigned door_type : {2u, 3u}) {
    const auto door_bytes = content(version, door_type);
    auto ladder = terrain(0x10);
    auto ladder_area = ladder.area();
    Fixture f(version, data, door_bytes, collision, movement, ladder_area);
    WorldDoorTransitionState state;
    auto escalator = make(f, data, state, collision, movement, ladder_area);
    f.leader.walking_style = 12;
    f.input.player_activity = 1;
    auto op = escalator->begin();
    if (door_type == 2) {
      check(op->advance() && f.queued.pending == 1 && f.control.moved_this_tick == 1,
            "Permission-zero actual queued door stopped escalator movement");
    } else {
      check(!op->advance() && op->request() && escalator->busy(), "Unbound producer was acknowledged");
      const auto oldx = f.leader.leader_x;
      const auto oldfraction = f.control.x_fraction;
      const auto old_input = f.input;
      for (unsigned i = 0; i < 8; ++i)
        check(!op->advance() && f.leader.leader_x == oldx && f.control.x_fraction == oldfraction &&
              f.input.state == old_input.state && f.actors.ticks() == 0,
              "Pending door advanced escalator/input/actors");
      op.reset();
      check(escalator->failed(), "Abandoned escalator/door did not poison owner");
      rejects([&] { escalator->begin(); }, "Failed escalator restarted");
    }
  }
  Fixture f(version, data, bytes, collision, movement, area);
  WorldDoorTransitionState state;
  auto escalator = make(f, data, state, collision, movement, area);
  auto external = f.doors.begin({0, 0});
  rejects([&] { escalator->begin(); }, "Escalator adopted an independent pending door");
  check(external->advance(), "External door fixture failed");
}
}
int main() {
  try {
    run(eb::GameVersion::US); run(eb::GameVersion::JP);
    std::cout << "Native escalator checks: " << checks << '\n';
    return 0;
  } catch (const std::exception &e) { std::cerr << e.what() << '\n'; return 1; }
}
