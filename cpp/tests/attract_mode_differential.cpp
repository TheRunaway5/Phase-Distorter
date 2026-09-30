// Asset-backed title/demo regression. Opt-in because it needs a local import.
// The narrow session is the oracle for scripted camera/actors and game timing;
// a wider presentation must not consume any additional gameplay resources.
// During the pyramid's screen-space oval, it must also preserve source framing
// in the actual presented picture, not merely in the untouched native buffer.
#include "eb/game_session.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <string>

int main(int argc, char** argv) {
    try {
        if (argc < 2) throw std::runtime_error("attract_mode_differential pack.ebpak [width] [frames] [--native-sprites]");
        const auto assets = eb::load_game_assets(argv[1], eb::asset_profiles());
        const unsigned width = argc > 2 ? std::stoul(argv[2]) : 522;
        const unsigned frames = argc > 3 ? std::stoul(argv[3]) : 9000;
        const bool native_sprites = argc > 4 && std::string(argv[4]) == "--native-sprites";
        if (argc > 4 && !native_sprites)
            throw std::runtime_error("Unknown attract-mode comparison option");
        // Interior frames of the unmodified, no-input pyramid demo. Regional
        // title timings differ; both ranges include the sector-row crossing
        // that formerly moved the party outside its stationary oval window.
        const unsigned pyramid_first = assets.version == eb::GameVersion::US ? 5000 : 4925;
        const unsigned pyramid_count = 400, pyramid_last = pyramid_first + pyramid_count - 1;
        if (frames < pyramid_last)
            throw std::runtime_error("at least " + std::to_string(pyramid_last) +
                                     " frames are required to cover the pyramid presentation regression");
        unsigned pyramid_checked = 0, pyramid_visible = 0, pyramid_changed = 0;
        std::uint64_t previous_pyramid_hash = 0;
        eb::GameSession native(assets.image, assets.version), wide(assets.image, assets.version);
        if (native_sprites) {
            native.set_logical_clock_policy(eb::LogicalClockPolicy::ActorFrames);
            wide.set_logical_clock_policy(eb::LogicalClockPolicy::ActorFrames);
            native.enable_native_sprite_runtime(true);
            wide.enable_native_sprite_runtime(true);
        }
        native.configure_presentation(256, false);
        wide.configure_presentation(width, false, true);
        auto check = [&](bool ok, const char* what) {
            if (!ok) throw std::runtime_error("frame=" + std::to_string(native.frames()) + ": " + what);
        };
        for (unsigned frame = 0; frame < frames; ++frame) {
            native.advance_frame(0);
            wide.advance_frame(0);
            const auto a = native.diagnostics(true), b = wide.diagnostics(true);
            check(a.frames == b.frames && a.steps == b.steps && a.master_clocks == b.master_clocks &&
                  a.cpu_instructions == b.cpu_instructions && a.cpu_state == b.cpu_state &&
                  a.audio_cpu_instructions == b.audio_cpu_instructions && a.audio_cpu_state == b.audio_cpu_state,
                  "presentation width changed demo execution/camera timing");
            check(std::equal(native.native_pixels().begin(), native.native_pixels().end(), wide.native_pixels().begin()),
                  "presentation width changed the scripted camera or actors");
            if (native.frames() >= pyramid_first && native.frames() <= pyramid_last) {
                const auto picture = wide.presentation_frame();
                check(picture.width == width && picture.pixels.size() == picture.width * 224,
                      "pyramid presentation has an invalid canvas");
                const unsigned margin = (picture.width - 256) / 2;
                unsigned visible_pixels = 0;
                std::uint64_t hash = 1469598103934665603ull;
                for (unsigned y = 0; y < 224; ++y) {
                    for (unsigned x = 0; x < 256; ++x) {
                        const auto expected = native.native_pixels()[y * 256 + x];
                        const auto actual = picture.pixels[y * picture.width + margin + x];
                        if (actual != expected)
                            throw std::runtime_error("frame=" + std::to_string(native.frames()) +
                                ": pyramid presentation moved scenery/actors relative to the oval at (" +
                                std::to_string(x) + "," + std::to_string(y) + ")");
                        visible_pixels += (expected & 0xffffffu) != 0;
                        hash = (hash ^ expected) * 1099511628211ull;
                    }
                }
                ++pyramid_checked;
                pyramid_visible += visible_pixels >= 256;
                pyramid_changed += pyramid_checked > 1 && hash != previous_pyramid_hash;
                previous_pyramid_hash = hash;
            }
            check(native.take_audio_samples() == wide.take_audio_samples(), "demo audio changed");
            if ((frame + 1) % 1500 == 0) std::cout << "verified frame " << frame + 1 << '\n' << std::flush;
        }
        check(pyramid_checked >= pyramid_count - 4, "pyramid presentation range was not fully exercised");
        check(pyramid_visible >= 300 && pyramid_changed >= 200,
              "pyramid presentation did not include enough visible, changing scenery/actors");
        std::cout << "PASS width=" << width << " frames=" << frames
                  << " resources=" << (native_sprites ? "native" : "original")
                  << "; title/demo CPU, camera/actor pixels, clocks and PCM match native loading; "
                  << pyramid_checked << " pyramid presentation frames, " << pyramid_visible
                  << " visible, " << pyramid_changed << " changed\n";
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
}
