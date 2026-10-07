#include "eb/native/battle/outcomes.hpp"
#include <algorithm>
#include <bit>
#include <stdexcept>

namespace eb::native::battle {
std::shared_ptr<const OutcomeResources> OutcomeResources::import(
    std::span<const std::uint8_t> image, GameVersion version) {
    unsigned table, stride, defense;
    std::array<std::uint32_t, 5> messages;
    switch (version) {
    case GameVersion::US:
        table = 0x159589; stride = 94; defense = 58;
        messages = {0xef7a4d, 0xef79d7, 0xef7a14, 0xef7a28, 0xef7bdf}; break;
    case GameVersion::JP:
        table = 0x15a440; stride = 77; defense = 41;
        messages = {0xc747c1, 0xc7473e, 0xc74780, 0xc74798, 0xc74917}; break;
    default: throw std::invalid_argument("Unsupported outcome region");
    }
    if (table > image.size() || EnemyResources::count * stride > image.size() - table)
        throw std::invalid_argument("Truncated outcome enemy metadata");
    auto result = std::shared_ptr<OutcomeResources>(new OutcomeResources(version));
    for (unsigned i = 0; i < messages.size(); ++i)
        for (unsigned b = 0; b < 4; ++b)
            result->messages_[i][b] = std::uint8_t(messages[i] >> (b * 8));
    for (unsigned i = 0; i < EnemyResources::count; ++i) {
        const auto at = table + i * stride + defense;
        result->defense_[i] = std::uint16_t(image[at] | unsigned(image[at + 1]) << 8);
    }
    return result;
}
std::uint32_t deposit_into_atm(party::State& party, std::uint32_t amount) {
    // CLC before SBC implements signed(sum-limit-1)>=0. Preserve the wrapped
    // source sum and signed comparison even for deliberately high-bit inputs.
    const auto sum = std::uint32_t(party.bank_balance + amount);
    const auto next = std::bit_cast<std::int32_t>(sum) > 9999999 ? 9999999u : sum;
    const auto credited = std::uint32_t(next - party.bank_balance);
    party.bank_balance = next;
    return credited;
}
void reset_rolling(party::State& party, story::TickState& clock) {
    if (party.controlled_count > party.party_order.size())
        throw std::out_of_range("Meter reset exceeds actual party list");
    for (unsigned i = 0; i < party.controlled_count; ++i)
        (void)party.character(party.party_order[i]);
    for (unsigned i = 0; i < party.controlled_count; ++i) {
        auto& p = party.character(party.party_order[i]);
        if (p.afflictions[0] != 1 && p.current_hp == 0) p.target_hp = 1;
        if (p.hp_fraction && p.current_hp > p.target_hp) p.target_hp = p.current_hp;
        if (p.pp_fraction && p.current_pp > p.target_pp) p.target_pp = p.current_pp;
    }
    clock.fastest_hp_increase = 1;
}
bool meters_settled(party::State& party, story::TickState& clock) {
    if (party.controlled_count > party.party_order.size())
        throw std::out_of_range("Meter completion exceeds actual party list");
    for (unsigned i = 0; i < party.controlled_count; ++i) {
        const auto& p = party.character(party.party_order[i]);
        if (p.hp_fraction || p.pp_fraction || p.current_hp != p.target_hp || p.current_pp != p.target_pp)
            return false;
    }
    clock.fastest_hp_increase = 0;
    return true;
}
void reset_post_battle_stats(const Roster& roster, party::State& party) {
    for (unsigned i = 0; i < 6; ++i) {
        const auto& b = roster.at(i);
        if (b.consciousness && !b.side && !b.npc) {
            auto& p = party.character(unsigned(b.row) + 1);
            for (const auto group : {6, 4, 3, 2}) p.afflictions[group] = 0;
        }
    }
}
bool instant_win_check(InstantWinState& state, const party::State& party,
    const WorldEncounterState& encounter, const EnemyResources& enemies, const OutcomeResources& resources) {
    if (encounter.initiative == WorldBattleInitiative::EnemiesFirst) return false;
    if (party.version() != enemies.version() || party.version() != resources.version())
        throw std::invalid_argument("Instant-win catalogs have different regions");
    auto next = state;
    unsigned eligible = 0;
    std::uint16_t minimum_offense = 0xffff, minimum_speed = 0xffff;
    for (const auto id : party.party_order) {
        if (id < 1 || id > 4) continue;
        const auto& p = party.character(id);
        minimum_speed = std::min<std::uint16_t>(minimum_speed, p.speed);
        minimum_offense = std::min<std::uint16_t>(minimum_offense, p.offense);
        if ((p.afflictions[0] >= 1 && p.afflictions[0] <= 7) ||
            p.afflictions[1] == 1 || p.afflictions[1] == 2) continue;
        next.offense.at(eligible++) = p.offense;
    }
    if (encounter.roster.size() > eligible) { state = next; return false; }
    if (encounter.initiative == WorldBattleInitiative::Normal) {
        unsigned maximum_speed = 0;
        for (const auto id : encounter.roster) maximum_speed = std::max<unsigned>(maximum_speed, enemies.enemy(id).speed);
        state = next;
        if (minimum_speed < maximum_speed) return false;
        for (const auto id : encounter.roster)
            if (std::uint16_t(minimum_offense * 2) < std::uint16_t(enemies.enemy(id).hp + resources.enemy_defense(id)))
                return false;
        return true;
    }
    // The source's count-1 sort bounds underflow for zero counts and walk
    // unowned adjacent scratch. Do not invent a successful empty sorted list.
    if (!eligible || encounter.roster.empty())
        throw std::out_of_range("Instant-win sort requires actual nonempty source lists");
    for (unsigned i = 0; i < encounter.roster.size(); ++i) {
        next.hp.at(i) = enemies.enemy(encounter.roster[i]).hp;
        next.defense.at(i) = resources.enemy_defense(encounter.roster[i]);
    }
    for (unsigned i = 0; i < eligible; ++i)
        for (unsigned j = i + 1; j < eligible; ++j)
            if (next.offense[j] > next.offense[i]) std::swap(next.offense[i], next.offense[j]);
    for (unsigned i = 0; i < encounter.roster.size(); ++i)
        for (unsigned j = i + 1; j < encounter.roster.size(); ++j)
            if (next.hp[j] > next.hp[i]) {
                std::swap(next.hp[i], next.hp[j]); std::swap(next.defense[i], next.defense[j]);
            }
    unsigned enemy = 0;
    for (unsigned i = 0; i < eligible; ++i) {
        const auto attack = std::uint16_t(next.offense[i] * 2);
        if (attack >= std::uint16_t(next.hp[enemy] + next.defense[enemy])) {
            if (++enemy >= encounter.roster.size()) { state = next; return true; }
        } else next.hp[enemy] = std::uint16_t(next.hp[enemy] - std::uint16_t(attack - next.defense[enemy]));
    }
    state = next; return false;
}
} // namespace eb::native::battle
