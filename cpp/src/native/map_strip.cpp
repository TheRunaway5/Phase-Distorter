#include "eb/native/map_strip.hpp"
#include <stdexcept>

namespace eb::native {
MapStrip prepare_map_strip(MapStripAxis axis, std::uint16_t first, std::uint16_t fixed,
                           const TileDescriptorSampler &sample) {
    if (axis != MapStripAxis::Row && axis != MapStripAxis::Column)
        throw std::invalid_argument("Invalid map strip axis");
    const bool row = axis == MapStripAxis::Row;
    const unsigned count = row ? 34 : 30, mask = row ? 63 : 31;
    MapStrip result;
    result.writes.reserve(count);
    auto tile = first;
    for (unsigned i = 0; i < count; ++i) {
        const auto value = row ? sample(tile, fixed) : sample(fixed, tile);
        result.writes.push_back(
            {unsigned(tile) & mask, value, std::uint16_t((value & 0x3ff) < 384 ? value | 0x2000 : 0)});
        ++tile;
    }
    result.next_tile = tile;
    result.next_destination = unsigned(tile) & mask;
    return result;
}
} // namespace eb::native
