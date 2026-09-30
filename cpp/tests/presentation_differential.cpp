// Opt-in, asset-backed proof that presentation never changes game execution.
// This is deliberately not a default CTest: it needs the user's imported pack.
#include "eb/frame_interpolator.hpp"
#include "eb/direct_scene.hpp"
#include "eb/game_debug.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/photosensitivity_filter.hpp"
#include "eb/snes_audio_dsp.hpp"
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <array>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <memory>
#include <sstream>
#include <stdexcept>
#include <string>
#include <tuple>
#include <vector>

namespace {
struct Input {
    uint64_t frame;
    uint16_t buttons;
};
// Preserve write order and origin, not just final RAM: two executions can end
// with identical memory despite different I/O side effects or event ordering.
struct Write {
    unsigned origin, address, value;
    bool operator==(const Write&) const = default;
};
std::vector<Input> read_inputs(const std::string& path) {
    std::vector<Input> result;
    if (path.empty())
        return result;
    std::ifstream input(path);
    if (!input)
        throw std::runtime_error("Cannot open input script: " + path);
    std::string line;
    while (std::getline(input, line)) {
        if (auto comment = line.find('#'); comment != std::string::npos)
            line.erase(comment);
        std::istringstream fields(line);
        std::string frame, mask, extra;
        if (!(fields >> frame))
            continue;
        if (!(fields >> mask) || fields >> extra)
            throw std::runtime_error("Expected frame and joymask in " + path);
        const auto f = std::stoull(frame, nullptr, 0), m = std::stoull(mask, nullptr, 0);
        if (m > 0xffff || (!result.empty() && f <= result.back().frame))
            throw std::runtime_error("Invalid input sequence in " + path);
        result.push_back({f, uint16_t(m)});
    }
    return result;
}
auto cpu_state(const eb::MainCpu65816& c) {
    return std::tie(c.program_counter, c.accumulator, c.x_index, c.y_index, c.status_register, c.stack_pointer,
                    c.direct_page, c.data_bank, c.emulation_mode, c.is_stopped, c.is_waiting, c.cycle_count,
                    c.instruction_count);
}
auto spc_state(const eb::Spc700AudioCpu& c) {
    return std::tie(c.program_counter, c.accumulator, c.x_index, c.y_index, c.stack_pointer, c.status_register,
                    c.is_stopped, c.is_sleeping, c.cycle_count, c.instruction_count);
}
void save(const std::string& path, std::span<const uint32_t> pixels, unsigned width) {
    if (path.empty())
        return;
    std::ofstream out(path, std::ios::binary);
    out << "P6\n" << width << " 224\n255\n";
    for (auto p : pixels) {
        const char rgb[] = {char(p >> 16), char(p >> 8), char(p)};
        out.write(rgb, 3);
    }
    if (!out)
        throw std::runtime_error("Cannot write " + path);
}
} // namespace
int main(int argc, char** argv) {
    try {
        std::string assets = std::getenv("EB_ASSET_PACK") ? std::getenv("EB_ASSET_PACK") : "", script, output, save_path;
        uint64_t frames = 1200;
        bool reduce_flashing = false, interpolate = false, direct = false, world_replay = false;
        unsigned scene_width = 398;
        for (int i = 1; i < argc; ++i) {
            const std::string arg = argv[i];
            if (arg == "--help") {
                std::cout << "presentation_differential --assets FILE [--frames N] [--input-script FILE] "
                             "[--output-prefix PATH] [--reduce-flashing] [--interpolate] [--direct-rendering] [--world-replay --save FILE --width N]\n";
                return 0;
            }
            if (arg == "--direct-rendering") { direct = true; continue; }
            if (arg == "--world-replay") { world_replay = direct = true; continue; }
            if (arg == "--interpolate") {
                interpolate = true;
                continue;
            }
            if (arg == "--reduce-flashing") {
                reduce_flashing = true;
                continue;
            }
            if (i + 1 == argc)
                throw std::runtime_error("Missing value for " + arg);
            const std::string value = argv[++i];
            if (arg == "--assets")
                assets = value;
            else if (arg == "--save") save_path = value;
            else if (arg == "--width") scene_width = std::stoul(value);
            else if (arg == "--frames")
                frames = std::stoull(value, nullptr, 0);
            else if (arg == "--input-script")
                script = value;
            else if (arg == "--output-prefix")
                output = value;
            else
                throw std::runtime_error("Unknown option: " + arg);
        }
        if (assets.empty())
            throw std::runtime_error("Pass --assets FILE or set EB_ASSET_PACK");
        const auto game = eb::load_game_assets(assets, eb::asset_profiles());
        auto native = std::make_unique<eb::SnesBus>(game.image, game.version),
             wide = std::make_unique<eb::SnesBus>(game.image, game.version);
        if (!save_path.empty()) {
            std::ifstream save_input(save_path, std::ios::binary);
            save_input.read(reinterpret_cast<char*>(native->save_ram.data()), native->save_ram.size());
            if (!save_input) throw std::runtime_error("Cannot read complete save RAM");
            wide->save_ram = native->save_ram;
        }
        eb::Spc700AudioCpu sa(*native), sb(*wide);
        eb::SnesAudioDsp da(sa), db(sb);
        eb::MainCpu65816 ca(*native), cb(*wide);
        ca.reset_from_vector();
        cb.reset_from_vector();
        wide->set_presentation_width(world_replay ? scene_width : 400);
        wide->set_direct_rendering_enabled(direct);
        if (world_replay) {
            native->set_presentation_width(scene_width);
            ca.set_gameplay_timing(true); cb.set_gameplay_timing(true);
        }
        eb::GameDebug native_debug(*native, ca);
        // The regular frontend always owns this controller. With all switches
        // off, even its loaded-game/main-loop processing must preserve state.
        eb::GameDebug disabled_debug(*wide, cb);
        eb::PhotosensitivityFilter filter;
        eb::FrameInterpolator interpolator;
        uint64_t generated_frames = 0, direct_frames = 0, moving_frames = 0;
        eb::DirectSceneMotion scene_motion;
        std::span<const uint32_t> filtered_picture = wide->presentation_pixels();
        unsigned filtered_width = wide->presentation_width();
        uint64_t effect_frames = 0, effect_pixels = 0, changed_pixels = 0;
        if (reduce_flashing || interpolate || direct) {
            wide->set_presentation_effects_enabled(reduce_flashing);
            // Filter every completed game frame at its hardware boundary,
            // including multiple boundaries crossed by one CPU/DMA operation.
            // The other instance has neither metadata nor an observer enabled.
            wide->on_presentation_frame = [&](std::span<const uint32_t> pixels, unsigned width, uint64_t frame) {
                const auto mask = wide->presentation_effect_mask();
                filtered_picture =
                    filter.apply(pixels, int(width), 224, reduce_flashing, mask, wide->presentation_effect_reference());
                filtered_width = width;
                const auto marked = std::count_if(mask.begin(), mask.end(), [](uint8_t value) { return value != 0; });
                effect_frames += marked != 0;
                effect_pixels += marked;
                for (std::size_t i = 0; i < pixels.size(); ++i)
                    changed_pixels += filtered_picture[i] != pixels[i];
                if (direct) {
                    scene_motion.submit(wide->direct_scene());
                    if (wide->direct_scene()) {
                        ++direct_frames;
                        bool moving = false;
                        for (double fraction : {0., .2, .4, .6, .8, 1.}) {
                            const auto& scene = scene_motion.sample(fraction);
                            for (const auto offset : scene.offsets) moving |= offset.x != 0 || offset.y != 0;
                            const auto rebuilt = eb::rasterize_direct_scene(scene);
                            if (fraction == 1. && !std::equal(rebuilt.begin(), rebuilt.end(), pixels.begin()))
                                throw std::runtime_error("Direct source endpoint differs from canonical frame");
                            ++generated_frames;
                        }
                        moving_frames += moving;
                    }
                }
                if (interpolate) {
                    interpolator.submit(filtered_picture, width, 224, frame, wide->presentation_fixed_aspect(), true);
                    for (double fraction : {.0, .2, .4, .6, .8}) {
                        if (interpolator.sample(fraction).size() != pixels.size())
                            throw std::runtime_error("Generated frame size changed");
                        ++generated_frames;
                    }
                }
            };
        }
        std::vector<Write> wa, wb;
        ca.observe_memory_write = [&](uint32_t a, uint8_t v) { wa.push_back({0, a, v}); };
        cb.observe_memory_write = [&](uint32_t a, uint8_t v) { wb.push_back({0, a, v}); };
        sa.observe_memory_write = [&](uint16_t a, uint8_t v) { wa.push_back({1, a, v}); };
        sb.observe_memory_write = [&](uint16_t a, uint8_t v) { wb.push_back({1, a, v}); };
        const auto inputs = read_inputs(script);
        size_t input = 0;
        uint64_t writes = 0;
        const auto require = [&](bool good, const char* what) {
            if (!good)
                throw std::runtime_error(std::string(what) + " at frame " + std::to_string(native->completed_frames) +
                                         " CPU step " + std::to_string(ca.instruction_count) + " " +
                                         ca.describe_registers());
        };
        uint64_t last_input_frame = ~uint64_t(0), phase_start = 0;
        unsigned world_phase = 0;
        while (native->completed_frames < frames) {
            if (world_replay && last_input_frame != native->completed_frames) {
                const auto f = last_input_frame = native->completed_frames;
                unsigned buttons = 0;
                if (world_phase == 0) {
                    buttons = f > 600 && f % 60 < 5 ? 0x1080 : 0;
                    if (native_debug.snapshot().ready) { world_phase = 1; phase_start = f; }
                } else if (world_phase == 1 && f >= phase_start + 180) {
                    native_debug.configure({true,true,true,true}); disabled_debug.configure({true,true,true,true});
                    native_debug.request({eb::GameDebugRequest::Kind::Teleport,2,{}});
                    disabled_debug.request({eb::GameDebugRequest::Kind::Teleport,2,{}});
                    world_phase = 2; phase_start = f;
                } else if (world_phase == 2) {
                    buttons = native_debug.snapshot().status.starts_with("Waiting") && f % 30 < 5 ? 0x80 : 0;
                    if (f > phase_start + 300 && !native_debug.snapshot().busy) { world_phase = 3; phase_start = f; }
                } else if (world_phase == 3) {
                    // Cross both edges, diagonals, stops and direction changes.
                    constexpr unsigned walk[] = {0x100,0x200,0x900,0x600,0};
                    buttons = walk[((f - phase_start) / 180) % 5];
                }
                native->set_buttons(buttons); wide->set_buttons(buttons);
            }
            while (input < inputs.size() && inputs[input].frame <= native->completed_frames) {
                native->set_buttons(inputs[input].buttons);
                wide->set_buttons(inputs[input++].buttons);
            }
            const auto frame = native->completed_frames;
            require(!ca.is_stopped, "Main CPU stopped");
            if (world_replay) native_debug.before_step();
            ca.step_instruction();
            disabled_debug.before_step();
            cb.step_instruction();
            require(cpu_state(ca) == cpu_state(cb), "CPU architectural state diverged");
            require(spc_state(sa) == spc_state(sb), "SPC architectural state diverged");
            require(wa == wb, "Ordered CPU/SPC write callbacks diverged");
            writes += wa.size();
            wa.clear();
            wb.clear();
            if (native->completed_frames == frame)
                continue;
            require(native->completed_frames == wide->completed_frames &&
                        native->master_clocks() == wide->master_clocks() &&
                        native->scanline_index() == wide->scanline_index() &&
                        native->scanline_clock() == wide->scanline_clock(),
                    "Hardware clocks diverged");
            require(native->work_ram == wide->work_ram, "WRAM/entity state diverged");
            require(native->save_ram == wide->save_ram, "Save RAM diverged");
            require(native->video_ram == wide->video_ram && native->palette_ram == wide->palette_ram &&
                        native->object_attributes == wide->object_attributes,
                    "PPU memory diverged");
            require(std::equal(native->ppu_registers().begin(), native->ppu_registers().end(),
                               wide->ppu_registers().begin()),
                    "PPU registers diverged");
            require(native->audio_to_main_ports == wide->audio_to_main_ports &&
                        native->main_to_audio_ports == wide->main_to_audio_ports,
                    "APU ports diverged");
            require(sa.audio_ram == sb.audio_ram && sa.dsp_registers == sb.dsp_registers, "SPC/DSP memory diverged");
            for (unsigned reg = 0; reg < 128; ++reg)
                require(da.read_register(reg) == db.read_register(reg), "DSP registers diverged");
            require(da.take_stereo_samples() == db.take_stereo_samples() &&
                        da.generated_stereo_frame_count() == db.generated_stereo_frame_count(),
                    "Audio samples diverged");
            require(native->native_framebuffer == wide->native_framebuffer, "Native framebuffer diverged");
            // Presentation may intentionally shift scenery within an authored
            // boundary; only the native framebuffer is a simulation contract.
            if (!world_replay && native->completed_frames % 150 == 0 && native->completed_frames < frames) {
                constexpr std::array<unsigned, 6> widths = {400, 800, 1024, 256, 672, 398};
                wide->set_presentation_width(widths[(native->completed_frames / 150) % widths.size()]);
            }
            if (native->completed_frames % 1200 == 0)
                std::cout << "verified frame " << native->completed_frames << '\n' << std::flush;
        }
        if (world_replay && (direct_frames < 60 || moving_frames < 60))
            throw std::runtime_error("Replay did not exercise at least 60 moving direct scenes");
        if (!output.empty()) {
            save(output + "-native.ppm", native->native_framebuffer, 256);
            save(output + "-wide.ppm", reduce_flashing ? filtered_picture : wide->presentation_pixels(),
                 reduce_flashing ? filtered_width : wide->presentation_width());
        }
        std::cout << "PASS game=" << game.title << " frames=" << native->completed_frames
                  << " CPUsteps=" << ca.instruction_count << " SPCsteps=" << sa.instruction_count
                  << " ordered_writes=" << writes << " audio_frames=" << da.generated_stereo_frame_count();
        if (direct) std::cout << " direct_frames=" << direct_frames << " moving_frames=" << moving_frames;
        if (interpolate || direct)
            std::cout << " generated_frames=" << generated_frames;
        if (reduce_flashing)
            std::cout << " filtered_effect_frames=" << effect_frames << " masked_pixels=" << effect_pixels
                      << " changed_pixels=" << changed_pixels;
        std::cout << "; presentation preserves CPU/SPC state, all game/entity/PPU memory, clocks, writes, audio, "
                     "native pixels\n";
    } catch (const std::exception& e) {
        std::cerr << "FAIL: " << e.what() << '\n';
        return 1;
    }
}
