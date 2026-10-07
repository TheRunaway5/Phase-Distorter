#include "eb/native/story/battle_dialogue.hpp"
#include <stdexcept>

namespace eb::native::story {
namespace {
void require(bool value, const char* message) {
    if (!value) throw std::logic_error(message);
}
}
BattleDialogue::BattleDialogue(std::shared_ptr<const dialogue::Program> program,
    dialogue::PromptHost& prompts, dialogue::PreparedMessage& prepared,
    party::State& party, const InputState& input)
    : program_(std::move(program)), prompts_(prompts), prepared_(prepared),
      party_(party), input_(input) {
    require(program_ && program_->version() == party.version() &&
                prompts.windows().version() == party.version() && prepared.version() == party.version(),
            "Battle dialogue dependencies must share a region");
    const auto existing = prompts.windows().prepared_message();
    require(!existing || existing == &prepared,
            "Battle dialogue host has another prepared-message owner");
    dialogue::Conversation admission(program_, prompts_);
    admission.validate_start();
    prompts.windows().bind_party(party);
    prompts.windows().bind_prepared_message(prepared);
}
void BattleDialogue::check() const {
    require(!failed_, "Battle dialogue execution was abandoned or failed");
    require(prompts_.windows().prepared_message() == &prepared_,
            "Battle dialogue lost its prepared-message owner");
}
void BattleDialogue::validate_start() const {
    check();
    require(!active_, "Battle dialogue is already active");
    dialogue::Conversation admission(program_, prompts_);
    admission.validate_start();
}
void BattleDialogue::validate_start_nested(dialogue::Conversation& parent) const {
    check();
    require(!active_, "Battle dialogue is already active");
    dialogue::Conversation admission(program_, prompts_);
    admission.validate_start_nested(parent);
}
dialogue::Location BattleDialogue::resolve(const dialogue::ReferenceKey& reference) const {
    const auto location = program_->resolve(reference);
    require(location.has_value(), "Battle message is absent from imported content");
    (void)program_->byte(*location);
    return *location;
}
BattleDialogue::Operation::Operation(BattleDialogue& owner, dialogue::Location location,
    std::optional<std::uint32_t> number, dialogue::Conversation* parent)
    : owner_(owner), location_(location), number_(number), parent_(parent),
      conversation_(owner.program_, owner.prompts_) {}
BattleDialogue::Operation::~Operation() {
    if (owner_.active_ == this) {
        if (!complete_) owner_.failed_ = true;
        owner_.active_ = nullptr;
    }
}
std::unique_ptr<BattleDialogue::Operation> BattleDialogue::begin(dialogue::Location location,
    std::optional<std::uint32_t> number, dialogue::Conversation* parent) {
    (void)program_->byte(location);
    if (parent) validate_start_nested(*parent);
    else validate_start();
    auto operation = std::unique_ptr<Operation>(new Operation(*this, location, number, parent));
    active_ = operation.get();
    return operation;
}
std::unique_ptr<BattleDialogue::Operation> BattleDialogue::begin_raw(dialogue::Location location) {
    auto operation = begin(location, {}, nullptr);
    operation->raw_ = true;
    return operation;
}
std::unique_ptr<BattleDialogue::Operation> BattleDialogue::begin_text(dialogue::Location location) {
    return begin(location, {}, nullptr);
}
std::unique_ptr<BattleDialogue::Operation> BattleDialogue::begin_text(
    dialogue::Location location, dialogue::Conversation& parent) { return begin(location, {}, &parent); }
std::unique_ptr<BattleDialogue::Operation> BattleDialogue::begin_number(
    dialogue::Location location, std::uint32_t number) { return begin(location, number, nullptr); }
std::unique_ptr<BattleDialogue::Operation> BattleDialogue::begin_number(
    dialogue::Location location, std::uint32_t number, dialogue::Conversation& parent) {
    return begin(location, number, &parent);
}
dialogue::Progress BattleDialogue::Operation::advance(unsigned budget) {
    if (complete_) return dialogue::Progress::Finished;
    owner_.check();
    require(owner_.active_ == this, "Battle dialogue operation is not active");
    if (pending_) return dialogue::Progress::Suspended;
    if (!budget) return dialogue::Progress::BudgetExhausted;
    try {
        if (parent_) conversation_.validate_start_nested(*parent_);
        else conversation_.validate_start();
        // PAD_STATE is held controller state, not PAD_PRESS or prompt input.
        if (!raw_ && owner_.party_.auto_fight && (owner_.input_.state[0] & 0x8000)) {
            owner_.party_.auto_fight = 0;
            owner_.prompts_.windows().clear_auto_fight_indicator();
        }
        if (number_) owner_.prepared_.set_number(*number_);
        if (!raw_ && owner_.prompts_.windows().prompt_state().battle_mode)
            owner_.prompts_.windows().output().policy().prompt_mode = 2;
        if (parent_) conversation_.start_nested(location_, *parent_);
        else conversation_.start(location_);
        pending_ = true;
        return dialogue::Progress::Suspended;
    } catch (...) {
        owner_.failed_ = true;
        throw;
    }
}
dialogue::Conversation& BattleDialogue::Operation::conversation() {
    owner_.check();
    require(pending_, "Battle dialogue has no pending conversation");
    return conversation_;
}
void BattleDialogue::Operation::respond() {
    owner_.check();
    require(owner_.active_ == this && pending_, "Battle dialogue has no message to acknowledge");
    require(conversation_.finished(), "Battle dialogue child has not finished");
    if (!raw_) owner_.prompts_.windows().output().policy().prompt_mode = 0;
    pending_ = false;
    complete_ = true;
    owner_.active_ = nullptr;
}
} // namespace eb::native::story
