#pragma once
#include "eb/direct_scene.hpp"
#include "eb/native/sprite_fragment.hpp"
#include "eb/snapshot_archive.hpp"
#include <cmath>

namespace eb::native {
inline void snapshot_io(SnapshotArchive &ar, SpriteFragmentPixels &v) {
    ar(v.width, v.height, v.indices);
    if (ar.loading() && (!v.width || !v.height || v.width > 4096 || v.height > 4096 ||
        std::uint64_t(v.width) * v.height != v.indices.size()))
        throw std::runtime_error("Invalid snapshot sprite fragment");
}
}
namespace eb {
inline void snapshot_io(SnapshotArchive &ar, DirectSceneFrame::Effects &v) {
    ar(v.main, v.sub, v.math, v.masked, v.windows, v.invert, v.use_subscreen,
       v.subtract, v.half, v.clip, v.prevent, v.fixed, v.backdrop, v.brightness);
    if (ar.loading() && (unsigned(v.clip) > 3 || unsigned(v.prevent) > 3 || v.brightness > 15))
        throw std::runtime_error("Invalid snapshot scene effects");
}
inline void snapshot_io(SnapshotArchive &ar, DirectSceneFrame::Motion &v) {
    ar(v.identity, v.x, v.y);
    if (ar.loading() && (!std::isfinite(v.x) || !std::isfinite(v.y)))
        throw std::runtime_error("Invalid snapshot scene motion");
}
inline void snapshot_io(SnapshotArchive &ar, DirectSceneFrame::Quad &v) {
    ar(v.u, v.v, v.width, v.height, v.x, v.y, v.priority, v.motion, v.object,
       v.clip.left, v.clip.top, v.clip.right, v.clip.bottom, v.layer, v.color_math_eligible);
    if (ar.loading() && (!std::isfinite(v.x) || !std::isfinite(v.y) ||
        std::isnan(v.clip.left) || std::isnan(v.clip.top) || std::isnan(v.clip.right) ||
        std::isnan(v.clip.bottom) || unsigned(v.layer) > 5))
        throw std::runtime_error("Invalid snapshot scene quad");
}
inline void snapshot_io(SnapshotArchive &ar, DirectSceneFrame &v) {
    ar(v.width, v.atlas_width, v.atlas_height, v.frame, v.scene_identity, v.atlas,
       v.motions, v.quads, v.palette_indices, v.effects);
    if (!ar.loading()) return;
    if (!v.width || v.width > 4096 || !v.atlas_width || v.atlas_width > 4096 ||
        !v.atlas_height || v.atlas_height > 16384 ||
        std::uint64_t(v.atlas_width) * v.atlas_height != v.atlas.size() ||
        (!v.palette_indices.empty() && v.palette_indices.size() != v.atlas.size()))
        throw std::runtime_error("Invalid snapshot scene dimensions");
    for (const auto &quad : v.quads)
        if (quad.u > v.atlas_width || quad.width > v.atlas_width - quad.u ||
            quad.v > v.atlas_height || quad.height > v.atlas_height - quad.v ||
            quad.motion >= v.motions.size())
            throw std::runtime_error("Invalid snapshot scene atlas reference");
}
} // namespace eb
