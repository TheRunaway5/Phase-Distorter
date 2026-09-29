#pragma once
#include "eb/frame_pacer.hpp"
#include <algorithm>
#include <chrono>
#include <cmath>

namespace eb {
// Independent presentation deadlines. Zero draw rate means uncapped; it never
// removes the simulation deadline. All times are injectable for deterministic tests.
class PresentationClock {
public:
    using Time = FramePacer::Time;
    using Duration = FramePacer::Clock::duration;
    PresentationClock(Time now, double rate) { reset(now, rate); }
    void reset(Time now, double rate) {
        tick_ = draw_ = now;
        draw_period_ = rate > 0 ? std::chrono::duration_cast<Duration>(std::chrono::duration<double>(1 / rate)) : Duration::zero();
    }
    void resume(Time now) {
        if (now - tick_ > std::chrono::milliseconds(250)) tick_ = draw_ = now;
    }
    bool simulation_due(Time now) const { return now >= tick_; }
    void simulated(uint64_t frames) { tick_ += FramePacer::period() * frames; }
    bool presentation_due(Time now) const { return !simulation_due(now) && (draw_period_ == Duration::zero() || now >= draw_); }
    void presented(Time now) {
        if (draw_period_ == Duration::zero()) { draw_ = now; return; }
        draw_ += draw_period_;
        // Omit missed presentation slots, never burst them or drop game ticks.
        if (draw_ <= now) draw_ += draw_period_ * ((now - draw_) / draw_period_ + 1);
    }
    double fraction(Time now) const {
        return std::clamp(1.0 + double((now - tick_).count()) / FramePacer::period().count(), 0.0, 1.0);
    }
    Time wake(Time now) const { return draw_period_ == Duration::zero() ? now : std::min(tick_, draw_); }
private:
    Time tick_{}, draw_{};
    Duration draw_period_{};
};
} // namespace eb
