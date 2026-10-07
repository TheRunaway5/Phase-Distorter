#include "eb/native/actor_world.hpp"
#include "eb/native/world_overlay_playback.hpp"
#include "eb/native/actor_creation.hpp"
#include "eb/native/world_actor_movement.hpp"
#include "eb/native/world_enemies.hpp"
#include "eb/native/world_party_following.hpp"
#include "eb/native/world_party_movement.hpp"
#include <algorithm>
#include <map>
#include <numeric>
#include <stdexcept>
#include <utility>

namespace eb::native {
WorldActor::WorldActor(std::shared_ptr<const ActionScriptData> scripts,
                       std::shared_ptr<SpriteResources> sprites,
                       const WorldActorSpec &spec, bool graphical)
    : behavior(spec.behavior),
      appearance(graphical ? SpriteAppearance(sprites, spec.sprite)
                           : SpriteAppearance(sprites, std::nullopt)),
      appearance_context(spec.appearance_context), hitbox(spec.hitbox),
      scripts_(scripts, scripts->entry(spec.script)), npc_(spec.npc),
      script_style_(spec.script) {
  scripts_.actor() = spec.action;
  appearance_owned_ = graphical;
  script_only_ = !graphical;
  inherited_enemy_ = graphical ? 0xffff : 0;
  if (graphical)
    appearance_context.shape = sprites->definition(spec.sprite).shape;
}
ActionActorState &WorldActor::action() { return scripts_.actor(); }
const ActionActorState &WorldActor::action() const { return scripts_.actor(); }
std::vector<ActionTaskState> WorldActor::tasks() const {
  return scripts_.tasks();
}

struct ActorWorld::State {
  std::shared_ptr<const void> identity = std::make_shared<const char>(0);
  std::shared_ptr<SpriteResources> sprites;
  std::shared_ptr<const CompiledActionProgram> program;
  std::shared_ptr<const ActionScriptData> scripts;
  SpriteActors graphics;
  std::map<ActorId, std::unique_ptr<WorldActor>> actors;
  std::map<NpcId, ActorId> npcs;
  std::array<ActorId, 30> role_actors{};
  struct DormantRole {
    std::array<std::uint16_t, 8> variables{};
    AuthoredActorPose pose;
    std::uint16_t sprite{}, npc = 0xffff, enemy{};
    std::uint16_t animation{}, priority{};
    ActorActionContext behavior;
    AppearanceActorContext appearance_context;
    AuthoredActorPause pause;
    // Never-created source roles have zero, disabled collision geometry.
    std::optional<ActorHitbox> hitbox = ActorHitbox{};
    std::optional<SpriteAppearance> appearance;

    DormantRole() { behavior.collision_object = 0; }
  };
  std::array<DormantRole, 30> dormant_roles{};
  std::vector<unsigned> free_roles;
  ActionSceneContext scene;
  std::optional<AppearanceData> appearance_data;
  AppearanceSceneContext appearance_scene;
  std::vector<WorldSoundEvent> sounds;
  // Groups resolved by the actual completed C0A3A4 draw pass. Capture reads
  // these without repeating a one-shot clear of the retained raw priority.
  std::map<ActorId, std::uint16_t> drawing_priorities;
  std::optional<WorldActionRequest> request;
  std::optional<WorldCameraRefresh> camera_refresh;
  ActorId first{}, last{}, current{}, next{};
  std::uint64_t ticks{};
  bool in_tick{}, actor_started{}, run_scripts{};
  WorldActorMovement *movement{};
  WorldPartyMovement *party_movement{};
  WorldPartyFollowing *party_following{};
  ActorTickService *tick_service{};
  WorldEnemies *enemies{};
  WorldOverlayPlayback *overlays{};
  ActorId physics_current{};
  bool physics_started{}, physics_applied{};

  State(std::shared_ptr<SpriteResources> resources,
        std::shared_ptr<const CompiledActionProgram> content,
        std::optional<AppearanceData> appearance)
      : sprites(std::move(resources)), program(std::move(content)),
        scripts(program ? program->scripts()
                        : throw std::invalid_argument(
                              "Missing native action program")),
        graphics(sprites), free_roles(30),
        appearance_data(std::move(appearance)) {
    std::iota(free_roles.begin(), free_roles.end(), 0u);
  }
};

ActorWorld::ActorWorld(std::shared_ptr<SpriteResources> sprites,
                       std::shared_ptr<const ActionScriptData> scripts,
                       GameVersion version,
                       std::optional<AppearanceData> appearance_data)
    : ActorWorld(
          std::move(sprites),
          std::make_shared<CompiledActionProgram>(std::move(scripts), version),
          std::move(appearance_data)) {}
ActorWorld::ActorWorld(std::shared_ptr<SpriteResources> sprites,
                       std::shared_ptr<const CompiledActionProgram> program,
                       std::optional<AppearanceData> appearance_data)
    : state_(std::make_unique<State>(std::move(sprites), std::move(program),
                                     std::move(appearance_data))) {}
ActorWorld::~ActorWorld() = default;
WorldActorSpec
ActorWorld::prepare_actor(unsigned sprite, unsigned script,
                          const PreparedActorState &prepared) const {
  return make_actor_spec(sprite, script, prepared, *state_->sprites,
                         *state_->scripts);
}
void ActorWorld::bind_movement(WorldActorMovement &movement) {
  auto &s = *state_;
  if (s.movement && s.movement != &movement)
    throw std::logic_error("Native world already has a movement owner");
  std::vector<std::pair<ActorId, ActorHitbox>> prepared;
  for (const auto &[id, actor] : s.actors)
    if (actor->has_appearance() && !actor->hitbox)
      prepared.push_back({id, movement.prepare_hitbox(s.sprites->definition(
                                  actor->appearance.sprite()))});
  for (const auto &[id, box] : prepared)
    s.actors.at(id)->hitbox = box;
  s.movement = &movement;
}
void ActorWorld::clear_movement(const WorldActorMovement &movement) noexcept {
  if (state_->movement == &movement)
    state_->movement = nullptr;
}
void ActorWorld::bind_party_movement(WorldPartyMovement &movement) {
  if (!movement.uses(*this))
    throw std::invalid_argument(
        "Party movement belongs to another actor world");
  if (state_->party_movement && state_->party_movement != &movement)
    throw std::logic_error("Native world already has a party movement owner");
  state_->party_movement = &movement;
}
void ActorWorld::clear_party_movement(
    const WorldPartyMovement &movement) noexcept {
  if (state_->party_movement == &movement)
    state_->party_movement = nullptr;
}

void ActorWorld::bind_party_following(WorldPartyFollowing &following) {
  if (!following.uses(*this))
    throw std::invalid_argument("Party following belongs to another world");
  if (state_->party_following && state_->party_following != &following)
    throw std::logic_error("Native world already has a party following owner");
  state_->party_following = &following;
}
void ActorWorld::clear_party_following(
    const WorldPartyFollowing &following) noexcept {
  if (state_->party_following == &following)
    state_->party_following = nullptr;
}
void ActorWorld::bind_tick_service(ActorTickService &service) {
  if(!service.uses(*this))throw std::invalid_argument("Dedicated actor tick belongs to another world");
  if(state_->tick_service&&state_->tick_service!=&service)
    throw std::logic_error("Native world already has a dedicated actor tick owner");
  state_->tick_service=&service;
}
void ActorWorld::clear_tick_service(const ActorTickService &service) noexcept {
  if(state_->tick_service==&service)state_->tick_service=nullptr;
}
void ActorWorld::bind_enemies(WorldEnemies &enemies) {
  if (state_->enemies && state_->enemies != &enemies)
    throw std::logic_error("Native world already has an enemy lifetime owner");
  enemies.synchronize_lifetimes(*this);
  enemies.bind_world(*this);
  state_->enemies = &enemies;
}
void ActorWorld::clear_enemies(const WorldEnemies &enemies) noexcept {
  if (state_->enemies == &enemies) {
    state_->enemies = nullptr;
  }
}
bool ActorWorld::uses_enemies(const WorldEnemies &enemies) const noexcept {
  return state_->enemies == &enemies;
}
std::shared_ptr<const void> ActorWorld::identity_token() const {
  return state_->identity;
}

ActorId ActorWorld::create(const WorldActorSpec &spec) {
  return create_actor(spec, true);
}
ActorId ActorWorld::create_actor(const WorldActorSpec &spec, bool graphical, bool duplicate_npc) {
  auto &s = *state_;
  if (!spec.action.alive)
    throw std::invalid_argument("Cannot create a dead native actor");
  if (!duplicate_npc && spec.npc && s.npcs.contains(*spec.npc))
    throw std::invalid_argument("NPC already has an active native actor");
  auto actor = std::unique_ptr<WorldActor>(
      new WorldActor(s.scripts, s.sprites, spec, graphical));
  if (graphical && s.movement && !actor->hitbox)
    actor->hitbox =
        s.movement->prepare_hitbox(s.sprites->definition(spec.sprite));
  SpriteActor image;
  image.sprite = spec.sprite;
  image.visible = false;
  const auto id =
      graphical ? s.graphics.create(image) : s.graphics.allocate_identity();
  try {
    s.actors.emplace(id, std::move(actor));
    if (spec.npc)
      s.npcs.emplace(*spec.npc, id);
  } catch (...) {
    s.actors.erase(id);
    s.graphics.erase(id);
    throw;
  }
  auto &stored = *s.actors.at(id);
  stored.previous_ = s.last;
  if (s.last)
    s.actors.at(s.last)->next_ = id;
  else
    s.first = id;
  s.last = id;
  return id;
}

std::optional<ActorId>
ActorWorld::create_authored_script(unsigned script,
                                   const PreparedActorState &input,
                                   AuthoredActorRoles roles) {
  auto &s = *state_;
  if (roles.first > roles.end || roles.end > s.role_actors.size())
    throw std::invalid_argument("Invalid authored actor role range");
  const auto found = std::find_if(
      s.free_roles.begin(), s.free_roles.end(),
      [&](unsigned role) { return role >= roles.first && role < roles.end; });
  if (found == s.free_roles.end())
    return std::nullopt;
  const auto role = *found;
  const auto &retained = s.dormant_roles[role];
  WorldActorSpec spec;
  spec.script = script;
  const bool graphical =
      retained.appearance && retained.appearance->available();
  if (graphical)
    spec.sprite = retained.appearance->sprite();
  if (retained.npc != 0xffff && !(retained.npc & 0x8000))
    spec.npc = retained.npc;
  spec.action.position = {std::uint32_t(input.x) << 16 | 0x8000u,
                          std::uint32_t(input.y) << 16 | 0x8000u,
                          std::uint32_t(input.height) << 16 | 0x8000u};
  spec.action.variables = input.variables;
  spec.action.animation = 0xffff;
  spec.action.priority = input.priority;
  spec.behavior = retained.behavior;
  spec.behavior.direction = retained.pose.direction;
  spec.behavior.physics = ActorPhysics::Planar;
  spec.behavior.projection = ActorProjection::World;
  spec.behavior.tick = ActorTickCallback::None;
  spec.behavior.draw_world = true;
  spec.behavior.projected_x = std::int16_t(input.x);
  spec.behavior.projected_y = std::int16_t(input.y);
  spec.appearance_context = retained.appearance_context;
  spec.appearance_context.phase_id = std::uint16_t(role);
  spec.hitbox = retained.hitbox;
  const auto id = create_actor(spec, graphical);
  auto &actor = *s.actors.at(id);
  actor.script_only_ = true;
  actor.appearance_context = spec.appearance_context;
  if (retained.appearance)
    actor.appearance = *retained.appearance;
  actor.inherited_sprite_ = retained.sprite;
  actor.inherited_npc_ = retained.npc;
  actor.inherited_enemy_ = retained.enemy;
  try {
    if (s.enemies)
      s.enemies->reuse_authored_role(id, role, false);
  } catch (...) {
    retire(id);
    throw;
  }
  actor.authored_role_ = role;
  s.role_actors[role] = id;
  s.free_roles.erase(found);
  s.dormant_roles[role] = {};
  return id;
}

std::optional<ActorId> ActorWorld::create_authored(const WorldActorSpec &spec,
                                                   AuthoredActorRoles roles) {
  return create_authored(spec,roles,false);
}
std::optional<ActorId> ActorWorld::create_prepared_npc(const WorldActorSpec &spec) {
  if (!spec.npc) throw std::invalid_argument("Prepared NPC creation requires its actual selector");
  return create_authored(spec,{},true);
}
std::optional<ActorId> ActorWorld::create_authored(const WorldActorSpec &spec,
                                                   AuthoredActorRoles roles, bool duplicate_npc) {
  auto &s = *state_;
  if (roles.first > roles.end || roles.end > s.role_actors.size())
    throw std::invalid_argument("Invalid authored actor role range");
  const auto found = std::find_if(
      s.free_roles.begin(), s.free_roles.end(),
      [&](unsigned role) { return role >= roles.first && role < roles.end; });
  if (found == s.free_roles.end())
    return std::nullopt;
  const auto role = *found;
  auto prepared = spec;
  prepared.appearance_context.phase_id = std::uint16_t(role);
  const auto id = create_actor(prepared,true,duplicate_npc);
  if (s.enemies)
    s.enemies->reuse_authored_role(id, role, true);
  s.actors.at(id)->authored_role_ = role;
  s.role_actors[role] = id;
  s.free_roles.erase(found);
  s.dormant_roles[role] = {};
  return id;
}

std::optional<ActorId> ActorWorld::actor_for_role(unsigned role) const {
  const auto id = state_->role_actors.at(role);
  return id ? std::optional(id) : std::nullopt;
}
AuthoredActorPosition ActorWorld::authored_position(unsigned role) const {
  const auto &s = *state_;
  const auto id = s.role_actors.at(role);
  return id ? s.actors.at(id)->action().position
            : s.dormant_roles.at(role).pose.position;
}
AuthoredActorPose ActorWorld::authored_pose(unsigned role) const {
  const auto &s = *state_;
  if (const auto id = s.role_actors.at(role)) {
    const auto &actor = *s.actors.at(id);
    return {actor.action().position, actor.behavior.direction};
  }
  return s.dormant_roles.at(role).pose;
}
ActorActionContext ActorWorld::authored_behavior(unsigned role) const {
  if (const auto id = actor_for_role(role))
    return actor(*id).behavior;
  auto result = state_->dormant_roles.at(role).behavior;
  result.direction = state_->dormant_roles.at(role).pose.direction;
  return result;
}
std::uint16_t ActorWorld::authored_variable(unsigned role, unsigned index) const {
  if (const auto id = actor_for_role(role))
    return actor(*id).action().variables.at(index);
  return state_->dormant_roles.at(role).variables.at(index);
}
void ActorWorld::set_authored_variable(unsigned role,unsigned index,std::uint16_t value) {
  if(const auto id=actor_for_role(role)) actor(*id).action().variables.at(index)=value;
  else state_->dormant_roles.at(role).variables.at(index)=value;
}
void ActorWorld::set_authored_path_state(unsigned role, std::uint16_t value) {
  if (const auto id = actor_for_role(role))
    actor(*id).behavior.path_state = value;
  else
    state_->dormant_roles.at(role).behavior.path_state = value;
}
void ActorWorld::set_authored_tick_callback(unsigned role,ActorTickCallback callback) {
  if(const auto id=actor_for_role(role))actor(*id).behavior.tick=callback;
  else state_->dormant_roles.at(role).behavior.tick=callback;
}
void ActorWorld::set_authored_collision_object(unsigned role,std::int32_t value) {
  if(const auto id=actor_for_role(role))actor(*id).behavior.collision_object=value;
  else state_->dormant_roles.at(role).behavior.collision_object=value;
}
AuthoredActorPause ActorWorld::authored_pause(unsigned role) const {
  if (const auto id = actor_for_role(role)) {
    const auto &value = actor(*id);
    return {value.scripts_and_physics_enabled, value.tick_callback_enabled};
  }
  return state_->dormant_roles.at(role).pause;
}
void ActorWorld::set_authored_pause(unsigned role, bool scripts, bool tick) {
  if (const auto id = actor_for_role(role)) {
    auto &value = actor(*id);
    value.scripts_and_physics_enabled = scripts;
    value.tick_callback_enabled = tick;
  } else
    state_->dormant_roles.at(role).pause = {scripts, tick};
}
bool ActorWorld::authored_sprite_hidden(unsigned role) const {
  if (const auto id = actor_for_role(role))
    return actor(*id).appearance.flashing_hidden();
  const auto &appearance = state_->dormant_roles.at(role).appearance;
  return appearance && appearance->flashing_hidden();
}
void ActorWorld::set_authored_sprite_hidden(unsigned role, bool hidden) {
  if (const auto id = actor_for_role(role))
    actor(*id).appearance.flashing_hidden_ = hidden;
  else {
    auto &appearance = state_->dormant_roles.at(role).appearance;
    if (!appearance)
      appearance.emplace(state_->sprites, std::nullopt);
    appearance->flashing_hidden_ = hidden;
  }
}
void ActorWorld::set_authored_direction(unsigned role,
                                        std::uint16_t direction) {
  auto &s = *state_;
  if (const auto id = s.role_actors.at(role))
    s.actors.at(id)->behavior.direction = direction;
  else
    s.dormant_roles.at(role).pose.direction = direction;
}
void ActorWorld::refresh_authored_direction(unsigned role,std::uint16_t direction) {
  if (authored_pose(role).direction==direction) return;
  if (const auto id=actor_for_role(role)) {
    auto &current=actor(*id);
    current.behavior.direction=direction;
    current.appearance.select_four(direction,current.action().animation,current.behavior.surface_flags);
  } else {
    auto &retained=state_->dormant_roles.at(role);
    if (!retained.appearance || !retained.appearance->available())
      throw std::logic_error("Direction refresh requires retained source sprite geometry");
    retained.pose.direction=direction;
    retained.appearance->select_four(direction,retained.animation,retained.behavior.surface_flags);
  }
}
std::uint16_t ActorWorld::authored_sprite_selector(unsigned role) const {
  const auto &s = *state_;
  if (const auto id = s.role_actors.at(role)) {
    const auto &actor = *s.actors.at(id);
    return actor.appearance_owned_ ? std::uint16_t(actor.appearance.sprite())
                                   : actor.inherited_sprite_;
  }
  return s.dormant_roles.at(role).sprite;
}
std::uint16_t ActorWorld::authored_npc_selector(unsigned role) const {
  const auto &s = *state_;
  if (const auto id = s.role_actors.at(role)) {
    const auto &actor = *s.actors.at(id);
    if (s.enemies)
      if (const auto enemy = s.enemies->identity(id))
        return *enemy;
    return actor.appearance_owned_ ? actor.npc_.value_or(0xffff)
                                   : actor.inherited_npc_;
  }
  return s.dormant_roles.at(role).npc;
}
std::uint16_t ActorWorld::authored_enemy_selector(unsigned role) const {
  const auto &s = *state_;
  if (const auto id = actor_for_role(role)) {
    if (s.enemies) {
      if (const auto enemy = s.enemies->enemy_type(*id))
        return *enemy;
      // WorldEnemies::erase may transfer its identity before asking this
      // actor world to unlink the still-live host actor.
      if (const auto enemy = s.enemies->retired_enemy_type(role))
        return *enemy;
    }
    return actor(*id).inherited_enemy_;
  }
  if (s.enemies)
    if (const auto enemy = s.enemies->retired_enemy_type(role))
      return *enemy;
  return s.dormant_roles.at(role).enemy;
}
std::uint16_t ActorWorld::authored_draw_priority(unsigned role) const {
  if (const auto id = actor_for_role(role))
    return actor(*id).action().priority;
  return state_->dormant_roles.at(role).priority;
}
void ActorWorld::set_authored_draw_priority(unsigned role, std::uint16_t priority) {
  if (const auto id = actor_for_role(role)) {
    actor(*id).action().priority = priority;
    state_->drawing_priorities.erase(*id);
  } else {
    state_->dormant_roles.at(role).priority = priority;
  }
}
std::optional<unsigned>
ActorWorld::first_authored_role_with_npc(std::uint16_t npc) const {
  for (unsigned role = 0; role < state_->role_actors.size(); ++role)
    if (authored_npc_selector(role) == npc)
      return role;
  return std::nullopt;
}
void ActorWorld::set_authored_position(unsigned role,
                                       const AuthoredActorPosition &position) {
  auto &s = *state_;
  const auto id = s.role_actors.at(role);
  if (id)
    s.actors.at(id)->action().position = position;
  else
    s.dormant_roles.at(role).pose.position = position;
}
void ActorWorld::set_authored_coordinate(unsigned role, unsigned axis,
                                         std::uint16_t whole) {
  auto position = authored_position(role);
  auto &coordinate = position.at(axis);
  coordinate = (std::uint32_t(whole) << 16) | (coordinate & 0xffffu);
  set_authored_position(role, position);
}
void ActorWorld::order_free_authored_roles() {
  std::sort(state_->free_roles.begin(), state_->free_roles.end());
}

std::optional<ActorId>
ActorWorld::first_authored_actor_with_sprite(unsigned sprite) const {
  // Reject sentinel/out-of-catalog queries rather than returning an unused
  // source slot whose allocation metadata happens to contain that value.
  (void)state_->sprites->definition(sprite);
  for (const auto id : state_->role_actors)
    if (id) {
      const auto &actor = *state_->actors.at(id);
      if (actor.appearance_owned_ && actor.appearance.sprite() == sprite)
        return id;
    }
  return std::nullopt;
}

std::optional<ActorId>
ActorWorld::first_authored_actor_with_npc(NpcId npc) const {
  if (npc & 0x8000)
    throw std::invalid_argument(
        "Authored NPC lookup requires an ordinary NPC identity");
  for (const auto id : state_->role_actors)
    if (id && state_->actors.at(id)->npc_ == npc)
      return id;
  return std::nullopt;
}

std::optional<unsigned>
ActorWorld::first_authored_role_with_sprite(std::uint16_t sprite) const {
  for (unsigned role = 0; role < state_->role_actors.size(); ++role)
    if (authored_sprite_selector(role) == sprite)
      return role;
  return std::nullopt;
}
std::uint16_t ActorWorld::copy_sprite_position(ActorId destination,
                                             std::uint16_t sprite) {
  const auto role = first_authored_role_with_sprite(sprite);
  if (!role)
    throw std::out_of_range("Sprite coordinate selector has no owned source role");
  const auto position = authored_position(*role);
  auto &action = actor(destination).action();
  const auto x = std::uint16_t(position[0] >> 16), y = std::uint16_t(position[1] >> 16);
  action.position[0] = (std::uint32_t(x) << 16) | (action.position[0] & 0xffffu);
  action.position[1] = (std::uint32_t(y) << 16) | (action.position[1] & 0xffffu);
  return y;
}

std::uint16_t ActorWorld::capture_sprite_target(ActorId destination,
                                               std::uint16_t sprite) {
  const auto role = first_authored_role_with_sprite(sprite);
  if (!role)
    throw std::out_of_range("Sprite target selector has no owned source role");
  const auto position = authored_position(*role);
  auto &action = actor(destination).action();
  action.variables[6] = std::uint16_t(position[0] >> 16);
  action.variables[7] = std::uint16_t(position[1] >> 16);
  return action.variables[7];
}

void ActorWorld::replace_script(ActorId id, std::uint32_t content_entry) {
  auto &s = *state_;
  auto &actor = *s.actors.at(id);
  // ActionScripts validates before mutating, including the unsupported
  // currently executing interpreter. Do not clear a world request on failure.
  actor.scripts_.replace(content_entry);
  actor.behavior.tick = ActorTickCallback::None;
  actor.scripts_and_physics_enabled = true;
  actor.tick_callback_enabled = true;
}

void ActorWorld::replace_sprite_script(std::uint16_t sprite,
                                       std::uint16_t script) {
  const auto role = first_authored_role_with_sprite(sprite);
  if (!role) return;
  const auto id = actor_for_role(*role);
  // INIT_ENTITY_UNKNOWN2 loops forever on a released source script slot.
  if (!id)
    throw std::logic_error("Sprite script replacement selected a released source script slot");
  replace_script(*id, state_->scripts->entry(script));
}

void ActorWorld::remove_npc_index(ActorId id) {
  auto &s=*state_;
  const auto npc=s.actors.at(id)->npc_;
  if (!npc) return;
  const auto found=s.npcs.find(*npc);
  if (found==s.npcs.end() || found->second!=id) return;
  // Preserve a surviving duplicate as the activation existence index. The
  // source command itself still searches raw numeric roles in source order.
  for (const auto &[other,actor]:s.actors)
    if (other!=id && actor->npc_==npc) { found->second=other;return; }
  s.npcs.erase(found);
}
bool ActorWorld::release_appearance(ActorId id) {
  auto &s = *state_;
  const auto found = s.actors.find(id);
  if (found == s.actors.end())
    return false;
  auto &actor = *found->second;
  actor.inherited_sprite_ = actor.inherited_npc_ = 0xffff;
  const bool changed = actor.appearance_owned_ || actor.npc_.has_value();
  remove_npc_index(id);
  actor.npc_.reset();
  actor.appearance_owned_ = false;
  actor.appearance.release();
  s.graphics.erase(id);
  return changed;
}

bool ActorWorld::erase(ActorId id) {
  if (state_->enemies)
    state_->enemies->release_appearance(*this, id);
  else
    release_appearance(id);
  return retire(id);
}
bool ActorWorld::release_authored_appearance(unsigned role) {
  if (const auto id = actor_for_role(role))
    return release_appearance(*id);
  auto &retained = state_->dormant_roles.at(role);
  const bool changed = retained.sprite != 0xffff || retained.npc != 0xffff;
  retained.sprite = retained.npc = 0xffff;
  if (retained.appearance)
    retained.appearance->release();
  return changed;
}
bool ActorWorld::retire(ActorId id) {
  auto &s = *state_;
  const auto found = s.actors.find(id);
  if (found == s.actors.end())
    return false;
  const auto &actor = *found->second;
  // Capture before removing the live owner's identity, then transfer ownership
  // before unlinking. Failure cannot leave an untracked active enemy behind.
  std::optional<State::DormantRole> retained;
  if (actor.authored_role_) {
    retained.emplace();
    retained->pose = authored_pose(*actor.authored_role_);
    retained->variables = actor.action().variables;
    retained->animation = actor.action().animation;
    retained->priority = actor.action().priority;
    retained->sprite = authored_sprite_selector(*actor.authored_role_);
    retained->npc = authored_npc_selector(*actor.authored_role_);
    retained->enemy = authored_enemy_selector(*actor.authored_role_);
    retained->behavior = actor.behavior;
    retained->behavior.tick = ActorTickCallback::None;
    retained->appearance_context = actor.appearance_context;
    // C09C35 clears the callback high word before releasing the script.
    retained->pause = {};
    retained->hitbox = actor.hitbox;
    retained->appearance = actor.appearance;
  }
  if (s.enemies)
    if (const auto identity =
            s.enemies->retirement_identity(id, actor.authored_role_))
      if (retained)
        retained->npc = *identity;
  if (actor.previous_)
    s.actors.at(actor.previous_)->next_ = actor.next_;
  else
    s.first = actor.next_;
  if (actor.next_)
    s.actors.at(actor.next_)->previous_ = actor.previous_;
  else
    s.last = actor.previous_;
  if (s.next == id)
    s.next = actor.next_;
  if (s.current == id) {
    // The next pointer was captured before executing this actor. Appending
    // to a suspended tail must not make that new actor tick immediately.
    s.current = s.actor_started ? s.next : actor.next_;
    s.actor_started = false;
  }
  if (s.physics_current == id) {
    s.physics_current = actor.next_;
    s.physics_applied = false;
  }
  if (s.request && s.request->actor == id &&
      (s.request->origin == WorldActionOrigin::Script ||
       s.request->binding.operation == NativeAction::RunPartyFollower))
    s.request.reset();
  remove_npc_index(id);
  if (actor.authored_role_) {
    const auto role = *actor.authored_role_;
    s.dormant_roles[role] = *retained;
    s.role_actors[role] = 0;
    // Capacity was allocated for all roles at construction. Returning one
    // cannot allocate; the source puts the released role at the free head.
    s.free_roles.insert(s.free_roles.begin(), role);
  }
  s.graphics.erase(id);
  s.drawing_priorities.erase(id);
  s.actors.erase(found);
  if (s.overlays)
    s.overlays->retire_host_actor(id);
  return true;
}
void ActorWorld::reset_scripts() {
  auto &s = *state_;
  if (s.in_tick)
    throw std::logic_error("Cannot reset scripts during a native world tick");
  if (s.enemies && s.enemies->busy())
    throw std::logic_error("Cannot reset scripts during enemy spawn selection");
  while (s.first)
    retire(s.first);
  for (auto &role : s.dormant_roles) {
    role.pause = {};
    if (role.appearance) {
      role.appearance->release();
      role.appearance->clear_flashing();
    }
  }
  order_free_authored_roles();
}
void ActorWorld::initialize_scene_objects() {
  auto &s = *state_;
  if (s.in_tick || !s.actors.empty())
    throw std::logic_error("Scene object initialization requires completed script reset");
  if (s.enemies)
    s.enemies->clear_retired_identities();
  for (auto &role : s.dormant_roles) {
    role.behavior.movement_speed = 0;
    role.behavior.collision_object = -1;
    role.npc = 0xffff;
  }
}
void ActorWorld::bind_overlays(WorldOverlayPlayback &overlays) {
  auto &s = *state_;
  if (s.in_tick || (s.overlays && s.overlays != &overlays) || !overlays.uses(*this) || overlays.failed())
    throw std::logic_error("Overlay playback must use this idle actor world");
  s.overlays = &overlays;
}
void ActorWorld::clear_overlays(const WorldOverlayPlayback &overlays) noexcept {
  if (state_->overlays == &overlays) state_->overlays = nullptr;
}
bool ActorWorld::uses_overlays(const WorldOverlayPlayback &overlays) const noexcept {
  return state_->overlays == &overlays;
}
void ActorWorld::clear_collision_targets() {
  auto &s = *state_;
  if (s.in_tick || (s.enemies && s.enemies->busy()))
    throw std::logic_error("Collision target reset requires idle actors and enemies");
  for (auto &role : s.dormant_roles)
    role.behavior.collision_object = -1;
  for (auto &[id, actor] : s.actors)
    actor->behavior.collision_object = -1;
}
GameVersion ActorWorld::version() const { return state_->program->version(); }
void ActorWorld::reset_encounter_objects() {
  auto &s = *state_;
  if (s.in_tick || (s.enemies && s.enemies->busy()))
    throw std::logic_error("Encounter reset requires completed actors and enemies");
  for (unsigned role = 0; role < 23; ++role) {
    if (const auto id = actor_for_role(role)) actor(*id).behavior.collision_object = -1;
    else s.dormant_roles[role].behavior.collision_object = -1;
    set_authored_path_state(role, 0);
    set_authored_sprite_hidden(role, false);
  }
}
bool ActorWorld::in_tick() const { return state_->in_tick; }

WorldActor &ActorWorld::actor(ActorId id) { return *state_->actors.at(id); }
const WorldActor &ActorWorld::actor(ActorId id) const {
  return *state_->actors.at(id);
}
std::size_t ActorWorld::size() const { return state_->actors.size(); }
std::vector<ActorId> ActorWorld::actors() const {
  std::vector<ActorId> result;
  for (auto id = state_->first; id; id = state_->actors.at(id)->next_)
    result.push_back(id);
  return result;
}
std::optional<ActorId> ActorWorld::actor_for_npc(NpcId npc) const {
  const auto found = state_->npcs.find(npc);
  return found == state_->npcs.end() ? std::nullopt
                                     : std::optional(found->second);
}
std::vector<NpcId> ActorWorld::active_npcs() const {
  std::vector<NpcId> result;
  for (const auto &[npc, id] : state_->npcs)
    result.push_back(npc);
  return result;
}
ActionSceneContext &ActorWorld::scene() { return state_->scene; }
const ActionSceneContext &ActorWorld::scene() const { return state_->scene; }
AppearanceSceneContext &ActorWorld::appearance_scene() {
  return state_->appearance_scene;
}
const AppearanceSceneContext &ActorWorld::appearance_scene() const {
  return state_->appearance_scene;
}
std::vector<WorldSoundEvent> ActorWorld::take_sound_events() {
  if (state_->in_tick)
    throw std::logic_error(
        "Cannot drain sound intents from an incomplete native tick");
  return std::exchange(state_->sounds, {});
}
std::uint64_t ActorWorld::ticks() const { return state_->ticks; }
const std::optional<WorldActionRequest> &ActorWorld::request() const {
  return state_->request;
}
const std::optional<WorldCameraRefresh> &ActorWorld::camera_refresh() const {
  return state_->camera_refresh;
}
void ActorWorld::respond_camera_refresh() {
  if (!state_->camera_refresh)
    throw std::logic_error("Native world has no pending camera refresh");
  state_->camera_refresh.reset();
}
void ActorWorld::respond(std::uint16_t value, unsigned parameter_bytes,
                         std::optional<std::uint16_t> sleep_frames) {
  auto &s = *state_;
  if (!s.request)
    throw std::logic_error("Native world has no pending request");
  if (s.request->origin == WorldActionOrigin::TickCallback) {
    if (value || parameter_bytes || sleep_frames)
      throw std::invalid_argument(
          "Tick callback requires an empty acknowledgment");
    s.request.reset();
    return;
  }
  if (!s.request->diagnostic.inline_length_known)
    throw std::logic_error("Cannot resume an unported native operation with "
                           "unknown inline operands");
  if (parameter_bytes != s.request->binding.parameter_bytes)
    throw std::invalid_argument(
        "Native service response disagrees with its compiled operands");
  if (sleep_frames &&
      s.request->binding.operation != NativeAction::StaggerTaskByRole &&
      s.request->binding.operation != NativeAction::EnemyDistanceSleep &&
      s.request->binding.operation != NativeAction::VelocityDistanceSleep)
    throw std::invalid_argument(
        "This native world service cannot assign task sleep");
  s.actors.at(s.request->actor)
      ->scripts_.respond(value, parameter_bytes, sleep_frames);
  s.request.reset();
}

WorldTickResult ActorWorld::advance_tick() {
  auto &s = *state_;
  if (s.request && s.party_following) {
    if (s.request->origin == WorldActionOrigin::Script &&
        s.request->binding.operation == NativeAction::RefreshPartyFollower) {
      if (const auto result = s.party_following->prepare(s.request->actor)) {
        s.actors.at(s.request->actor)->scripts_.respond(*result);
        s.request.reset();
      }
    } else if (s.request->origin == WorldActionOrigin::TickCallback &&
               s.request->binding.operation == NativeAction::RunPartyFollower &&
               s.party_following->tick(s.request->actor)) {
      s.request.reset();
    }
  }
  if (s.request && s.request->origin == WorldActionOrigin::Script &&
      s.party_movement &&
      s.request->binding.operation == NativeAction::InitializePartyActor) {
    if (const auto value = s.party_movement->startup(s.request->actor)) {
      s.actors.at(s.request->actor)->scripts_.respond(*value);
      s.request.reset();
    }
  }
  if (s.request && s.request->origin == WorldActionOrigin::Script &&
      s.movement) {
    const auto pending = *s.request;
    if (const auto value =
            s.movement->execute(pending.binding, *this, pending.actor)) {
      s.actors.at(pending.actor)
          ->scripts_.respond(*value, pending.binding.parameter_bytes);
      s.request.reset();
    }
  }
  if (s.request)
    return WorldTickResult::NeedsEngine;
  if (s.camera_refresh)
    return WorldTickResult::NeedsCameraRefresh;
  if (!s.in_tick) {
    s.in_tick = true;
    s.current = s.first;
    s.actor_started = false;
    s.scene.camera_changed = false;
    s.physics_started = false;
    s.physics_applied = false;
  }
  while (s.current) {
    auto &actor = *s.actors.at(s.current);
    if (!s.actor_started) {
      s.next = actor.next_;
      // Source samples script pause at entry to this actor's pass. A
      // script may change it for the later physics pass or next tick.
      s.run_scripts = actor.scripts_and_physics_enabled;
      s.actor_started = true;
    }
    if (s.run_scripts) {
      const auto result = actor.scripts_.tick();
      if (result == ActionTickResult::Ended || !actor.action().alive) {
        retire(s.current);
        continue;
      }
      if (result == ActionTickResult::NeedsEngine) {
        const auto &request = *actor.scripts_.request();
        const auto &bound = s.program->operation(request.identifier);
        const auto applied = apply_action(
            bound, request.temporary, actor.action(), actor.behavior, s.scene);
        if (applied.handled) {
          if (bound.operation == NativeAction::ClearTickCallback) {
            actor.scripts_and_physics_enabled = true;
            actor.tick_callback_enabled = true;
          }
          actor.scripts_.respond(applied.value, applied.parameter_bytes);
          continue;
        }
        if (s.party_following &&
            bound.operation == NativeAction::RefreshPartyFollower)
          if (const auto value = s.party_following->prepare(s.current)) {
            actor.scripts_.respond(*value);
            continue;
          }
        if (s.party_movement &&
            bound.operation == NativeAction::InitializePartyActor)
          if (const auto value = s.party_movement->startup(s.current)) {
            actor.scripts_.respond(*value);
            continue;
          }
        if (s.movement)
          if (const auto value = s.movement->execute(bound, *this, s.current)) {
            actor.scripts_.respond(*value, bound.parameter_bytes);
            continue;
          }
        if (s.appearance_data && actor.appearance_owned_ &&
            actor.appearance.available()) {
          // A refreshed pose sometimes has no semantic script return:
          // the old routine returned a graphics-upload destination.
          // Commit only if that value is defined or proven unused.
          // A pending, live-result request must have no actor effects.
          auto action_state = actor.action();
          auto appearance = actor.appearance;
          auto appearance_context = actor.appearance_context;
          appearance_context.footstep_owner =
              s.appearance_scene.footstep_role &&
              actor.authored_role_ == s.appearance_scene.footstep_role;
          const auto result = apply_appearance_action(
              bound, action_state, actor.behavior, appearance_context,
              s.appearance_scene, *s.appearance_data, appearance);
          if (result.handled && (result.script_value || bound.discard_result)) {
            if (result.sound)
              s.sounds.push_back({s.current, s.ticks + 1, *result.sound});
            actor.action() = action_state;
            actor.appearance = std::move(appearance);
            actor.scripts_.respond(result.script_value.value_or(0),
                                   bound.parameter_bytes);
            continue;
          }
        }
        s.request =
            WorldActionRequest{s.current, request, bound,
                               s.program->diagnostic(request.identifier)};
        return WorldTickResult::NeedsEngine;
      }
    }
    const auto callback = actor.behavior.tick;
    if(actor.tick_callback_enabled&&(callback==ActorTickCallback::TeleportLeader||
        callback==ActorTickCallback::TeleportFollower||callback==ActorTickCallback::TeleportFailureFollower)) {
      if(!s.tick_service)throw std::logic_error("Dedicated teleport callback lacks its actual movement owner");
      const auto callback_actor=s.current;
      const auto previous_x=s.scene.camera_x,previous_y=s.scene.camera_y;
      const bool refresh=s.tick_service->tick(callback_actor,callback);
      s.current=s.next;s.actor_started=false;
      if(refresh) {
        s.camera_refresh=WorldCameraRefresh{callback_actor,previous_x,previous_y,s.scene.camera_x,s.scene.camera_y,s.ticks+1};
        return WorldTickResult::NeedsCameraRefresh;
      }
      continue;
    }
    if (actor.tick_callback_enabled &&
        callback == ActorTickCallback::PartyFollower) {
      const auto callback_actor = s.current;
      const bool handled =
          s.party_following && s.party_following->tick(callback_actor);
      s.current = s.next;
      s.actor_started = false;
      if (!handled) {
        WorldActionRequest request;
        request.actor = callback_actor;
        request.origin = WorldActionOrigin::TickCallback;
        request.binding.operation = NativeAction::RunPartyFollower;
        s.request = std::move(request);
        return WorldTickResult::NeedsEngine;
      }
      continue;
    }
    if (actor.tick_callback_enabled &&
        (callback == ActorTickCallback::WorldMaintenance ||
         callback == ActorTickCallback::EnemyPath)) {
      const auto callback_actor = s.current;
      s.current = s.next;
      s.actor_started = false;
      WorldActionRequest request;
      request.actor = callback_actor;
      request.origin = WorldActionOrigin::TickCallback;
      request.binding.operation = callback == ActorTickCallback::EnemyPath
                                      ? NativeAction::RunEnemyPath
                                      : NativeAction::RunWorldMaintenance;
      s.request = std::move(request);
      return WorldTickResult::NeedsEngine;
    }
    const bool refresh = actor.tick_callback_enabled &&
                         (callback == ActorTickCallback::CenterCamera ||
                          callback == ActorTickCallback::CenterCameraOffset);
    const auto previous_x = s.scene.camera_x, previous_y = s.scene.camera_y;
    const auto callback_actor = s.current;
    if (actor.tick_callback_enabled)
      run_actor_tick_callback(actor.action(), actor.behavior, s.scene);
    s.current = s.next;
    s.actor_started = false;
    if (refresh) {
      // The callback has completed exactly once. Retain its captured-next
      // traversal while the scene creates/removes actors during refresh.
      // A refresh is still meaningful if the requested camera is equal:
      // its streaming origin is independently owned by the scene.
      s.camera_refresh =
          WorldCameraRefresh{callback_actor,   previous_x,       previous_y,
                             s.scene.camera_x, s.scene.camera_y, s.ticks + 1};
      return WorldTickResult::NeedsCameraRefresh;
    }
  }
  // The source starts a fresh traversal here. An actor appended by the last
  // script is moved/projected now even though its script starts next tick.
  // Preflight before *any* integration: binding a missing service and retrying
  // this same tick cannot move earlier actors twice.
  if (!s.movement)
    for (const auto &[id, actor] : s.actors)
      if (actor->scripts_and_physics_enabled &&
          WorldActorMovement::required(actor->behavior.physics))
        throw std::logic_error(
            "Native world physics requires a bound movement service");
  if (!s.party_movement)
    for (const auto &[id, actor] : s.actors)
      if (actor->scripts_and_physics_enabled &&
          actor->behavior.physics == ActorPhysics::PartyFollower)
        throw std::logic_error(
            "Native follower movement requires a bound party owner");
  if (!s.physics_started) {
    s.physics_current = s.first;
    s.physics_started = true;
  }
  while (s.physics_current) {
    auto &actor = *s.actors.at(s.physics_current);
    if (!s.physics_applied && actor.scripts_and_physics_enabled) {
      // EVENT2 installs its spacing-aware screen update as MOVE, with
      // a separate no-op screen callback. It does not integrate XYZ.
      if (actor.behavior.physics == ActorPhysics::PartyFollower)
        s.party_movement->project(s.physics_current);
      else if (s.movement)
        s.movement->advance(actor);
      else
        run_actor_physics(actor.action(), actor.behavior);
    }
    s.physics_applied = true;
    run_actor_projection(actor.action(), actor.behavior, s.scene);
    s.physics_current = actor.next_;
    s.physics_applied = false;
  }
  // Source drawing follows the completed physics/projection traversal. Overlay
  // clocks run once here; initial or repeated render capture never advances them.
  for (auto id = s.first; id; id = s.actors.at(id)->next_) {
    auto &actor = *s.actors.at(id);
    if (!actor.appearance_owned_ || !actor.appearance.available() || !actor.behavior.draw_world ||
        !actor.appearance.draw(actor.action(), actor.behavior.projected_x,
                              actor.behavior.projected_y, actor.behavior.surface_flags).visible)
      continue;
    const auto raw = actor.action().priority;
    const auto group = (raw & 0x8000u) ? authored_draw_priority(raw & 0x3fu) : raw;
    if (group > 3)
      throw std::out_of_range("Attached actor priority has no owned render group");
    s.drawing_priorities[id] = group;
    if ((raw & 0xc000u) == 0x8000u)
      actor.action().priority = 0;
    if (s.overlays)
      s.overlays->advance_draw(id);
  }
  s.in_tick = false;
  s.next = 0;
  s.physics_started = false;
  ++s.ticks;
  return WorldTickResult::Complete;
}

std::shared_ptr<const DirectSceneFrame>
ActorWorld::draw(unsigned width, const SpritePalettes &palettes,
                 std::uint64_t scene_identity, unsigned overscan) {
  auto &s = *state_;
  if (s.in_tick)
    throw std::logic_error("Cannot publish an incomplete native world tick");
  if (width < 256 || width > 4096 || overscan > 4096)
    throw std::invalid_argument("Invalid native world presentation width");
  const float extra = (width - 256) / 2.f;
  for (const auto &[id, actor] : s.actors) {
    if (!actor->appearance_owned_ || !actor->appearance.available())
      continue;
    auto picture = actor->appearance.draw(
        actor->action(), actor->behavior.projected_x + extra,
        actor->behavior.projected_y, actor->behavior.surface_flags);
    picture.visible &= actor->behavior.draw_world;
    // Before the first real pass, capture may read the same retained parent
    // priority, but cannot execute C0A3A4's one-shot authoritative clear.
    const auto raw = actor->action().priority;
    const auto retained_group = s.drawing_priorities.find(id);
    picture.draw_group = retained_group != s.drawing_priorities.end() ? retained_group->second :
        (raw & 0x8000u) ? authored_draw_priority(raw & 0x3fu) : raw;
    if (s.overlays) {
      const auto fragments = s.overlays->fragments(id);
      picture.overlays.assign(fragments.begin(), fragments.end());
    }
    s.graphics.update(id, picture);
  }
  return s.graphics.draw({0, 0, width, overscan}, palettes, s.ticks,
                         scene_identity);
}
} // namespace eb::native
