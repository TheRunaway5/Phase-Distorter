#include "native_world_walking_fixture.hpp"
#include <iostream>

namespace {
using namespace walking_test;
unsigned checks{};
void check(bool good, const char *message) {
  ++checks;
  if (!good)
    throw std::runtime_error(message);
}
template <class F> void rejects(F f, const char *message) {
  bool rejected = false;
  try {
    f();
  } catch (const std::exception &) {
    rejected = true;
  }
  check(rejected, message);
}
void run(eb::GameVersion version) {
  auto bytes = content(version);
  WalkingData data(bytes, version);
  auto map = terrain(0);
  WorldCollision collision(map.bytes, map.collision_layout);
  WorldMovement movement(map.bytes, map.movement_layout);
  auto area = map.area();
  for (unsigned style = 0; style < 14; ++style)
    for (unsigned mask = 0; mask < 16; ++mask) {
      const auto direction = data.direction(style, mask << 8, false);
      check(data.direction(style, mask << 8, true) == CollisionDirection::None,
            "Pending queue did not block input mapping");
      if (style == 12)
        check(direction == CollisionDirection::None,
              "Escalator accepts walking input");
      if (style == 7 || style == 8)
        check(direction == CollisionDirection::None ||
                  direction == CollisionDirection::North ||
                  direction == CollisionDirection::South,
              "Climbing accepts lateral input");
    }
  check(data.adjust(0x12340000, 0, 0, CollisionDirection::West, 8, 0, 0) ==
            0x12335000,
        "Negative shallow fixed-point displacement differs");
  check(data.adjust(0xffffc000, 0, 0, CollisionDirection::East, 0, 0, 3) ==
            0x1d000,
        "Sandwich fixed-point wrap differs");
  rejects([&] { data.adjust(0, 2, 0, CollisionDirection::East, 0, 0, 0); },
          "Invalid axis accepted");
  rejects(
      [&] {
        WalkingData short_data{std::span<const std::uint8_t>(bytes).first(15),
                               version};
      },
      "Truncated walking import accepted");
  {
    Fixture f(version, data, bytes, collision, movement, area);
    const auto other = f.create(25, 0xffff);
    f.actors.actor(other).hitbox->enabled = 0;
    f.formation.current_leader_role = 25; // Formation roles deliberately remain unchanged. // Talk's cached leader remains role24.
    const auto obstacle = f.create(0, 7);
    f.leader.collision_actor = obstacle;
    const auto before = f.leader.leader_x;
    auto op = f.walking.begin();
    check(op->advance() && !f.leader.collision_actor &&
              f.leader.leader_x > before,
          "Walking used stale Talk leader instead of live formation geometry");
    check(f.leader.leader == f.player,
          "Walking changed Talk's separate leader cache");
    check(f.actors.ticks() == 0 && f.clock.frame_counter == 0,
          "Walking advanced a tick");
    const auto position = f.leader.leader_x;
    check(op->advance() && f.leader.leader_x == position,
          "Complete walking operation replayed");
  }
  {
    Fixture f(version, data, bytes, collision, movement, area);
    f.create(22, 8);
    const auto first = f.create(0, 9);
    f.create(30, 10);
    auto op = f.walking.begin();
    check(
        op->advance() && f.leader.collision_actor == first &&
            !f.control.moved_this_tick,
        "Collision did not preserve numeric role order before untagged actors");
    check(f.actors.appearance_scene().movement_counter == 1,
          "Blocked attempt lost animation counter");
  }
  {
    Fixture f(version, data, bytes, collision, movement, area);
    f.mushroom = {1, 0, 0};
    f.input.pressed[0] = 0x800;
    f.input.state[0] = 0x800;
    f.actors.appearance_scene().battle_swirl_ticks = 1;
    f.leader.collision_actor = f.player;
    const auto xy = std::pair(f.leader.leader_x, f.leader.leader_y);
    check(f.walking.begin()->advance(), "Final swirl step did not complete");
    check(f.control.encounter.mode == 0xffff && f.prompt.battle_mode == 0 && f.mushroom.timer == 1799 &&
              f.mushroom.modifier == 1 && f.input.state[0] == 0x100 &&
              f.input.pressed[0] == 0x100,
          "Input remapping did not precede final swirl transition");
    check(f.leader.collision_actor == f.player &&
              xy == std::pair(f.leader.leader_x, f.leader.leader_y),
          "Final swirl step ran collision or movement");
  }
  {
    Fixture f(version, data, bytes, collision, movement, area);
    const auto enemy = f.spawn_enemy();
    check(!f.actors.actor(enemy).npc(),
          "Enemy fixture invented an ordinary NPC identity");
    f.actors.appearance_scene().intangibility_ticks = 1;
    check(f.walking.begin()->advance() && !f.leader.collision_actor,
          "Walking ignored actual enemy owner during intangibility");
    f.actors.appearance_scene().intangibility_ticks = 0;
    check(f.walking.begin()->advance() && f.leader.collision_actor == enemy,
          "Touchable native enemy did not block walking");
    f.enemies.release_appearance(f.actors, enemy);
    f.actors.appearance_scene().intangibility_ticks = 1;
    check(f.walking.begin()->advance() && f.leader.collision_actor == enemy,
          "Released enemy retained its old encoded collision identity");
  }
  {
    Fixture f(version, data, bytes, collision, movement, area);
    f.hotspot_state.live[0] = {2, 0, 0, 1000, 1000, 0xdd0042};
    f.hotspot_state.saved_modes[0] = 2;
    f.prompt.debug = 1;
    f.input.state[0] |= 0x40;
    const auto xfrac = f.control.x_fraction;
    check(f.walking.begin()->advance(), "Hotspot/debug walk failed");
    check(f.queued.pending == 1 && f.queued.records[0].type == 9 &&
              f.hotspot_state.live[0].mode == 0 &&
              f.hotspot_state.saved_modes[0] == 0,
          "Walking did not run actual hotspot producer");
    check(!(f.leader.leader_x & 7) && f.control.x_fraction != xfrac &&
              f.control.y_fraction == 0xabcd,
          "Debug snap changed fractions or skipped real motion");
  }
  {
    auto ladder_map = terrain(0x10);
    auto ladder_area = ladder_map.area();
    Fixture f(version, data, bytes, collision, movement, ladder_area);
    f.create(0, 3);
    check(f.walking.begin()->advance() && f.control.moved_this_tick == 1 &&
              f.leader.collision_actor && f.leader.walking_style == 7,
          "Actual ladder permission failed to override actor collision");
  }
  {
    auto transition = content(version, 3, 0x200);
    auto ladder_map = terrain(0x10);
    auto ladder_area = ladder_map.area();
    Fixture f(version, data, transition, collision, movement, ladder_area);
    f.mushroom = {1, 77, 0};
    const auto xy = std::pair(f.leader.leader_x, f.leader.leader_y);
    auto op = f.walking.begin();
    check(!op->advance() && op->request() &&
              op->request()->kind == WorldDoorTransitionKind::Escalator,
          "Unimplemented transition did not remain explicit");
    const auto counter = f.actors.appearance_scene().movement_counter;
    for (unsigned i = 0; i < 20; ++i)
      check(!op->advance() && f.mushroom.timer == 76 &&
                f.actors.appearance_scene().movement_counter == counter &&
                xy == std::pair(f.leader.leader_x, f.leader.leader_y),
            "Pending transition replayed walking effects");
    op.reset();
    check(f.walking.failed() && f.doors.failed(),
          "Abandoned nested walking did not invalidate owners");
    rejects([&] { f.walking.begin(); }, "Failed walking restarted");
  }
  {
    Fixture f(version, data, bytes, collision, movement, area);
    party::State wrong(version == eb::GameVersion::US ? eb::GameVersion::JP
                                                      : eb::GameVersion::US);
    rejects(
        [&] {
          WorldWalking mixed(data, f.actors, f.enemies, f.leader, f.control,
                             f.formation, wrong, f.mushroom, f.prompt, f.input,
                             f.clock, f.navigation, f.queue, f.hotspots,
                             f.doors, collision, movement, area);
        },
        "Walking accepted a party from another region");
    f.leader.walking_style = 14;
    f.mushroom = {1, 1, 2};
    rejects([&] { f.walking.begin(); }, "Invalid style accepted");
    check(f.mushroom.timer == 1 && !f.walking.failed(),
          "Rejected begin mutated or poisoned world");
    f.leader.walking_style = 0;
    auto door = f.doors.begin({0, 0});
    rejects([&] { f.walking.begin(); },
            "Walking adopted another unfinished door");
    check(f.mushroom.timer == 1, "Conflicting owner changed input timer");
    check(door->advance(), "Independent simple door did not finish");
  }
}
} // namespace
int main() {
  try {
    run(eb::GameVersion::US);
    run(eb::GameVersion::JP);
    std::cout << "PASS native walking: " << checks << " checks\n";
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
