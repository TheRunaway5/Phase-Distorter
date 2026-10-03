// Source EVENT_452 plays a camera-aperture page on BG3; EVENT_705/706 play
// Carpainter's lightning page there. C47B77 uploads one 32x28 tilemap and
// keeps BG3_Y_POS at -1. Synthetic art exercises that exact source layout
// without copying retail artwork or executing a dialogue shortcut.
#include "eb/snes_bus.hpp"
#include "eb/direct_scene.hpp"
#include "generated_profile.hpp"

#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

namespace {
unsigned checks = 0, failures = 0;
void check(bool pass, const std::string& message) {
    ++checks;
    if (!pass) {
        ++failures;
        std::cerr << "FAIL: " << message << '\n';
    }
}
void word(eb::SnesBus& bus, unsigned at, unsigned value) {
    bus.work_ram[at] = value;
    bus.work_ram[at + 1] = value >> 8;
}
void color(eb::SnesBus& bus, unsigned index, unsigned value) {
    bus.palette_ram[index * 2] = value;
    bus.palette_ram[index * 2 + 1] = value >> 8;
}
void frame(eb::SnesBus& bus) {
    if (bus.scanline_index())
        while (bus.scanline_index()) bus.advance_cpu_cycles(1);
    while (bus.scanline_index() != 225) bus.advance_cpu_cycles(1);
}
std::string label(eb::GameVersion version, unsigned width, unsigned event, unsigned phase, bool filter) {
    return std::string(version == eb::GameVersion::US ? "US" : "JP") +
        " width=" + std::to_string(width) + " event=" + std::to_string(event) +
        " phase=" + std::to_string(phase) + " filter=" + std::to_string(filter);
}
auto fixture(eb::GameVersion version, unsigned width, unsigned event, unsigned phase,
             bool filter, bool narrow_room = false, bool flash = false) {
    const auto& source = eb::source_profile(version);
    std::vector<std::uint8_t> content(narrow_room ? 0x300000 : 1);
    if (narrow_room) {
        // Only the native 256-pixel room belongs to the loaded combination.
        // Its world continuation is clipped, but a screen effect covers the
        // whole display independently of that scenery boundary.
        std::fill_n(content.begin() + source.rom_map_tileset_palette_sectors, 2560, 8);
        content[source.rom_map_tileset_palette_sectors] = 0;
    }
    auto bus = std::make_unique<eb::SnesBus>(content, version);
    bus->set_presentation_width(width);
    bus->set_presentation_effects_enabled(filter);
    bus->set_direct_rendering_enabled(narrow_room);
    bus->write_byte(0x2100, 15);
    bus->write_byte(0x2105, 9); // Mode 1, high-priority BG3.
    bus->write_byte(0x2107, 0x39);
    bus->write_byte(0x2108, 0x59);
    bus->write_byte(0x2109, 0x7c); // Source TEXT_LAYER_TILEMAP = word $7c00.
    bus->write_byte(0x210c, 6); // Source TEXT_LAYER_TILES = word $6000.
    bus->write_byte(0x2111, 0);
    bus->write_byte(0x2111, 0);
    bus->write_byte(0x2112, 255);
    bus->write_byte(0x2112, 3); // BG3_Y_POS = -1; visible row zero samples row zero.
    bus->write_byte(0x212c, 5);
    color(*bus, 0, 0x03e0);
    color(*bus, 1, 0x001f);
    color(*bus, 2, 0x7c00);
    color(*bus, 3, 0x7fff);
    color(*bus, 4, 0x03e0);
    // BG1 is a uniform green scene; BG3 has distinct edges, a left stripe,
    // a center stripe, and transparent gaps. A repeated page or center-only
    // extension differs from the intended single widescreen aperture/bolt.
    for (unsigned row = 0; row < 8; ++row) {
        bus->video_ram[16 + row * 2] = 255; // BG1 tile zero, index 4.
        for (unsigned tile = 1; tile <= 3; ++tile) {
            bus->video_ram[0xc000 + tile * 16 + row * 2] = tile & 1 ? 255 : 0;
            bus->video_ram[0xc001 + tile * 16 + row * 2] = tile & 2 ? 255 : 0;
        }
    }
    for (unsigned row = 0; row < 28; ++row)
        for (unsigned column = 0; column < 32; ++column) {
            const unsigned tile = column == 0 || column == 31 ? 1 :
                                  column >= 8 && column < 12 ? 2 : column == 16 ? 3 : 0;
            const unsigned at = 0xf800 + (row * 32 + column) * 2;
            bus->video_ram[at] = tile;
            bus->video_ram[at + 1] = 0x20;
        }
    word(*bus, source.wram_entity_script_ids + 7 * 2, event);
    word(*bus, source.wram_entity_script_variable0 + 7 * 2, phase);
    if (flash) {
        // C4249A's source fixed-color flash and full-picture color window.
        bus->write_byte(0x2130, 0x10);
        bus->write_byte(0x2131, 0x33);
        bus->write_byte(0x2132, 0xea);
        bus->write_byte(0x2125, 0x20);
        bus->write_byte(0x2126, 0);
        bus->write_byte(0x2127, 255);
    }
    return bus;
}
void active_effect(eb::GameVersion version, unsigned width, unsigned event, unsigned phase,
                   bool filter, bool narrow_room = false, bool flash = false) {
    auto bus = fixture(version, width, event, phase, filter, narrow_room, flash);
    auto original = std::make_unique<eb::SnesBus>(*bus);
    original->set_presentation_width(256);
    auto clean = std::make_unique<eb::SnesBus>(*bus);
    clean->write_byte(0x212c, 1);
    if (flash) clean->write_byte(0x2132, 0xe0);
    const auto ram = bus->work_ram;
    const auto vram = bus->video_ram;
    const auto palettes = bus->palette_ram;
    const auto objects = bus->object_attributes;
    const auto save = bus->save_ram;
    const auto registers = std::vector<std::uint8_t>(bus->ppu_registers().begin(), bus->ppu_registers().end());
    frame(*bus); frame(*original); frame(*clean);
    const auto name = label(version, width, event, phase, filter) +
        (narrow_room ? " narrow room" : "") + (flash ? " fixed flash" : "");
    check(bus->presentation_width() == width && bus->presentation_fixed_aspect() == 0,
          "Story effect retains the requested canvas: " + name);
    check(bus->native_framebuffer == original->native_framebuffer,
          "Widening preserves the original game framebuffer: " + name);
    bool page_matches = true, reference_matches = true, mask_matches = true;
    const auto pixels = bus->presentation_pixels(), background = clean->presentation_pixels();
    for (unsigned y = 0; y < 224; ++y)
        for (unsigned x = 0; x < width; ++x) {
            // Derive the oracle from the native authored page: select each of
            // its 256 columns once across the complete requested width.
            const unsigned source_x = x * 256 / width, at = y * width + x;
            const auto expected = original->native_framebuffer[y * 256 + source_x];
            // Beyond a narrow room, transparent pixels reveal the clipped
            // scene; opaque page columns still cover those margins.
            const auto overlay = original->scene_read_view().sample_background_pixel(2, source_x, y + 1);
            page_matches &= pixels[at] == (overlay.priority < 0 && !flash ? background[at] : expected);
            if (filter) {
                reference_matches &= bus->presentation_effect_reference()[at] == background[at];
                mask_matches &= bus->presentation_effect_mask()[at] == (pixels[at] != background[at]);
            }
        }
    check(page_matches, "Snapshot/lightning page spans the display once: " + name);
    if (narrow_room) {
        const auto scene = bus->direct_scene();
        check(bool(scene), "Source scene capture retains the widescreen story overlay: " + name);
        if (scene) {
            const auto direct = eb::rasterize_direct_scene({scene, {}});
            check(std::equal(direct.begin(), direct.end(), pixels.begin()),
                  "Source scene commands match the widescreen overlay pixels: " + name);
        }
    }
    if (filter) {
        check(reference_matches, "Effect reference follows the entire resized page: " + name);
        check(mask_matches, "Effect mask follows the entire resized page: " + name);
    } else
        check(bus->presentation_effect_mask().empty() && bus->presentation_effect_reference().empty(),
              "Story widening works with flash filtering disabled: " + name);
    check(bus->work_ram == ram && bus->video_ram == vram && bus->palette_ram == palettes &&
          bus->object_attributes == objects && bus->save_ram == save &&
          std::equal(registers.begin(), registers.end(), bus->ppu_registers().begin()),
          "Presentation leaves source game storage and registers unchanged: " + name);
}
void ordinary_text(eb::GameVersion version, unsigned width, unsigned event, unsigned phase, bool filter) {
    auto bus = fixture(version, width, event, phase, filter);
    auto native = std::make_unique<eb::SnesBus>(*bus);
    native->set_presentation_width(256);
    frame(*bus); frame(*native);
    const auto name = label(version, width, event, phase, filter);
    const unsigned margin = (width - 256) / 2;
    bool unchanged = true, metadata = true;
    const auto pixels = bus->presentation_pixels();
    for (unsigned y = 0; y < 224; ++y)
        for (unsigned x = 0; x < width; ++x) {
            const auto expected = x < margin || x >= margin + 256 ? 0xff00ff00 :
                native->native_framebuffer[y * 256 + x - margin];
            unchanged &= pixels[y * width + x] == expected;
            if (filter)
                metadata &= bus->presentation_effect_mask()[y * width + x] == 0 &&
                    bus->presentation_effect_reference()[y * width + x] == expected;
        }
    check(unchanged, "Unrelated BG3/HUD remains centered: " + name);
    if (filter) check(metadata, "Unrelated BG3/HUD remains outside the effect mask: " + name);
}
void restoration(eb::GameVersion version, unsigned width, bool filter) {
    const auto& source = eb::source_profile(version);
    auto bus = fixture(version, width, source.lightning_scripts.franklin_badge_reflection, 1, filter);
    frame(*bus);
    word(*bus, source.wram_entity_script_ids + 7 * 2, 35);
    frame(*bus);
    auto text = fixture(version, width, 35, 1, filter);
    frame(*text);
    check(std::equal(bus->presentation_pixels().begin(), bus->presentation_pixels().end(),
                     text->presentation_pixels().begin()),
          "Completing the snapshot restores centered text policy: " + label(version, width, 35, 1, filter));
}
}
int main() {
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
        const auto& source = eb::source_profile(version);
        for (unsigned width : {256u, 400u, 1024u})
            for (bool filter : {false, true}) {
                active_effect(version, width, source.lightning_scripts.franklin_badge_reflection, 1, filter);
                for (unsigned event : {source.lightning_scripts.strike_event_705,
                                       source.lightning_scripts.strike_event_706})
                    for (unsigned phase : {0u, 2u, 10u})
                        active_effect(version, width, event, phase, filter);
                active_effect(version, width, source.lightning_scripts.strike_event_705, 2, filter, false, true);
                ordinary_text(version, width, 35, 1, filter);
                ordinary_text(version, width, source.lightning_scripts.franklin_badge_reflection, 0, filter);
                ordinary_text(version, width, source.lightning_scripts.strike_event_705, 1, filter);
                restoration(version, width, filter);
                if (width > 256) {
                    active_effect(version, width, source.lightning_scripts.franklin_badge_reflection, 1, filter, true);
                    active_effect(version, width, source.lightning_scripts.strike_event_705, 2, filter, true);
                }
            }
    }
    std::cout << "Widescreen story effects: " << checks << " checks, " << failures << " failures\n";
    return failures ? 1 : 0;
}
