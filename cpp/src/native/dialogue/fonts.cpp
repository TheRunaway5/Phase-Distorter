#include "eb/native/dialogue/fonts.hpp"
#include "detail/hal.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::dialogue {
namespace {
void require(bool ok, const char* message) { if (!ok) throw std::runtime_error(message); }
std::span<const std::uint8_t> region(std::span<const std::uint8_t> image, unsigned offset, unsigned size) {
    require(offset <= image.size() && size <= image.size() - offset, "Truncated dialogue font resource");
    return image.subspan(offset, size);
}
unsigned word(std::span<const std::uint8_t> bytes, unsigned at) {
    require(at <= bytes.size() && 2 <= bytes.size() - at, "Truncated dialogue font descriptor");
    return bytes[at] | unsigned(bytes[at + 1]) << 8;
}
unsigned pointer(std::span<const std::uint8_t> bytes, unsigned at) {
    const auto value = word(bytes, at) | word(bytes, at + 2) << 16;
    require(value >= 0xc00000 && value <= 0xffffff, "Invalid dialogue font content pointer");
    return value - 0xc00000;
}
unsigned variable_index(std::uint16_t encoded) { return (unsigned(encoded) - 0x50) & 127; }
bool us_fixed(std::uint16_t encoded) { return encoded == 0x20 || encoded == 0x22 || encoded == 0x2f; }
}
std::shared_ptr<const FontResources> FontResources::import(std::span<const std::uint8_t> image, GameVersion version) {
    require(version == GameVersion::US || version == GameVersion::JP, "Unsupported dialogue font region");
    auto result = std::shared_ptr<FontResources>(new FontResources(version));
    // earthbound.yml/mother2.yml TEXT_WINDOW_GFX extraction spans and linked
    // LOAD_WINDOW_GFX operands. Lower control-code border tiles 0..15 can be
    // flavour-patched and are not printable dialogue glyphs.
    const bool jp = version == GameVersion::JP;
    const auto fixed = detail::decode_hal_exact(region(image, 0x200000, jp ? 0x10c2 : 0x754), jp ? 0x2a00 : 0x1a00);
    result->fixed_count_ = unsigned(fixed.size() / 512 * 16);
    for (unsigned character = 16; character < result->fixed_count_; ++character) {
        auto& glyph = result->fixed_[character];
        glyph.width = 8; glyph.height = 16; glyph.advance = 8; glyph.variable = false;
        glyph.pixels.fill(3);
        const unsigned start = ((character & 0xfff0) * 2 + (character & 15)) * 16;
        for (unsigned y = 0; y < 16; ++y) for (unsigned x = 0; x < 8; ++x) {
            const unsigned at = start + (y / 8) * 256 + (y & 7) * 2;
            glyph.pixels[y * 16 + x] = ((fixed[at] >> (7 - x)) & 1) | (((fixed[at + 1] >> (7 - x)) & 1) << 1);
        }
    }
    if (!jp) {
        // FONT_PTR_TABLE (src/data/font_pointer_table.asm) calls byte-stride
        // 'height' and raster row count 'width'. All five independent records
        // are imported. Each metric asset has 96 declared records; the source
        // lookahead deliberately reads 128 bytes, reaching 32 bitmap-prefix bytes.
        const auto table = region(image, 0x03f054, 5 * 12);
        constexpr std::array<unsigned,5> declared_stride{32,32,16,8,32};
        constexpr std::array<unsigned,5> declared_height{16,16,16,8,16};
        for (unsigned font = 0; font < 5; ++font) {
            const auto stride = word(table, font * 12 + 8), height = word(table, font * 12 + 10);
            require(stride == declared_stride[font] && height == declared_height[font], "Invalid US font dimensions");
            const auto widths = region(image, pointer(table, font * 12), 128);
            std::copy(widths.begin(), widths.end(), result->widths_[font].begin());
            const unsigned glyph_width = stride / height * 8;
            // CHARACTER_PADDING is an unsigned byte. The widest declared font
            // glyph plus maximum padding needs at most 34 complete 8-pixel strips.
            // Preserve their contiguous source bytes even across the declared
            // font boundary, where the original reads following imported assets.
            const auto bytes = region(image, pointer(table, font * 12 + 4), (96 - 1) * stride + 34 * height);
            result->raster_source_[font].assign(bytes.begin(), bytes.end());
            result->raster_stride_[font] = stride;
            result->raster_height_[font] = height;
            auto& glyphs = result->variable_[font];
            glyphs.resize(96);
            for (unsigned index = 0; index < 96; ++index) {
                auto& glyph = glyphs[index];
                require(widths[index] <= glyph_width, "US font advance exceeds its declared glyph bitmap");
                glyph.width = glyph_width; glyph.height = height; glyph.advance = widths[index]; glyph.variable = true;
                glyph.pixels.fill(3);
                for (unsigned y = 0; y < height; ++y) for (unsigned x = 0; x < glyph_width; ++x)
                    glyph.pixels[y * 16 + x] = 1 | (((bytes[index * stride + (x / 8) * height + y] >> (7 - (x & 7))) & 1) << 1);
            }
        }
    } else {
        // JP UNKNOWN_C1C046: code-16 indexes UNKNOWN_C3EF26; nonzero map
        // entries select one of 62 independent masks/widths. Zero means fixed.
        const auto mapping = region(image, 0x03eaed, 240);
        const auto widths = region(image, 0x03ebdd, 62);
        const auto graphics = region(image, 0x20209d, 0x1000);
        std::copy(mapping.begin(), mapping.end(), result->saturn_mapping_.begin());
        for (const auto entry : mapping) require(entry <= widths.size(), "Invalid Japanese Saturn glyph mapping");
        auto& glyphs = result->variable_[1];
        glyphs.resize(62);
        for (unsigned index = 0; index < 62; ++index) {
            auto& glyph = glyphs[index];
            require(widths[index] > 0 && widths[index] <= 16, "Invalid Japanese Saturn glyph advance");
            glyph.width = 16; glyph.height = 16; glyph.advance = widths[index]; glyph.variable = true;
            glyph.pixels.fill(3);
            const unsigned start = (index & 7) * 32 + (index & 0xf8) * 64;
            for (unsigned y = 0; y < 16; ++y) for (unsigned x = 0; x < 16; ++x) {
                // Each horizontal 8-pixel strip contains two interleaved
                // bitplanes in its upper 8 rows; lower 8 rows are 256 bytes later.
                const unsigned at = start + (x / 8) * 16 + (y / 8) * 256 + (y & 7) * 2;
                glyph.pixels[y * 16 + x] = ((graphics[at] >> (7 - (x & 7))) & 1) |
                                          (((graphics[at + 1] >> (7 - (x & 7))) & 1) << 1);
            }
        }
        // PRINT_MENU_ITEMS-jp sends the full word014f through PRINT_LETTER
        // even in Saturn mode. C1C046 therefore reads the one adjacent map
        // byte at C3EAED+013f, not a byte-truncated ordinary character. In the
        // original pack this is169: its width is0 and its bitmap is adjacent
        // to the declared Saturn asset. Import only this proven wide path.
        const unsigned page_mapping = region(image, 0x03ec2c, 1).front();
        if (page_mapping) {
            const auto index = page_mapping - 1;
            const auto advance = region(image, 0x03ebdd + index, 1).front();
            require(advance <= 16, "Japanese menu014f Saturn advance exceeds its supported source strips");
            FontGlyph glyph;
            glyph.width = advance > 8 ? 16 : 8;
            glyph.height = 16; glyph.advance = advance; glyph.variable = true;
            glyph.pixels.fill(3);
            const auto start = 0x20209d + (index & 7) * 32 + (index & 0xf8) * 64;
            for (unsigned strip = 0; strip < glyph.width / 8; ++strip)
                for (unsigned half = 0; half < 2; ++half) {
                    const auto bytes = region(image, start + strip * 16 + half * 256, 16);
                    for (unsigned y = 0; y < 8; ++y) for (unsigned x = 0; x < 8; ++x)
                        glyph.pixels[(half * 8 + y) * 16 + strip * 8 + x] =
                            std::uint8_t(((bytes[y * 2] >> (7 - x)) & 1) |
                                         (((bytes[y * 2 + 1] >> (7 - x)) & 1) << 1));
                }
            result->saturn_page_control_ = std::move(glyph);
        }
    }
    return result;
}
const FontGlyph& FontResources::fixed_glyph(std::uint16_t encoded) const {
    require(encoded >= 16 && encoded < fixed_count_, "Dialogue character has no imported fixed glyph");
    return fixed_[encoded];
}
const FontGlyph& FontResources::glyph(unsigned font, std::uint16_t encoded) const {
    if (version_ == GameVersion::JP) {
        if (font == 0) return fixed_glyph(encoded);
        if (encoded == 0x014f)
            return saturn_page_control_ ? *saturn_page_control_ : fixed_glyph(encoded);
        require(encoded >= 16 && encoded < 256, "Japanese Saturn character is outside the imported mapping");
        const auto mapped = saturn_mapping_[encoded - 16];
        return mapped ? variable_[1][mapped - 1] : fixed_glyph(encoded);
    }
    if (us_fixed(encoded)) return fixed_glyph(encoded);
    require(font < 5, "Invalid US dialogue font");
    const auto index = variable_index(encoded);
    require(index < 96, "US character selects an undeclared font record");
    return variable_[font][index];
}
std::uint8_t FontResources::raster_pixel(unsigned font, std::uint16_t encoded, unsigned x, unsigned y) const {
    const auto& selected = glyph(font, encoded);
    if (version_ != GameVersion::US || !selected.variable) return selected.pixel(x, y);
    require(x < 272 && y < selected.height, "US dialogue raster coordinate is outside the source padding bound");
    const auto byte = raster_source_[font][variable_index(encoded) * raster_stride_[font] +
                                          (x / 8) * raster_height_[font] + y];
    return 1 | (((byte >> (7 - (x & 7))) & 1) << 1);
}
std::optional<std::uint16_t> FontResources::following_diacritic(std::uint16_t encoded) const {
    if (version_ != GameVersion::JP || encoded < 0x60) return {};
    switch (encoded & 15) {
    case 3: case 5: case 7: case 10: return 26;
    case 11: return 27;
    default: return {};
    }
}
std::span<const std::uint8_t, 128> FontResources::word_widths(unsigned font) const {
    require(version_ == GameVersion::US && font < 5, "Word-width table is only available for a US font");
    return widths_[font];
}
} // namespace eb::native::dialogue
