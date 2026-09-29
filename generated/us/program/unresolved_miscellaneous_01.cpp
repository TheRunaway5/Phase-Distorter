// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/misc/null/C1E1A2.asm (unresolved).
bool execute_unresolved_miscellaneous_null_c1e1a2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/null/C1E1A2.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1E1A2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/misc/null/C1E1A2.asm:4 RTL
    case 0xC1E1A4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/null/C3EF23.asm (unresolved).
bool execute_unresolved_miscellaneous_null_c3ef23_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/null/C3EF23.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC3EF23: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/misc/null/C3EF23.asm:4 RTL
    case 0xC3EF25: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/misc/null/C4CC2C.asm (unresolved).
bool execute_unresolved_miscellaneous_null_c4cc2c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/misc/null/C4CC2C.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC4CC2C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/misc/null/C4CC2C.asm:4 RTL
    case 0xC4CC2E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
