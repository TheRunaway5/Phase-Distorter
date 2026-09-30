// Source-shaped state and synthetic imported names only. The separate oracle
// compares these helpers against original instructions in both regions.
#include "eb/native/battle/names.hpp"
#include "native_dialogue_substitution_test_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>

namespace {
using namespace eb::native;
using namespace eb::native::battle;
using dialogue::PreparedName;
using eb::GameVersion;
unsigned checks{};
void check(bool ok, const char* message) { ++checks; if (!ok) throw std::runtime_error(message); }
template<class F> void rejects(F call, const char* message) {
    bool rejected{}; try { call(); } catch (const std::exception&) { rejected = true; }
    check(rejected, message);
}
std::vector<std::uint8_t> copy(std::span<const std::uint8_t> bytes) { return {bytes.begin(), bytes.end()}; }
dialogue_substitution_test_assets::Input content(GameVersion version, unsigned profile = 0) {
    dialogue_substitution_test_assets::Input input(version);
    for (unsigned id = 0; id < 231; ++id) {
        const auto at = input.enemies + id * input.enemy_stride + input.enemy_prefix;
        std::fill_n(input.image.begin() + at, input.name_size, 0xcc);
        input.image[at] = std::uint8_t(0x61 + id % 12);
        input.image[at + 1] = 0x72; input.image[at + 2] = 0x73; input.image[at + 3] = 0;
    }
    const auto at = input.enemies + 7 * input.enemy_stride + input.enemy_prefix;
    const auto marker = std::uint8_t(version == GameVersion::US ? 0xac : 0x3e);
    if (profile == 1) {
        input.image[at] = 0x65; input.image[at + 1] = marker;
        input.image[at + 2] = 0x66; input.image[at + 3] = marker; input.image[at + 4] = 0;
    } else if (profile == 2) {
        // US 24 input bytes with seven markers expand to52 bytes. Its label
        // writes target scratch[26] without leaving the two owned fields.
        std::fill_n(input.image.begin() + at, input.name_size, 0x67);
        std::fill_n(input.image.begin() + at, 7, marker);
        input.image[at + input.name_size - 1] = 0;
    } else if (profile == 3) {
        std::fill_n(input.image.begin() + at, input.name_size, marker);
    }
    return input;
}
struct Fixture {
    dialogue_substitution_test_assets::Input input;
    std::shared_ptr<const EnemyResources> enemies;
    std::shared_ptr<const dialogue::SubstitutionResources> text;
    Roster roster;
    party::State party;
    dialogue::PreparedMessage prepared;
    ActionState action;
    Names names;
    explicit Fixture(GameVersion version, unsigned profile = 0)
        : input(content(version, profile)), enemies(EnemyResources::import(input.image, version)), text(input.load()),
          roster(enemies), party(version), prepared(version), names(roster, party, prepared, *text, action) {
        for (unsigned id = 1; id <= 6; ++id) {
            auto field = party.name_field(id);
            for (unsigned i = 0; i < field.size(); ++i) field[i] = std::uint8_t(0x80 + id * 5 + i);
        }
        auto pet = party.name_field(party::NameField::Pet);
        for (unsigned i = 0; i < pet.size(); ++i) pet[i] = std::uint8_t(0xa0 + i);
        for (auto side : {PreparedName::Attacker, PreparedName::Target}) {
            std::vector<std::uint8_t> initial(prepared.name(side).size() - 1);
            for (unsigned i = 0; i < initial.size(); ++i) initial[i] = std::uint8_t(0xc0 + i);
            prepared.copy_name(side, initial);
            prepared.metadata(side) = {0x9876, 0xab};
        }
        prepared.set_number(0xdeadbeef); prepared.set_item(0xcd);
        action.enemy_count = 17; action.shield_nullified = 0x1234; action.damage_reflected = 0xabcd;
    }
};
struct Snapshot {
    std::array<Battler, 32> records;
    std::array<std::uint64_t, 32> identities;
    std::uint16_t highest{};
    std::array<std::vector<std::uint8_t>, 2> prepared, scratch;
    std::array<dialogue::NameMetadata, 2> metadata;
    std::uint32_t number{}, flags{};
    std::uint8_t item{};
    std::optional<unsigned> attacker, target;
    std::uint16_t count{}, nullified{}, reflected{};
    bool operator==(const Snapshot&) const = default;
};
Snapshot snapshot(const Fixture& f) {
    Snapshot s;
    for (unsigned i = 0; i < 32; ++i) { s.records[i] = f.roster.at(i); s.identities[i] = f.roster.identity(i); }
    s.highest = f.roster.highest_enemy_level();
    unsigned i{};
    for (auto side : {PreparedName::Attacker, PreparedName::Target}) {
        s.prepared[i] = copy(f.prepared.name(side)); s.scratch[i] = copy(f.names.scratch(side));
        s.metadata[i++] = f.prepared.metadata(side);
    }
    s.number = f.prepared.number(); s.item = f.prepared.item(); s.flags = f.action.target_flags;
    s.attacker = f.action.attacker; s.target = f.action.target; s.count = f.action.enemy_count;
    s.nullified = f.action.shield_nullified; s.reflected = f.action.damage_reflected;
    return s;
}
void unchanged_inputs(const Snapshot& before, const Fixture& after) {
    const auto current = snapshot(after);
    check(current.records == before.records && current.identities == before.identities && current.highest == before.highest,
          "Battle names changed their borrowed roster or identities");
    check(current.number == before.number && current.item == before.item && current.flags == before.flags &&
              current.count == before.count && current.nullified == before.nullified && current.reflected == before.reflected,
          "Name helper modified an unrelated action or prepared value");
}
void publication(const Fixture& f, PreparedName side, const std::vector<std::uint8_t>& before,
                 std::span<const std::uint8_t> bytes) {
    auto expected = before;
    std::copy(bytes.begin(), bytes.end(), expected.begin());
    expected.at(bytes.size()) = 0;
    check(copy(f.prepared.name(side)) == expected, "Prepared publication changed its copy extent, terminator or retained tail");
}
void select(Fixture& f, PreparedName side, unsigned slot) {
    if (side == PreparedName::Attacker) f.action.attacker = slot; else f.action.target = slot;
}
void fix(Fixture& f, PreparedName side, std::uint16_t mode = 0) {
    if (side == PreparedName::Attacker) f.names.fix_attacker(mode); else f.names.fix_target();
}

void all_record_label_scan(GameVersion version) {
    Fixture f(version);
    for (unsigned slot = 0; slot < 32; ++slot) {
        f.roster.clear(); auto& b = f.roster.at(slot);
        b.side = 1; b.consciousness = 255; b.original_enemy = 0xbeef; b.label = 1;
        const auto before = snapshot(f);
        check(f.roster.next_available_label(0xbeef) == 2 && f.roster.next_available_label(0x00ef) == 1,
              "Public label scan omitted a physical slot or truncated the original enemy word");
        check(snapshot(f) == before, "Public label query changed shared state");
        b.consciousness = 0; b.label = 0;
        check(f.roster.next_available_label(0xbeef) == 1, "Inactive invalid label reached the live scan");
        b.consciousness = 1; b.side = 2;
        check(f.roster.next_available_label(0xbeef) == 1, "Raw side2 was treated as source enemy1");
        b.side = 1;
        rejects([&] { f.roster.next_available_label(0xbeef); }, "Live zero label alias was normalized");
        b.label = 27;
        rejects([&] { f.roster.next_available_label(0xbeef); }, "Out-of-table label alias was normalized");
    }
    f.roster.clear();
    for (unsigned i = 0; i < 26; ++i) {
        auto& b = f.roster.at(i); b.side = b.consciousness = 1; b.original_enemy = 7; b.label = std::uint8_t(i + 1);
    }
    check(f.roster.next_available_label(7) == 0, "Full label table did not return source zero");
    f.roster.at(13).consciousness = 0;
    check(f.roster.next_available_label(7) == 14, "Public label query did not return the first actual hole");
    f.roster.clear(); f.roster.initialize_enemy(8, 7);
    check(f.roster.next_available_label(7) == 2, "Public label query excluded the selected initialized record");
    f.roster.initialize_enemy(8, 7);
    check(f.roster.at(8).label == 1, "Initializer no longer excluded its cleared destination");
}

void party_and_no_copy(GameVersion version) {
    for (auto side : {PreparedName::Attacker, PreparedName::Target})
        for (unsigned slot : {0u, 7u, 8u, 31u}) for (unsigned id = 0; id <= 6; ++id)
            for (unsigned row = 0; row < 6; ++row) for (unsigned raw_side : {0u, 2u, 255u}) {
                Fixture f(version); auto& b = f.roster.at(slot);
                b.id = std::uint16_t(id); b.row = std::uint8_t(row); b.side = std::uint8_t(raw_side);
                // Embedded NUL does not shorten the fixed-field party copy.
                f.party.name_field(row + 1)[1] = 0;
                select(f, side, slot); const auto before = snapshot(f); fix(f, side);
                const auto index = side == PreparedName::Attacker ? 0u : 1u;
                if (id <= 4) publication(f, side, before.prepared[index], f.party.name_field(row + 1));
                else check(copy(f.prepared.name(side)) == before.prepared[index], "Guarded party id>4 invented a name");
                check(f.prepared.metadata(side) == (version == GameVersion::US
                          ? dialogue::NameMetadata{std::uint16_t(id <= 4 ? 0xffff : 0x9876), 0}
                          : before.metadata[index]), "Party/no-copy branch changed wrong metadata");
                check(copy(f.prepared.name(side == PreparedName::Attacker ? PreparedName::Target : PreparedName::Attacker)) ==
                          before.prepared[1 - index], "One party-name helper changed the other prepared buffer");
                unchanged_inputs(before, f);
            }
}

void enemy_guest_and_modes(GameVersion version) {
    for (auto side : {PreparedName::Attacker, PreparedName::Target})
        for (unsigned raw_side : {0u, 1u, 2u, 255u}) for (unsigned npc : {0u, 1u, 255u}) {
            if (raw_side != 1 && !npc) continue;
            for (unsigned label : {0u, 1u, 2u, 26u, 255u})
                for (unsigned mode : {0u, 1u, 65535u}) for (unsigned count : {0u, 1u, 2u, 65535u}) {
                    Fixture f(version); auto& b = f.roster.at(8);
                    b.id = 7; b.original_enemy = 0x4321; b.side = std::uint8_t(raw_side);
                    b.npc = std::uint8_t(npc); b.label = std::uint8_t(label); b.consciousness = 0;
                    // A live matching A makes the first free letter2 without
                    // relying on the selected record's consciousness or slot.
                    auto& peer = f.roster.at(31); peer.side = peer.consciousness = 1;
                    peer.original_enemy = b.original_enemy; peer.label = 1;
                    f.action.enemy_count = std::uint16_t(count); select(f, side, 8);
                    const auto before = snapshot(f); fix(f, side, std::uint16_t(mode));
                    const bool group = side == PreparedName::Attacker && mode != 0;
                    const bool suffix = raw_side == 1 && !group && label != 1;
                    const unsigned copied = version == GameVersion::US ? 27 : side == PreparedName::Attacker ? 12 : 11;
                    std::vector<std::uint8_t> bytes(copied);
                    bytes[0] = 0x68; bytes[1] = 0x72; bytes[2] = 0x73;
                    if (raw_side == 1 && group && version == GameVersion::JP && count > 1) {
                        bytes[3] = 102; bytes[4] = 118;
                    } else if (suffix) {
                        bytes[3] = std::uint8_t(label + (version == GameVersion::US ? 0x70 : 0x40));
                        if (version == GameVersion::US) { bytes[4] = bytes[3]; bytes[3] = 0x50; }
                    }
                    const unsigned index = side == PreparedName::Attacker ? 0 : 1;
                    publication(f, side, before.prepared[index], bytes);
                    check(f.prepared.metadata(side) == (version == GameVersion::US
                              ? dialogue::NameMetadata{7, std::uint8_t(suffix)} : before.metadata[index]),
                          "Enemy/guest helper changed raw article, id or regional metadata semantics");
                    unchanged_inputs(before, f);
                }
        }
    // A gap at B suppresses A even with another live labelC. Enemy count is
    // irrelevant here; changing that peer toB makes the label suffix appear.
    Fixture f(version); f.roster.initialize_enemy(8, 7); f.roster.initialize_enemy(31, 7);
    f.action.target = 8; f.roster.at(31).label = 3; f.names.fix_target();
    check(f.prepared.name(PreparedName::Target)[3] == 0, "Label decision counted enemies instead of querying first unused letter");
    f.roster.at(31).label = 2; f.names.fix_target();
    check(f.prepared.name(PreparedName::Target)[3] == (version == GameVersion::US ? 0x50 : 0x41),
          "Occupied B did not cause the A suffix");
}

void expansion_pet_and_retained_scratch(GameVersion version) {
    for (auto side : {PreparedName::Attacker, PreparedName::Target}) for (bool empty : {false, true}) {
        Fixture f(version, 1); auto& b = f.roster.at(8); b.id = 7; b.npc = 1;
        auto first = f.party.name_field(1);
        if (empty) first[0] = 0; else first[2] = 0;
        select(f, side, 8); const auto before = snapshot(f); fix(f, side);
        std::vector<std::uint8_t> bytes(version == GameVersion::US ? 27 : side == PreparedName::Attacker ? 12 : 11);
        if (empty) { bytes[0] = 0x65; bytes[1] = 0x66; }
        else { bytes[0] = 0x65; bytes[1] = first[0]; bytes[2] = first[1]; bytes[3] = 0x66; bytes[4] = first[0]; bytes[5] = first[1]; }
        publication(f, side, before.prepared[side == PreparedName::Attacker ? 0 : 1], bytes);
    }
    for (auto side : {PreparedName::Attacker, PreparedName::Target}) {
        Fixture f(version); f.roster.initialize_enemy(8, 160); f.roster.at(8).label = 2;
        f.party.name_field(party::NameField::Pet)[2] = 0;
        select(f, side, 8); const auto before = snapshot(f); fix(f, side);
        std::vector<std::uint8_t> bytes(version == GameVersion::US ? 27 : side == PreparedName::Attacker ? 12 : 11);
        const auto pet = f.party.name_field(party::NameField::Pet); std::copy(pet.begin(), pet.end(), bytes.begin());
        publication(f, side, before.prepared[side == PreparedName::Attacker ? 0 : 1], bytes);
        if (version == GameVersion::US)
            check(f.prepared.metadata(side) == dialogue::NameMetadata{160, 1}, "Pet override incorrectly undid the earlier article decision");
    }
    if (version == GameVersion::US) {
        Fixture f(version, 2); f.roster.initialize_enemy(8, 7); f.roster.at(8).label = 2;
        f.action.attacker = 8; f.names.fix_attacker(0);
        check(f.names.scratch(PreparedName::Target)[26] == 0x72,
              "Valid expanded attacker suffix failed to publish into adjacent target scratch");
        f.roster.initialize_enemy(9, 8); f.action.target = 9; f.names.fix_target();
        check(f.names.scratch(PreparedName::Target)[26] == 0x72 && f.prepared.name(PreparedName::Target)[26] == 0x72 &&
                  f.prepared.name(PreparedName::Target)[27] == 0,
              "US target rounded MEMSET up or discarded retained bytes after its early NUL");
        const auto target = copy(f.names.scratch(PreparedName::Target));
        f.roster.at(8).id = 8; f.names.fix_attacker(1);
        auto expected = target; expected[0] = 0;
        check(copy(f.names.scratch(PreparedName::Target)) == expected,
              "US attacker clear failed to touch exactly target scratch byte0");
    }
}

void selector_callers(GameVersion version) {
    Fixture f(version); f.roster.initialize_player(0, f.party, 2); f.roster.initialize_enemy(8, 7);
    f.action.attacker = 0; f.action.target = 8;
    const auto before = snapshot(f); f.names.swap_attacker_with_target();
    check(f.action.attacker == 8 && f.action.target == 0, "SWAP failed to exchange physical selectors");
    check(f.prepared.name(PreparedName::Attacker)[0] == 0x68 &&
              f.prepared.name(PreparedName::Target)[0] == f.party.name_field(2)[0],
          "SWAP did not rebuild names using its new selectors");
    unchanged_inputs(before, f);
    f.names.swap_attacker_with_target();
    check(f.action.attacker == 0 && f.action.target == 8, "Second SWAP failed to restore physical selectors");
    for (unsigned slot = 0; slot < 32; ++slot) {
        f.roster.initialize_player(slot, f.party, slot % 6 + 1);
        // Use raw id0 so all six legal row fields pass the original id guard.
        f.roster.at(slot).id = 0;
        f.action.target_flags = (std::uint32_t(1) << slot) | 0x80000000u;
        const auto initial = snapshot(f); f.names.select_first_target();
        check(f.action.target == slot && f.prepared.name(PreparedName::Target)[0] == f.party.name_field(slot % 6 + 1)[0],
              "C23E32 did not choose the first set bit across all32 physical slots");
        unchanged_inputs(initial, f);
    }
    f.action.target_flags = 0; f.action.attacker.reset(); f.action.target.reset();
    const auto empty = snapshot(f); f.names.select_first_target();
    check(snapshot(f) == empty, "Zero target mask required selectors or changed a name");
}

void rejected_entries(GameVersion version) {
    Fixture f(version); const auto fresh = snapshot(f);
    rejects([&] { f.names.fix_attacker(0); }, "Missing attacker was guessed");
    rejects([&] { f.names.fix_target(); }, "Missing target was guessed");
    rejects([&] { f.names.swap_attacker_with_target(); }, "Missing selectors were guessed during swap");
    check(snapshot(f) == fresh, "Missing selector mutated scratch or metadata");
    f.action.attacker = 32; f.action.target = 0; auto before = snapshot(f);
    rejects([&] { f.names.fix_attacker(0); }, "Out-of-range physical attacker was accepted");
    rejects([&] { f.names.swap_attacker_with_target(); }, "Invalid swap partially admitted a selector");
    check(snapshot(f) == before, "Rejected selector changed shared state");
    f.action.attacker = 0; f.roster.at(0).row = 6; before = snapshot(f);
    rejects([&] { f.names.fix_attacker(0); }, "Party row beyond the owned six records was accepted");
    check(snapshot(f) == before, "Rejected party lookup changed scratch or metadata");
    f.roster.at(0).side = 1; f.roster.at(0).id = 231; before = snapshot(f);
    rejects([&] { f.names.fix_target(); }, "Enemy name beyond the imported table was accepted");
    check(snapshot(f) == before, "Rejected enemy lookup changed scratch or metadata");
    Fixture overflow(version, 3); overflow.roster.initialize_enemy(8, 7); overflow.action.attacker = 8;
    before = snapshot(overflow);
    rejects([&] { overflow.names.fix_attacker(1); }, "Expansion beyond the owned scratch silently truncated");
    check(snapshot(overflow) == before, "Rejected expansion partially changed scratch/prepared/action state");
    overflow.action.target = 8; overflow.action.attacker = 0; before = snapshot(overflow);
    rejects([&] { overflow.names.swap_attacker_with_target(); }, "Swap accepted an out-of-owned expanded name");
    check(snapshot(overflow) == before, "Rejected expansion partially swapped selectors");
    f.roster.at(0) = {}; f.roster.at(0).side = f.roster.at(0).consciousness = f.roster.at(0).label = 1;
    f.roster.at(1) = f.roster.at(0); f.roster.at(1).label = 0; before = snapshot(f);
    rejects([&] { f.names.fix_target(); }, "Name suffix scan normalized a live zero label alias");
    check(snapshot(f) == before, "Rejected suffix scan cleared shared metadata");
    Fixture foreign(version == GameVersion::US ? GameVersion::JP : GameVersion::US);
    rejects([&] { Names n(f.roster, foreign.party, f.prepared, *f.text, f.action); }, "Names accepted foreign party region");
    rejects([&] { Names n(f.roster, f.party, foreign.prepared, *f.text, f.action); }, "Names accepted foreign prepared region");
    rejects([&] { Names n(f.roster, f.party, f.prepared, *foreign.text, f.action); }, "Names accepted foreign text region");
    check(f.names.uses(f.roster, f.party, f.prepared, f.action) && !f.names.uses(foreign.roster, f.party, f.prepared, f.action) &&
              !f.names.uses(f.roster, foreign.party, f.prepared, f.action) && !f.names.uses(f.roster, f.party, foreign.prepared, f.action) &&
              !f.names.uses(f.roster, f.party, f.prepared, foreign.action), "Names concealed a different authoritative owner");
}
} // namespace
int main() {
    try {
        for (auto version : {GameVersion::US, GameVersion::JP}) {
            all_record_label_scan(version);
            party_and_no_copy(version);
            enemy_guest_and_modes(version);
            expansion_pet_and_retained_scratch(version);
            selector_callers(version);
            rejected_entries(version);
        }
        std::cout << "native battle names checks=" << checks << '\n';
    } catch (const std::exception& error) {
        std::cerr << "native battle names failed after " << checks << " checks: " << error.what() << '\n';
        return 1;
    }
}
