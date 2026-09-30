// Source: overworld/update_party.asm, unknown/C0/C02C3E.asm and C4/C47F87.asm.
#include "eb/native/story/party_formation.hpp"
#include "eb/native/party/condition.hpp"
#include <stdexcept>

namespace eb::native::story {
PartyFormation::PartyFormation(WorldParty &updater, party::State &party, ActorWorld &actors,
                               const WorldPartyData &data, WorldPartyState &formation,
                               party::MovementPolicyState &movement, npcs::Interactions &interactions,
                               TickState &clock)
    : updater_(updater), party_(party), actors_(actors), movement_(movement),
      interactions_(interactions), clock_(clock) {
    if (!updater.uses(party, actors, data, formation) || &interactions.actors() != &actors ||
        interactions.windows().version() != party.version())
        throw std::invalid_argument("Party formation requires the actual shared party, actors and resources");
    interactions.windows().bind_party(party);
}
void PartyFormation::check() const {
    if (failed_ || updater_.failed())
        throw std::logic_error("Abandoned or failed party formation cannot be resumed");
}
void PartyFormation::publish_leader() {
    const auto leader = updater_.leader();
    if (!leader)
        throw std::logic_error("Party formation has no live leader");
    interactions_.state().leader = *leader;
}
bool PartyFormation::bound_to(const party::State &party, const ActorWorld &actors,
                              const npcs::Interactions &interactions, const TickState &clock) const noexcept {
    return &party_ == &party && &actors_ == &actors && &interactions_ == &interactions && &clock_ == &clock;
}
std::unique_ptr<PartyFormation::Operation> PartyFormation::begin() {
    check();
    if (active_tail_)
        throw std::logic_error("Party formation already has an active tail service");
    return std::unique_ptr<Operation>(new Operation(*this));
}
std::unique_ptr<PartyFormation::TailOperation> PartyFormation::begin_tail(WorldPartyService kind) {
    check();
    if (active_tail_ || !updater_.busy())
        throw std::logic_error("Party formation tail requires one active update and no other tail");
    auto operation = std::unique_ptr<TailOperation>(new TailOperation(*this, kind));
    active_tail_ = operation.get();
    return operation;
}
PartyFormation::TailOperation::TailOperation(PartyFormation &owner, WorldPartyService kind)
    : owner_(owner), kind_(kind) {}
PartyFormation::TailOperation::~TailOperation() {
    if (owner_.active_tail_ == this) {
        owner_.active_tail_ = nullptr;
        if (!complete_) owner_.failed_ = true;
    }
}
dialogue::Progress PartyFormation::TailOperation::advance() {
    if (complete_) return dialogue::Progress::Finished;
    owner_.check();
    if (pending_) return dialogue::Progress::Suspended;
    try {
        if (kind_ == WorldPartyService::RefreshMovementPolicy) {
            owner_.publish_leader();
            if (party::refresh_movement_policy(owner_.party_, owner_.interactions_.state().walking_style,
                                               owner_.movement_)) {
                pending_ = PartyFormationService::BicycleDismount;
                return dialogue::Progress::Suspended;
            }
        } else if (kind_ == WorldPartyService::RefreshWindowPalette) {
            owner_.interactions_.windows().publish_palette(owner_.clock_.flavor,
                party::last_controlled_status(owner_.party_) != 0, owner_.clock_.disabled_transitions != 0);
        } else throw std::invalid_argument("Unknown party formation tail");
        complete_ = true;
        owner_.active_tail_ = nullptr;
        return dialogue::Progress::Finished;
    } catch (...) { owner_.failed_ = true; throw; }
}
void PartyFormation::TailOperation::respond_bicycle_dismount() {
    owner_.check();
    if (pending_ != PartyFormationService::BicycleDismount || complete_)
        throw std::logic_error("Party formation tail has no pending bicycle dismount");
    try {
        owner_.publish_leader();
        pending_.reset();
        complete_ = true;
        owner_.active_tail_ = nullptr;
    } catch (...) { owner_.failed_ = true; throw; }
}
PartyFormation::Operation::Operation(PartyFormation &owner)
    : owner_(owner), update_(owner.updater_.begin_update()) {}
PartyFormation::Operation::~Operation() {
    if (!complete_)
        owner_.failed_ = true;
}
dialogue::Progress PartyFormation::Operation::advance(unsigned budget) {
    if (complete_)
        return dialogue::Progress::Finished;
    owner_.check();
    if (pending_)
        return dialogue::Progress::Suspended;
    try {
        while (budget--) {
            if (update_->advance()) {
                complete_ = true;
                update_.reset();
                return dialogue::Progress::Finished;
            }
            tail_ = owner_.begin_tail(*update_->service());
            if (tail_->advance() == dialogue::Progress::Suspended) {
                pending_ = tail_->service();
                return dialogue::Progress::Suspended;
            }
            tail_.reset();
            update_->respond();
        }
    } catch (...) {
        owner_.failed_ = true;
        throw;
    }
    return dialogue::Progress::BudgetExhausted;
}
void PartyFormation::Operation::respond_bicycle_dismount() {
    owner_.check();
    if (pending_ != PartyFormationService::BicycleDismount || complete_)
        throw std::logic_error("Party formation has no pending bicycle dismount");
    try {
        tail_->respond_bicycle_dismount();
        tail_.reset();
        update_->respond();
        pending_.reset();
    } catch (...) {
        owner_.failed_ = true;
        throw;
    }
}
} // namespace eb::native::story
