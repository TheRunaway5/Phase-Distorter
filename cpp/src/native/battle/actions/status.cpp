#include "executor_internal.hpp"

namespace eb::native::battle::actions {
detail::Routine Executor::Operation::Execution::status_action(Kind kind) {
    if (kind != Kind::BTLACT_IMMOBILIZE && (co_await reject_npc())) co_return 0;
    unsigned group = 0, status = 0;
    Text applied = Text::MSG_BTL_KIKANAI;
    bool success = true;
    switch (kind) {
    case Kind::BTLACT_DIAMONDIZE:
        success = success255(o.random, target().paralysis_resistance);
        status = 2; applied = Text::MSG_BTL_DAIYA_ON; break;
    case Kind::BTLACT_PARALYZE:
        success = success_luck80(o.random, target()) && success255(o.random, target().paralysis_resistance);
        status = 3; applied = Text::MSG_BTL_SHIBIRE_ON; break;
    case Kind::BTLACT_NAUSEATE: status = 4; applied = Text::MSG_BTL_KIMOCHI_ON; break;
    case Kind::BTLACT_POISON: status = 5; applied = Text::MSG_BTL_MODOKU_ON; break;
    case Kind::BTLACT_COLD:
        success = success255(o.random, target().freeze_resistance);
        status = 7; applied = Text::MSG_BTL_KAZE_ON; break;
    case Kind::BTLACT_MUSHROOMIZE: group = 1; status = 1; applied = Text::MSG_BTL_KINOKO_ON; break;
    case Kind::BTLACT_POSSESS:
        success = target().side == 0;
        group = 1; status = 2; applied = Text::MSG_BTL_TORITSU_ON; break;
    case Kind::BTLACT_CRYING:
        success = success255(o.random, target().flash_resistance);
        [[fallthrough]];
    case Kind::BTLACT_CRYING2: group = 2; status = 2; applied = Text::MSG_BTL_NAMIDA_ON; break;
    case Kind::BTLACT_IMMOBILIZE: group = 2; status = 3; applied = Text::MSG_BTL_SHIBARA_ON; break;
    case Kind::BTLACT_SOLIDIFY:
        success = success_luck80(o.random, target());
        group = 2; status = 4; applied = Text::MSG_BTL_KOORI_ON; break;
    case Kind::BTLACT_DISTRACT:
        success = success_luck40(o.random, target()) && success255(o.random, target().paralysis_resistance)
                  && target().afflictions[4] == 0;
        if (success) target().afflictions[4] = 4;
        co_await text(success ? Text::MSG_BTL_FUUIN_ON : Text::MSG_BTL_KIKANAI);
        co_return 0;
    case Kind::BTLACT_FEELSTRANGE: group = 3; status = 1; applied = Text::MSG_BTL_HEN_ON; break;
    default: throw std::runtime_error("Action does not belong to the native status family");
    }
    success = success && inflict(target(), group, static_cast<std::uint16_t>(status));
    if (success && kind == Kind::BTLACT_DIAMONDIZE) {
        for (unsigned i = 1; i != 7; ++i) target().afflictions[i] = 0;
        o.encounter.experience_gained += target().experience;
        o.encounter.money_gained = static_cast<std::uint16_t>(o.encounter.money_gained + target().money);
    }
    co_await text(success ? applied : Text::MSG_BTL_KIKANAI);
    if (success && kind == Kind::BTLACT_POSSESS && !o.roster.at(6).consciousness) {
        o.roster.initialize_enemy(6, 213);
        o.roster.at(6).npc = 213;
        o.roster.at(6).taken_turn = 1;
    }
    co_return 0;
}

detail::Routine Executor::Operation::Execution::stat_action(Kind kind) {
    if (co_await reject_npc()) co_return 0;
    switch (kind) {
    case Kind::BTLACT_OFFENSE_UP_A: {
        const auto before = target().offense;
        increase_offense(target());
        co_await text(Text::MSG_BTL_OFFENSE_UP, static_cast<std::uint16_t>(target().offense - before));
        break;
    }
    case Kind::BTLACT_REDUCEOFF:
    case Kind::BTLACT_REDUCEOFFDEF: {
        auto before = target().offense;
        decrease_offense(target());
        co_await text(Text::MSG_BTL_OFFENSE_DOWN, static_cast<std::uint16_t>(before - target().offense));
        if (kind == Kind::BTLACT_REDUCEOFFDEF) {
            before = target().defense;
            decrease_defense(target());
            co_await text(Text::MSG_BTL_DEFENSE_DOWN, static_cast<std::uint16_t>(before - target().defense));
        }
        break;
    }
    case Kind::BTLACT_DEFENSE_DOWN_A:
        if (success_luck80(o.random, target())) {
            const auto before = target().defense;
            decrease_defense(target());
            auto delta = static_cast<std::uint16_t>(before - target().defense);
            // Source computes 0-delta-1, testing signed >=0, then sign-extends
            // the retained 16-bit display argument.
            if (static_cast<std::int16_t>(delta) < 0) delta = 0;
            co_await text(Text::MSG_BTL_DEFENSE_DOWN,
                          static_cast<std::uint32_t>(static_cast<std::int16_t>(delta)));
        } else co_await text(Text::MSG_BTL_KIKANAI);
        break;
    case Kind::BTLACT_CUTGUTS: {
        const auto before = target().guts;
        target().guts = static_cast<std::uint16_t>(target().guts * 3) >> 2;
        const auto floor = target().base_guts >> 1;
        if (target().guts < floor) target().guts = static_cast<std::uint16_t>(floor);
        co_await text(Text::MSG_BTL_GUTS_DOWN, static_cast<std::uint16_t>(before - target().guts));
        break;
    }
    default: throw std::runtime_error("Action does not belong to the native stat family");
    }
    co_return 0;
}
} // namespace eb::native::battle::actions
