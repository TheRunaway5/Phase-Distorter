// Opt-in real-clock renderer benchmark. No CTest timing assertions: GPU clocks,
// drivers and host load vary. Imported artwork never leaves the local machine.
#include "eb/frame_presenter.hpp"
#include "eb/native/world_scene.hpp"
#include "generated_assets.hpp"
#include <SDL.h>
#include <SDL_opengl.h>
#include <algorithm>
#include <chrono>
#include <iostream>
#include <stdexcept>

int main(int argc, char** argv) {
    SDL_SetMainReady();
    if (argc != 2) {
        std::cerr << "Usage: direct_scene_benchmark pack.ebpak\n";
        return 1;
    }
    if (SDL_Init(SDL_INIT_VIDEO)) {
        std::cerr << SDL_GetError() << '\n';
        return 1;
    }
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    auto* window = SDL_CreateWindow("Direct scene benchmark", 0, 0, 1920, 1200,
                                    SDL_WINDOW_OPENGL | SDL_WINDOW_HIDDEN);
    auto context = window ? SDL_GL_CreateContext(window) : nullptr;
    int result = 0;
    try {
        if (!context) throw std::runtime_error(SDL_GetError());
        std::cout << "OpenGL: " << glGetString(GL_VERSION) << " / " << glGetString(GL_RENDERER) << '\n';
        eb::FramePresenter renderer;
        renderer.prepare_scene_effects(); renderer.prepare_crt();
        const auto assets = eb::load_game_assets(argv[1], eb::asset_profiles());
        const eb::native::WorldMap map(assets.image, eb::native::world_map_layout(assets.version));
        const eb::native::WorldPalettes palettes(assets.image, eb::native::world_palette_layout(assets.version));
        const std::vector<std::uint8_t> flags(8192);
        const auto area = map.prepare(map.sector(7424 / 256, 7168 / 128).combination, flags);
        const auto colors = palettes.resolve(palettes.area_at(7424, 7168), flags);
        const auto source = eb::native::draw_world_scene(area, colors, {7424, 7168, 358, 8, 1, 1});
        for (bool effects : {false, true})
            for (bool crt : {false, true}) {
                auto frame = std::make_shared<eb::DirectSceneFrame>(*source);
                if (effects) {
                    auto& effect = frame->effects.emplace();
                    effect.main.fill(true);
                }
                const eb::DirectScenePicture picture{frame, {}};
                std::vector<double> times;
                times.reserve(400);
                for (unsigned i = 0; i < 450; ++i) {
                    const auto start = std::chrono::steady_clock::now();
                    if (!renderer.draw_scene(picture, 1920, 1200, 1.6))
                        throw std::runtime_error("Direct scene rendering unavailable");
                    renderer.apply_crt(crt);
                    // Include completed GPU work, rather than measuring how
                    // quickly the driver queues it. No simulation or swaps.
                    glFinish();
                    if (i >= 50)
                        times.push_back(std::chrono::duration<double, std::milli>(
                            std::chrono::steady_clock::now() - start).count());
                }
                std::sort(times.begin(), times.end());
                std::cout << "effects=" << effects << " crt=" << crt << " quads=" << frame->quads.size()
                          << " median_ms=" << times[200] << " p95_ms=" << times[380]
                          << " p99_ms=" << times[396] << '\n';
            }
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n'; result = 1;
    }
    if (context) SDL_GL_DeleteContext(context);
    if (window) SDL_DestroyWindow(window);
    SDL_Quit();
    return result;
}
