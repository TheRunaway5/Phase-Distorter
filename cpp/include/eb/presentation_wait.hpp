#pragma once
#include <chrono>
#include <thread>
#ifdef _WIN32
#include <SDL_timer.h>
#endif

namespace eb {
// MinGW's standard-library wait can round a 3 ms sleep up to a roughly 16 ms
// timer quantum. SDL's Windows timer backend avoids that rounding. Sleep the
// whole milliseconds, then yield for the sub-millisecond remainder so a 300 Hz
// deadline is neither rounded to 4 ms nor serviced by an unbounded busy loop.
inline void wait_for_presentation(std::chrono::steady_clock::time_point deadline) {
#ifdef _WIN32
    for (;;) {
        const auto now = std::chrono::steady_clock::now();
        if (now >= deadline) return;
        const auto milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(deadline - now).count();
        if (milliseconds > 0) SDL_Delay(static_cast<Uint32>(milliseconds));
        else std::this_thread::yield();
    }
#else
    std::this_thread::sleep_until(deadline);
#endif
}
} // namespace eb
