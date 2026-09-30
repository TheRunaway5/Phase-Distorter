#pragma once

#include "eb/native/party/state.hpp"

namespace eb::native::party {
// UNKNOWN_C1FF2C observes the last controlled record, not the party leader.
// Requires a nonempty count in1..6 and that selected zero-based index in0..5.
// Only persistent-easyheal values1/2 produce1; every other raw status produces0.
std::uint16_t last_controlled_status(const State&);

// Compare the full source cache word, always store the current normalized0/1,
// and return whether it changed. The cache belongs to the scene/UI owner.
// A caller skipping the source check (disabled transitions) must not call this
// function: a skipped check preserves the cache, even if party state changes.
bool refresh_last_controlled_status(const State&, std::uint16_t& cached_status);
} // namespace eb::native::party
