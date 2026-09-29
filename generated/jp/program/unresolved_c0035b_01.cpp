// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/unused/C0035B.asm (unresolved).
bool execute_unresolved_c0035b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unused/C0035B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0036B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unused/C0035B.asm:8 END_STACK_VARS
    case 0xC0036D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unused/C0035B.asm:8 END_STACK_VARS
    case 0xC0036E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unused/C0035B.asm:8 END_STACK_VARS
    case 0xC0036F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unused/C0035B.asm:8 END_STACK_VARS
    case 0xC00370: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unused/C0035B.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC00370.
    case 0xC00372: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unused/C0035B.asm:8 END_STACK_VARS
    case 0xC00373: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unused/C0035B.asm:8 END_STACK_VARS
    case 0xC00374: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unused/C0035B.asm:9 STA @LOCAL00
    case 0xC00375: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unused/C0035B.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC00372.
    case 0xC00376: cpu.execute_instruction<0x0E>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unused/C0035B.asm:10 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC00377: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unused/C0035B.asm:10 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC00377.
    case 0xC00379: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unused/C0035B.asm:10 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC0037A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unused/C0035B.asm:10 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC0037C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unused/C0035B.asm:10 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC0037C.
    case 0xC0037E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unused/C0035B.asm:10 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC0037F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unused/C0035B.asm:11 LDA @LOCAL00
    case 0xC00381: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/unused/C0035B.asm:12 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00383: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/unused/C0035B.asm:12 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00384: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/unused/C0035B.asm:12 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00385: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/unused/C0035B.asm:12 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00386: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/unused/C0035B.asm:12 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00387: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unused/C0035B.asm:13 CLC
    case 0xC00388: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unused/C0035B.asm:14 ADC @VIRTUAL06
    case 0xC00389: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unused/C0035B.asm:15 STA @VIRTUAL06
    case 0xC0038B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unused/C0035B.asm:16 TXA
    case 0xC0038D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unused/C0035B.asm:17 ASL
    case 0xC0038E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unused/C0035B.asm:18 STA @VIRTUAL02
    case 0xC0038F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unused/C0035B.asm:19 TYA
    case 0xC00391: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/unused/C0035B.asm:20 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00392: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/unused/C0035B.asm:20 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00393: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/unused/C0035B.asm:20 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC00394: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unused/C0035B.asm:21 CLC
    case 0xC00395: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unused/C0035B.asm:22 ADC @VIRTUAL02
    case 0xC00396: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unused/C0035B.asm:23 CLC
    case 0xC00398: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unused/C0035B.asm:24 ADC @VIRTUAL06
    case 0xC00399: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unused/C0035B.asm:25 STA @VIRTUAL06
    case 0xC0039B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unused/C0035B.asm:26 LDA [@VIRTUAL06]
    case 0xC0039D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unused/C0035B.asm:27 END_C_FUNCTION
    case 0xC0039F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unused/C0035B.asm:27 END_C_FUNCTION
    case 0xC003A0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
