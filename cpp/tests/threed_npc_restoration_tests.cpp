// Source-shaped fixtures reproduce the two unreachable Threed NPC records
// without retail assets. The original positions, sprites and scripts remain
// authored content; restoration changes only their appearance conditions.
#include "eb/native/npc_catalog.hpp"
#include "eb/game_debug.hpp"
#include "eb/game_session.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_audio_dsp.hpp"
#include "eb/snes_bus.hpp"
#include "eb/snapshot_archive.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
using namespace eb::native;
constexpr NpcId ghost = 526, investigator = 563;
constexpr unsigned belch_defeated = 71, unreachable_investigator_flag = 610, tileset = 6;
unsigned checks = 0, failures = 0;

void expect(bool condition, const std::string &message) {
    ++checks;
    if (!condition) {
        ++failures;
        std::cerr << "FAIL " << message << '\n';
    }
}

struct Fixture {
    eb::GameVersion version;
    NpcCatalogLayout layout;
    std::vector<std::uint8_t> data = std::vector<std::uint8_t>(0x300000);

    void word(unsigned at, unsigned value) {
        data.at(at) = value;
        data.at(at + 1) = value >> 8;
    }
    unsigned record(NpcId id) const { return layout.definitions + unsigned(id) * 17; }
    void definition(NpcId id, unsigned sprite, unsigned direction, unsigned script,
                    unsigned flag, NpcAppearance appearance) {
        const unsigned at = record(id);
        data[at] = unsigned(NpcType::Person);
        word(at + 1, sprite);
        data[at + 3] = direction;
        word(at + 4, script);
        word(at + 6, flag);
        data[at + 8] = unsigned(appearance);
    }
    void placement(unsigned list, NpcId id, unsigned x, unsigned y) {
        word(layout.cell_pointers + ((y / 256) * 32 + x / 256) * 2, list & 0xffff);
        word(list, 1);
        word(list + 2, id);
        data[list + 4] = y % 256;
        data[list + 5] = x % 256;
    }
    explicit Fixture(eb::GameVersion region) : version(region), layout(npc_catalog_layout(region)) {
        for (unsigned id = 0; id < layout.definition_count; ++id)
            definition(NpcId(id), 1, 2, 10, 0, NpcAppearance::Always);
        definition(ghost, 54, 2, 605, belch_defeated, NpcAppearance::FlagOff);
        definition(investigator, 63, 4, 10, unreachable_investigator_flag, NpcAppearance::FlagOn);
        std::fill_n(data.begin() + layout.map_tilesets, 32 * 80, tileset << 3);
        // GET_EVENT_FLAG reads the original regional POWERS_OF_TWO_8BIT
        // content table before testing the one-based flag in work RAM.
        const unsigned powers_of_two = region == eb::GameVersion::JP ? 0x43425 : 0x4562f;
        for (unsigned bit = 0; bit < 8; ++bit)
            data[powers_of_two + bit] = 1u << bit;
        placement(layout.placements, ghost, 6016, 9448);
        placement(layout.placements + 6, investigator, 6240, 8792);
    }
    explicit Fixture(const eb::GameAssets &assets)
        : version(assets.version), layout(npc_catalog_layout(assets.version)),
          data(assets.image.begin(), assets.image.end()) {}
};

bool has(const std::vector<NpcCandidate> &candidates, NpcId id) {
    return std::any_of(candidates.begin(), candidates.end(), [=](const auto &candidate) {
        return candidate.placement.npc == id;
    });
}
void set_flag(std::span<std::uint8_t> flags, unsigned id, bool value) {
    const unsigned bit = id - 1;
    if (value)
        flags[bit / 8] |= 1u << (bit & 7);
    else
        flags[bit / 8] &= ~(1u << (bit & 7));
}

struct Request {
    unsigned npc, sprite, script, x, y;
    bool operator==(const Request &) const = default;
};
struct SelectorLayout {
    unsigned query, create, first, next, npc, flags, tileset, enabled, objects, photo, random;
};
constexpr SelectorLayout us{0xc0222b, 0xc01e49, 0x0a50, 0x0a9e, 0x2c9a,
                            0x9c08, 0x436e, 0x4a58, 0x4a66, 0xb4ef, 0xc08e9a};
constexpr SelectorLayout jp{0xc02239, 0xc01e5f, 0x0a46, 0x0a94, 0x3098,
                            0x9eb3, 0x46f4, 0x4dde, 0x4dec, 0xb6b8, 0xc08e8b};
unsigned word(std::span<const std::uint8_t> bytes, unsigned at) {
    return bytes[at] | unsigned(bytes[at + 1]) << 8;
}
struct Selector {
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    SelectorLayout layout;
    Selector(const Fixture &fixture, bool restore)
        : bus(std::make_unique<eb::SnesBus>(fixture.data, fixture.version, restore)), cpu(*bus),
          layout(fixture.version == eb::GameVersion::JP ? jp : us) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode = false;
        cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.data_bank = 0x7e;
        cpu.direct_page = 0x1e00;
        cpu.stack_pointer = 0x1fff;
        put(layout.enabled, 1);
    }
    void put(unsigned at, unsigned value) {
        bus->work_ram[at] = value;
        bus->work_ram[at + 1] = value >> 8;
    }
    std::vector<Request> query(unsigned cell_x, unsigned cell_y, const NpcVisibility &state) {
        put(0x31, cell_x * 256);
        put(0x33, cell_y * 256);
        put(layout.tileset, state.tileset);
        put(layout.objects, state.objects_only);
        put(layout.photo, state.photograph);
        std::copy(state.event_flags.begin(), state.event_flags.end(), bus->work_ram.begin() + layout.flags);
        put(layout.first, state.active_npcs.empty() ? 0xffff : 0);
        for (unsigned i = 0; i < state.active_npcs.size(); ++i) {
            put(layout.npc + i * 2, state.active_npcs[i]);
            put(layout.next + i * 2, i + 1 == state.active_npcs.size() ? 0xffff : (i + 1) * 2);
        }
        std::vector<Request> requests;
        cpu.program_counter = 0xc0ff00;
        cpu.accumulator = cell_x;
        cpu.x_index = cell_y;
        cpu.execute_instruction<0x22>(layout.query, 4);
        unsigned steps = 0;
        while (cpu.program_counter != 0xc0ff04 || cpu.stack_pointer != 0x1fff) {
            if (++steps > 2000000)
                throw std::runtime_error("Threed NPC selector did not return: " + cpu.describe_registers());
            if (cpu.program_counter == layout.random)
                throw std::runtime_error("Threed NPC appearance query unexpectedly consumed RNG");
            if (cpu.program_counter == layout.create) {
                requests.push_back({word(bus->work_ram, cpu.direct_page + 0x20), cpu.accumulator,
                                    cpu.x_index, word(bus->work_ram, cpu.direct_page + 0x0e),
                                    word(bus->work_ram, cpu.direct_page + 0x10)});
                // Observe the real selector's allocation request and stub the
                // allocator, keeping readiness independent of actor simulation.
                cpu.accumulator = 29;
                cpu.execute_instruction<0x6b>(0, 1);
            } else {
                cpu.step_instruction();
            }
        }
        return requests;
    }
};

std::vector<Request> native_requests(const NpcCatalog &catalog, unsigned x, unsigned y,
                                     const NpcVisibility &state) {
    std::vector<Request> result;
    for (const auto &candidate : catalog.query({int(x * 256), int(y * 256),
                                               int((x + 1) * 256), int((y + 1) * 256)}, state)) {
        const auto &definition = catalog.definition(candidate.placement.npc);
        result.push_back({candidate.placement.npc, definition.sprite, candidate.script,
                          candidate.placement.x, candidate.placement.y});
    }
    return result;
}
std::string describe(const std::vector<Request> &requests) {
    std::string result;
    for (const auto &request : requests)
        result += "(" + std::to_string(request.npc) + "," + std::to_string(request.sprite) + "," +
                  std::to_string(request.script) + "," + std::to_string(request.x) + "," +
                  std::to_string(request.y) + ")";
    return result;
}

void native_catalog(eb::GameVersion version) {
    const std::string region = version == eb::GameVersion::JP ? "JP " : "US ";
    Fixture fixture(version);
    const auto original = fixture.data;
    NpcCatalog catalog(fixture.data, fixture.layout);
    NpcCatalog original_catalog(fixture.data, npc_catalog_layout(version, false));
    std::array<std::uint8_t, 80> flags{};
    NpcVisibility state{tileset, flags, {}};
    const NpcRectangle threed{5888, 8704, 6400, 9728};
    const auto before = catalog.query(threed, state);
    expect(has(before, ghost), region + "Ghost Enthusiast is present before Belch");
    expect(!has(before, investigator), region + "Investigator stays hidden before Belch");
    set_flag(flags, belch_defeated, true);
    const auto after = catalog.query(threed, state);
    expect(has(after, ghost), region + "Ghost Enthusiast remains present after Belch");
    expect(has(after, investigator), region + "Investigator appears after Belch while flag 610 is unset");
    const auto original_after = original_catalog.query(threed, state);
    expect(!has(original_after, ghost) && !has(original_after, investigator),
           region + "explicit original-content catalog reproduces both absent NPCs after Belch");
    expect(fixture.data == original, region + "native import preserves the raw imported content");
    const auto &old_man = catalog.definition(ghost);
    const auto &researcher = catalog.definition(investigator);
    expect(old_man.sprite == 54 && old_man.direction == 2 && old_man.script == 605 &&
               researcher.sprite == 63 && researcher.direction == 4 && researcher.script == 10,
           region + "restoration preserves authored sprites, facing and action scripts");
    expect(catalog.cell(23, 36).size() == 1 && catalog.cell(23, 36)[0].x == 6016 &&
               catalog.cell(23, 36)[0].y == 9448 && catalog.cell(24, 34).size() == 1 &&
               catalog.cell(24, 34)[0].x == 6240 && catalog.cell(24, 34)[0].y == 8792,
           region + "restoration preserves both original map placements");
    const std::array<NpcId, 2> active{ghost, investigator};
    state.active_npcs = active;
    expect(catalog.query(threed, state).empty(), region + "active restored NPCs are not duplicated");
    state.active_npcs = {};
    state.tileset = tileset + 1;
    expect(catalog.query(threed, state).empty(), region + "restored NPCs retain their map tileset gate");
    state.tileset = tileset;
    state.objects_only = true;
    expect(catalog.query(threed, state).empty(), region + "restored people retain the object-only gate");
}

void source_selector(const Fixture &fixture, const std::string &region) {
    Selector restored(fixture, true), original(fixture, false);
    NpcCatalog catalog(fixture.data, fixture.layout);
    NpcCatalog original_catalog(fixture.data, npc_catalog_layout(fixture.version, false));
    unsigned highest_flag = unreachable_investigator_flag;
    for (unsigned id = 0; id < original_catalog.size(); ++id)
        highest_flag = std::max(highest_flag, original_catalog.definition(NpcId(id)).event_flag);
    std::vector<std::uint8_t> flags((highest_flag + 7) / 8);
    NpcVisibility state{tileset, flags, {}};
    const std::array<NpcId, 2> active{ghost, investigator};
    for (unsigned flag_pattern = 0; flag_pattern < 4; ++flag_pattern) {
        std::fill(flags.begin(), flags.end(), 0);
        set_flag(flags, belch_defeated, flag_pattern & 1);
        set_flag(flags, unreachable_investigator_flag, flag_pattern & 2);
        for (unsigned mode = 0; mode < 5; ++mode) {
            state.objects_only = mode == 1;
            state.photograph = mode == 2;
            state.active_npcs = mode == 3 ? std::span<const NpcId>(active) : std::span<const NpcId>();
            for (const auto cell : {std::array{23u, 36u}, std::array{24u, 34u}}) {
                const auto placements = catalog.cell(cell[0], cell[1]);
                const auto target = std::find_if(placements.begin(), placements.end(), [](const auto &placement) {
                    return placement.npc == ghost || placement.npc == investigator;
                });
                if (target == placements.end())
                    throw std::runtime_error(region + "Missing original Threed placement");
                state.tileset = mode == 4 ? (target->tileset + 1) % 32 : target->tileset;
                const auto expected = native_requests(catalog, cell[0], cell[1], state);
                const auto original_expected = native_requests(original_catalog, cell[0], cell[1], state);
                const auto actual = restored.query(cell[0], cell[1], state);
                const auto original_actual = original.query(cell[0], cell[1], state);
                const std::string where = " flags=" + std::to_string(flag_pattern) + " mode=" +
                    std::to_string(mode) + " cell=" + std::to_string(cell[0]) + "," + std::to_string(cell[1]);
                expect(actual == expected, region + "restored source selector agrees with native catalog" +
                    where + " expected=" + describe(expected) + " actual=" + describe(actual));
                expect(original_actual == original_expected,
                       region + "generic hardware selector preserves original appearance behavior" +
                       where + " expected=" + describe(original_expected) + " actual=" + describe(original_actual));
            }
        }
    }
}

void mapped_reads(const Fixture &fixture, const std::string &region) {
    auto restored = std::make_unique<eb::SnesBus>(fixture.data, fixture.version, true);
    auto original = std::make_unique<eb::SnesBus>(fixture.data, fixture.version);
    expect(std::equal(fixture.data.begin(), fixture.data.end(), restored->cartridge_image().begin()),
           region + "runtime restoration preserves all raw cartridge bytes");
    unsigned differences = 0;
    bool correct = true;
    for (unsigned at = fixture.layout.definitions;
         at < fixture.layout.definitions + fixture.layout.definition_count * 17; ++at) {
        auto expected = fixture.data[at];
        if (at == fixture.record(ghost) + 8)
            expected = 0;
        if (at == fixture.record(investigator) + 6)
            expected = belch_defeated;
        if (at == fixture.record(investigator) + 7)
            expected = 0;
        const auto value = restored->read_byte(0xc00000 | at);
        differences += value != fixture.data[at];
        correct &= value == expected && original->read_byte(0xc00000 | at) == fixture.data[at];
    }
    expect(correct && differences == 3, region + "only the three intended definition bytes change at runtime");
    for (unsigned at : {fixture.record(ghost) + 8, fixture.record(investigator) + 6,
                        fixture.record(investigator) + 7}) {
        const auto expected = at == fixture.record(investigator) + 6 ? belch_defeated : 0;
        for (unsigned bank : {0x000000u, 0x800000u, 0x400000u, 0xc00000u})
            expect(restored->read_byte(bank | at) == expected,
                   region + "HiROM mirror reads apply the same appearance correction");
    }
    // A-bus ROM reads reach WRAM through the standard DMA machinery.
    const auto put_word = [&](unsigned at, unsigned value) {
        restored->write_byte(at, value);
        restored->write_byte(at + 1, value >> 8);
    };
    put_word(0x2181, 0x0120);
    restored->write_byte(0x2183, 0);
    restored->write_byte(0x4300, 0);
    restored->write_byte(0x4301, 0x80);
    put_word(0x4302, (fixture.record(investigator) + 6) & 0xffff);
    restored->write_byte(0x4304, 0xcf);
    put_word(0x4305, 3);
    restored->write_byte(0x420b, 1);
    expect(restored->work_ram[0x120] == belch_defeated && restored->work_ram[0x121] == 0 &&
               restored->work_ram[0x122] == unsigned(NpcAppearance::FlagOn),
           region + "DMA reads use the corrected flag and unchanged appearance byte");
}

struct Machine {
    std::unique_ptr<eb::SnesBus> bus;
    eb::Spc700AudioCpu audio_cpu;
    eb::SnesAudioDsp audio_dsp;
    eb::MainCpu65816 main_cpu;
    eb::GameDebug debug;
    std::uint64_t steps = 0;
    explicit Machine(const Fixture &fixture)
        : bus(std::make_unique<eb::SnesBus>(fixture.data, fixture.version)), audio_cpu(*bus),
          audio_dsp(audio_cpu), main_cpu(*bus), debug(*bus, main_cpu) {}
    void archive(eb::SnapshotArchive &archive) {
        archive(*bus, audio_cpu, audio_dsp, main_cpu, debug, steps);
    }
};
struct Envelope {
    std::array<std::uint8_t, 8> magic{'P', 'D', 'S', 'N', 'A', 'P', '0', '1'};
    std::uint32_t format = 2;
    eb::GameVersion version{};
    std::uint64_t cartridge_hash{}, checksum{};
    std::vector<std::uint8_t> payload;
    explicit Envelope(std::span<const std::uint8_t> bytes) {
        eb::SnapshotArchive file(bytes);
        file(magic, format, version, cartridge_hash, checksum);
        file.blob(payload);
        file.finish();
    }
    std::vector<std::uint8_t> encode() {
        checksum = eb::snapshot_checksum(payload);
        eb::SnapshotArchive file(format);
        file(magic, format, version, cartridge_hash, checksum);
        file.blob(payload);
        return file.release_bytes();
    }
};

void session_restoration(const Fixture &fixture, const std::string &region) {
    for (bool enhanced_timing : {false, true}) {
        eb::GameSession session(fixture.data, fixture.version, enhanced_timing);
        Envelope envelope(session.save_snapshot());
        expect(envelope.cartridge_hash == eb::snapshot_checksum(fixture.data),
               region + "session snapshot identity uses the unchanged original content");
        for (NpcId npc : {ghost, investigator}) {
            auto seeded = std::make_unique<Machine>(fixture);
            auto &cpu = seeded->main_cpu;
            cpu.emulation_mode = false;
            cpu.status_register = eb::MainCpu65816::InterruptDisable |
                (npc == ghost ? 0x20 : 0);
            cpu.data_bank = 0x7e;
            cpu.direct_page = 0x1e00;
            cpu.stack_pointer = 0x1fff;
            cpu.y_index = npc == ghost ? 8 : 6;
            // Real source NPC selector instructions load appearance (8-bit)
            // or event identity (16-bit) through the same long pointer.
            cpu.program_counter = fixture.version == eb::GameVersion::JP
                ? (npc == ghost ? 0xc02429 : 0xc02440)
                : (npc == ghost ? 0xc0241b : 0xc02432);
            cpu.set_gameplay_timing(enhanced_timing);
            const unsigned pointer = 0xc00000 | fixture.record(npc);
            for (unsigned byte = 0; byte < 3; ++byte)
                seeded->bus->work_ram[cpu.direct_page + 6 + byte] = pointer >> (byte * 8);
            eb::SnapshotArchive machine(envelope.format);
            seeded->archive(machine);
            envelope.payload = machine.release_bytes();
            // Loading a snapshot built with generic raw hardware must still
            // construct restored session hardware and retain the original hash.
            session.load_snapshot(envelope.encode());
            session.advance_frame(0, 1);
            Envelope captured(session.save_snapshot());
            auto observed = std::make_unique<Machine>(fixture);
            eb::SnapshotArchive restored(captured.payload, captured.format);
            observed->archive(restored);
            restored.finish();
            expect(observed->steps == 1 && observed->main_cpu.accumulator ==
                       (npc == ghost ? 0 : belch_defeated),
                   region + "GameSession restores NPC conditions automatically after snapshot loading" +
                   (enhanced_timing ? " with enhanced timing" : " with original timing"));
            expect(captured.cartridge_hash == eb::snapshot_checksum(fixture.data),
                   region + "continued session snapshots preserve original cartridge identity");
        }
    }
}
} // namespace

int main(int argc, char **argv) {
    try {
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            native_catalog(version);
            const Fixture fixture(version);
            const std::string region = version == eb::GameVersion::JP ? "JP synthetic " : "US synthetic ";
            source_selector(fixture, region);
            mapped_reads(fixture, region);
            session_restoration(fixture, region);
        }
        for (int argument = 1; argument < argc; ++argument) {
            const auto assets = eb::load_game_assets(argv[argument], eb::asset_profiles());
            const Fixture fixture(assets);
            source_selector(fixture, assets.title + " imported ");
            mapped_reads(fixture, assets.title + " imported ");
            session_restoration(fixture, assets.title + " imported ");
        }
        if (failures)
            return 1;
        std::cout << "PASS Threed NPC restoration: " << checks << " checks\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
