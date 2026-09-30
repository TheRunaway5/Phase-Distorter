// Local-asset replay through real native admissions, with the frozen runtime
// stepping the exact number of source calls returned at each native checkpoint.
// Example (long enough to leave the title/naming sequence):
// native_gameplay_differential --assets local.ebpak --frames 26097
//   --input-script cpp/tests/exploration_route.input --require-native
// Optional --credits-scene uses the input route to reach the overworld, then
// injects one synthetic call to the original PLAY_CREDITS at a safe frame-wait
// boundary. This verifies the authored scene and its return, not a natural
// route through the ending. Its default total frame bound is 40000.
// Optional --battle-scene reaches that same overworld boundary, then calls
// INIT_BATTLE_SCRIPTED with imported group3 (one Coil Snake). Real A-button
// pulses drive Bash, target selection and text until the source call returns.
// This is a fixture-injected encounter, not a naturally reached enemy battle.
// Preserve and report either source victory or defeat; never install winning stats.
// No asset pack or authored content is bundled into this test.
#include "eb/main_cpu_65816.hpp"
#include "eb/game/runtime/runtime.hpp"
#include "eb/snes_audio_dsp.hpp"
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include "runtime_state_audit.hpp"

#include <algorithm>
#include <array>
#include <fstream>
#include <iostream>
#include <memory>
#include <span>
#include <sstream>
#include <stdexcept>
#include <string>
#include <string_view>
#include <tuple>
#include <vector>

namespace {
void require(bool condition, const char* message) { if (!condition) throw std::runtime_error(message); }
auto cpu_state(const eb::MainCpu65816& c) {
    return std::tie(c.program_counter, c.accumulator, c.x_index, c.y_index, c.status_register,
        c.stack_pointer, c.direct_page, c.data_bank, c.emulation_mode, c.is_stopped,
        c.is_waiting, c.cycle_count, c.instruction_count);
}
auto audio_state(const eb::Spc700AudioCpu& c) {
    return std::tie(c.program_counter, c.accumulator, c.x_index, c.y_index, c.stack_pointer,
        c.status_register, c.is_stopped, c.is_sleeping, c.cycle_count, c.instruction_count);
}
struct AudioEvent {
    enum class Kind { Clock, Read, Write } kind;
    unsigned address, value;
    std::uint64_t master_clock;
    bool operator==(const AudioEvent&) const = default;
};
struct Picture {
    std::uint64_t frame, master_clock;
    unsigned width;
    double aspect;
    std::vector<std::uint32_t> native, pixels, reference;
    std::vector<std::uint8_t> mask;
    bool operator==(const Picture&) const = default;
};
struct Machine {
    eb::SnesBus bus;
    eb::Spc700AudioCpu audio_cpu;
    eb::SnesAudioDsp dsp;
    eb::MainCpu65816 cpu;
    std::vector<AudioEvent> audio_events;
    std::vector<Picture> pictures;

    Machine(const eb::GameAssets& assets, eb::MainCpuRuntime runtime, bool enhanced)
        : bus(assets.image, assets.version), audio_cpu(bus), dsp(audio_cpu), cpu(bus) {
        cpu.set_runtime(runtime);
        cpu.reset_from_vector();
        cpu.set_gameplay_timing(enhanced);
        require(cpu.runtime() == runtime, "Reset changed the selected runtime");
        audio_events.reserve(128);
        // Preserve the functional APU/DSP connection and record its complete
        // clock/register interface. No main-bus or memory-write observer is
        // installed: those correctly force advance_gameplay to exact stepping.
        const auto clock = audio_cpu.advance_dsp_clocks;
        audio_cpu.advance_dsp_clocks = [this, clock](unsigned clocks) {
            audio_events.push_back({AudioEvent::Kind::Clock, clocks, 0, bus.master_clocks()});
            clock(clocks);
        };
        const auto write = audio_cpu.write_dsp_register;
        audio_cpu.write_dsp_register = [this, write](std::uint8_t address, std::uint8_t value) {
            audio_events.push_back({AudioEvent::Kind::Write, address, value, bus.master_clocks()});
            write(address, value);
        };
        const auto read = audio_cpu.read_dsp_register;
        audio_cpu.read_dsp_register = [this, read](std::uint8_t address) {
            const auto value = read(address);
            audio_events.push_back({AudioEvent::Kind::Read, address, value, bus.master_clocks()});
            return value;
        };
        bus.on_presentation_frame = [this](auto pixels, unsigned width, std::uint64_t frame) {
            const auto reference = bus.presentation_effect_reference();
            const auto mask = bus.presentation_effect_mask();
            pictures.push_back({frame, bus.master_clocks(), width, bus.presentation_fixed_aspect(),
                {bus.native_framebuffer.begin(), bus.native_framebuffer.end()}, {pixels.begin(), pixels.end()},
                {reference.begin(), reference.end()}, {mask.begin(), mask.end()}});
        };
    }
    void configure(unsigned width, bool effects) {
        bus.set_presentation_width(width);
        cpu.set_entity_preload_width(width);
        bus.set_presentation_effects_enabled(effects);
    }
};

void compare_memory(const Machine& a, const Machine& b) {
    require(a.bus.work_ram == b.bus.work_ram, "WRAM differs");
    require(a.bus.save_ram == b.bus.save_ram, "SRAM differs");
    require(a.bus.video_ram == b.bus.video_ram, "VRAM differs");
    require(a.bus.palette_ram == b.bus.palette_ram, "Palette RAM differs");
    require(a.bus.object_attributes == b.bus.object_attributes, "Object RAM differs");
    require(a.bus.audio_to_main_ports == b.bus.audio_to_main_ports &&
        a.bus.main_to_audio_ports == b.bus.main_to_audio_ports, "Audio mailbox state differs");
    require(a.audio_cpu.audio_ram == b.audio_cpu.audio_ram, "APU RAM differs");
    require(a.audio_cpu.dsp_registers == b.audio_cpu.dsp_registers, "DSP register shadow differs");
    require(a.bus.native_framebuffer == b.bus.native_framebuffer, "Native framebuffer differs");
    const auto pixels_a = a.bus.presentation_pixels(), pixels_b = b.bus.presentation_pixels();
    const auto mask_a = a.bus.presentation_effect_mask(), mask_b = b.bus.presentation_effect_mask();
    const auto reference_a = a.bus.presentation_effect_reference(), reference_b = b.bus.presentation_effect_reference();
    require(a.bus.presentation_width() == b.bus.presentation_width() &&
        a.bus.presentation_fixed_aspect() == b.bus.presentation_fixed_aspect() &&
        std::equal(pixels_a.begin(), pixels_a.end(), pixels_b.begin(), pixels_b.end()), "Presentation canvas differs");
    require(std::equal(mask_a.begin(), mask_a.end(), mask_b.begin(), mask_b.end()) &&
        std::equal(reference_a.begin(), reference_a.end(), reference_b.begin(), reference_b.end()),
        "Presentation effect metadata differs");
    for (unsigned reg = 0; reg < 128; ++reg)
        require(a.dsp.read_register(reg) == b.dsp.read_register(reg), "DSP synthesis registers differ");
}
void compare_controls(const Machine& a, const Machine& b) {
    require(cpu_state(a.cpu) == cpu_state(b.cpu), "CPU architectural state differs");
    require(a.cpu.timing_snapshot() == b.cpu.timing_snapshot(), "Private CPU timing state differs");
    require(eb::RuntimeStateAudit::bus_controls(a.bus) == eb::RuntimeStateAudit::bus_controls(b.bus),
        "Private hardware registers/latches/DMA/IRQ/clock state differs");
    require(audio_state(a.audio_cpu) == audio_state(b.audio_cpu), "APU architectural state differs");
    require(eb::RuntimeStateAudit::audio_controls(a.audio_cpu) == eb::RuntimeStateAudit::audio_controls(b.audio_cpu),
        "Private APU timer/control/clock state differs");
    require(a.audio_events == b.audio_events, "Ordered/timestamped DSP clocks/register accesses differ");
    require(a.bus.completed_frames == b.bus.completed_frames, "Hardware frame count differs");
    require(a.pictures == b.pictures, "Frame callback order/timestamps/pixels/effect metadata differ");
    require(a.dsp.generated_stereo_frame_count() == b.dsp.generated_stereo_frame_count(), "DSP sample count differs");
}
struct Proof {
    std::uint64_t checkpoints{}, source_steps{}, native_steps{}, native_batches{}, audio_events{}, callbacks{}, samples{};
    std::uint64_t dialogue_register_batches{}, dialogue_branch_batches{}, dialogue_skip_batches{};
    std::uint64_t dialogue_transfer_batches{}, credits_queue_batches{}, credits_scroll_batches{};
    std::array<std::uint64_t, 3> credits_queue_site_batches{};
    std::array<std::uint64_t, 14> npc_collision_site_batches{};
    std::uint64_t npc_collision_batches{}, battle_targeting_batches{};
    std::array<std::uint64_t, 35> battle_targeting_site_batches{};
    std::uint64_t first_native_frame = UINT64_MAX, last_native_frame{};
};
void record_native(Proof& proof, std::uint32_t pc, eb::GameVersion region) {
    const bool jp = region == eb::GameVersion::JP;
    constexpr std::array collision_sites{0xc06000u,0xc06014u,0xc06032u,0xc0605eu,0xc0607bu,
        0xc060a6u,0xc060d2u,0xc060e9u,0xc060f4u,0xc0610au,0xc06117u,0xc0611fu,0xc06129u,0xc06133u};
    if (const auto found = std::find(collision_sites.begin(),collision_sites.end(),pc - (jp ? 0x22eu : 0u));
        found != collision_sites.end()) {
        ++proof.npc_collision_batches;
        ++proof.npc_collision_site_batches[found - collision_sites.begin()];
        return;
    }
    constexpr std::array targeting_sites{0xc26e45u,0xc26e4fu,0xc26c50u,0xc26c5au,0xc26cd2u,0xc26cdcu,
        0xc26d6fu,0xc26d79u,0xc26dc9u,0xc26dd3u,0xc26ec6u,0xc26ed0u,0xc27007u,0xc27011u,
        0xc270c2u,0xc270ccu,0xc27057u,0xc27061u,0xc2706du,0xc26e08u,0xc26c03u,0xc26c8au,0xc26d11u,
        0xc26e1eu,0xc26c19u,0xc26ca0u,0xc26d28u,0xc26e89u,
        0xc26e65u,0xc26c70u,0xc26cf2u,0xc26de9u,0xc26ee6u,0xc4a1ffu,0xc23fecu};
    const auto targeting_pc = jp ? (pc == 0xc4766c ? 0xc4a1ffu : pc == 0xc23ea0 ? 0xc23fecu : pc + 0xc1u) : pc;
    if (const auto found = std::find(targeting_sites.begin(),targeting_sites.end(),targeting_pc);
        found != targeting_sites.end()) {
        ++proof.battle_targeting_batches;
        ++proof.battle_targeting_site_batches[found - targeting_sites.begin()];
        return;
    }
    constexpr std::array transfers{0xc1032fu, 0xc10351u, 0xc10373u, 0xc1038bu, 0xc103adu, 0xc103cfu};
    if (std::find(transfers.begin(), transfers.end(), pc - (jp ? 0x203u : 0u)) != transfers.end()) {
        ++proof.dialogue_transfer_batches;
        return;
    }
    const std::array queue{jp ? 0xc4c008u : 0xc4efceu, jp ? 0xc4c028u : 0xc4efeeu,
                           jp ? 0xc4c048u : 0xc4f00eu};
    if (const auto found = std::find(queue.begin(), queue.end(), pc); found != queue.end()) {
        ++proof.credits_queue_batches;
        ++proof.credits_queue_site_batches[found - queue.begin()];
        return;
    }
    if (pc == (jp ? 0xc0ff3eu : 0xc0f89au)) {
        ++proof.credits_scroll_batches;
        return;
    }
    if (pc == (jp ? 0xc17ef4u : 0xc17c7fu) || pc == (jp ? 0xc17f32u : 0xc17cbdu))
        ++proof.dialogue_branch_batches;
    else if (pc == (jp ? 0xc17f10u : 0xc17c9bu) || pc == (jp ? 0xc17f4eu : 0xc17cd9u))
        ++proof.dialogue_skip_batches;
    else {
        constexpr std::array helpers{0xc10415u, 0xc103e7u, 0xc10470u, 0xc1049cu,
                                     0xc10405u, 0xc10453u, 0xc10433u};
        if (std::find(helpers.begin(), helpers.end(), pc - (jp ? 0x203u : 0u)) != helpers.end())
            ++proof.dialogue_register_batches;
        else require(false, "Unclassified native admission");
    }
}
eb::game::runtime::RoutineInfo source_routine(eb::GameVersion version, std::string_view source,
                                            std::string_view japanese = {}) {
    if (version == eb::GameVersion::JP && !japanese.empty()) source = japanese;
    for (const auto& routine : eb::game::runtime::ported_routines(version))
        if (routine.source == source) return routine;
    throw std::runtime_error("Required source routine is not ported: " + std::string(source));
}
std::uint32_t wram_value(const eb::SnesBus& bus, unsigned address, unsigned bytes) {
    std::uint32_t value = 0;
    for (unsigned i = 0; i < bytes; ++i) value |= std::uint32_t(bus.work_ram.at(address + i)) << (8 * i);
    return value;
}
std::uint64_t pixel_hash(std::span<const std::uint32_t> pixels) {
    std::uint64_t hash = 14695981039346656037ull;
    for (const auto pixel : pixels) {
        for (unsigned shift : {0u, 8u, 16u, 24u}) {
            hash ^= std::uint8_t(pixel >> shift);
            hash *= 1099511628211ull;
        }
    }
    return hash;
}
std::string display_snapshot(const Machine& machine) {
    std::ostringstream out;
    const auto registers = machine.bus.ppu_registers();
    out << std::hex << " PPU[00,05,07..0c,2c..31]=";
    for (unsigned offset : {0u, 5u, 7u, 8u, 9u, 10u, 11u, 12u, 0x2cu, 0x2du,
                            0x2eu, 0x2fu, 0x30u, 0x31u})
        out << unsigned(registers[offset]) << ',';
    // Common RAM1 layout: display mirror$0d, callback$20, fade step/delay$28/$29.
    out << " INIDISP_MIRROR=" << unsigned(machine.bus.work_ram[0x0d])
        << " IRQ_CALLBACK=" << wram_value(machine.bus, 0x20, 2)
        << " fade_step=" << unsigned(machine.bus.work_ram[0x28])
        << " fade_delay=" << unsigned(machine.bus.work_ram[0x29]) << std::dec
        << " nonzero_VRAM_bytes=" << std::count_if(machine.bus.video_ram.begin(), machine.bus.video_ram.end(),
                                                  [](auto byte) { return byte != 0; })
        << " nonzero_CGRAM_bytes=" << std::count_if(machine.bus.palette_ram.begin(), machine.bus.palette_ram.end(),
                                                   [](auto byte) { return byte != 0; });
    return out.str();
}
bool safe_overworld_handoff(const Machine& machine, const eb::SourceProfile& profile,
                            const eb::game::runtime::RoutineInfo& overworld) {
    const auto& cpu = machine.cpu;
    // Original foreground WAIT boundary, with the normal overworld callback
    // and live NMI. I may be set: irq_nmi.asm dispatches NMI independently.
    // Enough source C/hardware stack remains for either nested scene call.
    return cpu.program_counter == profile.gameplay_timing.wait_for_next_frame &&
        !cpu.emulation_mode && cpu.data_bank == 0x7e &&
        !(cpu.status_register & (eb::MainCpu65816::Decimal | eb::MainCpu65816::Accumulator8Bit |
                                 eb::MainCpu65816::Index8Bit)) &&
        cpu.direct_page >= 0x1e00 && cpu.direct_page <= 0x1f00 &&
        cpu.stack_pointer >= 0x1f40 && cpu.stack_pointer <= 0x1fff &&
        cpu.timing_snapshot().interrupt_nesting_depth == 0 &&
        wram_value(machine.bus, profile.wram_battle_mode_flag, 2) == 0 &&
        (machine.bus.ppu_registers()[5] & 7) == 1 &&
        wram_value(machine.bus, 0x20, 2) == (overworld.first_address & 0xffff) &&
        (machine.bus.work_ram[0x1e] & 0x80) && machine.bus.native_execution_budget() > 0;
}
std::string battle_snapshot(const Machine& machine) {
    const auto& profile = eb::source_profile(machine.cpu.game_version);
    const auto& character = profile.character_layout;
    const auto& battler = profile.battler_layout;
    std::ostringstream out;
    out << " A=" << machine.cpu.accumulator
        << " BATTLE_MODE=" << wram_value(machine.bus, profile.action_gates.battle_mode, 2)
        << " BATTLE_MODE_FLAG=" << wram_value(machine.bus, profile.wram_battle_mode_flag, 2)
        << " teleport=" << wram_value(machine.bus, profile.teleport_state.destination, 2)
        << " party=";
    for (unsigned i = 0; i < 6; ++i) out << unsigned(machine.bus.work_ram.at(profile.party_state.members + i)) << ',';
    for (unsigned i = 0; i < 4; ++i) {
        const auto at = character.table_address + i * character.entry_size;
        out << " char" << i + 1 << "[level=" << unsigned(machine.bus.work_ram.at(at + character.level))
            << ",hp=" << wram_value(machine.bus, at + character.current_hp, 2)
            << ",target=" << wram_value(machine.bus, at + character.current_hp_target, 2)
            << ",max=" << wram_value(machine.bus, at + character.max_hp, 2)
            << ",status=" << unsigned(machine.bus.work_ram.at(at + character.afflictions)) << ']';
    }
    for (unsigned i = 0; i < 32; ++i) {
        const auto at = battler.table_address + i * battler.entry_size;
        const auto conscious = machine.bus.work_ram.at(at + battler.consciousness);
        if (!conscious && i != 0 && i != 8) continue;
        out << " battler" << i << "[id=" << wram_value(machine.bus, at + battler.id, 2)
            << ",side=" << unsigned(machine.bus.work_ram.at(at + battler.ally_or_enemy))
            << ",conscious=" << unsigned(conscious)
            << ",hp=" << wram_value(machine.bus, at + battler.hp, 2)
            << ",target=" << wram_value(machine.bus, at + battler.hp_target, 2)
            << ",max=" << wram_value(machine.bus, at + battler.hp_max, 2)
            << ",status=" << unsigned(machine.bus.work_ram.at(at + battler.afflictions))
            // include/structs.asm:battler current_action/offense/defense.
            << ",action=" << wram_value(machine.bus, at + 4, 2)
            << ",offense=" << wram_value(machine.bus, at + 38, 2)
            << ",defense=" << wram_value(machine.bus, at + 40, 2) << ']';
    }
    return out.str();
}
std::array<unsigned, 2> battle_survivors(const Machine& machine) {
    // Read-only outcome evidence from src/battle/count_chars.asm, independent
    // of the native targeting domain: conscious non-NPC records, each side,
    // excluding persistent unconscious/diamondized statuses1/2.
    const auto& layout = eb::source_profile(machine.cpu.game_version).battler_layout;
    std::array<unsigned, 2> counts{};
    for (unsigned i = 0; i < 32; ++i) {
        const auto at = layout.table_address + i * layout.entry_size;
        const auto side = machine.bus.work_ram.at(at + layout.ally_or_enemy);
        const auto status = machine.bus.work_ram.at(at + layout.afflictions);
        if (side < counts.size() && machine.bus.work_ram.at(at + layout.consciousness) &&
            !machine.bus.work_ram.at(at + layout.npc_id) && status != 1 && status != 2) ++counts[side];
    }
    return counts;
}
struct CreditsEvidence {
    const eb::GameAssets& assets;
    eb::game::runtime::RoutineInfo initialize, scroll;
    unsigned script_storage, next_credit;
    bool initialized{}, saw_end_marker{};
    std::uint32_t script_start{}, latest_cursor{}, end_marker_address{}, completed_cursor{};
    std::uint32_t observed_command_cursor = UINT32_MAX;
    std::uint64_t cursor_changes{}, line_commands{}, scene_callbacks{};
    std::uint64_t nonuniform_native_frames{}, nonuniform_presented_frames{}, native_hash_changes{};
    std::uint64_t first_native_hash{}, latest_native_hash{}, latest_presentation_hash{};

    explicit CreditsEvidence(const eb::GameAssets& source)
        : assets(source), initialize(source_routine(source.version, "src/ending/initialize_credits_scene.asm")),
          scroll(source_routine(source.version, "src/ending/credits_scroll_frame.asm",
                                                "src/ending/credits_scroll_frame-jp.asm")),
          script_storage(source.version == eb::GameVersion::JP ? 0xb6b0 : 0xb4e7),
          next_credit(source.version == eb::GameVersion::JP ? 0xb6ac : 0xb4e3) {}
    void inspect_cursor(const Machine& machine) {
        const auto cursor = wram_value(machine.bus, script_storage, 4);
        require(cursor >= 0xc00000 && cursor <= 0xffffff && (cursor & 0x3fffff) < assets.image.size(),
                "Credits cursor left the imported authored ROM");
        if (cursor != latest_cursor) {
            require(cursor > latest_cursor, "Credits source cursor moved backwards");
            ++cursor_changes;
            latest_cursor = cursor;
        }
        if (wram_value(machine.bus, next_credit, 2) == 0xffff) {
            completed_cursor = cursor;
            return;
        }
        // Observe the source cursor at the actual scroll-routine entry. The
        // next byte remains imported content; never install a replacement script.
        const auto command = assets.image[cursor & 0x3fffff];
        if (cursor != observed_command_cursor && (command == 1 || command == 2)) ++line_commands;
        observed_command_cursor = cursor;
        if (command == 0xff) {
            saw_end_marker = true;
            end_marker_address = cursor;
        }
    }
    void before_step(const Machine& machine) {
        if (!initialized && machine.cpu.program_counter == initialize.last_address) {
            script_start = latest_cursor = wram_value(machine.bus, script_storage, 4);
            require(script_start >= 0xc00000 && script_start <= 0xffffff &&
                    (script_start & 0x3fffff) < assets.image.size(),
                    "Credits initializer did not install an authored ROM script");
            initialized = true;
        }
        if (initialized && machine.cpu.program_counter == scroll.first_address) inspect_cursor(machine);
    }
    void pictures(const std::vector<Picture>& frames) {
        if (!initialized) return;
        for (const auto& frame : frames) {
            const auto hash = pixel_hash(frame.native);
            if (!scene_callbacks) first_native_hash = hash;
            else if (hash != latest_native_hash) ++native_hash_changes;
            latest_native_hash = hash;
            latest_presentation_hash = pixel_hash(frame.pixels);
            if (!frame.native.empty() && std::any_of(frame.native.begin() + 1, frame.native.end(),
                    [&](auto pixel) { return pixel != frame.native.front(); })) ++nonuniform_native_frames;
            if (!frame.pixels.empty() && std::any_of(frame.pixels.begin() + 1, frame.pixels.end(),
                    [&](auto pixel) { return pixel != frame.pixels.front(); })) ++nonuniform_presented_frames;
            ++scene_callbacks;
        }
    }
};
struct BattleEvidence {
    eb::game::runtime::RoutineInfo initialize, common, battle, resolve;
    const eb::SourceProfile& profile;
    bool saw_initializer{}, in_battle{}, saw_battle_return{};
    std::uint64_t battle_entries{}, resolver_calls{}, enemy_resolver_calls{}, player_resolver_calls{};
    std::uint64_t scene_callbacks{}, nonuniform_native_frames{}, nonuniform_presented_frames{}, native_hash_changes{};
    std::uint64_t first_native_hash{}, latest_native_hash{}, latest_presentation_hash{};
    unsigned battle_group, enemy_count, enemy_ids;
    unsigned battle_return_a = 0xffff, common_return_a = 0xffff, scripted_return_a = 0xffff;
    std::array<unsigned, 2> initial_survivors{}, final_survivors{};
    std::string first_combat_state;

    explicit BattleEvidence(eb::GameVersion version)
        : initialize(source_routine(version, "src/battle/init_scripted.asm")),
          common(source_routine(version, "src/battle/init_common.asm")),
          battle(source_routine(version, "src/battle/main_battle_routine.asm")),
          resolve(source_routine(version, "src/unknown/C2/C24703.asm")),
          profile(eb::source_profile(version)),
          // Original init_scripted operands, not the native targeting layout.
          battle_group(version == eb::GameVersion::JP ? 0x4e12 : 0x4a8c),
          enemy_count(version == eb::GameVersion::JP ? 0xa18c : 0x9f8a),
          enemy_ids(version == eb::GameVersion::JP ? 0xa18e : 0x9f8c) {}
    void before_step(const Machine& machine) {
        const auto pc = machine.cpu.program_counter;
        if (pc == initialize.first_address) {
            require(machine.cpu.accumulator == 3, "Scripted battle did not receive imported group3");
            saw_initializer = true;
        }
        if (pc == battle.first_address) {
            // battle_groups_table.asm: ENEMY_GROUP_003 = one ENEMY::COIL_SNAKE
            // (55 in constants/enemies.asm). The original initializer must
            // read this imported group itself; the fixture writes no battlers.
            require(saw_initializer && wram_value(machine.bus, battle_group, 2) == 3 &&
                    wram_value(machine.bus, enemy_count, 2) == 1 &&
                    wram_value(machine.bus, enemy_ids, 2) == 55,
                    "Original initializer did not load the authored Coil Snake group");
            ++battle_entries;
            in_battle = true;
        }
        if (pc == resolve.first_address && in_battle) {
            const auto& layout = profile.battler_layout;
            const auto actor = machine.cpu.accumulator;
            require(actor >= layout.table_address && actor < layout.table_address + 32 * layout.entry_size &&
                    (actor - layout.table_address) % layout.entry_size == 0,
                    "Battle target resolver received a noncanonical captured battler");
            if (!resolver_calls) {
                first_combat_state = battle_snapshot(machine);
                initial_survivors = battle_survivors(machine);
            }
            ++resolver_calls;
            const auto side = machine.bus.work_ram.at(actor + layout.ally_or_enemy);
            if (side == 1) ++enemy_resolver_calls;
            else if (side == 0) ++player_resolver_calls;
        }
        if (pc == battle.last_address && in_battle) {
            battle_return_a = machine.cpu.accumulator;
            final_survivors = battle_survivors(machine);
            saw_battle_return = true;
            in_battle = false;
        }
        if (pc == common.last_address) common_return_a = machine.cpu.accumulator;
        if (pc == initialize.last_address) scripted_return_a = machine.cpu.accumulator;
    }
    void pictures(const std::vector<Picture>& frames) {
        if (!in_battle) return;
        for (const auto& frame : frames) {
            const auto hash = pixel_hash(frame.native);
            if (!scene_callbacks) first_native_hash = hash;
            else if (hash != latest_native_hash) ++native_hash_changes;
            latest_native_hash = hash;
            latest_presentation_hash = pixel_hash(frame.pixels);
            if (!frame.native.empty() && std::any_of(frame.native.begin() + 1, frame.native.end(),
                    [&](auto pixel) { return pixel != frame.native.front(); })) ++nonuniform_native_frames;
            if (!frame.pixels.empty() && std::any_of(frame.pixels.begin() + 1, frame.pixels.end(),
                    [&](auto pixel) { return pixel != frame.pixels.front(); })) ++nonuniform_presented_frames;
            ++scene_callbacks;
        }
    }
};
void compare_pcm(Machine& a, Machine& b, Proof& proof) {
    const auto samples = a.dsp.take_stereo_samples();
    require(samples == b.dsp.take_stereo_samples(), "Interleaved PCM differs");
    proof.samples += samples.size();
}
void compare_checkpoint(Machine& legacy, Machine& native, Proof& proof, bool strict_memory,
                        CreditsEvidence* credits = nullptr, BattleEvidence* battle = nullptr) {
    constexpr unsigned maximum_steps = 64;
    const auto before_pc = legacy.cpu.program_counter;
    const auto before_frame = legacy.bus.completed_frames;
    const auto before_batches = native.cpu.native_gameplay_batches();
    unsigned consumed = 0;
    try {
        require(!legacy.cpu.is_stopped && !native.cpu.is_stopped, "Processor stopped before the replay target");
        if (credits) credits->before_step(legacy);
        if (battle) battle->before_step(legacy);
        // Run the proposed chunk first. Its returned count includes serviced
        // interrupts/waits, so do not infer it from instruction_count deltas.
        consumed = native.cpu.advance_gameplay(maximum_steps);
        require(consumed > 0 && consumed <= maximum_steps, "Invalid native step-call count");
        for (unsigned i = 0; i < consumed; ++i) legacy.cpu.step_instruction();
        const auto batches = native.cpu.native_gameplay_batches() - before_batches;
        require(batches <= 1 && (consumed == 1 || batches == 1), "Native admission accounting differs");
        compare_controls(legacy, native);
        // Every real native admission gets a full state comparison, even if
        // it occurs between frames. Exact fallback steps get it at frame
        // boundaries; --strict-memory requests every checkpoint instead.
        if (strict_memory || batches || legacy.bus.completed_frames != before_frame)
            compare_memory(legacy, native);
        if (batches || legacy.bus.completed_frames != before_frame) compare_pcm(legacy, native, proof);
        ++proof.checkpoints;
        proof.source_steps += consumed;
        if (batches) {
            proof.native_batches += batches;
            proof.native_steps += consumed;
            record_native(proof, before_pc, native.cpu.game_version);
            if (proof.first_native_frame == UINT64_MAX) proof.first_native_frame = before_frame;
            proof.last_native_frame = before_frame;
        }
        proof.audio_events += legacy.audio_events.size();
        proof.callbacks += legacy.pictures.size();
        if (credits) credits->pictures(legacy.pictures);
        if (battle) battle->pictures(legacy.pictures);
        legacy.audio_events.clear(); native.audio_events.clear();
        legacy.pictures.clear(); native.pictures.clear();
    } catch (const std::exception& error) {
        std::ostringstream message;
        message << "checkpoint=" << proof.checkpoints << " source_steps=" << proof.source_steps
            << " frame=" << before_frame << " consumed=" << consumed << " native_batches="
            << native.cpu.native_gameplay_batches() << " source=" << std::hex << before_pc
            << ": " << error.what() << " legacy " << legacy.cpu.describe_registers()
            << " native " << native.cpu.describe_registers();
        throw std::runtime_error(message.str());
    }
}

std::uint64_t number(const std::string& text) {
    require(!text.empty() && text.front() != '-', "Expected an unsigned integer");
    std::size_t end = 0;
    const auto value = std::stoull(text, &end, 0);
    require(end == text.size(), "Unexpected characters after integer");
    return value;
}
struct Input { std::uint64_t frame; std::uint16_t buttons; };
std::vector<Input> input_script(const std::string& path) {
    std::vector<Input> result;
    if (path.empty()) return result;
    std::ifstream input(path);
    require(bool(input), "Cannot open input script");
    std::string line;
    while (std::getline(input, line)) {
        std::istringstream fields(line.substr(0, line.find('#')));
        std::string f, b, extra;
        if (!(fields >> f)) continue;
        require(bool(fields >> b) && !(fields >> extra), "Expected '<frame> <joymask>'");
        const auto frame = number(f), buttons = number(b);
        require(buttons <= 65535 && (result.empty() || result.back().frame < frame), "Invalid input sequence");
        result.push_back({frame, std::uint16_t(buttons)});
    }
    return result;
}
void replay(const eb::GameAssets& assets, std::uint64_t frames, const std::vector<Input>& inputs,
            bool enhanced, bool require_native, bool require_dialogue, bool strict_memory) {
    auto legacy = std::make_unique<Machine>(assets, eb::MainCpuRuntime::Legacy, enhanced);
    auto native = std::make_unique<Machine>(assets, eb::MainCpuRuntime::Ported, enhanced);
    std::size_t next_input = 0;
    std::uint64_t configured_frame = UINT64_MAX, next_progress = 1000;
    Proof proof;
    while (legacy->bus.completed_frames < frames) {
        if (configured_frame != legacy->bus.completed_frames) {
            configured_frame = legacy->bus.completed_frames;
            constexpr std::array widths{256u, 400u, 640u, 320u, 256u};
            const auto width = widths[(configured_frame / 173) % widths.size()];
            const bool effects = (configured_frame / 137) % 2;
            legacy->configure(width, effects); native->configure(width, effects);
            while (next_input < inputs.size() && inputs[next_input].frame <= configured_frame) {
                legacy->bus.set_buttons(inputs[next_input].buttons);
                native->bus.set_buttons(inputs[next_input++].buttons);
            }
        }
        compare_checkpoint(*legacy, *native, proof, strict_memory);
        if (legacy->bus.completed_frames >= next_progress) {
            std::cerr << assets.title << " enhanced=" << enhanced << " frame=" << legacy->bus.completed_frames
                << " native_batches=" << proof.native_batches << " source_steps=" << proof.source_steps << '\n';
            next_progress = legacy->bus.completed_frames + 1000;
        }
    }
    compare_controls(*legacy, *native);
    compare_memory(*legacy, *native);
    compare_pcm(*legacy, *native, proof);
    require(legacy->cpu.native_gameplay_batches() == 0 && native->cpu.native_gameplay_batches() == proof.native_batches,
        "Final native admission count is inconsistent");
    std::cout << assets.title << " enhanced=" << enhanced << " frames=" << legacy->bus.completed_frames
        << " checkpoints=" << proof.checkpoints << " source_steps=" << proof.source_steps
        << " native_batches=" << proof.native_batches << " native_steps=" << proof.native_steps
        << " dialogue_register_batches=" << proof.dialogue_register_batches
        << " dialogue_branch_batches=" << proof.dialogue_branch_batches
        << " dialogue_skip_batches=" << proof.dialogue_skip_batches
        << " dialogue_transfer_batches=" << proof.dialogue_transfer_batches
        << " credits_queue_batches=" << proof.credits_queue_batches
        << " credits_scroll_batches=" << proof.credits_scroll_batches
        << " npc_collision_batches=" << proof.npc_collision_batches
        << " battle_targeting_batches=" << proof.battle_targeting_batches
        << " DSP_events=" << proof.audio_events << " frame_callbacks=" << proof.callbacks
        << " PCM_samples=" << proof.samples;
    if (proof.native_batches)
        std::cout << " first_native_frame=" << proof.first_native_frame << " last_native_frame=" << proof.last_native_frame;
    std::cout << " checkpoint state/audio/pixels exact match\n";
    require(!require_native || proof.native_batches > 0,
        "Replay did not admit a native batch; use a longer exploration route to prove native execution");
    require(!require_dialogue || proof.dialogue_register_batches > 0,
        "Replay did not admit a dialogue register batch; use a route that opens dialogue");
}

void credits_scene(const eb::GameAssets& assets, std::uint64_t frame_bound, const std::vector<Input>& inputs,
                   bool enhanced, bool strict_memory) {
    constexpr std::uint64_t boot_frames = 900;
    require(frame_bound > boot_frames, "Credits scene requires --frames greater than its 900-frame boot");
    auto legacy = std::make_unique<Machine>(assets, eb::MainCpuRuntime::Legacy, enhanced);
    auto native = std::make_unique<Machine>(assets, eb::MainCpuRuntime::Ported, enhanced);
    Proof proof;
    std::uint64_t configured_frame = UINT64_MAX;
    std::size_t next_input = 0;
    const auto configure_frame = [&](bool accept_input) {
        const auto frame = legacy->bus.completed_frames;
        if (configured_frame == frame) return;
        configured_frame = frame;
        constexpr std::array widths{256u, 400u, 640u, 320u, 256u};
        const auto width = widths[(frame / 173) % widths.size()];
        const bool effects = (frame / 137) % 2;
        legacy->configure(width, effects); native->configure(width, effects);
        if (accept_input) while (next_input < inputs.size() && inputs[next_input].frame <= frame) {
            legacy->bus.set_buttons(inputs[next_input].buttons);
            native->bus.set_buttons(inputs[next_input++].buttons);
        }
    };
    while (legacy->bus.completed_frames < boot_frames) {
        configure_frame(true);
        compare_checkpoint(*legacy, *native, proof, strict_memory);
    }
    const auto& profile = eb::source_profile(assets.version);
    const auto overworld = source_routine(assets.version, "src/overworld/process_overworld_tasks.asm");
    const auto safe_handoff = [&] {
        // Credits inherits OVERWORLD_SETUP_VRAM's mode1; title mode3 has no
        // BG3. Keep the same source-proven handoff used by the battle fixture.
        return safe_overworld_handoff(*legacy, profile, overworld);
    };
    const auto handoff_bound = std::min(frame_bound, std::uint64_t(15000));
    std::uint64_t next_handoff_progress = 1000;
    while (!safe_handoff() && legacy->bus.completed_frames < handoff_bound) {
        configure_frame(true);
        compare_checkpoint(*legacy, *native, proof, strict_memory);
        if (legacy->bus.completed_frames >= next_handoff_progress) {
            std::cerr << assets.title << " enhanced=" << enhanced << " seeking overworld handoff frame="
                      << legacy->bus.completed_frames << " native_batches=" << proof.native_batches << '\n';
            next_handoff_progress = legacy->bus.completed_frames + 1000;
        }
    }
    if (!safe_handoff()) {
        std::ostringstream error;
        error << "Credits scene not injected: input route reached no safe overworld frame-wait boundary after " << boot_frames
              << " boot frames (stopped at frame=" << legacy->bus.completed_frames << ", "
              << legacy->cpu.describe_registers() << "). Boot parity alone does not prove the credits scene."
              << display_snapshot(*legacy);
        throw std::runtime_error(error.str());
    }
    const auto play = source_routine(assets.version, "src/ending/play_credits.asm");
    CreditsEvidence evidence(assets);
    const auto injection_frame = legacy->bus.completed_frames;
    const auto saved_stack = legacy->cpu.stack_pointer, saved_direct_page = legacy->cpu.direct_page;
    const auto trampoline = (legacy->cpu.program_counter & 0xff0000) | 0xff00;
    const auto return_address = trampoline + 4;
    const auto initial_queue = proof.credits_queue_site_batches;
    const auto initial_scroll = proof.credits_scroll_batches;
    // Only this synthetic call is fixture setup. PLAY_CREDITS itself performs
    // the initializer, IRQ callback changes, frame waits, DMA and restoration.
    // Inputs after this boundary are released, not applied to the scene.
    for (auto* machine : {legacy.get(), native.get()}) {
        machine->bus.set_buttons(0);
        machine->cpu.program_counter = trampoline;
        machine->cpu.execute_instruction<0x22>(play.first_address, 4);
    }
    compare_controls(*legacy, *native);
    compare_memory(*legacy, *native);
    std::cerr << assets.title << " enhanced=" << enhanced << " credits-scene injected at frame="
              << injection_frame << " entry=" << std::hex << play.first_address << std::dec
              << "; synthetic source call, not a natural ending route" << display_snapshot(*legacy) << '\n';
    const auto returned = [&] {
        return legacy->cpu.program_counter == return_address && legacy->cpu.stack_pointer == saved_stack;
    };
    auto next_progress = injection_frame + 1000;
    while (!returned() && legacy->bus.completed_frames < frame_bound) {
        configure_frame(false);
        compare_checkpoint(*legacy, *native, proof, strict_memory, &evidence);
        if (legacy->bus.completed_frames >= next_progress) {
            std::cerr << assets.title << " enhanced=" << enhanced << " credits frame=" << legacy->bus.completed_frames
                << " queue_batches=" << proof.credits_queue_batches << " scroll_batches=" << proof.credits_scroll_batches
                << " cursor_changes=" << evidence.cursor_changes << " nonblank_frames="
                << evidence.nonuniform_native_frames << '\n';
            next_progress = legacy->bus.completed_frames + 1000;
        }
    }
    compare_controls(*legacy, *native);
    compare_memory(*legacy, *native);
    compare_pcm(*legacy, *native, proof);
    if (!returned()) {
        std::ostringstream error;
        error << "Credits scene incomplete at --frames=" << frame_bound
              << ": initialized=" << evidence.initialized << " queue_batches=" << proof.credits_queue_batches
              << " scroll_batches=" << proof.credits_scroll_batches << " cursor_changes=" << evidence.cursor_changes
              << " end_marker=" << evidence.saw_end_marker << " nonblank_frames=" << evidence.nonuniform_native_frames
              << "; compared partial execution exactly, but PLAY_CREDITS did not return. "
              << legacy->cpu.describe_registers() << display_snapshot(*legacy);
        throw std::runtime_error(error.str());
    }
    std::cerr << assets.title << " enhanced=" << enhanced << " credits source return frame="
              << legacy->bus.completed_frames << display_snapshot(*legacy) << '\n';
    require(native->cpu.program_counter == return_address && native->cpu.stack_pointer == saved_stack &&
            native->cpu.direct_page == saved_direct_page, "Credits call did not restore its host call frame");
    for (unsigned i = 0; i < initial_queue.size(); ++i)
        require(proof.credits_queue_site_batches[i] > initial_queue[i], "Credits scene did not admit every queue checkpoint");
    require(proof.credits_scroll_batches > initial_scroll, "Credits scene did not admit a native scroll checkpoint");
    require(evidence.initialized && evidence.cursor_changes >= 2 && evidence.line_commands > 0 &&
            evidence.saw_end_marker && evidence.completed_cursor == evidence.end_marker_address + 2,
            "Credits scene did not prove complete authored-script traversal");
    require(evidence.nonuniform_native_frames > 0 && evidence.nonuniform_presented_frames > 0 &&
            evidence.native_hash_changes > 1, "Credits scene did not produce changing nonblank rendered content");
    require(legacy->cpu.native_gameplay_batches() == 0 && native->cpu.native_gameplay_batches() == proof.native_batches,
            "Final native admission count is inconsistent");
    std::cout << assets.title << " enhanced=" << enhanced << " credits-scene fixture injection_frame=" << injection_frame
        << " return_frame=" << legacy->bus.completed_frames << " checkpoints=" << proof.checkpoints
        << " source_steps=" << proof.source_steps << " native_batches=" << proof.native_batches
        << " native_steps=" << proof.native_steps << " dialogue_transfer_batches=" << proof.dialogue_transfer_batches
        << " credits_queue_batches=" << proof.credits_queue_batches
        << " credits_queue_sites=" << proof.credits_queue_site_batches[0] << ',' << proof.credits_queue_site_batches[1]
        << ',' << proof.credits_queue_site_batches[2] << " credits_scroll_batches=" << proof.credits_scroll_batches
        << " authored_cursor_changes=" << evidence.cursor_changes << " authored_line_commands=" << evidence.line_commands
        << " scene_callbacks=" << evidence.scene_callbacks << " nonblank_native_frames=" << evidence.nonuniform_native_frames
        << " nonblank_presentation_frames=" << evidence.nonuniform_presented_frames
        << " native_pixel_hash_changes=" << evidence.native_hash_changes
        << " first_native_hash=" << std::hex << evidence.first_native_hash << " final_native_hash=" << evidence.latest_native_hash
        << " final_presentation_hash=" << evidence.latest_presentation_hash << std::dec
        << " npc_collision_batches=" << proof.npc_collision_batches
        << " battle_targeting_batches=" << proof.battle_targeting_batches
        << " DSP_events=" << proof.audio_events << " frame_callbacks=" << proof.callbacks << " PCM_samples=" << proof.samples
        << "; complete PLAY_CREDITS return, checkpoint state/audio/pixels exact match\n";
}

void battle_scene(const eb::GameAssets& assets, std::uint64_t frame_bound, const std::vector<Input>& inputs,
                  bool enhanced, bool strict_memory) {
    constexpr std::uint64_t boot_frames = 900;
    require(frame_bound > boot_frames, "Battle scene requires --frames greater than its 900-frame boot");
    auto legacy = std::make_unique<Machine>(assets, eb::MainCpuRuntime::Legacy, enhanced);
    auto native = std::make_unique<Machine>(assets, eb::MainCpuRuntime::Ported, enhanced);
    Proof proof;
    std::uint64_t configured_frame = UINT64_MAX;
    std::size_t next_input = 0;
    const auto configure_frame = [&] {
        const auto frame = legacy->bus.completed_frames;
        if (configured_frame == frame) return false;
        configured_frame = frame;
        constexpr std::array widths{256u, 400u, 640u, 320u, 256u};
        const auto width = widths[(frame / 173) % widths.size()];
        const bool effects = (frame / 137) % 2;
        legacy->configure(width, effects); native->configure(width, effects);
        return true;
    };
    const auto& profile = eb::source_profile(assets.version);
    const auto overworld = source_routine(assets.version, "src/overworld/process_overworld_tasks.asm");
    const auto safe_handoff = [&] {
        return legacy->bus.completed_frames >= boot_frames &&
            safe_overworld_handoff(*legacy, profile, overworld);
    };
    const auto handoff_bound = std::min(frame_bound, std::uint64_t(15000));
    std::uint64_t next_progress = 1000;
    while (!safe_handoff() && legacy->bus.completed_frames < handoff_bound) {
        if (configure_frame()) while (next_input < inputs.size() && inputs[next_input].frame <= configured_frame) {
            legacy->bus.set_buttons(inputs[next_input].buttons);
            native->bus.set_buttons(inputs[next_input++].buttons);
        }
        compare_checkpoint(*legacy, *native, proof, strict_memory);
        if (legacy->bus.completed_frames >= next_progress) {
            std::cerr << assets.title << " enhanced=" << enhanced << " seeking battle overworld handoff frame="
                      << legacy->bus.completed_frames << " native_batches=" << proof.native_batches << '\n';
            next_progress = legacy->bus.completed_frames + 1000;
        }
    }
    if (!safe_handoff()) {
        std::ostringstream error;
        error << "Battle scene not injected: input route reached no safe overworld frame-wait boundary after "
              << boot_frames << " boot frames (stopped at frame=" << legacy->bus.completed_frames << ", "
              << legacy->cpu.describe_registers() << "). Boot parity alone does not prove battle execution."
              << display_snapshot(*legacy);
        throw std::runtime_error(error.str());
    }
    BattleEvidence evidence(assets.version);
    const auto injection_frame = legacy->bus.completed_frames;
    const auto saved_stack = legacy->cpu.stack_pointer, saved_direct_page = legacy->cpu.direct_page;
    const auto trampoline = (legacy->cpu.program_counter & 0xff0000) | 0xff00;
    const auto return_address = trampoline + 4;
    const auto initial_targeting = proof.battle_targeting_batches;
    const auto initial_sites = proof.battle_targeting_site_batches;
    const auto initial_samples = proof.samples, initial_audio_events = proof.audio_events;
    // One synthetic source call replaces the host's next instruction. Group3
    // is the imported one-Coil-Snake encounter. The original initializer owns
    // enemy data loading, battle mode, swirl, waits, stats and map restoration.
    // No combatant, menu, result, PPU or event flag is installed by the fixture.
    for (auto* machine : {legacy.get(), native.get()}) {
        machine->bus.set_buttons(0);
        machine->cpu.program_counter = trampoline;
        machine->cpu.accumulator = 3;
        machine->cpu.execute_instruction<0x22>(evidence.initialize.first_address, 4);
    }
    compare_controls(*legacy, *native);
    compare_memory(*legacy, *native);
    std::cerr << assets.title << " enhanced=" << enhanced << " battle-scene injected at frame="
              << injection_frame << " entry=" << std::hex << evidence.initialize.first_address << std::dec
              << " group=3 (one imported Coil Snake); synthetic source call, not a natural encounter"
              << display_snapshot(*legacy) << battle_snapshot(*legacy) << '\n';
    const auto returned = [&] {
        return legacy->cpu.program_counter == return_address && legacy->cpu.stack_pointer == saved_stack;
    };
    next_progress = injection_frame + 1000;
    while (!returned() && legacy->bus.completed_frames < frame_bound) {
        if (configure_frame()) {
            // selection_menu.asm accepts PAD_PRESS A/L. Release between pulses
            // so Bash, enemy selection and battle text receive genuine edges.
            const std::uint16_t buttons = ((configured_frame - injection_frame) % 30) < 10 ? 0x80 : 0;
            legacy->bus.set_buttons(buttons); native->bus.set_buttons(buttons);
        }
        compare_checkpoint(*legacy, *native, proof, strict_memory, nullptr, &evidence);
        if (legacy->bus.completed_frames >= next_progress) {
            std::cerr << assets.title << " enhanced=" << enhanced << " battle frame=" << legacy->bus.completed_frames
                << " resolver_calls=" << evidence.resolver_calls << " enemy_resolver_calls=" << evidence.enemy_resolver_calls
                << " battle_targeting_batches=" << proof.battle_targeting_batches - initial_targeting
                << " nonblank_battle_frames=" << evidence.nonuniform_native_frames << battle_snapshot(*legacy) << '\n';
            next_progress = legacy->bus.completed_frames + 1000;
        }
    }
    compare_controls(*legacy, *native);
    compare_memory(*legacy, *native);
    compare_pcm(*legacy, *native, proof);
    if (!returned()) {
        std::ostringstream error;
        error << "Battle scene incomplete at --frames=" << frame_bound << ": initializer=" << evidence.saw_initializer
              << " battle_entries=" << evidence.battle_entries << " battle_return=" << evidence.saw_battle_return
              << " resolver_calls=" << evidence.resolver_calls << " enemy_resolver_calls=" << evidence.enemy_resolver_calls
              << " battle_targeting_batches=" << proof.battle_targeting_batches - initial_targeting
              << " nonblank_battle_frames=" << evidence.nonuniform_native_frames
              << "; compared partial execution exactly, but INIT_BATTLE_SCRIPTED did not return. "
              << legacy->cpu.describe_registers() << display_snapshot(*legacy);
        throw std::runtime_error(error.str());
    }
    require(native->cpu.program_counter == return_address && native->cpu.stack_pointer == saved_stack &&
            native->cpu.direct_page == saved_direct_page, "Battle call did not restore its host call frame");
    std::cerr << assets.title << " enhanced=" << enhanced << " battle source return frame=" << legacy->bus.completed_frames
              << " BATTLE_ROUTINE_A=" << evidence.battle_return_a << " INIT_BATTLE_COMMON_A=" << evidence.common_return_a
              << " INIT_BATTLE_SCRIPTED_A=" << evidence.scripted_return_a
              << " first_combat:" << evidence.first_combat_state
              << " final:" << battle_snapshot(*legacy) << display_snapshot(*legacy) << '\n';
    // main_battle_routine.asm returns0 at ENEMIES_ARE_DEAD and1 when
    // COUNT_CHARS(0) finds no surviving players. INIT_BATTLE_COMMON clears
    // BATTLE_MODE for either outcome; INIT_BATTLE_SCRIPTED propagates0/1.
    // Early level1 Ness is legitimately defeated with the unchanged imported
    // stats and Bash-only inputs. A win is not a condition of parity.
    require(evidence.battle_return_a <= 1 && evidence.common_return_a == evidence.battle_return_a &&
            evidence.scripted_return_a == evidence.battle_return_a &&
            native->cpu.accumulator == evidence.scripted_return_a &&
            wram_value(native->bus, profile.action_gates.battle_mode, 2) == 0 &&
            wram_value(native->bus, profile.wram_battle_mode_flag, 2) == 0,
            "Scripted battle return chain or battle-mode cleanup differs from its source outcome");
    require(evidence.initial_survivors[0] > 0 && evidence.initial_survivors[1] > 0,
            "Battle did not begin with eligible combatants on both sides");
    require(evidence.battle_return_a == 1
                ? evidence.final_survivors[0] == 0 && evidence.final_survivors[1] > 0
                : evidence.final_survivors[1] == 0,
            "Battle return value is not supported by the source survivor state");
    require(evidence.saw_initializer && evidence.battle_entries == 1 && evidence.saw_battle_return &&
            evidence.resolver_calls > 0 && evidence.enemy_resolver_calls > 0 && evidence.player_resolver_calls > 0,
            "Battle fixture did not run the original combat loop and targeting for both sides");
    require(proof.battle_targeting_batches > initial_targeting,
            "Battle fixture did not admit native targeting; boot/native collision work is not battle proof");
    require(evidence.nonuniform_native_frames > 0 && evidence.nonuniform_presented_frames > 0 &&
            evidence.native_hash_changes > 1, "Battle routine did not produce changing nonblank rendered content");
    require(proof.samples > initial_samples && proof.audio_events > initial_audio_events,
            "Battle fixture produced no compared audio clocks/PCM");
    require(legacy->cpu.native_gameplay_batches() == 0 && native->cpu.native_gameplay_batches() == proof.native_batches,
            "Final native admission count is inconsistent");
    unsigned admitted_sites = 0;
    for (unsigned i = 0; i < initial_sites.size(); ++i)
        admitted_sites += proof.battle_targeting_site_batches[i] > initial_sites[i];
    std::cout << assets.title << " enhanced=" << enhanced << " battle-scene fixture group=3 outcome="
        << (evidence.battle_return_a ? "defeat" : "victory") << " source_return=" << evidence.battle_return_a
        << " surviving_players=" << evidence.final_survivors[0] << " surviving_enemies=" << evidence.final_survivors[1]
        << " injection_frame=" << injection_frame << " return_frame=" << legacy->bus.completed_frames << " checkpoints=" << proof.checkpoints
        << " source_steps=" << proof.source_steps << " native_batches=" << proof.native_batches
        << " native_steps=" << proof.native_steps << " npc_collision_batches=" << proof.npc_collision_batches
        << " battle_targeting_batches=" << proof.battle_targeting_batches - initial_targeting
        << " battle_targeting_sites=" << admitted_sites << "/" << initial_sites.size()
        << " resolver_calls=" << evidence.resolver_calls << " enemy_resolver_calls=" << evidence.enemy_resolver_calls
        << " player_resolver_calls=" << evidence.player_resolver_calls << " battle_callbacks=" << evidence.scene_callbacks
        << " nonblank_native_battle_frames=" << evidence.nonuniform_native_frames
        << " nonblank_presentation_battle_frames=" << evidence.nonuniform_presented_frames
        << " battle_pixel_hash_changes=" << evidence.native_hash_changes
        << " first_battle_hash=" << std::hex << evidence.first_native_hash << " final_battle_hash=" << evidence.latest_native_hash
        << " final_battle_presentation_hash=" << evidence.latest_presentation_hash << std::dec
        << " scene_DSP_events=" << proof.audio_events - initial_audio_events
        << " scene_PCM_samples=" << proof.samples - initial_samples
        << "; complete injected INIT_BATTLE_SCRIPTED return, checkpoint state/audio/pixels exact match\n";
}
} // namespace

int main(int argc, char** argv) {
    constexpr auto usage = "Usage: native_gameplay_differential --assets FILE [--assets FILE...] "
        "[--frames N] [--input-script FILE] [--require-native] [--require-dialogue-native] [--strict-memory] "
        "[--credits-scene|--battle-scene] [--original-timing|--enhanced-timing]";
    try {
        std::vector<std::string> packs;
        std::string script;
        std::uint64_t frames = 26097;
        bool strict_memory = false, require_native = false, require_dialogue = false, credits = false,
             battle = false, explicit_frames = false;
        std::vector<bool> policies{false, true};
        for (int i = 1; i < argc; ++i) {
            const std::string arg = argv[i];
            if (arg == "--help") { std::cout << usage << '\n'; return 0; }
            if (arg == "--strict-memory") strict_memory = true;
            else if (arg == "--require-native") require_native = true;
            else if (arg == "--require-dialogue-native") require_dialogue = true;
            else if (arg == "--credits-scene") credits = true;
            else if (arg == "--battle-scene") battle = true;
            else if (arg == "--original-timing") policies = {false};
            else if (arg == "--enhanced-timing") policies = {true};
            else if (arg == "--assets" && i + 1 < argc) packs.emplace_back(argv[++i]);
            else if (arg == "--frames" && i + 1 < argc) { frames = number(argv[++i]); explicit_frames = true; }
            else if (arg == "--input-script" && i + 1 < argc) script = argv[++i];
            else throw std::invalid_argument(usage);
        }
        if (credits && !explicit_frames) frames = 40000;
        require(!packs.empty(), "A local imported asset pack is required (--assets FILE)");
        require(frames > 0, "Frame count must be positive");
        require(!credits || !battle, "Choose one injected scene: --credits-scene or --battle-scene");
        require(!credits || !script.empty(), "Credits scene requires --input-script with a route to the overworld");
        require(!battle || !script.empty(), "Battle scene requires --input-script with a route to the overworld");
        const auto inputs = input_script(script);
        for (const auto& pack : packs) {
            const auto assets = eb::load_game_assets(pack, eb::asset_profiles());
            for (bool enhanced : policies) {
                if (credits) credits_scene(assets, frames, inputs, enhanced, strict_memory);
                else if (battle) battle_scene(assets, frames, inputs, enhanced, strict_memory);
                else replay(assets, frames, inputs, enhanced, require_native, require_dialogue, strict_memory);
            }
        }
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
