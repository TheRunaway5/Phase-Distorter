#include "eb/launch_options.hpp"
#include "eb/input_replay.hpp"
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <stdexcept>

namespace eb {
namespace {
void aspect_option(eb::DisplaySettings &settings, const std::string &text) {
    // Named presets preserve their identity for the UI. Other finite ratios
    // become Custom after fully consuming both numeric fields.
    if (text == "native" || text == "8:7")
        settings.aspect = eb::AspectRatio::Native;
    else if (text == "4:3")
        settings.aspect = eb::AspectRatio::FourThree;
    else if (text == "16:10")
        settings.aspect = eb::AspectRatio::SixteenTen;
    else if (text == "16:9")
        settings.aspect = eb::AspectRatio::SixteenNine;
    else if (text == "21:9")
        settings.aspect = eb::AspectRatio::TwentyOneNine;
    else if (text == "window")
        settings.aspect = eb::AspectRatio::Window;
    else {
        const auto separator = text.find(':');
        std::size_t used = 0;
        const auto numerator = std::stod(text.substr(0, separator), &used);
        if (used != (separator == std::string::npos ? text.size() : separator))
            throw std::runtime_error("Invalid aspect ratio: " + text);
        double denominator = 1;
        if (separator != std::string::npos) {
            denominator = std::stod(text.substr(separator + 1), &used);
            if (used != text.size() - separator - 1)
                throw std::runtime_error("Invalid aspect ratio: " + text);
        }
        const auto ratio = numerator / denominator;
        if (!std::isfinite(ratio) || denominator <= 0 || ratio < 256.0 / 224 || ratio > 1024.0 / 224)
            throw std::runtime_error("Aspect ratio must be between 256:224 and 1024:224");
        settings.aspect = eb::AspectRatio::Custom;
        settings.custom_aspect = static_cast<float>(ratio);
    }
}

} // namespace

LaunchOptions parse_options(int argc, char **argv) {
    LaunchOptions options;
    for (int index = 1; index < argc; ++index) {
        const std::string arg = argv[index];
        auto next = [&]() -> std::string {
            if (++index == argc)
                throw std::runtime_error("Missing value for " + arg);
            return argv[index];
        };
        if (arg == "--help" || arg == "-h") {
            std::cout << "Usage: eb_cpp [options]\n"
                         "  --headless         Run without creating a window\n"
                         "  --frames N         Stop after N hardware frames (0: unlimited)\n"
                         "  --steps N          Stop after N CPU step calls (0: unlimited)\n"
                         "  --buttons MASK     Hold a JOY1 bitmask, decimal or 0x hexadecimal\n"
                         "  --replay-only      Ignore physical game buttons; keep window/UI controls\n"
                         "  --input-script FILE  Apply '<frame> <joymask>' input changes\n"
                         "  --screenshot FILE  Write final framebuffer as binary PPM\n"
                         "  --presentation-screenshot FILE  Write the adapted picture as PPM\n"
                         "  --gl-screenshot FILE  Read back the final OpenGL image as PPM\n"
                         "  --save FILE        Load and save the 8 KiB battery RAM file\n"
                         "  --no-save          Disable automatic desktop save persistence\n"
                         "  --wav FILE         Record DSP output as 32 kHz stereo PCM WAV\n"
                         "  --no-audio         Disable the playback device (DSP still runs)\n"
                         "  --scale N          Initial window pixel scale, 1 through 8\n"
                         "  --fps N            Presentation limit: 60 (native), 61..300, or 0 (uncapped)\n"
                         "  --direct-rendering Draw source artwork at higher rates (default)\n"
                         "  --native-frames    Repeat original completed frames without smoothing\n"
                         "  --no-interpolation Disable image-based frame generation\n"
                         "  --interpolation    Generate intermediate pictures at higher frame rates\n"
                         "  --no-vsync         Disable vertical synchronization\n"
                         "  --original-timing  Use original timing and sprite resource storage\n"
                         "  --vrr / --no-vrr   Enable/disable pacing for a VRR display\n"
                         "  --debug            Open the optional control panel (F1 toggles)\n"
                         "  --widescreen       Enable presentation-only expanded picture\n"
                         "  --aspect RATIO     native, 4:3, 16:10, 16:9, 21:9, window, or W:H\n"
                         "  --no-widescreen    Use the original 256x224 view\n"
                         "  --reduce-flashing Enable the optional photosensitivity filter\n"
                         "  --no-reduce-flashing  Disable the photosensitivity filter (default)\n"
                         "  --config FILE      Use display and controller preferences (FILE.controllers)\n"
                         "  --no-config        Do not load or save display/controller preferences\n"
                         "  --assets FILE      Use an imported .ebpak asset pack\n"
                         "  --import-rom FILE  Extract assets from your own supported US/JP ROM\n"
                         "  --import-only      Exit after importing, without starting the game\n"
                         "  --crt / --no-crt   Flat OLED CRT filter (scanlines and aperture grille)\n"
                         "  --game VERSION     earthbound (US) or mother2 (Japanese)\n"
                         "Keys: arrows=direction, Z=B, X=A, A=Y, S=X, Q=L, W=R,\n"
                         "      Enter=Start, Right Shift=Select, F1=panel, F11=fullscreen,\n"
                         "      Escape=close panel or quit\n";
            std::exit(0);
        } else if (arg == "--original-timing")
            options.original_timing = true;
        else if (arg == "--replay-only")
            options.replay_only = true;
        else if (arg == "--headless")
            options.headless = true;
        else if (arg == "--vrr" || arg == "--no-vrr") {
            options.display.variable_refresh = arg == "--vrr";
            options.vrr_override = true;
        } else if (arg == "--crt" || arg == "--no-crt") {
            options.display.crt_filter = arg == "--crt";
            options.crt_override = true;
        } else if (arg == "--fps") {
            const auto limit = parse_unsigned_integer(next(), arg);
            if (limit > 300 || (limit != 0 && limit < 60))
                throw std::runtime_error("--fps requires 0 (uncapped) or 60..300");
            options.display.frame_limit = int(limit);
            options.fps_override = true;
        } else if (arg == "--direct-rendering" || arg == "--native-frames") {
            options.display.direct_rendering = arg == "--direct-rendering";
            options.display.interpolate_frames = false;
            options.direct_rendering_override = options.interpolation_override = true;
        } else if (arg == "--interpolation" || arg == "--no-interpolation") {
            options.display.interpolate_frames = arg == "--interpolation";
            options.interpolation_override = true;
            if (arg == "--interpolation") {
                options.display.direct_rendering = false;
                options.direct_rendering_override = true;
            }
        } else if (arg == "--no-vsync")
            options.vsync = false;
        else if (arg == "--no-audio")
            options.audio = false;
        else if (arg == "--no-save")
            options.no_save = true;
        else if (arg == "--debug")
            options.debug = true;
        else if (arg == "--no-config")
            options.no_config = true;
        else if (arg == "--import-only")
            options.import_only = true;
        else if (arg == "--assets")
            options.assets = next();
        else if (arg == "--import-rom")
            options.import_rom = next();
        else if (arg == "--config")
            options.config = next();
        else if (arg == "--game") {
            const auto game = next();
            if (game == "earthbound" || game == "us")
                options.game = eb::GameVersion::US;
            else if (game == "mother2" || game == "jp")
                options.game = eb::GameVersion::JP;
            else
                throw std::runtime_error("--game requires earthbound/us or mother2/jp");
            options.game_override = true;
        } else if (arg == "--widescreen" || arg == "--no-widescreen") {
            options.display.widescreen = arg == "--widescreen";
            options.widescreen_override = true;
        } else if (arg == "--reduce-flashing" || arg == "--no-reduce-flashing") {
            options.display.reduce_flashing = arg == "--reduce-flashing";
            options.flashing_override = true;
        } else if (arg == "--aspect") {
            aspect_option(options.display, next());
            options.display.widescreen = true;
            options.aspect_override = options.widescreen_override = true;
        } else if (arg == "--frames")
            options.frames = parse_unsigned_integer(next(), arg);
        else if (arg == "--steps")
            options.steps = parse_unsigned_integer(next(), arg);
        else if (arg == "--screenshot")
            options.screenshot = next();
        else if (arg == "--presentation-screenshot")
            options.presentation_screenshot = next();
        else if (arg == "--gl-screenshot")
            options.gl_screenshot = next();
        else if (arg == "--save")
            options.save = next();
        else if (arg == "--wav")
            options.wav = next();
        else if (arg == "--input-script")
            options.input_script = next();
        else if (arg == "--scale") {
            auto value = parse_unsigned_integer(next(), arg);
            if (value < 1 || value > 8)
                throw std::runtime_error("--scale must be between 1 and 8");
            options.scale = static_cast<int>(value);
        } else if (arg == "--buttons") {
            auto value = parse_unsigned_integer(next(), arg);
            if (value > 0xffff)
                throw std::runtime_error("--buttons must fit in 16 bits");
            options.buttons = static_cast<std::uint16_t>(value);
        } else
            throw std::runtime_error("Unknown option: " + arg);
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

} // namespace eb
