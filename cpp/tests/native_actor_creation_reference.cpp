// Optional source initialization oracle. Only the two graphics allocators are
// intercepted; INIT_ENTITY, CREATE_ENTITY, script allocation and metadata setup
// execute from the original source. Production creation has no such allocators.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/actor_creation.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
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
    unsigned offset{}, allocator_calls{};
    explicit Oracle(const eb::GameAssets &assets)
        : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)), cpu(*bus),
          l(assets.version == eb::GameVersion::JP ? jp : us) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    }
    void put(unsigned at, unsigned value) {
        bus->work_ram[at] = value;
        bus->work_ram[at + 1] = value >> 8;
    }
    unsigned get(unsigned at) const { return bus->work_ram[at] | unsigned(bus->work_ram[at + 1]) << 8; }
    void create(unsigned sprite, unsigned script, const PreparedActorState &prepared, unsigned slot,
                bool prepared_wrapper) {
        bus->work_ram.fill(0);
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
            if (cpu.program_counter == l.graphics_allocator || cpu.program_counter == l.map_allocator) {
                ++allocator_calls;
                cpu.accumulator = 0;
                cpu.execute_instruction<0x6b>(0, 1);
            } else {
                cpu.step_instruction();
            }
        }
        require(cpu.accumulator == slot && allocator_calls == 2,
                "Reference creation allocation protocol changed");
    }
    void compare(const WorldActorSpec &spec, const ActorCreationMetadata &metadata,
                 const ActionScriptData &scripts) const {
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
            throw std::runtime_error("native_actor_creation_reference pack.ebpak ...");
        for (int argument = 1; argument < argc; ++argument) {
            const auto assets = eb::load_game_assets(argv[argument], eb::asset_profiles());
            SpriteResources sprites(assets.image, sprite_catalog_layout(assets.version));
            const auto scripts = import_action_scripts(assets.image, assets.version);
            const auto creation = import_actor_creation_data(assets.image, assets.version);
            Oracle oracle(assets);
            unsigned cases = 0;
            for (unsigned sprite = 0; sprite < sprites.size(); ++sprite) {
                for (const bool prepared_wrapper : {false, true}) {
                    const auto slot = (sprite % 3) * 7;
                    const auto script = (sprite * 17) % scripts->size();
                    PreparedActorState prepared;
                    prepared.x = sprite % 3 == 0 ? 0xffff : sprite % 3 == 1 ? 0x8000 : sprite * 19;
                    prepared.y = sprite % 3 == 0 ? 0x8000 : sprite % 3 == 1 ? 0xffff : sprite * 23;
                    prepared.height = sprite * 113;
                    prepared.direction = prepared_wrapper ? sprite % 8 : 0;
                    prepared.phase_id = 1000 + sprite; // Host phase metadata is not the reference slot.
                    for (unsigned i = 0; i < prepared.variables.size(); ++i)
                        prepared.variables[i] = sprite * 29 + i * 0x2345;
                    const auto spec = make_actor_spec(sprite, script, prepared, sprites, *scripts);
                    const auto metadata = actor_creation_metadata(sprites, creation, sprite);
                    oracle.create(sprite, script, prepared, slot, prepared_wrapper);
                    try {
                        oracle.compare(spec, metadata, *scripts);
                    } catch (const std::exception &error) {
                        throw std::runtime_error(std::string(error.what()) +
                                                 " sprite=" + std::to_string(sprite) +
                                                 " prepared=" + std::to_string(prepared_wrapper));
                    }
                    ++cases;
                }
            }
            std::cout << "PASS " << assets.title << ": " << cases << " source/native creations across "
                      << sprites.size()
                      << " resources; prepared state, callbacks, initial projection and metadata match\n";
        }
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
