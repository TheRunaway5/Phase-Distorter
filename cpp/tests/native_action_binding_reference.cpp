// Test-only source oracle. The native binding library does not link this machine.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/action_bindings.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>

namespace {
using namespace eb::native;
struct Layout {
    unsigned slot, direction, moving, path, speed, surface, collision, screen_x, screen_y;
    unsigned x, xf, dx, dxf, variables, tile_x, tile_y;
};
constexpr Layout us{0x1a42, 0x2af6, 0x1a86, 0x2c5e, 0x2b32, 0x2baa, 0x289e, 0x0b16,
                    0x0b52, 0x0b8e, 0x0c42, 0x0cf6, 0x0daa, 0x0e5e, 0x4374, 0x4376};
constexpr Layout jp{0x1a38, 0x2ef4, 0x1a7c, 0x305c, 0x2f30, 0x2fa8, 0x2c9c, 0x0b0c,
                    0x0b48, 0x0b84, 0x0c38, 0x0cec, 0x0da0, 0x0e54, 0x46fa, 0x46fc};
int signed_word(unsigned value) { return value < 0x8000 ? int(value) : int(value) - 65536; }
struct Oracle {
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    Layout layout;
    explicit Oracle(const eb::GameAssets &assets)
        : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)), cpu(*bus),
          layout(assets.version == eb::GameVersion::JP ? jp : us) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    }
    unsigned get(unsigned at) const { return bus->work_ram[at] | unsigned(bus->work_ram[at + 1]) << 8; }
    void put(unsigned at, unsigned value) {
        bus->work_ram[at] = value;
        bus->work_ram[at + 1] = value >> 8;
    }
    void seed(const ActionActorState &actor, const ActorActionContext &context,
              const ActionSceneContext &scene) {
        cpu.emulation_mode = false;
        cpu.status_register = 0;
        cpu.data_bank = 0x7e;
        cpu.direct_page = 0x1e00;
        cpu.stack_pointer = 0x1fff;
        put(0x1e80, 0);
        put(0x1e82, 0xc3);
        put(0x1e88, 0);
        put(layout.slot, 0);
        put(layout.direction, context.direction);
        put(layout.moving, context.moving_direction);
        put(layout.path, context.path_state);
        put(layout.speed, context.movement_speed);
        put(layout.surface, context.surface_flags);
        put(layout.collision, context.collision_object);
        put(layout.screen_x, context.projected_x);
        put(layout.screen_y, context.projected_y);
        for (unsigned i = 0; i < 3; ++i) {
            put(layout.x + i * 60, actor.position[i] >> 16);
            put(layout.xf + i * 60, actor.position[i]);
            put(layout.dx + i * 60, actor.velocity[i] >> 16);
            put(layout.dxf + i * 60, actor.velocity[i]);
        }
        for (unsigned i = 0; i < 8; ++i)
            put(layout.variables + i * 60, actor.variables[i]);
        put(0x31, scene.camera_x);
        put(0x33, scene.camera_y);
        put(0x39, scene.overlay_camera_x);
        put(0x3b, scene.overlay_camera_y);
    }
    unsigned call(unsigned address, unsigned temporary, bool far) {
        const unsigned trampoline = (address & 0xff0000) | 0xff00;
        cpu.accumulator = temporary;
        cpu.x_index = 0;
        cpu.y_index = 0x8000;
        cpu.program_counter = trampoline;
        if (far)
            cpu.execute_instruction<0x22>(address, 4);
        else
            cpu.execute_instruction<0x20>(address & 0xffff, 3);
        unsigned steps = 0;
        while (cpu.program_counter != trampoline + (far ? 4 : 3) || cpu.stack_pointer != 0x1fff) {
            if (++steps > 1000000)
                throw std::runtime_error("Reference binding stuck: " + cpu.describe_registers());
            cpu.step_instruction();
        }
        return cpu.accumulator;
    }
    void compare(const ActionActorState &actor, const ActorActionContext &context,
                 const ActionSceneContext &scene, unsigned routine, unsigned seed) const {
        const auto check = [&](bool equal, const char *field) {
            if (!equal)
                throw std::runtime_error("Binding " + std::to_string(routine) +
                                         " seed=" + std::to_string(seed) + " differs: " + field);
        };
        check(context.direction == get(layout.direction), "direction");
        check(context.moving_direction == get(layout.moving), "moving direction");
        check(context.path_state == get(layout.path), "path state");
        check(context.movement_speed == get(layout.speed), "movement speed");
        check(context.surface_flags == get(layout.surface), "surface flags");
        check(context.collision_object == signed_word(get(layout.collision)), "collision");
        check(context.projected_x == signed_word(get(layout.screen_x)), "screen x");
        check(context.projected_y == signed_word(get(layout.screen_y)), "screen y");
        check(scene.camera_x == get(0x31) && scene.camera_y == get(0x33), "camera");
        for (unsigned i = 0; i < 3; ++i) {
            check(actor.position[i] == (get(layout.x + i * 60) << 16 | get(layout.xf + i * 60)), "position");
            check(actor.velocity[i] == (get(layout.dx + i * 60) << 16 | get(layout.dxf + i * 60)),
                  "velocity");
        }
        for (unsigned i = 0; i < 8; ++i)
            check(actor.variables[i] == get(layout.variables + i * 60), "actor variable");
    }
};
struct Case {
    ActionRequestKind kind;
    unsigned us, jp;
};
constexpr Case cases[]{
    {ActionRequestKind::CallEngine, 0xc46c45, 0xc449c9},
    {ActionRequestKind::CallEngine, 0xc46c87, 0xc44a0b},
    {ActionRequestKind::CallEngine, 0xc46b2d, 0xc448a9},
    {ActionRequestKind::CallEngine, 0xc46b37, 0xc448b3},
    {ActionRequestKind::CallEngine, 0xc0a65f, 0xc0a63e},
    {ActionRequestKind::CallEngine, 0xc0a651, 0xc0a630},
    {ActionRequestKind::CallEngine, 0xc0a673, 0xc0a652},
    {ActionRequestKind::CallEngine, 0xc0c682, 0xc0c664},
    {ActionRequestKind::CallEngine, 0xc0a685, 0xc0a664},
    {ActionRequestKind::CallEngine, 0xc0a68b, 0xc0a66a},
    {ActionRequestKind::CallEngine, 0xc0a691, 0xc0a670},
    {ActionRequestKind::CallEngine, 0xc0c83b, 0xc0c81d},
    {ActionRequestKind::CallEngine, 0xc0a679, 0xc0a658},
    {ActionRequestKind::CallEngine, 0xc0a6d1, 0xc0a6b0},
    {ActionRequestKind::CallEngine, 0xc0a82f, 0xc0a80e},
    {ActionRequestKind::CallEngine, 0xc0a6da, 0xc0a6b9},
    {ActionRequestKind::CallEngine, 0xc0a838, 0xc0a817},
    {ActionRequestKind::CallEngine, 0xc0a6b8, 0xc0a697},
    {ActionRequestKind::SetPhysicsCallback, 0xc09fc8, 0xc09fa7},
    {ActionRequestKind::SetPhysicsCallback, 0xc09fca, 0xc09fa9},
    {ActionRequestKind::SetPhysicsCallback, 0xc0a00c, 0xc09feb},
    {ActionRequestKind::SetPhysicsCallback, 0xc09ff0, 0xc09fcf},
    {ActionRequestKind::SetProjectionCallback, 0xc0a023, 0xc0a002},
    {ActionRequestKind::SetProjectionCallback, 0xc0a03a, 0xc0a019},
    {ActionRequestKind::SetProjectionCallback, 0xc0a0bb, 0xc0a09a},
    {ActionRequestKind::SetProjectionCallback, 0xc0a055, 0xc0a034},
    {ActionRequestKind::SetProjectionCallback, 0xc0a039, 0xc0a018},
    {ActionRequestKind::SetTickCallback, 0xc48be1, 0xc4622b},
    {ActionRequestKind::SetTickCallback, 0xc48c02, 0xc4624c},
    {ActionRequestKind::SetTickCallback, 0xc48c2b, 0xc46275},
    {ActionRequestKind::SetTickCallback, 0xc48c3e, 0xc46288},
};
void event_flags(Oracle &reference, eb::GameVersion version) {
    std::array<std::uint8_t, 128> flags{};
    ActionBindings bindings(version);
    const bool jp = version == eb::GameVersion::JP;
    const unsigned location = jp ? 0x9eb3 : 0x9c08;
    unsigned checked = 0;
    for (unsigned id = 1; id <= 1024; ++id)
        for (const unsigned temporary : {0u, 1u, 0x8000u})
            for (const bool writing : {false, true}) {
                for (unsigned i = 0; i < flags.size(); ++i)
                    flags[i] = std::uint8_t(i * 37 + id * 11 + temporary);
                ActionActorState actor;
                ActorActionContext context;
                ActionSceneContext scene;
                scene.event_flags = flags;
                const std::array<std::uint8_t, 2> operands{std::uint8_t(id), std::uint8_t(id >> 8)};
                const ActionScriptData data(operands, 0);
                const unsigned routine = writing ? (jp ? 0xc0a836 : 0xc0a857) : (jp ? 0xc0a82b : 0xc0a84c);
                const auto bound = bindings.compile({ActionRequestKind::CallEngine, 1, routine,
                                                     0, 0, std::uint16_t(temporary), 0}, data);
                reference.seed(actor, context, scene);
                // Script operands in writable fixture storage; production
                // imports operands from immutable authored content instead.
                reference.put(0x1e80, 0);
                reference.put(0x1e82, 0x7e);
                reference.put(0x8000, id);
                std::copy(flags.begin(), flags.end(), reference.bus->work_ram.begin() + location);
                const auto result = apply_action(bound, temporary, actor, context, scene);
                const auto returned = reference.call(routine, temporary, true);
                if (!result.handled || result.parameter_bytes != 2 || result.value != returned ||
                    !std::equal(flags.begin(), flags.end(), reference.bus->work_ram.begin() + location) ||
                    reference.get(0x1e94) != 0x8002)
                    throw std::runtime_error("Native flag wrapper differs at flag " + std::to_string(id));
                reference.compare(actor, context, scene, routine, id);
                ++checked;
            }
    std::cout << (jp ? "JP" : "US") << ": " << checked
              << " native/source flag wrapper calls; full shared flags, return and inline cursor match\n";
}
} // namespace
int main(int argc, char **argv) {
    try {
        if (argc < 2)
            throw std::runtime_error("native_action_binding_reference pack.ebpak ...");
        for (int arg = 1; arg < argc; ++arg) {
            auto assets = eb::load_game_assets(argv[arg], eb::asset_profiles());
            // A two-byte authored inline operand, separate from engine code.
            assets.image[0x38000] = 0xb6;
            assets.image[0x38001] = 0x91;
            const std::array<std::uint8_t, 2> operands{0xb6, 0x91};
            ActionScriptData data(operands, 0x38000);
            ActionBindings bindings(assets.version);
            Oracle reference(assets);
            unsigned checked = 0;
            for (const auto &test : cases) {
                const unsigned routine = assets.version == eb::GameVersion::JP ? test.jp : test.us;
                const unsigned identifier = test.kind == ActionRequestKind::SetPhysicsCallback ||
                                                    test.kind == ActionRequestKind::SetProjectionCallback
                                                ? routine & 0xffff
                                                : routine;
                const auto bound = bindings.compile({test.kind, 1, identifier, 0, 0, 0, 0x38000}, data);
                if (bound.operation == NativeAction::Unsupported)
                    throw std::runtime_error("Expected native binding missing");
                for (unsigned seed = 0; seed < 32; ++seed) {
                    ActionActorState actor;
                    ActorActionContext context;
                    ActionSceneContext scene;
                    actor.position = {0xffed8000u + seed * 0x18971u, 0x007fff80u - seed * 0x82345u,
                                      0x00468000u + seed * 0x39272u};
                    actor.velocity = {seed * 0x8000u - 0x40000u, seed * 0x1234u + 0x9876u,
                                      0xffffab00u - seed * 0x8001u};
                    actor.variables[0] = std::uint16_t(seed * 41 - 500);
                    actor.variables[1] = std::uint16_t(seed * 57 - 300);
                    actor.variables[6] = std::uint16_t(seed * 1739 - 7000);
                    actor.variables[7] = std::uint16_t(seed * 4583 + 0x7ff0);
                    context.direction = seed % 9;
                    context.moving_direction = (seed + 3) % 9;
                    context.path_state = std::array<unsigned, 5>{0, 1, 0x7fff, 0x8000, 0xffff}[seed % 5];
                    context.movement_speed = std::uint16_t(seed * 9273);
                    context.surface_flags = seed * 3;
                    context.collision_object = seed % 3 == 0 ? -1 : seed % 3 == 1 ? -32768 : int(seed);
                    context.projected_x = int(seed) - 16;
                    context.projected_y = int(seed) + 32;
                    scene.camera_x = seed * 343;
                    scene.camera_y = seed * 923;
                    scene.overlay_camera_x = seed * 221;
                    scene.overlay_camera_y = seed * 17;
                    const unsigned temporary =
                        bound.operation == NativeAction::MoveInDirection ? seed % 8 : seed * 1103;
                    reference.seed(actor, context, scene);
                    const auto result = apply_action(bound, temporary, actor, context, scene);
                    if (!result.handled)
                        throw std::runtime_error("Expected pure native operation unhandled");
                    if (test.kind == ActionRequestKind::SetPhysicsCallback)
                        run_actor_physics(actor, context);
                    else if (test.kind == ActionRequestKind::SetProjectionCallback)
                        run_actor_projection(actor, context, scene);
                    else if (test.kind == ActionRequestKind::SetTickCallback) {
                        // Hold source streaming bounds at the requested tile to
                        // isolate camera arithmetic from native map/NPC loading.
                        if (context.tick == ActorTickCallback::CenterCamera ||
                            context.tick == ActorTickCallback::CenterCameraOffset) {
                            const bool offset = context.tick == ActorTickCallback::CenterCameraOffset;
                            const int x = signed_word(std::uint16_t((actor.position[0] >> 16) +
                                                                    (offset ? actor.variables[0] : 0) - 128));
                            const int y = signed_word(std::uint16_t((actor.position[1] >> 16) +
                                                                    (offset ? actor.variables[1] : 0) - 112));
                            reference.put(reference.layout.tile_x, (x < 0 ? x - 7 : x) / 8);
                            reference.put(reference.layout.tile_y, (y < 0 ? y - 7 : y) / 8);
                        }
                        run_actor_tick_callback(actor, context, scene);
                    }
                    const bool far = test.kind == ActionRequestKind::CallEngine ||
                                     test.kind == ActionRequestKind::SetTickCallback;
                    const auto returned = reference.call(routine, temporary, far);
                    if (test.kind == ActionRequestKind::CallEngine && result.value != returned)
                        throw std::runtime_error("Native operation return value differs from source");
                    reference.compare(actor, context, scene, routine, seed);
                    ++checked;
                }
            }
            std::cout << (assets.version == eb::GameVersion::JP ? "JP" : "US") << ": " << checked
                      << " native/source actor operations and callbacks match\n";
            event_flags(reference, assets.version);
        }
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
