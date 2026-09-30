#pragma once

#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/prepared_message.hpp"
#include "eb/native/visible_character_growth.hpp"

namespace eb::native::story {
enum class GrowthDialogueService { Dialogue, LevelUpMusic };

// Connects real visible growth requests to the shared prepared-message state
// and an actual Conversation. The party, RNG, producer, prompt/window hosts,
// prepared owner and this coordinator must remain alive and at stable addresses
// until all operations have been destroyed. Authored content is imported.
class GrowthDialogue {
public:
    class Operation {
    public:
        ~Operation();
        Operation(const Operation &) = delete;
        Operation &operator=(const Operation &) = delete;
        // Scheduling and immediate producer writes only. Dialogue stays pending
        // while the existing Scene (or another real host) drives conversation().
        // Budget exhaustion does not create a world/audio callback.
        dialogue::Progress advance(unsigned work_budget = 4096);
        const std::optional<GrowthDialogueService> &service() const;
        // The live child, including its real typed events. Pass it to
        // Scene::begin, or Scene::begin_nested with the actual actor parent.
        dialogue::Conversation &conversation();
        // Dialogue requires the child to have finished. Music acknowledges the
        // actual CHANGE_MUSIC(6) service; this class does not simulate playback.
        void respond();
        bool complete() const;
        unsigned levels_gained() const;
    private:
        friend class GrowthDialogue;
        Operation(GrowthDialogue &, dialogue::Conversation *parent);
        GrowthDialogue &owner_;
        dialogue::Conversation *parent_{};
        dialogue::Conversation conversation_;
        std::unique_ptr<VisibleCharacterGrowth::Operation> growth_;
        std::optional<GrowthDialogueService> service_;
        bool complete_{};
        void validate_start() const;
    };

    // Explicit shared owners are identity-checked against the producer. This
    // binds the existing window host to that party/prepared owner; it does not
    // copy either owner's values. Every growth message reference is validated
    // before an operation can mutate the party or presentation state.
    GrowthDialogue(VisibleCharacterGrowth &, std::shared_ptr<const dialogue::Program>,
                   dialogue::PromptHost &, dialogue::PreparedMessage &,
                   const party::State &, const RandomState &);
    GrowthDialogue(const GrowthDialogue &) = delete;
    GrowthDialogue &operator=(const GrowthDialogue &) = delete;
    GrowthDialogue(GrowthDialogue &&) = delete;
    GrowthDialogue &operator=(GrowthDialogue &&) = delete;
    std::unique_ptr<Operation> begin_level_up(unsigned character);
    std::unique_ptr<Operation> begin_experience(unsigned character, std::uint32_t amount);
    // Parent must be suspended at a genuine callback and outlive the operation.
    // Every child message uses the same parent's existing activation. Merely
    // having unfinished output, an audio event or a budget yield is not enough.
    std::unique_ptr<Operation> begin_level_up(unsigned character, dialogue::Conversation &parent);
    std::unique_ptr<Operation> begin_experience(unsigned character, std::uint32_t amount,
                                               dialogue::Conversation &parent);
    bool busy() const noexcept { return active_ != nullptr; }
    // Abandoned/failed work cannot be restarted on this coordinator. Already
    // applied growth and source scratch writes are not rolled back or replayed.
    bool failed() const noexcept { return failed_; }
private:
    VisibleCharacterGrowth &growth_;
    std::shared_ptr<const dialogue::Program> program_;
    dialogue::PromptHost &prompts_;
    dialogue::PreparedMessage &prepared_;
    std::array<dialogue::Location, 11> messages_{};
    Operation *active_{};
    bool failed_{};
    void validate_dependencies() const;
    std::unique_ptr<Operation> begin(unsigned, std::optional<std::uint32_t>, dialogue::Conversation *);
};
} // namespace eb::native::story
