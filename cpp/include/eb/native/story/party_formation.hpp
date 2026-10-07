#pragma once

#include "eb/native/world_party.hpp"
#include "eb/native/party/movement_policy.hpp"
#include "eb/native/npcs/interaction.hpp"
#include "eb/native/story/ticks.hpp"

namespace eb::native::story {
enum class PartyFormationService { BicycleDismount };

// UPDATE_PARTY through its movement-policy and window-palette tails. This
// coordinator borrows the real formation, actor, interaction and window owners;
// it has no independent membership or walking-style copy. Bicycle dismount
// includes actor lifecycle, audio and frame work and remains an explicit service.
// All borrowed owners outlive this object, which outlives its operations.
class PartyFormation {
  public:
    // Drives one actual UPDATE_PARTY tail service when another lifecycle
    // owner already holds the WorldParty operation (for example insertion).
    // This never starts or acknowledges a second formation operation.
    class TailOperation {
      public:
        ~TailOperation();
        TailOperation(const TailOperation &) = delete;
        TailOperation &operator=(const TailOperation &) = delete;
        dialogue::Progress advance();
        const std::optional<PartyFormationService> &service() const { return pending_; }
        void respond_bicycle_dismount();
      private:
        friend class PartyFormation;
        TailOperation(PartyFormation &, WorldPartyService);
        PartyFormation &owner_;
        WorldPartyService kind_;
        std::optional<PartyFormationService> pending_;
        bool complete_{};
    };
    class Operation {
      public:
        ~Operation();
        Operation(const Operation &) = delete;
        Operation &operator=(const Operation &) = delete;
        dialogue::Progress advance(unsigned work_budget = 4096);
        const std::optional<PartyFormationService> &service() const { return pending_; }
        // The actual C03CFD lifecycle must finish before this reply. It can
        // replace role24, so resolve the live leader again before continuing.
        void respond_bicycle_dismount();
        bool complete() const { return complete_; }
      private:
        friend class PartyFormation;
        explicit Operation(PartyFormation &);
        PartyFormation &owner_;
        std::unique_ptr<WorldParty::Operation> update_;
        std::unique_ptr<TailOperation> tail_;
        std::optional<PartyFormationService> pending_;
        bool complete_{};
    };
    PartyFormation(WorldParty &, party::State &, ActorWorld &, const WorldPartyData &,
                   WorldPartyState &, party::MovementPolicyState &,
                   npcs::Interactions &, TickState &);
    PartyFormation(const PartyFormation &) = delete;
    PartyFormation &operator=(const PartyFormation &) = delete;
    void validate_begin() const;
    std::unique_ptr<Operation> begin();
    std::unique_ptr<TailOperation> begin_tail(WorldPartyService);
    bool uses(const WorldParty &updater) const noexcept { return &updater_ == &updater; }
    bool uses(const ActorWorld& actors) const noexcept { return &actors_ == &actors; }
    bool uses(const party::State& party) const noexcept { return &party_ == &party; }
    bool uses(const npcs::Interactions &interactions) const noexcept { return &interactions_ == &interactions; }
    bool bound_to(const party::State &, const ActorWorld &, const npcs::Interactions &,
                  const TickState &) const noexcept;
    bool bound_to(const party::State& party, const ActorWorld& actors,
                  const dialogue::WindowHost& windows, const TickState& clock) const noexcept {
        return &party_ == &party && &actors_ == &actors && &clock_ == &clock &&
            &interactions_.windows() == &windows && &interactions_.actors() == &actors;
    }
  private:
    void check() const;
    void publish_leader();
    WorldParty &updater_;
    party::State &party_;
    ActorWorld &actors_;
    party::MovementPolicyState &movement_;
    npcs::Interactions &interactions_;
    TickState &clock_;
    TailOperation *active_tail_{};
    bool failed_{};
};
} // namespace eb::native::story
