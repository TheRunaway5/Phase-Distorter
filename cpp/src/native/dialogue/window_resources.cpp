#include "eb/native/dialogue/window_resources.hpp"
#include "detail/hal.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::dialogue {
namespace {
void require(bool ok, const char* message) { if (!ok) throw std::runtime_error(message); }
std::span<const std::uint8_t> region(std::span<const std::uint8_t> image, unsigned offset, unsigned count) {
    require(offset <= image.size() && count <= image.size() - offset, "Truncated native window resource");
    return image.subspan(offset, count);
}
unsigned word(std::span<const std::uint8_t> bytes, unsigned at) {
    require(at <= bytes.size() && 2 <= bytes.size() - at, "Truncated native window record");
    return bytes[at] | (unsigned(bytes[at + 1]) << 8);
}
unsigned pointer(std::span<const std::uint8_t> bytes, unsigned at) {
    const auto address = word(bytes,at) | (word(bytes,at + 2) << 16);
    require(address >= 0xc00000 && address <= 0xffffff, "Invalid window resource content pointer");
    return address - 0xc00000;
}
unsigned flavor_index(unsigned flavor) {
    require(flavor >= 1 && flavor <= 5, "Native window flavor must be in 1..5");
    return flavor - 1;
}
WindowArtwork artwork(std::span<const std::uint8_t> bytes, unsigned at) {
    const auto tile = region(bytes,at,16);
    WindowArtwork result;
    for (unsigned y = 0; y < 8; ++y) for (unsigned x = 0; x < 8; ++x)
        result[y * 8 + x] = std::uint8_t(((tile[y * 2] >> (7 - x)) & 1) |
                                       (((tile[y * 2 + 1] >> (7 - x)) & 1) << 1));
    return result;
}
struct Layout {
    unsigned config, count, fixed_packed, fixed_decoded, flavored, properties, palettes, palette_bytes,
             pagination_rows, pagination_pointers, prompt_descriptors, fixed_tail;
};
Layout layout(GameVersion version) {
    // Independently linked labels and earthbound.yml/mother2.yml extents:
    // WINDOW_CONFIGURATION_TABLE, TEXT_WINDOW_{PROPERTIES,FLAVOUR_PALETTES},
    // UNKNOWN_C3E41C_{ENTRY1,PTR_TABLE}; common/bank20.asm's imported art.
    switch (version) {
    case GameVersion::US:
        return {0x03e250,53,0x754,0x1a00,0x200754,0x201fb9,0x201fc8,7*64,0x03e41c,0x03e43c,0x03e416,0x040be8};
    case GameVersion::JP:
        return {0x03e23a,52,0x10c2,0x2a00,0x2010c2,0x201f0e,0x201f1d,6*64,0x03e3fe,0x03e41e,0x03e3f8,0x040b34};
    }
    throw std::invalid_argument("Unsupported native window resource region");
}
}
std::shared_ptr<const WindowResources> WindowResources::import(std::span<const std::uint8_t> image,
                                                               GameVersion version) {
    const auto source = layout(version);
    auto result = std::shared_ptr<WindowResources>(new WindowResources(version));
    const auto config = region(image,source.config,source.count * 8);
    for (unsigned id = 0; id < source.count; ++id) {
        const WindowConfiguration window{std::uint16_t(word(config,id * 8)),std::uint16_t(word(config,id * 8 + 2)),
            std::uint16_t(word(config,id * 8 + 4)),std::uint16_t(word(config,id * 8 + 6))};
        require(window.outer_width >= 3 && window.outer_height >= 3 &&
                    unsigned(window.outer_x) + window.outer_width <= 32 &&
                    unsigned(window.outer_y) + window.outer_height <= 28 &&
                    unsigned(window.outer_width - 2) * (window.outer_height - 2) <= 504,
                "Window configuration leaves its declared source scene or content storage");
        result->configurations_.push_back(window);
    }
    const auto base = detail::decode_hal_exact(region(image,0x200000,source.fixed_packed),source.fixed_decoded);
    const auto flavored = detail::decode_hal_exact(region(image,source.flavored,76),112);
    const auto properties = region(image,source.properties,5 * 3);
    const auto colors = region(image,source.palettes,source.palette_bytes);
    std::copy(properties.begin(),properties.end(),result->raw_palette_properties_.begin());
    result->raw_palettes_.assign(colors.begin(),colors.end());
    result->raw_palette_properties_identity_=0xc00000+source.properties;
    result->raw_palettes_identity_=0xc00000+source.palettes;
    const auto rows = region(image,source.pagination_rows,4 * 8);
    const auto pointers = region(image,source.pagination_pointers,4 * 4);
    // BLINKING_TRIANGLE_TILES is exactly three words. Its third cell restores
    // the phase-zero prompt on acceptance; source publication owns timing.
    const auto prompts = region(image,source.prompt_descriptors,3 * 2);
    const auto tail = region(image,source.fixed_tail,64);
    std::copy(tail.begin(),tail.end(),result->raw_fixed_tail_.begin());
    result->raw_fixed_tail_identity_ = 0xc00000u + source.fixed_tail;
    // These five art indices are source drawing operations in C107AF, not a
    // bundled configuration/art table: ordinary/intersection corner, horizontal
    // edge, vertical edge and title/pagination join. Orientation belongs to host.
    constexpr std::array<unsigned,5> border_indices{0x10,0x13,0x11,0x12,0x16};
    for (unsigned flavor = 0; flavor < 5; ++flavor) {
        const unsigned variant = properties[flavor * 3 + 2];
        result->flavoured_[flavor] = version == GameVersion::JP ? variant != 0 : variant == 8;
        auto graphics = base;
        if (result->flavoured_[flavor]) std::copy(flavored.begin(),flavored.end(),graphics.begin() + 0x100);
        const auto source_art = [&](unsigned index) {
            unsigned offset = index * 16;
            // LOAD_WINDOW_GFX US copies BUFFER+1000 to BUFFER+2000. Pagination
            // reads the relocated fixed-art segment. Other generated party/
            // status/title images are not immutable window decorations.
            if (version == GameVersion::US && offset >= 0x2000 && offset < 0x2a00) offset -= 0x1000;
            return artwork(graphics,offset);
        };
        for (unsigned cell = 0; cell < 32; ++cell) {
            const unsigned descriptor = word(tail,cell * 2);
            auto& decoration = result->fixed_tail_[flavor][cell];
            decoration.artwork_cell = std::uint16_t(descriptor & 0x3ff);
            decoration.pixels = source_art(descriptor & 0x3ff);
            decoration.palette = std::uint8_t((descriptor >> 10) & 7);
            decoration.priority = descriptor & 0x2000;
            decoration.flip_horizontal = descriptor & 0x4000;
            decoration.flip_vertical = descriptor & 0x8000;
        }
        for (unsigned piece = 0; piece < border_indices.size(); ++piece)
            result->borders_[flavor][piece] = source_art(border_indices[piece]);
        for (unsigned phase = 0; phase < 3; ++phase) {
            const unsigned descriptor = word(prompts,phase * 2);
            auto& decoration = result->prompts_[flavor][phase];
            decoration.artwork_cell = std::uint16_t(descriptor & 0x3ff);
            decoration.pixels = source_art(descriptor & 0x3ff);
            decoration.palette = std::uint8_t((descriptor >> 10) & 7);
            decoration.priority = descriptor & 0x2000;
            decoration.flip_horizontal = descriptor & 0x4000;
            decoration.flip_vertical = descriptor & 0x8000;
        }
        for (unsigned frame = 0; frame < 4; ++frame) {
            const auto address = pointer(pointers,frame * 4);
            require(address >= source.pagination_rows && address - source.pagination_rows < rows.size() &&
                        (address - source.pagination_rows) % 8 == 0,
                    "Pagination pointer leaves its declared four-row resource");
            for (unsigned cell = 0; cell < 4; ++cell) {
                const unsigned descriptor = word(rows,address - source.pagination_rows + cell * 2);
                auto& decoration = result->pagination_[flavor][frame][cell];
                decoration.artwork_cell = std::uint16_t(descriptor & 0x3ff);
                decoration.pixels = source_art(descriptor & 0x3ff);
                decoration.palette = std::uint8_t((descriptor >> 10) & 7);
                decoration.priority = descriptor & 0x2000;
                decoration.flip_horizontal = descriptor & 0x4000;
                decoration.flip_vertical = descriptor & 0x8000;
            }
        }
        const auto offset = word(properties,flavor * 3);
        const auto selected = region(colors,offset,64);
        for (unsigned color = 0; color < 32; ++color)
            result->palettes_[flavor][color] = std::uint16_t(word(selected,color * 2));
        result->palettes_[flavor][0] = 0;
        // C3E450 copies the chosen four-color slice into palette 5. Keeping
        // this separate preserves ordering with the full C47F87 publication.
        for (unsigned phase = 0; phase < 2; ++phase)
            for (unsigned color = 0; color < 4; ++color)
                result->animated_palettes_[flavor][phase][color] =
                    std::uint16_t(word(selected,(phase ? 8 : 40) + color * 2));
    }
    for (unsigned color = 0; color < 32; ++color)
        result->incapacitated_palette_[color] = std::uint16_t(word(colors,320 + color * 2));
    result->incapacitated_palette_[0] = 0;
    if (version == GameVersion::JP) {
        // MOTHER2_ROMAJI_FONT is JP/fonts/hppp.gfx: exactly 224 encoded
        // characters (32..255), one 16-byte 2bpp tile per title character.
        const auto titles = region(image,0x20110e,3584);
        for (unsigned index = 0; index < 224; ++index) result->japanese_titles_[index] = artwork(titles,index * 16);
    }
    return result;
}
const WindowConfiguration& WindowResources::configuration(unsigned id) const {
    return configurations_.at(id);
}
bool WindowResources::uses_flavoured_art(unsigned flavor) const { return flavoured_[flavor_index(flavor)]; }
const WindowArtwork& WindowResources::border(WindowBorder piece, unsigned flavor) const {
    return borders_[flavor_index(flavor)].at(unsigned(piece));
}
const std::array<WindowDecoration,4>& WindowResources::pagination(unsigned frame, unsigned flavor) const {
    return pagination_[flavor_index(flavor)].at(frame);
}
const WindowDecoration& WindowResources::prompt(unsigned phase, unsigned flavor) const {
    return prompts_[flavor_index(flavor)].at(phase);
}
const std::array<std::uint16_t,32>& WindowResources::palette(unsigned flavor, bool incapacitated,
                                                           bool transitions_disabled) const {
    if (incapacitated && !transitions_disabled) return incapacitated_palette_;
    return palettes_[flavor_index(flavor)];
}
const std::array<std::uint16_t,4>& WindowResources::animated_palette5(unsigned flavor,
                                                                   std::uint64_t frame_counter) const {
    return animated_palettes_[flavor_index(flavor)][(frame_counter & 4) ? 1 : 0];
}
const std::array<WindowDecoration,32>& WindowResources::fixed_tail(unsigned flavor) const {
    return fixed_tail_[flavor_index(flavor)];
}
const WindowArtwork& WindowResources::japanese_title_glyph(std::uint16_t encoded_character) const {
    require(version_ == GameVersion::JP && encoded_character >= 32 && encoded_character <= 255,
            "Title character leaves the imported Japanese title font");
    return japanese_titles_[encoded_character - 32];
}
} // namespace eb::native::dialogue
