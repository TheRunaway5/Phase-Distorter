#pragma once
#include "eb/native/battle/startup.hpp"
#include "eb/native/battle/rounds.hpp"
#include "eb/native/battle/outcomes.hpp"
#include "eb/native/battle/actions/executor.hpp"
#include "eb/native/battle/menu/command.hpp"

namespace eb::native::battle {
// The actual ordinary BATTLE_ROUTINE lifecycle. Menu input, combat actions,
// status recovery, outcome text/rewards and final display teardown execute in
// their native owners. INIT_BATTLE caller world restoration follows result().
// The existing Scene supplies actual host publication/input/audio services.
class Encounter {
public:
    class Operation {
    public:
        ~Operation();
        Operation(const Operation&) = delete;
        Operation& operator=(const Operation&) = delete;
        dialogue::Progress advance(unsigned work_budget = 4096);
        story::Scene::Operation* scene() noexcept;
        story::PartyFormation::Operation* party_update() noexcept;
        story::TeddyParty::Operation* teddy_update() noexcept;
        story::PartyMembership::Operation* membership_update() noexcept;
        // Only actual audio playback can release this menu service.
        CommandMenu::Operation* menu_audio() noexcept;
        bool complete() const noexcept { return complete_; }
        std::uint16_t result() const;
    private:
        friend class Encounter;
        explicit Operation(Encounter&);
        Encounter& owner_;
        unsigned phase_{};
        bool complete_{};
        std::uint16_t result_{};
        std::unique_ptr<Startup::Operation> startup_;
        std::unique_ptr<Rounds::Operation> round_;
        std::unique_ptr<CommandMenu::Operation> menu_;
        std::unique_ptr<actions::Executor::Operation> action_;
        std::unique_ptr<Outcomes::Operation> outcome_;
    };
    Encounter(Admission&, Startup&, Rounds&, CommandMenu&, actions::Executor&,
              Outcomes&, story::Scene&, dialogue::WindowHost&);
    Encounter(const Encounter&) = delete;
    Encounter& operator=(const Encounter&) = delete;
    std::unique_ptr<Operation> begin();
    bool busy() const noexcept { return active_ != nullptr; }
    bool failed() const noexcept { return failed_; }
private:
    Admission& admission_;
    Startup& startup_;
    Rounds& rounds_;
    CommandMenu& menu_;
    actions::Executor& actions_;
    Outcomes& outcomes_;
    story::Scene& scene_;
    dialogue::WindowHost& windows_;
    Operation* active_{};
    bool failed_{};
};
} // namespace eb::native::battle
