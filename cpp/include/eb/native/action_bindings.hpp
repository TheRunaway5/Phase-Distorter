#pragma once

#include "eb/native/action_scripts.hpp"
#include <variant>

namespace eb::native {

// Names used by the native world. Source identifiers are resolved only by the
// content compiler below, never stored in actor callbacks or dispatched here.
enum class NativeAction {
  Unsupported,
  SetDirection,
  SetMovingDirection,
  GetDirection,
  RotateDirectionClockwise,
  SetMovementSpeed,
  SetMovementSpeedFromTemporary,
  GetMovementSpeed,
  MoveInDirection,
  SetSurfaceFlags,
  DisableCollision,
  ClearCollision,
  HasCollision,
  PhysicsPlanar,
  PhysicsSpatial,
  PhysicsStationary,
  ProjectionWorld,
  ProjectionWorldHeight,
  ProjectionAbsolute,
  ProjectionOverlay,
  ProjectionUnchanged,
  TickProject,
  TickProjectOffset,
  TickCenterCamera,
  TickCenterCameraOffset,
  ClearTickCallback,
  DrawWorld,
  // Resolved here, executed by the host's SpriteAppearance owner. apply_action
  // deliberately returns handled=false for these service-specific operations.
  SelectFourInitial,
  SelectFourAnimation,
  SelectFourFirst,
  SelectFourSecond,
  CheckAppearanceVisible,
  StepFourWalk,
  StepEightAnimation,
  // Script-local geometry. Position snapshots contain integer world pixels;
  // restoring the target preserves the actor's authored subpixel fractions.
  SnapshotPosition,
  RestoreTargetPosition,
  DirectionToAngle,
  OppositeDirection,
  ReadEventFlag,
  WriteEventFlag,
  // Scene lifecycle requests, fulfilled by WorldActorServices with the
  // existing enemy/party owners. Pure apply_action leaves them pending.
  ReleaseAppearance,
  WithinLoadingArea,
  RefreshFirstAndWithinArea,
  StaggerTaskByRole,
  CreateActor,
  SurfaceAtCurrentPosition,
  CheckProspectiveActorCollision,
  PhysicsPlanarSurface,
  PhysicsSpatialSurface,
  PhysicsCollisionSurface,
  PhysicsCollision,
  InitializePartyActor,
  PhysicsPartyFollower,
  TickWorldMaintenance,
  RunWorldMaintenance,
  RefreshPartyFollower,
  TickPartyFollower,
  RunPartyFollower,
  TickEnemyPath,
  RunEnemyPath,
  ConsumeEnemyWaypoint,
  EnemyContact,
  EnemyContactCollision,
  EnemyContactActive,
  PrepareEnemyContactPalette,
  EnemyDirectionalObstacles,
  EnemyVerticalObstacles,
  EnemyDistanceBand,
  EnemyShortDistanceBand,
  CaptureEnemyLeaderTarget,
  EnemyChaseAngle,
  EnemyAngleVelocity,
  EnemyAngleDirection,
  EnemyDistanceSleep,
  CheckContentIntegrity,
  ReadMovedThisTick,
  ChooseRandom,
  DirectionFromLeader,
  TestPlayerInArea,
  ShiftMapPalette,
  ReadPendingDmaBytes,
  NpcInitialDirection,
  RefreshGiftAppearance,
  SetDirectionAndRefresh,
  InflictSunstrokeCheck,
  FadePauseActors,
  FadeRestoreActors,
  FadeShowSprites,
  FadeRefreshSprites,
  FadeHideBlinkSprites,
  FadeRows,
  FadeColumns,
  FadeResetDissolve,
  FadeDissolve,
  FadeFinishTask,
  FadeReleaseController,
  YieldToText,
  TargetAngle,
  TargetReached,
  SetDirectionFrame,
  CopyPartyPosition,
  OpenPrayerWindow,
  ClosePrayerWindow,
  WindowAnimationActive,
  AdvanceEncounterEffects,
  CopySpritePosition,
  PlaySound,
  VelocityDistanceSleep,
  CaptureSpriteTarget,
  FaceNpcTowardActor,
  CheckProspectiveTerrain,
  CheckProspectiveNpcCollision,
  FaceSpriteTowardActor,
  SetMovementBounds,
  CheckMovementBounds,
  SetCastScrollThreshold,
  CheckCastScrollThreshold,
  IsEntityStillOnCastScreen,
  CreateCastActor,
  PrintCastName,
  PrintCastPartyName,
  PrintCastNameFromVariable,
  UploadCastPalette,
  ConvertCastActorToScreen,
  TickCastScroll,
  WriteCastTileOffset,
  WriteCastInitialSleep,
  WriteCastTextCursor,
  AngleToDirection,
  HalveVerticalVelocity,
  FollowVariableAngle,
  SelectEightCurrent
};

enum class ActionTemporaryInput { Observed, Independent, Forwarded };

struct CreateActorOperands {
  std::uint16_t sprite{}, script{};
  bool operator==(const CreateActorOperands &) const = default;
};
// CHOOSE_RANDOM consumes a byte count and inline words. Count zero still
// selects a word using the raw random byte (the source divider's remainder),
// so that exceptional content shape owns all 256 reachable choices.
struct ChooseRandomOperands {
  std::uint8_t count{};
  std::vector<std::uint16_t> choices;
  bool operator==(const ChooseRandomOperands &) const = default;
};
struct MovementBoundsOperands {
  std::uint16_t x_extent{}, y_extent{};
  bool operator==(const MovementBoundsOperands &) const = default;
};
struct CastNameOperands {
  std::uint16_t name{}, column{}, row{};
  bool operator==(const CastNameOperands &) const = default;
};
using ActionPayload =
    std::variant<std::monostate, CreateActorOperands, ChooseRandomOperands,
                 MovementBoundsOperands, CastNameOperands>;

struct BoundAction {
  NativeAction operation = NativeAction::Unsupported;
  std::uint16_t operand{};
  unsigned parameter_bytes{};
  // Set only by the authored-program compiler when every reachable calling
  // context overwrites or abandons the result before reading it. A host
  // service then need not recreate incidental graphics-memory return values.
  bool discard_result = false;
  // Import-time effect contract, including explicitly unported services.
  // Independent ignores its input; Forwarded has input-independent effects
  // but carries some input bits into its result. Observed is conservative.
  // None of these contracts makes Unsupported executable.
  ActionTemporaryInput temporary_input = ActionTemporaryInput::Observed;
  // A separately audited operand length permits CFG traversal across an
  // unported service. It remains an explicit runtime service request.
  bool inline_parameters_known = false;
  // Compound authored operands have typed meaning; they are never truncated
  // into operand or re-read through a source memory/address dispatcher.
  ActionPayload payload;
};

// Asset-import/binding boundary. Compile once and retain BoundAction with the
// authored instruction. Unknown identifiers remain Unsupported. This module
// contains no processor, bus, instruction execution or callback address call.
class ActionBindings {
public:
  explicit ActionBindings(GameVersion version);
  BoundAction compile(const ActionEngineRequest &request,
                      const ActionScriptData &data) const;

private:
  struct Entry {
    ActionRequestKind kind;
    std::uint32_t identifier;
    NativeAction operation;
    unsigned parameter_bytes;
    ActionTemporaryInput temporary_input;
    bool inline_parameters_known = false;
  };
  std::vector<Entry> entries_;
};

enum class ActorPhysics {
  Planar,
  Spatial,
  Stationary,
  PlanarSurface,
  SpatialSurface,
  CollisionSurface,
  Collision,
  PartyFollower
};
enum class ActorProjection { World, WorldHeight, Absolute, Overlay, Unchanged };
enum class ActorTickCallback {
  None,
  Project,
  ProjectOffset,
  CenterCamera,
  CenterCameraOffset,
  WorldMaintenance,
  PartyFollower,
  EnemyPath,
  TeleportLeader,
  TeleportFollower,
  TeleportFailureFollower,
  CastScroll
};

struct ActorActionContext {
  std::uint16_t direction{}, moving_direction{}, movement_speed{},
      surface_flags{};
  // Authoritative movement gates, initialized by ordinary actor creation.
  // Negative path states bypass obstacle/collider stopping in the authored
  // collision-aware physics callbacks.
  std::uint16_t path_state{}, obstacle_flags{};
  // Negative values are no collision (-1) and disabled collision (-32768).
  // Nonnegative values identify the collided world object.
  std::int32_t collision_object{-1};
  ActorPhysics physics = ActorPhysics::Planar;
  ActorProjection projection = ActorProjection::World;
  ActorTickCallback tick = ActorTickCallback::None;
  bool draw_world{true};
  int projected_x{}, projected_y{};
};

struct ActionSceneContext {
  std::uint16_t camera_x{}, camera_y{}, overlay_camera_x{}, overlay_camera_y{};
  bool camera_changed{};
  // Borrow the authoritative story/world bits. The owner keeps this storage
  // stable while actors run; no second flag snapshot is retained here. An
  // unbound or out-of-range request stays suspended without any mutation.
  std::span<std::uint8_t> event_flags;
  // Shared ACTIONSCRIPT_STATE: authored actors signal waiting dialogue.
  std::uint16_t action_script_state{};
};

struct NativeActionResult {
  bool handled{};
  std::uint16_t value{};
  unsigned parameter_bytes{};
};

// Pure actor operations. Unknown bindings return handled=false without changing
// any state. The caller must keep the action-script request suspended in that
// case.
NativeActionResult apply_action(const BoundAction &action,
                                std::uint16_t temporary,
                                ActionActorState &actor,
                                ActorActionContext &context,
                                ActionSceneContext &scene);

// Exact C0CA4E task wait from the live 16.16 XY velocities and incoming
// distance word. Retains source signed comparisons, division and low-word wrap.
std::uint16_t velocity_distance_sleep(const ActionActorState &, std::uint16_t distance);

// Preserve world ordering: scripts/tick callbacks for all actors, then physics
// and projection for all actors. Projection uses authored integer coordinates;
// presentation can separately sample the stored fractional positions.
void run_actor_tick_callback(const ActionActorState &actor,
                             ActorActionContext &context,
                             ActionSceneContext &scene);
void run_actor_physics(ActionActorState &actor,
                       const ActorActionContext &context);
void run_actor_projection(const ActionActorState &actor,
                          ActorActionContext &context,
                          const ActionSceneContext &scene);
} // namespace eb::native
