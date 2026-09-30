#pragma once

#include <cstdint>
#include <array>
#include <optional>
#include <memory>
#include <limits>
#include <span>
#include <vector>

namespace eb {
// Immutable source artwork and draw commands for one completed game frame.
// Atlas pixels have binary alpha; no completed pictures are blended or warped.
struct DirectSceneFrame {
    enum class Layer : unsigned { Background1, Background2, Background3, Background4, Actors, Backdrop };
    enum class WindowPolicy : unsigned { Never, Outside, Inside, Always };
    struct Effects {
        std::array<bool, 5> main{}, sub{};
        std::array<bool, 6> math{}, masked{};
        // Inclusive left/right for each of two windows, in canonical pixels.
        std::array<std::array<std::uint8_t, 4>, 224> windows{};
        bool invert{}, use_subscreen{}, subtract{}, half{};
        WindowPolicy clip = WindowPolicy::Never, prevent = WindowPolicy::Never;
        std::array<std::uint8_t, 3> fixed{};
        std::uint32_t backdrop = 0xff000000;
        unsigned brightness = 15;
    };
    struct Motion {
        std::uint64_t identity{};
        float x{}, y{};
    };
    struct Quad {
        unsigned u{}, v{}, width{}, height{};
        float x{}, y{};
        int priority{};
        unsigned motion{};
        bool object{}; // OAM overlap resolves before background priority.
        // Fixed display-space bounds, applied after motion. Infinite defaults
        // preserve ordinary scenery/actors. A moving margin-only resource may
        // cross its boundary, but it cannot paint the canonical center.
        struct Clip {
            float left = -std::numeric_limits<float>::infinity();
            float top = -std::numeric_limits<float>::infinity();
            float right = std::numeric_limits<float>::infinity();
            float bottom = std::numeric_limits<float>::infinity();
        } clip{};
        Layer layer = Layer::Background1;
        bool color_math_eligible = true;
    };
    unsigned width{}, atlas_width{}, atlas_height{};
    std::uint64_t frame{}, scene_identity{};
    std::vector<std::uint32_t> atlas;
    std::vector<Motion> motions;
    std::vector<Quad> quads;
    // Per-texel authored palette identity. Empty means direct literal colors;
    //256 marks a literal texel in a mixed atlas. Alpha remains in atlas.
    std::vector<std::uint16_t> palette_indices;
    std::optional<Effects> effects;
};

struct DirectScenePicture {
    struct Offset {
        float x{}, y{};
    };
    std::shared_ptr<const DirectSceneFrame> artwork;
    std::vector<Offset> offsets;
};

// Position history only. Discontinuous frames/scenes/actors snap to their new
// source state. The graphics themselves always come from the current frame.
class DirectSceneMotion {
  public:
    void reset();
    void submit(std::shared_ptr<const DirectSceneFrame> frame);
    const DirectScenePicture &sample(double fraction);

  private:
    std::shared_ptr<const DirectSceneFrame> previous_;
    DirectScenePicture picture_;
    std::vector<DirectScenePicture::Offset> deltas_;
};

// Deterministic software adapter, also used to verify an exact source-frame
// reconstruction before enabling direct presentation. GL uses the same draw
// commands, preserving fractional positions at the drawable's resolution.
std::vector<std::uint32_t> rasterize_direct_scene(const DirectScenePicture &picture, unsigned scale = 1);
} // namespace eb
