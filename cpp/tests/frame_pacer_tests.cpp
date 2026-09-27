// A synthetic monotonic clock makes pacing independent of host scheduling.
// Catch-up must preserve simulation work even when a display update is omitted.
#include "eb/frame_pacer.hpp"

#include <chrono>
#include <cmath>
#include <cstdint>
#include <iostream>
#include <stdexcept>
#include <string>

namespace {
using Nanoseconds = std::chrono::nanoseconds;
using Time = eb::FramePacer::Time;
void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}
void simulate(unsigned refresh_rate, bool slow_frame) {
    Time now{};
    eb::FramePacer pacer(now);
    const auto display_period = Nanoseconds(1'000'000'000 / refresh_rate);
    const auto end = now + std::chrono::seconds(60);
    std::uint64_t simulated{}, presented{}, omitted{}, audio_ticks{};
    bool delayed = false;
    while (now < end) {
        // Simulation/input/audio always happen, including catch-up iterations.
        ++simulated;
        audio_ticks += 32;
        now += std::chrono::microseconds(200);
        if (pacer.advance(now)) {
            ++presented;
            if (slow_frame && !delayed && presented == 30) {
                now += std::chrono::milliseconds(80);
                delayed = true;
            }
            const auto ticks = std::chrono::duration_cast<Nanoseconds>(now.time_since_epoch()).count();
            now = Time(Nanoseconds((ticks / display_period.count() + 1) * display_period.count()));
            if (pacer.deadline() > now) now = pacer.deadline();
        } else {
            ++omitted;
        }
    }
    const auto expected = 60 * eb::FramePacer::frame_rate;
    require(std::abs(double(simulated) - expected) < 2, "Display refresh rate changed emulated frame rate");
    require(simulated == presented + omitted && audio_ticks == simulated * 32,
        "Catch-up dropped or duplicated simulation/audio frames");
    if (refresh_rate == 60) require(omitted >= 5, "60 Hz display never allowed the game clock to catch up");
    if (refresh_rate == 144 && !slow_frame) require(omitted == 0, "144 Hz presentation omitted unnecessary frames");
    if (slow_frame) require(omitted >= 4, "Slow presentation was not recovered by catch-up simulation");
    std::cout << refresh_rate << "Hz" << (slow_frame ? " +80ms stall" : "")
              << ": simulated=" << simulated << " presented=" << presented << " omitted=" << omitted << '\n';
}
}

int main() {
    try {
        simulate(60, false);
        simulate(144, false);
        simulate(60, true);
        simulate(144, true);
        eb::FramePacer suspended(Time{});
        const auto resumed = Time{} + std::chrono::seconds(5);
        require(suspended.advance(resumed) && suspended.deadline() == resumed,
            "Long host suspension created unbounded catch-up/audio backlog");
        eb::FramePacer dma(Time{});
        require(dma.advance(Time{}, 2) && dma.deadline() == Time{} + eb::FramePacer::period() * 2,
            "Multiple hardware frames in one CPU/DMA step lost frame time");
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
