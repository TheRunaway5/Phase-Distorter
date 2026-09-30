#include "eb/overworld_sprite_draw.hpp"
#include "eb/game_scene_renderer.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/overworld_sprite_runtime.hpp"
#include "eb/snes_bus.hpp"
#include "generated_profile.hpp"
#include <array>
#include <stdexcept>
#include <string>

namespace eb {
namespace {
struct Overlay { unsigned script, timer, map; };
struct DrawLayout {
    unsigned entry, priority, flags;
    Overlay ripple, big_ripple, sweat, mushroom;
};
constexpr DrawLayout us{0xc0a3a4, 0x2400, 0x2e7a,
    {0x301e,0x305a,0x3096}, {0x30d2,0x310e,0x314a},
    {0x2f6a,0x2fa6,0x2fe2}, {0x2eb6,0x2ef2,0x2f2e}};
constexpr DrawLayout jp{0xc0a383, 0x2800, 0x3278,
    {0x341c,0x3458,0x3494}, {0x34d0,0x350c,0x3548},
    {0x3368,0x33a4,0x33e0}, {0x32b4,0x32f0,0x332c}};
unsigned normalize(unsigned pc) {
    const unsigned bank = pc >> 16;
    return bank != 0x7e && bank != 0x7f && ((bank & 0x40) || (pc & 0x8000)) ? pc | 0xc00000 : pc;
}
}

bool try_native_sprite_draw(MainCpu65816 &cpu, SnesBus &bus,
                            OverworldSpriteRuntime &runtime, GameSceneRenderer &renderer) {
    const auto &layout = cpu.game_version == GameVersion::JP ? jp : us;
    const auto pc = normalize(cpu.program_counter);
    const bool custom = pc == (cpu.game_version == GameVersion::JP ? 0xc0a0d9u : 0xc0a0fau);
    if (pc != layout.entry && !custom)
        return false;
    if (cpu.emulation_mode || cpu.game_version != bus.game_version())
        throw std::runtime_error("Native ordinary draw requires its regional native-mode caller");
    const unsigned slot = cpu.x_index;
    if (slot >= 60 || (slot & 1))
        throw std::runtime_error("Native ordinary draw received an invalid logical actor");
    const auto view = bus.scene_read_view();
    const auto &profile = view.source_profile;
    const auto word = [&](unsigned at) {
        return unsigned(bus.work_ram.at(at)) | unsigned(bus.work_ram.at(at + 1)) << 8;
    };
    const auto store = [&](unsigned at, unsigned value) {
        cpu.write_byte(0x7e0000 | at, std::uint8_t(value));
        cpu.write_byte(0x7e0000 | (at + 1), std::uint8_t(value >> 8));
    };
    const auto done = [&] {
        // The ordinary callback is reached through C0A0E3's JMP. Its caller
        // owns the saved direct page; only the near return belongs here.
        cpu.status_register &= ~(MainCpu65816::Accumulator8Bit | MainCpu65816::Index8Bit);
        cpu.execute_instruction<0x60>(0, 1);
    };
    // These remain logical visibility controls; neither low pointer nor any
    // source descriptor payload is read by the native renderer.
    // C0A0E3 already applies its processor-V branch before this callback.
    // Bank bit 14 is not that flag; only the sign bit is persistent hiding.
    if ((word(profile.wram_entity_spritemap_pointers.high + slot) & 0x8000) ||
        (word(profile.wram_entity_animation_frame + slot) & 0x8000)) {
        done();
        return true;
    }
    if (custom) {
        if (!runtime.custom_descriptor(slot))
            throw std::runtime_error("Unmarked native actor entered a custom sprite draw: slot=" +
                                     std::to_string(slot));
        const unsigned bank = word(cpu.direct_page + 0x8e) & 255;
        const unsigned table = (bank << 16) | word(cpu.direct_page + 0x8c);
        const unsigned priority = word(profile.wram_entity_draw_priority + slot);
        const auto draw_mark = renderer.native_actor_draw_mark();
        const int x = std::int16_t(word(profile.wram_entity_world_coordinates.x + slot));
        const int y = std::int16_t(word(profile.wram_entity_world_coordinates.y + slot));
        renderer.queue_native_custom(view, table, cpu.accumulator, x, y, priority);
        renderer.finish_native_actor_draw(view, draw_mark, slot, priority);
        store(layout.priority, priority);
        cpu.write_byte(0x7e000b, std::uint8_t(bank));
        // Only an authored content pointer is retained in the source scratch;
        // it is never a runtime graphics allocation or a native resource ID.
        const auto offset = table - 0xc00000 + cpu.accumulator * 2;
        store(cpu.direct_page + 0x96, view.cartridge_rom[offset] | unsigned(view.cartridge_rom[offset + 1]) << 8);
        cpu.accumulator = word(0x0b);
        cpu.y_index = std::uint16_t(y);
        cpu.status_register &= ~(MainCpu65816::Carry | MainCpu65816::Zero | MainCpu65816::Negative);
        done();
        return true;
    }
    const auto actor = runtime.snapshot(slot);
    if (!actor)
        throw std::runtime_error("Native ordinary draw has no owned actor resource: slot=" + std::to_string(slot));
    if (runtime.custom_descriptor(slot))
        throw std::runtime_error("Custom descriptor entered ordinary native draw: slot=" + std::to_string(slot));
    const auto draw_mark = renderer.native_actor_draw_mark();
    const unsigned raw_priority = word(profile.wram_entity_draw_priority + slot);
    unsigned priority = raw_priority;
    if (priority & 0x8000) {
        const unsigned owner = (priority & 0x3f) * 2;
        if (owner >= 60)
            throw std::runtime_error("Native ordinary draw has an invalid priority owner");
        const auto flags = priority;
        priority = word(profile.wram_entity_draw_priority + owner);
        if (!(flags & 0x4000))
            store(profile.wram_entity_draw_priority + slot, 0);
    }
    if (priority >= 4)
        throw std::runtime_error("Native ordinary draw has an invalid resolved priority");
    store(layout.priority, priority);
    const unsigned surface = word(profile.wram_entity_surface_flags + slot);
    const int x = std::int16_t(word(profile.wram_entity_screen_coordinates.x + slot));
    const int y = std::int16_t(word(profile.wram_entity_screen_coordinates.y + slot));
    const unsigned shift = surface & 1 ? 5 : 0;

    // C0AD56's tiny authored overlay program: store map, jump, yield delay.
    // Data is imported ROM content, never processor instructions or a source
    // graphics allocation. Preserve each overlay's pointer and wrapping timer.
    const auto overlay = [&](Overlay fields, int offset_y, unsigned offset_map, bool suppress_zero) {
        if (!word(fields.timer + slot)) {
            unsigned cursor = word(fields.script + slot);
            const auto next = [&]() {
                const unsigned at = 0x40000 | (cursor & 0xffff);
                const unsigned next_at = 0x40000 | ((cursor + 1) & 0xffff);
                if (next_at >= view.cartridge_rom.size())
                    throw std::runtime_error("Truncated native overlay script");
                const unsigned value = view.cartridge_rom[at] | unsigned(view.cartridge_rom[next_at]) << 8;
                cursor = (cursor + 2) & 0xffff;
                return value;
            };
            bool yielded = false;
            for (unsigned commands = 0; commands < 1024; ++commands) {
                const unsigned command = next();
                const unsigned argument = next();
                if (command == 1)
                    store(fields.map + slot, argument);
                else if (command == 3)
                    cursor = argument;
                else {
                    store(fields.script + slot, cursor);
                    store(fields.timer + slot, argument);
                    yielded = true;
                    break;
                }
            }
            if (!yielded)
                throw std::runtime_error("Native overlay script did not yield");
        }
        store(fields.timer + slot, (word(fields.timer + slot) - 1) & 0xffff);
        const unsigned map = word(fields.map + slot);
        if (map || !suppress_zero)
            renderer.queue_native_overlay(view, 0xc40000 | ((map + offset_map) & 0xffff),
                                           x, std::int16_t(y + offset_y), priority);
    };
    const unsigned water = surface & 12;
    if (water && water != 4) {
        if (actor->creation.sprite.width == 16)
            overlay(layout.ripple, 0, shift, false);
        else
            overlay(layout.big_ripple, 8, shift * 2, false);
    }
    const unsigned flags = word(layout.flags + slot);
    if (slot >= 0x2e) {
        if (water == 4 || (flags & 0x8000))
            overlay(layout.sweat, 0, shift, true);
        if (flags & 0x4000)
            overlay(layout.mushroom, 0, shift, false);
    }
    if (actor->image)
        renderer.queue_native_sprite(view, actor->image, actor->id, actor->creation.sprite.palette,
                                      x, y, surface, priority);
    renderer.finish_native_actor_draw(view, draw_mark, slot, raw_priority);
    // No graphics address crosses this boundary. Remaining registers are
    // caller-clobbered draw temporaries, as in C08C58's near-return contract.
    cpu.accumulator = word(profile.wram_entity_spritemap_pointers.high + slot) & 255;
    cpu.y_index = std::uint16_t(y);
    cpu.status_register &= ~(MainCpu65816::Carry | MainCpu65816::Zero | MainCpu65816::Negative);
    done();
    return true;
}
} // namespace eb
