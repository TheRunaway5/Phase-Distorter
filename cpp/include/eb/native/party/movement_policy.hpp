#pragma once

#include "eb/native/party/state.hpp"
#include <cstdint>

namespace eb::native::party {
// Three independent source words. Refresh does not advance the timer or
// perform the direction remapping owned by the movement/input routines.
struct MovementPolicyState {
    std::uint16_t mushroomized{}, timer{}, modifier{};
    bool operator==(const MovementPolicyState&) const = default;
};

// UNKNOWN_C02C3E: inspect controlled_order[0], irrespective of controlled_count.
// Validates that mapping before changing state. Returns true only when the
// source next calls UNKNOWN_C03CFD (bicycle dismount); all preceding flag/timer
// writes have already happened. The caller must execute that continuation,
// rather than treating true as a completed dismount. No frame/audio work here.
bool refresh_movement_policy(const State&, std::uint16_t walking_style, MovementPolicyState&);
} // namespace eb::native::party
