// CC_1C_01_data.asm binds these semantic names to char_struct/game_state fields.
#include "eb/native/party/dialogue_values.hpp"
#include <stdexcept>

namespace eb::native::party {
namespace {
using dialogue::StatField;
using dialogue::StatKey;
void global_key(StatKey key) {
    if (key.party_index)
        throw std::out_of_range("Global dialogue value has a party index");
}
unsigned chosen_character(StatKey key) {
    if (key.party_index >= State::chosen_character_count)
        throw std::out_of_range("Dialogue stat descriptors select only four chosen characters");
    return unsigned(key.party_index) + 1;
}
std::uint32_t number(const State& state, StatKey key) {
    if (key.field == StatField::MoneyCarried || key.field == StatField::BankBalance) {
        global_key(key);
        return key.field == StatField::MoneyCarried ? state.money_carried : state.bank_balance;
    }
    // Resolve only after identifying a numeric character field. Invalid/null
    // or string keys must not fabricate a zero-valued numeric substitution.
    switch (key.field) {
    case StatField::Level: case StatField::Experience:
    case StatField::CurrentHp: case StatField::TargetHp: case StatField::MaximumHp:
    case StatField::CurrentPp: case StatField::TargetPp: case StatField::MaximumPp:
    case StatField::Offense: case StatField::Defense: case StatField::Speed:
    case StatField::Guts: case StatField::Luck: case StatField::Vitality: case StatField::Iq:
    case StatField::BaseIq: case StatField::BaseOffense: case StatField::BaseDefense:
    case StatField::BaseSpeed: case StatField::BaseGuts: case StatField::BaseLuck: break;
    default: throw std::invalid_argument("Dialogue key is not a numeric party field");
    }
    const auto& value = state.character(chosen_character(key));
    switch (key.field) {
    case StatField::Level: return value.level;
    case StatField::Experience: return value.experience;
    case StatField::CurrentHp: return value.current_hp;
    case StatField::TargetHp: return value.target_hp;
    case StatField::MaximumHp: return value.maximum_hp;
    case StatField::CurrentPp: return value.current_pp;
    case StatField::TargetPp: return value.target_pp;
    case StatField::MaximumPp: return value.maximum_pp;
    case StatField::Offense: return value.offense;
    case StatField::Defense: return value.defense;
    case StatField::Speed: return value.speed;
    case StatField::Guts: return value.guts;
    case StatField::Luck: return value.luck;
    case StatField::Vitality: return value.vitality;
    case StatField::Iq: return value.iq;
    case StatField::BaseIq: return value.base_iq;
    case StatField::BaseOffense: return value.base_offense;
    case StatField::BaseDefense: return value.base_defense;
    case StatField::BaseSpeed: return value.base_speed;
    case StatField::BaseGuts: return value.base_guts;
    case StatField::BaseLuck: return value.base_luck;
    default: throw std::logic_error("Unreachable numeric party field");
    }
}
std::span<const std::uint8_t> string(const State& state, StatKey key) {
    if (key.field == StatField::CharacterName)
        return state.name_field(chosen_character(key));
    global_key(key);
    switch (key.field) {
    case StatField::Mother2PlayerName: return state.name_field(NameField::Mother2Player);
    case StatField::EarthBoundPlayerName: return state.name_field(NameField::EarthBoundPlayer);
    case StatField::PetName: return state.name_field(NameField::Pet);
    case StatField::FavouriteFood: return state.name_field(NameField::FavouriteFood);
    case StatField::FavouriteThing: return state.name_field(NameField::FavouriteThing);
    default: throw std::invalid_argument("Dialogue key is not a string party field");
    }
}
} // namespace
dialogue::SubstitutionValues dialogue_values(const State& state) {
    return {[&state](StatKey key) { return number(state, key); },
            [&state](StatKey key) { return string(state, key); }};
}
} // namespace eb::native::party
