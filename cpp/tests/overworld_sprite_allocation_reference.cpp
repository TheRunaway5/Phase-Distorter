// Controlled cutover oracle, not a shipped runtime hook. The reference runs
// the complete original CREATE_ENTITY and both allocators. The candidate runs
// the same logical CREATE/INIT/delete paths, while explicit resource-service
// boundaries use the native CreationLease owner and never touch either pool.
//
// Candidate resource helper returns are the neutral IN-RANGE source index zero,
// never a native ResourceId. CREATE derives compatibility transport fields from
// that index; candidate descriptors/graphics are never dereferenced. Animation
// uses native snapshots, and deletion intercepts both resource releases. This
// fixture proves these bounded paths only, not draw/cutover readiness.
#include "eb/main_cpu_65816.hpp"
#include "eb/overworld_sprite_allocation.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include <algorithm>
#include <iostream>
#include <memory>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool okay, const char *message) {
    if (!okay)
        throw std::runtime_error(message);
}
struct Layout {
    unsigned create, prepared, graphics_allocator, map_allocator;
    unsigned first, free_actor, free_task, next_actor, next_task, new_z, new_var0, new_priority, prepared_x,
        prepared_y, prepared_direction, script, script_index, cursor, bank, sleep, stack, x, xf, dx, dxf,
        var0, animation, priority, movement, projection, draw, tick_low, tick_high, screen_x, screen_y,
        direction, speed, collided, surface, shape, hitbox_udw, hitbox_udh, hitbox_lrw, hitbox_lrh,
        collision_profile, partition, enemy_tile, enemy, npc, unknown, unused, path, obstacle, sprite,
        planar_callback, world_callback, draw_callback, nop;
};
constexpr Layout us{0xc01e49, 0xc46507, 0xc01c52, 0xc01a9d, 0xa50,  0xa52,  0xa54,  0xa9e,   0x125a, 0xa48,
                    0xa38,    0xa4a,    0x9e2d,   0x9e2f,   0x9e31, 0xa62,  0xada,  0x13fe,  0x148a, 0x1372,
                    0x12e6,   0xb8e,    0xc42,    0xcf6,    0xdaa,  0xe5e,  0x10f2, 0x103e,  0x121e, 0x11a6,
                    0x11e2,   0x107a,   0x10b6,   0xb16,    0xb52,  0x2af6, 0x2b32, 0x289e,  0x2baa, 0x2b6e,
                    0x3366,   0x33a2,   0x33de,   0x1a4a,   0x332a, 0x2be6, 0x2d4e, 0x2d12,  0x2c9a, 0x2dc6,
                    0x2d8a,   0x2c5e,   0x28da,   0x2cd6,   0x9fc8, 0xa023, 0xa3a4, 0xc0943b};
constexpr Layout jp{0xc01e5f, 0xc44275, 0xc01c68, 0xc01ab3, 0xa46,  0xa48,  0xa4a,  0xa94,   0x1250, 0xa3e,
                    0xa2e,    0xa40,    0xa033,   0xa035,   0xa037, 0xa58,  0xad0,  0x13f4,  0x1480, 0x1368,
                    0x12dc,   0xb84,    0xc38,    0xcec,    0xda0,  0xe54,  0x10e8, 0x1034,  0x1214, 0x119c,
                    0x11d8,   0x1070,   0x10ac,   0xb0c,    0xb48,  0x2ef4, 0x2f30, 0x2c9c,  0x2fa8, 0x2f6c,
                    0x3764,   0x37a0,   0x37dc,   0x1a40,   0x3728, 0x2fe4, 0x314c, 0x3110,  0x3098, 0x31c4,
                    0x3188,   0x305c,   0x2cd8,   0x30d4,   0x9fa7, 0xa002, 0xa383, 0xc0941a};
struct Oracle {
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    Layout l;
    unsigned offset{}, allocator_calls{}, resource_calls{}, forbidden_accesses{};
    bool native_resources;
    std::shared_ptr<SpriteResources> resources;
    eb::OverworldSpriteAllocation allocations;
    eb::OverworldSpriteAllocation::ResourceId resource{};
    unsigned maps{}, blocks{}, destroy{}, release_map{}, release_graphics{}, build_map{};
    bool pool(unsigned at) const {
        return (at >= maps && at < maps + 0x380) || (at >= blocks && at < blocks + 88);
    }
    explicit Oracle(const eb::GameAssets &assets, bool native)
        : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)), cpu(*bus),
          l(assets.version == eb::GameVersion::JP ? jp : us), native_resources(native),
          resources(std::make_shared<SpriteResources>(assets.image, sprite_catalog_layout(assets.version))),
          allocations(resources, import_actor_creation_data(assets.image, assets.version)) {
        const bool japanese = assets.version == eb::GameVersion::JP;
        maps = japanese ? 0x4a04 : 0x467e;
        blocks = japanese ? 0x4d86 : 0x4a00;
        destroy = japanese ? 0xc0214e : 0xc02140;
        release_map = japanese ? 0xc01b2b : 0xc01b15;
        release_graphics = japanese ? 0xc01c27 : 0xc01c11;
        build_map = japanese ? 0xc01d4e : 0xc01d38;
        if (native_resources) {
            bus->debug_read_wram = [this](unsigned at, std::uint8_t value) {
                if (pool(at)) {
                    ++forbidden_accesses;
                    throw std::runtime_error("Candidate read a poisoned legacy resource pool");
                }
                return value;
            };
            bus->debug_write_wram = [this](unsigned at, std::uint8_t value) {
                if (pool(at)) {
                    ++forbidden_accesses;
                    throw std::runtime_error("Candidate wrote a poisoned legacy resource pool");
                }
                return value;
            };
        }
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    }
    void put(unsigned at, unsigned value) {
        bus->work_ram[at] = value;
        bus->work_ram[at + 1] = value >> 8;
    }
    unsigned get(unsigned at) const { return bus->work_ram[at] | unsigned(bus->work_ram[at + 1]) << 8; }
    void create(unsigned sprite, unsigned script, const PreparedActorState &prepared, unsigned slot,
                bool prepared_wrapper) {
        auto lease = allocations.prepare(sprite);
        bus->work_ram.fill(0);
        std::fill_n(bus->work_ram.begin() + maps, 0x380, native_resources ? 0x55 : 0xff);
        std::fill_n(bus->work_ram.begin() + blocks, 88, native_resources ? 0xff : 0);
        bus->video_ram.fill(native_resources ? 0xa5 : 0);
        bus->work_ram[0x0d] = 0x80; // Reference creation clears padding by immediate DMA.
        cpu.emulation_mode = false;
        cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.data_bank = 0x7e;
        cpu.direct_page = 0x1e00;
        cpu.stack_pointer = 0x1fff;
        offset = slot * 2;
        put(l.first, 0xffff);
        put(l.free_actor, offset);
        put(l.next_actor + offset, 0xffff);
        put(l.free_task, 0);
        put(l.next_task, 0xffff);
        put(l.new_z, prepared.height);
        put(l.new_priority, 0xa55a); // CREATE_ENTITY must replace this with one.
        for (unsigned variable = 0; variable < 8; ++variable)
            put(l.new_var0 + variable * 2, prepared.variables[variable]);
        for (const auto at : {l.animation, l.priority, l.movement, l.projection, l.draw, l.tick_low,
                              l.tick_high, l.direction, l.speed, l.collided, l.surface, l.enemy_tile, l.enemy,
                              l.npc, l.unknown, l.unused, l.path, l.obstacle})
            put(at + offset, 0xa55a);
        put(l.sleep, 0xa55a);
        put(l.stack, 0xa55a);
        for (unsigned axis = 0; axis < 3; ++axis) {
            put(l.dx + axis * 60 + offset, 0xa55a);
            put(l.dxf + axis * 60 + offset, 0xa55a);
        }
        put(0x1e0e, prepared.x);
        put(0x1e10, prepared.y);
        put(l.prepared_x, prepared.x);
        put(l.prepared_y, prepared.y);
        put(l.prepared_direction, prepared.direction);
        const unsigned address = prepared_wrapper ? l.prepared : l.create;
        const unsigned trampoline = (address & 0xff0000) | 0xff00;
        cpu.program_counter = trampoline;
        cpu.accumulator = sprite;
        cpu.x_index = script;
        cpu.y_index = slot; // Bare CREATE_ENTITY explicitly chooses the reference slot.
        cpu.execute_instruction<0x22>(address, 4);
        unsigned steps = 0;
        allocator_calls = 0;
        while (cpu.program_counter != trampoline + 4 || cpu.stack_pointer != 0x1fff) {
            if (++steps > 1000000)
                throw std::runtime_error("Source actor creation failed to return: " +
                                         cpu.describe_registers());
            if (cpu.program_counter == l.graphics_allocator || cpu.program_counter == l.map_allocator)
                ++allocator_calls;
            step();
        }
        require(cpu.accumulator == slot && allocator_calls == 2,
                "Source creation allocation protocol changed");
        if (native_resources)
            resource = allocations.commit(std::move(lease));
    }
    void step() {
        const unsigned pc = cpu.program_counter | 0xc00000;
        if (native_resources && (pc == l.graphics_allocator || pc == l.map_allocator || pc == release_map ||
                                 pc == release_graphics || pc == build_map)) {
            ++resource_calls;
            // The source caller ignores all five helper return values except
            // allocation indices. Zero is valid/in-range transport metadata;
            // it is never the native identity or a promise of source storage.
            cpu.accumulator = 0;
            if (pc == build_map)
                cpu.execute_instruction<0x60>(0, 1); // Near helper.
            else
                cpu.execute_instruction<0x6b>(0, 1); // Far resource helper.
            return;
        }
        cpu.step_instruction();
    }
    unsigned call(unsigned address, bool far) {
        const unsigned trampoline = (address & 0xff0000) | 0xff00;
        cpu.program_counter = trampoline;
        if (far)
            cpu.execute_instruction<0x22>(address, 4);
        else
            cpu.execute_instruction<0x20>(address & 0xffff, 3);
        for (unsigned step_count = 0; step_count < 1000000; ++step_count) {
            if (cpu.program_counter == trampoline + (far ? 4 : 3) && cpu.stack_pointer == 0x1fff)
                return cpu.accumulator;
            step();
        }
        throw std::runtime_error("Source resource oracle call did not return");
    }
    unsigned animate(unsigned direction, unsigned phase, unsigned surface, bool eight) {
        put(l.direction + offset, direction);
        put(l.animation + offset, eight ? phase * 2 : phase);
        put(l.surface + offset, surface);
        if (native_resources) {
            if (eight)
                allocations.select_eight(resource, direction, phase * 2, surface);
            else
                allocations.select_four(resource, direction, phase, surface);
            return bool(allocations.snapshot(resource).image); // Native predicate, not a VRAM scalar.
        }
        const bool japanese = l.create == jp.create;
        put(japanese ? 0x2c90 : 0x2892, phase);
        put(japanese ? 0x2c94 : 0x2896, offset);
        put(0x1e88, offset);
        cpu.x_index = offset;
        cpu.y_index = offset;
        return call(eight ? (japanese ? 0xc0a773 : 0xc0a794) : (japanese ? 0xc0a4a3 : 0xc0a4c4), !eight);
    }
    void erase(bool full_delete = true, unsigned npc_id = 0x8001, unsigned enemy_id = 0xffff) {
        const bool japanese = l.create == jp.create;
        const unsigned enemy_count = japanese ? 0x4de2 : 0x4a5c;
        const unsigned butterfly_spawned = japanese ? 0x4de6 : 0x4a60;
        const unsigned current_actor = japanese ? 0x1a38 : 0x1a42;
        const unsigned release_current = japanese ? 0xc020ff : 0xc020f1;
        constexpr unsigned magic_butterfly = 225; // ENEMY::MAGIC_BUTTERFLY, not sprite or battle-group ID.
        put(l.npc + offset, npc_id);
        put(l.enemy + offset, enemy_id);
        put(enemy_count, 3);
        put(butterfly_spawned, 1);
        put(current_actor, offset / 2);
        const unsigned script = get(l.script + offset), script_index = get(l.script_index + offset);
        const unsigned first = get(l.first), next = get(l.next_actor + offset);
        const unsigned free_actor = get(l.free_actor), free_task = get(l.free_task);
        const unsigned next_task = get(l.next_task + script_index);
        const unsigned callbacks[]{get(l.tick_low + offset), get(l.tick_high + offset)};
        const unsigned calls_before = resource_calls;
        // Graphics-only release uses CURRENT_ENTITY_SLOT and must ignore incoming A.
        cpu.accumulator = full_delete ? offset / 2 : 0xa55a;
        call(full_delete ? destroy : release_current, true);
        require(get(enemy_count) == ((npc_id & 0xf000) == 0x8000 ? 2 : 3) &&
                    get(butterfly_spawned) == (enemy_id == magic_butterfly ? 0 : 1) &&
                    get(l.sprite + offset) == 0xffff && get(l.npc + offset) == 0xffff &&
                    get(l.enemy + offset) == enemy_id,
                "Resource release changed source enemy/butterfly cleanup bookkeeping");
        if (full_delete) {
            require(get(l.script + offset) == 0xffff && get(l.first) == 0xffff &&
                        get(l.free_actor) == offset && get(l.next_actor + offset) == free_actor &&
                        get(l.free_task) == script_index && get(l.next_task + script_index) == free_task,
                    "Full deletion did not unlink actor and return its logical actor/task slots");
        } else {
            require(get(l.script + offset) == script && get(l.script_index + offset) == script_index &&
                        get(l.first) == first && get(l.next_actor + offset) == next &&
                        get(l.free_actor) == free_actor && get(l.free_task) == free_task &&
                        get(l.next_task + script_index) == next_task &&
                        get(l.tick_low + offset) == callbacks[0] && get(l.tick_high + offset) == callbacks[1],
                    "Graphics-only release removed or rewrote the still-active logical actor/task");
        }
        if (native_resources) {
            require(resource_calls == calls_before + 2, "Resource release did not bypass both source pools");
            require(allocations.release(resource), "Native deletion did not release its resource");
            require(!forbidden_accesses &&
                        std::all_of(bus->work_ram.begin() + maps, bus->work_ram.begin() + maps + 0x380,
                                    [](auto value) { return value == 0x55; }) &&
                        std::all_of(bus->work_ram.begin() + blocks, bus->work_ram.begin() + blocks + 88,
                                    [](auto value) { return value == 0xff; }) &&
                        std::all_of(bus->video_ram.begin(), bus->video_ram.end(),
                                    [](auto value) { return value == 0xa5; }),
                    "Candidate resources touched original allocation/descriptor/pixel storage");
        }
    }
    std::size_t compare_pixels(const eb::native::SpriteImage &image) const {
        const auto &profile = eb::source_profile(bus->game_version());
        const unsigned map_pointer = get(profile.wram_entity_spritemap_pointers.low + offset);
        const unsigned map_size = get(profile.wram_entity_spritemap_sizes + offset);
        const unsigned frame_ref = get(profile.wram_entity_displayed_sprites + offset);
        const unsigned base = map_pointer + ((frame_ref & 1) ? map_size : 0);
        for (unsigned part = 0; part < image.parts.size(); ++part) {
            const unsigned at = base + part * 5;
            const auto &piece = image.parts[part];
            const unsigned attr = bus->work_ram[at + 2], tile = bus->work_ram[at + 1];
            for (unsigned y = 0; y < 16; ++y)
                for (unsigned x = 0; x < 16; ++x) {
                    const unsigned sx = attr & 0x40 ? 15 - x : x, sy = attr & 0x80 ? 15 - y : y;
                    const unsigned t = (((tile & 0xf0) + (sy / 8) * 16) & 0xf0) | ((tile + sx / 8) & 15);
                    const unsigned pixel = 0x8000 + ((attr & 1) ? 8192 : 0) + t * 32 + (sy & 7) * 2;
                    unsigned color = 0;
                    for (unsigned plane = 0; plane < 4; ++plane)
                        color |= ((bus->video_ram[(pixel + (plane / 2) * 16 + (plane & 1)) & 0xffff] >>
                                   (7 - (sx & 7))) &
                                  1)
                                 << plane;
                    if (piece.indices[y * 16 + x] != color)
                        throw std::runtime_error("Native image mismatch part=" + std::to_string(part) +
                                                 " x=" + std::to_string(x) + " y=" + std::to_string(y) +
                                                 " native=" + std::to_string(piece.indices[y * 16 + x]) +
                                                 " source=" + std::to_string(color) +
                                                 " sourceMap=" + std::to_string(base) +
                                                 " frameRef=" + std::to_string(frame_ref));
                }
        }
        return image.parts.size() * 256;
    }
    void compare(const WorldActorSpec &spec, const ActorCreationMetadata &metadata,
                 const ActionScriptData &scripts) const {
        const auto &profile = eb::source_profile(bus->game_version());
        require(get(profile.wram_entity_spritemap_pointers.high + offset) == 0x7e,
                "Creation changed the source-visible spritemap bank/visibility state");
        require(get(l.script + offset) == spec.script && get(l.sprite + offset) == spec.sprite,
                "Created script or sprite differs");
        const unsigned entry = scripts.entry(spec.script) + 0xc00000;
        require(get(l.script_index + offset) == 0 && get(l.cursor) == (entry & 0xffff) &&
                    get(l.bank) == entry >> 16 && !get(l.sleep) && !get(l.stack),
                "Initial authored task state differs");
        for (unsigned axis = 0; axis < 3; ++axis) {
            require(spec.action.position[axis] ==
                        (get(l.x + axis * 60 + offset) << 16 | get(l.xf + axis * 60 + offset)),
                    "Creation world coordinate/fraction differs");
            require(spec.action.velocity[axis] ==
                        (get(l.dx + axis * 60 + offset) << 16 | get(l.dxf + axis * 60 + offset)),
                    "Creation initial motion differs");
        }
        for (unsigned variable = 0; variable < 8; ++variable)
            require(spec.action.variables[variable] == get(l.var0 + variable * 60 + offset),
                    "Creation prepared variable differs");
        require(spec.action.animation == get(l.animation + offset) &&
                    spec.action.priority == get(l.priority + offset) && spec.action.alive,
                "Creation animation/priority/lifetime differs");
        require(std::uint16_t(spec.behavior.projected_x) == get(l.screen_x + offset) &&
                    std::uint16_t(spec.behavior.projected_y) == get(l.screen_y + offset),
                "Creation prematurely projected initial absolute coordinates");
        require(
            get(l.movement + offset) == l.planar_callback && get(l.projection + offset) == l.world_callback &&
                get(l.draw + offset) == l.draw_callback && get(l.tick_low + offset) == (l.nop & 0xffff) &&
                get(l.tick_high + offset) == l.nop >> 16 && spec.behavior.physics == ActorPhysics::Planar &&
                spec.behavior.projection == ActorProjection::World &&
                spec.behavior.tick == ActorTickCallback::None && spec.behavior.draw_world,
            "Creation default callbacks or pause controls differ");
        require(spec.behavior.direction == get(l.direction + offset) &&
                    spec.behavior.movement_speed == get(l.speed + offset) &&
                    spec.behavior.surface_flags == get(l.surface + offset) &&
                    std::uint16_t(spec.behavior.collision_object) == get(l.collided + offset),
                "Creation facing/speed/surface/collision defaults differ");
        require(metadata.sprite.shape == get(l.shape + offset) &&
                    spec.appearance_context.shape == metadata.sprite.shape &&
                    metadata.collision_profile == get(l.collision_profile + offset) &&
                    (metadata.sprite.upper_parts << 8 | metadata.lower_parts) == get(l.partition + offset),
                "Creation shape/body division/collision metadata differs");
        const unsigned hitbox_fields[]{l.hitbox_udw, l.hitbox_udh, l.hitbox_lrw, l.hitbox_lrh};
        for (unsigned i = 0; i < metadata.sprite.hitbox.size(); ++i)
            require(metadata.sprite.hitbox[i] == get(hitbox_fields[i] + offset),
                    "Creation hitbox content differs");
        for (const auto field : {l.enemy_tile, l.enemy, l.npc})
            require(get(field + offset) == 0xffff, "Source fresh actor retained a gameplay identity");
        for (const auto field : {l.unknown, l.unused, l.path, l.obstacle})
            require(get(field + offset) == 0, "Source fresh actor retained a creation-owned flag");
        require(get(l.first) == offset && get(l.next_actor + offset) == 0xffff,
                "Reference actor was not appended exactly once");
    }
};
} // namespace
int main(int argc, char **argv) {
    try {
        if (argc < 2)
            throw std::runtime_error("overworld_sprite_allocation_reference pack.ebpak ...");
        for (int argument = 1; argument < argc; ++argument) {
            const auto assets = eb::load_game_assets(argv[argument], eb::asset_profiles());
            const auto scripts = import_action_scripts(assets.image, assets.version);
            const auto creation = import_actor_creation_data(assets.image, assets.version);
            Oracle reference(assets, false), candidate(assets, true);
            unsigned cases = 0, poses = 0;
            std::size_t pixels = 0;
            for (unsigned sprite = 0; sprite < reference.resources->size(); ++sprite) {
                for (const bool prepared_wrapper : {false, true}) {
                    const unsigned slot = sprite % 3 * 7;
                    const unsigned script = (sprite * 17) % scripts->size();
                    PreparedActorState prepared;
                    prepared.x = sprite * 19;
                    prepared.y = sprite * 23;
                    prepared.height = sprite * 113;
                    prepared.direction = prepared_wrapper ? sprite % 8 : 0;
                    for (unsigned i = 0; i < prepared.variables.size(); ++i)
                        prepared.variables[i] = sprite * 29 + i * 0x2345;
                    const auto spec =
                        make_actor_spec(sprite, script, prepared, *reference.resources, *scripts);
                    const auto metadata = actor_creation_metadata(*reference.resources, creation, sprite);
                    reference.create(sprite, script, prepared, slot, prepared_wrapper);
                    candidate.create(sprite, script, prepared, slot, prepared_wrapper);
                    reference.compare(spec, metadata, *scripts);
                    candidate.compare(spec, candidate.allocations.snapshot(candidate.resource).creation,
                                      *scripts);
                    for (unsigned eight = 0; eight < 2; ++eight)
                        for (unsigned direction : {0u, 2u, 4u, 6u})
                            for (unsigned phase = 0; phase < 2; ++phase) {
                                const auto pose = eight ? eight_direction_pose(direction, phase * 2)
                                                        : four_direction_pose(direction, phase);
                                if (pose >= metadata.sprite.frames)
                                    continue;
                                // Normal and shallow surfaces exercise ordinary and fixed-zero transfer
                                // paths.
                                for (unsigned surface : {0u, 8u}) {
                                    const auto high = eb::source_profile(assets.version)
                                                          .wram_entity_spritemap_pointers.high;
                                    const unsigned visibility = phase ? 0x807e : 0x007e;
                                    reference.put(high + reference.offset, visibility);
                                    candidate.put(high + candidate.offset, visibility);
                                    const auto incidental =
                                        reference.animate(direction, phase, surface, eight);
                                    const auto predicate =
                                        candidate.animate(direction, phase, surface, eight);
                                    require(
                                        reference.get(high + reference.offset) == visibility &&
                                            candidate.get(high + candidate.offset) == visibility,
                                        "Resource animation changed source-visible bank/visibility flags");
                                    require((incidental != 0) == (predicate != 0),
                                            "Source live appearance nonzero consumer differs");
                                    try {
                                        pixels += reference.compare_pixels(
                                            *candidate.allocations.snapshot(candidate.resource).image);
                                    } catch (const std::exception &error) {
                                        throw std::runtime_error(std::string(error.what()) +
                                                                 " sprite=" + std::to_string(sprite) +
                                                                 " eight=" + std::to_string(eight) +
                                                                 " direction=" + std::to_string(direction) +
                                                                 " phase=" + std::to_string(phase) +
                                                                 " surface=" + std::to_string(surface));
                                    }
                                    ++poses;
                                }
                            }
                    const auto retained = candidate.allocations.snapshot(candidate.resource).image;
                    reference.erase();
                    candidate.erase();
                    require(candidate.allocations.size() == 0 && retained && !retained->parts.empty(),
                            "Native deletion retained allocation or destroyed immutable submitted artwork");
                    ++cases;
                }
            }
            unsigned cleanup_cases = 0;
            for (const bool full_delete : {false, true})
                for (const unsigned npc_id : {0x8001u, 0x0001u})
                    for (const unsigned enemy_id : {225u, 1u}) {
                        PreparedActorState prepared;
                        prepared.x = 128;
                        prepared.y = 112;
                        const unsigned slot = full_delete ? 14 : 7;
                        reference.create(413, 1, prepared, slot, false);
                        candidate.create(413, 1, prepared, slot, false);
                        reference.animate(0, 0, 0, false);
                        candidate.animate(0, 0, 0, false);
                        reference.erase(full_delete, npc_id, enemy_id);
                        candidate.erase(full_delete, npc_id, enemy_id);
                        require(candidate.allocations.size() == 0,
                                "Source cleanup retained a native graphics resource");
                        ++cleanup_cases;
                    }
            std::cout << (assets.version == eb::GameVersion::JP ? "JP" : "US") << ": " << cases
                      << " actual source create/INIT/delete paths, " << poses << " native poses, " << pixels
                      << " source pixels, " << cleanup_cases << " graphics/full-delete bookkeeping cases; "
                      << "poisoned 88-block and 896-byte pools untouched; prototype only\n";
        }
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
