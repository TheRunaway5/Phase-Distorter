#include "executor_internal.hpp"
#include <algorithm>

namespace eb::native::battle::actions {
detail::Routine Executor::Operation::Execution::eat_food() {
    const auto character = target().id;
    if (o.party.character(character).afflictions[0] == 1) {
        co_await text(Text::MSG_BTL_KIKANAI); co_return 0;
    }
    const auto item = attacker().action_argument;
    auto parameters = o.items.item_properties(item).parameters;
    std::uint8_t condiment = 0;
    if ((o.items.item_properties(item).type & 0x3c) == 0x20)
        condiment=o.items.find_condiment(item,o.party.character(attacker().id).items);
    if (condiment) {
        co_await take_item(attacker().id, condiment);
        bool matched = false;
        for (const auto& row : o.resources.condiments()) {
            if (row[0] != item) continue;
            if (row[1] == condiment || row[2] == condiment) {
                co_await text(Text::MSG_BTL_EAT_SPICE_ATARI);
                std::copy_n(row.begin() + 3, 4, parameters.begin());
                matched = true;
            }
            break;
        }
        if (!matched) co_await text(Text::MSG_BTL_EAT_SPICE_HAZURE);
    }
    const std::uint16_t amount = parameters[character == 4 ? 2 : 1];
    auto effect = parameters[0];
    if (effect == 3) effect = static_cast<std::uint8_t>(random_limit(o.random, 4) + 4);
    if (effect == 0 || effect == 2) {
        co_await recover_hp(target_slot(), amount ? variance25(o.random, amount * 6) : 30000);
    }
    if (effect == 1 || effect == 2) {
        co_await recover_pp(target_slot(), amount ? variance25(o.random, amount) : 30000);
    }
    if (effect >= 4 && effect <= 8) {
        auto& c = o.party.character(character);
        Text message = Text::MSG_BTL_IQ_UP;
        unsigned stat = 5;
        switch (effect) {
        case 4:
            target().iq = static_cast<std::uint8_t>(target().iq + amount);
            c.boosted_iq = static_cast<std::uint8_t>(c.boosted_iq + amount); break;
        case 5:
            target().guts = static_cast<std::uint16_t>(target().guts + amount);
            c.boosted_guts = static_cast<std::uint8_t>(c.boosted_guts + amount);
            stat = 3; message = Text::MSG_BTL_GUTS_UP; break;
        case 6:
            target().speed = static_cast<std::uint16_t>(target().speed + amount);
            c.boosted_speed = static_cast<std::uint8_t>(c.boosted_speed + amount);
            stat = 2; message = Text::MSG_BTL_SPEED_UP; break;
        case 7:
            target().vitality = static_cast<std::uint8_t>(target().vitality + amount);
            c.boosted_vitality = static_cast<std::uint8_t>(c.boosted_vitality + amount);
            stat = 4; message = Text::MSG_BTL_VITA_UP; break;
        case 8:
            target().luck = static_cast<std::uint16_t>(target().luck + amount);
            c.boosted_luck = static_cast<std::uint8_t>(c.boosted_luck + amount);
            stat = 6; message = Text::MSG_BTL_LUCK_UP; break;
        }
        o.inventory.recalculate_derived_stat(character, stat);
        co_await text(message, amount);
    } else if (effect == 9) co_await healing(0);
    else if (effect == 10) co_await utility(Kind::HEAL_POISON);
    if (parameters[3]) o.food_status.start(static_cast<std::uint16_t>(parameters[3] * 6));
    co_return 0;
}
} // namespace eb::native::battle::actions
