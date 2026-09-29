// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/unknown/C4/C47A27.asm (unresolved).
bool execute_unresolved_c4_c47a27_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47A27.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47A27: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47A27.asm:8 END_STACK_VARS
    case 0xC47A29: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47A27.asm:8 END_STACK_VARS
    case 0xC47A2A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47A27.asm:8 END_STACK_VARS
    case 0xC47A2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47A27.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC47A2B.
    case 0xC47A2D: cpu.execute_instruction<0xFF>(0x89AE5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47A27.asm:8 END_STACK_VARS
    case 0xC47A2E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C47A27.asm:9 LDX GAME_STATE+game_state::current_party_members
    case 0xC47A2F: cpu.execute_instruction<0xAE>(0x009889, 3); return true;
    // src/unknown/C4/C47A27.asm:9 LDX GAME_STATE+game_state::current_party_members
    // Overlapping static entry reached from 0xC47A2D.
    case 0xC47A31: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C47A27.asm:10 STX @LOCAL02
    case 0xC47A32: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C47A27.asm:11 LDA CURRENT_ENTITY_SLOT
    case 0xC47A34: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C47A27.asm:12 ASL
    case 0xC47A37: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47A27.asm:13 TAX
    case 0xC47A38: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47A27.asm:14 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC47A39: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C4/C47A27.asm:15 SEC
    case 0xC47A3C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47A27.asm:16 SBC #112
    case 0xC47A3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000070, 2); else cpu.execute_instruction<0xE9>(0x000070, 3); return true;
    // src/unknown/C4/C47A27.asm:16 SBC #112
    // Overlapping static entry reached from 0xC47A3D.
    case 0xC47A3F: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C47A27.asm:17 STA BG1_Y_POS
    case 0xC47A40: cpu.execute_instruction<0x8D>(0x000033, 3); return true;
    // src/unknown/C4/C47A27.asm:18 STA @VIRTUAL02
    case 0xC47A43: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C47A27.asm:19 LDX @LOCAL02
    case 0xC47A45: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C47A27.asm:20 TXA
    case 0xC47A47: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C47A27.asm:21 ASL
    case 0xC47A48: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47A27.asm:22 TAX
    case 0xC47A49: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47A27.asm:23 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC47A4A: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C4/C47A27.asm:24 SEC
    case 0xC47A4D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47A27.asm:25 SBC @VIRTUAL02
    case 0xC47A4E: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C47A27.asm:26 STA @LOCAL01
    case 0xC47A50: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47A27.asm:27 CLC
    case 0xC47A52: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47A27.asm:28 ADC #96
    case 0xC47A53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x000060, 3); return true;
    // src/unknown/C4/C47A27.asm:28 ADC #96
    // Overlapping static entry reached from 0xC47A53.
    case 0xC47A55: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C47A27.asm:29 STA @LOCAL00
    case 0xC47A56: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C47A27.asm:30 LDY #240
    case 0xC47A58: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x0000F0, 3); return true;
    // src/unknown/C4/C47A27.asm:30 LDY #240
    // Overlapping static entry reached from 0xC47A58.
    case 0xC47A5A: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C47A27.asm:31 LDA @LOCAL01
    case 0xC47A5B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C47A27.asm:32 SEC
    case 0xC47A5D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47A27.asm:33 SBC #96
    case 0xC47A5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000060, 2); else cpu.execute_instruction<0xE9>(0x000060, 3); return true;
    // src/unknown/C4/C47A27.asm:33 SBC #96
    // Overlapping static entry reached from 0xC47A5E.
    case 0xC47A60: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C47A27.asm:34 TAX
    case 0xC47A61: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47A27.asm:35 LDA #16
    case 0xC47A62: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C4/C47A27.asm:35 LDA #16
    // Overlapping static entry reached from 0xC47A62.
    case 0xC47A64: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C47A27.asm:36 JSL UNKNOWN_C47930
    case 0xC47A65: cpu.execute_instruction<0x22>(0xC47930, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47A27.asm:37 END_C_FUNCTION
    case 0xC47A69: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47A27.asm:37 END_C_FUNCTION
    case 0xC47A6A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47A6B.asm (unresolved).
bool execute_unresolved_c4_c47a6b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47A6B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47A6B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47A6B.asm:7 END_STACK_VARS
    case 0xC47A6D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47A6B.asm:7 END_STACK_VARS
    case 0xC47A6E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47A6B.asm:7 END_STACK_VARS
    case 0xC47A6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47A6B.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC47A6F.
    case 0xC47A71: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47A6B.asm:7 END_STACK_VARS
    case 0xC47A72: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C47A6B.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC47A73: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C47A6B.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC47A71.
    case 0xC47A75: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47A6B.asm:9 ASL
    case 0xC47A76: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47A6B.asm:10 STA @LOCAL01
    case 0xC47A77: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47A6B.asm:11 CLC
    case 0xC47A79: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47A6B.asm:12 ADC #.LOWORD(ENTITY_ABS_Y_TABLE)
    case 0xC47A7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CA, 2); else cpu.execute_instruction<0x69>(0x000BCA, 3); return true;
    // src/unknown/C4/C47A6B.asm:12 ADC #.LOWORD(ENTITY_ABS_Y_TABLE)
    // Overlapping static entry reached from 0xC47A7A.
    case 0xC47A7C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C47A6B.asm:13 TAX
    case 0xC47A7D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47A6B.asm:14 STX @LOCAL00
    case 0xC47A7E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C47A6B.asm:15 LDA @LOCAL01
    case 0xC47A80: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C47A6B.asm:16 TAX
    case 0xC47A82: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47A6B.asm:17 LDA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC47A83: cpu.execute_instruction<0xBD>(0x001002, 3); return true;
    // src/unknown/C4/C47A6B.asm:18 STA @LOCAL01
    case 0xC47A86: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47A6B.asm:19 STA @VIRTUAL04
    case 0xC47A88: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C47A6B.asm:20 LDX @LOCAL00
    case 0xC47A8A: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C47A6B.asm:21 LDA __BSS_START__,X
    case 0xC47A8C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C47A6B.asm:22 SEC
    case 0xC47A8F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47A6B.asm:23 SBC @VIRTUAL04
    case 0xC47A90: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C4/C47A6B.asm:24 STA @VIRTUAL02
    case 0xC47A92: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C47A6B.asm:25 LDA @LOCAL01
    case 0xC47A94: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C47A6B.asm:26 SEC
    case 0xC47A96: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C47A6B.asm:27 SBC @VIRTUAL02
    case 0xC47A97: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C47A6B.asm:28 STA __BSS_START__,X
    case 0xC47A99: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47A6B.asm:29 END_C_FUNCTION
    case 0xC47A9C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47A6B.asm:29 END_C_FUNCTION
    case 0xC47A9D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47A9E.asm (unresolved).
bool execute_unresolved_c4_c47a9e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47A9E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47A9E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47A9E.asm:9 END_STACK_VARS
    case 0xC47AA0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47A9E.asm:9 END_STACK_VARS
    case 0xC47AA1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47A9E.asm:9 END_STACK_VARS
    case 0xC47AA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47A9E.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC47AA2.
    case 0xC47AA4: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47A9E.asm:9 END_STACK_VARS
    case 0xC47AA5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC47AA6: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C47A9E.asm:10 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC47AA4.
    case 0xC47AA8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:11 ASL
    case 0xC47AA9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:12 TAX
    case 0xC47AAA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:13 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC47AAB: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/unknown/C4/C47A9E.asm:14 STA @LOCAL03
    case 0xC47AAE: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47A9E.asm:15 LOADPTR ANIMATION_SEQUENCE_POINTERS, @VIRTUAL06
    case 0xC47AB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x002DE1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47A9E.asm:15 LOADPTR ANIMATION_SEQUENCE_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC47AB0.
    case 0xC47AB2: cpu.execute_instruction<0x2D>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47A9E.asm:15 LOADPTR ANIMATION_SEQUENCE_POINTERS, @VIRTUAL06
    case 0xC47AB3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47A9E.asm:15 LOADPTR ANIMATION_SEQUENCE_POINTERS, @VIRTUAL06
    case 0xC47AB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CC, 2); else cpu.execute_instruction<0xA9>(0x0000CC, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47A9E.asm:15 LOADPTR ANIMATION_SEQUENCE_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC47AB5.
    case 0xC47AB7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47A9E.asm:15 LOADPTR ANIMATION_SEQUENCE_POINTERS, @VIRTUAL06
    case 0xC47AB8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47A9E.asm:16 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC47ABA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47A9E.asm:16 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC47ABC: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47A9E.asm:16 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC47ABE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47A9E.asm:16 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC47AC0: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C47A9E.asm:17 LDA @LOCAL03
    case 0xC47AC2: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C47A9E.asm:18 ASL
    case 0xC47AC4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:19 ASL
    case 0xC47AC5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:20 ASL
    case 0xC47AC6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:21 STA @LOCAL03
    case 0xC47AC7: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47A9E.asm:22 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC47AC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47A9E.asm:22 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC47AC9.
    case 0xC47ACB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47A9E.asm:22 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC47ACC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47A9E.asm:22 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC47ACE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47A9E.asm:22 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC47ACE.
    case 0xC47AD0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47A9E.asm:22 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC47AD1: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C47A9E.asm:23 LDA @LOCAL03
    case 0xC47AD3: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C47A9E.asm:24 CLC
    case 0xC47AD5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:25 ADC @VIRTUAL06
    case 0xC47AD6: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C47A9E.asm:26 STA @VIRTUAL06
    case 0xC47AD8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C47A9E.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC47ADA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C47A9E.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC47ADA.
    case 0xC47ADC: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C47A9E.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC47ADD: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C47A9E.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC47ADF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C47A9E.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC47AE0: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C47A9E.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC47AE2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C47A9E.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC47AE4: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47A9E.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47AE6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47A9E.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47AE8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47A9E.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47AEA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47A9E.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47AEC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47A9E.asm:32 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC47AEE: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47A9E.asm:32 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC47AF0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47A9E.asm:32 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC47AF2: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47A9E.asm:32 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC47AF4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47A9E.asm:33 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC47AF6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47A9E.asm:33 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC47AF8: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47A9E.asm:33 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC47AFA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47A9E.asm:33 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC47AFC: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C47A9E.asm:35 JSL DECOMP
    case 0xC47AFE: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/unknown/C4/C47A9E.asm:36 LDA @LOCAL03
    case 0xC47B02: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C47A9E.asm:37 INC
    case 0xC47B04: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:38 INC
    case 0xC47B05: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:39 INC
    case 0xC47B06: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:40 INC
    case 0xC47B07: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C47A9E.asm:41 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC47B08: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C47A9E.asm:41 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC47B0A: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C47A9E.asm:41 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC47B0C: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C47A9E.asm:41 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC47B0E: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C47A9E.asm:42 CLC
    case 0xC47B10: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:43 ADC @VIRTUAL06
    case 0xC47B11: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C47A9E.asm:44 STA @VIRTUAL06
    case 0xC47B13: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C47A9E.asm:48 STA @LOCAL02
    case 0xC47B15: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C47A9E.asm:49 LDA @VIRTUAL06+2
    case 0xC47B17: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C47A9E.asm:50 STA @LOCAL02+2
    case 0xC47B19: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47A9E.asm:51 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC47B1B: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47A9E.asm:51 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC47B1D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47A9E.asm:51 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC47B1F: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47A9E.asm:51 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC47B21: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47A9E.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47B23: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47A9E.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47B25: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47A9E.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47B27: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47A9E.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47B29: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47A9E.asm:54 LDY #VRAM::TEXT_LAYER_TILES
    case 0xC47B2B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // src/unknown/C4/C47A9E.asm:54 LDY #VRAM::TEXT_LAYER_TILES
    // Overlapping static entry reached from 0xC47B2B.
    case 0xC47B2D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47A9E.asm:56 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC47B2E: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47A9E.asm:56 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC47B30: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47A9E.asm:56 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC47B32: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47A9E.asm:56 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC47B34: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C47A9E.asm:58 LDA [@VIRTUAL06]
    case 0xC47B36: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C47A9E.asm:59 TAX
    case 0xC47B38: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC47B39: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47A9E.asm:61 LDA #0
    case 0xC47B3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C4/C47A9E.asm:62 JSL TRANSFER_TO_VRAM
    case 0xC47B3D: cpu.execute_instruction<0x22>(0xC085B7, 4); return true;
    // src/unknown/C4/C47A9E.asm:62 JSL TRANSFER_TO_VRAM
    // Overlapping static entry reached from 0xC47B3B.
    case 0xC47B3E: cpu.execute_instruction<0xB7>(0x000085, 2); return true;
    // src/unknown/C4/C47A9E.asm:62 JSL TRANSFER_TO_VRAM
    // Overlapping static entry reached from 0xC47B3E.
    case 0xC47B40: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A7, 2); else cpu.execute_instruction<0xC0>(0x0006A7, 3); return true;
    // src/unknown/C4/C47A9E.asm:64 LDA [@VIRTUAL06]
    case 0xC47B41: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C47A9E.asm:64 LDA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC47B40.
    case 0xC47B42: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C47A9E.asm:65 STORE_INT1632 @VIRTUAL06
    case 0xC47B43: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C47A9E.asm:65 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC47B42.
    case 0xC47B44: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C47A9E.asm:65 STORE_INT1632 @VIRTUAL06
    case 0xC47B45: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C47A9E.asm:65 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC47B44.
    case 0xC47B46: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C47A9E.asm:66 CLC
    case 0xC47B47: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C4/C47A9E.asm:67 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC47B48: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C4/C47A9E.asm:67 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC47B4A: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C4/C47A9E.asm:67 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC47B4C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C4/C47A9E.asm:67 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC47B4E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C4/C47A9E.asm:67 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC47B50: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C4/C47A9E.asm:67 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC47B52: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47A9E.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47B54: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47A9E.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47B56: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47A9E.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47B58: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47A9E.asm:68 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC47B5A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47A9E.asm:69 LDX #BPP2PALETTE_SIZE
    case 0xC47B5C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C4/C47A9E.asm:69 LDX #BPP2PALETTE_SIZE
    // Overlapping static entry reached from 0xC47B5C.
    case 0xC47B5E: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C47A9E.asm:70 LDA #.LOWORD(PALETTES)
    case 0xC47B5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C4/C47A9E.asm:70 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC47B5F.
    case 0xC47B61: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C47A9E.asm:71 JSL MEMCPY16
    case 0xC47B62: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C4/C47A9E.asm:72 SEP #PROC_FLAGS::ACCUM8
    case 0xC47B66: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C47A9E.asm:73 LDA #PALETTE_UPLOAD::FULL
    case 0xC47B68: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C4/C47A9E.asm:74 STA PALETTE_UPLOAD_MODE
    case 0xC47B6A: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C4/C47A9E.asm:74 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC47B68.
    case 0xC47B6B: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C4/C47A9E.asm:75 REP #PROC_FLAGS::ACCUM8
    case 0xC47B6D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C47A9E.asm:76 LDA #.LOWORD(-1)
    case 0xC47B6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C47A9E.asm:76 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC47B6F.
    case 0xC47B71: cpu.execute_instruction<0xFF>(0x003B8D, 4); return true;
    // src/unknown/C4/C47A9E.asm:77 STA BG3_Y_POS
    case 0xC47B72: cpu.execute_instruction<0x8D>(0x00003B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47A9E.asm:78 END_C_FUNCTION
    case 0xC47B75: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47A9E.asm:78 END_C_FUNCTION
    case 0xC47B76: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47B77.asm (unresolved).
bool execute_unresolved_c4_c47b77_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47B77.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47B77: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47B77.asm:9 END_STACK_VARS
    case 0xC47B79: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47B77.asm:9 END_STACK_VARS
    case 0xC47B7A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47B77.asm:9 END_STACK_VARS
    case 0xC47B7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47B77.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC47B7B.
    case 0xC47B7D: cpu.execute_instruction<0xFF>(0xFFA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47B77.asm:9 END_STACK_VARS
    case 0xC47B7E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C47B77.asm:10 LDA #.LOWORD(-1)
    case 0xC47B7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C47B77.asm:10 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC47B7F.
    case 0xC47B81: cpu.execute_instruction<0xFF>(0x003B8D, 4); return true;
    // src/unknown/C4/C47B77.asm:11 STA BG3_Y_POS
    case 0xC47B82: cpu.execute_instruction<0x8D>(0x00003B, 3); return true;
    // src/unknown/C4/C47B77.asm:12 LDA CURRENT_ENTITY_SLOT
    case 0xC47B85: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C47B77.asm:13 ASL
    case 0xC47B88: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47B77.asm:14 TAX
    case 0xC47B89: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47B77.asm:15 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC47B8A: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/unknown/C4/C47B77.asm:16 STA @LOCAL02
    case 0xC47B8D: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C47B77.asm:17 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC47B8F: cpu.execute_instruction<0xBD>(0x000E9A, 3); return true;
    // src/unknown/C4/C47B77.asm:18 STA @VIRTUAL04
    case 0xC47B92: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47B77.asm:19 LOADPTR ANIMATION_SEQUENCE_POINTERS, @VIRTUAL06
    case 0xC47B94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x002DE1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47B77.asm:19 LOADPTR ANIMATION_SEQUENCE_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC47B94.
    case 0xC47B96: cpu.execute_instruction<0x2D>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47B77.asm:19 LOADPTR ANIMATION_SEQUENCE_POINTERS, @VIRTUAL06
    case 0xC47B97: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47B77.asm:19 LOADPTR ANIMATION_SEQUENCE_POINTERS, @VIRTUAL06
    case 0xC47B99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CC, 2); else cpu.execute_instruction<0xA9>(0x0000CC, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47B77.asm:19 LOADPTR ANIMATION_SEQUENCE_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC47B99.
    case 0xC47B9B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47B77.asm:19 LOADPTR ANIMATION_SEQUENCE_POINTERS, @VIRTUAL06
    case 0xC47B9C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47B77.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC47B9E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47B77.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC47BA0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47B77.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC47BA2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47B77.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC47BA4: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C47B77.asm:21 LDA @LOCAL02
    case 0xC47BA6: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C47B77.asm:22 ASL
    case 0xC47BA8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47B77.asm:23 ASL
    case 0xC47BA9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47B77.asm:24 ASL
    case 0xC47BAA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47B77.asm:25 STA @VIRTUAL02
    case 0xC47BAB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C47B77.asm:26 LDY #1792
    case 0xC47BAD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000700, 3); return true;
    // src/unknown/C4/C47B77.asm:26 LDY #1792
    // Overlapping static entry reached from 0xC47BAD.
    case 0xC47BAF: cpu.execute_instruction<0x07>(0x0000A5, 2); return true;
    // src/unknown/C4/C47B77.asm:27 LDA @VIRTUAL04
    case 0xC47BB0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C47B77.asm:27 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC47BAF.
    case 0xC47BB1: cpu.execute_instruction<0x04>(0x000022, 2); return true;
    // src/unknown/C4/C47B77.asm:28 JSL MULT16
    case 0xC47BB2: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C47B77.asm:28 JSL MULT16
    // Overlapping static entry reached from 0xC47BB1.
    case 0xC47BB3: cpu.execute_instruction<0x32>(0x000090, 2); return true;
    // src/unknown/C4/C47B77.asm:28 JSL MULT16
    // Overlapping static entry reached from 0xC47BB3.
    case 0xC47BB5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000A85, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C47B77.asm:29 STORE_INT1632 @VIRTUAL0A
    case 0xC47BB6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C47B77.asm:29 STORE_INT1632 @VIRTUAL0A
    // Overlapping static entry reached from 0xC47BB5.
    case 0xC47BB7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C47B77.asm:29 STORE_INT1632 @VIRTUAL0A
    case 0xC47BB8: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/unknown/C4/C47B77.asm:30 LDA @VIRTUAL02
    case 0xC47BBA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C47B77.asm:31 INC
    case 0xC47BBC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47B77.asm:32 INC
    case 0xC47BBD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47B77.asm:33 INC
    case 0xC47BBE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47B77.asm:34 INC
    case 0xC47BBF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47B77.asm:35 CLC
    case 0xC47BC0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47B77.asm:36 ADC @VIRTUAL06
    case 0xC47BC1: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C47B77.asm:37 STA @VIRTUAL06
    case 0xC47BC3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C47B77.asm:38 LDA [@VIRTUAL06]
    case 0xC47BC5: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C47B77.asm:39 STORE_INT1632 @VIRTUAL06
    case 0xC47BC7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C47B77.asm:39 STORE_INT1632 @VIRTUAL06
    case 0xC47BC9: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C4/C47B77.asm:40 CLC
    case 0xC47BCB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C4/C47B77.asm:41 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC47BCC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C4/C47B77.asm:41 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC47BCE: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C4/C47B77.asm:41 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC47BD0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C4/C47B77.asm:41 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC47BD2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C4/C47B77.asm:41 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC47BD4: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C4/C47B77.asm:41 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC47BD6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C47B77.asm:42 CLC
    case 0xC47BD8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/unknown/C4/C47B77.asm:43 VAR_ADD_CONST_INT_ASSIGN BUFFER + 8, @VIRTUAL06
    case 0xC47BD9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C47B77.asm:43 VAR_ADD_CONST_INT_ASSIGN BUFFER + 8, @VIRTUAL06
    case 0xC47BDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C47B77.asm:43 VAR_ADD_CONST_INT_ASSIGN BUFFER + 8, @VIRTUAL06
    // Overlapping static entry reached from 0xC47BDB.
    case 0xC47BDD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/unknown/C4/C47B77.asm:43 VAR_ADD_CONST_INT_ASSIGN BUFFER + 8, @VIRTUAL06
    case 0xC47BDE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/unknown/C4/C47B77.asm:43 VAR_ADD_CONST_INT_ASSIGN BUFFER + 8, @VIRTUAL06
    case 0xC47BE0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C47B77.asm:43 VAR_ADD_CONST_INT_ASSIGN BUFFER + 8, @VIRTUAL06
    case 0xC47BE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C47B77.asm:43 VAR_ADD_CONST_INT_ASSIGN BUFFER + 8, @VIRTUAL06
    // Overlapping static entry reached from 0xC47BE2.
    case 0xC47BE4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/unknown/C4/C47B77.asm:43 VAR_ADD_CONST_INT_ASSIGN BUFFER + 8, @VIRTUAL06
    case 0xC47BE5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C47B77.asm:44 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    case 0xC47BE7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C47B77.asm:44 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    case 0xC47BE9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C47B77.asm:44 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    case 0xC47BEB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C47B77.asm:44 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    case 0xC47BED: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C47B77.asm:44 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    case 0xC47BEF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C47B77.asm:44 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    // Overlapping static entry reached from 0xC47BEF.
    case 0xC47BF1: cpu.execute_instruction<0x7C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C47B77.asm:44 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    case 0xC47BF2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000700, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C47B77.asm:44 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    // Overlapping static entry reached from 0xC47BF2.
    case 0xC47BF4: cpu.execute_instruction<0x07>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C47B77.asm:44 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    case 0xC47BF5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C47B77.asm:44 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    // Overlapping static entry reached from 0xC47BF4.
    case 0xC47BF6: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C4/C47B77.asm:44 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    case 0xC47BF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C47B77.asm:44 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    case 0xC47BF9: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C47B77.asm:44 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    // Overlapping static entry reached from 0xC47BF7.
    case 0xC47BFA: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C47B77.asm:44 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $0700, 0
    // Overlapping static entry reached from 0xC47BFA.
    case 0xC47BFC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0002A5, 3); return true;
    // src/unknown/C4/C47B77.asm:46 LDA @VIRTUAL02
    case 0xC47BFD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C47B77.asm:46 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC47BFC.
    case 0xC47BFE: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/unknown/C4/C47B77.asm:47 CLC
    case 0xC47BFF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47B77.asm:48 ADC #6
    case 0xC47C00: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/unknown/C4/C47B77.asm:48 ADC #6
    // Overlapping static entry reached from 0xC47C00.
    case 0xC47C02: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C47B77.asm:49 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xC47C03: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C47B77.asm:49 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xC47C05: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C47B77.asm:49 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xC47C07: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C47B77.asm:49 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xC47C09: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C47B77.asm:50 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC47C0B: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C47B77.asm:50 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC47C0D: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C47B77.asm:50 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC47C0F: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C47B77.asm:50 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC47C11: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C47B77.asm:51 CLC
    case 0xC47C13: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47B77.asm:52 ADC @VIRTUAL0A
    case 0xC47C14: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C47B77.asm:53 STA @VIRTUAL0A
    case 0xC47C16: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C47B77.asm:54 LDA [@VIRTUAL0A]
    case 0xC47C18: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C47B77.asm:55 AND #$00FF
    case 0xC47C1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C47B77.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC47C1A.
    case 0xC47C1C: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/C4/C47B77.asm:56 PHA
    case 0xC47C1D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C47B77.asm:57 LDA @VIRTUAL04
    case 0xC47C1E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C47B77.asm:58 INC
    case 0xC47C20: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C47B77.asm:59 PLY
    case 0xC47C21: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C4/C47B77.asm:60 STY @VIRTUAL04
    case 0xC47C22: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C4/C47B77.asm:61 CMP @VIRTUAL04
    case 0xC47C24: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C4/C47B77.asm:62 BNE @UNKNOWN0
    case 0xC47C26: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C47B77.asm:63 LDA #0
    case 0xC47C28: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C47B77.asm:63 LDA #0
    // Overlapping static entry reached from 0xC47C28.
    case 0xC47C2A: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C47B77.asm:64 BRA @UNKNOWN1
    case 0xC47C2B: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C4/C47B77.asm:66 LDA @VIRTUAL02
    case 0xC47C2D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C47B77.asm:67 CLC
    case 0xC47C2F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47B77.asm:68 ADC #7
    case 0xC47C30: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/unknown/C4/C47B77.asm:68 ADC #7
    // Overlapping static entry reached from 0xC47C30.
    case 0xC47C32: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C47B77.asm:69 CLC
    case 0xC47C33: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47B77.asm:70 ADC @VIRTUAL06
    case 0xC47C34: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C47B77.asm:71 STA @VIRTUAL06
    case 0xC47C36: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C47B77.asm:72 LDA [@VIRTUAL06]
    case 0xC47C38: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C47B77.asm:73 AND #$00FF
    case 0xC47C3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C47B77.asm:73 AND #$00FF
    // Overlapping static entry reached from 0xC47C3A.
    case 0xC47C3C: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47B77.asm:75 END_C_FUNCTION
    case 0xC47C3D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47B77.asm:75 END_C_FUNCTION
    case 0xC47C3E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C47F87.asm (unresolved).
bool execute_unresolved_c4_c47f87_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47F87.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47F87: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47F87.asm:6 END_STACK_VARS
    case 0xC47F89: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47F87.asm:6 END_STACK_VARS
    case 0xC47F8A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47F87.asm:6 END_STACK_VARS
    case 0xC47F8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47F87.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC47F8B.
    case 0xC47F8D: cpu.execute_instruction<0xFF>(0xA4AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47F87.asm:6 END_STACK_VARS
    case 0xC47F8E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C47F87.asm:7 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC47F8F: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/unknown/C4/C47F87.asm:7 LDA GAME_STATE+game_state::player_controlled_party_count
    // Overlapping static entry reached from 0xC47F8D.
    case 0xC47F91: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C47F87.asm:8 AND #$00FF
    case 0xC47F92: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C47F87.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC47F92.
    case 0xC47F94: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C47F87.asm:9 TAX
    case 0xC47F95: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47F87.asm:10 DEX
    case 0xC47F96: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C47F87.asm:11 LDA GAME_STATE+game_state::player_controlled_party_members,X
    case 0xC47F97: cpu.execute_instruction<0xBD>(0x009891, 3); return true;
    // src/unknown/C4/C47F87.asm:12 AND #$00FF
    case 0xC47F9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C47F87.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC47F9A.
    case 0xC47F9C: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C47F87.asm:13 ASL
    case 0xC47F9D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C47F87.asm:14 TAX
    case 0xC47F9E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47F87.asm:15 LDA CHOSEN_FOUR_PTRS,X
    case 0xC47F9F: cpu.execute_instruction<0xBD>(0x004DC8, 3); return true;
    // src/unknown/C4/C47F87.asm:16 TAX
    case 0xC47FA2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47F87.asm:17 LDA a:char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC47FA3: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C4/C47F87.asm:18 AND #$00FF
    case 0xC47FA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C47F87.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC47FA6.
    case 0xC47FA8: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C47F87.asm:19 TAX
    case 0xC47FA9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47F87.asm:20 CPX #STATUS_0::UNCONSCIOUS
    case 0xC47FAA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/unknown/C4/C47F87.asm:20 CPX #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC47FAA.
    case 0xC47FAC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C47F87.asm:21 BEQ @UNKNOWN0
    case 0xC47FAD: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C47F87.asm:22 CPX #STATUS_0::DIAMONDIZED
    case 0xC47FAF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/unknown/C4/C47F87.asm:22 CPX #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC47FAF.
    case 0xC47FB1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C47F87.asm:23 BNE @UNKNOWN1
    case 0xC47FB2: cpu.execute_instruction<0xD0>(0x00001B, 2); return true;
    // src/unknown/C4/C47F87.asm:25 LDA DISABLED_TRANSITIONS
    case 0xC47FB4: cpu.execute_instruction<0xAD>(0x00B4B6, 3); return true;
    // src/unknown/C4/C47F87.asm:26 BNE @UNKNOWN1
    case 0xC47FB7: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47F87.asm:27 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    case 0xC47FB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x002108, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47F87.asm:27 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    // Overlapping static entry reached from 0xC47FB9.
    case 0xC47FBB: cpu.execute_instruction<0x21>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47F87.asm:27 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    case 0xC47FBC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47F87.asm:27 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    // Overlapping static entry reached from 0xC47FBB.
    case 0xC47FBD: cpu.execute_instruction<0x0E>(0x00E0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47F87.asm:27 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    case 0xC47FBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47F87.asm:27 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    // Overlapping static entry reached from 0xC47FBE.
    case 0xC47FC0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47F87.asm:27 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    case 0xC47FC1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47F87.asm:28 LDX #BPP4PALETTE_SIZE * 2
    case 0xC47FC3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // src/unknown/C4/C47F87.asm:28 LDX #BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC47FC3.
    case 0xC47FC5: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C47F87.asm:29 LDA #.LOWORD(PALETTES)
    case 0xC47FC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C4/C47F87.asm:29 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC47FC6.
    case 0xC47FC8: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C47F87.asm:30 JSL MEMCPY16
    case 0xC47FC9: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C4/C47F87.asm:31 BRA @UNKNOWN2
    case 0xC47FCD: cpu.execute_instruction<0x80>(0x000030, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47F87.asm:33 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC47FCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x001FC8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47F87.asm:33 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC47FCF.
    case 0xC47FD1: cpu.execute_instruction<0x1F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47F87.asm:33 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC47FD2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47F87.asm:33 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC47FD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47F87.asm:33 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC47FD1.
    case 0xC47FD5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47F87.asm:33 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC47FD4.
    case 0xC47FD6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47F87.asm:33 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC47FD7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47F87.asm:33 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC47FD5.
    case 0xC47FD8: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C47F87.asm:34 LDA GAME_STATE+game_state::text_flavour
    case 0xC47FD9: cpu.execute_instruction<0xAD>(0x0099CD, 3); return true;
    // src/unknown/C4/C47F87.asm:35 AND #$00FF
    case 0xC47FDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C47F87.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC47FDC.
    case 0xC47FDE: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C4/C47F87.asm:36 DEC
    case 0xC47FDF: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C4/C47F87.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC47FE0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C4/C47F87.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC47FE2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C4/C47F87.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC47FE3: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C47F87.asm:38 TAX
    case 0xC47FE5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C47F87.asm:39 LDA f:TEXT_WINDOW_PROPERTIES,X
    case 0xC47FE6: cpu.execute_instruction<0xBF>(0xE01FB9, 4); return true;
    // src/unknown/C4/C47F87.asm:40 CLC
    case 0xC47FEA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C47F87.asm:41 ADC @VIRTUAL06
    case 0xC47FEB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C47F87.asm:42 STA @VIRTUAL06
    case 0xC47FED: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C47F87.asm:43 STA @LOCAL00
    case 0xC47FEF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C47F87.asm:44 LDA @VIRTUAL06+2
    case 0xC47FF1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C47F87.asm:45 STA @LOCAL00+2
    case 0xC47FF3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C47F87.asm:46 LDX #BPP4PALETTE_SIZE * 2
    case 0xC47FF5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // src/unknown/C4/C47F87.asm:46 LDX #BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC47FF5.
    case 0xC47FF7: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C47F87.asm:47 LDA #.LOWORD(PALETTES)
    case 0xC47FF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C4/C47F87.asm:47 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC47FF8.
    case 0xC47FFA: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C47F87.asm:48 JSL MEMCPY16
    case 0xC47FFB: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C4/C47F87.asm:50 STZ PALETTES
    case 0xC47FFF: cpu.execute_instruction<0x9C>(0x000200, 3); return true;
    // src/unknown/C4/C47F87.asm:51 LDA #8
    case 0xC48002: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C4/C47F87.asm:51 LDA #8
    // Overlapping static entry reached from 0xC48002.
    case 0xC48004: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C47F87.asm:52 JSL UNKNOWN_C0856B
    case 0xC48005: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47F87.asm:53 END_C_FUNCTION
    case 0xC48009: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47F87.asm:53 END_C_FUNCTION
    case 0xC4800A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4810E.asm (unresolved).
bool execute_unresolved_c4_c4810e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4810E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4810E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4810E.asm:12 END_STACK_VARS
    case 0xC48110: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4810E.asm:12 END_STACK_VARS
    case 0xC48111: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4810E.asm:12 END_STACK_VARS
    case 0xC48112: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4810E.asm:12 END_STACK_VARS
    case 0xC48113: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EB, 2); else cpu.execute_instruction<0x69>(0x00FFEB, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4810E.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC48113.
    case 0xC48115: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4810E.asm:12 END_STACK_VARS
    case 0xC48116: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4810E.asm:12 END_STACK_VARS
    case 0xC48117: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:13 STA @LOCAL03
    case 0xC48118: cpu.execute_instruction<0x85>(0x000013, 2); return true;
    // src/unknown/C4/C4810E.asm:13 STA @LOCAL03
    // Overlapping static entry reached from 0xC48115.
    case 0xC48119: cpu.execute_instruction<0x13>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4810E.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC4811A: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4810E.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    // Overlapping static entry reached from 0xC48119.
    case 0xC4811B: cpu.execute_instruction<0x23>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4810E.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC4811C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4810E.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4811B.
    case 0xC4811D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4810E.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC4811E: cpu.execute_instruction<0xA5>(0x000025, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4810E.asm:14 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC48120: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4810E.asm:15 LOADPTR BUFFER, @VIRTUAL06
    case 0xC48122: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4810E.asm:15 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC48122.
    case 0xC48124: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4810E.asm:15 LOADPTR BUFFER, @VIRTUAL06
    case 0xC48125: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4810E.asm:15 LOADPTR BUFFER, @VIRTUAL06
    case 0xC48127: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4810E.asm:15 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC48127.
    case 0xC48129: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4810E.asm:15 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4812A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4810E.asm:16 LDA @LOCAL03
    case 0xC4812C: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/unknown/C4/C4810E.asm:17 AND #$000F
    case 0xC4812E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C4/C4810E.asm:17 AND #$000F
    // Overlapping static entry reached from 0xC4812E.
    case 0xC48130: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4810E.asm:18 STA @VIRTUAL02
    case 0xC48131: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4810E.asm:19 LDA @LOCAL03
    case 0xC48133: cpu.execute_instruction<0xA5>(0x000013, 2); return true;
    // src/unknown/C4/C4810E.asm:20 AND #$FFF0
    case 0xC48135: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x00FFF0, 3); return true;
    // src/unknown/C4/C4810E.asm:20 AND #$FFF0
    // Overlapping static entry reached from 0xC48135.
    case 0xC48137: cpu.execute_instruction<0xFF>(0x65180A, 4); return true;
    // src/unknown/C4/C4810E.asm:21 ASL
    case 0xC48138: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:22 CLC
    case 0xC48139: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:23 ADC @VIRTUAL02
    case 0xC4813A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4810E.asm:23 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC48137.
    case 0xC4813B: cpu.execute_instruction<0x02>(0x00000A, 2); return true;
    // src/unknown/C4/C4810E.asm:24 ASL
    case 0xC4813C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:25 ASL
    case 0xC4813D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:26 ASL
    case 0xC4813E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:27 ASL
    case 0xC4813F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:28 CLC
    case 0xC48140: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:29 ADC @VIRTUAL06
    case 0xC48141: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:30 STA @VIRTUAL06
    case 0xC48143: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:31 LDY #6
    case 0xC48145: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C4/C4810E.asm:31 LDY #6
    // Overlapping static entry reached from 0xC48145.
    case 0xC48147: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4810E.asm:32 STY @LOCAL03
    case 0xC48148: cpu.execute_instruction<0x84>(0x000013, 2); return true;
    // src/unknown/C4/C4810E.asm:33 JMP @UNKNOWN7
    case 0xC4814A: cpu.execute_instruction<0x4C>(0x008267, 3); return true;
    // src/unknown/C4/C4810E.asm:35 LDX #0
    case 0xC4814D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4810E.asm:35 LDX #0
    // Overlapping static entry reached from 0xC4814D.
    case 0xC4814F: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4810E.asm:36 STX @LOCAL02
    case 0xC48150: cpu.execute_instruction<0x86>(0x000011, 2); return true;
    // src/unknown/C4/C4810E.asm:37 BRA @UNKNOWN2
    case 0xC48152: cpu.execute_instruction<0x80>(0x00006F, 2); return true;
    // src/unknown/C4/C4810E.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC48154: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4810E.asm:40 LDA [@VIRTUAL06]
    case 0xC48156: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:41 STA @LOCAL01
    case 0xC48158: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4810E.asm:42 STA @VIRTUAL00
    case 0xC4815A: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:43 LDY #1
    case 0xC4815C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4810E.asm:43 LDY #1
    // Overlapping static entry reached from 0xC4815C.
    case 0xC4815E: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4810E.asm:44 LDA [@VIRTUAL06],Y
    case 0xC4815F: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:45 STA @VIRTUAL01
    case 0xC48161: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C4/C4810E.asm:46 LDA @LOCAL01
    case 0xC48163: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4810E.asm:47 EOR @VIRTUAL01
    case 0xC48165: cpu.execute_instruction<0x45>(0x000001, 2); return true;
    // src/unknown/C4/C4810E.asm:48 AND @VIRTUAL00
    case 0xC48167: cpu.execute_instruction<0x25>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC48169: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4810E.asm:50 AND #$00FF
    case 0xC4816B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4810E.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC4816B.
    case 0xC4816D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4810E.asm:51 STA @LOCAL00
    case 0xC4816E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4810E.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC48170: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4810E.asm:53 LDY #2
    case 0xC48172: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C4/C4810E.asm:53 LDY #2
    // Overlapping static entry reached from 0xC48172.
    case 0xC48174: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4810E.asm:54 LDA [@VIRTUAL06],Y
    case 0xC48175: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:55 STA @VIRTUAL00
    case 0xC48177: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:56 LDY #3
    case 0xC48179: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C4/C4810E.asm:56 LDY #3
    // Overlapping static entry reached from 0xC48179.
    case 0xC4817B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4810E.asm:57 LDA [@VIRTUAL06],Y
    case 0xC4817C: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:58 STA @VIRTUAL01
    case 0xC4817E: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C4/C4810E.asm:59 LDA @VIRTUAL00
    case 0xC48180: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:60 EOR @VIRTUAL01
    case 0xC48182: cpu.execute_instruction<0x45>(0x000001, 2); return true;
    // src/unknown/C4/C4810E.asm:61 AND @VIRTUAL00
    case 0xC48184: cpu.execute_instruction<0x25>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:62 REP #PROC_FLAGS::ACCUM8
    case 0xC48186: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4810E.asm:63 AND #$00FF
    case 0xC48188: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4810E.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC48188.
    case 0xC4818A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4810E.asm:64 STA @VIRTUAL02
    case 0xC4818B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4810E.asm:65 LDY @LOCAL03
    case 0xC4818D: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C4/C4810E.asm:66 SEP #PROC_FLAGS::INDEX8
    case 0xC4818F: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C4810E.asm:67 STY @VIRTUAL00
    case 0xC48191: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:68 LDA @VIRTUAL02
    case 0xC48193: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4810E.asm:69 JSL ASR8_UNKNOWN1
    case 0xC48195: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/unknown/C4/C4810E.asm:70 AND #$0003
    case 0xC48199: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C4/C4810E.asm:70 AND #$0003
    // Overlapping static entry reached from 0xC48199.
    case 0xC4819B: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4810E.asm:71 ASL
    case 0xC4819C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:72 ASL
    case 0xC4819D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:73 STA @VIRTUAL02
    case 0xC4819E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4810E.asm:74 LDY @VIRTUAL00
    case 0xC481A0: cpu.execute_instruction<0xA4>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:75 LDA @LOCAL00
    case 0xC481A2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4810E.asm:76 JSL ASR8_UNKNOWN1
    case 0xC481A4: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/unknown/C4/C4810E.asm:77 AND #$0003
    case 0xC481A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C4/C4810E.asm:77 AND #$0003
    // Overlapping static entry reached from 0xC481A8.
    case 0xC481AA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4810E.asm:78 CLC
    case 0xC481AB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:79 ADC @VIRTUAL02
    case 0xC481AC: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4810E.asm:80 STA [@VIRTUAL0A]
    case 0xC481AE: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4810E.asm:81 INC @VIRTUAL0A
    case 0xC481B0: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4810E.asm:82 INC @VIRTUAL0A
    case 0xC481B2: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4810E.asm:83 LDA #4
    case 0xC481B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C4/C4810E.asm:83 LDA #4
    // Overlapping static entry reached from 0xC481B4.
    case 0xC481B6: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4810E.asm:84 CLC
    case 0xC481B7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:85 ADC @VIRTUAL06
    case 0xC481B8: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:86 STA @VIRTUAL06
    case 0xC481BA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:87 REP #PROC_FLAGS::INDEX8
    case 0xC481BC: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C4810E.asm:88 LDX @LOCAL02
    case 0xC481BE: cpu.execute_instruction<0xA6>(0x000011, 2); return true;
    // src/unknown/C4/C4810E.asm:89 INX
    case 0xC481C0: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:90 STX @LOCAL02
    case 0xC481C1: cpu.execute_instruction<0x86>(0x000011, 2); return true;
    // src/unknown/C4/C4810E.asm:92 CPX #4
    case 0xC481C3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/unknown/C4/C4810E.asm:92 CPX #4
    // Overlapping static entry reached from 0xC481C3.
    case 0xC481C5: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4810E.asm:93 BCCL @UNKNOWN1
    case 0xC481C6: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4810E.asm:93 BCCL @UNKNOWN1
    case 0xC481C8: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4810E.asm:93 BCCL @UNKNOWN1
    case 0xC481CA: cpu.execute_instruction<0x4C>(0x008154, 3); return true;
    // src/unknown/C4/C4810E.asm:94 LDA #240
    case 0xC481CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F0, 2); else cpu.execute_instruction<0xA9>(0x0000F0, 3); return true;
    // src/unknown/C4/C4810E.asm:94 LDA #240
    // Overlapping static entry reached from 0xC481CD.
    case 0xC481CF: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4810E.asm:95 CLC
    case 0xC481D0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:96 ADC @VIRTUAL06
    case 0xC481D1: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:97 STA @VIRTUAL06
    case 0xC481D3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:98 LDX #0
    case 0xC481D5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4810E.asm:98 LDX #0
    // Overlapping static entry reached from 0xC481D5.
    case 0xC481D7: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4810E.asm:99 STX @LOCAL02
    case 0xC481D8: cpu.execute_instruction<0x86>(0x000011, 2); return true;
    // src/unknown/C4/C4810E.asm:100 BRA @UNKNOWN5
    case 0xC481DA: cpu.execute_instruction<0x80>(0x00006F, 2); return true;
    // src/unknown/C4/C4810E.asm:102 SEP #PROC_FLAGS::ACCUM8
    case 0xC481DC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4810E.asm:103 LDA [@VIRTUAL06]
    case 0xC481DE: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:104 STA @LOCAL01
    case 0xC481E0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4810E.asm:105 STA @VIRTUAL00
    case 0xC481E2: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:106 LDY #1
    case 0xC481E4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4810E.asm:106 LDY #1
    // Overlapping static entry reached from 0xC481E4.
    case 0xC481E6: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4810E.asm:107 LDA [@VIRTUAL06],Y
    case 0xC481E7: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:108 STA @VIRTUAL01
    case 0xC481E9: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C4/C4810E.asm:109 LDA @LOCAL01
    case 0xC481EB: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4810E.asm:110 EOR @VIRTUAL01
    case 0xC481ED: cpu.execute_instruction<0x45>(0x000001, 2); return true;
    // src/unknown/C4/C4810E.asm:111 AND @VIRTUAL00
    case 0xC481EF: cpu.execute_instruction<0x25>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:112 REP #PROC_FLAGS::ACCUM8
    case 0xC481F1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4810E.asm:113 AND #$00FF
    case 0xC481F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4810E.asm:113 AND #$00FF
    // Overlapping static entry reached from 0xC481F3.
    case 0xC481F5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4810E.asm:114 STA @LOCAL00
    case 0xC481F6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4810E.asm:115 SEP #PROC_FLAGS::ACCUM8
    case 0xC481F8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4810E.asm:116 LDY #2
    case 0xC481FA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C4/C4810E.asm:116 LDY #2
    // Overlapping static entry reached from 0xC481FA.
    case 0xC481FC: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4810E.asm:117 LDA [@VIRTUAL06],Y
    case 0xC481FD: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:118 STA @VIRTUAL00
    case 0xC481FF: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:119 LDY #3
    case 0xC48201: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C4/C4810E.asm:119 LDY #3
    // Overlapping static entry reached from 0xC48201.
    case 0xC48203: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4810E.asm:120 LDA [@VIRTUAL06],Y
    case 0xC48204: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:121 STA @VIRTUAL01
    case 0xC48206: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C4/C4810E.asm:122 LDA @VIRTUAL00
    case 0xC48208: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:123 EOR @VIRTUAL01
    case 0xC4820A: cpu.execute_instruction<0x45>(0x000001, 2); return true;
    // src/unknown/C4/C4810E.asm:124 AND @VIRTUAL00
    case 0xC4820C: cpu.execute_instruction<0x25>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:125 REP #PROC_FLAGS::ACCUM8
    case 0xC4820E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4810E.asm:126 AND #$00FF
    case 0xC48210: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4810E.asm:126 AND #$00FF
    // Overlapping static entry reached from 0xC48210.
    case 0xC48212: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4810E.asm:127 STA @VIRTUAL02
    case 0xC48213: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4810E.asm:128 LDY @LOCAL03
    case 0xC48215: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C4/C4810E.asm:129 SEP #PROC_FLAGS::INDEX8
    case 0xC48217: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C4810E.asm:130 STY @VIRTUAL00
    case 0xC48219: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:131 LDA @VIRTUAL02
    case 0xC4821B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4810E.asm:132 JSL ASR8_UNKNOWN1
    case 0xC4821D: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/unknown/C4/C4810E.asm:133 AND #$0003
    case 0xC48221: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C4/C4810E.asm:133 AND #$0003
    // Overlapping static entry reached from 0xC48221.
    case 0xC48223: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4810E.asm:134 ASL
    case 0xC48224: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:135 ASL
    case 0xC48225: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:136 STA @VIRTUAL02
    case 0xC48226: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4810E.asm:137 LDY @VIRTUAL00
    case 0xC48228: cpu.execute_instruction<0xA4>(0x000000, 2); return true;
    // src/unknown/C4/C4810E.asm:138 LDA @LOCAL00
    case 0xC4822A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4810E.asm:139 JSL ASR8_UNKNOWN1
    case 0xC4822C: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/unknown/C4/C4810E.asm:140 AND #$0003
    case 0xC48230: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C4/C4810E.asm:140 AND #$0003
    // Overlapping static entry reached from 0xC48230.
    case 0xC48232: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4810E.asm:141 CLC
    case 0xC48233: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:142 ADC @VIRTUAL02
    case 0xC48234: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4810E.asm:143 STA [@VIRTUAL0A]
    case 0xC48236: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4810E.asm:144 INC @VIRTUAL0A
    case 0xC48238: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4810E.asm:145 INC @VIRTUAL0A
    case 0xC4823A: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4810E.asm:146 LDA #4
    case 0xC4823C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C4/C4810E.asm:146 LDA #4
    // Overlapping static entry reached from 0xC4823C.
    case 0xC4823E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4810E.asm:147 CLC
    case 0xC4823F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:148 ADC @VIRTUAL06
    case 0xC48240: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:149 STA @VIRTUAL06
    case 0xC48242: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:150 REP #PROC_FLAGS::INDEX8
    case 0xC48244: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C4810E.asm:151 LDX @LOCAL02
    case 0xC48246: cpu.execute_instruction<0xA6>(0x000011, 2); return true;
    // src/unknown/C4/C4810E.asm:152 INX
    case 0xC48248: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:153 STX @LOCAL02
    case 0xC48249: cpu.execute_instruction<0x86>(0x000011, 2); return true;
    // src/unknown/C4/C4810E.asm:155 CPX #4
    case 0xC4824B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/unknown/C4/C4810E.asm:155 CPX #4
    // Overlapping static entry reached from 0xC4824B.
    case 0xC4824D: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4810E.asm:156 BCCL @UNKNOWN4
    case 0xC4824E: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4810E.asm:156 BCCL @UNKNOWN4
    case 0xC48250: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4810E.asm:156 BCCL @UNKNOWN4
    case 0xC48252: cpu.execute_instruction<0x4C>(0x0081DC, 3); return true;
    // src/unknown/C4/C4810E.asm:157 LDA #272
    case 0xC48255: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000110, 3); return true;
    // src/unknown/C4/C4810E.asm:157 LDA #272
    // Overlapping static entry reached from 0xC48255.
    case 0xC48257: cpu.execute_instruction<0x01>(0x000049, 2); return true;
    // src/unknown/C4/C4810E.asm:158 EOR #$FFFF
    case 0xC48258: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4810E.asm:158 EOR #$FFFF
    // Overlapping static entry reached from 0xC48257.
    case 0xC48259: cpu.execute_instruction<0xFF>(0x181AFF, 4); return true;
    // src/unknown/C4/C4810E.asm:158 EOR #$FFFF
    // Overlapping static entry reached from 0xC48258.
    case 0xC4825A: cpu.execute_instruction<0xFF>(0x65181A, 4); return true;
    // src/unknown/C4/C4810E.asm:159 INC
    case 0xC4825B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:160 CLC
    case 0xC4825C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:161 ADC @VIRTUAL06
    case 0xC4825D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:161 ADC @VIRTUAL06
    // Overlapping static entry reached from 0xC4825A.
    case 0xC4825E: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // src/unknown/C4/C4810E.asm:162 STA @VIRTUAL06
    case 0xC4825F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4810E.asm:162 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC4825E.
    case 0xC48260: cpu.execute_instruction<0x06>(0x0000A4, 2); return true;
    // src/unknown/C4/C4810E.asm:163 LDY @LOCAL03
    case 0xC48261: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C4/C4810E.asm:163 LDY @LOCAL03
    // Overlapping static entry reached from 0xC48260.
    case 0xC48262: cpu.execute_instruction<0x13>(0x000088, 2); return true;
    // src/unknown/C4/C4810E.asm:164 DEY
    case 0xC48263: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:165 DEY
    case 0xC48264: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C4/C4810E.asm:166 STY @LOCAL03
    case 0xC48265: cpu.execute_instruction<0x84>(0x000013, 2); return true;
    // src/unknown/C4/C4810E.asm:168 CPY #7
    case 0xC48267: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000007, 2); else cpu.execute_instruction<0xC0>(0x000007, 3); return true;
    // src/unknown/C4/C4810E.asm:168 CPY #7
    // Overlapping static entry reached from 0xC48267.
    case 0xC48269: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4810E.asm:169 BCCL @UNKNOWN0
    case 0xC4826A: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4810E.asm:169 BCCL @UNKNOWN0
    case 0xC4826C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4810E.asm:169 BCCL @UNKNOWN0
    case 0xC4826E: cpu.execute_instruction<0x4C>(0x00814D, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4810E.asm:170 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC48271: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4810E.asm:170 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC48273: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4810E.asm:170 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC48275: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4810E.asm:170 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC48277: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4810E.asm:171 END_C_FUNCTION
    case 0xC48279: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4810E.asm:171 END_C_FUNCTION
    case 0xC4827A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4827B.asm (unresolved).
bool execute_unresolved_c4_c4827b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4827B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4827B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4827B.asm:13 END_STACK_VARS
    case 0xC4827D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4827B.asm:13 END_STACK_VARS
    case 0xC4827E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4827B.asm:13 END_STACK_VARS
    case 0xC4827F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4827B.asm:13 END_STACK_VARS
    case 0xC48280: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4827B.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC48280.
    case 0xC48282: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4827B.asm:13 END_STACK_VARS
    case 0xC48283: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4827B.asm:13 END_STACK_VARS
    case 0xC48284: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:14 STA @LOCAL05
    case 0xC48285: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4827B.asm:14 STA @LOCAL05
    // Overlapping static entry reached from 0xC48282.
    case 0xC48286: cpu.execute_instruction<0x1C>(0x00388A, 3); return true;
    // src/unknown/C4/C4827B.asm:15 TXA
    case 0xC48287: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:16 SEC
    case 0xC48288: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:17 SBC #$50
    case 0xC48289: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000050, 2); else cpu.execute_instruction<0xE9>(0x000050, 3); return true;
    // src/unknown/C4/C4827B.asm:17 SBC #$50
    // Overlapping static entry reached from 0xC48289.
    case 0xC4828B: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C4/C4827B.asm:18 AND #$007F
    case 0xC4828C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/unknown/C4/C4827B.asm:18 AND #$007F
    // Overlapping static entry reached from 0xC4828C.
    case 0xC4828E: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C4827B.asm:19 TAY
    case 0xC4828F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:20 STY @LOCAL04
    case 0xC48290: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4827B.asm:21 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC48292: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000054, 2); else cpu.execute_instruction<0xA9>(0x00F054, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4827B.asm:21 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC48292.
    case 0xC48294: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4827B.asm:21 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC48295: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4827B.asm:21 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC48294.
    case 0xC48296: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4827B.asm:21 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC48297: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4827B.asm:21 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC48297.
    case 0xC48299: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4827B.asm:21 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC4829A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4827B.asm:22 LDA @LOCAL05
    case 0xC4829C: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C4/C4827B.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC4829E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C4/C4827B.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC482A0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C4/C4827B.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC482A1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C4/C4827B.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC482A3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C4/C4827B.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(font_table_entry)
    case 0xC482A4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:24 TAX
    case 0xC482A5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:25 CLC
    case 0xC482A6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:26 ADC #font_table_entry::height
    case 0xC482A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C4/C4827B.asm:26 ADC #font_table_entry::height
    // Overlapping static entry reached from 0xC482A7.
    case 0xC482A9: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C4827B.asm:27 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC482AA: cpu.execute_instruction<0xA4>(0x00000A, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C4/C4827B.asm:27 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC482AC: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C4/C4827B.asm:27 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC482AE: cpu.execute_instruction<0xA4>(0x00000C, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C4/C4827B.asm:27 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC482B0: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C4827B.asm:28 CLC
    case 0xC482B2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:29 ADC @VIRTUAL06
    case 0xC482B3: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4827B.asm:30 STA @VIRTUAL06
    case 0xC482B5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4827B.asm:31 LDA [@VIRTUAL06]
    case 0xC482B7: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4827B.asm:32 STA @LOCAL03
    case 0xC482B9: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4827B.asm:33 TXA
    case 0xC482BB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:34 INC
    case 0xC482BC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:35 INC
    case 0xC482BD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:36 INC
    case 0xC482BE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:37 INC
    case 0xC482BF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C4827B.asm:38 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC482C0: cpu.execute_instruction<0xA4>(0x00000A, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C4/C4827B.asm:38 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC482C2: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C4/C4827B.asm:38 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC482C4: cpu.execute_instruction<0xA4>(0x00000C, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C4/C4827B.asm:38 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC482C6: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C4827B.asm:39 CLC
    case 0xC482C8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:40 ADC @VIRTUAL06
    case 0xC482C9: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4827B.asm:41 STA @VIRTUAL06
    case 0xC482CB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4827B.asm:42 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC482CD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4827B.asm:42 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC482CD.
    case 0xC482CF: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4827B.asm:42 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC482D0: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4827B.asm:42 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC482D2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4827B.asm:42 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC482D3: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4827B.asm:42 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC482D5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4827B.asm:42 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC482D7: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C4827B.asm:43 LDY @LOCAL04
    case 0xC482D9: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C4/C4827B.asm:44 LDA @LOCAL03
    case 0xC482DB: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4827B.asm:45 JSL MULT16
    case 0xC482DD: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C4827B.asm:46 CLC
    case 0xC482E1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:47 ADC @VIRTUAL06
    case 0xC482E2: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4827B.asm:48 STA @VIRTUAL06
    case 0xC482E4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4827B.asm:49 STA @LOCAL02
    case 0xC482E6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4827B.asm:50 LDA @VIRTUAL06+2
    case 0xC482E8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4827B.asm:51 STA @LOCAL02+2
    case 0xC482EA: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4827B.asm:52 TXA
    case 0xC482EC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:53 CLC
    case 0xC482ED: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:54 ADC #font_table_entry::width
    case 0xC482EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/unknown/C4/C4827B.asm:54 ADC #font_table_entry::width
    // Overlapping static entry reached from 0xC482EE.
    case 0xC482F0: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C4827B.asm:55 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC482F1: cpu.execute_instruction<0xA4>(0x00000A, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C4/C4827B.asm:55 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC482F3: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C4/C4827B.asm:55 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC482F5: cpu.execute_instruction<0xA4>(0x00000C, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C4/C4827B.asm:55 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC482F7: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C4827B.asm:56 CLC
    case 0xC482F9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:57 ADC @VIRTUAL06
    case 0xC482FA: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4827B.asm:58 STA @VIRTUAL06
    case 0xC482FC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4827B.asm:59 LDA [@VIRTUAL06]
    case 0xC482FE: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4827B.asm:60 STA @VIRTUAL02
    case 0xC48300: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4827B.asm:61 TXA
    case 0xC48302: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:62 CLC
    case 0xC48303: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:63 ADC @VIRTUAL0A
    case 0xC48304: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4827B.asm:64 STA @VIRTUAL0A
    case 0xC48306: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4827B.asm:65 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC48308: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4827B.asm:65 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    // Overlapping static entry reached from 0xC48308.
    case 0xC4830A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4827B.asm:65 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC4830B: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4827B.asm:65 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC4830D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4827B.asm:65 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC4830E: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4827B.asm:65 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC48310: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4827B.asm:65 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL0A
    case 0xC48312: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/C4/C4827B.asm:66 LDY @LOCAL04
    case 0xC48314: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C4/C4827B.asm:67 TYA
    case 0xC48316: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:68 CLC
    case 0xC48317: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:69 ADC @VIRTUAL0A
    case 0xC48318: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4827B.asm:70 STA @VIRTUAL0A
    case 0xC4831A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4827B.asm:71 LDA [@VIRTUAL0A]
    case 0xC4831C: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4827B.asm:72 AND #$00FF
    case 0xC4831E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4827B.asm:72 AND #$00FF
    // Overlapping static entry reached from 0xC4831E.
    case 0xC48320: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4827B.asm:73 STA @LOCAL01
    case 0xC48321: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4827B.asm:74 LDA CHARACTER_PADDING
    case 0xC48323: cpu.execute_instruction<0xAD>(0x005E6D, 3); return true;
    // src/unknown/C4/C4827B.asm:75 AND #$00FF
    case 0xC48326: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4827B.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC48326.
    case 0xC48328: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4827B.asm:76 STA @VIRTUAL04
    case 0xC48329: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4827B.asm:77 LDA @LOCAL01
    case 0xC4832B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4827B.asm:78 CLC
    case 0xC4832D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:79 ADC @VIRTUAL04
    case 0xC4832E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4827B.asm:80 TAY
    case 0xC48330: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:81 STY @LOCAL01
    case 0xC48331: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C4/C4827B.asm:82 CPY #8
    case 0xC48333: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000008, 2); else cpu.execute_instruction<0xC0>(0x000008, 3); return true;
    // src/unknown/C4/C4827B.asm:82 CPY #8
    // Overlapping static entry reached from 0xC48333.
    case 0xC48335: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C4827B.asm:83 BLTEQ @UNKNOWN1
    case 0xC48336: cpu.execute_instruction<0x90>(0x000039, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C4827B.asm:83 BLTEQ @UNKNOWN1
    case 0xC48338: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4827B.asm:85 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4833A: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4827B.asm:85 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4833C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4827B.asm:85 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4833E: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4827B.asm:85 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC48340: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4827B.asm:86 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC48342: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4827B.asm:86 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC48344: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4827B.asm:86 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC48346: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4827B.asm:86 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC48348: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4827B.asm:87 LDX @VIRTUAL02
    case 0xC4834A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4827B.asm:88 LDA #8
    case 0xC4834C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C4/C4827B.asm:88 LDA #8
    // Overlapping static entry reached from 0xC4834C.
    case 0xC4834E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4827B.asm:89 JSL UNKNOWN_C44B3A
    case 0xC4834F: cpu.execute_instruction<0x22>(0xC44B3A, 4); return true;
    // src/unknown/C4/C4827B.asm:90 LDY @LOCAL01
    case 0xC48353: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C4/C4827B.asm:91 TYA
    case 0xC48355: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:92 SEC
    case 0xC48356: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:93 SBC #8
    case 0xC48357: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/unknown/C4/C4827B.asm:93 SBC #8
    // Overlapping static entry reached from 0xC48357.
    case 0xC48359: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C4827B.asm:94 TAY
    case 0xC4835A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:95 STY @LOCAL01
    case 0xC4835B: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C4/C4827B.asm:96 LDA @VIRTUAL02
    case 0xC4835D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4827B.asm:97 CLC
    case 0xC4835F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:98 ADC @VIRTUAL06
    case 0xC48360: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4827B.asm:99 STA @VIRTUAL06
    case 0xC48362: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4827B.asm:100 STA @LOCAL02
    case 0xC48364: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4827B.asm:101 LDA @VIRTUAL06+2
    case 0xC48366: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4827B.asm:102 STA @LOCAL02+2
    case 0xC48368: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4827B.asm:103 CPY #8
    case 0xC4836A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000008, 2); else cpu.execute_instruction<0xC0>(0x000008, 3); return true;
    // src/unknown/C4/C4827B.asm:103 CPY #8
    // Overlapping static entry reached from 0xC4836A.
    case 0xC4836C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C4/C4827B.asm:104 BGT @UNKNOWN0
    case 0xC4836D: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C4/C4827B.asm:104 BGT @UNKNOWN0
    case 0xC4836F: cpu.execute_instruction<0xB0>(0x0000C9, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4827B.asm:106 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC48371: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4827B.asm:106 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC48373: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4827B.asm:106 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC48375: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4827B.asm:106 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC48377: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4827B.asm:107 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC48379: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4827B.asm:107 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4837B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4827B.asm:107 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4837D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4827B.asm:107 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4837F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4827B.asm:108 LDX @VIRTUAL02
    case 0xC48381: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4827B.asm:109 TYA
    case 0xC48383: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4827B.asm:110 JSL UNKNOWN_C44B3A
    case 0xC48384: cpu.execute_instruction<0x22>(0xC44B3A, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4827B.asm:111 END_C_FUNCTION
    case 0xC48388: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4827B.asm:111 END_C_FUNCTION
    case 0xC48389: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4838A.asm (unresolved).
bool execute_unresolved_c4_c4838a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4838A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4838A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4838A.asm:21 END_STACK_VARS
    case 0xC4838C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4838A.asm:21 END_STACK_VARS
    case 0xC4838D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4838A.asm:21 END_STACK_VARS
    case 0xC4838E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4838A.asm:21 END_STACK_VARS
    case 0xC4838F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x00FFCE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4838A.asm:21 END_STACK_VARS
    // Overlapping static entry reached from 0xC4838F.
    case 0xC48391: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4838A.asm:21 END_STACK_VARS
    case 0xC48392: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4838A.asm:21 END_STACK_VARS
    case 0xC48393: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:22 STA @LOCAL0D
    case 0xC48394: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // src/unknown/C4/C4838A.asm:22 STA @LOCAL0D
    // Overlapping static entry reached from 0xC48391.
    case 0xC48395: cpu.execute_instruction<0x30>(0x000064, 2); return true;
    // src/unknown/C4/C4838A.asm:23 STZ @LOCAL0C
    case 0xC48396: cpu.execute_instruction<0x64>(0x00002E, 2); return true;
    // src/unknown/C4/C4838A.asm:23 STZ @LOCAL0C
    // Overlapping static entry reached from 0xC48395.
    case 0xC48397: cpu.execute_instruction<0x2E>(0x002C64, 3); return true;
    // src/unknown/C4/C4838A.asm:24 STZ @LOCAL0B
    case 0xC48398: cpu.execute_instruction<0x64>(0x00002C, 2); return true;
    // src/unknown/C4/C4838A.asm:25 LDA #0
    case 0xC4839A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4838A.asm:25 LDA #0
    // Overlapping static entry reached from 0xC4839A.
    case 0xC4839C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4838A.asm:26 STA @VIRTUAL02
    case 0xC4839D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4838A.asm:27 STA @LOCAL0A
    case 0xC4839F: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/unknown/C4/C4838A.asm:28 STZ VWF_TILE
    case 0xC483A1: cpu.execute_instruction<0x9C>(0x009E25, 3); return true;
    // src/unknown/C4/C4838A.asm:29 STZ VWF_X
    case 0xC483A4: cpu.execute_instruction<0x9C>(0x009E23, 3); return true;
    // src/unknown/C4/C4838A.asm:30 SEP #PROC_FLAGS::ACCUM8
    case 0xC483A7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4838A.asm:31 LDA #<-1
    case 0xC483A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/unknown/C4/C4838A.asm:32 STA @LOCAL00
    case 0xC483AB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4838A.asm:32 STA @LOCAL00
    // Overlapping static entry reached from 0xC483A9.
    case 0xC483AC: cpu.execute_instruction<0x0E>(0x0000A2, 3); return true;
    // src/unknown/C4/C4838A.asm:36 LDX #1024
    case 0xC483AD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000400, 3); return true;
    // src/unknown/C4/C4838A.asm:36 LDX #1024
    // Overlapping static entry reached from 0xC483AD.
    case 0xC483AF: cpu.execute_instruction<0x04>(0x0000C2, 2); return true;
    // src/unknown/C4/C4838A.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC483B0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4838A.asm:38 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC483AF.
    case 0xC483B1: cpu.execute_instruction<0x20>(0x0092A9, 3); return true;
    // src/unknown/C4/C4838A.asm:39 LDA #.LOWORD(VWF_BUFFER)
    case 0xC483B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000092, 2); else cpu.execute_instruction<0xA9>(0x003492, 3); return true;
    // src/unknown/C4/C4838A.asm:39 LDA #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC483B2.
    case 0xC483B4: cpu.execute_instruction<0x34>(0x000022, 2); return true;
    // src/unknown/C4/C4838A.asm:40 JSL MEMSET16
    case 0xC483B5: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C4/C4838A.asm:40 JSL MEMSET16
    // Overlapping static entry reached from 0xC483B4.
    case 0xC483B6: cpu.execute_instruction<0xFC>(0x00C08E, 3); return true;
    // src/unknown/C4/C4838A.asm:41 LDA #4
    case 0xC483B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C4/C4838A.asm:41 LDA #4
    // Overlapping static entry reached from 0xC483B9.
    case 0xC483BB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4838A.asm:42 STA @VIRTUAL04
    case 0xC483BC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4838A.asm:43 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC483BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0099CE, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4838A.asm:43 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    // Overlapping static entry reached from 0xC483BE.
    case 0xC483C0: cpu.execute_instruction<0x99>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:43 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC483C1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4838A.asm:43 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC483C3: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4838A.asm:43 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC483C4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4838A.asm:43 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC483C6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:43 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC483C7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4838A.asm:43 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC483C9: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C4838A.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC483CB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4838A.asm:45 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC483CD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:45 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC483CF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4838A.asm:45 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC483D1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4838A.asm:45 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC483D3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4838A.asm:46 JSL STRLEN
    case 0xC483D5: cpu.execute_instruction<0x22>(0xC08F22, 4); return true;
    // src/unknown/C4/C4838A.asm:47 TAY
    case 0xC483D9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:48 STY @LOCAL09
    case 0xC483DA: cpu.execute_instruction<0x84>(0x000028, 2); return true;
    // src/unknown/C4/C4838A.asm:54 CPY #5
    case 0xC483DC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000005, 2); else cpu.execute_instruction<0xC0>(0x000005, 3); return true;
    // src/unknown/C4/C4838A.asm:54 CPY #5
    // Overlapping static entry reached from 0xC483DC.
    case 0xC483DE: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C4838A.asm:55 BLTEQ @UNKNOWN0
    case 0xC483DF: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C4838A.asm:55 BLTEQ @UNKNOWN0
    case 0xC483E1: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4838A.asm:56 LDY #5
    case 0xC483E3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/unknown/C4/C4838A.asm:56 LDY #5
    // Overlapping static entry reached from 0xC483E3.
    case 0xC483E5: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4838A.asm:58 STY @LOCAL09
    case 0xC483E6: cpu.execute_instruction<0x84>(0x000028, 2); return true;
    // src/unknown/C4/C4838A.asm:60 LDA #6
    case 0xC483E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C4/C4838A.asm:60 LDA #6
    // Overlapping static entry reached from 0xC483E8.
    case 0xC483EA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4838A.asm:61 STA @LOCAL08
    case 0xC483EB: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4838A.asm:62 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC483ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0099CE, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4838A.asm:62 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    // Overlapping static entry reached from 0xC483ED.
    case 0xC483EF: cpu.execute_instruction<0x99>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:62 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC483F0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4838A.asm:62 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC483F2: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4838A.asm:62 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC483F3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4838A.asm:62 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC483F5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:62 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC483F6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4838A.asm:62 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC483F8: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C4838A.asm:63 REP #PROC_FLAGS::ACCUM8
    case 0xC483FA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4838A.asm:63 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC48395.
    case 0xC483FB: cpu.execute_instruction<0x20>(0x002464, 3); return true;
    // src/unknown/C4/C4838A.asm:64 STZ @LOCAL07
    case 0xC483FC: cpu.execute_instruction<0x64>(0x000024, 2); return true;
    // src/unknown/C4/C4838A.asm:65 BRA @UNKNOWN2
    case 0xC483FE: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C4/C4838A.asm:67 LDX @LOCAL07
    case 0xC48400: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // src/unknown/C4/C4838A.asm:68 LDA f:LUMINE_HALL_TEXT,X
    case 0xC48402: cpu.execute_instruction<0xBF>(0xC48037, 4); return true;
    // src/unknown/C4/C4838A.asm:69 AND #$00FF
    case 0xC48406: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4838A.asm:69 AND #$00FF
    // Overlapping static entry reached from 0xC48406.
    case 0xC48408: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4838A.asm:70 TAX
    case 0xC48409: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:71 LDA @LOCAL0D
    case 0xC4840A: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/unknown/C4/C4838A.asm:72 JSL UNKNOWN_C4827B
    case 0xC4840C: cpu.execute_instruction<0x22>(0xC4827B, 4); return true;
    // src/unknown/C4/C4838A.asm:73 INC @LOCAL07
    case 0xC48410: cpu.execute_instruction<0xE6>(0x000024, 2); return true;
    // src/unknown/C4/C4838A.asm:75 LDA @VIRTUAL04
    case 0xC48412: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4838A.asm:76 CLC
    case 0xC48414: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:77 SBC @LOCAL07
    case 0xC48415: cpu.execute_instruction<0xE5>(0x000024, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C4/C4838A.asm:78 BRANCHGTS @UNKNOWN1
    case 0xC48417: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C4/C4838A.asm:78 BRANCHGTS @UNKNOWN1
    case 0xC48419: cpu.execute_instruction<0x10>(0x0000E5, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C4/C4838A.asm:78 BRANCHGTS @UNKNOWN1
    case 0xC4841B: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C4/C4838A.asm:78 BRANCHGTS @UNKNOWN1
    case 0xC4841D: cpu.execute_instruction<0x30>(0x0000E1, 2); return true;
    // src/unknown/C4/C4838A.asm:79 LDA #0
    case 0xC4841F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4838A.asm:79 LDA #0
    // Overlapping static entry reached from 0xC4841F.
    case 0xC48421: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4838A.asm:80 STA @VIRTUAL04
    case 0xC48422: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4838A.asm:81 BRA @UNKNOWN6
    case 0xC48424: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C4/C4838A.asm:83 LDA [@VIRTUAL06]
    case 0xC48426: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:84 AND #$00FF
    case 0xC48428: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4838A.asm:84 AND #$00FF
    // Overlapping static entry reached from 0xC48428.
    case 0xC4842A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4838A.asm:85 TAX
    case 0xC4842B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:86 INC @VIRTUAL06
    case 0xC4842C: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:87 LDA @LOCAL0D
    case 0xC4842E: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/unknown/C4/C4838A.asm:88 JSL UNKNOWN_C4827B
    case 0xC48430: cpu.execute_instruction<0x22>(0xC4827B, 4); return true;
    // src/unknown/C4/C4838A.asm:89 INC @VIRTUAL04
    case 0xC48434: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C4838A.asm:91 LDY @LOCAL09
    case 0xC48436: cpu.execute_instruction<0xA4>(0x000028, 2); return true;
    // src/unknown/C4/C4838A.asm:92 TYA
    case 0xC48438: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:93 CLC
    case 0xC48439: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:94 SBC @VIRTUAL04
    case 0xC4843A: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C4/C4838A.asm:95 BRANCHGTS @UNKNOWN5
    case 0xC4843C: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C4/C4838A.asm:95 BRANCHGTS @UNKNOWN5
    case 0xC4843E: cpu.execute_instruction<0x10>(0x0000E6, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C4/C4838A.asm:95 BRANCHGTS @UNKNOWN5
    case 0xC48440: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C4/C4838A.asm:95 BRANCHGTS @UNKNOWN5
    case 0xC48442: cpu.execute_instruction<0x30>(0x0000E2, 2); return true;
    // src/unknown/C4/C4838A.asm:96 LDY #0
    case 0xC48444: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4838A.asm:96 LDY #0
    // Overlapping static entry reached from 0xC48444.
    case 0xC48446: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4838A.asm:97 STY @LOCAL06
    case 0xC48447: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/unknown/C4/C4838A.asm:98 BRA @UNKNOWN10
    case 0xC48449: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C4/C4838A.asm:100 TYX
    case 0xC4844B: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:101 LDA f:LUMINE_HALL_TEXT+4,X
    case 0xC4844C: cpu.execute_instruction<0xBF>(0xC4803B, 4); return true;
    // src/unknown/C4/C4838A.asm:102 AND #$00FF
    case 0xC48450: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4838A.asm:102 AND #$00FF
    // Overlapping static entry reached from 0xC48450.
    case 0xC48452: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4838A.asm:103 TAX
    case 0xC48453: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:104 LDA @LOCAL0D
    case 0xC48454: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/unknown/C4/C4838A.asm:105 JSL UNKNOWN_C4827B
    case 0xC48456: cpu.execute_instruction<0x22>(0xC4827B, 4); return true;
    // src/unknown/C4/C4838A.asm:106 LDY @LOCAL06
    case 0xC4845A: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/unknown/C4/C4838A.asm:107 INY
    case 0xC4845C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:108 STY @LOCAL06
    case 0xC4845D: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/unknown/C4/C4838A.asm:110 STY @VIRTUAL04
    case 0xC4845F: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C4/C4838A.asm:111 LDA @LOCAL08
    case 0xC48461: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C4/C4838A.asm:112 CLC
    case 0xC48463: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:113 SBC @VIRTUAL04
    case 0xC48464: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C4/C4838A.asm:114 BRANCHGTS @UNKNOWN9
    case 0xC48466: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C4/C4838A.asm:114 BRANCHGTS @UNKNOWN9
    case 0xC48468: cpu.execute_instruction<0x10>(0x0000E1, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C4/C4838A.asm:114 BRANCHGTS @UNKNOWN9
    case 0xC4846A: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C4/C4838A.asm:114 BRANCHGTS @UNKNOWN9
    case 0xC4846C: cpu.execute_instruction<0x30>(0x0000DD, 2); return true;
    // src/unknown/C4/C4838A.asm:115 LDA VWF_X
    case 0xC4846E: cpu.execute_instruction<0xAD>(0x009E23, 3); return true;
    // src/unknown/C4/C4838A.asm:116 CLC
    case 0xC48471: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:117 ADC @LOCAL0B
    case 0xC48472: cpu.execute_instruction<0x65>(0x00002C, 2); return true;
    // src/unknown/C4/C4838A.asm:118 STA @LOCAL08
    case 0xC48474: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C4/C4838A.asm:119 LDY #0
    case 0xC48476: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4838A.asm:119 LDY #0
    // Overlapping static entry reached from 0xC48476.
    case 0xC48478: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4838A.asm:120 STY @LOCAL09
    case 0xC48479: cpu.execute_instruction<0x84>(0x000028, 2); return true;
    // src/unknown/C4/C4838A.asm:121 TYX
    case 0xC4847B: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:122 STX @LOCAL05
    case 0xC4847C: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/unknown/C4/C4838A.asm:123 JMP @UNKNOWN14
    case 0xC4847E: cpu.execute_instruction<0x4C>(0x008521, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4838A.asm:125 LOADPTR BUFFER, @VIRTUAL06
    case 0xC48481: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4838A.asm:125 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC48481.
    case 0xC48483: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4838A.asm:125 LOADPTR BUFFER, @VIRTUAL06
    case 0xC48484: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4838A.asm:125 LOADPTR BUFFER, @VIRTUAL06
    case 0xC48486: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4838A.asm:125 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC48486.
    case 0xC48488: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4838A.asm:125 LOADPTR BUFFER, @VIRTUAL06
    case 0xC48489: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4838A.asm:126 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC4848B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:126 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC4848D: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4838A.asm:126 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC4848F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4838A.asm:126 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC48491: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4838A.asm:127 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    case 0xC48493: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000092, 2); else cpu.execute_instruction<0xA9>(0x003492, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4838A.asm:127 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC48493.
    case 0xC48495: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:127 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    case 0xC48496: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:127 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC48495.
    case 0xC48497: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4838A.asm:127 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    case 0xC48498: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4838A.asm:127 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    case 0xC48499: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4838A.asm:127 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    case 0xC4849B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:127 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    case 0xC4849C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4838A.asm:127 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    case 0xC4849E: cpu.execute_instruction<0x64>(0x00000D, 2); return true;
    // src/unknown/C4/C4838A.asm:128 REP #PROC_FLAGS::ACCUM8
    case 0xC484A0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4838A.asm:129 LDA @VIRTUAL02
    case 0xC484A2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4838A.asm:130 CLC
    case 0xC484A4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:131 ADC @VIRTUAL06
    case 0xC484A5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:132 STA @VIRTUAL06
    case 0xC484A7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:133 STA @LOCAL00
    case 0xC484A9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4838A.asm:134 LDA @VIRTUAL06+2
    case 0xC484AB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4838A.asm:135 STA @LOCAL00+2
    case 0xC484AD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4838A.asm:136 TXA
    case 0xC484AF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4838A.asm:137 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC484B0: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4838A.asm:137 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC484B2: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4838A.asm:137 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC484B4: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4838A.asm:137 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC484B6: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C4838A.asm:138 CLC
    case 0xC484B8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:139 ADC @VIRTUAL06
    case 0xC484B9: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:140 STA @VIRTUAL06
    case 0xC484BB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:141 STA @LOCAL01
    case 0xC484BD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4838A.asm:142 LDA @VIRTUAL06+2
    case 0xC484BF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4838A.asm:143 STA @LOCAL01+2
    case 0xC484C1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4838A.asm:144 LDA #16
    case 0xC484C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C4/C4838A.asm:144 LDA #16
    // Overlapping static entry reached from 0xC484C3.
    case 0xC484C5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4838A.asm:145 JSL MEMCPY24
    case 0xC484C6: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C4/C4838A.asm:146 LDX @LOCAL05
    case 0xC484CA: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/unknown/C4/C4838A.asm:147 TXA
    case 0xC484CC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:148 CLC
    case 0xC484CD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:149 ADC #16
    case 0xC484CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C4838A.asm:149 ADC #16
    // Overlapping static entry reached from 0xC484CE.
    case 0xC484D0: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4838A.asm:150 TAX
    case 0xC484D1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:151 STX @LOCAL06
    case 0xC484D2: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/unknown/C4/C4838A.asm:152 LDA @VIRTUAL02
    case 0xC484D4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4838A.asm:153 CLC
    case 0xC484D6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:154 ADC #256
    case 0xC484D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000100, 3); return true;
    // src/unknown/C4/C4838A.asm:154 ADC #256
    // Overlapping static entry reached from 0xC484D7.
    case 0xC484D9: cpu.execute_instruction<0x01>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C4838A.asm:155 MOVE_INTY @LOCAL04, @VIRTUAL06
    case 0xC484DA: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C4838A.asm:155 MOVE_INTY @LOCAL04, @VIRTUAL06
    // Overlapping static entry reached from 0xC484D9.
    case 0xC484DB: cpu.execute_instruction<0x1C>(0x000684, 3); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C4/C4838A.asm:155 MOVE_INTY @LOCAL04, @VIRTUAL06
    case 0xC484DC: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C4/C4838A.asm:155 MOVE_INTY @LOCAL04, @VIRTUAL06
    case 0xC484DE: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C4/C4838A.asm:155 MOVE_INTY @LOCAL04, @VIRTUAL06
    case 0xC484E0: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C4838A.asm:156 CLC
    case 0xC484E2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:157 ADC @VIRTUAL06
    case 0xC484E3: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:158 STA @VIRTUAL06
    case 0xC484E5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:159 STA @LOCAL00
    case 0xC484E7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4838A.asm:160 LDA @VIRTUAL06+2
    case 0xC484E9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4838A.asm:161 STA @LOCAL00+2
    case 0xC484EB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4838A.asm:162 TXA
    case 0xC484ED: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4838A.asm:163 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC484EE: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4838A.asm:163 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC484F0: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4838A.asm:163 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC484F2: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4838A.asm:163 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC484F4: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C4838A.asm:164 CLC
    case 0xC484F6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:165 ADC @VIRTUAL06
    case 0xC484F7: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:166 STA @VIRTUAL06
    case 0xC484F9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:167 STA @LOCAL01
    case 0xC484FB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4838A.asm:168 LDA @VIRTUAL06+2
    case 0xC484FD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4838A.asm:169 STA @LOCAL01+2
    case 0xC484FF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4838A.asm:170 LDA #16
    case 0xC48501: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C4/C4838A.asm:170 LDA #16
    // Overlapping static entry reached from 0xC48501.
    case 0xC48503: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4838A.asm:171 JSL MEMCPY24
    case 0xC48504: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C4/C4838A.asm:172 LDX @LOCAL06
    case 0xC48508: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C4/C4838A.asm:173 TXA
    case 0xC4850A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:174 CLC
    case 0xC4850B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:175 ADC #16
    case 0xC4850C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C4838A.asm:175 ADC #16
    // Overlapping static entry reached from 0xC4850C.
    case 0xC4850E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4838A.asm:176 TAX
    case 0xC4850F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:177 STX @LOCAL05
    case 0xC48510: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/unknown/C4/C4838A.asm:178 LDA @VIRTUAL02
    case 0xC48512: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4838A.asm:179 CLC
    case 0xC48514: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:180 ADC #16
    case 0xC48515: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C4838A.asm:180 ADC #16
    // Overlapping static entry reached from 0xC48515.
    case 0xC48517: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4838A.asm:181 STA @VIRTUAL02
    case 0xC48518: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4838A.asm:182 STA @LOCAL0A
    case 0xC4851A: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/unknown/C4/C4838A.asm:183 LDY @LOCAL09
    case 0xC4851C: cpu.execute_instruction<0xA4>(0x000028, 2); return true;
    // src/unknown/C4/C4838A.asm:184 INY
    case 0xC4851E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:185 STY @LOCAL09
    case 0xC4851F: cpu.execute_instruction<0x84>(0x000028, 2); return true;
    // src/unknown/C4/C4838A.asm:187 LDA VWF_X
    case 0xC48521: cpu.execute_instruction<0xAD>(0x009E23, 3); return true;
    // src/unknown/C4/C4838A.asm:188 LSR
    case 0xC48524: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:189 LSR
    case 0xC48525: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:190 LSR
    case 0xC48526: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:191 STA @LOCAL06
    case 0xC48527: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C4/C4838A.asm:192 STA @VIRTUAL04
    case 0xC48529: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4838A.asm:193 TYA
    case 0xC4852B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:194 CMP @VIRTUAL04
    case 0xC4852C: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4838A.asm:195 BCCL @UNKNOWN13
    case 0xC4852E: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4838A.asm:195 BCCL @UNKNOWN13
    case 0xC48530: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4838A.asm:195 BCCL @UNKNOWN13
    case 0xC48532: cpu.execute_instruction<0x4C>(0x008481, 3); return true;
    // src/unknown/C4/C4838A.asm:196 LDA #205
    case 0xC48535: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CD, 2); else cpu.execute_instruction<0xA9>(0x0000CD, 3); return true;
    // src/unknown/C4/C4838A.asm:196 LDA #205
    // Overlapping static entry reached from 0xC48535.
    case 0xC48537: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4838A.asm:197 STA @LOCAL0B
    case 0xC48538: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4838A.asm:198 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC4853A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000092, 2); else cpu.execute_instruction<0xA9>(0x003492, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4838A.asm:198 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4853A.
    case 0xC4853C: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:198 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC4853D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:198 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4853C.
    case 0xC4853E: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4838A.asm:198 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC4853F: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4838A.asm:198 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC48540: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4838A.asm:198 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC48542: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:198 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC48543: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4838A.asm:198 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC48545: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C4838A.asm:199 REP #PROC_FLAGS::ACCUM8
    case 0xC48547: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4838A.asm:200 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC48549: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:200 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4854B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4838A.asm:200 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4854D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4838A.asm:200 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4854F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4838A.asm:201 LDA @LOCAL06
    case 0xC48551: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C4/C4838A.asm:202 ASL
    case 0xC48553: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:203 ASL
    case 0xC48554: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:204 ASL
    case 0xC48555: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:205 ASL
    case 0xC48556: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:206 ASL
    case 0xC48557: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:207 CLC
    case 0xC48558: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:208 ADC @VIRTUAL06
    case 0xC48559: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:209 STA @VIRTUAL06
    case 0xC4855B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:210 STA @LOCAL01
    case 0xC4855D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4838A.asm:211 LDA @VIRTUAL06+2
    case 0xC4855F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4838A.asm:212 STA @LOCAL01+2
    case 0xC48561: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4838A.asm:213 LDA #32
    case 0xC48563: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C4/C4838A.asm:213 LDA #32
    // Overlapping static entry reached from 0xC48563.
    case 0xC48565: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4838A.asm:214 JSL MEMCPY24
    case 0xC48566: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C4/C4838A.asm:215 STZ VWF_TILE
    case 0xC4856A: cpu.execute_instruction<0x9C>(0x009E25, 3); return true;
    // src/unknown/C4/C4838A.asm:216 LDY #8
    case 0xC4856D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C4838A.asm:216 LDY #8
    // Overlapping static entry reached from 0xC4856D.
    case 0xC4856F: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C4/C4838A.asm:217 LDA VWF_X
    case 0xC48570: cpu.execute_instruction<0xAD>(0x009E23, 3); return true;
    // src/unknown/C4/C4838A.asm:218 JSL MODULUS16
    case 0xC48573: cpu.execute_instruction<0x22>(0xC09231, 4); return true;
    // src/unknown/C4/C4838A.asm:219 STA VWF_X
    case 0xC48577: cpu.execute_instruction<0x8D>(0x009E23, 3); return true;
    // src/unknown/C4/C4838A.asm:220 LDA #0
    case 0xC4857A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4838A.asm:220 LDA #0
    // Overlapping static entry reached from 0xC4857A.
    case 0xC4857C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4838A.asm:221 STA @VIRTUAL04
    case 0xC4857D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4838A.asm:222 JMP @UNKNOWN25
    case 0xC4857F: cpu.execute_instruction<0x4C>(0x008706, 3); return true;
    // src/unknown/C4/C4838A.asm:224 LDA @LOCAL0C
    case 0xC48582: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/unknown/C4/C4838A.asm:225 CLC
    case 0xC48584: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:226 SBC #16
    case 0xC48585: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/unknown/C4/C4838A.asm:226 SBC #16
    // Overlapping static entry reached from 0xC48585.
    case 0xC48587: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:826 BVC :+
    // Macro caller: src/unknown/C4/C4838A.asm:227 JUMPLTEQS @UNKNOWN24
    case 0xC48588: cpu.execute_instruction<0x50>(0x000005, 2); return true;
    // include/macros.asm:827 BMI :++
    // Macro caller: src/unknown/C4/C4838A.asm:227 JUMPLTEQS @UNKNOWN24
    case 0xC4858A: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:828 JMP dest
    // Macro caller: src/unknown/C4/C4838A.asm:227 JUMPLTEQS @UNKNOWN24
    case 0xC4858C: cpu.execute_instruction<0x4C>(0x0086F2, 3); return true;
    // include/macros.asm:830 BPL :+
    // Macro caller: src/unknown/C4/C4838A.asm:227 JUMPLTEQS @UNKNOWN24
    case 0xC4858F: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:831 JMP dest
    // Macro caller: src/unknown/C4/C4838A.asm:227 JUMPLTEQS @UNKNOWN24
    case 0xC48591: cpu.execute_instruction<0x4C>(0x0086F2, 3); return true;
    // src/unknown/C4/C4838A.asm:228 STZ @LOCAL0C
    case 0xC48594: cpu.execute_instruction<0x64>(0x00002E, 2); return true;
    // src/unknown/C4/C4838A.asm:229 LDA VWF_X
    case 0xC48596: cpu.execute_instruction<0xAD>(0x009E23, 3); return true;
    // src/unknown/C4/C4838A.asm:230 CLC
    case 0xC48599: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:231 ADC @LOCAL08
    case 0xC4859A: cpu.execute_instruction<0x65>(0x000026, 2); return true;
    // src/unknown/C4/C4838A.asm:232 STA @LOCAL08
    case 0xC4859C: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C4/C4838A.asm:233 LDY #0
    case 0xC4859E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4838A.asm:233 LDY #0
    // Overlapping static entry reached from 0xC4859E.
    case 0xC485A0: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4838A.asm:234 STY @LOCAL09
    case 0xC485A1: cpu.execute_instruction<0x84>(0x000028, 2); return true;
    // src/unknown/C4/C4838A.asm:235 TYX
    case 0xC485A3: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:236 STX @LOCAL05
    case 0xC485A4: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/unknown/C4/C4838A.asm:237 JMP @UNKNOWN21
    case 0xC485A6: cpu.execute_instruction<0x4C>(0x008663, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4838A.asm:239 LOADPTR BUFFER, @VIRTUAL06
    case 0xC485A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4838A.asm:239 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC485A9.
    case 0xC485AB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4838A.asm:239 LOADPTR BUFFER, @VIRTUAL06
    case 0xC485AC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4838A.asm:239 LOADPTR BUFFER, @VIRTUAL06
    case 0xC485AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4838A.asm:239 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC485AE.
    case 0xC485B0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4838A.asm:239 LOADPTR BUFFER, @VIRTUAL06
    case 0xC485B1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4838A.asm:240 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC485B3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:240 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC485B5: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4838A.asm:240 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC485B7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4838A.asm:240 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC485B9: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4838A.asm:241 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    case 0xC485BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000092, 2); else cpu.execute_instruction<0xA9>(0x003492, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4838A.asm:241 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC485BB.
    case 0xC485BD: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:241 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    case 0xC485BE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:241 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC485BD.
    case 0xC485BF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4838A.asm:241 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    case 0xC485C0: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4838A.asm:241 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    case 0xC485C1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4838A.asm:241 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    case 0xC485C3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:241 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    case 0xC485C4: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4838A.asm:241 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    case 0xC485C6: cpu.execute_instruction<0x64>(0x00000D, 2); return true;
    // src/unknown/C4/C4838A.asm:242 REP #PROC_FLAGS::ACCUM8
    case 0xC485C8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4838A.asm:243 LDA @LOCAL0A
    case 0xC485CA: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/unknown/C4/C4838A.asm:244 STA @VIRTUAL02
    case 0xC485CC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4838A.asm:245 CLC
    case 0xC485CE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:246 ADC @VIRTUAL06
    case 0xC485CF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:247 STA @VIRTUAL06
    case 0xC485D1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:248 STA @LOCAL00
    case 0xC485D3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4838A.asm:249 LDA @VIRTUAL06+2
    case 0xC485D5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4838A.asm:250 STA @LOCAL00+2
    case 0xC485D7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4838A.asm:251 TXA
    case 0xC485D9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4838A.asm:252 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC485DA: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4838A.asm:252 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC485DC: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4838A.asm:252 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC485DE: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4838A.asm:252 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC485E0: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C4838A.asm:253 CLC
    case 0xC485E2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:254 ADC @VIRTUAL06
    case 0xC485E3: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:255 STA @VIRTUAL06
    case 0xC485E5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:256 STA @LOCAL01
    case 0xC485E7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4838A.asm:257 LDA @VIRTUAL06+2
    case 0xC485E9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4838A.asm:258 STA @LOCAL01+2
    case 0xC485EB: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4838A.asm:259 LDA #16
    case 0xC485ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C4/C4838A.asm:259 LDA #16
    // Overlapping static entry reached from 0xC485ED.
    case 0xC485EF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4838A.asm:260 JSL MEMCPY24
    case 0xC485F0: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C4/C4838A.asm:261 LDX @LOCAL05
    case 0xC485F4: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/unknown/C4/C4838A.asm:262 TXA
    case 0xC485F6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:263 CLC
    case 0xC485F7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:264 ADC #16
    case 0xC485F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C4838A.asm:264 ADC #16
    // Overlapping static entry reached from 0xC485F8.
    case 0xC485FA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4838A.asm:265 TAX
    case 0xC485FB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:266 STX @LOCAL05
    case 0xC485FC: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/unknown/C4/C4838A.asm:267 LDA @VIRTUAL02
    case 0xC485FE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4838A.asm:268 CLC
    case 0xC48600: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:269 ADC #256
    case 0xC48601: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000100, 3); return true;
    // src/unknown/C4/C4838A.asm:269 ADC #256
    // Overlapping static entry reached from 0xC48601.
    case 0xC48603: cpu.execute_instruction<0x01>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C4838A.asm:270 MOVE_INTY @LOCAL04, @VIRTUAL06
    case 0xC48604: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C4838A.asm:270 MOVE_INTY @LOCAL04, @VIRTUAL06
    // Overlapping static entry reached from 0xC48603.
    case 0xC48605: cpu.execute_instruction<0x1C>(0x000684, 3); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C4/C4838A.asm:270 MOVE_INTY @LOCAL04, @VIRTUAL06
    case 0xC48606: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C4/C4838A.asm:270 MOVE_INTY @LOCAL04, @VIRTUAL06
    case 0xC48608: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C4/C4838A.asm:270 MOVE_INTY @LOCAL04, @VIRTUAL06
    case 0xC4860A: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C4838A.asm:271 CLC
    case 0xC4860C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:272 ADC @VIRTUAL06
    case 0xC4860D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:273 STA @VIRTUAL06
    case 0xC4860F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:274 STA @LOCAL00
    case 0xC48611: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4838A.asm:275 LDA @VIRTUAL06+2
    case 0xC48613: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4838A.asm:276 STA @LOCAL00+2
    case 0xC48615: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4838A.asm:277 TXA
    case 0xC48617: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4838A.asm:278 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC48618: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4838A.asm:278 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4861A: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4838A.asm:278 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4861C: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4838A.asm:278 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4861E: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C4838A.asm:279 CLC
    case 0xC48620: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:280 ADC @VIRTUAL06
    case 0xC48621: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:281 STA @VIRTUAL06
    case 0xC48623: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:282 STA @LOCAL01
    case 0xC48625: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4838A.asm:283 LDA @VIRTUAL06+2
    case 0xC48627: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4838A.asm:284 STA @LOCAL01+2
    case 0xC48629: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4838A.asm:285 LDA #16
    case 0xC4862B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C4/C4838A.asm:285 LDA #16
    // Overlapping static entry reached from 0xC4862B.
    case 0xC4862D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4838A.asm:286 JSL MEMCPY24
    case 0xC4862E: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C4/C4838A.asm:287 LDX @LOCAL05
    case 0xC48632: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/unknown/C4/C4838A.asm:288 TXA
    case 0xC48634: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:289 CLC
    case 0xC48635: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:290 ADC #16
    case 0xC48636: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C4838A.asm:290 ADC #16
    // Overlapping static entry reached from 0xC48636.
    case 0xC48638: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4838A.asm:291 TAX
    case 0xC48639: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:292 STX @LOCAL05
    case 0xC4863A: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/unknown/C4/C4838A.asm:293 LDA @VIRTUAL02
    case 0xC4863C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4838A.asm:294 CLC
    case 0xC4863E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:295 ADC #16
    case 0xC4863F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C4838A.asm:295 ADC #16
    // Overlapping static entry reached from 0xC4863F.
    case 0xC48641: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4838A.asm:296 STA @VIRTUAL02
    case 0xC48642: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4838A.asm:297 STA @LOCAL0A
    case 0xC48644: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/unknown/C4/C4838A.asm:298 LDY #256
    case 0xC48646: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000100, 3); return true;
    // src/unknown/C4/C4838A.asm:298 LDY #256
    // Overlapping static entry reached from 0xC48646.
    case 0xC48648: cpu.execute_instruction<0x01>(0x0000A5, 2); return true;
    // src/unknown/C4/C4838A.asm:299 LDA @VIRTUAL02
    case 0xC48649: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4838A.asm:299 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC48648.
    case 0xC4864A: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C4838A.asm:300 JSL MODULUS16S
    case 0xC4864B: cpu.execute_instruction<0x22>(0xC091F4, 4); return true;
    // src/unknown/C4/C4838A.asm:301 CMP #0
    case 0xC4864F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4838A.asm:301 CMP #0
    // Overlapping static entry reached from 0xC4864F.
    case 0xC48651: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4838A.asm:302 BNE @UNKNOWN20
    case 0xC48652: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C4/C4838A.asm:303 LDA @VIRTUAL02
    case 0xC48654: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4838A.asm:304 CLC
    case 0xC48656: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:305 ADC #256
    case 0xC48657: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000100, 3); return true;
    // src/unknown/C4/C4838A.asm:305 ADC #256
    // Overlapping static entry reached from 0xC48657.
    case 0xC48659: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/unknown/C4/C4838A.asm:306 STA @VIRTUAL02
    case 0xC4865A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4838A.asm:306 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC48659.
    case 0xC4865B: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C4838A.asm:307 STA @LOCAL0A
    case 0xC4865C: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/unknown/C4/C4838A.asm:309 LDY @LOCAL09
    case 0xC4865E: cpu.execute_instruction<0xA4>(0x000028, 2); return true;
    // src/unknown/C4/C4838A.asm:310 INY
    case 0xC48660: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:311 STY @LOCAL09
    case 0xC48661: cpu.execute_instruction<0x84>(0x000028, 2); return true;
    // src/unknown/C4/C4838A.asm:313 LDA VWF_X
    case 0xC48663: cpu.execute_instruction<0xAD>(0x009E23, 3); return true;
    // src/unknown/C4/C4838A.asm:314 LSR
    case 0xC48666: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:315 LSR
    case 0xC48667: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:316 LSR
    case 0xC48668: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:317 STA @LOCAL07
    case 0xC48669: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C4/C4838A.asm:318 STA @VIRTUAL02
    case 0xC4866B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4838A.asm:319 TYA
    case 0xC4866D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:320 CMP @VIRTUAL02
    case 0xC4866E: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4838A.asm:321 BCCL @UNKNOWN19
    case 0xC48670: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4838A.asm:321 BCCL @UNKNOWN19
    case 0xC48672: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4838A.asm:321 BCCL @UNKNOWN19
    case 0xC48674: cpu.execute_instruction<0x4C>(0x0085A9, 3); return true;
    // src/unknown/C4/C4838A.asm:322 LDY #8
    case 0xC48677: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C4838A.asm:322 LDY #8
    // Overlapping static entry reached from 0xC48677.
    case 0xC48679: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C4/C4838A.asm:323 LDA VWF_X
    case 0xC4867A: cpu.execute_instruction<0xAD>(0x009E23, 3); return true;
    // src/unknown/C4/C4838A.asm:324 JSL MODULUS16
    case 0xC4867D: cpu.execute_instruction<0x22>(0xC09231, 4); return true;
    // src/unknown/C4/C4838A.asm:325 CMP #0
    case 0xC48681: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4838A.asm:325 CMP #0
    // Overlapping static entry reached from 0xC48681.
    case 0xC48683: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4838A.asm:326 BEQ @UNKNOWN23
    case 0xC48684: cpu.execute_instruction<0xF0>(0x000054, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4838A.asm:327 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC48686: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000092, 2); else cpu.execute_instruction<0xA9>(0x003492, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4838A.asm:327 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC48686.
    case 0xC48688: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:327 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC48689: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:327 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC48688.
    case 0xC4868A: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4838A.asm:327 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC4868B: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4838A.asm:327 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC4868C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4838A.asm:327 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC4868E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:327 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC4868F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4838A.asm:327 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC48691: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C4838A.asm:328 REP #PROC_FLAGS::ACCUM8
    case 0xC48693: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4838A.asm:329 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC48695: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:329 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC48697: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4838A.asm:329 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC48699: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4838A.asm:329 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4869B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4838A.asm:330 LDA @LOCAL07
    case 0xC4869D: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/unknown/C4/C4838A.asm:331 ASL
    case 0xC4869F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:332 ASL
    case 0xC486A0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:333 ASL
    case 0xC486A1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:334 ASL
    case 0xC486A2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:335 ASL
    case 0xC486A3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:336 CLC
    case 0xC486A4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:337 ADC @VIRTUAL06
    case 0xC486A5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:338 STA @VIRTUAL06
    case 0xC486A7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:339 STA @LOCAL01
    case 0xC486A9: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4838A.asm:340 LDA @VIRTUAL06+2
    case 0xC486AB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4838A.asm:341 STA @LOCAL01+2
    case 0xC486AD: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4838A.asm:342 LDA #32
    case 0xC486AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C4/C4838A.asm:342 LDA #32
    // Overlapping static entry reached from 0xC486AF.
    case 0xC486B1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4838A.asm:343 JSL MEMCPY24
    case 0xC486B2: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C4/C4838A.asm:344 SEP #PROC_FLAGS::ACCUM8
    case 0xC486B6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4838A.asm:345 LDA #<-1
    case 0xC486B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/unknown/C4/C4838A.asm:346 STA @LOCAL00
    case 0xC486BA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4838A.asm:346 STA @LOCAL00
    // Overlapping static entry reached from 0xC486B8.
    case 0xC486BB: cpu.execute_instruction<0x0E>(0x00E0A2, 3); return true;
    // src/unknown/C4/C4838A.asm:347 LDX #480
    case 0xC486BC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E0, 2); else cpu.execute_instruction<0xA2>(0x0001E0, 3); return true;
    // src/unknown/C4/C4838A.asm:347 LDX #480
    // Overlapping static entry reached from 0xC486BC.
    case 0xC486BE: cpu.execute_instruction<0x01>(0x0000C2, 2); return true;
    // src/unknown/C4/C4838A.asm:348 REP #PROC_FLAGS::ACCUM8
    case 0xC486BF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4838A.asm:348 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC486BE.
    case 0xC486C0: cpu.execute_instruction<0x20>(0x00B2A9, 3); return true;
    // src/unknown/C4/C4838A.asm:349 LDA #.LOWORD(VWF_BUFFER) + 32
    case 0xC486C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B2, 2); else cpu.execute_instruction<0xA9>(0x0034B2, 3); return true;
    // src/unknown/C4/C4838A.asm:349 LDA #.LOWORD(VWF_BUFFER) + 32
    // Overlapping static entry reached from 0xC486C1.
    case 0xC486C3: cpu.execute_instruction<0x34>(0x000022, 2); return true;
    // src/unknown/C4/C4838A.asm:350 JSL MEMSET16
    case 0xC486C4: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C4/C4838A.asm:350 JSL MEMSET16
    // Overlapping static entry reached from 0xC486C3.
    case 0xC486C5: cpu.execute_instruction<0xFC>(0x00C08E, 3); return true;
    // src/unknown/C4/C4838A.asm:351 STZ VWF_TILE
    case 0xC486C8: cpu.execute_instruction<0x9C>(0x009E25, 3); return true;
    // src/unknown/C4/C4838A.asm:352 LDY #8
    case 0xC486CB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C4838A.asm:352 LDY #8
    // Overlapping static entry reached from 0xC486CB.
    case 0xC486CD: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C4/C4838A.asm:353 LDA VWF_X
    case 0xC486CE: cpu.execute_instruction<0xAD>(0x009E23, 3); return true;
    // src/unknown/C4/C4838A.asm:354 JSL MODULUS16
    case 0xC486D1: cpu.execute_instruction<0x22>(0xC09231, 4); return true;
    // src/unknown/C4/C4838A.asm:355 STA VWF_X
    case 0xC486D5: cpu.execute_instruction<0x8D>(0x009E23, 3); return true;
    // src/unknown/C4/C4838A.asm:356 BRA @UNKNOWN24
    case 0xC486D8: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/unknown/C4/C4838A.asm:358 STZ VWF_X
    case 0xC486DA: cpu.execute_instruction<0x9C>(0x009E23, 3); return true;
    // src/unknown/C4/C4838A.asm:359 STZ VWF_TILE
    case 0xC486DD: cpu.execute_instruction<0x9C>(0x009E25, 3); return true;
    // src/unknown/C4/C4838A.asm:360 SEP #PROC_FLAGS::ACCUM8
    case 0xC486E0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4838A.asm:361 LDA #<-1
    case 0xC486E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/unknown/C4/C4838A.asm:362 STA @LOCAL00
    case 0xC486E4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4838A.asm:362 STA @LOCAL00
    // Overlapping static entry reached from 0xC486E2.
    case 0xC486E5: cpu.execute_instruction<0x0E>(0x0000A2, 3); return true;
    // src/unknown/C4/C4838A.asm:363 LDX #512
    case 0xC486E6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/unknown/C4/C4838A.asm:363 LDX #512
    // Overlapping static entry reached from 0xC486E6.
    case 0xC486E8: cpu.execute_instruction<0x02>(0x0000C2, 2); return true;
    // src/unknown/C4/C4838A.asm:364 REP #PROC_FLAGS::ACCUM8
    case 0xC486E9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4838A.asm:365 LDA #.LOWORD(VWF_BUFFER)
    case 0xC486EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000092, 2); else cpu.execute_instruction<0xA9>(0x003492, 3); return true;
    // src/unknown/C4/C4838A.asm:365 LDA #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC486EB.
    case 0xC486ED: cpu.execute_instruction<0x34>(0x000022, 2); return true;
    // src/unknown/C4/C4838A.asm:366 JSL MEMSET16
    case 0xC486EE: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C4/C4838A.asm:366 JSL MEMSET16
    // Overlapping static entry reached from 0xC486ED.
    case 0xC486EF: cpu.execute_instruction<0xFC>(0x00C08E, 3); return true;
    // src/unknown/C4/C4838A.asm:368 LDX @VIRTUAL04
    case 0xC486F2: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4838A.asm:369 LDA f:LUMINE_HALL_TEXT+10,X
    case 0xC486F4: cpu.execute_instruction<0xBF>(0xC48041, 4); return true;
    // src/unknown/C4/C4838A.asm:370 AND #$00FF
    case 0xC486F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4838A.asm:370 AND #$00FF
    // Overlapping static entry reached from 0xC486F8.
    case 0xC486FA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4838A.asm:371 TAX
    case 0xC486FB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:372 LDA @LOCAL0D
    case 0xC486FC: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/unknown/C4/C4838A.asm:373 JSL UNKNOWN_C4827B
    case 0xC486FE: cpu.execute_instruction<0x22>(0xC4827B, 4); return true;
    // src/unknown/C4/C4838A.asm:374 INC @LOCAL0C
    case 0xC48702: cpu.execute_instruction<0xE6>(0x00002E, 2); return true;
    // src/unknown/C4/C4838A.asm:375 INC @VIRTUAL04
    case 0xC48704: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C4838A.asm:377 LDA @LOCAL0B
    case 0xC48706: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/unknown/C4/C4838A.asm:378 CLC
    case 0xC48708: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:379 SBC @VIRTUAL04
    case 0xC48709: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/unknown/C4/C4838A.asm:380 JUMPGTS @UNKNOWN16
    case 0xC4870B: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/unknown/C4/C4838A.asm:380 JUMPGTS @UNKNOWN16
    case 0xC4870D: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/unknown/C4/C4838A.asm:380 JUMPGTS @UNKNOWN16
    case 0xC4870F: cpu.execute_instruction<0x4C>(0x008582, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/unknown/C4/C4838A.asm:380 JUMPGTS @UNKNOWN16
    case 0xC48712: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/unknown/C4/C4838A.asm:380 JUMPGTS @UNKNOWN16
    case 0xC48714: cpu.execute_instruction<0x4C>(0x008582, 3); return true;
    // src/unknown/C4/C4838A.asm:381 LDA VWF_X
    case 0xC48717: cpu.execute_instruction<0xAD>(0x009E23, 3); return true;
    // src/unknown/C4/C4838A.asm:382 CLC
    case 0xC4871A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:383 ADC @LOCAL08
    case 0xC4871B: cpu.execute_instruction<0x65>(0x000026, 2); return true;
    // src/unknown/C4/C4838A.asm:384 STA @VIRTUAL04
    case 0xC4871D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4838A.asm:385 LDY #0
    case 0xC4871F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4838A.asm:385 LDY #0
    // Overlapping static entry reached from 0xC4871F.
    case 0xC48721: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4838A.asm:386 STY @LOCAL09
    case 0xC48722: cpu.execute_instruction<0x84>(0x000028, 2); return true;
    // src/unknown/C4/C4838A.asm:387 TYX
    case 0xC48724: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:388 STX @LOCAL05
    case 0xC48725: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/unknown/C4/C4838A.asm:389 JMP @UNKNOWN30
    case 0xC48727: cpu.execute_instruction<0x4C>(0x0087E4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4838A.asm:391 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4872A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4838A.asm:391 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4872A.
    case 0xC4872C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4838A.asm:391 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4872D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4838A.asm:391 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4872F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4838A.asm:391 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4872F.
    case 0xC48731: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4838A.asm:391 LOADPTR BUFFER, @VIRTUAL06
    case 0xC48732: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4838A.asm:392 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC48734: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:392 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC48736: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4838A.asm:392 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC48738: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4838A.asm:392 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC4873A: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4838A.asm:393 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    case 0xC4873C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000092, 2); else cpu.execute_instruction<0xA9>(0x003492, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4838A.asm:393 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4873C.
    case 0xC4873E: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:393 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    case 0xC4873F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:393 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4873E.
    case 0xC48740: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4838A.asm:393 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    case 0xC48741: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4838A.asm:393 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    case 0xC48742: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4838A.asm:393 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    case 0xC48744: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4838A.asm:393 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    case 0xC48745: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4838A.asm:393 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL0A
    case 0xC48747: cpu.execute_instruction<0x64>(0x00000D, 2); return true;
    // src/unknown/C4/C4838A.asm:394 REP #PROC_FLAGS::ACCUM8
    case 0xC48749: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4838A.asm:395 LDA @LOCAL0A
    case 0xC4874B: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/unknown/C4/C4838A.asm:396 STA @VIRTUAL02
    case 0xC4874D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4838A.asm:397 CLC
    case 0xC4874F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:398 ADC @VIRTUAL06
    case 0xC48750: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:399 STA @VIRTUAL06
    case 0xC48752: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:400 STA @LOCAL00
    case 0xC48754: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4838A.asm:401 LDA @VIRTUAL06+2
    case 0xC48756: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4838A.asm:402 STA @LOCAL00+2
    case 0xC48758: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4838A.asm:403 TXA
    case 0xC4875A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4838A.asm:404 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4875B: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4838A.asm:404 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4875D: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4838A.asm:404 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4875F: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4838A.asm:404 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC48761: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C4838A.asm:405 CLC
    case 0xC48763: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:406 ADC @VIRTUAL06
    case 0xC48764: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:407 STA @VIRTUAL06
    case 0xC48766: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:408 STA @LOCAL01
    case 0xC48768: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4838A.asm:409 LDA @VIRTUAL06+2
    case 0xC4876A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4838A.asm:410 STA @LOCAL01+2
    case 0xC4876C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4838A.asm:411 LDA #16
    case 0xC4876E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C4/C4838A.asm:411 LDA #16
    // Overlapping static entry reached from 0xC4876E.
    case 0xC48770: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4838A.asm:412 JSL MEMCPY24
    case 0xC48771: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C4/C4838A.asm:413 LDX @LOCAL05
    case 0xC48775: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/unknown/C4/C4838A.asm:414 TXA
    case 0xC48777: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:415 CLC
    case 0xC48778: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:416 ADC #16
    case 0xC48779: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C4838A.asm:416 ADC #16
    // Overlapping static entry reached from 0xC48779.
    case 0xC4877B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4838A.asm:417 TAX
    case 0xC4877C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:418 STX @LOCAL02
    case 0xC4877D: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C4/C4838A.asm:419 LDA @VIRTUAL02
    case 0xC4877F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4838A.asm:420 CLC
    case 0xC48781: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:421 ADC #256
    case 0xC48782: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000100, 3); return true;
    // src/unknown/C4/C4838A.asm:421 ADC #256
    // Overlapping static entry reached from 0xC48782.
    case 0xC48784: cpu.execute_instruction<0x01>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C4838A.asm:422 MOVE_INTY @LOCAL03, @VIRTUAL06
    case 0xC48785: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C4838A.asm:422 MOVE_INTY @LOCAL03, @VIRTUAL06
    // Overlapping static entry reached from 0xC48784.
    case 0xC48786: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C4/C4838A.asm:422 MOVE_INTY @LOCAL03, @VIRTUAL06
    case 0xC48787: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C4/C4838A.asm:422 MOVE_INTY @LOCAL03, @VIRTUAL06
    case 0xC48789: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C4/C4838A.asm:422 MOVE_INTY @LOCAL03, @VIRTUAL06
    case 0xC4878B: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C4838A.asm:423 CLC
    case 0xC4878D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:424 ADC @VIRTUAL06
    case 0xC4878E: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:425 STA @VIRTUAL06
    case 0xC48790: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:426 STA @LOCAL00
    case 0xC48792: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4838A.asm:427 LDA @VIRTUAL06+2
    case 0xC48794: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4838A.asm:428 STA @LOCAL00+2
    case 0xC48796: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4838A.asm:429 TXA
    case 0xC48798: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4838A.asm:430 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC48799: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4838A.asm:430 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4879B: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4838A.asm:430 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4879D: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4838A.asm:430 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4879F: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C4838A.asm:431 CLC
    case 0xC487A1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:432 ADC @VIRTUAL06
    case 0xC487A2: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:433 STA @VIRTUAL06
    case 0xC487A4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4838A.asm:434 STA @LOCAL01
    case 0xC487A6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4838A.asm:435 LDA @VIRTUAL06+2
    case 0xC487A8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4838A.asm:436 STA @LOCAL01+2
    case 0xC487AA: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4838A.asm:437 LDA #16
    case 0xC487AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C4/C4838A.asm:437 LDA #16
    // Overlapping static entry reached from 0xC487AC.
    case 0xC487AE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4838A.asm:438 JSL MEMCPY24
    case 0xC487AF: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C4/C4838A.asm:439 LDX @LOCAL02
    case 0xC487B3: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C4/C4838A.asm:440 TXA
    case 0xC487B5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:441 CLC
    case 0xC487B6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:442 ADC #16
    case 0xC487B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C4838A.asm:442 ADC #16
    // Overlapping static entry reached from 0xC487B7.
    case 0xC487B9: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4838A.asm:443 TAX
    case 0xC487BA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:444 STX @LOCAL05
    case 0xC487BB: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/unknown/C4/C4838A.asm:445 LDA @VIRTUAL02
    case 0xC487BD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4838A.asm:446 CLC
    case 0xC487BF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:447 ADC #16
    case 0xC487C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C4838A.asm:447 ADC #16
    // Overlapping static entry reached from 0xC487C0.
    case 0xC487C2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4838A.asm:448 STA @VIRTUAL02
    case 0xC487C3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4838A.asm:449 STA @LOCAL0A
    case 0xC487C5: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/unknown/C4/C4838A.asm:450 LDY #256
    case 0xC487C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000100, 3); return true;
    // src/unknown/C4/C4838A.asm:450 LDY #256
    // Overlapping static entry reached from 0xC487C7.
    case 0xC487C9: cpu.execute_instruction<0x01>(0x0000A5, 2); return true;
    // src/unknown/C4/C4838A.asm:451 LDA @VIRTUAL02
    case 0xC487CA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4838A.asm:451 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC487C9.
    case 0xC487CB: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C4838A.asm:452 JSL MODULUS16S
    case 0xC487CC: cpu.execute_instruction<0x22>(0xC091F4, 4); return true;
    // src/unknown/C4/C4838A.asm:453 CMP #0
    case 0xC487D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4838A.asm:453 CMP #0
    // Overlapping static entry reached from 0xC487D0.
    case 0xC487D2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4838A.asm:454 BNE @UNKNOWN29
    case 0xC487D3: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C4/C4838A.asm:455 LDA @VIRTUAL02
    case 0xC487D5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4838A.asm:456 CLC
    case 0xC487D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:457 ADC #256
    case 0xC487D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000100, 3); return true;
    // src/unknown/C4/C4838A.asm:457 ADC #256
    // Overlapping static entry reached from 0xC487D8.
    case 0xC487DA: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/unknown/C4/C4838A.asm:458 STA @VIRTUAL02
    case 0xC487DB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4838A.asm:458 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC487DA.
    case 0xC487DC: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C4838A.asm:459 STA @LOCAL0A
    case 0xC487DD: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/unknown/C4/C4838A.asm:461 LDY @LOCAL09
    case 0xC487DF: cpu.execute_instruction<0xA4>(0x000028, 2); return true;
    // src/unknown/C4/C4838A.asm:462 INY
    case 0xC487E1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:463 STY @LOCAL09
    case 0xC487E2: cpu.execute_instruction<0x84>(0x000028, 2); return true;
    // src/unknown/C4/C4838A.asm:465 LDA VWF_X
    case 0xC487E4: cpu.execute_instruction<0xAD>(0x009E23, 3); return true;
    // src/unknown/C4/C4838A.asm:466 LSR
    case 0xC487E7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:467 LSR
    case 0xC487E8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:468 LSR
    case 0xC487E9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:473 CLC
    case 0xC487EA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:474 ADC #16
    case 0xC487EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C4838A.asm:474 ADC #16
    // Overlapping static entry reached from 0xC487EB.
    case 0xC487ED: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4838A.asm:475 STA @VIRTUAL02
    case 0xC487EE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4838A.asm:477 TYA
    case 0xC487F0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:478 CMP @VIRTUAL02
    case 0xC487F1: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4838A.asm:479 BCCL @UNKNOWN28
    case 0xC487F3: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4838A.asm:479 BCCL @UNKNOWN28
    case 0xC487F5: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4838A.asm:479 BCCL @UNKNOWN28
    case 0xC487F7: cpu.execute_instruction<0x4C>(0x00872A, 3); return true;
    // src/unknown/C4/C4838A.asm:480 LDA @VIRTUAL04
    case 0xC487FA: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4838A.asm:481 ASL
    case 0xC487FC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:482 PHP
    case 0xC487FD: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:483 LSR
    case 0xC487FE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:484 LSR
    case 0xC487FF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:485 LSR
    case 0xC48800: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:486 LSR
    case 0xC48801: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:487 PLP
    case 0xC48802: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:488 BCC @UNKNOWN32
    case 0xC48803: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C4/C4838A.asm:489 ORA #$F000
    case 0xC48805: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00F000, 3); return true;
    // src/unknown/C4/C4838A.asm:489 ORA #$F000
    // Overlapping static entry reached from 0xC48805.
    case 0xC48807: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C4/C4838A.asm:491 ASL
    case 0xC48808: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4838A.asm:492 ASL
    case 0xC48809: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4838A.asm:493 END_C_FUNCTION
    case 0xC4880A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4838A.asm:493 END_C_FUNCTION
    case 0xC4880B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4880C.asm (unresolved).
bool execute_unresolved_c4_c4880c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4880C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4880C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4880C.asm:13 END_STACK_VARS
    case 0xC4880E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4880C.asm:13 END_STACK_VARS
    case 0xC4880F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4880C.asm:13 END_STACK_VARS
    case 0xC48810: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DA, 2); else cpu.execute_instruction<0x69>(0x00FFDA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4880C.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC48810.
    case 0xC48812: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4880C.asm:13 END_STACK_VARS
    case 0xC48813: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:14 LDA #0
    case 0xC48814: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4880C.asm:14 LDA #0
    // Overlapping static entry reached from 0xC48814.
    case 0xC48816: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4880C.asm:15 JSL UNKNOWN_C4838A
    case 0xC48817: cpu.execute_instruction<0x22>(0xC4838A, 4); return true;
    // src/unknown/C4/C4880C.asm:16 TAY
    case 0xC4881B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4880C.asm:17 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4881C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4880C.asm:17 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4881C.
    case 0xC4881E: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4880C.asm:17 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4881F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4880C.asm:17 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC48821: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4880C.asm:17 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC48821.
    case 0xC48823: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4880C.asm:17 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC48824: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C.asm:18 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC48826: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C.asm:18 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC48828: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C.asm:18 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC4882A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C.asm:18 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC4882C: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C4/C4880C.asm:19 LDX #0
    case 0xC4882E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4880C.asm:19 LDX #0
    // Overlapping static entry reached from 0xC4882E.
    case 0xC48830: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4880C.asm:20 BRA @UNKNOWN3
    case 0xC48831: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/unknown/C4/C4880C.asm:22 LDA #0
    case 0xC48833: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4880C.asm:22 LDA #0
    // Overlapping static entry reached from 0xC48833.
    case 0xC48835: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4880C.asm:23 STA @LOCAL06
    case 0xC48836: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C4/C4880C.asm:24 BRA @UNKNOWN2
    case 0xC48838: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C4/C4880C.asm:26 LDA #0
    case 0xC4883A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4880C.asm:26 LDA #0
    // Overlapping static entry reached from 0xC4883A.
    case 0xC4883C: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/unknown/C4/C4880C.asm:27 STA [@VIRTUAL06]
    case 0xC4883D: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4880C.asm:28 INC @VIRTUAL06
    case 0xC4883F: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4880C.asm:29 INC @VIRTUAL06
    case 0xC48841: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C.asm:30 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC48843: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C.asm:30 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC48845: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C.asm:30 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC48847: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C.asm:30 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC48849: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C4/C4880C.asm:31 LDA @LOCAL06
    case 0xC4884B: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C4/C4880C.asm:32 INC
    case 0xC4884D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:33 STA @LOCAL06
    case 0xC4884E: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C4/C4880C.asm:35 CMP #8
    case 0xC48850: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C4/C4880C.asm:35 CMP #8
    // Overlapping static entry reached from 0xC48850.
    case 0xC48852: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4880C.asm:36 BCC @UNKNOWN1
    case 0xC48853: cpu.execute_instruction<0x90>(0x0000E5, 2); return true;
    // src/unknown/C4/C4880C.asm:37 INX
    case 0xC48855: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:39 CPX #29
    case 0xC48856: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00001D, 2); else cpu.execute_instruction<0xE0>(0x00001D, 3); return true;
    // src/unknown/C4/C4880C.asm:39 CPX #29
    // Overlapping static entry reached from 0xC48856.
    case 0xC48858: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4880C.asm:40 BCC @UNKNOWN0
    case 0xC48859: cpu.execute_instruction<0x90>(0x0000D8, 2); return true;
    // src/unknown/C4/C4880C.asm:41 TYA
    case 0xC4885B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:42 CLC
    case 0xC4885C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:43 ADC #30
    case 0xC4885D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001E, 2); else cpu.execute_instruction<0x69>(0x00001E, 3); return true;
    // src/unknown/C4/C4880C.asm:43 ADC #30
    // Overlapping static entry reached from 0xC4885D.
    case 0xC4885F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4880C.asm:44 STA @VIRTUAL04
    case 0xC48860: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4880C.asm:45 LDX #0
    case 0xC48862: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4880C.asm:45 LDX #0
    // Overlapping static entry reached from 0xC48862.
    case 0xC48864: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4880C.asm:46 STX @LOCAL05
    case 0xC48865: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/unknown/C4/C4880C.asm:47 TXA
    case 0xC48867: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:48 STA @VIRTUAL02
    case 0xC48868: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4880C.asm:49 STA @LOCAL04
    case 0xC4886A: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4880C.asm:50 BRA @UNKNOWN5
    case 0xC4886C: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4886E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC48870: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC48872: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC48874: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4880C.asm:53 LDA @VIRTUAL02
    case 0xC48876: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4880C.asm:54 JSL UNKNOWN_C4810E
    case 0xC48878: cpu.execute_instruction<0x22>(0xC4810E, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C.asm:55 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC4887C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C.asm:55 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC4887E: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C.asm:55 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC48880: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C.asm:55 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC48882: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C4/C4880C.asm:56 LDX @LOCAL05
    case 0xC48884: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/unknown/C4/C4880C.asm:57 INX
    case 0xC48886: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:58 STX @LOCAL05
    case 0xC48887: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/unknown/C4/C4880C.asm:59 INC @VIRTUAL02
    case 0xC48889: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C4880C.asm:60 LDA @VIRTUAL02
    case 0xC4888B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4880C.asm:61 STA @LOCAL04
    case 0xC4888D: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4880C.asm:63 CPX #4
    case 0xC4888F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/unknown/C4/C4880C.asm:63 CPX #4
    // Overlapping static entry reached from 0xC4888F.
    case 0xC48891: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4880C.asm:64 BCC @UNKNOWN4
    case 0xC48892: cpu.execute_instruction<0x90>(0x0000DA, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4880C.asm:65 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC48894: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0099CE, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4880C.asm:65 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    // Overlapping static entry reached from 0xC48894.
    case 0xC48896: cpu.execute_instruction<0x99>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4880C.asm:65 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC48897: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4880C.asm:65 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC48899: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4880C.asm:65 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC4889A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4880C.asm:65 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC4889C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4880C.asm:65 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC4889D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4880C.asm:65 PROMOTENEARPTR PARTY_CHARACTERS + char_struct::name, @VIRTUAL06
    case 0xC4889F: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C4880C.asm:66 REP #PROC_FLAGS::ACCUM8
    case 0xC488A1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C.asm:67 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC488A3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C.asm:67 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC488A5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C.asm:67 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC488A7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C.asm:67 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC488A9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4880C.asm:68 JSL STRLEN
    case 0xC488AB: cpu.execute_instruction<0x22>(0xC08F22, 4); return true;
    // src/unknown/C4/C4880C.asm:69 TAY
    case 0xC488AF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:70 STY @LOCAL03
    case 0xC488B0: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/unknown/C4/C4880C.asm:71 CPY #6
    case 0xC488B2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/unknown/C4/C4880C.asm:71 CPY #6
    // Overlapping static entry reached from 0xC488B2.
    case 0xC488B4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4880C.asm:72 BNE @UNKNOWN6
    case 0xC488B5: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C4/C4880C.asm:73 DEY
    case 0xC488B7: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:74 STY @LOCAL03
    case 0xC488B8: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/unknown/C4/C4880C.asm:76 LDX #0
    case 0xC488BA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4880C.asm:76 LDX #0
    // Overlapping static entry reached from 0xC488BA.
    case 0xC488BC: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4880C.asm:77 STX @LOCAL05
    case 0xC488BD: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/unknown/C4/C4880C.asm:78 BRA @UNKNOWN8
    case 0xC488BF: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C.asm:80 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC488C1: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C.asm:80 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC488C3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C.asm:80 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC488C5: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C.asm:80 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC488C7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C.asm:81 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC488C9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C.asm:81 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC488CB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C.asm:81 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC488CD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C.asm:81 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC488CF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4880C.asm:82 LDA @LOCAL04
    case 0xC488D1: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C4880C.asm:83 STA @VIRTUAL02
    case 0xC488D3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4880C.asm:84 JSL UNKNOWN_C4810E
    case 0xC488D5: cpu.execute_instruction<0x22>(0xC4810E, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C.asm:85 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC488D9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C.asm:85 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC488DB: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C.asm:85 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC488DD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C.asm:85 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC488DF: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C4/C4880C.asm:86 LDX @LOCAL05
    case 0xC488E1: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/unknown/C4/C4880C.asm:87 INX
    case 0xC488E3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:88 STX @LOCAL05
    case 0xC488E4: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/unknown/C4/C4880C.asm:89 INC @VIRTUAL02
    case 0xC488E6: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C4880C.asm:90 LDA @VIRTUAL02
    case 0xC488E8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4880C.asm:91 STA @LOCAL04
    case 0xC488EA: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4880C.asm:93 LDY @LOCAL03
    case 0xC488EC: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C4/C4880C.asm:94 STY @VIRTUAL02
    case 0xC488EE: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C4880C.asm:95 TXA
    case 0xC488F0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:96 CMP @VIRTUAL02
    case 0xC488F1: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4880C.asm:97 BCC @UNKNOWN7
    case 0xC488F3: cpu.execute_instruction<0x90>(0x0000CC, 2); return true;
    // src/unknown/C4/C4880C.asm:98 LDX #0
    case 0xC488F5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4880C.asm:98 LDX #0
    // Overlapping static entry reached from 0xC488F5.
    case 0xC488F7: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4880C.asm:99 STX @LOCAL05
    case 0xC488F8: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/unknown/C4/C4880C.asm:100 BRA @UNKNOWN10
    case 0xC488FA: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C.asm:102 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC488FC: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C.asm:102 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC488FE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C.asm:102 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC48900: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C.asm:102 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC48902: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC48904: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC48906: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC48908: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4890A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4880C.asm:104 LDA @LOCAL04
    case 0xC4890C: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C4880C.asm:105 STA @VIRTUAL02
    case 0xC4890E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4880C.asm:106 JSL UNKNOWN_C4810E
    case 0xC48910: cpu.execute_instruction<0x22>(0xC4810E, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C.asm:107 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC48914: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C.asm:107 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC48916: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C.asm:107 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC48918: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C.asm:107 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC4891A: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C4/C4880C.asm:108 LDX @LOCAL05
    case 0xC4891C: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/unknown/C4/C4880C.asm:109 INX
    case 0xC4891E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:110 STX @LOCAL05
    case 0xC4891F: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/unknown/C4/C4880C.asm:111 INC @VIRTUAL02
    case 0xC48921: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C4880C.asm:112 LDA @VIRTUAL02
    case 0xC48923: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4880C.asm:113 STA @LOCAL04
    case 0xC48925: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4880C.asm:115 CPX #6
    case 0xC48927: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000006, 2); else cpu.execute_instruction<0xE0>(0x000006, 3); return true;
    // src/unknown/C4/C4880C.asm:115 CPX #6
    // Overlapping static entry reached from 0xC48927.
    case 0xC48929: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4880C.asm:116 BCC @UNKNOWN9
    case 0xC4892A: cpu.execute_instruction<0x90>(0x0000D0, 2); return true;
    // src/unknown/C4/C4880C.asm:117 LDX #0
    case 0xC4892C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4880C.asm:117 LDX #0
    // Overlapping static entry reached from 0xC4892C.
    case 0xC4892E: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4880C.asm:118 STX @LOCAL05
    case 0xC4892F: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/unknown/C4/C4880C.asm:119 BRA @UNKNOWN12
    case 0xC48931: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C.asm:121 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC48933: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C.asm:121 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC48935: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C.asm:121 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC48937: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C.asm:121 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC48939: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C.asm:122 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4893B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C.asm:122 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4893D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C.asm:122 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4893F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C.asm:122 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC48941: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4880C.asm:123 LDA @LOCAL04
    case 0xC48943: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C4880C.asm:124 STA @VIRTUAL02
    case 0xC48945: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4880C.asm:125 JSL UNKNOWN_C4810E
    case 0xC48947: cpu.execute_instruction<0x22>(0xC4810E, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C.asm:126 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC4894B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C.asm:126 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC4894D: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C.asm:126 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC4894F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C.asm:126 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC48951: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C4/C4880C.asm:127 LDX @LOCAL05
    case 0xC48953: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/unknown/C4/C4880C.asm:128 INX
    case 0xC48955: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:129 STX @LOCAL05
    case 0xC48956: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/unknown/C4/C4880C.asm:130 INC @VIRTUAL02
    case 0xC48958: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C4880C.asm:131 LDA @VIRTUAL02
    case 0xC4895A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4880C.asm:132 STA @LOCAL04
    case 0xC4895C: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4880C.asm:134 CPX #205
    case 0xC4895E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000CD, 2); else cpu.execute_instruction<0xE0>(0x0000CD, 3); return true;
    // src/unknown/C4/C4880C.asm:134 CPX #205
    // Overlapping static entry reached from 0xC4895E.
    case 0xC48960: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4880C.asm:135 BCC @UNKNOWN11
    case 0xC48961: cpu.execute_instruction<0x90>(0x0000D0, 2); return true;
    // src/unknown/C4/C4880C.asm:136 LDX #0
    case 0xC48963: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4880C.asm:136 LDX #0
    // Overlapping static entry reached from 0xC48963.
    case 0xC48965: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4880C.asm:137 BRA @UNKNOWN16
    case 0xC48966: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // src/unknown/C4/C4880C.asm:139 LDA #0
    case 0xC48968: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4880C.asm:139 LDA #0
    // Overlapping static entry reached from 0xC48968.
    case 0xC4896A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4880C.asm:140 STA @LOCAL06
    case 0xC4896B: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C4/C4880C.asm:141 BRA @UNKNOWN15
    case 0xC4896D: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/unknown/C4/C4880C.asm:143 LDA #0
    case 0xC4896F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4880C.asm:143 LDA #0
    // Overlapping static entry reached from 0xC4896F.
    case 0xC48971: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C4880C.asm:144 MOVE_INTY @LOCAL07, @VIRTUAL06
    case 0xC48972: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C4/C4880C.asm:144 MOVE_INTY @LOCAL07, @VIRTUAL06
    case 0xC48974: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C4/C4880C.asm:144 MOVE_INTY @LOCAL07, @VIRTUAL06
    case 0xC48976: cpu.execute_instruction<0xA4>(0x000024, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C4/C4880C.asm:144 MOVE_INTY @LOCAL07, @VIRTUAL06
    case 0xC48978: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C4880C.asm:145 STA [@VIRTUAL06]
    case 0xC4897A: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4880C.asm:146 INC @VIRTUAL06
    case 0xC4897C: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4880C.asm:147 INC @VIRTUAL06
    case 0xC4897E: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C.asm:148 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC48980: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C.asm:148 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC48982: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C.asm:148 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC48984: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C.asm:148 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC48986: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C4/C4880C.asm:149 LDA @LOCAL06
    case 0xC48988: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C4/C4880C.asm:150 INC
    case 0xC4898A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:151 STA @LOCAL06
    case 0xC4898B: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C4/C4880C.asm:153 CMP #8
    case 0xC4898D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C4/C4880C.asm:153 CMP #8
    // Overlapping static entry reached from 0xC4898D.
    case 0xC4898F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4880C.asm:154 BCC @UNKNOWN14
    case 0xC48990: cpu.execute_instruction<0x90>(0x0000DD, 2); return true;
    // src/unknown/C4/C4880C.asm:155 INX
    case 0xC48992: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:157 CPX #30
    case 0xC48993: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00001E, 2); else cpu.execute_instruction<0xE0>(0x00001E, 3); return true;
    // src/unknown/C4/C4880C.asm:157 CPX #30
    // Overlapping static entry reached from 0xC48993.
    case 0xC48995: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4880C.asm:158 BCC @UNKNOWN13
    case 0xC48996: cpu.execute_instruction<0x90>(0x0000D0, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4880C.asm:159 LOADPTR BUFFER + $1000, @VIRTUAL06
    case 0xC48998: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4880C.asm:159 LOADPTR BUFFER + $1000, @VIRTUAL06
    // Overlapping static entry reached from 0xC48998.
    case 0xC4899A: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4880C.asm:159 LOADPTR BUFFER + $1000, @VIRTUAL06
    case 0xC4899B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4880C.asm:159 LOADPTR BUFFER + $1000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4899A.
    case 0xC4899C: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4880C.asm:159 LOADPTR BUFFER + $1000, @VIRTUAL06
    case 0xC4899D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4880C.asm:159 LOADPTR BUFFER + $1000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4899C.
    case 0xC4899E: cpu.execute_instruction<0x7F>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4880C.asm:159 LOADPTR BUFFER + $1000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4899D.
    case 0xC4899F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4880C.asm:159 LOADPTR BUFFER + $1000, @VIRTUAL06
    case 0xC489A0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C.asm:160 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC489A2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C.asm:160 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC489A4: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C.asm:160 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC489A6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C.asm:160 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC489A8: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4880C.asm:161 LOADPTR BUFFER + $4000, @VIRTUAL0A
    case 0xC489AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4880C.asm:161 LOADPTR BUFFER + $4000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC489AA.
    case 0xC489AC: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4880C.asm:161 LOADPTR BUFFER + $4000, @VIRTUAL0A
    case 0xC489AD: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4880C.asm:161 LOADPTR BUFFER + $4000, @VIRTUAL0A
    case 0xC489AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4880C.asm:161 LOADPTR BUFFER + $4000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC489AF.
    case 0xC489B1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4880C.asm:161 LOADPTR BUFFER + $4000, @VIRTUAL0A
    case 0xC489B2: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4880C.asm:162 LDA #0
    case 0xC489B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4880C.asm:162 LDA #0
    // Overlapping static entry reached from 0xC489B4.
    case 0xC489B6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4880C.asm:163 STA @LOCAL06
    case 0xC489B7: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C4/C4880C.asm:164 BRA @UNKNOWN18
    case 0xC489B9: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C4/C4880C.asm:166 LDA #$0C10
    case 0xC489BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000C10, 3); return true;
    // src/unknown/C4/C4880C.asm:166 LDA #$0C10
    // Overlapping static entry reached from 0xC489BB.
    case 0xC489BD: cpu.execute_instruction<0x0C>(0x000687, 3); return true;
    // src/unknown/C4/C4880C.asm:167 STA [@VIRTUAL06]
    case 0xC489BE: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4880C.asm:168 INC @VIRTUAL06
    case 0xC489C0: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4880C.asm:169 INC @VIRTUAL06
    case 0xC489C2: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C.asm:170 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC489C4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C.asm:170 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC489C6: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C.asm:170 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC489C8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C.asm:170 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC489CA: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4880C.asm:171 LDA @LOCAL06
    case 0xC489CC: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C4/C4880C.asm:172 INC
    case 0xC489CE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:173 STA @LOCAL06
    case 0xC489CF: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C4/C4880C.asm:175 CMP #8
    case 0xC489D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C4/C4880C.asm:175 CMP #8
    // Overlapping static entry reached from 0xC489D1.
    case 0xC489D3: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4880C.asm:176 BCC @UNKNOWN17
    case 0xC489D4: cpu.execute_instruction<0x90>(0x0000E5, 2); return true;
    // src/unknown/C4/C4880C.asm:177 LDA #0
    case 0xC489D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4880C.asm:177 LDA #0
    // Overlapping static entry reached from 0xC489D6.
    case 0xC489D8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4880C.asm:178 STA @LOCAL04
    case 0xC489D9: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4880C.asm:179 BRA @UNKNOWN22
    case 0xC489DB: cpu.execute_instruction<0x80>(0x000065, 2); return true;
    // src/unknown/C4/C4880C.asm:181 LDX #0
    case 0xC489DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4880C.asm:181 LDX #0
    // Overlapping static entry reached from 0xC489DD.
    case 0xC489DF: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4880C.asm:182 BRA @UNKNOWN21
    case 0xC489E0: cpu.execute_instruction<0x80>(0x000056, 2); return true;
    // src/unknown/C4/C4880C.asm:184 LDY #16
    case 0xC489E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x000010, 3); return true;
    // src/unknown/C4/C4880C.asm:184 LDY #16
    // Overlapping static entry reached from 0xC489E2.
    case 0xC489E4: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4880C.asm:185 LDA [@VIRTUAL0A],Y
    case 0xC489E5: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4880C.asm:186 LSR
    case 0xC489E7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:187 AND #$0005
    case 0xC489E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000005, 2); else cpu.execute_instruction<0x29>(0x000005, 3); return true;
    // src/unknown/C4/C4880C.asm:187 AND #$0005
    // Overlapping static entry reached from 0xC489E8.
    case 0xC489EA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4880C.asm:188 STA @VIRTUAL02
    case 0xC489EB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4880C.asm:189 LDA [@VIRTUAL0A]
    case 0xC489ED: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4880C.asm:190 ASL
    case 0xC489EF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:191 AND #$000A
    case 0xC489F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000A, 2); else cpu.execute_instruction<0x29>(0x00000A, 3); return true;
    // src/unknown/C4/C4880C.asm:191 AND #$000A
    // Overlapping static entry reached from 0xC489F0.
    case 0xC489F2: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/unknown/C4/C4880C.asm:192 ORA @VIRTUAL02
    case 0xC489F3: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C4/C4880C.asm:193 TAY
    case 0xC489F5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:194 STA [@VIRTUAL06]
    case 0xC489F6: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C.asm:195 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC489F8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C.asm:195 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC489FA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C.asm:195 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC489FC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C.asm:195 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC489FE: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4880C.asm:196 TYA
    case 0xC48A00: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:197 CLC
    case 0xC48A01: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:198 ADC #$0C10
    case 0xC48A02: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000C10, 3); return true;
    // src/unknown/C4/C4880C.asm:198 ADC #$0C10
    // Overlapping static entry reached from 0xC48A02.
    case 0xC48A04: cpu.execute_instruction<0x0C>(0x001287, 3); return true;
    // src/unknown/C4/C4880C.asm:199 STA [@LOCAL01]
    case 0xC48A05: cpu.execute_instruction<0x87>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C.asm:200 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC48A07: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C.asm:200 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC48A09: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C.asm:200 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC48A0B: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C.asm:200 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC48A0D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C.asm:201 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC48A0F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C.asm:201 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC48A11: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C.asm:201 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC48A13: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C.asm:201 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC48A15: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4880C.asm:202 LDA [@LOCAL01]
    case 0xC48A17: cpu.execute_instruction<0xA7>(0x000012, 2); return true;
    // src/unknown/C4/C4880C.asm:203 CLC
    case 0xC48A19: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:204 ADC #$0C10
    case 0xC48A1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000C10, 3); return true;
    // src/unknown/C4/C4880C.asm:204 ADC #$0C10
    // Overlapping static entry reached from 0xC48A1A.
    case 0xC48A1C: cpu.execute_instruction<0x0C>(0x001287, 3); return true;
    // src/unknown/C4/C4880C.asm:205 STA [@LOCAL01]
    case 0xC48A1D: cpu.execute_instruction<0x87>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C.asm:206 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC48A1F: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C.asm:206 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC48A21: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C.asm:206 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC48A23: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C.asm:206 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC48A25: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4880C.asm:207 INC @VIRTUAL06
    case 0xC48A27: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4880C.asm:208 INC @VIRTUAL06
    case 0xC48A29: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4880C.asm:209 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC48A2B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4880C.asm:209 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC48A2D: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4880C.asm:209 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC48A2F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4880C.asm:209 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC48A31: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4880C.asm:210 INC @VIRTUAL0A
    case 0xC48A33: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4880C.asm:211 INC @VIRTUAL0A
    case 0xC48A35: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4880C.asm:212 INX
    case 0xC48A37: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:214 CPX #8
    case 0xC48A38: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000008, 2); else cpu.execute_instruction<0xE0>(0x000008, 3); return true;
    // src/unknown/C4/C4880C.asm:214 CPX #8
    // Overlapping static entry reached from 0xC48AB2.
    case 0xC48A39: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:214 CPX #8
    // Overlapping static entry reached from 0xC48A38.
    case 0xC48A3A: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4880C.asm:215 BCC @UNKNOWN20
    case 0xC48A3B: cpu.execute_instruction<0x90>(0x0000A5, 2); return true;
    // src/unknown/C4/C4880C.asm:216 LDA @LOCAL04
    case 0xC48A3D: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C4880C.asm:217 INC
    case 0xC48A3F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:218 STA @LOCAL04
    case 0xC48A40: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4880C.asm:220 LDA @VIRTUAL04
    case 0xC48A42: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4880C.asm:221 CLC
    case 0xC48A44: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:222 ADC #30
    case 0xC48A45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001E, 2); else cpu.execute_instruction<0x69>(0x00001E, 3); return true;
    // src/unknown/C4/C4880C.asm:222 ADC #30
    // Overlapping static entry reached from 0xC48A45.
    case 0xC48A47: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4880C.asm:223 STA @VIRTUAL02
    case 0xC48A48: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4880C.asm:224 LDA @LOCAL04
    case 0xC48A4A: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C4880C.asm:225 CMP @VIRTUAL02
    case 0xC48A4C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4880C.asm:226 BCC @UNKNOWN19
    case 0xC48A4E: cpu.execute_instruction<0x90>(0x00008D, 2); return true;
    // src/unknown/C4/C4880C.asm:227 LDA CURRENT_ENTITY_SLOT
    case 0xC48A50: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C4880C.asm:228 ASL
    case 0xC48A53: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:229 TAX
    case 0xC48A54: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:230 LDA @VIRTUAL04
    case 0xC48A55: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4880C.asm:231 ASL
    case 0xC48A57: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4880C.asm:232 STA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC48A58: cpu.execute_instruction<0x9D>(0x000E5E, 3); return true;
    // src/unknown/C4/C4880C.asm:233 SEP #PROC_FLAGS::ACCUM8
    case 0xC48A5B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4880C.asm:234 LDA #8
    case 0xC48A5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x008F08, 3); return true;
    // src/unknown/C4/C4880C.asm:235 STA BUFFER
    case 0xC48A5F: cpu.execute_instruction<0x8F>(0x7F0000, 4); return true;
    // src/unknown/C4/C4880C.asm:235 STA BUFFER
    // Overlapping static entry reached from 0xC48A5D.
    case 0xC48A60: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4880C.asm:236 LDA #30
    case 0xC48A63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008F1E, 3); return true;
    // src/unknown/C4/C4880C.asm:237 STA BUFFER+1
    case 0xC48A65: cpu.execute_instruction<0x8F>(0x7F0001, 4); return true;
    // src/unknown/C4/C4880C.asm:237 STA BUFFER+1
    // Overlapping static entry reached from 0xC48A63.
    case 0xC48A66: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C4/C4880C.asm:237 STA BUFFER+1
    // Overlapping static entry reached from 0xC48A66.
    case 0xC48A68: cpu.execute_instruction<0x7F>(0x2B20C2, 4); return true;
    // src/unknown/C4/C4880C.asm:238 REP #PROC_FLAGS::ACCUM8
    case 0xC48A69: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4880C.asm:239 END_C_FUNCTION
    case 0xC48A6B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4880C.asm:239 END_C_FUNCTION
    case 0xC48A6C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C48A6D.asm (unresolved).
bool execute_unresolved_c4_c48a6d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C48A6D.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48A6D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C48A6D.asm:8 END_STACK_VARS
    case 0xC48A6F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C48A6D.asm:8 END_STACK_VARS
    case 0xC48A70: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48A6D.asm:8 END_STACK_VARS
    case 0xC48A71: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48A6D.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC48A71.
    case 0xC48A73: cpu.execute_instruction<0xFF>(0x42AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C48A6D.asm:8 END_STACK_VARS
    case 0xC48A74: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xC48A75: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C4/C48A6D.asm:9 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC48A73.
    case 0xC48A77: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D.asm:10 STA @VIRTUAL02
    case 0xC48A78: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C48A6D.asm:11 ASL
    case 0xC48A7A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D.asm:12 TAX
    case 0xC48A7B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D.asm:13 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC48A7C: cpu.execute_instruction<0xBD>(0x000E9A, 3); return true;
    // src/unknown/C4/C48A6D.asm:14 STA @LOCAL01
    case 0xC48A7F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C48A6D.asm:15 AND #$0001
    case 0xC48A81: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C4/C48A6D.asm:15 AND #$0001
    // Overlapping static entry reached from 0xC48A81.
    case 0xC48A83: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C48A6D.asm:16 BEQ @UNKNOWN0
    case 0xC48A84: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C4/C48A6D.asm:17 LDA @LOCAL01
    case 0xC48A86: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C48A6D.asm:18 LSR
    case 0xC48A88: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D.asm:19 ASL
    case 0xC48A89: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D.asm:20 ASL
    case 0xC48A8A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D.asm:21 ASL
    case 0xC48A8B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D.asm:22 ASL
    case 0xC48A8C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C48A6D.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC48A8D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C48A6D.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC48A8F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C4/C48A6D.asm:24 CLC
    case 0xC48A91: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/unknown/C4/C48A6D.asm:25 VAR_ADD_CONST_INT_ASSIGN BUFFER + $4000, @VIRTUAL06
    case 0xC48A92: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C48A6D.asm:25 VAR_ADD_CONST_INT_ASSIGN BUFFER + $4000, @VIRTUAL06
    case 0xC48A94: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x004000, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C48A6D.asm:25 VAR_ADD_CONST_INT_ASSIGN BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC48A94.
    case 0xC48A96: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/unknown/C4/C48A6D.asm:25 VAR_ADD_CONST_INT_ASSIGN BUFFER + $4000, @VIRTUAL06
    case 0xC48A97: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/unknown/C4/C48A6D.asm:25 VAR_ADD_CONST_INT_ASSIGN BUFFER + $4000, @VIRTUAL06
    case 0xC48A99: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C48A6D.asm:25 VAR_ADD_CONST_INT_ASSIGN BUFFER + $4000, @VIRTUAL06
    case 0xC48A9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C48A6D.asm:25 VAR_ADD_CONST_INT_ASSIGN BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC48A9B.
    case 0xC48A9D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/unknown/C4/C48A6D.asm:25 VAR_ADD_CONST_INT_ASSIGN BUFFER + $4000, @VIRTUAL06
    case 0xC48A9E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C48A6D.asm:26 BRA @UNKNOWN1
    case 0xC48AA0: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C4/C48A6D.asm:28 LDA @LOCAL01
    case 0xC48AA2: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C48A6D.asm:29 LSR
    case 0xC48AA4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D.asm:30 ASL
    case 0xC48AA5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D.asm:31 ASL
    case 0xC48AA6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D.asm:32 ASL
    case 0xC48AA7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D.asm:33 ASL
    case 0xC48AA8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C48A6D.asm:34 STORE_INT1632 @VIRTUAL06
    case 0xC48AA9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C48A6D.asm:34 STORE_INT1632 @VIRTUAL06
    case 0xC48AAB: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C4/C48A6D.asm:35 CLC
    case 0xC48AAD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/unknown/C4/C48A6D.asm:36 VAR_ADD_CONST_INT_ASSIGN BUFFER + $1000, @VIRTUAL06
    case 0xC48AAE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C48A6D.asm:36 VAR_ADD_CONST_INT_ASSIGN BUFFER + $1000, @VIRTUAL06
    case 0xC48AB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x001000, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C48A6D.asm:36 VAR_ADD_CONST_INT_ASSIGN BUFFER + $1000, @VIRTUAL06
    // Overlapping static entry reached from 0xC48AB0.
    case 0xC48AB2: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/unknown/C4/C48A6D.asm:36 VAR_ADD_CONST_INT_ASSIGN BUFFER + $1000, @VIRTUAL06
    case 0xC48AB3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/unknown/C4/C48A6D.asm:36 VAR_ADD_CONST_INT_ASSIGN BUFFER + $1000, @VIRTUAL06
    // Overlapping static entry reached from 0xC48AB2.
    case 0xC48AB4: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/unknown/C4/C48A6D.asm:36 VAR_ADD_CONST_INT_ASSIGN BUFFER + $1000, @VIRTUAL06
    case 0xC48AB5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/unknown/C4/C48A6D.asm:36 VAR_ADD_CONST_INT_ASSIGN BUFFER + $1000, @VIRTUAL06
    // Overlapping static entry reached from 0xC48AB4.
    case 0xC48AB6: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C48A6D.asm:36 VAR_ADD_CONST_INT_ASSIGN BUFFER + $1000, @VIRTUAL06
    case 0xC48AB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C48A6D.asm:36 VAR_ADD_CONST_INT_ASSIGN BUFFER + $1000, @VIRTUAL06
    // Overlapping static entry reached from 0xC48AB7.
    case 0xC48AB9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/unknown/C4/C48A6D.asm:36 VAR_ADD_CONST_INT_ASSIGN BUFFER + $1000, @VIRTUAL06
    case 0xC48ABA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C48A6D.asm:38 LOADPTR BUFFER+2, @VIRTUAL0A
    case 0xC48ABC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C48A6D.asm:38 LOADPTR BUFFER+2, @VIRTUAL0A
    // Overlapping static entry reached from 0xC48ABC.
    case 0xC48ABE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C48A6D.asm:38 LOADPTR BUFFER+2, @VIRTUAL0A
    case 0xC48ABF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C48A6D.asm:38 LOADPTR BUFFER+2, @VIRTUAL0A
    case 0xC48AC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C48A6D.asm:38 LOADPTR BUFFER+2, @VIRTUAL0A
    // Overlapping static entry reached from 0xC48AC1.
    case 0xC48AC3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C48A6D.asm:38 LOADPTR BUFFER+2, @VIRTUAL0A
    case 0xC48AC4: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C48A6D.asm:39 LDY #0
    case 0xC48AC6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C48A6D.asm:39 LDY #0
    // Overlapping static entry reached from 0xC48AC6.
    case 0xC48AC8: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C48A6D.asm:40 BRA @UNKNOWN5
    case 0xC48AC9: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/unknown/C4/C48A6D.asm:42 LDX #0
    case 0xC48ACB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C48A6D.asm:42 LDX #0
    // Overlapping static entry reached from 0xC48ACB.
    case 0xC48ACD: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C48A6D.asm:43 BRA @UNKNOWN4
    case 0xC48ACE: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C4/C48A6D.asm:45 LDA [@VIRTUAL06]
    case 0xC48AD0: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C48A6D.asm:46 STA [@VIRTUAL0A]
    case 0xC48AD2: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C48A6D.asm:47 INC @VIRTUAL0A
    case 0xC48AD4: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C48A6D.asm:48 INC @VIRTUAL0A
    case 0xC48AD6: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C48A6D.asm:49 LDA #16
    case 0xC48AD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C4/C48A6D.asm:49 LDA #16
    // Overlapping static entry reached from 0xC48AD8.
    case 0xC48ADA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C48A6D.asm:50 CLC
    case 0xC48ADB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D.asm:51 ADC @VIRTUAL06
    case 0xC48ADC: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C48A6D.asm:52 STA @VIRTUAL06
    case 0xC48ADE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C48A6D.asm:53 INX
    case 0xC48AE0: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D.asm:55 CPX #30
    case 0xC48AE1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00001E, 2); else cpu.execute_instruction<0xE0>(0x00001E, 3); return true;
    // src/unknown/C4/C48A6D.asm:55 CPX #30
    // Overlapping static entry reached from 0xC48AE1.
    case 0xC48AE3: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C48A6D.asm:56 BCC @UNKNOWN3
    case 0xC48AE4: cpu.execute_instruction<0x90>(0x0000EA, 2); return true;
    // src/unknown/C4/C48A6D.asm:57 LDA #478
    case 0xC48AE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DE, 2); else cpu.execute_instruction<0xA9>(0x0001DE, 3); return true;
    // src/unknown/C4/C48A6D.asm:57 LDA #478
    // Overlapping static entry reached from 0xC48AE6.
    case 0xC48AE8: cpu.execute_instruction<0x01>(0x000049, 2); return true;
    // src/unknown/C4/C48A6D.asm:58 EOR #$FFFF
    case 0xC48AE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C48A6D.asm:58 EOR #$FFFF
    // Overlapping static entry reached from 0xC48AE8.
    case 0xC48AEA: cpu.execute_instruction<0xFF>(0x181AFF, 4); return true;
    // src/unknown/C4/C48A6D.asm:58 EOR #$FFFF
    // Overlapping static entry reached from 0xC48AE9.
    case 0xC48AEB: cpu.execute_instruction<0xFF>(0x65181A, 4); return true;
    // src/unknown/C4/C48A6D.asm:59 INC
    case 0xC48AEC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D.asm:60 CLC
    case 0xC48AED: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D.asm:61 ADC @VIRTUAL06
    case 0xC48AEE: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C48A6D.asm:61 ADC @VIRTUAL06
    // Overlapping static entry reached from 0xC48AEB.
    case 0xC48AEF: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // src/unknown/C4/C48A6D.asm:62 STA @VIRTUAL06
    case 0xC48AF0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C48A6D.asm:62 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC48AEF.
    case 0xC48AF1: cpu.execute_instruction<0x06>(0x0000C8, 2); return true;
    // src/unknown/C4/C48A6D.asm:63 INY
    case 0xC48AF2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D.asm:65 CPY #8
    case 0xC48AF3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000008, 2); else cpu.execute_instruction<0xC0>(0x000008, 3); return true;
    // src/unknown/C4/C48A6D.asm:65 CPY #8
    // Overlapping static entry reached from 0xC48AF3.
    case 0xC48AF5: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C48A6D.asm:66 BCC @UNKNOWN2
    case 0xC48AF6: cpu.execute_instruction<0x90>(0x0000D3, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C48A6D.asm:67 LOADPTR BUFFER, @LOCAL00
    case 0xC48AF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C48A6D.asm:67 LOADPTR BUFFER, @LOCAL00
    // Overlapping static entry reached from 0xC48AF8.
    case 0xC48AFA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C48A6D.asm:67 LOADPTR BUFFER, @LOCAL00
    case 0xC48AFB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C48A6D.asm:67 LOADPTR BUFFER, @LOCAL00
    case 0xC48AFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C48A6D.asm:67 LOADPTR BUFFER, @LOCAL00
    // Overlapping static entry reached from 0xC48AFD.
    case 0xC48AFF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C48A6D.asm:67 LOADPTR BUFFER, @LOCAL00
    case 0xC48B00: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C48A6D.asm:68 LDX #588
    case 0xC48B02: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004C, 2); else cpu.execute_instruction<0xA2>(0x00024C, 3); return true;
    // src/unknown/C4/C48A6D.asm:68 LDX #588
    // Overlapping static entry reached from 0xC48B02.
    case 0xC48B04: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/C4/C48A6D.asm:69 LDA #808
    case 0xC48B05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x000328, 3); return true;
    // src/unknown/C4/C48A6D.asm:69 LDA #808
    // Overlapping static entry reached from 0xC48B05.
    case 0xC48B07: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/unknown/C4/C48A6D.asm:70 JSL UNKNOWN_C3F705
    case 0xC48B08: cpu.execute_instruction<0x22>(0xC3F705, 4); return true;
    // src/unknown/C4/C48A6D.asm:70 JSL UNKNOWN_C3F705
    // Overlapping static entry reached from 0xC48B07.
    case 0xC48B09: cpu.execute_instruction<0x05>(0x0000F7, 2); return true;
    // src/unknown/C4/C48A6D.asm:70 JSL UNKNOWN_C3F705
    // Overlapping static entry reached from 0xC48B09.
    case 0xC48B0B: cpu.execute_instruction<0xC3>(0x0000A5, 2); return true;
    // src/unknown/C4/C48A6D.asm:71 LDA @VIRTUAL02
    case 0xC48B0C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C48A6D.asm:71 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC48B0B.
    case 0xC48B0D: cpu.execute_instruction<0x02>(0x00000A, 2); return true;
    // src/unknown/C4/C48A6D.asm:72 ASL
    case 0xC48B0E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D.asm:73 TAY
    case 0xC48B0F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D.asm:74 CLC
    case 0xC48B10: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D.asm:75 ADC #.LOWORD(ENTITY_SCRIPT_VAR1_TABLE)
    case 0xC48B11: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00009A, 2); else cpu.execute_instruction<0x69>(0x000E9A, 3); return true;
    // src/unknown/C4/C48A6D.asm:75 ADC #.LOWORD(ENTITY_SCRIPT_VAR1_TABLE)
    // Overlapping static entry reached from 0xC48B11.
    case 0xC48B13: cpu.execute_instruction<0x0E>(0x00BDAA, 3); return true;
    // src/unknown/C4/C48A6D.asm:76 TAX
    case 0xC48B14: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D.asm:77 LDA __BSS_START__,X
    case 0xC48B15: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C48A6D.asm:77 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC48B13.
    case 0xC48B16: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C48A6D.asm:78 INC
    case 0xC48B18: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C48A6D.asm:79 STA __BSS_START__,X
    case 0xC48B19: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C48A6D.asm:80 LDX #0
    case 0xC48B1C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C48A6D.asm:80 LDX #0
    // Overlapping static entry reached from 0xC48B1C.
    case 0xC48B1E: cpu.execute_instruction<0x00>(0x0000D9, 2); return true;
    // src/unknown/C4/C48A6D.asm:81 CMP ENTITY_SCRIPT_VAR0_TABLE,Y
    case 0xC48B1F: cpu.execute_instruction<0xD9>(0x000E5E, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C48A6D.asm:82 BLTEQ @UNKNOWN6
    case 0xC48B22: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C48A6D.asm:82 BLTEQ @UNKNOWN6
    case 0xC48B24: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C4/C48A6D.asm:83 LDX #1
    case 0xC48B26: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C48A6D.asm:83 LDX #1
    // Overlapping static entry reached from 0xC48B26.
    case 0xC48B28: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C4/C48A6D.asm:85 TXA
    case 0xC48B29: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C48A6D.asm:86 END_C_FUNCTION
    case 0xC48B2A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C48A6D.asm:86 END_C_FUNCTION
    case 0xC48B2B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C48B2C.asm (unresolved).
bool execute_unresolved_c4_c48b2c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C48B2C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48B2C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C48B2C.asm:5 LDA #5
    case 0xC48B2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C4/C48B2C.asm:5 LDA #5
    // Overlapping static entry reached from 0xC48B2E.
    case 0xC48B30: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C48B2C.asm:6 STA PSI_TELEPORT_STYLE
    case 0xC48B31: cpu.execute_instruction<0x8D>(0x009F41, 3); return true;
    // src/unknown/C4/C48B2C.asm:7 LDA #2
    case 0xC48B34: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C4/C48B2C.asm:7 LDA #2
    // Overlapping static entry reached from 0xC48B34.
    case 0xC48B36: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C48B2C.asm:8 STA GAME_STATE+game_state::leader_direction
    case 0xC48B37: cpu.execute_instruction<0x8D>(0x00987F, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C48B2C.asm:9 END_C_FUNCTION
    case 0xC48B3A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C48C69.asm (unresolved).
bool execute_unresolved_c4_c48c69_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C48C69.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48C69: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C48C69.asm:6 END_STACK_VARS
    case 0xC48C6B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C48C69.asm:6 END_STACK_VARS
    case 0xC48C6C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48C69.asm:6 END_STACK_VARS
    case 0xC48C6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48C69.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC48C6D.
    case 0xC48C6F: cpu.execute_instruction<0xFF>(0x189C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C48C69.asm:6 END_STACK_VARS
    case 0xC48C70: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C48C69.asm:7 STZ AUTO_MOVEMENT_DEMO_INDEX
    case 0xC48C71: cpu.execute_instruction<0x9C>(0x009F18, 3); return true;
    // src/unknown/C4/C48C69.asm:7 STZ AUTO_MOVEMENT_DEMO_INDEX
    // Overlapping static entry reached from 0xC48C6F.
    case 0xC48C73: cpu.execute_instruction<0x9F>(0x0000A9, 4); return true;
    // src/unknown/C4/C48C69.asm:8 LDA #0
    case 0xC48C74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C48C69.asm:8 LDA #0
    // Overlapping static entry reached from 0xC48C74.
    case 0xC48C76: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C48C69.asm:9 STA @LOCAL00
    case 0xC48C77: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C48C69.asm:10 BRA @UNKNOWN1
    case 0xC48C79: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C4/C48C69.asm:12 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC48C7B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C4/C48C69.asm:12 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC48C7D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C4/C48C69.asm:12 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC48C7E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C48C69.asm:13 TAX
    case 0xC48C80: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48C69.asm:14 STZ AUTO_MOVEMENT_DEMO_BUFFER+1,X
    case 0xC48C81: cpu.execute_instruction<0x9E>(0x009E59, 3); return true;
    // src/unknown/C4/C48C69.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC48C84: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C48C69.asm:16 STZ AUTO_MOVEMENT_DEMO_BUFFER,X
    case 0xC48C86: cpu.execute_instruction<0x9E>(0x009E58, 3); return true;
    // src/unknown/C4/C48C69.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC48C89: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C48C69.asm:18 LDA @LOCAL00
    case 0xC48C8B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C48C69.asm:19 INC
    case 0xC48C8D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C48C69.asm:20 STA @LOCAL00
    case 0xC48C8E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C48C69.asm:22 CMP #64
    case 0xC48C90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/unknown/C4/C48C69.asm:22 CMP #64
    // Overlapping static entry reached from 0xC48C90.
    case 0xC48C92: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C48C69.asm:23 BCC @UNKNOWN0
    case 0xC48C93: cpu.execute_instruction<0x90>(0x0000E6, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C48C69.asm:24 END_C_FUNCTION
    case 0xC48C95: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C48C69.asm:24 END_C_FUNCTION
    case 0xC48C96: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C48C97.asm (unresolved).
bool execute_unresolved_c4_c48c97_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C48C97.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48C97: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C48C97.asm:8 END_STACK_VARS
    case 0xC48C99: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C48C97.asm:8 END_STACK_VARS
    case 0xC48C9A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C48C97.asm:8 END_STACK_VARS
    case 0xC48C9B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48C97.asm:8 END_STACK_VARS
    case 0xC48C9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48C97.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC48C9C.
    case 0xC48C9E: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C48C97.asm:8 END_STACK_VARS
    case 0xC48C9F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C48C97.asm:8 END_STACK_VARS
    case 0xC48CA0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:9 STA @VIRTUAL04
    case 0xC48CA1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C48C97.asm:9 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC48C9E.
    case 0xC48CA2: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C4/C48C97.asm:10 STA @LOCAL01
    case 0xC48CA3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C48C97.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xC48CA2.
    case 0xC48CA4: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/unknown/C4/C48C97.asm:11 LDA AUTO_MOVEMENT_DEMO_INDEX
    case 0xC48CA5: cpu.execute_instruction<0xAD>(0x009F18, 3); return true;
    // src/unknown/C4/C48C97.asm:11 LDA AUTO_MOVEMENT_DEMO_INDEX
    // Overlapping static entry reached from 0xC48CA4.
    case 0xC48CA6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:11 LDA AUTO_MOVEMENT_DEMO_INDEX
    // Overlapping static entry reached from 0xC48CA6.
    case 0xC48CA7: cpu.execute_instruction<0x9F>(0xA22AD0, 4); return true;
    // src/unknown/C4/C48C97.asm:12 BNE @UNKNOWN0
    case 0xC48CA8: cpu.execute_instruction<0xD0>(0x00002A, 2); return true;
    // src/unknown/C4/C48C97.asm:13 LDX #.LOWORD(AUTO_MOVEMENT_DEMO_BUFFER+1)
    case 0xC48CAA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000059, 2); else cpu.execute_instruction<0xA2>(0x009E59, 3); return true;
    // src/unknown/C4/C48C97.asm:13 LDX #.LOWORD(AUTO_MOVEMENT_DEMO_BUFFER+1)
    // Overlapping static entry reached from 0xC48CA7.
    case 0xC48CAB: cpu.execute_instruction<0x59>(0x00869E, 3); return true;
    // src/unknown/C4/C48C97.asm:13 LDX #.LOWORD(AUTO_MOVEMENT_DEMO_BUFFER+1)
    // Overlapping static entry reached from 0xC48CAA.
    case 0xC48CAC: cpu.execute_instruction<0x9E>(0x000E86, 3); return true;
    // src/unknown/C4/C48C97.asm:14 STX @LOCAL00
    case 0xC48CAD: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C48C97.asm:14 STX @LOCAL00
    // Overlapping static entry reached from 0xC48CAB.
    case 0xC48CAE: cpu.execute_instruction<0x0E>(0x000286, 3); return true;
    // src/unknown/C4/C48C97.asm:15 STX @VIRTUAL02
    case 0xC48CAF: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C48C97.asm:16 LDA AUTO_MOVEMENT_DEMO_INDEX
    case 0xC48CB1: cpu.execute_instruction<0xAD>(0x009F18, 3); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C4/C48C97.asm:17 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC48CB4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C4/C48C97.asm:17 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC48CB6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C4/C48C97.asm:17 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC48CB7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C48C97.asm:18 CLC
    case 0xC48CB9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:19 ADC @VIRTUAL02
    case 0xC48CBA: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C48C97.asm:20 TAX
    case 0xC48CBC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:21 LDA __BSS_START__,X
    case 0xC48CBD: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C48C97.asm:22 BNE @UNKNOWN0
    case 0xC48CC0: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/unknown/C4/C48C97.asm:23 LDA @LOCAL01
    case 0xC48CC2: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C48C97.asm:24 STA @VIRTUAL04
    case 0xC48CC4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C48C97.asm:25 LDX @LOCAL00
    case 0xC48CC6: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C48C97.asm:26 STA __BSS_START__,X
    case 0xC48CC8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C48C97.asm:27 SEP #PROC_FLAGS::ACCUM8
    case 0xC48CCB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C48C97.asm:28 LDA #1
    case 0xC48CCD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C4/C48C97.asm:29 STA AUTO_MOVEMENT_DEMO_BUFFER
    case 0xC48CCF: cpu.execute_instruction<0x8D>(0x009E58, 3); return true;
    // src/unknown/C4/C48C97.asm:29 STA AUTO_MOVEMENT_DEMO_BUFFER
    // Overlapping static entry reached from 0xC48CCD.
    case 0xC48CD0: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:29 STA AUTO_MOVEMENT_DEMO_BUFFER
    // Overlapping static entry reached from 0xC48CD0.
    case 0xC48CD1: cpu.execute_instruction<0x9E>(0x006080, 3); return true;
    // src/unknown/C4/C48C97.asm:30 BRA @UNKNOWN4
    case 0xC48CD2: cpu.execute_instruction<0x80>(0x000060, 2); return true;
    // src/unknown/C4/C48C97.asm:33 LDA AUTO_MOVEMENT_DEMO_INDEX
    case 0xC48CD4: cpu.execute_instruction<0xAD>(0x009F18, 3); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C4/C48C97.asm:34 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC48CD7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C4/C48C97.asm:34 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC48CD9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C4/C48C97.asm:34 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC48CDA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C48C97.asm:35 STA @LOCAL00
    case 0xC48CDC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C48C97.asm:36 LDA #.LOWORD(AUTO_MOVEMENT_DEMO_BUFFER+1)
    case 0xC48CDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000059, 2); else cpu.execute_instruction<0xA9>(0x009E59, 3); return true;
    // src/unknown/C4/C48C97.asm:36 LDA #.LOWORD(AUTO_MOVEMENT_DEMO_BUFFER+1)
    // Overlapping static entry reached from 0xC48CDE.
    case 0xC48CE0: cpu.execute_instruction<0x9E>(0x000285, 3); return true;
    // src/unknown/C4/C48C97.asm:37 STA @VIRTUAL02
    case 0xC48CE1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C48C97.asm:38 LDA @LOCAL01
    case 0xC48CE3: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C48C97.asm:39 STA @VIRTUAL04
    case 0xC48CE5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C48C97.asm:40 LDA @LOCAL00
    case 0xC48CE7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C48C97.asm:41 CLC
    case 0xC48CE9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:42 ADC @VIRTUAL02
    case 0xC48CEA: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C48C97.asm:43 TAX
    case 0xC48CEC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:44 LDA __BSS_START__,X
    case 0xC48CED: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C48C97.asm:45 CMP @VIRTUAL04
    case 0xC48CF0: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C4/C48C97.asm:46 BNE @UNKNOWN1
    case 0xC48CF2: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/unknown/C4/C48C97.asm:47 LDA @LOCAL00
    case 0xC48CF4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C48C97.asm:48 CLC
    case 0xC48CF6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:49 ADC #.LOWORD(AUTO_MOVEMENT_DEMO_BUFFER)
    case 0xC48CF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000058, 2); else cpu.execute_instruction<0x69>(0x009E58, 3); return true;
    // src/unknown/C4/C48C97.asm:49 ADC #.LOWORD(AUTO_MOVEMENT_DEMO_BUFFER)
    // Overlapping static entry reached from 0xC48CF7.
    case 0xC48CF9: cpu.execute_instruction<0x9E>(0x00E2AA, 3); return true;
    // src/unknown/C4/C48C97.asm:50 TAX
    case 0xC48CFA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC48CFB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C48C97.asm:51 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC48CF9.
    case 0xC48CFC: cpu.execute_instruction<0x20>(0x0000BD, 3); return true;
    // src/unknown/C4/C48C97.asm:52 LDA __BSS_START__,X
    case 0xC48CFD: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C48C97.asm:52 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC48CFC.
    case 0xC48CFF: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/unknown/C4/C48C97.asm:53 INC
    case 0xC48D00: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:54 STA __BSS_START__,X
    case 0xC48D01: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C48C97.asm:55 BRA @UNKNOWN4
    case 0xC48D04: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/unknown/C4/C48C97.asm:57 LDA AUTO_MOVEMENT_DEMO_INDEX
    case 0xC48D06: cpu.execute_instruction<0xAD>(0x009F18, 3); return true;
    // src/unknown/C4/C48C97.asm:58 INC
    case 0xC48D09: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:59 STA AUTO_MOVEMENT_DEMO_INDEX
    case 0xC48D0A: cpu.execute_instruction<0x8D>(0x009F18, 3); return true;
    // src/unknown/C4/C48C97.asm:60 CMP #64
    case 0xC48D0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/unknown/C4/C48C97.asm:61 BRK
    case 0xC48D0F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C48C97.asm:62 BNE @UNKNOWN3
    case 0xC48D10: cpu.execute_instruction<0xD0>(0x000002, 2); return true;
    // src/unknown/C4/C48C97.asm:64 BRA @UNKNOWN2
    case 0xC48D12: cpu.execute_instruction<0x80>(0x0000FE, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C4/C48C97.asm:66 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC48D14: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C4/C48C97.asm:66 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC48D16: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C4/C48C97.asm:66 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC48D17: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C48C97.asm:67 CLC
    case 0xC48D19: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:68 ADC @VIRTUAL02
    case 0xC48D1A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C48C97.asm:69 TAX
    case 0xC48D1C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:70 LDA @LOCAL01
    case 0xC48D1D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C48C97.asm:71 STA @VIRTUAL04
    case 0xC48D1F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C48C97.asm:72 STA __BSS_START__,X
    case 0xC48D21: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C48C97.asm:73 LDA AUTO_MOVEMENT_DEMO_INDEX
    case 0xC48D24: cpu.execute_instruction<0xAD>(0x009F18, 3); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C4/C48C97.asm:74 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC48D27: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C4/C48C97.asm:74 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC48D29: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C4/C48C97.asm:74 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC48D2A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C48C97.asm:75 TAX
    case 0xC48D2C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:76 SEP #PROC_FLAGS::ACCUM8
    case 0xC48D2D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C48C97.asm:77 LDA #1
    case 0xC48D2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/unknown/C4/C48C97.asm:78 STA AUTO_MOVEMENT_DEMO_BUFFER,X
    case 0xC48D31: cpu.execute_instruction<0x9D>(0x009E58, 3); return true;
    // src/unknown/C4/C48C97.asm:78 STA AUTO_MOVEMENT_DEMO_BUFFER,X
    // Overlapping static entry reached from 0xC48D2F.
    case 0xC48D32: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/unknown/C4/C48C97.asm:78 STA AUTO_MOVEMENT_DEMO_BUFFER,X
    // Overlapping static entry reached from 0xC48D32.
    case 0xC48D33: cpu.execute_instruction<0x9E>(0x0020C2, 3); return true;
    // src/unknown/C4/C48C97.asm:80 REP #PROC_FLAGS::ACCUM8
    case 0xC48D34: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C48C97.asm:81 END_C_FUNCTION
    case 0xC48D36: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C48C97.asm:81 END_C_FUNCTION
    case 0xC48D37: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C48D58.asm (unresolved).
bool execute_unresolved_c4_c48d58_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C48D58.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48D58: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C48D58.asm:17 END_STACK_VARS
    case 0xC48D5A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C48D58.asm:17 END_STACK_VARS
    case 0xC48D5B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C48D58.asm:17 END_STACK_VARS
    case 0xC48D5C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48D58.asm:17 END_STACK_VARS
    case 0xC48D5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48D58.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC48D5D.
    case 0xC48D5F: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C48D58.asm:17 END_STACK_VARS
    case 0xC48D60: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C48D58.asm:17 END_STACK_VARS
    case 0xC48D61: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C48D58.asm:18 STY @LOCAL06
    case 0xC48D62: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/unknown/C4/C48D58.asm:18 STY @LOCAL06
    // Overlapping static entry reached from 0xC48D5F.
    case 0xC48D63: cpu.execute_instruction<0x1E>(0x000286, 3); return true;
    // src/unknown/C4/C48D58.asm:19 STX @VIRTUAL02
    case 0xC48D64: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C48D58.asm:20 TAX
    case 0xC48D66: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48D58.asm:21 LDY @PARAM03
    case 0xC48D67: cpu.execute_instruction<0xA4>(0x00002E, 2); return true;
    // src/unknown/C4/C48D58.asm:22 STY @LOCAL05
    case 0xC48D69: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/unknown/C4/C48D58.asm:23 LDA #0
    case 0xC48D6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C48D58.asm:23 LDA #0
    // Overlapping static entry reached from 0xC48D6B.
    case 0xC48D6D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C48D58.asm:24 STA @VIRTUAL04
    case 0xC48D6E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C48D58.asm:25 STX @LOCAL01 + fixed_point::integer
    case 0xC48D70: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C48D58.asm:26 LDA @VIRTUAL02
    case 0xC48D72: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C48D58.asm:27 STA @LOCAL02 + fixed_point::integer
    case 0xC48D74: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C48D58.asm:29 LDA @LOCAL01 + fixed_point::integer
    case 0xC48D76: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C48D58.asm:30 SEC
    case 0xC48D78: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C48D58.asm:31 SBC @LOCAL06
    case 0xC48D79: cpu.execute_instruction<0xE5>(0x00001E, 2); return true;
    // src/unknown/C4/C48D58.asm:32 STA @LOCAL04
    case 0xC48D7B: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C48D58.asm:33 LDA @LOCAL02 + fixed_point::integer
    case 0xC48D7D: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C48D58.asm:34 SEC
    case 0xC48D7F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C48D58.asm:35 SBC @LOCAL05
    case 0xC48D80: cpu.execute_instruction<0xE5>(0x00001C, 2); return true;
    // src/unknown/C4/C48D58.asm:36 STA @VIRTUAL02
    case 0xC48D82: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C48D58.asm:37 STA @LOCAL03
    case 0xC48D84: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C48D58.asm:38 LDA @LOCAL04
    case 0xC48D86: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C48D58.asm:39 STA @VIRTUAL02
    case 0xC48D88: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C48D58.asm:40 LDA #0
    case 0xC48D8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C48D58.asm:40 LDA #0
    // Overlapping static entry reached from 0xC48D8A.
    case 0xC48D8C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C48D58.asm:41 CLC
    case 0xC48D8D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48D58.asm:42 SBC @VIRTUAL02
    case 0xC48D8E: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C48D58.asm:43 BRANCHLTEQS @UNKNOWN3
    case 0xC48D90: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C48D58.asm:43 BRANCHLTEQS @UNKNOWN3
    case 0xC48D92: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C48D58.asm:43 BRANCHLTEQS @UNKNOWN3
    case 0xC48D94: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C48D58.asm:43 BRANCHLTEQS @UNKNOWN3
    case 0xC48D96: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // src/unknown/C4/C48D58.asm:44 LDA @LOCAL04
    case 0xC48D98: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C48D58.asm:45 EOR #$FFFF
    case 0xC48D9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C48D58.asm:45 EOR #$FFFF
    // Overlapping static entry reached from 0xC48D9A.
    case 0xC48D9C: cpu.execute_instruction<0xFF>(0x02801A, 4); return true;
    // src/unknown/C4/C48D58.asm:46 INC
    case 0xC48D9D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C48D58.asm:47 BRA @UNKNOWN4
    case 0xC48D9E: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C4/C48D58.asm:49 LDA @LOCAL04
    case 0xC48DA0: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C48D58.asm:51 CLC
    case 0xC48DA2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48D58.asm:52 SBC #1
    case 0xC48DA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000001, 2); else cpu.execute_instruction<0xE9>(0x000001, 3); return true;
    // src/unknown/C4/C48D58.asm:52 SBC #1
    // Overlapping static entry reached from 0xC48DA3.
    case 0xC48DA5: cpu.execute_instruction<0x00>(0x000070, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C4/C48D58.asm:53 BRANCHGTS @UNKNOWN12
    case 0xC48DA6: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C4/C48D58.asm:53 BRANCHGTS @UNKNOWN12
    case 0xC48DA8: cpu.execute_instruction<0x10>(0x000030, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C4/C48D58.asm:53 BRANCHGTS @UNKNOWN12
    case 0xC48DAA: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C4/C48D58.asm:53 BRANCHGTS @UNKNOWN12
    case 0xC48DAC: cpu.execute_instruction<0x30>(0x00002C, 2); return true;
    // src/unknown/C4/C48D58.asm:54 LDA @LOCAL03
    case 0xC48DAE: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C48D58.asm:55 STA @VIRTUAL02
    case 0xC48DB0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C48D58.asm:56 LDA #0
    case 0xC48DB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C48D58.asm:56 LDA #0
    // Overlapping static entry reached from 0xC48DB2.
    case 0xC48DB4: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C48D58.asm:57 CLC
    case 0xC48DB5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48D58.asm:58 SBC @VIRTUAL02
    case 0xC48DB6: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C48D58.asm:59 BRANCHLTEQS @UNKNOWN9
    case 0xC48DB8: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C48D58.asm:59 BRANCHLTEQS @UNKNOWN9
    case 0xC48DBA: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C48D58.asm:59 BRANCHLTEQS @UNKNOWN9
    case 0xC48DBC: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C48D58.asm:59 BRANCHLTEQS @UNKNOWN9
    case 0xC48DBE: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // src/unknown/C4/C48D58.asm:60 LDA @VIRTUAL02
    case 0xC48DC0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C48D58.asm:61 EOR #$FFFF
    case 0xC48DC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C48D58.asm:61 EOR #$FFFF
    // Overlapping static entry reached from 0xC48DC2.
    case 0xC48DC4: cpu.execute_instruction<0xFF>(0x02801A, 4); return true;
    // src/unknown/C4/C48D58.asm:62 INC
    case 0xC48DC5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C48D58.asm:63 BRA @UNKNOWN10
    case 0xC48DC6: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C4/C48D58.asm:65 LDA @VIRTUAL02
    case 0xC48DC8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C48D58.asm:67 CLC
    case 0xC48DCA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48D58.asm:68 SBC #1
    case 0xC48DCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000001, 2); else cpu.execute_instruction<0xE9>(0x000001, 3); return true;
    // src/unknown/C4/C48D58.asm:68 SBC #1
    // Overlapping static entry reached from 0xC48DCB.
    case 0xC48DCD: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:826 BVC :+
    // Macro caller: src/unknown/C4/C48D58.asm:69 JUMPLTEQS @UNKNOWN13
    case 0xC48DCE: cpu.execute_instruction<0x50>(0x000005, 2); return true;
    // include/macros.asm:827 BMI :++
    // Macro caller: src/unknown/C4/C48D58.asm:69 JUMPLTEQS @UNKNOWN13
    case 0xC48DD0: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:828 JMP dest
    // Macro caller: src/unknown/C4/C48D58.asm:69 JUMPLTEQS @UNKNOWN13
    case 0xC48DD2: cpu.execute_instruction<0x4C>(0x008E67, 3); return true;
    // include/macros.asm:830 BPL :+
    // Macro caller: src/unknown/C4/C48D58.asm:69 JUMPLTEQS @UNKNOWN13
    case 0xC48DD5: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:831 JMP dest
    // Macro caller: src/unknown/C4/C48D58.asm:69 JUMPLTEQS @UNKNOWN13
    case 0xC48DD7: cpu.execute_instruction<0x4C>(0x008E67, 3); return true;
    // src/unknown/C4/C48D58.asm:71 LDA @LOCAL05
    case 0xC48DDA: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C48D58.asm:72 STA @LOCAL00
    case 0xC48DDC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C48D58.asm:73 LDY @LOCAL06
    case 0xC48DDE: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/unknown/C4/C48D58.asm:74 LDX @LOCAL02 + fixed_point::integer
    case 0xC48DE0: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C4/C48D58.asm:75 LDA @LOCAL01 + fixed_point::integer
    case 0xC48DE2: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C48D58.asm:76 JSL UNKNOWN_C41EFF
    case 0xC48DE4: cpu.execute_instruction<0x22>(0xC41EFF, 4); return true;
    // src/unknown/C4/C48D58.asm:77 LDY #$2000
    case 0xC48DE8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/unknown/C4/C48D58.asm:77 LDY #$2000
    // Overlapping static entry reached from 0xC48DE8.
    case 0xC48DEA: cpu.execute_instruction<0x20>(0x006918, 3); return true;
    // src/unknown/C4/C48D58.asm:78 CLC
    case 0xC48DEB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48D58.asm:79 ADC #$1000
    case 0xC48DEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x001000, 3); return true;
    // src/unknown/C4/C48D58.asm:79 ADC #$1000
    // Overlapping static entry reached from 0xC48DEA.
    case 0xC48DED: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // src/unknown/C4/C48D58.asm:79 ADC #$1000
    // Overlapping static entry reached from 0xC48DEC.
    case 0xC48DEE: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/unknown/C4/C48D58.asm:80 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC48DEF: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/unknown/C4/C48D58.asm:80 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC48DEE.
    case 0xC48DF0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C48D58.asm:80 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC48DF0.
    case 0xC48DF1: cpu.execute_instruction<0x91>(0x0000C0, 2); return true;
    // src/unknown/C4/C48D58.asm:81 TAX
    case 0xC48DF3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48D58.asm:82 STX @LOCAL03
    case 0xC48DF4: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C4/C48D58.asm:83 TXA
    case 0xC48DF6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C48D58.asm:84 ASL
    case 0xC48DF7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C48D58.asm:85 TAX
    case 0xC48DF8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48D58.asm:86 LDA f:UNKNOWN_C48C59,X
    case 0xC48DF9: cpu.execute_instruction<0xBF>(0xC48C59, 4); return true;
    // src/unknown/C4/C48D58.asm:87 JSL UNKNOWN_C48C97
    case 0xC48DFD: cpu.execute_instruction<0x22>(0xC48C97, 4); return true;
    // src/unknown/C4/C48D58.asm:88 LDX @LOCAL03
    case 0xC48E01: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C4/C48D58.asm:89 TXA
    case 0xC48E03: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C48D58.asm:90 ASL
    case 0xC48E04: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C48D58.asm:91 ASL
    case 0xC48E05: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C48D58.asm:92 STA @LOCAL04
    case 0xC48E06: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C48D58.asm:93 CLC
    case 0xC48E08: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48D58.asm:94 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    case 0xC48E09: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x004DD6, 3); return true;
    // src/unknown/C4/C48D58.asm:94 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC48E09.
    case 0xC48E0B: cpu.execute_instruction<0x4D>(0x00B9A8, 3); return true;
    // src/unknown/C4/C48D58.asm:95 TAY
    case 0xC48E0C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C48D58.asm:96 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC48E0D: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C48D58.asm:96 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    // Overlapping static entry reached from 0xC48E0B.
    case 0xC48E0E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C48D58.asm:96 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC48E10: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C48D58.asm:96 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC48E12: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C48D58.asm:96 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC48E15: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C48D58.asm:97 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC48E17: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C48D58.asm:97 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC48E19: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C48D58.asm:97 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC48E1B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C48D58.asm:97 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC48E1D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C48D58.asm:98 CLC
    case 0xC48E1F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C4/C48D58.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC48E20: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C4/C48D58.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC48E22: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C4/C48D58.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC48E24: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C4/C48D58.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC48E26: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C4/C48D58.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC48E28: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C4/C48D58.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC48E2A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C48D58.asm:100 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC48E2C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C48D58.asm:100 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC48E2E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C48D58.asm:100 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC48E30: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C48D58.asm:100 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC48E32: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C48D58.asm:101 LDA @LOCAL04
    case 0xC48E34: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C48D58.asm:102 CLC
    case 0xC48E36: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C48D58.asm:103 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    case 0xC48E37: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000096, 2); else cpu.execute_instruction<0x69>(0x004F96, 3); return true;
    // src/unknown/C4/C48D58.asm:103 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS)
    // Overlapping static entry reached from 0xC48E37.
    case 0xC48E39: cpu.execute_instruction<0x4F>(0x00B9A8, 4); return true;
    // src/unknown/C4/C48D58.asm:104 TAY
    case 0xC48E3A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C48D58.asm:105 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC48E3B: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C48D58.asm:105 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    // Overlapping static entry reached from 0xC48E39.
    case 0xC48E3D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C48D58.asm:105 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC48E3E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C48D58.asm:105 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC48E40: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C48D58.asm:105 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC48E43: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C48D58.asm:106 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC48E45: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C48D58.asm:106 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC48E47: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C48D58.asm:106 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC48E49: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C48D58.asm:106 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC48E4B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C48D58.asm:107 CLC
    case 0xC48E4D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/C4/C48D58.asm:108 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC48E4E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/C4/C48D58.asm:108 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC48E50: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/C4/C48D58.asm:108 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC48E52: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/C4/C48D58.asm:108 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC48E54: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/C4/C48D58.asm:108 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC48E56: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/C4/C48D58.asm:108 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC48E58: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C48D58.asm:109 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC48E5A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C48D58.asm:109 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC48E5C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C48D58.asm:109 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC48E5E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C48D58.asm:109 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC48E60: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C48D58.asm:110 INC @VIRTUAL04
    case 0xC48E62: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C48D58.asm:111 JMP @UNKNOWN0
    case 0xC48E64: cpu.execute_instruction<0x4C>(0x008D76, 3); return true;
    // src/unknown/C4/C48D58.asm:113 LDA @VIRTUAL04
    case 0xC48E67: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C48D58.asm:114 PLD
    case 0xC48E69: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C48D58.asm:115 RTL
    case 0xC48E6A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C48E6B.asm (unresolved).
bool execute_unresolved_c4_c48e6b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C48E6B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48E6B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C48E6B.asm:9 END_STACK_VARS
    case 0xC48E6D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C48E6B.asm:9 END_STACK_VARS
    case 0xC48E6E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C48E6B.asm:9 END_STACK_VARS
    case 0xC48E6F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48E6B.asm:9 END_STACK_VARS
    case 0xC48E70: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48E6B.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC48E70.
    case 0xC48E72: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C48E6B.asm:9 END_STACK_VARS
    case 0xC48E73: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C48E6B.asm:9 END_STACK_VARS
    case 0xC48E74: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C48E6B.asm:10 STX @LOCAL01
    case 0xC48E75: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C48E6B.asm:10 STX @LOCAL01
    // Overlapping static entry reached from 0xC48E72.
    case 0xC48E76: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C4/C48E6B.asm:11 TAY
    case 0xC48E77: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C48E6B.asm:12 STY @LOCAL00
    case 0xC48E78: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C48E6B.asm:13 BRA @UNKNOWN1
    case 0xC48E7A: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C4/C48E6B.asm:15 LDY @LOCAL00
    case 0xC48E7C: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C48E6B.asm:16 TYA
    case 0xC48E7E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C48E6B.asm:17 ASL
    case 0xC48E7F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C48E6B.asm:18 TAX
    case 0xC48E80: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48E6B.asm:19 LDA f:UNKNOWN_C48C59,X
    case 0xC48E81: cpu.execute_instruction<0xBF>(0xC48C59, 4); return true;
    // src/unknown/C4/C48E6B.asm:20 JSL UNKNOWN_C48C97
    case 0xC48E85: cpu.execute_instruction<0x22>(0xC48C97, 4); return true;
    // src/unknown/C4/C48E6B.asm:21 LDX @LOCAL01
    case 0xC48E89: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C48E6B.asm:22 DEX
    case 0xC48E8B: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C48E6B.asm:23 STX @LOCAL01
    case 0xC48E8C: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C48E6B.asm:25 CPX #0
    case 0xC48E8E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C4/C48E6B.asm:25 CPX #0
    // Overlapping static entry reached from 0xC48E8E.
    case 0xC48E90: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C48E6B.asm:26 BNE @UNKNOWN0
    case 0xC48E91: cpu.execute_instruction<0xD0>(0x0000E9, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C48E6B.asm:27 END_C_FUNCTION
    case 0xC48E93: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C48E6B.asm:27 END_C_FUNCTION
    case 0xC48E94: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C48E95.asm (unresolved).
bool execute_unresolved_c4_c48e95_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C48E95.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48E95: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C48E95.asm:7 END_STACK_VARS
    case 0xC48E97: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C48E95.asm:7 END_STACK_VARS
    case 0xC48E98: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48E95.asm:7 END_STACK_VARS
    case 0xC48E99: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48E95.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC48E99.
    case 0xC48E9B: cpu.execute_instruction<0xFF>(0x18AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C48E95.asm:7 END_STACK_VARS
    case 0xC48E9C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C48E95.asm:8 LDA AUTO_MOVEMENT_DEMO_INDEX
    case 0xC48E9D: cpu.execute_instruction<0xAD>(0x009F18, 3); return true;
    // src/unknown/C4/C48E95.asm:8 LDA AUTO_MOVEMENT_DEMO_INDEX
    // Overlapping static entry reached from 0xC48E9B.
    case 0xC48E9F: cpu.execute_instruction<0x9F>(0x188D1A, 4); return true;
    // src/unknown/C4/C48E95.asm:9 INC
    case 0xC48EA0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C48E95.asm:10 STA AUTO_MOVEMENT_DEMO_INDEX
    case 0xC48EA1: cpu.execute_instruction<0x8D>(0x009F18, 3); return true;
    // src/unknown/C4/C48E95.asm:10 STA AUTO_MOVEMENT_DEMO_INDEX
    // Overlapping static entry reached from 0xC48E9F.
    case 0xC48EA3: cpu.execute_instruction<0x9F>(0x0A0485, 4); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C4/C48E95.asm:11 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC48EA4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C4/C48E95.asm:11 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC48EA6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C4/C48E95.asm:11 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC48EA7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C48E95.asm:12 TAX
    case 0xC48EA9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48E95.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC48EAA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C48E95.asm:14 STZ AUTO_MOVEMENT_DEMO_BUFFER,X
    case 0xC48EAC: cpu.execute_instruction<0x9E>(0x009E58, 3); return true;
    // src/unknown/C4/C48E95.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC48EAF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C48E95.asm:16 PROMOTENEARPTR AUTO_MOVEMENT_DEMO_BUFFER, @VIRTUAL06
    case 0xC48EB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000058, 2); else cpu.execute_instruction<0xA9>(0x009E58, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C48E95.asm:16 PROMOTENEARPTR AUTO_MOVEMENT_DEMO_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC48EB1.
    case 0xC48EB3: cpu.execute_instruction<0x9E>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C48E95.asm:16 PROMOTENEARPTR AUTO_MOVEMENT_DEMO_BUFFER, @VIRTUAL06
    case 0xC48EB4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C48E95.asm:16 PROMOTENEARPTR AUTO_MOVEMENT_DEMO_BUFFER, @VIRTUAL06
    case 0xC48EB6: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C48E95.asm:16 PROMOTENEARPTR AUTO_MOVEMENT_DEMO_BUFFER, @VIRTUAL06
    case 0xC48EB7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C48E95.asm:16 PROMOTENEARPTR AUTO_MOVEMENT_DEMO_BUFFER, @VIRTUAL06
    case 0xC48EB9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C48E95.asm:16 PROMOTENEARPTR AUTO_MOVEMENT_DEMO_BUFFER, @VIRTUAL06
    case 0xC48EBA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C48E95.asm:16 PROMOTENEARPTR AUTO_MOVEMENT_DEMO_BUFFER, @VIRTUAL06
    case 0xC48EBC: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C48E95.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC48EBE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C48E95.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC48EC0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C48E95.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC48EC2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C48E95.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC48EC4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C48E95.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC48EC6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C48E95.asm:19 JSL UNKNOWN_C0402B
    case 0xC48EC8: cpu.execute_instruction<0x22>(0xC0402B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C48E95.asm:20 END_C_FUNCTION
    case 0xC48ECC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C48E95.asm:20 END_C_FUNCTION
    case 0xC48ECD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C48F98.asm (unresolved).
bool execute_unresolved_c4_c48f98_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C48F98.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48F98: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C48F98.asm:7 END_STACK_VARS
    case 0xC48F9A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C48F98.asm:7 END_STACK_VARS
    case 0xC48F9B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C48F98.asm:7 END_STACK_VARS
    case 0xC48F9C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48F98.asm:7 END_STACK_VARS
    case 0xC48F9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C48F98.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC48F9D.
    case 0xC48F9F: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C48F98.asm:7 END_STACK_VARS
    case 0xC48FA0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C48F98.asm:7 END_STACK_VARS
    case 0xC48FA1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C48F98.asm:8 TAX
    case 0xC48FA2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48F98.asm:9 STX @LOCAL00
    case 0xC48FA3: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C48F98.asm:10 TXA
    case 0xC48FA5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C48F98.asm:11 JSL IS_VALID_ITEM_TRANSFORMATION
    case 0xC48FA6: cpu.execute_instruction<0x22>(0xC48ECE, 4); return true;
    // src/unknown/C4/C48F98.asm:12 CMP #0
    case 0xC48FAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C48F98.asm:12 CMP #0
    // Overlapping static entry reached from 0xC48FAA.
    case 0xC48FAC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C48F98.asm:13 BEQ @UNKNOWN0
    case 0xC48FAD: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C4/C48F98.asm:14 DEC ITEM_TRANSFORMATIONS_LOADED
    case 0xC48FAF: cpu.execute_instruction<0xCE>(0x009F2A, 3); return true;
    // src/unknown/C4/C48F98.asm:15 LDX @LOCAL00
    case 0xC48FB2: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C48F98.asm:16 TXA
    case 0xC48FB4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/unknown/C4/C48F98.asm:17 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(loaded_timed_item_transformation)
    case 0xC48FB5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/unknown/C4/C48F98.asm:17 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(loaded_timed_item_transformation)
    case 0xC48FB6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C48F98.asm:18 TAX
    case 0xC48FB7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C48F98.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC48FB8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C48F98.asm:20 STZ LOADED_TIMED_ITEM_TRANSFORMATIONS + loaded_timed_item_transformation::sfx_frequency,X
    case 0xC48FBA: cpu.execute_instruction<0x9E>(0x009F1B, 3); return true;
    // src/unknown/C4/C48F98.asm:21 STZ LOADED_TIMED_ITEM_TRANSFORMATIONS + loaded_timed_item_transformation::transformation_countdown,X
    case 0xC48FBD: cpu.execute_instruction<0x9E>(0x009F1D, 3); return true;
    // src/unknown/C4/C48F98.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC48FC0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C48F98.asm:24 END_C_FUNCTION
    case 0xC48FC2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C48F98.asm:24 END_C_FUNCTION
    case 0xC48FC3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C492D2.asm (unresolved).
bool execute_unresolved_c4_c492d2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C492D2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC492D2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C492D2.asm:8 END_STACK_VARS
    case 0xC492D4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C492D2.asm:8 END_STACK_VARS
    case 0xC492D5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C492D2.asm:8 END_STACK_VARS
    case 0xC492D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C492D2.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC492D6.
    case 0xC492D8: cpu.execute_instruction<0xFF>(0x40A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C492D2.asm:8 END_STACK_VARS
    case 0xC492D9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:9 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC492DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000240, 3); return true;
    // src/unknown/C4/C492D2.asm:9 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC492DA.
    case 0xC492DC: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C492D2.asm:10 STA @LOCAL02
    case 0xC492DD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C492D2.asm:11 LDA #0
    case 0xC492DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C492D2.asm:11 LDA #0
    // Overlapping static entry reached from 0xC492DF.
    case 0xC492E1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C492D2.asm:12 STA @VIRTUAL04
    case 0xC492E2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C492D2.asm:13 JMP @UNKNOWN1
    case 0xC492E4: cpu.execute_instruction<0x4C>(0x009387, 3); return true;
    // src/unknown/C4/C492D2.asm:15 LDA @VIRTUAL04
    case 0xC492E7: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C492D2.asm:16 ASL
    case 0xC492E9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:17 STA @LOCAL01
    case 0xC492EA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C492D2.asm:18 LOADPTR BUFFER + $7C00, @VIRTUAL06
    case 0xC492EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007C00, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C492D2.asm:18 LOADPTR BUFFER + $7C00, @VIRTUAL06
    // Overlapping static entry reached from 0xC492EC.
    case 0xC492EE: cpu.execute_instruction<0x7C>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C492D2.asm:18 LOADPTR BUFFER + $7C00, @VIRTUAL06
    case 0xC492EF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C492D2.asm:18 LOADPTR BUFFER + $7C00, @VIRTUAL06
    case 0xC492F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C492D2.asm:18 LOADPTR BUFFER + $7C00, @VIRTUAL06
    // Overlapping static entry reached from 0xC492F1.
    case 0xC492F3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C492D2.asm:18 LOADPTR BUFFER + $7C00, @VIRTUAL06
    case 0xC492F4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C492D2.asm:19 LDA @LOCAL01
    case 0xC492F6: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C492D2.asm:20 CLC
    case 0xC492F8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:21 ADC @VIRTUAL06
    case 0xC492F9: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C492D2.asm:22 STA @VIRTUAL06
    case 0xC492FB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C492D2.asm:23 LDA @LOCAL01
    case 0xC492FD: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C492D2.asm:24 TAX
    case 0xC492FF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:25 LDA [@VIRTUAL06]
    case 0xC49300: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C492D2.asm:26 CLC
    case 0xC49302: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:27 ADC BUFFER + $7900,X
    case 0xC49303: cpu.execute_instruction<0x7F>(0x7F7900, 4); return true;
    // src/unknown/C4/C492D2.asm:28 TAY
    case 0xC49307: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:29 STA [@VIRTUAL06]
    case 0xC49308: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C492D2.asm:30 LOADPTR BUFFER + $7D00, @VIRTUAL06
    case 0xC4930A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007D00, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C492D2.asm:30 LOADPTR BUFFER + $7D00, @VIRTUAL06
    // Overlapping static entry reached from 0xC4930A.
    case 0xC4930C: cpu.execute_instruction<0x7D>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C492D2.asm:30 LOADPTR BUFFER + $7D00, @VIRTUAL06
    case 0xC4930D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C492D2.asm:30 LOADPTR BUFFER + $7D00, @VIRTUAL06
    case 0xC4930F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C492D2.asm:30 LOADPTR BUFFER + $7D00, @VIRTUAL06
    // Overlapping static entry reached from 0xC4930F.
    case 0xC49311: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C492D2.asm:30 LOADPTR BUFFER + $7D00, @VIRTUAL06
    case 0xC49312: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C492D2.asm:31 LDA @LOCAL01
    case 0xC49314: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C492D2.asm:32 CLC
    case 0xC49316: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:33 ADC @VIRTUAL06
    case 0xC49317: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C492D2.asm:34 STA @VIRTUAL06
    case 0xC49319: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C492D2.asm:35 LDA @LOCAL01
    case 0xC4931B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C492D2.asm:36 TAX
    case 0xC4931D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:37 LDA [@VIRTUAL06]
    case 0xC4931E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C492D2.asm:38 CLC
    case 0xC49320: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:39 ADC BUFFER + $7A00,X
    case 0xC49321: cpu.execute_instruction<0x7F>(0x7F7A00, 4); return true;
    // src/unknown/C4/C492D2.asm:40 STA @VIRTUAL02
    case 0xC49325: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C492D2.asm:41 STA [@VIRTUAL06]
    case 0xC49327: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C492D2.asm:42 LOADPTR BUFFER + $7E00, @VIRTUAL06
    case 0xC49329: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007E00, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C492D2.asm:42 LOADPTR BUFFER + $7E00, @VIRTUAL06
    // Overlapping static entry reached from 0xC49329.
    case 0xC4932B: cpu.execute_instruction<0x7E>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C492D2.asm:42 LOADPTR BUFFER + $7E00, @VIRTUAL06
    case 0xC4932C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C492D2.asm:42 LOADPTR BUFFER + $7E00, @VIRTUAL06
    case 0xC4932E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C492D2.asm:42 LOADPTR BUFFER + $7E00, @VIRTUAL06
    // Overlapping static entry reached from 0xC4932E.
    case 0xC49330: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C492D2.asm:42 LOADPTR BUFFER + $7E00, @VIRTUAL06
    case 0xC49331: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C492D2.asm:43 LDA @LOCAL01
    case 0xC49333: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C492D2.asm:44 CLC
    case 0xC49335: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:45 ADC @VIRTUAL06
    case 0xC49336: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C492D2.asm:46 STA @VIRTUAL06
    case 0xC49338: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C492D2.asm:47 LDA @LOCAL01
    case 0xC4933A: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C492D2.asm:48 TAX
    case 0xC4933C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:49 LDA [@VIRTUAL06]
    case 0xC4933D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C492D2.asm:50 CLC
    case 0xC4933F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:51 ADC BUFFER + $7B00,X
    case 0xC49340: cpu.execute_instruction<0x7F>(0x7F7B00, 4); return true;
    // src/unknown/C4/C492D2.asm:52 TAX
    case 0xC49344: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:53 STA [@VIRTUAL06]
    case 0xC49345: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C492D2.asm:54 TYA
    case 0xC49347: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:55 XBA
    case 0xC49348: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:56 AND #$00FF
    case 0xC49349: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C492D2.asm:56 AND #$00FF
    // Overlapping static entry reached from 0xC49349.
    case 0xC4934B: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C4/C492D2.asm:57 AND #$001F
    case 0xC4934C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C492D2.asm:57 AND #$001F
    // Overlapping static entry reached from 0xC4934C.
    case 0xC4934E: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C492D2.asm:58 TAY
    case 0xC4934F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:59 LDA @VIRTUAL02
    case 0xC49350: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C492D2.asm:60 XBA
    case 0xC49352: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:61 AND #$00FF
    case 0xC49353: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C492D2.asm:61 AND #$00FF
    // Overlapping static entry reached from 0xC49353.
    case 0xC49355: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C4/C492D2.asm:62 AND #$001F
    case 0xC49356: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C492D2.asm:62 AND #$001F
    // Overlapping static entry reached from 0xC49356.
    case 0xC49358: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C492D2.asm:63 ASL
    case 0xC49359: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:64 ASL
    case 0xC4935A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:65 ASL
    case 0xC4935B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:66 ASL
    case 0xC4935C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:67 ASL
    case 0xC4935D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:68 STA @LOCAL01
    case 0xC4935E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C492D2.asm:69 TXA
    case 0xC49360: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:70 XBA
    case 0xC49361: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:71 AND #$00FF
    case 0xC49362: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C492D2.asm:71 AND #$00FF
    // Overlapping static entry reached from 0xC49362.
    case 0xC49364: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C4/C492D2.asm:72 AND #$001F
    case 0xC49365: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C492D2.asm:72 AND #$001F
    // Overlapping static entry reached from 0xC49365.
    case 0xC49367: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/unknown/C4/C492D2.asm:73 XBA
    case 0xC49368: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:74 AND #$FF00
    case 0xC49369: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C4/C492D2.asm:74 AND #$FF00
    // Overlapping static entry reached from 0xC49369.
    case 0xC4936B: cpu.execute_instruction<0xFF>(0x850A0A, 4); return true;
    // src/unknown/C4/C492D2.asm:75 ASL
    case 0xC4936C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:76 ASL
    case 0xC4936D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:77 STA @VIRTUAL02
    case 0xC4936E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C492D2.asm:77 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4936B.
    case 0xC4936F: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C492D2.asm:78 STA @LOCAL00
    case 0xC49370: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C492D2.asm:79 LDA @LOCAL01
    case 0xC49372: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C492D2.asm:80 STA @VIRTUAL02
    case 0xC49374: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C492D2.asm:81 TYA
    case 0xC49376: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C492D2.asm:82 ORA @VIRTUAL02
    case 0xC49377: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C4/C492D2.asm:83 LDX @LOCAL00
    case 0xC49379: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C492D2.asm:84 STX @VIRTUAL02
    case 0xC4937B: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C492D2.asm:85 ORA @VIRTUAL02
    case 0xC4937D: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C4/C492D2.asm:86 STA (@LOCAL02)
    case 0xC4937F: cpu.execute_instruction<0x92>(0x000012, 2); return true;
    // src/unknown/C4/C492D2.asm:87 INC @LOCAL02
    case 0xC49381: cpu.execute_instruction<0xE6>(0x000012, 2); return true;
    // src/unknown/C4/C492D2.asm:88 INC @LOCAL02
    case 0xC49383: cpu.execute_instruction<0xE6>(0x000012, 2); return true;
    // src/unknown/C4/C492D2.asm:89 INC @VIRTUAL04
    case 0xC49385: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C492D2.asm:91 LDA @VIRTUAL04
    case 0xC49387: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C492D2.asm:92 CMP #BPP4PALETTE_SIZE * 3
    case 0xC49389: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000060, 2); else cpu.execute_instruction<0xC9>(0x000060, 3); return true;
    // src/unknown/C4/C492D2.asm:92 CMP #BPP4PALETTE_SIZE * 3
    // Overlapping static entry reached from 0xC49389.
    case 0xC4938B: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C492D2.asm:93 BCCL @UNKNOWN0
    case 0xC4938C: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C492D2.asm:93 BCCL @UNKNOWN0
    case 0xC4938E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C492D2.asm:93 BCCL @UNKNOWN0
    case 0xC49390: cpu.execute_instruction<0x4C>(0x0092E7, 3); return true;
    // src/unknown/C4/C492D2.asm:94 LDA #8
    case 0xC49393: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C4/C492D2.asm:94 LDA #8
    // Overlapping static entry reached from 0xC49393.
    case 0xC49395: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C492D2.asm:95 JSL UNKNOWN_C0856B
    case 0xC49396: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C492D2.asm:96 END_C_FUNCTION
    case 0xC4939A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C492D2.asm:96 END_C_FUNCTION
    case 0xC4939B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4939C.asm (unresolved).
bool execute_unresolved_c4_c4939c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4939C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4939C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4939C.asm:13 END_STACK_VARS
    case 0xC4939E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4939C.asm:13 END_STACK_VARS
    case 0xC4939F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4939C.asm:13 END_STACK_VARS
    case 0xC493A0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4939C.asm:13 END_STACK_VARS
    case 0xC493A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E3, 2); else cpu.execute_instruction<0x69>(0x00FFE3, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4939C.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC493A1.
    case 0xC493A3: cpu.execute_instruction<0xFF>(0xE2685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4939C.asm:13 END_STACK_VARS
    case 0xC493A4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4939C.asm:13 END_STACK_VARS
    case 0xC493A5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4939C.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC493A6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4939C.asm:14 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC493A3.
    case 0xC493A7: cpu.execute_instruction<0x20>(0x000085, 3); return true;
    // src/unknown/C4/C4939C.asm:15 STA @VIRTUAL00
    case 0xC493A8: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4939C.asm:16 LDA @PARAM02
    case 0xC493AA: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/unknown/C4/C4939C.asm:17 STA @VIRTUAL01
    case 0xC493AC: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C4/C4939C.asm:18 LDA @PARAM01
    case 0xC493AE: cpu.execute_instruction<0xA5>(0x00002B, 2); return true;
    // src/unknown/C4/C4939C.asm:19 STA @LOCAL04
    case 0xC493B0: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4939C.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC493B2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4939C.asm:21 STZ MAP_PALETTE_ANIMATION_LOADED
    case 0xC493B4: cpu.execute_instruction<0x9C>(0x004474, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:22 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC493B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x0010FB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:22 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC493B7.
    case 0xC493B9: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4939C.asm:22 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC493BA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4939C.asm:22 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC493B9.
    case 0xC493BB: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:22 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC493BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:22 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC493BB.
    case 0xC493BD: cpu.execute_instruction<0xEF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:22 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC493BC.
    case 0xC493BE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4939C.asm:22 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC493BF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4939C.asm:23 LDA @VIRTUAL00
    case 0xC493C1: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4939C.asm:24 AND #$00FF
    case 0xC493C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4939C.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC493C3.
    case 0xC493C5: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4939C.asm:25 ASL
    case 0xC493C6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4939C.asm:26 ASL
    case 0xC493C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4939C.asm:27 CLC
    case 0xC493C8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4939C.asm:28 ADC @VIRTUAL06
    case 0xC493C9: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4939C.asm:29 STA @VIRTUAL06
    case 0xC493CB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4939C.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC493CD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4939C.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC493CD.
    case 0xC493CF: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4939C.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC493D0: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4939C.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC493D2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4939C.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC493D3: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4939C.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC493D5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4939C.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC493D7: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C4939C.asm:31 LDA @LOCAL04
    case 0xC493D9: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C4939C.asm:32 AND #$00FF
    case 0xC493DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4939C.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC493DB.
    case 0xC493DD: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C4/C4939C.asm:33 LDY #192
    case 0xC493DE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000C0, 2); else cpu.execute_instruction<0xA0>(0x0000C0, 3); return true;
    // src/unknown/C4/C4939C.asm:33 LDY #192
    // Overlapping static entry reached from 0xC493DE.
    case 0xC493E0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4939C.asm:34 JSL MULT168
    case 0xC493E1: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C4939C.asm:35 CLC
    case 0xC493E5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4939C.asm:36 ADC @VIRTUAL06
    case 0xC493E6: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4939C.asm:37 STA @VIRTUAL06
    case 0xC493E8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4939C.asm:38 STA @LOCAL02
    case 0xC493EA: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4939C.asm:39 LDA @VIRTUAL06+2
    case 0xC493EC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4939C.asm:40 STA @LOCAL02+2
    case 0xC493EE: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4939C.asm:41 LDA @VIRTUAL01
    case 0xC493F0: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C4/C4939C.asm:42 AND #$00FF
    case 0xC493F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4939C.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC493F2.
    case 0xC493F4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4939C.asm:43 BNE @UNKNOWN0
    case 0xC493F5: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4939C.asm:44 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC493F7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4939C.asm:44 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC493F9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4939C.asm:44 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC493FB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4939C.asm:44 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC493FD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4939C.asm:45 LDX #MAP_PALETTES_SIZE
    case 0xC493FF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C0, 2); else cpu.execute_instruction<0xA2>(0x0000C0, 3); return true;
    // src/unknown/C4/C4939C.asm:45 LDX #MAP_PALETTES_SIZE
    // Overlapping static entry reached from 0xC493FF.
    case 0xC49401: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4939C.asm:46 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC49402: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000240, 3); return true;
    // src/unknown/C4/C4939C.asm:46 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC49402.
    case 0xC49404: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C4939C.asm:47 JSL MEMCPY16
    case 0xC49405: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C4/C4939C.asm:48 JMP @UNKNOWN4
    case 0xC49409: cpu.execute_instruction<0x4C>(0x009494, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:50 LOADPTR BUFFER + $7800, @LOCAL00
    case 0xC4940C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007800, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:50 LOADPTR BUFFER + $7800, @LOCAL00
    // Overlapping static entry reached from 0xC4940C.
    case 0xC4940E: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4939C.asm:50 LOADPTR BUFFER + $7800, @LOCAL00
    case 0xC4940F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:50 LOADPTR BUFFER + $7800, @LOCAL00
    case 0xC49411: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:50 LOADPTR BUFFER + $7800, @LOCAL00
    // Overlapping static entry reached from 0xC49411.
    case 0xC49413: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4939C.asm:50 LOADPTR BUFFER + $7800, @LOCAL00
    case 0xC49414: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4939C.asm:51 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC49416: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4939C.asm:51 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC49418: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4939C.asm:51 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4941A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4939C.asm:51 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4941C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4939C.asm:52 LDA #192
    case 0xC4941E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // src/unknown/C4/C4939C.asm:52 LDA #192
    // Overlapping static entry reached from 0xC4941E.
    case 0xC49420: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4939C.asm:53 JSL MEMCPY24
    case 0xC49421: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C4/C4939C.asm:54 LDA @VIRTUAL01
    case 0xC49425: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C4/C4939C.asm:55 AND #$00FF
    case 0xC49427: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4939C.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC49427.
    case 0xC49429: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4939C.asm:56 JSL INITIALIZE_MAP_PALETTE_FADE
    case 0xC4942A: cpu.execute_instruction<0x22>(0xC49208, 4); return true;
    // src/unknown/C4/C4939C.asm:57 LDA #0
    case 0xC4942E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4939C.asm:57 LDA #0
    // Overlapping static entry reached from 0xC4942E.
    case 0xC49430: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4939C.asm:58 STA @LOCAL03
    case 0xC49431: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4939C.asm:59 BRA @UNKNOWN2
    case 0xC49433: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C4/C4939C.asm:61 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC49435: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C4/C4939C.asm:62 JSL UNKNOWN_C492D2
    case 0xC49439: cpu.execute_instruction<0x22>(0xC492D2, 4); return true;
    // src/unknown/C4/C4939C.asm:63 LDA @LOCAL03
    case 0xC4943D: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4939C.asm:64 INC
    case 0xC4943F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4939C.asm:65 STA @LOCAL03
    case 0xC49440: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4939C.asm:67 LDA @VIRTUAL01
    case 0xC49442: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C4/C4939C.asm:68 AND #$00FF
    case 0xC49444: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4939C.asm:68 AND #$00FF
    // Overlapping static entry reached from 0xC49444.
    case 0xC49446: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4939C.asm:69 STA @VIRTUAL02
    case 0xC49447: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4939C.asm:70 LDA @LOCAL03
    case 0xC49449: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4939C.asm:71 CMP @VIRTUAL02
    case 0xC4944B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4939C.asm:72 BCC @UNKNOWN1
    case 0xC4944D: cpu.execute_instruction<0x90>(0x0000E6, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4939C.asm:73 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4944F: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4939C.asm:73 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC49451: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4939C.asm:73 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC49453: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4939C.asm:73 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC49455: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4939C.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49457: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4939C.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49459: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4939C.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4945B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4939C.asm:74 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4945D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4939C.asm:75 LDX #MAP_PALETTES_SIZE
    case 0xC4945F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C0, 2); else cpu.execute_instruction<0xA2>(0x0000C0, 3); return true;
    // src/unknown/C4/C4939C.asm:75 LDX #MAP_PALETTES_SIZE
    // Overlapping static entry reached from 0xC4945F.
    case 0xC49461: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4939C.asm:76 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC49462: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000240, 3); return true;
    // src/unknown/C4/C4939C.asm:76 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC49462.
    case 0xC49464: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C4939C.asm:77 JSL MEMCPY16
    case 0xC49465: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC49469: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC49469.
    case 0xC4946B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4939C.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4946C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4946E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4939C.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4946E.
    case 0xC49470: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4939C.asm:78 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC49471: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4939C.asm:79 LDX #SPRITE_PALETTES_SIZE
    case 0xC49473: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/unknown/C4/C4939C.asm:79 LDX #SPRITE_PALETTES_SIZE
    // Overlapping static entry reached from 0xC49473.
    case 0xC49475: cpu.execute_instruction<0x01>(0x0000A9, 2); return true;
    // src/unknown/C4/C4939C.asm:80 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC49476: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000300, 3); return true;
    // src/unknown/C4/C4939C.asm:80 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC49475.
    case 0xC49477: cpu.execute_instruction<0x00>(0x000003, 2); return true;
    // src/unknown/C4/C4939C.asm:80 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC49476.
    case 0xC49478: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/unknown/C4/C4939C.asm:81 JSL MEMCPY16
    case 0xC49479: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C4/C4939C.asm:81 JSL MEMCPY16
    // Overlapping static entry reached from 0xC49478.
    case 0xC4947A: cpu.execute_instruction<0xD2>(0x00008E, 2); return true;
    // src/unknown/C4/C4939C.asm:81 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4947A.
    case 0xC4947C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x008022, 3); return true;
    // src/unknown/C4/C4939C.asm:82 JSL ADJUST_SPRITE_PALETTES_BY_AVERAGE
    case 0xC4947D: cpu.execute_instruction<0x22>(0xC00480, 4); return true;
    // src/unknown/C4/C4939C.asm:82 JSL ADJUST_SPRITE_PALETTES_BY_AVERAGE
    // Overlapping static entry reached from 0xC494D4.
    case 0xC4947E: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C4/C4939C.asm:82 JSL ADJUST_SPRITE_PALETTES_BY_AVERAGE
    // Overlapping static entry reached from 0xC4947C.
    case 0xC4947F: cpu.execute_instruction<0x04>(0x0000C0, 2); return true;
    // src/unknown/C4/C4939C.asm:83 JSL LOAD_SPECIAL_SPRITE_PALETTE
    case 0xC49481: cpu.execute_instruction<0x22>(0xC00778, 4); return true;
    // src/unknown/C4/C4939C.asm:83 JSL LOAD_SPECIAL_SPRITE_PALETTE
    // Overlapping static entry reached from 0xC4947E.
    case 0xC49484: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0018A9, 3); return true;
    // src/unknown/C4/C4939C.asm:84 LDA #24
    case 0xC49485: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C4/C4939C.asm:84 LDA #24
    // Overlapping static entry reached from 0xC49484.
    case 0xC49486: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4939C.asm:84 LDA #24
    // Overlapping static entry reached from 0xC49485.
    case 0xC49487: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4939C.asm:85 JSL UNKNOWN_C0856B
    case 0xC49488: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/unknown/C4/C4939C.asm:87 LDA PALETTE_UPLOAD_MODE
    case 0xC4948C: cpu.execute_instruction<0xAD>(0x000030, 3); return true;
    // src/unknown/C4/C4939C.asm:88 AND #$00FF
    case 0xC4948F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4939C.asm:88 AND #$00FF
    // Overlapping static entry reached from 0xC4948F.
    case 0xC49491: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4939C.asm:89 BNE @UNKNOWN3
    case 0xC49492: cpu.execute_instruction<0xD0>(0x0000F8, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4939C.asm:91 END_C_FUNCTION
    case 0xC49494: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4939C.asm:91 END_C_FUNCTION
    case 0xC49495: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49496.asm (unresolved).
bool execute_unresolved_c4_c49496_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49496.asm:3 BEGIN_C_FUNCTION
    case 0xC49496: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C49496.asm:10 END_STACK_VARS
    case 0xC49498: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C49496.asm:10 END_STACK_VARS
    case 0xC49499: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C49496.asm:10 END_STACK_VARS
    case 0xC4949A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49496.asm:10 END_STACK_VARS
    case 0xC4949B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49496.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC4949B.
    case 0xC4949D: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C49496.asm:10 END_STACK_VARS
    case 0xC4949E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C49496.asm:10 END_STACK_VARS
    case 0xC4949F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:11 STA @LOCAL02
    case 0xC494A0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C49496.asm:11 STA @LOCAL02
    // Overlapping static entry reached from 0xC4949D.
    case 0xC494A1: cpu.execute_instruction<0x12>(0x0000E0, 2); return true;
    // src/unknown/C4/C49496.asm:12 CPX #50
    case 0xC494A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000032, 2); else cpu.execute_instruction<0xE0>(0x000032, 3); return true;
    // src/unknown/C4/C49496.asm:12 CPX #50
    // Overlapping static entry reached from 0xC494A1.
    case 0xC494A3: cpu.execute_instruction<0x32>(0x000000, 2); return true;
    // src/unknown/C4/C49496.asm:12 CPX #50
    // Overlapping static entry reached from 0xC494A2.
    case 0xC494A4: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C4/C49496.asm:13 BCS @UNKNOWN2
    case 0xC494A5: cpu.execute_instruction<0xB0>(0x00006E, 2); return true;
    // src/unknown/C4/C49496.asm:14 TXA
    case 0xC494A7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/unknown/C4/C49496.asm:15 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC494A8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/unknown/C4/C49496.asm:15 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC494AA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/unknown/C4/C49496.asm:15 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC494AB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/unknown/C4/C49496.asm:15 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC494AC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C49496.asm:16 TAY
    case 0xC494AE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:17 STY @LOCAL01
    case 0xC494AF: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C49496.asm:18 LDA @LOCAL02
    case 0xC494B1: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C49496.asm:19 AND #$001F
    case 0xC494B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C49496.asm:19 AND #$001F
    // Overlapping static entry reached from 0xC494B3.
    case 0xC494B5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49496.asm:20 JSL MULT16
    case 0xC494B6: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C49496.asm:21 STA @VIRTUAL02
    case 0xC494BA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C49496.asm:22 LDY @LOCAL01
    case 0xC494BC: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C49496.asm:23 LDA @LOCAL02
    case 0xC494BE: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C49496.asm:24 LSR
    case 0xC494C0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:25 LSR
    case 0xC494C1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:26 LSR
    case 0xC494C2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:27 LSR
    case 0xC494C3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:28 LSR
    case 0xC494C4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:29 AND #$001F
    case 0xC494C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C49496.asm:29 AND #$001F
    // Overlapping static entry reached from 0xC494C5.
    case 0xC494C7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49496.asm:30 JSL MULT16
    case 0xC494C8: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C49496.asm:31 TAX
    case 0xC494CC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:32 STX @LOCAL00
    case 0xC494CD: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C49496.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC494CF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C49496.asm:34 LDA #10
    case 0xC494D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00E20A, 3); return true;
    // src/unknown/C4/C49496.asm:35 SEP #PROC_FLAGS::INDEX8
    case 0xC494D3: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C49496.asm:35 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC494D1.
    case 0xC494D4: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C4/C49496.asm:36 TAY
    case 0xC494D5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:37 REP #PROC_FLAGS::ACCUM8
    case 0xC494D6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C49496.asm:38 LDA @LOCAL02
    case 0xC494D8: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C49496.asm:39 JSL ASR8_UNKNOWN1
    case 0xC494DA: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/unknown/C4/C49496.asm:40 AND #$001F
    case 0xC494DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C49496.asm:40 AND #$001F
    // Overlapping static entry reached from 0xC494DE.
    case 0xC494E0: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C49496.asm:41 REP #PROC_FLAGS::INDEX8
    case 0xC494E1: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C49496.asm:42 LDY @LOCAL01
    case 0xC494E3: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C49496.asm:43 JSL MULT16
    case 0xC494E5: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C49496.asm:44 STA @LOCAL02
    case 0xC494E9: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C49496.asm:45 LDA @VIRTUAL02
    case 0xC494EB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C49496.asm:46 CMP #$1E45
    case 0xC494ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000045, 2); else cpu.execute_instruction<0xC9>(0x001E45, 3); return true;
    // src/unknown/C4/C49496.asm:46 CMP #$1E45
    // Overlapping static entry reached from 0xC494ED.
    case 0xC494EF: cpu.execute_instruction<0x1E>(0x000790, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C49496.asm:47 BLTEQ @UNKNOWN0
    case 0xC494F0: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C49496.asm:47 BLTEQ @UNKNOWN0
    case 0xC494F2: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C49496.asm:48 LDA #$1F00
    case 0xC494F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001F00, 3); return true;
    // src/unknown/C4/C49496.asm:48 LDA #$1F00
    // Overlapping static entry reached from 0xC494F4.
    case 0xC494F6: cpu.execute_instruction<0x1F>(0xA60285, 4); return true;
    // src/unknown/C4/C49496.asm:49 STA @VIRTUAL02
    case 0xC494F7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C49496.asm:51 LDX @LOCAL00
    case 0xC494F9: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C49496.asm:51 LDX @LOCAL00
    // Overlapping static entry reached from 0xC494F6.
    case 0xC494FA: cpu.execute_instruction<0x0E>(0x0045E0, 3); return true;
    // src/unknown/C4/C49496.asm:52 CPX #$1E45
    case 0xC494FB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000045, 2); else cpu.execute_instruction<0xE0>(0x001E45, 3); return true;
    // src/unknown/C4/C49496.asm:52 CPX #$1E45
    // Overlapping static entry reached from 0xC494FB.
    case 0xC494FD: cpu.execute_instruction<0x1E>(0x000590, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C49496.asm:53 BLTEQ @UNKNOWN1
    case 0xC494FE: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C49496.asm:53 BLTEQ @UNKNOWN1
    case 0xC49500: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C4/C49496.asm:54 LDX #$1F00
    case 0xC49502: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x001F00, 3); return true;
    // src/unknown/C4/C49496.asm:54 LDX #$1F00
    // Overlapping static entry reached from 0xC49502.
    case 0xC49504: cpu.execute_instruction<0x1F>(0xC912A5, 4); return true;
    // src/unknown/C4/C49496.asm:56 LDA @LOCAL02
    case 0xC49505: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C49496.asm:57 CMP #$1E45
    case 0xC49507: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000045, 2); else cpu.execute_instruction<0xC9>(0x001E45, 3); return true;
    // src/unknown/C4/C49496.asm:57 CMP #$1E45
    // Overlapping static entry reached from 0xC49504.
    case 0xC49508: cpu.execute_instruction<0x45>(0x00001E, 2); return true;
    // src/unknown/C4/C49496.asm:57 CMP #$1E45
    // Overlapping static entry reached from 0xC49507.
    case 0xC49509: cpu.execute_instruction<0x1E>(0x001690, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C49496.asm:58 BLTEQ @UNKNOWN3
    case 0xC4950A: cpu.execute_instruction<0x90>(0x000016, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C49496.asm:58 BLTEQ @UNKNOWN3
    case 0xC4950C: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/unknown/C4/C49496.asm:59 LDA #$1F00
    case 0xC4950E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001F00, 3); return true;
    // src/unknown/C4/C49496.asm:59 LDA #$1F00
    // Overlapping static entry reached from 0xC4950E.
    case 0xC49510: cpu.execute_instruction<0x1F>(0x801285, 4); return true;
    // src/unknown/C4/C49496.asm:60 STA @LOCAL02
    case 0xC49511: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C49496.asm:61 BRA @UNKNOWN3
    case 0xC49513: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C4/C49496.asm:61 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC49510.
    case 0xC49514: cpu.execute_instruction<0x0D>(0x0032E0, 3); return true;
    // src/unknown/C4/C49496.asm:63 CPX #50
    case 0xC49515: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000032, 2); else cpu.execute_instruction<0xE0>(0x000032, 3); return true;
    // src/unknown/C4/C49496.asm:63 CPX #50
    // Overlapping static entry reached from 0xC49515.
    case 0xC49517: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C49496.asm:64 BEQ @UNKNOWN4
    case 0xC49518: cpu.execute_instruction<0xF0>(0x00002E, 2); return true;
    // src/unknown/C4/C49496.asm:65 LDA #$1F00
    case 0xC4951A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001F00, 3); return true;
    // src/unknown/C4/C49496.asm:65 LDA #$1F00
    // Overlapping static entry reached from 0xC4951A.
    case 0xC4951C: cpu.execute_instruction<0x1F>(0xAA1285, 4); return true;
    // src/unknown/C4/C49496.asm:66 STA @LOCAL02
    case 0xC4951D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C49496.asm:67 TAX
    case 0xC4951F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:68 STX @VIRTUAL02
    case 0xC49520: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C49496.asm:70 LDA @VIRTUAL02
    case 0xC49522: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C49496.asm:71 XBA
    case 0xC49524: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:72 AND #$00FF
    case 0xC49525: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C49496.asm:72 AND #$00FF
    // Overlapping static entry reached from 0xC49525.
    case 0xC49527: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C49496.asm:73 STA @VIRTUAL02
    case 0xC49528: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C49496.asm:74 TXA
    case 0xC4952A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:75 XBA
    case 0xC4952B: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:76 AND #$00FF
    case 0xC4952C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C49496.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC4952C.
    case 0xC4952E: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C49496.asm:77 ASL
    case 0xC4952F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:78 ASL
    case 0xC49530: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:79 ASL
    case 0xC49531: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:80 ASL
    case 0xC49532: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:81 ASL
    case 0xC49533: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:82 STA @VIRTUAL04
    case 0xC49534: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C49496.asm:83 SEP #PROC_FLAGS::INDEX8
    case 0xC49536: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C49496.asm:84 LDY #10
    case 0xC49538: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00A50A, 3); return true;
    // src/unknown/C4/C49496.asm:85 LDA @LOCAL02
    case 0xC4953A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C49496.asm:85 LDA @LOCAL02
    // Overlapping static entry reached from 0xC49538.
    case 0xC4953B: cpu.execute_instruction<0x12>(0x0000EB, 2); return true;
    // src/unknown/C4/C49496.asm:86 XBA
    case 0xC4953C: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C49496.asm:87 AND #$00FF
    case 0xC4953D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C49496.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC4953D.
    case 0xC4953F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49496.asm:88 JSL ASL16_ENTRY2
    case 0xC49540: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/unknown/C4/C49496.asm:89 ORA @VIRTUAL04
    case 0xC49544: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/unknown/C4/C49496.asm:90 ORA @VIRTUAL02
    case 0xC49546: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C4/C49496.asm:92 REP #PROC_FLAGS::INDEX8
    case 0xC49548: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C49496.asm:93 END_C_FUNCTION
    case 0xC4954A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C49496.asm:93 END_C_FUNCTION
    case 0xC4954B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4954C.asm (unresolved).
bool execute_unresolved_c4_c4954c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4954C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4954C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4954C.asm:8 END_STACK_VARS
    case 0xC4954E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4954C.asm:8 END_STACK_VARS
    case 0xC4954F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4954C.asm:8 END_STACK_VARS
    case 0xC49550: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4954C.asm:8 END_STACK_VARS
    case 0xC49551: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4954C.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC49551.
    case 0xC49553: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4954C.asm:8 END_STACK_VARS
    case 0xC49554: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4954C.asm:8 END_STACK_VARS
    case 0xC49555: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4954C.asm:9 STA @VIRTUAL02
    case 0xC49556: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4954C.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC49553.
    case 0xC49557: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4954C.asm:10 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC49558: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4954C.asm:10 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC4955A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4954C.asm:10 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC4955C: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4954C.asm:10 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC4955E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4954C.asm:11 LOADPTR BUFFER, @VIRTUAL06
    case 0xC49560: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4954C.asm:11 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC49560.
    case 0xC49562: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4954C.asm:11 LOADPTR BUFFER, @VIRTUAL06
    case 0xC49563: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4954C.asm:11 LOADPTR BUFFER, @VIRTUAL06
    case 0xC49565: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4954C.asm:11 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC49565.
    case 0xC49567: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4954C.asm:11 LOADPTR BUFFER, @VIRTUAL06
    case 0xC49568: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4954C.asm:12 LDY #0
    case 0xC4956A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4954C.asm:12 LDY #0
    // Overlapping static entry reached from 0xC4956A.
    case 0xC4956C: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4954C.asm:13 STY @LOCAL00
    case 0xC4956D: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4954C.asm:14 BRA @UNKNOWN1
    case 0xC4956F: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C4/C4954C.asm:16 LDA [@VIRTUAL0A]
    case 0xC49571: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4954C.asm:17 INC @VIRTUAL0A
    case 0xC49573: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4954C.asm:18 INC @VIRTUAL0A
    case 0xC49575: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C4954C.asm:19 LDX @VIRTUAL02
    case 0xC49577: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4954C.asm:20 JSR UNKNOWN_C49496
    case 0xC49579: cpu.execute_instruction<0x20>(0x009496, 3); return true;
    // src/unknown/C4/C4954C.asm:21 STA [@VIRTUAL06]
    case 0xC4957C: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4954C.asm:22 INC @VIRTUAL06
    case 0xC4957E: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4954C.asm:23 INC @VIRTUAL06
    case 0xC49580: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4954C.asm:24 LDY @LOCAL00
    case 0xC49582: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C4954C.asm:25 INY
    case 0xC49584: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4954C.asm:26 STY @LOCAL00
    case 0xC49585: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4954C.asm:28 CPY #256
    case 0xC49587: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000100, 3); return true;
    // src/unknown/C4/C4954C.asm:28 CPY #256
    // Overlapping static entry reached from 0xC49587.
    case 0xC49589: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/unknown/C4/C4954C.asm:29 BCC @UNKNOWN0
    case 0xC4958A: cpu.execute_instruction<0x90>(0x0000E5, 2); return true;
    // src/unknown/C4/C4954C.asm:29 BCC @UNKNOWN0
    // Overlapping static entry reached from 0xC49589.
    case 0xC4958B: cpu.execute_instruction<0xE5>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4954C.asm:30 END_C_FUNCTION
    case 0xC4958C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4954C.asm:30 END_C_FUNCTION
    case 0xC4958D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4958E.asm (unresolved).
bool execute_unresolved_c4_c4958e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4958E.asm:3 BEGIN_C_FUNCTION
    case 0xC4958E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4958E.asm:17 END_STACK_VARS
    case 0xC49590: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4958E.asm:17 END_STACK_VARS
    case 0xC49591: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4958E.asm:17 END_STACK_VARS
    case 0xC49592: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4958E.asm:17 END_STACK_VARS
    case 0xC49593: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x00FFDE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4958E.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC49593.
    case 0xC49595: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4958E.asm:17 END_STACK_VARS
    case 0xC49596: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4958E.asm:17 END_STACK_VARS
    case 0xC49597: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:18 STY @LOCAL08
    case 0xC49598: cpu.execute_instruction<0x84>(0x000020, 2); return true;
    // src/unknown/C4/C4958E.asm:18 STY @LOCAL08
    // Overlapping static entry reached from 0xC49595.
    case 0xC49599: cpu.execute_instruction<0x20>(0x001E86, 3); return true;
    // src/unknown/C4/C4958E.asm:19 STX @LOCAL07
    case 0xC4959A: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/unknown/C4/C4958E.asm:20 STA @LOCAL06
    case 0xC4959C: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4958E.asm:21 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4959E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4958E.asm:21 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4959E.
    case 0xC495A0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4958E.asm:21 LOADPTR BUFFER, @VIRTUAL06
    case 0xC495A1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4958E.asm:21 LOADPTR BUFFER, @VIRTUAL06
    case 0xC495A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4958E.asm:21 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC495A3.
    case 0xC495A5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4958E.asm:21 LOADPTR BUFFER, @VIRTUAL06
    case 0xC495A6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4958E.asm:22 LOADPTR BUFFER + $200, @LOCAL00
    case 0xC495A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4958E.asm:22 LOADPTR BUFFER + $200, @LOCAL00
    // Overlapping static entry reached from 0xC495A8.
    case 0xC495AA: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4958E.asm:22 LOADPTR BUFFER + $200, @LOCAL00
    case 0xC495AB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4958E.asm:22 LOADPTR BUFFER + $200, @LOCAL00
    case 0xC495AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4958E.asm:22 LOADPTR BUFFER + $200, @LOCAL00
    // Overlapping static entry reached from 0xC495AD.
    case 0xC495AF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4958E.asm:22 LOADPTR BUFFER + $200, @LOCAL00
    case 0xC495B0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4958E.asm:23 LDX #$1000
    case 0xC495B2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x001000, 3); return true;
    // src/unknown/C4/C4958E.asm:23 LDX #$1000
    // Overlapping static entry reached from 0xC495B2.
    case 0xC495B4: cpu.execute_instruction<0x10>(0x0000E2, 2); return true;
    // src/unknown/C4/C4958E.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC495B5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4958E.asm:24 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC495B4.
    case 0xC495B6: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/unknown/C4/C4958E.asm:25 LDA #0
    case 0xC495B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C4/C4958E.asm:26 JSL MEMSET24
    case 0xC495B9: cpu.execute_instruction<0x22>(0xC08F15, 4); return true;
    // src/unknown/C4/C4958E.asm:26 JSL MEMSET24
    // Overlapping static entry reached from 0xC495B7.
    case 0xC495BA: cpu.execute_instruction<0x15>(0x00008F, 2); return true;
    // src/unknown/C4/C4958E.asm:26 JSL MEMSET24
    // Overlapping static entry reached from 0xC495BA.
    case 0xC495BC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000064, 2); else cpu.execute_instruction<0xC0>(0x001A64, 3); return true;
    // src/unknown/C4/C4958E.asm:27 STZ @LOCAL05
    case 0xC495BD: cpu.execute_instruction<0x64>(0x00001A, 2); return true;
    // src/unknown/C4/C4958E.asm:27 STZ @LOCAL05
    // Overlapping static entry reached from 0xC495BC.
    case 0xC495BE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:28 JMP @UNKNOWN8
    case 0xC495BF: cpu.execute_instruction<0x4C>(0x0096D9, 3); return true;
    // src/unknown/C4/C4958E.asm:30 LDA @LOCAL05
    case 0xC495C2: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4958E.asm:31 STA @LOCAL04
    case 0xC495C4: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4958E.asm:32 JMP @UNKNOWN4
    case 0xC495C6: cpu.execute_instruction<0x4C>(0x00966E, 3); return true;
    // src/unknown/C4/C4958E.asm:35 LDA @LOCAL07
    case 0xC495C9: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C4958E.asm:36 AND #$0001
    case 0xC495CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C4/C4958E.asm:36 AND #$0001
    // Overlapping static entry reached from 0xC495CB.
    case 0xC495CD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4958E.asm:37 BEQ @UNKNOWN2
    case 0xC495CE: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C4/C4958E.asm:38 LDA @LOCAL04
    case 0xC495D0: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4958E.asm:39 ASL
    case 0xC495D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4958E.asm:40 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC495D3: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4958E.asm:40 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC495D5: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4958E.asm:40 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC495D7: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4958E.asm:40 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC495D9: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4958E.asm:41 CLC
    case 0xC495DB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:42 ADC @VIRTUAL0A
    case 0xC495DC: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4958E.asm:43 STA @VIRTUAL0A
    case 0xC495DE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4958E.asm:44 LDA [@VIRTUAL0A]
    case 0xC495E0: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4958E.asm:45 STA @VIRTUAL02
    case 0xC495E2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:46 BRA @UNKNOWN3
    case 0xC495E4: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/unknown/C4/C4958E.asm:48 LDA @LOCAL04
    case 0xC495E6: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4958E.asm:49 ASL
    case 0xC495E8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:50 STA @LOCAL03
    case 0xC495E9: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4958E.asm:51 TAY
    case 0xC495EB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:52 LDA (@LOCAL08),Y
    case 0xC495EC: cpu.execute_instruction<0xB1>(0x000020, 2); return true;
    // src/unknown/C4/C4958E.asm:53 STA @VIRTUAL02
    case 0xC495EE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:54 LDA @LOCAL03
    case 0xC495F0: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4958E.asm:55 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC495F2: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4958E.asm:55 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC495F4: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4958E.asm:55 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC495F6: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4958E.asm:55 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC495F8: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4958E.asm:56 CLC
    case 0xC495FA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:57 ADC @VIRTUAL0A
    case 0xC495FB: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4958E.asm:58 STA @VIRTUAL0A
    case 0xC495FD: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4958E.asm:59 LDA @VIRTUAL02
    case 0xC495FF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:60 STA [@VIRTUAL0A]
    case 0xC49601: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4958E.asm:62 LDA @LOCAL04
    case 0xC49603: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4958E.asm:63 ASL
    case 0xC49605: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:64 STA @VIRTUAL04
    case 0xC49606: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4958E.asm:65 LDY @VIRTUAL04
    case 0xC49608: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C4/C4958E.asm:66 LDA (@LOCAL08),Y
    case 0xC4960A: cpu.execute_instruction<0xB1>(0x000020, 2); return true;
    // src/unknown/C4/C4958E.asm:67 STA @LOCAL02
    case 0xC4960C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4958E.asm:68 LDY @LOCAL06
    case 0xC4960E: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C4/C4958E.asm:69 LDA @VIRTUAL02
    case 0xC49610: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:70 AND #$001F
    case 0xC49612: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C4958E.asm:70 AND #$001F
    // Overlapping static entry reached from 0xC49612.
    case 0xC49614: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4958E.asm:71 TAX
    case 0xC49615: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:72 LDA @LOCAL02
    case 0xC49616: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4958E.asm:73 AND #$001F
    case 0xC49618: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C4958E.asm:73 AND #$001F
    // Overlapping static entry reached from 0xC49618.
    case 0xC4961A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C4958E.asm:74 JSR GET_COLOUR_FADE_SLOPE
    case 0xC4961B: cpu.execute_instruction<0x20>(0x0091EE, 3); return true;
    // src/unknown/C4/C4958E.asm:76 LDX @VIRTUAL04
    case 0xC4961E: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4958E.asm:77 STA BUFFER + $200,X
    case 0xC49620: cpu.execute_instruction<0x9F>(0x7F0200, 4); return true;
    // src/unknown/C4/C4958E.asm:78 LDY @LOCAL06
    case 0xC49624: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C4/C4958E.asm:79 LDA @VIRTUAL02
    case 0xC49626: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:80 AND #$03E0
    case 0xC49628: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x0003E0, 3); return true;
    // src/unknown/C4/C4958E.asm:80 AND #$03E0
    // Overlapping static entry reached from 0xC49628.
    case 0xC4962A: cpu.execute_instruction<0x03>(0x00004A, 2); return true;
    // src/unknown/C4/C4958E.asm:81 LSR
    case 0xC4962B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:82 LSR
    case 0xC4962C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:83 LSR
    case 0xC4962D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:84 LSR
    case 0xC4962E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:85 LSR
    case 0xC4962F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:86 TAX
    case 0xC49630: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:87 LDA @LOCAL02
    case 0xC49631: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4958E.asm:88 AND #$03E0
    case 0xC49633: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x0003E0, 3); return true;
    // src/unknown/C4/C4958E.asm:88 AND #$03E0
    // Overlapping static entry reached from 0xC49633.
    case 0xC49635: cpu.execute_instruction<0x03>(0x00004A, 2); return true;
    // src/unknown/C4/C4958E.asm:89 LSR
    case 0xC49636: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:90 LSR
    case 0xC49637: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:91 LSR
    case 0xC49638: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:92 LSR
    case 0xC49639: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:93 LSR
    case 0xC4963A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:94 JSR GET_COLOUR_FADE_SLOPE
    case 0xC4963B: cpu.execute_instruction<0x20>(0x0091EE, 3); return true;
    // src/unknown/C4/C4958E.asm:95 LDX @VIRTUAL04
    case 0xC4963E: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4958E.asm:96 STA BUFFER + $400,X
    case 0xC49640: cpu.execute_instruction<0x9F>(0x7F0400, 4); return true;
    // src/unknown/C4/C4958E.asm:97 LDY @LOCAL06
    case 0xC49644: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C4/C4958E.asm:98 STY @LOCAL01
    case 0xC49646: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C4/C4958E.asm:99 LDY #$0400
    case 0xC49648: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000400, 3); return true;
    // src/unknown/C4/C4958E.asm:99 LDY #$0400
    // Overlapping static entry reached from 0xC49648.
    case 0xC4964A: cpu.execute_instruction<0x04>(0x0000A5, 2); return true;
    // src/unknown/C4/C4958E.asm:100 LDA @VIRTUAL02
    case 0xC4964B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:100 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC4964A.
    case 0xC4964C: cpu.execute_instruction<0x02>(0x000029, 2); return true;
    // src/unknown/C4/C4958E.asm:101 AND #$7C00
    case 0xC4964D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x007C00, 3); return true;
    // src/unknown/C4/C4958E.asm:101 AND #$7C00
    // Overlapping static entry reached from 0xC4964D.
    case 0xC4964F: cpu.execute_instruction<0x7C>(0x005B22, 3); return true;
    // src/unknown/C4/C4958E.asm:102 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC49650: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/unknown/C4/C4958E.asm:103 TAX
    case 0xC49654: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:104 LDY #$0400
    case 0xC49655: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000400, 3); return true;
    // src/unknown/C4/C4958E.asm:104 LDY #$0400
    // Overlapping static entry reached from 0xC49655.
    case 0xC49657: cpu.execute_instruction<0x04>(0x0000A5, 2); return true;
    // src/unknown/C4/C4958E.asm:105 LDA @LOCAL02
    case 0xC49658: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4958E.asm:105 LDA @LOCAL02
    // Overlapping static entry reached from 0xC49657.
    case 0xC49659: cpu.execute_instruction<0x14>(0x000029, 2); return true;
    // src/unknown/C4/C4958E.asm:106 AND #$7C00
    case 0xC4965A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x007C00, 3); return true;
    // src/unknown/C4/C4958E.asm:106 AND #$7C00
    // Overlapping static entry reached from 0xC49659.
    case 0xC4965B: cpu.execute_instruction<0x00>(0x00007C, 2); return true;
    // src/unknown/C4/C4958E.asm:106 AND #$7C00
    // Overlapping static entry reached from 0xC4965A.
    case 0xC4965C: cpu.execute_instruction<0x7C>(0x005B22, 3); return true;
    // src/unknown/C4/C4958E.asm:107 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC4965D: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/unknown/C4/C4958E.asm:108 LDY @LOCAL01
    case 0xC49661: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C4/C4958E.asm:109 JSR GET_COLOUR_FADE_SLOPE
    case 0xC49663: cpu.execute_instruction<0x20>(0x0091EE, 3); return true;
    // src/unknown/C4/C4958E.asm:110 LDX @VIRTUAL04
    case 0xC49666: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4958E.asm:111 STA BUFFER + $600,X
    case 0xC49668: cpu.execute_instruction<0x9F>(0x7F0600, 4); return true;
    // src/unknown/C4/C4958E.asm:112 INC @LOCAL04
    case 0xC4966C: cpu.execute_instruction<0xE6>(0x000018, 2); return true;
    // src/unknown/C4/C4958E.asm:114 LDA @LOCAL05
    case 0xC4966E: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4958E.asm:115 CLC
    case 0xC49670: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:116 ADC #16
    case 0xC49671: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C4958E.asm:116 ADC #16
    // Overlapping static entry reached from 0xC49671.
    case 0xC49673: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C4/C4958E.asm:117 CMP @LOCAL04
    case 0xC49674: cpu.execute_instruction<0xC5>(0x000018, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/unknown/C4/C4958E.asm:118 BGTL @UNKNOWN1
    case 0xC49676: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/unknown/C4/C4958E.asm:118 BGTL @UNKNOWN1
    case 0xC49678: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/unknown/C4/C4958E.asm:118 BGTL @UNKNOWN1
    case 0xC4967A: cpu.execute_instruction<0x4C>(0x0095C9, 3); return true;
    // src/unknown/C4/C4958E.asm:119 LDA @LOCAL05
    case 0xC4967D: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4958E.asm:120 STA @LOCAL03
    case 0xC4967F: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4958E.asm:121 BRA @UNKNOWN7
    case 0xC49681: cpu.execute_instruction<0x80>(0x00003F, 2); return true;
    // src/unknown/C4/C4958E.asm:123 ASL
    case 0xC49683: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:124 STA @VIRTUAL02
    case 0xC49684: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:125 CLC
    case 0xC49686: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:126 ADC @LOCAL08
    case 0xC49687: cpu.execute_instruction<0x65>(0x000020, 2); return true;
    // src/unknown/C4/C4958E.asm:127 TAX
    case 0xC49689: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:128 STX @LOCAL02
    case 0xC4968A: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C4/C4958E.asm:129 LDA __BSS_START__,X
    case 0xC4968C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4958E.asm:130 AND #$001F
    case 0xC4968F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C4958E.asm:130 AND #$001F
    // Overlapping static entry reached from 0xC4968F.
    case 0xC49691: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/unknown/C4/C4958E.asm:131 XBA
    case 0xC49692: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:132 AND #$FF00
    case 0xC49693: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C4/C4958E.asm:132 AND #$FF00
    // Overlapping static entry reached from 0xC49693.
    case 0xC49695: cpu.execute_instruction<0xFF>(0x9F02A6, 4); return true;
    // src/unknown/C4/C4958E.asm:133 LDX @VIRTUAL02
    case 0xC49696: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:134 STA BUFFER + $800,X
    case 0xC49698: cpu.execute_instruction<0x9F>(0x7F0800, 4); return true;
    // src/unknown/C4/C4958E.asm:134 STA BUFFER + $800,X
    // Overlapping static entry reached from 0xC49695.
    case 0xC49699: cpu.execute_instruction<0x00>(0x000008, 2); return true;
    // src/unknown/C4/C4958E.asm:135 LDX @LOCAL02
    case 0xC4969C: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C4/C4958E.asm:136 LDA __BSS_START__,X
    case 0xC4969E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4958E.asm:137 AND #$03E0
    case 0xC496A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x0003E0, 3); return true;
    // src/unknown/C4/C4958E.asm:137 AND #$03E0
    // Overlapping static entry reached from 0xC496A1.
    case 0xC496A3: cpu.execute_instruction<0x03>(0x00000A, 2); return true;
    // src/unknown/C4/C4958E.asm:138 ASL
    case 0xC496A4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:139 ASL
    case 0xC496A5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:140 ASL
    case 0xC496A6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:141 LDX @VIRTUAL02
    case 0xC496A7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:142 STA BUFFER + $A00,X
    case 0xC496A9: cpu.execute_instruction<0x9F>(0x7F0A00, 4); return true;
    // src/unknown/C4/C4958E.asm:143 LDX @LOCAL02
    case 0xC496AD: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C4/C4958E.asm:144 LDA __BSS_START__,X
    case 0xC496AF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4958E.asm:145 AND #$7C00
    case 0xC496B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x007C00, 3); return true;
    // src/unknown/C4/C4958E.asm:145 AND #$7C00
    // Overlapping static entry reached from 0xC496B2.
    case 0xC496B4: cpu.execute_instruction<0x7C>(0x004A4A, 3); return true;
    // src/unknown/C4/C4958E.asm:146 LSR
    case 0xC496B5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:147 LSR
    case 0xC496B6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:148 LDX @VIRTUAL02
    case 0xC496B7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:149 STA BUFFER + $C00,X
    case 0xC496B9: cpu.execute_instruction<0x9F>(0x7F0C00, 4); return true;
    // src/unknown/C4/C4958E.asm:150 LDA @LOCAL03
    case 0xC496BD: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4958E.asm:151 INC
    case 0xC496BF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:152 STA @LOCAL03
    case 0xC496C0: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4958E.asm:154 LDA @LOCAL05
    case 0xC496C2: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4958E.asm:155 CLC
    case 0xC496C4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:156 ADC #16
    case 0xC496C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C4958E.asm:156 ADC #16
    // Overlapping static entry reached from 0xC496C5.
    case 0xC496C7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4958E.asm:157 STA @VIRTUAL02
    case 0xC496C8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:158 LDA @LOCAL03
    case 0xC496CA: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4958E.asm:159 CMP @VIRTUAL02
    case 0xC496CC: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:160 BCC @UNKNOWN6
    case 0xC496CE: cpu.execute_instruction<0x90>(0x0000B3, 2); return true;
    // src/unknown/C4/C4958E.asm:161 LDA @LOCAL07
    case 0xC496D0: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C4958E.asm:162 LSR
    case 0xC496D2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4958E.asm:163 STA @LOCAL07
    case 0xC496D3: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C4/C4958E.asm:164 LDA @VIRTUAL02
    case 0xC496D5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4958E.asm:165 STA @LOCAL05
    case 0xC496D7: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4958E.asm:167 LDA @LOCAL05
    case 0xC496D9: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4958E.asm:168 CMP #256
    case 0xC496DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C4/C4958E.asm:168 CMP #256
    // Overlapping static entry reached from 0xC496DB.
    case 0xC496DD: cpu.execute_instruction<0x01>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4958E.asm:169 BCCL @UNKNOWN0
    case 0xC496DE: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4958E.asm:169 BCCL @UNKNOWN0
    // Overlapping static entry reached from 0xC496DD.
    case 0xC496DF: cpu.execute_instruction<0x05>(0x0000F0, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4958E.asm:169 BCCL @UNKNOWN0
    case 0xC496E0: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4958E.asm:169 BCCL @UNKNOWN0
    // Overlapping static entry reached from 0xC496DF.
    case 0xC496E1: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4958E.asm:169 BCCL @UNKNOWN0
    case 0xC496E2: cpu.execute_instruction<0x4C>(0x0095C2, 3); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4958E.asm:169 BCCL @UNKNOWN0
    // Overlapping static entry reached from 0xC496E1.
    case 0xC496E3: cpu.execute_instruction<0xC2>(0x000095, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4958E.asm:170 END_C_FUNCTION
    case 0xC496E5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4958E.asm:170 END_C_FUNCTION
    case 0xC496E6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C496E7.asm (unresolved).
bool execute_unresolved_c4_c496e7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C496E7.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC496E7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C496E7.asm:7 LDY #.LOWORD(PALETTES)
    case 0xC496E9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000200, 3); return true;
    // src/unknown/C4/C496E7.asm:7 LDY #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC496E9.
    case 0xC496EB: cpu.execute_instruction<0x02>(0x000020, 2); return true;
    // src/unknown/C4/C496E7.asm:8 JSR UNKNOWN_C4958E
    case 0xC496EC: cpu.execute_instruction<0x20>(0x00958E, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C496E7.asm:9 END_C_FUNCTION
    case 0xC496EF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C496F0.asm (unresolved).
bool execute_unresolved_c4_c496f0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C496F0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC496F0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C496F0.asm:7 LDY #.LOWORD(MAP_PALETTE_BACKUP)
    case 0xC496F2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000076, 2); else cpu.execute_instruction<0xA0>(0x004476, 3); return true;
    // src/unknown/C4/C496F0.asm:7 LDY #.LOWORD(MAP_PALETTE_BACKUP)
    // Overlapping static entry reached from 0xC496F2.
    case 0xC496F4: cpu.execute_instruction<0x44>(0x008E20, 3); return true;
    // src/unknown/C4/C496F0.asm:8 JSR UNKNOWN_C4958E
    case 0xC496F5: cpu.execute_instruction<0x20>(0x00958E, 3); return true;
    // src/unknown/C4/C496F0.asm:8 JSR UNKNOWN_C4958E
    // Overlapping static entry reached from 0xC496F4.
    case 0xC496F7: cpu.execute_instruction<0x95>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C496F0.asm:9 END_C_FUNCTION
    case 0xC496F8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C496F9.asm (unresolved).
bool execute_unresolved_c4_c496f9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C496F9.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC496F9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C496F9.asm:8 END_STACK_VARS
    case 0xC496FB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C496F9.asm:8 END_STACK_VARS
    case 0xC496FC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C496F9.asm:8 END_STACK_VARS
    case 0xC496FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C496F9.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC496FD.
    case 0xC496FF: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C496F9.asm:8 END_STACK_VARS
    case 0xC49700: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C496F9.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC49701: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C496F9.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC49701.
    case 0xC49703: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C496F9.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC49704: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C496F9.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC49706: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C496F9.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC49707: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C496F9.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC49709: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C496F9.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4970A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C496F9.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4970C: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C496F9.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC4970E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C496F9.asm:11 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC49710: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C496F9.asm:11 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC49712: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C496F9.asm:11 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC49714: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C496F9.asm:11 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC49716: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C496F9.asm:12 LDA #^PALETTES
    case 0xC49718: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/unknown/C4/C496F9.asm:12 LDA #^PALETTES
    // Overlapping static entry reached from 0xC49718.
    case 0xC4971A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C496F9.asm:13 STA @LOCAL02+2
    case 0xC4971B: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C496F9.asm:14 LOADPTR BUFFER, @LOCAL00
    case 0xC4971D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C496F9.asm:14 LOADPTR BUFFER, @LOCAL00
    // Overlapping static entry reached from 0xC4971D.
    case 0xC4971F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C496F9.asm:14 LOADPTR BUFFER, @LOCAL00
    case 0xC49720: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C496F9.asm:14 LOADPTR BUFFER, @LOCAL00
    case 0xC49722: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C496F9.asm:14 LOADPTR BUFFER, @LOCAL00
    // Overlapping static entry reached from 0xC49722.
    case 0xC49724: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C496F9.asm:14 LOADPTR BUFFER, @LOCAL00
    case 0xC49725: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C496F9.asm:15 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC49727: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C496F9.asm:15 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC49729: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C496F9.asm:15 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4972B: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C496F9.asm:15 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4972D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C496F9.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4972F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C496F9.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC49731: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C496F9.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC49733: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C496F9.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC49735: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C496F9.asm:17 LDA #.LOWORD(PALETTES)
    case 0xC49737: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C4/C496F9.asm:17 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC49737.
    case 0xC49739: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C496F9.asm:18 JSL MEMCPY24
    case 0xC4973A: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C496F9.asm:19 END_C_FUNCTION
    case 0xC4973E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C496F9.asm:19 END_C_FUNCTION
    case 0xC4973F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49740.asm (unresolved).
bool execute_unresolved_c4_c49740_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49740.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC49740: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C49740.asm:8 END_STACK_VARS
    case 0xC49742: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C49740.asm:8 END_STACK_VARS
    case 0xC49743: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49740.asm:8 END_STACK_VARS
    case 0xC49744: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49740.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC49744.
    case 0xC49746: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C49740.asm:8 END_STACK_VARS
    case 0xC49747: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C49740.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC49748: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C49740.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC49748.
    case 0xC4974A: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C49740.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4974B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C49740.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4974D: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C49740.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4974E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C49740.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC49750: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C49740.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC49751: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C49740.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC49753: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C49740.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC49755: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C49740.asm:11 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC49757: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C49740.asm:11 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC49759: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C49740.asm:11 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4975B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C49740.asm:11 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4975D: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C49740.asm:12 LDA #^PALETTES
    case 0xC4975F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/unknown/C4/C49740.asm:12 LDA #^PALETTES
    // Overlapping static entry reached from 0xC4975F.
    case 0xC49761: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C49740.asm:13 STA @LOCAL02+2
    case 0xC49762: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C49740.asm:14 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC49764: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C49740.asm:14 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC49766: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C49740.asm:14 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC49768: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C49740.asm:14 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4976A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C49740.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4976C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C49740.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4976E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C49740.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49770: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C49740.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49772: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C49740.asm:16 LOADPTR BUFFER, @LOCAL01
    case 0xC49774: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C49740.asm:16 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC49774.
    case 0xC49776: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C49740.asm:16 LOADPTR BUFFER, @LOCAL01
    case 0xC49777: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C49740.asm:16 LOADPTR BUFFER, @LOCAL01
    case 0xC49779: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C49740.asm:16 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC49779.
    case 0xC4977B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C49740.asm:16 LOADPTR BUFFER, @LOCAL01
    case 0xC4977C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C49740.asm:17 LDA #.LOWORD(PALETTES)
    case 0xC4977E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C4/C49740.asm:17 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC4977E.
    case 0xC49780: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C49740.asm:18 JSL MEMCPY24
    case 0xC49781: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C4/C49740.asm:19 LDA #24
    case 0xC49785: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C4/C49740.asm:19 LDA #24
    // Overlapping static entry reached from 0xC49785.
    case 0xC49787: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49740.asm:20 JSL UNKNOWN_C0856B
    case 0xC49788: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C49740.asm:21 END_C_FUNCTION
    case 0xC4978C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C49740.asm:21 END_C_FUNCTION
    case 0xC4978D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4978E.asm (unresolved).
bool execute_unresolved_c4_c4978e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4978E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4978E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4978E.asm:6 END_STACK_VARS
    case 0xC49790: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4978E.asm:6 END_STACK_VARS
    case 0xC49791: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4978E.asm:6 END_STACK_VARS
    case 0xC49792: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4978E.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC49792.
    case 0xC49794: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4978E.asm:6 END_STACK_VARS
    case 0xC49795: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4978E.asm:7 LDA #.LOWORD(PALETTES) ;why is preparing the destination pointer for this memcpy so needlessly expensive?
    case 0xC49796: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C4/C4978E.asm:7 LDA #.LOWORD(PALETTES) ;why is preparing the destination pointer for this memcpy so needlessly expensive?
    // Overlapping static entry reached from 0xC49796.
    case 0xC49798: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C4978E.asm:8 STORE_INT1632 @VIRTUAL06
    case 0xC49799: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C4978E.asm:8 STORE_INT1632 @VIRTUAL06
    case 0xC4979B: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C4/C4978E.asm:9 CLC
    case 0xC4979D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/unknown/C4/C4978E.asm:10 VAR_ADD_CONST_INT_ASSIGN PALETTES & $FF0000, @VIRTUAL06
    case 0xC4979E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4978E.asm:10 VAR_ADD_CONST_INT_ASSIGN PALETTES & $FF0000, @VIRTUAL06
    case 0xC497A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000000, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4978E.asm:10 VAR_ADD_CONST_INT_ASSIGN PALETTES & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC497A0.
    case 0xC497A2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/unknown/C4/C4978E.asm:10 VAR_ADD_CONST_INT_ASSIGN PALETTES & $FF0000, @VIRTUAL06
    case 0xC497A3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/unknown/C4/C4978E.asm:10 VAR_ADD_CONST_INT_ASSIGN PALETTES & $FF0000, @VIRTUAL06
    case 0xC497A5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4978E.asm:10 VAR_ADD_CONST_INT_ASSIGN PALETTES & $FF0000, @VIRTUAL06
    case 0xC497A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007E, 2); else cpu.execute_instruction<0x69>(0x00007E, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4978E.asm:10 VAR_ADD_CONST_INT_ASSIGN PALETTES & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC497A7.
    case 0xC497A9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/unknown/C4/C4978E.asm:10 VAR_ADD_CONST_INT_ASSIGN PALETTES & $FF0000, @VIRTUAL06
    case 0xC497AA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4978E.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC497AC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4978E.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC497AE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4978E.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC497B0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4978E.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC497B2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4978E.asm:12 LDX #BPP4PALETTE_SIZE * 16
    case 0xC497B4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/unknown/C4/C4978E.asm:12 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC497B4.
    case 0xC497B6: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/C4/C4978E.asm:13 LDA #.LOWORD(MAP_PALETTE_BACKUP)
    case 0xC497B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000076, 2); else cpu.execute_instruction<0xA9>(0x004476, 3); return true;
    // src/unknown/C4/C4978E.asm:13 LDA #.LOWORD(MAP_PALETTE_BACKUP)
    // Overlapping static entry reached from 0xC497B7.
    case 0xC497B9: cpu.execute_instruction<0x44>(0x00D222, 3); return true;
    // src/unknown/C4/C4978E.asm:14 JSL MEMCPY16
    case 0xC497BA: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C4/C4978E.asm:14 JSL MEMCPY16
    // Overlapping static entry reached from 0xC497B9.
    case 0xC497BC: cpu.execute_instruction<0x8E>(0x002BC0, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4978E.asm:15 END_C_FUNCTION
    case 0xC497BE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4978E.asm:15 END_C_FUNCTION
    case 0xC497BF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C497C0.asm (unresolved).
bool execute_unresolved_c4_c497c0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C497C0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC497C0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C497C0.asm:11 END_STACK_VARS
    case 0xC497C2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C497C0.asm:11 END_STACK_VARS
    case 0xC497C3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C497C0.asm:11 END_STACK_VARS
    case 0xC497C4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C497C0.asm:11 END_STACK_VARS
    case 0xC497C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C497C0.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC497C5.
    case 0xC497C7: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C497C0.asm:11 END_STACK_VARS
    case 0xC497C8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C497C0.asm:11 END_STACK_VARS
    case 0xC497C9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C497C0.asm:12 STY @LOCAL02
    case 0xC497CA: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C4/C497C0.asm:12 STY @LOCAL02
    // Overlapping static entry reached from 0xC497C7.
    case 0xC497CB: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/unknown/C4/C497C0.asm:13 STA @VIRTUAL02
    case 0xC497CC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C497C0.asm:13 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC497CB.
    case 0xC497CD: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C497C0.asm:14 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC497CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000076, 2); else cpu.execute_instruction<0xA9>(0x004476, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C497C0.asm:14 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    // Overlapping static entry reached from 0xC497CE.
    case 0xC497D0: cpu.execute_instruction<0x44>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C497C0.asm:14 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC497D1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C497C0.asm:14 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC497D3: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C497C0.asm:14 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC497D4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C497C0.asm:14 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC497D6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C497C0.asm:14 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC497D7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C497C0.asm:14 PROMOTENEARPTR MAP_PALETTE_BACKUP, @VIRTUAL06
    case 0xC497D9: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C497C0.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC497DB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C497C0.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC497DD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C497C0.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC497DF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C497C0.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC497E1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C497C0.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC497E3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C497C0.asm:17 TXA
    case 0xC497E5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C497C0.asm:18 JSL UNKNOWN_C4954C
    case 0xC497E6: cpu.execute_instruction<0x22>(0xC4954C, 4); return true;
    // src/unknown/C4/C497C0.asm:19 LDY @LOCAL02
    case 0xC497EA: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C4/C497C0.asm:20 TYX
    case 0xC497EC: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C497C0.asm:21 LDA @VIRTUAL02
    case 0xC497ED: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C497C0.asm:22 JSL UNKNOWN_C496E7
    case 0xC497EF: cpu.execute_instruction<0x22>(0xC496E7, 4); return true;
    // src/unknown/C4/C497C0.asm:23 LDA @VIRTUAL02
    case 0xC497F3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C497C0.asm:24 CMP #1
    case 0xC497F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C497C0.asm:24 CMP #1
    // Overlapping static entry reached from 0xC497F5.
    case 0xC497F7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C497C0.asm:25 BEQ @UNKNOWN2
    case 0xC497F8: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C4/C497C0.asm:26 LDA #0
    case 0xC497FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C497C0.asm:26 LDA #0
    // Overlapping static entry reached from 0xC497FA.
    case 0xC497FC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C497C0.asm:27 STA @LOCAL01
    case 0xC497FD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C497C0.asm:28 BRA @UNKNOWN1
    case 0xC497FF: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C4/C497C0.asm:30 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC49801: cpu.execute_instruction<0x22>(0xC426ED, 4); return true;
    // src/unknown/C4/C497C0.asm:31 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC49805: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C4/C497C0.asm:32 LDA @LOCAL01
    case 0xC49809: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C497C0.asm:33 INC
    case 0xC4980B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C497C0.asm:34 STA @LOCAL01
    case 0xC4980C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C497C0.asm:36 CMP @VIRTUAL02
    case 0xC4980E: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C497C0.asm:37 BCC @UNKNOWN0
    case 0xC49810: cpu.execute_instruction<0x90>(0x0000EF, 2); return true;
    // src/unknown/C4/C497C0.asm:39 JSL UNKNOWN_C49740
    case 0xC49812: cpu.execute_instruction<0x22>(0xC49740, 4); return true;
    // src/unknown/C4/C497C0.asm:40 LDA #24
    case 0xC49816: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C4/C497C0.asm:40 LDA #24
    // Overlapping static entry reached from 0xC49816.
    case 0xC49818: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C497C0.asm:41 JSL UNKNOWN_C0856B
    case 0xC49819: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C497C0.asm:42 END_C_FUNCTION
    case 0xC4981D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C497C0.asm:42 END_C_FUNCTION
    case 0xC4981E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4981F.asm (unresolved).
bool execute_unresolved_c4_c4981f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4981F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4981F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4981F.asm:6 END_STACK_VARS
    case 0xC49821: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4981F.asm:6 END_STACK_VARS
    case 0xC49822: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4981F.asm:6 END_STACK_VARS
    case 0xC49823: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4981F.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC49823.
    case 0xC49825: cpu.execute_instruction<0xFF>(0xE8A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4981F.asm:6 END_STACK_VARS
    case 0xC49826: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    case 0xC49827: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E8, 2); else cpu.execute_instruction<0xA9>(0x000BE8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    // Overlapping static entry reached from 0xC49827.
    case 0xC49829: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    case 0xC4982A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    case 0xC4982C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    // Overlapping static entry reached from 0xC4982C.
    case 0xC4982E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    case 0xC4982F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    case 0xC49831: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    // Overlapping static entry reached from 0xC49831.
    case 0xC49833: cpu.execute_instruction<0x7C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    case 0xC49834: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    // Overlapping static entry reached from 0xC49834.
    case 0xC49836: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    case 0xC49837: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    case 0xC49839: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    case 0xC4983B: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    // Overlapping static entry reached from 0xC49839.
    case 0xC4983C: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4981F.asm:7 COPY_TO_VRAM1 UNKNOWN_C40BE8, VRAM::TEXT_LAYER_TILEMAP, $0800, 3
    // Overlapping static entry reached from 0xC4983C.
    case 0xC4983E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4981F.asm:8 END_C_FUNCTION
    case 0xC4983F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4981F.asm:8 END_C_FUNCTION
    case 0xC49840: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49841.asm (unresolved).
bool execute_unresolved_c4_c49841_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49841.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC49841: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C49841.asm:5 LDA #1
    case 0xC49843: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C49841.asm:5 LDA #1
    // Overlapping static entry reached from 0xC49843.
    case 0xC49845: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49841.asm:6 JSL UNKNOWN_C2EA15
    case 0xC49846: cpu.execute_instruction<0x22>(0xC2EA15, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C49841.asm:7 END_C_FUNCTION
    case 0xC4984A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4984B.asm (unresolved).
bool execute_unresolved_c4_c4984b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4984B.asm:3 BEGIN_C_FUNCTION
    case 0xC4984B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4984B.asm:6 END_STACK_VARS
    case 0xC4984D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4984B.asm:6 END_STACK_VARS
    case 0xC4984E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4984B.asm:6 END_STACK_VARS
    case 0xC4984F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4984B.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC4984F.
    case 0xC49851: cpu.execute_instruction<0xFF>(0x92A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4984B.asm:6 END_STACK_VARS
    case 0xC49852: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4984B.asm:7 LDA #.LOWORD(VWF_BUFFER)
    case 0xC49853: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000092, 2); else cpu.execute_instruction<0xA9>(0x003492, 3); return true;
    // src/unknown/C4/C4984B.asm:7 LDA #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC49853.
    case 0xC49855: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // src/unknown/C4/C4984B.asm:8 STA @LOCAL00
    case 0xC49856: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4984B.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC49855.
    case 0xC49857: cpu.execute_instruction<0x0E>(0x0040A0, 3); return true;
    // src/unknown/C4/C4984B.asm:9 LDY #32 * 26
    case 0xC49858: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000040, 2); else cpu.execute_instruction<0xA0>(0x000340, 3); return true;
    // src/unknown/C4/C4984B.asm:9 LDY #32 * 26
    // Overlapping static entry reached from 0xC49858.
    case 0xC4985A: cpu.execute_instruction<0x03>(0x000080, 2); return true;
    // src/unknown/C4/C4984B.asm:10 BRA @UNKNOWN1
    case 0xC4985B: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C4/C4984B.asm:10 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC4985A.
    case 0xC4985C: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/C4/C4984B.asm:12 TAX
    case 0xC4985D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4984B.asm:13 LDA __BSS_START__,X
    case 0xC4985E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4984B.asm:14 EOR #$FFFF
    case 0xC49861: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4984B.asm:14 EOR #$FFFF
    // Overlapping static entry reached from 0xC49861.
    case 0xC49863: cpu.execute_instruction<0xFF>(0x00009D, 4); return true;
    // src/unknown/C4/C4984B.asm:15 STA __BSS_START__,X
    case 0xC49864: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4984B.asm:16 DEY
    case 0xC49867: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C4/C4984B.asm:17 LDA @LOCAL00
    case 0xC49868: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4984B.asm:18 INC
    case 0xC4986A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4984B.asm:19 INC
    case 0xC4986B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4984B.asm:20 STA @LOCAL00
    case 0xC4986C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4984B.asm:22 CPY #0
    case 0xC4986E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C4/C4984B.asm:22 CPY #0
    // Overlapping static entry reached from 0xC4986E.
    case 0xC49870: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4984B.asm:23 BNE @UNKNOWN0
    case 0xC49871: cpu.execute_instruction<0xD0>(0x0000EA, 2); return true;
    // src/unknown/C4/C4984B.asm:23 BNE @UNKNOWN0
    // Overlapping static entry reached from 0xC498CA.
    case 0xC49872: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4984B.asm:24 END_C_FUNCTION
    case 0xC49873: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4984B.asm:24 END_C_FUNCTION
    case 0xC49874: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49875.asm (unresolved).
bool execute_unresolved_c4_c49875_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49875.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC49875: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C49875.asm:15 END_STACK_VARS
    case 0xC49877: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C49875.asm:15 END_STACK_VARS
    case 0xC49878: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C49875.asm:15 END_STACK_VARS
    case 0xC49879: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49875.asm:15 END_STACK_VARS
    case 0xC4987A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49875.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC4987A.
    case 0xC4987C: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C49875.asm:15 END_STACK_VARS
    case 0xC4987D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C49875.asm:15 END_STACK_VARS
    case 0xC4987E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C49875.asm:16 STY @LOCAL05
    case 0xC4987F: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C4/C49875.asm:16 STY @LOCAL05
    // Overlapping static entry reached from 0xC4987C.
    case 0xC49880: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49875.asm:17 STA @LOCAL04
    case 0xC49881: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C49875.asm:18 MOVE_INT @PARAM03, @VIRTUAL0A
    case 0xC49883: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C49875.asm:18 MOVE_INT @PARAM03, @VIRTUAL0A
    case 0xC49885: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C49875.asm:18 MOVE_INT @PARAM03, @VIRTUAL0A
    case 0xC49887: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C49875.asm:18 MOVE_INT @PARAM03, @VIRTUAL0A
    case 0xC49889: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C49875.asm:19 LDY #8
    case 0xC4988B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C49875.asm:19 LDY #8
    // Overlapping static entry reached from 0xC4988B.
    case 0xC4988D: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C4/C49875.asm:20 LDA FLYOVER_PIXEL_OFFSET
    case 0xC4988E: cpu.execute_instruction<0xAD>(0x009F2F, 3); return true;
    // src/unknown/C4/C49875.asm:21 JSL MODULUS16
    case 0xC49891: cpu.execute_instruction<0x22>(0xC09231, 4); return true;
    // src/unknown/C4/C49875.asm:22 STA @LOCAL03
    case 0xC49895: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C49875.asm:23 LDA FLYOVER_BYTE_OFFSET
    case 0xC49897: cpu.execute_instruction<0xAD>(0x009F31, 3); return true;
    // src/unknown/C4/C49875.asm:24 CLC
    case 0xC4989A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49875.asm:25 ADC @LOCAL05
    case 0xC4989B: cpu.execute_instruction<0x65>(0x000018, 2); return true;
    // src/unknown/C4/C49875.asm:26 STA @VIRTUAL02
    case 0xC4989D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C49875.asm:27 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4989F: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C49875.asm:27 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC498A1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C49875.asm:27 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC498A3: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C49875.asm:27 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC498A5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C49875.asm:28 LDA @VIRTUAL02
    case 0xC498A7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C49875.asm:29 STA @LOCAL02
    case 0xC498A9: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C49875.asm:30 LDA #0
    case 0xC498AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C49875.asm:30 LDA #0
    // Overlapping static entry reached from 0xC498AB.
    case 0xC498AD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C49875.asm:31 STA @VIRTUAL04
    case 0xC498AE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C49875.asm:32 BRA @UNKNOWN3
    case 0xC498B0: cpu.execute_instruction<0x80>(0x000047, 2); return true;
    // src/unknown/C4/C49875.asm:34 LDY #0
    case 0xC498B2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C49875.asm:34 LDY #0
    // Overlapping static entry reached from 0xC498B2.
    case 0xC498B4: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C49875.asm:35 STY @LOCAL01
    case 0xC498B5: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C49875.asm:36 BRA @UNKNOWN2
    case 0xC498B7: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/unknown/C4/C49875.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC498B9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C49875.asm:39 LDA [@VIRTUAL06]
    case 0xC498BB: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C49875.asm:40 EOR #$00FF
    case 0xC498BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00A4FF, 3); return true;
    // src/unknown/C4/C49875.asm:41 LDY @LOCAL03
    case 0xC498BF: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C4/C49875.asm:41 LDY @LOCAL03
    // Overlapping static entry reached from 0xC498BD.
    case 0xC498C0: cpu.execute_instruction<0x14>(0x0000E2, 2); return true;
    // src/unknown/C4/C49875.asm:42 SEP #PROC_FLAGS::INDEX8
    case 0xC498C1: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C49875.asm:42 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC498C0.
    case 0xC498C2: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/unknown/C4/C49875.asm:43 JSL ASR8_UNKNOWN1
    case 0xC498C3: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/unknown/C4/C49875.asm:43 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC498C2.
    case 0xC498C4: cpu.execute_instruction<0x51>(0x000092, 2); return true;
    // src/unknown/C4/C49875.asm:43 JSL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC498C4.
    case 0xC498C6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000049, 2); else cpu.execute_instruction<0xC0>(0x00FF49, 3); return true;
    // src/unknown/C4/C49875.asm:44 EOR #$00FF
    case 0xC498C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00C2FF, 3); return true;
    // src/unknown/C4/C49875.asm:44 EOR #$00FF
    // Overlapping static entry reached from 0xC498C6.
    case 0xC498C8: cpu.execute_instruction<0xFF>(0xA610C2, 4); return true;
    // src/unknown/C4/C49875.asm:45 REP #PROC_FLAGS::INDEX8
    case 0xC498C9: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C49875.asm:45 REP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC498C7.
    case 0xC498CA: cpu.execute_instruction<0x10>(0x0000A6, 2); return true;
    // src/unknown/C4/C49875.asm:46 LDX @VIRTUAL02
    case 0xC498CB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C49875.asm:46 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC498CA.
    case 0xC498CC: cpu.execute_instruction<0x02>(0x0000E8, 2); return true;
    // src/unknown/C4/C49875.asm:47 INX
    case 0xC498CD: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C49875.asm:48 STA @VIRTUAL00
    case 0xC498CE: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C49875.asm:49 LDA __BSS_START__,X
    case 0xC498D0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C49875.asm:50 AND @VIRTUAL00
    case 0xC498D3: cpu.execute_instruction<0x25>(0x000000, 2); return true;
    // src/unknown/C4/C49875.asm:51 STA __BSS_START__,X
    case 0xC498D5: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C49875.asm:52 LDX @VIRTUAL02
    case 0xC498D8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C49875.asm:53 STA __BSS_START__,X
    case 0xC498DA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C49875.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0xC498DD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C49875.asm:55 INC @VIRTUAL02
    case 0xC498DF: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C49875.asm:56 INC @VIRTUAL02
    case 0xC498E1: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C49875.asm:57 LDY @LOCAL01
    case 0xC498E3: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C49875.asm:58 INY
    case 0xC498E5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C49875.asm:59 STY @LOCAL01
    case 0xC498E6: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C49875.asm:60 INC @VIRTUAL06
    case 0xC498E8: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C49875.asm:62 CPY #8
    case 0xC498EA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000008, 2); else cpu.execute_instruction<0xC0>(0x000008, 3); return true;
    // src/unknown/C4/C49875.asm:62 CPY #8
    // Overlapping static entry reached from 0xC498EA.
    case 0xC498EC: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C49875.asm:63 BCC @UNKNOWN1
    case 0xC498ED: cpu.execute_instruction<0x90>(0x0000CA, 2); return true;
    // src/unknown/C4/C49875.asm:64 LDA @LOCAL02
    case 0xC498EF: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C49875.asm:65 CLC
    case 0xC498F1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49875.asm:66 ADC #416
    case 0xC498F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A0, 2); else cpu.execute_instruction<0x69>(0x0001A0, 3); return true;
    // src/unknown/C4/C49875.asm:66 ADC #416
    // Overlapping static entry reached from 0xC498F2.
    case 0xC498F4: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/unknown/C4/C49875.asm:67 STA @VIRTUAL02
    case 0xC498F5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C49875.asm:67 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC498F4.
    case 0xC498F6: cpu.execute_instruction<0x02>(0x0000E6, 2); return true;
    // src/unknown/C4/C49875.asm:68 INC @VIRTUAL04
    case 0xC498F7: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C49875.asm:70 LDA #2
    case 0xC498F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C4/C49875.asm:70 LDA #2
    // Overlapping static entry reached from 0xC498F9.
    case 0xC498FB: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C49875.asm:71 CLC
    case 0xC498FC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49875.asm:72 SBC @VIRTUAL04
    case 0xC498FD: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C4/C49875.asm:73 BRANCHGTS @UNKNOWN0
    case 0xC498FF: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C4/C49875.asm:73 BRANCHGTS @UNKNOWN0
    case 0xC49901: cpu.execute_instruction<0x10>(0x0000AF, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C4/C49875.asm:73 BRANCHGTS @UNKNOWN0
    case 0xC49903: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C4/C49875.asm:73 BRANCHGTS @UNKNOWN0
    // Overlapping static entry reached from 0xC4995C.
    case 0xC49904: cpu.execute_instruction<0x02>(0x000030, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C4/C49875.asm:73 BRANCHGTS @UNKNOWN0
    case 0xC49905: cpu.execute_instruction<0x30>(0x0000AB, 2); return true;
    // src/unknown/C4/C49875.asm:74 LDA FLYOVER_PIXEL_OFFSET
    case 0xC49907: cpu.execute_instruction<0xAD>(0x009F2F, 3); return true;
    // src/unknown/C4/C49875.asm:75 CLC
    case 0xC4990A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49875.asm:76 ADC @LOCAL04
    case 0xC4990B: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/unknown/C4/C49875.asm:77 STA FLYOVER_PIXEL_OFFSET
    case 0xC4990D: cpu.execute_instruction<0x8D>(0x009F2F, 3); return true;
    // src/unknown/C4/C49875.asm:78 LSR
    case 0xC49910: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49875.asm:79 LSR
    case 0xC49911: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49875.asm:80 LSR
    case 0xC49912: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49875.asm:81 CMP FLYOVER_BYTE_OFFSET
    case 0xC49913: cpu.execute_instruction<0xCD>(0x009F31, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C49875.asm:82 BEQL @UNKNOWN12
    case 0xC49916: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C49875.asm:82 BEQL @UNKNOWN12
    case 0xC49918: cpu.execute_instruction<0x4C>(0x009999, 3); return true;
    // src/unknown/C4/C49875.asm:83 ASL
    case 0xC4991B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49875.asm:84 ASL
    case 0xC4991C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49875.asm:85 ASL
    case 0xC4991D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49875.asm:86 ASL
    case 0xC4991E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49875.asm:87 STA @LOCAL04
    case 0xC4991F: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C49875.asm:88 STA FLYOVER_BYTE_OFFSET
    case 0xC49921: cpu.execute_instruction<0x8D>(0x009F31, 3); return true;
    // src/unknown/C4/C49875.asm:89 LDA #8
    case 0xC49924: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C4/C49875.asm:89 LDA #8
    // Overlapping static entry reached from 0xC49924.
    case 0xC49926: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C49875.asm:90 SEC
    case 0xC49927: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C49875.asm:91 SBC @LOCAL03
    case 0xC49928: cpu.execute_instruction<0xE5>(0x000014, 2); return true;
    // src/unknown/C4/C49875.asm:92 STA @LOCAL02
    case 0xC4992A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C49875.asm:93 LDA @LOCAL04
    case 0xC4992C: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C49875.asm:94 CLC
    case 0xC4992E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49875.asm:95 ADC @LOCAL05
    case 0xC4992F: cpu.execute_instruction<0x65>(0x000018, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C49875.asm:96 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC49931: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C49875.asm:96 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC49933: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C49875.asm:96 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC49935: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C49875.asm:96 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC49937: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C49875.asm:97 STA @LOCAL03
    case 0xC49939: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C49875.asm:98 STA @VIRTUAL02
    case 0xC4993B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C49875.asm:99 LDA #0
    case 0xC4993D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C49875.asm:99 LDA #0
    // Overlapping static entry reached from 0xC4993D.
    case 0xC4993F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C49875.asm:100 STA @VIRTUAL04
    case 0xC49940: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C49875.asm:101 BRA @UNKNOWN10
    case 0xC49942: cpu.execute_instruction<0x80>(0x000047, 2); return true;
    // src/unknown/C4/C49875.asm:103 LDY #0
    case 0xC49944: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C49875.asm:103 LDY #0
    // Overlapping static entry reached from 0xC49944.
    case 0xC49946: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C49875.asm:104 STY @LOCAL00
    case 0xC49947: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C49875.asm:105 BRA @UNKNOWN9
    case 0xC49949: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/unknown/C4/C49875.asm:107 SEP #PROC_FLAGS::ACCUM8
    case 0xC4994B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C49875.asm:108 LDA [@VIRTUAL06]
    case 0xC4994D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C49875.asm:109 EOR #$00FF
    case 0xC4994F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00A4FF, 3); return true;
    // src/unknown/C4/C49875.asm:110 LDY @LOCAL02
    case 0xC49951: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C4/C49875.asm:110 LDY @LOCAL02
    // Overlapping static entry reached from 0xC4994F.
    case 0xC49952: cpu.execute_instruction<0x12>(0x0000E2, 2); return true;
    // src/unknown/C4/C49875.asm:111 SEP #PROC_FLAGS::INDEX8
    case 0xC49953: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C49875.asm:111 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC49952.
    case 0xC49954: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/unknown/C4/C49875.asm:112 JSL ASL16_ENTRY2
    case 0xC49955: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/unknown/C4/C49875.asm:112 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC49954.
    case 0xC49956: cpu.execute_instruction<0x3E>(0x00C092, 3); return true;
    // src/unknown/C4/C49875.asm:113 EOR #$00FF
    case 0xC49959: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00C2FF, 3); return true;
    // src/unknown/C4/C49875.asm:114 REP #PROC_FLAGS::INDEX8
    case 0xC4995B: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C49875.asm:114 REP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC49959.
    case 0xC4995C: cpu.execute_instruction<0x10>(0x0000A6, 2); return true;
    // src/unknown/C4/C49875.asm:115 LDX @VIRTUAL02
    case 0xC4995D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C49875.asm:115 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC4995C.
    case 0xC4995E: cpu.execute_instruction<0x02>(0x0000E8, 2); return true;
    // src/unknown/C4/C49875.asm:116 INX
    case 0xC4995F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C49875.asm:117 STA @VIRTUAL00
    case 0xC49960: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C49875.asm:118 LDA __BSS_START__,X
    case 0xC49962: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C49875.asm:119 AND @VIRTUAL00
    case 0xC49965: cpu.execute_instruction<0x25>(0x000000, 2); return true;
    // src/unknown/C4/C49875.asm:120 STA __BSS_START__,X
    case 0xC49967: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C49875.asm:121 LDX @VIRTUAL02
    case 0xC4996A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C49875.asm:122 STA __BSS_START__,X
    case 0xC4996C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C49875.asm:123 REP #PROC_FLAGS::ACCUM8
    case 0xC4996F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C49875.asm:124 INC @VIRTUAL02
    case 0xC49971: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C49875.asm:125 INC @VIRTUAL02
    case 0xC49973: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C49875.asm:126 LDY @LOCAL00
    case 0xC49975: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C49875.asm:127 INY
    case 0xC49977: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C49875.asm:128 STY @LOCAL00
    case 0xC49978: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C49875.asm:129 INC @VIRTUAL06
    case 0xC4997A: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C49875.asm:131 CPY #8
    case 0xC4997C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000008, 2); else cpu.execute_instruction<0xC0>(0x000008, 3); return true;
    // src/unknown/C4/C49875.asm:131 CPY #8
    // Overlapping static entry reached from 0xC4997C.
    case 0xC4997E: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C49875.asm:132 BCC @UNKNOWN8
    case 0xC4997F: cpu.execute_instruction<0x90>(0x0000CA, 2); return true;
    // src/unknown/C4/C49875.asm:133 LDA @LOCAL03
    case 0xC49981: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C49875.asm:134 CLC
    case 0xC49983: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49875.asm:135 ADC #416
    case 0xC49984: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A0, 2); else cpu.execute_instruction<0x69>(0x0001A0, 3); return true;
    // src/unknown/C4/C49875.asm:135 ADC #416
    // Overlapping static entry reached from 0xC49984.
    case 0xC49986: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/unknown/C4/C49875.asm:136 STA @VIRTUAL02
    case 0xC49987: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C49875.asm:136 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC49986.
    case 0xC49988: cpu.execute_instruction<0x02>(0x0000E6, 2); return true;
    // src/unknown/C4/C49875.asm:137 INC @VIRTUAL04
    case 0xC49989: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C49875.asm:139 LDA #2
    case 0xC4998B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C4/C49875.asm:139 LDA #2
    // Overlapping static entry reached from 0xC4998B.
    case 0xC4998D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C49875.asm:140 CLC
    case 0xC4998E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49875.asm:141 SBC @VIRTUAL04
    case 0xC4998F: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C4/C49875.asm:142 BRANCHGTS @UNKNOWN7
    case 0xC49991: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C4/C49875.asm:142 BRANCHGTS @UNKNOWN7
    case 0xC49993: cpu.execute_instruction<0x10>(0x0000AF, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C4/C49875.asm:142 BRANCHGTS @UNKNOWN7
    case 0xC49995: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C4/C49875.asm:142 BRANCHGTS @UNKNOWN7
    case 0xC49997: cpu.execute_instruction<0x30>(0x0000AB, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C49875.asm:144 END_C_FUNCTION
    case 0xC49999: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C49875.asm:144 END_C_FUNCTION
    case 0xC4999A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4999B.asm (unresolved).
bool execute_unresolved_c4_c4999b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4999B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4999B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4999B.asm:8 END_STACK_VARS
    case 0xC4999D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4999B.asm:8 END_STACK_VARS
    case 0xC4999E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4999B.asm:8 END_STACK_VARS
    case 0xC4999F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4999B.asm:8 END_STACK_VARS
    case 0xC499A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4999B.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC499A0.
    case 0xC499A2: cpu.execute_instruction<0xFF>(0x38685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4999B.asm:8 END_STACK_VARS
    case 0xC499A3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4999B.asm:8 END_STACK_VARS
    case 0xC499A4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4999B.asm:9 SEC
    case 0xC499A5: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4999B.asm:10 SBC #$50
    case 0xC499A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000050, 2); else cpu.execute_instruction<0xE9>(0x000050, 3); return true;
    // src/unknown/C4/C4999B.asm:10 SBC #$50
    // Overlapping static entry reached from 0xC499A6.
    case 0xC499A8: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C4/C4999B.asm:11 AND #$007F
    case 0xC499A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/unknown/C4/C4999B.asm:11 AND #$007F
    // Overlapping static entry reached from 0xC499A9.
    case 0xC499AB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4999B.asm:12 STA @LOCAL01
    case 0xC499AC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4999B.asm:13 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC499AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000054, 2); else cpu.execute_instruction<0xA9>(0x00F054, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4999B.asm:13 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC499AE.
    case 0xC499B0: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4999B.asm:13 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC499B1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4999B.asm:13 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC499B0.
    case 0xC499B2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4999B.asm:13 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC499B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4999B.asm:13 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC499B3.
    case 0xC499B5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4999B.asm:13 LOADPTR FONT_PTR_TABLE, @VIRTUAL0A
    case 0xC499B6: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4999B.asm:14 LDY #.SIZEOF(font_table_entry) * FONT::LARGE + font_table_entry::height
    case 0xC499B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000038, 2); else cpu.execute_instruction<0xA0>(0x000038, 3); return true;
    // src/unknown/C4/C4999B.asm:14 LDY #.SIZEOF(font_table_entry) * FONT::LARGE + font_table_entry::height
    // Overlapping static entry reached from 0xC499B8.
    case 0xC499BA: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4999B.asm:15 LDA [@VIRTUAL0A],Y
    case 0xC499BB: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4999B.asm:16 TAX
    case 0xC499BD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4999B.asm:17 LDY #.SIZEOF(font_table_entry) * FONT::LARGE + font_table_entry::graphics
    case 0xC499BE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000034, 2); else cpu.execute_instruction<0xA0>(0x000034, 3); return true;
    // src/unknown/C4/C4999B.asm:17 LDY #.SIZEOF(font_table_entry) * FONT::LARGE + font_table_entry::graphics
    // Overlapping static entry reached from 0xC499BE.
    case 0xC499C0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4999B.asm:18 LDA [@VIRTUAL0A],Y
    case 0xC499C1: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4999B.asm:19 PHA
    case 0xC499C3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C4999B.asm:20 INY
    case 0xC499C4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4999B.asm:21 INY
    case 0xC499C5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4999B.asm:22 LDA [@VIRTUAL0A],Y
    case 0xC499C6: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4999B.asm:23 STA @VIRTUAL06+2
    case 0xC499C8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4999B.asm:24 PLA
    case 0xC499CA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4999B.asm:25 STA @VIRTUAL06
    case 0xC499CB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4999B.asm:26 LDA @LOCAL01
    case 0xC499CD: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4999B.asm:27 TAY
    case 0xC499CF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4999B.asm:28 TXA
    case 0xC499D0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4999B.asm:29 JSL MULT16
    case 0xC499D1: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C4999B.asm:30 CLC
    case 0xC499D5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4999B.asm:31 ADC @VIRTUAL06
    case 0xC499D6: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4999B.asm:32 STA @VIRTUAL06
    case 0xC499D8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4999B.asm:33 LDY #.SIZEOF(font_table_entry) * FONT::LARGE + font_table_entry::width
    case 0xC499DA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003A, 2); else cpu.execute_instruction<0xA0>(0x00003A, 3); return true;
    // src/unknown/C4/C4999B.asm:33 LDY #.SIZEOF(font_table_entry) * FONT::LARGE + font_table_entry::width
    // Overlapping static entry reached from 0xC499DA.
    case 0xC499DC: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4999B.asm:34 LDA [@VIRTUAL0A],Y
    case 0xC499DD: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4999B.asm:35 STA @VIRTUAL04
    case 0xC499DF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4999B.asm:36 LDY #.SIZEOF(font_table_entry) * FONT::LARGE + font_table_entry::data
    case 0xC499E1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000030, 2); else cpu.execute_instruction<0xA0>(0x000030, 3); return true;
    // src/unknown/C4/C4999B.asm:36 LDY #.SIZEOF(font_table_entry) * FONT::LARGE + font_table_entry::data
    // Overlapping static entry reached from 0xC499E1.
    case 0xC499E3: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4999B.asm:37 LDA [@VIRTUAL0A],Y
    case 0xC499E4: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4999B.asm:38 PHA
    case 0xC499E6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C4999B.asm:39 INY
    case 0xC499E7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4999B.asm:40 INY
    case 0xC499E8: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4999B.asm:41 LDA [@VIRTUAL0A],Y
    case 0xC499E9: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4999B.asm:42 STA @VIRTUAL0A+2
    case 0xC499EB: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4999B.asm:43 PLA
    case 0xC499ED: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4999B.asm:44 STA @VIRTUAL0A
    case 0xC499EE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4999B.asm:45 LDA @LOCAL01
    case 0xC499F0: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4999B.asm:46 CLC
    case 0xC499F2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4999B.asm:47 ADC @VIRTUAL0A
    case 0xC499F3: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4999B.asm:48 STA @VIRTUAL0A
    case 0xC499F5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4999B.asm:49 LDA [@VIRTUAL0A]
    case 0xC499F7: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4999B.asm:50 AND #$00FF
    case 0xC499F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4999B.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC499F9.
    case 0xC499FB: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4999B.asm:51 TAX
    case 0xC499FC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4999B.asm:52 STX @VIRTUAL02
    case 0xC499FD: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4999B.asm:53 INC @VIRTUAL02
    case 0xC499FF: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C4999B.asm:54 LDA @VIRTUAL02
    case 0xC49A01: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4999B.asm:55 CMP #8
    case 0xC49A03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C4/C4999B.asm:55 CMP #8
    // Overlapping static entry reached from 0xC49A03.
    case 0xC49A05: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C4999B.asm:56 BLTEQ @UNKNOWN1
    case 0xC49A06: cpu.execute_instruction<0x90>(0x00002E, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C4999B.asm:56 BLTEQ @UNKNOWN1
    case 0xC49A08: cpu.execute_instruction<0xF0>(0x00002C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4999B.asm:58 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49A0A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4999B.asm:58 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49A0C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4999B.asm:58 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49A0E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4999B.asm:58 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49A10: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4999B.asm:59 LDY #.LOWORD(VWF_BUFFER)
    case 0xC49A12: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000092, 2); else cpu.execute_instruction<0xA0>(0x003492, 3); return true;
    // src/unknown/C4/C4999B.asm:59 LDY #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC49A12.
    case 0xC49A14: cpu.execute_instruction<0x34>(0x0000A6, 2); return true;
    // src/unknown/C4/C4999B.asm:60 LDX @VIRTUAL04
    case 0xC49A15: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4999B.asm:60 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC49A14.
    case 0xC49A16: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/unknown/C4/C4999B.asm:61 LDA #8
    case 0xC49A17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C4/C4999B.asm:61 LDA #8
    // Overlapping static entry reached from 0xC49A16.
    case 0xC49A18: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C4999B.asm:61 LDA #8
    // Overlapping static entry reached from 0xC49A17.
    case 0xC49A19: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4999B.asm:62 JSL UNKNOWN_C49875
    case 0xC49A1A: cpu.execute_instruction<0x22>(0xC49875, 4); return true;
    // src/unknown/C4/C4999B.asm:63 LDA @VIRTUAL02
    case 0xC49A1E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4999B.asm:64 SEC
    case 0xC49A20: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4999B.asm:65 SBC #8
    case 0xC49A21: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/unknown/C4/C4999B.asm:65 SBC #8
    // Overlapping static entry reached from 0xC49A21.
    case 0xC49A23: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4999B.asm:66 STA @VIRTUAL02
    case 0xC49A24: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4999B.asm:67 LDA @VIRTUAL04
    case 0xC49A26: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4999B.asm:68 CLC
    case 0xC49A28: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4999B.asm:69 ADC @VIRTUAL06
    case 0xC49A29: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4999B.asm:70 STA @VIRTUAL06
    case 0xC49A2B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4999B.asm:71 LDA @VIRTUAL02
    case 0xC49A2D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4999B.asm:72 CMP #8
    case 0xC49A2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C4/C4999B.asm:72 CMP #8
    // Overlapping static entry reached from 0xC49A2F.
    case 0xC49A31: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C4/C4999B.asm:73 BGT @UNKNOWN0
    case 0xC49A32: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C4/C4999B.asm:73 BGT @UNKNOWN0
    case 0xC49A34: cpu.execute_instruction<0xB0>(0x0000D4, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4999B.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49A36: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4999B.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49A38: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4999B.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49A3A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4999B.asm:75 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49A3C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4999B.asm:76 LDY #.LOWORD(VWF_BUFFER)
    case 0xC49A3E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000092, 2); else cpu.execute_instruction<0xA0>(0x003492, 3); return true;
    // src/unknown/C4/C4999B.asm:76 LDY #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC49A3E.
    case 0xC49A40: cpu.execute_instruction<0x34>(0x0000A6, 2); return true;
    // src/unknown/C4/C4999B.asm:77 LDX @VIRTUAL04
    case 0xC49A41: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4999B.asm:77 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC49A40.
    case 0xC49A42: cpu.execute_instruction<0x04>(0x0000A5, 2); return true;
    // src/unknown/C4/C4999B.asm:78 LDA @VIRTUAL02
    case 0xC49A43: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4999B.asm:78 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC49A42.
    case 0xC49A44: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C4999B.asm:79 JSL UNKNOWN_C49875
    case 0xC49A45: cpu.execute_instruction<0x22>(0xC49875, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4999B.asm:80 END_C_FUNCTION
    case 0xC49A49: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4999B.asm:80 END_C_FUNCTION
    case 0xC49A4A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49A4B.asm (unresolved).
bool execute_unresolved_c4_c49a4b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49A4B.asm:3 BEGIN_C_FUNCTION
    case 0xC49A4B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C49A4B.asm:5 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC49A4D: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C4/C49A4B.asm:6 JSL UNKNOWN_C2DB3F
    case 0xC49A51: cpu.execute_instruction<0x22>(0xC2DB3F, 4); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C49A4B.asm:7 END_C_FUNCTION
    case 0xC49A55: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49A56.asm (unresolved).
bool execute_unresolved_c4_c49a56_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49A56.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC49A56: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C49A56.asm:8 END_STACK_VARS
    case 0xC49A58: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C49A56.asm:8 END_STACK_VARS
    case 0xC49A59: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49A56.asm:8 END_STACK_VARS
    case 0xC49A5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49A56.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC49A5A.
    case 0xC49A5C: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C49A56.asm:8 END_STACK_VARS
    case 0xC49A5D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C49A56.asm:9 LOADPTR BUFFER, @VIRTUAL06
    case 0xC49A5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C49A56.asm:9 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC49A5E.
    case 0xC49A60: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C49A56.asm:9 LOADPTR BUFFER, @VIRTUAL06
    case 0xC49A61: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C49A56.asm:9 LOADPTR BUFFER, @VIRTUAL06
    case 0xC49A63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C49A56.asm:9 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC49A63.
    case 0xC49A65: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C49A56.asm:9 LOADPTR BUFFER, @VIRTUAL06
    case 0xC49A66: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C49A56.asm:10 JSL UNKNOWN_C08726
    case 0xC49A68: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/unknown/C4/C49A56.asm:11 LDY #VRAM::TEXT_LAYER_TILES
    case 0xC49A6C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // src/unknown/C4/C49A56.asm:11 LDY #VRAM::TEXT_LAYER_TILES
    // Overlapping static entry reached from 0xC49A6C.
    case 0xC49A6E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:12 LDX #VRAM::TEXT_LAYER_TILEMAP
    case 0xC49A6F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007C00, 3); return true;
    // src/unknown/C4/C49A56.asm:12 LDX #VRAM::TEXT_LAYER_TILEMAP
    // Overlapping static entry reached from 0xC49A6F.
    case 0xC49A71: cpu.execute_instruction<0x7C>(0x0000A9, 3); return true;
    // src/unknown/C4/C49A56.asm:13 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC49A72: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C49A56.asm:13 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC49A72.
    case 0xC49A74: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49A56.asm:14 JSL SET_BG3_VRAM_LOCATION
    case 0xC49A75: cpu.execute_instruction<0x22>(0xC08E1C, 4); return true;
    // src/unknown/C4/C49A56.asm:15 LDA #0
    case 0xC49A79: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C49A56.asm:15 LDA #0
    // Overlapping static entry reached from 0xC49A79.
    case 0xC49A7B: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/unknown/C4/C49A56.asm:16 STA [@VIRTUAL06]
    case 0xC49A7C: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C49A56.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    case 0xC49A7E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C49A56.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    case 0xC49A80: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C49A56.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    case 0xC49A82: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C49A56.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    case 0xC49A84: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C49A56.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    case 0xC49A86: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C49A56.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    // Overlapping static entry reached from 0xC49A86.
    case 0xC49A88: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C49A56.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    case 0xC49A89: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C49A56.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    // Overlapping static entry reached from 0xC49A89.
    case 0xC49A8B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C49A56.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    case 0xC49A8C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C4/C49A56.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    case 0xC49A8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C49A56.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    case 0xC49A90: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C49A56.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    // Overlapping static entry reached from 0xC49A8E.
    case 0xC49A91: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C49A56.asm:17 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 3
    // Overlapping static entry reached from 0xC49A91.
    case 0xC49A93: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0088A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C49A56.asm:19 LOADPTR MOVEMENT_TEXT_STRING_PALETTE, @LOCAL00
    case 0xC49A94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000088, 2); else cpu.execute_instruction<0xA9>(0x002188, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C49A56.asm:19 LOADPTR MOVEMENT_TEXT_STRING_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC49A93.
    case 0xC49A95: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C49A56.asm:19 LOADPTR MOVEMENT_TEXT_STRING_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC49A94.
    case 0xC49A96: cpu.execute_instruction<0x21>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C49A56.asm:19 LOADPTR MOVEMENT_TEXT_STRING_PALETTE, @LOCAL00
    case 0xC49A97: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C49A56.asm:19 LOADPTR MOVEMENT_TEXT_STRING_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC49A96.
    case 0xC49A98: cpu.execute_instruction<0x0E>(0x00E0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C49A56.asm:19 LOADPTR MOVEMENT_TEXT_STRING_PALETTE, @LOCAL00
    case 0xC49A99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C49A56.asm:19 LOADPTR MOVEMENT_TEXT_STRING_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC49A99.
    case 0xC49A9B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C49A56.asm:19 LOADPTR MOVEMENT_TEXT_STRING_PALETTE, @LOCAL00
    case 0xC49A9C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C49A56.asm:20 LDX #8
    case 0xC49A9E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C4/C49A56.asm:20 LDX #8
    // Overlapping static entry reached from 0xC49A9E.
    case 0xC49AA0: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C49A56.asm:21 LDA #.LOWORD(PALETTES)
    case 0xC49AA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C4/C49A56.asm:21 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC49AA1.
    case 0xC49AA3: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C49A56.asm:22 JSL MEMCPY16
    case 0xC49AA4: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C4/C49A56.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC49AA8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C49A56.asm:24 LDA #PALETTE_UPLOAD::FULL
    case 0xC49AAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C4/C49A56.asm:25 STA PALETTE_UPLOAD_MODE
    case 0xC49AAC: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C4/C49A56.asm:25 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC49AAA.
    case 0xC49AAD: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C4/C49A56.asm:26 LDA #<-1
    case 0xC49AAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/unknown/C4/C49A56.asm:27 STA @LOCAL00
    case 0xC49AB1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C49A56.asm:27 STA @LOCAL00
    // Overlapping static entry reached from 0xC49AAF.
    case 0xC49AB2: cpu.execute_instruction<0x0E>(0x0080A2, 3); return true;
    // src/unknown/C4/C49A56.asm:28 LDX #32 * 52
    case 0xC49AB3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x000680, 3); return true;
    // src/unknown/C4/C49A56.asm:28 LDX #32 * 52
    // Overlapping static entry reached from 0xC49AB3.
    case 0xC49AB5: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C49A56.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC49AB6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C49A56.asm:29 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC49AB5.
    case 0xC49AB7: cpu.execute_instruction<0x20>(0x0092A9, 3); return true;
    // src/unknown/C4/C49A56.asm:30 LDA #.LOWORD(VWF_BUFFER)
    case 0xC49AB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000092, 2); else cpu.execute_instruction<0xA9>(0x003492, 3); return true;
    // src/unknown/C4/C49A56.asm:30 LDA #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC49AB8.
    case 0xC49ABA: cpu.execute_instruction<0x34>(0x000022, 2); return true;
    // src/unknown/C4/C49A56.asm:31 JSL MEMSET16
    case 0xC49ABB: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C4/C49A56.asm:31 JSL MEMSET16
    // Overlapping static entry reached from 0xC49ABA.
    case 0xC49ABC: cpu.execute_instruction<0xFC>(0x00C08E, 3); return true;
    // src/unknown/C4/C49A56.asm:32 LDY #16
    case 0xC49ABF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x000010, 3); return true;
    // src/unknown/C4/C49A56.asm:32 LDY #16
    // Overlapping static entry reached from 0xC49ABF.
    case 0xC49AC1: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C4/C49A56.asm:33 LDX #0
    case 0xC49AC2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C49A56.asm:33 LDX #0
    // Overlapping static entry reached from 0xC49AC2.
    case 0xC49AC4: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C49A56.asm:34 STX @LOCAL02
    case 0xC49AC5: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C4/C49A56.asm:35 BRA @UNKNOWN3
    case 0xC49AC7: cpu.execute_instruction<0x80>(0x000057, 2); return true;
    // src/unknown/C4/C49A56.asm:37 TXA
    case 0xC49AC9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:38 ASL
    case 0xC49ACA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:39 ASL
    case 0xC49ACB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:40 ASL
    case 0xC49ACC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:41 ASL
    case 0xC49ACD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:42 ASL
    case 0xC49ACE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:43 ASL
    case 0xC49ACF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:44 TAX
    case 0xC49AD0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:45 STZ BG2_BUFFER,X
    case 0xC49AD1: cpu.execute_instruction<0x9E>(0x007DFE, 3); return true;
    // src/unknown/C4/C49A56.asm:46 TAX
    case 0xC49AD4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:47 STZ BG2_BUFFER + 2,X
    case 0xC49AD5: cpu.execute_instruction<0x9E>(0x007E00, 3); return true;
    // src/unknown/C4/C49A56.asm:48 TAX
    case 0xC49AD8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:49 STZ BG2_BUFFER + 4,X
    case 0xC49AD9: cpu.execute_instruction<0x9E>(0x007E02, 3); return true;
    // src/unknown/C4/C49A56.asm:50 LDA #3
    case 0xC49ADC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C4/C49A56.asm:50 LDA #3
    // Overlapping static entry reached from 0xC49ADC.
    case 0xC49ADE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C49A56.asm:51 STA @LOCAL01
    case 0xC49ADF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C49A56.asm:52 BRA @UNKNOWN2
    case 0xC49AE1: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/unknown/C4/C49A56.asm:54 ASL
    case 0xC49AE3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:55 STA @VIRTUAL02
    case 0xC49AE4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C49A56.asm:56 LDX @LOCAL02
    case 0xC49AE6: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C4/C49A56.asm:57 TXA
    case 0xC49AE8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:58 ASL
    case 0xC49AE9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:59 ASL
    case 0xC49AEA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:60 ASL
    case 0xC49AEB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:61 ASL
    case 0xC49AEC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:62 ASL
    case 0xC49AED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:63 ASL
    case 0xC49AEE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:64 CLC
    case 0xC49AEF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:65 ADC @VIRTUAL02
    case 0xC49AF0: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C49A56.asm:66 TAX
    case 0xC49AF2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:67 TYA
    case 0xC49AF3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:68 CLC
    case 0xC49AF4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:69 ADC #$2000
    case 0xC49AF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002000, 3); return true;
    // src/unknown/C4/C49A56.asm:69 ADC #$2000
    // Overlapping static entry reached from 0xC49AF5.
    case 0xC49AF7: cpu.execute_instruction<0x20>(0x00FE9D, 3); return true;
    // src/unknown/C4/C49A56.asm:70 STA BG2_BUFFER,X
    case 0xC49AF8: cpu.execute_instruction<0x9D>(0x007DFE, 3); return true;
    // src/unknown/C4/C49A56.asm:70 STA BG2_BUFFER,X
    // Overlapping static entry reached from 0xC49AF7.
    case 0xC49AFA: cpu.execute_instruction<0x7D>(0x00A5C8, 3); return true;
    // src/unknown/C4/C49A56.asm:71 INY
    case 0xC49AFB: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:72 LDA @LOCAL01
    case 0xC49AFC: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C49A56.asm:72 LDA @LOCAL01
    // Overlapping static entry reached from 0xC49AFA.
    case 0xC49AFD: cpu.execute_instruction<0x12>(0x00001A, 2); return true;
    // src/unknown/C4/C49A56.asm:73 INC
    case 0xC49AFE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:74 STA @LOCAL01
    case 0xC49AFF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C49A56.asm:76 CMP #29
    case 0xC49B01: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001D, 2); else cpu.execute_instruction<0xC9>(0x00001D, 3); return true;
    // src/unknown/C4/C49A56.asm:76 CMP #29
    // Overlapping static entry reached from 0xC49B01.
    case 0xC49B03: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C49A56.asm:77 BCC @UNKNOWN1
    case 0xC49B04: cpu.execute_instruction<0x90>(0x0000DD, 2); return true;
    // src/unknown/C4/C49A56.asm:78 LDX @LOCAL02
    case 0xC49B06: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C4/C49A56.asm:79 TXA
    case 0xC49B08: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:80 ASL
    case 0xC49B09: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:81 ASL
    case 0xC49B0A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:82 ASL
    case 0xC49B0B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:83 ASL
    case 0xC49B0C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:84 ASL
    case 0xC49B0D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:85 ASL
    case 0xC49B0E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:86 TAX
    case 0xC49B0F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:87 STZ BG2_BUFFER + 58,X
    case 0xC49B10: cpu.execute_instruction<0x9E>(0x007E38, 3); return true;
    // src/unknown/C4/C49A56.asm:88 TAX
    case 0xC49B13: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:89 STZ BG2_BUFFER + 60,X
    case 0xC49B14: cpu.execute_instruction<0x9E>(0x007E3A, 3); return true;
    // src/unknown/C4/C49A56.asm:90 TAX
    case 0xC49B17: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:91 STZ BG2_BUFFER + 62,X
    case 0xC49B18: cpu.execute_instruction<0x9E>(0x007E3C, 3); return true;
    // src/unknown/C4/C49A56.asm:92 LDX @LOCAL02
    case 0xC49B1B: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C4/C49A56.asm:93 INX
    case 0xC49B1D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:94 STX @LOCAL02
    case 0xC49B1E: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C4/C49A56.asm:96 CPX #32
    case 0xC49B20: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/unknown/C4/C49A56.asm:96 CPX #32
    // Overlapping static entry reached from 0xC49B20.
    case 0xC49B22: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C49A56.asm:97 BCC @UNKNOWN0
    case 0xC49B23: cpu.execute_instruction<0x90>(0x0000A4, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C49A56.asm:98 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC49B25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x007DFE, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C49A56.asm:98 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC49B25.
    case 0xC49B27: cpu.execute_instruction<0x7D>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C49A56.asm:98 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC49B28: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C49A56.asm:98 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC49B2A: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C49A56.asm:98 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC49B2B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C49A56.asm:98 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC49B2D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C49A56.asm:98 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC49B2E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C49A56.asm:98 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC49B30: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C49A56.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC49B32: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C49A56.asm:100 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    case 0xC49B34: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C49A56.asm:100 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    case 0xC49B36: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C49A56.asm:100 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    case 0xC49B38: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C49A56.asm:100 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    case 0xC49B3A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C49A56.asm:100 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    case 0xC49B3C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C49A56.asm:100 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    // Overlapping static entry reached from 0xC49B3C.
    case 0xC49B3E: cpu.execute_instruction<0x7C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C49A56.asm:100 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    case 0xC49B3F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C49A56.asm:100 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    // Overlapping static entry reached from 0xC49B3F.
    case 0xC49B41: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C49A56.asm:100 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    case 0xC49B42: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C4/C49A56.asm:100 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    case 0xC49B44: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C49A56.asm:100 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    case 0xC49B46: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C49A56.asm:100 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    // Overlapping static entry reached from 0xC49B44.
    case 0xC49B47: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C49A56.asm:100 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 0
    // Overlapping static entry reached from 0xC49B47.
    case 0xC49B49: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x001AA9, 3); return true;
    // src/unknown/C4/C49A56.asm:102 LDA #26
    case 0xC49B4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001A, 2); else cpu.execute_instruction<0xA9>(0x00001A, 3); return true;
    // src/unknown/C4/C49A56.asm:102 LDA #26
    // Overlapping static entry reached from 0xC49B49.
    case 0xC49B4B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C49A56.asm:102 LDA #26
    // Overlapping static entry reached from 0xC49B4A.
    case 0xC49B4C: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C49A56.asm:103 STA UNKNOWN_7E3C18
    case 0xC49B4D: cpu.execute_instruction<0x8D>(0x003C18, 3); return true;
    // src/unknown/C4/C49A56.asm:104 STZ UNKNOWN_7E3C1C
    case 0xC49B50: cpu.execute_instruction<0x9C>(0x003C1C, 3); return true;
    // src/unknown/C4/C49A56.asm:105 LDA #.LOWORD(-1)
    case 0xC49B53: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C49A56.asm:105 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC49B53.
    case 0xC49B55: cpu.execute_instruction<0xFF>(0x3C1E8D, 4); return true;
    // src/unknown/C4/C49A56.asm:106 STA UNKNOWN_7E3C1E
    case 0xC49B56: cpu.execute_instruction<0x8D>(0x003C1E, 3); return true;
    // src/unknown/C4/C49A56.asm:107 STZ UNKNOWN_7E3C20
    case 0xC49B59: cpu.execute_instruction<0x9C>(0x003C20, 3); return true;
    // src/unknown/C4/C49A56.asm:108 STZ UNKNOWN_7E3C14
    case 0xC49B5C: cpu.execute_instruction<0x9C>(0x003C14, 3); return true;
    // src/unknown/C4/C49A56.asm:109 STZ UNKNOWN_7E3C16
    case 0xC49B5F: cpu.execute_instruction<0x9C>(0x003C16, 3); return true;
    // src/unknown/C4/C49A56.asm:110 STZ FLYOVER_PIXEL_OFFSET
    case 0xC49B62: cpu.execute_instruction<0x9C>(0x009F2F, 3); return true;
    // src/unknown/C4/C49A56.asm:111 STZ FLYOVER_BYTE_OFFSET
    case 0xC49B65: cpu.execute_instruction<0x9C>(0x009F31, 3); return true;
    // src/unknown/C4/C49A56.asm:112 JSL UNKNOWN_C08744
    case 0xC49B68: cpu.execute_instruction<0x22>(0xC08744, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C49A56.asm:113 END_C_FUNCTION
    case 0xC49B6C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C49A56.asm:113 END_C_FUNCTION
    case 0xC49B6D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49B6E.asm (unresolved).
bool execute_unresolved_c4_c49b6e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49B6E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC49B6E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C49B6E.asm:9 END_STACK_VARS
    case 0xC49B70: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C49B6E.asm:9 END_STACK_VARS
    case 0xC49B71: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C49B6E.asm:9 END_STACK_VARS
    case 0xC49B72: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49B6E.asm:9 END_STACK_VARS
    case 0xC49B73: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49B6E.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC49B73.
    case 0xC49B75: cpu.execute_instruction<0xFF>(0x20685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C49B6E.asm:9 END_STACK_VARS
    case 0xC49B76: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C49B6E.asm:9 END_STACK_VARS
    case 0xC49B77: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E.asm:10 JSR UNKNOWN_C4984B
    case 0xC49B78: cpu.execute_instruction<0x20>(0x00984B, 3); return true;
    // src/unknown/C4/C49B6E.asm:10 JSR UNKNOWN_C4984B
    // Overlapping static entry reached from 0xC49B75.
    case 0xC49B79: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E.asm:10 JSR UNKNOWN_C4984B
    // Overlapping static entry reached from 0xC49B79.
    case 0xC49B7A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E.asm:11 LDY #$01A0
    case 0xC49B7B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000A0, 2); else cpu.execute_instruction<0xA0>(0x0001A0, 3); return true;
    // src/unknown/C4/C49B6E.asm:11 LDY #$01A0
    // Overlapping static entry reached from 0xC49B7B.
    case 0xC49B7D: cpu.execute_instruction<0x01>(0x0000AD, 2); return true;
    // src/unknown/C4/C49B6E.asm:12 LDA FLYOVER_SCREEN_OFFSET
    case 0xC49B7E: cpu.execute_instruction<0xAD>(0x009F2D, 3); return true;
    // src/unknown/C4/C49B6E.asm:12 LDA FLYOVER_SCREEN_OFFSET
    // Overlapping static entry reached from 0xC49B7D.
    case 0xC49B7F: cpu.execute_instruction<0x2D>(0x00229F, 3); return true;
    // src/unknown/C4/C49B6E.asm:13 JSL MULT16
    case 0xC49B81: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C49B6E.asm:13 JSL MULT16
    // Overlapping static entry reached from 0xC49B7F.
    case 0xC49B82: cpu.execute_instruction<0x32>(0x000090, 2); return true;
    // src/unknown/C4/C49B6E.asm:13 JSL MULT16
    // Overlapping static entry reached from 0xC49B82.
    case 0xC49B84: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x001485, 3); return true;
    // src/unknown/C4/C49B6E.asm:14 STA @LOCAL02
    case 0xC49B85: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C49B6E.asm:14 STA @LOCAL02
    // Overlapping static entry reached from 0xC49B84.
    case 0xC49B86: cpu.execute_instruction<0x14>(0x000018, 2); return true;
    // src/unknown/C4/C49B6E.asm:15 CLC
    case 0xC49B87: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E.asm:16 ADC #$04E0
    case 0xC49B88: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x0004E0, 3); return true;
    // src/unknown/C4/C49B6E.asm:16 ADC #$04E0
    // Overlapping static entry reached from 0xC49B88.
    case 0xC49B8A: cpu.execute_instruction<0x04>(0x0000C9, 2); return true;
    // src/unknown/C4/C49B6E.asm:17 CMP #$3400
    case 0xC49B8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x003400, 3); return true;
    // src/unknown/C4/C49B6E.asm:17 CMP #$3400
    // Overlapping static entry reached from 0xC49B8A.
    case 0xC49B8C: cpu.execute_instruction<0x00>(0x000034, 2); return true;
    // src/unknown/C4/C49B6E.asm:17 CMP #$3400
    // Overlapping static entry reached from 0xC49B8B.
    case 0xC49B8D: cpu.execute_instruction<0x34>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C4/C49B6E.asm:18 BGT @UNKNOWN1
    case 0xC49B8E: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C4/C49B6E.asm:18 BGT @UNKNOWN1
    // Overlapping static entry reached from 0xC49B8D.
    case 0xC49B8F: cpu.execute_instruction<0x02>(0x0000B0, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C4/C49B6E.asm:18 BGT @UNKNOWN1
    case 0xC49B90: cpu.execute_instruction<0xB0>(0x000003, 2); return true;
    // src/unknown/C4/C49B6E.asm:19 JMP @UNKNOWN3
    case 0xC49B92: cpu.execute_instruction<0x4C>(0x009C16, 3); return true;
    // src/unknown/C4/C49B6E.asm:21 LDA @LOCAL02
    case 0xC49B95: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C49B6E.asm:22 STA @VIRTUAL02
    case 0xC49B97: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C49B6E.asm:23 LDA #$3400
    case 0xC49B99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x003400, 3); return true;
    // src/unknown/C4/C49B6E.asm:23 LDA #$3400
    // Overlapping static entry reached from 0xC49B99.
    case 0xC49B9B: cpu.execute_instruction<0x34>(0x000038, 2); return true;
    // src/unknown/C4/C49B6E.asm:24 SEC
    case 0xC49B9C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E.asm:25 SBC @VIRTUAL02
    case 0xC49B9D: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C49B6E.asm:26 STA @LOCAL01
    case 0xC49B9F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C49B6E.asm:27 BEQ @UNKNOWN2
    case 0xC49BA1: cpu.execute_instruction<0xF0>(0x000031, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C49B6E.asm:28 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC49BA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000092, 2); else cpu.execute_instruction<0xA9>(0x003492, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C49B6E.asm:28 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC49BA3.
    case 0xC49BA5: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C49B6E.asm:28 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC49BA6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C49B6E.asm:28 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC49BA5.
    case 0xC49BA7: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C49B6E.asm:28 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC49BA8: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C49B6E.asm:28 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC49BA9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C49B6E.asm:28 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC49BAB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C49B6E.asm:28 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC49BAC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C49B6E.asm:28 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC49BAE: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C49B6E.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC49BB0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C49B6E.asm:30 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49BB2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C49B6E.asm:30 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49BB4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C49B6E.asm:30 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49BB6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C49B6E.asm:30 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49BB8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C49B6E.asm:31 LDA FLYOVER_SCREEN_OFFSET
    case 0xC49BBA: cpu.execute_instruction<0xAD>(0x009F2D, 3); return true;
    // src/unknown/C4/C49B6E.asm:32 LDY #208
    case 0xC49BBD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D0, 2); else cpu.execute_instruction<0xA0>(0x0000D0, 3); return true;
    // src/unknown/C4/C49B6E.asm:32 LDY #208
    // Overlapping static entry reached from 0xC49BBD.
    case 0xC49BBF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49B6E.asm:33 JSL MULT168
    case 0xC49BC0: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C49B6E.asm:34 CLC
    case 0xC49BC4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E.asm:35 ADC #VRAM::TEXT_LAYER_TILES + $150
    case 0xC49BC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x006150, 3); return true;
    // src/unknown/C4/C49B6E.asm:35 ADC #VRAM::TEXT_LAYER_TILES + $150
    // Overlapping static entry reached from 0xC49BC5.
    case 0xC49BC7: cpu.execute_instruction<0x61>(0x0000A8, 2); return true;
    // src/unknown/C4/C49B6E.asm:36 TAY
    case 0xC49BC8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E.asm:37 LDA @LOCAL01
    case 0xC49BC9: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C49B6E.asm:38 TAX
    case 0xC49BCB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC49BCC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C49B6E.asm:40 LDA #0
    case 0xC49BCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C4/C49B6E.asm:41 JSL PREPARE_VRAM_COPY
    case 0xC49BD0: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C4/C49B6E.asm:41 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC49BCE.
    case 0xC49BD1: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C4/C49B6E.asm:41 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC49BD1.
    case 0xC49BD3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A0, 2); else cpu.execute_instruction<0xC0>(0x00A0A0, 3); return true;
    // src/unknown/C4/C49B6E.asm:43 LDY #$01A0
    case 0xC49BD4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000A0, 2); else cpu.execute_instruction<0xA0>(0x0001A0, 3); return true;
    // src/unknown/C4/C49B6E.asm:43 LDY #$01A0
    // Overlapping static entry reached from 0xC49BD3.
    case 0xC49BD5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x00AD01, 3); return true;
    // src/unknown/C4/C49B6E.asm:43 LDY #$01A0
    // Overlapping static entry reached from 0xC49BD4.
    case 0xC49BD6: cpu.execute_instruction<0x01>(0x0000AD, 2); return true;
    // src/unknown/C4/C49B6E.asm:44 LDA FLYOVER_SCREEN_OFFSET
    case 0xC49BD7: cpu.execute_instruction<0xAD>(0x009F2D, 3); return true;
    // src/unknown/C4/C49B6E.asm:44 LDA FLYOVER_SCREEN_OFFSET
    // Overlapping static entry reached from 0xC49BD6.
    case 0xC49BD8: cpu.execute_instruction<0x2D>(0x00229F, 3); return true;
    // src/unknown/C4/C49B6E.asm:45 JSL MULT16
    case 0xC49BDA: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C49B6E.asm:45 JSL MULT16
    // Overlapping static entry reached from 0xC49BD8.
    case 0xC49BDB: cpu.execute_instruction<0x32>(0x000090, 2); return true;
    // src/unknown/C4/C49B6E.asm:45 JSL MULT16
    // Overlapping static entry reached from 0xC49BDB.
    case 0xC49BDD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x001485, 3); return true;
    // src/unknown/C4/C49B6E.asm:47 STA @LOCAL02
    case 0xC49BDE: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C49B6E.asm:47 STA @LOCAL02
    // Overlapping static entry reached from 0xC49BDD.
    case 0xC49BDF: cpu.execute_instruction<0x14>(0x000018, 2); return true;
    // src/unknown/C4/C49B6E.asm:48 CLC
    case 0xC49BE0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E.asm:49 ADC #$04E0
    case 0xC49BE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x0004E0, 3); return true;
    // src/unknown/C4/C49B6E.asm:49 ADC #$04E0
    // Overlapping static entry reached from 0xC49BE1.
    case 0xC49BE3: cpu.execute_instruction<0x04>(0x000038, 2); return true;
    // src/unknown/C4/C49B6E.asm:50 SEC
    case 0xC49BE4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E.asm:51 SBC #$3400
    case 0xC49BE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x003400, 3); return true;
    // src/unknown/C4/C49B6E.asm:51 SBC #$3400
    // Overlapping static entry reached from 0xC49BE5.
    case 0xC49BE7: cpu.execute_instruction<0x34>(0x0000AA, 2); return true;
    // src/unknown/C4/C49B6E.asm:52 TAX
    case 0xC49BE8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E.asm:53 BEQ @UNKNOWN4
    case 0xC49BE9: cpu.execute_instruction<0xF0>(0x00005C, 2); return true;
    // src/unknown/C4/C49B6E.asm:54 LDA @LOCAL02
    case 0xC49BEB: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C49B6E.asm:55 STA @VIRTUAL02
    case 0xC49BED: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C49B6E.asm:56 LDA #VRAM::TEXT_LAYER_TILES + $892 ;an upper limit on tile size
    case 0xC49BEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000092, 2); else cpu.execute_instruction<0xA9>(0x006892, 3); return true;
    // src/unknown/C4/C49B6E.asm:56 LDA #VRAM::TEXT_LAYER_TILES + $892 ;an upper limit on tile size
    // Overlapping static entry reached from 0xC49BEF.
    case 0xC49BF1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E.asm:57 SEC
    case 0xC49BF2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E.asm:58 SBC @VIRTUAL02
    case 0xC49BF3: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C49B6E.asm:59 PROMOTENEARPTRA @VIRTUAL06
    case 0xC49BF5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C49B6E.asm:59 PROMOTENEARPTRA @VIRTUAL06
    case 0xC49BF7: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C49B6E.asm:59 PROMOTENEARPTRA @VIRTUAL06
    case 0xC49BF8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C49B6E.asm:59 PROMOTENEARPTRA @VIRTUAL06
    case 0xC49BFA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C49B6E.asm:59 PROMOTENEARPTRA @VIRTUAL06
    case 0xC49BFB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C49B6E.asm:59 PROMOTENEARPTRA @VIRTUAL06
    case 0xC49BFD: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C49B6E.asm:60 REP #PROC_FLAGS::ACCUM8
    case 0xC49BFF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C49B6E.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49C01: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C49B6E.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49C03: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C49B6E.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49C05: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C49B6E.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49C07: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C49B6E.asm:62 LDY #VRAM::TEXT_LAYER_TILES + $150
    case 0xC49C09: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000050, 2); else cpu.execute_instruction<0xA0>(0x006150, 3); return true;
    // src/unknown/C4/C49B6E.asm:62 LDY #VRAM::TEXT_LAYER_TILES + $150
    // Overlapping static entry reached from 0xC49C09.
    case 0xC49C0B: cpu.execute_instruction<0x61>(0x0000E2, 2); return true;
    // src/unknown/C4/C49B6E.asm:63 SEP #PROC_FLAGS::ACCUM8
    case 0xC49C0C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C49B6E.asm:63 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC49C0B.
    case 0xC49C0D: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/unknown/C4/C49B6E.asm:64 LDA #0
    case 0xC49C0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C4/C49B6E.asm:65 JSL PREPARE_VRAM_COPY
    case 0xC49C10: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C4/C49B6E.asm:65 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC49C0E.
    case 0xC49C11: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C4/C49B6E.asm:65 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC49C11.
    case 0xC49C13: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000080, 2); else cpu.execute_instruction<0xC0>(0x003180, 3); return true;
    // src/unknown/C4/C49B6E.asm:66 BRA @UNKNOWN4
    case 0xC49C14: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/unknown/C4/C49B6E.asm:66 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC49C13.
    case 0xC49C15: cpu.execute_instruction<0x31>(0x0000A9, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C49B6E.asm:69 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC49C16: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000092, 2); else cpu.execute_instruction<0xA9>(0x003492, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C49B6E.asm:69 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC49C15.
    case 0xC49C17: cpu.execute_instruction<0x92>(0x000034, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C49B6E.asm:69 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC49C16.
    case 0xC49C18: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C49B6E.asm:69 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC49C19: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C49B6E.asm:69 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC49C18.
    case 0xC49C1A: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C49B6E.asm:69 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC49C1B: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C49B6E.asm:69 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC49C1C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C49B6E.asm:69 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC49C1E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C49B6E.asm:69 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC49C1F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C49B6E.asm:69 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC49C21: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C49B6E.asm:70 REP #PROC_FLAGS::ACCUM8
    case 0xC49C23: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C49B6E.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49C25: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C49B6E.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49C27: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C49B6E.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49C29: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C49B6E.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49C2B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C49B6E.asm:72 LDA FLYOVER_SCREEN_OFFSET
    case 0xC49C2D: cpu.execute_instruction<0xAD>(0x009F2D, 3); return true;
    // src/unknown/C4/C49B6E.asm:73 LDY #208
    case 0xC49C30: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D0, 2); else cpu.execute_instruction<0xA0>(0x0000D0, 3); return true;
    // src/unknown/C4/C49B6E.asm:73 LDY #208
    // Overlapping static entry reached from 0xC49C30.
    case 0xC49C32: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49B6E.asm:74 JSL MULT168
    case 0xC49C33: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C49B6E.asm:75 CLC
    case 0xC49C37: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E.asm:76 ADC #VRAM::TEXT_LAYER_TILES + $150
    case 0xC49C38: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x006150, 3); return true;
    // src/unknown/C4/C49B6E.asm:76 ADC #VRAM::TEXT_LAYER_TILES + $150
    // Overlapping static entry reached from 0xC49C38.
    case 0xC49C3A: cpu.execute_instruction<0x61>(0x0000A8, 2); return true;
    // src/unknown/C4/C49B6E.asm:77 TAY
    case 0xC49C3B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C49B6E.asm:78 LDX #$04E0
    case 0xC49C3C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E0, 2); else cpu.execute_instruction<0xA2>(0x0004E0, 3); return true;
    // src/unknown/C4/C49B6E.asm:78 LDX #$04E0
    // Overlapping static entry reached from 0xC49C3C.
    case 0xC49C3E: cpu.execute_instruction<0x04>(0x0000E2, 2); return true;
    // src/unknown/C4/C49B6E.asm:79 SEP #PROC_FLAGS::ACCUM8
    case 0xC49C3F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C49B6E.asm:79 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC49C3E.
    case 0xC49C40: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/unknown/C4/C49B6E.asm:80 LDA #0
    case 0xC49C41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C4/C49B6E.asm:81 JSL PREPARE_VRAM_COPY
    case 0xC49C43: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C4/C49B6E.asm:81 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC49C41.
    case 0xC49C44: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C4/C49B6E.asm:81 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC49C44.
    case 0xC49C46: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00FFA9, 3); return true;
    // src/unknown/C4/C49B6E.asm:84 LDA #.LOWORD(-1)
    case 0xC49C47: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C49B6E.asm:84 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC49C46.
    case 0xC49C48: cpu.execute_instruction<0xFF>(0x1E8DFF, 4); return true;
    // src/unknown/C4/C49B6E.asm:84 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC49C47.
    case 0xC49C49: cpu.execute_instruction<0xFF>(0x3C1E8D, 4); return true;
    // src/unknown/C4/C49B6E.asm:85 STA UNKNOWN_7E3C1E
    case 0xC49C4A: cpu.execute_instruction<0x8D>(0x003C1E, 3); return true;
    // src/unknown/C4/C49B6E.asm:85 STA UNKNOWN_7E3C1E
    // Overlapping static entry reached from 0xC49C48.
    case 0xC49C4C: cpu.execute_instruction<0x3C>(0x00209C, 3); return true;
    // src/unknown/C4/C49B6E.asm:86 STZ UNKNOWN_7E3C20
    case 0xC49C4D: cpu.execute_instruction<0x9C>(0x003C20, 3); return true;
    // src/unknown/C4/C49B6E.asm:86 STZ UNKNOWN_7E3C20
    // Overlapping static entry reached from 0xC49C4C.
    case 0xC49C4F: cpu.execute_instruction<0x3C>(0x005622, 3); return true;
    // src/unknown/C4/C49B6E.asm:87 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC49C50: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C4/C49B6E.asm:87 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC49C4F.
    case 0xC49C52: cpu.execute_instruction<0x87>(0x0000C0, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C49B6E.asm:88 END_C_FUNCTION
    case 0xC49C54: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C49B6E.asm:88 END_C_FUNCTION
    case 0xC49C55: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49C56.asm (unresolved).
bool execute_unresolved_c4_c49c56_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49C56.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC49C56: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C49C56.asm:12 END_STACK_VARS
    case 0xC49C58: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C49C56.asm:12 END_STACK_VARS
    case 0xC49C59: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C49C56.asm:12 END_STACK_VARS
    case 0xC49C5A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49C56.asm:12 END_STACK_VARS
    case 0xC49C5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49C56.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC49C5B.
    case 0xC49C5D: cpu.execute_instruction<0xFF>(0x18685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C49C56.asm:12 END_STACK_VARS
    case 0xC49C5E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C49C56.asm:12 END_STACK_VARS
    case 0xC49C5F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:13 CLC
    case 0xC49C60: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:14 ADC UNKNOWN_7E3C16
    case 0xC49C61: cpu.execute_instruction<0x6D>(0x003C16, 3); return true;
    // src/unknown/C4/C49C56.asm:15 STA UNKNOWN_7E3C16
    case 0xC49C64: cpu.execute_instruction<0x8D>(0x003C16, 3); return true;
    // src/unknown/C4/C49C56.asm:16 STZ UNKNOWN_7E3C14
    case 0xC49C67: cpu.execute_instruction<0x9C>(0x003C14, 3); return true;
    // src/unknown/C4/C49C56.asm:17 LSR
    case 0xC49C6A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:18 LSR
    case 0xC49C6B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:19 LSR
    case 0xC49C6C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:21 INC
    case 0xC49C6D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:23 CLC
    case 0xC49C6E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:24 ADC FLYOVER_SCREEN_OFFSET
    case 0xC49C6F: cpu.execute_instruction<0x6D>(0x009F2D, 3); return true;
    // src/unknown/C4/C49C56.asm:25 STA FLYOVER_SCREEN_OFFSET
    case 0xC49C72: cpu.execute_instruction<0x8D>(0x009F2D, 3); return true;
    // src/unknown/C4/C49C56.asm:26 CMP #32
    case 0xC49C75: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C4/C49C56.asm:26 CMP #32
    // Overlapping static entry reached from 0xC49C75.
    case 0xC49C77: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C49C56.asm:27 BCC @UNKNOWN0
    case 0xC49C78: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // src/unknown/C4/C49C56.asm:28 SEC
    case 0xC49C7A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C49C56.asm:29 SBC #32
    case 0xC49C7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000020, 2); else cpu.execute_instruction<0xE9>(0x000020, 3); return true;
    // src/unknown/C4/C49C56.asm:29 SBC #32
    // Overlapping static entry reached from 0xC49C7B.
    case 0xC49C7D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C49C56.asm:30 STA FLYOVER_SCREEN_OFFSET
    case 0xC49C7E: cpu.execute_instruction<0x8D>(0x009F2D, 3); return true;
    // src/unknown/C4/C49C56.asm:79 JSL WAIT_DMA_FINISHED
    case 0xC49C81: cpu.execute_instruction<0x22>(0xC08F8B, 4); return true;
    // src/unknown/C4/C49C56.asm:80 SEP #PROC_FLAGS::ACCUM8
    case 0xC49C85: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C49C56.asm:81 LDA #<-1
    case 0xC49C87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/unknown/C4/C49C56.asm:82 STA @LOCAL00
    case 0xC49C89: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C49C56.asm:82 STA @LOCAL00
    // Overlapping static entry reached from 0xC49C87.
    case 0xC49C8A: cpu.execute_instruction<0x0E>(0x0080A2, 3); return true;
    // src/unknown/C4/C49C56.asm:83 LDX #32 * 52
    case 0xC49C8B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x000680, 3); return true;
    // src/unknown/C4/C49C56.asm:83 LDX #32 * 52
    // Overlapping static entry reached from 0xC49C8B.
    case 0xC49C8D: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C49C56.asm:84 REP #PROC_FLAGS::ACCUM8
    case 0xC49C8E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C49C56.asm:84 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC49C8D.
    case 0xC49C8F: cpu.execute_instruction<0x20>(0x0092A9, 3); return true;
    // src/unknown/C4/C49C56.asm:85 LDA #.LOWORD(VWF_BUFFER)
    case 0xC49C90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000092, 2); else cpu.execute_instruction<0xA9>(0x003492, 3); return true;
    // src/unknown/C4/C49C56.asm:85 LDA #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC49C90.
    case 0xC49C92: cpu.execute_instruction<0x34>(0x000022, 2); return true;
    // src/unknown/C4/C49C56.asm:86 JSL MEMSET16
    case 0xC49C93: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C4/C49C56.asm:86 JSL MEMSET16
    // Overlapping static entry reached from 0xC49C92.
    case 0xC49C94: cpu.execute_instruction<0xFC>(0x00C08E, 3); return true;
    // src/unknown/C4/C49C56.asm:88 LDA UNKNOWN_7E3C16
    case 0xC49C97: cpu.execute_instruction<0xAD>(0x003C16, 3); return true;
    // src/unknown/C4/C49C56.asm:89 AND #$0007
    case 0xC49C9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C4/C49C56.asm:89 AND #$0007
    // Overlapping static entry reached from 0xC49C9A.
    case 0xC49C9C: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C49C56.asm:90 STA UNKNOWN_7E3C16
    case 0xC49C9D: cpu.execute_instruction<0x8D>(0x003C16, 3); return true;
    // src/unknown/C4/C49C56.asm:92 STZ FLYOVER_PIXEL_OFFSET
    case 0xC49CA0: cpu.execute_instruction<0x9C>(0x009F2F, 3); return true;
    // src/unknown/C4/C49C56.asm:93 STZ FLYOVER_BYTE_OFFSET
    case 0xC49CA3: cpu.execute_instruction<0x9C>(0x009F31, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C49C56.asm:95 END_C_FUNCTION
    case 0xC49CA6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C49C56.asm:95 END_C_FUNCTION
    case 0xC49CA7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49CA8.asm (unresolved).
bool execute_unresolved_c4_c49ca8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49CA8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC49CA8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C49CA8.asm:6 AND #$00FF
    case 0xC49CAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C49CA8.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC49CAA.
    case 0xC49CAC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C49CA8.asm:7 CLC
    case 0xC49CAD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49CA8.asm:8 ADC #8
    case 0xC49CAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C4/C49CA8.asm:8 ADC #8
    // Overlapping static entry reached from 0xC49CAE.
    case 0xC49CB0: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C49CA8.asm:9 CLC
    case 0xC49CB1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49CA8.asm:10 ADC FLYOVER_PIXEL_OFFSET
    case 0xC49CB2: cpu.execute_instruction<0x6D>(0x009F2F, 3); return true;
    // src/unknown/C4/C49CA8.asm:11 STA FLYOVER_PIXEL_OFFSET
    case 0xC49CB5: cpu.execute_instruction<0x8D>(0x009F2F, 3); return true;
    // src/unknown/C4/C49CA8.asm:12 LSR
    case 0xC49CB8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49CA8.asm:13 LSR
    case 0xC49CB9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49CA8.asm:14 LSR
    case 0xC49CBA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C49CA8.asm:15 ASL
    case 0xC49CBB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49CA8.asm:16 ASL
    case 0xC49CBC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49CA8.asm:17 ASL
    case 0xC49CBD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49CA8.asm:18 ASL
    case 0xC49CBE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49CA8.asm:19 STA FLYOVER_BYTE_OFFSET
    case 0xC49CBF: cpu.execute_instruction<0x8D>(0x009F31, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C49CA8.asm:20 END_C_FUNCTION
    case 0xC49CC2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49CC3.asm (unresolved).
bool execute_unresolved_c4_c49cc3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49CC3.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC49CC3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C49CC3.asm:8 END_STACK_VARS
    case 0xC49CC5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C49CC3.asm:8 END_STACK_VARS
    case 0xC49CC6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C49CC3.asm:8 END_STACK_VARS
    case 0xC49CC7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49CC3.asm:8 END_STACK_VARS
    case 0xC49CC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49CC3.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC49CC8.
    case 0xC49CCA: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C49CC3.asm:8 END_STACK_VARS
    case 0xC49CCB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C49CC3.asm:8 END_STACK_VARS
    case 0xC49CCC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C49CC3.asm:9 TAX
    case 0xC49CCD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49CC3.asm:10 DEC
    case 0xC49CCE: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C49CC3.asm:11 LDY #.SIZEOF(char_struct)
    case 0xC49CCF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C4/C49CC3.asm:11 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC49CCF.
    case 0xC49CD1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49CC3.asm:12 JSL MULT168
    case 0xC49CD2: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C4/C49CC3.asm:13 CLC
    case 0xC49CD6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49CC3.asm:14 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC49CD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/unknown/C4/C49CC3.asm:14 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC49CD7.
    case 0xC49CD9: cpu.execute_instruction<0x99>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C49CC3.asm:15 PROMOTENEARPTRA @VIRTUAL06
    case 0xC49CDA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C49CC3.asm:15 PROMOTENEARPTRA @VIRTUAL06
    case 0xC49CDC: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C49CC3.asm:15 PROMOTENEARPTRA @VIRTUAL06
    case 0xC49CDD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C49CC3.asm:15 PROMOTENEARPTRA @VIRTUAL06
    case 0xC49CDF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C49CC3.asm:15 PROMOTENEARPTRA @VIRTUAL06
    case 0xC49CE0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C49CC3.asm:15 PROMOTENEARPTRA @VIRTUAL06
    case 0xC49CE2: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C49CC3.asm:16 LDX #0
    case 0xC49CE4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C49CC3.asm:16 LDX #0
    // Overlapping static entry reached from 0xC49CE4.
    case 0xC49CE6: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C49CC3.asm:17 STX @LOCAL01
    case 0xC49CE7: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C49CC3.asm:18 BRA @UNKNOWN1
    case 0xC49CE9: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C4/C49CC3.asm:20 INC @VIRTUAL06
    case 0xC49CEB: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C49CC3.asm:21 LDA @LOCAL00
    case 0xC49CED: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C49CC3.asm:22 JSL UNKNOWN_C4999B
    case 0xC49CEF: cpu.execute_instruction<0x22>(0xC4999B, 4); return true;
    // src/unknown/C4/C49CC3.asm:23 LDX @LOCAL01
    case 0xC49CF3: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C49CC3.asm:24 INX
    case 0xC49CF5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C49CC3.asm:25 STX @LOCAL01
    case 0xC49CF6: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C49CC3.asm:25 STX @LOCAL01
    // Overlapping static entry reached from 0xC49D4D.
    case 0xC49CF7: cpu.execute_instruction<0x10>(0x0000E0, 2); return true;
    // src/unknown/C4/C49CC3.asm:27 CPX #5
    case 0xC49CF8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000005, 2); else cpu.execute_instruction<0xE0>(0x000005, 3); return true;
    // src/unknown/C4/C49CC3.asm:27 CPX #5
    // Overlapping static entry reached from 0xC49CF7.
    case 0xC49CF9: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/unknown/C4/C49CC3.asm:27 CPX #5
    // Overlapping static entry reached from 0xC49CF8.
    case 0xC49CFA: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C4/C49CC3.asm:28 BCS @UNKNOWN3
    case 0xC49CFB: cpu.execute_instruction<0xB0>(0x000015, 2); return true;
    // src/unknown/C4/C49CC3.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC49CFD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C49CC3.asm:30 LDA [@VIRTUAL06]
    case 0xC49CFF: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C49CC3.asm:31 AND #$00FF
    case 0xC49D01: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C49CC3.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC49D01.
    case 0xC49D03: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C49CC3.asm:32 STA @LOCAL00
    case 0xC49D04: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C49CC3.asm:33 CLC
    case 0xC49D06: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49CC3.asm:34 SBC #79
    case 0xC49D07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00004F, 2); else cpu.execute_instruction<0xE9>(0x00004F, 3); return true;
    // src/unknown/C4/C49CC3.asm:34 SBC #79
    // Overlapping static entry reached from 0xC49D07.
    case 0xC49D09: cpu.execute_instruction<0x00>(0x000070, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C4/C49CC3.asm:35 BRANCHGTS @UNKNOWN0
    case 0xC49D0A: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C4/C49CC3.asm:35 BRANCHGTS @UNKNOWN0
    case 0xC49D0C: cpu.execute_instruction<0x10>(0x0000DD, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C4/C49CC3.asm:35 BRANCHGTS @UNKNOWN0
    case 0xC49D0E: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C4/C49CC3.asm:35 BRANCHGTS @UNKNOWN0
    case 0xC49D10: cpu.execute_instruction<0x30>(0x0000D9, 2); return true;
    // src/unknown/C4/C49CC3.asm:37 REP #PROC_FLAGS::ACCUM8
    case 0xC49D12: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C49CC3.asm:38 END_C_FUNCTION
    case 0xC49D14: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C49CC3.asm:38 END_C_FUNCTION
    case 0xC49D15: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49D16.asm (unresolved).
bool execute_unresolved_c4_c49d16_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49D16.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC49D16: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C49D16.asm:6 TAX
    case 0xC49D18: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49D16.asm:7 JSL UNKNOWN_C4999B
    case 0xC49D19: cpu.execute_instruction<0x22>(0xC4999B, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C49D16.asm:8 END_C_FUNCTION
    case 0xC49D1D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49D1E.asm (unresolved).
bool execute_unresolved_c4_c49d1e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49D1E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC49D1E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C49D1E.asm:9 END_STACK_VARS
    case 0xC49D20: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C49D1E.asm:9 END_STACK_VARS
    case 0xC49D21: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C49D1E.asm:9 END_STACK_VARS
    case 0xC49D22: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49D1E.asm:9 END_STACK_VARS
    case 0xC49D23: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49D1E.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC49D23.
    case 0xC49D25: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C49D1E.asm:9 END_STACK_VARS
    case 0xC49D26: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C49D1E.asm:9 END_STACK_VARS
    case 0xC49D27: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C49D1E.asm:10 STA @LOCAL01
    case 0xC49D28: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C49D1E.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xC49D25.
    case 0xC49D29: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/unknown/C4/C49D1E.asm:11 JSL OAM_CLEAR
    case 0xC49D2A: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/unknown/C4/C49D1E.asm:11 JSL OAM_CLEAR
    // Overlapping static entry reached from 0xC49D29.
    case 0xC49D2B: cpu.execute_instruction<0xB1>(0x000088, 2); return true;
    // src/unknown/C4/C49D1E.asm:11 JSL OAM_CLEAR
    // Overlapping static entry reached from 0xC49D2B.
    case 0xC49D2D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0010A5, 3); return true;
    // src/unknown/C4/C49D1E.asm:12 LDA @LOCAL01
    case 0xC49D2E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C49D1E.asm:12 LDA @LOCAL01
    // Overlapping static entry reached from 0xC49D2D.
    case 0xC49D2F: cpu.execute_instruction<0x10>(0x000029, 2); return true;
    // src/unknown/C4/C49D1E.asm:13 AND #$FF00
    case 0xC49D30: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C4/C49D1E.asm:13 AND #$FF00
    // Overlapping static entry reached from 0xC49D2F.
    case 0xC49D31: cpu.execute_instruction<0x00>(0x0000FF, 2); return true;
    // src/unknown/C4/C49D1E.asm:13 AND #$FF00
    // Overlapping static entry reached from 0xC49D30.
    case 0xC49D32: cpu.execute_instruction<0xFF>(0xA50285, 4); return true;
    // src/unknown/C4/C49D1E.asm:14 STA @VIRTUAL02
    case 0xC49D33: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C49D1E.asm:15 LDA @LOCAL01
    case 0xC49D35: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C49D1E.asm:15 LDA @LOCAL01
    // Overlapping static entry reached from 0xC49D32.
    case 0xC49D36: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // src/unknown/C4/C49D1E.asm:16 CLC
    case 0xC49D37: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49D1E.asm:18 ADC #64
    case 0xC49D38: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x000040, 3); return true;
    // src/unknown/C4/C49D1E.asm:18 ADC #64
    // Overlapping static entry reached from 0xC49D38.
    case 0xC49D3A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C49D1E.asm:22 TAX
    case 0xC49D3B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C49D1E.asm:23 STX @LOCAL00
    case 0xC49D3C: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C49D1E.asm:24 TXA
    case 0xC49D3E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C49D1E.asm:25 AND #$FF00
    case 0xC49D3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C4/C49D1E.asm:25 AND #$FF00
    // Overlapping static entry reached from 0xC49D3F.
    case 0xC49D41: cpu.execute_instruction<0xFF>(0xC51085, 4); return true;
    // src/unknown/C4/C49D1E.asm:26 STA @LOCAL01
    case 0xC49D42: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C49D1E.asm:27 CMP @VIRTUAL02
    case 0xC49D44: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C49D1E.asm:27 CMP @VIRTUAL02
    // Overlapping static entry reached from 0xC49D41.
    case 0xC49D45: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/C4/C49D1E.asm:28 BEQ @UNKNOWN0
    case 0xC49D46: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/unknown/C4/C49D1E.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC49D48: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C49D1E.asm:30 LDA #8
    case 0xC49D4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/unknown/C4/C49D1E.asm:31 SEP #PROC_FLAGS::INDEX8
    case 0xC49D4C: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C49D1E.asm:31 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC49D4A.
    case 0xC49D4D: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C4/C49D1E.asm:32 TAY
    case 0xC49D4E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C49D1E.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0xC49D4F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C49D1E.asm:33 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC49D36.
    case 0xC49D50: cpu.execute_instruction<0x20>(0x0010A5, 3); return true;
    // src/unknown/C4/C49D1E.asm:34 LDA @LOCAL01
    case 0xC49D51: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C49D1E.asm:35 SEC
    case 0xC49D53: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C49D1E.asm:36 SBC @VIRTUAL02
    case 0xC49D54: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C49D1E.asm:37 JSL ASR8_UNKNOWN1
    case 0xC49D56: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/unknown/C4/C49D1E.asm:38 CLC
    case 0xC49D5A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49D1E.asm:39 ADC BG3_Y_POS
    case 0xC49D5B: cpu.execute_instruction<0x6D>(0x00003B, 3); return true;
    // src/unknown/C4/C49D1E.asm:40 STA BG3_Y_POS
    case 0xC49D5E: cpu.execute_instruction<0x8D>(0x00003B, 3); return true;
    // src/unknown/C4/C49D1E.asm:41 JSL UPDATE_SCREEN
    case 0xC49D61: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/unknown/C4/C49D1E.asm:43 LDX @LOCAL00
    case 0xC49D65: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C49D1E.asm:44 TXA
    case 0xC49D67: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C49D1E.asm:45 END_C_FUNCTION
    case 0xC49D68: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C49D1E.asm:45 END_C_FUNCTION
    case 0xC49D69: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C49EC4.asm (unresolved).
bool execute_unresolved_c4_c49ec4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C49EC4.asm:5 BEGIN_C_FUNCTION_FAR
    case 0xC49EC4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C49EC4.asm:9 END_STACK_VARS
    case 0xC49EC6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C49EC4.asm:9 END_STACK_VARS
    case 0xC49EC7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C49EC4.asm:9 END_STACK_VARS
    case 0xC49EC8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49EC4.asm:9 END_STACK_VARS
    case 0xC49EC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C49EC4.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC49EC9.
    case 0xC49ECB: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C49EC4.asm:9 END_STACK_VARS
    case 0xC49ECC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C49EC4.asm:9 END_STACK_VARS
    case 0xC49ECD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4.asm:10 STA @LOCAL00
    case 0xC49ECE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C49EC4.asm:10 STA @LOCAL00
    // Overlapping static entry reached from 0xC49ECB.
    case 0xC49ECF: cpu.execute_instruction<0x0E>(0x00E4A2, 3); return true;
    // src/unknown/C4/C49EC4.asm:11 LDX #.LOWORD(ENTITY_TICK_CALLBACK_HIGH) + 23 * 2
    case 0xC49ED0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E4, 2); else cpu.execute_instruction<0xA2>(0x0010E4, 3); return true;
    // src/unknown/C4/C49EC4.asm:11 LDX #.LOWORD(ENTITY_TICK_CALLBACK_HIGH) + 23 * 2
    // Overlapping static entry reached from 0xC49ED0.
    case 0xC49ED2: cpu.execute_instruction<0x10>(0x0000BD, 2); return true;
    // src/unknown/C4/C49EC4.asm:12 LDA __BSS_START__,X
    case 0xC49ED3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C49EC4.asm:12 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC49ED2.
    case 0xC49ED4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C49EC4.asm:13 STA @VIRTUAL02
    case 0xC49ED6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C49EC4.asm:14 ORA #$C000
    case 0xC49ED8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C4/C49EC4.asm:14 ORA #$C000
    // Overlapping static entry reached from 0xC49ED8.
    case 0xC49EDA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C4/C49EC4.asm:15 STA __BSS_START__,X
    case 0xC49EDB: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C49EC4.asm:15 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC49EDA.
    case 0xC49EDC: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C49EC4.asm:15 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC49EDA.
    case 0xC49EDD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49EC4.asm:16 JSL UNKNOWN_C49A56
    case 0xC49EDE: cpu.execute_instruction<0x22>(0xC49A56, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C49EC4.asm:17 LOADPTR FLYOVER_TEXT_POINTERS, @VIRTUAL0A
    case 0xC49EE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A4, 2); else cpu.execute_instruction<0xA9>(0x009EA4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C49EC4.asm:17 LOADPTR FLYOVER_TEXT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC49EE2.
    case 0xC49EE4: cpu.execute_instruction<0x9E>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C49EC4.asm:17 LOADPTR FLYOVER_TEXT_POINTERS, @VIRTUAL0A
    case 0xC49EE5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C49EC4.asm:17 LOADPTR FLYOVER_TEXT_POINTERS, @VIRTUAL0A
    case 0xC49EE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C49EC4.asm:17 LOADPTR FLYOVER_TEXT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC49EE7.
    case 0xC49EE9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C49EC4.asm:17 LOADPTR FLYOVER_TEXT_POINTERS, @VIRTUAL0A
    case 0xC49EEA: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C49EC4.asm:18 LDA @LOCAL00
    case 0xC49EEC: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C49EC4.asm:19 ASL
    case 0xC49EEE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4.asm:20 ASL
    case 0xC49EEF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4.asm:21 CLC
    case 0xC49EF0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4.asm:22 ADC @VIRTUAL0A
    case 0xC49EF1: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C49EC4.asm:23 STA @VIRTUAL0A
    case 0xC49EF3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C49EC4.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC49EF5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C49EC4.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC49EF5.
    case 0xC49EF7: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C49EC4.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC49EF8: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C49EC4.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC49EFA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C49EC4.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC49EFB: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C49EC4.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC49EFD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C49EC4.asm:24 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC49EFF: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C49EC4.asm:25 STZ ENABLE_WORD_WRAP
    case 0xC49F01: cpu.execute_instruction<0x9C>(0x005E6E, 3); return true;
    // src/unknown/C4/C49EC4.asm:27 LDA [@VIRTUAL06]
    case 0xC49F04: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C49EC4.asm:28 AND #$00FF
    case 0xC49F06: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C49EC4.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC49F06.
    case 0xC49F08: cpu.execute_instruction<0x00>(0x0000E6, 2); return true;
    // src/unknown/C4/C49EC4.asm:29 INC @VIRTUAL06
    case 0xC49F09: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C49EC4.asm:30 CMP #$00
    case 0xC49F0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C49EC4.asm:30 CMP #$00
    // Overlapping static entry reached from 0xC49F0B.
    case 0xC49F0D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C49EC4.asm:31 BEQ @END_OF_SCRIPT
    case 0xC49F0E: cpu.execute_instruction<0xF0>(0x000062, 2); return true;
    // src/unknown/C4/C49EC4.asm:32 CMP #$02
    case 0xC49F10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C4/C49EC4.asm:32 CMP #$02
    // Overlapping static entry reached from 0xC49F10.
    case 0xC49F12: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C49EC4.asm:33 BEQ @PARSE_02
    case 0xC49F13: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C4/C49EC4.asm:34 CMP #$09
    case 0xC49F15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/unknown/C4/C49EC4.asm:34 CMP #$09
    // Overlapping static entry reached from 0xC49F15.
    case 0xC49F17: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C49EC4.asm:35 BEQ @PARSE_09
    case 0xC49F18: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C4/C49EC4.asm:36 CMP #$01
    case 0xC49F1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C49EC4.asm:36 CMP #$01
    // Overlapping static entry reached from 0xC49F1A.
    case 0xC49F1C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C49EC4.asm:37 BEQ @PARSE_01
    case 0xC49F1D: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/unknown/C4/C49EC4.asm:38 CMP #$08
    case 0xC49F1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C4/C49EC4.asm:38 CMP #$08
    // Overlapping static entry reached from 0xC49F1F.
    case 0xC49F21: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C49EC4.asm:39 BEQ @PARSE_08
    case 0xC49F22: cpu.execute_instruction<0xF0>(0x000030, 2); return true;
    // src/unknown/C4/C49EC4.asm:40 BRA @PRINT_TEXT
    case 0xC49F24: cpu.execute_instruction<0x80>(0x000040, 2); return true;
    // src/unknown/C4/C49EC4.asm:42 LDA [@VIRTUAL06]
    case 0xC49F26: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C49EC4.asm:43 AND #$00FF
    case 0xC49F28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C49EC4.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC49F28.
    case 0xC49F2A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C49EC4.asm:44 STA FLYOVER_SCREEN_OFFSET
    case 0xC49F2B: cpu.execute_instruction<0x8D>(0x009F2D, 3); return true;
    // src/unknown/C4/C49EC4.asm:45 INC @VIRTUAL06
    case 0xC49F2E: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C49EC4.asm:46 BRA @SCRIPT_PARSE_BEGIN
    case 0xC49F30: cpu.execute_instruction<0x80>(0x0000D2, 2); return true;
    // src/unknown/C4/C49EC4.asm:48 LDA #24
    case 0xC49F32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C4/C49EC4.asm:48 LDA #24
    // Overlapping static entry reached from 0xC49F32.
    case 0xC49F34: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49EC4.asm:49 JSL UNKNOWN_C49B6E
    case 0xC49F35: cpu.execute_instruction<0x22>(0xC49B6E, 4); return true;
    // src/unknown/C4/C49EC4.asm:50 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC49F39: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C4/C49EC4.asm:51 LDA #24
    case 0xC49F3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C4/C49EC4.asm:51 LDA #24
    // Overlapping static entry reached from 0xC49F3D.
    case 0xC49F3F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49EC4.asm:52 JSL UNKNOWN_C49C56
    case 0xC49F40: cpu.execute_instruction<0x22>(0xC49C56, 4); return true;
    // src/unknown/C4/C49EC4.asm:53 BRA @SCRIPT_PARSE_BEGIN
    case 0xC49F44: cpu.execute_instruction<0x80>(0x0000BE, 2); return true;
    // src/unknown/C4/C49EC4.asm:55 SEP #PROC_FLAGS::ACCUM8
    case 0xC49F46: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C49EC4.asm:56 LDA [@VIRTUAL06]
    case 0xC49F48: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C49EC4.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0xC49F4A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C49EC4.asm:58 INC @VIRTUAL06
    case 0xC49F4C: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C49EC4.asm:59 JSL UNKNOWN_C49CA8
    case 0xC49F4E: cpu.execute_instruction<0x22>(0xC49CA8, 4); return true;
    // src/unknown/C4/C49EC4.asm:60 BRA @SCRIPT_PARSE_BEGIN
    case 0xC49F52: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/C4/C49EC4.asm:62 LDA [@VIRTUAL06]
    case 0xC49F54: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C49EC4.asm:63 AND #$00FF
    case 0xC49F56: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C49EC4.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC49F56.
    case 0xC49F58: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C49EC4.asm:64 TAY
    case 0xC49F59: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4.asm:65 INC @VIRTUAL06
    case 0xC49F5A: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C49EC4.asm:66 LDX #12
    case 0xC49F5C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000C, 2); else cpu.execute_instruction<0xA2>(0x00000C, 3); return true;
    // src/unknown/C4/C49EC4.asm:66 LDX #12
    // Overlapping static entry reached from 0xC49F5C.
    case 0xC49F5E: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C4/C49EC4.asm:67 TYA
    case 0xC49F5F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4.asm:68 JSL UNKNOWN_C49CC3
    case 0xC49F60: cpu.execute_instruction<0x22>(0xC49CC3, 4); return true;
    // src/unknown/C4/C49EC4.asm:69 BRA @SCRIPT_PARSE_BEGIN
    case 0xC49F64: cpu.execute_instruction<0x80>(0x00009E, 2); return true;
    // src/unknown/C4/C49EC4.asm:71 LDY #12
    case 0xC49F66: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C4/C49EC4.asm:71 LDY #12
    // Overlapping static entry reached from 0xC49F66.
    case 0xC49F68: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C4/C49EC4.asm:72 LDX #0
    case 0xC49F69: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C49EC4.asm:72 LDX #0
    // Overlapping static entry reached from 0xC49F69.
    case 0xC49F6B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49EC4.asm:73 JSL UNKNOWN_C49D16
    case 0xC49F6C: cpu.execute_instruction<0x22>(0xC49D16, 4); return true;
    // src/unknown/C4/C49EC4.asm:74 BRA @SCRIPT_PARSE_BEGIN
    case 0xC49F70: cpu.execute_instruction<0x80>(0x000092, 2); return true;
    // src/unknown/C4/C49EC4.asm:76 SEP #PROC_FLAGS::ACCUM8
    case 0xC49F72: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C49EC4.asm:77 LDA #$04
    case 0xC49F74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x008D04, 3); return true;
    // src/unknown/C4/C49EC4.asm:78 STA TM_MIRROR
    case 0xC49F76: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/C4/C49EC4.asm:78 STA TM_MIRROR
    // Overlapping static entry reached from 0xC49F74.
    case 0xC49F77: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4.asm:78 STA TM_MIRROR
    // Overlapping static entry reached from 0xC49F77.
    case 0xC49F78: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C4/C49EC4.asm:79 LDY #0
    case 0xC49F79: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C49EC4.asm:79 LDY #0
    // Overlapping static entry reached from 0xC49F79.
    case 0xC49F7B: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C4/C49EC4.asm:80 LDX #3
    case 0xC49F7C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/unknown/C4/C49EC4.asm:80 LDX #3
    // Overlapping static entry reached from 0xC49F7C.
    case 0xC49F7E: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C49EC4.asm:81 REP #PROC_FLAGS::ACCUM8
    case 0xC49F7F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C49EC4.asm:82 LDA #1
    case 0xC49F81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C49EC4.asm:82 LDA #1
    // Overlapping static entry reached from 0xC49F81.
    case 0xC49F83: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49EC4.asm:83 JSL FADE_IN_WITH_MOSAIC
    case 0xC49F84: cpu.execute_instruction<0x22>(0xC087CE, 4); return true;
    // src/unknown/C4/C49EC4.asm:84 LDX #0
    case 0xC49F88: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C49EC4.asm:84 LDX #0
    // Overlapping static entry reached from 0xC49F88.
    case 0xC49F8A: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C49EC4.asm:85 STX @LOCAL00
    case 0xC49F8B: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C49EC4.asm:86 BRA @UNKNOWN8
    case 0xC49F8D: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C4/C49EC4.asm:88 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC49F8F: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C4/C49EC4.asm:89 LDX @LOCAL00
    case 0xC49F93: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C49EC4.asm:90 INX
    case 0xC49F95: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4.asm:91 STX @LOCAL00
    case 0xC49F96: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C49EC4.asm:93 CPX #180
    case 0xC49F98: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000B4, 2); else cpu.execute_instruction<0xE0>(0x0000B4, 3); return true;
    // src/unknown/C4/C49EC4.asm:93 CPX #180
    // Overlapping static entry reached from 0xC49F98.
    case 0xC49F9A: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C49EC4.asm:94 BCC @UNKNOWN7
    case 0xC49F9B: cpu.execute_instruction<0x90>(0x0000F2, 2); return true;
    // src/unknown/C4/C49EC4.asm:95 LDY #0
    case 0xC49F9D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C49EC4.asm:95 LDY #0
    // Overlapping static entry reached from 0xC49F9D.
    case 0xC49F9F: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C4/C49EC4.asm:96 LDX #3
    case 0xC49FA0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/unknown/C4/C49EC4.asm:96 LDX #3
    // Overlapping static entry reached from 0xC49FA0.
    case 0xC49FA2: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C49EC4.asm:97 LDA #1
    case 0xC49FA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C49EC4.asm:97 LDA #1
    // Overlapping static entry reached from 0xC49FA3.
    case 0xC49FA5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C49EC4.asm:98 JSL FADE_OUT_WITH_MOSAIC
    case 0xC49FA6: cpu.execute_instruction<0x22>(0xC08814, 4); return true;
    // src/unknown/C4/C49EC4.asm:99 SEP #PROC_FLAGS::ACCUM8
    case 0xC49FAA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C49EC4.asm:100 LDA #$17
    case 0xC49FAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/unknown/C4/C49EC4.asm:101 STA TM_MIRROR
    case 0xC49FAE: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/C4/C49EC4.asm:101 STA TM_MIRROR
    // Overlapping static entry reached from 0xC49FAC.
    case 0xC49FAF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4.asm:101 STA TM_MIRROR
    // Overlapping static entry reached from 0xC49FAF.
    case 0xC49FB0: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C4/C49EC4.asm:102 LDY #.LOWORD(BG2_BUFFER)
    case 0xC49FB1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FE, 2); else cpu.execute_instruction<0xA0>(0x007DFE, 3); return true;
    // src/unknown/C4/C49EC4.asm:102 LDY #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC49FB1.
    case 0xC49FB3: cpu.execute_instruction<0x7D>(0x0080A2, 3); return true;
    // src/unknown/C4/C49EC4.asm:103 LDX #$0380
    case 0xC49FB4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x000380, 3); return true;
    // src/unknown/C4/C49EC4.asm:103 LDX #$0380
    // Overlapping static entry reached from 0xC49FB4.
    case 0xC49FB6: cpu.execute_instruction<0x03>(0x000080, 2); return true;
    // src/unknown/C4/C49EC4.asm:104 BRA @UNKNOWN10
    case 0xC49FB7: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/unknown/C4/C49EC4.asm:104 BRA @UNKNOWN10
    // Overlapping static entry reached from 0xC49FB6.
    case 0xC49FB8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4.asm:106 REP #PROC_FLAGS::ACCUM8
    case 0xC49FB9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C49EC4.asm:107 LDA #0
    case 0xC49FBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C49EC4.asm:107 LDA #0
    // Overlapping static entry reached from 0xC49FBB.
    case 0xC49FBD: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C4/C49EC4.asm:108 STA __BSS_START__,Y
    case 0xC49FBE: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C49EC4.asm:109 INY
    case 0xC49FC1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4.asm:110 INY
    case 0xC49FC2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4.asm:111 DEX
    case 0xC49FC3: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C49EC4.asm:113 BNE @UNKNOWN9
    case 0xC49FC4: cpu.execute_instruction<0xD0>(0x0000F3, 2); return true;
    // src/unknown/C4/C49EC4.asm:114 REP #PROC_FLAGS::ACCUM8
    case 0xC49FC6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C49EC4.asm:115 LDA #<-1
    case 0xC49FC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C4/C49EC4.asm:115 LDA #<-1
    // Overlapping static entry reached from 0xC49FC8.
    case 0xC49FCA: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C49EC4.asm:116 STA ENABLE_WORD_WRAP
    case 0xC49FCB: cpu.execute_instruction<0x8D>(0x005E6E, 3); return true;
    // src/unknown/C4/C49EC4.asm:117 JSL UNKNOWN_C08726
    case 0xC49FCE: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/unknown/C4/C49EC4.asm:118 JSL UNDRAW_FLYOVER_TEXT
    case 0xC49FD2: cpu.execute_instruction<0x22>(0xC4800B, 4); return true;
    // src/unknown/C4/C49EC4.asm:119 LDA @VIRTUAL02
    case 0xC49FD6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C49EC4.asm:120 STA ENTITY_TICK_CALLBACK_HIGH + 23 * 2
    case 0xC49FD8: cpu.execute_instruction<0x8D>(0x0010E4, 3); return true;
    // src/unknown/C4/C49EC4.asm:121 JSL UNKNOWN_C08744
    case 0xC49FDB: cpu.execute_instruction<0x22>(0xC08744, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C49EC4.asm:122 END_C_FUNCTION
    case 0xC49FDF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C49EC4.asm:122 END_C_FUNCTION
    case 0xC49FE0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4A228.asm (unresolved).
bool execute_unresolved_c4_c4a228_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4A228.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4A228: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4A228.asm:7 END_STACK_VARS
    case 0xC4A22A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4A228.asm:7 END_STACK_VARS
    case 0xC4A22B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4A228.asm:7 END_STACK_VARS
    case 0xC4A22C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4A228.asm:7 END_STACK_VARS
    case 0xC4A22D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4A228.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4A22D.
    case 0xC4A22F: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4A228.asm:7 END_STACK_VARS
    case 0xC4A230: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4A228.asm:7 END_STACK_VARS
    case 0xC4A231: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4A228.asm:8 STX @VIRTUAL02
    case 0xC4A232: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4A228.asm:8 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4A22F.
    case 0xC4A233: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/unknown/C4/C4A228.asm:9 TAY
    case 0xC4A234: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4A228.asm:10 LDX #0
    case 0xC4A235: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4A228.asm:10 LDX #0
    // Overlapping static entry reached from 0xC4A235.
    case 0xC4A237: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4A228.asm:11 BRA @UNKNOWN2
    case 0xC4A238: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C4/C4A228.asm:13 LDA FRONT_ROW_BATTLERS,X
    case 0xC4A23A: cpu.execute_instruction<0xBD>(0x00AD7A, 3); return true;
    // src/unknown/C4/C4A228.asm:14 AND #$00FF
    case 0xC4A23D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A228.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC4A23D.
    case 0xC4A23F: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C4/C4A228.asm:15 CMP @VIRTUAL02
    case 0xC4A240: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4A228.asm:16 BNE @UNKNOWN1
    case 0xC4A242: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C4/C4A228.asm:17 TXA
    case 0xC4A244: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4A228.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A245: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A228.asm:19 INC
    case 0xC4A247: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A228.asm:20 STA a:battler::current_target,Y
    case 0xC4A248: cpu.execute_instruction<0x99>(0x00000A, 3); return true;
    // src/unknown/C4/C4A228.asm:21 BRA @UNKNOWN6
    case 0xC4A24B: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/unknown/C4/C4A228.asm:23 INX
    case 0xC4A24D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4A228.asm:25 CPX NUM_BATTLERS_IN_FRONT_ROW
    case 0xC4A24E: cpu.execute_instruction<0xEC>(0x00AD56, 3); return true;
    // src/unknown/C4/C4A228.asm:26 BCC @UNKNOWN0
    case 0xC4A251: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/unknown/C4/C4A228.asm:27 LDX #0
    case 0xC4A253: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4A228.asm:27 LDX #0
    // Overlapping static entry reached from 0xC4A253.
    case 0xC4A255: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4A228.asm:28 BRA @UNKNOWN5
    case 0xC4A256: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/unknown/C4/C4A228.asm:31 LDA BACK_ROW_BATTLERS,X
    case 0xC4A258: cpu.execute_instruction<0xBD>(0x00AD82, 3); return true;
    // src/unknown/C4/C4A228.asm:32 AND #$00FF
    case 0xC4A25B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A228.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC4A25B.
    case 0xC4A25D: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C4/C4A228.asm:33 CMP @VIRTUAL02
    case 0xC4A25E: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4A228.asm:34 BNE @UNKNOWN4
    case 0xC4A260: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C4/C4A228.asm:35 TXA
    case 0xC4A262: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4A228.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A263: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A228.asm:37 CLC
    case 0xC4A265: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A228.asm:38 ADC NUM_BATTLERS_IN_FRONT_ROW
    case 0xC4A266: cpu.execute_instruction<0x6D>(0x00AD56, 3); return true;
    // src/unknown/C4/C4A228.asm:39 INC
    case 0xC4A269: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A228.asm:40 STA a:battler::current_target,Y
    case 0xC4A26A: cpu.execute_instruction<0x99>(0x00000A, 3); return true;
    // src/unknown/C4/C4A228.asm:41 BRA @UNKNOWN6
    case 0xC4A26D: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C4/C4A228.asm:43 INX
    case 0xC4A26F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4A228.asm:45 CPX NUM_BATTLERS_IN_BACK_ROW
    case 0xC4A270: cpu.execute_instruction<0xEC>(0x00AD58, 3); return true;
    // src/unknown/C4/C4A228.asm:46 BCC @UNKNOWN3
    case 0xC4A273: cpu.execute_instruction<0x90>(0x0000E3, 2); return true;
    // src/unknown/C4/C4A228.asm:48 REP #PROC_FLAGS::ACCUM8
    case 0xC4A275: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4A228.asm:49 END_C_FUNCTION
    case 0xC4A277: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4A228.asm:49 END_C_FUNCTION
    case 0xC4A278: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4A377.asm (unresolved).
bool execute_unresolved_c4_c4a377_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4A377.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4A377: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4A377.asm:11 END_STACK_VARS
    case 0xC4A379: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4A377.asm:11 END_STACK_VARS
    case 0xC4A37A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4A377.asm:11 END_STACK_VARS
    case 0xC4A37B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4A377.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC4A37B.
    case 0xC4A37D: cpu.execute_instruction<0xFF>(0x03A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4A377.asm:11 END_STACK_VARS
    case 0xC4A37E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:12 LDA #3
    case 0xC4A37F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C4/C4A377.asm:12 LDA #3
    // Overlapping static entry reached from 0xC4A37F.
    case 0xC4A381: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4A377.asm:13 JSL UNKNOWN_C08D79
    case 0xC4A382: cpu.execute_instruction<0x22>(0xC08D79, 4); return true;
    // src/unknown/C4/C4A377.asm:14 LDY #VRAM::GAS_STATION_LAYER_1_TILES
    case 0xC4A386: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4A377.asm:14 LDY #VRAM::GAS_STATION_LAYER_1_TILES
    // Overlapping static entry reached from 0xC4A386.
    case 0xC4A388: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C4/C4A377.asm:15 LDX #VRAM::GAS_STATION_LAYER_1_TILEMAP
    case 0xC4A389: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007800, 3); return true;
    // src/unknown/C4/C4A377.asm:15 LDX #VRAM::GAS_STATION_LAYER_1_TILEMAP
    // Overlapping static entry reached from 0xC4A389.
    case 0xC4A38B: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:16 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC4A38C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:17 JSL SET_BG1_VRAM_LOCATION
    case 0xC4A38D: cpu.execute_instruction<0x22>(0xC08D9E, 4); return true;
    // src/unknown/C4/C4A377.asm:18 LDY #VRAM::GAS_STATION_LAYER_2_TILES
    case 0xC4A391: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // src/unknown/C4/C4A377.asm:18 LDY #VRAM::GAS_STATION_LAYER_2_TILES
    // Overlapping static entry reached from 0xC4A391.
    case 0xC4A393: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:19 LDX #VRAM::GAS_STATION_LAYER_2_TILEMAP
    case 0xC4A394: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007C00, 3); return true;
    // src/unknown/C4/C4A377.asm:19 LDX #VRAM::GAS_STATION_LAYER_2_TILEMAP
    // Overlapping static entry reached from 0xC4A394.
    case 0xC4A396: cpu.execute_instruction<0x7C>(0x0000A9, 3); return true;
    // src/unknown/C4/C4A377.asm:20 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC4A397: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4A377.asm:20 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC4A397.
    case 0xC4A399: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4A377.asm:21 JSL SET_BG2_VRAM_LOCATION
    case 0xC4A39A: cpu.execute_instruction<0x22>(0xC08DDE, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:22 LOADPTR BG_DATA_TABLE + (BATTLEBG_LAYER::UNKNOWN295 * .SIZEOF(bg_layer_config_entry)), @VIRTUAL0A
    case 0xC4A39E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000038, 2); else cpu.execute_instruction<0xA9>(0x00F038, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:22 LOADPTR BG_DATA_TABLE + (BATTLEBG_LAYER::UNKNOWN295 * .SIZEOF(bg_layer_config_entry)), @VIRTUAL0A
    // Overlapping static entry reached from 0xC4A39E.
    case 0xC4A3A0: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A377.asm:22 LOADPTR BG_DATA_TABLE + (BATTLEBG_LAYER::UNKNOWN295 * .SIZEOF(bg_layer_config_entry)), @VIRTUAL0A
    case 0xC4A3A1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A377.asm:22 LOADPTR BG_DATA_TABLE + (BATTLEBG_LAYER::UNKNOWN295 * .SIZEOF(bg_layer_config_entry)), @VIRTUAL0A
    // Overlapping static entry reached from 0xC4A3A0.
    case 0xC4A3A2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:22 LOADPTR BG_DATA_TABLE + (BATTLEBG_LAYER::UNKNOWN295 * .SIZEOF(bg_layer_config_entry)), @VIRTUAL0A
    case 0xC4A3A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:22 LOADPTR BG_DATA_TABLE + (BATTLEBG_LAYER::UNKNOWN295 * .SIZEOF(bg_layer_config_entry)), @VIRTUAL0A
    // Overlapping static entry reached from 0xC4A3A3.
    case 0xC4A3A5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4A377.asm:22 LOADPTR BG_DATA_TABLE + (BATTLEBG_LAYER::UNKNOWN295 * .SIZEOF(bg_layer_config_entry)), @VIRTUAL0A
    case 0xC4A3A6: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:23 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4A3A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:23 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A3A8.
    case 0xC4A3AA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A377.asm:23 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4A3AB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:23 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4A3AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:23 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A3AD.
    case 0xC4A3AF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4A377.asm:23 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4A3B0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A377.asm:24 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4A3B2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A377.asm:24 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4A3B4: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A377.asm:24 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4A3B6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A377.asm:24 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4A3B8: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:25 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC4A3BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x00D7A1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:25 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A3BA.
    case 0xC4A3BC: cpu.execute_instruction<0xD7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A377.asm:25 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC4A3BD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A377.asm:25 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A3BC.
    case 0xC4A3BE: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:25 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC4A3BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:25 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A3BE.
    case 0xC4A3C0: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:25 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A3BF.
    case 0xC4A3C1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4A377.asm:25 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC4A3C2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A377.asm:26 LDA [@VIRTUAL0A]
    case 0xC4A3C4: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4A377.asm:27 AND #$00FF
    case 0xC4A3C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A377.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC4A3C6.
    case 0xC4A3C8: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4A377.asm:28 ASL
    case 0xC4A3C9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:29 ASL
    case 0xC4A3CA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:30 CLC
    case 0xC4A3CB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:31 ADC @VIRTUAL06
    case 0xC4A3CC: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4A377.asm:32 STA @VIRTUAL06
    case 0xC4A3CE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4A377.asm:33 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4A3D0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4A377.asm:33 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A3D0.
    case 0xC4A3D2: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4A377.asm:33 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4A3D3: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4A377.asm:33 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4A3D5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4A377.asm:33 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4A3D6: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4A377.asm:33 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4A3D8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4A377.asm:33 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4A3DA: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A377.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A3DC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A377.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A3DE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A377.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A3E0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A377.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A3E2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A377.asm:35 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4A3E4: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A377.asm:35 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4A3E6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A377.asm:35 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4A3E8: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A377.asm:35 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4A3EA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A377.asm:36 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4A3EC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A377.asm:36 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4A3EE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A377.asm:36 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4A3F0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A377.asm:36 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4A3F2: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4A377.asm:37 JSL DECOMP
    case 0xC4A3F4: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A377.asm:38 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    case 0xC4A3F8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A377.asm:38 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    case 0xC4A3FA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A377.asm:38 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    case 0xC4A3FC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A377.asm:38 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    case 0xC4A3FE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4A377.asm:38 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    case 0xC4A400: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4A377.asm:38 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    // Overlapping static entry reached from 0xC4A400.
    case 0xC4A402: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4A377.asm:38 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    case 0xC4A403: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x002000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4A377.asm:38 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    // Overlapping static entry reached from 0xC4A403.
    case 0xC4A405: cpu.execute_instruction<0x20>(0x0020E2, 3); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4A377.asm:38 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    case 0xC4A406: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C4/C4A377.asm:38 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    case 0xC4A408: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4A377.asm:38 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    case 0xC4A40A: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4A377.asm:38 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    // Overlapping static entry reached from 0xC4A408.
    case 0xC4A40B: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4A377.asm:38 COPY_TO_VRAM1P @VIRTUAL06, VRAM::GAS_STATION_LAYER_2_TILES, $2000, 0
    // Overlapping static entry reached from 0xC4A40B.
    case 0xC4A40D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A7, 2); else cpu.execute_instruction<0xC0>(0x000AA7, 3); return true;
    // src/unknown/C4/C4A377.asm:40 LDA [@VIRTUAL0A]
    case 0xC4A40E: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4A377.asm:40 LDA [@VIRTUAL0A]
    // Overlapping static entry reached from 0xC4A40D.
    case 0xC4A40F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:41 AND #$00FF
    case 0xC4A410: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A377.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC4A410.
    case 0xC4A412: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4A377.asm:42 ASL
    case 0xC4A413: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:43 ASL
    case 0xC4A414: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:44 PHA
    case 0xC4A415: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:45 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    case 0xC4A416: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003D, 2); else cpu.execute_instruction<0xA9>(0x00D93D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:45 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4A416.
    case 0xC4A418: cpu.execute_instruction<0xD9>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A377.asm:45 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    case 0xC4A419: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:45 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    case 0xC4A41B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:45 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4A41B.
    case 0xC4A41D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4A377.asm:45 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL0A
    case 0xC4A41E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4A377.asm:46 PLA
    case 0xC4A420: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:47 CLC
    case 0xC4A421: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:48 ADC @VIRTUAL0A
    case 0xC4A422: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4A377.asm:49 STA @VIRTUAL0A
    case 0xC4A424: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4A377.asm:50 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A426: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4A377.asm:50 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A426.
    case 0xC4A428: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4A377.asm:50 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A429: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4A377.asm:50 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A42B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4A377.asm:50 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A42C: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4A377.asm:50 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A42E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4A377.asm:50 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A430: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A377.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A432: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A377.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A434: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A377.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A436: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A377.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A438: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A377.asm:52 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4A43A: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A377.asm:52 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4A43C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A377.asm:52 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4A43E: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A377.asm:52 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC4A440: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A377.asm:53 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4A442: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A377.asm:53 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4A444: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A377.asm:53 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4A446: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A377.asm:53 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4A448: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4A377.asm:54 JSL DECOMP
    case 0xC4A44A: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/unknown/C4/C4A377.asm:55 LDA #0
    case 0xC4A44E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4A377.asm:55 LDA #0
    // Overlapping static entry reached from 0xC4A44E.
    case 0xC4A450: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4A377.asm:56 STA @LOCAL04
    case 0xC4A451: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4A377.asm:57 BRA @UNKNOWN1
    case 0xC4A453: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C4A377.asm:59 STORE_INT1632 @VIRTUAL06
    case 0xC4A455: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C4A377.asm:59 STORE_INT1632 @VIRTUAL06
    case 0xC4A457: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/C4/C4A377.asm:60 CLC
    case 0xC4A459: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/unknown/C4/C4A377.asm:61 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC4A45A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4A377.asm:61 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC4A45C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000001, 2); else cpu.execute_instruction<0x69>(0x000001, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4A377.asm:61 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A45C.
    case 0xC4A45E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/unknown/C4/C4A377.asm:61 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC4A45F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/unknown/C4/C4A377.asm:61 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC4A461: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4A377.asm:61 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC4A463: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4A377.asm:61 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A463.
    case 0xC4A465: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/unknown/C4/C4A377.asm:61 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC4A466: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A377.asm:62 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A468: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A377.asm:63 LDA [@VIRTUAL06]
    case 0xC4A46A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4A377.asm:64 AND #$00DF
    case 0xC4A46C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000DF, 2); else cpu.execute_instruction<0x29>(0x0009DF, 3); return true;
    // src/unknown/C4/C4A377.asm:65 ORA #$0008
    case 0xC4A46E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000008, 2); else cpu.execute_instruction<0x09>(0x008708, 3); return true;
    // src/unknown/C4/C4A377.asm:65 ORA #$0008
    // Overlapping static entry reached from 0xC4A46C.
    case 0xC4A46F: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:66 STA [@VIRTUAL06]
    case 0xC4A470: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4A377.asm:66 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4A46E.
    case 0xC4A471: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C4A377.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC4A472: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A377.asm:67 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4A471.
    case 0xC4A473: cpu.execute_instruction<0x20>(0x001AA5, 3); return true;
    // src/unknown/C4/C4A377.asm:68 LDA @LOCAL04
    case 0xC4A474: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4A377.asm:69 INC
    case 0xC4A476: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:70 INC
    case 0xC4A477: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:71 STA @LOCAL04
    case 0xC4A478: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4A377.asm:73 CMP #$0800
    case 0xC4A47A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000800, 3); return true;
    // src/unknown/C4/C4A377.asm:73 CMP #$0800
    // Overlapping static entry reached from 0xC4A47A.
    case 0xC4A47C: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:74 BCC @UNKNOWN0
    case 0xC4A47D: cpu.execute_instruction<0x90>(0x0000D6, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:75 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    case 0xC4A47F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:75 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    // Overlapping static entry reached from 0xC4A47F.
    case 0xC4A481: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A377.asm:75 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    case 0xC4A482: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:75 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    case 0xC4A484: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:75 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    // Overlapping static entry reached from 0xC4A484.
    case 0xC4A486: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4A377.asm:75 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    case 0xC4A487: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4A377.asm:75 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    case 0xC4A489: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4A377.asm:75 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    // Overlapping static entry reached from 0xC4A489.
    case 0xC4A48B: cpu.execute_instruction<0x7C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4A377.asm:75 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    case 0xC4A48C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4A377.asm:75 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    // Overlapping static entry reached from 0xC4A48C.
    case 0xC4A48E: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4A377.asm:75 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    case 0xC4A48F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C4/C4A377.asm:75 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    case 0xC4A491: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4A377.asm:75 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    case 0xC4A493: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4A377.asm:75 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    // Overlapping static entry reached from 0xC4A491.
    case 0xC4A494: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4A377.asm:75 COPY_TO_VRAM1 BUFFER, VRAM::GAS_STATION_LAYER_2_TILEMAP, $800, 0
    // Overlapping static entry reached from 0xC4A494.
    case 0xC4A496: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00A1A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:77 LOADPTR BG_DATA_TABLE, @VIRTUAL0A
    case 0xC4A497: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x00DCA1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:77 LOADPTR BG_DATA_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4A496.
    case 0xC4A498: cpu.execute_instruction<0xA1>(0x0000DC, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:77 LOADPTR BG_DATA_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4A497.
    case 0xC4A499: cpu.execute_instruction<0xDC>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A377.asm:77 LOADPTR BG_DATA_TABLE, @VIRTUAL0A
    case 0xC4A49A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:77 LOADPTR BG_DATA_TABLE, @VIRTUAL0A
    case 0xC4A49C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:77 LOADPTR BG_DATA_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4A49C.
    case 0xC4A49E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4A377.asm:77 LOADPTR BG_DATA_TABLE, @VIRTUAL0A
    case 0xC4A49F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4A377.asm:78 LDA #(BATTLEBG_LAYER::UNKNOWN295 * .SIZEOF(bg_layer_config_entry)) + bg_layer_config_entry::graphics
    case 0xC4A4A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000097, 2); else cpu.execute_instruction<0xA9>(0x001397, 3); return true;
    // src/unknown/C4/C4A377.asm:78 LDA #(BATTLEBG_LAYER::UNKNOWN295 * .SIZEOF(bg_layer_config_entry)) + bg_layer_config_entry::graphics
    // Overlapping static entry reached from 0xC4A4A1.
    case 0xC4A4A3: cpu.execute_instruction<0x13>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4A377.asm:79 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4A4A4: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4A377.asm:79 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A4A3.
    case 0xC4A4A5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4A377.asm:79 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4A4A6: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4A377.asm:79 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4A4A8: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4A377.asm:79 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4A4AA: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C4A377.asm:80 CLC
    case 0xC4A4AC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:81 ADC @VIRTUAL06
    case 0xC4A4AD: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4A377.asm:82 STA @VIRTUAL06
    case 0xC4A4AF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4A377.asm:83 STA @LOCAL00
    case 0xC4A4B1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4A377.asm:84 LDA @VIRTUAL06+2
    case 0xC4A4B3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4A377.asm:85 STA @LOCAL00+2
    case 0xC4A4B5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4A377.asm:86 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC4A4B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D4, 2); else cpu.execute_instruction<0xA9>(0x00ADD4, 3); return true;
    // src/unknown/C4/C4A377.asm:86 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC4A4B7.
    case 0xC4A4B9: cpu.execute_instruction<0xAD>(0x00E522, 3); return true;
    // src/unknown/C4/C4A377.asm:87 JSL UNKNOWN_C2CFE5
    case 0xC4A4BA: cpu.execute_instruction<0x22>(0xC2CFE5, 4); return true;
    // src/unknown/C4/C4A377.asm:87 JSL UNKNOWN_C2CFE5
    // Overlapping static entry reached from 0xC4A4B9.
    case 0xC4A4BC: cpu.execute_instruction<0xCF>(0x20A9C2, 4); return true;
    // src/unknown/C4/C4A377.asm:88 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + 76
    case 0xC4A4BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x00AE20, 3); return true;
    // src/unknown/C4/C4A377.asm:88 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + 76
    // Overlapping static entry reached from 0xC4A4BE.
    case 0xC4A4C0: cpu.execute_instruction<0xAE>(0x000285, 3); return true;
    // src/unknown/C4/C4A377.asm:89 STA @VIRTUAL02
    case 0xC4A4C1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4A377.asm:90 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC4A4C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000240, 3); return true;
    // src/unknown/C4/C4A377.asm:90 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC4A4C3.
    case 0xC4A4C5: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/unknown/C4/C4A377.asm:91 LDX @VIRTUAL02
    case 0xC4A4C6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4A377.asm:92 STA __BSS_START__,X
    case 0xC4A4C8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A377.asm:93 LDY #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    case 0xC4A4CB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000E0, 2); else cpu.execute_instruction<0xA0>(0x00ADE0, 3); return true;
    // src/unknown/C4/C4A377.asm:93 LDY #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC4A4CB.
    case 0xC4A4CD: cpu.execute_instruction<0xAD>(0x001884, 3); return true;
    // src/unknown/C4/C4A377.asm:94 STY @LOCAL03
    case 0xC4A4CE: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:95 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL06
    case 0xC4A4D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D9, 2); else cpu.execute_instruction<0xA9>(0x00DAD9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:95 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A4D0.
    case 0xC4A4D2: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A377.asm:95 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL06
    case 0xC4A4D3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:95 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL06
    case 0xC4A4D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A377.asm:95 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A4D5.
    case 0xC4A4D7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4A377.asm:95 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL06
    case 0xC4A4D8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A377.asm:96 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4A4DA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A377.asm:96 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4A4DC: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A377.asm:96 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4A4DE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A377.asm:96 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC4A4E0: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C4/C4A377.asm:97 LDA #(BATTLEBG_LAYER::UNKNOWN295 * .SIZEOF(bg_layer_config_entry)) + bg_layer_config_entry::palette
    case 0xC4A4E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000098, 2); else cpu.execute_instruction<0xA9>(0x001398, 3); return true;
    // src/unknown/C4/C4A377.asm:97 LDA #(BATTLEBG_LAYER::UNKNOWN295 * .SIZEOF(bg_layer_config_entry)) + bg_layer_config_entry::palette
    // Overlapping static entry reached from 0xC4A4E2.
    case 0xC4A4E4: cpu.execute_instruction<0x13>(0x000018, 2); return true;
    // src/unknown/C4/C4A377.asm:98 CLC
    case 0xC4A4E5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:99 ADC @VIRTUAL0A
    case 0xC4A4E6: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4A377.asm:100 STA @VIRTUAL0A
    case 0xC4A4E8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4A377.asm:101 LDA [@VIRTUAL0A]
    case 0xC4A4EA: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4A377.asm:102 AND #$00FF
    case 0xC4A4EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A377.asm:102 AND #$00FF
    // Overlapping static entry reached from 0xC4A4EC.
    case 0xC4A4EE: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4A377.asm:103 ASL
    case 0xC4A4EF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:104 ASL
    case 0xC4A4F0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:105 CLC
    case 0xC4A4F1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:106 ADC @VIRTUAL06
    case 0xC4A4F2: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4A377.asm:107 STA @VIRTUAL06
    case 0xC4A4F4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4A377.asm:108 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4A4F6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4A377.asm:108 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A4F6.
    case 0xC4A4F8: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4A377.asm:108 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4A4F9: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4A377.asm:108 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4A4FB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4A377.asm:108 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4A4FC: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4A377.asm:108 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4A4FE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4A377.asm:108 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4A500: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A377.asm:109 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A502: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A377.asm:109 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A504: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A377.asm:109 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A506: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A377.asm:109 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A508: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4A377.asm:110 LDX #BPP4PALETTE_SIZE
    case 0xC4A50A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C4/C4A377.asm:110 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC4A50A.
    case 0xC4A50C: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/C4/C4A377.asm:111 LDY @LOCAL03
    case 0xC4A50D: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C4/C4A377.asm:112 TYA
    case 0xC4A50F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:113 JSL MEMCPY16
    case 0xC4A510: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C4/C4A377.asm:114 LDA [@VIRTUAL0A]
    case 0xC4A514: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4A377.asm:115 AND #$00FF
    case 0xC4A516: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A377.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC4A516.
    case 0xC4A518: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4A377.asm:116 ASL
    case 0xC4A519: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:117 ASL
    case 0xC4A51A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4A377.asm:118 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC4A51B: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4A377.asm:118 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC4A51D: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4A377.asm:118 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC4A51F: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4A377.asm:118 MOVE_INTX @LOCAL05, @VIRTUAL06
    case 0xC4A521: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4A377.asm:119 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4A523: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4A377.asm:119 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4A525: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4A377.asm:119 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4A527: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4A377.asm:119 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4A529: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4A377.asm:120 CLC
    case 0xC4A52B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:121 ADC @VIRTUAL0A
    case 0xC4A52C: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4A377.asm:122 STA @VIRTUAL0A
    case 0xC4A52E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4A377.asm:123 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A530: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4A377.asm:123 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A530.
    case 0xC4A532: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4A377.asm:123 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A533: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4A377.asm:123 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A535: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4A377.asm:123 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A536: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4A377.asm:123 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A538: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4A377.asm:123 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A53A: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A377.asm:124 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A53C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A377.asm:124 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A53E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A377.asm:124 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A540: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A377.asm:124 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A542: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4A377.asm:125 LDX #BPP4PALETTE_SIZE
    case 0xC4A544: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C4/C4A377.asm:125 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC4A544.
    case 0xC4A546: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4A377.asm:126 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette2
    case 0xC4A547: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00AE00, 3); return true;
    // src/unknown/C4/C4A377.asm:126 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette2
    // Overlapping static entry reached from 0xC4A547.
    case 0xC4A549: cpu.execute_instruction<0xAE>(0x00D222, 3); return true;
    // src/unknown/C4/C4A377.asm:127 JSL MEMCPY16
    case 0xC4A54A: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C4/C4A377.asm:127 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4A549.
    case 0xC4A54C: cpu.execute_instruction<0x8E>(0x00A4C0, 3); return true;
    // src/unknown/C4/C4A377.asm:128 LDY @LOCAL03
    case 0xC4A54E: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C4/C4A377.asm:128 LDY @LOCAL03
    // Overlapping static entry reached from 0xC4A54C.
    case 0xC4A54F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A377.asm:129 TYA
    case 0xC4A550: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4A377.asm:130 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4A551: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4A377.asm:130 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4A553: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4A377.asm:130 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4A554: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4A377.asm:130 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4A556: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4A377.asm:130 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4A557: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4A377.asm:130 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4A559: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C4A377.asm:131 REP #PROC_FLAGS::ACCUM8
    case 0xC4A55B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A377.asm:132 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A55D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A377.asm:132 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A55F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A377.asm:132 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A561: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A377.asm:132 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A563: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4A377.asm:133 LDX #BPP4PALETTE_SIZE
    case 0xC4A565: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C4/C4A377.asm:133 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC4A565.
    case 0xC4A567: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4A377.asm:134 STX @LOCAL02
    case 0xC4A568: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C4/C4A377.asm:135 LDX @VIRTUAL02
    case 0xC4A56A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4A377.asm:136 LDA __BSS_START__,X
    case 0xC4A56C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A377.asm:137 LDX @LOCAL02
    case 0xC4A56F: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C4/C4A377.asm:138 JSL MEMCPY16
    case 0xC4A571: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C4/C4A377.asm:139 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A575: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A377.asm:140 LDA #2
    case 0xC4A577: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x008D02, 3); return true;
    // src/unknown/C4/C4A377.asm:141 STA LOADED_BG_DATA_LAYER1
    case 0xC4A579: cpu.execute_instruction<0x8D>(0x00ADD4, 3); return true;
    // src/unknown/C4/C4A377.asm:141 STA LOADED_BG_DATA_LAYER1
    // Overlapping static entry reached from 0xC4A577.
    case 0xC4A57A: cpu.execute_instruction<0xD4>(0x0000AD, 2); return true;
    // src/unknown/C4/C4A377.asm:142 LDX #0
    case 0xC4A57C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4A377.asm:142 LDX #0
    // Overlapping static entry reached from 0xC4A57C.
    case 0xC4A57E: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C4A377.asm:143 REP #PROC_FLAGS::ACCUM8
    case 0xC4A57F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A377.asm:144 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC4A581: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D4, 2); else cpu.execute_instruction<0xA9>(0x00ADD4, 3); return true;
    // src/unknown/C4/C4A377.asm:144 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC4A581.
    case 0xC4A583: cpu.execute_instruction<0xAD>(0x002D22, 3); return true;
    // src/unknown/C4/C4A377.asm:145 JSL GENERATE_BATTLEBG_FRAME
    case 0xC4A584: cpu.execute_instruction<0x22>(0xC2C92D, 4); return true;
    // src/unknown/C4/C4A377.asm:145 JSL GENERATE_BATTLEBG_FRAME
    // Overlapping static entry reached from 0xC4A583.
    case 0xC4A586: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C2, 2); else cpu.execute_instruction<0xC9>(0x00E2C2, 3); return true;
    // src/unknown/C4/C4A377.asm:146 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A588: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A377.asm:146 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4A586.
    case 0xC4A589: cpu.execute_instruction<0x20>(0x004B9C, 3); return true;
    // src/unknown/C4/C4A377.asm:147 STZ LOADED_BG_DATA_LAYER2
    case 0xC4A58A: cpu.execute_instruction<0x9C>(0x00AE4B, 3); return true;
    // src/unknown/C4/C4A377.asm:147 STZ LOADED_BG_DATA_LAYER2
    // Overlapping static entry reached from 0xC4A589.
    case 0xC4A58C: cpu.execute_instruction<0xAE>(0x0020C2, 3); return true;
    // src/unknown/C4/C4A377.asm:148 REP #PROC_FLAGS::ACCUM8
    case 0xC4A58D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4A377.asm:149 END_C_FUNCTION
    case 0xC4A58F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4A377.asm:149 END_C_FUNCTION
    case 0xC4A590: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4A67E.asm (unresolved).
bool execute_unresolved_c4_c4a67e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4A67E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4A67E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4A67E.asm:9 END_STACK_VARS
    case 0xC4A680: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4A67E.asm:9 END_STACK_VARS
    case 0xC4A681: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4A67E.asm:9 END_STACK_VARS
    case 0xC4A682: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4A67E.asm:9 END_STACK_VARS
    case 0xC4A683: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EF, 2); else cpu.execute_instruction<0x69>(0x00FFEF, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4A67E.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4A683.
    case 0xC4A685: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4A67E.asm:9 END_STACK_VARS
    case 0xC4A686: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4A67E.asm:9 END_STACK_VARS
    case 0xC4A687: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:11 STX @OPTIONS
    case 0xC4A688: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4A67E.asm:11 STX @OPTIONS
    // Overlapping static entry reached from 0xC4A685.
    case 0xC4A689: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C4A67E.asm:12 STA @VIRTUAL04
    case 0xC4A68A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4A67E.asm:13 LDA @OPTIONS
    case 0xC4A68C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4A67E.asm:14 AND #$0002
    case 0xC4A68E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/unknown/C4/C4A67E.asm:14 AND #$0002
    // Overlapping static entry reached from 0xC4A68E.
    case 0xC4A690: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A67E.asm:15 BEQ @UNKNOWN0
    case 0xC4A691: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C4/C4A67E.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A693: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:17 LDA #1
    case 0xC4A695: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C4/C4A67E.asm:18 STA SWIRL_INVERT_ENABLED
    case 0xC4A697: cpu.execute_instruction<0x8D>(0x00AEC6, 3); return true;
    // src/unknown/C4/C4A67E.asm:18 STA SWIRL_INVERT_ENABLED
    // Overlapping static entry reached from 0xC4A695.
    case 0xC4A698: cpu.execute_instruction<0xC6>(0x0000AE, 2); return true;
    // src/unknown/C4/C4A67E.asm:19 BRA @UNKNOWN1
    case 0xC4A69A: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C4/C4A67E.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A69C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:22 STZ SWIRL_INVERT_ENABLED
    case 0xC4A69E: cpu.execute_instruction<0x9C>(0x00AEC6, 3); return true;
    // src/unknown/C4/C4A67E.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC4A6A1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:25 LDA @OPTIONS
    case 0xC4A6A3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4A67E.asm:26 AND #$0001
    case 0xC4A6A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C4/C4A67E.asm:26 AND #$0001
    // Overlapping static entry reached from 0xC4A6A5.
    case 0xC4A6A7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A67E.asm:27 BEQ @UNKNOWN2
    case 0xC4A6A8: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C4/C4A67E.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A6AA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:29 LDA #1
    case 0xC4A6AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C4/C4A67E.asm:30 STA SWIRL_REVERSED
    case 0xC4A6AE: cpu.execute_instruction<0x8D>(0x00AEC7, 3); return true;
    // src/unknown/C4/C4A67E.asm:30 STA SWIRL_REVERSED
    // Overlapping static entry reached from 0xC4A6AC.
    case 0xC4A6AF: cpu.execute_instruction<0xC7>(0x0000AE, 2); return true;
    // src/unknown/C4/C4A67E.asm:31 BRA @UNKNOWN3
    case 0xC4A6B1: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C4/C4A67E.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A6B3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:34 STZ SWIRL_REVERSED
    case 0xC4A6B5: cpu.execute_instruction<0x9C>(0x00AEC7, 3); return true;
    // src/unknown/C4/C4A67E.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC4A6B8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:37 LDA @OPTIONS
    case 0xC4A6BA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4A67E.asm:38 AND #$0004
    case 0xC4A6BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/unknown/C4/C4A67E.asm:38 AND #$0004
    // Overlapping static entry reached from 0xC4A6BC.
    case 0xC4A6BE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A67E.asm:39 BEQ @UNKNOWN4
    case 0xC4A6BF: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C4/C4A67E.asm:40 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A6C1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:41 LDA #32
    case 0xC4A6C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x008D20, 3); return true;
    // src/unknown/C4/C4A67E.asm:42 STA SWIRL_MASK_SETTINGS
    case 0xC4A6C5: cpu.execute_instruction<0x8D>(0x00AEC8, 3); return true;
    // src/unknown/C4/C4A67E.asm:42 STA SWIRL_MASK_SETTINGS
    // Overlapping static entry reached from 0xC4A6C3.
    case 0xC4A6C6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:42 STA SWIRL_MASK_SETTINGS
    // Overlapping static entry reached from 0xC4A6C6.
    case 0xC4A6C7: cpu.execute_instruction<0xAE>(0x000780, 3); return true;
    // src/unknown/C4/C4A67E.asm:43 BRA @UNKNOWN5
    case 0xC4A6C8: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C4/C4A67E.asm:45 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A6CA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:46 LDA #31
    case 0xC4A6CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x008D1F, 3); return true;
    // src/unknown/C4/C4A67E.asm:47 STA SWIRL_MASK_SETTINGS
    case 0xC4A6CE: cpu.execute_instruction<0x8D>(0x00AEC8, 3); return true;
    // src/unknown/C4/C4A67E.asm:47 STA SWIRL_MASK_SETTINGS
    // Overlapping static entry reached from 0xC4A6CC.
    case 0xC4A6CF: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:47 STA SWIRL_MASK_SETTINGS
    // Overlapping static entry reached from 0xC4A6CF.
    case 0xC4A6D0: cpu.execute_instruction<0xAE>(0x0001A9, 3); return true;
    // src/unknown/C4/C4A67E.asm:49 LDA #1
    case 0xC4A6D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C4/C4A67E.asm:50 STA FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC4A6D3: cpu.execute_instruction<0x8D>(0x00AEC2, 3); return true;
    // src/unknown/C4/C4A67E.asm:50 STA FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    // Overlapping static entry reached from 0xC4A6D1.
    case 0xC4A6D4: cpu.execute_instruction<0xC2>(0x0000AE, 2); return true;
    // src/unknown/C4/C4A67E.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC4A6D6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A67E.asm:52 LOADPTR SWIRL_PRIMARY_TABLE, @VIRTUAL06
    case 0xC4A6D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000041, 2); else cpu.execute_instruction<0xA9>(0x00DD41, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A67E.asm:52 LOADPTR SWIRL_PRIMARY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A6D8.
    case 0xC4A6DA: cpu.execute_instruction<0xDD>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A67E.asm:52 LOADPTR SWIRL_PRIMARY_TABLE, @VIRTUAL06
    case 0xC4A6DB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A67E.asm:52 LOADPTR SWIRL_PRIMARY_TABLE, @VIRTUAL06
    case 0xC4A6DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0000CE, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A67E.asm:52 LOADPTR SWIRL_PRIMARY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A6DD.
    case 0xC4A6DF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4A67E.asm:52 LOADPTR SWIRL_PRIMARY_TABLE, @VIRTUAL06
    case 0xC4A6E0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A67E.asm:53 LDA @VIRTUAL04
    case 0xC4A6E2: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4A67E.asm:54 ASL
    case 0xC4A6E4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:55 ASL
    case 0xC4A6E5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:56 STA @LOCAL01
    case 0xC4A6E6: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4A67E.asm:57 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4A6E8: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4A67E.asm:57 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4A6EA: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4A67E.asm:57 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4A6EC: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4A67E.asm:57 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4A6EE: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4A67E.asm:58 CLC
    case 0xC4A6F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:59 ADC @VIRTUAL0A
    case 0xC4A6F1: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4A67E.asm:60 STA @VIRTUAL0A
    case 0xC4A6F3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4A67E.asm:61 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A6F5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:62 LDA [@VIRTUAL0A]
    case 0xC4A6F7: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4A67E.asm:63 STA FRAMES_UNTIL_NEXT_SWIRL_FRAME
    case 0xC4A6F9: cpu.execute_instruction<0x8D>(0x00AEC3, 3); return true;
    // src/unknown/C4/C4A67E.asm:64 LDY #.LOWORD(SWIRL_FRAMES_LEFT)
    case 0xC4A6FC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000C4, 2); else cpu.execute_instruction<0xA0>(0x00AEC4, 3); return true;
    // src/unknown/C4/C4A67E.asm:64 LDY #.LOWORD(SWIRL_FRAMES_LEFT)
    // Overlapping static entry reached from 0xC4A6FC.
    case 0xC4A6FE: cpu.execute_instruction<0xAE>(0x0020C2, 3); return true;
    // src/unknown/C4/C4A67E.asm:65 REP #PROC_FLAGS::ACCUM8
    case 0xC4A6FF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:66 LDA @LOCAL01
    case 0xC4A701: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/unknown/C4/C4A67E.asm:67 INC
    case 0xC4A703: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:68 INC
    case 0xC4A704: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4A67E.asm:69 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4A705: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4A67E.asm:69 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4A707: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4A67E.asm:69 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4A709: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4A67E.asm:69 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4A70B: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4A67E.asm:70 CLC
    case 0xC4A70D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:71 ADC @VIRTUAL0A
    case 0xC4A70E: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4A67E.asm:72 STA @VIRTUAL0A
    case 0xC4A710: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4A67E.asm:73 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A712: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:74 LDA [@VIRTUAL0A]
    case 0xC4A714: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4A67E.asm:75 STA __BSS_START__,Y
    case 0xC4A716: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C4A67E.asm:76 LDX #.LOWORD(SWIRL_HDMA_TABLE_ID)
    case 0xC4A719: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C5, 2); else cpu.execute_instruction<0xA2>(0x00AEC5, 3); return true;
    // src/unknown/C4/C4A67E.asm:76 LDX #.LOWORD(SWIRL_HDMA_TABLE_ID)
    // Overlapping static entry reached from 0xC4A719.
    case 0xC4A71B: cpu.execute_instruction<0xAE>(0x0020C2, 3); return true;
    // src/unknown/C4/C4A67E.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC4A71C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:78 LDA @LOCAL01
    case 0xC4A71E: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/unknown/C4/C4A67E.asm:79 INC
    case 0xC4A720: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:80 CLC
    case 0xC4A721: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:81 ADC @VIRTUAL06
    case 0xC4A722: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4A67E.asm:82 STA @VIRTUAL06
    case 0xC4A724: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4A67E.asm:83 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A726: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:84 LDA [@VIRTUAL06]
    case 0xC4A728: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4A67E.asm:85 STA @LOCAL00
    case 0xC4A72A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4A67E.asm:86 STA __BSS_START__,X
    case 0xC4A72C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A67E.asm:87 REP #PROC_FLAGS::ACCUM8
    case 0xC4A72F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:88 LDA SWIRL_REVERSED
    case 0xC4A731: cpu.execute_instruction<0xAD>(0x00AEC7, 3); return true;
    // src/unknown/C4/C4A67E.asm:89 AND #$00FF
    case 0xC4A734: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A67E.asm:89 AND #$00FF
    // Overlapping static entry reached from 0xC4A734.
    case 0xC4A736: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A67E.asm:90 BEQ @UNKNOWN6
    case 0xC4A737: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C4/C4A67E.asm:91 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A739: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:92 LDA __BSS_START__,Y
    case 0xC4A73B: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C4A67E.asm:93 STA @VIRTUAL00
    case 0xC4A73E: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4A67E.asm:94 LDA @LOCAL00
    case 0xC4A740: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4A67E.asm:95 CLC
    case 0xC4A742: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:96 ADC @VIRTUAL00
    case 0xC4A743: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C4/C4A67E.asm:97 STA __BSS_START__,X
    case 0xC4A745: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A67E.asm:99 LDY #.LOWORD(LOADED_OVAL_WINDOW)
    case 0xC4A748: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000CC, 2); else cpu.execute_instruction<0xA0>(0x00AECC, 3); return true;
    // src/unknown/C4/C4A67E.asm:99 LDY #.LOWORD(LOADED_OVAL_WINDOW)
    // Overlapping static entry reached from 0xC4A748.
    case 0xC4A74A: cpu.execute_instruction<0xAE>(0x0020C2, 3); return true;
    // src/unknown/C4/C4A67E.asm:100 REP #PROC_FLAGS::ACCUM8
    case 0xC4A74B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4A67E.asm:101 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC4A74D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4A67E.asm:101 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A74D.
    case 0xC4A74F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C4/C4A67E.asm:101 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC4A750: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4A67E.asm:101 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC4A752: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4A67E.asm:101 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A752.
    case 0xC4A754: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C4/C4A67E.asm:101 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC4A755: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C4/C4A67E.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4A757: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C4/C4A67E.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4A759: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C4/C4A67E.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4A75C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C4/C4A67E.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4A75E: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C4/C4A67E.asm:103 LDA @VIRTUAL04
    case 0xC4A761: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4A67E.asm:104 BNE @UNKNOWN7
    case 0xC4A763: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A67E.asm:105 LOADPTR UNKNOWN_C4A5CE, @VIRTUAL06
    case 0xC4A765: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x00A5CE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A67E.asm:105 LOADPTR UNKNOWN_C4A5CE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A765.
    case 0xC4A767: cpu.execute_instruction<0xA5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A67E.asm:105 LOADPTR UNKNOWN_C4A5CE, @VIRTUAL06
    case 0xC4A768: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A67E.asm:105 LOADPTR UNKNOWN_C4A5CE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A767.
    case 0xC4A769: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A67E.asm:105 LOADPTR UNKNOWN_C4A5CE, @VIRTUAL06
    case 0xC4A76A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A67E.asm:105 LOADPTR UNKNOWN_C4A5CE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A769.
    case 0xC4A76B: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A67E.asm:105 LOADPTR UNKNOWN_C4A5CE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A76A.
    case 0xC4A76C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4A67E.asm:105 LOADPTR UNKNOWN_C4A5CE, @VIRTUAL06
    case 0xC4A76D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C4/C4A67E.asm:106 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4A76F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C4/C4A67E.asm:106 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4A771: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C4/C4A67E.asm:106 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4A774: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C4/C4A67E.asm:106 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4A776: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C4/C4A67E.asm:108 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A779: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:109 STZ SWIRL_HDMA_CHANNEL_OFFSET
    case 0xC4A77B: cpu.execute_instruction<0x9C>(0x00AEC9, 3); return true;
    // src/unknown/C4/C4A67E.asm:110 STZ SWIRL_LENGTH_PADDING
    case 0xC4A77E: cpu.execute_instruction<0x9C>(0x00AECA, 3); return true;
    // src/unknown/C4/C4A67E.asm:111 LDA #1
    case 0xC4A781: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C4/C4A67E.asm:112 STA SWIRL_AUTO_RESTORE
    case 0xC4A783: cpu.execute_instruction<0x8D>(0x00AECB, 3); return true;
    // src/unknown/C4/C4A67E.asm:112 STA SWIRL_AUTO_RESTORE
    // Overlapping static entry reached from 0xC4A781.
    case 0xC4A784: cpu.execute_instruction<0xCB>(0x000000, 1); return true;
    // src/unknown/C4/C4A67E.asm:112 STA SWIRL_AUTO_RESTORE
    // Overlapping static entry reached from 0xC4A784.
    case 0xC4A785: cpu.execute_instruction<0xAE>(0x0020C2, 3); return true;
    // src/unknown/C4/C4A67E.asm:113 REP #PROC_FLAGS::ACCUM8
    case 0xC4A786: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:114 LDA @OPTIONS
    case 0xC4A788: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4A67E.asm:115 AND #$0080
    case 0xC4A78A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/C4/C4A67E.asm:115 AND #$0080
    // Overlapping static entry reached from 0xC4A78A.
    case 0xC4A78C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A67E.asm:116 BEQ @UNKNOWN8
    case 0xC4A78D: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C4/C4A67E.asm:117 LDA @VIRTUAL04
    case 0xC4A78F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4A67E.asm:118 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A791: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:119 STA SWIRL_NEXT_SWIRL
    case 0xC4A793: cpu.execute_instruction<0x8D>(0x00AEE4, 3); return true;
    // src/unknown/C4/C4A67E.asm:120 LDA #4
    case 0xC4A796: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x008D04, 3); return true;
    // src/unknown/C4/C4A67E.asm:121 STA FRAMES_UNTIL_NEXT_SWIRL_FRAME
    case 0xC4A798: cpu.execute_instruction<0x8D>(0x00AEC3, 3); return true;
    // src/unknown/C4/C4A67E.asm:121 STA FRAMES_UNTIL_NEXT_SWIRL_FRAME
    // Overlapping static entry reached from 0xC4A796.
    case 0xC4A799: cpu.execute_instruction<0xC3>(0x0000AE, 2); return true;
    // src/unknown/C4/C4A67E.asm:122 STZ SWIRL_REPEAT_SPEED
    case 0xC4A79B: cpu.execute_instruction<0x9C>(0x00AEE5, 3); return true;
    // src/unknown/C4/C4A67E.asm:123 LDA #8
    case 0xC4A79E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x008D08, 3); return true;
    // src/unknown/C4/C4A67E.asm:124 STA SWIRL_REPEATS_UNTIL_SPEED_UP
    case 0xC4A7A0: cpu.execute_instruction<0x8D>(0x00AEE6, 3); return true;
    // src/unknown/C4/C4A67E.asm:124 STA SWIRL_REPEATS_UNTIL_SPEED_UP
    // Overlapping static entry reached from 0xC4A79E.
    case 0xC4A7A1: cpu.execute_instruction<0xE6>(0x0000AE, 2); return true;
    // src/unknown/C4/C4A67E.asm:125 BRA @UNKNOWN9
    case 0xC4A7A3: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C4/C4A67E.asm:127 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A7A5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A67E.asm:128 STZ SWIRL_NEXT_SWIRL
    case 0xC4A7A7: cpu.execute_instruction<0x9C>(0x00AEE4, 3); return true;
    // src/unknown/C4/C4A67E.asm:130 JSL UNKNOWN_C0B0AA
    case 0xC4A7AA: cpu.execute_instruction<0x22>(0xC0B0AA, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4A67E.asm:131 END_C_FUNCTION
    case 0xC4A7AE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4A67E.asm:131 END_C_FUNCTION
    case 0xC4A7AF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
