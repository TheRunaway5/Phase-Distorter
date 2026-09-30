#include "eb/native/party/view.hpp"

namespace eb::native::party {
std::span<const std::uint8_t> View::name_field(unsigned character) const { return state_->name_field(character); }
std::uint8_t View::item(unsigned character, unsigned position) const {
    return state_->character(character).items.at(position);
}
std::uint8_t View::equipped_position(unsigned character, EquipmentSlot slot) const {
    return state_->character(character).equipment.at(static_cast<unsigned>(slot));
}
} // namespace eb::native::party
