// Asset-backed verification only: compare native resources with the original
// sprite-map construction and graphics-upload routines. eb_native_engine never
// links this reference machine or executes any of these instructions.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/sprite_actors.hpp"
#include "eb/native/sprite_resources.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <stdexcept>

namespace {
struct Layout {
    unsigned map, map_builder, upload, graphics_low, graphics_high, graphics_bank, direction, vram,
        byte_width, tile_height, pose, draw, surface;
};
constexpr Layout us{0x467e, 0xc01d38, 0xc0a4c4, 0x29ca, 0x2a06,   0x2a42, 0x2af6,
                    0x298e, 0x2a7e,   0x2aba,   0x2892, 0xc08cd5, 0x2baa};
constexpr Layout jp{0x4a04, 0xc01d4e, 0xc0a4a3, 0x2dc8, 0x2e04,   0x2e40, 0x2ef4,
                    0x2d8c, 0x2e7c,   0x2eb8,   0x2c90, 0xc08cc6, 0x2fa8};
unsigned word(std::span<const std::uint8_t> data, unsigned at) {
    return data[at] | unsigned(data[at + 1]) << 8;
}
unsigned pointer(std::span<const std::uint8_t> data, unsigned at) {
    return word(data, at) | unsigned(data[at + 2]) << 16;
}
struct Oracle {
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    Layout layout;
    Oracle(const eb::GameAssets &a)
        : bus(std::make_unique<eb::SnesBus>(a.image, a.version)), cpu(*bus),
          layout(a.version == eb::GameVersion::JP ? jp : us) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode = false;
        cpu.status_register = 0;
        cpu.data_bank = 0x7e;
        cpu.direct_page = 0x1e00;
        cpu.stack_pointer = 0x1fff;
        bus->work_ram[0x0d] = 0x80;
    }
    void put(unsigned at, unsigned value) {
        bus->work_ram[at] = value;
        bus->work_ram[at + 1] = value >> 8;
    }
    void call(unsigned address, unsigned a, unsigned x, unsigned y, bool far = true) {
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
                throw std::runtime_error("Reference routine stuck: " + cpu.describe_registers());
            cpu.step_instruction();
        }
    }
};
} // namespace
int main(int argc, char **argv) {
    try {
        if (argc < 2)
            throw std::runtime_error("native_sprite_reference pack.ebpak ...");
        for (int arg = 1; arg < argc; ++arg) {
            const auto assets = eb::load_game_assets(argv[arg], eb::asset_profiles());
            const auto layout = eb::native::sprite_catalog_layout(assets.version);
            auto host_resources = std::make_shared<eb::native::SpriteResources>(assets.image, layout);
            auto &resources = *host_resources;
            eb::native::SpriteActors actors(host_resources);
            eb::native::SpriteActor actor;
            actor.x = 128;
            actor.y = 112;
            const auto actor_id = actors.create(actor);
            eb::native::SpritePalettes palettes{};
            for (unsigned p = 0; p < palettes.size(); ++p)
                for (unsigned c = 1; c < 16; ++c)
                    palettes[p][c] = 0xff000000 | ((p + 1) * 24 << 16) | (c * 16 << 8) | c;
            Oracle oracle(assets);
            auto &bus = *oracle.bus;
            auto l = oracle.layout;
            std::uint64_t checked = 0, pixels = 0;
            for (unsigned group = 0; group < resources.size(); ++group) {
                const auto base = pointer(assets.image, layout.groups + group * 4) - 0xc00000;
                const auto shape = pointer(assets.image, layout.shapes + assets.image[base + 2] * 4);
                oracle.put(0x1e0e, shape);
                oracle.put(0x1e10, shape >> 16);
                oracle.call(l.map_builder, 0, 0, assets.image[base + 3], false);
                const auto &def = resources.definition(group);
                oracle.put(l.byte_width, assets.image[base + 1] * 2);
                oracle.put(l.tile_height, assets.image[base]);
                oracle.put(l.vram, 0x4000 + ((assets.image[base] & 1) ? 0x100 : 0));
                oracle.put(l.graphics_bank, assets.image[base + 8]);
                oracle.put(l.graphics_high, (base + 0xc00000) >> 16);
                oracle.put(l.direction, 0);
                oracle.put(l.pose, 0);
                for (unsigned pose = 0; pose < def.frames; ++pose) {
                    for (unsigned surface_flags : {0u, 4u, 8u, 12u}) {
                        const auto surface = surface_flags == 12  ? eb::native::SpriteSurface::Deep
                                             : surface_flags == 8 ? eb::native::SpriteSurface::Shallow
                                                                  : eb::native::SpriteSurface::Normal;
                        oracle.put(l.surface, surface_flags);
                        bus.video_ram.fill(0);
                        oracle.put(l.graphics_low, (base + 9 + pose * 2) & 0xffff);
                        oracle.call(l.upload, 0, 0, 0);
                        const auto image = resources.acquire(group, pose, surface);
                        std::vector<std::uint8_t> expected(image->indices.size());
                        std::vector<std::uint32_t> expected_frame(256 * 224, 0xff000000);
                        const auto ref = word(assets.image, base + 9 + pose * 2);
                        const unsigned count = assets.image[shape - 0xc00000];
                        // Run the final source draw routine too, so its Y-1 pixel
                        // registration and actual OAM coordinates are the oracle.
                        oracle.put(0x03, 0x600); // OAM_ADDR
                        oracle.put(0x05, 0x800); // OAM_END_ADDR
                        oracle.put(0x07, 0x800); // OAM_HIGH_TABLE_ADDR
                        bus.work_ram[0x09] = 0x7e;
                        bus.work_ram[0x0a] = 0x80;
                        bus.work_ram[0x0b] = 0x7e; // SPRITEMAP_BANK
                        oracle.call(l.draw, l.map + (ref & 1) * count * 5, 128, 112);
                        if (word(bus.work_ram, 0x03) != 0x600 + count * 4)
                            throw std::runtime_error("Source unexpectedly clipped a centered sprite part");
                        for (unsigned part = 0; part < count; ++part) {
                            const unsigned map = l.map + ((ref & 1) * count + part) * 5;
                            const int left = std::int8_t(bus.work_ram[map + 3]) - image->left;
                            const int top = std::int8_t(bus.work_ram[map]) - image->top;
                            const unsigned attr = bus.work_ram[map + 2], tile = bus.work_ram[map + 1];
                            for (unsigned y = 0; y < 16; ++y)
                                for (unsigned x = 0; x < 16; ++x) {
                                    if (left + int(x) < 0 || top + int(y) < 0 || left + x >= image->width ||
                                        top + y >= image->height)
                                        throw std::runtime_error("Native sprite anchor differs");
                                    const unsigned sx = attr & 0x40 ? 15 - x : x,
                                                   sy = attr & 0x80 ? 15 - y : y;
                                    const unsigned t =
                                        (((tile & 0xf0) + (sy / 8) * 16) & 0xf0) | ((tile + sx / 8) & 15);
                                    const unsigned at =
                                        0x8000 + ((attr & 1) ? 8192 : 0) + t * 32 + (sy & 7) * 2;
                                    unsigned color = 0;
                                    for (unsigned plane = 0; plane < 4; ++plane)
                                        color |=
                                            ((bus.video_ram[(at + (plane / 2) * 16 + (plane & 1)) & 0xffff] >>
                                              (7 - (sx & 7))) &
                                             1)
                                            << plane;
                                    auto &dest = expected[(top + y) * image->width + left + x];
                                    if (!dest)
                                        dest = color;
                                    const int screen_x = bus.work_ram[0x600 + part * 4] + int(x);
                                    const int screen_y = bus.work_ram[0x601 + part * 4] + int(y);
                                    if (color && screen_x >= 0 && screen_x < 256 && screen_y >= 0 &&
                                        screen_y < 224) {
                                        auto &pixel = expected_frame[screen_y * 256 + screen_x];
                                        if (pixel == 0xff000000)
                                            pixel = palettes[(attr >> 1) & 7][color];
                                    }
                                }
                        }
                        actor.sprite = group;
                        actor.pose = pose;
                        actor.surface = surface;
                        actors.update(actor_id, actor);
                        const auto actual_frame =
                            eb::rasterize_direct_scene({actors.draw({}, palettes, checked + 1, 1), {}});
                        if (actual_frame != expected_frame)
                            throw std::runtime_error(assets.title + " group=" + std::to_string(group) +
                                                     " pose=" + std::to_string(pose) +
                                                     " host actor draw differs from source OAM placement");
                        if (expected != image->indices) {
                            unsigned differences = 0;
                            for (unsigned i = 0; i < expected.size(); ++i)
                                differences += expected[i] != image->indices[i];
                            throw std::runtime_error(assets.title + " group=" + std::to_string(group) +
                                                     " pose=" + std::to_string(pose) +
                                                     " mismatched pixels=" + std::to_string(differences));
                        }
                        ++checked;
                        pixels += expected.size();
                    }
                }
            }
            std::cout << "PASS " << assets.title << " native pose/surface cases=" << checked
                      << " exact source pixels=" << pixels
                      << "; all host actor draws match source OAM placement\n";
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return 1;
    }
}
