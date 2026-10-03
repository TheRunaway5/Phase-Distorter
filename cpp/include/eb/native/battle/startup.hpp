#pragma once
#include "eb/native/battle/admission.hpp"
#include "eb/native/battle/formation.hpp"
#include "eb/native/battle/names.hpp"
#include "eb/native/battle/startup_graphics.hpp"
#include "eb/native/story/battle_dialogue.hpp"
#include "eb/native/story/battle_publication.hpp"

namespace eb::native::battle {
// Complete admitted encounter startup through closing its opening dialogue.
// The command/turn owner resumes at the first round. The existing Scene drives
// all actual child frames, input, windows and conversations; no service is
// declared complete by this coordinator merely because it was requested.
class Startup {
public:
    class Operation {
    public:
        ~Operation();
        Operation(const Operation&) = delete;
        Operation& operator=(const Operation&) = delete;
        dialogue::Progress advance(unsigned work_budget = 4096);
        // Only present while a real Scene child is executing. Its own service
        // determines the required frame/input/audio/actor work.
        story::Scene::Operation* scene() noexcept { return scene_.get(); }
        bool complete() const noexcept { return complete_; }
    private:
        friend class Startup;
        explicit Operation(Startup&);
        enum class Child { ResetBlank, RetainBlank, Window, Meters, Dialogue };
        void text(const dialogue::ReferenceKey&);
        bool pump_children(unsigned);
        Startup& owner_;
        unsigned phase_{}, enemy_{}, status_{};
        BattleBackgroundPair background_;
        bool complete_{};
        std::optional<Child> child_;
        std::unique_ptr<story::Scene::Operation> scene_;
        std::unique_ptr<dialogue::WindowHost::Operation> window_;
        std::unique_ptr<party::MeterWindows::Operation> meters_;
        std::unique_ptr<story::BattleDialogue::Operation> dialogue_;
    };
    Startup(Admission&, StartupGraphics&, BackgroundLoader&, DisplaySetup&,
            const BattleCombatants&, BattleCombatantScene&, Frame&,
            PaletteBankState&, WorldDisplayFade&, dialogue::WindowHost&,
            party::MeterWindows&, Names&, story::BattleDialogue&, story::Scene&,
            story::BattlePublication&, WorldEncounterMusic,
            AnimationCommands* = nullptr);
    Startup(const Startup&) = delete;
    Startup& operator=(const Startup&) = delete;
    std::unique_ptr<Operation> begin();
    bool busy() const noexcept { return active_ != nullptr; }
    bool failed() const noexcept { return failed_; }
private:
    void validate() const;
    Admission& admission_;
    StartupGraphics& graphics_;
    BackgroundLoader& background_;
    DisplaySetup& blank_;
    const BattleCombatants& catalog_;
    BattleCombatantScene& objects_;
    Frame& frame_;
    PaletteBankState& colors_;
    WorldDisplayFade& fade_;
    dialogue::WindowHost& windows_;
    party::MeterWindows& meters_;
    Names& names_;
    story::BattleDialogue& dialogue_;
    story::Scene& scene_;
    story::BattlePublication& publication_;
    WorldEncounterMusic music_;
    AnimationCommands* animations_;
    Operation* active_{};
    bool failed_{};
};
} // namespace eb::native::battle
