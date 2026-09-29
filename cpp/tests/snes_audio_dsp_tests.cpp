// A synthetic looping waveform checks DSP synthesis without game samples.
// Produced sample values and clock partitioning are evidence about the backend,
// not a claim that physical speaker output has been assessed by a listener.
#include "eb/snes_audio_dsp.hpp"

#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <stdexcept>
#include <vector>

namespace {
void configure_looping_test_voice(std::array<std::uint8_t, 65536>& audio_ram, eb::SnesAudioDsp& audio_dsp) {
    // Sample zero: one looping BRR block, range 11, filter zero, signed waveform.
    audio_ram[0x200] = 0x00;
    audio_ram[0x201] = 0x03;
    audio_ram[0x202] = 0x00;
    audio_ram[0x203] = 0x03;
    constexpr std::array<std::uint8_t, 9> block{0xb3, 0x01, 0x35, 0x67, 0x65, 0x31, 0xfe, 0xcb, 0xae};
    std::copy(block.begin(), block.end(), audio_ram.begin() + 0x300);
    for (unsigned register_address = 0; register_address < 128; ++register_address)
        audio_dsp.write_register(static_cast<std::uint8_t>(register_address), 0);
    audio_dsp.write_register(0x6c, 0x20); // Clear reset/mute, disable echo writes.
    audio_dsp.write_register(0x5d, 0x02); // Sample directory at $0200.
    audio_dsp.write_register(0x00, 0x7f);
    audio_dsp.write_register(0x01, 0x40); // Unequal voice L/R levels.
    audio_dsp.write_register(0x02, 0x00);
    audio_dsp.write_register(0x03, 0x10); // Unit pitch.
    audio_dsp.write_register(0x07, 0x7f); // Direct gain.
    audio_dsp.write_register(0x0c, 0x7f);
    audio_dsp.write_register(0x1c, 0x7f); // Main L/R volume.
    audio_dsp.write_register(0x4c, 0x01); // Key on voice zero.
}
void require(bool condition, const char* message) {
    if (!condition)
        throw std::runtime_error(message);
}
} // namespace

int main() {
    try {
        std::array<std::uint8_t, 65536> audio_ram{}, fragmented_audio_ram{};
        eb::SnesAudioDsp audio_dsp(audio_ram), fragmented_dsp(fragmented_audio_ram);
        configure_looping_test_voice(audio_ram, audio_dsp);
        configure_looping_test_voice(fragmented_audio_ram, fragmented_dsp);
        constexpr unsigned audio_clocks = 32000;
        audio_dsp.advance_audio_clocks(audio_clocks);
        for (unsigned remaining_clocks = audio_clocks; remaining_clocks;) {
            const auto chunk_clocks = std::min(remaining_clocks, 7u);
            fragmented_dsp.advance_audio_clocks(chunk_clocks);
            remaining_clocks -= chunk_clocks;
        }
        auto samples = audio_dsp.take_stereo_samples();
        require(samples == fragmented_dsp.take_stereo_samples(), "DSP timing depends on caller clock chunk size");
        require(samples.size() == 2000 && audio_dsp.generated_stereo_frame_count() == 1000,
                "DSP did not produce 32 kHz stereo samples");
        require(*std::max_element(samples.begin(), samples.end()) > 1000, "BRR voice produced no positive audio");
        require(*std::min_element(samples.begin(), samples.end()) < -1000, "BRR voice produced no negative audio");
        std::int64_t left_energy{}, right_energy{};
        for (std::size_t index = 0; index < samples.size(); index += 2) {
            left_energy += std::int64_t(samples[index]) * samples[index];
            right_energy += std::int64_t(samples[index + 1]) * samples[index + 1];
        }
        require(left_energy > right_energy * 3 && left_energy < right_energy * 5,
                "DSP stereo channel ordering or voice volume is incorrect");
        require(audio_dsp.take_stereo_samples().empty(), "Taking samples did not drain the queue");
        audio_dsp.write_register(0x6c, 0x60); // Mute hardware output while continuing clocks.
        audio_dsp.advance_audio_clocks(3200);
        auto muted = audio_dsp.take_stereo_samples();
        require(std::all_of(muted.begin() + 4, muted.end(), [](auto sample) { return sample == 0; }),
                "DSP mute register did not silence output");
        std::cout << "DSP BRR synthesis, clock partitioning, stereo volume, queue drain, and mute passed\n";
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
