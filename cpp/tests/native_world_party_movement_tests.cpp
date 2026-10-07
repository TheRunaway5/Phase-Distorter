#include "eb/native/world_party_movement.hpp"
#include "native_sprite_fixture.hpp"
#include <iostream>
#include <stdexcept>
using namespace eb::native;
namespace {
void require(bool ok, const char *m) {
  if (!ok)
    throw std::runtime_error(m);
}
template <class F> void rejects(F f, const char *m) {
  try {
    f();
  } catch (const std::exception &) {
    return;
  }
  throw std::runtime_error(m);
}
struct Fixture {
  native_sprite_test::Fixture art;
  std::shared_ptr<SpriteResources> sprites =
      std::make_shared<SpriteResources>(art.bytes, art.layout);
  std::shared_ptr<const ActionScriptData> scripts =
      std::make_shared<ActionScriptData>(
          std::vector<std::uint8_t>{0x14, 0,    2,    1,    0,    0x06,
                                    1,    0x19, 0,    0,    0x42, 0xaa,
                                    0x3d, 0xc0, 0x1f, 4,    0x09, 0x23,
                                    0x39, 0xa0, 0x25, 0x6b, 0xa2, 0x09},
          0, std::vector<std::uint32_t>{0, 10, 17});
  ActorWorld actors{sprites, scripts, eb::GameVersion::US};
  party::State party{eb::GameVersion::US};
  WorldPartyState state;
  story::RandomState random{0x1234, 0x9876};
  WorldPartyMovementData data{{0, 17, 32, 47, 62, 77}, {0, 11, 22, 32, 43, 54}};
  WorldPartyMovement movement{actors, party, state, random, data};
  WorldActorSpec spec(unsigned script = 0, unsigned x = 100, unsigned y = 100) {
    WorldActorSpec s;
    s.script = script;
    s.action.position = {x * 65536u + 0x8000, y * 65536u + 0x8000, 0x8000};
    s.action.animation = 0;
    return s;
  }
  ActorId create(unsigned role, unsigned script = 0) {
    return *actors.create_authored(spec(script), {role, role + 1});
  }
};
void startup() {
  Fixture f;
  const auto id = f.create(24, 1);
  f.party.party_count = 1;
  f.state.roles[0] = 24; f.state.current_leader_role = 24;
  auto &a = f.actors.actor(id);
  a.action().variables[0] = 3;
  a.action().variables[1] = 2;
  a.action().velocity = {1, 2, 3};
  a.behavior.direction = 6;
  f.party.character(3).afflictions[0] = 1;
  const auto before = f.random;
  require(f.actors.advance_tick() == WorldTickResult::NeedsEngine &&
              f.random == before,
          "Unbound startup changed shared random state");
  f.actors.bind_party_movement(f.movement);
  auto expected = before;
  const auto byte = story::next_random(expected);
  require(f.actors.advance_tick() == WorldTickResult::Complete &&
              f.random == expected && a.action().variables[2] == (byte & 15) &&
              a.action().variables[3] == 16 && a.action().variables[4] == 48 &&
              a.appearance.fingerprint() == 0xffff &&
              a.appearance.displayed()->pose == eight_direction_pose(6, 0),
          "Startup did not execute at its script call");
  require(f.state.character_startup[2] ==
                  WorldPartyState::CharacterStartup{3, 24, 0, 0xffff} &&
              f.actors.appearance_scene().footstep_role == 24,
          "Startup character/footstep role ownership differs");
  require(a.action().velocity == std::array<std::uint32_t, 3>{1, 2, 3} &&
              a.behavior.direction == 6,
          "Startup changed movement/facing");
  auto invalid = f.spec(1);
  invalid.action.variables[1] = 6;
  const auto bad = *f.actors.create_authored(invalid, {25, 26});
  const auto saved = f.random;
  rejects([&] { f.movement.startup(bad); },
          "Invalid startup record silently aliased a character");
  require(f.random == saved && !f.actors.actor(bad).appearance.displayed(),
          "Failed startup advanced RNG/artwork");
  f.actors.erase(id);
  require(!f.movement.startup(bad) && f.random == saved,
          "Missing formation leader fabricated startup state");
}
void projection() {
  Fixture f;
  const auto leader = f.create(24), follower = f.create(25, 2);
  auto &a = f.actors.actor(follower);
  auto &b = f.actors.actor(leader);
  a.action().variables[5] = 2;
  a.behavior.direction = 0;
  a.action().position[1] = 117u << 16;
  b.action().position[1] = 100u << 16;
  a.behavior.projected_x = b.behavior.projected_x = 77;
  a.behavior.projected_y = 91;
  f.state.projection = {24, 0, 0};
  f.actors.scene().camera_x = 5;
  f.actors.scene().camera_y = 7;
  f.movement.project(follower);
  require(a.behavior.projected_x == 77 && a.behavior.projected_y == 91,
          "Follower exact spacing failed to retain projection");
  a.action().variables[7] = 0xe7ff;
  f.movement.project(follower);
  require(a.behavior.projected_y == 91,
          "Unselected var7 bits affected follower projection");
  a.action().variables[7] = 0x0800;
  f.movement.project(follower);
  require(a.behavior.projected_y == 110,
          "Encoded VAR7 mask failed to force projection");
  a.action().variables[7] = 0;
  a.behavior.projected_y = 91;
  f.state.projection.movement_mismatch = 1;
  f.movement.project(follower);
  require(a.behavior.projected_x == 95 && a.behavior.projected_y == 110,
          "Movement mismatch did not force absolute projection");
  f.state.projection.movement_mismatch = 0;
  f.state.projection.leader_role.reset();
  rejects([&] { f.movement.project(follower); },
          "Follower accepted an absent cache");
  f.state.projection.leader_role = 24;
  a.action().variables[5] = 11;
  a.behavior.projected_x = b.behavior.projected_x;
  rejects([&] { f.movement.project(follower); },
          "Odd/out-of-table spacing read adjacent content");
  a.action().variables[5] = 2;
  a.action().velocity[0] = 65536;
  b.action().velocity[0] = 65536;
  const auto leader_before = b.action().position;
  rejects([&] { f.actors.advance_tick(); },
          "Unbound follower projection silently ran");
  require(a.action().position[0] == 100u * 65536 + 0x8000 &&
              b.action().position == leader_before,
          "Missing party owner partially integrated earlier actors");
  require(a.behavior.physics == ActorPhysics::PartyFollower &&
              a.behavior.projection == ActorProjection::Unchanged,
          "Authored follower callback was installed into the wrong phase");
  f.actors.bind_party_movement(f.movement);
  require(
      f.actors.advance_tick() == WorldTickResult::Complete &&
          a.action().position[0] == 100u * 65536 + 0x8000 &&
          b.action().position[0] == leader_before[0] + 65536,
      "Follower movement integrated XYZ or retry moved an earlier actor twice");
  Fixture foreign;
  rejects([&] { f.actors.bind_party_movement(foreign.movement); },
          "Party owner bound to wrong actor world");
  f.actors.clear_party_movement(foreign.movement);
  require(f.actors.advance_tick() == WorldTickResult::Complete,
          "Foreign detach removed party owner");
}
void retained_projection_cache() {
  Fixture f;
  require(f.state.projection.leader_role==0 && f.state.projection.direction==0,
          "Cold follower cache did not start with the actual zeroed BSS words");
  const auto follower=f.create(25,2);
  auto &a=f.actors.actor(follower);
  a.behavior.direction=0;a.action().variables[5]=2;
  a.behavior.projected_x=77;a.behavior.projected_y=91;
  a.action().position[0]=0x00641234;a.action().position[1]=0x0075abcd;
  const auto cold_position=a.action().position;
  f.movement.project(follower);
  require(a.action().position==cold_position && a.behavior.projected_y==117,
          "Cold cached role0 required an invented live actor or changed coordinates");
  const auto leader=f.create(0);
  auto &b=f.actors.actor(leader);
  b.action().position[1]=100u<<16;b.behavior.projected_x=77;
  const auto before_actor=f.actors.actors();
  f.actors.erase(leader);
  require(!f.actors.actor_for_role(0) && f.actors.authored_behavior(0).projected_x==77,
          "Retirement discarded retained screen coordinates");
  a.behavior.projected_x=77;a.behavior.projected_y=91;
  f.movement.project(follower);
  require(a.action().position==cold_position && a.behavior.projected_y==91 &&
              f.actors.actors().size()+1==before_actor.size() && f.actors.ticks()==0,
          "Dormant cached projection changed exact spacing or advanced actor lifecycle");
  f.state.projection.leader_role=30;
  const auto projection=a.behavior;
  rejects([&]{f.movement.project(follower);},"Unowned cached role accepted");
  require(a.behavior.projected_x==projection.projected_x && a.behavior.projected_y==projection.projected_y,
          "Rejected projection partially changed output");
}
void paused_follower() {
  Fixture f;
  const auto id = f.create(24);
  auto &a = f.actors.actor(id);
  a.behavior.physics = ActorPhysics::PartyFollower;
  a.behavior.projection = ActorProjection::Unchanged;
  a.scripts_and_physics_enabled = false;
  a.behavior.projected_x = 77;
  a.behavior.projected_y = 91;
  const auto position = a.action().position;
  require(f.actors.advance_tick() == WorldTickResult::Complete &&
              a.action().position == position && a.behavior.projected_x == 77 &&
              a.behavior.projected_y == 91,
          "Paused follower required or executed its movement owner");
  a.behavior.projection = ActorProjection::Absolute;
  require(
      f.actors.advance_tick() == WorldTickResult::Complete &&
          a.behavior.projected_x == 100 && a.behavior.projected_y == 100,
      "Paused movement incorrectly suppressed the independent screen callback");
}
void maintenance_boundary() {
  Fixture f;
  const auto a = f.create(0), b = f.create(1), c = f.create(2);
  f.actors.actor(a).behavior.tick = ActorTickCallback::WorldMaintenance;
  require(f.actors.advance_tick() == WorldTickResult::NeedsEngine &&
              f.actors.request()->origin == WorldActionOrigin::TickCallback &&
              f.actors.request()->binding.operation ==
                  NativeAction::RunWorldMaintenance,
          "Maintenance callback did not expose typed world request");
  require(f.actors.actor(a).action().variables[0] == 1 &&
              f.actors.actor(b).action().variables[0] == 0,
          "Callback boundary moved past captured actor");
  for (unsigned i = 0; i < 3; ++i)
    require(f.actors.advance_tick() == WorldTickResult::NeedsEngine &&
                f.actors.actor(a).action().variables[0] == 1,
            "Callback poll replayed scripts");
  rejects([&] { f.actors.respond(1); },
          "Callback accepted invented return value");
  rejects([&] { f.actors.respond(0, 1); }, "Callback accepted VM operands");
  rejects([&] { f.actors.respond(0, 0, 0); }, "Callback accepted VM sleep");
  const auto appended = f.create(3);
  f.actors.erase(a);
  f.actors.erase(b);
  require(f.actors.request() &&
              f.actors.advance_tick() == WorldTickResult::NeedsEngine,
          "Deleted issuer discarded begun maintenance");
  f.actors.respond();
  require(f.actors.advance_tick() == WorldTickResult::Complete &&
              f.actors.actor(c).action().variables[0] == 1 &&
              f.actors.actor(appended).action().variables[0] == 1 &&
              f.actors.ticks() == 1,
          "Callback acknowledgment lost captured-next traversal");
  // An actor appended to a suspended tail joins the fresh physics traversal,
  // while its script begins on the next tick.
  Fixture tail;
  const auto last = tail.create(0);
  tail.actors.actor(last).behavior.tick = ActorTickCallback::WorldMaintenance;
  tail.actors.advance_tick();
  auto s = tail.spec();
  s.action.velocity[0] = 65536;
  const auto added = *tail.actors.create_authored(s, {1, 2});
  tail.actors.erase(last);
  tail.actors.respond();
  require(tail.actors.advance_tick() == WorldTickResult::Complete &&
              tail.actors.actor(added).action().variables[0] == 0 &&
              tail.actors.actor(added).action().position[0] ==
                  101u * 65536 + 0x8000,
          "Maintenance tail append ran its script early or omitted physics");
}
} // namespace
int main() {
  try {
    startup();
    projection(); retained_projection_cache();
    paused_follower();
    maintenance_boundary();
    std::cout << "Native party movement tests passed\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
