#pragma once

#include "eb/native/npcs/interaction.hpp"

namespace eb::native::npcs {
// Existing Talk clients share the expanded interaction owner. New clients use
// Interactions and select Talk or Check explicitly; there is no second state.
using Talk = Interactions;
using TalkSelection = InteractionSelection;
} // namespace eb::native::npcs
