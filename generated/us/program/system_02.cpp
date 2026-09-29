// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/system/saves/calc_save_block_checksum.asm (source_named).
bool execute_system_saves_calc_save_block_checksum_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:3 BEGIN_C_FUNCTION
    case 0xEF0734: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:8 END_STACK_VARS
    case 0xEF0736: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:8 END_STACK_VARS
    case 0xEF0737: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:8 END_STACK_VARS
    case 0xEF0738: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:8 END_STACK_VARS
    case 0xEF0739: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0739.
    case 0xEF073B: cpu.execute_instruction<0xFF>(0xA0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:8 END_STACK_VARS
    case 0xEF073C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:8 END_STACK_VARS
    case 0xEF073D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum.asm:9 LDY #.SIZEOF(save_block)
    case 0xEF073E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000500, 3); return true;
    // src/system/saves/calc_save_block_checksum.asm:9 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xEF073B.
    case 0xEF073F: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:9 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xEF073E.
    case 0xEF0740: cpu.execute_instruction<0x05>(0x000022, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:10 JSL MULT16
    case 0xEF0741: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/system/saves/calc_save_block_checksum.asm:10 JSL MULT16
    // Overlapping static entry reached from 0xEF0740.
    case 0xEF0742: cpu.execute_instruction<0x32>(0x000090, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:10 JSL MULT16
    // Overlapping static entry reached from 0xEF0742.
    case 0xEF0744: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000685, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xEF0745: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:11 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xEF0744.
    case 0xEF0746: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xEF0747: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:11 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xEF0746.
    case 0xEF0748: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum.asm:12 CLC
    case 0xEF0749: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xEF074A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xEF074C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x006020, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    // Overlapping static entry reached from 0xEF074C.
    case 0xEF074E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xEF074F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xEF0751: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xEF0753: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0753.
    case 0xEF0755: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xEF0756: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:14 LDX #0
    case 0xEF0758: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/saves/calc_save_block_checksum.asm:14 LDX #0
    // Overlapping static entry reached from 0xEF0758.
    case 0xEF075A: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:15 TXA
    case 0xEF075B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum.asm:16 STA @LOCAL00
    case 0xEF075C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:17 BRA @UNKNOWN1
    case 0xEF075E: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:19 LDA [@VIRTUAL06]
    case 0xEF0760: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:20 AND #$00FF
    case 0xEF0762: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/saves/calc_save_block_checksum.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xEF0762.
    case 0xEF0764: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:21 STA @VIRTUAL02
    case 0xEF0765: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:22 TXA
    case 0xEF0767: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum.asm:23 CLC
    case 0xEF0768: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum.asm:24 ADC @VIRTUAL02
    case 0xEF0769: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:25 TAX
    case 0xEF076B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum.asm:26 INC @VIRTUAL06
    case 0xEF076C: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:27 LDA @LOCAL00
    case 0xEF076E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:28 INC
    case 0xEF0770: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum.asm:29 STA @LOCAL00
    case 0xEF0771: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:31 CMP #.SIZEOF(save_block) - .SIZEOF(save_header)
    case 0xEF0773: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E0, 2); else cpu.execute_instruction<0xC9>(0x0004E0, 3); return true;
    // src/system/saves/calc_save_block_checksum.asm:31 CMP #.SIZEOF(save_block) - .SIZEOF(save_header)
    // Overlapping static entry reached from 0xEF0773.
    case 0xEF0775: cpu.execute_instruction<0x04>(0x000090, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:32 BCC @UNKNOWN0
    case 0xEF0776: cpu.execute_instruction<0x90>(0x0000E8, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:32 BCC @UNKNOWN0
    // Overlapping static entry reached from 0xEF0775.
    case 0xEF0777: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum.asm:33 TXA
    case 0xEF0778: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:34 END_C_FUNCTION
    case 0xEF0779: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:34 END_C_FUNCTION
    case 0xEF077A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/calc_save_block_checksum_complement.asm (source_named).
bool execute_system_saves_calc_save_block_checksum_complement_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:3 BEGIN_C_FUNCTION
    case 0xEF077B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:8 END_STACK_VARS
    case 0xEF077D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:8 END_STACK_VARS
    case 0xEF077E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:8 END_STACK_VARS
    case 0xEF077F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:8 END_STACK_VARS
    case 0xEF0780: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0780.
    case 0xEF0782: cpu.execute_instruction<0xFF>(0xA0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:8 END_STACK_VARS
    case 0xEF0783: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:8 END_STACK_VARS
    case 0xEF0784: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:9 LDY #.SIZEOF(save_block)
    case 0xEF0785: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000500, 3); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:9 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xEF0782.
    case 0xEF0786: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:9 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xEF0785.
    case 0xEF0787: cpu.execute_instruction<0x05>(0x000022, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:10 JSL MULT16
    case 0xEF0788: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:10 JSL MULT16
    // Overlapping static entry reached from 0xEF0787.
    case 0xEF0789: cpu.execute_instruction<0x32>(0x000090, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:10 JSL MULT16
    // Overlapping static entry reached from 0xEF0789.
    case 0xEF078B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000685, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xEF078C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:11 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xEF078B.
    case 0xEF078D: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xEF078E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:11 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xEF078D.
    case 0xEF078F: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:12 CLC
    case 0xEF0790: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xEF0791: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xEF0793: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x006020, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0793.
    case 0xEF0795: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xEF0796: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xEF0798: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xEF079A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    // Overlapping static entry reached from 0xEF079A.
    case 0xEF079C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xEF079D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:14 LDX #0
    case 0xEF079F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:14 LDX #0
    // Overlapping static entry reached from 0xEF079F.
    case 0xEF07A1: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:15 TXA
    case 0xEF07A2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:16 STA @LOCAL00
    case 0xEF07A3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:17 BRA @UNKNOWN1
    case 0xEF07A5: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:19 LDA [@VIRTUAL06]
    case 0xEF07A7: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:20 STA @VIRTUAL02
    case 0xEF07A9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:21 TXA
    case 0xEF07AB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:22 EOR @VIRTUAL02
    case 0xEF07AC: cpu.execute_instruction<0x45>(0x000002, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:23 TAX
    case 0xEF07AE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:24 INC @VIRTUAL06
    case 0xEF07AF: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:25 INC @VIRTUAL06
    case 0xEF07B1: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:26 LDA @LOCAL00
    case 0xEF07B3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:27 INC
    case 0xEF07B5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:28 STA @LOCAL00
    case 0xEF07B6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:30 CMP #(.SIZEOF(save_block) - .SIZEOF(save_header)) / 2
    case 0xEF07B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000070, 2); else cpu.execute_instruction<0xC9>(0x000270, 3); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:30 CMP #(.SIZEOF(save_block) - .SIZEOF(save_header)) / 2
    // Overlapping static entry reached from 0xEF07B8.
    case 0xEF07BA: cpu.execute_instruction<0x02>(0x000090, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:31 BCC @UNKNOWN0
    case 0xEF07BB: cpu.execute_instruction<0x90>(0x0000EA, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:32 TXA
    case 0xEF07BD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:33 END_C_FUNCTION
    case 0xEF07BE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:33 END_C_FUNCTION
    case 0xEF07BF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/check_all_blocks_signature.asm (source_named).
bool execute_system_saves_check_all_blocks_signature_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/check_all_blocks_signature.asm:3 BEGIN_C_FUNCTION
    case 0xEF0683: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/check_all_blocks_signature.asm:6 END_STACK_VARS
    case 0xEF0685: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/check_all_blocks_signature.asm:6 END_STACK_VARS
    case 0xEF0686: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/check_all_blocks_signature.asm:6 END_STACK_VARS
    case 0xEF0687: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/check_all_blocks_signature.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0687.
    case 0xEF0689: cpu.execute_instruction<0xFF>(0x00A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/check_all_blocks_signature.asm:6 END_STACK_VARS
    case 0xEF068A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/saves/check_all_blocks_signature.asm:7 LDX #0
    case 0xEF068B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/saves/check_all_blocks_signature.asm:7 LDX #0
    // Overlapping static entry reached from 0xEF068B.
    case 0xEF068D: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/system/saves/check_all_blocks_signature.asm:8 STX @LOCAL00
    case 0xEF068E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/saves/check_all_blocks_signature.asm:9 BRA @UNKNOWN1
    case 0xEF0690: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/system/saves/check_all_blocks_signature.asm:11 TXA
    case 0xEF0692: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/check_all_blocks_signature.asm:12 JSR CHECK_BLOCK_SIGNATURE
    case 0xEF0693: cpu.execute_instruction<0x20>(0x000630, 3); return true;
    // src/system/saves/check_all_blocks_signature.asm:13 LDX @LOCAL00
    case 0xEF0696: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/saves/check_all_blocks_signature.asm:14 INX
    case 0xEF0698: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/saves/check_all_blocks_signature.asm:15 STX @LOCAL00
    case 0xEF0699: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/saves/check_all_blocks_signature.asm:17 CPX #SAVE_COUNT*SAVE_COPY_COUNT
    case 0xEF069B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000006, 2); else cpu.execute_instruction<0xE0>(0x000006, 3); return true;
    // src/system/saves/check_all_blocks_signature.asm:17 CPX #SAVE_COUNT*SAVE_COPY_COUNT
    // Overlapping static entry reached from 0xEF069B.
    case 0xEF069D: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/saves/check_all_blocks_signature.asm:18 BCC @UNKNOWN0
    case 0xEF069E: cpu.execute_instruction<0x90>(0x0000F2, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/check_all_blocks_signature.asm:19 END_C_FUNCTION
    case 0xEF06A0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/saves/check_all_blocks_signature.asm:19 END_C_FUNCTION
    case 0xEF06A1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/check_block_signature.asm (source_named).
bool execute_system_saves_check_block_signature_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/check_block_signature.asm:3 BEGIN_C_FUNCTION
    case 0xEF0630: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/check_block_signature.asm:10 END_STACK_VARS
    case 0xEF0632: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/saves/check_block_signature.asm:10 END_STACK_VARS
    case 0xEF0633: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/check_block_signature.asm:10 END_STACK_VARS
    case 0xEF0634: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/check_block_signature.asm:10 END_STACK_VARS
    case 0xEF0635: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/check_block_signature.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0635.
    case 0xEF0637: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/check_block_signature.asm:10 END_STACK_VARS
    case 0xEF0638: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/saves/check_block_signature.asm:10 END_STACK_VARS
    case 0xEF0639: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/saves/check_block_signature.asm:11 TAX
    case 0xEF063A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/saves/check_block_signature.asm:12 STX @LOCAL02
    case 0xEF063B: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/system/saves/check_block_signature.asm:13 LDY #.SIZEOF(save_block)
    case 0xEF063D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000500, 3); return true;
    // src/system/saves/check_block_signature.asm:13 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xEF063D.
    case 0xEF063F: cpu.execute_instruction<0x05>(0x00008A, 2); return true;
    // src/system/saves/check_block_signature.asm:14 TXA
    case 0xEF0640: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/check_block_signature.asm:15 JSL MULT16
    case 0xEF0641: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/check_block_signature.asm:16 STORE_INT1632 @VIRTUAL06
    case 0xEF0645: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/saves/check_block_signature.asm:16 STORE_INT1632 @VIRTUAL06
    case 0xEF0647: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/system/saves/check_block_signature.asm:17 CLC
    case 0xEF0649: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/system/saves/check_block_signature.asm:18 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, @VIRTUAL06
    case 0xEF064A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/check_block_signature.asm:18 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, @VIRTUAL06
    case 0xEF064C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x006000, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/check_block_signature.asm:18 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF064C.
    case 0xEF064E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/system/saves/check_block_signature.asm:18 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, @VIRTUAL06
    case 0xEF064F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/system/saves/check_block_signature.asm:18 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, @VIRTUAL06
    case 0xEF0651: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/check_block_signature.asm:18 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, @VIRTUAL06
    case 0xEF0653: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/check_block_signature.asm:18 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0653.
    case 0xEF0655: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/system/saves/check_block_signature.asm:18 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, @VIRTUAL06
    case 0xEF0656: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/check_block_signature.asm:19 LOADPTR SRAM_SIGNATURE, @LOCAL00
    case 0xEF0658: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000091, 2); else cpu.execute_instruction<0xA9>(0x000591, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/check_block_signature.asm:19 LOADPTR SRAM_SIGNATURE, @LOCAL00
    // Overlapping static entry reached from 0xEF0658.
    case 0xEF065A: cpu.execute_instruction<0x05>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/saves/check_block_signature.asm:19 LOADPTR SRAM_SIGNATURE, @LOCAL00
    case 0xEF065B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/saves/check_block_signature.asm:19 LOADPTR SRAM_SIGNATURE, @LOCAL00
    // Overlapping static entry reached from 0xEF065A.
    case 0xEF065C: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/check_block_signature.asm:19 LOADPTR SRAM_SIGNATURE, @LOCAL00
    case 0xEF065D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/check_block_signature.asm:19 LOADPTR SRAM_SIGNATURE, @LOCAL00
    // Overlapping static entry reached from 0xEF065D.
    case 0xEF065F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/saves/check_block_signature.asm:19 LOADPTR SRAM_SIGNATURE, @LOCAL00
    case 0xEF0660: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/check_block_signature.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF0662: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/check_block_signature.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF0664: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/check_block_signature.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF0666: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/check_block_signature.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF0668: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/saves/check_block_signature.asm:21 JSL STRCMP
    case 0xEF066A: cpu.execute_instruction<0x22>(0xC08F2F, 4); return true;
    // src/system/saves/check_block_signature.asm:22 CMP #0
    case 0xEF066E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/system/saves/check_block_signature.asm:22 CMP #0
    // Overlapping static entry reached from 0xEF066E.
    case 0xEF0670: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/saves/check_block_signature.asm:23 BEQ @UNKNOWN0
    case 0xEF0671: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/system/saves/check_block_signature.asm:24 LDX @LOCAL02
    case 0xEF0673: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/system/saves/check_block_signature.asm:25 TXA
    case 0xEF0675: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/check_block_signature.asm:26 JSR ERASE_SAVE_BLOCK
    case 0xEF0676: cpu.execute_instruction<0x20>(0x0005A9, 3); return true;
    // src/system/saves/check_block_signature.asm:27 LDA #TRUE
    case 0xEF0679: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/saves/check_block_signature.asm:27 LDA #TRUE
    // Overlapping static entry reached from 0xEF0679.
    case 0xEF067B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/system/saves/check_block_signature.asm:28 BRA @UNKNOWN1
    case 0xEF067C: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/system/saves/check_block_signature.asm:30 LDA #FALSE
    case 0xEF067E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/saves/check_block_signature.asm:30 LDA #FALSE
    // Overlapping static entry reached from 0xEF067E.
    case 0xEF0680: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/check_block_signature.asm:32 END_C_FUNCTION
    case 0xEF0681: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/saves/check_block_signature.asm:32 END_C_FUNCTION
    case 0xEF0682: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/check_save_corruption.asm (source_named).
bool execute_system_saves_check_save_corruption_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/check_save_corruption.asm:3 BEGIN_C_FUNCTION
    case 0xEF0825: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/check_save_corruption.asm:8 END_STACK_VARS
    case 0xEF0827: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/saves/check_save_corruption.asm:8 END_STACK_VARS
    case 0xEF0828: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/check_save_corruption.asm:8 END_STACK_VARS
    case 0xEF0829: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/check_save_corruption.asm:8 END_STACK_VARS
    case 0xEF082A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/check_save_corruption.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xEF082A.
    case 0xEF082C: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/check_save_corruption.asm:8 END_STACK_VARS
    case 0xEF082D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/saves/check_save_corruption.asm:8 END_STACK_VARS
    case 0xEF082E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:9 TAY
    case 0xEF082F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:10 STY @LOCAL01
    case 0xEF0830: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/system/saves/check_save_corruption.asm:11 TYA
    case 0xEF0832: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:12 ASL
    case 0xEF0833: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:13 STA @VIRTUAL02
    case 0xEF0834: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/saves/check_save_corruption.asm:14 JSR VALIDATE_SAVE_BLOCK_CHECKSUMS
    case 0xEF0836: cpu.execute_instruction<0x20>(0x0007C0, 3); return true;
    // src/system/saves/check_save_corruption.asm:15 CMP #FALSE
    case 0xEF0839: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/system/saves/check_save_corruption.asm:15 CMP #FALSE
    // Overlapping static entry reached from 0xEF0839.
    case 0xEF083B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/saves/check_save_corruption.asm:16 BEQ @UNKNOWN1
    case 0xEF083C: cpu.execute_instruction<0xF0>(0x000031, 2); return true;
    // src/system/saves/check_save_corruption.asm:17 LDA @VIRTUAL02
    case 0xEF083E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/saves/check_save_corruption.asm:18 JSR ERASE_SAVE_BLOCK
    case 0xEF0840: cpu.execute_instruction<0x20>(0x0005A9, 3); return true;
    // src/system/saves/check_save_corruption.asm:19 LDX @VIRTUAL02
    case 0xEF0843: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/saves/check_save_corruption.asm:20 INX
    case 0xEF0845: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:21 STX @LOCAL00
    case 0xEF0846: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/saves/check_save_corruption.asm:22 TXA
    case 0xEF0848: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:23 JSR VALIDATE_SAVE_BLOCK_CHECKSUMS
    case 0xEF0849: cpu.execute_instruction<0x20>(0x0007C0, 3); return true;
    // src/system/saves/check_save_corruption.asm:24 CMP #FALSE
    case 0xEF084C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/system/saves/check_save_corruption.asm:24 CMP #FALSE
    // Overlapping static entry reached from 0xEF084C.
    case 0xEF084E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/saves/check_save_corruption.asm:25 BEQ @UNKNOWN0
    case 0xEF084F: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/system/saves/check_save_corruption.asm:26 LDX @LOCAL00
    case 0xEF0851: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/saves/check_save_corruption.asm:27 TXA
    case 0xEF0853: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:28 JSR ERASE_SAVE_BLOCK
    case 0xEF0854: cpu.execute_instruction<0x20>(0x0005A9, 3); return true;
    // src/system/saves/check_save_corruption.asm:29 LDY @LOCAL01
    case 0xEF0857: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/system/saves/check_save_corruption.asm:30 TYX
    case 0xEF0859: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xEF085A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/saves/check_save_corruption.asm:32 LDA f:UNKNOWN_EF05A6,X
    case 0xEF085C: cpu.execute_instruction<0xBF>(0xEF05A6, 4); return true;
    // src/system/saves/check_save_corruption.asm:33 ORA CORRUPTION_CHECK_RESULTS
    case 0xEF0860: cpu.execute_instruction<0x0D>(0x009F79, 3); return true;
    // src/system/saves/check_save_corruption.asm:34 STA CORRUPTION_CHECK_RESULTS
    case 0xEF0863: cpu.execute_instruction<0x8D>(0x009F79, 3); return true;
    // src/system/saves/check_save_corruption.asm:35 BRA @UNKNOWN2
    case 0xEF0866: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/system/saves/check_save_corruption.asm:37 LDX @LOCAL00
    case 0xEF0868: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/saves/check_save_corruption.asm:38 LDA @VIRTUAL02
    case 0xEF086A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/saves/check_save_corruption.asm:39 JSR COPY_SAVE_BLOCK
    case 0xEF086C: cpu.execute_instruction<0x20>(0x0006A2, 3); return true;
    // src/system/saves/check_save_corruption.asm:41 LDY @VIRTUAL02
    case 0xEF086F: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/system/saves/check_save_corruption.asm:42 INY
    case 0xEF0871: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:43 STY @LOCAL01
    case 0xEF0872: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/system/saves/check_save_corruption.asm:44 TYA
    case 0xEF0874: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:45 JSR VALIDATE_SAVE_BLOCK_CHECKSUMS
    case 0xEF0875: cpu.execute_instruction<0x20>(0x0007C0, 3); return true;
    // src/system/saves/check_save_corruption.asm:47 CMP #FALSE
    case 0xEF0878: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/system/saves/check_save_corruption.asm:47 CMP #FALSE
    // Overlapping static entry reached from 0xEF0878.
    case 0xEF087A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/saves/check_save_corruption.asm:48 BEQ @UNKNOWN2
    case 0xEF087B: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/system/saves/check_save_corruption.asm:49 LDY @LOCAL01
    case 0xEF087D: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/system/saves/check_save_corruption.asm:50 TYA
    case 0xEF087F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:51 JSR ERASE_SAVE_BLOCK
    case 0xEF0880: cpu.execute_instruction<0x20>(0x0005A9, 3); return true;
    // src/system/saves/check_save_corruption.asm:52 LDX @VIRTUAL02
    case 0xEF0883: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/saves/check_save_corruption.asm:53 LDY @LOCAL01
    case 0xEF0885: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/system/saves/check_save_corruption.asm:54 TYA
    case 0xEF0887: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/saves/check_save_corruption.asm:55 JSR COPY_SAVE_BLOCK
    case 0xEF0888: cpu.execute_instruction<0x20>(0x0006A2, 3); return true;
    // src/system/saves/check_save_corruption.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0xEF088B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/check_save_corruption.asm:58 END_C_FUNCTION
    case 0xEF088D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/saves/check_save_corruption.asm:58 END_C_FUNCTION
    case 0xEF088E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/check_sram_integrity.asm (source_named).
bool execute_system_saves_check_sram_integrity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/check_sram_integrity.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF0B9E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/check_sram_integrity.asm:7 END_STACK_VARS
    case 0xEF0BA0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/check_sram_integrity.asm:7 END_STACK_VARS
    case 0xEF0BA1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/check_sram_integrity.asm:7 END_STACK_VARS
    case 0xEF0BA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/check_sram_integrity.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0BA2.
    case 0xEF0BA4: cpu.execute_instruction<0xFF>(0x93A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/check_sram_integrity.asm:7 END_STACK_VARS
    case 0xEF0BA5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/saves/check_sram_integrity.asm:8 LDA #SRAM_VERSION
    case 0xEF0BA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000093, 2); else cpu.execute_instruction<0xA9>(0x000493, 3); return true;
    // src/system/saves/check_sram_integrity.asm:8 LDA #SRAM_VERSION
    // Overlapping static entry reached from 0xEF0BA6.
    case 0xEF0BA8: cpu.execute_instruction<0x04>(0x00008D, 2); return true;
    // src/system/saves/check_sram_integrity.asm:9 STA SRAM_VERSION_LOADED
    case 0xEF0BA9: cpu.execute_instruction<0x8D>(0x009F77, 3); return true;
    // src/system/saves/check_sram_integrity.asm:9 STA SRAM_VERSION_LOADED
    // Overlapping static entry reached from 0xEF0BA8.
    case 0xEF0BAA: cpu.execute_instruction<0x77>(0x00009F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/check_sram_integrity.asm:10 LOADPTR SAVE_BASE + $1FFE, @VIRTUAL06
    case 0xEF0BAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x007FFE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/check_sram_integrity.asm:10 LOADPTR SAVE_BASE + $1FFE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0BAC.
    case 0xEF0BAE: cpu.execute_instruction<0x7F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/saves/check_sram_integrity.asm:10 LOADPTR SAVE_BASE + $1FFE, @VIRTUAL06
    case 0xEF0BAF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/check_sram_integrity.asm:10 LOADPTR SAVE_BASE + $1FFE, @VIRTUAL06
    case 0xEF0BB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x000030, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/check_sram_integrity.asm:10 LOADPTR SAVE_BASE + $1FFE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0BAE.
    case 0xEF0BB2: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/check_sram_integrity.asm:10 LOADPTR SAVE_BASE + $1FFE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0BB1.
    case 0xEF0BB3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/saves/check_sram_integrity.asm:10 LOADPTR SAVE_BASE + $1FFE, @VIRTUAL06
    case 0xEF0BB4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/saves/check_sram_integrity.asm:11 LDA [@VIRTUAL06]
    case 0xEF0BB6: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/saves/check_sram_integrity.asm:12 CMP #SRAM_VERSION
    case 0xEF0BB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000093, 2); else cpu.execute_instruction<0xC9>(0x000493, 3); return true;
    // src/system/saves/check_sram_integrity.asm:12 CMP #SRAM_VERSION
    // Overlapping static entry reached from 0xEF0BB8.
    case 0xEF0BBA: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/system/saves/check_sram_integrity.asm:13 BEQ @GOOD_SRAM
    case 0xEF0BBB: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/system/saves/check_sram_integrity.asm:13 BEQ @GOOD_SRAM
    // Overlapping static entry reached from 0xEF0BBA.
    case 0xEF0BBC: cpu.execute_instruction<0x15>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/check_sram_integrity.asm:14 LOADPTR SAVE_BASE, @LOCAL00
    case 0xEF0BBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x006000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/check_sram_integrity.asm:14 LOADPTR SAVE_BASE, @LOCAL00
    // Overlapping static entry reached from 0xEF0BBC.
    case 0xEF0BBE: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/check_sram_integrity.asm:14 LOADPTR SAVE_BASE, @LOCAL00
    // Overlapping static entry reached from 0xEF0BBD.
    case 0xEF0BBF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/saves/check_sram_integrity.asm:14 LOADPTR SAVE_BASE, @LOCAL00
    case 0xEF0BC0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/check_sram_integrity.asm:14 LOADPTR SAVE_BASE, @LOCAL00
    case 0xEF0BC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x000030, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/check_sram_integrity.asm:14 LOADPTR SAVE_BASE, @LOCAL00
    // Overlapping static entry reached from 0xEF0BC2.
    case 0xEF0BC4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/saves/check_sram_integrity.asm:14 LOADPTR SAVE_BASE, @LOCAL00
    case 0xEF0BC5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/saves/check_sram_integrity.asm:15 LDX #$2000
    case 0xEF0BC7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x002000, 3); return true;
    // src/system/saves/check_sram_integrity.asm:15 LDX #$2000
    // Overlapping static entry reached from 0xEF0BC7.
    case 0xEF0BC9: cpu.execute_instruction<0x20>(0x0020E2, 3); return true;
    // src/system/saves/check_sram_integrity.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xEF0BCA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/saves/check_sram_integrity.asm:17 LDA #0
    case 0xEF0BCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/saves/check_sram_integrity.asm:18 JSL MEMSET24
    case 0xEF0BCE: cpu.execute_instruction<0x22>(0xC08F15, 4); return true;
    // src/system/saves/check_sram_integrity.asm:18 JSL MEMSET24
    // Overlapping static entry reached from 0xEF0BCC.
    case 0xEF0BCF: cpu.execute_instruction<0x15>(0x00008F, 2); return true;
    // src/system/saves/check_sram_integrity.asm:18 JSL MEMSET24
    // Overlapping static entry reached from 0xEF0BCF.
    case 0xEF0BD1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x008320, 3); return true;
    // src/system/saves/check_sram_integrity.asm:20 JSR CHECK_ALL_BLOCKS_SIGNATURE
    case 0xEF0BD2: cpu.execute_instruction<0x20>(0x000683, 3); return true;
    // src/system/saves/check_sram_integrity.asm:20 JSR CHECK_ALL_BLOCKS_SIGNATURE
    // Overlapping static entry reached from 0xEF0BD1.
    case 0xEF0BD3: cpu.execute_instruction<0x83>(0x000006, 2); return true;
    // src/system/saves/check_sram_integrity.asm:20 JSR CHECK_ALL_BLOCKS_SIGNATURE
    // Overlapping static entry reached from 0xEF0BD1.
    case 0xEF0BD4: cpu.execute_instruction<0x06>(0x0000E2, 2); return true;
    // src/system/saves/check_sram_integrity.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xEF0BD5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/saves/check_sram_integrity.asm:21 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xEF0BD4.
    case 0xEF0BD6: cpu.execute_instruction<0x20>(0x00799C, 3); return true;
    // src/system/saves/check_sram_integrity.asm:22 STZ CORRUPTION_CHECK_RESULTS
    case 0xEF0BD7: cpu.execute_instruction<0x9C>(0x009F79, 3); return true;
    // src/system/saves/check_sram_integrity.asm:22 STZ CORRUPTION_CHECK_RESULTS
    // Overlapping static entry reached from 0xEF0BD6.
    case 0xEF0BD9: cpu.execute_instruction<0x9F>(0x0000A2, 4); return true;
    // src/system/saves/check_sram_integrity.asm:23 LDX #0
    case 0xEF0BDA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/saves/check_sram_integrity.asm:23 LDX #0
    // Overlapping static entry reached from 0xEF0BDA.
    case 0xEF0BDC: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/system/saves/check_sram_integrity.asm:24 STX @LOCAL01
    case 0xEF0BDD: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/system/saves/check_sram_integrity.asm:25 BRA @LOOP_ENTRY
    case 0xEF0BDF: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/system/saves/check_sram_integrity.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xEF0BE1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/saves/check_sram_integrity.asm:28 TXA
    case 0xEF0BE3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/check_sram_integrity.asm:29 JSR CHECK_SAVE_CORRUPTION
    case 0xEF0BE4: cpu.execute_instruction<0x20>(0x000825, 3); return true;
    // src/system/saves/check_sram_integrity.asm:30 LDX @LOCAL01
    case 0xEF0BE7: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/system/saves/check_sram_integrity.asm:31 INX
    case 0xEF0BE9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/saves/check_sram_integrity.asm:32 STX @LOCAL01
    case 0xEF0BEA: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/system/saves/check_sram_integrity.asm:34 CPX #3
    case 0xEF0BEC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/system/saves/check_sram_integrity.asm:34 CPX #3
    // Overlapping static entry reached from 0xEF0BEC.
    case 0xEF0BEE: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/saves/check_sram_integrity.asm:35 BCC @LOOP_BEGINNING
    case 0xEF0BEF: cpu.execute_instruction<0x90>(0x0000F0, 2); return true;
    // src/system/saves/check_sram_integrity.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xEF0BF1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/saves/check_sram_integrity.asm:37 LDA SRAM_VERSION_LOADED
    case 0xEF0BF3: cpu.execute_instruction<0xAD>(0x009F77, 3); return true;
    // src/system/saves/check_sram_integrity.asm:38 STA [@VIRTUAL06]
    case 0xEF0BF6: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/check_sram_integrity.asm:39 END_C_FUNCTION
    case 0xEF0BF8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/saves/check_sram_integrity.asm:39 END_C_FUNCTION
    case 0xEF0BF9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/copy_save_block.asm (source_named).
bool execute_system_saves_copy_save_block_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/copy_save_block.asm:3 BEGIN_C_FUNCTION
    case 0xEF06A2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/copy_save_block.asm:13 END_STACK_VARS
    case 0xEF06A4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/saves/copy_save_block.asm:13 END_STACK_VARS
    case 0xEF06A5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/copy_save_block.asm:13 END_STACK_VARS
    case 0xEF06A6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/copy_save_block.asm:13 END_STACK_VARS
    case 0xEF06A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/copy_save_block.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xEF06A7.
    case 0xEF06A9: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/copy_save_block.asm:13 END_STACK_VARS
    case 0xEF06AA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/saves/copy_save_block.asm:13 END_STACK_VARS
    case 0xEF06AB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/saves/copy_save_block.asm:14 STA @LOCAL04
    case 0xEF06AC: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/system/saves/copy_save_block.asm:14 STA @LOCAL04
    // Overlapping static entry reached from 0xEF06A9.
    case 0xEF06AD: cpu.execute_instruction<0x1E>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/copy_save_block.asm:15 LOADPTR SAVE_BASE, @VIRTUAL06
    case 0xEF06AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x006000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/copy_save_block.asm:15 LOADPTR SAVE_BASE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF06AE.
    case 0xEF06B0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/saves/copy_save_block.asm:15 LOADPTR SAVE_BASE, @VIRTUAL06
    case 0xEF06B1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/copy_save_block.asm:15 LOADPTR SAVE_BASE, @VIRTUAL06
    case 0xEF06B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x000030, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/copy_save_block.asm:15 LOADPTR SAVE_BASE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF06B3.
    case 0xEF06B5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/saves/copy_save_block.asm:15 LOADPTR SAVE_BASE, @VIRTUAL06
    case 0xEF06B6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/saves/copy_save_block.asm:16 LDY #.SIZEOF(save_block)
    case 0xEF06B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000500, 3); return true;
    // src/system/saves/copy_save_block.asm:16 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xEF06B8.
    case 0xEF06BA: cpu.execute_instruction<0x05>(0x0000A5, 2); return true;
    // src/system/saves/copy_save_block.asm:17 LDA @LOCAL04
    case 0xEF06BB: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/system/saves/copy_save_block.asm:17 LDA @LOCAL04
    // Overlapping static entry reached from 0xEF06BA.
    case 0xEF06BC: cpu.execute_instruction<0x1E>(0x003222, 3); return true;
    // src/system/saves/copy_save_block.asm:18 JSL MULT16
    case 0xEF06BD: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/system/saves/copy_save_block.asm:18 JSL MULT16
    // Overlapping static entry reached from 0xEF06BC.
    case 0xEF06BF: cpu.execute_instruction<0x90>(0x0000C0, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/copy_save_block.asm:19 STORE_INT1632 @VIRTUAL0A
    case 0xEF06C1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/saves/copy_save_block.asm:19 STORE_INT1632 @VIRTUAL0A
    case 0xEF06C3: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/system/saves/copy_save_block.asm:20 CLC
    case 0xEF06C5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/system/saves/copy_save_block.asm:21 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xEF06C6: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/system/saves/copy_save_block.asm:21 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xEF06C8: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/system/saves/copy_save_block.asm:21 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xEF06CA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/system/saves/copy_save_block.asm:21 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xEF06CC: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/system/saves/copy_save_block.asm:21 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xEF06CE: cpu.execute_instruction<0x65>(0x000008, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/system/saves/copy_save_block.asm:21 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xEF06D0: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/copy_save_block.asm:22 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xEF06D2: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/copy_save_block.asm:22 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xEF06D4: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/copy_save_block.asm:22 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xEF06D6: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/copy_save_block.asm:22 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xEF06D8: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/copy_save_block.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xEF06DA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/copy_save_block.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xEF06DC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/copy_save_block.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xEF06DE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/copy_save_block.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xEF06E0: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/system/saves/copy_save_block.asm:24 LDY #.SIZEOF(save_block)
    case 0xEF06E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000500, 3); return true;
    // src/system/saves/copy_save_block.asm:24 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xEF06E2.
    case 0xEF06E4: cpu.execute_instruction<0x05>(0x00008A, 2); return true;
    // src/system/saves/copy_save_block.asm:25 TXA
    case 0xEF06E5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/copy_save_block.asm:26 JSL MULT16
    case 0xEF06E6: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/copy_save_block.asm:27 STORE_INT1632 @VIRTUAL06
    case 0xEF06EA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/saves/copy_save_block.asm:27 STORE_INT1632 @VIRTUAL06
    case 0xEF06EC: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/system/saves/copy_save_block.asm:28 CLC
    case 0xEF06EE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/system/saves/copy_save_block.asm:29 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEF06EF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/system/saves/copy_save_block.asm:29 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEF06F1: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/system/saves/copy_save_block.asm:29 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEF06F3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/system/saves/copy_save_block.asm:29 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEF06F5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/system/saves/copy_save_block.asm:29 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEF06F7: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/system/saves/copy_save_block.asm:29 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEF06F9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/copy_save_block.asm:34 MOVE_INT @VIRTUAL06, @LOCALEB
    case 0xEF06FB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/copy_save_block.asm:34 MOVE_INT @VIRTUAL06, @LOCALEB
    case 0xEF06FD: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/copy_save_block.asm:34 MOVE_INT @VIRTUAL06, @LOCALEB
    case 0xEF06FF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/copy_save_block.asm:34 MOVE_INT @VIRTUAL06, @LOCALEB
    case 0xEF0701: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/copy_save_block.asm:35 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xEF0703: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/copy_save_block.asm:35 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xEF0705: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/copy_save_block.asm:35 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xEF0707: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/copy_save_block.asm:35 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xEF0709: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/copy_save_block.asm:36 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xEF070B: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/copy_save_block.asm:36 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xEF070D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/copy_save_block.asm:36 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xEF070F: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/copy_save_block.asm:36 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xEF0711: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/copy_save_block.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEF0713: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/copy_save_block.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEF0715: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/copy_save_block.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEF0717: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/copy_save_block.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEF0719: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/copy_save_block.asm:38 MOVE_INT @LOCALEB, @VIRTUAL06
    case 0xEF071B: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/copy_save_block.asm:38 MOVE_INT @LOCALEB, @VIRTUAL06
    case 0xEF071D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/copy_save_block.asm:38 MOVE_INT @LOCALEB, @VIRTUAL06
    case 0xEF071F: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/copy_save_block.asm:38 MOVE_INT @LOCALEB, @VIRTUAL06
    case 0xEF0721: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/copy_save_block.asm:40 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF0723: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/copy_save_block.asm:40 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF0725: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/copy_save_block.asm:40 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF0727: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/copy_save_block.asm:40 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF0729: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/saves/copy_save_block.asm:41 LDA #.SIZEOF(save_block)
    case 0xEF072B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000500, 3); return true;
    // src/system/saves/copy_save_block.asm:41 LDA #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xEF072B.
    case 0xEF072D: cpu.execute_instruction<0x05>(0x000022, 2); return true;
    // src/system/saves/copy_save_block.asm:42 JSL MEMCPY24
    case 0xEF072E: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/system/saves/copy_save_block.asm:42 JSL MEMCPY24
    // Overlapping static entry reached from 0xEF072D.
    case 0xEF072F: cpu.execute_instruction<0xED>(0x00C08E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/copy_save_block.asm:43 END_C_FUNCTION
    case 0xEF0732: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/saves/copy_save_block.asm:43 END_C_FUNCTION
    case 0xEF0733: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/copy_save_slot.asm (source_named).
bool execute_system_saves_copy_save_slot_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/copy_save_slot.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF0C15: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/copy_save_slot.asm:9 END_STACK_VARS
    case 0xEF0C17: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/saves/copy_save_slot.asm:9 END_STACK_VARS
    case 0xEF0C18: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/copy_save_slot.asm:9 END_STACK_VARS
    case 0xEF0C19: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/copy_save_slot.asm:9 END_STACK_VARS
    case 0xEF0C1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/copy_save_slot.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0C1A.
    case 0xEF0C1C: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/copy_save_slot.asm:9 END_STACK_VARS
    case 0xEF0C1D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/saves/copy_save_slot.asm:9 END_STACK_VARS
    case 0xEF0C1E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:10 STA @LOCAL01
    case 0xEF0C1F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/saves/copy_save_slot.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xEF0C1C.
    case 0xEF0C20: cpu.execute_instruction<0x10>(0x00008A, 2); return true;
    // src/system/saves/copy_save_slot.asm:11 TXA
    case 0xEF0C21: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:12 ASL
    case 0xEF0C22: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:13 TAY
    case 0xEF0C23: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:14 STY @LOCAL00
    case 0xEF0C24: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/system/saves/copy_save_slot.asm:15 LDA @LOCAL01
    case 0xEF0C26: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/system/saves/copy_save_slot.asm:16 ASL
    case 0xEF0C28: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:17 STA @VIRTUAL02
    case 0xEF0C29: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/saves/copy_save_slot.asm:18 TYX
    case 0xEF0C2B: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:19 LDA @VIRTUAL02
    case 0xEF0C2C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/saves/copy_save_slot.asm:20 JSR COPY_SAVE_BLOCK
    case 0xEF0C2E: cpu.execute_instruction<0x20>(0x0006A2, 3); return true;
    // src/system/saves/copy_save_slot.asm:21 LDY @LOCAL00
    case 0xEF0C31: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/system/saves/copy_save_slot.asm:22 TYX
    case 0xEF0C33: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:23 INX
    case 0xEF0C34: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:24 LDA @VIRTUAL02
    case 0xEF0C35: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/saves/copy_save_slot.asm:25 INC
    case 0xEF0C37: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/saves/copy_save_slot.asm:26 JSR COPY_SAVE_BLOCK
    case 0xEF0C38: cpu.execute_instruction<0x20>(0x0006A2, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/copy_save_slot.asm:27 END_C_FUNCTION
    case 0xEF0C3B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/saves/copy_save_slot.asm:27 END_C_FUNCTION
    case 0xEF0C3C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/corruption_check.asm (source_named).
bool execute_system_saves_corruption_check_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/corruption_check.asm:3 BEGIN_C_FUNCTION
    case 0xC1ECDC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/corruption_check.asm:7 END_STACK_VARS
    case 0xC1ECDE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/corruption_check.asm:7 END_STACK_VARS
    case 0xC1ECDF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/corruption_check.asm:7 END_STACK_VARS
    case 0xC1ECE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/corruption_check.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1ECE0.
    case 0xC1ECE2: cpu.execute_instruction<0xFF>(0x79AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/corruption_check.asm:7 END_STACK_VARS
    case 0xC1ECE3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/saves/corruption_check.asm:8 LDA CORRUPTION_CHECK_RESULTS
    case 0xC1ECE4: cpu.execute_instruction<0xAD>(0x009F79, 3); return true;
    // src/system/saves/corruption_check.asm:8 LDA CORRUPTION_CHECK_RESULTS
    // Overlapping static entry reached from 0xC1ECE2.
    case 0xC1ECE6: cpu.execute_instruction<0x9F>(0x00FF29, 4); return true;
    // src/system/saves/corruption_check.asm:9 AND #$00FF
    case 0xC1ECE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/saves/corruption_check.asm:9 AND #$00FF
    // Overlapping static entry reached from 0xC1ECE7.
    case 0xC1ECE9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/saves/corruption_check.asm:10 BEQ @RETURN
    case 0xC1ECEA: cpu.execute_instruction<0xF0>(0x00006D, 2); return true;
    // src/system/saves/corruption_check.asm:11 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC1ECEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x009C8A, 3); return true;
    // src/system/saves/corruption_check.asm:11 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC1ECEC.
    case 0xC1ECEE: cpu.execute_instruction<0x9C>(0x002022, 3); return true;
    // src/system/saves/corruption_check.asm:12 JSL UNKNOWN_C20A20
    case 0xC1ECEF: cpu.execute_instruction<0x22>(0xC20A20, 4); return true;
    // src/system/saves/corruption_check.asm:12 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC1ECEE.
    case 0xC1ECF1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/saves/corruption_check.asm:12 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC1ECF1.
    case 0xC1ECF2: cpu.execute_instruction<0xC2>(0x0000A9, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/system/saves/corruption_check.asm:13 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2F
    case 0xC1ECF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00002F, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/system/saves/corruption_check.asm:13 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2F
    // Overlapping static entry reached from 0xC1ECF2.
    case 0xC1ECF4: cpu.execute_instruction<0x2F>(0xEE2000, 4); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/system/saves/corruption_check.asm:13 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2F
    // Overlapping static entry reached from 0xC1ECF3.
    case 0xC1ECF5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/system/saves/corruption_check.asm:13 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2F
    case 0xC1ECF6: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/system/saves/corruption_check.asm:13 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN2F
    // Overlapping static entry reached from 0xC1ECF4.
    case 0xC1ECF8: cpu.execute_instruction<0x04>(0x0000A2, 2); return true;
    // src/system/saves/corruption_check.asm:14 LDX #0
    case 0xC1ECF9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/saves/corruption_check.asm:14 LDX #0
    // Overlapping static entry reached from 0xC1ECF8.
    case 0xC1ECFA: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/system/saves/corruption_check.asm:14 LDX #0
    // Overlapping static entry reached from 0xC1ECF9.
    case 0xC1ECFB: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/system/saves/corruption_check.asm:15 STX @LOCAL01
    case 0xC1ECFC: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/system/saves/corruption_check.asm:16 BRA @LOOP_ENTRY
    case 0xC1ECFE: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/system/saves/corruption_check.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ED00: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/saves/corruption_check.asm:19 LDA f:UNKNOWN_EF05A6,X
    case 0xC1ED02: cpu.execute_instruction<0xBF>(0xEF05A6, 4); return true;
    // src/system/saves/corruption_check.asm:20 AND CORRUPTION_CHECK_RESULTS
    case 0xC1ED06: cpu.execute_instruction<0x2D>(0x009F79, 3); return true;
    // src/system/saves/corruption_check.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC1ED09: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/saves/corruption_check.asm:22 AND #$00FF
    case 0xC1ED0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/saves/corruption_check.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC1ED0B.
    case 0xC1ED0D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/saves/corruption_check.asm:23 BEQ @SIGNATURE_MATCH
    case 0xC1ED0E: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/system/saves/corruption_check.asm:24 TXA
    case 0xC1ED10: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/corruption_check.asm:25 INC
    case 0xC1ED11: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/corruption_check.asm:26 STORE_INT1632S @VIRTUAL06
    case 0xC1ED12: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/saves/corruption_check.asm:26 STORE_INT1632S @VIRTUAL06
    case 0xC1ED14: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/system/saves/corruption_check.asm:26 STORE_INT1632S @VIRTUAL06
    case 0xC1ED16: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/system/saves/corruption_check.asm:26 STORE_INT1632S @VIRTUAL06
    case 0xC1ED18: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/corruption_check.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ED1A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/corruption_check.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ED1C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/corruption_check.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ED1E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/corruption_check.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ED20: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/saves/corruption_check.asm:28 JSR UNKNOWN_C1AD0A
    case 0xC1ED22: cpu.execute_instruction<0x20>(0x00AD0A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/corruption_check.asm:29 DISPLAY_TEXT_PTR MSG_SYS_SRAM_CRASH
    case 0xC1ED25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000073, 2); else cpu.execute_instruction<0xA9>(0x00C973, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/corruption_check.asm:29 DISPLAY_TEXT_PTR MSG_SYS_SRAM_CRASH
    // Overlapping static entry reached from 0xC1ED25.
    case 0xC1ED27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000085, 2); else cpu.execute_instruction<0xC9>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/saves/corruption_check.asm:29 DISPLAY_TEXT_PTR MSG_SYS_SRAM_CRASH
    case 0xC1ED28: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/saves/corruption_check.asm:29 DISPLAY_TEXT_PTR MSG_SYS_SRAM_CRASH
    // Overlapping static entry reached from 0xC1ED27.
    case 0xC1ED29: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/corruption_check.asm:29 DISPLAY_TEXT_PTR MSG_SYS_SRAM_CRASH
    case 0xC1ED2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/corruption_check.asm:29 DISPLAY_TEXT_PTR MSG_SYS_SRAM_CRASH
    // Overlapping static entry reached from 0xC1ED2A.
    case 0xC1ED2C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/saves/corruption_check.asm:29 DISPLAY_TEXT_PTR MSG_SYS_SRAM_CRASH
    case 0xC1ED2D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/system/saves/corruption_check.asm:29 DISPLAY_TEXT_PTR MSG_SYS_SRAM_CRASH
    case 0xC1ED2F: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/system/saves/corruption_check.asm:29 DISPLAY_TEXT_PTR MSG_SYS_SRAM_CRASH
    // Overlapping static entry reached from 0xC1EDA3.
    case 0xC1ED32: cpu.execute_instruction<0xC1>(0x0000A6, 2); return true;
    // src/system/saves/corruption_check.asm:31 LDX @LOCAL01
    case 0xC1ED33: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/system/saves/corruption_check.asm:31 LDX @LOCAL01
    // Overlapping static entry reached from 0xC1ED32.
    case 0xC1ED34: cpu.execute_instruction<0x12>(0x0000E8, 2); return true;
    // src/system/saves/corruption_check.asm:32 INX
    case 0xC1ED35: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/saves/corruption_check.asm:33 STX @LOCAL01
    case 0xC1ED36: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/system/saves/corruption_check.asm:35 STX @VIRTUAL02
    case 0xC1ED38: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/system/saves/corruption_check.asm:36 LDA #3
    case 0xC1ED3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/system/saves/corruption_check.asm:36 LDA #3
    // Overlapping static entry reached from 0xC1ED3A.
    case 0xC1ED3C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/system/saves/corruption_check.asm:37 CLC
    case 0xC1ED3D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/saves/corruption_check.asm:38 SBC @VIRTUAL02
    case 0xC1ED3E: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/system/saves/corruption_check.asm:39 BRANCHGTS @LOOP_BEGIN
    case 0xC1ED40: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/system/saves/corruption_check.asm:39 BRANCHGTS @LOOP_BEGIN
    case 0xC1ED42: cpu.execute_instruction<0x10>(0x0000BC, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/system/saves/corruption_check.asm:39 BRANCHGTS @LOOP_BEGIN
    case 0xC1ED44: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/system/saves/corruption_check.asm:39 BRANCHGTS @LOOP_BEGIN
    case 0xC1ED46: cpu.execute_instruction<0x30>(0x0000B8, 2); return true;
    // src/system/saves/corruption_check.asm:40 JSR CLOSE_FOCUS_WINDOW
    case 0xC1ED48: cpu.execute_instruction<0x20>(0x000084, 3); return true;
    // src/system/saves/corruption_check.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ED4B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/saves/corruption_check.asm:42 STZ CORRUPTION_CHECK_RESULTS
    case 0xC1ED4D: cpu.execute_instruction<0x9C>(0x009F79, 3); return true;
    // src/system/saves/corruption_check.asm:43 REP #PROC_FLAGS::ACCUM8
    case 0xC1ED50: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/saves/corruption_check.asm:44 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC1ED52: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x009C8A, 3); return true;
    // src/system/saves/corruption_check.asm:44 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC1ED52.
    case 0xC1ED54: cpu.execute_instruction<0x9C>(0x00BC22, 3); return true;
    // src/system/saves/corruption_check.asm:45 JSL UNKNOWN_C20ABC
    case 0xC1ED55: cpu.execute_instruction<0x22>(0xC20ABC, 4); return true;
    // src/system/saves/corruption_check.asm:45 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC1ED54.
    case 0xC1ED57: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/saves/corruption_check.asm:45 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC1ED57.
    case 0xC1ED58: cpu.execute_instruction<0xC2>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/corruption_check.asm:47 END_C_FUNCTION
    case 0xC1ED59: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/saves/corruption_check.asm:47 END_C_FUNCTION
    case 0xC1ED5A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/erase_save_block.asm (source_named).
bool execute_system_saves_erase_save_block_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/saves/erase_save_block.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEF05A9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/erase_save_block.asm:12 END_STACK_VARS
    case 0xEF05AB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/saves/erase_save_block.asm:12 END_STACK_VARS
    case 0xEF05AC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/erase_save_block.asm:12 END_STACK_VARS
    case 0xEF05AD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/erase_save_block.asm:12 END_STACK_VARS
    case 0xEF05AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/erase_save_block.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xEF05AE.
    case 0xEF05B0: cpu.execute_instruction<0xFF>(0xA0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/erase_save_block.asm:12 END_STACK_VARS
    case 0xEF05B1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/saves/erase_save_block.asm:12 END_STACK_VARS
    case 0xEF05B2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/saves/erase_save_block.asm:13 LDY #$0500
    case 0xEF05B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000500, 3); return true;
    // src/system/saves/erase_save_block.asm:13 LDY #$0500
    // Overlapping static entry reached from 0xEF05B0.
    case 0xEF05B4: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/system/saves/erase_save_block.asm:13 LDY #$0500
    // Overlapping static entry reached from 0xEF05B3.
    case 0xEF05B5: cpu.execute_instruction<0x05>(0x000022, 2); return true;
    // src/system/saves/erase_save_block.asm:14 JSL MULT16
    case 0xEF05B6: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/system/saves/erase_save_block.asm:14 JSL MULT16
    // Overlapping static entry reached from 0xEF05B5.
    case 0xEF05B7: cpu.execute_instruction<0x32>(0x000090, 2); return true;
    // src/system/saves/erase_save_block.asm:14 JSL MULT16
    // Overlapping static entry reached from 0xEF05B7.
    case 0xEF05B9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000A85, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/erase_save_block.asm:15 STORE_INT1632 $0A
    case 0xEF05BA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/erase_save_block.asm:15 STORE_INT1632 $0A
    // Overlapping static entry reached from 0xEF05B9.
    case 0xEF05BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/saves/erase_save_block.asm:15 STORE_INT1632 $0A
    case 0xEF05BC: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/system/saves/erase_save_block.asm:16 CLC
    case 0xEF05BE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/system/saves/erase_save_block.asm:17 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, $0A
    case 0xEF05BF: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/erase_save_block.asm:17 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, $0A
    case 0xEF05C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x006000, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/erase_save_block.asm:17 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, $0A
    // Overlapping static entry reached from 0xEF05C1.
    case 0xEF05C3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/system/saves/erase_save_block.asm:17 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, $0A
    case 0xEF05C4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/system/saves/erase_save_block.asm:17 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, $0A
    case 0xEF05C6: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/erase_save_block.asm:17 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, $0A
    case 0xEF05C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/erase_save_block.asm:17 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, $0A
    // Overlapping static entry reached from 0xEF05C8.
    case 0xEF05CA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/system/saves/erase_save_block.asm:17 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE, $0A
    case 0xEF05CB: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/erase_save_block.asm:21 MOVE_INT $0A, $06
    case 0xEF05CD: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/erase_save_block.asm:21 MOVE_INT $0A, $06
    case 0xEF05CF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/erase_save_block.asm:21 MOVE_INT $0A, $06
    case 0xEF05D1: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/erase_save_block.asm:21 MOVE_INT $0A, $06
    case 0xEF05D3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/erase_save_block.asm:22 MOVE_INT $06, $0E
    case 0xEF05D5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/erase_save_block.asm:22 MOVE_INT $06, $0E
    case 0xEF05D7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/erase_save_block.asm:22 MOVE_INT $06, $0E
    case 0xEF05D9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/erase_save_block.asm:22 MOVE_INT $06, $0E
    case 0xEF05DB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/saves/erase_save_block.asm:24 LDX #$0500
    case 0xEF05DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000500, 3); return true;
    // src/system/saves/erase_save_block.asm:24 LDX #$0500
    // Overlapping static entry reached from 0xEF05DD.
    case 0xEF05DF: cpu.execute_instruction<0x05>(0x0000E2, 2); return true;
    // src/system/saves/erase_save_block.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xEF05E0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/saves/erase_save_block.asm:25 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xEF05DF.
    case 0xEF05E1: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/system/saves/erase_save_block.asm:26 LDA #$0000
    case 0xEF05E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/saves/erase_save_block.asm:27 JSL MEMSET24
    case 0xEF05E4: cpu.execute_instruction<0x22>(0xC08F15, 4); return true;
    // src/system/saves/erase_save_block.asm:27 JSL MEMSET24
    // Overlapping static entry reached from 0xEF05E2.
    case 0xEF05E5: cpu.execute_instruction<0x15>(0x00008F, 2); return true;
    // src/system/saves/erase_save_block.asm:27 JSL MEMSET24
    // Overlapping static entry reached from 0xEF05E5.
    case 0xEF05E7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0091A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/erase_save_block.asm:29 LOADPTR SRAM_SIGNATURE, $06
    case 0xEF05E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000091, 2); else cpu.execute_instruction<0xA9>(0x000591, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/erase_save_block.asm:29 LOADPTR SRAM_SIGNATURE, $06
    // Overlapping static entry reached from 0xEF05E7.
    case 0xEF05E9: cpu.execute_instruction<0x91>(0x000005, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/saves/erase_save_block.asm:29 LOADPTR SRAM_SIGNATURE, $06
    // Overlapping static entry reached from 0xEF05E8.
    case 0xEF05EA: cpu.execute_instruction<0x05>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/saves/erase_save_block.asm:29 LOADPTR SRAM_SIGNATURE, $06
    case 0xEF05EB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/saves/erase_save_block.asm:29 LOADPTR SRAM_SIGNATURE, $06
    // Overlapping static entry reached from 0xEF05EA.
    case 0xEF05EC: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/erase_save_block.asm:29 LOADPTR SRAM_SIGNATURE, $06
    case 0xEF05ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/erase_save_block.asm:29 LOADPTR SRAM_SIGNATURE, $06
    // Overlapping static entry reached from 0xEF05EC.
    case 0xEF05EE: cpu.execute_instruction<0xEF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/saves/erase_save_block.asm:29 LOADPTR SRAM_SIGNATURE, $06
    // Overlapping static entry reached from 0xEF05ED.
    case 0xEF05EF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/saves/erase_save_block.asm:29 LOADPTR SRAM_SIGNATURE, $06
    case 0xEF05F0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/erase_save_block.asm:31 MOVE_INT $06, $18
    case 0xEF05F2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/erase_save_block.asm:31 MOVE_INT $06, $18
    case 0xEF05F4: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/erase_save_block.asm:31 MOVE_INT $06, $18
    case 0xEF05F6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/erase_save_block.asm:31 MOVE_INT $06, $18
    case 0xEF05F8: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/erase_save_block.asm:33 MOVE_INT $06, $0E
    case 0xEF05FA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/erase_save_block.asm:33 MOVE_INT $06, $0E
    case 0xEF05FC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/erase_save_block.asm:33 MOVE_INT $06, $0E
    case 0xEF05FE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/erase_save_block.asm:33 MOVE_INT $06, $0E
    case 0xEF0600: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/saves/erase_save_block.asm:34 JSL STRLEN
    case 0xEF0602: cpu.execute_instruction<0x22>(0xC08F22, 4); return true;
    // src/system/saves/erase_save_block.asm:35 STA $16
    case 0xEF0606: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/erase_save_block.asm:39 MOVE_INT $0A, $06
    case 0xEF0608: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/erase_save_block.asm:39 MOVE_INT $0A, $06
    case 0xEF060A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/erase_save_block.asm:39 MOVE_INT $0A, $06
    case 0xEF060C: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/erase_save_block.asm:39 MOVE_INT $0A, $06
    case 0xEF060E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/erase_save_block.asm:40 MOVE_INT $06, $0E
    case 0xEF0610: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/erase_save_block.asm:40 MOVE_INT $06, $0E
    case 0xEF0612: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/erase_save_block.asm:40 MOVE_INT $06, $0E
    case 0xEF0614: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/erase_save_block.asm:40 MOVE_INT $06, $0E
    case 0xEF0616: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/erase_save_block.asm:41 MOVE_INT $18, $06
    case 0xEF0618: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/erase_save_block.asm:41 MOVE_INT $18, $06
    case 0xEF061A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/erase_save_block.asm:41 MOVE_INT $18, $06
    case 0xEF061C: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/erase_save_block.asm:41 MOVE_INT $18, $06
    case 0xEF061E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/erase_save_block.asm:43 MOVE_INT $06, @LOCAL01
    case 0xEF0620: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/erase_save_block.asm:43 MOVE_INT $06, @LOCAL01
    case 0xEF0622: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/erase_save_block.asm:43 MOVE_INT $06, @LOCAL01
    case 0xEF0624: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/erase_save_block.asm:43 MOVE_INT $06, @LOCAL01
    case 0xEF0626: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/saves/erase_save_block.asm:44 LDA $16
    case 0xEF0628: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/system/saves/erase_save_block.asm:45 JSL MEMCPY24
    case 0xEF062A: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/system/saves/erase_save_block.asm:46 PLD
    case 0xEF062E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/saves/erase_save_block.asm:47 RTS
    case 0xEF062F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/erase_save_slot.asm (source_named).
bool execute_system_saves_erase_save_slot_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/erase_save_slot.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF0BFA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/erase_save_slot.asm:7 END_STACK_VARS
    case 0xEF0BFC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/saves/erase_save_slot.asm:7 END_STACK_VARS
    case 0xEF0BFD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/erase_save_slot.asm:7 END_STACK_VARS
    case 0xEF0BFE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/erase_save_slot.asm:7 END_STACK_VARS
    case 0xEF0BFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/erase_save_slot.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0BFF.
    case 0xEF0C01: cpu.execute_instruction<0xFF>(0x0A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/erase_save_slot.asm:7 END_STACK_VARS
    case 0xEF0C02: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/saves/erase_save_slot.asm:7 END_STACK_VARS
    case 0xEF0C03: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/saves/erase_save_slot.asm:8 ASL
    case 0xEF0C04: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/saves/erase_save_slot.asm:9 TAX
    case 0xEF0C05: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/saves/erase_save_slot.asm:10 STX @LOCAL00
    case 0xEF0C06: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/saves/erase_save_slot.asm:11 TXA
    case 0xEF0C08: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/erase_save_slot.asm:12 JSR ERASE_SAVE_BLOCK
    case 0xEF0C09: cpu.execute_instruction<0x20>(0x0005A9, 3); return true;
    // src/system/saves/erase_save_slot.asm:13 LDX @LOCAL00
    case 0xEF0C0C: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/saves/erase_save_slot.asm:14 TXA
    case 0xEF0C0E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/erase_save_slot.asm:15 INC
    case 0xEF0C0F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/saves/erase_save_slot.asm:16 JSR ERASE_SAVE_BLOCK
    case 0xEF0C10: cpu.execute_instruction<0x20>(0x0005A9, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/erase_save_slot.asm:17 END_C_FUNCTION
    case 0xEF0C13: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/saves/erase_save_slot.asm:17 END_C_FUNCTION
    case 0xEF0C14: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/load_game_slot.asm (source_named).
bool execute_system_saves_load_game_slot_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/saves/load_game_slot.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEF0A68: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/load_game_slot.asm:13 END_STACK_VARS
    case 0xEF0A6A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/saves/load_game_slot.asm:13 END_STACK_VARS
    case 0xEF0A6B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/load_game_slot.asm:13 END_STACK_VARS
    case 0xEF0A6C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/load_game_slot.asm:13 END_STACK_VARS
    case 0xEF0A6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/load_game_slot.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0A6D.
    case 0xEF0A6F: cpu.execute_instruction<0xFF>(0xA0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/load_game_slot.asm:13 END_STACK_VARS
    case 0xEF0A70: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/saves/load_game_slot.asm:13 END_STACK_VARS
    case 0xEF0A71: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/saves/load_game_slot.asm:19 LDY #$0A00
    case 0xEF0A72: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000A00, 3); return true;
    // src/system/saves/load_game_slot.asm:19 LDY #$0A00
    // Overlapping static entry reached from 0xEF0A6F.
    case 0xEF0A73: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/system/saves/load_game_slot.asm:19 LDY #$0A00
    // Overlapping static entry reached from 0xEF0A72.
    case 0xEF0A74: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/saves/load_game_slot.asm:20 JSL MULT16
    case 0xEF0A75: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:21 STORE_INT1632 @VIRTUAL06
    case 0xEF0A79: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:21 STORE_INT1632 @VIRTUAL06
    case 0xEF0A7B: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/system/saves/load_game_slot.asm:22 CLC
    case 0xEF0A7D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/system/saves/load_game_slot.asm:23 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + .SIZEOF(save_header), @VIRTUAL06
    case 0xEF0A7E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/load_game_slot.asm:23 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + .SIZEOF(save_header), @VIRTUAL06
    case 0xEF0A80: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x006020, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/load_game_slot.asm:23 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + .SIZEOF(save_header), @VIRTUAL06
    // Overlapping static entry reached from 0xEF0A80.
    case 0xEF0A82: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:23 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + .SIZEOF(save_header), @VIRTUAL06
    case 0xEF0A83: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/system/saves/load_game_slot.asm:23 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + .SIZEOF(save_header), @VIRTUAL06
    case 0xEF0A85: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/load_game_slot.asm:23 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + .SIZEOF(save_header), @VIRTUAL06
    case 0xEF0A87: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/load_game_slot.asm:23 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + .SIZEOF(save_header), @VIRTUAL06
    // Overlapping static entry reached from 0xEF0A87.
    case 0xEF0A89: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:23 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + .SIZEOF(save_header), @VIRTUAL06
    case 0xEF0A8A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:24 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xEF0A8C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:24 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xEF0A8E: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:24 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xEF0A90: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:24 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xEF0A92: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/saves/load_game_slot.asm:25 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xEF0A94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F5, 2); else cpu.execute_instruction<0xA9>(0x0097F5, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/saves/load_game_slot.asm:25 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0A94.
    case 0xEF0A96: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:25 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xEF0A97: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:25 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0A96.
    case 0xEF0A98: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/system/saves/load_game_slot.asm:25 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xEF0A99: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/system/saves/load_game_slot.asm:25 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xEF0A9A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/system/saves/load_game_slot.asm:25 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xEF0A9C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:25 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xEF0A9D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/system/saves/load_game_slot.asm:25 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xEF0A9F: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/system/saves/load_game_slot.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xEF0AA1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:27 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEF0AA3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:27 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEF0AA5: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:27 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEF0AA7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:27 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEF0AA9: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/system/saves/load_game_slot.asm:32 TDC
    case 0xEF0AAB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/system/saves/load_game_slot.asm:33 CLC
    case 0xEF0AAC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/saves/load_game_slot.asm:34 ADC #$0018
    case 0xEF0AAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000018, 2); else cpu.execute_instruction<0x69>(0x000018, 3); return true;
    // src/system/saves/load_game_slot.asm:34 ADC #$0018
    // Overlapping static entry reached from 0xEF0AAD.
    case 0xEF0AAF: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/system/saves/load_game_slot.asm:35 TAX
    case 0xEF0AB0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/saves/load_game_slot.asm:36 STX @UNKNOWN_EB_LOCAL
    case 0xEF0AB1: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/system/saves/load_game_slot.asm:37 LDA #$007E
    case 0xEF0AB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/saves/load_game_slot.asm:37 LDA #$007E
    // Overlapping static entry reached from 0xEF0AB3.
    case 0xEF0AB5: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/system/saves/load_game_slot.asm:38 STA __BSS_START__,X
    case 0xEF0AB6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:40 MOVE_INT @LOCAL02, @VIRTUAL_TMP_A
    case 0xEF0AB9: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:40 MOVE_INT @LOCAL02, @VIRTUAL_TMP_A
    case 0xEF0ABB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:40 MOVE_INT @LOCAL02, @VIRTUAL_TMP_A
    case 0xEF0ABD: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:40 MOVE_INT @LOCAL02, @VIRTUAL_TMP_A
    case 0xEF0ABF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:41 MOVE_INT @VIRTUAL_TMP_A, @LOCAL00
    case 0xEF0AC1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:41 MOVE_INT @VIRTUAL_TMP_A, @LOCAL00
    case 0xEF0AC3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:41 MOVE_INT @VIRTUAL_TMP_A, @LOCAL00
    case 0xEF0AC5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:41 MOVE_INT @VIRTUAL_TMP_A, @LOCAL00
    case 0xEF0AC7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:42 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xEF0AC9: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:42 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xEF0ACB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:42 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xEF0ACD: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:42 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xEF0ACF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF0AD1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF0AD3: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF0AD5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF0AD7: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/saves/load_game_slot.asm:44 LDA #.SIZEOF(game_state)
    case 0xEF0AD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D9, 2); else cpu.execute_instruction<0xA9>(0x0001D9, 3); return true;
    // src/system/saves/load_game_slot.asm:44 LDA #.SIZEOF(game_state)
    // Overlapping static entry reached from 0xEF0AD9.
    case 0xEF0ADB: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/system/saves/load_game_slot.asm:45 JSL MEMCPY24
    case 0xEF0ADC: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/system/saves/load_game_slot.asm:45 JSL MEMCPY24
    // Overlapping static entry reached from 0xEF0ADB.
    case 0xEF0ADD: cpu.execute_instruction<0xED>(0x00C08E, 3); return true;
    // src/system/saves/load_game_slot.asm:46 LDA #.SIZEOF(game_state)
    case 0xEF0AE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D9, 2); else cpu.execute_instruction<0xA9>(0x0001D9, 3); return true;
    // src/system/saves/load_game_slot.asm:46 LDA #.SIZEOF(game_state)
    // Overlapping static entry reached from 0xEF0AE0.
    case 0xEF0AE2: cpu.execute_instruction<0x01>(0x000018, 2); return true;
    // src/system/saves/load_game_slot.asm:47 CLC
    case 0xEF0AE3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/saves/load_game_slot.asm:48 ADC @VIRTUAL06
    case 0xEF0AE4: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/system/saves/load_game_slot.asm:49 STA @VIRTUAL06
    case 0xEF0AE6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/saves/load_game_slot.asm:50 STA @LOCAL03
    case 0xEF0AE8: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/system/saves/load_game_slot.asm:51 LDA @VIRTUAL06 + 2
    case 0xEF0AEA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/saves/load_game_slot.asm:52 STA @LOCAL03 + 2
    case 0xEF0AEC: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/saves/load_game_slot.asm:53 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xEF0AEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0099CE, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/saves/load_game_slot.asm:53 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0AEE.
    case 0xEF0AF0: cpu.execute_instruction<0x99>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:53 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xEF0AF1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/system/saves/load_game_slot.asm:53 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xEF0AF3: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/system/saves/load_game_slot.asm:53 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xEF0AF4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/system/saves/load_game_slot.asm:53 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xEF0AF6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:53 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xEF0AF7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/system/saves/load_game_slot.asm:53 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xEF0AF9: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/system/saves/load_game_slot.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0xEF0AFB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:55 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEF0AFD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:55 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEF0AFF: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:55 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEF0B01: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:55 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEF0B03: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/system/saves/load_game_slot.asm:56 LDA #$007E
    case 0xEF0B05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/saves/load_game_slot.asm:56 LDA #$007E
    // Overlapping static entry reached from 0xEF0B05.
    case 0xEF0B07: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/system/saves/load_game_slot.asm:60 LDX @UNKNOWN_EB_LOCAL
    case 0xEF0B08: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/system/saves/load_game_slot.asm:61 STA __BSS_START__,X
    case 0xEF0B0A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:63 MOVE_INT @LOCAL02, @VIRTUAL_TMP_A
    case 0xEF0B0D: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:63 MOVE_INT @LOCAL02, @VIRTUAL_TMP_A
    case 0xEF0B0F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:63 MOVE_INT @LOCAL02, @VIRTUAL_TMP_A
    case 0xEF0B11: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:63 MOVE_INT @LOCAL02, @VIRTUAL_TMP_A
    case 0xEF0B13: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:64 MOVE_INT @VIRTUAL_TMP_A, @LOCAL00
    case 0xEF0B15: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:64 MOVE_INT @VIRTUAL_TMP_A, @LOCAL00
    case 0xEF0B17: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:64 MOVE_INT @VIRTUAL_TMP_A, @LOCAL00
    case 0xEF0B19: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:64 MOVE_INT @VIRTUAL_TMP_A, @LOCAL00
    case 0xEF0B1B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:65 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xEF0B1D: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:65 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xEF0B1F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:65 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xEF0B21: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:65 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xEF0B23: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:66 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF0B25: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:66 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF0B27: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:66 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF0B29: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:66 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF0B2B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/saves/load_game_slot.asm:67 LDA #.SIZEOF(char_struct)*6
    case 0xEF0B2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003A, 2); else cpu.execute_instruction<0xA9>(0x00023A, 3); return true;
    // src/system/saves/load_game_slot.asm:67 LDA #.SIZEOF(char_struct)*6
    // Overlapping static entry reached from 0xEF0B2D.
    case 0xEF0B2F: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/system/saves/load_game_slot.asm:68 JSL MEMCPY24
    case 0xEF0B30: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/system/saves/load_game_slot.asm:69 LDA #.SIZEOF(char_struct)*6
    case 0xEF0B34: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003A, 2); else cpu.execute_instruction<0xA9>(0x00023A, 3); return true;
    // src/system/saves/load_game_slot.asm:69 LDA #.SIZEOF(char_struct)*6
    // Overlapping static entry reached from 0xEF0B34.
    case 0xEF0B36: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/system/saves/load_game_slot.asm:70 CLC
    case 0xEF0B37: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/saves/load_game_slot.asm:71 ADC @VIRTUAL06
    case 0xEF0B38: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/system/saves/load_game_slot.asm:72 STA @VIRTUAL06
    case 0xEF0B3A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/saves/load_game_slot.asm:73 STA @LOCAL03
    case 0xEF0B3C: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/system/saves/load_game_slot.asm:74 LDA @VIRTUAL06 + 2
    case 0xEF0B3E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/saves/load_game_slot.asm:75 STA @LOCAL03 + 2
    case 0xEF0B40: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/saves/load_game_slot.asm:76 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xEF0B42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x009C08, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/saves/load_game_slot.asm:76 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0B42.
    case 0xEF0B44: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:76 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xEF0B45: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/system/saves/load_game_slot.asm:76 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xEF0B47: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/system/saves/load_game_slot.asm:76 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xEF0B48: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/system/saves/load_game_slot.asm:76 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xEF0B4A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:76 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xEF0B4B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/system/saves/load_game_slot.asm:76 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xEF0B4D: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/system/saves/load_game_slot.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xEF0B4F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:78 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEF0B51: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:78 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEF0B53: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:78 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEF0B55: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:78 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEF0B57: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/system/saves/load_game_slot.asm:79 LDA #$007E
    case 0xEF0B59: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/saves/load_game_slot.asm:79 LDA #$007E
    // Overlapping static entry reached from 0xEF0B59.
    case 0xEF0B5B: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/system/saves/load_game_slot.asm:83 LDX @UNKNOWN_EB_LOCAL
    case 0xEF0B5C: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/system/saves/load_game_slot.asm:84 STA __BSS_START__,X
    case 0xEF0B5E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:86 MOVE_INT @LOCAL02, @VIRTUAL_TMP_A
    case 0xEF0B61: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:86 MOVE_INT @LOCAL02, @VIRTUAL_TMP_A
    case 0xEF0B63: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:86 MOVE_INT @LOCAL02, @VIRTUAL_TMP_A
    case 0xEF0B65: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:86 MOVE_INT @LOCAL02, @VIRTUAL_TMP_A
    case 0xEF0B67: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:87 MOVE_INT @VIRTUAL_TMP_A, @LOCAL00
    case 0xEF0B69: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:87 MOVE_INT @VIRTUAL_TMP_A, @LOCAL00
    case 0xEF0B6B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:87 MOVE_INT @VIRTUAL_TMP_A, @LOCAL00
    case 0xEF0B6D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:87 MOVE_INT @VIRTUAL_TMP_A, @LOCAL00
    case 0xEF0B6F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:88 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xEF0B71: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:88 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xEF0B73: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:88 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xEF0B75: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:88 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xEF0B77: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:89 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF0B79: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:89 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF0B7B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:89 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF0B7D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:89 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF0B7F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/saves/load_game_slot.asm:90 LDA #$0080
    case 0xEF0B81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/system/saves/load_game_slot.asm:90 LDA #$0080
    // Overlapping static entry reached from 0xEF0B81.
    case 0xEF0B83: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/saves/load_game_slot.asm:91 JSL MEMCPY24
    case 0xEF0B84: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:92 MOVE_INT GAME_STATE + game_state::timer, @VIRTUAL06
    case 0xEF0B88: cpu.execute_instruction<0xAD>(0x0099C9, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:92 MOVE_INT GAME_STATE + game_state::timer, @VIRTUAL06
    case 0xEF0B8B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:92 MOVE_INT GAME_STATE + game_state::timer, @VIRTUAL06
    case 0xEF0B8D: cpu.execute_instruction<0xAD>(0x0099CB, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:92 MOVE_INT GAME_STATE + game_state::timer, @VIRTUAL06
    case 0xEF0B90: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/load_game_slot.asm:93 MOVE_INT @VIRTUAL06, TIMER
    case 0xEF0B92: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/load_game_slot.asm:93 MOVE_INT @VIRTUAL06, TIMER
    case 0xEF0B94: cpu.execute_instruction<0x8D>(0x0000A7, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/load_game_slot.asm:93 MOVE_INT @VIRTUAL06, TIMER
    case 0xEF0B97: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/load_game_slot.asm:93 MOVE_INT @VIRTUAL06, TIMER
    case 0xEF0B99: cpu.execute_instruction<0x8D>(0x0000A9, 3); return true;
    // src/system/saves/load_game_slot.asm:94 PLD
    case 0xEF0B9C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/saves/load_game_slot.asm:95 RTL
    case 0xEF0B9D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/save_game_block.asm (source_named).
bool execute_system_saves_save_game_block_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/save_game_block.asm:3 BEGIN_C_FUNCTION
    case 0xEF088F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/save_game_block.asm:13 END_STACK_VARS
    case 0xEF0891: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/saves/save_game_block.asm:13 END_STACK_VARS
    case 0xEF0892: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/save_game_block.asm:13 END_STACK_VARS
    case 0xEF0893: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/save_game_block.asm:13 END_STACK_VARS
    case 0xEF0894: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x00FFDE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/save_game_block.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0894.
    case 0xEF0896: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/save_game_block.asm:13 END_STACK_VARS
    case 0xEF0897: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/saves/save_game_block.asm:13 END_STACK_VARS
    case 0xEF0898: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:18 TAY
    case 0xEF0899: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:19 STY @LOCAL05
    case 0xEF089A: cpu.execute_instruction<0x84>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:22 MOVE_INT TIMER, @VIRTUAL06
    case 0xEF089C: cpu.execute_instruction<0xAD>(0x0000A7, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:22 MOVE_INT TIMER, @VIRTUAL06
    case 0xEF089F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:22 MOVE_INT TIMER, @VIRTUAL06
    case 0xEF08A1: cpu.execute_instruction<0xAD>(0x0000A9, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:22 MOVE_INT TIMER, @VIRTUAL06
    case 0xEF08A4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:23 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::timer
    case 0xEF08A6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:23 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::timer
    case 0xEF08A8: cpu.execute_instruction<0x8D>(0x0099C9, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:23 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::timer
    case 0xEF08AB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:23 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::timer
    case 0xEF08AD: cpu.execute_instruction<0x8D>(0x0099CB, 3); return true;
    // src/system/saves/save_game_block.asm:29 LDY @LOCAL05
    case 0xEF08B0: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/system/saves/save_game_block.asm:30 TYA
    case 0xEF08B2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:31 LDY #.SIZEOF(save_block)
    case 0xEF08B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000500, 3); return true;
    // src/system/saves/save_game_block.asm:31 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xEF08B3.
    case 0xEF08B5: cpu.execute_instruction<0x05>(0x000022, 2); return true;
    // src/system/saves/save_game_block.asm:33 JSL MULT16
    case 0xEF08B6: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/system/saves/save_game_block.asm:33 JSL MULT16
    // Overlapping static entry reached from 0xEF08B5.
    case 0xEF08B7: cpu.execute_instruction<0x32>(0x000090, 2); return true;
    // src/system/saves/save_game_block.asm:33 JSL MULT16
    // Overlapping static entry reached from 0xEF08B7.
    case 0xEF08B9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000A85, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:34 STORE_INT1632 @VIRTUAL0A
    case 0xEF08BA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:34 STORE_INT1632 @VIRTUAL0A
    // Overlapping static entry reached from 0xEF08B9.
    case 0xEF08BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/saves/save_game_block.asm:34 STORE_INT1632 @VIRTUAL0A
    case 0xEF08BC: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:35 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xEF08BE: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:35 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xEF08C0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:35 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xEF08C2: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:35 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xEF08C4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:36 CLC
    case 0xEF08C6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/system/saves/save_game_block.asm:37 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xEF08C7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/save_game_block.asm:37 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xEF08C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x006020, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/save_game_block.asm:37 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    // Overlapping static entry reached from 0xEF08C9.
    case 0xEF08CB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:37 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xEF08CC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/system/saves/save_game_block.asm:37 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xEF08CE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/save_game_block.asm:37 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xEF08D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/save_game_block.asm:37 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    // Overlapping static entry reached from 0xEF08D0.
    case 0xEF08D2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:37 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xEF08D3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:38 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xEF08D5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:38 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xEF08D7: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:38 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xEF08D9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:38 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xEF08DB: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/saves/save_game_block.asm:39 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xEF08DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F5, 2); else cpu.execute_instruction<0xA9>(0x0097F5, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/saves/save_game_block.asm:39 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF08DD.
    case 0xEF08DF: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:39 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xEF08E0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:39 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    // Overlapping static entry reached from 0xEF08DF.
    case 0xEF08E1: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/system/saves/save_game_block.asm:39 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xEF08E2: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/system/saves/save_game_block.asm:39 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xEF08E3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/system/saves/save_game_block.asm:39 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xEF08E5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:39 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xEF08E6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/system/saves/save_game_block.asm:39 PROMOTENEARPTR GAME_STATE, @VIRTUAL06
    case 0xEF08E8: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/system/saves/save_game_block.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xEF08EA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:41 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEF08EC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:41 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEF08EE: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:41 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEF08F0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:41 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEF08F2: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/system/saves/save_game_block.asm:46 TDC
    case 0xEF08F4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:47 CLC
    case 0xEF08F5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:48 ADC #@LOCAL02+2
    case 0xEF08F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000018, 2); else cpu.execute_instruction<0x69>(0x000018, 3); return true;
    // src/system/saves/save_game_block.asm:48 ADC #@LOCAL02+2
    // Overlapping static entry reached from 0xEF08F6.
    case 0xEF08F8: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/system/saves/save_game_block.asm:49 TAX
    case 0xEF08F9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:50 STX @LOCAL03
    case 0xEF08FA: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/system/saves/save_game_block.asm:51 LDA #.HIWORD(__BSS_START__)
    case 0xEF08FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/saves/save_game_block.asm:51 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xEF08FC.
    case 0xEF08FE: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/system/saves/save_game_block.asm:52 STA __BSS_START__,X
    case 0xEF08FF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:54 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xEF0902: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:54 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xEF0904: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:54 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xEF0906: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:54 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xEF0908: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:55 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEF090A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:55 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEF090C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:55 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEF090E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:55 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEF0910: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:56 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEF0912: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:56 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEF0914: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:56 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEF0916: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:56 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEF0918: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF091A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF091C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF091E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF0920: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/saves/save_game_block.asm:58 LDA #.SIZEOF(game_state)
    case 0xEF0922: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D9, 2); else cpu.execute_instruction<0xA9>(0x0001D9, 3); return true;
    // src/system/saves/save_game_block.asm:58 LDA #.SIZEOF(game_state)
    // Overlapping static entry reached from 0xEF0922.
    case 0xEF0924: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/system/saves/save_game_block.asm:59 JSL MEMCPY24
    case 0xEF0925: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/system/saves/save_game_block.asm:59 JSL MEMCPY24
    // Overlapping static entry reached from 0xEF0924.
    case 0xEF0926: cpu.execute_instruction<0xED>(0x00C08E, 3); return true;
    // src/system/saves/save_game_block.asm:60 LDA #.SIZEOF(game_state)
    case 0xEF0929: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D9, 2); else cpu.execute_instruction<0xA9>(0x0001D9, 3); return true;
    // src/system/saves/save_game_block.asm:60 LDA #.SIZEOF(game_state)
    // Overlapping static entry reached from 0xEF0929.
    case 0xEF092B: cpu.execute_instruction<0x01>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/system/saves/save_game_block.asm:61 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xEF092C: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/system/saves/save_game_block.asm:61 MOVE_INTX @LOCAL04, @VIRTUAL06
    // Overlapping static entry reached from 0xEF092B.
    case 0xEF092D: cpu.execute_instruction<0x1C>(0x000686, 3); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/system/saves/save_game_block.asm:61 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xEF092E: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/system/saves/save_game_block.asm:61 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xEF0930: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/system/saves/save_game_block.asm:61 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xEF0932: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:62 CLC
    case 0xEF0934: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:63 ADC @VIRTUAL06
    case 0xEF0935: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/system/saves/save_game_block.asm:64 STA @VIRTUAL06
    case 0xEF0937: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/saves/save_game_block.asm:65 STA @LOCAL04
    case 0xEF0939: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/system/saves/save_game_block.asm:66 LDA @VIRTUAL06+2
    case 0xEF093B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:67 STA @LOCAL04+2
    case 0xEF093D: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/saves/save_game_block.asm:68 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xEF093F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0099CE, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/saves/save_game_block.asm:68 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xEF093F.
    case 0xEF0941: cpu.execute_instruction<0x99>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:68 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xEF0942: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/system/saves/save_game_block.asm:68 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xEF0944: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/system/saves/save_game_block.asm:68 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xEF0945: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/system/saves/save_game_block.asm:68 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xEF0947: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:68 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xEF0948: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/system/saves/save_game_block.asm:68 PROMOTENEARPTR PARTY_CHARACTERS, @VIRTUAL06
    case 0xEF094A: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/system/saves/save_game_block.asm:69 REP #PROC_FLAGS::ACCUM8
    case 0xEF094C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:70 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEF094E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:70 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEF0950: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:70 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEF0952: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:70 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEF0954: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/system/saves/save_game_block.asm:71 LDA #.HIWORD(__BSS_START__)
    case 0xEF0956: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/saves/save_game_block.asm:71 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xEF0956.
    case 0xEF0958: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/system/saves/save_game_block.asm:75 LDX @LOCAL03
    case 0xEF0959: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/system/saves/save_game_block.asm:76 STA __BSS_START__,X
    case 0xEF095B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:78 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xEF095E: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:78 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xEF0960: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:78 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xEF0962: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:78 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xEF0964: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEF0966: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEF0968: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEF096A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEF096C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:80 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEF096E: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:80 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEF0970: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:80 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEF0972: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:80 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEF0974: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:81 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF0976: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:81 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF0978: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:81 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF097A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:81 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF097C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/saves/save_game_block.asm:82 LDA #.SIZEOF(char_struct) * 6
    case 0xEF097E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003A, 2); else cpu.execute_instruction<0xA9>(0x00023A, 3); return true;
    // src/system/saves/save_game_block.asm:82 LDA #.SIZEOF(char_struct) * 6
    // Overlapping static entry reached from 0xEF097E.
    case 0xEF0980: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/system/saves/save_game_block.asm:83 JSL MEMCPY24
    case 0xEF0981: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/system/saves/save_game_block.asm:84 LDA #.SIZEOF(char_struct) * 6
    case 0xEF0985: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003A, 2); else cpu.execute_instruction<0xA9>(0x00023A, 3); return true;
    // src/system/saves/save_game_block.asm:84 LDA #.SIZEOF(char_struct) * 6
    // Overlapping static entry reached from 0xEF0985.
    case 0xEF0987: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/system/saves/save_game_block.asm:85 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xEF0988: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/system/saves/save_game_block.asm:85 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xEF098A: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/system/saves/save_game_block.asm:85 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xEF098C: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/system/saves/save_game_block.asm:85 MOVE_INTX @LOCAL04, @VIRTUAL06
    case 0xEF098E: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:86 CLC
    case 0xEF0990: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:87 ADC @VIRTUAL06
    case 0xEF0991: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/system/saves/save_game_block.asm:88 STA @VIRTUAL06
    case 0xEF0993: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/saves/save_game_block.asm:89 STA @LOCAL04
    case 0xEF0995: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/system/saves/save_game_block.asm:90 LDA @VIRTUAL06+2
    case 0xEF0997: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:91 STA @LOCAL04+2
    case 0xEF0999: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/saves/save_game_block.asm:92 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xEF099B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x009C08, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/saves/save_game_block.asm:92 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    // Overlapping static entry reached from 0xEF099B.
    case 0xEF099D: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:92 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xEF099E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/system/saves/save_game_block.asm:92 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xEF09A0: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/system/saves/save_game_block.asm:92 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xEF09A1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/system/saves/save_game_block.asm:92 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xEF09A3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:92 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xEF09A4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/system/saves/save_game_block.asm:92 PROMOTENEARPTR EVENT_FLAGS, @VIRTUAL06
    case 0xEF09A6: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/system/saves/save_game_block.asm:93 REP #PROC_FLAGS::ACCUM8
    case 0xEF09A8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:94 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEF09AA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:94 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEF09AC: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:94 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEF09AE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:94 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEF09B0: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/system/saves/save_game_block.asm:95 LDA #.HIWORD(__BSS_START__)
    case 0xEF09B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/saves/save_game_block.asm:95 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xEF09B2.
    case 0xEF09B4: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/system/saves/save_game_block.asm:99 LDX @LOCAL03
    case 0xEF09B5: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/system/saves/save_game_block.asm:100 STA __BSS_START__,X
    case 0xEF09B7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:102 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xEF09BA: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:102 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xEF09BC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:102 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xEF09BE: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:102 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xEF09C0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEF09C2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEF09C4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEF09C6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEF09C8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:104 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEF09CA: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:104 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEF09CC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:104 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEF09CE: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:104 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEF09D0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:105 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF09D2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:105 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF09D4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:105 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF09D6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:105 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEF09D8: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/saves/save_game_block.asm:106 LDA #.SIZEOF(save_block::event_flags)
    case 0xEF09DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/system/saves/save_game_block.asm:106 LDA #.SIZEOF(save_block::event_flags)
    // Overlapping static entry reached from 0xEF09DA.
    case 0xEF09DC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/saves/save_game_block.asm:107 JSL MEMCPY24
    case 0xEF09DD: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:108 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xEF09E1: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:108 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xEF09E3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:108 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xEF09E5: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:108 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xEF09E7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:109 CLC
    case 0xEF09E9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/system/saves/save_game_block.asm:110 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    case 0xEF09EA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/save_game_block.asm:110 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    case 0xEF09EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00601C, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/save_game_block.asm:110 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    // Overlapping static entry reached from 0xEF09EC.
    case 0xEF09EE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:110 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    case 0xEF09EF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/system/saves/save_game_block.asm:110 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    case 0xEF09F1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/save_game_block.asm:110 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    case 0xEF09F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/save_game_block.asm:110 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    // Overlapping static entry reached from 0xEF09F3.
    case 0xEF09F5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:110 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    case 0xEF09F6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:115 LDY @LOCAL05
    case 0xEF09F8: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/system/saves/save_game_block.asm:116 TYA
    case 0xEF09FA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:118 JSR CALC_SAVE_BLOCK_ADD_CHECKSUM
    case 0xEF09FB: cpu.execute_instruction<0x20>(0x000734, 3); return true;
    // src/system/saves/save_game_block.asm:124 TAX
    case 0xEF09FE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:125 STX @LOCAL03
    case 0xEF09FF: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/system/saves/save_game_block.asm:126 TXA
    case 0xEF0A01: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:128 STA [@VIRTUAL06]
    case 0xEF0A02: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/system/saves/save_game_block.asm:133 LDY @LOCAL05
    case 0xEF0A04: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/system/saves/save_game_block.asm:134 TYA
    case 0xEF0A06: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:136 JSR CALC_SAVE_BLOCK_ADD_CHECKSUM
    case 0xEF0A07: cpu.execute_instruction<0x20>(0x000734, 3); return true;
    // src/system/saves/save_game_block.asm:137 STA @VIRTUAL02
    case 0xEF0A0A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/saves/save_game_block.asm:142 LDX @LOCAL03
    case 0xEF0A0C: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/system/saves/save_game_block.asm:143 TXA
    case 0xEF0A0E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:145 CMP @VIRTUAL02
    case 0xEF0A0F: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/system/saves/save_game_block.asm:146 BNEL @UNKNOWN0
    case 0xEF0A11: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/system/saves/save_game_block.asm:146 BNEL @UNKNOWN0
    case 0xEF0A13: cpu.execute_instruction<0x4C>(0x00089C, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/save_game_block.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xEF0A16: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xEF0A18: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/save_game_block.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xEF0A1A: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:147 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xEF0A1C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:148 CLC
    case 0xEF0A1E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/system/saves/save_game_block.asm:149 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL06
    case 0xEF0A1F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/save_game_block.asm:149 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL06
    case 0xEF0A21: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001E, 2); else cpu.execute_instruction<0x69>(0x00601E, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/save_game_block.asm:149 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0A21.
    case 0xEF0A23: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/system/saves/save_game_block.asm:149 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL06
    case 0xEF0A24: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/system/saves/save_game_block.asm:149 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL06
    case 0xEF0A26: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/save_game_block.asm:149 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL06
    case 0xEF0A28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/save_game_block.asm:149 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL06
    // Overlapping static entry reached from 0xEF0A28.
    case 0xEF0A2A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/system/saves/save_game_block.asm:149 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL06
    case 0xEF0A2B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/saves/save_game_block.asm:154 LDY @LOCAL05
    case 0xEF0A2D: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/system/saves/save_game_block.asm:155 TYA
    case 0xEF0A2F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:157 JSR CALC_SAVE_BLOCK_XOR_CHECKSUM
    case 0xEF0A30: cpu.execute_instruction<0x20>(0x00077B, 3); return true;
    // src/system/saves/save_game_block.asm:163 TAX
    case 0xEF0A33: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:164 STX @LOCAL03
    case 0xEF0A34: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/system/saves/save_game_block.asm:165 TXA
    case 0xEF0A36: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:167 STA [@VIRTUAL06]
    case 0xEF0A37: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/system/saves/save_game_block.asm:172 LDY @LOCAL05
    case 0xEF0A39: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/system/saves/save_game_block.asm:173 TYA
    case 0xEF0A3B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:175 JSR CALC_SAVE_BLOCK_XOR_CHECKSUM
    case 0xEF0A3C: cpu.execute_instruction<0x20>(0x00077B, 3); return true;
    // src/system/saves/save_game_block.asm:176 STA @VIRTUAL02
    case 0xEF0A3F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/saves/save_game_block.asm:181 LDX @LOCAL03
    case 0xEF0A41: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/system/saves/save_game_block.asm:182 TXA
    case 0xEF0A43: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/save_game_block.asm:184 CMP @VIRTUAL02
    case 0xEF0A44: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/system/saves/save_game_block.asm:185 BNEL @UNKNOWN0
    case 0xEF0A46: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/system/saves/save_game_block.asm:185 BNEL @UNKNOWN0
    case 0xEF0A48: cpu.execute_instruction<0x4C>(0x00089C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/save_game_block.asm:186 END_C_FUNCTION
    case 0xEF0A4B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/saves/save_game_block.asm:186 END_C_FUNCTION
    case 0xEF0A4C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/save_game_slot.asm (source_named).
bool execute_system_saves_save_game_slot_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/save_game_slot.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEF0A4D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/save_game_slot.asm:7 END_STACK_VARS
    case 0xEF0A4F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/saves/save_game_slot.asm:7 END_STACK_VARS
    case 0xEF0A50: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/save_game_slot.asm:7 END_STACK_VARS
    case 0xEF0A51: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/save_game_slot.asm:7 END_STACK_VARS
    case 0xEF0A52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/save_game_slot.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xEF0A52.
    case 0xEF0A54: cpu.execute_instruction<0xFF>(0x0A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/save_game_slot.asm:7 END_STACK_VARS
    case 0xEF0A55: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/saves/save_game_slot.asm:7 END_STACK_VARS
    case 0xEF0A56: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/saves/save_game_slot.asm:8 ASL
    case 0xEF0A57: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/saves/save_game_slot.asm:9 TAX
    case 0xEF0A58: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/saves/save_game_slot.asm:10 STX @LOCAL00
    case 0xEF0A59: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/saves/save_game_slot.asm:11 TXA
    case 0xEF0A5B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/save_game_slot.asm:12 JSR SAVE_GAME_BLOCK
    case 0xEF0A5C: cpu.execute_instruction<0x20>(0x00088F, 3); return true;
    // src/system/saves/save_game_slot.asm:13 LDX @LOCAL00
    case 0xEF0A5F: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/saves/save_game_slot.asm:14 TXA
    case 0xEF0A61: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/save_game_slot.asm:15 INC
    case 0xEF0A62: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/saves/save_game_slot.asm:16 JSR SAVE_GAME_BLOCK
    case 0xEF0A63: cpu.execute_instruction<0x20>(0x00088F, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/save_game_slot.asm:17 END_C_FUNCTION
    case 0xEF0A66: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/saves/save_game_slot.asm:17 END_C_FUNCTION
    case 0xEF0A67: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/validate_save_block_checksums.asm (source_named).
bool execute_system_saves_validate_save_block_checksums_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:3 BEGIN_C_FUNCTION
    case 0xEF07C0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:8 END_STACK_VARS
    case 0xEF07C2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:8 END_STACK_VARS
    case 0xEF07C3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:8 END_STACK_VARS
    case 0xEF07C4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:8 END_STACK_VARS
    case 0xEF07C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xEF07C5.
    case 0xEF07C7: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:8 END_STACK_VARS
    case 0xEF07C8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:8 END_STACK_VARS
    case 0xEF07C9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/saves/validate_save_block_checksums.asm:9 TAX
    case 0xEF07CA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/saves/validate_save_block_checksums.asm:10 STX @LOCAL00
    case 0xEF07CB: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:11 TXA
    case 0xEF07CD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/validate_save_block_checksums.asm:12 JSR CALC_SAVE_BLOCK_ADD_CHECKSUM
    case 0xEF07CE: cpu.execute_instruction<0x20>(0x000734, 3); return true;
    // src/system/saves/validate_save_block_checksums.asm:13 STA @VIRTUAL04
    case 0xEF07D1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:14 LDX @LOCAL00
    case 0xEF07D3: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:15 TXA
    case 0xEF07D5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/validate_save_block_checksums.asm:16 JSR CALC_SAVE_BLOCK_XOR_CHECKSUM
    case 0xEF07D6: cpu.execute_instruction<0x20>(0x00077B, 3); return true;
    // src/system/saves/validate_save_block_checksums.asm:17 STA @VIRTUAL02
    case 0xEF07D9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:18 LDY #.SIZEOF(save_block)
    case 0xEF07DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000500, 3); return true;
    // src/system/saves/validate_save_block_checksums.asm:18 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xEF07DB.
    case 0xEF07DD: cpu.execute_instruction<0x05>(0x0000A6, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:19 LDX @LOCAL00
    case 0xEF07DE: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:19 LDX @LOCAL00
    // Overlapping static entry reached from 0xEF07DD.
    case 0xEF07DF: cpu.execute_instruction<0x0E>(0x00228A, 3); return true;
    // src/system/saves/validate_save_block_checksums.asm:20 TXA
    case 0xEF07E0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/validate_save_block_checksums.asm:21 JSL MULT16
    case 0xEF07E1: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/system/saves/validate_save_block_checksums.asm:21 JSL MULT16
    // Overlapping static entry reached from 0xEF07DF.
    case 0xEF07E2: cpu.execute_instruction<0x32>(0x000090, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:21 JSL MULT16
    // Overlapping static entry reached from 0xEF07E2.
    case 0xEF07E4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000A85, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:22 STORE_INT1632 @VIRTUAL0A
    case 0xEF07E5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:22 STORE_INT1632 @VIRTUAL0A
    // Overlapping static entry reached from 0xEF07E4.
    case 0xEF07E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:22 STORE_INT1632 @VIRTUAL0A
    case 0xEF07E7: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:23 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xEF07E9: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:23 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xEF07EB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:23 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xEF07ED: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:23 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xEF07EF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:24 CLC
    case 0xEF07F1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:25 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    case 0xEF07F2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:25 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    case 0xEF07F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00601C, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:25 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    // Overlapping static entry reached from 0xEF07F4.
    case 0xEF07F6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:25 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    case 0xEF07F7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:25 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    case 0xEF07F9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:25 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    case 0xEF07FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:25 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    // Overlapping static entry reached from 0xEF07FB.
    case 0xEF07FD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:25 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum, @VIRTUAL06
    case 0xEF07FE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:26 CLC
    case 0xEF0800: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:27 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL0A
    case 0xEF0801: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:27 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL0A
    case 0xEF0803: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001E, 2); else cpu.execute_instruction<0x69>(0x00601E, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:27 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL0A
    // Overlapping static entry reached from 0xEF0803.
    case 0xEF0805: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:27 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL0A
    case 0xEF0806: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:27 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL0A
    case 0xEF0808: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:27 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL0A
    case 0xEF080A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:27 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL0A
    // Overlapping static entry reached from 0xEF080A.
    case 0xEF080C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:27 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_header::checksum_complement, @VIRTUAL0A
    case 0xEF080D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:28 LDA [@VIRTUAL06]
    case 0xEF080F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:29 CMP @VIRTUAL04
    case 0xEF0811: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:30 BNE @UNKNOWN0
    case 0xEF0813: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:31 LDA [@VIRTUAL0A]
    case 0xEF0815: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:32 CMP @VIRTUAL02
    case 0xEF0817: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:33 BEQ @UNKNOWN1
    case 0xEF0819: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:35 LDA #.LOWORD(-1)
    case 0xEF081B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/system/saves/validate_save_block_checksums.asm:35 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEF081B.
    case 0xEF081D: cpu.execute_instruction<0xFF>(0xA90380, 4); return true;
    // src/system/saves/validate_save_block_checksums.asm:36 BRA @UNKNOWN2
    case 0xEF081E: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:38 LDA #0
    case 0xEF0820: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/saves/validate_save_block_checksums.asm:38 LDA #0
    // Overlapping static entry reached from 0xEF081D.
    case 0xEF0821: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/system/saves/validate_save_block_checksums.asm:38 LDA #0
    // Overlapping static entry reached from 0xEF0820.
    case 0xEF0822: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:40 END_C_FUNCTION
    case 0xEF0823: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/saves/validate_save_block_checksums.asm:40 END_C_FUNCTION
    case 0xEF0824: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/sbrk.asm (source_named).
bool execute_system_sbrk_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/sbrk.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC086DE: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/sbrk.asm:4 TAY
    case 0xC086E0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/sbrk.asm:6 TYA
    case 0xC086E1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/sbrk.asm:7 CLC
    case 0xC086E2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/sbrk.asm:8 ADC CURRENT_HEAP_ADDRESS
    case 0xC086E3: cpu.execute_instruction<0x6D>(0x0000A1, 3); return true;
    // src/system/sbrk.asm:9 SEC
    case 0xC086E6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/sbrk.asm:10 SBC #HEAPSIZE
    case 0xC086E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000200, 3); return true;
    // src/system/sbrk.asm:10 SBC #HEAPSIZE
    // Overlapping static entry reached from 0xC086E7.
    case 0xC086E9: cpu.execute_instruction<0x02>(0x0000CD, 2); return true;
    // src/system/sbrk.asm:11 CMP BASE_HEAP_ADDRESS
    case 0xC086EA: cpu.execute_instruction<0xCD>(0x0000A3, 3); return true;
    // src/system/sbrk.asm:12 BCS @UNKNOWN1
    case 0xC086ED: cpu.execute_instruction<0xB0>(0x00000B, 2); return true;
    // src/system/sbrk.asm:13 ADC #HEAPSIZE
    case 0xC086EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000200, 3); return true;
    // src/system/sbrk.asm:13 ADC #HEAPSIZE
    // Overlapping static entry reached from 0xC086EF.
    case 0xC086F1: cpu.execute_instruction<0x02>(0x0000AC, 2); return true;
    // src/system/sbrk.asm:14 LDY CURRENT_HEAP_ADDRESS
    case 0xC086F2: cpu.execute_instruction<0xAC>(0x0000A1, 3); return true;
    // src/system/sbrk.asm:15 STA CURRENT_HEAP_ADDRESS
    case 0xC086F5: cpu.execute_instruction<0x8D>(0x0000A1, 3); return true;
    // src/system/sbrk.asm:16 TYA
    case 0xC086F8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/sbrk.asm:17 RTL
    case 0xC086F9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/system/sbrk.asm:19 LDA NEW_FRAME_STARTED
    case 0xC086FA: cpu.execute_instruction<0xAD>(0x00002B, 3); return true;
    // src/system/sbrk.asm:20 BEQ @UNKNOWN1
    case 0xC086FD: cpu.execute_instruction<0xF0>(0x0000FB, 2); return true;
    // src/system/sbrk.asm:21 STZ NEW_FRAME_STARTED
    case 0xC086FF: cpu.execute_instruction<0x9C>(0x00002B, 3); return true;
    // src/system/sbrk.asm:22 BRA @UNKNOWN0
    case 0xC08702: cpu.execute_instruction<0x80>(0x0000DD, 2); return true;
    // src/system/sbrk.asm:23 PHP
    case 0xC08704: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/sbrk.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC08705: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/sbrk.asm:25 LDA NMITIMEN_MIRROR
    case 0xC08707: cpu.execute_instruction<0xAD>(0x00001E, 3); return true;
    // src/system/sbrk.asm:26 AND #$007F
    case 0xC0870A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x008D7F, 3); return true;
    // src/system/sbrk.asm:27 STA NMITIMEN_MIRROR
    case 0xC0870C: cpu.execute_instruction<0x8D>(0x00001E, 3); return true;
    // src/system/sbrk.asm:27 STA NMITIMEN_MIRROR
    // Overlapping static entry reached from 0xC0870A.
    case 0xC0870D: cpu.execute_instruction<0x1E>(0x008F00, 3); return true;
    // src/system/sbrk.asm:28 STA f:NMITIMEN
    case 0xC0870F: cpu.execute_instruction<0x8F>(0x004200, 4); return true;
    // src/system/sbrk.asm:28 STA f:NMITIMEN
    // Overlapping static entry reached from 0xC0870D.
    case 0xC08710: cpu.execute_instruction<0x00>(0x000042, 2); return true;
    // src/system/sbrk.asm:29 PLP
    case 0xC08713: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/sbrk.asm:30 RTL
    case 0xC08714: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/set_bg1_vram_location.asm (source_named).
bool execute_system_set_bg1_vram_location_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/set_bg1_vram_location.asm:3 PHP
    case 0xC08D9E: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/set_bg1_vram_location.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC08D9F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_bg1_vram_location.asm:5 REP #PROC_FLAGS::INDEX8
    case 0xC08DA1: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/system/set_bg1_vram_location.asm:6 AND #$0003
    case 0xC08DA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x008D03, 3); return true;
    // src/system/set_bg1_vram_location.asm:7 STA BG1SC_MIRROR
    case 0xC08DA5: cpu.execute_instruction<0x8D>(0x000011, 3); return true;
    // src/system/set_bg1_vram_location.asm:7 STA BG1SC_MIRROR
    // Overlapping static entry reached from 0xC08DA3.
    case 0xC08DA6: cpu.execute_instruction<0x11>(0x000000, 2); return true;
    // src/system/set_bg1_vram_location.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC08DA8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/set_bg1_vram_location.asm:9 TXA
    case 0xC08DAA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/set_bg1_vram_location.asm:10 XBA
    case 0xC08DAB: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/set_bg1_vram_location.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC08DAC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_bg1_vram_location.asm:12 AND #$00FC
    case 0xC08DAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x000DFC, 3); return true;
    // src/system/set_bg1_vram_location.asm:13 ORA BG1SC_MIRROR
    case 0xC08DB0: cpu.execute_instruction<0x0D>(0x000011, 3); return true;
    // src/system/set_bg1_vram_location.asm:13 ORA BG1SC_MIRROR
    // Overlapping static entry reached from 0xC08DAE.
    case 0xC08DB1: cpu.execute_instruction<0x11>(0x000000, 2); return true;
    // src/system/set_bg1_vram_location.asm:14 STA BG1SC_MIRROR
    case 0xC08DB3: cpu.execute_instruction<0x8D>(0x000011, 3); return true;
    // src/system/set_bg1_vram_location.asm:15 STA f:BG1SC
    case 0xC08DB6: cpu.execute_instruction<0x8F>(0x002107, 4); return true;
    // src/system/set_bg1_vram_location.asm:16 LDA BG12NBA_MIRROR
    case 0xC08DBA: cpu.execute_instruction<0xAD>(0x000015, 3); return true;
    // src/system/set_bg1_vram_location.asm:17 AND #$00F0
    case 0xC08DBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x008DF0, 3); return true;
    // src/system/set_bg1_vram_location.asm:18 STA BG12NBA_MIRROR
    case 0xC08DBF: cpu.execute_instruction<0x8D>(0x000015, 3); return true;
    // src/system/set_bg1_vram_location.asm:18 STA BG12NBA_MIRROR
    // Overlapping static entry reached from 0xC08DBD.
    case 0xC08DC0: cpu.execute_instruction<0x15>(0x000000, 2); return true;
    // src/system/set_bg1_vram_location.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC08DC2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/set_bg1_vram_location.asm:20 STZ BG1_X_POS
    case 0xC08DC4: cpu.execute_instruction<0x9C>(0x000031, 3); return true;
    // src/system/set_bg1_vram_location.asm:21 STZ BG1_Y_POS
    case 0xC08DC7: cpu.execute_instruction<0x9C>(0x000033, 3); return true;
    // src/system/set_bg1_vram_location.asm:22 TYA
    case 0xC08DCA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/set_bg1_vram_location.asm:23 XBA
    case 0xC08DCB: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/set_bg1_vram_location.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC08DCC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_bg1_vram_location.asm:25 LSR
    case 0xC08DCE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/set_bg1_vram_location.asm:26 LSR
    case 0xC08DCF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/set_bg1_vram_location.asm:27 LSR
    case 0xC08DD0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/set_bg1_vram_location.asm:28 LSR
    case 0xC08DD1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/set_bg1_vram_location.asm:29 ORA BG12NBA_MIRROR
    case 0xC08DD2: cpu.execute_instruction<0x0D>(0x000015, 3); return true;
    // src/system/set_bg1_vram_location.asm:30 STA BG12NBA_MIRROR
    case 0xC08DD5: cpu.execute_instruction<0x8D>(0x000015, 3); return true;
    // src/system/set_bg1_vram_location.asm:31 STA f:BG12NBA
    case 0xC08DD8: cpu.execute_instruction<0x8F>(0x00210B, 4); return true;
    // src/system/set_bg1_vram_location.asm:32 PLP
    case 0xC08DDC: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/set_bg1_vram_location.asm:33 RTL
    case 0xC08DDD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/set_bg2_vram_location.asm (source_named).
bool execute_system_set_bg2_vram_location_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/set_bg2_vram_location.asm:3 PHP
    case 0xC08DDE: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/set_bg2_vram_location.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC08DDF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_bg2_vram_location.asm:5 REP #PROC_FLAGS::INDEX8
    case 0xC08DE1: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/system/set_bg2_vram_location.asm:6 AND #$0003
    case 0xC08DE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x008D03, 3); return true;
    // src/system/set_bg2_vram_location.asm:7 STA BG2SC_MIRROR
    case 0xC08DE5: cpu.execute_instruction<0x8D>(0x000012, 3); return true;
    // src/system/set_bg2_vram_location.asm:7 STA BG2SC_MIRROR
    // Overlapping static entry reached from 0xC08DE3.
    case 0xC08DE6: cpu.execute_instruction<0x12>(0x000000, 2); return true;
    // src/system/set_bg2_vram_location.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC08DE8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/set_bg2_vram_location.asm:9 TXA
    case 0xC08DEA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/set_bg2_vram_location.asm:10 XBA
    case 0xC08DEB: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/set_bg2_vram_location.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC08DEC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_bg2_vram_location.asm:12 AND #$00FC
    case 0xC08DEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x000DFC, 3); return true;
    // src/system/set_bg2_vram_location.asm:13 ORA BG2SC_MIRROR
    case 0xC08DF0: cpu.execute_instruction<0x0D>(0x000012, 3); return true;
    // src/system/set_bg2_vram_location.asm:13 ORA BG2SC_MIRROR
    // Overlapping static entry reached from 0xC08DEE.
    case 0xC08DF1: cpu.execute_instruction<0x12>(0x000000, 2); return true;
    // src/system/set_bg2_vram_location.asm:14 STA BG2SC_MIRROR
    case 0xC08DF3: cpu.execute_instruction<0x8D>(0x000012, 3); return true;
    // src/system/set_bg2_vram_location.asm:15 STA f:BG2SC
    case 0xC08DF6: cpu.execute_instruction<0x8F>(0x002108, 4); return true;
    // src/system/set_bg2_vram_location.asm:16 LDA BG12NBA_MIRROR
    case 0xC08DFA: cpu.execute_instruction<0xAD>(0x000015, 3); return true;
    // src/system/set_bg2_vram_location.asm:17 AND #$000F
    case 0xC08DFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x008D0F, 3); return true;
    // src/system/set_bg2_vram_location.asm:18 STA BG12NBA_MIRROR
    case 0xC08DFF: cpu.execute_instruction<0x8D>(0x000015, 3); return true;
    // src/system/set_bg2_vram_location.asm:18 STA BG12NBA_MIRROR
    // Overlapping static entry reached from 0xC08DFD.
    case 0xC08E00: cpu.execute_instruction<0x15>(0x000000, 2); return true;
    // src/system/set_bg2_vram_location.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC08E02: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/set_bg2_vram_location.asm:20 STZ BG2_X_POS
    case 0xC08E04: cpu.execute_instruction<0x9C>(0x000035, 3); return true;
    // src/system/set_bg2_vram_location.asm:21 STZ BG2_Y_POS
    case 0xC08E07: cpu.execute_instruction<0x9C>(0x000037, 3); return true;
    // src/system/set_bg2_vram_location.asm:22 TYA
    case 0xC08E0A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/set_bg2_vram_location.asm:23 XBA
    case 0xC08E0B: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/set_bg2_vram_location.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC08E0C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_bg2_vram_location.asm:25 AND #$00F0
    case 0xC08E0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x000DF0, 3); return true;
    // src/system/set_bg2_vram_location.asm:26 ORA BG12NBA_MIRROR
    case 0xC08E10: cpu.execute_instruction<0x0D>(0x000015, 3); return true;
    // src/system/set_bg2_vram_location.asm:26 ORA BG12NBA_MIRROR
    // Overlapping static entry reached from 0xC08E0E.
    case 0xC08E11: cpu.execute_instruction<0x15>(0x000000, 2); return true;
    // src/system/set_bg2_vram_location.asm:27 STA BG12NBA_MIRROR
    case 0xC08E13: cpu.execute_instruction<0x8D>(0x000015, 3); return true;
    // src/system/set_bg2_vram_location.asm:28 STA f:BG12NBA
    case 0xC08E16: cpu.execute_instruction<0x8F>(0x00210B, 4); return true;
    // src/system/set_bg2_vram_location.asm:29 PLP
    case 0xC08E1A: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/set_bg2_vram_location.asm:30 RTL
    case 0xC08E1B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/set_bg3_vram_location.asm (source_named).
bool execute_system_set_bg3_vram_location_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/set_bg3_vram_location.asm:3 PHP
    case 0xC08E1C: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/set_bg3_vram_location.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC08E1D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_bg3_vram_location.asm:5 REP #PROC_FLAGS::INDEX8
    case 0xC08E1F: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/system/set_bg3_vram_location.asm:6 AND #$0003
    case 0xC08E21: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x008D03, 3); return true;
    // src/system/set_bg3_vram_location.asm:7 STA BG3SC_MIRROR
    case 0xC08E23: cpu.execute_instruction<0x8D>(0x000013, 3); return true;
    // src/system/set_bg3_vram_location.asm:7 STA BG3SC_MIRROR
    // Overlapping static entry reached from 0xC08E21.
    case 0xC08E24: cpu.execute_instruction<0x13>(0x000000, 2); return true;
    // src/system/set_bg3_vram_location.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC08E26: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/set_bg3_vram_location.asm:9 TXA
    case 0xC08E28: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/set_bg3_vram_location.asm:10 XBA
    case 0xC08E29: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/set_bg3_vram_location.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC08E2A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_bg3_vram_location.asm:12 AND #$00FC
    case 0xC08E2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x000DFC, 3); return true;
    // src/system/set_bg3_vram_location.asm:13 ORA BG3SC_MIRROR
    case 0xC08E2E: cpu.execute_instruction<0x0D>(0x000013, 3); return true;
    // src/system/set_bg3_vram_location.asm:13 ORA BG3SC_MIRROR
    // Overlapping static entry reached from 0xC08E2C.
    case 0xC08E2F: cpu.execute_instruction<0x13>(0x000000, 2); return true;
    // src/system/set_bg3_vram_location.asm:14 STA BG3SC_MIRROR
    case 0xC08E31: cpu.execute_instruction<0x8D>(0x000013, 3); return true;
    // src/system/set_bg3_vram_location.asm:15 STA f:BG3SC
    case 0xC08E34: cpu.execute_instruction<0x8F>(0x002109, 4); return true;
    // src/system/set_bg3_vram_location.asm:16 LDA BG34NBA_MIRROR
    case 0xC08E38: cpu.execute_instruction<0xAD>(0x000016, 3); return true;
    // src/system/set_bg3_vram_location.asm:17 AND #$00F0
    case 0xC08E3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x008DF0, 3); return true;
    // src/system/set_bg3_vram_location.asm:18 STA BG34NBA_MIRROR
    case 0xC08E3D: cpu.execute_instruction<0x8D>(0x000016, 3); return true;
    // src/system/set_bg3_vram_location.asm:18 STA BG34NBA_MIRROR
    // Overlapping static entry reached from 0xC08E3B.
    case 0xC08E3E: cpu.execute_instruction<0x16>(0x000000, 2); return true;
    // src/system/set_bg3_vram_location.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC08E40: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/set_bg3_vram_location.asm:20 STZ BG3_X_POS
    case 0xC08E42: cpu.execute_instruction<0x9C>(0x000039, 3); return true;
    // src/system/set_bg3_vram_location.asm:21 STZ BG3_Y_POS
    case 0xC08E45: cpu.execute_instruction<0x9C>(0x00003B, 3); return true;
    // src/system/set_bg3_vram_location.asm:22 TYA
    case 0xC08E48: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/set_bg3_vram_location.asm:23 XBA
    case 0xC08E49: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/set_bg3_vram_location.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC08E4A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_bg3_vram_location.asm:25 LSR
    case 0xC08E4C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/set_bg3_vram_location.asm:26 LSR
    case 0xC08E4D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/set_bg3_vram_location.asm:27 LSR
    case 0xC08E4E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/set_bg3_vram_location.asm:28 LSR
    case 0xC08E4F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/set_bg3_vram_location.asm:29 ORA BG34NBA_MIRROR
    case 0xC08E50: cpu.execute_instruction<0x0D>(0x000016, 3); return true;
    // src/system/set_bg3_vram_location.asm:30 STA BG34NBA_MIRROR
    case 0xC08E53: cpu.execute_instruction<0x8D>(0x000016, 3); return true;
    // src/system/set_bg3_vram_location.asm:30 STA BG34NBA_MIRROR
    // Overlapping static entry reached from 0xC08EC6.
    case 0xC08E55: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/system/set_bg3_vram_location.asm:31 STA f:BG34NBA
    case 0xC08E56: cpu.execute_instruction<0x8F>(0x00210C, 4); return true;
    // src/system/set_bg3_vram_location.asm:32 PLP
    case 0xC08E5A: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/set_bg3_vram_location.asm:33 RTL
    case 0xC08E5B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/set_bg4_vram_location.asm (source_named).
bool execute_system_set_bg4_vram_location_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/set_bg4_vram_location.asm:3 PHP
    case 0xC08E5C: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/set_bg4_vram_location.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC08E5D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_bg4_vram_location.asm:5 REP #PROC_FLAGS::INDEX8
    case 0xC08E5F: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/system/set_bg4_vram_location.asm:6 AND #$0003
    case 0xC08E61: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x008D03, 3); return true;
    // src/system/set_bg4_vram_location.asm:7 STA BG4SC_MIRROR
    case 0xC08E63: cpu.execute_instruction<0x8D>(0x000014, 3); return true;
    // src/system/set_bg4_vram_location.asm:7 STA BG4SC_MIRROR
    // Overlapping static entry reached from 0xC08E61.
    case 0xC08E64: cpu.execute_instruction<0x14>(0x000000, 2); return true;
    // src/system/set_bg4_vram_location.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC08E66: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/set_bg4_vram_location.asm:9 TXA
    case 0xC08E68: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/set_bg4_vram_location.asm:10 XBA
    case 0xC08E69: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/set_bg4_vram_location.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC08E6A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_bg4_vram_location.asm:12 AND #$00FC
    case 0xC08E6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x000DFC, 3); return true;
    // src/system/set_bg4_vram_location.asm:13 ORA BG4SC_MIRROR
    case 0xC08E6E: cpu.execute_instruction<0x0D>(0x000014, 3); return true;
    // src/system/set_bg4_vram_location.asm:13 ORA BG4SC_MIRROR
    // Overlapping static entry reached from 0xC08E6C.
    case 0xC08E6F: cpu.execute_instruction<0x14>(0x000000, 2); return true;
    // src/system/set_bg4_vram_location.asm:14 STA BG4SC_MIRROR
    case 0xC08E71: cpu.execute_instruction<0x8D>(0x000014, 3); return true;
    // src/system/set_bg4_vram_location.asm:15 STA f:BG4SC
    case 0xC08E74: cpu.execute_instruction<0x8F>(0x00210A, 4); return true;
    // src/system/set_bg4_vram_location.asm:16 LDA BG34NBA_MIRROR
    case 0xC08E78: cpu.execute_instruction<0xAD>(0x000016, 3); return true;
    // src/system/set_bg4_vram_location.asm:17 AND #$000F
    case 0xC08E7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x008D0F, 3); return true;
    // src/system/set_bg4_vram_location.asm:18 STA BG34NBA_MIRROR
    case 0xC08E7D: cpu.execute_instruction<0x8D>(0x000016, 3); return true;
    // src/system/set_bg4_vram_location.asm:18 STA BG34NBA_MIRROR
    // Overlapping static entry reached from 0xC08E7B.
    case 0xC08E7E: cpu.execute_instruction<0x16>(0x000000, 2); return true;
    // src/system/set_bg4_vram_location.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC08E80: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/set_bg4_vram_location.asm:20 STZ BG4_X_POS
    case 0xC08E82: cpu.execute_instruction<0x9C>(0x00003D, 3); return true;
    // src/system/set_bg4_vram_location.asm:21 STZ BG4_Y_POS
    case 0xC08E85: cpu.execute_instruction<0x9C>(0x00003F, 3); return true;
    // src/system/set_bg4_vram_location.asm:22 TYA
    case 0xC08E88: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/set_bg4_vram_location.asm:23 XBA
    case 0xC08E89: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/set_bg4_vram_location.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC08E8A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_bg4_vram_location.asm:25 AND #$00F0
    case 0xC08E8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x000DF0, 3); return true;
    // src/system/set_bg4_vram_location.asm:26 ORA BG34NBA_MIRROR
    case 0xC08E8E: cpu.execute_instruction<0x0D>(0x000016, 3); return true;
    // src/system/set_bg4_vram_location.asm:26 ORA BG34NBA_MIRROR
    // Overlapping static entry reached from 0xC08E8C.
    case 0xC08E8F: cpu.execute_instruction<0x16>(0x000000, 2); return true;
    // src/system/set_bg4_vram_location.asm:27 STA BG34NBA_MIRROR
    case 0xC08E91: cpu.execute_instruction<0x8D>(0x000016, 3); return true;
    // src/system/set_bg4_vram_location.asm:28 STA f:BG34NBA
    case 0xC08E94: cpu.execute_instruction<0x8F>(0x00210C, 4); return true;
    // src/system/set_bg4_vram_location.asm:29 PLP
    case 0xC08E98: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/set_bg4_vram_location.asm:30 RTL
    case 0xC08E99: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/set_coldata.asm (source_named).
bool execute_system_set_coldata_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/set_coldata.asm:5 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B01A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_coldata.asm:6 AND #$001F
    case 0xC0B01C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00091F, 3); return true;
    // src/system/set_coldata.asm:7 ORA #$0020
    case 0xC0B01E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000020, 2); else cpu.execute_instruction<0x09>(0x008F20, 3); return true;
    // src/system/set_coldata.asm:7 ORA #$0020
    // Overlapping static entry reached from 0xC0B01C.
    case 0xC0B01F: cpu.execute_instruction<0x20>(0x00328F, 3); return true;
    // src/system/set_coldata.asm:8 STA f:FIXED_COLOR_DATA
    case 0xC0B020: cpu.execute_instruction<0x8F>(0x002132, 4); return true;
    // src/system/set_coldata.asm:8 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC0B01E.
    case 0xC0B021: cpu.execute_instruction<0x32>(0x000021, 2); return true;
    // src/system/set_coldata.asm:8 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC0B01F.
    case 0xC0B022: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/system/set_coldata.asm:8 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC0B021.
    case 0xC0B023: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/system/set_coldata.asm:9 TXA
    case 0xC0B024: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/set_coldata.asm:10 AND #$001F
    case 0xC0B025: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00091F, 3); return true;
    // src/system/set_coldata.asm:11 ORA #$0040
    case 0xC0B027: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000040, 2); else cpu.execute_instruction<0x09>(0x008F40, 3); return true;
    // src/system/set_coldata.asm:11 ORA #$0040
    // Overlapping static entry reached from 0xC0B025.
    case 0xC0B028: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/system/set_coldata.asm:12 STA f:FIXED_COLOR_DATA
    case 0xC0B029: cpu.execute_instruction<0x8F>(0x002132, 4); return true;
    // src/system/set_coldata.asm:12 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC0B027.
    case 0xC0B02A: cpu.execute_instruction<0x32>(0x000021, 2); return true;
    // src/system/set_coldata.asm:12 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC0B02A.
    case 0xC0B02C: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/system/set_coldata.asm:13 TYA
    case 0xC0B02D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/set_coldata.asm:14 AND #$001F
    case 0xC0B02E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00091F, 3); return true;
    // src/system/set_coldata.asm:15 ORA #$0080
    case 0xC0B030: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000080, 2); else cpu.execute_instruction<0x09>(0x008F80, 3); return true;
    // src/system/set_coldata.asm:15 ORA #$0080
    // Overlapping static entry reached from 0xC0B02E.
    case 0xC0B031: cpu.execute_instruction<0x80>(0x00008F, 2); return true;
    // src/system/set_coldata.asm:16 STA f:FIXED_COLOR_DATA
    case 0xC0B032: cpu.execute_instruction<0x8F>(0x002132, 4); return true;
    // src/system/set_coldata.asm:16 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC0B030.
    case 0xC0B033: cpu.execute_instruction<0x32>(0x000021, 2); return true;
    // src/system/set_coldata.asm:16 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC0B033.
    case 0xC0B035: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/system/set_coldata.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC0B036: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/set_coldata.asm:18 RTL
    case 0xC0B038: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/set_colour_addsub_mode.asm (source_named).
bool execute_system_set_colour_addsub_mode_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/set_colour_addsub_mode.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B039: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_colour_addsub_mode.asm:5 STA f:CGWSEL
    case 0xC0B03B: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/system/set_colour_addsub_mode.asm:6 TXA
    case 0xC0B03F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/set_colour_addsub_mode.asm:7 STA f:CGADSUB
    case 0xC0B040: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/system/set_colour_addsub_mode.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC0B044: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/set_colour_addsub_mode.asm:9 RTL
    case 0xC0B046: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/set_inidisp.asm (source_named).
bool execute_system_set_inidisp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/set_inidisp.asm:3 PHP
    case 0xC0879D: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/set_inidisp.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC0879E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_inidisp.asm:5 AND #$008F
    case 0xC087A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00008F, 2); else cpu.execute_instruction<0x29>(0x008D8F, 3); return true;
    // src/system/set_inidisp.asm:6 STA INIDISP_MIRROR
    case 0xC087A2: cpu.execute_instruction<0x8D>(0x00000D, 3); return true;
    // src/system/set_inidisp.asm:6 STA INIDISP_MIRROR
    // Overlapping static entry reached from 0xC087A0.
    case 0xC087A3: cpu.execute_instruction<0x0D>(0x002800, 3); return true;
    // src/system/set_inidisp.asm:7 PLP
    case 0xC087A5: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/set_inidisp.asm:8 RTS
    case 0xC087A6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/set_inidisp_far.asm (source_named).
bool execute_system_set_inidisp_far_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/set_inidisp_far.asm:3 JSR SET_INIDISP
    case 0xC08799: cpu.execute_instruction<0x20>(0x00879D, 3); return true;
    // src/system/set_inidisp_far.asm:4 RTL
    case 0xC0879C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/set_irq_callback.asm (source_named).
bool execute_system_set_irq_callback_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/set_irq_callback.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0851C: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/set_irq_callback.asm:4 STA IRQ_CALLBACK
    case 0xC0851E: cpu.execute_instruction<0x8D>(0x000020, 3); return true;
    // src/system/set_irq_callback.asm:5 RTL
    case 0xC08521: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/set_oam_size.asm (source_named).
bool execute_system_set_oam_size_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/set_oam_size.asm:3 PHP
    case 0xC08D92: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/set_oam_size.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC08D93: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_oam_size.asm:5 STA OBSEL_MIRROR
    case 0xC08D95: cpu.execute_instruction<0x8D>(0x00000E, 3); return true;
    // src/system/set_oam_size.asm:6 STA f:OBSEL
    case 0xC08D98: cpu.execute_instruction<0x8F>(0x002101, 4); return true;
    // src/system/set_oam_size.asm:7 PLP
    case 0xC08D9C: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/set_oam_size.asm:8 RTL
    case 0xC08D9D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/set_window_mask.asm (source_named).
bool execute_system_set_window_mask_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/set_window_mask.asm:3 TXY
    case 0xC0B047: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B048: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/set_window_mask.asm:5 PHA
    case 0xC0B04A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:6 PHA
    case 0xC0B04B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:7 AND #$0003
    case 0xC0B04C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x00AA03, 3); return true;
    // src/system/set_window_mask.asm:8 TAX
    case 0xC0B04E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:9 LDA f:UNKNOWN_C0B0A6,X
    case 0xC0B04F: cpu.execute_instruction<0xBF>(0xC0B0A6, 4); return true;
    // src/system/set_window_mask.asm:10 CPY #$0000
    case 0xC0B053: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/system/set_window_mask.asm:10 CPY #$0000
    // Overlapping static entry reached from 0xC0B053.
    case 0xC0B055: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/set_window_mask.asm:11 BEQ @UNKNOWN0
    case 0xC0B056: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/system/set_window_mask.asm:12 AND #$00AA
    case 0xC0B058: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000AA, 2); else cpu.execute_instruction<0x29>(0x008FAA, 3); return true;
    // src/system/set_window_mask.asm:14 STA f:W12SEL
    case 0xC0B05A: cpu.execute_instruction<0x8F>(0x002123, 4); return true;
    // src/system/set_window_mask.asm:14 STA f:W12SEL
    // Overlapping static entry reached from 0xC0B058.
    case 0xC0B05B: cpu.execute_instruction<0x23>(0x000021, 2); return true;
    // src/system/set_window_mask.asm:14 STA f:W12SEL
    // Overlapping static entry reached from 0xC0B05B.
    case 0xC0B05D: cpu.execute_instruction<0x00>(0x000068, 2); return true;
    // src/system/set_window_mask.asm:15 PLA
    case 0xC0B05E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:16 LSR
    case 0xC0B05F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:17 LSR
    case 0xC0B060: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:18 PHA
    case 0xC0B061: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:19 AND #$0003
    case 0xC0B062: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x00AA03, 3); return true;
    // src/system/set_window_mask.asm:20 TAX
    case 0xC0B064: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:21 LDA f:UNKNOWN_C0B0A6,X
    case 0xC0B065: cpu.execute_instruction<0xBF>(0xC0B0A6, 4); return true;
    // src/system/set_window_mask.asm:22 CPY #$0000
    case 0xC0B069: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/system/set_window_mask.asm:22 CPY #$0000
    // Overlapping static entry reached from 0xC0B069.
    case 0xC0B06B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/set_window_mask.asm:23 BEQ @UNKNOWN1
    case 0xC0B06C: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/system/set_window_mask.asm:24 AND #$00AA
    case 0xC0B06E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000AA, 2); else cpu.execute_instruction<0x29>(0x008FAA, 3); return true;
    // src/system/set_window_mask.asm:26 STA f:W34SEL
    case 0xC0B070: cpu.execute_instruction<0x8F>(0x002124, 4); return true;
    // src/system/set_window_mask.asm:26 STA f:W34SEL
    // Overlapping static entry reached from 0xC0B06E.
    case 0xC0B071: cpu.execute_instruction<0x24>(0x000021, 2); return true;
    // src/system/set_window_mask.asm:26 STA f:W34SEL
    // Overlapping static entry reached from 0xC0B071.
    case 0xC0B073: cpu.execute_instruction<0x00>(0x000068, 2); return true;
    // src/system/set_window_mask.asm:27 PLA
    case 0xC0B074: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:28 LSR
    case 0xC0B075: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:29 LSR
    case 0xC0B076: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:30 AND #$0003
    case 0xC0B077: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x00AA03, 3); return true;
    // src/system/set_window_mask.asm:31 TAX
    case 0xC0B079: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:32 LDA f:UNKNOWN_C0B0A6,X
    case 0xC0B07A: cpu.execute_instruction<0xBF>(0xC0B0A6, 4); return true;
    // src/system/set_window_mask.asm:33 CPY #$0000
    case 0xC0B07E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/system/set_window_mask.asm:33 CPY #$0000
    // Overlapping static entry reached from 0xC0B07E.
    case 0xC0B080: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/set_window_mask.asm:34 BEQ @UNKNOWN2
    case 0xC0B081: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/system/set_window_mask.asm:35 AND #$00AA
    case 0xC0B083: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000AA, 2); else cpu.execute_instruction<0x29>(0x008FAA, 3); return true;
    // src/system/set_window_mask.asm:37 STA f:WOBJSEL
    case 0xC0B085: cpu.execute_instruction<0x8F>(0x002125, 4); return true;
    // src/system/set_window_mask.asm:37 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC0B083.
    case 0xC0B086: cpu.execute_instruction<0x25>(0x000021, 2); return true;
    // src/system/set_window_mask.asm:37 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC0B086.
    case 0xC0B088: cpu.execute_instruction<0x00>(0x000068, 2); return true;
    // src/system/set_window_mask.asm:38 PLA
    case 0xC0B089: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/set_window_mask.asm:39 AND #$001F
    case 0xC0B08A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x008F1F, 3); return true;
    // src/system/set_window_mask.asm:40 STA f:TMW
    case 0xC0B08C: cpu.execute_instruction<0x8F>(0x00212E, 4); return true;
    // src/system/set_window_mask.asm:40 STA f:TMW
    // Overlapping static entry reached from 0xC0B08A.
    case 0xC0B08D: cpu.execute_instruction<0x2E>(0x000021, 3); return true;
    // src/system/set_window_mask.asm:41 STA f:TSW
    case 0xC0B090: cpu.execute_instruction<0x8F>(0x00212F, 4); return true;
    // src/system/set_window_mask.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC0B094: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/set_window_mask.asm:43 LDA #$5555
    case 0xC0B096: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000055, 2); else cpu.execute_instruction<0xA9>(0x005555, 3); return true;
    // src/system/set_window_mask.asm:43 LDA #$5555
    // Overlapping static entry reached from 0xC0B096.
    case 0xC0B098: cpu.execute_instruction<0x55>(0x0000C0, 2); return true;
    // src/system/set_window_mask.asm:44 CPY #$0000
    case 0xC0B099: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/system/set_window_mask.asm:44 CPY #$0000
    // Overlapping static entry reached from 0xC0B098.
    case 0xC0B09A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/system/set_window_mask.asm:44 CPY #$0000
    // Overlapping static entry reached from 0xC0B099.
    case 0xC0B09B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/set_window_mask.asm:45 BEQ @UNKNOWN3
    case 0xC0B09C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/system/set_window_mask.asm:46 LDA #$0000
    case 0xC0B09E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/set_window_mask.asm:46 LDA #$0000
    // Overlapping static entry reached from 0xC0B09E.
    case 0xC0B0A0: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/system/set_window_mask.asm:48 STA f:WBGLOG
    case 0xC0B0A1: cpu.execute_instruction<0x8F>(0x00212A, 4); return true;
    // src/system/set_window_mask.asm:49 RTL
    case 0xC0B0A5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/setjmp.asm (source_named).
bool execute_system_setjmp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/setjmp.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08F42: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/setjmp.asm:4 TAY
    case 0xC08F44: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/setjmp.asm:5 PHB
    case 0xC08F45: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/system/setjmp.asm:6 PEA $0000
    case 0xC08F46: cpu.execute_instruction<0xF4>(0x000000, 3); return true;
    // src/system/setjmp.asm:7 PLB
    case 0xC08F49: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/setjmp.asm:8 PLB
    case 0xC08F4A: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/setjmp.asm:9 LDA $01,S
    case 0xC08F4B: cpu.execute_instruction<0xA3>(0x000001, 2); return true;
    // src/system/setjmp.asm:10 STA __BSS_START__,Y
    case 0xC08F4D: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/system/setjmp.asm:11 LDA $03,S
    case 0xC08F50: cpu.execute_instruction<0xA3>(0x000003, 2); return true;
    // src/system/setjmp.asm:12 STA __BSS_START__+2,Y
    case 0xC08F52: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/system/setjmp.asm:13 PHP
    case 0xC08F55: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/setjmp.asm:14 PHP
    case 0xC08F56: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/setjmp.asm:15 PLA
    case 0xC08F57: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/setjmp.asm:16 STA __BSS_START__+4,Y
    case 0xC08F58: cpu.execute_instruction<0x99>(0x000004, 3); return true;
    // src/system/setjmp.asm:17 TDC
    case 0xC08F5B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/system/setjmp.asm:18 STA __BSS_START__+5,Y
    case 0xC08F5C: cpu.execute_instruction<0x99>(0x000005, 3); return true;
    // src/system/setjmp.asm:19 TSC
    case 0xC08F5F: cpu.execute_instruction<0x3B>(0x000000, 1); return true;
    // src/system/setjmp.asm:20 STA __BSS_START__+7,Y
    case 0xC08F60: cpu.execute_instruction<0x99>(0x000007, 3); return true;
    // src/system/setjmp.asm:21 PLB
    case 0xC08F63: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/setjmp.asm:22 LDA #$0000
    case 0xC08F64: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/setjmp.asm:22 LDA #$0000
    // Overlapping static entry reached from 0xC08F64.
    case 0xC08F66: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/system/setjmp.asm:23 RTL
    case 0xC08F67: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/strcat.asm (source_named).
bool execute_system_strcat_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/strcat.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC07C8A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/strcat.asm:13 END_STACK_VARS
    case 0xC07C8C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/strcat.asm:13 END_STACK_VARS
    case 0xC07C8D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/strcat.asm:13 END_STACK_VARS
    case 0xC07C8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/strcat.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC07C8E.
    case 0xC07C90: cpu.execute_instruction<0xFF>(0x32A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/strcat.asm:13 END_STACK_VARS
    case 0xC07C91: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/strcat.asm:14 MOVE_INT @SOURCE, @VIRTUAL0A
    case 0xC07C92: cpu.execute_instruction<0xA5>(0x000032, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/strcat.asm:14 MOVE_INT @SOURCE, @VIRTUAL0A
    case 0xC07C94: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/strcat.asm:14 MOVE_INT @SOURCE, @VIRTUAL0A
    case 0xC07C96: cpu.execute_instruction<0xA5>(0x000034, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/strcat.asm:14 MOVE_INT @SOURCE, @VIRTUAL0A
    case 0xC07C98: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/strcat.asm:15 MOVE_INT @DESTINATION, @VIRTUAL06
    case 0xC07C9A: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/strcat.asm:15 MOVE_INT @DESTINATION, @VIRTUAL06
    case 0xC07C9C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/strcat.asm:15 MOVE_INT @DESTINATION, @VIRTUAL06
    case 0xC07C9E: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/strcat.asm:15 MOVE_INT @DESTINATION, @VIRTUAL06
    case 0xC07CA0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/strcat.asm:16 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC07CA2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/strcat.asm:16 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC07CA4: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/strcat.asm:16 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC07CA6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/strcat.asm:16 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC07CA8: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/strcat.asm:17 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC07CAA: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/strcat.asm:17 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC07CAC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/strcat.asm:17 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC07CAE: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/strcat.asm:17 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC07CB0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/strcat.asm:18 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC07CB2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/strcat.asm:18 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC07CB4: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/strcat.asm:18 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC07CB6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/strcat.asm:18 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC07CB8: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/system/strcat.asm:19 BRA @UNKNOWN1
    case 0xC07CBA: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/system/strcat.asm:21 INC @VIRTUAL06
    case 0xC07CBC: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/strcat.asm:22 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC07CBE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/strcat.asm:22 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC07CC0: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/strcat.asm:22 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC07CC2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/strcat.asm:22 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC07CC4: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/system/strcat.asm:24 LDA [@VIRTUAL06]
    case 0xC07CC6: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/strcat.asm:25 AND #$00FF
    case 0xC07CC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/strcat.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC07CC8.
    case 0xC07CCA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/system/strcat.asm:26 BNE @UNKNOWN0
    case 0xC07CCB: cpu.execute_instruction<0xD0>(0x0000EF, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/strcat.asm:27 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC07CCD: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/strcat.asm:27 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC07CCF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/strcat.asm:27 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC07CD1: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/strcat.asm:27 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC07CD3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/strcat.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07CD5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/strcat.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07CD7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/strcat.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07CD9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/strcat.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07CDB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/strcat.asm:29 JSL STRLEN
    case 0xC07CDD: cpu.execute_instruction<0x22>(0xC08F22, 4); return true;
    // src/system/strcat.asm:30 STA @LOCAL02
    case 0xC07CE1: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/strcat.asm:31 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC07CE3: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/strcat.asm:31 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC07CE5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/strcat.asm:31 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC07CE7: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/strcat.asm:31 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC07CE9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/strcat.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07CEB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/strcat.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07CED: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/strcat.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07CEF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/strcat.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07CF1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/strcat.asm:33 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC07CF3: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/strcat.asm:33 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC07CF5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/strcat.asm:33 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC07CF7: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/strcat.asm:33 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC07CF9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/strcat.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC07CFB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/strcat.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC07CFD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/strcat.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC07CFF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/strcat.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC07D01: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/strcat.asm:35 LDA @LOCAL02
    case 0xC07D03: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/system/strcat.asm:36 INC
    case 0xC07D05: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/strcat.asm:37 JSL MEMCPY24
    case 0xC07D06: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/strcat.asm:38 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC07D0A: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/strcat.asm:38 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC07D0C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/strcat.asm:38 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC07D0E: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/strcat.asm:38 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC07D10: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/strcat.asm:39 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC07D12: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/strcat.asm:39 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC07D14: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/strcat.asm:39 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC07D16: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/strcat.asm:39 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC07D18: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/strcat.asm:40 END_C_FUNCTION
    case 0xC07D1A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/strcat.asm:40 END_C_FUNCTION
    case 0xC07D1B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/strcmp.asm (source_named).
bool execute_system_strcmp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/strcmp.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC08F2F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/strcmp.asm:4 LDY #$FFFF
    case 0xC08F31: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/system/strcmp.asm:4 LDY #$FFFF
    // Overlapping static entry reached from 0xC08F31.
    case 0xC08F33: cpu.execute_instruction<0xFF>(0x0EB7C8, 4); return true;
    // src/system/strcmp.asm:6 INY
    case 0xC08F34: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/strcmp.asm:7 LDA [$0E],Y
    case 0xC08F35: cpu.execute_instruction<0xB7>(0x00000E, 2); return true;
    // src/system/strcmp.asm:8 BEQ @LOOP_EXIT
    case 0xC08F37: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/system/strcmp.asm:9 CMP [$12],Y
    case 0xC08F39: cpu.execute_instruction<0xD7>(0x000012, 2); return true;
    // src/system/strcmp.asm:10 BEQ @LOOP_BODY
    case 0xC08F3B: cpu.execute_instruction<0xF0>(0x0000F7, 2); return true;
    // src/system/strcmp.asm:11 LDA #$0001
    case 0xC08F3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00C201, 3); return true;
    // src/system/strcmp.asm:13 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08F3F: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/strcmp.asm:13 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC08F3D.
    case 0xC08F40: cpu.execute_instruction<0x30>(0x00006B, 2); return true;
    // src/system/strcmp.asm:14 RTL
    case 0xC08F41: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/strlen.asm (source_named).
bool execute_system_strlen_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/strlen.asm:3 SEP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08F22: cpu.execute_instruction<0xE2>(0x000030, 2); return true;
    // src/system/strlen.asm:4 LDY #$00FF
    case 0xC08F24: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00C8FF, 3); return true;
    // src/system/strlen.asm:6 INY
    case 0xC08F26: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/strlen.asm:7 LDA [$0E],Y
    case 0xC08F27: cpu.execute_instruction<0xB7>(0x00000E, 2); return true;
    // src/system/strlen.asm:8 BNE @LOOP_BODY
    case 0xC08F29: cpu.execute_instruction<0xD0>(0x0000FB, 2); return true;
    // src/system/strlen.asm:9 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08F2B: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/strlen.asm:10 TYA
    case 0xC08F2D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/strlen.asm:11 RTL
    case 0xC08F2E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/test_sram_size.asm (source_named).
bool execute_system_test_sram_size_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/test_sram_size.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC08391: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/test_sram_size.asm:4 LDA #$0030
    case 0xC08393: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x008F30, 3); return true;
    // src/system/test_sram_size.asm:5 STA f:SRAM_SIZE_1_SCRATCH
    case 0xC08395: cpu.execute_instruction<0x8F>(0x307FF0, 4); return true;
    // src/system/test_sram_size.asm:5 STA f:SRAM_SIZE_1_SCRATCH
    // Overlapping static entry reached from 0xC08393.
    case 0xC08396: cpu.execute_instruction<0xF0>(0x00007F, 2); return true;
    // src/system/test_sram_size.asm:5 STA f:SRAM_SIZE_1_SCRATCH
    // Overlapping static entry reached from 0xC08396.
    case 0xC08398: cpu.execute_instruction<0x30>(0x00001A, 2); return true;
    // src/system/test_sram_size.asm:6 INC
    case 0xC08399: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/test_sram_size.asm:7 STA f:SRAM_SIZE_2_SCRATCH
    case 0xC0839A: cpu.execute_instruction<0x8F>(0x317FF0, 4); return true;
    // src/system/test_sram_size.asm:8 CMP f:SRAM_SIZE_1_SCRATCH
    case 0xC0839E: cpu.execute_instruction<0xCF>(0x307FF0, 4); return true;
    // src/system/test_sram_size.asm:9 BEQ @END_OF_SRAM_FOUND
    case 0xC083A2: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/system/test_sram_size.asm:10 INC
    case 0xC083A4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/test_sram_size.asm:11 STA f:SRAM_SIZE_3_SCRATCH
    case 0xC083A5: cpu.execute_instruction<0x8F>(0x327FF0, 4); return true;
    // src/system/test_sram_size.asm:12 CMP f:SRAM_SIZE_1_SCRATCH
    case 0xC083A9: cpu.execute_instruction<0xCF>(0x307FF0, 4); return true;
    // src/system/test_sram_size.asm:13 BEQ @END_OF_SRAM_FOUND
    case 0xC083AD: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/system/test_sram_size.asm:14 STA LAST_SRAM_BANK
    case 0xC083AF: cpu.execute_instruction<0x8D>(0x000A36, 3); return true;
    // src/system/test_sram_size.asm:16 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC083B2: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/test_sram_size.asm:17 LDA LAST_SRAM_BANK
    case 0xC083B4: cpu.execute_instruction<0xAD>(0x000A36, 3); return true;
    // src/system/test_sram_size.asm:18 RTL
    case 0xC083B7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/transfer_to_vram.asm (source_named).
bool execute_system_transfer_to_vram_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/transfer_to_vram.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC085B7: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/transfer_to_vram.asm:4 STA DMA_COPY_MODE
    case 0xC085B9: cpu.execute_instruction<0x8D>(0x000091, 3); return true;
    // src/system/transfer_to_vram.asm:6 LDA DMA_BYTES_COPIED
    case 0xC085BC: cpu.execute_instruction<0xAD>(0x000099, 3); return true;
    // src/system/transfer_to_vram.asm:7 BNE @UNKNOWN0
    case 0xC085BF: cpu.execute_instruction<0xD0>(0x0000FB, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/transfer_to_vram.asm:8 MOVE_INT $0E, DMA_COPY_RAM_SRC
    case 0xC085C1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/transfer_to_vram.asm:8 MOVE_INT $0E, DMA_COPY_RAM_SRC
    case 0xC085C3: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/transfer_to_vram.asm:8 MOVE_INT $0E, DMA_COPY_RAM_SRC
    case 0xC085C6: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/transfer_to_vram.asm:8 MOVE_INT $0E, DMA_COPY_RAM_SRC
    case 0xC085C8: cpu.execute_instruction<0x8D>(0x000096, 3); return true;
    // src/system/transfer_to_vram.asm:9 STY DMA_COPY_VRAM_DEST
    case 0xC085CB: cpu.execute_instruction<0x8C>(0x000097, 3); return true;
    // src/system/transfer_to_vram.asm:10 CPX #$1201
    case 0xC085CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x001201, 3); return true;
    // src/system/transfer_to_vram.asm:10 CPX #$1201
    // Overlapping static entry reached from 0xC085CE.
    case 0xC085D0: cpu.execute_instruction<0x12>(0x000090, 2); return true;
    // src/system/transfer_to_vram.asm:11 BCC @UNKNOWN3
    case 0xC085D1: cpu.execute_instruction<0x90>(0x000031, 2); return true;
    // src/system/transfer_to_vram.asm:11 BCC @UNKNOWN3
    // Overlapping static entry reached from 0xC085D0.
    case 0xC085D2: cpu.execute_instruction<0x31>(0x0000A9, 2); return true;
    // src/system/transfer_to_vram.asm:12 LDA #$1200
    case 0xC085D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001200, 3); return true;
    // src/system/transfer_to_vram.asm:12 LDA #$1200
    // Overlapping static entry reached from 0xC085D2.
    case 0xC085D4: cpu.execute_instruction<0x00>(0x000012, 2); return true;
    // src/system/transfer_to_vram.asm:12 LDA #$1200
    // Overlapping static entry reached from 0xC085D3.
    case 0xC085D5: cpu.execute_instruction<0x12>(0x00008D, 2); return true;
    // src/system/transfer_to_vram.asm:13 STA DMA_COPY_SIZE
    case 0xC085D6: cpu.execute_instruction<0x8D>(0x000092, 3); return true;
    // src/system/transfer_to_vram.asm:13 STA DMA_COPY_SIZE
    // Overlapping static entry reached from 0xC085D5.
    case 0xC085D7: cpu.execute_instruction<0x92>(0x000000, 2); return true;
    // src/system/transfer_to_vram.asm:15 CPX #$1201
    case 0xC085D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x001201, 3); return true;
    // src/system/transfer_to_vram.asm:15 CPX #$1201
    // Overlapping static entry reached from 0xC085D9.
    case 0xC085DB: cpu.execute_instruction<0x12>(0x000090, 2); return true;
    // src/system/transfer_to_vram.asm:16 BCC @UNKNOWN3
    case 0xC085DC: cpu.execute_instruction<0x90>(0x000026, 2); return true;
    // src/system/transfer_to_vram.asm:16 BCC @UNKNOWN3
    // Overlapping static entry reached from 0xC085DB.
    case 0xC085DD: cpu.execute_instruction<0x26>(0x0000AD, 2); return true;
    // src/system/transfer_to_vram.asm:18 LDA DMA_BYTES_COPIED
    case 0xC085DE: cpu.execute_instruction<0xAD>(0x000099, 3); return true;
    // src/system/transfer_to_vram.asm:18 LDA DMA_BYTES_COPIED
    // Overlapping static entry reached from 0xC085DD.
    case 0xC085DF: cpu.execute_instruction<0x99>(0x00D000, 3); return true;
    // src/system/transfer_to_vram.asm:19 BNE @UNKNOWN2
    case 0xC085E1: cpu.execute_instruction<0xD0>(0x0000FB, 2); return true;
    // src/system/transfer_to_vram.asm:19 BNE @UNKNOWN2
    // Overlapping static entry reached from 0xC085DF.
    case 0xC085E2: cpu.execute_instruction<0xFB>(0x000000, 1); return true;
    // src/system/transfer_to_vram.asm:20 PHX
    case 0xC085E3: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/system/transfer_to_vram.asm:21 JSL PREPARE_VRAM_COPY_COMMON
    case 0xC085E4: cpu.execute_instruction<0x22>(0xC08643, 4); return true;
    // src/system/transfer_to_vram.asm:23 LDA DMA_COPY_RAM_SRC
    case 0xC085E8: cpu.execute_instruction<0xAD>(0x000094, 3); return true;
    // src/system/transfer_to_vram.asm:24 CLC
    case 0xC085EB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/transfer_to_vram.asm:25 ADC #$1200
    case 0xC085EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x001200, 3); return true;
    // src/system/transfer_to_vram.asm:25 ADC #$1200
    // Overlapping static entry reached from 0xC085EC.
    case 0xC085EE: cpu.execute_instruction<0x12>(0x00008D, 2); return true;
    // src/system/transfer_to_vram.asm:26 STA DMA_COPY_RAM_SRC
    case 0xC085EF: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // src/system/transfer_to_vram.asm:26 STA DMA_COPY_RAM_SRC
    // Overlapping static entry reached from 0xC085EE.
    case 0xC085F0: cpu.execute_instruction<0x94>(0x000000, 2); return true;
    // src/system/transfer_to_vram.asm:27 LDA DMA_COPY_VRAM_DEST
    case 0xC085F2: cpu.execute_instruction<0xAD>(0x000097, 3); return true;
    // src/system/transfer_to_vram.asm:28 CLC
    case 0xC085F5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/transfer_to_vram.asm:29 ADC #$0900
    case 0xC085F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000900, 3); return true;
    // src/system/transfer_to_vram.asm:29 ADC #$0900
    // Overlapping static entry reached from 0xC085F6.
    case 0xC085F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x00008D, 2); else cpu.execute_instruction<0x09>(0x00978D, 3); return true;
    // src/system/transfer_to_vram.asm:30 STA DMA_COPY_VRAM_DEST
    case 0xC085F9: cpu.execute_instruction<0x8D>(0x000097, 3); return true;
    // src/system/transfer_to_vram.asm:30 STA DMA_COPY_VRAM_DEST
    // Overlapping static entry reached from 0xC085F8.
    case 0xC085FA: cpu.execute_instruction<0x97>(0x000000, 2); return true;
    // src/system/transfer_to_vram.asm:30 STA DMA_COPY_VRAM_DEST
    // Overlapping static entry reached from 0xC085F8.
    case 0xC085FB: cpu.execute_instruction<0x00>(0x000068, 2); return true;
    // src/system/transfer_to_vram.asm:31 PLA
    case 0xC085FC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/transfer_to_vram.asm:32 SEC
    case 0xC085FD: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/transfer_to_vram.asm:33 SBC #$1200
    case 0xC085FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x001200, 3); return true;
    // src/system/transfer_to_vram.asm:33 SBC #$1200
    // Overlapping static entry reached from 0xC085FE.
    case 0xC08600: cpu.execute_instruction<0x12>(0x0000AA, 2); return true;
    // src/system/transfer_to_vram.asm:34 TAX
    case 0xC08601: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/transfer_to_vram.asm:35 BRA @UNKNOWN1
    case 0xC08602: cpu.execute_instruction<0x80>(0x0000D5, 2); return true;
    // src/system/transfer_to_vram.asm:37 STX DMA_COPY_SIZE
    case 0xC08604: cpu.execute_instruction<0x8E>(0x000092, 3); return true;
    // src/system/transfer_to_vram.asm:39 LDA DMA_BYTES_COPIED
    case 0xC08607: cpu.execute_instruction<0xAD>(0x000099, 3); return true;
    // src/system/transfer_to_vram.asm:40 BNE @UNKNOWN4
    case 0xC0860A: cpu.execute_instruction<0xD0>(0x0000FB, 2); return true;
    // src/system/transfer_to_vram.asm:41 JSL PREPARE_VRAM_COPY_COMMON
    case 0xC0860C: cpu.execute_instruction<0x22>(0xC08643, 4); return true;
    // src/system/transfer_to_vram.asm:44 LDA DMA_BYTES_COPIED
    case 0xC08610: cpu.execute_instruction<0xAD>(0x000099, 3); return true;
    // src/system/transfer_to_vram.asm:45 BNE @UNKNOWN5
    case 0xC08613: cpu.execute_instruction<0xD0>(0x0000FB, 2); return true;
    // src/system/transfer_to_vram.asm:46 RTL
    case 0xC08615: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/wait.asm (source_named).
bool execute_system_wait_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/wait.asm:3 BEGIN_C_FUNCTION
    case 0xC269BE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/wait.asm:7 END_STACK_VARS
    case 0xC269C0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/wait.asm:7 END_STACK_VARS
    case 0xC269C1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/wait.asm:7 END_STACK_VARS
    case 0xC269C2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/wait.asm:7 END_STACK_VARS
    case 0xC269C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/wait.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC269C3.
    case 0xC269C5: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/wait.asm:7 END_STACK_VARS
    case 0xC269C6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/wait.asm:7 END_STACK_VARS
    case 0xC269C7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/wait.asm:8 TAX
    case 0xC269C8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/wait.asm:9 STX @LOCAL00
    case 0xC269C9: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/wait.asm:10 BRA @UNKNOWN1
    case 0xC269CB: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/system/wait.asm:12 JSL WINDOW_TICK
    case 0xC269CD: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/system/wait.asm:14 LDX @LOCAL00
    case 0xC269D1: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/wait.asm:15 TXA
    case 0xC269D3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/wait.asm:16 DEX
    case 0xC269D4: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/system/wait.asm:17 STX @LOCAL00
    case 0xC269D5: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/wait.asm:18 CMP #0
    case 0xC269D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/system/wait.asm:18 CMP #0
    // Overlapping static entry reached from 0xC269D7.
    case 0xC269D9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/system/wait.asm:19 BNE @UNKNOWN0
    case 0xC269DA: cpu.execute_instruction<0xD0>(0x0000F1, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/wait.asm:20 END_C_FUNCTION
    case 0xC269DC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/wait.asm:20 END_C_FUNCTION
    case 0xC269DD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/wait_dma_finished.asm (source_named).
bool execute_system_wait_dma_finished_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/wait_dma_finished.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC08F8B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/wait_dma_finished.asm:4 LDA DMA_QUEUE_INDEX
    case 0xC08F8D: cpu.execute_instruction<0xAD>(0x000000, 3); return true;
    // src/system/wait_dma_finished.asm:6 CMP LAST_COMPLETED_DMA_INDEX
    case 0xC08F90: cpu.execute_instruction<0xCD>(0x000001, 3); return true;
    // src/system/wait_dma_finished.asm:7 BNE @UNKNOWN0
    case 0xC08F93: cpu.execute_instruction<0xD0>(0x0000FB, 2); return true;
    // src/system/wait_dma_finished.asm:8 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08F95: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/wait_dma_finished.asm:9 RTL
    case 0xC08F97: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/wait_until_next_frame.asm (source_named).
bool execute_system_wait_until_next_frame_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/wait_until_next_frame.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC08756: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/wait_until_next_frame.asm:4 LDA NMITIMEN_MIRROR
    case 0xC08758: cpu.execute_instruction<0xAD>(0x00001E, 3); return true;
    // src/system/wait_until_next_frame.asm:5 AND #$00B0
    case 0xC0875B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000B0, 2); else cpu.execute_instruction<0x29>(0x00F0B0, 3); return true;
    // src/system/wait_until_next_frame.asm:6 BEQ @WAITFORNOTVBLANK
    case 0xC0875D: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/system/wait_until_next_frame.asm:6 BEQ @WAITFORNOTVBLANK
    // Overlapping static entry reached from 0xC0875B.
    case 0xC0875E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/wait_until_next_frame.asm:8 LDA NEW_FRAME_STARTED
    case 0xC0875F: cpu.execute_instruction<0xAD>(0x00002B, 3); return true;
    // src/system/wait_until_next_frame.asm:9 BEQ @UNKNOWN0
    case 0xC08762: cpu.execute_instruction<0xF0>(0x0000FB, 2); return true;
    // src/system/wait_until_next_frame.asm:10 STZ NEW_FRAME_STARTED
    case 0xC08764: cpu.execute_instruction<0x9C>(0x00002B, 3); return true;
    // src/system/wait_until_next_frame.asm:11 BRA @UNKNOWN3
    case 0xC08767: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/system/wait_until_next_frame.asm:13 LDA f:HVBJOY
    case 0xC08769: cpu.execute_instruction<0xAF>(0x004212, 4); return true;
    // src/system/wait_until_next_frame.asm:14 BMI @WAITFORNOTVBLANK
    case 0xC0876D: cpu.execute_instruction<0x30>(0x0000FA, 2); return true;
    // src/system/wait_until_next_frame.asm:16 LDA f:HVBJOY
    case 0xC0876F: cpu.execute_instruction<0xAF>(0x004212, 4); return true;
    // src/system/wait_until_next_frame.asm:17 BPL @WAITFORVBLANK
    case 0xC08773: cpu.execute_instruction<0x10>(0x0000FA, 2); return true;
    // src/system/wait_until_next_frame.asm:19 STZ NEW_FRAME_STARTED
    case 0xC08775: cpu.execute_instruction<0x9C>(0x00002B, 3); return true;
    // src/system/wait_until_next_frame.asm:20 PHD
    case 0xC08778: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/system/wait_until_next_frame.asm:21 PEA $0000
    case 0xC08779: cpu.execute_instruction<0xF4>(0x000000, 3); return true;
    // src/system/wait_until_next_frame.asm:22 PLD
    case 0xC0877C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/wait_until_next_frame.asm:23 PHB
    case 0xC0877D: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/system/wait_until_next_frame.asm:24 PEA $0000
    case 0xC0877E: cpu.execute_instruction<0xF4>(0x000000, 3); return true;
    // src/system/wait_until_next_frame.asm:25 PLB
    case 0xC08781: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/wait_until_next_frame.asm:26 PLB
    case 0xC08782: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/wait_until_next_frame.asm:27 JSR UNKNOWN_C08496
    case 0xC08783: cpu.execute_instruction<0x20>(0x008496, 3); return true;
    // src/system/wait_until_next_frame.asm:28 PLB
    case 0xC08786: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/wait_until_next_frame.asm:29 PLD
    case 0xC08787: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/wait_until_next_frame.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC08788: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/wait_until_next_frame.asm:31 RTL
    case 0xC0878A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
