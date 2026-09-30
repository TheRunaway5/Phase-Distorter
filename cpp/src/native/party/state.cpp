// Source widths: include/structs.asm::{char_struct,game_state}. The allocation
// in bankconfig/common/ram.asm uses config.asm TOTAL_PARTY_COUNT (four+two).
#include "eb/native/party/state.hpp"
#include <stdexcept>
#include <utility>

namespace eb::native::party {
namespace {
unsigned character_index(unsigned id) {
    if (id < 1 || id > State::character_count)
        throw std::out_of_range("Native party character ID must be1..6");
    return id - 1;
}
std::span<std::uint8_t> writable(std::span<const std::uint8_t> field) {
    return {const_cast<std::uint8_t*>(field.data()), field.size()};
}
} // namespace
State::State(GameVersion version) : version_(version) {
    if (version != GameVersion::US && version != GameVersion::JP)
        throw std::invalid_argument("Unsupported native party region");
}
const Character& State::character(unsigned id) const { return characters_[character_index(id)]; }
Character& State::character(unsigned id) { return const_cast<Character&>(std::as_const(*this).character(id)); }
std::span<const std::uint8_t> State::name_field(unsigned id) const {
    return std::span(character_names_[character_index(id)]).first(version_ == GameVersion::JP ? 4 : 5);
}
std::span<std::uint8_t> State::name_field(unsigned id) { return writable(std::as_const(*this).name_field(id)); }
std::span<const std::uint8_t> State::name_field(NameField field) const {
    switch (field) {
    case NameField::Mother2Player: return mother2_player_name_;
    case NameField::EarthBoundPlayer: return earthbound_player_name_;
    case NameField::Pet: return pet_name_;
    case NameField::FavouriteFood: return favourite_food_;
    case NameField::FavouriteThing:
        return std::span(favourite_thing_).first(version_ == GameVersion::JP ? 9 : 12);
    }
    throw std::invalid_argument("Unsupported native party name field");
}
std::span<std::uint8_t> State::name_field(NameField field) { return writable(std::as_const(*this).name_field(field)); }
} // namespace eb::native::party
