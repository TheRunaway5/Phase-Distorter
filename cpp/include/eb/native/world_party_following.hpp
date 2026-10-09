#pragma once

#include "eb/native/world_maintenance.hpp"

namespace eb::native {
struct WorldPartyFollowingData {
  std::array<std::array<std::uint16_t, 8>, 17> graphics{};
  std::array<std::uint16_t, 17> sizes{};
};
WorldPartyFollowingData
    import_party_following_data(std::span<const std::uint8_t>, GameVersion);

// A distinct source word, not a story event flag or a second movement mode.
struct WorldPartyFollowingState {
  std::uint16_t pajamas{};
};

// Authored EVENT2 preparation and follower tick. All live party, trail, actor,
// controller and possession state is borrowed; this owner contains no second
// character list, coordinate buffer, RNG or frame clock. A missing native
// role/formation remains unresolved before any visible mutation.
class WorldPartyFollowing {
public:
  class Placement {
  public:
    ~Placement();
    bool advance();
    const std::optional<ActorId> &selected_actor() const noexcept {return selected_actor_;}
    void respond_upload();
  private:
    friend class WorldPartyFollowing;
    explicit Placement(WorldPartyFollowing &);
    WorldPartyFollowing &owner_;
    std::optional<ActorId> selected_actor_;
    std::optional<SpriteFrameSelection> selection_;
    std::uint16_t surface_{}, first_cursor_{};
    unsigned role_=24;
    bool done_{};
  };
  WorldPartyFollowing(ActorWorld &, party::State &, WorldPartyState &,
                      PartyTrail &, WorldControlState &,
                      const npcs::InteractionState &,
                      const dialogue::PromptState &, WorldMaintenanceState &,
                      const std::uint16_t &area_character_style,
                      const WorldPartyFollowingState &,
                      const WorldPartyFollowingData &);
  bool uses(const ActorWorld &) const noexcept;
  bool uses(const ActorWorld &, const party::State &, const npcs::InteractionState &,
            const dialogue::PromptState &) const noexcept;
  bool uses(const WorldControl &, const party::State &,
            const WorldMaintenanceState &,
            const dialogue::PromptState &) const noexcept;
  bool uses(const WorldPartyFollowingState &state) const noexcept {
    return &state_ == &state;
  }
  bool uses(const ActorWorld &, const party::State &, const WorldPartyState &,
            const PartyTrail &, const WorldControlState &,
            const npcs::InteractionState &, const dialogue::PromptState &,
            const WorldMaintenanceState &,
            const std::uint16_t &area_character_style,
            const WorldPartyFollowingState &,
            const WorldPartyFollowingData &) const noexcept;
  // US C04EF0, before the first ordinary eight-direction animation call.
  std::optional<std::uint16_t> prepare(ActorId);
  // C07A56 with an explicit source walking-style argument. Existing role
  // direction/surface are read before the caller places its trail point.
  std::optional<std::uint16_t> prepare_with_style(ActorId,std::uint16_t);
  // C04D78, the post-script callback, before the separate physics pass.
  // True includes its authored battle/swirl/mode early exits.
  bool tick(ActorId);
  // Complete C07B52 after battle/scene suspension: refresh role24..29 from
  // the actual leader or retained trail, then latch their existing animation.
  // This preserves fractions and source single-member facing. No actor pass,
  // frame, footstep, input or trail cursor is consumed.
  void position_after_pause();
  // The actual raw owner uploads one selected role before C07B52 proceeds
  // to its next member. Publication/transport belong to the caller.
  std::unique_ptr<Placement> begin_position_after_pause();
  bool failed() const noexcept {return placement_failed_;}

private:
  bool update(ActorId, bool movement, std::uint16_t &result,
              const PartyTrailPoint *positioning = nullptr);
  std::optional<ActorId> position_role(unsigned,std::uint16_t first_cursor);
  ActorWorld &actors_;
  party::State &party_;
  WorldPartyState &formation_;
  PartyTrail &trail_;
  WorldControlState &control_;
  const npcs::InteractionState &leader_;
  const dialogue::PromptState &prompt_;
  WorldMaintenanceState &maintenance_;
  const std::uint16_t &area_style_;
  const WorldPartyFollowingState &state_;
  const WorldPartyFollowingData &data_;
  Placement *placement_{};
  bool placement_failed_{};
};
} // namespace eb::native
