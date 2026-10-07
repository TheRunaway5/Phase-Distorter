#pragma once

#include "eb/native/dialogue/conversation.hpp"
#include "eb/native/dialogue/prepared_message.hpp"
#include "eb/native/party/state.hpp"
#include "eb/native/story/input.hpp"

namespace eb::native::story {
// DISPLAY_IN_BATTLE_TEXT and DISPLAY_TEXT_WAIT against the shared game owners.
// A message stays pending while the real Scene drives its Conversation. The
// program, hosts, party, input, prepared state and this owner must outlive every
// operation, including completed handles. This module supplies no fake frames
// or completion of the Scene's remaining battle/audio requests.
class BattleDialogue {
public:
    class Operation {
    public:
        ~Operation();
        Operation(const Operation&) = delete;
        Operation& operator=(const Operation&) = delete;
        dialogue::Progress advance(unsigned work_budget = 4096);
        bool pending() const noexcept { return pending_; }
        dialogue::Conversation& conversation();
        // Clears the source prompt only after the actual child is finished.
        void respond();
        bool complete() const noexcept { return complete_; }
    private:
        friend class BattleDialogue;
        Operation(BattleDialogue&, dialogue::Location, std::optional<std::uint32_t>,
                  dialogue::Conversation*);
        BattleDialogue& owner_;
        dialogue::Location location_;
        std::optional<std::uint32_t> number_;
        dialogue::Conversation* parent_{};
        dialogue::Conversation conversation_;
        bool pending_{}, complete_{}, raw_{};
    };
    BattleDialogue(std::shared_ptr<const dialogue::Program>, dialogue::PromptHost&,
                   dialogue::PreparedMessage&, party::State&, const InputState&);
    BattleDialogue(const BattleDialogue&) = delete;
    BattleDialogue& operator=(const BattleDialogue&) = delete;
    BattleDialogue(BattleDialogue&&) = delete;
    BattleDialogue& operator=(BattleDialogue&&) = delete;
    // DISPLAY_TEXT with no battle wrapper writes: its caller owns prompt mode.
    std::unique_ptr<Operation> begin_raw(dialogue::Location);
    std::unique_ptr<Operation> begin_text(dialogue::Location);
    std::unique_ptr<Operation> begin_text(dialogue::Location, dialogue::Conversation& parent);
    std::unique_ptr<Operation> begin_number(dialogue::Location, std::uint32_t);
    std::unique_ptr<Operation> begin_number(dialogue::Location, std::uint32_t,
                                           dialogue::Conversation& parent);
    // Read-only producer preflight. No output ownership is acquired here.
    void validate_start() const;
    void validate_start_nested(dialogue::Conversation&) const;
    dialogue::Location resolve(const dialogue::ReferenceKey&) const;
    GameVersion version() const noexcept { return party_.version(); }
    const party::State& party() const noexcept { return party_; }
    bool uses(const dialogue::WindowHost& windows, const InputState& input) const noexcept {
        return &prompts_.windows() == &windows && &input_ == &input;
    }
    dialogue::PreparedMessage& prepared() noexcept { return prepared_; }
    const dialogue::PreparedMessage& prepared() const noexcept { return prepared_; }
    bool busy() const noexcept { return active_ != nullptr; }
    bool failed() const noexcept { return failed_; }
private:
    std::shared_ptr<const dialogue::Program> program_;
    dialogue::PromptHost& prompts_;
    dialogue::PreparedMessage& prepared_;
    party::State& party_;
    const InputState& input_;
    Operation* active_{};
    bool failed_{};
    void check() const;
    std::unique_ptr<Operation> begin(dialogue::Location, std::optional<std::uint32_t>,
                                      dialogue::Conversation*);
};
} // namespace eb::native::story
