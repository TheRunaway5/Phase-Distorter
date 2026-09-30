#pragma once

#include "eb/native/world_collision.hpp"

namespace eb::native {

struct WorldMovementLayout { std::uint32_t diagonal_probe_masks; };
WorldMovementLayout world_movement_layout(GameVersion version);

struct MovementProbeState {
    CollisionPoint origin;
    std::uint16_t surface_flags{}, surface_write_counter{}, vertical_obstacles{};
    // X=65535 means invalid. Y is retained independently because authored
    // retries/interactions invalidate or restore only the X coordinate.
    CollisionCell ladder_stairs{0xffff,0xffff};
    bool operator==(const MovementProbeState &) const = default;
};
struct MovementSteering {
    // None means no steering suggestion. Blocked is a distinct source result,
    // even when both paths ultimately retain the requested facing direction.
    CollisionDirection direction{CollisionDirection::None};
    bool blocked{};
    bool operator==(const MovementSteering &) const = default;
};
struct MovementProbeResult {
    MovementProbeState state;
    MovementSteering steering;
};
struct MovementRequest {
    CollisionPoint origin;
    CollisionDirection direction{};
    bool pending_interactions{};
    CollisionCell ladder_stairs{0xffff,0xffff};
    std::uint16_t previous_vertical_obstacles{};
};
struct MovementResolution {
    MovementProbeState probes;
    MovementSteering steering;
    CollisionDirection final_direction{};
    std::uint16_t surface_flags{};
    bool redirected{};
};

// Map obstacle/edge steering at the authored six-point collision origin.
// Neither queries nor resolve apply velocity/displacement, trigger interactions,
// or approximate actor/party collisions. The caller owns those later decisions.
class WorldMovement {
  public:
    WorldMovement(std::span<const std::uint8_t> assets, WorldMovementLayout layout);
    MovementProbeResult vertical(const WorldCollision &collision, const WorldMapArea &area,
                                 CollisionDirection direction, MovementProbeState state) const;
    MovementProbeResult horizontal(const WorldCollision &collision, const WorldMapArea &area,
                                   CollisionDirection direction, MovementProbeState state) const;
    MovementProbeResult diagonal(const WorldCollision &collision, const WorldMapArea &area,
                                 CollisionDirection direction, MovementProbeState state) const;
    MovementResolution resolve(const WorldCollision &collision, const WorldMapArea &area,
                               MovementRequest request) const;

  private:
    std::array<std::uint8_t,4> diagonal_masks_{};
};
} // namespace eb::native
