// Drive original Continue from disposable synthetic SRAM, then execute the
// original BATTLE_SWIRL_SEQUENCE on the loaded world. Check every update,
// including its retained final mask, and the real scripted battle caller.
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "eb/snes_audio_dsp.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include "native_session_fixture.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string_view>

namespace {
unsigned word(const eb::SnesBus &bus, unsigned at) {
    return bus.work_ram[at] | unsigned(bus.work_ram[at + 1]) << 8;
}
void call(eb::SnesBus &bus, unsigned entry) {
    eb::MainCpu65816 cpu(bus);
    cpu.set_runtime(eb::MainCpuRuntime::Legacy); cpu.emulation_mode = false;
    cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e; cpu.direct_page = 0x1e00; cpu.stack_pointer = 0x1fff;
    cpu.program_counter = 0xc0ff00;
    cpu.execute_instruction<0x22>(entry, 4);
    for (unsigned i = 0; cpu.program_counter != 0xc0ff04 || cpu.stack_pointer != 0x1fff; ++i) {
        if (i == 100000) throw std::runtime_error("Original encounter routine did not return");
        cpu.step_instruction();
    }
}
void draw(eb::SnesBus &bus) {
    const auto end = bus.completed_frames + 2;
    while (bus.completed_frames < end) bus.advance_cpu_cycles(1000);
}
void animation_picture(const eb::SnesBus &source, unsigned stage, bool sweep = true) {
    auto base = std::make_unique<eb::SnesBus>(source);
    base->advance_audio_master_clocks = {};
    // Scenery isolates the window/color-math shape from OBJ palette exemptions.
    base->write_byte(0x212c, source.scene_read_view().ppu_registers[0x2c] & 15);
    base->write_byte(0x420c, base->work_ram[0x1f]); // real source HDMA publication
    auto rows = std::make_unique<eb::SnesBus>(*base);
    std::array<bool, 256 * 224> membership{};
    // A real caller can finish just after line zero's HDMA initialization.
    // Observe a complete new frame after publishing the source channel mask.
    const auto next_frame = rows->completed_frames + 1;
    while (rows->completed_frames < next_frame) rows->advance_cpu_cycles(1);
    for (unsigned y = 0; y < 224; ++y) {
        while (rows->scanline_index() != y + 1) rows->advance_cpu_cycles(1);
        const auto view = rows->scene_read_view();
        for (unsigned x = 0; x < 256; ++x) membership[y * 256 + x] = view.layer_window_contains(5, x);
    }
    auto native = std::make_unique<eb::SnesBus>(*base);
    native->set_presentation_width(256); draw(*native);
    const auto view = base->scene_read_view();
    for (unsigned width : {358u, 398u, 522u, 796u, 1024u}) for (bool filter : {false, true}) {
        if (!sweep && (width != 398 || filter)) continue;
        auto actual = std::make_unique<eb::SnesBus>(*base), clean = std::make_unique<eb::SnesBus>(*base);
        actual->set_presentation_width(width); actual->set_presentation_effects_enabled(filter);
        actual->set_direct_rendering_enabled(true); draw(*actual);
        clean->set_presentation_width(width); clean->write_byte(0x2130, 0); clean->write_byte(0x2131, 0);
        clean->write_byte(0x2100, (view.ppu_registers[0] & 0xf0) | 15); draw(*clean);
        if (actual->native_framebuffer != native->native_framebuffer || actual->work_ram != native->work_ram ||
            actual->save_ram != native->save_ram || actual->video_ram != native->video_ram ||
            actual->palette_ram != native->palette_ram || actual->object_attributes != native->object_attributes)
            throw std::runtime_error("Encounter presentation changed source memory or the native picture");
        if (actual->direct_scene()) throw std::runtime_error("Raster encounter window bypassed the scanline renderer");
        for (unsigned y = 3; y < 224; y += 7) for (unsigned x = 3; x < width; x += 13) {
            auto expected = clean->presentation_pixels()[y * width + x];
            unsigned mixed = 0xff000000;
            for (unsigned channel = 0; channel < 3; ++channel) {
                const unsigned shift = 16 - channel * 8;
                int value = (expected >> shift & 255) >> 3;
                if (membership[y * 256 + x * 256 / width]) {
                    value = std::max(0, value - int(view.fixed_color >> (channel * 5) & 31));
                    if (view.ppu_registers[0x31] & 0x40) value /= 2;
                }
                value = (value * (view.ppu_registers[0] & 15) + 7) / 15;
                mixed |= unsigned((value << 3) | (value >> 2)) << shift;
            }
            expected = mixed;
            if (actual->presentation_pixels()[y * width + x] != expected)
                throw std::runtime_error("Encounter window shape/color differs: stage=" + std::to_string(stage) +
                    " width=" + std::to_string(width) + " pixel=" + std::to_string(x) + "," + std::to_string(y) +
                    " timer=" + std::to_string(base->work_ram[view.source_profile.wram_swirl_update_timer]) +
                    " mask=" + std::to_string(base->work_ram[view.source_profile.wram_swirl_update_timer + 6]) +
                    " cgwsel=" + std::to_string(view.ppu_registers[0x30]) +
                    " cgadsub=" + std::to_string(view.ppu_registers[0x31]) +
                    " brightness=" + std::to_string(view.ppu_registers[0]) +
                    " mosaic=" + std::to_string(view.ppu_registers[6]) +
                    " actual=" + std::to_string(actual->presentation_pixels()[y * width + x]) +
                    " expected=" + std::to_string(expected) +
                    " clean=" + std::to_string(clean->presentation_pixels()[y * width + x]) +
                    " member=" + std::to_string(membership[y * 256 + x * 256 / width]) +
                    " aspect=" + std::to_string(actual->presentation_fixed_aspect()));
        }
    }
}
void transition(eb::SnesBus &, const eb::GameAssets &, unsigned, unsigned, unsigned);
void battle_caller(eb::SnesBus &, eb::MainCpu65816 &, eb::SnesAudioDsp &);
void run(const eb::GameAssets &assets, bool caller_only) {
    const bool jp = assets.version == eb::GameVersion::JP;
    auto owned = std::make_unique<eb::SnesBus>(assets.image, assets.version, true);
    auto &bus = *owned;
    eb::Spc700AudioCpu audio(bus); eb::SnesAudioDsp dsp(audio); eb::MainCpu65816 cpu(bus);
    auto archive = native_session_save(assets.version);
    auto state = archive.load(0);
    state.game.leader_x = jp ? 1632 : 1184; state.game.leader_y = jp ? 288 : 608;
    state.characters[0].values.level = 1;
    state.characters[0].values.base_speed = state.characters[0].values.speed = 0;
    archive.save(0, state, 0);
    std::copy(archive.bytes().begin(), archive.bytes().end(), bus.save_ram.begin());
    bus.enable_native_sprite_runtime(true, true);
    bus.set_logical_clock_policy(eb::LogicalClockPolicy::ActorFrames);
    constexpr unsigned width = 398, margin = (width - 256) / 2;
    bus.set_presentation_width(width);
    cpu.reset_from_vector(); cpu.set_gameplay_timing(true); cpu.set_world_preload_width(width);
    const auto &p = eb::source_profile(assets.version);
    unsigned ready_frames = 0;
    while (bus.completed_frames < 2600) {
        const auto frame = bus.completed_frames;
        const bool ready = word(bus, jp ? 0x4dde : 0x4a58) == 0xffff &&
                           word(bus, p.party_state.leader_x) == state.game.leader_x;
        bus.set_buttons(!ready && frame >= 660 && frame < 1800 && frame % 60 < 5 ? 0x1080 : 0);
        for (unsigned steps = 0; bus.completed_frames == frame; ++steps) {
            if (steps > 2000000 || cpu.is_stopped) throw std::runtime_error("Encounter stalled: " + cpu.describe_registers());
            cpu.advance_gameplay(1000000);
        }
        (void)dsp.take_stereo_samples();
        const auto view = bus.scene_read_view();
        if (ready && !(view.ppu_registers[0] & 0x80) && (view.ppu_registers[0] & 15) == 15 &&
            ++ready_frames == 2) break;
    }
    if (ready_frames != 2) throw std::runtime_error("Original Continue did not display the encounter fixture");
    unsigned before_visible = 0;
    for (unsigned y = 32; y < 192; ++y)
        for (unsigned x = 8; x < margin; ++x) before_visible += bus.presentation_pixels()[y * width + x] != 0xff000000;
    if (!before_visible) {
        const auto v = bus.scene_read_view();
        throw std::runtime_error("Continued overworld was already blank in the margins: brightness=" +
            std::to_string(v.ppu_registers[0]) + " mode=" + std::to_string(v.ppu_registers[5]) +
            " cgwsel=" + std::to_string(v.ppu_registers[0x30]) + " camera=" +
            std::to_string(word(bus, p.wram_background_scroll.layer1_x)) + "," +
            std::to_string(word(bus, p.wram_background_scroll.layer1_y)) + " frame=" +
            std::to_string(bus.completed_frames));
    }
    if (!caller_only) {
        for (const auto [initiative, group] : std::array<std::pair<unsigned, unsigned>, 4>{{{0, 0}, {1, 0}, {2, 0}, {0, 448}}}) {
            auto encounter = std::make_unique<eb::SnesBus>(bus);
            encounter->advance_audio_master_clocks = {};
            transition(*encounter, assets, initiative, group, before_visible);
        }
    }
    battle_caller(bus, cpu, dsp);
}
void transition(eb::SnesBus &bus, const eb::GameAssets &assets, unsigned initiative, unsigned group,
                unsigned before_visible) {
    const bool jp = assets.version == eb::GameVersion::JP;
    const auto &p = eb::source_profile(assets.version);
    constexpr unsigned width = 398, margin = (width - 256) / 2;
    const auto put = [&](unsigned at, unsigned value) { bus.work_ram[at] = value; bus.work_ram[at + 1] = value >> 8; };
    put(jp ? 0x5142 : 0x4dbc, initiative); put(jp ? 0x4e12 : 0x4a8c, group);
    put(jp ? 0xb6ec : 0xb53b, group >= 448 ? 8 : initiative == 2 ? 9 : 176); // original same-track return
    call(bus, jp ? 0xc2e7f9 : 0xc2e8e0);
    // CPU is held after the real setup returns, so no oval update can hide
    // the specific pre-animation narrowing reported by the user.
    draw(bus);
    const auto view = bus.scene_read_view(); const auto &r = view.ppu_registers;
    if (word(bus, p.wram_battle_mode_flag) || !bus.work_ram[p.wram_swirl_update_timer] ||
        r[0x30] != 0x10 || r[7] != 0x39 || r[8] != 0x59 || r[0x26] != 255 || r[0x27])
        throw std::runtime_error("Source setup did not produce the pre-oval encounter stage");
    unsigned visible = 0;
    const auto pixels = bus.presentation_pixels();
    for (unsigned y = 32; y < 192; ++y)
        for (unsigned x = 8; x < margin; ++x) visible += pixels[y * width + x] != 0xff000000;
    if (!visible) throw std::runtime_error(std::string(jp ? "JP" : "US") +
        " encounter cropped to native width before oval: visible margin pixels=0 before=" + std::to_string(before_visible) +
        " brightness=" + std::to_string(r[0]) + " mode=" + std::to_string(r[5]) +
        " math=" + std::to_string(r[0x31]) + " mask=" + std::to_string(bus.work_ram[p.wram_swirl_update_timer + 6]) +
        " restore=" + std::to_string(bus.work_ram[p.wram_swirl_update_timer + 9]));
    animation_picture(bus, 0);
    unsigned pictures = 1, updates = 0;
    for (unsigned stage = 1; stage <= 1000 && bus.work_ram[p.wram_swirl_update_timer]; ++stage) {
        call(bus, jp ? 0xc47c19 : 0xc4a7b0);
        const bool sweep = stage == 1 || stage % 32 == 0 || !bus.work_ram[p.wram_swirl_update_timer];
        animation_picture(bus, stage, sweep); ++updates; pictures += sweep;
    }
    if (bus.work_ram[p.wram_swirl_update_timer]) throw std::runtime_error("Original encounter animation did not finish");
    call(bus, jp ? 0xc2e906 : 0xc2e9ed); // Source mask cleanup, also used by instant wins.
    if (bus.scene_read_view().ppu_registers[0x25] & 0xf0)
        throw std::runtime_error("Original encounter cleanup left a color window enabled");
    animation_picture(bus, 1001); ++pictures;
    std::cout << "PASS " << (jp ? "JP" : "US") << " original Continue -> BATTLE_SWIRL_SEQUENCE: "
              << "initiative=" << initiative << " group=" << group << ' ' << visible
              << " visible margin pixels before oval; " << pictures
              << " swept stages at five wide formats, filtering off/on; every one of " << updates
              << " updates plus final mask/cleanup checked; native memory/pixels unchanged\n";
}
void battle_caller(eb::SnesBus &bus, eb::MainCpu65816 &cpu, eb::SnesAudioDsp &dsp) {
    const bool jp = bus.game_version() == eb::GameVersion::JP;
    const auto &p = eb::source_profile(bus.game_version());
    cpu.emulation_mode = false; cpu.status_register = eb::MainCpu65816::InterruptDisable;
    cpu.data_bank = 0x7e; cpu.direct_page = 0x1e00; cpu.stack_pointer = 0x1fff;
    cpu.accumulator = 448; cpu.program_counter = 0xc0ff00;
    cpu.execute_instruction<0x22>(jp ? 0xc22e5d : 0xc22f38, 4); // INIT_BATTLE_SCRIPTED
    const auto start = bus.completed_frames;
    unsigned retained = 0, animated = 0, battle_frames = 0;
    while (bus.completed_frames - start < 1200) {
        const auto frame = bus.completed_frames;
        for (unsigned steps = 0; bus.completed_frames == frame; ++steps) {
            if (steps > 2000000 || cpu.is_stopped)
                throw std::runtime_error("Scripted encounter stalled: " + cpu.describe_registers());
            cpu.step_instruction();
        }
        (void)dsp.take_stereo_samples();
        const auto view = bus.scene_read_view(); const auto &r = view.ppu_registers;
        if (bus.presentation_width() != 398 || bus.presentation_fixed_aspect())
            throw std::runtime_error("Real battle caller published a native-aspect frame");
        if (word(bus, p.wram_battle_mode_flag) && !(r[0] & 0x80) && (r[0] & 15)) {
            if (++battle_frames == 3) break;
        }
        if (!word(bus, p.wram_battle_mode_flag) && !(r[0] & 0x80) && (r[0] & 15) &&
            r[7] == 0x39 && r[8] == 0x59 && r[0x30] == 0x10 && (r[0x31] & 0xbf) == 0xbf &&
            bus.work_ram[p.wram_swirl_update_timer + 6] == 0x20 && !bus.work_ram[p.wram_swirl_update_timer + 9]) {
            ++animated;
            if (!bus.work_ram[p.wram_swirl_update_timer]) ++retained;
            animation_picture(bus, unsigned(bus.completed_frames - start), false);
        }
    }
    if (!animated || battle_frames != 3)
        throw std::runtime_error("Real battle caller missed animation / visible battle handoff: retained=" +
            std::to_string(retained) + " animated=" + std::to_string(animated) + " battle=" + std::to_string(battle_frames));
    std::cout << "PASS " << (jp ? "JP" : "US") << " original INIT_BATTLE_SCRIPTED -> visible battle: "
              << animated << " mask frames, " << retained << " after timer expiry; canvas/aspect retained\n";
}
}
int main(int argc, char **argv) {
    if (argc < 2) return 77;
    try {
        const bool caller_only = std::string_view(argv[1]) == "--caller";
        if (caller_only && argc < 3) return 77;
        for (int i = caller_only ? 2 : 1; i < argc; ++i)
            run(eb::load_game_assets(argv[i], eb::asset_profiles()), caller_only);
    } catch (const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
