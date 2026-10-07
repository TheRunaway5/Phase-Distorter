#include "executor_internal.hpp"

namespace eb::native::battle::actions {
namespace {
bool can_use(const dialogue::SubstitutionResources& items, unsigned character, unsigned item) {
    if (character < 1 || character > 4) throw std::runtime_error("Item-use flag selector leaves the chosen-four table");
    return (items.item_properties(item).flags & (1u << (character - 1))) != 0;
}
dialogue::ReferenceKey key(std::uint32_t value) {
    return {static_cast<std::uint8_t>(value), static_cast<std::uint8_t>(value >> 8),
            static_cast<std::uint8_t>(value >> 16), static_cast<std::uint8_t>(value >> 24)};
}
}
detail::Routine Executor::Operation::Execution::remove_item(unsigned character, unsigned position) {
    inventory_op = o.inventory.begin_remove(static_cast<std::uint16_t>(character), static_cast<std::uint16_t>(position));
    co_await std::suspend_always{};
    co_return 0;
}
detail::Routine Executor::Operation::Execution::take_item(unsigned selector, unsigned item) {
    inventory_op = o.inventory.begin_take(static_cast<std::uint16_t>(selector), static_cast<std::uint16_t>(item));
    co_await std::suspend_always{};
    co_return 0;
}
detail::Routine Executor::Operation::Execution::consume_item() {
    if (attacker().side || attacker().npc || !attacker().action_item_slot) co_return 0;
    const auto character = attacker().id;
    const auto item = attacker().action_argument;
    const auto position = attacker().action_item_slot;
    if (o.party.character(character).items.at(position - 1) != item) co_return 0;
    if ((o.items.item_properties(item).flags & 0x80) && can_use(o.items, character, item))
        co_await remove_item(attacker().id, attacker().action_item_slot);
    co_return 0;
}
detail::Routine Executor::Operation::Execution::equipment(Kind kind) {
    const auto character = attacker().id;
    o.windows.output().policy().prompt_mode = 1;
    if (can_use(o.items, attacker().id, attacker().action_argument)) {
        const auto old_offense = static_cast<std::uint16_t>(attacker().offense - attacker().base_offense);
        const auto old_guts = static_cast<std::uint16_t>(attacker().guts - attacker().base_guts);
        const auto old_defense = static_cast<std::uint16_t>(attacker().defense - attacker().base_defense);
        const auto old_speed = static_cast<std::uint16_t>(attacker().speed - attacker().base_speed);
        const auto old_luck = static_cast<std::uint16_t>(attacker().luck - attacker().base_luck);
        // The armor caller captures its party-row source before DISPLAY_TEXT.
        const auto stat_character = kind == Kind::BTLACT_SWITCH_WEAPONS ? character : unsigned(attacker().row) + 1;
        const auto position = attacker().action_item_slot;
        const auto item = o.party.character(character).items.at(position - 1);
        const auto slot = static_cast<party::EquipmentSlot>((o.items.item_properties(item).type & 12) >> 2);
        o.inventory.change_equipment(character, slot, position);
        if (kind == Kind::BTLACT_SWITCH_ARMOR) co_await raw_text(o.resources.text(Text::MSG_BTL_EQUIP_OK));
        const auto& c = o.party.character(stat_character);
        if (kind == Kind::BTLACT_SWITCH_WEAPONS) {
            attacker().base_offense = c.offense;
            attacker().offense = static_cast<std::uint16_t>(attacker().base_offense + old_offense);
            attacker().base_guts = c.guts;
            attacker().guts = static_cast<std::uint16_t>(attacker().base_guts + old_guts);
            co_await raw_text(o.resources.text(Text::MSG_BTL_EQUIP_OK));
        } else {
            attacker().base_defense = c.defense;
            attacker().defense = static_cast<std::uint16_t>(attacker().base_defense + old_defense);
            attacker().base_speed = c.speed;
            attacker().speed = static_cast<std::uint16_t>(attacker().base_speed + old_speed);
            attacker().base_luck = c.luck;
            attacker().luck = static_cast<std::uint16_t>(attacker().base_luck + old_luck);
            attacker().fire_resistance = damage_modifier(c.fire_resistance);
            attacker().freeze_resistance = damage_modifier(c.freeze_resistance);
            attacker().flash_resistance = status_modifier(c.flash_resistance);
            attacker().paralysis_resistance = status_modifier(c.paralysis_resistance);
            attacker().hypnosis_resistance = status_modifier(c.hypnosis_brainshock_resistance);
            attacker().brainshock_resistance = status_modifier(static_cast<std::uint8_t>(3 - c.hypnosis_brainshock_resistance));
        }
    } else co_await raw_text(o.resources.text(Text::MSG_BTL_EQUIP_NG_WEAPON));
    if (kind == Kind::BTLACT_SWITCH_WEAPONS) {
        const auto& c = o.party.character(character);
        const auto position = c.equipment[0];
        // The zero-position source alias is the last base-IQ byte immediately
        // before items, which this party owner retains explicitly.
        const auto item = position ? c.items.at(position - 1) : c.base_iq;
        const unsigned attack = item && (o.items.item_properties(item).type & 3) == 1 ? 5 : 4;
        co_await raw_text(key(o.actions.action(attack).description));
        co_await execute(o.resources.kind(attack));
    }
    o.windows.output().policy().prompt_mode = 0;
    co_return 0;
}
} // namespace eb::native::battle::actions
