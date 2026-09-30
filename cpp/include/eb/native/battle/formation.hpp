#pragma once

#include "eb/native/battle/roster.hpp"
#include "eb/native/battle_formation.hpp"

namespace eb::native::battle {
// Engine bridge: a prepared original formation applies to the authoritative
// roster, moving complete records and preserving raw non-layout fields.
// Borrowed roster and random owners must remain stable until apply returns.
class Formation {
public:
    Formation(Roster&, unsigned battle, unsigned enemy_count, const BattleCombatants&,
              std::span<const BattleCombatantResource>, story::RandomState&);
    BattleFormationOutcome outcome() const { return plan_.outcome(); }
    const std::array<std::uint16_t, 2>& row_widths() const { return plan_.row_widths(); }
    unsigned random_draws() const { return plan_.random_draws(); }
    bool applied() const { return plan_.applied(); }
    void apply();
private:
    static BattleFormationRecord project(const Roster::Record&);
    static BattleFormationRecords project(const Roster&);
    Roster& roster_;
    unsigned battle_, enemy_count_;
    story::RandomState& random_;
    BattleFormationPlan plan_;
};
} // namespace eb::native::battle
