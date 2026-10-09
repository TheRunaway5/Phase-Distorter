#pragma once

#include "eb/native/actor_creation.hpp"
#include "eb/native/party_trail.hpp"
#include "eb/native/world_party.hpp"

namespace eb::native {
enum class WorldPartyCreationServiceKind {
  CompareInsertionMember,
  RefreshMovementPolicy,
  RefreshWindowPalette,
  GraphicsPublication
};
struct WorldPartyCreationService {
  WorldPartyCreationServiceKind kind{};
  // Retained for request compatibility; current insertion reads the actual
  // member-ID role's live/retained variable and never emits this request.
  std::uint8_t existing_member{};
  bool operator==(const WorldPartyCreationService &) const = default;
};
struct WorldPartyCreatedActor {
  std::uint8_t member{};
  unsigned role{};
  ActorId actor{};
  bool operator==(const WorldPartyCreatedActor &) const = default;
};

// C0369B/C03A24 against the actual party, formation and actor owners. All
// borrowed objects outlive this owner and its operations. There is no second
// membership, character, random or trail state. This creates actors but runs
// neither their scripts nor another frame. Movement-policy/window services
// must execute before respond(); nested scene ticks can change the new actor.
// Failure or abandonment is terminal: already consumed mutations are never
// replayed. The source rebuild presumes its caller has removed old party
// actors; this owner never silently erases occupied roles to make a rebuild
// fit.
class WorldPartyCreation {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &) = delete;
    Operation &operator=(const Operation &) = delete;
    bool advance();
    const std::optional<WorldPartyCreationService> &service() const {
      return service_;
    }
    void respond();
    void respond_graphics_publication();
    void respond_comparison(bool unconscious);
    bool complete() const { return complete_; }
    std::span<const WorldPartyCreatedActor> created() const { return created_; }

  private:
    friend class WorldPartyCreation;
    Operation(WorldPartyCreation &, std::optional<unsigned> member,RawActorCreation * = nullptr);
    void start_insertion(unsigned);
    bool find_insertion();
    void insert();
    void complete_actor_creation(ActorId);
    void finish_insertion();
    WorldPartyCreation &owner_;
    std::optional<unsigned> single_member_;
    std::optional<WorldPartyCreationService> service_;
    std::unique_ptr<WorldParty::Operation> update_;
    RawActorCreation *graphics_{};
    std::unique_ptr<RawActorCreation::Operation> graphical_creation_;
    std::vector<WorldPartyCreatedActor> created_;
    unsigned member_{}, position_{}, rebuild_index_{},created_role_{};
    std::uint16_t spawn_x_{}, spawn_y_{};
    unsigned phase_{};
    bool complete_{};
  };
  WorldPartyCreation(party::State &, ActorWorld &, const WorldPartyData &,
                     WorldPartyState &, WorldParty &, PreparedActorState &,
                     PartyTrail &, const std::uint16_t &area_character_style);
  WorldPartyCreation(const WorldPartyCreation &) = delete;
  WorldPartyCreation &operator=(const WorldPartyCreation &) = delete;
  std::unique_ptr<Operation> begin_insert(unsigned one_based_member);
  std::unique_ptr<Operation> begin_rebuild();
  std::unique_ptr<Operation> begin_rebuild(RawActorCreation &);
  bool uses(const party::State& party, const ActorWorld& actors) const noexcept {
    return &party_ == &party && &actors_ == &actors;
  }
  bool busy() const { return active_ != nullptr; }
  bool failed() const { return failed_; }
  bool uses(const party::State &, const ActorWorld &, const WorldPartyData &,
            const WorldPartyState &, const WorldParty &,
            const PreparedActorState &, const PartyTrail &,
            const std::uint16_t &area_character_style) const noexcept;

private:
  void check() const;
  void validate_formation() const;
  party::State &party_;
  ActorWorld &actors_;
  const WorldPartyData &data_;
  WorldPartyState &formation_;
  WorldParty &updater_;
  PreparedActorState &prepared_;
  PartyTrail &trail_;
  const std::uint16_t &area_character_style_;
  Operation *active_{};
  bool failed_{};
};
} // namespace eb::native
