// Source EVENT_452 plays a camera-aperture page on BG3; EVENT_705/706 play
// Carpainter's lightning page there. C47B77 uploads one 32x28 tilemap and
// keeps BG3_Y_POS at -1. Synthetic art exercises that exact source layout
// without copying retail artwork or executing a dialogue shortcut.
#include "eb/snes_bus.hpp"
#include "eb/direct_scene.hpp"
#include "eb/asset_store.hpp"
#include "eb/display_settings.hpp"
#include "eb/native/battle_background.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"

#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <memory>
#include <stdexcept>
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

// These imported inputs identify the real LOAD_BACKGROUND_ANIMATION records;
// the loaded tiles below are deliberately distinctive synthetic art. No CPU,
// NPC shortcut, retail artwork copy or cutscene-timing claim is involved.
unsigned image_word(const std::vector<std::uint8_t>& image, unsigned at) {
    return image.at(at) | (unsigned(image.at(at + 1)) << 8);
}
void install_coffee_record(eb::SnesBus& bus, const eb::GameAssets& assets,
                           unsigned record, unsigned id, unsigned target) {
    const auto layout = eb::native::battle_background_layout(assets.version);
    const unsigned definition = layout.configurations + id * 17;
    check(assets.image.at(definition + 2) == 4, "Authored coffee/tea layer is four-bit");
    bus.work_ram[record] = std::uint8_t(target);
    bus.work_ram[record + 1] = assets.image.at(definition + 2);
    for (unsigned i = 3; i < 8; ++i) bus.work_ram[record + i] = assets.image.at(definition + i);
    bus.work_ram[record + 10] = assets.image.at(definition + 8);
    const unsigned palette = layout.palettes + unsigned(assets.image.at(definition + 1)) * 4;
    const unsigned pointer = image_word(assets.image, palette) | (unsigned(assets.image.at(palette + 2)) << 16);
    if (pointer < 0xc00000 || pointer - 0xc00000 + 32 > assets.image.size())
        throw std::runtime_error("Coffee/tea immutable palette pointer is outside its imported image");
    const unsigned first_color = target == 2 ? 32 : 64;
    for (unsigned i = 0; i < 32; ++i) {
        const auto byte = assets.image.at(pointer - 0xc00000 + i);
        bus.work_ram[record + 12 + i] = byte;
        bus.work_ram[record + 44 + i] = byte; // Original uncycled palette2 owner.
        bus.palette_ram[first_color * 2 + i] = byte;
    }
    word(bus, record + 76, eb::source_profile(assets.version).wram_palettes + first_color * 2);
    for (unsigned i = 0; i < 4; ++i) {
        bus.work_ram[record + 78 + i] = assets.image.at(definition + 9 + i);
        bus.work_ram[record + 97 + i] = assets.image.at(definition + 13 + i);
    }
}
void tile_pixel(eb::SnesBus& bus, unsigned base, unsigned tile, unsigned depth,
                unsigned x, unsigned y, unsigned index) {
    for (unsigned plane = 0; plane < depth; ++plane) {
        const unsigned at = base + tile * depth * 8 + y * 2 + (plane / 2) * 16 + (plane & 1);
        const unsigned mask = 1u << (7 - x);
        bus.video_ram[at] = std::uint8_t((bus.video_ram[at] & ~mask) | ((index & (1u << plane)) ? mask : 0));
    }
}
auto coffee_fixture(const eb::GameAssets& assets, unsigned width, unsigned selector,
                     bool filter, bool direct, unsigned scroll_case) {
    const auto& source = eb::source_profile(assets.version);
    auto bus = std::make_unique<eb::SnesBus>(assets.image, assets.version);
    bus->set_presentation_width(width);
    bus->set_presentation_effects_enabled(filter);
    bus->set_direct_rendering_enabled(direct);
    bus->write_byte(0x2100, 15);
    bus->write_byte(0x2105, 9);
    // Original SET_BG1/2_VRAM_LOCATION receives word5800/5C00: registers58/5C,
    // byte tilemapsB000/B800. BG3 captions retain word7C00/6000.
    bus->write_byte(0x2107, 0x58); bus->write_byte(0x2108, 0x5c); bus->write_byte(0x2109, 0x7c);
    bus->write_byte(0x210b, 0x10); bus->write_byte(0x210c, 6);
    const unsigned config = source.rom_layer_config_table;
    bus->write_byte(0x212c, assets.image.at(config + 7));
    bus->write_byte(0x212d, assets.image.at(config + 11 + 7));
    bus->write_byte(0x2130, assets.image.at(config + 21 + 7));
    bus->write_byte(0x2131, assets.image.at(config + 31 + 7));
    word(*bus, source.wram_battle_mode_flag, 0);
    const unsigned first = selector ? 233 : 231;
    install_coffee_record(*bus, assets, source.wram_battle_backgrounds.layer1, first, 2);
    install_coffee_record(*bus, assets, source.wram_battle_backgrounds.layer2, first + 1, 1);
    color(*bus, 0, 0x03e0); color(*bus, 5, 0x7c1f); color(*bus, 6, 0x7fff); color(*bus, 7, 0x001f);
    for (unsigned layer = 0; layer < 2; ++layer) {
        const unsigned base = layer ? 0x2000 : 0, map = layer ? 0xb800 : 0xb000;
        for (unsigned tile = 1; tile < 17; ++tile)
            for (unsigned y = 0; y < 8; ++y)
                for (unsigned x = 0; x < 8; ++x)
                    tile_pixel(*bus, base, tile, 4, x, y,
                               layer ? 1 + ((tile + x + y * 3) % 15)
                                     : ((x + y + tile) % 5 ? 1 + ((tile * 3 + x + y) % 15) : 0));
        for (unsigned y = 0; y < 32; ++y)
            for (unsigned x = 0; x < 32; ++x) {
                const unsigned entry = (1 + ((x * 3 + y * 5 + layer * 7) % 16)) |
                    ((layer ? 2u : 4u) << 10) | ((x & 1) ? 0x4000u : 0) |
                    ((y & 1) ? 0x8000u : 0) | ((x % 7 == 0) ? 0x2000u : 0);
                bus->video_ram[map + (y * 32 + x) * 2] = std::uint8_t(entry);
                bus->video_ram[map + (y * 32 + x) * 2 + 1] = std::uint8_t(entry >> 8);
            }
        const int horizontal = scroll_case ? (layer ? 333 : -73) : (layer ? -11 : 37);
        const unsigned vertical = scroll_case ? (layer ? 247u : 65u) : (layer ? 19u : 3u);
        bus->write_byte(0x210d + layer * 2, std::uint8_t(horizontal));
        bus->write_byte(0x210d + layer * 2, (unsigned(horizontal) >> 8) & 3);
        bus->write_byte(0x210e + layer * 2, vertical & 255);
        bus->write_byte(0x210e + layer * 2, (vertical >> 8) & 3);
        const unsigned record = layer ? source.wram_battle_backgrounds.layer1 : source.wram_battle_backgrounds.layer2;
        word(*bus, record + 85, unsigned(horizontal)); word(*bus, record + 87, vertical);
    }
    // Distinct caption edges would immediately expose a repeated BG3 page.
    for (unsigned tile = 1; tile < 4; ++tile)
        for (unsigned y = 0; y < 8; ++y)
            for (unsigned x = 0; x < 8; ++x) tile_pixel(*bus, 0xc000, tile, 2, x, y, tile);
    for (unsigned y = 0; y < 32; ++y)
        for (unsigned x = 0; x < 32; ++x) {
            const unsigned tile = y >= 9 && y < 16 ? (x == 0 || x == 31 ? 1 : x >= 10 && x < 22 ? 2 : 0) : 0;
            const unsigned entry = tile | 0x2400;
            bus->video_ram[0xf800 + (y * 32 + x) * 2] = std::uint8_t(entry);
            bus->video_ram[0xf801 + (y * 32 + x) * 2] = std::uint8_t(entry >> 8);
        }
    bus->write_byte(0x2111, 0); bus->write_byte(0x2111, 0);
    bus->write_byte(0x2112, 255); bus->write_byte(0x2112, 3);
    return bus;
}
struct OraclePixel { unsigned color{}; int priority = -1; unsigned layer = 5; };
OraclePixel coffee_tile(const eb::SceneReadView& view, unsigned layer, int x, unsigned y) {
    // Independent planar decoding of the actual loaded VRAM/scroll. This does
    // not use the renderer's presentation policy or background sampler.
    const unsigned sx = unsigned(x + view.background_scroll_x[layer]) & 255;
    const unsigned sy = (y + 1 + view.background_scroll_y[layer]) & 255;
    const unsigned map = ((view.ppu_registers[7 + layer] & 0xfc) << 9);
    const unsigned at = map + ((sy / 8) * 32 + sx / 8) * 2;
    const unsigned entry = view.video_ram[at] | (unsigned(view.video_ram[at + 1]) << 8);
    const unsigned tx = (entry & 0x4000) ? 7 - (sx & 7) : sx & 7;
    const unsigned ty = (entry & 0x8000) ? 7 - (sy & 7) : sy & 7;
    const unsigned depth = layer == 2 ? 2 : 4;
    const unsigned base = ((view.ppu_registers[0x0b + layer / 2] >> ((layer & 1) * 4)) & 15) * 8192;
    unsigned index{};
    for (unsigned plane = 0; plane < depth; ++plane) {
        const unsigned byte = base + (entry & 1023) * depth * 8 + ty * 2 + (plane / 2) * 16 + (plane & 1);
        index |= ((view.video_ram[byte & 65535] >> (7 - tx)) & 1u) << plane;
    }
    if (!index) return {};
    const unsigned palette = ((entry >> 10) & 7) * (1u << depth) + index;
    const unsigned color_at = palette * 2;
    const unsigned packed = (view.palette_ram[color_at] | unsigned(view.palette_ram[color_at + 1]) << 8) & 0x7fff;
    const bool high = entry & 0x2000;
    return {packed, layer == 0 ? (high ? 9 : 6) : layer == 1 ? (high ? 8 : 5) : (high ? 11 : 0), layer};
}
std::uint32_t coffee_pixel(const eb::SceneReadView& view, int x, unsigned y, bool captions) {
    OraclePixel main{view.palette(0)}, sub{};
    for (unsigned layer = 0; layer < (captions ? 3u : 2u); ++layer) {
        const auto p = coffee_tile(view, layer, x, y);
        if ((view.ppu_registers[0x2c] & (1u << layer)) && p.priority > main.priority) main = p;
        if ((view.ppu_registers[0x2d] & (1u << layer)) && p.priority > sub.priority) sub = p;
    }
    unsigned packed = main.color;
    if (view.ppu_registers[0x31] & (1u << main.layer)) {
        const unsigned other = (view.ppu_registers[0x30] & 2) ? sub.color : view.fixed_color;
        const bool half = (view.ppu_registers[0x31] & 0x40) && (!(view.ppu_registers[0x30] & 2) || sub.priority >= 0);
        packed = 0;
        for (unsigned shift = 0; shift < 15; shift += 5) {
            const unsigned a = (main.color >> shift) & 31, b = (other >> shift) & 31;
            unsigned sum = view.ppu_registers[0x31] & 0x80 ? (a > b ? a - b : 0) : a + b;
            if (half) sum >>= 1;
            packed |= std::min(31u, sum) << shift;
        }
    }
    const auto rgb = [](unsigned value) { return (value << 3) | (value >> 2); };
    return 0xff000000 | rgb(packed & 31) << 16 | rgb((packed >> 5) & 31) << 8 | rgb((packed >> 10) & 31);
}
struct Canvas { std::string name; unsigned width; };
std::vector<Canvas> coffee_canvases() {
    std::vector<Canvas> result;
    eb::DisplaySettings settings; settings.widescreen = true;
    const std::array<eb::AspectRatio, 7> presets{eb::AspectRatio::Native, eb::AspectRatio::FourThree,
        eb::AspectRatio::SixteenTen, eb::AspectRatio::SixteenNine, eb::AspectRatio::TwentyOneNine,
        eb::AspectRatio::Window, eb::AspectRatio::Custom};
    for (unsigned i = 0; i < presets.size(); ++i) {
        settings.aspect = presets[i]; result.push_back({"preset" + std::to_string(i), unsigned(settings.render_width(1280, 720))});
    }
    settings.aspect = eb::AspectRatio::Window;
    result.push_back({"window16:10", unsigned(settings.render_width(1280, 800))});
    result.push_back({"window-wide", unsigned(settings.render_width(3000, 500))});
    settings.aspect = eb::AspectRatio::Custom; settings.custom_aspect = 100.f;
    result.push_back({"custom-maximum", unsigned(settings.render_width(1280, 720))});
    check(result.back().width == eb::DisplaySettings::maximum_width, "Coffee/tea covers the supported custom canvas maximum");
    return result;
}
void coffee_active(const eb::GameAssets& assets, const Canvas& canvas, unsigned selector,
                   bool filter, bool direct, unsigned scroll_case) {
    auto bus = coffee_fixture(assets, canvas.width, selector, filter, direct, scroll_case);
    auto native = std::make_unique<eb::SnesBus>(*bus); native->set_presentation_width(256);
    const auto ram = bus->work_ram;
    const auto vram = bus->video_ram;
    const auto palette = bus->palette_ram;
    const auto objects = bus->object_attributes; const auto save = bus->save_ram;
    const auto registers = std::vector<std::uint8_t>(bus->ppu_registers().begin(), bus->ppu_registers().end());
    frame(*bus); frame(*native);
    const auto name = label(assets.version, canvas.width, selector ? 233 : 231, scroll_case, filter) +
                      " " + canvas.name + " direct=" + std::to_string(direct);
    const unsigned margin = (canvas.width - 256) / 2;
    bool center = true, margins = true, native_oracle = true;
    unsigned caption_pixels{};
    const auto view = bus->scene_read_view(); const auto pixels = bus->presentation_pixels();
    for (unsigned y = 0; y < 224; ++y)
        for (unsigned x = 0; x < canvas.width; ++x) {
            const int authored_x = int(x) - int(margin);
            if (authored_x >= 0 && authored_x < 256) {
                center &= pixels[y * canvas.width + x] == native->native_framebuffer[y * 256 + unsigned(authored_x)];
                native_oracle &= pixels[y * canvas.width + x] == coffee_pixel(view, authored_x, y, true);
                caption_pixels += coffee_tile(view, 2, authored_x, y).priority >= 0;
            } else margins &= pixels[y * canvas.width + x] == coffee_pixel(view, authored_x, y, false);
        }
    check(bus->presentation_width() == canvas.width && !bus->presentation_fixed_aspect(), "Coffee/tea retains requested canvas: " + name);
    check(bus->native_framebuffer == native->native_framebuffer && center && native_oracle, "Coffee/tea native center and independent loaded-tile oracle agree: " + name);
    check(margins && caption_pixels, "Coffee/tea backgrounds cover both margins with centered unrepeated BG3 captions: " + name);
    const auto clocks = bus->master_clocks(), frames = bus->completed_frames;
    (void)bus->presentation_pixels(); (void)bus->presentation_effect_mask(); (void)bus->presentation_effect_reference();
    check(bus->master_clocks() == clocks && bus->completed_frames == frames &&
          bus->work_ram == ram && bus->video_ram == vram && bus->palette_ram == palette &&
          bus->object_attributes == objects && bus->save_ram == save &&
          std::equal(registers.begin(), registers.end(), bus->ppu_registers().begin()),
          "Coffee/tea presentation is pure over source storage, registers, save and sampling clock: " + name);
}
void coffee_rejection(const eb::GameAssets& assets, unsigned selector, unsigned defect) {
    const auto& source = eb::source_profile(assets.version);
    auto bus = coffee_fixture(assets, 1024, selector, true, true, 1);
    const unsigned record = defect < 5 ? source.wram_battle_backgrounds.layer1 : source.wram_battle_backgrounds.layer2;
    if (defect < 10) {
        switch (defect % 5) {
        case 0: bus->work_ram[record + 44] ^= 1; break;
        case 1: bus->work_ram[record + 78] ^= 1; break;
        case 2: bus->work_ram[record + 97] ^= 1; break;
        case 3: bus->work_ram[record] = 3; break;
        case 4: bus->work_ram[record + 1] = 2; break;
        }
    }
    if (defect == 10) install_coffee_record(*bus, assets, source.wram_battle_backgrounds.layer2, selector ? 232 : 234, 1);
    if (defect == 11) bus->write_byte(0x2107, 0x54); // An unrelated static/menu page.
    if (defect == 12) { // Original world-register restoration leaves old background records retained.
        frame(*bus); bus->write_byte(0x2107, 0x39); bus->write_byte(0x2108, 0x59); bus->write_byte(0x210b, 0x11);
    }
    auto clean = std::make_unique<eb::SnesBus>(*bus);
    clean->work_ram[source.wram_battle_backgrounds.layer1] = clean->work_ram[source.wram_battle_backgrounds.layer2] = 0;
    frame(*bus); frame(*clean);
    const auto name = label(assets.version, 1024, selector ? 233 : 231, defect, true);
    check(std::equal(bus->presentation_pixels().begin(), bus->presentation_pixels().end(), clean->presentation_pixels().begin()),
          "Unrelated/corrupted/restored layout cannot inherit coffee/tea continuation: " + name);
    check(bus->native_framebuffer == clean->native_framebuffer, "Rejected coffee/tea metadata leaves original hardware pixels unchanged: " + name);
}
void imported_coffee(const eb::GameAssets& assets) {
    for (unsigned selector = 0; selector < 2; ++selector) {
        for (const auto& canvas : coffee_canvases())
            for (bool filter : {false, true})
                for (bool direct : {false, true})
                    for (unsigned scroll_case = 0; scroll_case < 2; ++scroll_case)
                        coffee_active(assets, canvas, selector, filter, direct, scroll_case);
        for (unsigned defect = 0; defect < 13; ++defect) coffee_rejection(assets, selector, defect);
    }
    std::cout << "Imported " << assets.title << " coffee/tea source records, all display presets, centered captions and pure desktop margins checked\n";
}
}
int main(int argc, char** argv) {
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
    for (int i = 1; i < argc; ++i) {
        try { imported_coffee(eb::load_game_assets(argv[i], eb::asset_profiles())); }
        catch (const std::exception& error) { check(false, std::string("Imported coffee/tea fixture: ") + error.what()); }
    }
    std::cout << "Widescreen story effects: " << checks << " checks, " << failures << " failures\n";
    return failures ? 1 : 0;
}
