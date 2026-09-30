#pragma once

#include "eb/native/world_generated_input.hpp"
#include "eb/native/world_pathfinding.hpp"

namespace eb::native {
class WorldBattleEntry;
// Imported authored angle components, including the original table's slight
// quadrant asymmetries. No trigonometric approximation or eight-way substitute.
class EnemyMovementData {
public:
  EnemyMovementData(std::span<const std::uint8_t>, GameVersion);
  GameVersion version() const noexcept { return version_; }
  std::array<std::uint16_t, 2> components(std::uint16_t angle,
                                          std::uint16_t speed) const noexcept;
  std::array<std::uint32_t, 2> velocity(std::uint16_t angle,
                                        std::uint16_t speed) const noexcept;

private:
  GameVersion version_;
  std::array<std::uint16_t, 64> x_{}, y_{};
};

// Actual enemy path-follow callback and script waypoint command. The caller
// runs this at the existing actor tick/script phase; normal actor physics later
// integrates its velocities. This never ticks an actor, advances input or time,
// changes collision results, or owns a second path-state/count/cursor copy.
class WorldEnemyMovement {
public:
  WorldEnemyMovement(const EnemyMovementData &, const GeneratedInputData &,
                     ActorWorld &, WorldPathfinding &, const WorldCollision &);
  WorldEnemyMovement(const WorldEnemyMovement &) = delete;
  WorldEnemyMovement &operator=(const WorldEnemyMovement &) = delete;
  void tick(ActorId);
  bool consume_waypoint(ActorId);
  bool uses(const WorldBattleEntry &) const noexcept;
  bool uses(const EnemyMovementData &data,
            const GeneratedInputData &angles) const noexcept {
    return &data_ == &data && &angles_ == &angles;
  }
  bool failed() const noexcept { return failed_ || paths_.failed(); }
  bool uses(const ActorWorld &, const WorldPathfinding &,
            const WorldCollision &) const noexcept;
  bool uses(const ActorWorld &, const WorldCollision &, const WorldMapArea &,
            const WorldPartyState &, const party::State &) const noexcept;

private:
  void check() const;
  CollisionPoint target(ActorId, unsigned shape) const;
  const EnemyMovementData &data_;
  const GeneratedInputData &angles_;
  ActorWorld &actors_;
  WorldPathfinding &paths_;
  const WorldCollision &collision_;
  bool failed_{};
};
} // namespace eb::native
