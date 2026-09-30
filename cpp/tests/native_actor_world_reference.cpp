// Test-only oracle for the complete source scheduler. No reference machinery is
// linked into the native world. Source scenery streaming/drawing is held steady
// so this test measures script/callback/physics/projection ordering directly.
#include "eb/native/actor_world.hpp"
#include "eb/main_cpu_65816.hpp"
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
    unsigned run, first, next, script, script_index, next_script, cursor, bank, sleep, stack, temporary;
    unsigned tick_low, tick_high, physics, projection, draw;
    unsigned position, fraction, velocity, velocity_fraction, variables, screen_x, screen_y, animation, priority;
    unsigned move_planar, move_spatial, move_stationary, project_world, project_height, project_absolute,
        project_none, tick_offset, tick_camera, tick_none, map_x, map_y;
};
constexpr Layout us{0xc09466, 0x0a50, 0x0a9e, 0x0a62, 0x0ada, 0x125a, 0x13fe, 0x148a,
                    0x1372, 0x12e6, 0x1516, 0x107a, 0x10b6, 0x121e, 0x11a6, 0x0a5e,
                    0x0b8e, 0x0c42, 0x0cf6, 0x0daa, 0x0e5e, 0x0b16, 0x0b52, 0x10f2, 0x103e,
                    0x9fc8, 0xa00c, 0x9ff0, 0xa023, 0xa03a, 0xa0bb, 0xa039,
                    0xc48c02, 0xc48c3e, 0xc0943b, 0x4374, 0x4376};
constexpr Layout jp{0xc09445, 0x0a46, 0x0a94, 0x0a58, 0x0ad0, 0x1250, 0x13f4, 0x1480,
                    0x1368, 0x12dc, 0x150c, 0x1070, 0x10ac, 0x1214, 0x119c, 0x0a54,
                    0x0b84, 0x0c38, 0x0cec, 0x0da0, 0x0e54, 0x0b0c, 0x0b48, 0x10e8, 0x1034,
                    0x9fa7, 0x9feb, 0x9fcf, 0xa002, 0xa019, 0xa09a, 0xa018,
                    0xc4624c, 0xc46288, 0xc0941a, 0x46fa, 0x46fc};
int signed_word(unsigned value) { return value < 0x8000 ? int(value) : int(value) - 65536; }
struct Oracle {
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    Layout layout;
    Oracle(const eb::GameAssets &assets)
        : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)), cpu(*bus),
          layout(assets.version == eb::GameVersion::JP ? jp : us) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode = false;
        cpu.status_register = 0;
        cpu.data_bank = 0x7e;
        cpu.direct_page = 0x1e00;
        cpu.stack_pointer = 0x1fff;
        put(layout.first, 0);
        // The source still performs both entity traversals; this near RTS only
        // omits the final display-list publication, outside scheduler semantics.
        put(layout.draw, layout.project_none);
    }
    void put(unsigned at, unsigned value) { bus->work_ram[at] = value; bus->work_ram[at + 1] = value >> 8; }
    unsigned get(unsigned at) const { return bus->work_ram[at] | unsigned(bus->work_ram[at + 1]) << 8; }
    void seed(unsigned slot, const WorldActorSpec &spec, unsigned count, unsigned script_at) {
        const unsigned index = slot * 2;
        put(layout.next + index, slot + 1 == count ? 0xffff : index + 2);
        put(layout.script + index, 0);
        put(layout.script_index + index, index);
        put(layout.next_script + index, 0xffff);
        put(layout.cursor + index, script_at);
        put(layout.bank + index, (script_at + 0xc00000) >> 16);
        put(layout.sleep + index, 0);
        put(layout.stack + index, 0);
        put(layout.temporary + index, 0);
        const auto &actor = spec.action;
        const auto &context = spec.behavior;
        for (unsigned axis = 0; axis < 3; ++axis) {
            put(layout.position + axis * 60 + index, actor.position[axis] >> 16);
            put(layout.fraction + axis * 60 + index, actor.position[axis]);
            put(layout.velocity + axis * 60 + index, actor.velocity[axis] >> 16);
            put(layout.velocity_fraction + axis * 60 + index, actor.velocity[axis]);
        }
        for (unsigned v = 0; v < 8; ++v) put(layout.variables + v * 60 + index, actor.variables[v]);
        put(layout.animation + index, actor.animation);
        put(layout.priority + index, actor.priority);
        put(layout.screen_x + index, context.projected_x);
        put(layout.screen_y + index, context.projected_y);
        put(layout.physics + index, context.physics == ActorPhysics::Spatial ? layout.move_spatial :
                                    context.physics == ActorPhysics::Stationary ? layout.move_stationary : layout.move_planar);
        put(layout.projection + index, context.projection == ActorProjection::WorldHeight ? layout.project_height :
                                       context.projection == ActorProjection::Absolute ? layout.project_absolute :
                                       context.projection == ActorProjection::Unchanged ? layout.project_none : layout.project_world);
        put(layout.tick_low + index, tick(context));
        put(layout.tick_high + index, tick(context) >> 16);
    }
    unsigned tick(const ActorActionContext &context) const {
        return context.tick == ActorTickCallback::CenterCameraOffset ? layout.tick_camera :
               context.tick == ActorTickCallback::ProjectOffset ? layout.tick_offset : layout.tick_none;
    }
    void controls(unsigned slot, const WorldActor &actor) {
        put(layout.tick_high + slot * 2, (tick(actor.behavior) >> 16) |
            (actor.scripts_and_physics_enabled ? 0 : 0x4000) | (actor.tick_callback_enabled ? 0 : 0x8000));
    }
    void run() {
        cpu.program_counter = 0xc0ff00;
        cpu.execute_instruction<0x22>(layout.run, 4);
        unsigned steps = 0;
        while (cpu.program_counter != 0xc0ff04 || cpu.stack_pointer != 0x1fff) {
            if (++steps > 1000000) throw std::runtime_error("Source scheduler stuck: " + cpu.describe_registers());
            cpu.step_instruction();
        }
    }
    void compare(unsigned slot, const WorldActor &native, unsigned frame) const {
        const auto fail = [&](const char *field) {
            throw std::runtime_error("Native world frame=" + std::to_string(frame) + " actor=" +
                                     std::to_string(slot) + " differs: " + field);
        };
        const unsigned index = slot * 2;
        const auto &actor = native.action();
        for (unsigned axis = 0; axis < 3; ++axis) {
            if (actor.position[axis] != (get(layout.position + axis * 60 + index) << 16 |
                                          get(layout.fraction + axis * 60 + index))) fail("position");
            if (actor.velocity[axis] != (get(layout.velocity + axis * 60 + index) << 16 |
                                          get(layout.velocity_fraction + axis * 60 + index))) fail("velocity");
        }
        for (unsigned v = 0; v < 8; ++v)
            if (actor.variables[v] != get(layout.variables + v * 60 + index)) fail("script variable");
        if (native.behavior.projected_x != signed_word(get(layout.screen_x + index)) ||
            native.behavior.projected_y != signed_word(get(layout.screen_y + index))) fail("projection");
        if (actor.animation != get(layout.animation + index) || actor.priority != get(layout.priority + index))
            fail("appearance state");
    }
};

void pause_request_reference(eb::GameAssets assets, bool clear_callback) {
    const auto layout = assets.version == eb::GameVersion::JP ? jp : us;
    // Write the current actor's pause control while its scripts are running.
    // The source handles this without yielding; native execution explicitly
    // suspends at the world service boundary, then must preserve that ordering.
    std::vector<std::uint8_t> bytes{0x15, std::uint8_t(layout.tick_high),
                                    std::uint8_t(layout.tick_high >> 8), 0xc0, 0x40,
                                    0x14, 0, 2, 1, 0};
    if (clear_callback) bytes.push_back(0x0f);
    bytes.insert(bytes.end(), {0x06, 1, 0x09});
    const unsigned second = 0x38000 + bytes.size();
    bytes.insert(bytes.end(), {0x14, 0, 2, 1, 0, 0x06, 1, 0x09});
    std::copy(bytes.begin(), bytes.end(), assets.image.begin() + 0x38000);
    auto scripts = std::make_shared<ActionScriptData>(bytes, 0x38000,
                                                     std::vector<std::uint32_t>{0x38000, second});
    auto sprites = std::make_shared<SpriteResources>(assets.image, sprite_catalog_layout(assets.version));
    ActorWorld native(sprites, scripts, assets.version);
    Oracle reference(assets);
    std::array<ActorId, 2> ids;
    for (unsigned slot = 0; slot < 2; ++slot) {
        WorldActorSpec spec;
        spec.script = slot;
        spec.sprite = 1;
        spec.action.velocity[0] = 65536;
        ids[slot] = native.create(spec);
        reference.seed(slot, spec, 2, slot ? second : 0x38000);
    }
    if (native.advance_tick() != WorldTickResult::NeedsEngine || native.request()->actor != ids[0] ||
        native.request()->action.kind != ActionRequestKind::WriteGameWord ||
        native.request()->diagnostic.authored_identifier != layout.tick_high)
        throw std::runtime_error("Pause fixture missed the explicit native world request");
    native.actor(ids[0]).scripts_and_physics_enabled = false;
    native.respond();
    if (native.advance_tick() != WorldTickResult::Complete)
        throw std::runtime_error("Pause fixture did not finish the interrupted world tick");
    reference.run();
    for (unsigned slot = 0; slot < 2; ++slot) reference.compare(slot, native.actor(ids[slot]), 0);
    const unsigned high = reference.get(layout.tick_high);
    if (native.actor(ids[0]).scripts_and_physics_enabled != !(high & 0x4000) ||
        native.actor(ids[0]).tick_callback_enabled != !(high & 0x8000))
        throw std::runtime_error("Callback clear did not restore source pause controls");
}
} // namespace
int main(int argc, char **argv) {
    try {
        if (argc < 2) throw std::runtime_error("native_actor_world_reference pack.ebpak ...");
        for (int arg = 1; arg < argc; ++arg) {
            auto assets = eb::load_game_assets(argv[arg], eb::asset_profiles());
            // Authored commands only: increment variable0, sleep one tick, loop.
            const std::vector<std::uint8_t> bytes{0x14, 0, 2, 1, 0, 0x06, 1, 0x19, 0, 0x80};
            std::copy(bytes.begin(), bytes.end(), assets.image.begin() + 0x38000);
            auto scripts = std::make_shared<ActionScriptData>(bytes, 0x38000, std::vector<std::uint32_t>{0x38000});
            auto sprites = std::make_shared<SpriteResources>(assets.image, sprite_catalog_layout(assets.version));
            ActorWorld native(sprites, scripts, assets.version);
            Oracle reference(assets);
            std::array<ActorId, 4> ids;
            for (unsigned slot = 0; slot < ids.size(); ++slot) {
                WorldActorSpec spec;
                spec.sprite = 1;
                spec.action.position = {(700 + slot * 100) * 65536u + 0x8123,
                                        (1500 + slot * 50) * 65536u + 0x4765, 0x48000};
                spec.action.velocity = {0x18000 + slot * 0x1100, 0xffff8100 + slot * 0x321, 0x4f00};
                spec.action.variables[0] = 10 + slot * 3;
                spec.action.variables[1] = 20 + slot * 7;
                spec.action.animation = 0;
                spec.action.priority = 1;
                spec.behavior.tick = slot == 2 ? ActorTickCallback::CenterCameraOffset :
                                     slot == 3 ? ActorTickCallback::None : ActorTickCallback::ProjectOffset;
                spec.behavior.physics = slot == 1 ? ActorPhysics::Spatial :
                                        slot == 3 ? ActorPhysics::Stationary : ActorPhysics::Planar;
                spec.behavior.projection = slot == 0 ? ActorProjection::Unchanged :
                                           slot == 1 ? ActorProjection::WorldHeight :
                                           slot == 3 ? ActorProjection::Absolute : ActorProjection::World;
                ids[slot] = native.create(spec);
                reference.seed(slot, spec, ids.size(), 0x38000);
            }
            constexpr unsigned frames = 120;
            for (unsigned frame = 0; frame < frames; ++frame) {
                for (unsigned slot = 0; slot < ids.size(); ++slot) {
                    auto &actor = native.actor(ids[slot]);
                    actor.scripts_and_physics_enabled = slot == 2 || (frame + slot) % 7 >= 2;
                    actor.tick_callback_enabled = slot == 2 || (frame + slot) % 5 != 1;
                    reference.controls(slot, actor);
                }
                // Match the map streaming cursor to the camera callback's next
                // target. The actual source callback still updates the camera
                // before the separate movement/projection pass runs.
                const auto &camera = native.actor(ids[2]).action();
                const auto x = std::uint16_t((camera.position[0] >> 16) + camera.variables[0] + 1 - 128);
                const auto y = std::uint16_t((camera.position[1] >> 16) + camera.variables[1] - 112);
                reference.put(reference.layout.map_x, signed_word(x) / 8);
                reference.put(reference.layout.map_y, signed_word(y) / 8);
                if (native.advance_tick() != WorldTickResult::NeedsCameraRefresh)
                    throw std::runtime_error("Native scheduler missed its camera refresh boundary");
                // As in the source fixture above, scenery/activation is held
                // steady; the scene boundary must still occur before physics.
                native.respond_camera_refresh();
                if (native.advance_tick() != WorldTickResult::Complete)
                    throw std::runtime_error("Pure native world required an engine fallback");
                reference.run();
                for (unsigned slot = 0; slot < ids.size(); ++slot) reference.compare(slot, native.actor(ids[slot]), frame);
                if (native.scene().camera_x != reference.get(0x31) || native.scene().camera_y != reference.get(0x33))
                    throw std::runtime_error("Native world camera differs from source scheduler");
            }
            pause_request_reference(assets, false);
            pause_request_reference(assets, true);
            std::cout << "PASS " << assets.title << " full source scheduler ticks=" << frames
                      << " actors=4, staged camera/motion/projection, pause flags and 2 mid-tick pause/clear cases\n";
        }
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
