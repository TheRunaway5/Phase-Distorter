// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/unused/C4EE9D.asm (unresolved).
bool execute_unresolved_c4ee9d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unused/C4EE9D.asm:3 BEGIN_C_FUNCTION
    case 0xC4EE9D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unused/C4EE9D.asm:6 END_STACK_VARS
    case 0xC4EE9F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unused/C4EE9D.asm:6 END_STACK_VARS
    case 0xC4EEA0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unused/C4EE9D.asm:6 END_STACK_VARS
    case 0xC4EEA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unused/C4EE9D.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC4EEA1.
    case 0xC4EEA3: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unused/C4EE9D.asm:6 END_STACK_VARS
    case 0xC4EEA4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unused/C4EE9D.asm:7 LDA #0
    case 0xC4EEA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unused/C4EE9D.asm:7 LDA #0
    // Overlapping static entry reached from 0xC4EEA5.
    case 0xC4EEA7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unused/C4EE9D.asm:8 STA @VIRTUAL02
    case 0xC4EEA8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unused/C4EE9D.asm:9 BRA @UNKNOWN1
    case 0xC4EEAA: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/unused/C4EE9D.asm:11 LDA @VIRTUAL02
    case 0xC4EEAC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unused/C4EE9D.asm:12 ASL
    case 0xC4EEAE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unused/C4EE9D.asm:13 TAX
    case 0xC4EEAF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unused/C4EE9D.asm:14 LDY UNUSED_7EB4D5,X
    case 0xC4EEB0: cpu.execute_instruction<0xBC>(0x00B4D5, 3); return true;
    // src/unused/C4EE9D.asm:15 STY @LOCAL00
    case 0xC4EEB3: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unused/C4EE9D.asm:16 LDX #5
    case 0xC4EEB5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/unused/C4EE9D.asm:16 LDX #5
    // Overlapping static entry reached from 0xC4EEB5.
    case 0xC4EEB7: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unused/C4EE9D.asm:17 LDA @VIRTUAL02
    case 0xC4EEB8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unused/C4EE9D.asm:18 LDY #.SIZEOF(char_struct)
    case 0xC4EEBA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unused/C4EE9D.asm:18 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4EEBA.
    case 0xC4EEBC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unused/C4EE9D.asm:19 JSL MULT168
    case 0xC4EEBD: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unused/C4EE9D.asm:20 CLC
    case 0xC4EEC1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unused/C4EE9D.asm:21 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC4EEC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/unused/C4EE9D.asm:21 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC4EEC2.
    case 0xC4EEC4: cpu.execute_instruction<0x99>(0x000EA4, 3); return true;
    // src/unused/C4EE9D.asm:22 LDY @LOCAL00
    case 0xC4EEC5: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unused/C4EE9D.asm:23 JSR UNUSED_C4EDA3
    case 0xC4EEC7: cpu.execute_instruction<0x20>(0x00EDA3, 3); return true;
    // src/unused/C4EE9D.asm:24 INC @VIRTUAL02
    case 0xC4EECA: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unused/C4EE9D.asm:26 LDA @VIRTUAL02
    case 0xC4EECC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unused/C4EE9D.asm:27 CMP #4
    case 0xC4EECE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unused/C4EE9D.asm:27 CMP #4
    // Overlapping static entry reached from 0xC4EECE.
    case 0xC4EED0: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unused/C4EE9D.asm:28 BCC @UNKNOWN0
    case 0xC4EED1: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // src/unused/C4EE9D.asm:29 LDY UNUSED_7EB4DD
    case 0xC4EED3: cpu.execute_instruction<0xAC>(0x00B4DD, 3); return true;
    // src/unused/C4EE9D.asm:30 LDX #6
    case 0xC4EED6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/unused/C4EE9D.asm:30 LDX #6
    // Overlapping static entry reached from 0xC4EED6.
    case 0xC4EED8: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unused/C4EE9D.asm:31 LDA #.LOWORD(GAME_STATE) + game_state::pet_name
    case 0xC4EED9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x009819, 3); return true;
    // src/unused/C4EE9D.asm:31 LDA #.LOWORD(GAME_STATE) + game_state::pet_name
    // Overlapping static entry reached from 0xC4EED9.
    case 0xC4EEDB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unused/C4EE9D.asm:32 JSR UNUSED_C4EDA3
    case 0xC4EEDC: cpu.execute_instruction<0x20>(0x00EDA3, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unused/C4EE9D.asm:33 END_C_FUNCTION
    case 0xC4EEDF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unused/C4EE9D.asm:33 END_C_FUNCTION
    case 0xC4EEE0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
