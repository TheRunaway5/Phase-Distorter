// Source: unknown/C0/C08496.asm. US and JP share processing; their activity
// counter/debug storage addresses differ only in the original memory layout.
#include "eb/native/story/input.hpp"

namespace eb::native::story {
void poll_input(InputState& input, std::array<std::uint16_t, 2> raw, std::uint16_t debug) {
    for (unsigned i = 2; i-- > 0;) {
        const auto current = std::uint16_t(raw[i] & 0xfff0);
        const auto previous = input.state[i];
        input.pressed[i] = std::uint16_t(~previous & current);
        input.state[i] = current;
        if (current != previous) {
            input.held[i] = input.pressed[i];
            input.repeat_timer[i] = 20;
        } else if (input.repeat_timer[i]) {
            --input.repeat_timer[i];
            input.held[i] = 0;
        } else {
            input.held[i] = current;
            input.repeat_timer[i] = 3;
        }
    }
    if (!debug) {
        input.state[0] |= input.state[1];
        input.held[0] |= input.held[1];
        input.pressed[0] |= input.pressed[1];
    }
    if (input.pressed[0]) ++input.player_activity;
}
} // namespace eb::native::story
