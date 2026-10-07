#include "executor_internal.hpp"
#include <algorithm>

namespace eb::native::battle::actions {
detail::Routine Executor::Operation::Execution::pray_effect(unsigned effect) {
    switch (effect) {
    case 0: co_return co_await recover_hp(target_slot(), target().maximum_hp >> 4);
    case 1: co_return co_await recover_hp(target_slot(), target().maximum_hp >> 3);
    case 2: co_return co_await recover_pp(target_slot(), std::max<std::uint16_t>(fifty_percent_variance(o.random, 5), 1));
    case 3: co_return co_await recover_hp(target_slot(), static_cast<std::uint16_t>(target().maximum_hp - attacker().target_hp));
    case 4: co_return co_await psi_damage(2, 180);
    case 5: co_return co_await flash(0);
    case 6:
        if (target().afflictions[0] == 1) co_await revive(target_slot(), target().maximum_hp);
        break;
    case 7:
        if (!(co_await reject_npc()))
            co_await text(inflict(target(), 2, 1) ? Text::MSG_BTL_NEMURI_ON : Text::MSG_BTL_KIKANAI);
        break;
    case 8:
        if (!(co_await reject_npc()))
            co_await text(inflict(target(), 3, 1) ? Text::MSG_BTL_HEN_ON : Text::MSG_BTL_KIKANAI);
        break;
    case 9: co_return co_await stat_action(Kind::BTLACT_DEFENSE_DOWN_A);
    default: throw std::runtime_error("Prayer effect leaves imported native catalog");
    }
    co_return 0;
}

detail::Routine Executor::Operation::Execution::pray() {
    const auto effect = o.resources.prayer(random_limit(o.random, 16));
    co_await text(o.resources.prayer_text(effect));
    if (effect <= 4) {
        target_all(effect == 4 ? 1 : 0);
        remove_npcs();
        if (effect == 3 || effect == 4) {
            remove_dead();
            o.action.target_flags = random_target(o.action.target_flags);
        }
    } else target_all();
    if (effect != 6) remove_dead();
    co_await wait_animation();
    o.action.target = 8;
    unsigned index = 8;
    do {
        if (o.action.target_flags & (std::uint32_t{1} << index)) {
            o.names.fix_target();
            co_await pray_effect(effect);
        }
        // C240A4 advances the live selector after the callee, not a captured
        // slot. The independent loop index supplies the next mask test.
        o.action.target = target_slot() + 1;
        ++index;
        if (index == 32) { index = 0; o.action.target = 0; }
    } while (index != 8);
    o.action.target_flags = 0;
    co_return 0;
}
} // namespace eb::native::battle::actions
