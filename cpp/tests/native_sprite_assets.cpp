// Local imported-content coverage. This executable does not link eb_core.
#include "eb/native/sprite_actors.hpp"
#include "eb/native/sprite_resources.hpp"
#include "generated_assets.hpp"
#include <iostream>
#include <stdexcept>

int main(int argc, char **argv) {
    try {
        if (argc < 2)
            throw std::runtime_error("native_sprite_assets pack.ebpak ...");
        for (int arg = 1; arg < argc; ++arg) {
            const auto assets = eb::load_game_assets(argv[arg], eb::asset_profiles());
            auto resources = std::make_shared<eb::native::SpriteResources>(
                assets.image, eb::native::sprite_catalog_layout(assets.version));
            eb::native::SpriteActors actors(resources);
            std::vector<std::shared_ptr<const eb::native::SpriteImage>> images;
            std::uint64_t pixels = 0;
            for (unsigned group = 0; group < resources->size(); ++group)
                for (unsigned pose = 0; pose < resources->definition(group).frames; ++pose) {
                    try {
                        images.push_back(resources->acquire(group, pose));
                        eb::native::SpriteActor actor;
                        actor.sprite = group;
                        actor.pose = pose;
                        actor.x = 128;
                        actor.y = 112;
                        actors.create(actor);
                    } catch (const std::exception &e) {
                        throw std::runtime_error("group=" + std::to_string(group) +
                                                 " pose=" + std::to_string(pose) + ": " + e.what());
                    }
                    pixels += images.back()->indices.size();
                }
            const auto frame = actors.draw({}, {}, 1, 1);
            std::cout << assets.title << ": " << resources->size() << " groups, " << images.size()
                      << " simultaneous host actors/images, " << pixels << " indexed pixels, "
                      << frame->quads.size() << " draw commands; no CPU/bus/VRAM\n";
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
}
