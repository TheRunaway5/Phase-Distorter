// Source: unknown/C1/C1FF2C.asm; C43317 and UPDATE_PARTY establish the
// controlled list's zero-based index. constants/battle.asm defines group0.
#include "eb/native/party/condition.hpp"
#include <stdexcept>

namespace eb::native::party {
std::uint16_t last_controlled_status(const State& state) {
    if (!state.controlled_count || state.controlled_count > state.controlled_order.size())
        throw std::out_of_range("Last controlled status requires a nonempty controlled count in1..6");
    const auto index = state.controlled_order[state.controlled_count - 1];
    if (index >= State::character_count)
        throw std::out_of_range("Last controlled status requires a record index in0..5");
    const auto status = state.character(unsigned(index) + 1).afflictions[
        unsigned(AfflictionGroup::PersistentEasyHeal)];
    return status == 1 || status == 2 ? 1 : 0;
}
bool refresh_last_controlled_status(const State& state, std::uint16_t& cached_status) {
    const auto status = last_controlled_status(state);
    const bool changed = status != cached_status;
    cached_status = status;
    return changed;
}
} // namespace eb::native::party
