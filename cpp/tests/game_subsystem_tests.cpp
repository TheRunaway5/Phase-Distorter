// Run real regional entity/NPC/enemy routines through both CPU runtimes.
// Tables and event bytecode below are synthetic fixture inputs, not game assets.
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_profile.hpp"
#include "runtime_state_audit.hpp"

#include <algorithm>
#include <cstdint>
#include <iostream>
#include <map>
#include <memory>
#include <set>
#include <stdexcept>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

namespace {
void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}
auto architectural_state(const eb::MainCpu65816& c) {
    return std::tie(c.program_counter, c.accumulator, c.x_index, c.y_index, c.stack_pointer,
                    c.direct_page, c.status_register, c.data_bank, c.emulation_mode,
                    c.is_stopped, c.is_waiting, c.instruction_count, c.cycle_count);
}
struct CompletedFrame {
    std::uint64_t number;
    unsigned width;
    std::vector<std::uint32_t> pixels;
    bool operator==(const CompletedFrame&) const = default;
};
struct Machine {
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    std::map<unsigned, std::uint8_t> cartridge_bytes;
    std::vector<std::pair<std::uint32_t, std::uint8_t>> writes;
    std::vector<CompletedFrame> frames;
    bool disable_butterfly_spawns = false;
    Machine(eb::GameVersion version, eb::MainCpuRuntime runtime)
        : bus(std::make_unique<eb::SnesBus>(std::vector<std::uint8_t>(0x300000), version)), cpu(*bus) {
        cpu.set_runtime(runtime);
        cpu.emulation_mode = false;
        cpu.status_register = 0;
        cpu.data_bank = 0x7e;
        cpu.direct_page = 0x1e00;
        cpu.stack_pointer = 0x1fff;
        cpu.observe_memory_write = [&](auto address, auto value) { writes.emplace_back(address, value); };
        bus->debug_read_rom = [&](unsigned address, std::uint8_t value) {
            if (const auto entry = cartridge_bytes.find(address); entry != cartridge_bytes.end()) return entry->second;
            // Sector attribute 1 has zero butterfly chance, but the source
            // still calls RAND on every sixteenth sector population attempt.
            if (disable_butterfly_spawns && address >= 0x17b200 && address < 0x17bc00 && !(address & 1))
                return std::uint8_t(1);
            return value;
        };
        bus->on_presentation_frame = [&](auto pixels, unsigned width, std::uint64_t frame) {
            frames.push_back({frame, width, {pixels.begin(), pixels.end()}});
        };
    }
    void word(unsigned address, unsigned value) {
        bus->work_ram.at(address) = value;
        bus->work_ram.at(address + 1) = value >> 8;
    }
    unsigned word(unsigned address) const {
        return bus->work_ram.at(address) | unsigned(bus->work_ram.at(address + 1)) << 8;
    }
    void rom_word(unsigned address, unsigned value) {
        cartridge_bytes[address & 0x3fffff] = value;
        cartridge_bytes[(address + 1) & 0x3fffff] = value >> 8;
    }
};
struct Comparison {
    Machine legacy, ported;
    bool jp;
    std::uint16_t return_stack = 0x1fff;
    std::uint64_t compared_steps = 0, compared_writes = 0;
    explicit Comparison(eb::GameVersion version)
        : legacy(version, eb::MainCpuRuntime::Legacy), ported(version, eb::MainCpuRuntime::Ported),
          jp(version == eb::GameVersion::JP) {}
    template<class Configure> void configure(Configure apply) { apply(legacy); apply(ported); }
    void compare_controls() {
        require(architectural_state(legacy.cpu) == architectural_state(ported.cpu), "CPU architectural state differs");
        require(legacy.cpu.timing_snapshot() == ported.cpu.timing_snapshot(), "Hidden CPU timing state differs");
        require(eb::RuntimeStateAudit::bus_controls(*legacy.bus) == eb::RuntimeStateAudit::bus_controls(*ported.bus),
                "Hardware controls, latches or clocks differ");
        require(legacy.writes == ported.writes, "Ordered CPU writes differ");
        compared_writes += legacy.writes.size();
        legacy.writes.clear();
        ported.writes.clear();
    }
    void compare_memory() const {
        require(legacy.bus->work_ram == ported.bus->work_ram, "WRAM/entity/script state differs");
        require(legacy.bus->save_ram == ported.bus->save_ram, "SRAM differs");
        require(legacy.bus->video_ram == ported.bus->video_ram && legacy.bus->palette_ram == ported.bus->palette_ram &&
                    legacy.bus->object_attributes == ported.bus->object_attributes, "PPU memory differs");
        require(legacy.bus->audio_to_main_ports == ported.bus->audio_to_main_ports &&
                    legacy.bus->main_to_audio_ports == ported.bus->main_to_audio_ports, "Audio port latches differ");
        require(legacy.bus->native_framebuffer == ported.bus->native_framebuffer, "Native pixels differ");
        require(legacy.frames == ported.frames, "Completed-frame callbacks differ");
    }
    void step() {
        const auto address = legacy.cpu.program_counter;
        try {
            legacy.cpu.step_instruction();
            ported.cpu.step_instruction();
            compare_controls();
            if ((++compared_steps & 255) == 0) compare_memory();
        } catch (const std::exception& error) {
            throw std::runtime_error(std::string(jp ? "JP" : "US") + " source PC=" + std::to_string(address) +
                                     " step=" + std::to_string(compared_steps) + ": " + error.what());
        }
    }
    // The call trampoline is fixture setup. All instructions inside the source
    // routine, including its callees and return, use the selected dispatcher.
    unsigned call(unsigned address, unsigned a = 0, unsigned x = 0, unsigned y = 0, bool far = true) {
        const unsigned trampoline = (address & 0xff0000) | 0xff00;
        return_stack = legacy.cpu.stack_pointer;
        configure([&](Machine& m) {
            m.cpu.accumulator = a;
            m.cpu.x_index = x;
            m.cpu.y_index = y;
            m.cpu.program_counter = trampoline;
            if (far) m.cpu.execute_instruction<0x22>(address, 4);
            else m.cpu.execute_instruction<0x20>(address & 0xffff, 3);
        });
        compare_controls();
        return trampoline + (far ? 4 : 3);
    }
    template<class Observe> void finish(unsigned return_address, Observe observe) {
        const auto start = compared_steps;
        // A source routine may visit this ROM address internally (for example
        // Japanese credits). Only a balanced return reaches our host caller.
        while (legacy.cpu.program_counter != return_address || legacy.cpu.stack_pointer != return_stack) {
            require(compared_steps - start < 1'000'000, "Source routine did not return within fixture limit");
            observe();
            step();
        }
        compare_memory();
    }
    void finish(unsigned return_address) { finish(return_address, [] {}); }
};

std::uint64_t total_steps = 0, total_writes = 0;
unsigned cases = 0;
void record(const Comparison& run) {
    total_steps += run.compared_steps;
    total_writes += run.compared_writes;
    ++cases;
}

void entity_scheduler(eb::GameVersion version, unsigned count, bool enhanced, bool upload) {
    Comparison run(version);
    const unsigned ram_shift = run.jp ? 10 : 0, code_shift = run.jp ? 33 : 0;
    const auto& profile = eb::source_profile(version);
    run.configure([&](Machine& m) {
        m.cpu.set_gameplay_timing(enhanced);
        m.rom_word(0xc09558 - code_shift + 6 * 2, 0x96c3 - code_shift);
        m.rom_word(0xc09558 - code_shift + 15 * 2, 0x9b09 - code_shift);
        m.word(0xa50 - ram_shift, count ? 0 : 0xffff); // FIRST_ENTITY
        m.word(0xa5e - ram_shift, 0xa039 - code_shift); // Empty draw callback.
        for (unsigned i = 0; i < 40; ++i) m.bus->work_ram[0x8000 + i] = 0x0f;
        m.bus->work_ram[0x8028] = 6;
        m.bus->work_ram[0x8029] = 1; // Clear callback commands, then sleep one frame.
        for (unsigned i = 0; i < count; ++i) {
            const auto slot = i * 2;
            m.word(0xa9e - ram_shift + slot, i + 1 == count ? 0xffff : slot + 2);
            m.word(0xada - ram_shift + slot, slot);
            m.word(0x125a - ram_shift + slot, 0xffff);
            m.word(0x13fe - ram_shift + slot, 0x8000);
            m.word(0x148a - ram_shift + slot, 0x7e);
            m.word(0x10b6 - ram_shift + slot, 0x8000);
            m.word(0x121e - ram_shift + slot, 0x9fc8 - code_shift);
            m.word(0x11a6 - ram_shift + slot, 0xa023 - code_shift);
            m.word(0xcf6 - ram_shift + slot, 1);
        }
        if (upload) m.bus->work_ram[profile.dma_queue.write_index] = 8;
        m.cpu.program_counter = profile.gameplay_timing.entity_update_call;
    });
    run.finish(profile.gameplay_timing.entity_update_return);
    for (unsigned i = 0; i < count; ++i) {
        require(run.ported.word(0xb8e - ram_shift + i * 2) == 1, "Source movement callback was not executed once");
        require(run.ported.word(0xb16 - ram_shift + i * 2) == 1, "Screen callback did not follow source movement");
    }
    record(run);
}

void entity_allocation(eb::GameVersion version) {
    const bool jp = version == eb::GameVersion::JP;
    const unsigned shift = jp ? 10 : 0;
    for (bool script_pool_full : {false, true}) {
        Comparison run(version);
        run.configure([&](Machine& m) {
            for (unsigned i = 0; i < 30; ++i) m.word(0xa62 - shift + i * 2, i + 1);
            m.word(0xa52 - shift, script_pool_full ? 0 : 0xffff); // LAST_ENTITY free-list head.
            m.word(0xa54 - shift, script_pool_full ? 0xffff : 0); // LAST_ALLOCATED_SCRIPT.
            m.word(0xa4c - shift, 0);
            m.word(0xa4e - shift, 30);
        });
        run.finish(run.call(jp ? 0xc09300 : 0xc09321, 123, 456, 789));
        require(run.ported.cpu.accumulator == 0 && (run.ported.cpu.status_register & eb::MainCpu65816::Carry),
                "Exhausted source allocation did not fail");
        for (unsigned i = 0; i < 30; ++i)
            require(run.ported.word(0xa62 - shift + i * 2) == i + 1, "Failed allocation changed an existing actor");
        record(run);
    }
    Comparison run(version);
    run.configure([&](Machine& m) {
        m.word(0xa52 - shift, 0);
        m.word(0xa54 - shift, 0);
        m.word(0xa4c - shift, 10);
        m.word(0xa4e - shift, 12);
        for (unsigned i = 0; i < 30; ++i) m.word(0xa9e - shift + i * 2, i == 29 ? 0xffff : i * 2 + 2);
    });
    run.finish(run.call(jp ? 0xc09be1 : 0xc09c02, 0, 0, 0, false));
    require(run.ported.cpu.x_index == 10 && !(run.ported.cpu.status_register & eb::MainCpu65816::Carry),
            "Source allocator ignored its permitted slot range");
    require(run.ported.word(0xa9e - shift + 8) == 12, "Source free-list unlink order changed");
    record(run);
}

void npc_selection(eb::GameVersion version) {
    Comparison run(version);
    const auto& p = eb::source_profile(version);
    const unsigned shift = run.jp ? 10 : 0;
    const unsigned hitbox = run.jp ? 0x3728 : 0x332a;
    const unsigned widths = run.jp ? 0x3764 : 0x3366;
    const unsigned heights = run.jp ? 0x37a0 : 0x33a2;
    const unsigned npc_ids = run.jp ? 0x3098 : 0x2c9a;
    run.configure([&](Machine& m) {
        for (unsigned i = 0; i < 30; ++i) m.word(0xa62 - shift + i * 2, 0xffff);
        m.word(run.jp ? 0x9b3a : 0x9889, 24); // game_state.current_party_members[0].
        m.word(p.party_state.leader_x, 100);
        m.word(p.party_state.leader_y, 100);
        for (unsigned slot : {2u, 48u}) {
            m.word(hitbox + slot, 1);
            m.word(widths + slot, 8);
            m.word(heights + slot, 8);
        }
        m.word(0xa62 - shift + 2, 0); // One active NPC; party leader is outside the 23-NPC scan.
        m.word(npc_ids + 2, 77);
        m.word(p.wram_entity_world_coordinates.x + 2, 100);
        m.word(p.wram_entity_world_coordinates.y + 2, 100);
        m.word(p.movement_state.intangibility_frames, 18);
    });
    run.finish(run.call(run.jp ? 0xc046d9 : 0xc04452));
    require(run.ported.cpu.accumulator == 77, "Talk selection did not find the synthetic NPC");
    require(run.ported.word(run.jp ? 0x60e8 : 0x5d62) == 77 && run.ported.word(run.jp ? 0x60ea : 0x5d64) == 1,
            "Talk selection published wrong NPC or entity identity");
    require(run.ported.word(p.movement_state.intangibility_frames) == 18, "Talk search did not restore intangibility");
    record(run);
}

void placement_scans(eb::GameVersion version, unsigned width, bool enemy) {
    Comparison run(version);
    run.configure([&](Machine& m) {
        m.cpu.set_entity_preload_width(width);
        m.disable_butterfly_spawns = true;
        m.word(run.jp ? 0x4dde : 0x4a58, 1);
        m.word(run.jp ? 0x4de0 : 0x4a5a, 1);
        m.word(0x24, 0x1234);
        m.word(0x26, 0x5678);
    });
    const unsigned query = enemy ? (run.jp ? 0xc0264b : 0xc0263d) : (run.jp ? 0xc02239 : 0xc0222b);
    const unsigned entry = enemy ? (run.jp ? 0xc02a7b : 0xc02a6b) : (run.jp ? 0xc0256a : 0xc0255c);
    std::set<int> columns;
    const auto return_address = run.call(entry, enemy ? 152 : 160, 160);
    run.finish(return_address, [&] {
        if (run.legacy.cpu.program_counter == query) columns.insert(std::int16_t(run.legacy.cpu.accumulator));
    });
    require(!columns.empty(), "Placement loader did not query source sectors");
    if (width == 256)
        require(*columns.begin() == (enemy ? 19 : 4) && *columns.rbegin() == (enemy ? 24 : 6),
                "Native sector query bounds changed");
    else
        require(*columns.begin() < (enemy ? 19 : 4) && *columns.rbegin() > (enemy ? 24 : 6),
                "Wide source query policy was not exercised");
    record(run);
}

void enemy_population_rng(eb::GameVersion version) {
    Comparison run(version);
    const unsigned counter = run.jp ? 0x4e00 : 0x4a7a;
    run.configure([&](Machine& m) {
        m.disable_butterfly_spawns = true;
        m.word(counter, 15);
        m.word(0x24, 0x1234);
        m.word(0x26, 0x5678);
    });
    const unsigned random_entry = run.jp ? 0xc08e8b : 0xc08e9a;
    unsigned random_calls = 0;
    const auto return_address = run.call(run.jp ? 0xc02676 : 0xc02668, 160, 160, 0, false);
    run.finish(return_address, [&] { random_calls += run.legacy.cpu.program_counter == random_entry; });
    require(random_calls == 1 && run.ported.word(counter) == 16, "Source population RNG cadence changed");
    require(run.ported.word(0x24) != 0x1234 || run.ported.word(0x26) != 0x5678,
            "Enemy population did not advance RNG state");
    record(run);
}

void battle_resources(eb::GameVersion version) {
    const auto& p = eb::source_profile(version);
    const auto& layout = p.battler_layout;
    // Player HP/PP roll toward targets; NPCs and enemies change immediately.
    // Exercise the real regional handlers and their character/NPC data writes.
    for (unsigned kind : {0u, 1u, 2u}) {
        for (unsigned requested : {0u, 13u, 200u}) {
            Comparison run(version);
            run.configure([&](Machine& m) {
                m.word(layout.table_address + layout.hp, 10);
                m.word(layout.table_address + layout.hp_max, 50);
                m.word(layout.table_address + layout.pp, 5);
                m.word(layout.table_address + layout.pp_max, 17);
                m.bus->work_ram[layout.table_address + layout.ally_or_enemy] = kind == 2;
                m.bus->work_ram[layout.table_address + layout.npc_id] = kind == 1;
            });
            run.finish(run.call(run.jp ? 0xc27065 : 0xc27126, layout.table_address, requested, 0, false));
            const auto hp = std::min(requested, 50u);
            require(run.ported.word(layout.table_address + layout.hp_target) == hp,
                    "Battle HP did not clamp to maximum");
            require(run.ported.word(layout.table_address + layout.hp) == (kind ? hp : 10),
                    "Battle HP rolling/immediate policy changed");
            run.finish(run.call(run.jp ? 0xc270d4 : 0xc27191, layout.table_address, requested, 0, false));
            const auto pp = std::min(requested, 17u);
            require(run.ported.word(layout.table_address + layout.pp_target) == pp,
                    "Battle PP did not clamp to maximum");
            require(run.ported.word(layout.table_address + layout.pp) == (kind ? pp : 5),
                    "Battle PP rolling/immediate policy changed");
            if (kind == 0) {
                require(run.ported.word(p.character_layout.table_address + p.character_layout.current_hp_target) == hp &&
                            run.ported.word(p.character_layout.table_address + p.character_layout.current_pp_target) == pp,
                        "Battle resource targets were not published to the regional character layout");
            }
            record(run);
        }
    }
}
} // namespace

int main() {
    try {
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            for (bool enhanced : {false, true})
                for (unsigned count : {0u, 1u, 30u}) entity_scheduler(version, count, enhanced, false);
            entity_scheduler(version, 30, true, true);
            entity_allocation(version);
            npc_selection(version);
            for (unsigned width : {256u, 522u, 1024u})
                for (bool enemy : {false, true}) placement_scans(version, width, enemy);
            enemy_population_rng(version);
            battle_resources(version);
        }
        std::cout << "PASS " << cases << " regional subsystem fixtures; " << total_steps
                  << " source steps and " << total_writes
                  << " ordered writes match across legacy/ported runtimes, including private timing/hardware state\n";
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
