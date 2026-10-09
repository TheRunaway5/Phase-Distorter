#include "eb/native/action_bindings.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
void check(bool condition, const char *message) {
    if (!condition)
        throw std::runtime_error(message);
}
BoundAction binding(NativeAction operation,unsigned operand=0,unsigned bytes=0) {
    BoundAction result;result.operation=operation;result.operand=std::uint16_t(operand);
    result.parameter_bytes=bytes;return result;
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
        for (const auto operation : {
                 std::array<unsigned, 4>{0xc0a864,0xc0a843,unsigned(NativeAction::CopyPartyPosition),1},
                 {0xc49841,0xc46e8b,unsigned(NativeAction::OpenPrayerWindow),0},
                 {0xc2ea74,0xc2e98d,unsigned(NativeAction::ClosePrayerWindow),0},
                 {0xc2eacf,0xc2e9e8,unsigned(NativeAction::WindowAnimationActive),0},
                 {0xc4a7b0,0xc47c19,unsigned(NativeAction::AdvanceEncounterEffects),0}}) {
            request.identifier = operation[jp];
            const auto compiled=bindings.compile(request,data);
            check(unsigned(compiled.operation)==operation[2] && compiled.parameter_bytes==operation[3] &&
                      compiled.temporary_input==ActionTemporaryInput::Independent &&
                      (!operation[3] || compiled.operand==0x34) &&
                      !apply_action(compiled,0xabcd,actor,context,scene).handled,
                  "Prayer actor binding lost regional operand/service ownership");
        }
        request.identifier = 0xabcdef;
        const auto unknown = bindings.compile(request, data);
        check(unknown.operation == NativeAction::Unsupported, "Unknown routine remains unsupported");
        check(!apply_action(unknown, 9, actor, context, scene).handled && context.movement_speed == 0x1234,
              "Unsupported binding never silently changes state");
        request.kind = ActionRequestKind::ReadGameVariable;
        request.identifier = 0x0099;
        const auto pending_dma = bindings.compile(request, data);
        check(pending_dma.operation == NativeAction::ReadPendingDmaBytes &&
                  pending_dma.temporary_input == ActionTemporaryInput::Independent &&
                  !pending_dma.parameter_bytes &&
                  !apply_action(pending_dma, 7, actor, context, scene).handled,
              "Photograph DMA wait must read its actual shared counter through the world owner");
        request.kind = ActionRequestKind::CallEngine;
        check(bindings.compile(request, data).operation == NativeAction::Unsupported,
              "DMA counter address was admitted as an unrelated engine routine");
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
                 {0xc0a6e3, 0xc0a6c2, NativeAction::StepEightAnimation},
                 {0xc0aaac, 0xc0aa8b, NativeAction::SelectEightCurrent}}) {
            request.identifier = jp ? appearance.jp : appearance.us;
            const auto bound_appearance = bindings.compile(request, data);
            check(bound_appearance.operation == appearance.operation && !bound_appearance.parameter_bytes &&
                      bound_appearance.temporary_input == ActionTemporaryInput::Independent &&
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
        for (const auto service : {
                 std::array<unsigned,4>{0xc0a86f,0xc0a84e,unsigned(NativeAction::CopySpritePosition),2},
                 {0xc0a841,0xc0a820,unsigned(NativeAction::PlaySound),2},
                 {0xc0ca4e,0xc0ca30,unsigned(NativeAction::VelocityDistanceSleep),0},
                 {0xc0a938,0xc0a917,unsigned(NativeAction::CaptureSpriteTarget),2},
                 {0xc0a94e,0xc0a92d,unsigned(NativeAction::FaceNpcTowardActor),2},
                 {0xc0a959,0xc0a938,unsigned(NativeAction::FaceSpriteTowardActor),2},
                 {0xc05e76,0xc060a4,unsigned(NativeAction::CheckProspectiveTerrain),0},
                 {0xc064a6,0xc066d4,unsigned(NativeAction::CheckProspectiveNpcCollision),0}}) {
            request.identifier=service[jp];
            const auto compiled=bindings.compile(request,data);
            check(unsigned(compiled.operation)==service[2] && compiled.parameter_bytes==service[3] &&
                      (!service[3] || compiled.operand==0x1234) &&
                      compiled.temporary_input==(service[2]==unsigned(NativeAction::VelocityDistanceSleep) ?
                          ActionTemporaryInput::Observed : ActionTemporaryInput::Independent) &&
                      !apply_action(compiled,7,actor,context,scene).handled,
                  "Prayer inline sprite/sound or live velocity wait lost its actual owner contract");
        }
        for (const auto addresses : {std::array<unsigned,2>{0xc0a92d,0xc0a90c},
                                     {0xc0a8c6,0xc0a8a5}}) {
            request.identifier=addresses[jp];
            const auto compiled=bindings.compile(request,data);
            check(compiled.operation==NativeAction::Unsupported &&
                      compiled.temporary_input==ActionTemporaryInput::Independent &&
                      !compiled.inline_parameters_known && !apply_action(compiled,7,actor,context,scene).handled,
                  "Independent target helper contract must keep its real unported boundary");
        }
        request.kind = ActionRequestKind::SetTickCallback;
        request.identifier = jp ? 0xc0d7bf : 0xc0d7f7;
        const auto callback = bindings.compile(request, data);
        check(callback.operation == NativeAction::TickEnemyPath &&
                  apply_action(callback, 0, actor, context, scene).handled &&
                  context.tick == ActorTickCallback::EnemyPath,
              "Enemy path callback did not select its typed actor phase");
    }
}
void velocity_wait() {
    ActionActorState actor;
    for (const auto sample : {
             std::array<std::uint32_t,4>{0x10000,0,10,10},
             {0xffff0000,0,10,10},{0x4000,0xffff8000,3,6},
             {0,0,10,0xffff},{0,0,0x8000,1},
             {0x10000,0,0xffff,0xffff},{0x80000000,0x10000,2,2},
             {0x80000000,0x80000000,0x8000,1},
             {0x7fffffff,0,0x7fff,0}}) {
        actor.velocity={sample[0],sample[1],0x12345678};
        const auto position=actor.position, velocity=actor.velocity;
        check(velocity_distance_sleep(actor,std::uint16_t(sample[2]))==sample[3] &&
                  actor.position==position && actor.velocity==velocity,
              "Velocity task sleep lost signed32, subpixel, zero divisor or quotient-word behavior");
    }
}
void movement_bounds_direction() {
    for (const auto version : {eb::GameVersion::US,eb::GameVersion::JP}) {
        ActionBindings bindings(version);
        const ActionScriptData data(std::vector<std::uint8_t>{0x09},0);
        const ActionEngineRequest request{ActionRequestKind::CallEngine,1,
            version==eb::GameVersion::JP ? 0xc44fedu:0xc47269u,0,0,7,0};
        const auto bound=bindings.compile(request,data);
        check(bound.operation==NativeAction::CheckMovementBounds && !bound.parameter_bytes &&
                  bound.temporary_input==ActionTemporaryInput::Independent,
              "Movement bounds direction lost its regional pure independent scalar contract");
        for(const auto values : {
            std::array<unsigned,7>{2,2,1,3,1,3,0}, {1,1,1,3,1,3,0}, {3,3,1,3,1,3,0},
            {0,0,1,3,1,3,3}, {4,0,1,3,1,3,7}, {2,0,1,3,1,3,5}, {2,4,1,3,1,3,1},
            {0x8000,2,0,0x7fff,1,3,7}, {0x7fff,2,0x8000,0xffff,1,3,3},
            {2,0x8000,1,3,0,0x7fff,1}, {2,0x7fff,1,3,0x8000,0xffff,5},
            {0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0}, {0,0,0,0,0,0,0},
            {5,2,0xfff0,0x10,1,3,3}, {0xfff5,2,0xfff0,0x10,1,3,7}}) {
            ActionActorState actor;
            actor.position={std::uint32_t(values[0]<<16)|0x1234u,
                            std::uint32_t(values[1]<<16)|0xabcdu,0x98765432u};
            actor.velocity={1,2,3};actor.variables={std::uint16_t(values[2]),std::uint16_t(values[3]),
                std::uint16_t(values[4]),std::uint16_t(values[5]),55,66,77,88};
            const auto before=actor;ActorActionContext context;ActionSceneContext scene;
            const auto result=apply_action(bound,0xabcd,actor,context,scene);
            check(result.handled && !result.parameter_bytes && result.value==values[6] &&
                      actor.variables==before.variables && actor.position==before.position &&
                      actor.velocity==before.velocity && actor.animation==before.animation &&
                      actor.priority==before.priority && actor.alive==before.alive,
                  "Movement bounds direction lost unsigned inclusive edges/axis precedence or changed state");
        }
    }
}
void movement_bounds() {
    for (const auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
        ActionBindings bindings(version);
        for (const auto x_extent : {0u,1u,0x7fffu,0x8000u,0xffffu})
          for (const auto y_extent : {0u,1u,0x7fffu,0x8000u,0xffffu}) {
            const std::array<std::uint8_t,4> bytes{
                std::uint8_t(x_extent),std::uint8_t(x_extent>>8),
                std::uint8_t(y_extent),std::uint8_t(y_extent>>8)};
            ActionScriptData data(bytes,0x30195);
            const ActionEngineRequest request{ActionRequestKind::CallEngine,1,
                version==eb::GameVersion::JP ? 0xc0a943u:0xc0a964u,0,0,7,0x30195};
            const auto bound=bindings.compile(request,data);
            check(bound.operation==NativeAction::SetMovementBounds && bound.parameter_bytes==4 &&
                      bound.temporary_input==ActionTemporaryInput::Independent &&
                      std::get<MovementBoundsOperands>(bound.payload)==MovementBoundsOperands{
                          std::uint16_t(x_extent),std::uint16_t(y_extent)},
                  "Movement bounds lost its two literal words or independent input contract");
            for (const auto x : {0u,1u,0x7fffu,0x8000u,0xffffu})
              for (const auto y : {0u,1u,0x7fffu,0x8000u,0xffffu}) {
                ActionActorState actor;
                actor.position={std::uint32_t(x<<16)|0x1234u,std::uint32_t(y<<16)|0xabcdu,0x98765432u};
                actor.velocity={0x80000000u,0xffff1234u,0x13572468u};
                actor.variables={11,22,33,44,55,66,77,88};
                actor.animation=0x1234;actor.priority=3;
                const auto before=actor;
                ActorActionContext context;ActionSceneContext scene;
                const auto response=apply_action(bound,0xabcd,actor,context,scene);
                const std::array<std::uint16_t,8> expected{
                    std::uint16_t(x-x_extent),std::uint16_t(x+x_extent),
                    std::uint16_t(y-y_extent),std::uint16_t(y+y_extent),55,66,77,88};
                check(response.handled && response.parameter_bytes==4 && response.value==expected[3] &&
                          actor.variables==expected && actor.position==before.position &&
                          actor.velocity==before.velocity && actor.animation==before.animation &&
                          actor.priority==before.priority && actor.alive==before.alive,
                      "Movement bounds lost word wrap/scalar return or changed unrelated actor state");
              }
          }
        BoundAction invalid;invalid.operation=NativeAction::SetMovementBounds;invalid.parameter_bytes=4;
        ActionActorState actor;actor.variables.fill(0x1234);
        ActorActionContext context;ActionSceneContext scene;
        try { (void)apply_action(invalid,0,actor,context,scene);
              throw std::runtime_error("Movement bounds accepted an absent typed payload"); }
        catch(const std::bad_variant_access &) {}
        check(actor.variables==std::array<std::uint16_t,8>{0x1234,0x1234,0x1234,0x1234,0x1234,0x1234,0x1234,0x1234},
              "Malformed bounds payload partially changed actor variables");
        const ActionScriptData wrapped(std::vector<ActionScriptBlock>{
            {0x30000,{0,0x80}},{0x3fffe,{0xff,0xff}}},std::vector<std::uint32_t>{0x3fffe});
        ActionEngineRequest request{ActionRequestKind::CallEngine,1,
            version==eb::GameVersion::JP ? 0xc0a943u:0xc0a964u,0,0,7,0x3fffe};
        check(std::get<MovementBoundsOperands>(bindings.compile(request,wrapped).payload)==
                  MovementBoundsOperands{0xffff,0x8000},
              "Second bounds word did not follow the source's wrapped 16-bit content cursor");
        request.parameters=0x3ffff;
        try { (void)bindings.compile(request,wrapped);
              throw std::runtime_error("Bounds accepted an undeclared cross-bank word"); }
        catch(const std::invalid_argument &) {}
    }
}
void directions_and_collision() {
    ActionActorState actor;
    ActorActionContext context;
    ActionSceneContext scene;
    auto apply = [&](NativeAction operation, unsigned operand = 0, unsigned temporary = 0) {
        return apply_action(binding(operation,operand), temporary, actor, context, scene);
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
    ActionSceneContext scene;
    scene.camera_x=90;scene.camera_y=180;scene.overlay_camera_x=2;scene.overlay_camera_y=3;
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
    for (const auto callback : {ActorTickCallback::TeleportLeader,
                               ActorTickCallback::TeleportFollower,
                               ActorTickCallback::TeleportFailureFollower}) {
        context.tick = callback;
        bool rejected = false;
        try {
            run_actor_tick_callback(actor, context, scene);
        } catch (const std::logic_error &) {
            rejected = true;
        }
        check(rejected,
              "Teleport callbacks require the bound actor movement service");
    }
}
void script_geometry() {
    ActionActorState actor;
    ActorActionContext context;
    ActionSceneContext scene;
    actor.position = {0xfffe8123u, 0x80004567u, 0x00129876u};
    actor.variables[6] = 0x0001;
    actor.variables[7] = 0xffff;
    auto result = apply_action(binding(NativeAction::SnapshotPosition), 123, actor, context, scene);
    check(result.handled && result.value == 0x8000 && actor.variables[0] == 0xfffe &&
              actor.variables[1] == 0x8000,
          "Position snapshot stores whole world pixels and returns Y");
    result = apply_action(binding(NativeAction::RestoreTargetPosition), 321, actor, context, scene);
    check(result.handled && result.value == 0xffff && actor.position[0] == 0x00018123u &&
              actor.position[1] == 0xffff4567u && actor.position[2] == 0x00129876u &&
              actor.variables[0] == 0xfffe && actor.variables[1] == 0x8000,
          "Target restoration preserves fractions, height and earlier snapshot");
    for (const unsigned direction : {0u, 1u, 7u, 8u, 0x7fffu, 0x8000u, 0xffffu}) {
        const auto angle = apply_action(binding(NativeAction::DirectionToAngle), direction, actor, context, scene);
        const auto opposite = apply_action(binding(NativeAction::OppositeDirection), direction, actor, context, scene);
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
    const auto read=binding(NativeAction::ReadEventFlag,2,2);
    const auto write=binding(NativeAction::WriteEventFlag,2,2);
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
        check(!apply_action(binding(NativeAction::WriteEventFlag,id,2), 1,
                            actor, context, scene).handled && flags == before,
              "Invalid authored flag must not access unrelated state");
}
} // namespace
int main() {
    try {
        bindings();
        velocity_wait();
        movement_bounds();
        movement_bounds_direction();
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
