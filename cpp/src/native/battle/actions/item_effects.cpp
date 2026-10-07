#include "executor_internal.hpp"
#include <algorithm>

namespace eb::native::battle::actions {
detail::Routine Executor::Operation::Execution::bottle_rockets(unsigned count) {
    unsigned hits = 0;
    for (unsigned i = 0; i < count; ++i) hits += success_speed(o.random, attacker(), target(), 100);
    if (hits) co_await resist_damage(variance25(o.random, static_cast<std::uint16_t>(hits * 120)), 255);
    else co_await text(Text::MSG_BTL_KIKANAI);
    co_return 0;
}

detail::Routine Executor::Operation::Execution::bomb(std::uint16_t amount) {
    co_await resist_damage(fifty_percent_variance(o.random, amount), 255);
    std::optional<unsigned> left, right;
    if (target().side == 0) {
        unsigned position = 0;
        while (position < 6 && o.party.party_order[position] != target().id) ++position;
        if (position == 6) throw std::runtime_error("Bomb target is outside the owned party-order domain");
        if (position) left = position - 1;
        if (position + 1 < 6) {
            const auto next = o.party.party_order[position + 1];
            if (next >= 1 && next <= 4) right = position + 1;
        }
    } else {
        for (unsigned slot = 8; slot < Roster::size; ++slot) {
            const auto& other = o.roster.at(slot);
            if (slot == target_slot() || other.side != 1 || other.row != target().row) continue;
            const auto reach = static_cast<std::uint16_t>(
                (o.targets.sprite_width(target().sprite) + o.targets.sprite_width(other.sprite)) * 4 + 8);
            if (other.x < target().x) {
                if (static_cast<std::uint8_t>(target().x - other.x) <= reach) left = slot;
            } else if (static_cast<std::uint8_t>(other.x - target().x) <= reach) right = slot;
        }
    }
    const auto original = target_slot();
    for (auto adjacent : {left, right}) {
        if (!adjacent) continue;
        o.action.target = *adjacent;
        o.names.fix_target();
        co_await resist_damage(fifty_percent_variance(o.random, amount >> 1), 255);
    }
    o.action.target = original;
    o.names.fix_target();
    co_return 0;
}

detail::Routine Executor::Operation::Execution::boost(unsigned stat) {
    const auto amount = static_cast<std::uint16_t>(random_limit(o.random, 4) + 1);
    Text message = Text::MSG_BTL_DEFENSE_UP;
    switch (stat) {
    case 0: target().defense = static_cast<std::uint16_t>(target().defense + amount); break;
    case 1: target().offense = static_cast<std::uint16_t>(target().offense + amount); message = Text::MSG_BTL_OFFENSE_UP; break;
    case 2: target().speed = static_cast<std::uint16_t>(target().speed + amount); message = Text::MSG_BTL_SPEED_UP; break;
    case 3: target().guts = static_cast<std::uint16_t>(target().guts + amount); message = Text::MSG_BTL_GUTS_UP; break;
    case 4: target().vitality = static_cast<std::uint8_t>(target().vitality + amount); message = Text::MSG_BTL_VITA_UP; break;
    case 5: target().iq = static_cast<std::uint8_t>(target().iq + amount); message = Text::MSG_BTL_IQ_UP; break;
    case 6: target().luck = static_cast<std::uint16_t>(target().luck + amount); message = Text::MSG_BTL_LUCK_UP; break;
    default: throw std::runtime_error("Battle stat boost is outside the seven owned stats");
    }
    co_await text(message, amount);
    co_return 0;
}

detail::Routine Executor::Operation::Execution::item_effect(Kind kind) {
    switch (kind) {
    case Kind::BTLACT_HANDBAG_STRAP:
    case Kind::BTLACT_MUMMY_WRAP: {
        if (co_await reject_npc()) break;
        bool hit = success_speed(o.random, attacker(), target(), 250);
        auto amount = static_cast<std::uint16_t>((kind == Kind::BTLACT_HANDBAG_STRAP ? 100 : 400) - target().defense);
        if (hit && static_cast<std::int16_t>(amount) > 0) {
            co_await resist_damage(amount, 255);
            if (inflict(target(), 2, 4)) co_await text(Text::MSG_BTL_KOORI_ON);
        } else co_await text(Text::MSG_BTL_KIKANAI);
        break;
    }
    case Kind::BTLACT_YOGURT_DISPENSER:
    case Kind::BTLACT_SNAKE:
        if (kind == Kind::BTLACT_SNAKE && (co_await reject_npc())) break;
        if (success_speed(o.random, attacker(), target(), 250)) {
            co_await resist_damage(static_cast<std::uint16_t>(random_limit(o.random, 4) + 1), 255);
            if (kind == Kind::BTLACT_SNAKE && success255(o.random, 128) && inflict(target(), 0, 5))
                co_await text(Text::MSG_BTL_MODOKU_ON);
        } else co_await text(Text::MSG_BTL_KIKANAI);
        break;
    case Kind::BTLACT_INSECTICIDE_SPRAY:
    case Kind::BTLACT_XTERMINATOR_SPRAY:
    case Kind::BTLACT_RUST_PROMOTER:
    case Kind::BTLACT_RUST_PROMOTER_DX: {
        const bool insect = kind == Kind::BTLACT_INSECTICIDE_SPRAY || kind == Kind::BTLACT_XTERMINATOR_SPRAY;
        const unsigned amount = kind == Kind::BTLACT_INSECTICIDE_SPRAY ? 100 :
                                kind == Kind::BTLACT_RUST_PROMOTER_DX ? 400 : 200;
        if (success_luck80(o.random, target()) && target().side == 1 &&
            o.roster.resources().enemy(target().id).type == (insect ? 1 : 2))
            co_await resist_damage(fifty_percent_variance(o.random, static_cast<std::uint16_t>(amount)), 255);
        else co_await text(Text::MSG_BTL_KIKANAI);
        break;
    }
    case Kind::BTLACT_COUNTER_PSI:
        if (co_await reject_npc()) break;
        if (success_luck40(o.random, target()) && target().afflictions[4] == 0) {
            target().afflictions[4] = 4;
            co_await text(Text::MSG_BTL_FUUIN_ON);
        } else co_await text(Text::MSG_BTL_KIKANAI);
        break;
    case Kind::BTLACT_SHIELD_KILLER:
        if (success_luck80(o.random, target()) && target().afflictions[6]) {
            target().afflictions[6] = 0;
            co_await text(Text::MSG_BTL_SHIELD_OFF);
        } else co_await text(Text::MSG_BTL_KIKANAI);
        break;
    case Kind::BTLACT_HP_SUCKER:
    case Kind::BTLACT_HUNGRY_HP_SUCKER:
        if (!success_luck80(o.random, target()) || !attacker().target_hp) {
            co_await text(Text::MSG_BTL_KIKANAI);
        } else if (target_slot() == attacker_slot()) co_await text(Text::MSG_BTL_HPSUCK_ME);
        else {
            const auto amount = static_cast<std::uint16_t>(fifty_percent_variance(o.random, target().maximum_hp) >> 3);
            owner.meter.reduce_hp(target_slot(), amount);
            co_await text(Text::MSG_BTL_HPSUCK_ON, amount);
            owner.meter.set_hp(attacker_slot(), static_cast<std::uint16_t>(attacker().hp + amount));
            if (!target().hp) co_await ko(target_slot());
        }
        break;
    case Kind::BTLACT_DEFENSE_SPRAY:
    case Kind::BTLACT_DEFENSE_SHOWER: {
        if (co_await reject_npc()) break;
        const auto before = target().defense;
        increase_defense(target());
        co_await text(Text::MSG_BTL_DEFENSE_UP, static_cast<std::uint16_t>(target().defense - before));
        break;
    }
    case Kind::BTLACT_SUDDEN_GUTS_PILL:
        if (!(co_await reject_npc())) {
            target().guts = std::min<std::uint16_t>(static_cast<std::uint16_t>(target().guts << 1), 255);
            co_await text(Text::MSG_BTL_2GUTS_UP, target().guts);
        }
        break;
    default: throw std::runtime_error("Action does not belong to the native item-effect family");
    }
    co_return 0;
}
} // namespace eb::native::battle::actions
