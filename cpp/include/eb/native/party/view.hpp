#pragma once

#include "eb/native/party/state.hpp"

namespace eb::native::party {
// Read-only live binding. Copying a view copies its borrow, never party data.
// Re-read after each genuine callback; spans are not retained by this object.
// Character IDs are1..6; positions are0..13; equipment values remain one-based.
class View {
  public:
    explicit View(const State& state) : state_(&state) {}
    View(State&&) = delete;
    View(const State&&) = delete;
    GameVersion version() const { return state_->version(); }
    std::uint8_t controlled_count() const { return state_->controlled_count; }
    std::uint8_t party_count() const { return state_->party_count; }
    std::span<const std::uint8_t, 6> members() const { return state_->party_order; }
    std::span<const std::uint8_t, 6> controlled_members() const { return state_->controlled_order; }
    std::span<const std::uint8_t> name_field(unsigned one_based_character) const;
    std::uint8_t item(unsigned one_based_character, unsigned position) const;
    std::uint8_t equipped_position(unsigned one_based_character, EquipmentSlot) const;

  private:
    const State* state_;
};
} // namespace eb::native::party
