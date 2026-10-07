#include "executor_internal.hpp"
#include "eb/native/battle/actions/special.hpp"
#include <bit>

namespace eb::native::battle::actions {
detail::Routine Executor::Operation::Execution::neutralize() {
    target().offense = target().base_offense;
    target().defense = target().base_defense;
    target().speed = target().base_speed;
    target().guts = target().base_guts;
    target().luck = target().base_luck;
    target().shield_hp = 0; target().afflictions[6] = 0;
    co_await text(Text::MSG_BTL_NEUTRALIZE_RESULT);
    co_return 0;
}
detail::Routine Executor::Operation::Execution::utility(Kind kind) {
    switch (kind) {
    case Kind::BTLACT_MAGNET_O:
        if (target().side == 0 && target().id == 3) break;
        [[fallthrough]];
    case Kind::BTLACT_MAGNET_A:
        if (!target().target_pp) co_await text(Text::MSG_BTL_PPSUCK_ZERO);
        else {
            auto amount = random_limit(o.random, 4);
            amount = static_cast<std::uint16_t>(amount + random_limit(o.random, 4) + 2);
            if (target().target_pp < amount) amount = target().target_pp;
            co_await text(Text::MSG_BTL_PPSUCK, amount);
            owner.meter.reduce_pp(target_slot(), amount);
            owner.meter.set_pp(attacker_slot(), static_cast<std::uint16_t>(attacker().target_pp + amount));
        }
        break;
    case Kind::BTLACT_REDUCEPP:
        if (!target().target_pp) co_await text(Text::MSG_BTL_PPSUCK_ZERO);
        else if (const auto scale = target().maximum_pp >> 4) {
            const auto amount = fifty_percent_variance(o.random, static_cast<std::uint16_t>(scale));
            owner.meter.reduce_pp(target_slot(), amount);
            co_await text(Text::MSG_BTL_PPSUCK_OBJ, static_cast<std::uint32_t>(static_cast<std::int16_t>(amount)));
        } else co_await text(Text::MSG_BTL_KIKANAI);
        break;
    case Kind::HEAL_POISON:
        if (target().afflictions[0] == 5) {
            target().afflictions[0] = 0; co_await text(Text::MSG_BTL_MODOKU_OFF);
        }
        break;
    case Kind::BTLACT_MIRROR: {
        const auto enemy = target().id;
        if (target().side && !target().npc && random_limit(o.random, 100) < o.roster.resources().enemy(enemy).mirror_success) {
            o.turns.mirror_enemy = enemy; o.turns.mirror_turns = 16;
            o.turns.mirror_backup = attacker();
            o.roster.mirror(attacker_slot(), target_slot());
            co_await text(Text::MSG_BTL_METAMORPHOSE_OK);
        } else co_await text(Text::MSG_BTL_METAMORPHOSE_NG);
        break;
    }
    case Kind::UNKNOWN_C290C6:
        if (o.turns.mirror_enemy) {
            for (unsigned slot = 0; slot < 32; ++slot) {
                const auto& b = o.roster.at(slot);
                if (!b.consciousness || b.side || b.id != 4) continue;
                o.turns.mirror_enemy = 0;
                o.roster.mirror(slot, o.turns.mirror_backup);
                o.roster.at(slot).action = 0;
                co_await text(Text::MSG_BTL_NEUTRALIZE_METAMORPH);
                break;
            }
        }
        target_all(); remove_dead(); co_await wait_animation();
        o.action.target = 8;
        for (unsigned i = 0; i < 32; ++i) {
            const auto slot = (i + 8) & 31;
            if (!slot) o.action.target = 0;
            if (o.action.target_flags & (std::uint32_t{1} << slot)) {
                o.names.fix_target(); co_await neutralize();
            }
            if (!o.action.target) throw std::runtime_error("Neutralizer lost its live target selector");
            ++*o.action.target;
        }
        o.action.target_flags = 0;
        break;
    case Kind::BTLACT_SPY:
        co_await text(Text::MSG_BTL_CHECK_OFFENSE, target().offense);
        co_await text(Text::MSG_BTL_CHECK_DEFENSE, target().defense);
        if (target().fire_resistance == 255) co_await text(Text::MSG_BTL_CHECK_ANTI_FIRE);
        if (target().freeze_resistance == 255) co_await text(Text::MSG_BTL_CHECK_ANTI_FREEZE);
        if (target().flash_resistance == 255) co_await text(Text::MSG_BTL_CHECK_ANTI_FLASH);
        if (target().paralysis_resistance == 255) co_await text(Text::MSG_BTL_CHECK_ANTI_PARALYSIS);
        if (target().hypnosis_resistance == 255) co_await text(Text::MSG_BTL_CHECK_BRAIN_LEVEL_0);
        if (target().brainshock_resistance == 255) co_await text(Text::MSG_BTL_CHECK_BRAIN_LEVEL_3);
        if (target().side == 1 && o.inventory.find_space(3) && o.encounter.item_dropped) {
            o.dialogue.prepared().set_item(static_cast<std::uint8_t>(o.encounter.item_dropped));
            co_await text(Text::MSG_BTL_CHECK_PRESENT_GET);
            o.encounter.item_dropped = 0;
        }
        break;
    case Kind::BTLACT_FREEZETIME: {
        o.windows.prompt_state().rolling_disabled = 1;
        const unsigned hits = random_limit(o.random, 4) + 1;
        const auto original = o.action.target_flags;
        for (unsigned i = 0; i < hits; ++i) {
            remove_untargettable();
            if (!o.action.target_flags) break;
            o.action.target_flags = random_target(original);
            o.action.target = static_cast<unsigned>(std::countr_zero(o.action.target_flags));
            o.names.fix_target(); co_await physical(2);
        }
        o.windows.prompt_state().rolling_disabled = 0;
        o.windows.prompt_state().half_meter_speed = 0;
        co_await text(Text::MSG_BTL_TIMESTOP_RET);
        o.action.target_flags = 0;
        break;
    }
    case Kind::BTLACT_FLY_HONEY: {
        bool found = false;
        for (unsigned slot = 8; slot < 32; ++slot) {
            auto& b = o.roster.at(slot);
            if (b.consciousness && b.side == 1 && (b.id == 93 || b.id == 192)) {
                b.id = 169; found = true; break;
            }
        }
        co_await text(found ? Text::MSG_BTL_G_HAEMITU_G : Text::MSG_BTL_G_HAEMITU_NG);
        break;
    }
    case Kind::BTLACT_RAINBOW_OF_COLOURS: {
        const auto x = attacker().x, y = attacker().y;
        o.roster.initialize_enemy(attacker_slot(), attacker().action_argument);
        attacker().x = x; attacker().y = y;
        attacker().resource = 0;
        const auto& ids = o.special.graphics.allocation().enemy_ids;
        for (unsigned i = 0; i < 4; ++i)
            if (ids[i] == attacker().id) { attacker().resource = static_cast<std::uint8_t>(i); break; }
        attacker().taken_turn = 1;
        o.action.skip_death_cleanup = 1;
        break;
    }
    case Kind::BTLACT_STEAL:
        if (target().side == 1 || target().npc) break;
        if (o.turns.mirror_enemy && !attacker().side && attacker().id == 4) break;
        if (attacker().action_argument) co_await take_item(255, attacker().action_argument);
        break;
    default: throw std::runtime_error("Action does not belong to the native utility family");
    }
    co_return 0;
}
} // namespace eb::native::battle::actions
