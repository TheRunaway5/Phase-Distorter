#include "native_dialogue_substitution_test_assets.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native::dialogue;
using dialogue_substitution_test_assets::Input;
unsigned checks{};
void check(bool ok, const char* message) {
    ++checks;
    if (!ok) throw std::runtime_error(message);
}
template<class F> void rejects(F function, const char* message) {
    bool rejected = false;
    try { function(); } catch (const std::exception&) { rejected = true; }
    check(rejected,message);
}
void equal(std::span<const std::uint8_t> actual, std::span<const std::uint8_t> expected, const char* message) {
    check(std::equal(actual.begin(),actual.end(),expected.begin(),expected.end()),message);
}
constexpr std::array<StatField, 22> party_fields{
    StatField::CharacterName,StatField::Level,StatField::Experience,StatField::CurrentHp,
    StatField::TargetHp,StatField::MaximumHp,StatField::CurrentPp,StatField::TargetPp,
    StatField::MaximumPp,StatField::Offense,StatField::Defense,StatField::Speed,
    StatField::Guts,StatField::Luck,StatField::Vitality,StatField::Iq,StatField::BaseIq,
    StatField::BaseOffense,StatField::BaseDefense,StatField::BaseSpeed,StatField::BaseGuts,StatField::BaseLuck
};
void descriptors(eb::GameVersion version) {
    Input fixture(version);
    const auto resources = fixture.load();
    check(resources->version() == version && resources->stat_count() == 96,"Stat region/count differs");
    check(resources->stat(0) == StatDescriptor{{StatField::None,0},StatKind::String,0},"Null descriptor became an invented live value");
    constexpr std::array<StatField, 7> globals{
        StatField::Mother2PlayerName,StatField::EarthBoundPlayerName,StatField::PetName,
        StatField::FavouriteFood,StatField::FavouriteThing,StatField::MoneyCarried,StatField::BankBalance
    };
    const std::array<unsigned,7> widths{12,24,6,6,fixture.favorite_size,4,4};
    for (unsigned i = 0; i < globals.size(); ++i)
        check(resources->stat(i + 1) == StatDescriptor{{globals[i],0},i < 5 ? StatKind::String : StatKind::Number,std::uint8_t(widths[i])},
              "Global stat semantic key/type/width differs");
    for (unsigned member = 0; member < 4; ++member) {
        for (unsigned field = 0; field < party_fields.size(); ++field) {
            const unsigned size = !field ? fixture.party_name_size : field == 2 ? 4 : field >= 3 && field <= 8 ? 2 : 1;
            check(resources->stat(8 + member * 22 + field) == StatDescriptor{
                      {party_fields[field],std::uint8_t(member)},field ? StatKind::Number : StatKind::String,std::uint8_t(size)},
                  "Party descriptor lost its field, member, or width");
        }
    }
    // Import the actual descriptor's meaning, not the table slot's assumed ID.
    fixture.descriptor(8,6,fixture.game_state + 36);
    check(fixture.load()->stat(8) == StatDescriptor{{StatField::PetName,0},StatKind::String,6},
          "Stat import ignored a valid semantic descriptor relocation");
    for (unsigned tag : {0x80u,0x83u,0xffu}) {
        fixture.descriptor(6,tag,fixture.game_state + 48 + fixture.favorite_size);
        check(fixture.load()->stat(6).size == 4,"Integer tags other than1/2 did not retain source four-byte semantics");
    }
    fixture.descriptor(6,0x82,fixture.game_state + 48 + fixture.favorite_size);
    rejects([&]{fixture.load();},"Partial-width live field descriptor was silently reinterpreted");
    fixture.descriptor(6,0x84,0x1234);
    rejects([&]{fixture.load();},"Unknown live address was exposed as a native stat");
    fixture.descriptor(6,4,fixture.game_state + 48 + fixture.favorite_size);
    rejects([&]{fixture.load();},"Numeric field accepted as a string mirror");
    rejects([&]{resources->stat(96);},"Out-of-table stat accepted");
}
void catalogs(eb::GameVersion version) {
    Input fixture(version);
    const auto resources = fixture.load();
    check(resources->item_count() == 254 && resources->teleport_count() == 17 &&
              resources->enemy_count() == 231 && resources->character_selector_count() == 19 &&
              resources->psi_count() == 54 && resources->psi_name_count() == 17 && resources->psi_suffix_count() == 5,
          "Catalog included adjacent undeclared records or lost a sentinel");
    for (unsigned item = 0; item < 254; ++item)
        equal(resources->item_text(item),std::span(fixture.image).subspan(fixture.items + item * fixture.item_stride,
              version == eb::GameVersion::US ? 5 : fixture.name_size),"Item text content/terminator/bound changed");
    for (unsigned destination = 0; destination < 17; ++destination)
        equal(resources->teleport_name(destination),std::span(fixture.image).subspan(fixture.teleports + destination * fixture.teleport_stride,fixture.name_size),
              "Teleport field was trimmed or included destination metadata");
    for (unsigned enemy = 0; enemy < 231; ++enemy)
        equal(resources->enemy_name(enemy),std::span(fixture.image).subspan(fixture.enemies + enemy * fixture.enemy_stride + fixture.enemy_prefix,fixture.name_size),
              "Enemy name included US article prefix or wrong regional stride");
    for (unsigned id = 1; id <= 4; ++id)
        check(resources->character_name(id) == CharacterNameSelection{CharacterNameKind::Party,std::uint16_t(id - 1),std::uint16_t(fixture.party_name_size)},
              "Player selector lost one-based source convention or regional bound");
    check(resources->character_name(7) == CharacterNameSelection{CharacterNameKind::Pet,0,6},"Pet selector was resolved through NPC enemy metadata");
    for (unsigned id : {5u,6u,8u,9u,10u,11u,12u,13u,14u,15u,16u,17u,18u})
        check(resources->character_name(id) == CharacterNameSelection{CharacterNameKind::Enemy,std::uint16_t((id * 13) % 231),std::uint16_t(fixture.name_size)},
              "NPC selector did not use the second table byte");
    for (unsigned id = 1; id < 53; ++id)
        check(resources->psi(id) == PsiNameSelection{std::uint8_t(id % 17 + 1),std::uint8_t(id % 5 + 1)},
              "PSI name or level metadata changed");
    for (unsigned name = 2; name <= 17; ++name)
        equal(resources->psi_name(name),std::span(fixture.image).subspan(fixture.names + (name - 1) * fixture.name_size,5),
              "PSI name lost one-based indexing or source terminator");
    for (unsigned level = 1; level <= 5; ++level)
        equal(resources->psi_suffix(level),std::span(fixture.image).subspan(fixture.suffixes + (level - 1) * 2,2),
              "PSI suffix changed its source glyph or terminator");
    for (unsigned id : {0u,19u,255u,65535u}) rejects([&]{resources->character_name(id);},"Unsupported character selector fabricated a name");
    for (unsigned id : {0u,53u,54u}) rejects([&]{resources->psi(id);},"Null/out-of-table PSI fabricated a name");
    for (unsigned id : {0u,1u,18u}) rejects([&]{resources->psi_name(id);},"Favourite or absent PSI name used immutable text");
    for (unsigned id : {0u,6u}) rejects([&]{resources->psi_suffix(id);},"Out-of-table suffix accepted");
    rejects([&]{resources->item_text(254);},"Out-of-table item accepted");
    rejects([&]{resources->teleport_name(17);},"Out-of-table teleport accepted");
    rejects([&]{resources->enemy_name(231);},"Out-of-table enemy accepted");
    const auto item = std::vector<std::uint8_t>(resources->item_text(1).begin(),resources->item_text(1).end());
    const auto name = std::vector<std::uint8_t>(resources->enemy_name(2).begin(),resources->enemy_name(2).end());
    std::fill(fixture.image.begin(),fixture.image.end(),0);
    equal(resources->item_text(1),item,"Imported item borrowed destroyed source bytes");
    equal(resources->enemy_name(2),name,"Imported enemy borrowed destroyed source bytes");
}
void bounded_and_continued(eb::GameVersion version) {
    Input fixture(version);
    // Bounded records may contain no zero at all. They must not fabricate a
    // terminator or consume the following numeric record fields.
    std::fill_n(fixture.image.begin() + fixture.teleports,fixture.name_size,0x71);
    std::fill_n(fixture.image.begin() + fixture.enemies + fixture.enemy_prefix,fixture.name_size,0x72);
    if (version == eb::GameVersion::JP) std::fill_n(fixture.image.begin() + fixture.items,fixture.name_size,0x73);
    else {
        // A real US C4487C input scans beyond both the name and first record.
        std::fill_n(fixture.image.begin() + fixture.items,fixture.item_stride + 3,0x71);
        fixture.image[fixture.items + fixture.item_stride + 3] = 0;
    }
    // GET_PSI_NAME also reads to NUL rather than to PSI_NAME_SIZE.
    std::fill_n(fixture.image.begin() + fixture.names + fixture.name_size,fixture.name_size + 2,0x74);
    fixture.image[fixture.names + 2 * fixture.name_size + 2] = 0;
    auto resources = fixture.load();
    check(resources->teleport_name(0).size() == fixture.name_size && resources->teleport_name(0).back() == 0x71,
          "Full teleport name was terminated or truncated");
    check(resources->enemy_name(0).size() == fixture.name_size && resources->enemy_name(0).back() == 0x72,
          "Full enemy name was terminated or truncated");
    check(resources->item_text(0).size() == (version == eb::GameVersion::US ? fixture.item_stride + 4 : fixture.name_size),
          "Item scan used the wrong regional bound");
    check(resources->psi_name(2).size() == fixture.name_size + 3,"PSI string was silently capped at its padded field");
    if (version == eb::GameVersion::US) {
        std::fill_n(fixture.image.begin() + fixture.items + 253 * fixture.item_stride,fixture.item_stride,0x71);
        rejects([&]{fixture.load();},"Unterminated final US item escaped its imported table");
    }
    Input missing(version);
    std::fill_n(missing.image.begin() + missing.names + 16 * missing.name_size,missing.name_size,0x71);
    rejects([&]{missing.load();},"Unterminated final PSI name escaped its imported table");
}
void invalid_inputs(eb::GameVersion version) {
    Input fixture(version);
    for (unsigned end : {fixture.stats + 96 * 3,fixture.items + 254 * fixture.item_stride,
                        fixture.teleports + 17 * fixture.teleport_stride,fixture.enemies + 231 * fixture.enemy_stride,
                        fixture.npc + 38,fixture.abilities + 810,fixture.names + 17 * fixture.name_size,fixture.suffixes + 10})
        rejects([&]{SubstitutionResources::import(std::span(fixture.image).first(end - 1),version);},"Truncated table accepted");
    fixture.image[fixture.npc + 11] = 231;
    rejects([&]{fixture.load();},"NPC enemy reference left imported catalog");
    fixture.image[fixture.npc + 11] = 0;
    check(fixture.load()->character_name(5).index == 0,"NPC's valid null enemy record was rejected");
    fixture.image[fixture.abilities + 15] = 18;
    rejects([&]{fixture.load();},"PSI name reference left imported catalog");
    fixture.image[fixture.abilities + 15] = 1; fixture.image[fixture.abilities + 16] = 6;
    rejects([&]{fixture.load();},"PSI level reference left imported suffixes");
    fixture.image[fixture.abilities + 16] = 0;
    rejects([&]{fixture.load();},"Half-null PSI record silently became a sentinel");
    fixture.image[fixture.abilities + 16] = 1; fixture.image[fixture.suffixes + 1] = 0x71;
    rejects([&]{fixture.load();},"Malformed suffix record was silently truncated");
    rejects([&]{SubstitutionResources::import(fixture.image,static_cast<eb::GameVersion>(17));},"Invalid region accepted");
}
} // namespace
int main() {
    try {
        for (const auto version : {eb::GameVersion::US,eb::GameVersion::JP}) {
            descriptors(version); catalogs(version); bounded_and_continued(version); invalid_inputs(version);
        }
        std::cout << "PASS substitution resources: " << checks << " checks\n";
        return 0;
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
