#include "executor_internal.hpp"

namespace eb::native::battle::actions {
detail::Routine Executor::Operation::Execution::physical_damage(unsigned multiplier) {
    auto amount = static_cast<std::uint16_t>(attacker().offense * multiplier - target().defense);
    // CLC/SBC #0 tests (amount - 1), including signed overflow; this is a
    // signed strictly-positive test of the original source-width amount.
    if (static_cast<std::int16_t>(amount) > 0) amount = variance25(o.random, amount);
    if (static_cast<std::int16_t>(amount) <= 0) amount = 1;
    co_return co_await resist_damage(amount, 255);
}

detail::Routine Executor::Operation::Execution::physical(unsigned multiplier, bool shooting,
                                                         unsigned added_status) {
    if (added_status && (co_await reject_npc())) co_return 0;
    if (co_await miss(shooting)) co_return 0;
    if (!shooting && (co_await smash())) co_return 0;
    if (dodge(o.random, attacker(), target())) {
        co_await text(shooting ? Text::MSG_BTL_UTU_YOKETA : Text::MSG_BTL_TATAKU_YOKETA);
        co_return 0;
    }
    co_await physical_damage(multiplier);
    if (!shooting) co_await heal_strangeness();
    if (added_status == 5) {
        if (inflict(target(), 0, 5)) co_await text(Text::MSG_BTL_MODOKU_ON);
    } else if (added_status == 2 && success_luck80(o.random, target()) && inflict(target(), 0, 2)) {
        for (unsigned i = 1; i != 7; ++i) target().afflictions[i] = 0;
        o.encounter.experience_gained += target().experience;
        o.encounter.money_gained = static_cast<std::uint16_t>(o.encounter.money_gained + target().money);
        co_await text(Text::MSG_BTL_DAIYA_ON);
    }
    co_return 0;
}
} // namespace eb::native::battle::actions
