#pragma once

#include "eb/native/party/state.hpp"
#include "eb/native/dialogue/window_graphics.hpp"

namespace eb::native::party {
// A short-lived value capture for synchronous WindowGraphics preparation.
// It reads the authoritative owner when constructed; recapture after a party
// change rather than retaining it as a second live party/name source.
// US source runs may continue through level/stats/items/equipment. The known
// contiguous prefix ends at offset53 (unknown53 is not owned); a run without
// a NUL before that boundary rejects instead of inventing adjacent bytes.
// JP keeps the exact four name bytes, including any zeros, without continuation.
class PartyNameSnapshot {
  public:
    explicit PartyNameSnapshot(const State&);
    // Returned spans borrow this snapshot and remain valid until it dies.
    dialogue::PartyNameInputs inputs() const &;
    dialogue::PartyNameInputs inputs() const && = delete;

  private:
    std::array<std::array<std::uint8_t, 53>, 4> bytes_{};
    unsigned extent_{};
};
} // namespace eb::native::party
