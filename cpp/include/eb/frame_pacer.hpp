#pragma once

#include <chrono>
#include <cstdint>

namespace eb {
// Presentation follows the game's frame clock. A late display may omit an
// intermediate image; callers still execute every CPU, input, and audio frame.
class FramePacer {
public:
    using Clock = std::chrono::steady_clock;
    using Time = Clock::time_point;
    // NTSC hardware cadence, rather than an assumed 60 Hz desktop refresh rate.
    static constexpr double frame_rate = 60.09881389744051;
    static Clock::duration period() {
        return std::chrono::duration_cast<Clock::duration>(std::chrono::duration<double>(1.0 / frame_rate));
    }
    explicit FramePacer(Time start): deadline_(start) {}
    // Advance from the previous deadline, not from now, to avoid accumulating
    // ordinary rendering/sleep jitter. False asks the host to skip only a draw.
    bool advance(Time now, std::uint64_t frames = 1) {
        deadline_ += period() * frames;
        // Treat a long host suspension as a pause, preserving the previous
        // frontend's limit instead of queuing seconds of delayed sound.
        if (now - deadline_ > std::chrono::milliseconds(250)) deadline_ = now;
        return now <= deadline_;
    }
    Time deadline() const { return deadline_; }
private:
    Time deadline_;
};
} // namespace eb
