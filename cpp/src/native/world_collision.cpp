#include "eb/native/world_collision.hpp"
#include <stdexcept>

namespace eb::native {
namespace {
std::uint16_t wrap(unsigned value) { return std::uint16_t(value); }
std::uint16_t cell(std::uint16_t pixel) { return pixel >> 3; }
std::uint16_t ceiling_cell(std::uint16_t pixel) { return cell(wrap(unsigned(pixel) + 7)); }
}

WorldCollisionLayout world_collision_layout(GameVersion version) {
    const unsigned delta = version == GameVersion::JP ? 0xc2 : 0;
    return {0x42a1f - delta, 0x42a41 - delta, 0x42aa7 - delta, 0x42ac9 - delta,
            0x42aeb - delta, 0x200b9, 0x200c5};
}

WorldCollision::WorldCollision(std::span<const std::uint8_t> assets, WorldCollisionLayout layout) {
    const auto word = [&](std::size_t at) -> std::uint16_t {
        if (at >= assets.size() || assets.size() - at < 2)
            throw std::runtime_error("Truncated world collision content");
        return assets[at] | std::uint16_t(assets[at + 1]) << 8;
    };
    for (unsigned i = 0; i < shapes_.size(); ++i) {
        const unsigned offset = i * 2;
        shapes_[i] = {word(std::size_t(layout.anchor_x) + offset), word(std::size_t(layout.anchor_y) + offset),
                      word(std::size_t(layout.width_cells) + offset), word(std::size_t(layout.height_cells) + offset),
                      word(std::size_t(layout.surface_offset_y) + offset)};
    }
    for (unsigned i = 0; i < probes_.size(); ++i)
        probes_[i] = {word(std::size_t(layout.probe_x) + i * 2), word(std::size_t(layout.probe_y) + i * 2)};
}

const CollisionShape &WorldCollision::shape(unsigned id) const {
    if (id >= shapes_.size()) throw std::out_of_range("Unknown world collision shape");
    return shapes_[id];
}
CollisionPoint WorldCollision::origin(CollisionPoint anchor, unsigned id) const {
    const auto &s = shape(id);
    return {wrap(unsigned(anchor.x) - s.anchor_x),
            wrap(unsigned(anchor.y) - s.anchor_y + s.surface_offset_y)};
}
CollisionSample WorldCollision::tile(const WorldMapArea &area, CollisionCell position) const {
    const auto flags = area.collision(position.x, position.y);
    return {flags, (flags & 0x10) ? std::optional(position) : std::nullopt};
}
std::uint16_t WorldCollision::edge(const WorldMapArea &area, CollisionPoint at, unsigned id,
                                  CollisionEdge side, std::uint16_t flags) const {
    return edge([&](CollisionCell p) { return area.collision(p.x, p.y); }, at, id, side, flags);
}
std::uint16_t WorldCollision::edge(const CollisionSampler &read, CollisionPoint at, unsigned id,
                                  CollisionEdge side, std::uint16_t flags) const {
    const auto &s = shape(id);
    std::uint16_t first{}, next{}, fixed{};
    unsigned count{};
    bool horizontal{};
    switch (side) {
    case CollisionEdge::Top:
    case CollisionEdge::Bottom:
        horizontal = true;
        first = cell(at.x); next = ceiling_cell(at.x); count = s.width_cells;
        fixed = cell(side == CollisionEdge::Top ? at.y : wrap(unsigned(at.y) + s.height_cells * 8u - 1));
        break;
    case CollisionEdge::Left:
    case CollisionEdge::Right:
        first = cell(at.y); next = ceiling_cell(at.y); count = s.height_cells;
        fixed = cell(side == CollisionEdge::Left ? at.x : wrap(unsigned(at.x) + s.width_cells * 8u - 1));
        break;
    default: throw std::invalid_argument("Invalid collision edge");
    }
    const auto sample = [&](std::uint16_t variable) {
        return read(horizontal ? CollisionCell{variable, fixed} : CollisionCell{fixed, variable});
    };
    flags |= sample(first);
    for (unsigned i = 0; i < count; ++i) {
        flags |= sample(next);
        // Edge coordinates originate in unsigned16 pixels. Crossing its last
        // eight-pixel cell returns to pixel zero, rather than sampling an
        // unrepresentable pixel65536. Keep ordinary world cells distinct from
        // the source's smaller display/cache ring.
        next = std::uint16_t((unsigned(next) + 1) & 0x1fffu);
    }
    return flags;
}
std::uint16_t WorldCollision::vertical_surfaces(const CollisionSampler &sample, CollisionPoint anchor,
                                              unsigned id) const {
    const auto at = origin(anchor, id);
    return edge(sample, at, id, CollisionEdge::Right,
                edge(sample, at, id, CollisionEdge::Left));
}
std::uint16_t WorldCollision::perimeter(const WorldMapArea &area, CollisionPoint anchor, unsigned id,
                                       std::uint16_t flags) const {
    const auto at = origin(anchor, id);
    for (auto side : {CollisionEdge::Top, CollisionEdge::Bottom, CollisionEdge::Left, CollisionEdge::Right})
        flags = edge(area, at, id, side, flags);
    return flags;
}
std::uint16_t WorldCollision::directional_surface(const WorldMapArea &area, CollisionPoint anchor, unsigned id,
                                                 CollisionDirection direction) const {
    const auto at = origin(anchor, id);
    std::uint16_t flags = 0;
    const auto add = [&](CollisionEdge side) { flags = edge(area, at, id, side, flags); };
    switch (direction) {
    case CollisionDirection::North: add(CollisionEdge::Top); break;
    case CollisionDirection::NorthEast: add(CollisionEdge::Right); add(CollisionEdge::Top); break;
    case CollisionDirection::East: add(CollisionEdge::Right); break;
    case CollisionDirection::SouthEast: add(CollisionEdge::Bottom); add(CollisionEdge::Right); break;
    case CollisionDirection::South: add(CollisionEdge::Bottom); break;
    case CollisionDirection::SouthWest: add(CollisionEdge::Left); add(CollisionEdge::Bottom); break;
    case CollisionDirection::West: add(CollisionEdge::Left); break;
    case CollisionDirection::NorthWest: add(CollisionEdge::Top); add(CollisionEdge::Left); break;
    case CollisionDirection::None: break;
    default: throw std::invalid_argument("Invalid collision direction");
    }
    return flags;
}
CollisionProbes WorldCollision::probes(const WorldMapArea &area, CollisionPoint at, std::uint8_t selection) const {
    CollisionProbes result;
    for (unsigned i = 0; i < probes_.size(); ++i) {
        if (!(selection & (1u << i))) continue;
        const auto point = probes_[i];
        const auto hit = tile(area, {cell(wrap(unsigned(at.x) + point.x)), cell(wrap(unsigned(at.y) + point.y))});
        result.surface_flags |= hit.surface_flags;
        if (hit.surface_flags & 0xc0) result.blocked |= 1u << i;
        if (hit.ladder_stairs) result.last_ladder_stairs = hit.ladder_stairs;
    }
    return result;
}
} // namespace eb::native
