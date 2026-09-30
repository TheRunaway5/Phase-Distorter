#pragma once

#include "eb/native/party/state.hpp"

namespace eb::native::party {
// Values supplied by the existing scene/prompt owner at the source call.
// Nonzero byte/word controls retain their source meaning; this algorithm owns
// no second copy of prompt state, displayed meters, frame counter or party.
struct MeterPolicy {
    std::uint8_t rolling_disabled{}, half_speed{}, fastest_hp_increase{};
    std::uint16_t flipout{};
    std::uint32_t hp_speed{};
};

// C20F58 arithmetic-right-shifts the full source word pair when half-speed is
// nonzero. This is intentionally not unsigned division for negative bit patterns.
std::uint32_t effective_hp_speed(const MeterPolicy&);

// Complete HP_PP_ROLLER value semantics, including its one-call activation
// delay, fractional sentinels, wrap/clamp and flipout targets. Visits only
// party_order[frame_counter&3]; zero and guest IDs>4 return without mutation.
// Does not advance frames, publish artwork or implement WINDOW_TICK itself.
void advance_meters(State&, std::uint16_t frame_counter, const MeterPolicy&);
} // namespace eb::native::party
