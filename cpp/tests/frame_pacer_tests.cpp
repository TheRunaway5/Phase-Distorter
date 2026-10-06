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
        // A late tick stretches the fraction over the measured gap.
        eb::PresentationClock late(Time{},120);
        const auto arrived=Time{}+eb::FramePacer::period()+std::chrono::milliseconds(2);
        late.simulated(arrived,1);
        require(late.fraction(arrived)==0,"Interpolation did not anchor at the actual tick arrival");
        require(late.fraction(arrived+eb::FramePacer::period())<1,
            "Interpolation froze at the ideal grid point instead of spanning the measured gap");
        require(late.fraction(arrived+eb::FramePacer::period()*2)==1,
            "Interpolation fraction escaped its endpoints");
        // A draw slot inside the clearance is deferred past the tick.
        eb::PresentationClock gated(Time{},120);
        gated.simulated(Time{},1);
        gated.presented(Time{});
        const auto near_deadline=Time{}+eb::FramePacer::period()-std::chrono::milliseconds(1);
        require(!gated.presentation_due(near_deadline),"Draw slot entered the swap clearance before the tick deadline");
        const auto tick_arrival=Time{}+eb::FramePacer::period();
        gated.simulated(tick_arrival,1);
        require(gated.presentation_due(tick_arrival+std::chrono::microseconds(100)),
            "Deferred draw slot was not presented after the tick");
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
