#include "eb/application.hpp"
#include "eb/asset_store.hpp"
#include "eb/audio_output.hpp"
#include "eb/desktop_display.hpp"
#include "eb/desktop_presentation.hpp"
#include "eb/display_preferences.hpp"
#include "desktop_session.hpp"
#include "eb/input_replay.hpp"
#include "eb/launch_options.hpp"
#include "eb/presentation_pipeline.hpp"
#include "eb/presentation_wait.hpp"
#include "eb/session_storage.hpp"
#include "eb/snapshot_store.hpp"
#include "generated_assets.hpp"

#include <SDL.h>
#include <chrono>
#include <cstdlib>
#include <filesystem>
#include <iomanip>
#include <iostream>
#include <memory>
#include <optional>
#include <stdexcept>
#include <string>

namespace eb {
namespace {
constexpr int width = DisplaySettings::native_width;
constexpr int height = DisplaySettings::native_height;

// Compose one interactive/headless run. Module owners are destroyed before a
// requested game switch, so settings may persist while machine state cannot.
int run_session(LaunchOptions options, std::optional<PendingGameSwitch> &next) {
    try {
        SDL_SetMainReady();
        char *directory = SDL_GetPrefPath("ebsrc", "EarthBoundCpp");
        if (!directory)
            throw std::runtime_error(std::string("Cannot find application data directory: ") +
                                     SDL_GetError());
        const std::string preferences(directory);
        SDL_free(directory);
        // Desktop runs remember preferences by default; deterministic headless
        // runs only read/write them when an explicit config path was supplied.
        if (!options.headless && !options.no_config && options.config.empty())
            options.config = preferences + "display.cfg";
        auto game = options.game;
        auto settings = resolve_display_settings(options, game);
        bool default_asset_path = false;
        if (options.assets.empty()) {
            // Explicit --assets takes precedence over the environment, which
            // takes precedence over the per-game application-data default.
            const char *environment = options.default_assets_only ? nullptr : std::getenv("EB_ASSET_PACK");
            default_asset_path = !(environment && *environment);
            options.assets = default_asset_path ? preferences + game_basename(game) + ".ebpak" : environment;
        }
        if (!options.import_rom.empty()) {
            // Identify by contents first, then select the default output filename.
            // An explicit --game acts as a compatibility constraint, not a guess.
            const auto profile = eb::identify_rom(native_path(options.import_rom), eb::asset_profiles());
            if (options.game_override && profile.version != game)
                throw std::runtime_error(
                    "The supplied ROM does not match --game. Choose its matching game or omit --game.");
            game = profile.version;
            if (default_asset_path)
                options.assets = preferences + game_basename(game) + ".ebpak";
            eb::import_assets(native_path(options.import_rom), native_path(options.assets), profile.layout);
            std::cout << "Imported " << profile.title << " assets: " << options.assets << '\n';
        }
        if (options.import_only)
            return 0;
        if (default_asset_path && !options.game_override &&
            !std::filesystem::exists(native_path(options.assets))) {
            const auto other = game == eb::GameVersion::US ? eb::GameVersion::JP : eb::GameVersion::US;
            const auto alternate = preferences + game_basename(other) + ".ebpak";
            if (std::filesystem::exists(native_path(alternate)))
                options.assets = alternate;
        }
        std::unique_ptr<DesktopDisplay> display;
        eb::GameAssets program;
        std::string import_error;
        try {
            program = eb::load_game_assets(native_path(options.assets), eb::asset_profiles());
        } catch (const std::exception &error) {
            // Interactive startup can repair a missing/bad pack in the importer.
            // Headless tools instead report an actionable error and stop.
            if (options.headless)
                throw std::runtime_error(std::string(error.what()) +
                                         "\nImport your own supported ROM with --import-rom FILE, "
                                         "or select an existing pack with --assets FILE.");
            if (std::filesystem::exists(native_path(options.assets)))
                import_error = error.what();
        }
        if (!options.headless)
            display = std::make_unique<DesktopDisplay>(options, settings);
        if (program.image.empty() && display)
            program =
                display->import_assets(options.assets, import_error, default_asset_path ? preferences : "",
                                       options.game_override, game);
        if (program.image.empty())
            return 0; // The user closed first-run setup.
        if (options.game_override && program.version != game)
            throw std::runtime_error("The selected asset pack does not match --game.");
        game = program.version;
        // Choose save identity from the verified pack, after automatic detection.
        if (!options.headless && !options.no_save && options.save.empty())
            options.save = preferences + game_basename(game) + ".srm";
        if (display)
            display->start_panel(options.debug, program.title, preferences, game,
                                 default_asset_path ? "" : options.assets);
        InputReplay input(input_script(options.input_script), options.buttons);
        DesktopSession session(program.image, game, options);
        configure_desktop_presentation(session, settings,
            settings.render_width(width * options.scale, height * options.scale));
        const double native_rate = display ? display->frame_rate() : FramePacer::frame_rate;
        std::unique_ptr<DeviceAudioQueue> audio;
        if (display && options.audio)
            audio = std::make_unique<DeviceAudioQueue>(native_rate);
        std::unique_ptr<WaveFileWriter> wave;
        if (!options.wav.empty())
            wave = std::make_unique<WaveFileWriter>(options.wav);
        const auto start_time = std::chrono::steady_clock::now();
        PresentationPipeline presentation(start_time, settings, native_rate,
                                          display ? display->presentation_rate() : 60, bool(display),
                                          session.presentation_frame());
        session.observe_completed_frames(
            [&](PresentationFrame frame) { presentation.completed_frame(frame); });

        SnapshotStore snapshots(native_path(preferences) / "snapshots" / game_basename(game));
        std::vector<SaveStateSnapshotInfo> snapshot_list;
        const auto refresh_snapshots = [&](const std::string &message) {
            if (!display) return;
            if (session.native()) {
                display->set_snapshot_state({}, "Machine snapshots are unavailable in a native session", false);
                return;
            }
            try {
                snapshot_list = snapshots.list();
                display->set_snapshot_state(snapshot_list, message, true);
            } catch (const std::exception &error) {
                display->set_snapshot_state(snapshot_list, std::string("Cannot list snapshots: ") + error.what(), true);
            }
        };
        refresh_snapshots("");

        const auto drain_audio = [&] {
            const auto samples = session.take_audio_samples();
            if (wave)
                wave->append(samples);
            if (audio)
                audio->append(samples);
        };
        const auto present_and_wait = [&] {
            auto now = std::chrono::steady_clock::now();
            if (display && presentation.presentation_due(now)) {
                display->present(session.diagnostics(display->wants_register_diagnostics()),
                                 presentation.picture(now));
                presentation.presented(std::chrono::steady_clock::now());
            }
            now = std::chrono::steady_clock::now();
            const auto deadline = presentation.wake_time(now);
            if (deadline > now)
                wait_for_presentation(deadline);
        };

        int status = 0;
        try {
            for (;;) {
                if (display) {
                    if (const auto game_request = display->take_game_request()) {
                        next = PendingGameSwitch{*game_request, settings, display->fullscreen()};
                        break;
                    }
                }
                if ((options.frames && session.frames() >= options.frames) ||
                    (options.steps && session.steps() >= options.steps))
                    break;

                std::uint16_t physical_buttons = 0;
                if (display) {
                    if (!display->poll_events(physical_buttons))
                        break;
                    if (const auto action = display->take_snapshot_action()) {
                        // UI requests are applied between simulation advances,
                        // never while a borrowed picture is being rendered.
                        try {
                            std::string message;
                            switch (action->kind) {
                            case SaveStateSnapshotRequest::Kind::Save: {
                                const auto state = session.save_snapshot();
                                const auto saved = snapshots.save(action->value, session.frames(), state);
                                message = "Saved snapshot: " + saved.name;
                                break;
                            }
                            case SaveStateSnapshotRequest::Kind::Load: {
                                const auto state = snapshots.load(action->value);
                                session.load_snapshot(state);
                                input.seek(session.frames());
                                // Replace the old borrowed canvas before any
                                // host reconfiguration can allocate or fail.
                                presentation.restored_frame(session.presentation_frame(), std::chrono::steady_clock::now());
                                if (audio) audio->clear();
                                configure_desktop_presentation(session, settings, display->render_width());
                                presentation.restored_frame(session.presentation_frame(), std::chrono::steady_clock::now());
                                display->adopt_debug(session.debug());
                                message = "Loaded snapshot at frame " + std::to_string(session.frames());
                                break;
                            }
                            case SaveStateSnapshotRequest::Kind::Delete:
                                snapshots.erase(action->value);
                                message = "Deleted snapshot";
                                break;
                            case SaveStateSnapshotRequest::Kind::Refresh:
                                message = "Snapshot list refreshed";
                                break;
                            }
                            refresh_snapshots(message);
                        } catch (const std::exception &error) {
                            display->set_snapshot_state(snapshot_list,
                                std::string("Snapshot operation failed: ") + error.what(), true);
                        }
                    }
                    if (!session.native()) display->update_debug(session.debug());
                    display->update_swap_interval();
                    if (presentation.configure(settings, display->frame_rate(), display->presentation_rate(),
                                               std::chrono::steady_clock::now()) &&
                        audio) {
                        audio.reset();
                        audio = std::make_unique<DeviceAudioQueue>(presentation.frame_rate());
                        // Device reopening may block; its delay is not native
                        // simulation debt. High-rate deadlines keep their policy.
                        presentation.reset_native_deadline(std::chrono::steady_clock::now());
                    }
                }
                configure_desktop_presentation(session, settings,
                    display ? display->render_width()
                            : settings.render_width(width * options.scale, height * options.scale));

                if (!presentation.simulation_due(std::chrono::steady_clock::now())) {
                    present_and_wait();
                    continue;
                }
                const auto buttons =
                    input.buttons_for_frame(session.frames(), options.replay_only ? 0 : physical_buttons);
                const auto completed_frames = session.advance_frame(buttons, options.steps);
                drain_audio();
                presentation.simulation_finished(session.presentation_frame(), completed_frames,
                                                 std::chrono::steady_clock::now());
                present_and_wait();
            }
        } catch (const std::exception &error) {
            const auto diagnostics = session.diagnostics(true);
            std::cerr << "Execution stopped: " << error.what() << '\n'
                      << diagnostics.cpu_state << '\n'
                      << diagnostics.audio_cpu_state << '\n';
            show_desktop_error(std::string("The game stopped unexpectedly.\n\n") + error.what());
            status = 1;
            presentation.refresh_after_error(session.presentation_frame());
        }

        drain_audio();
        if (wave)
            wave->finish();
        if (display && !options.gl_screenshot.empty())
            display->present(session.diagnostics(display->wants_register_diagnostics()),
                             presentation.current_picture(), options.gl_screenshot);
        if (display && !next) {
            if (const auto game_request = display->take_game_request())
                next = PendingGameSwitch{*game_request, settings, display->fullscreen()};
        }
        if (!options.screenshot.empty())
            screenshot(options.screenshot, session.native_pixels());
        if (!options.presentation_screenshot.empty()) {
            const auto picture = presentation.current_picture();
            presentation_screenshot(options.presentation_screenshot, picture.pixels, int(picture.width));
        }
        if (status == 0 && !options.save.empty())
            store_save(options.save, session.save_memory());
        if (status == 0 && display)
            store_display_settings(options.config, settings, next ? next->game : game);
        if (!options.save.empty())
            std::cout << "save=" << options.save << '\n';
        const double elapsed =
            std::chrono::duration<double>(std::chrono::steady_clock::now() - start_time).count();
        const auto diagnostics = session.diagnostics(true);
        std::cout << "frames=" << diagnostics.frames << " steps=" << diagnostics.steps
                  << " instructions=" << diagnostics.cpu_instructions
                  << " native_batches=" << diagnostics.native_gameplay_batches
                  << " spc_instructions=" << diagnostics.audio_cpu_instructions
                  << " audio_frames=" << diagnostics.audio_frames << " elapsed=" << std::fixed
                  << std::setprecision(3) << elapsed << "s\n"
                  << diagnostics.cpu_state << '\n'
                  << diagnostics.audio_cpu_state << '\n';
        if (display)
            std::cout << "frame_rate=" << presentation.frame_rate()
                      << " presented_frames=" << presentation.presented_frames()
                      << " catch_up_frames=" << presentation.catch_up_frames()
                      << " presentation_limit=" << presentation.presentation_limit()
                      << " measured_fps=" << (elapsed > 0 ? presentation.presented_frames() / elapsed : 0)
                      << '\n';
        std::cout << "game=" << game_basename(game) << " assets=" << options.assets << '\n';
        session.observe_completed_frames({});
        return status;
    } catch (const std::exception &error) {
        std::cerr << "eb_cpp: " << error.what() << '\n';
        show_desktop_error(error.what());
        return 1;
    }
}
} // namespace

int run_application(int argc, char **argv) {
    try {
        auto options = parse_options(argc, argv);
        for (;;) {
            std::optional<PendingGameSwitch> next;
            const int status = run_session(options, next);
            if (status != 0 || !next)
                return status;
            // A deliberate menu switch supersedes the initial game/custom pack,
            // while carrying display preferences even when --no-config is used.
            options.game = next->game;
            options.game_override = options.default_assets_only = true;
            options.display = next->display;
            options.aspect_override = options.widescreen_override = options.flashing_override =
                options.vrr_override = options.fps_override = options.interpolation_override = options.crt_override = options.direct_rendering_override = true;
            options.start_fullscreen = next->fullscreen;
            options.assets.clear();
            options.import_rom.clear();
            options.save.clear();
            options.debug = false;
            // Replay/capture files belong to the original session; do not
            // overwrite those outputs or replay its controls in another game.
            options.screenshot.clear();
            options.gl_screenshot.clear();
            options.presentation_screenshot.clear();
            options.wav.clear();
            options.input_script.clear();
            options.replay_only = false;
            options.buttons = 0;
        }
    } catch (const std::exception &error) {
        std::cerr << "eb_cpp: " << error.what() << '\n';
        eb::show_desktop_error(error.what());
        return 1;
    }
}

} // namespace eb

#ifndef _WIN32
int main(int argc, char **argv) {
    return eb::run_application(argc, argv);
}
#endif
