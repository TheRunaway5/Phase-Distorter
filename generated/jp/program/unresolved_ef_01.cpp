// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/unknown/EF/EF0262.asm (unresolved).
bool execute_unresolved_ef_ef0262_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0262.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC13429: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EF0262.asm:5 SEP #PROC_FLAGS::ACCUM8
    case 0xC1342B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EF0262.asm:6 LDA #1
    case 0xC1342D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/EF/EF0262.asm:7 STA HALF_HPPP_METER_SPEED
    case 0xC1342F: cpu.execute_instruction<0x8D>(0x009949, 3); return true;
    // src/unknown/EF/EF0262.asm:7 STA HALF_HPPP_METER_SPEED
    // Overlapping static entry reached from 0xC1342D.
    case 0xC13430: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000099, 2); else cpu.execute_instruction<0x49>(0x00C299, 3); return true;
    // src/unknown/EF/EF0262.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC13432: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EF0262.asm:8 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC13430.
    case 0xC13433: cpu.execute_instruction<0x20>(0x00C26B, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0262.asm:9 END_C_FUNCTION
    case 0xC13434: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF027D.asm (unresolved).
bool execute_unresolved_ef_ef027d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF027D.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3EDCF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF027D.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC3EE21.
    case 0xC3EDD0: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF027D.asm:5 END_STACK_VARS
    case 0xC3EDD1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF027D.asm:5 END_STACK_VARS
    case 0xC3EDD2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF027D.asm:5 END_STACK_VARS
    case 0xC3EDD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF027D.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC3EDD3.
    case 0xC3EDD5: cpu.execute_instruction<0xFF>(0x359C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF027D.asm:5 END_STACK_VARS
    case 0xC3EDD6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:6 STZ BUBBLE_MONKEY_MODE
    case 0xC3EDD7: cpu.execute_instruction<0x9C>(0x00A135, 3); return true;
    // src/unknown/EF/EF027D.asm:6 STZ BUBBLE_MONKEY_MODE
    // Overlapping static entry reached from 0xC3EDD5.
    case 0xC3EDD9: cpu.execute_instruction<0xA1>(0x0000A9, 2); return true;
    // src/unknown/EF/EF027D.asm:7 LDA #30
    case 0xC3EDDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00001E, 3); return true;
    // src/unknown/EF/EF027D.asm:7 LDA #30
    // Overlapping static entry reached from 0xC3EDD9.
    case 0xC3EDDB: cpu.execute_instruction<0x1E>(0x008D00, 3); return true;
    // src/unknown/EF/EF027D.asm:7 LDA #30
    // Overlapping static entry reached from 0xC3EDDA.
    case 0xC3EDDC: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF027D.asm:8 STA BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0xC3EDDD: cpu.execute_instruction<0x8D>(0x00A137, 3); return true;
    // src/unknown/EF/EF027D.asm:8 STA BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    // Overlapping static entry reached from 0xC3EDDB.
    case 0xC3EDDE: cpu.execute_instruction<0x37>(0x0000A1, 2); return true;
    // src/unknown/EF/EF027D.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xC3EDE0: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/EF/EF027D.asm:10 ASL
    case 0xC3EDE3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:11 TAX
    case 0xC3EDE4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:12 LDA #4
    case 0xC3EDE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EF027D.asm:12 LDA #4
    // Overlapping static entry reached from 0xC3EDE5.
    case 0xC3EDE7: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/EF/EF027D.asm:13 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC3EDE8: cpu.execute_instruction<0x9D>(0x000F08, 3); return true;
    // src/unknown/EF/EF027D.asm:14 LDA CURRENT_ENTITY_SLOT
    case 0xC3EDEB: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/EF/EF027D.asm:15 ASL
    case 0xC3EDEE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:16 TAX
    case 0xC3EDEF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:17 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC3EDF0: cpu.execute_instruction<0xBD>(0x000E90, 3); return true;
    // src/unknown/EF/EF027D.asm:18 ASL
    case 0xC3EDF3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:19 TAX
    case 0xC3EDF4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:20 LDA CHOSEN_FOUR_PTRS,X
    case 0xC3EDF5: cpu.execute_instruction<0xBD>(0x00514E, 3); return true;
    // src/unknown/EF/EF027D.asm:21 TAX
    case 0xC3EDF8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:22 LDA a:char_struct::position_index,X
    case 0xC3EDF9: cpu.execute_instruction<0xBD>(0x00003C, 3); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/EF/EF027D.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC3EDFC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/EF/EF027D.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC3EDFE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/EF/EF027D.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC3EDFF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/EF/EF027D.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC3EE01: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/EF/EF027D.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC3EE02: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:24 CLC
    case 0xC3EE03: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:25 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC3EE04: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0054DC, 3); return true;
    // src/unknown/EF/EF027D.asm:25 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC3EE04.
    case 0xC3EE06: cpu.execute_instruction<0x54>(0x00ADAA, 3); return true;
    // src/unknown/EF/EF027D.asm:26 TAX
    case 0xC3EE07: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:27 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC3EE08: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/EF/EF027D.asm:27 LDA GAME_STATE+game_state::leader_x_coord
    // Overlapping static entry reached from 0xC3EE06.
    case 0xC3EE09: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:27 LDA GAME_STATE+game_state::leader_x_coord
    // Overlapping static entry reached from 0xC3EE09.
    case 0xC3EE0A: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/EF/EF027D.asm:28 STA a:player_position_buffer_entry::x_coord,X
    case 0xC3EE0B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF027D.asm:29 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC3EE0E: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/EF/EF027D.asm:30 STA a:player_position_buffer_entry::y_coord,X
    case 0xC3EE11: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF027D.asm:31 END_C_FUNCTION
    case 0xC3EE14: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF027D.asm:31 END_C_FUNCTION
    case 0xC3EE15: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF02C4.asm (unresolved).
bool execute_unresolved_ef_ef02c4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF02C4.asm:3 BEGIN_C_FUNCTION
    case 0xC3EE16: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF02C4.asm:8 END_STACK_VARS
    case 0xC3EE18: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EF02C4.asm:8 END_STACK_VARS
    case 0xC3EE19: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF02C4.asm:8 END_STACK_VARS
    case 0xC3EE1A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF02C4.asm:8 END_STACK_VARS
    case 0xC3EE1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF02C4.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC3EE1B.
    case 0xC3EE1D: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF02C4.asm:8 END_STACK_VARS
    case 0xC3EE1E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EF02C4.asm:8 END_STACK_VARS
    case 0xC3EE1F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:9 STA @LOCAL01
    case 0xC3EE20: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EF02C4.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC3EE1D.
    case 0xC3EE21: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/unknown/EF/EF02C4.asm:10 LDA BUBBLE_MONKEY_MODE
    case 0xC3EE22: cpu.execute_instruction<0xAD>(0x00A135, 3); return true;
    // src/unknown/EF/EF02C4.asm:10 LDA BUBBLE_MONKEY_MODE
    // Overlapping static entry reached from 0xC3EE21.
    case 0xC3EE23: cpu.execute_instruction<0x35>(0x0000A1, 2); return true;
    // src/unknown/EF/EF02C4.asm:11 CMP #3
    case 0xC3EE25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EF02C4.asm:11 CMP #3
    // Overlapping static entry reached from 0xC3EE25.
    case 0xC3EE27: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EF02C4.asm:12 BEQ @UNKNOWN0
    case 0xC3EE28: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/EF/EF02C4.asm:13 LDA BUBBLE_MONKEY_MODE
    case 0xC3EE2A: cpu.execute_instruction<0xAD>(0x00A135, 3); return true;
    // src/unknown/EF/EF02C4.asm:14 CMP #1
    case 0xC3EE2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EF02C4.asm:14 CMP #1
    // Overlapping static entry reached from 0xC3EE2D.
    case 0xC3EE2F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EF02C4.asm:15 BNE @UNKNOWN1
    case 0xC3EE30: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/EF/EF02C4.asm:17 LDA #2
    case 0xC3EE32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EF02C4.asm:17 LDA #2
    // Overlapping static entry reached from 0xC3EE32.
    case 0xC3EE34: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF02C4.asm:18 STA BUBBLE_MONKEY_MODE
    case 0xC3EE35: cpu.execute_instruction<0x8D>(0x00A135, 3); return true;
    // src/unknown/EF/EF02C4.asm:19 BRA @UNKNOWN3
    case 0xC3EE38: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/unknown/EF/EF02C4.asm:21 LDA @LOCAL01
    case 0xC3EE3A: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/EF/EF02C4.asm:22 JSL UNKNOWN_C03E9D
    case 0xC3EE3C: cpu.execute_instruction<0x22>(0xC0411A, 4); return true;
    // src/unknown/EF/EF02C4.asm:23 CMP #40
    case 0xC3EE40: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000028, 2); else cpu.execute_instruction<0xC9>(0x000028, 3); return true;
    // src/unknown/EF/EF02C4.asm:23 CMP #40
    // Overlapping static entry reached from 0xC3EE40.
    case 0xC3EE42: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/EF/EF02C4.asm:24 BLTEQ @UNKNOWN2
    case 0xC3EE43: cpu.execute_instruction<0x90>(0x00000A, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/EF/EF02C4.asm:24 BLTEQ @UNKNOWN2
    case 0xC3EE45: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/EF/EF02C4.asm:25 LDA #2
    case 0xC3EE47: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EF02C4.asm:25 LDA #2
    // Overlapping static entry reached from 0xC3EE47.
    case 0xC3EE49: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF02C4.asm:26 STA BUBBLE_MONKEY_MODE
    case 0xC3EE4A: cpu.execute_instruction<0x8D>(0x00A135, 3); return true;
    // src/unknown/EF/EF02C4.asm:27 BRA @UNKNOWN3
    case 0xC3EE4D: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/EF/EF02C4.asm:29 JSL RAND
    case 0xC3EE4F: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/unknown/EF/EF02C4.asm:30 AND #$0003
    case 0xC3EE53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/EF/EF02C4.asm:30 AND #$0003
    // Overlapping static entry reached from 0xC3EE53.
    case 0xC3EE55: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/EF/EF02C4.asm:31 TAX
    case 0xC3EE56: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:32 STX @LOCAL00
    case 0xC3EE57: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/EF/EF02C4.asm:33 STX BUBBLE_MONKEY_MODE
    case 0xC3EE59: cpu.execute_instruction<0x8E>(0x00A135, 3); return true;
    // src/unknown/EF/EF02C4.asm:35 LDX @LOCAL00
    case 0xC3EE5C: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/EF/EF02C4.asm:36 TXA
    case 0xC3EE5E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:37 AND #$0003
    case 0xC3EE5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/EF/EF02C4.asm:37 AND #$0003
    // Overlapping static entry reached from 0xC3EE5F.
    case 0xC3EE61: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/EF/EF02C4.asm:38 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3EE62: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/EF/EF02C4.asm:38 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3EE64: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/EF/EF02C4.asm:38 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3EE65: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/EF/EF02C4.asm:39 INC
    case 0xC3EE67: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:40 INC
    case 0xC3EE68: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:41 INC
    case 0xC3EE69: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:42 INC
    case 0xC3EE6A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF02C4.asm:43 STA BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0xC3EE6B: cpu.execute_instruction<0x8D>(0x00A137, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF02C4.asm:44 END_C_FUNCTION
    case 0xC3EE6E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/EF/EF02C4.asm:44 END_C_FUNCTION
    case 0xC3EE6F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF031E.asm (unresolved).
bool execute_unresolved_ef_ef031e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF031E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3EE70: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF031E.asm:11 END_STACK_VARS
    case 0xC3EE72: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF031E.asm:11 END_STACK_VARS
    case 0xC3EE73: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF031E.asm:11 END_STACK_VARS
    case 0xC3EE74: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF031E.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC3EE74.
    case 0xC3EE76: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF031E.asm:11 END_STACK_VARS
    case 0xC3EE77: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:12 LDA CURRENT_ENTITY_SLOT
    case 0xC3EE78: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/EF/EF031E.asm:12 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC3EE76.
    case 0xC3EE7A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:13 STA @LOCAL05
    case 0xC3EE7B: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EF031E.asm:14 ASL
    case 0xC3EE7D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:15 TAX
    case 0xC3EE7E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:16 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC3EE7F: cpu.execute_instruction<0xBD>(0x000E90, 3); return true;
    // src/unknown/EF/EF031E.asm:17 LDY #.SIZEOF(char_struct)
    case 0xC3EE82: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/EF/EF031E.asm:17 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC3EE82.
    case 0xC3EE84: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF031E.asm:18 JSL MULT168
    case 0xC3EE85: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/EF/EF031E.asm:19 CLC
    case 0xC3EE89: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:20 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC3EE8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/unknown/EF/EF031E.asm:20 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC3EE8A.
    case 0xC3EE8C: cpu.execute_instruction<0x9C>(0x008CA8, 3); return true;
    // src/unknown/EF/EF031E.asm:21 TAY
    case 0xC3EE8D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:22 STY CURRENT_PARTY_MEMBER_TICK
    case 0xC3EE8E: cpu.execute_instruction<0x8C>(0x00514C, 3); return true;
    // src/unknown/EF/EF031E.asm:22 STY CURRENT_PARTY_MEMBER_TICK
    // Overlapping static entry reached from 0xC3EE8C.
    case 0xC3EE8F: cpu.execute_instruction<0x4C>(0x00B951, 3); return true;
    // src/unknown/EF/EF031E.asm:23 LDA a:char_struct::position_index,Y
    case 0xC3EE91: cpu.execute_instruction<0xB9>(0x00003C, 3); return true;
    // src/unknown/EF/EF031E.asm:24 STA @VIRTUAL02
    case 0xC3EE94: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF031E.asm:25 STA @VIRTUAL04
    case 0xC3EE96: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EF031E.asm:26 STA @LOCAL04
    case 0xC3EE98: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/EF/EF031E.asm:27 LDA @VIRTUAL02
    case 0xC3EE9A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/EF/EF031E.asm:28 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC3EE9C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/EF/EF031E.asm:28 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC3EE9E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/EF/EF031E.asm:28 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC3EE9F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/EF/EF031E.asm:28 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC3EEA1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/EF/EF031E.asm:28 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC3EEA2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:29 CLC
    case 0xC3EEA3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:30 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC3EEA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0054DC, 3); return true;
    // src/unknown/EF/EF031E.asm:30 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC3EEA4.
    case 0xC3EEA6: cpu.execute_instruction<0x54>(0x001485, 3); return true;
    // src/unknown/EF/EF031E.asm:31 STA @LOCAL03
    case 0xC3EEA7: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:32 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC3EEA9: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/unknown/EF/EF031E.asm:33 STA @LOCAL02
    case 0xC3EEAC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:34 LDA (@LOCAL03) ;player_position_buffer_entry::x_coord
    case 0xC3EEAE: cpu.execute_instruction<0xB2>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:35 STA ENTITY_ABS_X_TABLE,X
    case 0xC3EEB0: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/unknown/EF/EF031E.asm:36 LDY #player_position_buffer_entry::y_coord
    case 0xC3EEB3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/EF/EF031E.asm:36 LDY #player_position_buffer_entry::y_coord
    // Overlapping static entry reached from 0xC3EEB3.
    case 0xC3EEB5: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/EF/EF031E.asm:37 LDA (@LOCAL03),Y
    case 0xC3EEB6: cpu.execute_instruction<0xB1>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:38 STA ENTITY_ABS_Y_TABLE,X
    case 0xC3EEB8: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/unknown/EF/EF031E.asm:39 LDY #player_position_buffer_entry::walking_style
    case 0xC3EEBB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/EF/EF031E.asm:39 LDY #player_position_buffer_entry::walking_style
    // Overlapping static entry reached from 0xC3EEBB.
    case 0xC3EEBD: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/EF/EF031E.asm:40 LDA (@LOCAL03),Y
    case 0xC3EEBE: cpu.execute_instruction<0xB1>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:41 BEQ @UNKNOWN0
    case 0xC3EEC0: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/unknown/EF/EF031E.asm:42 LDY CURRENT_ENTITY_SLOT
    case 0xC3EEC2: cpu.execute_instruction<0xAC>(0x001A38, 3); return true;
    // src/unknown/EF/EF031E.asm:43 TAX
    case 0xC3EEC5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:44 LDA @LOCAL02
    case 0xC3EEC6: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:45 JSL UNKNOWN_C07A56
    case 0xC3EEC8: cpu.execute_instruction<0x22>(0xC07CA6, 4); return true;
    // src/unknown/EF/EF031E.asm:46 LDA #2
    case 0xC3EECC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EF031E.asm:46 LDA #2
    // Overlapping static entry reached from 0xC3EECC.
    case 0xC3EECE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF031E.asm:47 STA @LOCAL00
    case 0xC3EECF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EF031E.asm:48 LDY @VIRTUAL02
    case 0xC3EED1: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/EF/EF031E.asm:49 LDX #30
    case 0xC3EED3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001E, 2); else cpu.execute_instruction<0xA2>(0x00001E, 3); return true;
    // src/unknown/EF/EF031E.asm:49 LDX #30
    // Overlapping static entry reached from 0xC3EED3.
    case 0xC3EED5: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EF031E.asm:50 LDA @LOCAL02
    case 0xC3EED6: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:51 JSL UNKNOWN_C03EC3
    case 0xC3EED8: cpu.execute_instruction<0x22>(0xC04140, 4); return true;
    // src/unknown/EF/EF031E.asm:52 AND #$00FF
    case 0xC3EEDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EF031E.asm:52 AND #$00FF
    // Overlapping static entry reached from 0xC3EEDC.
    case 0xC3EEDE: cpu.execute_instruction<0x00>(0x0000AE, 2); return true;
    // src/unknown/EF/EF031E.asm:53 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC3EEDF: cpu.execute_instruction<0xAE>(0x00514C, 3); return true;
    // src/unknown/EF/EF031E.asm:54 STA a:char_struct::position_index,X
    case 0xC3EEE2: cpu.execute_instruction<0x9D>(0x00003C, 3); return true;
    // src/unknown/EF/EF031E.asm:55 JMP @UNKNOWN14
    case 0xC3EEE5: cpu.execute_instruction<0x4C>(0x00F02C, 3); return true;
    // src/unknown/EF/EF031E.asm:57 LDA BUBBLE_MONKEY_MODE
    case 0xC3EEE8: cpu.execute_instruction<0xAD>(0x00A135, 3); return true;
    // src/unknown/EF/EF031E.asm:58 BEQ @UNKNOWN3
    case 0xC3EEEB: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/EF/EF031E.asm:59 CMP #2
    case 0xC3EEED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EF031E.asm:59 CMP #2
    // Overlapping static entry reached from 0xC3EEED.
    case 0xC3EEEF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EF031E.asm:60 BEQ @UNKNOWN3
    case 0xC3EEF0: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/EF/EF031E.asm:61 CMP #1
    case 0xC3EEF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EF031E.asm:61 CMP #1
    // Overlapping static entry reached from 0xC3EEF2.
    case 0xC3EEF4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/EF/EF031E.asm:62 BEQL @UNKNOWN8
    case 0xC3EEF5: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/EF/EF031E.asm:62 BEQL @UNKNOWN8
    case 0xC3EEF7: cpu.execute_instruction<0x4C>(0x00EF78, 3); return true;
    // src/unknown/EF/EF031E.asm:63 CMP #3
    case 0xC3EEFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EF031E.asm:63 CMP #3
    // Overlapping static entry reached from 0xC3EEFA.
    case 0xC3EEFC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/EF/EF031E.asm:64 BEQL @UNKNOWN9
    case 0xC3EEFD: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/EF/EF031E.asm:64 BEQL @UNKNOWN9
    case 0xC3EEFF: cpu.execute_instruction<0x4C>(0x00EF89, 3); return true;
    // src/unknown/EF/EF031E.asm:65 JMP @UNKNOWN11
    case 0xC3EF02: cpu.execute_instruction<0x4C>(0x00EFE0, 3); return true;
    // src/unknown/EF/EF031E.asm:67 LDA #2
    case 0xC3EF05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EF031E.asm:67 LDA #2
    // Overlapping static entry reached from 0xC3EF05.
    case 0xC3EF07: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF031E.asm:68 STA @LOCAL00
    case 0xC3EF08: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EF031E.asm:69 LDY @VIRTUAL02
    case 0xC3EF0A: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/EF/EF031E.asm:70 LDX #12
    case 0xC3EF0C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000C, 2); else cpu.execute_instruction<0xA2>(0x00000C, 3); return true;
    // src/unknown/EF/EF031E.asm:70 LDX #12
    // Overlapping static entry reached from 0xC3EF0C.
    case 0xC3EF0E: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EF031E.asm:71 LDA @LOCAL02
    case 0xC3EF0F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:72 JSL UNKNOWN_C03EC3
    case 0xC3EF11: cpu.execute_instruction<0x22>(0xC04140, 4); return true;
    // src/unknown/EF/EF031E.asm:73 STA @VIRTUAL02
    case 0xC3EF15: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF031E.asm:74 AND #$00FF
    case 0xC3EF17: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EF031E.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC3EF17.
    case 0xC3EF19: cpu.execute_instruction<0x00>(0x0000AE, 2); return true;
    // src/unknown/EF/EF031E.asm:75 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC3EF1A: cpu.execute_instruction<0xAE>(0x00514C, 3); return true;
    // src/unknown/EF/EF031E.asm:76 STA a:char_struct::position_index,X
    case 0xC3EF1D: cpu.execute_instruction<0x9D>(0x00003C, 3); return true;
    // src/unknown/EF/EF031E.asm:77 LDA @LOCAL04
    case 0xC3EF20: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/EF/EF031E.asm:78 STA @VIRTUAL04
    case 0xC3EF22: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EF031E.asm:79 CMP @VIRTUAL02
    case 0xC3EF24: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/EF/EF031E.asm:80 BEQ @UNKNOWN4
    case 0xC3EF26: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/EF/EF031E.asm:81 LDA @VIRTUAL04
    case 0xC3EF28: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EF031E.asm:82 INC
    case 0xC3EF2A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:83 CMP @VIRTUAL02
    case 0xC3EF2B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/EF/EF031E.asm:84 BNE @UNKNOWN6
    case 0xC3EF2D: cpu.execute_instruction<0xD0>(0x00001D, 2); return true;
    // src/unknown/EF/EF031E.asm:86 LDY CURRENT_ENTITY_SLOT
    case 0xC3EF2F: cpu.execute_instruction<0xAC>(0x001A38, 3); return true;
    // src/unknown/EF/EF031E.asm:87 STY @LOCAL01
    case 0xC3EF32: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/EF/EF031E.asm:87 STY @LOCAL01
    // Overlapping static entry reached from 0xC3EF94.
    case 0xC3EF33: cpu.execute_instruction<0x10>(0x0000A0, 2); return true;
    // src/unknown/EF/EF031E.asm:88 LDY #player_position_buffer_entry::walking_style
    case 0xC3EF34: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/EF/EF031E.asm:88 LDY #player_position_buffer_entry::walking_style
    // Overlapping static entry reached from 0xC3EF33.
    case 0xC3EF35: cpu.execute_instruction<0x06>(0x000000, 2); return true;
    // src/unknown/EF/EF031E.asm:88 LDY #player_position_buffer_entry::walking_style
    // Overlapping static entry reached from 0xC3EF34.
    case 0xC3EF36: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/EF/EF031E.asm:89 LDA (@LOCAL03),Y
    case 0xC3EF37: cpu.execute_instruction<0xB1>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:90 TAX
    case 0xC3EF39: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:91 LDA @LOCAL02
    case 0xC3EF3A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:92 LDY @LOCAL01
    case 0xC3EF3C: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/EF/EF031E.asm:93 JSL UNKNOWN_C07A56
    case 0xC3EF3E: cpu.execute_instruction<0x22>(0xC07CA6, 4); return true;
    // src/unknown/EF/EF031E.asm:94 LDA GAME_STATE + game_state::unknown90
    case 0xC3EF42: cpu.execute_instruction<0xAD>(0x009B36, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/EF/EF031E.asm:95 BEQL @UNKNOWN11
    case 0xC3EF45: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/EF/EF031E.asm:95 BEQL @UNKNOWN11
    case 0xC3EF47: cpu.execute_instruction<0x4C>(0x00EFE0, 3); return true;
    // src/unknown/EF/EF031E.asm:96 BRA @UNKNOWN7
    case 0xC3EF4A: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/EF/EF031E.asm:98 LDY CURRENT_ENTITY_SLOT
    case 0xC3EF4C: cpu.execute_instruction<0xAC>(0x001A38, 3); return true;
    // src/unknown/EF/EF031E.asm:99 LDX #14
    case 0xC3EF4F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000E, 2); else cpu.execute_instruction<0xA2>(0x00000E, 3); return true;
    // src/unknown/EF/EF031E.asm:99 LDX #14
    // Overlapping static entry reached from 0xC3EF4F.
    case 0xC3EF51: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EF031E.asm:100 LDA @LOCAL02
    case 0xC3EF52: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:101 JSL UNKNOWN_C07A56
    case 0xC3EF54: cpu.execute_instruction<0x22>(0xC07CA6, 4); return true;
    // src/unknown/EF/EF031E.asm:103 LDA @LOCAL05
    case 0xC3EF58: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EF031E.asm:104 ASL
    case 0xC3EF5A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:105 STA @LOCAL04
    case 0xC3EF5B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/EF/EF031E.asm:106 TAX
    case 0xC3EF5D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:107 LDY #player_position_buffer_entry::direction
    case 0xC3EF5E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/EF/EF031E.asm:107 LDY #player_position_buffer_entry::direction
    // Overlapping static entry reached from 0xC3EF5E.
    case 0xC3EF60: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/EF/EF031E.asm:108 LDA (@LOCAL03),Y
    case 0xC3EF61: cpu.execute_instruction<0xB1>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:109 STA ENTITY_DIRECTIONS,X
    case 0xC3EF63: cpu.execute_instruction<0x9D>(0x002EF4, 3); return true;
    // src/unknown/EF/EF031E.asm:110 LDA @LOCAL04
    case 0xC3EF66: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/EF/EF031E.asm:111 CLC
    case 0xC3EF68: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:112 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC3EF69: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F8, 2); else cpu.execute_instruction<0x69>(0x000FF8, 3); return true;
    // src/unknown/EF/EF031E.asm:112 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC3EF69.
    case 0xC3EF6B: cpu.execute_instruction<0x0F>(0x00BDAA, 4); return true;
    // src/unknown/EF/EF031E.asm:113 TAX
    case 0xC3EF6C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:114 LDA __BSS_START__,X
    case 0xC3EF6D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:114 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC3EF6B.
    case 0xC3EF6F: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/EF/EF031E.asm:115 AND #$1FFF
    case 0xC3EF70: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x001FFF, 3); return true;
    // src/unknown/EF/EF031E.asm:115 AND #$1FFF
    // Overlapping static entry reached from 0xC3EF70.
    case 0xC3EF72: cpu.execute_instruction<0x1F>(0x00009D, 4); return true;
    // src/unknown/EF/EF031E.asm:116 STA __BSS_START__,X
    case 0xC3EF73: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:117 BRA @UNKNOWN11
    case 0xC3EF76: cpu.execute_instruction<0x80>(0x000068, 2); return true;
    // src/unknown/EF/EF031E.asm:119 TXA
    case 0xC3EF78: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:120 CLC
    case 0xC3EF79: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:121 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC3EF7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F8, 2); else cpu.execute_instruction<0x69>(0x000FF8, 3); return true;
    // src/unknown/EF/EF031E.asm:121 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC3EF7A.
    case 0xC3EF7C: cpu.execute_instruction<0x0F>(0x00BDAA, 4); return true;
    // src/unknown/EF/EF031E.asm:122 TAX
    case 0xC3EF7D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:123 LDA __BSS_START__,X
    case 0xC3EF7E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:123 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC3EF7C.
    case 0xC3EF80: cpu.execute_instruction<0x00>(0x000009, 2); return true;
    // src/unknown/EF/EF031E.asm:124 ORA #$7000
    case 0xC3EF81: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x007000, 3); return true;
    // src/unknown/EF/EF031E.asm:124 ORA #$7000
    // Overlapping static entry reached from 0xC3EF81.
    case 0xC3EF83: cpu.execute_instruction<0x70>(0x00009D, 2); return true;
    // src/unknown/EF/EF031E.asm:125 STA __BSS_START__,X
    case 0xC3EF84: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:125 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC3EF83.
    case 0xC3EF85: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EF031E.asm:126 BRA @UNKNOWN11
    case 0xC3EF87: cpu.execute_instruction<0x80>(0x000057, 2); return true;
    // src/unknown/EF/EF031E.asm:128 TXA
    case 0xC3EF89: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:129 CLC
    case 0xC3EF8A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:130 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC3EF8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F8, 2); else cpu.execute_instruction<0x69>(0x000FF8, 3); return true;
    // src/unknown/EF/EF031E.asm:130 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC3EF8B.
    case 0xC3EF8D: cpu.execute_instruction<0x0F>(0x00BDAA, 4); return true;
    // src/unknown/EF/EF031E.asm:131 TAX
    case 0xC3EF8E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:132 LDA __BSS_START__,X
    case 0xC3EF8F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:132 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC3EF8D.
    case 0xC3EF91: cpu.execute_instruction<0x00>(0x000009, 2); return true;
    // src/unknown/EF/EF031E.asm:133 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN14 | SPRITE_TABLE_10_FLAGS::UNKNOWN13 | SPRITE_TABLE_10_FLAGS::UNKNOWN12
    case 0xC3EF92: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x007000, 3); return true;
    // src/unknown/EF/EF031E.asm:133 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN14 | SPRITE_TABLE_10_FLAGS::UNKNOWN13 | SPRITE_TABLE_10_FLAGS::UNKNOWN12
    // Overlapping static entry reached from 0xC3EF92.
    case 0xC3EF94: cpu.execute_instruction<0x70>(0x00009D, 2); return true;
    // src/unknown/EF/EF031E.asm:134 STA __BSS_START__,X
    case 0xC3EF95: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:134 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC3EF94.
    case 0xC3EF96: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EF031E.asm:135 LDX #.LOWORD(BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION_CHANGE_TIME)
    case 0xC3EF98: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003D, 2); else cpu.execute_instruction<0xA2>(0x00A13D, 3); return true;
    // src/unknown/EF/EF031E.asm:135 LDX #.LOWORD(BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION_CHANGE_TIME)
    // Overlapping static entry reached from 0xC3EF98.
    case 0xC3EF9A: cpu.execute_instruction<0xA1>(0x0000BD, 2); return true;
    // src/unknown/EF/EF031E.asm:136 LDA __BSS_START__,X
    case 0xC3EF9B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:136 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC3EF9A.
    case 0xC3EF9C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EF031E.asm:137 DEC
    case 0xC3EF9E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:138 STA __BSS_START__,X
    case 0xC3EF9F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:139 BNE @UNKNOWN11
    case 0xC3EFA2: cpu.execute_instruction<0xD0>(0x00003C, 2); return true;
    // src/unknown/EF/EF031E.asm:140 LDY #.LOWORD(BUBBLE_MONKEY_DISTRACTED_DIRECTION_CHANGES_LEFT)
    case 0xC3EFA4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003F, 2); else cpu.execute_instruction<0xA0>(0x00A13F, 3); return true;
    // src/unknown/EF/EF031E.asm:140 LDY #.LOWORD(BUBBLE_MONKEY_DISTRACTED_DIRECTION_CHANGES_LEFT)
    // Overlapping static entry reached from 0xC3EFA4.
    case 0xC3EFA6: cpu.execute_instruction<0xA1>(0x0000B9, 2); return true;
    // src/unknown/EF/EF031E.asm:141 LDA __BSS_START__,Y
    case 0xC3EFA7: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:141 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC3EFA6.
    case 0xC3EFA8: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EF031E.asm:142 DEC
    case 0xC3EFAA: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:143 STA __BSS_START__,Y
    case 0xC3EFAB: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:144 BNE @UNKNOWN10
    case 0xC3EFAE: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/EF/EF031E.asm:145 LDA #15
    case 0xC3EFB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00000F, 3); return true;
    // src/unknown/EF/EF031E.asm:145 LDA #15
    // Overlapping static entry reached from 0xC3EFB0.
    case 0xC3EFB2: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF031E.asm:146 STA BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0xC3EFB3: cpu.execute_instruction<0x8D>(0x00A137, 3); return true;
    // src/unknown/EF/EF031E.asm:147 LDA #.LOWORD(-1)
    case 0xC3EFB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EF031E.asm:147 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3EFB6.
    case 0xC3EFB8: cpu.execute_instruction<0xFF>(0x00009D, 4); return true;
    // src/unknown/EF/EF031E.asm:148 STA __BSS_START__,X
    case 0xC3EFB9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF031E.asm:150 JSL RAND
    case 0xC3EFBC: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/unknown/EF/EF031E.asm:151 ASL
    case 0xC3EFC0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:152 ASL
    case 0xC3EFC1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:153 AND #$000F
    case 0xC3EFC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/EF/EF031E.asm:153 AND #$000F
    // Overlapping static entry reached from 0xC3EFC2.
    case 0xC3EFC4: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/unknown/EF/EF031E.asm:154 INC
    case 0xC3EFC5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:155 INC
    case 0xC3EFC6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:156 INC
    case 0xC3EFC7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:157 INC
    case 0xC3EFC8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:158 STA BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION_CHANGE_TIME
    case 0xC3EFC9: cpu.execute_instruction<0x8D>(0x00A13D, 3); return true;
    // src/unknown/EF/EF031E.asm:159 LDA BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION
    case 0xC3EFCC: cpu.execute_instruction<0xAD>(0x00A13B, 3); return true;
    // src/unknown/EF/EF031E.asm:160 EOR #$0004
    case 0xC3EFCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000004, 2); else cpu.execute_instruction<0x49>(0x000004, 3); return true;
    // src/unknown/EF/EF031E.asm:160 EOR #$0004
    // Overlapping static entry reached from 0xC3EFCF.
    case 0xC3EFD1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF031E.asm:161 STA @LOCAL04
    case 0xC3EFD2: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/EF/EF031E.asm:162 STA BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION
    case 0xC3EFD4: cpu.execute_instruction<0x8D>(0x00A13B, 3); return true;
    // src/unknown/EF/EF031E.asm:163 LDA @LOCAL05
    case 0xC3EFD7: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EF031E.asm:164 ASL
    case 0xC3EFD9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:165 TAX
    case 0xC3EFDA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:166 LDA @LOCAL04
    case 0xC3EFDB: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/EF/EF031E.asm:167 STA ENTITY_DIRECTIONS,X
    case 0xC3EFDD: cpu.execute_instruction<0x9D>(0x002EF4, 3); return true;
    // src/unknown/EF/EF031E.asm:169 LDA @LOCAL05
    case 0xC3EFE0: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EF031E.asm:170 ASL
    case 0xC3EFE2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:171 TAX
    case 0xC3EFE3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:172 LDA #4
    case 0xC3EFE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EF031E.asm:172 LDA #4
    // Overlapping static entry reached from 0xC3EFE4.
    case 0xC3EFE6: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/EF/EF031E.asm:173 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC3EFE7: cpu.execute_instruction<0x9D>(0x000F08, 3); return true;
    // src/unknown/EF/EF031E.asm:174 LDX BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0xC3EFEA: cpu.execute_instruction<0xAE>(0x00A137, 3); return true;
    // src/unknown/EF/EF031E.asm:175 DEX
    case 0xC3EFED: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:176 STX BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0xC3EFEE: cpu.execute_instruction<0x8E>(0x00A137, 3); return true;
    // src/unknown/EF/EF031E.asm:177 BNE @UNKNOWN13
    case 0xC3EFF1: cpu.execute_instruction<0xD0>(0x00002D, 2); return true;
    // src/unknown/EF/EF031E.asm:178 LDA @LOCAL02
    case 0xC3EFF3: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF031E.asm:179 JSR UNKNOWN_EF02C4
    case 0xC3EFF5: cpu.execute_instruction<0x20>(0x00EE16, 3); return true;
    // src/unknown/EF/EF031E.asm:180 LDA BUBBLE_MONKEY_MODE
    case 0xC3EFF8: cpu.execute_instruction<0xAD>(0x00A135, 3); return true;
    // src/unknown/EF/EF031E.asm:181 CMP #3
    case 0xC3EFFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EF031E.asm:181 CMP #3
    // Overlapping static entry reached from 0xC3EFFB.
    case 0xC3EFFD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EF031E.asm:182 BNE @UNKNOWN12
    case 0xC3EFFE: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/unknown/EF/EF031E.asm:183 LDA #4
    case 0xC3F000: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EF031E.asm:183 LDA #4
    // Overlapping static entry reached from 0xC3F000.
    case 0xC3F002: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF031E.asm:184 STA BUBBLE_MONKEY_DISTRACTED_DIRECTION_CHANGES_LEFT
    case 0xC3F003: cpu.execute_instruction<0x8D>(0x00A13F, 3); return true;
    // src/unknown/EF/EF031E.asm:185 LDA #6
    case 0xC3F006: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/EF/EF031E.asm:185 LDA #6
    // Overlapping static entry reached from 0xC3F006.
    case 0xC3F008: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF031E.asm:186 STA BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION
    case 0xC3F009: cpu.execute_instruction<0x8D>(0x00A13B, 3); return true;
    // src/unknown/EF/EF031E.asm:187 LDA #15
    case 0xC3F00C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00000F, 3); return true;
    // src/unknown/EF/EF031E.asm:187 LDA #15
    // Overlapping static entry reached from 0xC3F00C.
    case 0xC3F00E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF031E.asm:188 STA BUBBLE_MONKEY_DISTRACTED_NEXT_DIRECTION_CHANGE_TIME
    case 0xC3F00F: cpu.execute_instruction<0x8D>(0x00A13D, 3); return true;
    // src/unknown/EF/EF031E.asm:189 LDA #.LOWORD(-1)
    case 0xC3F012: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EF031E.asm:189 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3F012.
    case 0xC3F014: cpu.execute_instruction<0xFF>(0xA1378D, 4); return true;
    // src/unknown/EF/EF031E.asm:190 STA BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0xC3F015: cpu.execute_instruction<0x8D>(0x00A137, 3); return true;
    // src/unknown/EF/EF031E.asm:191 BRA @UNKNOWN13
    case 0xC3F018: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/EF/EF031E.asm:193 LDA #60
    case 0xC3F01A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/unknown/EF/EF031E.asm:193 LDA #60
    // Overlapping static entry reached from 0xC3F01A.
    case 0xC3F01C: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF031E.asm:194 STA BUBBLE_MONKEY_MOVEMENT_CHANGE_TIMER
    case 0xC3F01D: cpu.execute_instruction<0x8D>(0x00A137, 3); return true;
    // src/unknown/EF/EF031E.asm:196 LDA @LOCAL05
    case 0xC3F020: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EF031E.asm:197 ASL
    case 0xC3F022: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:198 TAX
    case 0xC3F023: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF031E.asm:199 LDY #player_position_buffer_entry::tile_flags
    case 0xC3F024: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/EF/EF031E.asm:199 LDY #player_position_buffer_entry::tile_flags
    // Overlapping static entry reached from 0xC3F024.
    case 0xC3F026: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/EF/EF031E.asm:200 LDA (@LOCAL03),Y
    case 0xC3F027: cpu.execute_instruction<0xB1>(0x000014, 2); return true;
    // src/unknown/EF/EF031E.asm:201 STA ENTITY_SURFACE_FLAGS,X
    case 0xC3F029: cpu.execute_instruction<0x9D>(0x002FA8, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF031E.asm:203 END_C_FUNCTION
    case 0xC3F02C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF031E.asm:203 END_C_FUNCTION
    case 0xC3F02D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0C3D.asm (unresolved).
bool execute_unresolved_ef_ef0c3d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0C3D.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0FB43: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF0C3D.asm:5 END_STACK_VARS
    case 0xC0FB45: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF0C3D.asm:5 END_STACK_VARS
    case 0xC0FB46: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0C3D.asm:5 END_STACK_VARS
    case 0xC0FB47: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0C3D.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC0FB47.
    case 0xC0FB49: cpu.execute_instruction<0xFF>(0x03A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF0C3D.asm:5 END_STACK_VARS
    case 0xC0FB4A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF0C3D.asm:6 LDA #3
    case 0xC0FB4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/EF/EF0C3D.asm:6 LDA #3
    // Overlapping static entry reached from 0xC0FB4B.
    case 0xC0FB4D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF0C3D.asm:7 JSL LOAD_GAME_SLOT
    case 0xC0FB4E: cpu.execute_instruction<0x22>(0xC0F97D, 4); return true;
    // src/unknown/EF/EF0C3D.asm:8 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0FB52: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/EF/EF0C3D.asm:9 STA @VIRTUAL04
    case 0xC0FB55: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EF0C3D.asm:10 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC0FB57: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/EF/EF0C3D.asm:11 STA @VIRTUAL02
    case 0xC0FB5A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF0C3D.asm:12 LDX #1
    case 0xC0FB5C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EF0C3D.asm:12 LDX #1
    // Overlapping static entry reached from 0xC0FB5C.
    case 0xC0FB5E: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/EF/EF0C3D.asm:13 TXA
    case 0xC0FB5F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF0C3D.asm:14 JSL FADE_OUT
    case 0xC0FB60: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/unknown/EF/EF0C3D.asm:15 LDX @VIRTUAL02
    case 0xC0FB64: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EF0C3D.asm:16 LDA @VIRTUAL04
    case 0xC0FB66: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EF0C3D.asm:17 JSL UNKNOWN_C068F4
    case 0xC0FB68: cpu.execute_instruction<0x22>(0xC06B22, 4); return true;
    // src/unknown/EF/EF0C3D.asm:18 LDX @VIRTUAL02
    case 0xC0FB6C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EF0C3D.asm:19 LDA @VIRTUAL04
    case 0xC0FB6E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EF0C3D.asm:20 JSL LOAD_MAP_AT_POSITION
    case 0xC0FB70: cpu.execute_instruction<0x22>(0xC0140C, 4); return true;
    // src/unknown/EF/EF0C3D.asm:21 LDY GAME_STATE+game_state::leader_direction
    case 0xC0FB74: cpu.execute_instruction<0xAC>(0x009B30, 3); return true;
    // src/unknown/EF/EF0C3D.asm:22 LDX @VIRTUAL02
    case 0xC0FB77: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EF0C3D.asm:23 LDA @VIRTUAL04
    case 0xC0FB79: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EF0C3D.asm:24 JSL UNKNOWN_C03FA9
    case 0xC0FB7B: cpu.execute_instruction<0x22>(0xC04230, 4); return true;
    // src/unknown/EF/EF0C3D.asm:25 JSL UNKNOWN_C069AF
    case 0xC0FB7F: cpu.execute_instruction<0x22>(0xC06BDD, 4); return true;
    // src/unknown/EF/EF0C3D.asm:26 LDX #1
    case 0xC0FB83: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EF0C3D.asm:26 LDX #1
    // Overlapping static entry reached from 0xC0FB83.
    case 0xC0FB85: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/EF/EF0C3D.asm:27 TXA
    case 0xC0FB86: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF0C3D.asm:28 JSL FADE_IN
    case 0xC0FB87: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF0C3D.asm:29 END_C_FUNCTION
    case 0xC0FB8B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0C3D.asm:29 END_C_FUNCTION
    case 0xC0FB8C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0C87.asm (unresolved).
bool execute_unresolved_ef_ef0c87_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0C87.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C74C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EF0C87.asm:6 LDA CURRENT_ENTITY_SLOT
    case 0xC4C74E: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/EF/EF0C87.asm:7 ASL
    case 0xC4C751: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0C87.asm:8 TAX
    case 0xC4C752: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0C87.asm:9 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4C753: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/unknown/EF/EF0C87.asm:10 ASL
    case 0xC4C756: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0C87.asm:11 TAX
    case 0xC4C757: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0C87.asm:12 LDA DELIVERY_ATTEMPTS,X
    case 0xC4C758: cpu.execute_instruction<0xBD>(0x00B6C2, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0C87.asm:13 END_C_FUNCTION
    case 0xC4C75B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0C97.asm (unresolved).
bool execute_unresolved_ef_ef0c97_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0C97.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C75C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EF0C97.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC4C75E: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/EF/EF0C97.asm:6 ASL
    case 0xC4C761: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0C97.asm:7 TAX
    case 0xC4C762: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0C97.asm:8 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4C763: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/unknown/EF/EF0C97.asm:9 ASL
    case 0xC4C766: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0C97.asm:10 TAX
    case 0xC4C767: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0C97.asm:11 STZ DELIVERY_ATTEMPTS,X
    case 0xC4C768: cpu.execute_instruction<0x9E>(0x00B6C2, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0C97.asm:12 END_C_FUNCTION
    case 0xC4C76B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0CA7-proto.asm (unresolved).
bool execute_unresolved_ef_ef0ca7_proto_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0CA7-proto.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C76C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF0CA7-proto.asm:7 END_STACK_VARS
    case 0xC4C76E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF0CA7-proto.asm:7 END_STACK_VARS
    case 0xC4C76F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0CA7-proto.asm:7 END_STACK_VARS
    case 0xC4C770: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0CA7-proto.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C770.
    case 0xC4C772: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF0CA7-proto.asm:7 END_STACK_VARS
    case 0xC4C773: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7-proto.asm:8 LDY #0
    case 0xC4C774: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EF0CA7-proto.asm:8 LDY #0
    // Overlapping static entry reached from 0xC4C774.
    case 0xC4C776: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/EF/EF0CA7-proto.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xC4C777: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/EF/EF0CA7-proto.asm:10 ASL
    case 0xC4C77A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7-proto.asm:11 TAX
    case 0xC4C77B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7-proto.asm:12 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4C77C: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/unknown/EF/EF0CA7-proto.asm:31 ASL
    case 0xC4C77F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7-proto.asm:32 CLC
    case 0xC4C780: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7-proto.asm:33 ADC #.LOWORD(DELIVERY_ATTEMPTS)
    case 0xC4C781: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x00B6C2, 3); return true;
    // src/unknown/EF/EF0CA7-proto.asm:33 ADC #.LOWORD(DELIVERY_ATTEMPTS)
    // Overlapping static entry reached from 0xC4C781.
    case 0xC4C783: cpu.execute_instruction<0xB6>(0x0000AA, 2); return true;
    // src/unknown/EF/EF0CA7-proto.asm:34 TAX
    case 0xC4C784: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7-proto.asm:35 LDA __BSS_START__,X
    case 0xC4C785: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF0CA7-proto.asm:36 INC
    case 0xC4C788: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7-proto.asm:37 STA @LOCAL00
    case 0xC4C789: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EF0CA7-proto.asm:38 STA __BSS_START__,X
    case 0xC4C78B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EF0CA7-proto.asm:39 LDA CURRENT_ENTITY_SLOT
    case 0xC4C78E: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/EF/EF0CA7-proto.asm:40 ASL
    case 0xC4C791: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7-proto.asm:41 TAX
    case 0xC4C792: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7-proto.asm:42 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4C793: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/EF/EF0CA7-proto.asm:43 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C796: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/EF/EF0CA7-proto.asm:43 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C798: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/EF/EF0CA7-proto.asm:43 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C799: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/EF/EF0CA7-proto.asm:43 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C79A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/EF/EF0CA7-proto.asm:43 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C79C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/EF/EF0CA7-proto.asm:43 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C79D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7-proto.asm:44 TAX
    case 0xC4C79E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7-proto.asm:45 INX
    case 0xC4C79F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7-proto.asm:46 INX
    case 0xC4C7A0: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7-proto.asm:47 INX
    case 0xC4C7A1: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7-proto.asm:48 INX
    case 0xC4C7A2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/EF/EF0CA7-proto.asm:49 LDA @LOCAL00
    case 0xC4C7A3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EF0CA7-proto.asm:52 CMP f:TIMED_DELIVERY_TABLE,X
    case 0xC4C7A5: cpu.execute_instruction<0xDF>(0xD5F5A5, 4); return true;
    // src/unknown/EF/EF0CA7-proto.asm:53 BCS @RETURN
    case 0xC4C7A9: cpu.execute_instruction<0xB0>(0x000003, 2); return true;
    // src/unknown/EF/EF0CA7-proto.asm:54 LDY #1
    case 0xC4C7AB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/EF/EF0CA7-proto.asm:54 LDY #1
    // Overlapping static entry reached from 0xC4C7AB.
    case 0xC4C7AD: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/EF/EF0CA7-proto.asm:56 TYA
    case 0xC4C7AE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF0CA7-proto.asm:57 END_C_FUNCTION
    case 0xC4C7AF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0CA7-proto.asm:57 END_C_FUNCTION
    case 0xC4C7B0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0D23.asm (unresolved).
bool execute_unresolved_ef_ef0d23_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0D23.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C7B1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF0D23.asm:6 END_STACK_VARS
    case 0xC4C7B3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF0D23.asm:6 END_STACK_VARS
    case 0xC4C7B4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0D23.asm:6 END_STACK_VARS
    case 0xC4C7B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0D23.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C7B5.
    case 0xC4C7B7: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF0D23.asm:6 END_STACK_VARS
    case 0xC4C7B8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF0D23.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0xC4C7B9: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/EF/EF0D23.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC4C7B7.
    case 0xC4C7BB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D23.asm:8 ASL
    case 0xC4C7BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D23.asm:9 TAX
    case 0xC4C7BD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D23.asm:10 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4C7BE: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/EF/EF0D23.asm:11 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C7C1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/EF/EF0D23.asm:11 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C7C3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/EF/EF0D23.asm:11 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C7C4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/EF/EF0D23.asm:11 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C7C5: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/EF/EF0D23.asm:11 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C7C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/EF/EF0D23.asm:11 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C7C8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D23.asm:12 CLC
    case 0xC4C7C9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0D23.asm:13 ADC #6
    case 0xC4C7CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/unknown/EF/EF0D23.asm:13 ADC #6
    // Overlapping static entry reached from 0xC4C7CA.
    case 0xC4C7CC: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/EF/EF0D23.asm:14 TAX
    case 0xC4C7CD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D23.asm:15 LDA TIMED_DELIVERY_TABLE,X
    case 0xC4C7CE: cpu.execute_instruction<0xBF>(0xD5F5A5, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF0D23.asm:16 END_C_FUNCTION
    case 0xC4C7D2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0D23.asm:16 END_C_FUNCTION
    case 0xC4C7D3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0D46.asm (unresolved).
bool execute_unresolved_ef_ef0d46_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0D46.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C7D4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF0D46.asm:6 END_STACK_VARS
    case 0xC4C7D6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF0D46.asm:6 END_STACK_VARS
    case 0xC4C7D7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0D46.asm:6 END_STACK_VARS
    case 0xC4C7D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0D46.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C7D8.
    case 0xC4C7DA: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF0D46.asm:6 END_STACK_VARS
    case 0xC4C7DB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0xC4C7DC: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/EF/EF0D46.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC4C7DA.
    case 0xC4C7DE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:8 ASL
    case 0xC4C7DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:9 TAX
    case 0xC4C7E0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:10 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4C7E1: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/unknown/EF/EF0D46.asm:11 STA @LOCAL00
    case 0xC4C7E4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EF0D46.asm:12 ASL
    case 0xC4C7E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:13 PHA
    case 0xC4C7E7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:14 LDA @LOCAL00
    case 0xC4C7E8: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/EF/EF0D46.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C7EA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/EF/EF0D46.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C7EC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/EF/EF0D46.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C7ED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/EF/EF0D46.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C7EE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/EF/EF0D46.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C7F0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/EF/EF0D46.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C7F1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:16 CLC
    case 0xC4C7F2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:17 ADC #8
    case 0xC4C7F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/EF/EF0D46.asm:17 ADC #8
    // Overlapping static entry reached from 0xC4C7F3.
    case 0xC4C7F5: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/EF/EF0D46.asm:18 TAX
    case 0xC4C7F6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:19 LDA TIMED_DELIVERY_TABLE,X
    case 0xC4C7F7: cpu.execute_instruction<0xBF>(0xD5F5A5, 4); return true;
    // src/unknown/EF/EF0D46.asm:20 PLX
    case 0xC4C7FB: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D46.asm:21 STA DELIVERY_TIMERS,X
    case 0xC4C7FC: cpu.execute_instruction<0x9D>(0x00B6D6, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF0D46.asm:22 END_C_FUNCTION
    case 0xC4C7FF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0D46.asm:22 END_C_FUNCTION
    case 0xC4C800: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0D73.asm (unresolved).
bool execute_unresolved_ef_ef0d73_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0D73.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C801: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EF0D73.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC4C803: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/EF/EF0D73.asm:6 ASL
    case 0xC4C806: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D73.asm:7 TAX
    case 0xC4C807: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D73.asm:8 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4C808: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/unknown/EF/EF0D73.asm:9 ASL
    case 0xC4C80B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D73.asm:10 CLC
    case 0xC4C80C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0D73.asm:11 ADC #.LOWORD(DELIVERY_TIMERS)
    case 0xC4C80D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x00B6D6, 3); return true;
    // src/unknown/EF/EF0D73.asm:11 ADC #.LOWORD(DELIVERY_TIMERS)
    // Overlapping static entry reached from 0xC4C80D.
    case 0xC4C80F: cpu.execute_instruction<0xB6>(0x0000AA, 2); return true;
    // src/unknown/EF/EF0D73.asm:12 TAX
    case 0xC4C810: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D73.asm:13 LDA __BSS_START__,X
    case 0xC4C811: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EF0D73.asm:14 BEQ @UNKNOWN0
    case 0xC4C814: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EF0D73.asm:15 DEC
    case 0xC4C816: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D73.asm:16 STA __BSS_START__,X
    case 0xC4C817: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0D73.asm:18 END_C_FUNCTION
    case 0xC4C81A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0D8D-jp.asm (unresolved).
bool execute_unresolved_ef_ef0d8d_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C81B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:7 END_STACK_VARS
    case 0xC4C81D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:7 END_STACK_VARS
    case 0xC4C81E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:7 END_STACK_VARS
    case 0xC4C81F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C81F.
    case 0xC4C821: cpu.execute_instruction<0xFF>(0xA5A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:7 END_STACK_VARS
    case 0xC4C822: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xC4C823: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A5, 2); else cpu.execute_instruction<0xA9>(0x00F5A5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C823.
    case 0xC4C825: cpu.execute_instruction<0xF5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xC4C826: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C825.
    case 0xC4C827: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xC4C828: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C827.
    case 0xC4C829: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C828.
    case 0xC4C82A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xC4C82B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EF0D8D-jp.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xC4C82D: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/EF/EF0D8D-jp.asm:10 ASL
    case 0xC4C830: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D-jp.asm:11 TAX
    case 0xC4C831: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D-jp.asm:12 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4C832: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:13 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C835: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:13 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C837: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:13 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C838: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:13 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C839: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:13 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C83B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:13 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C83C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D-jp.asm:14 CLC
    case 0xC4C83D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D-jp.asm:15 ADC #12
    case 0xC4C83E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000C, 2); else cpu.execute_instruction<0x69>(0x00000C, 3); return true;
    // src/unknown/EF/EF0D8D-jp.asm:15 ADC #12
    // Overlapping static entry reached from 0xC4C83E.
    case 0xC4C840: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:16 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4C841: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:16 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4C843: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:16 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4C845: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:16 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4C847: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/EF/EF0D8D-jp.asm:17 CLC
    case 0xC4C849: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D-jp.asm:18 ADC @VIRTUAL0A
    case 0xC4C84A: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/EF/EF0D8D-jp.asm:19 STA @VIRTUAL0A
    case 0xC4C84C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/EF/EF0D8D-jp.asm:20 LDA [@VIRTUAL0A]
    case 0xC4C84E: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/EF/EF0D8D-jp.asm:21 AND #$00FF
    case 0xC4C850: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EF0D8D-jp.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC4C850.
    case 0xC4C852: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF0D8D-jp.asm:22 STA @LOCAL01+2
    case 0xC4C853: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EF0D8D-jp.asm:23 LDA CURRENT_ENTITY_SLOT
    case 0xC4C855: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/EF/EF0D8D-jp.asm:24 ASL
    case 0xC4C858: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D-jp.asm:25 TAX
    case 0xC4C859: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D-jp.asm:26 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4C85A: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:27 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C85D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:27 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C85F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:27 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C860: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:27 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C861: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:27 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C863: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:27 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C864: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D-jp.asm:28 CLC
    case 0xC4C865: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D-jp.asm:29 ADC #10
    case 0xC4C866: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/unknown/EF/EF0D8D-jp.asm:29 ADC #10
    // Overlapping static entry reached from 0xC4C866.
    case 0xC4C868: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EF0D8D-jp.asm:30 CLC
    case 0xC4C869: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0D8D-jp.asm:31 ADC @VIRTUAL06
    case 0xC4C86A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EF0D8D-jp.asm:32 STA @VIRTUAL06
    case 0xC4C86C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EF0D8D-jp.asm:33 LDA [@VIRTUAL06]
    case 0xC4C86E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/EF/EF0D8D-jp.asm:34 STA @LOCAL01
    case 0xC4C870: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EF0D8D-jp.asm:35 STA @VIRTUAL06
    case 0xC4C872: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EF0D8D-jp.asm:36 LDA @LOCAL01+2
    case 0xC4C874: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EF0D8D-jp.asm:37 STA @VIRTUAL06+2
    case 0xC4C876: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C878: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C87A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C87C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C87E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EF0D8D-jp.asm:39 LDA #8
    case 0xC4C880: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/EF/EF0D8D-jp.asm:39 LDA #8
    // Overlapping static entry reached from 0xC4C880.
    case 0xC4C882: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF0D8D-jp.asm:40 JSL UNKNOWN_C064E3
    case 0xC4C883: cpu.execute_instruction<0x22>(0xC06711, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:41 END_C_FUNCTION
    case 0xC4C887: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0D8D-jp.asm:41 END_C_FUNCTION
    case 0xC4C888: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0DFA-jp.asm (unresolved).
bool execute_unresolved_ef_ef0dfa_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C889: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:7 END_STACK_VARS
    case 0xC4C88B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:7 END_STACK_VARS
    case 0xC4C88C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:7 END_STACK_VARS
    case 0xC4C88D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C88D.
    case 0xC4C88F: cpu.execute_instruction<0xFF>(0xA5A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:7 END_STACK_VARS
    case 0xC4C890: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xC4C891: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A5, 2); else cpu.execute_instruction<0xA9>(0x00F5A5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C891.
    case 0xC4C893: cpu.execute_instruction<0xF5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xC4C894: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C893.
    case 0xC4C895: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xC4C896: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C895.
    case 0xC4C897: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C896.
    case 0xC4C898: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:8 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xC4C899: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EF0DFA-jp.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xC4C89B: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/EF/EF0DFA-jp.asm:10 ASL
    case 0xC4C89E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA-jp.asm:11 TAX
    case 0xC4C89F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA-jp.asm:12 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4C8A0: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:13 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C8A3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:13 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C8A5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:13 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C8A6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:13 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C8A7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:13 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C8A9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:13 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C8AA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA-jp.asm:14 CLC
    case 0xC4C8AB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA-jp.asm:15 ADC #$000F
    case 0xC4C8AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000F, 2); else cpu.execute_instruction<0x69>(0x00000F, 3); return true;
    // src/unknown/EF/EF0DFA-jp.asm:15 ADC #$000F
    // Overlapping static entry reached from 0xC4C8AC.
    case 0xC4C8AE: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:16 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4C8AF: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:16 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4C8B1: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:16 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4C8B3: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:16 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4C8B5: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/EF/EF0DFA-jp.asm:17 CLC
    case 0xC4C8B7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA-jp.asm:18 ADC @VIRTUAL0A
    case 0xC4C8B8: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/EF/EF0DFA-jp.asm:19 STA @VIRTUAL0A
    case 0xC4C8BA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/EF/EF0DFA-jp.asm:20 LDA [@VIRTUAL0A]
    case 0xC4C8BC: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/EF/EF0DFA-jp.asm:21 AND #$00FF
    case 0xC4C8BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EF0DFA-jp.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC4C8BE.
    case 0xC4C8C0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF0DFA-jp.asm:22 STA @LOCAL01+2
    case 0xC4C8C1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EF0DFA-jp.asm:23 LDA CURRENT_ENTITY_SLOT
    case 0xC4C8C3: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/EF/EF0DFA-jp.asm:24 ASL
    case 0xC4C8C6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA-jp.asm:25 TAX
    case 0xC4C8C7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA-jp.asm:26 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4C8C8: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:27 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C8CB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:27 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C8CD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:27 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C8CE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:27 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C8CF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:27 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C8D1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:27 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C8D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA-jp.asm:28 CLC
    case 0xC4C8D3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA-jp.asm:29 ADC #13
    case 0xC4C8D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000D, 2); else cpu.execute_instruction<0x69>(0x00000D, 3); return true;
    // src/unknown/EF/EF0DFA-jp.asm:29 ADC #13
    // Overlapping static entry reached from 0xC4C8D4.
    case 0xC4C8D6: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EF0DFA-jp.asm:30 CLC
    case 0xC4C8D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0DFA-jp.asm:31 ADC @VIRTUAL06
    case 0xC4C8D8: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EF0DFA-jp.asm:32 STA @VIRTUAL06
    case 0xC4C8DA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EF0DFA-jp.asm:33 LDA [@VIRTUAL06]
    case 0xC4C8DC: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/EF/EF0DFA-jp.asm:34 STA @LOCAL01
    case 0xC4C8DE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EF0DFA-jp.asm:35 STA @VIRTUAL06
    case 0xC4C8E0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EF0DFA-jp.asm:36 LDA @LOCAL01+2
    case 0xC4C8E2: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EF0DFA-jp.asm:37 STA @VIRTUAL06+2
    case 0xC4C8E4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C8E6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C8E8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C8EA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C8EC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EF0DFA-jp.asm:39 LDA #10
    case 0xC4C8EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/EF/EF0DFA-jp.asm:39 LDA #10
    // Overlapping static entry reached from 0xC4C8EE.
    case 0xC4C8F0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF0DFA-jp.asm:40 JSL UNKNOWN_C064E3
    case 0xC4C8F1: cpu.execute_instruction<0x22>(0xC06711, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:41 END_C_FUNCTION
    case 0xC4C8F5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0DFA-jp.asm:41 END_C_FUNCTION
    case 0xC4C8F6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0E67.asm (unresolved).
bool execute_unresolved_ef_ef0e67_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0E67.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C8F7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF0E67.asm:6 END_STACK_VARS
    case 0xC4C8F9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF0E67.asm:6 END_STACK_VARS
    case 0xC4C8FA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0E67.asm:6 END_STACK_VARS
    case 0xC4C8FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0E67.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C8FB.
    case 0xC4C8FD: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF0E67.asm:6 END_STACK_VARS
    case 0xC4C8FE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF0E67.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0xC4C8FF: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/EF/EF0E67.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC4C8FD.
    case 0xC4C901: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0E67.asm:8 ASL
    case 0xC4C902: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0E67.asm:9 TAX
    case 0xC4C903: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0E67.asm:10 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4C904: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/EF/EF0E67.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_delivery)
    case 0xC4C907: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/EF/EF0E67.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_delivery)
    case 0xC4C909: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/EF/EF0E67.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_delivery)
    case 0xC4C90A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/EF/EF0E67.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_delivery)
    case 0xC4C90B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/EF/EF0E67.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_delivery)
    case 0xC4C90D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/EF/EF0E67.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_delivery)
    case 0xC4C90E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0E67.asm:12 CLC
    case 0xC4C90F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0E67.asm:13 ADC #timed_delivery::enter_speed
    case 0xC4C910: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/EF/EF0E67.asm:13 ADC #timed_delivery::enter_speed
    // Overlapping static entry reached from 0xC4C910.
    case 0xC4C912: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/EF/EF0E67.asm:14 TAX
    case 0xC4C913: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0E67.asm:15 LDA TIMED_DELIVERY_TABLE,X
    case 0xC4C914: cpu.execute_instruction<0xBF>(0xD5F5A5, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF0E67.asm:16 END_C_FUNCTION
    case 0xC4C918: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0E67.asm:16 END_C_FUNCTION
    case 0xC4C919: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0E8A.asm (unresolved).
bool execute_unresolved_ef_ef0e8a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0E8A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C91A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF0E8A.asm:6 END_STACK_VARS
    case 0xC4C91C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF0E8A.asm:6 END_STACK_VARS
    case 0xC4C91D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0E8A.asm:6 END_STACK_VARS
    case 0xC4C91E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0E8A.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C91E.
    case 0xC4C920: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF0E8A.asm:6 END_STACK_VARS
    case 0xC4C921: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF0E8A.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0xC4C922: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/EF/EF0E8A.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC4C920.
    case 0xC4C924: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0E8A.asm:8 ASL
    case 0xC4C925: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0E8A.asm:9 TAX
    case 0xC4C926: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0E8A.asm:10 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4C927: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/EF/EF0E8A.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_delivery)
    case 0xC4C92A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/EF/EF0E8A.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_delivery)
    case 0xC4C92C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/EF/EF0E8A.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_delivery)
    case 0xC4C92D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/EF/EF0E8A.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_delivery)
    case 0xC4C92E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/EF/EF0E8A.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_delivery)
    case 0xC4C930: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/EF/EF0E8A.asm:11 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_delivery)
    case 0xC4C931: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0E8A.asm:12 CLC
    case 0xC4C932: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0E8A.asm:13 ADC #timed_delivery::exit_speed
    case 0xC4C933: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x000012, 3); return true;
    // src/unknown/EF/EF0E8A.asm:13 ADC #timed_delivery::exit_speed
    // Overlapping static entry reached from 0xC4C933.
    case 0xC4C935: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/EF/EF0E8A.asm:14 TAX
    case 0xC4C936: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0E8A.asm:15 LDA TIMED_DELIVERY_TABLE,X
    case 0xC4C937: cpu.execute_instruction<0xBF>(0xD5F5A5, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF0E8A.asm:16 END_C_FUNCTION
    case 0xC4C93B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0E8A.asm:16 END_C_FUNCTION
    case 0xC4C93C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0EAD.asm (unresolved).
bool execute_unresolved_ef_ef0ead_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0EAD.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C93D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF0EAD.asm:11 END_STACK_VARS
    case 0xC4C93F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EF0EAD.asm:11 END_STACK_VARS
    case 0xC4C940: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF0EAD.asm:11 END_STACK_VARS
    case 0xC4C941: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0EAD.asm:11 END_STACK_VARS
    case 0xC4C942: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0EAD.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C942.
    case 0xC4C944: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF0EAD.asm:11 END_STACK_VARS
    case 0xC4C945: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EF0EAD.asm:11 END_STACK_VARS
    case 0xC4C946: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EF0EAD.asm:12 TAX
    case 0xC4C947: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0EAD.asm:13 DEC
    case 0xC4C948: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EF0EAD.asm:14 STA NEW_ENTITY_VAR0
    case 0xC4C949: cpu.execute_instruction<0x8D>(0x000A2E, 3); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/EF/EF0EAD.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C94C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/EF/EF0EAD.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C94E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/EF/EF0EAD.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C94F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/EF/EF0EAD.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C950: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/EF/EF0EAD.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C952: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/EF/EF0EAD.asm:15 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C953: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0EAD.asm:16 TAX
    case 0xC4C954: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0EAD.asm:17 LDA TIMED_DELIVERY_TABLE,X
    case 0xC4C955: cpu.execute_instruction<0xBF>(0xD5F5A5, 4); return true;
    // src/unknown/EF/EF0EAD.asm:19 STA @LOCAL02
    case 0xC4C959: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EF0EAD.asm:21 BNE @UNKNOWN0
    case 0xC4C95B: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/EF/EF0EAD.asm:22 JSL RAND
    case 0xC4C95D: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/unknown/EF/EF0EAD.asm:23 AND #$0003
    case 0xC4C961: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/EF/EF0EAD.asm:23 AND #$0003
    // Overlapping static entry reached from 0xC4C961.
    case 0xC4C963: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/EF/EF0EAD.asm:24 ASL
    case 0xC4C964: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0EAD.asm:25 TAX
    case 0xC4C965: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0EAD.asm:26 LDA FOR_SALE_SIGN_SPRITE_TABLE,X
    case 0xC4C966: cpu.execute_instruction<0xBF>(0xC3F8EB, 4); return true;
    // src/unknown/EF/EF0EAD.asm:28 STA @LOCAL02
    case 0xC4C96A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/unknown/EF/EF0EAD.asm:31 STZ_BADOPT @LOCAL00
    case 0xC4C96C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/unknown/EF/EF0EAD.asm:31 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC4C96C.
    case 0xC4C96E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/EF/EF0EAD.asm:31 STZ_BADOPT @LOCAL00
    case 0xC4C96F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/EF/EF0EAD.asm:32 STZ_BADOPT2 @LOCAL01
    case 0xC4C971: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EF0EAD.asm:33 LDY #.LOWORD(-1)
    case 0xC4C973: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/EF/EF0EAD.asm:33 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4C973.
    case 0xC4C975: cpu.execute_instruction<0xFF>(0x01F3A2, 4); return true;
    // src/unknown/EF/EF0EAD.asm:34 LDX #EVENT_SCRIPT::EVENT_499
    case 0xC4C976: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000F3, 2); else cpu.execute_instruction<0xA2>(0x0001F3, 3); return true;
    // src/unknown/EF/EF0EAD.asm:34 LDX #EVENT_SCRIPT::EVENT_499
    // Overlapping static entry reached from 0xC4C976.
    case 0xC4C978: cpu.execute_instruction<0x01>(0x0000A5, 2); return true;
    // src/unknown/EF/EF0EAD.asm:36 LDA @LOCAL02
    case 0xC4C979: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF0EAD.asm:36 LDA @LOCAL02
    // Overlapping static entry reached from 0xC4C978.
    case 0xC4C97A: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/unknown/EF/EF0EAD.asm:38 JSL CREATE_ENTITY
    case 0xC4C97B: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/unknown/EF/EF0EAD.asm:38 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4C97A.
    case 0xC4C97C: cpu.execute_instruction<0x5F>(0x2BC01E, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF0EAD.asm:39 END_C_FUNCTION
    case 0xC4C97F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0EAD.asm:39 END_C_FUNCTION
    case 0xC4C980: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0EE8.asm (unresolved).
bool execute_unresolved_ef_ef0ee8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0EE8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C981: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EF0EE8.asm:11 END_STACK_VARS
    case 0xC4C983: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EF0EE8.asm:11 END_STACK_VARS
    case 0xC4C984: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0EE8.asm:11 END_STACK_VARS
    case 0xC4C985: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EF0EE8.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C985.
    case 0xC4C987: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EF0EE8.asm:11 END_STACK_VARS
    case 0xC4C988: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:12 LDA #0
    case 0xC4C989: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EF0EE8.asm:12 LDA #0
    // Overlapping static entry reached from 0xC4C989.
    case 0xC4C98B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EF0EE8.asm:13 STA @VIRTUAL02
    case 0xC4C98C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EF0EE8.asm:14 BRA @UNKNOWN3
    case 0xC4C98E: cpu.execute_instruction<0x80>(0x000069, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EF0EE8.asm:16 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xC4C990: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A5, 2); else cpu.execute_instruction<0xA9>(0x00F5A5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EF0EE8.asm:16 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C990.
    case 0xC4C992: cpu.execute_instruction<0xF5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EF0EE8.asm:16 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xC4C993: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EF0EE8.asm:16 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C992.
    case 0xC4C994: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EF0EE8.asm:16 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xC4C995: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EF0EE8.asm:16 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C994.
    case 0xC4C996: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EF0EE8.asm:16 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C995.
    case 0xC4C997: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EF0EE8.asm:16 LOADPTR TIMED_DELIVERY_TABLE, @VIRTUAL06
    case 0xC4C998: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EF0EE8.asm:17 LDA @VIRTUAL02
    case 0xC4C99A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/EF/EF0EE8.asm:18 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C99C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/EF/EF0EE8.asm:18 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C99E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/EF/EF0EE8.asm:18 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C99F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/EF/EF0EE8.asm:18 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C9A0: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/EF/EF0EE8.asm:18 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C9A2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/EF/EF0EE8.asm:18 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C9A3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:19 TAX
    case 0xC4C9A4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:20 STX @LOCAL03
    case 0xC4C9A5: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/EF/EF0EE8.asm:21 TXA
    case 0xC4C9A7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:22 INC
    case 0xC4C9A8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:23 INC
    case 0xC4C9A9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/EF/EF0EE8.asm:24 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4C9AA: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/EF/EF0EE8.asm:24 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4C9AC: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/EF/EF0EE8.asm:24 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4C9AE: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/EF/EF0EE8.asm:24 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4C9B0: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/EF/EF0EE8.asm:25 CLC
    case 0xC4C9B2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:26 ADC @VIRTUAL0A
    case 0xC4C9B3: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/EF/EF0EE8.asm:27 STA @VIRTUAL0A
    case 0xC4C9B5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/EF/EF0EE8.asm:28 LDA [@VIRTUAL0A]
    case 0xC4C9B7: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/EF/EF0EE8.asm:29 JSL GET_EVENT_FLAG
    case 0xC4C9B9: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/unknown/EF/EF0EE8.asm:30 CMP #0
    case 0xC4C9BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EF0EE8.asm:30 CMP #0
    // Overlapping static entry reached from 0xC4C9BD.
    case 0xC4C9BF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EF0EE8.asm:31 BEQ @UNKNOWN2
    case 0xC4C9C0: cpu.execute_instruction<0xF0>(0x000035, 2); return true;
    // src/unknown/EF/EF0EE8.asm:32 LDA @VIRTUAL02
    case 0xC4C9C2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EF0EE8.asm:33 STA NEW_ENTITY_VAR0
    case 0xC4C9C4: cpu.execute_instruction<0x8D>(0x000A2E, 3); return true;
    // src/unknown/EF/EF0EE8.asm:34 LDX @LOCAL03
    case 0xC4C9C7: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/EF/EF0EE8.asm:35 TXA
    case 0xC4C9C9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:36 CLC
    case 0xC4C9CA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:37 ADC @VIRTUAL06
    case 0xC4C9CB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EF0EE8.asm:38 STA @VIRTUAL06
    case 0xC4C9CD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EF0EE8.asm:39 LDA [@VIRTUAL06]
    case 0xC4C9CF: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/EF/EF0EE8.asm:41 STA @LOCAL02
    case 0xC4C9D1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EF0EE8.asm:43 BNE @UNKNOWN1
    case 0xC4C9D3: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/EF/EF0EE8.asm:44 JSL RAND
    case 0xC4C9D5: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/unknown/EF/EF0EE8.asm:45 AND #$0003
    case 0xC4C9D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/EF/EF0EE8.asm:45 AND #$0003
    // Overlapping static entry reached from 0xC4C9D9.
    case 0xC4C9DB: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/EF/EF0EE8.asm:46 ASL
    case 0xC4C9DC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:47 TAX
    case 0xC4C9DD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0EE8.asm:48 LDA FOR_SALE_SIGN_SPRITE_TABLE,X
    case 0xC4C9DE: cpu.execute_instruction<0xBF>(0xC3F8EB, 4); return true;
    // src/unknown/EF/EF0EE8.asm:50 STA @LOCAL02
    case 0xC4C9E2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/unknown/EF/EF0EE8.asm:53 STZ_BADOPT @LOCAL00
    case 0xC4C9E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/unknown/EF/EF0EE8.asm:53 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC4C9E4.
    case 0xC4C9E6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/EF/EF0EE8.asm:53 STZ_BADOPT @LOCAL00
    case 0xC4C9E7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/EF/EF0EE8.asm:54 STZ_BADOPT2 @LOCAL01
    case 0xC4C9E9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EF0EE8.asm:55 LDY #.LOWORD(-1)
    case 0xC4C9EB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/EF/EF0EE8.asm:55 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4C9EB.
    case 0xC4C9ED: cpu.execute_instruction<0xFF>(0x01F4A2, 4); return true;
    // src/unknown/EF/EF0EE8.asm:56 LDX #EVENT_SCRIPT::EVENT_500
    case 0xC4C9EE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000F4, 2); else cpu.execute_instruction<0xA2>(0x0001F4, 3); return true;
    // src/unknown/EF/EF0EE8.asm:56 LDX #EVENT_SCRIPT::EVENT_500
    // Overlapping static entry reached from 0xC4C9EE.
    case 0xC4C9F0: cpu.execute_instruction<0x01>(0x0000A5, 2); return true;
    // src/unknown/EF/EF0EE8.asm:58 LDA @LOCAL02
    case 0xC4C9F1: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EF0EE8.asm:58 LDA @LOCAL02
    // Overlapping static entry reached from 0xC4C9F0.
    case 0xC4C9F2: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/unknown/EF/EF0EE8.asm:60 JSL CREATE_ENTITY
    case 0xC4C9F3: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/unknown/EF/EF0EE8.asm:60 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4C9F2.
    case 0xC4C9F4: cpu.execute_instruction<0x5F>(0xE6C01E, 4); return true;
    // src/unknown/EF/EF0EE8.asm:62 INC @VIRTUAL02
    case 0xC4C9F7: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EF0EE8.asm:62 INC @VIRTUAL02
    // Overlapping static entry reached from 0xC4C9F4.
    case 0xC4C9F8: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/unknown/EF/EF0EE8.asm:64 LDA @VIRTUAL02
    case 0xC4C9F9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EF0EE8.asm:65 CMP #10
    case 0xC4C9FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/unknown/EF/EF0EE8.asm:65 CMP #10
    // Overlapping static entry reached from 0xC4C9FB.
    case 0xC4C9FD: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EF0EE8.asm:66 BCC @UNKNOWN0
    case 0xC4C9FE: cpu.execute_instruction<0x90>(0x000090, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EF0EE8.asm:67 END_C_FUNCTION
    case 0xC4CA00: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0EE8.asm:67 END_C_FUNCTION
    case 0xC4CA01: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0F60-jp.asm (unresolved).
bool execute_unresolved_ef_ef0f60_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0F60-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4CA02: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:6 LDA WINDOW_HEAD
    case 0xC4CA04: cpu.execute_instruction<0xAD>(0x008C22, 3); return true;
    // src/unknown/EF/EF0F60-jp.asm:7 CMP #.LOWORD(-1)
    case 0xC4CA07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EF0F60-jp.asm:7 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4CA07.
    case 0xC4CA09: cpu.execute_instruction<0xFF>(0xA905F0, 4); return true;
    // src/unknown/EF/EF0F60-jp.asm:8 BEQ @UNKNOWN1
    case 0xC4CA0A: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:10 LDA #1
    case 0xC4CA0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF0F60-jp.asm:10 LDA #1
    // Overlapping static entry reached from 0xC4CA09.
    case 0xC4CA0D: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:10 LDA #1
    // Overlapping static entry reached from 0xC4CA0C.
    case 0xC4CA0E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:11 BRA @UNKNOWN9
    case 0xC4CA0F: cpu.execute_instruction<0x80>(0x000053, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:14 LDA ENTITY_FADE_ENTITY
    case 0xC4CA11: cpu.execute_instruction<0xAD>(0x00B67C, 3); return true;
    // src/unknown/EF/EF0F60-jp.asm:15 CMP #.LOWORD(-1)
    case 0xC4CA14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EF0F60-jp.asm:15 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4CA14.
    case 0xC4CA16: cpu.execute_instruction<0xFF>(0xA905F0, 4); return true;
    // src/unknown/EF/EF0F60-jp.asm:16 BEQ @UNKNOWN3
    case 0xC4CA17: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:17 LDA #1
    case 0xC4CA19: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF0F60-jp.asm:17 LDA #1
    // Overlapping static entry reached from 0xC4CA16.
    case 0xC4CA1A: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:17 LDA #1
    // Overlapping static entry reached from 0xC4CA19.
    case 0xC4CA1B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:18 BRA @UNKNOWN9
    case 0xC4CA1C: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:20 LDA OVERWORLD_STATUS_SUPPRESSION
    case 0xC4CA1E: cpu.execute_instruction<0xAD>(0x00611E, 3); return true;
    // src/unknown/EF/EF0F60-jp.asm:21 BEQ @UNKNOWN4
    case 0xC4CA21: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:22 LDA #1
    case 0xC4CA23: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF0F60-jp.asm:22 LDA #1
    // Overlapping static entry reached from 0xC4CA32.
    case 0xC4CA24: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:22 LDA #1
    // Overlapping static entry reached from 0xC4CA23.
    case 0xC4CA25: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:23 BRA @UNKNOWN9
    case 0xC4CA26: cpu.execute_instruction<0x80>(0x00003C, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:25 LDA GAME_STATE+game_state::current_party_members
    case 0xC4CA28: cpu.execute_instruction<0xAD>(0x009B3A, 3); return true;
    // src/unknown/EF/EF0F60-jp.asm:26 ASL
    case 0xC4CA2B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EF0F60-jp.asm:27 TAX
    case 0xC4CA2C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EF0F60-jp.asm:28 LDA ENTITY_SPRITEMAP_POINTER_HIGH,X
    case 0xC4CA2D: cpu.execute_instruction<0xBD>(0x001160, 3); return true;
    // src/unknown/EF/EF0F60-jp.asm:29 AND #$8000
    case 0xC4CA30: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EF0F60-jp.asm:29 AND #$8000
    // Overlapping static entry reached from 0xC4CA30.
    case 0xC4CA32: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:30 BEQ @UNKNOWN5
    case 0xC4CA33: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:31 LDA #1
    case 0xC4CA35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF0F60-jp.asm:31 LDA #1
    // Overlapping static entry reached from 0xC4CA35.
    case 0xC4CA37: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:32 BRA @UNKNOWN9
    case 0xC4CA38: cpu.execute_instruction<0x80>(0x00002A, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:34 LDA ENTITY_TICK_CALLBACK_HIGH+46
    case 0xC4CA3A: cpu.execute_instruction<0xAD>(0x0010DA, 3); return true;
    // src/unknown/EF/EF0F60-jp.asm:35 AND #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC4CA3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00C000, 3); return true;
    // src/unknown/EF/EF0F60-jp.asm:35 AND #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC4CA3D.
    case 0xC4CA3F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000F0, 2); else cpu.execute_instruction<0xC0>(0x0005F0, 3); return true;
    // src/unknown/EF/EF0F60-jp.asm:36 BEQ @UNKNOWN6
    case 0xC4CA40: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:36 BEQ @UNKNOWN6
    // Overlapping static entry reached from 0xC4CA3F.
    case 0xC4CA41: cpu.execute_instruction<0x05>(0x0000A9, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:37 LDA #0
    case 0xC4CA42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EF0F60-jp.asm:37 LDA #0
    // Overlapping static entry reached from 0xC4CA41.
    case 0xC4CA43: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:37 LDA #0
    // Overlapping static entry reached from 0xC4CA42.
    case 0xC4CA44: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:38 BRA @UNKNOWN7
    case 0xC4CA45: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:40 LDA PENDING_INTERACTIONS
    case 0xC4CA47: cpu.execute_instruction<0xAD>(0x006120, 3); return true;
    // src/unknown/EF/EF0F60-jp.asm:42 LDX GAME_STATE + game_state::walking_style
    case 0xC4CA4A: cpu.execute_instruction<0xAE>(0x009B34, 3); return true;
    // src/unknown/EF/EF0F60-jp.asm:43 CPX #WALKING_STYLE::LADDER
    case 0xC4CA4D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000007, 2); else cpu.execute_instruction<0xE0>(0x000007, 3); return true;
    // src/unknown/EF/EF0F60-jp.asm:43 CPX #WALKING_STYLE::LADDER
    // Overlapping static entry reached from 0xC4CA4D.
    case 0xC4CA4F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:44 BEQ @UNKNOWN8
    case 0xC4CA50: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:45 CPX #WALKING_STYLE::ROPE
    case 0xC4CA52: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000008, 2); else cpu.execute_instruction<0xE0>(0x000008, 3); return true;
    // src/unknown/EF/EF0F60-jp.asm:45 CPX #WALKING_STYLE::ROPE
    // Overlapping static entry reached from 0xC4CA52.
    case 0xC4CA54: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:46 BEQ @UNKNOWN8
    case 0xC4CA55: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:47 CPX #WALKING_STYLE::ESCALATOR
    case 0xC4CA57: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00000C, 2); else cpu.execute_instruction<0xE0>(0x00000C, 3); return true;
    // src/unknown/EF/EF0F60-jp.asm:47 CPX #WALKING_STYLE::ESCALATOR
    // Overlapping static entry reached from 0xC4CA57.
    case 0xC4CA59: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:48 BEQ @UNKNOWN8
    case 0xC4CA5A: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:49 CPX #WALKING_STYLE::STAIRS
    case 0xC4CA5C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00000D, 2); else cpu.execute_instruction<0xE0>(0x00000D, 3); return true;
    // src/unknown/EF/EF0F60-jp.asm:49 CPX #WALKING_STYLE::STAIRS
    // Overlapping static entry reached from 0xC4CA5C.
    case 0xC4CA5E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:50 BNE @UNKNOWN9
    case 0xC4CA5F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/EF/EF0F60-jp.asm:52 LDA #1
    case 0xC4CA61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF0F60-jp.asm:52 LDA #1
    // Overlapping static entry reached from 0xC4CA61.
    case 0xC4CA63: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0F60-jp.asm:54 END_C_FUNCTION
    case 0xC4CA64: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0FDB.asm (unresolved).
bool execute_unresolved_ef_ef0fdb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0FDB.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4CA65: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EF0FDB.asm:5 LDA #1
    case 0xC4CA67: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EF0FDB.asm:5 LDA #1
    // Overlapping static entry reached from 0xC4CA67.
    case 0xC4CA69: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EF0FDB.asm:6 STA OVERWORLD_STATUS_SUPPRESSION
    case 0xC4CA6A: cpu.execute_instruction<0x8D>(0x00611E, 3); return true;
    // src/unknown/EF/EF0FDB.asm:7 STA PENDING_INTERACTIONS
    case 0xC4CA6D: cpu.execute_instruction<0x8D>(0x006120, 3); return true;
    // src/unknown/EF/EF0FDB.asm:8 JSL UNKNOWN_C09F3B_ENTRY2
    case 0xC4CA70: cpu.execute_instruction<0x22>(0xC09F22, 4); return true;
    // src/unknown/EF/EF0FDB.asm:9 LDA #MUSIC::DELIVERY
    case 0xC4CA74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000059, 2); else cpu.execute_instruction<0xA9>(0x000059, 3); return true;
    // src/unknown/EF/EF0FDB.asm:9 LDA #MUSIC::DELIVERY
    // Overlapping static entry reached from 0xC4CA74.
    case 0xC4CA76: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF0FDB.asm:10 JSL CHANGE_MUSIC
    case 0xC4CA77: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/unknown/EF/EF0FDB.asm:11 JSL UNKNOWN_C03CFD
    case 0xC4CA7B: cpu.execute_instruction<0x22>(0xC03F64, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0FDB.asm:12 END_C_FUNCTION
    case 0xC4CA7F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EF0FF6.asm (unresolved).
bool execute_unresolved_ef_ef0ff6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EF0FF6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4CA80: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EF0FF6.asm:5 STZ PENDING_INTERACTIONS
    case 0xC4CA82: cpu.execute_instruction<0x9C>(0x006120, 3); return true;
    // src/unknown/EF/EF0FF6.asm:6 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    case 0xC4CA85: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000049, 2); else cpu.execute_instruction<0xA9>(0x000049, 3); return true;
    // src/unknown/EF/EF0FF6.asm:6 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    // Overlapping static entry reached from 0xC4CA85.
    case 0xC4CA87: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF0FF6.asm:7 JSL GET_EVENT_FLAG
    case 0xC4CA88: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/unknown/EF/EF0FF6.asm:8 STA OVERWORLD_STATUS_SUPPRESSION
    case 0xC4CA8C: cpu.execute_instruction<0x8D>(0x00611E, 3); return true;
    // src/unknown/EF/EF0FF6.asm:9 LDA GAME_STATE+game_state::walking_style
    case 0xC4CA8F: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/unknown/EF/EF0FF6.asm:10 CMP #WALKING_STYLE::BICYCLE
    case 0xC4CA92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EF0FF6.asm:10 CMP #WALKING_STYLE::BICYCLE
    // Overlapping static entry reached from 0xC4CA92.
    case 0xC4CA94: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EF0FF6.asm:11 BNE @UNKNOWN0
    case 0xC4CA95: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/EF/EF0FF6.asm:12 LDA #MUSIC::BICYCLE
    case 0xC4CA97: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000052, 2); else cpu.execute_instruction<0xA9>(0x000052, 3); return true;
    // src/unknown/EF/EF0FF6.asm:12 LDA #MUSIC::BICYCLE
    // Overlapping static entry reached from 0xC4CA97.
    case 0xC4CA99: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EF0FF6.asm:13 JSL CHANGE_MUSIC
    case 0xC4CA9A: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/unknown/EF/EF0FF6.asm:14 BRA @UNKNOWN1
    case 0xC4CA9E: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/EF/EF0FF6.asm:16 JSL UNKNOWN_C06A07
    case 0xC4CAA0: cpu.execute_instruction<0x22>(0xC06C35, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EF0FF6.asm:18 END_C_FUNCTION
    case 0xC4CAA4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFD56F.asm (unresolved).
bool execute_unresolved_ef_efd56f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFD56F.asm:3 BEGIN_C_FUNCTION
    case 0xEFBE82: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFD56F.asm:12 END_STACK_VARS
    case 0xEFBE84: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EFD56F.asm:12 END_STACK_VARS
    case 0xEFBE85: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFD56F.asm:12 END_STACK_VARS
    case 0xEFBE86: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFD56F.asm:12 END_STACK_VARS
    case 0xEFBE87: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFD56F.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xEFBE87.
    case 0xEFBE89: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFD56F.asm:12 END_STACK_VARS
    case 0xEFBE8A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EFD56F.asm:12 END_STACK_VARS
    case 0xEFBE8B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:13 STY @LOCAL03
    case 0xEFBE8C: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/EF/EFD56F.asm:13 STY @LOCAL03
    // Overlapping static entry reached from 0xEFBE89.
    case 0xEFBE8D: cpu.execute_instruction<0x14>(0x000086, 2); return true;
    // src/unknown/EF/EFD56F.asm:14 STX @VIRTUAL04
    case 0xEFBE8E: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/EF/EFD56F.asm:14 STX @VIRTUAL04
    // Overlapping static entry reached from 0xEFBE8D.
    case 0xEFBE8F: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/EF/EFD56F.asm:15 STA @VIRTUAL02
    case 0xEFBE90: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFD56F.asm:15 STA @VIRTUAL02
    // Overlapping static entry reached from 0xEFBE8F.
    case 0xEFBE91: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD56F.asm:16 LDA #04
    case 0xEFBE92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EFD56F.asm:16 LDA #04
    // Overlapping static entry reached from 0xEFBE92.
    case 0xEFBE94: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFD56F.asm:17 JSL SBRK
    case 0xEFBE95: cpu.execute_instruction<0x22>(0xC086D7, 4); return true;
    // src/unknown/EF/EFD56F.asm:18 TAX
    case 0xEFBE99: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:19 LDY @LOCAL03
    case 0xEFBE9A: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/EF/EFD56F.asm:20 TYA
    case 0xEFBE9C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:21 LSR
    case 0xEFBE9D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:22 LSR
    case 0xEFBE9E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:23 LSR
    case 0xEFBE9F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:24 LSR
    case 0xEFBEA0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:25 CMP #10
    case 0xEFBEA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/unknown/EF/EFD56F.asm:25 CMP #10
    // Overlapping static entry reached from 0xEFBEA1.
    case 0xEFBEA3: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EFD56F.asm:26 BCC @UNKNOWN0
    case 0xEFBEA4: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // src/unknown/EF/EFD56F.asm:27 CLC
    case 0xEFBEA6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:28 ADC #7
    case 0xEFBEA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/unknown/EF/EFD56F.asm:28 ADC #7
    // Overlapping static entry reached from 0xEFBEA7.
    case 0xEFBEA9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EFD56F.asm:30 CLC
    case 0xEFBEAA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:31 ADC #$2030
    case 0xEFBEAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x002030, 3); return true;
    // src/unknown/EF/EFD56F.asm:31 ADC #$2030
    // Overlapping static entry reached from 0xEFBEAB.
    case 0xEFBEAD: cpu.execute_instruction<0x20>(0x00009D, 3); return true;
    // src/unknown/EF/EFD56F.asm:32 STA __BSS_START__,X
    case 0xEFBEAE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFD56F.asm:32 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFBEAD.
    case 0xEFBEB0: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/EF/EFD56F.asm:33 TYA
    case 0xEFBEB1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:34 AND #$000F
    case 0xEFBEB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/EF/EFD56F.asm:34 AND #$000F
    // Overlapping static entry reached from 0xEFBEB2.
    case 0xEFBEB4: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/EF/EFD56F.asm:35 CMP #10
    case 0xEFBEB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/unknown/EF/EFD56F.asm:35 CMP #10
    // Overlapping static entry reached from 0xEFBEB5.
    case 0xEFBEB7: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EFD56F.asm:36 BCC @UNKNOWN1
    case 0xEFBEB8: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // src/unknown/EF/EFD56F.asm:37 CLC
    case 0xEFBEBA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:38 ADC #7
    case 0xEFBEBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/unknown/EF/EFD56F.asm:38 ADC #7
    // Overlapping static entry reached from 0xEFBEBB.
    case 0xEFBEBD: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EFD56F.asm:40 CLC
    case 0xEFBEBE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:41 ADC #$2030
    case 0xEFBEBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x002030, 3); return true;
    // src/unknown/EF/EFD56F.asm:41 ADC #$2030
    // Overlapping static entry reached from 0xEFBEBF.
    case 0xEFBEC1: cpu.execute_instruction<0x20>(0x00029D, 3); return true;
    // src/unknown/EF/EFD56F.asm:42 STA __BSS_START__+2,X
    case 0xEFBEC2: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/unknown/EF/EFD56F.asm:42 STA __BSS_START__+2,X
    // Overlapping static entry reached from 0xEFBEC1.
    case 0xEFBEC4: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EFD56F.asm:43 LDA @VIRTUAL04
    case 0xEFBEC5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFD56F.asm:44 ASL
    case 0xEFBEC7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:45 ASL
    case 0xEFBEC8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:46 ASL
    case 0xEFBEC9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:47 ASL
    case 0xEFBECA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:48 ASL
    case 0xEFBECB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:49 CLC
    case 0xEFBECC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:50 ADC @VIRTUAL02
    case 0xEFBECD: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/EF/EFD56F.asm:51 CLC
    case 0xEFBECF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:52 ADC #VRAM::TEXT_LAYER_TILEMAP
    case 0xEFBED0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007C00, 3); return true;
    // src/unknown/EF/EFD56F.asm:52 ADC #VRAM::TEXT_LAYER_TILEMAP
    // Overlapping static entry reached from 0xEFBED0.
    case 0xEFBED2: cpu.execute_instruction<0x7C>(0x001285, 3); return true;
    // src/unknown/EF/EFD56F.asm:53 STA @LOCAL02
    case 0xEFBED3: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EFD56F.asm:54 LDA #$007E
    case 0xEFBED5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/unknown/EF/EFD56F.asm:54 LDA #$007E
    // Overlapping static entry reached from 0xEFBED5.
    case 0xEFBED7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFD56F.asm:55 STA @LOCAL00
    case 0xEFBED8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFD56F.asm:56 LDA @LOCAL02
    case 0xEFBEDA: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EFD56F.asm:57 STA @LOCAL01
    case 0xEFBEDC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD56F.asm:58 TXY
    case 0xEFBEDE: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/EF/EFD56F.asm:59 LDX #4
    case 0xEFBEDF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/EF/EFD56F.asm:59 LDX #4
    // Overlapping static entry reached from 0xEFBEDF.
    case 0xEFBEE1: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/EF/EFD56F.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xEFBEE2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFD56F.asm:61 LDA #0
    case 0xEFBEE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/EF/EFD56F.asm:62 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFBEE6: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/unknown/EF/EFD56F.asm:62 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFBEE4.
    case 0xEFBEE7: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFD56F.asm:63 END_C_FUNCTION
    case 0xEFBEEA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/EF/EFD56F.asm:63 END_C_FUNCTION
    case 0xEFBEEB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFD5D9-jp.asm (unresolved).
bool execute_unresolved_ef_efd5d9_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:3 BEGIN_C_FUNCTION
    case 0xEFBEEC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:7 END_STACK_VARS
    case 0xEFBEEE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:7 END_STACK_VARS
    case 0xEFBEEF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:7 END_STACK_VARS
    case 0xEFBEF0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:7 END_STACK_VARS
    case 0xEFBEF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xEFBEF1.
    case 0xEFBEF3: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:7 END_STACK_VARS
    case 0xEFBEF4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:7 END_STACK_VARS
    case 0xEFBEF5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9-jp.asm:8 STA @VIRTUAL02
    case 0xEFBEF6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:8 STA @VIRTUAL02
    // Overlapping static entry reached from 0xEFBEF3.
    case 0xEFBEF7: cpu.execute_instruction<0x02>(0x0000A0, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:9 LDY #0
    case 0xEFBEF8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:9 LDY #0
    // Overlapping static entry reached from 0xEFBEF8.
    case 0xEFBEFA: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:10 LDX #1
    case 0xEFBEFB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:10 LDX #1
    // Overlapping static entry reached from 0xEFBEFB.
    case 0xEFBEFD: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:11 LDA #4
    case 0xEFBEFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:11 LDA #4
    // Overlapping static entry reached from 0xEFBEFE.
    case 0xEFBF00: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:12 JSL FADE_OUT_WITH_MOSAIC
    case 0xEFBF01: cpu.execute_instruction<0x22>(0xC0880A, 4); return true;
    // src/unknown/EF/EFD5D9-jp.asm:13 JSL UNKNOWN_C0927C
    case 0xEFBF05: cpu.execute_instruction<0x22>(0xC0925E, 4); return true;
    // src/unknown/EF/EFD5D9-jp.asm:14 JSR UNKNOWN_EFDA05
    case 0xEFBF09: cpu.execute_instruction<0x20>(0x00C31F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:15 LOADPTR DEBUG_SOUND_MODE_MENU_TEXT, @VIRTUAL06
    case 0xEFBF0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002E, 2); else cpu.execute_instruction<0xA9>(0x00BE2E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:15 LOADPTR DEBUG_SOUND_MODE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xEFBF0C.
    case 0xEFBF0E: cpu.execute_instruction<0xBE>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:15 LOADPTR DEBUG_SOUND_MODE_MENU_TEXT, @VIRTUAL06
    case 0xEFBF0F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:15 LOADPTR DEBUG_SOUND_MODE_MENU_TEXT, @VIRTUAL06
    case 0xEFBF11: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:15 LOADPTR DEBUG_SOUND_MODE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xEFBF11.
    case 0xEFBF13: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:15 LOADPTR DEBUG_SOUND_MODE_MENU_TEXT, @VIRTUAL06
    case 0xEFBF14: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:16 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xEFBF16: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:16 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xEFBF18: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:16 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xEFBF1A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:16 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xEFBF1C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:17 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xEFBF1E: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:17 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xEFBF20: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:17 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xEFBF22: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:17 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xEFBF24: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:18 LDX #5
    case 0xEFBF26: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:18 LDX #5
    // Overlapping static entry reached from 0xEFBF26.
    case 0xEFBF28: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:19 LDA #10
    case 0xEFBF29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:19 LDA #10
    // Overlapping static entry reached from 0xEFBF29.
    case 0xEFBF2B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:20 JSR UNKNOWN_EFDABD
    case 0xEFBF2C: cpu.execute_instruction<0x20>(0x00C3D7, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:21 LDA #14
    case 0xEFBF2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:21 LDA #14
    // Overlapping static entry reached from 0xEFBF2F.
    case 0xEFBF31: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:22 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xEFBF32: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:22 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xEFBF34: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:22 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xEFBF36: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:22 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xEFBF38: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:23 CLC
    case 0xEFBF3A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9-jp.asm:24 ADC @VIRTUAL0A
    case 0xEFBF3B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:25 STA @VIRTUAL0A
    case 0xEFBF3D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:26 STA @LOCAL00
    case 0xEFBF3F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:27 LDA @VIRTUAL0A+2
    case 0xEFBF41: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:28 STA @LOCAL00+2
    case 0xEFBF43: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:29 LDX #10
    case 0xEFBF45: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:29 LDX #10
    // Overlapping static entry reached from 0xEFBF45.
    case 0xEFBF47: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:30 TXA
    case 0xEFBF48: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9-jp.asm:31 JSR UNKNOWN_EFDABD
    case 0xEFBF49: cpu.execute_instruction<0x20>(0x00C3D7, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:32 LDA #28
    case 0xEFBF4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00001C, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:32 LDA #28
    // Overlapping static entry reached from 0xEFBF4C.
    case 0xEFBF4E: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:33 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xEFBF4F: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:33 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xEFBF51: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:33 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xEFBF53: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:33 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xEFBF55: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:34 CLC
    case 0xEFBF57: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9-jp.asm:35 ADC @VIRTUAL0A
    case 0xEFBF58: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:36 STA @VIRTUAL0A
    case 0xEFBF5A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:37 STA @LOCAL00
    case 0xEFBF5C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:38 LDA @VIRTUAL0A+2
    case 0xEFBF5E: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:39 STA @LOCAL00+2
    case 0xEFBF60: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:40 LDX #12
    case 0xEFBF62: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000C, 2); else cpu.execute_instruction<0xA2>(0x00000C, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:40 LDX #12
    // Overlapping static entry reached from 0xEFBF62.
    case 0xEFBF64: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:41 LDA #10
    case 0xEFBF65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:41 LDA #10
    // Overlapping static entry reached from 0xEFBF65.
    case 0xEFBF67: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:42 JSR UNKNOWN_EFDABD
    case 0xEFBF68: cpu.execute_instruction<0x20>(0x00C3D7, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:43 LDA #42
    case 0xEFBF6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002A, 2); else cpu.execute_instruction<0xA9>(0x00002A, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:43 LDA #42
    // Overlapping static entry reached from 0xEFBF6B.
    case 0xEFBF6D: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:44 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xEFBF6E: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:44 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xEFBF70: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:44 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xEFBF72: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:44 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xEFBF74: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:45 CLC
    case 0xEFBF76: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9-jp.asm:46 ADC @VIRTUAL0A
    case 0xEFBF77: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:47 STA @VIRTUAL0A
    case 0xEFBF79: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:48 STA @LOCAL00
    case 0xEFBF7B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:49 LDA @VIRTUAL0A+2
    case 0xEFBF7D: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:50 STA @LOCAL00+2
    case 0xEFBF7F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:51 LDX #14
    case 0xEFBF81: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000E, 2); else cpu.execute_instruction<0xA2>(0x00000E, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:51 LDX #14
    // Overlapping static entry reached from 0xEFBF81.
    case 0xEFBF83: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:52 LDA #10
    case 0xEFBF84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:52 LDA #10
    // Overlapping static entry reached from 0xEFBF84.
    case 0xEFBF86: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:53 JSR UNKNOWN_EFDABD
    case 0xEFBF87: cpu.execute_instruction<0x20>(0x00C3D7, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:54 LDA #56
    case 0xEFBF8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000038, 2); else cpu.execute_instruction<0xA9>(0x000038, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:54 LDA #56
    // Overlapping static entry reached from 0xEFBF8A.
    case 0xEFBF8C: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:55 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xEFBF8D: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:55 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xEFBF8F: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:55 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xEFBF91: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:55 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xEFBF93: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:56 CLC
    case 0xEFBF95: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9-jp.asm:57 ADC @VIRTUAL0A
    case 0xEFBF96: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:58 STA @VIRTUAL0A
    case 0xEFBF98: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:59 STA @LOCAL00
    case 0xEFBF9A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:60 LDA @VIRTUAL0A+2
    case 0xEFBF9C: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:61 STA @LOCAL00+2
    case 0xEFBF9E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:62 LDX #20
    case 0xEFBFA0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000014, 2); else cpu.execute_instruction<0xA2>(0x000014, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:62 LDX #20
    // Overlapping static entry reached from 0xEFBFA0.
    case 0xEFBFA2: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:63 LDA #9
    case 0xEFBFA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:63 LDA #9
    // Overlapping static entry reached from 0xEFBFA3.
    case 0xEFBFA5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:64 JSR UNKNOWN_EFDABD
    case 0xEFBFA6: cpu.execute_instruction<0x20>(0x00C3D7, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:65 LDA #70
    case 0xEFBFA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000046, 2); else cpu.execute_instruction<0xA9>(0x000046, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:65 LDA #70
    // Overlapping static entry reached from 0xEFBFA9.
    case 0xEFBFAB: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:66 CLC
    case 0xEFBFAC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9-jp.asm:67 ADC @VIRTUAL06
    case 0xEFBFAD: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:68 STA @VIRTUAL06
    case 0xEFBFAF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:69 STA @LOCAL00
    case 0xEFBFB1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:70 LDA @VIRTUAL06+2
    case 0xEFBFB3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:71 STA @LOCAL00+2
    case 0xEFBFB5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:72 LDX #22
    case 0xEFBFB7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000016, 2); else cpu.execute_instruction<0xA2>(0x000016, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:72 LDX #22
    // Overlapping static entry reached from 0xEFBFB7.
    case 0xEFBFB9: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:73 LDA #10
    case 0xEFBFBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:73 LDA #10
    // Overlapping static entry reached from 0xEFBFBA.
    case 0xEFBFBC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:74 JSR UNKNOWN_EFDABD
    case 0xEFBFBD: cpu.execute_instruction<0x20>(0x00C3D7, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:75 LDA @VIRTUAL02
    case 0xEFBFC0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:76 ASL
    case 0xEFBFC2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9-jp.asm:77 TAX
    case 0xEFBFC3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFD5D9-jp.asm:78 LDA #64
    case 0xEFBFC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:78 LDA #64
    // Overlapping static entry reached from 0xEFBFC4.
    case 0xEFBFC6: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:79 STA ENTITY_ABS_X_TABLE,X
    case 0xEFBFC7: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:80 LDA #80
    case 0xEFBFCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x000050, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:80 LDA #80
    // Overlapping static entry reached from 0xEFBFCA.
    case 0xEFBFCC: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:81 STA ENTITY_ABS_Y_TABLE,X
    case 0xEFBFCD: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:82 LDY #0
    case 0xEFBFD0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:82 LDY #0
    // Overlapping static entry reached from 0xEFBFD0.
    case 0xEFBFD2: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:83 LDX #1
    case 0xEFBFD3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:83 LDX #1
    // Overlapping static entry reached from 0xEFBFD3.
    case 0xEFBFD5: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:84 LDA #4
    case 0xEFBFD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EFD5D9-jp.asm:84 LDA #4
    // Overlapping static entry reached from 0xEFBFD6.
    case 0xEFBFD8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFD5D9-jp.asm:85 JSL FADE_IN_WITH_MOSAIC
    case 0xEFBFD9: cpu.execute_instruction<0x22>(0xC087C4, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:86 END_C_FUNCTION
    case 0xEFBFDD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/EF/EFD5D9-jp.asm:86 END_C_FUNCTION
    case 0xEFBFDE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFD6D4.asm (unresolved).
bool execute_unresolved_ef_efd6d4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFD6D4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFBFDF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFD6D4.asm:6 END_STACK_VARS
    case 0xEFBFE1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EFD6D4.asm:6 END_STACK_VARS
    case 0xEFBFE2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFD6D4.asm:6 END_STACK_VARS
    case 0xEFBFE3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFD6D4.asm:6 END_STACK_VARS
    case 0xEFBFE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFD6D4.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xEFBFE4.
    case 0xEFBFE6: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFD6D4.asm:6 END_STACK_VARS
    case 0xEFBFE7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EFD6D4.asm:6 END_STACK_VARS
    case 0xEFBFE8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:7 STA @VIRTUAL04
    case 0xEFBFE9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFD6D4.asm:7 STA @VIRTUAL04
    // Overlapping static entry reached from 0xEFBFE6.
    case 0xEFBFEA: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:8 LDA #0
    case 0xEFBFEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFD6D4.asm:8 LDA #0
    // Overlapping static entry reached from 0xEFBFEA.
    case 0xEFBFEC: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EFD6D4.asm:8 LDA #0
    // Overlapping static entry reached from 0xEFBFEB.
    case 0xEFBFED: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFD6D4.asm:9 STA @VIRTUAL02
    case 0xEFBFEE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:10 LDX CURRENT_MUSIC_TRACK
    case 0xEFBFF0: cpu.execute_instruction<0xAE>(0x00B6EC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:11 STX DEBUG_SOUND_MENU_INITIAL_BGM
    case 0xEFBFF3: cpu.execute_instruction<0x8E>(0x00B6F6, 3); return true;
    // src/unknown/EF/EFD6D4.asm:12 STX DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xEFBFF6: cpu.execute_instruction<0x8E>(0x00B6FC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:13 LDA #2
    case 0xEFBFF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EFD6D4.asm:13 LDA #2
    // Overlapping static entry reached from 0xEFBFF9.
    case 0xEFBFFB: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:14 STA DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xEFBFFC: cpu.execute_instruction<0x8D>(0x00B700, 3); return true;
    // src/unknown/EF/EFD6D4.asm:15 LDA @VIRTUAL04
    case 0xEFBFFF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFD6D4.asm:16 JSR UNKNOWN_EFD5D9
    case 0xEFC001: cpu.execute_instruction<0x20>(0x00BEEC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:18 JSL UPDATE_SCREEN
    case 0xEFC004: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/unknown/EF/EFD6D4.asm:19 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xEFC008: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/EF/EFD6D4.asm:20 LDA PAD_PRESS
    case 0xEFC00C: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:21 AND #PAD::Y_BUTTON
    case 0xEFC00F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x004000, 3); return true;
    // src/unknown/EF/EFD6D4.asm:21 AND #PAD::Y_BUTTON
    // Overlapping static entry reached from 0xEFC00F.
    case 0xEFC011: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:22 BEQ @UNKNOWN1
    case 0xEFC012: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/EF/EFD6D4.asm:23 JSR UNKNOWN_EFE175
    case 0xEFC014: cpu.execute_instruction<0x20>(0x00CA8F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:24 LDA @VIRTUAL04
    case 0xEFC017: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFD6D4.asm:25 JSR UNKNOWN_EFD5D9
    case 0xEFC019: cpu.execute_instruction<0x20>(0x00BEEC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:27 JSL OAM_CLEAR
    case 0xEFC01C: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/unknown/EF/EFD6D4.asm:27 JSL OAM_CLEAR
    // Overlapping static entry reached from 0xEFC04D.
    case 0xEFC01F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x004522, 3); return true;
    // src/unknown/EF/EFD6D4.asm:28 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xEFC020: cpu.execute_instruction<0x22>(0xC09445, 4); return true;
    // src/unknown/EF/EFD6D4.asm:28 JSL RUN_ACTIONSCRIPT_FRAME
    // Overlapping static entry reached from 0xEFC01F.
    case 0xEFC021: cpu.execute_instruction<0x45>(0x000094, 2); return true;
    // src/unknown/EF/EFD6D4.asm:28 JSL RUN_ACTIONSCRIPT_FRAME
    // Overlapping static entry reached from 0xEFC01F.
    case 0xEFC022: cpu.execute_instruction<0x94>(0x0000C0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:28 JSL RUN_ACTIONSCRIPT_FRAME
    // Overlapping static entry reached from 0xEFC021.
    case 0xEFC023: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AC, 2); else cpu.execute_instruction<0xC0>(0x00FCAC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:29 LDY DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xEFC024: cpu.execute_instruction<0xAC>(0x00B6FC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:29 LDY DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFC023.
    case 0xEFC025: cpu.execute_instruction<0xFC>(0x00A2B6, 3); return true;
    // src/unknown/EF/EFD6D4.asm:29 LDY DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFC023.
    case 0xEFC026: cpu.execute_instruction<0xB6>(0x0000A2, 2); return true;
    // src/unknown/EF/EFD6D4.asm:30 LDX #10
    case 0xEFC027: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/unknown/EF/EFD6D4.asm:30 LDX #10
    // Overlapping static entry reached from 0xEFC026.
    case 0xEFC028: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:30 LDX #10
    // Overlapping static entry reached from 0xEFC027.
    case 0xEFC029: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:31 LDA #18
    case 0xEFC02A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x000012, 3); return true;
    // src/unknown/EF/EFD6D4.asm:31 LDA #18
    // Overlapping static entry reached from 0xEFC02A.
    case 0xEFC02C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD6D4.asm:32 JSR UNKNOWN_EFD56F
    case 0xEFC02D: cpu.execute_instruction<0x20>(0x00BE82, 3); return true;
    // src/unknown/EF/EFD6D4.asm:33 LDY DEBUG_SOUND_MENU_SELECTED_SE
    case 0xEFC030: cpu.execute_instruction<0xAC>(0x00B6FE, 3); return true;
    // src/unknown/EF/EFD6D4.asm:34 LDX #12
    case 0xEFC033: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000C, 2); else cpu.execute_instruction<0xA2>(0x00000C, 3); return true;
    // src/unknown/EF/EFD6D4.asm:34 LDX #12
    // Overlapping static entry reached from 0xEFC033.
    case 0xEFC035: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:35 LDA #18
    case 0xEFC036: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x000012, 3); return true;
    // src/unknown/EF/EFD6D4.asm:35 LDA #18
    // Overlapping static entry reached from 0xEFC036.
    case 0xEFC038: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD6D4.asm:36 JSR UNKNOWN_EFD56F
    case 0xEFC039: cpu.execute_instruction<0x20>(0x00BE82, 3); return true;
    // src/unknown/EF/EFD6D4.asm:37 LDY DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xEFC03C: cpu.execute_instruction<0xAC>(0x00B700, 3); return true;
    // src/unknown/EF/EFD6D4.asm:38 LDX #14
    case 0xEFC03F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000E, 2); else cpu.execute_instruction<0xA2>(0x00000E, 3); return true;
    // src/unknown/EF/EFD6D4.asm:38 LDX #14
    // Overlapping static entry reached from 0xEFC03F.
    case 0xEFC041: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:39 LDA #18
    case 0xEFC042: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x000012, 3); return true;
    // src/unknown/EF/EFD6D4.asm:39 LDA #18
    // Overlapping static entry reached from 0xEFC042.
    case 0xEFC044: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/EF/EFD6D4.asm:40 JSR UNKNOWN_EFD56F
    case 0xEFC045: cpu.execute_instruction<0x20>(0x00BE82, 3); return true;
    // src/unknown/EF/EFD6D4.asm:41 LDA PAD_PRESS
    case 0xEFC048: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:42 CMP #PAD::SELECT_BUTTON | PAD::START_BUTTON
    case 0xEFC04B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x003000, 3); return true;
    // src/unknown/EF/EFD6D4.asm:42 CMP #PAD::SELECT_BUTTON | PAD::START_BUTTON
    // Overlapping static entry reached from 0xEFC04B.
    case 0xEFC04D: cpu.execute_instruction<0x30>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/EF/EFD6D4.asm:43 BEQL @UNKNOWN29
    case 0xEFC04E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/EF/EFD6D4.asm:43 BEQL @UNKNOWN29
    // Overlapping static entry reached from 0xEFC04D.
    case 0xEFC04F: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/EF/EFD6D4.asm:43 BEQL @UNKNOWN29
    case 0xEFC050: cpu.execute_instruction<0x4C>(0x00C1BE, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/EF/EFD6D4.asm:43 BEQL @UNKNOWN29
    // Overlapping static entry reached from 0xEFC04F.
    case 0xEFC051: cpu.execute_instruction<0xBE>(0x00ADC1, 3); return true;
    // src/unknown/EF/EFD6D4.asm:44 LDA PAD_HELD
    case 0xEFC053: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:44 LDA PAD_HELD
    // Overlapping static entry reached from 0xEFC051.
    case 0xEFC054: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002900, 3); return true;
    // src/unknown/EF/EFD6D4.asm:45 AND #PAD::UP
    case 0xEFC056: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/unknown/EF/EFD6D4.asm:45 AND #PAD::UP
    // Overlapping static entry reached from 0xEFC054.
    case 0xEFC057: cpu.execute_instruction<0x00>(0x000008, 2); return true;
    // src/unknown/EF/EFD6D4.asm:45 AND #PAD::UP
    // Overlapping static entry reached from 0xEFC056.
    case 0xEFC058: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:46 BEQ @UNKNOWN3
    case 0xEFC059: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EFD6D4.asm:47 LDA @VIRTUAL02
    case 0xEFC05B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:48 DEC
    case 0xEFC05D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:49 STA @VIRTUAL02
    case 0xEFC05E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:51 LDA PAD_HELD
    case 0xEFC060: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:52 AND #PAD::DOWN
    case 0xEFC063: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/unknown/EF/EFD6D4.asm:52 AND #PAD::DOWN
    // Overlapping static entry reached from 0xEFC063.
    case 0xEFC065: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:53 BEQ @UNKNOWN4
    case 0xEFC066: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:53 BEQ @UNKNOWN4
    // Overlapping static entry reached from 0xEFC065.
    case 0xEFC067: cpu.execute_instruction<0x02>(0x0000E6, 2); return true;
    // src/unknown/EF/EFD6D4.asm:54 INC @VIRTUAL02
    case 0xEFC068: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:56 LDA @VIRTUAL02
    case 0xEFC06A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:57 CMP #.LOWORD(-1)
    case 0xEFC06C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFD6D4.asm:57 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFC09B.
    case 0xEFC06D: cpu.execute_instruction<0xFF>(0x05D0FF, 4); return true;
    // src/unknown/EF/EFD6D4.asm:57 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFC06C.
    case 0xEFC06E: cpu.execute_instruction<0xFF>(0xA905D0, 4); return true;
    // src/unknown/EF/EFD6D4.asm:58 BNE @UNKNOWN5
    case 0xEFC06F: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/EF/EFD6D4.asm:59 LDA #2
    case 0xEFC071: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EFD6D4.asm:59 LDA #2
    // Overlapping static entry reached from 0xEFC06E.
    case 0xEFC072: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/unknown/EF/EFD6D4.asm:59 LDA #2
    // Overlapping static entry reached from 0xEFC071.
    case 0xEFC073: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFD6D4.asm:60 STA @VIRTUAL02
    case 0xEFC074: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:62 LDA @VIRTUAL02
    case 0xEFC076: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:63 CMP #3
    case 0xEFC078: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFD6D4.asm:63 CMP #3
    // Overlapping static entry reached from 0xEFC078.
    case 0xEFC07A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:64 BNE @UNKNOWN6
    case 0xEFC07B: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/EF/EFD6D4.asm:65 LDA #0
    case 0xEFC07D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFD6D4.asm:65 LDA #0
    // Overlapping static entry reached from 0xEFC07D.
    case 0xEFC07F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFD6D4.asm:66 STA @VIRTUAL02
    case 0xEFC080: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:68 LDA PAD_PRESS
    case 0xEFC082: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:69 AND #PAD::L_BUTTON
    case 0xEFC085: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000020, 2); else cpu.execute_instruction<0x29>(0x000020, 3); return true;
    // src/unknown/EF/EFD6D4.asm:69 AND #PAD::L_BUTTON
    // Overlapping static entry reached from 0xEFC085.
    case 0xEFC087: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:70 BEQ @UNKNOWN7
    case 0xEFC088: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/EF/EFD6D4.asm:71 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xEFC08A: cpu.execute_instruction<0xAD>(0x00B6FC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:72 STA DEBUG_SOUND_MENU_INITIAL_BGM
    case 0xEFC08D: cpu.execute_instruction<0x8D>(0x00B6F6, 3); return true;
    // src/unknown/EF/EFD6D4.asm:73 LDA #46
    case 0xEFC090: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002E, 2); else cpu.execute_instruction<0xA9>(0x00002E, 3); return true;
    // src/unknown/EF/EFD6D4.asm:73 LDA #46
    // Overlapping static entry reached from 0xEFC090.
    case 0xEFC092: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:74 STA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xEFC093: cpu.execute_instruction<0x8D>(0x00B6FC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:76 LDA PAD_PRESS
    case 0xEFC096: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:77 AND #PAD::B_BUTTON
    case 0xEFC099: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EFD6D4.asm:77 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xEFC099.
    case 0xEFC09B: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:78 BNE @UNKNOWN8
    case 0xEFC09C: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/EF/EFD6D4.asm:79 LDA PAD_PRESS
    case 0xEFC09E: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:80 AND #PAD::R_BUTTON
    case 0xEFC0A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x000010, 3); return true;
    // src/unknown/EF/EFD6D4.asm:80 AND #PAD::R_BUTTON
    // Overlapping static entry reached from 0xEFC0A1.
    case 0xEFC0A3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:81 BEQ @UNKNOWN9
    case 0xEFC0A4: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:83 LDA DEBUG_SOUND_MENU_INITIAL_BGM
    case 0xEFC0A6: cpu.execute_instruction<0xAD>(0x00B6F6, 3); return true;
    // src/unknown/EF/EFD6D4.asm:84 STA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xEFC0A9: cpu.execute_instruction<0x8D>(0x00B6FC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:86 LDA @VIRTUAL02
    case 0xEFC0AC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:87 BEQ @UNKNOWN11
    case 0xEFC0AE: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/EF/EFD6D4.asm:88 CMP #1
    case 0xEFC0B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFD6D4.asm:88 CMP #1
    // Overlapping static entry reached from 0xEFC0B0.
    case 0xEFC0B2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:89 BEQ @UNKNOWN17
    case 0xEFC0B3: cpu.execute_instruction<0xF0>(0x000061, 2); return true;
    // src/unknown/EF/EFD6D4.asm:90 CMP #2
    case 0xEFC0B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFD6D4.asm:90 CMP #2
    // Overlapping static entry reached from 0xEFC0B5.
    case 0xEFC0B7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/EF/EFD6D4.asm:91 BEQL @UNKNOWN22
    case 0xEFC0B8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/EF/EFD6D4.asm:91 BEQL @UNKNOWN22
    case 0xEFC0BA: cpu.execute_instruction<0x4C>(0x00C159, 3); return true;
    // src/unknown/EF/EFD6D4.asm:92 JMP @UNKNOWN27
    case 0xEFC0BD: cpu.execute_instruction<0x4C>(0x00C19A, 3); return true;
    // src/unknown/EF/EFD6D4.asm:94 LDA PAD_HELD
    case 0xEFC0C0: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:95 AND #PAD::LEFT
    case 0xEFC0C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/unknown/EF/EFD6D4.asm:95 AND #PAD::LEFT
    // Overlapping static entry reached from 0xEFC0C3.
    case 0xEFC0C5: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:96 BEQ @UNKNOWN12
    case 0xEFC0C6: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFD6D4.asm:97 DEC DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xEFC0C8: cpu.execute_instruction<0xCE>(0x00B6FC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:99 LDA PAD_HELD
    case 0xEFC0CB: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:100 AND #PAD::RIGHT
    case 0xEFC0CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/unknown/EF/EFD6D4.asm:100 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xEFC0CE.
    case 0xEFC0D0: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:101 BEQ @UNKNOWN13
    case 0xEFC0D1: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFD6D4.asm:101 BEQ @UNKNOWN13
    // Overlapping static entry reached from 0xEFC0D0.
    case 0xEFC0D2: cpu.execute_instruction<0x03>(0x0000EE, 2); return true;
    // src/unknown/EF/EFD6D4.asm:102 INC DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xEFC0D3: cpu.execute_instruction<0xEE>(0x00B6FC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:102 INC DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFC0D2.
    case 0xEFC0D4: cpu.execute_instruction<0xFC>(0x00ADB6, 3); return true;
    // src/unknown/EF/EFD6D4.asm:104 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xEFC0D6: cpu.execute_instruction<0xAD>(0x00B6FC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:104 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFC0D4.
    case 0xEFC0D7: cpu.execute_instruction<0xFC>(0x00C9B6, 3); return true;
    // src/unknown/EF/EFD6D4.asm:105 CMP #.LOWORD(-1)
    case 0xEFC0D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFD6D4.asm:105 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFC0D7.
    case 0xEFC0DA: cpu.execute_instruction<0xFF>(0x06D0FF, 4); return true;
    // src/unknown/EF/EFD6D4.asm:105 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFC0D9.
    case 0xEFC0DB: cpu.execute_instruction<0xFF>(0xA906D0, 4); return true;
    // src/unknown/EF/EFD6D4.asm:106 BNE @UNKNOWN14
    case 0xEFC0DC: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:107 LDA #191
    case 0xEFC0DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BF, 2); else cpu.execute_instruction<0xA9>(0x0000BF, 3); return true;
    // src/unknown/EF/EFD6D4.asm:107 LDA #191
    // Overlapping static entry reached from 0xEFC0DB.
    case 0xEFC0DF: cpu.execute_instruction<0xBF>(0xFC8D00, 4); return true;
    // src/unknown/EF/EFD6D4.asm:107 LDA #191
    // Overlapping static entry reached from 0xEFC0DE.
    case 0xEFC0E0: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:108 STA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xEFC0E1: cpu.execute_instruction<0x8D>(0x00B6FC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:108 STA DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFC0DF.
    case 0xEFC0E3: cpu.execute_instruction<0xB6>(0x0000AD, 2); return true;
    // src/unknown/EF/EFD6D4.asm:110 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xEFC0E4: cpu.execute_instruction<0xAD>(0x00B6FC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:110 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    // Overlapping static entry reached from 0xEFC0E3.
    case 0xEFC0E5: cpu.execute_instruction<0xFC>(0x00C9B6, 3); return true;
    // src/unknown/EF/EFD6D4.asm:111 CMP #192
    case 0xEFC0E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C0, 2); else cpu.execute_instruction<0xC9>(0x0000C0, 3); return true;
    // src/unknown/EF/EFD6D4.asm:111 CMP #192
    // Overlapping static entry reached from 0xEFC0E5.
    case 0xEFC0E8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x00D000, 3); return true;
    // src/unknown/EF/EFD6D4.asm:111 CMP #192
    // Overlapping static entry reached from 0xEFC0E7.
    case 0xEFC0E9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:112 BNE @UNKNOWN15
    case 0xEFC0EA: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:112 BNE @UNKNOWN15
    // Overlapping static entry reached from 0xEFC0E8.
    case 0xEFC0EB: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD6D4.asm:113 LDA #1
    case 0xEFC0EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFD6D4.asm:113 LDA #1
    // Overlapping static entry reached from 0xEFC0EB.
    case 0xEFC0ED: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/EF/EFD6D4.asm:113 LDA #1
    // Overlapping static entry reached from 0xEFC0EC.
    case 0xEFC0EE: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:114 STA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xEFC0EF: cpu.execute_instruction<0x8D>(0x00B6FC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:116 LDA PAD_PRESS
    case 0xEFC0F2: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:117 AND #PAD::A_BUTTON
    case 0xEFC0F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EFD6D4.asm:117 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xEFC0F5.
    case 0xEFC0F7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/EF/EFD6D4.asm:118 BEQL @UNKNOWN27
    case 0xEFC0F8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/EF/EFD6D4.asm:118 BEQL @UNKNOWN27
    case 0xEFC0FA: cpu.execute_instruction<0x4C>(0x00C19A, 3); return true;
    // src/unknown/EF/EFD6D4.asm:119 JSL STOP_MUSIC
    case 0xEFC0FD: cpu.execute_instruction<0x22>(0xC0ABA5, 4); return true;
    // src/unknown/EF/EFD6D4.asm:120 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xEFC101: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/EF/EFD6D4.asm:121 LDA CURRENT_MUSIC_TRACK
    case 0xEFC105: cpu.execute_instruction<0xAD>(0x00B6EC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:122 JSL UNKNOWN_C0AC20
    case 0xEFC108: cpu.execute_instruction<0x22>(0xC0ABFF, 4); return true;
    // src/unknown/EF/EFD6D4.asm:123 LDA DEBUG_SOUND_MENU_SELECTED_BGM
    case 0xEFC10C: cpu.execute_instruction<0xAD>(0x00B6FC, 3); return true;
    // src/unknown/EF/EFD6D4.asm:124 JSL CHANGE_MUSIC
    case 0xEFC10F: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/unknown/EF/EFD6D4.asm:125 JMP @UNKNOWN27
    case 0xEFC113: cpu.execute_instruction<0x4C>(0x00C19A, 3); return true;
    // src/unknown/EF/EFD6D4.asm:127 LDA PAD_HELD
    case 0xEFC116: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:128 AND #PAD::LEFT
    case 0xEFC119: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/unknown/EF/EFD6D4.asm:128 AND #PAD::LEFT
    // Overlapping static entry reached from 0xEFC119.
    case 0xEFC11B: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:129 BEQ @UNKNOWN18
    case 0xEFC11C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFD6D4.asm:130 DEC DEBUG_SOUND_MENU_SELECTED_SE
    case 0xEFC11E: cpu.execute_instruction<0xCE>(0x00B6FE, 3); return true;
    // src/unknown/EF/EFD6D4.asm:132 LDA PAD_HELD
    case 0xEFC121: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:133 AND #PAD::RIGHT
    case 0xEFC124: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/unknown/EF/EFD6D4.asm:133 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xEFC124.
    case 0xEFC126: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:134 BEQ @UNKNOWN19
    case 0xEFC127: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFD6D4.asm:134 BEQ @UNKNOWN19
    // Overlapping static entry reached from 0xEFC126.
    case 0xEFC128: cpu.execute_instruction<0x03>(0x0000EE, 2); return true;
    // src/unknown/EF/EFD6D4.asm:135 INC DEBUG_SOUND_MENU_SELECTED_SE
    case 0xEFC129: cpu.execute_instruction<0xEE>(0x00B6FE, 3); return true;
    // src/unknown/EF/EFD6D4.asm:135 INC DEBUG_SOUND_MENU_SELECTED_SE
    // Overlapping static entry reached from 0xEFC128.
    case 0xEFC12A: cpu.execute_instruction<0xFE>(0x00ADB6, 3); return true;
    // src/unknown/EF/EFD6D4.asm:137 LDA DEBUG_SOUND_MENU_SELECTED_SE
    case 0xEFC12C: cpu.execute_instruction<0xAD>(0x00B6FE, 3); return true;
    // src/unknown/EF/EFD6D4.asm:137 LDA DEBUG_SOUND_MENU_SELECTED_SE
    // Overlapping static entry reached from 0xEFC12A.
    case 0xEFC12D: cpu.execute_instruction<0xFE>(0x00C9B6, 3); return true;
    // src/unknown/EF/EFD6D4.asm:138 CMP #.LOWORD(-1)
    case 0xEFC12F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFD6D4.asm:138 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFC12D.
    case 0xEFC130: cpu.execute_instruction<0xFF>(0x06D0FF, 4); return true;
    // src/unknown/EF/EFD6D4.asm:138 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFC12F.
    case 0xEFC131: cpu.execute_instruction<0xFF>(0xA906D0, 4); return true;
    // src/unknown/EF/EFD6D4.asm:139 BNE @UNKNOWN20
    case 0xEFC132: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:140 LDA #127
    case 0xEFC134: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // src/unknown/EF/EFD6D4.asm:140 LDA #127
    // Overlapping static entry reached from 0xEFC131.
    case 0xEFC135: cpu.execute_instruction<0x7F>(0xFE8D00, 4); return true;
    // src/unknown/EF/EFD6D4.asm:140 LDA #127
    // Overlapping static entry reached from 0xEFC134.
    case 0xEFC136: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:141 STA DEBUG_SOUND_MENU_SELECTED_SE
    case 0xEFC137: cpu.execute_instruction<0x8D>(0x00B6FE, 3); return true;
    // src/unknown/EF/EFD6D4.asm:141 STA DEBUG_SOUND_MENU_SELECTED_SE
    // Overlapping static entry reached from 0xEFC135.
    case 0xEFC139: cpu.execute_instruction<0xB6>(0x0000AD, 2); return true;
    // src/unknown/EF/EFD6D4.asm:143 LDA DEBUG_SOUND_MENU_SELECTED_SE
    case 0xEFC13A: cpu.execute_instruction<0xAD>(0x00B6FE, 3); return true;
    // src/unknown/EF/EFD6D4.asm:143 LDA DEBUG_SOUND_MENU_SELECTED_SE
    // Overlapping static entry reached from 0xEFC139.
    case 0xEFC13B: cpu.execute_instruction<0xFE>(0x00C9B6, 3); return true;
    // src/unknown/EF/EFD6D4.asm:144 CMP #128
    case 0xEFC13D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000080, 3); return true;
    // src/unknown/EF/EFD6D4.asm:144 CMP #128
    // Overlapping static entry reached from 0xEFC13B.
    case 0xEFC13E: cpu.execute_instruction<0x80>(0x000000, 2); return true;
    // src/unknown/EF/EFD6D4.asm:144 CMP #128
    // Overlapping static entry reached from 0xEFC13D.
    case 0xEFC13F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:145 BNE @UNKNOWN21
    case 0xEFC140: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:146 LDA #1
    case 0xEFC142: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFD6D4.asm:146 LDA #1
    // Overlapping static entry reached from 0xEFC142.
    case 0xEFC144: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:147 STA DEBUG_SOUND_MENU_SELECTED_SE
    case 0xEFC145: cpu.execute_instruction<0x8D>(0x00B6FE, 3); return true;
    // src/unknown/EF/EFD6D4.asm:149 LDA PAD_PRESS
    case 0xEFC148: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:150 AND #PAD::A_BUTTON
    case 0xEFC14B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EFD6D4.asm:150 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xEFC14B.
    case 0xEFC14D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:151 BEQ @UNKNOWN27
    case 0xEFC14E: cpu.execute_instruction<0xF0>(0x00004A, 2); return true;
    // src/unknown/EF/EFD6D4.asm:152 LDA DEBUG_SOUND_MENU_SELECTED_SE
    case 0xEFC150: cpu.execute_instruction<0xAD>(0x00B6FE, 3); return true;
    // src/unknown/EF/EFD6D4.asm:153 JSL PLAY_SOUND
    case 0xEFC153: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/unknown/EF/EFD6D4.asm:154 BRA @UNKNOWN27
    case 0xEFC157: cpu.execute_instruction<0x80>(0x000041, 2); return true;
    // src/unknown/EF/EFD6D4.asm:156 LDA PAD_HELD
    case 0xEFC159: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:157 AND #PAD::LEFT
    case 0xEFC15C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/unknown/EF/EFD6D4.asm:157 AND #PAD::LEFT
    // Overlapping static entry reached from 0xEFC15C.
    case 0xEFC15E: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:158 BEQ @UNKNOWN23
    case 0xEFC15F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFD6D4.asm:159 DEC DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xEFC161: cpu.execute_instruction<0xCE>(0x00B700, 3); return true;
    // src/unknown/EF/EFD6D4.asm:161 LDA PAD_HELD
    case 0xEFC164: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/unknown/EF/EFD6D4.asm:162 AND #PAD::RIGHT
    case 0xEFC167: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/unknown/EF/EFD6D4.asm:162 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xEFC167.
    case 0xEFC169: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:163 BEQ @UNKNOWN24
    case 0xEFC16A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFD6D4.asm:163 BEQ @UNKNOWN24
    // Overlapping static entry reached from 0xEFC169.
    case 0xEFC16B: cpu.execute_instruction<0x03>(0x0000EE, 2); return true;
    // src/unknown/EF/EFD6D4.asm:164 INC DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xEFC16C: cpu.execute_instruction<0xEE>(0x00B700, 3); return true;
    // src/unknown/EF/EFD6D4.asm:164 INC DEBUG_SOUND_MENU_SELECTED_EFFECT
    // Overlapping static entry reached from 0xEFC16B.
    case 0xEFC16D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/EF/EFD6D4.asm:166 LDA DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xEFC16F: cpu.execute_instruction<0xAD>(0x00B700, 3); return true;
    // src/unknown/EF/EFD6D4.asm:167 CMP #.LOWORD(-1)
    case 0xEFC172: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFD6D4.asm:167 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFC172.
    case 0xEFC174: cpu.execute_instruction<0xFF>(0xA906D0, 4); return true;
    // src/unknown/EF/EFD6D4.asm:168 BNE @UNKNOWN25
    case 0xEFC175: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:169 LDA #32
    case 0xEFC177: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/EF/EFD6D4.asm:169 LDA #32
    // Overlapping static entry reached from 0xEFC174.
    case 0xEFC178: cpu.execute_instruction<0x20>(0x008D00, 3); return true;
    // src/unknown/EF/EFD6D4.asm:169 LDA #32
    // Overlapping static entry reached from 0xEFC177.
    case 0xEFC179: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:170 STA DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xEFC17A: cpu.execute_instruction<0x8D>(0x00B700, 3); return true;
    // src/unknown/EF/EFD6D4.asm:170 STA DEBUG_SOUND_MENU_SELECTED_EFFECT
    // Overlapping static entry reached from 0xEFC178.
    case 0xEFC17B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/EF/EFD6D4.asm:172 LDA DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xEFC17D: cpu.execute_instruction<0xAD>(0x00B700, 3); return true;
    // src/unknown/EF/EFD6D4.asm:173 CMP #33
    case 0xEFC180: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000021, 2); else cpu.execute_instruction<0xC9>(0x000021, 3); return true;
    // src/unknown/EF/EFD6D4.asm:173 CMP #33
    // Overlapping static entry reached from 0xEFC180.
    case 0xEFC182: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:174 BNE @UNKNOWN26
    case 0xEFC183: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/EF/EFD6D4.asm:175 LDA #1
    case 0xEFC185: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFD6D4.asm:175 LDA #1
    // Overlapping static entry reached from 0xEFC185.
    case 0xEFC187: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:176 STA DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xEFC188: cpu.execute_instruction<0x8D>(0x00B700, 3); return true;
    // src/unknown/EF/EFD6D4.asm:178 LDA PAD_PRESS
    case 0xEFC18B: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:179 AND #PAD::A_BUTTON
    case 0xEFC18E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EFD6D4.asm:179 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xEFC18E.
    case 0xEFC190: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:180 BEQ @UNKNOWN27
    case 0xEFC191: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/EF/EFD6D4.asm:181 LDA DEBUG_SOUND_MENU_SELECTED_EFFECT
    case 0xEFC193: cpu.execute_instruction<0xAD>(0x00B700, 3); return true;
    // src/unknown/EF/EFD6D4.asm:182 JSL UNKNOWN_C0AC0C
    case 0xEFC196: cpu.execute_instruction<0x22>(0xC0ABEB, 4); return true;
    // src/unknown/EF/EFD6D4.asm:184 LDA PAD_PRESS
    case 0xEFC19A: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFD6D4.asm:185 AND #PAD::X_BUTTON
    case 0xEFC19D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/unknown/EF/EFD6D4.asm:185 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xEFC19D.
    case 0xEFC19F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD6D4.asm:186 BEQ @UNKNOWN28
    case 0xEFC1A0: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/EF/EFD6D4.asm:187 JSL STOP_MUSIC
    case 0xEFC1A2: cpu.execute_instruction<0x22>(0xC0ABA5, 4); return true;
    // src/unknown/EF/EFD6D4.asm:188 JSL PLAY_SOUND_UNKNOWN0
    case 0xEFC1A6: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/unknown/EF/EFD6D4.asm:190 LDA @VIRTUAL04
    case 0xEFC1AA: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFD6D4.asm:191 ASL
    case 0xEFC1AC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:192 TAX
    case 0xEFC1AD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:193 LDA @VIRTUAL02
    case 0xEFC1AE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFD6D4.asm:194 ASL
    case 0xEFC1B0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:195 ASL
    case 0xEFC1B1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:196 ASL
    case 0xEFC1B2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:197 ASL
    case 0xEFC1B3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:198 CLC
    case 0xEFC1B4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFD6D4.asm:199 ADC #84
    case 0xEFC1B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000054, 2); else cpu.execute_instruction<0x69>(0x000054, 3); return true;
    // src/unknown/EF/EFD6D4.asm:199 ADC #84
    // Overlapping static entry reached from 0xEFC1B5.
    case 0xEFC1B7: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/EF/EFD6D4.asm:200 STA ENTITY_ABS_Y_TABLE,X
    case 0xEFC1B8: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/unknown/EF/EFD6D4.asm:201 JMP @UNKNOWN0
    case 0xEFC1BB: cpu.execute_instruction<0x4C>(0x00C004, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFD6D4.asm:203 END_C_FUNCTION
    case 0xEFC1BE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFD6D4.asm:203 END_C_FUNCTION
    case 0xEFC1BF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFD95E.asm (unresolved).
bool execute_unresolved_ef_efd95e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFD95E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFC269: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFD95E.asm:6 END_STACK_VARS
    case 0xEFC26B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFD95E.asm:6 END_STACK_VARS
    case 0xEFC26C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFD95E.asm:6 END_STACK_VARS
    case 0xEFC26D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFD95E.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xEFC26D.
    case 0xEFC26F: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFD95E.asm:6 END_STACK_VARS
    case 0xEFC270: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:7 LOADPTR BUFFER, @VIRTUAL06
    case 0xEFC271: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:7 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xEFC271.
    case 0xEFC273: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFD95E.asm:7 LOADPTR BUFFER, @VIRTUAL06
    case 0xEFC274: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:7 LOADPTR BUFFER, @VIRTUAL06
    case 0xEFC276: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:7 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xEFC276.
    case 0xEFC278: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFD95E.asm:7 LOADPTR BUFFER, @VIRTUAL06
    case 0xEFC279: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EFD95E.asm:8 JSL UNKNOWN_C200D9
    case 0xEFC27B: cpu.execute_instruction<0x22>(0xC200D9, 4); return true;
    // src/unknown/EF/EFD95E.asm:9 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xEFC27F: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/EF/EFD95E.asm:10 LDA DEBUG_MODE_NUMBER
    case 0xEFC283: cpu.execute_instruction<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFD95E.asm:11 CMP #1
    case 0xEFC286: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFD95E.asm:11 CMP #1
    // Overlapping static entry reached from 0xEFC286.
    case 0xEFC288: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFD95E.asm:12 BNE @UNKNOWN0
    case 0xEFC289: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/unknown/EF/EFD95E.asm:13 JSL LOAD_WINDOW_GFX
    case 0xEFC28B: cpu.execute_instruction<0x22>(0xC459AB, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFD95E.asm:15 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, 14336, 0
    case 0xEFC28F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFD95E.asm:15 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, 14336, 0
    case 0xEFC291: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFD95E.asm:15 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, 14336, 0
    case 0xEFC293: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFD95E.asm:15 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, 14336, 0
    case 0xEFC295: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/EF/EFD95E.asm:15 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, 14336, 0
    case 0xEFC297: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/EF/EFD95E.asm:15 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, 14336, 0
    // Overlapping static entry reached from 0xEFC297.
    case 0xEFC299: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/EF/EFD95E.asm:15 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, 14336, 0
    case 0xEFC29A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/EF/EFD95E.asm:15 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, 14336, 0
    // Overlapping static entry reached from 0xEFC29A.
    case 0xEFC29C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/EF/EFD95E.asm:15 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, 14336, 0
    case 0xEFC29D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/EF/EFD95E.asm:15 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, 14336, 0
    // Overlapping static entry reached from 0xEFC2BA.
    case 0xEFC29E: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/EF/EFD95E.asm:15 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, 14336, 0
    case 0xEFC29F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/EF/EFD95E.asm:15 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, 14336, 0
    case 0xEFC2A1: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/EF/EFD95E.asm:15 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, 14336, 0
    // Overlapping static entry reached from 0xEFC29F.
    case 0xEFC2A2: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/EF/EFD95E.asm:15 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, 14336, 0
    // Overlapping static entry reached from 0xEFC2A2.
    case 0xEFC2A4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x001A22, 3); return true;
    // src/unknown/EF/EFD95E.asm:20 JSL UNKNOWN_C47F87
    case 0xEFC2A5: cpu.execute_instruction<0x22>(0xC45C1A, 4); return true;
    // src/unknown/EF/EFD95E.asm:20 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xEFC2A4.
    case 0xEFC2A6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EFD95E.asm:20 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xEFC2A4.
    case 0xEFC2A7: cpu.execute_instruction<0x5C>(0x5780C4, 4); return true;
    // src/unknown/EF/EFD95E.asm:21 BRA @UNKNOWN2
    case 0xEFC2A9: cpu.execute_instruction<0x80>(0x000057, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    case 0xEFC2AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x00D48A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    // Overlapping static entry reached from 0xEFC2AB.
    case 0xEFC2AD: cpu.execute_instruction<0xD4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    case 0xEFC2AE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    // Overlapping static entry reached from 0xEFC2AD.
    case 0xEFC2AF: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    case 0xEFC2B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    // Overlapping static entry reached from 0xEFC2B0.
    case 0xEFC2B2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    case 0xEFC2B3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    case 0xEFC2B5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006100, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    // Overlapping static entry reached from 0xEFC2B5.
    case 0xEFC2B7: cpu.execute_instruction<0x61>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    case 0xEFC2B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x001000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    // Overlapping static entry reached from 0xEFC2B7.
    case 0xEFC2B9: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    // Overlapping static entry reached from 0xEFC2B8.
    case 0xEFC2BA: cpu.execute_instruction<0x10>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    case 0xEFC2BB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    // Overlapping static entry reached from 0xEFC2BA.
    case 0xEFC2BC: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    case 0xEFC2BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    case 0xEFC2BF: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    // Overlapping static entry reached from 0xEFC2BD.
    case 0xEFC2C0: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/EF/EFD95E.asm:23 COPY_TO_VRAM1 DEBUG_MENU_FONT, VRAM::TEXT_LAYER_TILES + $100, 4096, 0
    // Overlapping static entry reached from 0xEFC2C0.
    case 0xEFC2C2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // src/unknown/EF/EFD95E.asm:24 LDA #0
    case 0xEFC2C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFD95E.asm:24 LDA #0
    // Overlapping static entry reached from 0xEFC2C2.
    case 0xEFC2C4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EFD95E.asm:24 LDA #0
    // Overlapping static entry reached from 0xEFC2C3.
    case 0xEFC2C5: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/unknown/EF/EFD95E.asm:25 STA [@VIRTUAL06]
    case 0xEFC2C6: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    case 0xEFC2C8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    case 0xEFC2CA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    case 0xEFC2CC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    case 0xEFC2CE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    case 0xEFC2D0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xEFC2D0.
    case 0xEFC2D2: cpu.execute_instruction<0x7C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    case 0xEFC2D3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xEFC2D3.
    case 0xEFC2D5: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    case 0xEFC2D6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    case 0xEFC2D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    case 0xEFC2DA: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xEFC2D8.
    case 0xEFC2DB: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/EF/EFD95E.asm:26 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xEFC2DB.
    case 0xEFC2DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AD, 2); else cpu.execute_instruction<0xC0>(0x000AAD, 3); return true;
    // src/unknown/EF/EFD95E.asm:27 LDA DEBUG_MODE_NUMBER
    case 0xEFC2DE: cpu.execute_instruction<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFD95E.asm:27 LDA DEBUG_MODE_NUMBER
    // Overlapping static entry reached from 0xEFC2DD.
    case 0xEFC2DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFD95E.asm:27 LDA DEBUG_MODE_NUMBER
    // Overlapping static entry reached from 0xEFC2DD.
    case 0xEFC2E0: cpu.execute_instruction<0xB7>(0x0000C9, 2); return true;
    // src/unknown/EF/EFD95E.asm:28 CMP #3
    case 0xEFC2E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFD95E.asm:28 CMP #3
    // Overlapping static entry reached from 0xEFC2E0.
    case 0xEFC2E2: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/unknown/EF/EFD95E.asm:28 CMP #3
    // Overlapping static entry reached from 0xEFC2E1.
    case 0xEFC2E3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFD95E.asm:29 BEQ @UNKNOWN1
    case 0xEFC2E4: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/EF/EFD95E.asm:30 LDA #.LOWORD(-1)
    case 0xEFC2E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFD95E.asm:30 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFC2E6.
    case 0xEFC2E8: cpu.execute_instruction<0xFF>(0x02048D, 4); return true;
    // src/unknown/EF/EFD95E.asm:31 STA PALETTES+4
    case 0xEFC2E9: cpu.execute_instruction<0x8D>(0x000204, 3); return true;
    // src/unknown/EF/EFD95E.asm:32 BRA @UNKNOWN2
    case 0xEFC2EC: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:34 LOADPTR DEBUG_FONT_PALETTE, @LOCAL00
    case 0xEFC2EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x00D8CA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:34 LOADPTR DEBUG_FONT_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xEFC2EE.
    case 0xEFC2F0: cpu.execute_instruction<0xD8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFD95E.asm:34 LOADPTR DEBUG_FONT_PALETTE, @LOCAL00
    case 0xEFC2F1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:34 LOADPTR DEBUG_FONT_PALETTE, @LOCAL00
    case 0xEFC2F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFD95E.asm:34 LOADPTR DEBUG_FONT_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xEFC2F3.
    case 0xEFC2F5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFD95E.asm:34 LOADPTR DEBUG_FONT_PALETTE, @LOCAL00
    case 0xEFC2F6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFD95E.asm:35 LDX #BPP2PALETTE_SIZE * 3
    case 0xEFC2F8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000018, 2); else cpu.execute_instruction<0xA2>(0x000018, 3); return true;
    // src/unknown/EF/EFD95E.asm:35 LDX #BPP2PALETTE_SIZE * 3
    // Overlapping static entry reached from 0xEFC2F8.
    case 0xEFC2FA: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFD95E.asm:36 LDA #.LOWORD(PALETTES)
    case 0xEFC2FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/EF/EFD95E.asm:36 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xEFC2FB.
    case 0xEFC2FD: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/EF/EFD95E.asm:37 JSL MEMCPY16
    case 0xEFC2FE: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/EF/EFD95E.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xEFC302: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFD95E.asm:40 LDA #PALETTE_UPLOAD::FULL
    case 0xEFC304: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/EF/EFD95E.asm:41 STA PALETTE_UPLOAD_MODE
    case 0xEFC306: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/EF/EFD95E.asm:41 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xEFC304.
    case 0xEFC307: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/EF/EFD95E.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xEFC309: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFD95E.asm:43 END_C_FUNCTION
    case 0xEFC30B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFD95E.asm:43 END_C_FUNCTION
    case 0xEFC30C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFD9F3.asm (unresolved).
bool execute_unresolved_ef_efd9f3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFD9F3.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFC30D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EFD9F3.asm:5 LDA DEBUG_MODE_NUMBER
    case 0xEFC30F: cpu.execute_instruction<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFD9F3.asm:6 BEQ @UNKNOWN0
    case 0xEFC312: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/EF/EFD9F3.asm:7 JSL UNKNOWN_EFD95E
    case 0xEFC314: cpu.execute_instruction<0x22>(0xEFC269, 4); return true;
    // src/unknown/EF/EFD9F3.asm:8 BRA @UNKNOWN1
    case 0xEFC318: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/EF/EFD9F3.asm:10 JSL UNKNOWN_C47F87
    case 0xEFC31A: cpu.execute_instruction<0x22>(0xC45C1A, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFD9F3.asm:12 END_C_FUNCTION
    case 0xEFC31E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFDA05.asm (unresolved).
bool execute_unresolved_ef_efda05_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFDA05.asm:3 BEGIN_C_FUNCTION
    case 0xEFC31F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFDA05.asm:6 END_STACK_VARS
    case 0xEFC321: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFDA05.asm:6 END_STACK_VARS
    case 0xEFC322: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFDA05.asm:6 END_STACK_VARS
    case 0xEFC323: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFDA05.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xEFC323.
    case 0xEFC325: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFDA05.asm:6 END_STACK_VARS
    case 0xEFC326: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFDA05.asm:7 LOADPTR BUFFER, @VIRTUAL06
    case 0xEFC327: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFDA05.asm:7 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xEFC327.
    case 0xEFC329: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFDA05.asm:7 LOADPTR BUFFER, @VIRTUAL06
    case 0xEFC32A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFDA05.asm:7 LOADPTR BUFFER, @VIRTUAL06
    case 0xEFC32C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFDA05.asm:7 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xEFC32C.
    case 0xEFC32E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFDA05.asm:7 LOADPTR BUFFER, @VIRTUAL06
    case 0xEFC32F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EFDA05.asm:8 JSL UNKNOWN_C08726
    case 0xEFC331: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/unknown/EF/EFDA05.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xEFC335: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFDA05.asm:10 LDA #$17
    case 0xEFC337: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/unknown/EF/EFDA05.asm:11 STA TM_MIRROR
    case 0xEFC339: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/EF/EFDA05.asm:11 STA TM_MIRROR
    // Overlapping static entry reached from 0xEFC337.
    case 0xEFC33A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:11 STA TM_MIRROR
    // Overlapping static entry reached from 0xEFC33A.
    case 0xEFC33B: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFDA05.asm:12 LDA #$2F
    case 0xEFC33C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x008D2F, 3); return true;
    // src/unknown/EF/EFDA05.asm:13 STA SPRITEMAP_BANK
    case 0xEFC33E: cpu.execute_instruction<0x8D>(0x00000B, 3); return true;
    // src/unknown/EF/EFDA05.asm:13 STA SPRITEMAP_BANK
    // Overlapping static entry reached from 0xEFC33C.
    case 0xEFC33F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:13 STA SPRITEMAP_BANK
    // Overlapping static entry reached from 0xEFC33F.
    case 0xEFC340: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/EF/EFDA05.asm:14 REP #PROC_FLAGS::ACCUM8
    case 0xEFC341: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFDA05.asm:15 STZ UNREAD_7EB55D
    case 0xEFC343: cpu.execute_instruction<0x9C>(0x00B70E, 3); return true;
    // src/unknown/EF/EFDA05.asm:16 STZ DEBUG_MENU_BUTTONS_PRESSED
    case 0xEFC346: cpu.execute_instruction<0x9C>(0x00B708, 3); return true;
    // src/unknown/EF/EFDA05.asm:17 STZ DEBUG_MENU_CURSOR_POSITION
    case 0xEFC349: cpu.execute_instruction<0x9C>(0x00B706, 3); return true;
    // src/unknown/EF/EFDA05.asm:18 STZ UNREAD_7EB551
    case 0xEFC34C: cpu.execute_instruction<0x9C>(0x00B702, 3); return true;
    // src/unknown/EF/EFDA05.asm:19 STZ VIEW_ATTRIBUTE_MODE
    case 0xEFC34F: cpu.execute_instruction<0x9C>(0x00B710, 3); return true;
    // src/unknown/EF/EFDA05.asm:20 LDA #9
    case 0xEFC352: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/unknown/EF/EFDA05.asm:20 LDA #9
    // Overlapping static entry reached from 0xEFC352.
    case 0xEFC354: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:21 JSL UNKNOWN_C08D79
    case 0xEFC355: cpu.execute_instruction<0x22>(0xC08D6A, 4); return true;
    // src/unknown/EF/EFDA05.asm:22 LDY #VRAM::OVERWORLD_LAYER_1_TILES
    case 0xEFC359: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFDA05.asm:22 LDY #VRAM::OVERWORLD_LAYER_1_TILES
    // Overlapping static entry reached from 0xEFC359.
    case 0xEFC35B: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/EF/EFDA05.asm:23 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP
    case 0xEFC35C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003800, 3); return true;
    // src/unknown/EF/EFDA05.asm:23 LDX #VRAM::OVERWORLD_LAYER_1_TILEMAP
    // Overlapping static entry reached from 0xEFC35C.
    case 0xEFC35E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:24 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xEFC35F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFDA05.asm:24 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xEFC35F.
    case 0xEFC361: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:25 JSL SET_BG1_VRAM_LOCATION
    case 0xEFC362: cpu.execute_instruction<0x22>(0xC08D8F, 4); return true;
    // src/unknown/EF/EFDA05.asm:26 LDY #VRAM::OVERWORLD_LAYER_2_TILES
    case 0xEFC366: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/unknown/EF/EFDA05.asm:26 LDY #VRAM::OVERWORLD_LAYER_2_TILES
    // Overlapping static entry reached from 0xEFC366.
    case 0xEFC368: cpu.execute_instruction<0x20>(0x0000A2, 3); return true;
    // src/unknown/EF/EFDA05.asm:27 LDX #VRAM::OVERWORLD_LAYER_2_TILEMAP
    case 0xEFC369: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005800, 3); return true;
    // src/unknown/EF/EFDA05.asm:27 LDX #VRAM::OVERWORLD_LAYER_2_TILEMAP
    // Overlapping static entry reached from 0xEFC369.
    case 0xEFC36B: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:28 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xEFC36C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFDA05.asm:28 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xEFC36C.
    case 0xEFC36E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:29 JSL SET_BG2_VRAM_LOCATION
    case 0xEFC36F: cpu.execute_instruction<0x22>(0xC08DCF, 4); return true;
    // src/unknown/EF/EFDA05.asm:30 LDY #VRAM::TEXT_LAYER_TILES
    case 0xEFC373: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // src/unknown/EF/EFDA05.asm:30 LDY #VRAM::TEXT_LAYER_TILES
    // Overlapping static entry reached from 0xEFC373.
    case 0xEFC375: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:31 LDX #VRAM::TEXT_LAYER_TILEMAP
    case 0xEFC376: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007C00, 3); return true;
    // src/unknown/EF/EFDA05.asm:31 LDX #VRAM::TEXT_LAYER_TILEMAP
    // Overlapping static entry reached from 0xEFC376.
    case 0xEFC378: cpu.execute_instruction<0x7C>(0x0000A9, 3); return true;
    // src/unknown/EF/EFDA05.asm:32 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xEFC379: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFDA05.asm:32 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xEFC379.
    case 0xEFC37B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:33 JSL SET_BG3_VRAM_LOCATION
    case 0xEFC37C: cpu.execute_instruction<0x22>(0xC08E0D, 4); return true;
    // src/unknown/EF/EFDA05.asm:34 LDA #$02
    case 0xEFC380: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EFDA05.asm:34 LDA #$02
    // Overlapping static entry reached from 0xEFC380.
    case 0xEFC382: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:35 JSL SET_OAM_SIZE
    case 0xEFC383: cpu.execute_instruction<0x22>(0xC08D83, 4); return true;
    // src/unknown/EF/EFDA05.asm:36 LDA #0
    case 0xEFC387: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFDA05.asm:36 LDA #0
    // Overlapping static entry reached from 0xEFC387.
    case 0xEFC389: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/unknown/EF/EFDA05.asm:37 STA [@VIRTUAL06]
    case 0xEFC38A: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFDA05.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFC38C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFDA05.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFC38E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFDA05.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFC390: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFDA05.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFC392: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFDA05.asm:39 LDY #0
    case 0xEFC394: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFDA05.asm:39 LDY #0
    // Overlapping static entry reached from 0xEFC394.
    case 0xEFC396: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/EF/EFDA05.asm:40 TYX
    case 0xEFC397: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xEFC398: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFDA05.asm:42 LDA #3
    case 0xEFC39A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // src/unknown/EF/EFDA05.asm:43 JSL PREPARE_VRAM_COPY
    case 0xEFC39C: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/EF/EFDA05.asm:43 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFC39A.
    case 0xEFC39D: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/EF/EFDA05.asm:43 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFC39D.
    case 0xEFC39F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00E6A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFDA05.asm:45 LOADPTR UNKNOWN_EFF1BB, @LOCAL00
    case 0xEFC3A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E6, 2); else cpu.execute_instruction<0xA9>(0x00DAE6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFDA05.asm:45 LOADPTR UNKNOWN_EFF1BB, @LOCAL00
    // Overlapping static entry reached from 0xEFC39F.
    case 0xEFC3A1: cpu.execute_instruction<0xE6>(0x0000DA, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFDA05.asm:45 LOADPTR UNKNOWN_EFF1BB, @LOCAL00
    // Overlapping static entry reached from 0xEFC3A0.
    case 0xEFC3A2: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFDA05.asm:45 LOADPTR UNKNOWN_EFF1BB, @LOCAL00
    case 0xEFC3A3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFDA05.asm:45 LOADPTR UNKNOWN_EFF1BB, @LOCAL00
    case 0xEFC3A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFDA05.asm:45 LOADPTR UNKNOWN_EFF1BB, @LOCAL00
    // Overlapping static entry reached from 0xEFC3A5.
    case 0xEFC3A7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFDA05.asm:45 LOADPTR UNKNOWN_EFF1BB, @LOCAL00
    case 0xEFC3A8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFDA05.asm:46 LDX #BPP4PALETTE_SIZE * 16
    case 0xEFC3AA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/unknown/EF/EFDA05.asm:46 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xEFC3AA.
    case 0xEFC3AC: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/EF/EFDA05.asm:47 LDA #.LOWORD(PALETTES)
    case 0xEFC3AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/EF/EFDA05.asm:47 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xEFC3AD.
    case 0xEFC3AF: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:48 JSL MEMCPY16
    case 0xEFC3B0: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/EF/EFDA05.asm:49 JSL UNKNOWN_EFD95E
    case 0xEFC3B4: cpu.execute_instruction<0x22>(0xEFC269, 4); return true;
    // src/unknown/EF/EFDA05.asm:50 STZ ENTITY_ALLOCATION_MIN_SLOT
    case 0xEFC3B8: cpu.execute_instruction<0x9C>(0x000A42, 3); return true;
    // src/unknown/EF/EFDA05.asm:51 LDA #1
    case 0xEFC3BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFDA05.asm:51 LDA #1
    // Overlapping static entry reached from 0xEFC3BB.
    case 0xEFC3BD: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFDA05.asm:52 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xEFC3BE: cpu.execute_instruction<0x8D>(0x000A44, 3); return true;
    // src/unknown/EF/EFDA05.asm:53 LDY #52
    case 0xEFC3C1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000034, 2); else cpu.execute_instruction<0xA0>(0x000034, 3); return true;
    // src/unknown/EF/EFDA05.asm:53 LDY #52
    // Overlapping static entry reached from 0xEFC3C1.
    case 0xEFC3C3: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/EF/EFDA05.asm:54 TYX
    case 0xEFC3C4: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/EF/EFDA05.asm:55 LDA #EVENT_SCRIPT::EVENT_000
    case 0xEFC3C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFDA05.asm:55 LDA #EVENT_SCRIPT::EVENT_000
    // Overlapping static entry reached from 0xEFC3C5.
    case 0xEFC3C7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDA05.asm:56 JSL INIT_ENTITY_WIPE
    case 0xEFC3C8: cpu.execute_instruction<0x22>(0xC092D4, 4); return true;
    // src/unknown/EF/EFDA05.asm:57 STA DEBUG_CURSOR_ENTITY
    case 0xEFC3CC: cpu.execute_instruction<0x8D>(0x00B704, 3); return true;
    // src/unknown/EF/EFDA05.asm:58 STZ NPC_SPAWNS_ENABLED
    case 0xEFC3CF: cpu.execute_instruction<0x9C>(0x004DDE, 3); return true;
    // src/unknown/EF/EFDA05.asm:59 STZ ENEMY_SPAWNS_ENABLED
    case 0xEFC3D2: cpu.execute_instruction<0x9C>(0x004DE0, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFDA05.asm:60 END_C_FUNCTION
    case 0xEFC3D5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/EF/EFDA05.asm:60 END_C_FUNCTION
    case 0xEFC3D6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFDABD.asm (unresolved).
bool execute_unresolved_ef_efdabd_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFDABD.asm:3 BEGIN_C_FUNCTION
    case 0xEFC3D7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFDABD.asm:12 END_STACK_VARS
    case 0xEFC3D9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EFDABD.asm:12 END_STACK_VARS
    case 0xEFC3DA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFDABD.asm:12 END_STACK_VARS
    case 0xEFC3DB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFDABD.asm:12 END_STACK_VARS
    case 0xEFC3DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFDABD.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xEFC3DC.
    case 0xEFC3DE: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFDABD.asm:12 END_STACK_VARS
    case 0xEFC3DF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EFDABD.asm:12 END_STACK_VARS
    case 0xEFC3E0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:13 STX @LOCAL03
    case 0xEFC3E1: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/EF/EFDABD.asm:13 STX @LOCAL03
    // Overlapping static entry reached from 0xEFC3DE.
    case 0xEFC3E2: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/unknown/EF/EFDABD.asm:14 STA @VIRTUAL04
    case 0xEFC3E3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFDABD.asm:14 STA @VIRTUAL04
    // Overlapping static entry reached from 0xEFC3E2.
    case 0xEFC3E4: cpu.execute_instruction<0x04>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFDABD.asm:15 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xEFC3E5: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFDABD.asm:15 MOVE_INT @PARAM02, @VIRTUAL06
    // Overlapping static entry reached from 0xEFC3E4.
    case 0xEFC3E6: cpu.execute_instruction<0x24>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFDABD.asm:15 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xEFC3E7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFDABD.asm:15 MOVE_INT @PARAM02, @VIRTUAL06
    // Overlapping static entry reached from 0xEFC3E6.
    case 0xEFC3E8: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFDABD.asm:15 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xEFC3E9: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFDABD.asm:15 MOVE_INT @PARAM02, @VIRTUAL06
    // Overlapping static entry reached from 0xEFC3E8.
    case 0xEFC3EA: cpu.execute_instruction<0x26>(0x000085, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFDABD.asm:15 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xEFC3EB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFDABD.asm:15 MOVE_INT @PARAM02, @VIRTUAL06
    // Overlapping static entry reached from 0xEFC3EA.
    case 0xEFC3EC: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:16 LDA #0
    case 0xEFC3ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFDABD.asm:16 LDA #0
    // Overlapping static entry reached from 0xEFC3ED.
    case 0xEFC3EF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFDABD.asm:17 STA @VIRTUAL02
    case 0xEFC3F0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFDABD.asm:18 LDA #64
    case 0xEFC3F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/EF/EFDABD.asm:18 LDA #64
    // Overlapping static entry reached from 0xEFC3F2.
    case 0xEFC3F4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDABD.asm:19 JSL SBRK
    case 0xEFC3F5: cpu.execute_instruction<0x22>(0xC086D7, 4); return true;
    // src/unknown/EF/EFDABD.asm:20 TAY
    case 0xEFC3F9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:21 TYX
    case 0xEFC3FA: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:22 BRA @UNKNOWN1
    case 0xEFC3FB: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/EF/EFDABD.asm:24 AND #$00FF
    case 0xEFC3FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFDABD.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xEFC3FD.
    case 0xEFC3FF: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EFDABD.asm:25 CLC
    case 0xEFC400: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:26 ADC #$2000
    case 0xEFC401: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002000, 3); return true;
    // src/unknown/EF/EFDABD.asm:26 ADC #$2000
    // Overlapping static entry reached from 0xEFC401.
    case 0xEFC403: cpu.execute_instruction<0x20>(0x00009D, 3); return true;
    // src/unknown/EF/EFDABD.asm:27 STA __BSS_START__,X
    case 0xEFC404: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFDABD.asm:27 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFC403.
    case 0xEFC406: cpu.execute_instruction<0x00>(0x0000E6, 2); return true;
    // src/unknown/EF/EFDABD.asm:28 INC @VIRTUAL06
    case 0xEFC407: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/EF/EFDABD.asm:29 INX
    case 0xEFC409: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:30 INX
    case 0xEFC40A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:31 INC @VIRTUAL02
    case 0xEFC40B: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EFDABD.asm:32 INC @VIRTUAL02
    case 0xEFC40D: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EFDABD.asm:34 LDA [@VIRTUAL06]
    case 0xEFC40F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/EF/EFDABD.asm:35 AND #$00FF
    case 0xEFC411: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFDABD.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xEFC411.
    case 0xEFC413: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFDABD.asm:36 BNE @UNKNOWN0
    case 0xEFC414: cpu.execute_instruction<0xD0>(0x0000E7, 2); return true;
    // src/unknown/EF/EFDABD.asm:37 LDA @LOCAL03
    case 0xEFC416: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EFDABD.asm:38 ASL
    case 0xEFC418: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:39 ASL
    case 0xEFC419: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:40 ASL
    case 0xEFC41A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:41 ASL
    case 0xEFC41B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:42 ASL
    case 0xEFC41C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:43 CLC
    case 0xEFC41D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:44 ADC @VIRTUAL04
    case 0xEFC41E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/EF/EFDABD.asm:45 CLC
    case 0xEFC420: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFDABD.asm:46 ADC #$7C00
    case 0xEFC421: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007C00, 3); return true;
    // src/unknown/EF/EFDABD.asm:46 ADC #$7C00
    // Overlapping static entry reached from 0xEFC421.
    case 0xEFC423: cpu.execute_instruction<0x7C>(0x001285, 3); return true;
    // src/unknown/EF/EFDABD.asm:47 STA @LOCAL02
    case 0xEFC424: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EFDABD.asm:48 LDA #^STACK_START
    case 0xEFC426: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/unknown/EF/EFDABD.asm:48 LDA #^STACK_START
    // Overlapping static entry reached from 0xEFC426.
    case 0xEFC428: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFDABD.asm:49 STA @LOCAL00
    case 0xEFC429: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFDABD.asm:50 LDA @LOCAL02
    case 0xEFC42B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EFDABD.asm:51 STA @LOCAL01
    case 0xEFC42D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFDABD.asm:52 LDX @VIRTUAL02
    case 0xEFC42F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFDABD.asm:53 SEP #PROC_FLAGS::ACCUM8
    case 0xEFC431: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFDABD.asm:54 LDA #0
    case 0xEFC433: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/EF/EFDABD.asm:55 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFC435: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/unknown/EF/EFDABD.asm:55 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC433.
    case 0xEFC436: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFDABD.asm:56 END_C_FUNCTION
    case 0xEFC439: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/EF/EFDABD.asm:56 END_C_FUNCTION
    case 0xEFC43A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFDF0B.asm (unresolved).
bool execute_unresolved_ef_efdf0b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFDF0B.asm:3 BEGIN_C_FUNCTION
    case 0xEFC825: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFDF0B.asm:9 END_STACK_VARS
    case 0xEFC827: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EFDF0B.asm:9 END_STACK_VARS
    case 0xEFC828: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFDF0B.asm:9 END_STACK_VARS
    case 0xEFC829: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFDF0B.asm:9 END_STACK_VARS
    case 0xEFC82A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFDF0B.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xEFC82A.
    case 0xEFC82C: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFDF0B.asm:9 END_STACK_VARS
    case 0xEFC82D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EFDF0B.asm:9 END_STACK_VARS
    case 0xEFC82E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFDF0B.asm:10 STY @VIRTUAL02
    case 0xEFC82F: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/EF/EFDF0B.asm:10 STY @VIRTUAL02
    // Overlapping static entry reached from 0xEFC82C.
    case 0xEFC830: cpu.execute_instruction<0x02>(0x00009B, 2); return true;
    // src/unknown/EF/EFDF0B.asm:11 TXY
    case 0xEFC831: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/EF/EFDF0B.asm:12 STA @LOCAL00
    case 0xEFC832: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:13 LDX #0
    case 0xEFC834: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/EF/EFDF0B.asm:13 LDX #0
    // Overlapping static entry reached from 0xEFC834.
    case 0xEFC836: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/EF/EFDF0B.asm:14 LDA VIEW_ATTRIBUTE_MODE
    case 0xEFC837: cpu.execute_instruction<0xAD>(0x00B710, 3); return true;
    // src/unknown/EF/EFDF0B.asm:15 AND #$00FF
    case 0xEFC83A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFDF0B.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xEFC83A.
    case 0xEFC83C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:16 BEQ @UNKNOWN1
    case 0xEFC83D: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/EF/EFDF0B.asm:17 CMP #1
    case 0xEFC83F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFDF0B.asm:17 CMP #1
    // Overlapping static entry reached from 0xEFC83F.
    case 0xEFC841: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:18 BEQ @UNKNOWN5
    case 0xEFC842: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/unknown/EF/EFDF0B.asm:19 CMP #2
    case 0xEFC844: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFDF0B.asm:19 CMP #2
    // Overlapping static entry reached from 0xEFC844.
    case 0xEFC846: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/EF/EFDF0B.asm:20 BEQL @UNKNOWN10
    case 0xEFC847: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/EF/EFDF0B.asm:20 BEQL @UNKNOWN10
    case 0xEFC849: cpu.execute_instruction<0x4C>(0x00C8D1, 3); return true;
    // src/unknown/EF/EFDF0B.asm:21 JMP @UNKNOWN11
    case 0xEFC84C: cpu.execute_instruction<0x4C>(0x00C8DB, 3); return true;
    // src/unknown/EF/EFDF0B.asm:23 LDA @LOCAL00
    case 0xEFC84F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:24 AND #$0002
    case 0xEFC851: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/unknown/EF/EFDF0B.asm:24 AND #$0002
    // Overlapping static entry reached from 0xEFC851.
    case 0xEFC853: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:25 BEQ @UNKNOWN2
    case 0xEFC854: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/EF/EFDF0B.asm:26 LDX #$2061
    case 0xEFC856: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000061, 2); else cpu.execute_instruction<0xA2>(0x002061, 3); return true;
    // src/unknown/EF/EFDF0B.asm:26 LDX #$2061
    // Overlapping static entry reached from 0xEFC856.
    case 0xEFC858: cpu.execute_instruction<0x20>(0x00DB4C, 3); return true;
    // src/unknown/EF/EFDF0B.asm:27 JMP @UNKNOWN11
    case 0xEFC859: cpu.execute_instruction<0x4C>(0x00C8DB, 3); return true;
    // src/unknown/EF/EFDF0B.asm:27 JMP @UNKNOWN11
    // Overlapping static entry reached from 0xEFC858.
    case 0xEFC85B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/EF/EFDF0B.asm:29 LDA @LOCAL00
    case 0xEFC85C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:30 AND #$0001
    case 0xEFC85E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/EF/EFDF0B.asm:30 AND #$0001
    // Overlapping static entry reached from 0xEFC85E.
    case 0xEFC860: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:31 BEQ @UNKNOWN3
    case 0xEFC861: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EFDF0B.asm:32 LDX #$2062
    case 0xEFC863: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000062, 2); else cpu.execute_instruction<0xA2>(0x002062, 3); return true;
    // src/unknown/EF/EFDF0B.asm:32 LDX #$2062
    // Overlapping static entry reached from 0xEFC863.
    case 0xEFC865: cpu.execute_instruction<0x20>(0x007380, 3); return true;
    // src/unknown/EF/EFDF0B.asm:33 BRA @UNKNOWN11
    case 0xEFC866: cpu.execute_instruction<0x80>(0x000073, 2); return true;
    // src/unknown/EF/EFDF0B.asm:35 LDA @LOCAL00
    case 0xEFC868: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:36 AND #$0080
    case 0xEFC86A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EFDF0B.asm:36 AND #$0080
    // Overlapping static entry reached from 0xEFC86A.
    case 0xEFC86C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:37 BEQ @UNKNOWN4
    case 0xEFC86D: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EFDF0B.asm:38 LDX #$2063
    case 0xEFC86F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000063, 2); else cpu.execute_instruction<0xA2>(0x002063, 3); return true;
    // src/unknown/EF/EFDF0B.asm:38 LDX #$2063
    // Overlapping static entry reached from 0xEFC86F.
    case 0xEFC871: cpu.execute_instruction<0x20>(0x006780, 3); return true;
    // src/unknown/EF/EFDF0B.asm:39 BRA @UNKNOWN11
    case 0xEFC872: cpu.execute_instruction<0x80>(0x000067, 2); return true;
    // src/unknown/EF/EFDF0B.asm:41 LDA @LOCAL00
    case 0xEFC874: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:42 AND #$0040
    case 0xEFC876: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/unknown/EF/EFDF0B.asm:42 AND #$0040
    // Overlapping static entry reached from 0xEFC876.
    case 0xEFC878: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:43 BEQ @UNKNOWN11
    case 0xEFC879: cpu.execute_instruction<0xF0>(0x000060, 2); return true;
    // src/unknown/EF/EFDF0B.asm:44 LDX #$2063
    case 0xEFC87B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000063, 2); else cpu.execute_instruction<0xA2>(0x002063, 3); return true;
    // src/unknown/EF/EFDF0B.asm:44 LDX #$2063
    // Overlapping static entry reached from 0xEFC87B.
    case 0xEFC87D: cpu.execute_instruction<0x20>(0x005B80, 3); return true;
    // src/unknown/EF/EFDF0B.asm:45 BRA @UNKNOWN11
    case 0xEFC87E: cpu.execute_instruction<0x80>(0x00005B, 2); return true;
    // src/unknown/EF/EFDF0B.asm:47 LDA @LOCAL00
    case 0xEFC880: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:48 AND #$0010
    case 0xEFC882: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x000010, 3); return true;
    // src/unknown/EF/EFDF0B.asm:48 AND #$0010
    // Overlapping static entry reached from 0xEFC882.
    case 0xEFC884: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:49 BEQ @UNKNOWN11
    case 0xEFC885: cpu.execute_instruction<0xF0>(0x000054, 2); return true;
    // src/unknown/EF/EFDF0B.asm:50 LDX @VIRTUAL02
    case 0xEFC887: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFDF0B.asm:51 TYA
    case 0xEFC889: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/EF/EFDF0B.asm:52 JSL UNKNOWN_C07477
    case 0xEFC88A: cpu.execute_instruction<0x22>(0xC076B6, 4); return true;
    // src/unknown/EF/EFDF0B.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xEFC88E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFDF0B.asm:54 AND #$00FF
    case 0xEFC890: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFDF0B.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xEFC890.
    case 0xEFC892: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/EF/EFDF0B.asm:55 CMP #2
    case 0xEFC893: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFDF0B.asm:55 CMP #2
    // Overlapping static entry reached from 0xEFC893.
    case 0xEFC895: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:56 BEQ @UNKNOWN6
    case 0xEFC896: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/EF/EFDF0B.asm:57 CMP #1
    case 0xEFC898: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFDF0B.asm:57 CMP #1
    // Overlapping static entry reached from 0xEFC898.
    case 0xEFC89A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:58 BEQ @UNKNOWN7
    case 0xEFC89B: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/EF/EFDF0B.asm:59 CMP #3
    case 0xEFC89D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFDF0B.asm:59 CMP #3
    // Overlapping static entry reached from 0xEFC89D.
    case 0xEFC89F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:60 BEQ @UNKNOWN7
    case 0xEFC8A0: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/unknown/EF/EFDF0B.asm:61 CMP #4
    case 0xEFC8A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/EF/EFDF0B.asm:61 CMP #4
    // Overlapping static entry reached from 0xEFC8A2.
    case 0xEFC8A4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:62 BEQ @UNKNOWN7
    case 0xEFC8A5: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/EF/EFDF0B.asm:63 CMP #5
    case 0xEFC8A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/EF/EFDF0B.asm:63 CMP #5
    // Overlapping static entry reached from 0xEFC8A7.
    case 0xEFC8A9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:64 BEQ @UNKNOWN8
    case 0xEFC8AA: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/EF/EFDF0B.asm:65 CMP #0
    case 0xEFC8AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFDF0B.asm:65 CMP #0
    // Overlapping static entry reached from 0xEFC8AC.
    case 0xEFC8AE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:66 BEQ @UNKNOWN8
    case 0xEFC8AF: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/EF/EFDF0B.asm:67 CMP #6
    case 0xEFC8B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/EF/EFDF0B.asm:67 CMP #6
    // Overlapping static entry reached from 0xEFC8B1.
    case 0xEFC8B3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:68 BEQ @UNKNOWN8
    case 0xEFC8B4: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/EF/EFDF0B.asm:69 CMP #7
    case 0xEFC8B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/EF/EFDF0B.asm:69 CMP #7
    // Overlapping static entry reached from 0xEFC8B6.
    case 0xEFC8B8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:70 BEQ @UNKNOWN8
    case 0xEFC8B9: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/EF/EFDF0B.asm:71 BRA @UNKNOWN9
    case 0xEFC8BB: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/EF/EFDF0B.asm:73 LDX #$2461
    case 0xEFC8BD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000061, 2); else cpu.execute_instruction<0xA2>(0x002461, 3); return true;
    // src/unknown/EF/EFDF0B.asm:73 LDX #$2461
    // Overlapping static entry reached from 0xEFC8BD.
    case 0xEFC8BF: cpu.execute_instruction<0x24>(0x000080, 2); return true;
    // src/unknown/EF/EFDF0B.asm:74 BRA @UNKNOWN11
    case 0xEFC8C0: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/EF/EFDF0B.asm:74 BRA @UNKNOWN11
    // Overlapping static entry reached from 0xEFC8BF.
    case 0xEFC8C1: cpu.execute_instruction<0x19>(0x0062A2, 3); return true;
    // src/unknown/EF/EFDF0B.asm:76 LDX #$2462
    case 0xEFC8C2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000062, 2); else cpu.execute_instruction<0xA2>(0x002462, 3); return true;
    // src/unknown/EF/EFDF0B.asm:76 LDX #$2462
    // Overlapping static entry reached from 0xEFC8C2.
    case 0xEFC8C4: cpu.execute_instruction<0x24>(0x000080, 2); return true;
    // src/unknown/EF/EFDF0B.asm:77 BRA @UNKNOWN11
    case 0xEFC8C5: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/EF/EFDF0B.asm:77 BRA @UNKNOWN11
    // Overlapping static entry reached from 0xEFC8C4.
    case 0xEFC8C6: cpu.execute_instruction<0x14>(0x0000A2, 2); return true;
    // src/unknown/EF/EFDF0B.asm:79 LDX #$2463
    case 0xEFC8C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000063, 2); else cpu.execute_instruction<0xA2>(0x002463, 3); return true;
    // src/unknown/EF/EFDF0B.asm:79 LDX #$2463
    // Overlapping static entry reached from 0xEFC8C6.
    case 0xEFC8C8: cpu.execute_instruction<0x63>(0x000024, 2); return true;
    // src/unknown/EF/EFDF0B.asm:79 LDX #$2463
    // Overlapping static entry reached from 0xEFC8C7.
    case 0xEFC8C9: cpu.execute_instruction<0x24>(0x000080, 2); return true;
    // src/unknown/EF/EFDF0B.asm:80 BRA @UNKNOWN11
    case 0xEFC8CA: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/EF/EFDF0B.asm:80 BRA @UNKNOWN11
    // Overlapping static entry reached from 0xEFC8C9.
    case 0xEFC8CB: cpu.execute_instruction<0x0F>(0x2058A2, 4); return true;
    // src/unknown/EF/EFDF0B.asm:82 LDX #$2058
    case 0xEFC8CC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000058, 2); else cpu.execute_instruction<0xA2>(0x002058, 3); return true;
    // src/unknown/EF/EFDF0B.asm:82 LDX #$2058
    // Overlapping static entry reached from 0xEFC91B.
    case 0xEFC8CD: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/unknown/EF/EFDF0B.asm:82 LDX #$2058
    // Overlapping static entry reached from 0xEFC8CC.
    case 0xEFC8CE: cpu.execute_instruction<0x20>(0x000A80, 3); return true;
    // src/unknown/EF/EFDF0B.asm:83 BRA @UNKNOWN11
    case 0xEFC8CF: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/EF/EFDF0B.asm:85 LDA @LOCAL00
    case 0xEFC8D1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFDF0B.asm:86 AND #$0020
    case 0xEFC8D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000020, 2); else cpu.execute_instruction<0x29>(0x000020, 3); return true;
    // src/unknown/EF/EFDF0B.asm:86 AND #$0020
    // Overlapping static entry reached from 0xEFC8D3.
    case 0xEFC8D5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFDF0B.asm:87 BEQ @UNKNOWN11
    case 0xEFC8D6: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFDF0B.asm:88 LDX #$2261
    case 0xEFC8D8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000061, 2); else cpu.execute_instruction<0xA2>(0x002261, 3); return true;
    // src/unknown/EF/EFDF0B.asm:88 LDX #$2261
    // Overlapping static entry reached from 0xEFC8D8.
    case 0xEFC8DA: cpu.execute_instruction<0x22>(0x602B8A, 4); return true;
    // src/unknown/EF/EFDF0B.asm:90 TXA
    case 0xEFC8DB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFDF0B.asm:91 END_C_FUNCTION
    case 0xEFC8DC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/EF/EFDF0B.asm:91 END_C_FUNCTION
    case 0xEFC8DD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFDFC4.asm (unresolved).
bool execute_unresolved_ef_efdfc4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFDFC4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFC8DE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFDFC4.asm:13 END_STACK_VARS
    case 0xEFC8E0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EFDFC4.asm:13 END_STACK_VARS
    case 0xEFC8E1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFDFC4.asm:13 END_STACK_VARS
    case 0xEFC8E2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFDFC4.asm:13 END_STACK_VARS
    case 0xEFC8E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFDFC4.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xEFC8E3.
    case 0xEFC8E5: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFDFC4.asm:13 END_STACK_VARS
    case 0xEFC8E6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EFDFC4.asm:13 END_STACK_VARS
    case 0xEFC8E7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:14 STX @LOCAL05
    case 0xEFC8E8: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:14 STX @LOCAL05
    // Overlapping static entry reached from 0xEFC8E5.
    case 0xEFC8E9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:15 STA @VIRTUAL02
    case 0xEFC8EA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:16 STA @LOCAL04
    case 0xEFC8EC: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFDFC4.asm:17 LDA DEBUG_MODE_NUMBER
    case 0xEFC8EE: cpu.execute_instruction<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFDFC4.asm:18 CMP #3
    case 0xEFC8F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFDFC4.asm:18 CMP #3
    // Overlapping static entry reached from 0xEFC8F1.
    case 0xEFC8F3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/EF/EFDFC4.asm:19 BNEL @UNKNOWN5
    case 0xEFC8F4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/EF/EFDFC4.asm:19 BNEL @UNKNOWN5
    case 0xEFC8F6: cpu.execute_instruction<0x4C>(0x00C994, 3); return true;
    // src/unknown/EF/EFDFC4.asm:20 LDA #64
    case 0xEFC8F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/EF/EFDFC4.asm:20 LDA #64
    // Overlapping static entry reached from 0xEFC8F9.
    case 0xEFC8FB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFDFC4.asm:21 JSL SBRK
    case 0xEFC8FC: cpu.execute_instruction<0x22>(0xC086D7, 4); return true;
    // src/unknown/EF/EFDFC4.asm:22 STA @LOCAL03
    case 0xEFC900: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/EF/EFDFC4.asm:23 LDA @LOCAL05
    case 0xEFC902: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:24 CMP #$8000
    case 0xEFC904: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/EF/EFDFC4.asm:24 CMP #$8000
    // Overlapping static entry reached from 0xEFC904.
    case 0xEFC906: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/EF/EFDFC4.asm:25 BCS @UNKNOWN4
    case 0xEFC907: cpu.execute_instruction<0xB0>(0x00005B, 2); return true;
    // src/unknown/EF/EFDFC4.asm:26 LDA @VIRTUAL02
    case 0xEFC909: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:27 AND #$001F
    case 0xEFC90B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/EF/EFDFC4.asm:27 AND #$001F
    // Overlapping static entry reached from 0xEFC90B.
    case 0xEFC90D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFDFC4.asm:28 STA @LOCAL02
    case 0xEFC90E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFDFC4.asm:29 LDA #0
    case 0xEFC910: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFDFC4.asm:29 LDA #0
    // Overlapping static entry reached from 0xEFC910.
    case 0xEFC912: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFDFC4.asm:30 STA @VIRTUAL04
    case 0xEFC913: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFDFC4.asm:31 BRA @UNKNOWN3
    case 0xEFC915: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/unknown/EF/EFDFC4.asm:33 LDA @VIRTUAL02
    case 0xEFC917: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:34 CMP #$8000
    case 0xEFC919: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/EF/EFDFC4.asm:34 CMP #$8000
    // Overlapping static entry reached from 0xEFC919.
    case 0xEFC91B: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/EF/EFDFC4.asm:35 BCS @UNKNOWN2
    case 0xEFC91C: cpu.execute_instruction<0xB0>(0x00002F, 2); return true;
    // src/unknown/EF/EFDFC4.asm:36 LDA @VIRTUAL02
    case 0xEFC91E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:37 AND #$003F
    case 0xEFC920: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/EF/EFDFC4.asm:37 AND #$003F
    // Overlapping static entry reached from 0xEFC920.
    case 0xEFC922: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFDFC4.asm:38 STA @VIRTUAL02
    case 0xEFC923: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:39 LDA @LOCAL05
    case 0xEFC925: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:40 AND #$003F
    case 0xEFC927: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/EF/EFDFC4.asm:40 AND #$003F
    // Overlapping static entry reached from 0xEFC927.
    case 0xEFC929: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:41 ASL
    case 0xEFC92A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:42 ASL
    case 0xEFC92B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:43 ASL
    case 0xEFC92C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:44 ASL
    case 0xEFC92D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:45 ASL
    case 0xEFC92E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:46 ASL
    case 0xEFC92F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:47 CLC
    case 0xEFC930: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:48 ADC @VIRTUAL02
    case 0xEFC931: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:49 TAX
    case 0xEFC933: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:50 LDA LOADED_COLLISION_TILES,X
    case 0xEFC934: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/EF/EFDFC4.asm:51 AND #$00FF
    case 0xEFC937: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFDFC4.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xEFC937.
    case 0xEFC939: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/EF/EFDFC4.asm:52 LDY @LOCAL05
    case 0xEFC93A: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:53 LDX @LOCAL04
    case 0xEFC93C: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/EF/EFDFC4.asm:54 STX @VIRTUAL02
    case 0xEFC93E: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:55 JSR UNKNOWN_EFDF0B
    case 0xEFC940: cpu.execute_instruction<0x20>(0x00C825, 3); return true;
    // src/unknown/EF/EFDFC4.asm:56 STA @LOCAL01
    case 0xEFC943: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EFDFC4.asm:57 LDA @LOCAL02
    case 0xEFC945: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EFDFC4.asm:58 ASL
    case 0xEFC947: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:59 TAY
    case 0xEFC948: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:60 LDA @LOCAL01
    case 0xEFC949: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EFDFC4.asm:61 STA (@LOCAL03),Y
    case 0xEFC94B: cpu.execute_instruction<0x91>(0x000016, 2); return true;
    // src/unknown/EF/EFDFC4.asm:63 LDA @LOCAL02
    case 0xEFC94D: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EFDFC4.asm:64 INC
    case 0xEFC94F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:65 AND #$001F
    case 0xEFC950: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/EF/EFDFC4.asm:65 AND #$001F
    // Overlapping static entry reached from 0xEFC950.
    case 0xEFC952: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFDFC4.asm:66 STA @LOCAL02
    case 0xEFC953: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFDFC4.asm:67 INC @VIRTUAL02
    case 0xEFC955: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:68 LDA @VIRTUAL02
    case 0xEFC957: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFDFC4.asm:69 STA @LOCAL04
    case 0xEFC959: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFDFC4.asm:70 INC @VIRTUAL04
    case 0xEFC95B: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/EF/EFDFC4.asm:72 LDA @VIRTUAL04
    case 0xEFC95D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFDFC4.asm:73 CMP #32
    case 0xEFC95F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/EF/EFDFC4.asm:73 CMP #32
    // Overlapping static entry reached from 0xEFC95F.
    case 0xEFC961: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EFDFC4.asm:74 BCC @UNKNOWN1
    case 0xEFC962: cpu.execute_instruction<0x90>(0x0000B3, 2); return true;
    // src/unknown/EF/EFDFC4.asm:76 LDA @LOCAL03
    case 0xEFC964: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/EF/EFDFC4.asm:77 PROMOTENEARPTRA @VIRTUAL06
    case 0xEFC966: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/EF/EFDFC4.asm:77 PROMOTENEARPTRA @VIRTUAL06
    case 0xEFC968: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/EF/EFDFC4.asm:77 PROMOTENEARPTRA @VIRTUAL06
    case 0xEFC969: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/EF/EFDFC4.asm:77 PROMOTENEARPTRA @VIRTUAL06
    case 0xEFC96B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/EF/EFDFC4.asm:77 PROMOTENEARPTRA @VIRTUAL06
    case 0xEFC96C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/EF/EFDFC4.asm:77 PROMOTENEARPTRA @VIRTUAL06
    case 0xEFC96E: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/EF/EFDFC4.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xEFC970: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFDFC4.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFC972: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFDFC4.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFC974: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFDFC4.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFC976: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFDFC4.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFC978: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFDFC4.asm:80 LDA @LOCAL05
    case 0xEFC97A: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:81 AND #$001F
    case 0xEFC97C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/EF/EFDFC4.asm:81 AND #$001F
    // Overlapping static entry reached from 0xEFC97C.
    case 0xEFC97E: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/EF/EFDFC4.asm:82 ASL
    case 0xEFC97F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:83 ASL
    case 0xEFC980: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:84 ASL
    case 0xEFC981: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:85 ASL
    case 0xEFC982: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:86 ASL
    case 0xEFC983: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:87 CLC
    case 0xEFC984: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:88 ADC #VRAM::TEXT_LAYER_TILEMAP
    case 0xEFC985: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007C00, 3); return true;
    // src/unknown/EF/EFDFC4.asm:88 ADC #VRAM::TEXT_LAYER_TILEMAP
    // Overlapping static entry reached from 0xEFC985.
    case 0xEFC987: cpu.execute_instruction<0x7C>(0x00A2A8, 3); return true;
    // src/unknown/EF/EFDFC4.asm:89 TAY
    case 0xEFC988: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EFDFC4.asm:90 LDX #64
    case 0xEFC989: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // src/unknown/EF/EFDFC4.asm:90 LDX #64
    // Overlapping static entry reached from 0xEFC989.
    case 0xEFC98B: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/EF/EFDFC4.asm:91 SEP #PROC_FLAGS::ACCUM8
    case 0xEFC98C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFDFC4.asm:92 LDA #0
    case 0xEFC98E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/EF/EFDFC4.asm:93 JSL PREPARE_VRAM_COPY
    case 0xEFC990: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/EF/EFDFC4.asm:93 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFC98E.
    case 0xEFC991: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/EF/EFDFC4.asm:93 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFC991.
    case 0xEFC993: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFDFC4.asm:95 END_C_FUNCTION
    case 0xEFC994: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFDFC4.asm:95 END_C_FUNCTION
    case 0xEFC995: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFE07C.asm (unresolved).
bool execute_unresolved_ef_efe07c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFE07C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFC996: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFE07C.asm:13 END_STACK_VARS
    case 0xEFC998: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EFE07C.asm:13 END_STACK_VARS
    case 0xEFC999: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFE07C.asm:13 END_STACK_VARS
    case 0xEFC99A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE07C.asm:13 END_STACK_VARS
    case 0xEFC99B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE07C.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xEFC99B.
    case 0xEFC99D: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFE07C.asm:13 END_STACK_VARS
    case 0xEFC99E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EFE07C.asm:13 END_STACK_VARS
    case 0xEFC99F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:14 STX @VIRTUAL02
    case 0xEFC9A0: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:14 STX @VIRTUAL02
    // Overlapping static entry reached from 0xEFC99D.
    case 0xEFC9A1: cpu.execute_instruction<0x02>(0x000086, 2); return true;
    // src/unknown/EF/EFE07C.asm:15 STX @LOCAL05
    case 0xEFC9A2: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/unknown/EF/EFE07C.asm:16 STA @LOCAL04
    case 0xEFC9A4: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFE07C.asm:17 LDA DEBUG_MODE_NUMBER
    case 0xEFC9A6: cpu.execute_instruction<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE07C.asm:18 CMP #3
    case 0xEFC9A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFE07C.asm:18 CMP #3
    // Overlapping static entry reached from 0xEFC9A9.
    case 0xEFC9AB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/EF/EFE07C.asm:19 BNEL @UNKNOWN5
    case 0xEFC9AC: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/EF/EFE07C.asm:19 BNEL @UNKNOWN5
    case 0xEFC9AE: cpu.execute_instruction<0x4C>(0x00CA4B, 3); return true;
    // src/unknown/EF/EFE07C.asm:20 LDA #64
    case 0xEFC9B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/EF/EFE07C.asm:20 LDA #64
    // Overlapping static entry reached from 0xEFC9B1.
    case 0xEFC9B3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE07C.asm:21 JSL SBRK
    case 0xEFC9B4: cpu.execute_instruction<0x22>(0xC086D7, 4); return true;
    // src/unknown/EF/EFE07C.asm:22 STA @LOCAL03
    case 0xEFC9B8: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/EF/EFE07C.asm:23 LDA @LOCAL04
    case 0xEFC9BA: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE07C.asm:24 CMP #$8000
    case 0xEFC9BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/EF/EFE07C.asm:24 CMP #$8000
    // Overlapping static entry reached from 0xEFC9BC.
    case 0xEFC9BE: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/EF/EFE07C.asm:25 BCS @UNKNOWN4
    case 0xEFC9BF: cpu.execute_instruction<0xB0>(0x00005F, 2); return true;
    // src/unknown/EF/EFE07C.asm:26 LDA @VIRTUAL02
    case 0xEFC9C1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:27 AND #$001F
    case 0xEFC9C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/EF/EFE07C.asm:27 AND #$001F
    // Overlapping static entry reached from 0xEFC9C3.
    case 0xEFC9C5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE07C.asm:28 STA @LOCAL02
    case 0xEFC9C6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE07C.asm:29 LDA #0
    case 0xEFC9C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE07C.asm:29 LDA #0
    // Overlapping static entry reached from 0xEFC9C8.
    case 0xEFC9CA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE07C.asm:30 STA @VIRTUAL04
    case 0xEFC9CB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFE07C.asm:31 BRA @UNKNOWN3
    case 0xEFC9CD: cpu.execute_instruction<0x80>(0x00004A, 2); return true;
    // src/unknown/EF/EFE07C.asm:33 LDA @VIRTUAL02
    case 0xEFC9CF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:34 CMP #$8000
    case 0xEFC9D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/EF/EFE07C.asm:34 CMP #$8000
    // Overlapping static entry reached from 0xEFC9D1.
    case 0xEFC9D3: cpu.execute_instruction<0x80>(0x0000B0, 2); return true;
    // src/unknown/EF/EFE07C.asm:35 BCS @UNKNOWN2
    case 0xEFC9D4: cpu.execute_instruction<0xB0>(0x000033, 2); return true;
    // src/unknown/EF/EFE07C.asm:36 LDA @LOCAL04
    case 0xEFC9D6: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE07C.asm:37 AND #$003F
    case 0xEFC9D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/EF/EFE07C.asm:37 AND #$003F
    // Overlapping static entry reached from 0xEFC9D8.
    case 0xEFC9DA: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/unknown/EF/EFE07C.asm:38 PHA
    case 0xEFC9DB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:39 LDA @VIRTUAL02
    case 0xEFC9DC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:40 AND #$003F
    case 0xEFC9DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/EF/EFE07C.asm:40 AND #$003F
    // Overlapping static entry reached from 0xEFC9DE.
    case 0xEFC9E0: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/EF/EFE07C.asm:41 ASL
    case 0xEFC9E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:42 ASL
    case 0xEFC9E2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:43 ASL
    case 0xEFC9E3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:44 ASL
    case 0xEFC9E4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:45 ASL
    case 0xEFC9E5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:46 ASL
    case 0xEFC9E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:47 PLY
    case 0xEFC9E7: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:48 STY @VIRTUAL02
    case 0xEFC9E8: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:49 CLC
    case 0xEFC9EA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:50 ADC @VIRTUAL02
    case 0xEFC9EB: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:51 TAX
    case 0xEFC9ED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:52 LDA LOADED_COLLISION_TILES,X
    case 0xEFC9EE: cpu.execute_instruction<0xBD>(0x00E000, 3); return true;
    // src/unknown/EF/EFE07C.asm:53 AND #$00FF
    case 0xEFC9F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFE07C.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xEFC9F1.
    case 0xEFC9F3: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/EF/EFE07C.asm:54 LDX @LOCAL05
    case 0xEFC9F4: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/unknown/EF/EFE07C.asm:55 STX @VIRTUAL02
    case 0xEFC9F6: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:56 LDY @VIRTUAL02
    case 0xEFC9F8: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:57 LDX @LOCAL04
    case 0xEFC9FA: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/EF/EFE07C.asm:57 LDX @LOCAL04
    // Overlapping static entry reached from 0xEFCA74.
    case 0xEFC9FB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:58 JSR UNKNOWN_EFDF0B
    case 0xEFC9FC: cpu.execute_instruction<0x20>(0x00C825, 3); return true;
    // src/unknown/EF/EFE07C.asm:59 STA @LOCAL01
    case 0xEFC9FF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EFE07C.asm:60 LDA @LOCAL02
    case 0xEFCA01: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EFE07C.asm:61 ASL
    case 0xEFCA03: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:62 TAY
    case 0xEFCA04: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:63 LDA @LOCAL01
    case 0xEFCA05: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EFE07C.asm:64 STA (@LOCAL03),Y
    case 0xEFCA07: cpu.execute_instruction<0x91>(0x000016, 2); return true;
    // src/unknown/EF/EFE07C.asm:66 LDA @LOCAL02
    case 0xEFCA09: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EFE07C.asm:67 INC
    case 0xEFCA0B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:68 AND #$001F
    case 0xEFCA0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/EF/EFE07C.asm:68 AND #$001F
    // Overlapping static entry reached from 0xEFCA0C.
    case 0xEFCA0E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE07C.asm:69 STA @LOCAL02
    case 0xEFCA0F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE07C.asm:70 INC @VIRTUAL02
    case 0xEFCA11: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:71 LDA @VIRTUAL02
    case 0xEFCA13: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE07C.asm:72 STA @LOCAL05
    case 0xEFCA15: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/EF/EFE07C.asm:73 INC @VIRTUAL04
    case 0xEFCA17: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/EF/EFE07C.asm:75 LDA @VIRTUAL04
    case 0xEFCA19: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFE07C.asm:76 CMP #32
    case 0xEFCA1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/EF/EFE07C.asm:76 CMP #32
    // Overlapping static entry reached from 0xEFCA1B.
    case 0xEFCA1D: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EFE07C.asm:77 BCC @UNKNOWN1
    case 0xEFCA1E: cpu.execute_instruction<0x90>(0x0000AF, 2); return true;
    // src/unknown/EF/EFE07C.asm:79 LDA @LOCAL03
    case 0xEFCA20: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/EF/EFE07C.asm:80 PROMOTENEARPTRA @VIRTUAL06
    case 0xEFCA22: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/EF/EFE07C.asm:80 PROMOTENEARPTRA @VIRTUAL06
    case 0xEFCA24: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/EF/EFE07C.asm:80 PROMOTENEARPTRA @VIRTUAL06
    case 0xEFCA25: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/EF/EFE07C.asm:80 PROMOTENEARPTRA @VIRTUAL06
    case 0xEFCA27: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/EF/EFE07C.asm:80 PROMOTENEARPTRA @VIRTUAL06
    case 0xEFCA28: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/EF/EFE07C.asm:80 PROMOTENEARPTRA @VIRTUAL06
    case 0xEFCA2A: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/EF/EFE07C.asm:81 REP #PROC_FLAGS::ACCUM8
    case 0xEFCA2C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE07C.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFCA2E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE07C.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFCA30: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE07C.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFCA32: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE07C.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFCA34: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE07C.asm:83 LDA @LOCAL04
    case 0xEFCA36: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE07C.asm:84 AND #$001F
    case 0xEFCA38: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/EF/EFE07C.asm:84 AND #$001F
    // Overlapping static entry reached from 0xEFCA38.
    case 0xEFCA3A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/EF/EFE07C.asm:85 CLC
    case 0xEFCA3B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:86 ADC #VRAM::TEXT_LAYER_TILEMAP
    case 0xEFCA3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007C00, 3); return true;
    // src/unknown/EF/EFE07C.asm:86 ADC #VRAM::TEXT_LAYER_TILEMAP
    // Overlapping static entry reached from 0xEFCA3C.
    case 0xEFCA3E: cpu.execute_instruction<0x7C>(0x00A2A8, 3); return true;
    // src/unknown/EF/EFE07C.asm:87 TAY
    case 0xEFCA3F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/EF/EFE07C.asm:88 LDX #64
    case 0xEFCA40: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // src/unknown/EF/EFE07C.asm:88 LDX #64
    // Overlapping static entry reached from 0xEFCA40.
    case 0xEFCA42: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/EF/EFE07C.asm:89 SEP #PROC_FLAGS::ACCUM8
    case 0xEFCA43: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFE07C.asm:90 LDA #27
    case 0xEFCA45: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00221B, 3); return true;
    // src/unknown/EF/EFE07C.asm:91 JSL PREPARE_VRAM_COPY
    case 0xEFCA47: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/EF/EFE07C.asm:91 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFCA45.
    case 0xEFCA48: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/EF/EFE07C.asm:91 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xEFCA48.
    case 0xEFCA4A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFE07C.asm:93 END_C_FUNCTION
    case 0xEFCA4B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFE07C.asm:93 END_C_FUNCTION
    case 0xEFCA4C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFE133.asm (unresolved).
bool execute_unresolved_ef_efe133_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFE133.asm:3 BEGIN_C_FUNCTION
    case 0xEFCA4D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFE133.asm:8 END_STACK_VARS
    case 0xEFCA4F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EFE133.asm:8 END_STACK_VARS
    case 0xEFCA50: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFE133.asm:8 END_STACK_VARS
    case 0xEFCA51: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE133.asm:8 END_STACK_VARS
    case 0xEFCA52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE133.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xEFCA52.
    case 0xEFCA54: cpu.execute_instruction<0xFF>(0x4A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFE133.asm:8 END_STACK_VARS
    case 0xEFCA55: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EFE133.asm:8 END_STACK_VARS
    case 0xEFCA56: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:9 LSR
    case 0xEFCA57: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:10 LSR
    case 0xEFCA58: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:11 LSR
    case 0xEFCA59: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:12 SEC
    case 0xEFCA5A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:13 SBC #16
    case 0xEFCA5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/unknown/EF/EFE133.asm:13 SBC #16
    // Overlapping static entry reached from 0xEFCA5B.
    case 0xEFCA5D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE133.asm:14 STA @VIRTUAL04
    case 0xEFCA5E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFE133.asm:15 TXA
    case 0xEFCA60: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:16 LSR
    case 0xEFCA61: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:17 LSR
    case 0xEFCA62: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:18 LSR
    case 0xEFCA63: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:19 SEC
    case 0xEFCA64: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:20 SBC #14
    case 0xEFCA65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000E, 2); else cpu.execute_instruction<0xE9>(0x00000E, 3); return true;
    // src/unknown/EF/EFE133.asm:20 SBC #14
    // Overlapping static entry reached from 0xEFCA65.
    case 0xEFCA67: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE133.asm:21 STA @VIRTUAL02
    case 0xEFCA68: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFE133.asm:22 STA @LOCAL01
    case 0xEFCA6A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE133.asm:23 LDY #.LOWORD(-1)
    case 0xEFCA6C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE133.asm:23 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFCA6C.
    case 0xEFCA6E: cpu.execute_instruction<0xFF>(0x800E84, 4); return true;
    // src/unknown/EF/EFE133.asm:24 STY @LOCAL00
    case 0xEFCA6F: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/EF/EFE133.asm:25 BRA @UNKNOWN1
    case 0xEFCA71: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/EF/EFE133.asm:25 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xEFCA6E.
    case 0xEFCA72: cpu.execute_instruction<0x15>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE133.asm:27 LDA @LOCAL01
    case 0xEFCA73: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/EF/EFE133.asm:27 LDA @LOCAL01
    // Overlapping static entry reached from 0xEFCA72.
    case 0xEFCA74: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // src/unknown/EF/EFE133.asm:28 STA @VIRTUAL02
    case 0xEFCA75: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFE133.asm:28 STA @VIRTUAL02
    // Overlapping static entry reached from 0xEFCA74.
    case 0xEFCA76: cpu.execute_instruction<0x02>(0x000084, 2); return true;
    // src/unknown/EF/EFE133.asm:29 STY @VIRTUAL02
    case 0xEFCA77: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/EF/EFE133.asm:30 CLC
    case 0xEFCA79: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:31 ADC @VIRTUAL02
    case 0xEFCA7A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/EF/EFE133.asm:32 TAX
    case 0xEFCA7C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:33 LDA @VIRTUAL04
    case 0xEFCA7D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFE133.asm:34 JSL UNKNOWN_EFDFC4
    case 0xEFCA7F: cpu.execute_instruction<0x22>(0xEFC8DE, 4); return true;
    // src/unknown/EF/EFE133.asm:35 LDY @LOCAL00
    case 0xEFCA83: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/EF/EFE133.asm:36 INY
    case 0xEFCA85: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/EF/EFE133.asm:37 STY @LOCAL00
    case 0xEFCA86: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/EF/EFE133.asm:39 CPY #31
    case 0xEFCA88: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00001F, 2); else cpu.execute_instruction<0xC0>(0x00001F, 3); return true;
    // src/unknown/EF/EFE133.asm:39 CPY #31
    // Overlapping static entry reached from 0xEFCA88.
    case 0xEFCA8A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE133.asm:40 BNE @UNKNOWN0
    case 0xEFCA8B: cpu.execute_instruction<0xD0>(0x0000E6, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFE133.asm:41 END_C_FUNCTION
    case 0xEFCA8D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/EF/EFE133.asm:41 END_C_FUNCTION
    case 0xEFCA8E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFE175-jp.asm (unresolved).
bool execute_unresolved_ef_efe175_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFE175-jp.asm:3 BEGIN_C_FUNCTION
    case 0xEFCA8F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFE175-jp.asm:13 END_STACK_VARS
    case 0xEFCA91: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFE175-jp.asm:13 END_STACK_VARS
    case 0xEFCA92: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE175-jp.asm:13 END_STACK_VARS
    case 0xEFCA93: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE175-jp.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xEFCA93.
    case 0xEFCA95: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFE175-jp.asm:13 END_STACK_VARS
    case 0xEFCA96: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE175-jp.asm:14 LOADPTR BUFFER, @VIRTUAL06
    case 0xEFCA97: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE175-jp.asm:14 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xEFCA97.
    case 0xEFCA99: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE175-jp.asm:14 LOADPTR BUFFER, @VIRTUAL06
    case 0xEFCA9A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE175-jp.asm:14 LOADPTR BUFFER, @VIRTUAL06
    case 0xEFCA9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE175-jp.asm:14 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xEFCA9C.
    case 0xEFCA9E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE175-jp.asm:14 LOADPTR BUFFER, @VIRTUAL06
    case 0xEFCA9F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:15 LDA #0
    case 0xEFCAA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:15 LDA #0
    // Overlapping static entry reached from 0xEFCAA1.
    case 0xEFCAA3: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:16 STA [@VIRTUAL06]
    case 0xEFCAA4: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:17 LDA DEBUG_START_POSITION_X
    case 0xEFCAA6: cpu.execute_instruction<0xAD>(0x00B712, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:18 STA @VIRTUAL04
    case 0xEFCAA9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:19 LDA DEBUG_START_POSITION_Y
    case 0xEFCAAB: cpu.execute_instruction<0xAD>(0x00B714, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:20 STA @VIRTUAL02
    case 0xEFCAAE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:21 JSL UNKNOWN_C08726
    case 0xEFCAB0: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:22 JSL UNKNOWN_C0927C
    case 0xEFCAB4: cpu.execute_instruction<0x22>(0xC0925E, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:23 JSL UNKNOWN_C01A86
    case 0xEFCAB8: cpu.execute_instruction<0x22>(0xC01A9C, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:24 LDX #0
    case 0xEFCABC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:24 LDX #0
    // Overlapping static entry reached from 0xEFCABC.
    case 0xEFCABE: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:25 LDA #$8000
    case 0xEFCABF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:25 LDA #$8000
    // Overlapping static entry reached from 0xEFCABF.
    case 0xEFCAC1: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:26 JSL ALLOC_SPRITE_MEM
    case 0xEFCAC2: cpu.execute_instruction<0x22>(0xC01C27, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:27 JSL INITIALIZE_MISC_OBJECT_DATA
    case 0xEFCAC6: cpu.execute_instruction<0x22>(0xC01A7F, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:28 LDA DEBUG_VIEW_CHARACTER_SPRITE
    case 0xEFCACA: cpu.execute_instruction<0xAD>(0x00B716, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:29 STA @LOCAL07
    case 0xEFCACD: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:30 LDA #23
    case 0xEFCACF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:30 LDA #23
    // Overlapping static entry reached from 0xEFCACF.
    case 0xEFCAD1: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:31 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xEFCAD2: cpu.execute_instruction<0x8D>(0x000A42, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:32 LDA #24
    case 0xEFCAD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:32 LDA #24
    // Overlapping static entry reached from 0xEFCAD5.
    case 0xEFCAD7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:33 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xEFCAD8: cpu.execute_instruction<0x8D>(0x000A44, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:34 LDA #3
    case 0xEFCADB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:34 LDA #3
    // Overlapping static entry reached from 0xEFCADB.
    case 0xEFCADD: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:35 STA NEW_ENTITY_PRIORITY
    case 0xEFCADE: cpu.execute_instruction<0x8D>(0x000A40, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:36 LDA @VIRTUAL04
    case 0xEFCAE1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:37 STA GAME_STATE+game_state::leader_x_coord
    case 0xEFCAE3: cpu.execute_instruction<0x8D>(0x009B28, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:37 STA GAME_STATE+game_state::leader_x_coord
    // Overlapping static entry reached from 0xEFCAC1.
    case 0xEFCAE5: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:38 LDA @VIRTUAL02
    case 0xEFCAE6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:39 STA GAME_STATE+game_state::leader_y_coord
    case 0xEFCAE8: cpu.execute_instruction<0x8D>(0x009B2C, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:40 LDY #0
    case 0xEFCAEB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:40 LDY #0
    // Overlapping static entry reached from 0xEFCAEB.
    case 0xEFCAED: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:41 TYX
    case 0xEFCAEE: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:42 LDA #EVENT_SCRIPT::EVENT_001
    case 0xEFCAEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:42 LDA #EVENT_SCRIPT::EVENT_001
    // Overlapping static entry reached from 0xEFCAEF.
    case 0xEFCAF1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:43 JSL INIT_ENTITY
    case 0xEFCAF2: cpu.execute_instruction<0x22>(0xC09300, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:44 JSL UNKNOWN_C02D29
    case 0xEFCAF6: cpu.execute_instruction<0x22>(0xC02EFE, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:45 LDA #0
    case 0xEFCAFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:45 LDA #0
    // Overlapping static entry reached from 0xEFCAFA.
    case 0xEFCAFC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:46 STA @LOCAL06
    case 0xEFCAFD: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:47 BRA @UNKNOWN1
    case 0xEFCAFF: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:49 CLC
    case 0xEFCB01: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:50 ADC #.LOWORD(GAME_STATE)
    case 0xEFCB02: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:50 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xEFCB02.
    case 0xEFCB04: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:51 TAX
    case 0xEFCB05: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xEFCB06: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:53 STZ a:game_state::party_members,X
    case 0xEFCB08: cpu.execute_instruction<0x9E>(0x000077, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0xEFCB0B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:55 LDA @LOCAL06
    case 0xEFCB0D: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:56 INC
    case 0xEFCB0F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:57 STA @LOCAL06
    case 0xEFCB10: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:59 CMP #6
    case 0xEFCB12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:59 CMP #6
    // Overlapping static entry reached from 0xEFCB12.
    case 0xEFCB14: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:60 BCC @UNKNOWN0
    case 0xEFCB15: cpu.execute_instruction<0x90>(0x0000EA, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:61 LDA #CHARACTER_PAULA
    case 0xEFCB17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:61 LDA #CHARACTER_PAULA
    // Overlapping static entry reached from 0xEFCB17.
    case 0xEFCB19: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:62 JSL ADD_CHAR_TO_PARTY
    case 0xEFCB1A: cpu.execute_instruction<0x22>(0xC227C4, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:63 LDA DEBUG_MODE_NUMBER
    case 0xEFCB1E: cpu.execute_instruction<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:64 CMP #5
    case 0xEFCB21: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:64 CMP #5
    // Overlapping static entry reached from 0xEFCB21.
    case 0xEFCB23: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:65 BEQ @UNKNOWN2
    case 0xEFCB24: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:66 LDA DEBUG_MODE_NUMBER
    case 0xEFCB26: cpu.execute_instruction<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:66 LDA DEBUG_MODE_NUMBER
    // Overlapping static entry reached from 0xEFCB89.
    case 0xEFCB28: cpu.execute_instruction<0xB7>(0x0000C9, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:67 CMP #3
    case 0xEFCB29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:67 CMP #3
    // Overlapping static entry reached from 0xEFCB28.
    case 0xEFCB2A: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:67 CMP #3
    // Overlapping static entry reached from 0xEFCB29.
    case 0xEFCB2B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:68 BEQ @UNKNOWN2
    case 0xEFCB2C: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:69 LDA #CHARACTER_JEFF
    case 0xEFCB2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:69 LDA #CHARACTER_JEFF
    // Overlapping static entry reached from 0xEFCB2E.
    case 0xEFCB30: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:70 JSL ADD_CHAR_TO_PARTY
    case 0xEFCB31: cpu.execute_instruction<0x22>(0xC227C4, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:71 LDA #CHARACTER_POO
    case 0xEFCB35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:71 LDA #CHARACTER_POO
    // Overlapping static entry reached from 0xEFCB35.
    case 0xEFCB37: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:72 JSL ADD_CHAR_TO_PARTY
    case 0xEFCB38: cpu.execute_instruction<0x22>(0xC227C4, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:74 LDA #<-1
    case 0xEFCB3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:74 LDA #<-1
    // Overlapping static entry reached from 0xEFCB3C.
    case 0xEFCB3E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:75 JSL UNKNOWN_C46631
    case 0xEFCB3F: cpu.execute_instruction<0x22>(0xC443A3, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:76 LDX #128
    case 0xEFCB43: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x000080, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:76 LDX #128
    // Overlapping static entry reached from 0xEFCB43.
    case 0xEFCB45: cpu.execute_instruction<0x00>(0x00008E, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:77 STX ENTITY_SCREEN_X_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xEFCB46: cpu.execute_instruction<0x8E>(0x000B3C, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:78 LDX #112
    case 0xEFCB49: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000070, 2); else cpu.execute_instruction<0xA2>(0x000070, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:78 LDX #112
    // Overlapping static entry reached from 0xEFCB49.
    case 0xEFCB4B: cpu.execute_instruction<0x00>(0x00008E, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:79 STX ENTITY_SCREEN_Y_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xEFCB4C: cpu.execute_instruction<0x8E>(0x000B78, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:80 LDA DEBUG_MODE_NUMBER
    case 0xEFCB4F: cpu.execute_instruction<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:81 CMP #2
    case 0xEFCB52: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:81 CMP #2
    // Overlapping static entry reached from 0xEFCB52.
    case 0xEFCB54: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:82 BNE @UNKNOWN3
    case 0xEFCB55: cpu.execute_instruction<0xD0>(0x000036, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:83 LDA #32
    case 0xEFCB57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:83 LDA #32
    // Overlapping static entry reached from 0xEFCB57.
    case 0xEFCB59: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:84 STA @LOCAL00
    case 0xEFCB5A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:85 STA @LOCAL01
    case 0xEFCB5C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:86 LDY #.LOWORD(-1)
    case 0xEFCB5E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:86 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFCB5E.
    case 0xEFCB60: cpu.execute_instruction<0xFF>(0x0004A2, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:87 LDX #EVENT_SCRIPT::EVENT_004
    case 0xEFCB61: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:87 LDX #EVENT_SCRIPT::EVENT_004
    // Overlapping static entry reached from 0xEFCB61.
    case 0xEFCB63: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:88 LDA @LOCAL07
    case 0xEFCB64: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:89 JSL CREATE_ENTITY
    case 0xEFCB66: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:90 STA @LOCAL05
    case 0xEFCB6A: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:91 ASL
    case 0xEFCB6C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:92 STA @LOCAL06
    case 0xEFCB6D: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:93 CLC
    case 0xEFCB6F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:94 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xEFCB70: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:94 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xEFCB70.
    case 0xEFCB72: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:95 TAX
    case 0xEFCB73: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:96 LDA __BSS_START__,X
    case 0xEFCB74: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:97 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xEFCB77: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:97 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xEFCB77.
    case 0xEFCB79: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:98 STA __BSS_START__,X
    case 0xEFCB7A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:98 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFCB79.
    case 0xEFCB7B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:98 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFCB79.
    case 0xEFCB7C: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:99 LDA @LOCAL06
    case 0xEFCB7D: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:100 CLC
    case 0xEFCB7F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:101 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xEFCB80: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x001160, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:101 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xEFCB80.
    case 0xEFCB82: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:102 TAX
    case 0xEFCB83: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:103 LDA __BSS_START__,X
    case 0xEFCB84: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:104 ORA #$8000
    case 0xEFCB87: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:104 ORA #$8000
    // Overlapping static entry reached from 0xEFCB87.
    case 0xEFCB89: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:105 STA __BSS_START__,X
    case 0xEFCB8A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:107 SEP #PROC_FLAGS::ACCUM8
    case 0xEFCB8D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/unknown/EF/EFE175-jp.asm:108 STZ_BADOPT @LOCAL00
    case 0xEFCB8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/EF/EFE175-jp.asm:108 STZ_BADOPT @LOCAL00
    case 0xEFCB91: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/unknown/EF/EFE175-jp.asm:108 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xEFCB8F.
    case 0xEFCB92: cpu.execute_instruction<0x0E>(0x0000A2, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:109 LDX #BPP4PALETTE_SIZE * 16
    case 0xEFCB93: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:109 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xEFCB93.
    case 0xEFCB95: cpu.execute_instruction<0x02>(0x0000C2, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:110 REP #PROC_FLAGS::ACCUM8
    case 0xEFCB96: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:111 LDA #.LOWORD(PALETTES)
    case 0xEFCB98: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:111 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xEFCB98.
    case 0xEFCB9A: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:112 JSL MEMSET16
    case 0xEFCB9B: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:113 JSL OVERWORLD_INITIALIZE
    case 0xEFCB9F: cpu.execute_instruction<0x22>(0xC0004B, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:114 LDX @VIRTUAL02
    case 0xEFCBA3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:115 LDA @VIRTUAL04
    case 0xEFCBA5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:116 JSL LOAD_MAP_AT_POSITION
    case 0xEFCBA7: cpu.execute_instruction<0x22>(0xC0140C, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:117 LDY #4
    case 0xEFCBAB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:117 LDY #4
    // Overlapping static entry reached from 0xEFCBAB.
    case 0xEFCBAD: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:118 LDX @VIRTUAL02
    case 0xEFCBAE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:119 LDA @VIRTUAL04
    case 0xEFCBB0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:120 JSL UNKNOWN_C03FA9
    case 0xEFCBB2: cpu.execute_instruction<0x22>(0xC04230, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:121 JSL UNKNOWN_EFD95E
    case 0xEFCBB6: cpu.execute_instruction<0x22>(0xEFC269, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:122 LDA DEBUG_MODE_NUMBER
    case 0xEFCBBA: cpu.execute_instruction<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:123 CMP #3
    case 0xEFCBBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:123 CMP #3
    // Overlapping static entry reached from 0xEFCBBD.
    case 0xEFCBBF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:124 BNE @UNKNOWN4
    case 0xEFCBC0: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:125 SEP #PROC_FLAGS::ACCUM8
    case 0xEFCBC2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:126 LDA #$13
    case 0xEFCBC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x008D13, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:127 STA TM_MIRROR
    case 0xEFCBC6: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:127 STA TM_MIRROR
    // Overlapping static entry reached from 0xEFCBC4.
    case 0xEFCBC7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:127 STA TM_MIRROR
    // Overlapping static entry reached from 0xEFCBC7.
    case 0xEFCBC8: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:128 LDA #$04
    case 0xEFCBC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x008D04, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:129 STA TD_MIRROR
    case 0xEFCBCB: cpu.execute_instruction<0x8D>(0x00001B, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:129 STA TD_MIRROR
    // Overlapping static entry reached from 0xEFCBC9.
    case 0xEFCBCC: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:129 STA TD_MIRROR
    // Overlapping static entry reached from 0xEFCBCC.
    case 0xEFCBCD: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:130 LDA #$02
    case 0xEFCBCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x008F02, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:131 STA f:CGWSEL
    case 0xEFCBD0: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:131 STA f:CGWSEL
    // Overlapping static entry reached from 0xEFCBCE.
    case 0xEFCBD1: cpu.execute_instruction<0x30>(0x000021, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:131 STA f:CGWSEL
    // Overlapping static entry reached from 0xEFCBD1.
    case 0xEFCBD3: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:132 LDA #$47
    case 0xEFCBD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000047, 2); else cpu.execute_instruction<0xA9>(0x008F47, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:133 STA f:CGADSUB
    case 0xEFCBD6: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:133 STA f:CGADSUB
    // Overlapping static entry reached from 0xEFCBD4.
    case 0xEFCBD7: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:133 STA f:CGADSUB
    // Overlapping static entry reached from 0xEFCBD7.
    case 0xEFCBD9: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:134 REP #PROC_FLAGS::ACCUM8
    case 0xEFCBDA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:135 LDA #3
    case 0xEFCBDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:135 LDA #3
    // Overlapping static entry reached from 0xEFCBDC.
    case 0xEFCBDE: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:136 STA DEBUG_MODE_NUMBER
    case 0xEFCBDF: cpu.execute_instruction<0x8D>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:138 LDA DEBUG_MODE_NUMBER
    case 0xEFCBE2: cpu.execute_instruction<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:139 CMP #5
    case 0xEFCBE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:139 CMP #5
    // Overlapping static entry reached from 0xEFCBE5.
    case 0xEFCBE7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:140 BNE @UNKNOWN5
    case 0xEFCBE8: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:141 JSL UNKNOWN_EFEAC8
    case 0xEFCBEA: cpu.execute_instruction<0x22>(0xEFD3F3, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:143 LDA #.LOWORD(PROCESS_OVERWORLD_TASKS)
    case 0xEFCBEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000016, 2); else cpu.execute_instruction<0xA9>(0x00DC16, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:143 LDA #.LOWORD(PROCESS_OVERWORLD_TASKS)
    // Overlapping static entry reached from 0xEFCBEE.
    case 0xEFCBF0: cpu.execute_instruction<0xDC>(0x001C22, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:144 JSL SET_IRQ_CALLBACK
    case 0xEFCBF1: cpu.execute_instruction<0x22>(0xC0851C, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:144 JSL SET_IRQ_CALLBACK
    // Overlapping static entry reached from 0xEFCBD1.
    case 0xEFCBF4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x003A22, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:145 JSL UNKNOWN_C08744
    case 0xEFCBF5: cpu.execute_instruction<0x22>(0xC0873A, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:145 JSL UNKNOWN_C08744
    // Overlapping static entry reached from 0xEFCBF4.
    case 0xEFCBF6: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:145 JSL UNKNOWN_C08744
    // Overlapping static entry reached from 0xEFCBF4.
    case 0xEFCBF7: cpu.execute_instruction<0x87>(0x0000C0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:146 LDX #1
    case 0xEFCBF9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:146 LDX #1
    // Overlapping static entry reached from 0xEFCBF9.
    case 0xEFCBFB: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:147 TXA
    case 0xEFCBFC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:148 JSL FADE_IN
    case 0xEFCBFD: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:150 JSL OAM_CLEAR
    case 0xEFCC01: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:151 LDA DEBUG_MODE_NUMBER
    case 0xEFCC05: cpu.execute_instruction<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:152 CMP #2
    case 0xEFCC08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:152 CMP #2
    // Overlapping static entry reached from 0xEFCC08.
    case 0xEFCC0A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:153 BEQ @UNKNOWN7
    case 0xEFCC0B: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:154 CMP #5
    case 0xEFCC0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:154 CMP #5
    // Overlapping static entry reached from 0xEFCC0D.
    case 0xEFCC0F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:155 BEQ @UNKNOWN8
    case 0xEFCC10: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:156 BRA @UNKNOWN9
    case 0xEFCC12: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:158 JSR DISPLAY_VIEW_CHARACTER_DEBUG_OVERLAY
    case 0xEFCC14: cpu.execute_instruction<0x20>(0x00C734, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:159 BRA @UNKNOWN9
    case 0xEFCC17: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:161 JSR DISPLAY_CHECK_POSITION_DEBUG_OVERLAY
    case 0xEFCC19: cpu.execute_instruction<0x20>(0x00C5D6, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:163 LDA PAD_PRESS
    case 0xEFCC1C: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:164 AND #PAD::A_BUTTON
    case 0xEFCC1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:164 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xEFCC1F.
    case 0xEFCC21: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/EF/EFE175-jp.asm:165 BEQL @UNKNOWN13
    case 0xEFCC22: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/EF/EFE175-jp.asm:165 BEQL @UNKNOWN13
    case 0xEFCC24: cpu.execute_instruction<0x4C>(0x00CCAE, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:166 STZ BATTLE_SWIRL_COUNTDOWN
    case 0xEFCC27: cpu.execute_instruction<0x9C>(0x0060E6, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:167 LDA PAD_STATE
    case 0xEFCC2A: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:168 AND #PAD::X_BUTTON
    case 0xEFCC2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:168 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xEFCC2D.
    case 0xEFCC2F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:169 BEQ @UNKNOWN11
    case 0xEFCC30: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:170 LDA #.LOWORD(-1)
    case 0xEFCC32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:170 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFCC32.
    case 0xEFCC34: cpu.execute_instruction<0xFF>(0xB7268D, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:171 STA DEBUG_ENEMIES_ENABLED_FLAG
    case 0xEFCC35: cpu.execute_instruction<0x8D>(0x00B726, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:173 LDA #.LOWORD(-1)
    case 0xEFCC38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:173 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFCC38.
    case 0xEFCC3A: cpu.execute_instruction<0xFF>(0x46F68D, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:174 STA LOADED_MAP_PALETTE
    case 0xEFCC3B: cpu.execute_instruction<0x8D>(0x0046F6, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:175 STA LOADED_MAP_TILE_COMBO
    case 0xEFCC3E: cpu.execute_instruction<0x8D>(0x0046F4, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:176 LDA SCREEN_X_PIXELS
    case 0xEFCC41: cpu.execute_instruction<0xAD>(0x004706, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:177 AND #$FFF8
    case 0xEFCC44: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x00FFF8, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:177 AND #$FFF8
    // Overlapping static entry reached from 0xEFCC44.
    case 0xEFCC46: cpu.execute_instruction<0xFF>(0x47068D, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:178 STA SCREEN_X_PIXELS
    case 0xEFCC47: cpu.execute_instruction<0x8D>(0x004706, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:179 LDA SCREEN_Y_PIXELS
    case 0xEFCC4A: cpu.execute_instruction<0xAD>(0x004708, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:180 AND #$FFF8
    case 0xEFCC4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x00FFF8, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:180 AND #$FFF8
    // Overlapping static entry reached from 0xEFCC4D.
    case 0xEFCC4F: cpu.execute_instruction<0xFF>(0x47088D, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:181 STA SCREEN_Y_PIXELS
    case 0xEFCC50: cpu.execute_instruction<0x8D>(0x004708, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:182 JSL UNKNOWN_C08726
    case 0xEFCC53: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:183 LDA #.LOWORD(GAME_STATE)+game_state::leader_x_coord
    case 0xEFCC57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x009B28, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:183 LDA #.LOWORD(GAME_STATE)+game_state::leader_x_coord
    // Overlapping static entry reached from 0xEFCC57.
    case 0xEFCC59: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:184 STA @VIRTUAL04
    case 0xEFCC5A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:185 LDA #.LOWORD(GAME_STATE)+game_state::leader_y_coord
    case 0xEFCC5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002C, 2); else cpu.execute_instruction<0xA9>(0x009B2C, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:185 LDA #.LOWORD(GAME_STATE)+game_state::leader_y_coord
    // Overlapping static entry reached from 0xEFCC5C.
    case 0xEFCC5E: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:186 STA @VIRTUAL02
    case 0xEFCC5F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:187 LDX @VIRTUAL02
    case 0xEFCC61: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:188 LDA __BSS_START__,X
    case 0xEFCC63: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:189 TAX
    case 0xEFCC66: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:190 STX @LOCAL04
    case 0xEFCC67: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:191 LDX @VIRTUAL04
    case 0xEFCC69: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:192 LDA __BSS_START__,X
    case 0xEFCC6B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:193 LDX @LOCAL04
    case 0xEFCC6E: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:194 JSL LOAD_MAP_AT_POSITION
    case 0xEFCC70: cpu.execute_instruction<0x22>(0xC0140C, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:195 LDY GAME_STATE+game_state::leader_direction
    case 0xEFCC74: cpu.execute_instruction<0xAC>(0x009B30, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:196 LDX @VIRTUAL02
    case 0xEFCC77: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:197 LDA __BSS_START__,X
    case 0xEFCC79: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:198 TAX
    case 0xEFCC7C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:199 STX @LOCAL04
    case 0xEFCC7D: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:200 LDX @VIRTUAL04
    case 0xEFCC7F: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:201 LDA __BSS_START__,X
    case 0xEFCC81: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:202 LDX @LOCAL04
    case 0xEFCC84: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:203 JSL UNKNOWN_C03FA9
    case 0xEFCC86: cpu.execute_instruction<0x22>(0xC04230, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:204 JSL UNKNOWN_EFD95E
    case 0xEFCC8A: cpu.execute_instruction<0x22>(0xEFC269, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:205 STZ DEBUG_ENEMIES_ENABLED_FLAG
    case 0xEFCC8E: cpu.execute_instruction<0x9C>(0x00B726, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:206 LDA DEBUG_MODE_NUMBER
    case 0xEFCC91: cpu.execute_instruction<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:207 CMP #5
    case 0xEFCC94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:207 CMP #5
    // Overlapping static entry reached from 0xEFCC94.
    case 0xEFCC96: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:208 BNE @UNKNOWN12
    case 0xEFCC97: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:209 JSL UNKNOWN_EFEAC8
    case 0xEFCC99: cpu.execute_instruction<0x22>(0xEFD3F3, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:211 JSL UNKNOWN_C08744
    case 0xEFCC9D: cpu.execute_instruction<0x22>(0xC0873A, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:212 LDY #0
    case 0xEFCCA1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:212 LDY #0
    // Overlapping static entry reached from 0xEFCCA1.
    case 0xEFCCA3: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:213 LDX #1
    case 0xEFCCA4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:213 LDX #1
    // Overlapping static entry reached from 0xEFCCA4.
    case 0xEFCCA6: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:214 LDA #4
    case 0xEFCCA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:214 LDA #4
    // Overlapping static entry reached from 0xEFCCA7.
    case 0xEFCCA9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:215 JSL FADE_IN_WITH_MOSAIC
    case 0xEFCCAA: cpu.execute_instruction<0x22>(0xC087C4, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:217 LDA DEBUG_MODE_NUMBER
    case 0xEFCCAE: cpu.execute_instruction<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:218 CMP #2
    case 0xEFCCB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:218 CMP #2
    // Overlapping static entry reached from 0xEFCCB1.
    case 0xEFCCB3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/EF/EFE175-jp.asm:219 BNEL @UNKNOWN26
    case 0xEFCCB4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/EF/EFE175-jp.asm:219 BNEL @UNKNOWN26
    case 0xEFCCB6: cpu.execute_instruction<0x4C>(0x00CDE5, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:220 LDY @LOCAL07
    case 0xEFCCB9: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:221 LDA PAD_HELD + 2
    case 0xEFCCBB: cpu.execute_instruction<0xAD>(0x00006B, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:222 STA @LOCAL03
    case 0xEFCCBE: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:223 AND #PAD::UP
    case 0xEFCCC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:223 AND #PAD::UP
    // Overlapping static entry reached from 0xEFCCC0.
    case 0xEFCCC2: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:224 BEQ @UNKNOWN16
    case 0xEFCCC3: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:225 LDA @LOCAL07
    case 0xEFCCC5: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:226 CMP #333
    case 0xEFCCC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00004D, 2); else cpu.execute_instruction<0xC9>(0x00014D, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:226 CMP #333
    // Overlapping static entry reached from 0xEFCCC7.
    case 0xEFCCC9: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:227 BEQ @UNKNOWN15
    case 0xEFCCCA: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:227 BEQ @UNKNOWN15
    // Overlapping static entry reached from 0xEFCCC9.
    case 0xEFCCCB: cpu.execute_instruction<0x04>(0x0000E6, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:228 INC @LOCAL07
    case 0xEFCCCC: cpu.execute_instruction<0xE6>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:228 INC @LOCAL07
    // Overlapping static entry reached from 0xEFCCCB.
    case 0xEFCCCD: cpu.execute_instruction<0x1C>(0x001880, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:229 BRA @UNKNOWN18
    case 0xEFCCCE: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:229 BRA @UNKNOWN18
    // Overlapping static entry reached from 0xEFCD23.
    case 0xEFCCCF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:231 STZ @LOCAL07
    case 0xEFCCD0: cpu.execute_instruction<0x64>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:232 BRA @UNKNOWN18
    case 0xEFCCD2: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:234 LDA @LOCAL03
    case 0xEFCCD4: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:235 AND #PAD::DOWN
    case 0xEFCCD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:235 AND #PAD::DOWN
    // Overlapping static entry reached from 0xEFCCD6.
    case 0xEFCCD8: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:236 BEQ @UNKNOWN18
    case 0xEFCCD9: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:236 BEQ @UNKNOWN18
    // Overlapping static entry reached from 0xEFCCD8.
    case 0xEFCCDA: cpu.execute_instruction<0x0D>(0x001CA5, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:237 LDA @LOCAL07
    case 0xEFCCDB: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:238 BEQ @UNKNOWN17
    case 0xEFCCDD: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:239 DEC @LOCAL07
    case 0xEFCCDF: cpu.execute_instruction<0xC6>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:240 BRA @UNKNOWN18
    case 0xEFCCE1: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:242 LDA #324
    case 0xEFCCE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000044, 2); else cpu.execute_instruction<0xA9>(0x000144, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:242 LDA #324
    // Overlapping static entry reached from 0xEFCCE3.
    case 0xEFCCE5: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:243 STA @LOCAL07
    case 0xEFCCE6: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:243 STA @LOCAL07
    // Overlapping static entry reached from 0xEFCCE5.
    case 0xEFCCE7: cpu.execute_instruction<0x1C>(0x006FAD, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:245 LDA PAD_PRESS + 2
    case 0xEFCCE8: cpu.execute_instruction<0xAD>(0x00006F, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:245 LDA PAD_PRESS + 2
    // Overlapping static entry reached from 0xEFCCE7.
    case 0xEFCCEA: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:246 AND #PAD::X_BUTTON
    case 0xEFCCEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:246 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xEFCCEB.
    case 0xEFCCED: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:247 BEQ @UNKNOWN19
    case 0xEFCCEE: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:248 LDA @LOCAL05
    case 0xEFCCF0: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:249 ASL
    case 0xEFCCF2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:250 STA @LOCAL06
    case 0xEFCCF3: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:251 CLC
    case 0xEFCCF5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:252 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xEFCCF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:252 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xEFCCF6.
    case 0xEFCCF8: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:253 TAX
    case 0xEFCCF9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:254 LDA __BSS_START__,X
    case 0xEFCCFA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:255 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xEFCCFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:255 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xEFCCFD.
    case 0xEFCCFF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:256 STA __BSS_START__,X
    case 0xEFCD00: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:256 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFCCFF.
    case 0xEFCD01: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:256 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFCCFF.
    case 0xEFCD02: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:257 LDA @LOCAL06
    case 0xEFCD03: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:258 CLC
    case 0xEFCD05: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:259 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xEFCD06: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x001160, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:259 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xEFCD06.
    case 0xEFCD08: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:260 TAX
    case 0xEFCD09: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:261 LDA __BSS_START__,X
    case 0xEFCD0A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:262 ORA #$8000
    case 0xEFCD0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:262 ORA #$8000
    // Overlapping static entry reached from 0xEFCD0D.
    case 0xEFCD0F: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:263 STA __BSS_START__,X
    case 0xEFCD10: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:265 LDA PAD_PRESS + 2
    case 0xEFCD13: cpu.execute_instruction<0xAD>(0x00006F, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:266 AND #PAD::Y_BUTTON
    case 0xEFCD16: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x004000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:266 AND #PAD::Y_BUTTON
    // Overlapping static entry reached from 0xEFCD16.
    case 0xEFCD18: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:267 BEQ @UNKNOWN20
    case 0xEFCD19: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:268 LDA @LOCAL05
    case 0xEFCD1B: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:269 ASL
    case 0xEFCD1D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:270 STA @LOCAL06
    case 0xEFCD1E: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:271 CLC
    case 0xEFCD20: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:272 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xEFCD21: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:272 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xEFCD21.
    case 0xEFCD23: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:273 TAX
    case 0xEFCD24: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:274 LDA __BSS_START__,X
    case 0xEFCD25: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:275 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xEFCD28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x003FFF, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:275 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xEFCD28.
    case 0xEFCD2A: cpu.execute_instruction<0x3F>(0x00009D, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:276 STA __BSS_START__,X
    case 0xEFCD2B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:277 LDA @LOCAL06
    case 0xEFCD2E: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:278 CLC
    case 0xEFCD30: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:279 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xEFCD31: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x001160, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:279 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xEFCD31.
    case 0xEFCD33: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:280 TAX
    case 0xEFCD34: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:281 LDA __BSS_START__,X
    case 0xEFCD35: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:282 AND #$7FFF
    case 0xEFCD38: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:282 AND #$7FFF
    // Overlapping static entry reached from 0xEFCD38.
    case 0xEFCD3A: cpu.execute_instruction<0x7F>(0x00009D, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:283 STA __BSS_START__,X
    case 0xEFCD3B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:285 CPY @LOCAL07
    case 0xEFCD3E: cpu.execute_instruction<0xC4>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:286 BEQ @UNKNOWN21
    case 0xEFCD40: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:287 LDA @LOCAL05
    case 0xEFCD42: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:288 JSL UNKNOWN_C02140
    case 0xEFCD44: cpu.execute_instruction<0x22>(0xC0214E, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:289 LDA #32
    case 0xEFCD48: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:289 LDA #32
    // Overlapping static entry reached from 0xEFCD48.
    case 0xEFCD4A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:290 STA @LOCAL00
    case 0xEFCD4B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:291 STA @LOCAL01
    case 0xEFCD4D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:292 LDY @LOCAL05
    case 0xEFCD4F: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:293 LDX #EVENT_SCRIPT::EVENT_004
    case 0xEFCD51: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:293 LDX #EVENT_SCRIPT::EVENT_004
    // Overlapping static entry reached from 0xEFCD51.
    case 0xEFCD53: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:294 LDA @LOCAL07
    case 0xEFCD54: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:295 JSL CREATE_ENTITY
    case 0xEFCD56: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:296 ASL
    case 0xEFCD5A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:297 TAX
    case 0xEFCD5B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:298 STZ ENTITY_NPC_IDS,X
    case 0xEFCD5C: cpu.execute_instruction<0x9E>(0x003098, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:300 LDA PAD_PRESS + 2
    case 0xEFCD5F: cpu.execute_instruction<0xAD>(0x00006F, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:301 AND #PAD::A_BUTTON
    case 0xEFCD62: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:301 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xEFCD62.
    case 0xEFCD64: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:302 BEQ @UNKNOWN22
    case 0xEFCD65: cpu.execute_instruction<0xF0>(0x000030, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:303 LDA @LOCAL05
    case 0xEFCD67: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:304 ASL
    case 0xEFCD69: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:305 TAX
    case 0xEFCD6A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:306 LDA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xEFCD6B: cpu.execute_instruction<0xBD>(0x0010AC, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:307 AND #OBJECT_TICK_DISABLED
    case 0xEFCD6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:307 AND #OBJECT_TICK_DISABLED
    // Overlapping static entry reached from 0xEFCD6E.
    case 0xEFCD70: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:308 BNE @UNKNOWN22
    case 0xEFCD71: cpu.execute_instruction<0xD0>(0x000024, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:309 LDA BG1_X_POS
    case 0xEFCD73: cpu.execute_instruction<0xAD>(0x000031, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:310 CLC
    case 0xEFCD76: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:311 ADC #32
    case 0xEFCD77: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:311 ADC #32
    // Overlapping static entry reached from 0xEFCD77.
    case 0xEFCD79: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:312 TAX
    case 0xEFCD7A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:313 LDA BG1_Y_POS
    case 0xEFCD7B: cpu.execute_instruction<0xAD>(0x000033, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:314 CLC
    case 0xEFCD7E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:315 ADC #32
    case 0xEFCD7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:315 ADC #32
    // Overlapping static entry reached from 0xEFCD7F.
    case 0xEFCD81: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:316 STX @LOCAL00
    case 0xEFCD82: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:317 STA @LOCAL01
    case 0xEFCD84: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:318 LDY #.LOWORD(-1)
    case 0xEFCD86: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:318 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFCD86.
    case 0xEFCD88: cpu.execute_instruction<0xFF>(0x0006A2, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:319 LDX #EVENT_SCRIPT::EVENT_006
    case 0xEFCD89: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:319 LDX #EVENT_SCRIPT::EVENT_006
    // Overlapping static entry reached from 0xEFCD89.
    case 0xEFCD8B: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:320 LDA @LOCAL07
    case 0xEFCD8C: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:321 JSL CREATE_ENTITY
    case 0xEFCD8E: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:322 ASL
    case 0xEFCD92: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:323 TAX
    case 0xEFCD93: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:324 STZ ENTITY_NPC_IDS,X
    case 0xEFCD94: cpu.execute_instruction<0x9E>(0x003098, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:326 LDA PAD_PRESS + 2
    case 0xEFCD97: cpu.execute_instruction<0xAD>(0x00006F, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:327 AND #PAD::B_BUTTON
    case 0xEFCD9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:327 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xEFCD9A.
    case 0xEFCD9C: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:328 BEQ @UNKNOWN26
    case 0xEFCD9D: cpu.execute_instruction<0xF0>(0x000046, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:329 LDA BG1_X_POS
    case 0xEFCD9F: cpu.execute_instruction<0xAD>(0x000031, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:330 STA @LOCAL02
    case 0xEFCDA2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:331 LDY BG1_Y_POS
    case 0xEFCDA4: cpu.execute_instruction<0xAC>(0x000033, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:332 LDA #0
    case 0xEFCDA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:332 LDA #0
    // Overlapping static entry reached from 0xEFCDA7.
    case 0xEFCDA9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:333 STA @VIRTUAL02
    case 0xEFCDAA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:334 BRA @UNKNOWN25
    case 0xEFCDAC: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:336 LDA @VIRTUAL02
    case 0xEFCDAE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:337 ASL
    case 0xEFCDB0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:338 TAX
    case 0xEFCDB1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:339 LDA ENTITY_SCRIPT_TABLE,X
    case 0xEFCDB2: cpu.execute_instruction<0xBD>(0x000A58, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:340 CMP #.LOWORD(-1)
    case 0xEFCDB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:340 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFCDB5.
    case 0xEFCDB7: cpu.execute_instruction<0xFF>(0x9E03F0, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:341 BEQ @UNKNOWN24
    case 0xEFCDB8: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:341 BEQ @UNKNOWN24
    // Overlapping static entry reached from 0xEFCDEE.
    case 0xEFCDB9: cpu.execute_instruction<0x03>(0x00009E, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:342 STZ ENTITY_PATHFINDING_STATES,X
    case 0xEFCDBA: cpu.execute_instruction<0x9E>(0x00305C, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:342 STZ ENTITY_PATHFINDING_STATES,X
    // Overlapping static entry reached from 0xEFCDB7.
    case 0xEFCDBB: cpu.execute_instruction<0x5C>(0x02E630, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:344 INC @VIRTUAL02
    case 0xEFCDBD: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:346 LDA @VIRTUAL02
    case 0xEFCDBF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:347 CMP #MAX_ENTITIES
    case 0xEFCDC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:347 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xEFCDC1.
    case 0xEFCDC3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:348 BNE @UNKNOWN23
    case 0xEFCDC4: cpu.execute_instruction<0xD0>(0x0000E8, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:349 LDA @LOCAL02
    case 0xEFCDC6: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:350 STA @LOCAL00
    case 0xEFCDC8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:351 STY @LOCAL01
    case 0xEFCDCA: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:352 LDY #.LOWORD(-1)
    case 0xEFCDCC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:352 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFCDCC.
    case 0xEFCDCE: cpu.execute_instruction<0xFF>(0x01F3A2, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:353 LDX #EVENT_SCRIPT::EVENT_499
    case 0xEFCDCF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000F3, 2); else cpu.execute_instruction<0xA2>(0x0001F3, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:353 LDX #EVENT_SCRIPT::EVENT_499
    // Overlapping static entry reached from 0xEFCDCF.
    case 0xEFCDD1: cpu.execute_instruction<0x01>(0x0000A9, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:354 LDA #OVERWORLD_SPRITE::GIRL_IN_STRIPED_APRON
    case 0xEFCDD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x00008A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:354 LDA #OVERWORLD_SPRITE::GIRL_IN_STRIPED_APRON
    // Overlapping static entry reached from 0xEFCDD1.
    case 0xEFCDD3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:354 LDA #OVERWORLD_SPRITE::GIRL_IN_STRIPED_APRON
    // Overlapping static entry reached from 0xEFCDD2.
    case 0xEFCDD4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:355 JSL CREATE_ENTITY
    case 0xEFCDD5: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:356 ASL
    case 0xEFCDD9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:357 TAX
    case 0xEFCDDA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:358 LDA #.LOWORD(-1)
    case 0xEFCDDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:358 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFCDDB.
    case 0xEFCDDD: cpu.execute_instruction<0xFF>(0x305C9D, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:359 STA ENTITY_PATHFINDING_STATES,X
    case 0xEFCDDE: cpu.execute_instruction<0x9D>(0x00305C, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:360 JSL UNKNOWN_C0BD96
    case 0xEFCDE1: cpu.execute_instruction<0x22>(0xC0BD78, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:362 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xEFCDE5: cpu.execute_instruction<0x22>(0xC09445, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:363 LDA PAD_STATE
    case 0xEFCDE9: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:364 AND #PAD::START_BUTTON | PAD::SELECT_BUTTON
    case 0xEFCDEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x003000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:364 AND #PAD::START_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xEFCDEC.
    case 0xEFCDEE: cpu.execute_instruction<0x30>(0x0000C9, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:365 CMP #PAD::START_BUTTON | PAD::SELECT_BUTTON
    case 0xEFCDEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x003000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:365 CMP #PAD::START_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xEFCDEE.
    case 0xEFCDF0: cpu.execute_instruction<0x00>(0x000030, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:365 CMP #PAD::START_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xEFCDEF.
    case 0xEFCDF1: cpu.execute_instruction<0x30>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:366 BNE @UNKNOWN27
    case 0xEFCDF2: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:366 BNE @UNKNOWN27
    // Overlapping static entry reached from 0xEFCDF1.
    case 0xEFCDF3: cpu.execute_instruction<0x13>(0x0000AD, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:367 LDA ENTITY_ABS_X_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xEFCDF4: cpu.execute_instruction<0xAD>(0x000BB4, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:367 LDA ENTITY_ABS_X_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    // Overlapping static entry reached from 0xEFCDF3.
    case 0xEFCDF5: cpu.execute_instruction<0xB4>(0x00000B, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:368 STA DEBUG_START_POSITION_X
    case 0xEFCDF7: cpu.execute_instruction<0x8D>(0x00B712, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:369 LDA ENTITY_ABS_Y_TABLE + (PARTY_LEADER_ENTITY_INDEX * 2)
    case 0xEFCDFA: cpu.execute_instruction<0xAD>(0x000BF0, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:370 STA DEBUG_START_POSITION_Y
    case 0xEFCDFD: cpu.execute_instruction<0x8D>(0x00B714, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:371 LDA @LOCAL07
    case 0xEFCE00: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:372 STA DEBUG_VIEW_CHARACTER_SPRITE
    case 0xEFCE02: cpu.execute_instruction<0x8D>(0x00B716, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:373 BRA @UNKNOWN33
    case 0xEFCE05: cpu.execute_instruction<0x80>(0x000070, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:375 LDA PAD_PRESS
    case 0xEFCE07: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:376 AND #PAD::Y_BUTTON
    case 0xEFCE0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x004000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:376 AND #PAD::Y_BUTTON
    // Overlapping static entry reached from 0xEFCE0A.
    case 0xEFCE0C: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:377 BEQ @UNKNOWN28
    case 0xEFCE0D: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:378 JSL DEBUG_Y_BUTTON_MENU
    case 0xEFCE0F: cpu.execute_instruction<0x22>(0xC1357F, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:380 LDA DEBUG_MODE_NUMBER
    case 0xEFCE13: cpu.execute_instruction<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:381 CMP #3
    case 0xEFCE16: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:381 CMP #3
    // Overlapping static entry reached from 0xEFCE16.
    case 0xEFCE18: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:382 BNE @UNKNOWN30
    case 0xEFCE19: cpu.execute_instruction<0xD0>(0x00002C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:383 LDA BG1_X_POS
    case 0xEFCE1B: cpu.execute_instruction<0xAD>(0x000031, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:384 STA BG3_X_POS
    case 0xEFCE1E: cpu.execute_instruction<0x8D>(0x000039, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:385 LDA BG1_Y_POS
    case 0xEFCE21: cpu.execute_instruction<0xAD>(0x000033, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:386 STA BG3_Y_POS
    case 0xEFCE24: cpu.execute_instruction<0x8D>(0x00003B, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:387 LDA PAD_PRESS
    case 0xEFCE27: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:388 AND #PAD::SELECT_BUTTON
    case 0xEFCE2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x002000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:388 AND #PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xEFCE2A.
    case 0xEFCE2C: cpu.execute_instruction<0x20>(0x0018F0, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:389 BEQ @UNKNOWN30
    case 0xEFCE2D: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:390 LDX VIEW_ATTRIBUTE_MODE
    case 0xEFCE2F: cpu.execute_instruction<0xAE>(0x00B710, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:391 INX
    case 0xEFCE32: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:392 STX VIEW_ATTRIBUTE_MODE
    case 0xEFCE33: cpu.execute_instruction<0x8E>(0x00B710, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:393 CPX #4
    case 0xEFCE36: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:393 CPX #4
    // Overlapping static entry reached from 0xEFCE36.
    case 0xEFCE38: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:394 BNE @UNKNOWN29
    case 0xEFCE39: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:395 STZ VIEW_ATTRIBUTE_MODE
    case 0xEFCE3B: cpu.execute_instruction<0x9C>(0x00B710, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:397 LDX GAME_STATE+game_state::leader_y_coord
    case 0xEFCE3E: cpu.execute_instruction<0xAE>(0x009B2C, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:398 LDA GAME_STATE+game_state::leader_x_coord
    case 0xEFCE41: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:399 JSR UNKNOWN_EFE133
    case 0xEFCE44: cpu.execute_instruction<0x20>(0x00CA4D, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:399 JSR UNKNOWN_EFE133
    // Overlapping static entry reached from 0xEFCE54.
    case 0xEFCE46: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:401 LDA DEBUG_MODE_NUMBER
    case 0xEFCE47: cpu.execute_instruction<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:402 CMP #1
    case 0xEFCE4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:402 CMP #1
    // Overlapping static entry reached from 0xEFCE4A.
    case 0xEFCE4C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:403 BNE @UNKNOWN31
    case 0xEFCE4D: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:404 LDA PAD_PRESS
    case 0xEFCE4F: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:405 AND #PAD::B_BUTTON
    case 0xEFCE52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:405 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xEFCE52.
    case 0xEFCE54: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:406 BEQ @UNKNOWN31
    case 0xEFCE55: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:407 JSL OPEN_MENU_BUTTON
    case 0xEFCE57: cpu.execute_instruction<0x22>(0xC13A85, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:409 LDA CURRENT_QUEUED_INTERACTION
    case 0xEFCE5B: cpu.execute_instruction<0xAD>(0x006188, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:410 SEC
    case 0xEFCE5E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/EF/EFE175-jp.asm:411 SBC NEXT_QUEUED_INTERACTION
    case 0xEFCE5F: cpu.execute_instruction<0xED>(0x00618A, 3); return true;
    // src/unknown/EF/EFE175-jp.asm:412 BEQ @UNKNOWN32
    case 0xEFCE62: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:413 JSL PROCESS_QUEUED_INTERACTIONS
    case 0xEFCE64: cpu.execute_instruction<0x22>(0xC0781C, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:415 JSL UPDATE_SCREEN
    case 0xEFCE68: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:416 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xEFCE6C: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:417 JSL INIT_BATTLE_OVERWORLD
    case 0xEFCE70: cpu.execute_instruction<0x22>(0xC0B717, 4); return true;
    // src/unknown/EF/EFE175-jp.asm:417 JSL INIT_BATTLE_OVERWORLD
    // Overlapping static entry reached from 0xEFCEC3.
    case 0xEFCE72: cpu.execute_instruction<0xB7>(0x0000C0, 2); return true;
    // src/unknown/EF/EFE175-jp.asm:418 JMP @UNKNOWN6
    case 0xEFCE74: cpu.execute_instruction<0x4C>(0x00CC01, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFE175-jp.asm:420 END_C_FUNCTION
    case 0xEFCE77: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/EF/EFE175-jp.asm:420 END_C_FUNCTION
    case 0xEFCE78: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFE6CF.asm (unresolved).
bool execute_unresolved_ef_efe6cf_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFE6CF.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFCFF2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EFE6CF.asm:6 LDA DEBUG_MODE_NUMBER
    case 0xEFCFF4: cpu.execute_instruction<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE6CF.asm:7 CMP #1
    case 0xEFCFF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFE6CF.asm:7 CMP #1
    // Overlapping static entry reached from 0xEFCFF7.
    case 0xEFCFF9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE6CF.asm:8 BNE @UNKNOWN1
    case 0xEFCFFA: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/EF/EFE6CF.asm:9 LDA #0
    case 0xEFCFFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE6CF.asm:9 LDA #0
    // Overlapping static entry reached from 0xEFCFFC.
    case 0xEFCFFE: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/EF/EFE6CF.asm:10 BRA @UNKNOWN2
    case 0xEFCFFF: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/EF/EFE6CF.asm:12 LDA #.LOWORD(-1)
    case 0xEFD001: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE6CF.asm:12 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD001.
    case 0xEFD003: cpu.execute_instruction<0xFF>(0x31C26B, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFE6CF.asm:14 END_C_FUNCTION
    case 0xEFD004: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFE6E2.asm (unresolved).
bool execute_unresolved_ef_efe6e2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFE6E2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFD005: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFE6E2.asm:8 END_STACK_VARS
    case 0xEFD007: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EFE6E2.asm:8 END_STACK_VARS
    case 0xEFD008: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFE6E2.asm:8 END_STACK_VARS
    case 0xEFD009: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE6E2.asm:8 END_STACK_VARS
    case 0xEFD00A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE6E2.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xEFD00A.
    case 0xEFD00C: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFE6E2.asm:8 END_STACK_VARS
    case 0xEFD00D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EFE6E2.asm:8 END_STACK_VARS
    case 0xEFD00E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFE6E2.asm:9 STA @LOCAL00
    case 0xEFD00F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE6E2.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xEFD00C.
    case 0xEFD010: cpu.execute_instruction<0x0E>(0x000AAD, 3); return true;
    // src/unknown/EF/EFE6E2.asm:10 LDA DEBUG_MODE_NUMBER
    case 0xEFD011: cpu.execute_instruction<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE6E2.asm:10 LDA DEBUG_MODE_NUMBER
    // Overlapping static entry reached from 0xEFD010.
    case 0xEFD013: cpu.execute_instruction<0xB7>(0x0000C9, 2); return true;
    // src/unknown/EF/EFE6E2.asm:11 CMP #1
    case 0xEFD014: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/EF/EFE6E2.asm:11 CMP #1
    // Overlapping static entry reached from 0xEFD013.
    case 0xEFD015: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/EF/EFE6E2.asm:11 CMP #1
    // Overlapping static entry reached from 0xEFD014.
    case 0xEFD016: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE6E2.asm:12 BNE @UNKNOWN0
    case 0xEFD017: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/unknown/EF/EFE6E2.asm:13 LDA @LOCAL00
    case 0xEFD019: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFE6E2.asm:14 CMP #10
    case 0xEFD01B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/unknown/EF/EFE6E2.asm:14 CMP #10
    // Overlapping static entry reached from 0xEFD01B.
    case 0xEFD01D: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/EF/EFE6E2.asm:15 BLTEQ @UNKNOWN0
    case 0xEFD01E: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/EF/EFE6E2.asm:15 BLTEQ @UNKNOWN0
    case 0xEFD020: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EFE6E2.asm:16 LDA #10
    case 0xEFD022: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/EF/EFE6E2.asm:16 LDA #10
    // Overlapping static entry reached from 0xEFD022.
    case 0xEFD024: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE6E2.asm:17 STA @LOCAL00
    case 0xEFD025: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE6E2.asm:19 LDA @LOCAL00
    case 0xEFD027: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFE6E2.asm:20 END_C_FUNCTION
    case 0xEFD029: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFE6E2.asm:20 END_C_FUNCTION
    case 0xEFD02A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFE708.asm (unresolved).
bool execute_unresolved_ef_efe708_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFE708.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFD02B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFE708.asm:7 END_STACK_VARS
    case 0xEFD02D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFE708.asm:7 END_STACK_VARS
    case 0xEFD02E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE708.asm:7 END_STACK_VARS
    case 0xEFD02F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE708.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xEFD02F.
    case 0xEFD031: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFE708.asm:7 END_STACK_VARS
    case 0xEFD032: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EFE708.asm:8 LDA #0
    case 0xEFD033: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE708.asm:8 LDA #0
    // Overlapping static entry reached from 0xEFD033.
    case 0xEFD035: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/EF/EFE708.asm:9 STA @LOCAL00
    case 0xEFD036: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE708.asm:10 LDA DEBUG_MODE_NUMBER
    case 0xEFD038: cpu.execute_instruction<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE708.asm:11 CMP #2
    case 0xEFD03B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFE708.asm:11 CMP #2
    // Overlapping static entry reached from 0xEFD03B.
    case 0xEFD03D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE708.asm:12 BNE @UNKNOWN2
    case 0xEFD03E: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/unknown/EF/EFE708.asm:13 BRA @UNKNOWN1
    case 0xEFD040: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/EF/EFE708.asm:15 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xEFD042: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/EF/EFE708.asm:17 LDA PAD_STATE
    case 0xEFD046: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/unknown/EF/EFE708.asm:18 AND #PAD::B_BUTTON
    case 0xEFD049: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/EF/EFE708.asm:18 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xEFD049.
    case 0xEFD04B: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE708.asm:19 BEQ @UNKNOWN0
    case 0xEFD04C: cpu.execute_instruction<0xF0>(0x0000F4, 2); return true;
    // src/unknown/EF/EFE708.asm:20 STZ BATTLE_MODE
    case 0xEFD04E: cpu.execute_instruction<0x9C>(0x005148, 3); return true;
    // src/unknown/EF/EFE708.asm:21 LDA #.LOWORD(-1)
    case 0xEFD051: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE708.asm:21 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD051.
    case 0xEFD053: cpu.execute_instruction<0xFF>(0x800E85, 4); return true;
    // src/unknown/EF/EFE708.asm:22 STA @LOCAL00
    case 0xEFD054: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE708.asm:23 BRA @UNKNOWN3
    case 0xEFD056: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/EF/EFE708.asm:23 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xEFD053.
    case 0xEFD057: cpu.execute_instruction<0x0D>(0x0065AD, 3); return true;
    // src/unknown/EF/EFE708.asm:25 LDA PAD_STATE
    case 0xEFD058: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/unknown/EF/EFE708.asm:25 LDA PAD_STATE
    // Overlapping static entry reached from 0xEFD057.
    case 0xEFD05A: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/EF/EFE708.asm:26 AND #PAD::Y_BUTTON
    case 0xEFD05B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x004000, 3); return true;
    // src/unknown/EF/EFE708.asm:26 AND #PAD::Y_BUTTON
    // Overlapping static entry reached from 0xEFD05B.
    case 0xEFD05D: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/EF/EFE708.asm:27 BEQ @UNKNOWN3
    case 0xEFD05E: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EFE708.asm:28 LDA #.LOWORD(-1)
    case 0xEFD060: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE708.asm:28 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD060.
    case 0xEFD062: cpu.execute_instruction<0xFF>(0xA50E85, 4); return true;
    // src/unknown/EF/EFE708.asm:29 STA @LOCAL00
    case 0xEFD063: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/EF/EFE708.asm:31 LDA @LOCAL00
    case 0xEFD065: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/EF/EFE708.asm:31 LDA @LOCAL00
    // Overlapping static entry reached from 0xEFD062.
    case 0xEFD066: cpu.execute_instruction<0x0E>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFE708.asm:32 END_C_FUNCTION
    case 0xEFD067: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFE708.asm:32 END_C_FUNCTION
    case 0xEFD068: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFE759.asm (unresolved).
bool execute_unresolved_ef_efe759_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFE759.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFD07C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EFE759.asm:6 LDA DEBUG_MODE_NUMBER
    case 0xEFD07E: cpu.execute_instruction<0xAD>(0x00B70A, 3); return true;
    // src/unknown/EF/EFE759.asm:7 CMP #2
    case 0xEFD081: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/EF/EFE759.asm:7 CMP #2
    // Overlapping static entry reached from 0xEFD081.
    case 0xEFD083: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/EF/EFE759.asm:8 BNE @UNKNOWN0
    case 0xEFD084: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/EF/EFE759.asm:9 LDA DEBUG_ENEMIES_ENABLED_FLAG
    case 0xEFD086: cpu.execute_instruction<0xAD>(0x00B726, 3); return true;
    // src/unknown/EF/EFE759.asm:10 BEQ @UNKNOWN0
    case 0xEFD089: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/EF/EFE759.asm:11 LDA #.LOWORD(-1)
    case 0xEFD08B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/EF/EFE759.asm:11 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFD08B.
    case 0xEFD08D: cpu.execute_instruction<0xFF>(0xA90380, 4); return true;
    // src/unknown/EF/EFE759.asm:12 BRA @UNKNOWN1
    case 0xEFD08E: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/EF/EFE759.asm:14 LDA #0
    case 0xEFD090: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/EF/EFE759.asm:14 LDA #0
    // Overlapping static entry reached from 0xEFD08D.
    case 0xEFD091: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/EF/EFE759.asm:14 LDA #0
    // Overlapping static entry reached from 0xEFD090.
    case 0xEFD092: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFE759.asm:16 END_C_FUNCTION
    case 0xEFD093: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFE771.asm (unresolved).
bool execute_unresolved_ef_efe771_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFE771.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFD094: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFE771.asm:7 END_STACK_VARS
    case 0xEFD096: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFE771.asm:7 END_STACK_VARS
    case 0xEFD097: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE771.asm:7 END_STACK_VARS
    case 0xEFD098: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE771.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xEFD098.
    case 0xEFD09A: cpu.execute_instruction<0xFF>(0x91225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFE771.asm:7 END_STACK_VARS
    case 0xEFD09B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EFE771.asm:8 JSL TEST_SRAM_SIZE
    case 0xEFD09C: cpu.execute_instruction<0x22>(0xC08391, 4); return true;
    // src/unknown/EF/EFE771.asm:8 JSL TEST_SRAM_SIZE
    // Overlapping static entry reached from 0xEFD09A.
    case 0xEFD09E: cpu.execute_instruction<0x83>(0x0000C0, 2); return true;
    // src/unknown/EF/EFE771.asm:9 CMP #0
    case 0xEFD0A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFE771.asm:9 CMP #0
    // Overlapping static entry reached from 0xEFD0A0.
    case 0xEFD0A2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/EF/EFE771.asm:10 BEQL @INSUFFICIENT_SRAM
    case 0xEFD0A3: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/EF/EFE771.asm:10 BEQL @INSUFFICIENT_SRAM
    case 0xEFD0A5: cpu.execute_instruction<0x4C>(0x00D194, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:11 LOADPTR UNKNOWN_316000, @VIRTUAL06
    case 0xEFD0A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x006000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:11 LOADPTR UNKNOWN_316000, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD0A8.
    case 0xEFD0AA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE771.asm:11 LOADPTR UNKNOWN_316000, @VIRTUAL06
    case 0xEFD0AB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:11 LOADPTR UNKNOWN_316000, @VIRTUAL06
    case 0xEFD0AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000031, 2); else cpu.execute_instruction<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:11 LOADPTR UNKNOWN_316000, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD0AD.
    case 0xEFD0AF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE771.asm:11 LOADPTR UNKNOWN_316000, @VIRTUAL06
    case 0xEFD0B0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:12 LOADPTR __BSS_START__ & $FF0000, @VIRTUAL0A
    case 0xEFD0B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:12 LOADPTR __BSS_START__ & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xEFD0B2.
    case 0xEFD0B4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE771.asm:12 LOADPTR __BSS_START__ & $FF0000, @VIRTUAL0A
    case 0xEFD0B5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:12 LOADPTR __BSS_START__ & $FF0000, @VIRTUAL0A
    case 0xEFD0B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:12 LOADPTR __BSS_START__ & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xEFD0B7.
    case 0xEFD0B9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE771.asm:12 LOADPTR __BSS_START__ & $FF0000, @VIRTUAL0A
    case 0xEFD0BA: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE771.asm:13 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD0BC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:13 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD0BE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE771.asm:13 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD0C0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:13 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD0C2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE771.asm:14 LDA #.LOWORD(GAME_STATE)
    case 0xEFD0C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A9, 2); else cpu.execute_instruction<0xA9>(0x009AA9, 3); return true;
    // src/unknown/EF/EFE771.asm:14 LDA #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xEFD0C4.
    case 0xEFD0C6: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:15 STORE_INT1632 @VIRTUAL06
    case 0xEFD0C7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:15 STORE_INT1632 @VIRTUAL06
    case 0xEFD0C9: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE771.asm:16 CLC
    case 0xEFD0CB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/EF/EFE771.asm:17 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD0CC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/EF/EFE771.asm:17 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD0CE: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:17 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD0D0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/EF/EFE771.asm:17 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD0D2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/EF/EFE771.asm:17 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD0D4: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:17 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD0D6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE771.asm:18 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD0D8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:18 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD0DA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE771.asm:18 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD0DC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:18 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD0DE: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE771.asm:19 LDA #.SIZEOF(game_state)
    case 0xEFD0E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D6, 2); else cpu.execute_instruction<0xA9>(0x0001D6, 3); return true;
    // src/unknown/EF/EFE771.asm:19 LDA #.SIZEOF(game_state)
    // Overlapping static entry reached from 0xEFD0E0.
    case 0xEFD0E2: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/unknown/EF/EFE771.asm:20 JSL MEMCPY24
    case 0xEFD0E3: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // src/unknown/EF/EFE771.asm:20 JSL MEMCPY24
    // Overlapping static entry reached from 0xEFD0E2.
    case 0xEFD0E4: cpu.execute_instruction<0xDE>(0x00C08E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:21 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    case 0xEFD0E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D6, 2); else cpu.execute_instruction<0xA9>(0x0061D6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:21 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD0E7.
    case 0xEFD0E9: cpu.execute_instruction<0x61>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE771.asm:21 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    case 0xEFD0EA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE771.asm:21 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD0E9.
    case 0xEFD0EB: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:21 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    case 0xEFD0EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000031, 2); else cpu.execute_instruction<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:21 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD0EB.
    case 0xEFD0ED: cpu.execute_instruction<0x31>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:21 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD0EC.
    case 0xEFD0EE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE771.asm:21 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    case 0xEFD0EF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE771.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD0F1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD0F3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE771.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD0F5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD0F7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE771.asm:23 LDA #.LOWORD(PARTY_CHARACTERS)
    case 0xEFD0F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x009C7F, 3); return true;
    // src/unknown/EF/EFE771.asm:23 LDA #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xEFD0F9.
    case 0xEFD0FB: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:24 STORE_INT1632 @VIRTUAL06
    case 0xEFD0FC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:24 STORE_INT1632 @VIRTUAL06
    case 0xEFD0FE: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE771.asm:25 CLC
    case 0xEFD100: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/EF/EFE771.asm:26 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD101: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/EF/EFE771.asm:26 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD103: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:26 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD105: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/EF/EFE771.asm:26 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD107: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/EF/EFE771.asm:26 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD109: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:26 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD10B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE771.asm:27 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD10D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:27 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD10F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE771.asm:27 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD111: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:27 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD113: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE771.asm:28 LDA #.SIZEOF(char_struct) * (TOTAL_PARTY_COUNT)
    case 0xEFD115: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000034, 2); else cpu.execute_instruction<0xA9>(0x000234, 3); return true;
    // src/unknown/EF/EFE771.asm:28 LDA #.SIZEOF(char_struct) * (TOTAL_PARTY_COUNT)
    // Overlapping static entry reached from 0xEFD115.
    case 0xEFD117: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/EF/EFE771.asm:29 JSL MEMCPY24
    case 0xEFD118: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:30 LOADPTR UNKNOWN_316413, @VIRTUAL06
    case 0xEFD11C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00640A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:30 LOADPTR UNKNOWN_316413, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD11C.
    case 0xEFD11E: cpu.execute_instruction<0x64>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE771.asm:30 LOADPTR UNKNOWN_316413, @VIRTUAL06
    case 0xEFD11F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE771.asm:30 LOADPTR UNKNOWN_316413, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD11E.
    case 0xEFD120: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:30 LOADPTR UNKNOWN_316413, @VIRTUAL06
    case 0xEFD121: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000031, 2); else cpu.execute_instruction<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:30 LOADPTR UNKNOWN_316413, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD120.
    case 0xEFD122: cpu.execute_instruction<0x31>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:30 LOADPTR UNKNOWN_316413, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD121.
    case 0xEFD123: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE771.asm:30 LOADPTR UNKNOWN_316413, @VIRTUAL06
    case 0xEFD124: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE771.asm:31 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD126: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:31 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD128: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE771.asm:31 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD12A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:31 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD12C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE771.asm:32 LDA #.LOWORD(EVENT_FLAGS)
    case 0xEFD12E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B3, 2); else cpu.execute_instruction<0xA9>(0x009EB3, 3); return true;
    // src/unknown/EF/EFE771.asm:32 LDA #.LOWORD(EVENT_FLAGS)
    // Overlapping static entry reached from 0xEFD12E.
    case 0xEFD130: cpu.execute_instruction<0x9E>(0x000685, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xEFD131: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xEFD133: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE771.asm:34 CLC
    case 0xEFD135: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/EF/EFE771.asm:35 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD136: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/EF/EFE771.asm:35 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD138: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:35 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD13A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/EF/EFE771.asm:35 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD13C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/EF/EFE771.asm:35 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD13E: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:35 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD140: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE771.asm:36 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD142: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:36 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD144: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE771.asm:36 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD146: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:36 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD148: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE771.asm:37 LDA #.SIZEOF(save_block::event_flags)
    case 0xEFD14A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/unknown/EF/EFE771.asm:37 LDA #.SIZEOF(save_block::event_flags)
    // Overlapping static entry reached from 0xEFD14A.
    case 0xEFD14C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE771.asm:38 JSL MEMCPY24
    case 0xEFD14D: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:39 LOADPTR UNKNOWN_316493, @VIRTUAL06
    case 0xEFD151: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x00648A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:39 LOADPTR UNKNOWN_316493, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD151.
    case 0xEFD153: cpu.execute_instruction<0x64>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE771.asm:39 LOADPTR UNKNOWN_316493, @VIRTUAL06
    case 0xEFD154: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE771.asm:39 LOADPTR UNKNOWN_316493, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD153.
    case 0xEFD155: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:39 LOADPTR UNKNOWN_316493, @VIRTUAL06
    case 0xEFD156: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000031, 2); else cpu.execute_instruction<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:39 LOADPTR UNKNOWN_316493, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD155.
    case 0xEFD157: cpu.execute_instruction<0x31>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:39 LOADPTR UNKNOWN_316493, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD156.
    case 0xEFD158: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE771.asm:39 LOADPTR UNKNOWN_316493, @VIRTUAL06
    case 0xEFD159: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE771.asm:40 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD15B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:40 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD15D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE771.asm:40 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD15F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:40 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD161: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE771.asm:41 LDA #.LOWORD(TIMER)
    case 0xEFD163: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A7, 2); else cpu.execute_instruction<0xA9>(0x0000A7, 3); return true;
    // src/unknown/EF/EFE771.asm:41 LDA #.LOWORD(TIMER)
    // Overlapping static entry reached from 0xEFD163.
    case 0xEFD165: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xEFD166: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xEFD168: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE771.asm:43 CLC
    case 0xEFD16A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/EF/EFE771.asm:44 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD16B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/EF/EFE771.asm:44 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD16D: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:44 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD16F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/EF/EFE771.asm:44 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD171: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/EF/EFE771.asm:44 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD173: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:44 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD175: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE771.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD177: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE771.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD179: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE771.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD17B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE771.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD17D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE771.asm:46 LDA #4
    case 0xEFD17F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EFE771.asm:46 LDA #4
    // Overlapping static entry reached from 0xEFD17F.
    case 0xEFD181: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE771.asm:47 JSL MEMCPY24
    case 0xEFD182: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:48 LOADPTR UNKNOWN_326000, @LOCAL00
    case 0xEFD186: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x006000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:48 LOADPTR UNKNOWN_326000, @LOCAL00
    // Overlapping static entry reached from 0xEFD186.
    case 0xEFD188: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE771.asm:48 LOADPTR UNKNOWN_326000, @LOCAL00
    case 0xEFD189: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:48 LOADPTR UNKNOWN_326000, @LOCAL00
    case 0xEFD18B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000032, 2); else cpu.execute_instruction<0xA9>(0x000032, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE771.asm:48 LOADPTR UNKNOWN_326000, @LOCAL00
    // Overlapping static entry reached from 0xEFD18B.
    case 0xEFD18D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE771.asm:48 LOADPTR UNKNOWN_326000, @LOCAL00
    case 0xEFD18E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE771.asm:49 JSL UNKNOWN_C083C1
    case 0xEFD190: cpu.execute_instruction<0x22>(0xC083C1, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFE771.asm:51 END_C_FUNCTION
    case 0xEFD194: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFE771.asm:51 END_C_FUNCTION
    case 0xEFD195: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFE873.asm (unresolved).
bool execute_unresolved_ef_efe873_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFE873.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFD196: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EFE873.asm:6 JSL TEST_SRAM_SIZE
    case 0xEFD198: cpu.execute_instruction<0x22>(0xC08391, 4); return true;
    // src/unknown/EF/EFE873.asm:7 CMP #0
    case 0xEFD19C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFE873.asm:7 CMP #0
    // Overlapping static entry reached from 0xEFD19C.
    case 0xEFD19E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE873.asm:8 BEQ @GOOD_SRAM_SIZE
    case 0xEFD19F: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE873.asm:9 MOVE_INT RAND_A_BACKUP, RAND_A
    case 0xEFD1A1: cpu.execute_instruction<0xAD>(0x00B71E, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE873.asm:9 MOVE_INT RAND_A_BACKUP, RAND_A
    case 0xEFD1A4: cpu.execute_instruction<0x8D>(0x000024, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE873.asm:9 MOVE_INT RAND_A_BACKUP, RAND_A
    case 0xEFD1A7: cpu.execute_instruction<0xAD>(0x00B720, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE873.asm:9 MOVE_INT RAND_A_BACKUP, RAND_A
    case 0xEFD1AA: cpu.execute_instruction<0x8D>(0x000026, 3); return true;
    // src/unknown/EF/EFE873.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xEFD1AD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFE873.asm:11 LDA FRAME_COUNTER_BACKUP
    case 0xEFD1AF: cpu.execute_instruction<0xAD>(0x00B722, 3); return true;
    // src/unknown/EF/EFE873.asm:12 STA FRAME_COUNTER
    case 0xEFD1B2: cpu.execute_instruction<0x8D>(0x000002, 3); return true;
    // src/unknown/EF/EFE873.asm:14 REP #PROC_FLAGS::ACCUM8
    case 0xEFD1B5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFE873.asm:15 END_C_FUNCTION
    case 0xEFD1B7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFE895.asm (unresolved).
bool execute_unresolved_ef_efe895_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFE895.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFD1B8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFE895.asm:7 END_STACK_VARS
    case 0xEFD1BA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/EF/EFE895.asm:7 END_STACK_VARS
    case 0xEFD1BB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFE895.asm:7 END_STACK_VARS
    case 0xEFD1BC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE895.asm:7 END_STACK_VARS
    case 0xEFD1BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE895.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xEFD1BD.
    case 0xEFD1BF: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFE895.asm:7 END_STACK_VARS
    case 0xEFD1C0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/EF/EFE895.asm:7 END_STACK_VARS
    case 0xEFD1C1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFE895.asm:8 TAX
    case 0xEFD1C2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/EF/EFE895.asm:9 STX @LOCAL00
    case 0xEFD1C3: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/EF/EFE895.asm:10 JSL TEST_SRAM_SIZE
    case 0xEFD1C5: cpu.execute_instruction<0x22>(0xC08391, 4); return true;
    // src/unknown/EF/EFE895.asm:11 CMP #0
    case 0xEFD1C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFE895.asm:11 CMP #0
    // Overlapping static entry reached from 0xEFD1C9.
    case 0xEFD1CB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFE895.asm:12 BEQ @GOOD_SRAM_SIZE
    case 0xEFD1CC: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE895.asm:13 MOVE_INT RAND_A, RAND_A_BACKUP
    case 0xEFD1CE: cpu.execute_instruction<0xAD>(0x000024, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE895.asm:13 MOVE_INT RAND_A, RAND_A_BACKUP
    case 0xEFD1D1: cpu.execute_instruction<0x8D>(0x00B71E, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE895.asm:13 MOVE_INT RAND_A, RAND_A_BACKUP
    case 0xEFD1D4: cpu.execute_instruction<0xAD>(0x000026, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE895.asm:13 MOVE_INT RAND_A, RAND_A_BACKUP
    case 0xEFD1D7: cpu.execute_instruction<0x8D>(0x00B720, 3); return true;
    // src/unknown/EF/EFE895.asm:14 LDA FRAME_COUNTER
    case 0xEFD1DA: cpu.execute_instruction<0xAD>(0x000002, 3); return true;
    // src/unknown/EF/EFE895.asm:15 AND #$00FF
    case 0xEFD1DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/EF/EFE895.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xEFD1DD.
    case 0xEFD1DF: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFE895.asm:16 STA FRAME_COUNTER_BACKUP
    case 0xEFD1E0: cpu.execute_instruction<0x8D>(0x00B722, 3); return true;
    // src/unknown/EF/EFE895.asm:17 LDX @LOCAL00
    case 0xEFD1E3: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/EF/EFE895.asm:18 STX REPLAY_TRANSITION_STYLE
    case 0xEFD1E5: cpu.execute_instruction<0x8E>(0x00B724, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFE895.asm:20 END_C_FUNCTION
    case 0xEFD1E8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFE895.asm:20 END_C_FUNCTION
    case 0xEFD1E9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFE8C7-jp.asm (unresolved).
bool execute_unresolved_ef_efe8c7_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFD1EA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:8 END_STACK_VARS
    case 0xEFD1EC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:8 END_STACK_VARS
    case 0xEFD1ED: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:8 END_STACK_VARS
    case 0xEFD1EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xEFD1EE.
    case 0xEFD1F0: cpu.execute_instruction<0xFF>(0x91225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:8 END_STACK_VARS
    case 0xEFD1F1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EFE8C7-jp.asm:9 JSL TEST_SRAM_SIZE
    case 0xEFD1F2: cpu.execute_instruction<0x22>(0xC08391, 4); return true;
    // src/unknown/EF/EFE8C7-jp.asm:9 JSL TEST_SRAM_SIZE
    // Overlapping static entry reached from 0xEFD1F0.
    case 0xEFD1F4: cpu.execute_instruction<0x83>(0x0000C0, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:10 CMP #0
    case 0xEFD1F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFE8C7-jp.asm:10 CMP #0
    // Overlapping static entry reached from 0xEFD1F6.
    case 0xEFD1F8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:11 BEQL @INSUFFICIENT_SRAM
    case 0xEFD1F9: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:11 BEQL @INSUFFICIENT_SRAM
    case 0xEFD1FB: cpu.execute_instruction<0x4C>(0x00D34C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:12 LOADPTR UNKNOWN_316000, @VIRTUAL06
    case 0xEFD1FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x006000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:12 LOADPTR UNKNOWN_316000, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD1FE.
    case 0xEFD200: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:12 LOADPTR UNKNOWN_316000, @VIRTUAL06
    case 0xEFD201: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:12 LOADPTR UNKNOWN_316000, @VIRTUAL06
    case 0xEFD203: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000031, 2); else cpu.execute_instruction<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:12 LOADPTR UNKNOWN_316000, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD203.
    case 0xEFD205: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:12 LOADPTR UNKNOWN_316000, @VIRTUAL06
    case 0xEFD206: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:13 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFD208: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:13 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFD20A: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:13 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFD20C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:13 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFD20E: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:14 LOADPTR __BSS_START__ & $FF0000, @VIRTUAL0A
    case 0xEFD210: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:14 LOADPTR __BSS_START__ & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xEFD210.
    case 0xEFD212: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:14 LOADPTR __BSS_START__ & $FF0000, @VIRTUAL0A
    case 0xEFD213: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:14 LOADPTR __BSS_START__ & $FF0000, @VIRTUAL0A
    case 0xEFD215: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:14 LOADPTR __BSS_START__ & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xEFD215.
    case 0xEFD217: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:14 LOADPTR __BSS_START__ & $FF0000, @VIRTUAL0A
    case 0xEFD218: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:15 LDA #.LOWORD(GAME_STATE)
    case 0xEFD21A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A9, 2); else cpu.execute_instruction<0xA9>(0x009AA9, 3); return true;
    // src/unknown/EF/EFE8C7-jp.asm:15 LDA #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xEFD21A.
    case 0xEFD21C: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:16 STORE_INT1632 @VIRTUAL06
    case 0xEFD21D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:16 STORE_INT1632 @VIRTUAL06
    case 0xEFD21F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:17 CLC
    case 0xEFD221: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:18 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD222: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:18 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD224: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:18 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD226: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:18 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD228: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:18 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD22A: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:18 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD22C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD22E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD230: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD232: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD234: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:20 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFD236: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:20 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFD238: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:20 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFD23A: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:20 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFD23C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:21 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD23E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:21 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD240: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:21 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD242: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:21 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD244: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:22 LDA #.SIZEOF(save_block::game_state)
    case 0xEFD246: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D6, 2); else cpu.execute_instruction<0xA9>(0x0001D6, 3); return true;
    // src/unknown/EF/EFE8C7-jp.asm:22 LDA #.SIZEOF(save_block::game_state)
    // Overlapping static entry reached from 0xEFD246.
    case 0xEFD248: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:23 JSL MEMCPY24
    case 0xEFD249: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // src/unknown/EF/EFE8C7-jp.asm:23 JSL MEMCPY24
    // Overlapping static entry reached from 0xEFD248.
    case 0xEFD24A: cpu.execute_instruction<0xDE>(0x00C08E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:24 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    case 0xEFD24D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D6, 2); else cpu.execute_instruction<0xA9>(0x0061D6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:24 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD24D.
    case 0xEFD24F: cpu.execute_instruction<0x61>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:24 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    case 0xEFD250: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:24 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD24F.
    case 0xEFD251: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:24 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    case 0xEFD252: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000031, 2); else cpu.execute_instruction<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:24 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD251.
    case 0xEFD253: cpu.execute_instruction<0x31>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:24 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD252.
    case 0xEFD254: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:24 LOADPTR UNKNOWN_3161D9, @VIRTUAL06
    case 0xEFD255: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFD257: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFD259: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFD25B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:25 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFD25D: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:26 LDA #.LOWORD(PARTY_CHARACTERS)
    case 0xEFD25F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x009C7F, 3); return true;
    // src/unknown/EF/EFE8C7-jp.asm:26 LDA #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xEFD25F.
    case 0xEFD261: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:27 STORE_INT1632 @VIRTUAL06
    case 0xEFD262: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:27 STORE_INT1632 @VIRTUAL06
    case 0xEFD264: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:28 CLC
    case 0xEFD266: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:29 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD267: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:29 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD269: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:29 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD26B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:29 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD26D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:29 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD26F: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:29 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD271: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:30 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD273: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:30 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD275: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:30 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD277: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:30 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD279: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:31 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFD27B: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:31 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFD27D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:31 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFD27F: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:31 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFD281: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD283: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD285: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD287: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD289: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:33 LDA #.SIZEOF(save_block::party_characters)
    case 0xEFD28B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000034, 2); else cpu.execute_instruction<0xA9>(0x000234, 3); return true;
    // src/unknown/EF/EFE8C7-jp.asm:33 LDA #.SIZEOF(save_block::party_characters)
    // Overlapping static entry reached from 0xEFD28B.
    case 0xEFD28D: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:34 JSL MEMCPY24
    case 0xEFD28E: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:35 LOADPTR UNKNOWN_316413, @VIRTUAL06
    case 0xEFD292: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00640A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:35 LOADPTR UNKNOWN_316413, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD292.
    case 0xEFD294: cpu.execute_instruction<0x64>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:35 LOADPTR UNKNOWN_316413, @VIRTUAL06
    case 0xEFD295: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:35 LOADPTR UNKNOWN_316413, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD294.
    case 0xEFD296: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:35 LOADPTR UNKNOWN_316413, @VIRTUAL06
    case 0xEFD297: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000031, 2); else cpu.execute_instruction<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:35 LOADPTR UNKNOWN_316413, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD296.
    case 0xEFD298: cpu.execute_instruction<0x31>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:35 LOADPTR UNKNOWN_316413, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD297.
    case 0xEFD299: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:35 LOADPTR UNKNOWN_316413, @VIRTUAL06
    case 0xEFD29A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:36 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFD29C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:36 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFD29E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:36 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFD2A0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:36 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFD2A2: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:37 LDA #.LOWORD(EVENT_FLAGS)
    case 0xEFD2A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B3, 2); else cpu.execute_instruction<0xA9>(0x009EB3, 3); return true;
    // src/unknown/EF/EFE8C7-jp.asm:37 LDA #.LOWORD(EVENT_FLAGS)
    // Overlapping static entry reached from 0xEFD2A4.
    case 0xEFD2A6: cpu.execute_instruction<0x9E>(0x000685, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:38 STORE_INT1632 @VIRTUAL06
    case 0xEFD2A7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:38 STORE_INT1632 @VIRTUAL06
    case 0xEFD2A9: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:39 CLC
    case 0xEFD2AB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:40 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD2AC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:40 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD2AE: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:40 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD2B0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:40 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD2B2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:40 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD2B4: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:40 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xEFD2B6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD2B8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD2BA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD2BC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xEFD2BE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:42 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFD2C0: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:42 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFD2C2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:42 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFD2C4: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:42 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFD2C6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD2C8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD2CA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD2CC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD2CE: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:44 LDA #.SIZEOF(save_block::event_flags)
    case 0xEFD2D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/unknown/EF/EFE8C7-jp.asm:44 LDA #.SIZEOF(save_block::event_flags)
    // Overlapping static entry reached from 0xEFD2D0.
    case 0xEFD2D2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:45 JSL MEMCPY24
    case 0xEFD2D3: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:46 LOADPTR UNKNOWN_316493, @VIRTUAL06
    case 0xEFD2D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x00648A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:46 LOADPTR UNKNOWN_316493, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD2D7.
    case 0xEFD2D9: cpu.execute_instruction<0x64>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:46 LOADPTR UNKNOWN_316493, @VIRTUAL06
    case 0xEFD2DA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:46 LOADPTR UNKNOWN_316493, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD2D9.
    case 0xEFD2DB: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:46 LOADPTR UNKNOWN_316493, @VIRTUAL06
    case 0xEFD2DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000031, 2); else cpu.execute_instruction<0xA9>(0x000031, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:46 LOADPTR UNKNOWN_316493, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD2DB.
    case 0xEFD2DD: cpu.execute_instruction<0x31>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:46 LOADPTR UNKNOWN_316493, @VIRTUAL06
    // Overlapping static entry reached from 0xEFD2DC.
    case 0xEFD2DE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:46 LOADPTR UNKNOWN_316493, @VIRTUAL06
    case 0xEFD2DF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:47 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFD2E1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:47 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFD2E3: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:47 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFD2E5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:47 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xEFD2E7: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:48 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xEFD2E9: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:48 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xEFD2EB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:48 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xEFD2ED: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:48 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xEFD2EF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:49 LDA #167
    case 0xEFD2F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A7, 2); else cpu.execute_instruction<0xA9>(0x0000A7, 3); return true;
    // src/unknown/EF/EFE8C7-jp.asm:49 LDA #167
    // Overlapping static entry reached from 0xEFD2F1.
    case 0xEFD2F3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:50 STORE_INT1632 @VIRTUAL0A
    case 0xEFD2F4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:50 STORE_INT1632 @VIRTUAL0A
    case 0xEFD2F6: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:51 CLC
    case 0xEFD2F8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:52 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xEFD2F9: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:52 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xEFD2FB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:52 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xEFD2FD: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:52 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xEFD2FF: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:52 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xEFD301: cpu.execute_instruction<0x65>(0x000008, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:52 ADD_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xEFD303: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:53 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xEFD305: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:53 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xEFD307: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:53 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xEFD309: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:53 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xEFD30B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:54 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFD30D: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:54 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFD30F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:54 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFD311: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:54 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xEFD313: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:55 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD315: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:55 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD317: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:55 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD319: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:55 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xEFD31B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:56 LDA #4
    case 0xEFD31D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/EF/EFE8C7-jp.asm:56 LDA #4
    // Overlapping static entry reached from 0xEFD31D.
    case 0xEFD31F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:57 JSL MEMCPY24
    case 0xEFD320: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // src/unknown/EF/EFE8C7-jp.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xEFD324: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:59 LDA FRAME_COUNTER_BACKUP
    case 0xEFD326: cpu.execute_instruction<0xAD>(0x00B722, 3); return true;
    // src/unknown/EF/EFE8C7-jp.asm:60 STA FRAME_COUNTER
    case 0xEFD329: cpu.execute_instruction<0x8D>(0x000002, 3); return true;
    // src/unknown/EF/EFE8C7-jp.asm:61 REP #PROC_FLAGS::ACCUM8
    case 0xEFD32C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:62 MOVE_INT RAND_A_BACKUP, RAND_A
    case 0xEFD32E: cpu.execute_instruction<0xAD>(0x00B71E, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:62 MOVE_INT RAND_A_BACKUP, RAND_A
    case 0xEFD331: cpu.execute_instruction<0x8D>(0x000024, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:62 MOVE_INT RAND_A_BACKUP, RAND_A
    case 0xEFD334: cpu.execute_instruction<0xAD>(0x00B720, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:62 MOVE_INT RAND_A_BACKUP, RAND_A
    case 0xEFD337: cpu.execute_instruction<0x8D>(0x000026, 3); return true;
    // src/unknown/EF/EFE8C7-jp.asm:63 JSL UNKNOWN_C083B8
    case 0xEFD33A: cpu.execute_instruction<0x22>(0xC083B8, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:64 LOADPTR UNKNOWN_326000, @LOCAL00
    case 0xEFD33E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x006000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:64 LOADPTR UNKNOWN_326000, @LOCAL00
    // Overlapping static entry reached from 0xEFD33E.
    case 0xEFD340: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:64 LOADPTR UNKNOWN_326000, @LOCAL00
    case 0xEFD341: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:64 LOADPTR UNKNOWN_326000, @LOCAL00
    case 0xEFD343: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000032, 2); else cpu.execute_instruction<0xA9>(0x000032, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:64 LOADPTR UNKNOWN_326000, @LOCAL00
    // Overlapping static entry reached from 0xEFD343.
    case 0xEFD345: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:64 LOADPTR UNKNOWN_326000, @LOCAL00
    case 0xEFD346: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/EF/EFE8C7-jp.asm:65 JSL UNKNOWN_C083E3
    case 0xEFD348: cpu.execute_instruction<0x22>(0xC083E3, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:67 END_C_FUNCTION
    case 0xEFD34C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFE8C7-jp.asm:67 END_C_FUNCTION
    case 0xEFD34D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFEA23.asm (unresolved).
bool execute_unresolved_ef_efea23_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFEA23.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFD34E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EFEA23.asm:5 JSL TEST_SRAM_SIZE
    case 0xEFD350: cpu.execute_instruction<0x22>(0xC08391, 4); return true;
    // src/unknown/EF/EFEA23.asm:6 CMP #0
    case 0xEFD354: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFEA23.asm:6 CMP #0
    // Overlapping static entry reached from 0xEFD354.
    case 0xEFD356: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFEA23.asm:7 BEQ @RETURN ;insufficient SRAM
    case 0xEFD357: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/EF/EFEA23.asm:8 LDA REPLAY_MODE_ACTIVE
    case 0xEFD359: cpu.execute_instruction<0xAD>(0x00B718, 3); return true;
    // src/unknown/EF/EFEA23.asm:9 BEQ @UNKNOWN0
    case 0xEFD35C: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/unknown/EF/EFEA23.asm:10 JSL LOAD_REPLAY_SAVE_SLOT
    case 0xEFD35E: cpu.execute_instruction<0x22>(0xEFD1EA, 4); return true;
    // src/unknown/EF/EFEA23.asm:11 LDA GAME_STATE+game_state::leader_x_coord
    case 0xEFD362: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/EF/EFEA23.asm:12 STA UNUSED_7EB569
    case 0xEFD365: cpu.execute_instruction<0x8D>(0x00B71A, 3); return true;
    // src/unknown/EF/EFEA23.asm:13 LDA GAME_STATE+game_state::leader_y_coord
    case 0xEFD368: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/EF/EFEA23.asm:14 STA UNUSED_7EB56B
    case 0xEFD36B: cpu.execute_instruction<0x8D>(0x00B71C, 3); return true;
    // src/unknown/EF/EFEA23.asm:15 BRA @RETURN
    case 0xEFD36E: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/EF/EFEA23.asm:17 JSL SAVE_REPLAY_SAVE_SLOT
    case 0xEFD370: cpu.execute_instruction<0x22>(0xEFD094, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFEA23.asm:19 END_C_FUNCTION
    case 0xEFD374: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFEA4A.asm (unresolved).
bool execute_unresolved_ef_efea4a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFEA4A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFD375: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/EF/EFEA4A.asm:5 END_STACK_VARS
    case 0xEFD377: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/EF/EFEA4A.asm:5 END_STACK_VARS
    case 0xEFD378: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFEA4A.asm:5 END_STACK_VARS
    case 0xEFD379: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/EF/EFEA4A.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xEFD379.
    case 0xEFD37B: cpu.execute_instruction<0xFF>(0x91225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/EF/EFEA4A.asm:5 END_STACK_VARS
    case 0xEFD37C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/EF/EFEA4A.asm:6 JSL TEST_SRAM_SIZE
    case 0xEFD37D: cpu.execute_instruction<0x22>(0xC08391, 4); return true;
    // src/unknown/EF/EFEA4A.asm:6 JSL TEST_SRAM_SIZE
    // Overlapping static entry reached from 0xEFD37B.
    case 0xEFD37F: cpu.execute_instruction<0x83>(0x0000C0, 2); return true;
    // src/unknown/EF/EFEA4A.asm:7 CMP #0
    case 0xEFD381: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/EF/EFEA4A.asm:7 CMP #0
    // Overlapping static entry reached from 0xEFD381.
    case 0xEFD383: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/EF/EFEA4A.asm:8 BEQ @INSUFFICIENT_SRAM
    case 0xEFD384: cpu.execute_instruction<0xF0>(0x000041, 2); return true;
    // src/unknown/EF/EFEA4A.asm:9 LDA #1
    case 0xEFD386: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/EF/EFEA4A.asm:9 LDA #1
    // Overlapping static entry reached from 0xEFD386.
    case 0xEFD388: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/EF/EFEA4A.asm:10 STA REPLAY_MODE_ACTIVE
    case 0xEFD389: cpu.execute_instruction<0x8D>(0x00B718, 3); return true;
    // src/unknown/EF/EFEA4A.asm:11 JSL LOAD_REPLAY_SAVE_SLOT
    case 0xEFD38C: cpu.execute_instruction<0x22>(0xEFD1EA, 4); return true;
    // src/unknown/EF/EFEA4A.asm:12 LDA GAME_STATE + game_state::leader_x_coord
    case 0xEFD390: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/EF/EFEA4A.asm:13 STA @VIRTUAL04
    case 0xEFD393: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/EF/EFEA4A.asm:14 LDA GAME_STATE + game_state::leader_y_coord
    case 0xEFD395: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/EF/EFEA4A.asm:15 STA @VIRTUAL02
    case 0xEFD398: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/EF/EFEA4A.asm:16 LDX #1
    case 0xEFD39A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/EF/EFEA4A.asm:16 LDX #1
    // Overlapping static entry reached from 0xEFD39A.
    case 0xEFD39C: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/EF/EFEA4A.asm:17 TXA
    case 0xEFD39D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/EF/EFEA4A.asm:18 JSL FADE_OUT
    case 0xEFD39E: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/unknown/EF/EFEA4A.asm:19 LDX @VIRTUAL02
    case 0xEFD3A2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFEA4A.asm:20 LDA @VIRTUAL04
    case 0xEFD3A4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFEA4A.asm:21 JSL LOAD_MAP_AT_POSITION
    case 0xEFD3A6: cpu.execute_instruction<0x22>(0xC0140C, 4); return true;
    // src/unknown/EF/EFEA4A.asm:22 LDY #0
    case 0xEFD3AA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/EF/EFEA4A.asm:22 LDY #0
    // Overlapping static entry reached from 0xEFD3AA.
    case 0xEFD3AC: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/EF/EFEA4A.asm:23 LDX @VIRTUAL02
    case 0xEFD3AD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/EF/EFEA4A.asm:24 LDA @VIRTUAL04
    case 0xEFD3AF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/EF/EFEA4A.asm:25 JSL UNKNOWN_C03FA9
    case 0xEFD3B1: cpu.execute_instruction<0x22>(0xC04230, 4); return true;
    // src/unknown/EF/EFEA4A.asm:26 JSL UNKNOWN_C09451
    case 0xEFD3B5: cpu.execute_instruction<0x22>(0xC09430, 4); return true;
    // src/unknown/EF/EFEA4A.asm:27 LDX #0
    case 0xEFD3B9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/EF/EFEA4A.asm:27 LDX #0
    // Overlapping static entry reached from 0xEFD3B9.
    case 0xEFD3BB: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/EF/EFEA4A.asm:28 LDA REPLAY_TRANSITION_STYLE
    case 0xEFD3BC: cpu.execute_instruction<0xAD>(0x00B724, 3); return true;
    // src/unknown/EF/EFEA4A.asm:29 JSL SCREEN_TRANSITION
    case 0xEFD3BF: cpu.execute_instruction<0x22>(0xC06890, 4); return true;
    // src/unknown/EF/EFEA4A.asm:30 JSL UNKNOWN_C0943C
    case 0xEFD3C3: cpu.execute_instruction<0x22>(0xC0941B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/EF/EFEA4A.asm:32 END_C_FUNCTION
    case 0xEFD3C7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFEA4A.asm:32 END_C_FUNCTION
    case 0xEFD3C8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFEA9E.asm (unresolved).
bool execute_unresolved_ef_efea9e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/EF/EFEA9E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFD3C9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/EF/EFEA9E.asm:5 STZ REPLAY_MODE_ACTIVE
    case 0xEFD3CB: cpu.execute_instruction<0x9C>(0x00B718, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/EF/EFEA9E.asm:6 END_C_FUNCTION
    case 0xEFD3CE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFEAA4.asm (unresolved).
bool execute_unresolved_ef_efeaa4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/EF/EFEAA4.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xEFD3CF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFEAA4.asm:4 LDA INIDISP_MIRROR
    case 0xEFD3D1: cpu.execute_instruction<0xAD>(0x00000D, 3); return true;
    // src/unknown/EF/EFEAA4.asm:5 PHA
    case 0xEFD3D4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/EF/EFEAA4.asm:6 LDA #$0080
    case 0xEFD3D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008D80, 3); return true;
    // src/unknown/EF/EFEAA4.asm:7 STA INIDISP_MIRROR
    case 0xEFD3D7: cpu.execute_instruction<0x8D>(0x00000D, 3); return true;
    // src/unknown/EF/EFEAA4.asm:7 STA INIDISP_MIRROR
    // Overlapping static entry reached from 0xEFD3D5.
    case 0xEFD3D8: cpu.execute_instruction<0x0D>(0x008F00, 3); return true;
    // src/unknown/EF/EFEAA4.asm:8 STA f:INIDISP
    case 0xEFD3DA: cpu.execute_instruction<0x8F>(0x002100, 4); return true;
    // src/unknown/EF/EFEAA4.asm:8 STA f:INIDISP
    // Overlapping static entry reached from 0xEFD3D8.
    case 0xEFD3DB: cpu.execute_instruction<0x00>(0x000021, 2); return true;
    // src/unknown/EF/EFEAA4.asm:9 LDX #$0000
    case 0xEFD3DE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/EF/EFEAA4.asm:9 LDX #$0000
    // Overlapping static entry reached from 0xEFD3DE.
    case 0xEFD3E0: cpu.execute_instruction<0x00>(0x0000BF, 2); return true;
    // src/unknown/EF/EFEAA4.asm:11 LDA BUFFER,X
    case 0xEFD3E1: cpu.execute_instruction<0xBF>(0x7F0000, 4); return true;
    // src/unknown/EF/EFEAA4.asm:12 INX
    case 0xEFD3E5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/EF/EFEAA4.asm:13 BNE @UNKNOWN0
    case 0xEFD3E6: cpu.execute_instruction<0xD0>(0x0000F9, 2); return true;
    // src/unknown/EF/EFEAA4.asm:14 PLA
    case 0xEFD3E8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/EF/EFEAA4.asm:15 STA INIDISP_MIRROR
    case 0xEFD3E9: cpu.execute_instruction<0x8D>(0x00000D, 3); return true;
    // src/unknown/EF/EFEAA4.asm:16 STA f:INIDISP
    case 0xEFD3EC: cpu.execute_instruction<0x8F>(0x002100, 4); return true;
    // src/unknown/EF/EFEAA4.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xEFD3F0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFEAA4.asm:18 RTL
    case 0xEFD3F2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFEAC8-jp.asm (unresolved).
bool execute_unresolved_ef_efeac8_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/EF/EFEAC8-jp.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xEFD3F3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:4 LDA #$0020
    case 0xEFD3F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x008F20, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:5 STA f:WOBJSEL
    case 0xEFD3F7: cpu.execute_instruction<0x8F>(0x002125, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:5 STA f:WOBJSEL
    // Overlapping static entry reached from 0xEFD3F5.
    case 0xEFD3F8: cpu.execute_instruction<0x25>(0x000021, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:5 STA f:WOBJSEL
    // Overlapping static entry reached from 0xEFD3F8.
    case 0xEFD3FA: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:6 LDA #$0018
    case 0xEFD3FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008F18, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:7 STA f:WH0
    case 0xEFD3FD: cpu.execute_instruction<0x8F>(0x002126, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:7 STA f:WH0
    // Overlapping static entry reached from 0xEFD3FB.
    case 0xEFD3FE: cpu.execute_instruction<0x26>(0x000021, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:7 STA f:WH0
    // Overlapping static entry reached from 0xEFD3FE.
    case 0xEFD400: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:8 LDA #$0078
    case 0xEFD401: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x008F78, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:9 STA f:WH1
    case 0xEFD403: cpu.execute_instruction<0x8F>(0x002127, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:9 STA f:WH1
    // Overlapping static entry reached from 0xEFD401.
    case 0xEFD404: cpu.execute_instruction<0x27>(0x000021, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:9 STA f:WH1
    // Overlapping static entry reached from 0xEFD404.
    case 0xEFD406: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:10 LDA #$0013
    case 0xEFD407: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x008F13, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:11 STA f:TMW
    case 0xEFD409: cpu.execute_instruction<0x8F>(0x00212E, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:11 STA f:TMW
    // Overlapping static entry reached from 0xEFD407.
    case 0xEFD40A: cpu.execute_instruction<0x2E>(0x000021, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:12 LDA #$0010
    case 0xEFD40D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x008F10, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:13 STA f:CGWSEL
    case 0xEFD40F: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:13 STA f:CGWSEL
    // Overlapping static entry reached from 0xEFD40D.
    case 0xEFD410: cpu.execute_instruction<0x30>(0x000021, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:13 STA f:CGWSEL
    // Overlapping static entry reached from 0xEFD410.
    case 0xEFD412: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:14 LDA #$0093
    case 0xEFD413: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000093, 2); else cpu.execute_instruction<0xA9>(0x008F93, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:15 STA f:CGADSUB
    case 0xEFD415: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:15 STA f:CGADSUB
    // Overlapping static entry reached from 0xEFD413.
    case 0xEFD416: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:15 STA f:CGADSUB
    // Overlapping static entry reached from 0xEFD416.
    case 0xEFD418: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:16 LDA #$00EF
    case 0xEFD419: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x008FEF, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:17 STA f:$2132
    case 0xEFD41B: cpu.execute_instruction<0x8F>(0x002132, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:17 STA f:$2132
    // Overlapping static entry reached from 0xEFD419.
    case 0xEFD41C: cpu.execute_instruction<0x32>(0x000021, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:17 STA f:$2132
    // Overlapping static entry reached from 0xEFD41C.
    case 0xEFD41E: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:18 LDA #$0001
    case 0xEFD41F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008F01, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:19 STA f:DMAP4
    case 0xEFD421: cpu.execute_instruction<0x8F>(0x004340, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:19 STA f:DMAP4
    // Overlapping static entry reached from 0xEFD41F.
    case 0xEFD422: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/EF/EFEAC8-jp.asm:20 LDA #$0026
    case 0xEFD425: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x008F26, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:21 STA f:BBAD4
    case 0xEFD427: cpu.execute_instruction<0x8F>(0x004341, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:21 STA f:BBAD4
    // Overlapping static entry reached from 0xEFD425.
    case 0xEFD428: cpu.execute_instruction<0x41>(0x000043, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:21 STA f:BBAD4
    // Overlapping static entry reached from 0xEFD428.
    case 0xEFD42A: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:22 REP #PROC_FLAGS::ACCUM8
    case 0xEFD42B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:23 LDA #$D448
    case 0xEFD42D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000048, 2); else cpu.execute_instruction<0xA9>(0x00D448, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:23 LDA #$D448
    // Overlapping static entry reached from 0xEFD42D.
    case 0xEFD42F: cpu.execute_instruction<0xD4>(0x00008F, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:24 STA f:A1T4L
    case 0xEFD430: cpu.execute_instruction<0x8F>(0x004342, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:24 STA f:A1T4L
    // Overlapping static entry reached from 0xEFD42F.
    case 0xEFD431: cpu.execute_instruction<0x42>(0x000043, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:24 STA f:A1T4L
    // Overlapping static entry reached from 0xEFD410.
    case 0xEFD433: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xEFD434: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:26 LDA #$00EF
    case 0xEFD436: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x008FEF, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:27 STA f:A1B4
    case 0xEFD438: cpu.execute_instruction<0x8F>(0x004344, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:27 STA f:A1B4
    // Overlapping static entry reached from 0xEFD436.
    case 0xEFD439: cpu.execute_instruction<0x44>(0x000043, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:28 STA f:$4347
    case 0xEFD43C: cpu.execute_instruction<0x8F>(0x004347, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:29 LDA #$0010
    case 0xEFD440: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000C10, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:30 TSB HDMAEN_MIRROR
    case 0xEFD442: cpu.execute_instruction<0x0C>(0x00001F, 3); return true;
    // src/unknown/EF/EFEAC8-jp.asm:30 TSB HDMAEN_MIRROR
    // Overlapping static entry reached from 0xEFD440.
    case 0xEFD443: cpu.execute_instruction<0x1F>(0x20C200, 4); return true;
    // src/unknown/EF/EFEAC8-jp.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xEFD445: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFEAC8-jp.asm:32 RTL
    case 0xEFD447: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/EF/EFEB2A.asm (unresolved).
bool execute_unresolved_ef_efeb2a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/EF/EFEB2A.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xEFD455: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/EF/EFEB2A.asm:4 STZ HDMAEN_MIRROR
    case 0xEFD457: cpu.execute_instruction<0x9C>(0x00001F, 3); return true;
    // src/unknown/EF/EFEB2A.asm:5 LDA #$0080
    case 0xEFD45A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008F80, 3); return true;
    // src/unknown/EF/EFEB2A.asm:6 STA f:WH0
    case 0xEFD45C: cpu.execute_instruction<0x8F>(0x002126, 4); return true;
    // src/unknown/EF/EFEB2A.asm:6 STA f:WH0
    // Overlapping static entry reached from 0xEFD45A.
    case 0xEFD45D: cpu.execute_instruction<0x26>(0x000021, 2); return true;
    // src/unknown/EF/EFEB2A.asm:6 STA f:WH0
    // Overlapping static entry reached from 0xEFD45D.
    case 0xEFD45F: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/EF/EFEB2A.asm:7 DEC
    case 0xEFD460: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/EF/EFEB2A.asm:8 STA f:WH1
    case 0xEFD461: cpu.execute_instruction<0x8F>(0x002127, 4); return true;
    // src/unknown/EF/EFEB2A.asm:9 REP #PROC_FLAGS::ACCUM8
    case 0xEFD465: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/EF/EFEB2A.asm:10 RTL
    case 0xEFD467: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
