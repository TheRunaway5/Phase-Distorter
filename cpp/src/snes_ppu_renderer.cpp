#include "eb/snes_bus.hpp"

#include <algorithm>

#include "snes_ppu_constants.hpp"

namespace eb {
namespace {
// Expand one bitplane byte to eight byte lanes, leftmost pixel first.
constexpr auto planar_lanes = [] {
    std::array<std::uint64_t, 256> table{};
    for (unsigned byte = 0; byte < 256; ++byte)
        for (unsigned x = 0; x < 8; ++x)
            table[byte] |= std::uint64_t((byte >> (7 - x)) & 1) << (x * 8);
    return table;
}();
int signed_13_bit(unsigned value) {
    return (value & 0x1000) ? int(value & 0x1fff) - 0x2000 : int(value & 0x1fff);
}
} // namespace

// Each layer combines up to two inclusive horizontal windows. Enable and
// inversion bits belong to each window; the final OR/AND/XOR/XNOR operator
// matters only when both are enabled.
bool SceneReadView::layer_window_contains(unsigned layer, unsigned x) const {
    const unsigned window_selection = (ppu_registers[0x23 + layer / 2] >> ((layer & 1) * 4)) & 15;
    const bool window1_enabled = window_selection & 2, window2_enabled = window_selection & 8;
    bool inside_window1 = x >= ppu_registers[0x26] && x <= ppu_registers[0x27],
         inside_window2 = x >= ppu_registers[0x28] && x <= ppu_registers[0x29];
    if (window_selection & 1)
        inside_window1 = !inside_window1;
    if (window_selection & 4)
        inside_window2 = !inside_window2;
    if (!window1_enabled)
        return window2_enabled && inside_window2;
    if (!window2_enabled)
        return inside_window1;
    const unsigned logic =
        layer < 4 ? (ppu_registers[0x2a] >> (layer * 2)) & 3 : (ppu_registers[0x2b] >> ((layer - 4) * 2)) & 3;
    switch (logic) {
    case 0:
        return inside_window1 || inside_window2;
    case 1:
        return inside_window1 && inside_window2;
    case 2:
        return inside_window1 != inside_window2;
    default:
        return inside_window1 == inside_window2;
    }
}

// Decode tilemap entry -> tile quadrant/flips -> planar pixel -> palette and
// priority. Signed x permits sampling presentation margins; masks implement
// hardware map wrapping only after scroll/mosaic has selected a coordinate.
PpuPixel SceneReadView::sample_background_pixel(unsigned background_layer, int x, unsigned y,
                                                const GameSceneRenderer *scene) const {
    const unsigned mode = ppu_registers[5] & 7, depth = background_color_depths[mode][background_layer];
    if (mode == 7)
        return sample_mode7_pixel(background_layer, x, y);
    if (!depth)
        return {};
    const unsigned mosaic = (ppu_registers[6] >> 4) + 1;
    if (ppu_registers[6] & (1 << background_layer)) {
        x -= ((x % int(mosaic)) + int(mosaic)) % int(mosaic);
        y -= y % mosaic;
    }
    // Ordinary tiled modes share map, palette and priority across eight
    // neighboring pixels. Raster state is immutable for this borrowed view.
    // Offset-per-tile, mode 7 and mosaic retain the scalar sampler.
    auto* row_cache = tile_rows && mode <= 1 &&
        (!(ppu_registers[6] & (1 << background_layer)) || mosaic == 1)
        ? &tile_rows->layers[background_layer] : nullptr;
    const int raw_x = x + int(background_scroll_x[background_layer]);
    const int cell_x = raw_x >= 0 ? raw_x / 8 : (raw_x - 7) / 8;
    const unsigned lane = unsigned(raw_x) & 7;
    // A fine-scrolled tile can cross x=0/256. The native half may be a VRAM
    // patch while its offscreen continuation comes from the source world map.
    const bool native_ring = x >= 0 && x < 256;
    if (row_cache && row_cache->valid && row_cache->cell_x == cell_x &&
        row_cache->y == y && row_cache->scene == scene && row_cache->native_ring == native_ring)
        return row_cache->pixels[lane];
    const unsigned tile_size = (ppu_registers[5] & (0x10 << background_layer)) ? 16 : 8;
    unsigned scrolled_x = unsigned(x + background_scroll_x[background_layer]) & 1023,
             scrolled_y = (y + background_scroll_y[background_layer]) & 1023;
    if ((mode == 2 || mode == 4) && background_layer < 2) {
        // BG3 selects scroll words, not visible tiles. Columns align to the
        // target layer's fine scroll; the first tile column has no override.
        const int column = (x + int(background_scroll_x[background_layer] & 7)) & ~7;
        if (column < 0 || column >= int(tile_size)) {
            const unsigned lookup_x =
                unsigned(column - int(tile_size) + int(background_scroll_x[2] & ~7u)) & 1023;
            const auto offset_word = [&](unsigned lookup_y) {
                const unsigned size = (ppu_registers[5] & 0x40) ? 16 : 8;
                const unsigned map = ppu_registers[9], width = (map & 1) ? 64 : 32,
                               height = (map & 2) ? 64 : 32;
                const unsigned map_x = (lookup_x / size) % width, map_y = (lookup_y / size) % height;
                const unsigned screen = map_x / 32 + (map_y / 32) * (width / 32);
                return vram_word(((map & 0xfc) << 9) + screen * 2048 + ((map_y % 32) * 32 + map_x % 32) * 2);
            };
            const unsigned horizontal = offset_word(background_scroll_y[2]);
            const unsigned enabled = 0x2000u << background_layer;
            if (mode == 4) {
                if (horizontal & enabled) {
                    if (horizontal & 0x8000)
                        scrolled_y = (y + horizontal) & 1023;
                    else
                        scrolled_x =
                            (x + (background_scroll_x[background_layer] & 7) + (horizontal & ~7u)) & 1023;
                }
            } else {
                const unsigned vertical = offset_word(background_scroll_y[2] + 8);
                if (horizontal & enabled)
                    scrolled_x =
                        (x + (background_scroll_x[background_layer] & 7) + (horizontal & ~7u)) & 1023;
                if (vertical & enabled)
                    scrolled_y = (y + vertical) & 1023;
            }
        }
    }
    // Large maps are assembled from 32x32-tile screens, not stored as one
    // contiguous wide row. Screen selection and in-screen indexing are separate.
    const unsigned tile_x = scrolled_x / tile_size, tile_y = scrolled_y / tile_size;
    const unsigned map = ppu_registers[7 + background_layer], width = (map & 1) ? 64 : 32,
                   height = (map & 2) ? 64 : 32;
    const unsigned map_x = tile_x % width, map_y = tile_y % height;
    const unsigned screen = (map_x / 32) + (map_y / 32) * (width / 32);
    const unsigned tilemap_address =
        ((map & 0xfc) << 9) + screen * 2048 + ((map_y % 32) * 32 + (map_x % 32)) * 2;
    const unsigned entry =
        scene ? scene->presentation_tile(*this, background_layer, x, y, vram_word(tilemap_address))
              : vram_word(tilemap_address);
    unsigned tile_pixel_x = scrolled_x % tile_size, tile_pixel_y = scrolled_y % tile_size;
    if (entry & 0x4000)
        tile_pixel_x = tile_size - 1 - tile_pixel_x;
    if (entry & 0x8000)
        tile_pixel_y = tile_size - 1 - tile_pixel_y;
    unsigned tile = ((entry & 1023) + (tile_pixel_x / 8) + (tile_pixel_y / 8) * 16) & 1023;
    const unsigned base =
        ((ppu_registers[0x0b + background_layer / 2] >> ((background_layer & 1) * 4)) & 15) * 8192;
    // SNES planar tiles store paired bitplanes sixteen bytes apart. A zero
    // color index is transparent before palette selection, even if CGRAM[0]
    // itself is a visible color used by the backdrop.
    const unsigned palette_number = (entry >> 10) & 7;
    const bool high = entry & 0x2000;
    int priority = 0;
    if (mode == 0) {
        constexpr int priorities[4][2] = {{7, 10}, {6, 9}, {1, 4}, {0, 3}};
        priority = priorities[background_layer][high];
    } else if (mode == 1) {
        constexpr int priorities[3][2] = {{6, 9}, {5, 8}, {0, 2}};
        priority = priorities[background_layer][high];
        if (background_layer == 2 && high && (ppu_registers[5] & 8))
            priority = 11;
    } else {
        constexpr int priorities[2][2] = {{2, 6}, {0, 4}};
        priority = priorities[background_layer][high];
    }
    const auto pixel = [&](unsigned color) -> PpuPixel {
        if (!color) return {};
        uint16_t rgb;
        unsigned palette_index = 256;
        if (depth == 8 && background_layer == 0 && (ppu_registers[0x30] & 1))
            rgb = ((color & 7) << 2) | ((palette_number & 1) << 1) | ((color & 0x38) << 4) |
                  ((palette_number & 2) << 5) | ((color & 0xc0) << 7) | ((palette_number & 4) << 10);
        else {
            palette_index = color + (depth == 8 ? 0 : palette_number * (1 << depth)) +
                            (mode == 0 ? background_layer * 32 : 0);
            rgb = palette(palette_index);
        }
        return {rgb, priority, background_layer, true, palette_index};
    };
    const unsigned row_address = base + tile * depth * 8 + (tile_pixel_y % 8) * 2;
    if (row_cache) {
        std::uint64_t decoded = 0;
        for (unsigned plane = 0; plane < depth; ++plane)
            decoded |= planar_lanes[video_ram[(row_address + (plane / 2) * 16 + (plane & 1)) & 0xffff]] << plane;
        for (unsigned col = 0; col < 8; ++col)
            row_cache->pixels[col] = pixel(unsigned(decoded >> (((entry & 0x4000) ? 7 - col : col) * 8)) & 255);
        row_cache->cell_x = cell_x;
        row_cache->y = y;
        row_cache->scene = scene;
        row_cache->native_ring = native_ring;
        row_cache->valid = true;
        return row_cache->pixels[lane];
    }
    unsigned color = 0;
    for (unsigned plane = 0; plane < depth; ++plane)
        color |= ((video_ram[(row_address + (plane / 2) * 16 + (plane & 1)) & 0xffff] >>
                   (7 - (tile_pixel_x % 8))) & 1) << plane;
    return pixel(color);
}

// Affine rendering keeps the hardware's fixed-point truncations in the
// intermediate products. Algebraically regrouping these expressions can move
// pixels because clearing the low bits is not distributive over addition.
PpuPixel SceneReadView::sample_mode7_pixel(unsigned background_layer, int x, unsigned y) const {
    if (background_layer > 1 || (background_layer == 1 && !(ppu_registers[0x33] & 0x40)))
        return {};
    const unsigned mosaic = (ppu_registers[6] >> 4) + 1;
    if (ppu_registers[6] & (1 << background_layer)) {
        x -= ((x % int(mosaic)) + int(mosaic)) % int(mosaic);
        y -= y % mosaic;
    }
    if (ppu_registers[0x1a] & 1)
        x = 255 - x;
    if (ppu_registers[0x1a] & 2)
        y = 255 - y;
    const int center_x = signed_13_bit(mode7_transform[4]), center_y = signed_13_bit(mode7_transform[5]);
    const int scroll_offset_x = signed_13_bit(mode7_scroll_offsets[0]) - center_x,
              scroll_offset_y = signed_13_bit(mode7_scroll_offsets[1]) - center_y;
    const auto clip = [](int n) { return (n & 0x2000) ? (n | ~1023) : (n & 1023); };
    const int transformed_x =
        ((mode7_transform[0] * clip(scroll_offset_x) & ~63) +
         (mode7_transform[1] * clip(scroll_offset_y) & ~63) + (mode7_transform[1] * int(y) & ~63) +
         mode7_transform[0] * int(x) + center_x * 256) >>
        8;
    const int transformed_y =
        ((mode7_transform[2] * clip(scroll_offset_x) & ~63) +
         (mode7_transform[3] * clip(scroll_offset_y) & ~63) + (mode7_transform[3] * int(y) & ~63) +
         mode7_transform[2] * int(x) + center_y * 256) >>
        8;
    const bool outside =
        transformed_x < 0 || transformed_x >= 1024 || transformed_y < 0 || transformed_y >= 1024;
    const unsigned repeat = ppu_registers[0x1a] >> 6;
    if (outside && repeat == 2)
        return {};
    const unsigned tile =
        (outside && repeat == 3)
            ? 0
            : video_ram[(((transformed_y & 1023) / 8 * 128 + (transformed_x & 1023) / 8) * 2) & 0xffff];
    unsigned color =
        video_ram[(tile * 128 + (transformed_y & 7) * 16 + (transformed_x & 7) * 2 + 1) & 0xffff];
    const int priority = background_layer == 1 ? ((color & 0x80) ? 4 : 0) : 2;
    if (background_layer == 1)
        color &= 0x7f;
    if (!color)
        return {};
    const bool direct = background_layer == 0 && (ppu_registers[0x30] & 1);
    const auto rgb = direct ? uint16_t(((color & 7) << 2) | ((color & 0x38) << 4) | ((color & 0xc0) << 7))
                            : palette(color);
    return {rgb, priority, background_layer, true, direct ? 256u : color};
}

// origin is the native-coordinate x represented by result[0]. OAM ordering,
// signed nine-bit x, scanline wrap, and hardware object/tile limits are kept
// separate from output clipping so the host viewport does not create sprites.
uint8_t SceneReadView::sample_sprite_pixels(unsigned y, std::span<PpuPixel> result, int origin) const {
    if (object_scene)
        if (const auto status = object_scene->try_native_sprite_pixels(*this, y, result, origin))
            return *status;
    constexpr unsigned sizes[8][2][2] = {{{8, 8}, {16, 16}},   {{8, 8}, {32, 32}},   {{8, 8}, {64, 64}},
                                         {{16, 16}, {32, 32}}, {{16, 16}, {64, 64}}, {{32, 32}, {64, 64}},
                                         {{16, 32}, {32, 64}}, {{16, 32}, {32, 32}}};
    constexpr int mode0_priorities[] = {2, 5, 8, 11}, mode1_priorities[] = {1, 3, 7, 10},
                  other_priorities[] = {1, 3, 5, 7};
    const unsigned size_mode = ppu_registers[1] >> 5;
    const unsigned first = (ppu_registers[3] & 0x80) ? ((oam_reload >> 2) & 127) : 0;
    unsigned count = 0, tiles = 0;
    uint8_t status = 0;
    for (unsigned n = 0; n < 128; ++n) {
        const unsigned object_index = (n + first) & 127, object_address = object_index * 4;
        const unsigned extra_attributes =
            (object_attributes[512 + object_index / 4] >> ((object_index & 3) * 2)) & 3;
        int x = object_attributes[object_address] | ((extra_attributes & 1) << 8);
        if (x >= 256)
            x -= 512;
        const unsigned width = sizes[size_mode][extra_attributes >> 1][0],
                       height = sizes[size_mode][extra_attributes >> 1][1];
        unsigned row = (y - object_attributes[object_address + 1]) & 255;
        if (row >= height)
            continue;
        if (++count > 32) {
            status |= 0x40;
            break;
        }
        // Fully offscreen OAM is also used to hide objects. Presentation does
        // not reveal these slots; it only completes native edge-crossing OBJs.
        if ((origin || result.size() != 256) && (x + int(width) <= 0 || x >= 256))
            continue;
        const unsigned attributes = object_attributes[object_address + 3], level = (attributes >> 4) & 3;
        const auto host = host_sprites && object_scene && width == 16 && height == 16
            ? object_scene->host_oam_part(x, object_attributes[object_address + 1],
                                          object_attributes[object_address + 2], attributes,
                                          bool(extra_attributes >> 1), object_index)
            : std::nullopt;
        const unsigned palette_number = host ? host->palette : (attributes >> 1) & 7;
        const unsigned host_row = row;
        const unsigned mode = ppu_registers[5] & 7;
        const int priority = (mode == 0   ? mode0_priorities
                              : mode == 1 ? mode1_priorities
                                          : other_priorities)[level];
        if (attributes & 0x80)
            row = height - 1 - row;
        const unsigned base = (ppu_registers[1] & 7) * 16384 +
                              ((attributes & 1) ? (((ppu_registers[1] >> 3) & 3) + 1) * 8192 : 0);
        for (unsigned col = 0; col < width; ++col) {
            const int px = x + int(col);
            if (!(col & 7) && px > -8 && px < 256 && ++tiles > 34) {
                status |= 0x80;
                break;
            }
            const int output_x = px - origin;
            if (output_x < 0 || output_x >= int(result.size()))
                continue;
            unsigned color = 0;
            if (host) {
                // Host parts already contain the authored mirror and surface
                // treatment; apply neither a second time during composition.
                color = host->indices[host_row * 16 + col];
            } else {
                const unsigned sprite_pixel_x = (attributes & 0x40) ? width - 1 - col : col;
                const unsigned tile = ((object_attributes[object_address + 2] & 0xf0) + ((row / 8) * 16)) & 0xf0;
                const unsigned tile_index =
                    tile | ((object_attributes[object_address + 2] + sprite_pixel_x / 8) & 15);
                const unsigned plane_address = base + tile_index * 32 + (row & 7) * 2;
                for (unsigned plane = 0; plane < 4; ++plane)
                    color |= ((video_ram[(plane_address + (plane / 2) * 16 + (plane & 1)) & 0xffff] >>
                               (7 - (sprite_pixel_x & 7))) & 1) << plane;
            }
            // OAM order resolves overlap before BG priority comparison.
            if (color && result[output_x].priority < 0)
                result[output_x] = {palette(128 + palette_number * 16 + color), priority, 4,
                                    palette_number >= 4, 128 + palette_number * 16 + color};
        }
    }
    return status;
}

// Keep composition next to its pure samplers so optimizing builds can inline
// their pixel hot paths. Scene state still belongs only to GameSceneRenderer.
// Resolve main/subscreen winners first, then apply window clipping, color
// arithmetic, and brightness. Presentation policy can choose which scenery
// to sample, but it never changes these PPU registers or native composition.
template <bool IncludeReference>
GameSceneRenderer::CompositePixel GameSceneRenderer::compose_pixel(
    const SceneReadView &view, int x, unsigned y, const Pixel &object, bool margin) const {
    constexpr bool include_reference = IncludeReference;
    const bool outside_native = x < 0 || x >= 256;
    const bool outside_world =
        margin && presentation_world_map_ && (x < presentation_clip_left_ || x >= presentation_clip_right_);
    Pixel main_screen{outside_world ? uint16_t(0) : view.palette(0), -1, 5, true, 0},
        sub_screen{view.fixed_color, -1, 5, true};
    // The intro's static is added to BG1 through subscreen color math. Outside
    // the authored card, provide black BG1 coverage so that same animated BG2
    // contribution remains visible without repeating artwork or title text.
    if (margin && outside_native && presentation_intro_static_)
        main_screen = {0, -1, 0, true, 0};
    Pixel reference_main = main_screen, reference_sub = sub_screen;
    if (include_reference) {
        if (!outside_world && !(margin && outside_native && presentation_intro_static_))
            reference_main.color = presentation_reference_palette_[0];
        reference_sub.color = presentation_reference_fixed_;
    }
    // Windows remain anchored to the native picture. Extending their edge
    // membership preserves full-screen fades and clips in the extra picture.
    const unsigned window_x = unsigned(std::clamp(x, 0, 255));
    for (unsigned layer = 0; layer < 5; ++layer) {
        // Disabled layers cannot contribute to either the picture or its
        // flash-safe reference. Avoid tile/map decoding for those layers on
        // every native and widescreen pixel. Test both screens: a sub-screen
        // layer can still contribute through color math.
        if (!((view.ppu_registers[0x2c] | view.ppu_registers[0x2d]) & (1u << layer)))
            continue;
        const bool scenery = presentation_layer_mask_ & (1 << layer);
        const bool screen_overlay = margin && (presentation_screen_overlay_layer_ & (1u << layer));
        if (margin && ((outside_native && !scenery && !screen_overlay) ||
                       (outside_world && scenery && !screen_overlay)))
            continue;
        // The Japanese logo's red field reaches the authored picture edges.
        // Extend those BG edge samples only; repeating tilemaps would duplicate
        // logo letters/copyright, and repeating OBJ would duplicate sprites.
        const bool psi = margin && (presentation_psi_display_layer_ & (1u << layer));
        // PSI frame maps contain one authored 256-pixel animation. Map that
        // canvas once across the display, avoiding a repeated/cut-off copy at
        // each side. Backgrounds, enemy sprites and UI keep their coordinates.
        int sample_x = margin && outside_native && presentation_jp_title_ && layer < 2
                           ? std::clamp(x, 0, 255)
                           : x + ((margin && scenery) ? presentation_shift_x_ : 0);
        if (screen_overlay) {
            // The snapshot iris and lightning contain one screen-sized page.
            // Stretch that page once; it stays centered even in a narrow room
            // where the presentation camera shifts or scenery has side borders.
            const int output_x = x + int(presentation_width_ - 256) / 2;
            sample_x = output_x * 256 / int(presentation_width_) -
                       int(view.background_scroll_x[layer]);
        }
        if (psi) {
            const int scroll = int((view.background_scroll_x[layer] + 512) & 1023) - 512;
            const int anchor = 128 - scroll, numerator = (x - anchor) * 256;
            const int source_x =
                128 + (numerator < 0 ? numerator - int(presentation_width_) + 1 : numerator) /
                          int(presentation_width_);
            // Anchor single-target effects at the original enemy position.
            // Outside the authored animation page is transparent, not a repeat.
            if (source_x < 0 || source_x >= 256)
                continue;
            sample_x = source_x - scroll;
        }
        const Pixel candidate = layer == 4 ? object
                                           : view.sample_background_pixel(layer, sample_x, y + 1,
                                                                          margin && scenery ? this : nullptr);
        if (candidate.priority < 0)
            continue;
        const bool masked = view.layer_window_contains(layer, window_x);
        if ((view.ppu_registers[0x2c] & (1 << layer)) &&
            !((view.ppu_registers[0x2e] & (1 << layer)) && masked) &&
            candidate.priority > main_screen.priority)
            main_screen = candidate;
        if ((view.ppu_registers[0x2d] & (1 << layer)) &&
            !((view.ppu_registers[0x2f] & (1 << layer)) && masked) &&
            candidate.priority > sub_screen.priority)
            sub_screen = candidate;
        const bool psi_color = (presentation_psi_layer_ & (1u << layer)) &&
                               candidate.palette_index >= presentation_psi_palette_first_ &&
                               candidate.palette_index <= presentation_psi_palette_last_;
        if (include_reference && !(presentation_effect_layers_ & (1u << layer)) && !psi_color) {
            auto clean = candidate;
            if (clean.palette_index < 256)
                clean.color = presentation_reference_palette_[clean.palette_index];
            if ((view.ppu_registers[0x2c] & (1 << layer)) &&
                !((view.ppu_registers[0x2e] & (1 << layer)) && masked) &&
                clean.priority > reference_main.priority)
                reference_main = clean;
            if ((view.ppu_registers[0x2d] & (1 << layer)) &&
                !((view.ppu_registers[0x2f] & (1 << layer)) && masked) &&
                clean.priority > reference_sub.priority)
                reference_sub = clean;
        }
    }
    const bool inside = view.layer_window_contains(5, window_x);
    const auto affected = [inside](unsigned setting) {
        return setting == 3 || (setting == 1 && !inside) || (setting == 2 && inside);
    };
    // Run the same window/color-math/brightness arithmetic for both pictures.
    // The alternate winners and palette live only in host presentation state.
    const auto finish = [&](const Pixel &main_screen, const Pixel &sub_screen, uint8_t cgwsel,
                            uint8_t cgadsub, uint16_t fixed) {
        const bool clipped = affected(cgwsel >> 6);
        unsigned color = clipped ? 0 : main_screen.color;
        // Color math works on independent five-bit channels. Saturate only after
        // the optional halve operation so bright addition retains its expected
        // half-intensity result; backdrop outside a clamped region stays black.
        if (!(outside_world && main_screen.layer == 5) && !affected((cgwsel >> 4) & 3) && main_screen.math &&
            (cgadsub & (1 << main_screen.layer))) {
            const unsigned other = (cgwsel & 2) ? sub_screen.color : fixed;
            const bool half = (cgadsub & 0x40) && !clipped && (!(cgwsel & 2) || sub_screen.priority >= 0);
            unsigned mixed = 0;
            for (unsigned shift = 0; shift < 15; shift += 5) {
                const int a = (color >> shift) & 31, b = (other >> shift) & 31;
                int c = (cgadsub & 0x80) ? std::max(0, a - b) : (a + b);
                if (half)
                    c /= 2;
                mixed |= unsigned(std::min(31, c)) << shift;
            }
            color = mixed;
        }
        const unsigned brightness = view.ppu_registers[0] & 15;
        const auto component = [brightness](unsigned value) {
            const auto scaled = (value * brightness + 7) / 15;
            return (scaled << 3) | (scaled >> 2);
        };
        return 0xff000000 | (component(color & 31) << 16) | (component((color >> 5) & 31) << 8) |
               component((color >> 10) & 31);
    };
    const auto result =
        finish(main_screen, sub_screen, view.ppu_registers[0x30], view.ppu_registers[0x31], view.fixed_color);
    const auto reference =
        include_reference ? finish(reference_main, reference_sub, presentation_reference_cgwsel_,
                                   presentation_reference_cgadsub_, presentation_reference_fixed_)
                          : 0;
    return {result, reference};
}

uint32_t GameSceneRenderer::compose_presentation_pixel(const SceneReadView &view, int x, unsigned y,
                                                       const Pixel &object, bool margin) {
    const auto pixel = presentation_effects_enabled_ ? compose_pixel<true>(view, x, y, object, margin)
                                                     : compose_pixel<false>(view, x, y, object, margin);
    if (presentation_effects_enabled_) {
        const unsigned output_x = unsigned(x + int((presentation_width_ - 256) / 2));
        const auto index = std::size_t(y) * presentation_width_ + output_x;
        presentation_effect_reference_[index] = pixel.reference;
        presentation_effect_mask_[index] = pixel.actual != pixel.reference;
    }
    return pixel.actual;
}

// Always produce the canonical 256-pixel scanline first. Only this native
// sampling pass commits sprite overflow; scene rendering consumes const views.
void SnesBus::render_scanline(unsigned y) {
    BackgroundTileRows rows;
    auto view = scene_view();
    view.tile_rows = &rows;
    scene_renderer_.begin_scanline(view, y);
    if (ppu_registers_[0] & 0x80) {
        std::fill_n(native_framebuffer.begin() + y * 256, 256, 0xff000000);
    } else {
        std::array<PpuPixel, 256> objects{};
        if ((ppu_registers_[0x2c] | ppu_registers_[0x2d]) & 16)
            sprite_status_ |= view.sample_sprite_pixels(y, objects, 0);
        for (unsigned x = 0; x < 256; ++x)
            native_framebuffer[y * 256 + x] =
                scene_renderer_.compose_presentation_pixel(view, x, y, objects[x], false);
    }
    scene_renderer_.render_presentation_margins(view, y);
    // Source capture changes sampling policy temporarily; it has its own tile cache.
    view.tile_rows = nullptr;
    scene_renderer_.capture_direct_scanline(view, y);
}

} // namespace eb
