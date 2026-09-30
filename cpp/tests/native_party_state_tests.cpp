#include "eb/native/party/state.hpp"
#include "eb/native/party/view.hpp"
#include "eb/native/party/dialogue_values.hpp"
#include <algorithm>
#include <iostream>
#include <limits>
#include <stdexcept>
#include <type_traits>

namespace {
using namespace eb::native::party;
using eb::native::dialogue::StatField;
using eb::native::dialogue::StatKey;
unsigned checks{};
void check(bool value, const char* message) {
    ++checks;
    if (!value) throw std::runtime_error(message);
}
template<class F> void rejects(F operation, const char* message) {
    bool rejected = false;
    try { operation(); } catch (const std::exception&) { rejected = true; }
    check(rejected,message);
}
static_assert(!std::is_move_constructible_v<State> && !std::is_copy_constructible_v<State>);
static_assert(std::is_copy_constructible_v<View> && std::is_copy_assignable_v<View>);
static_assert(!std::is_constructible_v<View,State&&>);

void live_inventory(eb::GameVersion version) {
    State state(version);
    View view(state);
    const auto copy = view;
    check(view.version() == version,"Party view changed region");
    state.party_order = {4,1,5,2,6,3};
    state.controlled_order = {3,1,4,2,0,0};
    state.party_count = 6;
    state.controlled_count = 4;
    check(view.members().size() == 6 && view.members()[2] == 5 && view.members()[4] == 6 &&
              view.controlled_members()[0] == 3 && view.party_count() == 6 && view.controlled_count() == 4,
          "Party order was conflated with character records or controlled order");
    state.controlled_count = 6;
    check(copy.controlled_count() == 6,"Borrowed view snapshotted or normalized controlled count");
    state.controlled_count = 0xff;
    check(view.controlled_count() == 0xff,"Source byte count was truncated to a list index");
    state.controlled_count = 2;
    state.controlled_order[1] = 4;
    check(copy.controlled_count() == 2 && copy.controlled_members()[1] == 4,
          "Copied view did not observe later authoritative party mutation");
    for (unsigned member = 1; member <= 6; ++member) {
        auto& character = state.character(member);
        // Holes and duplicate IDs remain distinct inventory positions.
        for (unsigned slot = 0; slot < 14; ++slot)
            character.items[slot] = std::uint8_t(slot % 3 ? member + slot : 0);
        character.items[1] = character.items[12] = 42;
        character.equipment = {2,13,0,14};
        for (unsigned slot = 0; slot < 14; ++slot)
            check(view.item(member,slot) == character.items[slot],"Inventory position or empty slot changed");
        check(view.item(member,1) == view.item(member,12) &&
                  view.equipped_position(member,EquipmentSlot::Weapon) == 2 &&
                  view.equipped_position(member,EquipmentSlot::Body) == 13 &&
                  view.equipped_position(member,EquipmentSlot::Arms) == 0 &&
                  view.equipped_position(member,EquipmentSlot::Other) == 14,
              "Equipment values became item IDs rather than one-based positions");
        character.equipment[3] = 0xff;
        check(copy.equipped_position(member,EquipmentSlot::Other) == 0xff,
              "Invalid equipped position was clamped instead of retained as a nonmatching byte");
        character.items[13] = 0xff;
        check(copy.item(member,13) == 0xff,"Item content validation was hidden in the party view");
    }
    for (unsigned id : {0u,7u,65535u,std::numeric_limits<unsigned>::max()}) {
        rejects([&]{view.name_field(id);},"Unsupported character fabricated a name");
        rejects([&]{view.item(id,0);},"Unsupported character read another party record");
        rejects([&]{state.character(id);},"Mutable character accessor allowed an invalid ID");
    }
    rejects([&]{view.item(1,14);},"Inventory read crossed its fourteenth position");
    rejects([&]{view.equipped_position(1,static_cast<EquipmentSlot>(4));},"Invalid equipment category accepted");
}

void raw_names(eb::GameVersion version) {
    State state(version);
    View view(state);
    const auto values = dialogue_values(state);
    const unsigned width = version == eb::GameVersion::US ? 5 : 4;
    for (unsigned member = 1; member <= 4; ++member) {
        auto name = state.name_field(member);
        check(name.size() == width,"Raw regional character field extent changed");
        for (unsigned i = 0; i < name.size(); ++i) name[i] = std::uint8_t(0x60 + member + i);
        const auto text = values.read_string({StatField::CharacterName,std::uint8_t(member - 1)});
        check(text.data() == name.data() && view.name_field(member).data() == name.data() &&
                  text.size() == width && std::find(text.begin(),text.end(),0) == text.end(),
              "Legal full character field was copied, shortened, or given a fabricated NUL");
        name[1] = 0;
        check(values.read_string({StatField::CharacterName,std::uint8_t(member - 1)})[1] == 0 &&
                  values.read_string({StatField::CharacterName,std::uint8_t(member - 1)}).back() == name.back(),
              "Embedded zero erased retained raw name suffix or live provider data");
    }
    // PARTY_CHARACTERS allocates six full char_struct records. The two guest
    // names are legal inventory inputs but absent from CC1C01's96 descriptors.
    for (unsigned member : {5u,6u}) {
        auto name = state.name_field(member);
        std::fill(name.begin(),name.end(),std::uint8_t(0x70 + member));
        check(view.name_field(member).size() == width && view.name_field(member).data() == name.data() &&
                  view.name_field(member).back() == 0x70 + member,
              "Guest inventory name did not use its actual regional character record");
        rejects([&]{values.read_string({StatField::CharacterName,std::uint8_t(member - 1)});},
                "Guest record silently expanded source dialogue stat descriptors");
    }
    struct NameCase { NameField field; StatField key; unsigned width; };
    const std::array cases{
        NameCase{NameField::Mother2Player,StatField::Mother2PlayerName,12},
        NameCase{NameField::EarthBoundPlayer,StatField::EarthBoundPlayerName,24},
        NameCase{NameField::Pet,StatField::PetName,6},
        NameCase{NameField::FavouriteFood,StatField::FavouriteFood,6},
        NameCase{NameField::FavouriteThing,StatField::FavouriteThing,version == eb::GameVersion::US ? 12u : 9u}
    };
    for (const auto& test : cases) {
        auto field = state.name_field(test.field);
        std::fill(field.begin(),field.end(),0x79);
        const auto result = values.read_string({test.key,0});
        check(result.size() == test.width && result.data() == field.data() && result.back() == 0x79,
              "Global raw name lost its source field capacity or shared owner");
        field.back() = 0;
        check(values.read_string({test.key,0}).back() == 0,"Substitution callback retained a stale string");
        rejects([&]{values.read_string({test.key,1});},"Global name accepted a character index");
    }
    rejects([&]{state.name_field(static_cast<NameField>(99));},"Invalid raw name selector accepted");
    rejects([&]{values.read_string({StatField::CharacterName,4});},"Zero-based substitution index escaped chosen four");
    rejects([&]{values.read_string({StatField::MoneyCarried,0});},"Numeric key fabricated a name");
    rejects([&]{values.read_string({StatField::None,0});},"Absent stat fabricated a string");
}

template<class T>
void numeric_field(State& state, T Character::*member, StatField key) {
    static_assert(std::is_unsigned_v<T>);
    const auto values = dialogue_values(state);
    for (unsigned character = 1; character <= 4; ++character) {
        const StatKey request{key,std::uint8_t(character - 1)};
        for (const auto value : {T(0),T(character),std::numeric_limits<T>::max()}) {
            state.character(character).*member = value;
            check(values.read_number(request) == value,"Typed stat value lost width/member or read stale state");
        }
    }
}
void numeric_values(eb::GameVersion version) {
    State state(version);
    // Independent member/key pairs protect each imported descriptor's semantic
    // binding. These are assertions of the source fields, not table-slot IDs.
    numeric_field(state,&Character::level,StatField::Level);
    numeric_field(state,&Character::experience,StatField::Experience);
    numeric_field(state,&Character::current_hp,StatField::CurrentHp);
    numeric_field(state,&Character::target_hp,StatField::TargetHp);
    numeric_field(state,&Character::maximum_hp,StatField::MaximumHp);
    numeric_field(state,&Character::current_pp,StatField::CurrentPp);
    numeric_field(state,&Character::target_pp,StatField::TargetPp);
    numeric_field(state,&Character::maximum_pp,StatField::MaximumPp);
    numeric_field(state,&Character::offense,StatField::Offense);
    numeric_field(state,&Character::defense,StatField::Defense);
    numeric_field(state,&Character::speed,StatField::Speed);
    numeric_field(state,&Character::guts,StatField::Guts);
    numeric_field(state,&Character::luck,StatField::Luck);
    numeric_field(state,&Character::vitality,StatField::Vitality);
    numeric_field(state,&Character::iq,StatField::Iq);
    numeric_field(state,&Character::base_iq,StatField::BaseIq);
    numeric_field(state,&Character::base_offense,StatField::BaseOffense);
    numeric_field(state,&Character::base_defense,StatField::BaseDefense);
    numeric_field(state,&Character::base_speed,StatField::BaseSpeed);
    numeric_field(state,&Character::base_guts,StatField::BaseGuts);
    numeric_field(state,&Character::base_luck,StatField::BaseLuck);
    const auto values = dialogue_values(state);
    state.money_carried = 0xfedcba98;
    state.bank_balance = 0x12345678;
    check(values.read_number({StatField::MoneyCarried,0}) == 0xfedcba98 &&
              values.read_number({StatField::BankBalance,0}) == 0x12345678,"Money/bank lost source32 width or identity");
    state.money_carried = 7;
    check(values.read_number({StatField::MoneyCarried,0}) == 7,"Wallet callback snapshotted money");
    rejects([&]{values.read_number({StatField::MoneyCarried,1});},"Global numeric field accepted party index");
    rejects([&]{values.read_number({StatField::Level,4});},"Numeric field read past the four characters");
    state.character(5).level = 91;
    state.character(6).level = 92;
    rejects([&]{values.read_number({StatField::Level,5});},"Guest numeric record expanded source stat descriptors");
    rejects([&]{values.read_number({StatField::None,0});},"Absent key fabricated numeric zero");
    rejects([&]{values.read_number({StatField::CharacterName,0});},"String key fabricated numeric zero");
    rejects([&]{values.read_number({static_cast<StatField>(255),0});},"Unknown numeric key accepted");
}
} // namespace
int main() {
    try {
        for (const auto version : {eb::GameVersion::US,eb::GameVersion::JP}) {
            live_inventory(version);
            raw_names(version);
            numeric_values(version);
        }
        rejects([]{State invalid(static_cast<eb::GameVersion>(2));},"Invalid party region accepted");
        std::cout << "PASS " << checks << " native party owner, live inventory and typed substitution checks\n";
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
