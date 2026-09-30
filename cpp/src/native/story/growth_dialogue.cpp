#include "eb/native/story/growth_dialogue.hpp"
#include <stdexcept>

namespace eb::native::story {
namespace {
void require(bool value, const char *message) {
    if (!value) throw std::logic_error(message);
}
}
GrowthDialogue::GrowthDialogue(VisibleCharacterGrowth &growth,
    std::shared_ptr<const dialogue::Program> program, dialogue::PromptHost &prompts,
    dialogue::PreparedMessage &prepared, const party::State &party, const RandomState &random)
    : growth_(growth), program_(std::move(program)), prompts_(prompts), prepared_(prepared) {
    require(program_ && program_->version() == growth.version() &&
                prompts.windows().version() == growth.version() && prepared.version() == growth.version(),
            "Growth dialogue dependencies must share a region");
    require(&party == &growth.party() && &random == &growth.random(),
            "Growth dialogue requires the producer's actual party and random owners");
    for (unsigned i = 0; i < messages_.size(); ++i) {
        const auto location = program_->resolve(growth.message_reference(static_cast<GrowthMessage>(i)));
        require(location.has_value(), "Growth dialogue message is absent from imported content");
        (void)program_->byte(*location);
        messages_[i] = *location;
    }
    const auto existing = prompts.windows().prepared_message();
    require(!existing || existing == &prepared, "Growth dialogue host has another prepared-message owner");
    // Neither host binding may survive a rejected construction. This checks
    // root output ownership/idle state and source stream admission read-only.
    dialogue::Conversation admission(program_, prompts_);
    admission.validate_start();
    prompts.windows().bind_party(party);
    prompts.windows().bind_prepared_message(prepared);
}
void GrowthDialogue::validate_dependencies() const {
    require(!failed_, "Growth dialogue execution was abandoned or failed");
    require(prompts_.windows().prepared_message() == &prepared_,
            "Growth dialogue lost its prepared-message owner");
}
GrowthDialogue::Operation::Operation(GrowthDialogue &owner, dialogue::Conversation *parent)
    : owner_(owner), parent_(parent), conversation_(owner.program_, owner.prompts_) {}
GrowthDialogue::Operation::~Operation() {
    if (owner_.active_ == this) {
        if (!complete_) owner_.failed_ = true;
        owner_.active_ = nullptr;
    }
}
void GrowthDialogue::Operation::validate_start() const {
    if (parent_) conversation_.validate_start_nested(*parent_);
    else conversation_.validate_start();
}
std::unique_ptr<GrowthDialogue::Operation> GrowthDialogue::begin(
    unsigned character, std::optional<std::uint32_t> amount, dialogue::Conversation *parent) {
    validate_dependencies();
    require(!active_, "Growth dialogue is already active");
    auto operation = std::unique_ptr<Operation>(new Operation(*this, parent));
    operation->validate_start();
    operation->growth_ = amount ? growth_.begin_experience(character, *amount) : growth_.begin_level_up(character);
    active_ = operation.get();
    return operation;
}
std::unique_ptr<GrowthDialogue::Operation> GrowthDialogue::begin_level_up(unsigned character) {
    return begin(character, {}, nullptr);
}
std::unique_ptr<GrowthDialogue::Operation> GrowthDialogue::begin_experience(unsigned character, std::uint32_t amount) {
    return begin(character, amount, nullptr);
}
std::unique_ptr<GrowthDialogue::Operation> GrowthDialogue::begin_level_up(
    unsigned character, dialogue::Conversation &parent) { return begin(character, {}, &parent); }
std::unique_ptr<GrowthDialogue::Operation> GrowthDialogue::begin_experience(
    unsigned character, std::uint32_t amount, dialogue::Conversation &parent) { return begin(character, amount, &parent); }
dialogue::Progress GrowthDialogue::Operation::advance(unsigned budget) {
    if (complete_) return dialogue::Progress::Finished;
    owner_.validate_dependencies();
    require(owner_.active_ == this, "Growth dialogue operation is not active");
    if (service_) return dialogue::Progress::Suspended;
    try {
        while (budget--) {
            validate_start();
            if (growth_->advance() == GrowthProgress::Complete) {
                complete_ = true;
                owner_.active_ = nullptr;
                return dialogue::Progress::Finished;
            }
            const auto &request = *growth_->request();
            if (request.kind == GrowthRequestKind::LevelUpMusic) {
                service_ = GrowthDialogueService::LevelUpMusic;
                return dialogue::Progress::Suspended;
            }
            if (request.kind == GrowthRequestKind::Message) {
                require(request.message.has_value(), "Growth message is missing its source kind");
                const auto location = owner_.messages_.at(static_cast<unsigned>(*request.message));
                require(owner_.program_->resolve(request.authored_message) == location,
                        "Growth producer changed its imported message identity");
                validate_start();
            } else {
                require(request.kind == GrowthRequestKind::PromptMode &&
                            request.timing == GrowthRequestTiming::Immediate && request.prompt_mode &&
                            !request.target_name && !request.number && !request.psi,
                        "Unexpected immediate growth request");
            }
            // Source LEVEL_UP_CHAR writes prompt1, name, CNUM, then DISPLAY_TEXT.
            // Later requests replace only their explicitly present fields.
            if (request.prompt_mode) owner_.prompts_.windows().output().policy().prompt_mode = *request.prompt_mode;
            if (request.target_name) {
                const auto &name = *request.target_name;
                require(name.length <= name.bytes.size() &&
                            name.clear_enemy_id == (owner_.growth_.version() == GameVersion::US),
                        "Invalid regional growth name copy");
                owner_.prepared_.copy_name(dialogue::PreparedName::Target,
                    std::span<const std::uint8_t>(name.bytes).first(name.length));
            }
            if (request.number) owner_.prepared_.set_number(*request.number);
            if (request.psi) owner_.prepared_.set_item(*request.psi);
            if (request.kind == GrowthRequestKind::Message) {
                const auto location = owner_.messages_.at(static_cast<unsigned>(*request.message));
                if (parent_) conversation_.start_nested(location, *parent_);
                else conversation_.start(location);
                service_ = GrowthDialogueService::Dialogue;
                return dialogue::Progress::Suspended;
            }
            growth_->respond();
        }
        return dialogue::Progress::BudgetExhausted;
    } catch (...) {
        owner_.failed_ = true;
        throw;
    }
}
const std::optional<GrowthDialogueService> &GrowthDialogue::Operation::service() const { return service_; }
dialogue::Conversation &GrowthDialogue::Operation::conversation() {
    owner_.validate_dependencies();
    require(service_ == GrowthDialogueService::Dialogue, "Growth dialogue has no pending conversation");
    return conversation_;
}
void GrowthDialogue::Operation::respond() {
    owner_.validate_dependencies();
    require(service_.has_value(), "Growth dialogue has no service to acknowledge");
    if (*service_ == GrowthDialogueService::Dialogue)
        require(conversation_.finished(), "Growth dialogue child has not finished");
    growth_->respond();
    service_.reset();
}
bool GrowthDialogue::Operation::complete() const { return complete_; }
unsigned GrowthDialogue::Operation::levels_gained() const { return growth_->levels_gained(); }
} // namespace eb::native::story
