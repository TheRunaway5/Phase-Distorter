// Read-only runtime audit for generated instruction contracts, using GNU/LLD
// link-time wrappers. Build against the requested build tree's libeb_core.a and
// libeb_dsp.a and libeb_assets.a with both flags:
//   -Wl,--wrap=_ZN2eb12MainCpu6581624execute_opcode_semanticsEhjj
//   -Wl,--wrap=_ZN2eb14Spc700AudioCpu24execute_opcode_semanticsEhtj
// Usage: runtime_audit [frames=3600] [held_buttons=0] [input_script] [asset_pack]
// EB_ASSET_PACK can supply the imported pack instead of the final argument.
// This checks every actual helper call, including calls from interrupt paths.
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_audio_dsp.hpp"
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "generated_assets.hpp"
#include <cstdint>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <memory>
#include <sstream>
#include <stdexcept>
#include <unordered_set>
#include <vector>
std::uint64_t main_instruction_calls = 0, immediate_instruction_calls = 0, audio_instruction_calls = 0,
              observed_memory_writes = 0, attempted_code_writes = 0;
std::unordered_set<unsigned> main_instruction_sites, immediate_instruction_sites, audio_instruction_sites;
// Linker wrappers observe the same semantic helpers used by generated dispatch.
// Forwarding to __real__ preserves execution; counters report the route actually
// reached, not coverage of instruction sites that the route never visits.
extern "C" void __real__ZN2eb12MainCpu6581624execute_opcode_semanticsEhjj(eb::MainCpu65816*, unsigned char, unsigned,
                                                                          unsigned);
extern "C" void __wrap__ZN2eb12MainCpu6581624execute_opcode_semanticsEhjj(eb::MainCpu65816* main_cpu,
                                                                          unsigned char opcode, unsigned value,
                                                                          unsigned size) {
    ++main_instruction_calls;
    main_instruction_sites.insert(main_cpu->program_counter);
    unsigned flag = 0;
    // M controls accumulator immediates and X controls index immediates. Compare
    // the generated operand length against live status before the helper changes
    // CPU state; BRK/COP separately require their consumed signature byte.
    switch (opcode) {
    case 0x09:
    case 0x29:
    case 0x49:
    case 0x69:
    case 0x89:
    case 0xa9:
    case 0xc9:
    case 0xe9:
        flag = 0x20;
        break;
    case 0xa0:
    case 0xa2:
    case 0xc0:
    case 0xe0:
        flag = 0x10;
        break;
    }
    if (flag) {
        ++immediate_instruction_calls;
        immediate_instruction_sites.insert(main_cpu->program_counter);
        if (size != unsigned((main_cpu->status_register & flag) ? 2 : 3))
            throw std::runtime_error("Immediate source/runtime width mismatch " + main_cpu->describe_registers() +
                                     " source_length=" + std::to_string(size));
    }
    if ((opcode == 0x00 || opcode == 0x02) && size != 2)
        throw std::runtime_error("Interrupt instruction signature length mismatch " + main_cpu->describe_registers());
    __real__ZN2eb12MainCpu6581624execute_opcode_semanticsEhjj(main_cpu, opcode, value, size);
}
extern "C" void __real__ZN2eb14Spc700AudioCpu24execute_opcode_semanticsEhtj(eb::Spc700AudioCpu*, unsigned char,
                                                                            unsigned short, unsigned);
extern "C" void __wrap__ZN2eb14Spc700AudioCpu24execute_opcode_semanticsEhtj(eb::Spc700AudioCpu* audio_cpu,
                                                                            unsigned char opcode, unsigned short value,
                                                                            unsigned size) {
    ++audio_instruction_calls;
    audio_instruction_sites.insert(audio_cpu->program_counter);
    // Check all bytes at the executing SPC RAM site, not only its opcode. This
    // catches a stale operand or modified loaded program using a matching opcode.
    for (unsigned i = 0; i < size; ++i)
        if (audio_cpu->read_byte(audio_cpu->program_counter + i) !=
            (i == 0 ? opcode : ((value >> (8 * (i - 1))) & 255)))
            throw std::runtime_error("SPC loaded instruction/source mismatch " + audio_cpu->describe_registers());
    __real__ZN2eb14Spc700AudioCpu24execute_opcode_semanticsEhtj(audio_cpu, opcode, value, size);
}
int main(int argc, char** argv) {
    try {
        const char* asset_path = argc > 4 ? argv[4] : std::getenv("EB_ASSET_PACK");
        if (!asset_path)
            throw std::runtime_error("Set EB_ASSET_PACK or pass an imported asset pack as argument 4");
        const auto assets = eb::load_game_assets(asset_path, eb::asset_profiles());
        // Imported assets select their matching regional program before either CPU
        // is constructed. This audit never treats a zero-filled code template as ROM.
        auto hardware = std::make_unique<eb::SnesBus>(assets.image, assets.version);
        eb::Spc700AudioCpu audio_cpu(*hardware);
        eb::SnesAudioDsp audio_dsp(audio_cpu);
        eb::MainCpu65816 main_cpu(*hardware);
        main_cpu.reset_from_vector();
        const unsigned frames = argc > 1 ? std::stoul(argv[1]) : 3600;
        const auto held_buttons = argc > 2 ? std::stoul(argv[2], nullptr, 0) : 0;
        std::vector<std::pair<unsigned, unsigned>> input;
        if (argc > 3) {
            std::ifstream file(argv[3]);
            if (!file)
                throw std::runtime_error("Cannot read input script");
            std::string line;
            while (std::getline(file, line)) {
                std::istringstream stream(line.substr(0, line.find('#')));
                std::string frame, buttons;
                if (stream >> frame >> buttons)
                    input.emplace_back(std::stoul(frame), std::stoul(buttons, nullptr, 0));
            }
        }
        hardware->set_buttons(held_buttons);
        // Observe attempted writes into cartridge-mapped address space. The count is
        // diagnostic: it neither changes writes nor proves self-modifying code exists.
        main_cpu.observe_memory_write = [&](uint32_t address, uint8_t) {
            ++observed_memory_writes;
            unsigned bank = address >> 16;
            if (bank != 0x7e && bank != 0x7f && ((bank & 0x40) || (address & 65535) >= 32768))
                ++attempted_code_writes;
        };
        unsigned long long iterations = 0;
        std::size_t next_input = 0;
        while (hardware->completed_frames < frames && iterations++ < 1000000000ull) {
            while (next_input < input.size() && input[next_input].first <= hardware->completed_frames)
                hardware->set_buttons(input[next_input++].second);
            if (main_cpu.is_stopped)
                throw std::runtime_error("CPU stopped during audit");
            main_cpu.step_instruction();
            // Keep the DSP sample queue bounded during long headless audits. Draining
            // completed samples does not disable synthesis or advance clocks itself.
            if ((iterations & 65535) == 0)
                audio_dsp.take_stereo_samples();
        }
        std::cout << "frames=" << hardware->completed_frames << " instructions=" << main_cpu.instruction_count
                  << " calls=" << main_instruction_calls << " sites=" << main_instruction_sites.size()
                  << " immediate_calls=" << immediate_instruction_calls
                  << " immediate_sites=" << immediate_instruction_sites.size()
                  << " spc_calls=" << audio_instruction_calls << " spc_sites=" << audio_instruction_sites.size()
                  << " writes=" << observed_memory_writes << " attempted_rom_writes=" << attempted_code_writes << "\n"
                  << main_cpu.describe_registers() << "\n"
                  << audio_cpu.describe_registers() << "\n";
        return main_instruction_calls == main_cpu.instruction_count && hardware->completed_frames == frames ? 0 : 2;
    } catch (const std::exception& e) {
        std::cerr << e.what() << "\n";
        return 1;
    }
}
