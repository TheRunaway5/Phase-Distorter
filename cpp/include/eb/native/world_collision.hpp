#pragma once

#include "eb/native/world_map.hpp"
#include <array>
#include <cstdint>
#include <functional>
#include <optional>
#include <span>

namespace eb::native {

struct WorldCollisionLayout {
    std::uint32_t anchor_x, anchor_y, width_cells, height_cells, surface_offset_y;
    std::uint32_t probe_x, probe_y;
};
WorldCollisionLayout world_collision_layout(GameVersion version);

struct CollisionPoint {
    // Authored world pixels. Addition/subtraction wraps at 65536, matching
    // ActionActorState's integral position; this is not a screen/cache index.
    std::uint16_t x{}, y{};
    bool operator==(const CollisionPoint &) const = default;
};
struct CollisionCell {
    // Logical 8-pixel map cells. The native map handles out-of-area borders.
    std::uint16_t x{}, y{};
    bool operator==(const CollisionCell &) const = default;
};
// A current collision field supplied by the owning world. The native query
// neither owns a tile cache nor assumes how the field stores its cells.
using CollisionSampler = std::function<std::uint8_t(CollisionCell)>;
struct CollisionShape {
    std::uint16_t anchor_x{}, anchor_y{}, width_cells{}, height_cells{}, surface_offset_y{};
    bool operator==(const CollisionShape &) const = default;
};
enum class CollisionEdge { Top, Bottom, Left, Right };
enum class CollisionDirection : std::uint16_t {
    North, NorthEast, East, SouthEast, South, SouthWest, West, NorthWest, None = 0xffff
};
struct CollisionSample {
    std::uint8_t surface_flags{};
    std::optional<CollisionCell> ladder_stairs;
};
struct CollisionProbes {
    // Bit i describes selected probe i, in the imported six-point order.
    std::uint8_t blocked{}, surface_flags{};
    std::optional<CollisionCell> last_ladder_stairs;
};

// Immutable imported shape/probe content, independent of actors and map caches.
// Queries do not move actors or resolve collisions. All state changes needed by
// a caller (surface accumulation, last ladder hit) are returned explicitly.
class WorldCollision {
  public:
    WorldCollision(std::span<const std::uint8_t> assets, WorldCollisionLayout layout);
    const CollisionShape &shape(unsigned id) const;
    CollisionPoint origin(CollisionPoint anchor, unsigned shape_id) const;
    CollisionSample tile(const WorldMapArea &area, CollisionCell cell) const;
    // Edge arguments use the top-left surface origin. The authored routines
    // sample its first cell, followed by width/height cells from ceil(origin/8).
    // Zero extents still sample one cell; aligned origins sample that cell twice.
    std::uint16_t edge(const WorldMapArea &area, CollisionPoint origin, unsigned shape_id,
                       CollisionEdge edge, std::uint16_t initial_flags = 0) const;
    std::uint16_t edge(const CollisionSampler &sample, CollisionPoint origin, unsigned shape_id,
                       CollisionEdge edge, std::uint16_t initial_flags = 0) const;
    std::uint16_t vertical_surfaces(const CollisionSampler &sample, CollisionPoint anchor,
                                    unsigned shape_id) const;
    std::uint16_t perimeter(const WorldMapArea &area, CollisionPoint anchor, unsigned shape_id,
                            std::uint16_t initial_flags = 0) const;
    std::uint16_t directional_surface(const WorldMapArea &area, CollisionPoint anchor, unsigned shape_id,
                                      CollisionDirection direction) const;
    // Probe origin is supplied explicitly by movement resolution. Only low six
    // selection bits matter. Returned surface flags replace previous flags only
    // when the owning movement operation requests that; no global is updated.
    CollisionProbes probes(const WorldMapArea &area, CollisionPoint origin,
                            std::uint8_t selection = 0x3f) const;

  private:
    std::array<CollisionShape, 17> shapes_{};
    std::array<CollisionPoint, 6> probes_{};
};
} // namespace eb::native
