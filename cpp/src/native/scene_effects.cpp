#include "eb/native/scene_effects.hpp"

namespace eb::native {
DirectSceneFrame::Effects capture_scene_effects(const WorldEncounterVisualState& visual,
    std::uint32_t backdrop, const EncounterWindowMask* published_rows) {
    DirectSceneFrame::Effects out;
    out.main = visual.visible_layers;
    out.sub = visual.subscreen_layers;
    out.math = visual.color_math_layers;
    out.masked = visual.window_layers;
    out.invert = visual.window_invert;
    out.use_subscreen = visual.use_subscreen;
    out.subtract = visual.subtract;
    out.half = visual.half_intensity;
    out.clip = DirectSceneFrame::WindowPolicy(visual.clip_colors);
    out.prevent = DirectSceneFrame::WindowPolicy(visual.prevent_math);
    out.fixed = {visual.fixed_color.red, visual.fixed_color.green, visual.fixed_color.blue};
    out.backdrop = backdrop;
    EncounterWindowMask windows;
    if (published_rows) windows = *published_rows;
    else if (visual.window_pattern && visual.window_rows_enabled) {
        windows = *visual.window_pattern;
        if (!visual.writes_second_window)
            for (auto& row : windows) row[1] = {visual.window_left[1], visual.window_right[1]};
    } else for (auto& row : windows)
        for (unsigned i = 0; i < 2; ++i) row[i] = {visual.window_left[i], visual.window_right[i]};
    for (unsigned y = 0; y < 224; ++y)
        out.windows[y] = {windows[y][0].left, windows[y][0].right,
                          windows[y][1].left, windows[y][1].right};
    return out;
}
} // namespace eb::native
