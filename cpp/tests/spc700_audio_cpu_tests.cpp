// Isolated SPC700 contracts complement the external instruction-vector runner.
// Directly controlled RAM/registers make arithmetic and I/O behavior testable
// independently of the game sound driver or an audio playback device.
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include <array>
#include <cstdlib>
#include <iostream>
#include <stdexcept>

#ifdef EB_SPC_STANDALONE_TEST
namespace eb {
bool execute_translated_audio_instruction(Spc700AudioCpu&) {
    return false;
}
} // namespace eb
#endif

namespace {
unsigned checks = 0;
std::array<uint8_t, 65536> cartridge{};
void check(bool condition, const char* message) {
    ++checks;
    if (!condition) {
        std::cerr << "FAIL: " << message << '\n';
        std::exit(1);
    }
}
template <class Predicate> void run_until(eb::Spc700AudioCpu& audio_cpu, Predicate predicate) {
    for (unsigned index = 0; index < 10000 && !predicate(); ++index)
        audio_cpu.step_instruction();
    check(predicate(), "SPC instruction execution reaches expected event");
}

void boot_rom_upload_handshake() {
    eb::SnesBus system_bus(cartridge);
    eb::Spc700AudioCpu audio_cpu(system_bus);
    audio_cpu.audio_ram.fill(0x5a);
    run_until(audio_cpu,
              [&] { return system_bus.audio_to_main_ports[0] == 0xaa && system_bus.audio_to_main_ports[1] == 0xbb; });
    check(audio_cpu.audio_ram[1] == 0 && audio_cpu.audio_ram[0xef] == 0 && audio_cpu.audio_ram[0x100] == 0x5a,
          "IPL real zero-fill loop covers only intended RAM");
    system_bus.main_to_audio_ports = {0xcc, 1, 0, 2};
    run_until(audio_cpu, [&] { return system_bus.audio_to_main_ports[0] == 0xcc; });
    constexpr uint8_t data[] = {0xe8, 0x42, 0xc4, 0xf4};
    for (unsigned index = 0; index < 4; ++index) {
        system_bus.main_to_audio_ports[1] = data[index];
        system_bus.main_to_audio_ports[0] = index;
        run_until(audio_cpu, [&] { return system_bus.audio_to_main_ports[0] == index; });
    }
    for (unsigned index = 0; index < 10; ++index)
        audio_cpu.step_instruction();
    check(audio_cpu.audio_ram[0x200] == 0xe8 && audio_cpu.audio_ram[0x201] == 0x42 &&
              audio_cpu.audio_ram[0x202] == 0xc4 && audio_cpu.audio_ram[0x203] == 0xf4,
          "IPL transfers actual CPU port bytes to RAM");
    system_bus.main_to_audio_ports = {7, 0, 0, 2};
    run_until(audio_cpu, [&] { return audio_cpu.program_counter == 0x200; });
    check(system_bus.audio_to_main_ports[0] == 7 && audio_cpu.stack_pointer == 0xef && audio_cpu.x_index == 0 &&
              audio_cpu.y_index == 0,
          "IPL exit acknowledges command and jumps via uploaded pointer");
}

void arithmetic_instruction_semantics() {
    eb::SnesBus system_bus(cartridge);
    eb::Spc700AudioCpu audio_cpu(system_bus);
    for (unsigned operation = 0; operation < 2; ++operation)
        for (unsigned left = 0; left < 256; ++left)
            for (unsigned right = 0; right < 256; ++right)
                for (unsigned carry = 0; carry < 2; ++carry) {
                    audio_cpu.accumulator = left;
                    audio_cpu.status_register = carry;
                    if (operation)
                        audio_cpu.execute_instruction<0xa8>(right, 2);
                    else
                        audio_cpu.execute_instruction<0x88>(right, 2);
                    const int result =
                        operation ? int(left) - int(right) - int(1 - carry) : int(left) + int(right) + int(carry);
                    const uint8_t value = result;
                    unsigned expected = (value == 0 ? eb::Spc700AudioCpu::Zero : 0) | (value & 0x80);
                    if (operation ? result >= 0 : result > 255)
                        expected |= eb::Spc700AudioCpu::Carry;
                    if (operation ? int(left & 15) - int(right & 15) - int(1 - carry) >= 0
                                  : (left & 15) + (right & 15) + carry > 15)
                        expected |= eb::Spc700AudioCpu::HalfCarry;
                    if (((operation ? (left ^ right) : ~(left ^ right)) & (left ^ value) & 0x80))
                        expected |= eb::Spc700AudioCpu::Overflow;
                    if (audio_cpu.accumulator != value || audio_cpu.status_register != expected)
                        check(false, "exhaustive ADC/SBC result and N/V/H/Z/C");
                }
    check(true, "exhaustive ADC/SBC all input bytes and carries");
    audio_cpu.accumulator = 0xff;
    audio_cpu.y_index = 0x7f;
    audio_cpu.status_register = 0;
    audio_cpu.audio_ram[0x20] = 1;
    audio_cpu.audio_ram[0x21] = 0;
    audio_cpu.execute_instruction<0x7a>(0x20, 2);
    check(audio_cpu.accumulator == 0 && audio_cpu.y_index == 0x80 &&
              (audio_cpu.status_register &
               (eb::Spc700AudioCpu::Negative | eb::Spc700AudioCpu::Overflow | eb::Spc700AudioCpu::HalfCarry)) ==
                  (eb::Spc700AudioCpu::Negative | eb::Spc700AudioCpu::Overflow | eb::Spc700AudioCpu::HalfCarry),
          "ADDW full-width carry boundaries");
    audio_cpu.execute_instruction<0x9a>(0x20, 2);
    check(audio_cpu.accumulator == 255 && audio_cpu.y_index == 127 &&
              (audio_cpu.status_register & eb::Spc700AudioCpu::Overflow) &&
              (audio_cpu.status_register & eb::Spc700AudioCpu::Carry),
          "SUBW overflow and no borrow");
    audio_cpu.accumulator = 0xff;
    audio_cpu.y_index = 0xff;
    audio_cpu.status_register = 0;
    audio_cpu.execute_instruction<0xcf>(0, 1);
    check(audio_cpu.accumulator == 1 && audio_cpu.y_index == 0xfe &&
              (audio_cpu.status_register & eb::Spc700AudioCpu::Negative),
          "MUL result and flags on Y");
    audio_cpu.accumulator = 0x34;
    audio_cpu.y_index = 0x12;
    audio_cpu.x_index = 0x20;
    audio_cpu.execute_instruction<0x9e>(0, 1);
    check(audio_cpu.accumulator == 0x91 && audio_cpu.y_index == 0x14 &&
              !(audio_cpu.status_register & eb::Spc700AudioCpu::Overflow),
          "DIV regular quotient/remainder");
    audio_cpu.accumulator = 0x34;
    audio_cpu.y_index = 0x12;
    audio_cpu.x_index = 0;
    audio_cpu.execute_instruction<0x9e>(0, 1);
    check(audio_cpu.accumulator == 0xed && audio_cpu.y_index == 0x34 &&
              (audio_cpu.status_register & eb::Spc700AudioCpu::Overflow),
          "DIV zero follows silicon overflow algorithm");
    audio_cpu.accumulator = 0x9a;
    audio_cpu.status_register = 0;
    audio_cpu.execute_instruction<0xdf>(0, 1);
    check(audio_cpu.accumulator == 0 && (audio_cpu.status_register & eb::Spc700AudioCpu::Carry) &&
              (audio_cpu.status_register & eb::Spc700AudioCpu::Zero),
          "DAA decimal carry");
    audio_cpu.accumulator = 0xff;
    audio_cpu.status_register = 0;
    audio_cpu.execute_instruction<0xbe>(0, 1);
    check(audio_cpu.accumulator == 0x99 && !(audio_cpu.status_register & eb::Spc700AudioCpu::Carry),
          "DAS decimal borrow");
}

void addressing_and_control_flow() {
    eb::SnesBus system_bus(cartridge);
    eb::Spc700AudioCpu audio_cpu(system_bus);
    audio_cpu.status_register = eb::Spc700AudioCpu::DirectPage;
    audio_cpu.x_index = 2;
    audio_cpu.audio_ram[0x100] = 0xa5;
    audio_cpu.audio_ram[0x200] = 0x5a;
    audio_cpu.execute_instruction<0xf4>(0xfe, 2);
    check(audio_cpu.accumulator == 0xa5, "direct-page indexed offset wraps inside page");
    audio_cpu.audio_ram[0x1ff] = 0x34;
    audio_cpu.audio_ram[0x100] = 0x12;
    audio_cpu.audio_ram[0x1234] = 0x6b;
    audio_cpu.x_index = 0;
    audio_cpu.execute_instruction<0xe7>(0xff, 2);
    check(audio_cpu.accumulator == 0x6b, "indirect direct-page pointer wraps inside page");
    audio_cpu.program_counter = 0x200;
    audio_cpu.stack_pointer = 0xef;
    audio_cpu.execute_instruction<0x3f>(0x4321, 3);
    check(audio_cpu.program_counter == 0x4321 && audio_cpu.stack_pointer == 0xed && audio_cpu.audio_ram[0x1ef] == 2 &&
              audio_cpu.audio_ram[0x1ee] == 3,
          "CALL pushes exact return address high then low");
    audio_cpu.execute_instruction<0x6f>(0, 1);
    check(audio_cpu.program_counter == 0x203 && audio_cpu.stack_pointer == 0xef,
          "RET restores exact call continuation");
    audio_cpu.status_register = 0;
    audio_cpu.program_counter = 0x300;
    auto previous_cycle_count = audio_cpu.cycle_count;
    audio_cpu.execute_instruction<0xd0>(0xfc, 2);
    check(audio_cpu.program_counter == 0x2fe && audio_cpu.cycle_count - previous_cycle_count == 4,
          "taken relative branch sign and timing");
    audio_cpu.status_register = eb::Spc700AudioCpu::Zero;
    previous_cycle_count = audio_cpu.cycle_count;
    audio_cpu.execute_instruction<0xd0>(0xfc, 2);
    check(audio_cpu.program_counter == 0x300 && audio_cpu.cycle_count - previous_cycle_count == 2,
          "untaken branch timing");
    audio_cpu.audio_ram[0x20] = 0;
    audio_cpu.execute_instruction<0xe2>(0x20, 2);
    check(audio_cpu.audio_ram[0x20] == 0x80, "SET1 high bit");
    audio_cpu.execute_instruction<0xf2>(0x20, 2);
    check(audio_cpu.audio_ram[0x20] == 0, "CLR1 high bit");
    audio_cpu.status_register = eb::Spc700AudioCpu::Carry;
    audio_cpu.execute_instruction<0xca>(0x6123, 3);
    check(audio_cpu.audio_ram[0x123] == 8, "MOV1 encoded 13-bit address plus bit selector");
    audio_cpu.execute_instruction<0xea>(0x6123, 3);
    check(audio_cpu.audio_ram[0x123] == 0, "NOT1 encoded memory bit");
    audio_cpu.y_index = 1;
    audio_cpu.status_register = 0x82;
    audio_cpu.program_counter = 0x400;
    audio_cpu.execute_instruction<0xfe>(0x80, 2);
    check(audio_cpu.y_index == 0 && audio_cpu.program_counter == 0x402 && audio_cpu.status_register == 0x82,
          "DBNZ preserves all status flags");
}

void register_io_and_timers() {
    eb::SnesBus system_bus(cartridge);
    eb::Spc700AudioCpu audio_cpu(system_bus);
    system_bus.write_byte(0x2140, 0x55);
    audio_cpu.write_byte(0xf4, 0xaa);
    check(audio_cpu.read_byte(0xf4) == 0x55 && system_bus.read_byte(0x2140) == 0xaa,
          "SPC independent communication directions");
    audio_cpu.write_byte(0xf1, 0x90);
    check(audio_cpu.read_byte(0xf4) == 0 && system_bus.read_byte(0x2140) == 0xaa,
          "SPC input clear does not clear output");
    audio_cpu.write_byte(0xffc0, 0x42);
    check(audio_cpu.read_byte(0xffc0) == 0xcd, "IPL overlays RAM on reads only");
    audio_cpu.write_byte(0xf1, 0);
    check(audio_cpu.read_byte(0xffc0) == 0x42, "disabling IPL reveals RAM write");
    audio_cpu.write_byte(0xf2, 0x0c);
    audio_cpu.write_byte(0xf3, 0x7f);
    audio_cpu.write_byte(0xf2, 0x8c);
    audio_cpu.write_byte(0xf3, 0x11);
    check(audio_cpu.read_byte(0xf3) == 0x7f, "DSP upper-address mirrors are read-only");
    audio_cpu.write_byte(0xfa, 2);
    audio_cpu.write_byte(0xfc, 0);
    audio_cpu.write_byte(0xf1, 5);
    for (unsigned index = 0; index < 128; ++index)
        audio_cpu.execute_instruction<0x00>(0, 1);
    check(audio_cpu.read_byte(0xfd) == 1 && audio_cpu.read_byte(0xfd) == 0,
          "timer0 prescaler/target and destructive output read");
    for (unsigned index = 0; index < 1920; ++index)
        audio_cpu.execute_instruction<0x00>(0, 1);
    check(audio_cpu.read_byte(0xff) == 1, "timer2 zero target means 256 ticks");
    check(audio_cpu.read_byte(0xfd) == 15, "timer0 output is four-bit accumulation");
    for (unsigned index = 0; index < 128; ++index)
        audio_cpu.execute_instruction<0x00>(0, 1);
    audio_cpu.accumulator = 0x42;
    audio_cpu.status_register = 0;
    audio_cpu.execute_instruction<0xc4>(0xfd, 2);
    check(audio_cpu.read_byte(0xfd) == 0, "MOV store dummy read clears timer output");
}

void complete_opcode_coverage() {
    eb::SnesBus system_bus(cartridge);
    eb::Spc700AudioCpu audio_cpu(system_bus);
    for (unsigned opcode = 0; opcode < 256; ++opcode) {
        audio_cpu.program_counter = 0x800;
        audio_cpu.accumulator = 0x22;
        audio_cpu.x_index = 3;
        audio_cpu.y_index = 4;
        audio_cpu.status_register = 0;
        audio_cpu.stack_pointer = 0xef;
        audio_cpu.is_stopped = audio_cpu.is_sleeping = false;
        audio_cpu.execute_opcode_semantics(opcode, 0x2020, 3);
    }
    check(audio_cpu.instruction_count == 256, "all 256 static semantic helpers are defined");
}
} // namespace
int main() {
    boot_rom_upload_handshake();
    arithmetic_instruction_semantics();
    addressing_and_control_flow();
    register_io_and_timers();
    complete_opcode_coverage();
    std::cout << "spc: " << checks << " checks passed (including exhaustive 8-bit ADC/SBC)\n";
}
