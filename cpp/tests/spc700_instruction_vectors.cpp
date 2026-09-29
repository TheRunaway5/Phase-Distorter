// Independent SingleStepTests/spc700 architectural vectors; MMIO is bypassed.
// Pin: 67d15f492b2740964abd4efd1229e0ec9c342228, v1/*.json.
#include "eb/spc700_audio_cpu.hpp"
#include <array>
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>
#include <string>
#include <unordered_set>

#ifdef EB_SPC_STANDALONE_TEST
namespace eb {
bool execute_translated_audio_instruction(Spc700AudioCpu&) {
    return false;
}
} // namespace eb
#endif

namespace {
constexpr unsigned instruction_lengths[256] = {
    1, 1, 2, 3, 2, 3, 1, 2, 2, 3, 3, 2, 3, 1, 3, 1, 2, 1, 2, 3, 2, 3, 3, 2, 3, 1, 2, 2, 1, 1, 3, 3, 1, 1, 2, 3, 2,
    3, 1, 2, 2, 3, 3, 2, 3, 1, 3, 2, 2, 1, 2, 3, 2, 3, 3, 2, 3, 1, 2, 2, 1, 1, 2, 3, 1, 1, 2, 3, 2, 3, 1, 2, 2, 3,
    3, 2, 3, 1, 3, 2, 2, 1, 2, 3, 2, 3, 3, 2, 3, 1, 2, 2, 1, 1, 3, 3, 1, 1, 2, 3, 2, 3, 1, 2, 2, 3, 3, 2, 3, 1, 3,
    1, 2, 1, 2, 3, 2, 3, 3, 2, 3, 1, 2, 2, 1, 1, 2, 1, 1, 1, 2, 3, 2, 3, 1, 2, 2, 3, 3, 2, 3, 2, 1, 3, 2, 1, 2, 3,
    2, 3, 3, 2, 3, 1, 2, 2, 1, 1, 1, 1, 1, 1, 2, 3, 2, 3, 1, 2, 2, 3, 3, 2, 3, 2, 1, 1, 2, 1, 2, 3, 2, 3, 3, 2, 3,
    1, 2, 2, 1, 1, 1, 1, 1, 1, 2, 3, 2, 3, 1, 2, 2, 3, 3, 2, 3, 2, 1, 1, 2, 1, 2, 3, 2, 3, 3, 2, 2, 2, 2, 2, 1, 1,
    3, 1, 1, 1, 2, 3, 2, 3, 1, 2, 2, 3, 3, 2, 3, 1, 1, 1, 2, 1, 2, 3, 2, 3, 3, 2, 2, 2, 3, 2, 1, 1, 2, 1};
}

int main(int argc, char** argv) {
    using nlohmann::json;
    std::array<uint8_t, 65536> memory{};
    eb::Spc700AudioCpu audio_cpu(memory);
    unsigned total = 0, failed = 0;
    std::unordered_set<uint16_t> writes;
    audio_cpu.observe_memory_write = [&](uint16_t address, uint8_t) { writes.insert(address); };
    for (int file_index = 1; file_index < argc; ++file_index) {
        std::ifstream input(argv[file_index]);
        if (!input) {
            std::cerr << "Cannot open " << argv[file_index] << '\n';
            return 2;
        }
        const auto vectors = json::parse(input);
        unsigned file_failed = 0;
        for (const auto& test : vectors) {
            writes.clear();
            const auto& initial = test["initial"];
            const auto& final = test["final"];
            audio_cpu.program_counter = initial["pc"];
            audio_cpu.accumulator = initial["a"];
            audio_cpu.x_index = initial["x"];
            audio_cpu.y_index = initial["y"];
            audio_cpu.stack_pointer = initial["sp"];
            audio_cpu.status_register = initial["psw"];
            audio_cpu.is_stopped = audio_cpu.is_sleeping = false;
            for (auto cell : initial["ram"])
                memory[cell[0].get<unsigned>()] = cell[1];
            const auto opcode = memory[audio_cpu.program_counter];
            const auto instruction_size = instruction_lengths[opcode];
            uint16_t operand = 0;
            for (unsigned byte_index = 1; byte_index < instruction_size; ++byte_index)
                operand |= memory[uint16_t(audio_cpu.program_counter + byte_index)] << (8 * (byte_index - 1));
            const auto previous_cycle_count = audio_cpu.cycle_count;
            audio_cpu.execute_opcode_semantics(opcode, operand, instruction_size);
            const json actual = {{"pc", audio_cpu.program_counter}, {"a", audio_cpu.accumulator},
                                 {"x", audio_cpu.x_index},          {"y", audio_cpu.y_index},
                                 {"sp", audio_cpu.stack_pointer},   {"psw", audio_cpu.status_register}};
            bool matches_expected_state = true;
            std::string difference;
            for (auto register_iterator = actual.begin(); register_iterator != actual.end(); ++register_iterator)
                if (register_iterator.value() != final[register_iterator.key()]) {
                    matches_expected_state = false;
                    difference += register_iterator.key() + ":" + register_iterator.value().dump() + " expected " +
                                  final[register_iterator.key()].dump() + "; ";
                }
            // SLEEP/STOP observation windows have no fixed instruction cycle count.
            if (opcode != 0xef && opcode != 0xff &&
                audio_cpu.cycle_count - previous_cycle_count != test["cycles"].size()) {
                matches_expected_state = false;
                difference += "cycles:" + std::to_string(audio_cpu.cycle_count - previous_cycle_count) + " expected " +
                              std::to_string(test["cycles"].size()) + "; ";
            }
            for (auto cell : final["ram"]) {
                const unsigned address = cell[0];
                if (memory[address] != cell[1]) {
                    matches_expected_state = false;
                    difference += "mem[" + std::to_string(address) + "]=" + std::to_string(memory[address]) +
                                  " expected " + cell[1].dump() + "; ";
                }
                writes.erase(address);
            }
            for (auto address : writes) {
                matches_expected_state = false;
                difference += "unexpected write " + std::to_string(address) + "; ";
            }
            ++total;
            if (!matches_expected_state) {
                ++failed;
                if (file_failed++ < 3)
                    std::cerr << test["name"] << " " << difference << '\n';
            }
        }
        if (file_failed)
            std::cerr << argv[file_index] << ": " << file_failed << " failed\n";
    }
    std::cout << total << " SPC vectors, " << failed << " failures (registers/memory/instruction cycles)\n";
    return failed ? 1 : 0;
}
