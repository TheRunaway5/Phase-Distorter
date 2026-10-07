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
  // GET_DIRECTION_FROM_PLAYER_TO_ENTITY reads the live leader coordinates.
  // Despite its name the source DIRECTION_MATRIX points entity -> leader.
  std::uint16_t direction_from_leader(ActorId);
  std::uint16_t party_level_sum();
  bool should_flee(ActorId);
  std::uint16_t chase_angle(ActorId);
  // Scripted NPC movement uses the same authored angle/velocity tables,
  // without the enemy flee decision. Targets are live vars6/7; var5 is range.
  std::uint16_t target_angle(ActorId);
  bool target_reached(ActorId);
  // C46984 faces the first retained NPC role toward the actual current actor.
  // Its pose upload has an incidental return; caller must prove it unused.
  void face_npc_toward_actor(ActorId current, std::uint16_t npc);
  // C469F1 selects the first retained numeric sprite role before the same
  // angle and pose producer. Its incidental return must also be unused.
  void face_sprite_toward_actor(ActorId current, std::uint16_t sprite);
  void bind_peripherals(PeripheralState&);
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
  void face_role_toward_actor(ActorId current, unsigned role);
  const EnemyMovementData &movement_;
  const GeneratedInputData &angles_;
  ActorWorld &actors_;
  const WorldEnemies &enemies_;
  const party::State &party_;
  const npcs::InteractionState &leader_;
  PeripheralState* peripherals_{};
  bool failed_{};
};
} // namespace eb::native
