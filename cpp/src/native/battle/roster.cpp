// Source: BATTLE_INIT_PLAYER_STATS, BATTLE_INIT_ENEMY_STATS, C2B66A,
// CALC_PSI_*_MODIFIERS, C2C32C and COPY_MIRROR_DATA (both regions).
#include "eb/native/battle/roster.hpp"
#include <algorithm>
#include <limits>
#include <stdexcept>
#include <utility>

namespace eb::native::battle {
namespace {
std::uint8_t damage_modifier(std::uint8_t level) {
    constexpr std::array<std::uint8_t, 4> values{255,179,102,13};
    return level < values.size() ? values[level] : level;
}
std::uint8_t status_modifier(std::uint8_t level) {
    constexpr std::array<std::uint8_t, 4> values{255,128,26,0};
    return level < values.size() ? values[level] : level;
}
void resistances(Battler& b, std::uint8_t fire, std::uint8_t freeze,
                 std::uint8_t flash, std::uint8_t paralysis, std::uint8_t mental) {
    b.fire_resistance = damage_modifier(fire);
    b.freeze_resistance = damage_modifier(freeze);
    b.flash_resistance = status_modifier(flash);
    b.paralysis_resistance = status_modifier(paralysis);
    b.hypnosis_resistance = status_modifier(mental);
    b.brainshock_resistance = status_modifier(std::uint8_t(3 - mental));
}
} // namespace
Roster::Roster(std::shared_ptr<const EnemyResources> resources) : resources_(std::move(resources)) {
    if (!resources_) throw std::invalid_argument("Battle roster requires its enemy catalog");
}
std::uint64_t Roster::next_identity() {
    if (identity_counter_ == std::numeric_limits<std::uint64_t>::max())
        throw std::overflow_error("Battle record identity exhausted");
    return ++identity_counter_;
}
void Roster::clear() {
    clear_records();
    highest_enemy_level_ = 0;
}
void Roster::clear_records() { records_ = {}; }
void Roster::initialize_player(unsigned slot, const party::State& party, unsigned character) {
    auto& destination = records_.at(slot);
    if (party.version() != version()) throw std::invalid_argument("Battle and party regions differ");
    const auto& p = party.character(character);
    Battler b;
    b.id = std::uint16_t(character); b.consciousness = 1;
    b.hp = p.current_hp; b.target_hp = p.target_hp; b.maximum_hp = p.maximum_hp;
    b.pp = p.current_pp; b.target_pp = p.target_pp; b.maximum_pp = p.maximum_pp;
    b.afflictions = p.afflictions;
    b.offense = b.base_offense = p.offense;
    b.defense = b.base_defense = p.defense;
    b.speed = b.base_speed = p.speed;
    b.guts = b.base_guts = p.guts;
    b.luck = b.base_luck = p.luck;
    b.vitality = p.vitality; b.iq = p.iq;
    resistances(b, p.fire_resistance, p.freeze_resistance, p.flash_resistance,
                p.paralysis_resistance, p.hypnosis_brainshock_resistance);
    b.row = std::uint8_t(character - 1);
    destination = {b, next_identity()};
}
std::uint8_t Roster::next_label(unsigned enemy, unsigned replacing_slot) const {
    std::array<bool, 26> used{};
    for (unsigned slot = 0; slot < size; ++slot) {
        // The original initializer has already cleared its destination.
        if (slot == replacing_slot) continue;
        const auto& b = records_[slot].value;
        if (!b.consciousness || b.side != 1 || b.original_enemy != enemy) continue;
        if (!b.label || b.label > used.size())
            throw std::domain_error("Enemy label scan aliases storage outside its owned letter table");
        used[b.label - 1] = true;
    }
    const auto free = std::find(used.begin(), used.end(), false);
    return free == used.end() ? 0 : std::uint8_t(free - used.begin() + 1);
}
std::uint8_t Roster::next_available_label(unsigned enemy) const {
    if (enemy > 0xffff) throw std::out_of_range("Enemy label identity is not a source word");
    return next_label(enemy, size);
}
void Roster::initialize_enemy(unsigned slot, unsigned enemy) {
    auto& destination = records_.at(slot);
    const auto& e = resources_->enemy(enemy);
    Battler b;
    b.id = b.original_enemy = std::uint16_t(enemy);
    b.sprite = e.sprite;
    b.label = next_label(enemy, slot);
    b.consciousness = b.side = 1;
    b.row = e.row;
    b.hp = b.target_hp = b.maximum_hp = e.hp;
    b.pp = b.target_pp = b.maximum_pp = e.pp;
    b.offense = b.base_offense = e.offense;
    b.defense = b.base_defense = e.defense;
    b.speed = b.base_speed = e.speed;
    b.guts = b.base_guts = e.guts;
    b.luck = b.base_luck = e.luck;
    b.iq = e.iq;
    resistances(b, e.fire, e.freeze, e.flash, e.paralysis, e.hypnosis_brainshock);
    b.money = e.money; b.experience = e.experience;
    if (e.initial_status >= 1 && e.initial_status <= 4) {
        // Initial records are clear, so SHIELDS_COMMON always takes its new
        // shield branch. The enum's physical/PSI and power order is nonnumeric.
        constexpr std::array<std::uint8_t, 4> shields{2,1,4,3};
        b.afflictions[6] = shields[e.initial_status - 1];
        b.shield_hp = 3;
    } else if (e.initial_status == 5) b.afflictions[2] = 1;
    else if (e.initial_status == 6) b.afflictions[4] = 4;
    else if (e.initial_status == 7) b.afflictions[3] = 1;
    destination = {b, next_identity()};
    highest_enemy_level_ = std::max(highest_enemy_level_, std::uint16_t(e.level));
}
void Roster::replace_primary_enemy(unsigned enemy) {
    const auto x = at(8).x, y = at(8).y;
    initialize_enemy(8, enemy);
    at(8).x = x; at(8).y = y; at(8).taken_turn = 1;
}
void Roster::mirror(unsigned destination, unsigned source) {
    mirror(destination, at(source));
}
void Roster::mirror(unsigned destination, const Battler& source) {
    auto& target = at(destination);
    const auto before = target;
    target = source;
    target.hp = before.hp; target.pp = before.pp;
    target.target_hp = before.target_hp; target.target_pp = before.target_pp;
    target.maximum_hp = before.maximum_hp; target.maximum_pp = before.maximum_pp;
    target.side = before.side; target.row = before.row;
    target.id = before.id; target.taken_turn = before.taken_turn;
}
} // namespace eb::native::battle
