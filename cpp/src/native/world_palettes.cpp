#include "eb/native/world_palettes.hpp"
#include <algorithm>
#include <map>
#include <stdexcept>
#include <vector>

namespace eb::native {
namespace {
using IndexedPalette = std::array<std::uint16_t, 16>;
using MapColors = std::array<std::uint16_t, 96>;
struct Content {
    std::span<const std::uint8_t> bytes;
    std::span<const std::uint8_t> slice(std::size_t offset, std::size_t length) const {
        if (offset > bytes.size() || length > bytes.size() - offset)
            throw std::runtime_error("Truncated world palette content");
        return bytes.subspan(offset, length);
    }
    unsigned word(std::size_t offset) const {
        const auto value = slice(offset, 2);
        return value[0] | unsigned(value[1]) << 8;
    }
    unsigned pointer(std::size_t offset) const {
        const auto value = slice(offset, 4);
        const unsigned address = value[0] | unsigned(value[1]) << 8 | unsigned(value[2]) << 16 |
                                 unsigned(value[3]) << 24;
        if (address < 0xc00000 || address >= 0xf00000)
            throw std::runtime_error("Invalid world palette content pointer");
        return address - 0xc00000;
    }
};
std::uint32_t argb(unsigned value) {
    const auto channel = [](unsigned v) { return (v << 3) | (v >> 2); };
    return 0xff000000u | channel(value & 31) << 16 | channel((value >> 5) & 31) << 8 |
           channel((value >> 10) & 31);
}
unsigned quotient(unsigned numerator, unsigned denominator) {
    // The authored palette arithmetic saturates an undefined ratio. That
    // prevents applying ambient tint when no reference channel is available.
    return denominator ? numerator / denominator : 65535;
}
std::array<unsigned, 3> average(const MapColors &colors) {
    unsigned count = 0;
    std::array<unsigned, 3> sum{};
    // The source average includes the encoded control words in transparent
    // entries. Keep those inputs for tint arithmetic, but never draw them.
    for (const auto color : colors) {
        if (!(color & 0x7fff))
            continue;
        ++count;
        for (unsigned channel = 0; channel < 3; ++channel)
            sum[channel] += (color >> (channel * 5)) & 31;
    }
    for (auto &channel : sum)
        channel = quotient(channel * 8, count);
    return sum;
}
bool flag(std::span<const std::uint8_t> flags, unsigned id) {
    if (!id)
        return false;
    if ((id - 1) / 8 >= flags.size())
        throw std::invalid_argument("Missing area palette event flag");
    return (flags[(id - 1) / 8] & (1u << ((id - 1) & 7))) != 0;
}
} // namespace

namespace {
std::uint16_t raw_color(std::uint32_t argb, unsigned high) {
    return std::uint16_t(((argb >> 19) & 31) | ((argb >> 11) & 31) << 5 |
                         ((argb >> 3) & 31) << 10 | (high & 1) << 15);
}
}
std::uint16_t AreaPalettes::scenery_word(unsigned palette, unsigned color) const {
    const auto value=scenery.at(palette).at(color);
    return color ? raw_color(value, scenery_high_bits.at(palette) >> color) : scenery_zero.at(palette);
}
std::uint16_t AreaPalettes::sprite_word(unsigned palette, unsigned color) const {
    const auto value=sprites.at(palette).at(color);
    return color ? raw_color(value, sprite_high_bits.at(palette) >> color) : sprite_zero.at(palette);
}
WorldPaletteLayout world_palette_layout(GameVersion version) {
    // SPRITE_GROUP_PALETTES, MAP_PALETTE_PTR_TABLE, end of map palette31,
    // GLOBAL_MAP_TILESETPALETTE_DATA. Verified independent US/JP link layouts.
    return version == GameVersion::JP ? WorldPaletteLayout{0x30000, 0x2f62fd, 0x1afaae, 0x17a800}
                                      : WorldPaletteLayout{0x30000, 0x2f10fb, 0x1afaa7, 0x17a800};
}
struct WorldPalettes::State {
    struct Record {
        MapColors colors;
        unsigned condition{}, alternate{}, special{};
    };
    std::array<std::vector<unsigned>, 32> groups;
    std::vector<Record> records;
    std::array<std::uint8_t, 2560> sectors;
    std::array<IndexedPalette, 8> sprites;
    SpritePalettes initial;
    std::array<unsigned, 3> reference;
    AreaPalettes compose(AreaPaletteId, const MapColors &, std::span<const std::uint16_t,16>,
                         std::span<const std::uint16_t> sprite_override={}) const;
};

WorldPalettes::WorldPalettes(std::span<const std::uint8_t> assets, WorldPaletteLayout layout)
    : state_(std::make_unique<State>()) {
    const Content content{assets};
    auto &s = *state_;
    const auto sectors = content.slice(layout.sectors, s.sectors.size());
    std::copy(sectors.begin(), sectors.end(), s.sectors.begin());
    content.slice(layout.sprites, 256);
    content.slice(layout.groups, 32 * 4);
    for (unsigned p = 0; p < 8; ++p)
        for (unsigned i = 0; i < 16; ++i) {
            s.sprites[p][i] = content.word(layout.sprites + (p * 16 + i) * 2);
            s.initial[p][i] = i ? argb(s.sprites[p][i]) : 0;
        }
    std::array<unsigned, 33> starts{};
    for (unsigned group = 0; group < 32; ++group)
        starts[group] = content.pointer(layout.groups + group * 4);
    starts.back() = layout.groups_end;
    std::map<unsigned, unsigned> imported;
    std::vector<unsigned> alternates;
    for (unsigned group = 0; group < 32; ++group) {
        if (starts[group + 1] <= starts[group] || (starts[group + 1] - starts[group]) % 192 ||
            starts[group + 1] - starts[group] > 8 * 192)
            throw std::runtime_error("Invalid world palette group size");
        content.slice(starts[group], starts[group + 1] - starts[group]);
        for (unsigned at = starts[group]; at < starts[group + 1]; at += 192) {
            const unsigned id = s.records.size();
            imported.emplace(at, id);
            s.groups[group].push_back(id);
            auto &record = s.records.emplace_back();
            for (unsigned i = 0; i < 96; ++i)
                record.colors[i] = content.word(at + i * 2);
            record.condition = record.colors[0];
            record.special = record.colors[32];
            if (record.special == 1 || record.special >= 16)
                throw std::runtime_error("Unsupported scenery sprite palette override");
            alternates.push_back((starts[0] & 0xff0000u) | record.colors[16]);
        }
    }
    for (unsigned i = 0; i < s.records.size(); ++i)
        if (s.records[i].condition) {
            const auto found = imported.find(alternates[i]);
            if (found == imported.end())
                throw std::runtime_error("Invalid area palette event branch");
            s.records[i].alternate = found->second;
        }
    for (const auto sector : s.sectors)
        if ((sector & 7) >= s.groups[sector >> 3].size())
            throw std::runtime_error("World sector references absent palette");
    s.reference = average(s.records[s.groups[1][0]].colors);
}
WorldPalettes::~WorldPalettes() = default;
WorldPalettes::WorldPalettes(WorldPalettes &&) noexcept = default;
WorldPalettes &WorldPalettes::operator=(WorldPalettes &&) noexcept = default;
const SpritePalettes &WorldPalettes::initial_sprites() const { return state_->initial; }
unsigned WorldPalettes::variants(unsigned group) const { return state_->groups.at(group).size(); }
AreaPaletteId WorldPalettes::area_at(unsigned x, unsigned y) const {
    if (x >= 8192 || y >= 10240)
        throw std::out_of_range("World palette position outside map");
    const auto value = state_->sectors[(y / 128) * 32 + x / 256];
    return {unsigned(value >> 3), unsigned(value & 7)};
}
AreaPalettes WorldPalettes::resolve(AreaPaletteId area, std::span<const std::uint8_t> flags) const {
    const auto &s = *state_;
    unsigned id = s.groups.at(area.group).at(area.variant);
    unsigned visits = 0;
    while (s.records[id].condition &&
           flag(flags, s.records[id].condition & 0x7fff) == (s.records[id].condition > 0x8000)) {
        if (++visits > s.records.size())
            throw std::runtime_error("Cyclic area palette event branch");
        id = s.records[id].alternate;
    }
    return s.compose(area, s.records[id].colors, std::array<std::uint16_t,16>{});
}
AreaPalettes WorldPalettes::resolve_photograph(AreaPaletteId area,
    std::span<const std::uint16_t,96> scenery, std::span<const std::uint16_t,16> frame,
    std::span<const std::uint16_t> sprite_override) const {
    (void)state_->groups.at(area.group).at(area.variant);
    if (scenery[32] >= 16 && sprite_override.size()!=16)
        throw std::invalid_argument("Photograph sprite palette override requires its retained owner");
    if (scenery[32] < 16 && !sprite_override.empty())
        throw std::invalid_argument("Photograph palette already has an owned CGRAM source");
    MapColors raw;
    std::copy(scenery.begin(), scenery.end(), raw.begin());
    return state_->compose(area, raw, frame, sprite_override);
}
AreaPalettes WorldPalettes::State::compose(AreaPaletteId area, const MapColors &raw,
    std::span<const std::uint16_t,16> frame, std::span<const std::uint16_t> sprite_override) const {
    const auto &s=*this;
    AreaPalettes result;
    result.selected = area;
    result.animation_id = raw[48];
    for (unsigned p = 0; p < 6; ++p) result.scenery_zero[p] = raw[p * 16];
    for (unsigned p = 0; p < 6; ++p)
        for (unsigned i = 1; i < 16; ++i) {
            result.scenery[p][i] = argb(raw[p * 16 + i]);
            result.scenery_high_bits[p] |= std::uint16_t((raw[p * 16 + i] >> 15) << i);
        }
    auto colors = s.sprites;
    auto ratio = average(raw);
    for (unsigned c = 0; c < 3; ++c)
        ratio[c] = quotient((ratio[c] & 255) * 256, s.reference[c]);
    if (*std::max_element(ratio.begin(), ratio.end()) <= 256) {
        const unsigned neutral = (ratio[0] + ratio[1] + ratio[2]) / 3;
        for (auto &palette : colors)
            for (auto &color : palette) {
                const std::array<unsigned, 3> old{unsigned(color & 31), unsigned((color >> 5) & 31),
                                                  unsigned((color >> 10) & 31)};
                unsigned updated = 0;
                for (unsigned c = 0; c < 3; ++c) {
                    const auto scale = old[0] == old[1] && old[1] == old[2] ? neutral : ratio[c];
                    const int target = ((old[c] * scale) >> 8) & 31;
                    updated |= unsigned(std::clamp(target, std::max(0, int(old[c]) - 6),
                                                    std::min(31, int(old[c]) + 6))) << (c * 5);
                }
                color = updated;
            }
    }
    if (raw[32] >= 16)
        std::copy(sprite_override.begin(), sprite_override.end(), colors[4].begin());
    else if (raw[32] == 1)
        std::copy(frame.begin(), frame.end(), colors[4].begin());
    else if (raw[32] >= 2 && raw[32] < 8)
        std::copy_n(raw.begin() + (raw[32] - 2) * 16, 16, colors[4].begin());
    else if (raw[32] >= 8)
        colors[4] = colors[raw[32] - 8];
    for (unsigned p = 0; p < 8; ++p) result.sprite_zero[p] = colors[p][0];
    for (unsigned p = 0; p < 8; ++p)
        for (unsigned i = 0; i < 16; ++i) {
            result.sprites[p][i] = i ? argb(colors[p][i]) : 0;
            if (i) result.sprite_high_bits[p] |= std::uint16_t((colors[p][i] >> 15) << i);
        }
    return result;
}
} // namespace eb::native
