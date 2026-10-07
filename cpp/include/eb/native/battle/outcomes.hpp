#pragma once

#include "eb/native/battle/dead_players.hpp"
#include "eb/native/battle/background_loader.hpp"
#include "eb/native/battle/turn_scheduler.hpp"
#include "eb/native/story/growth_dialogue.hpp"

namespace eb::native { class PeripheralState; }

namespace eb::native::battle {
enum class OutcomeMessage { Defeat, Victory, BossVictory, InstantVictory, Present };
class OutcomeResources {
public:
    static std::shared_ptr<const OutcomeResources> import(std::span<const std::uint8_t>, GameVersion);
    GameVersion version() const noexcept { return version_; }
    const dialogue::ReferenceKey& message(OutcomeMessage m) const { return messages_.at(unsigned(m)); }
    std::uint16_t enemy_defense(unsigned enemy) const { return defense_.at(enemy); }
private:
    explicit OutcomeResources(GameVersion v) : version_(v) {}
    GameVersion version_;
    std::array<dialogue::ReferenceKey, 5> messages_{};
    std::array<std::uint16_t, EnemyResources::count> defense_{};
};
// The original sorted work arrays retain their tails between checks. They
// belong to instant-win admission, independently of the live battler records.
struct InstantWinState {
    std::array<std::uint16_t, 4> offense{}, hp{}, defense{};
};
bool instant_win_check(InstantWinState&, const party::State&, const WorldEncounterState&,
                       const EnemyResources&, const OutcomeResources&);
std::uint32_t deposit_into_atm(party::State&, std::uint32_t amount);
void reset_rolling(party::State&, story::TickState&);
bool meters_settled(party::State&, story::TickState&);
void reset_post_battle_stats(const Roster&, party::State&);
// C4954C writes the complete packed target into BUFFER, preserving its tail.
// Style50 copies raw bit15; other styles produce RGB5. No upload is requested.
void prepare_palette_brightness(PsiScratch&, const PaletteBankState&, std::uint16_t style,
                                PeripheralState* = nullptr);
// C496E7/C426ED/C49740 operate on the same BUFFER used by graphics. The
// original channel accumulators and retained slope bytes remain observable.
void prepare_palette_transition(PsiScratch&, const PaletteBankState&, std::uint16_t divisor,
                                std::uint16_t mask);
void advance_palette_transition(PsiScratch&, PaletteBankState&);
void finish_palette_transition(const PsiScratch&, PaletteBankState&);

struct InstantVictoryContext {
    const EncounterResources& resources;
    story::RandomState& random;
    PaletteBankState& colors;
    PsiScratch& scratch;
    FrameDisplay& frames;
    WorldSwirlState& swirl;
    WorldEncounterVisualState& visual;
    npcs::Interactions& interactions;
    // Executes the actual C06A07 sector selection and music adapter. Bicycle
    // music is selected directly from the live interaction walking style.
    std::function<void()> restore_sector_music;
};

// Paths selected by the actual per-actor source continuation. Direct paths
// skip outcome dialogue/rewards but still require begin_finish's full teardown.
enum class OutcomeRoute { NormalCheck, ForcedVictory, DirectWin, DirectEscape };
struct OutcomeResult {
    bool finished{};
    // Source result0 includes an ordinary successful flee; result2 is the
    // distinct SPECIAL_DEFEAT=1 exit, not the menu's run-away result.
    std::uint16_t value{};
};
class Outcomes {
public:
    class Operation {
    public:
        ~Operation();
        Operation(const Operation&) = delete;
        Operation& operator=(const Operation&) = delete;
        dialogue::Progress advance(unsigned work_budget = 4096);
        story::Scene::Operation* scene() noexcept;
        story::PartyFormation::Operation* party_update() noexcept;
        bool complete() const noexcept { return complete_; }
        OutcomeResult result() const;
    private:
        friend class Outcomes;
        Operation(Outcomes&, OutcomeRoute, bool finish, std::uint16_t result);
        enum class Child { Tick, Window, Meters, Dialogue, Growth, Blank };
        bool pump(unsigned);
        void text(OutcomeMessage, std::optional<std::uint32_t> = {});
        Outcomes& owner_;
        OutcomeRoute route_;
        bool finish_{}, complete_{};
        bool instant_{};
        OutcomeResult result_;
        unsigned phase_{}, slot_{};
        std::optional<Child> child_;
        std::unique_ptr<story::Scene::Operation> scene_;
        std::unique_ptr<dialogue::WindowHost::Operation> window_;
        std::unique_ptr<party::MeterWindows::Operation> meters_;
        std::unique_ptr<story::BattleDialogue::Operation> text_;
        std::unique_ptr<story::GrowthDialogue::Operation> growth_;
        std::unique_ptr<DeadPlayers::Operation> dead_;
    };
    Outcomes(std::shared_ptr<const OutcomeResources>, Roster&, party::State&,
             WorldEncounterState&, EncounterState&, TurnState&, BattleBackgroundScene&,
             story::TickState&, dialogue::WindowHost&, party::MeterWindows&,
             story::BattleDialogue&, story::GrowthDialogue&, DeadPlayers&, story::Scene&,
             Frame&, DisplaySetup&, WorldDisplayFade&, WorldEncounterMusic);
    Outcomes(const Outcomes&) = delete;
    Outcomes& operator=(const Outcomes&) = delete;
    // Complete @UNKNOWN225..235 outcome phase; NormalCheck can report unfinished.
    std::unique_ptr<Operation> begin_check(OutcomeRoute = OutcomeRoute::NormalCheck);
    // Complete @UNKNOWN237..244, returning only when the real battle teardown
    // has finished. INIT_BATTLE_COMMON's UPDATE_PARTY/world reload follows it.
    std::unique_ptr<Operation> begin_finish(std::uint16_t result);
    void bind_instant_victory(InstantVictoryContext&);
    std::unique_ptr<Operation> begin_instant_victory();
    bool busy() const noexcept { return active_ != nullptr; }
    bool failed() const noexcept { return failed_; }
    bool uses(const Roster&, const party::State&, const WorldEncounterState&, const EncounterState&,
              const TurnState&, const story::Scene&, const dialogue::WindowHost&) const noexcept;
private:
    void validate() const;
    std::unique_ptr<Operation> begin(OutcomeRoute, bool finish, std::uint16_t);
    unsigned count(unsigned side) const;
    std::shared_ptr<const OutcomeResources> resources_;
    Roster& roster_;
    party::State& party_;
    WorldEncounterState& encounter_;
    EncounterState& state_;
    TurnState& turns_;
    BattleBackgroundScene& background_;
    story::TickState& clock_;
    dialogue::WindowHost& windows_;
    party::MeterWindows& meters_;
    story::BattleDialogue& dialogue_;
    story::GrowthDialogue& growth_;
    DeadPlayers& dead_;
    story::Scene& scene_;
    Frame& frame_;
    DisplaySetup& blank_;
    WorldDisplayFade& fade_;
    WorldEncounterMusic music_;
    InstantVictoryContext* instant_{};
    Operation* active_{};
    bool failed_{};
};
} // namespace eb::native::battle
