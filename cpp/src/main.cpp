#include "eb/bus.hpp"
#include "eb/application.hpp"
#include "eb/app_icon.hpp"
#include "eb/asset_store.hpp"
#include "eb/asset_cache.hpp"
#include "eb/cpu.hpp"
#include "eb/debug_panel.hpp"
#include "eb/display_settings.hpp"
#include "eb/dsp.hpp"
#include "eb/frame_pacer.hpp"
#include "eb/frame_presenter.hpp"
#include "eb/photosensitivity_filter.hpp"
#include "eb/spc.hpp"
#include "generated_assets.hpp"

// Desktop/headless composition root. Startup resolves preferences and verifies
// the user's local assets before constructing any game hardware. The frame loop
// then keeps deterministic simulation separate from host input, UI, and pacing.

#include <SDL.h>
#include <SDL_opengl.h>

#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#endif

#include <algorithm>
#include <array>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <memory>
#include <optional>
#include <random>
#include <span>
#include <sstream>
#include <stdexcept>
#include <string>
#include <system_error>
#include <thread>
#include <utility>
#include <vector>

namespace {
constexpr int width = 256;
constexpr int height = 224;

struct Options {
    bool headless = false;
    bool vsync = true;
    bool audio = true;
    bool no_save = false;
    bool debug = false;
    bool no_config = false;
    bool import_only = false;
    // A menu-selected game uses its own default cache, regardless of an initial
    // custom --assets path or environment override. These are internal options.
    bool default_assets_only = false;
    bool start_fullscreen = false;
    // Distinguish explicit CLI choices from defaults so preferences can fill in
    // unspecified values without undoing a user's command-line override.
    bool aspect_override = false;
    bool widescreen_override = false;
    bool flashing_override = false;
    bool game_override = false;
    eb::GameVersion game = eb::GameVersion::US;
    eb::DisplaySettings display;
    std::uint64_t frames = 0;
    std::uint64_t steps = 0;
    std::uint16_t buttons = 0;
    int scale = 3;
    std::string screenshot;
    std::string gl_screenshot;
    std::string save;
    std::string wav;
    std::string input_script;
    std::string presentation_screenshot;
    std::string assets;
    std::string import_rom;
    std::string config;
};

struct NextSession {
    eb::GameVersion game;
    eb::DisplaySettings display;
    bool fullscreen;
};

std::filesystem::path native_path(const std::string& path) {
    // CLI/SDL path strings are UTF-8; filesystem uses its native representation.
    return std::filesystem::path(std::u8string(path.begin(), path.end()));
}

const char* game_basename(eb::GameVersion version) {
    // Separate default packs and SRAM files prevent cross-region save mixing.
    return version == eb::GameVersion::JP ? "mother2" : "earthbound";
}

void aspect_option(eb::DisplaySettings& settings, const std::string& text) {
    // Named presets preserve their identity for the UI. Other finite ratios
    // become Custom after fully consuming both numeric fields.
    if (text == "native" || text == "8:7") settings.aspect = eb::AspectRatio::Native;
    else if (text == "4:3") settings.aspect = eb::AspectRatio::FourThree;
    else if (text == "16:10") settings.aspect = eb::AspectRatio::SixteenTen;
    else if (text == "16:9") settings.aspect = eb::AspectRatio::SixteenNine;
    else if (text == "21:9") settings.aspect = eb::AspectRatio::TwentyOneNine;
    else if (text == "window") settings.aspect = eb::AspectRatio::Window;
    else {
        const auto separator = text.find(':');
        std::size_t used = 0;
        const auto numerator = std::stod(text.substr(0, separator), &used);
        if (used != (separator == std::string::npos ? text.size() : separator))
            throw std::runtime_error("Invalid aspect ratio: " + text);
        double denominator = 1;
        if (separator != std::string::npos) {
            denominator = std::stod(text.substr(separator + 1), &used);
            if (used != text.size() - separator - 1) throw std::runtime_error("Invalid aspect ratio: " + text);
        }
        const auto ratio = numerator / denominator;
        if (!std::isfinite(ratio) || denominator <= 0 || ratio < 256.0 / 224 || ratio > 1024.0 / 224)
            throw std::runtime_error("Aspect ratio must be between 256:224 and 1024:224");
        settings.aspect = eb::AspectRatio::Custom;
        settings.custom_aspect = static_cast<float>(ratio);
    }
}

std::uint64_t integer(const std::string& text, const std::string& name) {
    // Parse the whole field rather than accepting a valid prefix plus garbage.
    if (text.empty() || text.front() == '-') throw std::runtime_error(name + " requires an unsigned integer");
    std::size_t count = 0;
    const int base = text.starts_with("0x") || text.starts_with("0X") ? 16 : 10;
    auto value = std::stoull(text, &count, base);
    if (count != text.size()) throw std::runtime_error("Invalid value for " + name + ": " + text);
    return value;
}

Options parse_options(int argc, char** argv) {
    Options options;
    for (int index = 1; index < argc; ++index) {
        const std::string arg = argv[index];
        auto next = [&]() -> std::string {
            if (++index == argc) throw std::runtime_error("Missing value for " + arg);
            return argv[index];
        };
        if (arg == "--help" || arg == "-h") {
            std::cout << "Usage: eb_cpp [options]\n"
                "  --headless         Run without creating a window\n"
                "  --frames N         Stop after N hardware frames (0: unlimited)\n"
                "  --steps N          Stop after N CPU step calls (0: unlimited)\n"
                "  --buttons MASK     Hold a JOY1 bitmask, decimal or 0x hexadecimal\n"
                "  --input-script FILE  Apply '<frame> <joymask>' input changes\n"
                "  --screenshot FILE  Write final framebuffer as binary PPM\n"
                "  --presentation-screenshot FILE  Write the adapted picture as PPM\n"
                "  --gl-screenshot FILE  Read back the final OpenGL image as PPM\n"
                "  --save FILE        Load and save the 8 KiB battery RAM file\n"
                "  --no-save          Disable automatic desktop save persistence\n"
                "  --wav FILE         Record DSP output as 32 kHz stereo PCM WAV\n"
                "  --no-audio         Disable the playback device (DSP still runs)\n"
                "  --scale N          Initial window pixel scale, 1 through 8\n"
                "  --no-vsync         Disable vertical synchronization\n"
                "  --debug            Open the optional control panel (F1 toggles)\n"
                "  --widescreen       Enable presentation-only expanded picture\n"
                "  --aspect RATIO     native, 4:3, 16:10, 16:9, 21:9, window, or W:H\n"
                "  --no-widescreen    Use the original 256x224 view\n"
                "  --reduce-flashing Enable the optional photosensitivity filter\n"
                "  --no-reduce-flashing  Disable the photosensitivity filter (default)\n"
                "  --config FILE      Use a display preferences file\n"
                "  --no-config        Do not load or save display preferences\n"
                "  --assets FILE      Use an imported .ebpak asset pack\n"
                "  --import-rom FILE  Extract assets from your own supported US/JP ROM\n"
                "  --import-only      Exit after importing, without starting the game\n"
                "  --game VERSION     earthbound (US) or mother2 (Japanese)\n"
                "Keys: arrows=direction, Z=B, X=A, A=Y, S=X, Q=L, W=R,\n"
                "      Enter=Start, Right Shift=Select, F1=panel, F11=fullscreen,\n"
                "      Escape=close panel or quit\n";
            std::exit(0);
        } else if (arg == "--headless") options.headless = true;
        else if (arg == "--no-vsync") options.vsync = false;
        else if (arg == "--no-audio") options.audio = false;
        else if (arg == "--no-save") options.no_save = true;
        else if (arg == "--debug") options.debug = true;
        else if (arg == "--no-config") options.no_config = true;
        else if (arg == "--import-only") options.import_only = true;
        else if (arg == "--assets") options.assets = next();
        else if (arg == "--import-rom") options.import_rom = next();
        else if (arg == "--config") options.config = next();
        else if (arg == "--game") {
            const auto game = next();
            if (game == "earthbound" || game == "us") options.game = eb::GameVersion::US;
            else if (game == "mother2" || game == "jp") options.game = eb::GameVersion::JP;
            else throw std::runtime_error("--game requires earthbound/us or mother2/jp");
            options.game_override = true;
        }
        else if (arg == "--widescreen" || arg == "--no-widescreen") {
            options.display.widescreen = arg == "--widescreen";
            options.widescreen_override = true;
        } else if (arg == "--reduce-flashing" || arg == "--no-reduce-flashing") {
            options.display.reduce_flashing = arg == "--reduce-flashing";
            options.flashing_override = true;
        } else if (arg == "--aspect") {
            aspect_option(options.display, next());
            options.display.widescreen = true;
            options.aspect_override = options.widescreen_override = true;
        }
        else if (arg == "--frames") options.frames = integer(next(), arg);
        else if (arg == "--steps") options.steps = integer(next(), arg);
        else if (arg == "--screenshot") options.screenshot = next();
        else if (arg == "--presentation-screenshot") options.presentation_screenshot = next();
        else if (arg == "--gl-screenshot") options.gl_screenshot = next();
        else if (arg == "--save") options.save = next();
        else if (arg == "--wav") options.wav = next();
        else if (arg == "--input-script") options.input_script = next();
        else if (arg == "--scale") {
            auto value = integer(next(), arg);
            if (value < 1 || value > 8) throw std::runtime_error("--scale must be between 1 and 8");
            options.scale = static_cast<int>(value);
        } else if (arg == "--buttons") {
            auto value = integer(next(), arg);
            if (value > 0xffff) throw std::runtime_error("--buttons must fit in 16 bits");
            options.buttons = static_cast<std::uint16_t>(value);
        } else throw std::runtime_error("Unknown option: " + arg);
    }
    // Reject contradictory modes before opening files or initializing SDL video.
    // Automated headless runs must be bounded so a missing stop flag cannot hang.
    if (options.headless && !options.import_only && options.frames == 0 && options.steps == 0)
        throw std::runtime_error("--headless requires --frames N or --steps N so the run is bounded");
    if (options.headless && !options.gl_screenshot.empty())
        throw std::runtime_error("--gl-screenshot requires the windowed OpenGL frontend");
    if (options.no_save && !options.save.empty())
        throw std::runtime_error("--save and --no-save cannot be combined");
    if (options.no_config && !options.config.empty())
        throw std::runtime_error("--config and --no-config cannot be combined");
    if (options.import_only && options.import_rom.empty())
        throw std::runtime_error("--import-only requires --import-rom FILE");
    return options;
}

eb::DisplaySettings load_display_settings(const std::string& path, eb::GameVersion& game) {
    // Preferences are optional and recoverable: unknown or malformed fields
    // retain defaults. Asset and save validation is intentionally stricter.
    eb::DisplaySettings settings;
    if (path.empty()) return settings;
    std::ifstream input(native_path(path));
    std::string key, value;
    while (input >> key >> value) {
        try {
            std::size_t used = 0;
            if (key == "widescreen" && (value == "0" || value == "1")) settings.widescreen = value == "1";
            else if (key == "reduce_flashing" && (value == "0" || value == "1")) settings.reduce_flashing = value == "1";
            else if (key == "game" && (value == "earthbound" || value == "mother2"))
                game = value == "mother2" ? eb::GameVersion::JP : eb::GameVersion::US;
            else if (key == "aspect") {
                const auto aspect = std::stoi(value, &used);
                if (used == value.size() && aspect >= 0 && aspect <= int(eb::AspectRatio::Custom))
                    settings.aspect = static_cast<eb::AspectRatio>(aspect);
            } else if (key == "custom_aspect") {
                const auto aspect = std::stof(value, &used);
                if (used == value.size() && std::isfinite(aspect) && aspect >= 256.f / 224 && aspect <= 1024.f / 224)
                    settings.custom_aspect = aspect;
            }
        } catch (const std::exception&) { /* Ignore malformed preferences, retaining safe defaults. */ }
    }
    return settings;
}

void store_display_settings(const std::string& path, const eb::DisplaySettings& settings, eb::GameVersion game) {
    if (path.empty()) return;
    const auto destination = native_path(path);
    if (!destination.parent_path().empty()) std::filesystem::create_directories(destination.parent_path());
    auto temporary = destination;
    // Replace only after a complete write so interrupted shutdown cannot leave
    // a half-written preferences file in place of the previous valid settings.
    temporary += ".tmp." + std::to_string(std::random_device{}());
    try {
        std::ofstream output(temporary);
        output << "widescreen " << int(settings.widescreen) << "\naspect " << int(settings.aspect)
               << "\nreduce_flashing " << int(settings.reduce_flashing)
               << "\ncustom_aspect " << std::setprecision(9) << settings.custom_aspect
               << "\ngame " << game_basename(game) << '\n';
        output.close();
        if (!output) throw std::runtime_error("Cannot write display preferences: " + path);
#ifdef _WIN32
        if (!MoveFileExW(temporary.c_str(), destination.c_str(), MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH))
            throw std::system_error(GetLastError(), std::system_category(), "Cannot replace display preferences");
#else
        std::filesystem::rename(temporary, destination);
#endif
    } catch (...) {
        std::error_code ignored;
        std::filesystem::remove(temporary, ignored);
        throw;
    }
}

struct InputChange { std::uint64_t frame; std::uint16_t buttons; };

std::vector<InputChange> input_script(const std::string& path) {
    // Scripts describe a held joypad mask from each listed hardware frame onward.
    // Strictly increasing frame numbers make replay order unambiguous.
    std::vector<InputChange> changes;
    if (path.empty()) return changes;
    std::ifstream input(path);
    if (!input) throw std::runtime_error("Cannot open input script: " + path);
    std::string line;
    unsigned line_number = 0;
    while (std::getline(input, line)) {
        ++line_number;
        if (auto comment = line.find('#'); comment != std::string::npos) line.erase(comment);
        std::istringstream fields(line);
        std::string frame_text, buttons_text, extra;
        if (!(fields >> frame_text)) continue;
        const auto location = path + ':' + std::to_string(line_number);
        if (!(fields >> buttons_text) || fields >> extra)
            throw std::runtime_error(location + ": expected '<frame> <joymask>'");
        const auto frame = integer(frame_text, location + " frame");
        const auto buttons = integer(buttons_text, location + " joymask");
        if (buttons > 0xffff) throw std::runtime_error(location + ": joymask must fit in 16 bits");
        if (!changes.empty() && frame <= changes.back().frame)
            throw std::runtime_error(location + ": input frames must be strictly increasing");
        changes.push_back({frame, static_cast<std::uint16_t>(buttons)});
    }
    if (!input.eof()) throw std::runtime_error("Cannot read input script: " + path);
    return changes;
}

void load_save(const std::string& path, eb::Bus& bus) {
    // SRAM is a raw fixed-size hardware image; missing means a fresh cartridge,
    // while a wrong-sized file is an error rather than a partially loaded save.
    const std::filesystem::path native_path(std::u8string(path.begin(), path.end()));
    if (!std::filesystem::exists(native_path)) return;
    if (std::filesystem::file_size(native_path) != bus.sram.size())
        throw std::runtime_error("Save must contain exactly " + std::to_string(bus.sram.size()) + " bytes: " + path);
    std::ifstream input(native_path, std::ios::binary);
    input.read(reinterpret_cast<char*>(bus.sram.data()), static_cast<std::streamsize>(bus.sram.size()));
    if (!input) throw std::runtime_error("Cannot read save: " + path);
}

void store_save(const std::string& path, const eb::Bus& bus) {
    const std::filesystem::path destination(std::u8string(path.begin(), path.end()));
    auto temporary = destination;
    // Keep the previous battery image until the replacement has fully closed.
    temporary += ".tmp." + std::to_string(std::random_device{}()) + "." +
        std::to_string(std::chrono::steady_clock::now().time_since_epoch().count());
    try {
        std::ofstream output(temporary, std::ios::binary | std::ios::trunc);
        output.write(reinterpret_cast<const char*>(bus.sram.data()), static_cast<std::streamsize>(bus.sram.size()));
        output.close();
        if (!output) throw std::runtime_error("Cannot write temporary save: " + path);
#ifdef _WIN32
        if (!MoveFileExW(temporary.c_str(), destination.c_str(), MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH))
            throw std::system_error(GetLastError(), std::system_category(), "Cannot replace save: " + path);
#else
        std::filesystem::rename(temporary, destination);
#endif
    } catch (...) {
        std::error_code ignored;
        std::filesystem::remove(temporary, ignored);
        throw;
    }
}

void screenshot(const std::string& path, const eb::Bus& bus) {
    // Capture the unmodified native framebuffer for source/reference comparisons.
    // Widescreen and ImGui cannot change the bytes produced by this path.
    std::ofstream output(path, std::ios::binary);
    if (!output) throw std::runtime_error("Cannot create screenshot: " + path);
    output << "P6\n" << width << ' ' << height << "\n255\n";
    for (const auto pixel : bus.framebuffer) {
        const char rgb[] = {static_cast<char>(pixel >> 16), static_cast<char>(pixel >> 8), static_cast<char>(pixel)};
        output.write(rgb, sizeof rgb);
    }
    output.close();
    if (!output) throw std::runtime_error("Cannot write screenshot: " + path);
}

void presentation_screenshot(const std::string& path, std::span<const std::uint32_t> pixels, int source_width) {
    // The adapted canvas includes extra scene columns, but excludes host scaling,
    // letterboxing, and overlays. GL capture separately records those host layers.
    // This is the picture sent to the host renderer, including an enabled
    // photosensitivity filter. The native screenshot remains unfiltered.
    eb::FrameImage image{source_width, height, {}};
    image.rgb.reserve(static_cast<std::size_t>(image.width) * image.height * 3);
    for (auto pixel : pixels) {
        image.rgb.push_back(static_cast<std::uint8_t>(pixel >> 16));
        image.rgb.push_back(static_cast<std::uint8_t>(pixel >> 8));
        image.rgb.push_back(static_cast<std::uint8_t>(pixel));
    }
    image.write_ppm(path);
}

class WaveWriter {
public:
    explicit WaveWriter(const std::string& path): path_(path), output_(path, std::ios::binary | std::ios::trunc) {
        if (!output_) throw std::runtime_error("Cannot create WAV file: " + path);
        header();
    }
    ~WaveWriter() { if (!finished_) { try { finish(); } catch (...) {} } }
    void append(std::span<const std::int16_t> samples) {
        if (samples.size() > (0xffffffffu - 36 - bytes_) / 2)
            throw std::runtime_error("WAV recording exceeds the RIFF size limit");
        for (auto sample : samples) little16(static_cast<std::uint16_t>(sample));
        bytes_ += static_cast<std::uint32_t>(samples.size() * 2);
        if (!output_) throw std::runtime_error("Cannot write WAV audio: " + path_);
    }
    void finish() {
        if (finished_) return;
        // RIFF lengths are unknown until recording ends; rewrite the placeholder
        // header after all interleaved stereo samples have been appended.
        output_.seekp(0);
        header();
        output_.close();
        finished_ = true;
        if (!output_) throw std::runtime_error("Cannot finalize WAV file: " + path_);
    }
private:
    void little16(std::uint16_t value) {
        const char bytes[] = {static_cast<char>(value), static_cast<char>(value >> 8)};
        output_.write(bytes, sizeof bytes);
    }
    void little32(std::uint32_t value) { little16(static_cast<std::uint16_t>(value)); little16(value >> 16); }
    void header() {
        output_.write("RIFF", 4); little32(bytes_ + 36); output_.write("WAVEfmt ", 8);
        little32(16); little16(1); little16(2); little32(eb::Dsp::sample_rate);
        little32(eb::Dsp::sample_rate * 4); little16(4); little16(16);
        output_.write("data", 4); little32(bytes_);
    }
    std::string path_;
    std::ofstream output_;
    std::uint32_t bytes_{};
    bool finished_{};
};

class AudioQueue {
public:
    AudioQueue() {
        if (SDL_InitSubSystem(SDL_INIT_AUDIO) != 0)
            throw std::runtime_error(std::string("SDL audio initialization: ") + SDL_GetError());
        SDL_AudioSpec desired{}, obtained{};
        desired.freq = eb::Dsp::sample_rate;
        desired.format = AUDIO_S16SYS;
        desired.channels = 2;
        desired.samples = 1024;
        // Request the DSP's format exactly. Playback is a consumer of emulated
        // samples, never the clock that decides how much game logic to execute.
        device_ = SDL_OpenAudioDevice(nullptr, 0, &desired, &obtained, 0);
        if (!device_) {
            const std::string error = SDL_GetError();
            SDL_QuitSubSystem(SDL_INIT_AUDIO);
            throw std::runtime_error("SDL audio device: " + error + " (use --no-audio to disable playback)");
        }
    }
    ~AudioQueue() {
        SDL_CloseAudioDevice(device_);
        SDL_QuitSubSystem(SDL_INIT_AUDIO);
    }
    void append(std::span<const std::int16_t> samples) {
        if (samples.empty()) return;
        if (SDL_QueueAudio(device_, samples.data(), static_cast<Uint32>(samples.size_bytes())) != 0)
            throw std::runtime_error(std::string("SDL audio queue: ") + SDL_GetError());
        if (!started_ && SDL_GetQueuedAudioSize(device_) >= 4096) {
            // Prime a small buffer before unpausing to avoid a startup underrun.
            SDL_PauseAudioDevice(device_, 0);
            started_ = true;
        }
    }
private:
    SDL_AudioDeviceID device_{};
    bool started_{};
};

class Display {
public:
    // Own SDL/window/GL resources as one lifetime. settings is borrowed from main
    // and survives the Display so edits can be saved after the last game frame.
    explicit Display(const Options& options, eb::DisplaySettings& settings): settings_(settings) {
        SDL_SetMainReady();
        if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER | SDL_INIT_EVENTS) != 0)
            throw std::runtime_error(std::string("SDL_Init: ") + SDL_GetError());
        initialized_ = true;
        try {
            SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
            SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);
            SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
            const auto initial_width = settings.render_width(width * options.scale, height * options.scale);
            int window_width = initial_width * options.scale, window_height = height * options.scale;
            SDL_Rect available{};
            if (settings.widescreen && SDL_GetDisplayUsableBounds(0, &available) == 0) {
                // A large aspect setting should still open within the desktop.
                // This changes host window size, not the virtual game viewport.
                const double fit = std::min({1.0, double(std::max(256, available.w - 48)) / window_width,
                                            double(std::max(224, available.h - 80)) / window_height});
                window_width = int(window_width * fit);
                window_height = int(window_height * fit);
            }
            window_ = SDL_CreateWindow("Phase Distorter", SDL_WINDOWPOS_CENTERED,
                SDL_WINDOWPOS_CENTERED, window_width, window_height,
                SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI);
            if (!window_) throw std::runtime_error(std::string("SDL_CreateWindow: ") + SDL_GetError());
            eb::set_app_icon(window_);
            context_ = SDL_GL_CreateContext(window_);
            if (!context_) throw std::runtime_error(std::string("SDL_GL_CreateContext: ") + SDL_GetError());
            if (options.start_fullscreen && SDL_SetWindowFullscreen(window_, SDL_WINDOW_FULLSCREEN_DESKTOP) != 0)
                std::cerr << "Fullscreen unavailable: " << SDL_GetError() << '\n';
            if (SDL_GL_SetSwapInterval(options.vsync ? 1 : 0) != 0 && options.vsync)
                std::cerr << "Vsync unavailable; using the frame clock: " << SDL_GetError() << '\n';
            presenter_ = std::make_unique<eb::FramePresenter>();
            for (int index = 0; index < SDL_NumJoysticks(); ++index) open_controller(index);
            std::cout << "OpenGL: " << glGetString(GL_VERSION) << " / " << glGetString(GL_RENDERER) << '\n';
        } catch (...) {
            cleanup();
            throw;
        }
    }
    ~Display() { cleanup(); }
    Display(const Display&) = delete;
    Display& operator=(const Display&) = delete;

    eb::GameAssets import_assets(std::string& path, const std::string& error, const std::string& default_directory,
                                bool lock_game, eb::GameVersion game) {
        // This temporary panel is destroyed before the in-game panel is created.
        // No CPU/APU/bus exists yet, so invalid input cannot start partial gameplay.
        eb::AssetImportPanel importer(window_, context_);
        if (!error.empty()) importer.set_error(error);
        while (!importer.exit_requested()) {
            SDL_Event event;
            while (SDL_PollEvent(&event)) {
                importer.process_event(event);
                if (event.type == SDL_DROPFILE) SDL_free(event.drop.file);
            }
            if (importer.exit_requested()) return {};
            int dw{}, dh{};
            SDL_GL_GetDrawableSize(window_, &dw, &dh);
            glViewport(0, 0, dw, dh);
            glDisable(GL_SCISSOR_TEST);
            glClearColor(0.035f, 0.043f, 0.065f, 1.f);
            glClear(GL_COLOR_BUFFER_BIT);
            importer.draw();
            SDL_GL_SwapWindow(window_);
            if (const auto rom = importer.take_import_request()) {
                try {
                    const auto& profile = eb::identify_rom(native_path(*rom), eb::asset_profiles());
                    if (lock_game && profile.version != game)
                        throw std::runtime_error("That ROM belongs to a different game than the selected --game option.");
                    if (!default_directory.empty()) path = default_directory + game_basename(profile.version) + ".ebpak";
                    // Reload through the same validation path used on later runs;
                    // successful extraction alone does not bypass pack verification.
                    eb::import_assets(native_path(*rom), native_path(path), profile.layout);
                    return eb::load_game_assets(native_path(path), eb::asset_profiles());
                } catch (const std::exception& failure) {
                    importer.set_error(failure.what());
                }
            }
            SDL_Delay(10);
        }
        return {};
    }

    void start_panel(bool visible, const std::string& game_title, const std::string& preferences,
                     eb::GameVersion game, const std::string& custom_assets) {
        game_title_ = game_title;
        cache_directory_ = native_path(preferences);
        game_ = game;
        custom_assets_ = custom_assets;
        SDL_SetWindowTitle(window_, ("Phase Distorter - " + game_title).c_str());
        panel_ = std::make_unique<eb::DebugPanel>(window_, context_);
        panel_->set_visible(visible);
        refresh_asset_cache();
    }

    bool fullscreen() const { return (SDL_GetWindowFlags(window_) & SDL_WINDOW_FULLSCREEN_DESKTOP) != 0; }

    std::optional<eb::GameVersion> take_game_request() {
        return std::exchange(next_game_, std::nullopt);
    }

    void configure_picture(eb::Bus& bus) const {
        // Only the presentation width crosses into Bus. Game camera coordinates,
        // sprite spawning, and hardware timing continue to use native dimensions.
        int dw{}, dh{};
        SDL_GL_GetDrawableSize(window_, &dw, &dh);
        bus.set_presentation_width(settings_.render_width(dw, std::max(1, dh - menu_height_pixels(dh))));
    }

    bool events(std::uint16_t& buttons) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            const bool was_visible = panel_ && panel_->visible();
            const bool consumed = panel_ && panel_->process_event(event);
            if (panel_ && !was_visible && panel_->visible()) refresh_asset_cache();
            if (event.type == SDL_DROPFILE) { SDL_free(event.drop.file); continue; }
            // Fullscreen is a global host shortcut even while the panel captures
            // gameplay keys, so handle it before honoring the consumed flag.
            if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_F11 && !event.key.repeat) {
                toggle_fullscreen();
                continue;
            }
            if (consumed) continue;
            if (event.type == SDL_QUIT || (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_ESCAPE)) return false;
            if (event.type == SDL_CONTROLLERDEVICEADDED) open_controller(event.cdevice.which);
            if (event.type == SDL_CONTROLLERDEVICEREMOVED && controller_ &&
                SDL_JoystickInstanceID(SDL_GameControllerGetJoystick(controller_)) == event.cdevice.which) {
                SDL_GameControllerClose(controller_);
                controller_ = nullptr;
            }
        }
        // Scripted input is deterministic test/game input, independent of the UI.
        // Only physical keyboard/controller input is captured by the open panel.
        if (panel_ && panel_->captures_game_input()) return true;
        const auto* keys = SDL_GetKeyboardState(nullptr);
        // Bit positions match the SNES JOY1 register layout, not SDL key values.
        const std::array<std::pair<SDL_Scancode, unsigned>, 12> key_map{{
            {SDL_SCANCODE_Z, 15}, {SDL_SCANCODE_A, 14}, {SDL_SCANCODE_RSHIFT, 13},
            {SDL_SCANCODE_RETURN, 12}, {SDL_SCANCODE_UP, 11}, {SDL_SCANCODE_DOWN, 10},
            {SDL_SCANCODE_LEFT, 9}, {SDL_SCANCODE_RIGHT, 8}, {SDL_SCANCODE_X, 7},
            {SDL_SCANCODE_S, 6}, {SDL_SCANCODE_Q, 5}, {SDL_SCANCODE_W, 4}}};
        for (const auto& [key, bit] : key_map) if (keys[key]) buttons |= std::uint16_t(1u << bit);
        if (controller_) {
            const std::array<std::pair<SDL_GameControllerButton, unsigned>, 12> button_map{{
                {SDL_CONTROLLER_BUTTON_A, 15}, {SDL_CONTROLLER_BUTTON_X, 14},
                {SDL_CONTROLLER_BUTTON_BACK, 13}, {SDL_CONTROLLER_BUTTON_START, 12},
                {SDL_CONTROLLER_BUTTON_DPAD_UP, 11}, {SDL_CONTROLLER_BUTTON_DPAD_DOWN, 10},
                {SDL_CONTROLLER_BUTTON_DPAD_LEFT, 9}, {SDL_CONTROLLER_BUTTON_DPAD_RIGHT, 8},
                {SDL_CONTROLLER_BUTTON_B, 7}, {SDL_CONTROLLER_BUTTON_Y, 6},
                {SDL_CONTROLLER_BUTTON_LEFTSHOULDER, 5}, {SDL_CONTROLLER_BUTTON_RIGHTSHOULDER, 4}}};
            for (const auto& [button, bit] : button_map)
                if (SDL_GameControllerGetButton(controller_, button)) buttons |= std::uint16_t(1u << bit);
            const int axis_x = SDL_GameControllerGetAxis(controller_, SDL_CONTROLLER_AXIS_LEFTX);
            const int axis_y = SDL_GameControllerGetAxis(controller_, SDL_CONTROLLER_AXIS_LEFTY);
            if (axis_x < -12000) buttons |= 1u << 9;
            if (axis_x > 12000) buttons |= 1u << 8;
            if (axis_y < -12000) buttons |= 1u << 11;
            if (axis_y > 12000) buttons |= 1u << 10;
        }
        return true;
    }

    void present(const eb::Bus& bus, const eb::Cpu& cpu, const eb::Spc& spc, const eb::Dsp& dsp,
                 std::span<const std::uint32_t> picture, unsigned picture_width,
                 double fixed_aspect, const std::string& capture = {}) {
        int drawable_width = 0, drawable_height = 0;
        SDL_GL_GetDrawableSize(window_, &drawable_width, &drawable_height);
        const int top_inset = menu_height_pixels(drawable_height);
        presenter_->draw(picture, int(picture_width), height, drawable_width, drawable_height,
                         fixed_aspect > 0 ? fixed_aspect :
                         settings_.target_aspect(drawable_width, std::max(1, drawable_height - top_inset)), top_inset);
        if (panel_) {
            // Copy observations rather than exposing mutable hardware to the UI.
            // Formatting full register strings is only needed for a visible panel.
            eb::DebugDiagnostics diagnostics;
            diagnostics.game_title = game_title_;
            diagnostics.frames = bus.frames;
            diagnostics.master_clocks = bus.master_clocks();
            diagnostics.cpu_instructions = cpu.instructions;
            diagnostics.spc_instructions = spc.instructions;
            diagnostics.audio_frames = dsp.sample_frames();
            diagnostics.source_width = int(bus.presentation_width());
            diagnostics.drawable_width = drawable_width;
            diagnostics.drawable_height = drawable_height;
            diagnostics.fullscreen = fullscreen();
            diagnostics.cache = cache_info_;
            if (!custom_assets_.empty())
                diagnostics.custom_asset_status = "Using a custom asset pack: " + custom_assets_ +
                    ". Cache controls below only manage the default packs. Switching uses the selected game's default cache.";
            if (panel_->visible()) {
                diagnostics.cpu_state = cpu.describe();
                diagnostics.spc_state = spc.describe();
            }
            const bool was_visible = panel_->visible();
            panel_->draw(settings_, diagnostics);
            if (!was_visible && panel_->visible()) refresh_asset_cache();
            handle_panel_action();
        }
        // Read back before swap so captures contain this frame and its overlay.
        if (!capture.empty()) presenter_->capture().write_ppm(capture);
        SDL_GL_SwapWindow(window_);
    }

private:
    int menu_height_pixels(int drawable_height) const {
        if (!panel_ || drawable_height <= 0) return 0;
        int logical_height = 0;
        SDL_GetWindowSize(window_, nullptr, &logical_height);
        if (logical_height <= 0) return 0;
        // ImGui sizes are logical window units; OpenGL viewports use drawable
        // pixels. Reserve the bar above the complete game picture at any DPI.
        return std::clamp(int(std::ceil(panel_->menu_height() * drawable_height / logical_height)),
                          0, std::max(0, drawable_height - 1));
    }

    void toggle_fullscreen() {
        if (SDL_SetWindowFullscreen(window_, fullscreen() ? 0 : SDL_WINDOW_FULLSCREEN_DESKTOP) != 0) {
            const std::string error = std::string("Fullscreen unavailable: ") + SDL_GetError();
            std::cerr << error << '\n';
            if (panel_) panel_->set_action_status(error);
        }
    }

    void refresh_asset_cache() {
        constexpr std::array versions{eb::GameVersion::US, eb::GameVersion::JP};
        for (std::size_t index = 0; index < versions.size(); ++index) {
            auto& info = cache_info_[index];
            info.title = versions[index] == eb::GameVersion::US ? "EarthBound (English)" : "Mother 2 (Japanese)";
            const auto path = eb::cached_asset_path(cache_directory_, versions[index]).u8string();
            info.path.assign(path.begin(), path.end());
            info.active = game_ == versions[index];
            try { info.present = eb::cached_assets_present(cache_directory_, versions[index]); }
            catch (const std::exception& error) {
                info.present = false;
                panel_->set_action_status(error.what());
            }
        }
    }

    void handle_panel_action() {
        const auto action = panel_->take_action();
        if (!action) return;
        if (*action == eb::PanelAction::ToggleFullscreen) { toggle_fullscreen(); return; }
        if (*action == eb::PanelAction::SwitchEarthBound || *action == eb::PanelAction::SwitchMother2) {
            next_game_ = *action == eb::PanelAction::SwitchEarthBound ? eb::GameVersion::US : eb::GameVersion::JP;
            return;
        }
        const auto game = *action == eb::PanelAction::ClearEarthBoundAssets ? eb::GameVersion::US : eb::GameVersion::JP;
        try {
            const bool removed = eb::clear_cached_assets(cache_directory_, game);
            refresh_asset_cache();
            panel_->set_action_status(removed
                ? "Imported assets cleared. ROMs and saves are unchanged. The current game can continue; switch to this version to import again."
                : "No imported cache was present. ROMs and saves are unchanged.");
        } catch (const std::exception& error) {
            panel_->set_action_status(std::string("Could not clear imported assets: ") + error.what());
        }
    }

    void open_controller(int index) {
        if (!controller_ && SDL_IsGameController(index)) controller_ = SDL_GameControllerOpen(index);
    }
    void cleanup() {
        // Destroy GL clients before deleting their context, then SDL last. The
        // same path handles both normal destruction and partial construction.
        if (controller_) SDL_GameControllerClose(controller_);
        panel_.reset();
        presenter_.reset();
        if (context_) SDL_GL_DeleteContext(context_);
        if (window_) SDL_DestroyWindow(window_);
        if (initialized_) SDL_Quit();
        controller_ = nullptr;
        context_ = nullptr;
        window_ = nullptr;
        initialized_ = false;
    }
    SDL_Window* window_ = nullptr;
    SDL_GLContext context_ = nullptr;
    SDL_GameController* controller_ = nullptr;
    std::unique_ptr<eb::FramePresenter> presenter_;
    std::unique_ptr<eb::DebugPanel> panel_;
    eb::DisplaySettings& settings_;
    std::string game_title_;
    std::filesystem::path cache_directory_;
    std::array<eb::AssetCacheInfo, 2> cache_info_;
    std::string custom_assets_;
    eb::GameVersion game_ = eb::GameVersion::US;
    std::optional<eb::GameVersion> next_game_;
    bool initialized_ = false;
};
// A session owns every hardware, audio and display object. Returning before the
// next session starts prevents stale state or a prior game's SRAM from leaking
// across a menu-requested version switch.
int run_session(Options options, std::optional<NextSession>& next) {
    try {
        SDL_SetMainReady();
        char* directory = SDL_GetPrefPath("ebsrc", "EarthBoundCpp");
        if (!directory) throw std::runtime_error(std::string("Cannot find application data directory: ") + SDL_GetError());
        const std::string preferences(directory);
        SDL_free(directory);
        // Desktop runs remember preferences by default; deterministic headless
        // runs only read/write them when an explicit config path was supplied.
        if (!options.headless && !options.no_config && options.config.empty()) options.config = preferences + "display.cfg";
        auto game = options.game;
        auto settings = load_display_settings(options.config, game);
        if (options.game_override) game = options.game;
        bool default_asset_path = false;
        if (options.assets.empty()) {
            // Explicit --assets takes precedence over the environment, which
            // takes precedence over the per-game application-data default.
            const char* environment = options.default_assets_only ? nullptr : std::getenv("EB_ASSET_PACK");
            default_asset_path = !(environment && *environment);
            options.assets = default_asset_path ? preferences + game_basename(game) + ".ebpak" : environment;
        }
        if (options.widescreen_override) settings.widescreen = options.display.widescreen;
        if (options.flashing_override) settings.reduce_flashing = options.display.reduce_flashing;
        if (options.aspect_override) {
            settings.aspect = options.display.aspect;
            settings.custom_aspect = options.display.custom_aspect;
        }
        if (!options.import_rom.empty()) {
            // Identify by contents first, then select the default output filename.
            // An explicit --game acts as a compatibility constraint, not a guess.
            const auto& profile = eb::identify_rom(native_path(options.import_rom), eb::asset_profiles());
            if (options.game_override && profile.version != game)
                throw std::runtime_error("The supplied ROM does not match --game. Choose its matching game or omit --game.");
            game = profile.version;
            if (default_asset_path) options.assets = preferences + game_basename(game) + ".ebpak";
            eb::import_assets(native_path(options.import_rom), native_path(options.assets), profile.layout);
            std::cout << "Imported " << profile.title << " assets: " << options.assets << '\n';
        }
        if (options.import_only) return 0;
        if (default_asset_path && !options.game_override && !std::filesystem::exists(native_path(options.assets))) {
            const auto other = game == eb::GameVersion::US ? eb::GameVersion::JP : eb::GameVersion::US;
            const auto alternate = preferences + game_basename(other) + ".ebpak";
            if (std::filesystem::exists(native_path(alternate))) options.assets = alternate;
        }
        std::unique_ptr<Display> display;
        eb::GameAssets program;
        std::string import_error;
        try {
            program = eb::load_game_assets(native_path(options.assets), eb::asset_profiles());
        } catch (const std::exception& error) {
            // Interactive startup can repair a missing/bad pack in the importer.
            // Headless tools instead report an actionable error and stop.
            if (options.headless)
                throw std::runtime_error(std::string(error.what()) + "\nImport your own supported ROM with --import-rom FILE, "
                                         "or select an existing pack with --assets FILE.");
            if (std::filesystem::exists(native_path(options.assets))) import_error = error.what();
        }
        if (!options.headless) display = std::make_unique<Display>(options, settings);
        if (program.image.empty() && display)
            program = display->import_assets(options.assets, import_error, default_asset_path ? preferences : "",
                                             options.game_override, game);
        if (program.image.empty()) return 0; // The user closed first-run setup.
        if (options.game_override && program.version != game)
            throw std::runtime_error("The selected asset pack does not match --game.");
        game = program.version;
        // Choose save identity from the verified pack, after automatic detection.
        if (!options.headless && !options.no_save && options.save.empty())
            options.save = preferences + game_basename(game) + ".srm";
        if (display) display->start_panel(options.debug, program.title, preferences, game,
                                          default_asset_path ? "" : options.assets);
        const auto inputs = input_script(options.input_script);
        std::size_t next_input = 0;
        auto scripted_buttons = options.buttons;
        // Asset validation is the startup gate: instantiate all machine state
        // only after selecting the matching compiled US or Japanese program.
        auto bus = std::make_unique<eb::Bus>(program.image, game);
        if (!options.save.empty()) load_save(options.save, *bus);
        eb::Spc spc(*bus);
        eb::Dsp dsp(spc);
        eb::Cpu cpu(*bus);
        cpu.reset();
        bus->set_presentation_width(settings.render_width(width * options.scale, height * options.scale));
        bus->set_presentation_effects_enabled(settings.reduce_flashing);
        eb::PhotosensitivityFilter photosensitivity_filter;
        std::span<const std::uint32_t> picture = bus->presentation_pixels();
        unsigned picture_width = bus->presentation_width();
        double picture_fixed_aspect = bus->presentation_fixed_aspect();
        std::uint64_t filtered_frame = UINT64_MAX;
        // DMA can carry one CPU step across several video frames. Observe each
        // completed canvas at its hardware boundary, before the next frame can
        // overwrite it, rather than sampling only when the CPU step returns.
        bus->on_presentation_frame = [&](std::span<const std::uint32_t> pixels,
                                         unsigned source_width, std::uint64_t frame) {
            if (settings.reduce_flashing) {
                picture = photosensitivity_filter.apply(pixels, int(source_width), height, true,
                    bus->presentation_effect_mask(), bus->presentation_effect_reference());
                picture_width = source_width;
                picture_fixed_aspect = bus->presentation_fixed_aspect();
                filtered_frame = frame;
            }
        };
        std::unique_ptr<AudioQueue> audio;
        if (display && options.audio) audio = std::make_unique<AudioQueue>();
        std::unique_ptr<WaveWriter> wave;
        if (!options.wav.empty()) wave = std::make_unique<WaveWriter>(options.wav);
        const auto drain_audio = [&]() {
            // Drain once into both optional sinks. Disabling device playback
            // still runs the DSP and permits deterministic WAV recording.
            auto samples = dsp.take_samples();
            if (wave) wave->append(samples);
            if (audio) audio->append(samples);
        };
        std::uint64_t steps = 0;
        const auto start = std::chrono::steady_clock::now();
        eb::FramePacer pacer(start);
        std::uint64_t presented_frames = 0, catch_up_frames = 0;
        int status = 0;
        try {
            for (;;) {
                if (display) {
                    if (const auto game_request = display->take_game_request()) {
                        next = NextSession{*game_request, settings, display->fullscreen()};
                        break; // The normal shutdown below flushes this game's SRAM.
                    }
                }
                // A confirmed menu action on the final presented frame must not
                // disappear merely because a diagnostic frame/step limit ended.
                if ((options.frames && bus->frames >= options.frames) ||
                    (options.steps && steps >= options.steps)) break;
                // Apply replay changes and physical input at the same hardware
                // frame boundary regardless of how often the host draws a frame.
                while (next_input < inputs.size() && inputs[next_input].frame <= bus->frames)
                    scripted_buttons = inputs[next_input++].buttons;
                std::uint16_t buttons = scripted_buttons;
                if (display && !display->events(buttons)) break;
                if (display) display->configure_picture(*bus);
                else bus->set_presentation_width(settings.render_width(width * options.scale, height * options.scale));
                // Observe effect contributions only while requested. The Bus
                // records them alongside each scanline, before DMA or game code
                // can advance to another effect phase. No emulated state changes.
                bus->set_presentation_effects_enabled(settings.reduce_flashing);
                bus->set_buttons(buttons);
                const auto previous_frame = bus->frames;
                // CPU bus clocks also drive the attached PPU/APU. Do not create
                // separate host-timed update loops for those pieces of hardware.
                do {
                    if (cpu.stopped) {
                        throw std::runtime_error("CPU executed STP before the requested run completed");
                    }
                    cpu.step();
                    ++steps;
                } while (bus->frames == previous_frame && (!options.steps || steps < options.steps));
                drain_audio();
                if (!settings.reduce_flashing) {
                    // Preserve the original presentation path exactly when off,
                    // including partial images left by a step-limited run.
                    picture = photosensitivity_filter.apply(bus->presentation_pixels(),
                        int(bus->presentation_width()), height, false);
                    picture_width = bus->presentation_width();
                    picture_fixed_aspect = bus->presentation_fixed_aspect();
                    filtered_frame = UINT64_MAX;
                } else if (filtered_frame != bus->frames) {
                    // A step limit may stop before the first completed frame.
                    // Normal frames were already processed by the observer;
                    // host redraws and captures must not process them twice.
                    picture = photosensitivity_filter.apply(bus->presentation_pixels(),
                        int(bus->presentation_width()), height, true,
                        bus->presentation_effect_mask(), bus->presentation_effect_reference());
                    picture_width = bus->presentation_width();
                    picture_fixed_aspect = bus->presentation_fixed_aspect();
                    filtered_frame = bus->frames;
                }
                if (display) {
                    const auto elapsed_frames = bus->frames > previous_frame ? bus->frames - previous_frame : 1;
                    if (pacer.advance(std::chrono::steady_clock::now(), elapsed_frames)) {
                        display->present(*bus, cpu, spc, dsp, picture, picture_width, picture_fixed_aspect);
                        ++presented_frames;
                        if (pacer.deadline() > std::chrono::steady_clock::now()) std::this_thread::sleep_until(pacer.deadline());
                    } else {
                        // Catch up by omitting presentation only. Every CPU step,
                        // input transition, and DSP sample above still occurred.
                        catch_up_frames += elapsed_frames;
                    }
                }
            }
        } catch (const std::exception& error) {
            std::cerr << "Execution stopped: " << error.what() << '\n' << cpu.describe() << '\n' << spc.describe() << '\n';
            eb::show_desktop_error(std::string("The game stopped unexpectedly.\n\n") + error.what());
            status = 1;
            // A failed CPU step can follow a canvas resize. Refresh the span
            // before diagnostic captures, retaining the selected visual filter.
            picture = photosensitivity_filter.apply(bus->presentation_pixels(),
                int(bus->presentation_width()), height, settings.reduce_flashing,
                bus->presentation_effect_mask(), bus->presentation_effect_reference());
            picture_width = bus->presentation_width();
            picture_fixed_aspect = bus->presentation_fixed_aspect();
        }
        drain_audio();
        if (wave) wave->finish();
        if (display && !options.gl_screenshot.empty()) display->present(*bus, cpu, spc, dsp, picture, picture_width, picture_fixed_aspect, options.gl_screenshot);
        if (display && !next) {
            if (const auto game_request = display->take_game_request())
                next = NextSession{*game_request, settings, display->fullscreen()};
        }
        if (!options.screenshot.empty()) screenshot(options.screenshot, *bus);
        if (!options.presentation_screenshot.empty()) presentation_screenshot(options.presentation_screenshot, picture, int(picture_width));
        // Execution errors may produce useful captures, but should not overwrite
        // the user's last good save or persist settings as a clean shutdown.
        if (status == 0 && !options.save.empty()) store_save(options.save, *bus);
        if (status == 0 && display) store_display_settings(options.config, settings, next ? next->game : game);
        if (!options.save.empty()) std::cout << "save=" << options.save << '\n';
        const double elapsed = std::chrono::duration<double>(std::chrono::steady_clock::now() - start).count();
        std::cout << "frames=" << bus->frames << " steps=" << steps << " instructions=" << cpu.instructions
                  << " spc_instructions=" << spc.instructions << " audio_frames=" << dsp.sample_frames()
                  << " elapsed=" << std::fixed << std::setprecision(3) << elapsed << "s\n"
                  << cpu.describe() << '\n' << spc.describe() << '\n';
        if (display) std::cout << "presented_frames=" << presented_frames << " catch_up_frames=" << catch_up_frames << '\n';
        std::cout << "game=" << game_basename(game) << " assets=" << options.assets << '\n';
        return status;
    } catch (const std::exception& error) {
        std::cerr << "eb_cpp: " << error.what() << '\n';
        eb::show_desktop_error(error.what());
        return 1;
    }
}
} // namespace

int eb::run_application(int argc, char** argv) {
    try {
        auto options = parse_options(argc, argv);
        for (;;) {
            std::optional<NextSession> next;
            const int status = run_session(options, next);
            if (status != 0 || !next) return status;
            // A deliberate menu switch supersedes the initial game/custom pack,
            // while carrying display preferences even when --no-config is used.
            options.game = next->game;
            options.game_override = options.default_assets_only = true;
            options.display = next->display;
            options.aspect_override = options.widescreen_override = options.flashing_override = true;
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
            options.buttons = 0;
        }
    } catch (const std::exception& error) {
        std::cerr << "eb_cpp: " << error.what() << '\n';
        eb::show_desktop_error(error.what());
        return 1;
    }
}

#ifndef _WIN32
int main(int argc, char** argv) { return eb::run_application(argc, argv); }
#endif
