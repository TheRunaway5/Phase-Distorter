#pragma once

#include "eb/game_version.hpp"
#include "eb/native/dialogue/runtime.hpp"
#include <cstdint>
#include <memory>
#include <span>
#include <vector>

namespace eb {
// The host's real physical clock. Handshakes advance this clock even while
// LOAD_SPC700_DATA masks NMI. A bounded quantum lets display publication and
// SFX processing occur at their actual position in the SPC timeline.
class NativeAudioClock {
public:
    virtual ~NativeAudioClock() = default;
    virtual unsigned next_quantum(unsigned requested) const = 0;
    virtual void elapsed(unsigned master_clocks) = 0;
    virtual void nmi_enabled(bool) = 0;
};
// Ordered native host commands for the unchanged source SPC program and DSP.
// Owns directional audio ports, audio time and imported packs; no gameplay CPU,
// bus, SDL, file access or host clock is required. Work and rendering do not
// advance audio. The session supplies elapsed master-clock time explicitly.
class NativeAudio {
public:
    NativeAudio(std::span<const std::uint8_t>, GameVersion);
    ~NativeAudio();
    NativeAudio(const NativeAudio &) = delete;
    NativeAudio &operator=(const NativeAudio &) = delete;
    void initialize();
    void bind_clock(NativeAudioClock &);
    void set_channels(bool stereo);
    void play_sound(std::uint16_t);
    void script_sound(const native::dialogue::ScriptSoundRequest &);
    void driver_effect(std::uint16_t);
    void driver_parameter(std::uint16_t);
    void change_music(std::uint16_t, std::uint16_t disabled_transitions);
    void stop_music();
    // PROCESS_SFX_QUEUE runs once at the actual NMI publication boundary.
    void publication();
    void advance_master_clocks(unsigned);
    std::vector<std::int16_t> take_samples();
    std::uint64_t master_clocks() const noexcept;
    std::uint64_t instructions() const noexcept;
    std::uint64_t sample_frames() const noexcept;
    std::uint16_t current_track() const noexcept;
    GameVersion version() const noexcept;
    bool failed() const noexcept;
private:
    struct State;
    std::unique_ptr<State> state_;
};
} // namespace eb
