#pragma once
#include "eb/native/npcs/interaction.hpp"
#include "eb/native/world_enemies.hpp"
#include "eb/native/world_enemy_movement.hpp"

namespace eb::native {
// Ordinary authored enemy decisions. Existing actors/tasks retain all live
// geometry, flags, enemy identity, weakness and party data. This service never
// advances time, physics, RNG, task cursors or a second copy of world state.
class WorldEnemyBehavior {
public:
  WorldEnemyBehavior(const EnemyMovementData &, const GeneratedInputData &,
                     ActorWorld &, const WorldEnemies &, const party::State &,
                     const npcs::InteractionState &);
  WorldEnemyBehavior(const WorldEnemyBehavior &) = delete;
  WorldEnemyBehavior &operator=(const WorldEnemyBehavior &) = delete;
  std::uint16_t distance_band(ActorId, bool short_range = false);
  std::uint16_t capture_leader_target(ActorId);
  std::uint16_t party_level_sum();
  bool should_flee(ActorId);
  std::uint16_t chase_angle(ActorId);
  std::uint16_t set_velocity(ActorId, std::uint16_t angle);
  std::uint16_t set_moving_direction(ActorId, std::uint16_t angle);
  // The caller installs the returned count on the requesting task itself.
  // Zero speed preserves the source division-by-zero quotient (low FFFF).
  std::uint16_t distance_sleep(ActorId, std::uint16_t distance);
  bool failed() const noexcept { return failed_; }
  bool uses(const ActorWorld &, const WorldEnemies &, const party::State &,
            const npcs::InteractionState &) const noexcept;
  bool uses(const EnemyMovementData &,
            const GeneratedInputData &) const noexcept;
  bool uses(const WorldEnemyMovement &movement) const noexcept {
    return movement.uses(movement_, angles_);
  }

private:
  void check() const;
  std::uint16_t level_sum() const;
  bool flee(ActorId) const;
  const EnemyMovementData &movement_;
  const GeneratedInputData &angles_;
  ActorWorld &actors_;
  const WorldEnemies &enemies_;
  const party::State &party_;
  const npcs::InteractionState &leader_;
  bool failed_{};
};
} // namespace eb::native
