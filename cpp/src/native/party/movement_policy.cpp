#include "eb/native/party/movement_policy.hpp"
#include <stdexcept>

namespace eb::native::party {
bool refresh_movement_policy(const State& party, std::uint16_t walking_style, MovementPolicyState& state) {
    // Original src/unknown/C0/C02C3E.asm reads the first byte of
    // GAME_STATE.player_controlled_party_members, not its separate count.
    const auto record = party.controlled_order[0];
    if (record >= State::character_count)
        throw std::out_of_range("Movement policy controlled entry is outside the six owned character records");
    const auto status = party.character(record + 1).afflictions[1];
    if (status != 1) {
        state.mushroomized = 0;
        return false;
    }
    state.mushroomized = 1;
    if (state.timer == 0) {
        state.timer = 0x0708;
        state.modifier = 0;
    }
    // WALKING_STYLE::BICYCLE is a full 16-bit equality, not a flag/low byte.
    return walking_style == 3;
}
} // namespace eb::native::party
