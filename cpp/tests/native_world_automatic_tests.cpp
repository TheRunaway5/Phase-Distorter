#include "eb/native/actor_creation.hpp"
#include "eb/native/world_automatic.hpp"
#include "eb/native/world_door_transitions.hpp"
#include "native_world_walking_fixture.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
unsigned checks{};
void check(bool okay, const char *why) {
  ++checks;
  if (!okay)
    throw std::runtime_error(why);
}
template <class F> void rejects(F action, const char *why) {
  bool rejected = false;
  try {
    action();
  } catch (const std::exception &) {
    rejected = true;
  }
  check(rejected, why);
}
struct Fixture {
  std::vector<std::uint8_t> bytes;
  WalkingData data;
  movement_test::Fixture map;
  WorldCollision collision;
  WorldMovement movement;
  WorldMapArea area;
  walking_test::Fixture world;
  PartyTrail trail;
  WorldDoorTransitionState transitions;
  WorldAutomatic automatic;
  explicit Fixture(eb::GameVersion version)
      : bytes(walking_test::content(version)), data(bytes, version),
        map(walking_test::terrain(0)),
        collision(map.bytes, map.collision_layout),
        movement(map.bytes, map.movement_layout), area(map.area()),
        world(version, data, bytes, collision, movement, area),
        automatic(data, world.actors, world.enemies, world.leader,
                  world.control, transitions, world.formation, trail,
                  world.maintenance, world.input, world.queue) {
    world.formation.current_leader_role = 24;
  }
  void tick() {
    auto op = automatic.begin();
    check(op->advance() && op->complete() && !automatic.busy(),
          "Expected automatic control tick to complete");
    const auto x = world.leader.leader_x;
    const auto timer = world.control.automatic_ticks;
    check(op->advance() && world.leader.leader_x == x &&
              world.control.automatic_ticks == timer,
          "Completed automatic tick replayed its effects");
  }
};
void timed(eb::GameVersion version) {
  Fixture f(version);
  auto &w = f.world;
  for (unsigned style = 0; style < 14; ++style)
    for (unsigned direction = 0; direction < 8; ++direction)
      for (unsigned timer : {0u, 1u, 2u, 0xffffu}) {
        w.control.automatic_mode = 0x101;
        w.control.automatic_ticks = timer;
        w.control.automatic_restore_style = 0xabcd;
        w.control.x_fraction = 0xffff;
        w.control.y_fraction = 1;
        w.leader.leader_x = 0xffff;
        w.leader.leader_y = 0;
        w.leader.leader_direction = direction;
        w.leader.walking_style = style;
        f.transitions.automatic_direction = (direction + 3) & 7;
        const auto actual = CollisionDirection(
            style == 13 ? f.transitions.automatic_direction : direction);
        const auto x = 0xffffffffu + f.data.raw_delta(0, style, actual);
        const auto y = 1u + f.data.raw_delta(1, style, actual);
        w.maintenance.enemy_touched = 9;
        w.actors.appearance_scene().battle_swirl_ticks = 7;
        w.actors.appearance_scene().movement_counter = 0x5678;
        const auto input = w.input;
        f.tick();
        check(w.leader.leader_x == x >> 16 &&
                  w.control.x_fraction == std::uint16_t(x) &&
                  w.leader.leader_y == y >> 16 &&
                  w.control.y_fraction == std::uint16_t(y),
              "Timed raw fixed-point displacement changed");
        check(w.control.automatic_ticks == std::uint16_t(timer - 1) &&
                  w.control.automatic_mode == (timer == 1 ? 0 : 0x101) &&
                  w.leader.walking_style == (timer == 1 ? 0xabcd : style) &&
                  w.control.moved_this_tick == 1,
              "Automatic countdown wrap, mode clear or full-word style "
              "restoration changed");
        check(w.input.state == input.state && w.actors.ticks() == 0 &&
                  w.clock.frame_counter == 0 &&
                  w.maintenance.enemy_touched == 9 &&
                  w.actors.appearance_scene().battle_swirl_ticks == 7 &&
                  w.actors.appearance_scene().movement_counter == 0x5678,
              "Automatic displacement ran unrelated frame/gate work");
      }
  for (unsigned mode : {0u, 4u, 0xffu, 0x100u, 0xffffu}) {
    w.control.automatic_mode = mode;
    w.control.automatic_ticks = 7;
    w.control.moved_this_tick = 9;
    w.leader.walking_style = 0xffff;
    const auto x = w.leader.leader_x;
    f.tick();
    check(w.control.automatic_mode == mode && w.control.automatic_ticks == 7 &&
              w.control.moved_this_tick == 9 && w.leader.leader_x == x,
          "Unknown low-byte automatic mode did not remain a no-op");
  }
}
void focused(eb::GameVersion version) {
  Fixture f(version);
  auto &w = f.world;
  const auto late = w.create(10, 42);
  const auto early = w.create(2, 44);
  const auto native = w.create(30, 43);
  check(f.automatic.start_follow_npc(42) == CameraTarget{AuthoredRoleRef(10)} &&
            w.control.camera_focus == CameraTarget{AuthoredRoleRef(10)} &&
            w.control.automatic_mode == 2,
        "NPC focus did not resolve the actual identity");
  check(f.automatic.start_follow_sprite(1) == CameraTarget{AuthoredRoleRef(2)},
        "Sprite focus used creation order instead of source role order");
  check(f.automatic.start_follow_npc(43) == CameraTarget{native},
        "Native untagged actor could not be selected");
  w.actors.actor(late).action().alive = false;
  w.actors.erase(early);
  check(f.automatic.start_follow_npc(42) == CameraTarget{AuthoredRoleRef(10)},
        "Owned focus lookup invented a source script-alive gate");
  w.actors.actor(late).action().alive = true;
  auto &actor = w.actors.actor(late);
  actor.action().position = {0x12345678, 0xfedcabcd, 0x87654321};
  actor.behavior.direction = 7;
  w.control.automatic_mode = 0x102;
  w.leader.walking_style = 0xffff; // Mode2 does not read movement tables.
  f.tick();
  check(w.leader.leader_x == 0x1234 && w.control.x_fraction == 0x5678 &&
            w.leader.leader_y == 0xfedc && w.control.y_fraction == 0xabcd &&
            w.leader.leader_direction == 7 && w.control.moved_this_tick == 1,
        "Focused actor full coordinates were not copied");
  actor.behavior.direction = 1;
  f.tick();
  check(w.control.moved_this_tick == 0 && w.leader.leader_direction == 1,
        "Facing-only change was treated as camera movement");
  ++actor.action().position[0];
  f.tick();
  check(w.control.moved_this_tick == 1 && w.control.x_fraction == 0x5679,
        "Fraction-only camera motion was lost");
  w.control.automatic_ticks = 77;
  f.automatic.stop_follow();
  check(w.control.automatic_mode == 0 && w.control.moved_this_tick == 0 &&
            w.control.camera_focus == CameraTarget{AuthoredRoleRef(10)} &&
            w.control.automatic_ticks == 77,
        "Stop discarded retained focus or other control state");
  w.enemy_content->battles.push_back({{1, 0}});
  w.enemy_content->encounters[1].choices.assign(8, 1);
  const auto enemy = w.spawn_enemy();
  check(w.enemies.actors()[0].battle == 1 &&
            w.enemies.actors()[0].spawn_cell == 0,
        "Enemy identity fixture does not distinguish battle group and spawn "
        "cell");
  check(!f.automatic.start_follow_npc(0x8000),
        "Enemy focus incorrectly selected spawn-cell identity");
  check(
      f.automatic.start_follow_npc(0x8001) ==
          CameraTarget{AuthoredRoleRef(*w.actors.actor(enemy).authored_role())},
      "Actual enemy encounter focus identity was not resolved");
  w.enemies.release_appearance(w.actors, enemy);
  check(!f.automatic.start_follow_npc(0x8001) && !w.control.camera_focus &&
            w.control.automatic_mode == 2,
        "Released encounter identity remained selectable");
  const auto x = w.leader.leader_x;
  auto op = f.automatic.begin();
  rejects([&] { op->advance(); },
          "Missing focus read fabricated actor coordinates");
  check(f.automatic.failed() && w.leader.leader_x == x,
        "Missing focus failure changed leader position");

  Fixture lost(version);
  const auto host = lost.world.create(30, 99);
  check(lost.automatic.start_follow_npc(99) == CameraTarget{host},
        "Host-only focus did not keep strict identity");
  lost.world.actors.erase(host);
  auto missing = lost.automatic.begin();
  rejects([&] { missing->advance(); },
          "Deleted focus identity was silently rebound");
}
void facing(eb::GameVersion version) {
  Fixture f(version);
  auto &w = f.world;
  for (unsigned role = 25; role < 30; ++role)
    w.create(role, role);
  for (unsigned i = 0; i < 6; ++i) {
    auto &actor = w.actors.actor(*w.actors.actor_for_role(24 + i));
    actor.action().variables[1] = i;
    actor.action().animation = 2;
    actor.behavior.surface_flags = (i % 3) * 4;
    actor.behavior.direction = 6;
    actor.appearance.select_eight(6, 2, actor.behavior.surface_flags);
    w.formation.trail_cursors[i] = i + 10;
    f.trail.points[i + 10].walking_style = i == 1 ? 7 : i == 2 ? 8 : 0;
  }
  auto &dead = w.actors.actor(*w.actors.actor_for_role(29));
  dead.action().alive = false;
  w.control.automatic_mode = 3;
  w.control.direction_interval_ticks = 3;
  w.control.moved_this_tick = 7;
  w.input.state[0] = 0x100;
  f.tick();
  check(w.control.direction_interval_ticks == 2 &&
            w.leader.leader_direction == 2 && w.control.moved_this_tick == 7,
        "Facing interval changed movement or missed its countdown");
  for (unsigned i = 0; i < 6; ++i) {
    const auto &actor = w.actors.actor(*w.actors.actor_for_role(24 + i));
    const auto direction = i == 1 || i == 2 || i == 5 ? 6u : 2u;
    check(actor.behavior.direction == direction &&
              actor.appearance.displayed()->pose ==
                  eight_direction_pose(direction, 2) &&
              actor.action().animation == 2 &&
              actor.appearance.fingerprint() == 0xffff,
          "Facing interval changed ladder/rope/dead actor or skipped actual "
          "current-frame refresh");
  }
  const auto previous = w.leader.leader_direction;
  w.queued.pending = 1;
  w.input.state[0] = 0x800;
  w.control.direction_interval_ticks = 0;
  f.tick();
  check(w.control.direction_interval_ticks == 0xffff &&
            w.leader.leader_direction == previous,
        "Zero interval counter did not wrap or pending interactions failed to "
        "suppress input");
  w.queued.pending = 0;
  w.control.direction_interval_ticks = 1;
  w.control.direction_interval_previous_mode = 0x102;
  const auto x = w.leader.leader_x;
  auto expiry = f.automatic.begin();
  check(!expiry->advance() &&
            expiry->request() == WorldAutomaticService::BattleEntry &&
            w.control.automatic_mode == 0x102 &&
            w.control.direction_interval_ticks == 0,
        "Mode3 expiry did not retain actual battle-entry continuation after "
        "restoring mode");
  for (unsigned i = 0; i < 8; ++i)
    check(!expiry->advance() && w.control.direction_interval_ticks == 0 &&
              w.leader.leader_x == x && w.actors.ticks() == 0 &&
              w.leader.leader_direction == previous,
          "Battle-entry wait replayed mode, countdown or actor work");
  rejects([&] { expiry->respond_sound(); },
          "Sound acknowledgment skipped actual battle-entry work");
  expiry.reset();
  check(f.automatic.failed(),
        "Abandonment of battle-entry continuation did not invalidate owner");
}
void role_lifetimes(eb::GameVersion version) {
  Fixture f(version);
  auto &w = f.world;
  rejects([] { (void)AuthoredRoleRef(30); }, "Invalid role was accepted");
  rejects([] { (void)AuthoredRoleRef(0xffff); },
          "No-match sentinel became an authored role");
  check(f.automatic.start_follow_sprite(0) ==
                CameraTarget{AuthoredRoleRef(0)} &&
            f.automatic.start_follow_npc(0xffff) ==
                CameraTarget{AuthoredRoleRef(0)},
        "Cold role selectors lost pristine sprite0 or absent NPCFFFF");
  f.tick();
  check(w.leader.leader_x == 0 && w.leader.leader_y == 0 &&
            w.control.x_fraction == 0 && w.leader.leader_direction == 0,
        "Pristine authored role did not expose its native zero pose");
  const auto first = w.create(7, 73);
  auto &actor = w.actors.actor(first);
  actor.action().position = {0x1234abcdu, 0xfedc5678u, 0x80002468u};
  actor.behavior.direction = 5;
  check(f.automatic.start_follow_npc(73) == CameraTarget{AuthoredRoleRef(7)},
        "Created role did not bind a persistent camera target");
  f.tick();
  check(w.actors.release_appearance(first), "Appearance was not released");
  f.tick();
  check(w.leader.leader_x == 0x1234 && w.control.x_fraction == 0xabcd &&
            w.leader.leader_direction == 5 && !w.control.moved_this_tick,
        "Appearance release lost camera pose or changed movement");
  check(!f.automatic.start_follow_npc(73) &&
            f.automatic.start_follow_sprite(0xffff) ==
                CameraTarget{AuthoredRoleRef(7)},
        "Released selector was confused with a true search miss");
  check(w.actors.erase(first), "Full actor removal failed");
  f.tick();
  w.actors.set_authored_position(7, {0x1234abceu, 0xfedc5678u, 0});
  w.actors.set_authored_direction(7, 0x1234);
  f.tick();
  check(w.control.x_fraction == 0xabce && w.control.moved_this_tick == 1 &&
            w.leader.leader_direction == 0x1234,
        "Vacant-role fraction/direction writes did not reach camera focus");
  f.tick();
  check(!w.control.moved_this_tick &&
            w.control.camera_focus == CameraTarget{AuthoredRoleRef(7)},
        "Retained focus changed without another selector");
  const auto replacement = w.create(7, 74);
  check(replacement != first, "Replacement reused a host identity");
  f.tick();
  check(w.leader.leader_x == 128 && w.leader.leader_y == 80 &&
            w.leader.leader_direction == 2 && !w.control.x_fraction,
        "Authored focus did not resolve the replacement's actual pose");
  check(w.actors.retire(replacement) && !w.actors.retire(replacement),
        "Script retirement failed or replayed effects");
  check(f.automatic.start_follow_npc(74) == CameraTarget{AuthoredRoleRef(7)},
        "Script-only retirement discarded the authored selector");
  f.tick();
  PreparedActorState prepared;
  prepared.x = 0x8001;
  prepared.y = 0xfffe;
  prepared.height = 0x4321;
  prepared.direction = 6; // INIT_ENTITY itself retains direction2.
  const auto script = w.actors.create_authored_script(0, prepared, {7, 8});
  check(script.has_value(), "Vacant role rejected script-only creation");
  f.tick();
  check(
      w.leader.leader_x == 0x8001 && w.leader.leader_y == 0xfffe &&
          w.control.x_fraction == 0x8000 && w.control.y_fraction == 0x8000 &&
          w.leader.leader_direction == 2 &&
          f.automatic.start_follow_npc(74) == CameraTarget{AuthoredRoleRef(7)},
      "Bare script reuse did not retain selectors/direction or set fractions");
  w.actors.reset_scripts();
  const auto reset_script =
      *w.actors.create_authored_script(0, prepared, {7, 8});
  check(!w.actors.actor(reset_script).has_appearance() &&
            w.actors.actor_for_npc(74) == reset_script,
        "Reset/bare reuse lost actual NPC ownership or restored reset artwork");
  check(w.actors.release_appearance(reset_script) &&
            !w.actors.actor_for_npc(74) &&
            !w.actors.actor(reset_script).npc() &&
            w.actors.authored_npc_selector(7) == 0xffff,
        "Releasing a graphically reset actor retained its ordinary NPC owner");
  w.actors.set_authored_path_state(3, 0x1234);
  w.actors.set_authored_pause(3, false, false);
  w.actors.set_authored_sprite_hidden(3, true);
  const auto vacant = *w.actors.create_authored_script(0, {}, {3, 4});
  check(w.actors.authored_behavior(3).path_state == 0x1234 &&
            w.actors.authored_pause(3) == AuthoredActorPause{} &&
            w.actors.authored_sprite_hidden(3) &&
            !w.actors.actor(vacant).has_appearance(),
        "Bare INIT lost dormant path/hide writes or kept paused callbacks");
  w.actors.reset_scripts();
  check(!w.actors.authored_sprite_hidden(3) &&
            w.actors.authored_behavior(3).path_state == 0x1234,
        "Script reset retained hide flags or reset unrelated path state");

  Fixture absent(version);
  for (unsigned role = 0; role < 30; ++role) {
    if (const auto old = absent.world.actors.actor_for_role(role))
      absent.world.actors.erase(*old);
    absent.world.create(role, 100 + role);
  }
  check(!absent.automatic.start_follow_npc(0xffff) &&
            !absent.automatic.start_follow_sprite(0xffff),
        "A full nonmatching role set invented a sentinel match");
  const auto x = absent.world.leader.leader_x;
  auto bad = absent.automatic.begin();
  rejects([&] { bad->advance(); }, "True no-match read was silently accepted");
  check(absent.automatic.failed() && absent.world.leader.leader_x == x,
        "Failed source read changed the native leader");
}
void start_and_lifecycle(eb::GameVersion version) {
  Fixture f(version);
  auto &w = f.world;
  w.control.automatic_mode = 0x1234;
  w.maintenance.overworld_status_suppression = 77;
  auto start = f.automatic.begin_direction_interval();
  check(!start->advance() &&
            start->request() == WorldAutomaticService::ScriptSound &&
            start->sound() ==
                dialogue::ScriptSoundRequest{
                    dialogue::ScriptSoundKind::DirectDriverCommand, 2, 2},
        "Interval start failed to request the actual audio driver command");
  check(w.control.direction_interval_ticks == 12 &&
            w.control.direction_interval_previous_mode == 0x1234 &&
            w.control.automatic_mode == 3 &&
            w.maintenance.overworld_status_suppression == 77,
        "Interval start lost source order around audio completion");
  for (unsigned i = 0; i < 5; ++i)
    check(!start->advance() && w.control.direction_interval_ticks == 12 &&
              w.maintenance.overworld_status_suppression == 77,
          "Pending sound consumed time or later status effects");
  rejects([&] { f.automatic.stop_follow(); },
          "Control command mutated an active automatic operation");
  start->respond_sound();
  check(start->advance() && w.maintenance.overworld_status_suppression == 1 &&
            !f.automatic.busy(),
        "Executed audio command did not release the final status suppression "
        "write");
  rejects([&] { start->respond_sound(); }, "Sound command completed twice");
  check(f.automatic.uses(w.actors) && f.automatic.uses(w.actors, w.control),
        "Automatic owner identity query failed");
  Fixture foreign(version);
  check(!f.automatic.uses(foreign.world.actors) &&
            !f.automatic.uses(w.actors, foreign.world.control),
        "Automatic control accepted foreign owners");
  auto abandoned = f.automatic.begin();
  abandoned.reset();
  check(f.automatic.failed(), "Abandoned automatic operation stayed healthy");
  rejects([&] { f.automatic.start_follow_npc(1); },
          "Failed automatic owner accepted a selector");
}
} // namespace
int main() {
  try {
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
      timed(version);
      focused(version);
      role_lifetimes(version);
      facing(version);
      start_and_lifecycle(version);
    }
    std::cout << "Native automatic checks: " << checks << '\n';
    return 0;
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
