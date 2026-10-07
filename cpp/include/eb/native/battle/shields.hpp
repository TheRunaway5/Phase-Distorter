#pragma once

#include "eb/native/battle/action_resources.hpp"
#include "eb/native/battle/names.hpp"
#include "eb/native/story/battle_dialogue.hpp"

namespace eb::native::battle {
// Complete PSI_SHIELD_NULLIFY / WEAKEN_SHIELD continuations. All records,
// selectors, flags and prepared text are the caller's real shared owners.
// An operation retains its current real battle message until it has finished;
// later source selector reads deliberately see mutations made during dialogue.
class Shields {
public:
    class Operation {
    public:
        ~Operation();
        Operation(const Operation&) = delete;
        Operation& operator=(const Operation&) = delete;
        dialogue::Progress advance(unsigned work_budget = 4096);
        bool pending() const noexcept { return message_ != nullptr; }
        dialogue::Conversation& conversation();
        void respond();
        bool complete() const noexcept { return complete_; }
        // PSI_SHIELD_NULLIFY's actual return value. WEAKEN_SHIELD is void.
        bool nullified() const;
    private:
        friend class Shields;
        Operation(Shields&, bool weaken, dialogue::Conversation*);
        enum class Phase { Start, Reflected, Absorbed, AbsorbOff, WeakenOff } phase_{};
        Shields& owner_;
        dialogue::Conversation* parent_{};
        std::unique_ptr<story::BattleDialogue::Operation> message_;
        bool weaken_{}, complete_{}, nullified_{};
        void validate_start() const;
        void message(ShieldMessage);
        bool decrement();
        void finish(bool = false);
    };
    Shields(ActionState&, Roster&, Names&, story::BattleDialogue&,
            std::shared_ptr<const ActionResources>);
    Shields(const Shields&) = delete;
    Shields& operator=(const Shields&) = delete;
    Shields(Shields&&) = delete;
    Shields& operator=(Shields&&) = delete;
    std::unique_ptr<Operation> begin_nullify();
    std::unique_ptr<Operation> begin_nullify(dialogue::Conversation& parent);
    std::unique_ptr<Operation> begin_weaken();
    std::unique_ptr<Operation> begin_weaken(dialogue::Conversation& parent);
    bool busy() const noexcept { return active_ != nullptr; }
    bool failed() const noexcept { return failed_ || dialogue_.failed(); }
    bool uses(const ActionState& state, const Roster& roster, const Names& names,
              const story::BattleDialogue& dialogue, const ActionResources& resources) const noexcept {
        return &state_ == &state && &roster_ == &roster && &names_ == &names &&
               &dialogue_ == &dialogue && resources_.get() == &resources;
    }
private:
    ActionState& state_;
    Roster& roster_;
    Names& names_;
    story::BattleDialogue& dialogue_;
    std::shared_ptr<const ActionResources> resources_;
    std::array<dialogue::Location, 3> messages_{};
    Operation* active_{};
    bool failed_{};
    void check() const;
    Battler& attacker();
    Battler& target();
    std::unique_ptr<Operation> begin(bool, dialogue::Conversation*);
};
} // namespace eb::native::battle
