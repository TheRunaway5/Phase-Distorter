#include "eb/audio_playback_buffer.hpp"
#include <array>
#include <cstdlib>
#include <iostream>
#include <vector>

void require(bool ok, const char* message) {
    if (!ok) { std::cerr << message << '\n'; std::exit(1); }
}
int main() {
    eb::AudioPlaybackBuffer buffer;
    std::vector<std::int16_t> received, supplied;
    std::array<std::int16_t, 2048> output;
    std::array<std::int16_t, 1066> packet;
    unsigned next_frame = 0;
    // Exact device/producer deadlines with recurring 25 ms producer delays.
    // A 32 ms initial reserve runs dry here; 64 ms remains continuous.
    bool audible = false;
    for (unsigned us = 0; us < 2000000; us += 1000) {
        while (next_frame < 120 && us >= next_frame * 16639 + (next_frame % 7 == 6 ? 25000 : 0)) {
            for (auto& sample : packet) {
                sample = 1 + (supplied.size() % 30000);
                supplied.push_back(sample);
            }
            buffer.append(packet);
            ++next_frame;
        }
        if (us % 32000 == 0) {
            buffer.consume(output);
            const bool silence = output.front() == 0;
            require(!audible || !silence, "Audio gaps under 25 ms frame delivery jitter");
            if (!silence) { audible = true; received.insert(received.end(), output.begin(), output.end()); }
        }
    }
    require(audible && !buffer.underruns(), "Jitter buffer underrun");
    require(std::equal(received.begin(), received.end(), supplied.begin()), "Playback reordered or altered DSP samples");
    // A true long stall must re-prime rather than playing fragmented arrivals.
    for (unsigned i = 0; i < 20; ++i) buffer.consume(output);
    require(buffer.underruns() == 1, "Long stall did not enter one recovery interval");
    buffer.append(packet);
    buffer.consume(output);
    require(std::all_of(output.begin(), output.end(), [](auto v){return v == 0;}), "Underrun recovery played an unprimed packet");
    for (unsigned i = 0; i < 4; ++i) buffer.append(packet);
    buffer.consume(output);
    require(output.front() != 0 && buffer.underruns() == 1, "Playback failed to resume after priming");
    // A catch-up burst can grow an already-wrapped ring. Keep every stereo
    // sample in order across both the wrapping and the capacity change.
    eb::AudioPlaybackBuffer burst;
    std::vector<std::int16_t> sequence(18000), replay;
    for (std::size_t i = 0; i < sequence.size(); ++i) sequence[i] = i + 1;
    const auto collect = [&] {
        const auto count = std::min(output.size(), burst.queued_frames() * 2);
        burst.consume(output);
        replay.insert(replay.end(), output.begin(), output.begin() + count);
    };
    burst.append(std::span(sequence).first(7000));
    collect(); collect();
    burst.append(std::span(sequence).subspan(7000, 4000));
    burst.append(std::span(sequence).subspan(11000));
    while (burst.queued_frames()) collect();
    require(replay == sequence, "Catch-up burst lost or reordered wrapped PCM");
    burst.append(sequence);
    burst.clear();
    require(!burst.queued_frames(), "Snapshot load retained abandoned audio");
    burst.consume(output);
    require(std::all_of(output.begin(), output.end(), [](auto v){ return v == 0; }),
            "Snapshot load played abandoned audio after clearing");
    std::vector<std::int16_t> restored_audio(6000, 777);
    burst.append(restored_audio);
    burst.consume(output);
    require(std::all_of(output.begin(), output.end(), [](auto v){ return v == 777; }),
            "Restored audio did not prime and resume independently");
    std::cout << "Audio: jitter absorption, ordered PCM and underrun recovery passed\n";
}
