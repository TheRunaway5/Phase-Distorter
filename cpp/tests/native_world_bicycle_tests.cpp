#include "eb/native/world_bicycle.hpp"
#include "native_world_walking_fixture.hpp"
#include <iostream>
#include <stdexcept>
namespace {
using namespace walking_test;
unsigned checks{};
void check(bool good, const char *why) {
  ++checks;
  if (!good)
    throw std::runtime_error(why);
}
template <class F> void rejects(F call, const char *why) {
  bool rejected = false;
  try {
    call();
  } catch (const std::exception &) {
    rejected = true;
  }
  check(rejected, why);
}
std::unique_ptr<WorldBicycle> make(Fixture &f, const WalkingData &data,
                                   const WorldCollision &collision,
                                   const WorldMapArea &area,
                                   WorldBicycleSound sound) {
  return std::make_unique<WorldBicycle>(
      data, f.actors, f.enemies, f.leader, f.control, f.formation, f.prompt,
      f.input, f.navigation, f.queue, collision, area, std::move(sound));
}
void run(eb::GameVersion version) {
  const auto bytes = content(version);
  WalkingData data(bytes, version);
  for (unsigned flags : {0u, 8u, 12u, 0x40u, 0x80u, 0xc0u, 0x10u}) {
    auto map = terrain(flags);
    WorldCollision collision(map.bytes, map.collision_layout);
    WorldMovement movement(map.bytes, map.movement_layout);
    auto area = map.area();
    for (unsigned direction = 0; direction < 8; ++direction) {
      Fixture f(version, data, bytes, collision, movement, area);
      f.leader.walking_style = 3;
      f.leader.leader_x = 128;
      f.leader.leader_y = 80;
      constexpr std::array<unsigned, 8> pads{0x800, 0x900, 0x100, 0x500,
                                             0x400, 0x600, 0x200, 0xa00};
      f.input.state[0] = pads[direction];
      f.input.pressed[0] = 0x10;
      f.control.trodden_surface_flags = 0xaabb;
      f.control.moved_this_tick = 0xffff;
      f.navigation.ladder_stairs = {12, 13};
      f.navigation.surface_write_counter = 0x1234;
      f.actors.appearance_scene().movement_counter = 0xffff;
      f.mushroom = {1, 2, 3};
      f.hotspot_state.live[0] = {2, 0, 0, 1000, 1000, 0x1234};
      const auto old_input = f.input;
      const auto old_hotspots = f.hotspot_state;
      const auto old_queue = f.queued;
      const auto dx = data.raw_delta(0, 3, CollisionDirection(direction)),
                 dy = data.raw_delta(1, 3, CollisionDirection(direction));
      const auto x =
          (std::uint32_t(f.leader.leader_x) << 16 | f.control.x_fraction) + dx;
      const auto y =
          (std::uint32_t(f.leader.leader_y) << 16 | f.control.y_fraction) + dy;
      unsigned sounds{};
      auto bicycle = make(
          f, data, collision, area, [&](const dialogue::ScriptSoundRequest &r) {
            ++sounds;
            check(r ==
                      dialogue::ScriptSoundRequest{
                          dialogue::ScriptSoundKind::QueueEffect, 23, 23},
                  "Wrong bell sound intent");
            check(f.leader.leader_x == 128 && f.leader.leader_y == 80 &&
                      f.control.bicycle_turn_frames == 0 &&
                      f.navigation.ladder_stairs.x == 12,
                  "Bell was delivered after movement effects");
          });
      bicycle->execute(0);
      check(sounds == 1 && !bicycle->busy() && !bicycle->failed(),
            "Bicycle did not complete one ordered bell");
      check(f.leader.leader_direction == direction, "Bicycle facing differs");
      check(f.control.bicycle_turn_frames == (direction & 1 ? 4 : 0),
            "Diagonal turn count differs");
      check(f.control.moved_this_tick == 0 &&
                f.actors.appearance_scene().movement_counter == 0,
            "Movement counters did not wrap or terrain undid animation "
            "increment");
      if (flags & 0xc0)
        check(f.leader.leader_x == 128 && f.leader.leader_y == 80 &&
                  f.control.x_fraction == 0x1234 &&
                  f.control.y_fraction == 0xabcd,
              "Blocked bicycle committed position");
      else
        check(f.leader.leader_x == x >> 16 && f.leader.leader_y == y >> 16 &&
                  f.control.x_fraction == std::uint16_t(x) &&
                  f.control.y_fraction == std::uint16_t(y),
              "Bicycle used terrain-scaled speed");
      check(
          f.navigation.ladder_stairs == CollisionCell{0xffff, 13} &&
              f.navigation.surface_write_counter == 0x1234,
          "Directional edge query discovered ladder or changed steering state");
      check(f.leader.surface_flags == flags &&
                f.control.trodden_surface_flags == 0xaabb,
            "Bicycle lost temporary terrain or overwrote persistent ground");
      check(f.input == old_input && f.hotspot_state == old_hotspots &&
                f.queued == old_queue &&
                f.mushroom == party::MovementPolicyState{1, 2, 3},
            "Bicycle polled/remapped input, hotspots or queue");
      check(f.actors.ticks() == 0 && f.clock.frame_counter == 0,
            "Bicycle advanced actors or a frame");
    }
  }
  auto map = terrain(0);
  WorldCollision collision(map.bytes, map.collision_layout);
  WorldMovement movement(map.bytes, map.movement_layout);
  auto area = map.area();
  {
    Fixture f(version, data, bytes, collision, movement, area);
    f.leader.walking_style = 3;
    f.input.state[0] = 0x900;
    auto b = make(f, data, collision, area, {});
    b->execute(0);
    check(f.control.bicycle_turn_frames == 4 && f.leader.leader_direction == 1,
          "Initial diagonal did not prime turn delay");
    f.input.state[0] = 0x100;
    for (unsigned left : {3u, 2u, 1u, 0u}) {
      b->execute(1);
      check(f.control.bicycle_turn_frames == left &&
                f.leader.leader_direction == (left ? 1 : 2),
            "Cardinal input did not retain exact diagonal turn interval");
    }
    f.input.state[0] = 0;
    const auto x = f.leader.leader_x;
    b->execute(0x8000);
    check(f.leader.leader_x > x && f.leader.leader_direction == 2,
          "Full previous movement word did not coast");
    const auto stopped = f.leader.leader_x;
    f.control.bicycle_turn_frames = 4;
    b->execute(0);
    check(f.leader.leader_x == stopped && f.control.bicycle_turn_frames == 4,
          "Idle bicycle consumed turn countdown");
  }
  for (unsigned swirl : {1u, 2u, 0xffffu}) {
    Fixture f(version, data, bytes, collision, movement, area);
    f.leader.walking_style = 3;
    f.input.pressed[0] = 0x10;
    f.control.moved_this_tick = 7;
    f.control.bicycle_turn_frames = 3;
    f.leader.collision_actor = f.player;
    f.actors.appearance_scene().battle_swirl_ticks = swirl;
    auto b = make(f, data, collision, area, [](const auto &) {
      throw std::runtime_error("Bell during swirl");
    });
    b->execute(1);
    check(f.actors.appearance_scene().battle_swirl_ticks == swirl - 1 &&
              f.control.moved_this_tick == 7 &&
              f.control.bicycle_turn_frames == 3,
          "Swirl branch changed movement state");
    check(f.control.encounter.mode == (swirl == 1 ? 0xffff : 0) && f.prompt.battle_mode == 0 &&
              (swirl == 1 ? f.leader.collision_actor == f.player
                          : !f.leader.collision_actor),
          "Swirl expiry or collision path differs");
  }
  {
    Fixture f(version, data, bytes, collision, movement, area);
    f.leader.walking_style = 3;
    f.input.pressed[0] = 0x10;
    auto b = make(f, data, collision, area, {});
    const auto x = f.leader.leader_x;
    rejects([&] { b->execute(0); }, "Unbound bell adapter silently completed");
    check(b->failed() && !b->busy() && f.leader.leader_x == x,
          "Failed bell changed movement or left owner executing");
    rejects([&] { b->execute(0); }, "Failed bicycle owner resumed");
  }
  {
    Fixture f(version, data, bytes, collision, movement, area);
    f.leader.walking_style = 3;
    f.input.pressed[0] = 0x10;
    f.control.bicycle_turn_frames = 2;
    auto b = make(f, data, collision, area, [](const auto &) {
      throw std::runtime_error("Adapter rejected intent");
    });
    rejects([&] { b->execute(1); }, "Rejected sound intent was swallowed");
    check(f.control.bicycle_turn_frames == 2 && f.leader.leader_x == 128,
          "Rejected bell continued movement");
  }
  {
    Fixture f(version, data, bytes, collision, movement, area);
    f.leader.walking_style = 3;
    f.input.pressed[0] = 0x10;
    WorldBicycle *active{};
    unsigned calls{};
    auto b = make(f, data, collision, area, [&](const auto &) {
      ++calls;
      rejects([&] { active->execute(1); }, "Reentrant bicycle call accepted");
    });
    active = b.get();
    b->execute(1);
    check(calls == 1 && !b->failed(),
          "Reentrant rejection replayed sound or failed original operation");
  }
  {
    Fixture f(version, data, bytes, collision, movement, area);
    f.leader.walking_style = 3;
    f.queued.pending = 1;
    f.input.state[0] = 0x800;
    f.leader.leader_direction = 2;
    auto b = make(f, data, collision, area, {});
    b->execute(1);
    check(f.leader.leader_x > 128 && f.leader.leader_direction == 2,
          "Pending interaction blocked coasting instead of input mapping only");
  }
  {
    Fixture f(version, data, bytes, collision, movement, area);
    f.leader.walking_style = 3;
    auto b = make(f, data, collision, area, {});
    f.actors.erase(f.player);
    rejects([&] { b->execute(1); },
            "Bicycle synthesized missing role24 terrain geometry");
  }
  {
    Fixture f(version, data, bytes, collision, movement, area);
    f.leader.walking_style = 3;
    f.leader.leader_direction = 0xffff;
    f.input.state[0] = 0;
    auto b = make(f, data, collision, area, {});
    rejects([&] { b->execute(1); },
            "Out-of-content coasting facing silently became idle");
    check(b->failed() && f.leader.leader_x == 128,
          "Invalid coasting direction committed movement");
  }
  {
    Fixture f(version, data, bytes, collision, movement, area);
    auto b = make(f, data, collision, area, {});
    auto abandoned = f.queue.queue().begin();
    abandoned.reset();
    rejects([&] { b->execute(1); },
            "Abandoned queue permitted bicycle movement");
    check(b->failed() && f.leader.leader_x == 128,
          "Queue failure was hidden or mutated leader position");
  }
  {
    Fixture f(version, data, bytes, collision, movement, area);
    PartyTrail trail;
    WorldControl control(f.actors, f.formation, trail, f.leader, f.control,
                         f.prompt, f.input, f.clock, collision, area);
    auto b = make(f, data, collision, area, {});
    check(b->uses(control, f.walking, f.enemies, f.input, f.queue, collision,
                  area),
          "Bicycle rejected its real world owner identities");
    dialogue::PromptState foreign_prompt;
    WorldBicycle foreign(data, f.actors, f.enemies, f.leader, f.control,
                         f.formation, foreign_prompt, f.input, f.navigation,
                         f.queue, collision, area, {});
    check(!foreign.uses(control, f.walking, f.enemies, f.input, f.queue,
                        collision, area),
          "Bicycle accepted a foreign battle prompt owner");
  }
}
} // namespace
int main() {
  try {
    run(eb::GameVersion::US);
    run(eb::GameVersion::JP);
    std::cout << "PASS native bicycle: " << checks << " checks\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
}
