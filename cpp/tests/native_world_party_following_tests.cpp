#include "eb/native/world_party_following.hpp"
#include "native_sprite_fixture.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
using namespace eb::native;
namespace {
void check(bool b, const char *s) {
  if (!b)
    throw std::runtime_error(s);
}
template <class F> void rejects(F f, const char *s) {
  try {
    f();
  } catch (const std::exception &) {
    return;
  }
  throw std::runtime_error(s);
}
struct Fixture {
  native_sprite_test::Fixture art;
  std::shared_ptr<SpriteResources> sprites;
  std::shared_ptr<const ActionScriptData> scripts =
      std::make_shared<ActionScriptData>(
          std::vector<std::uint8_t>{0x06, 1, 0x19, 0, 0, 0x42, 0xf0, 0x4e, 0xc0,
                                    0x08, 0x78, 0x4d, 0xc0, 0x06, 1, 0x19, 13,
                                    0},
          0, std::vector<std::uint32_t>{0, 5});
  std::unique_ptr<ActorWorld> world;
  party::State party{eb::GameVersion::US};
  WorldPartyState formation;
  PartyTrail trail;
  WorldControlState control;
  npcs::InteractionState leader;
  dialogue::PromptState prompt;
  WorldMaintenanceState maintenance;
  WorldPartyFollowingState state;
  WorldPartyFollowingData data;
  std::unique_ptr<WorldPartyFollowing> following;
  Fixture() {
    const auto old = art.bytes;
    art.bytes.resize(16384);
    std::copy(old.begin() + 32, old.begin() + 73, art.bytes.begin() + 3000);
    std::copy(old.begin() + 128, old.begin() + 150, art.bytes.begin() + 2008);
    std::copy(old.begin() + 512, old.begin() + 704, art.bytes.begin() + 4096);
    for (unsigned i = 0; i < 438; ++i)
      art.pointer(i * 4, 3000);
    art.pointer(2000, 2008);
    for (unsigned i = 0; i < 16; ++i)
      art.word(3009 + i * 2, 4096 | (i & 1));
    art.layout = {0, 3041, 2000, 438, 1};
    sprites = std::make_shared<SpriteResources>(art.bytes, art.layout);
    world = std::make_unique<ActorWorld>(sprites, scripts, eb::GameVersion::US);
    for (auto &g : data.graphics)
      for (unsigned i = 0; i < 8; ++i)
        g[i] = i + 1;
    following = std::make_unique<WorldPartyFollowing>(
        *world, party, formation, trail, control, leader, prompt, maintenance,
        leader.movement_flags, state, data);
    party.display_order = {1, 2, 3, 4, 5, 6};
    party.party_count = 6;
    for (unsigned i = 0; i < 6; ++i)
      formation.roles[i] = 24 + i;
    for (unsigned i = 0; i < 256; ++i)
      trail.points[i] = {
          std::uint16_t(100 + i), std::uint16_t(200 + i), 12, 0, 4, 0xabcd};
  }
  ActorId actor(unsigned record, unsigned script = 0) {
    WorldActorSpec s;
    s.script = script;
    s.sprite = 1;
    s.action.position = {0x1001234, 0x2005678, 0x300abcd};
    s.action.velocity = {0x12345678, 0x34567890, 0xfedcba98};
    s.action.variables[0] = record;
    s.action.variables[1] = record;
    s.action.variables[3] = 0x4321;
    s.action.variables[7] = 0xaaaa;
    return *world->create_authored(s, {24 + record, 25 + record});
  }
};
void selection() {
  Fixture f;
  const auto id = f.actor(0);
  auto &a = f.world->actor(id);
  f.formation.selected_styles[0] = 7;
  f.control.moved_this_tick = 1;
  const auto xyz = a.action().position, velocity = a.action().velocity;
  check(f.following->prepare(id) == 0 && a.appearance.sprite() == 1 &&
            a.action().variables[3] == 24 && a.action().variables[7] == 0xaaa &&
            a.behavior.direction == 4,
        "Preparation selection/flags differ");
  check(!a.appearance.displayed() && a.action().position == xyz &&
            a.action().velocity == velocity &&
            f.formation.trail_cursors[0] == 0,
        "Preparation latched or moved the actor");
  f.party.character(1).afflictions = {4, 1};
  f.leader.movement_flags = 3;
  f.following->prepare(id);
  check(a.appearance_context.overlay_flags == 0 && a.appearance.sprite() == 5,
        "Tiny graphics overlay clearing differs");
  f.leader.movement_flags = 0;
  f.following->prepare(id);
  check(a.appearance_context.overlay_flags == 0xc000,
        "Nausea/mushroom overlay differs");
  f.party.character(1).afflictions = {0, 2};
  f.maintenance.possessed_players = 65535;
  f.following->prepare(id);
  check(f.maintenance.possessed_players == 0,
        "Possession count is not source-width");
  f.state.pajamas = 1;
  a.appearance_context.overlay_flags = 0x1234;
  f.following->prepare(id);
  check(a.appearance.sprite() == 437 &&
            a.appearance_context.overlay_flags == 0x1234 &&
            f.maintenance.possessed_players == 0,
        "Pajamas early return changed lower-priority state");
  f.world->appearance_scene().transitions_disabled = true;
  f.following->prepare(id);
  check(a.appearance.sprite() == 1 && f.maintenance.possessed_players == 1,
        "Transition gate did not disable pajamas");
  f.data.graphics[0][0] = 65535;
  f.control.automatic_mode = 2;
  const auto style = f.formation.selected_styles[0];
  f.following->prepare(id);
  check(a.action().animation == 65535 && a.appearance.sprite() == 1 &&
            f.formation.selected_styles[0] == style &&
            (a.action().variables[7] & 0x1000),
        "Hidden artwork path changed requested image/style");
}
void spacing() {
  for (unsigned cursor : {0u, 1u, 254u, 255u})
    for (unsigned distance : {11u, 12u, 13u}) {
      Fixture f;
      f.actor(0);
      const auto id = f.actor(1);
      auto &a = f.world->actor(id);
      f.control.moved_this_tick = 1;
      f.formation.trail_cursors[1] = cursor;
      f.formation.trail_cursors[0] = (cursor + distance) & 255;
      const auto xyz = a.action().position, vel = a.action().velocity;
      check(f.following->tick(id), "Valid follower missing predecessor");
      const unsigned advance = distance < 12 ? 0 : distance == 12 ? 1 : 2;
      check(f.formation.trail_cursors[1] == ((cursor + advance) & 255) &&
                a.action().position[0] ==
                    (std::uint32_t(100 + cursor) << 16 | 0x1234) &&
                a.action().position[1] ==
                    (std::uint32_t(200 + cursor) << 16 | 0x5678) &&
                a.action().position[2] == xyz[2] && a.action().velocity == vel,
            "Follower spacing/XYZ/fraction contract differs");
      check(bool(a.action().variables[7] & 0x1000) == (distance > 12),
            "Follower catch-up flag differs");
    }
  Fixture f;
  const auto id = f.actor(1);
  f.control.moved_this_tick = 1;
  f.formation.trail_cursors[1] = 255;
  f.trail.points[255].walking_style = 12;
  f.leader.walking_style = 0;
  check(f.following->tick(id) && f.formation.trail_cursors[1] == 0,
        "Escalator exit incorrectly requires predecessor");
}
void boundaries() {
  Fixture f;
  const auto id = f.actor(1, 1);
  auto &a = f.world->actor(id);
  f.control.moved_this_tick = 1;
  check(f.world->advance_tick() == WorldTickResult::NeedsEngine &&
            f.world->request()->binding.operation ==
                NativeAction::RefreshPartyFollower,
        "Imported call did not retain missing owner");
  f.world->bind_party_following(*f.following);
  check(f.world->advance_tick() == WorldTickResult::NeedsEngine &&
            f.world->request()->binding.operation ==
                NativeAction::RunPartyFollower,
        "Callback did not retain missing predecessor");
  const auto vars = a.action().variables;
  const auto xyz = a.action().position;
  for (unsigned i = 0; i < 3; ++i)
    check(f.world->advance_tick() == WorldTickResult::NeedsEngine &&
              a.action().variables == vars && a.action().position == xyz,
          "Suspended callback replayed or partially committed");
  const auto before = a.action().velocity;
  a.action().velocity = {};
  const auto predecessor = f.actor(0);
  f.world->actor(predecessor).action().velocity = {};
  f.formation.trail_cursors[0] = 13;
  check(f.world->advance_tick() == WorldTickResult::Complete &&
            f.formation.trail_cursors[1] == 2 && f.world->ticks() == 1,
        "Callback did not resume once in the actual phase");
  for (unsigned gate = 0; gate < 4; ++gate) {
    f.control.automatic_mode = gate == 0 ? 3 : 0;
    f.world->appearance_scene().battle_swirl_ticks = gate == 1;
    f.maintenance.enemy_touched = gate == 2;
    f.prompt.battle_mode = gate == 3;
    const auto p = a.action().position;
    check(f.following->tick(id) && a.action().position == p,
          "Follower early gate mutated coordinates");
  }
  const std::uint16_t duplicate = 0;
  rejects(
      [&] {
        WorldPartyFollowing bad(*f.world, f.party, f.formation, f.trail,
                                f.control, f.leader, f.prompt, f.maintenance,
                                duplicate, f.state, f.data);
      },
      "Duplicated area style authority accepted");
  Fixture cancelled;
  const auto issuer = cancelled.actor(1, 1);
  cancelled.control.moved_this_tick = 1;
  cancelled.world->bind_party_following(*cancelled.following);
  check(cancelled.world->advance_tick() == WorldTickResult::NeedsEngine &&
            cancelled.world->request()->binding.operation ==
                NativeAction::RunPartyFollower,
        "Missing predecessor did not suspend cancellation fixture");
  const auto successor = cancelled.actor(2);
  cancelled.world->actor(successor).action().velocity = {};
  cancelled.world->erase(issuer);
  check(!cancelled.world->request() &&
            cancelled.world->advance_tick() == WorldTickResult::Complete,
        "Erased preflight-only follower left an unresolvable continuation");
  Fixture foreign;
  rejects([&] { f.world->bind_party_following(*foreign.following); },
          "Foreign follower world bound");
}
} // namespace
int main() {
  try {
    selection();
    spacing();
    boundaries();
    std::cout << "Native party following tests passed\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
