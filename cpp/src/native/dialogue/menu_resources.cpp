#include "eb/native/dialogue/menu_resources.hpp"
#include "detail/hal.hpp"
#include <stdexcept>

namespace eb::native::dialogue {
namespace {
std::span<const std::uint8_t> bytes(std::span<const std::uint8_t> image, unsigned at, unsigned length) {
    if (at > image.size() || length > image.size() - at)
        throw std::invalid_argument("Truncated menu resource");
    return image.subspan(at, length);
}
unsigned word(std::span<const std::uint8_t> image, unsigned at) {
    const auto value = bytes(image, at, 2);
    return value[0] | unsigned(value[1]) << 8;
}
WindowDecoration decoration(std::span<const std::uint8_t> graphics, unsigned descriptor, bool japanese) {
    unsigned offset = (descriptor & 0x3ff) * 16;
    // LOAD_WINDOW_GFX relocates the US fixed font's final segment. This is
    // import provenance only; the native artwork retains no video address.
    if (!japanese && offset >= 0x2000 && offset < 0x2a00)
        offset -= 0x1000;
    const auto source = bytes(graphics, offset, 16);
    WindowDecoration result;
    result.artwork_cell = std::uint16_t(descriptor & 0x3ff);
    for (unsigned y = 0; y < 8; ++y)
        for (unsigned x = 0; x < 8; ++x)
            result.pixels[y * 8 + x] =
                std::uint8_t(((source[y * 2] >> (7 - x)) & 1) | (((source[y * 2 + 1] >> (7 - x)) & 1) << 1));
    result.palette = std::uint8_t((descriptor >> 10) & 7);
    result.priority = descriptor & 0x2000;
    result.flip_horizontal = descriptor & 0x4000;
    result.flip_vertical = descriptor & 0x8000;
    return result;
}
} // namespace
std::shared_ptr<const MenuResources> MenuResources::import(std::span<const std::uint8_t> image,
                                                           GameVersion version) {
    if (version != GameVersion::US && version != GameVersion::JP)
        throw std::invalid_argument("Unsupported menu resource region");
    const bool jp = version == GameVersion::JP;
    auto result = std::shared_ptr<MenuResources>(new MenuResources(version));
    const auto graphics =
        detail::decode_hal_exact(bytes(image, 0x200000, jp ? 0x10c2 : 0x754), jp ? 0x2a00 : 0x1a00);
    // Independently linked C3E406/C3E40A: two top words followed by two bottom
    // words. These are not two consecutive top/bottom descriptor pairs.
    const unsigned markers = jp ? 0x03e3e8 : 0x03e406;
    for (unsigned frame = 0; frame < 2; ++frame)
        for (unsigned half = 0; half < 2; ++half)
            result->blink_[frame][half] =
                decoration(graphics, word(image, markers + half * 4 + frame * 2), jp);
    // C3E44C is a declared four-byte authored string in both linked packs.
    const auto label = bytes(image, jp ? 0x03e42e : 0x03e44c, 4);
    if (label.back() != 0)
        throw std::invalid_argument("Menu page label is not terminated in its declared resource");
    for (auto value : label) {
        if (!value)
            break;
        result->next_page_label_.push_back(value);
    }
    return result;
}
const std::array<WindowDecoration, 2> &MenuResources::blink(unsigned frame) const { return blink_.at(frame); }
} // namespace eb::native::dialogue
