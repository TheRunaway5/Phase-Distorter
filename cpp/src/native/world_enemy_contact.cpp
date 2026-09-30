#include "eb/native/world_enemy_contact.hpp"
#include "eb/native/world_battle_entry.hpp"
#include "eb/native/world_enemy_movement.hpp"
#include "eb/native/world_maintenance.hpp"
#include <stdexcept>

namespace eb::native {
namespace {
void require(bool condition, const char *message) {
  if (!condition)
    throw std::logic_error(message);
}
} // namespace
WorldEnemyContact::WorldEnemyContact(
    ActorWorld &actors, const WorldEnemies &enemies,
    npcs::InteractionState &leader, WorldControlState &control,
    const dialogue::PromptState &prompt, const WorldNavigationState &navigation,
    WorldMaintenanceState &maintenance, const WorldPathfinding &paths,
    WorldEncounterState &state, WorldEncounter &encounter,
    WorldAutomatic &automatic, ScenePalette &colors, ScenePalette &backup,
    const WorldCollision &collision, const WorldMapArea &area,
    WorldEnemyContactSound sound)
    : actors_(actors), enemies_(enemies), leader_(leader), control_(control),
      prompt_(prompt), navigation_(navigation), maintenance_(maintenance),
      paths_(paths), state_(state), encounter_(encounter),
      automatic_(automatic), colors_(colors), backup_(backup),
      collision_(collision), area_(area), sound_(std::move(sound)) {
  require(bool(sound_),
          "Native enemy contact requires the actual sound adapter");
  require(&colors_ != &backup_,
          "Native contact palette backup aliases current colors");
  check();
}
bool WorldEnemyContact::failed() const noexcept {
  return failed_ || paths_.failed() || encounter_.failed() ||
         automatic_.failed();
}
void WorldEnemyContact::check() const {
  require(!failed(), "Native enemy contact owner failed");
  require(!executing_, "Native enemy contact is already executing");
  require(actors_.uses_enemies(enemies_) && enemies_.uses(actors_),
          "Native enemy contact has no matching active enemy owner");
  require(paths_.uses(actors_, collision_, area_),
          "Native enemy contact uses foreign pathfinding");
  require(encounter_.uses(state_, colors_),
          "Native enemy contact uses foreign encounter state");
  require(automatic_.uses(actors_, enemies_, leader_, control_, maintenance_),
          "Native enemy contact uses foreign automatic state");
  require(!enemies_.busy(),
          "Native enemy contact cannot run during enemy creation");
}
bool WorldEnemyContact::uses(const ActorWorld &actors) const noexcept {
  return &actors == &actors_;
}
bool WorldEnemyContact::uses(
    const WorldControl &control, const WorldWalking &walking,
    const WorldEnemies &enemies, const WorldMaintenanceState &maintenance,
    const WorldPathfinding &paths, const WorldEncounterState &state,
    const WorldEncounter &encounter, const WorldAutomatic &automatic,
    const ScenePalette &colors, const ScenePalette &backup,
    const WorldCollision &collision, const WorldMapArea &area) const noexcept {
  return &control.actors() == &actors_ && &control.state() == &control_ &&
         &control.leader_state() == &leader_ &&
         &control.prompt_state() == &prompt_ &&
         &walking.navigation() == &navigation_ && &enemies == &enemies_ &&
         &maintenance == &maintenance_ && &paths == &paths_ &&
         &state == &state_ && &encounter == &encounter_ &&
         &automatic == &automatic_ && &colors == &colors_ &&
         &backup == &backup_ && &collision == &collision_ && &area == &area_;
}
bool WorldEnemyContact::uses(
    const WorldBattleEntry &entry, const WorldEnemyMovement &movement,
    const WorldControl &control, const WorldWalking &walking,
    const WorldEnemies &enemies, const WorldMaintenanceState &maintenance,
    const WorldAutomatic &automatic, const WorldCollision &collision,
    const WorldMapArea &area) const noexcept {
  return uses(control, walking, enemies, maintenance, paths_, state_,
              encounter_, automatic, colors_, backup_, collision, area) &&
         movement.uses(actors_, paths_, collision_) &&
         entry.uses(state_, encounter_, paths_);
}
bool WorldEnemyContact::collision(ActorId id) const {
  if (leader_.movement_flags & 2)
    return false;
  if (leader_.collision_actor == id)
    return true;
  const auto object = actors_.actor(id).behavior.collision_object;
  return object >= 23 && object <= 0x7fff;
}
bool WorldEnemyContact::collided(ActorId id) const {
  check();
  (void)actors_.actor(id);
  return collision(id);
}
bool WorldEnemyContact::active() const {
  check();
  return actors_.appearance_scene().battle_swirl_ticks != 0 ||
         maintenance_.enemy_touched != 0;
}
std::uint16_t WorldEnemyContact::enemy_type(ActorId id) const {
  const auto enemy = enemies_.enemy_type(id);
  require(enemy.has_value() && *enemy <= 0xffff,
          "Native enemy contact requires an owned live enemy type");
  return std::uint16_t(*enemy);
}
void WorldEnemyContact::grayscale() {
  backup_ = colors_;
  for (unsigned i = 0; i < 128; ++i) {
    const auto color = colors_[i];
    const auto value =
        std::uint8_t((unsigned(color.red) + color.green + color.blue) / 3);
    colors_[i] = {value, value, value};
  }
  encounter_.palette_changed();
}
void WorldEnemyContact::prepare_palette() {
  check();
  executing_ = true;
  try {
    grayscale();
    executing_ = false;
  } catch (...) {
    executing_ = false;
    failed_ = true;
    throw;
  }
}
void WorldEnemyContact::pause_all() {
  for (unsigned role = 0; role < 30; ++role)
    if (role != 23)
      actors_.set_authored_pause(role, false, false);
}
void WorldEnemyContact::pause(ActorId id) {
  auto &actor = actors_.actor(id);
  actor.scripts_and_physics_enabled = false;
  actor.tick_callback_enabled = false;
}
bool WorldEnemyContact::reduce(ActorId id) {
  if (prompt_.battle_mode || navigation_.using_door)
    return false;
  auto &scene = actors_.appearance_scene();
  if (!(scene.battle_swirl_ticks && state_.touched == id)) {
    if (control_.automatic_mode == 2 || (leader_.movement_flags & 2) ||
        leader_.walking_style == 12 || scene.intangibility_ticks)
      return false;
    if (!(scene.battle_swirl_ticks && paths_.remaining(id) == 0) &&
        !collision(id))
      return false;
  }
  const auto enemy = enemy_type(id);
  if (!scene.battle_swirl_ticks && !maintenance_.enemy_touched &&
      enemy == enemies_.data().butterfly_enemy)
    return true;
  if (!scene.battle_swirl_ticks && !maintenance_.enemy_touched) {
    maintenance_.enemy_touched = 1;
    grayscale();
    if (leader_.collision_actor == id)
      state_.pathfinding_target = AuthoredRoleRef{24};
    else {
      // C0D15C also accepts positive words above the last authored role. Those
      // are original out-of-range actor reads, never usable native identities.
      const auto target = actors_.actor(id).behavior.collision_object;
      require(target >= 0 && target < 30,
              "Native contact target lies outside authored actor roles");
      state_.pathfinding_target = AuthoredRoleRef{unsigned(target)};
    }
    state_.touched = id;
    pause_all();
    auto interval = automatic_.begin_direction_interval();
    while (!interval->advance()) {
      require(interval->request() == WorldAutomaticService::ScriptSound,
              "Native contact interval requested an unexpected service");
      sound_(interval->sound());
      interval->respond_sound();
    }
    return true;
  }
  actors_.actor(id).behavior.collision_object = -32768;
  if (!scene.battle_swirl_ticks)
    return false;
  if (state_.touched == id) {
    pause(id);
    return true;
  }
  bool collected = false;
  std::uint16_t left = 0;
  for (auto &group : state_.remaining) {
    if (group.enemy == enemy && group.count) {
      --group.count;
      collected = true;
      pause(id);
      // The original continues through all four entries, including repeated
      // enemy types, so one arrival may append several ordered roster entries.
      state_.roster.push_back(enemy);
    }
    left = std::uint16_t(left + group.count);
  }
  if (!left && !encounter_.swirl_active()) {
    pause_all();
    scene.battle_swirl_ticks = 1;
  }
  return collected;
}
bool WorldEnemyContact::contact(ActorId id) {
  check();
  (void)actors_.actor(id);
  executing_ = true;
  try {
    const auto result = reduce(id);
    executing_ = false;
    return result;
  } catch (...) {
    executing_ = false;
    failed_ = true;
    throw;
  }
}
std::uint16_t WorldEnemyContact::obstacles(ActorId id, bool vertical) {
  check();
  auto &actor = actors_.actor(id);
  executing_ = true;
  try {
    const CollisionPoint current{
        std::uint16_t(actor.action().position[0] >> 16),
        std::uint16_t(actor.action().position[1] >> 16)};
    const CollisionPoint prospective{
        std::uint16_t(
            (actor.action().position[0] + actor.action().velocity[0]) >> 16),
        std::uint16_t(
            (actor.action().position[1] + actor.action().velocity[1]) >> 16)};
    if (current == prospective) {
      executing_ = false;
      return 0;
    }
    const auto origin =
        collision_.origin(prospective, actor.appearance_context.shape);
    const auto sampled =
        vertical
            ? collision_.edge(area_, origin, actor.appearance_context.shape,
                              CollisionEdge::Bottom,
                              collision_.edge(area_, origin,
                                              actor.appearance_context.shape,
                                              CollisionEdge::Top))
            : collision_.directional_surface(
                  area_, prospective, actor.appearance_context.shape,
                  actor.behavior.direction < 8
                      ? CollisionDirection(actor.behavior.direction)
                      : CollisionDirection::None);
    auto flags = std::uint16_t(sampled & 0xd0);
    actor.behavior.obstacle_flags = flags;
    if (flags) {
      executing_ = false;
      return 0;
    }
    const auto enemy = enemy_type(id);
    require(enemy < enemies_.data().enemies.size(),
            "Native enemy terrain type is absent from imported content");
    // Both callers pass the already-D0-masked zero result to C05DE7. Its
    // terrain selector is therefore exactly four, regardless of bits2/3 in
    // the unmasked surface sample.
    flags |= (enemies_.data().enemies[enemy].terrain_mask & 4) ? 0 : 0x80;
    actor.behavior.obstacle_flags = flags;
    executing_ = false;
    return flags;
  } catch (...) {
    executing_ = false;
    failed_ = true;
    throw;
  }
}
std::uint16_t WorldEnemyContact::prepare_directional_obstacles(ActorId id) {
  return obstacles(id, false);
}
std::uint16_t WorldEnemyContact::prepare_vertical_obstacles(ActorId id) {
  return obstacles(id, true);
}
} // namespace eb::native
