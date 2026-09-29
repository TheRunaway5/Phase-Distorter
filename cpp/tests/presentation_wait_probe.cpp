// Optional real-clock regression probe. Kept outside CTest because machine
// scheduling/load is not deterministic. Run on an otherwise idle desktop.
#include "eb/presentation_wait.hpp"
#include <SDL.h>
#include <algorithm>
#include <iostream>
#include <vector>
int main() {
    SDL_SetMainReady();
    if (SDL_Init(SDL_INIT_TIMER) != 0) { std::cerr<<SDL_GetError()<<'\n'; return 1; }
    using Clock=std::chrono::steady_clock;
    std::vector<double> waits;
    for (unsigned i=0;i<64;++i) {
        const auto start=Clock::now();
        eb::wait_for_presentation(start+std::chrono::microseconds(3333));
        waits.push_back(std::chrono::duration<double,std::milli>(Clock::now()-start).count());
    }
    SDL_Quit();
    std::sort(waits.begin(),waits.end());
    std::cout<<"300 Hz wait median_ms="<<waits[32]<<" p95_ms="<<waits[60]<<'\n';
    // A few descheduled samples are harmless; persistent 16 ms rounding fails.
    if (waits[32] < 3.3 || waits[32] > 8) {
        std::cerr<<"Presentation deadline was early or rounded to a coarse timer quantum\n"; return 1;
    }
}
