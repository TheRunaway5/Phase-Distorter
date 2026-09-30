#pragma once

#include "eb/game_version.hpp"
#include <array>
#include <cstdint>
#include <memory>
#include <optional>
#include <span>
#include <vector>

namespace eb::native::dialogue {
// Immutable source-indexed artwork, independent of a processor or video device.
// Variable glyph pixels are two-bit AND masks (3 preserves the background);
// fixed glyph pixels replace the destination. No palette color is baked in.
struct FontGlyph {
    unsigned width = 8, height = 16, advance = 8;
    bool variable = false;
    std::array<std::uint8_t, 256> pixels{}; // 16-column row stride
    std::uint8_t pixel(unsigned x, unsigned y) const {
        return x < width && y < height ? pixels[y * 16 + x] : 3;
    }
};
class FontResources {
  public:
    // Copies/decodes only imported font artwork and metrics. No source asset
    // bytes are bundled in the module. Unsupported regions/content throw.
    static std::shared_ptr<const FontResources> import(std::span<const std::uint8_t> image,
                                                       GameVersion version);
    GameVersion version() const { return version_; }
    unsigned font_count() const { return version_ == GameVersion::US ? 5 : 2; }
    // US font ids 0..4 are main, Saturn, battle, tiny, large. Source fixed codes
    // 20/22/2f route to fixed artwork before the variable index calculation.
    // JP font 0 is fixed; every nonzero source selector uses Saturn's mapping,
    // falling back to the fixed glyph when its imported map entry is zero.
    // The JP menu character014f has its own evidenced adjacent mapping/raster
    // import; it can draw an eight-pixel strip with zero cursor advance.
    const FontGlyph& glyph(unsigned font_id, std::uint16_t encoded_character) const;
    // The Japanese imported atlas includes 16-bit menu glyphs through014f.
    // US's relocated100..14f menu segment is a renderer publication mapping
    // onto its imported80..cf records, not additional bundled font artwork.
    const FontGlyph& fixed_glyph(std::uint16_t encoded_character) const;
    // Source variable-width rasterization reads complete 8-pixel strips, even
    // when padding continues into following records/assets. This accessor uses
    // owned imported continuation bytes, never invented blank pixels. US x is
    // bounded to 272 columns (maximum declared advance 15 + byte padding 255).
    std::uint8_t raster_pixel(unsigned font_id, std::uint16_t encoded_character,
                              unsigned x, unsigned y) const;
    // PRINT_LETTER-jp follows eligible Saturn characters with code 26 or 27.
    // The caller uses this only for the Japanese nonzero-font printing path.
    std::optional<std::uint16_t> following_diacritic(std::uint16_t encoded_character) const;
    // Exact US lookahead table, including the 32 graphic-prefix bytes following
    // each 96-byte metric asset. Padding and the fixed 0x2f width are host rules.
    // JP does not use the US word scanner and rejects this query.
    std::span<const std::uint8_t, 128> word_widths(unsigned font_id) const;
  private:
    explicit FontResources(GameVersion version) : version_(version) {}
    GameVersion version_;
    std::array<FontGlyph, 336> fixed_{};
    std::array<std::vector<FontGlyph>, 5> variable_;
    std::array<std::array<std::uint8_t, 128>, 5> widths_{};
    std::array<std::uint8_t, 240> saturn_mapping_{};
    std::optional<FontGlyph> saturn_page_control_;
    unsigned fixed_count_ = 0;
    std::array<std::vector<std::uint8_t>, 5> raster_source_;
    std::array<unsigned, 5> raster_stride_{}, raster_height_{};
};
} // namespace eb::native::dialogue
