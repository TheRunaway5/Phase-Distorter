// Asset-free checks at real compiled source entries. These tiny cartridges
// provide reset vectors only; no retail data, host window or audio device is used.
#include "eb/game_debug.hpp"
#include "eb/game_session.hpp"

#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}
std::vector<std::uint8_t> cartridge(unsigned reset_address) {
    std::vector<std::uint8_t> image(0x300000);
    image[0xfffc] = std::uint8_t(reset_address);
    image[0xfffd] = std::uint8_t(reset_address >> 8);
    return image;
}
std::vector<std::uint8_t> waiting_cartridge(eb::GameVersion version) {
    // WAIT_UNTIL_NEXT_FRAME's LDA NEW_FRAME_STARTED / BEQ loop. With NMI
    // disabled and zeroed WRAM it waits indefinitely while PPU/APU clocks run.
    return cartridge(version == eb::GameVersion::US ? 0x875f : 0x8755);
}
bool same_diagnostics(const eb::SessionDiagnostics& a, const eb::SessionDiagnostics& b) {
    return a.frames == b.frames && a.steps == b.steps && a.master_clocks == b.master_clocks &&
           a.cpu_instructions == b.cpu_instructions && a.audio_cpu_instructions == b.audio_cpu_instructions &&
           a.audio_frames == b.audio_frames && a.source_width == b.source_width &&
           a.cpu_state == b.cpu_state && a.audio_cpu_state == b.audio_cpu_state;
}
template<class T, class U> bool same_pixels(const T& a, const U& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}
void lifecycle_and_limits(eb::GameVersion version) {
    auto image = waiting_cartridge(version);
    eb::GameSession session(image, version);
    const auto initial = session.diagnostics(true);
    require(session.game_version() == version, "Session lost its cartridge region");
    require(!initial.frames && !initial.steps && !initial.master_clocks && !initial.cpu_instructions &&
                !initial.audio_cpu_instructions && !initial.audio_frames,
            "Construction advanced emulated hardware");
    require(!initial.cpu_state.empty() && !initial.audio_cpu_state.empty(), "Register diagnostics missing");
    require(session.diagnostics().cpu_state.empty() && session.diagnostics().audio_cpu_state.empty(),
            "Cheap diagnostics formatted register dumps");
    require(session.native_pixels().size() == 256 * 224 && session.presentation_frame().width == 256,
            "Initial picture geometry changed");
    require(session.presentation_frame().pixels.data() == session.native_pixels().data(),
            "Native presentation must borrow the original framebuffer");
    require(session.take_audio_samples().empty(), "Unstepped session produced audio");

    // SnesBus owns the cartridge. The caller's import buffer is disposable.
    image.clear();
    image.shrink_to_fit();
    unsigned callbacks = 0;
    session.observe_completed_frames([&](eb::PresentationFrame) { ++callbacks; });
    require(session.advance_frame(0xffff, 7) == 0 && session.steps() == 7 && session.frames() == 0,
            "Absolute step limit did not stop inside the first frame");
    require(callbacks == 0, "Partial frame was reported as complete");
    const auto stopped = session.diagnostics(true);
    require(session.advance_frame(0, 7) == 0 && session.advance_frame(0x8000, 3) == 0 &&
                same_diagnostics(stopped, session.diagnostics(true)),
            "Reached absolute step limit still changed simulation");
    require(session.advance_frame(0, 12) == 0 && session.steps() == 12,
            "Step limit was interpreted as an additional budget");
    require(session.advance_frame(0) == 1 && session.frames() == 1 && callbacks == 1,
            "Zero step limit did not resume to the next frame");
    const auto frame_end = session.diagnostics(true);
    for (unsigned i = 0; i < 20; ++i) {
        (void)session.diagnostics(true);
        (void)session.native_pixels();
        (void)session.presentation_frame();
        (void)session.debug().snapshot();
    }
    require(same_diagnostics(frame_end, session.diagnostics(true)), "Inspection advanced or mutated hardware");
    require(frame_end.audio_cpu_instructions > 0 && frame_end.audio_frames > 0,
            "Frame stepping failed to clock the sound CPU and DSP");
    const auto audio = session.take_audio_samples();
    require(audio.size() == frame_end.audio_frames * 2, "Audio drain lost interleaved stereo samples");
    require(session.take_audio_samples().empty() && same_diagnostics(frame_end, session.diagnostics(true)),
            "Audio drain reset cumulative counters or duplicated samples");

    eb::GameSession fresh(waiting_cartridge(version), version);
    require(same_diagnostics(initial, fresh.diagnostics(true)), "Recreated session retained prior machine state");
    require(fresh.presentation_frame().pixels.data() != session.presentation_frame().pixels.data(),
            "Independent sessions share framebuffer storage");
}
void presentation_and_audio_isolation(eb::GameVersion version, bool enhanced) {
    const auto image = waiting_cartridge(version);
    eb::GameSession configured(image, version, enhanced), native(image, version, enhanced);
    std::vector<std::uint64_t> observed;
    unsigned expected_width = 256;
    bool effects = false;
    std::vector<std::uint32_t> completed_pixels;
    configured.observe_completed_frames([&](eb::PresentationFrame frame) {
        observed.push_back(frame.frame);
        require(frame.width == expected_width && frame.pixels.size() == frame.width * 224,
                "Completed-frame callback has stale geometry");
        require(frame.effect_mask.size() == (effects ? frame.pixels.size() : 0) &&
                    frame.effect_reference.size() == (effects ? frame.pixels.size() : 0),
                "Effect metadata did not follow the callback canvas");
        completed_pixels.assign(frame.pixels.begin(), frame.pixels.end());
    });
    std::uint64_t drained_frames = 0;
    constexpr std::array widths{256u, 426u, 640u, 256u, 320u, 256u};
    for (std::size_t i = 0; i < widths.size(); ++i) {
        expected_width = widths[i];
        effects = i % 2 != 0;
        const auto before = configured.diagnostics(true);
        configured.configure_presentation(expected_width, effects);
        auto after = configured.diagnostics(true);
        after.source_width = before.source_width;
        require(same_diagnostics(before, after), "Presentation configuration mutated simulation");
        const auto buttons = std::uint16_t(i % 2 ? 0x8090 : 0);
        require(configured.advance_frame(buttons) == 1 && native.advance_frame(buttons) == 1,
                "Ordinary stepping did not complete exactly one frame");
        auto actual = configured.diagnostics(true), reference = native.diagnostics(true);
        actual.source_width = reference.source_width;
        require(same_diagnostics(actual, reference), "Presentation settings changed CPU/APU/frame timing");
        require(same_pixels(configured.native_pixels(), native.native_pixels()),
                "Wide/effect rendering modified native pixels");
        require(same_pixels(configured.presentation_frame().pixels, completed_pixels),
                "Callback did not capture the completed canvas");
        require(observed.size() == i + 1 && observed.back() == i + 1, "Frame callback omitted/reordered a frame");
        const auto audio = configured.take_audio_samples();
        require(audio == native.take_audio_samples(), "Presentation settings changed DSP samples");
        drained_frames += audio.size() / 2;
        require(drained_frames == configured.diagnostics().audio_frames, "Audio drain changed sample accounting");
        if (expected_width == 256)
            require(configured.presentation_frame().pixels.data() == configured.native_pixels().data(),
                    "Returning to native width no longer borrows native pixels");
    }
    // Replacing and removing observers must release old captures and must not
    // leave a callback firing after removal. Destruction must release captures.
    auto capture = std::make_shared<int>(0);
    std::weak_ptr<int> lifetime = capture;
    configured.observe_completed_frames([capture](eb::PresentationFrame) { ++*capture; });
    capture.reset();
    require(!lifetime.expired(), "Session failed to own its observer");
    configured.observe_completed_frames({});
    require(lifetime.expired(), "Removed observer capture survived");
    const auto count = observed.size();
    configured.advance_frame(0);
    require(observed.size() == count, "Removed observer still fired");
}
void dma_frame_and_save_lifetime(eb::GameVersion version) {
    // IRQ_NMI's LDY #CHANNEL_0 / STY MDMAEN. The initial channel has a 65535
    // byte count; the two compiled instructions must drain its full stall even
    // with an absolute step limit of two. No core mutation is needed to set it up.
    eb::GameSession dma(cartridge(0x81be), version);
    std::vector<std::uint64_t> frames;
    dma.observe_completed_frames([&](eb::PresentationFrame frame) { frames.push_back(frame.frame); });
    const auto completed = dma.advance_frame(0, 2);
    require(completed > 0 && dma.steps() == 2 && dma.frames() == completed,
            "Step limit interrupted a DMA stall or skipped its completed frame");
    require(frames.size() == completed, "DMA frame callback count disagrees with hardware");
    for (std::size_t i = 0; i < frames.size(); ++i)
        require(frames[i] == i + 1, "DMA frame callbacks are out of order");

    std::vector<std::uint8_t> saved;
    std::weak_ptr<int> lifetime;
    {
        eb::GameSession source(waiting_cartridge(version), version);
        require(source.save_memory().size() == 8192 &&
                    std::all_of(source.save_memory().begin(), source.save_memory().end(),
                                [](auto byte) { return byte == 0xff; }),
                "Fresh cartridge SRAM does not have its hardware initial value");
        for (std::size_t i = 0; i < source.save_memory().size(); ++i)
            source.save_memory()[i] = std::uint8_t(i * 17 + i / 256);
        const auto& read_only = source;
        saved.assign(read_only.save_memory().begin(), read_only.save_memory().end());
        require(read_only.save_memory().data() == source.save_memory().data(), "Const SRAM view copied storage");
        auto token = std::make_shared<int>(0);
        lifetime = token;
        source.observe_completed_frames([token](eb::PresentationFrame) { ++*token; });
        token.reset();
        source.advance_frame(0);
        require(*lifetime.lock() == 1, "Owned callback did not run");
    }
    require(lifetime.expired(), "Session destruction retained callback captures");
    eb::GameSession restored(waiting_cartridge(version), version);
    std::copy(saved.begin(), saved.end(), restored.save_memory().begin());
    restored.advance_frame(0);
    require(same_pixels(saved, restored.save_memory()), "Save-memory round trip changed bytes");
}

void partial_progress_after_failure(eb::GameVersion version) {
    // READ_JOYPAD's common tail: LDA JOY1L; STA PAD_RAW; RTS. The empty
    // synthetic stack returns to unmapped PC=1 after three successful steps.
    eb::GameSession session(cartridge(0x8450), version);
    unsigned callbacks = 0;
    session.observe_completed_frames([&](eb::PresentationFrame) { ++callbacks; });
    require(session.advance_frame(0, 1) == 0 && session.steps() == 1,
            "Failure fixture did not stop at its initial absolute limit");
    bool failed = false;
    try { session.advance_frame(0); }
    catch (const std::runtime_error& error) {
        failed = std::string(error.what()).find("No translated assembly instruction") != std::string::npos;
    }
    require(failed, "Unmapped return did not propagate its instruction failure");
    const auto diagnostic = session.diagnostics(true);
    require(session.steps() == 3 && diagnostic.steps == 3 && diagnostic.cpu_instructions == 3 &&
                diagnostic.master_clocks > 0 && diagnostic.frames == 0 && callbacks == 0,
            "Instruction failure discarded successful steps or counted the failed attempt");
    require(diagnostic.cpu_state.find("PC=000001") != std::string::npos &&
                session.presentation_frame().pixels.data() == session.native_pixels().data(),
            "Failure diagnostics lost the current CPU/picture snapshot");
    require(session.advance_frame(0, 3) == 0 && same_diagnostics(diagnostic, session.diagnostics(true)),
            "Reached limit retried an already failed instruction");

    // A frame observer can fail inside the second instruction's DMA stall.
    // That instruction has started in the CPU but has not returned as a
    // completed session step. Preserve both counters without conflating them.
    struct ObserverFailure {};
    eb::GameSession dma(cartridge(0x81be), version);
    dma.observe_completed_frames([](eb::PresentationFrame) { throw ObserverFailure{}; });
    bool observer_failed = false;
    try { dma.advance_frame(0); }
    catch (const ObserverFailure&) { observer_failed = true; }
    const auto partial = dma.diagnostics(true);
    require(observer_failed && partial.steps == 1 && partial.cpu_instructions == 2 && partial.frames == 1,
            "Exception inside an instruction lost prior steps or marked a partial step complete");
    require(dma.presentation_frame().frame == 1 && partial.master_clocks > 0,
            "Interrupted DMA lost its completed hardware-frame snapshot");
}

void stopped_cpu_progress() {
    // This US static overlapping source entry is the compiled STP opcode. No
    // mutable CPU escape hatch is needed to exercise the session's stop policy.
    for (const auto initial_limit : {std::uint64_t(0), std::uint64_t(1)}) {
        eb::GameSession session(cartridge(0x927e), eb::GameVersion::US);
        bool stopped = false;
        try { session.advance_frame(0, initial_limit); }
        catch (const std::runtime_error& error) {
            stopped = std::string(error.what()).find("CPU executed STP") != std::string::npos;
        }
        require(stopped == (initial_limit == 0), "STP did not respect the absolute step-limit boundary");
        const auto diagnostic = session.diagnostics(true);
        require(diagnostic.steps == 1 && diagnostic.cpu_instructions == 1 && diagnostic.frames == 0,
                "STP discarded its completed step or counted the stop guard as an instruction");
        require(session.advance_frame(0, 1) == 0 && same_diagnostics(diagnostic, session.diagnostics(true)),
                "Reached step limit changed a stopped CPU");
        stopped = false;
        try { session.advance_frame(0); }
        catch (const std::runtime_error& error) {
            stopped = std::string(error.what()).find("CPU executed STP") != std::string::npos;
        }
        require(stopped && same_diagnostics(diagnostic, session.diagnostics(true)),
                "Repeated stop failure changed partial-progress diagnostics");
    }
}
} // namespace
int main() {
    try {
        bool rejected = false;
        try { eb::GameSession invalid({}, eb::GameVersion::US); }
        catch (const std::invalid_argument&) { rejected = true; }
        require(rejected, "Empty cartridge was accepted");
        for (const auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            lifecycle_and_limits(version);
            for (bool enhanced : {false, true}) presentation_and_audio_isolation(version, enhanced);
            dma_frame_and_save_lifetime(version);
            partial_progress_after_failure(version);
        }
        stopped_cpu_progress();
        std::cout << "GameSession asset-free lifecycle, timing, observer, audio and save tests passed\n";
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
