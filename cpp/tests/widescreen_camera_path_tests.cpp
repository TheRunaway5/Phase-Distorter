// Camera continuity is measured through the real scanline/direct capture
// boundary. Authored sector fixtures use the source's 256x128-pixel layout;
// no CPU frame, actor script, map loader or spawn routine participates.
#include "eb/game_scene_renderer.hpp"
#include "eb/snapshot_archive.hpp"
#include "eb/snes_bus.hpp"
#include "generated_profile.hpp"

#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
unsigned checks{}, failures{};
void check(bool pass, const std::string &message) {
    ++checks;
    if (!pass) {
        ++failures;
        std::cerr << "FAIL: " << message << '\n';
    }
}
void require(bool pass, const std::string &message) {
    check(pass, message);
    if (!pass) throw std::runtime_error(message);
}

std::vector<std::uint8_t> sectors(eb::GameVersion region, unsigned combination = 1) {
    std::vector<std::uint8_t> bytes(0x300000);
    const auto base = eb::source_profile(region).rom_map_tileset_palette_sectors;
    // Same map spans shift one sector to the right across a forest seam.
    bytes[base + 32 + 1] = bytes[base + 32 + 2] = combination << 3;
    bytes[base + 64 + 2] = bytes[base + 64 + 3] = combination << 3;
    // A broad outdoor area, then a corridor that narrows from both sides.
    for (unsigned row : {12u, 13u})
        for (unsigned column = row == 12 ? 4 : 6; column < (row == 12 ? 16u : 14u); ++column)
            bytes[base + row * 32 + column] = combination << 3;
    // Distant same-map and distinct-map rooms exercise arrival resets.
    for (unsigned row : {20u, 21u})
        for (unsigned column = 20; column < 24; ++column)
            bytes[base + row * 32 + column] = row == 20 ? 8 : 16;
    return bytes;
}
struct Fixture {
    eb::GameVersion region;
    unsigned width;
    std::unique_ptr<eb::SnesBus> bus;
    eb::GameSceneRenderer renderer;
    Fixture(eb::GameVersion version, unsigned presentation_width, unsigned combination = 1)
        : region(version), width(presentation_width),
          bus(std::make_unique<eb::SnesBus>(sectors(version, combination), version)) {
        bus->write_byte(0x2100, 15);
        bus->write_byte(0x2105, 1);
        bus->write_byte(0x2107, 0x39);
        bus->write_byte(0x2108, 0x59);
        // Blank source arrangements and tile graphics keep native and direct
        // pixels equal; the captured background motion exposes camera framing.
        bus->write_byte(0x212c, 1);
        bus->native_framebuffer.fill(0xff000000);
        word(eb::source_profile(region).wram_loaded_map_tile_combination, combination);
        word(eb::source_profile(region).wram_first_entity, 0xffff);
        camera(384, 140);
        renderer.set_presentation_width(view(), width);
        renderer.enable_direct_rendering(true);
    }
    void word(unsigned at, unsigned value) {
        bus->work_ram[at] = value;
        bus->work_ram[at + 1] = value >> 8;
    }
    void camera(int x, int y) {
        const auto &source = eb::source_profile(region);
        for (unsigned layer = 0; layer < 2; ++layer) {
            word(layer ? source.wram_background_scroll.layer2_x : source.wram_background_scroll.layer1_x,
                 std::uint16_t(x));
            word(layer ? source.wram_background_scroll.layer2_y : source.wram_background_scroll.layer1_y,
                 std::uint16_t(y));
            bus->write_byte(0x210d + layer * 2, x & 255);
            bus->write_byte(0x210d + layer * 2, (x >> 8) & 3);
            bus->write_byte(0x210e + layer * 2, y & 255);
            bus->write_byte(0x210e + layer * 2, (y >> 8) & 3);
        }
    }
    eb::SceneReadView view() const {
        auto value = bus->scene_read_view();
        value.object_scene = &renderer;
        return value;
    }
    std::string context() const {
        return std::string(region == eb::GameVersion::US ? "US" : "JP") + " width=" + std::to_string(width);
    }
    struct Hardware {
        std::array<std::uint8_t, 131072> ram;
        std::array<std::uint8_t, 65536> video;
        std::array<std::uint8_t, 512> palette;
        std::array<std::uint8_t, 544> objects;
        std::array<std::uint32_t, 256 * 224> native;
        std::array<std::uint16_t, 8> scroll{};
        std::vector<std::uint8_t> registers;
        std::uint64_t clocks, frames;
        std::uint16_t fixed;
        explicit Hardware(const Fixture &f)
            : ram(f.bus->work_ram), video(f.bus->video_ram), palette(f.bus->palette_ram),
              objects(f.bus->object_attributes), native(f.bus->native_framebuffer),
              clocks(f.bus->master_clocks()), frames(f.bus->completed_frames), fixed(f.view().fixed_color) {
            const auto v = f.view();
            registers.assign(v.ppu_registers.begin(), v.ppu_registers.end());
            for (unsigned bg = 0; bg < 4; ++bg) {
                scroll[bg] = v.background_scroll_x[bg];
                scroll[bg + 4] = v.background_scroll_y[bg];
            }
        }
        bool unchanged(const Fixture &f) const {
            const auto v = f.view();
            bool same_scroll = true;
            for (unsigned bg = 0; bg < 4; ++bg)
                same_scroll &= scroll[bg] == v.background_scroll_x[bg] &&
                               scroll[bg + 4] == v.background_scroll_y[bg];
            return ram == f.bus->work_ram && video == f.bus->video_ram && palette == f.bus->palette_ram &&
                   objects == f.bus->object_attributes && native == f.bus->native_framebuffer && same_scroll &&
                   fixed == v.fixed_color && clocks == f.bus->master_clocks() && frames == f.bus->completed_frames &&
                   std::equal(registers.begin(), registers.end(), v.ppu_registers.begin());
        }
    };
    std::shared_ptr<const eb::DirectSceneFrame> capture() {
        const Hardware before(*this);
        for (unsigned y = 0; y < 224; ++y) {
            const auto current = view();
            renderer.begin_scanline(current, y);
            renderer.render_presentation_margins(current, y);
            renderer.capture_direct_scanline(current, y);
        }
        require(before.unchanged(*this), "Camera rendering mutated source hardware/gameplay: " + context());
        return renderer.direct_scene();
    }
    int render() {
        const auto frame = capture();
        require(bool(frame) && frame->motions.size() >= 3,
                "Camera path failed native/direct scene reconstruction: " + context());
        // Background motion is -native_camera_x - presentation_shift_x.
        // Convert it back to the left world coordinate of the displayed view.
        return int(std::lround(-frame->motions[1].x)) - int(width - 256) / 2;
    }
    int frame(int x, int y) {
        camera(x, y);
        ++bus->completed_frames;
        return render();
    }
    std::vector<std::uint8_t> snapshot() {
        eb::SnapshotArchive archive;
        archive(renderer);
        return archive.release_bytes();
    }
    void restore(std::span<const std::uint8_t> bytes) {
        eb::SnapshotArchive archive(bytes);
        archive(renderer);
        archive.finish();
    }
};

void natural_borders(eb::GameVersion region, unsigned width) {
    for (unsigned combination : {2u, 3u, 6u, 10u, 11u, 12u, 13u, 14u, 15u, 16u, 17u,
                                 19u, 20u, 21u, 22u, 23u, 24u, 25u, 26u}) {
        Fixture f(region, width, combination);
        const int margin = int(width - 256) / 2;
        // Both forest edges, a narrowing span, and repeated vertical seam
        // crossings must follow the source camera even outside the map span.
        for (const auto xy : std::array<std::array<int, 2>, 8>{{
                 {384, 143}, {384, 144}, {385, 150}, {384, 143},
                 {1024, 1472}, {3840, 1472}, {1408, 1548}, {1408, 1568}}}) {
            const int origin = f.frame(xy[0], xy[1]);
            check(origin == xy[0] - margin,
                  "Natural border forced camera correction, combination=" + std::to_string(combination) +
                      ": " + f.context());
            check(f.render() == origin,
                  "Repeated natural-border capture changed camera position: " + f.context());
        }
    }
}

void row_boundary(eb::GameVersion region, unsigned width) {
    Fixture f(region, width);
    int previous = f.frame(384, 140), largest_step = 0;
    for (int y : {141, 142, 143, 144, 145, 144, 143, 144, 143, 142, 141, 140}) {
        const int origin = f.frame(384, y);
        largest_step = std::max(largest_step, std::abs(origin - previous));
        const auto first = f.renderer.direct_scene();
        const auto pixels = f.renderer.presentation_pixels(f.bus->native_framebuffer);
        const std::vector<std::uint32_t> first_pixels(pixels.begin(), pixels.end());
        check(f.render() == origin, "Repeated same-frame capture advanced camera easing: " + f.context());
        const auto repeated = f.renderer.direct_scene();
        check(first->motions[1].x == repeated->motions[1].x &&
                  first->motions[2].x == repeated->motions[2].x &&
                  std::equal(first_pixels.begin(), first_pixels.end(),
                             f.renderer.presentation_pixels(f.bus->native_framebuffer).begin()),
              "Repeated same-frame capture changed framing/pixels: " + f.context());
        previous = origin;
    }
    check(largest_step <= 4,
          "A one-pixel forest row crossing moved the displayed world by " + std::to_string(largest_step) +
              "px (maximum 4px): " + f.context());
}

void seam_dither_and_settle(eb::GameVersion region, unsigned width) {
    Fixture f(region, width);
    const int initial = f.frame(384, 143);
    int farthest = 0;
    for (unsigned frame = 0; frame < 24; ++frame)
        farthest = std::max(farthest, std::abs(f.frame(384, frame & 1 ? 143 : 144) - initial));
    check(farthest <= 1,
          "Alternating one-pixel forest seam positions repeatedly recentered the camera: " + f.context());

    Fixture arrived(region, width);
    const int target = arrived.frame(384, 150);
    int previous = f.render(), largest_step = 0, reversals = 0;
    const int direction = target > previous ? 1 : -1;
    for (unsigned frame = 0; frame < 256 && previous != target; ++frame) {
        const int origin = f.frame(384, 150);
        const int delta = origin - previous;
        largest_step = std::max(largest_step, std::abs(delta));
        reversals += delta * direction < 0;
        previous = origin;
    }
    check(largest_step <= 4 && !reversals,
          "Settled forest framing did not approach its new target continuously: " + f.context());
    check(previous == target && previous != initial,
          "Persisting inside the new forest span never adapted its framing: " + f.context());
}

void ordinary_edges(eb::GameVersion region, unsigned width) {
    Fixture f(region, width);
    constexpr int left = 4 * 256, right = 16 * 256, y = 12 * 128 - 64;
    const int margin = int(width - 256) / 2;
    for (const int native_edge : {left + margin, right - int(width) + margin}) {
        int previous = f.frame(native_edge - 8, y), largest_step = 0;
        for (int x = native_edge - 7; x <= native_edge + 8; ++x) {
            const int origin = f.frame(x, y);
            largest_step = std::max(largest_step, std::abs(origin - previous));
            check(origin >= left && origin <= right - int(width),
                  "Ordinary map edge exposed neighboring sectors: " + f.context());
            previous = origin;
        }
        check(largest_step <= 4,
              "Ordinary map edge moved the displayed world by " + std::to_string(largest_step) + "px: " + f.context());
    }
}

void centered_selection(eb::GameVersion region, unsigned width, bool in_battle) {
    for (int camera : {4 * 256, 16 * 256 - 256}) {
        Fixture f(region, width);
        const auto &source = eb::source_profile(region);
        f.word(source.wram_battle_mode_flag, in_battle);
        if (in_battle) {
            f.bus->work_ram[source.wram_battle_backgrounds.layer1] = 1;
            f.bus->work_ram[source.wram_battle_backgrounds.layer1 + 1] = 4;
        }
        f.bus->write_byte(0x2109, 0x70); // Centered BG3 menu/HP panel.
        f.bus->write_byte(0x210c, 2);
        f.bus->write_byte(0x212c, 0x15);
        f.bus->palette_ram[2] = 0xe0; f.bus->palette_ram[3] = 3;
        f.bus->palette_ram[258] = 31; f.bus->palette_ram[259] = 0;
        for (unsigned row = 0; row < 8; ++row) {
            f.bus->video_ram[0x4010 + row * 2] = 255;
            f.bus->video_ram[row * 2] = 255;
        }
        f.bus->video_ram[0xe000 + (6 * 32 + 15) * 2] = 1;
        for (unsigned i = 0; i < 128; ++i) f.bus->object_attributes[i * 4 + 1] = 240;
        // An unmatched OAM indicator belongs to the native UI aperture. It
        // must stay with BG3 while the world alone shifts at either boundary.
        f.bus->object_attributes[0] = 124; f.bus->object_attributes[1] = 52;
        f.bus->object_attributes[3] = 0x30;
        for (unsigned row = 48; row < 56; ++row)
            for (unsigned x = 120; x < 128; ++x) f.bus->native_framebuffer[row * 256 + x] = 0xff00ff00;
        for (unsigned row = 52; row < 60; ++row)
            for (unsigned x = 124; x < 132; ++x) f.bus->native_framebuffer[row * 256 + x] = 0xffff0000;
        f.camera(camera, 12 * 128 - 64);
        if (!in_battle) {
            f.word(source.wram_first_entity, 0);
            f.word(source.wram_entity_next, 0xffff);
            f.word(source.wram_entity_draw_callback, source.entity_draw_callbacks.screen_space);
            f.word(source.wram_entity_screen_coordinates.x, 72);
            f.word(source.wram_entity_screen_coordinates.y, 81);
            f.word(source.wram_entity_spritemap_pointers.low, 0x4800);
            f.word(source.wram_entity_spritemap_pointers.high, 0x7e);
            for (unsigned row = 0; row < 8; ++row) f.bus->video_ram[32 + row * 2 + 1] = 255;
            f.bus->palette_ram[260] = 0; f.bus->palette_ram[261] = 0x7c;
            const std::array<std::uint8_t, 5> part{0, 1, 0x30, 0, 0x80};
            std::copy(part.begin(), part.end(), f.bus->work_ram.begin() + 0x4800);
            std::copy(part.begin(), part.end(), f.bus->work_ram.begin() + 0x4820);
            f.bus->object_attributes[4] = 72; f.bus->object_attributes[5] = 80;
            f.bus->object_attributes[6] = 1; f.bus->object_attributes[7] = 0x30;
            f.bus->object_attributes[8] = 200; f.bus->object_attributes[9] = 96;
            f.bus->object_attributes[10] = 1; f.bus->object_attributes[11] = 0x30;
            f.renderer.begin_sprite_frame(1);
            f.renderer.capture_entity_draw(f.view(), 0);
            f.renderer.capture_sprite_emit(f.view(), 0x7e4800, 72, 81, 1, 2);
            // A captured ripple/overlay has no actor identity, but it still
            // owns its emitted OAM ordinal and follows the scenery.
            f.renderer.capture_sprite_emit(f.view(), 0x7e4820, 200, 97, 2, 3);
            f.renderer.seal_sprite_frame(f.view());
            f.renderer.capture_oam_upload(f.view(), 1);
        }
        const auto frame = f.capture();
        if (!in_battle)
            require(bool(frame), "Selection fixture could not capture direct scene: " + f.context());
        const unsigned margin = (width - 256) / 2;
        const auto pixels = f.renderer.presentation_pixels(f.bus->native_framebuffer);
        bool centered = true;
        for (unsigned x = 0; x < width; ++x)
            centered &= (pixels[52 * width + x] == 0xffff0000) == (x >= margin + 124 && x < margin + 132);
        check(centered, "Selection indicator shifted away from centered UI in " +
            std::string(in_battle ? "battle" : "overworld") + ": " + f.context());
        check(pixels[48 * width + margin + 120] == 0xff00ff00,
              "BG3 selection panel moved with world framing: " + f.context());
        if (!in_battle) check(std::any_of(frame->quads.begin(), frame->quads.end(), [&](const auto &quad) {
            return quad.object && quad.motion == 0 && quad.x == float(margin + 124) && quad.y == 52;
        }), "Direct selection indicator shifted away from centered UI: " + f.context());
        if (!in_battle) {
            const int shift = int(std::lround(-frame->motions[1].x)) - camera;
            for (const auto [x, y] : {std::pair{72, 80}, std::pair{200, 96}}) {
                const int output = x + int(margin) - shift;
                check(pixels[y * width + output] == 0xff0000ff,
                      "Centering UI detached a captured world sprite from scenery: " + f.context());
                check(std::any_of(frame->quads.begin(), frame->quads.end(), [&](const auto &quad) {
                    return quad.object && quad.x == float(output) && quad.y == y;
                }), "Direct world sprite stopped following map framing: " + f.context());
            }
        }
    }
}

void native_movement(eb::GameVersion region, unsigned width) {
    Fixture f(region, width);
    int previous = f.frame(2048, 12 * 128 - 64);
    for (int x = 2049; x <= 2064; ++x) {
        const int origin = f.frame(x, 12 * 128 - 64);
        check(origin - previous == 1,
              "Presentation adaptation delayed ordinary native camera movement: " + f.context());
        previous = origin;
    }
}

void corridor_width_change(eb::GameVersion region, unsigned width) {
    Fixture f(region, width);
    int previous = f.frame(1408, 1548), largest_step = 0;
    for (int y = 1549; y <= 1568; ++y) {
        const int origin = f.frame(1408, y);
        largest_step = std::max(largest_step, std::abs(origin - previous));
        previous = origin;
    }
    check(largest_step <= 4,
          "A one-pixel corridor narrowing moved the displayed world by " + std::to_string(largest_step) +
              "px (maximum 4px): " + f.context());
}

void arrivals_reset(eb::GameVersion region, unsigned width) {
    Fixture moving(region, width);
    moving.frame(384, 143);
    moving.frame(384, 144);
    for (unsigned combination : {1u, 2u}) {
        const int y = int(19 + combination) * 128 - 64;
        moving.word(eb::source_profile(region).wram_loaded_map_tile_combination, combination);
        const int arrived = moving.frame(5312, y);
        Fixture fresh(region, width);
        fresh.word(eb::source_profile(region).wram_loaded_map_tile_combination, combination);
        const int initial = fresh.frame(5312, y);
        check(arrived == initial,
              "Map/teleport arrival retained stale forest camera easing, combination=" +
                  std::to_string(combination) + ": " + moving.context());
    }
}

void framing_resets(eb::GameVersion region, unsigned width) {
    Fixture moving(region, width);
    const auto restore = [&](bool window) {
        moving.frame(384, 143);
        for (unsigned i = 0; i < 12; ++i) moving.frame(384, 150);
        moving.bus->write_byte(window ? 0x2130 : 0x2105, window ? 0x40 : 0);
        ++moving.bus->completed_frames;
        check(!moving.capture(), "Excluded scene unexpectedly published direct world geometry: " + moving.context());
        moving.bus->write_byte(window ? 0x2130 : 0x2105, window ? 0 : 1);
        Fixture fresh(region, width);
        check(moving.frame(384, 150) == fresh.frame(384, 150),
              std::string(window ? "Window" : "Scene") + " framing retained prior camera easing: " + moving.context());
    };
    restore(false);
    restore(true);

    moving.frame(384, 143);
    for (unsigned i = 0; i < 12; ++i) moving.frame(384, 150);
    moving.width = width == 400 ? 1024 : 400;
    moving.renderer.set_presentation_width(moving.view(), moving.width);
    Fixture resized(region, moving.width);
    check(moving.frame(384, 150) == resized.frame(384, 150),
          "Aspect-ratio change retained prior camera easing: " + moving.context());
}

void interrupted_scene_resets(eb::GameVersion region, unsigned width) {
    for (const bool battle : {false, true}) {
        Fixture f(region, width);
        f.frame(384, 143);
        for (unsigned frame = 0; frame < 12; ++frame) f.frame(384, 150);
        if (battle) {
            f.word(eb::source_profile(region).wram_battle_mode_flag, 1);
            f.bus->write_byte(0x2107, 4);
        }
        else f.bus->write_byte(0x2100, 0x80);
        ++f.bus->completed_frames;
        check(!f.capture(),
              std::string(battle ? "Battle" : "Forced blank") + " published direct world geometry: " + f.context());
        if (battle) {
            f.word(eb::source_profile(region).wram_battle_mode_flag, 0);
            f.bus->write_byte(0x2107, 0x39);
        }
        else f.bus->write_byte(0x2100, 15);
        Fixture fresh(region, width);
        check(f.frame(384, 150) == fresh.frame(384, 150),
              std::string(battle ? "Battle" : "Forced blank") + " retained old camera easing: " + f.context());
    }
}

void same_frame_window(eb::GameVersion region, unsigned width) {
    Fixture f(region, width);
    f.frame(384, 143);
    for (unsigned frame = 0; frame < 12; ++frame) f.frame(384, 150);
    const int native_origin = 384 - int(width - 256) / 2;
    check(f.render() != native_origin,
          "Same-frame window fixture never acquired an adaptive offset: " + f.context());
    f.bus->write_byte(0x2130, 0x40);
    check(!f.capture(), "Same-frame color window published direct world geometry: " + f.context());
    // Clear the aperture within the same logical frame so the recovered direct
    // motion exposes its framing, before a new frame can initialize history.
    f.bus->write_byte(0x2130, 0);
    check(f.render() == native_origin,
          "Enabling a color window mid-frame retained a stale adaptive offset: " + f.context());
    Fixture fresh(region, width);
    check(f.frame(384, 150) == fresh.frame(384, 150),
          "The frame after a color window did not initialize fresh framing: " + f.context());
}

void snapshot_continuation(eb::GameVersion region, unsigned width, unsigned new_span_frames) {
    Fixture live(region, width);
    live.frame(384, 143);
    for (unsigned frame = 0; frame < new_span_frames; ++frame) live.frame(384, 150);
    const auto bytes = live.snapshot();
    Fixture restored(region, width);
    restored.bus = std::make_unique<eb::SnesBus>(*live.bus);
    restored.restore(bytes);
    check(restored.snapshot() == bytes,
          "Camera snapshot changed serialized pending/easing state on restore: " + live.context());
    check(live.render() == restored.render() && live.snapshot() == restored.snapshot(),
          "Repeated restored capture advanced camera state: " + live.context());
    const std::string milestone = new_span_frames == 7 ? "pending seam" : "mid-easing";
    // Continue forward, reverse over the seam, and walk laterally while the
    // display correction is still settling. Sources stay byte-identical.
    for (unsigned frame = 0; frame < 32; ++frame) {
        const int y = frame < 12 ? 150 : frame < 24 ? 143 : 150;
        const int x = frame < 24 ? 384 : 385 + int(frame - 24);
        check(live.frame(x, y) == restored.frame(x, y),
              "Restoring " + milestone + " changed future camera framing: " + live.context());
        const auto a = live.renderer.presentation_pixels(live.bus->native_framebuffer);
        const auto b = restored.renderer.presentation_pixels(restored.bus->native_framebuffer);
        check(a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin()),
              "Restoring " + milestone + " changed future presentation pixels: " + live.context());
        if (frame == 7 || frame == 23 || frame == 31)
            check(live.snapshot() == restored.snapshot(),
                  "Restoring " + milestone + " changed future serialized renderer state: " + live.context());
    }
}
} // namespace

int main() {
    try {
        for (auto region : {eb::GameVersion::US, eb::GameVersion::JP})
            for (unsigned width : {258u, 296u, 360u, 400u, 448u, 512u, 800u, 1024u}) {
                natural_borders(region, width);
                row_boundary(region, width);
                seam_dither_and_settle(region, width);
                ordinary_edges(region, width);
                centered_selection(region, width, false);
                centered_selection(region, width, true);
                native_movement(region, width);
                corridor_width_change(region, width);
                arrivals_reset(region, width);
                framing_resets(region, width);
                interrupted_scene_resets(region, width);
                same_frame_window(region, width);
                if (width == 400 || width == 1024) {
                    snapshot_continuation(region, width, 7);
                    snapshot_continuation(region, width, 12);
                }
            }
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
    std::cout << checks << " checks, " << failures << " failures\n";
    return failures ? 1 : 0;
}
