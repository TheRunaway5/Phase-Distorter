#include "executor_internal.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::battle::actions {
detail::Routine Executor::Operation::Execution::shield_nullify() {
    nullifying = true; shield = o.shields.begin_nullify();
    co_await std::suspend_always{};
    co_return shield_result;
}
detail::Routine Executor::Operation::Execution::weaken_shield() {
    nullifying = false; shield = o.shields.begin_weaken();
    co_await std::suspend_always{};
    co_return 0;
}
detail::Routine Executor::Operation::Execution::reject_npc() {
    if (target().npc) { co_await text(Text::MSG_BTL_KIKANAI); co_return 1; }
    co_return 0;
}
detail::Routine Executor::Operation::Execution::heal_strangeness() {
    if (target().afflictions[3] == 1) {
        target().afflictions[3] = 0;
        co_await text(Text::MSG_BTL_HEN_OFF);
    }
    co_return 0;
}
detail::Routine Executor::Operation::Execution::recover_hp(unsigned slot, std::uint16_t amount) {
    if (o.roster.at(slot).consciousness != 1) co_return 0;
    if (o.roster.at(slot).afflictions[0] == 1) {
        co_await text(Text::MSG_BTL_HEAL_NG); co_return 0;
    }
    const auto sum = std::uint16_t(o.roster.at(slot).target_hp + amount);
    owner.meter.set_hp(slot, sum);
    if (sum >= o.roster.at(slot).maximum_hp) co_await text(Text::MSG_BTL_HPMAX_KAIFUKU);
    else co_await text(Text::MSG_BTL_HP_KAIFUKU, amount);
    co_return 0;
}
detail::Routine Executor::Operation::Execution::recover_pp(unsigned slot, std::uint16_t amount) {
    auto& actor = o.roster.at(slot);
    if (actor.consciousness != 1 || actor.afflictions[0] == 1) co_return 0;
    const auto sum = std::uint16_t(actor.target_pp + amount);
    const auto healed = sum >= actor.maximum_pp ? std::uint16_t(actor.maximum_pp - actor.target_pp) : amount;
    owner.meter.set_pp(slot, sum);
    co_await text(Text::MSG_BTL_PP_KAIFUKU, healed);
    co_return 0;
}
detail::Routine Executor::Operation::Execution::revive(unsigned slot, std::uint16_t hp) {
    (void)o.roster.at(slot);
    co_await text(Text::MSG_BTL_IKIKAERI);
    auto& actor = o.roster.at(slot);
    actor.afflictions.fill(0); actor.action = 0; actor.taken_turn = 1;
    owner.meter.set_hp(slot, hp);
    if (!actor.side && !actor.npc) {
        auto& character = o.party.character(unsigned(actor.row) + 1);
        character.target_hp = hp; character.current_hp = 1;
    }
    if (actor.side == 1 && !actor.npc) {
        for (unsigned i = 0; i < Roster::size; ++i) o.roster.at(i).alternate = 0;
        actor.alternate = 1;
        for (unsigned color = 1; color < 16; ++color)
            o.palette_effects.palette_state().palette(actor.resource).at(color) = 0;
        o.palette_effects.set_speed(10);
        for (unsigned color = 1; color < 16; ++color)
            o.palette_effects.target(unsigned(actor.resource) * 16 + color, 31, 31, 31);
        co_await wait(10);
        o.palette_effects.set_speed(20);
        for (unsigned color = 1; color < 16; ++color) {
            const auto resource = o.roster.at(slot).resource;
            const auto raw = o.palette_effects.palette_state().staged_palette(8 + resource).at(color);
            o.palette_effects.target(unsigned(resource) * 16 + color, raw & 31, (raw >> 5) & 31, (raw >> 10) & 31);
        }
        co_await wait(20);
    }
    co_return 1;
}
detail::Routine Executor::Operation::Execution::miss(bool shooting) {
    std::uint16_t chance;
    const auto& a = attacker();
    if (a.side || a.npc) chance = o.roster.resources().enemy(a.id).miss_rate;
    else {
        const auto& character = o.party.character(unsigned(a.row) + 1);
        const auto position = character.equipment[0];
        if (position) {
            const auto item = character.items.at(position - 1);
            const auto raw = o.items.item_properties(item).parameters[3];
            chance = raw < 128 ? raw : std::uint16_t(unsigned(raw) + 0xff00);
        } else chance = 1;
        if (a.afflictions[2] == 2 || a.afflictions[0] == 4) chance = std::uint16_t(chance + 8);
    }
    if (chance && std::uint16_t(chance - 1) >= random_limit(o.random, 16)) {
        co_await text(shooting ? Text::MSG_BTL_KARABURI_UTSU : Text::MSG_BTL_KARABURI);
        co_return 1;
    }
    co_return 0;
}
detail::Routine Executor::Operation::Execution::smash() {
    o.action.smash_attack = 0;
    auto chance = attacker().guts;
    if (!attacker().side) chance = std::max<std::uint16_t>(chance, 25);
    if (!success500(o.random, chance)) co_return 0;
    if (!attacker().side) {
        o.background.flash_green(60);
        co_await text(Text::MSG_BTL_SMASH_PLAYER);
    } else {
        o.background.flash_red(60);
        co_await text(Text::MSG_BTL_SMASH_MONSTER);
    }
    if (target().afflictions[6] == 3 || target().afflictions[6] == 4) target().shield_hp = 1;
    o.action.smash_attack = 1;
    co_await resist_damage(std::uint16_t(attacker().offense * 4 - target().defense), 255);
    co_return 1;
}
detail::Routine Executor::Operation::Execution::damage(unsigned slot, std::uint16_t amount) {
    if (!amount) { co_await text(Text::MSG_BTL_KIKANAI); co_return 0; }
    std::optional<unsigned> saved_target;
    if (o.roster.at(slot).side == 1 && o.roster.at(slot).id == 218) {
        bool eligible{};
        for (unsigned i = 0; i < 4; ++i) {
            const auto& actor = o.roster.at(i);
            eligible |= actor.consciousness && !actor.npc && actor.afflictions[0] != 1 && actor.afflictions[0] != 2;
        }
        if (!eligible) throw std::invalid_argument("Giygas reflection has no reachable source target");
        saved_target = target_slot();
        for (;;) {
            o.action.target = story::next_random(o.random) & 3;
            const auto& actor = target();
            if (actor.consciousness && !actor.npc && actor.afflictions[0] != 1 && actor.afflictions[0] != 2) break;
        }
        o.names.fix_target(); slot = target_slot();
        o.background.reflect(16); o.audio.play_sound(73);
        co_await wait(30);
    }
    auto& actor = o.roster.at(slot);
    const auto old_hp = actor.target_hp;
    const auto id = actor.id;
    if (!actor.side || (id != 93 && id != 192 && id != 218 && id != 219 && id != 221 && id != 229))
        owner.meter.reduce_hp(slot, amount);
    if (!actor.side && !actor.target_hp && old_hp > 1 &&
        success500(o.random, std::max<std::uint16_t>(attacker().guts, 25))) owner.meter.set_hp(slot, 1);
    if (!actor.side && o.action.enemy_final_attack && o.targets.count(1) == 1 && o.targets.count(0) == 1)
        owner.meter.set_hp(slot, 1);
    if (actor.side == 1) {
        if (actor.id == 219 || actor.id == 220 || actor.id == 221 || actor.id == 229)
            o.background.green_background(16);
        actor.blink = 21;
        if (o.action.smash_attack) {
            co_await text(Text::MSG_BTL_DAMAGE_SMASH_M, amount);
            o.action.smash_attack = 0;
        } else co_await text(Text::MSG_BTL_DAMAGE_M, amount);
    } else {
        if (!actor.npc && !o.frame_state.hp_pp_blink_duration) {
            o.frame_state.hp_pp_blink_duration = 21;
            for (unsigned i = 0; i < 6; ++i)
                if (o.party.party_order[i] == actor.id) { o.frame_state.hp_pp_blink_target = std::uint16_t(i); break; }
        }
        if (!actor.target_hp) {
            o.background.quake(60, 12);
            co_await text(Text::MSG_BTL_DAMAGE_TO_DEATH, amount);
        } else if (o.action.smash_attack) {
            o.background.shake(60);
            co_await text(Text::MSG_BTL_DAMAGE_SMASH, amount);
            o.background.quake(o.background.effects().shake_duration, 0);
            o.action.smash_attack = 0;
        } else {
            o.background.shake(42);
            co_await text(Text::MSG_BTL_DAMAGE, amount);
            o.background.quake(o.background.effects().shake_duration, 0);
        }
        o.background.wait(40);
    }
    if (saved_target) { o.action.target = saved_target; o.names.fix_target(); }
    co_return 1;
}
detail::Routine Executor::Operation::Execution::resist_damage(std::uint16_t amount, std::uint16_t resistance) {
    if (amount & 0x8000) amount = 0;
    if (resistance < 255) amount = std::uint16_t((unsigned(amount) * std::uint8_t(resistance)) >> 8);
    if (target().consciousness != 1 || target().afflictions[0] == 1) co_return amount;
    if (target().guarding == 1 && o.actions.type(attacker().action) == 1) amount >>= 1;
    if (o.actions.type(attacker().action) == 1 && (target().afflictions[6] == 3 || target().afflictions[6] == 4)) amount >>= 1;
    if (!amount) amount = 1;
    if (co_await damage(target_slot(), amount))
        if (!target().hp) co_await ko(target_slot());
    if (!amount) amount = 1;
    if (!o.action.shield_nullified) {
        const auto status = target().afflictions[6];
        if (status == 3 || status == 4) {
            if (status == 3 && !o.action.enemy_final_attack) {
                amount >>= 1; if (!amount) amount = 1;
                co_await text(Text::MSG_BTL_POWER_TURN);
                o.names.swap_attacker_with_target();
                co_await damage(target_slot(), amount);
                if (!target().hp) co_await ko(target_slot());
                o.names.swap_attacker_with_target();
            }
            target().shield_hp = std::uint8_t(target().shield_hp - 1);
            if (!target().shield_hp) {
                target().afflictions[6] = 0;
                co_await text(Text::MSG_BTL_SHIELD_OFF);
            }
        }
    }
    if (!target().side && !target().npc && !o.party.character(unsigned(target().row) + 1).current_hp)
        co_return amount;
    if (target().afflictions[2] == 1 && success255(o.random, 128)) {
        target().action = 0; target().afflictions[2] = 0;
        co_await text(Text::MSG_BTL_NEMURI_OFF);
    }
    co_return amount;
}
} // namespace eb::native::battle::actions
