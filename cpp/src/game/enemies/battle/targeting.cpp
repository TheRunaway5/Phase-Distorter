#include "eb/game/enemies/battle/targeting.hpp"

namespace eb::game::enemies::battle {
namespace {
// Verified independently against regional linked earthbound.dbg symbols and
// src/bankconfig/common/ram.asm. ROM tables remain imported asset bytes.
constexpr TargetingLayout us{0x7e9fac,0x7ea96c,0x7ea970,0x7ead56,0x7ead58,
                             0x7ead7a,0x7ead82,0xc4a279,0xc4a08d};
constexpr TargetingLayout jp{0x7ea1ae,0x7eab6e,0x7eab72,0x7eaf2b,0x7eaf2d,
                             0x7eaf4f,0x7eaf57,0xc476e6,0xc474f0};
// include/structs.asm:battler; include/constants/actions.asm and battle.asm.
constexpr unsigned action_offset = 4, targetting_offset = 9, target_offset = 10;
constexpr unsigned consciousness_offset = 12, side_offset = 14, npc_offset = 15;
constexpr unsigned row_offset = 16, persistent_status_offset = 29;
constexpr std::uint8_t unconscious = 1, diamondized = 2;
constexpr std::uint16_t healing_omega = 39;
}

const TargetingLayout& TargetingLayout::for_version(GameVersion version) {
    return version == GameVersion::JP ? jp : us;
}
std::uint16_t Targeting::word(std::uint32_t address) const {
    const auto low = memory_.read_byte(address);
    const auto high = memory_.read_byte(address + 1);
    return std::uint16_t(low | (std::uint16_t(high) << 8));
}
std::uint8_t Targeting::field(std::uint32_t record, unsigned offset) const {
    // Source fields are loaded as words then ANDed with$ff; read their adjacent
    // byte too, without allowing it to affect the domain value.
    return std::uint8_t(word(record + offset));
}
std::uint32_t Targeting::battler(std::uint16_t index) const {
    return layout_.battlers + std::uint16_t(index * battler_size);
}
std::uint32_t Targeting::mask() const {
    const auto low = word(layout_.target_flags);
    return low | (std::uint32_t(word(layout_.target_flags + 2)) << 16);
}
void Targeting::set_mask(std::uint32_t value) {
    // MOVE_INT publishes low word then high word, low byte first within each.
    for (unsigned byte = 0; byte < 4; ++byte)
        memory_.write_byte(layout_.target_flags + byte, std::uint8_t(value >> (8 * byte)));
}
std::uint32_t Targeting::target_bit(std::uint16_t index) const {
    const auto address = (layout_.powers_of_two & 0xff0000) |
        std::uint16_t(layout_.powers_of_two + std::uint16_t(index << 2));
    // DEREFERENCE_PTR_TO captures high word before loading low word.
    const auto high = word(address + 2);
    return word(address) | (std::uint32_t(high) << 16);
}
void Targeting::add_target(std::uint16_t index) {
    const auto bit = target_bit(index);
    set_mask(include_mask(mask(), bit));
}
void Targeting::remove_target(std::uint16_t index) {
    const auto bit = target_bit(index);
    set_mask(intersect_mask(mask(), ~bit));
}
bool Targeting::is_targeted(std::uint16_t index) const {
    const auto bit = target_bit(index);
    return contains_mask(mask(), bit);
}
bool Targeting::valid_target(std::uint16_t index) const {
    return valid_record(battler(index));
}
bool Targeting::valid_battler(std::uint16_t captured_address) const {
    return valid_record(0x7e0000u + captured_address);
}
bool Targeting::valid_record(std::uint32_t record) const {
    if (!field(record, consciousness_offset) || field(record, npc_offset)) return false;
    const auto status = field(record, persistent_status_offset);
    return status != unconscious && status != diamondized;
}
bool Targeting::candidate_matches(std::uint16_t index, TargetGroup group, std::uint16_t row) const {
    return candidate_matches_record(battler(index), group, row);
}
bool Targeting::candidate_matches_at(std::uint16_t captured_address, TargetGroup group, std::uint16_t row) const {
    return candidate_matches_record(0x7e0000u + captured_address, group, row);
}
bool Targeting::candidate_matches_record(std::uint32_t record, TargetGroup group, std::uint16_t row) const {
    if (!field(record, consciousness_offset)) return false;
    if (group == TargetGroup::All) return true;
    if (group == TargetGroup::Allies) {
        if (!field(record, side_offset)) return true;
        return field(record, npc_offset) != 0;
    }
    if (group == TargetGroup::Enemies) return field(record, side_offset) == 1;
    if (row == 0) return field(record, side_offset) == 0;
    if (row != 1 && row != 2) return false;
    return field(record, side_offset) == 1 && field(record, row_offset) == row - 1;
}
bool Targeting::append_candidate(std::uint16_t index, TargetGroup group, std::uint16_t row) {
    if (!candidate_matches(index, group, row)) return false;
    add_target(index);
    return true;
}
void Targeting::construct(TargetGroup group, std::uint16_t row) {
    set_mask(0);
    for (std::uint16_t index = 0; index < battler_count; ++index) append_candidate(index, group, row);
}
void Targeting::target_all() { construct(TargetGroup::All); }
void Targeting::target_allies() { construct(TargetGroup::Allies); }
void Targeting::target_enemies() { construct(TargetGroup::Enemies); }
void Targeting::target_row(std::uint16_t row) { construct(TargetGroup::Row, row); }
bool Targeting::remove_npc_candidate(std::uint16_t index) {
    if (!npc_record(battler(index))) return false;
    remove_target(index);
    return true;
}
bool Targeting::npc_candidate_at(std::uint16_t captured_address) const {
    return npc_record(0x7e0000u + captured_address);
}
bool Targeting::npc_record(std::uint32_t record) const {
    return field(record, consciousness_offset) && field(record, npc_offset);
}
bool Targeting::remove_dead_candidate(std::uint16_t index) {
    if (!is_targeted(index) || field(battler(index), persistent_status_offset) != unconscious) return false;
    remove_target(index);
    return true;
}
bool Targeting::remove_unavailable_candidate(std::uint16_t index) {
    if (!is_targeted(index)) return false;
    const auto record = battler(index);
    if (field(record, consciousness_offset)) {
        const auto status = field(record, persistent_status_offset);
        if (status != unconscious && status != diamondized) return false;
    }
    remove_target(index);
    return true;
}
void Targeting::remove_npcs() {
    for (std::uint16_t index = 0; index < battler_count; ++index) remove_npc_candidate(index);
}
void Targeting::remove_dead() {
    for (std::uint16_t index = 0; index < battler_count; ++index) remove_dead_candidate(index);
}
bool Targeting::action_allows_unavailable_targets() const {
    // Preserve the source's fresh CURRENT_ATTACKER resolution for each entry,
    // including no attacker read for the terminating zero table entry.
    for (std::uint16_t index = 0;; ++index) {
        const auto action = word(layout_.dead_targettable_actions + std::uint16_t(index << 1));
        if (!action) return false;
        const auto attacker = word(layout_.current_attacker);
        if (action == word(0x7e0000 + attacker + action_offset)) return true;
    }
}
void Targeting::remove_unavailable() {
    if (action_allows_unavailable_targets()) return;
    for (std::uint16_t index = 0; index < battler_count; ++index) remove_unavailable_candidate(index);
}
bool Targeting::shield_targets_npcs(std::uint16_t action) {
    // GET_SHIELD_TARGETTING: group physical/PSI shield sigma and omega.
    return action == 42 || action == 43 || action == 46 || action == 47;
}
void Targeting::resolve_action_targets(std::uint16_t captured_attacker) {
    const auto attacker = 0x7e0000u + captured_attacker;
    set_mask(0);
    switch (field(attacker, targetting_offset)) {
    case 1:
        add_target(std::uint16_t(field(attacker, target_offset) - 1));
        break;
    case 2:
    case 4:
        target_allies();
        if (!shield_targets_npcs(word(attacker + action_offset)) && !field(attacker, side_offset)) remove_npcs();
        remove_unavailable();
        break;
    case 17: {
        const auto target = field(attacker, target_offset);
        const auto front = word(layout_.front_count);
        const auto position = std::uint16_t((target <= front ? target : target - front) - 1);
        const auto row = target <= front ? layout_.front_row : layout_.back_row;
        add_target(field(row, position));
        if (word(attacker + action_offset) == healing_omega) {
            for (std::uint16_t index = 8; index < battler_count; ++index) {
                const auto record = battler(index);
                if (field(record, consciousness_offset) && field(record, persistent_status_offset) == unconscious) {
                    set_mask(0);
                    add_target(index);
                    break;
                }
            }
        }
        break;
    }
    case 18:
        target_row(field(attacker, target_offset));
        remove_npcs();
        remove_unavailable();
        break;
    case 20:
        target_enemies();
        if (!field(attacker, side_offset)) remove_npcs();
        remove_unavailable();
        break;
    default:
        break;
    }
}
std::uint32_t Targeting::random_target(std::uint32_t candidates, std::uint8_t draw) const {
    if (!candidates) return 0;
    unsigned remaining = (draw & 31) + 1;
    std::uint16_t index = 0;
    while (remaining) {
        index = std::uint16_t((index + 1) & 31);
        if (candidates & target_bit(index)) --remaining;
    }
    return target_bit(index);
}
} // namespace eb::game::enemies::battle
