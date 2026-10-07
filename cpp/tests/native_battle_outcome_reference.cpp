// Complete original helper executions. The encounter lifecycle reference owns
// the separate same-stack BATTLE_ROUTINE/world-return proof.
#include "eb/native/battle/outcomes.hpp"
#include "eb/asset_store.hpp"
#include "generated_assets.hpp"
#include "native_encounter_source_fixture.hpp"
#include <iostream>
#include <stdexcept>
using namespace eb;
using namespace eb::native;
namespace {
unsigned checks{}, calls{};
void equal(std::uint32_t source, std::uint32_t native, const char* name) {
    ++checks;
    if (source != native) throw std::runtime_error(std::string(name) + " original=" + std::to_string(source) + " native=" + std::to_string(native));
}
std::uint32_t wide(const encounter_reference::Source& s, unsigned at) { return s.word(at) | std::uint32_t(s.word(at + 2)) << 16; }
void wide(encounter_reference::Source& s, unsigned at, std::uint32_t value) { s.put(at, value); s.put(at + 2, value >> 16); }
void run(const GameAssets& assets) {
    checks = calls = 0;
    encounter_reference::Source source(assets);
    const bool jp = source.jp;
    const unsigned game = jp ? 0x9aa9 : 0x97f5, characters = jp ? 0x9c7f : 0x99ce;
    const unsigned shift = jp ? 3 : 0, cd = jp ? 1 : 0, stride = jp ? 94 : 95;
    auto enemies = battle::EnemyResources::import(assets.image, assets.version);
    auto resources = battle::OutcomeResources::import(assets.image, assets.version);
    party::State party(assets.version);
    story::TickState clock;
    const auto call = [&](unsigned us, unsigned japanese, unsigned a=0, unsigned x=0, unsigned y=0) {
        source.call(jp ? japanese : us, a, x, y); ++calls;
    };
    for (const auto balance : {0u,9999998u,9999999u,10000000u,0x7ffffffeu,0xfffffff0u})
        for (const auto amount : {0u,1u,2u,0xffffu,0x80000000u,0xffffffffu}) {
            party.bank_balance = balance; wide(source, game + 64 - shift, balance);
            wide(source, source.cpu.direct_page + 14, amount);
            call(0xc2281d, 0xc226e9);
            equal(wide(source, source.cpu.direct_page + 6), battle::deposit_into_atm(party, amount), "Deposit return");
            equal(wide(source, game + 64 - shift), party.bank_balance, "ATM balance");
        }
    for (unsigned seed = 0; seed < 64; ++seed) {
        party.controlled_count = 4; source.bus->work_ram[game + 175 - shift] = 4;
        for (unsigned i = 0; i < 4; ++i) {
            const auto id = (i + seed) % 4 + 1;
            party.party_order[i] = std::uint8_t(id); source.bus->work_ram[game + 122 - shift + i] = std::uint8_t(id);
            auto& p = party.character(id); const auto at = characters + (id - 1) * stride;
            p.afflictions[0] = std::uint8_t(seed % 8); source.bus->work_ram[at + 14 - cd] = p.afflictions[0];
            p.current_hp = seed & 1 ? 0 : 40; p.target_hp = seed & 2 ? 12 : 56; p.hp_fraction = seed & 4 ? 0xffff : 0;
            p.current_pp = seed & 8 ? 0 : 17; p.target_pp = seed & 16 ? 7 : 19; p.pp_fraction = seed & 32 ? 1 : 0;
            source.put(at + 67 - cd, p.hp_fraction); source.put(at + 69 - cd, p.current_hp); source.put(at + 71 - cd, p.target_hp);
            source.put(at + 73 - cd, p.pp_fraction); source.put(at + 75 - cd, p.current_pp); source.put(at + 77 - cd, p.target_pp);
        }
        call(0xc20f9a, 0xc20e2b); battle::reset_rolling(party, clock);
        for (unsigned id = 1; id <= 4; ++id) {
            const auto& p = party.character(id); const auto at = characters + (id - 1) * stride;
            equal(source.word(at + 71 - cd), p.target_hp, "Reset HP target");
            equal(source.word(at + 77 - cd), p.target_pp, "Reset PP target");
        }
        equal(source.bus->work_ram[jp ? 0x994a : 0x9696], clock.fastest_hp_increase, "Fast meter flag");
        call(0xc2108c, 0xc20f28);
        equal(source.cpu.accumulator, battle::meters_settled(party, clock), "Meter settled return");
        equal(source.bus->work_ram[jp ? 0x994a : 0x9696], clock.fastest_hp_increase, "Retained fast meter flag");
    }
    for (unsigned seed = 0; seed < 24; ++seed) {
        battle::Roster roster(enemies);
        const unsigned records = jp ? 0xa1ae : 0x9fac;
        std::array<std::uint8_t,32*78> original_records;
        for (unsigned i = 0; i < original_records.size(); ++i)
            source.bus->work_ram[records + i] = original_records[i] = std::uint8_t(seed * 13 + i * 17);
        for (unsigned slot = 0; slot < 32; ++slot) {
            auto& b = roster.at(slot);
            b.consciousness = std::uint8_t((seed + slot) % 3);
            b.side = std::uint8_t((seed + slot / 2) % 2);
            b.npc = std::uint8_t((seed + slot) % 5 == 0 ? 8 : 0);
            b.row = std::uint8_t((slot + seed) % 6);
            for (const auto [offset,value] : {std::pair{12u,b.consciousness}, {14u,b.side}, {15u,b.npc}, {16u,b.row}})
                source.bus->work_ram[records + slot * 78 + offset] = original_records[slot * 78 + offset] = value;
        }
        for (unsigned character = 1; character <= 6; ++character)
            for (unsigned group = 0; group < 7; ++group)
                source.bus->work_ram[characters + (character - 1) * stride + 14 - cd + group] =
                    party.character(character).afflictions[group] = std::uint8_t(seed + character * 11 + group * 29);
        call(0xc2bc5c, 0xc2bc07); battle::reset_post_battle_stats(roster, party);
        for (unsigned character = 1; character <= 6; ++character)
            for (unsigned group = 0; group < 7; ++group)
                equal(source.bus->work_ram[characters + (character - 1) * stride + 14 - cd + group],
                      party.character(character).afflictions[group], "Postbattle status cleanup");
        for (unsigned i = 0; i < original_records.size(); ++i)
            equal(source.bus->work_ram[records + i], original_records[i], "Unchanged live battle records");
    }
    for (unsigned mode = 0; mode < 3; ++mode)
        for (unsigned seed = 0; seed < 48; ++seed) {
            battle::InstantWinState state;
            const unsigned scratch = jp ? 0xac4b : 0xaa76;
            for (unsigned i = 0; i < 4; ++i) {
                state.offense[i] = std::uint16_t(0x1111 * (i + 1)); state.hp[i] = std::uint16_t(0x2222 * (i + 1)); state.defense[i] = std::uint16_t(0x3333 * (i + 1));
                source.put(scratch + i * 2, state.offense[i]); source.put(scratch + 8 + i * 2, state.hp[i]); source.put(scratch + 16 + i * 2, state.defense[i]);
            }
            WorldEncounterState encounter; encounter.initiative = WorldBattleInitiative(mode);
            for (unsigned i = 0; i < 6; ++i) {
                party.party_order[i] = i < 4 ? std::uint8_t(i + 1) : 0;
                source.bus->work_ram[game + 122 - shift + i] = party.party_order[i];
                if (i >= 4) continue;
                auto& p = party.character(i + 1); const auto at = characters + i * stride;
                p.offense = std::uint8_t(30 + seed * 7 + i * 23); p.speed = std::uint8_t(50 + seed * 9);
                p.afflictions[0] = (seed % 4 == 0 && i) ? std::uint8_t(seed % 8) : 0;
                p.afflictions[1] = seed % 5 == 0 && i == 3 ? 2 : 0;
                source.bus->work_ram[at + 21 - cd] = p.offense; source.bus->work_ram[at + 23 - cd] = p.speed;
                source.bus->work_ram[at + 14 - cd] = p.afflictions[0]; source.bus->work_ram[at + 15 - cd] = p.afflictions[1];
            }
            const unsigned count = seed % 4 + 1;
            for (unsigned i = 0; i < count; ++i) {
                const auto id = std::uint16_t((seed * 13 + i * 37) % battle::EnemyResources::count);
                encounter.roster.push_back(id); source.put((jp ? 0xa18e : 0x9f8c) + i * 2, id);
            }
            source.put(jp ? 0xa18c : 0x9f8a, count); source.put(jp ? 0x5142 : 0x4dbc, mode);
            call(0xc26634, 0xc2656d);
            equal(source.cpu.accumulator, battle::instant_win_check(state, party, encounter, *enemies, *resources), "Instant-win return");
            for (unsigned i = 0; i < 4; ++i) {
                equal(source.word(scratch + i * 2), state.offense[i], "Retained offense sort");
                equal(source.word(scratch + 8 + i * 2), state.hp[i], "Retained HP sort");
                equal(source.word(scratch + 16 + i * 2), state.defense[i], "Retained defense sort");
            }
        }
    for (unsigned seed = 0; seed < 6; ++seed) {
        battle::PsiScratch scratch; battle::PaletteBankState colors;
        for (unsigned i = 0; i < scratch.bytes.size(); ++i)
            scratch.bytes[i] = source.bus->work_ram[0x10000 + i] = std::uint8_t(i * 17 + seed * 41);
        for (unsigned i = 0; i < 256; ++i) {
            const auto raw = std::uint16_t(i * 977 + seed * 6301);
            colors.staged_palette(i / 16)[i % 16] = raw; source.put(0x200 + i * 2, raw);
        }
        const auto divisor = std::uint16_t(seed == 0 ? 0 : seed == 1 ? 6 : seed == 2 ? 0xffff : seed * 11);
        const auto mask = std::uint16_t(seed & 1 ? 0xffff : 0x55aa);
        call(0xc496e7, 0xc46d31, divisor, mask);
        battle::prepare_palette_transition(scratch, colors, divisor, mask);
        const auto compare = [&] {
            for (unsigned i = 0; i < 65536; ++i) equal(source.bus->work_ram[0x10000 + i], scratch.bytes[i], "Shared transition scratch");
            for (unsigned i = 0; i < 256; ++i) equal(source.word(0x200 + i * 2), colors.staged_palette(i / 16)[i % 16], "Transition palette");
        };
        compare();
        for (unsigned frame = 0; frame < 8; ++frame) {
            call(0xc426ed, 0xc4262b); battle::advance_palette_transition(scratch, colors); compare();
            equal(source.bus->work_ram[0x30], colors.upload_mode, "Transition upload intent");
        }
        call(0xc49740, 0xc46d8a); battle::finish_palette_transition(scratch, colors); compare();
    }
    std::cout << (jp ? "JP" : "US") << " complete outcome helpers=" << calls << " comparisons=" << checks << " instructions=" << source.cpu.instruction_count << "\n";
}
}
int main(int argc,char** argv) {
    if (argc < 2) return 77;
    try { for(int i=1;i<argc;++i) run(load_game_assets(argv[i], asset_profiles())); }
    catch(const std::exception& e) { std::cerr << e.what() << '\n'; return 1; }
}
