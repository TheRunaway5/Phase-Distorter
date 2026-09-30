#pragma once
// Shared synthetic asset builder for native dialogue unit tests. No original
// game artwork is embedded; linked offsets only describe the import contract.
#include "eb/native/dialogue/window_resources.hpp"
#include <algorithm>
#include <stdexcept>

namespace dialogue_test_assets {
using namespace eb::native::dialogue;
inline void fixture_require(bool ok, const char *message) {
    if (!ok) throw std::runtime_error(message);
}
inline WindowArtwork pattern(unsigned seed) {
    WindowArtwork result;
    for (unsigned y = 0; y < 8; ++y) for (unsigned x = 0; x < 8; ++x)
        result[y * 8 + x] = std::uint8_t((seed * 3 + x + 2 * y + ((seed >> (x % 8)) ^ y)) & 3);
    return result;
}
inline void encode_art(std::vector<std::uint8_t>& bytes, unsigned at, const WindowArtwork& pixels) {
    std::fill_n(bytes.begin() + at,16,0);
    for (unsigned pixel = 0; pixel < 64; ++pixel) {
        if (pixels[pixel] & 1) bytes[at + pixel / 8 * 2] |= 0x80 >> (pixel % 8);
        if (pixels[pixel] & 2) bytes[at + pixel / 8 * 2 + 1] |= 0x80 >> (pixel % 8);
    }
}
// Exact-sized HAL fixtures without original artwork. Nonuniform tiles are
// literals; constant tiles can use equivalent literal/run combinations to
// fill the declared compressed span without padding or reading adjacent data.
inline std::vector<std::uint8_t> pack(const std::vector<std::uint8_t>& decoded, unsigned extent) {
    unsigned minimum = 1;
    for (unsigned at = 0; at < decoded.size(); at += 16)
        minimum += std::all_of(decoded.begin() + at,decoded.begin() + at + 16,
                               [&](auto byte){return byte == decoded[at];}) ? 2 : 17;
    fixture_require(extent >= minimum,"Synthetic window asset cannot fit its compressed span");
    unsigned extra = extent - minimum;
    std::vector<std::uint8_t> result;
    for (unsigned at = 0; at < decoded.size(); at += 16) {
        const bool constant = std::all_of(decoded.begin() + at,decoded.begin() + at + 16,
                                         [&](auto byte){return byte == decoded[at];});
        if (!constant) { result.push_back(15); result.insert(result.end(),decoded.begin() + at,decoded.begin() + at + 16); }
        else {
            unsigned expansion = std::min(15u,extra);
            if (extra - expansion == 1) --expansion;
            fixture_require(expansion != 1,"Synthetic HAL encoder has a one-byte remainder");
            if (expansion) {
                const unsigned count = expansion - 1;
                result.push_back(std::uint8_t(count - 1));
                result.insert(result.end(),count,decoded[at]);
                result.push_back(std::uint8_t(0x20 | (16 - count - 1)));
                result.push_back(decoded[at]);
                extra -= expansion;
            } else { result.push_back(0x2f); result.push_back(decoded[at]); }
        }
    }
    result.push_back(255);
    fixture_require(!extra && result.size() == extent,"Synthetic HAL fixture did not fill its exact declared extent");
    return result;
}
struct WindowInput {
    eb::GameVersion version;
    std::vector<std::uint8_t> image = std::vector<std::uint8_t>(0x300000);
    unsigned configs, count, flavored, properties, colors, rows, pointers, palette_count;
    std::vector<WindowArtwork> base, patch;
    std::array<unsigned,5> variants{1,8,0,7,255};
    std::array<unsigned,4> content_art{0x26d,0x26e,0x27d,0x27e};
    explicit WindowInput(eb::GameVersion region) : version(region) {
        const bool jp = region == eb::GameVersion::JP;
        configs = jp ? 0x3e23a : 0x3e250; count = jp ? 52 : 53;
        flavored = jp ? 0x2010c2 : 0x200754; properties = jp ? 0x201f0e : 0x201fb9;
        colors = jp ? 0x201f1d : 0x201fc8; rows = jp ? 0x3e3fe : 0x3e41c;
        pointers = jp ? 0x3e41e : 0x3e43c; palette_count = jp ? 6 : 7;
        for (unsigned id = 0; id < count; ++id) {
            const auto config = expected_config(id);
            put(configs + id * 8,config.outer_x); put(configs + id * 8 + 2,config.outer_y);
            put(configs + id * 8 + 4,config.outer_width); put(configs + id * 8 + 6,config.outer_height);
        }
        std::vector<std::uint8_t> decoded(jp ? 0x2a00 : 0x1a00);
        base.resize(decoded.size() / 16);
        for (unsigned index = 0; index < base.size(); ++index) {
            const auto byte = std::uint8_t(index * 37 + 13);
            std::fill_n(decoded.begin() + index * 16,16,byte);
            for (unsigned pixel = 0; pixel < 64; ++pixel) base[index][pixel] = (byte & (0x80 >> (pixel % 8))) ? 3 : 0;
        }
        for (unsigned index : {16u,17u,18u,19u,22u,64u,365u,366u,381u,382u,621u,622u,637u,638u}) {
            if (index >= base.size()) continue;
            base[index] = pattern(index); encode_art(decoded,index * 16,base[index]);
        }
        const auto compressed = pack(decoded,jp ? 4290 : 1876);
        std::copy(compressed.begin(),compressed.end(),image.begin() + 0x200000);
        decoded.resize(112); patch.resize(7);
        for (unsigned index = 0; index < 7; ++index) {
            const auto byte = std::uint8_t(index * 23 + 91);
            std::fill_n(decoded.begin() + index * 16,16,byte);
            for (unsigned pixel = 0; pixel < 64; ++pixel) patch[index][pixel] = (byte & (0x80 >> (pixel % 8))) ? 3 : 0;
        }
        const auto packed_patch = pack(decoded,76);
        std::copy(packed_patch.begin(),packed_patch.end(),image.begin() + flavored);
        for (unsigned flavor = 0; flavor < 5; ++flavor) {
            put(properties + flavor * 3,(4 - flavor) * 64);
            image[properties + flavor * 3 + 2] = std::uint8_t(variants[flavor]);
        }
        for (unsigned index = 0; index < palette_count * 32; ++index) put(colors + index * 2,color(index));
        for (unsigned frame = 0; frame < 4; ++frame) {
            put32(pointers + frame * 4,0xc00000 + rows + (3 - frame) * 8);
            for (unsigned cell = 0; cell < 4; ++cell) put(rows + frame * 8 + cell * 2,descriptor(frame,cell));
        }
        if (jp) for (unsigned code = 32; code < 256; ++code) encode_art(image,0x20110e + (code - 32) * 16,pattern(code));
    }
    static WindowConfiguration expected_config(unsigned id) {
        // Deliberately includes odd content heights: the resource importer
        // must retain the authored geometry, not assume two-row text fills it.
        return {std::uint16_t(id % 7),std::uint16_t(id % 5),std::uint16_t(6 + id % 8),std::uint16_t(4 + id % 5)};
    }
    static std::uint16_t color(unsigned index) { return std::uint16_t((index * 137 + 91) & 0x7fff); }
    unsigned descriptor(unsigned frame, unsigned cell) const {
        const unsigned tile = cell == 0 ? 22 : cell == 3 ? 64 : content_art[(frame + cell) % 4];
        const unsigned flags = ((frame + cell) % 8) << 10 | ((frame + cell) & 1 ? 0x2000 : 0) |
                               (cell & 1 ? 0x4000 : 0) | (frame & 1 ? 0x8000 : 0);
        return tile | flags;
    }
    bool flavored_for(unsigned flavor) const { return version == eb::GameVersion::JP ? variants[flavor] != 0 : variants[flavor] == 8; }
    const WindowArtwork& expected_art(unsigned tile, unsigned flavor) const {
        if (flavored_for(flavor) && tile >= 16 && tile < 23) return patch[tile - 16];
        if (version == eb::GameVersion::US && tile >= 0x200 && tile < 0x2a0) tile -= 0x100;
        return base.at(tile);
    }
    void put(unsigned at, unsigned value) { image.at(at) = std::uint8_t(value); image.at(at + 1) = std::uint8_t(value >> 8); }
    void put32(unsigned at, unsigned value) { put(at,value); put(at + 2,value >> 16); }
    std::shared_ptr<const WindowResources> import() const { return WindowResources::import(image,version); }
};
// Add the independently documented text-font descriptors/raster ranges while
// retaining this fixture's fixed font, borders, palettes and title resources.
inline void add_text_fonts(WindowInput &fixture) {
    auto &image = fixture.image;
    if (fixture.version == eb::GameVersion::JP) {
        image[0x3eaed + 0x61 - 16] = 1;
        image[0x3eaed + 0x62 - 16] = 2;
        std::fill_n(image.begin() + 0x3ebdd, 62, 5);
        std::fill_n(image.begin() + 0x20209d, 4096, 255);
        for (unsigned y = 0; y < 16; ++y) {
            const auto row = y / 8 * 256 + y % 8 * 2;
            image[0x20209d + row + 1] = 0x0f;
            image[0x20209d + 32 + row + 1] = 0xf0;
        }
    } else {
        constexpr std::array<unsigned, 5> widths{0x210c7a,0x201359,0x2118da,0x211f3a,0x21229a};
        constexpr std::array<unsigned, 5> graphics{0x210cda,0x2013b9,0x21193a,0x211f9a,0x2122fa};
        constexpr std::array<unsigned, 5> strides{32,32,16,8,32}, heights{16,16,16,8,16};
        for (unsigned font = 0; font < 5; ++font) {
            fixture.put32(0x3f054 + font * 12, widths[font] + 0xc00000);
            fixture.put32(0x3f058 + font * 12, graphics[font] + 0xc00000);
            fixture.put(0x3f05c + font * 12, strides[font]);
            fixture.put(0x3f05e + font * 12, heights[font]);
            std::fill_n(image.begin() + widths[font], 96, 4);
            // Do not overwrite adjacent window resources with invented font
            // padding: raster continuation intentionally reads those bytes.
            std::fill_n(image.begin() + graphics[font], 96 * strides[font], 255);
            for (unsigned record = 0; record < 96; ++record)
                std::fill_n(image.begin() + graphics[font] + record * strides[font], heights[font],
                            record % 2 ? 0x0f : 0xf0);
        }
    }
}
} // namespace dialogue_test_assets
