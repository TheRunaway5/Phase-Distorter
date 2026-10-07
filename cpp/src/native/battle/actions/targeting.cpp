#include "executor_internal.hpp"
#include <stdexcept>
namespace eb::native::battle::actions {
namespace {
bool shield_targets_npcs(unsigned id) { return id == 42 || id == 43 || id == 46 || id == 47; }
}
void Executor::Operation::Execution::target_all(int side) {
    o.action.target_flags = 0;
    for (unsigned i = 0; i < Roster::size; ++i) {
        const auto& actor = o.roster.at(i);
        if (actor.consciousness && (side < 0 || (side == 0 ? !actor.side || actor.npc : actor.side == 1)))
            o.action.target_flags |= std::uint32_t(1) << i;
    }
}
void Executor::Operation::Execution::target_row(unsigned row) {
    o.action.target_flags = 0;
    for (unsigned i = 0; i < Roster::size; ++i) {
        const auto& actor = o.roster.at(i);
        if (actor.consciousness && ((!row && !actor.side) ||
            ((row == 1 || row == 2) && actor.side == 1 && actor.row == row - 1)))
            o.action.target_flags |= std::uint32_t(1) << i;
    }
}
void Executor::Operation::Execution::remove_npcs() {
    for (unsigned i = 0; i < Roster::size; ++i)
        if (o.roster.at(i).consciousness && o.roster.at(i).npc) o.action.target_flags &= ~(std::uint32_t(1) << i);
}
void Executor::Operation::Execution::remove_dead() {
    for (unsigned i = 0; i < Roster::size; ++i)
        if (o.roster.at(i).afflictions[0] == 1) o.action.target_flags &= ~(std::uint32_t(1) << i);
}
void Executor::Operation::Execution::remove_untargettable() {
    if (o.resources.targets_dead(attacker().action)) return;
    for (unsigned i = 0; i < Roster::size; ++i) {
        const auto& actor = o.roster.at(i);
        if (!actor.consciousness || actor.afflictions[0] == 1 || actor.afflictions[0] == 2)
            o.action.target_flags &= ~(std::uint32_t(1) << i);
    }
}
std::uint32_t Executor::Operation::Execution::random_target(std::uint32_t mask) {
    if (!mask) return 0;
    auto steps = (story::next_random(o.random) & 31) + 1;
    unsigned index{};
    while (steps--) {
        do { index = (index + 1) & 31; } while (!(mask & (std::uint32_t(1) << index)));
    }
    return std::uint32_t(1) << index;
}
void Executor::Operation::Execution::resolve_targets(unsigned slot) {
    const auto& actor = o.roster.at(slot);
    const auto set = [&](unsigned target) {
        if (target >= Roster::size) throw std::invalid_argument("Target bit leaves the owned32-slot mask");
        o.action.target_flags |= std::uint32_t(1) << target;
    };
    o.action.target_flags = 0;
    switch (actor.targeting) {
    case 1: set(std::uint16_t(actor.target - 1)); break;
    case 2: case 4:
        target_all(0);
        if (!shield_targets_npcs(actor.action) && !actor.side) remove_npcs();
        remove_untargettable(); break;
    case 17: {
        const auto& rows = o.targets.rows();
        if (actor.target > rows.front_count) set(rows.back.at(actor.target - rows.front_count - 1));
        else set(rows.front.at(unsigned(actor.target) - 1));
        if (actor.action == 39)
            for (unsigned i = 8; i < Roster::size; ++i)
                if (o.roster.at(i).consciousness && o.roster.at(i).afflictions[0] == 1) {
                    o.action.target_flags = 0; set(i); break;
                }
        break;
    }
    case 18: target_row(actor.target); remove_npcs(); remove_untargettable(); break;
    case 20: target_all(1); if (!actor.side) remove_npcs(); remove_untargettable(); break;
    default: break;
    }
}
void Executor::Operation::Execution::strange_targets() {
    o.action.target_flags = 0;
    switch (attacker().targeting & 7) {
    case 1: target_all(); o.action.target_flags = random_target(o.action.target_flags); break;
    case 2: target_row(story::next_random(o.random) % 3); break;
    case 4:
        target_all(story::next_random(o.random) & 1 ? 0 : 1);
        if (!shield_targets_npcs(attacker().action) && !attacker().side) remove_npcs();
        break;
    default: break;
    }
}
detail::Routine Executor::Operation::Execution::wait_animation() {
    while (o.psi.busy(o.swirl)) co_await tick();
    co_return 0;
}
detail::Routine Executor::Operation::Execution::each_target(Kind kind) {
    co_await wait_animation();
    o.action.target = 8;
    for (unsigned index = 8; index < Roster::size; ++index) {
        if (o.action.target_flags & (std::uint32_t(1) << index)) {
            o.names.fix_target(); co_await execute(kind);
        }
        // Source increments the live pointer after a nested action returns.
        if (!o.action.target) throw std::invalid_argument("Target helper lost its live selector");
        ++*o.action.target;
    }
    o.action.target = 0;
    for (unsigned index = 0; index < 8; ++index) {
        if (o.action.target_flags & (std::uint32_t(1) << index)) {
            o.names.fix_target(); co_await execute(kind);
        }
        if (!o.action.target) throw std::invalid_argument("Target helper lost its live selector");
        ++*o.action.target;
    }
    co_return 0;
}
} // namespace eb::native::battle::actions
