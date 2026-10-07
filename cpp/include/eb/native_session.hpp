#pragma once
#include "eb/game_version.hpp"
#include "eb/presentation_frame.hpp"
#include "eb/session_diagnostics.hpp"
#include <functional>
#include <memory>
#include <span>
#include <vector>
namespace eb {
// Actual native gameplay composition. Imported authored content, party/world,
// encounter continuations, input, publication and SPC/DSP audio have distinct
// owners. No compatibility gameplay CPU, bus or address dispatcher is retained.
// Continue consumes an ordinary regional SRAM file and a one-based slot.
class NativeSession {
public:
    using FrameObserver = std::function<void(PresentationFrame)>;
    NativeSession(std::span<const std::uint8_t> image, GameVersion,
                  std::span<const std::uint8_t> save, unsigned slot);
    ~NativeSession();
    NativeSession(const NativeSession&) = delete;
    NativeSession& operator=(const NativeSession&) = delete;
    // Finish one real physical boundary. Work yields and display sampling
    // neither consume input nor advance gameplay or audio.
    std::uint64_t advance_frame(std::uint16_t buttons, std::uint64_t work_limit = 0);
    std::uint64_t frames() const noexcept;
    std::uint64_t steps() const noexcept;
    PresentationFrame presentation_frame() const;
    std::span<const std::uint32_t, 256 * 224> native_pixels() const;
    void configure_presentation(unsigned width, bool identify_flashing_effects,
                                bool direct_rendering = true);
    void observe_completed_frames(FrameObserver);
    std::vector<std::int16_t> take_audio_samples();
    std::span<const std::uint8_t> save_memory() const;
    SessionDiagnostics diagnostics(bool include_details = false) const;
private:
    struct State;
    std::unique_ptr<State> state_;
};
} // namespace eb
