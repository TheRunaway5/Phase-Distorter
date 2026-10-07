// The separate authored-action oracle proves which NPCs are stationary. This
// reference exercises their real imported artwork through the live renderer.
#include "eb/game_scene_renderer.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/npc_catalog.hpp"
#include "eb/native/sprite_appearance.hpp"
#include "eb/native/world_collision.hpp"
#include "eb/native/world_map.hpp"
#include "eb/overworld_sprite_runtime.hpp"
#include "eb/overworld_sprite_draw.hpp"
#include "eb/scene_snapshot_archive.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include <algorithm>
#include <cmath>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string_view>

namespace {
unsigned prop_edge_failures{};
void require(bool good, const char *message) { if (!good) throw std::runtime_error(message); }
eb::native::NpcRectangle imported_artwork_bounds(const eb::GameAssets &assets) {
    // Read both authored shape records directly, independently of the new
    // production bounds getter. No pixel decoding or pose acquisition occurs.
    const auto layout = eb::native::sprite_catalog_layout(assets.version);
    const auto pointer = [&](unsigned at) {
        const unsigned value = assets.image.at(at) | unsigned(assets.image.at(at + 1)) << 8 |
                               unsigned(assets.image.at(at + 2)) << 16;
        require(value >= 0xc00000 && value < 0xf00000, "Invalid authored shape pointer");
        return value - 0xc00000;
    };
    eb::native::NpcRectangle bounds{};
    std::vector<bool> seen(layout.shape_count);
    for (unsigned group = 0; group < layout.group_count; ++group) {
        const unsigned shape = assets.image.at(pointer(layout.groups + group * 4) + 2);
        require(shape < seen.size(), "Invalid authored shape ID");
        if (seen[shape]) continue;
        seen[shape] = true;
        const unsigned at = pointer(layout.shapes + shape * 4), parts = assets.image.at(at);
        require(parts && parts <= 64, "Invalid authored shape piece count");
        for (unsigned part = 0; part < parts * 2; ++part) {
            const unsigned piece = at + 2 + part * 5;
            const int x = std::int8_t(assets.image.at(piece + 3)), y = std::int8_t(assets.image.at(piece)) - 1;
            bounds.left = std::min(bounds.left, x); bounds.top = std::min(bounds.top, y);
            bounds.right = std::max(bounds.right, x + 16); bounds.bottom = std::max(bounds.bottom, y + 16);
        }
    }
    return bounds;
}
struct Fixture {
    const eb::GameAssets &assets;
    const eb::SourceProfile &profile;
    std::unique_ptr<eb::SnesBus> bus;
    eb::GameSceneRenderer renderer;
    std::shared_ptr<eb::native::StationaryNpcSprites> ready;
    eb::native::NpcCatalog catalog;
    const eb::native::NpcRectangle artwork;
    unsigned npc_ids, enabled, photograph, flags, objects_only;
    std::uint64_t frames{};
    Fixture(const eb::GameAssets &content) : assets(content), profile(eb::source_profile(content.version)),
        bus(std::make_unique<eb::SnesBus>(content.image, content.version)),
        catalog(content.image, eb::native::npc_catalog_layout(content.version)), artwork(imported_artwork_bounds(content)) {
        const bool jp = content.version == eb::GameVersion::JP;
        npc_ids = jp ? 0x3098 : 0x2c9a; enabled = jp ? 0x4dde : 0x4a58;
        photograph = jp ? 0xb6b8 : 0xb4ef; flags = jp ? 0x9eb3 : 0x9c08;
        objects_only = jp ? 0x4dec : 0x4a66;
        bus->enable_native_sprite_runtime(true);
        ready = std::make_shared<eb::native::StationaryNpcSprites>(content.image, content.version,
            bus->native_sprite_runtime()->resources());
        renderer.set_native_stationary_sprites(ready);
        bus->write_byte(0x2100, 15); bus->write_byte(0x2105, 1);
        bus->write_byte(0x2107, 0x39); bus->write_byte(0x2108, 0x59); bus->write_byte(0x212c, 16);
        for (unsigned i = 0; i < 256; ++i) {
            bus->palette_ram[i * 2] = i; bus->palette_ram[i * 2 + 1] = (i >> 3) & 0x7f;
        }
        std::fill(bus->video_ram.begin(), bus->video_ram.end(), 0xa5);
        put(profile.wram_first_entity, 0xffff); put(enabled, 1);
        put(profile.wram_loaded_map_tile_combination, 2);
        renderer.set_presentation_width(view(), 522);
    }
    void put(unsigned at, unsigned value) { bus->work_ram[at] = value; bus->work_ram[at + 1] = value >> 8; }
    eb::native::NpcRectangle footprint(int camera_x, int camera_y, unsigned width = 0) const {
        const int margin = int((width ? width : renderer.presentation_width()) - 256) / 2;
        const int horizontal = margin * 2 + 128 + 64;
        return {camera_x - horizontal - artwork.right + 1, camera_y - 64 - artwork.bottom + 1,
                camera_x + 256 + horizontal - artwork.left, camera_y + 288 - artwork.top};
    }
    eb::SceneReadView view() const {
        auto value = bus->scene_read_view(); value.object_scene = &renderer; value.completed_frames = frames;
        return value;
    }
    void active(std::span<const eb::native::NpcId> identities) {
        require(identities.size() <= 30, "Fixture exceeds original logical actor capacity");
        put(profile.wram_first_entity, identities.empty() ? 0xffff : 0);
        for (unsigned i = 0; i < identities.size(); ++i) {
            const unsigned slot = i * 2;
            put(npc_ids + slot, identities[i]);
            put(profile.wram_entity_next + slot, i + 1 == identities.size() ? 0xffff : slot + 2);
            put(profile.wram_entity_animation_frame + slot, 0xffff);
            put(profile.wram_entity_spritemap_pointers.high + slot, 0x807e);
        }
    }
    void frame(bool source_draw = false) {
        const auto before = bus->work_ram;
        const auto diagnostics = bus->native_sprite_runtime()->diagnostics();
        renderer.begin_sprite_frame(1);
        if (source_draw) {
            eb::MainCpu65816 cpu(*bus);
            cpu.emulation_mode = false; cpu.status_register = 0; cpu.stack_pointer = 0x1fff;
            cpu.program_counter = 0xc0ff00; cpu.x_index = 0;
            const unsigned entry = assets.version == eb::GameVersion::JP ? 0xc0a383 : 0xc0a3a4;
            cpu.execute_instruction<0x20>(entry & 0xffff, 3);
            require(eb::try_native_sprite_draw(cpu, *bus, *bus->native_sprite_runtime(), renderer),
                    "Catalog edge fixture did not run the real ordinary draw");
        }
        renderer.seal_sprite_frame(view());
        renderer.capture_oam_upload(view(), 1); renderer.begin_scanline(view(), 0);
        require(source_draw || before == bus->work_ram, "Graphical readiness mutated logical actor/event/RNG state");
        require(diagnostics.creations == bus->native_sprite_runtime()->diagnostics().creations &&
                diagnostics.live_resources == bus->native_sprite_runtime()->diagnostics().live_resources,
                "Graphical readiness activated a logical resource owner");
        ++frames;
    }
    unsigned create(const eb::native::StationaryNpcSprite &sprite, unsigned slot, int x, int y,
                    unsigned group_override = 0xffff) {
        const bool jp = assets.version == eb::GameVersion::JP;
        const unsigned group = group_override == 0xffff ? catalog.definition(sprite.placement.npc).sprite : group_override;
        put((jp ? 0x30d4 : 0x2cd6) + slot, group);
        eb::MainCpu65816 cpu(*bus); cpu.emulation_mode = false; cpu.status_register = 0;
        cpu.stack_pointer = 0x1e00; cpu.program_counter = jp ? 0xc01e5f : 0xc01e49;
        cpu.accumulator = group;
        require(!bus->native_sprite_runtime()->try_execute(cpu, *bus), "Creation entry was retired");
        cpu.program_counter = jp ? 0xc020fe : 0xc020f0; cpu.accumulator = slot / 2;
        require(!bus->native_sprite_runtime()->try_execute(cpu, *bus), "Creation return was retired");
        put(profile.wram_entity_world_coordinates.x + slot, sprite.placement.x);
        put(profile.wram_entity_world_coordinates.y + slot, sprite.placement.y);
        put(profile.wram_entity_screen_coordinates.x + slot, x);
        put(profile.wram_entity_screen_coordinates.y + slot, y);
        put(profile.wram_entity_surface_flags + slot, sprite.surface);
        put(profile.wram_entity_draw_callback + slot, profile.entity_draw_callbacks.screen_space);
        put(profile.wram_entity_draw_priority + slot, 1);
        return slot;
    }
    std::vector<eb::PpuPixel> row(unsigned y) const {
        const auto width = renderer.presentation_width();
        std::vector<eb::PpuPixel> pixels(width);
        require(renderer.try_native_sprite_pixels(view(), y, pixels, -int(width - 256) / 2).has_value(), "No native frame");
        return pixels;
    }
    std::shared_ptr<const eb::DirectSceneFrame> direct() {
        // Keep native world tile validation real, with blank loaded tilemaps
        // and only OBJ enabled. Imported actor art is unaffected by OBJ VRAM.
        std::fill(bus->video_ram.begin(), bus->video_ram.end(), 0);
        std::array<std::uint16_t, 4> scroll_x{}, scroll_y{};
        const auto word = [&](unsigned at) { return bus->work_ram[at] | unsigned(bus->work_ram[at + 1]) << 8; };
        scroll_x[0] = word(profile.wram_background_scroll.layer1_x) & 1023;
        scroll_y[0] = word(profile.wram_background_scroll.layer1_y) & 1023;
        renderer.enable_direct_rendering(true);
        for (unsigned y = 0; y < 224; ++y) {
            auto v = view(); v.background_scroll_x = scroll_x; v.background_scroll_y = scroll_y;
            renderer.begin_scanline(v, y);
            std::array<eb::PpuPixel, 256> pixels{};
            renderer.try_native_sprite_pixels(v, y, pixels, 0);
            for (unsigned x = 0; x < 256; ++x)
                bus->native_framebuffer[y * 256 + x] = renderer.compose_presentation_pixel(v, x, y, pixels[x], false);
            renderer.render_presentation_margins(v, y);
            renderer.capture_direct_scanline(v, y);
        }
        auto result = renderer.direct_scene();
        require(bool(result), "Prepared sprite direct scene did not reconstruct exact canonical/margin pixels");
        return result;
    }
};

struct AuthoredActorServices {
    Fixture &f;
    bool jp;
    eb::MainCpu65816 cpu;
    explicit AuthoredActorServices(Fixture &fixture)
        : f(fixture), jp(f.assets.version == eb::GameVersion::JP), cpu(*f.bus) {
        const unsigned first = jp ? 0xa46 : 0xa50, free_actor = jp ? 0xa48 : 0xa52,
                       free_task = jp ? 0xa4a : 0xa54, next_actor = jp ? 0xa94 : 0xa9e,
                       next_task = jp ? 0x1250 : 0x125a, scripts = jp ? 0xa58 : 0xa62;
        f.put(first, 0xffff); f.put(free_actor, 0); f.put(free_task, 0);
        for (unsigned slot = 0; slot < 30; ++slot) {
            f.put(next_actor + slot * 2, slot == 29 ? 0xffff : slot * 2 + 2);
            f.put(scripts + slot * 2, 0xffff);
        }
        for (unsigned task = 0; task < 70; ++task)
            f.put(next_task + task * 2, task == 69 ? 0xffff : task * 2 + 2);
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode = false; cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.direct_page = 0x1e00; cpu.data_bank = 0x7e; cpu.stack_pointer = 0x1fff;
    }
    void call(unsigned pc) {
        cpu.program_counter = 0xc0ff00;
        cpu.execute_instruction<0x22>(pc, 4);
        for (unsigned step = 0; step < 200000; ++step) {
            if (cpu.program_counter == 0xc0ff04 && cpu.stack_pointer == 0x1fff) return;
            cpu.step_instruction();
        }
        throw std::runtime_error("Resource handoff service did not return: " + cpu.describe_registers());
    }
    void create(unsigned group, unsigned script, unsigned x, unsigned y) {
        cpu.accumulator = group; cpu.x_index = script; cpu.y_index = 0;
        f.put(0x1e0e, x); f.put(0x1e10, y);
        call(jp ? 0xc01e5f : 0xc01e49);
        require(cpu.accumulator == 0 && f.bus->native_sprite_runtime()->snapshot(0) &&
                !f.bus->native_sprite_runtime()->snapshot(0)->image,
                "Source creation did not retain an unselected native resource");
    }
    std::shared_ptr<const eb::native::SpriteImage> select(unsigned direction, unsigned surface = 0) {
        f.put((jp ? 0x2ef4 : 0x2af6), direction);
        f.put((jp ? 0x2c90 : 0x2892), 0);
        f.put(f.profile.wram_entity_surface_flags, surface); cpu.y_index = 0;
        call(jp ? 0xc0a4a3 : 0xc0a4c4);
        return f.bus->native_sprite_runtime()->snapshot(0)->image;
    }
};

void test_resource_readiness(const eb::GameAssets &assets) {
    Fixture f(assets);
    constexpr eb::native::NpcId npc = 227;
    const auto &definition = f.catalog.definition(npc);
    require(definition.script == 16 && !f.ready->supports(npc),
            "Moving resource fixture became a stationary preview");
    std::optional<eb::native::NpcPlacement> moving;
    for (unsigned y = 0; y < 40; ++y)
        for (unsigned x = 0; x < 32; ++x)
            for (const auto &place : f.catalog.cell(x, y))
                if (place.npc == npc) moving = place;
    require(moving.has_value(), "Missing authored moving NPC resource fixture");
    if (definition.event_flag && definition.appearance == eb::native::NpcAppearance::FlagOn) {
        const unsigned bit = definition.event_flag - 1;
        f.bus->work_ram[f.flags + bit / 8] |= 1u << (bit & 7);
    }
    const int camera_x = int(moving->x) - 336, camera_y = int(moving->y) - 112;
    const auto footprint = f.footprint(camera_x, camera_y, 522);
    const eb::native::NpcVisibility visibility{moving->tileset,
        std::span(f.bus->work_ram).subspan(f.flags, 128), {}};
    f.put(f.profile.wram_loaded_map_tile_combination, moving->tileset);
    for (const unsigned width : {256u, 258u, 398u, 522u, 800u, 1024u})
        for (const bool right : {false, true}) {
            const int margin = int(width - 256) / 2;
            f.renderer.set_presentation_width(f.view(), width);
            f.put(f.profile.wram_background_scroll.layer1_x,
                  int(moving->x) - (right ? 256 + margin + 32 : -margin - 32));
            f.put(f.profile.wram_background_scroll.layer1_y, camera_y);
            f.frame();
            const auto *ready = f.renderer.npc_sprite_readiness();
            require(ready && std::find(ready->groups().begin(), ready->groups().end(), definition.sprite) !=
                                ready->groups().end() && f.renderer.native_sprite_part_count() == 0,
                    "Viewport readiness omitted offscreen moving NPC artwork or invented a live actor");
            const auto queries = f.renderer.npc_sprite_resource_queries();
            f.frame();
            require(f.renderer.npc_sprite_resource_queries() == queries &&
                        f.renderer.npc_sprite_resource_failures() == 0,
                    "Stable viewport repeated NPC resource work or exceeded its bounds");
        }
    f.renderer.set_presentation_width(f.view(), 522);
    f.put(f.profile.wram_background_scroll.layer1_x, camera_x);
    f.put(f.profile.wram_background_scroll.layer1_y, camera_y);
    // Source-active identities suppress every eligible stationary neighbour;
    // the moving actor remains dormant, with artwork as its only host state.
    eb::native::StationaryNpcPreparation cache;
    std::vector<eb::native::NpcId> active;
    for (const auto &sprite : f.ready->prepare(footprint, visibility, cache))
        active.push_back(sprite.placement.npc);
    f.active(active); f.frame();
    const auto *leases = f.renderer.npc_sprite_readiness();
    require(leases && leases->stats().images > 0 &&
            std::find(leases->groups().begin(), leases->groups().end(), definition.sprite) != leases->groups().end(),
            "Offscreen moving NPC did not prepare its declared sprite group");
    require(f.renderer.native_sprite_part_count() == 0 && f.renderer.stationary_sprite_part_count() == 0,
            "Resource preparation fabricated moving NPC draw commands");
    const int left_camera = int(moving->x) + 80;
    std::vector<eb::native::NpcId> left_active;
    for (const auto &sprite : f.ready->prepare(f.footprint(left_camera, camera_y), visibility, cache))
        left_active.push_back(sprite.placement.npc);
    f.active(left_active);
    f.put(f.profile.wram_background_scroll.layer1_x, left_camera); f.frame();
    leases = f.renderer.npc_sprite_readiness();
    require(leases && std::find(leases->groups().begin(), leases->groups().end(), definition.sprite) != leases->groups().end() &&
            f.renderer.native_sprite_part_count() == 0 && f.renderer.stationary_sprite_part_count() == 0,
            "Left-edge resource preparation omitted moving art or fabricated a preview");
    f.active(active); f.put(f.profile.wram_background_scroll.layer1_x, camera_x); f.frame();
    leases = f.renderer.npc_sprite_readiness();
    const auto queries = f.renderer.npc_sprite_resource_queries();
    const auto prepared = std::vector(leases->images().begin(), leases->images().end());
    for (unsigned repeat = 0; repeat < 120; ++repeat) f.frame();
    require(f.renderer.npc_sprite_resource_queries() == queries,
            "Unchanged render footprint repeated the resource catalog query");
    require(f.renderer.npc_sprite_resource_failures() == 0,
            "Ordinary authored footprint exceeded resource preparation bounds");

    // Run the real source CREATE control flow with native allocation, then
    // the real native lower-loader service. The first pose must use a held
    // prepared image, without a replacement-image shortcut or new simulation.
    AuthoredActorServices services(f);
    services.create(definition.sprite, definition.script, moving->x, moving->y);
    active.insert(active.begin(), npc); f.active(active); f.frame();
    require(f.renderer.npc_sprite_resource_queries() == queries &&
            f.renderer.npc_sprite_readiness()->stats().images == prepared.size(),
            "Logical activation discarded the first-pose resource lease");
    const auto selected = services.select(definition.direction);
    require(selected && std::find(prepared.begin(), prepared.end(), selected) != prepared.end(),
            "Actual first-pose loader did not acquire the prepared shared image");
    require(f.bus->native_sprite_runtime()->diagnostics().selections == 1,
            "First-pose handoff did not retire the real native selection service");

    // Copied captured scenes retain independent leases and request keys. An
    // unrelated flag invalidates one query, while identical groups reuse all
    // immutable images; leaving normal world releases only the copy's leases.
    auto copied = f.renderer;
    f.bus->work_ram[f.flags + 127] ^= 0x80;
    copied.begin_sprite_frame(1); copied.seal_sprite_frame(f.view());
    require(copied.npc_sprite_resource_queries() == queries + 1 &&
            f.renderer.npc_sprite_resource_queries() == queries,
            "Changed event state did not independently refresh the copied resource query");
    const auto *copied_leases = copied.npc_sprite_readiness();
    require(copied_leases && copied_leases != f.renderer.npc_sprite_readiness() &&
            copied_leases->images().data() != f.renderer.npc_sprite_readiness()->images().data() &&
            std::equal(copied_leases->images().begin(), copied_leases->images().end(), prepared.begin(), prepared.end()),
            "Copied resource leases shared mutable storage or reimported unchanged artwork");
    f.put(f.photograph, 1); copied.begin_sprite_frame(1); copied.seal_sprite_frame(f.view());
    require(!copied.npc_sprite_readiness() && f.renderer.npc_sprite_readiness(),
            "Scene exclusion failed to clear only the copied leases");
    f.put(f.photograph, 0); f.bus->work_ram[f.flags + 127] ^= 0x80;
    for (unsigned gate : {f.enabled, f.photograph, f.profile.wram_battle_mode_flag}) {
        f.put(gate, gate == f.enabled ? 0 : 1); f.frame();
        require(!f.renderer.npc_sprite_readiness(), "Non-world gate retained dormant NPC resource leases");
        f.put(gate, gate == f.enabled ? 1 : 0); f.frame();
        require(f.renderer.npc_sprite_readiness(), "Restored world did not restore resource leases");
    }
    f.put(f.profile.wram_loaded_map_tile_combination, 32); f.frame();
    require(!f.renderer.npc_sprite_readiness(), "Invalid map identity retained resource leases");
    f.put(f.profile.wram_loaded_map_tile_combination, moving->tileset); f.frame();
    f.renderer.set_presentation_width(f.view(), 256); f.frame();
    require(f.renderer.npc_sprite_readiness(), "Native-width rendering lost offscreen NPC readiness");
    f.renderer.set_presentation_width(f.view(), 522); f.frame();
    require(f.renderer.npc_sprite_readiness(), "Widened rendering failed to restore resource leases");

    // A bounded failure is transactional and diagnosed once per identical
    // failed request. Invalid inputs remain explicit programming errors.
    require(f.ready->prepare_resources(footprint, visibility, cache), "Valid preparation was rejected");
    const auto previous = cache.resources()->stats();
    const auto previous_image = cache.resources()->images().front();
    eb::native::StationaryNpcSprites limited(assets.image, assets.version,
        f.bus->native_sprite_runtime()->resources(), {1, 64 * 1024 * 1024});
    require(!limited.prepare_resources(footprint, visibility, cache) &&
            cache.resource_failure() == eb::native::NpcResourcePreparationFailure::Budget &&
            cache.resource_failures() == 1 && cache.resources()->stats() == previous &&
            cache.resources()->images().front() == previous_image,
            "Bounded resource exhaustion lost prior ready artwork or its diagnostic");
    const auto failed_queries = cache.resource_queries();
    require(!limited.prepare_resources(footprint, visibility, cache) &&
            cache.resource_queries() == failed_queries && cache.resource_failures() == 1,
            "Repeated rejected footprint retried excessive resource work");
    bool invalid = false;
    try { limited.prepare_resources({10, 0, 9, 0}, visibility, cache); }
    catch (const std::invalid_argument &) { invalid = true; }
    require(invalid && cache.resource_failures() == 1 && cache.resources()->stats() == previous,
            "Invalid resource query was hidden as ordinary resource exhaustion");
    std::cout << assets.title << ": resource-only readiness PASS moving_npc=" << npc
              << " images=" << prepared.size() << " widths=6 edges=2 repeated_frames=120 native_first_pose=1\n";
}

void test_enemy_resource_readiness(const eb::GameAssets &assets) {
    Fixture f(assets);
    const bool jp = assets.version == eb::GameVersion::JP;
    const unsigned enabled = jp ? 0x4de0 : 0x4a5a;
    const auto layout = eb::native::enemy_sprite_catalog_layout(assets.version);
    const eb::native::EnemySpriteCatalog catalog(assets.image, layout);
    const auto flags = std::span(f.bus->work_ram).subspan(f.flags, 128);
    unsigned cell_x = 0, cell_y = 0, tileset = 0;
    bool found = false;
    for (unsigned y = 0; y < 160 && !found; ++y)
        for (unsigned x = 0; x < 128 && !found; ++x) {
            const unsigned area = assets.image[layout.tilesets + (y / 2) * 32 + x / 4] >> 3;
            const auto groups = catalog.query({int(x * 64), int(y * 64), int(x * 64 + 64), int(y * 64 + 64)},
                                              {area, flags});
            if (catalog.encounter(x, y) && groups.size() > 1) {
                cell_x = x; cell_y = y; tileset = area; found = true;
            }
        }
    require(found, "No actual multi-group encounter for renderer resource fixture");
    f.renderer.set_native_stationary_sprites({});
    f.renderer.set_native_enemy_sprites(eb::EnemySpritePreparation(assets.image, assets.version,
        f.bus->native_sprite_runtime()->resources()));
    f.put(f.enabled, 0); // NPC policy must not gate encounter artwork.
    f.put(enabled, 2); // Source gate accepts any nonzero enable word.
    f.put(f.profile.wram_loaded_map_tile_combination, tileset);
    std::vector<std::shared_ptr<const eb::native::SpriteImage>> prepared;
    unsigned prepared_group = 0;
    for (const unsigned width : {256u, 258u, 398u, 522u, 800u, 1024u})
      for (bool right : {false, true}) {
        f.renderer.set_presentation_width(f.view(), width);
        const int margin = int(width - 256) / 2;
        // Put the real encounter sector beyond the displayed edge but inside
        // the readiness pad, including native width and the smallest extension.
        const int camera_x = int(cell_x * 64) - (right ? 256 + margin + 32 : -margin - 32),
                  camera_y = int(cell_y * 64) - 112;
        f.put(f.profile.wram_background_scroll.layer1_x, camera_x);
        f.put(f.profile.wram_background_scroll.layer1_y, camera_y);
        f.frame();
        const auto *adapter = f.renderer.enemy_sprite_preparation();
        const auto *ready = adapter->resources();
        const auto footprint = f.footprint(camera_x, camera_y);
        const auto expected = catalog.query({footprint.left, footprint.top, footprint.right, footprint.bottom}, {tileset, flags});
        require(ready && !ready->leases().images.empty() &&
                std::equal(ready->groups().begin(), ready->groups().end(), expected.begin(), expected.end()),
                "Renderer encounter footprint/gates differ from imported candidate groups");
        require(f.renderer.native_sprite_part_count() == 0 && f.renderer.stationary_sprite_part_count() == 0,
                "Enemy readiness invented a spawned actor, selected pose or draw command");
        const auto queries = adapter->queries();
        f.put(f.objects_only, 1);
        for (unsigned repeat = 0; repeat < 120; ++repeat) f.frame();
        require(adapter->queries() == queries && adapter->failures() == 0,
                "Repeated enemy footprint or unrelated NPC mode repeated resource work");
        f.put(f.objects_only, 0);
        prepared = ready->leases().images;
        prepared_group = ready->groups().front();
    }
    // Encounter preparation shares the actual runtime's resource catalog.
    // A subsequently selected native appearance acquires the same image.
    eb::native::SpriteAppearance appearance(f.bus->native_sprite_runtime()->resources(), prepared_group);
    appearance.select_four(0, 0, 0);
    const auto &selection = *appearance.displayed();
    const auto selected = f.bus->native_sprite_runtime()->resources()->acquire(
        selection.sprite, selection.pose, selection.surface, selection.format);
    require(selected && std::find(prepared.begin(), prepared.end(), selected) != prepared.end(),
            "Native enemy appearance did not reuse a prepared image lease");
    AuthoredActorServices services(f);
    services.create(prepared_group, 1, cell_x * 64, cell_y * 64);
    const auto actual = services.select(0);
    require(actual && actual == selected &&
            f.bus->native_sprite_runtime()->diagnostics().selections == 1,
            "Actual enemy CREATE/native first pose did not reuse its prepared artwork");
    f.put(f.profile.wram_entity_animation_frame, 0xffff);
    f.put(f.profile.wram_entity_spritemap_pointers.high, 0x807e);
    auto copied = f.renderer;
    const auto *original = f.renderer.enemy_sprite_preparation();
    const auto queries = original->queries();
    f.bus->work_ram[f.flags + 127] ^= 0x80;
    copied.begin_sprite_frame(1); copied.seal_sprite_frame(f.view());
    const auto *copy = copied.enemy_sprite_preparation();
    require(copy->queries() == queries + 1 && original->queries() == queries && copy->resources() &&
            copy->resources()->leases().images.data() != original->resources()->leases().images.data(),
            "Copied enemy preparation shared mutable request/image storage");
    f.bus->work_ram[f.flags + 127] ^= 0x80;
    f.put(enabled, 0); copied.begin_sprite_frame(1); copied.seal_sprite_frame(f.view());
    require(!copy->resources() && original->resources(), "Enemy enable cleared original copy's leases");
    f.put(enabled, 1);
    for (unsigned id : {11u, 73u}) {
        f.bus->work_ram[f.flags + (id - 1) / 8] |= 1u << ((id - 1) & 7); f.frame();
        require(!f.renderer.enemy_sprite_preparation()->resources(), "Authored global enemy flag did not release leases");
        f.bus->work_ram[f.flags + (id - 1) / 8] &= ~(1u << ((id - 1) & 7)); f.frame();
        require(f.renderer.enemy_sprite_preparation()->resources(), "Cleared enemy flag failed to restore leases");
    }
    // The neighbouring flag tests the one-based lookup instead of merely
    // reproducing the two suppression bits in a high-level test input.
    f.bus->work_ram[f.flags + 1] ^= 2; f.frame(); // flag10, not flag11
    require(f.renderer.enemy_sprite_preparation()->resources(), "Enemy flag lookup is off by one");
    f.bus->work_ram[f.flags + 1] ^= 2;
    f.put(f.profile.wram_loaded_map_tile_combination, 32); f.frame();
    require(!f.renderer.enemy_sprite_preparation()->resources(), "Invalid map retained enemy readiness");
    f.put(f.profile.wram_loaded_map_tile_combination, tileset); f.frame();
    f.renderer.set_presentation_width(f.view(), 256); f.frame();
    require(f.renderer.enemy_sprite_preparation()->resources(), "Native width lost offscreen enemy readiness");
    f.renderer.set_presentation_width(f.view(), 522); f.frame();
    require(f.renderer.enemy_sprite_preparation()->resources(), "Restored width lost enemy readiness");
    f.put(f.profile.wram_battle_mode_flag, 1); f.frame();
    require(!f.renderer.enemy_sprite_preparation()->resources(), "Battle retained dormant world encounter resources");
    f.put(f.profile.wram_battle_mode_flag, 0);
    f.bus->write_byte(0x2100, 0x80); f.frame(); f.bus->write_byte(0x2100, 15);
    f.renderer.set_native_enemy_sprites(eb::EnemySpritePreparation(assets.image, assets.version,
        f.bus->native_sprite_runtime()->resources(), {1, 64 * 1024 * 1024}));
    f.frame();
    const auto *limited = f.renderer.enemy_sprite_preparation();
    require(!limited->resources() && limited->failure() == eb::EnemyResourcePreparationFailure::Budget &&
            limited->failures() == 1, "Enemy resource budget failure was not bounded and diagnosed");
    const auto attempts = limited->queries(); f.frame();
    require(limited->queries() == attempts && limited->failures() == 1,
            "Rejected enemy footprint repeated expensive allocation work");
    std::cout << assets.title << ": enemy resource-only renderer PASS cell=" << cell_x << ',' << cell_y
              << " images=" << prepared.size() << " widths=6 edges=2 repeated_frames=1440 native_first_pose=1\n";
}

void test_stationary_vertical_overscan(const eb::GameAssets &assets) {
    Fixture f(assets);
    constexpr eb::native::NpcId npc = 328;
    const auto placement = f.ready->placement(npc);
    require(placement && placement->tileset == 2, "Missing authored stationary vertical-edge fixture");
    const auto flags = std::span(f.bus->work_ram).subspan(f.flags, 128);
    eb::native::StationaryNpcPreparation cache;
    const auto target = f.ready->prepare({int(placement->x) - 1, int(placement->y) - 1,
                                          int(placement->x) + 1, int(placement->y) + 1},
                                         {placement->tileset, flags, {}}, cache);
    require(target.size() == 1 && target.front().placement.npc == npc && !(target.front().surface & 8),
            "Vertical-edge fixture did not select one dry authored stationary pose");
    const auto &image = *target.front().image;
    int top = 0, bottom = 0;
    for (const auto &part : image.parts) {
        top = std::min(top, int(part.top));
        bottom = std::max(bottom, int(part.top) + 16);
    }
    unsigned cases = 0, quads = 0;
    for (const unsigned width : {256u, 258u, 398u, 522u, 800u, 1024u})
        for (const bool lower : {false, true}) {
            const int x = 128, y = lower ? 233 - top : -7 - bottom;
            const int camera_x = int(placement->x) - x, camera_y = int(placement->y) - y;
            const auto bounds = f.footprint(camera_x, camera_y, width);
            const auto candidates = f.ready->prepare(bounds, {placement->tileset, flags, {}}, cache);
            std::vector<eb::native::NpcId> active;
            for (const auto &candidate : candidates)
                if (candidate.placement.npc != npc) active.push_back(candidate.placement.npc);
            f.active(active);
            f.renderer.set_presentation_width(f.view(), width);
            f.put(f.profile.wram_background_scroll.layer1_x, camera_x);
            f.put(f.profile.wram_background_scroll.layer1_y, camera_y);
            f.frame();
            require(f.renderer.stationary_sprite_part_count() == image.parts.size() &&
                        f.renderer.native_sprite_part_count() == 0,
                    "Dormant stationary artwork was not prepared beyond the vertical edge");
            const auto before = f.bus->work_ram;
            const auto picture = f.direct();
            require(f.bus->work_ram == before, "Vertical-edge scene capture changed authoritative actor state");
            const auto identity = (std::uint64_t{1} << 61) | placement->identity;
            const auto found = std::find_if(picture->motions.begin(), picture->motions.end(),
                [&](const auto &motion) { return motion.identity == identity; });
            require(found != picture->motions.end(), "Vertical pre-rendered stationary actor has no motion identity");
            const unsigned motion = unsigned(found - picture->motions.begin());
            unsigned target_quads = 0;
            for (const auto &quad : picture->quads) {
                if (!quad.object || quad.motion != motion) continue;
                require(lower ? quad.y >= 224 : quad.y + quad.height <= 0,
                        "Prepared vertical quad lacks its authored offscreen position");
                require(!std::isfinite(quad.clip.left) && !std::isfinite(quad.clip.right) &&
                        !std::isfinite(quad.clip.top) && !std::isfinite(quad.clip.bottom),
                        "Prepared artwork acquired an exclusion clip at the original viewport");
                require(std::any_of(image.parts.begin(), image.parts.end(), [&](const auto &part) {
                    return quad.x - found->x == part.left && quad.y - found->y == part.top;
                }), "Vertical quad differs from the imported stationary pose geometry");
                ++target_quads;
            }
            require(target_quads > 0, "Vertical readiness retained no actual imported sprite artwork");
            const auto pixels = eb::rasterize_direct_scene({picture, {}}, 1);
            require(std::all_of(pixels.begin(), pixels.end(), [](auto pixel) { return pixel == 0xff000000; }),
                    "Wholly offscreen stationary readiness changed displayed pixels");
            quads += target_quads;
            ++cases;
        }
    std::cout << assets.title << ": stationary vertical overscan PASS widths=6 edges=2 cases=" << cases
              << " imported_quads=" << quads << '\n';
}

void test_authored_prop_edges(const eb::GameAssets &assets) {
    using namespace eb::native;
    const WorldMap maps(assets.image, world_map_layout(assets.version));
    const WorldCollision collision(assets.image, world_collision_layout(assets.version));
    struct Target { NpcId npc; const char *name; unsigned sprite, script, tileset; };
    // Actual Twoson exterior props and facing people, plus a previously covered
    // stationary person. The named source STREET_SIGN is a tall street post.
    const Target targets[]{{350, "east bench", 198, 8, 2}, {351, "west bench", 198, 8, 2},
        {368, "street sign post", 204, 8, 2}, {304, "facing person", 55, 606, 2},
        {311, "facing person", 78, 606, 2}, {328, "stationary person control", 149, 605, 2},
        {572, "Threed streetlight", 201, 8, 3}};
    unsigned cases = 0, imported_pixels = 0, display_pixels = 0;
    const auto failures_before = prop_edge_failures;
    for (const auto &target : targets)
        for (const unsigned width : {398u, 522u, 800u, 1024u})
            for (const bool right : {false, true}) {
                Fixture f(assets);
                f.renderer.set_presentation_width(f.view(), width);
                std::optional<NpcPlacement> place;
                for (unsigned y = 0; y < 40; ++y)
                    for (unsigned x = 0; x < 32; ++x)
                        for (const auto &candidate : f.catalog.cell(x, y))
                            if (candidate.npc == target.npc) place = candidate;
                const auto &definition = f.catalog.definition(target.npc);
                require(place && place->tileset == target.tileset && definition.sprite == target.sprite &&
                            definition.script == target.script,
                        "Authored prop edge fixture differs from the actual regional catalog");
                const auto flags = std::span(f.bus->work_ram).subspan(f.flags, 128);
                f.put(f.profile.wram_loaded_map_tile_combination, place->tileset);
                const auto area = maps.prepare(place->tileset, flags);
                const auto resources = f.bus->native_sprite_runtime()->resources();
                const auto &sprite = resources->definition(definition.sprite);
                const auto origin = collision.origin({std::uint16_t(place->x), std::uint16_t(place->y)}, sprite.shape);
                const auto left = collision.edge(area, origin, sprite.shape, CollisionEdge::Left);
                const auto surface = collision.edge(area, origin, sprite.shape, CollisionEdge::Right, left);
                require(!(surface & 8), "Authored prop fixture requires an unsupported dormant water overlay");
                SpriteAppearance appearance(resources, definition.sprite);
                appearance.select_four(definition.direction, 0, surface);
                const auto &selection = *appearance.displayed();
                const auto image = resources->acquire(selection.sprite, selection.pose, selection.surface, selection.format);
                const int margin = int(width - 256) / 2, y = 112;
                const int start = right ? 256 + margin + 24 : -margin - 24;
                const int stop = right ? 320 : -65;
                unsigned sampled = 0, missing = 0, first_missing = 0;
                const auto compare = [&](int x) {
                    unsigned absent = 0, visible = 0;
                    for (const auto &part : image->parts)
                        for (unsigned sy = 0; sy < 16; ++sy) {
                            const auto pixels = f.row(unsigned(y + part.top - 1) + sy);
                            for (unsigned sx = 0; sx < 16; ++sx) {
                                const int native_x = x + part.left + int(sx);
                                if (native_x < -margin || native_x >= 256 + margin ||
                                    (native_x >= 0 && native_x < 256)) continue;
                                const unsigned value = part.indices[sy * 16 + sx];
                                if (!value) continue;
                                ++visible;
                                absent += pixels[native_x + margin].palette_index != 128 + sprite.palette * 16 + value;
                            }
                        }
                    return std::pair{absent, visible};
                };
                const auto compare_display = [&](int x) {
                    const auto picture = f.direct();
                    const auto pixels = eb::rasterize_direct_scene({picture, {}}, 1);
                    // The real display can recenter at an authored map edge.
                    // Its BG motion records the completed-frame shift, so the
                    // expected body follows that same physical viewport.
                    require(picture->motions.size() >= 3, "Prop edge capture has no world camera motion");
                    const int camera_x = int(place->x) - x;
                    const int shift = -camera_x - int(picture->motions[1].x);
                    unsigned absent = 0, visible = 0;
                    for (const auto &part : image->parts)
                        for (unsigned sy = 0; sy < 16; ++sy)
                            for (unsigned sx = 0; sx < 16; ++sx) {
                                const int dx = x + part.left + int(sx) + margin - shift,
                                          dy = y + part.top - 1 + int(sy);
                                if (dx < 0 || dx >= int(width) || dy < 0 || dy >= 224) continue;
                                const unsigned value = part.indices[sy * 16 + sx];
                                if (!value) continue;
                                const unsigned color = f.view().palette(128 + sprite.palette * 16 + value);
                                const auto channel = [](unsigned v) { return (v << 3) | (v >> 2); };
                                const std::uint32_t expected_color = 0xff000000 |
                                    channel(color & 31) << 16 | channel((color >> 5) & 31) << 8 |
                                    channel((color >> 10) & 31);
                                ++visible;
                                absent += pixels[std::size_t(dy) * width + unsigned(dx)] != expected_color;
                            }
                    return std::pair{absent, visible};
                };
                std::vector<NpcId> active;
                for (int x = start;; x += right ? -1 : 1) {
                    const int camera_x = int(place->x) - x, camera_y = int(place->y) - y;
                    const auto candidates = f.catalog.query(f.footprint(camera_x, camera_y), {place->tileset, flags, {}});
                    active.clear();
                    for (const auto &candidate : candidates)
                        if (candidate.placement.npc != target.npc && f.ready->supports(candidate.placement.npc))
                            active.push_back(candidate.placement.npc);
                    f.active(active);
                    f.put(f.profile.wram_background_scroll.layer1_x, camera_x);
                    f.put(f.profile.wram_background_scroll.layer1_y, camera_y);
                    f.frame();
                    const auto [absent, visible] = compare(x);
                    if (absent && !missing) first_missing = std::uint16_t(x);
                    sampled += visible; missing += absent;
                    if (x == stop) break;
                }
                require(sampled > 0, "Prop edge path did not expose actual imported artwork");
                const auto [dormant_display_missing, dormant_display_visible] = compare_display(stop);
                // Actual source CREATE starts with an unselected native lease.
                // The separate action oracle proves the declared script sets
                // its first pose before yielding. Here the real native loader
                // must select the identical held imported image for its draw.
                AuthoredActorServices services(f);
                services.create(definition.sprite, definition.script, place->x, place->y);
                active.insert(active.begin(), target.npc); f.active(active);
                f.put(f.profile.wram_entity_spritemap_pointers.high, 0x7e);
                f.put(assets.version == eb::GameVersion::JP ? 0x2ef4 : 0x2af6, definition.direction);
                f.frame();
                require(f.renderer.native_sprite_part_count() == 0 && f.renderer.stationary_sprite_part_count() > 0,
                        "Source CREATE dropped prepared artwork before its first pose");
                const auto selected = services.select(definition.direction, surface);
                require(selected == image, "Actual native first-pose loader changed prepared prop artwork");
                f.put(f.profile.wram_entity_screen_coordinates.x, stop);
                f.put(f.profile.wram_entity_screen_coordinates.y, y);
                f.put(f.profile.wram_entity_draw_callback, f.profile.entity_draw_callbacks.screen_space);
                f.put(f.profile.wram_entity_draw_priority, 1);
                f.put(f.profile.wram_entity_spritemap_pointers.high, 0x7e);
                f.put(f.profile.wram_entity_animation_frame, 0); f.frame();
                const auto [selected_missing, selected_visible] = compare(stop);
                const auto [selected_display_missing, selected_display_visible] = compare_display(stop);
                require(selected_visible > 0,
                        "Prop source-pose handoff was outside the displayed margin");
                require(dormant_display_visible > 0 && selected_display_visible > 0,
                        "Prop source-pose handoff was outside the actual recentered viewport");
                const auto picture = f.direct();
                const auto identity = (std::uint64_t{1} << 61) | place->identity;
                const bool authored_identity = std::any_of(picture->motions.begin(), picture->motions.end(),
                    [&](const auto &motion) { return motion.identity == identity; });
                if (missing || selected_missing || dormant_display_missing || selected_display_missing || !authored_identity) {
                    ++prop_edge_failures;
                    std::cerr << assets.title << ": authored prop edge MISSING npc=" << target.npc << " " << target.name
                              << " width=" << width << " edge=" << (right ? "right" : "left")
                              << " missing_pixels=" << missing << '/' << sampled
                              << " first_native_x=" << std::int16_t(first_missing)
                              << " selected_pose=" << selected_missing << '/' << selected_visible
                              << " display(dormant/selected)=" << dormant_display_missing << '/' << selected_display_missing
                              << " authored_identity=" << authored_identity << '\n';
                }
                ++cases; imported_pixels += sampled + selected_visible;
                display_pixels += dormant_display_visible + selected_display_visible;
            }
    if (prop_edge_failures == failures_before)
        std::cout << assets.title << ": authored prop edge renderer PASS targets=7 widths=4 edges=2 cases=" << cases
                  << " imported_pixels=" << imported_pixels << " display_pixels=" << display_pixels
                  << " actual_CREATE_first_pose=1\n";
}

void test_tall_prop_bottom_edge(const eb::GameAssets &assets) {
    using namespace eb::native;
    unsigned cases = 0, expected_pixels = 0, missing_pixels = 0;
    for (const unsigned width : {256u, 398u, 522u, 1024u}) {
        Fixture f(assets);
        f.renderer.set_presentation_width(f.view(), width);
        const auto place = f.ready->placement(1150);
        require(place && place->tileset == 18 && f.catalog.definition(1150).sprite == 41 &&
                    f.catalog.definition(1150).script == 8,
                "Tall prop fixture differs from authored Dungeon Man placement");
        f.put(f.profile.wram_loaded_map_tile_combination, place->tileset);
        const auto flags = std::span(f.bus->work_ram).subspan(f.flags, 128);
        StationaryNpcPreparation preparation;
        const auto poses = f.ready->prepare({int(place->x), int(place->y), int(place->x) + 1, int(place->y) + 1},
            {place->tileset, flags, {}}, preparation);
        require(poses.size() == 1 && !(poses.front().surface & 8),
                "Tall prop has no source-ready dry first pose");
        const auto &pose = poses.front();
        const int margin = int(width - 256) / 2, x = -1;
        bool bottom_quad = false;
        unsigned width_missing = 0, width_pixels = 0;
        // Shape16 has an opaque pixel at -73 from its anchor. At y296 it is
        // already visible on row223; the old 64px anchor query drops it.
        for (int y = 305; y >= 280; --y) {
            const int camera_x = int(place->x) - x, camera_y = int(place->y) - y;
            std::vector<NpcId> active;
            for (const auto &candidate : f.catalog.query(f.footprint(camera_x, camera_y), {place->tileset, flags, {}}))
                if (candidate.placement.npc != 1150 && f.ready->supports(candidate.placement.npc))
                    active.push_back(candidate.placement.npc);
            f.active(active);
            f.put(f.profile.wram_background_scroll.layer1_x, camera_x);
            f.put(f.profile.wram_background_scroll.layer1_y, camera_y);
            const auto video = f.bus->video_ram;
            const auto palette = f.bus->palette_ram;
            const auto objects = f.bus->object_attributes;
            const auto registers = std::vector(f.bus->ppu_registers().begin(), f.bus->ppu_registers().end());
            f.frame();
            require(video == f.bus->video_ram && palette == f.bus->palette_ram && objects == f.bus->object_attributes &&
                        std::equal(registers.begin(), registers.end(), f.bus->ppu_registers().begin()),
                    "Tall prop readiness mutated authoritative graphics hardware");
            for (const auto &part : pose.image->parts)
                for (unsigned sy = 0; sy < 16; ++sy) {
                    const int yy = y + part.top - 1 + int(sy);
                    if (yy < 0 || yy >= 224) continue;
                    const auto pixels = f.row(unsigned(yy));
                    for (unsigned sx = 0; sx < 16; ++sx) {
                        const int xx = x + part.left + int(sx);
                        if (xx < -margin || xx >= 0 || !part.indices[sy * 16 + sx]) continue;
                        ++width_pixels;
                        width_missing += pixels[xx + margin].palette_index !=
                            128 + pose.palette * 16 + part.indices[sy * 16 + sx];
                    }
                }
            if (y == 296) {
                const auto picture = f.direct();
                const auto identity = (std::uint64_t{1} << 61) | place->identity;
                const auto found = std::find_if(picture->motions.begin(), picture->motions.end(),
                    [&](const auto &motion) { return motion.identity == identity; });
                if (found != picture->motions.end()) {
                    const auto motion = unsigned(found - picture->motions.begin());
                    bottom_quad = std::any_of(picture->quads.begin(), picture->quads.end(), [&](const auto &quad) {
                        return quad.object && quad.motion == motion && quad.y == 223 && quad.height == 16;
                    });
                }
            }
        }
        require(width == 256 || width_pixels > 0, "Tall prop path exposed no actual margin pixels");
        if (width_missing || !bottom_quad) {
            ++prop_edge_failures;
            std::cerr << assets.title << ": Dungeon Man bottom edge MISSING width=" << width
                      << " missing_pixels=" << width_missing << '/' << width_pixels
                      << " anchor296_row223_quad=" << bottom_quad << '\n';
        }
        ++cases; expected_pixels += width_pixels; missing_pixels += width_missing;
    }
    if (!missing_pixels)
        std::cout << assets.title << ": tall prop bottom path cases=" << cases
                  << " imported_pixels=" << expected_pixels << '\n';
}

void test(const eb::GameAssets &assets) {
    Fixture f(assets);
    unsigned cases = 0, compared = 0, visible = 0;
    for (eb::native::NpcId npc : {328, 329}) {
        const auto placement = f.ready->placement(npc);
        require(placement && placement->tileset == 2, "Missing authored exterior theater actor");
        const auto &definition = f.catalog.definition(npc);
        require(definition.script == 605 && definition.event_flag == 549,
                "Exterior theater actor behavior changed");
        for (bool right : {false, true}) {
            const int x = right ? 336 : -80, y = 112;
            const int camera_x = int(placement->x) - x, camera_y = int(placement->y) - y;
            f.put(f.profile.wram_background_scroll.layer1_x, camera_x);
            f.put(f.profile.wram_background_scroll.layer1_y, camera_y);
            eb::native::StationaryNpcPreparation preparation;
            std::vector<eb::native::NpcId> active;
            const auto candidates = f.ready->prepare(f.footprint(camera_x, camera_y),
                {2, std::span(f.bus->work_ram).subspan(f.flags, 128), {}}, preparation);
            std::optional<eb::native::StationaryNpcSprite> expected;
            for (const auto &candidate : candidates)
                if (candidate.placement.npc == npc) expected = candidate;
                else active.push_back(candidate.placement.npc);
            require(expected.has_value(), "Target not eligible before activation");
            f.active(active); f.frame();
            require(f.renderer.stationary_sprite_part_count() == expected->image->parts.size(),
                    "Dormant target is missing or duplicated");
            const auto preparations = f.renderer.stationary_area_preparations();
            for (unsigned repeat = 0; repeat < 120; ++repeat) f.frame();
            require(f.renderer.stationary_area_preparations() == preparations,
                    "Unchanged scene rebuilt collision area on each frame");
            for (unsigned yy = 0; yy < 224; ++yy) {
                const auto actual = f.row(yy);
                for (unsigned xx = 133; xx < 389; ++xx)
                    require(actual[xx].priority < 0, "Dormant art changed canonical center");
                for (const auto &part : expected->image->parts) {
                    const int sy = int(yy) - (y + part.top - 1);
                    if (sy < 0 || sy >= 16) continue;
                    for (unsigned sx = 0; sx < 16; ++sx) {
                        const auto &pixel = actual[x + part.left + int(sx) + 133];
                        const unsigned value = part.indices[unsigned(sy) * 16 + sx];
                        if (value) {
                            require(pixel.palette_index == 128 + expected->palette * 16 + value,
                                    "Prepared indexed artwork/palette differs from imported pose");
                            ++visible;
                        } else require(pixel.priority < 0, "Prepared transparent pixel became opaque");
                        ++compared;
                    }
                }
            }
            // Every active identity suppresses readiness, even before its first
            // selected pose and while its actual logical draw is hidden.
            active.push_back(npc); f.active(active); f.frame();
            require(f.renderer.stationary_sprite_part_count() == 0, "Hidden/unselected active actor resurrected");
            const unsigned slot = f.create(*expected, unsigned(active.size() - 1) * 2, x, y);
            f.frame();
            require(f.renderer.native_sprite_part_count() == 0 && f.renderer.stationary_sprite_part_count() == 0,
                    "Unselected newly activated actor acquired a fabricated pose");
            f.bus->native_sprite_runtime()->replace_image(slot, expected->image);
            f.put(f.profile.wram_entity_spritemap_pointers.high + slot, 0x7e);
            f.put(f.profile.wram_entity_animation_frame + slot, 0);
            f.frame();
            require(f.renderer.stationary_sprite_part_count() == 0 &&
                    f.renderer.native_sprite_part_count() == expected->image->parts.size(),
                    "Activation did not transfer artwork to exactly one native owner");
            for (const auto &part : expected->image->parts)
                for (unsigned yy = 0; yy < 16; ++yy) {
                    const auto pixels = f.row(unsigned(y + part.top - 1) + yy);
                    for (unsigned xx = 0; xx < 16; ++xx) {
                        const auto &pixel = pixels[x + part.left + int(xx) + 133];
                        const unsigned value = part.indices[yy * 16 + xx];
                        require(value ? pixel.palette_index == 128 + expected->palette * 16 + value : pixel.priority < 0,
                                "Selected source actor changed pixels during graphical handoff");
                    }
                }
            f.put(f.profile.wram_entity_spritemap_pointers.high + slot, 0x807e); f.frame();
            require(f.renderer.native_sprite_part_count() == 0 && f.renderer.stationary_sprite_part_count() == 0,
                    "Active hidden actor was resurrected after selection");
            active.pop_back(); f.active(active); f.frame();
            require(f.renderer.stationary_sprite_part_count() > 0, "Deleted stationary actor did not become ready");
            // Copying a prepared renderer must not share mutable area/cache
            // state with the original or require another content import.
            const auto original = f.renderer.stationary_area_preparations();
            auto copied = f.renderer;
            const unsigned bit = 549 - 1;
            f.bus->work_ram[f.flags + bit / 8] |= 1u << (bit & 7);
            copied.begin_sprite_frame(1); copied.seal_sprite_frame(f.view());
            copied.capture_oam_upload(f.view(), 1); copied.begin_scanline(f.view(), 0);
            require(copied.stationary_sprite_part_count() == 0, "Appearance flag did not hide dormant actor");
            require(f.renderer.stationary_area_preparations() == original, "Copied cache mutated original");
            f.bus->work_ram[f.flags + bit / 8] &= ~(1u << (bit & 7));
            f.bus->work_ram[f.flags + 127] ^= 0x80;
            copied.begin_sprite_frame(1); copied.seal_sprite_frame(f.view());
            copied.capture_oam_upload(f.view(), 1); copied.begin_scanline(f.view(), 0);
            require(copied.stationary_area_preparations() == original + 1 &&
                    copied.stationary_sprite_part_count() > 0,
                    "Changed event state did not rebuild the copied prepared area");
            require(f.renderer.stationary_area_preparations() == original,
                    "Copied event-resolved area was shared mutably with original");
            f.bus->work_ram[f.flags + 127] ^= 0x80;
            for (const unsigned gate : {f.enabled, f.photograph, f.objects_only, f.profile.wram_battle_mode_flag}) {
                f.put(gate, gate == f.enabled ? 0 : 1); f.frame();
                require(f.renderer.stationary_sprite_part_count() == 0, "Scene/activation gate did not suppress dormant actor");
                f.put(gate, gate == f.enabled ? 1 : 0);
            }
            // The actual renderer intentionally retains battle layout until
            // fade-out/scene replacement; finish that fixture transition too.
            f.bus->write_byte(0x2100, 0x80); f.frame(); f.bus->write_byte(0x2100, 15);
            f.put(f.profile.wram_loaded_map_tile_combination, 1); f.frame();
            require(f.renderer.stationary_sprite_part_count() == 0, "Dormant actor crossed map identity");
            f.put(f.profile.wram_loaded_map_tile_combination, 2); f.frame();
            require(f.renderer.stationary_sprite_part_count() > 0, "Restored scene did not restore readiness");
            ++cases;
        }
    }
    // Strip loading is asynchronous with crossing the nominal activation
    // bounds. Readiness must not disappear in the seven-pixel lag band.
    for (bool right : {false, true}) {
        const auto place = *f.ready->placement(328);
        f.active({});
        f.put(f.profile.wram_background_scroll.layer1_y, place.y - 112);
        for (int phase = -8; phase <= 8; ++phase) {
            const int x = (right ? 320 : -64) + phase;
            f.put(f.profile.wram_background_scroll.layer1_x, int(place.x) - x); f.frame();
            bool target_visible = false;
            for (unsigned y = 84; y < 112; ++y) {
                const auto pixels = f.row(y);
                for (int xx = x - 7; xx < x + 7; ++xx)
                    target_visible |= pixels[xx + 133].priority >= 0;
            }
            require(target_visible, "Stationary readiness vanished at source activation strip boundary");
        }
    }
    // Exercise actual captured partial quads through fractional presentation.
    // The prepared identity has not activated, even though the camera exposes
    // a fraction of its artwork immediately adjacent to the canonical center.
    for (bool right : {false, true}) {
        const auto place = *f.ready->placement(328);
        f.active({}); f.put(f.profile.wram_background_scroll.layer1_y, place.y - 112);
        eb::DirectSceneMotion motion;
        for (unsigned tick = 0; tick < 2; ++tick) {
            const int x = right ? 260 + int(tick) : -4 - int(tick);
            f.put(f.profile.wram_background_scroll.layer1_x, int(place.x) - x); f.frame();
            const auto direct = f.direct();
            const auto identity = (std::uint64_t{1} << 61) | place.identity;
            const auto target = std::find_if(direct->motions.begin(), direct->motions.end(),
                [&](const auto &entry) { return entry.identity == identity; });
            require(target != direct->motions.end(), "Prepared partial actor lost its identity");
            const unsigned index = unsigned(target - direct->motions.begin());
            for (const auto &quad : direct->quads)
                if (quad.object && quad.motion == index)
                    require(!std::isfinite(quad.clip.left) && !std::isfinite(quad.clip.right),
                            "Prepared partial actor is clipped at the original viewport");
            motion.submit(direct);
        }
        for (double phase : {.25, .5, .75}) {
            const auto pixels = eb::rasterize_direct_scene(motion.sample(phase), 4);
            unsigned visible_margin = 0, visible_center = 0;
            for (unsigned y = 0; y < 224 * 4; ++y)
                for (unsigned x = 0; x < 522 * 4; ++x) {
                    const auto pixel = pixels[y * 522 * 4 + x];
                    if (x >= 133 * 4 && x < 389 * 4)
                        visible_center += pixel != 0xff000000;
                    else visible_margin += pixel != 0xff000000;
                }
            require(visible_margin > 0 && visible_center > 0,
                    "Fractional prepared artwork disappears at the original viewport boundary");
        }
    }
    // Recentered authored map boundaries expose candidates beyond the usual
    // centered query. Use actual placements on both sides, including the
    // reported theater actor on the right boundary of its area.
    for (bool right : {false, true}) {
        const auto place = *f.ready->placement(right ? 328 : 1070);
        const unsigned boundary = right ? 2816 : 4096;
        require(place.tileset == (right ? 2u : 7u), "Boundary candidate content changed");
        // Twoson's natural outdoor border follows the source camera; only
        // the constrained left-hand area still needs adaptive reframing.
        const int camera_x = right ? int(place.x) - 320 : int(boundary) - 100;
        f.active({}); f.put(f.profile.wram_loaded_map_tile_combination, place.tileset);
        f.put(f.profile.wram_background_scroll.layer1_x, camera_x);
        f.put(f.profile.wram_background_scroll.layer1_y, place.y - 112); f.frame();
        const auto picture = f.direct();
        const auto identity = (std::uint64_t{1} << 61) | place.identity;
        const auto found = std::find_if(picture->motions.begin(), picture->motions.end(),
            [&](const auto &motion) { return motion.identity == identity; });
        require(found != picture->motions.end(), "Recentered edge failed to prepare newly exposed stationary actor");
        const unsigned motion = unsigned(found - picture->motions.begin());
        require(found->x >= 0 && found->x < 522, "Recentered actor was not actually in the displayed viewport");
        require(std::any_of(picture->quads.begin(), picture->quads.end(), [&](const auto &quad) {
            return quad.motion == motion && quad.object && quad.x < 522 && quad.x + quad.width > 0;
        }), "Recentered preparation had no visible artwork");
    }
    f.put(f.profile.wram_loaded_map_tile_combination, 2);
    // Water ripples are authored timed overlays. A dormant fixed body must
    // not invent that task's current phase or omit the visible effect.
    auto wet_content = assets.image;
    const auto map_layout = eb::native::world_map_layout(assets.version);
    std::fill(wet_content.begin() + map_layout.collision_patterns,
              wet_content.begin() + map_layout.collision_patterns_end, 8);
    auto wet_ready = std::make_shared<eb::native::StationaryNpcSprites>(wet_content, assets.version,
        f.bus->native_sprite_runtime()->resources());
    eb::native::StationaryNpcPreparation wet_cache;
    const auto wet = wet_ready->prepare({2320,6500,2340,6540},
        {2, std::span(f.bus->work_ram).subspan(f.flags,128), {}}, wet_cache);
    require(wet.size() == 1 && (wet.front().surface & 8), "Wet collision fixture did not exercise authored ripple state");
    f.renderer.set_native_stationary_sprites(wet_ready);
    f.active({}); f.put(f.profile.wram_background_scroll.layer1_x, 2328 + 80);
    f.put(f.profile.wram_background_scroll.layer1_y, 6528 - 112); f.frame();
    require(f.renderer.stationary_sprite_part_count() == 0, "Dormant ripple actor rendered an invented incomplete appearance");
    require(cases == 4 && visible > 0, "Stationary renderer reference was not exercised");
    std::cout << assets.title << ": stationary renderer PASS cases=" << cases << " pixels=" << compared
              << " visible=" << visible << " area_preparations=" << f.renderer.stationary_area_preparations() << '\n';
}
}
void test_catalog_actor_edges(const eb::GameAssets &assets) {
    using namespace eb::native;
    Fixture f(assets);
    f.renderer.set_native_stationary_sprites({}); // Isolate each actual actor's artwork.
    unsigned placements = 0, cases = 0, pixels = 0, direct_checks = 0;
    const auto resources = f.bus->native_sprite_runtime()->resources();
    for (unsigned cy = 0; cy < 40; ++cy)
        for (unsigned cx = 0; cx < 32; ++cx)
            for (const auto &place : f.catalog.cell(cx, cy)) {
                const auto &definition = f.catalog.definition(place.npc);
                SpriteAppearance appearance(resources, definition.sprite);
                appearance.select_four(definition.direction, 0, 0);
                const auto &selection = *appearance.displayed();
                const auto image = resources->acquire(selection.sprite, selection.pose, selection.surface, selection.format);
                StationaryNpcSprite body{place, image, resources->definition(definition.sprite).palette, 0};
                f.active(std::array<NpcId,1>{place.npc});
                f.create(body, 0, 0, 112);
                f.bus->native_sprite_runtime()->replace_image(0, image);
                f.put(f.profile.wram_entity_spritemap_pointers.high, 0x7e);
                f.put(f.profile.wram_entity_animation_frame, 0);
                f.put(f.profile.wram_loaded_map_tile_combination, place.tileset);
                for (unsigned width : {256u, 398u, 522u, 800u, 1024u}) {
                    f.renderer.set_presentation_width(f.view(), width);
                    const int margin = int(width - 256) / 2;
                    for (int x : {-margin - 8, -margin + 8, -65, -64, -1, 0, 128, 255, 319, 320,
                                  256 + margin - 8, 256 + margin + 8}) {
                        const int y = 112;
                        f.put(f.profile.wram_background_scroll.layer1_x, int(place.x) - x);
                        f.put(f.profile.wram_background_scroll.layer1_y, int(place.y) - y);
                        f.put(f.profile.wram_entity_screen_coordinates.x, x);
                        f.put(f.profile.wram_entity_screen_coordinates.y, y);
                        f.frame(x >= -64 && x < 320);
                        for (const auto &part : image->parts)
                            for (unsigned sy = 0; sy < 16; ++sy) {
                                const int row = y + part.top - 1 + int(sy);
                                if (row < 0 || row >= 224) continue;
                                const auto actual = f.row(unsigned(row));
                                for (unsigned sx = 0; sx < 16; ++sx) {
                                    const int out = margin + x + part.left + int(sx);
                                    const auto index = part.indices[sy * 16 + sx];
                                    if (out < 0 || out >= int(width) || !index) continue;
                                    if (actual[out].palette_index != 128 + body.palette * 16 + index) {
                                        std::cerr << "Catalog edge npc=" << place.npc << " width=" << width << " x=" << x << '\n';
                                        require(false, "Catalog actor loses visible artwork at a viewport/draw boundary");
                                    }
                                    ++pixels;
                                }
                            }
                        if (x == 320) {
                            const auto scene = f.direct();
                            const auto direct = eb::rasterize_direct_scene({scene, {}});
                            const auto scanline = f.renderer.presentation_pixels(f.bus->native_framebuffer);
                            require(std::equal(direct.begin(), direct.end(), scanline.begin()),
                                    "Catalog actor edge differs between direct and scanline rendering");
                            ++direct_checks;
                        }
                        ++cases;
                    }
                }
                ++placements;
            }
    require(placements > 1000 && pixels > 1000000, "Catalog edge sweep was incomplete");
    std::cout << assets.title << ": all catalog actor edges PASS placements=" << placements << " cases=" << cases
              << " pixels=" << pixels << " direct=" << direct_checks << '\n';
}

void test_catalog_prepared_edges(const eb::GameAssets &assets) {
    using namespace eb::native;
    Fixture f(assets);
    unsigned placements = 0, cases = 0, pixels = 0, source_gates = 0;
    for (unsigned pattern : {0u, 255u}) {
        auto flags = std::span(f.bus->work_ram).subspan(f.flags, 128);
        std::fill(flags.begin(), flags.end(), pattern);
        for (unsigned tileset = 0; tileset < 32; ++tileset) {
            StationaryNpcPreparation cache;
            const auto bodies = f.ready->prepare({0,0,8192,10240}, {tileset, flags, {}}, cache);
            f.put(f.profile.wram_loaded_map_tile_combination, tileset);
            for (const auto &body : bodies) {
                const auto &place = body.placement;
                std::vector<NpcId> neighbours;
                for (const auto &c : f.catalog.query({int(place.x)-128,int(place.y)-128,int(place.x)+129,int(place.y)+129},
                         {tileset, flags, {}}))
                    if (c.placement.npc != place.npc) neighbours.push_back(c.placement.npc);
                f.active(neighbours);
                for (unsigned width : {256u, 398u, 522u, 800u, 1024u}) {
                    f.renderer.set_presentation_width(f.view(), width);
                    const int margin = int(width - 256) / 2;
                    for (int x : {-margin+8,-65,-1,128,256,320,256+margin-8}) {
                        const int y = 112;
                        f.put(f.profile.wram_background_scroll.layer1_x, int(place.x) - x);
                        f.put(f.profile.wram_background_scroll.layer1_y, int(place.y) - y);
                        f.frame();
                        for (const auto &part : body.image->parts)
                            for (unsigned sy = 0; sy < 16; ++sy) {
                                const int row = y + part.top - 1 + int(sy);
                                if (row < 0 || row >= 224) continue;
                                const auto actual = f.row(unsigned(row));
                                for (unsigned sx = 0; sx < 16; ++sx) {
                                    const int out = margin + x + part.left + int(sx);
                                    const auto index = part.indices[sy * 16 + sx];
                                    if (out < 0 || out >= int(width) || !index) continue;
                                    if (body.surface & 8) require(actual[out].priority < 0,
                                        "Dormant water body fabricated an unscheduled overlay");
                                    else if (actual[out].palette_index != 128 + body.palette * 16 + index) {
                                        std::cerr << "Prepared catalog edge npc=" << place.npc << " width=" << width << " x=" << x << '\n';
                                        require(false, "Eligible catalog prop pops in at a viewport edge");
                                    }
                                    ++pixels;
                                }
                            }
                        ++cases;
                        if (width == 522 && x == 128) {
                            // Once the initial source scan has finished, an
                            // eligible flag alone cannot create a center NPC.
                            // Exercise every prepared placement/flag variant,
                            // rather than treating Saturn Valley as a special map.
                            f.put(f.enabled, 0xffff); f.frame();
                            const auto picture = f.direct();
                            const auto identity = (std::uint64_t{1} << 61) | place.identity;
                            require(std::none_of(picture->motions.begin(), picture->motions.end(),
                                        [&](const auto &motion) { return motion.identity == identity; }),
                                    "Completed map scan fabricated a noninteractive center NPC");
                            f.put(f.enabled, 1);
                            const unsigned camera_mode = assets.version == eb::GameVersion::JP ? 0x9b56 : 0x98a5;
                            f.put(camera_mode, 2); f.frame();
                            require(f.renderer.stationary_sprite_part_count() == 0,
                                    "Scripted scene acquired dormant catalog NPCs");
                            f.put(camera_mode, 0);
                            ++source_gates;
                        }
                    }
                }
                ++placements;
            }
        }
    }
    require(placements > 1500 && pixels > 1000000, "Prepared catalog edge sweep was incomplete");
    std::cout << assets.title << ": all prepared catalog edges PASS flag_variants=" << placements
              << " cases=" << cases << " pixels=" << pixels << " source_gates=" << source_gates << '\n';
}

void test_prop_creation_continuity(const eb::GameAssets &assets) {
    using namespace eb::native;
    unsigned cases = 0;
    for (NpcId npc : {572, 1530, 1567, 1246, 676})
      for (unsigned width : {398u, 522u, 800u, 1024u})
        for (int x : {-65, 320}) {
            Fixture f(assets);
            const auto place = f.ready->placement(npc);
            require(place.has_value(), "Missing authored prop continuity fixture");
            f.renderer.set_presentation_width(f.view(), width);
            f.put(f.profile.wram_loaded_map_tile_combination, place->tileset);
            const int y = 112, camera_x = int(place->x) - x, camera_y = int(place->y) - y;
            f.put(f.profile.wram_background_scroll.layer1_x, camera_x);
            f.put(f.profile.wram_background_scroll.layer1_y, camera_y);
            StationaryNpcPreparation cache;
            std::optional<StationaryNpcSprite> expected;
            std::vector<NpcId> others;
            for (const auto &candidate : f.ready->prepare(f.footprint(camera_x, camera_y),
                    {place->tileset, std::span(f.bus->work_ram).subspan(f.flags, 128), {}}, cache))
                if (candidate.placement.npc == npc) expected = candidate;
                else others.push_back(candidate.placement.npc);
            require(expected.has_value(), "Prop not eligible before creation");
            f.active(others); f.frame();
            const auto before = eb::rasterize_direct_scene({f.direct(), {}});
            AuthoredActorServices services(f);
            const auto &definition = f.catalog.definition(npc);
            services.create(definition.sprite, definition.script, place->x, place->y);
            others.insert(others.begin(), npc); f.active(others);
            f.put(f.profile.wram_entity_spritemap_pointers.high, 0x7e);
            f.put(f.profile.wram_entity_screen_coordinates.x, x);
            f.put(f.profile.wram_entity_screen_coordinates.y, y);
            f.frame();
            const auto during = eb::rasterize_direct_scene({f.direct(), {}});
            require(before == during, "Prop disappears between source CREATE and its first selected pose");
            f.put(f.profile.wram_entity_world_coordinates.x, place->x + 1); f.frame();
            require(f.renderer.stationary_sprite_part_count() == 0, "Relocated actor acquired its old authored preview");
            f.put(f.profile.wram_entity_world_coordinates.x, place->x);
            f.put(f.profile.wram_entity_script_ids, 0xffff); f.frame();
            require(f.renderer.stationary_sprite_part_count() == 0, "Changed actor script acquired an authored birth pose");
            f.put(f.profile.wram_entity_script_ids, definition.script);
            const auto image = services.select(definition.script == 693 ? 0 : definition.direction, expected->surface);
            require(image == expected->image, "First source prop pose changed prepared artwork");
            f.put(f.profile.wram_entity_draw_callback, f.profile.entity_draw_callbacks.screen_space);
            f.put(f.profile.wram_entity_draw_priority, 1);
            f.put(f.profile.wram_entity_animation_frame, 0); f.frame();
            require(before == eb::rasterize_direct_scene({f.direct(), {}}),
                    "Prop jumps at the first selected source pose");
            f.put(f.profile.wram_entity_spritemap_pointers.high, 0x807e); f.frame();
            require(f.renderer.stationary_sprite_part_count() == 0 && f.renderer.native_sprite_part_count() == 0,
                    "Explicitly hidden active prop reappeared");
            ++cases;
        }
    std::cout << assets.title << ": source creation continuity PASS cases=" << cases << '\n';
}

void test_cutscene_npc_handoff(const eb::GameAssets &assets) {
    using namespace eb::native;
    unsigned cases = 0;
    for (NpcId npc : {1269, 1274, 1277})
      for (unsigned width : {256u, 398u, 522u, 1024u}) {
        Fixture f(assets);
        const auto place = *f.ready->placement(npc);
        const auto &definition = f.catalog.definition(npc);
        require(definition.script == 8, "Cutscene fixture changed its authored stationary program");
        const auto bit = definition.event_flag - 1;
        f.bus->work_ram[f.flags + bit / 8] |= 1u << (bit & 7);
        f.renderer.set_presentation_width(f.view(), width);
        f.put(f.profile.wram_loaded_map_tile_combination, place.tileset);
        const int camera_x = int(place.x) - 128, camera_y = int(place.y) - 112;
        f.put(f.profile.wram_background_scroll.layer1_x, camera_x);
        f.put(f.profile.wram_background_scroll.layer1_y, camera_y);
        StationaryNpcPreparation cache;
        std::vector<NpcId> others;
        std::optional<StationaryNpcSprite> expected;
        for (const auto &body : f.ready->prepare(f.footprint(camera_x, camera_y),
                {place.tileset, std::span(f.bus->work_ram).subspan(f.flags, 128), {}}, cache))
            if (body.placement.npc == npc) expected = body;
            else others.push_back(body.placement.npc);
        require(expected.has_value(), "Cutscene actor is not eligible for initial map loading");
        f.active(others); f.frame();
        const auto prepared_parts = f.renderer.stationary_sprite_part_count();
        require(prepared_parts == expected->image->parts.size(), "Initial cutscene artwork is missing");
        const unsigned camera_mode = assets.version == eb::GameVersion::JP ? 0x9b56 : 0x98a5;
        f.put(camera_mode, 2); f.frame();
        require(f.renderer.stationary_sprite_part_count() == 0,
                "Scripted camera resurrects a dormant authored cutscene NPC");
        f.put(camera_mode, 0); f.frame();
        require(f.renderer.stationary_sprite_part_count() == prepared_parts,
                "Restoring source control does not restore eligible map preparation");

        AuthoredActorServices services(f);
        services.create(definition.sprite, definition.script, place.x, place.y);
        others.insert(others.begin(), npc); f.active(others);
        f.put(f.profile.wram_entity_spritemap_pointers.high, 0x7e);
        f.put(f.profile.wram_entity_screen_coordinates.x, 128);
        f.put(f.profile.wram_entity_screen_coordinates.y, 112);
        f.put(f.profile.wram_entity_animation_frame, 0);
        f.put(f.profile.wram_entity_draw_priority, 1);
        services.select(definition.direction, expected->surface);
        f.put(f.enabled, 0xffff); // LOAD_MAP_AT_POSITION's completed-load mode.
        f.frame();
        require(f.renderer.stationary_sprite_part_count() == prepared_parts,
                "Saturn Valley actor disappears after pose selection before its first source draw");
        f.put(camera_mode, 2); f.frame();
        require(f.renderer.stationary_sprite_part_count() == prepared_parts,
                "Story camera drops an actual newly created NPC before its first source draw");
        f.put(camera_mode, 0);
        f.frame(true);
        require(f.renderer.stationary_sprite_part_count() == 0 &&
                    f.renderer.native_sprite_part_count() == prepared_parts,
                "First source draw did not take sole ownership of the cutscene actor");
        services.cpu.accumulator = npc;
        services.call(services.jp ? 0xc4440e : 0xc46698);
        require(f.bus->work_ram[camera_mode] == 2 && !f.bus->work_ram[camera_mode + 1],
                "Original story camera did not select entity-directed control");
        f.frame(true);
        require(f.renderer.stationary_sprite_part_count() == 0 &&
                    f.renderer.native_sprite_part_count() == prepared_parts,
                "Scripted camera hides an actual source-owned cutscene actor");
        if (width > 256) {
            f.put(f.profile.wram_entity_screen_coordinates.x, 260); f.frame(true);
            const auto direct = f.direct(); // compares every software/direct pixel
            for (const auto &quad : direct->quads)
                if (quad.object)
                    require(std::isinf(quad.clip.left) && std::isinf(quad.clip.right),
                            "Ordinary scripted camera crops a source-owned actor to the original viewport");
            f.put(f.profile.wram_entity_screen_coordinates.x, 128);
        }
        services.call(services.jp ? 0xc4442e : 0xc466b8);
        // The original explicit release removes the NPC identity and artwork;
        // its appearance flag can remain set until a later scene transition.
        services.cpu.accumulator = 0;
        services.call(services.jp ? 0xc0214e : 0xc02140);
        f.frame();
        require(f.renderer.stationary_sprite_part_count() == 0 &&
                    f.renderer.native_sprite_part_count() == 0,
                "Deleted cutscene NPC reappears as a noninteractive prepared sprite");
        f.put(f.enabled, 1); f.frame();
        require(f.renderer.stationary_sprite_part_count() == prepared_parts,
                "A real room reload cannot prepare an eligible NPC again");
        ++cases;
      }
    std::cout << assets.title << ": cutscene NPC birth/draw/deletion/reload PASS cases=" << cases << '\n';
}

void test_prayer_focus_matches_native(const eb::GameAssets &assets) {
    using namespace eb::native;
    unsigned cases = 0;
    std::uint64_t compared = 0;
    // Compare real imported people, including a second person away from the
    // authored focus. The oval is generated by the original C0B149 routine,
    // not a host approximation or an assumption that its centre is (128,112).
    for (const auto focus : {std::array<int, 2>{56, 80}, {128, 112}, {208, 168}}) {
        Fixture f(assets);
        AuthoredActorServices source(f);
        const bool jp = assets.version == eb::GameVersion::JP;
        const unsigned oval_buffer = jp ? 0x4356 : 0x3fd0;
        f.renderer.set_native_stationary_sprites({});
        std::fill(f.bus->video_ram.begin(), f.bus->video_ram.end(), 0);
        const auto resources = f.bus->native_sprite_runtime()->resources();
        std::array<StationaryNpcSprite, 4> people;
        std::array<int, 2> body_centre{};
        const std::array<NpcId, 4> ids{1269, 328, 1269, 328};
        f.active(ids);
        for (unsigned person = 0; person < people.size(); ++person) {
            const auto place = f.ready->placement(ids[person]);
            require(place.has_value(), "Missing imported prayer focus person");
            const auto &definition = f.catalog.definition(ids[person]);
            SpriteAppearance appearance(resources, definition.sprite);
            appearance.select_four(definition.direction, 0, 0);
            const auto &pose = *appearance.displayed();
            const auto image = resources->acquire(pose.sprite, pose.pose, pose.surface, pose.format);
            people[person] = {*place, image, resources->definition(definition.sprite).palette, 0};
            f.create(people[person], person * 2, person == 3 ? -32 : person == 2 ? 300 : person ? (focus[0] < 128 ? 192 : 40) : focus[0], 112);
            f.bus->native_sprite_runtime()->replace_image(person * 2, image);
            f.put(f.profile.wram_entity_spritemap_pointers.high + person * 2, 0x7e);
            f.put(f.profile.wram_entity_animation_frame + person * 2, 0);
            if (!person) {
                int left = 256, top = 256, right = -256, bottom = -256;
                for (const auto &part : image->parts)
                    for (unsigned y = 0; y < 16; ++y)
                        for (unsigned x = 0; x < 16; ++x)
                            if (part.indices[y * 16 + x]) {
                                left = std::min(left, part.left + int(x));
                                right = std::max(right, part.left + int(x));
                                top = std::min(top, part.top - 1 + int(y));
                                bottom = std::max(bottom, part.top - 1 + int(y));
                            }
                require(left <= right && top <= bottom, "Prayer focus person has no opaque artwork");
                body_centre = {(left + right) / 2, (top + bottom) / 2};
            }
        }
        f.put(f.enabled, 0xffff);
        f.put(jp ? 0x9b56 : 0x98a5, 2);
        f.put(f.profile.wram_loaded_map_tile_combination, people[0].placement.tileset);
        f.put(f.profile.wram_background_scroll.layer1_x, int(people[0].placement.x) - focus[0]);
        f.put(f.profile.wram_background_scroll.layer1_y, int(people[0].placement.y) - focus[1]);
        std::array<std::uint16_t, 4> scroll_x{}, scroll_y{};
        scroll_x[0] = (int(people[0].placement.x) - focus[0]) & 1023;
        scroll_y[0] = (int(people[0].placement.y) - focus[1]) & 1023;
        constexpr std::array<unsigned, 7> radii{16, 32, 96, 240, 96, 32, 16};
        for (unsigned phase = 0; phase < radii.size(); ++phase) {
            // A moving focus also exercises the source's centre offsets. Its
            // position stays relative to the person, never the wider display.
            const int cx = focus[0] + int(phase) - 3, cy = focus[1] + int(phase) - 3;
            f.put(f.profile.wram_entity_screen_coordinates.x, cx - body_centre[0]);
            f.put(f.profile.wram_entity_screen_coordinates.y, cy - body_centre[1]);
            f.renderer.begin_sprite_frame(1);
            for (unsigned slot : {0u, 2u, 4u, 6u}) {
                source.cpu.x_index = slot;
                source.cpu.program_counter = 0xc0ff00;
                source.cpu.execute_instruction<0x20>(jp ? 0xa383 : 0xa3a4, 3);
                require(eb::try_native_sprite_draw(source.cpu, *f.bus, *f.bus->native_sprite_runtime(), f.renderer),
                        "Prayer fixture did not publish the real ordinary person draw");
            }
            f.renderer.seal_sprite_frame(f.view());
            f.renderer.capture_oam_upload(f.view(), 1);
            ++f.frames;
            source.cpu.accumulator = cx; source.cpu.x_index = cy; source.cpu.y_index = radii[phase];
            f.put(0x1e0e, std::min(radii[phase] + 4, 240u));
            source.call(jp ? 0xc0b128 : 0xc0b149);
            f.renderer.capture_aperture(cx, cy, radii[phase], std::min(radii[phase] + 4, 240u));
            require(f.bus->work_ram[oval_buffer + cy * 2] <= cx &&
                        f.bus->work_ram[oval_buffer + cy * 2 + 1] >= cx,
                    "Original oval routine did not include its authored focus");
            for (const unsigned width : {398u, 522u, 796u, 1024u})
                for (const unsigned window_form : {0u, 1u, 2u})
                  for (const unsigned camera_mode : {0u, 2u}) {
                    const bool color_window = window_form == 1, dual_window = window_form == 2;
                    f.put(jp ? 0x9b56 : 0x98a5, camera_mode);
                    f.renderer.set_presentation_width(f.view(), width);
                    auto reference = f.renderer;
                    reference.set_presentation_width(f.view(), 256);
                    f.renderer.enable_direct_rendering(true);
                    // Both source window forms must retain exactly the same
                    // people as the native image, throughout opening/closing.
                    // Actual SET_WINDOW_MASK uses inverted windows with AND,
                    // not merely the synthetic single-window form.
                    f.bus->write_byte(0x2125, color_window ? 0x30 : dual_window ? 0x0f : 0x03);
                    f.bus->write_byte(0x2123, color_window ? 0 : dual_window ? 0xff : 0x33);
                    f.bus->write_byte(0x2128, 255);
                    f.bus->write_byte(0x2129, 0);
                    f.bus->write_byte(0x212a, dual_window ? 0x55 : 0);
                    f.bus->write_byte(0x212b, dual_window ? 0x55 : 0);
                    f.bus->write_byte(0x212e, color_window ? 0 : 0x13);
                    f.bus->write_byte(0x2130, color_window ? 0x80 : 0);
                    const auto logical = f.bus->work_ram;
                    unsigned focused_pixels = 0, wide_visible = 0;
                    for (unsigned y = 0; y < 224; ++y) {
                        f.bus->write_byte(0x2126, f.bus->work_ram[oval_buffer + y * 2]);
                        f.bus->write_byte(0x2127, f.bus->work_ram[oval_buffer + y * 2 + 1]);
                        auto native = f.view(); native.object_scene = &reference;
                        native.background_scroll_x = scroll_x; native.background_scroll_y = scroll_y;
                        reference.begin_scanline(native, y);
                        std::array<eb::PpuPixel, 256> objects{};
                        require(reference.try_native_sprite_pixels(native, y, objects, 0).has_value(),
                                "Missing native prayer people");
                        for (unsigned x = 0; x < 256; ++x) {
                            const auto pixel = reference.compose_presentation_pixel(native, x, y, objects[x], false);
                            f.bus->native_framebuffer[y * 256 + x] = pixel;
                            if (std::abs(int(x) - cx) <= 12 && std::abs(int(y) - cy) <= 12 &&
                                objects[x].priority >= 0 && pixel != 0xff000000)
                                ++focused_pixels;
                        }
                        auto wide = f.view(); wide.background_scroll_x = scroll_x; wide.background_scroll_y = scroll_y;
                        f.renderer.begin_scanline(wide, y);
                        f.renderer.render_presentation_margins(wide, y);
                        f.renderer.capture_direct_scanline(wide, y);
                        const auto pixels = f.renderer.presentation_pixels(f.bus->native_framebuffer);
                        const unsigned margin = (width - 256) / 2;
                        for (unsigned x = 0; x < width; ++x) {
                            const double scale = double(width) / 256;
                            const double dx = (int(x) - int(margin) - cx) / (radii[phase] * scale);
                            const double dy = (int(y) - cy) / (std::min(radii[phase] + 4, 240u) * scale);
                            if (dx * dx + dy * dy > 1)
                                require(pixels[y * width + x] == 0xff000000,
                                        "Circular widescreen aperture leaked outside its opening");
                            if ((x < margin || x >= margin + 256) && pixels[y * width + x] != 0xff000000)
                                ++wide_visible;
                            ++compared;
                        }
                    }
                    if (radii[phase] == 240) require(wide_visible > 100, "Fully open aperture retains its native side crop");
                    require(focused_pixels > 10, "Prayer aperture lost the person at its authored focus");
                    require(f.bus->work_ram == logical, "Prayer framing changed source actors/camera/event state");
                    require(!f.renderer.direct_scene(), "Direct rendering bypassed the scanline prayer aperture");
                    ++cases;
                }
        }
    }
    std::cout << assets.title << ": circular widescreen prayer aperture PASS frames=" << cases
              << " compared_pixels=" << compared << '\n';
}

void test_robot_ending_departure(const eb::GameAssets &assets) {
    using namespace eb::native;
    unsigned cases = 0;
    // EEVENT5 teleports to D7, centred at (200,6064), then uses sprite 258
    // and EVENT_551..554. Their last legs head left to map X=0, with V5=2.
    // That source endpoint is still inside a wide display unless presentation
    // extends the departure. These fixtures keep the logical endpoint intact.
    for (const unsigned width : {256u, 398u, 522u, 796u, 1024u})
      for (const unsigned script : {551u, 552u, 553u, 554u}) {
        Fixture f(assets);
        const bool jp = assets.version == eb::GameVersion::JP;
        const auto resources = f.bus->native_sprite_runtime()->resources();
        constexpr int camera_x = 72, camera_y = 5952;
        f.bus->palette_ram[0] = 31; f.bus->palette_ram[1] = 0;
        f.renderer.set_presentation_width(f.view(), width);
        f.active(std::array<NpcId, 5>{1306, 1307, 1308, 1309, 0xffff});
        std::array<std::uint64_t, 4> body_ids{};
        std::array<int, 4> body_x{};
        for (unsigned person = 0; person < 4; ++person) {
            const auto place = f.ready->placement(1306 + person);
            require(place.has_value(), "Missing authored robot corpse placement");
            const auto &definition = f.catalog.definition(place->npc);
            const auto bit = definition.event_flag - 1;
            f.bus->work_ram[f.flags + bit / 8] |= 1u << (bit & 7);
            body_ids[person] = (std::uint64_t{1} << 61) | place->identity;
            body_x[person] = int(place->x) - camera_x;
            SpriteAppearance appearance(resources, definition.sprite);
            appearance.select_four(definition.direction, 0, 0);
            const auto &pose = *appearance.displayed();
            const auto image = resources->acquire(pose.sprite, pose.pose, pose.surface, pose.format);
            StationaryNpcSprite body{*place, image, resources->definition(definition.sprite).palette, 0};
            f.create(body, person * 2, int(place->x) - camera_x, int(place->y) - camera_y);
            f.bus->native_sprite_runtime()->replace_image(person * 2, image);
            f.put(f.profile.wram_entity_spritemap_pointers.high + person * 2, 0x7e);
            f.put(f.profile.wram_entity_animation_frame + person * 2, 0);
            f.put(f.profile.wram_entity_script_ids + person * 2, definition.script);
            f.put(f.profile.wram_loaded_map_tile_combination, place->tileset);
        }
        SpriteAppearance appearance(resources, 258);
        appearance.select_four(6, 0, 0);
        const auto &pose = *appearance.displayed();
        const auto image = resources->acquire(pose.sprite, pose.pose, pose.surface, pose.format);
        StationaryNpcSprite soul{*f.ready->placement(1309), image, resources->definition(258).palette, 0};
        f.create(soul, 8, 0, 0, 258);
        f.bus->native_sprite_runtime()->replace_image(8, image);
        f.put(f.profile.wram_entity_spritemap_pointers.high + 8, 0x7e);
        f.put(f.profile.wram_entity_animation_frame + 8, 0);
        f.put(f.profile.wram_entity_script_ids + 8, script);
        f.put(f.profile.wram_background_scroll.layer1_x, camera_x);
        f.put(f.profile.wram_background_scroll.layer1_y, camera_y);
        f.put(f.enabled, 0xffff);
        const unsigned variables = f.profile.wram_entity_script_variable0;
        const unsigned starts[] = {0x98, 0xa8, 0xb8, 0xa0};
        const unsigned ends_y[] = {0x1790, 0x1790, 0x1780, 0x1798};
        f.put(variables + 5 * 60 + 8, 2);
        f.put(variables + 6 * 60 + 8, 0);
        f.put(variables + 7 * 60 + 8, ends_y[script - 551]);
        const auto publish = [&] {
            f.renderer.begin_sprite_frame(1);
            eb::MainCpu65816 cpu(*f.bus);
            cpu.emulation_mode = false; cpu.status_register = 0; cpu.stack_pointer = 0x1fff;
            for (unsigned slot : {0u, 2u, 4u, 6u, 8u}) {
                cpu.program_counter = 0xc0ff00; cpu.x_index = slot;
                cpu.execute_instruction<0x20>(jp ? 0xa383 : 0xa3a4, 3);
                require(eb::try_native_sprite_draw(cpu, *f.bus, *f.bus->native_sprite_runtime(), f.renderer),
                        "Ending fixture did not draw its actual owned body/soul");
            }
            f.renderer.seal_sprite_frame(f.view()); f.renderer.capture_oam_upload(f.view(), 1); ++f.frames;
        };
        const unsigned margin = (width - 256) / 2;
        int previous_right = int(width);
        eb::DirectSceneMotion interpolation;
        for (const unsigned x : {starts[script - 551], 96u, 72u, 48u, 47u, 24u, 1u}) {
            f.put(f.profile.wram_entity_world_coordinates.x + 8, x);
            f.put(f.profile.wram_entity_world_coordinates.y + 8, ends_y[script - 551]);
            f.put(f.profile.wram_entity_screen_coordinates.x + 8, int(x) - camera_x);
            f.put(f.profile.wram_entity_screen_coordinates.y + 8, int(ends_y[script - 551]) - camera_y);
            publish();
            const auto logical = f.bus->work_ram;
            const auto scene = f.direct(); // Complete software/direct pixel comparison.
            const auto picture = eb::rasterize_direct_scene({scene, {}});
            require(picture.front() == 0xffff0000 && picture[width - 1] == 0xffff0000,
                    "Robot ending crops its world backdrop at the original viewport edges");
            require(f.bus->work_ram == logical, "Ending presentation changed the original soul path or camera");
            const auto identity = (std::uint64_t{1} << 63) | f.bus->native_sprite_runtime()->snapshot(8)->id;
            int right = -10000;
            unsigned bodies = 0;
            for (const auto &quad : scene->quads) {
                if (!quad.object) continue;
                const auto &motion = scene->motions[quad.motion];
                if (motion.identity == identity) {
                    right = std::max(right, int(quad.x + quad.width));
                    require(motion.x <= float(margin + int(x) - camera_x),
                            "Departing soul moved towards the centre of the wide display");
                } else if (const auto body = std::find(body_ids.begin(), body_ids.end(), motion.identity);
                           body != body_ids.end()) {
                    bodies |= 1u << (body - body_ids.begin());
                    require(motion.x == float(margin + body_x[body - body_ids.begin()]),
                            "Robot corpse group moved away from its centred 4:3 framing");
                }
            }
            require(bodies == 15, "Ending picture lost an authored robot corpse");
            if (x == starts[script - 551])
                require(right > int(margin) && right < int(margin + 256),
                        "Soul does not begin its departure inside the original stage");
            require(right <= previous_right, "Soul departure reverses direction in widescreen");
            previous_right = right;
            if (x == 1 && width > 256)
                require(right <= 0, "Soul disappears while still inside the widescreen picture");
            interpolation.submit(scene);
            if (x == 47) {
                const auto spirit = std::find_if(scene->motions.begin(), scene->motions.end(),
                    [&](const auto &motion) { return motion.identity == identity; });
                require(spirit != scene->motions.end(), "Ending interpolation lost its soul identity");
                const unsigned index = unsigned(spirit - scene->motions.begin());
                float previous = spirit->x + 16;
                require(interpolation.sample(0).offsets[index].x > 0,
                        "Ending fixture did not exercise fractional soul movement");
                for (double fraction : {0., .25, .5, .75, 1.}) {
                    const auto &picture = interpolation.sample(fraction);
                    const float position = spirit->x + picture.offsets[index].x;
                    require(position <= previous && position >= spirit->x,
                            "Fractional soul departure reverses or overshoots its source frame");
                    previous = position;
                    for (unsigned motion = 0; motion < scene->motions.size(); ++motion)
                        if (std::find(body_ids.begin(), body_ids.end(), scene->motions[motion].identity) != body_ids.end())
                            require(picture.offsets[motion].x == 0 && picture.offsets[motion].y == 0,
                                    "Fractional ending presentation moves a robot corpse");
                }
            }
            if (x == 72) {
                const auto expected = eb::rasterize_direct_scene({scene, {}});
                const auto native = f.bus->native_framebuffer;
                const auto saved_renderer = f.renderer;
                // A width change must not alter any original 4:3 pixel.
                f.renderer.set_presentation_width(f.view(), 256);
                f.direct();
                require(f.bus->native_framebuffer == native, "Widescreen ending changed its native source picture");
                f.renderer = saved_renderer;
                eb::SnapshotArchive saved;
                saved(f.renderer);
                eb::GameSceneRenderer restored;
                restored.set_native_stationary_sprites(f.ready);
                eb::SnapshotArchive loaded(saved.bytes());
                loaded(restored); loaded.finish();
                f.renderer = std::move(restored);
                // The game may prepare the following tick before presentation.
                // Restoration and resizing must use the uploaded departure.
                f.put(f.profile.wram_entity_world_coordinates.x + 8, starts[script - 551]);
                f.put(f.profile.wram_entity_script_ids + 8, 558);
                require(eb::rasterize_direct_scene({f.direct(), {}}) == expected,
                        "Snapshot or following source tick changed the uploaded soul departure");
                f.renderer.set_presentation_width(f.view(), 522);
                const auto resized = f.direct();
                const auto spirit = std::find_if(resized->motions.begin(), resized->motions.end(),
                    [&](const auto &motion) { return motion.identity == identity; });
                const int shift = int((1.f - 72.f / starts[script - 551]) * 133.f + .5f);
                require(spirit != resized->motions.end() && spirit->x == 133.f - shift,
                        "Resizing a restored ending lost its captured departure progress");
                f.renderer.set_presentation_width(f.view(), width);
                f.put(f.profile.wram_entity_world_coordinates.x + 8, x);
                f.put(f.profile.wram_entity_script_ids + 8, script);
            }
            ++cases;
        }
        // Rising from the bodies and returning to Saturn Valley use the same
        // artwork; only the outgoing scripts' final leg may extend sideways.
        for (const auto phase : {std::array<unsigned, 2>{script, 1}, {558, 2}}) {
            f.put(f.profile.wram_entity_world_coordinates.x + 8, 96);
            f.put(f.profile.wram_entity_screen_coordinates.x + 8, 96 - camera_x);
            f.put(f.profile.wram_entity_script_ids + 8, phase[0]);
            f.put(variables + 5 * 60 + 8, phase[1]);
            publish();
            const auto scene = f.direct();
            const auto identity = (std::uint64_t{1} << 63) | f.bus->native_sprite_runtime()->snapshot(8)->id;
            const auto spirit = std::find_if(scene->motions.begin(), scene->motions.end(),
                [&](const auto &motion) { return motion.identity == identity; });
            require(spirit != scene->motions.end() && spirit->x == float(margin + 96 - camera_x),
                    "Ending departure adjustment leaked into another soul movement phase");
            ++cases;
        }
      }
    std::cout << assets.title << ": robot ending centre/departure PASS frames=" << cases << '\n';
}

void test_world_prop_scroll_visibility(const eb::GameAssets &assets) {
    using namespace eb::native;
    unsigned cases = 0, pixels = 0;
    // Real unopened/open presents, a trash can, sanctuary encounter markers,
    // and lamps must already be visible before source activation reaches them.
    for (NpcId npc : {1530, 1567, 1246, 676, 572})
        for (unsigned width : {398u, 522u, 800u, 1024u})
            for (bool right : {false, true})
                for (bool flag_set : {false, true}) {
                    Fixture f(assets);
                    f.renderer.set_presentation_width(f.view(), width);
                    const auto &definition = f.catalog.definition(npc);
                    std::optional<NpcPlacement> place;
                    for (unsigned y = 0; y < 40; ++y)
                        for (unsigned x = 0; x < 32; ++x)
                            for (const auto &p : f.catalog.cell(x, y)) if (p.npc == npc) place = p;
                    require(place.has_value(), "Missing authored scrolling prop placement");
                    auto flags = std::span(f.bus->work_ram).subspan(f.flags, 128);
                    if (flag_set && definition.event_flag)
                        flags[(definition.event_flag - 1) / 8] |= 1u << ((definition.event_flag - 1) & 7);
                    f.put(f.profile.wram_loaded_map_tile_combination, place->tileset);
                    const WorldMap maps(assets.image, world_map_layout(assets.version));
                    const WorldCollision collision(assets.image, world_collision_layout(assets.version));
                    const auto area = maps.prepare(place->tileset, flags);
                    const auto resources = f.bus->native_sprite_runtime()->resources();
                    const auto &sprite = resources->definition(definition.sprite);
                    const auto origin = collision.origin({std::uint16_t(place->x), std::uint16_t(place->y)}, sprite.shape);
                    const auto left = collision.edge(area, origin, sprite.shape, CollisionEdge::Left);
                    const auto surface = collision.edge(area, origin, sprite.shape, CollisionEdge::Right, left);
                    require(!(surface & 8), "Scrolling prop needs a dormant water overlay");
                    SpriteAppearance appearance(resources, definition.sprite);
                    appearance.select_four(definition.type == NpcType::ItemBox ? (flag_set ? 0 : 4) : definition.script == 693 ? 0 : definition.direction, 0, surface);
                    const auto &selected = *appearance.displayed();
                    const auto image = resources->acquire(selected.sprite, selected.pose, selected.surface, selected.format);
                    const int margin = int(width - 256) / 2, y = 112;
                    const int start = right ? 256 + margin + 24 : -margin - 24;
                    const int stop = 128;
                    for (int x = start; right ? x >= stop : x <= stop; x += right ? -4 : 4) {
                        const int camera_x = int(place->x) - x, camera_y = int(place->y) - y;
                        f.put(f.profile.wram_background_scroll.layer1_x, camera_x);
                        f.put(f.profile.wram_background_scroll.layer1_y, camera_y);
                        std::vector<NpcId> others;
                        for (const auto &c : f.catalog.query(f.footprint(camera_x, camera_y), {place->tileset, flags, {}}))
                            if (c.placement.npc != npc) others.push_back(c.placement.npc);
                        f.active(others); f.frame();
                        for (const auto &part : image->parts)
                            for (unsigned sy = 0; sy < 16; ++sy) {
                                const auto actual = f.row(unsigned(y + part.top - 1) + sy);
                                for (unsigned sx = 0; sx < 16; ++sx) {
                                    const int out = margin + x + part.left + int(sx);
                                    const auto index = part.indices[sy * 16 + sx];
                                    if (out < 0 || out >= int(width) || !index) continue;
                                    const bool hidden = definition.appearance == NpcAppearance::FlagOff && flag_set;
                                    if (hidden) require(actual[out].priority < 0, "Defeated sanctuary boss was previewed");
                                    else if (actual[out].palette_index != 128 + sprite.palette * 16 + index) {
                                        std::cerr << "Pop-in npc=" << npc << " width=" << width << " x=" << x
                                                  << " flag=" << flag_set << "\n";
                                        require(false, "Visible prop pops in after entering the widescreen picture");
                                    }
                                    ++pixels;
                                }
                            }
                    }
                    ++cases;
                }
    std::cout << assets.title << ": scrolling prop visibility PASS cases=" << cases << " pixels=" << pixels << '\n';
}

void test_prepared_viewport_visibility(const eb::GameAssets &assets) {
    using namespace eb::native;
    unsigned cases = 0, compared = 0;
    // Imported props and people exercise the exact native/margin boundary,
    // including the Threed streetlight from the reported scene.
    for (NpcId npc : {350, 368, 572, 328, 311})
        for (unsigned width : {256u, 398u, 522u, 1024u})
            for (int x : {-8, 0, 128, 248, 256}) {
                Fixture f(assets);
                f.renderer.set_presentation_width(f.view(), width);
                const auto placement = f.ready->placement(npc);
                require(placement.has_value(), "Missing authored visibility fixture");
                const int y = 112, camera_x = int(placement->x) - x,
                          camera_y = int(placement->y) - y;
                f.put(f.profile.wram_loaded_map_tile_combination, placement->tileset);
                f.put(f.profile.wram_background_scroll.layer1_x, camera_x);
                f.put(f.profile.wram_background_scroll.layer1_y, camera_y);
                StationaryNpcPreparation preparation;
                std::vector<NpcId> active;
                std::optional<StationaryNpcSprite> expected;
                for (const auto &candidate : f.ready->prepare(f.footprint(camera_x, camera_y),
                         {placement->tileset, std::span(f.bus->work_ram).subspan(f.flags, 128), {}}, preparation))
                    if (candidate.placement.npc == npc) expected = candidate;
                    else active.push_back(candidate.placement.npc);
                require(expected.has_value(), "Visibility fixture is not eligible");
                f.active(active);
                f.frame();
                const auto direct = f.direct();
                const auto rebuilt = eb::rasterize_direct_scene({direct, {}});
                const auto presented = f.renderer.presentation_pixels(f.bus->native_framebuffer);
                require(std::equal(rebuilt.begin(), rebuilt.end(), presented.begin()),
                        "Direct scene and scanline sprite visibility disagree");
                const int margin = int(width - 256) / 2;
                for (const auto &part : expected->image->parts)
                    for (unsigned sy = 0; sy < 16; ++sy) {
                        const auto pixels = f.row(unsigned(y + part.top - 1) + sy);
                        for (unsigned sx = 0; sx < 16; ++sx) {
                            const int out = margin + x + part.left + int(sx);
                            const auto value = part.indices[sy * 16 + sx];
                            if (out < 0 || out >= int(width) || !value) continue;
                            require(pixels[out].palette_index == 128 + expected->palette * 16 + value,
                                    "Prepared NPC/prop is occluded inside the original viewport");
                            ++compared;
                        }
                    }
                ++cases;
            }
    std::cout << assets.title << ": prepared viewport visibility PASS cases=" << cases
              << " imported_pixels=" << compared << '\n';
}

int main(int argc, char **argv) {
    try {
        if (argc < 2) throw std::runtime_error("Pass one or more game asset packs");
        const bool prayer_only = std::string_view(argv[1]) == "--prayer-focus";
        const bool ending_only = std::string_view(argv[1]) == "--robot-ending";
        if ((prayer_only || ending_only) && argc < 3) throw std::runtime_error("Pass game asset packs after the focused selector");
        for (int i = prayer_only || ending_only ? 2 : 1; i < argc; ++i) {
            const auto assets = eb::load_game_assets(argv[i], eb::asset_profiles());
            if (!prayer_only) test_robot_ending_departure(assets);
            if (ending_only) continue;
            test_prayer_focus_matches_native(assets);
            if (prayer_only) continue;
            test_cutscene_npc_handoff(assets);
            test_catalog_actor_edges(assets);
            test_catalog_prepared_edges(assets);
            test_prop_creation_continuity(assets);
            test_world_prop_scroll_visibility(assets);
            test_prepared_viewport_visibility(assets);
            test(assets); test_resource_readiness(assets); test_enemy_resource_readiness(assets);
            test_stationary_vertical_overscan(assets);
            test_authored_prop_edges(assets);
            test_tall_prop_bottom_edge(assets);
        }
        require(!prop_edge_failures, "Authored props/facing NPCs popped in across the actual renderer edge paths");
    } catch (const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
