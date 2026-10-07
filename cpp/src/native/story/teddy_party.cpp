// Original C216DB, ADD_CHAR_TO_PARTY, REMOVE_CHAR_FROM_PARTY and C03903.
#include "eb/native/story/teddy_party.hpp"
#include "eb/native/party/teddy.hpp"
#include <stdexcept>

namespace eb::native::story {
TeddyParty::TeddyParty(party::State &party, ActorWorld &actors, const WorldPartyData &data,
                     WorldPartyState &formation, WorldParty &updater, PreparedActorState &prepared,
                     PartyTrail &trail, const std::uint16_t &area_style, PartyFormation &refresh,
                     std::shared_ptr<const dialogue::SubstitutionResources> items,
                     npcs::Interactions &interactions, SpriteResources &sprites, const ActorCreationData &creation_data)
    : party_(party), actors_(actors), formation_(formation), updater_(updater), prepared_(prepared),
      refresh_(refresh), items_(std::move(items)), interactions_(interactions), sprites_(sprites),
      creation_data_(creation_data),
      creation_(party,actors,data,formation,updater,prepared,trail,area_style) {
    if (!items_ || items_->version() != party.version() || !refresh.uses(updater) ||
        &interactions.actors() != &actors || !refresh.uses(interactions))
        throw std::invalid_argument("Teddy lifecycle requires shared party formation and regional item resources");
}
bool TeddyParty::bound_to(const party::State &party, const ActorWorld &actors,
                         const PartyFormation &formation, const party::Inventory &inventory) const noexcept {
    return &party_ == &party && &actors_ == &actors && &refresh_ == &formation &&
           inventory.bound_to(party,*items_);
}
void TeddyParty::check() const {
    if (failed_ || creation_.failed() || updater_.failed())
        throw std::logic_error("Abandoned or failed Teddy lifecycle cannot resume");
}
std::uint16_t TeddyParty::member(std::uint8_t item) const {
    const auto strength = items_->item_properties(item).parameters[0];
    return strength < 0x80 ? strength : std::uint16_t(0xff00 | strength);
}
bool TeddyParty::contains(std::uint16_t member) const {
    for (unsigned i=0; i<party_.party_count; ++i) {
        if (i >= party_.party_order.size())
            throw std::out_of_range("Teddy membership lookup leaves owned party storage");
        if (party_.party_order[i] == member) return member != 0;
    }
    return false;
}
std::unique_ptr<TeddyParty::Operation> TeddyParty::begin() {
    check();
    if (active_ || creation_.busy() || updater_.busy())
        throw std::logic_error("Teddy lifecycle requires an idle party owner");
    auto operation = std::unique_ptr<Operation>(new Operation(*this));
    active_ = operation.get();
    return operation;
}
std::unique_ptr<TeddyParty::Operation> TeddyParty::begin_remove(std::uint16_t member) {
    check();
    if (active_ || creation_.busy() || updater_.busy())
        throw std::logic_error("Teddy removal requires an idle party owner");
    if (member != 16 && member != 17)
        throw std::invalid_argument("Item removal requires an unowned non-Teddy membership wrapper");
    auto operation = std::unique_ptr<Operation>(new Operation(*this, member));
    active_ = operation.get(); return operation;
}
TeddyParty::Operation::Operation(TeddyParty &owner, std::optional<std::uint16_t> removed)
    : owner_(owner), remove_first_(removed) {}
TeddyParty::Operation::~Operation() {
    if (owner_.active_ == this) {
        owner_.active_ = nullptr;
        if (!complete_) owner_.failed_ = true;
    }
}
void TeddyParty::Operation::finish() {
    complete_ = true;
    owner_.active_ = nullptr;
}
void TeddyParty::Operation::remove(unsigned member) {
    auto &o = owner_;
    unsigned at = 0;
    for (; at<o.party_.party_count; ++at) {
        if (at >= o.party_.party_order.size())
            throw std::out_of_range("Teddy removal leaves owned membership storage");
        if (o.party_.party_order[at] == member) break;
    }
    if (at == o.party_.party_count) return;
    for (unsigned i=at; i<5; ++i) o.party_.party_order[i] = o.party_.party_order[i+1];
    o.party_.party_order[5] = 0;
    unsigned position = 0;
    while (position<6 && o.party_.display_order[position] != member) ++position;
    if (position == 6) return; // C03903's missing-formation early return.
    const auto role = o.formation_.roles[position];
    const auto id = o.actors_.actor_for_role(role);
    if (!id) throw std::logic_error("Teddy removal requires its actual formation actor");
    // C03903 leaves the last role and controlled mapping intact.
    for (unsigned i=position; i<5; ++i) {
        o.party_.display_order[i] = o.party_.display_order[i+1];
        o.formation_.roles[i] = o.formation_.roles[i+1];
        o.party_.controlled_order[i] = o.party_.controlled_order[i+1];
    }
    auto &actor = o.actors_.actor(*id);
    if (!position) {
        const auto source = actor.action().variables[1];
        const auto destination = o.party_.controlled_order[0];
        if (source >= 6 || destination >= 6)
            throw std::out_of_range("Teddy leader trail transfer leaves owned character storage");
        o.formation_.trail_cursors[destination] = o.formation_.trail_cursors[source];
    }
    o.party_.display_order[5] = 0;
    --o.party_.party_count;
    o.prepared_.x = std::uint16_t(actor.action().position[0] >> 16);
    o.prepared_.y = std::uint16_t(actor.action().position[1] >> 16);
    o.prepared_.direction = actor.behavior.direction;
    if (!o.actors_.erase(*id)) throw std::logic_error("Teddy actor disappeared before removal");
    o.interactions_.detach(*id);
    o.updater_.refresh_guests(); // C03903 has this call before UPDATE_PARTY's own call.
    update_ = o.refresh_.begin();
}
void TeddyParty::Operation::insert(unsigned member) {
    auto &o = owner_;
    for (unsigned at=0; at<6; ++at) {
        const auto existing = o.party_.party_order[at];
        if (existing == member) return;
        if (existing && existing < member) continue;
        unsigned end = at;
        while (end<6 && o.party_.party_order[end]) ++end;
        if (end == 6) return;
        for (unsigned i=end; i>at; --i) o.party_.party_order[i] = o.party_.party_order[i-1];
        o.party_.party_order[at] = std::uint8_t(member);
        creation_ = o.creation_.begin_insert(member);
        return;
    }
}
dialogue::Progress TeddyParty::Operation::advance(unsigned budget) {
    if (complete_) return dialogue::Progress::Finished;
    owner_.check();
    if (pending_) return dialogue::Progress::Suspended;
    try {
        while (budget--) {
            if (update_) {
                const auto progress = update_->advance(1);
                if (progress == dialogue::Progress::Suspended) {
                    pending_ = update_->service(); return progress;
                }
                if (progress == dialogue::Progress::Finished) update_.reset();
                continue;
            }
            if (creation_) {
                if (tail_) {
                    if (tail_->advance() == dialogue::Progress::Suspended) {
                        pending_ = tail_->service(); return dialogue::Progress::Suspended;
                    }
                    tail_.reset(); creation_->respond();
                }
                const auto created = creation_->advance();
                if (!registered_ && !creation_->created().empty()) {
                    const auto &entry = creation_->created().front();
                    const auto &actor = owner_.actors_.actor(entry.actor);
                    owner_.interactions_.attach(entry.actor,entry.role,
                        actor_creation_metadata(owner_.sprites_,owner_.creation_data_,actor.appearance.sprite()),0xffff);
                    registered_ = true;
                }
                if (created) {
                    if (creation_->created().size() != 1)
                        throw std::logic_error("Teddy insertion did not create exactly one actual actor");
                    auto &actor = owner_.actors_.actor(creation_->created().front().actor);
                    actor.tick_callback_enabled = false;
                    actor.scripts_and_physics_enabled = false;
                    creation_.reset();
                    finish(); return dialogue::Progress::Finished;
                }
                const auto service = creation_->service()->kind;
                if (service == WorldPartyCreationServiceKind::CompareInsertionMember)
                    throw std::logic_error("Authored Teddy insertion unexpectedly requires chosen-member comparison");
                tail_ = owner_.refresh_.begin_tail(service == WorldPartyCreationServiceKind::RefreshMovementPolicy
                    ? WorldPartyService::RefreshMovementPolicy : WorldPartyService::RefreshWindowPalette);
                continue;
            }
            switch (phase_++) {
            case 0:
                if (remove_first_) {
                    const auto member = *remove_first_;
                    remove_first_.reset();
                    --phase_;
                    remove(member);
                    break;
                }
                selected_ = party::select_teddy_item(owner_.party_, *owner_.items_);
                if (selected_ && owner_.contains(owner_.member(*selected_))) {
                    finish(); return dialogue::Progress::Finished;
                }
                break;
            case 1: remove(16); break;
            case 2: remove(17); break;
            case 3:
                if (selected_) {
                    const auto member = owner_.member(*selected_); // source rereads immutable strength here.
                    if (member != 16 && member != 17)
                        throw std::invalid_argument("Selected item requires an unowned non-Teddy membership wrapper");
                    insert(member);
                    if (creation_) break;
                }
                finish(); return dialogue::Progress::Finished;
            default: throw std::logic_error("Teddy lifecycle lost its continuation");
            }
        }
    } catch (...) { owner_.failed_ = true; throw; }
    return dialogue::Progress::BudgetExhausted;
}
void TeddyParty::Operation::respond_bicycle_dismount() {
    owner_.check();
    if (pending_ != PartyFormationService::BicycleDismount || complete_)
        throw std::logic_error("Teddy lifecycle has no pending bicycle dismount");
    try {
        if (update_) update_->respond_bicycle_dismount();
        else if (tail_) tail_->respond_bicycle_dismount();
        else throw std::logic_error("Teddy lifecycle lost its suspended formation owner");
        pending_.reset();
    } catch (...) { owner_.failed_ = true; throw; }
}
} // namespace eb::native::story
