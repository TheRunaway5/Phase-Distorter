// Optional local-asset integration test; deliberately not registered with CTest.
// Usage: game_session_differential --assets imported.ebpak [--assets other.ebpak] --frames 900
// Both original and enhanced gameplay timing are checked for every supplied pack.
#include "eb/asset_store.hpp"
#include "eb/game_debug.hpp"
#include "eb/game_session.hpp"
#include "eb/input_replay.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_audio_dsp.hpp"
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "generated_assets.hpp"

#include <algorithm>
#include <array>
#include <filesystem>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}
template<class T, class U> bool equal_bytes(const T& a, const U& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}
struct CapturedFrame {
    std::uint64_t frame;
    unsigned width;
    double fixed_aspect;
    std::vector<std::uint32_t> pixels;
    std::vector<std::uint8_t> effect_mask;
    std::vector<std::uint32_t> effect_reference;
    explicit CapturedFrame(eb::PresentationFrame source)
        : frame(source.frame), width(source.width), fixed_aspect(source.fixed_aspect),
          pixels(source.pixels.begin(), source.pixels.end()),
          effect_mask(source.effect_mask.begin(), source.effect_mask.end()),
          effect_reference(source.effect_reference.begin(), source.effect_reference.end()) {}
    bool operator==(const CapturedFrame&) const = default;
};

// Independent composition of the components used by desktop_application before
// GameSession existed. It has no knowledge of GameSession's implementation.
struct DirectCore {
    eb::SnesBus hardware;
    eb::Spc700AudioCpu audio_cpu;
    eb::SnesAudioDsp audio_dsp;
    eb::MainCpu65816 main_cpu;
    eb::GameDebug game_debug;
    std::uint64_t steps = 0;
    std::vector<CapturedFrame> callbacks;
    DirectCore(const eb::GameAssets& assets, bool enhanced)
        : hardware(assets.image, assets.version), audio_cpu(hardware), audio_dsp(audio_cpu),
          main_cpu(hardware), game_debug(hardware, main_cpu) {
        main_cpu.reset_from_vector();
        main_cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        main_cpu.set_gameplay_timing(enhanced);
        hardware.on_presentation_frame = [&](std::span<const std::uint32_t> pixels, unsigned width,
                                             std::uint64_t frame) {
            auto completed = picture();
            completed.pixels = pixels;
            completed.width = width;
            completed.frame = frame;
            callbacks.emplace_back(completed);
        };
    }
    eb::PresentationFrame picture() const {
        return {hardware.presentation_pixels(), hardware.presentation_width(), hardware.presentation_fixed_aspect(),
                hardware.completed_frames, hardware.presentation_effect_mask(), hardware.presentation_effect_reference()};
    }
    void advance(std::uint16_t buttons, std::uint64_t absolute_limit) {
        if (absolute_limit && steps >= absolute_limit) return;
        hardware.set_buttons(buttons);
        const auto first_frame = hardware.completed_frames;
        do {
            require(!main_cpu.is_stopped, "Direct core executed STP");
            game_debug.before_step();
            main_cpu.step_instruction();
            ++steps;
        } while (hardware.completed_frames == first_frame && (!absolute_limit || steps < absolute_limit));
    }
};
void compare(const eb::GameSession& session, const DirectCore& direct) {
    const auto actual = session.diagnostics(true);
    require(actual.frames == direct.hardware.completed_frames && actual.steps == direct.steps &&
                actual.master_clocks == direct.hardware.master_clocks(), "Frame/step/master-clock counters differ");
    require(actual.cpu_instructions == direct.main_cpu.instruction_count &&
                actual.cpu_state == direct.main_cpu.describe_registers(), "Main CPU state differs");
    require(actual.audio_cpu_instructions == direct.audio_cpu.instruction_count &&
                actual.audio_cpu_state == direct.audio_cpu.describe_registers(), "Audio CPU state differs");
    require(actual.audio_frames == direct.audio_dsp.generated_stereo_frame_count(), "DSP frame count differs");
    require(actual.source_width == direct.hardware.presentation_width(), "Diagnostic canvas width differs");
    require(equal_bytes(session.native_pixels(), direct.hardware.native_framebuffer), "Native framebuffer differs");
    require(CapturedFrame(session.presentation_frame()) == CapturedFrame(direct.picture()),
            "Presentation pixels/aspect/effect metadata differ");
    require(equal_bytes(session.save_memory(), direct.hardware.save_ram), "Save memory differs");
}
std::uint16_t buttons_for_frame(std::uint64_t frame) {
    // Repeated real controller transitions exercise boot/title/menu input. The
    // frame index, rather than host draws or wall time, selects each transition.
    if (frame < 180) return 0;
    constexpr std::array<std::uint16_t, 8> sequence{0x1000, 0, 0x0080, 0, 0x8000, 0, 0x0100, 0};
    return sequence[((frame - 180) / 30) % sequence.size()];
}
void run(const eb::GameAssets& assets, std::uint64_t target_frames, bool enhanced,
         const std::vector<eb::InputChange>& script, bool require_native) {
    eb::GameSession session(assets.image, assets.version, enhanced);
    auto direct = std::make_unique<DirectCore>(assets, enhanced);
    std::vector<CapturedFrame> callbacks;
    session.observe_completed_frames([&](eb::PresentationFrame completed) { callbacks.emplace_back(completed); });
    std::uint64_t iterations = 0, total_callbacks = 0, audio_frames = 0;
    eb::InputReplay replay(script);
    compare(session, *direct);
    try {
        while (session.frames() < target_frames) {
            constexpr std::array widths{256u, 426u, 640u, 320u, 256u};
            const auto width = widths[(session.frames() / 37) % widths.size()];
            const bool effects = (session.frames() / 23) % 2 != 0;
            session.configure_presentation(width, effects);
            direct->hardware.set_presentation_width(width);
            direct->hardware.set_presentation_effects_enabled(effects);
            session.debug().configure({});
            direct->game_debug.configure({});
            // Exercise real partial-frame stepping in addition to whole-frame
            // calls. Limits are absolute and remain valid after long DMA steps.
            const auto limit = iterations % 13 == 0 ? session.steps() + 11 : 0;
            const auto input = script.empty() ? buttons_for_frame(session.frames()) : replay.buttons_for_frame(session.frames());
            const auto previous_frame = session.frames();
            const auto completed = session.advance_frame(input, limit);
            direct->advance(input, limit);
            require(completed == session.frames() - previous_frame, "Completed-frame return value differs");
            compare(session, *direct);
            require(callbacks == direct->callbacks && callbacks.size() == completed,
                    "Completed callback order/pixels/metadata differ");
            for (const auto& callback : callbacks)
                require(callback.frame == ++total_callbacks, "Completed callback frame sequence has a gap");
            callbacks.clear();
            direct->callbacks.clear();
            const auto audio = session.take_audio_samples();
            require(audio == direct->audio_dsp.take_stereo_samples(), "Interleaved PCM samples differ");
            audio_frames += audio.size() / 2;
            require(audio_frames == session.diagnostics().audio_frames, "Audio sample accounting differs");
            ++iterations;
        }
    } catch (const std::exception& error) {
        throw std::runtime_error(std::string((assets.version == eb::GameVersion::US ? "US" : "JP")) +
            (enhanced ? " enhanced" : " original") + " frame=" + std::to_string(session.frames()) +
            " step=" + std::to_string(session.steps()) + ": " + error.what());
    }
    // Clearing the observer is safe while the producer remains alive.
    session.observe_completed_frames({});
    require(!require_native || session.diagnostics().native_gameplay_batches > 0,
            "Replay did not exercise native gameplay batches");
    std::cout << (assets.version == eb::GameVersion::US ? "US" : "JP") << (enhanced ? " enhanced" : " original")
              << " frames=" << session.frames() << " steps=" << session.steps()
              << " callbacks=" << total_callbacks << " audio_frames=" << audio_frames
              << " native_batches=" << session.diagnostics().native_gameplay_batches
              << " exact session/direct-core match\n";
}
} // namespace
int main(int argc, char** argv) {
    try {
        std::vector<std::filesystem::path> packs;
        std::uint64_t frames = 900;
        std::string script_path;
        bool require_native = false;
        for (int i = 1; i < argc; ++i) {
            const std::string option = argv[i];
            if (option == "--assets" && i + 1 < argc) packs.emplace_back(argv[++i]);
            else if (option == "--frames" && i + 1 < argc) frames = std::stoull(argv[++i]);
            else if (option == "--input-script" && i + 1 < argc) script_path = argv[++i];
            else if (option == "--require-native") require_native = true;
            else throw std::invalid_argument("Usage: game_session_differential --assets pack.ebpak [--assets other.ebpak] --frames N [--input-script route] [--require-native]");
        }
        require(!packs.empty() && frames > 0, "Supply at least one --assets pack and a positive frame count");
        for (const auto& pack : packs) {
            const auto assets = eb::load_game_assets(pack, eb::asset_profiles());
            for (bool enhanced : {false, true}) run(assets, frames, enhanced, eb::input_script(script_path), require_native);
        }
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
