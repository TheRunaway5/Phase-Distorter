#pragma once

#include <cstdint>
#include <memory>
#include <span>
#include <vector>

namespace eb {
class Spc700AudioCpu;
class SnapshotArchive;
// Owns the audio synthesis engine and its pending interleaved stereo samples.
// It shares SPC RAM rather than copying it: sample decoding and echo writes
// must observe the same bytes as the source-translated sound driver.
class SnesAudioDsp {
public:
    static constexpr int output_sample_rate = 32000;
    // The RAM owner must outlive SnesAudioDsp. The Spc700AudioCpu overload connects
    // register and clock callbacks and clears those callbacks on destruction.
    explicit SnesAudioDsp(std::span<std::uint8_t, 65536> audio_ram);
    explicit SnesAudioDsp(Spc700AudioCpu& audio_cpu);
    ~SnesAudioDsp();
    SnesAudioDsp(const SnesAudioDsp&) = delete;
    SnesAudioDsp& operator=(const SnesAudioDsp&) = delete;
    std::uint8_t read_register(std::uint8_t address) const;
    void write_register(std::uint8_t address, std::uint8_t value);
    // audio_clocks counts SPC/DSP input clocks, not sample frames or SNES clocks.
    // take_stereo_samples transfers all queued signed 16-bit L,R sample pairs.
    void advance_audio_clocks(unsigned audio_clocks);
    std::vector<std::int16_t> take_stereo_samples();
    std::uint64_t generated_stereo_frame_count() const { return generated_stereo_frames_; }
    void snapshot_io(SnapshotArchive &archive);

private:
    // Keep the third-party processor's type and headers out of this public API.
    // The frontend only needs this clock/register/sample boundary.
    struct SynthesisState;
    std::unique_ptr<SynthesisState> synthesis_;
    Spc700AudioCpu* audio_cpu_{};
    std::vector<std::int16_t> queued_stereo_samples_;
    std::uint64_t generated_stereo_frames_{};
};
} // namespace eb
