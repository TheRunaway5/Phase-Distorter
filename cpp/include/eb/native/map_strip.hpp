#pragma once
#include <cstdint>
#include <functional>
#include <vector>

namespace eb::native {
enum class MapStripAxis { Row, Column };
using TileDescriptorSampler = std::function<std::uint16_t(std::uint16_t, std::uint16_t)>;
struct MapStripWrite {
    unsigned destination{};
    std::uint16_t base{}, foreground{};
};
struct MapStrip {
    std::vector<MapStripWrite> writes;
    std::uint16_t next_tile{};
    unsigned next_destination{};
};
// Prepare the authored visible strip, retaining all descriptor palette/flip
// bits. Foreground duplicates graphic indices0..383 with priority set; other
// indices become empty. Sampling is read-only and never publishes graphics.
MapStrip prepare_map_strip(MapStripAxis axis, std::uint16_t first, std::uint16_t fixed,
                           const TileDescriptorSampler &sample);
} // namespace eb::native
