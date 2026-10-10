// A synthetic monotonic clock makes pacing independent of host scheduling.
// Catch-up must preserve simulation work even when a display update is omitted.
#include "eb/frame_pacer.hpp"
#include "eb/presentation_clock.hpp"

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
void simulate(unsigned refresh_rate, bool slow_frame, unsigned work_us) {
    Time now{};
    const auto rate = eb::FramePacer::rate_for_refresh(refresh_rate);
    eb::FramePacer pacer(now, rate);
    const auto display_period = Nanoseconds(1'000'000'000 / refresh_rate);
    const auto end = now + std::chrono::seconds(60);
    std::uint64_t simulated{}, presented{}, omitted{}, audio_ticks{};
    bool delayed = false;
    Time last{};
    long long max_gap=0;
    while (now < end) {
        // Simulation/input/audio always happen, including catch-up iterations.
        ++simulated;
        audio_ticks += 32;
        now += std::chrono::microseconds(work_us);
        if (pacer.advance(now)) {
            ++presented;
            if (slow_frame && !delayed && presented == 30) {
                now += std::chrono::milliseconds(80);
                delayed = true;
            }
            const auto ticks = std::chrono::duration_cast<Nanoseconds>(now.time_since_epoch()).count();
            now = Time(Nanoseconds((ticks / display_period.count() + 1) * display_period.count()));
            if (last != Time{}) max_gap=std::max(max_gap, (long long)std::chrono::duration_cast<Nanoseconds>(now-last).count());
            last=now;
            if (pacer.deadline() > now) now = pacer.deadline();
        } else {
            ++omitted;
        }
    }
    const auto expected = 60 * rate;
    require(std::abs(double(simulated) - expected) < 2, "Display refresh rate changed emulated frame rate");
    require(simulated == presented + omitted && audio_ticks == simulated * 32,
        "Catch-up dropped or duplicated simulation/audio frames");
    if (!slow_frame && refresh_rate == 60) require(max_gap <= display_period.count(), "Missed refresh despite work fitting within one refresh");

    if (slow_frame) require(omitted >= 3, "Slow presentation was not recovered by catch-up simulation");
    std::cout << "work=" << work_us << "us " << refresh_rate << "Hz" << (slow_frame ? " +80ms stall" : "")
              << " max_present_gap_ms=" << max_gap/1e6 << ": simulated=" << simulated << " presented=" << presented << " omitted=" << omitted << '\n';
}
}

int main() {
    try {
        for (auto rate : {60u, 75u, 120u, 144u, 240u})
            for (auto work : {200u, 8000u, 12000u}) {
                simulate(rate, false, work);
                simulate(rate, true, work);
            }
        require(eb::FramePacer::rate_for_refresh(0)==eb::FramePacer::frame_rate,
                "Unknown monitor changed the native cadence");
        require(std::abs(eb::FramePacer::rate_for_refresh(59.94)-59.94)<1e-6,
                "Fractional refresh did not select its matching cadence");
        require(eb::FramePacer::rate_for_refresh(144,true)==eb::FramePacer::frame_rate,
                "VRR did not retain native cadence inside its refresh range");
        require(eb::FramePacer::rate_for_refresh(60,true)<60,
                "VRR pacing exceeds a 60 Hz panel ceiling");
        // The actual high-FPS scheduler must preserve the same game/audio tick
        // count while generating additional host frames, including uncapped mode.
        for (double fps : {90.,120.,144.,165.,240.,300.,0.}) {
            Time now{};
            eb::PresentationClock clock(now, fps);
            unsigned ticks=0, draws=0;
            const auto end=now+std::chrono::seconds(10);
            while(now<end) {
                clock.resume(now);
                if(clock.simulation_due(now)) { ++ticks; clock.simulated(now,1); now+=std::chrono::microseconds(100); }
                if(clock.presentation_due(now)) { ++draws; now+=std::chrono::microseconds(100); clock.presented(now); }
                now=std::max(now,clock.wake(now));
            }
            require(ticks==601,"High presentation rate accelerated or dropped game/audio ticks");
            require(fps==0 ? draws>3000 : std::abs(double(draws)-fps*10)<=2,
                "High presentation limit failed to produce the requested frame rate");
            std::cout<<"limit="<<fps<<" ticks="<<ticks<<" draws="<<draws<<'\n';
        }
        eb::PresentationClock high(Time{},300);
        require(high.simulation_due(Time{}),"First game tick was not due");
        high.simulated(Time{},2);
        require(!high.simulation_due(Time{}+eb::FramePacer::period()),"Multi-frame DMA lost simulation time");
        high.reset(Time{},0); high.simulated(Time{},1);
        require(high.fraction(Time{}+eb::FramePacer::period()/2)>.499 && high.fraction(Time{}+eb::FramePacer::period()/2)<.501,
            "Presentation fraction does not track game cadence");
        high.resume(Time{}+std::chrono::seconds(5)); high.simulated(Time{}+std::chrono::seconds(5),1);
        require(!high.simulation_due(Time{}+std::chrono::seconds(5)),"Host suspension created a game tick backlog");
        // Sustained uniform lateness shifts the blend window without changing
        // its rate, and converges until the endpoint no longer holds.
        eb::PresentationClock late(Time{},120);
        Time arrived{};
        for (unsigned k=1;k<=40;++k) {
            arrived=Time{}+eb::FramePacer::period()*(k-1)+std::chrono::milliseconds(2);
            late.simulated(arrived,1);
        }
        const double v=late.fraction(arrived+eb::FramePacer::period()*3/4)
                      -late.fraction(arrived+eb::FramePacer::period()/4);
        require(v>.499&&v<.501,"Constant update cost did not keep a constant motion rate");
        require(late.fraction(arrived+std::chrono::microseconds(200))>late.fraction(arrived),
            "Sustained uniform lateness still froze the blend endpoint");
        // Alternating update costs change when frames complete, not how fast
        // the picture moves: the fraction spans one native period per window.
        eb::PresentationClock alt(Time{},120);
        double v8{},v2{};
        for (unsigned k=1;k<=41;++k) {
            const auto arrived_alt=Time{}+eb::FramePacer::period()*(k-1)
                +std::chrono::milliseconds(k%2?8:2);
            alt.simulated(arrived_alt,1);
            if (k==39) v8=alt.fraction(arrived_alt+std::chrono::microseconds(3000))
                            -alt.fraction(arrived_alt);
            if (k==41) v2=alt.fraction(arrived_alt+std::chrono::microseconds(3000))
                            -alt.fraction(arrived_alt);
        }
        require(v8>.179&&v8<.181&&v2>.179&&v2<.181,
            "Alternating update costs changed the motion rate");
        // A draw slot inside the clearance is deferred past the tick.
        eb::PresentationClock gated(Time{},120);
        gated.simulated(Time{},1);
        for (int i=0;i<8;++i) gated.set_swap_cost(std::chrono::microseconds(1500));
        gated.presented(Time{});
        const auto near_deadline=Time{}+eb::FramePacer::period()-std::chrono::milliseconds(1);
        require(!gated.presentation_due(near_deadline),"Draw slot entered the swap clearance before the tick deadline");
        const auto tick_arrival=Time{}+eb::FramePacer::period();
        gated.simulated(tick_arrival,1);
        require(gated.presentation_due(tick_arrival+std::chrono::microseconds(100)),
            "Deferred draw slot was not presented after the tick");
        const auto slot=gated.wake(Time{}+eb::FramePacer::period()/2);
        require(slot>Time{}+eb::FramePacer::period()/2 && slot<Time{}+std::chrono::microseconds(8400),
            "wake missed a drawable draw slot outside the clearance");
        // 144 fps slots drift into the clearance window; such a wake goes
        // straight to the tick instead of waking up to sleep again.
        eb::PresentationClock gated144(Time{},144);
        gated144.simulated(Time{},1);
        for (int i=0;i<8;++i) gated144.set_swap_cost(std::chrono::microseconds(2000));
        gated144.presented(Time{}+std::chrono::microseconds(10000));
        require(gated144.wake(Time{}+std::chrono::microseconds(11000))==Time{}+eb::FramePacer::period(),
            "wake inside the clearance must target the tick");
        // The clearance follows the measured swap cost instead of a fixed
        // budget: cheap draws stay drawable up to the tick, costly ones defer.
        eb::PresentationClock cost(Time{},300);
        cost.simulated(Time{},1);
        for (int i=0;i<8;++i) cost.set_swap_cost(std::chrono::microseconds(2000));
        require(cost.presentation_due(Time{}+std::chrono::microseconds(12000)),
            "Clearance suppressed draws beyond the measured swap cost");
        require(!cost.presentation_due(Time{}+std::chrono::microseconds(13500)),
            "Clearance did not follow the measured swap cost");
        eb::FramePacer switched(Time{});
        const auto changed=Time{}+std::chrono::seconds(30);
        switched.set_rate(changed, eb::FramePacer::rate_for_refresh(144,true));
        require(switched.advance(changed) && switched.deadline()==changed+eb::FramePacer::period(),
                "Changing VRR mode created catch-up work at the previous cadence");
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
