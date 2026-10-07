#include "executor_internal.hpp"
#include "eb/native/battle/actions/special.hpp"
#include <algorithm>

namespace eb::native::battle::actions {
namespace {
std::uint16_t word(unsigned value) { return static_cast<std::uint16_t>(value); }
}
detail::Routine Executor::Operation::Execution::call_help(bool sow) {
    const auto failure = sow ? Text::MSG_BTL_TANEMAKI_NO : Text::MSG_BTL_NAKAMA_NO;
    if (!attacker().side || !o.resources.group_contains(o.special.world_encounter.group, attacker().action_argument)) {
        co_await text(failure); co_return 0;
    }
    const auto enemy = attacker().action_argument;
    const auto& config = o.roster.resources().enemy(enemy);
    // The original starts its physical pointer at slot0 but its loop counter
    // at8; consequently only slots0..23 contribute to the saturation chance.
    unsigned present = 0;
    for (unsigned slot = 0; slot < 24; ++slot) {
        const auto& b = o.roster.at(slot);
        if (b.consciousness == 1 && b.afflictions[0] != 1 && b.original_enemy == enemy) ++present;
    }
    // DIVISION16S_DIVISOR_POSITIVE enters the unsigned division loop directly.
    // Its zero-divisor result is the full quotient word, FFFF.
    const auto chance = config.max_called
        ? word(word(config.max_called - present) * 205) / config.max_called
        : 0xffffu;
    if (!success255(o.random, chance)) { co_await text(failure); co_return 0; }
    const auto width = o.targets.sprite_width(config.sprite);
    const auto margin = word(width * 8 + 16);
    unsigned row = config.row;
    const auto total_width = [&] {
        std::uint16_t total = 0;
        for (unsigned slot = 8; slot < 32; ++slot)
            if (o.roster.at(slot).consciousness == 1)
                total = word(total + o.targets.sprite_width(o.roster.at(slot).sprite));
        return total;
    };
    std::optional<unsigned> x;
    if (word(total_width() + width) <= 32) {
        std::uint16_t near_left = 128, near_right = 128, far_left = 128, far_right = 128;
        for (unsigned slot = 8; slot < 32; ++slot) {
            const auto& b = o.roster.at(slot);
            if (!b.consciousness) continue;
            const auto half = word(o.targets.sprite_width(b.sprite) * 8) >> 1;
            auto& left = b.row == row ? near_left : far_left;
            auto& right = b.row == row ? near_right : far_right;
            left = std::min(left, word(b.x - half));
            right = std::max(right, word(b.x + half));
        }
        const auto find_space = [&](std::uint16_t left, std::uint16_t right) -> std::optional<unsigned> {
            if (word(128 - left) < word(right - 128)) {
                if (left > margin) return word(left - (margin >> 1));
            } else if (word(right + margin) < 256) return word(right + (margin >> 1));
            return {};
        };
        x = find_space(near_left, near_right);
        if (!x) { row = word(1 - row); x = find_space(far_left, far_right); }
    }
    if (!x) {
        for (unsigned slot = 8; slot < 32; ++slot) {
            auto& b = o.roster.at(slot);
            if (b.consciousness == 1 && b.afflictions[0] == 1 && o.targets.sprite_width(b.sprite) == width) {
                b.consciousness = 0; x = b.x; row = b.row; break;
            }
        }
        if (!x) { co_await text(failure); co_return 0; }
    }
    if (word(total_width() + width) > 32) { co_await text(failure); co_return 0; }
    unsigned slot = 8;
    while (slot < 32 && o.roster.at(slot).consciousness) ++slot;
    if (slot == 32) throw std::runtime_error("Call-for-help destination leaves the owned battler table");
    o.action.target = slot;
    o.roster.initialize_enemy(slot, enemy);
    target().x = static_cast<std::uint8_t>(*x);
    target().row = static_cast<std::uint8_t>(row);
    target().y = target().row ? 128 : 144;
    target().resource = 0;
    const auto& ids = o.special.graphics.allocation().enemy_ids;
    for (unsigned resource = 0; resource < 4; ++resource)
        if (ids[resource] == enemy) { target().resource = static_cast<std::uint8_t>(resource); break; }
    target().taken_turn = 1;
    o.names.fix_target();
    co_await text(sow ? Text::MSG_BTL_TANEMAKI_HAETA : Text::MSG_BTL_NAKAMA_KITA);
    co_return 0;
}
} // namespace eb::native::battle::actions
