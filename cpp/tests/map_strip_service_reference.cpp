// Actual map loaders retain SBRK and queued/immediate COPY_TO_VRAM. Only the
// native tile preparation loop differs. Dynamic loaded-cache changes are input.
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <array>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>

namespace {
std::string context;
void require(bool ok, const std::string &message) {
    if (!ok)
        throw std::runtime_error(message + ": " + context);
}
struct Fixture {
    std::unique_ptr<eb::SnesBus> hardware;
    eb::SnesBus &bus;
    eb::MainCpu65816 cpu;
    bool jp;
    Fixture(const eb::GameAssets &assets, bool native)
        : hardware(std::make_unique<eb::SnesBus>(assets.image, assets.version)), bus(*hardware), cpu(bus),
          jp(assets.version == eb::GameVersion::JP) {
        if (native)
            bus.enable_native_sprite_runtime(true);
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
    }
    void put(unsigned at, unsigned value) {
        bus.work_ram.at(at) = value;
        bus.work_ram.at(at + 1) = value >> 8;
    }
    void seed(unsigned a, unsigned x, unsigned phase, bool queued, bool photograph) {
        bus.work_ram.fill(0);
        bus.video_ram.fill(0xa5);
        bus.work_ram[0x0d] = queued ? 15 : 0x80;
        put(0xa1, 0x5000);
        put(0xa3, 0x5000);
        put(jp ? 0xb6b8 : 0xb4ef, photograph);
        // Loaded blocks and all four descriptor flag fields change between
        // calls; this cannot pass by reading only immutable authored artwork.
        for (unsigned i = 0; i < 256; ++i)
            put(0xf000 + i * 2, (i * 37 + phase * 173) & 1023);
        for (unsigned i = 0; i < 16384; ++i)
            put(0x18000 + i * 2, ((i * 73 + phase * 257) & 1023) | ((i * 3072 + phase * 1024) & 0xfc00));
        for (unsigned i = 0; i < 256; ++i)
            bus.work_ram[0x5000 + i] = std::uint8_t(i ^ 0x5a);
        cpu.emulation_mode = false;
        cpu.status_register = phase & 1 ? 0xc7 : 0;
        cpu.data_bank = 0x7e;
        cpu.direct_page = 0x1e00;
        cpu.stack_pointer = 0x1fff;
        cpu.accumulator = a;
        cpu.x_index = x;
        cpu.y_index = 0x9876;
    }
    std::uint64_t call(bool row) {
        const unsigned entry = row ? (jp ? 0xc00e28 : 0xc00e16) : (jp ? 0xc00fdd : 0xc00fcb);
        cpu.program_counter = 0xc0ff00;
        cpu.execute_instruction<0x20>(entry & 0xffff, 3);
        const auto before = cpu.instruction_count;
        for (unsigned steps = 0; steps < 20000; ++steps) {
            if (cpu.program_counter == 0xc0ff03 && cpu.stack_pointer == 0x1fff)
                return cpu.instruction_count - before;
            cpu.step_instruction();
        }
        throw std::runtime_error("Map strip loader failed to return: " + cpu.describe_registers());
    }
};
void compare(const Fixture &source, const Fixture &native) {
    require(source.cpu.describe_registers() == native.cpu.describe_registers(),
            "Map strip return registers differ: " + source.cpu.describe_registers() + " / " +
                native.cpu.describe_registers());
    for (unsigned at = 0; at < source.bus.work_ram.size(); ++at)
        if (source.bus.work_ram[at] != native.bus.work_ram[at])
            throw std::runtime_error("Map strip memory differs at " + std::to_string(at) +
                                     " values=" + std::to_string(source.bus.work_ram[at]) + "/" +
                                     std::to_string(native.bus.work_ram[at]) + ": " + context);
    require(source.bus.video_ram == native.bus.video_ram, "Map strip actual publication differs");
}
void run(const eb::GameAssets &assets) {
    Fixture source(assets, false), native(assets, true);
    constexpr std::array<unsigned, 16> coordinates{0,  1,  3,   4,   7,    15,    31,    32,
                                                   63, 64, 127, 128, 8191, 32768, 65534, 65535};
    std::uint64_t cases = 0, source_steps = 0, native_steps = 0;
    for (unsigned i = 0; i < coordinates.size(); ++i)
        for (unsigned phase = 0; phase < 4; ++phase)
            for (bool row : {false, true})
                for (bool queued : {false, true})
                    for (bool photograph : {false, true}) {
                        const unsigned a = coordinates[i],
                                       x = coordinates[(i * 7 + phase) % coordinates.size()];
                        context = assets.title + " axis=" + (row ? "row" : "column") +
                                  " AX=" + std::to_string(a) + "," + std::to_string(x) +
                                  " cache=" + std::to_string(phase) + " queued=" + std::to_string(queued) +
                                  " photo=" + std::to_string(photograph);
                        source.seed(a, x, phase, queued, photograph);
                        native.seed(a, x, phase, queued, photograph);
                        const auto old_steps = source.call(row), new_steps = native.call(row);
                        compare(source, native);
                        require(new_steps < old_steps, "Map strip kept source preparation work");
                        source_steps += old_steps;
                        native_steps += new_steps;
                        ++cases;
                    }
    std::cout << "PASS " << assets.title << ": " << cases
              << " actual row/column loaders, queued/immediate uploads and dynamic cache states; all RAM, "
                 "VRAM and return registers equal; source "
              << source_steps << " versus native " << native_steps << " retired instructions\n";
}
} // namespace
int main(int argc, char **argv) {
    try {
        require(argc >= 2, "map_strip_service_reference pack.ebpak ...");
        for (int i = 1; i < argc; ++i)
            run(eb::load_game_assets(argv[i], eb::asset_profiles()));
    } catch (const std::exception &error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}
