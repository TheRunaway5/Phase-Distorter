// Source execution is confined to this appearance oracle. The production
// appearance owner consumes typed host state and never links this machine.
#include "eb/native/sprite_appearance.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <iostream>
#include <memory>
#include <stdexcept>

namespace {
using namespace eb::native;
unsigned word(std::span<const std::uint8_t> bytes, unsigned at) {
    return bytes[at] | unsigned(bytes[at + 1]) << 8;
}
unsigned pointer(std::span<const std::uint8_t> bytes, unsigned at) {
    return word(bytes, at) | unsigned(bytes[at + 2]) << 16;
}
void require(bool ok, const char *message) {
    if (!ok)
        throw std::runtime_error(message);
}
struct Layout {
    unsigned upload_four, upload_eight, walk_four, step_eight, graphics_low, graphics_high, graphics_bank,
        direction, vram, byte_width, tile_height, second, surface, displayed, update_offset, animation,
        style, fingerprint, move_counter, current_slot, var2, var3, var7, swirl, footsteps_owner,
        footsteps_override, footsteps_id, transitions, teleport, intangible, map_high, play_sound,
        map, map_builder;
};
constexpr Layout us{
    0xc0a4c4, 0xc0a794, 0xc0a443, 0xc0a6e3, 0x29ca, 0x2a06, 0x2a42, 0x2af6, 0x298e,
    0x2a7e, 0x2aba, 0x2892, 0x2baa, 0x341a, 0x2896, 0x10f2, 0x2c22, 0x3456, 0x2890,
    0x1a42, 0x0ed6, 0x0f12, 0x1002, 0x5d60, 0x2898, 0x289c, 0x289a, 0xb4b6, 0x9f3f,
    0x5d58, 0x116a, 0xc0abe0, 0x467e, 0xc01d38};
constexpr Layout jp{
    0xc0a4a3, 0xc0a773, 0xc0a422, 0xc0a6c2, 0x2dc8, 0x2e04, 0x2e40, 0x2ef4, 0x2d8c,
    0x2e7c, 0x2eb8, 0x2c90, 0x2fa8, 0x1ab8, 0x2c94, 0x10e8, 0x3020, 0x1af4, 0x2c8e,
    0x1a38, 0x0ecc, 0x0f08, 0x0ff8, 0x60e6, 0x2c96, 0x2c9a, 0x2c98, 0xb68a, 0xa141,
    0x60de, 0x1160, 0xc0abbf, 0x4a04, 0xc01d4e};
struct Oracle {
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    Layout l;
    unsigned frame_table{}, offset{}, sound_calls{};
    explicit Oracle(const eb::GameAssets &assets)
        : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)), cpu(*bus),
          l(assets.version == eb::GameVersion::JP ? jp : us) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode = false;
        cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.data_bank = 0x7e;
        cpu.direct_page = 0x1e00;
        cpu.stack_pointer = 0x1fff;
        bus->work_ram[0x0d] = 0x80; // Immediate reference uploads.
    }
    void put(unsigned at, unsigned value) {
        bus->work_ram[at] = value;
        bus->work_ram[at + 1] = value >> 8;
    }
    unsigned get(unsigned at) const { return word(bus->work_ram, at); }
    void configure(const eb::GameAssets &assets, unsigned group, unsigned slot = 0) {
        const auto layout = sprite_catalog_layout(assets.version);
        const auto base = pointer(assets.image, layout.groups + group * 4) - 0xc00000;
        frame_table = base + 9;
        offset = slot * 2;
        const auto shape = pointer(assets.image, layout.shapes + assets.image[base + 2] * 4);
        put(0x1e0e, shape);
        put(0x1e10, shape >> 16);
        call(l.map_builder, false, 0, assets.image[base + 3]);
        put(0x1e88, offset);
        put(l.current_slot, slot);
        put(l.update_offset, offset);
        put(l.graphics_low + offset, frame_table & 0xffff);
        put(l.graphics_high + offset, (base + 0xc00000) >> 16);
        put(l.graphics_bank + offset, assets.image[base + 8]);
        put(l.tile_height + offset, assets.image[base]);
        put(l.byte_width + offset, assets.image[base + 1] * 2);
        put(l.vram + offset, 0x4000 + ((assets.image[base] & 1) ? 0x100 : 0));
        put(l.fingerprint + offset, 0xffff);
        put(l.map_high + offset, 0x7e);
    }
    void call(unsigned address, bool far = true, unsigned x = ~0u, unsigned y = ~0u) {
        const unsigned trampoline = (address & 0xff0000) | 0xff00;
        cpu.program_counter = trampoline;
        cpu.accumulator = 0;
        cpu.x_index = x == ~0u ? offset : x;
        cpu.y_index = y == ~0u ? offset : y;
        if (far)
            cpu.execute_instruction<0x22>(address, 4);
        else
            cpu.execute_instruction<0x20>(address & 0xffff, 3);
        unsigned steps = 0;
        sound_calls = 0;
        while (cpu.program_counter != trampoline + (far ? 4 : 3) || cpu.stack_pointer != 0x1fff) {
            if (++steps > 1000000)
                throw std::runtime_error("Appearance oracle did not return: " + cpu.describe_registers());
            if (cpu.program_counter == l.play_sound) {
                ++sound_calls;
                cpu.execute_instruction<0x6b>(0, 1);
            } else {
                cpu.step_instruction();
            }
        }
    }
    void check(const eb::GameAssets &assets, const SpriteAppearance &appearance) const {
        require(appearance.displayed().has_value(), "Native appearance did not latch");
        const auto selection = *appearance.displayed();
        require(get(l.displayed + offset) == word(assets.image, frame_table + selection.pose * 2),
                "Native selected frame differs from source displayed-frame latch");
    }
    std::size_t check_pixels(const eb::GameAssets &assets, SpriteResources &resources,
                             const SpriteAppearance &appearance) const {
        const auto selected = *appearance.displayed();
        const auto image = resources.acquire(selected.sprite, selected.pose, selected.surface, selected.format);
        const unsigned ref = word(assets.image, frame_table + selected.pose * 2);
        for (unsigned part = 0; part < image->parts.size(); ++part) {
            const unsigned map = l.map + ((ref & 1) * image->parts.size() + part) * 5;
            const unsigned attr = bus->work_ram[map + 2], tile = bus->work_ram[map + 1];
            require(image->parts[part].left == std::int8_t(bus->work_ram[map + 3]) &&
                        image->parts[part].top == std::int8_t(bus->work_ram[map]),
                    "Native appearance sprite geometry differs");
            for (unsigned y = 0; y < 16; ++y)
                for (unsigned x = 0; x < 16; ++x) {
                    const unsigned sx = attr & 0x40 ? 15 - x : x, sy = attr & 0x80 ? 15 - y : y;
                    const unsigned t = (((tile & 0xf0) + (sy / 8) * 16) & 0xf0) | ((tile + sx / 8) & 15);
                    const unsigned at = 0x8000 + ((attr & 1) ? 8192 : 0) + t * 32 + (sy & 7) * 2;
                    unsigned color = 0;
                    for (unsigned plane = 0; plane < 4; ++plane)
                        color |= ((bus->video_ram[(at + (plane / 2) * 16 + (plane & 1)) & 0xffff] >>
                                   (7 - (sx & 7))) & 1) << plane;
                    if (image->parts[part].indices[y * 16 + x] != color)
                        throw std::runtime_error("Appearance artwork differs: group=" +
                            std::to_string(selected.sprite) + " pose=" + std::to_string(selected.pose) +
                            " format=" + std::to_string(unsigned(selected.format)));
                }
        }
        return image->parts.size() * 256;
    }
};
} // namespace

int main(int argc, char **argv) {
    try {
        if (argc < 2)
            throw std::runtime_error("native_sprite_appearance_reference pack.ebpak ...");
        for (int argument = 1; argument < argc; ++argument) {
            const auto assets = eb::load_game_assets(argv[argument], eb::asset_profiles());
            auto resources = std::make_shared<SpriteResources>(assets.image, sprite_catalog_layout(assets.version));
            Oracle oracle(assets);
            unsigned selections = 0, ticks = 0, footsteps = 0;
            std::size_t pixels = 0;
            for (unsigned group = 0; group < resources->size(); ++group) {
                oracle.configure(assets, group);
                SpriteAppearance native(resources, group);
                for (unsigned direction = 0; direction < 12; ++direction)
                    for (unsigned phase = 0; phase < 2; ++phase) {
                        if (four_direction_pose(direction, phase) >= resources->definition(group).frames)
                            continue;
                        for (unsigned surface : {0u, 8u, 12u}) {
                            oracle.bus->video_ram.fill(0);
                            oracle.put(oracle.l.direction, direction);
                            oracle.put(oracle.l.second, phase);
                            oracle.put(oracle.l.surface, surface);
                            oracle.call(oracle.l.upload_four);
                            native.select_four(direction, phase, surface);
                            // Fully submerged short images are blanked before
                            // the source reaches its displayed-reference latch.
                            if (!surface)
                                oracle.check(assets, native);
                            pixels += oracle.check_pixels(assets, *resources, native);
                            ++selections;
                        }
                    }
                for (unsigned direction = 0; direction < 8; ++direction)
                    for (unsigned phase = 0; phase < 2; ++phase) {
                        if (eight_direction_pose(direction, phase * 2) >= resources->definition(group).frames)
                            continue;
                        for (unsigned surface : {0u, 8u, 12u}) {
                            oracle.bus->video_ram.fill(0);
                            oracle.put(oracle.l.direction, direction);
                            oracle.put(oracle.l.animation, phase * 2);
                            oracle.put(oracle.l.surface, surface);
                            oracle.call(oracle.l.upload_eight, false);
                            native.select_eight(direction, phase * 2, surface);
                            if (!surface)
                                oracle.check(assets, native);
                            pixels += oracle.check_pixels(assets, *resources, native);
                            ++selections;
                        }
                    }
            }
            // Walking latches are stateful: surface/artwork stay unchanged
            // when the fingerprint skips an upload, including counter wrap.
            for (unsigned slot : {0u, 7u, 17u, 29u}) {
                oracle.configure(assets, 1, slot);
                SpriteAppearance native(resources, 1);
                const unsigned offset = oracle.offset;
                for (unsigned tick = 0; tick < 96; ++tick) {
                    FourDirectionWalk input{(tick / 12) % 8, std::uint16_t(tick + 65500),
                                            std::uint16_t(slot), std::uint16_t((tick / 31) * 0x101),
                                            std::uint16_t((tick & 1) ? 12 : 0)};
                    oracle.put(oracle.l.direction + offset, input.direction);
                    oracle.put(oracle.l.move_counter, input.movement_counter);
                    oracle.put(oracle.l.style + offset, input.walking_style);
                    oracle.put(oracle.l.surface + offset, input.surface_flags);
                    oracle.call(oracle.l.walk_four);
                    native.step_four_walk(input);
                    oracle.check(assets, native);
                    require(native.fingerprint() == oracle.get(oracle.l.fingerprint + offset),
                            "Four-direction animation fingerprint differs");
                    ++ticks;
                }
            }
            oracle.configure(assets, 1);
            SpriteAppearance native(resources, 1);
            ActionActorState actor;
            actor.animation = 0;
            actor.variables[2] = 2;
            actor.variables[3] = 3;
            for (unsigned tick = 0; tick < 240; ++tick) {
                EightDirectionAnimation input{(tick / 30) % 8, std::uint16_t((tick / 83) * 0x101),
                    std::uint16_t((tick / 17) % 2 ? 12 : 0), std::uint16_t(tick % 11 == 0),
                    std::uint16_t(60 - (tick % 61)), tick % 13 == 0, tick % 3 != 0};
                if (tick % 19 == 0)
                    actor.variables[7] = 0x8000;
                else if (tick % 17 == 0)
                    actor.variables[7] = 0x2000;
                else
                    actor.variables[7] = 0;
                if (tick % 23 == 0)
                    actor.variables[2] = 0; // Underflow is an immediate phase change.
                oracle.put(oracle.l.direction, input.direction);
                oracle.put(oracle.l.style, input.walking_style);
                oracle.put(oracle.l.surface, input.surface_flags);
                oracle.put(oracle.l.animation, actor.animation);
                oracle.put(oracle.l.var2, actor.variables[2]);
                oracle.put(oracle.l.var3, actor.variables[3]);
                oracle.put(oracle.l.var7, actor.variables[7]);
                oracle.put(oracle.l.swirl, input.battle_swirl_ticks);
                oracle.put(oracle.l.intangible, input.intangibility_ticks);
                oracle.put(oracle.l.teleport, input.teleporting);
                oracle.put(oracle.l.footsteps_owner, input.footstep_owner ? 0 : 2);
                oracle.put(oracle.l.footsteps_id, 8); // Nonzero authored footstep sound (0x15).
                oracle.put(oracle.l.footsteps_override, 0);
                oracle.put(oracle.l.transitions, 0);
                oracle.call(oracle.l.step_eight);
                const auto update = native.step_eight(actor, input);
                oracle.check(assets, native);
                require(native.fingerprint() == oracle.get(oracle.l.fingerprint) &&
                            actor.animation == oracle.get(oracle.l.animation) &&
                            actor.variables[2] == oracle.get(oracle.l.var2) &&
                            actor.variables[7] == oracle.get(oracle.l.var7) &&
                            native.flashing_hidden() == bool(oracle.get(oracle.l.map_high) & 0x8000) &&
                            oracle.sound_calls == unsigned(update.footstep),
                        "Eight-direction animation timer/flags/visibility differs");
                footsteps += update.footstep;
                ++ticks;
            }
            std::cout << "PASS " << assets.title << ": " << selections << " source pose selections, "
                      << pixels << " exact source pixels, " << ticks << " native/source animation ticks, "
                      << footsteps << " footsteps, latched frames and visibility\n";
        }
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
