// Optional source oracle only. Native appearance services never link this
// processor/bus or reproduce its graphics-storage allocation.
#include "eb/main_cpu_65816.hpp"
#include "eb/native/appearance_service.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <iostream>
#include <memory>
#include <stdexcept>

namespace {
using namespace eb::native;
unsigned word(std::span<const std::uint8_t> bytes, unsigned at) {
    return bytes[at] | unsigned(bytes[at + 1]) << 8;
}
unsigned pointer(std::span<const std::uint8_t> bytes, unsigned at) {
    return word(bytes, at) | unsigned(bytes[at + 2]) << 16;
}
void require(bool ok, const char *message) {
    if (!ok)
        throw std::runtime_error(message);
}
struct Layout {
    unsigned initial, animation_select, first_visible, second_visible, visible, walk_four, step_eight,
        graphics_low, graphics_high, graphics_bank, direction, vram, byte_width, tile_height, surface,
        displayed, animation, style, fingerprint, move_counter, current_slot, var2, var3, var7, swirl,
        footsteps_owner, footsteps_override, footsteps_id, transitions, teleport, intangible, map_high,
        play_sound, shape, screen_x, screen_y;
};
constexpr Layout us{0xc0a4bf, 0xc0a480, 0xc0a4a8, 0xc0a4b2, 0xc0c711, 0xc0a443, 0xc0a6e3, 0x29ca, 0x2a06,
                    0x2a42,   0x2af6,   0x298e,   0x2a7e,   0x2aba,   0x2baa,   0x341a,   0x10f2, 0x2c22,
                    0x3456,   0x2890,   0x1a42,   0x0ed6,   0x0f12,   0x1002,   0x5d60,   0x2898, 0x289c,
                    0x289a,   0xb4b6,   0x9f3f,   0x5d58,   0x116a,   0xc0abe0, 0x2b6e,   0x0b16, 0x0b52};
constexpr Layout jp{0xc0a49e, 0xc0a45f, 0xc0a487, 0xc0a491, 0xc0c6f3, 0xc0a422, 0xc0a6c2, 0x2dc8, 0x2e04,
                    0x2e40,   0x2ef4,   0x2d8c,   0x2e7c,   0x2eb8,   0x2fa8,   0x1ab8,   0x10e8, 0x3020,
                    0x1af4,   0x2c8e,   0x1a38,   0x0ecc,   0x0f08,   0x0ff8,   0x60e6,   0x2c96, 0x2c9a,
                    0x2c98,   0xb68a,   0xa141,   0x60de,   0x1160,   0xc0abbf, 0x2f6c,   0x0b0c, 0x0b48};
struct Oracle {
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    Layout l;
    unsigned offset{}, frame_table{};
    std::vector<std::uint16_t> sounds;
    explicit Oracle(const eb::GameAssets &assets)
        : bus(std::make_unique<eb::SnesBus>(assets.image, assets.version)), cpu(*bus),
          l(assets.version == eb::GameVersion::JP ? jp : us) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode = false;
        cpu.status_register = eb::MainCpu65816::InterruptDisable;
        cpu.data_bank = 0x7e;
        cpu.direct_page = 0x1e00;
        cpu.stack_pointer = 0x1fff;
        bus->work_ram[0x0d] = 0x80;
    }
    void put(unsigned at, unsigned value) {
        bus->work_ram[at] = value;
        bus->work_ram[at + 1] = value >> 8;
    }
    unsigned get(unsigned at) const { return word(bus->work_ram, at); }
    void configure(const eb::GameAssets &assets, unsigned sprite, unsigned slot,
                   unsigned destination = 0x4000) {
        const auto layout = sprite_catalog_layout(assets.version);
        const auto base = pointer(assets.image, layout.groups + sprite * 4) - 0xc00000;
        offset = slot * 2;
        frame_table = base + 9;
        put(0x1e88, offset);
        put(l.current_slot, slot);
        put(l.graphics_low + offset, frame_table);
        put(l.graphics_high + offset, (frame_table + 0xc00000) >> 16);
        put(l.graphics_bank + offset, assets.image[base + 8]);
        put(l.tile_height + offset, assets.image[base]);
        put(l.byte_width + offset, assets.image[base + 1] * 2);
        put(l.vram + offset, destination);
        put(l.fingerprint + offset, 0xffff);
        put(l.map_high + offset, 0x7e);
        put(l.displayed + offset, 0xffff);
    }
    void inputs(const ActionActorState &actor, const ActorActionContext &action,
                const AppearanceActorContext &appearance, const AppearanceSceneContext &scene) {
        put(l.direction + offset, action.direction);
        put(l.surface + offset, action.surface_flags);
        put(l.screen_x + offset, action.projected_x);
        put(l.screen_y + offset, action.projected_y);
        put(l.shape + offset, appearance.shape);
        put(l.style + offset, appearance.walking_style);
        put(l.animation + offset, actor.animation);
        put(l.var2 + offset, actor.variables[2]);
        put(l.var3 + offset, actor.variables[3]);
        put(l.var7 + offset, actor.variables[7]);
        put(l.move_counter, scene.movement_counter);
        put(l.swirl, scene.battle_swirl_ticks);
        put(l.intangible, scene.intangibility_ticks);
        put(l.teleport, scene.teleport_destination);
        put(l.footsteps_owner, appearance.footstep_owner ? offset : offset + 2);
        put(l.footsteps_id, scene.footstep_kind * 2);
        put(l.footsteps_override, scene.footstep_override.value_or(0) * 2);
        put(l.transitions, scene.transitions_disabled);
    }
    unsigned address(NativeAction operation) const {
        switch (operation) {
        case NativeAction::SelectFourInitial:
            return l.initial;
        case NativeAction::SelectFourAnimation:
            return l.animation_select;
        case NativeAction::SelectFourFirst:
            return l.first_visible;
        case NativeAction::SelectFourSecond:
            return l.second_visible;
        case NativeAction::CheckAppearanceVisible:
            return l.visible;
        case NativeAction::StepFourWalk:
            return l.walk_four;
        case NativeAction::StepEightAnimation:
            return l.step_eight;
        default:
            throw std::runtime_error("Invalid reference appearance operation");
        }
    }
    unsigned call(NativeAction operation) {
        constexpr unsigned trampoline = 0xc0ff00;
        cpu.program_counter = trampoline;
        cpu.accumulator = 0x1234; // None of these authored operations reads it.
        cpu.x_index = offset;
        cpu.y_index = offset;
        cpu.execute_instruction<0x22>(address(operation), 4);
        unsigned steps = 0;
        sounds.clear();
        while (cpu.program_counter != trampoline + 4 || cpu.stack_pointer != 0x1fff) {
            if (++steps > 1000000)
                throw std::runtime_error("Appearance-service reference failed to return: " +
                                         cpu.describe_registers());
            if (cpu.program_counter == l.play_sound) {
                sounds.push_back(cpu.accumulator);
                cpu.execute_instruction<0x6b>(0, 1);
            } else {
                cpu.step_instruction();
            }
        }
        return cpu.accumulator;
    }
    void compare(const AppearanceServiceResult &result, unsigned returned, const SpriteAppearance &appearance,
                 const ActionActorState &actor, const eb::GameAssets &assets) {
        require(result.handled, "Native appearance service did not handle bound operation");
        if (result.script_value && *result.script_value != returned)
            throw std::runtime_error("Native appearance service script return differs: native=" +
                                     std::to_string(*result.script_value) +
                                     " source=" + std::to_string(returned));
        require(sounds ==
                    (result.sound ? std::vector<std::uint16_t>{*result.sound} : std::vector<std::uint16_t>{}),
                "Native appearance sound intents differ from source");
        require(appearance.fingerprint() == get(l.fingerprint + offset), "Appearance fingerprint differs");
        require(actor.animation == get(l.animation + offset) && actor.variables[2] == get(l.var2 + offset) &&
                    actor.variables[7] == get(l.var7 + offset),
                "Appearance animation state differs");
        require(appearance.flashing_hidden() == bool(get(l.map_high + offset) & 0x8000),
                "Appearance flashing state differs");
        if (appearance.displayed() && appearance.displayed()->surface == SpriteSurface::Normal)
            require(get(l.displayed + offset) ==
                        word(assets.image, frame_table + appearance.displayed()->pose * 2),
                    "Appearance service latched a different frame");
    }
};
} // namespace

int main(int argc, char **argv) {
    try {
        if (argc < 2)
            throw std::runtime_error("native_appearance_service_reference pack.ebpak ...");
        for (int argument = 1; argument < argc; ++argument) {
            const auto assets = eb::load_game_assets(argv[argument], eb::asset_profiles());
            auto resources =
                std::make_shared<SpriteResources>(assets.image, sprite_catalog_layout(assets.version));
            const auto data = import_appearance_data(assets.image, assets.version);
            Oracle oracle(assets);
            unsigned gate_cases = 0, service_cases = 0, sound_cases = 0, exact_returns = 0,
                     absent_returns = 0;
            for (unsigned slot : {0u, 7u, 29u}) {
                oracle.configure(assets, 1, slot);
                for (unsigned shape = 0; shape < data.shape_extents.size(); ++shape) {
                    const int left = data.shape_extents[shape].left, top = data.shape_extents[shape].top;
                    for (int x : {-65536 + left, -256, -1, 0, left - 1, left, 255, 256, left + 255,
                                  left + 256, 65536 + left})
                        for (int y : {-65536 + top, -256, -9, -8, -1, 0, top - 1, top, 223, 224, 247, 248,
                                      255, 65536 + top}) {
                            oracle.put(oracle.l.shape + oracle.offset, shape);
                            oracle.put(oracle.l.screen_x + oracle.offset, x);
                            oracle.put(oracle.l.screen_y + oracle.offset, y);
                            require(oracle.call(NativeAction::CheckAppearanceVisible) ==
                                        (appearance_refresh_visible(data, shape, x, y) ? 0xffff : 0),
                                    "Authored appearance visibility gate differs");
                            ++gate_cases;
                        }
                }
            }
            for (unsigned slot : {0u, 7u, 29u}) {
                oracle.configure(assets, 1, slot);
                SpriteAppearance appearance(resources, 1);
                ActionActorState actor;
                actor.animation = 0;
                ActorActionContext action;
                AppearanceActorContext context{resources->definition(1).shape, std::uint16_t(slot), 0, true};
                AppearanceSceneContext scene;
                const auto execute = [&](NativeAction operation) {
                    oracle.inputs(actor, action, context, scene);
                    const auto returned = oracle.call(operation);
                    const auto result =
                        apply_appearance_action({operation}, actor, action, context, scene, data, appearance);
                    try {
                        oracle.compare(result, returned, appearance, actor, assets);
                    } catch (const std::exception &error) {
                        throw std::runtime_error(
                            std::string(error.what()) + " operation=" + std::to_string(unsigned(operation)) +
                            " call=" + std::to_string(service_cases) + " slot=" + std::to_string(slot));
                    }
                    ++service_cases;
                    exact_returns += result.script_value.has_value();
                    absent_returns += !result.script_value.has_value();
                    sound_cases += result.sound.has_value();
                };
                for (unsigned direction = 0; direction < 8; ++direction) {
                    action.direction = direction;
                    for (unsigned phase : {0u, 1u, 0xffffu}) {
                        actor.animation = phase;
                        for (unsigned surface : {0u, 8u, 12u}) {
                            action.surface_flags = surface;
                            execute(NativeAction::SelectFourInitial);
                            execute(NativeAction::SelectFourAnimation);
                            for (int x : {-1, 128, 400}) {
                                action.projected_x = x;
                                action.projected_y = 128;
                                execute(NativeAction::SelectFourFirst);
                                execute(NativeAction::SelectFourSecond);
                            }
                        }
                    }
                }
                actor.animation = 0;
                for (unsigned tick = 0; tick < 96; ++tick) {
                    scene.movement_counter = std::uint16_t(65500 + tick);
                    action.direction = (tick / 12) % 8;
                    context.walking_style = (tick / 31) * 0x101;
                    execute(NativeAction::StepFourWalk);
                }
                actor.variables[2] = 1;
                actor.variables[3] = 2;
                for (unsigned tick = 0; tick < 640; ++tick) {
                    action.direction = (tick / 53) % 8;
                    action.surface_flags = tick % 5 ? 0 : 12;
                    context.walking_style = (tick / 149) * 0x101;
                    context.footstep_owner = tick % 3 != 0;
                    scene.battle_swirl_ticks = tick % 17 == 0;
                    scene.teleport_destination = tick % 13 == 0 ? 3 : 0;
                    scene.intangibility_ticks = tick % 4 ? 0 : std::uint16_t(tick % 61);
                    scene.footstep_kind = (tick / 11) % 10;
                    scene.footstep_override =
                        tick % 7 ? std::optional<unsigned>{} : std::optional<unsigned>{5};
                    scene.transitions_disabled = tick % 19 == 0;
                    actor.variables[7] = tick % 29 == 0 ? 0x8000 : tick % 31 == 0 ? 0x2000 : 0;
                    if (tick % 23 == 0)
                        actor.variables[2] = 0;
                    execute(NativeAction::StepEightAnimation);
                }
            }
            std::cout << "PASS " << assets.title << ": " << gate_cases << " visibility predicates, "
                      << service_cases << " appearance calls, " << exact_returns << " exact script returns, "
                      << absent_returns << " explicit transport returns, " << sound_cases
                      << " sound intents match source\n";
        }
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
