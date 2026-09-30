#pragma once

#include <array>
#include <cstdint>

namespace eb::native::story {
// Source PAD words owned by the scene, independent of host key events and
// display sampling. In normal mode state[0] retains the controller merge and
// is intentionally the previous value used by the next poll.
struct InputState {
    std::array<std::uint16_t, 2> state{}, pressed{}, held{}, repeat_timer{};
    std::uint16_t player_activity{};
    bool operator==(const InputState&) const = default;
};

// UNKNOWN_C08496 after READ_JOYPAD and demo recording: raw supplies the two
// resulting source words. Hardware readiness, polling and demo I/O belong to
// those boundary owners. DEBUG is the live source word (any nonzero disables
// controller merging), not another persistent copy in this input owner.
void poll_input(InputState&, std::array<std::uint16_t, 2> raw, std::uint16_t debug = 0);
} // namespace eb::native::story
