#pragma once
#include "eb/native/battle/admission.hpp"
#include "eb/native/battle/dead_players.hpp"
#include "eb/native/battle/turn_scheduler.hpp"

namespace eb::native::battle {
enum class CommandOutcome { Ready, Escaped, PartyDefeated, RestartBattle, CancelBattle };
struct CommandMenuRequest {
    unsigned party_list_index{}, character{}, selected_count{};
};
// Connects scheduling to actual CHECK_DEAD_PLAYERS, regional meter-selection
// waits, windows and battle messages. Command menus supply their genuine result
// through submit_menu; action execution starts only after begin_actor finishes.
// Neither interface acknowledges an unexecuted menu or combat action.
class Rounds {
public:
    class Operation {
    public:
        ~Operation();
        Operation(const Operation&) = delete;
        Operation& operator=(const Operation&) = delete;
        dialogue::Progress advance(unsigned work_budget = 4096);
        story::Scene::Operation* scene() noexcept;
        story::PartyFormation::Operation* party_update() noexcept;
        const std::optional<CommandMenuRequest>& menu() const noexcept { return menu_; }
        void submit_menu(std::uint16_t returned_action, BattleMenuSelection, std::uint8_t item_used);
        bool complete() const noexcept { return complete_; }
        CommandOutcome command_outcome() const;
        const ActorSelection& actor() const;
        bool action_permitted() const;
    private:
        friend class Rounds;
        Operation(Rounds&, bool commands);
        enum class Child { Window, Meters, Dialogue };
        void text(EncounterMessage);
        bool pump(unsigned);
        Rounds& owner_;
        unsigned phase_{};
        bool commands_{}, complete_{}, permitted_{};
        std::uint16_t returned_action_{};
        CommandOutcome outcome_ = CommandOutcome::Ready;
        ActorSelection actor_;
        std::optional<CommandMenuRequest> menu_;
        std::optional<Child> child_;
        std::unique_ptr<story::Scene::Operation> scene_;
        std::unique_ptr<dialogue::WindowHost::Operation> window_;
        std::unique_ptr<party::MeterWindows::Operation> meters_;
        std::unique_ptr<story::BattleDialogue::Operation> dialogue_;
        std::unique_ptr<DeadPlayers::Operation> dead_;
    };
    Rounds(Admission&, TurnScheduler&, DeadPlayers&, story::Scene&, dialogue::WindowHost&,
           party::MeterWindows&, story::BattleDialogue&);
    Rounds(const Rounds&) = delete;
    Rounds& operator=(const Rounds&) = delete;
    std::unique_ptr<Operation> begin_commands();
    std::unique_ptr<Operation> begin_actor();
    bool busy() const noexcept { return active_ != nullptr; }
    bool failed() const noexcept { return failed_; }
    bool uses(const Admission& admission, const story::Scene& scene,
              const dialogue::WindowHost& windows) const noexcept {
        return &admission == &admission_ && &scene == &scene_ && &windows == &windows_;
    }
private:
    std::unique_ptr<Operation> begin(bool commands);
    Admission& admission_;
    TurnScheduler& scheduler_;
    DeadPlayers& dead_;
    story::Scene& scene_;
    dialogue::WindowHost& windows_;
    party::MeterWindows& meters_;
    story::BattleDialogue& dialogue_;
    Operation* active_{};
    bool failed_{};
};
} // namespace eb::native::battle
