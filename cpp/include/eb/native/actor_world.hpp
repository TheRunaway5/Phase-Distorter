#pragma once

#include "eb/native/action_program.hpp"
#include "eb/native/appearance_service.hpp"
#include "eb/native/npc_catalog.hpp"
#include "eb/native/sprite_appearance.hpp"
#include <optional>

namespace eb::native {
class WorldOverlayPlayback;
struct PreparedActorState;
class WorldActorMovement;
class WorldPartyMovement;
class WorldPartyFollowing;
class WorldEnemies;
class ActorWorld;
// Dedicated source-scene callbacks run at the actual post-script tick phase.
// The stable borrowed service cannot start another actor traversal or frame.
class ActorTickService {
public:
  virtual ~ActorTickService() = default;
  virtual bool uses(const ActorWorld &) const noexcept = 0;
  // True means the callback actually invoked its source camera refresh.
  virtual bool tick(ActorId, ActorTickCallback) = 0;
};

struct ActorHitbox {
  struct Extent {
    std::uint16_t half_width{}, height{};
    bool operator==(const Extent &) const = default;
  };
  std::uint16_t enabled{};
  Extent vertical, lateral;
  bool operator==(const ActorHitbox &) const = default;
};

// Original scene scripts address thirty named numeric roles, including
// reserved party/bicycle roles. These tags are separate from host actor IDs
// and graphics capacity; ordinary untagged actors remain unbounded.
struct AuthoredActorRoles {
  unsigned first = 0, end = 22;
};

// XYZ in 16.16 world coordinates, independent of actor or graphics lifetime.
using AuthoredActorPosition = std::array<std::uint32_t, 3>;
struct AuthoredActorPose {
  AuthoredActorPosition position{};
  std::uint16_t direction{};
  bool operator==(const AuthoredActorPose &) const = default;
};
struct AuthoredActorPause {
  bool scripts_and_physics_enabled = true;
  bool tick_callback_enabled = true;
  bool operator==(const AuthoredActorPause &) const = default;
};

struct WorldActorSpec {
  unsigned script{}, sprite{};
  ActionActorState action;
  ActorActionContext behavior;
  std::optional<NpcId> npc;
  AppearanceActorContext appearance_context;
  std::optional<ActorHitbox> hitbox;
};

struct WorldActor {
  ActionActorState &action();
  const ActionActorState &action() const;
  std::vector<ActionTaskState> tasks() const;
  std::optional<NpcId> npc() const { return npc_; }
  bool has_appearance() const { return appearance_owned_; }
  // Created by bare INIT_ENTITY; it may inherit an earlier role's artwork.
  bool script_only() const { return script_only_; }
  std::optional<unsigned> authored_role() const { return authored_role_; }
  unsigned script_style() const { return script_style_; }
  ActorActionContext behavior;
  SpriteAppearance appearance;
  AppearanceActorContext appearance_context;
  // Absent until collision content is bound, or explicitly supplied at
  // creation. Once initialized this is the mutable authoritative geometry.
  std::optional<ActorHitbox> hitbox;
  // These are authored pause controls, independent of camera visibility.
  bool scripts_and_physics_enabled = true;
  bool tick_callback_enabled = true;

private:
  friend class ActorWorld;
  WorldActor(std::shared_ptr<const ActionScriptData> scripts,
             std::shared_ptr<SpriteResources> sprites,
             const WorldActorSpec &spec, bool graphical);
  ActionScripts scripts_;
  ActorId previous_{}, next_{};
  std::optional<NpcId> npc_;
  bool appearance_owned_ = true;
  bool script_only_{};
  std::optional<unsigned> authored_role_;
  unsigned script_style_{};
  // Selection metadata also survives explicit appearance invalidation.
  std::uint16_t inherited_sprite_{}, inherited_npc_ = 0xffff,
                                     inherited_enemy_{};
};

enum class WorldActionOrigin { Script, TickCallback };
struct WorldActionRequest {
  ActorId actor{};
  // action/diagnostic describe an actual VM request only for Script origin.
  // TickCallback carries its named operation without a VM cursor or return.
  ActionEngineRequest action;
  BoundAction binding;
  ActionOperationDiagnostic diagnostic;
  WorldActionOrigin origin = WorldActionOrigin::Script;
};

struct WorldCameraRefresh {
  ActorId actor{};
  std::uint16_t previous_x{}, previous_y{}, camera_x{}, camera_y{};
  std::uint64_t tick{};
};
enum class WorldTickResult { Complete, NeedsEngine, NeedsCameraRefresh };
struct WorldSoundEvent {
  ActorId actor{};
  std::uint64_t tick{};
  std::uint16_t sound{};
};

// The native owner of actor scripts, motion, appearance and lifetime. It has no
// processor, emulated storage, hardware clock, host input or automatic spawns.
// The world/scene policy explicitly creates and removes actors; presentation
// width only selects artwork. Unknown authored engine operations suspend the
// current tick rather than executing a reference runtime or advancing twice.
class ActorWorld {
public:
  ActorWorld(std::shared_ptr<SpriteResources> sprites,
             std::shared_ptr<const ActionScriptData> scripts,
             GameVersion version,
             std::optional<AppearanceData> appearance_data = std::nullopt);
  ActorWorld(std::shared_ptr<SpriteResources> sprites,
             std::shared_ptr<const CompiledActionProgram> program,
             std::optional<AppearanceData> appearance_data = std::nullopt);
  ~ActorWorld();
  ActorWorld(const ActorWorld &) = delete;
  ActorWorld &operator=(const ActorWorld &) = delete;

  ActorId create(const WorldActorSpec &spec);
  // Prepare against this world's imported catalogs. No actor is allocated or
  // scheduled until create/create_authored succeeds.
  WorldActorSpec prepare_actor(unsigned sprite, unsigned script,
                               const PreparedActorState &) const;
  // A stable borrowed synchronous service, installed by the scene runtime.
  // Binding imports missing creation hitboxes atomically; clearing only the
  // matching owner cannot detach another runtime's service.
  void bind_movement(WorldActorMovement &);
  void clear_movement(const WorldActorMovement &) noexcept;
  void bind_party_movement(WorldPartyMovement &);
  void clear_party_movement(const WorldPartyMovement &) noexcept;
  void bind_party_following(WorldPartyFollowing &);
  void clear_party_following(const WorldPartyFollowing &) noexcept;
  void bind_tick_service(ActorTickService &);
  void clear_tick_service(const ActorTickService &) noexcept;
  // Stable borrowed lifetime owner, installed/cleared by WorldRuntime.
  // Script retirement snapshots enemy selectors through this real owner.
  void bind_enemies(WorldEnemies &);
  void clear_enemies(const WorldEnemies &) noexcept;
  bool uses_enemies(const WorldEnemies &) const noexcept;
  // Assign the first free authored role in [first,end), in original release
  // order. Creation failure leaves role ownership unchanged. Null means the
  // requested role range is occupied, never reuse/overwrite another actor.
  // The assigned numeric role supplies the authored walking-animation phase.
  std::optional<ActorId> create_authored(const WorldActorSpec &spec,
                                         AuthoredActorRoles roles = {});
  // CREATE_PREPARED_ENTITY_NPC writes an NPC selector after CREATE_ENTITY;
  // unlike map activation it permits multiple active roles with that selector.
  std::optional<ActorId> create_prepared_npc(const WorldActorSpec &spec);
  // Bare INIT_ENTITY preserves dormant geometry/appearance/behavior, resets
  // the actual script, callbacks, velocity and pose fields, and allocates a
  // new host identity. No graphics are created for a never-graphical role.
  std::optional<ActorId>
  create_authored_script(unsigned script, const PreparedActorState &,
                         AuthoredActorRoles roles = {0, 30});
  std::optional<ActorId> actor_for_role(unsigned role) const;
  // Source coordinate tables survive C02140 deletion. Occupied roles read
  // their live action state; released roles retain the latest position and
  // may still receive explicit formation/scene writes. Values never alias an
  // actor across deletion/reuse. A new world's unused roles start at zero.
  AuthoredActorPosition authored_position(unsigned role) const;
  AuthoredActorPose authored_pose(unsigned role) const;
  std::uint16_t authored_variable(unsigned role, unsigned index) const;
  void set_authored_variable(unsigned role, unsigned index, std::uint16_t);
  ActorActionContext authored_behavior(unsigned role) const;
  void set_authored_path_state(unsigned role, std::uint16_t);
  void set_authored_tick_callback(unsigned role,ActorTickCallback);
  void set_authored_collision_object(unsigned role,std::int32_t);
  AuthoredActorPause authored_pause(unsigned role) const;
  void set_authored_pause(unsigned role, bool scripts_and_physics, bool tick);
  bool authored_sprite_hidden(unsigned role) const;
  void set_authored_sprite_hidden(unsigned role, bool);
  void set_authored_direction(unsigned role, std::uint16_t direction);
  // C462FF updates only changed facing, then C0A443_ENTRY2 refreshes the
  // retained four-direction frame, including a retired graphical role.
  void refresh_authored_direction(unsigned role, std::uint16_t direction);
  std::uint16_t authored_sprite_selector(unsigned role) const;
  std::uint16_t authored_npc_selector(unsigned role) const;
  std::uint16_t authored_enemy_selector(unsigned role) const;
  std::uint16_t authored_draw_priority(unsigned role) const;
  void set_authored_draw_priority(unsigned role, std::uint16_t);
  // Actual C4605A retained numeric lookup, independent of actor lifetime.
  std::optional<unsigned> first_authored_role_with_npc(std::uint16_t) const;
  void set_authored_position(unsigned role, const AuthoredActorPosition &);
  // Replace only the whole coordinate (axis 0=X, 1=Y, 2=height), retaining
  // its fractional word. Neither form changes projection or actor activity.
  void set_authored_coordinate(unsigned role, unsigned axis,
                               std::uint16_t whole);
  // The party rebuild explicitly orders only the unused role list. This
  // changes the next allocation choice, never the active actor traversal.
  void order_free_authored_roles();
  // Source lookups scan numeric roles, independently of active-list order.
  // Only living, owned ordinary identities participate; released appearances
  // and untagged host actors do not supply an authored role. Enemy encounter
  // identities are owned and queried separately by WorldEnemies.
  std::optional<ActorId>
  first_authored_actor_with_sprite(unsigned sprite) const;
  std::optional<ActorId> first_authored_actor_with_npc(NpcId npc) const;
  // C46028 scans all retained numeric roles, including dormant selector
  // residue and never-created table entries. This does not require artwork.
  std::optional<unsigned> first_authored_role_with_sprite(std::uint16_t) const;
  // C46CC7 copies only whole XY from that retained role to the live actor.
  // A missing selector's adjacent-table alias has no owned native source.
  std::uint16_t copy_sprite_position(ActorId destination, std::uint16_t sprite);
  // C46BBB retains selected whole XY in the current script's VAR6/7.
  std::uint16_t capture_sprite_target(ActorId destination, std::uint16_t sprite);
  // Replace at a declared content root, preserving creation style, motion,
  // appearance, role and active-list order. Clears callback/pause controls.
  // The currently suspended interpreter is explicitly unsupported: source
  // self-replacement retains a local continuation and captured child links.
  // Other actors can be replaced during a tick and keep captured-next order.
  void replace_script(ActorId id, std::uint32_t content_entry);
  // C461CC selects the first retained numeric sprite role, then resolves the
  // literal script index in this world's own catalog. A miss is a no-op;
  // a released or executing script slot remains an explicit boundary.
  void replace_sprite_script(std::uint16_t sprite, std::uint16_t script);
  // Ordinary NPC graphical release preserves actor/task/list identity and
  // motion. Enemy counters and other world policy remain the scene owner's
  // responsibility. False means the actor or its appearance is already gone.
  bool release_appearance(ActorId id);
  // Authored release also applies to a vacant role's retained selector keys.
  bool release_authored_appearance(unsigned role);
  // Script END retains pose and selector history, whereas full erase first
  // releases appearance/identities. Neither retains a dead host actor ID.
  bool retire(ActorId id);
  bool erase(ActorId id);
  // Scene script reset retains selectors/geometry but suppresses retained
  // artwork and clears active scheduling, matching C0927C.
  // Only valid between complete world ticks.
  void reset_scripts();
  // Startup's separate INITIALIZE_MISC_OBJECT_DATA phase, after scripts have
  // been reset. Clears retained speed/collision/NPC identity only; no scene
  // clock, appearance selector, enemy population or other role state changes.
  void initialize_scene_objects();
  // Map loading resets collision targets for all authored roles, including
  // retired roles, without changing their movement, scripts or other metadata.
  void clear_collision_targets();
  // INIT_BATTLE_OVERWORLD's exact ordinary-role prefix. Retains reserved
  // party/controller roles and inactive-role geometry while clearing the
  // first23 collision/path/hidden flags after the real map/teleport return.
  void reset_encounter_objects();
  void bind_overlays(WorldOverlayPlayback &);
  void clear_overlays(const WorldOverlayPlayback &) noexcept;
  bool uses_overlays(const WorldOverlayPlayback &) const noexcept;
  WorldActor &actor(ActorId id);
  const WorldActor &actor(ActorId id) const;
  std::size_t size() const;
  std::vector<ActorId> actors() const;
  std::optional<ActorId> actor_for_npc(NpcId npc) const;
  std::vector<NpcId> active_npcs() const;

  ActionSceneContext &scene();
  const ActionSceneContext &scene() const;
  AppearanceSceneContext &appearance_scene();
  const AppearanceSceneContext &appearance_scene() const;
  // Completed-tick intents in execution order. Draining does not play audio;
  // the native audio owner consumes these exactly once, independently of draw.
  std::vector<WorldSoundEvent> take_sound_events();
  std::uint64_t ticks() const;
  GameVersion version() const;
  bool in_tick() const;

  // Scripts and tick callbacks run in authored creation order for all actors,
  // followed by the movement/projection pass. Newly appended actors follow
  // the source's captured-next traversal rule; deleted successors are skipped.
  WorldTickResult advance_tick();
  const std::optional<WorldActionRequest> &request() const;
  // Task sleep is accepted only for role staggering and distance-based waiting.
  // Tick callbacks accept only an empty acknowledgment (no value or sleep).
  void respond(std::uint16_t value = 0, unsigned parameter_bytes = 0,
               std::optional<std::uint16_t> sleep_frames = std::nullopt);
  // Camera callbacks suspend before the next actor or physics pass. The
  // scene owner refreshes its map/activation strips synchronously, then
  // acknowledges this request. Repeated advance_tick calls cannot skip it.
  const std::optional<WorldCameraRefresh> &camera_refresh() const;
  void respond_camera_refresh();

  // Erasing the suspended actor cancels its script request. A begun scene
  // maintenance callback remains pending even if its issuing actor is erased.
  // Subsequent advance_tick
  // continues the same world tick. A completed camera callback still requires
  // its scene refresh if its actor is erased. Completed frames remain immutable
  // even when their actors are deleted. Rendering a partial tick is rejected.
  std::shared_ptr<const DirectSceneFrame> draw(unsigned width,
                                               const SpritePalettes &palettes,
                                               std::uint64_t scene_identity,
                                               unsigned overscan = 64);

private:
  friend class WorldEnemies;
  struct State;
  ActorId create_actor(const WorldActorSpec &, bool graphical, bool duplicate_npc = false);
  std::optional<ActorId> create_authored(const WorldActorSpec &, AuthoredActorRoles, bool duplicate_npc);
  void remove_npc_index(ActorId);
  std::shared_ptr<const void> identity_token() const;
  std::unique_ptr<State> state_;
};
} // namespace eb::native
