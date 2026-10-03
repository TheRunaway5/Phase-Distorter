#pragma once
#include "eb/native/battle/roster.hpp"
#include "eb/native/battle/action_state.hpp"

namespace eb::native::battle {
// Complete US CC1C14/15. Selection is physical; counts come from their
// actual enemy-admission and conscious display-order producers.
std::uint16_t grammar(const Roster&, const party::State&, const ActionState&,
                      bool target, std::uint8_t operand);
} // namespace eb::native::battle
