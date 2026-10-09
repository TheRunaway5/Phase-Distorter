#include "eb/native/world_runtime.hpp"
#include "eb/native/entities/graphics/source_objects.hpp"
#include "eb/native/entities/graphics/source_actor_draw.hpp"
#include "eb/native/entities/graphics/source_global_draw.hpp"
#include "eb/native/story/source_work.hpp"
#include "eb/native/story/source_frame_input.hpp"
#include "eb/native/world_player_area.hpp"
#include "eb/native/world_palette_shift.hpp"
#include "eb/native/world/collision_window.hpp"
#include "eb/native/world_sprite_fade.hpp"
#include "eb/native/story/battle_publication.hpp"
#include "eb/native/party/inventory.hpp"
#include "eb/native/world_actor_movement.hpp"
#include "eb/native/world_battle_entry.hpp"
#include "eb/native/world_enemy_movement.hpp"
#include "eb/native/world_enemy_contact.hpp"
#include "eb/native/world_enemy_behavior.hpp"
#include "eb/native/entities/graphics/lifecycle.hpp"
#include "eb/native/world_scene_presentation.hpp"
#include "eb/native/world_door_transitions.hpp"
#include "eb/native/world_input_playback.hpp"
#include "eb/native/world_party_following.hpp"
#include <stdexcept>
#include <utility>

namespace eb::native {
namespace {
void require(bool ok, const char *message) {
  if (!ok)
    throw std::logic_error(message);
}
bool enemy_contact_service(NativeAction operation) {
  switch (operation) {
  case NativeAction::EnemyContact:
  case NativeAction::EnemyContactCollision:
  case NativeAction::EnemyContactActive:
  case NativeAction::PrepareEnemyContactPalette:
  case NativeAction::EnemyDirectionalObstacles:
  case NativeAction::EnemyVerticalObstacles:
    return true;
  default:
    return false;
  }
}
bool enemy_behavior_service(NativeAction operation) {
  switch (operation) {
  case NativeAction::TargetAngle:
  case NativeAction::TargetReached:
  case NativeAction::EnemyDistanceBand:
  case NativeAction::EnemyShortDistanceBand:
  case NativeAction::CaptureEnemyLeaderTarget:
  case NativeAction::EnemyChaseAngle:
  case NativeAction::DirectionFromLeader:
  case NativeAction::EnemyAngleVelocity:
  case NativeAction::EnemyAngleDirection:
  case NativeAction::FollowVariableAngle:
  case NativeAction::EnemyDistanceSleep:
    return true;
  default:
    return false;
  }
}
bool graphics_service(NativeAction operation) {
  switch(operation) {
  case NativeAction::SelectFourInitial:
  case NativeAction::SelectFourAnimation:
  case NativeAction::SelectFourFirst:
  case NativeAction::SelectFourSecond:
  case NativeAction::StepFourWalk:
  case NativeAction::StepEightAnimation:
  case NativeAction::SelectEightCurrent:
  case NativeAction::InitializePartyActor:return true;
  default:return false;
  }
}
std::optional<WorldSpriteFadeTask> fade_task(NativeAction action) {
  using A = NativeAction;
  using T = WorldSpriteFadeTask;
  switch (action) {
  case A::FadePauseActors: return T::PauseActors;
  case A::FadeRestoreActors: return T::RestoreActors;
  case A::FadeShowSprites: return T::ShowSprites;
  case A::FadeRefreshSprites: return T::RefreshSprites;
  case A::FadeHideBlinkSprites: return T::HideBlinkSprites;
  case A::FadeRows: return T::Rows;
  case A::FadeColumns: return T::Columns;
  case A::FadeResetDissolve: return T::ResetDissolve;
  case A::FadeDissolve: return T::Dissolve;
  case A::FadeFinishTask: return T::FinishTask;
  case A::FadeReleaseController: return T::ReleaseController;
  default: return {};
  }
}
void validate_flags(dialogue::WindowHost &windows, ActorWorld &actors) {
  const auto &flags = windows.state().event_flags;
  require(
      flags.size() == 128,
      "Native world runtime requires exactly 128 authoritative event bytes");
  const auto bound = actors.scene().event_flags;
  require(bound.size() == flags.size() && bound.data() == flags.data(),
          "Native world and dialogue must share the same event flag owner");
}
// Adopt before Scene can commit its WindowHost party binding. If any later
// constructor step fails, restore only geometry this adoption initialized.
// Successful construction retains authoritative geometry for its live actors.
struct MovementLease {
  ActorWorld &actors;
  WorldActorMovement &movement;
  std::vector<WorldActor *> initialized;
  bool committed{};
  MovementLease(ActorWorld &a, WorldActorMovement &m) : actors(a), movement(m) {
    for (auto id : actors.actors()) {
      auto &actor = actors.actor(id);
      if (!actor.hitbox)
        initialized.push_back(&actor);
    }
    // Atomic in ActorWorld: a conflicting owner or missing content leaves
    // both ownership and all hitboxes untouched, including on allocation
    // failure.
    actors.bind_movement(movement);
  }
  ~MovementLease() {
    if (!committed)
      for (auto *actor : initialized)
        actor->hitbox.reset();
    actors.clear_movement(movement);
  }
  void commit() noexcept {
    committed = true;
    initialized.clear();
  }
};
struct EnemyLifetimeLease {
  ActorWorld &actors;
  WorldEnemies &enemies;
  EnemyLifetimeLease(ActorWorld &a, WorldEnemies &e) : actors(a), enemies(e) {
    actors.bind_enemies(enemies);
  }
  ~EnemyLifetimeLease() { actors.clear_enemies(enemies); }
};
} // namespace

struct WorldRuntime::State : story::FrameBoundaryService {
  dialogue::WindowHost &windows;
  std::weak_ptr<const void> windows_lifetime;
  party::State &party;
  story::RandomState &random;
  story::InputState &input;
  story::TickState &clock;
  const WorldCollision &collision;
  ActorWorld &actors;
  WorldEnemies &enemies;
  WorldActivation &activation;
  WorldMapArea &area;
  WorldCollisionWindow *collision_window{};
  AreaPalettes &palettes;
  const WorldMap &map_content;
  const WorldPalettes &palette_content;
  const WorldPaletteAnimations &animation_content;
  WorldSpawnControls &controls;
  NpcStripAdmission admission;
  ActorRetentionReader retention;
  // Only the animation sequence's private continuation. Published colors
  // remain the borrowed AreaPalettes; no external writer uses this copy.
  AreaPaletteAnimation palette_animation;
  WorldActorMovement movement;
  MovementLease movement_lease;
  EnemyLifetimeLease enemy_lifetime_lease;
  WorldStreaming streaming;
  story::Scene scene;
  std::unique_ptr<WorldMaintenance> maintenance;
  const WorldControl *world_control{};
  const WorldControlState *source_control_state{};
  std::weak_ptr<const void> control_lifetime,control_state_lifetime;
  const WorldInteractionQueue *interaction_queue{};
  WorldMaintenanceState *maintenance_state{};
  const party::ItemTransformationState *item_state{};
  WorldWalking *walking{};
  WorldEscalator *escalator{};
  WorldBicycle *bicycle{};
  WorldAutomatic *automatic{};
  WorldSpriteFade *sprite_fade{};
  WorldBattleEntry *battle_entry{};
  WorldEnemyMovement *enemy_movement{};
  WorldEnemyContact *enemy_contact{};
  WorldEnemyBehavior *enemy_behavior{};
  entities::graphics::Lifecycle *actor_graphics{};
  WorldScenePresentation *presentation{};
  const std::uint16_t *map_palette_backup{};
  battle::PsiDisplayState *map_palette_video{};
  WorldEncounterEffects *encounter_effects{};
  WorldPartyFollowing *following{};
  WorldDoorTransitions *transitions{};
  const npcs::InteractionState *interaction_state{};
  npcs::Interactions *interactions{};
  const party::Inventory *inventory{};
  std::vector<Operation *> stack;
  std::exception_ptr failure;
  bool abandoned{}, capture_dirty{};

  bool transition_owner_changed() const noexcept {
    return walking && walking->doors().transitions() != transitions;
  }

  enum class InterruptMode { World, Default, Custom };
  InterruptMode interrupt_mode = InterruptMode::World;
  story::InterruptCallback *interrupt_callback{};
  bool in_interrupt_callback{};
  bool has_frame_boundary() const noexcept {
    return transitions || interrupt_mode != InterruptMode::World;
  }
  void validate_publication() const override {
    if (interrupt_mode == InterruptMode::Custom) {
      require(interrupt_callback, "Native interrupt callback lost its actual owner");
      if (!in_interrupt_callback) interrupt_callback->validate_publication();
    } else if (interrupt_mode == InterruptMode::World) {
      require(transitions && !transitions->failed(),
              "Native frame requires healthy transition/scheduler owners");
    }
  }
  void after_publication() override {
    if (in_interrupt_callback) return;
    in_interrupt_callback = true;
    try {
      if (interrupt_mode == InterruptMode::Custom) interrupt_callback->after_publication();
      else if (interrupt_mode == InterruptMode::World)
        (void)transitions->scheduler().process_frame();
      in_interrupt_callback = false;
    } catch (...) { in_interrupt_callback = false; throw; }
  }
  bool changes_display_registers() const noexcept override {
    return interrupt_mode == InterruptMode::Custom && interrupt_callback &&
           interrupt_callback->changes_display_registers();
  }
  void validate_input() const override {
    if (transitions) {
      require(!transitions->failed(), "Native input lost its actual transition owner");
      require(!transitions->playback().recording_required(),
              "Native frame recording requires its real recording service");
    }
  }
  std::array<std::uint16_t, 2>
  read_input(std::array<std::uint16_t, 2> host) override {
    if (!transitions) return host;
    transitions->playback().read(host);
    return transitions->playback().state().raw;
  }

  State(dialogue::WindowHost &w, party::State &party,
        story::RandomState &random, party::MeterWindows &meters,
        story::TickState &clock, story::InputState &input, ActorWorld &a,
        WorldActivation &activation, WorldEnemies &e,
        const WorldCollision &collision, WorldMapArea &map,
        AreaPalettes &colors, const WorldMap &maps,
        const WorldPalettes &palettes, const WorldPaletteAnimations &animations,
        WorldSpawnControls &spawn, NpcStripAdmission policy,
        ActorRetentionReader reader, story::SceneView view)
      : windows(w), windows_lifetime(w.source_lifetime()), party(party), random(random), input(input), clock(clock),
        collision(collision), actors(a), enemies(e), activation(activation), area(map),
        palettes(colors), map_content(maps), palette_content(palettes),
        animation_content(animations), controls(spawn), admission(policy),
        retention(std::move(reader)),
        palette_animation(animations.prepare(colors)), movement(collision, map),
        movement_lease(a, movement), enemy_lifetime_lease(a, e),
        streaming(a, activation, e, collision, map, random, spawn),
        scene(w, party, random, meters, clock, input, a, map, colors, view) {
    actors.bind_drawing_input(input);
    movement_lease.commit();
  }
  ~State() {
    actors.clear_drawing_input(input);
    if (presentation && !windows_lifetime.expired())
      windows.clear_palette_publication(*presentation);
    if (following)
      actors.clear_party_following(*following);
  }
};

WorldRuntime::WorldRuntime(dialogue::WindowHost &w, party::State &p,
                           story::RandomState &r, party::MeterWindows &m,
                           story::TickState &clock, story::InputState &input,
                           ActorWorld &a, WorldActivation &activation,
                           WorldEnemies &e, const WorldCollision &collision,
                           WorldMapArea &area, AreaPalettes &palettes,
                           const WorldMap &maps, const WorldPalettes &colors,
                           const WorldPaletteAnimations &animations,
                           WorldSpawnControls &spawn,
                           NpcStripAdmission admission,
                           ActorRetentionReader reader, story::SceneView view) {
  validate_flags(w, a);
  if (admission != NpcStripAdmission::Admitted &&
      admission != NpcStripAdmission::Rejected)
    throw std::invalid_argument(
        "Native world runtime requires explicit NPC strip admission");
  require(!a.request() && !a.camera_refresh() && !activation.request() &&
              !e.busy(),
          "Native world runtime cannot adopt unfinished owner work");
  state_ = std::make_unique<State>(
      w, p, r, m, clock, input, a, activation, e, collision, area, palettes,
      maps, colors, animations, spawn, admission, std::move(reader), view);
}
WorldRuntime::~WorldRuntime() {
  if(state_->actor_graphics)
    state_->streaming.clear_actor_graphics(*state_->actor_graphics);
}
void WorldRuntime::check() const {
  auto &s = *state_;
  if (s.failure)
    std::rethrow_exception(s.failure);
  require(!s.abandoned,
          "An abandoned operation invalidated the native world runtime");
  require(!s.windows_lifetime.expired(),
          "Native world runtime lost its actual window host");
  require(!s.scene.failed(), "Native scene continuation has failed");
  require(!s.world_control || (!s.control_lifetime.expired()&&!s.control_state_lifetime.expired()),
          "Native runtime lost its actual world controller instance");
  require(!s.transition_owner_changed(),
          "Native door producers and frame services have different owners");
  require(!s.maintenance || !s.maintenance->failed(),
          "Native world maintenance or its controller has failed");
  require(!s.walking || !s.walking->failed(),
          "Native world walking has failed");
  require(!s.escalator || !s.escalator->failed(),
          "Native world escalator movement has failed");
  require(!s.bicycle || !s.bicycle->failed(),
          "Native bicycle movement has failed");
  require(!s.automatic || !s.automatic->failed(),
          "Native automatic movement has failed");
  require(!s.battle_entry || !s.battle_entry->failed(),
          "Native battle entry has failed");
  require(!s.enemy_movement || !s.enemy_movement->failed(),
          "Native enemy movement has failed");
  require(!s.enemy_contact || !s.enemy_contact->failed(),
          "Native enemy contact has failed");
  require(!s.enemy_behavior || !s.enemy_behavior->failed(),
          "Native enemy behavior has failed");
  require(!s.actor_graphics || !s.actor_graphics->failed(),
          "Native actor graphics continuation has failed");
  require(!s.following || !s.following->failed(),
          "Native party following continuation has failed");
  require(!s.encounter_effects || !s.encounter_effects->failed(),
          "Native encounter effects have failed");
  // WorldStreaming owns the original terminal exception and never resumes
  // consumed work. Do not hide it behind a generic busy diagnostic.
  if (s.streaming.failed())
    s.streaming.advance(1);
  validate_flags(s.windows, s.actors);
}
void WorldRuntime::check_idle() const {
  check();
  require(state_->stack.empty() && !state_->streaming.busy(),
          "Native world runtime has unfinished scene or streaming work");
  require(!state_->maintenance || !state_->maintenance->busy(),
          "Native world controller has unfinished work");
  require(!state_->walking || !state_->walking->busy(),
          "Native walking has unfinished work");
  require(!state_->escalator || !state_->escalator->busy(),
          "Native escalator movement has unfinished work");
  require(!state_->bicycle || !state_->bicycle->busy(),
          "Native bicycle has unfinished work");
  require(!state_->automatic || !state_->automatic->busy(),
          "Native automatic movement has unfinished work");
  require(!state_->battle_entry || !state_->battle_entry->busy(),
          "Native battle entry has unfinished work");
  require(!state_->enemy_contact || !state_->enemy_contact->busy(),
          "Native enemy contact has unfinished work");
}
void WorldRuntime::check_operation(const Operation &operation) const {
  check();
  require(!state_->stack.empty() && state_->stack.back() == &operation,
          "Another operation owns the native world continuation");
}
void WorldRuntime::require_idle() const { check_idle(); }
void WorldRuntime::require_content_boundary(Operation *parent) const {
  if (!parent) {check_idle();return;}
  require(&parent->runtime_==this,"Content work requires this runtime's actual parent");
  check_operation(*parent);
  require(!parent->done_ && !parent->maintenance_ && !parent->walking_ && !parent->escalator_ && !parent->automatic_,
          "Content work cannot interrupt a movement or maintenance child");
  state_->scene.require_content_boundary(parent->scene_);
}
bool WorldRuntime::uses(const party::Inventory &inventory) const noexcept {
  return state_->inventory == &inventory;
}
bool WorldRuntime::uses(const ActorWorld &actors) const noexcept {
  return &state_->actors == &actors;
}
bool WorldRuntime::uses(const story::TickState &clock) const noexcept {
  return &state_->clock == &clock;
}
bool WorldRuntime::uses(const npcs::Interactions &interactions) const noexcept {
  return state_->interactions == &interactions;
}
bool WorldRuntime::compatible_world_state(
    const WorldPartyState &formation, const PartyTrail &trail,
    const WorldControlState &control, const WorldMaintenanceState &maintenance,
    const WorldInteractionQueue &queue,
    const WorldPartyFollowingState &following) const noexcept {
  const auto &s = *state_;
  return (!s.world_control ||
          (&s.world_control->formation() == &formation &&
           &s.world_control->trail() == &trail &&
           &s.world_control->state() == &control)) &&
         (!s.maintenance_state || s.maintenance_state == &maintenance) &&
         (!s.interaction_queue || s.interaction_queue == &queue) &&
         (!s.following || s.following->uses(following));
}
bool WorldRuntime::uses(const dialogue::WindowHost &windows,
                        const party::State &party, const ActorWorld &actors,
                        const story::TickState &clock,
                        const WorldSpawnControls &spawn) const noexcept {
  const auto &s = *state_;
  return &s.windows == &windows && &s.party == &party && &s.actors == &actors &&
         &s.clock == &clock && &s.controls == &spawn;
}
void WorldRuntime::check_response(const Operation &operation) const {
  check_operation(operation);
  require(!state_->streaming.busy() ||
          ((operation.streaming_publication_ ||
            (operation.graphics_streaming_publication_&&operation.graphics_publication_)) &&
           state_->streaming.needs_graphics_publication()),
          "Native streaming must finish before a scene response");
}

WorldRuntime::Operation::Operation(
    WorldRuntime &runtime, std::unique_ptr<story::Scene::Operation> scene,
    bool refresh)
    : runtime_(runtime), owned_scene_(std::move(scene)), scene_(owned_scene_.get()), refresh_(refresh) {}
WorldRuntime::Operation::Operation(WorldRuntime &runtime, story::Scene::Operation &scene)
    : runtime_(runtime), scene_(&scene) {}
WorldRuntime::Operation::~Operation() {
  if (!done_)
    runtime_.state_->abandoned = true;
}
std::unique_ptr<WorldRuntime::Operation>
WorldRuntime::wrap(std::unique_ptr<story::Scene::Operation> scene,
                   bool refresh) {
  auto operation = std::unique_ptr<Operation>(
      new Operation(*this, std::move(scene), refresh));
  state_->stack.push_back(operation.get());
  return operation;
}
std::unique_ptr<WorldRuntime::Operation>
WorldRuntime::begin(story::TickKind kind) {
  check_idle();
  const bool refresh = state_->capture_dirty;
  require(!refresh || ((kind == story::TickKind::WorldFrame || kind == story::TickKind::ActorFrame) &&
                       !state_->windows.prompt_state().battle_mode),
          "Changed world content needs an explicit ordinary actor/screen tick "
          "before publication");
  return wrap(state_->scene.begin(kind), refresh);
}
bool WorldRuntime::permits_source_meter_control(const WorldControlState &control) const noexcept {
  return !state_->world_control||(!state_->control_lifetime.expired()&&!state_->control_state_lifetime.expired()&&state_->source_control_state==&control);
}
std::unique_ptr<WorldRuntime::Operation> WorldRuntime::begin_source_meter_status_window_tick_impl(
    story::SourceWorkService &work,
    std::function<void(story::TickState&,const battle::FrameDisplay&,party::State&,party::MeterWindows&,dialogue::WindowHost&)> validator,
    std::function<void()> guard,const void *control,const void *counter,const void *palette) {
  check_idle();require(!state_->capture_dirty&&!state_->streaming.busy(),
      "Source meter status requires its completed actual world capture");
  return wrap(state_->scene.begin_source_meter_status_window_tick_impl(work,std::move(validator),std::move(guard),control,counter,palette));
}
std::unique_ptr<WorldRuntime::Operation> WorldRuntime::begin_source_meter_tiles_window_tick_impl(
    story::SourceWorkService &work,
    std::function<void(story::TickState&,const battle::FrameDisplay&,party::State&,party::MeterWindows&,dialogue::WindowHost&)> validator,
    std::function<void()> guard,const void *control,const void *scratch) {
  check_idle();require(!state_->capture_dirty&&!state_->streaming.busy(),
      "Source meter tiles requires its completed actual world capture");
  return wrap(state_->scene.begin_source_meter_tiles_window_tick_impl(work,std::move(validator),std::move(guard),control,scratch));
}
std::unique_ptr<WorldRuntime::Operation> WorldRuntime::begin_source_meter_window_tick_impl(
    story::SourceWorkService &work,std::function<void(story::TickState&,const battle::FrameDisplay&,party::State&,dialogue::WindowHost&)> validator) {
  check_idle();
  require(!state_->capture_dirty&&!state_->streaming.busy(),
      "Source meter roller requires its completed actual world capture");
  return wrap(state_->scene.begin_source_meter_window_tick_impl(work,std::move(validator)));
}
std::unique_ptr<WorldRuntime::Operation> WorldRuntime::begin_source_random_window_tick_impl(
    story::SourceWorkService &work,std::function<void(story::TickState&,const battle::FrameDisplay&,story::RandomState&)> validator) {
  check_idle();
  require(!state_->capture_dirty&&!state_->streaming.busy(),
      "Source RAND requires its completed actual world capture");
  return wrap(state_->scene.begin_source_random_window_tick_impl(work,std::move(validator)));
}
std::unique_ptr<WorldRuntime::Operation> WorldRuntime::begin_source_window_tick_impl(
    story::SourceWorkService &work,std::function<void(story::TickState&,const battle::FrameDisplay&,dialogue::WindowHost&,const WorldDisplayFade&)> validator) {
  check_idle();
  require(!state_->capture_dirty&&!state_->streaming.busy(),
      "Source window requires its completed actual world capture");
  return wrap(state_->scene.begin_source_window_tick_impl(work,std::move(validator)));
}
std::unique_ptr<WorldRuntime::Operation> WorldRuntime::begin_source_world_frame_impl(
    story::SourceWorkService &work,std::function<void(story::TickState&,const battle::FrameDisplay&)> validator) {
  check_idle();
  require(!state_->capture_dirty&&!state_->streaming.busy(),
      "Source foreground requires its completed actual world capture");
  return wrap(state_->scene.begin_source_world_frame_impl(work,std::move(validator)));
}
void WorldRuntime::set_interrupt_callback(story::InterruptCallback &callback, Operation *parent) {
  require_content_boundary(parent);
  require(!state_->in_interrupt_callback, "Cannot replace a running interrupt callback");
  callback.validate_publication();
  state_->interrupt_callback = &callback;
  state_->interrupt_mode = State::InterruptMode::Custom;
}
void WorldRuntime::reset_interrupt_callback(Operation *parent) {
  require_content_boundary(parent);
  require(!state_->in_interrupt_callback, "Cannot reset a running interrupt callback");
  state_->interrupt_callback = nullptr;
  state_->interrupt_mode = State::InterruptMode::Default;
}
void WorldRuntime::restore_world_interrupt_callback(Operation *parent) {
  require_content_boundary(parent);
  require(!state_->in_interrupt_callback && state_->transitions && !state_->transitions->failed(),
          "World interrupt restoration requires its healthy actual scheduler");
  state_->interrupt_callback = nullptr;
  state_->interrupt_mode = State::InterruptMode::World;
}
bool WorldRuntime::uses_interrupt_callback(const story::InterruptCallback &callback) const noexcept {
  return state_->interrupt_mode == State::InterruptMode::Custom && state_->interrupt_callback == &callback;
}
void WorldRuntime::abandon_interrupt_callback(const story::InterruptCallback &callback) noexcept {
  if (uses_interrupt_callback(callback)) {
    state_->interrupt_callback = nullptr;
    state_->interrupt_mode = State::InterruptMode::Default;
    state_->abandoned = true;
  }
}
std::unique_ptr<WorldRuntime::Operation> WorldRuntime::begin_publication() {
  check_idle();
  require(!state_->capture_dirty,
          "Changed world content must be captured before publication");
  return wrap(state_->scene.begin_publication());
}
std::unique_ptr<WorldRuntime::Operation> WorldRuntime::begin_retained_publication(Operation *parent) {
  require_content_boundary(parent);
  require(!state_->streaming.busy(), "Retained publication cannot interrupt map activation");
  // The actual map palette spin runs NMI over the previously captured screen.
  // Prepared content remains dirty until the normal map Capture stage; this
  // wait cannot activate actors, capture new scenery or consume input.
  return wrap(parent ? state_->scene.begin_nested_publication(*parent->scene_) :
                       state_->scene.begin_publication());
}
bool WorldRuntime::streaming_needs_publication() const noexcept {
  return state_->streaming.needs_graphics_publication();
}
void WorldRuntime::respond_streaming_publication() {
  check();state_->streaming.respond_graphics_publication();
}
std::unique_ptr<WorldRuntime::Operation> WorldRuntime::begin_streaming_publication(Operation *parent) {
  check();
  require(state_->streaming.needs_graphics_publication(),
      "Streaming publication requires its actual pending raw NPC creation");
  if(parent)check_operation(*parent);
  else require(state_->stack.empty(),"An actor callback owns this streaming publication");
  auto operation=wrap(parent?state_->scene.begin_actor_publication(*parent->scene_):state_->scene.begin_publication());
  operation->streaming_publication_=true;return operation;
}
std::unique_ptr<WorldRuntime::Operation> WorldRuntime::begin_nested_publication(Operation &parent) {
  require_content_boundary(&parent);
  require(!state_->streaming.busy() && !state_->capture_dirty,
          "Changed world content must be captured before publication");
  return wrap(state_->scene.begin_nested_publication(*parent.scene_));
}
dialogue::Conversation &WorldRuntime::dialogue_owner(Operation &parent) {
  require_content_boundary(&parent);
  return state_->scene.dialogue_owner(*parent.scene_);
}
std::unique_ptr<WorldRuntime::Operation> WorldRuntime::begin_main_frame() {
  check_idle();
  require(state_->encounter_effects, "Main frame requires the actual encounter effect owner");
  auto operation = begin(story::TickKind::ActorFrame);
  operation->main_effect_pending_ = true;
  return operation;
}
std::unique_ptr<WorldRuntime::Operation>
WorldRuntime::begin(dialogue::WindowEffect effect) {
  check_idle();
  require(!state_->capture_dirty,
          "Changed world content must be captured before window work");
  return wrap(state_->scene.begin(effect));
}
std::unique_ptr<WorldRuntime::Operation>
WorldRuntime::begin(dialogue::Conversation &conversation) {
  check_idle();
  require(!state_->capture_dirty,
          "Changed world content must be captured before dialogue work");
  return wrap(state_->scene.begin(conversation));
}
std::unique_ptr<WorldRuntime::Operation>
WorldRuntime::begin_nested(dialogue::Conversation &conversation,
                           Operation &parent) {
  check_response(parent);
  require(!parent.walking_ && !parent.escalator_ && !parent.automatic_,
          "Native movement must finish before nested dialogue");
  return wrap(state_->scene.begin_nested(conversation, *parent.scene_));
}
std::unique_ptr<WorldRuntime::Operation> WorldRuntime::begin_nested(story::TickKind kind, Operation &parent) {
  require_nested(parent);
  return wrap(state_->scene.begin_nested(kind,*parent.scene_));
}
std::unique_ptr<WorldRuntime::Operation> WorldRuntime::begin_actor_frame(story::ActorFrameService &service) {
  require_content_boundary();
  require(!state_->streaming.busy() && !state_->capture_dirty,
          "Actor-frame phases require completed world content capture");
  return wrap(state_->scene.begin_actor_frame(service));
}
std::unique_ptr<WorldRuntime::Operation> WorldRuntime::begin_nested_actor_frame(story::ActorFrameService &service, Operation &parent) {
  require_content_boundary(&parent);
  require(!state_->streaming.busy() && !state_->capture_dirty,
          "Actor-frame phases require completed world content capture");
  return wrap(state_->scene.begin_nested_actor_frame(service,*parent.scene_));
}
void WorldRuntime::require_nested(const Operation &parent) const {
  check_response(parent);
  require(!parent.walking_ && !parent.escalator_ && !parent.automatic_,
          "Native movement must finish before nested actor/frame lifecycle");
  state_->scene.require_nested(*parent.scene_);
}
std::unique_ptr<WorldRuntime::Operation> WorldRuntime::service_child(story::Scene::Operation &child, Operation &parent) {
  check_response(parent);
  require(child.uses(state_->scene) && child.is_child_of(*parent.scene_),
          "Native nested runtime requires its actual scene child and parent");
  require(!state_->capture_dirty, "Changed world content must be captured before nested work");
  auto operation = std::unique_ptr<Operation>(new Operation(*this, child));
  state_->stack.push_back(operation.get());
  return operation;
}
story::Scene::Operation &WorldRuntime::scene_operation(Operation &parent) {
  require_nested(parent);
  return *parent.scene_;
}
void WorldRuntime::bind_interactions(npcs::Interactions &interactions) {
  check_idle();
  require(!state_->world_control ||
              &state_->world_control->leader_state() == &interactions.state(),
          "Native interactions and control must share the same leader state");
  state_->scene.bind_interactions(interactions);
  state_->interaction_state = &interactions.state();
  state_->interactions = &interactions;
}
void WorldRuntime::bind_inventory(party::Inventory &inventory) {
  check_idle();
  require(!state_->item_state || inventory.uses(*state_->item_state),
          "Native inventory and maintenance must share transformation timers");
  state_->scene.bind_inventory(inventory);
  state_->inventory = &inventory;
}
void WorldRuntime::bind_maintenance(WorldControl &control,
                                    WorldMaintenanceState &state,
                                    party::ItemTransformationState &items,
                                    WorldInteractionQueue &queue) {
  check_idle();
  auto &s = *state_;
  require(!s.maintenance, "Native world maintenance already has an owner");
  require(!s.inventory || s.inventory->uses(items),
          "Native maintenance and inventory must share transformation timers");
  require(!s.interaction_state ||
              s.interaction_state == &control.leader_state(),
          "Native control and interactions must share the same leader state");
  require(control.uses(s.actors, s.windows.prompt_state(), s.input, s.clock,
                       s.collision, s.area),
          "Native maintenance control must borrow this runtime's live owners");
  require(!control.busy() && !control.failed(),
          "Native runtime cannot adopt unfinished or failed control work");
  require(!queue.failed(),
          "Native runtime cannot adopt an abandoned interaction queue");
  s.maintenance = std::make_unique<WorldMaintenance>(
      s.windows, control, state, items, queue, s.area, s.palettes,
      s.palette_animation, s.controls.prepared);
  if (s.presentation) s.maintenance->bind_presentation(*s.presentation);
  s.world_control = &control;
  s.source_control_state = &control.state();s.control_lifetime = control.source_lifetime();
  s.control_state_lifetime = control.state().source_lifetime();
  s.interaction_queue = &queue;
  s.maintenance_state = &state;
  s.item_state = &items;
}
void WorldRuntime::bind_walking(WorldWalking &walking) {
  check_idle();
  auto &s = *state_;
  require(s.world_control && s.interaction_queue,
          "Native walking requires bound world maintenance");
  require(!s.walking, "Native walking already has an owner");
  require(!walking.doors().transitions(),
          "Bind native door transitions through the runtime after walking");
  require(walking.uses(*s.world_control, s.actors, s.enemies,
                       *s.interaction_queue, *s.maintenance_state, s.party,
                       s.input, s.clock, s.collision, s.area),
          "Native walking must borrow this runtime's live owners");
  require(!walking.busy() && !walking.failed(),
          "Native runtime cannot adopt unfinished or failed walking");
  s.walking = &walking;
}
void WorldRuntime::bind_party_following(WorldPartyFollowing &following) {
  check_idle();
  auto &s = *state_;
  require(s.world_control && s.maintenance_state,
          "Native party following requires bound world maintenance");
  require(!s.following, "Native party following already has an owner");
  require(following.uses(*s.world_control, s.party, *s.maintenance_state,
                         s.windows.prompt_state()),
          "Native following must borrow this runtime's live party and trail");
  s.actors.bind_party_following(following);
  s.following = &following;
}
void WorldRuntime::bind_door_transitions(WorldDoorTransitions &transitions) {
  check_idle();
  auto &s = *state_;
  require(
      s.walking && s.world_control && s.interaction_queue &&
          s.maintenance_state,
      "Native door transitions require the bound walking/maintenance owners");
  require(!s.transitions || s.transitions == &transitions,
          "Native world frame already has different transition owners");
  require(!transitions.failed() &&
              transitions.playback().uses(s.world_control->leader_state(),
                                          s.input) &&
              transitions.scheduler().uses(
                  s.windows, s.clock, s.interaction_queue->phone(),
                  s.actors.appearance_scene(), *s.maintenance_state),
          "Native transitions require this frame's input, clock, phone and "
          "gate owners");
  s.walking->bind_transitions(transitions);
  s.scene.bind_source_input(transitions.playback());
  s.transitions = &transitions;
}
void WorldRuntime::bind_escalator(WorldEscalator &escalator) {
  check_idle();
  auto &s = *state_;
  require(s.walking && s.transitions && !s.escalator,
          "Native escalator movement requires bound walking/transitions and no "
          "other owner");
  require(!escalator.failed() && !escalator.busy() &&
              escalator.uses(*s.world_control, *s.walking, *s.transitions,
                             *s.maintenance_state, s.input,
                             *s.interaction_queue, s.collision, s.area),
          "Native escalator must use this runtime's actual movement and "
          "transition owners");
  s.escalator = &escalator;
}
void WorldRuntime::bind_bicycle(WorldBicycle &bicycle) {
  check_idle();
  auto &s = *state_;
  require(s.walking && !s.bicycle,
          "Native bicycle requires bound walking and no other owner");
  require(!bicycle.failed() && !bicycle.busy() &&
              bicycle.uses(*s.world_control, *s.walking, s.enemies, s.input,
                           *s.interaction_queue, s.collision, s.area),
          "Native bicycle must use this runtime's actual world owners");
  s.bicycle = &bicycle;
}
void WorldRuntime::bind_sprite_fade(WorldSpriteFade &fade) {
  check_idle();
  auto &s = *state_;
  require((!s.sprite_fade || s.sprite_fade == &fade) && fade.uses(s.actors),
          "Sprite fades require this runtime's actual actor owner");
  s.sprite_fade = &fade;
}
void WorldRuntime::bind_automatic(WorldAutomatic &automatic) {
  check_idle();
  auto &s = *state_;
  require(s.walking && s.transitions && !s.automatic,
          "Native automatic movement requires bound walking/transitions and no "
          "other owner");
  require(
      !automatic.failed() && !automatic.busy() &&
          automatic.uses(*s.world_control, *s.walking, *s.transitions,
                         s.enemies, *s.maintenance_state, s.input,
                         *s.interaction_queue),
      "Native automatic movement must use this runtime's actual world owners");
  s.automatic = &automatic;
}
const story::Scene &WorldRuntime::scene() const noexcept { return state_->scene; }
story::Scene &WorldRuntime::coordinator_scene() {
  check_idle();
  require(!state_->scene.busy(), "Scene construction borrow requires idle native ownership");
  return state_->scene;
}
std::unique_ptr<WorldRuntime::Operation> WorldRuntime::service_child(story::Scene::Operation &scene) {
  check_idle();
  require(scene.uses(state_->scene) && !scene.complete(),
          "Native world can service only an unfinished child of its actual Scene");
  require(!state_->capture_dirty, "Native scene child cannot bypass changed world capture");
  auto operation = std::unique_ptr<Operation>(new Operation(*this, scene));
  state_->stack.push_back(operation.get());
  return operation;
}
void WorldRuntime::bind_battle_publication(story::BattlePublication &publication) {
  check_idle();
  auto &s = *state_;
  require(!s.presentation, "World-to-battle publication requires its encounter handoff lifecycle");
  require(publication.window_host() == &s.windows,
          "Battle publication and runtime must share the actual windows");
  s.scene.bind_publication(publication);
  s.capture_dirty = true;
}
void WorldRuntime::enter_battle_publication(WorldScenePresentation &expected,
    story::BattlePublication &next, const WorldDisplayFade &fade, battle::Frame &frame,
    battle::AnimationCommands *animations) {
  check_idle();
  auto &s = *state_;
  require(!s.capture_dirty && s.presentation == &expected &&
              next.uses(expected.visual(), fade) && expected.display_fade() == &fade,
          "Battle handoff requires captured world and actual shared visual/fade owners");
  s.scene.handoff_publication(expected, next, fade, {&frame, animations});
}
void WorldRuntime::return_world_publication(story::BattlePublication &expected,
    WorldScenePresentation &next, const WorldDisplayFade &fade) {
  check_idle();
  auto &s = *state_;
  require(!s.capture_dirty && s.presentation == &next &&
              expected.uses(next.visual(), fade) && next.display_fade() == &fade,
          "World return requires captured world and actual shared visual/fade owners");
  s.scene.handoff_publication(expected, next, fade, {});
}
void WorldRuntime::bind_battle_animations(battle::AnimationCommands &animations) {
  check_idle();
  state_->scene.bind_battle_animations(animations);
}
void WorldRuntime::bind_battle_frame(battle::Frame &frame) {
  check_idle();
  state_->scene.bind_battle_frame(frame);
}
void WorldRuntime::bind_world_control_commands(WorldControlCommands &commands) {
  check_idle();
  require(state_->automatic && commands.uses(*state_->automatic),
          "Native focus commands require this runtime's bound automatic owner");
  state_->scene.bind_world_control(commands);
}
void WorldRuntime::bind_battle_entry(WorldBattleEntry &entry) {
  check_idle();
  auto &s = *state_;
  require(s.automatic && !s.battle_entry,
          "Native battle entry requires bound Automatic and no other owner");
  require(!entry.failed() && !entry.busy() && s.automatic->uses(entry) &&
              entry.uses(s.party, s.collision, s.area) &&
              (!s.enemy_movement || s.enemy_movement->uses(entry)) &&
              (!s.encounter_effects || entry.uses(*s.encounter_effects)),
          "Native battle entry must use this runtime's actual world owners");
  s.battle_entry = &entry;
}
void WorldRuntime::bind_enemy_movement(WorldEnemyMovement &movement) {
  check_idle();
  auto &s = *state_;
  require(s.world_control && !s.enemy_movement,
          "Native enemy movement requires bound control and no other owner");
  require(!movement.failed() &&
              movement.uses(s.actors, s.collision, s.area,
                            s.world_control->formation(), s.party) &&
              (!s.battle_entry || movement.uses(*s.battle_entry)) &&
              (!s.enemy_behavior || s.enemy_behavior->uses(movement)),
          "Native enemy movement must use this runtime's actual world owners");
  s.enemy_movement = &movement;
}
void WorldRuntime::bind_presentation(WorldScenePresentation &presentation) {
  check_idle();
  auto &s = *state_;
  require(!s.presentation || s.presentation == &presentation,
          "Native runtime already has a scene presentation owner");
  s.windows.bind_palette_publication(presentation);
  s.scene.bind_publication(presentation);
  if (s.maintenance) s.maintenance->bind_presentation(presentation);
  s.presentation = &presentation;
  s.capture_dirty = true;
}
void WorldRuntime::bind_map_palette_backup(std::span<const std::uint16_t,256> backup,
                                           battle::PsiDisplayState &video) {
  check_idle();
  auto &s=*state_;
  require(s.presentation && s.presentation->uses_video_transport(video) &&
      (!s.map_palette_backup || s.map_palette_backup==backup.data()) &&
      (!s.map_palette_video || s.map_palette_video==&video),
      "Map palette shift must borrow the runtime's actual retained backup and display");
  s.map_palette_backup=backup.data();s.map_palette_video=&video;
}
void WorldRuntime::bind_encounter_effects(WorldEncounterEffects &effects) {
  check_idle();
  auto &s = *state_;
  require(s.presentation && (!s.encounter_effects || s.encounter_effects == &effects) &&
          !effects.failed() && effects.uses(*s.presentation) &&
          (!s.battle_entry || s.battle_entry->uses(effects)),
          "Encounter effects require this runtime's actual scene and battle owners");
  s.presentation->bind_encounter_effects(effects);
  s.encounter_effects = &effects;
}
bool WorldRuntime::uses(const WorldEncounterEffects &effects) const noexcept {
  return state_->encounter_effects == &effects;
}
bool WorldRuntime::uses_map_load(
    const ActorWorld &actors, const WorldEnemies &enemies, const WorldMapArea &area,
    const AreaPalettes &palettes, const WorldMap &map, const WorldPalettes &colors,
    const WorldPaletteAnimations &animations, const WorldSpawnControls &spawn,
    const story::RandomState &random, const dialogue::WindowHost &windows,
    const WorldScenePresentation &presentation) const noexcept {
  const auto &s = *state_;
  return &s.actors == &actors && &s.enemies == &enemies && &s.area == &area &&
         &s.palettes == &palettes && &s.map_content == &map &&
         &s.palette_content == &colors && &s.animation_content == &animations &&
         &s.controls == &spawn && &s.random == &random && &s.windows == &windows &&
         s.presentation == &presentation;
}
void WorldRuntime::bind_enemy_behavior(WorldEnemyBehavior &behavior) {
  check_idle();
  auto &s = *state_;
  require(s.world_control && !s.enemy_behavior,
          "Native enemy behavior requires bound control and no other owner");
  require(!behavior.failed() && behavior.uses(s.actors, s.enemies, s.party,
                                            s.world_control->leader_state()) &&
              (!s.enemy_movement || behavior.uses(*s.enemy_movement)),
          "Native enemy behavior must use this runtime's actual world owners");
  s.enemy_behavior = &behavior;
}
void WorldRuntime::bind_enemy_contact(WorldEnemyContact &contact) {
  check_idle();
  auto &s = *state_;
  require(s.battle_entry && s.enemy_movement && s.walking && s.automatic &&
              !s.enemy_contact,
          "Native enemy contact requires bound encounter owners and no other owner");
  require(!contact.failed() && !contact.busy() &&
              contact.uses(*s.battle_entry, *s.enemy_movement, *s.world_control,
                           *s.walking, s.enemies, *s.maintenance_state,
                           *s.automatic, s.collision, s.area),
          "Native enemy contact must use this runtime's actual world owners");
  s.enemy_contact = &contact;
}
void WorldRuntime::bind_actor_graphics(entities::graphics::Lifecycle &graphics) {
  check_idle();auto &s=*state_;
  require(!s.actor_graphics&&!graphics.busy()&&!graphics.failed()&&graphics.uses(s.actors),
      "Raw actor graphics must use this runtime's actual healthy actor owner");
  if(!s.actors.uses(graphics))s.actors.bind_raw_graphics(graphics);
  s.actor_graphics=&graphics;
  s.streaming.bind_actor_graphics(graphics);
}
entities::graphics::Lifecycle *WorldRuntime::actor_graphics() const noexcept {return state_->actor_graphics;}
dialogue::Progress WorldRuntime::Operation::advance(unsigned budget) {
  if (done_)
    return dialogue::Progress::Finished;
  runtime_.check_operation(*this);
  auto &s = *runtime_.state_;
  try {
    while (budget--) {
      if(graphics_publication_) {
        const auto progress=graphics_publication_->advance(1);
        if(progress==dialogue::Progress::Suspended)return progress;
        if(progress!=dialogue::Progress::Finished)continue;
        graphics_publication_.reset();
        if(graphics_streaming_publication_) {
          s.streaming.respond_graphics_publication();graphics_streaming_publication_=false;
        } else if(graphics_creation_)graphics_creation_->respond_publication();else graphics_upload_->respond();
      }
      if(graphics_creation_) {
        if(!graphics_creation_->advance()) {
          if(graphics_creation_->needs_publication())graphics_publication_=s.scene.begin_nested_publication(*scene_);
          continue;
        }
        const auto actor=graphics_creation_->actor();graphics_creation_.reset();
        const auto role=s.actors.actor(actor).authored_role();
        require(role.has_value(),"Raw scripted creation lost its actual authored role");
        scene_->respond_actor(std::uint16_t(*role),graphics_parameters_);continue;
      }
      if(graphics_upload_) {
        if(!graphics_upload_->advance(1)) {
          if(graphics_upload_->needs_publication())graphics_publication_=s.scene.begin_nested_publication(*scene_);
          continue;
        }
        const auto result=graphics_value_.value_or(graphics_upload_->result());
        graphics_upload_.reset();graphics_value_.reset();
        scene_->respond_actor(result,graphics_parameters_);continue;
      }
      if (!streaming_publication_ && s.streaming.busy()) {
        if (!s.streaming.advance(1)) {
          if(s.streaming.needs_graphics_publication()) {
            graphics_publication_=s.scene.begin_actor_publication(*scene_);
            graphics_streaming_publication_=true;
          }
          continue;
        }
      }
      // A zero-strip refresh still owes one control response. Conversely a
      // budget yield while refreshing must retain the same pending callback.
      if (maintenance_streaming_) {
        maintenance_->respond();
        maintenance_streaming_ = false;
      }
      if (walking_) {
        if (!walking_->advance())
          return dialogue::Progress::Suspended;
        walking_.reset();
        maintenance_->respond();
      }
      if (escalator_) {
        if (!escalator_->advance())
          return dialogue::Progress::Suspended;
        escalator_.reset();
        maintenance_->respond();
      }
      if (automatic_) {
        if (!automatic_->advance()) {
          if (s.battle_entry && automatic_->request() ==
                                    WorldAutomaticService::BattleEntry)
            automatic_->enter_battle(*s.battle_entry);
          else
            return dialogue::Progress::Suspended;
        }
        automatic_.reset();
        maintenance_->respond();
      }
      if (maintenance_) {
        if (maintenance_->advance(1)) {
          maintenance_.reset();
          scene_->respond_actor();
          continue;
        }
        const auto &request = maintenance_->request();
        if (!request)
          continue;
        if (s.walking && request->kind == WorldMaintenanceService::Control &&
            request->control &&
            request->control->kind == WorldControlService::Walk) {
          walking_ = s.walking->begin();
          continue;
        }
        if (s.escalator && request->kind == WorldMaintenanceService::Control &&
            request->control &&
            request->control->kind == WorldControlService::Escalator) {
          escalator_ = s.escalator->begin();
          continue;
        }
        if (s.bicycle && request->kind == WorldMaintenanceService::Control &&
            request->control &&
            request->control->kind == WorldControlService::Bicycle) {
          s.bicycle->execute(request->control->previous_movement);
          maintenance_->respond();
          continue;
        }
        if (s.automatic && request->kind == WorldMaintenanceService::Control &&
            request->control &&
            request->control->kind == WorldControlService::Automatic) {
          automatic_ = s.automatic->begin();
          continue;
        }
        if (request->kind == WorldMaintenanceService::Control &&
            request->control &&
            request->control->kind == WorldControlService::RefreshCamera) {
          if(s.collision_window)s.collision_window->refresh(request->control->camera,s.area);
          s.streaming.begin_refresh(request->control->camera, s.admission);
          maintenance_streaming_ = true;
          continue;
        }
        return dialogue::Progress::Suspended;
      }
      const auto progress = scene_->advance(1);
      if (progress == dialogue::Progress::Finished) {
        s.stack.pop_back();
        done_ = true;
        return progress;
      }
      if (progress != dialogue::Progress::Suspended)
        continue;
      switch (*scene_->service()) {
      case story::SceneService::Publication:
      case story::SceneService::ScreenUpdate:
      case story::SceneService::ForegroundPrefix:
      case story::SceneService::SuppressedActors:
      case story::SceneService::ForegroundReturn:
      case story::SceneService::WindowPublication:
        return dialogue::Progress::Suspended;
      case story::SceneService::Frame:
        if (main_effect_pending_) {
          s.encounter_effects->advance();
          main_effect_pending_ = false;
        }
        return dialogue::Progress::Suspended;
      case story::SceneService::PartySpriteBlink:
        clear_party_sprite_blink(s.actors);
        scene_->respond_party_sprite_blink();
        break;
      case story::SceneService::CameraRefresh:
        if(s.collision_window){const auto &camera=s.actors.camera_refresh();
          require(bool(camera),"Collision camera update lost its actual actor refresh");
          s.collision_window->refresh({camera->camera_x,camera->camera_y},s.area);}
        s.streaming.begin_actor_refresh(s.admission,
                                        [this] { scene_->respond_camera(); });
        break;
      case story::SceneService::ActorEngine: {
        const auto &request = scene_->actor_request();
        if(s.actor_graphics&&request&&s.actor_graphics->owns(request->actor)&&
            request->origin==WorldActionOrigin::Script&&request->binding.operation==NativeAction::CreateActor) {
          const auto &actor=s.actors.actor(request->actor);
          const auto operands=std::get<CreateActorOperands>(request->binding.payload);
          auto prepared=s.controls.prepared;
          prepared.x=std::uint16_t(actor.action().position[0]>>16);
          prepared.y=std::uint16_t(actor.action().position[1]>>16);prepared.direction=0;
          graphics_creation_=s.actor_graphics->begin_create(s.actors.prepare_actor(operands.sprite,operands.script,prepared),{0,22});
          graphics_parameters_=request->binding.parameter_bytes;break;
        }
        if(s.actor_graphics&&request&&s.actor_graphics->owns(request->actor)&&request->origin==WorldActionOrigin::Script&&graphics_service(request->binding.operation)) {
          const auto result=s.actors.prepare_raw_appearance();
          require(result.handled,"Actual raw graphics request has no appearance owner");
          if(!result.refreshed) {
            require(result.script_value.has_value()||request->binding.discard_result,
                "Unrefreshed appearance result lacks its actual scalar owner");
            scene_->respond_actor(result.script_value.value_or(0),request->binding.parameter_bytes);break;
          }
          const auto &actor=s.actors.actor(request->actor);
          require(actor.appearance.displayed().has_value(),"Actual graphics refresh lost its selected pose");
          graphics_upload_=s.actor_graphics->begin_selected_upload(request->actor,*actor.appearance.displayed(),actor.behavior.surface_flags);
          graphics_value_=result.script_value;graphics_parameters_=request->binding.parameter_bytes;break;
        }
        if (request && request->origin == WorldActionOrigin::Script) {
          if (const auto task = fade_task(request->binding.operation)) {
            require(s.sprite_fade, "Actor fade task requires its actual fade owner");
            const bool release = *task == WorldSpriteFadeTask::ReleaseController;
            const bool result_used = *task == WorldSpriteFadeTask::Rows ||
                                     *task == WorldSpriteFadeTask::Columns;
            if (release)
              require(request->action.kind == ActionRequestKind::WriteGameWord &&
                          request->action.value == 0xffff,
                      "Fade controller release requires the authored FFFF write");
            else
              require(result_used || request->binding.discard_result,
                      "Actor fade callback has an unowned incidental result");
            const auto value = s.sprite_fade->step(*task, request->actor);
            require(value.has_value() == result_used,
                    "Actor fade callback returned an inconsistent result");
            scene_->respond_actor(value.value_or(0), request->binding.parameter_bytes);
            break;
          }
        }
        if (request && request->origin == WorldActionOrigin::Script &&
            request->binding.operation == NativeAction::ReadPendingDmaBytes) {
          require(s.map_palette_video && s.presentation &&
              s.presentation->uses_video_transport(*s.map_palette_video),
              "Actor DMA wait requires its actual shared transfer counter");
          scene_->respond_actor(s.map_palette_video->pending_bytes(),request->binding.parameter_bytes);
          break;
        }
        if (request && request->origin == WorldActionOrigin::Script &&
            request->binding.operation == NativeAction::ShiftMapPalette) {
          require(s.presentation && s.map_palette_backup && s.map_palette_video &&
              s.presentation->uses_video_transport(*s.map_palette_video),
              "Map palette shift requires its actual retained backup and DMA queue");
          const auto colors=shift_map_palette(
              std::span<const std::uint16_t,256>(s.map_palette_backup,256),
              s.actors.actor(request->actor).action().variables[0]);
          std::array<std::uint8_t,64> alias;
          for(unsigned i=0;i<32;++i) {
            alias[i*2]=std::uint8_t(colors[224+i]);
            alias[i*2+1]=std::uint8_t(colors[224+i]>>8);
          }
          s.map_palette_video->write_descriptor_prefix(alias);
          s.presentation->publish_scene_palette_range(32,
              std::span<const std::uint16_t>(colors).first(224),24);
          scene_->respond_actor(24,request->binding.parameter_bytes);
          break;
        }
        if (request && request->origin == WorldActionOrigin::Script &&
            request->binding.operation == NativeAction::TestPlayerInArea) {
          require(s.interaction_state, "Area trigger requires the actual leader state");
          const auto value=test_player_in_area(s.actors.actor(request->actor).action(),
              s.interaction_state->leader_x,s.interaction_state->leader_y,
              s.actors.appearance_scene().teleport_destination);
          scene_->respond_actor(value,request->binding.parameter_bytes);
          break;
        }
        if (request && request->origin == WorldActionOrigin::Script &&
            request->binding.operation == NativeAction::CopySpritePosition) {
          const auto value = s.actors.copy_sprite_position(request->actor, request->binding.operand);
          scene_->respond_actor(value, request->binding.parameter_bytes);
          break;
        }
        if (request && request->origin == WorldActionOrigin::Script &&
            request->binding.operation == NativeAction::CaptureSpriteTarget) {
          const auto value = s.actors.capture_sprite_target(request->actor, request->binding.operand);
          scene_->respond_actor(value, request->binding.parameter_bytes);
          break;
        }
        if (request && request->origin == WorldActionOrigin::Script &&
            (request->binding.operation == NativeAction::FaceNpcTowardActor ||
             request->binding.operation == NativeAction::FaceSpriteTowardActor)) {
          require(s.enemy_behavior && request->binding.discard_result,
                  "Actor facing requires its actual angle owner and an unused incidental pose return");
          if (request->binding.operation == NativeAction::FaceNpcTowardActor)
            s.enemy_behavior->face_npc_toward_actor(request->actor, request->binding.operand);
          else s.enemy_behavior->face_sprite_toward_actor(request->actor, request->binding.operand);
          scene_->respond_actor({}, request->binding.parameter_bytes);
          break;
        }
        if (request && request->origin == WorldActionOrigin::Script &&
            request->binding.operation == NativeAction::VelocityDistanceSleep) {
          const auto value = velocity_distance_sleep(s.actors.actor(request->actor).action(),
                                                     request->action.temporary);
          scene_->respond_actor(value, request->binding.parameter_bytes, value);
          break;
        }
        if (request && request->origin == WorldActionOrigin::Script &&
            request->binding.operation == NativeAction::CopyPartyPosition) {
          require(s.world_control, "Party coordinate copy requires the actual formation owner");
          const auto value = copy_party_position(s.actors, request->actor, s.party,
              s.world_control->formation(), std::uint8_t(request->binding.operand));
          scene_->respond_actor(value, request->binding.parameter_bytes);
          break;
        }
        if (s.world_control && request && request->origin == WorldActionOrigin::Script &&
            request->binding.operation == NativeAction::ReadMovedThisTick) {
          scene_->respond_actor(s.world_control->state().moved_this_tick,
                                request->binding.parameter_bytes);
          break;
        }
        if (request && request->origin == WorldActionOrigin::Script &&
            (request->binding.operation == NativeAction::OpenPrayerWindow ||
             request->binding.operation == NativeAction::ClosePrayerWindow ||
             request->binding.operation == NativeAction::WindowAnimationActive ||
             request->binding.operation == NativeAction::AdvanceEncounterEffects)) {
          require(s.encounter_effects, "Actor oval task requires the actual encounter effect owner");
          auto &effects = *s.encounter_effects;
          const auto action = request->binding.operation;
          if (action == NativeAction::WindowAnimationActive) {
            const bool active = scene_->window_animation_active(effects);
            scene_->respond_actor(std::uint16_t(active), request->binding.parameter_bytes);
          } else {
            require(request->binding.discard_result,
                    "Actor oval task has an unowned incidental result");
            if (action == NativeAction::OpenPrayerWindow) effects.begin_oval(1);
            else if (action == NativeAction::ClosePrayerWindow) effects.close_oval();
            else effects.advance();
            scene_->respond_actor({}, request->binding.parameter_bytes);
          }
          break;
        }
        if (request && request->origin == WorldActionOrigin::Script &&
            request->binding.operation == NativeAction::SetDirectionFrame &&
            (request->binding.discard_result || (s.actor_graphics&&s.actor_graphics->owns(request->actor)))) {
          auto& actor = s.actors.actor(request->actor);
          select_scripted_pose(actor.action(), actor.behavior, actor.appearance,
                               std::uint8_t(request->binding.operand),
                               std::uint8_t(request->binding.operand >> 8));
          if(s.actor_graphics&&s.actor_graphics->owns(request->actor)) {
            require(actor.appearance.displayed().has_value(),"Scripted direction/frame lost its actual selected pose");
            graphics_upload_=s.actor_graphics->begin_selected_upload(request->actor,*actor.appearance.displayed(),actor.behavior.surface_flags);
            graphics_value_.reset();graphics_parameters_=request->binding.parameter_bytes;break;
          }
          scene_->respond_actor({}, request->binding.parameter_bytes);
          break;
        }
        if (request && request->origin == WorldActionOrigin::Script &&
            request->binding.operation == NativeAction::NpcInitialDirection) {
          scene_->respond_actor(s.activation.initial_direction(s.actors, request->actor),
                                request->binding.parameter_bytes);
          break;
        }
        if (request && request->origin == WorldActionOrigin::Script &&
            request->binding.operation == NativeAction::SetDirectionAndRefresh &&
            request->binding.discard_result) {
          auto &actor = s.actors.actor(request->actor);
          const auto direction = request->action.temporary;
          if (actor.behavior.direction != direction) {
            actor.behavior.direction = direction;
            actor.appearance.select_four(direction, actor.action().animation,
                                         actor.behavior.surface_flags);
          }
          scene_->respond_actor({}, request->binding.parameter_bytes);
          break;
        }
        if (s.interactions && request && request->origin == WorldActionOrigin::Script &&
            request->binding.operation == NativeAction::RefreshGiftAppearance &&
            request->binding.discard_result) {
          s.interactions->refresh_gift(request->actor);
          scene_->respond_actor({}, request->binding.parameter_bytes);
          break;
        }
        if (request && request->origin == WorldActionOrigin::Script &&
            request->binding.operation == NativeAction::InflictSunstrokeCheck) {
          require(s.world_control && s.maintenance_state,
                  "Sunstroke requires the actual world control and maintenance owners");
          const auto value = inflict_sunstroke_check(
              s.party, s.world_control->state(), *s.maintenance_state, s.random);
          scene_->respond_actor(value, request->binding.parameter_bytes);
          break;
        }
        if (request && request->origin == WorldActionOrigin::Script &&
            request->binding.operation == NativeAction::ChooseRandom) {
          const auto &choices =
              std::get<ChooseRandomOperands>(request->binding.payload);
          require(choices.choices.size() == (choices.count ? choices.count : 256u),
                  "Random actor choice has incomplete imported operands");
          const auto random = story::next_random(s.random);
          const unsigned index = choices.count ? random % choices.count : random;
          scene_->respond_actor(choices.choices.at(index),
                                request->binding.parameter_bytes);
          break;
        }
        if (s.enemy_behavior && request &&
            request->origin == WorldActionOrigin::Script &&
            enemy_behavior_service(request->binding.operation)) {
          auto &behavior = *s.enemy_behavior;
          std::uint16_t result{};
          std::optional<std::uint16_t> sleep;
          switch (request->binding.operation) {
          case NativeAction::TargetAngle:
            result = behavior.target_angle(request->actor); break;
          case NativeAction::TargetReached:
            result = behavior.target_reached(request->actor); break;
          case NativeAction::EnemyDistanceBand:
            result = behavior.distance_band(request->actor); break;
          case NativeAction::EnemyShortDistanceBand:
            result = behavior.distance_band(request->actor, true); break;
          case NativeAction::CaptureEnemyLeaderTarget:
            result = behavior.capture_leader_target(request->actor); break;
          case NativeAction::DirectionFromLeader:
            result = behavior.direction_from_leader(request->actor); break;
          case NativeAction::EnemyChaseAngle:
            result = behavior.chase_angle(request->actor); break;
          case NativeAction::EnemyAngleVelocity:
            result = behavior.set_velocity(request->actor, request->action.temporary); break;
          case NativeAction::EnemyAngleDirection:
            result = behavior.set_moving_direction(request->actor, request->action.temporary); break;
          case NativeAction::FollowVariableAngle: {
            const bool raw=s.actor_graphics&&s.actor_graphics->owns(request->actor);
            const auto value=raw?behavior.follow_variable_angle(request->actor,*s.actor_graphics):
                behavior.follow_variable_angle(request->actor,request->binding.discard_result);
            if(!value&&raw) {
              const auto &actor=s.actors.actor(request->actor);
              require(actor.appearance.displayed().has_value(),"Variable-angle refresh lost its selected pose");
              graphics_upload_=s.actor_graphics->begin_selected_upload(request->actor,*actor.appearance.displayed(),actor.behavior.surface_flags);
              graphics_value_.reset();graphics_parameters_=request->binding.parameter_bytes;break;
            }
            require(value.has_value()||request->binding.discard_result,"Variable-angle graphics result lost its actual compiled proof");
            result=value.value_or(0);break;
          }
          case NativeAction::EnemyDistanceSleep:
            result = behavior.distance_sleep(request->actor, request->binding.operand);
            sleep = result; break;
          default: throw std::logic_error("Invalid native enemy behavior service");
          }
          if(!graphics_upload_)scene_->respond_actor(result, request->binding.parameter_bytes, sleep);
          break;
        }
        if (s.enemy_contact && request &&
            request->origin == WorldActionOrigin::Script &&
            enemy_contact_service(request->binding.operation)) {
          auto &contact = *s.enemy_contact;
          std::uint16_t result{};
          switch (request->binding.operation) {
          case NativeAction::EnemyContact:
            result = contact.contact(request->actor);
            break;
          case NativeAction::EnemyContactCollision:
            result = contact.collided(request->actor) ? 0xffff : 0;
            break;
          case NativeAction::EnemyContactActive:
            result = contact.active();
            break;
          case NativeAction::PrepareEnemyContactPalette:
            contact.prepare_palette();
            result = 24;
            break;
          case NativeAction::EnemyDirectionalObstacles:
            result = contact.prepare_directional_obstacles(request->actor);
            break;
          case NativeAction::EnemyVerticalObstacles:
            result = contact.prepare_vertical_obstacles(request->actor);
            break;
          default:
            throw std::logic_error("Unknown native enemy contact service");
          }
          scene_->respond_actor(result, request->binding.parameter_bytes);
          break;
        }
        if (s.enemy_movement && request &&
            request->origin == WorldActionOrigin::TickCallback &&
            request->binding.operation == NativeAction::RunEnemyPath) {
          s.enemy_movement->tick(request->actor);
          scene_->respond_actor();
          break;
        }
        if (s.enemy_movement && request &&
            request->origin == WorldActionOrigin::Script &&
            request->binding.operation == NativeAction::ConsumeEnemyWaypoint) {
          const auto result =
              s.enemy_movement->consume_waypoint(request->actor);
          scene_->respond_actor(result, request->binding.parameter_bytes);
          break;
        }
        // Missing formation can keep a bound follower unresolved. Retry only
        // that reducer, not advance_tick(): Scene still owns the unfinished
        // actor pass and must observe its completion exactly once.
        if (s.following && request &&
            request->binding.operation == NativeAction::RunPartyFollower &&
            request->origin == WorldActionOrigin::TickCallback) {
          if (!s.following->tick(request->actor))
            return dialogue::Progress::Suspended;
          scene_->respond_actor();
          break;
        }
        if (s.following && request &&
            request->binding.operation == NativeAction::RefreshPartyFollower &&
            request->origin == WorldActionOrigin::Script) {
          const auto result = s.following->prepare(request->actor);
          if (!result)
            return dialogue::Progress::Suspended;
          scene_->respond_actor(*result, request->binding.parameter_bytes);
          break;
        }
        if (s.maintenance && request &&
            request->origin == WorldActionOrigin::TickCallback &&
            request->binding.operation == NativeAction::RunWorldMaintenance) {
          maintenance_ = s.maintenance->begin();
          break;
        }
        const auto area =
            s.retention ? s.retention() : std::optional<ActorRetentionArea>{};
        // UNKNOWN_C020F1 releases the raw tag before it clears the actual
        // sprite/NPC owners, and keeps the actor alive until EVENT_END.
        if(s.actor_graphics&&request&&request->binding.operation==NativeAction::ReleaseAppearance&&
            request->origin==WorldActionOrigin::Script&&s.actor_graphics->owns(request->actor)&&!s.enemies.busy())
          s.actor_graphics->release(*s.actors.actor(request->actor).authored_role());
        if (!fulfill_actor_lifecycle(s.actors, s.enemies,
                                     area ? &*area : nullptr,
                                     &s.controls.prepared))
          return dialogue::Progress::Suspended;
        // Lifecycle acknowledges or deletes the ActorWorld request;
        // Scene observes that fulfillment on the next work unit.
        break;
      }
      default:
        return dialogue::Progress::Suspended;
      }
    }
    return dialogue::Progress::BudgetExhausted;
  } catch (...) {
    s.failure = std::current_exception();
    throw;
  }
}
const std::optional<story::SceneService> &
WorldRuntime::Operation::service() const {
  return graphics_publication_?graphics_publication_->service():scene_->service();
}
const std::optional<WorldActionRequest> &
WorldRuntime::Operation::actor_request() const {
  static const std::optional<WorldActionRequest> none;
  return graphics_publication_ ? none : scene_->actor_request();
}
const std::optional<WorldMaintenanceRequest> &
WorldRuntime::Operation::maintenance_request() const {
  static const std::optional<WorldMaintenanceRequest> none;
  return maintenance_ && !graphics_publication_ ? maintenance_->request() : none;
}
const std::optional<WorldDoorTransitionRequest> &
WorldRuntime::Operation::door_request() const {
  static const std::optional<WorldDoorTransitionRequest> none;
  return walking_     ? walking_->request()
         : escalator_ ? escalator_->request()
                      : none;
}
const std::optional<WorldAutomaticService> &
WorldRuntime::Operation::automatic_request() const {
  static const std::optional<WorldAutomaticService> none;
  return automatic_ ? automatic_->request() : none;
}
void WorldRuntime::Operation::respond_maintenance() {
  runtime_.check_response(*this);
  require(maintenance_ && !maintenance_streaming_ && !walking_ && !escalator_ &&
              !automatic_,
          "No external native maintenance service is pending");
  const auto &request = maintenance_->request();
  require(!runtime_.state_->walking || !request || !request->control ||
              request->control->kind != WorldControlService::Walk,
          "Bound native walking must execute before its response");
  require(!runtime_.state_->escalator || !request || !request->control ||
              request->control->kind != WorldControlService::Escalator,
          "Bound native escalator movement must execute before its response");
  require(!runtime_.state_->bicycle || !request || !request->control ||
              request->control->kind != WorldControlService::Bicycle,
          "Bound native bicycle must execute before its response");
  require(!runtime_.state_->automatic || !request || !request->control ||
              request->control->kind != WorldControlService::Automatic,
          "Bound native automatic movement must execute before its response");
  maintenance_->respond();
}
const std::optional<dialogue::ConversationEvent> &
WorldRuntime::Operation::dialogue_event() const {
  return scene_->dialogue_event();
}
bool WorldRuntime::Operation::complete() const { return done_; }
story::FrameRequirement WorldRuntime::Operation::frame_requirement() const {
  runtime_.check_response(*this);
  return scene_->frame_requirement();
}
void WorldRuntime::interrupt_publication() {
  auto &s=*state_;
  require(!s.abandoned && !s.failure,"Peripheral publication requires a healthy runtime");
  try {s.scene.interrupt_publication(s.has_frame_boundary()?state_.get():nullptr);}
  catch(...) {s.failure=std::current_exception();throw;}
}
WorldRuntime::SourceInterrupt::SourceInterrupt(std::unique_ptr<story::Scene::SourceInterrupt> scene)
    :scene_(std::move(scene)) {}
WorldRuntime::SourceInterrupt::~SourceInterrupt()=default;
void WorldRuntime::SourceInterrupt::increment_pending(){scene_->increment_pending();}
void WorldRuntime::SourceInterrupt::increment_counter(){scene_->increment_counter();}
void WorldRuntime::SourceInterrupt::publish(){scene_->publish();}
void WorldRuntime::SourceInterrupt::callback(){scene_->callback();}
void WorldRuntime::SourceInterrupt::rotate_heap(){scene_->rotate_heap();}
void WorldRuntime::SourceInterrupt::complete(){scene_->complete();}
std::unique_ptr<WorldRuntime::SourceInterrupt> WorldRuntime::begin_source_interrupt() {
  auto &s=*state_;
  require(!s.abandoned && !s.failure,"Source NMI requires healthy actual runtime");
  return std::unique_ptr<SourceInterrupt>(new SourceInterrupt(
      s.scene.begin_source_interrupt(s.has_frame_boundary()?state_.get():nullptr)));
}
void WorldRuntime::bind_source_work(story::SourceWorkService &work,const battle::PsiDisplayState &video) {
  auto &s=*state_;require(!failed() && s.stack.empty() && s.presentation &&
      s.presentation->uses_video_transport(video) && work.uses(s.actors,video),
      "Source work requires idle actual runtime transports");
  s.scene.bind_source_work(work,video);
}
void WorldRuntime::clear_source_work(const story::SourceWorkService &work) noexcept {
  state_->scene.clear_source_work(work);
}
bool WorldRuntime::uses_default_interrupt_callback() const noexcept {
  return state_->interrupt_mode==State::InterruptMode::Default;
}
bool WorldRuntime::uses_world_interrupt_callback(const WorldScheduler &scheduler) const noexcept {
  return state_->interrupt_mode==State::InterruptMode::World && state_->transitions &&
      &state_->transitions->scheduler()==&scheduler;
}
bool WorldRuntime::interrupt_callback_active() const noexcept {return state_->in_interrupt_callback;}
void WorldRuntime::Operation::complete_publication() {
  runtime_.check_response(*this);
  const auto completed = runtime_.state_->scene.completed_frames();
  auto *publishing=graphics_publication_?graphics_publication_.get():scene_;
  try {
    if (runtime_.state_->has_frame_boundary())
      publishing->complete_publication(*runtime_.state_);
    else
      publishing->complete_publication();
  } catch (...) {
    if (runtime_.state_->scene.failed() || runtime_.state_->scene.completed_frames() != completed)
      runtime_.state_->failure = std::current_exception();
    throw;
  }
}
void WorldRuntime::Operation::respond_source_publication() {
  runtime_.check_response(*this);
  auto *publishing=graphics_publication_?graphics_publication_.get():scene_;
  try{publishing->respond_source_publication();}
  catch(...) {if(runtime_.state_->scene.failed())runtime_.state_->failure=std::current_exception();throw;}
}
story::Scene::Operation &WorldRuntime::Operation::source_frame_owner(WorldInputPlayback &raw) {
  require(!main_effect_pending_,"Main frame must execute encounter effects before source WAIT");
  runtime_.check_response(*this);auto &s=*runtime_.state_;
  require(s.transitions && !s.transitions->failed() && &s.transitions->playback()==&raw,
          "Source WAIT requires this Runtime's actual input transition owner");
  s.validate_input();return *scene_;
}
story::Scene::Operation &WorldRuntime::Operation::source_screen_owner() {
  runtime_.check_response(*this);return *scene_;
}
story::Scene::Operation &WorldRuntime::Operation::source_foreground_owner() {
  runtime_.check_response(*this);return *scene_;
}
void WorldRuntime::Operation::respond_source_meter_status(story::SourceMeterStatus &work) {
  runtime_.check_response(*this);
  try{scene_->respond_source_meter_status(work);}
  catch(...) {if(runtime_.state_->scene.failed())runtime_.state_->failure=std::current_exception();throw;}
}
void WorldRuntime::Operation::respond_source_meter_tiles(story::SourceMeterTiles &work) {
  runtime_.check_response(*this);
  try{scene_->respond_source_meter_tiles(work);}
  catch(...) {if(runtime_.state_->scene.failed())runtime_.state_->failure=std::current_exception();throw;}
}
void WorldRuntime::Operation::respond_source_meter_roller(story::SourceMeterRoller &work) {
  runtime_.check_response(*this);
  try{scene_->respond_source_meter_roller(work);}
  catch(...) {if(runtime_.state_->scene.failed())runtime_.state_->failure=std::current_exception();throw;}
}
void WorldRuntime::Operation::respond_source_random(story::SourceRandom &work) {
  runtime_.check_response(*this);
  try{scene_->respond_source_random(work);}
  catch(...) {if(runtime_.state_->scene.failed())runtime_.state_->failure=std::current_exception();throw;}
}
void WorldRuntime::Operation::respond_source_window_publication(story::SourceWindowPublication &work) {
  runtime_.check_response(*this);
  try{scene_->respond_source_window_publication(work);}
  catch(...) {if(runtime_.state_->scene.failed())runtime_.state_->failure=std::current_exception();throw;}
}
void WorldRuntime::Operation::respond_source_foreground(story::SourceForegroundWork &work) {
  runtime_.check_response(*this);
  try{scene_->respond_source_foreground(work);}
  catch(...) {if(runtime_.state_->scene.failed())runtime_.state_->failure=std::current_exception();throw;}
}
void WorldRuntime::Operation::respond_source_objects(story::SourceObjectPreparation &objects) {
  runtime_.check_response(*this);
  try{scene_->respond_source_objects(objects);}
  catch(...) {if(runtime_.state_->scene.failed())runtime_.state_->failure=std::current_exception();throw;}
}
void WorldRuntime::Operation::respond_source_actor_draw(story::SourceActorDraw &draw) {
  runtime_.check_response(*this);
  try{scene_->respond_source_actor_draw(draw);}
  catch(...) {if(runtime_.state_->scene.failed())runtime_.state_->failure=std::current_exception();throw;}
}
void WorldRuntime::Operation::respond_source_global_draw(story::SourceGlobalDraw &draw) {
  runtime_.check_response(*this);
  try{scene_->respond_source_global_draw(draw);}
  catch(...) {if(runtime_.state_->scene.failed())runtime_.state_->failure=std::current_exception();throw;}
}
void WorldRuntime::Operation::respond_source_screen(story::SourceScreenUpdate &screen) {
  runtime_.check_response(*this);
  try{scene_->respond_source_screen(screen);}
  catch(...) {if(runtime_.state_->scene.failed())runtime_.state_->failure=std::current_exception();throw;}
}
void WorldRuntime::Operation::respond_source_frame(story::SourceFrameInput &input) {
  runtime_.check_response(*this);
  try{scene_->respond_source_frame(input);}
  catch(...) {if(runtime_.state_->scene.failed())runtime_.state_->failure=std::current_exception();throw;}
  if(refresh_) {runtime_.state_->capture_dirty=false;refresh_=false;}
}
void WorldRuntime::Operation::complete_frame(std::array<std::uint16_t, 2> raw) {
  require(!main_effect_pending_, "Main frame must execute encounter effects before publication");
  runtime_.check_response(*this);
  const auto completed = runtime_.state_->scene.completed_frames();
  try {
    if (runtime_.state_->has_frame_boundary())
      scene_->complete_frame(raw, *runtime_.state_);
    else
      scene_->complete_frame(raw);
  } catch (...) {
    // Validation/render rejection before publication remains retryable. A
    // failing callback after publication consumed this frame and must not run
    // twice even if its own service does not expose a failure flag.
    if (runtime_.state_->scene.failed() || runtime_.state_->scene.completed_frames() != completed)
      runtime_.state_->failure = std::current_exception();
    throw;
  }
  if (refresh_) {
    runtime_.state_->capture_dirty = false;
    refresh_ = false;
  }
}
void WorldRuntime::Operation::respond_actor(std::uint16_t value,
                                            unsigned bytes) {
  runtime_.check_response(*this);
  require(
      !maintenance_,
      "Native maintenance must complete before actor callback acknowledgment");
  const auto &request = scene_->actor_request();
  require(!graphics_upload_&&!graphics_creation_&&!graphics_publication_&&(!runtime_.state_->actor_graphics||!request||
      !runtime_.state_->actor_graphics->owns(request->actor)||(!graphics_service(request->binding.operation)&&
      request->binding.operation!=NativeAction::SetDirectionFrame&&request->binding.operation!=NativeAction::CreateActor)),"Bound raw actor graphics must finish before acknowledgment");
  require(!request || request->binding.operation != NativeAction::PlaySound,
          "Actor PLAY_SOUND requires its actual typed audio command before acknowledgment");
  require(!runtime_.state_->enemy_movement || !request ||
              (request->binding.operation != NativeAction::RunEnemyPath &&
               request->binding.operation != NativeAction::ConsumeEnemyWaypoint),
          "Bound native enemy movement must execute before its response");
  require(!request || !enemy_behavior_service(request->binding.operation),
          "Native enemy behavior requires its actual bound service");
  require(!runtime_.state_->enemy_contact || !request ||
              !enemy_contact_service(request->binding.operation),
          "Bound native enemy contact must execute before its response");
  require(
      !runtime_.state_->following || !request ||
          (request->binding.operation != NativeAction::RunPartyFollower &&
           request->binding.operation != NativeAction::RefreshPartyFollower),
      "Bound native following must execute before its response");
  scene_->respond_actor(value, bytes);
}
void WorldRuntime::Operation::respond_battle() {
  runtime_.check_response(*this);
  scene_->respond_battle();
}
void WorldRuntime::Operation::respond_party_sprite_blink() {
  runtime_.check_response(*this);
  scene_->respond_party_sprite_blink();
}
void WorldRuntime::Operation::respond_bicycle_dismount() {
  runtime_.check_response(*this);
  scene_->respond_bicycle_dismount();
}
void WorldRuntime::Operation::respond_teddy_refresh() {
  runtime_.check_response(*this);
  scene_->respond_teddy_refresh();
}
void WorldRuntime::Operation::respond_item_failure_scan(
    std::uint16_t first_empty) {
  runtime_.check_response(*this);
  scene_->respond_item_failure_scan(first_empty);
}
const dialogue::ScriptSoundRequest &
WorldRuntime::Operation::script_sound() const {
  return automatic_ ? automatic_->sound() : scene_->script_sound();
}
void WorldRuntime::Operation::respond_script_sound() {
  runtime_.check_response(*this);
  if (automatic_)
    automatic_->respond_sound();
  else
    scene_->respond_script_sound();
}
dialogue::ScriptSoundRequest WorldRuntime::Operation::actor_sound() const {
  runtime_.check_response(*this);
  require(scene_ && !maintenance_, "Actor sound requires its actual scene without active maintenance");
  const auto &request = scene_->actor_request();
  require(request && request->origin == WorldActionOrigin::Script &&
              request->binding.operation == NativeAction::PlaySound &&
              request->binding.discard_result && request->binding.parameter_bytes == 2,
          "Actor sound requires its pending literal sound operation and an unused incidental result");
  const auto source = request->binding.operand;
  const auto value = std::uint8_t(source);
  return {value ? dialogue::ScriptSoundKind::QueueEffect : dialogue::ScriptSoundKind::DirectDriverCommand,
          value ? value : std::uint8_t(0x57), source};
}
void WorldRuntime::Operation::respond_actor_sound() {
  (void)actor_sound();
  scene_->respond_actor({}, 2);
}
void WorldRuntime::Operation::respond_dialogue(dialogue::Response response) {
  runtime_.check_response(*this);
  scene_->respond_dialogue(response);
}

void WorldRuntime::prepare_area(CameraPosition destination, bool preserve_artwork, Operation *parent) {
  require_content_boundary(parent);
  require(!state_->streaming.busy(),"Map preparation cannot replace active streaming");
  auto &s = *state_;
  const auto &sector =
      s.map_content.sector(destination.x / 256, destination.y / 128);
  require(!preserve_artwork || s.area.combination() == sector.combination,
          "Preserved map artwork must belong to the destination combination");
  auto area = preserve_artwork ? s.area :
      s.map_content.prepare(sector.combination, s.windows.state().event_flags);
  if (preserve_artwork) {
    area.reprepare_events(s.windows.state().event_flags);
    area.reset_animation();
  }
  auto palettes = s.palette_content.resolve(
      s.palette_content.area_at(destination.x, destination.y),
      s.windows.state().event_flags);
  auto animation = s.animation_content.prepare(palettes);
  s.area = std::move(area);
  s.palettes = std::move(palettes);
  s.palette_animation = std::move(animation);
  s.capture_dirty = true;
}
void WorldRuntime::clear_world_capture(Operation *parent) {
  require_content_boundary(parent);
  require(!state_->streaming.busy(),"Capture clearing cannot interrupt streaming");
  state_->scene.clear_world_capture(parent?parent->scene_:nullptr);
  state_->capture_dirty = true;
}
void WorldRuntime::prepare_photograph_area(CameraPosition destination, bool preserve_artwork,
    std::span<const std::uint16_t,96> scenery, std::span<const std::uint16_t,16> frame_palette,
    std::span<const std::uint16_t> sprite_override, Operation *parent) {
  require_content_boundary(parent);
  auto &s=*state_;
  require(!s.streaming.busy() && s.controls.photograph && !s.controls.enemies &&
          !s.windows.prompt_state().debug,
          "Photograph preparation requires its actual isolated map-loading mode");
  const auto &sector=s.map_content.sector(destination.x/256,destination.y/128);
  auto area=s.area.prepare_photograph(sector.combination,s.windows.state().event_flags,preserve_artwork);
  auto palettes=s.palette_content.resolve_photograph(
      s.palette_content.area_at(destination.x,destination.y),scenery,frame_palette,sprite_override);
  palettes.animation_id=s.palettes.animation_id;
  s.area=std::move(area);s.palettes=std::move(palettes);
  s.capture_dirty=true;
}
void WorldRuntime::refresh_world_capture(Operation *parent) {
  require_content_boundary(parent);
  require(!state_->streaming.busy(),"Capture refresh cannot interrupt streaming");
  state_->scene.refresh_world_capture(parent?parent->scene_:nullptr);
  state_->capture_dirty = false;
}
void WorldRuntime::reprepare_events() {
  check_idle();
  state_->area.reprepare_events(state_->windows.state().event_flags);
  state_->capture_dirty = true;
}
bool WorldRuntime::advance_area_animation(const WorldControlState &control) {
  check_idle();
  auto &s = *state_;
  require(!s.maintenance, "Bound world maintenance owns the animation phase");
  require(!s.world_control || &s.world_control->state() == &control,
          "Animation must borrow the actual world controller");
  if (control.encounter.mode)
    return false;
  const bool map = s.area.advance_animation();
  const bool palette = s.palette_animation.advance();
  if (palette) {
    s.palettes.scenery = s.palette_animation.colors().scenery;
    s.palettes.scenery_zero = s.palette_animation.colors().scenery_zero;
    s.palettes.scenery_high_bits = s.palette_animation.colors().scenery_high_bits;
    if (s.presentation) s.presentation->publish_scenery(s.palettes);
  }
  s.capture_dirty |= map || palette;
  return map || palette;
}
void WorldRuntime::bind_collision_window(WorldCollisionWindow &window) {
  check_idle();
  require(!state_->collision_window||state_->collision_window==&window,
      "World runtime already has another collision window owner");
  state_->streaming.bind_collision_window(window);
  state_->collision_window=&window;
}
WorldCollisionWindow *WorldRuntime::collision_window() const noexcept{return state_->collision_window;}
void WorldRuntime::begin_initial_activation(CameraPosition center, Operation *parent) {
  require_content_boundary(parent);
  state_->streaming.begin_initial_activation(center, state_->admission);
  state_->capture_dirty = true;
}
void WorldRuntime::begin_refresh(CameraPosition camera, Operation *parent) {
  require_content_boundary(parent);
  if(state_->collision_window)state_->collision_window->refresh(camera,state_->area);
  state_->streaming.begin_refresh(camera, state_->admission);
  state_->capture_dirty = true;
}
bool WorldRuntime::advance_streaming(unsigned budget, Operation *parent) {
  if (parent) require_content_boundary(parent);
  else {
    check();
    require(state_->stack.empty(),"An actor callback owns this streaming continuation");
  }
  return state_->streaming.advance(budget);
}
bool WorldRuntime::streaming() const { return state_->streaming.busy(); }
bool WorldRuntime::failed() const {
  return (state_->world_control && (state_->control_lifetime.expired()||state_->control_state_lifetime.expired())) ||
         bool(state_->failure) || state_->abandoned || state_->scene.failed() ||
         state_->transition_owner_changed() || state_->streaming.failed() ||
         (state_->maintenance && state_->maintenance->failed()) ||
         (state_->walking && state_->walking->failed()) ||
         (state_->escalator && state_->escalator->failed()) ||
         (state_->bicycle && state_->bicycle->failed()) ||
         (state_->automatic && state_->automatic->failed()) ||
         (state_->battle_entry && state_->battle_entry->failed()) ||
         (state_->enemy_movement && state_->enemy_movement->failed()) ||
         (state_->enemy_contact && state_->enemy_contact->failed()) ||
         (state_->enemy_behavior && state_->enemy_behavior->failed()) ||
         (state_->actor_graphics && state_->actor_graphics->failed()) ||
         (state_->following && state_->following->failed()) ||
         (state_->encounter_effects && state_->encounter_effects->failed());
}
const WorldStreamingWork &WorldRuntime::streaming_work() const {
  return state_->streaming.work();
}
std::shared_ptr<const DirectSceneFrame> WorldRuntime::frame() const {
  check();
  require(
      !state_->streaming.busy() && !state_->capture_dirty,
      "Native world publication is blocked until streaming and capture finish");
  return state_->scene.frame();
}
std::shared_ptr<const DirectSceneFrame> WorldRuntime::published_frame() const {
  check();
  return state_->scene.frame();
}
std::uint64_t WorldRuntime::completed_frames() const {
  return state_->scene.completed_frames();
}
std::vector<WorldSoundEvent> WorldRuntime::take_sound_events() {
  check();
  require(!state_->streaming.busy(),
          "Native streaming has not finished its actor traversal");
  return state_->scene.take_sound_events();
}
} // namespace eb::native

namespace eb::native {
void WorldRuntime::reload_camera(CameraPosition center, Operation *parent) {
  require_content_boundary(parent);
  require(!state_->streaming.busy(),"Camera reload cannot interrupt streaming");
  auto &s = *state_;
  s.activation.reset_after_reload(center);
  auto &scene = s.actors.scene();
  const CameraPosition camera{std::uint16_t(center.x - 128), std::uint16_t(center.y - 112)};
  scene.camera_changed |= scene.camera_x != camera.x || scene.camera_y != camera.y;
  scene.camera_x = camera.x;
  scene.camera_y = camera.y;
  s.capture_dirty = true;
}
}
