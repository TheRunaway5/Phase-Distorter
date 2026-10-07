#include "eb/native/story/party_membership.hpp"
#include <stdexcept>

namespace eb::native::story {
namespace {
void require(bool condition, const char* message) {
    if (!condition) throw std::logic_error(message);
}
}
PartyMembership::PartyMembership(party::State& party, ActorWorld& actors, WorldPartyCreation& creation,
    PartyFormation& formation, TeddyParty& teddy, party::Inventory& inventory,
    npcs::Interactions& interactions, SpriteResources& sprites, const ActorCreationData& metadata)
    : party_(party), actors_(actors), creation_(creation), formation_(formation), teddy_(teddy),
      inventory_(inventory), interactions_(interactions), sprites_(sprites), creation_data_(metadata) {
    require(creation.uses(party, actors) && formation.uses(party) && formation.uses(interactions) &&
            &interactions.actors() == &actors && teddy.bound_to(party, actors, formation, inventory),
            "Party insertion requires shared live formation, actor and inventory owners");
}
bool PartyMembership::uses(const party::State& party, const ActorWorld& actors,
    const PartyFormation& formation, const TeddyParty& teddy, const party::Inventory& inventory) const noexcept {
    return &party_ == &party && &actors_ == &actors && &formation_ == &formation &&
        &teddy_ == &teddy && &inventory_ == &inventory;
}
std::unique_ptr<PartyMembership::Operation> PartyMembership::begin_add(std::uint16_t member) {
    require(!failed_ && !active_ && !creation_.failed() && !creation_.busy() && !teddy_.busy() && !teddy_.failed() &&
            !inventory_.busy() && !inventory_.failed(),
            "Party insertion is unavailable");
    if (member < 1 || member > 17) throw std::out_of_range("Party insertion requires an authored member ID");
    auto result = std::unique_ptr<Operation>(new Operation(*this, member));
    active_ = result.get(); return result;
}
PartyMembership::Operation::Operation(PartyMembership& owner, std::uint16_t member)
    : owner_(owner), member_(member) {}
PartyMembership::Operation::~Operation() {
    if (owner_.active_ == this) {
        if (!complete_) owner_.failed_ = true;
        owner_.active_ = nullptr;
    }
}
dialogue::Progress PartyMembership::Operation::advance(unsigned budget) {
    if (complete_) return dialogue::Progress::Finished;
    require(!owner_.failed_ && owner_.active_ == this, "Party insertion is not active");
    if (pending_) return dialogue::Progress::Suspended;
    try {
        auto& o = owner_;
        while (budget--) {
            if (teddy_) {
                const auto progress = teddy_->advance(1);
                if (progress == dialogue::Progress::Suspended) { pending_ = teddy_->service(); return progress; }
                if (progress == dialogue::Progress::Finished) teddy_.reset();
                continue;
            }
            if (creation_) {
                if (tail_) {
                    if (tail_->advance() == dialogue::Progress::Suspended) {
                        pending_ = tail_->service(); return dialogue::Progress::Suspended;
                    }
                    tail_.reset(); creation_->respond();
                }
                const bool done = creation_->advance();
                if (!registered_ && !creation_->created().empty()) {
                    const auto& entry = creation_->created().front();
                    const auto& actor = o.actors_.actor(entry.actor);
                    o.interactions_.attach(entry.actor, entry.role,
                        actor_creation_metadata(o.sprites_, o.creation_data_, actor.appearance.sprite()), 0xffff);
                    registered_ = true;
                }
                if (done) {
                    require(creation_->created().size() == 1, "Party insertion did not create its actual actor");
                    auto& actor = o.actors_.actor(creation_->created().front().actor);
                    actor.tick_callback_enabled = false;
                    actor.scripts_and_physics_enabled = false;
                    creation_.reset();
                    if (member_ <= 4) { teddy_ = o.teddy_.begin(); phase_ = 1; }
                    else phase_ = 2;
                } else {
                    const auto service = creation_->service()->kind;
                    require(service != WorldPartyCreationServiceKind::CompareInsertionMember,
                        "Party insertion unexpectedly requires an unowned comparison");
                    tail_ = o.formation_.begin_tail(service == WorldPartyCreationServiceKind::RefreshMovementPolicy
                        ? WorldPartyService::RefreshMovementPolicy : WorldPartyService::RefreshWindowPalette);
                }
                continue;
            }
            if (phase_ == 0) {
                phase_ = 2;
                for (unsigned at = 0; at < 6; ++at) {
                    const auto previous = o.party_.party_order[at];
                    if (previous == member_) break;
                    if (previous && previous < member_) continue;
                    unsigned end = at;
                    while (end < 6 && o.party_.party_order[end]) ++end;
                    if (end == 6) break;
                    for (unsigned i = end; i > at; --i) o.party_.party_order[i] = o.party_.party_order[i - 1];
                    o.party_.party_order[at] = std::uint8_t(member_);
                    creation_ = o.creation_.begin_insert(member_);
                    break;
                }
                if (creation_) continue;
            }
            if (phase_ == 1) { o.inventory_.rescan_transformations(); phase_ = 2; }
            complete_ = true; o.active_ = nullptr;
            return dialogue::Progress::Finished;
        }
    } catch (...) { owner_.failed_ = true; throw; }
    return dialogue::Progress::BudgetExhausted;
}
void PartyMembership::Operation::respond_bicycle_dismount() {
    require(!owner_.failed_ && pending_ == PartyFormationService::BicycleDismount,
            "Party insertion has no pending bicycle dismount");
    if (tail_) tail_->respond_bicycle_dismount();
    else if (teddy_) teddy_->respond_bicycle_dismount();
    else throw std::logic_error("Party insertion lost its suspended lifecycle");
    pending_.reset();
}
} // namespace eb::native::story
