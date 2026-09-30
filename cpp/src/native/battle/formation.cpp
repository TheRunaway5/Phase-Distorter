#include "eb/native/battle/formation.hpp"

namespace eb::native::battle {
BattleFormationRecord Formation::project(const Roster::Record& record) {
    const auto& b = record.value;
    return {record.identity, b.id, b.sprite, b.label, b.row, b.resource, b.x, b.y,
            b.consciousness != 0, b.side == 1};
}
BattleFormationRecords Formation::project(const Roster& roster) {
    BattleFormationRecords result;
    for (unsigned i = 0; i < result.size(); ++i) result[i] = project(roster.records_[i + 8]);
    return result;
}
Formation::Formation(Roster& roster, unsigned battle, unsigned enemy_count,
                     const BattleCombatants& content,
                     std::span<const BattleCombatantResource> resources, story::RandomState& random)
    : roster_(roster), battle_(battle), enemy_count_(enemy_count), random_(random),
      plan_(prepare_battle_formation(roster.version(), battle, enemy_count,
                                    project(roster), content, resources, random)) {}
void Formation::apply() {
    plan_.apply(std::span<Roster::Record, 24>(roster_.records_.data() + 8, 24),
                enemy_count_, battle_, random_,
                [](const Roster::Record& r) { return project(r); },
                [](Roster::Record& r, const BattleFormationRecord& p) noexcept {
                    // All other raw fields moved with their complete record.
                    auto& b = r.value;
                    b.label = p.label; b.row = p.row;
                    b.resource = p.resource; b.x = p.x; b.y = p.y;
                });
}
} // namespace eb::native::battle
