// Whole-routine domain differential against the frozen regional translation.
// Synthetic WRAM only: no ROM, authored NPC data or semantic-runtime oracle.
// The flat oracle gives CPU stack/direct-page scratch a separate low-memory
// area. Only game-state reads and the published collision result are the domain
// contract here; CPU scratch/flags/timing remain a scheduler-integration proof.
#include "eb/game/entities/npc_collision.hpp"
#include "eb/main_cpu_65816.hpp"

#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <optional>
#include <span>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

namespace {
using eb::game::entities::NpcCollisionMemory;
using eb::game::entities::NpcCollisionQuery;
constexpr std::uint16_t none = eb::game::entities::no_npc_collision;
void require(bool condition, const char* message) { if (!condition) throw std::runtime_error(message); }

// Independently verified linked symbols for src/overworld/npc_collision_check.asm.
// Kept separate from the implementation's private layout to detect wrong tables.
struct FixtureLayout {
    unsigned entry, scripts, collided, npc_ids, directions, x, y;
    unsigned enabled, horizontal_width, horizontal_height, vertical_width, vertical_height;
    unsigned movement_flags, intangible, walking_style;
};
FixtureLayout fixture_layout(eb::GameVersion version) {
    if (version == eb::GameVersion::JP) return {
        .entry=0xc06224, .scripts=0x0a58, .collided=0x2c9c, .npc_ids=0x3098,
        .directions=0x2ef4, .x=0x0b84, .y=0x0bc0,
        .enabled=0x3728, .horizontal_width=0x37dc, .horizontal_height=0x1a40,
        .vertical_width=0x3764, .vertical_height=0x37a0,
        .movement_flags=0x60dc, .intangible=0x60de, .walking_style=0x9b34};
    return {
        .entry=0xc05ff6, .scripts=0x0a62, .collided=0x289e, .npc_ids=0x2c9a,
        .directions=0x2af6, .x=0x0b8e, .y=0x0bca,
        .enabled=0x332a, .horizontal_width=0x33de, .horizontal_height=0x1a4a,
        .vertical_width=0x3366, .vertical_height=0x33a2,
        .movement_flags=0x5d56, .intangible=0x5d58, .walking_style=0x9883};
}
using ByteWrite = std::pair<std::uint32_t, std::uint8_t>;
class BorrowedWram final : public NpcCollisionMemory {
  public:
    explicit BorrowedWram(std::span<std::uint8_t> bytes) : bytes_(bytes) {}
    std::vector<ByteWrite> publications;
    unsigned publication_count{};
    std::uint16_t read_word(std::uint32_t address) const override {
        require(address >= 0x7e0000 && address + 1 < 0x800000, "Domain read outside WRAM");
        const auto offset = address - 0x7e0000;
        return bytes_[offset] | std::uint16_t(bytes_[offset + 1]) << 8;
    }
    void publish_collision(std::uint32_t address, std::uint16_t value) override {
        require(address >= 0x7e0000 && address + 1 < 0x800000, "Domain publication outside WRAM");
        ++publication_count;
        for (unsigned i = 0; i < 2; ++i) {
            const auto byte = std::uint8_t(value >> (8 * i));
            publications.emplace_back(address + i, byte);
            bytes_[address - 0x7e0000 + i] = byte;
        }
    }
  private:
    std::span<std::uint8_t> bytes_;
};

struct Fixture {
    std::array<std::uint8_t, 0x20000> wram{};
    FixtureLayout layout;
    NpcCollisionQuery query{100, 100, 23};
    explicit Fixture(eb::GameVersion version) : layout(fixture_layout(version)) {
        for (unsigned slot = 0; slot < 30; ++slot) {
            entity(layout.scripts, slot, 0xffff);
            entity(layout.collided, slot, 0xffff);
            entity(layout.enabled, slot, 1);
            entity(layout.vertical_width, slot, 8);
            entity(layout.horizontal_width, slot, 8);
            entity(layout.vertical_height, slot, 12);
            entity(layout.horizontal_height, slot, 12);
        }
        entity(layout.collided, 23, 0x1234); // Early exits must overwrite this too.
    }
    void word(unsigned offset, unsigned value) { wram.at(offset) = value; wram.at(offset + 1) = value >> 8; }
    void entity(unsigned table, unsigned slot, unsigned value) { word(table + slot * 2, value); }
    void actor(unsigned slot, unsigned x = 100, unsigned y = 100) {
        entity(layout.scripts, slot, 1);
        entity(layout.x, slot, x); entity(layout.y, slot, y);
    }
};

struct Oracle {
    std::vector<std::uint8_t> memory = std::vector<std::uint8_t>(0x1000000);
    std::uint64_t steps{};
    unsigned cases{}, hits{}, misses{};
    void compare(const Fixture& fixture, eb::GameVersion version, const std::string& label,
                 std::optional<std::uint16_t> expected = {}) {
        std::copy(fixture.wram.begin(), fixture.wram.end(), memory.begin() + 0x7e0000);
        std::fill(memory.begin(), memory.begin() + 0x10000, 0); // Independent CPU call/scratch stack.
        eb::MainCpu65816 cpu(memory, version);
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode = false;
        cpu.status_register = eb::MainCpu65816::InterruptDisable; // The game's binary-arithmetic ABI.
        cpu.direct_page = 0x1e00; cpu.data_bank = 0x7e; cpu.stack_pointer = 0x1fff;
        cpu.accumulator = fixture.query.x; cpu.x_index = fixture.query.y; cpu.y_index = fixture.query.moving_slot;
        cpu.program_counter = 0xc0ff00;
        cpu.execute_instruction<0x22>(fixture.layout.entry, 4); // Synthetic host call only.
        std::vector<ByteWrite> domain_writes;
        cpu.observe_memory_write = [&](auto address, auto value) {
            if (address >= 0x7e0000 && address < 0x800000) domain_writes.emplace_back(address, value);
        };
        std::uint64_t count = 0;
        while (cpu.program_counter != 0xc0ff04 || cpu.stack_pointer != 0x1fff) {
            if (++count > 10000) throw std::runtime_error("Frozen collision routine did not return");
            cpu.step_instruction();
        }
        auto native_bytes = fixture.wram;
        BorrowedWram native(native_bytes);
        const auto result = eb::game::entities::check_npc_collision(native, version, fixture.query);
        try {
            require(result == cpu.accumulator, "Native result differs from frozen whole-routine result");
            if (expected) require(result == *expected, "Documented collision edge behavior changed");
            require(native.publication_count == 1, "Result was not published exactly once");
            require(native.publications == domain_writes && domain_writes.size() == 2,
                "Collision result publication address/value/order differs");
            require(std::equal(native_bytes.begin(), native_bytes.end(), memory.begin() + 0x7e0000),
                "Authoritative WRAM changed outside the collision result");
            require(cpu.direct_page == 0x1e00, "Frozen routine did not restore its call frame");
        } catch (const std::exception& error) {
            throw std::runtime_error(std::string(version == eb::GameVersion::JP ? "JP " : "US ") + label +
                ": " + error.what() + " native=" + std::to_string(result) +
                " frozen=" + std::to_string(cpu.accumulator));
        }
        steps += count; ++cases;
        if (result == none) ++misses; else ++hits;
    }
};

void exact_edges(Oracle& oracle, eb::GameVersion version) {
    {
        Fixture f(version); oracle.compare(f, version, "empty population", none);
        f.actor(0); f.actor(22); oracle.compare(f, version, "first matching slot wins", 0);
        f.entity(f.layout.scripts, 0, 0xffff); oracle.compare(f, version, "last scanned slot", 22);
        f.entity(f.layout.scripts, 22, 0xffff); f.actor(23); f.actor(24);
        oracle.compare(f, version, "party slots are outside scan", none);
        f.query.moving_slot = 0; f.actor(0); oracle.compare(f, version, "no self exclusion", 0);
    }
    for (unsigned gate = 0; gate < 4; ++gate) {
        Fixture f(version); f.actor(0);
        if (gate == 0) f.entity(f.layout.enabled, 23, 0);
        if (gate == 1) f.word(f.layout.movement_flags, 2);
        if (gate == 2) f.word(f.layout.walking_style, 12);
        if (gate == 3) f.word(0x81, 1);
        oracle.compare(f, version, "global gate " + std::to_string(gate), none);
    }
    for (unsigned flags : {0u, 1u, 4u, 0xfffdu}) {
        Fixture f(version); f.actor(0); f.word(f.layout.movement_flags, flags);
        oracle.compare(f, version, "other movement flags", 0);
    }
    for (unsigned style : {0u, 11u, 13u, 0xffffu}) {
        Fixture f(version); f.actor(0); f.word(f.layout.walking_style, style);
        oracle.compare(f, version, "other walking styles", 0);
    }
    for (unsigned id : {0u, 1u, 0x7fffu, 0x8000u, 0xfffeu, 0xffffu})
        for (bool intangible : {false, true}) {
            Fixture f(version); f.actor(0); f.entity(f.layout.npc_ids, 0, id);
            f.word(f.layout.intangible, intangible ? 0x8000 : 0);
            const bool excluded = intangible && id >= 0x8000 && id != 0xffff;
            oracle.compare(f, version, "intangibility/id " + std::to_string(id), excluded ? none : 0);
        }
    for (unsigned marker : {0u, 1u, 0x7fffu, 0x8000u, 0x8001u, 0xffffu}) {
        Fixture f(version); f.actor(0); f.entity(f.layout.collided, 0, marker);
        oracle.compare(f, version, "collision disabled sentinel", marker == 0x8000 ? none : 0);
        f.entity(f.layout.collided, 0, 0); f.entity(f.layout.scripts, 0, marker);
        oracle.compare(f, version, "unused script sentinel", marker == 0xffff ? none : 0);
    }
    for (unsigned enabled : {0u, 1u, 0x8000u, 0xffffu}) {
        Fixture f(version); f.actor(0); f.entity(f.layout.enabled, 0, enabled);
        oracle.compare(f, version, "candidate hitbox enable", enabled ? 0 : none);
    }
    for (const auto [x,y,hit] : std::array<std::array<unsigned, 3>, 9>{{
            {84,100,0}, {85,100,1}, {115,100,1}, {116,100,0},
            {100,88,0}, {100,89,1}, {100,111,1}, {100,112,0}, {100,100,1}}}) {
        Fixture f(version); f.actor(0, x, y);
        oracle.compare(f, version, "strict edge " + std::to_string(x) + "/" + std::to_string(y), hit ? 0 : none);
    }
    for (unsigned direction : {0u,1u,2u,3u,4u,5u,6u,7u,8u,0x8000u,0xffffu}) {
        const bool side = direction == 2 || direction == 6;
        Fixture f(version); f.actor(0, 120, 100);
        f.entity(f.layout.horizontal_width, 0, 32); f.entity(f.layout.directions, 0, direction);
        oracle.compare(f, version, "candidate direction " + std::to_string(direction), side ? 0 : none);
        Fixture moving(version); moving.actor(0, 125, 100);
        moving.entity(moving.layout.horizontal_width, 23, 32); moving.entity(moving.layout.directions, 23, direction);
        oracle.compare(moving, version, "moving direction " + std::to_string(direction), side ? 0 : none);
    }
    {
        Fixture f(version); f.query.x = 5; f.actor(0, 5, 100);
        oracle.compare(f, version, "wrapped coincident boxes", none);
        f.query.x = 100; f.entity(f.layout.x, 0, 100);
        f.entity(f.layout.vertical_height, 0, 0); f.entity(f.layout.y, 0, 95);
        oracle.compare(f, version, "zero-height interior point", 0);
        f.entity(f.layout.vertical_width, 0, 0); oracle.compare(f, version, "zero-size interior point", 0);
        f.entity(f.layout.y, 0, 100); oracle.compare(f, version, "zero-height bottom edge", none);
    }
}

std::uint32_t next_random(std::uint32_t& state) {
    state ^= state << 13; state ^= state >> 17; state ^= state << 5; return state;
}
std::uint16_t varied(std::uint32_t& state) {
    constexpr std::array<std::uint16_t, 14> edges{0,1,2,7,8,15,16,0x7ffe,0x7fff,0x8000,0x8001,0xfff8,0xfffe,0xffff};
    const auto value = next_random(state);
    return value & 1 ? edges[(value >> 1) % edges.size()] : std::uint16_t(value >> 8);
}
void randomized(Oracle& oracle, eb::GameVersion version) {
    std::uint32_t random = 0x6e706343; // Identical logical inputs for both regional layouts.
    for (unsigned iteration = 0; iteration < 2500; ++iteration) {
        Fixture f(version);
        f.query = {varied(random), varied(random), std::uint16_t(next_random(random) % 30)};
        f.word(f.layout.movement_flags, next_random(random) % 20 == 0 ? 2 : 0);
        f.word(f.layout.walking_style, next_random(random) % 30 == 0 ? 12 : 0);
        f.word(0x81, next_random(random) % 30 == 0 ? varied(random) : 0);
        f.word(f.layout.intangible, next_random(random) & 1);
        for (unsigned slot = 0; slot < 30; ++slot) {
            f.entity(f.layout.scripts, slot, next_random(random) % 4 == 0 ? 0xffff : varied(random));
            f.entity(f.layout.collided, slot, next_random(random) % 8 == 0 ? 0x8000 : 0xffff);
            f.entity(f.layout.npc_ids, slot, varied(random));
            f.entity(f.layout.directions, slot, next_random(random) % 10);
            f.entity(f.layout.enabled, slot, next_random(random) % 8 != 0);
            for (auto table : {f.layout.vertical_width, f.layout.vertical_height,
                               f.layout.horizontal_width, f.layout.horizontal_height})
                f.entity(table, slot, next_random(random) % 4 == 0 ? varied(random) : next_random(random) % 32);
            f.entity(f.layout.x, slot, next_random(random) & 1 ? varied(random) :
                std::uint16_t(f.query.x + next_random(random) % 65 - 32));
            f.entity(f.layout.y, slot, next_random(random) & 1 ? varied(random) :
                std::uint16_t(f.query.y + next_random(random) % 65 - 32));
        }
        oracle.compare(f, version, "deterministic random " + std::to_string(iteration));
    }
}
} // namespace

int main() {
    try {
        Oracle oracle;
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            exact_edges(oracle, version);
            randomized(oracle, version);
        }
        require(oracle.hits > 100 && oracle.misses > 100, "Differential corpus lacks both results");
        std::cout << "PASS " << oracle.cases << " US/JP whole-routine collision cases (" << oracle.hits
            << " hits, " << oracle.misses << " misses), " << oracle.steps
            << " frozen source steps; return value, result write and authoritative WRAM match\n";
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
