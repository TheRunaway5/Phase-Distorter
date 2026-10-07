#pragma once
#include "eb/native/story/teddy_party.hpp"

namespace eb::native::story {
// Complete ADD_CHAR_TO_PARTY: ordered membership insertion, real actor
// creation/UPDATE_PARTY tails, then Teddy and timed-item rescans for chosen
// characters. No membership, actor, inventory or lifecycle service is copied.
class PartyMembership {
public:
    class Operation {
    public:
        ~Operation();
        Operation(const Operation&) = delete;
        dialogue::Progress advance(unsigned budget = 4096);
        const std::optional<PartyFormationService>& service() const { return pending_; }
        void respond_bicycle_dismount();
        bool complete() const { return complete_; }
    private:
        friend class PartyMembership;
        Operation(PartyMembership&, std::uint16_t);
        PartyMembership& owner_;
        std::uint16_t member_;
        unsigned phase_{};
        bool complete_{}, registered_{};
        std::optional<PartyFormationService> pending_;
        std::unique_ptr<WorldPartyCreation::Operation> creation_;
        std::unique_ptr<PartyFormation::TailOperation> tail_;
        std::unique_ptr<TeddyParty::Operation> teddy_;
    };
    PartyMembership(party::State&, ActorWorld&, WorldPartyCreation&, PartyFormation&,
                    TeddyParty&, party::Inventory&, npcs::Interactions&,
                    SpriteResources&, const ActorCreationData&);
    std::unique_ptr<Operation> begin_add(std::uint16_t member);
    bool uses(const party::State&, const ActorWorld&, const PartyFormation&,
              const TeddyParty&, const party::Inventory&) const noexcept;
    bool busy() const { return active_ != nullptr; }
    bool failed() const { return failed_; }
private:
    party::State& party_;
    ActorWorld& actors_;
    WorldPartyCreation& creation_;
    PartyFormation& formation_;
    TeddyParty& teddy_;
    party::Inventory& inventory_;
    npcs::Interactions& interactions_;
    SpriteResources& sprites_;
    const ActorCreationData& creation_data_;
    Operation* active_{};
    bool failed_{};
};
} // namespace eb::native::story
