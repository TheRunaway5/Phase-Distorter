#include "../src/native/session/battle.hpp"
#include "eb/asset_store.hpp"
#include "generated_assets.hpp"
#include <iostream>
#include <stdexcept>

int main(int argc, char **argv) {
    try {
        if (argc < 2) throw std::runtime_error("Expected imported asset packs");
        for (int argument = 1; argument < argc; ++argument) {
            const auto assets = eb::load_game_assets(argv[argument], eb::asset_profiles());
            eb::native::session::Content content(assets.image, assets.version);
            eb::NativeAudio audio(assets.image, assets.version);
            eb::native::session::World world(content, audio);
            eb::native::session::BattleContent battle_content(assets.image,assets.version);
            eb::native::session::Battle battle(battle_content,world,assets.image);
            if (content.integrity_difference || world.runtime->failed() || world.runtime->completed_frames() ||
                !world.presentation.uses_palette_transport(world.palette))
                throw std::runtime_error("Native owner construction changed gameplay");
            std::cout << "PASS native session owners " << assets.title
                      << ": real imported world/dialogue/audio, zero simulation frames\n";
        }
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n'; return 1;
    }
}
