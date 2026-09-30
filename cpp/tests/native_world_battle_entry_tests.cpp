#include "native_sprite_fixture.hpp"
#include "native_world_battle_entry_fixture.hpp"
#include <iostream>
#include <stdexcept>

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
  check(rejected, "Invalid battle entry accepted");
}
GeneratedInputData make_angles(eb::GameVersion version) {
  std::vector<std::uint8_t> bytes(128);
  const auto put = [&](unsigned at, unsigned value) {
    bytes[at] = value;
    bytes[at + 1] = value >> 8;
  };
  const std::array<unsigned, 8> pads{0x800, 0x900, 0x100, 0x500,
                                     0x400, 0x600, 0x200, 0xa00};
  const std::array<unsigned, 13> bases{0x4000, 0x8000, 0,      0xc000, 0x8000,
                                       0xffff, 0,      0xffff, 0x4000, 0xc000,
                                       0xffff, 0xffff, 0};
  const std::array<unsigned, 16> thresholds{13,  38,   64,   92,  121, 153,
                                            190, 232,  282,  345, 427, 541,
                                            715, 1021, 1723, 5181};
  for (unsigned i = 0; i < pads.size(); ++i)
    put(i * 2, pads[i]);
  for (unsigned i = 0; i < bases.size(); ++i)
    put(16 + i * 2, bases[i]);
  for (unsigned i = 0; i < thresholds.size(); ++i)
    put(42 + i * 2, thresholds[i]);
  return GeneratedInputData(bytes, version, {0, 16, 42});
}
std::shared_ptr<SpriteResources> make_sprites() {
  native_sprite_test::Fixture f;
  return std::make_shared<SpriteResources>(f.bytes, f.layout);
}
std::shared_ptr<EnemySpawnData> make_enemies() {
  auto data = std::make_shared<EnemySpawnData>();
  data->enemies = {{1, 0, 7, 0}, {1, 0, 7, 0}, {1, 0, 7, 0}};
  data->butterfly_enemy = 1;
  data->butterfly_battle = 0;
  data->battles = {
      {{1, 1}}, {{2, 0}}, {{1, 0}}, {{0, 2}, {2, 0}, {1, 2}, {1, 1}}};
  data->encounters = {{},
                      {0, {100, 0}, std::vector<unsigned>(8, 1)},
                      {0, {100, 0}, std::vector<unsigned>(8, 2)},
                      {0, {100, 0}, std::vector<unsigned>(8, 3)}};
  return data;
}
WorldCollision make_collision() {
  movement_test::Fixture f;
  return WorldCollision(f.bytes, f.collision_layout);
}
WorldSwirlData definitions() {
  return {{{{0, 0, 0},
            {2, 0, 23},
            {4, 23, 15},
            {3, 38, 22},
            {4, 60, 21},
            {2, 81, 28},
            {3, 109, 17}}}};
}
struct Fixture : battle_entry_test::Fixture {
  explicit Fixture(eb::GameVersion version)
      : battle_entry_test::Fixture(version, make_sprites(),
                                   std::make_shared<ActionScriptData>(
                                       std::vector<std::uint8_t>{0x09}, 0,
                                       std::vector<std::uint32_t>{0}),
                                   make_angles(version), make_enemies(),
                                   make_collision(), definitions()) {}
};
void run(eb::GameVersion version, unsigned extra, bool farthest) {
  Fixture f(version);
  auto ids = f.spawn(1, 0);
  for (unsigned i = 0; i < extra; ++i) {
    auto other = f.spawn(2, 0, i + 1);
    ids.insert(ids.end(), other.begin(), other.end());
  }
  f.arrange(ids, farthest);
  f.state.pathfinding_target.reset(); // Direction8 must skip this unused input.
  f.music_work = [&] {
    check(f.state.group == 1 &&
              f.state.initiative == WorldBattleInitiative::PartyFirst &&
              !f.maintenance.enemy_touched &&
              f.actors.appearance_scene().battle_swirl_ticks == 120 &&
              f.state.roster.size() == 3 && f.paths.candidates().empty() &&
              f.actors.actor(ids[0]).behavior.path_state == 0,
          "Music did not occur after initiative/countdown and before candidate "
          "publication");
  };
  f.entry->enter();
  check(!f.entry->failed() && !f.entry->busy() && f.music.size() == 1 &&
            f.music[0].track == 176,
        "Entry did not complete its actual swirl once");
  check(f.colors[0] == f.backup && f.swirl.frames_left == 23 &&
            f.swirl.padding == 30 && f.encounter.swirl_active() &&
            f.actors.appearance_scene().battle_swirl_ticks == 120,
        "Entry omitted actual swirl state or advanced the countdown");
  check(f.state.roster == std::vector<std::uint16_t>{0} &&
            f.state.remaining[0] == WorldEncounterGroup{0, 2} &&
            f.state.remaining[1] == WorldEncounterGroup{} &&
            f.actors.actor(ids[0]).behavior.path_state == 0,
        "Touched roster or original group count differs");
  unsigned positive = 0, active = 0;
  for (const auto &candidate : f.paths.candidates()) {
    positive += candidate.raw_length > 0;
    active += f.actors.actor(candidate.actor).behavior.path_state == 0xffff;
    check(f.paths.path(candidate.actor) &&
              !f.paths.path(candidate.actor)->points.empty(),
          "Entry replaced real paths with dummy candidate costs");
  }
  check(positive == (farthest ? ids.size() : 2) && active + 1 == positive,
        "Pruning did not execute exactly excess attempts or lost touched "
        "protection");
  check(f.actors.authored_pause(22) == AuthoredActorPause{true, true} &&
            f.actors.authored_sprite_hidden(21) &&
            !f.actors.actor(ids[0]).tick_callback_enabled &&
            !f.actors.actor(f.player).tick_callback_enabled,
        "Final role scan skipped vacant state or incorrectly resumed "
        "touched/party");
  check(f.actors.ticks() == 0 &&
            f.entry->uses(f.actors, f.enemies, f.leader, f.formation, f.party,
                          f.maintenance, f.state),
        "Entry advanced ticks or lost owner identity");
}
void facing(eb::GameVersion version) {
  for (unsigned enemy = 0; enemy < 9; ++enemy)
    for (unsigned leader = 0; leader < 8; ++leader) {
      Fixture f(version);
      auto ids = f.spawn(1, 0);
      f.arrange(ids);
      f.actors.actor(ids[0]).behavior.moving_direction = enemy;
      f.leader.leader_direction = leader;
      f.entry->enter();
      const auto aligned = [](unsigned value) {
        return value == 5 || value == 6 || value == 7;
      };
      const auto expected =
          enemy == 8 ? WorldBattleInitiative::PartyFirst
                     : (!aligned(enemy) && !aligned(leader)
                            ? WorldBattleInitiative::PartyFirst
                            : (aligned(enemy) && aligned(leader)
                                   ? WorldBattleInitiative::EnemiesFirst
                                   : WorldBattleInitiative::Normal));
      check(f.state.initiative == expected,
            "Contact-target-facing initiative differs");
    }
}
void failures(eb::GameVersion version) {
  Fixture f(version);
  rejects([&] { f.entry->enter(); });
  check(!f.entry->failed() && f.maintenance.enemy_touched == 0x1234,
        "Missing touched input partially published");
  auto ids = f.spawn(1, 0);
  f.arrange(ids);
  f.actors.clear_enemies(f.enemies);
  check(f.enemies.uses(f.actors),
        "Lease test lost durable enemy provenance");
  rejects([&] { f.entry->enter(); });
  rejects([&] {
    WorldBattleEntry unbound(f.angles, f.actors, f.enemies, f.leader,
                            f.formation, f.party, f.maintenance, f.state,
                            f.encounter, f.paths);
  });
  check(!f.entry->failed() && f.maintenance.enemy_touched == 0x1234 &&
            f.music.empty(),
        "Lost active enemy lease partially published battle entry");
  f.actors.bind_enemies(f.enemies);
  f.actors.actor(ids[0]).behavior.moving_direction = 0;
  f.state.pathfinding_target.reset();
  rejects([&] { f.entry->enter(); });
  check(!f.entry->failed() && f.maintenance.enemy_touched == 0x1234,
        "Missing used target partially published");
  f.state.pathfinding_target = AuthoredRoleRef{25};
  f.music_work = [&] { f.entry->enter(); };
  rejects([&] { f.entry->enter(); });
  check(f.entry->failed() && f.encounter.failed() && !f.entry->busy() &&
            !f.maintenance.enemy_touched,
        "Nested entry did not terminally preserve its consumed prefix");
  rejects([&] { f.entry->enter(); });
  Fixture blocked(version);
  auto blocked_ids = blocked.spawn(1, 0);
  auto extras = blocked.spawn(2, 0, 1);
  blocked_ids.insert(blocked_ids.end(), extras.begin(), extras.end());
  blocked.arrange(blocked_ids);
  std::array<std::uint8_t, 16> terrain;
  terrain.fill(0xc0);
  blocked.terrain.pattern(terrain);
  blocked.area = blocked.terrain.area();
  rejects([&] { blocked.entry->enter(); });
  check(blocked.entry->failed() && blocked.state.roster.empty(),
        "Invalid source FFFF pruning record was silently normalized");
}
} // namespace
int main() {
  try {
    for (auto region : {eb::GameVersion::US, eb::GameVersion::JP}) {
      for (unsigned extra : {0u, 1u, 2u})
        for (bool farthest : {false, true})
          run(region, extra, farthest);
      facing(region);
      failures(region);
    }
    std::cout << "PASS native battle entry: " << checks << " checks\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
