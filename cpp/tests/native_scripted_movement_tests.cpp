#include "eb/native/appearance_service.hpp"
#include "eb/native/peripheral_state.hpp"
#include "eb/native/world_enemy_behavior.hpp"
#include "native_sprite_fixture.hpp"
#include "native_world_walking_fixture.hpp"
#include <iostream>

namespace {
using namespace eb::native;
unsigned checks{};
void check(bool okay, const char* why) {
    ++checks;
    if (!okay) throw std::runtime_error(why);
}
struct Fixture {
    std::vector<std::uint8_t> bytes;
    WalkingData walking;
    EnemyMovementData movement;
    GeneratedInputData angles;
    movement_test::Fixture terrain;
    WorldCollision collision;
    WorldMovement map_movement;
    WorldMapArea area;
    walking_test::Fixture world;
    WorldEnemyBehavior behavior;
    PeripheralState peripherals;
    ActorId actor;
    explicit Fixture(eb::GameVersion version)
        : bytes(walking_test::content(version)), walking(bytes, version),
          movement(bytes, version), angles(bytes, version), terrain(walking_test::terrain(0)),
          collision(terrain.bytes, terrain.collision_layout),
          map_movement(terrain.bytes, terrain.movement_layout), area(terrain.area()),
          world(version, walking, bytes, collision, map_movement, area),
          behavior(movement, angles, world.actors, world.enemies, world.party, world.leader),
          actor(world.spawn_enemy()) {
        behavior.bind_peripherals(peripherals);
    }
};
void target(eb::GameVersion version) {
    Fixture f(version);
    auto& a = f.world.actors.actor(f.actor);
    a.action().position = {0x1234, 0x5678, 0xdeadbeef};
    a.action().variables[6] = 3;
    a.action().variables[7] = 7;
    (void)f.behavior.target_angle(f.actor);
    check(f.peripherals.quotient() == 597 && f.peripherals.product() == 1,
          "Diagonal target angle did not retain the real divider result");
    a.action().variables[7] = 0;
    (void)f.behavior.target_angle(f.actor);
    check(f.peripherals.quotient() == 597 && f.peripherals.product() == 1,
          "Horizontal axis angle invented a hardware divide");
    a.action().variables[6] = 0;
    a.action().variables[7] = 7;
    (void)f.behavior.target_angle(f.actor);
    check(f.peripherals.quotient() == 0xffff && f.peripherals.product() == 1792,
          "Vertical angle skipped its actual divide by zero");
    a.action().variables[7] = 0;
    (void)f.behavior.target_angle(f.actor);
    check(f.peripherals.quotient() == 0xffff && f.peripherals.product() == 0,
          "Coincident angle skipped its actual divide by zero");
    a.behavior.direction = 7;
    a.behavior.moving_direction = 6;
    for (unsigned range : {0u, 1u, 2u, 0x8000u, 0xffffu}) {
        for (unsigned delta : {0u, 1u, 2u, 0x7fffu, 0x8000u, 0xffffu}) {
            a.action().position[0] = 0xffff1234;
            a.action().position[1] = 0x4567;
            a.action().variables[5] = std::uint16_t(range);
            a.action().variables[6] = std::uint16_t(0xffffu + delta);
            a.action().variables[7] = 0;
            a.action().velocity = {0x12345678, 0x87654321, 0x11223344};
            a.behavior.movement_speed = 0;
            const unsigned distance = delta >= 0x8000 ? (0x10000u - delta) : delta;
            const bool expected = distance < range && range != 0;
            check(f.behavior.target_reached(f.actor) == expected,
                  "Target predicate changed strict unsigned range or wrapped distance");
            check(a.action().velocity[2] == 0x11223344 &&
                      a.action().position[0] == 0xffff1234 && a.action().position[1] == 0x4567 &&
                      a.behavior.direction == 7 && a.behavior.moving_direction == 6,
                  "Target predicate moved the actor or changed its facing");
            check(expected ? a.action().velocity[0] == 0x12345678 && a.action().velocity[1] == 0x87654321
                           : a.action().velocity[0] == 0 && a.action().velocity[1] == 0,
                  "Target predicate refreshed velocity on the wrong branch");
        }
    }
}
void pose() {
    native_sprite_test::Fixture data;
    auto resources = std::make_shared<SpriteResources>(data.bytes, data.layout);
    SpriteAppearance appearance(resources, 0);
    ActionActorState actor;
    ActorActionContext context;
    context.moving_direction = 6;
    actor.variables[0] = 0;
    select_scripted_pose(actor, context, appearance, 2, 255);
    check(actor.animation == 255 && context.direction == 2 &&
              context.moving_direction == 6 && appearance.displayed()->pose == 3,
          "Four-direction command normalized its raw frame byte");
    actor.variables[0] = 0xffff;
    select_scripted_pose(actor, context, appearance, 0, 15);
    check(actor.animation == 30 && context.direction == 0 && appearance.displayed()->pose == 15,
          "Eight-direction command did not double the raw frame byte");
    const auto retained = appearance.displayed();
    bool rejected = false;
    try { select_scripted_pose(actor, context, appearance, 255, 0); }
    catch (const std::out_of_range&) { rejected = true; }
    check(rejected && actor.animation == 30 && context.direction == 0 && appearance.displayed() == retained,
          "Invalid pose partially changed the actor");
}
}
int main() {
    try {
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) target(version);
        pose();
        std::cout << checks << " native scripted movement checks passed\n";
    } catch (const std::exception& error) {
        std::cerr << "After " << checks << " checks: " << error.what() << '\n';
        return 1;
    }
}
