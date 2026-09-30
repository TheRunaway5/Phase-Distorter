#include "eb/native/overlay_sprites.hpp"
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>

void check(bool value, const char *message) { if (!value) throw std::runtime_error(message); }
int main(int argc, char **argv) {
    try {
        check(argc > 1, "Supply local asset packs");
        for (int arg = 1; arg < argc; ++arg) {
            const auto assets = eb::load_game_assets(argv[arg], eb::asset_profiles());
            const bool jp = assets.version == eb::GameVersion::JP;
            eb::native::SpriteResources resources(assets.image, eb::native::sprite_catalog_layout(assets.version));
            eb::native::OverlaySprites overlays(assets.image, assets.version, resources);
            auto bus = std::make_unique<eb::SnesBus>(assets.image, assets.version);
            bus->work_ram[0x0d] = 0x80; // source COPY_TO_VRAM immediate/forced-blank path
            bus->write_byte(0x2100, 0x80);
            eb::MainCpu65816 cpu(*bus);
            cpu.emulation_mode = false; cpu.status_register = 4; cpu.data_bank = 0x7e;
            cpu.direct_page = 0x1e00; cpu.stack_pointer = 0x1fff; cpu.program_counter = 0xc0ff00;
            cpu.execute_instruction<0x22>(jp ? 0xc486d8 : 0xc4b26b, 4);
            unsigned steps = 0;
            while (cpu.program_counter != 0xc0ff04 && ++steps < 100000) cpu.step_instruction();
            check(steps < 100000 && cpu.stack_pointer == 0x1fff && cpu.direct_page == 0x1e00,
                  "Original overlay loader did not return");
            constexpr std::array<unsigned,18> starts{0,5,10,15,20,25,30,35,40,45,50,55,60,65,70,80,90,100};
            const unsigned maps = (jp ? 0x40d7d : 0x40e31) + 17;
            unsigned pixels = 0, visible = 0;
            for (unsigned start : starts) {
                const auto fragments = overlays.frame(0xc00000 + maps + start);
                unsigned at = maps + start;
                for (const auto &fragment : fragments) {
                    check(fragment.left == std::int8_t(assets.image[at+3]) &&
                          fragment.top == std::int8_t(assets.image[at]), "Overlay geometry differs");
                    const unsigned attr = assets.image[at+2], tile = assets.image[at+1];
                    check(fragment.palette == ((attr>>1)&7) && fragment.priority == ((attr>>4)&3),
                          "Overlay palette or depth differs");
                    for (unsigned y=0; y<16; ++y) for(unsigned x=0; x<16; ++x) {
                        const unsigned sx = attr&0x40 ? 15-x : x, sy = attr&0x80 ? 15-y : y;
                        const unsigned cell = (((tile&0xf0)+(sy/8)*16)&0xf0) | ((tile+sx/8)&15);
                        const unsigned address = 0x8000 + ((attr&1) ? 0x2000 : 0) + cell*32 + (sy&7)*2;
                        unsigned expected = 0;
                        for(unsigned plane=0;plane<4;++plane)
                            expected |= ((bus->video_ram[address+(plane/2)*16+(plane&1)] >> (7-(sx&7)))&1)<<plane;
                        check(fragment.pixels->indices[y*16+x] == expected, "Native overlay artwork differs from source LOAD_OVERLAY_SPRITES");
                        visible += expected != 0; ++pixels;
                    }
                    at += 5;
                }
                check(assets.image[at-1]&0x80, "Overlay source frame termination differs");
            }
            check(visible > 0, "Overlay reference had no visible artwork");
            std::cout << "PASS " << (jp ? "JP" : "US") << " overlay frames=18 pixels=" << pixels
                      << " visible=" << visible << " source_steps=" << steps << '\n';
        }
    } catch(const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
