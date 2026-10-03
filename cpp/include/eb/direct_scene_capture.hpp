#pragma once
#include "eb/direct_scene.hpp"
#include "eb/scene_read_view.hpp"
#include <array>

namespace eb {
class SnapshotArchive;
class GameSceneRenderer;
// Captures source draw commands only when requested. The visible scanlines
// verify that raster state stayed compatible, then publish an immutable frame.
class DirectSceneCapture {
  public:
    void snapshot_io(SnapshotArchive &archive);
    void enable(bool enabled);
    void scanline(const SceneReadView &view, GameSceneRenderer &renderer, unsigned y);
    std::shared_ptr<const DirectSceneFrame> frame() const { return published_; }

  private:
    std::shared_ptr<DirectSceneFrame> build(const SceneReadView &view, GameSceneRenderer &renderer);
    bool enabled_{}, valid_{};
    std::shared_ptr<DirectSceneFrame> pending_;
    std::shared_ptr<const DirectSceneFrame> published_;
    std::vector<std::uint8_t> registers_, video_, palette_, objects_;
    std::array<std::uint16_t, 8> scroll_{};
    std::uint16_t fixed_{};
};
} // namespace eb
