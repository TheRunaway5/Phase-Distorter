#pragma once
#include "eb/native/battle/action_state.hpp"
#include "eb/native/battle/encounter_resources.hpp"
#include "eb/native/battle/encounter_state.hpp"
#include "eb/native/battle/frame.hpp"
#include "eb/native/battle/roster.hpp"
#include "eb/native/world_party.hpp"

namespace eb::native::battle {
struct TurnState;
// Native BATTLE_ROUTINE roster/admission/drop producers, in source order.
// Graphics and its width admission run between the explicit phases; startup
// orchestrates them against the same owners, never reconstructing a count.
class Admission {
public:
    Admission(std::shared_ptr<const EncounterResources>, Roster&, party::State&,
              const WorldPartyState&, WorldEncounterState&, dialogue::State&,
              ActionState&, EncounterState&, FrameState&, TurnState&, story::RandomState&, story::TickState&);
    Admission(const Admission&) = delete;
    Admission& operator=(const Admission&) = delete;
    GameVersion version() const noexcept { return resources_->version(); }
    void validate() const;
    void reset();
    void initialize_party();
    void initialize_enemies(unsigned admitted_count);
    void augment_party();
    void choose_item_drop();
    void consume_initiative();
    const EncounterResources& resources() const noexcept { return *resources_; }
    WorldEncounterState& encounter() noexcept { return encounter_; }
    const WorldEncounterState& encounter() const noexcept { return encounter_; }
    ActionState& action() noexcept { return action_; }
    EncounterState& state() noexcept { return state_; }
    const party::State& party() const noexcept { return party_; }
    Roster& roster() noexcept { return roster_; }
    story::RandomState& random() noexcept { return random_; }
    TurnState& turns() noexcept { return turns_; }
    story::TickState& clock() noexcept { return clock_; }
    bool uses(const Roster&, const party::State&, const ActionState&, const FrameState&) const noexcept;
private:
    std::shared_ptr<const EncounterResources> resources_;
    Roster& roster_;
    party::State& party_;
    const WorldPartyState& formation_;
    WorldEncounterState& encounter_;
    dialogue::State& dialogue_;
    ActionState& action_;
    EncounterState& state_;
    FrameState& frame_;
    TurnState& turns_;
    story::RandomState& random_;
    story::TickState& clock_;
};
} // namespace eb::native::battle
