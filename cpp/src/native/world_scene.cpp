#include "eb/native/world_scene.hpp"
#include <algorithm>
#include <cmath>
#include <map>
#include <optional>
#include <stdexcept>
#include <tuple>

namespace eb::native {
std::shared_ptr<const DirectSceneFrame> draw_world_scene(const WorldMapArea &area,
                                                         const AreaPalettes &palettes,
                                                         const WorldSceneView &view,
                                                         std::shared_ptr<const DirectSceneFrame> actors) {
    if (!std::isfinite(view.camera_x) || !std::isfinite(view.camera_y) || view.width < 256 ||
        view.width > 4096 || view.overscan > 4096 || std::abs(view.camera_x) > 1000000 ||
        std::abs(view.camera_y) > 1000000)
        throw std::invalid_argument("Invalid native world scene view");
    if (area.combination() != palettes.selected.group)
        throw std::invalid_argument("Native scenery and palette belong to different areas");
    if (actors && (actors->width != view.width || actors->frame != view.frame ||
                   actors->scene_identity != view.scene_identity || actors->atlas_width != 1024 ||
                   !actors->atlas_height || actors->atlas_height > 4096 ||
                   actors->atlas.size() != std::size_t(actors->atlas_width) * actors->atlas_height))
        throw std::invalid_argument("Native scenery and actors describe different frames");
    auto scene = actors ? std::make_shared<DirectSceneFrame>(*actors) : std::make_shared<DirectSceneFrame>();
    auto object_quads = std::move(scene->quads);
    scene->quads.clear();
    scene->width = view.width;
    scene->frame = view.frame;
    scene->scene_identity = view.scene_identity;
    scene->atlas_width = 1024;
    // Reserve the rows occupied by immutable sprite artwork. The scenery atlas
    // packs8x8 images independently and deduplicates palette/flip variants.
    const unsigned first_row = ((scene->atlas_height + 7) / 8) * 8;
    scene->atlas_height = std::max(1u, first_row);
    scene->atlas.resize(std::size_t(scene->atlas_width) * scene->atlas_height);
    scene->palette_indices.resize(scene->atlas.size(), 256);
    unsigned tiles = 0;
    const auto upload = [&](const std::array<std::uint32_t, 64> &pixels) {
        const unsigned u = (tiles % 128) * 8, v = first_row + (tiles / 128) * 8;
        if (v + 8 > 4096)
            throw std::length_error("Native world scene needs another texture page");
        ++tiles;
        scene->atlas_height = std::max(scene->atlas_height, v + 8);
        scene->atlas.resize(std::size_t(scene->atlas_width) * scene->atlas_height);
    scene->palette_indices.resize(scene->atlas.size(), 256);
        for (unsigned y = 0; y < 8; ++y)
            std::copy_n(pixels.begin() + y * 8, 8, scene->atlas.begin() + (v + y) * scene->atlas_width + u);
        return std::pair(u, v);
    };
    // Background identity zero intentionally opts out of the old frame-history
    // sampler. Native callers render the supplied camera directly at any rate.
    const unsigned motion = scene->motions.size();
    const float left = view.camera_x - (view.width - 256) / 2.f;
    scene->motions.push_back({0, -left, -view.camera_y});
    const int min_x = int(std::floor((left - view.overscan) / 8));
    const int max_x = int(std::ceil((left + view.width + view.overscan) / 8));
    // The first visible source row is world camera Y+1, just as sprite drawing
    // registers authored anchors one pixel above their projected Y.
    const int min_y = int(std::floor((view.camera_y + 1 - view.overscan) / 8));
    const int max_y = int(std::ceil((view.camera_y + 225 + view.overscan) / 8));
    // Both native consumers start with opaque black. Ordinary world scenes
    // need no backing geometry; a colored scene explicitly supplies its layer.
    std::optional<std::pair<unsigned, unsigned>> backing;
    if (view.backdrop & 0xffffff) {
        std::array<std::uint32_t, 64> background;
        background.fill(view.backdrop | 0xff000000u);
        backing = upload(background);
    }
    using TileKey = std::tuple<unsigned, unsigned, bool, bool>;
    struct Texture {
        unsigned u{}, v{};
        bool visible{};
    };
    std::map<TileKey, Texture> textures;
    for (int y = min_y; y < max_y; ++y)
        for (int x = min_x; x < max_x; ++x) {
            const float output_x = x * 8.f - left, output_y = y * 8.f - view.camera_y - 1;
            if (backing) {
                scene->quads.push_back(
                    {backing->first, backing->second, 8, 8, output_x, output_y, -1, motion, false});
                scene->quads.back().layer = DirectSceneFrame::Layer::Backdrop;
            }
            for (const auto layer : {MapLayer::Base, MapLayer::Foreground}) {
                const auto tile = area.tile(x, y, layer);
                const TileKey key{tile.graphic, tile.palette, tile.flip_x, tile.flip_y};
                auto [found, inserted] = textures.try_emplace(key);
                if (inserted) {
                    const auto &indexed = area.graphics().at(tile.graphic);
                    std::array<std::uint32_t, 64> pixels{};
                    std::array<std::uint16_t, 64> indices{};
                    for (unsigned row = 0; row < 8; ++row)
                        for (unsigned column = 0; column < 8; ++column) {
                            const auto index = indexed[(tile.flip_y ? 7 - row : row) * 8 +
                                                       (tile.flip_x ? 7 - column : column)];
                            if (!index)
                                continue;
                            if (index >= 16 || tile.palette < 2 || tile.palette >= 8)
                                throw std::runtime_error("Native map requires an unported scene palette");
                            indices[row * 8 + column] = tile.palette * 16 + index;
                            pixels[row * 8 + column] =
                                palettes.scenery[tile.palette - 2][index] | 0xff000000u;
                            found->second.visible = true;
                        }
                    if (found->second.visible) {
                        const auto [u, v] = upload(pixels);
                        for (unsigned row = 0; row < 8; ++row)
                            std::copy_n(indices.begin() + row * 8, 8, scene->palette_indices.begin() + (v + row) * scene->atlas_width + u);
                        found->second.u = u;
                        found->second.v = v;
                    }
                }
                if (found->second.visible) {
                    const auto &texture = found->second;
                    const int priority =
                        layer == MapLayer::Base ? (tile.priority ? 9 : 6) : (tile.priority ? 8 : 5);
                    scene->quads.push_back(
                        {texture.u, texture.v, 8, 8, output_x, output_y, priority, motion, false});
                    scene->quads.back().layer = layer == MapLayer::Base ? DirectSceneFrame::Layer::Background1 : DirectSceneFrame::Layer::Background2;
                }
            }
        }
    // The GL consumer starts first-opaque sprite stencil selection at the first
    // object command. All scenery must precede it, including low-priority
    // backing, while the actor list keeps its original front-to-back order.
    scene->quads.insert(scene->quads.end(), object_quads.begin(), object_quads.end());
    return scene;
}
} // namespace eb::native
