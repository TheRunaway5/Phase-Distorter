#pragma once

#include "eb/native/story/party_formation.hpp"
#include "eb/native/party/inventory.hpp"
#include "eb/native/world_party_creation.hpp"

namespace eb::native::story {
// C216DB, including the actual ADD/REMOVE wrappers for authored Teddy members
// 16/17. Item metadata stays imported. Other strength-selected members require
// their own wrapper tails (notably chosen-party transformation rescanning).
// All borrowed owners outlive this owner and its operations. No frame, timer
// rescan or actor acknowledgment is synthesized at a suspended lifecycle.
class TeddyParty {
  public:
    class Operation {
      public:
        ~Operation();
        Operation(const Operation &) = delete;
        Operation &operator=(const Operation &) = delete;
        dialogue::Progress advance(unsigned work_budget = 4096);
        const std::optional<PartyFormationService> &service() const { return pending_; }
        void respond_bicycle_dismount();
        bool complete() const { return complete_; }
      private:
        friend class TeddyParty;
        explicit Operation(TeddyParty &, std::optional<std::uint16_t> = {});
        void remove(unsigned member);
        void insert(unsigned member);
        void finish();
        TeddyParty &owner_;
        std::unique_ptr<PartyFormation::Operation> update_;
        std::unique_ptr<WorldPartyCreation::Operation> creation_;
        std::unique_ptr<PartyFormation::TailOperation> tail_;
        std::optional<PartyFormationService> pending_;
        std::optional<std::uint8_t> selected_;
        std::optional<std::uint16_t> remove_first_;
        bool registered_{};
        unsigned phase_{};
        bool complete_{};
    };
    TeddyParty(party::State &, ActorWorld &, const WorldPartyData &, WorldPartyState &,
               WorldParty &, PreparedActorState &, PartyTrail &, const std::uint16_t &area_style,
               PartyFormation &, std::shared_ptr<const dialogue::SubstitutionResources>,
               npcs::Interactions &, SpriteResources &, const ActorCreationData &);
    TeddyParty(const TeddyParty &) = delete;
    TeddyParty &operator=(const TeddyParty &) = delete;
    std::unique_ptr<Operation> begin();
    // REMOVE_ITEM invokes REMOVE_CHAR_FROM_PARTY before ordinary C216DB,
    // even if a different Teddy already belongs to the party.
    std::unique_ptr<Operation> begin_remove(std::uint16_t member);
    bool busy() const noexcept { return active_ != nullptr; }
    bool failed() const noexcept { return failed_ || creation_.failed() || updater_.failed(); }
    bool bound_to(const party::State &, const ActorWorld &, const PartyFormation &,
                  const party::Inventory &) const noexcept;
  private:
    void check() const;
    bool contains(std::uint16_t member) const;
    std::uint16_t member(std::uint8_t item) const;
    party::State &party_;
    ActorWorld &actors_;
    WorldPartyState &formation_;
    WorldParty &updater_;
    PreparedActorState &prepared_;
    PartyFormation &refresh_;
    std::shared_ptr<const dialogue::SubstitutionResources> items_;
    npcs::Interactions &interactions_;
    SpriteResources &sprites_;
    const ActorCreationData &creation_data_;
    WorldPartyCreation creation_;
    Operation *active_{};
    bool failed_{};
};
} // namespace eb::native::story
