#pragma once
#include "eb/native/world_activation.hpp"
#include "eb/native/world_collision.hpp"
#include "eb/native/world_map.hpp"
namespace eb::native {
// The source map loader retains sixteen by sixteen block selectors and a
// sixty-four by sixty-four collision window. Queries wrap within that actual
// window even when a cinematic actor leaves the camera's loaded area.
class WorldCollisionWindow {
public:
  void load(CameraPosition center, const WorldMapArea &);
  void refresh(CameraPosition camera, const WorldMapArea &);
  std::uint8_t sample(CollisionCell) const;
  bool initialized() const noexcept { return initialized_; }
  const auto &blocks() const noexcept { return blocks_; }
  const auto &cells() const noexcept { return cells_; }

private:
  void map_row(std::uint16_t, std::uint16_t, const WorldMapArea &);
  void map_column(std::uint16_t, std::uint16_t, const WorldMapArea &);
  void collision_row(std::uint16_t, const WorldMapArea &);
  void collision_column(std::uint16_t, const WorldMapArea &);
  std::array<std::uint16_t, 256> blocks_{};
  std::array<std::uint8_t, 4096> cells_{};
  std::uint16_t left_{}, top_{};
  bool initialized_{};
};
} // namespace eb::native
