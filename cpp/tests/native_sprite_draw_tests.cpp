#include "eb/game_scene_renderer.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/overworld_sprite_draw.hpp"
#include "eb/overworld_sprite_runtime.hpp"
#include "eb/snes_bus.hpp"
#include "generated_profile.hpp"
#include "native_sprite_fixture.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <tuple>

namespace {
void check(bool good, const char *message) { if (!good) throw std::runtime_error(message); }
std::vector<std::uint8_t> assets(eb::GameVersion version) {
    std::vector<std::uint8_t> result(0x300000);
    native_sprite_test::Fixture small;
    std::copy(small.bytes.begin(), small.bytes.end(), result.begin());
    const auto catalog = eb::native::sprite_catalog_layout(version);
    const unsigned group = catalog.groups_end - 41;
    std::copy_n(small.bytes.begin() + 32, 41, result.begin() + group);
    const auto pointer = [&](unsigned at, unsigned target) {
        target += 0xc00000;
        for (unsigned i = 0; i < 4; ++i) result[at + i] = target >> (i * 8);
    };
    for (unsigned id = 0; id < catalog.group_count; ++id) pointer(catalog.groups + id * 4, group);
    for (unsigned id = 0; id < catalog.shape_count; ++id) pointer(catalog.shapes + id * 4, 128);
    for (unsigned id = 0; id < catalog.shape_count; ++id) {
        result[catalog.shapes - 170 + id * 2] = 16;
        result[catalog.shapes - 169 + id * 2] = 0;
    }
    const unsigned queue_delta = version == eb::GameVersion::JP ? 15 : 0;
    for (unsigned i = 0; i < 4; ++i) {
        const unsigned at = 0x8c65 - queue_delta + i * 2;
        const unsigned target = 0x8c6d - queue_delta + i * 26;
        result[at] = target; result[at + 1] = target >> 8;
    }
    const unsigned overlay_catalog = version == eb::GameVersion::JP ? 0x40d7d : 0x40e31;
    const unsigned overlay_maps = overlay_catalog + 17;
    result[overlay_catalog] = 4;
    for (unsigned i = 0; i < 4; ++i) {
        const unsigned at = overlay_catalog + 1 + i * 4;
        result[at + 2] = 0; result[at + 3] = i ? 0xff : 1;
    }
    for (unsigned offset = 0; offset < 110; offset += 5) {
        const unsigned at = overlay_maps + offset;
        result[at] = 0xf0; result[at + 1] = 0x60; result[at + 2] = 0x3b;
        result[at + 3] = 0xf8;
        result[at + 4] = offset >= 70 && offset % 10 == 0 ? 0 : 0x80;
    }
    // OverlaySprites imports every authored clip eagerly. Supply the four
    // finite loops even though these draw checks use the separate script below.
    for (const unsigned offset : {162u, 110u, 174u, 194u}) {
        const unsigned start = overlay_maps + offset;
        const unsigned clip[] = {1, overlay_maps & 0xffff, 2, 3, 3, start & 0xffff};
        for (unsigned i = 0; i < std::size(clip); ++i) {
            result[start + i * 2] = clip[i];
            result[start + i * 2 + 1] = clip[i] >> 8;
        }
    }
    const unsigned script[] = {1, overlay_maps & 0xffff, 2, 3, 3, 0x1200};
    for (unsigned i = 0; i < std::size(script); ++i) {
        result[0x41200 + i * 2] = script[i]; result[0x41201 + i * 2] = script[i] >> 8;
    }
    return result;
}
struct Fixture {
    eb::GameVersion version;
    std::vector<std::uint8_t> content;
    std::unique_ptr<eb::SnesBus> bus;
    eb::GameSceneRenderer renderer;
    explicit Fixture(eb::GameVersion region, bool native = true)
        : version(region), content(assets(region)), bus(std::make_unique<eb::SnesBus>(content, region)) {
        if (native) bus->enable_native_sprite_runtime(true);
        bus->write_byte(0x2100, 15); bus->write_byte(0x2101, 0x60);
        bus->write_byte(0x2105, 1); bus->write_byte(0x2107, 0x39); bus->write_byte(0x2108, 0x59);
        bus->write_byte(0x212c, 16);
        for (unsigned i = 0; i < 128; ++i) bus->object_attributes[i * 4 + 1] = 224;
        for (unsigned i = 0; i < 256; ++i) {
            bus->palette_ram[i * 2] = i; bus->palette_ram[i * 2 + 1] = (i >> 3) & 0x7f;
        }
        word(eb::source_profile(region).wram_first_entity, 0xffff);
    }
    unsigned loc(unsigned us, unsigned jp) const { return version == eb::GameVersion::JP ? jp : us; }
    void word(unsigned at, unsigned value) { bus->work_ram[at] = value; bus->work_ram[at + 1] = value >> 8; }
    unsigned word(unsigned at) const { return bus->work_ram[at] | unsigned(bus->work_ram[at + 1]) << 8; }
    eb::SceneReadView view() const { auto v = bus->scene_read_view(); v.object_scene = &renderer; return v; }
    std::shared_ptr<const eb::native::SpriteImage> image(unsigned frame = 0) {
        return bus->native_sprite_runtime()->resources()->acquire(0, frame);
    }
    void publish() { renderer.seal_sprite_frame(view()); renderer.capture_oam_upload(view(), 1); renderer.begin_scanline(view(), 0); }
    void actor(unsigned slot, bool selected = true) {
        const auto &s = eb::source_profile(version);
        word(loc(0x2cd6, 0x30d4) + slot, 0);
        word(s.wram_entity_spritemap_pointers.low + slot, 0x4800);
        word(s.wram_entity_spritemap_pointers.high + slot, 0x7e);
        word(s.wram_entity_screen_coordinates.x + slot, 128);
        word(s.wram_entity_screen_coordinates.y + slot, 112);
        word(s.wram_entity_draw_priority + slot, 1);
        word(s.wram_entity_animation_frame + slot, 0);
        word(s.wram_entity_draw_callback + slot, s.entity_draw_callbacks.screen_space);
        word(s.wram_entity_body_divides + slot, 0x0101);
        word(s.wram_entity_spritemap_sizes + slot, 10);
        word(loc(0x2a7e, 0x2e7c) + slot, 64);
        for (unsigned part = 0; part < 2; ++part) {
            const unsigned at = 0x4800 + part * 5;
            bus->work_ram[at] = std::uint8_t(-24 + int(part * 16));
            bus->work_ram[at + 1] = part * 32; bus->work_ram[at + 2] = 0x3a;
            bus->work_ram[at + 3] = 0xf8; bus->work_ram[at + 4] = part ? 0x80 : 0;
        }
        if (auto *runtime = bus->native_sprite_runtime()) {
            eb::MainCpu65816 cpu(*bus); cpu.emulation_mode = false; cpu.status_register = 0;
            cpu.stack_pointer = 0x1e00; cpu.program_counter = loc(0xc01e49, 0xc01e5f); cpu.accumulator = 0;
            check(!runtime->try_execute(cpu, *bus), "Creation hook unexpectedly retired caller");
            cpu.program_counter = loc(0xc020f0, 0xc020fe); cpu.accumulator = slot / 2;
            check(!runtime->try_execute(cpu, *bus), "Creation commit unexpectedly retired caller");
            if (selected) runtime->replace_image(slot, image());
        }
    }
    void draw(unsigned slot, bool native, bool source_gate = false, bool overflow = false) {
        eb::MainCpu65816 cpu(*bus); cpu.emulation_mode = false;
        cpu.status_register = overflow ? eb::MainCpu65816::Overflow : 0;
        cpu.data_bank = 0x7e; cpu.direct_page = 0x1d00; cpu.stack_pointer = 0x1fff;
        cpu.x_index = slot;
        word(cpu.direct_page + 0x88, slot); word(cpu.direct_page + 0x8c, 0x4800); word(cpu.direct_page + 0x8e, 0x7e);
        // The indexed callback pointer lives in low WRAM; the original caller
        // executes from a low-bank code mirror where that address maps to RAM.
        const unsigned returned = source_gate ? 0x00ff03 : 0xc0ff03;
        cpu.program_counter = returned - 3;
        cpu.execute_instruction<0x20>(source_gate ? loc(0xa0e3, 0xa0c2) : loc(0xa3a4, 0xa383), 3);
        unsigned steps = 0;
        while (cpu.program_counter != returned && ++steps < 10000) {
            if (native && eb::try_native_sprite_draw(cpu, *bus, *bus->native_sprite_runtime(), renderer))
                continue;
            cpu.step_instruction();
        }
        check(steps < 10000, "Reference draw did not return");
        check(cpu.program_counter == returned && cpu.stack_pointer == 0x1fff, "Draw changed caller stack/return");
    }
};

void queue_checks(eb::GameVersion region) {
    Fixture f(region);
    auto img = f.image();
    auto v = f.view();
    f.renderer.begin_sprite_frame(1);
    // Reverse submission priority: source priority queues, then first opaque
    // part within one queue, decide overlap; palette is creation-owned.
    f.renderer.queue_native_sprite(v, img, 1, 2, 128, 112, 0, 3);
    f.renderer.queue_native_sprite(v, img, 2, 5, 128, 112, 3, 0);
    f.publish();
    unsigned visible = 0;
    for (unsigned y = 0; y < 224; ++y) {
        std::array<eb::PpuPixel, 256> pixels{};
        check(f.renderer.try_native_sprite_pixels(f.view(), y, pixels, 0).has_value(), "Native list fell back to OAM");
        for (const auto &pixel : pixels) if (pixel.priority >= 0) {
            check(pixel.palette_index / 16 == 13 && pixel.priority == 7, "Native priority/palette/surface order differs");
            ++visible;
        }
    }
    check(visible > 100, "Native commands drew no imported art");
    // Native artwork and descriptors survive both legacy stores being poisoned.
    std::fill(f.bus->video_ram.begin(), f.bus->video_ram.end(), 0xa5);
    std::fill(f.bus->work_ram.begin() + 0x4000, f.bus->work_ram.begin() + 0x8000, 0xcc);
    std::array<eb::PpuPixel, 256> row{};
    f.renderer.try_native_sprite_pixels(f.view(), 100, row, 0);
    check(std::any_of(row.begin(), row.end(), [](auto p) { return p.priority == 7; }), "Poisoned legacy stores changed native art");
    f.renderer.begin_sprite_frame(1);
    for (unsigned actor = 0; actor < 200; ++actor)
        f.renderer.queue_native_sprite(f.view(), img, actor + 3, 5, 128, 112, 0, 1);
    f.publish();
    check(f.renderer.native_sprite_part_count() == 400, "Native command capacity retained OAM limit");
    row = {};
    check(f.renderer.try_native_sprite_pixels(f.view(), 100, row, 0) == 0, "Native extra parts manufactured hardware overflow");
    const auto retained = f.renderer;
    f.renderer.begin_sprite_frame(1); f.publish();
    check(f.renderer.native_sprite_part_count() == 0 && retained.native_sprite_part_count() == 400,
          "Published native commands were aliased across renderer copies");
}
void draw_checks(eb::GameVersion region) {
    for (unsigned surface : {0u, 1u, 3u, 4u, 8u, 9u, 12u})
        for (unsigned overlay_flags : {0u, 0x8000u, 0x4000u, 0xc000u}) {
            Fixture native(region), source(region, false);
            constexpr unsigned slot = 48;
            native.actor(slot); source.actor(slot);
            const auto &s = eb::source_profile(region);
            const unsigned delta = region == eb::GameVersion::JP ? 0x3fe : 0;
            for (auto *f : {&native, &source}) {
                f->word(s.wram_entity_surface_flags + slot, surface);
                f->word(0x2e7a + delta + slot, overlay_flags);
                f->word(s.wram_entity_draw_priority + slot, 0x8000); // borrow actor0 priority once
                f->word(s.wram_entity_draw_priority, 2);
                for (unsigned at : {0x301eu, 0x30d2u, 0x2f6au, 0x2eb6u}) f->word(at + delta + slot, 0x1200);
            }
            native.renderer.begin_sprite_frame(1);
            // These bytes must be irrelevant to the replaced ordinary callback.
            std::fill(native.bus->work_ram.begin() + 0x4800, native.bus->work_ram.begin() + 0x4900, 0xcc);
            native.draw(slot, true); source.draw(slot, false);
            check(native.word(s.wram_entity_draw_priority + slot) == 0, "Priority owner was not released");
            check(native.word(native.loc(0x2400, 0x2800)) == 2, "Borrowed draw priority differs");
            for (unsigned at = 0x2e7a; at < 0x3186; at += 2)
                check(native.word(at + delta + slot) == source.word(at + delta + slot), "Native overlay state differs from source callback");
            native.publish();
            check(native.renderer.native_sprite_part_count() >= 2, "Ordinary source draw did not produce native commands");
        }
    Fixture unselected(region); unselected.actor(0, false); unselected.renderer.begin_sprite_frame(1);
    unselected.draw(0, true); unselected.publish();
    check(unselected.renderer.native_sprite_part_count() == 0, "Unselected actor exposed stale art");
    for (unsigned bank : {0x007eu, 0x407eu, 0x807eu})
        for (bool overflow : {false, true}) {
            Fixture native(region), source(region, false);
            const auto &profile = eb::source_profile(region);
            for (auto *f : {&native, &source}) {
                f->actor(0);
                f->word(profile.wram_entity_spritemap_pointers.high, bank);
                f->word(f->loc(0x2400, 0x2800), 0xbeef);
            }
            native.renderer.begin_sprite_frame(1);
            native.draw(0, true, true, overflow); source.draw(0, false, true, overflow);
            native.publish();
            const bool source_visible = source.word(source.loc(0x2400, 0x2800)) != 0xbeef;
            if (source_visible != !(overflow || (bank & 0x8000)))
                throw std::runtime_error("Source visibility oracle: bank=" + std::to_string(bank) + " V=" + std::to_string(overflow) + " visible=" + std::to_string(source_visible));
            check((native.renderer.native_sprite_part_count() != 0) == source_visible,
                  "Native visibility mistakes bank bit14 for processor V");
        }
    for (int x : {-65, 320})
        for (unsigned bank : {0x407eu, 0x807eu}) {
            Fixture edge(region); edge.actor(0);
            const auto &profile = eb::source_profile(region);
            edge.word(profile.wram_first_entity, 0); edge.word(profile.wram_entity_next, 0xffff);
            edge.word(profile.wram_entity_screen_coordinates.x, std::uint16_t(x));
            edge.word(profile.wram_entity_spritemap_pointers.high, bank);
            edge.renderer.begin_sprite_frame(1); edge.publish();
            check((edge.renderer.native_sprite_part_count() != 0) == !(bank & 0x8000),
                  "Far-edge continuation does not preserve persistent actor visibility");
        }
}
void fragment_checks(eb::GameVersion region) {
    Fixture f(region);
    auto pixels = std::make_shared<eb::native::SpriteFragmentPixels>();
    pixels->width = 8; pixels->height = 16; pixels->indices.resize(128);
    for (unsigned y = 0; y < 16; ++y)
        for (unsigned x = 0; x < 8; ++x) pixels->indices[y * 8 + x] = (x + y) % 15 + 1;
    const std::array fragments{
        eb::native::SpriteFragment{-4, -8, 3, 2, pixels},
        eb::native::SpriteFragment{4, -8, 6, 3, pixels}};
    f.renderer.set_presentation_width(f.view(), 398);
    f.renderer.enable_direct_rendering(true);
    f.renderer.begin_sprite_frame(1);
    for (int x : {-12, 128, 270})
        f.renderer.queue_native_fragments(f.view(), fragments, 0, x, 100, 1);
    f.publish();
    check(f.renderer.native_sprite_part_count() == 0, "Generic art was counted as ordinary actor ownership");
    const auto render = [&]() {
        for (unsigned y = 0; y < 224; ++y) {
            auto view = f.view();
            f.renderer.begin_scanline(view, y);
            std::array<eb::PpuPixel, 256> row{};
            f.renderer.try_native_sprite_pixels(view, y, row, 0);
            for (unsigned x = 0; x < 256; ++x)
                f.bus->native_framebuffer[y * 256 + x] =
                    f.renderer.compose_presentation_pixel(view, x, y, row[x], false);
            f.renderer.render_presentation_margins(view, y);
            f.renderer.capture_direct_scanline(view, y);
        }
        const auto frame = f.renderer.direct_scene();
        check(bool(frame), "Native fragments did not produce an exact direct frame");
        check(std::count_if(frame->quads.begin(), frame->quads.end(), [](const auto &quad) { return quad.object; }) == 6,
              "Native fragment canonical/direct geometry differs");
        return eb::rasterize_direct_scene({frame, {}});
    };
    const auto expected = render();
    std::fill(f.bus->video_ram.begin() + 0x8000, f.bus->video_ram.end(), 0xa5);
    check(render() == expected, "Native fragment pixels depend on source graphics memory");
    std::array<eb::PpuPixel, 398> row{};
    f.renderer.try_native_sprite_pixels(f.view(), 91, row, -71);
    for (int anchor : {-12, 128, 270}) {
        check(row[anchor - 4 + 71].palette_index == 177 && row[anchor - 4 + 71].priority == 7,
              "Fragment small-width palette or row mapping differs");
        check(row[anchor + 4 + 71].palette_index == 225 && row[anchor + 4 + 71].priority == 10,
              "Fragment per-part palette or depth differs");
    }
}
// C0DB0F draws raw-priority1 actors by greatest unsigned world Y first;
// ties retain linked-list order. Offscreen continuation must join that order,
// including relative to callbacks already queued for the native viewport.
void continuation_order_checks(eb::GameVersion region) {
    const auto run = [&](unsigned near_y, unsigned far_y, unsigned priority, bool far_first,
                         unsigned expected_color, bool borrowed_near = false,
                         bool borrowed_far = false, bool overlay = false) {
      for (bool right : {false, true}) {
        Fixture f(region);
        const auto &profile = eb::source_profile(region);
        f.actor(0); f.actor(2);
        const auto color_actor = [&](unsigned slot, unsigned color) {
            auto image = std::make_shared<eb::native::SpriteImage>(*f.image());
            for (auto &part : image->parts) part.indices.fill(std::uint8_t(color));
            std::fill(image->indices.begin(), image->indices.end(), std::uint8_t(color));
            f.bus->native_sprite_runtime()->replace_image(slot, std::move(image));
        };
        color_actor(0, 1); color_actor(2, 2);
        f.word(profile.wram_first_entity, far_first ? 2 : 0);
        f.word(profile.wram_entity_next, far_first ? 0xffff : 2);
        f.word(profile.wram_entity_next + 2, far_first ? 0 : 0xffff);
        const int near_x = right ? 319 : -60, far_x = right ? 320 : -65;
        f.word(profile.wram_entity_screen_coordinates.x, std::uint16_t(near_x));
        f.word(profile.wram_entity_screen_coordinates.x + 2, std::uint16_t(far_x));
        f.word(profile.wram_entity_world_coordinates.y, near_y);
        f.word(profile.wram_entity_world_coordinates.y + 2, far_y);
        const unsigned near_priority = borrowed_near ? 0xc001 : priority;
        f.word(profile.wram_entity_draw_priority, near_priority);
        f.word(profile.wram_entity_draw_priority + 2, borrowed_far ? 0xc000 : priority);
        f.renderer.begin_sprite_frame(1);
        const auto mark = f.renderer.native_actor_draw_mark();
        if (overlay) {
            auto pixels = std::make_shared<eb::native::SpriteFragmentPixels>();
            pixels->width = pixels->height = 16;
            pixels->indices.assign(256, 3);
            const auto palette = f.bus->native_sprite_runtime()->snapshot(0)->creation.sprite.palette;
            const std::array fragments{eb::native::SpriteFragment{-8, -24, palette, 3, pixels}};
            f.renderer.queue_native_fragments(f.view(), fragments, 0, near_x, 112, priority);
        }
        // Only the near actor reaches C0DB0F's [-64,320) native callback gate.
        // The far actor's immutable art is added at seal for widescreen pixels.
        f.draw(0, true);
        if (overlay)
            f.renderer.finish_native_actor_draw(f.view(), mark, 0, near_priority);
        f.publish();
        std::array<eb::PpuPixel, 398> row{};
        check(f.renderer.try_native_sprite_pixels(f.view(), 100, row, -71).has_value(),
              "Mixed continuation frame has no owned native sprites");
        const unsigned sample = unsigned((right ? 313 : -66) + 71);
        const auto palette = f.bus->native_sprite_runtime()->snapshot(0)->creation.sprite.palette;
        if (row[sample].palette_index != 128 + palette * 16 + expected_color)
            throw std::runtime_error("Far-edge continuation changed authored draw order: priority=" +
                std::to_string(priority) + " nearY=" + std::to_string(near_y) +
                " farY=" + std::to_string(far_y) + " farFirst=" + std::to_string(far_first) +
                " right=" + std::to_string(right) + " borrowedNear=" + std::to_string(borrowed_near) +
                " borrowedFar=" + std::to_string(borrowed_far) + " overlay=" + std::to_string(overlay));
      }
    };
    run(100, 200, 1, false, 2);
    run(200, 100, 1, false, 1);
    run(100, 100, 1, false, 1);
    run(100, 100, 1, true, 2);
    run(100, 0xff00, 1, false, 2); // Source compares unsigned 16-bit depth.
    // Borrowing queue1 does not make raw-priority!=1 actors depth-sorted.
    run(200, 100, 1, false, 2, false, true);
    run(100, 200, 1, true, 1, true, false);
    // Sorting bundles must preserve an actor's overlay-before-body command
    // order, while allowing a nearer far actor to precede the complete bundle.
    run(200, 100, 1, false, 3, false, false, true);
    run(100, 200, 1, false, 2, false, false, true);
    for (unsigned priority : {0u, 2u, 3u}) {
        run(200, 100, priority, true, 2);
        run(100, 200, priority, false, 1);
    }
}

// Culled actors must retain only their last authored overlay pose. Re-running
// overlay scripts here would change timers/RNG; retaining the old body would
// hide new animation/effect artwork selected while outside the source gate.
void continuation_overlay_checks(eb::GameVersion region) {
    const auto &profile = eb::source_profile(region);
    for (bool right : {false, true}) {
        Fixture continued(region), reference(region);
        const int near_x = right ? 319 : -60, far_x = right ? 320 : -65;
        const auto place = [&](Fixture &f, int x) {
            f.word(profile.wram_first_entity, 0); f.word(profile.wram_entity_next, 0xffff);
            f.word(profile.wram_entity_screen_coordinates.x, std::uint16_t(x));
        };
        const auto body = [&](Fixture &f, unsigned color) {
            auto image = std::make_shared<eb::native::SpriteImage>(*f.image());
            for (auto &part : image->parts) part.indices.fill(std::uint8_t(color));
            std::fill(image->indices.begin(), image->indices.end(), std::uint8_t(color));
            f.bus->native_sprite_runtime()->replace_image(0, std::move(image));
        };
        const auto frame = [&](Fixture &f) {
            std::vector<unsigned> pixels;
            for (unsigned y = 0; y < 224; ++y) {
                std::array<eb::PpuPixel, 398> row{};
                check(f.renderer.try_native_sprite_pixels(f.view(), y, row, -71).has_value(),
                      "Overlay continuation lost native frame ownership");
                for (auto pixel : row)
                    pixels.push_back((unsigned(pixel.priority + 1) << 16) | pixel.palette_index);
            }
            return pixels;
        };
        for (auto *f : {&continued, &reference}) {
            f->actor(0); place(*f, near_x); body(*f, 1);
            f->word(profile.wram_entity_surface_flags, 8); // Actual ripple callback.
            f->word(f->loc(0x301e, 0x341c), 0x1200);
            f->renderer.begin_sprite_frame(1); f->draw(0, true); f->publish();
            place(*f, far_x); body(*f, 2);
        }
        auto copied_renderer = continued.renderer;
        reference.renderer.begin_sprite_frame(1); reference.draw(0, true); reference.publish();
        const auto expected = frame(reference);
        const auto source_state = continued.bus->work_ram;
        continued.renderer.begin_sprite_frame(1); continued.publish();
        check(continued.bus->work_ram == source_state, "Far-edge overlay advanced source effect state");
        check(frame(continued) == expected, "Far-edge overlay pose/anchor differs from authored callback art");
        const auto body_color = 128 + continued.bus->native_sprite_runtime()->snapshot(0)->creation.sprite.palette * 16 + 2;
        check(std::any_of(expected.begin(), expected.end(), [=](unsigned p) {
                  return p >> 16 && (p & 0xffff) != body_color;
              }), "Overlay continuation fixture did not draw any distinct overlay pixels");
        check(std::any_of(expected.begin(), expected.end(), [=](unsigned p) {
                  return p >> 16 && (p & 0xffff) == body_color;
              }), "Overlay continuation retained the old body instead of the current image");

        // A source callback with no overlay clears only this renderer's cache.
        // The independent copied renderer still retains its previous artwork.
        place(continued, near_x);
        continued.word(profile.wram_entity_surface_flags, 0);
        continued.renderer.begin_sprite_frame(1); continued.draw(0, true); continued.publish();
        place(continued, far_x);
        continued.renderer.begin_sprite_frame(1); continued.publish();
        const auto no_overlay = frame(continued);
        check(no_overlay != expected, "Authored overlay removal retained obsolete effect art");
        continued.word(profile.wram_entity_surface_flags, 8);
        copied_renderer.begin_sprite_frame(1);
        auto copied_view = continued.view(); copied_view.object_scene = &copied_renderer;
        copied_renderer.seal_sprite_frame(copied_view);
        copied_renderer.capture_oam_upload(copied_view, 1); copied_renderer.begin_scanline(copied_view, 0);
        std::swap(continued.renderer, copied_renderer);
        check(frame(continued) == expected, "Overlay history leaked across independent renderer copies");

        // Slot reuse must not grant a new native resource an old actor's effect.
        const auto old_id = continued.bus->native_sprite_runtime()->snapshot(0)->id;
        continued.actor(0); body(continued, 2); place(continued, far_x);
        continued.word(profile.wram_entity_surface_flags, 0);
        check(continued.bus->native_sprite_runtime()->snapshot(0)->id != old_id, "Slot reuse fixture retained generation");
        continued.renderer.begin_sprite_frame(1); continued.publish();
        check(frame(continued) == no_overlay, "Reused actor inherited a retired generation's overlay");

        // A far actor never actually drawn must not invent overlay artwork.
        Fixture never_drawn(region); never_drawn.actor(0); body(never_drawn, 2); place(never_drawn, far_x);
        never_drawn.renderer.begin_sprite_frame(1); never_drawn.publish();
        check(frame(never_drawn) == no_overlay, "Never-drawn far actor manufactured an overlay pose");
    }
}

void overlay_motion_checks(eb::GameVersion region) {
    Fixture f(region); f.actor(0);
    const auto &profile = eb::source_profile(region);
    f.word(profile.wram_first_entity,0); f.word(profile.wram_entity_next,0xffff);
    f.renderer.set_presentation_width(f.view(),398);
    f.renderer.enable_direct_rendering(true);
    auto pixels = std::make_shared<eb::native::SpriteFragmentPixels>();
    pixels->width = pixels->height = 16; pixels->indices.assign(256,3);
    const std::array fragments{eb::native::SpriteFragment{-8,-24,5,3,pixels}};
    eb::DirectSceneMotion motion;
    float presentation_offset_x = 0;
    for (unsigned phase = 0; phase < 3; ++phase) {
        const int x = 128 + int(phase) * 4, y = 112 + int(phase) * 2;
        f.bus->completed_frames = phase;
        f.word(profile.wram_entity_screen_coordinates.x,x);
        f.word(profile.wram_entity_screen_coordinates.y,y);
        f.renderer.begin_sprite_frame(1);
        const auto mark = f.renderer.native_actor_draw_mark();
        if (phase < 2)
            f.renderer.queue_native_fragments(f.view(),fragments,0,x,y + (phase == 0 ? 8 : 0),1);
        f.draw(0,true);
        f.renderer.finish_native_actor_draw(f.view(),mark,0,1);
        f.publish();
        for (unsigned row_index = 0; row_index < 224; ++row_index) {
            auto view = f.view(); f.renderer.begin_scanline(view,row_index);
            std::array<eb::PpuPixel,256> row{};
            f.renderer.try_native_sprite_pixels(view,row_index,row,0);
            for (unsigned col = 0; col < 256; ++col)
                f.bus->native_framebuffer[row_index * 256 + col] =
                    f.renderer.compose_presentation_pixel(view,col,row_index,row[col],false);
            f.renderer.render_presentation_margins(view,row_index);
            f.renderer.capture_direct_scanline(view,row_index);
        }
        const auto frame = f.renderer.direct_scene();
        check(bool(frame),"Actor overlay motion fixture did not create an exact direct scene");
        const auto id = (std::uint64_t{1} << 63) | f.bus->native_sprite_runtime()->snapshot(0)->id;
        const auto found = std::find_if(frame->motions.begin(),frame->motions.end(),
            [=](const auto &m) { return m.identity == id; });
        check(found != frame->motions.end(),"Direct actor motion identity was lost");
        if (!phase) presentation_offset_x = found->x - x;
        check(found->x == x + presentation_offset_x && found->y == y - 1,
              "Overlay selection/vertical offset changed the body's canonical motion anchor");
        const unsigned group = unsigned(found - frame->motions.begin());
        unsigned objects = 0;
        for (const auto &quad : frame->quads) if (quad.object) {
            check(quad.motion == group,"Overlay and body use different high-rate motion groups");
            ++objects;
        }
        check(objects == (phase < 2 ? 3u : 2u),"Overlay motion fixture lost body or overlay geometry");
        motion.submit(frame);
        if (phase) {
            for (double fraction : {.25,.5,.75}) {
                const auto &picture = motion.sample(fraction);
                check(picture.offsets[group].x == float(-4 * (1-fraction)) &&
                      picture.offsets[group].y == float(-2 * (1-fraction)),
                      "Overlay toggle/offset perturbed fractional actor motion");
                for (const auto &quad : frame->quads) if (quad.object)
                    check(picture.offsets[quad.motion].x == picture.offsets[group].x &&
                          picture.offsets[quad.motion].y == picture.offsets[group].y,
                          "Fractional body/overlay displacements differ");
            }
        }
    }
}

void failed_enable_checks(eb::GameVersion version) {
    Fixture f(version);
    f.actor(0);
    const auto &profile = eb::source_profile(version);
    f.word(profile.wram_first_entity, 0);
    f.word(profile.wram_entity_next, 0xffff);
    f.word(profile.wram_entity_screen_coordinates.x, 320);
    f.bus->set_presentation_width(522);
    f.bus->set_logical_clock_policy(eb::LogicalClockPolicy::ActorFrames);
    const unsigned body = f.loc(0xc09470, 0xc0944f);
    check(!f.bus->wait_for_native_actor_tick(body) && f.bus->native_actor_tick_count() == 1,
          "Enable transaction fixture did not retain an admitted actor tick");
    // Prepare an actual bus-owned native frame without executing a CPU tick.
    // The far actor continuation provides immutable artwork in its draw buffer.
    f.bus->work_ram[0x2e] = 1;
    f.bus->capture_game_sprite_instruction(f.loc(0xc088b1,0xc088a3),0,0,0,0,0);
    f.bus->capture_game_sprite_instruction(f.loc(0xc08b83,0xc08b74),0,0,0,0,0);
    for (unsigned i = 0; i < 128; ++i) f.bus->work_ram[0x500 + i * 4 + 1] = 224;
    for (const auto [address, value] : std::array<std::pair<unsigned,unsigned>, 7>{{
            {0x4300,0}, {0x4301,4}, {0x4302,0}, {0x4303,5}, {0x4304,0x7e},
            {0x4305,0x20}, {0x4306,2}}})
        f.bus->write_byte(address,value);
    f.bus->write_byte(0x420b,1);
    check(f.bus->master_clocks() == 0, "Enable transaction fixture advanced execution");
    const auto resource = f.bus->native_sprite_runtime()->resources();
    const auto actor = *f.bus->native_sprite_runtime()->snapshot(0);
    const auto counts = [](const eb::NativeSpriteRuntimeDiagnostics &d) {
        return std::tuple(d.creations,d.releases,d.resets,d.selections,d.graphics_allocations_bypassed,
                          d.map_allocations_bypassed,d.map_builds_bypassed,d.graphics_releases_bypassed,
                          d.map_releases_bypassed,d.unsupported_services,d.live_resources);
    };
    const auto draws = [](const eb::GameSceneRenderer::SpriteSnapshotDiagnostics &d) {
        return std::tuple(d.builds,d.queued_draws,d.emit_calls,d.matched_draws,d.host_parts,d.uploads,
                          d.unknown_uploads);
    };
    const auto before_counts = counts(f.bus->native_sprite_runtime()->diagnostics());
    const auto before_draws = draws(f.bus->scene_read_view().object_scene->sprite_snapshot_diagnostics());
    check(std::get<0>(before_counts) == 1 && std::get<0>(before_draws) == 1 &&
              std::get<5>(before_draws) == 1,
          "Enable transaction fixture lacks a live resource or published native frame");
    auto baseline = std::make_unique<eb::SnesBus>(*f.bus);
    bool rejected = false;
    try {
        // Minimal synthetic graphics content intentionally has no valid NPC
        // catalog. Ordinary runtime/effects construction has already succeeded.
        f.bus->enable_native_sprite_runtime(true,true);
    } catch (const std::exception &) { rejected = true; }
    check(rejected, "Malformed stationary content unexpectedly enabled readiness");
    const auto retained = f.bus->native_sprite_runtime()->snapshot(0);
    check(f.bus->native_sprite_runtime()->resources() == resource && retained &&
              retained->id == actor.id && retained->image == actor.image &&
              counts(f.bus->native_sprite_runtime()->diagnostics()) == before_counts,
          "Failed stationary import replaced native resource ownership or diagnostics");
    check(f.bus->native_sprite_effects() && f.bus->native_actor_tick_count() == 1 &&
              f.bus->native_actor_wait_clocks() == 0 && f.bus->master_clocks() == 0 &&
              f.bus->presentation_width() == 522 &&
              draws(f.bus->scene_read_view().object_scene->sprite_snapshot_diagnostics()) == before_draws,
          "Failed stationary import reset timing or renderer state");
    check(f.bus->wait_for_native_actor_tick(body) && baseline->wait_for_native_actor_tick(body) &&
              f.bus->native_actor_tick_count() == 1,
          "Failed enable lost the consumed tick and admitted a second actor pass");
    f.bus->advance_master_clocks_with_refresh(1364 * 263);
    baseline->advance_master_clocks_with_refresh(1364 * 263);
    check(f.bus->scene_read_view().object_scene->native_sprite_part_count() == actor.image->parts.size(),
          "Failed stationary import lost the already-published native artwork");
    bool visible_artwork = false;
    const auto view = f.bus->scene_read_view();
    for (unsigned y = 0; y < 224; ++y) {
        std::array<eb::PpuPixel,522> row{};
        check(view.object_scene->try_native_sprite_pixels(view,y,row,-133).has_value(),
              "Retained transaction artwork did not reach native sampling");
        visible_artwork |= std::any_of(row.begin(),row.end(),[](const auto &pixel) { return pixel.priority >= 0; });
    }
    check(visible_artwork,"Enable transaction compared a vacuous transparent frame");
    check(f.bus->native_framebuffer == baseline->native_framebuffer &&
              std::equal(f.bus->presentation_pixels().begin(),f.bus->presentation_pixels().end(),
                         baseline->presentation_pixels().begin(),baseline->presentation_pixels().end()),
          "Failed stationary import changed retained frame pixels");
}

}
int main() {
    try {
        for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
            queue_checks(version); draw_checks(version); fragment_checks(version); continuation_order_checks(version); continuation_overlay_checks(version); overlay_motion_checks(version); failed_enable_checks(version);
        }
        std::cout << "PASS native sprite commands: both regions, 400 parts, descriptor/VRAM poison, source overlay state, fragment canonical/direct/margins, both-edge actor depth/borrowed-priority/bundle order, retained overlay lifecycle and failed-enable transaction\n";
    } catch (const std::exception &e) { std::cerr << e.what() << '\n'; return 1; }
}
