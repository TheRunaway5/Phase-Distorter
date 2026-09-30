#ifndef SDL_MAIN_HANDLED
#define SDL_MAIN_HANDLED
#endif
#include "eb/audio_output.hpp"
#include "eb/display_preferences.hpp"
#include "eb/frame_pacer.hpp"
#include "eb/input_replay.hpp"
#include "eb/launch_options.hpp"
#include "eb/session_storage.hpp"
#include <SDL.h>
#include <algorithm>
#include <array>
#include <chrono>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <iterator>
#include <span>
#include <stdexcept>
#include <string>
#include <type_traits>
#include <vector>

namespace {
unsigned checks{};
void require(bool condition, const std::string &message) {
    ++checks;
    if (!condition)
        throw std::runtime_error(message);
}
template <class Action> void rejects(Action action, const std::string &message) {
    try {
        action();
    } catch (const std::exception &) {
        ++checks;
        return;
    }
    throw std::runtime_error(message);
}
std::string path_text(const std::filesystem::path &path) {
    const auto utf8 = path.u8string();
    return {utf8.begin(), utf8.end()};
}
struct TemporaryDirectory {
    std::filesystem::path path =
        std::filesystem::temp_directory_path() /
        ("phase-desktop-support-" +
         std::to_string(std::chrono::steady_clock::now().time_since_epoch().count()));
    TemporaryDirectory() { std::filesystem::create_directories(path); }
    ~TemporaryDirectory() {
        std::error_code ignored;
        std::filesystem::remove_all(path, ignored);
    }
};
std::string read_file(const std::filesystem::path &path) {
    std::ifstream input(path, std::ios::binary);
    return {std::istreambuf_iterator<char>(input), {}};
}
void write_file(const std::filesystem::path &path, const std::string &contents) {
    std::ofstream output(path, std::ios::binary);
    output << contents;
}
eb::LaunchOptions options(std::vector<std::string> arguments) {
    arguments.insert(arguments.begin(), "eb_cpp");
    std::vector<char *> pointers;
    for (auto &argument : arguments)
        pointers.push_back(argument.data());
    return eb::parse_options(int(pointers.size()), pointers.data());
}
void option_contract() {
    const auto defaults = options({});
    require(!defaults.headless && defaults.vsync && defaults.audio && !defaults.replay_only &&
                defaults.scale == 3 && defaults.display.frame_limit == 60 &&
                defaults.display.interpolate_frames && defaults.display.direct_rendering,
            "Launch defaults changed");
    const auto selected =
        options({"--headless", "--frames", "0x100", "--buttons", "0x8000", "--game", "jp", "--aspect", "32:9",
                 "--fps", "300", "--no-interpolation", "--vrr", "--reduce-flashing", "--replay-only"});
    require(selected.frames == 256 && selected.buttons == 0x8000 && selected.game == eb::GameVersion::JP &&
                selected.game_override && selected.aspect_override && selected.widescreen_override &&
                selected.fps_override && selected.interpolation_override && selected.vrr_override &&
                selected.flashing_override && selected.display.aspect == eb::AspectRatio::Custom &&
                selected.display.frame_limit == 300 && !selected.display.interpolate_frames &&
                selected.replay_only,
            "Explicit CLI settings or override markers were lost");
    require(!defaults.display.crt_filter && options({"--crt"}).display.crt_filter &&
                !options({"--crt", "--no-crt"}).display.crt_filter && options({"--crt"}).crt_override,
            "CRT CLI toggle or default failed");
    const auto direct = options({"--direct-rendering"});
    require(direct.display.direct_rendering && !direct.display.interpolate_frames && direct.direct_rendering_override,
            "Direct scene CLI mode failed");
    const auto native = options({"--native-frames"});
    require(!native.display.direct_rendering && !native.display.interpolate_frames && native.direct_rendering_override,
            "Native-frame CLI mode failed");
    require(!options({"--interpolation"}).display.direct_rendering,
            "Legacy interpolation failed to override direct rendering");
    require(options({"--fps", "0"}).display.frame_limit == 0, "Uncapped CLI mode changed");
    require(options({"--replay-only", "--buttons", "128"}).replay_only,
            "Replay-only must work with held buttons without a script");
    for (const auto &invalid : std::vector<std::vector<std::string>>{
             {"--headless"},
             {"--headless", "--frames", "1", "--gl-screenshot", "capture.ppm"},
             {"--save", "game.srm", "--no-save"},
             {"--config", "display.cfg", "--no-config"},
             {"--import-only"},
             {"--frames"},
             {"--frames", "-1"},
             {"--steps", "12oops"},
             {"--buttons", "65536"},
             {"--scale", "0"},
             {"--scale", "9"},
             {"--fps", "59"},
             {"--fps", "301"},
             {"--aspect", "16:9garbage"},
             {"--aspect", "16:0"},
             {"--game", "other"},
             {"--unknown"}}) {
        rejects([&] { options(invalid); }, "Invalid CLI input was accepted");
    }
}
void preference_contract(const std::filesystem::path &directory) {
    const auto path = directory / std::filesystem::path(u8"設定") / "display.cfg";
    eb::DisplaySettings saved;
    saved.widescreen = saved.reduce_flashing = saved.variable_refresh = saved.crt_filter = true;
    saved.frame_limit = 240;
    saved.interpolate_frames = false;
    saved.direct_rendering = false;
    saved.aspect = eb::AspectRatio::Custom;
    saved.custom_aspect = 3.25f;
    eb::store_display_settings(path_text(path), saved, eb::GameVersion::JP);
    auto game = eb::GameVersion::US;
    const auto restored = eb::load_display_settings(path_text(path), game);
    require(game == eb::GameVersion::JP && restored.widescreen && restored.reduce_flashing &&
                restored.variable_refresh && restored.crt_filter && restored.frame_limit == 240 && !restored.interpolate_frames && !restored.direct_rendering &&
                restored.aspect == eb::AspectRatio::Custom && restored.custom_aspect == 3.25f,
            "Display preferences did not roundtrip on a UTF-8 path");
    auto launch = options({"--config", path_text(path), "--game", "us", "--no-widescreen", "--no-vrr",
                           "--fps", "0", "--interpolation", "--no-crt", "--no-reduce-flashing", "--aspect", "4:3"});
    auto resolved = eb::resolve_display_settings(launch, game);
    require(game == eb::GameVersion::US && resolved.widescreen && !resolved.variable_refresh &&
                !resolved.reduce_flashing && !resolved.crt_filter && resolved.frame_limit == 0 && resolved.interpolate_frames &&
                resolved.aspect == eb::AspectRatio::FourThree,
            "CLI overrides did not win over saved preferences in argument order");
    launch = options({"--config", path_text(path), "--no-vrr"});
    resolved = eb::resolve_display_settings(launch, game);
    require(game == eb::GameVersion::JP && resolved.widescreen && resolved.reduce_flashing &&
                !resolved.variable_refresh && resolved.crt_filter && resolved.frame_limit == 240 && !resolved.interpolate_frames &&
                resolved.custom_aspect == 3.25f,
            "Unspecified CLI settings overwrote saved preferences");
    write_file(path, "widescreen 7\nvariable_refresh yes\nframe_limit 999\ninterpolate_frames 2\n"
                     "crt_filter nope\naspect -1\ncustom_aspect nan\ngame other\nunknown 12\nreduce_flashing 1\n");
    game = eb::GameVersion::JP;
    const auto recovered = eb::load_display_settings(path_text(path), game);
    require(!recovered.widescreen && !recovered.crt_filter && !recovered.variable_refresh && recovered.frame_limit == 60 &&
                recovered.interpolate_frames && recovered.aspect == eb::AspectRatio::SixteenNine &&
                recovered.reduce_flashing && game == eb::GameVersion::JP,
            "Malformed preferences did not retain defaults and valid independent fields");
}
void replay_contract(const std::filesystem::path &directory) {
    const auto path = directory / "route.input";
    write_file(path, "# frame masks\n\n2 0x80 # press\n5 0\n10 512\n");
    const auto changes = eb::input_script(path_text(path));
    require(changes.size() == 3 && changes[0].frame == 2 && changes[0].buttons == 128,
            "Script comments, blank lines or numeric formats changed");
    eb::InputReplay replay(changes, 0x1000);
    require(replay.buttons_for_frame(0) == 0x1000, "Initial held buttons lost before first event");
    require(replay.buttons_for_frame(1, 0x200) == 0x1200, "Physical buttons did not combine with held input");
    require(replay.buttons_for_frame(2) == 0x80 && replay.buttons_for_frame(2, 0x100) == 0x180,
            "Frame-boundary event or repeated-frame query changed replay");
    require(replay.buttons_for_frame(8, 0x8000) == 0x8000,
            "Skipped hardware boundaries did not consume due release");
    require(replay.buttons_for_frame(15) == 512, "Last replay mask did not remain held");
    eb::InputReplay deterministic(changes, 0x1000);
    const auto replay_only = options({"--replay-only"});
    require(deterministic.buttons_for_frame(2, replay_only.replay_only ? 0 : 0x8000) == 0x80,
            "Replay-only let unrelated physical input alter the scripted mask");
    require(eb::input_script("").empty(), "An omitted script should be an empty timeline");
    rejects([&] { eb::input_script(path_text(directory / "missing.input")); }, "Missing script accepted");
    for (const auto &contents :
         {"3 1\n3 2\n", "5 1\n2 0\n", "1 65536\n", "1\n", "1 2 extra\n", "-1 0\n", "2x 1\n"}) {
        write_file(path, contents);
        rejects([&] { eb::input_script(path_text(path)); }, "Malformed script accepted");
    }
    rejects([] { eb::InputReplay invalid({{2, 0}, {1, 0}}); }, "Unordered direct timeline accepted");
}
void storage_contract(const std::filesystem::path &directory) {
    const auto path = directory / std::filesystem::path(u8"セーブ.srm");
    std::array<std::uint8_t, 8192> battery{}, restored{};
    for (std::size_t index = 0; index < battery.size(); ++index)
        battery[index] = std::uint8_t(index * 17);
    restored.fill(0x55);
    eb::load_save(path_text(path), restored);
    require(std::all_of(restored.begin(), restored.end(), [](auto byte) { return byte == 0x55; }),
            "A missing save modified fresh cartridge RAM");
    eb::store_save(path_text(path), battery);
    eb::load_save(path_text(path), restored);
    require(restored == battery, "Battery RAM did not roundtrip exactly");
    battery.fill(0xa5);
    eb::store_save(path_text(path), battery);
    eb::load_save(path_text(path), restored);
    require(restored == battery && std::filesystem::file_size(path) == battery.size(),
            "Save replacement retained old bytes");
    write_file(path, "short");
    const auto previous = restored;
    rejects([&] { eb::load_save(path_text(path), restored); }, "Wrong-sized save accepted");
    require(restored == previous, "Rejected save partially changed battery RAM");
    const auto protected_destination = directory / "existing-directory";
    std::filesystem::create_directory(protected_destination);
    write_file(protected_destination / "keep", "original");
    rejects([&] { eb::store_save(path_text(protected_destination), battery); },
            "Publishing over a directory should fail");
    require(read_file(protected_destination / "keep") == "original",
            "Failed save replacement damaged the destination");
    for (const auto &entry : std::filesystem::directory_iterator(directory))
        require(path_text(entry.path().filename()).find(".tmp.") == std::string::npos,
                "Failed save leaked its temporary file");
    std::array<std::uint32_t, 256 * 224> pixels{};
    pixels.fill(0xff123456);
    pixels.front() = 0xffabcdef;
    const auto capture = directory / "native.ppm";
    eb::screenshot(path_text(capture), pixels);
    const auto ppm = read_file(capture);
    const std::string header = "P6\n256 224\n255\n";
    require(ppm.starts_with(header) && ppm.size() == header.size() + pixels.size() * 3 &&
                std::uint8_t(ppm[header.size()]) == 0xab && std::uint8_t(ppm.back()) == 0x56,
            "Native PPM dimensions/channel ordering changed");
    eb::presentation_screenshot(path_text(capture), pixels, 256);
    require(read_file(capture) == ppm, "Native and equal-sized adapted PPM payloads differ");
}
void audio_contract(const std::filesystem::path &directory) {
    static_assert(!std::is_copy_constructible_v<eb::DeviceAudioQueue>);
    static_assert(!std::is_move_constructible_v<eb::DeviceAudioQueue>);
    static_assert(!std::is_copy_constructible_v<eb::WaveFileWriter>);
    const auto explicit_path = directory / "explicit.wav", destructor_path = directory / "destructor.wav";
    const std::array<std::int16_t, 4> samples{0, 32767, -32768, -1};
    {
        eb::WaveFileWriter wave(path_text(explicit_path));
        wave.append(samples);
        wave.finish();
        wave.finish();
    }
    {
        eb::WaveFileWriter wave(path_text(destructor_path));
        wave.append(samples);
    }
    const auto wav = read_file(explicit_path);
    const std::string expected_pcm("\0\0\xff\x7f\0\x80\xff\xff", 8);
    require(wav.size() == 52 && wav.substr(0, 4) == "RIFF" && wav.substr(8, 8) == "WAVEfmt " &&
                std::uint8_t(wav[4]) == 44 && std::uint8_t(wav[22]) == 2 && std::uint8_t(wav[24]) == 0 &&
                std::uint8_t(wav[25]) == 0x7d && std::uint8_t(wav[40]) == 8 && wav.substr(44) == expected_pcm,
            "WAV header or signed little-endian stereo PCM changed");
    require(read_file(destructor_path) == wav, "WAV destruction failed to finalize outstanding output");
    SDL_SetMainReady();
    SDL_setenv("SDL_AUDIODRIVER", "dummy", 1);
    require(SDL_InitSubSystem(SDL_INIT_AUDIO) == 0, "Dummy audio driver initialization failed");
    {
        eb::DeviceAudioQueue audio(eb::FramePacer::frame_rate);
        audio.append({});
        audio.append(samples);
    }
    require((SDL_WasInit(SDL_INIT_AUDIO) & SDL_INIT_AUDIO) != 0,
            "Playback owner released another SDL audio reference");
    SDL_QuitSubSystem(SDL_INIT_AUDIO);
    require((SDL_WasInit(SDL_INIT_AUDIO) & SDL_INIT_AUDIO) == 0,
            "Playback owner leaked its SDL audio reference");
}
} // namespace
int main() {
    try {
        TemporaryDirectory directory;
        option_contract();
        preference_contract(directory.path);
        replay_contract(directory.path);
        storage_contract(directory.path);
        audio_contract(directory.path);
        std::cout << "PASS " << checks << " desktop support contracts\n";
    } catch (const std::exception &error) {
        std::cerr << "FAIL: " << error.what() << '\n';
        return 1;
    }
}
