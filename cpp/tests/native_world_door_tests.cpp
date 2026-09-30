#include "eb/native/world_doors.hpp"
#include "eb/native/world_maintenance.hpp"
#include "native_sprite_fixture.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
unsigned checks{};
void check(bool value, const char *message) {
  ++checks;
  if (!value)
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
void word(std::vector<std::uint8_t> &b, unsigned at, unsigned value) {
  b.at(at) = value;
  b.at(at + 1) = value >> 8;
}
void pointer(std::vector<std::uint8_t> &b, unsigned at, unsigned value) {
  word(b, at, value);
  word(b, at + 2, value >> 16);
}
std::vector<std::uint8_t> content(unsigned type, unsigned found,
                                  unsigned event = 1) {
  std::vector<std::uint8_t> bytes(0x101400);
  for (unsigned i = 0; i < 1280; ++i)
    pointer(bytes, 0x100000 + i * 4, 0xcf3000);
  pointer(bytes, 0x100000, 0xcf3100);
  word(bytes, 0xf3100, 1);
  bytes[0xf3102] = 6;
  bytes[0xf3103] = 5;
  bytes[0xf3104] = type;
  word(bytes, 0xf3105, found);
  word(bytes, 0xf0100, event);
  pointer(bytes, 0xf0102, 0xd0123456);
  return bytes;
}
struct Fixture {
  eb::GameVersion version;
  native_sprite_test::Fixture graphics;
  std::shared_ptr<SpriteResources> sprites =
      std::make_shared<SpriteResources>(graphics.bytes, graphics.layout);
  std::shared_ptr<const ActionScriptData> scripts =
      std::make_shared<ActionScriptData>(std::vector<std::uint8_t>{9}, 0,
                                         std::vector<std::uint32_t>{0});
  ActorWorld actors;
  npcs::InteractionState leader;
  WorldControlState control;
  WorldNavigationState navigation;
  WorldMaintenanceState maintenance;
  story::InputState input;
  npcs::InteractionQueueState queued;
  npcs::DadPhoneState phone;
  WorldInteractionQueue queue;
  std::array<std::uint8_t, 128> flags{};
  std::unique_ptr<WorldDoors> doors;
  ActorId reserved{}, ordinary{};
  Fixture(eb::GameVersion v, unsigned type, unsigned found, unsigned event = 1)
      : version(v), actors(sprites, scripts, v),
        queue(v, queued, actors.appearance_scene().intangibility_ticks, phone) {
    auto bytes = content(type, found, event);
    doors = std::make_unique<WorldDoors>(
        npcs::MapTextResources::import(bytes, v),
        WorldDoorResources::import(bytes, v), actors, leader, control,
        navigation, maintenance, input, queue);
    actors.scene().event_flags = flags;
    leader.map_text = {0x1234, 0x5678, 0xabcd, {1, 2, 3, 4}};
    leader.walking_style = 0;
    leader.leader_direction = 7;
    navigation.ladder_stairs = {5, 6};
    navigation.stairs_direction = 0x4567;
    navigation.using_door = 0x1234;
    control.automatic_mode = 0;
    input.player_activity = 1;
    queued.current = 1;
    queued.next = 3;
    for (unsigned i = 0; i < 4; ++i)
      queued.records[i] = {std::uint16_t(20 + i), {std::uint8_t(i), 2, 3, 4}};
    WorldActorSpec spec;
    spec.action.animation = 0;
    reserved = *actors.create_authored(spec, {24, 25});
    ordinary = *actors.create_authored(spec, {3, 4});
    for (auto id : {reserved, ordinary}) {
      auto &a = actors.actor(id);
      a.action().variables[2] = 2;
      a.action().variables[3] = 3;
      EightDirectionAnimation context{1, 0, 0, 0, 44};
      a.appearance.step_eight(a.action(), context);
      a.appearance.step_eight(a.action(), context);
      check(a.appearance.flashing_hidden(),
            "Sprite blink fixture is not active");
    }
  }
  bool run() {
    auto op = doors->begin({5, 6});
    check(op->advance() && op->complete(),
          "Ordinary door unexpectedly yielded");
    const bool result = op->permission();
    const auto queue = queued;
    check(op->advance() && queued == queue, "Completed door replayed effects");
    return result;
  }
};
void events(eb::GameVersion v) {
  for (unsigned inverted : {0u, 0x8000u})
    for (bool set : {false, true})
      for (bool suppressed : {false, true}) {
        Fixture f(v, 0, 0x8100, 1 | inverted);
        f.flags[0] = set;
        f.queued.current_type = suppressed ? 0 : 0xffff;
        const auto before = f.queued;
        check(!f.run(), "Type0 allowed walking");
        const bool match = set == bool(inverted);
        check(f.navigation.ladder_stairs ==
                  (match ? CollisionCell{0, 0} : CollisionCell{5, 6}),
              "Type0 ladder clearing/predicate differs");
        if (match && !suppressed)
          check(f.queued.next == 0 && f.queued.pending == 1 &&
                    f.queued.records[3] ==
                        npcs::QueuedInteraction{0, {0x56, 0x34, 0x12, 0xd0}},
                "Type0 queued wrong text/ring slot");
        else
          check(f.queued == before,
                "Nonmatching/suppressed type0 changed queue");
        check(f.leader.map_text.text == dialogue::ReferenceKey{1, 2, 3, 4} &&
                  f.leader.map_text.unread_type == 0xabcd,
              "Door event text replaced Talk/Check's retained selection");
        check(f.flags[0] == set && f.actors.ticks() == 0,
              "Door event mutated flags or actors");
      }
}
void ladders(eb::GameVersion v) {
  for (unsigned style : {0u, 7u, 8u, 13u})
    for (unsigned found : {0u, 1u, 0x8000u})
      for (unsigned facing : {0u, 3u, 0xffffu}) {
        Fixture f(v, 1, found);
        f.leader.walking_style = style;
        f.leader.leader_direction = facing;
        const auto queue = f.queued;
        check(f.run(), "Type1 denied walking");
        const bool unchanged = style == 7 || style == 8;
        check(f.leader.walking_style == (unchanged ? style : (found ? 8 : 7)) &&
                  f.leader.leader_direction ==
                      (unchanged ? facing : (facing & 0xfffe)) &&
                  f.navigation.stairs_direction ==
                      (unchanged ? 0x4567 : 0xffff),
              "Ladder/rope style or existing-climb gate differs");
        check(f.queued == queue &&
                  f.navigation.ladder_stairs == CollisionCell{5, 6},
              "Type1 changed unrelated door state");
      }
}
void entrances(eb::GameVersion v) {
  for (unsigned bits = 0; bits < 64; ++bits)
    for (bool suppress : {false, true}) {
      Fixture f(v, 2, 0x8123);
      f.input.player_activity = (bits & 1) ? 0 : 0xffff;
      f.control.automatic_mode = (bits & 2) ? 2 : 0xffff;
      f.queued.pending = (bits & 4) ? 0x8000 : 0;
      f.maintenance.enemy_touched = (bits & 8) ? 1 : 0;
      f.actors.appearance_scene().battle_swirl_ticks = (bits & 16) ? 0xffff : 0;
      f.actors.appearance_scene().intangibility_ticks = (bits & 32) ? 0 : 46;
      f.queued.current_type = suppress ? 2 : 0xffff;
      const auto before = f.queued;
      const auto input = f.input;
      check(!f.run(), "Type2 allowed walking");
      const bool allowed = !(bits & 31);
      check(f.navigation.using_door == (allowed ? 1 : 0x1234),
            "Door entrance gates changed latch");
      if (allowed && !suppress)
        check(f.queued.next == 0 && f.queued.pending == 1 &&
                  f.queued.records[3] ==
                      npcs::QueuedInteraction{2, {0x23, 1, 0xcf, 0}},
              "Type2 data key/highbit/ring differs");
      else
        check(f.queued == before, "Suppressed/blocked type2 changed queue");
      check(f.actors.actor(f.reserved).appearance.flashing_hidden() ==
                    (!allowed || bool(bits & 32)) &&
                f.actors.actor(f.ordinary).appearance.flashing_hidden(),
            "Door blink reset changed wrong actors or ignored intangibility "
            "gate");
      check(f.input == input &&
                f.actors.appearance_scene().intangibility_ticks ==
                    ((bits & 32) ? 0 : 46) &&
                f.actors.ticks() == 0,
            "Door entrance consumed input/intangibility or a tick");
    }
}
void pending_and_errors(eb::GameVersion v) {
  for (unsigned type : {3u, 4u})
    for (unsigned demo : {0u, 1u, 0xffffu}) {
      Fixture f(v, type, 0x8200);
      f.leader.demo_frames = demo;
      const auto before = f.queued;
      auto op = f.doors->begin({5, 6});
      if (demo) {
        check(op->advance() && op->permission() == (type == 4),
              "Demo door transition gate changed");
      } else {
        for (unsigned i = 0; i < 4; ++i)
          check(!op->advance() && !op->complete() &&
                    op->request() ==
                        WorldDoorTransitionRequest{
                            type == 3 ? WorldDoorTransitionKind::Escalator
                                      : WorldDoorTransitionKind::Stairs,
                            {5, 6},
                            0x8200},
                "Transition request changed/replayed during pending work");
        rejects([&] { op->permission(); },
                "Pending producer invented move permission");
        rejects([&] { f.doors->begin({5, 6}); },
                "Door accepted overlapping work");
      }
      check(f.queued == before && f.navigation.stairs_direction == 0x4567 &&
                f.navigation.using_door == 0x1234 && f.actors.ticks() == 0,
            "Pending/no-op transition mutated unimplemented producer state");
      op.reset();
      check(f.doors->failed() == !demo,
            "Abandoned producer did not fail its door owner");
    }
  for (unsigned type : {5u, 6u, 7u}) {
    Fixture f(v, type, 0xffff);
    const auto before = f.queued;
    check(!f.run() && f.queued == before, "Source no-op type enqueued text");
  }
  for (unsigned type : {8u, 0xffu}) {
    Fixture f(v, type, 0x1234);
    rejects([&] { f.run(); }, "Uninitialized source permission was invented");
    check(f.doors->failed(), "Unsupported routing did not poison owner");
  }
  Fixture miss(v, 1, 0);
  const auto retained = miss.leader.map_text;
  auto op = miss.doors->begin({0, 0});
  rejects([&] { op->advance(); }, "Miss fabricated a permission");
  check(miss.leader.map_text == retained,
        "Miss overwrote retained catalog state");
  Fixture malformed(v, 0, 0x7fff);
  rejects([&] { malformed.run(); }, "Payload escaped declared DOOR_DATA");
  Fixture noflags(v, 0, 0x100);
  noflags.actors.scene().event_flags = {};
  rejects([&] { noflags.run(); }, "Unowned event predicate became false");
}
void resources(eb::GameVersion v) {
  auto bytes = content(0, 0x100, 0x8000);
  const auto resources = WorldDoorResources::import(bytes, v);
  bytes.clear();
  bytes.shrink_to_fit();
  const auto payload = resources->event_predicate(0x8100);
  check(payload.flag == 0 && !payload.required_state &&
            resources->event_text(0x8100) ==
                dialogue::ReferenceKey{0x56, 0x34, 0x12, 0xd0},
        "Payload ownership or strict8000 predicate changed");
  // The predicate at the last two owned bytes is valid; an unmatched flag
  // must not read the following out-of-owner text into the adjacent directory.
  const unsigned tail = v == eb::GameVersion::US ? 0x264d : 0x2689;
  auto edge = content(0, tail);
  word(edge, 0xf0000 + tail, 1);
  Fixture gated(v, 0, tail);
  gated.doors = std::make_unique<WorldDoors>(
      npcs::MapTextResources::import(edge, v),
      WorldDoorResources::import(edge, v), gated.actors, gated.leader,
      gated.control, gated.navigation, gated.maintenance, gated.input,
      gated.queue);
  gated.flags[0] = 1;
  check(!gated.run(), "Unmatched predicate read its out-of-owner text");
  gated.flags[0] = 0;
  rejects([&] { gated.run(); },
          "Matched text predicate escaped owned payload content");
  auto short_data = content(0, 0x100);
  short_data.resize(v == eb::GameVersion::US ? 0xf264e : 0xf268a);
  rejects([&] { WorldDoorResources::import(short_data, v); },
          "Truncated door payload imported");
  Fixture f(v, 1, 0);
  check(f.doors->uses(f.actors, f.leader, f.control, f.navigation,
                      f.maintenance, f.input, f.queue),
        "Door owner identities do not match");
  auto other_maintenance = f.maintenance;
  check(!f.doors->uses(f.actors, f.leader, f.control, f.navigation,
                       other_maintenance, f.input, f.queue),
        "Door accepted copied maintenance gate owner");
  auto other = f.control;
  check(!f.doors->uses(f.actors, f.leader, other, f.navigation, f.maintenance,
                       f.input, f.queue),
        "Door accepted copied control as live owner");
}
} // namespace
int main() {
  try {
    for (auto v : {eb::GameVersion::US, eb::GameVersion::JP}) {
      events(v);
      ladders(v);
      entrances(v);
      pending_and_errors(v);
      resources(v);
    }
    std::cout << "PASS native world doors: " << checks << " checks\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
