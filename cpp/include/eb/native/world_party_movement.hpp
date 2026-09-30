#pragma once

#include "eb/native/world_party.hpp"
#include "eb/native/story/random.hpp"

namespace eb::native {
struct WorldPartyMovementData {
    std::array<std::uint16_t,6> cardinal_spacing{}, diagonal_spacing{};
};
WorldPartyMovementData import_party_movement_data(std::span<const std::uint8_t>, GameVersion);

// Borrows the existing party, formation and actor owners. Startup runs at the
// authored script call; follower projection runs in ActorWorld's existing
// second pass. Neither entry records a trail point or advances a second tick.
class WorldPartyMovement {
public:
    WorldPartyMovement(ActorWorld &, party::State &, WorldPartyState &,
                       story::RandomState &, const WorldPartyMovementData &);
    bool uses(const ActorWorld &actors) const { return &actors_ == &actors; }
    // Missing role/formation ownership remains an explicit pending request.
    // Valid startup consumes exactly one shared RNG result and returns the
    // authored leader's numeric role doubled, not a native actor/resource ID.
    std::optional<std::uint16_t> startup(ActorId);
    // Requires the explicitly published projection cache. Undefined table
    // offsets, absent leaders and untagged actors fail before projection.
    void project(ActorId) const;
private:
    ActorWorld &actors_;
    party::State &party_;
    WorldPartyState &state_;
    story::RandomState &random_;
    const WorldPartyMovementData &data_;
};
} // namespace eb::native
