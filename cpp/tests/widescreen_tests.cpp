// Presentation regressions exercise the real scanline renderer with synthetic
// artwork. Native game storage and hardware output remain separate contracts.
#include "eb/snes_bus.hpp"
#include "generated_profile.hpp"

#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <string>

namespace {
unsigned failures = 0, checks = 0;
void check(bool pass, const std::string& message) {
    ++checks;
    if (!pass) {
        ++failures;
        std::cerr << "FAIL: " << message << '\n';
    }
}
void ram(eb::SnesBus& bus, unsigned address, unsigned value) {
    bus.work_ram[address] = value;
    bus.work_ram[address + 1] = value >> 8;
}
void color(eb::SnesBus& bus, unsigned index, unsigned value) {
    bus.palette_ram[index * 2] = value;
    bus.palette_ram[index * 2 + 1] = value >> 8;
}
void until(eb::SnesBus& bus, unsigned line) {
    while (bus.scanline_index() != line)
        bus.advance_cpu_cycles(1);
}
auto battle(eb::GameVersion version) {
    auto bus = std::make_unique<eb::SnesBus>(std::array<uint8_t, 1>{0}, version);
    const auto& source = eb::source_profile(version);
    bus->set_presentation_width(400);
    bus->write_byte(0x2100, 15);
    bus->write_byte(0x2105, 1);
    bus->write_byte(0x210b, 1);
    bus->write_byte(0x212c, 1);
    color(*bus, 0, 0x7c00);
    color(*bus, 1, 0x03e0);
    for (unsigned row = 0; row < 8; ++row)
        bus->video_ram[0x2000 + row * 2] = 255;
    ram(*bus, source.wram_battle_mode_flag, 1);
    return bus;
}
void psi_overlay(eb::GameVersion version) {
    auto bus = battle(version);
    const auto& source = eb::source_profile(version);
    // SHOW_PSI_ANIMATION uses BG1 for PSI over a four-bit BG2 background.
    // The animation is active even when its palette is not cycling.
    bus->work_ram[source.wram_battle_backgrounds.layer1] = 2;
    bus->work_ram[source.wram_battle_backgrounds.layer1 + 1] = 4;
    bus->work_ram[source.wram_psi_animation_state] = 1;
    until(*bus, 2);
    const auto pixels = bus->presentation_pixels();
    check(pixels[72] == 0xff00ff00, "PSI fixture draws the native overlay");
    check(pixels[0] == pixels[72] && pixels[399] == pixels[72],
          "Active PSI overlay reaches both widescreen margins without requiring palette cycling");
}
void battle_exit(eb::GameVersion version) {
    auto bus = battle(version);
    const auto& source = eb::source_profile(version);
    bus->work_ram[source.wram_battle_backgrounds.layer1] = 1;
    bus->work_ram[source.wram_battle_backgrounds.layer1 + 1] = 4;
    until(*bus, 2);
    check(bus->presentation_pixels()[0] == 0xff00ff00, "Battle background starts at full width");
    // BATTLE_ROUTINE clears BATTLE_MODE_FLAG before calling FADE_OUT; the
    // same background remains on screen while brightness falls to black.
    ram(*bus, source.wram_battle_mode_flag, 0);
    bus->write_byte(0x2100, 7);
    until(*bus, 3);
    const auto pixels = bus->presentation_pixels();
    check(pixels[400 + 72] != 0xff00ff00 && pixels[400 + 72] != 0xff000000,
          "Battle exit fixture actually dims the picture");
    check(pixels[400] == pixels[400 + 72] && pixels[799] == pixels[400 + 72],
          "Battle exit keeps its widescreen background throughout the fade");
    bus->write_byte(0x2107, 4);
    until(*bus, 4);
    check(bus->presentation_pixels()[800] != bus->presentation_pixels()[800 + 72],
          "A replacement scene cannot inherit stale battle-background policy");
}
void targeted_psi(eb::GameVersion version) {
    const auto& source = eb::source_profile(version);
    for (unsigned depth : {2u, 4u})
        for (unsigned width : {400u, 1024u})
            for (int scroll : {-64, 64}) {
                auto bus = std::make_unique<eb::SnesBus>(std::array<uint8_t, 1>{0}, version);
                const unsigned layer = depth == 2 ? 1 : 0, base_palette = depth == 2 ? 32 : 0;
                bus->set_presentation_width(width);
                bus->set_presentation_effects_enabled(true);
                bus->write_byte(0x2100, 15);
                bus->write_byte(0x2105, depth == 2 ? 0 : 1);
                bus->write_byte(0x2107 + layer, 4);
                bus->write_byte(0x212c, 1u << layer);
                bus->write_byte(0x210d + layer * 2, scroll & 255);
                bus->write_byte(0x210d + layer * 2, (scroll >> 8) & 3);
                ram(*bus, source.wram_battle_mode_flag, 1);
                bus->work_ram[source.wram_battle_backgrounds.layer1 + 1] = depth;
                bus->work_ram[source.wram_psi_animation_state] = 1;
                bus->work_ram[source.wram_psi_animation_state + 10] = 2;
                bus->work_ram[source.wram_psi_animation_state + 7] = 1;
                bus->work_ram[source.wram_psi_animation_state + 8] = 2;
                ram(*bus, source.wram_psi_animation_state + 44, source.wram_palettes + base_palette * 2);
                color(*bus, 0, 0x7c00);
                color(*bus, base_palette + 1, 0x7fff);
                for (unsigned row = 0; row < 32; ++row)
                    bus->video_ram[0x800 + (row * 32 + 16) * 2] = 1;
                for (unsigned row = 0; row < 8; ++row)
                    bus->video_ram[depth * 8 + row * 2] = 255;
                until(*bus, 2);
                const unsigned target = 128 - scroll, display_target = (width - 256) / 2 + target;
                check(bus->native_framebuffer[target] == 0xffffffff &&
                          bus->presentation_pixels()[display_target] == 0xffffffff,
                      "Targeted PSI stays anchored on its enemy in both background layouts");
                check(bus->presentation_pixels()[0] == 0xff0000ff &&
                          bus->presentation_pixels()[width - 1] == 0xff0000ff,
                      "Targeted PSI does not wrap a second copy into the margins");
                check(bus->presentation_effect_mask()[display_target] == 1 &&
                          bus->presentation_effect_reference()[display_target] == 0xff0000ff,
                      "Flash-filter metadata follows the resized PSI overlay");
            }
}
void entities(eb::GameVersion version) {
    const auto& source = eb::source_profile(version);
    for (const unsigned width : {400u, 800u, 1024u})
        for (const int x : {-180, -72, -16, 248, 256, 320, 440}) {
            if (x < -int((width - 256) / 2) || x + 16 > int((width + 256) / 2))
                continue;
            auto bus = std::make_unique<eb::SnesBus>(std::vector<uint8_t>(0x300000), version);
            bus->set_presentation_width(width);
            bus->write_byte(0x2100, 15);
            bus->write_byte(0x2105, 1);
            bus->write_byte(0x2107, 0x39);
            bus->write_byte(0x2108, 0x59);
            bus->write_byte(0x210d, 0);
            bus->write_byte(0x210d, 2);
            ram(*bus, source.wram_background_scroll.layer1_x, 512);
            bus->write_byte(0x2101, 4);
            bus->write_byte(0x212c, 16);
            for (unsigned slot = 0; slot < 128; ++slot)
                bus->object_attributes[slot * 4 + 1] = 240;
            ram(*bus, source.wram_first_entity, 0);
            ram(*bus, source.wram_entity_next, 0xffff);
            ram(*bus, source.wram_entity_screen_coordinates.x, x);
            ram(*bus, source.wram_entity_screen_coordinates.y, 33);
            ram(*bus, source.wram_entity_world_coordinates.x, 512 + x);
            ram(*bus, source.wram_entity_world_coordinates.y, 33);
            ram(*bus, source.wram_entity_spritemap_pointers.low, 0x4800);
            ram(*bus, source.wram_entity_spritemap_pointers.high, 0x7e);
            ram(*bus, source.wram_entity_draw_callback, source.entity_draw_callbacks.screen_space);
            ram(*bus, source.wram_entity_body_divides, 0x0202);
            ram(*bus, source.wram_entity_draw_priority, 1);
            for (unsigned part = 0; part < 4; ++part) {
                auto offset = 0x4800 + part * 5;
                bus->work_ram[offset] = (part / 2) * 8;
                bus->work_ram[offset + 1] = part;
                bus->work_ram[offset + 2] = 0x30;
                bus->work_ram[offset + 3] = (part % 2) * 8;
                bus->work_ram[offset + 4] = part == 3 ? 0x80 : 0;
                color(*bus, 129 + part, part == 0 ? 31 : part == 1 ? 31 << 5 : part == 2 ? 31 << 10 : 0x7fff);
                for (unsigned row = 0; row < 8; ++row)
                    for (unsigned plane = 0; plane < 4; ++plane)
                        bus->video_ram[part * 32 + row * 2 + (plane / 2) * 16 + (plane & 1)] =
                            ((part + 1) & (1u << plane)) ? 255 : 0;
            }
            auto native = std::make_unique<eb::SnesBus>(*bus);
            native->set_presentation_width(256);
            until(*bus, 225);
            until(*native, 225);
            constexpr std::array<uint32_t, 4> colors{0xffff0000, 0xff00ff00, 0xff0000ff, 0xffffffff};
            unsigned missing = 0;
            for (unsigned row = 0; row < 16; ++row)
                for (unsigned col = 0; col < 16; ++col) {
                    const int native_x = x + int(col);
                    if (native_x >= 0 && native_x < 256)
                        continue; // OAM owns the original center.
                    const auto output_x = int((width - 256) / 2) + native_x;
                    missing +=
                        bus->presentation_pixels()[(32 + row) * width + output_x] != colors[(row / 8) * 2 + col / 8];
                }
            check(!missing, "Active entity retains every offscreen sprite part at x=" + std::to_string(x) +
                                ", width=" + std::to_string(width));
            check(bus->work_ram == native->work_ram && bus->object_attributes == native->object_attributes &&
                      bus->video_ram == native->video_ram && bus->native_framebuffer == native->native_framebuffer &&
                      bus->read_byte(0x213e) == native->read_byte(0x213e),
                  "Expanded entities preserve allocation/spawn memory, native pixels, OAM and overflow flags");
            if (width == 400 && x == 256) {
                const auto upload = [&]() {
                    std::copy(bus->object_attributes.begin(), bus->object_attributes.end(),
                              bus->work_ram.begin() + 0x5000);
                    bus->write_byte(0x4300, 0);
                    bus->write_byte(0x4301, 4);
                    bus->write_byte(0x4302, 0);
                    bus->write_byte(0x4303, 0x50);
                    bus->write_byte(0x4304, 0x7e);
                    bus->write_byte(0x4305, 0x20);
                    bus->write_byte(0x4306, 2);
                    bus->write_byte(0x420b, 1);
                };
                upload();
                ram(*bus, source.wram_entity_screen_coordinates.x, 280);
                until(*bus, 0);
                until(*bus, 225);
                check(bus->presentation_pixels()[32 * 400 + 72 + 256] == 0xffff0000 &&
                          bus->presentation_pixels()[32 * 400 + 72 + 280] == 0xff000000,
                      "World margins use the published OAM frame, not next-frame entity positions");
                upload();
                until(*bus, 0);
                until(*bus, 225);
                check(bus->presentation_pixels()[32 * 400 + 72 + 280] == 0xffff0000,
                      "The next OAM upload publishes the next full-width entity position");
            }
            ram(*bus, source.wram_entity_spritemap_pointers.high, 0x807e);
            if (width == 400 && x == 256) {
                bus->write_byte(0x4302, 0);
                bus->write_byte(0x4303, 0x50);
                bus->write_byte(0x4305, 0x20);
                bus->write_byte(0x4306, 2);
                bus->write_byte(0x420b, 1);
            }
            until(*bus, 0);
            until(*bus, 225);
            const auto picture = bus->presentation_pixels();
            check(std::all_of(picture.begin() + 32 * width, picture.begin() + 48 * width,
                              [](auto pixel) { return pixel == 0xff000000; }),
                  "The source invisibility flag still hides offscreen entities");
        }
}
} // namespace
int main() {
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
        psi_overlay(version);
        battle_exit(version);
        targeted_psi(version);
        entities(version);
    }
    std::cout << checks << " checks, " << failures << " failures\n";
    return failures ? 1 : 0;
}
