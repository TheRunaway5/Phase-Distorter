// Explicit local-asset integration probe for the native resource cutover.
// This is not a gameplay/pixel parity assertion: service work no longer has
// the old instruction count. The source/host observer oracle remains separate.
#include "eb/asset_store.hpp"
#include "eb/direct_scene.hpp"
#include "eb/game_debug.hpp"
#include "eb/input_replay.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_audio_dsp.hpp"
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"

#include <algorithm>
#include <array>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <limits>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
void require(bool value, const std::string &message) {
    if (!value)
        throw std::runtime_error(message);
}
void write_picture(const std::string &prefix, const eb::SnesBus &bus) {
    if (prefix.empty())
        return;
    const auto path = prefix + "-" + std::to_string(bus.completed_frames) + ".ppm";
    if (const auto parent = std::filesystem::path(path).parent_path(); !parent.empty())
        std::filesystem::create_directories(parent);
    std::ofstream out(path, std::ios::binary);
    require(bool(out), "Cannot create diagnostic image");
    const auto pixels = bus.presentation_pixels();
    out << "P6\n" << bus.presentation_width() << " 224\n255\n";
    for (const auto pixel : pixels) {
        const std::array<char, 3> rgb{char(pixel >> 16), char(pixel >> 8), char(pixel)};
        out.write(rgb.data(), rgb.size());
    }
    require(bool(out), "Cannot write diagnostic image");
}
// Render-only ownership proof derived from a real live native actor. Moving
// this retained artwork into the margins does not activate an offscreen actor.
unsigned native_margin_proof(const eb::SnesBus &bus, unsigned width) {
    const auto original = bus.scene_read_view();
    std::optional<eb::OverworldSpriteRuntime::Snapshot> actor;
    for (unsigned slot = 0; slot < 60; slot += 2) {
        const auto candidate = bus.native_sprite_runtime()->snapshot(slot);
        if (candidate && candidate->image && !bus.native_sprite_runtime()->custom_descriptor(slot) &&
            std::any_of(candidate->image->indices.begin(), candidate->image->indices.end(),
                        [](auto p) { return p; })) {
            actor = candidate;
            break;
        }
    }
    if (!actor)
        return 0;
    std::array<std::uint8_t, 0x20000> ram;
    std::copy(original.work_ram.begin(), original.work_ram.end(), ram.begin());
    const auto &profile = original.source_profile;
    ram[profile.wram_first_entity] = ram[profile.wram_first_entity + 1] = 0xff;
    ram[profile.wram_battle_mode_flag] = ram[profile.wram_battle_mode_flag + 1] = 0;
    const bool jp = bus.game_version() == eb::GameVersion::JP;
    std::fill_n(ram.begin() + (jp ? 0x4a04 : 0x467e), 0x380, 0xa5);
    std::fill_n(ram.begin() + (jp ? 0x4d86 : 0x4a00), 88, 0xa5);
    std::array<std::uint8_t, 64> registers;
    std::copy(original.ppu_registers.begin(), original.ppu_registers.end(), registers.begin());
    registers[0] = 15;
    registers[6] = 0;
    registers[0x2c] = 16;
    registers[0x2d] = registers[0x2e] = registers[0x2f] = 0;
    registers[0x30] = registers[0x31] = 0;
    std::array<std::uint8_t, 544> objects{};
    for (unsigned i = 0; i < 128; ++i)
        objects[i * 4 + 1] = 224;
    std::array<std::uint8_t, 512> palette{};
    for (unsigned color = 129; color < 256; ++color) {
        const unsigned value = ((color & 15) + 1) | (31 << 5) | (15 << 10);
        palette[color * 2] = value;
        palette[color * 2 + 1] = value >> 8;
    }
    std::array<std::uint32_t, 256 * 224> native;
    native.fill(0xff000000);
    std::array<std::uint8_t, 65536> poisoned;
    std::copy(original.video_ram.begin(), original.video_ram.end(), poisoned.begin());
    std::fill(poisoned.begin() + 0x8000, poisoned.begin() + 0xac00, 0);
    struct Picture {
        std::vector<std::uint32_t> pixels;
        std::shared_ptr<const eb::DirectSceneFrame> direct;
        unsigned parts{};
    };
    const auto render = [&](bool poison, unsigned edge, bool enqueue) {
        auto view = original;
        view.work_ram = ram;
        view.ppu_registers = registers;
        view.palette_ram = palette;
        view.object_attributes = objects;
        view.native_framebuffer = native;
        view.tile_rows = nullptr;
        view.host_sprites = nullptr;
        if (poison)
            view.video_ram = poisoned;
        eb::GameSceneRenderer renderer;
        view.object_scene = &renderer;
        renderer.set_presentation_width(view, width);
        renderer.enable_direct_rendering(true);
        renderer.begin_sprite_frame(1);
        if (enqueue) {
            const int left = edge ? 258 : -2 - int(actor->image->width);
            renderer.queue_native_sprite(view, actor->image, actor->id, actor->creation.sprite.palette,
                                         left - actor->image->left, 81 - actor->image->top, 0, 1);
        }
        renderer.seal_sprite_frame(view);
        renderer.capture_oam_upload(view, 1);
        for (unsigned row = 0; row < 224; ++row) {
            renderer.begin_scanline(view, row);
            renderer.render_presentation_margins(view, row);
            renderer.capture_direct_scanline(view, row);
        }
        const auto pixels = renderer.presentation_pixels(native);
        return Picture{{pixels.begin(), pixels.end()},
                       renderer.direct_scene(),
                       unsigned(renderer.native_sprite_part_count())};
    };
    unsigned proved = 0;
    const unsigned margin = (width - 256) / 2;
    for (unsigned edge = 0; edge < 2; ++edge) {
        const auto clean = render(false, edge, true), poison = render(true, edge, true);
        const auto absent = render(true, edge, false);
        if (!clean.direct || !poison.direct || clean.pixels.size() != width * 224)
            continue;
        unsigned visible = 0;
        bool wholly_in_margin = true;
        for (unsigned y = 0; y < 224; ++y)
            for (unsigned x = 0; x < width; ++x)
                if (clean.pixels[y * width + x] != 0xff000000) {
                    wholly_in_margin &= edge ? x >= margin + 256 : x < margin;
                    ++visible;
                }
        if (!visible || !wholly_in_margin)
            continue;
        require(clean.parts && clean.pixels == poison.pixels && clean.pixels != absent.pixels,
                "Native margin artwork is absent or depends on original graphics storage");
        const auto direct = eb::rasterize_direct_scene({clean.direct, {}});
        const auto direct_poison = eb::rasterize_direct_scene({poison.direct, {}});
        require(direct == clean.pixels && direct_poison == direct,
                "Native direct atlas does not preserve poisoned margin pixels");
        bool owned_quad = false;
        for (const auto &quad : poison.direct->quads)
            owned_quad |=
                quad.object && quad.motion < poison.direct->motions.size() &&
                poison.direct->motions[quad.motion].identity == ((std::uint64_t{1} << 63) | actor->id);
        require(owned_quad, "Margin direct atlas has no retained native resource identity");
        proved |= 1u << edge;
    }
    return proved;
}
void run(const eb::GameAssets &assets, unsigned frames, unsigned width, bool guard_pools,
         const std::string &prefix, bool world_replay, const std::string &save_path,
         const std::string &input_path) {
    auto hardware = std::make_unique<eb::SnesBus>(assets.image, assets.version);
    auto &bus = *hardware;
    eb::Spc700AudioCpu apu(bus);
    eb::SnesAudioDsp dsp(apu);
    eb::MainCpu65816 cpu(bus);
    eb::GameDebug debug(bus, cpu);
    bus.set_logical_clock_policy(eb::LogicalClockPolicy::ActorFrames);
    bus.enable_native_sprite_runtime(true, true);
    bus.set_presentation_width(width);
    bus.set_direct_rendering_enabled(true);
    cpu.reset_from_vector();
    cpu.set_gameplay_timing(true);
    const auto read_save = [&] {
        std::ifstream input(save_path, std::ios::binary | std::ios::ate);
        require(bool(input) && input.tellg() == std::streamoff(bus.save_ram.size()),
                "save file must contain exactly one complete save RAM image");
        std::vector<std::uint8_t> bytes(bus.save_ram.size());
        input.seekg(0);
        input.read(reinterpret_cast<char *>(bytes.data()), bytes.size());
        require(bool(input), "Cannot read save file " + save_path);
        return bytes;
    };
    std::vector<std::uint8_t> original_save;
    if (world_replay) {
        original_save = read_save();
        std::copy(original_save.begin(), original_save.end(), bus.save_ram.begin());
    }
    eb::InputReplay bootstrap(eb::input_script(input_path));
    unsigned world_phase = 0, margin_proof = 0;
    std::uint64_t phase_start = 0, direct_native_frames = 0, live_margin_frames[2]{};
    std::array<unsigned, 5> walking_frames{}, moving_frames{};
    const auto position = [&] {
        const auto &party = eb::source_profile(assets.version).party_state;
        const auto word = [&](unsigned at) {
            return unsigned(bus.work_ram[at]) | unsigned(bus.work_ram[at + 1]) << 8;
        };
        return std::array<unsigned, 2>{word(party.leader_x), word(party.leader_y)};
    };
    const bool jp = assets.version == eb::GameVersion::JP;
    const unsigned maps = jp ? 0x4a04 : 0x467e, blocks = jp ? 0x4d86 : 0x4a00;
    bool pools_armed = false;
    std::uint64_t native_frames = 0, image_frames = 0, rendered_frames = 0, changed_frames = 0, steps = 0;
    std::vector<std::uint32_t> previous;
    auto pool = [&](unsigned at) {
        return (at >= maps && at < maps + 0x380) || (at >= blocks && at < blocks + 88);
    };
    auto access = [&](unsigned at, std::uint8_t value, const char *operation) {
        if (pools_armed && pool(at))
            throw std::runtime_error(std::string("Native cutover ") + operation + " legacy pool at " +
                                     std::to_string(at) + " frame=" + std::to_string(bus.completed_frames) +
                                     " " + cpu.describe_registers());
        return value;
    };
    const auto install_pool_guards = [&] {
        if (!guard_pools)
            return;
        // GameDebug configure installs its own filters. Preserve them under
        // the pool traps rather than silently losing either behavior.
        const auto read_filter = bus.debug_read_wram, write_filter = bus.debug_write_wram;
        bus.debug_read_wram = [&, read_filter](unsigned at, std::uint8_t value) {
            access(at, value, "read");
            return read_filter ? read_filter(at, value) : value;
        };
        bus.debug_write_wram = [&, write_filter](unsigned at, std::uint8_t value) {
            access(at, value, "wrote");
            return write_filter ? write_filter(at, value) : value;
        };
    };
    install_pool_guards();
    while (bus.completed_frames < frames) {
        const auto before = bus.completed_frames;
        const auto before_position = position();
        unsigned walking_segment = 5;
        std::uint16_t buttons = 0;
        if (world_replay) {
            const auto state = debug.snapshot();
            if (world_phase == 0) {
                buttons = input_path.empty() ? (before > 600 && before % 60 < 5 ? 0x1080 : 0)
                                             : bootstrap.buttons_for_frame(before);
                if (state.ready) {
                    world_phase = 1;
                    phase_start = before;
                }
            } else if (world_phase == 1 && before >= phase_start + 180) {
                debug.configure({true, true, true, true});
                install_pool_guards();
                debug.request({eb::GameDebugRequest::Kind::Teleport, 2, {}});
                world_phase = 2;
                phase_start = before;
            } else if (world_phase == 2) {
                buttons = state.status.starts_with("Waiting") && before % 30 < 5 ? 0x80 : 0;
                if (before > phase_start + 300 && !state.busy) {
                    const auto destinations = eb::debug_destinations();
                    const auto target = std::find_if(destinations.begin(), destinations.end(),
                                                     [](auto value) { return value.id == 2; });
                    require(target != destinations.end() &&
                                state.status == std::string("Teleported to ") + target->name + "." &&
                                before_position == std::array<unsigned, 2>{target->x, target->y},
                            "Twoson teleport did not complete at its authored coordinates");
                    world_phase = 3;
                    phase_start = before;
                    std::cout << "Twoson walking begins at frame=" << before << '\n' << std::flush;
                }
            } else if (world_phase == 3) {
                constexpr std::uint16_t walk[]{0x100, 0x200, 0x900, 0x600, 0};
                walking_segment = ((before - phase_start) / 180) % 5;
                buttons = walk[walking_segment];
                ++walking_frames[walking_segment];
            }
        }
        bus.set_buttons(buttons);
        do {
            require(!cpu.is_stopped, "CPU stopped in native resource replay");
            try {
                if (world_replay)
                    debug.before_step();
                steps += cpu.advance_gameplay(std::numeric_limits<unsigned>::max());
            } catch (const std::exception &error) {
                write_picture(prefix + "-failure", bus);
                throw std::runtime_error(std::string(error.what()) +
                                         " frame=" + std::to_string(bus.completed_frames) + " " +
                                         cpu.describe_registers());
            }
            require(steps < 1000000000ull, "Native resource replay exceeded instruction budget");
        } while (bus.completed_frames == before);
        if (walking_segment < 5) {
            const auto after = position();
            const int dx = int((after[0] - before_position[0] + 32768) & 65535) - 32768;
            const int dy = int((after[1] - before_position[1] + 32768) & 65535) - 32768;
            const bool moved[]{dx > 0, dx < 0, dx > 0 && dy < 0, dx < 0 && dy > 0, dx == 0 && dy == 0};
            moving_frames[walking_segment] += moved[walking_segment];
        }
        if (world_phase == 3) {
            const auto direct = bus.direct_scene();
            bool native_draw = false, in_margin[2]{};
            if (direct)
                for (const auto &quad : direct->quads)
                    if (quad.object && quad.motion < direct->motions.size() &&
                        (direct->motions[quad.motion].identity >> 63)) {
                        bool visible = false;
                        for (unsigned y = 0; y < quad.height; ++y)
                            for (unsigned x = 0; x < quad.width; ++x)
                                if (quad.x + x >= 0 && quad.x + x < direct->width && quad.y + y >= 0 &&
                                    quad.y + y < 224 &&
                                    (direct->atlas.at((quad.v + y) * direct->atlas_width + quad.u + x) >>
                                     24)) {
                                    visible = true;
                                    const unsigned margin = (direct->width - 256) / 2;
                                    in_margin[0] |= quad.x + x < margin;
                                    in_margin[1] |= quad.x + x >= margin + 256;
                                }
                        native_draw |= visible;
                    }
            direct_native_frames += native_draw;
            live_margin_frames[0] += in_margin[0];
            live_margin_frames[1] += in_margin[1];
            if (native_draw && margin_proof != 3) {
                margin_proof |= native_margin_proof(bus, width);
                if (margin_proof == 3)
                    std::cout << "Both native margins/direct atlas resist poisoned graphics at frame="
                              << bus.completed_frames << '\n'
                              << std::flush;
            }
        }
        unsigned live = 0, images = 0;
        for (unsigned slot = 0; slot < 60; slot += 2)
            if (const auto actor = bus.native_sprite_runtime()->snapshot(slot)) {
                ++live;
                images += bool(actor->image);
            }
        native_frames += live > 0;
        image_frames += images > 0;
        rendered_frames += bus.scene_read_view().object_scene->native_sprite_part_count() > 0;
        if (guard_pools && live && !pools_armed) {
            // Startup may initialize the entire WRAM. After the first native
            // binding these arenas must remain unused even across scene resets.
            std::fill_n(bus.work_ram.begin() + maps, 0x380, 0xa5);
            std::fill_n(bus.work_ram.begin() + blocks, 88, 0xa5);
            pools_armed = true;
        }
        const auto pixels = bus.presentation_pixels();
        changed_frames += !std::equal(previous.begin(), previous.end(), pixels.begin(), pixels.end());
        previous.assign(pixels.begin(), pixels.end());
        dsp.take_stereo_samples();
        if (bus.completed_frames % 500 == 0 || bus.completed_frames >= frames) {
            const auto counts = bus.native_sprite_runtime()->diagnostics();
            const auto effects = bus.native_sprite_effects()->diagnostics();
            std::cout << (jp ? "JP" : "US") << " frame=" << bus.completed_frames << " live=" << live
                      << " images=" << images << " native_frames=" << native_frames
                      << " image_frames=" << image_frames << " rendered_frames=" << rendered_frames
                      << " changed_frames=" << changed_frames << " creations=" << counts.creations
                      << " selections=" << counts.selections << " releases=" << counts.releases
                      << " bypassed_graphics=" << counts.graphics_allocations_bypassed
                      << " bypassed_maps=" << counts.map_allocations_bypassed
                      << " effect_seeds=" << effects.seeds << " effect_uploads=" << effects.uploads
                      << " steps=" << steps << '\n'
                      << std::flush;
            write_picture(prefix, bus);
        }
    }
    if (world_replay) {
        require(original_save == read_save(), "Source save file changed during read-only Twoson replay");
        require(world_phase == 3 && std::all_of(walking_frames.begin(), walking_frames.end(),
                                                [](auto n) { return n >= 179; }),
                "Twoson route did not complete both directions, diagonals and stop");
        require(std::all_of(moving_frames.begin(), moving_frames.end(), [](auto n) { return n >= 30; }),
                "Twoson inputs did not produce both directions, diagonals and a stop");
        require(direct_native_frames >= 30 && margin_proof == 3,
                "Twoson route lacks native direct artwork or both margin ownership proofs");
    }
    require(native_frames && image_frames && rendered_frames, "Replay never drew native actor artwork");
    const auto counts = bus.native_sprite_runtime()->diagnostics();
    require(counts.creations && counts.selections && counts.graphics_allocations_bypassed &&
                counts.map_allocations_bypassed && counts.map_builds_bypassed && !counts.unsupported_services,
            "Replay did not complete native allocation/appearance service replacement");
    require(changed_frames > frames / 20, "Replay did not produce sustained changing pictures");
    require(dsp.generated_stereo_frame_count() > frames * 400ull, "Replay did not keep producing audio");
    std::cout << "Native sprite runtime smoke passed (not semantic parity): " << (jp ? "JP" : "US")
              << " frames=" << bus.completed_frames << " poisoned_pools=" << pools_armed;
    if (world_replay) {
        std::cout << " route=Twoson direct_native_frames=" << direct_native_frames
                  << " margin_proof=" << margin_proof << " live_margin_frames=" << live_margin_frames[0]
                  << ',' << live_margin_frames[1] << " movement_frames=";
        for (auto count : moving_frames)
            std::cout << count << ',';
    }
    std::cout << '\n';
}
} // namespace
int main(int argc, char **argv) {
    try {
        unsigned frames = 9000, width = 522;
        std::string pack, prefix, save_path, input_path;
        bool guard_pools = true, world_replay = false;
        for (int i = 1; i < argc; ++i) {
            const std::string arg = argv[i];
            if (arg == "--frames" && i + 1 < argc)
                frames = std::stoul(argv[++i]);
            else if (arg == "--width" && i + 1 < argc)
                width = std::stoul(argv[++i]);
            else if (arg == "--output-prefix" && i + 1 < argc)
                prefix = argv[++i];
            else if (arg == "--world-replay")
                world_replay = true;
            else if (arg == "--save" && i + 1 < argc)
                save_path = argv[++i];
            else if (arg == "--input-script" && i + 1 < argc)
                input_path = argv[++i];
            else if (arg == "--no-pool-guard")
                guard_pools = false;
            else if (pack.empty() && !arg.starts_with("--"))
                pack = arg;
            else
                throw std::invalid_argument("Unexpected native sprite smoke argument: " + arg);
        }
        require(!pack.empty() && frames > 0 && width >= 256 && width <= 1024 && !(width & 1),
                "native_sprite_runtime_smoke pack.ebpak [--frames N] [--width W] [--output-prefix PATH]");
        require(world_replay ? !save_path.empty() && frames >= 3000 && width >= 320
                             : save_path.empty() && input_path.empty(),
                "--world-replay requires --save FILE, at least 3000 frames, and width >=320; "
                "optional --input-script FILE bootstraps a new-game save image");
        run(eb::load_game_assets(pack, eb::asset_profiles()), frames, width, guard_pools, prefix,
            world_replay, save_path, input_path);
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
