#include "eb/native/story/window_layer.hpp"
#include <algorithm>
#include <limits>
#include <stdexcept>

namespace eb::native::story {
namespace {
std::uint32_t color(std::uint16_t rgb) {
    const auto expand = [](unsigned value) { return (value << 3) | (value >> 2); };
    return 0xff000000u | (expand(rgb & 31) << 16) | (expand((rgb >> 5) & 31) << 8) |
           expand((rgb >> 10) & 31);
}
} // namespace
std::shared_ptr<const DirectSceneFrame> with_window_layer(
    const DirectSceneFrame &world, const dialogue::TextFrame &published,
    const std::array<std::uint16_t, 32> &palette, bool raised_priority) {
    constexpr unsigned width = 256, height = 224;
    if (world.width < width || published.width != width || published.height != height ||
        published.pixels.size() != width * height || published.priority.size() != width * height)
        throw std::invalid_argument("Dialogue layer requires a full canonical window frame and a wide enough world");
    if (world.atlas.size() != std::size_t(world.atlas_width) * world.atlas_height ||
        (world.atlas_height && !world.atlas_width))
        throw std::invalid_argument("World frame has an invalid atlas extent");
    if (!world.palette_indices.empty() && world.palette_indices.size() != world.atlas.size())
        throw std::invalid_argument("World palette identity atlas has invalid extent");
    if (world.atlas_height > std::numeric_limits<unsigned>::max() - height * 2)
        throw std::length_error("World atlas cannot accommodate the dialogue layer");
    bool visible[2]{};
    for (unsigned i = 0; i < width * height; ++i) {
        if (published.pixels[i] >= palette.size() || published.priority[i] > 1)
            throw std::invalid_argument("Dialogue layer has an invalid palette or priority index");
        if (published.pixels[i]) visible[published.priority[i]] = true;
    }
    if (!visible[0] && !visible[1]) return std::make_shared<DirectSceneFrame>(world);

    // Repack only when a caller supplied a narrower world atlas. World pixel
    // coordinates, primitive ordering and all prior immutable frames survive.
    const auto atlas_width = std::max(width, world.atlas_width);
    const auto atlas_height = world.atlas_height + height * unsigned(visible[0] + visible[1]);
    if (atlas_width > 4096 || atlas_height > 4096)
        throw std::length_error("Combined world and dialogue atlas exceeds the presentation limit");
    auto result = std::make_shared<DirectSceneFrame>(world);
    std::vector<std::uint32_t> atlas(std::size_t(atlas_width) * atlas_height);
    for (unsigned row = 0; row < world.atlas_height; ++row)
        std::copy_n(world.atlas.begin() + std::size_t(row) * world.atlas_width, world.atlas_width,
                    atlas.begin() + std::size_t(row) * atlas_width);
    std::vector<std::uint16_t> indices(atlas.size(), 256);
    if (!world.palette_indices.empty())
        for (unsigned row = 0; row < world.atlas_height; ++row)
            std::copy_n(world.palette_indices.begin() + std::size_t(row) * world.atlas_width, world.atlas_width,
                        indices.begin() + std::size_t(row) * atlas_width);
    const unsigned ui_motion = result->motions.size();
    // Identity0 opts out of actor/camera interpolation. Text is always a new
    // completed publication centered in the original256-column viewport.
    result->motions.push_back({0, 0, 0});
    std::vector<DirectSceneFrame::Quad> quads;
    unsigned base_y = world.atlas_height;
    for (unsigned priority = 0; priority < 2; ++priority) {
        if (!visible[priority]) continue;
        for (unsigned y = 0; y < height; ++y)
            for (unsigned x = 0; x < width; ++x) {
                const unsigned from = y * width + x;
                if (published.pixels[from] && published.priority[from] == priority) {
                    atlas[std::size_t(base_y + y) * atlas_width + x] = color(palette[published.pixels[from]]);
                    indices[std::size_t(base_y + y) * atlas_width + x] = published.pixels[from];
                }
            }
        quads.push_back({0, base_y, width, height, (world.width - width) / 2.f, 0.f,
                         priority ? (raised_priority ? 11 : 2) : 0, ui_motion, false});
        quads.back().layer = DirectSceneFrame::Layer::Background3;
        base_y += height;
    }
    // The GL adapter begins OAM stencil selection at the first object. All
    // backgrounds, including this text layer, must precede that object list.
    const auto objects = std::find_if(result->quads.begin(), result->quads.end(),
                                      [](const auto &quad) { return quad.object; });
    result->quads.insert(objects, quads.begin(), quads.end());
    result->atlas_width = atlas_width;
    result->atlas_height = atlas_height;
    result->atlas = std::move(atlas);
    result->palette_indices = std::move(indices);
    return result;
}
} // namespace eb::native::story
