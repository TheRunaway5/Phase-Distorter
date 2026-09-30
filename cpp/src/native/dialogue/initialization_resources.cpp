#include "eb/native/dialogue/initialization_resources.hpp"
#include "detail/hal.hpp"
#include <stdexcept>

namespace eb::native::dialogue {
namespace {
void require(bool ok, const char* message) {
    if (!ok) throw std::invalid_argument(message);
}
std::span<const std::uint8_t> bytes(std::span<const std::uint8_t> image, unsigned at, unsigned count) {
    require(at <= image.size() && count <= image.size() - at,
            "Truncated native window initialization resource");
    return image.subspan(at, count);
}
unsigned word(std::span<const std::uint8_t> image, unsigned at) {
    const auto source = bytes(image, at, 2);
    return source[0] | unsigned(source[1]) << 8;
}
unsigned content_pointer(std::span<const std::uint8_t> image, unsigned at) {
    const auto address = word(image, at) | word(image, at + 2) << 16;
    require(address >= 0xc00000 && address <= 0xffffff,
            "Window initialization font pointer is not imported content");
    return address - 0xc00000;
}
WindowArtwork decode_cell(std::span<const std::uint8_t> source) {
    WindowArtwork result;
    for (unsigned y = 0; y < 8; ++y)
        for (unsigned x = 0; x < 8; ++x)
            result[y * 8 + x] = std::uint8_t(((source[y * 2] >> (7 - x)) & 1) |
                                            (((source[y * 2 + 1] >> (7 - x)) & 1) << 1));
    return result;
}
} // namespace

std::shared_ptr<const WindowInitializationResources>
WindowInitializationResources::import(std::span<const std::uint8_t> image, GameVersion version) {
    require(version == GameVersion::US || version == GameVersion::JP,
            "Unsupported native window initialization region");
    const bool jp = version == GameVersion::JP;
    auto result = std::shared_ptr<WindowInitializationResources>(new WindowInitializationResources(version));
    // TEXT_WINDOW_GFX and FLAVOURED_TEXT_GFX extents independently declared
    // by the regional asset manifests. LOAD_WINDOW_GFX later reads retained
    // staging outside this decoded block; never synthesize that here.
    const auto base = detail::decode_hal_exact(bytes(image, 0x200000, jp ? 0x10c2 : 0x754),
                                              jp ? 0x2a00 : 0x1a00);
    result->base_.reserve(base.size() / 16);
    for (unsigned at = 0; at < base.size(); at += 16)
        result->base_.push_back(decode_cell(std::span(base).subspan(at, 16)));
    const auto patch = detail::decode_hal_exact(bytes(image, jp ? 0x2010c2 : 0x200754, 76), 112);
    for (unsigned cell = 0; cell < result->patch_.size(); ++cell)
        result->patch_[cell] = decode_cell(std::span(patch).subspan(cell * 16, 16));
    const auto properties = bytes(image, jp ? 0x201f0e : 0x201fb9, 5 * 3);
    for (unsigned flavor = 0; flavor < result->flavoured_.size(); ++flavor) {
        const auto selector = properties[flavor * 3 + 2];
        result->flavoured_[flavor] = jp ? selector != 0 : selector == 8;
    }

    // STATUS_EQUIP_WINDOW_TEXT_2 ends at the next independently declared
    // table, after49 words. Preserve spaces and wide codes; their artwork is
    // resolved against live initialization staging, not fixed font snapshots.
    const auto status = bytes(image, jp ? 0x043868 : 0x045a89, 49 * 2);
    bool terminated = false;
    for (unsigned at = 0; at < status.size(); at += 2) {
        const auto code = word(status, at);
        if (!code) {
            terminated = true;
            break;
        }
        result->status_.push_back(std::uint16_t(code));
    }
    require(terminated, "Window initialization status text leaves its declared table");

    if (!jp) {
        // LOAD_WINDOW_GFX reads the Battle entry directly, ignoring ordinary
        // PRINT_LETTER's fixed special codes and metric bytes. Its masked
        // seven-bit index can read32 records beyond the declared96 glyphs,
        // into the adjacent Tiny resources. Import precisely those2048 bytes.
        const auto entry = bytes(image, 0x03f054 + 2 * 12, 12);
        require(word(entry, 8) == 16 && word(entry, 10) == 16,
                "Window initialization Battle font dimensions differ from the source contract");
        const auto glyphs = bytes(image, content_pointer(entry, 4), 128 * 16);
        for (unsigned index = 0; index < result->battle_.size(); ++index) {
            auto& glyph = result->battle_[index];
            glyph.width = 8;
            glyph.height = 16;
            glyph.advance = 6;
            glyph.variable = true;
            glyph.pixels.fill(3);
            for (unsigned y = 0; y < 16; ++y)
                for (unsigned x = 0; x < 8; ++x)
                    glyph.pixels[y * 16 + x] =
                        std::uint8_t(1 | (((glyphs[index * 16 + y] >> (7 - x)) & 1) << 1));
        }
    }
    return result;
}

bool WindowInitializationResources::uses_flavoured_art(unsigned flavor) const {
    require(flavor >= 1 && flavor <= 5, "Window initialization flavor must be in1..5");
    return flavoured_[flavor - 1];
}
const FontGlyph& WindowInitializationResources::battle_name_glyph(std::uint8_t encoded) const {
    require(version_ == GameVersion::US, "Japanese names use live fixed artwork, not the Battle font");
    return battle_[(unsigned(encoded) - 0x50) & 0x7f];
}
} // namespace eb::native::dialogue
