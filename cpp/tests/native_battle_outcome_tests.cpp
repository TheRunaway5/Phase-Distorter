#include "eb/native/battle/outcomes.hpp"
#include "eb/native/saves/session.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>
using namespace eb;
using namespace eb::native;
namespace {
unsigned checks;
void check(bool p) { ++checks; if (!p) throw std::runtime_error("Outcome check " + std::to_string(checks)); }
void region(GameVersion version) {
    std::vector<std::uint8_t> image(0x300000);
    const unsigned table = version == GameVersion::US ? 0x159589 : 0x15a440;
    const unsigned stride = version == GameVersion::US ? 94 : 77;
    const unsigned shift = version == GameVersion::US ? 0 : 17;
    const auto word = [&](unsigned id, unsigned at, unsigned value) {
        image[table + id * stride + at - shift] = std::uint8_t(value);
        image[table + id * stride + at + 1 - shift] = std::uint8_t(value >> 8);
    };
    word(1, 33, 90); word(1, 58, 10); word(2, 33, 190); word(2, 58, 10);
    word(3, 33, 0xffff); word(3, 58, 0x101);
    image[table + stride + 60 - shift] = 10;
    auto enemies = battle::EnemyResources::import(image, version);
    auto resources = battle::OutcomeResources::import(image, version);
    party::State party(version); story::TickState clock;
    party.party_order = {1,2,0,0,0,0}; party.controlled_count = 2;
    auto& first = party.character(1); auto& second = party.character(2);
    first.speed = 10; first.offense = 50; second.speed = 20; second.offense = 100;
    WorldEncounterState encounter; encounter.roster = {1};
    battle::InstantWinState instant{{0xaaaa,0xbbbb,0xcccc,0xdddd},{11,22,33,44},{55,66,77,88}};
    check(battle::instant_win_check(instant, party, encounter, *enemies, *resources));
    check(instant.offense == std::array<std::uint16_t,4>{50,100,0xcccc,0xdddd});
    check(instant.hp == std::array<std::uint16_t,4>{11,22,33,44});
    first.speed = 9; check(!battle::instant_win_check(instant, party, encounter, *enemies, *resources));
    encounter.initiative = WorldBattleInitiative::PartyFirst; encounter.roster = {1,2};
    check(battle::instant_win_check(instant, party, encounter, *enemies, *resources));
    check(instant.hp[0] == 190 && instant.hp[1] == 90 && instant.defense[0] == 10);
    first.afflictions[0] = 1; check(!battle::instant_win_check(instant, party, encounter, *enemies, *resources));
    encounter.initiative = WorldBattleInitiative::EnemiesFirst; const auto retained = instant;
    check(!battle::instant_win_check(instant, party, encounter, *enemies, *resources));
    check(instant.offense == retained.offense && instant.hp == retained.hp);
    check(resources->enemy_defense(3) == 0x101 && enemies->enemy(3).defense == 1);
    for (const auto balance : {0u, 9999998u, 9999999u, 0x7ffffffeu, 0xfffffff0u})
        for (const auto amount : {0u, 1u, 2u, 0xffffu, 0x80000000u, 0xffffffffu}) {
            party.bank_balance = balance;
            const auto sum = std::uint32_t(balance + amount);
            const auto expected = sum < 0x80000000u && sum > 9999999 ? 9999999u : sum;
            check(battle::deposit_into_atm(party, amount) == std::uint32_t(expected - balance));
            check(party.bank_balance == expected);
        }
    first.afflictions.fill(0); first.current_hp = 0; first.target_hp = 40;
    second.current_hp = 12; second.target_hp = 3; second.hp_fraction = 1;
    second.current_pp = 9; second.target_pp = 2; second.pp_fraction = 0xffff;
    battle::reset_rolling(party, clock);
    check(first.target_hp == 1 && second.target_hp == 12 && second.target_pp == 9 && clock.fastest_hp_increase == 1);
    check(!battle::meters_settled(party, clock) && clock.fastest_hp_increase == 1);
    first.current_hp = 1; second.hp_fraction = second.pp_fraction = 0;
    check(battle::meters_settled(party, clock) && clock.fastest_hp_increase == 0);
    battle::Roster roster(enemies); roster.initialize_player(0, party, 1);
    first.afflictions = {7,2,1,2,3,4,5}; second.afflictions = {1,2,3,4,5,6,7};
    battle::reset_post_battle_stats(roster, party);
    check(first.afflictions == std::array<std::uint8_t,7>{7,2,0,0,0,4,0});
    check(second.afflictions == std::array<std::uint8_t,7>{1,2,3,4,5,6,7});
    party.party_psi = 0xa7; party.battle_money_deposited = 0x87654321;
    saves::PersistedState saved; saved.version = version;
    saved = saves::capture_party(party, saved);
    check(saved.game.reserved_c4 == std::array<std::uint8_t,4>{0x21,0x43,0x65,0x87});
    party::State restored(version); saves::restore_party(saved, restored);
    check(restored.party_psi == 0xa7 && restored.battle_money_deposited == 0x87654321);
}
}
int main() { try { region(GameVersion::US); region(GameVersion::JP); std::cout << "Native battle outcome values passed " << checks << " checks\n"; }
catch(const std::exception& e) { std::cerr << e.what() << '\n'; return 1; } }
