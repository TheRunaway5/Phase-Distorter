// Verify host presentation with synthetic pixel patterns and real GL readback.
// These checks isolate texture upload, scaling, orientation, and letterboxing
// from the emulated PPU; they are not reference-game screenshot comparisons.
#include "eb/frame_presenter.hpp"
#include "eb/display_settings.hpp"

#include <SDL.h>
#include <SDL_opengl.h>

#include <algorithm>
#include <array>
#include <iostream>
#include <stdexcept>
#include <string>
#include <limits>
#include <vector>

namespace {
void verify(int scale, int horizontal_padding, int vertical_padding, int source_width = 256,
            int top_inset = 0) {
    const int screen_width = source_width * scale + horizontal_padding * 2;
    const int screen_height = eb::FramePresenter::height * scale + vertical_padding * 2 + top_inset;
    SDL_Window* window = SDL_CreateWindow("C++ framebuffer verification", SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED, screen_width, screen_height, SDL_WINDOW_OPENGL | SDL_WINDOW_HIDDEN);
    if (!window) throw std::runtime_error(std::string("SDL window: ") + SDL_GetError());
    SDL_GLContext context = SDL_GL_CreateContext(window);
    if (!context) {
        SDL_DestroyWindow(window);
        throw std::runtime_error(std::string("OpenGL context: ") + SDL_GetError());
    }
    try {
        eb::FramePresenter presenter;
        std::vector<std::uint32_t> pattern(source_width * 224);
        for (int y = 0; y < 224; ++y) {
            for (int x = 0; x < source_width; ++x) {
                const unsigned red = (x * 13 + y * 7) & 255;
                const unsigned green = y;
                const unsigned blue = (x ^ y) & 255;
                pattern[y * source_width + x] = 0x5a000000 | red << 16 | green << 8 | blue;
            }
        }
        int drawable_width{}, drawable_height{};
        SDL_GL_GetDrawableSize(window, &drawable_width, &drawable_height);
        if (drawable_width != screen_width || drawable_height != screen_height)
            throw std::runtime_error("Test requires an unscaled SDL drawable");
        // A full-window capture taken first lets us detect retained inset state
        // when the next frame hides the menu bar without recreating a presenter.
        presenter.draw(pattern, source_width, 224, drawable_width, drawable_height);
        const auto without_inset = presenter.capture();
        presenter.draw(pattern, source_width, 224, drawable_width, drawable_height, 0, top_inset);
        const auto result = presenter.capture();
        if (result.width != screen_width || result.height != screen_height ||
            result.rgb.size() != static_cast<std::size_t>(screen_width) * screen_height * 3)
            throw std::runtime_error("Capture omitted part of the drawable window");
        for (int y = 0; y < screen_height; ++y) {
            for (int x = 0; x < screen_width; ++x) {
                const auto offset = static_cast<std::size_t>(y * screen_width + x) * 3;
                std::uint32_t expected = 0;
                if (x >= horizontal_padding && x < screen_width - horizontal_padding &&
                    y >= top_inset + vertical_padding && y < screen_height - vertical_padding) {
                    expected = pattern[((y - top_inset - vertical_padding) / scale) * source_width + (x - horizontal_padding) / scale];
                }
                const auto actual = std::uint32_t(result.rgb[offset]) << 16 |
                    std::uint32_t(result.rgb[offset + 1]) << 8 | result.rgb[offset + 2];
                if (actual != (expected & 0xffffff)) {
                    throw std::runtime_error("Pixel mismatch at " + std::to_string(x) + "," + std::to_string(y) +
                        " scale=" + std::to_string(scale) + " expected=" + std::to_string(expected & 0xffffff) +
                        " actual=" + std::to_string(actual));
                }
            }
        }
        if (top_inset > 0) {
            // An overlay renders after the game, and capture must retain it in
            // the reserved rows along with the original bottom row of the game.
            glEnable(GL_SCISSOR_TEST);
            glScissor(0, screen_height - top_inset, screen_width, top_inset);
            glClearColor(0.25f, 0.5f, 1, 1);
            glClear(GL_COLOR_BUFFER_BIT);
            glDisable(GL_SCISSOR_TEST);
            const auto overlay = presenter.capture();
            const auto below_menu = static_cast<std::size_t>(screen_width) * top_inset * 3;
            if (overlay.width != screen_width || overlay.height != screen_height ||
                overlay.rgb[2] != 255 || !std::equal(overlay.rgb.begin() + below_menu, overlay.rgb.end(),
                                                   result.rgb.begin() + below_menu))
                throw std::runtime_error("Capture lost the menu overlay or altered the game below it");
            if (screen_width == 512 && screen_height == 473 && top_inset == 25) {
                // The native 256x224 texture can also be presented at 4:3.
                // Below the bar this fixture has 512x448 available pixels, so
                // the complete 512x384 picture has 32 black rows above and below.
                presenter.draw(pattern, source_width, 224, drawable_width, drawable_height, 4.0 / 3, top_inset);
                const auto corrected = presenter.capture();
                for (int y = 0; y < 473; ++y) {
                    for (int x = 0; x < 512; ++x) {
                        const auto offset = static_cast<std::size_t>(y * 512 + x) * 3;
                        std::uint32_t expected = 0;
                        if (y >= 57 && y < 441) {
                            const int source_y = ((2 * (y - 57) + 1) * 224) / (2 * 384);
                            expected = pattern[source_y * source_width + x / 2] & 0xffffff;
                        }
                        const auto actual = std::uint32_t(corrected.rgb[offset]) << 16 |
                            std::uint32_t(corrected.rgb[offset + 1]) << 8 | corrected.rgb[offset + 2];
                        if (actual != expected)
                            throw std::runtime_error("4:3 presentation cropped or distorted the picture below the menu");
                    }
                }
            }
            presenter.draw(pattern, source_width, 224, drawable_width, drawable_height);
            if (presenter.capture().rgb != without_inset.rgb)
                throw std::runtime_error("Hiding the menu retained the inset or overlay");
            presenter.draw(pattern, source_width, 224, drawable_width, drawable_height, 0,
                           std::numeric_limits<int>::min());
            if (presenter.capture().rgb != without_inset.rgb)
                throw std::runtime_error("Negative menu inset did not clamp to zero");
            // Even an oversized menu in a tiny drawable leaves a valid game
            // row. A constant source makes every remaining pixel unambiguous.
            std::vector<std::uint32_t> solid(pattern.size(), 0xff18c74a);
            presenter.draw(solid, source_width, 224, drawable_width, drawable_height, 0,
                           std::numeric_limits<int>::max());
            std::array<GLint, 4> viewport{};
            glGetIntegerv(GL_VIEWPORT, viewport.data());
            if (viewport[1] != 0 || viewport[3] != 1 || viewport[2] < 1 || viewport[2] > screen_width)
                throw std::runtime_error("Oversized menu inset produced an invalid viewport");
            const auto clamped = presenter.capture();
            for (int y = 0; y < screen_height; ++y) {
                for (int x = 0; x < screen_width; ++x) {
                    const auto offset = static_cast<std::size_t>(y * screen_width + x) * 3;
                    const auto actual = std::uint32_t(clamped.rgb[offset]) << 16 |
                        std::uint32_t(clamped.rgb[offset + 1]) << 8 | clamped.rgb[offset + 2];
                    const auto expected = y == screen_height - 1 && x >= viewport[0] &&
                        x < viewport[0] + viewport[2] ? 0x18c74au : 0u;
                    if (actual != expected)
                        throw std::runtime_error("Oversized menu inset failed to clear the top strip");
                }
            }
            presenter.draw(pattern, source_width, 224, 0, 0, 0, std::numeric_limits<int>::max());
            bool rejected_capture = false;
            try { presenter.capture(); } catch (const std::runtime_error&) { rejected_capture = true; }
            if (!rejected_capture) throw std::runtime_error("Minimized drawable remained capturable");
            presenter.draw(pattern, source_width, 224, drawable_width, drawable_height);
            if (presenter.capture().rgb != without_inset.rgb)
                throw std::runtime_error("Restoring the drawable retained a clamped inset");
        }
        // Check a second upload too: stale texture contents must not be retained.
        std::fill(pattern.begin(), pattern.end(), 0xff18c74a);
        presenter.draw(pattern, source_width, 224, drawable_width, drawable_height);
        const auto second = presenter.capture();
        const auto center = static_cast<std::size_t>((screen_height / 2) * screen_width + screen_width / 2) * 3;
        if (second.rgb[center] != 0x18 || second.rgb[center + 1] != 0xc7 || second.rgb[center + 2] != 0x4a)
            throw std::runtime_error("Second framebuffer upload retained stale pixels");
        // Toggling widescreen reallocates the texture without retaining margins.
        std::array<std::uint32_t, 256 * 224> native{};
        native.fill(0xffa31582);
        presenter.draw(native, drawable_width, drawable_height);
        const auto narrow = presenter.capture();
        if (narrow.rgb[center] != 0xa3 || narrow.rgb[center + 1] != 0x15 || narrow.rgb[center + 2] != 0x82)
            throw std::runtime_error("Returning to original view retained a wide texture");
        std::cout << "Verified OpenGL " << screen_width << 'x' << screen_height
                  << " color/orientation/nearest scaling/letterbox pixels; top inset=" << top_inset << '\n';
    } catch (...) {
        SDL_GL_DeleteContext(context);
        SDL_DestroyWindow(window);
        throw;
    }
    SDL_GL_DeleteContext(context);
    SDL_DestroyWindow(window);
}
void verify_sixteen_ten() {
    constexpr int screen_width = 1280, screen_height = 800, source_width = 358;
    eb::DisplaySettings settings;
    settings.widescreen = true;
    settings.aspect = eb::AspectRatio::SixteenTen;
    if (settings.render_width(screen_width, screen_height) != source_width ||
        settings.target_aspect(screen_width, screen_height) != 16.0 / 10)
        throw std::runtime_error("16:10 must use a centered 358-column canvas and an exact display ratio");
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    SDL_Window* window = SDL_CreateWindow("16:10 presentation verification", SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED, screen_width, screen_height, SDL_WINDOW_OPENGL | SDL_WINDOW_HIDDEN);
    if (!window) throw std::runtime_error(std::string("SDL window: ") + SDL_GetError());
    SDL_GLContext context = SDL_GL_CreateContext(window);
    if (!context) {
        SDL_DestroyWindow(window);
        throw std::runtime_error(std::string("OpenGL context: ") + SDL_GetError());
    }
    try {
        int drawable_width{}, drawable_height{};
        SDL_GL_GetDrawableSize(window, &drawable_width, &drawable_height);
        if (drawable_width != screen_width || drawable_height != screen_height)
            throw std::runtime_error("16:10 test requires an unscaled 1280x800 drawable");
        eb::FramePresenter presenter;
        auto scene = std::make_shared<eb::DirectSceneFrame>();
        scene->width = scene->atlas_width = source_width;
        scene->atlas_height = 224;
        scene->atlas.resize(source_width * 224);
        for (int y = 0; y < 224; ++y)
            for (int x = 0; x < source_width; ++x)
                scene->atlas[y * source_width + x] = 0xff000001 |
                    ((x * 13 + y * 7) & 255) << 16 | y << 8 | ((x ^ y) & 254);
        scene->quads = {{0, 0, source_width, 224, 0, 0, 0, 0, false}};
        // Canvas rounding must not introduce letterboxing. Check both render
        // paths at fractional output scale, including a windowed menu inset.
        for (int inset : {0, 24}) {
            const int view_width = inset ? 1242 : 1280, view_height = screen_height - inset;
            const int left = (screen_width - view_width) / 2;
            for (bool direct : {false, true}) {
                const auto aspect = settings.target_aspect(drawable_width, drawable_height - inset);
                if (direct) {
                    if (!presenter.draw_scene({scene, {}}, drawable_width, drawable_height, aspect, inset))
                        throw std::runtime_error("16:10 direct-scene rendering unavailable");
                } else {
                    presenter.draw(scene->atlas, source_width, 224, drawable_width, drawable_height, aspect, inset);
                }
                std::array<GLint, 4> viewport{};
                glGetIntegerv(GL_VIEWPORT, viewport.data());
                if (viewport != std::array<GLint, 4>{left, 0, view_width, view_height})
                    throw std::runtime_error("16:10 viewport did not fill the available picture area");
                const auto capture = presenter.capture();
                if (capture.width != screen_width || capture.height != screen_height)
                    throw std::runtime_error("16:10 capture lost part of the drawable");
                for (int y = 0; y < screen_height; ++y)
                    for (int x = 0; x < screen_width; ++x) {
                        unsigned expected = 0, boundary_expected = 0;
                        if (y >= inset && x >= left && x < left + view_width) {
                            const int source_x = ((2 * (x - left) + 1) * source_width) / (2 * view_width);
                            const int source_y = ((2 * (y - inset) + 1) * 224) / (2 * view_height);
                            expected = scene->atlas[source_y * source_width + source_x] & 0xffffff;
                            boundary_expected = expected;
                            // At an exact texel boundary, nearest sampling may
                            // select either adjacent row due to GL precision.
                            if (((2 * (y - inset) + 1) * 224) % (2 * view_height) == 0)
                                boundary_expected = scene->atlas[(source_y - 1) * source_width + source_x] & 0xffffff;
                        }
                        const auto at = (y * screen_width + x) * 3;
                        const unsigned actual = capture.rgb[at] << 16 | capture.rgb[at + 1] << 8 | capture.rgb[at + 2];
                        if (actual != expected && actual != boundary_expected)
                            throw std::runtime_error("16:10 pixel mismatch at " + std::to_string(x) + "," +
                                std::to_string(y) + " direct=" + std::to_string(direct) + " inset=" + std::to_string(inset));
                    }
            }
        }
        std::cout << "Verified 1280x800 16:10 framebuffer/direct-scene pixels with fullscreen and menu inset\n";
    } catch (...) {
        SDL_GL_DeleteContext(context);
        SDL_DestroyWindow(window);
        throw;
    }
    SDL_GL_DeleteContext(context);
    SDL_DestroyWindow(window);
}
} // namespace

int main() {
    SDL_SetMainReady();
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        std::cerr << "SDL_Init: " << SDL_GetError() << '\n';
        return 1;
    }
    int status = 0;
    try {
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);
        SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
        verify(1, 0, 0);
        verify(3, 0, 0);
        verify(2, 17, 0);
        verify(2, 0, 13);
        verify(1, 0, 0, 398);
        verify(2, 13, 0, 524);
        verify(1, 0, 15, 1024);
        verify(2, 0, 0, 256, 25);
        verify(2, 17, 0, 256, 31);
        verify(1, 0, 13, 398, 24);
        verify_sixteen_ten();
        eb::DisplaySettings settings;
        if (settings.render_width(1920, 1080) != 256) throw std::runtime_error("Original view must remain default");
        settings.widescreen = true;
        if (settings.render_width(1920, 1080) != 398) throw std::runtime_error("16:9 must extend the canvas");
        settings.aspect = eb::AspectRatio::Window;
        if (settings.render_width(1280, 800) != 358 || settings.render_width(1680, 1050) != 358 ||
            settings.render_width(0, 0) != 256)
            throw std::runtime_error("Window aspect adaptation invalid");
        settings.aspect = eb::AspectRatio::Custom;
        settings.custom_aspect = std::numeric_limits<float>::quiet_NaN();
        if (settings.render_width(1920, 1080) != 256) throw std::runtime_error("Invalid aspect must fall back safely");
        settings.custom_aspect = 1000;
        if (settings.render_width(1920, 1080) != 1024) throw std::runtime_error("Aspect width must be bounded");
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        status = 1;
    }
    SDL_Quit();
    return status;
}
