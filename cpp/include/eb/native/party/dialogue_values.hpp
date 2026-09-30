#pragma once

#include "eb/native/party/state.hpp"
#include "eb/native/dialogue/substitutions.hpp"

namespace eb::native::party {
// Bind all supported substitution keys to the same authoritative party owner.
// The96 source descriptors select only the four chosen players: StatKey party
// indices are0..3, unlike View's source character IDs1..6 including guests.
// Values and strings are re-read on every call; the owner must outlive the
// callbacks. Raw strings have their exact declared extent, without a synthetic
// terminator or fabricated neighboring-memory continuation.
dialogue::SubstitutionValues dialogue_values(const State&);
dialogue::SubstitutionValues dialogue_values(State&&) = delete;
dialogue::SubstitutionValues dialogue_values(const State&&) = delete;
} // namespace eb::native::party
