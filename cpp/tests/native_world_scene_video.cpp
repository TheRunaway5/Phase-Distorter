#include "eb/frame_presenter.hpp"
#include "eb/native/world_scene.hpp"
#include "generated_assets.hpp"
#include <SDL.h>
#include <SDL_opengl.h>
#include <iostream>
#include <stdexcept>

int main(int argc, char **argv) {
    SDL_SetMainReady();
    if (argc < 2 || SDL_Init(SDL_INIT_VIDEO)) {
        std::cerr << "native_world_scene_video pack.ebpak ...: " << SDL_GetError() << '\n';
        return 1;
    }
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
    auto *window = SDL_CreateWindow("Native world scene verification", 0, 0, 2088, 896,
                                    SDL_WINDOW_OPENGL | SDL_WINDOW_HIDDEN);
    const auto context = window ? SDL_GL_CreateContext(window) : nullptr;
    int result = 0;
    try {
        if (!context)
            throw std::runtime_error("Native world test could not create GL context");
        std::cout << "OpenGL: " << glGetString(GL_VERSION) << " / " << glGetString(GL_RENDERER) << '\n';
        eb::FramePresenter renderer;
        for (int argument = 1; argument < argc; ++argument) {
            const auto assets = eb::load_game_assets(argv[argument], eb::asset_profiles());
            const eb::native::WorldMap map(assets.image, eb::native::world_map_layout(assets.version));
            const eb::native::WorldPalettes palettes(assets.image,
                                                     eb::native::world_palette_layout(assets.version));
            const std::vector<std::uint8_t> flags(8192);
            unsigned frames = 0;
            for (const auto point :
                 {std::pair(7424u, 7168u), std::pair(4096u, 768u), std::pair(1536u, 5120u)}) {
                auto area = map.prepare(map.sector(point.first / 256, point.second / 128).combination, flags);
                const auto colors = palettes.resolve(palettes.area_at(point.first, point.second), flags);
                for (const unsigned width : {256u, 398u, 522u})
                    for (unsigned phase = 0; phase < 5; ++phase) {
                        eb::native::WorldSceneView view{
                            point.first + phase / 4.f, point.second + phase / 4.f, width, 8, phase, 1};
                        auto actors = std::make_shared<eb::DirectSceneFrame>();
                        actors->width = width;
                        actors->frame = phase;
                        actors->scene_identity = 1;
                        actors->atlas_width = 1024;
                        actors->atlas_height = 8;
                        actors->atlas.resize(1024 * 8);
                        for (unsigned y = 0; y < 8; ++y)
                            for (unsigned x = 0; x < 8; ++x) {
                                // A transparent stripe lets the second object
                                // through, while scenery can obscure the first
                                // opaque layer7 object without showing layer10.
                                actors->atlas[y * 1024 + x] = x == 4 ? 0 : 0xff01ee37;
                                actors->atlas[y * 1024 + x + 8] = 0xfffc01ff;
                            }
                        actors->motions = {{1, 0, 0}, {2, 0, 0}};
                        // Cover diverse map priorities with overlapping actors.
                        for (unsigned y = 8; y < 224; y += 16)
                            for (unsigned x = 8; x < width; x += 16) {
                                actors->quads.push_back(
                                    {0, 0, 8, 8, x + phase / 4.f, y + phase / 4.f, 7, 0, true});
                                actors->quads.push_back(
                                    {8, 0, 8, 8, x + phase / 4.f, y + phase / 4.f, 10, 1, true});
                            }
                        const auto frame = eb::native::draw_world_scene(area, colors, view, actors);
                        const eb::DirectScenePicture picture{frame, {}};
                        if (!renderer.draw_scene(picture, width * 4, 224 * 4))
                            throw std::runtime_error("Native world GL draw unavailable");
                        const auto actual = renderer.capture();
                        const auto expected = eb::rasterize_direct_scene(picture, 4);
                        for (std::size_t i = 0; i < expected.size(); ++i)
                            if (((actual.rgb[i * 3] << 16) | (actual.rgb[i * 3 + 1] << 8) |
                                 actual.rgb[i * 3 + 2]) != (expected[i] & 0xffffff))
                                throw std::runtime_error("Native scenery/object GL pixel differs at index " +
                                                         std::to_string(i));
                        ++frames;
                    }
            }
            std::cout
                << "PASS " << assets.title << ": " << frames
                << " native map/actor GPU comparisons, fractional camera/objects and scenery occlusion\n";
        }
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        result = 1;
    }
    if (context)
        SDL_GL_DeleteContext(context);
    if (window)
        SDL_DestroyWindow(window);
    SDL_Quit();
    return result;
}
