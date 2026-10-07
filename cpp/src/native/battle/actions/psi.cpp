#include "executor_internal.hpp"
#include <algorithm>
#include <bit>

namespace eb::native::battle::actions {
// Families: fire, freeze, rockin, starstorm. Arguments are captured before any
// shield dialogue; each subsequent selector read remains live.
detail::Routine Executor::Operation::Execution::psi_damage(unsigned family, std::uint16_t amount) {
    if (family == 1 && (co_await reject_npc())) co_return 0;
    if (co_await shield_nullify()) co_return 0;
    amount = family == 2 ? fifty_percent_variance(o.random, amount) : variance25(o.random, amount);
    if (family == 2 && dodge(o.random, attacker(), target())) {
        co_await text(Text::MSG_BTL_KIKANAI);
    } else {
        const auto resistance = family == 0 ? target().fire_resistance :
                                family == 1 ? target().freeze_resistance : 255;
        const auto dealt = co_await resist_damage(amount, static_cast<std::uint16_t>(resistance));
        if (family == 1 && target().afflictions[0] != 1 && dealt != 0 &&
            random_limit(o.random, 100) < 25 && inflict(target(), 2, 4)) {
            co_await text(Text::MSG_BTL_KOORI_ON);
        }
    }
    co_await weaken_shield();
    co_return 0;
}

detail::Routine Executor::Operation::Execution::thunder(std::uint16_t amount, unsigned hits) {
    const auto chance = static_cast<std::uint16_t>(std::min(std::popcount(o.action.target_flags) * 64, 255));
    const auto original = o.action.target_flags;
    for (unsigned hit = 0; hit < hits; ++hit) {
        o.action.target_flags = original;
        remove_untargettable();
        if (!o.action.target_flags) break;
        o.action.target_flags = random_target(o.action.target_flags);
        o.action.target = static_cast<unsigned>(std::countr_zero(o.action.target_flags));
        o.names.fix_target();
        if (success255(o.random, chance)) {
            co_await text(amount == 120 ? Text::MSG_BTL_THUNDER_SMALL : Text::MSG_BTL_THUNDER_LARGE);
            co_await wait_animation();
            target().alternate = 0;
            if (target().side == 0) {
                const auto& items = o.party.character(static_cast<unsigned>(target().row) + 1).items;
                if (std::find(items.begin(), items.end(), 1) != items.end()) {
                    co_await text(Text::MSG_BTL_FRANKLIN_TURN);
                    o.action.damage_reflected = 1;
                    o.names.swap_attacker_with_target();
                }
            }
            if (target().afflictions[6] == 1 || target().afflictions[6] == 2) target().shield_hp = 1;
            if (!(co_await shield_nullify())) {
                co_await resist_damage(fifty_percent_variance(o.random, amount), 255);
            }
            co_await weaken_shield();
        } else {
            co_await text(Text::MSG_BTL_THUNDER_MISS_SE);
            co_await text(Text::MSG_BTL_KAMINARI_HAZURE);
        }
        if (!o.targets.count(0) || !o.targets.count(1)) break;
    }
    o.action.target_flags = 0;
    co_return 0;
}

detail::Routine Executor::Operation::Execution::flash(unsigned level) {
    if (co_await reject_npc()) co_return 0;
    bool susceptible = false;
    if (!(co_await shield_nullify())) {
        susceptible = success255(o.random, target().flash_resistance);
        if (!susceptible) co_await text(Text::MSG_BTL_KIKANAI);
    }
    if (susceptible) {
        const unsigned roll = story::next_random(o.random) & 7;
        if (level > 0 && roll < level) {
            co_await ko(target_slot());
        } else {
            unsigned group = 2, status = 2;
            Text message = Text::MSG_BTL_NAMIDA_ON;
            if (level > 0 && roll == level) {
                group = 0; status = 3; message = Text::MSG_BTL_SHIBIRE_ON;
            } else if ((level == 0 && roll == 0) || (level > 0 && roll == level + 1)) {
                group = 3; status = 1; message = Text::MSG_BTL_HEN_ON;
            }
            co_await text(inflict(target(), group, static_cast<std::uint16_t>(status)) ? message : Text::MSG_BTL_KIKANAI);
        }
    }
    co_await weaken_shield();
    co_return 0;
}

detail::Routine Executor::Operation::Execution::status_psi(unsigned group, unsigned status,
                                                         std::uint8_t Battler::* resistance, Text success) {
    if (co_await reject_npc()) co_return 0;
    const bool applied = success255(o.random, target().*resistance) &&
                         inflict(target(), group, static_cast<std::uint16_t>(status));
    co_await text(applied ? success : Text::MSG_BTL_KIKANAI);
    co_return 0;
}

detail::Routine Executor::Operation::Execution::healing(unsigned level) {
    if (level == 3 && target().afflictions[0] == 1) {
        co_return co_await revive(target_slot(), target().maximum_hp);
    }
    if (level >= 2) {
        const auto affliction = target().afflictions[0];
        if (affliction == 2 || affliction == 3) {
            target().afflictions[0] = 0;
            co_await text(affliction == 2 ? Text::MSG_BTL_DAIYA_OFF : Text::MSG_BTL_SHIBIRE_OFF);
            co_return 0;
        }
        if (affliction == 1) {
            if (success255(o.random, 192)) co_await revive(target_slot(), target().maximum_hp >> 2);
            else co_await text(Text::MSG_BTL_IKIKAERI_F);
            co_return 0;
        }
    }
    if (level >= 1) {
        const auto affliction = target().afflictions[0];
        if (affliction == 4 || affliction == 5) {
            target().afflictions[0] = 0;
            co_await text(affliction == 4 ? Text::MSG_BTL_KIMOCHI_OFF : Text::MSG_BTL_MODOKU_OFF);
            co_return 0;
        }
        if (target().afflictions[2] == 2) {
            target().afflictions[2] = 0;
            co_await text(Text::MSG_BTL_NAMIDA_OFF);
            co_return 0;
        }
        if (target().afflictions[3] == 1) {
            target().afflictions[3] = 0;
            co_await text(Text::MSG_BTL_HEN_OFF);
            co_return 0;
        }
    }
    const auto affliction = target().afflictions[0];
    if (affliction == 6 || affliction == 7) {
        target().afflictions[0] = 0;
        co_await text(affliction == 6 ? Text::MSG_BTL_NISSYA_OFF : Text::MSG_BTL_KAZE_OFF);
    } else if (target().afflictions[2] == 1) {
        target().afflictions[2] = 0;
        co_await text(Text::MSG_BTL_NEMURI_OFF);
    } else co_await text(Text::MSG_BTL_HEAL_NG);
    co_return 0;
}

detail::Routine Executor::Operation::Execution::shield_apply(unsigned kind, Text added, Text fresh) {
    const bool existing = target().afflictions[6] == kind;
    if (existing) {
        target().shield_hp = static_cast<std::uint8_t>(target().shield_hp + 3);
        if (target().shield_hp > 8) target().shield_hp = 8;
    } else {
        target().afflictions[6] = static_cast<std::uint8_t>(kind);
        target().shield_hp = 3;
    }
    co_await text(existing ? added : fresh);
    co_return 0;
}
} // namespace eb::native::battle::actions
