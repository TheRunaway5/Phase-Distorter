#pragma once

#include <cstdint>
#include <memory>
#include <span>
#include <vector>

namespace eb {
class Spc;
// Owns the audio synthesis engine and its pending interleaved stereo samples.
// It shares SPC RAM rather than copying it: sample decoding and echo writes
// must observe the same bytes as the source-translated sound driver.
class Dsp {
public:
    static constexpr int sample_rate = 32000;
    // The RAM owner must outlive Dsp. The Spc overload additionally connects
    // register and clock callbacks and clears those callbacks on destruction.
    explicit Dsp(std::span<std::uint8_t, 65536> ram);
    explicit Dsp(Spc& spc);
    ~Dsp();
    Dsp(const Dsp&) = delete;
    Dsp& operator=(const Dsp&) = delete;
    std::uint8_t read(std::uint8_t address) const;
    void write(std::uint8_t address, std::uint8_t value);
    // clocks counts SPC/DSP input clocks, not sample frames or SNES clocks.
    // take_samples transfers all queued signed 16-bit L,R sample pairs.
    void run(unsigned clocks);
    std::vector<std::int16_t> take_samples();
    std::uint64_t sample_frames() const { return sample_frames_; }
private:
    // Keep the third-party processor's type and headers out of this public API.
    // The frontend only needs this clock/register/sample boundary.
    struct Impl;
    std::unique_ptr<Impl> impl_;
    Spc* spc_{};
    std::vector<std::int16_t> samples_;
    std::uint64_t sample_frames_{};
};
} // namespace eb
