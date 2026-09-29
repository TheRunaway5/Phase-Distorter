#pragma once

#include <chrono>
#include <algorithm>
#include <cstdint>
#include <cmath>

namespace eb {
// Presentation follows the selected frame clock. A late display may omit an
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
    // Align to a close integer divisor of the monitor refresh. 60/120/240 Hz
    // displays cannot sustain a phase-locked 60.0988 Hz swap cadence. Preserve
    // native cadence when no close divisor exists (for example 75/144 Hz).
    static double rate_for_refresh(double refresh, bool variable_refresh = false) {
        if (!std::isfinite(refresh) || refresh <= 0) return frame_rate;
        // Stay below the VRR ceiling, including a 60 Hz VRR panel. Reaching
        // its ceiling would fall back to blocking fixed-refresh presentation.
        if (variable_refresh) return std::min(frame_rate, refresh * 0.99);
        const auto divisor = std::max(1.0, std::round(refresh / frame_rate));
        const auto candidate = refresh / divisor;
        return std::abs(candidate / frame_rate - 1.0) <= 0.01 ? candidate : frame_rate;
    }
    explicit FramePacer(Time start, double rate = frame_rate): deadline_(start),
        period_(std::chrono::duration_cast<Clock::duration>(std::chrono::duration<double>(1.0 / rate))) {}
    void set_rate(Time now, double rate) {
        // A display-mode change is a new host epoch, not a backlog of work at
        // the old rate. Call only when the selected rate actually changes.
        deadline_=now;
        period_=std::chrono::duration_cast<Clock::duration>(std::chrono::duration<double>(1.0/rate));
    }
    // Advance from the previous deadline, not from now, to avoid accumulating
    // ordinary rendering/sleep jitter. False asks the host to skip only a draw.
    bool advance(Time now, std::uint64_t frames = 1) {
        deadline_ += period_ * frames;
        // Treat a long host suspension as a pause, preserving the previous
        // frontend's limit instead of queuing seconds of delayed sound.
        if (now - deadline_ > std::chrono::milliseconds(250)) deadline_ = now;
        // A slightly late image can still reach the next refresh. Skipping it
        // immediately starts another full simulation frame and can miss that
        // refresh too (12 ms work used to produce 50 ms gaps on a 60 Hz host).
        // Drop an image only when a whole subsequent game frame is overdue.
        return now < deadline_ + period_;
    }
    Time deadline() const { return deadline_; }
private:
    Time deadline_;
    Clock::duration period_;
};
} // namespace eb
