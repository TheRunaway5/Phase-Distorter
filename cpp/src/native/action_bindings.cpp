#include "eb/native/action_bindings.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native {
namespace {
int signed_position(unsigned value) {
  value &= 0xffff;
  return value < 0x8000 ? int(value) : int(value) - 65536;
}
bool reads_temporary(NativeAction action) {
  switch (action) {
  case NativeAction::SetMovingDirection:
  case NativeAction::GetDirection:
  case NativeAction::SetMovementSpeed:
  case NativeAction::GetMovementSpeed:
  case NativeAction::SetSurfaceFlags:
  case NativeAction::DisableCollision:
  case NativeAction::ClearCollision:
  case NativeAction::HasCollision:
  case NativeAction::SelectFourInitial:
  case NativeAction::SelectFourAnimation:
  case NativeAction::SelectFourFirst:
  case NativeAction::SelectFourSecond:
  case NativeAction::CheckAppearanceVisible:
  case NativeAction::StepFourWalk:
  case NativeAction::StepEightAnimation:
  case NativeAction::SnapshotPosition:
  case NativeAction::RestoreTargetPosition:
  case NativeAction::ReadEventFlag:
  case NativeAction::ReleaseAppearance:
  case NativeAction::WithinLoadingArea:
  case NativeAction::RefreshFirstAndWithinArea:
  case NativeAction::StaggerTaskByRole:
  case NativeAction::CreateActor:
  case NativeAction::SurfaceAtCurrentPosition:
  case NativeAction::CheckProspectiveActorCollision:
  case NativeAction::InitializePartyActor:
  case NativeAction::RefreshPartyFollower:
  case NativeAction::ConsumeEnemyWaypoint:
  case NativeAction::EnemyContact:
  case NativeAction::EnemyContactCollision:
  case NativeAction::EnemyContactActive:
  case NativeAction::PrepareEnemyContactPalette:
  case NativeAction::EnemyDirectionalObstacles:
  case NativeAction::EnemyVerticalObstacles:
  case NativeAction::EnemyDistanceBand:
  case NativeAction::EnemyShortDistanceBand:
  case NativeAction::CaptureEnemyLeaderTarget:
  case NativeAction::EnemyChaseAngle:
  case NativeAction::EnemyDistanceSleep:
    return false;
  default:
    return true;
  }
}
unsigned integer(const ActionActorState &actor, unsigned axis) {
  return actor.position[axis] >> 16;
}
void project(const ActionActorState &actor, ActorActionContext &context,
             const ActionSceneContext &scene, bool offsets) {
  context.projected_x = signed_position(integer(actor, 0) - scene.camera_x +
                                        (offsets ? actor.variables[0] : 0));
  context.projected_y = signed_position(integer(actor, 1) - scene.camera_y +
                                        (offsets ? actor.variables[1] : 0));
}
} // namespace

ActionBindings::ActionBindings(GameVersion version) {
  // Regional serialized identifiers are confined to this import table. All
  // compiled instructions and running actor callbacks use the enums above.
  const auto add = [&](ActionRequestKind kind, unsigned us, unsigned jp,
                       NativeAction operation, unsigned bytes = 0) {
    entries_.push_back(
        {kind, version == GameVersion::JP ? jp : us, operation, bytes,
         kind == ActionRequestKind::CallEngine && reads_temporary(operation)
             ? ActionTemporaryInput::Observed
             : ActionTemporaryInput::Independent});
  };
  using K = ActionRequestKind;
  using A = NativeAction;
  add(K::CallEngine, 0xc0a65f, 0xc0a63e, A::SetDirection);
  add(K::CallEngine, 0xc0a651, 0xc0a630, A::SetMovingDirection, 1);
  add(K::CallEngine, 0xc0a673, 0xc0a652, A::GetDirection);
  add(K::CallEngine, 0xc0c682, 0xc0c664, A::RotateDirectionClockwise);
  add(K::CallEngine, 0xc0a685, 0xc0a664, A::SetMovementSpeed, 2);
  add(K::CallEngine, 0xc0a68b, 0xc0a66a, A::SetMovementSpeedFromTemporary);
  add(K::CallEngine, 0xc0a691, 0xc0a670, A::GetMovementSpeed);
  add(K::CallEngine, 0xc0c83b, 0xc0c81d, A::MoveInDirection);
  add(K::CallEngine, 0xc0a679, 0xc0a658, A::SetSurfaceFlags, 1);
  add(K::CallEngine, 0xc0a6d1, 0xc0a6b0, A::DisableCollision);
  add(K::CallEngine, 0xc0a82f, 0xc0a80e, A::DisableCollision);
  add(K::CallEngine, 0xc0a6da, 0xc0a6b9, A::ClearCollision);
  add(K::CallEngine, 0xc0a838, 0xc0a817, A::ClearCollision);
  add(K::CallEngine, 0xc0a6b8, 0xc0a697, A::HasCollision);
  add(K::CallEngine, 0xc0a4bf, 0xc0a49e, A::SelectFourInitial);
  add(K::CallEngine, 0xc0a480, 0xc0a45f, A::SelectFourAnimation);
  add(K::CallEngine, 0xc0a4a8, 0xc0a487, A::SelectFourFirst);
  add(K::CallEngine, 0xc0a4b2, 0xc0a491, A::SelectFourSecond);
  add(K::CallEngine, 0xc0c711, 0xc0c6f3, A::CheckAppearanceVisible);
  add(K::CallEngine, 0xc0a443, 0xc0a422, A::StepFourWalk);
  add(K::CallEngine, 0xc0a6e3, 0xc0a6c2, A::StepEightAnimation);
  add(K::CallEngine, 0xc46c45, 0xc449c9, A::SnapshotPosition);
  add(K::CallEngine, 0xc46c87, 0xc44a0b, A::RestoreTargetPosition);
  add(K::CallEngine, 0xc46b2d, 0xc448a9, A::DirectionToAngle);
  add(K::CallEngine, 0xc46b37, 0xc448b3, A::OppositeDirection);
  add(K::CallEngine, 0xc0a84c, 0xc0a82b, A::ReadEventFlag, 2);
  add(K::CallEngine, 0xc0a857, 0xc0a836, A::WriteEventFlag, 2);
  add(K::CallEngine, 0xc020f1, 0xc020ff, A::ReleaseAppearance);
  add(K::CallEngine, 0xc0c6b6, 0xc0c698, A::WithinLoadingArea);
  add(K::CallEngine, 0xc40015, 0xc40015, A::RefreshFirstAndWithinArea);
  add(K::CallEngine, 0xc40023, 0xc40023, A::StaggerTaskByRole);
  add(K::CallEngine, 0xc0a98b, 0xc0a96a, A::CreateActor, 4);
  add(K::CallEngine, 0xc0c7db, 0xc0c7bd, A::SurfaceAtCurrentPosition);
  add(K::CallEngine, 0xc06478, 0xc066a6, A::CheckProspectiveActorCollision);
  add(K::CallEngine, 0xc03daa, 0xc04009, A::InitializePartyActor);
  add(K::SetPhysicsCallback, 0xa26b, 0xa24a, A::PhysicsPartyFollower);
  add(K::SetTickCallback, 0xc05200, 0xc05425, A::TickWorldMaintenance);
  add(K::SetTickCallback, 0xc04d78, 0xc04fee, A::TickPartyFollower);
  add(K::SetTickCallback, 0xc0d7f7, 0xc0d7bf, A::TickEnemyPath);
  add(K::CallEngine, 0xc0d98f, 0xc0d957, A::ConsumeEnemyWaypoint);
  add(K::CallEngine, 0xc0d5b0, 0xc0d578, A::EnemyContact);
  add(K::CallEngine, 0xc0d15c, 0xc0d126, A::EnemyContactCollision);
  add(K::CallEngine, 0xc0d59b, 0xc0d563, A::EnemyContactActive);
  add(K::CallEngine, 0xc0d4de, 0xc0d4a6, A::PrepareEnemyContactPalette);
  add(K::CallEngine, 0xc05e82, 0xc060b0, A::EnemyDirectionalObstacles);
  add(K::CallEngine, 0xc05ece, 0xc060fc, A::EnemyVerticalObstacles);
  add(K::CallEngine, 0xc0c48f, 0xc0c471, A::EnemyDistanceBand);
  add(K::CallEngine, 0xc0c4af, 0xc0c491, A::EnemyShortDistanceBand);
  add(K::CallEngine, 0xc46b65, 0xc448e1, A::CaptureEnemyLeaderTarget);
  add(K::CallEngine, 0xc0c62b, 0xc0c60d, A::EnemyChaseAngle);
  add(K::CallEngine, 0xc47044, 0xc44dc8, A::EnemyAngleVelocity);
  add(K::CallEngine, 0xc46b0a, 0xc44886, A::EnemyAngleDirection);
  add(K::CallEngine, 0xc0a6ad, 0xc0a68c, A::EnemyDistanceSleep, 2);
  if (version == GameVersion::US)
    add(K::CallEngine, 0xc04ef0, 0, A::RefreshPartyFollower);
  add(K::SetPhysicsCallback, 0x9fc8, 0x9fa7, A::PhysicsPlanar);
  add(K::SetPhysicsCallback, 0x9fca, 0x9fa9, A::PhysicsPlanar);
  add(K::SetPhysicsCallback, 0xa00c, 0x9feb, A::PhysicsSpatial);
  add(K::SetPhysicsCallback, 0x9ff0, 0x9fcf, A::PhysicsStationary);
  add(K::SetPhysicsCallback, 0x9ff1, 0x9fd0, A::PhysicsSpatialSurface);
  add(K::SetPhysicsCallback, 0xa37a, 0xa359, A::PhysicsPlanarSurface);
  add(K::SetPhysicsCallback, 0xa360, 0xa33f, A::PhysicsCollisionSurface);
  add(K::SetPhysicsCallback, 0xa384, 0xa363, A::PhysicsCollision);
  add(K::SetProjectionCallback, 0xa023, 0xa002, A::ProjectionWorld);
  add(K::SetProjectionCallback, 0xa03a, 0xa019, A::ProjectionWorldHeight);
  add(K::SetProjectionCallback, 0xa0bb, 0xa09a, A::ProjectionAbsolute);
  add(K::SetProjectionCallback, 0xa055, 0xa034, A::ProjectionOverlay);
  add(K::SetProjectionCallback, 0xa039, 0xa018, A::ProjectionUnchanged);
  add(K::SetTickCallback, 0xc48be1, 0xc4622b, A::TickProject);
  add(K::SetTickCallback, 0xc48c02, 0xc4624c, A::TickProjectOffset);
  add(K::SetTickCallback, 0xc48c2b, 0xc46275, A::TickCenterCamera);
  add(K::SetTickCallback, 0xc48c3e, 0xc46288, A::TickCenterCameraOffset);
  add(K::SetDrawCallback, 0xa3a4, 0xa383, A::DrawWorld);

  // Audited source input contracts only. These remain unported, opaque calls;
  // the compiler may stop an older result's liveness at their full overwrite
  // without interpreting any trailing inline operands or executing a stub.
  // Every listed routine first obtains its input from authored operands or
  // named scene/actor state. None reads ENTITY_SCRIPT_TEMPVARS itself.
  const auto independent = [&](K kind, unsigned us, unsigned jp) {
    entries_.push_back({kind, version == GameVersion::JP ? jp : us,
                        A::Unsupported, 0, ActionTemporaryInput::Independent});
  };
  independent(K::CallEngine, 0xc0778a, 0xc079da); // Mini-ghost orbit.
  independent(K::CallEngine, 0xc09f82,
              0xc09f61); // CHOOSE_RANDOM, inline bound.
  independent(K::CallEngine, 0xc09fbb,
              0xc09f9a); // ACTIONSCRIPT_FADE_OUT, inline rate.
  independent(K::CallEngine, 0xc0a841, 0xc0a820); // Play inline sound.
  independent(K::CallEngine, 0xc0a88d,
              0xc0a86c); // Queue two inline dialogue-pointer operands.
  independent(K::CallEngine, 0xc0a8b3, 0xc0a892); // Two inline actor operands.
  independent(K::CallEngine, 0xc0a943,
              0xc0a922); // Position of inline party member.
  independent(K::CallEngine, 0xc0aa6e, 0xc0aa4d); // Inline direction and frame.
  independent(K::CallEngine, 0xc0c48f,
              0xc0c471); // Current actor interaction predicate.
  independent(K::CallEngine, 0xc0d59b,
              0xc0d563); // Battle/swirl state predicate.
  independent(K::CallEngine, 0xc46adb,
              0xc44857); // Position and actor variables.
  independent(K::CallEngine, 0xc46b65,
              0xc448e1); // Save leader position in actor variables.
  independent(K::CallEngine, 0xc46e46,
              0xc44bca); // Set action-script scene state to one.
  independent(K::CallEngine, 0xc46e74,
              0xc44bf8); // TEST_PLAYER_IN_AREA, actor variables.
  independent(K::CallEngine, 0xc4ece7,
              0xc4bf42); // Cast-screen position predicate.
  // Installing these audited callbacks does not invoke them or read a task
  // temporary. Their later tick contracts use named actor/scene state too.
  independent(K::SetTickCallback, 0xc0d7e0, 0xc0d7a8);
  independent(K::SetTickCallback, 0xc476a5, 0xc45429);
  independent(K::SetTickCallback, 0xc47705, 0xc45489);
  independent(K::SetTickCallback, 0xc48b3b, 0xc4617c);
  // C4258C writes fixed display registers and returns (input & 0xff00)|0xef.
  // Its effects are independent, but the high byte must flow through to any
  // later reader. The source reads no inline operands. This is NOT a native
  // display implementation: the operation remains Unsupported.
  entries_.push_back(
      {K::CallEngine, version == GameVersion::JP ? 0xc424cau : 0xc4258cu,
       A::Unsupported, 0, ActionTemporaryInput::Forwarded, true});
}

BoundAction ActionBindings::compile(const ActionEngineRequest &request,
                                    const ActionScriptData &data) const {
  if (request.kind == ActionRequestKind::ClearTickCallback)
    return {NativeAction::ClearTickCallback, 0, 0, false,
            ActionTemporaryInput::Independent};
  const auto found =
      std::find_if(entries_.begin(), entries_.end(), [&](const auto &entry) {
        return entry.kind == request.kind &&
               entry.identifier == request.identifier;
      });
  if (found == entries_.end())
    return {};
  if (found->operation == NativeAction::CreateActor) {
    const auto word = [&](unsigned delta) {
      const unsigned cursor = (request.parameters & 0xff0000) |
                              ((request.parameters + delta) & 0xffff);
      // The original helper loads a whole word before incrementing its
      // 16-bit content cursor. Its FFFF high byte would escape into the
      // following bank. None of the imported creation sites does this;
      // reject that undeclared cross-bank dependency rather than wrap it.
      if ((cursor & 0xffff) == 0xffff)
        throw std::invalid_argument(
            "Actor creation word crosses its authored content bank");
      return std::uint16_t(data.byte(cursor) | unsigned(data.byte(cursor + 1))
                                                   << 8);
    };
    BoundAction result{found->operation,       0,   4, false,
                       found->temporary_input, true};
    result.payload = CreateActorOperands{word(0), word(2)};
    return result;
  }
  if (found->parameter_bytes > 2)
    throw std::logic_error("Compound action operands require a typed payload");
  std::uint16_t operand = 0;
  for (unsigned i = 0; i < found->parameter_bytes; ++i) {
    const unsigned cursor =
        (request.parameters & 0xff0000) | ((request.parameters + i) & 0xffff);
    operand |= std::uint16_t(data.byte(cursor)) << (i * 8);
  }
  return {found->operation,       operand,
          found->parameter_bytes, false,
          found->temporary_input, found->inline_parameters_known};
}

NativeActionResult apply_action(const BoundAction &action,
                                std::uint16_t temporary,
                                ActionActorState &actor,
                                ActorActionContext &context,
                                ActionSceneContext &scene) {
  // These operations mutate actor-owned data or select named callbacks. The
  // scheduler applies movement/projection only at the corresponding phase.
  auto result = NativeActionResult{true, temporary, action.parameter_bytes};
  switch (action.operation) {
  case NativeAction::Unsupported:
  case NativeAction::ReleaseAppearance:
  case NativeAction::WithinLoadingArea:
  case NativeAction::RefreshFirstAndWithinArea:
  case NativeAction::StaggerTaskByRole:
  case NativeAction::CreateActor:
  case NativeAction::SurfaceAtCurrentPosition:
  case NativeAction::CheckProspectiveActorCollision:
  case NativeAction::InitializePartyActor:
  case NativeAction::RunWorldMaintenance:
  case NativeAction::RefreshPartyFollower:
  case NativeAction::RunPartyFollower:
  case NativeAction::RunEnemyPath:
  case NativeAction::ConsumeEnemyWaypoint:
  case NativeAction::EnemyContact:
  case NativeAction::EnemyContactCollision:
  case NativeAction::EnemyContactActive:
  case NativeAction::PrepareEnemyContactPalette:
  case NativeAction::EnemyDirectionalObstacles:
  case NativeAction::EnemyVerticalObstacles:
  case NativeAction::EnemyDistanceBand:
  case NativeAction::EnemyShortDistanceBand:
  case NativeAction::CaptureEnemyLeaderTarget:
  case NativeAction::EnemyChaseAngle:
  case NativeAction::EnemyDistanceSleep:
  case NativeAction::EnemyAngleVelocity:
  case NativeAction::EnemyAngleDirection:
  case NativeAction::SelectFourInitial:
  case NativeAction::SelectFourAnimation:
  case NativeAction::SelectFourFirst:
  case NativeAction::SelectFourSecond:
  case NativeAction::CheckAppearanceVisible:
  case NativeAction::StepFourWalk:
  case NativeAction::StepEightAnimation:
    return {};
  case NativeAction::SetDirection:
    if (!(context.path_state & 0x8000))
      context.direction = temporary;
    break;
  case NativeAction::SetMovingDirection:
    if (!(context.path_state & 0x8000))
      context.direction = action.operand;
    context.moving_direction = action.operand;
    result.value = action.operand;
    break;
  case NativeAction::GetDirection:
    result.value = context.direction;
    break;
  case NativeAction::RotateDirectionClockwise:
    result.value = (context.direction + temporary) & 7;
    break;
  case NativeAction::SetMovementSpeed:
    context.movement_speed = action.operand;
    result.value = action.operand;
    break;
  case NativeAction::SetMovementSpeedFromTemporary:
    context.movement_speed = temporary;
    break;
  case NativeAction::GetMovementSpeed:
    result.value = context.movement_speed;
    break;
  case NativeAction::MoveInDirection: {
    // The authored primitive defines the eight compass directions only.
    // Its out-of-range source path used uninitialized locals; keep invalid
    // content suspended instead of inventing a direction or movement.
    if (temporary >= 8)
      return {};
    context.moving_direction = temporary;
    const std::uint32_t product = std::uint32_t(context.movement_speed) *
                                  (temporary & 1 ? 0xb505u : 0x10000u);
    const auto magnitude =
        (product >> 8) | (product & 0x80000000u ? 0xff000000u : 0);
    constexpr std::array<int, 8> dx{0, 1, 1, 1, 0, -1, -1, -1};
    constexpr std::array<int, 8> dy{-1, -1, 0, 1, 1, 1, 0, -1};
    const auto component = [magnitude](int sign) {
      return sign == 0 ? 0u : sign > 0 ? magnitude : 0u - magnitude;
    };
    actor.velocity[0] = component(dx[temporary]);
    actor.velocity[1] = component(dy[temporary]);
    result.value = std::uint16_t(actor.velocity[1]);
    break;
  }
  case NativeAction::SetSurfaceFlags:
    context.surface_flags = action.operand;
    result.value = action.operand;
    break;
  case NativeAction::DisableCollision:
    context.collision_object = -32768;
    result.value = 0x8000;
    break;
  case NativeAction::ClearCollision:
    context.collision_object = -1;
    result.value = 0xffff;
    break;
  case NativeAction::HasCollision:
    result.value = context.collision_object >= 0 ? 0xffff : 0;
    break;
  case NativeAction::PhysicsPlanar:
    context.physics = ActorPhysics::Planar;
    break;
  case NativeAction::PhysicsSpatial:
    context.physics = ActorPhysics::Spatial;
    break;
  case NativeAction::PhysicsStationary:
    context.physics = ActorPhysics::Stationary;
    break;
  case NativeAction::PhysicsPlanarSurface:
    context.physics = ActorPhysics::PlanarSurface;
    break;
  case NativeAction::PhysicsSpatialSurface:
    context.physics = ActorPhysics::SpatialSurface;
    break;
  case NativeAction::PhysicsCollisionSurface:
    context.physics = ActorPhysics::CollisionSurface;
    break;
  case NativeAction::PhysicsCollision:
    context.physics = ActorPhysics::Collision;
    break;
  case NativeAction::PhysicsPartyFollower:
    context.physics = ActorPhysics::PartyFollower;
    break;
  case NativeAction::TickPartyFollower:
    context.tick = ActorTickCallback::PartyFollower;
    break;
  case NativeAction::TickEnemyPath:
    context.tick = ActorTickCallback::EnemyPath;
    break;
  case NativeAction::TickWorldMaintenance:
    context.tick = ActorTickCallback::WorldMaintenance;
    break;
  case NativeAction::ProjectionWorld:
    context.projection = ActorProjection::World;
    break;
  case NativeAction::ProjectionWorldHeight:
    context.projection = ActorProjection::WorldHeight;
    break;
  case NativeAction::ProjectionAbsolute:
    context.projection = ActorProjection::Absolute;
    break;
  case NativeAction::ProjectionOverlay:
    context.projection = ActorProjection::Overlay;
    break;
  case NativeAction::ProjectionUnchanged:
    context.projection = ActorProjection::Unchanged;
    break;
  case NativeAction::TickProject:
    context.tick = ActorTickCallback::Project;
    break;
  case NativeAction::TickProjectOffset:
    context.tick = ActorTickCallback::ProjectOffset;
    break;
  case NativeAction::TickCenterCamera:
    context.tick = ActorTickCallback::CenterCamera;
    break;
  case NativeAction::TickCenterCameraOffset:
    context.tick = ActorTickCallback::CenterCameraOffset;
    break;
  case NativeAction::ClearTickCallback:
    context.tick = ActorTickCallback::None;
    break;
  case NativeAction::DrawWorld:
    context.draw_world = true;
    break;
  case NativeAction::SnapshotPosition:
    actor.variables[0] = std::uint16_t(integer(actor, 0));
    actor.variables[1] = std::uint16_t(integer(actor, 1));
    result.value = actor.variables[1];
    break;
  case NativeAction::RestoreTargetPosition:
    actor.position[0] = (std::uint32_t(actor.variables[6]) << 16) |
                        (actor.position[0] & 0xffffu);
    actor.position[1] = (std::uint32_t(actor.variables[7]) << 16) |
                        (actor.position[1] & 0xffffu);
    result.value = actor.variables[7];
    break;
  case NativeAction::DirectionToAngle:
    result.value = std::uint16_t(unsigned(temporary) * 0x2000u);
    break;
  case NativeAction::OppositeDirection:
    result.value = (temporary + 4) & 7;
    break;
  case NativeAction::ReadEventFlag:
  case NativeAction::WriteEventFlag: {
    const unsigned id = action.operand;
    if (!id || (id - 1) / 8 >= scene.event_flags.size())
      return {};
    auto &value = scene.event_flags[(id - 1) / 8];
    const unsigned bit = 1u << ((id - 1) & 7);
    if (action.operation == NativeAction::ReadEventFlag)
      result.value = (value & bit) != 0;
    else {
      value = std::uint8_t(temporary ? value | bit : value & ~bit);
      // SET_EVENT_FLAG returns the whole updated byte, not a predicate.
      result.value = value;
    }
    break;
  }
  }
  return result;
}

void run_actor_tick_callback(const ActionActorState &actor,
                             ActorActionContext &context,
                             ActionSceneContext &scene) {
  switch (context.tick) {
  case ActorTickCallback::PartyFollower:
  case ActorTickCallback::WorldMaintenance:
  case ActorTickCallback::EnemyPath:
    throw std::logic_error(
        "Native actor callback requires its world service");
  case ActorTickCallback::None:
    break;
  case ActorTickCallback::Project:
    project(actor, context, scene, false);
    break;
  case ActorTickCallback::ProjectOffset:
    project(actor, context, scene, true);
    break;
  case ActorTickCallback::CenterCamera:
  case ActorTickCallback::CenterCameraOffset: {
    const bool offset = context.tick == ActorTickCallback::CenterCameraOffset;
    scene.camera_x = std::uint16_t(integer(actor, 0) +
                                   (offset ? actor.variables[0] : 0) - 128);
    scene.camera_y = std::uint16_t(integer(actor, 1) +
                                   (offset ? actor.variables[1] : 0) - 112);
    // The host world must refresh visible map/NPC content from this position.
    // This pure callback never performs hidden streaming or spawning itself.
    scene.camera_changed = true;
    break;
  }
  }
}

void run_actor_physics(ActionActorState &actor,
                       const ActorActionContext &context) {
  if (context.physics != ActorPhysics::Planar &&
      context.physics != ActorPhysics::Spatial &&
      context.physics != ActorPhysics::Stationary)
    throw std::logic_error(
        "Native physics callback requires a world movement service");
  if (context.physics != ActorPhysics::Stationary)
    integrate_action_motion(actor, context.physics == ActorPhysics::Spatial);
}

void run_actor_projection(const ActionActorState &actor,
                          ActorActionContext &context,
                          const ActionSceneContext &scene) {
  switch (context.projection) {
  case ActorProjection::World:
    project(actor, context, scene, false);
    break;
  case ActorProjection::WorldHeight:
    project(actor, context, scene, false);
    context.projected_y =
        signed_position(unsigned(context.projected_y) - integer(actor, 2));
    break;
  case ActorProjection::Absolute:
    context.projected_x = signed_position(integer(actor, 0));
    context.projected_y = signed_position(integer(actor, 1));
    break;
  case ActorProjection::Overlay:
    context.projected_x =
        signed_position(integer(actor, 0) - scene.overlay_camera_x);
    context.projected_y =
        signed_position(integer(actor, 1) - scene.overlay_camera_y);
    break;
  case ActorProjection::Unchanged:
    break;
  }
}
} // namespace eb::native
