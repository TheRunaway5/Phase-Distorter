#include "eb/native/world_automatic.hpp"
#include "eb/native/world_battle_entry.hpp"
#include "eb/native/world_door_transitions.hpp"
#include "eb/native/world_maintenance.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native {
namespace {
void require(bool condition, const char *why) {
  if (!condition)
    throw std::logic_error(why);
}
std::uint32_t fixed(std::uint16_t integer, std::uint16_t fraction) {
  return std::uint32_t(integer) << 16 | fraction;
}
constexpr dialogue::ScriptSoundRequest direction_interval_sound{
    dialogue::ScriptSoundKind::DirectDriverCommand, 2, 2};
} // namespace
WorldAutomatic::WorldAutomatic(
    const WalkingData &data, ActorWorld &actors, const WorldEnemies &enemies,
    npcs::InteractionState &leader, WorldControlState &control,
    const WorldDoorTransitionState &transitions, WorldPartyState &formation,
    PartyTrail &trail, WorldMaintenanceState &maintenance,
    story::InputState &input, WorldInteractionQueue &queue)
    : data_(data), actors_(actors), enemies_(enemies), leader_(leader),
      control_(control), transitions_(transitions), formation_(formation),
      trail_(trail), maintenance_(maintenance), input_(input), queue_(queue) {
  check();
}
void WorldAutomatic::check() const {
  require(!failed(), "Native automatic control owner failed");
  require(queue_.shares_world(data_.version(),
                              actors_.appearance_scene().intangibility_ticks),
          "Native automatic control queue uses a different world");
}
void WorldAutomatic::idle() const {
  check();
  require(!active_, "Native automatic control already has unfinished work");
}
bool WorldAutomatic::uses(const ActorWorld &actors) const noexcept {
  return &actors_ == &actors;
}
bool WorldAutomatic::uses(const WorldBattleEntry &entry) const noexcept {
  return entry.uses(actors_, enemies_, leader_, formation_, maintenance_);
}
bool WorldAutomatic::uses(const ActorWorld &actors,
                          const WorldControlState &control) const noexcept {
  return &actors_ == &actors && &control_ == &control;
}
bool WorldAutomatic::uses(const ActorWorld &actors, const WorldEnemies &enemies,
                          const npcs::InteractionState &leader,
                          const WorldControlState &control,
                          const WorldMaintenanceState &maintenance) const noexcept {
  return uses(actors, control) && &enemies_ == &enemies &&
         &leader_ == &leader && &maintenance_ == &maintenance;
}
bool WorldAutomatic::uses(const WorldControl &control,
                          const WorldWalking &walking,
                          const WorldDoorTransitions &transitions,
                          const WorldEnemies &enemies,
                          const WorldMaintenanceState &maintenance,
                          const story::InputState &input,
                          const WorldInteractionQueue &queue) const noexcept {
  return uses(control.actors(), control.state()) &&
         &control.leader_state() == &leader_ &&
         &control.formation() == &formation_ && &control.trail() == &trail_ &&
         &walking.data() == &data_ && &transitions.state() == &transitions_ &&
         &transitions.formation() == &formation_ && transitions.uses(data_) &&
         &enemies == &enemies_ && &maintenance == &maintenance_ &&
         &input == &input_ && &queue == &queue_;
}
std::optional<CameraTarget>
WorldAutomatic::start_follow_npc(std::uint16_t npc) {
  idle();
  std::optional<CameraTarget> selected;
  for (unsigned role = 0; role < 30; ++role) {
    auto identity = actors_.authored_npc_selector(role);
    if (const auto id = actors_.actor_for_role(role))
      for (const auto &enemy : enemies_.actors())
        if (enemy.actor == *id) {
          identity = enemy.npc_identity().value_or(0xffff);
          break;
        }
    if (identity == npc) {
      selected = AuthoredRoleRef(role);
      break;
    }
  }
  if (!selected)
    for (const auto id : actors_.actors()) {
      const auto &actor = actors_.actor(id);
      if (actor.authored_role())
        continue;
      auto identity = actor.npc();
      for (const auto &enemy : enemies_.actors())
        if (enemy.actor == id) {
          identity = enemy.npc_identity();
          break;
        }
      if (identity && *identity == npc) {
        selected = id;
        break;
      }
    }
  // FFFF can match an in-range role's absent NPC identity. Only a true search
  // miss is null; consuming that result would read outside source role tables.
  control_.camera_focus = selected;
  control_.automatic_mode = 2;
  return selected;
}
std::optional<CameraTarget>
WorldAutomatic::start_follow_sprite(std::uint16_t sprite) {
  idle();
  std::optional<CameraTarget> selected;
  for (unsigned role = 0; role < 30; ++role)
    if (actors_.authored_sprite_selector(role) == sprite) {
      selected = AuthoredRoleRef(role);
      break;
    }
  if (!selected)
    for (const auto id : actors_.actors()) {
      const auto &actor = actors_.actor(id);
      if (!actor.authored_role() && actor.has_appearance() &&
          actor.appearance.sprite() == sprite) {
        selected = id;
        break;
      }
    }
  control_.camera_focus = selected;
  control_.automatic_mode = 2;
  return selected;
}
void WorldAutomatic::stop_follow() {
  idle();
  control_.moved_this_tick = 0;
  control_.automatic_mode = 0;
}
std::unique_ptr<WorldAutomatic::Operation>
WorldAutomatic::start(bool interval) {
  idle();
  auto result = std::unique_ptr<Operation>(new Operation(*this, interval));
  active_ = result.get();
  return result;
}
std::unique_ptr<WorldAutomatic::Operation> WorldAutomatic::begin() {
  return start(false);
}
std::unique_ptr<WorldAutomatic::Operation>
WorldAutomatic::begin_direction_interval() {
  return start(true);
}
WorldAutomatic::Operation::Operation(WorldAutomatic &owner, bool interval)
    : owner_(owner), start_interval_(interval) {}
WorldAutomatic::Operation::~Operation() {
  if (owner_.active_ == this) {
    owner_.active_ = nullptr;
    if (!complete_)
      owner_.failed_ = true;
  }
}
void WorldAutomatic::timed_motion() {
  const auto direction = CollisionDirection(
      leader_.walking_style == 13 ? transitions_.automatic_direction
                                  : leader_.leader_direction);
  // Validate both imported selectors before any fixed-point or countdown write.
  const auto dx = data_.raw_delta(0, leader_.walking_style, direction);
  const auto dy = data_.raw_delta(1, leader_.walking_style, direction);
  const auto x = fixed(leader_.leader_x, control_.x_fraction) + dx;
  const auto y = fixed(leader_.leader_y, control_.y_fraction) + dy;
  leader_.leader_x = std::uint16_t(x >> 16);
  leader_.leader_y = std::uint16_t(y >> 16);
  control_.x_fraction = std::uint16_t(x);
  control_.y_fraction = std::uint16_t(y);
  if (--control_.automatic_ticks == 0) {
    control_.automatic_mode = 0;
    leader_.walking_style = control_.automatic_restore_style;
  }
  control_.moved_this_tick = 1;
}
void WorldAutomatic::follow_actor() {
  require(control_.camera_focus.has_value(),
          "Automatic camera movement has no matching target");
  AuthoredActorPose pose;
  if (const auto *role =
          std::get_if<AuthoredRoleRef>(&*control_.camera_focus)) {
    pose = actors_.authored_pose(role->value());
  } else {
    const auto id = std::get<ActorId>(*control_.camera_focus);
    const auto ids = actors_.actors();
    require(std::find(ids.begin(), ids.end(), id) != ids.end(),
            "Automatic camera movement lost its host actor");
    const auto &actor = actors_.actor(id);
    pose = {actor.action().position, actor.behavior.direction};
  }
  const auto x = pose.position[0], y = pose.position[1];
  const bool changed = x != fixed(leader_.leader_x, control_.x_fraction) ||
                       y != fixed(leader_.leader_y, control_.y_fraction);
  leader_.leader_x = std::uint16_t(x >> 16);
  leader_.leader_y = std::uint16_t(y >> 16);
  control_.x_fraction = std::uint16_t(x);
  control_.y_fraction = std::uint16_t(y);
  leader_.leader_direction = pose.direction;
  control_.moved_this_tick = changed ? 1 : 0;
}
void WorldAutomatic::change_facing() {
  const auto direction = data_.direction(leader_.walking_style, input_.state[0],
                                         queue_.pending() != 0);
  if (direction == CollisionDirection::None)
    return;
  for (unsigned role = 24; role < 30; ++role) {
    const auto id = actors_.actor_for_role(role);
    if (!id)
      continue;
    auto &actor = actors_.actor(*id);
    if (!actor.action().alive ||
        actor.behavior.direction == unsigned(direction))
      continue;
    const unsigned character = actor.action().variables[1];
    require(character < formation_.trail_cursors.size(),
            "Automatic facing has no character trail owner");
    const unsigned cursor = formation_.trail_cursors[character];
    require(cursor < trail_.points.size(),
            "Automatic facing trail cursor exceeds its owner");
    const auto style = trail_.points[cursor].walking_style;
    if (style == 7 || style == 8)
      continue;
    // Refresh the current frame, without running animation or changing its
    // creation shape/palette, fingerprint, timer, flashing state or position.
    auto appearance = actor.appearance;
    appearance.select_eight(unsigned(direction), actor.action().animation,
                            actor.behavior.surface_flags);
    actor.behavior.direction = unsigned(direction);
    actor.appearance = std::move(appearance);
  }
  leader_.leader_direction = unsigned(direction);
}
bool WorldAutomatic::Operation::advance() {
  auto &o = owner_;
  if (complete_)
    return true;
  try {
    o.check();
    if (request_)
      return false;
    if (start_interval_) {
      if (!phase_) {
        o.control_.direction_interval_ticks = 12;
        o.control_.direction_interval_previous_mode = o.control_.automatic_mode;
        o.control_.automatic_mode = 3;
        phase_ = 1;
        request_ = WorldAutomaticService::ScriptSound;
        return false;
      }
      o.maintenance_.overworld_status_suppression = 1;
    } else {
      switch (o.control_.automatic_mode & 0xff) {
      case 1:
        o.timed_motion();
        break;
      case 2:
        o.follow_actor();
        break;
      case 3:
        if (--o.control_.direction_interval_ticks == 0) {
          o.control_.automatic_mode =
              o.control_.direction_interval_previous_mode;
          request_ = WorldAutomaticService::BattleEntry;
          return false;
        }
        o.change_facing();
        break;
      default:
        break;
      }
    }
    complete_ = true;
    o.active_ = nullptr;
    return true;
  } catch (...) {
    o.failed_ = true;
    throw;
  }
}
const dialogue::ScriptSoundRequest &WorldAutomatic::Operation::sound() const {
  owner_.check();
  require(request_ == WorldAutomaticService::ScriptSound && !complete_,
          "No automatic-control sound request");
  return direction_interval_sound;
}
void WorldAutomatic::Operation::respond_sound() {
  (void)sound();
  request_.reset();
}
void WorldAutomatic::Operation::enter_battle(WorldBattleEntry &entry) {
  owner_.check();
  require(request_ == WorldAutomaticService::BattleEntry && !complete_,
          "No automatic-control battle entry request");
  require(owner_.uses(entry),
          "Battle entry uses different automatic-control owners");
  try {
    entry.enter();
    request_.reset();
    complete_ = true;
    owner_.active_ = nullptr;
  } catch (...) {
    owner_.failed_ = true;
    throw;
  }
}
} // namespace eb::native
