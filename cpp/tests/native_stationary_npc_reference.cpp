// Source is an oracle only. Production stationary readiness creates no actor,
// consumes no RNG and owns immutable images instead of a source graphics pool.
#include "eb/native/stationary_npc_sprites.hpp"
#include "eb/native/action_scripts.hpp"
#include "eb/native/sprite_appearance.hpp"
#include "eb/native/world_collision.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <vector>
namespace {
using namespace eb::native;
void require(bool condition, const char *message) { if (!condition) throw std::runtime_error(message); }
unsigned word(std::span<const std::uint8_t> data, unsigned at) { return data[at] | unsigned(data[at + 1]) << 8; }
unsigned pointer(std::span<const std::uint8_t> data, unsigned at) { return word(data, at) | unsigned(data[at + 2]) << 16; }
struct Oracle {
    const eb::GameAssets &assets;
    const eb::SourceProfile &p;
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    std::shared_ptr<const ActionScriptData> scripts;
    unsigned script_delta, graphics_delta, map, direction, npc, shape, run, reset, no_move, no_project, no_tick;
    unsigned calls{}, ticks{};
    Oracle(const eb::GameAssets &a) : assets(a), p(eb::source_profile(a.version)),
        bus(std::make_unique<eb::SnesBus>(a.image,a.version)), cpu(*bus), scripts(import_action_scripts(a.image,a.version)) {
        const bool jp = a.version == eb::GameVersion::JP;
        script_delta = jp ? 10 : 0; graphics_delta = jp ? 0x3fe : 0;
        map = jp ? 0x4a04 : 0x467e; direction = 0x2af6 + graphics_delta;
        npc = 0x2c9a + graphics_delta; shape = 0x2b6e + graphics_delta;
        run = jp ? 0xc09445 : 0xc09466; reset = jp ? 0xc0925e : 0xc0927c;
        no_move = jp ? 0x9fcf : 0x9ff0; no_project = jp ? 0xa018 : 0xa039;
        no_tick = jp ? 0xc0941a : 0xc0943b;
        cpu.set_runtime(eb::MainCpuRuntime::Legacy); cpu.emulation_mode = false;
        cpu.data_bank = 0x7e; bus->work_ram[0x0d] = 0x80;
    }
    void put(unsigned at, unsigned value) { bus->work_ram[at] = value; bus->work_ram[at + 1] = value >> 8; }
    unsigned get(unsigned at) const { return word(bus->work_ram,at); }
    void call(unsigned address, bool far = true, unsigned a = 0, unsigned x = 0, unsigned y = 0) {
        cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.direct_page = 0x1e00; cpu.stack_pointer = 0x1fff; cpu.program_counter = 0xc0ff00;
        cpu.accumulator = a; cpu.x_index = x; cpu.y_index = y;
        if (far) cpu.execute_instruction<0x22>(address,4); else cpu.execute_instruction<0x20>(address & 0xffff,3);
        unsigned steps = 0;
        while (cpu.program_counter != 0xc0ff00 + (far ? 4u : 3u) || cpu.stack_pointer != 0x1fff) {
            if (++steps > 1000000) throw std::runtime_error("Stationary source oracle did not return: " + cpu.describe_registers());
            const auto pc = cpu.program_counter | 0xc00000;
            require(pc != (assets.version == eb::GameVersion::JP ? 0xc08e8b : 0xc08e9a),
                    "Stationary authored program consumed RNG");
            cpu.step_instruction();
        }
        ++calls;
    }
    void cache(const WorldMapArea &area, const NpcPlacement &place) {
        for (int dy = -32; dy < 32; ++dy)
            for (int dx = -32; dx < 32; ++dx) {
                const unsigned x = (place.x / 8 + dx) & 8191, y = (place.y / 8 + dy) & 8191;
                bus->work_ram[0xe000 + (y & 63) * 64 + (x & 63)] = area.collision(x,y);
            }
    }
    void seed(const NpcPlacement &place, const NpcDefinition &definition, const WorldMapArea &area, std::span<const std::uint8_t> flags) {
        call(reset);
        std::copy(flags.begin(), flags.end(), bus->work_ram.begin() + (assets.version == eb::GameVersion::JP ? 0x9eb3 : 0x9c08));
        put(p.wram_entity_script_variable0, 0);
        // Each seed represents a fresh resource. Unwritten padding in rounded
        //16px source maps must not inherit another independent oracle seed.
        bus->video_ram.fill(0);
        const auto catalog = sprite_catalog_layout(assets.version);
        const unsigned base = pointer(assets.image,catalog.groups + definition.sprite * 4) - 0xc00000;
        const auto geometry = pointer(assets.image,catalog.shapes + assets.image[base + 2] * 4);
        put(0x1e0e,geometry); put(0x1e10,geometry >> 16);
        call(assets.version == eb::GameVersion::JP ? 0xc01d4e : 0xc01d38,false,0,0,assets.image[base + 3]);
        const unsigned table = base + 9;
        put(0x29ca + graphics_delta,table); put(0x2a06 + graphics_delta,(base + 0xc00000) >> 16);
        put(0x2a42 + graphics_delta,assets.image[base + 8]);
        put(0x2aba + graphics_delta,assets.image[base]); put(0x2a7e + graphics_delta,assets.image[base + 1] * 2);
        put(0x298e + graphics_delta,0x4000 + ((assets.image[base] & 1) ? 0x100 : 0));
        put(p.wram_entity_spritemap_pointers.high,0x7e);
        put(shape,assets.image[base + 2]); put(direction,definition.direction); put(npc,place.npc);
        put(p.wram_first_entity,0); put(p.wram_entity_next,0xffff); put(p.wram_first_entity + 4,2);
        put(p.wram_entity_script_ids,definition.script); put(0x0ada - script_delta,0);
        put(0x125a - script_delta,0xffff); put(0x13fe - script_delta,scripts->entry(definition.script));
        put(0x148a - script_delta,(scripts->entry(definition.script) + 0xc00000) >> 16);
        put(0x1372 - script_delta,0); put(0x12e6 - script_delta,0); put(0x1516 - script_delta,0);
        put(0x121e - script_delta,no_move); put(0x11a6 - script_delta,no_project);
        put(0x107a - script_delta,no_tick); put(0x10b6 - script_delta,no_tick >> 16);
        put(0x0a5e - script_delta,no_project);
        put(p.wram_entity_world_coordinates.x,place.x); put(p.wram_entity_world_coordinates.y,place.y);
        for (unsigned axis = 0; axis < 3; ++axis) {
            put(0x0c42 - script_delta + axis * 60,0x8000);
            put(0x0cf6 - script_delta + axis * 60,3); put(0x0daa - script_delta + axis * 60,0x1234);
        }
        put(p.wram_entity_animation_frame,0xffff); put(p.wram_entity_draw_priority,1);
        put(p.party_state.leader_x,place.x); put(p.party_state.leader_y,place.y);
        put(0x24,0x1234); put(0x26,0x5678); cache(area,place);
    }
    void tick(const NpcPlacement &place, bool animated = false) {
        call(run); ++ticks;
        require(get(p.wram_entity_world_coordinates.x) == place.x && get(p.wram_entity_world_coordinates.y) == place.y,
                "Stationary script moved authored position");
        require(get(p.wram_entity_animation_frame) == 0 ||
                    (animated && get(p.wram_entity_animation_frame) == 1),
                "Stationary script changed its verified animation range");
        require(get(0x24) == 0x1234 && get(0x26) == 0x5678, "Stationary script mutated RNG");
        for (unsigned axis = 0; axis < 3; ++axis)
            require(get(0x0cf6 - script_delta + axis * 60) == 0 && get(0x0daa - script_delta + axis * 60) == 0,
                    "Stationary script retained nonzero velocity");
    }
    std::size_t compare(const StationaryNpcSprite &sprite) const {
        require(get(p.wram_entity_surface_flags) == sprite.surface, "Readiness surface differs from source C05F33");
        const auto &image = *sprite.image;
        const unsigned mirrored = get(p.wram_entity_displayed_sprites) & 1;
        for (unsigned i = 0; i < image.parts.size(); ++i) {
            const unsigned at = map + ((mirrored * image.parts.size()) + i) * 5;
            const auto &part = image.parts[i];
            const unsigned tile = bus->work_ram[at + 1], attrs = bus->work_ram[at + 2];
            require(part.left == std::int8_t(bus->work_ram[at + 3]) && part.top == std::int8_t(bus->work_ram[at]),
                    "Readiness authored geometry differs");
            require(sprite.palette == ((attrs >> 1) & 7), "Readiness palette differs");
            for (unsigned y = 0; y < 16; ++y) for (unsigned x = 0; x < 16; ++x) {
                const unsigned sx = attrs & 0x40 ? 15 - x : x, sy = attrs & 0x80 ? 15 - y : y;
                const unsigned cell = (((tile & 0xf0) + sy / 8 * 16) & 0xf0) | ((tile + sx / 8) & 15);
                const unsigned address = 0x8000 + ((attrs & 1) ? 8192 : 0) + cell * 32 + (sy & 7) * 2;
                unsigned color = 0;
                for (unsigned plane = 0; plane < 4; ++plane)
                    color |= ((bus->video_ram[(address + plane / 2 * 16 + (plane & 1)) & 0xffff] >> (7 - (sx & 7))) & 1) << plane;
                if (part.indices[y * 16 + x] != color)
                    throw std::runtime_error("Readiness first pose differs npc=" + std::to_string(sprite.placement.npc) +
                        " xy=" + std::to_string(sprite.placement.x) + "," + std::to_string(sprite.placement.y) +
                        " surface=" + std::to_string(sprite.surface) + " displayed=" + std::to_string(get(p.wram_entity_displayed_sprites)) +
                        " part=" + std::to_string(i) + " pixel=" + std::to_string(x) + "," + std::to_string(y) +
                        " expected=" + std::to_string(color) + " native=" + std::to_string(part.indices[y * 16 + x]));
            }
        }
        return image.parts.size() * 256;
    }
};
void run(const eb::GameAssets &assets) {
    auto resources = std::make_shared<SpriteResources>(assets.image,sprite_catalog_layout(assets.version));
    StationaryNpcSprites ready(assets.image,assets.version,resources);
    NpcCatalog catalog(assets.image,npc_catalog_layout(assets.version));
    WorldMap map(assets.image,world_map_layout(assets.version));
    Oracle oracle(assets);
    std::array<std::array<bool,8>,3> long_cases{};
    std::uint64_t candidates = 0, pixels = 0, exclusions = 0;
    std::array<bool,2> exterior_pair{};
    std::array<bool,2> twoson_benches{}, twoson_facing{};
    bool museum_lamp = false, twoson_post = false;
    for (unsigned id = 0; id < catalog.size(); ++id) {
        const auto &d = catalog.definition(NpcId(id));
        require(ready.supports(NpcId(id)) ==
                    ((d.type == NpcType::ItemBox && d.script == 9) ||
                     (d.type == NpcType::Object && (d.script == (assets.version == eb::GameVersion::JP ? 873u : 877u) ||
                                                  d.script == (assets.version == eb::GameVersion::JP ? 863u : 867u))) ||
                     ((d.type == NpcType::Person || d.type == NpcType::Object) &&
                      (d.script == 7 || d.script == 8 || d.script == 605 || d.script == 606 || d.script == 693))),
                "Readiness admitted an unsupported authored program");
    }
    for (unsigned pattern : {0u,255u}) {
        std::vector<std::uint8_t> flags(128,std::uint8_t(pattern));
        for (unsigned tileset = 0; tileset < 32; ++tileset) {
            NpcVisibility visibility{tileset,flags,{}};
            StationaryNpcPreparation cache;
            const NpcRectangle bounds{0,0,8192,10240};
            const auto sprites = ready.prepare(bounds,visibility,cache);
            const auto area = map.prepare(tileset,flags);
            for (const auto &sprite : sprites) {
                const auto &definition = catalog.definition(sprite.placement.npc);
                museum_lamp |= sprite.placement.npc == 981;
                twoson_post |= sprite.placement.npc == 366;
                if (sprite.placement.npc == 328 || sprite.placement.npc == 329) {
                    const unsigned member = sprite.placement.npc - 328;
                    require(tileset == 2 && definition.script == 605 &&
                            sprite.placement.x == (member ? 2352u : 2328u) &&
                            sprite.placement.y == (member ? 6512u : 6528u),
                            "Theater exterior pair does not match authored catalog placement");
                    exterior_pair[member] = true;
                }
                if (sprite.placement.npc == 350 || sprite.placement.npc == 351) {
                    const unsigned member = sprite.placement.npc - 350;
                    require(tileset == 2 && definition.type == NpcType::Object && definition.script == 8 &&
                                definition.sprite == 198 && sprite.placement.x == (member ? 2096u : 2440u) &&
                                sprite.placement.y == (member ? 7064u : 7168u),
                            "Twoson benches do not match source definitions/placements");
                    twoson_benches[member] = true;
                }
                if (sprite.placement.npc == 304 || sprite.placement.npc == 311) {
                    const unsigned member = sprite.placement.npc == 311;
                    require(tileset == 2 && definition.type == NpcType::Person && definition.script == 606 &&
                                definition.sprite == (member ? 78u : 55u) &&
                                sprite.placement.x == (member ? 1480u : 1912u) &&
                                sprite.placement.y == (member ? 6952u : 6912u),
                            "Twoson fixed-position people do not match source definitions/placements");
                    twoson_facing[member] = true;
                }
                const bool animated = definition.script == 606;
                oracle.seed(sprite.placement,definition,area,flags); oracle.tick(sprite.placement, animated);
                pixels += oracle.compare(sprite); ++candidates;
                if (definition.script == 693) {
                    std::array<bool,4> rotations{};
                    for (unsigned tick = 0; tick < 40; ++tick) {
                        oracle.tick(sprite.placement);
                        const unsigned direction = oracle.get(oracle.direction);
                        require(direction < 8 && !(direction & 1), "Sanctuary marker selected an unexpected direction");
                        rotations[direction / 2] = true;
                        SpriteAppearance appearance(resources, definition.sprite);
                        appearance.select_four(direction, 0, sprite.surface);
                        const auto &selected = *appearance.displayed();
                        auto current = sprite;
                        current.image = resources->acquire(selected.sprite, selected.pose, selected.surface, selected.format);
                        pixels += oracle.compare(current);
                    }
                    require(std::all_of(rotations.begin(), rotations.end(), [](bool seen) { return seen; }),
                            "Sanctuary marker rotation was not source-verified");
                }
                const unsigned kind = animated ? 2 : definition.script == 605;
                if (!long_cases[kind][definition.direction & 7]) {
                    long_cases[kind][definition.direction & 7] = true;
                    // Three periodic direction restorations, with actual child
                    // task allocation/traversal through RUN_ACTIONSCRIPT_FRAME.
                    std::array<bool,2> phases{true, false};
                    for (unsigned tick = 1; tick < 256; ++tick) {
                        oracle.tick(sprite.placement, animated);
                        const unsigned phase = oracle.get(oracle.p.wram_entity_animation_frame);
                        if (animated && !phases[phase]) {
                            phases[phase] = true;
                            SpriteAppearance appearance(resources, definition.sprite);
                            appearance.select_four(definition.direction, phase, sprite.surface);
                            const auto &selected = *appearance.displayed();
                            auto current = sprite;
                            current.image = resources->acquire(selected.sprite, selected.pose,
                                                               selected.surface, selected.format);
                            pixels += oracle.compare(current);
                        }
                    }
                    if (animated)
                        require(phases[1], "Script606 source animation timeline was not exercised");
                    require(oracle.get(oracle.direction) == definition.direction, "Stationary program changed authored direction");
                    if (kind) {
                        oracle.put(oracle.direction,(definition.direction + 2) & 7);
                        for (unsigned tick = 0; tick < 96; ++tick) oracle.tick(sprite.placement, animated);
                        require(oracle.get(oracle.direction) == definition.direction,
                                "Stationary direction task failed to restore authored direction");
                    }
                }
            }
            std::vector<NpcId> active;
            for (const auto &sprite : sprites) active.push_back(sprite.placement.npc);
            visibility.active_npcs = active;
            require(ready.prepare(bounds,visibility,cache).empty(), "Readiness duplicated an active NPC identity");
            exclusions += active.size();
            visibility.active_npcs = {}; visibility.photograph = true;
            require(ready.prepare(bounds,visibility,cache).empty(), "Readiness guessed a photograph pose");
        }
    }
    require(exterior_pair[0] && exterior_pair[1], "Theater exterior pair was not source-verified");
    require(museum_lamp, "Museum photograph-trigger lamp was not source-verified");
    require(twoson_post, "Twoson photograph-trigger street post was not source-verified");
    require(twoson_benches[0] && twoson_benches[1] && twoson_facing[0] && twoson_facing[1],
            "Twoson props/people were not source-verified");
    require(candidates > 100 && long_cases[0][4] && long_cases[1][4] && long_cases[2][4],
            "Readiness oracle missed stationary script coverage");
    std::cout << "PASS stationary NPC source proof " << assets.title << ": candidates=" << candidates
              << " exact_source_pixels=" << pixels << " source_ticks=" << oracle.ticks
              << " active_exclusions=" << exclusions
              << "; fixed-position scripts7/8/9/605/606/693 and museum lamp981, Twoson post366, benches350/351 and people304/311, no activation\n";
}
}
int main(int argc, char **argv) {
    try {
        require(argc > 1,"native_stationary_npc_reference pack.ebpak ...");
        for (int i = 1; i < argc; ++i) run(eb::load_game_assets(argv[i],eb::asset_profiles()));
    } catch (const std::exception &error) { std::cerr << error.what() << '\n'; return 1; }
}
