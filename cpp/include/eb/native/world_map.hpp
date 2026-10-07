#pragma once

#include "eb/game_version.hpp"
#include <array>
#include <cstdint>
#include <memory>
#include <span>
#include <vector>

namespace eb::native {

struct WorldMapLayout {
    std::array<std::uint32_t, 10> block_chunks;
    std::uint32_t sectors, sector_attributes, tileset_mapping;
    std::uint32_t graphics, arrangements, collision_pointers, collision_patterns, collision_patterns_end;
    std::uint32_t event_pointers, animation_graphics, animation_properties;
    unsigned tilesets = 20;
};
WorldMapLayout world_map_layout(GameVersion version);

using MapGraphic = std::array<std::uint8_t, 64>;
struct MapTile {
    // Authored palette bits 0..7; scenery palettes 2..7 map to
    // AreaPalettes.scenery[palette-2]. Color index0 stays transparent.
    unsigned graphic{}, palette{};
    bool priority{}, flip_x{}, flip_y{};
    bool operator==(const MapTile &) const = default;
};
struct MapBlock {
    std::array<MapTile, 16> tiles;
    std::array<std::uint8_t, 16> collision;
    bool operator==(const MapBlock &) const = default;
};
struct MapSector {
    unsigned combination{}, tileset{}, palette{};
    std::uint16_t attributes{};
};
// Ordinary overworld composition: Base low/high priorities 6/9; Foreground
// duplicates graphics 0..383 with high priority (layer 8), otherwise descriptor 0.
enum class MapLayer { Base, Foreground };
struct MapPixel {
    std::uint8_t index{}, palette{};
    bool priority{};
    bool operator==(const MapPixel &) const = default;
};
struct MapAnimation {
    unsigned destination_tile{};
    std::uint16_t frame_delay{};
    std::vector<std::vector<MapGraphic>> frames;
};
struct MapEventReplacement {
    unsigned event_flag{};
    bool when_set{};
    // Applied sequentially: later replacements may copy an earlier result.
    std::vector<std::array<unsigned, 2>> blocks;
};
struct MapTileset {
    std::vector<MapGraphic> graphics;
    std::vector<MapBlock> blocks;
    std::vector<MapEventReplacement> replacements;
    std::vector<MapAnimation> animations;
    // Exact LOAD_TILESET_ANIM decompression result. This includes bytes not
    // referenced by animation tracks; the live loader retains the unwritten
    // tail of its shared animation staging buffer across map changes.
    std::vector<std::uint8_t> animation_bytes;
};

class WorldMapArea;
// Owns only imported map content: an 8192x10240-pixel map, 32x80 sectors,
// 256x320 blocks, indexed artwork, collision and authored event/animation data.
// Import copies/decodes the declared content; no borrowed image or runtime
// memory, hardware graphics state, processor or source allocator remains.
class WorldMap {
  public:
    WorldMap(std::span<const std::uint8_t> assets, WorldMapLayout layout);
    // Sector indices (256x128 pixels), block indices (32x32 pixels).
    const MapSector &sector(unsigned x, unsigned y) const;
    unsigned block_id(unsigned x, unsigned y) const;
    unsigned tileset_count() const;
    const MapTileset &tileset(unsigned id) const;
    // Event bits are native read-only state, numbered one-based as authored.
    // Rebuild from base content when flags change; preparation never sets flags,
    // activates actors, consumes randomness or advances animation.
    WorldMapArea prepare(unsigned combination, std::span<const std::uint8_t> event_flags) const;

  private:
    friend class WorldMapArea;
    struct State;
    std::shared_ptr<const State> state_;
};

// Host-owned active scenery. Independent areas share immutable imported data;
// each owns its event-resolved blocks and explicit logic-tick animation state.
// Sampling does not advance anything. Outside this combination/map, authored
// block zero supplies the border, matching source map loading policy.
class WorldMapArea {
  public:
    unsigned combination() const { return combination_; }
    unsigned tileset_id() const { return tileset_; }
    const std::vector<MapGraphic> &graphics() const { return graphics_; }
    const std::vector<MapBlock> &blocks() const { return blocks_; }
    // Tile/collision coordinates are 8-pixel cells; pixel coordinates are world pixels.
    MapTile tile(int tile_x, int tile_y, MapLayer layer = MapLayer::Base) const;
    std::uint8_t collision(int tile_x, int tile_y) const;
    // Event-resolved selector used by the actual retained collision window.
    unsigned collision_block(int tile_x,int tile_y) const {return block_at(tile_x,tile_y);}
    MapPixel pixel(int world_x, int world_y, MapLayer layer = MapLayer::Base) const;
    // Event-only arrangement/collision refresh. Reapply ordered rules from
    // authored base without resetting current artwork or animation clocks.
    // Invalid/missing flag storage leaves the complete active area unchanged.
    void reprepare_events(std::span<const std::uint8_t> event_flags);
    // Advances authored animation once, returning whether artwork changed.
    // The game world calls this at logic rate, separately from presentation.
    bool advance_animation();
    // LOAD_TILESET_ANIM resets its counters without rewriting artwork. A
    // same-combination map load keeps the last displayed animation frame until
    // the newly reset delay expires. Event-resolved blocks also remain intact.
    void reset_animation() noexcept;
    bool animation_active() const { return !clocks_.empty(); }

  private:
    friend class WorldMap;
    struct Clock { std::uint16_t remaining{}; unsigned frame{}; };
    WorldMapArea(std::shared_ptr<const WorldMap::State> data, unsigned combination,
                 std::span<const std::uint8_t> event_flags);
    unsigned block_at(int tile_x, int tile_y) const;
    std::shared_ptr<const WorldMap::State> data_;
    unsigned combination_{}, tileset_{};
    std::vector<MapBlock> blocks_;
    std::vector<MapGraphic> graphics_;
    std::vector<Clock> clocks_;
};
} // namespace eb::native
