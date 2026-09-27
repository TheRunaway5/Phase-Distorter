// A synthetic looping waveform checks DSP synthesis without game samples.
// Produced sample values and clock partitioning are evidence about the backend,
// not a claim that physical speaker output has been assessed by a listener.
#include "eb/dsp.hpp"

#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <stdexcept>
#include <vector>

namespace {
void setup(std::array<std::uint8_t, 65536>& ram, eb::Dsp& dsp) {
    // Sample zero: one looping BRR block, range 11, filter zero, signed waveform.
    ram[0x200] = 0x00; ram[0x201] = 0x03;
    ram[0x202] = 0x00; ram[0x203] = 0x03;
    constexpr std::array<std::uint8_t, 9> block{0xb3, 0x01, 0x35, 0x67, 0x65, 0x31, 0xfe, 0xcb, 0xae};
    std::copy(block.begin(), block.end(), ram.begin() + 0x300);
    for (unsigned reg = 0; reg < 128; ++reg) dsp.write(static_cast<std::uint8_t>(reg), 0);
    dsp.write(0x6c, 0x20); // Clear reset/mute, disable echo writes.
    dsp.write(0x5d, 0x02); // Sample directory at $0200.
    dsp.write(0x00, 0x7f); dsp.write(0x01, 0x40); // Unequal voice L/R levels.
    dsp.write(0x02, 0x00); dsp.write(0x03, 0x10); // Unit pitch.
    dsp.write(0x07, 0x7f); // Direct gain.
    dsp.write(0x0c, 0x7f); dsp.write(0x1c, 0x7f); // Main L/R volume.
    dsp.write(0x4c, 0x01); // Key on voice zero.
}
void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}
}

int main() {
    try {
        std::array<std::uint8_t, 65536> ram{}, fragmented_ram{};
        eb::Dsp dsp(ram), fragmented(fragmented_ram);
        setup(ram, dsp);
        setup(fragmented_ram, fragmented);
        constexpr unsigned clocks = 32000;
        dsp.run(clocks);
        for (unsigned remaining = clocks; remaining;) {
            const auto count = std::min(remaining, 7u);
            fragmented.run(count);
            remaining -= count;
        }
        auto samples = dsp.take_samples();
        require(samples == fragmented.take_samples(), "DSP timing depends on caller clock chunk size");
        require(samples.size() == 2000 && dsp.sample_frames() == 1000, "DSP did not produce 32 kHz stereo samples");
        require(*std::max_element(samples.begin(), samples.end()) > 1000, "BRR voice produced no positive audio");
        require(*std::min_element(samples.begin(), samples.end()) < -1000, "BRR voice produced no negative audio");
        std::int64_t left_energy{}, right_energy{};
        for (std::size_t index = 0; index < samples.size(); index += 2) {
            left_energy += std::int64_t(samples[index]) * samples[index];
            right_energy += std::int64_t(samples[index + 1]) * samples[index + 1];
        }
        require(left_energy > right_energy * 3 && left_energy < right_energy * 5,
            "DSP stereo channel ordering or voice volume is incorrect");
        require(dsp.take_samples().empty(), "Taking samples did not drain the queue");
        dsp.write(0x6c, 0x60); // Mute hardware output while continuing clocks.
        dsp.run(3200);
        auto muted = dsp.take_samples();
        require(std::all_of(muted.begin() + 4, muted.end(), [](auto sample) { return sample == 0; }),
            "DSP mute register did not silence output");
        std::cout << "DSP BRR synthesis, clock partitioning, stereo volume, queue drain, and mute passed\n";
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
