#include "eb/native/battle/grammar.hpp"
#include "eb/native/party/queries.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::battle {
std::uint16_t grammar(const Roster& roster, const party::State& party,
    const ActionState& action, bool target, std::uint8_t operand) {
    if (roster.version() != GameVersion::US || party.version() != roster.version())
        throw std::logic_error("Battle grammar belongs to the US dialogue tree");
    const auto selected = target ? action.target : action.attacker;
    if (!selected) throw std::logic_error("Battle grammar requires its actual selector");
    const auto& b = roster.at(*selected);
    if (operand == 1)
        return b.side == 1 ? roster.resources().enemy(b.id).gender : b.id == 2 ? 2 : 1;
    const auto count = b.side == 1 ? action.enemy_count : party::Queries(party).conscious_count();
    return std::min<std::uint16_t>(count, 3);
}
} // namespace eb::native::battle
