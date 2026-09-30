// End-to-end native actor/content probe. No compatibility machine is linked.
// This is a controlled motion scene, not an alternate playable game session.
#include "eb/native/actor_world.hpp"
#include "eb/native/world_palettes.hpp"
#include "generated_assets.hpp"
#include <iostream>
#include <stdexcept>

namespace {
void require(bool value, const char *message) {
    if (!value)
        throw std::runtime_error(message);
}
std::shared_ptr<const eb::native::ActionScriptData>
motion_tasks(const eb::native::ActionScriptData &authored) {
    std::vector<eb::native::ActionScriptBlock> blocks;
    std::vector<std::uint32_t> entries;
    for (const unsigned script : {23u, 25u}) {
        const auto root = authored.entry(script);
        require(authored.byte(root) == 7, "Original motion script no longer starts its acceleration task");
        const auto entry =
            (root & 0xff0000) | authored.byte(root + 1) | unsigned(authored.byte(root + 2)) << 8;
        std::vector<std::uint8_t> bytes;
        for (unsigned i = 0; i < 19; ++i)
            bytes.push_back(authored.byte(entry + i));
        require(bytes[0] == 1 && bytes[1] == 16 && bytes[2] == 0x2e && bytes[5] == 6 && bytes[6] == 1 &&
                    bytes[7] == 2 && bytes[8] == 1 && bytes[9] == 16 && bytes[10] == 0x2e && bytes[13] == 6 &&
                    bytes[14] == 1 && bytes[15] == 2 && bytes[16] == 0x19 &&
                    (bytes[17] | unsigned(bytes[18]) << 8) == (entry & 0xffff),
                "Original acceleration task has unexpected authored control flow");
        blocks.push_back({entry, std::move(bytes)});
        entries.push_back(entry);
    }
    // The directory selects complete named authored child tasks for this probe.
    // Their bytes are copied unchanged from validated content, not synthesized
    // machine instructions or a substitute for the parent enemy AI scripts.
    return std::make_shared<eb::native::ActionScriptData>(std::move(blocks), std::move(entries));
}
void authored_appearance(const eb::GameAssets &assets,
                         const std::shared_ptr<eb::native::SpriteResources> &sprites,
                         const eb::native::ActionScriptData &authored,
                         const eb::native::SpritePalettes &palettes) {
    using namespace eb::native;
    // Complete named authored animation loop UNKNOWN_C3A0B2. Copy unchanged
    // content into an isolated directory, as for the acceleration tasks above.
    const unsigned entry = assets.version == eb::GameVersion::JP ? 0x3a0a2 : 0x3a0b2;
    std::vector<std::uint8_t> bytes;
    for (unsigned i = 0; i < 19; ++i) bytes.push_back(authored.byte(entry + i));
    require(bytes[0] == 6 && bytes[1] == 24 && bytes[2] == 0x3b && bytes[3] == 1 && bytes[4] == 0x42 &&
                bytes[8] == 6 && bytes[9] == 24 && bytes[10] == 0x3b && bytes[11] == 0 && bytes[12] == 0x42 &&
                bytes[16] == 0x19 && (bytes[17] | unsigned(bytes[18]) << 8) == (entry & 0xffff),
            "Authored appearance loop control flow changed");
    auto scripts = std::make_shared<ActionScriptData>(bytes, entry, std::vector<std::uint32_t>{entry});
    const auto data = import_appearance_data(assets.image, assets.version);
    ActorWorld normal(sprites, scripts, assets.version, data), wide(sprites, scripts, assets.version, data);
    std::vector<std::pair<ActorId, ActorId>> actors;
    for (unsigned group = 0; group < sprites->size(); ++group) {
        if (sprites->definition(group).frames < 2) continue;
        WorldActorSpec spec;
        spec.sprite = group;
        spec.action.animation = 0;
        spec.action.priority = 1;
        spec.action.position = {128 * 65536 + 0x8000, 112 * 65536 + 0x8000, 0x8000};
        spec.behavior.projected_x = 128;
        spec.behavior.projected_y = 112;
        actors.emplace_back(normal.create(spec), wide.create(spec));
    }
    unsigned refreshed_frames = 0;
    std::optional<SpriteFrameSelection> previous;
    for (unsigned tick = 0; tick < 120; ++tick) {
        require(normal.advance_tick() == WorldTickResult::Complete &&
                    wide.advance_tick() == WorldTickResult::Complete,
                "Authored appearance loop still required graphics memory or external service");
        for (const auto [a, b] : actors)
            require(normal.actor(a).appearance.displayed() == wide.actor(b).appearance.displayed() &&
                        normal.actor(a).action().animation == wide.actor(b).action().animation &&
                        normal.actor(a).action().position == wide.actor(b).action().position,
                    "Presentation sampling changed native authored appearance");
        const auto displayed = normal.actor(actors.front().first).appearance.displayed();
        refreshed_frames += displayed && displayed != previous;
        previous = displayed;
        if (!(tick % 5)) {
            (void)normal.draw(256, palettes, 1);
            for (unsigned sample = 0; sample < 5; ++sample) (void)wide.draw(522, palettes, 1);
        }
    }
    require(actors.size() > 88 && refreshed_frames == 4 && normal.take_sound_events().empty() &&
                wide.take_sound_events().empty(),
            "Native appearance loop did not exercise repeated allocation-free refreshes");
    std::cout << "PASS " << assets.title << ": " << actors.size() << " native authored animation actors, "
              << refreshed_frames << " pose changes in 120 ticks; independent view sampling, no graphics slots\n";
}
} // namespace
int main(int argc, char **argv) {
    try {
        if (argc < 2)
            throw std::runtime_error("native_actor_world_assets pack.ebpak ...");
        for (int argument = 1; argument < argc; ++argument) {
            const auto assets = eb::load_game_assets(argv[argument], eb::asset_profiles());
            const auto authored = eb::native::import_action_scripts(assets.image, assets.version);
            const auto tasks = motion_tasks(*authored);
            auto sprites = std::make_shared<eb::native::SpriteResources>(
                assets.image, eb::native::sprite_catalog_layout(assets.version));
            const eb::native::WorldPalettes palettes(assets.image,
                                                     eb::native::world_palette_layout(assets.version));
            authored_appearance(assets, sprites, *authored, palettes.initial_sprites());
            eb::native::ActorWorld normal(sprites, tasks, assets.version),
                wide(sprites, tasks, assets.version);
            std::vector<std::pair<eb::native::ActorId, eb::native::ActorId>> actors;
            for (unsigned group = 0; group < sprites->size(); ++group) {
                eb::native::WorldActorSpec actor;
                actor.sprite = group;
                actor.script = group & 1;
                actor.action.animation = 0;
                actor.action.priority = 1;
                actor.action.position = {128 * 65536 + 0x8000, 112 * 65536 + 0x8000, 0x8000};
                const auto a = normal.create(actor), b = wide.create(actor);
                normal.actor(a).appearance.select_four(0, 0);
                wide.actor(b).appearance.select_four(0, 0);
                actors.emplace_back(a, b);
            }
            normal.actor(actors.front().first).behavior.tick = eb::native::ActorTickCallback::CenterCamera;
            wide.actor(actors.front().second).behavior.tick = eb::native::ActorTickCallback::CenterCamera;
            std::shared_ptr<const eb::DirectSceneFrame> retained;
            std::vector<std::uint32_t> retained_pixels;
            unsigned frames = 0;
            for (; frames < 256; ++frames) {
                require(normal.advance_tick() == eb::native::WorldTickResult::NeedsCameraRefresh &&
                            wide.advance_tick() == eb::native::WorldTickResult::NeedsCameraRefresh,
                        "Native motion scene missed its camera boundary");
                // This controlled scene has no activation service; acknowledge
                // both refreshes explicitly without introducing extra actors.
                normal.respond_camera_refresh();
                wide.respond_camera_refresh();
                require(normal.advance_tick() == eb::native::WorldTickResult::Complete &&
                            wide.advance_tick() == eb::native::WorldTickResult::Complete,
                        "Native authored motion scene unexpectedly required an engine operation");
                if (!(frames % 8)) {
                    retained = wide.draw(522, palettes.initial_sprites(), 1);
                    retained_pixels = eb::rasterize_direct_scene({retained, {}});
                    (void)normal.draw(256, palettes.initial_sprites(), 1);
                    for (unsigned sample = 0; sample < 4; ++sample)
                        (void)wide.draw(522, palettes.initial_sprites(), 1);
                }
                for (const auto [a, b] : actors)
                    require(normal.actor(a).action().position == wide.actor(b).action().position &&
                                normal.actor(a).action().velocity == wide.actor(b).action().velocity &&
                                normal.actor(a).action().variables == wide.actor(b).action().variables,
                            "Presentation width/frequency changed the native world");
            }
            for (unsigned group = 0; group < actors.size(); ++group) {
                const auto [a, b] = actors[group];
                const unsigned expected = 128 + (group & 1 ? 512 : 1024);
                require(normal.actor(a).action().position[0] == expected * 65536 + 0x8000 &&
                            !normal.actor(a).action().velocity[0],
                        "Authored acceleration motion differs from its exact full-cycle displacement");
                normal.erase(a);
                wide.erase(b);
            }
            require(normal.size() == 0 && wide.size() == 0 &&
                        eb::rasterize_direct_scene({retained, {}}) == retained_pixels,
                    "Deleting native actors changed a published frame or leaked live identities");
            std::cout << "PASS " << assets.title << ": " << actors.size() << " moving host actors, " << frames
                      << " authored motion ticks at both widths, camera/palettes/draw/lifetime; "
                         "no CPU/bus/SPC or original resource allocations\n";
        }
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
