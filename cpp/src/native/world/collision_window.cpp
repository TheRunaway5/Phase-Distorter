#include "eb/native/world/collision_window.hpp"
#include <bit>
#include <stdexcept>
namespace eb::native {
namespace {
std::uint16_t arithmetic_shift(std::uint16_t n, unsigned count) {
  return std::uint16_t(std::bit_cast<std::int16_t>(n) >> count);
}
const MapBlock &block(const WorldMapArea &area, unsigned selector) {
  if (selector >= area.blocks().size())
    throw std::logic_error(
        "Retained collision block exceeds the actual loaded tileset");
  return area.blocks()[selector];
}
} // namespace
void WorldCollisionWindow::map_row(std::uint16_t x, std::uint16_t y,
                                   const WorldMapArea &area) {
  const auto first = arithmetic_shift(x, 2);
  const unsigned row = y >> 2;
  for (unsigned offset = 0; offset < 16; ++offset) {
    const auto column = std::uint16_t(first + offset);
    blocks_[(row & 15) * 16 + (column & 15)] =
        area.collision_block(column * 4, row * 4);
  }
}
void WorldCollisionWindow::map_column(std::uint16_t x, std::uint16_t y,
                                      const WorldMapArea &area) {
  const unsigned column = x >> 2;
  const auto first = arithmetic_shift(y, 2);
  for (unsigned offset = 0; offset < 16; ++offset) {
    const auto row = std::uint16_t(first + offset);
    blocks_[(row & 15) * 16 + (column & 15)] =
        area.collision_block(column * 4, row * 4);
  }
}
void WorldCollisionWindow::collision_row(std::uint16_t y,
                                         const WorldMapArea &area) {
  const unsigned row = (y >> 2) & 15;
  for (unsigned column = 0; column < 16; ++column) {
    const auto &pattern = block(area, blocks_[row * 16 + column]);
    for (unsigned cell = 0; cell < 4; ++cell)
      cells_[(y & 63) * 64 + column * 4 + cell] =
          pattern.collision[(y & 3) * 4 + cell];
  }
}
void WorldCollisionWindow::collision_column(std::uint16_t x,
                                            const WorldMapArea &area) {
  const unsigned column = (x >> 2) & 15;
  for (unsigned row = 0; row < 16; ++row) {
    const auto &pattern = block(area, blocks_[row * 16 + column]);
    for (unsigned cell = 0; cell < 4; ++cell)
      cells_[(row * 4 + cell) * 64 + (x & 63)] =
          pattern.collision[cell * 4 + (x & 3)];
  }
}
void WorldCollisionWindow::load(CameraPosition center,
                                const WorldMapArea &area) {
  const auto x = std::uint16_t((center.x >> 3) - 32),
             y = std::uint16_t((center.y >> 3) - 32);
  // LOAD_MAP_AT_POSITION overwrites sixty rows; the other four retain their
  // real prior block/collision contents through later map changes.
  for (unsigned row = 0; row < 60; ++row)
    map_row(x, std::uint16_t(y + row), area);
  for (unsigned row = 0; row < 60; ++row)
    collision_row(std::uint16_t(y + row), area);
  left_ = std::uint16_t((center.x >> 3) - 16);
  top_ = std::uint16_t((center.y >> 3) - 14);
  initialized_ = true;
}
void WorldCollisionWindow::refresh(CameraPosition camera,
                                   const WorldMapArea &area) {
  if (!initialized_)
    throw std::logic_error(
        "Collision refresh requires its actual loaded map window");
  const auto x = arithmetic_shift(camera.x, 3),
             y = arithmetic_shift(camera.y, 3);
  while (left_ != x) {
    const bool forward = std::uint16_t(left_ - x) & 0x8000;
    left_ = std::uint16_t(left_ + (forward ? 1 : -1));
    const auto column = std::uint16_t(left_ + (forward ? 41 : -16));
    map_column(column, std::uint16_t(y - 16), area);
    collision_column(column, area);
  }
  while (top_ != y) {
    const bool forward = std::uint16_t(top_ - y) & 0x8000;
    top_ = std::uint16_t(top_ + (forward ? 1 : -1));
    const auto row = std::uint16_t(top_ + (forward ? 41 : -16));
    map_row(std::uint16_t(x - 16), row, area);
    collision_row(row, area);
  }
}
std::uint8_t WorldCollisionWindow::sample(CollisionCell cell) const {
  if (!initialized_)
    throw std::logic_error(
        "Collision query requires its actual loaded map window");
  return cells_[(std::uint16_t(cell.y) & 63) * 64 +
                (std::uint16_t(cell.x) & 63)];
}
} // namespace eb::native
