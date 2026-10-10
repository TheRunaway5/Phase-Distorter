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
        phase_ = swap_cost_ = Duration::zero();
    }
    void resume(Time now) {
        if (now - tick_ > std::chrono::milliseconds(250)) {
            tick_ = draw_ = now;
            phase_ = swap_cost_ = Duration::zero();
        }
    }
    bool simulation_due(Time now) const { return now >= tick_; }
    // The phase estimate skips multi-frame steps (rare catch-up carries debt
    // unrepresentative of the loop) and clamps to half a period.
    void simulated(Time now, std::uint64_t frames) {
        const auto period = FramePacer::period();
        if (frames == 1) {
            const auto lateness = now - tick_;
            if (lateness >= Duration::zero() && lateness <= period / 2)
                phase_ += (lateness - phase_) / 8;
        }
        tick_ += period * frames;
    }
    // A draw entering the clearance before the tick deadline is deferred past it.
    bool presentation_due(Time now) const { return !simulation_due(now) && now + clearance() <= tick_ && (draw_period_ == Duration::zero() || now >= draw_); }
    void presented(Time now) {
        if (draw_period_ == Duration::zero()) { draw_ = now; return; }
        draw_ += draw_period_;
        // Omit missed presentation slots, never burst them or drop game ticks.
        if (draw_ <= now) draw_ += draw_period_ * ((now - draw_) / draw_period_ + 1);
    }
    // Report the measured wall cost of a presentation swap; the draw clearance
    // adapts to it instead of taxing modes whose swaps are cheap.
    void set_swap_cost(Duration cost) {
        if (cost >= Duration::zero() && cost <= FramePacer::period())
            swap_cost_ += (cost - swap_cost_) / 4;
    }
    double fraction(Time now) const {
        // The ideal-grid rate: one frame of motion per native period wherever
        // the window sits, so varying update costs move the window, not the
        // speed. The tracked phase recenters it on actual arrivals, which
        // bounds endpoint holds to lateness above the sustained mean.
        return std::clamp(1.0 + double((now - tick_).count() - phase_.count()) /
                                    double(FramePacer::period().count()),
                          0.0, 1.0);
    }
    Time wake(Time now) const {
        if (draw_period_ != Duration::zero() && draw_ > now) {
            // A slot inside the clearance cannot be presented before the tick.
            return draw_ + clearance() <= tick_ ? draw_ : tick_;
        }
        return now + clearance() <= tick_ ? now : (tick_ > now ? tick_ : now);
    }
private:
    Duration clearance() const {
        return std::min(swap_cost_ * 2, FramePacer::period() / 4);
    }
    Time tick_{}, draw_{};
    Duration draw_period_{};
    Duration phase_{};
    mutable Duration swap_cost_{};
};
} // namespace eb
