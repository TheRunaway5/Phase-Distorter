#include "eb/native/frame_fade.hpp"

namespace eb::native {
FrameFade advance_frame_fade(FrameFade state) {
    if (!state.step)
        return state;
    --state.remaining;
    if (!(state.remaining & 0x80))
        return state;
    state.remaining = state.delay;
    const auto brightness = std::uint8_t((state.brightness & 15) + state.step);
    if (brightness & 0x80) {
        state.hdma = 0;
        state.brightness = 0x80;
        state.step = 0;
    } else if (brightness >= 16) {
        state.brightness = 15;
        state.step = 0;
    } else {
        state.brightness = brightness;
    }
    return state;
}
} // namespace eb::native
