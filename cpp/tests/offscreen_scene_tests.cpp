// Every source-active logical actor slot uses the same rendering contract,
// whether its script belongs to a party member, NPC, enemy or story entity.
// Continue declared artwork only; rendering must never create/step actors.
#include "eb/game_scene_renderer.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/overworld_sprite_runtime.hpp"
#include "eb/snes_bus.hpp"
#include "generated_profile.hpp"
#include "native_sprite_fixture.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>

namespace {
unsigned checks{};
void check(bool good, const std::string &message) {
    ++checks;
    if (!good) throw std::runtime_error(message);
}
std::vector<std::uint8_t> assets(eb::GameVersion region) {
    std::vector<std::uint8_t> result(0x300000);
    native_sprite_test::Fixture small;
    std::copy(small.bytes.begin(), small.bytes.end(), result.begin());
    const auto catalog = eb::native::sprite_catalog_layout(region);
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
    // Populate the actual imported custom catalogs, including the title table
    // eagerly validated by CustomSprites even when only the debug cursor draws.
    const bool jp = region == eb::GameVersion::JP;
    const unsigned cursor = jp ? 0x2fdee6 : 0x2ff5bb, debugart = jp ? 0x2fd8e2 : 0x2fefb7;
    const unsigned title = jp ? 0x21ca4c : 0x21cf9d, start = jp ? 0x21c80d : 0x21ce08;
    const unsigned art = jp ? 0x21bb01 : 0x21c6e5;
    const auto put = [&](unsigned at, unsigned value) { result[at] = value; result[at + 1] = value >> 8; };
    put(cursor, cursor + 2);
    result[cursor + 2] = std::uint8_t(-8); result[cursor + 3] = 0;
    result[cursor + 4] = 0x36; result[cursor + 5] = std::uint8_t(-8); result[cursor + 6] = 0x80;
    for (unsigned row = 0; row < 8; ++row) result[debugart + row * 2] = 255;
    for (unsigned i = 0; i < (jp ? 7u : 9u); ++i) {
        put(title + i * 2, start + i * 5);
        result[start + i * 5] = 0xf8; result[start + i * 5 + 1] = i;
        result[start + i * 5 + 2] = 0xf6; result[start + i * 5 + 3] = 8;
        result[start + i * 5 + 4] = 0x80 | (i & 1);
    }
    for (unsigned i = 0; i < (jp ? 8u : 16u); ++i) {
        result[art + i * 3] = 0xef; result[art + i * 3 + 1] = 0xff; result[art + i * 3 + 2] = 0;
    }
    result[art + (jp ? 8u : 16u) * 3] = 0xff;
    return result;
}
enum class Artwork { Body, SourceEmitter, WorldDescriptor };
enum class Edge { Left, Right, Top, Bottom };
struct Fixture {
    eb::GameVersion region;
    std::unique_ptr<eb::SnesBus> bus;
    eb::GameSceneRenderer renderer;
    std::shared_ptr<const eb::native::SpriteImage> image;
    std::string context;
    explicit Fixture(eb::GameVersion version, unsigned width)
        : region(version), bus(std::make_unique<eb::SnesBus>(assets(version), version)) {
        bus->enable_native_sprite_runtime(true);
        bus->write_byte(0x2100, 15);
        bus->write_byte(0x2101, 0x60); // 16x16 source OBJ pieces.
        bus->write_byte(0x2105, 1);
        bus->write_byte(0x2107, 0x39);
        bus->write_byte(0x2108, 0x59);
        bus->write_byte(0x212c, 16);
        for (unsigned i = 0; i < 128; ++i) bus->object_attributes[i * 4 + 1] = 224;
        // Solid source/custom art in all four tiles of the 16x16 piece.
        for (unsigned tile : {0u, 1u, 16u, 17u})
            for (unsigned row = 0; row < 8; ++row) bus->video_ram[tile * 32 + row * 2] = 255;
        for (unsigned palette = 0; palette < 8; ++palette) {
            bus->palette_ram[(129 + palette * 16) * 2] = 31;
            bus->palette_ram[(129 + palette * 16) * 2 + 1] = 0;
        }
        const auto &s = eb::source_profile(region);
        // Interior camera keeps all aspect ratios away from authored map ends.
        word(s.wram_background_scroll.layer1_x, 1024);
        word(s.wram_background_scroll.layer2_x, 1024);
        word(s.wram_background_scroll.layer1_y, 1024);
        word(s.wram_background_scroll.layer2_y, 1024);
        word(s.wram_first_entity, 0);
        for (unsigned slot = 0; slot < 60; slot += 2) {
            word(s.wram_entity_next + slot, slot == 58 ? 0xffff : slot + 2);
            word(s.wram_entity_script_ids + slot, 0x500 + slot);
            word(loc(0x2cd6, 0x30d4) + slot, 0);
            word(s.wram_entity_animation_frame + slot, 0);
            word(s.wram_entity_spritemap_pointers.low + slot, 0x4700);
            word(s.wram_entity_spritemap_pointers.high + slot, 0x7e);
            word(s.wram_entity_draw_priority + slot, 1);
            word(s.wram_entity_draw_callback + slot, s.entity_draw_callbacks.screen_space);
            word(s.wram_entity_body_divides + slot, 0x0101);
            eb::MainCpu65816 cpu(*bus);
            cpu.emulation_mode = false; cpu.status_register = 0; cpu.stack_pointer = 0x1e00;
            cpu.program_counter = loc(0xc01e49, 0xc01e5f); cpu.accumulator = 0;
            check(!bus->native_sprite_runtime()->try_execute(cpu, *bus), "Actor creation observation retired source caller");
            cpu.program_counter = loc(0xc020f0, 0xc020fe); cpu.accumulator = slot / 2;
            check(!bus->native_sprite_runtime()->try_execute(cpu, *bus), "Actor creation commit retired source caller");
        }
        auto solid = std::make_shared<eb::native::SpriteImage>(*bus->native_sprite_runtime()->resources()->acquire(0, 0));
        for (auto &part : solid->parts) part.indices.fill(1);
        std::fill(solid->indices.begin(), solid->indices.end(), 1);
        image = solid;
        for (unsigned slot = 0; slot < 60; slot += 2) bus->native_sprite_runtime()->replace_image(slot, image);
        // Generic source emitter map: one 16x16 piece read from current VRAM.
        word(0x4700, 0x4800);
        bus->work_ram[0x4800] = std::uint8_t(-8);
        bus->work_ram[0x4801] = 0;
        bus->work_ram[0x4802] = 0x30;
        bus->work_ram[0x4803] = std::uint8_t(-8);
        bus->work_ram[0x4804] = 0x80;
        renderer.set_presentation_width(view(), width);
        renderer.enable_direct_rendering(true);
    }
    unsigned loc(unsigned us, unsigned jp) const { return region == eb::GameVersion::JP ? jp : us; }
    unsigned custom_table() const { return loc(0xeff5bb, 0xefdee6); }
    void word(unsigned at, unsigned value) { bus->work_ram[at] = value; bus->work_ram[at + 1] = value >> 8; }
    eb::SceneReadView view() const { auto value = bus->scene_read_view(); value.object_scene = &renderer; return value; }
    void mark_custom(unsigned slot) {
        const auto &s = eb::source_profile(region);
        word(s.wram_entity_draw_callback + slot, s.entity_draw_callbacks.world_space);
        word(s.wram_entity_spritemap_pointers.low + slot, custom_table());
        word(s.wram_entity_spritemap_pointers.high + slot, custom_table() >> 16);
        eb::MainCpu65816 cpu(*bus);
        cpu.emulation_mode = false; cpu.status_register = 0; cpu.stack_pointer = 0x1e00;
        cpu.direct_page = 0x1d00; word(cpu.direct_page + 0x88, slot);
        cpu.program_counter = loc(0xc09b4d, 0xc09b2c);
        check(!bus->native_sprite_runtime()->try_execute(cpu, *bus), "Custom declaration observation retired source caller");
        check(bus->native_sprite_runtime()->custom_descriptor(slot), "Custom fixture lacks source opcode1C declaration");
    }
    void place(int x, int y) {
        const auto &s = eb::source_profile(region);
        for (unsigned slot = 0; slot < 60; slot += 2) {
            word(s.wram_entity_screen_coordinates.x + slot, std::uint16_t(x));
            word(s.wram_entity_screen_coordinates.y + slot, std::uint16_t(y));
            word(s.wram_entity_world_coordinates.x + slot, std::uint16_t(x));
            word(s.wram_entity_world_coordinates.y + slot, std::uint16_t(y));
        }
    }
    std::shared_ptr<const eb::DirectSceneFrame> render() {
        for (unsigned y = 0; y < 224; ++y) {
            auto current = view(); renderer.begin_scanline(current, y);
            std::array<eb::PpuPixel, 256> row{};
            check(renderer.try_native_sprite_pixels(current, y, row, 0).has_value(), "Declared native frame lost ownership");
            for (unsigned x = 0; x < 256; ++x)
                bus->native_framebuffer[y * 256 + x] = renderer.compose_presentation_pixel(current, x, y, row[x], false);
            renderer.render_presentation_margins(current, y);
            renderer.capture_direct_scanline(current, y);
        }
        auto frame = renderer.direct_scene();
        check(bool(frame), "Offscreen scene did not preserve exact canonical/direct pixels: " + context);
        return frame;
    }
};
struct Hardware {
    std::array<std::uint8_t, 131072> ram;
    std::array<std::uint8_t, 65536> video;
    std::array<std::uint8_t, 512> palette;
    std::array<std::uint8_t, 544> objects;
    std::vector<std::uint8_t> registers;
    std::array<std::uint16_t, 8> scroll{};
    std::uint64_t clocks;
    std::uint16_t fixed;
    explicit Hardware(const Fixture &f) : ram(f.bus->work_ram), video(f.bus->video_ram), palette(f.bus->palette_ram),
        objects(f.bus->object_attributes), clocks(f.bus->master_clocks()), fixed(f.view().fixed_color) {
        auto v = f.view(); registers.assign(v.ppu_registers.begin(), v.ppu_registers.end());
        for (unsigned bg = 0; bg < 4; ++bg) { scroll[bg] = v.background_scroll_x[bg]; scroll[bg + 4] = v.background_scroll_y[bg]; }
    }
    void unchanged(const Fixture &f) const {
        const auto v = f.view();
        bool same_scroll = true;
        for (unsigned bg = 0; bg < 4; ++bg)
            same_scroll &= scroll[bg] == v.background_scroll_x[bg] && scroll[bg + 4] == v.background_scroll_y[bg];
        check(ram == f.bus->work_ram && video == f.bus->video_ram && palette == f.bus->palette_ram &&
              objects == f.bus->object_attributes && same_scroll && fixed == v.fixed_color &&
              clocks == f.bus->master_clocks() && std::equal(registers.begin(), registers.end(), v.ppu_registers.begin()),
              "Offscreen preparation/capture/rasterization mutated source hardware or gameplay state");
    }
};

void actor_edges(eb::GameVersion region, unsigned width, Artwork kind) {
    Fixture f(region, width);
    if (kind == Artwork::WorldDescriptor)
        for (unsigned slot = 0; slot < 60; slot += 2) f.mark_custom(slot);
    if (kind == Artwork::WorldDescriptor)
        std::fill(f.bus->video_ram.begin(), f.bus->video_ram.end(), 0);
    if (kind == Artwork::SourceEmitter)
        f.word(eb::source_profile(region).wram_first_entity, 0xffff);
    const int margin = int(width - 256) / 2, left = -margin, right = 256 + margin;
    for (bool crossing : {false, true})
        for (Edge edge : {Edge::Left, Edge::Right, Edge::Top, Edge::Bottom}) {
            int x = 128, y = 112;
            if (edge == Edge::Left) x = left + (crossing ? 0 : -9);
            if (edge == Edge::Right) x = right + (crossing ? 0 : 9);
            if (edge == Edge::Top) y = crossing ? (kind == Artwork::Body ? 9 : 1) : -8;
            if (edge == Edge::Bottom) y = crossing ? (kind == Artwork::Body ? 233 : 225) : (kind == Artwork::Body ? 250 : 234);
            if (kind == Artwork::WorldDescriptor) {
                if (edge == Edge::Left) x = left + (crossing ? 4 : -1);
                if (edge == Edge::Right) x = right + (crossing ? 4 : 9);
                if (edge == Edge::Top) y = crossing ? 5 : 0;
                if (edge == Edge::Bottom) y = crossing ? 229 : 234;
            }
            f.place(x, y);
            f.context = "width=" + std::to_string(width) + " art=" + std::to_string(unsigned(kind)) +
                " edge=" + std::to_string(unsigned(edge)) + " crossing=" + std::to_string(crossing);
            const Hardware hardware(f);
            f.renderer.begin_sprite_frame(1);
            for (unsigned slot = 0; slot < 60; slot += 2) {
                const bool source_gate = x >= -64 && x < 320 && y >= -64 && y < 256;
                if (kind == Artwork::Body && source_gate) {
                    const auto actor = f.bus->native_sprite_runtime()->snapshot(slot);
                    const auto mark = f.renderer.native_actor_draw_mark();
                    f.renderer.queue_native_sprite(f.view(), f.image, actor->id, actor->creation.sprite.palette, x, y, 0, 1);
                    f.renderer.finish_native_actor_draw(f.view(), mark, slot, 1);
                } else if (kind == Artwork::WorldDescriptor && source_gate) {
                    const auto mark = f.renderer.native_actor_draw_mark();
                    f.renderer.queue_native_custom(f.view(), f.custom_table(), 0, x, y, 1);
                    f.renderer.finish_native_actor_draw(f.view(), mark, slot, 1);
                } else if (kind == Artwork::SourceEmitter) {
                    f.renderer.capture_sprite_enqueue(f.view(), 0x7e4800, x, y, 1);
                    f.renderer.capture_sprite_emit(f.view(), 0x7e4800, x, y, slot / 2, 128);
                }
            }
            f.renderer.seal_sprite_frame(f.view());
            f.renderer.capture_oam_upload(f.view(), 1);
            const auto frame = f.render();
            const auto objects = std::count_if(frame->quads.begin(), frame->quads.end(), [](const auto &q) { return q.object; });
            const unsigned expected = kind == Artwork::Body ? 60 : 30;
            const auto &context = f.context;
            check(objects == expected, "Source-active offscreen fragments were dropped: " + context +
                  " actual=" + std::to_string(objects) + " expected=" + std::to_string(expected));
            if (kind == Artwork::WorldDescriptor)
                for (const auto &q : frame->quads) if (q.object)
                    check(q.motion > 0 && frame->motions[q.motion].identity != 0,
                          "Custom actor lost semantic motion identity: " + context);
            const auto pixels = eb::rasterize_direct_scene({frame, {}});
            const bool visible = std::any_of(pixels.begin(), pixels.end(), [](auto p) { return p != 0xff000000; });
            check(visible == crossing, "Offscreen/edge-crossing visibility differs: " + context);
            // Current immutable art must already exist before it moves across
            // the edge at a fractional presentation time.
            eb::DirectScenePicture moved{frame, std::vector<eb::DirectScenePicture::Offset>(frame->motions.size())};
            if (!crossing) {
                const float dx = edge == Edge::Left ? 32.f : edge == Edge::Right ? -32.f : 0.f;
                const float dy = edge == Edge::Top ? 32.f : edge == Edge::Bottom ? -32.f : 0.f;
                for (const auto &q : frame->quads) if (q.object) moved.offsets[q.motion] = {dx, dy};
                const auto incoming = eb::rasterize_direct_scene(moved);
                check(std::any_of(incoming.begin(), incoming.end(), [](auto p) { return p == 0xffff0000; }),
                      "Pre-rendered fragments cannot cross the viewport smoothly: " + context);
            }
            check(eb::rasterize_direct_scene({frame, {}}) == pixels, "Sampling changed an immutable offscreen frame");
            hardware.unchanged(f);
        }
}

void exhausted_oam(eb::GameVersion region, unsigned width) {
    Fixture f(region, width);
    // Already allocated hardware slots cannot hide a declared emitter that
    // has no canonical pixels. Its art still enters the direct overscan plane.
    f.word(eb::source_profile(region).wram_first_entity, 0xffff);
    for (Edge edge : {Edge::Left, Edge::Right, Edge::Top, Edge::Bottom}) {
        int x = 128, y = 112;
        const int margin = int(width - 256) / 2;
        if (edge == Edge::Left) x = -margin - 9;
        if (edge == Edge::Right) x = 256 + margin + 9;
        if (edge == Edge::Top) y = -8;
        if (edge == Edge::Bottom) y = 234;
        const Hardware hardware(f);
        f.renderer.begin_sprite_frame(1);
        f.renderer.capture_sprite_enqueue(f.view(), 0x7e4800, x, y, 1);
        f.renderer.capture_sprite_emit(f.view(), 0x7e4800, x, y, 128, 128);
        f.renderer.seal_sprite_frame(f.view()); f.renderer.capture_oam_upload(f.view(), 1);
        const auto frame = f.render();
        check(std::count_if(frame->quads.begin(), frame->quads.end(), [](const auto &q) { return q.object; }) == 1,
              "Canonical OAM exhaustion discarded an offscreen source emitter at width=" + std::to_string(width) +
              " edge=" + std::to_string(unsigned(edge)));
        hardware.unchanged(f);
    }
    // Visible canonical parts still obey the source's exhausted hardware
    // capacity; overscan must not admit artwork that the source rejected.
    const Hardware hardware(f);
    f.renderer.begin_sprite_frame(1);
    f.renderer.capture_sprite_enqueue(f.view(), 0x7e4800, 128, 112, 1);
    f.renderer.capture_sprite_emit(f.view(), 0x7e4800, 128, 112, 128, 128);
    f.renderer.seal_sprite_frame(f.view()); f.renderer.capture_oam_upload(f.view(), 1);
    const auto frame = f.render();
    check(std::none_of(frame->quads.begin(), frame->quads.end(), [](const auto &q) { return q.object; }),
          "Offscreen continuation bypassed source capacity for a visible canonical object");
    hardware.unchanged(f);
}

void custom_gate_motion(eb::GameVersion region) {
    Fixture f(region, 800);
    for (unsigned slot = 0; slot < 60; slot += 2) f.mark_custom(slot);
    eb::DirectSceneMotion motion;
    const std::array anchors{319, 320, 319, -64, -65, -64};
    for (unsigned phase = 0; phase < anchors.size(); ++phase) {
        f.bus->completed_frames = phase;
        f.context = "custom source gate phase=" + std::to_string(phase);
        f.place(anchors[phase], 112);
        // Real imported custom artwork must survive deliberately unrelated
        // source graphics; the actual callback also uses CustomSprites.
        std::fill(f.bus->video_ram.begin(), f.bus->video_ram.begin() + 0x1000, phase & 1 ? 0xa5 : 0x5a);
        const Hardware hardware(f);
        f.renderer.begin_sprite_frame(1);
        if (anchors[phase] >= -64 && anchors[phase] < 320)
            for (unsigned slot = 0; slot < 60; slot += 2) {
                const auto mark = f.renderer.native_actor_draw_mark();
                f.renderer.queue_native_custom(f.view(), f.custom_table(), 0, anchors[phase], 112, 1);
                f.renderer.finish_native_actor_draw(f.view(), mark, slot, 1);
            }
        f.renderer.seal_sprite_frame(f.view()); f.renderer.capture_oam_upload(f.view(), 1);
        const auto frame = f.render();
        check(std::count_if(frame->quads.begin(), frame->quads.end(), [](const auto &q) { return q.object; }) == 30,
              "Custom actor callback/continuation crossing lost declared artwork");
        motion.submit(frame);
        const auto &picture = motion.sample(.5);
        for (unsigned slot = 0; slot < 60; slot += 2) {
            const auto identity = (std::uint64_t{1} << 32) | ((0x500 + slot) << 8) | slot;
            const auto found = std::find_if(frame->motions.begin(), frame->motions.end(),
                [=](const auto &m) { return m.identity == identity; });
            check(found != frame->motions.end(), "Custom actor identity changed at native source callback gate");
            const unsigned group = unsigned(found - frame->motions.begin());
            check(found->x == anchors[phase] + 272 && found->y == 111,
                  "Custom actor callback/continuation motion anchor changed at source gate");
            if (phase == 1 || phase == 4) {
                const float delta = float(anchors[phase] - anchors[phase - 1]);
                check(picture.offsets[group].x == -delta * .5f && picture.offsets[group].y == 0,
                      "Custom actor motion snapped when crossing native source callback gate");
            }
        }
        const auto pixels = eb::rasterize_direct_scene({frame, {}});
        check(std::count(pixels.begin(), pixels.end(), 0xffff0000u) == 64,
              "Custom actor pixels depend on unrelated source graphics memory");
        hardware.unchanged(f);
    }
}

void tile_edges(eb::GameVersion region, unsigned width) {
    Fixture f(region, width);
    f.word(eb::source_profile(region).wram_first_entity, 0xffff);
    f.bus->write_byte(0x212c, 1);
    f.bus->palette_ram[2] = 0xe0; f.bus->palette_ram[3] = 3;
    const Hardware hardware(f);
    f.renderer.begin_sprite_frame(1); f.renderer.seal_sprite_frame(f.view()); f.renderer.capture_oam_upload(f.view(), 1);
    const auto frame = f.render();
    const auto plane = std::find_if(frame->quads.begin(), frame->quads.end(), [](const auto &q) { return !q.object && q.priority >= 0; });
    check(plane != frame->quads.end(), "Tile overscan fixture contains no authored scenery");
    check(plane->x < 0 && plane->y < 0 && plane->x + plane->width > width && plane->y + plane->height > 224,
          "Tile plane omits at least one viewport edge at width=" + std::to_string(width));
    for (const auto offset : std::array<eb::DirectScenePicture::Offset, 4>{{{32, 0}, {-32, 0}, {0, 32}, {0, -32}}}) {
        eb::DirectScenePicture moved{frame, std::vector<eb::DirectScenePicture::Offset>(frame->motions.size())};
        moved.offsets[plane->motion] = offset;
        const auto pixels = eb::rasterize_direct_scene(moved);
        check(std::all_of(pixels.begin(), pixels.end(), [](auto p) { return p == 0xff00ff00; }),
              "Tile camera motion exposes missing pre-rendered edge cells at width=" + std::to_string(width));
    }
    hardware.unchanged(f);
}
} // namespace

int main() {
    try {
        for (auto region : {eb::GameVersion::US, eb::GameVersion::JP}) {
            for (unsigned width : {256u, 258u, 400u, 800u, 1024u}) {
                for (auto kind : {Artwork::Body, Artwork::SourceEmitter, Artwork::WorldDescriptor}) actor_edges(region, width, kind);
                exhausted_oam(region, width);
                tile_edges(region, width);
            }
            custom_gate_motion(region);
        }
        std::cout << "Offscreen scenes: " << checks << " checks, both regions/all30 source-active slots, widths256/258/400/800/1024, four edges, body/custom/world descriptors, exhausted OAM, immutable hardware and tile motion\n";
    } catch (const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
