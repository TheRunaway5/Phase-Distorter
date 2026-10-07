#include "eb/native_audio.hpp"
#include "eb/asset_store.hpp"
#include "generated_assets.hpp"
#include <iostream>
#include <stdexcept>

int main(int argc, char **argv) {
    try {
        if (argc < 2) throw std::runtime_error("Expected imported asset packs");
        for (int argument = 1; argument < argc; ++argument) {
            auto assets = eb::load_game_assets(argv[argument], eb::asset_profiles());
            eb::NativeAudio audio(assets.image, assets.version);
            audio.initialize();
            audio.set_channels(false);
            audio.set_channels(true);
            for (unsigned track = 1; track <= 191; ++track) {
                audio.change_music(track, 0);
                audio.play_sound(1);
                audio.publication();
                audio.advance_master_clocks(357366);
                if (audio.current_track() != track || audio.failed())
                    throw std::runtime_error("Native audio command failed");
                auto samples = audio.take_samples();
                if (samples.empty() || samples.size() % 2)
                    throw std::runtime_error("Audio command produced no complete stereo samples");
            }
            audio.stop_music();
            std::cout << "PASS native audio " << assets.title << ":191 music tracks, mono/stereo transfers; "
                      << audio.instructions() << " retained SPC instructions, " << audio.sample_frames()
                      << " stereo frames; no gameplay CPU\n";
        }
    } catch (const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
