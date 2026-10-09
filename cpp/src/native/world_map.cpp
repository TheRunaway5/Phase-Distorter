#include "eb/native/world_map.hpp"
#include "eb/native/content_compression.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native {
namespace {
struct Content {
    std::span<const std::uint8_t> bytes;
    std::span<const std::uint8_t> slice(std::size_t at, std::size_t n) const {
        if (at > bytes.size() || n > bytes.size() - at)
            throw std::runtime_error("Truncated world map content");
        return bytes.subspan(at, n);
    }
    unsigned byte(std::size_t at) const { return slice(at, 1)[0]; }
    unsigned word(std::size_t at) const { return byte(at) | byte(at + 1) << 8; }
    unsigned pointer(std::size_t at) const {
        const auto b = slice(at, 4);
        const unsigned value = b[0] | unsigned(b[1]) << 8 | unsigned(b[2]) << 16 | unsigned(b[3]) << 24;
        if (value < 0xc00000 || value >= 0xf00000)
            throw std::runtime_error("World map references non-content storage");
        return value - 0xc00000;
    }
};

std::vector<MapGraphic> decode_graphics(std::span<const std::uint8_t> bytes) {
    if (bytes.size() % 32)
        throw std::runtime_error("Misaligned map graphic payload");
    std::vector<MapGraphic> result(bytes.size() / 32);
    for (unsigned tile = 0; tile < result.size(); ++tile)
        for (unsigned y = 0; y < 8; ++y)
            for (unsigned x = 0; x < 8; ++x)
                for (unsigned plane = 0; plane < 4; ++plane)
                    result[tile][y * 8 + x] |=
                        ((bytes[tile * 32 + y * 2 + (plane / 2) * 16 + (plane & 1)] >> (7 - x)) & 1) << plane;
    return result;
}
MapTile tile_word(unsigned word) {
    return {word & 1023, (word >> 10) & 7, bool(word & 0x2000), bool(word & 0x4000), bool(word & 0x8000)};
}
bool flag(std::span<const std::uint8_t> flags, unsigned id) {
    if (!id || (id - 1) / 8 >= flags.size())
        throw std::out_of_range("Missing native map event flag state");
    return flags[(id - 1) / 8] & (1u << ((id - 1) & 7));
}
int tile_coordinate(int pixel) { return int((std::int64_t(pixel) - (pixel < 0 ? 7 : 0)) / 8); }
} // namespace

WorldMapLayout world_map_layout(GameVersion version) {
    const bool jp = version == GameVersion::JP;
    return {{0x160000, 0x162800, 0x165000, 0x168000, 0x16a800, 0x16d000, 0x170000, 0x172800,
             0x175000, 0x178000},
            0x17a800, 0x17b200, jp ? 0x2f621du : 0x2f101bu,
            jp ? 0x2f625du : 0x2f105bu, jp ? 0x2f62adu : 0x2f10abu,
            jp ? 0x2f637du : 0x2f117bu, 0x180000, 0x188f50, 0x101598,
            jp ? 0x2f63cdu : 0x2f11cbu, jp ? 0x2f641du : 0x2f121bu, 20};
}
struct WorldMap::State {
    std::array<unsigned, 32> mappings{};
    std::array<MapSector, 32 * 80> sectors{};
    std::array<unsigned, 256 * 320> blocks{};
    std::vector<MapTileset> tilesets;
};

WorldMap::WorldMap(std::span<const std::uint8_t> assets, WorldMapLayout layout) {
    auto data = std::make_shared<State>();
    const Content content{assets};
    if (!layout.tilesets || layout.tilesets > 32 || layout.collision_patterns_end <= layout.collision_patterns)
        throw std::invalid_argument("Invalid world map layout");
    const auto collision_patterns = content.slice(layout.collision_patterns,
                                                  layout.collision_patterns_end - layout.collision_patterns);
    for (unsigned id = 0; id < layout.tilesets; ++id) {
        MapTileset set;
        const auto art = decompress_content(content.bytes, content.pointer(layout.graphics + id * 4), 0x7001);
        if (art.size() < 0x7000)
            throw std::runtime_error("Incomplete map graphics");
        // The compressed stream includes one extra byte after its 896 tiles;
        // that byte is not part of the authored map graphic payload.
        set.graphics = decode_graphics(std::span(art).first(0x7000));
        set.graphics_bytes = art;
        const auto raw = decompress_content(content.bytes, content.pointer(layout.arrangements + id * 4), 960 * 32);
        if (raw.empty() || raw.size() % 32)
            throw std::runtime_error("Invalid map arrangement payload");
        const Content arrangement{raw};
        set.blocks.resize(raw.size() / 32);
        const unsigned collisions = content.pointer(layout.collision_pointers + id * 4);
        content.slice(collisions, 960 * 2);
        for(unsigned index=0;index<set.collision_offsets.size();++index)
            set.collision_offsets[index]=content.word(collisions+index*2);
        for (unsigned block = 0; block < set.blocks.size(); ++block) {
            const unsigned collision = set.collision_offsets[block];
            if (collision > collision_patterns.size() || 16 > collision_patterns.size() - collision)
                throw std::runtime_error("Invalid map collision pattern");
            std::copy_n(collision_patterns.begin() + collision, 16, set.blocks[block].collision.begin());
            for (unsigned tile = 0; tile < 16; ++tile) {
                auto entry = tile_word(arrangement.word(block * 32 + tile * 2));
                if (entry.graphic >= set.graphics.size())
                    throw std::runtime_error("Map arrangement references missing artwork");
                set.blocks[block].tiles[tile] = entry;
            }
        }
        unsigned event = (layout.event_pointers & 0xff0000u) + content.word(layout.event_pointers + id * 2);
        for (unsigned rules = 0;; ++rules) {
            const unsigned condition = content.word(event);
            event += 2;
            if (!condition)
                break;
            if (rules >= 1024 || !(condition & 0x7fff))
                throw std::runtime_error("Invalid map event replacement list");
            MapEventReplacement replacement{condition & 0x7fff, bool(condition & 0x8000), {}};
            const unsigned count = content.word(event);
            event += 2;
            content.slice(event, std::size_t(count) * 4);
            for (unsigned pair = 0; pair < count; ++pair) {
                const unsigned to = content.word(event), from = content.word(event + 2);
                event += 4;
                if (to >= set.blocks.size() || from >= set.blocks.size())
                    throw std::runtime_error("Map event references missing arrangement");
                replacement.blocks.push_back({to, from});
            }
            set.replacements.push_back(std::move(replacement));
        }
        unsigned properties = content.pointer(layout.animation_properties + id * 4);
        const unsigned count = content.byte(properties++);
        if (count > 64)
            throw std::runtime_error("Too many map animation tracks");
        if (count) {
            set.animation_bytes = decompress_content(content.bytes, content.pointer(layout.animation_graphics + id * 4), 8192);
            const auto &animated = set.animation_bytes;
            for (unsigned track = 0; track < count; ++track) {
                const unsigned frames = content.byte(properties), delay = content.byte(properties + 1),
                               size = content.word(properties + 2), source = content.word(properties + 4),
                               destination = content.word(properties + 6);
                properties += 8;
                if (!frames || !size || size % 32 || source % 32 || destination % 16 ||
                    source > animated.size() || frames * size > animated.size() - source ||
                    destination * 2 + size > 0x7000)
                    throw std::runtime_error("Invalid map animation frame range");
                MapAnimation animation{destination / 16, std::uint16_t(delay), {}};
                for (unsigned frame = 0; frame < frames; ++frame)
                    animation.frames.push_back(decode_graphics(std::span(animated).subspan(source + frame * size, size)));
                set.animations.push_back(std::move(animation));
            }
        }
        data->tilesets.push_back(std::move(set));
    }
    for (unsigned combination = 0; combination < data->mappings.size(); ++combination) {
        data->mappings[combination] = content.word(layout.tileset_mapping + combination * 2);
        if (data->mappings[combination] >= data->tilesets.size())
            throw std::runtime_error("Invalid map tileset combination");
    }
    for (unsigned i = 0; i < data->sectors.size(); ++i) {
        const unsigned value = content.byte(layout.sectors + i);
        data->sectors[i] = {value >> 3, data->mappings[value >> 3], value & 7,
                           std::uint16_t(content.word(layout.sector_attributes + i * 2))};
    }
    for (unsigned y = 0; y < 320; ++y)
        for (unsigned x = 0; x < 256; ++x) {
            const unsigned index = (y >> 3) * 256 + x;
            const unsigned high = content.byte(layout.block_chunks[y & 4 ? 9 : 8] + index);
            const unsigned block = content.byte(layout.block_chunks[y & 7] + index) |
                                   (((high >> ((y & 3) * 2)) & 3) << 8);
            const auto &sector = data->sectors[(y / 4) * 32 + x / 8];
            if (block >= data->tilesets[sector.tileset].blocks.size())
                throw std::runtime_error("World map references missing arrangement");
            data->blocks[y * 256 + x] = block;
        }
    state_ = std::move(data);
}
const MapSector &WorldMap::sector(unsigned x, unsigned y) const {
    if (x >= 32 || y >= 80)
        throw std::out_of_range("World map sector outside map");
    return state_->sectors[y * 32 + x];
}
unsigned WorldMap::block_id(unsigned x, unsigned y) const {
    if (x >= 256 || y >= 320)
        throw std::out_of_range("World map block outside map");
    return state_->blocks[y * 256 + x];
}
unsigned WorldMap::tileset_count() const { return unsigned(state_->tilesets.size()); }
const MapTileset &WorldMap::tileset(unsigned id) const { return state_->tilesets.at(id); }
WorldMapArea WorldMap::prepare(unsigned combination, std::span<const std::uint8_t> event_flags) const {
    return WorldMapArea(state_, combination, event_flags);
}
WorldMapArea::WorldMapArea(std::shared_ptr<const WorldMap::State> data, unsigned combination,
                         std::span<const std::uint8_t> flags)
    : data_(std::move(data)), combination_(combination), tileset_(data_->mappings.at(combination)),
      animation_tileset_(tileset_) {
    const auto &set = data_->tilesets[tileset_];
    graphics_ = set.graphics;
    reprepare_events(flags);
    for (const auto &animation : set.animations)
        clocks_.push_back({animation.frame_delay, 0});
}
void WorldMapArea::reprepare_events(std::span<const std::uint8_t> flags) {
    const auto &set = data_->tilesets[tileset_];
    auto blocks = set.blocks;
    auto offsets = set.collision_offsets;
    for (const auto &replacement : set.replacements)
        if (flag(flags, replacement.event_flag) == replacement.when_set)
            for (const auto &[to, from] : replacement.blocks) {
                blocks[to] = blocks[from];
                offsets[to] = offsets[from];
            }
    blocks_.swap(blocks);
    collision_offsets_=offsets;
}
unsigned WorldMapArea::block_at(int x, int y) const {
    if (x < 0 || x >= 1024 || y < 0 || y >= 1280 ||
        data_->sectors[(unsigned(y) / 16) * 32 + unsigned(x) / 32].combination != combination_)
        return 0;
    return data_->blocks[(unsigned(y) / 4) * 256 + unsigned(x) / 4];
}
MapTile WorldMapArea::tile(int x, int y, MapLayer layer) const {
    const auto entry = blocks_[block_at(x, y)].tiles[(unsigned(y) & 3) * 4 + (unsigned(x) & 3)];
    switch (layer) {
    case MapLayer::Base:
        return entry;
    case MapLayer::Foreground:
        return entry.graphic < 384 ? MapTile{entry.graphic, entry.palette, true, entry.flip_x, entry.flip_y}
                                   : MapTile{};
    }
    throw std::invalid_argument("Invalid map layer");
}
std::uint8_t WorldMapArea::collision(int x, int y) const {
    return blocks_[block_at(x, y)].collision[(unsigned(y) & 3) * 4 + (unsigned(x) & 3)];
}
MapPixel WorldMapArea::pixel(int x, int y, MapLayer layer) const {
    const auto entry = tile(tile_coordinate(x), tile_coordinate(y), layer);
    const unsigned px = unsigned(x) & 7, py = unsigned(y) & 7;
    return {graphics_[entry.graphic][(entry.flip_y ? 7 - py : py) * 8 + (entry.flip_x ? 7 - px : px)],
            std::uint8_t(entry.palette), entry.priority};
}
bool WorldMapArea::advance_animation() {
    bool changed = false;
    const auto &animations = data_->tilesets[animation_tileset_].animations;
    for (unsigned i = 0; i < animations.size(); ++i) {
        auto &clock = clocks_[i];
        if (--clock.remaining)
            continue;
        const auto &animation = animations[i];
        clock.remaining = animation.frame_delay;
        if (clock.frame == animation.frames.size())
            clock.frame = 0;
        const auto &frame = animation.frames[clock.frame++];
        std::copy(frame.begin(), frame.end(), graphics_.begin() + animation.destination_tile);
        changed = true;
    }
    return changed;
}
void WorldMapArea::reset_animation() noexcept {
    const auto &animations = data_->tilesets[animation_tileset_].animations;
    for (unsigned i = 0; i < animations.size(); ++i)
        clocks_[i] = {animations[i].frame_delay, 0};
}
WorldMapArea WorldMapArea::prepare_photograph(unsigned combination,
    std::span<const std::uint8_t> flags, bool preserve_artwork) const {
    if(preserve_artwork && combination!=combination_)
        throw std::invalid_argument("Retained photograph artwork has another combination");
    auto result=WorldMapArea(data_,combination,flags);
    if(preserve_artwork)result.graphics_=graphics_;
    // Photo LOAD_MAP_AT_SECTOR omits LOAD_TILESET_ANIM. Its previously loaded
    // animation sequence remains retained even when the scenery changes.
    result.animation_tileset_=animation_tileset_;
    result.clocks_=clocks_;
    return result;
}
} // namespace eb::native
