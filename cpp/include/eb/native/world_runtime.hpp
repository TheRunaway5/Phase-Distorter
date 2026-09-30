#pragma once

#include "eb/native/story/scene.hpp"
#include "eb/native/world_actor_services.hpp"
#include "eb/native/world_automatic.hpp"
#include "eb/native/world_bicycle.hpp"
#include "eb/native/world_escalator.hpp"
#include "eb/native/world_maintenance.hpp"
#include "eb/native/world_palette_animation.hpp"
#include "eb/native/world_streaming.hpp"
#include "eb/native/world_walking.hpp"
#include <functional>

namespace eb::native {
class WorldPartyFollowing;
struct WorldPartyFollowingState;
class WorldEnemyMovement;
class WorldEnemyContact;
class WorldEnemyBehavior;
class WorldScenePresentation;
class WorldEncounterEffects;
// The loading-area predicate reads live party/teleport state at the service
// boundary. Absence leaves that actor request explicit; no cached leader or
// guessed party position becomes another mutable owner.
using ActorRetentionReader = std::function<std::optional<ActorRetentionArea>()>;

// One native orchestration boundary around the existing Scene/Ticks owners.
// Every argument is a stable borrowed authoritative owner; in particular the
// actor flags must be this WindowHost's 128-byte event_flags vector. Callers
// must not advance or replace those owners behind an unfinished operation.
// This does not implement boot, encounters, dialogue engine callbacks, fades,
// input acquisition or audio playback. Their requests remain explicit.
class WorldRuntime {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &) = delete;
    Operation &operator=(const Operation &) = delete;
    dialogue::Progress advance(unsigned work_budget = 4096);
    const std::optional<story::SceneService> &service() const;
    const std::optional<WorldActionRequest> &actor_request() const;
    // A bound EVENT1 callback is reduced here. Only its remaining real item,
    // movement-mode or sector-music service leaves this typed boundary.
    const std::optional<WorldMaintenanceRequest> &maintenance_request() const;
    const std::optional<WorldDoorTransitionRequest> &door_request() const;
    const std::optional<WorldAutomaticService> &automatic_request() const;
    void respond_maintenance();
    const std::optional<dialogue::ConversationEvent> &dialogue_event() const;
    void complete_frame(std::array<std::uint16_t, 2> raw);
    void respond_actor(std::uint16_t value = 0, unsigned parameter_bytes = 0);
    void respond_battle();
    void respond_party_sprite_blink();
    void respond_teddy_refresh();
    void respond_item_failure_scan(std::uint16_t first_empty);
    const dialogue::ScriptSoundRequest &script_sound() const;
    void respond_script_sound();
    void respond_dialogue(dialogue::Response);
    bool complete() const;

  private:
    friend class WorldRuntime;
    Operation(WorldRuntime &, std::unique_ptr<story::Scene::Operation>,
              bool refresh);
    WorldRuntime &runtime_;
    std::unique_ptr<story::Scene::Operation> scene_;
    std::unique_ptr<WorldMaintenance::Operation> maintenance_;
    std::unique_ptr<WorldWalking::Operation> walking_;
    std::unique_ptr<WorldEscalator::Operation> escalator_;
    std::unique_ptr<WorldAutomatic::Operation> automatic_;
    bool maintenance_streaming_{};
    bool refresh_{}, done_{}, main_effect_pending_{};
  };

  WorldRuntime(dialogue::WindowHost &, party::State &, story::RandomState &,
               party::MeterWindows &, story::TickState &, story::InputState &,
               ActorWorld &, WorldActivation &, WorldEnemies &,
               const WorldCollision &, WorldMapArea &, AreaPalettes &,
               const WorldMap &, const WorldPalettes &,
               const WorldPaletteAnimations &, WorldSpawnControls &,
               NpcStripAdmission, ActorRetentionReader = {},
               story::SceneView = {});
  ~WorldRuntime();
  WorldRuntime(const WorldRuntime &) = delete;
  WorldRuntime &operator=(const WorldRuntime &) = delete;

  std::unique_ptr<Operation> begin(story::TickKind);
  // MAIN_LOOP's actual frame prefix: actors, screen, encounter effects, then
  // the frame/input boundary. Post-frame interactions are separate work.
  std::unique_ptr<Operation> begin_main_frame();
  std::unique_ptr<Operation> begin(dialogue::WindowEffect);
  std::unique_ptr<Operation> begin(dialogue::Conversation &);
  std::unique_ptr<Operation> begin_nested(dialogue::Conversation &,
                                          Operation &parent);
  void bind_interactions(npcs::Interactions &);
  void bind_inventory(party::Inventory &);
  void bind_maintenance(WorldControl &, WorldMaintenanceState &,
                        party::ItemTransformationState &,
                        WorldInteractionQueue &);
  // Bind after maintenance so walking is checked against that exact controller,
  // queue and the scene's party/enemy owners. Bind door producers and their
  // frame services together afterward with bind_door_transitions().
  void bind_walking(WorldWalking &);
  // Install the actual EVENT2 service using this maintenance/control/party
  // state. The borrowed following owner must outlive this runtime.
  void bind_party_following(WorldPartyFollowing &);
  // Bind after walking. Installs the actual type3/4 producers and processes
  // their scheduler/playback once at Scene's real publication/input boundary.
  // The borrowed service and its dependencies must outlive this runtime.
  void bind_door_transitions(WorldDoorTransitions &);
  void bind_escalator(WorldEscalator &);
  void bind_bicycle(WorldBicycle &);
  void bind_automatic(WorldAutomatic &);
  // Consume Automatic's direction-interval expiry through the actual native
  // entry reducer. Contact selection and later swirl/combat phases are separate.
  void bind_battle_entry(WorldBattleEntry &);
  void bind_enemy_movement(WorldEnemyMovement &);
  void bind_enemy_contact(WorldEnemyContact &);
  void bind_enemy_behavior(WorldEnemyBehavior &);
  void bind_presentation(WorldScenePresentation &);
  void bind_encounter_effects(WorldEncounterEffects &);
  bool uses_map_load(const ActorWorld &, const WorldEnemies &, const WorldMapArea &,
                     const AreaPalettes &, const WorldMap &, const WorldPalettes &,
                     const WorldPaletteAnimations &, const WorldSpawnControls &,
                     const story::RandomState &, const dialogue::WindowHost &,
                     const WorldScenePresentation &) const noexcept;
  void bind_world_control_commands(WorldControlCommands &);
  bool uses(const dialogue::WindowHost &, const party::State &,
            const ActorWorld &, const story::TickState &,
            const WorldSpawnControls &) const noexcept;
  bool uses(const party::Inventory &) const noexcept;
  bool uses(const npcs::Interactions &) const noexcept;
  // A startup prefix can precede controller binding. Any bindings already
  // present must refer to these same owners, including follower state.
  bool compatible_world_state(const WorldPartyState &, const PartyTrail &,
                              const WorldControlState &,
                              const WorldMaintenanceState &,
                              const WorldInteractionQueue &,
                              const WorldPartyFollowingState &) const noexcept;
  // Startup must pass this before mutating borrowed state for a restored game.
  void require_idle() const;

  // LOAD_MAP_AT_SECTOR's ordinary area content phase: select destination
  // sector, resolve flags, and reset both authored animation sequences.
  // Cleanup, photograph/special colors, fades and activation are separate.
  // All fallible preparation precedes the in-place owner commit.
  void prepare_area(CameraPosition destination, bool preserve_artwork = false);
  // Map loading clears cached objects, then refreshes scenery without a game,
  // input or actor tick. Newly activated objects wait for their real draw phase.
  void clear_world_capture();
  void refresh_world_capture();
  // LOAD_MAP_BLOCK_EVENT_CHANGES without a tile/animation reload. Rebuild
  // arrangements/collision from authored base; retain current art/clocks.
  void reprepare_events();
  // Only the tile/palette-animation phase inside ordinary C05200. Its
  // explicit maintenance owner invokes this phase; Scene
  // Window/World/Frame waits and display sampling never invoke it implicitly.
  // Battle mode skips it exactly as C05200 does. This standalone phase is
  // unavailable once the real maintenance owner has been bound. Returns whether
  // artwork or colors changed. Requires idle scene ownership.
  bool advance_area_animation();

  void begin_initial_activation(CameraPosition center);
  void begin_refresh(CameraPosition camera);
  // Scripted/initial streaming only. Actor-callback streaming is resumed by
  // its Operation::advance. A work yield consumes no scene/input/actor tick.
  bool advance_streaming(unsigned work_budget = 256);
  bool streaming() const;
  bool failed() const;
  const WorldStreamingWork &streaming_work() const;
  // No new capture can be published while any streaming is unfinished. A
  // content refresh also requires an explicit ordinary WorldFrame operation
  // to capture the changed map/actors before this accessor becomes usable.
  std::shared_ptr<const DirectSceneFrame> frame() const;
  std::uint64_t completed_frames() const;
  std::vector<WorldSoundEvent> take_sound_events();

private:
  struct State;
  std::unique_ptr<State> state_;
  void check() const;
  void check_idle() const;
  void check_operation(const Operation &) const;
  void check_response(const Operation &) const;
  std::unique_ptr<Operation> wrap(std::unique_ptr<story::Scene::Operation>,
                                  bool refresh = false);
};
} // namespace eb::native
