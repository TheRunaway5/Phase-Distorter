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
        arrival_ = now;
        interval_ = FramePacer::period();
    }
    void resume(Time now) {
        if (now - tick_ > std::chrono::milliseconds(250)) {
            tick_ = draw_ = arrival_ = now;
            interval_ = FramePacer::period();
        }
    }
    bool simulation_due(Time now) const { return now >= tick_; }
    // The gap estimate rejects stalls by clamping; a multi-frame step is rare
    // catch-up, for which the native period is the best next-gap prior.
    void simulated(Time now, std::uint64_t frames) {
        tick_ += FramePacer::period() * frames;
        if (frames == 1) {
            const auto interval = now - arrival_;
            const auto period = FramePacer::period();
            if (interval >= period / 4 && interval <= period * 4)
                interval_ += (interval - interval_) / 8;
        } else {
            interval_ = FramePacer::period();
        }
        arrival_ = now;
    }
    // A draw entering the clearance before the tick deadline is deferred past it.
    bool presentation_due(Time now) const { return !simulation_due(now) && now + clearance() <= tick_ && (draw_period_ == Duration::zero() || now >= draw_); }
    void presented(Time now) {
        if (draw_period_ == Duration::zero()) { draw_ = now; return; }
        draw_ += draw_period_;
        // Omit missed presentation slots, never burst them or drop game ticks.
        if (draw_ <= now) draw_ += draw_period_ * ((now - draw_) / draw_period_ + 1);
    }
    double fraction(Time now) const {
        return std::clamp(double((now - arrival_).count()) / double(interval_.count()), 0.0, 1.0);
    }
    Time wake(Time now) const {
        if (draw_period_ != Duration::zero() && draw_ > now) return std::min(tick_, draw_);
        // Inside the clearance a present is suppressed; the next event is the tick.
        return now + clearance() <= tick_ ? now : (tick_ > now ? tick_ : now);
    }
private:
    // Swap plus loop work completes inside this window before a tick deadline.
    static constexpr Duration clearance() { return std::chrono::milliseconds(3); }
    Time tick_{}, draw_{};
    Duration draw_period_{};
    Time arrival_{};
    Duration interval_{};
};
} // namespace eb
