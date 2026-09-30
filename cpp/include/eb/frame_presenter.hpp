#pragma once

#include <array>
#include <cstdint>
#include <span>
#include <string>
#include <vector>
#include "eb/direct_scene.hpp"
#include "eb/crt_filter.hpp"
#include "eb/scene_effects_renderer.hpp"

namespace eb {
struct FrameImage {
    int width{}, height{};
    // RGB bytes in top-to-bottom row order.
    std::vector<std::uint8_t> rgb;
    // PPM is intentionally simple and lossless for pixel-comparison tooling.
    void write_ppm(const std::string& path) const;
};

// A current OpenGL 2.1 context must outlive this object. The upload, display,
// and verification tests all use this same path for 0xAARRGGBB source pixels.
class FramePresenter {
public:
    static constexpr int width = 256, height = 224;
    FramePresenter();
    ~FramePresenter();
    FramePresenter(const FramePresenter&) = delete;
    FramePresenter& operator=(const FramePresenter&) = delete;
    // Fixed native-frame convenience overload used by hardware/video probes.
    void draw(std::span<const std::uint32_t, width * height> pixels,
              int drawable_width, int drawable_height);
    // Source size describes actual pixels; display_aspect controls the viewport.
    // Keeping these separate permits an exact ratio after rounding canvas width.
    // The optional inset reserves drawable pixels above the complete picture for
    // a menu bar. Capture still includes the full window and subsequent UI draws.
    void draw(std::span<const std::uint32_t> pixels, int source_width, int source_height,
              int drawable_width, int drawable_height, double display_aspect = 0,
              int top_inset_pixels = 0);
    // Draw source primitives at drawable resolution. False means this context
    // has no depth/stencil storage for a plain scene. Effect scenes have their
    // own depth/stencil attachments and never take that fallback.
    bool draw_scene(const DirectScenePicture& picture, int drawable_width, int drawable_height,
                    double display_aspect = 0, int top_inset_pixels = 0);
    // Reads the back buffer before swap, including letterboxing and UI overlays.
    FrameImage capture() const;
    // Apply to the last game draw before drawing any overlay. Disabled is free.
    void apply_crt(bool enabled);
    // Warm both shader paths before starting the simulation/audio clock.
    // Draws a tiny black startup picture; call before normal presentation.
    void prepare_crt();
    // Compile and draw both effect shader paths outside the simulation clock.
    void prepare_scene_effects();
private:
    std::unique_ptr<CrtFilter> crt_;
    std::unique_ptr<SceneEffectsRenderer> scene_effects_;
    int source_width_ = width, source_height_ = height;
    bool direct_scene_ = false;
    unsigned texture_{};
    unsigned scene_texture_{};
    std::shared_ptr<const DirectSceneFrame> uploaded_scene_;
    int drawable_width_{}, drawable_height_{};
    int texture_width_ = width, texture_height_ = height;
    // Reused RGBA upload storage; conversion avoids host-endianness assumptions.
    std::vector<std::uint8_t> pixels_;
    bool begin_draw(int drawable_width, int drawable_height, double aspect, int top_inset);
};
} // namespace eb
