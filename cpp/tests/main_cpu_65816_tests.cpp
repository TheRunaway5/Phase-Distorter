// CPU contracts run against isolated memory rather than a game boot. These
// fixtures target width flags, addressing, arithmetic, stack, and control-flow
// behavior; they do not establish individual SNES bus phases.
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include <cstdlib>
#include <iostream>
#include <vector>

static void check(bool ok, const char* message) {
    if (!ok) {
        std::cerr << message << '\n';
        std::exit(1);
    }
}
int main() {
    std::vector<std::uint8_t> mem(0x1000000);
    eb::MainCpu65816 c(mem);
    mem[0xfffc] = 0x34;
    mem[0xfffd] = 0x12;
    c.reset_from_vector();
    check(c.program_counter == 0x1234 && c.emulation_mode && c.status_register == 0x34,
          "Reset vector and emulation state");
    c.execute_instruction<0x18>(0, 1);
    c.execute_instruction<0xfb>(0, 1);
    c.execute_instruction<0xc2>(0x30, 2);
    check(!c.emulation_mode && !(c.status_register & 0x30), "CLC XCE REP enters 16-bit native mode");
    c.execute_instruction<0x18>(0, 1);
    c.execute_instruction<0xa9>(0x7fff, 3);
    c.execute_instruction<0x69>(1, 3);
    check(c.accumulator == 0x8000 && (c.status_register & 0xc3) == 0xc0, "16-bit ADC signed overflow");
    c.execute_instruction<0xe2>(0x20, 2);
    c.execute_instruction<0xa9>(0x42, 2);
    check(c.accumulator == 0x8042, "8-bit LDA preserves accumulator high byte");
    c.execute_instruction<0xf8>(0, 1);
    c.execute_instruction<0x18>(0, 1);
    c.execute_instruction<0xa9>(0x99, 2);
    c.execute_instruction<0x69>(1, 2);
    check(c.accumulator == 0x8000 && (c.status_register & 3) == 3, "BCD 99 + 01 wraps and sets carry");
    c.execute_instruction<0xe9>(1, 2);
    check(c.accumulator == 0x8099 && !(c.status_register & 1), "BCD 00 - 01 borrows");
    c.execute_instruction<0xd8>(0, 1);
    c.execute_instruction<0xc2>(0x30, 2);
    c.stack_pointer = 0x1fff;
    c.program_counter = 0xc08000;
    c.execute_instruction<0x22>(0xc12345, 4);
    check(c.program_counter == 0xc12345 && c.stack_pointer == 0x1ffc && mem[0x1fff] == 0xc0 && mem[0x1ffe] == 0x80 &&
              mem[0x1ffd] == 3,
          "JSL stack bytes");
    c.execute_instruction<0x6b>(0, 1);
    check(c.program_counter == 0xc08004 && c.stack_pointer == 0x1fff, "RTL returns across banks");
    c.direct_page = 0x200;
    c.x_index = 0x1234;
    c.y_index = 0;
    c.execute_instruction<0x9b>(0, 1);
    check(c.y_index == 0x1234, "TXY width follows index flag");
    c.execute_instruction<0xe2>(0x10, 2);
    check(c.x_index == 0x34 && c.y_index == 0x34, "SEP X clears high index bytes");
    c.execute_instruction<0xc2>(0x10, 2);
    c.accumulator = 2;
    c.x_index = 0xfffe;
    c.y_index = 0x100;
    c.program_counter = 0xc08000;
    mem[0x01fffe] = 0xaa;
    mem[0x01ffff] = 0xbb;
    mem[0x010000] = 0xcc;
    c.execute_instruction<0x54>(0x0102, 3);
    c.execute_instruction<0x54>(0x0102, 3);
    c.execute_instruction<0x54>(0x0102, 3);
    check(mem[0x020100] == 0xaa && mem[0x020101] == 0xbb && mem[0x020102] == 0xcc && c.program_counter == 0xc08003 &&
              c.accumulator == 0xffff,
          "MVN copies, wraps X, and repeats source instruction");
    c.program_counter = 0xc08000;
    c.stack_pointer = 0x1fff;
    c.status_register = 0x08;
    mem[0xffea] = 0x10;
    mem[0xffeb] = 0x90;
    c.service_interrupt(true);
    check(c.program_counter == 0x9010 && c.stack_pointer == 0x1ffb && (c.status_register & 0x0c) == 4,
          "Native NMI pushes bank and disables decimal mode");
    c.execute_instruction<0x40>(0, 1);
    check(c.program_counter == 0xc08000 && c.stack_pointer == 0x1fff && c.status_register == 8,
          "RTI restores native state");
    c.emulation_mode = true;
    c.status_register = 0x34;
    c.direct_page = 0x1200;
    c.x_index = 1;
    c.program_counter = 0x8000;
    mem[0x1200] = 0x56;
    mem[0x1300] = 0x78;
    c.execute_instruction<0xb5>(0xff, 2);
    check((c.accumulator & 255) == 0x56, "Emulation direct indexed page wrap");
    // Integrated timing keeps architectural cycles independent of cartridge
    // speed and uses each explicitly accessed region's master-clock rate.
    std::vector<std::uint8_t> rom(0x300000);
    eb::SnesBus bus(rom);
    eb::MainCpu65816 timed(bus);
    timed.program_counter = 0xc00000;
    auto before = bus.master_clocks();
    timed.execute_instruction<0xea>(0, 1);
    check(bus.master_clocks() - before == 14 && timed.cycle_count == 2,
          "Slow-ROM NOP is one eight-clock fetch plus six-clock internal cycle");
    bus.write_byte(0x420d, 1);
    before = bus.master_clocks();
    timed.execute_instruction<0xea>(0, 1);
    check(bus.master_clocks() - before == 12 && timed.cycle_count == 4,
          "Fast-ROM NOP changes master clocks without changing architectural cycles");
    before = bus.master_clocks();
    timed.execute_instruction<0xaf>(0x7e0000, 4);
    check(bus.master_clocks() - before == 32, "Long LDA charges slow WRAM data access with fast instruction fetches");
    before = bus.master_clocks();
    timed.execute_instruction<0xad>(0x4016, 3);
    check(bus.master_clocks() - before == 30, "Controller serial-port access consumes twelve master clocks");
    timed.emulation_mode = false;
    timed.status_register = 0x10;
    before = bus.master_clocks();
    timed.execute_instruction<0xaf>(0x7e0000, 4);
    check(bus.master_clocks() - before == 40, "Wide LDA charges both WRAM byte accesses");
    before = bus.master_clocks();
    timed.service_interrupt(true);
    check(bus.master_clocks() - before == 60,
          "Native NMI includes discarded fetch, four stack writes and two vector reads");
    std::cout << "CPU semantic checks passed\n";
}
