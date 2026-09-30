#pragma once

#include <algorithm>
#include <cmath>

namespace eb {
// Numeric values are persisted by the frontend; keep their order stable.
enum class AspectRatio { Native, FourThree, SixteenTen, SixteenNine, TwentyOneNine, Window, Custom };

// Host presentation preferences. Picture settings never change game state;
// VRR selects host pacing without altering the emulated hardware clock ratios.
struct DisplaySettings {
    static constexpr int native_width = 256;
    static constexpr int native_height = 224;
    static constexpr int maximum_width = 1024;
    bool widescreen = false;
    // Optional host-picture processing, independent of aspect ratio. Keeping it
    // off by default preserves the original output until a user opts in.
    bool reduce_flashing = false;
    bool crt_filter = false;
    bool variable_refresh = false;
    // 60 selects the original cadence; 0 means uncapped presentation.
    int frame_limit = 60;
    bool interpolate_frames = true;
    // Source-scene rendering takes precedence over legacy frame generation.
    bool direct_rendering = true;
    bool high_frame_rate() const { return frame_limit == 0 || frame_limit > 60; }
    static bool valid_frame_limit(int value) { return value == 0 || (value >= 60 && value <= 300); }
    AspectRatio aspect = AspectRatio::SixteenNine;
    float custom_aspect = 16.f / 9.f;

    // Validate at the point of use as well as in the UI: callers may construct
    // settings directly, and a minimized window can report a zero drawable size.
    double target_aspect(int drawable_width, int drawable_height) const {
        constexpr double native = double(native_width) / native_height;
        if (!widescreen) return native;
        double value = native;
        switch (aspect) {
        case AspectRatio::Native: value = native; break;
        case AspectRatio::FourThree: value = 4.0 / 3.0; break;
        case AspectRatio::SixteenTen: value = 16.0 / 10.0; break;
        case AspectRatio::SixteenNine: value = 16.0 / 9.0; break;
        case AspectRatio::TwentyOneNine: value = 21.0 / 9.0; break;
        case AspectRatio::Window:
            value = drawable_height > 0 ? double(drawable_width) / drawable_height : native;
            break;
        case AspectRatio::Custom: value = custom_aspect; break;
        }
        if (!std::isfinite(value)) return native;
        // Widescreen adds horizontal coverage. It never crops the native image
        // or asks the renderer to allocate beyond its supported canvas bound.
        return std::clamp(value, native, double(maximum_width) / native_height);
    }

    int render_width(int drawable_width, int drawable_height) const {
        // An even extension keeps the original 256 columns exactly centered.
        const auto width = int(std::lround(target_aspect(drawable_width, drawable_height) * native_height / 2)) * 2;
        return std::clamp(width, native_width, maximum_width);
    }
};
} // namespace eb
