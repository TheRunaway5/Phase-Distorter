#include "executor_internal.hpp"
#include <algorithm>

namespace eb::native::battle::actions {
namespace {
dialogue::ReferenceKey reference(std::uint32_t value) {
    return {static_cast<std::uint8_t>(value), static_cast<std::uint8_t>(value >> 8),
            static_cast<std::uint8_t>(value >> 16), static_cast<std::uint8_t>(value >> 24)};
}
}
detail::Routine Executor::Operation::Execution::actor() {
    // Rounds has performed CHECK_DEAD, the live selection scan and clear-focus
    // before publishing this current attacker and its taken-turn byte.
    if (attacker().afflictions[0] == 1 || attacker().afflictions[0] == 2) co_return 0;
    if (attacker().afflictions[0] == 3 || attacker().afflictions[2] == 3) {
        const auto action = attacker().action;
        if (o.actions.type(action) != 3 && action != 0 && action != 6 && action != 7 &&
            action != 280 && (action < 291 || action > 299)) {
            attacker().action = attacker().afflictions[0] == 3 ? 252 : 254;
            attacker().action_item_slot = 0;
        }
    }
    if (attacker().afflictions[2] == 1 && attacker().action) {
        attacker().action = 253; attacker().action_item_slot = 0;
    }
    if (attacker().afflictions[2] == 4 && attacker().action) {
        attacker().action = 255; attacker().afflictions[2] = 0; attacker().action_item_slot = 0;
    }
    if (attacker().afflictions[4] && attacker().action && o.actions.type(attacker().action) == 3)
        attacker().action = 256;
    if (attacker().afflictions[5] == 1 && attacker().action && !(story::next_random(o.random) & 7)) {
        attacker().action = 251; attacker().action_item_slot = 0;
    }
    if (o.actions.action(attacker().action).direction == 1 && o.actions.action(attacker().action).target == 0) {
        if (attacker().side == 0) {
            attacker().targeting = 1; attacker().target = static_cast<std::uint8_t>(attacker_slot() + 1);
        } else {
            attacker().targeting = 17;
            o.targets.choose_row_slot(attacker_slot(), attacker_slot());
        }
    }
    o.action.target = attacker_slot();
    o.names.fix_attacker(0); o.names.fix_target();
    std::uint16_t illness_damage = 0;
    const auto illness = attacker().afflictions[0];
    if (illness >= 4 && illness <= 7) {
        illness_damage = variance25(o.random, illness < 6 ? 20 : 4);
        co_await text(illness == 4 ? Text::MSG_BTL_KIMOCHI_DAMAGE :
                      illness == 5 ? Text::MSG_BTL_MODOKU_DAMAGE :
                      illness == 6 ? Text::MSG_BTL_NISSHA_DAMAGE : Text::MSG_BTL_KAZE_DAMAGE,
                      illness_damage);
    }
    owner.meter.reduce_hp(attacker_slot(), illness_damage);
    if (!attacker().hp) {
        co_await ko(attacker_slot());
        co_return 0;
    }
    if (attacker().side == 1) {
        o.targets.choose(attacker_slot());
        if (attacker().action == 66) attacker().action_argument = o.targets.select_stealable_item();
    }
    resolve_targets(attacker_slot());
    if (!attacker().side && o.actions.action(attacker().action).direction == 0) {
        remove_untargettable();
        if (!o.action.target_flags) {
            o.targets.choose(attacker_slot()); resolve_targets(attacker_slot()); remove_untargettable();
        }
    }
    bool confused = false;
    const bool mushroom = attacker().afflictions[1] == 1 && random_limit(o.random, 100) < 25;
    if ((mushroom || attacker().afflictions[3] == 1) && o.actions.action(attacker().action).target) {
        confused = true;
        do { strange_targets(); remove_untargettable(); } while (!o.action.target_flags);
    }
    if (attacker().action == 66 && !o.targets.has_stealable_item(attacker().action_argument))
        attacker().action_argument = 0;
    o.names.fix_attacker(0);
    o.dialogue.prepared().set_item(attacker().action_argument);
    o.names.select_first_target();
    if (attacker().side == 0 && attacker().id <= 4) {
        for (unsigned position = 0; position < 6; ++position) {
            if (o.party.party_order[position] == attacker().id) {
                meter = o.meters.begin_select(position); co_await std::suspend_always{}; break;
            }
        }
    }
    const auto pp = o.actions.action(attacker().action).pp_cost;
    if (pp && pp > attacker().target_pp) co_await text(Text::MSG_BTL_PSI_CANNOT);
    else {
        if (pp) owner.meter.reduce_pp(attacker_slot(), pp);
        if (attacker().side == 1 && attacker().action) {
            const auto type = o.actions.type(attacker().action);
            std::optional<unsigned> palette;
            if (type == 1 || type == 2) palette = 0;
            else if (type == 3) palette = 1;
            else if (type == 5) palette = 2;
            if (palette) {
                auto& colors = o.palette_effects.palette_state();
                for (unsigned bank = 0; bank < 4; ++bank) colors.palette(bank) = o.resources.attack_palette(*palette);
                colors.upload_mode = 16;
            }
            attacker().alternate_flash = 12;
            co_await wait(12);
        }
        if (confused) {
            if (attacker().afflictions[3] == 1) co_await text(Text::MSG_BTL_RND_ACT_HEN);
            if (attacker().afflictions[1] == 1) co_await text(Text::MSG_BTL_RND_ACT_KINOKO);
        }
        o.windows.output().policy().prompt_mode = 1;
        co_await raw_text(reference(o.actions.action(attacker().action).description));
        o.windows.output().policy().prompt_mode = 0;
        if (attacker().action) {
            co_await wait_animation();
            for (unsigned slot = 0; slot < 32; ++slot) {
                if (!(o.action.target_flags & (std::uint32_t{1} << slot))) continue;
                o.action.target = slot; o.names.fix_target();
                if (target().afflictions[0] == 1 && !o.resources.targets_dead(attacker().action)) {
                    co_await text(Text::MSG_BTL_NOT_EXIST); continue;
                }
                const auto kind = o.resources.kind(attacker().action);
                if (kind == Kind::None) continue;
                co_await execute(kind);
                co_await check_dead();
                o.windows.request_redraw();
                if (!o.targets.count(0) || !o.targets.count(1)) {
                    co_await consume_item(); co_return 0;
                }
                if (o.encounter.special_defeat == 3) { route = OutcomeRoute::DirectWin; co_return 0; }
                if (o.encounter.special_defeat == 2) {
                    co_await consume_item(); route = OutcomeRoute::ForcedVictory; co_return 0;
                }
                if (o.encounter.special_defeat == 1) { route = OutcomeRoute::DirectEscape; co_return 0; }
                while (o.background.effects().minimum_wait) co_await tick();
            }
        }
    }
    co_await recovery();
    co_return 0;
}

detail::Routine Executor::Operation::Execution::recovery() {
    if (attacker().side == 0) {
        co_await consume_item();
        if (o.turns.mirror_enemy && attacker().id == 4) {
            --o.turns.mirror_turns;
            if (!o.turns.mirror_turns) {
                o.turns.mirror_enemy = 0;
                o.roster.mirror(attacker_slot(), o.turns.mirror_backup);
                co_await text(Text::MSG_BTL_NEUTRALIZE_METAMORPH);
            }
        }
        co_await clear_selection();
    }
    co_await check_dead();
    o.action.target = attacker_slot(); o.names.fix_target();
    switch (attacker().afflictions[2]) {
    case 1:
        if (!(story::next_random(o.random) & 3)) {
            co_await text(Text::MSG_BTL_NEMURI_OFF); attacker().afflictions[2] = 0;
        }
        break;
    case 3:
        if (random_limit(o.random, 100) < 85) {
            co_await text(Text::MSG_BTL_SHIBARA_OFF); attacker().afflictions[2] = 0;
        }
        break;
    case 4: co_await text(Text::MSG_BTL_KOORI_STAT); attacker().afflictions[2] = 0; break;
    default: break;
    }
    if (attacker().afflictions[4]) {
        --attacker().afflictions[4];
        if (!attacker().afflictions[4]) co_await text(Text::MSG_BTL_FUUIN_OFF);
    }
    for (unsigned slot = 0; slot < 32; ++slot) o.roster.at(slot).alternate = 0;
    co_await check_dead(); co_await show_meters();
    co_return 0;
}
} // namespace eb::native::battle::actions
