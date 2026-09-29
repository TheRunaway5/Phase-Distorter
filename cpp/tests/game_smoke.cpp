// Bounded translated-game runner with frame-indexed controller input.
// Usage: game_smoke frames screenshot.ppm [frame:button_mask ...] [--interactive]
// Input uses the real controller path; no game-state memory is patched.
#include "eb/main_cpu_65816.hpp"
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
#include <string>
#include <utility>
#include <vector>

int main(int argc, char** argv) {
    if (argc < 3) {
        std::cerr << "Usage: game_smoke frames screenshot.ppm [frame:button_mask ...]\n";
        return 2;
    }
    const auto frame_limit = std::stoull(argv[1]);
    bool interactive = false;
    std::string asset_path = std::getenv("EB_ASSET_PACK") ? std::getenv("EB_ASSET_PACK") : "";
    std::vector<std::pair<uint64_t, uint16_t>> inputs;
    for (int i = 3; i < argc; ++i) {
        if (std::string(argv[i]) == "--interactive") {
            interactive = true;
            continue;
        }
        if (std::string(argv[i]) == "--assets" && i + 1 < argc) {
            asset_path = argv[++i];
            continue;
        }
        const std::string event = argv[i];
        const auto separator = event.find(':');
        if (separator == std::string::npos) {
            std::cerr << "Bad input event " << event << '\n';
            return 2;
        }
        inputs.emplace_back(std::stoull(event.substr(0, separator), nullptr, 0),
                            std::stoul(event.substr(separator + 1), nullptr, 0));
    }
    std::stable_sort(inputs.begin(), inputs.end());
    eb::GameAssets assets;
    try {
        if (asset_path.empty())
            throw std::runtime_error("Set EB_ASSET_PACK or pass --assets <imported.ebpak>");
        assets = eb::load_game_assets(asset_path, eb::asset_profiles());
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
    // The validated pack chooses both program dispatch and version-specific
    // hardware metadata. No initial game state is injected after reset.
    auto bus = std::make_unique<eb::SnesBus>(assets.image, assets.version);
    eb::Spc700AudioCpu spc(*bus);
    eb::SnesAudioDsp dsp(spc);
    eb::MainCpu65816 cpu(*bus);
    cpu.reset_from_vector();
    size_t event = 0;
    int status = 0;
    struct Trace {
        uint32_t pc;
        uint16_t a, x, y, s, d;
        uint8_t p, dbr;
    };
    std::array<Trace, 64> trace{};
    uint64_t trace_count = 0;
    const auto ram_word = [&](unsigned address) {
        return unsigned(bus->work_ram[address]) | (unsigned(bus->work_ram[address + 1]) << 8);
    };
    const auto capture = [&](const std::string& path) {
        std::ofstream output(path, std::ios::binary);
        output << "P6\n256 224\n255\n";
        for (const auto pixel : bus->native_framebuffer) {
            const char rgb[] = {char(pixel >> 16), char(pixel >> 8), char(pixel)};
            output.write(rgb, 3);
        }
        if (!output)
            throw std::runtime_error("Cannot write framebuffer");
        const auto leader = ram_word(0x5d78);
        std::cout << "frame=" << bus->completed_frames << " leader=" << leader;
        if (leader < 60)
            std::cout << " x=" << ram_word(0x0b8e + leader) << " y=" << ram_word(0x0bca + leader);
        // Inspect an isolated snapshot so even the CPU open-bus latch is untouched.
        auto snapshot = std::make_unique<eb::SnesBus>(*bus);
        std::cout << " joy1=" << std::hex
                  << (unsigned(snapshot->read_byte(0x4218)) | (unsigned(snapshot->read_byte(0x4219)) << 8))
                  << " pad_state=" << ram_word(0x65) << " pad_held=" << ram_word(0x69)
                  << " pad_press=" << ram_word(0x6d) << " window_tail=" << ram_word(0x88e2)
                  << " focus=" << ram_word(0x8958);
        if (leader < 60)
            std::cout << " callback_high=" << ram_word(0x10b6 + leader);
        std::cout << std::dec << " screenshot=" << path << '\n' << std::flush;
    };
    const auto run_to = [&](uint64_t limit) {
        while (bus->completed_frames < limit) {
            while (event < inputs.size() && inputs[event].first <= bus->completed_frames)
                bus->set_buttons(inputs[event++].second);
            const auto frame = bus->completed_frames;
            do {
                if (cpu.is_stopped)
                    throw std::runtime_error("main CPU stopped");
                trace[trace_count++ % trace.size()] = {cpu.program_counter, cpu.accumulator,   cpu.x_index,
                                                       cpu.y_index,         cpu.stack_pointer, cpu.direct_page,
                                                       cpu.status_register, cpu.data_bank};
                cpu.step_instruction();
            } while (bus->completed_frames == frame);
            dsp.take_stereo_samples();
            if (bus->completed_frames >= 12000 && bus->completed_frames % 60 == 0) {
                const auto leader = ram_word(0x5d78);
                if (leader < 60)
                    std::cout << "frame=" << bus->completed_frames << " leader=" << leader
                              << " x=" << ram_word(0x0b8e + leader) << " y=" << ram_word(0x0bca + leader)
                              << " direction=" << ram_word(0x5d76) << '\n';
            }
        }
    };
    try {
        run_to(frame_limit);
        if (interactive) {
            capture(argv[2]);
            std::cout << "Input: <frames> <joymask> <screenshot.ppm>, or quit\n" << std::flush;
            std::string line;
            while (std::getline(std::cin, line) && line != "quit") {
                std::istringstream input(line);
                std::string frames, buttons, path, extra;
                if (!(input >> frames >> buttons >> path) || (input >> extra)) {
                    std::cout << "Expected frames buttons screenshot\n" << std::flush;
                    continue;
                }
                const auto duration = std::stoull(frames, nullptr, 0), mask = std::stoull(buttons, nullptr, 0);
                if (duration > 36000 || mask > 65535) {
                    std::cout << "Frame/mask out of range\n" << std::flush;
                    continue;
                }
                bus->set_buttons(mask);
                run_to(bus->completed_frames + duration);
                capture(path);
            }
        }
    } catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        status = 1;
        const auto first = trace_count > trace.size() ? trace_count - trace.size() : 0;
        for (auto i = first; i < trace_count; ++i) {
            const auto& t = trace[i % trace.size()];
            std::cerr << std::hex << "PC=" << t.pc << " A=" << t.a << " X=" << t.x << " Y=" << t.y << " S=" << t.s
                      << " D=" << t.d << " P=" << unsigned(t.p) << " DB=" << unsigned(t.dbr) << '\n';
        }
        std::cerr << std::dec;
    }
    std::ofstream dump(std::string(argv[2]) + ".wram", std::ios::binary);
    dump.write(reinterpret_cast<const char*>(bus->work_ram.data()), bus->work_ram.size());
    std::ofstream save(std::string(argv[2]) + ".srm", std::ios::binary);
    save.write(reinterpret_cast<const char*>(bus->save_ram.data()), bus->save_ram.size());
    std::ofstream cgram(std::string(argv[2]) + ".cgram", std::ios::binary);
    cgram.write(reinterpret_cast<const char*>(bus->palette_ram.data()), bus->palette_ram.size());
    std::ofstream vram(std::string(argv[2]) + ".vram", std::ios::binary);
    vram.write(reinterpret_cast<const char*>(bus->video_ram.data()), bus->video_ram.size());
    std::ofstream oam(std::string(argv[2]) + ".oam", std::ios::binary);
    oam.write(reinterpret_cast<const char*>(bus->object_attributes.data()), bus->object_attributes.size());
    std::ofstream ppu(std::string(argv[2]) + ".ppu", std::ios::binary);
    ppu.write(reinterpret_cast<const char*>(bus->ppu_registers().data()), bus->ppu_registers().size());
    capture(argv[2]);
    std::cout << "frames=" << bus->completed_frames << " cpu_instructions=" << cpu.instruction_count
              << " spc_instructions=" << spc.instruction_count << " audio_frames=" << dsp.generated_stereo_frame_count()
              << '\n'
              << cpu.describe_registers() << '\n'
              << spc.describe_registers() << '\n';
    return status;
}
