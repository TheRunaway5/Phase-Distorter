#pragma once

#include "eb/native/story/scene.hpp"
#include "eb/native/story/interrupt_callback.hpp"
#include "eb/native/world_actor_services.hpp"
#include "eb/native/world_automatic.hpp"
#include "eb/native/world_bicycle.hpp"
#include "eb/native/world_escalator.hpp"
#include "eb/native/world_maintenance.hpp"
#include "eb/native/world_palette_animation.hpp"
#include "eb/native/world_streaming.hpp"
#include "eb/native/world_walking.hpp"
#include "eb/native/entities/graphics/transport.hpp"
#include <functional>

namespace eb::native {
namespace story { class BattlePublication; class SourceWorkService; class SourceWorkClock; class AudioFrameClock; class SourceFrameInput; struct SourceFrameInputContext; }
namespace battle { class PsiDisplayState; }
namespace entities::graphics { class Lifecycle; }
class WorldPartyFollowing;
struct WorldPartyFollowingState;
class WorldEnemyMovement;
class WorldEnemyContact;
class WorldEnemyBehavior;
class WorldScenePresentation;
class WorldEncounterEffects;
class WorldSpriteFade;
class WorldCollisionWindow;
class WorldScheduler;
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
  class SourceInterrupt {
  public:
    ~SourceInterrupt();
    SourceInterrupt(const SourceInterrupt &) = delete;
    SourceInterrupt &operator=(const SourceInterrupt &) = delete;
    void increment_pending();
    void increment_counter();
    void publish();
    void callback();
    void rotate_heap();
    void complete();
  private:
    friend class WorldRuntime;
    explicit SourceInterrupt(std::unique_ptr<story::Scene::SourceInterrupt>);
    std::unique_ptr<story::Scene::SourceInterrupt> scene_;
  };
  std::unique_ptr<SourceInterrupt> begin_source_interrupt();
  void bind_source_work(story::SourceWorkService &,const battle::PsiDisplayState &);
  void clear_source_work(const story::SourceWorkService &) noexcept;
  bool uses_default_interrupt_callback() const noexcept;
  bool uses_world_interrupt_callback(const WorldScheduler &) const noexcept;
  bool interrupt_callback_active() const noexcept;
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
    story::FrameRequirement frame_requirement() const;
    void complete_publication();
    void respond_source_publication();
    std::unique_ptr<story::SourceFrameInput> begin_source_frame(story::SourceWorkClock &,
        story::AudioFrameClock &, PeripheralState &, WorldInputPlayback &, story::SourceFrameInputContext);
    void respond_source_frame(story::SourceFrameInput &);
    std::unique_ptr<story::SourceObjectPreparation> begin_source_objects(story::SourceWorkClock&,story::SourceObjectContext,story::SourceObjectCall);
    void respond_source_objects(story::SourceObjectPreparation&);
    std::unique_ptr<story::SourceActorDraw> begin_source_actor_draw(story::SourceWorkClock&,story::SourceActorDrawContext,story::SourceActorDrawCall);
    void respond_source_actor_draw(story::SourceActorDraw&);
    std::unique_ptr<story::SourceGlobalDraw> begin_source_global_draw(story::SourceWorkClock&,story::SourceGlobalDrawContext,story::SourceGlobalDrawCall);
    void respond_source_global_draw(story::SourceGlobalDraw&);
    std::unique_ptr<story::SourceScreenUpdate> begin_source_screen(story::SourceWorkClock&,story::SourceScreenContext);
    void respond_source_screen(story::SourceScreenUpdate&);
    std::unique_ptr<story::SourceMeterStatus> begin_source_meter_status(story::SourceWorkClock&,story::SourceMeterStatusContext,story::SourceMeterStatusCall);
    void respond_source_meter_status(story::SourceMeterStatus&);
    std::unique_ptr<story::SourceMeterTiles> begin_source_meter_tiles(story::SourceWorkClock&,story::SourceMeterTilesContext,story::SourceMeterTilesCall);
    void respond_source_meter_tiles(story::SourceMeterTiles&);
    std::unique_ptr<story::SourceMeterRoller> begin_source_meter_roller(story::SourceWorkClock&,story::SourceMeterRollerContext,story::SourceMeterRollerCall);
    void respond_source_meter_roller(story::SourceMeterRoller&);
    std::unique_ptr<story::SourceRandom> begin_source_random(story::SourceWorkClock&,story::SourceRandomContext);
    void respond_source_random(story::SourceRandom&);
    std::unique_ptr<story::SourceWindowPublication> begin_source_window_publication(story::SourceWorkClock&,story::SourceWindowPublicationContext,story::SourceWindowPublicationCall);
    void respond_source_window_publication(story::SourceWindowPublication&);
    std::unique_ptr<story::SourceForegroundWork> begin_source_foreground(story::SourceWorkClock&,story::SourceForegroundContext);
    void respond_source_foreground(story::SourceForegroundWork&);
    void complete_frame(std::array<std::uint16_t, 2> raw);
    void respond_actor(std::uint16_t value = 0, unsigned parameter_bytes = 0);
    void respond_battle();
    void respond_party_sprite_blink();
    void respond_teddy_refresh();
    void respond_bicycle_dismount();
    void respond_item_failure_scan(std::uint16_t first_empty);
    const dialogue::ScriptSoundRequest &script_sound() const;
    void respond_script_sound();
    // Actual authored actor PLAY_SOUND boundary. The host executes its audio
    // command before acknowledging the same pending actor operation.
    dialogue::ScriptSoundRequest actor_sound() const;
    void respond_actor_sound();
    void respond_dialogue(dialogue::Response);
    bool complete() const;
    WorldRuntime &runtime() noexcept { return runtime_; }

  private:
    friend class WorldRuntime;
    Operation(WorldRuntime &, std::unique_ptr<story::Scene::Operation>,
              bool refresh);
    Operation(WorldRuntime &, story::Scene::Operation &);
    story::Scene::Operation &source_frame_owner(WorldInputPlayback &);
    story::Scene::Operation &source_screen_owner();
    story::Scene::Operation &source_foreground_owner();
    WorldRuntime &runtime_;
    std::unique_ptr<story::Scene::Operation> owned_scene_;
    story::Scene::Operation *scene_{};
    std::unique_ptr<WorldMaintenance::Operation> maintenance_;
    std::unique_ptr<WorldWalking::Operation> walking_;
    std::unique_ptr<WorldEscalator::Operation> escalator_;
    std::unique_ptr<WorldAutomatic::Operation> automatic_;
    std::unique_ptr<entities::graphics::Transport::Operation> graphics_upload_;
    std::unique_ptr<RawActorCreation::Operation> graphics_creation_;
    std::unique_ptr<story::Scene::Operation> graphics_publication_;
    std::optional<std::uint16_t> graphics_value_;
    unsigned graphics_parameters_{};
    bool maintenance_streaming_{};
    bool graphics_streaming_publication_{},streaming_publication_{};
    bool refresh_{}, done_{}, main_effect_pending_{};
  };
  void interrupt_publication();

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
  std::unique_ptr<Operation> begin_source_world_frame(story::SourceWorkClock&,story::SourceForegroundContext);
  std::unique_ptr<Operation> begin_source_window_tick(story::SourceWorkClock&,story::SourceWindowPublicationContext);
  std::unique_ptr<Operation> begin_source_meter_window_tick(story::SourceWorkClock&,story::SourceMeterRollerContext);
  std::unique_ptr<Operation> begin_source_meter_status_window_tick(story::SourceWorkClock&,story::SourceMeterStatusContext,
      WorldControlState&,story::CopyCounterState&,battle::PaletteBankState&);
  std::unique_ptr<Operation> begin_source_meter_tiles_window_tick(story::SourceWorkClock&,story::SourceMeterTilesContext,
      WorldControlState&,math::SoftwareArithmeticState&);
  std::unique_ptr<Operation> begin_source_random_window_tick(story::SourceWorkClock&,story::SourceRandomContext);
  std::unique_ptr<Operation> begin_publication();
  // Replaces the authored interrupt callback at a real content boundary.
  // Reset installs DEFAULT_IRQ_CALLBACK; restoration reinstalls the actual
  // world scheduler. Every NMI retains the same publication/input owners.
  void set_interrupt_callback(story::InterruptCallback &, Operation *parent = nullptr);
  void reset_interrupt_callback(Operation *parent = nullptr);
  void restore_world_interrupt_callback(Operation *parent = nullptr);
  bool uses_interrupt_callback(const story::InterruptCallback &) const noexcept;
  // Destruction revokes a borrowed callback and poisons the abandoned runtime;
  // this does not pretend to perform authored IRQ restoration.
  void abandon_interrupt_callback(const story::InterruptCallback &) noexcept;

  std::unique_ptr<Operation> begin_nested_publication(Operation &parent);
  void require_content_boundary(Operation *parent = nullptr) const;
  dialogue::Conversation &dialogue_owner(Operation &parent);
  // MAIN_LOOP's actual frame prefix: actors, screen, encounter effects, then
  // the frame/input boundary. Post-frame interactions are separate work.
  std::unique_ptr<Operation> begin_main_frame();
  std::unique_ptr<Operation> begin(dialogue::WindowEffect);
  std::unique_ptr<Operation> begin(dialogue::Conversation &);
  std::unique_ptr<Operation> begin_nested(dialogue::Conversation &,
                                          Operation &parent);
  std::unique_ptr<Operation> begin_nested(story::TickKind, Operation &parent);
  std::unique_ptr<Operation> begin_actor_frame(story::ActorFrameService &);
  std::unique_ptr<Operation> begin_nested_actor_frame(story::ActorFrameService &, Operation &parent);
  void require_nested(const Operation &parent) const;
  story::Scene::Operation &scene_operation(Operation &parent);
  void bind_interactions(npcs::Interactions &);
  // Initial battle-scene admission only. Existing world publication must not
  // be replaced without the separate encounter handoff lifecycle.
  void bind_battle_publication(story::BattlePublication &);
  // Explicit idle loading/return phases; callers establish the actual display
  // state while forced blank before routing any subsequent publication.
  void enter_battle_publication(WorldScenePresentation &expected,
      story::BattlePublication &next, const WorldDisplayFade &, battle::Frame &,
      battle::AnimationCommands * = nullptr);
  void return_world_publication(story::BattlePublication &expected,
      WorldScenePresentation &next, const WorldDisplayFade &);
  void bind_battle_animations(battle::AnimationCommands &);
  void bind_battle_frame(battle::Frame &);
  void bind_collision_window(WorldCollisionWindow &);
  WorldCollisionWindow *collision_window() const noexcept;
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
  // Actual raw selection shares allocation/geometry with CREATE_ENTITY.
  // Pending rows consume genuine display publications before actor response.
  void bind_actor_graphics(entities::graphics::Lifecycle &);
  entities::graphics::Lifecycle *actor_graphics() const noexcept;
  void bind_presentation(WorldScenePresentation &);
  void bind_map_palette_backup(std::span<const std::uint16_t,256>,battle::PsiDisplayState &);
  void bind_encounter_effects(WorldEncounterEffects &);
  bool uses(const WorldEncounterEffects &) const noexcept;
  bool uses_map_load(const ActorWorld &, const WorldEnemies &, const WorldMapArea &,
                     const AreaPalettes &, const WorldMap &, const WorldPalettes &,
                     const WorldPaletteAnimations &, const WorldSpawnControls &,
                     const story::RandomState &, const dialogue::WindowHost &,
                     const WorldScenePresentation &) const noexcept;
  void bind_world_control_commands(WorldControlCommands &);
  void bind_sprite_fade(WorldSpriteFade &);
  bool uses(const dialogue::WindowHost &, const party::State &,
            const ActorWorld &, const story::TickState &,
            const WorldSpawnControls &) const noexcept;
  bool uses(const party::Inventory &) const noexcept;
  bool uses(const ActorWorld &) const noexcept;
  bool uses(const story::TickState &) const noexcept;
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
  // Read-only identity/lifecycle view for helpers whose execution still runs
  // through this runtime's admitted publication operations.
  const story::Scene &scene() const noexcept;
  // Stable construction-time borrow for encounter/story coordinators. Their
  // real Scene children must be driven through service_child(), so the same
  // world actor, maintenance, streaming and frame services remain in force.
  story::Scene &coordinator_scene();
  // Borrows an actual child until completion; does not replace or acknowledge
  // it. Rejects foreign Scene owners before any service or gameplay mutation.
  std::unique_ptr<Operation> service_child(story::Scene::Operation &);
  std::unique_ptr<Operation> service_child(story::Scene::Operation &, Operation &parent);

  // LOAD_MAP_AT_SECTOR's ordinary area content phase: select destination
  // sector, resolve flags, and reset both authored animation sequences.
  // Cleanup, photograph/special colors, fades and activation are separate.
  // All fallible preparation precedes the in-place owner commit.
  void prepare_area(CameraPosition destination, bool preserve_artwork = false, Operation *parent = nullptr);
  void prepare_photograph_area(CameraPosition, bool preserve_artwork,
      std::span<const std::uint16_t,96> scenery,
      std::span<const std::uint16_t,16> frame_palette,
      std::span<const std::uint16_t> sprite_override = {}, Operation *parent = nullptr);
  // Map loading clears cached objects, then refreshes scenery without a game,
  // input or actor tick. Newly activated objects wait for their real draw phase.
  void clear_world_capture(Operation *parent = nullptr);
  void refresh_world_capture(Operation *parent = nullptr);
  // LOAD_MAP_BLOCK_EVENT_CHANGES without a tile/animation reload. Rebuild
  // arrangements/collision from authored base; retain current art/clocks.
  void reprepare_events();
  // Only the tile/palette-animation phase inside ordinary C05200. Its
  // explicit maintenance owner invokes this phase; Scene
  // Window/World/Frame waits and display sampling never invoke it implicitly.
  // Battle mode skips it exactly as C05200 does. This standalone phase is
  // unavailable once the real maintenance owner has been bound. Returns whether
  // artwork or colors changed. Requires idle scene ownership.
  bool advance_area_animation(const WorldControlState &);

  void begin_initial_activation(CameraPosition center, Operation *parent = nullptr);
  void reload_camera(CameraPosition center, Operation *parent = nullptr);
  void begin_refresh(CameraPosition camera, Operation *parent = nullptr);
  // Scripted/initial streaming only. Actor-callback streaming is resumed by
  // its Operation::advance. A work yield consumes no scene/input/actor tick.
  bool advance_streaming(unsigned work_budget = 256, Operation *parent = nullptr);
  bool streaming() const;
  bool failed() const;
  const WorldStreamingWork &streaming_work() const;
  // No new capture can be published while any streaming is unfinished. A
  // content refresh also requires an explicit ordinary WorldFrame operation
  // to capture the changed map/actors before this accessor becomes usable.
  std::shared_ptr<const DirectSceneFrame> frame() const;
  // Immutable output already committed to the display remains sampleable
  // while the next map or actor capture is being prepared. This accessor never
  // captures pending content or advances a publication.
  std::shared_ptr<const DirectSceneFrame> published_frame() const;
  std::uint64_t completed_frames() const;
  std::vector<WorldSoundEvent> take_sound_events();

private:
  friend class WorldMapLoad;
  friend class story::SourceMeterTiles;
  friend class story::SourceMeterStatus;
  bool permits_source_meter_control(const WorldControlState&) const noexcept;
  std::unique_ptr<Operation> begin_source_meter_status_window_tick_impl(story::SourceWorkService&,
      std::function<void(story::TickState&,const battle::FrameDisplay&,party::State&,party::MeterWindows&,dialogue::WindowHost&)>,
      std::function<void()>,const void*,const void*,const void*);
  std::unique_ptr<Operation> begin_source_meter_tiles_window_tick_impl(story::SourceWorkService&,
      std::function<void(story::TickState&,const battle::FrameDisplay&,party::State&,party::MeterWindows&,dialogue::WindowHost&)>,
      std::function<void()>,const void*,const void*);
  std::unique_ptr<Operation> begin_source_meter_window_tick_impl(story::SourceWorkService&,
      std::function<void(story::TickState&,const battle::FrameDisplay&,party::State&,dialogue::WindowHost&)>);
  std::unique_ptr<Operation> begin_source_random_window_tick_impl(story::SourceWorkService&,
      std::function<void(story::TickState&,const battle::FrameDisplay&,story::RandomState&)>);
  std::unique_ptr<Operation> begin_source_window_tick_impl(story::SourceWorkService&,
      std::function<void(story::TickState&,const battle::FrameDisplay&,dialogue::WindowHost&,const WorldDisplayFade&)>);
  std::unique_ptr<Operation> begin_source_world_frame_impl(story::SourceWorkService&,
      std::function<void(story::TickState&,const battle::FrameDisplay&)>);
  std::unique_ptr<Operation> begin_retained_publication(Operation *parent);
  std::unique_ptr<Operation> begin_streaming_publication(Operation *parent = nullptr);
  bool streaming_needs_publication() const noexcept;
  void respond_streaming_publication();
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
