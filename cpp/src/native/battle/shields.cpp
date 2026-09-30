#include "eb/native/battle/shields.hpp"
#include <stdexcept>

namespace eb::native::battle {
namespace {
void require(bool value, const char* message) {
    if (!value) throw std::logic_error(message);
}
}
Shields::Shields(ActionState& state, Roster& roster, Names& names,
    story::BattleDialogue& dialogue, std::shared_ptr<const ActionResources> resources)
    : state_(state), roster_(roster), names_(names), dialogue_(dialogue), resources_(std::move(resources)) {
    require(resources_ && resources_->version() == roster.version() &&
                dialogue.version() == roster.version(), "Shield dependencies must share a region");
    require(names.uses(roster, dialogue.party(), dialogue.prepared(), state),
            "Shields require the actual names, roster, action, party and prepared owners");
    for (unsigned i = 0; i < messages_.size(); ++i)
        messages_[i] = dialogue.resolve(resources_->message(static_cast<ShieldMessage>(i)));
}
void Shields::check() const {
    require(!failed(), "Shield execution was abandoned or failed");
    require(names_.uses(roster_, dialogue_.party(), dialogue_.prepared(), state_),
            "Shield execution lost its shared owners");
}
Battler& Shields::attacker() {
    require(state_.attacker.has_value(), "Shield action lacks its actual attacker selector");
    return roster_.at(*state_.attacker);
}
Battler& Shields::target() {
    require(state_.target.has_value(), "Shield action lacks its actual target selector");
    return roster_.at(*state_.target);
}
Shields::Operation::Operation(Shields& owner, bool weaken, dialogue::Conversation* parent)
    : owner_(owner), parent_(parent), weaken_(weaken) {}
Shields::Operation::~Operation() {
    if (owner_.active_ == this) {
        if (!complete_) owner_.failed_ = true;
        owner_.active_ = nullptr;
    }
}
void Shields::Operation::validate_start() const {
    if (parent_) owner_.dialogue_.validate_start_nested(*parent_);
    else owner_.dialogue_.validate_start();
}
std::unique_ptr<Shields::Operation> Shields::begin(bool weaken, dialogue::Conversation* parent) {
    check();
    require(!active_, "Shield execution is already active");
    auto operation = std::unique_ptr<Operation>(new Operation(*this, weaken, parent));
    operation->validate_start();
    active_ = operation.get();
    return operation;
}
std::unique_ptr<Shields::Operation> Shields::begin_nullify() { return begin(false, nullptr); }
std::unique_ptr<Shields::Operation> Shields::begin_nullify(dialogue::Conversation& parent) {
    return begin(false, &parent);
}
std::unique_ptr<Shields::Operation> Shields::begin_weaken() { return begin(true, nullptr); }
std::unique_ptr<Shields::Operation> Shields::begin_weaken(dialogue::Conversation& parent) {
    return begin(true, &parent);
}
void Shields::Operation::message(ShieldMessage kind) {
    const auto location = owner_.messages_.at(static_cast<unsigned>(kind));
    message_ = parent_ ? owner_.dialogue_.begin_text(location, *parent_)
                       : owner_.dialogue_.begin_text(location);
    require(message_->advance() == dialogue::Progress::Suspended && message_->pending(),
            "Shield battle message did not start its real conversation");
}
bool Shields::Operation::decrement() {
    auto& hp = owner_.target().shield_hp;
    hp = std::uint8_t(hp - 1);
    if (hp) return false;
    owner_.target().afflictions[6] = 0;
    return true;
}
void Shields::Operation::finish(bool result) {
    nullified_ = result;
    complete_ = true;
    owner_.active_ = nullptr;
}
dialogue::Progress Shields::Operation::advance(unsigned budget) {
    if (complete_) return dialogue::Progress::Finished;
    owner_.check();
    require(owner_.active_ == this, "Shield operation is not active");
    if (message_) return dialogue::Progress::Suspended;
    try {
        while (budget--) {
            validate_start();
            switch (phase_) {
            case Phase::Start:
                if (weaken_) {
                    owner_.state_.shield_nullified = 0;
                    if (!owner_.state_.damage_reflected) { finish(); break; }
                    owner_.names_.swap_attacker_with_target();
                    if (decrement()) {
                        phase_ = Phase::WeakenOff;
                        message(ShieldMessage::WornOff);
                    } else {
                        owner_.state_.damage_reflected = 0;
                        finish();
                    }
                } else {
                    owner_.state_.shield_nullified = 1;
                    owner_.dialogue_.prepared().set_item(owner_.attacker().action_argument);
                    if (owner_.resources_->type(owner_.attacker().action) != 3) { finish(); break; }
                    const auto shield = owner_.target().afflictions[6];
                    if (shield == 1) {
                        phase_ = Phase::Reflected;
                        message(ShieldMessage::Reflected);
                    } else if (shield == 2) {
                        phase_ = Phase::Absorbed;
                        message(ShieldMessage::Absorbed);
                    } else finish();
                }
                break;
            case Phase::Reflected:
                owner_.state_.damage_reflected = 1;
                owner_.names_.swap_attacker_with_target();
                finish();
                break;
            case Phase::Absorbed:
                if (decrement()) {
                    phase_ = Phase::AbsorbOff;
                    message(ShieldMessage::WornOff);
                } else finish(true);
                break;
            case Phase::AbsorbOff: finish(true); break;
            case Phase::WeakenOff:
                owner_.state_.damage_reflected = 0;
                finish();
                break;
            }
            if (complete_) return dialogue::Progress::Finished;
            if (message_) return dialogue::Progress::Suspended;
        }
        return dialogue::Progress::BudgetExhausted;
    } catch (...) {
        owner_.failed_ = true;
        throw;
    }
}
dialogue::Conversation& Shields::Operation::conversation() {
    owner_.check();
    require(message_ != nullptr, "Shield operation has no pending message");
    return message_->conversation();
}
void Shields::Operation::respond() {
    owner_.check();
    require(owner_.active_ == this && message_, "Shield operation has no message to acknowledge");
    message_->respond();
    message_.reset();
}
bool Shields::Operation::nullified() const {
    require(complete_ && !weaken_, "Only a completed PSI shield test has a return value");
    return nullified_;
}
} // namespace eb::native::battle
