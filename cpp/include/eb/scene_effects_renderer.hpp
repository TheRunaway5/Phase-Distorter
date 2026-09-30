#pragma once
#include "eb/direct_scene.hpp"
#include <memory>

namespace eb {
// Resolves immutable native scene layers at the current drawable viewport's
// resolution. A current OpenGL 2.1 context must outlive this object. No game
// clocks, frame readback, or canonical-resolution intermediate are involved.
class SceneEffectsRenderer {
public:
    SceneEffectsRenderer();
    ~SceneEffectsRenderer();
    SceneEffectsRenderer(const SceneEffectsRenderer&) = delete;
    SceneEffectsRenderer& operator=(const SceneEffectsRenderer&) = delete;
    // atlas_texture contains picture.artwork's nearest-sampled RGBA atlas.
    // Leaves the default framebuffer/current viewport ready for CRT and UI.
    void draw(const DirectScenePicture& picture, unsigned atlas_texture);
private:
    struct Impl;
    std::unique_ptr<Impl> impl_;
};
}
