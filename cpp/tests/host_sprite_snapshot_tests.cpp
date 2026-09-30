#include "eb/game_scene_renderer.hpp"
#include "eb/overworld_sprite_bridge.hpp"
#include "eb/snes_bus.hpp"
#include "generated_profile.hpp"
#include "native_sprite_fixture.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <stdexcept>

namespace {
void require(bool pass, const char *message) {
    if (!pass) throw std::runtime_error(message);
}
struct Fixture {
    eb::GameVersion version;
    std::vector<std::uint8_t> assets = std::vector<std::uint8_t>(0x300000);
    std::unique_ptr<eb::SnesBus> bus;
    std::unique_ptr<eb::OverworldSpriteBridge> bridge;
    eb::GameSceneRenderer renderer;
    unsigned group0{}, group1{};
    unsigned loc(unsigned us, unsigned jp) const { return version == eb::GameVersion::JP ? jp : us; }
    void pointer(unsigned at, unsigned value) {
        value += 0xc00000;
        for (unsigned i = 0; i < 4; ++i) assets[at + i] = value >> (i * 8);
    }
    void word(unsigned at, unsigned value) {
        bus->work_ram[at] = value;
        bus->work_ram[at + 1] = value >> 8;
    }
    explicit Fixture(eb::GameVersion v) : version(v) {
        const auto catalog = eb::native::sprite_catalog_layout(v);
        native_sprite_test::Fixture small;
        std::copy(small.bytes.begin(), small.bytes.end(), assets.begin());
        group0 = catalog.groups_end - 82;
        group1 = group0 + 41;
        std::copy_n(small.bytes.begin() + 32, 41, assets.begin() + group0);
        std::copy_n(small.bytes.begin() + 32, 41, assets.begin() + group1);
        for (unsigned id = 0; id < catalog.group_count; ++id)
            pointer(catalog.groups + id * 4, id ? group1 : group0);
        for (unsigned id = 0; id < catalog.shape_count; ++id)
            pointer(catalog.shapes + id * 4, 128);
        // The second group has the same descriptor shape but different art.
        for (unsigned frame = 0; frame < 16; ++frame) {
            assets[group1 + 9 + frame * 2] = (frame & 1);
            assets[group1 + 10 + frame * 2] = 8;
        }
        std::fill_n(assets.begin() + 2048, 192, 255);
        bus = std::make_unique<eb::SnesBus>(assets, version);
        bridge = std::make_unique<eb::OverworldSpriteBridge>(assets, version);
        bus->write_byte(0x2100, 15);
        bus->write_byte(0x2101, 0x60); // Authored small pieces are 16x16.
        bus->write_byte(0x2105, 1);
        bus->write_byte(0x2107, 0x39);
        bus->write_byte(0x2108, 0x59);
        bus->write_byte(0x212c, 16);
        const auto &s = eb::source_profile(v);
        word(s.wram_first_entity, 0);
        word(s.wram_entity_next, 2);
        word(s.wram_entity_next + 2, 0xffff);
        actor(0, 0, 0x4800);
        actor(2, 1, 0x4820);
    }
    void actor(unsigned slot, unsigned group, unsigned map) {
        const auto &s = eb::source_profile(version);
        word(loc(0x2cd6, 0x30d4) + slot, group);
        word(loc(0x2a7e, 0x2e7c) + slot, 64);
        word(loc(0x2aba, 0x2eb8) + slot, 3);
        word(loc(0x2b6e, 0x2f6c) + slot, 0);
        word(loc(0x2a42, 0x2e40) + slot, 0xc0);
        const unsigned table = 0xc00000 + (group ? group1 : group0) + 9;
        word(loc(0x29ca, 0x2dc8) + slot, table);
        word(loc(0x2a06, 0x2e04) + slot, table >> 16);
        word(s.wram_entity_screen_coordinates.x + slot, 128);
        word(s.wram_entity_screen_coordinates.y + slot, 112);
        word(s.wram_entity_spritemap_pointers.low + slot, map);
        word(s.wram_entity_spritemap_pointers.high + slot, 0x7e);
        word(s.wram_entity_spritemap_sizes + slot, 10);
        word(s.wram_entity_draw_callback + slot, s.entity_draw_callbacks.screen_space);
        word(s.wram_entity_body_divides + slot, 0x0101);
        word(s.wram_entity_draw_priority + slot, 1);
        word(s.wram_entity_animation_frame + slot, 0);
        for (unsigned part = 0; part < 2; ++part) {
            bus->work_ram[map + part * 5] = std::uint8_t(-24 + int(part) * 16);
            bus->work_ram[map + part * 5 + 1] = part * 32;
            bus->work_ram[map + part * 5 + 2] = 0x3a;
            bus->work_ram[map + part * 5 + 3] = std::uint8_t(-8);
            bus->work_ram[map + part * 5 + 4] = part ? 0x80 : 0;
        }
        bridge->before_instruction(loc(0xc0a4c4, 0xc0a4a3), 0, 0, slot, 0x1fff, 0x1e00, bus->work_ram);
    }
    eb::SceneReadView view(unsigned frame = 0) {
        auto v = bus->scene_read_view();
        v.host_sprites = bridge.get();
        v.object_scene = &renderer;
        v.completed_frames = frame;
        return v;
    }
    void queue(unsigned slot, unsigned map, unsigned first, unsigned limit = 128) {
        renderer.capture_entity_draw(view(), slot);
        renderer.capture_sprite_emit(view(), 0x7e0000 | map, 128, 112, first, limit);
    }
    auto part(unsigned index) {
        return renderer.host_oam_part(120, 87, 0, 0x3a, false, index);
    }
    void publish(unsigned buffer, unsigned frame) {
        renderer.capture_oam_upload(view(frame), buffer);
        renderer.begin_scanline(view(frame), 0);
    }
};
void test(eb::GameVersion version) {
    Fixture f(version);
    const auto &s = eb::source_profile(version);
    require(f.bridge->pose(0)->image->parts[0].indices != f.bridge->pose(2)->image->parts[0].indices,
            "Fixture imported art must differ");
    // Ownership is independent of whether a first graphics transfer has
    // finished: these distinct generation-owned canvases initially stay blank.
    // The artwork/transfer tests separately verify their pixel publication.
    const auto image0 = f.bridge->committed_image(f.bridge->pose(0)->generation,
                                                 eb::native::SpriteOrientation::Normal);
    const auto image1 = f.bridge->committed_image(f.bridge->pose(2)->generation,
                                                 eb::native::SpriteOrientation::Normal);
    require(image0 && image1 && image0 != image1, "Fixture has no distinct generation-owned canvases");
    const auto memory = f.bus->work_ram;
    f.renderer.begin_sprite_frame(1);
    f.queue(0, 0x4800, 0);
    f.renderer.seal_sprite_frame(f.view());
    // The next tick hides A and prepares visually different B at the identical
    // OAM tuple before NMI uploads the earlier buffer. Current-state scanning
    // would attach B's art to A's displayed OAM (the frame3724 live regression).
    f.word(s.wram_entity_animation_frame, 0xffff);
    f.renderer.begin_sprite_frame(2);
    f.queue(2, 0x4820, 0);
    f.renderer.seal_sprite_frame(f.view());
    f.publish(1, 1);
    require(f.part(0) && f.part(0)->indices.data() == image0->parts[0].indices.data(),
            "Older OAM buffer borrowed a hidden/replacement actor's image");
    f.publish(2, 2);
    require(f.part(0) && f.part(0)->indices.data() == image1->parts[0].indices.data(),
            "Second OAM buffer lost its own actor identity");
    // Identical tuples in separate native slots cannot share the first match.
    f.word(s.wram_entity_animation_frame, 0);
    f.renderer.begin_sprite_frame(1);
    f.queue(0, 0x4800, 0);
    f.queue(2, 0x4820, 2);
    // A custom emitter uses the exact same bytes but has no actor ownership.
    std::copy_n(f.bus->work_ram.begin() + 0x4800, 10, f.bus->work_ram.begin() + 0x4840);
    f.renderer.capture_sprite_emit(f.view(), 0x7e4840, 128, 112, 4, 128);
    f.publish(1, 3);
    require(f.part(0) && f.part(2) &&
                f.part(0)->indices.data() == image0->parts[0].indices.data() &&
                f.part(2)->indices.data() == image1->parts[0].indices.data(),
            "OAM ordinal did not distinguish equal descriptor tuples");
    require(!f.part(4), "Unowned custom emitter borrowed another actor's matching tuple");
    require(!f.renderer.host_oam_part(120, 87, 0, 0x3a, false),
            "Semantic snapshot accepted ambiguous ownership without an OAM ordinal");
    const auto displayed = f.part(0)->indices.data();
    f.renderer.begin_sprite_frame(1);
    require(f.part(0)->indices.data() == displayed, "Beginning a future buffer invalidated published art");
    f.queue(0, 0x4800, 0, 1);
    f.publish(1, 4);
    require(f.part(0).has_value(), "OAM end limit discarded its last admitted part");
    require(!f.renderer.host_oam_part(120, 103, 32, 0x3a, false, 1),
            "OAM end limit bound an un-emitted part");
    require(f.renderer.host_sprite_geometry_mismatches() == 0, "Known geometry unexpectedly declined");
    // Unknown source buffers are deliberately unowned; only explicit fixture
    // capture (buffer0) can synthesize descriptors from a current state.
    eb::GameSceneRenderer unknown;
    auto unknown_view = f.view(5);
    unknown_view.object_scene = &unknown;
    unknown.capture_oam_upload(unknown_view, 2);
    unknown.begin_scanline(unknown_view, 0);
    require(!unknown.host_oam_part(120, 87, 0, 0x3a, false, 0),
            "Unobserved source buffer inferred ownership from current actors");
    // All hooks are read-only: restore only the fixture's intentional mutations.
    std::fill_n(f.bus->work_ram.begin() + 0x4840, 10, 0);
    require(f.bus->work_ram == memory, "Sprite snapshot hooks changed gameplay memory");

    // RUN_ACTIONSCRIPT_FRAME jumps to bank80 and uses near calls. Exercise
    // the actual bus dispatcher rather than calling renderer helpers alone.
    f.bus->enable_host_sprite_resources(true);
    f.word(0x2e, 1);
    f.word(0x03, 0x500);
    f.word(0x05, 0x700);
    f.word(0x0b, 0x7e);
    const auto dispatch = [&](unsigned pc, unsigned a, unsigned x, unsigned y) {
        f.bus->capture_game_sprite_instruction(pc, a, x, y, 0x1fff, 0x1e00);
    };
    for (unsigned bank : {0x00u, 0x40u, 0x80u, 0xc0u}) {
        const auto alias = [&](unsigned us, unsigned jp) { return bank << 16 | (f.loc(us, jp) & 0xffff); };
        const auto before = f.bus->scene_read_view().object_scene->sprite_snapshot_diagnostics();
        dispatch(alias(0xc088b1, 0xc088a3), 0, 0, 0);
        dispatch(alias(0xc0a4c4, 0xc0a4a3), 0, 0, 0);
        dispatch(alias(0xc0a3a4, 0xc0a383), 0, 0, 0);
        dispatch(alias(0xc08cd5, 0xc08cc6), 0x4800, 128, 112);
        const auto after = f.bus->scene_read_view().object_scene->sprite_snapshot_diagnostics();
        require(after.builds == before.builds + 1 && after.queued_draws == before.queued_draws + 1 &&
                    after.matched_draws == before.matched_draws + 1 && after.host_parts == before.host_parts + 2,
                "Mapped source code alias lost draw ownership or host pixel coverage");
    }
    const auto before = f.bus->scene_read_view().object_scene->sprite_snapshot_diagnostics();
    for (unsigned bank : {0x7eu, 0x7fu}) {
        dispatch(bank << 16 | (f.loc(0xc088b1, 0xc088a3) & 0xffff), 0, 0, 0);
        dispatch(bank << 16 | (f.loc(0xc0a3a4, 0xc0a383) & 0xffff), 0, 0, 0);
    }
    const auto after = f.bus->scene_read_view().object_scene->sprite_snapshot_diagnostics();
    require(after.builds == before.builds && after.queued_draws == before.queued_draws,
            "Executable WRAM falsely dispatched source graphics hooks");
    const auto creations = f.bus->host_sprites()->diagnostics().creations;
    dispatch(f.loc(0x001e49, 0x001e5f), 0, 0, 0);
    dispatch(f.loc(0x0020f0, 0x0020fe), 0, 0, 0);
    require(f.bus->host_sprites()->diagnostics().creations == creations,
            "Low-bank RAM/I/O falsely dispatched source entity creation");
}
}
int main() {
    try {
        test(eb::GameVersion::US);
        test(eb::GameVersion::JP);
        std::cout << "Sprite snapshots: both-region buffer age, hidden actor, ordinal alias, custom emitter, capacity and immutability passed\n";
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
