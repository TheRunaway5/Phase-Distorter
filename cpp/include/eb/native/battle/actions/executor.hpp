#pragma once
#include "eb/native/battle/actions/resources.hpp"
#include "eb/native/battle/actions/rules.hpp"
#include "eb/native/battle/actions/special.hpp"
#include "eb/native/battle/dead_players.hpp"
#include "eb/native/battle/frame.hpp"
#include "eb/native/battle/shields.hpp"
#include "eb/native/battle/turn_scheduler.hpp"
#include "eb/native/party/inventory.hpp"
#include "eb/native_audio.hpp"
#include "eb/native/story/teddy_party.hpp"
#include "eb/native/world_food_status.hpp"
#include "eb/native/story/party_membership.hpp"

namespace eb::native::battle::actions {
// References to the actual encounter owners. These stay stable through every
// retained execution handle. Catalogs contain imported data, never executable
// source routines; gameplay dispatch is implemented by native C++ handlers.
struct Owners {
    Roster& roster;
    party::State& party;
    WorldPartyState& guests;
    ActionState& action;
    TurnState& turns;
    EncounterState& encounter;
    story::RandomState& random;
    story::TickState& clock;
    Names& names;
    TargetSelection& targets;
    Shields& shields;
    DeadPlayers& dead;
    story::Scene& scene;
    dialogue::WindowHost& windows;
    party::MeterWindows& meters;
    story::BattleDialogue& dialogue;
    Frame& frame;
    FrameState& frame_state;
    BattleBackgroundScene& background;
    PaletteEffects& palette_effects;
    PsiAnimation& psi;
    WorldSwirlState& swirl;
    NativeAudio& audio;
    party::Inventory& inventory;
    const ActionResources& actions;
    const dialogue::SubstitutionResources& items;
    const Resources& resources;
    SpecialOwners& special;
    story::TeddyParty& teddy;
    WorldFoodStatus& food_status;
};
enum class OutcomeRoute { NormalCheck, ForcedVictory, DirectWin, DirectEscape };
class Executor {
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
        bool complete() const noexcept;
        OutcomeRoute outcome() const;
    private:
        friend class Executor;
        struct Execution;
        explicit Operation(std::unique_ptr<Execution>);
        std::unique_ptr<Execution> execution_;
    };
    explicit Executor(Owners);
    ~Executor();
    Executor(const Executor&) = delete;
    Executor& operator=(const Executor&) = delete;
    // The scheduler has already published CURRENT_ATTACKER and marked its turn.
    std::unique_ptr<Operation> begin();
    // Direct complete action helper entry for real callers/reference probes;
    // this does not imply the main actor prefix or recovery was performed.
    std::unique_ptr<Operation> begin_action(Kind);
    bool uses(const Roster&, const party::State&, const ActionState&, const TurnState&,
              const EncounterState&, const story::Scene&, const dialogue::WindowHost&) const noexcept;
    bool busy() const noexcept;
    bool failed() const noexcept;
private:
    struct State;
    std::unique_ptr<State> state_;
    std::unique_ptr<Operation> begin(std::optional<Kind>);
};
} // namespace eb::native::battle::actions
