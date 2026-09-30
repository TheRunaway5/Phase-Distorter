#include "eb/native/world_runtime.hpp"
#include "eb/native/party/inventory.hpp"
#include "eb/native/world_actor_movement.hpp"
#include "eb/native/world_battle_entry.hpp"
#include "eb/native/world_enemy_movement.hpp"
#include "eb/native/world_enemy_contact.hpp"
#include "eb/native/world_enemy_behavior.hpp"
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
  case NativeAction::EnemyDistanceBand:
  case NativeAction::EnemyShortDistanceBand:
  case NativeAction::CaptureEnemyLeaderTarget:
  case NativeAction::EnemyChaseAngle:
  case NativeAction::EnemyAngleVelocity:
  case NativeAction::EnemyAngleDirection:
  case NativeAction::EnemyDistanceSleep:
    return true;
  default:
    return false;
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
  party::State &party;
  story::RandomState &random;
  story::InputState &input;
  story::TickState &clock;
  const WorldCollision &collision;
  ActorWorld &actors;
  WorldEnemies &enemies;
  WorldMapArea &area;
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
  const WorldInteractionQueue *interaction_queue{};
  const WorldMaintenanceState *maintenance_state{};
  const party::ItemTransformationState *item_state{};
  WorldWalking *walking{};
  WorldEscalator *escalator{};
  WorldBicycle *bicycle{};
  WorldAutomatic *automatic{};
  WorldBattleEntry *battle_entry{};
  WorldEnemyMovement *enemy_movement{};
  WorldEnemyContact *enemy_contact{};
  WorldEnemyBehavior *enemy_behavior{};
  WorldScenePresentation *presentation{};
  WorldEncounterEffects *encounter_effects{};
  WorldPartyFollowing *following{};
  WorldDoorTransitions *transitions{};
  const npcs::InteractionState *interaction_state{};
  const npcs::Interactions *interactions{};
  const party::Inventory *inventory{};
  std::vector<Operation *> stack;
  std::exception_ptr failure;
  bool abandoned{}, capture_dirty{};

  bool transition_owner_changed() const noexcept {
    return walking && walking->doors().transitions() != transitions;
  }

  void validate_frame() const override {
    require(transitions && !transitions->failed(),
            "Native frame requires healthy transition/scheduler owners");
    require(!transitions->playback().recording_required(),
            "Native frame recording requires its real recording service");
  }
  std::array<std::uint16_t, 2>
  read_after_publication(std::array<std::uint16_t, 2> host) override {
    require(transitions->scheduler().process_frame(),
            "Native frame cannot reenter its scheduled task phase");
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
      : windows(w), party(party), random(random), input(input), clock(clock),
        collision(collision), actors(a), enemies(e), area(map),
        palettes(colors), map_content(maps), palette_content(palettes),
        animation_content(animations), controls(spawn), admission(policy),
        retention(std::move(reader)),
        palette_animation(animations.prepare(colors)), movement(collision, map),
        movement_lease(a, movement), enemy_lifetime_lease(a, e),
        streaming(a, activation, e, collision, map, random, spawn),
        scene(w, party, random, meters, clock, input, a, map, colors, view) {
    movement_lease.commit();
  }
  ~State() {
    if (presentation) windows.clear_palette_publication(*presentation);
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
WorldRuntime::~WorldRuntime() = default;
void WorldRuntime::check() const {
  auto &s = *state_;
  if (s.failure)
    std::rethrow_exception(s.failure);
  require(!s.abandoned,
          "An abandoned operation invalidated the native world runtime");
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
bool WorldRuntime::uses(const party::Inventory &inventory) const noexcept {
  return state_->inventory == &inventory;
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
  require(!state_->streaming.busy(),
          "Native streaming must finish before a scene response");
}

WorldRuntime::Operation::Operation(
    WorldRuntime &runtime, std::unique_ptr<story::Scene::Operation> scene,
    bool refresh)
    : runtime_(runtime), scene_(std::move(scene)), refresh_(refresh) {}
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
dialogue::Progress WorldRuntime::Operation::advance(unsigned budget) {
  if (done_)
    return dialogue::Progress::Finished;
  runtime_.check_operation(*this);
  auto &s = *runtime_.state_;
  try {
    while (budget--) {
      if (s.streaming.busy()) {
        if (!s.streaming.advance(1))
          continue;
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
        s.streaming.begin_actor_refresh(s.admission,
                                        [this] { scene_->respond_camera(); });
        break;
      case story::SceneService::ActorEngine: {
        const auto &request = scene_->actor_request();
        if (s.enemy_behavior && request &&
            request->origin == WorldActionOrigin::Script &&
            enemy_behavior_service(request->binding.operation)) {
          auto &behavior = *s.enemy_behavior;
          std::uint16_t result{};
          std::optional<std::uint16_t> sleep;
          switch (request->binding.operation) {
          case NativeAction::EnemyDistanceBand:
            result = behavior.distance_band(request->actor); break;
          case NativeAction::EnemyShortDistanceBand:
            result = behavior.distance_band(request->actor, true); break;
          case NativeAction::CaptureEnemyLeaderTarget:
            result = behavior.capture_leader_target(request->actor); break;
          case NativeAction::EnemyChaseAngle:
            result = behavior.chase_angle(request->actor); break;
          case NativeAction::EnemyAngleVelocity:
            result = behavior.set_velocity(request->actor, request->action.temporary); break;
          case NativeAction::EnemyAngleDirection:
            result = behavior.set_moving_direction(request->actor, request->action.temporary); break;
          case NativeAction::EnemyDistanceSleep:
            result = behavior.distance_sleep(request->actor, request->binding.operand);
            sleep = result; break;
          default: throw std::logic_error("Invalid native enemy behavior service");
          }
          scene_->respond_actor(result, request->binding.parameter_bytes, sleep);
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
  return scene_->service();
}
const std::optional<WorldActionRequest> &
WorldRuntime::Operation::actor_request() const {
  return scene_->actor_request();
}
const std::optional<WorldMaintenanceRequest> &
WorldRuntime::Operation::maintenance_request() const {
  static const std::optional<WorldMaintenanceRequest> none;
  return maintenance_ ? maintenance_->request() : none;
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
void WorldRuntime::Operation::complete_frame(std::array<std::uint16_t, 2> raw) {
  require(!main_effect_pending_, "Main frame must execute encounter effects before publication");
  runtime_.check_response(*this);
  const auto completed = runtime_.state_->scene.completed_frames();
  try {
    if (runtime_.state_->transitions)
      scene_->complete_frame(raw, *runtime_.state_);
    else
      scene_->complete_frame(raw);
  } catch (...) {
    // Validation/render rejection before publication remains retryable. A
    // failing callback after publication consumed this frame and must not run
    // twice even if its own service does not expose a failure flag.
    if (runtime_.state_->scene.completed_frames() != completed)
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
void WorldRuntime::Operation::respond_dialogue(dialogue::Response response) {
  runtime_.check_response(*this);
  scene_->respond_dialogue(response);
}

void WorldRuntime::prepare_area(CameraPosition destination, bool preserve_artwork) {
  check_idle();
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
void WorldRuntime::clear_world_capture() {
  check_idle();
  state_->scene.clear_world_capture();
  state_->capture_dirty = true;
}
void WorldRuntime::refresh_world_capture() {
  check_idle();
  state_->scene.refresh_world_capture();
  state_->capture_dirty = false;
}
void WorldRuntime::reprepare_events() {
  check_idle();
  state_->area.reprepare_events(state_->windows.state().event_flags);
  state_->capture_dirty = true;
}
bool WorldRuntime::advance_area_animation() {
  check_idle();
  auto &s = *state_;
  require(!s.maintenance, "Bound world maintenance owns the animation phase");
  if (s.windows.prompt_state().battle_mode)
    return false;
  const bool map = s.area.advance_animation();
  const bool palette = s.palette_animation.advance();
  if (palette) {
    s.palettes.scenery = s.palette_animation.colors().scenery;
    s.palettes.scenery_zero = s.palette_animation.colors().scenery_zero;
    if (s.presentation) s.presentation->publish_scenery(s.palettes);
  }
  s.capture_dirty |= map || palette;
  return map || palette;
}
void WorldRuntime::begin_initial_activation(CameraPosition center) {
  check_idle();
  state_->streaming.begin_initial_activation(center, state_->admission);
  state_->capture_dirty = true;
}
void WorldRuntime::begin_refresh(CameraPosition camera) {
  check_idle();
  state_->streaming.begin_refresh(camera, state_->admission);
  state_->capture_dirty = true;
}
bool WorldRuntime::advance_streaming(unsigned budget) {
  check();
  require(state_->stack.empty(),
          "An actor callback owns this streaming continuation");
  return state_->streaming.advance(budget);
}
bool WorldRuntime::streaming() const { return state_->streaming.busy(); }
bool WorldRuntime::failed() const {
  return bool(state_->failure) || state_->abandoned ||
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
