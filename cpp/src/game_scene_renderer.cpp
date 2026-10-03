#include "eb/game_scene_renderer.hpp"
#include "eb/overworld_sprite_bridge.hpp"
#include "eb/overworld_sprite_runtime.hpp"
#include "eb/render_distance.hpp"
#include "eb/native/overlay_sprites.hpp"
#include "eb/native/custom_sprites.hpp"
#include "generated_profile.hpp"

#include <algorithm>
#include <cstdlib>
#include <stdexcept>

#include "snes_ppu_constants.hpp"

namespace eb {
namespace {
bool intro_interference(const SceneReadView &view) {
    // GAS_STATION_LOAD mixes its procedural BG2 static into the BG1 card.
    // UNKNOWN_C0F21E later disables that subscreen/color math for the still card.
    return (view.ppu_registers[5] & 7) == 3 && view.ppu_registers[7] == 0x78 &&
           view.ppu_registers[8] == 0x7c && (view.ppu_registers[0x2c] & 1) &&
           (view.ppu_registers[0x2d] & 2) && (view.ppu_registers[0x30] & 2) &&
           (view.ppu_registers[0x31] & 1);
}
// Bounded presentation-only counterpart of the source's DECOMP routine. The
// two gas-station palettes are imported data, never embedded retail colors.
// Decode exactly one 512-byte palette; malformed input simply disables this
// optional reference and cannot write game memory or walk outside the image.
bool decode_presentation_palette(std::span<const uint8_t> rom, unsigned start,
                                 std::array<uint16_t, 256> &palette) {
    std::array<uint8_t, 512> bytes{};
    std::size_t input = start, output = 0;
    bool valid = true;
    const auto next = [&]() -> unsigned {
        if (input >= rom.size()) {
            valid = false;
            return 0;
        }
        return rom[input++];
    };
    for (;;) {
        const unsigned header = next();
        if (!valid)
            return false;
        if (header == 255)
            break;
        unsigned command = header >> 5, count = (header & 31) + 1;
        if (command == 7) {
            command = (header >> 2) & 7;
            count = (((header & 3) << 8) | next()) + 1;
        }
        const unsigned length = count * (command == 2 ? 2 : 1);
        if (!valid || length > bytes.size() - output)
            return false;
        if (!command) {
            for (unsigned i = 0; i < count; ++i)
                bytes[output++] = uint8_t(next());
        } else if (command <= 3) {
            const unsigned first = next(), second = command == 2 ? next() : 0;
            for (unsigned i = 0; i < count; ++i) {
                bytes[output++] = uint8_t(first + (command == 3 ? i : 0));
                if (command == 2)
                    bytes[output++] = uint8_t(second);
            }
        } else {
            int source = int(next() << 8);
            source |= int(next());
            for (unsigned i = 0; i < count; ++i) {
                if (source < 0 || std::size_t(source) >= output)
                    return false;
                unsigned value = bytes[unsigned(source)];
                if (command == 5) {
                    unsigned reversed = 0;
                    for (unsigned bit = 0; bit < 8; ++bit) {
                        reversed = (reversed << 1) | (value & 1);
                        value >>= 1;
                    }
                    value = reversed;
                }
                bytes[output++] = uint8_t(value);
                source += command == 6 ? -1 : 1;
            }
        }
        if (!valid)
            return false;
    }
    if (output != bytes.size())
        return false;
    for (unsigned index = 0; index < palette.size(); ++index)
        palette[index] = (bytes[index * 2] | (bytes[index * 2 + 1] << 8)) & 0x7fff;
    return true;
}
} // namespace

// Changing the host viewport allocates only a presentation buffer. Seed its
// center from the last native frame to avoid stale pixels before the next
// scanline; no game camera, PPU register, or emulated clock is adjusted here.
void GameSceneRenderer::set_presentation_width(const SceneReadView &view, unsigned width) {
    if (width < 256 || width > 1024 || (width & 1))
        throw std::invalid_argument("presentation width must be even and between 256 and 1024");
    requested_presentation_width_ = width;
    resize_presentation_width(view, presentation_frame_aspect_ ? 256 : width);
}

void GameSceneRenderer::resize_presentation_width(const SceneReadView &view, unsigned width) {
    if (width == presentation_width_)
        return;
    presentation_width_ = width;
    presentation_boundary_frame_ = UINT64_MAX;
    presentation_camera_ = {};
    presentation_framebuffer_.assign(width == 256 ? 0 : width * 224, 0xff000000);
    if (width > 256)
        for (unsigned y = 0; y < 224; ++y)
            std::copy_n(view.native_framebuffer.begin() + y * 256, 256,
                        presentation_framebuffer_.begin() + y * width + (width - 256) / 2);
    if (presentation_effects_enabled_) {
        presentation_effect_mask_.assign(width * 224, 0);
        const auto pixels = presentation_pixels(view.native_framebuffer);
        presentation_effect_reference_.assign(pixels.begin(), pixels.end());
    }
}

std::span<const uint32_t>
GameSceneRenderer::presentation_pixels(std::span<const uint32_t, 256 * 224> native) const {
    return presentation_width_ == 256 ? std::span<const uint32_t>(native)
                                      : std::span<const uint32_t>(presentation_framebuffer_);
}

double GameSceneRenderer::presentation_fixed_aspect() const { return presentation_frame_aspect_; }

void GameSceneRenderer::set_presentation_effects_enabled(const SceneReadView &view, bool enabled) {
    if (presentation_effects_enabled_ == enabled)
        return;
    presentation_effects_enabled_ = enabled;
    if (enabled) {
        if (!presentation_gas_palettes_loaded_) {
            presentation_gas_palettes_loaded_ = true;
            presentation_gas_palettes_valid_ =
                decode_presentation_palette(view.cartridge_rom,
                                            view.source_profile.rom_gas_station_palettes.normal,
                                            presentation_gas_palettes_[0]) &&
                decode_presentation_palette(view.cartridge_rom,
                                            view.source_profile.rom_gas_station_palettes.alternate,
                                            presentation_gas_palettes_[1]);
        }
        presentation_effect_mask_.assign(presentation_width_ * 224, 0);
        const auto pixels = presentation_pixels(view.native_framebuffer);
        presentation_effect_reference_.assign(pixels.begin(), pixels.end());
    } else {
        presentation_effect_mask_.clear();
        presentation_effect_reference_.clear();
    }
}

void GameSceneRenderer::prepare_presentation_objects(const SceneReadView &view) {
    presentation_objects_frame_ = view.completed_frames;
    presentation_objects_.clear();
    const auto &source = view.source_profile;
    const auto ram = [&view](unsigned a) {
        return unsigned(view.work_ram[a]) | (unsigned(view.work_ram[a + 1]) << 8);
    };
    struct Entity {
        unsigned slot, priority;
        int depth;
    };
    std::vector<Entity> entities;
    std::array<bool, 30> visited{};
    for (unsigned slot = ram(source.wram_first_entity); slot < 60 && !(slot & 1) && !visited[slot / 2];
         slot = ram(source.wram_entity_next + slot)) {
        visited[slot / 2] = true;
        const unsigned bank = ram(source.wram_entity_spritemap_pointers.high + slot);
        if ((bank & (view.native_sprites ? 0x8000 : 0xc000)) ||
            (ram(source.wram_entity_animation_frame + slot) & 0x8000))
            continue;
        const unsigned callback = ram(source.wram_entity_draw_callback + slot);
        if (callback != source.entity_draw_callbacks.screen_space &&
            callback != source.entity_draw_callbacks.world_space)
            continue;
        unsigned priority = ram(source.wram_entity_draw_priority + slot);
        if (priority & 0x8000) {
            const unsigned owner = (priority & 0x3f) * 2;
            if (owner >= 60)
                continue;
            priority = ram(source.wram_entity_draw_priority + owner);
        }
        if (priority > 3)
            continue;
        entities.push_back({slot, priority, int16_t(ram(source.wram_entity_world_coordinates.y + slot))});
    }
    // The source queues priorities 0..3, sorting ordinary world actors by
    // descending world Y within priority 1. No allocation or callback executes.
    std::stable_sort(entities.begin(), entities.end(), [](const Entity &a, const Entity &b) {
        return a.priority != b.priority ? a.priority < b.priority : a.priority == 1 && a.depth > b.depth;
    });
    for (const auto &entity : entities)
        append_presentation_entity(view, entity.slot, presentation_objects_);
}

std::optional<std::uint32_t> GameSceneRenderer::append_presentation_entity(
    const SceneReadView &view, unsigned slot, std::vector<PresentationObject> &objects) {
    const auto &source = view.source_profile;
    const auto ram = [&view](unsigned a) {
        return unsigned(view.work_ram[a]) | (unsigned(view.work_ram[a + 1]) << 8);
    };
    // Inspection must not acknowledge hardware ports or touch the open bus.
    const auto peek = [&view](uint32_t address, int &value) {
        if (address >= 0x7e0000 && address < 0x800000) {
            value = view.work_ram[address - 0x7e0000];
            return true;
        }
        if (address >= 0xc00000 && address < 0xf00000 && address - 0xc00000 < view.cartridge_rom.size()) {
            value = view.cartridge_rom[address - 0xc00000];
            return true;
        }
        return false;
    };
    if (view.native_sprites &&
        ram(source.wram_entity_draw_callback + slot) == source.entity_draw_callbacks.world_space &&
        !view.native_sprites->custom_descriptor(slot))
        throw std::runtime_error("Unmarked native actor entered source custom presentation");
    if (view.native_sprites &&
        ram(source.wram_entity_draw_callback + slot) == source.entity_draw_callbacks.screen_space) {
        const auto actor = view.native_sprites->snapshot(slot);
        if (!actor || !actor->image)
            return {};
        const int x = std::int16_t(ram(source.wram_entity_screen_coordinates.x + slot));
        const int y = std::int16_t(ram(source.wram_entity_screen_coordinates.y + slot));
        const unsigned surface = ram(source.wram_entity_surface_flags + slot);
        for (unsigned part = 0; part < actor->image->parts.size(); ++part) {
            const auto &piece = actor->image->parts[part];
            const unsigned level = surface & (piece.upper ? 2 : 1) ? 0x20 : 0x30;
            PresentationObject object{std::int16_t(x + piece.left), std::int16_t(y + piece.top - 1), 0,
                std::uint8_t(level | (actor->creation.sprite.palette << 1)), false,
                (std::uint64_t{1} << 63) | actor->id, x, y - 1};
            object.host_image = actor->image; object.host_part = part;
            object.host_palette = actor->creation.sprite.palette; object.native_owned = true;
            objects.push_back(std::move(object));
        }
        // No source address represents a native command, including the
        // read-only far-edge preparation path before a source frame upload.
        return {};
    }
    const unsigned bank = ram(source.wram_entity_spritemap_pointers.high + slot) & 255;
    unsigned pointer = ram(source.wram_entity_spritemap_pointers.low + slot);
    const bool ordinary =
        ram(source.wram_entity_draw_callback + slot) == source.entity_draw_callbacks.screen_space;
    if (ordinary && (ram(source.wram_entity_displayed_sprites + slot) & 1))
        pointer = (pointer + ram(source.wram_entity_spritemap_sizes + slot)) & 0xffff;
    const int x = int16_t(ram(
        (ordinary ? source.wram_entity_screen_coordinates.x : source.wram_entity_world_coordinates.x) +
        slot));
    const int y = int16_t(ram(
        (ordinary ? source.wram_entity_screen_coordinates.y : source.wram_entity_world_coordinates.y) +
        slot));
    if (!ordinary) {
        const unsigned frame = ram(source.wram_entity_animation_frame + slot);
        int lo{}, hi{};
        if (!peek((bank << 16) | ((pointer + frame * 2) & 0xffff), lo) ||
            !peek((bank << 16) | ((pointer + frame * 2 + 1) & 0xffff), hi))
            return {};
        pointer = unsigned(lo) | (unsigned(hi) << 8);
    }
    const auto map_address = (bank << 16) | pointer;
    const unsigned surface = ram(source.wram_entity_surface_flags + slot),
                   upper = ram(source.wram_entity_body_divides + slot) >> 8;
    const auto first_part = objects.size();
    bool complete = false;
    unsigned part = 0;
    // Spritemaps may chain through a $80 Y sentinel. Bound both chain walks
    // and output so corrupt/stale descriptors can never stall a frame.
    for (unsigned step = 0; step < 128 && objects.size() < 3840; ++step) {
        std::array<int, 5> entry{};
        bool valid = true;
        for (unsigned i = 0; i < 5; ++i)
            valid &= peek((bank << 16) | ((pointer + i) & 0xffff), entry[i]);
        if (!valid)
            break;
        if (entry[0] == 0x80) {
            pointer = unsigned(entry[1]) | (unsigned(entry[2]) << 8);
            continue;
        }
        unsigned attributes = entry[2];
        if (ordinary)
            attributes = (attributes & 0xcf) | ((surface & (part < upper ? 2 : 1)) ? 0x20 : 0x30);
        objects.push_back({x + int8_t(entry[3]), y + int8_t(entry[0]) - 1,
                                         uint8_t(entry[1]), uint8_t(attributes), bool(entry[4] & 1),
                                         (std::uint64_t(1) << 32) | (ram(source.wram_entity_script_ids + slot) << 8) | slot,
                                         x, y - 1});
        ++part;
        if (entry[4] & 0x80) {
            complete = true;
            break;
        }
        pointer = (pointer + 5) & 0xffff;
    }
    if (ordinary && view.host_sprites) {
        const auto &pose = view.host_sprites->pose(slot);
        if (pose && pose->image) {
            const bool display_mirror = ram(source.wram_entity_displayed_sprites + slot) & 1;
            // Replacements may retain their creation geometry. Never crop
            // or stretch a differently shaped image into that descriptor.
            constexpr unsigned sizes[8][2][2] = {
                {{8, 8}, {16, 16}}, {{8, 8}, {32, 32}}, {{8, 8}, {64, 64}},
                {{16, 16}, {32, 32}}, {{16, 16}, {64, 64}}, {{32, 32}, {64, 64}},
                {{16, 32}, {32, 64}}, {{16, 32}, {32, 32}}};
            const auto *shape = pose->image->layout ? &pose->image->layout->parts[display_mirror] : nullptr;
            bool matches = complete && (shape ? shape->size() : pose->image->parts.size()) == part;
            for (unsigned i = 0; matches && i < part; ++i) {
                const auto &object = objects[first_part + i];
                const int left = shape ? (*shape)[i].left : pose->image->parts[i].left;
                const int top = shape ? (*shape)[i].top : pose->image->parts[i].top;
                const auto &size = sizes[view.ppu_registers[1] >> 5][object.large];
                matches = size[0] == 16 && size[1] == 16 && object.x == x + left &&
                          object.y == y + top - 1;
            }
            if (matches) {
                for (unsigned i = 0; i < part; ++i) {
                    auto &object = objects[first_part + i];
                    object.host_image = pose->image;
                    object.host_part = i;
                    // Palette belongs to the displayed descriptor; an
                    // authored palette edit need not reload the artwork.
                    object.host_palette = (object.attributes >> 1) & 7;
                    object.host_generation = pose->generation;
                    object.host_orientation = display_mirror
                        ? native::SpriteOrientation::Mirrored : native::SpriteOrientation::Normal;
                    object.identity = (std::uint64_t(1) << 63) | pose->generation;
                }
            } else
                ++host_sprite_geometry_mismatches_;
        }
    }
    return map_address;
}

std::optional<GameSceneRenderer::HostObjectPart>
GameSceneRenderer::host_oam_part(int x, int y, std::uint8_t tile, std::uint8_t attributes, bool large,
                                unsigned oam_index) const {
    const auto matches = [&](const PresentationObject &object) {
        // C08CD5 can publish signed X -256..255 and Y -32..223. Exclude
        // offscreen host continuations which merely alias an OAM coordinate.
        return object.host_image && object.x >= -256 && object.x < 256 && object.y >= -32 && object.y < 224 &&
            ((unsigned(object.x) - unsigned(x)) & 511) == 0 &&
            ((unsigned(object.y) - unsigned(y)) & 255) == 0 && object.tile == tile &&
            object.attributes == attributes && object.large == large;
    };
    if (presentation_oam_indexed_) {
        if (oam_index >= presentation_oam_.size())
            return {};
        const auto &object = presentation_oam_[oam_index];
        if (object && matches(*object))
            return HostObjectPart{object->host_image->parts[object->host_part].indices, object->host_palette,
                                  object->host_generation};
        return {};
    }
    for (const auto &object : presentation_objects_) {
        if (matches(object))
            return HostObjectPart{object.host_image->parts[object.host_part].indices, object.host_palette,
                                  object.host_generation};
    }
    return {};
}

void GameSceneRenderer::presentation_object_pixels(const SceneReadView &view, unsigned y,
                                                   std::span<Pixel> result, int origin) const {
    object_pixels(view, view.native_sprites && native_sprite_frame_ ? native_sprite_objects_ : presentation_objects_,
                  y, result, origin);
}

void GameSceneRenderer::object_pixels(const SceneReadView &view,
                                      std::span<const PresentationObject> objects, unsigned y,
                                      std::span<Pixel> result, int origin) const {
    constexpr unsigned sizes[8][2][2] = {{{8, 8}, {16, 16}},   {{8, 8}, {32, 32}},   {{8, 8}, {64, 64}},
                                         {{16, 16}, {32, 32}}, {{16, 16}, {64, 64}}, {{32, 32}, {64, 64}},
                                         {{16, 32}, {32, 64}}, {{16, 32}, {32, 32}}};
    constexpr int priorities[3][4] = {{2, 5, 8, 11}, {1, 3, 7, 10}, {1, 3, 5, 7}};
    for (const auto &object : objects) {
        const unsigned width = object.fragment_pixels ? object.fragment_pixels->width :
                                   object.native_owned ? 16 : sizes[view.ppu_registers[1] >> 5][object.large][0],
                       height = object.fragment_pixels ? object.fragment_pixels->height :
                                    object.native_owned ? 16 : sizes[view.ppu_registers[1] >> 5][object.large][1];
        const bool fragment = view.native_sprites && object.fragment_pixels;
        const bool host = (object.native_owned ? bool(view.native_sprites) : bool(view.host_sprites)) &&
                          object.host_image && width == 16 && height == 16;
        int row = int(y) - object.y;
        if (row < 0 || row >= int(height))
            continue;
        const unsigned attr = object.attributes,
                       pal = host ? object.host_palette : (attr >> 1) & 7,
                       mode = view.ppu_registers[5] & 7;
        const int priority = priorities[std::min(mode, 2u)][(attr >> 4) & 3];
        if (!host && !fragment && (attr & 0x80))
            row = int(height) - 1 - row;
        const unsigned base = (view.ppu_registers[1] & 7) * 16384 +
                              ((attr & 1) ? (((view.ppu_registers[1] >> 3) & 3) + 1) * 8192 : 0);
        for (unsigned col = 0; col < width; ++col) {
            if (object.stationary_prepared && object.x + int(col) >= 0 && object.x + int(col) < 256)
                continue;
            const int out = object.x + int(col) - origin;
            if (out < 0 || out >= int(result.size()) || result[out].priority >= 0)
                continue;
            unsigned color = 0;
            if (fragment)
                color = object.fragment_pixels->indices[unsigned(row) * width + col];
            else if (host)
                color = object.host_image->parts[object.host_part].indices[unsigned(row) * 16 + col];
            else {
                const unsigned ix = (attr & 0x40) ? width - 1 - col : col;
                const unsigned tile =
                    (((object.tile & 0xf0) + unsigned(row / 8) * 16) & 0xf0) | ((object.tile + ix / 8) & 15);
                const unsigned address = base + tile * 32 + unsigned(row & 7) * 2;
                for (unsigned plane = 0; plane < 4; ++plane)
                    color |=
                        ((view.video_ram[(address + (plane / 2) * 16 + (plane & 1)) & 0xffff] >> (7 - (ix & 7))) &
                         1)
                        << plane;
            }
            if (color)
                result[out] = {view.palette(128 + pal * 16 + color), priority, 4, pal >= 4,
                               128 + pal * 16 + color};
        }
    }
}

void GameSceneRenderer::prepare_presentation_scene(const SceneReadView &view) {
    // In the US source, ordinary window/HUD tiles use BG3/BG4. The two
    // generated battle backgrounds can instead target BG2 or BG3; honor the
    // actual loaded_bg_data records rather than dropping that battle layer.
    const auto ram_word = [&view](unsigned address) {
        return unsigned(view.work_ram[address]) | (unsigned(view.work_ram[address + 1]) << 8);
    };
    // Address metadata is generated separately for US and JP. Scene probes
    // read that selected profile rather than assuming the English RAM layout.
    const auto &source = view.source_profile;
    // BATTLE_ROUTINE clears its mode flag before FADE_OUT completes. Keep the
    // last battle layout until it is black or replaced; never infer a new battle
    // from stale loaded-background records in an unrelated menu/world scene.
    const std::array<uint8_t, 7> layout{view.ppu_registers[5], view.ppu_registers[7],  view.ppu_registers[8],
                                        view.ppu_registers[9], view.ppu_registers[10], view.ppu_registers[11],
                                        view.ppu_registers[12]};
    if (ram_word(source.wram_battle_mode_flag)) {
        presentation_battle_scene_ = true;
        presentation_battle_layout_ = layout;
    } else if ((view.ppu_registers[0] & 0x80) || !(view.ppu_registers[0] & 15) ||
               layout != presentation_battle_layout_) {
        presentation_battle_scene_ = false;
    }
    presentation_psi_display_layer_ = 0;
    presentation_screen_overlay_layer_ = 0;
    if (!presentation_battle_scene_)
        for (unsigned slot = 0; slot < 30; ++slot) {
            const unsigned event = ram_word(source.wram_entity_script_ids + slot * 2);
            const unsigned phase = ram_word(source.wram_entity_script_variable0 + slot * 2);
            // EVENT_452 is also Photo Man's snapshot iris. C47B77 uploads
            // one 32x28 BG3 page for it and the Carpainter strike sequences.
            if ((event == source.lightning_scripts.franklin_badge_reflection && phase == 1) ||
                ((event == source.lightning_scripts.strike_event_705 ||
                  event == source.lightning_scripts.strike_event_706) &&
                 (phase == 2 || phase == 0 || phase == 10)))
                presentation_screen_overlay_layer_ = 4;
        }
    // Static full-screen art/text has no authored offscreen continuation.
    // In particular SHOW_TITLE_SCREEN's BG1 map ($58) must not repeat the
    // copyright line. Only identified scenery/animation layers extend.
    presentation_layer_mask_ = 0x10;
    presentation_intro_static_ = intro_interference(view);
    if (presentation_intro_static_)
        presentation_layer_mask_ |= 2; // Extend procedural BG2 only, keeping the BG1 card centered.
    if ((view.ppu_registers[5] & 7) == 7)
        presentation_layer_mask_ = 0x13; // affine scenery
    presentation_jp_title_ = false;
    for (unsigned slot = 0; slot < 30; ++slot)
        if (ram_word(source.wram_entity_script_ids + slot * 2) == source.file_select_script)
            presentation_layer_mask_ = 2; // FILE_SELECT_INIT: BG2 animation, centered BG3/OBJ
        else if (view.game_version == GameVersion::JP &&
                 ram_word(source.wram_entity_script_ids + slot * 2) >= source.title_script_first &&
                 ram_word(source.wram_entity_script_ids + slot * 2) <= source.title_script_last &&
                 (view.ppu_registers[5] & 7) == source.title_background_mode &&
                 view.ppu_registers[7] == source.title_background_maps.layer1 &&
                 view.ppu_registers[8] == source.title_background_maps.layer2) {
            presentation_jp_title_ = true;
            presentation_layer_mask_ = 0x13;
        }
    if (presentation_battle_scene_) {
        presentation_layer_mask_ = 0x10;
        for (unsigned record :
             {source.wram_battle_backgrounds.layer1, source.wram_battle_backgrounds.layer2}) {
            const unsigned target = view.work_ram[record], depth = view.work_ram[record + 1];
            if (target >= 1 && target <= 4 &&
                depth == background_color_depths[view.ppu_registers[5] & 7][target - 1])
                presentation_layer_mask_ |= 1u << (target - 1);
        }
        // SHOW_PSI_ANIMATION selects BG2 over two-bit backgrounds, BG1 over
        // four-bit backgrounds. All animations use this path, including those
        // without palette cycling. This is independent of flash filtering.
        if (view.work_ram[source.wram_psi_animation_state]) {
            presentation_psi_display_layer_ =
                view.work_ram[source.wram_battle_backgrounds.layer1 + 1] == 2 ? 2u : 1u;
            presentation_layer_mask_ |= presentation_psi_display_layer_;
        }
    }

    presentation_world_map_ = false;
    if ((view.ppu_registers[5] & 0x37) == 1 && view.ppu_registers[7] == 0x39 &&
        view.ppu_registers[8] == 0x59 && !presentation_battle_scene_ &&
        view.cartridge_rom.size() >= source.rom_map_tileset_palette_sectors + 2560) {
        // Align the source's full map position to the actual latched scroll;
        // a game tick may have prepared the following frame's position already.
        for (unsigned bg = 0; bg < 2; ++bg) {
            const int camera_x = int16_t(ram_word((bg ? source.wram_background_scroll.layer2_x
                                                      : source.wram_background_scroll.layer1_x))),
                      camera_y = int16_t(ram_word((bg ? source.wram_background_scroll.layer2_y
                                                      : source.wram_background_scroll.layer1_y)));
            presentation_world_x_[bg] =
                camera_x + ((int(view.background_scroll_x[bg]) - (camera_x & 1023) + 512) & 1023) - 512;
            presentation_world_y_[bg] =
                camera_y + ((int(view.background_scroll_y[bg]) - (camera_y & 1023) + 512) & 1023) - 512;
        }
        // Confirm the source map/arrangement interpretation against displayed
        // native tiles before applying it outside the viewport. These points
        // avoid the centered Lumine Hall message patch and ordinary text HUD.
        bool matches = true;
        for (unsigned y : {8u, 216u})
            for (unsigned x : {8u, 128u, 248u}) {
                const unsigned mx = ((x + view.background_scroll_x[0]) & 511) / 8,
                               my = ((y + view.background_scroll_y[0]) & 255) / 8;
                const auto actual = view.vram_word(0x7000 + (mx / 32) * 2048 + (my * 32 + (mx & 31)) * 2);
                const int wx = presentation_world_x_[0] + int(x), wy = presentation_world_y_[0] + int(y);
                const int tx = wx >= 0 ? wx / 8 : (wx - 7) / 8, ty = wy >= 0 ? wy / 8 : (wy - 7) / 8;
                matches &= actual == presentation_map_tile(view, tx, ty, 0);
            }
        presentation_world_map_ = matches;
        if (matches)
            presentation_layer_mask_ = 0x13;
    }
    if (presentation_world_map_)
        prepare_presentation_boundary(view);
    else {
        presentation_shift_x_ = 0;
        presentation_clip_left_ = -384;
        presentation_clip_right_ = 640;
        presentation_camera_ = {};
    }
    if (presentation_world_map_ && presentation_objects_frame_ != view.completed_frames) {
        if (presentation_objects_uploaded_) {
            presentation_objects_ = presentation_uploaded_objects_;
            presentation_oam_ = presentation_uploaded_oam_;
            presentation_oam_indexed_ = presentation_uploaded_oam_indexed_;
            host_artwork_revision_ = UINT64_MAX;
            presentation_objects_frame_ = view.completed_frames;
        } else
            prepare_presentation_objects(view); // Direct-register hardware fixtures.
    }
    if (!presentation_world_map_) {
        presentation_objects_.clear();
        presentation_oam_ = {};
        presentation_oam_indexed_ = false;
        presentation_objects_frame_ = UINT64_MAX;
    }

    presentation_lumine_phase_ = -1;
    // EVENT_353 -> C4880C builds both half-tile phases of the complete wall
    // message in BUFFER. C48A6D uploads 30 columns by eight rows to BG1 at
    // world tile (808,588), then increments that entity's VAR1. Detect the
    // phase actually in VRAM, since the DMA can lag behind the script tick.
    if ((view.ppu_registers[5] & 0x17) != 1 || view.ppu_registers[7] != 0x39 ||
        view.work_ram[source.wram_lumine_text_header] != 8 ||
        view.work_ram[source.wram_lumine_text_header + 1] != 30)
        return;
    for (unsigned slot = 0; slot < 30; ++slot) {
        const unsigned offset = slot * 2;
        if (ram_word(source.wram_entity_script_ids + offset) != source.lumine_text_script)
            continue;
        const unsigned limit = ram_word(source.wram_entity_script_variable0 + offset),
                       next = ram_word(source.wram_entity_script_variable1 + offset);
        if (!limit || limit > 1400 || next > limit + 1)
            continue;
        for (int delta : {-1, 0, -2, -3}) {
            const int phase = int(next) + delta;
            if (phase < 0 || unsigned(phase) > limit)
                continue;
            const unsigned source_address = ((phase & 1) ? source.wram_lumine_text_maps.odd_columns
                                                         : source.wram_lumine_text_maps.even_columns) +
                                            unsigned(phase / 2) * 16;
            bool match = true;
            for (unsigned column = 0; column < 30 && match; ++column)
                for (unsigned row = 0; row < 8; ++row) {
                    const unsigned mx = (40 + column) & 63;
                    const unsigned actual =
                        view.vram_word(0x7000 + (mx / 32) * 2048 + ((12 + row) * 32 + (mx & 31)) * 2);
                    const unsigned expected = ram_word(source_address + column * 16 + row * 2);
                    if (expected < 0x0c10 || expected > 0x0c1f || actual != expected) {
                        match = false;
                        break;
                    }
                }
            if (match) {
                presentation_lumine_phase_ = phase;
                presentation_lumine_columns_ = limit / 2 + 30;
                presentation_layer_mask_ |= 1;
                return;
            }
        }
    }
}

// A wider view may fit within a connected run of authored sectors even when
// the native camera is centered near an edge. Shift only its rendered scenery;
// narrow runs receive black margins instead of exposing neighboring map data.
void GameSceneRenderer::prepare_presentation_boundary(const SceneReadView &view) {
    const auto reset = [&] {
        presentation_shift_x_ = 0;
        presentation_clip_left_ = -384;
        presentation_clip_right_ = 640;
        presentation_camera_ = {};
        presentation_boundary_frame_ = view.completed_frames;
    };
    // Window effects use authored screen coordinates, including scanline-varying
    // apertures in the title demo. Moving the world independently would move
    // its subject out of the opening. Keep the source framing for both layer
    // masks and color windows; map sampling still handles out-of-area tiles.
    const auto &regs = view.ppu_registers;
    if (presentation_width_ == 256 || (regs[0] & 0x80) || !(regs[0] & 15) || (regs[0x30] & 0xf0)) {
        reset();
        return;
    }
    const unsigned masked_layers = (regs[0x2c] & regs[0x2e]) | (regs[0x2d] & regs[0x2f]);
    for (unsigned layer = 0; layer < 5; ++layer) {
        const unsigned selection = (regs[0x23 + layer / 2] >> ((layer & 1) * 4)) & 15;
        if ((masked_layers & (1u << layer)) && (selection & 0x0a)) {
            reset();
            return;
        }
    }
    // Window eligibility can change mid-frame. Honor the authored aperture
    // immediately, but advance ordinary camera history only once per frame.
    if (presentation_boundary_frame_ == view.completed_frames)
        return;
    const auto previous_frame = presentation_boundary_frame_;
    presentation_boundary_frame_ = view.completed_frames;
    presentation_clip_left_ = -384;
    presentation_clip_right_ = 640;
    // The original camera itself is not clamped. This optional display policy
    // derives a horizontal region from the very same sector IDs that LOAD_MAP
    // uses to hide unrelated maps. Anchor at the native viewport center and
    // hold the result throughout the frame, avoiding scanline-shaped warping.
    const int camera = presentation_world_x_[0];
    const int center_x = camera + 128, center_y = presentation_world_y_[0] + 112;
    if (center_x < 0 || center_x >= 8192 || center_y < 0 || center_y >= 10240) {
        reset();
        return;
    }
    const unsigned row = unsigned(center_y) / 128,
                   address = view.source_profile.wram_loaded_map_tile_combination;
    const unsigned combo = view.work_ram[address] | (view.work_ram[address + 1] << 8);
    const auto valid = [&](int column) {
        return column >= 0 && column < 32 &&
               (view.cartridge_rom[view.source_profile.rom_map_tileset_palette_sectors + row * 32 +
                                   unsigned(column)] >>
                3) == combo;
    };
    int left = center_x / 256, right = left + 1;
    if (!valid(left)) {
        reset();
        return;
    }
    while (valid(left - 1))
        --left;
    while (valid(right))
        ++right;
    left *= 256;
    right *= 256;
    auto &history = presentation_camera_;
    const bool fresh = !history.valid || history.combination != combo ||
                       previous_frame == UINT64_MAX || view.completed_frames != previous_frame + 1 ||
                       std::abs(camera - history.x) > 64 ||
                       std::abs(presentation_world_y_[0] - history.y) > 64 ||
                       left >= history.right || right <= history.left;
    if (fresh) {
        history = {true, combo, camera, presentation_world_y_[0], left, right, left, right, 0};
    } else if (left == history.left && right == history.right) {
        history.pending_frames = 0;
    } else {
        // A sector seam is only a coarse map-storage boundary. Require eight
        // consecutive logical frames in its new span before reframing, so a
        // player straddling the seam cannot keep reversing the camera target.
        if (left != history.pending_left || right != history.pending_right) {
            history.pending_left = left;
            history.pending_right = right;
            history.pending_frames = 0;
        }
        if (++history.pending_frames >= 8) {
            history.left = left;
            history.right = right;
            history.pending_frames = 0;
        }
    }
    history.x = camera;
    history.y = presentation_world_y_[0];
    const int width = int(presentation_width_), margin = (width - 256) / 2;
    const int available = history.right - history.left;
    // origin is the displayed world's left edge. The derived shift converts
    // back to native coordinates for tile/sprite sampling; clip bounds remain
    // in centered output coordinates, so HUD placement never follows the shift.
    const int target_origin = available >= width
                                  ? std::clamp(camera - margin, history.left, history.right - width)
                                  : history.left - (width - available) / 2;
    const int target_shift = target_origin + margin - camera;
    if (fresh) {
        presentation_shift_x_ = target_shift;
    } else {
        // Ease the correction, not the native camera. Native walking/scrolling
        // is still visible on its original frame. Integer steps taper to one
        // pixel near the target and settle exactly without overshooting.
        const int distance = target_shift - presentation_shift_x_;
        const int step = std::min(4, (std::abs(distance) + 7) / 8);
        presentation_shift_x_ += distance < 0 ? -step : step;
    }
    const int origin = camera - margin + presentation_shift_x_;
    // Clip against the current authored span while its camera target settles;
    // easing must never expose a neighboring map's artwork.
    presentation_clip_left_ = left - origin - margin;
    presentation_clip_right_ = right - origin - margin;
}

uint16_t GameSceneRenderer::presentation_map_tile(const SceneReadView &view, int tile_x, int tile_y,
                                                  unsigned bg) const {
    // Read-only equivalents of C0A156/C0A1CE and C00FCB/C00E16. No map-cache
    // loads, event processing, entity traversal, or spawn routine is invoked.
    unsigned block = 0;
    if (tile_x >= 0 && tile_x < 1024 && tile_y >= 0 && tile_y < 1280) {
        const unsigned bx = unsigned(tile_x) / 4, by = unsigned(tile_y) / 4;
        const unsigned combo = view.cartridge_rom[view.source_profile.rom_map_tileset_palette_sectors +
                                                  (by & ~3u) * 8 + (bx >> 3)] >>
                               3;
        const unsigned address = view.source_profile.wram_loaded_map_tile_combination;
        if (combo == (unsigned(view.work_ram[address]) | (unsigned(view.work_ram[address + 1]) << 8))) {
            const auto &chunks = view.source_profile.rom_map_tile_chunks;
            const unsigned index = (by >> 3) * 256 + bx;
            const unsigned high = view.cartridge_rom[chunks[(by & 4) ? 9 : 8] + index];
            block = view.cartridge_rom[chunks[by & 7] + index] | (((high >> ((by & 3) * 2)) & 3) << 8);
        }
    }
    // REPLACE_BLOCK has already applied source event changes to these loaded
    // arrangements. Using them preserves the existing event state naturally.
    const unsigned arrangement = view.source_profile.wram_map_tile_arrangements + block * 32 +
                                 ((unsigned(tile_y) & 3) * 4 + (unsigned(tile_x) & 3)) * 2;
    const uint16_t tile = view.work_ram[arrangement] | (view.work_ram[arrangement + 1] << 8);
    return bg == 0 ? tile : (tile & 1023) < 384 ? tile | 0x2000 : 0;
}

// Native tiles come from the real VRAM ring. Only exposed continuation uses
// source map/text data; this prevents stale offscreen cache entries from being
// mistaken for authored scenery without asking the game to load more cells.
uint16_t GameSceneRenderer::presentation_tile(const SceneReadView &view, unsigned bg, int x, unsigned y,
                                              uint16_t original) const {
    if (presentation_world_map_ && bg < 2 && (direct_world_tiles_ || x < 0 || x >= 256)) {
        const int wx = presentation_world_x_[bg] + x, wy = presentation_world_y_[bg] + int(y);
        const int tx = wx >= 0 ? wx / 8 : (wx - 7) / 8, ty = wy >= 0 ? wy / 8 : (wy - 7) / 8;
        original = presentation_map_tile(view, tx, ty, bg);
    }
    if (bg || presentation_lumine_phase_ < 0)
        return original;
    const unsigned row = ((y + view.background_scroll_y[0]) & 255) / 8;
    if (row < 12 || row >= 20)
        return original;
    // Select the native 240-pixel patch's occurrence nearest the centered
    // viewport. Additional columns come from the prebuilt text, not from the
    // 64-column tilemap ring wrapping back into an earlier word of the message.
    int start = 40 * 8;
    while (start + 120 - int(view.background_scroll_x[0]) > 384)
        start -= 512;
    while (start + 120 - int(view.background_scroll_x[0]) < -128)
        start += 512;
    const int relative = x + int(view.background_scroll_x[0]) - start;
    const int column = relative >= 0 ? relative / 8 : (relative - 7) / 8;
    // This also covers authored patch columns that lie outside the native
    // viewport. The world-map extension above must not replace those letters
    // with the underlying wall when the map camera exposes them in a margin.
    const int source_column = presentation_lumine_phase_ / 2 + column;
    if (source_column < 0 || unsigned(source_column) >= presentation_lumine_columns_)
        return 0x0c10;
    const unsigned source =
        ((presentation_lumine_phase_ & 1) ? view.source_profile.wram_lumine_text_maps.odd_columns
                                          : view.source_profile.wram_lumine_text_maps.even_columns) +
        unsigned(source_column) * 16 + (row - 12) * 2;
    return view.work_ram[source] | (view.work_ram[source + 1] << 8);
}

void GameSceneRenderer::prepare_presentation_effects(const SceneReadView &view) {
    const auto ram_word = [&view](unsigned address) {
        return unsigned(view.work_ram[address]) | (unsigned(view.work_ram[address + 1]) << 8);
    };
    const auto &source = view.source_profile;
    for (unsigned index = 0; index < 256; ++index)
        presentation_reference_palette_[index] = view.palette(index);
    presentation_effect_layers_ = 0;
    presentation_psi_layer_ = 0;
    presentation_reference_cgwsel_ = view.ppu_registers[0x30];
    presentation_reference_cgadsub_ = view.ppu_registers[0x31];
    presentation_reference_fixed_ = view.fixed_color;

    if (ram_word(source.wram_battle_mode_flag)) {
        // SHOW_PSI_ANIMATION chooses its overlay from the loaded background's
        // depth. Enemy targets use duplicate OBJ palettes 12..15, whose normal
        // colors remain in palettes 8..11. No historical picture is required.
        const bool psi = view.work_ram[source.wram_psi_animation_state] &&
                         view.work_ram[source.wram_psi_animation_state + 10] &&
                         view.work_ram[source.wram_psi_animation_state + 7] <
                             view.work_ram[source.wram_psi_animation_state + 8];
        if (psi) {
            const unsigned pointer = ram_word(source.wram_psi_animation_state + 44);
            if (pointer >= source.wram_palettes && pointer < source.wram_palettes + 512 &&
                !((pointer - source.wram_palettes) & 1)) {
                presentation_psi_layer_ =
                    view.work_ram[source.wram_battle_backgrounds.layer1 + 1] == 2 ? 2u : 1u;
                presentation_psi_palette_first_ =
                    (pointer - source.wram_palettes) / 2 + view.work_ram[source.wram_psi_animation_state + 7];
                presentation_psi_palette_last_ =
                    (pointer - source.wram_palettes) / 2 + view.work_ram[source.wram_psi_animation_state + 8];
            }
        }
        for (unsigned target = 0; target < 4; ++target) {
            // Targets can remain set after an attack, and KO/revive reuse the
            // independent fade counters. Only the currently cycling PSI owns
            // this color suppression; gradual return/death fades stay original.
            if (psi && ram_word(source.wram_psi_animation_targets + target * 2))
                for (unsigned index = 192 + target * 16; index < 208 + target * 16; ++index)
                    presentation_reference_palette_[index] = view.palette(index - 64);
        }
        if (view.work_ram[source.wram_swirl_update_timer] && view.ppu_registers[0x30] == 0x10 &&
            view.ppu_registers[0x31] == 0x3f)
            presentation_reference_fixed_ = 0;
        const bool red_green =
            ram_word(source.wram_flash_timers.green) || ram_word(source.wram_flash_timers.red);
        if (red_green && view.ppu_registers[0x30] == 0 && view.ppu_registers[0x31] == 0x3f) {
            // SMAAAASH/Giygas flashes temporarily override the normal layer
            // configuration with fixed red/green addition. Recover only that
            // configuration's color math; current scroll/sprites/windows stay.
            const unsigned config = ram_word(source.wram_current_layer_config);
            if (config < 10 && source.rom_layer_config_table + 31 + config < view.cartridge_rom.size()) {
                presentation_reference_cgwsel_ =
                    view.cartridge_rom[source.rom_layer_config_table + 21 + config];
                presentation_reference_cgadsub_ =
                    view.cartridge_rom[source.rom_layer_config_table + 31 + config];
                presentation_reference_fixed_ = 0;
            }
        }
        const unsigned reflect = ram_word(source.wram_flash_timers.reflection);
        const unsigned green_background = ram_word(source.wram_flash_timers.green_background);
        if ((green_background ? green_background : reflect) & 2) {
            // C2DF2E replaces selected background entries with white/black;
            // palette2 retains the original colors. The generator stores the
            // *next* cycle step after uploading a rotation, so undo one step
            // when mapping a displayed palette slot back to its original.
            const bool four_bit = view.work_ram[source.wram_battle_backgrounds.layer1 + 1] == 4;
            for (unsigned record_index = 0; record_index < (four_bit ? 1u : 2u); ++record_index) {
                const unsigned record = (record_index ? source.wram_battle_backgrounds.layer2
                                                      : source.wram_battle_backgrounds.layer1);
                if (!view.work_ram[record])
                    continue;
                const unsigned pointer = ram_word(record + 76);
                if (pointer < source.wram_palettes || pointer >= source.wram_palettes + 512 ||
                    ((pointer - source.wram_palettes) & 1))
                    continue;
                const unsigned base = (pointer - source.wram_palettes) / 2;
                const unsigned count = four_bit ? 16 : 4;
                for (unsigned index = 1; index < count && base + index < 256; ++index) {
                    const auto actual = view.palette(base + index);
                    if (actual != (green_background ? 0 : 0x7fff))
                        continue;
                    unsigned original = index;
                    const unsigned style = view.work_ram[record + 3];
                    const auto cycle = [&](unsigned first, unsigned last, unsigned next, bool ping_pong) {
                        if (first > last || last >= count || index < first || index > last)
                            return false;
                        const unsigned length = last - first + 1;
                        const unsigned period = ping_pong ? length * 2 : length;
                        const unsigned step = (next + period - 1) % period;
                        unsigned offset = ping_pong ? (index - first + step) % period
                                                    : (index - first + length - step) % length;
                        if (ping_pong && offset >= length)
                            offset = period - 1 - offset;
                        original = first + offset;
                        return true;
                    };
                    // Style 2 uploads the second range first; the first range
                    // wins if authored ranges overlap, matching the source.
                    if (!view.work_ram[record + 2]) {
                        if (style == 2)
                            cycle(view.work_ram[record + 6], view.work_ram[record + 7],
                                  view.work_ram[record + 9], false);
                        if (style >= 1 && style <= 3)
                            cycle(view.work_ram[record + 4], view.work_ram[record + 5],
                                  view.work_ram[record + 8], style == 3);
                    }
                    presentation_reference_palette_[base + index] =
                        ram_word(record + 44 + original * 2) & 0x7fff;
                }
            }
        }
        if (green_background == 2 && view.palette(0) == 0x03e0)
            presentation_reference_palette_[0] = 0;
    }

    for (unsigned slot = 0; slot < 30; ++slot) {
        const unsigned event = ram_word(source.wram_entity_script_ids + slot * 2);
        const unsigned phase = ram_word(source.wram_entity_script_variable0 + slot * 2);
        const bool reflected = event == source.lightning_scripts.franklin_badge_reflection && phase == 1;
        const bool strike = (event == source.lightning_scripts.strike_event_705 ||
                             event == source.lightning_scripts.strike_event_706) &&
                            (phase == 2 || phase == 0 || phase == 10);
        if (reflected || strike) {
            // These scripts temporarily use BG3's text tilemap for lightning;
            // it is cleared before ordinary dialogue resumes. The other layers
            // keep moving normally underneath the removed effect in reference.
            presentation_effect_layers_ |= 4;
            if (strike && view.ppu_registers[0x30] == 0x10 && view.ppu_registers[0x31] == 0x33)
                presentation_reference_fixed_ = 0;
        }
        if (event == source.gas_station_flash_script && (view.ppu_registers[5] & 7) == 3 &&
            view.ppu_registers[7] == 0x78 && view.ppu_registers[8] == 0x7c &&
            presentation_gas_palettes_valid_) {
            // Compare against the exact authored flash palette. BUFFER also
            // contains a procedural BG2 palette, so using it as a blanket
            // replacement would alter normal gas-station colors between flashes.
            for (unsigned index = 0; index < 256; ++index)
                if (view.palette(index) == presentation_gas_palettes_[1][index])
                    presentation_reference_palette_[index] = presentation_gas_palettes_[0][index];
        }
    }
}

// Fast path copies the native center byte-for-byte and renders only margins.
// When a boundary shifts scenery, recomposition affects the presentation copy
// alone. Sprite sampling is const, preserving the canonical overflow flags.
void GameSceneRenderer::render_presentation_margins(const SceneReadView &view, unsigned y) {
    if (presentation_width_ == 256)
        return;
    const unsigned margin = (presentation_width_ - 256) / 2;
    auto output = presentation_framebuffer_.begin() + y * presentation_width_;
    std::copy_n(view.native_framebuffer.begin() + y * 256, 256, output + margin);
    if (view.ppu_registers[0] & 0x80) {
        std::fill_n(output, margin, 0xff000000);
        std::fill_n(output + margin + 256, margin, 0xff000000);
        return;
    }
    std::array<Pixel, 1024> objects{};
    if ((view.ppu_registers[0x2c] | view.ppu_registers[0x2d]) & 16) {
        view.sample_sprite_pixels(y, std::span<Pixel>(objects.data(), presentation_width_),
                                  -int(margin) + presentation_shift_x_);
        if (presentation_world_map_) {
            std::array<Pixel, 1024> world_objects{};
            presentation_object_pixels(view, y, std::span<Pixel>(world_objects.data(), presentation_width_),
                                       -int(margin) + presentation_shift_x_);
            for (unsigned x = 0; x < presentation_width_; ++x)
                if (world_objects[x].priority >= 0)
                    objects[x] = world_objects[x];
        }
    }
    if (presentation_psi_display_layer_ || presentation_screen_overlay_layer_ || presentation_shift_x_ ||
        (presentation_world_map_ && (presentation_clip_left_ > 0 || presentation_clip_right_ < 256))) {
        for (unsigned x = 0; x < presentation_width_; ++x)
            output[x] = compose_presentation_pixel(view, int(x) - int(margin), y, objects[x], true);
        return;
    }
    for (unsigned x = 0; x < margin; ++x) {
        output[x] = compose_presentation_pixel(view, int(x) - int(margin), y, objects[x], true);
        const unsigned right = margin + 256 + x;
        output[right] = compose_presentation_pixel(view, 256 + int(x), y, objects[right], true);
    }
}

void GameSceneRenderer::begin_scanline(const SceneReadView &view, unsigned y) {
    if (!y) {
        native_sprite_frame_ = view.native_sprites && native_uploaded_frame_;
        native_sprite_objects_ = native_sprite_frame_ ? native_uploaded_objects_ : std::vector<PresentationObject>{};
        native_sprite_frame_number_ = view.completed_frames;
        // Latch the scene alongside its first visible row, before any pixel or
        // metadata is written. A transition can happen inside one CPU step, so
        // waiting for the frontend's next iteration would repeat one gas frame
        // or stretch one logo frame. Keep the user's requested width separately.
        presentation_frame_aspect_ =
            (view.ppu_registers[5] & 7) == 3 && view.ppu_registers[7] == 0x78 && view.ppu_registers[8] == 0x7c &&
                    !intro_interference(view)
                ? 4.0 / 3
                : 0.0;
        resize_presentation_width(view, presentation_frame_aspect_ ? 256 : requested_presentation_width_);
    }
    if (!y || presentation_width_ > 256)
        prepare_presentation_scene(view);
    refresh_host_artwork(view);
    if (presentation_effects_enabled_)
        prepare_presentation_effects(view);
    if ((view.ppu_registers[0] & 0x80) && presentation_effects_enabled_) {
        std::fill_n(presentation_effect_mask_.begin() + y * presentation_width_, presentation_width_, 0);
        std::fill_n(presentation_effect_reference_.begin() + y * presentation_width_, presentation_width_,
                    0xff000000);
    }
}

void GameSceneRenderer::begin_sprite_frame(unsigned buffer_id) {
    if (buffer_id < 1 || buffer_id > sprite_builds_.size())
        return;
    sprite_build_id_ = buffer_id;
    ++sprite_snapshot_counts_.builds;
    sprite_builds_[buffer_id - 1] = {};
    sprite_builds_[buffer_id - 1].begun = true;
}

void GameSceneRenderer::refresh_host_artwork(const SceneReadView &view) {
    if (!view.host_sprites || !presentation_oam_indexed_)
        return;
    const auto revision = view.host_sprites->artwork_revision();
    if (revision == host_artwork_revision_)
        return;
    const auto refresh = [&](PresentationObject &object) {
        if (!object.host_generation)
            return;
        auto image = view.host_sprites->committed_image(object.host_generation, object.host_orientation);
        // The bridge owns generation lifetime independently of actor slots.
        // A missing/unsupported owner cannot borrow the current slot's art.
        if (image && object.host_part < image->parts.size() &&
            image->parts[object.host_part].left == object.x - object.anchor_x &&
            image->parts[object.host_part].top == object.y - object.anchor_y)
            object.host_image = std::move(image);
        else
            object.host_image.reset();
    };
    for (auto &object : presentation_objects_)
        refresh(object);
    for (auto &object : presentation_oam_)
        if (object)
            refresh(*object);
    host_artwork_revision_ = revision;
}

std::vector<std::uint64_t> GameSceneRenderer::host_sprite_generations() const {
    std::vector<std::uint64_t> result;
    const auto add = [&](const PresentationObject &object) {
        if (object.host_generation)
            result.push_back(object.host_generation);
    };
    const auto list = [&](const auto &objects) {
        for (const auto &object : objects)
            add(object);
    };
    const auto oam = [&](const auto &objects) {
        for (const auto &object : objects)
            if (object)
                add(*object);
    };
    list(presentation_objects_);
    list(presentation_uploaded_objects_);
    oam(presentation_oam_);
    oam(presentation_uploaded_oam_);
    for (const auto &build : sprite_builds_) {
        list(build.objects);
        oam(build.oam);
        for (const auto &draw : build.queued)
            list(draw.objects);
    }
    std::sort(result.begin(), result.end());
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}

std::vector<GameSceneRenderer::PresentationObject> GameSceneRenderer::source_sprite_parts(
    const SceneReadView &view, std::uint32_t map_address, int x, int y) const {
    const auto byte = [&](unsigned at) -> std::optional<unsigned> {
        if (at >= 0x7e0000 && at < 0x800000) return view.work_ram[at - 0x7e0000];
        if (at >= 0xc00000 && at - 0xc00000 < view.cartridge_rom.size()) return view.cartridge_rom[at - 0xc00000];
        return {};
    };
    std::vector<PresentationObject> result;
    const unsigned bank = map_address & 0xff0000;
    unsigned pointer = map_address & 0xffff;
    for (unsigned step = 0; step < 128; ++step) {
        std::array<unsigned, 5> entry{};
        for (unsigned i = 0; i < 5; ++i) {
            const auto value = byte(bank | ((pointer + i) & 0xffff));
            if (!value) throw std::runtime_error("Native draw received an invalid source overlay map");
            entry[i] = *value;
        }
        if (entry[0] == 0x80) { pointer = entry[1] | entry[2] << 8; continue; }
        result.push_back({std::int16_t(x + std::int8_t(entry[3])),
                          std::int16_t(y + std::int8_t(entry[0]) - 1), std::uint8_t(entry[1]),
                          std::uint8_t(entry[2]), bool(entry[4] & 1)});
        if (entry[4] & 0x80) return result;
        pointer = (pointer + 5) & 0xffff;
    }
    throw std::runtime_error("Native draw received an unterminated source overlay map");
}

void GameSceneRenderer::queue_native_sprite(const SceneReadView &view,
    std::shared_ptr<const native::SpriteImage> image, std::uint64_t generation, unsigned palette,
    int x, int y, unsigned surface, unsigned priority) {
    if (!view.native_sprites || !sprite_build_id_ || !image || !generation || palette >= 8 || priority >= 4)
        throw std::invalid_argument("Invalid native sprite draw command");
    auto &build = sprite_builds_[sprite_build_id_ - 1];
    build.native_frame = true;
    QueuedSpriteDraw draw;
    draw.x = x; draw.y = y; draw.priority = priority; draw.native_queued = true;
    for (unsigned i = 0; i < image->parts.size(); ++i) {
        const auto &part = image->parts[i];
        const unsigned level = surface & (part.upper ? 2 : 1) ? 0x20 : 0x30;
        PresentationObject object{std::int16_t(x + part.left), std::int16_t(y + part.top - 1),
                                  0, std::uint8_t(level | (palette << 1)), false,
                                  (std::uint64_t{1} << 63) | generation, x, y - 1};
        object.host_image = image; object.host_part = i; object.host_palette = palette;
        object.native_owned = true;
        draw.objects.push_back(std::move(object));
    }
    build.queued.push_back(std::move(draw));
}
void GameSceneRenderer::queue_native_overlay(const SceneReadView &view, std::uint32_t map_address,
                                            int x, int y, unsigned priority) {
    if (!view.native_sprites || !sprite_build_id_ || priority >= 4)
        throw std::invalid_argument("Invalid native overlay draw command");
    const auto resources = view.native_sprites->resources();
    if (!native_overlays_ || native_overlay_resources_.lock() != resources) {
        native_overlays_ = std::make_shared<native::OverlaySprites>(view.cartridge_rom, view.game_version,
                                                                  *resources);
        native_overlay_resources_ = resources;
    }
    queue_native_fragments(view, native_overlays_->frame(map_address), 0, x, y, priority);
}
void GameSceneRenderer::queue_native_fragments(const SceneReadView &view,
    std::span<const native::SpriteFragment> fragments, std::uint64_t identity,
    int x, int y, unsigned priority) {
    if (!view.native_sprites || !sprite_build_id_ || priority >= 4)
        throw std::invalid_argument("Invalid native fragment draw command");
    QueuedSpriteDraw draw;
    draw.x = x; draw.y = y; draw.priority = priority; draw.native_queued = true;
    for (const auto &fragment : fragments) {
        const auto &pixels = fragment.pixels;
        if (!pixels || !pixels->width || !pixels->height || pixels->width > 4096 || pixels->height > 4096 ||
            pixels->indices.size() != std::size_t(pixels->width) * pixels->height ||
            fragment.palette >= 8 || fragment.priority >= 4 ||
            std::any_of(pixels->indices.begin(), pixels->indices.end(), [](auto color) { return color > 15; }))
            throw std::invalid_argument("Invalid native sprite fragment");
        PresentationObject object{std::int16_t(x + fragment.left), std::int16_t(y + fragment.top - 1),
                                  0, std::uint8_t((fragment.priority << 4) | (fragment.palette << 1)),
                                  false, identity, x, y - 1};
        object.native_owned = true;
        object.fragment_pixels = pixels;
        draw.objects.push_back(std::move(object));
    }
    auto &build = sprite_builds_[sprite_build_id_ - 1];
    build.native_frame = true;
    build.queued.push_back(std::move(draw));
}
void GameSceneRenderer::queue_native_custom(const SceneReadView &view, std::uint32_t authored_table,
                                           unsigned frame, int x, int y, unsigned priority) {
    if (!view.native_sprites || !sprite_build_id_ || priority >= 4)
        throw std::invalid_argument("Invalid native custom sprite command");
    const auto resources = view.native_sprites->resources();
    if (!native_custom_sprites_ || native_custom_resources_.lock() != resources) {
        native_custom_sprites_ = std::make_shared<native::CustomSprites>(view.cartridge_rom, view.game_version);
        native_custom_resources_ = resources;
    }
    queue_native_fragments(view, native_custom_sprites_->frame(authored_table, frame), 0, x, y, priority);
}
std::size_t GameSceneRenderer::native_actor_draw_mark() const {
    if (!sprite_build_id_)
        throw std::logic_error("Native actor draw has no open frame");
    return sprite_builds_[sprite_build_id_ - 1].queued.size();
}
void GameSceneRenderer::set_native_stationary_sprites(
    std::shared_ptr<const native::StationaryNpcSprites> sprites) noexcept {
    native_stationary_sprites_ = std::move(sprites);
    native_stationary_preparation_ = {};
}
std::size_t GameSceneRenderer::stationary_sprite_part_count() const {
    return std::count_if(native_sprite_objects_.begin(), native_sprite_objects_.end(),
                         [](const auto &object) { return object.stationary_prepared; });
}
void GameSceneRenderer::prune_native_actor_overlays(const SceneReadView &view) {
    const auto resources = view.native_sprites->resources();
    if (native_actor_overlay_resources_.lock() != resources) {
        native_actor_overlays_ = {};
        native_actor_overlay_resources_ = resources;
    }
    for (unsigned slot = 0; slot < 60; slot += 2) {
        auto &retained = native_actor_overlays_[slot / 2];
        if (!retained.generation) continue;
        const auto actor = view.native_sprites->snapshot(slot);
        if (!actor || actor->id != retained.generation || view.native_sprites->custom_descriptor(slot))
            retained = {};
    }
}
void GameSceneRenderer::finish_native_actor_draw(const SceneReadView &view, std::size_t mark,
                                                 unsigned byte_slot, unsigned raw_priority) {
    tag_native_actor_draw(view, mark, byte_slot, raw_priority);
    const auto resources = view.native_sprites->resources();
    if (native_actor_overlay_resources_.lock() != resources) {
        native_actor_overlays_ = {};
        native_actor_overlay_resources_ = resources;
    }
    auto &retained = native_actor_overlays_[byte_slot / 2];
    retained = {};
    const auto actor = view.native_sprites->snapshot(byte_slot);
    if (!actor || view.native_sprites->custom_descriptor(byte_slot)) return;
    const auto &source = view.source_profile;
    const auto word = [&](unsigned at) {
        return unsigned(view.work_ram[at]) | unsigned(view.work_ram[at + 1]) << 8;
    };
    retained.generation = actor->id;
    retained.anchor_x = std::int16_t(word(source.wram_entity_screen_coordinates.x + byte_slot));
    retained.anchor_y = std::int16_t(word(source.wram_entity_screen_coordinates.y + byte_slot));
    const auto &queued = sprite_builds_[sprite_build_id_ - 1].queued;
    for (auto it = queued.begin() + mark; it != queued.end(); ++it)
        if (it->native_queued && !it->objects.empty() &&
            std::all_of(it->objects.begin(), it->objects.end(), [](const auto &object) {
                return bool(object.fragment_pixels);
            }))
            retained.draws.push_back(*it);
}
void GameSceneRenderer::tag_native_actor_draw(const SceneReadView &view, std::size_t mark,
                                              unsigned byte_slot, unsigned raw_priority) {
    if (!view.native_sprites || !sprite_build_id_ || byte_slot >= 60 || (byte_slot & 1))
        throw std::invalid_argument("Invalid native actor draw bundle");
    auto &queued = sprite_builds_[sprite_build_id_ - 1].queued;
    if (mark > queued.size())
        throw std::invalid_argument("Invalid native actor draw marker");
    const auto &source = view.source_profile;
    const auto word = [&](unsigned at) {
        return unsigned(view.work_ram[at]) | unsigned(view.work_ram[at + 1]) << 8;
    };
    unsigned rank = 30;
    std::array<bool, 30> seen{};
    unsigned position = 0;
    for (unsigned slot = word(source.wram_first_entity); slot < 60 && !(slot & 1) && !seen[slot / 2];
         slot = word(source.wram_entity_next + slot), ++position) {
        seen[slot / 2] = true;
        if (slot == byte_slot) { rank = position; break; }
    }
    const NativeActorDrawOrder order{byte_slot, rank,
        std::uint16_t(word(source.wram_entity_world_coordinates.y + byte_slot)), raw_priority == 1};
    std::optional<native::NpcPlacement> stationary;
    if (native_stationary_sprites_ && !view.native_sprites->custom_descriptor(byte_slot)) {
        const unsigned npc_ids = view.game_version == GameVersion::JP ? 0x3098 : 0x2c9a;
        stationary = native_stationary_sprites_->placement(std::uint16_t(word(npc_ids + byte_slot)));
    }
    const auto actor = view.native_sprites->snapshot(byte_slot);
    const bool ordinary = actor && !view.native_sprites->custom_descriptor(byte_slot);
    const bool custom = view.native_sprites->custom_descriptor(byte_slot);
    const auto identity = stationary ? (std::uint64_t{1} << 61) | stationary->identity :
                          ordinary ? (std::uint64_t{1} << 63) | actor->id :
                          custom ? (std::uint64_t{1} << 32) |
                              (word(source.wram_entity_script_ids + byte_slot) << 8) | byte_slot : 0;
    const int anchor_x = std::int16_t(word((custom ? source.wram_entity_world_coordinates.x :
                                          source.wram_entity_screen_coordinates.x) + byte_slot)),
              anchor_y = std::int16_t(word((custom ? source.wram_entity_world_coordinates.y :
                                          source.wram_entity_screen_coordinates.y) + byte_slot)) - 1;
    for (auto it = queued.begin() + mark; it != queued.end(); ++it) {
        it->actor_order = order;
        // An overlay and body share one motion anchor, independent of which
        // effect was submitted first or whether it has a vertical offset.
        // Authored stationary NPC identity also spans preparation/activation.
        for (auto &object : it->objects)
            if ((ordinary || custom) && object.native_owned && (object.host_image || object.fragment_pixels)) {
                object.identity = identity;
                if (object.fragment_pixels) {
                    object.anchor_x = anchor_x;
                    object.anchor_y = anchor_y;
                }
            }
    }
}
void GameSceneRenderer::queue_stationary_npc_sprites(const SceneReadView &view) {
    if (!native_stationary_sprites_ || !view.native_sprites) {
        native_stationary_preparation_.clear_resources();
        return;
    }
    const auto &source = view.source_profile;
    const auto word = [&](unsigned at) { return unsigned(view.work_ram[at]) | unsigned(view.work_ram[at + 1]) << 8; };
    const bool jp = view.game_version == GameVersion::JP;
    const unsigned npc_ids = jp ? 0x3098 : 0x2c9a,
                   enabled = jp ? 0x4dde : 0x4a58,
                   objects_only = jp ? 0x4dec : 0x4a66,
                   photograph = jp ? 0xb6b8 : 0xb4ef,
                   flags = jp ? 0x9eb3 : 0x9c08;
    // Only the ordinary world scene owns authored placements. In particular,
    // photograph/title/battle scenes must never acquire dormant world actors.
    if ((view.ppu_registers[5] & 0x37) != 1 || view.ppu_registers[7] != 0x39 ||
        view.ppu_registers[8] != 0x59 || word(source.wram_battle_mode_flag) ||
        !word(enabled) || word(photograph)) {
        native_stationary_preparation_.clear_resources();
        return;
    }
    const unsigned combination = word(source.wram_loaded_map_tile_combination);
    if (combination >= 32) { native_stationary_preparation_.clear_resources(); return; }
    std::vector<native::NpcId> active;
    std::array<bool, 30> seen{};
    for (unsigned slot = word(source.wram_first_entity); slot < 60 && !(slot & 1) && !seen[slot / 2];
         slot = word(source.wram_entity_next + slot)) {
        seen[slot / 2] = true;
        active.push_back(std::uint16_t(word(npc_ids + slot)));
    }
    // These are the same logical-frame camera coordinates used by C0A023.
    // The resulting commands travel with that frame's ordinary draw snapshot.
    const int camera_x = std::int16_t(word(source.wram_background_scroll.layer1_x)),
              camera_y = std::int16_t(word(source.wram_background_scroll.layer1_y));
    const RenderDistance distance(presentation_width_);
    const auto bounds = distance.content_bounds();
    auto artwork = view.native_sprites->resources()->artwork_bounds();
    // Source overworld pieces are drawn one pixel above their world anchor.
    --artwork.top; --artwork.bottom;
    const auto placements = distance.placement_bounds(artwork);
    const native::NpcVisibility visibility{combination, view.work_ram.subspan(flags, 128), active,
                                           word(objects_only) != 0, false};
    const native::NpcRectangle footprint{camera_x + placements.left, camera_y + placements.top,
        camera_x + placements.right, camera_y + placements.bottom};
    // Acquire shared artwork before stationary commands select their poses.
    // Moving NPC definitions participate only here: no pose/actor is invented.
    native_stationary_sprites_->prepare_resources(footprint, visibility, native_stationary_preparation_);
    const auto candidates = native_stationary_sprites_->prepare(footprint, visibility, native_stationary_preparation_);
    auto &build = sprite_builds_[sprite_build_id_ - 1];
    for (const auto &candidate : candidates) {
        // Water ripples need an authored overlay task and current phase. Only
        // source-active actors can own that state; a dormant body is insufficient.
        if (candidate.surface & 8) continue;
        const int x = int(candidate.placement.x) - camera_x,
                  y = int(candidate.placement.y) - camera_y;
        // Actual active identity, not a geometric threshold, ends readiness:
        // source strip loading can lag the activation boundary by one strip.
        QueuedSpriteDraw draw;
        draw.x = x; draw.y = y; draw.priority = 1; draw.native_queued = true;
        draw.actor_order = NativeActorDrawOrder{60, 30 + candidate.placement.identity,
            std::uint16_t(candidate.placement.y), true};
        for (unsigned index = 0; index < candidate.image->parts.size(); ++index) {
            const auto &part = candidate.image->parts[index];
            const int left = x + part.left, top = y + part.top - 1;
            // Canonical pixels are clipped by both rasterizers; partial edge
            // parts remain intact until actual source activation takes over.
            if (left >= 0 && left + 16 <= 256 && top >= 0 && top + 16 <= 224) continue;
            if (left >= bounds.right || left + 16 <= bounds.left ||
                top >= bounds.bottom || top + 16 <= bounds.top)
                continue;
            const unsigned level = candidate.surface & (part.upper ? 2 : 1) ? 0x20 : 0x30;
            PresentationObject object{left, top, 0, std::uint8_t(level | (candidate.palette << 1)),
                false, (std::uint64_t{1} << 61) | candidate.placement.identity, x, y - 1};
            object.host_image = candidate.image; object.host_part = index;
            object.host_palette = candidate.palette; object.native_owned = true;
            object.stationary_prepared = true;
            draw.objects.push_back(std::move(object));
        }
        if (!draw.objects.empty()) build.queued.push_back(std::move(draw));
    }
}
void GameSceneRenderer::capture_sprite_enqueue(const SceneReadView &view, std::uint32_t map_address,
                                              int x, int y, unsigned priority) {
    if (!view.native_sprites || !sprite_build_id_) return;
    if (priority >= 4) throw std::runtime_error("Source custom draw priority is invalid");
    auto &build = sprite_builds_[sprite_build_id_ - 1];
    build.native_frame = true;
    QueuedSpriteDraw draw;
    draw.map_address = map_address; draw.x = x; draw.y = y; draw.priority = priority; draw.source_queued = true;
    build.queued.push_back(std::move(draw));
}
std::optional<std::uint8_t> GameSceneRenderer::try_native_sprite_pixels(
    const SceneReadView &view, unsigned y, std::span<PpuPixel> result, int origin) const {
    if (!view.native_sprites || !native_sprite_frame_) return {};
    object_pixels(view, native_sprite_objects_, y, result, origin);
    return 0;
}

void GameSceneRenderer::capture_entity_draw(const SceneReadView &view, unsigned slot) {
    if (view.native_sprites)
        return; // Native commands and generic source queue entries own this frame.
    if (!sprite_build_id_ || slot >= 60 || (slot & 1))
        return;
    auto &build = sprite_builds_[sprite_build_id_ - 1];
    if (build.queued.size() >= 3840)
        return;
    QueuedSpriteDraw draw;
    const auto address = append_presentation_entity(view, slot, draw.objects);
    if (!address || draw.objects.empty())
        return;
    draw.map_address = *address;
    draw.x = draw.objects.front().anchor_x;
    draw.y = draw.objects.front().anchor_y + 1;
    build.queued.push_back(std::move(draw));
    ++sprite_snapshot_counts_.queued_draws;
}

void GameSceneRenderer::capture_sprite_emit(const SceneReadView &view, std::uint32_t map_address, int x,
                                            int y, unsigned first_oam, unsigned oam_limit) {
    if (!sprite_build_id_ || first_oam > 128 || oam_limit > 128 || first_oam > oam_limit)
        return;
    auto &build = sprite_builds_[sprite_build_id_ - 1];
    ++sprite_snapshot_counts_.emit_calls;
    const auto outside_native_picture = [&](const PresentationObject &object) {
        constexpr unsigned sizes[8][2][2] = {
            {{8, 8}, {16, 16}}, {{8, 8}, {32, 32}}, {{8, 8}, {64, 64}},
            {{16, 16}, {32, 32}}, {{16, 16}, {64, 64}}, {{32, 32}, {64, 64}},
            {{16, 32}, {32, 64}}, {{16, 32}, {32, 32}}};
        const auto &size = sizes[view.ppu_registers[1] >> 5][object.large];
        return object.x >= 256 || object.x + int(size[0]) <= 0 ||
               object.y >= 224 || object.y + int(size[1]) <= 0;
    };
    if (view.native_sprites) {
        build.native_frame = true;
        const auto found = std::find_if(build.queued.begin(), build.queued.end(), [&](const auto &draw) {
            return draw.source_queued && !draw.emitted && draw.map_address == map_address &&
                   draw.x == x && draw.y == y;
        });
        std::vector<PresentationObject> emitted;
        unsigned index = first_oam;
        for (const auto &object : source_sprite_parts(view, map_address, x, y)) {
            const bool hardware_part = object.x >= -256 && object.x < 256 &&
                                       object.y >= -32 && object.y < 224;
            // Keep authored offscreen fragments in the host frame even when
            // C08CD5 omits them. Only actually emitted parts own OAM ordinals.
            if (hardware_part && index >= oam_limit && !outside_native_picture(object))
                continue;
            emitted.push_back(object);
            if (hardware_part && index < oam_limit)
                build.oam[index++] = object;
        }
        if (found != build.queued.end()) {
            found->objects = std::move(emitted);
            found->emitted = true;
        } else
            build.objects.insert(build.objects.end(), emitted.begin(), emitted.end());
        return;
    }
    const auto found = std::find_if(build.queued.begin(), build.queued.end(), [&](const auto &draw) {
        return !draw.emitted && draw.map_address == map_address && draw.x == x && draw.y == y;
    });
    std::vector<PresentationObject> objects;
    if (found != build.queued.end()) {
        found->emitted = true;
        ++sprite_snapshot_counts_.matched_draws;
        objects = found->objects;
    } else {
        // Non-entity emitters (ripples, cursors, scripted overlays) retain
        // source pixels and exact emitter order without acquiring actor art.
        const auto byte = [&](unsigned address) -> std::optional<unsigned> {
            if (address >= 0x7e0000 && address < 0x800000)
                return view.work_ram[address - 0x7e0000];
            if (address >= 0xc00000 && address - 0xc00000 < view.cartridge_rom.size())
                return view.cartridge_rom[address - 0xc00000];
            return {};
        };
        unsigned pointer = map_address & 0xffff, bank = map_address & 0xff0000;
        for (unsigned step = 0; step < 128; ++step) {
            std::array<unsigned, 5> entry{};
            for (unsigned i = 0; i < entry.size(); ++i) {
                const auto value = byte(bank | ((pointer + i) & 0xffff));
                if (!value)
                    return;
                entry[i] = *value;
            }
            if (entry[0] == 0x80) {
                pointer = entry[1] | (entry[2] << 8);
                continue;
            }
            objects.push_back({std::int16_t(x + std::int8_t(entry[3])),
                               std::int16_t(y + std::int8_t(entry[0]) - 1),
                               std::uint8_t(entry[1]), std::uint8_t(entry[2]), bool(entry[4] & 1)});
            if (entry[4] & 0x80)
                break;
            pointer = (pointer + 5) & 0xffff;
        }
    }
    unsigned index = first_oam;
    for (const auto &object : objects) {
        if (build.objects.size() >= 3840)
            break;
        const bool hardware_part = object.x >= -256 && object.x < 256 &&
                                   object.y >= -32 && object.y < 224;
        if (hardware_part && index >= oam_limit && !outside_native_picture(object))
            continue;
        build.objects.push_back(object);
        if (hardware_part && index < oam_limit) {
            build.oam[index++] = object;
            sprite_snapshot_counts_.host_parts += bool(object.host_image);
        }
    }
}

void GameSceneRenderer::seal_sprite_frame(const SceneReadView &view) {
    if (!sprite_build_id_)
        return;
    if (native_enemy_preparation_)
        native_enemy_preparation_->prepare(view, presentation_width_);
    auto &build = sprite_builds_[sprite_build_id_ - 1];
    if (view.native_sprites) {
        build.native_frame = true;
        const auto &source = view.source_profile;
        const auto word = [&](unsigned at) { return unsigned(view.work_ram[at]) | unsigned(view.work_ram[at+1]) << 8; };
        prune_native_actor_overlays(view);
        const auto original_draws = build.queued.size();
        auto continuation_position = original_draws;
        for (auto i = original_draws; i > 0; --i)
            if (build.queued[i - 1].actor_order) { continuation_position = i; break; }
        std::array<bool, 30> seen{};
        for (unsigned slot = word(source.wram_first_entity); slot < 60 && !(slot & 1) && !seen[slot / 2];
             slot = word(source.wram_entity_next + slot)) {
            seen[slot / 2] = true;
            // Far-edge graphical continuation uses persistent actor hiding.
            // Processor V belongs to C0A0E3's call gate, not bank-word bit14.
            const auto callback = word(source.wram_entity_draw_callback + slot);
            if ((word(source.wram_entity_spritemap_pointers.high + slot) & 0x8000) ||
                (word(source.wram_entity_animation_frame + slot) & 0x8000) ||
                (callback != source.entity_draw_callbacks.screen_space &&
                 callback != source.entity_draw_callbacks.world_space))
                continue;
            const int x = std::int16_t(word(source.wram_entity_screen_coordinates.x + slot));
            const int y = std::int16_t(word(source.wram_entity_screen_coordinates.y + slot));
            if (x >= -64 && x < 320 && y >= -64 && y < 256)
                continue;
            if (std::any_of(build.queued.begin(), build.queued.begin() + original_draws,
                            [slot](const auto &draw) {
                                return draw.actor_order && draw.actor_order->byte_slot == slot;
                            }))
                continue; // An explicit/debug source draw already owns this actor.
            const auto raw_priority = word(source.wram_entity_draw_priority + slot);
            auto priority = raw_priority;
            if (priority & 0x8000) {
                const unsigned owner = (priority & 0x3f) * 2;
                if (owner >= 60) continue;
                priority = word(source.wram_entity_draw_priority + owner);
            }
            if (callback == source.entity_draw_callbacks.world_space) {
                if (priority >= 4 || !view.native_sprites->custom_descriptor(slot))
                    continue;
                const auto mark = native_actor_draw_mark();
                const unsigned table = ((word(source.wram_entity_spritemap_pointers.high + slot) & 255) << 16) |
                                       word(source.wram_entity_spritemap_pointers.low + slot);
                // Use the same immutable imported custom frame as the actual
                // callback. Its artwork is independent of source VRAM slots.
                queue_native_custom(view, table, word(source.wram_entity_animation_frame + slot),
                    std::int16_t(word(source.wram_entity_world_coordinates.x + slot)),
                    std::int16_t(word(source.wram_entity_world_coordinates.y + slot)), priority);
                tag_native_actor_draw(view, mark, slot, raw_priority);
                continue;
            }
            const auto actor = view.native_sprites->snapshot(slot);
            if (actor && actor->image && priority < 4) {
                const auto mark = native_actor_draw_mark();
                // Continue the last authored overlay pose without running a
                // culled callback or advancing its script/timer. The body uses
                // the current selected image, independent of retained effects.
                const auto &retained = native_actor_overlays_[slot / 2];
                if (retained.generation == actor->id) {
                    const int dx = x - retained.anchor_x, dy = y - retained.anchor_y;
                    for (auto draw : retained.draws) {
                        draw.x = std::int16_t(draw.x + dx);
                        draw.y = std::int16_t(draw.y + dy);
                        draw.priority = priority;
                        for (auto &object : draw.objects) {
                            object.x = std::int16_t(object.x + dx);
                            object.y = std::int16_t(object.y + dy);
                            object.anchor_x = std::int16_t(object.anchor_x + dx);
                            object.anchor_y = std::int16_t(object.anchor_y + dy);
                        }
                        build.queued.push_back(std::move(draw));
                    }
                }
                queue_native_sprite(view, actor->image, actor->id, actor->creation.sprite.palette, x, y,
                                    word(source.wram_entity_surface_flags + slot), priority);
                tag_native_actor_draw(view, mark, slot, raw_priority);
            }
        }
        queue_stationary_npc_sprites(view);
        // Keep any later non-actor screen commands after the actor block.
        // Preparation/continuation never runs scripts or callbacks.
        if (build.queued.size() > original_draws) {
            std::rotate(build.queued.begin() + continuation_position,
                        build.queued.begin() + original_draws, build.queued.end());
            const auto before = [](const QueuedSpriteDraw &a, const QueuedSpriteDraw &b) {
                const auto &left = *a.actor_order, &right = *b.actor_order;
                if (left.sorted != right.sorted) return !left.sorted;
                if (left.sorted && left.world_y != right.world_y) return left.world_y > right.world_y;
                return left.list_rank < right.list_rank;
            };
            for (auto first = build.queued.begin(); first != build.queued.end();) {
                if (!first->actor_order) { ++first; continue; }
                auto last = first;
                while (last != build.queued.end() && last->actor_order) ++last;
                // Equal keys preserve each callback's overlay-before-body order.
                std::stable_sort(first, last, before);
                first = last;
            }
        }
        // Source priority queues are flushed only after actor order resolves.
        for (unsigned priority = 0; priority < 4; ++priority)
            for (const auto &draw : build.queued)
                if (draw.priority == priority && (draw.native_queued || (draw.source_queued && draw.emitted)))
                    build.objects.insert(build.objects.end(), draw.objects.begin(), draw.objects.end());
        return;
    }
    auto displayed = std::move(presentation_objects_);
    const auto displayed_frame = presentation_objects_frame_;
    prepare_presentation_objects(view);
    // Continue actors outside C0DB0F's native queue bounds. Inside those bounds,
    // only actual draw calls establish displayed existence and ownership.
    for (auto &object : presentation_objects_)
        if ((object.anchor_x < -64 || object.anchor_x >= 320 || object.anchor_y + 1 < -64 ||
             object.anchor_y + 1 >= 256) && build.objects.size() < 3840)
            build.objects.push_back(std::move(object));
    presentation_objects_ = std::move(displayed);
    presentation_objects_frame_ = displayed_frame;
}

void GameSceneRenderer::capture_oam_upload(const SceneReadView &view, unsigned buffer_id) {
    if (buffer_id >= 1 && buffer_id <= sprite_builds_.size()) {
        const auto &build = sprite_builds_[buffer_id - 1];
        ++sprite_snapshot_counts_.uploads;
        sprite_snapshot_counts_.unknown_uploads += !build.begun;
        // A source buffer whose build was not observed has unknown ownership.
        // Inferring it from current actors would reintroduce the age/alias bug.
        native_uploaded_frame_ = view.native_sprites && build.begun && build.native_frame;
        native_uploaded_objects_ = native_uploaded_frame_ ? build.objects : std::vector<PresentationObject>{};
        presentation_uploaded_objects_ = build.objects;
        presentation_uploaded_oam_ = build.oam;
        presentation_uploaded_oam_indexed_ = true;
        presentation_objects_uploaded_ = true;
        return;
    }
    auto displayed = std::move(presentation_objects_);
    const auto displayed_frame = presentation_objects_frame_;
    prepare_presentation_objects(view);
    presentation_uploaded_objects_ = std::move(presentation_objects_);
    presentation_objects_ = std::move(displayed);
    presentation_objects_frame_ = displayed_frame;
    presentation_objects_uploaded_ = true;
    presentation_uploaded_oam_ = {};
    presentation_uploaded_oam_indexed_ = false;
}

} // namespace eb
