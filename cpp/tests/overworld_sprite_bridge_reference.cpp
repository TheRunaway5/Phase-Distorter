// Optional source oracle. Runs actual CREATE_ENTITY and graphics loaders; only
// the two allocation calls are intercepted to isolate image interpretation.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/sprite_appearance.hpp"
#include "eb/overworld_sprite_bridge.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <iostream>
#include <stdexcept>

namespace {
void require(bool value, const char *message) {
    if (!value)
        throw std::runtime_error(message);
}
struct Layout {
    unsigned create, graphics_allocator, map_allocator, first, free_actor, free_task, next_actor, next_task,
        sprite, map, map_size, direction, second, animation, surface, update, four, eight;
};
constexpr Layout us{0xc01e49, 0xc01c52, 0xc01a9d, 0xa50,  0xa52,  0xa54,  0xa9e,  0x125a,   0x2cd6,
                    0x112e,   0x2bfa,   0x2af6,   0x2892, 0x10f2, 0x2baa, 0x2896, 0xc0a4c4, 0xc0a794};
constexpr Layout jp{0xc01e5f, 0xc01c68, 0xc01ab3, 0xa46,  0xa48,  0xa4a,  0xa94,  0x1250,   0x30d4,
                    0x1124,   0x2ff8,   0x2ef4,   0x2c90, 0x10e8, 0x2fa8, 0x2c94, 0xc0a4a3, 0xc0a773};
struct Oracle {
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    eb::OverworldSpriteBridge bridge;
    eb::native::SpriteResources resources;
    Layout l;
    unsigned slot{};
    explicit Oracle(const eb::GameAssets &assets)
        : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)), cpu(*bus),
          bridge(assets.image, assets.version),
          resources(assets.image, eb::native::sprite_catalog_layout(assets.version)),
          l(assets.version == eb::GameVersion::JP ? jp : us) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    }
    void put(unsigned at, unsigned value) {
        bus->work_ram[at] = value;
        bus->work_ram[at + 1] = value >> 8;
    }
    unsigned get(unsigned at) const { return bus->work_ram[at] | unsigned(bus->work_ram[at + 1]) << 8; }
    void call(unsigned address, bool far, unsigned a, unsigned x, unsigned y) {
        const unsigned trampoline = (address & 0xff0000) | 0xff00;
        cpu.program_counter = trampoline;
        cpu.accumulator = a;
        cpu.x_index = x;
        cpu.y_index = y;
        if (far)
            cpu.execute_instruction<0x22>(address, 4);
        else
            cpu.execute_instruction<0x20>(address & 0xffff, 3);
        unsigned steps = 0;
        while (cpu.program_counter != trampoline + (far ? 4 : 3) || cpu.stack_pointer != 0x1fff) {
            if (++steps > 1000000)
                throw std::runtime_error("Host sprite source oracle did not return: " +
                                         cpu.describe_registers());
            bridge.before_instruction(cpu.program_counter, cpu.accumulator, cpu.x_index, cpu.y_index,
                                      cpu.stack_pointer, cpu.direct_page, bus->work_ram);
            if (cpu.program_counter == l.graphics_allocator || cpu.program_counter == l.map_allocator) {
                cpu.accumulator = 0;
                cpu.execute_instruction<0x6b>(0, 1);
            } else {
                cpu.step_instruction();
            }
        }
    }
    void create(unsigned sprite, unsigned actor) {
        slot = actor * 2;
        bus->work_ram.fill(0);
        cpu.emulation_mode = false;
        cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.data_bank = 0x7e;
        cpu.direct_page = 0x1e00;
        cpu.stack_pointer = 0x1fff;
        put(l.first, 0xffff);
        put(l.free_actor, slot);
        put(l.next_actor + slot, 0xffff);
        put(l.free_task, 0);
        put(l.next_task, 0xffff);
        put(0x1e0e, 100);
        put(0x1e10, 100);
        const auto before = bridge.diagnostics().creations;
        call(l.create, true, sprite, 1, actor);
        require(cpu.accumulator == actor && get(l.sprite + slot) == sprite, "Source creation failed");
        require(bridge.diagnostics().creations == before + 1 && !bridge.pose(slot),
                "Bridge did not observe actual creation completion");
        put(0x1e88, slot);
        put(l.update, slot);
        bus->work_ram[0x0d] = 0x80; // Immediate source uploads.
    }
    std::size_t check(unsigned group, unsigned frame, eb::native::SpriteFrameFormat format, unsigned flags) {
        require(bridge.pose(slot).has_value(), "Ordinary source pose not retained by bridge");
        const auto &pose = *bridge.pose(slot);
        const auto surface =
            flags & 8 ? (flags & 4 ? eb::native::SpriteSurface::Deep : eb::native::SpriteSurface::Shallow)
                      : eb::native::SpriteSurface::Normal;
        const auto expected = resources.acquire(group, frame, surface, format);
        require(pose.image->indices == expected->indices && pose.palette == expected->palette,
                "Hook selected a different image or palette");
        // Mirrors have the same part count; the selected imported part order is
        // independently checked against the source descriptor's mirror table.
        const unsigned frame_ref = get((l.sprite == 0x2cd6 ? 0x341a : 0x1ab8) + slot);
        const unsigned base = get(l.map + slot) + ((frame_ref & 1) ? pose.image->parts.size() * 5 : 0);
        for (unsigned part = 0; part < pose.image->parts.size(); ++part) {
            const unsigned map = base + part * 5;
            const auto &native = pose.image->parts[part];
            const unsigned attr = bus->work_ram[map + 2], tile = bus->work_ram[map + 1];
            for (unsigned y = 0; y < 16; ++y)
                for (unsigned x = 0; x < 16; ++x) {
                    const unsigned sx = attr & 0x40 ? 15 - x : x, sy = attr & 0x80 ? 15 - y : y;
                    const unsigned t = (((tile & 0xf0) + (sy / 8) * 16) & 0xf0) | ((tile + sx / 8) & 15);
                    const unsigned at = 0x8000 + ((attr & 1) ? 8192 : 0) + t * 32 + (sy & 7) * 2;
                    unsigned color = 0;
                    for (unsigned plane = 0; plane < 4; ++plane)
                        color |= ((bus->video_ram[(at + (plane / 2) * 16 + (plane & 1)) & 0xffff] >>
                                   (7 - (sx & 7))) &
                                  1)
                                 << plane;
                    if (native.indices[y * 16 + x] != color)
                        throw std::runtime_error("Source pixel mismatch at group " + std::to_string(group) +
                                                 " frame " + std::to_string(frame));
                }
            // Fully submerged short art exits before the source mirror latch.
            if (!(flags & 8) || pose.image->height > (flags & 4 ? 16u : 8u))
                require(native.left == std::int8_t(bus->work_ram[map + 3]) &&
                            native.top == std::int8_t(bus->work_ram[map]),
                        "Host part geometry differs from source");
        }
        return pose.image->parts.size() * 256;
    }
};
} // namespace
int main(int argc, char **argv) {
    try {
        if (argc < 2)
            throw std::runtime_error("overworld_sprite_bridge_reference pack.ebpak ...");
        for (int argument = 1; argument < argc; ++argument) {
            const auto assets = eb::load_game_assets(argv[argument], eb::asset_profiles());
            Oracle oracle(assets);
            unsigned selections = 0;
            std::size_t pixels = 0;
            for (unsigned group = 0; group < oracle.resources.size(); ++group) {
                oracle.create(group, group % 30);
                for (unsigned eight = 0; eight < 2; ++eight)
                    for (unsigned direction = 0; direction < (eight ? 8u : 12u); ++direction)
                        for (unsigned phase = 0; phase < 2; ++phase) {
                            const unsigned frame =
                                eight ? eb::native::eight_direction_pose(direction, phase * 2)
                                      : eb::native::four_direction_pose(direction, phase);
                            if (frame >= oracle.resources.definition(group).frames)
                                continue;
                            for (unsigned surface : {0u, 8u, 12u}) {
                                oracle.bus->video_ram.fill(0);
                                oracle.put(oracle.l.direction + oracle.slot, direction);
                                oracle.put(oracle.l.second, phase);
                                oracle.put(oracle.l.animation + oracle.slot, phase * 2);
                                oracle.put(oracle.l.surface + oracle.slot, surface);
                                oracle.call(eight ? oracle.l.eight : oracle.l.four, !eight, 0, oracle.slot,
                                            oracle.slot);
                                pixels += oracle.check(group, frame,
                                                       eight ? eb::native::SpriteFrameFormat::EightDirection
                                                             : eb::native::SpriteFrameFormat::FourDirection,
                                                       surface);
                                ++selections;
                            }
                        }
            }
            require(oracle.bridge.diagnostics().unsupported == 0,
                    "Declared ordinary assets unexpectedly declined");
            std::cout << (assets.version == eb::GameVersion::JP ? "JP" : "US") << ": "
                      << oracle.bridge.diagnostics().creations << " actual creations, " << selections
                      << " selected poses, " << pixels << " source pixels matched\n";
        }
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
