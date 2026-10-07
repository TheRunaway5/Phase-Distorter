// Original battle helpers: 25_percent_variance, success_255/500/speed/luck40/
// luck80, determine_dodge, calc_psi_*_modifiers, *crease_*_16th, inflict_status,
// set_hp/pp, reduce_hp/pp, LOSE_HP_STATUS and C2BCB9.
#include "eb/native/battle/actions/rules.hpp"
#include "eb/native/battle/target_selection.hpp"
#include "eb/native/world_party.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::battle::actions {
std::uint16_t variance25(story::RandomState& random, std::uint16_t value) {
    const auto first = story::next_random(random), second = story::next_random(random);
    const auto distance = [](unsigned byte) { return byte < 128 ? 128 - byte : byte - 128; };
    const auto selected = distance(first) <= distance(second) ? first : second;
    const auto change = ((distance(selected) * value) >> 8) >> 1;
    return std::uint16_t(selected < 128 ? value - change : value + change);
}
bool success255(story::RandomState& random, std::uint16_t chance) {
    return story::next_random(random) < std::uint8_t(chance);
}
bool success500(story::RandomState& random, std::uint16_t chance) {
    return random_limit(random, 500) < chance;
}
bool success_speed(story::RandomState& random, const Battler& attacker,
                   const Battler& target, std::uint16_t limit) {
    const auto twice = std::uint16_t(target.speed * 2);
    const auto threshold = twice >= attacker.speed ? twice - attacker.speed : 0;
    return random_limit(random, limit) >= threshold;
}
bool success_luck40(story::RandomState& random, const Battler& target) {
    return random_limit(random, 40) >= target.luck;
}
bool success_luck80(story::RandomState& random, const Battler& target) {
    return random_limit(random, 80) >= target.luck;
}
bool dodge(story::RandomState& random, const Battler& attacker, const Battler& target) {
    if (target.afflictions[0] == 3 || target.afflictions[2] == 1 ||
        target.afflictions[2] == 3 || target.afflictions[2] == 4)
        return false;
    const auto difference = std::uint16_t(target.speed * 2 - attacker.speed);
    // Source's 0 - difference - 1 comparison accepts all nonnegative signed
    // differences, including zero, whose failed trial still consumes RAND.
    if (difference & 0x8000)
        return false;
    return success500(random, difference);
}
std::uint8_t damage_modifier(std::uint16_t level) {
    constexpr std::uint8_t values[] = {255, 179, 102, 13};
    const auto byte = std::uint8_t(level);
    return byte < 4 ? values[byte] : byte;
}
std::uint8_t status_modifier(std::uint16_t level) {
    constexpr std::uint8_t values[] = {255, 128, 26, 0};
    const auto byte = std::uint8_t(level);
    return byte < 4 ? values[byte] : byte;
}
namespace {
void increase(std::uint16_t& value, std::uint8_t base) {
    value = std::min(std::uint16_t(value + std::max(value >> 4, 1)),
                     std::uint16_t(unsigned(base) * 5 / 4));
}
void decrease(std::uint16_t& value, std::uint8_t base) {
    value = std::max(std::uint16_t(value - std::max(value >> 4, 1)),
                     std::uint16_t(unsigned(base) * 3 / 4));
}
}
void increase_offense(Battler& actor) { increase(actor.offense, actor.base_offense); }
void increase_defense(Battler& actor) { increase(actor.defense, actor.base_defense); }
void decrease_offense(Battler& actor) { decrease(actor.offense, actor.base_offense); }
void decrease_defense(Battler& actor) { decrease(actor.defense, actor.base_defense); }
bool inflict(Battler& target, unsigned group, std::uint16_t status) {
    if (target.npc)
        return false;
    if (group >= target.afflictions.size())
        throw std::invalid_argument("Status group leaves the owned battler afflictions");
    auto& current = target.afflictions[group];
    if (current && current <= status)
        return false;
    current = std::uint8_t(status);
    return true;
}
Meters::Meters(Roster& roster, party::State& party, WorldPartyState& guests)
    : roster_(roster), party_(party), guests_(guests) {
    if (roster.version() != party.version())
        throw std::invalid_argument("Battle meter owners have different regions");
}
bool Meters::uses(const Roster& roster, const party::State& party,
                  const WorldPartyState& guests) const noexcept {
    return &roster_ == &roster && &party_ == &party && &guests_ == &guests;
}
void Meters::validate(unsigned slot, bool hp) const {
    const auto& actor = roster_.at(slot);
    if (actor.side)
        return;
    if (!actor.npc)
        (void)party_.character(unsigned(actor.row) + 1);
    else if (hp && actor.row > 1)
        throw std::invalid_argument("Guest HP row leaves the two owned source words");
}
void Meters::set_hp(unsigned slot, std::uint16_t value) {
    validate(slot, true);
    auto& actor = roster_.at(slot);
    value = std::min(value, actor.maximum_hp);
    actor.target_hp = value;
    if (actor.side || actor.npc) {
        actor.hp = value;
        if (!actor.side)
            (actor.row ? guests_.second_guest : guests_.first_guest).hp = value;
    } else {
        party_.character(unsigned(actor.row) + 1).target_hp = value;
    }
}
void Meters::set_pp(unsigned slot, std::uint16_t value) {
    validate(slot, false);
    auto& actor = roster_.at(slot);
    value = std::min(value, actor.maximum_pp);
    actor.target_pp = value;
    if (actor.side || actor.npc)
        actor.pp = value;
    else
        party_.character(unsigned(actor.row) + 1).target_pp = value;
}
void Meters::reduce_hp(unsigned slot, std::uint16_t amount) {
    const auto value = roster_.at(slot).target_hp;
    set_hp(slot, amount > value ? 0 : std::uint16_t(value - amount));
}
void Meters::reduce_pp(unsigned slot, std::uint16_t amount) {
    const auto value = roster_.at(slot).target_pp;
    set_pp(slot, amount > value ? 0 : std::uint16_t(value - amount));
}
} // namespace eb::native::battle::actions
