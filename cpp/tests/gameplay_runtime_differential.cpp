// Asset-free entity/script differential by default. Optional story replays:
// gameplay_runtime_differential --assets imported.ebpak --frames 1200 --input-script route.txt
// Both timing policies run unless --original-timing or --enhanced-timing is selected.
#include "eb/game/runtime/runtime.hpp"
#include "eb/game_debug.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_audio_dsp.hpp"
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "generated_assets.hpp"
#include "generated_code.hpp"
#include "generated_profile.hpp"
#include "runtime_state_audit.hpp"
#include <algorithm>
#include <array>
#include <fstream>
#include <iostream>
#include <memory>
#include <sstream>
#include <stdexcept>
#include <string>
#include <tuple>
#include <vector>

namespace {
void require(bool good, const char* message) { if (!good) throw std::runtime_error(message); }
auto cpu_state(const eb::MainCpu65816& c) {
    return std::tie(c.program_counter, c.accumulator, c.x_index, c.y_index, c.status_register, c.stack_pointer,
        c.direct_page, c.data_bank, c.emulation_mode, c.is_stopped, c.is_waiting, c.cycle_count, c.instruction_count);
}
auto audio_state(const eb::Spc700AudioCpu& c) {
    return std::tie(c.program_counter, c.accumulator, c.x_index, c.y_index, c.stack_pointer,
        c.status_register, c.is_stopped, c.is_sleeping, c.cycle_count, c.instruction_count);
}
struct Event {
    unsigned domain, address, value;
    std::uint64_t clock;
    bool operator==(const Event&) const = default;
};
struct Picture {
    std::uint64_t frame;
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
    eb::GameDebug debug;
    std::vector<Event> events;
    std::vector<Picture> pictures;
    Machine(std::span<const std::uint8_t> image, eb::GameVersion version, eb::MainCpuRuntime runtime, bool enhanced)
        : bus(image, version), audio_cpu(bus), dsp(audio_cpu), cpu(bus), debug(bus, cpu) {
        cpu.set_runtime(runtime);
        cpu.reset_from_vector();
        cpu.set_gameplay_timing(enhanced);
        require(cpu.runtime() == runtime, "Reset changed the selected runtime");
        // Preserve exact DSP input ordering and clock chunk boundaries. The
        // synthesis engine is unchanged, so equal initial state and this whole
        // interface stream also protect its hidden voice/envelope/echo state.
        const auto dsp_tick = audio_cpu.advance_dsp_clocks;
        audio_cpu.advance_dsp_clocks = [&, dsp_tick](unsigned clocks) {
            events.push_back({4, clocks, 0, bus.master_clocks()});
            dsp_tick(clocks);
        };
        const auto dsp_write = audio_cpu.write_dsp_register;
        audio_cpu.write_dsp_register = [&, dsp_write](std::uint8_t address, std::uint8_t value) {
            events.push_back({5, address, value, bus.master_clocks()});
            dsp_write(address, value);
        };
        const auto dsp_read = audio_cpu.read_dsp_register;
        audio_cpu.read_dsp_register = [&, dsp_read](std::uint8_t address) {
            const auto value = dsp_read(address);
            events.push_back({6, address, value, bus.master_clocks()});
            return value;
        };
        cpu.observe_memory_write = [&](auto address, auto value) { events.push_back({0, address, value, bus.master_clocks()}); };
        audio_cpu.observe_memory_write = [&](auto address, auto value) { events.push_back({1, address, value, bus.master_clocks()}); };
#ifdef EB_GAMEPLAY_AUDIT
        bus.observe_bus_access = [&](bool write, auto address, auto value) {
            events.push_back({write ? 3u : 2u, address, value, bus.master_clocks()});
        };
#endif
        bus.on_presentation_frame = [&](std::span<const std::uint32_t> pixels, unsigned width, std::uint64_t frame) {
            const auto mask = bus.presentation_effect_mask();
            const auto reference = bus.presentation_effect_reference();
            pictures.push_back({frame, width, bus.presentation_fixed_aspect(),
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
    require(a.bus.video_ram == b.bus.video_ram && a.bus.palette_ram == b.bus.palette_ram &&
            a.bus.object_attributes == b.bus.object_attributes, "Video/object/palette RAM differs");
    require(a.bus.audio_to_main_ports == b.bus.audio_to_main_ports &&
            a.bus.main_to_audio_ports == b.bus.main_to_audio_ports, "Audio mailbox state differs");
    require(a.audio_cpu.audio_ram == b.audio_cpu.audio_ram && a.audio_cpu.dsp_registers == b.audio_cpu.dsp_registers,
            "Audio RAM/DSP register shadow differs");
    require(a.bus.native_framebuffer == b.bus.native_framebuffer, "Native pixels differ");
    const auto pa = a.bus.presentation_pixels(), pb = b.bus.presentation_pixels();
    require(a.bus.presentation_width() == b.bus.presentation_width() &&
            a.bus.presentation_fixed_aspect() == b.bus.presentation_fixed_aspect() &&
            pa.size() == pb.size() && std::equal(pa.begin(), pa.end(), pb.begin()), "Presentation canvas differs");
    for (unsigned reg = 0; reg < 128; ++reg)
        require(a.dsp.read_register(reg) == b.dsp.read_register(reg), "DSP synthesis registers differ");
}
struct Proof {
    std::uint64_t steps{}, ported_steps{}, accesses{}, callbacks{}, samples{};
};
void compare_step(Machine& legacy, Machine& ported, Proof& proof, bool strict_memory) {
    const auto before_pc = legacy.cpu.program_counter;
    const auto before_count = legacy.cpu.instruction_count;
    const auto before_frame = legacy.bus.completed_frames;
    try {
        require(!legacy.cpu.is_stopped && !ported.cpu.is_stopped, "A runtime stopped before the target");
        legacy.debug.before_step(); ported.debug.before_step();
        legacy.cpu.step_instruction(); ported.cpu.step_instruction();
        require(cpu_state(legacy.cpu) == cpu_state(ported.cpu), "CPU architectural state differs");
        require(legacy.cpu.timing_snapshot() == ported.cpu.timing_snapshot(), "Private CPU timing state differs");
        require(audio_state(legacy.audio_cpu) == audio_state(ported.audio_cpu), "Audio CPU state differs");
        require(eb::RuntimeStateAudit::bus_controls(legacy.bus) == eb::RuntimeStateAudit::bus_controls(ported.bus),
                "Private hardware registers/latches/DMA/interrupt/clock state differs");
        require(eb::RuntimeStateAudit::audio_controls(legacy.audio_cpu) == eb::RuntimeStateAudit::audio_controls(ported.audio_cpu),
                "Private audio timer/control/clock state differs");
        require(legacy.events == ported.events, "Ordered/timestamped memory accesses differ");
        require(legacy.pictures == ported.pictures, "Completed frame callback order/pixels/effect metadata differs");
        require(legacy.bus.completed_frames == ported.bus.completed_frames, "Hardware frame count differs");
        require(legacy.dsp.generated_stereo_frame_count() == ported.dsp.generated_stereo_frame_count(), "DSP frame count differs");
        if (strict_memory || legacy.bus.completed_frames != before_frame) compare_memory(legacy, ported);
        if (legacy.bus.completed_frames != before_frame) {
            const auto samples = legacy.dsp.take_stereo_samples();
            require(samples == ported.dsp.take_stereo_samples(), "Interleaved PCM samples differ");
            proof.samples += samples.size();
        }
        ++proof.steps;
        if (legacy.cpu.instruction_count > before_count &&
            eb::game::runtime::owns_ported_instruction(legacy.cpu.game_version, eb::canonical_rom_address(before_pc)))
            ++proof.ported_steps;
        proof.accesses += legacy.events.size();
        proof.callbacks += legacy.pictures.size();
        legacy.events.clear(); ported.events.clear();
        legacy.pictures.clear(); ported.pictures.clear();
    } catch (const std::exception& error) {
        std::ostringstream message;
        message << "step=" << proof.steps << " frame=" << before_frame << " source=" << std::hex << before_pc
                << ": " << error.what() << " legacy " << legacy.cpu.describe_registers()
                << " ported " << ported.cpu.describe_registers();
        throw std::runtime_error(message.str());
    }
}
void finish(Machine& a, Machine& b, const Proof& proof) {
    compare_memory(a, b);
    require(a.dsp.take_stereo_samples() == b.dsp.take_stereo_samples(), "Final queued PCM differs");
    require(proof.ported_steps > 0, "Replay never exercised the ported runtime");
    std::cout << "steps=" << proof.steps << " ported_steps=" << proof.ported_steps
              << " ordered_events=" << proof.accesses << " callbacks=" << proof.callbacks
              << " PCM_samples=" << proof.samples;
#ifdef EB_GAMEPLAY_AUDIT
    std::cout << " bus_access_trace=enabled";
#else
    std::cout << " bus_access_trace=disabled";
#endif
    std::cout << " exact match\n";
}
void synthetic_entities(eb::GameVersion version, unsigned entities, bool enhanced, bool pending_upload) {
    const bool jp = version == eb::GameVersion::JP;
    const unsigned ram_shift = jp ? 10 : 0, code_shift = jp ? 33 : 0;
    std::vector<std::uint8_t> rom(0x300000);
    const auto rom_word = [&](unsigned address, unsigned value) {
        rom[address & 0x3fffff] = value; rom[(address + 1) & 0x3fffff] = value >> 8;
    };
    rom_word(0xc09558 - code_shift + 6 * 2, 0x96c3 - code_shift);
    rom_word(0xc09558 - code_shift + 15 * 2, 0x9b09 - code_shift);
    auto a = std::make_unique<Machine>(rom, version, eb::MainCpuRuntime::Legacy, enhanced);
    auto b = std::make_unique<Machine>(rom, version, eb::MainCpuRuntime::Ported, enhanced);
    const auto& timing = eb::source_profile(version).gameplay_timing;
    for (auto* m : {a.get(), b.get()}) {
        auto word = [&](unsigned address, unsigned value) { m->bus.work_ram[address] = value; m->bus.work_ram[address + 1] = value >> 8; };
        word(0xa50 - ram_shift, 0); word(0xa5e - ram_shift, 0xa039 - code_shift);
        for (unsigned i = 0; i < 40; ++i) m->bus.work_ram[0x8000 + i] = 0x0f;
        m->bus.work_ram[0x8028] = 6; m->bus.work_ram[0x8029] = 1;
        for (unsigned i = 0; i < entities; ++i) {
            const unsigned slot = i * 2;
            word(0xa9e - ram_shift + slot, i + 1 == entities ? 0xffff : slot + 2);
            word(0xada - ram_shift + slot, slot); word(0x125a - ram_shift + slot, 0xffff);
            word(0x13fe - ram_shift + slot, 0x8000); word(0x148a - ram_shift + slot, 0x7e);
            word(0x10b6 - ram_shift + slot, 0x8000); word(0x121e - ram_shift + slot, 0x9fc8 - code_shift);
            word(0x11a6 - ram_shift + slot, 0xa023 - code_shift); word(0xcf6 - ram_shift + slot, 1);
        }
        if (pending_upload) m->bus.work_ram[eb::source_profile(version).dma_queue.write_index] = 8;
        m->cpu.emulation_mode = false; m->cpu.status_register = 0; m->cpu.data_bank = 0x7e;
        m->cpu.direct_page = 0x1e00; m->cpu.stack_pointer = 0x1fff;
        m->cpu.program_counter = timing.entity_update_call;
        m->events.clear();
    }
    Proof proof;
    while (a->cpu.program_counter != timing.entity_update_return) {
        require(proof.steps < 1'000'000, "Entity script fixture failed to return");
        compare_step(*a, *b, proof, true);
    }
    for (unsigned i = 0; i < entities; ++i)
        require(b->bus.work_ram[0xb8e - ram_shift + i * 2] == 1 && b->bus.work_ram[0xb16 - ram_shift + i * 2] == 1,
                "Movement/screen callback was omitted or duplicated");
    std::cout << (jp ? "JP" : "US") << " entities=" << entities << " enhanced=" << enhanced
              << " queued_upload=" << pending_upload << ' ';
    finish(*a, *b, proof);
}
void multiple_dma_frame_callbacks(eb::GameVersion version) {
    std::vector<std::uint8_t> rom(0x300000);
    auto a = std::make_unique<Machine>(rom, version, eb::MainCpuRuntime::Legacy, false);
    auto b = std::make_unique<Machine>(rom, version, eb::MainCpuRuntime::Ported, false);
    const auto site = version == eb::GameVersion::US ? 0xc09b18u : 0xc09af7u;
    require(eb::game::runtime::owns_ported_instruction(version, site), "DMA fixture source site is not ported");
    for (auto* m : {a.get(), b.get()}) {
        m->configure(400, true);
        m->bus.work_ram[0] = 0x80;
        for (unsigned channel = 0; channel < 2; ++channel) {
            const auto base = 0x4300 + channel * 16;
            m->bus.write_byte(base, 8); // fixed source, one byte to INIDISP
            m->bus.write_byte(base + 1, 0);
            m->bus.write_byte(base + 2, 0); m->bus.write_byte(base + 3, 0);
            m->bus.write_byte(base + 4, 0x7e);
            m->bus.write_byte(base + 5, 0); m->bus.write_byte(base + 6, 0); // 65536 bytes
        }
        m->cpu.emulation_mode = false;
        m->cpu.status_register = eb::MainCpu65816::Accumulator8Bit;
        m->cpu.program_counter = site; m->cpu.x_index = 0x420b; m->cpu.accumulator = 3;
        m->events.clear();
    }
    Proof proof;
    compare_step(*a, *b, proof, true);
    require(proof.steps == 1 && proof.callbacks >= 2 && proof.callbacks == a->bus.completed_frames,
            "One DMA instruction did not deliver every crossed frame callback");
    std::cout << (version == eb::GameVersion::US ? "US" : "JP") << " multi-frame DMA ";
    finish(*a, *b, proof);
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
        const auto frame = std::stoull(f, nullptr, 0), buttons = std::stoull(b, nullptr, 0);
        require(buttons <= 65535 && (result.empty() || result.back().frame < frame), "Invalid input sequence");
        result.push_back({frame, std::uint16_t(buttons)});
    }
    return result;
}
void replay(const eb::GameAssets& assets, std::uint64_t frames, const std::vector<Input>& inputs,
            bool enhanced, bool strict_memory) {
    auto a = std::make_unique<Machine>(assets.image, assets.version, eb::MainCpuRuntime::Legacy, enhanced);
    auto b = std::make_unique<Machine>(assets.image, assets.version, eb::MainCpuRuntime::Ported, enhanced);
    std::size_t next = 0;
    std::uint64_t configured_frame = UINT64_MAX;
    Proof proof;
    while (a->bus.completed_frames < frames) {
        if (configured_frame != a->bus.completed_frames) {
            configured_frame = a->bus.completed_frames;
            constexpr std::array widths{256u, 400u, 640u, 320u, 256u};
            const auto width = widths[(configured_frame / 173) % widths.size()];
            const bool effects = (configured_frame / 137) % 2;
            a->configure(width, effects); b->configure(width, effects);
            while (next < inputs.size() && inputs[next].frame <= configured_frame) {
                a->bus.set_buttons(inputs[next].buttons); b->bus.set_buttons(inputs[next++].buttons);
            }
        }
        compare_step(*a, *b, proof, strict_memory);
    }
    std::cout << assets.title << " enhanced=" << enhanced << " frames=" << a->bus.completed_frames << ' ';
    finish(*a, *b, proof);
}
} // namespace
int main(int argc, char** argv) {
    try {
        std::vector<std::string> packs;
        std::string script;
        std::uint64_t frames = 1200;
        bool strict = false;
        std::vector<bool> policies{false, true};
        for (int i = 1; i < argc; ++i) {
            const std::string arg = argv[i];
            if (arg == "--strict-memory") strict = true;
            else if (arg == "--original-timing") policies = {false};
            else if (arg == "--enhanced-timing") policies = {true};
            else if (arg == "--assets" && i + 1 < argc) packs.emplace_back(argv[++i]);
            else if (arg == "--frames" && i + 1 < argc) frames = std::stoull(argv[++i]);
            else if (arg == "--input-script" && i + 1 < argc) script = argv[++i];
            else throw std::invalid_argument("Usage: gameplay_runtime_differential [--assets FILE] [--frames N] [--input-script FILE] [--strict-memory] [--original-timing|--enhanced-timing]");
        }
        require(frames > 0, "Frame count must be positive");
        if (packs.empty()) {
            for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
                multiple_dma_frame_callbacks(version);
                for (bool enhanced : policies) for (unsigned entities : {1u, 30u}) for (bool upload : {false, true})
                    synthetic_entities(version, entities, enhanced, upload);
            }
        } else {
            const auto inputs = input_script(script);
            for (const auto& pack : packs) {
                const auto assets = eb::load_game_assets(pack, eb::asset_profiles());
                for (bool enhanced : policies) replay(assets, frames, inputs, enhanced, strict);
            }
        }
    } catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
