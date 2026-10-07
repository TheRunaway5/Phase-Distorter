#include "eb/native/world_enemy_behavior.hpp"
#include <algorithm>
#include <bit>
#include <stdexcept>

namespace eb::native {
namespace {
std::uint16_t wrap(unsigned value) { return std::uint16_t(value); }
std::int16_t signed_word(std::uint16_t value) {
  return std::bit_cast<std::int16_t>(value);
}
std::uint16_t absolute(std::uint16_t value) {
  return signed_word(value) < 0 ? wrap(0u - value) : value;
}
bool flag(std::span<const std::uint8_t> flags, unsigned id) {
  if (!id)
    return false;
  --id;
  if (id / 8 >= flags.size())
    throw std::logic_error("Enemy behavior requires the actual event flags");
  return flags[id / 8] & (1u << (id & 7));
}
} // namespace
WorldEnemyBehavior::WorldEnemyBehavior(const EnemyMovementData &movement,
                                       const GeneratedInputData &angles,
                                       ActorWorld &actors,
                                       const WorldEnemies &enemies,
                                       const party::State &party,
                                       const npcs::InteractionState &leader)
    : movement_(movement), angles_(angles), actors_(actors), enemies_(enemies),
      party_(party), leader_(leader) {
  if (movement.version() != actors.version() ||
      angles.version() != actors.version() ||
      party.version() != actors.version())
    throw std::invalid_argument(
        "Enemy behavior requires matching regional owners");
}
void WorldEnemyBehavior::check() const {
  if (failed_)
    throw std::logic_error("Native enemy behavior failed");
}
bool WorldEnemyBehavior::uses(
    const ActorWorld &actors, const WorldEnemies &enemies,
    const party::State &party,
    const npcs::InteractionState &leader) const noexcept {
  return &actors_ == &actors && &enemies_ == &enemies && &party_ == &party &&
         &leader_ == &leader;
}
bool WorldEnemyBehavior::uses(const EnemyMovementData &movement,
                              const GeneratedInputData &angles) const noexcept {
  return &movement_ == &movement && &angles_ == &angles;
}
std::uint16_t WorldEnemyBehavior::distance_band(ActorId id, bool short_range) {
  try {
    check();
    const auto &actor = actors_.actor(id);
    if (actor.behavior.path_state)
      return 0;
    if (actors_.appearance_scene().intangibility_ticks)
      return 0xffff;
    const auto dx =
        absolute(wrap(leader_.leader_x - (actor.action().position[0] >> 16)));
    const auto dy =
        absolute(wrap(leader_.leader_y - (actor.action().position[1] >> 16)));
    const auto distance = signed_word(wrap(unsigned(dx) + dy));
    if (distance > (short_range ? 128 : 256))
      return 3;
    if (distance > (short_range ? 80 : 160))
      return 2;
    return distance > (short_range ? 64 : 128) ? 1 : 0;
  } catch (...) {
    failed_ = true;
    throw;
  }
}
std::uint16_t WorldEnemyBehavior::capture_leader_target(ActorId id) {
  try {
    check();
    auto &vars = actors_.actor(id).action().variables;
    vars[6] = leader_.leader_x;
    vars[7] = leader_.leader_y;
    return vars[7];
  } catch (...) {
    failed_ = true;
    throw;
  }
}
std::uint16_t WorldEnemyBehavior::direction_from_leader(ActorId id) {
  check();
  const auto &actor=actors_.actor(id);
  const auto classify=[](std::uint16_t delta) {return signed_word(delta)<0?0u:delta?2u:1u;};
  const auto x=classify(wrap(leader_.leader_x-(actor.action().position[0]>>16)));
  const auto y=classify(wrap(leader_.leader_y-(actor.action().position[1]>>16)));
  // Literal shared DIRECTION_MATRIX, source data/map/direction_matrix.asm.
  constexpr std::array<std::uint16_t,9> matrix{7,0,1,6,0,2,5,4,3};
  return matrix[y*3+x];
}
std::uint16_t WorldEnemyBehavior::level_sum() const {
  if (party_.party_count > party_.display_order.size())
    throw std::logic_error(
        "Enemy behavior party count exceeds owned formation");
  std::uint16_t sum = 0;
  for (unsigned i = 0; i < party_.party_count; ++i)
    if (party_.display_order[i] <= 4)
      sum = wrap(
          unsigned(sum) +
          party_.character(unsigned(party_.controlled_order[i]) + 1).level);
  return sum;
}
std::uint16_t WorldEnemyBehavior::party_level_sum() {
  try {
    check();
    return level_sum();
  } catch (...) {
    failed_ = true;
    throw;
  }
}
bool WorldEnemyBehavior::flee(ActorId id) const {
  (void)actors_.actor(id);
  if (!enemies_.uses(actors_))
    throw std::logic_error("Enemy behavior has a foreign enemy identity owner");
  const auto &all = enemies_.actors();
  const auto found = std::find_if(
      all.begin(), all.end(), [id](const auto &e) { return e.actor == id; });
  if (found == all.end() || !found->has_identity)
    throw std::logic_error(
        "Enemy behavior requires a live authored enemy identity");
  const auto &rule = enemies_.data().battle_behaviors.at(found->battle);
  if (rule.run_away_flag &&
      unsigned(flag(actors_.scene().event_flags, rule.run_away_flag)) ==
          rule.run_away_state)
    return true;
  const unsigned levels = level_sum(),
                 level = enemies_.data().enemies.at(found->enemy).level;
  return levels > level * 10 || (levels > level * 8 && found->weakness < 192) ||
         (levels > level * 6 && found->weakness < 128);
}
bool WorldEnemyBehavior::should_flee(ActorId id) {
  try {
    check();
    return flee(id);
  } catch (...) {
    failed_ = true;
    throw;
  }
}
std::uint16_t WorldEnemyBehavior::chase_angle(ActorId id) {
  try {
    check();
    const auto &actor = actors_.actor(id);
    auto npc = actor.npc().value_or(0xffff);
    if (const auto role = actor.authored_role())
      npc = actors_.authored_npc_selector(*role);
    const bool reverse = npc > 0x7fff && flee(id);
    const auto angle = angles_.angle(
        {std::uint16_t(actor.action().position[0] >> 16),
         std::uint16_t(actor.action().position[1] >> 16)},
        {actor.action().variables[6], actor.action().variables[7]}, peripherals_);
    return wrap(unsigned(angle) + (reverse ? 0x8000 : 0));
  } catch (...) {
    failed_ = true;
    throw;
  }
}
void WorldEnemyBehavior::bind_peripherals(PeripheralState& owner) {
  if (peripherals_ && peripherals_ != &owner)
    throw std::logic_error("Scripted movement has another peripheral owner");
  peripherals_ = &owner;
}
std::uint16_t WorldEnemyBehavior::target_angle(ActorId id) {
  try {
    check();
    const auto& actor = actors_.actor(id).action();
    return angles_.angle({std::uint16_t(actor.position[0] >> 16),
                          std::uint16_t(actor.position[1] >> 16)},
                         {actor.variables[6], actor.variables[7]}, peripherals_);
  } catch (...) { failed_ = true; throw; }
}
bool WorldEnemyBehavior::target_reached(ActorId id) {
  try {
    check();
    const auto& actor = actors_.actor(id).action();
    const auto distance = [&](unsigned axis) {
      const auto delta = std::uint16_t(actor.variables[6 + axis] - (actor.position[axis] >> 16));
      return delta & 0x8000 ? std::uint16_t(0u - delta) : delta;
    };
    if (distance(0) < actor.variables[5] && distance(1) < actor.variables[5]) return true;
    (void)set_velocity(id, target_angle(id));
    return false;
  } catch (...) { failed_ = true; throw; }
}
void WorldEnemyBehavior::face_npc_toward_actor(ActorId current, std::uint16_t npc) {
  try {
    check();
    const auto selected = actors_.first_authored_role_with_npc(npc);
    if (selected) face_role_toward_actor(current, *selected);
  } catch (...) { failed_ = true; throw; }
}
void WorldEnemyBehavior::face_sprite_toward_actor(ActorId current, std::uint16_t sprite) {
  try {
    check();
    const auto selected = actors_.first_authored_role_with_sprite(sprite);
    if (selected) face_role_toward_actor(current, *selected);
  } catch (...) { failed_ = true; throw; }
}
void WorldEnemyBehavior::face_role_toward_actor(ActorId current, unsigned role) {
  const auto source = actors_.actor(current).action().position;
  const auto target = actors_.authored_position(role);
  const auto angle = angles_.angle(
      {std::uint16_t(target[0] >> 16), std::uint16_t(target[1] >> 16)},
      {std::uint16_t(source[0] >> 16), std::uint16_t(source[1] >> 16)}, peripherals_);
  const auto direction = wrap(unsigned(angle) + 0x1000) / 0x2000;
  actors_.refresh_authored_direction(role, std::uint16_t(direction));
}
std::uint16_t WorldEnemyBehavior::set_velocity(ActorId id,
                                               std::uint16_t angle) {
  try {
    check();
    auto &actor = actors_.actor(id);
    const auto velocity =
        movement_.velocity(angle, actor.behavior.movement_speed, peripherals_);
    actor.action().velocity[0] = velocity[0];
    actor.action().velocity[1] = velocity[1];
    return angle;
  } catch (...) {
    failed_ = true;
    throw;
  }
}
std::uint16_t WorldEnemyBehavior::set_moving_direction(ActorId id,
                                                       std::uint16_t angle) {
  try {
    check();
    return actors_.actor(id).behavior.moving_direction =
               wrap(unsigned(angle) + 0x1000) / 0x2000;
  } catch (...) {
    failed_ = true;
    throw;
  }
}
std::uint16_t WorldEnemyBehavior::distance_sleep(ActorId id,
                                                 std::uint16_t distance) {
  try {
    check();
    const auto speed = actors_.actor(id).behavior.movement_speed;
    return speed ? wrap((unsigned(distance) << 8) / speed) : 0xffff;
  } catch (...) {
    failed_ = true;
    throw;
  }
}
} // namespace eb::native
