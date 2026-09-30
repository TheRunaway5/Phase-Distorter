#pragma once

#include "eb/native/world_collision.hpp"

namespace eb::native {
// Persistent navigation outputs shared by walking and door transitions. The
// temporary surface origin/flags remain in the actual InteractionState.
struct WorldNavigationState {
  std::uint16_t stairs_direction{}, using_door{};
  std::uint16_t surface_write_counter{}, vertical_obstacles{},
      final_direction{};
  CollisionCell ladder_stairs{0xffff, 0xffff};
};
} // namespace eb::native
