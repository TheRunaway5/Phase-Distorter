#include "eb/native/action_bindings.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
void check(bool condition, const char *message) {
    if (!condition)
        throw std::runtime_error(message);
}
void bindings() {
    const std::array<std::uint8_t, 2> bytes{0x34, 0x12};
    ActionScriptData data(bytes, 0x30195);
    for (const auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
        ActionBindings bindings(version);
        const bool jp = version == eb::GameVersion::JP;
        ActionEngineRequest request{
            ActionRequestKind::CallEngine, 1, jp ? 0xc0a664u : 0xc0a685u, 0, 0, 7, 0x30195};
        const auto bound = bindings.compile(request, data);
        check(bound.operation == NativeAction::SetMovementSpeed && bound.operand == 0x1234 &&
                  bound.parameter_bytes == 2,
              "Regional speed operands bind once to a native operation");
        ActionActorState actor;
        ActorActionContext context;
        ActionSceneContext scene;
        const auto result = apply_action(bound, 7, actor, context, scene);
        check(result.handled && result.value == 0x1234 && result.parameter_bytes == 2 &&
                  context.movement_speed == 0x1234,
              "Native binding applies speed and returns consumed data");
        request.identifier = 0xabcdef;
        const auto unknown = bindings.compile(request, data);
        check(unknown.operation == NativeAction::Unsupported, "Unknown routine remains unsupported");
        check(!apply_action(unknown, 9, actor, context, scene).handled && context.movement_speed == 0x1234,
              "Unsupported binding never silently changes state");
        request.kind = ActionRequestKind::SetTickCallback;
        request.identifier = jp ? 0xc04fee : 0xc04d78;
        const auto following = bindings.compile(request, data);
        check(following.operation == NativeAction::TickPartyFollower &&
                  apply_action(following, 7, actor, context, scene).handled &&
                  context.tick == ActorTickCallback::PartyFollower,
              "Regional EVENT2 callback binds to the world following phase");
        request.kind = ActionRequestKind::CallEngine;
        request.identifier = 0xc04ef0;
        const auto preparation = bindings.compile(request, data);
        check(preparation.operation == (jp ? NativeAction::Unsupported : NativeAction::RefreshPartyFollower) &&
                  !apply_action(preparation, 7, actor, context, scene).handled,
              "Regional preparation must require its actual native owner");
        struct AppearanceBinding {
            unsigned us, jp;
            NativeAction operation;
        };
        for (const auto appearance : {
                 AppearanceBinding{0xc0a4bf, 0xc0a49e, NativeAction::SelectFourInitial},
                 {0xc0a480, 0xc0a45f, NativeAction::SelectFourAnimation},
                 {0xc0a4a8, 0xc0a487, NativeAction::SelectFourFirst},
                 {0xc0a4b2, 0xc0a491, NativeAction::SelectFourSecond},
                 {0xc0c711, 0xc0c6f3, NativeAction::CheckAppearanceVisible},
                 {0xc0a443, 0xc0a422, NativeAction::StepFourWalk},
                 {0xc0a6e3, 0xc0a6c2, NativeAction::StepEightAnimation}}) {
            request.identifier = jp ? appearance.jp : appearance.us;
            const auto bound_appearance = bindings.compile(request, data);
            check(bound_appearance.operation == appearance.operation && !bound_appearance.parameter_bytes &&
                      !apply_action(bound_appearance, 9, actor, context, scene).handled,
              "Regional appearance operation requires its native service owner");
        }
        for (const auto service : {
                 AppearanceBinding{0xc0d98f, 0xc0d957, NativeAction::ConsumeEnemyWaypoint},
                 {0xc0d5b0, 0xc0d578, NativeAction::EnemyContact},
                 {0xc0d15c, 0xc0d126, NativeAction::EnemyContactCollision},
                 {0xc0d59b, 0xc0d563, NativeAction::EnemyContactActive},
                 {0xc0d4de, 0xc0d4a6, NativeAction::PrepareEnemyContactPalette},
                 {0xc05e82, 0xc060b0, NativeAction::EnemyDirectionalObstacles},
                 {0xc05ece, 0xc060fc, NativeAction::EnemyVerticalObstacles},
                 {0xc0c48f, 0xc0c471, NativeAction::EnemyDistanceBand},
                 {0xc0c4af, 0xc0c491, NativeAction::EnemyShortDistanceBand},
                 {0xc46b65, 0xc448e1, NativeAction::CaptureEnemyLeaderTarget},
                 {0xc0c62b, 0xc0c60d, NativeAction::EnemyChaseAngle}}) {
            request.identifier = jp ? service.jp : service.us;
            const auto compiled = bindings.compile(request, data);
            check(compiled.operation == service.operation && !compiled.parameter_bytes &&
                      compiled.temporary_input == ActionTemporaryInput::Independent &&
                      !apply_action(compiled, 0xabcd, actor, context, scene).handled,
                  "Enemy operation must bind to its actual native world service");
        }
        for (const auto service : {AppearanceBinding{0xc47044, 0xc44dc8, NativeAction::EnemyAngleVelocity},
                                   {0xc46b0a, 0xc44886, NativeAction::EnemyAngleDirection}}) {
            request.identifier = jp ? service.jp : service.us;
            const auto compiled = bindings.compile(request, data);
            check(compiled.operation == service.operation && !compiled.parameter_bytes &&
                  compiled.temporary_input == ActionTemporaryInput::Observed &&
                  !apply_action(compiled, 9, actor, context, scene).handled,
                  "Enemy angle service must observe the task temporary and require its owner");
        }
        request.identifier = jp ? 0xc0a68c : 0xc0a6ad;
        const auto sleep = bindings.compile(request, data);
        check(sleep.operation == NativeAction::EnemyDistanceSleep && sleep.parameter_bytes == 2 &&
              sleep.operand == 0x1234 && sleep.temporary_input == ActionTemporaryInput::Independent &&
              !apply_action(sleep, 9, actor, context, scene).handled,
              "Enemy distance sleep must consume its authored distance and require its owner");
        request.kind = ActionRequestKind::SetTickCallback;
        request.identifier = jp ? 0xc0d7bf : 0xc0d7f7;
        const auto callback = bindings.compile(request, data);
        check(callback.operation == NativeAction::TickEnemyPath &&
                  apply_action(callback, 0, actor, context, scene).handled &&
                  context.tick == ActorTickCallback::EnemyPath,
              "Enemy path callback did not select its typed actor phase");
    }
}
void directions_and_collision() {
    ActionActorState actor;
    ActorActionContext context;
    ActionSceneContext scene;
    auto apply = [&](NativeAction operation, unsigned operand = 0, unsigned temporary = 0) {
        return apply_action({operation, std::uint16_t(operand)}, temporary, actor, context, scene);
    };
    apply(NativeAction::SetDirection, 0, 6);
    check(context.direction == 6, "Direction follows temporary variable");
    context.path_state = 0x8001;
    const auto moved = apply(NativeAction::SetMovingDirection, 2);
    check(context.direction == 6 && context.moving_direction == 2 && moved.value == 2,
          "Path lock preserves facing but not requested movement direction");
    check(apply(NativeAction::RotateDirectionClockwise, 0, 3).value == 1,
          "Clockwise direction wraps at eight");
    for (unsigned path : {0u, 1u, 0x7fffu, 0x8000u, 0xffffu}) {
        context.path_state = path;
        context.direction = 6;
        apply(NativeAction::SetDirection, 0, 3);
        check(context.direction == (path & 0x8000 ? 6 : 3) && context.path_state == path,
              "Facing uses the sign of the authoritative full path word");
        apply(NativeAction::SetMovingDirection, 4);
        check(context.direction == (path & 0x8000 ? 6 : 4) && context.moving_direction == 4 &&
                  context.path_state == path,
              "Moving direction retains path state and shares its facing gate");
    }
    context.movement_speed = 0x0100;
    apply(NativeAction::MoveInDirection, 0, 1);
    check(actor.velocity[0] == 0xb505 && actor.velocity[1] == 0u - 0xb505 && context.moving_direction == 1,
          "Diagonal motion uses the authored fixed-point factor");
    const auto velocities = actor.velocity;
    check(!apply(NativeAction::MoveInDirection, 0, 8).handled && actor.velocity == velocities &&
              context.moving_direction == 1,
          "Undefined movement direction stays suspended without mutation");
    check(apply(NativeAction::DisableCollision).value == 0x8000 && context.collision_object == -32768,
          "Disabled collision sentinel");
    check(apply(NativeAction::HasCollision).value == 0, "Disabled is not a collision");
    context.collision_object = 0;
    check(apply(NativeAction::HasCollision).value == 0xffff, "First world object is a collision");
    apply(NativeAction::ClearCollision);
    check(context.collision_object == -1 && apply(NativeAction::HasCollision).value == 0,
          "Clear restores no-object sentinel");
}
void phases() {
    ActionActorState actor;
    actor.position = {100u << 16 | 0x8000, 200u << 16 | 0x8000, 5u << 16 | 0x8000};
    actor.velocity = {0x8000, 0xffff8000, 0x4000};
    actor.variables[0] = 0xfffc;
    actor.variables[1] = 8;
    ActorActionContext context;
    ActionSceneContext scene{90, 180, 2, 3};
    context.tick = ActorTickCallback::ProjectOffset;
    run_actor_tick_callback(actor, context, scene);
    check(context.projected_x == 6 && context.projected_y == 28, "Tick projection adds signed offsets");
    context.physics = ActorPhysics::Spatial;
    run_actor_physics(actor, context);
    check(actor.position[0] == (101u << 16) && actor.position[1] == (200u << 16) &&
              actor.position[2] == ((5u << 16) | 0xc000),
          "Three-axis fixed-point physics");
    context.projection = ActorProjection::WorldHeight;
    run_actor_projection(actor, context, scene);
    check(context.projected_x == 11 && context.projected_y == 15, "Projection uses world height");
    context.physics = ActorPhysics::Stationary;
    const auto position = actor.position;
    run_actor_physics(actor, context);
    check(actor.position == position, "Stationary physics preserves all coordinates");
    context.tick = ActorTickCallback::CenterCameraOffset;
    run_actor_tick_callback(actor, context, scene);
    check(scene.camera_x == std::uint16_t(101 - 4 - 128) && scene.camera_y == 200 + 8 - 112 &&
              scene.camera_changed,
          "Camera callback requests host refresh at the authored center");
    context.projection = ActorProjection::Absolute;
    actor.position[0] = 0xffff8000;
    run_actor_projection(actor, context, scene);
    check(context.projected_x == -1, "Screen positions preserve signed wraparound");
}
void script_geometry() {
    ActionActorState actor;
    ActorActionContext context;
    ActionSceneContext scene;
    actor.position = {0xfffe8123u, 0x80004567u, 0x00129876u};
    actor.variables[6] = 0x0001;
    actor.variables[7] = 0xffff;
    auto result = apply_action({NativeAction::SnapshotPosition}, 123, actor, context, scene);
    check(result.handled && result.value == 0x8000 && actor.variables[0] == 0xfffe &&
              actor.variables[1] == 0x8000,
          "Position snapshot stores whole world pixels and returns Y");
    result = apply_action({NativeAction::RestoreTargetPosition}, 321, actor, context, scene);
    check(result.handled && result.value == 0xffff && actor.position[0] == 0x00018123u &&
              actor.position[1] == 0xffff4567u && actor.position[2] == 0x00129876u &&
              actor.variables[0] == 0xfffe && actor.variables[1] == 0x8000,
          "Target restoration preserves fractions, height and earlier snapshot");
    for (const unsigned direction : {0u, 1u, 7u, 8u, 0x7fffu, 0x8000u, 0xffffu}) {
        const auto angle = apply_action({NativeAction::DirectionToAngle}, direction, actor, context, scene);
        const auto opposite = apply_action({NativeAction::OppositeDirection}, direction, actor, context, scene);
        check(angle.handled && angle.value == ((direction & 7) << 13) &&
                  opposite.handled && opposite.value == ((direction + 4) & 7),
              "Script direction arithmetic preserves authored 16-bit wrapping");
    }
}
void shared_event_flags() {
    std::array<std::uint8_t, 128> flags{};
    flags[0] = 0xa4;
    ActionActorState actor;
    ActorActionContext context;
    ActionSceneContext scene;
    const BoundAction read{NativeAction::ReadEventFlag, 2, 2};
    const BoundAction write{NativeAction::WriteEventFlag, 2, 2};
    check(!apply_action(read, 0, actor, context, scene).handled &&
              !apply_action(write, 1, actor, context, scene).handled && flags[0] == 0xa4,
          "Unbound flag owner must remain an explicit service request");
    scene.event_flags = flags;
    check(apply_action(write, 0x8000, actor, context, scene).value == 0xa6 && flags[0] == 0xa6 &&
              apply_action(read, 99, actor, context, scene).value == 1,
          "Any nonzero write sets the shared bit and returns the complete updated byte");
    flags[0] = 0xff;
    check(apply_action(write, 0, actor, context, scene).value == 0xfd && flags[0] == 0xfd &&
              apply_action(read, 99, actor, context, scene).value == 0,
          "Script observes external changes in the same authoritative flag owner");
    const auto before = flags;
    for (unsigned id : {0u, 1025u, 65535u})
        check(!apply_action({NativeAction::WriteEventFlag, std::uint16_t(id), 2}, 1,
                            actor, context, scene).handled && flags == before,
              "Invalid authored flag must not access unrelated state");
}
} // namespace
int main() {
    try {
        bindings();
        directions_and_collision();
        phases();
        script_geometry();
        shared_event_flags();
        std::cout << "Native action bindings: regional imports, pure actors, phase ordering passed\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
