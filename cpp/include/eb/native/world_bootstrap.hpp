#pragma once

#include "eb/native/world_party_following.hpp"
#include "eb/native/world_walking.hpp"

namespace eb::native {
// The initializer's one authored flag selector, not a source code pointer or
// retained image. Movement deltas already belong to immutable WalkingData.
class WorldBootstrapData {
public:
  WorldBootstrapData(std::span<const std::uint8_t>, GameVersion);
  WorldBootstrapData &operator=(const WorldBootstrapData &) = delete;
  WorldBootstrapData &operator=(WorldBootstrapData &&) = delete;
  GameVersion version() const noexcept { return version_; }
  std::uint16_t pajamas_flag() const noexcept { return pajamas_flag_; }

private:
  GameVersion version_;
  std::uint16_t pajamas_flag_{};
};

// Actual C02D29 initialization against the live owners. It changes no actor
// identity, steps no script/frame/input, and does not claim that the subsequent
// party/map/dialogue bootstrap has completed. All borrowed owners remain stable
// and outlive this service; the caller must finish any outstanding world work.
class WorldBootstrap {
public:
  WorldBootstrap(const WorldBootstrapData &, const WalkingData &, ActorWorld &,
                 party::State &, WorldPartyState &, PartyTrail &,
                 WorldControlState &, WorldMaintenanceState &,
                 WorldPartyFollowingState &);
  WorldBootstrap(const WorldBootstrap &) = delete;
  WorldBootstrap &operator=(const WorldBootstrap &) = delete;
  // Requires the real, already-created role23 controller. All fallible checks
  // precede any write. Repeated explicit entry calls run the source reset
  // again.
  void initialize();
  // Concrete C0B67F prefix after the scene reset: INIT_ENTITY(EVENT1,0,0) in
  // role23, followed by the initializer. The supplied preparation owns the
  // existing priority/height inputs; X/Y are the caller's literal zeros.
  // Returns its actual created identity, never a numeric slot masquerading as
  // ActorId. Occupied role23 is rejected before changing live state.
  ActorId create_controller_and_initialize(PreparedActorState);
  bool uses(const ActorWorld &, const party::State &, const WorldPartyState &,
            const PartyTrail &, const WorldControlState &,
            const WorldMaintenanceState &,
            const WorldPartyFollowingState &) const noexcept;

private:
  bool preflight() const;
  void apply(WorldActor &, bool pajamas) noexcept;
  const WorldBootstrapData &data_;
  const WalkingData &walking_;
  ActorWorld &actors_;
  party::State &party_;
  WorldPartyState &formation_;
  PartyTrail &trail_;
  WorldControlState &control_;
  WorldMaintenanceState &maintenance_;
  WorldPartyFollowingState &following_;
};
} // namespace eb::native
