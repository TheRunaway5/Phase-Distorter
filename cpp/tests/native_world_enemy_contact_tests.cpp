#include "native_world_enemy_contact_fixture.hpp"
#include "native_world_walking_fixture.hpp"
#include <iostream>

namespace {
using namespace eb::native;
unsigned checks{};
void check(bool okay, const char *message) {
  ++checks;
  if (!okay)
    throw std::runtime_error(message);
}
template <class F> void rejects(F fn) {
  bool rejected{};
  try {
    fn();
  } catch (const std::exception &) {
    rejected = true;
  }
  check(rejected, "Invalid contact request accepted");
}
std::shared_ptr<EnemySpawnData> make_enemies() {
  auto data = walking_test::empty_enemies();
  data->butterfly_enemy = 1;
  data->enemies = {{1, 0, 4, 0}, {1, 0, 4, 0}, {1, 0, 1, 0}};
  data->battles = {{{2, 0}}, {{1, 1}}, {{1, 2}}};
  data->encounters.push_back({0, {100, 0}, std::vector<unsigned>(8, 1)});
  data->encounters.push_back({0, {100, 0}, std::vector<unsigned>(8, 2)});
  return data;
}
WorldCollision geometry() {
  movement_test::Fixture f;
  return WorldCollision(f.bytes, f.collision_layout);
}
struct Fixture : enemy_contact_test::Fixture {
  explicit Fixture(eb::GameVersion version)
      : enemy_contact_test::Fixture(
            version, walking_test::content(version),
            interaction_test_assets::make_sprites(),
            std::make_shared<ActionScriptData>(std::vector<std::uint8_t>{9}, 0,
                                               std::vector<std::uint32_t>{0}),
            make_enemies(), geometry()) {}
};
void initial(eb::GameVersion version) {
  Fixture f(version);
  const auto ids = f.spawn();
  const auto id = ids[0];
  f.leader.collision_actor = id;
  f.control.automatic_mode = 0x102;
  f.control.direction_interval_ticks = 0xabcd;
  f.control.direction_interval_previous_mode = 0x1234;
  f.formation.current_leader_role = 25;
  const auto palette = f.colors;
  f.sound_work = [&] {
    check(f.contact->busy(), "Sound did not run inside contact operation");
    check(f.maintenance.enemy_touched == 1 && f.state.touched == id &&
              f.state.pathfinding_target == CameraTarget{AuthoredRoleRef{24}},
          "Sound preceded actual contact publication");
    check(f.palette_backup == palette && f.colors != palette &&
              f.visual.palette_dirty,
          "Sound preceded contact palette work");
    check(f.control.automatic_mode == 3 &&
              f.control.direction_interval_ticks == 12 &&
              f.control.direction_interval_previous_mode == 0x102 &&
              !f.maintenance.overworld_status_suppression,
          "Interval state or post-sound suppression order changed");
    for (unsigned role = 0; role < 30; ++role) {
      const auto pause = f.actors.authored_pause(role);
      check(role == 23 ? (pause.scripts_and_physics_enabled &&
                          pause.tick_callback_enabled)
                       : (!pause.scripts_and_physics_enabled &&
                          !pause.tick_callback_enabled),
            "Contact pause did not include retained roles except23");
    }
    rejects([&] { f.contact->contact(id); });
  };
  check(f.contact->contact(id), "First enemy contact failed");
  check(!f.contact->failed() && !f.contact->busy() && f.sounds.size() == 1 &&
            f.sounds[0].kind ==
                dialogue::ScriptSoundKind::DirectDriverCommand &&
            f.sounds[0].value == 2,
        "Actual ordered sound intent changed");
  check(f.control.automatic_mode == 3 &&
            f.control.direction_interval_ticks == 12 &&
            f.control.direction_interval_previous_mode == 0x102,
        "Actual direction interval was not installed");
  check(f.actors.ticks() == 0 && f.state.roster.empty() &&
            f.actors.appearance_scene().battle_swirl_ticks == 0,
        "Contact advanced a frame or fabricated battle entry");
  check(f.contact->active(),
        "Touched predicate did not observe actual maintenance owner");
  check(!f.contact->contact(id) &&
            f.actors.actor(id).behavior.collision_object == -32768 &&
            f.sounds.size() == 1,
        "Repeated pending contact restarted interval");
}
void gates(eb::GameVersion version) {
  for (unsigned gate = 0; gate < 7; ++gate) {
    Fixture f(version);
    const auto id = f.spawn()[0];
    f.leader.collision_actor = id;
    if (gate == 0)
      f.control.encounter.mode = 1;
    if (gate == 1)
      f.navigation.using_door = 1;
    if (gate == 2)
      f.control.automatic_mode = 2;
    if (gate == 3)
      f.leader.movement_flags = 2;
    if (gate == 4)
      f.leader.walking_style = 12;
    if (gate == 5)
      f.actors.appearance_scene().intangibility_ticks = 1;
    if (gate == 6)
      f.leader.collision_actor.reset();
    const auto colors = f.colors;
    check(!f.contact->contact(id) && f.colors == colors &&
              !f.maintenance.enemy_touched && !f.state.touched &&
              f.sounds.empty(),
          "First contact gate changed state");
    if (gate >= 2 && gate <= 5) {
      f.state.touched = id;
      f.actors.appearance_scene().battle_swirl_ticks = 20;
      check(f.contact->contact(id) &&
                f.actors.appearance_scene().battle_swirl_ticks == 20,
            "Touched swirl actor failed to bypass movement gates");
    }
  }
  Fixture f(version);
  const auto id = f.spawn(2)[0];
  f.leader.collision_actor = id;
  const auto colors = f.colors;
  check(f.contact->contact(id) && f.colors == colors && !f.state.touched &&
            f.sounds.empty(),
        "Magic butterfly started an enemy encounter");
  f.leader.collision_actor.reset();
  for (int role : {-32768, -1, 0, 22, 23, 24, 29, 30, 32767, 32768}) {
    f.actors.actor(id).behavior.collision_object = role;
    check(f.contact->collided(id) == (role >= 23 && role <= 32767),
          "Collision predicate altered source word range");
  }
  f.leader.collision_actor = id;
  f.leader.movement_flags = 2;
  check(!f.contact->collided(id),
        "Movement flag failed to precede leader collision match");
}
void arrivals(eb::GameVersion version) {
  for (bool active : {false, true})
    for (bool wrapping : {false, true}) {
      Fixture f(version);
      const auto ids = f.spawn();
      f.state.touched = ids[0];
      f.actors.appearance_scene().battle_swirl_ticks = 120;
      f.swirl.update_in = active ? 1 : 0;
      f.swirl.padding = 5;
      f.state.remaining = {WorldEncounterGroup{0, 1},
                           {0, 1},
                           {1, std::uint16_t(wrapping ? 0xffffu : 0u)},
                           {2, std::uint16_t(wrapping ? 1u : 0u)}};
      f.state.roster = {9};
      check(f.contact->contact(ids[1]),
            "Arrival without installed route was not collected");
      check(f.state.roster == std::vector<std::uint16_t>{9, 0, 0} &&
                f.state.remaining[0].count == 0 &&
                f.state.remaining[1].count == 0,
            "Duplicate authored group entries did not each collect arrival");
      check(f.actors.appearance_scene().battle_swirl_ticks ==
                (active ? 120 : 1),
            "Wrapped remaining sum or actual swirl gate changed");
      check(f.sounds.empty() && !f.visual.palette_dirty &&
                f.actors.actor(ids[1]).behavior.collision_object == -32768,
            "Arrival replayed initial effects");
    }
  Fixture f(version);
  const auto ids = f.spawn();
  for (unsigned i = 0; i < ids.size(); ++i) {
    auto &actor = f.actors.actor(ids[i]);
    actor.behavior.path_state = 0xffff;
    actor.action().position = {std::uint32_t(416 + i * 24) << 16, 384u << 16,
                               0};
  }
  check(f.paths.find_to_party() > 0 && f.paths.remaining(ids[1]) > 0,
        "Arrival route fixture has no real path");
  f.state.touched = ids[0];
  f.actors.appearance_scene().battle_swirl_ticks = 120;
  f.state.remaining[0] = {0, 2};
  check(!f.contact->contact(ids[1]) && f.state.remaining[0].count == 2,
        "Actor with remaining path bypassed collision prematurely");
  f.actors.actor(ids[1]).behavior.collision_object = 25;
  check(f.contact->contact(ids[1]) && f.state.remaining[0].count == 1,
        "Actual party collision did not collect moving actor");
}
void failures(eb::GameVersion version) {
  Fixture f(version);
  const auto id = f.spawn()[0];
  f.leader.collision_actor = id;
  f.sound_work = [] {
    throw std::runtime_error("Audio adapter rejected command");
  };
  rejects([&] { f.contact->contact(id); });
  check(f.contact->failed() && f.automatic.failed() &&
            f.maintenance.enemy_touched == 1 && f.state.touched == id &&
            f.control.automatic_mode == 3 &&
            !f.maintenance.overworld_status_suppression,
        "Failed sound was acknowledged or earlier source writes rolled back");
  rejects([&] { f.contact->contact(id); });
  Fixture other(version);
  const auto foreign = other.spawn()[0];
  other.actors.clear_enemies(other.enemies);
  rejects([&] { other.contact->contact(foreign); });
}
void obstacles(eb::GameVersion version) {
  Fixture f(version);
  const auto id = f.spawn(3)[0];
  auto &actor = f.actors.actor(id);
  actor.action().position = {384u << 16, 384u << 16, 0};
  actor.action().velocity = {1u << 16, 0, 0};
  for (const bool vertical : {false, true}) {
    actor.behavior.obstacle_flags = 0x1234;
    const auto result = vertical ? f.contact->prepare_vertical_obstacles(id)
                                 : f.contact->prepare_directional_obstacles(id);
    check(result == 0x80 && actor.behavior.obstacle_flags == 0x80,
          "Custom enemy lacking ground permission was not blocked");
  }
  actor.action().velocity = {0x7fff, 0, 0};
  actor.behavior.obstacle_flags = 0x1234;
  check(f.contact->prepare_vertical_obstacles(id) == 0 &&
            actor.behavior.obstacle_flags == 0x1234,
        "Fraction-only preparation changed retained obstacles");
}
void palette(eb::GameVersion version) {
  Fixture f(version);
  for (unsigned base = 0; base < 32768; base += 128) {
    for (unsigned i = 0; i < 256; ++i) {
      const unsigned value = (base + i) & 32767;
      f.colors[i] = {std::uint8_t(value & 31), std::uint8_t((value >> 5) & 31),
                     std::uint8_t(value >> 10)};
    }
    const auto before = f.colors;
    f.contact->prepare_palette();
    check(f.palette_backup == before,
          "Contact did not retain entire original palette");
    for (unsigned i = 0; i < 256; ++i) {
      const auto c = before[i];
      const auto gray = std::uint8_t((c.red + c.green + c.blue) / 3);
      check(f.colors[i] == (i < 128 ? PaletteColor{gray, gray, gray} : c),
            "Contact RGB5 arithmetic or upper palette preservation changed");
    }
  }
}
} // namespace
int main() {
  try {
    for (auto v : {eb::GameVersion::US, eb::GameVersion::JP}) {
      initial(v);
      gates(v);
      arrivals(v);
      failures(v);
      obstacles(v);
      palette(v);
    }
    std::cout << "Native enemy contact checks: " << checks << '\n';
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
