#include "eb/debug_panel.hpp"
#include "eb/direct_scene.hpp"
#include "eb/display_settings.hpp"
#include "eb/frame_presenter.hpp"
#include "eb/native/sprite_actors.hpp"
#include "native_sprite_fixture.hpp"
#include <SDL.h>
#include <SDL_opengl.h>
#include <algorithm>
#include <iostream>
#include <stdexcept>

namespace {
void require(bool ok, const char *message) {
    if (!ok)
        throw std::runtime_error(message);
}
auto scene(unsigned frame, float x) {
    auto s = std::make_shared<eb::DirectSceneFrame>();
    s->width = 256;
    s->frame = frame;
    s->scene_identity = 1;
    s->atlas_width = 16;
    s->atlas_height = 48;
    s->atlas.resize(768);
    std::fill_n(s->atlas.begin(), 256, 0xff20a040);
    std::fill_n(s->atlas.begin() + 256, 256, 0xffe03050);
    std::fill_n(s->atlas.begin() + 512, 256, 0xff2040e0);
    s->motions = {{}, {7, x, 30}};
    s->quads = {{0, 0, 16, 16, 25, 30, 6, 0, false},
                {0, 16, 16, 16, x, 30, 3, 1, true},
                {0, 32, 16, 16, x, 30, 10, 1, true}};
    // Holes in the first OBJ exercise first-opaque selection independently of Z.
    for (unsigned y = 0; y < 16; ++y)
        s->atlas[(16 + y) * 16 + 8] = 0;
    return s;
}
auto effect_scene(unsigned width, unsigned variant) {
    using S = eb::DirectSceneFrame;
    auto s = std::make_shared<S>();
    s->width = s->atlas_width = width; s->atlas_height = 224 + 64;
    s->atlas.assign(width * s->atlas_height, 0xff3868b8);
    for (unsigned y = 0; y < 224; ++y)
        for (unsigned x = 0; x < width; ++x)
            if ((x / 17 + y / 19) % 3 == 0) s->atlas[y * width + x] = 0;
    for (unsigned y = 224; y < 288; ++y)
        for (unsigned x = 0; x < width; ++x)
            s->atlas[y * width + x] = x < 64 ? (x % 9 == 0 ? 0 : 0xffd0b828) : 0xff28c868;
    s->quads = {{64, 224, 64, 64, 60, 80, 6, 0, false},
                {0, 0, width, 224, 0, 0, 2, 0, false},
                {64, 224, 64, 64, 110, 60, 1, 0, false},
                {0, 224, 64, 64, 80, 60, 1, 1, true},
                {64, 224, 64, 64, 80, 60, 10, 1, true},
                {64, 224, 64, 64, 180, 100, 9, 1, true}};
    s->quads[0].layer = S::Layer::Background3;
    s->quads[2].layer = S::Layer::Background2;
    for (unsigned i = 3; i < 6; ++i) s->quads[i].layer = S::Layer::Actors;
    s->quads[5].color_math_eligible = false;
    s->quads[5].clip = {183.f, 103.f, 238.f, 160.f};
    auto& e = s->effects.emplace();
    e.main = {true, false, true, false, true};
    e.sub = {false, true, false, false, bool(variant & 1)};
    e.math = {true, true, true, true, true, true};
    e.masked = {bool(variant & 2), false, false, false, bool(variant & 4), true};
    e.invert = variant & 8; e.use_subscreen = variant & 16;
    e.subtract = variant & 32; e.half = variant & 64;
    e.clip = S::WindowPolicy(variant % 4); e.prevent = S::WindowPolicy(variant / 4 % 4);
    e.fixed = {11, 5, 17}; e.backdrop = 0xff704828; e.brightness = (variant / 8) % 16;
    for (unsigned y = 0; y < 224; ++y) {
        if (y < 50) e.windows[y] = {255, 0, 255, 0};
        else if (y >= 190) e.windows[y] = {0, 255, 255, 0};
        else e.windows[y] = {std::uint8_t(y / 2), 120, 150, std::uint8_t(255 - y / 3)};
    }
    return s;
}
void compare_effect(eb::FramePresenter& presenter, const eb::DirectScenePicture& picture,
                    unsigned scale, unsigned case_number, int inset = 0, int margin = 0) {
    const unsigned width = picture.artwork->width * scale, height = 224 * scale;
    require(presenter.draw_scene(picture, width + margin * 2, height + inset, 0, inset), "Effect draw unavailable");
    const auto actual = presenter.capture();
    const auto expected = eb::rasterize_direct_scene(picture, scale);
    for (unsigned y = 0; y < height; ++y)
        for (unsigned x = 0; x < width; ++x) {
            const auto at = ((y + inset) * actual.width + x + margin) * 3;
            const unsigned rgb = (actual.rgb[at] << 16) | (actual.rgb[at + 1] << 8) | actual.rgb[at + 2];
            if (rgb != (expected[y * width + x] & 0xffffff))
                throw std::runtime_error("GPU effect differs: case=" + std::to_string(case_number) +
                    " x=" + std::to_string(x) + " y=" + std::to_string(y) +
                    " expected=" + std::to_string(expected[y * width + x] & 0xffffff) + " actual=" + std::to_string(rgb));
        }
}
} // namespace
int main() {
    SDL_SetMainReady();
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        std::cerr << SDL_GetError() << '\n';
        return 1;
    }
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    SDL_Window *window = SDL_CreateWindow("Direct scene verification", 0, 0, 1280, 1120,
                                          SDL_WINDOW_OPENGL | SDL_WINDOW_HIDDEN);
    SDL_GLContext context = window ? SDL_GL_CreateContext(window) : nullptr;
    int result = 0;
    try {
        require(context, "Could not create direct-scene test context");
        std::cout << "OpenGL: " << glGetString(GL_VERSION) << " / " << glGetString(GL_RENDERER) << '\n';
        eb::FramePresenter present;
        present.prepare_scene_effects();
        present.prepare_crt();
        // Exercise host resources -> native actor ownership -> GL directly.
        // This path constructs no compatibility machine or graphics memory.
        native_sprite_test::Fixture native_content;
        auto native_resources = std::make_shared<eb::native::SpriteResources>(native_content.bytes, native_content.layout);
        eb::native::SpriteActors native_actors(native_resources);
        eb::native::SpritePalettes native_palettes{};
        for (auto& palette : native_palettes)
            for (unsigned color = 1; color < 16; ++color)
                palette[color] = 0xff000000 | (color * 16 << 16) | (color * 12 << 8) | color * 8;
        eb::native::SpriteActor native_actor;
        native_actor.x = 20; native_actor.y = 60;
        const auto native_id = native_actors.create(native_actor);
        eb::DirectSceneMotion native_motion;
        native_motion.submit(native_actors.draw({}, native_palettes, 1, 1));
        native_actor.x += 1; native_actor.y += 1;
        native_actors.update(native_id, native_actor);
        native_motion.submit(native_actors.draw({}, native_palettes, 2, 1));
        for (unsigned phase = 0; phase < 5; ++phase) {
            const auto& picture = native_motion.sample(phase / 5.);
            require(present.draw_scene(picture, 1280, 1120), "Native actor GL draw unavailable");
            const auto actual = present.capture();
            const auto expected = eb::rasterize_direct_scene(picture, 5);
            for (std::size_t i = 0; i < expected.size(); ++i)
                require(((actual.rgb[i * 3] << 16) | (actual.rgb[i * 3 + 1] << 8) | actual.rgb[i * 3 + 2]) ==
                        (expected[i] & 0xffffff), "Native host sprite differs between GL and software");
        }
        eb::DirectSceneMotion motion;
        motion.submit(scene(1, 20));
        motion.submit(scene(2, 21));
        std::vector<std::uint8_t> last;
        for (unsigned phase = 0; phase < 5; ++phase) {
            const auto &picture = motion.sample(phase / 5.);
            require(present.draw_scene(picture, 1280, 1120), "Direct renderer unavailable");
            const auto capture = present.capture();
            const auto expected = eb::rasterize_direct_scene(picture, 5);
            require(last.empty() || last != capture.rgb, "Fractional movement repeated a native pose");
            last = capture.rgb;
            unsigned mismatches = 0;
            for (std::size_t i = 0; i < expected.size(); ++i) {
                unsigned actual =
                    (capture.rgb[3 * i] << 16) | (capture.rgb[3 * i + 1] << 8) | capture.rgb[3 * i + 2];
                mismatches += actual != (expected[i] & 0xffffff);
            }
            require(mismatches == 0, "Direct GL output differs from source-quad rasterization");
        }
        // Fixed display-space clips apply after fractional motion. Both edge
        // masks and vertical bounds use the same texels in GL and software.
        for (bool right : {false, true}) {
            eb::DirectSceneMotion clipped_motion;
            const float x = right ? 184 : 56;
            auto previous = scene(1, x + (right ? -1 : 1)), current = scene(2, x);
            for (auto frame : {previous, current}) {
                frame->quads.erase(frame->quads.begin());
                for (auto &quad : frame->quads)
                    quad.clip = {right ? 192.f : -100.f, 31.f, right ? 300.f : 64.f, 45.f};
            }
            clipped_motion.submit(previous); clipped_motion.submit(current);
            // Keep the near-tie samples above GL's fixed subpixel coverage
            // resolution; the exact .5 texture tie remains a strict case.
            for (double phase : {0., .25, .49, .5, .51, .75, 1.}) {
                const auto &picture = clipped_motion.sample(phase);
                require(present.draw_scene(picture, 1280, 1120), "Clipped direct GL draw unavailable");
                const auto actual = present.capture();
                const auto expected = eb::rasterize_direct_scene(picture, 5);
                unsigned visible = 0;
                for (std::size_t i = 0; i < expected.size(); ++i) {
                    const unsigned rgb = (actual.rgb[i * 3] << 16) | (actual.rgb[i * 3 + 1] << 8) | actual.rgb[i * 3 + 2];
                    if (rgb != (expected[i] & 0xffffff))
                        throw std::runtime_error("Fractional clip differs between GL and software: side=" +
                            std::to_string(right) + " phase=" + std::to_string(phase) + " x=" +
                            std::to_string(i % 1280) + " y=" + std::to_string(i / 1280) +
                            " expected=" + std::to_string(expected[i] & 0xffffff) + " actual=" + std::to_string(rgb));
                    visible += rgb != 0;
                    const unsigned column = unsigned(i % 1280), row = unsigned(i / 1280);
                    if ((right ? column < 192 * 5 : column >= 64 * 5) || row < 31 * 5 || row >= 45 * 5)
                        require(rgb == 0, "Clipped actor leaked into canonical center after motion");
                }
                require(visible > 0, "GL clip test did not draw artwork");
            }
        }
        // Exercise the same immutable effect descriptor through GPU main/sub
        // resolution and CPU reference, including every clip/prevent policy,
        // arithmetic mode, actual/absent sub coverage, all brightness values,
        // first-opaque actor selection, and ineligible actor color math.
        for (unsigned variant = 0; variant < 128; ++variant) {
            auto effect = effect_scene(256, variant);
            compare_effect(present, {effect, {{}, {.2f, -.2f}}}, 2, variant);
        }
        // Dense tile runs share draw state, then change masking, math eligibility,
        // clipping and OBJ selection. Splitting artwork must preserve every
        // pixel, including transparent holes and fractional texture boundaries.
        for (unsigned variant : {0u, 19u, 82u, 127u}) {
            auto tiled = effect_scene(256, variant);
            const auto original = tiled->quads;
            tiled->quads.clear();
            for (const auto& quad : original)
                for (unsigned y = 0; y < quad.height; y += 4)
                    for (unsigned x = 0; x < quad.width; x += 4) {
                        auto tile = quad;
                        tile.u += x; tile.v += y; tile.x += x; tile.y += y;
                        tile.width = std::min(4u, quad.width - x);
                        tile.height = std::min(4u, quad.height - y);
                        tiled->quads.push_back(tile);
                    }
            for (unsigned phase = 0; phase < 3; ++phase)
                compare_effect(present, {tiled, {{}, {phase / 5.f, phase / -5.f}}}, 2, 500 + variant);
        }
        // The canonical window remains centered in wide scenes and extends its
        // edge bounds into the margins. Fractional geometry is still resolved
        // at output resolution; an inset/letterbox must not shift the mask.
        for (unsigned width : {358u, 398u, 522u, 256u})
            for (unsigned phase = 0; phase < 5; ++phase) {
                auto effect = effect_scene(width, 82 + phase);
                effect->effects->brightness = 15;
                compare_effect(present, {effect, {{}, {phase / 5.f, phase / -5.f}}}, 2,
                               width * 10 + phase, 28, 10);
            }
        // CRT reads the resolved GPU picture and preserves its orientation and
        // fractional motion; returning to an effect draw cannot retain CRT/UI
        // shaders, textures, framebuffer, or viewport from a previous pass.
        last.clear();
        for (unsigned phase = 0; phase < 5; ++phase) {
            auto effect = effect_scene(256, 80); effect->effects->brightness = 15;
            effect->effects->clip = effect->effects->prevent = eb::DirectSceneFrame::WindowPolicy::Never;
            compare_effect(present, {effect, {{}, {phase / 5.f, phase / -5.f}}}, 5, 200 + phase);
            const auto unfiltered = present.capture(); present.apply_crt(true);
            const auto filtered = present.capture();
            require(filtered.rgb != unfiltered.rgb, "Effect CRT did not process GPU picture");
            require(last.empty() || filtered.rgb != last, "Effect CRT lost fractional movement");
            last = filtered.rgb;
        }
        std::cout << "GPU effect pictures matched software masks/layers/RGB5 arithmetic, including 16:10; CRT motion passed\n";
        // Failed descriptors must fail explicitly and leave the next valid GPU
        // effect usable, rather than selecting an unfiltered/CPU fallback.
        for (bool invalid_fixed : {false, true}) {
            auto invalid = effect_scene(256, 80);
            if (invalid_fixed) invalid->effects->fixed[1] = 32;
            else invalid->effects->brightness = 16;
            bool rejected = false;
            try { present.draw_scene({invalid, {}}, 1280, 1120); }
            catch (const std::invalid_argument&) { rejected = true; }
            require(rejected, "Invalid effect color accepted");
            auto valid = effect_scene(256, 80);
            compare_effect(present, {valid, {}}, 2, 300 + invalid_fixed);
        }
        // Returning to canonical pictures must discard depth/stencil/alpha state.
        std::vector<std::uint32_t> pixels(256 * 224, 0xff18c74a);
        present.draw(pixels, 256, 224, 1280, 1120);
        const auto image = present.capture();
        for (std::size_t i = 0; i < image.rgb.size(); i += 3)
            require(image.rgb[i] == 0x18 && image.rgb[i + 1] == 0xc7 && image.rgb[i + 2] == 0x4a,
                    "Source draw leaked GL state into fallback");
        // The actual menu renderer shares this context even when settings are
        // closed. Exercise repeated native and direct frames with it present.
        pixels.assign(398 * 224, 0xff18c74a);
        eb::DebugPanel panel(window, context);
        eb::DisplaySettings settings;
        eb::DebugDiagnostics stats;
        stats.drawable_width = 1280;
        stats.drawable_height = 1120;
        for (unsigned tick = 0; tick < 120; ++tick) {
            if (tick < 60) {
                constexpr unsigned widths[] = {398, 522, 1024, 256, 398};
                const auto canvas_width = widths[tick / 12];
                pixels.assign(canvas_width * 224, 0xff18c74a);
                present.draw(pixels, canvas_width, 224, 1280, 1120);
            } else
                require(present.draw_scene(motion.sample((tick % 5) / 5.), 1280, 1120),
                        "UI direct draw unavailable");
            const auto before = present.capture();
            if (tick < 60 && before.rgb[(1280 * 560 + 640) * 3] != 0x18)
                throw std::runtime_error("Widescreen native draw is black before UI at tick " +
                                         std::to_string(tick));
            panel.draw(settings, stats);
            const auto after = present.capture();
            // The persistent menu occupies the top rows only.
            require(std::equal(before.rgb.begin() + 1280 * 30 * 3, before.rgb.end(),
                               after.rgb.begin() + 1280 * 30 * 3),
                    "Menu draw erased the game picture");
            if (tick < 60)
                require(after.rgb[(1280 * 560 + 640) * 3] == 0x18, "Native picture black after menu draw");
            else {
                const auto expected = eb::rasterize_direct_scene(motion.sample((tick % 5) / 5.), 5);
                for (std::size_t at = 1280 * 30; at < expected.size(); ++at)
                    require(((after.rgb[3 * at] << 16) | (after.rgb[3 * at + 1] << 8) |
                             after.rgb[3 * at + 2]) == (expected[at] & 0xffffff),
                            "Direct picture black after menu draw");
            }
            SDL_GL_SwapWindow(window);
        }
        // Match CRT reconstruction softness when the identical artwork is drawn
        // through the native texture and the high-resolution source path.
        auto edges = std::make_shared<eb::DirectSceneFrame>();
        edges->width = edges->atlas_width = 256;
        edges->atlas_height = 224;
        edges->atlas.assign(256 * 224, 0xff000000);
        edges->motions = {{}};
        edges->quads = {{0, 0, 256, 224, 0, 0, 0, 0, false}};
        for (unsigned y = 0; y < 224; ++y)
            for (unsigned x = 0; x < 256; ++x)
                if ((x >= 64 && x < 128) || (y >= 80 && y < 144))
                    edges->atlas[y * 256 + x] = 0xffc0c0c0;
        for (unsigned scale : {3u, 4u, 5u}) {
            present.draw(edges->atlas, 256, 224, 256 * scale, 224 * scale);
            present.apply_crt(true);
            const auto native_edges = present.capture();
            require(present.draw_scene({edges, {{}}}, 256 * scale, 224 * scale), "Edge fixture draw failed");
            present.apply_crt(true);
            const auto direct_edges = present.capture();
            // The blur spills light over both a vertical and a horizontal edge.
            // Average whole RGB mask periods and scanlines instead of a single
            // output pixel, which can sit on a phosphor/beam trough.
            auto spill = [scale](const eb::FrameImage& image, bool vertical) {
                double sum = 0;
                unsigned count = 0;
                for (unsigned along = 20 * scale; along < 32 * scale; ++along)
                    for (unsigned across = 1; across < scale; ++across) {
                        const unsigned x = vertical ? 64 * scale - across : along;
                        const unsigned y = vertical ? along : 80 * scale - across;
                        for (unsigned c = 0; c < 3; ++c) {
                            sum += image.rgb[(y * image.width + x) * 3 + c];
                            ++count;
                        }
                    }
                return sum / count;
            };
            bool matching_softness = true;
            for (bool vertical : {true, false}) {
                const auto n = spill(native_edges, vertical), d = spill(direct_edges, vertical);
                std::cout << "CRT scale=" << scale << " edge spill " << (vertical ? "horizontal" : "vertical")
                          << " native=" << n << " direct=" << d << '\n';
                matching_softness &= d >= n * 0.85 && d <= n * 1.15;
            }
            require(matching_softness, "Direct rendering changes CRT reconstruction softness");
        }
        // The flat CRT shader must compile on the real GL context, preserve
        // orientation/corners, leave black black, and restore fixed-function UI.
        pixels.assign(398 * 224, 0xff909090);
        std::fill_n(pixels.begin(), 398 * 80, 0xffe01010);
        std::fill(pixels.begin() + 398 * 144, pixels.end(), 0xff1010e0);
        present.draw(pixels, 398, 224, 1194, 672);
        const auto plain = present.capture();
        present.apply_crt(false);
        require(present.capture().rgb == plain.rgb, "Disabled CRT changed pixels");
        present.apply_crt(true);
        const auto crt = present.capture();
        require(crt.rgb != plain.rgb, "CRT shader did not process the picture");
        const auto channel = [&](int x, int y, int c) { return crt.rgb[(y * crt.width + x) * 3 + c]; };
        require(channel(0, 0, 0) > 80 && channel(1193, 671, 2) > 80,
                "CRT curved/cropped corners or flipped the native image");
        require(channel(500, 10, 0) > channel(500, 10, 2) &&
                channel(500, 650, 2) > channel(500, 650, 0), "CRT native image orientation changed");
        require(channel(500, 319, 0) != channel(500, 320, 0), "CRT scanline pattern missing");
        require(channel(501, 320, 0) != channel(502, 320, 0) ||
                channel(501, 320, 1) != channel(502, 320, 1), "CRT phosphor mask missing");
        present.draw(pixels, 398, 224, 1194, 672);
        require(present.capture().rgb == plain.rgb, "Disabling CRT failed to restore the native image");
        last.clear();
        for (unsigned phase = 0; phase < 5; ++phase) {
            require(present.draw_scene(motion.sample(phase / 5.), 1280, 1120), "CRT source draw unavailable");
            present.apply_crt(true);
            const auto filtered = present.capture();
            require(last.empty() || last != filtered.rgb, "CRT collapsed fractional motion to native poses");
            require(filtered.rgb[0] == 0 && filtered.rgb[1] == 0 && filtered.rgb[2] == 0,
                    "CRT lifted black or retained a previous picture");
            // Objects live near row 30; copied GL textures must not flip them.
            unsigned top = 0, bottom = 0;
            for (unsigned y = 140; y < 240; ++y)
                for (unsigned x = 90; x < 210; ++x) {
                    top += filtered.rgb[(y * 1280 + x) * 3];
                    bottom += filtered.rgb[((1119 - y) * 1280 + x) * 3];
                }
            require(top > 10000 && bottom == 0, "CRT direct image orientation changed");
            last = filtered.rgb;
            panel.draw(settings, stats);
            const auto overlay = present.capture();
            require(std::equal(filtered.rgb.begin() + 1280 * 30 * 3, filtered.rgb.end(),
                               overlay.rgb.begin() + 1280 * 30 * 3), "CRT leaked GL state into the menu");
            SDL_GL_SwapWindow(window);
        }
        // Vertical subpixel motion must also survive the CRT's row kernel.
        auto vertical_before = scene(1, 20), vertical_after = scene(2, 20);
        vertical_after->motions[1].y += 1;
        for (auto& quad : vertical_after->quads)
            if (quad.motion == 1) quad.y += 1;
        eb::DirectSceneMotion vertical_motion;
        vertical_motion.submit(vertical_before);
        vertical_motion.submit(vertical_after);
        last.clear();
        for (unsigned phase = 0; phase < 5; ++phase) {
            require(present.draw_scene(vertical_motion.sample(phase / 5.), 1280, 1120),
                    "Vertical CRT source draw unavailable");
            present.apply_crt(true);
            const auto filtered = present.capture();
            require(last.empty() || last != filtered.rgb, "CRT collapsed vertical fractional motion");
            last = filtered.rgb;
        }
        pixels.assign(522 * 224, 0xff000000);
        present.draw(pixels, 522, 224, 1280, 1120);
        present.apply_crt(true);
        const auto black = present.capture();
        require(std::all_of(black.rgb.begin(), black.rgb.end(), [](auto c){ return c == 0; }),
                "CRT black is not black after resize and scene switch");
        // Effects own their depth/stencil attachments. The default framebuffer
        // may contain only color, without forcing a software/native-size path.
        SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 0); SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 0);
        SDL_Window* color_window = SDL_CreateWindow("Color-only effect context", 0, 0, 256, 224,
                                                   SDL_WINDOW_OPENGL | SDL_WINDOW_HIDDEN);
        SDL_GLContext color_context = color_window ? SDL_GL_CreateContext(color_window) : nullptr;
        try {
            require(color_context, "Could not create color-only effect context");
            GLint depth{}, stencil{}; glGetIntegerv(GL_DEPTH_BITS, &depth); glGetIntegerv(GL_STENCIL_BITS, &stencil);
            require(depth == 0 && stencil == 0, "Color-only fixture has unexpected default depth/stencil");
            eb::FramePresenter color_present; color_present.prepare_scene_effects();
            auto effect = effect_scene(256, 80); effect->effects->brightness = 15;
            compare_effect(color_present, {effect, {}}, 1, 400);
        } catch (...) {
            if (color_context) SDL_GL_DeleteContext(color_context);
            if (color_window) SDL_DestroyWindow(color_window);
            SDL_GL_MakeCurrent(window, context); throw;
        }
        SDL_GL_DeleteContext(color_context); SDL_DestroyWindow(color_window);
        SDL_GL_MakeCurrent(window, context);
        std::cout << "Color-only default framebuffer GPU effects passed\n";
        std::cout << "Direct GL fractional motion, occlusion, fallback and flat CRT passed\n";
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        result = 1;
    }
    if (context)
        SDL_GL_DeleteContext(context);
    if (window)
        SDL_DestroyWindow(window);
    SDL_Quit();
    return result;
}
