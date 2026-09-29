// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/unknown/C0/C06A1B.asm (unresolved).
bool execute_unresolved_c0_c06a1b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C06A1B.asm:3 BEGIN_C_FUNCTION
    case 0xC06A1B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C06A1B.asm:9 END_STACK_VARS
    case 0xC06A1D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C06A1B.asm:9 END_STACK_VARS
    case 0xC06A1E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C06A1B.asm:9 END_STACK_VARS
    case 0xC06A1F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06A1B.asm:9 END_STACK_VARS
    case 0xC06A20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06A1B.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC06A20.
    case 0xC06A22: cpu.execute_instruction<0xFF>(0x29685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C06A1B.asm:9 END_STACK_VARS
    case 0xC06A23: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C06A1B.asm:9 END_STACK_VARS
    case 0xC06A24: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C06A1B.asm:10 AND #$7FFF
    case 0xC06A25: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C06A1B.asm:10 AND #$7FFF
    // Overlapping static entry reached from 0xC06A22.
    case 0xC06A26: cpu.execute_instruction<0xFF>(0x14857F, 4); return true;
    // src/unknown/C0/C06A1B.asm:10 AND #$7FFF
    // Overlapping static entry reached from 0xC06A25.
    case 0xC06A27: cpu.execute_instruction<0x7F>(0xA91485, 4); return true;
    // src/unknown/C0/C06A1B.asm:11 STA @LOCAL02
    case 0xC06A28: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06A1B.asm:12 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    case 0xC06A2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06A1B.asm:12 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC06A27.
    case 0xC06A2B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06A1B.asm:12 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC06A2A.
    case 0xC06A2C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C06A1B.asm:12 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    case 0xC06A2D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06A1B.asm:12 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    case 0xC06A2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06A1B.asm:12 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC06A2F.
    case 0xC06A31: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C06A1B.asm:12 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL0A
    case 0xC06A32: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C06A1B.asm:13 LDA @LOCAL02
    case 0xC06A34: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C06A1B.asm:14 CLC
    case 0xC06A36: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06A1B.asm:15 ADC @VIRTUAL0A
    case 0xC06A37: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C06A1B.asm:16 STA @VIRTUAL0A
    case 0xC06A39: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C06A1B.asm:17 STA @VIRTUAL06
    case 0xC06A3B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C06A1B.asm:18 LDA @VIRTUAL0A+2
    case 0xC06A3D: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/unknown/C0/C06A1B.asm:19 STA @VIRTUAL06+2
    case 0xC06A3F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C06A1B.asm:20 LDA [@VIRTUAL06]
    case 0xC06A41: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C06A1B.asm:21 AND #$7FFF
    case 0xC06A43: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C06A1B.asm:21 AND #$7FFF
    // Overlapping static entry reached from 0xC06A43.
    case 0xC06A45: cpu.execute_instruction<0x7F>(0x162822, 4); return true;
    // src/unknown/C0/C06A1B.asm:22 JSL GET_EVENT_FLAG
    case 0xC06A46: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/unknown/C0/C06A1B.asm:22 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC06A45.
    case 0xC06A49: cpu.execute_instruction<0xC2>(0x0000AA, 2); return true;
    // src/unknown/C0/C06A1B.asm:23 TAX
    case 0xC06A4A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C06A1B.asm:24 LDA #0
    case 0xC06A4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C06A1B.asm:24 LDA #0
    // Overlapping static entry reached from 0xC06A4B.
    case 0xC06A4D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C06A1B.asm:25 STA @LOCAL01
    case 0xC06A4E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06A1B.asm:26 LDA [@VIRTUAL06]
    case 0xC06A50: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C06A1B.asm:27 CMP #EVENT_FLAG_UNSET
    case 0xC06A52: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C06A1B.asm:27 CMP #EVENT_FLAG_UNSET
    // Overlapping static entry reached from 0xC06A52.
    case 0xC06A54: cpu.execute_instruction<0x80>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C06A1B.asm:28 BLTEQ @UNKNOWN0
    case 0xC06A55: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C06A1B.asm:28 BLTEQ @UNKNOWN0
    case 0xC06A57: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C06A1B.asm:29 LDA #1
    case 0xC06A59: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C06A1B.asm:29 LDA #1
    // Overlapping static entry reached from 0xC06A59.
    case 0xC06A5B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C06A1B.asm:30 STA @LOCAL01
    case 0xC06A5C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06A1B.asm:32 LDA @LOCAL01
    case 0xC06A5E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06A1B.asm:33 STA @VIRTUAL02
    case 0xC06A60: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06A1B.asm:34 TXA
    case 0xC06A62: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06A1B.asm:35 CMP @VIRTUAL02
    case 0xC06A63: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C06A1B.asm:36 BNE @UNKNOWN1
    case 0xC06A65: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // src/unknown/C0/C06A1B.asm:37 LDY #2
    case 0xC06A67: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C0/C06A1B.asm:37 LDY #2
    // Overlapping static entry reached from 0xC06A67.
    case 0xC06A69: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C06A1B.asm:38 LDA [@VIRTUAL0A],Y
    case 0xC06A6A: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C0/C06A1B.asm:39 PHA
    case 0xC06A6C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C06A1B.asm:40 INY
    case 0xC06A6D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C06A1B.asm:41 INY
    case 0xC06A6E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C06A1B.asm:42 LDA [@VIRTUAL0A],Y
    case 0xC06A6F: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C0/C06A1B.asm:43 STA @VIRTUAL06+2
    case 0xC06A71: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C06A1B.asm:44 PLA
    case 0xC06A73: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C06A1B.asm:45 STA @VIRTUAL06
    case 0xC06A74: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C06A1B.asm:46 STA @LOCAL00
    case 0xC06A76: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C06A1B.asm:47 LDA @VIRTUAL06+2
    case 0xC06A78: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C06A1B.asm:48 STA @LOCAL00+2
    case 0xC06A7A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C06A1B.asm:49 LDA #0
    case 0xC06A7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C06A1B.asm:49 LDA #0
    // Overlapping static entry reached from 0xC06A7C.
    case 0xC06A7E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C06A1B.asm:50 JSL UNKNOWN_C064E3
    case 0xC06A7F: cpu.execute_instruction<0x22>(0xC064E3, 4); return true;
    // src/unknown/C0/C06A1B.asm:51 STZ LADDER_STAIRS_TILE_Y
    case 0xC06A83: cpu.execute_instruction<0x9C>(0x005DAA, 3); return true;
    // src/unknown/C0/C06A1B.asm:52 STZ LADDER_STAIRS_TILE_X
    case 0xC06A86: cpu.execute_instruction<0x9C>(0x005DA8, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C06A1B.asm:54 END_C_FUNCTION
    case 0xC06A89: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C06A1B.asm:54 END_C_FUNCTION
    case 0xC06A8A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06A8B.asm (unresolved).
bool execute_unresolved_c0_c06a8b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C06A8B.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC06A8B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C06A8B.asm:4 RTS
    case 0xC06A8D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06A8E.asm (unresolved).
bool execute_unresolved_c0_c06a8e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C06A8E.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC06A8E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C06A8E.asm:4 RTS
    case 0xC06A90: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06A91.asm (unresolved).
bool execute_unresolved_c0_c06a91_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C06A91.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC06A91: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C06A91.asm:4 TAY
    case 0xC06A93: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C06A91.asm:5 LDX #.LOWORD(GAME_STATE) + game_state::walking_style
    case 0xC06A94: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000083, 2); else cpu.execute_instruction<0xA2>(0x009883, 3); return true;
    // src/unknown/C0/C06A91.asm:5 LDX #.LOWORD(GAME_STATE) + game_state::walking_style
    // Overlapping static entry reached from 0xC06A94.
    case 0xC06A96: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06A91.asm:6 LDA __BSS_START__,X
    case 0xC06A97: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C06A91.asm:7 CMP #$0007
    case 0xC06A9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C06A91.asm:7 CMP #$0007
    // Overlapping static entry reached from 0xC06A9A.
    case 0xC06A9C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C06A91.asm:8 BEQ @UNKNOWN2
    case 0xC06A9D: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/unknown/C0/C06A91.asm:9 CMP #$0008
    case 0xC06A9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C0/C06A91.asm:9 CMP #$0008
    // Overlapping static entry reached from 0xC06A9F.
    case 0xC06AA1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C06A91.asm:10 BEQ @UNKNOWN2
    case 0xC06AA2: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/C0/C06A91.asm:11 CPY #$0000
    case 0xC06AA4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C0/C06A91.asm:11 CPY #$0000
    // Overlapping static entry reached from 0xC06AA4.
    case 0xC06AA6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C06A91.asm:12 BNE @UNKNOWN0
    case 0xC06AA7: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C0/C06A91.asm:13 LDA #$0007
    case 0xC06AA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C0/C06A91.asm:13 LDA #$0007
    // Overlapping static entry reached from 0xC06AA9.
    case 0xC06AAB: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C06A91.asm:14 STA __BSS_START__,X
    case 0xC06AAC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C06A91.asm:15 BRA @UNKNOWN1
    case 0xC06AAF: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C06A91.asm:17 LDA #$0008
    case 0xC06AB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C0/C06A91.asm:17 LDA #$0008
    // Overlapping static entry reached from 0xC06AB1.
    case 0xC06AB3: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C06A91.asm:18 STA __BSS_START__,X
    case 0xC06AB4: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C06A91.asm:20 LDX #.LOWORD(GAME_STATE) + game_state::leader_direction
    case 0xC06AB7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00007F, 2); else cpu.execute_instruction<0xA2>(0x00987F, 3); return true;
    // src/unknown/C0/C06A91.asm:20 LDX #.LOWORD(GAME_STATE) + game_state::leader_direction
    // Overlapping static entry reached from 0xC06AB7.
    case 0xC06AB9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06A91.asm:21 LDA __BSS_START__,X
    case 0xC06ABA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C06A91.asm:22 AND #$FFFE
    case 0xC06ABD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FE, 2); else cpu.execute_instruction<0x29>(0x00FFFE, 3); return true;
    // src/unknown/C0/C06A91.asm:22 AND #$FFFE
    // Overlapping static entry reached from 0xC06ABD.
    case 0xC06ABF: cpu.execute_instruction<0xFF>(0x00009D, 4); return true;
    // src/unknown/C0/C06A91.asm:23 STA __BSS_START__,X
    case 0xC06AC0: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C06A91.asm:24 LDA #$FFFF
    case 0xC06AC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C06A91.asm:24 LDA #$FFFF
    // Overlapping static entry reached from 0xC06AC3.
    case 0xC06AC5: cpu.execute_instruction<0xFF>(0x5DC48D, 4); return true;
    // src/unknown/C0/C06A91.asm:25 STA STAIRS_DIRECTION
    case 0xC06AC6: cpu.execute_instruction<0x8D>(0x005DC4, 3); return true;
    // src/unknown/C0/C06A91.asm:27 RTS
    case 0xC06AC9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06ACA.asm (unresolved).
bool execute_unresolved_c0_c06aca_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C06ACA.asm:3 BEGIN_C_FUNCTION
    case 0xC06ACA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C06ACA.asm:8 END_STACK_VARS
    case 0xC06ACC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C06ACA.asm:8 END_STACK_VARS
    case 0xC06ACD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C06ACA.asm:8 END_STACK_VARS
    case 0xC06ACE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06ACA.asm:8 END_STACK_VARS
    case 0xC06ACF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06ACA.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC06ACF.
    case 0xC06AD1: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C06ACA.asm:8 END_STACK_VARS
    case 0xC06AD2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C06ACA.asm:8 END_STACK_VARS
    case 0xC06AD3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C06ACA.asm:9 STA @LOCAL01
    case 0xC06AD4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06ACA.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC06AD1.
    case 0xC06AD5: cpu.execute_instruction<0x12>(0x0000AD, 2); return true;
    // src/unknown/C0/C06ACA.asm:10 LDA PLAYER_HAS_DONE_SOMETHING_THIS_FRAME
    case 0xC06AD6: cpu.execute_instruction<0xAD>(0x000A34, 3); return true;
    // src/unknown/C0/C06ACA.asm:10 LDA PLAYER_HAS_DONE_SOMETHING_THIS_FRAME
    // Overlapping static entry reached from 0xC06AD5.
    case 0xC06AD7: cpu.execute_instruction<0x34>(0x00000A, 2); return true;
    // src/unknown/C0/C06ACA.asm:11 BEQ @UNKNOWN0
    case 0xC06AD9: cpu.execute_instruction<0xF0>(0x000044, 2); return true;
    // src/unknown/C0/C06ACA.asm:12 LDA GAME_STATE + game_state::unknownB0
    case 0xC06ADB: cpu.execute_instruction<0xAD>(0x0098A5, 3); return true;
    // src/unknown/C0/C06ACA.asm:13 CMP #2
    case 0xC06ADE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C06ACA.asm:13 CMP #2
    // Overlapping static entry reached from 0xC06ADE.
    case 0xC06AE0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C06ACA.asm:14 BEQ @UNKNOWN0
    case 0xC06AE1: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/unknown/C0/C06ACA.asm:15 LDA PENDING_INTERACTIONS
    case 0xC06AE3: cpu.execute_instruction<0xAD>(0x005D9A, 3); return true;
    // src/unknown/C0/C06ACA.asm:16 BNE @UNKNOWN0
    case 0xC06AE6: cpu.execute_instruction<0xD0>(0x000037, 2); return true;
    // src/unknown/C0/C06ACA.asm:17 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC06AE8: cpu.execute_instruction<0xAD>(0x004DBA, 3); return true;
    // src/unknown/C0/C06ACA.asm:18 ORA BATTLE_SWIRL_COUNTDOWN
    case 0xC06AEB: cpu.execute_instruction<0x0D>(0x005D60, 3); return true;
    // src/unknown/C0/C06ACA.asm:19 BNE @UNKNOWN0
    case 0xC06AEE: cpu.execute_instruction<0xD0>(0x00002F, 2); return true;
    // src/unknown/C0/C06ACA.asm:20 LDA @LOCAL01
    case 0xC06AF0: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06ACA.asm:21 AND #$7FFF
    case 0xC06AF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C06ACA.asm:21 AND #$7FFF
    // Overlapping static entry reached from 0xC06AF2.
    case 0xC06AF4: cpu.execute_instruction<0x7F>(0xA91285, 4); return true;
    // src/unknown/C0/C06ACA.asm:22 STA @LOCAL01
    case 0xC06AF5: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06ACA.asm:23 LDA #1
    case 0xC06AF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C06ACA.asm:23 LDA #1
    // Overlapping static entry reached from 0xC06AF4.
    case 0xC06AF8: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C06ACA.asm:23 LDA #1
    // Overlapping static entry reached from 0xC06AF7.
    case 0xC06AF9: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C06ACA.asm:24 STA USING_DOOR
    case 0xC06AFA: cpu.execute_instruction<0x8D>(0x005DC2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06ACA.asm:25 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL06
    case 0xC06AFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06ACA.asm:25 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC06AFD.
    case 0xC06AFF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C06ACA.asm:25 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL06
    case 0xC06B00: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06ACA.asm:25 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL06
    case 0xC06B02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06ACA.asm:25 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC06B02.
    case 0xC06B04: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C06ACA.asm:25 LOADPTR DOOR_DATA & $FF0000, @VIRTUAL06
    case 0xC06B05: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C06ACA.asm:26 LDA @LOCAL01
    case 0xC06B07: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06ACA.asm:27 CLC
    case 0xC06B09: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06ACA.asm:28 ADC @VIRTUAL06
    case 0xC06B0A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C06ACA.asm:29 STA @VIRTUAL06
    case 0xC06B0C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C06ACA.asm:30 STA @LOCAL00
    case 0xC06B0E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C06ACA.asm:31 LDA @VIRTUAL06+2
    case 0xC06B10: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C0/C06ACA.asm:32 STA @LOCAL00+2
    case 0xC06B12: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C06ACA.asm:33 LDA #2
    case 0xC06B14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C06ACA.asm:33 LDA #2
    // Overlapping static entry reached from 0xC06B14.
    case 0xC06B16: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C06ACA.asm:34 JSL UNKNOWN_C064E3
    case 0xC06B17: cpu.execute_instruction<0x22>(0xC064E3, 4); return true;
    // src/unknown/C0/C06ACA.asm:35 JSL UNKNOWN_C07C5B
    case 0xC06B1B: cpu.execute_instruction<0x22>(0xC07C5B, 4); return true;
    // src/unknown/C0/C06ACA.asm:37 PLD
    case 0xC06B1F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C06ACA.asm:38 RTS
    case 0xC06B20: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06B3D.asm (unresolved).
bool execute_unresolved_c0_c06b3d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C06B3D.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC06B3D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C06B3D.asm:8 END_STACK_VARS
    case 0xC06B3F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C06B3D.asm:8 END_STACK_VARS
    case 0xC06B40: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06B3D.asm:8 END_STACK_VARS
    case 0xC06B41: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06B3D.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC06B41.
    case 0xC06B43: cpu.execute_instruction<0xFF>(0x00A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C06B3D.asm:8 END_STACK_VARS
    case 0xC06B44: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:9 LDX #0
    case 0xC06B45: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C06B3D.asm:9 LDX #0
    // Overlapping static entry reached from 0xC06B45.
    case 0xC06B47: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C06B3D.asm:10 STX @LOCAL02
    case 0xC06B48: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C06B3D.asm:11 TXY
    case 0xC06B4A: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:12 STY @LOCAL01
    case 0xC06B4B: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C06B3D.asm:13 BRA @UNKNOWN2
    case 0xC06B4D: cpu.execute_instruction<0x80>(0x000035, 2); return true;
    // src/unknown/C0/C06B3D.asm:15 JSL UNKNOWN_C06537
    case 0xC06B4F: cpu.execute_instruction<0x22>(0xC06537, 4); return true;
    // src/unknown/C0/C06B3D.asm:16 CMP #10
    case 0xC06B53: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/unknown/C0/C06B3D.asm:16 CMP #10
    // Overlapping static entry reached from 0xC06B53.
    case 0xC06B55: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C06B3D.asm:17 BNE @UNKNOWN1
    case 0xC06B56: cpu.execute_instruction<0xD0>(0x00001D, 2); return true;
    // src/unknown/C0/C06B3D.asm:18 JSL UNKNOWN_C0654E
    case 0xC06B58: cpu.execute_instruction<0x22>(0xC0654E, 4); return true;
    // src/unknown/C0/C06B3D.asm:19 LDY @LOCAL01
    case 0xC06B5C: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C06B3D.asm:20 TYA
    case 0xC06B5E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:21 ASL
    case 0xC06B5F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:22 ASL
    case 0xC06B60: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:23 CLC
    case 0xC06B61: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:24 ADC #.LOWORD(DOOR_INTERACTIONS)
    case 0xC06B62: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000058, 2); else cpu.execute_instruction<0x69>(0x005E58, 3); return true;
    // src/unknown/C0/C06B3D.asm:24 ADC #.LOWORD(DOOR_INTERACTIONS)
    // Overlapping static entry reached from 0xC06B62.
    case 0xC06B64: cpu.execute_instruction<0x5E>(0x00A5A8, 3); return true;
    // src/unknown/C0/C06B3D.asm:25 TAY
    case 0xC06B65: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C06B3D.asm:26 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC06B66: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C06B3D.asm:26 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC06B64.
    case 0xC06B67: cpu.execute_instruction<0x06>(0x000099, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C06B3D.asm:26 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC06B68: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C06B3D.asm:26 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC06B67.
    case 0xC06B69: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C06B3D.asm:26 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC06B6B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C06B3D.asm:26 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC06B6D: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C0/C06B3D.asm:27 LDY @LOCAL01
    case 0xC06B70: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C06B3D.asm:28 INY
    case 0xC06B72: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:29 STY @LOCAL01
    case 0xC06B73: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C0/C06B3D.asm:31 LDA CURRENT_QUEUED_INTERACTION
    case 0xC06B75: cpu.execute_instruction<0xAD>(0x005E02, 3); return true;
    // src/unknown/C0/C06B3D.asm:32 INC
    case 0xC06B78: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:33 AND #$0003
    case 0xC06B79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C06B3D.asm:33 AND #$0003
    // Overlapping static entry reached from 0xC06B79.
    case 0xC06B7B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C06B3D.asm:34 STA CURRENT_QUEUED_INTERACTION
    case 0xC06B7C: cpu.execute_instruction<0x8D>(0x005E02, 3); return true;
    // src/unknown/C0/C06B3D.asm:35 LDX @LOCAL02
    case 0xC06B7F: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C06B3D.asm:36 INX
    case 0xC06B81: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:37 STX @LOCAL02
    case 0xC06B82: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C06B3D.asm:39 STX @VIRTUAL02
    case 0xC06B84: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C06B3D.asm:40 LDA #4
    case 0xC06B86: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C0/C06B3D.asm:40 LDA #4
    // Overlapping static entry reached from 0xC06B86.
    case 0xC06B88: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C06B3D.asm:41 CLC
    case 0xC06B89: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:42 SBC @VIRTUAL02
    case 0xC06B8A: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C0/C06B3D.asm:43 BRANCHLTEQS @UNKNOWN5
    case 0xC06B8C: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C0/C06B3D.asm:43 BRANCHLTEQS @UNKNOWN5
    case 0xC06B8E: cpu.execute_instruction<0x10>(0x00000C, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C0/C06B3D.asm:43 BRANCHLTEQS @UNKNOWN5
    case 0xC06B90: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C0/C06B3D.asm:43 BRANCHLTEQS @UNKNOWN5
    case 0xC06B92: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // src/unknown/C0/C06B3D.asm:44 LDA CURRENT_QUEUED_INTERACTION
    case 0xC06B94: cpu.execute_instruction<0xAD>(0x005E02, 3); return true;
    // src/unknown/C0/C06B3D.asm:45 CMP NEXT_QUEUED_INTERACTION
    case 0xC06B97: cpu.execute_instruction<0xCD>(0x005E04, 3); return true;
    // src/unknown/C0/C06B3D.asm:46 BNE @UNKNOWN0
    case 0xC06B9A: cpu.execute_instruction<0xD0>(0x0000B3, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C06B3D.asm:48 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC06B9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C06B3D.asm:48 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC06B9C.
    case 0xC06B9E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C06B3D.asm:48 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC06B9F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C06B3D.asm:48 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC06BA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C06B3D.asm:48 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC06BA1.
    case 0xC06BA3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C06B3D.asm:48 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC06BA4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C0/C06B3D.asm:49 LDY @LOCAL01
    case 0xC06BA6: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C06B3D.asm:50 TYA
    case 0xC06BA8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:51 ASL
    case 0xC06BA9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:52 ASL
    case 0xC06BAA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:53 CLC
    case 0xC06BAB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:54 ADC #.LOWORD(DOOR_INTERACTIONS)
    case 0xC06BAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000058, 2); else cpu.execute_instruction<0x69>(0x005E58, 3); return true;
    // src/unknown/C0/C06B3D.asm:54 ADC #.LOWORD(DOOR_INTERACTIONS)
    // Overlapping static entry reached from 0xC06BAC.
    case 0xC06BAE: cpu.execute_instruction<0x5E>(0x00A5A8, 3); return true;
    // src/unknown/C0/C06B3D.asm:55 TAY
    case 0xC06BAF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C06B3D.asm:56 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC06BB0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C0/C06B3D.asm:56 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC06BAE.
    case 0xC06BB1: cpu.execute_instruction<0x06>(0x000099, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C06B3D.asm:56 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC06BB2: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C0/C06B3D.asm:56 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC06BB1.
    case 0xC06BB3: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C0/C06B3D.asm:56 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC06BB5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C0/C06B3D.asm:56 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC06BB7: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C0/C06B3D.asm:57 LDX #0
    case 0xC06BBA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C06B3D.asm:57 LDX #0
    // Overlapping static entry reached from 0xC06BBA.
    case 0xC06BBC: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C06B3D.asm:58 STX @LOCAL02
    case 0xC06BBD: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C06B3D.asm:59 BRA @UNKNOWN7
    case 0xC06BBF: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C06B3D.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC06BC1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C06B3D.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC06BC3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C06B3D.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC06BC5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C06B3D.asm:61 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC06BC7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C06B3D.asm:62 LDA #10
    case 0xC06BC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C0/C06B3D.asm:62 LDA #10
    // Overlapping static entry reached from 0xC06BC9.
    case 0xC06BCB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C06B3D.asm:63 JSL UNKNOWN_C064E3
    case 0xC06BCC: cpu.execute_instruction<0x22>(0xC064E3, 4); return true;
    // src/unknown/C0/C06B3D.asm:64 LDX @LOCAL02
    case 0xC06BD0: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C06B3D.asm:65 INX
    case 0xC06BD2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:66 STX @LOCAL02
    case 0xC06BD3: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C06B3D.asm:68 TXA
    case 0xC06BD5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:69 ASL
    case 0xC06BD6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:70 ASL
    case 0xC06BD7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:71 CLC
    case 0xC06BD8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06B3D.asm:72 ADC #.LOWORD(DOOR_INTERACTIONS)
    case 0xC06BD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000058, 2); else cpu.execute_instruction<0x69>(0x005E58, 3); return true;
    // src/unknown/C0/C06B3D.asm:72 ADC #.LOWORD(DOOR_INTERACTIONS)
    // Overlapping static entry reached from 0xC06BD9.
    case 0xC06BDB: cpu.execute_instruction<0x5E>(0x00B9A8, 3); return true;
    // src/unknown/C0/C06B3D.asm:73 TAY
    case 0xC06BDC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C06B3D.asm:74 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC06BDD: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C06B3D.asm:74 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC06BDB.
    case 0xC06BDE: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C06B3D.asm:74 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC06BE0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C06B3D.asm:74 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC06BE2: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C06B3D.asm:74 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC06BE5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C06B3D.asm:75 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC06BE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C0/C06B3D.asm:75 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC06BE7.
    case 0xC06BE9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C0/C06B3D.asm:75 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC06BEA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C06B3D.asm:75 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC06BEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C0/C06B3D.asm:75 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC06BEC.
    case 0xC06BEE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C0/C06B3D.asm:75 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC06BEF: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/unknown/C0/C06B3D.asm:76 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06BF1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/unknown/C0/C06B3D.asm:76 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06BF3: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/unknown/C0/C06B3D.asm:76 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06BF5: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/unknown/C0/C06B3D.asm:76 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06BF7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/unknown/C0/C06B3D.asm:76 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06BF9: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/unknown/C0/C06B3D.asm:77 BNE @UNKNOWN6
    case 0xC06BFB: cpu.execute_instruction<0xD0>(0x0000C4, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C06B3D.asm:78 END_C_FUNCTION
    case 0xC06BFD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C06B3D.asm:78 END_C_FUNCTION
    case 0xC06BFE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06E1A.asm (unresolved).
bool execute_unresolved_c0_c06e1a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C06E1A.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC06E1A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C06E1A.asm:4 LDA #$FFFF
    case 0xC06E1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C06E1A.asm:4 LDA #$FFFF
    // Overlapping static entry reached from 0xC06E1C.
    case 0xC06E1E: cpu.execute_instruction<0xFF>(0x5DC48D, 4); return true;
    // src/unknown/C0/C06E1A.asm:5 STA STAIRS_DIRECTION
    case 0xC06E1F: cpu.execute_instruction<0x8D>(0x005DC4, 3); return true;
    // src/unknown/C0/C06E1A.asm:6 STZ GAME_STATE+game_state::walking_style
    case 0xC06E22: cpu.execute_instruction<0x9C>(0x009883, 3); return true;
    // src/unknown/C0/C06E1A.asm:7 STZ PLAYER_MOVEMENT_FLAGS
    case 0xC06E25: cpu.execute_instruction<0x9C>(0x005D56, 3); return true;
    // src/unknown/C0/C06E1A.asm:8 STZ UNREAD_7E5DBA
    case 0xC06E28: cpu.execute_instruction<0x9C>(0x005DBA, 3); return true;
    // src/unknown/C0/C06E1A.asm:9 RTL
    case 0xC06E2B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06E2C.asm (unresolved).
bool execute_unresolved_c0_c06e2c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C06E2C.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC06E2C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C06E2C.asm:4 LDA #WALKING_STYLE::ESCALATOR
    case 0xC06E2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C0/C06E2C.asm:4 LDA #WALKING_STYLE::ESCALATOR
    // Overlapping static entry reached from 0xC06E2E.
    case 0xC06E30: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C06E2C.asm:5 STA GAME_STATE+game_state::walking_style
    case 0xC06E31: cpu.execute_instruction<0x8D>(0x009883, 3); return true;
    // src/unknown/C0/C06E2C.asm:6 STZ PLAYER_MOVEMENT_FLAGS
    case 0xC06E34: cpu.execute_instruction<0x9C>(0x005D56, 3); return true;
    // src/unknown/C0/C06E2C.asm:7 LDA ESCALATOR_NEW_X
    case 0xC06E37: cpu.execute_instruction<0xAD>(0x005DD0, 3); return true;
    // src/unknown/C0/C06E2C.asm:8 STA GAME_STATE+game_state::leader_x_coord
    case 0xC06E3A: cpu.execute_instruction<0x8D>(0x009877, 3); return true;
    // src/unknown/C0/C06E2C.asm:9 LDA ESCALATOR_NEW_Y
    case 0xC06E3D: cpu.execute_instruction<0xAD>(0x005DD2, 3); return true;
    // src/unknown/C0/C06E2C.asm:10 STA GAME_STATE+game_state::leader_y_coord
    case 0xC06E40: cpu.execute_instruction<0x8D>(0x00987B, 3); return true;
    // src/unknown/C0/C06E2C.asm:11 STZ GAME_STATE + game_state::unknown84
    case 0xC06E43: cpu.execute_instruction<0x9C>(0x009879, 3); return true;
    // src/unknown/C0/C06E2C.asm:12 STZ GAME_STATE + game_state::unknown80
    case 0xC06E46: cpu.execute_instruction<0x9C>(0x009875, 3); return true;
    // src/unknown/C0/C06E2C.asm:13 RTL
    case 0xC06E49: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06E4A.asm (unresolved).
bool execute_unresolved_c0_c06e4a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C06E4A.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC06E4A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C06E4A.asm:4 LDA #$FFFF
    case 0xC06E4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C06E4A.asm:4 LDA #$FFFF
    // Overlapping static entry reached from 0xC06E4C.
    case 0xC06E4E: cpu.execute_instruction<0xFF>(0x5DC48D, 4); return true;
    // src/unknown/C0/C06E4A.asm:5 STA STAIRS_DIRECTION
    case 0xC06E4F: cpu.execute_instruction<0x8D>(0x005DC4, 3); return true;
    // src/unknown/C0/C06E4A.asm:6 STZ GAME_STATE+game_state::walking_style
    case 0xC06E52: cpu.execute_instruction<0x9C>(0x009883, 3); return true;
    // src/unknown/C0/C06E4A.asm:7 STZ PLAYER_MOVEMENT_FLAGS
    case 0xC06E55: cpu.execute_instruction<0x9C>(0x005D56, 3); return true;
    // src/unknown/C0/C06E4A.asm:8 STZ UNREAD_7E5DBA
    case 0xC06E58: cpu.execute_instruction<0x9C>(0x005DBA, 3); return true;
    // src/unknown/C0/C06E4A.asm:9 LDA ESCALATOR_NEW_X
    case 0xC06E5B: cpu.execute_instruction<0xAD>(0x005DD0, 3); return true;
    // src/unknown/C0/C06E4A.asm:10 STA GAME_STATE+game_state::leader_x_coord
    case 0xC06E5E: cpu.execute_instruction<0x8D>(0x009877, 3); return true;
    // src/unknown/C0/C06E4A.asm:11 LDA ESCALATOR_NEW_Y
    case 0xC06E61: cpu.execute_instruction<0xAD>(0x005DD2, 3); return true;
    // src/unknown/C0/C06E4A.asm:12 STA GAME_STATE+game_state::leader_y_coord
    case 0xC06E64: cpu.execute_instruction<0x8D>(0x00987B, 3); return true;
    // src/unknown/C0/C06E4A.asm:13 STZ GAME_STATE + game_state::unknown84
    case 0xC06E67: cpu.execute_instruction<0x9C>(0x009879, 3); return true;
    // src/unknown/C0/C06E4A.asm:14 STZ GAME_STATE + game_state::unknown80
    case 0xC06E6A: cpu.execute_instruction<0x9C>(0x009875, 3); return true;
    // src/unknown/C0/C06E4A.asm:15 RTL
    case 0xC06E6D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06E6E.asm (unresolved).
bool execute_unresolved_c0_c06e6e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C06E6E.asm:3 BEGIN_C_FUNCTION
    case 0xC06E6E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C06E6E.asm:14 END_STACK_VARS
    case 0xC06E70: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C06E6E.asm:14 END_STACK_VARS
    case 0xC06E71: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C06E6E.asm:14 END_STACK_VARS
    case 0xC06E72: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06E6E.asm:14 END_STACK_VARS
    case 0xC06E73: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06E6E.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC06E73.
    case 0xC06E75: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C06E6E.asm:14 END_STACK_VARS
    case 0xC06E76: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C06E6E.asm:14 END_STACK_VARS
    case 0xC06E77: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:15 STY @LOCAL05
    case 0xC06E78: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/unknown/C0/C06E6E.asm:15 STY @LOCAL05
    // Overlapping static entry reached from 0xC06E75.
    case 0xC06E79: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:16 STX @LOCAL04
    case 0xC06E7A: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C0/C06E6E.asm:17 STA @LOCAL03
    case 0xC06E7C: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C06E6E.asm:18 LDA DEMO_FRAMES_LEFT
    case 0xC06E7E: cpu.execute_instruction<0xAD>(0x000081, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C06E6E.asm:19 BNEL @UNKNOWN4
    case 0xC06E81: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C06E6E.asm:19 BNEL @UNKNOWN4
    case 0xC06E83: cpu.execute_instruction<0x4C>(0x006F80, 3); return true;
    // src/unknown/C0/C06E6E.asm:20 JSL UNKNOWN_C48C69
    case 0xC06E86: cpu.execute_instruction<0x22>(0xC48C69, 4); return true;
    // src/unknown/C0/C06E6E.asm:21 LDX @LOCAL04
    case 0xC06E8A: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C06E6E.asm:22 TXA
    case 0xC06E8C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:23 ASL
    case 0xC06E8D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:24 ASL
    case 0xC06E8E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:25 ASL
    case 0xC06E8F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:26 TAX
    case 0xC06E90: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:27 STX @LOCAL02
    case 0xC06E91: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C0/C06E6E.asm:28 LDY @LOCAL05
    case 0xC06E93: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C0/C06E6E.asm:29 TYA
    case 0xC06E95: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:30 ASL
    case 0xC06E96: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:31 ASL
    case 0xC06E97: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:32 ASL
    case 0xC06E98: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:33 STA @LOCAL01
    case 0xC06E99: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06E6E.asm:34 LDA @LOCAL03
    case 0xC06E9B: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C06E6E.asm:35 AND #$8000
    case 0xC06E9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C06E6E.asm:35 AND #$8000
    // Overlapping static entry reached from 0xC06E9D.
    case 0xC06E9F: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C06E6E.asm:36 BEQ @UNKNOWN2
    case 0xC06EA0: cpu.execute_instruction<0xF0>(0x000073, 2); return true;
    // src/unknown/C0/C06E6E.asm:37 LDY #.LOWORD(GAME_STATE) + game_state::walking_style
    case 0xC06EA2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000083, 2); else cpu.execute_instruction<0xA0>(0x009883, 3); return true;
    // src/unknown/C0/C06E6E.asm:37 LDY #.LOWORD(GAME_STATE) + game_state::walking_style
    // Overlapping static entry reached from 0xC06EA2.
    case 0xC06EA4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:38 LDA __BSS_START__,Y
    case 0xC06EA5: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C06E6E.asm:39 CMP #12
    case 0xC06EA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/unknown/C0/C06E6E.asm:39 CMP #12
    // Overlapping static entry reached from 0xC06EA8.
    case 0xC06EAA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C06E6E.asm:40 BNEL @UNKNOWN4
    case 0xC06EAB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C06E6E.asm:40 BNEL @UNKNOWN4
    case 0xC06EAD: cpu.execute_instruction<0x4C>(0x006F80, 3); return true;
    // src/unknown/C0/C06E6E.asm:41 LDA #0
    case 0xC06EB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C06E6E.asm:41 LDA #0
    // Overlapping static entry reached from 0xC06EB0.
    case 0xC06EB2: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C06E6E.asm:42 STA __BSS_START__,Y
    case 0xC06EB3: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C06E6E.asm:43 LDA #3
    case 0xC06EB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C06E6E.asm:43 LDA #3
    // Overlapping static entry reached from 0xC06EB6.
    case 0xC06EB8: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C06E6E.asm:44 STA PLAYER_MOVEMENT_FLAGS
    case 0xC06EB9: cpu.execute_instruction<0x8D>(0x005D56, 3); return true;
    // src/unknown/C0/C06E6E.asm:45 LDA ESCALATOR_ENTRANCE_DIRECTION
    case 0xC06EBC: cpu.execute_instruction<0xAD>(0x005DC6, 3); return true;
    // src/unknown/C0/C06E6E.asm:46 XBA
    case 0xC06EBF: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:47 AND #$00FF
    case 0xC06EC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C06E6E.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC06EC0.
    case 0xC06EC2: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C06E6E.asm:48 ASL
    case 0xC06EC3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:49 STA @VIRTUAL02
    case 0xC06EC4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C06E6E.asm:50 TXA
    case 0xC06EC6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:51 LDX @VIRTUAL02
    case 0xC06EC7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C06E6E.asm:52 CLC
    case 0xC06EC9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:53 ADC f:UNKNOWN_C06E02+8,X
    case 0xC06ECA: cpu.execute_instruction<0x7F>(0xC06E0A, 4); return true;
    // src/unknown/C0/C06E6E.asm:54 STA @VIRTUAL04
    case 0xC06ECE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C06E6E.asm:55 LDA @LOCAL01
    case 0xC06ED0: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06E6E.asm:56 STA @LOCAL00
    case 0xC06ED2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C06E6E.asm:57 LDY @VIRTUAL04
    case 0xC06ED4: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C0/C06E6E.asm:58 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC06ED6: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C06E6E.asm:59 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC06ED9: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C06E6E.asm:60 JSL UNKNOWN_C48D58
    case 0xC06EDC: cpu.execute_instruction<0x22>(0xC48D58, 4); return true;
    // src/unknown/C0/C06E6E.asm:61 TAY
    case 0xC06EE0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:62 STY @LOCAL05
    case 0xC06EE1: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/unknown/C0/C06E6E.asm:63 LDX #16
    case 0xC06EE3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/unknown/C0/C06E6E.asm:63 LDX #16
    // Overlapping static entry reached from 0xC06EE3.
    case 0xC06EE5: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C06E6E.asm:64 STX @LOCAL04
    case 0xC06EE6: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C0/C06E6E.asm:65 LDX @VIRTUAL02
    case 0xC06EE8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C06E6E.asm:66 LDA f:UNKNOWN_C06E02+16,X
    case 0xC06EEA: cpu.execute_instruction<0xBF>(0xC06E12, 4); return true;
    // src/unknown/C0/C06E6E.asm:67 LDX @LOCAL04
    case 0xC06EEE: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C06E6E.asm:68 JSL UNKNOWN_C48E6B
    case 0xC06EF0: cpu.execute_instruction<0x22>(0xC48E6B, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06E6E.asm:69 LOADPTR UNKNOWN_C06E4A, @LOCAL00
    case 0xC06EF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x006E4A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06E6E.asm:69 LOADPTR UNKNOWN_C06E4A, @LOCAL00
    // Overlapping static entry reached from 0xC06EF4.
    case 0xC06EF6: cpu.execute_instruction<0x6E>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C06E6E.asm:69 LOADPTR UNKNOWN_C06E4A, @LOCAL00
    case 0xC06EF7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06E6E.asm:69 LOADPTR UNKNOWN_C06E4A, @LOCAL00
    case 0xC06EF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06E6E.asm:69 LOADPTR UNKNOWN_C06E4A, @LOCAL00
    // Overlapping static entry reached from 0xC06EF9.
    case 0xC06EFB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C06E6E.asm:69 LOADPTR UNKNOWN_C06E4A, @LOCAL00
    case 0xC06EFC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C06E6E.asm:70 LDY @LOCAL05
    case 0xC06EFE: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C0/C06E6E.asm:71 TYA
    case 0xC06F00: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:72 INC
    case 0xC06F01: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:73 JSL SCHEDULE_OVERWORLD_TASK
    case 0xC06F02: cpu.execute_instruction<0x22>(0xC0DBE6, 4); return true;
    // src/unknown/C0/C06E6E.asm:74 JSL UNKNOWN_C48E95
    case 0xC06F06: cpu.execute_instruction<0x22>(0xC48E95, 4); return true;
    // src/unknown/C0/C06E6E.asm:75 STZ ESCALATOR_ENTRANCE_DIRECTION
    case 0xC06F0A: cpu.execute_instruction<0x9C>(0x005DC6, 3); return true;
    // src/unknown/C0/C06E6E.asm:76 LDA #1
    case 0xC06F0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C06E6E.asm:76 LDA #1
    // Overlapping static entry reached from 0xC06F0D.
    case 0xC06F0F: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C06E6E.asm:77 STA UNREAD_7E5DBA
    case 0xC06F10: cpu.execute_instruction<0x8D>(0x005DBA, 3); return true;
    // src/unknown/C0/C06E6E.asm:78 BRA @UNKNOWN3
    case 0xC06F13: cpu.execute_instruction<0x80>(0x00005B, 2); return true;
    // src/unknown/C0/C06E6E.asm:80 LDA GAME_STATE+game_state::walking_style
    case 0xC06F15: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/unknown/C0/C06E6E.asm:81 CMP #WALKING_STYLE::ESCALATOR
    case 0xC06F18: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/unknown/C0/C06E6E.asm:81 CMP #WALKING_STYLE::ESCALATOR
    // Overlapping static entry reached from 0xC06F18.
    case 0xC06F1A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C06E6E.asm:82 BEQ @UNKNOWN4
    case 0xC06F1B: cpu.execute_instruction<0xF0>(0x000063, 2); return true;
    // src/unknown/C0/C06E6E.asm:83 LDA #1
    case 0xC06F1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C06E6E.asm:83 LDA #1
    // Overlapping static entry reached from 0xC06F1D.
    case 0xC06F1F: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C06E6E.asm:84 STA UNREAD_7E5DBA
    case 0xC06F20: cpu.execute_instruction<0x8D>(0x005DBA, 3); return true;
    // src/unknown/C0/C06E6E.asm:85 LDA @LOCAL03
    case 0xC06F23: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C06E6E.asm:86 STA ESCALATOR_ENTRANCE_DIRECTION
    case 0xC06F25: cpu.execute_instruction<0x8D>(0x005DC6, 3); return true;
    // src/unknown/C0/C06E6E.asm:87 XBA
    case 0xC06F28: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:88 AND #$00FF
    case 0xC06F29: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C06E6E.asm:88 AND #$00FF
    // Overlapping static entry reached from 0xC06F29.
    case 0xC06F2B: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C06E6E.asm:89 ASL
    case 0xC06F2C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:90 STA @LOCAL03
    case 0xC06F2D: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C06E6E.asm:91 TAX
    case 0xC06F2F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:92 LDA f:UNKNOWN_C06E02+16,X
    case 0xC06F30: cpu.execute_instruction<0xBF>(0xC06E12, 4); return true;
    // src/unknown/C0/C06E6E.asm:93 STA GAME_STATE+game_state::leader_direction
    case 0xC06F34: cpu.execute_instruction<0x8D>(0x00987F, 3); return true;
    // src/unknown/C0/C06E6E.asm:94 LDA #3
    case 0xC06F37: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C06E6E.asm:94 LDA #3
    // Overlapping static entry reached from 0xC06F37.
    case 0xC06F39: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C06E6E.asm:95 STA PLAYER_MOVEMENT_FLAGS
    case 0xC06F3A: cpu.execute_instruction<0x8D>(0x005D56, 3); return true;
    // src/unknown/C0/C06E6E.asm:96 LDA @LOCAL03
    case 0xC06F3D: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C06E6E.asm:97 PHA
    case 0xC06F3F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:98 LDX @LOCAL02
    case 0xC06F40: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C0/C06E6E.asm:99 TXA
    case 0xC06F42: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:100 PLX
    case 0xC06F43: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:101 CLC
    case 0xC06F44: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:102 ADC f:UNKNOWN_C06E02,X
    case 0xC06F45: cpu.execute_instruction<0x7F>(0xC06E02, 4); return true;
    // src/unknown/C0/C06E6E.asm:103 STA @VIRTUAL04
    case 0xC06F49: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C06E6E.asm:104 LDA @LOCAL01
    case 0xC06F4B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06E6E.asm:105 STA @LOCAL00
    case 0xC06F4D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C06E6E.asm:106 LDY @VIRTUAL04
    case 0xC06F4F: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C0/C06E6E.asm:107 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC06F51: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C06E6E.asm:108 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC06F54: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C06E6E.asm:109 JSL UNKNOWN_C48D58
    case 0xC06F57: cpu.execute_instruction<0x22>(0xC48D58, 4); return true;
    // src/unknown/C0/C06E6E.asm:110 TAX
    case 0xC06F5B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06E6E.asm:111 LOADPTR UNKNOWN_C06E2C, @LOCAL00
    case 0xC06F5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002C, 2); else cpu.execute_instruction<0xA9>(0x006E2C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06E6E.asm:111 LOADPTR UNKNOWN_C06E2C, @LOCAL00
    // Overlapping static entry reached from 0xC06F5C.
    case 0xC06F5E: cpu.execute_instruction<0x6E>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C06E6E.asm:111 LOADPTR UNKNOWN_C06E2C, @LOCAL00
    case 0xC06F5F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06E6E.asm:111 LOADPTR UNKNOWN_C06E2C, @LOCAL00
    case 0xC06F61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06E6E.asm:111 LOADPTR UNKNOWN_C06E2C, @LOCAL00
    // Overlapping static entry reached from 0xC06F61.
    case 0xC06F63: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C06E6E.asm:111 LOADPTR UNKNOWN_C06E2C, @LOCAL00
    case 0xC06F64: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C06E6E.asm:112 TXA
    case 0xC06F66: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:113 INC
    case 0xC06F67: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C06E6E.asm:114 JSL SCHEDULE_OVERWORLD_TASK
    case 0xC06F68: cpu.execute_instruction<0x22>(0xC0DBE6, 4); return true;
    // src/unknown/C0/C06E6E.asm:115 JSL UNKNOWN_C48E95
    case 0xC06F6C: cpu.execute_instruction<0x22>(0xC48E95, 4); return true;
    // src/unknown/C0/C06E6E.asm:117 LDA @VIRTUAL04
    case 0xC06F70: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C06E6E.asm:118 STA ESCALATOR_NEW_X
    case 0xC06F72: cpu.execute_instruction<0x8D>(0x005DD0, 3); return true;
    // src/unknown/C0/C06E6E.asm:119 LDA @LOCAL01
    case 0xC06F75: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06E6E.asm:120 STA ESCALATOR_NEW_Y
    case 0xC06F77: cpu.execute_instruction<0x8D>(0x005DD2, 3); return true;
    // src/unknown/C0/C06E6E.asm:121 LDA #.LOWORD(-1)
    case 0xC06F7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C06E6E.asm:121 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC06F7A.
    case 0xC06F7C: cpu.execute_instruction<0xFF>(0x5DC48D, 4); return true;
    // src/unknown/C0/C06E6E.asm:122 STA STAIRS_DIRECTION
    case 0xC06F7D: cpu.execute_instruction<0x8D>(0x005DC4, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C06E6E.asm:124 END_C_FUNCTION
    case 0xC06F80: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C06E6E.asm:124 END_C_FUNCTION
    case 0xC06F81: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06F82.asm (unresolved).
bool execute_unresolved_c0_c06f82_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C06F82.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC06F82: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C06F82.asm:7 END_STACK_VARS
    case 0xC06F84: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C06F82.asm:7 END_STACK_VARS
    case 0xC06F85: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06F82.asm:7 END_STACK_VARS
    case 0xC06F86: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06F82.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC06F86.
    case 0xC06F88: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C06F82.asm:7 END_STACK_VARS
    case 0xC06F89: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C06F82.asm:8 LDA #0
    case 0xC06F8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C06F82.asm:8 LDA #0
    // Overlapping static entry reached from 0xC06F8A.
    case 0xC06F8C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C06F82.asm:9 STA @LOCAL01
    case 0xC06F8D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06F82.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC06FE3.
    case 0xC06F8E: cpu.execute_instruction<0x12>(0x0000AD, 2); return true;
    // src/unknown/C0/C06F82.asm:10 LDA STAIRS_DIRECTION
    case 0xC06F8F: cpu.execute_instruction<0xAD>(0x005DC4, 3); return true;
    // src/unknown/C0/C06F82.asm:10 LDA STAIRS_DIRECTION
    // Overlapping static entry reached from 0xC06F8E.
    case 0xC06F90: cpu.execute_instruction<0xC4>(0x00005D, 2); return true;
    // src/unknown/C0/C06F82.asm:11 BEQ @UNKNOWN0
    case 0xC06F92: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C06F82.asm:12 LDA STAIRS_DIRECTION
    case 0xC06F94: cpu.execute_instruction<0xAD>(0x005DC4, 3); return true;
    // src/unknown/C0/C06F82.asm:13 CMP #256
    case 0xC06F97: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C0/C06F82.asm:13 CMP #256
    // Overlapping static entry reached from 0xC06F97.
    case 0xC06F99: cpu.execute_instruction<0x01>(0x0000D0, 2); return true;
    // src/unknown/C0/C06F82.asm:14 BNE @UNKNOWN1
    case 0xC06F9A: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/unknown/C0/C06F82.asm:14 BNE @UNKNOWN1
    // Overlapping static entry reached from 0xC06F99.
    case 0xC06F9B: cpu.execute_instruction<0x12>(0x0000AD, 2); return true;
    // src/unknown/C0/C06F82.asm:16 LDA STAIRS_NEW_Y
    case 0xC06F9C: cpu.execute_instruction<0xAD>(0x005DCE, 3); return true;
    // src/unknown/C0/C06F82.asm:16 LDA STAIRS_NEW_Y
    // Overlapping static entry reached from 0xC06F9B.
    case 0xC06F9D: cpu.execute_instruction<0xCE>(0x003A5D, 3); return true;
    // src/unknown/C0/C06F82.asm:17 DEC
    case 0xC06F9F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C06F82.asm:18 CMP GAME_STATE+game_state::leader_y_coord
    case 0xC06FA0: cpu.execute_instruction<0xCD>(0x00987B, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C06F82.asm:19 BLTEQ @UNKNOWN2
    case 0xC06FA3: cpu.execute_instruction<0x90>(0x000017, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C06F82.asm:19 BLTEQ @UNKNOWN2
    case 0xC06FA5: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C0/C06F82.asm:20 LDA #1
    case 0xC06FA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C06F82.asm:20 LDA #1
    // Overlapping static entry reached from 0xC06FA7.
    case 0xC06FA9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C06F82.asm:21 STA @LOCAL01
    case 0xC06FAA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06F82.asm:22 BRA @UNKNOWN2
    case 0xC06FAC: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C0/C06F82.asm:24 LDA STAIRS_NEW_Y
    case 0xC06FAE: cpu.execute_instruction<0xAD>(0x005DCE, 3); return true;
    // src/unknown/C0/C06F82.asm:25 INC
    case 0xC06FB1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C06F82.asm:26 CMP GAME_STATE+game_state::leader_y_coord
    case 0xC06FB2: cpu.execute_instruction<0xCD>(0x00987B, 3); return true;
    // src/unknown/C0/C06F82.asm:27 BCS @UNKNOWN2
    case 0xC06FB5: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C06F82.asm:28 LDA #1
    case 0xC06FB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C06F82.asm:28 LDA #1
    // Overlapping static entry reached from 0xC06FB7.
    case 0xC06FB9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C06F82.asm:29 STA @LOCAL01
    case 0xC06FBA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06F82.asm:31 LDA @LOCAL01
    case 0xC06FBC: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06F82.asm:32 BEQ @UNKNOWN3
    case 0xC06FBE: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/unknown/C0/C06F82.asm:33 LDA #WALKING_STYLE::STAIRS
    case 0xC06FC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00000D, 3); return true;
    // src/unknown/C0/C06F82.asm:33 LDA #WALKING_STYLE::STAIRS
    // Overlapping static entry reached from 0xC06FC0.
    case 0xC06FC2: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C06F82.asm:34 STA GAME_STATE+game_state::walking_style
    case 0xC06FC3: cpu.execute_instruction<0x8D>(0x009883, 3); return true;
    // src/unknown/C0/C06F82.asm:35 LDA STAIRS_NEW_X
    case 0xC06FC6: cpu.execute_instruction<0xAD>(0x005DCC, 3); return true;
    // src/unknown/C0/C06F82.asm:36 STA GAME_STATE+game_state::leader_x_coord
    case 0xC06FC9: cpu.execute_instruction<0x8D>(0x009877, 3); return true;
    // src/unknown/C0/C06F82.asm:37 LDA STAIRS_NEW_Y
    case 0xC06FCC: cpu.execute_instruction<0xAD>(0x005DCE, 3); return true;
    // src/unknown/C0/C06F82.asm:38 STA GAME_STATE+game_state::leader_y_coord
    case 0xC06FCF: cpu.execute_instruction<0x8D>(0x00987B, 3); return true;
    // src/unknown/C0/C06F82.asm:39 STZ GAME_STATE + game_state::unknown84
    case 0xC06FD2: cpu.execute_instruction<0x9C>(0x009879, 3); return true;
    // src/unknown/C0/C06F82.asm:40 STZ GAME_STATE + game_state::unknown80
    case 0xC06FD5: cpu.execute_instruction<0x9C>(0x009875, 3); return true;
    // src/unknown/C0/C06F82.asm:41 BRA @UNKNOWN4
    case 0xC06FD8: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06F82.asm:43 LOADPTR UNKNOWN_C06F82, @LOCAL00
    case 0xC06FDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000082, 2); else cpu.execute_instruction<0xA9>(0x006F82, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06F82.asm:43 LOADPTR UNKNOWN_C06F82, @LOCAL00
    // Overlapping static entry reached from 0xC06FDA.
    case 0xC06FDC: cpu.execute_instruction<0x6F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C06F82.asm:43 LOADPTR UNKNOWN_C06F82, @LOCAL00
    case 0xC06FDD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06F82.asm:43 LOADPTR UNKNOWN_C06F82, @LOCAL00
    case 0xC06FDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06F82.asm:43 LOADPTR UNKNOWN_C06F82, @LOCAL00
    // Overlapping static entry reached from 0xC06FDC.
    case 0xC06FE0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06F82.asm:43 LOADPTR UNKNOWN_C06F82, @LOCAL00
    // Overlapping static entry reached from 0xC06FDF.
    case 0xC06FE1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C06F82.asm:43 LOADPTR UNKNOWN_C06F82, @LOCAL00
    case 0xC06FE2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C06F82.asm:43 LOADPTR UNKNOWN_C06F82, @LOCAL00
    // Overlapping static entry reached from 0xC06FE0.
    case 0xC06FE3: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // src/unknown/C0/C06F82.asm:44 LDA #1
    case 0xC06FE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C06F82.asm:44 LDA #1
    // Overlapping static entry reached from 0xC06FE3.
    case 0xC06FE5: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C06F82.asm:44 LDA #1
    // Overlapping static entry reached from 0xC06FE4.
    case 0xC06FE6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C06F82.asm:45 JSL SCHEDULE_OVERWORLD_TASK
    case 0xC06FE7: cpu.execute_instruction<0x22>(0xC0DBE6, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C06F82.asm:47 END_C_FUNCTION
    case 0xC06FEB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C06F82.asm:47 END_C_FUNCTION
    case 0xC06FEC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C06FED.asm (unresolved).
bool execute_unresolved_c0_c06fed_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C06FED.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC06FED: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C06FED.asm:7 END_STACK_VARS
    case 0xC06FEF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C06FED.asm:7 END_STACK_VARS
    case 0xC06FF0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06FED.asm:7 END_STACK_VARS
    case 0xC06FF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C06FED.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC06FF1.
    case 0xC06FF3: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C06FED.asm:7 END_STACK_VARS
    case 0xC06FF4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C06FED.asm:8 LDA #0
    case 0xC06FF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C06FED.asm:8 LDA #0
    // Overlapping static entry reached from 0xC06FF5.
    case 0xC06FF7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C06FED.asm:9 STA @LOCAL01
    case 0xC06FF8: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06FED.asm:10 LDA STAIRS_DIRECTION
    case 0xC06FFA: cpu.execute_instruction<0xAD>(0x005DC4, 3); return true;
    // src/unknown/C0/C06FED.asm:11 BEQ @UNKNOWN0
    case 0xC06FFD: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C06FED.asm:12 LDA STAIRS_DIRECTION
    case 0xC06FFF: cpu.execute_instruction<0xAD>(0x005DC4, 3); return true;
    // src/unknown/C0/C06FED.asm:12 LDA STAIRS_DIRECTION
    // Overlapping static entry reached from 0xC07055.
    case 0xC07000: cpu.execute_instruction<0xC4>(0x00005D, 2); return true;
    // src/unknown/C0/C06FED.asm:13 CMP #256
    case 0xC07002: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C0/C06FED.asm:13 CMP #256
    // Overlapping static entry reached from 0xC07002.
    case 0xC07004: cpu.execute_instruction<0x01>(0x0000D0, 2); return true;
    // src/unknown/C0/C06FED.asm:14 BNE @UNKNOWN1
    case 0xC07005: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C0/C06FED.asm:14 BNE @UNKNOWN1
    // Overlapping static entry reached from 0xC07004.
    case 0xC07006: cpu.execute_instruction<0x0F>(0x987BAD, 4); return true;
    // src/unknown/C0/C06FED.asm:16 LDA GAME_STATE + game_state::leader_y_coord
    case 0xC07007: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C0/C06FED.asm:17 CMP STAIRS_NEW_Y
    case 0xC0700A: cpu.execute_instruction<0xCD>(0x005DCE, 3); return true;
    // src/unknown/C0/C06FED.asm:18 BCS @UNKNOWN2
    case 0xC0700D: cpu.execute_instruction<0xB0>(0x000016, 2); return true;
    // src/unknown/C0/C06FED.asm:19 LDA #1
    case 0xC0700F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C06FED.asm:19 LDA #1
    // Overlapping static entry reached from 0xC0700F.
    case 0xC07011: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C06FED.asm:20 STA @LOCAL01
    case 0xC07012: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06FED.asm:21 BRA @UNKNOWN2
    case 0xC07014: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/C0/C06FED.asm:23 LDA GAME_STATE + game_state::leader_y_coord
    case 0xC07016: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C0/C06FED.asm:24 CMP STAIRS_NEW_Y
    case 0xC07019: cpu.execute_instruction<0xCD>(0x005DCE, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C06FED.asm:25 BLTEQ @UNKNOWN2
    case 0xC0701C: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C06FED.asm:25 BLTEQ @UNKNOWN2
    case 0xC0701E: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C06FED.asm:26 LDA #1
    case 0xC07020: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C06FED.asm:26 LDA #1
    // Overlapping static entry reached from 0xC07020.
    case 0xC07022: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C06FED.asm:27 STA @LOCAL01
    case 0xC07023: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C06FED.asm:29 LDA @LOCAL01
    case 0xC07025: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C06FED.asm:30 BEQ @UNKNOWN3
    case 0xC07027: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/unknown/C0/C06FED.asm:31 LDA #.LOWORD(-1)
    case 0xC07029: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C06FED.asm:31 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC07029.
    case 0xC0702B: cpu.execute_instruction<0xFF>(0x5DC48D, 4); return true;
    // src/unknown/C0/C06FED.asm:32 STA STAIRS_DIRECTION
    case 0xC0702C: cpu.execute_instruction<0x8D>(0x005DC4, 3); return true;
    // src/unknown/C0/C06FED.asm:33 STZ GAME_STATE + game_state::walking_style
    case 0xC0702F: cpu.execute_instruction<0x9C>(0x009883, 3); return true;
    // src/unknown/C0/C06FED.asm:34 STZ PLAYER_MOVEMENT_FLAGS
    case 0xC07032: cpu.execute_instruction<0x9C>(0x005D56, 3); return true;
    // src/unknown/C0/C06FED.asm:35 LDA STAIRS_NEW_X
    case 0xC07035: cpu.execute_instruction<0xAD>(0x005DCC, 3); return true;
    // src/unknown/C0/C06FED.asm:36 STA GAME_STATE + game_state::leader_x_coord
    case 0xC07038: cpu.execute_instruction<0x8D>(0x009877, 3); return true;
    // src/unknown/C0/C06FED.asm:37 LDA STAIRS_NEW_Y
    case 0xC0703B: cpu.execute_instruction<0xAD>(0x005DCE, 3); return true;
    // src/unknown/C0/C06FED.asm:38 STA GAME_STATE + game_state::leader_y_coord
    case 0xC0703E: cpu.execute_instruction<0x8D>(0x00987B, 3); return true;
    // src/unknown/C0/C06FED.asm:39 STZ GAME_STATE + game_state::unknown84
    case 0xC07041: cpu.execute_instruction<0x9C>(0x009879, 3); return true;
    // src/unknown/C0/C06FED.asm:40 STZ GAME_STATE + game_state::unknown80
    case 0xC07044: cpu.execute_instruction<0x9C>(0x009875, 3); return true;
    // src/unknown/C0/C06FED.asm:41 STZ UNREAD_7E5DBA
    case 0xC07047: cpu.execute_instruction<0x9C>(0x005DBA, 3); return true;
    // src/unknown/C0/C06FED.asm:42 BRA @UNKNOWN4
    case 0xC0704A: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06FED.asm:44 LOADPTR UNKNOWN_C06FED, @LOCAL00
    case 0xC0704C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000ED, 2); else cpu.execute_instruction<0xA9>(0x006FED, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C06FED.asm:44 LOADPTR UNKNOWN_C06FED, @LOCAL00
    // Overlapping static entry reached from 0xC0704C.
    case 0xC0704E: cpu.execute_instruction<0x6F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C06FED.asm:44 LOADPTR UNKNOWN_C06FED, @LOCAL00
    case 0xC0704F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06FED.asm:44 LOADPTR UNKNOWN_C06FED, @LOCAL00
    case 0xC07051: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06FED.asm:44 LOADPTR UNKNOWN_C06FED, @LOCAL00
    // Overlapping static entry reached from 0xC0704E.
    case 0xC07052: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C06FED.asm:44 LOADPTR UNKNOWN_C06FED, @LOCAL00
    // Overlapping static entry reached from 0xC07051.
    case 0xC07053: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C06FED.asm:44 LOADPTR UNKNOWN_C06FED, @LOCAL00
    case 0xC07054: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C06FED.asm:44 LOADPTR UNKNOWN_C06FED, @LOCAL00
    // Overlapping static entry reached from 0xC07052.
    case 0xC07055: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // src/unknown/C0/C06FED.asm:45 LDA #1
    case 0xC07056: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C06FED.asm:45 LDA #1
    // Overlapping static entry reached from 0xC07055.
    case 0xC07057: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C0/C06FED.asm:45 LDA #1
    // Overlapping static entry reached from 0xC07056.
    case 0xC07058: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C06FED.asm:46 JSL SCHEDULE_OVERWORLD_TASK
    case 0xC07059: cpu.execute_instruction<0x22>(0xC0DBE6, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C06FED.asm:48 END_C_FUNCTION
    case 0xC0705D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C06FED.asm:48 END_C_FUNCTION
    case 0xC0705E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0705F.asm (unresolved).
bool execute_unresolved_c0_c0705f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0705F.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0705F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0705F.asm:4 LDY #$0001
    case 0xC07061: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C0705F.asm:4 LDY #$0001
    // Overlapping static entry reached from 0xC07061.
    case 0xC07063: cpu.execute_instruction<0x00>(0x0000AE, 2); return true;
    // src/unknown/C0/C0705F.asm:5 LDX GAME_STATE+game_state::leader_direction
    case 0xC07064: cpu.execute_instruction<0xAE>(0x00987F, 3); return true;
    // src/unknown/C0/C0705F.asm:6 CMP #$0100
    case 0xC07067: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C0/C0705F.asm:6 CMP #$0100
    // Overlapping static entry reached from 0xC07067.
    case 0xC07069: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/C0/C0705F.asm:7 BEQ @UNKNOWN0
    case 0xC0706A: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C0705F.asm:7 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC07069.
    case 0xC0706B: cpu.execute_instruction<0x11>(0x0000C9, 2); return true;
    // src/unknown/C0/C0705F.asm:8 CMP #$0000
    case 0xC0706C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C0705F.asm:8 CMP #$0000
    // Overlapping static entry reached from 0xC0706B.
    case 0xC0706D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0705F.asm:8 CMP #$0000
    // Overlapping static entry reached from 0xC0706C.
    case 0xC0706E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0705F.asm:9 BEQ @UNKNOWN3
    case 0xC0706F: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/unknown/C0/C0705F.asm:10 CMP #$0300
    case 0xC07071: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000300, 3); return true;
    // src/unknown/C0/C0705F.asm:10 CMP #$0300
    // Overlapping static entry reached from 0xC07071.
    case 0xC07073: cpu.execute_instruction<0x03>(0x0000F0, 2); return true;
    // src/unknown/C0/C0705F.asm:11 BEQ @UNKNOWN6
    case 0xC07074: cpu.execute_instruction<0xF0>(0x000033, 2); return true;
    // src/unknown/C0/C0705F.asm:11 BEQ @UNKNOWN6
    // Overlapping static entry reached from 0xC07073.
    case 0xC07075: cpu.execute_instruction<0x33>(0x0000C9, 2); return true;
    // src/unknown/C0/C0705F.asm:12 CMP #$0200
    case 0xC07076: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000200, 3); return true;
    // src/unknown/C0/C0705F.asm:12 CMP #$0200
    // Overlapping static entry reached from 0xC07075.
    case 0xC07077: cpu.execute_instruction<0x00>(0x000002, 2); return true;
    // src/unknown/C0/C0705F.asm:12 CMP #$0200
    // Overlapping static entry reached from 0xC07076.
    case 0xC07078: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/C0/C0705F.asm:13 BEQ @UNKNOWN8
    case 0xC07079: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // src/unknown/C0/C0705F.asm:14 BRA @UNKNOWN10
    case 0xC0707B: cpu.execute_instruction<0x80>(0x00004C, 2); return true;
    // src/unknown/C0/C0705F.asm:16 CPX #$0000
    case 0xC0707D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C0705F.asm:16 CPX #$0000
    // Overlapping static entry reached from 0xC0707D.
    case 0xC0707F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0705F.asm:17 BEQ @UNKNOWN1
    case 0xC07080: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0705F.asm:18 TXA
    case 0xC07082: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0705F.asm:19 AND #$0003
    case 0xC07083: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C0705F.asm:19 AND #$0003
    // Overlapping static entry reached from 0xC07083.
    case 0xC07085: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0705F.asm:20 BEQ @UNKNOWN2
    case 0xC07086: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0705F.asm:22 LDY #$0000
    case 0xC07088: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0705F.asm:22 LDY #$0000
    // Overlapping static entry reached from 0xC07088.
    case 0xC0708A: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C0705F.asm:24 LDA #$0002
    case 0xC0708B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0705F.asm:24 LDA #$0002
    // Overlapping static entry reached from 0xC0708B.
    case 0xC0708D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0705F.asm:25 STA AUTO_MOVEMENT_DIRECTION
    case 0xC0708E: cpu.execute_instruction<0x8D>(0x005DCA, 3); return true;
    // src/unknown/C0/C0705F.asm:26 BRA @UNKNOWN10
    case 0xC07091: cpu.execute_instruction<0x80>(0x000036, 2); return true;
    // src/unknown/C0/C0705F.asm:28 CPX #$0000
    case 0xC07093: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C0705F.asm:28 CPX #$0000
    // Overlapping static entry reached from 0xC07093.
    case 0xC07095: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0705F.asm:29 BEQ @UNKNOWN4
    case 0xC07096: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0705F.asm:30 TXA
    case 0xC07098: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0705F.asm:31 AND #$0003
    case 0xC07099: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C0705F.asm:31 AND #$0003
    // Overlapping static entry reached from 0xC07099.
    case 0xC0709B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0705F.asm:32 BEQ @UNKNOWN5
    case 0xC0709C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0705F.asm:34 LDY #$0000
    case 0xC0709E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0705F.asm:34 LDY #$0000
    // Overlapping static entry reached from 0xC0709E.
    case 0xC070A0: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C0705F.asm:36 LDA #$0006
    case 0xC070A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C0/C0705F.asm:36 LDA #$0006
    // Overlapping static entry reached from 0xC070A1.
    case 0xC070A3: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0705F.asm:37 STA AUTO_MOVEMENT_DIRECTION
    case 0xC070A4: cpu.execute_instruction<0x8D>(0x005DCA, 3); return true;
    // src/unknown/C0/C0705F.asm:38 BRA @UNKNOWN10
    case 0xC070A7: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/unknown/C0/C0705F.asm:40 TXA
    case 0xC070A9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0705F.asm:41 AND #$0007
    case 0xC070AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C0705F.asm:41 AND #$0007
    // Overlapping static entry reached from 0xC070AA.
    case 0xC070AC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0705F.asm:42 BEQ @UNKNOWN7
    case 0xC070AD: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0705F.asm:43 LDY #$0000
    case 0xC070AF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0705F.asm:43 LDY #$0000
    // Overlapping static entry reached from 0xC070AF.
    case 0xC070B1: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C0705F.asm:45 LDA #$0002
    case 0xC070B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C0/C0705F.asm:45 LDA #$0002
    // Overlapping static entry reached from 0xC070B2.
    case 0xC070B4: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0705F.asm:46 STA AUTO_MOVEMENT_DIRECTION
    case 0xC070B5: cpu.execute_instruction<0x8D>(0x005DCA, 3); return true;
    // src/unknown/C0/C0705F.asm:47 BRA @UNKNOWN10
    case 0xC070B8: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/C0/C0705F.asm:49 TXA
    case 0xC070BA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0705F.asm:50 AND #$0007
    case 0xC070BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C0705F.asm:50 AND #$0007
    // Overlapping static entry reached from 0xC070BB.
    case 0xC070BD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0705F.asm:51 BEQ @UNKNOWN9
    case 0xC070BE: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0705F.asm:52 LDY #$0000
    case 0xC070C0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0705F.asm:52 LDY #$0000
    // Overlapping static entry reached from 0xC070C0.
    case 0xC070C2: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C0705F.asm:54 LDA #$0006
    case 0xC070C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C0/C0705F.asm:54 LDA #$0006
    // Overlapping static entry reached from 0xC070C3.
    case 0xC070C5: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0705F.asm:55 STA AUTO_MOVEMENT_DIRECTION
    case 0xC070C6: cpu.execute_instruction<0x8D>(0x005DCA, 3); return true;
    // src/unknown/C0/C0705F.asm:57 TYA
    case 0xC070C9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0705F.asm:58 RTS
    case 0xC070CA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C070CB.asm (unresolved).
bool execute_unresolved_c0_c070cb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C070CB.asm:3 BEGIN_C_FUNCTION
    case 0xC070CB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C070CB.asm:17 END_STACK_VARS
    case 0xC070CD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C070CB.asm:17 END_STACK_VARS
    case 0xC070CE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C070CB.asm:17 END_STACK_VARS
    case 0xC070CF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C070CB.asm:17 END_STACK_VARS
    case 0xC070D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C070CB.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC070D0.
    case 0xC070D2: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C070CB.asm:17 END_STACK_VARS
    case 0xC070D3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C070CB.asm:17 END_STACK_VARS
    case 0xC070D4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:18 STY @VIRTUAL02
    case 0xC070D5: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C070CB.asm:18 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC070D2.
    case 0xC070D6: cpu.execute_instruction<0x02>(0x00009B, 2); return true;
    // src/unknown/C0/C070CB.asm:19 TXY
    case 0xC070D7: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:20 STY @LOCAL04
    case 0xC070D8: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C0/C070CB.asm:21 STA @LOCAL03
    case 0xC070DA: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C070CB.asm:22 LDA DEMO_FRAMES_LEFT
    case 0xC070DC: cpu.execute_instruction<0xAD>(0x000081, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C070CB.asm:23 BNEL @UNKNOWN7
    case 0xC070DF: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C070CB.asm:23 BNEL @UNKNOWN7
    case 0xC070E1: cpu.execute_instruction<0x4C>(0x0071E3, 3); return true;
    // src/unknown/C0/C070CB.asm:24 JSL UNKNOWN_C48C69
    case 0xC070E4: cpu.execute_instruction<0x22>(0xC48C69, 4); return true;
    // src/unknown/C0/C070CB.asm:25 LDA @LOCAL03
    case 0xC070E8: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C070CB.asm:26 TAX
    case 0xC070EA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:27 XBA
    case 0xC070EB: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:28 AND #$00FF
    case 0xC070EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C070CB.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC070EC.
    case 0xC070EE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C070CB.asm:29 STA @VIRTUAL04
    case 0xC070EF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C070CB.asm:30 LDY @LOCAL04
    case 0xC070F1: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C0/C070CB.asm:31 TYA
    case 0xC070F3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:32 ASL
    case 0xC070F4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:33 ASL
    case 0xC070F5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:34 ASL
    case 0xC070F6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:35 TAY
    case 0xC070F7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:36 STY @LOCAL04
    case 0xC070F8: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C0/C070CB.asm:37 LDA @VIRTUAL02
    case 0xC070FA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C070CB.asm:38 ASL
    case 0xC070FC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:39 ASL
    case 0xC070FD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:40 ASL
    case 0xC070FE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:41 STA @VIRTUAL02
    case 0xC070FF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C070CB.asm:42 LDA GAME_STATE+game_state::walking_style
    case 0xC07101: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C070CB.asm:43 BNEL @UNKNOWN4
    case 0xC07104: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C070CB.asm:43 BNEL @UNKNOWN4
    case 0xC07106: cpu.execute_instruction<0x4C>(0x007186, 3); return true;
    // src/unknown/C0/C070CB.asm:44 TXA
    case 0xC07109: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:45 JSR UNKNOWN_C0705F
    case 0xC0710A: cpu.execute_instruction<0x20>(0x00705F, 3); return true;
    // src/unknown/C0/C070CB.asm:46 CMP #0
    case 0xC0710D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C070CB.asm:46 CMP #0
    // Overlapping static entry reached from 0xC0710D.
    case 0xC0710F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C070CB.asm:47 BNEL @UNKNOWN7
    case 0xC07110: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C070CB.asm:47 BNEL @UNKNOWN7
    case 0xC07112: cpu.execute_instruction<0x4C>(0x0071E3, 3); return true;
    // src/unknown/C0/C070CB.asm:48 LDA AUTO_MOVEMENT_DIRECTION
    case 0xC07115: cpu.execute_instruction<0xAD>(0x005DCA, 3); return true;
    // src/unknown/C0/C070CB.asm:49 STA GAME_STATE+game_state::leader_direction
    case 0xC07118: cpu.execute_instruction<0x8D>(0x00987F, 3); return true;
    // src/unknown/C0/C070CB.asm:50 STZ NOT_MOVING_IN_SAME_DIRECTION_FACED
    case 0xC0711B: cpu.execute_instruction<0x9C>(0x005DB8, 3); return true;
    // src/unknown/C0/C070CB.asm:51 LDA #3
    case 0xC0711E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C070CB.asm:51 LDA #3
    // Overlapping static entry reached from 0xC0711E.
    case 0xC07120: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C070CB.asm:52 STA PLAYER_MOVEMENT_FLAGS
    case 0xC07121: cpu.execute_instruction<0x8D>(0x005D56, 3); return true;
    // src/unknown/C0/C070CB.asm:52 STA PLAYER_MOVEMENT_FLAGS
    // Overlapping static entry reached from 0xC0717C.
    case 0xC07122: cpu.execute_instruction<0x56>(0x00005D, 2); return true;
    // src/unknown/C0/C070CB.asm:53 LDA #1
    case 0xC07124: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C070CB.asm:53 LDA #1
    // Overlapping static entry reached from 0xC07124.
    case 0xC07126: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C070CB.asm:54 STA UNREAD_7E5DBA
    case 0xC07127: cpu.execute_instruction<0x8D>(0x005DBA, 3); return true;
    // src/unknown/C0/C070CB.asm:55 LDA @VIRTUAL04
    case 0xC0712A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C070CB.asm:56 XBA
    case 0xC0712C: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:57 AND #$FF00
    case 0xC0712D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C070CB.asm:57 AND #$FF00
    // Overlapping static entry reached from 0xC0712D.
    case 0xC0712F: cpu.execute_instruction<0xFF>(0x5DC48D, 4); return true;
    // src/unknown/C0/C070CB.asm:58 STA STAIRS_DIRECTION
    case 0xC07130: cpu.execute_instruction<0x8D>(0x005DC4, 3); return true;
    // src/unknown/C0/C070CB.asm:59 LDA @VIRTUAL04
    case 0xC07133: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C070CB.asm:60 ASL
    case 0xC07135: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:61 TAX
    case 0xC07136: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:62 LDY @LOCAL04
    case 0xC07137: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C0/C070CB.asm:63 TYA
    case 0xC07139: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:64 CLC
    case 0xC0713A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:65 ADC f:UNKNOWN_C3E210,X
    case 0xC0713B: cpu.execute_instruction<0x7F>(0xC3E210, 4); return true;
    // src/unknown/C0/C070CB.asm:66 STA @LOCAL03
    case 0xC0713F: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C070CB.asm:67 LDA @VIRTUAL02
    case 0xC07141: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C070CB.asm:68 CLC
    case 0xC07143: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:69 ADC f:UNKNOWN_C3E218,X
    case 0xC07144: cpu.execute_instruction<0x7F>(0xC3E218, 4); return true;
    // src/unknown/C0/C070CB.asm:70 STA @VIRTUAL02
    case 0xC07148: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C070CB.asm:71 STA @LOCAL00
    case 0xC0714A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C070CB.asm:72 LDY @LOCAL03
    case 0xC0714C: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C0/C070CB.asm:73 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0714E: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C070CB.asm:74 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC07151: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C070CB.asm:75 JSL UNKNOWN_C48D58
    case 0xC07154: cpu.execute_instruction<0x22>(0xC48D58, 4); return true;
    // src/unknown/C0/C070CB.asm:76 TAY
    case 0xC07158: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:77 STY @LOCAL02
    case 0xC07159: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C070CB.asm:78 BNE @UNKNOWN3
    case 0xC0715B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C070CB.asm:79 INY
    case 0xC0715D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:80 STY @LOCAL02
    case 0xC0715E: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C070CB.asm:82 LDX #6
    case 0xC07160: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/unknown/C0/C070CB.asm:82 LDX #6
    // Overlapping static entry reached from 0xC07160.
    case 0xC07162: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C070CB.asm:83 STX @LOCAL01
    case 0xC07163: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C070CB.asm:84 LDA @VIRTUAL04
    case 0xC07165: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C070CB.asm:85 ASL
    case 0xC07167: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:86 TAX
    case 0xC07168: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:87 LDA f:UNKNOWN_C3E200,X
    case 0xC07169: cpu.execute_instruction<0xBF>(0xC3E200, 4); return true;
    // src/unknown/C0/C070CB.asm:88 LDX @LOCAL01
    case 0xC0716D: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C0/C070CB.asm:89 JSL UNKNOWN_C48E6B
    case 0xC0716F: cpu.execute_instruction<0x22>(0xC48E6B, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C070CB.asm:90 LOADPTR UNKNOWN_C06F82, @LOCAL00
    case 0xC07173: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000082, 2); else cpu.execute_instruction<0xA9>(0x006F82, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C070CB.asm:90 LOADPTR UNKNOWN_C06F82, @LOCAL00
    // Overlapping static entry reached from 0xC07173.
    case 0xC07175: cpu.execute_instruction<0x6F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C070CB.asm:90 LOADPTR UNKNOWN_C06F82, @LOCAL00
    case 0xC07176: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C070CB.asm:90 LOADPTR UNKNOWN_C06F82, @LOCAL00
    case 0xC07178: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C070CB.asm:90 LOADPTR UNKNOWN_C06F82, @LOCAL00
    // Overlapping static entry reached from 0xC07175.
    case 0xC07179: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C070CB.asm:90 LOADPTR UNKNOWN_C06F82, @LOCAL00
    // Overlapping static entry reached from 0xC07178.
    case 0xC0717A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C070CB.asm:90 LOADPTR UNKNOWN_C06F82, @LOCAL00
    case 0xC0717B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C070CB.asm:90 LOADPTR UNKNOWN_C06F82, @LOCAL00
    // Overlapping static entry reached from 0xC07179.
    case 0xC0717C: cpu.execute_instruction<0x10>(0x0000A4, 2); return true;
    // src/unknown/C0/C070CB.asm:91 LDY @LOCAL02
    case 0xC0717D: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C0/C070CB.asm:91 LDY @LOCAL02
    // Overlapping static entry reached from 0xC0717C.
    case 0xC0717E: cpu.execute_instruction<0x14>(0x000098, 2); return true;
    // src/unknown/C0/C070CB.asm:92 TYA
    case 0xC0717F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:93 JSL SCHEDULE_OVERWORLD_TASK
    case 0xC07180: cpu.execute_instruction<0x22>(0xC0DBE6, 4); return true;
    // src/unknown/C0/C070CB.asm:94 BRA @UNKNOWN6
    case 0xC07184: cpu.execute_instruction<0x80>(0x00004F, 2); return true;
    // src/unknown/C0/C070CB.asm:96 LDA @VIRTUAL04
    case 0xC07186: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C070CB.asm:97 ASL
    case 0xC07188: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:98 TAX
    case 0xC07189: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:99 TYA
    case 0xC0718A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:100 CLC
    case 0xC0718B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:101 ADC f:UNKNOWN_C3E220,X
    case 0xC0718C: cpu.execute_instruction<0x7F>(0xC3E220, 4); return true;
    // src/unknown/C0/C070CB.asm:102 STA @LOCAL03
    case 0xC07190: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C0/C070CB.asm:103 LDA @VIRTUAL02
    case 0xC07192: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C070CB.asm:104 CLC
    case 0xC07194: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:105 ADC f:UNKNOWN_C3E228,X
    case 0xC07195: cpu.execute_instruction<0x7F>(0xC3E228, 4); return true;
    // src/unknown/C0/C070CB.asm:106 STA @VIRTUAL02
    case 0xC07199: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C070CB.asm:107 STA @LOCAL00
    case 0xC0719B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C070CB.asm:108 LDY @LOCAL03
    case 0xC0719D: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C0/C070CB.asm:109 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC0719F: cpu.execute_instruction<0xAE>(0x00987B, 3); return true;
    // src/unknown/C0/C070CB.asm:110 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC071A2: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C070CB.asm:111 JSL UNKNOWN_C48D58
    case 0xC071A5: cpu.execute_instruction<0x22>(0xC48D58, 4); return true;
    // src/unknown/C0/C070CB.asm:112 TAY
    case 0xC071A9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:113 STY @LOCAL02
    case 0xC071AA: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C070CB.asm:114 BNE @UNKNOWN5
    case 0xC071AC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C070CB.asm:115 INY
    case 0xC071AE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:116 STY @LOCAL02
    case 0xC071AF: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C0/C070CB.asm:118 LDX #12
    case 0xC071B1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000C, 2); else cpu.execute_instruction<0xA2>(0x00000C, 3); return true;
    // src/unknown/C0/C070CB.asm:118 LDX #12
    // Overlapping static entry reached from 0xC071B1.
    case 0xC071B3: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C0/C070CB.asm:119 STX @LOCAL04
    case 0xC071B4: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C0/C070CB.asm:120 LDA @VIRTUAL04
    case 0xC071B6: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C070CB.asm:121 ASL
    case 0xC071B8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:122 TAX
    case 0xC071B9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:123 LDA f:UNKNOWN_C3E208,X
    case 0xC071BA: cpu.execute_instruction<0xBF>(0xC3E208, 4); return true;
    // src/unknown/C0/C070CB.asm:124 LDX @LOCAL04
    case 0xC071BE: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C0/C070CB.asm:125 JSL UNKNOWN_C48E6B
    case 0xC071C0: cpu.execute_instruction<0x22>(0xC48E6B, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C070CB.asm:126 LOADPTR UNKNOWN_C06FED, @LOCAL00
    case 0xC071C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000ED, 2); else cpu.execute_instruction<0xA9>(0x006FED, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C070CB.asm:126 LOADPTR UNKNOWN_C06FED, @LOCAL00
    // Overlapping static entry reached from 0xC071C4.
    case 0xC071C6: cpu.execute_instruction<0x6F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C070CB.asm:126 LOADPTR UNKNOWN_C06FED, @LOCAL00
    case 0xC071C7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C070CB.asm:126 LOADPTR UNKNOWN_C06FED, @LOCAL00
    case 0xC071C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C070CB.asm:126 LOADPTR UNKNOWN_C06FED, @LOCAL00
    // Overlapping static entry reached from 0xC071C6.
    case 0xC071CA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C070CB.asm:126 LOADPTR UNKNOWN_C06FED, @LOCAL00
    // Overlapping static entry reached from 0xC071C9.
    case 0xC071CB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C070CB.asm:126 LOADPTR UNKNOWN_C06FED, @LOCAL00
    case 0xC071CC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C070CB.asm:126 LOADPTR UNKNOWN_C06FED, @LOCAL00
    // Overlapping static entry reached from 0xC071CA.
    case 0xC071CD: cpu.execute_instruction<0x10>(0x0000A4, 2); return true;
    // src/unknown/C0/C070CB.asm:127 LDY @LOCAL02
    case 0xC071CE: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C0/C070CB.asm:127 LDY @LOCAL02
    // Overlapping static entry reached from 0xC071CD.
    case 0xC071CF: cpu.execute_instruction<0x14>(0x000098, 2); return true;
    // src/unknown/C0/C070CB.asm:128 TYA
    case 0xC071D0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C070CB.asm:129 JSL SCHEDULE_OVERWORLD_TASK
    case 0xC071D1: cpu.execute_instruction<0x22>(0xC0DBE6, 4); return true;
    // src/unknown/C0/C070CB.asm:131 LDA @LOCAL03
    case 0xC071D5: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C070CB.asm:132 STA STAIRS_NEW_X
    case 0xC071D7: cpu.execute_instruction<0x8D>(0x005DCC, 3); return true;
    // src/unknown/C0/C070CB.asm:133 LDA @VIRTUAL02
    case 0xC071DA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C070CB.asm:134 STA STAIRS_NEW_Y
    case 0xC071DC: cpu.execute_instruction<0x8D>(0x005DCE, 3); return true;
    // src/unknown/C0/C070CB.asm:135 JSL UNKNOWN_C48E95
    case 0xC071DF: cpu.execute_instruction<0x22>(0xC48E95, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C070CB.asm:137 END_C_FUNCTION
    case 0xC071E3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C070CB.asm:137 END_C_FUNCTION
    case 0xC071E4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C073C0.asm (unresolved).
bool execute_unresolved_c0_c073c0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C073C0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC073C0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C073C0.asm:9 END_STACK_VARS
    case 0xC073C2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C073C0.asm:9 END_STACK_VARS
    case 0xC073C3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C073C0.asm:9 END_STACK_VARS
    case 0xC073C4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C073C0.asm:9 END_STACK_VARS
    case 0xC073C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C073C0.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC073C5.
    case 0xC073C7: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C073C0.asm:9 END_STACK_VARS
    case 0xC073C8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C073C0.asm:9 END_STACK_VARS
    case 0xC073C9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:10 STA @VIRTUAL04
    case 0xC073CA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C073C0.asm:10 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC073C7.
    case 0xC073CB: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C0/C073C0.asm:11 STA @LOCAL02
    case 0xC073CC: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C073C0.asm:11 STA @LOCAL02
    // Overlapping static entry reached from 0xC073CB.
    case 0xC073CD: cpu.execute_instruction<0x14>(0x0000AD, 2); return true;
    // src/unknown/C0/C073C0.asm:12 LDA NEXT_QUEUED_INTERACTION
    case 0xC073CE: cpu.execute_instruction<0xAD>(0x005E04, 3); return true;
    // src/unknown/C0/C073C0.asm:12 LDA NEXT_QUEUED_INTERACTION
    // Overlapping static entry reached from 0xC073CD.
    case 0xC073CF: cpu.execute_instruction<0x04>(0x00005E, 2); return true;
    // src/unknown/C0/C073C0.asm:13 EOR NEXT_QUEUED_INTERACTION
    case 0xC073D1: cpu.execute_instruction<0x4D>(0x005E04, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C073C0.asm:14 BNEL @UNKNOWN6
    case 0xC073D4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C073C0.asm:14 BNEL @UNKNOWN6
    case 0xC073D6: cpu.execute_instruction<0x4C>(0x007473, 3); return true;
    // src/unknown/C0/C073C0.asm:15 LDA PSI_TELEPORT_DESTINATION
    case 0xC073D9: cpu.execute_instruction<0xAD>(0x009F3F, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C0/C073C0.asm:16 BNEL @UNKNOWN6
    case 0xC073DC: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C0/C073C0.asm:16 BNEL @UNKNOWN6
    case 0xC073DE: cpu.execute_instruction<0x4C>(0x007473, 3); return true;
    // src/unknown/C0/C073C0.asm:17 LDA @VIRTUAL04
    case 0xC073E1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/unknown/C0/C073C0.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC073E3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/unknown/C0/C073C0.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC073E5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/unknown/C0/C073C0.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC073E6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/unknown/C0/C073C0.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC073E8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/unknown/C0/C073C0.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC073E9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/unknown/C0/C073C0.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC073EB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:19 CLC
    case 0xC073EC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:20 ADC #.LOWORD(ACTIVE_HOTSPOTS)
    case 0xC073ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003C, 2); else cpu.execute_instruction<0x69>(0x005E3C, 3); return true;
    // src/unknown/C0/C073C0.asm:20 ADC #.LOWORD(ACTIVE_HOTSPOTS)
    // Overlapping static entry reached from 0xC073ED.
    case 0xC073EF: cpu.execute_instruction<0x5E>(0x00B9A8, 3); return true;
    // src/unknown/C0/C073C0.asm:21 TAY
    case 0xC073F0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:22 LDA a:active_hotspot::mode,Y
    case 0xC073F1: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C073C0.asm:22 LDA a:active_hotspot::mode,Y
    // Overlapping static entry reached from 0xC073EF.
    case 0xC073F2: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C073C0.asm:23 STA @LOCAL01
    case 0xC073F4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C073C0.asm:24 LDX GAME_STATE+game_state::leader_x_coord
    case 0xC073F6: cpu.execute_instruction<0xAE>(0x009877, 3); return true;
    // src/unknown/C0/C073C0.asm:25 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC073F9: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C0/C073C0.asm:26 STA @VIRTUAL02
    case 0xC073FC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C073C0.asm:27 LDA @LOCAL01
    case 0xC073FE: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C073C0.asm:28 CMP #1
    case 0xC07400: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C073C0.asm:28 CMP #1
    // Overlapping static entry reached from 0xC07400.
    case 0xC07402: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C073C0.asm:29 BNE @UNKNOWN4
    case 0xC07403: cpu.execute_instruction<0xD0>(0x000020, 2); return true;
    // src/unknown/C0/C073C0.asm:30 TXA
    case 0xC07405: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:31 CMP a:active_hotspot::x1,Y
    case 0xC07406: cpu.execute_instruction<0xD9>(0x000002, 3); return true;
    // src/unknown/C0/C073C0.asm:32 BCC @UNKNOWN5
    case 0xC07409: cpu.execute_instruction<0x90>(0x000038, 2); return true;
    // src/unknown/C0/C073C0.asm:33 TXA
    case 0xC0740B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:34 CMP a:active_hotspot::x2,Y
    case 0xC0740C: cpu.execute_instruction<0xD9>(0x000006, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C0/C073C0.asm:35 BGT @UNKNOWN5
    case 0xC0740F: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C073C0.asm:35 BGT @UNKNOWN5
    case 0xC07411: cpu.execute_instruction<0xB0>(0x000030, 2); return true;
    // src/unknown/C0/C073C0.asm:36 LDA @VIRTUAL02
    case 0xC07413: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C073C0.asm:37 CMP a:active_hotspot::y1,Y
    case 0xC07415: cpu.execute_instruction<0xD9>(0x000004, 3); return true;
    // src/unknown/C0/C073C0.asm:38 BCC @UNKNOWN5
    case 0xC07418: cpu.execute_instruction<0x90>(0x000029, 2); return true;
    // src/unknown/C0/C073C0.asm:39 LDA @VIRTUAL02
    case 0xC0741A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C073C0.asm:40 CMP a:active_hotspot::y2,Y
    case 0xC0741C: cpu.execute_instruction<0xD9>(0x000008, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C0/C073C0.asm:41 BGT @UNKNOWN5
    case 0xC0741F: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C0/C073C0.asm:41 BGT @UNKNOWN5
    case 0xC07421: cpu.execute_instruction<0xB0>(0x000020, 2); return true;
    // src/unknown/C0/C073C0.asm:42 BRA @UNKNOWN6
    case 0xC07423: cpu.execute_instruction<0x80>(0x00004E, 2); return true;
    // src/unknown/C0/C073C0.asm:44 TXA
    case 0xC07425: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:45 CMP a:active_hotspot::x1,Y
    case 0xC07426: cpu.execute_instruction<0xD9>(0x000002, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C073C0.asm:46 BLTEQ @UNKNOWN6
    case 0xC07429: cpu.execute_instruction<0x90>(0x000048, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C073C0.asm:46 BLTEQ @UNKNOWN6
    case 0xC0742B: cpu.execute_instruction<0xF0>(0x000046, 2); return true;
    // src/unknown/C0/C073C0.asm:47 TXA
    case 0xC0742D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:48 CMP a:active_hotspot::x2,Y
    case 0xC0742E: cpu.execute_instruction<0xD9>(0x000006, 3); return true;
    // src/unknown/C0/C073C0.asm:49 BCS @UNKNOWN6
    case 0xC07431: cpu.execute_instruction<0xB0>(0x000040, 2); return true;
    // src/unknown/C0/C073C0.asm:50 LDA @VIRTUAL02
    case 0xC07433: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C073C0.asm:51 CMP a:active_hotspot::y1,Y
    case 0xC07435: cpu.execute_instruction<0xD9>(0x000004, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C073C0.asm:52 BLTEQ @UNKNOWN6
    case 0xC07438: cpu.execute_instruction<0x90>(0x000039, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C073C0.asm:52 BLTEQ @UNKNOWN6
    case 0xC0743A: cpu.execute_instruction<0xF0>(0x000037, 2); return true;
    // src/unknown/C0/C073C0.asm:53 LDA @VIRTUAL02
    case 0xC0743C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C073C0.asm:54 CMP a:active_hotspot::y2,Y
    case 0xC0743E: cpu.execute_instruction<0xD9>(0x000008, 3); return true;
    // src/unknown/C0/C073C0.asm:55 BCS @UNKNOWN6
    case 0xC07441: cpu.execute_instruction<0xB0>(0x000030, 2); return true;
    // src/unknown/C0/C073C0.asm:57 LDA #0
    case 0xC07443: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C073C0.asm:57 LDA #0
    // Overlapping static entry reached from 0xC07443.
    case 0xC07445: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/unknown/C0/C073C0.asm:58 STA a:active_hotspot::mode,Y
    case 0xC07446: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C073C0.asm:59 TYA
    case 0xC07449: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:60 CLC
    case 0xC0744A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C073C0.asm:61 ADC #active_hotspot::pointer
    case 0xC0744B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/unknown/C0/C073C0.asm:61 ADC #active_hotspot::pointer
    // Overlapping static entry reached from 0xC0744B.
    case 0xC0744D: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C073C0.asm:62 TAY
    case 0xC0744E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C0/C073C0.asm:63 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC0744F: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C0/C073C0.asm:63 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC07452: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C0/C073C0.asm:63 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC07454: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C0/C073C0.asm:63 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC07457: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C073C0.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07459: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C073C0.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0745B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C073C0.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0745D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C073C0.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0745F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C073C0.asm:65 LDA #9
    case 0xC07461: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/unknown/C0/C073C0.asm:65 LDA #9
    // Overlapping static entry reached from 0xC07461.
    case 0xC07463: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C073C0.asm:66 JSL UNKNOWN_C064E3
    case 0xC07464: cpu.execute_instruction<0x22>(0xC064E3, 4); return true;
    // src/unknown/C0/C073C0.asm:67 LDA @LOCAL02
    case 0xC07468: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C073C0.asm:68 STA @VIRTUAL04
    case 0xC0746A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C073C0.asm:76 LDX @VIRTUAL04
    case 0xC0746C: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C073C0.asm:77 SEP #PROC_FLAGS::ACCUM8
    case 0xC0746E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C073C0.asm:78 STZ GAME_STATE + game_state::active_hotspot_modes,X
    case 0xC07470: cpu.execute_instruction<0x9E>(0x0098BD, 3); return true;
    // src/unknown/C0/C073C0.asm:81 REP #PROC_FLAGS::ACCUM8
    case 0xC07473: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C073C0.asm:82 END_C_FUNCTION
    case 0xC07475: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C073C0.asm:82 END_C_FUNCTION
    case 0xC07476: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C07477.asm (unresolved).
bool execute_unresolved_c0_c07477_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C07477.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC07477: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C07477.asm:9 END_STACK_VARS
    case 0xC07479: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C07477.asm:9 END_STACK_VARS
    case 0xC0747A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C07477.asm:9 END_STACK_VARS
    case 0xC0747B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07477.asm:9 END_STACK_VARS
    case 0xC0747C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07477.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0747C.
    case 0xC0747E: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C07477.asm:9 END_STACK_VARS
    case 0xC0747F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C07477.asm:9 END_STACK_VARS
    case 0xC07480: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:10 TXY
    case 0xC07481: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:11 STY @LOCAL01
    case 0xC07482: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C07477.asm:12 STA @LOCAL00
    case 0xC07484: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C07477.asm:13 LOADPTR DOOR_POINTER_TABLE, @VIRTUAL0A
    case 0xC07486: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C07477.asm:13 LOADPTR DOOR_POINTER_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC07486.
    case 0xC07488: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C07477.asm:13 LOADPTR DOOR_POINTER_TABLE, @VIRTUAL0A
    case 0xC07489: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C07477.asm:13 LOADPTR DOOR_POINTER_TABLE, @VIRTUAL0A
    case 0xC0748B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C07477.asm:13 LOADPTR DOOR_POINTER_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0748B.
    case 0xC0748D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C07477.asm:13 LOADPTR DOOR_POINTER_TABLE, @VIRTUAL0A
    case 0xC0748E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C07477.asm:14 LDA @LOCAL00
    case 0xC07490: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C07477.asm:15 LSR
    case 0xC07492: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:16 LSR
    case 0xC07493: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:17 LSR
    case 0xC07494: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:18 LSR
    case 0xC07495: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:19 LSR
    case 0xC07496: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:20 STA @VIRTUAL02
    case 0xC07497: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C07477.asm:21 TYA
    case 0xC07499: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:22 AND #$FFE0
    case 0xC0749A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x00FFE0, 3); return true;
    // src/unknown/C0/C07477.asm:22 AND #$FFE0
    // Overlapping static entry reached from 0xC0749A.
    case 0xC0749C: cpu.execute_instruction<0xFF>(0x026518, 4); return true;
    // src/unknown/C0/C07477.asm:23 CLC
    case 0xC0749D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:24 ADC @VIRTUAL02
    case 0xC0749E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C07477.asm:25 ASL
    case 0xC074A0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:26 ASL
    case 0xC074A1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:27 CLC
    case 0xC074A2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:28 ADC @VIRTUAL0A
    case 0xC074A3: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C07477.asm:29 STA @VIRTUAL0A
    case 0xC074A5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C07477.asm:30 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC074A7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C07477.asm:30 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC074A7.
    case 0xC074A9: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C0/C07477.asm:30 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC074AA: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C0/C07477.asm:30 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC074AC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C0/C07477.asm:30 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC074AD: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C0/C07477.asm:30 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC074AF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C0/C07477.asm:30 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC074B1: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C07477.asm:31 LDA [@VIRTUAL06]
    case 0xC074B3: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C07477.asm:32 TAX
    case 0xC074B5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:33 BNE @UNKNOWN0
    case 0xC074B6: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C07477.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC074B8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C07477.asm:35 LDA #$00FF
    case 0xC074BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0080FF, 3); return true;
    // src/unknown/C0/C07477.asm:36 BRA @UNKNOWN4
    case 0xC074BC: cpu.execute_instruction<0x80>(0x000066, 2); return true;
    // src/unknown/C0/C07477.asm:36 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC074BA.
    case 0xC074BD: cpu.execute_instruction<0x66>(0x0000E6, 2); return true;
    // src/unknown/C0/C07477.asm:39 INC @VIRTUAL06
    case 0xC074BE: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C0/C07477.asm:39 INC @VIRTUAL06
    // Overlapping static entry reached from 0xC074BD.
    case 0xC074BF: cpu.execute_instruction<0x06>(0x0000E6, 2); return true;
    // src/unknown/C0/C07477.asm:40 INC @VIRTUAL06
    case 0xC074C0: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C0/C07477.asm:40 INC @VIRTUAL06
    // Overlapping static entry reached from 0xC074BF.
    case 0xC074C1: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // src/unknown/C0/C07477.asm:41 LDA @LOCAL00
    case 0xC074C2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C07477.asm:41 LDA @LOCAL00
    // Overlapping static entry reached from 0xC074C1.
    case 0xC074C3: cpu.execute_instruction<0x0E>(0x001F29, 3); return true;
    // src/unknown/C0/C07477.asm:42 AND #$001F
    case 0xC074C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C0/C07477.asm:42 AND #$001F
    // Overlapping static entry reached from 0xC074C4.
    case 0xC074C6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C07477.asm:43 STA @VIRTUAL02
    case 0xC074C7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C07477.asm:44 LDY @LOCAL01
    case 0xC074C9: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C07477.asm:45 TYA
    case 0xC074CB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:46 AND #$001F
    case 0xC074CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C0/C07477.asm:46 AND #$001F
    // Overlapping static entry reached from 0xC074CC.
    case 0xC074CE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C07477.asm:47 STA @LOCAL00
    case 0xC074CF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C07477.asm:48 BRA @UNKNOWN3
    case 0xC074D1: cpu.execute_instruction<0x80>(0x000048, 2); return true;
    // src/unknown/C0/C07477.asm:50 SEP #PROC_FLAGS::ACCUM8
    case 0xC074D3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C07477.asm:51 LDY #1
    case 0xC074D5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C07477.asm:51 LDY #1
    // Overlapping static entry reached from 0xC074D5.
    case 0xC074D7: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C07477.asm:52 LDA [@VIRTUAL06],Y
    case 0xC074D8: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C07477.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC074DA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C07477.asm:54 AND #$00FF
    case 0xC074DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C07477.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC074DC.
    case 0xC074DE: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C0/C07477.asm:55 CMP @VIRTUAL02
    case 0xC074DF: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C07477.asm:56 BNE @UNKNOWN2
    case 0xC074E1: cpu.execute_instruction<0xD0>(0x00002F, 2); return true;
    // src/unknown/C0/C07477.asm:57 LDA @LOCAL00
    case 0xC074E3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C07477.asm:58 STA @VIRTUAL04
    case 0xC074E5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C07477.asm:59 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC074E7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C07477.asm:59 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC074E9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C07477.asm:59 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC074EB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C07477.asm:59 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC074ED: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C07477.asm:60 LDA [@VIRTUAL0A]
    case 0xC074EF: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C0/C07477.asm:61 AND #$00FF
    case 0xC074F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C07477.asm:61 AND #$00FF
    // Overlapping static entry reached from 0xC074F1.
    case 0xC074F3: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C0/C07477.asm:62 CMP @VIRTUAL04
    case 0xC074F4: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C0/C07477.asm:63 BNE @UNKNOWN2
    case 0xC074F6: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // src/unknown/C0/C07477.asm:64 LDY #3
    case 0xC074F8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C0/C07477.asm:64 LDY #3
    // Overlapping static entry reached from 0xC074F8.
    case 0xC074FA: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C07477.asm:65 LDA [@VIRTUAL06],Y
    case 0xC074FB: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C0/C07477.asm:66 STA DOOR_FOUND
    case 0xC074FD: cpu.execute_instruction<0x8D>(0x005DBC, 3); return true;
    // src/unknown/C0/C07477.asm:67 INC @VIRTUAL06
    case 0xC07500: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C0/C07477.asm:68 INC @VIRTUAL06
    case 0xC07502: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C0/C07477.asm:69 LDA [@VIRTUAL06]
    case 0xC07504: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C07477.asm:70 AND #$00FF
    case 0xC07506: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C07477.asm:70 AND #$00FF
    // Overlapping static entry reached from 0xC07506.
    case 0xC07508: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C07477.asm:71 STA DOOR_FOUND_TYPE
    case 0xC07509: cpu.execute_instruction<0x8D>(0x005DBE, 3); return true;
    // src/unknown/C0/C07477.asm:72 SEP #PROC_FLAGS::ACCUM8
    case 0xC0750C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C07477.asm:73 LDA [@VIRTUAL06]
    case 0xC0750E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C0/C07477.asm:74 BRA @UNKNOWN4
    case 0xC07510: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C0/C07477.asm:77 LDA #5
    case 0xC07512: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C07477.asm:77 LDA #5
    // Overlapping static entry reached from 0xC07512.
    case 0xC07514: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C07477.asm:78 CLC
    case 0xC07515: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:79 ADC @VIRTUAL06
    case 0xC07516: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C0/C07477.asm:80 STA @VIRTUAL06
    case 0xC07518: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C07477.asm:81 DEX
    case 0xC0751A: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C07477.asm:83 CPX #0
    case 0xC0751B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C0/C07477.asm:83 CPX #0
    // Overlapping static entry reached from 0xC0751B.
    case 0xC0751D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C07477.asm:84 BNE @UNKNOWN1
    case 0xC0751E: cpu.execute_instruction<0xD0>(0x0000B3, 2); return true;
    // src/unknown/C0/C07477.asm:85 SEP #PROC_FLAGS::ACCUM8
    case 0xC07520: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C07477.asm:86 LDA #$00FF
    case 0xC07522: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x002BFF, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C07477.asm:88 END_C_FUNCTION
    case 0xC07524: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C07477.asm:88 END_C_FUNCTION
    case 0xC07525: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C07526.asm (unresolved).
bool execute_unresolved_c0_c07526_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C07526.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC07526: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C07526.asm:8 END_STACK_VARS
    case 0xC07528: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C07526.asm:8 END_STACK_VARS
    case 0xC07529: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C07526.asm:8 END_STACK_VARS
    case 0xC0752A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07526.asm:8 END_STACK_VARS
    case 0xC0752B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07526.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0752B.
    case 0xC0752D: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C07526.asm:8 END_STACK_VARS
    case 0xC0752E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C07526.asm:8 END_STACK_VARS
    case 0xC0752F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C07526.asm:9 TXY
    case 0xC07530: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C07526.asm:10 STY @LOCAL01
    case 0xC07531: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C0/C07526.asm:11 STA @VIRTUAL02
    case 0xC07533: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C07526.asm:12 TYX
    case 0xC07535: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C07526.asm:13 LDA @VIRTUAL02
    case 0xC07536: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C07526.asm:14 JSL UNKNOWN_C07477
    case 0xC07538: cpu.execute_instruction<0x22>(0xC07477, 4); return true;
    // src/unknown/C0/C07526.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC0753C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C07526.asm:16 AND #$00FF
    case 0xC0753E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C07526.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC0753E.
    case 0xC07540: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C07526.asm:17 BEQ @UNKNOWN0
    case 0xC07541: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/C0/C07526.asm:18 CMP #DOOR_TYPE::TYPE1
    case 0xC07543: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C07526.asm:18 CMP #DOOR_TYPE::TYPE1
    // Overlapping static entry reached from 0xC07543.
    case 0xC07545: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C07526.asm:19 BEQ @UNKNOWN1
    case 0xC07546: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/unknown/C0/C07526.asm:20 CMP #DOOR_TYPE::TYPE2
    case 0xC07548: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C07526.asm:20 CMP #DOOR_TYPE::TYPE2
    // Overlapping static entry reached from 0xC07548.
    case 0xC0754A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C07526.asm:21 BEQ @UNKNOWN2
    case 0xC0754B: cpu.execute_instruction<0xF0>(0x000039, 2); return true;
    // src/unknown/C0/C07526.asm:22 CMP #DOOR_TYPE::TYPE3
    case 0xC0754D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C07526.asm:22 CMP #DOOR_TYPE::TYPE3
    // Overlapping static entry reached from 0xC0754D.
    case 0xC0754F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C07526.asm:23 BEQ @UNKNOWN3
    case 0xC07550: cpu.execute_instruction<0xF0>(0x000043, 2); return true;
    // src/unknown/C0/C07526.asm:24 CMP #DOOR_TYPE::TYPE4
    case 0xC07552: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C07526.asm:24 CMP #DOOR_TYPE::TYPE4
    // Overlapping static entry reached from 0xC07552.
    case 0xC07554: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C07526.asm:25 BEQ @UNKNOWN4
    case 0xC07555: cpu.execute_instruction<0xF0>(0x000051, 2); return true;
    // src/unknown/C0/C07526.asm:26 CMP #DOOR_TYPE::TYPE5
    case 0xC07557: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C0/C07526.asm:26 CMP #DOOR_TYPE::TYPE5
    // Overlapping static entry reached from 0xC07557.
    case 0xC07559: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C07526.asm:27 BEQ @UNKNOWN5
    case 0xC0755A: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // src/unknown/C0/C07526.asm:28 CMP #DOOR_TYPE::TYPE7
    case 0xC0755C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C07526.asm:28 CMP #DOOR_TYPE::TYPE7
    // Overlapping static entry reached from 0xC0755C.
    case 0xC0755E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C07526.asm:29 BEQ @UNKNOWN5
    case 0xC0755F: cpu.execute_instruction<0xF0>(0x00005A, 2); return true;
    // src/unknown/C0/C07526.asm:30 CMP #DOOR_TYPE::TYPE6
    case 0xC07561: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C07526.asm:30 CMP #DOOR_TYPE::TYPE6
    // Overlapping static entry reached from 0xC07561.
    case 0xC07563: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C07526.asm:31 BEQ @UNKNOWN6
    case 0xC07564: cpu.execute_instruction<0xF0>(0x000064, 2); return true;
    // src/unknown/C0/C07526.asm:32 BRA @UNKNOWN7
    case 0xC07566: cpu.execute_instruction<0x80>(0x00006F, 2); return true;
    // src/unknown/C0/C07526.asm:34 LDA DOOR_FOUND
    case 0xC07568: cpu.execute_instruction<0xAD>(0x005DBC, 3); return true;
    // src/unknown/C0/C07526.asm:35 JSR UNKNOWN_C06A1B
    case 0xC0756B: cpu.execute_instruction<0x20>(0x006A1B, 3); return true;
    // src/unknown/C0/C07526.asm:36 LDA #0
    case 0xC0756E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C07526.asm:36 LDA #0
    // Overlapping static entry reached from 0xC0756E.
    case 0xC07570: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C07526.asm:37 STA @VIRTUAL04
    case 0xC07571: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C07526.asm:38 STA @LOCAL00
    case 0xC07573: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C07526.asm:39 BRA @UNKNOWN7
    case 0xC07575: cpu.execute_instruction<0x80>(0x000060, 2); return true;
    // src/unknown/C0/C07526.asm:41 LDA DOOR_FOUND
    case 0xC07577: cpu.execute_instruction<0xAD>(0x005DBC, 3); return true;
    // src/unknown/C0/C07526.asm:42 JSR UNKNOWN_C06A91
    case 0xC0757A: cpu.execute_instruction<0x20>(0x006A91, 3); return true;
    // src/unknown/C0/C07526.asm:43 LDA #1
    case 0xC0757D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C07526.asm:43 LDA #1
    // Overlapping static entry reached from 0xC0757D.
    case 0xC0757F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C07526.asm:44 STA @VIRTUAL04
    case 0xC07580: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C07526.asm:45 STA @LOCAL00
    case 0xC07582: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C07526.asm:46 BRA @UNKNOWN7
    case 0xC07584: cpu.execute_instruction<0x80>(0x000051, 2); return true;
    // src/unknown/C0/C07526.asm:48 LDA DOOR_FOUND
    case 0xC07586: cpu.execute_instruction<0xAD>(0x005DBC, 3); return true;
    // src/unknown/C0/C07526.asm:49 JSR UNKNOWN_C06ACA
    case 0xC07589: cpu.execute_instruction<0x20>(0x006ACA, 3); return true;
    // src/unknown/C0/C07526.asm:50 LDA #0
    case 0xC0758C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C07526.asm:50 LDA #0
    // Overlapping static entry reached from 0xC0758C.
    case 0xC0758E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C07526.asm:51 STA @VIRTUAL04
    case 0xC0758F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C07526.asm:52 STA @LOCAL00
    case 0xC07591: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C07526.asm:53 BRA @UNKNOWN7
    case 0xC07593: cpu.execute_instruction<0x80>(0x000042, 2); return true;
    // src/unknown/C0/C07526.asm:55 LDY @LOCAL01
    case 0xC07595: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C07526.asm:56 LDX @VIRTUAL02
    case 0xC07597: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C07526.asm:57 LDA DOOR_FOUND
    case 0xC07599: cpu.execute_instruction<0xAD>(0x005DBC, 3); return true;
    // src/unknown/C0/C07526.asm:58 JSR UNKNOWN_C06E6E
    case 0xC0759C: cpu.execute_instruction<0x20>(0x006E6E, 3); return true;
    // src/unknown/C0/C07526.asm:59 LDA #0
    case 0xC0759F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C07526.asm:59 LDA #0
    // Overlapping static entry reached from 0xC0759F.
    case 0xC075A1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C07526.asm:60 STA @VIRTUAL04
    case 0xC075A2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C07526.asm:61 STA @LOCAL00
    case 0xC075A4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C07526.asm:62 BRA @UNKNOWN7
    case 0xC075A6: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C0/C07526.asm:64 LDY @LOCAL01
    case 0xC075A8: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C0/C07526.asm:65 LDX @VIRTUAL02
    case 0xC075AA: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C07526.asm:66 LDA DOOR_FOUND
    case 0xC075AC: cpu.execute_instruction<0xAD>(0x005DBC, 3); return true;
    // src/unknown/C0/C07526.asm:67 JSR UNKNOWN_C070CB
    case 0xC075AF: cpu.execute_instruction<0x20>(0x0070CB, 3); return true;
    // src/unknown/C0/C07526.asm:68 LDA #1
    case 0xC075B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C07526.asm:68 LDA #1
    // Overlapping static entry reached from 0xC075B2.
    case 0xC075B4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C07526.asm:69 STA @VIRTUAL04
    case 0xC075B5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C07526.asm:70 STA @LOCAL00
    case 0xC075B7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C07526.asm:71 BRA @UNKNOWN7
    case 0xC075B9: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/unknown/C0/C07526.asm:73 LDA DOOR_FOUND
    case 0xC075BB: cpu.execute_instruction<0xAD>(0x005DBC, 3); return true;
    // src/unknown/C0/C07526.asm:74 JSR UNKNOWN_C06A8B
    case 0xC075BE: cpu.execute_instruction<0x20>(0x006A8B, 3); return true;
    // src/unknown/C0/C07526.asm:75 LDA #0
    case 0xC075C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C07526.asm:75 LDA #0
    // Overlapping static entry reached from 0xC075C1.
    case 0xC075C3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C07526.asm:76 STA @VIRTUAL04
    case 0xC075C4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C07526.asm:77 STA @LOCAL00
    case 0xC075C6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C07526.asm:78 BRA @UNKNOWN7
    case 0xC075C8: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C07526.asm:80 LDA DOOR_FOUND
    case 0xC075CA: cpu.execute_instruction<0xAD>(0x005DBC, 3); return true;
    // src/unknown/C0/C07526.asm:81 JSR UNKNOWN_C06A8E
    case 0xC075CD: cpu.execute_instruction<0x20>(0x006A8E, 3); return true;
    // src/unknown/C0/C07526.asm:82 LDA #0
    case 0xC075D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C07526.asm:82 LDA #0
    // Overlapping static entry reached from 0xC075D0.
    case 0xC075D2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C07526.asm:83 STA @VIRTUAL04
    case 0xC075D3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C07526.asm:84 STA @LOCAL00
    case 0xC075D5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C07526.asm:86 LDA @LOCAL00
    case 0xC075D7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C07526.asm:87 STA @VIRTUAL04
    case 0xC075D9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C07526.asm:88 END_C_FUNCTION
    case 0xC075DB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C07526.asm:88 END_C_FUNCTION
    case 0xC075DC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0769C.asm (unresolved).
bool execute_unresolved_c0_c0769c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0769C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0769C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0769C.asm:6 END_STACK_VARS
    case 0xC0769E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0769C.asm:6 END_STACK_VARS
    case 0xC0769F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0769C.asm:6 END_STACK_VARS
    case 0xC076A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0769C.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC076A0.
    case 0xC076A2: cpu.execute_instruction<0xFF>(0x20E25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0769C.asm:6 END_STACK_VARS
    case 0xC076A3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0769C.asm:7 SEP #PROC_FLAGS::ACCUM8
    case 0xC076A4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0769C.asm:8 STZ GAME_STATE + game_state::party_status
    case 0xC076A6: cpu.execute_instruction<0x9C>(0x009840, 3); return true;
    // src/unknown/C0/C0769C.asm:9 REP #PROC_FLAGS::ACCUM8
    case 0xC076A9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0769C.asm:10 LDA #24
    case 0xC076AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C0769C.asm:10 LDA #24
    // Overlapping static entry reached from 0xC076AB.
    case 0xC076AD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0769C.asm:11 STA @LOCAL00
    case 0xC076AE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0769C.asm:12 BRA @UNKNOWN1
    case 0xC076B0: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C0769C.asm:14 ASL
    case 0xC076B2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0769C.asm:15 TAX
    case 0xC076B3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0769C.asm:16 LDA #8
    case 0xC076B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C0/C0769C.asm:16 LDA #8
    // Overlapping static entry reached from 0xC076B4.
    case 0xC076B6: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0769C.asm:17 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC076B7: cpu.execute_instruction<0x9D>(0x000F12, 3); return true;
    // src/unknown/C0/C0769C.asm:18 LDA @LOCAL00
    case 0xC076BA: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0769C.asm:19 INC
    case 0xC076BC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0769C.asm:20 STA @LOCAL00
    case 0xC076BD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0769C.asm:22 CMP #29
    case 0xC076BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001D, 2); else cpu.execute_instruction<0xC9>(0x00001D, 3); return true;
    // src/unknown/C0/C0769C.asm:22 CMP #29
    // Overlapping static entry reached from 0xC076BF.
    case 0xC076C1: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C0769C.asm:23 BLTEQ @UNKNOWN0
    case 0xC076C2: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C0769C.asm:23 BLTEQ @UNKNOWN0
    case 0xC076C4: cpu.execute_instruction<0xF0>(0x0000EC, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0769C.asm:24 END_C_FUNCTION
    case 0xC076C6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0769C.asm:24 END_C_FUNCTION
    case 0xC076C7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C076C8.asm (unresolved).
bool execute_unresolved_c0_c076c8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C076C8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC076C8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C076C8.asm:8 END_STACK_VARS
    case 0xC076CA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C076C8.asm:8 END_STACK_VARS
    case 0xC076CB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C076C8.asm:8 END_STACK_VARS
    case 0xC076CC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C076C8.asm:8 END_STACK_VARS
    case 0xC076CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C076C8.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC076CD.
    case 0xC076CF: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C076C8.asm:8 END_STACK_VARS
    case 0xC076D0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C076C8.asm:8 END_STACK_VARS
    case 0xC076D1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C076C8.asm:9 TAY
    case 0xC076D2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C076C8.asm:10 LDX #.LOWORD(GAME_STATE) + game_state::party_status
    case 0xC076D3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x009840, 3); return true;
    // src/unknown/C0/C076C8.asm:10 LDX #.LOWORD(GAME_STATE) + game_state::party_status
    // Overlapping static entry reached from 0xC076D3.
    case 0xC076D5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C076C8.asm:11 LDA __BSS_START__,X
    case 0xC076D6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C076C8.asm:12 AND #$00FF
    case 0xC076D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C076C8.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC076D9.
    case 0xC076DB: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C076C8.asm:13 CMP #3
    case 0xC076DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C076C8.asm:13 CMP #3
    // Overlapping static entry reached from 0xC076DC.
    case 0xC076DE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C076C8.asm:14 BEQ @UNKNOWN2
    case 0xC076DF: cpu.execute_instruction<0xF0>(0x000033, 2); return true;
    // src/unknown/C0/C076C8.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC076E1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C076C8.asm:16 LDA #3
    case 0xC076E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x009D03, 3); return true;
    // src/unknown/C0/C076C8.asm:17 STA __BSS_START__,X
    case 0xC076E5: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C076C8.asm:17 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC076E3.
    case 0xC076E6: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C076C8.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC076E8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C076C8.asm:19 LDA #24
    case 0xC076EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C076C8.asm:19 LDA #24
    // Overlapping static entry reached from 0xC076EA.
    case 0xC076EC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C076C8.asm:20 STA @LOCAL01
    case 0xC076ED: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C076C8.asm:21 BRA @UNKNOWN1
    case 0xC076EF: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C076C8.asm:23 ASL
    case 0xC076F1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C076C8.asm:24 TAX
    case 0xC076F2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C076C8.asm:25 LDA #5
    case 0xC076F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C076C8.asm:25 LDA #5
    // Overlapping static entry reached from 0xC076F3.
    case 0xC076F5: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C076C8.asm:26 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC076F6: cpu.execute_instruction<0x9D>(0x000F12, 3); return true;
    // src/unknown/C0/C076C8.asm:27 LDA @LOCAL01
    case 0xC076F9: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C076C8.asm:28 INC
    case 0xC076FB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C076C8.asm:29 STA @LOCAL01
    case 0xC076FC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C076C8.asm:31 CMP #29
    case 0xC076FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001D, 2); else cpu.execute_instruction<0xC9>(0x00001D, 3); return true;
    // src/unknown/C0/C076C8.asm:31 CMP #29
    // Overlapping static entry reached from 0xC076FE.
    case 0xC07700: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C076C8.asm:32 BLTEQ @UNKNOWN0
    case 0xC07701: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C0/C076C8.asm:32 BLTEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC07730.
    case 0xC07702: cpu.execute_instruction<0xEE>(0x00ECF0, 3); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C0/C076C8.asm:32 BLTEQ @UNKNOWN0
    case 0xC07703: cpu.execute_instruction<0xF0>(0x0000EC, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C076C8.asm:33 LOADPTR UNKNOWN_C0769C, @LOCAL00
    case 0xC07705: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009C, 2); else cpu.execute_instruction<0xA9>(0x00769C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C076C8.asm:33 LOADPTR UNKNOWN_C0769C, @LOCAL00
    // Overlapping static entry reached from 0xC07705.
    case 0xC07707: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C076C8.asm:33 LOADPTR UNKNOWN_C0769C, @LOCAL00
    case 0xC07708: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C076C8.asm:33 LOADPTR UNKNOWN_C0769C, @LOCAL00
    // Overlapping static entry reached from 0xC07707.
    case 0xC07709: cpu.execute_instruction<0x0E>(0x00C0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C076C8.asm:33 LOADPTR UNKNOWN_C0769C, @LOCAL00
    case 0xC0770A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C076C8.asm:33 LOADPTR UNKNOWN_C0769C, @LOCAL00
    // Overlapping static entry reached from 0xC0770A.
    case 0xC0770C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C076C8.asm:33 LOADPTR UNKNOWN_C0769C, @LOCAL00
    case 0xC0770D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C076C8.asm:34 TYA
    case 0xC0770F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C076C8.asm:35 JSL SCHEDULE_OVERWORLD_TASK
    case 0xC07710: cpu.execute_instruction<0x22>(0xC0DBE6, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C076C8.asm:37 END_C_FUNCTION
    case 0xC07714: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C076C8.asm:37 END_C_FUNCTION
    case 0xC07715: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C07716.asm (unresolved).
bool execute_unresolved_c0_c07716_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C07716.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC07716: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C07716.asm:7 END_STACK_VARS
    case 0xC07718: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C07716.asm:7 END_STACK_VARS
    case 0xC07719: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07716.asm:7 END_STACK_VARS
    case 0xC0771A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07716.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0771A.
    case 0xC0771C: cpu.execute_instruction<0xFF>(0x89AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C07716.asm:7 END_STACK_VARS
    case 0xC0771D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:8 LDA GAME_STATE+game_state::current_party_members
    case 0xC0771E: cpu.execute_instruction<0xAD>(0x009889, 3); return true;
    // src/unknown/C0/C07716.asm:8 LDA GAME_STATE+game_state::current_party_members
    // Overlapping static entry reached from 0xC0771C.
    case 0xC07720: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:9 ASL
    case 0xC07721: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:10 TAX
    case 0xC07722: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:11 LDA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC07723: cpu.execute_instruction<0xBD>(0x0010B6, 3); return true;
    // src/unknown/C0/C07716.asm:12 AND #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC07726: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00C000, 3); return true;
    // src/unknown/C0/C07716.asm:12 AND #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC07726.
    case 0xC07728: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000D0, 2); else cpu.execute_instruction<0xC0>(0x004DD0, 3); return true;
    // src/unknown/C0/C07716.asm:13 BNE @RETURN
    case 0xC07729: cpu.execute_instruction<0xD0>(0x00004D, 2); return true;
    // src/unknown/C0/C07716.asm:13 BNE @RETURN
    // Overlapping static entry reached from 0xC07728.
    case 0xC0772A: cpu.execute_instruction<0x4D>(0x006ABD, 3); return true;
    // src/unknown/C0/C07716.asm:14 LDA ENTITY_SPRITEMAP_POINTER_HIGH,X
    case 0xC0772B: cpu.execute_instruction<0xBD>(0x00116A, 3); return true;
    // src/unknown/C0/C07716.asm:14 LDA ENTITY_SPRITEMAP_POINTER_HIGH,X
    // Overlapping static entry reached from 0xC0772A.
    case 0xC0772D: cpu.execute_instruction<0x11>(0x000029, 2); return true;
    // src/unknown/C0/C07716.asm:15 AND #$8000
    case 0xC0772E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C07716.asm:15 AND #$8000
    // Overlapping static entry reached from 0xC0772D.
    case 0xC0772F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C07716.asm:15 AND #$8000
    // Overlapping static entry reached from 0xC0772E.
    case 0xC07730: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // src/unknown/C0/C07716.asm:16 BNE @RETURN
    case 0xC07731: cpu.execute_instruction<0xD0>(0x000045, 2); return true;
    // src/unknown/C0/C07716.asm:17 LDA GAME_STATE + game_state::unknownB0
    case 0xC07733: cpu.execute_instruction<0xAD>(0x0098A5, 3); return true;
    // src/unknown/C0/C07716.asm:18 CMP #2
    case 0xC07736: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C07716.asm:18 CMP #2
    // Overlapping static entry reached from 0xC07736.
    case 0xC07738: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C07716.asm:19 BEQ @RETURN
    case 0xC07739: cpu.execute_instruction<0xF0>(0x00003D, 2); return true;
    // src/unknown/C0/C07716.asm:25 STZ @LOCAL00
    case 0xC0773B: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/unknown/C0/C07716.asm:26 STZ @LOCAL01
    case 0xC0773D: cpu.execute_instruction<0x64>(0x000010, 2); return true;
    // src/unknown/C0/C07716.asm:28 LDY #.LOWORD(-1)
    case 0xC0773F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C07716.asm:28 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0773F.
    case 0xC07741: cpu.execute_instruction<0xFF>(0x0312A2, 4); return true;
    // src/unknown/C0/C07716.asm:29 LDX #EVENT_SCRIPT::EVENT_786
    case 0xC07742: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000012, 2); else cpu.execute_instruction<0xA2>(0x000312, 3); return true;
    // src/unknown/C0/C07716.asm:29 LDX #EVENT_SCRIPT::EVENT_786
    // Overlapping static entry reached from 0xC07742.
    case 0xC07744: cpu.execute_instruction<0x03>(0x0000A9, 2); return true;
    // src/unknown/C0/C07716.asm:30 LDA #OVERWORLD_SPRITE::MINI_GHOST
    case 0xC07745: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000108, 3); return true;
    // src/unknown/C0/C07716.asm:30 LDA #OVERWORLD_SPRITE::MINI_GHOST
    // Overlapping static entry reached from 0xC07744.
    case 0xC07746: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:30 LDA #OVERWORLD_SPRITE::MINI_GHOST
    // Overlapping static entry reached from 0xC07745.
    case 0xC07747: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/unknown/C0/C07716.asm:31 JSL CREATE_ENTITY
    case 0xC07748: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/unknown/C0/C07716.asm:31 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC07747.
    case 0xC07749: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x00001E, 2); else cpu.execute_instruction<0x49>(0x00C01E, 3); return true;
    // src/unknown/C0/C07716.asm:31 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC07749.
    case 0xC0774B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00008D, 2); else cpu.execute_instruction<0xC0>(0x006B8D, 3); return true;
    // src/unknown/C0/C07716.asm:32 STA MINI_GHOST_ENTITY_ID
    case 0xC0774C: cpu.execute_instruction<0x8D>(0x009F6B, 3); return true;
    // src/unknown/C0/C07716.asm:32 STA MINI_GHOST_ENTITY_ID
    // Overlapping static entry reached from 0xC0774B.
    case 0xC0774D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:32 STA MINI_GHOST_ENTITY_ID
    // Overlapping static entry reached from 0xC0774B.
    case 0xC0774E: cpu.execute_instruction<0x9F>(0xA9AA0A, 4); return true;
    // src/unknown/C0/C07716.asm:33 ASL
    case 0xC0774F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:34 TAX
    case 0xC07750: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:35 LDA #.LOWORD(-1)
    case 0xC07751: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C07716.asm:35 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0774E.
    case 0xC07752: cpu.execute_instruction<0xFF>(0xF29DFF, 4); return true;
    // src/unknown/C0/C07716.asm:35 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC07751.
    case 0xC07753: cpu.execute_instruction<0xFF>(0x10F29D, 4); return true;
    // src/unknown/C0/C07716.asm:36 STA ENTITY_ANIMATION_FRAME,X
    case 0xC07754: cpu.execute_instruction<0x9D>(0x0010F2, 3); return true;
    // src/unknown/C0/C07716.asm:36 STA ENTITY_ANIMATION_FRAME,X
    // Overlapping static entry reached from 0xC07752.
    case 0xC07756: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/unknown/C0/C07716.asm:37 LDA MINI_GHOST_ENTITY_ID
    case 0xC07757: cpu.execute_instruction<0xAD>(0x009F6B, 3); return true;
    // src/unknown/C0/C07716.asm:37 LDA MINI_GHOST_ENTITY_ID
    // Overlapping static entry reached from 0xC07756.
    case 0xC07758: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:38 ASL
    case 0xC0775A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:39 TAX
    case 0xC0775B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:40 LDA #$FF00
    case 0xC0775C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00FF00, 3); return true;
    // src/unknown/C0/C07716.asm:40 LDA #$FF00
    // Overlapping static entry reached from 0xC077AE.
    case 0xC0775D: cpu.execute_instruction<0x00>(0x0000FF, 2); return true;
    // src/unknown/C0/C07716.asm:40 LDA #$FF00
    // Overlapping static entry reached from 0xC0775C.
    case 0xC0775E: cpu.execute_instruction<0xFF>(0x0B529D, 4); return true;
    // src/unknown/C0/C07716.asm:41 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0775F: cpu.execute_instruction<0x9D>(0x000B52, 3); return true;
    // src/unknown/C0/C07716.asm:42 LDA MINI_GHOST_ENTITY_ID
    case 0xC07762: cpu.execute_instruction<0xAD>(0x009F6B, 3); return true;
    // src/unknown/C0/C07716.asm:43 ASL
    case 0xC07765: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:44 TAX
    case 0xC07766: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:45 LDA #$FF00
    case 0xC07767: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00FF00, 3); return true;
    // src/unknown/C0/C07716.asm:45 LDA #$FF00
    // Overlapping static entry reached from 0xC07767.
    case 0xC07769: cpu.execute_instruction<0xFF>(0x0BCA9D, 4); return true;
    // src/unknown/C0/C07716.asm:46 STA ENTITY_ABS_Y_TABLE,X
    case 0xC0776A: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/unknown/C0/C07716.asm:47 LDA MINI_GHOST_ENTITY_ID
    case 0xC0776D: cpu.execute_instruction<0xAD>(0x009F6B, 3); return true;
    // src/unknown/C0/C07716.asm:48 ASL
    case 0xC07770: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:49 TAX
    case 0xC07771: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07716.asm:50 LDA #$FF00
    case 0xC07772: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00FF00, 3); return true;
    // src/unknown/C0/C07716.asm:50 LDA #$FF00
    // Overlapping static entry reached from 0xC07772.
    case 0xC07774: cpu.execute_instruction<0xFF>(0x0B8E9D, 4); return true;
    // src/unknown/C0/C07716.asm:51 STA ENTITY_ABS_X_TABLE,X
    case 0xC07775: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C07716.asm:53 END_C_FUNCTION
    case 0xC07778: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C07716.asm:53 END_C_FUNCTION
    case 0xC07779: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0777A.asm (unresolved).
bool execute_unresolved_c0_c0777a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0777A.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0777A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C0/C0777A.asm:4 LDA MINI_GHOST_ENTITY_ID
    case 0xC0777C: cpu.execute_instruction<0xAD>(0x009F6B, 3); return true;
    // src/unknown/C0/C0777A.asm:5 JSL UNKNOWN_C02140
    case 0xC0777F: cpu.execute_instruction<0x22>(0xC02140, 4); return true;
    // src/unknown/C0/C0777A.asm:6 LDA #$FFFF
    case 0xC07783: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0777A.asm:6 LDA #$FFFF
    // Overlapping static entry reached from 0xC07783.
    case 0xC07785: cpu.execute_instruction<0xFF>(0x9F6B8D, 4); return true;
    // src/unknown/C0/C0777A.asm:7 STA MINI_GHOST_ENTITY_ID
    case 0xC07786: cpu.execute_instruction<0x8D>(0x009F6B, 3); return true;
    // src/unknown/C0/C0777A.asm:8 RTL
    case 0xC07789: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0778A.asm (unresolved).
bool execute_unresolved_c0_c0778a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0778A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0778A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0778A.asm:6 END_STACK_VARS
    case 0xC0778C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0778A.asm:6 END_STACK_VARS
    case 0xC0778D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0778A.asm:6 END_STACK_VARS
    case 0xC0778E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0778A.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0778E.
    case 0xC07790: cpu.execute_instruction<0xFF>(0x89AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0778A.asm:6 END_STACK_VARS
    case 0xC07791: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:7 LDA GAME_STATE+game_state::current_party_members
    case 0xC07792: cpu.execute_instruction<0xAD>(0x009889, 3); return true;
    // src/unknown/C0/C0778A.asm:7 LDA GAME_STATE+game_state::current_party_members
    // Overlapping static entry reached from 0xC07790.
    case 0xC07794: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:8 ASL
    case 0xC07795: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:9 TAX
    case 0xC07796: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:10 LDA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC07797: cpu.execute_instruction<0xBD>(0x0010B6, 3); return true;
    // src/unknown/C0/C0778A.asm:11 AND #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC0779A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00C000, 3); return true;
    // src/unknown/C0/C0778A.asm:11 AND #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC0779A.
    case 0xC0779C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000F0, 2); else cpu.execute_instruction<0xC0>(0x000DF0, 3); return true;
    // src/unknown/C0/C0778A.asm:12 BEQ @UNKNOWN0
    case 0xC0779D: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/unknown/C0/C0778A.asm:12 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC0779C.
    case 0xC0779E: cpu.execute_instruction<0x0D>(0x0042AD, 3); return true;
    // src/unknown/C0/C0778A.asm:13 LDA CURRENT_ENTITY_SLOT
    case 0xC0779F: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0778A.asm:13 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0779E.
    case 0xC077A1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:14 ASL
    case 0xC077A2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:15 TAX
    case 0xC077A3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:16 LDA #$FFFF
    case 0xC077A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0778A.asm:16 LDA #$FFFF
    // Overlapping static entry reached from 0xC077A4.
    case 0xC077A6: cpu.execute_instruction<0xFF>(0x10F29D, 4); return true;
    // src/unknown/C0/C0778A.asm:17 STA ENTITY_ANIMATION_FRAME,X
    case 0xC077A7: cpu.execute_instruction<0x9D>(0x0010F2, 3); return true;
    // src/unknown/C0/C0778A.asm:18 BRA @UNKNOWN2
    case 0xC077AA: cpu.execute_instruction<0x80>(0x000061, 2); return true;
    // src/unknown/C0/C0778A.asm:20 LDX #$3000
    case 0xC077AC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003000, 3); return true;
    // src/unknown/C0/C0778A.asm:20 LDX #$3000
    // Overlapping static entry reached from 0xC077AC.
    case 0xC077AE: cpu.execute_instruction<0x30>(0x0000AD, 2); return true;
    // src/unknown/C0/C0778A.asm:21 LDA MINI_GHOST_ANGLE
    case 0xC077AF: cpu.execute_instruction<0xAD>(0x009F6D, 3); return true;
    // src/unknown/C0/C0778A.asm:21 LDA MINI_GHOST_ANGLE
    // Overlapping static entry reached from 0xC077AE.
    case 0xC077B0: cpu.execute_instruction<0x6D>(0x00229F, 3); return true;
    // src/unknown/C0/C0778A.asm:22 JSL UNKNOWN_C41FFF
    case 0xC077B2: cpu.execute_instruction<0x22>(0xC41FFF, 4); return true;
    // src/unknown/C0/C0778A.asm:22 JSL UNKNOWN_C41FFF
    // Overlapping static entry reached from 0xC077B0.
    case 0xC077B3: cpu.execute_instruction<0xFF>(0xA5C41F, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0778A.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC077B6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C0778A.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC077B3.
    case 0xC077B7: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0778A.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC077B8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C0778A.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC077B7.
    case 0xC077B9: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C0778A.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC077BA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C0778A.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC077BC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0778A.asm:24 LDA CURRENT_ENTITY_SLOT
    case 0xC077BE: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0778A.asm:24 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0781E.
    case 0xC077C0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:25 ASL
    case 0xC077C1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:26 TAX
    case 0xC077C2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:27 LDA @LOCAL00+2
    case 0xC077C3: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0778A.asm:28 AND #$FF00
    case 0xC077C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C0778A.asm:28 AND #$FF00
    // Overlapping static entry reached from 0xC077C5.
    case 0xC077C7: cpu.execute_instruction<0xFF>(0x0310EB, 4); return true;
    // src/unknown/C0/C0778A.asm:29 XBA
    case 0xC077C8: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:30 BPL @UNKNOWN1
    case 0xC077C9: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/unknown/C0/C0778A.asm:31 ORA #$FF00
    case 0xC077CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00FF00, 3); return true;
    // src/unknown/C0/C0778A.asm:31 ORA #$FF00
    // Overlapping static entry reached from 0xC077CB.
    case 0xC077CD: cpu.execute_instruction<0xFF>(0x776D18, 4); return true;
    // src/unknown/C0/C0778A.asm:33 CLC
    case 0xC077CE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:34 ADC GAME_STATE+game_state::leader_x_coord
    case 0xC077CF: cpu.execute_instruction<0x6D>(0x009877, 3); return true;
    // src/unknown/C0/C0778A.asm:34 ADC GAME_STATE+game_state::leader_x_coord
    // Overlapping static entry reached from 0xC077CD.
    case 0xC077D1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:35 STA ENTITY_ABS_X_TABLE,X
    case 0xC077D2: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/unknown/C0/C0778A.asm:36 LDA CURRENT_ENTITY_SLOT
    case 0xC077D5: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0778A.asm:37 ASL
    case 0xC077D8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:38 PHA
    case 0xC077D9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC077DA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0778A.asm:40 LDA #10
    case 0xC077DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00E20A, 3); return true;
    // src/unknown/C0/C0778A.asm:41 SEP #PROC_FLAGS::INDEX8
    case 0xC077DE: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C0/C0778A.asm:41 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC077DC.
    case 0xC077DF: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/unknown/C0/C0778A.asm:42 TAY
    case 0xC077E0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:43 REP #PROC_FLAGS::ACCUM8
    case 0xC077E1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0778A.asm:44 LDA @LOCAL00
    case 0xC077E3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0778A.asm:45 JSL ASR16
    case 0xC077E5: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // src/unknown/C0/C0778A.asm:46 STA @VIRTUAL02
    case 0xC077E9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0778A.asm:47 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC077EB: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C0/C0778A.asm:48 SEC
    case 0xC077EE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:49 SBC #8
    case 0xC077EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/unknown/C0/C0778A.asm:49 SBC #8
    // Overlapping static entry reached from 0xC077EF.
    case 0xC077F1: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C0/C0778A.asm:50 CLC
    case 0xC077F2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:51 ADC @VIRTUAL02
    case 0xC077F3: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0778A.asm:52 REP #PROC_FLAGS::INDEX8
    case 0xC077F5: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C0/C0778A.asm:53 PLX
    case 0xC077F7: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:54 STA ENTITY_ABS_Y_TABLE,X
    case 0xC077F8: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/unknown/C0/C0778A.asm:55 LDA MINI_GHOST_ANGLE
    case 0xC077FB: cpu.execute_instruction<0xAD>(0x009F6D, 3); return true;
    // src/unknown/C0/C0778A.asm:56 CLC
    case 0xC077FE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:57 ADC #$0300
    case 0xC077FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000300, 3); return true;
    // src/unknown/C0/C0778A.asm:57 ADC #$0300
    // Overlapping static entry reached from 0xC077FF.
    case 0xC07801: cpu.execute_instruction<0x03>(0x00008D, 2); return true;
    // src/unknown/C0/C0778A.asm:58 STA MINI_GHOST_ANGLE
    case 0xC07802: cpu.execute_instruction<0x8D>(0x009F6D, 3); return true;
    // src/unknown/C0/C0778A.asm:58 STA MINI_GHOST_ANGLE
    // Overlapping static entry reached from 0xC07801.
    case 0xC07803: cpu.execute_instruction<0x6D>(0x00AD9F, 3); return true;
    // src/unknown/C0/C0778A.asm:59 LDA CURRENT_ENTITY_SLOT
    case 0xC07805: cpu.execute_instruction<0xAD>(0x001A42, 3); return true;
    // src/unknown/C0/C0778A.asm:59 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC07803.
    case 0xC07806: cpu.execute_instruction<0x42>(0x00001A, 2); return true;
    // src/unknown/C0/C0778A.asm:60 ASL
    case 0xC07808: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:61 TAX
    case 0xC07809: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0778A.asm:62 STZ ENTITY_ANIMATION_FRAME,X
    case 0xC0780A: cpu.execute_instruction<0x9E>(0x0010F2, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0778A.asm:64 END_C_FUNCTION
    case 0xC0780D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0778A.asm:64 END_C_FUNCTION
    case 0xC0780E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0780F.asm (unresolved).
bool execute_unresolved_c0_c0780f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0780F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0780F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0780F.asm:12 END_STACK_VARS
    case 0xC07811: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C0780F.asm:12 END_STACK_VARS
    case 0xC07812: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0780F.asm:12 END_STACK_VARS
    case 0xC07813: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0780F.asm:12 END_STACK_VARS
    case 0xC07814: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0780F.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC07814.
    case 0xC07816: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0780F.asm:12 END_STACK_VARS
    case 0xC07817: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C0780F.asm:12 END_STACK_VARS
    case 0xC07818: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:13 STY @VIRTUAL04
    case 0xC07819: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C0/C0780F.asm:13 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC07816.
    case 0xC0781A: cpu.execute_instruction<0x04>(0x000086, 2); return true;
    // src/unknown/C0/C0780F.asm:14 STX @LOCAL02
    case 0xC0781B: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C0/C0780F.asm:14 STX @LOCAL02
    // Overlapping static entry reached from 0xC0781A.
    case 0xC0781C: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/unknown/C0/C0780F.asm:15 STA @LOCAL01
    case 0xC0781D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C0780F.asm:15 STA @LOCAL01
    // Overlapping static entry reached from 0xC0781C.
    case 0xC0781E: cpu.execute_instruction<0x10>(0x0000A0, 2); return true;
    // src/unknown/C0/C0780F.asm:16 LDY #0
    case 0xC0781F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0780F.asm:16 LDY #0
    // Overlapping static entry reached from 0xC0781E.
    case 0xC07820: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0780F.asm:16 LDY #0
    // Overlapping static entry reached from 0xC0781F.
    case 0xC07821: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C0/C0780F.asm:17 LDA MOVING_PARTY_MEMBER_ENTITY_ID
    case 0xC07822: cpu.execute_instruction<0xAD>(0x009F73, 3); return true;
    // src/unknown/C0/C0780F.asm:18 STA @VIRTUAL02
    case 0xC07825: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:19 LDA @LOCAL01
    case 0xC07827: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0780F.asm:20 BNE @UNKNOWN0
    case 0xC07829: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C0/C0780F.asm:21 LDA DISABLED_TRANSITIONS
    case 0xC0782B: cpu.execute_instruction<0xAD>(0x00B4B6, 3); return true;
    // src/unknown/C0/C0780F.asm:22 BNE @UNKNOWN0
    case 0xC0782E: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C0/C0780F.asm:23 LDA PAJAMA_FLAG
    case 0xC07830: cpu.execute_instruction<0xAD>(0x009F71, 3); return true;
    // src/unknown/C0/C0780F.asm:24 BEQ @UNKNOWN0
    case 0xC07833: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0780F.asm:25 LDA #OVERWORLD_SPRITE::NESS_IN_PJS
    case 0xC07835: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B5, 2); else cpu.execute_instruction<0xA9>(0x0001B5, 3); return true;
    // src/unknown/C0/C0780F.asm:25 LDA #OVERWORLD_SPRITE::NESS_IN_PJS
    // Overlapping static entry reached from 0xC07835.
    case 0xC07837: cpu.execute_instruction<0x01>(0x00004C, 2); return true;
    // src/unknown/C0/C0780F.asm:26 JMP @UNKNOWN28
    case 0xC07838: cpu.execute_instruction<0x4C>(0x0079EA, 3); return true;
    // src/unknown/C0/C0780F.asm:26 JMP @UNKNOWN28
    // Overlapping static entry reached from 0xC07837.
    case 0xC07839: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:26 JMP @UNKNOWN28
    // Overlapping static entry reached from 0xC07839.
    case 0xC0783A: cpu.execute_instruction<0x79>(0x0002A5, 3); return true;
    // src/unknown/C0/C0780F.asm:28 LDA @VIRTUAL02
    case 0xC0783B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:29 CMP #.LOWORD(-1)
    case 0xC0783D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0780F.asm:29 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0783D.
    case 0xC0783F: cpu.execute_instruction<0xFF>(0xA507F0, 4); return true;
    // src/unknown/C0/C0780F.asm:30 BEQ @UNKNOWN1
    case 0xC07840: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C0780F.asm:31 LDA @VIRTUAL02
    case 0xC07842: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:31 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC0783F.
    case 0xC07843: cpu.execute_instruction<0x02>(0x00000A, 2); return true;
    // src/unknown/C0/C0780F.asm:32 ASL
    case 0xC07844: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:33 TAX
    case 0xC07845: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:34 STZ ENTITY_OVERLAY_FLAGS,X
    case 0xC07846: cpu.execute_instruction<0x9E>(0x002E7A, 3); return true;
    // src/unknown/C0/C0780F.asm:36 LDA GAME_STATE + game_state::party_status
    case 0xC07849: cpu.execute_instruction<0xAD>(0x009840, 3); return true;
    // src/unknown/C0/C0780F.asm:37 AND #$00FF
    case 0xC0784C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0780F.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC078AE.
    case 0xC0784D: cpu.execute_instruction<0xFF>(0x01C900, 4); return true;
    // src/unknown/C0/C0780F.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC0784C.
    case 0xC0784E: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0780F.asm:38 CMP #1
    case 0xC0784F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0780F.asm:38 CMP #1
    // Overlapping static entry reached from 0xC0784F.
    case 0xC07851: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0780F.asm:39 BNE @UNKNOWN3
    case 0xC07852: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/unknown/C0/C0780F.asm:40 LDA GAME_STATE + game_state::unknown92
    case 0xC07854: cpu.execute_instruction<0xAD>(0x009887, 3); return true;
    // src/unknown/C0/C0780F.asm:41 CMP #3
    case 0xC07857: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0780F.asm:41 CMP #3
    // Overlapping static entry reached from 0xC07857.
    case 0xC07859: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:42 BEQ @UNKNOWN2
    case 0xC0785A: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0780F.asm:43 LDA #13
    case 0xC0785C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00000D, 3); return true;
    // src/unknown/C0/C0780F.asm:43 LDA #13
    // Overlapping static entry reached from 0xC0785C.
    case 0xC0785E: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0780F.asm:44 JMP @UNKNOWN28
    case 0xC0785F: cpu.execute_instruction<0x4C>(0x0079EA, 3); return true;
    // src/unknown/C0/C0780F.asm:46 LDA #37
    case 0xC07862: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000025, 2); else cpu.execute_instruction<0xA9>(0x000025, 3); return true;
    // src/unknown/C0/C0780F.asm:46 LDA #37
    // Overlapping static entry reached from 0xC07862.
    case 0xC07864: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0780F.asm:47 JMP @UNKNOWN28
    case 0xC07865: cpu.execute_instruction<0x4C>(0x0079EA, 3); return true;
    // src/unknown/C0/C0780F.asm:49 LDX @VIRTUAL04
    case 0xC07868: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0780F.asm:50 LDA a:char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC0786A: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C0/C0780F.asm:51 AND #$00FF
    case 0xC0786D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0780F.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xC0786D.
    case 0xC0786F: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0780F.asm:52 CMP #STATUS_0::UNCONSCIOUS
    case 0xC07870: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0780F.asm:52 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC07870.
    case 0xC07872: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:53 BEQ @UNKNOWN4
    case 0xC07873: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C0780F.asm:54 CMP #STATUS_0::DIAMONDIZED
    case 0xC07875: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0780F.asm:54 CMP #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC07875.
    case 0xC07877: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:55 BEQ @UNKNOWN5
    case 0xC07878: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C0780F.asm:56 CMP #STATUS_0::NAUSEOUS
    case 0xC0787A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0780F.asm:56 CMP #STATUS_0::NAUSEOUS
    // Overlapping static entry reached from 0xC0787A.
    case 0xC0787C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:57 BEQ @UNKNOWN7
    case 0xC0787D: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/C0/C0780F.asm:58 BRA @UNKNOWN8
    case 0xC0787F: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/unknown/C0/C0780F.asm:60 LDY #1
    case 0xC07881: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C0780F.asm:60 LDY #1
    // Overlapping static entry reached from 0xC07881.
    case 0xC07883: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0780F.asm:61 BRA @UNKNOWN8
    case 0xC07884: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/unknown/C0/C0780F.asm:63 LDA GAME_STATE + game_state::unknown92
    case 0xC07886: cpu.execute_instruction<0xAD>(0x009887, 3); return true;
    // src/unknown/C0/C0780F.asm:64 CMP #3
    case 0xC07889: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0780F.asm:64 CMP #3
    // Overlapping static entry reached from 0xC07889.
    case 0xC0788B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:65 BEQ @UNKNOWN6
    case 0xC0788C: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C0780F.asm:66 LDA #12
    case 0xC0788E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C0/C0780F.asm:66 LDA #12
    // Overlapping static entry reached from 0xC0788E.
    case 0xC07890: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0780F.asm:67 JMP @UNKNOWN28
    case 0xC07891: cpu.execute_instruction<0x4C>(0x0079EA, 3); return true;
    // src/unknown/C0/C0780F.asm:69 LDA #36
    case 0xC07894: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x000024, 3); return true;
    // src/unknown/C0/C0780F.asm:69 LDA #36
    // Overlapping static entry reached from 0xC07894.
    case 0xC07896: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0780F.asm:70 JMP @UNKNOWN28
    case 0xC07897: cpu.execute_instruction<0x4C>(0x0079EA, 3); return true;
    // src/unknown/C0/C0780F.asm:72 LDA @VIRTUAL02
    case 0xC0789A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:73 CMP #.LOWORD(-1)
    case 0xC0789C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0780F.asm:73 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0789C.
    case 0xC0789E: cpu.execute_instruction<0xFF>(0xA511F0, 4); return true;
    // src/unknown/C0/C0780F.asm:74 BEQ @UNKNOWN8
    case 0xC0789F: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C0780F.asm:75 LDA @VIRTUAL02
    case 0xC078A1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:75 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC0789E.
    case 0xC078A2: cpu.execute_instruction<0x02>(0x00000A, 2); return true;
    // src/unknown/C0/C0780F.asm:76 ASL
    case 0xC078A3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:77 CLC
    case 0xC078A4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:78 ADC #.LOWORD(ENTITY_OVERLAY_FLAGS)
    case 0xC078A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007A, 2); else cpu.execute_instruction<0x69>(0x002E7A, 3); return true;
    // src/unknown/C0/C0780F.asm:78 ADC #.LOWORD(ENTITY_OVERLAY_FLAGS)
    // Overlapping static entry reached from 0xC078A5.
    case 0xC078A7: cpu.execute_instruction<0x2E>(0x00BDAA, 3); return true;
    // src/unknown/C0/C0780F.asm:79 TAX
    case 0xC078A8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:80 LDA __BSS_START__,X
    case 0xC078A9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0780F.asm:80 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC078A7.
    case 0xC078AA: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0780F.asm:81 ORA #$8000
    case 0xC078AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/unknown/C0/C0780F.asm:81 ORA #$8000
    // Overlapping static entry reached from 0xC078AC.
    case 0xC078AE: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/C0/C0780F.asm:82 STA __BSS_START__,X
    case 0xC078AF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0780F.asm:84 LDX @VIRTUAL04
    case 0xC078B2: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0780F.asm:85 LDA a:char_struct::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC078B4: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/unknown/C0/C0780F.asm:86 AND #$00FF
    case 0xC078B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0780F.asm:86 AND #$00FF
    // Overlapping static entry reached from 0xC078B7.
    case 0xC078B9: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0780F.asm:87 CMP #STATUS_1::MUSHROOMIZED
    case 0xC078BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0780F.asm:87 CMP #STATUS_1::MUSHROOMIZED
    // Overlapping static entry reached from 0xC078BA.
    case 0xC078BC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:88 BEQ @UNKNOWN9
    case 0xC078BD: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C0780F.asm:89 CMP #STATUS_1::POSSESSED
    case 0xC078BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C0780F.asm:89 CMP #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC078BF.
    case 0xC078C1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:90 BEQ @UNKNOWN10
    case 0xC078C2: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C0/C0780F.asm:91 BRA @UNKNOWN11
    case 0xC078C4: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/unknown/C0/C0780F.asm:93 LDA @VIRTUAL02
    case 0xC078C6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:94 CMP #.LOWORD(-1)
    case 0xC078C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0780F.asm:94 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC078C8.
    case 0xC078CA: cpu.execute_instruction<0xFF>(0xA516F0, 4); return true;
    // src/unknown/C0/C0780F.asm:95 BEQ @UNKNOWN11
    case 0xC078CB: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C0/C0780F.asm:96 LDA @VIRTUAL02
    case 0xC078CD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:96 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC078CA.
    case 0xC078CE: cpu.execute_instruction<0x02>(0x00000A, 2); return true;
    // src/unknown/C0/C0780F.asm:97 ASL
    case 0xC078CF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:98 CLC
    case 0xC078D0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:99 ADC #.LOWORD(ENTITY_OVERLAY_FLAGS)
    case 0xC078D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007A, 2); else cpu.execute_instruction<0x69>(0x002E7A, 3); return true;
    // src/unknown/C0/C0780F.asm:99 ADC #.LOWORD(ENTITY_OVERLAY_FLAGS)
    // Overlapping static entry reached from 0xC078D1.
    case 0xC078D3: cpu.execute_instruction<0x2E>(0x00BDAA, 3); return true;
    // src/unknown/C0/C0780F.asm:100 TAX
    case 0xC078D4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:101 LDA __BSS_START__,X
    case 0xC078D5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C0780F.asm:101 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC078D3.
    case 0xC078D6: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C0780F.asm:102 ORA #$4000
    case 0xC078D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x004000, 3); return true;
    // src/unknown/C0/C0780F.asm:102 ORA #$4000
    // Overlapping static entry reached from 0xC078D8.
    case 0xC078DA: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:103 STA __BSS_START__,X
    case 0xC078DB: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0780F.asm:104 BRA @UNKNOWN11
    case 0xC078DE: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0780F.asm:106 INC POSSESSED_PLAYER_COUNT
    case 0xC078E0: cpu.execute_instruction<0xEE>(0x009F6F, 3); return true;
    // src/unknown/C0/C0780F.asm:108 LDA GAME_STATE + game_state::unknown92
    case 0xC078E3: cpu.execute_instruction<0xAD>(0x009887, 3); return true;
    // src/unknown/C0/C0780F.asm:109 CMP #6
    case 0xC078E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C0/C0780F.asm:109 CMP #6
    // Overlapping static entry reached from 0xC078E6.
    case 0xC078E8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:110 BEQ @UNKNOWN12
    case 0xC078E9: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C0780F.asm:111 CMP #4
    case 0xC078EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0780F.asm:111 CMP #4
    // Overlapping static entry reached from 0xC078EB.
    case 0xC078ED: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:112 BEQ @UNKNOWN13
    case 0xC078EE: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C0780F.asm:113 BRA @UNKNOWN14
    case 0xC078F0: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C0/C0780F.asm:115 LDA #7
    case 0xC078F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C0/C0780F.asm:115 LDA #7
    // Overlapping static entry reached from 0xC078F2.
    case 0xC078F4: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0780F.asm:116 JMP @UNKNOWN28
    case 0xC078F5: cpu.execute_instruction<0x4C>(0x0079EA, 3); return true;
    // src/unknown/C0/C0780F.asm:118 LDX @VIRTUAL04
    case 0xC078F8: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0780F.asm:119 LDA a:char_struct::unknown53,X
    case 0xC078FA: cpu.execute_instruction<0xBD>(0x000035, 3); return true;
    // src/unknown/C0/C0780F.asm:120 BNE @UNKNOWN14
    case 0xC078FD: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0780F.asm:121 LDA #6
    case 0xC078FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C0/C0780F.asm:121 LDA #6
    // Overlapping static entry reached from 0xC078FF.
    case 0xC07901: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C0/C0780F.asm:122 JMP @UNKNOWN28
    case 0xC07902: cpu.execute_instruction<0x4C>(0x0079EA, 3); return true;
    // src/unknown/C0/C0780F.asm:124 CPY #0
    case 0xC07905: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C0/C0780F.asm:124 CPY #0
    // Overlapping static entry reached from 0xC07905.
    case 0xC07907: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0780F.asm:125 BNE @UNKNOWN19
    case 0xC07908: cpu.execute_instruction<0xD0>(0x000031, 2); return true;
    // src/unknown/C0/C0780F.asm:126 LDA @LOCAL02
    case 0xC0790A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C0780F.asm:127 BEQ @UNKNOWN15
    case 0xC0790C: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/unknown/C0/C0780F.asm:128 CMP #12
    case 0xC0790E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/unknown/C0/C0780F.asm:128 CMP #12
    // Overlapping static entry reached from 0xC0790E.
    case 0xC07910: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:129 BEQ @UNKNOWN15
    case 0xC07911: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C0/C0780F.asm:130 CMP #13
    case 0xC07913: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000D, 2); else cpu.execute_instruction<0xC9>(0x00000D, 3); return true;
    // src/unknown/C0/C0780F.asm:130 CMP #13
    // Overlapping static entry reached from 0xC07913.
    case 0xC07915: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:131 BEQ @UNKNOWN15
    case 0xC07916: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C0780F.asm:132 CMP #4
    case 0xC07918: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0780F.asm:132 CMP #4
    // Overlapping static entry reached from 0xC07918.
    case 0xC0791A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:133 BEQ @UNKNOWN16
    case 0xC0791B: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C0780F.asm:134 CMP #7
    case 0xC0791D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C0/C0780F.asm:134 CMP #7
    // Overlapping static entry reached from 0xC0791D.
    case 0xC0791F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:135 BEQ @UNKNOWN17
    case 0xC07920: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C0780F.asm:136 CMP #8
    case 0xC07922: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C0/C0780F.asm:136 CMP #8
    // Overlapping static entry reached from 0xC07922.
    case 0xC07924: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0780F.asm:137 BEQ @UNKNOWN18
    case 0xC07925: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C0780F.asm:138 BRA @UNKNOWN19
    case 0xC07927: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C0/C0780F.asm:140 LDY #0
    case 0xC07929: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0780F.asm:140 LDY #0
    // Overlapping static entry reached from 0xC07929.
    case 0xC0792B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0780F.asm:141 BRA @UNKNOWN19
    case 0xC0792C: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C0780F.asm:143 LDY #1
    case 0xC0792E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C0780F.asm:143 LDY #1
    // Overlapping static entry reached from 0xC0792E.
    case 0xC07930: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0780F.asm:144 BRA @UNKNOWN19
    case 0xC07931: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C0/C0780F.asm:146 LDY #2
    case 0xC07933: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C0/C0780F.asm:146 LDY #2
    // Overlapping static entry reached from 0xC07933.
    case 0xC07935: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0780F.asm:147 BRA @UNKNOWN19
    case 0xC07936: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C0780F.asm:149 LDY #3
    case 0xC07938: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C0/C0780F.asm:149 LDY #3
    // Overlapping static entry reached from 0xC07938.
    case 0xC0793A: cpu.execute_instruction<0x00>(0x0000AE, 2); return true;
    // src/unknown/C0/C0780F.asm:151 LDX GAME_STATE + game_state::unknown92
    case 0xC0793B: cpu.execute_instruction<0xAE>(0x009887, 3); return true;
    // src/unknown/C0/C0780F.asm:152 CPX #3
    case 0xC0793E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/unknown/C0/C0780F.asm:152 CPX #3
    // Overlapping static entry reached from 0xC0793E.
    case 0xC07940: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0780F.asm:153 BNE @UNKNOWN20
    case 0xC07941: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C0/C0780F.asm:154 INY
    case 0xC07943: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:155 INY
    case 0xC07944: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:156 INY
    case 0xC07945: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:157 INY
    case 0xC07946: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:158 LDA @VIRTUAL02
    case 0xC07947: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:159 ASL
    case 0xC07949: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:160 TAX
    case 0xC0794A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:161 STZ ENTITY_OVERLAY_FLAGS,X
    case 0xC0794B: cpu.execute_instruction<0x9E>(0x002E7A, 3); return true;
    // src/unknown/C0/C0780F.asm:162 BRA @UNKNOWN21
    case 0xC0794E: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C0/C0780F.asm:164 CPX #5
    case 0xC07950: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000005, 2); else cpu.execute_instruction<0xE0>(0x000005, 3); return true;
    // src/unknown/C0/C0780F.asm:164 CPX #5
    // Overlapping static entry reached from 0xC07950.
    case 0xC07952: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0780F.asm:165 BNE @UNKNOWN21
    case 0xC07953: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C0/C0780F.asm:166 CPY #0
    case 0xC07955: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C0/C0780F.asm:166 CPY #0
    // Overlapping static entry reached from 0xC07955.
    case 0xC07957: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0780F.asm:167 BNE @UNKNOWN21
    case 0xC07958: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0780F.asm:168 TYA
    case 0xC0795A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:169 CLC
    case 0xC0795B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:170 ADC #6
    case 0xC0795C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/unknown/C0/C0780F.asm:170 ADC #6
    // Overlapping static entry reached from 0xC0795C.
    case 0xC0795E: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C0780F.asm:171 TAY
    case 0xC0795F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:173 LDA GAME_STATE + game_state::party_status
    case 0xC07960: cpu.execute_instruction<0xAD>(0x009840, 3); return true;
    // src/unknown/C0/C0780F.asm:174 AND #$00FF
    case 0xC07963: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0780F.asm:174 AND #$00FF
    // Overlapping static entry reached from 0xC07963.
    case 0xC07965: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0780F.asm:175 CMP #3
    case 0xC07966: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0780F.asm:175 CMP #3
    // Overlapping static entry reached from 0xC07966.
    case 0xC07968: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0780F.asm:176 BNE @UNKNOWN22
    case 0xC07969: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/C0/C0780F.asm:177 LDA @VIRTUAL02
    case 0xC0796B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:178 ASL
    case 0xC0796D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:179 TAX
    case 0xC0796E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:180 LDA #5
    case 0xC0796F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C0/C0780F.asm:180 LDA #5
    // Overlapping static entry reached from 0xC0796F.
    case 0xC07971: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0780F.asm:181 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC07972: cpu.execute_instruction<0x9D>(0x000F12, 3); return true;
    // src/unknown/C0/C0780F.asm:182 BRA @UNKNOWN26
    case 0xC07975: cpu.execute_instruction<0x80>(0x00004A, 2); return true;
    // src/unknown/C0/C0780F.asm:184 LDX @VIRTUAL04
    case 0xC07977: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0780F.asm:185 LDA a:char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC07979: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C0/C0780F.asm:186 AND #$00FF
    case 0xC0797C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0780F.asm:186 AND #$00FF
    // Overlapping static entry reached from 0xC0797C.
    case 0xC0797E: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0780F.asm:187 CMP #STATUS_0::UNCONSCIOUS
    case 0xC0797F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0780F.asm:187 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC0797F.
    case 0xC07981: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0780F.asm:188 BNE @UNKNOWN23
    case 0xC07982: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/C0/C0780F.asm:189 LDA @VIRTUAL02
    case 0xC07984: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:190 ASL
    case 0xC07986: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:191 TAX
    case 0xC07987: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:192 LDA #16
    case 0xC07988: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C0/C0780F.asm:192 LDA #16
    // Overlapping static entry reached from 0xC07988.
    case 0xC0798A: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0780F.asm:193 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC0798B: cpu.execute_instruction<0x9D>(0x000F12, 3); return true;
    // src/unknown/C0/C0780F.asm:194 BRA @UNKNOWN26
    case 0xC0798E: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/unknown/C0/C0780F.asm:196 LDA @VIRTUAL02
    case 0xC07990: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:197 ASL
    case 0xC07992: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:198 TAX
    case 0xC07993: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:199 LDA ENTITY_SURFACE_FLAGS,X
    case 0xC07994: cpu.execute_instruction<0xBD>(0x002BAA, 3); return true;
    // src/unknown/C0/C0780F.asm:200 STA @LOCAL00
    case 0xC07997: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C0780F.asm:201 AND #$000C
    case 0xC07999: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/unknown/C0/C0780F.asm:201 AND #$000C
    // Overlapping static entry reached from 0xC07999.
    case 0xC0799B: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0780F.asm:202 CMP #12
    case 0xC0799C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/unknown/C0/C0780F.asm:202 CMP #12
    // Overlapping static entry reached from 0xC0799C.
    case 0xC0799E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0780F.asm:203 BNE @UNKNOWN24
    case 0xC0799F: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C0/C0780F.asm:204 LDA #24
    case 0xC079A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C0780F.asm:204 LDA #24
    // Overlapping static entry reached from 0xC079A1.
    case 0xC079A3: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0780F.asm:205 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC079A4: cpu.execute_instruction<0x9D>(0x000F12, 3); return true;
    // src/unknown/C0/C0780F.asm:206 BRA @UNKNOWN26
    case 0xC079A7: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/unknown/C0/C0780F.asm:208 LDA @LOCAL00
    case 0xC079A9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0780F.asm:209 AND #$0008
    case 0xC079AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000008, 2); else cpu.execute_instruction<0x29>(0x000008, 3); return true;
    // src/unknown/C0/C0780F.asm:209 AND #$0008
    // Overlapping static entry reached from 0xC079AB.
    case 0xC079AD: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0780F.asm:210 CMP #8
    case 0xC079AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C0/C0780F.asm:210 CMP #8
    // Overlapping static entry reached from 0xC079AE.
    case 0xC079B0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0780F.asm:211 BNE @UNKNOWN25
    case 0xC079B1: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C0/C0780F.asm:212 LDA #16
    case 0xC079B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C0/C0780F.asm:212 LDA #16
    // Overlapping static entry reached from 0xC079B3.
    case 0xC079B5: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0780F.asm:213 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC079B6: cpu.execute_instruction<0x9D>(0x000F12, 3); return true;
    // src/unknown/C0/C0780F.asm:214 BRA @UNKNOWN26
    case 0xC079B9: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C0780F.asm:216 LDA #8
    case 0xC079BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C0/C0780F.asm:216 LDA #8
    // Overlapping static entry reached from 0xC079BB.
    case 0xC079BD: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0780F.asm:217 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC079BE: cpu.execute_instruction<0x9D>(0x000F12, 3); return true;
    // src/unknown/C0/C0780F.asm:219 LDX @VIRTUAL04
    case 0xC079C1: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C0780F.asm:220 LDA a:char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC079C3: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C0/C0780F.asm:221 AND #$00FF
    case 0xC079C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0780F.asm:221 AND #$00FF
    // Overlapping static entry reached from 0xC079C6.
    case 0xC079C8: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C0780F.asm:222 CMP #STATUS_0::PARALYZED
    case 0xC079C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0780F.asm:222 CMP #STATUS_0::PARALYZED
    // Overlapping static entry reached from 0xC079C9.
    case 0xC079CB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0780F.asm:223 BNE @UNKNOWN27
    case 0xC079CC: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C0/C0780F.asm:224 LDA @VIRTUAL02
    case 0xC079CE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:225 ASL
    case 0xC079D0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:226 TAX
    case 0xC079D1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:227 LDA #56
    case 0xC079D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000038, 2); else cpu.execute_instruction<0xA9>(0x000038, 3); return true;
    // src/unknown/C0/C0780F.asm:227 LDA #56
    // Overlapping static entry reached from 0xC079D2.
    case 0xC079D4: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0780F.asm:228 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC079D5: cpu.execute_instruction<0x9D>(0x000F12, 3); return true;
    // src/unknown/C0/C0780F.asm:230 TYA
    case 0xC079D8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:231 ASL
    case 0xC079D9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:232 STA @VIRTUAL02
    case 0xC079DA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:233 LDA @LOCAL01
    case 0xC079DC: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0780F.asm:234 ASL
    case 0xC079DE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:235 ASL
    case 0xC079DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:236 ASL
    case 0xC079E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:237 ASL
    case 0xC079E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:238 CLC
    case 0xC079E2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:239 ADC @VIRTUAL02
    case 0xC079E3: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C0780F.asm:240 TAX
    case 0xC079E5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:241 LDA f:PLAYABLE_CHAR_GFX_TABLE,X
    case 0xC079E6: cpu.execute_instruction<0xBF>(0xC3F2B5, 4); return true;
    // src/unknown/C0/C0780F.asm:243 PLD
    case 0xC079EA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0780F.asm:244 RTL
    case 0xC079EB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C079EC.asm (unresolved).
bool execute_unresolved_c0_c079ec_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C079EC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC079EC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C079EC.asm:8 END_STACK_VARS
    case 0xC079EE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C079EC.asm:8 END_STACK_VARS
    case 0xC079EF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C079EC.asm:8 END_STACK_VARS
    case 0xC079F0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C079EC.asm:8 END_STACK_VARS
    case 0xC079F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C079EC.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC079F1.
    case 0xC079F3: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C079EC.asm:8 END_STACK_VARS
    case 0xC079F4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C079EC.asm:8 END_STACK_VARS
    case 0xC079F5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C079EC.asm:9 STA @LOCAL00
    case 0xC079F6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C079EC.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC079F3.
    case 0xC079F7: cpu.execute_instruction<0x0E>(0x0000A2, 3); return true;
    // src/unknown/C0/C079EC.asm:10 LDX #0
    case 0xC079F8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C079EC.asm:10 LDX #0
    // Overlapping static entry reached from 0xC079F8.
    case 0xC079FA: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C079EC.asm:11 AND #$0020
    case 0xC079FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000020, 2); else cpu.execute_instruction<0x29>(0x000020, 3); return true;
    // src/unknown/C0/C079EC.asm:11 AND #$0020
    // Overlapping static entry reached from 0xC079FB.
    case 0xC079FD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C079EC.asm:12 BEQ @UNKNOWN0
    case 0xC079FE: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C079EC.asm:13 LDX #1
    case 0xC07A00: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C079EC.asm:13 LDX #1
    // Overlapping static entry reached from 0xC07A00.
    case 0xC07A02: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C079EC.asm:14 BRA @UNKNOWN1
    case 0xC07A03: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C0/C079EC.asm:16 LDA @LOCAL00
    case 0xC07A05: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C079EC.asm:17 AND #$0040
    case 0xC07A07: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/unknown/C0/C079EC.asm:17 AND #$0040
    // Overlapping static entry reached from 0xC07A07.
    case 0xC07A09: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C079EC.asm:18 BEQ @UNKNOWN1
    case 0xC07A0A: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C079EC.asm:19 LDA #12
    case 0xC07A0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C0/C079EC.asm:19 LDA #12
    // Overlapping static entry reached from 0xC07A0C.
    case 0xC07A0E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C079EC.asm:20 BRA @UNKNOWN2
    case 0xC07A0F: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/unknown/C0/C079EC.asm:22 TXA
    case 0xC07A11: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C079EC.asm:23 ASL
    case 0xC07A12: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C079EC.asm:24 STA @VIRTUAL02
    case 0xC07A13: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C079EC.asm:25 LDA @LOCAL00
    case 0xC07A15: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C079EC.asm:26 AND #$001F
    case 0xC07A17: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C0/C079EC.asm:26 AND #$001F
    // Overlapping static entry reached from 0xC07A17.
    case 0xC07A19: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C0/C079EC.asm:27 DEC
    case 0xC07A1A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C079EC.asm:28 ASL
    case 0xC07A1B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C079EC.asm:29 ASL
    case 0xC07A1C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C079EC.asm:30 ASL
    case 0xC07A1D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C079EC.asm:31 ASL
    case 0xC07A1E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C079EC.asm:32 CLC
    case 0xC07A1F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C079EC.asm:33 ADC @VIRTUAL02
    case 0xC07A20: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C0/C079EC.asm:34 TAX
    case 0xC07A22: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C079EC.asm:35 LDA f:PLAYABLE_CHAR_GFX_TABLE,X
    case 0xC07A23: cpu.execute_instruction<0xBF>(0xC3F2B5, 4); return true;
    // src/unknown/C0/C079EC.asm:36 CMP #1
    case 0xC07A27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C079EC.asm:36 CMP #1
    // Overlapping static entry reached from 0xC07A27.
    case 0xC07A29: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C079EC.asm:37 BNE @UNKNOWN2
    case 0xC07A2A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C079EC.asm:38 LDA #14
    case 0xC07A2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/unknown/C0/C079EC.asm:38 LDA #14
    // Overlapping static entry reached from 0xC07A2C.
    case 0xC07A2E: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C079EC.asm:40 END_C_FUNCTION
    case 0xC07A2F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C079EC.asm:40 END_C_FUNCTION
    case 0xC07A30: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C07A31.asm (unresolved).
bool execute_unresolved_c0_c07a31_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C07A31.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC07A31: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C07A31.asm:7 END_STACK_VARS
    case 0xC07A33: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C07A31.asm:7 END_STACK_VARS
    case 0xC07A34: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C07A31.asm:7 END_STACK_VARS
    case 0xC07A35: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07A31.asm:7 END_STACK_VARS
    case 0xC07A36: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07A31.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC07A36.
    case 0xC07A38: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C07A31.asm:7 END_STACK_VARS
    case 0xC07A39: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C07A31.asm:7 END_STACK_VARS
    case 0xC07A3A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C07A31.asm:8 STA @LOCAL00
    case 0xC07A3B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C07A31.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC07A38.
    case 0xC07A3C: cpu.execute_instruction<0x0E>(0x00298A, 3); return true;
    // src/unknown/C0/C07A31.asm:9 TXA
    case 0xC07A3D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C07A31.asm:10 AND #$0080
    case 0xC07A3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/C0/C07A31.asm:10 AND #$0080
    // Overlapping static entry reached from 0xC07A3C.
    case 0xC07A3F: cpu.execute_instruction<0x80>(0x000000, 2); return true;
    // src/unknown/C0/C07A31.asm:10 AND #$0080
    // Overlapping static entry reached from 0xC07A3E.
    case 0xC07A40: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C07A31.asm:11 BEQ @UNKNOWN0
    case 0xC07A41: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C0/C07A31.asm:12 LDA @LOCAL00
    case 0xC07A43: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C07A31.asm:13 ASL
    case 0xC07A45: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07A31.asm:14 CLC
    case 0xC07A46: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07A31.asm:15 ADC #.LOWORD(ENTITY_OVERLAY_FLAGS)
    case 0xC07A47: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007A, 2); else cpu.execute_instruction<0x69>(0x002E7A, 3); return true;
    // src/unknown/C0/C07A31.asm:15 ADC #.LOWORD(ENTITY_OVERLAY_FLAGS)
    // Overlapping static entry reached from 0xC07A47.
    case 0xC07A49: cpu.execute_instruction<0x2E>(0x00BDAA, 3); return true;
    // src/unknown/C0/C07A31.asm:16 TAX
    case 0xC07A4A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07A31.asm:17 LDA __BSS_START__,X
    case 0xC07A4B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C07A31.asm:17 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC07A49.
    case 0xC07A4C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C07A31.asm:18 ORA #$4000
    case 0xC07A4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x004000, 3); return true;
    // src/unknown/C0/C07A31.asm:18 ORA #$4000
    // Overlapping static entry reached from 0xC07A4E.
    case 0xC07A50: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C07A31.asm:19 STA __BSS_START__,X
    case 0xC07A51: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C07A31.asm:21 END_C_FUNCTION
    case 0xC07A54: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C07A31.asm:21 END_C_FUNCTION
    case 0xC07A55: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C07A56.asm (unresolved).
bool execute_unresolved_c0_c07a56_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C07A56.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC07A56: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C07A56.asm:12 END_STACK_VARS
    case 0xC07A58: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C07A56.asm:12 END_STACK_VARS
    case 0xC07A59: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C07A56.asm:12 END_STACK_VARS
    case 0xC07A5A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07A56.asm:12 END_STACK_VARS
    case 0xC07A5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07A56.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC07A5B.
    case 0xC07A5D: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C07A56.asm:12 END_STACK_VARS
    case 0xC07A5E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C07A56.asm:12 END_STACK_VARS
    case 0xC07A5F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:13 STY @VIRTUAL04
    case 0xC07A60: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C0/C07A56.asm:13 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC07A5D.
    case 0xC07A61: cpu.execute_instruction<0x04>(0x000086, 2); return true;
    // src/unknown/C0/C07A56.asm:14 STX @VIRTUAL02
    case 0xC07A62: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C07A56.asm:14 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC07A61.
    case 0xC07A63: cpu.execute_instruction<0x02>(0x000086, 2); return true;
    // src/unknown/C0/C07A56.asm:15 STX @LOCAL03
    case 0xC07A64: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C0/C07A56.asm:16 STA @LOCAL02
    case 0xC07A66: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C07A56.asm:17 LDA @VIRTUAL04
    case 0xC07A68: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C07A56.asm:18 STA MOVING_PARTY_MEMBER_ENTITY_ID
    case 0xC07A6A: cpu.execute_instruction<0x8D>(0x009F73, 3); return true;
    // src/unknown/C0/C07A56.asm:19 LDY CURRENT_PARTY_MEMBER_TICK
    case 0xC07A6D: cpu.execute_instruction<0xAC>(0x004DC6, 3); return true;
    // src/unknown/C0/C07A56.asm:20 LDX @VIRTUAL02
    case 0xC07A70: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C07A56.asm:21 LDA @LOCAL02
    case 0xC07A72: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C0/C07A56.asm:22 JSL UNKNOWN_C0780F
    case 0xC07A74: cpu.execute_instruction<0x22>(0xC0780F, 4); return true;
    // src/unknown/C0/C07A56.asm:23 STA @LOCAL01
    case 0xC07A78: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C07A56.asm:24 CMP #.LOWORD(-1)
    case 0xC07A7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C07A56.asm:24 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC07A7A.
    case 0xC07A7C: cpu.execute_instruction<0xFF>(0xA50CD0, 4); return true;
    // src/unknown/C0/C07A56.asm:25 BNE @UNKNOWN0
    case 0xC07A7D: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/C0/C07A56.asm:26 LDA @VIRTUAL04
    case 0xC07A7F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C07A56.asm:26 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC07A7C.
    case 0xC07A80: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // src/unknown/C0/C07A56.asm:27 ASL
    case 0xC07A81: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:28 TAX
    case 0xC07A82: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:29 LDA @LOCAL01
    case 0xC07A83: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C07A56.asm:30 STA ENTITY_ANIMATION_FRAME,X
    case 0xC07A85: cpu.execute_instruction<0x9D>(0x0010F2, 3); return true;
    // src/unknown/C0/C07A56.asm:31 JMP @UNKNOWN3
    case 0xC07A88: cpu.execute_instruction<0x4C>(0x007B37, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C07A56.asm:33 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC07A8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003F, 2); else cpu.execute_instruction<0xA9>(0x00133F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C07A56.asm:33 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC07A8B.
    case 0xC07A8D: cpu.execute_instruction<0x13>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C07A56.asm:33 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC07A8E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C07A56.asm:33 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC07A8D.
    case 0xC07A8F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C07A56.asm:33 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC07A90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C07A56.asm:33 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC07A90.
    case 0xC07A92: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C07A56.asm:33 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC07A93: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C0/C07A56.asm:34 LDA @LOCAL01
    case 0xC07A95: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C07A56.asm:35 ASL
    case 0xC07A97: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:36 ASL
    case 0xC07A98: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:37 CLC
    case 0xC07A99: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:38 ADC @VIRTUAL0A
    case 0xC07A9A: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C0/C07A56.asm:39 STA @VIRTUAL0A
    case 0xC07A9C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C07A56.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC07A9E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C0/C07A56.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC07A9E.
    case 0xC07AA0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C0/C07A56.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC07AA1: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C0/C07A56.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC07AA3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C0/C07A56.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC07AA4: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C0/C07A56.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC07AA6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C0/C07A56.asm:40 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC07AA8: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C07A56.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07AAA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C07A56.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07AAC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C07A56.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07AAE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C07A56.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC07AB0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C07A56.asm:42 LDA @VIRTUAL04
    case 0xC07AB2: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C07A56.asm:43 ASL
    case 0xC07AB4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:44 TAX
    case 0xC07AB5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:45 LDA @LOCAL00+2
    case 0xC07AB6: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C07A56.asm:46 STA ENTITY_GRAPHICS_PTR_HIGH,X
    case 0xC07AB8: cpu.execute_instruction<0x9D>(0x002A06, 3); return true;
    // src/unknown/C0/C07A56.asm:47 LDA @LOCAL00
    case 0xC07ABB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C07A56.asm:48 CLC
    case 0xC07ABD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:49 ADC #9
    case 0xC07ABE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/unknown/C0/C07A56.asm:49 ADC #9
    // Overlapping static entry reached from 0xC07ABE.
    case 0xC07AC0: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C07A56.asm:50 STA ENTITY_GRAPHICS_PTR_LOW,X
    case 0xC07AC1: cpu.execute_instruction<0x9D>(0x0029CA, 3); return true;
    // src/unknown/C0/C07A56.asm:51 LDY #8
    case 0xC07AC4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C0/C07A56.asm:51 LDY #8
    // Overlapping static entry reached from 0xC07B19.
    case 0xC07AC5: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:51 LDY #8
    // Overlapping static entry reached from 0xC07AC4.
    case 0xC07AC6: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C07A56.asm:52 LDA [@LOCAL00],Y
    case 0xC07AC7: cpu.execute_instruction<0xB7>(0x00000E, 2); return true;
    // src/unknown/C0/C07A56.asm:53 AND #$00FF
    case 0xC07AC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C07A56.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC07AC9.
    case 0xC07ACB: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C07A56.asm:54 STA ENTITY_GRAPHICS_SPRITE_BANK,X
    case 0xC07ACC: cpu.execute_instruction<0x9D>(0x002A42, 3); return true;
    // src/unknown/C0/C07A56.asm:55 LDA @VIRTUAL02
    case 0xC07ACF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C07A56.asm:56 STA ENTITY_WALKING_STYLES,X
    case 0xC07AD1: cpu.execute_instruction<0x9D>(0x002C22, 3); return true;
    // src/unknown/C0/C07A56.asm:57 LDA CURRENT_PARTY_MEMBER_TICK
    case 0xC07AD4: cpu.execute_instruction<0xAD>(0x004DC6, 3); return true;
    // src/unknown/C0/C07A56.asm:58 CLC
    case 0xC07AD7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:59 ADC #char_struct::unknown55
    case 0xC07AD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000037, 2); else cpu.execute_instruction<0x69>(0x000037, 3); return true;
    // src/unknown/C0/C07A56.asm:59 ADC #char_struct::unknown55
    // Overlapping static entry reached from 0xC07AD8.
    case 0xC07ADA: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C07A56.asm:60 TAY
    case 0xC07ADB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:61 LDA __BSS_START__,Y
    case 0xC07ADC: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C07A56.asm:62 PHA
    case 0xC07ADF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:63 LDA @VIRTUAL02
    case 0xC07AE0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C07A56.asm:64 STA TEMP_REGISTER
    case 0xC07AE2: cpu.execute_instruction<0x8D>(0x0000C0, 3); return true;
    // src/unknown/C0/C07A56.asm:65 PLA
    case 0xC07AE5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:66 STA @VIRTUAL02
    case 0xC07AE6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C07A56.asm:67 LDA TEMP_REGISTER
    case 0xC07AE8: cpu.execute_instruction<0xAD>(0x0000C0, 3); return true;
    // src/unknown/C0/C07A56.asm:68 CMP @VIRTUAL02
    case 0xC07AEB: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C0/C07A56.asm:69 BEQ @UNKNOWN1
    case 0xC07AED: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C0/C07A56.asm:70 LDA @LOCAL03
    case 0xC07AEF: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C07A56.asm:71 STA @VIRTUAL02
    case 0xC07AF1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C07A56.asm:72 STA __BSS_START__,Y
    case 0xC07AF3: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C0/C07A56.asm:73 TXA
    case 0xC07AF6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:74 CLC
    case 0xC07AF7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:75 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC07AF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x001002, 3); return true;
    // src/unknown/C0/C07A56.asm:75 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC07AF8.
    case 0xC07AFA: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C0/C07A56.asm:76 TAX
    case 0xC07AFB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:77 LDA __BSS_START__,X
    case 0xC07AFC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C07A56.asm:78 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN15
    case 0xC07AFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/unknown/C0/C07A56.asm:78 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN15
    // Overlapping static entry reached from 0xC07AFF.
    case 0xC07B01: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/C0/C07A56.asm:79 STA __BSS_START__,X
    case 0xC07B02: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C07A56.asm:81 LDA GAME_STATE + game_state::unknown90
    case 0xC07B05: cpu.execute_instruction<0xAD>(0x009885, 3); return true;
    // src/unknown/C0/C07A56.asm:82 BEQ @UNKNOWN2
    case 0xC07B08: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C0/C07A56.asm:83 LDA @LOCAL03
    case 0xC07B0A: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C0/C07A56.asm:84 STA @VIRTUAL02
    case 0xC07B0C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C07A56.asm:85 CMP #12
    case 0xC07B0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/unknown/C0/C07A56.asm:85 CMP #12
    // Overlapping static entry reached from 0xC07B0E.
    case 0xC07B10: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C07A56.asm:86 BEQ @UNKNOWN2
    case 0xC07B11: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C0/C07A56.asm:87 LDA @VIRTUAL04
    case 0xC07B13: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C07A56.asm:88 ASL
    case 0xC07B15: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:89 CLC
    case 0xC07B16: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:90 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC07B17: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x001002, 3); return true;
    // src/unknown/C0/C07A56.asm:90 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC07B17.
    case 0xC07B19: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C0/C07A56.asm:91 TAX
    case 0xC07B1A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:92 LDA __BSS_START__,X
    case 0xC07B1B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C07A56.asm:93 AND #$FFFF ^ (SPRITE_TABLE_10_FLAGS::UNKNOWN15 | SPRITE_TABLE_10_FLAGS::UNKNOWN14 | SPRITE_TABLE_10_FLAGS::UNKNOWN13)
    case 0xC07B1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x001FFF, 3); return true;
    // src/unknown/C0/C07A56.asm:93 AND #$FFFF ^ (SPRITE_TABLE_10_FLAGS::UNKNOWN15 | SPRITE_TABLE_10_FLAGS::UNKNOWN14 | SPRITE_TABLE_10_FLAGS::UNKNOWN13)
    // Overlapping static entry reached from 0xC07B1E.
    case 0xC07B20: cpu.execute_instruction<0x1F>(0x00009D, 4); return true;
    // src/unknown/C0/C07A56.asm:94 STA __BSS_START__,X
    case 0xC07B21: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C07A56.asm:95 BRA @UNKNOWN3
    case 0xC07B24: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C0/C07A56.asm:97 LDA @VIRTUAL04
    case 0xC07B26: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C07A56.asm:98 ASL
    case 0xC07B28: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:99 CLC
    case 0xC07B29: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:100 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC07B2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x001002, 3); return true;
    // src/unknown/C0/C07A56.asm:100 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC07B2A.
    case 0xC07B2C: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C0/C07A56.asm:101 TAX
    case 0xC07B2D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:102 LDA __BSS_START__,X
    case 0xC07B2E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C07A56.asm:103 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN14 | SPRITE_TABLE_10_FLAGS::UNKNOWN13
    case 0xC07B31: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x006000, 3); return true;
    // src/unknown/C0/C07A56.asm:103 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN14 | SPRITE_TABLE_10_FLAGS::UNKNOWN13
    // Overlapping static entry reached from 0xC07B31.
    case 0xC07B33: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:104 STA __BSS_START__,X
    case 0xC07B34: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C07A56.asm:106 LDA GAME_STATE + game_state::unknownB0
    case 0xC07B37: cpu.execute_instruction<0xAD>(0x0098A5, 3); return true;
    // src/unknown/C0/C07A56.asm:107 CMP #2
    case 0xC07B3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C07A56.asm:107 CMP #2
    // Overlapping static entry reached from 0xC07B3A.
    case 0xC07B3C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C07A56.asm:108 BNE @UNKNOWN4
    case 0xC07B3D: cpu.execute_instruction<0xD0>(0x000011, 2); return true;
    // src/unknown/C0/C07A56.asm:109 LDA @VIRTUAL04
    case 0xC07B3F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C07A56.asm:110 ASL
    case 0xC07B41: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:111 CLC
    case 0xC07B42: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:112 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC07B43: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x001002, 3); return true;
    // src/unknown/C0/C07A56.asm:112 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC07B43.
    case 0xC07B45: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C0/C07A56.asm:113 TAX
    case 0xC07B46: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07A56.asm:114 LDA __BSS_START__,X
    case 0xC07B47: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C07A56.asm:115 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN12
    case 0xC07B4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x001000, 3); return true;
    // src/unknown/C0/C07A56.asm:115 ORA #SPRITE_TABLE_10_FLAGS::UNKNOWN12
    // Overlapping static entry reached from 0xC07B4A.
    case 0xC07B4C: cpu.execute_instruction<0x10>(0x00009D, 2); return true;
    // src/unknown/C0/C07A56.asm:116 STA __BSS_START__,X
    case 0xC07B4D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C07A56.asm:116 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC07B4C.
    case 0xC07B4E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C07A56.asm:118 END_C_FUNCTION
    case 0xC07B50: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C07A56.asm:118 END_C_FUNCTION
    case 0xC07B51: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C07B52.asm (unresolved).
bool execute_unresolved_c0_c07b52_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C07B52.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC07B52: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C07B52.asm:9 END_STACK_VARS
    case 0xC07B54: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C07B52.asm:9 END_STACK_VARS
    case 0xC07B55: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07B52.asm:9 END_STACK_VARS
    case 0xC07B56: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07B52.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC07B56.
    case 0xC07B58: cpu.execute_instruction<0xFF>(0x0BAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C07B52.asm:9 END_STACK_VARS
    case 0xC07B59: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:10 LDA PARTY_CHARACTERS+char_struct::position_index
    case 0xC07B5A: cpu.execute_instruction<0xAD>(0x009A0B, 3); return true;
    // src/unknown/C0/C07B52.asm:10 LDA PARTY_CHARACTERS+char_struct::position_index
    // Overlapping static entry reached from 0xC07B58.
    case 0xC07B5C: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:11 STA @LOCAL03
    case 0xC07B5D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C0/C07B52.asm:12 LDA #24
    case 0xC07B5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C07B52.asm:12 LDA #24
    // Overlapping static entry reached from 0xC07B5F.
    case 0xC07B61: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C07B52.asm:13 STA @LOCAL02
    case 0xC07B62: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C0/C07B52.asm:14 JMP @UNKNOWN6
    case 0xC07B64: cpu.execute_instruction<0x4C>(0x007C4D, 3); return true;
    // src/unknown/C0/C07B52.asm:16 LDA @LOCAL02
    case 0xC07B67: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C07B52.asm:17 ASL
    case 0xC07B69: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:18 STA @VIRTUAL04
    case 0xC07B6A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C07B52.asm:19 STA @LOCAL01
    case 0xC07B6C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C0/C07B52.asm:20 LDX @VIRTUAL04
    case 0xC07B6E: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C07B52.asm:21 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC07B70: cpu.execute_instruction<0xBD>(0x000A62, 3); return true;
    // src/unknown/C0/C07B52.asm:22 CMP #.LOWORD(-1)
    case 0xC07B73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C07B52.asm:22 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC07B73.
    case 0xC07B75: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C07B52.asm:23 BEQL @UNKNOWN5
    case 0xC07B76: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C07B52.asm:23 BEQL @UNKNOWN5
    case 0xC07B78: cpu.execute_instruction<0x4C>(0x007C4B, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C07B52.asm:23 BEQL @UNKNOWN5
    // Overlapping static entry reached from 0xC07B75.
    case 0xC07B79: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C07B52.asm:23 BEQL @UNKNOWN5
    // Overlapping static entry reached from 0xC07B79.
    case 0xC07B7A: cpu.execute_instruction<0x7C>(0x0004A5, 3); return true;
    // src/unknown/C0/C07B52.asm:24 LDA @VIRTUAL04
    case 0xC07B7B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C0/C07B52.asm:25 CLC
    case 0xC07B7D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:26 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC07B7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x0010B6, 3); return true;
    // src/unknown/C0/C07B52.asm:26 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC07B7E.
    case 0xC07B80: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C0/C07B52.asm:27 TAX
    case 0xC07B81: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:28 LDA __BSS_START__,X
    case 0xC07B82: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C07B52.asm:29 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC07B85: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C0/C07B52.asm:29 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC07B85.
    case 0xC07B87: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C0/C07B52.asm:30 STA __BSS_START__,X
    case 0xC07B88: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C07B52.asm:30 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC07B87.
    case 0xC07B89: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C0/C07B52.asm:30 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC07B87.
    case 0xC07B8A: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C07B52.asm:31 LDX @VIRTUAL04
    case 0xC07B8B: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C07B52.asm:32 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC07B8D: cpu.execute_instruction<0xBD>(0x000E9A, 3); return true;
    // src/unknown/C0/C07B52.asm:33 LDY #.SIZEOF(char_struct)
    case 0xC07B90: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/unknown/C0/C07B52.asm:33 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC07B90.
    case 0xC07B92: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C07B52.asm:34 JSL MULT168
    case 0xC07B93: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/unknown/C0/C07B52.asm:35 CLC
    case 0xC07B97: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:36 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC07B98: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/unknown/C0/C07B52.asm:36 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC07B98.
    case 0xC07B9A: cpu.execute_instruction<0x99>(0x008EAA, 3); return true;
    // src/unknown/C0/C07B52.asm:37 TAX
    case 0xC07B9B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:38 STX CURRENT_PARTY_MEMBER_TICK
    case 0xC07B9C: cpu.execute_instruction<0x8E>(0x004DC6, 3); return true;
    // src/unknown/C0/C07B52.asm:38 STX CURRENT_PARTY_MEMBER_TICK
    // Overlapping static entry reached from 0xC07B9A.
    case 0xC07B9D: cpu.execute_instruction<0xC6>(0x00004D, 2); return true;
    // src/unknown/C0/C07B52.asm:39 LDA GAME_STATE+game_state::current_party_members
    case 0xC07B9F: cpu.execute_instruction<0xAD>(0x009889, 3); return true;
    // src/unknown/C0/C07B52.asm:40 CMP @LOCAL02
    case 0xC07BA2: cpu.execute_instruction<0xC5>(0x000012, 2); return true;
    // src/unknown/C0/C07B52.asm:41 BEQ @UNKNOWN2
    case 0xC07BA4: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C07B52.asm:42 LDA a:char_struct::position_index,X
    case 0xC07BA6: cpu.execute_instruction<0xBD>(0x00003D, 3); return true;
    // src/unknown/C0/C07B52.asm:43 CMP @LOCAL03
    case 0xC07BA9: cpu.execute_instruction<0xC5>(0x000014, 2); return true;
    // src/unknown/C0/C07B52.asm:44 BNE @UNKNOWN3
    case 0xC07BAB: cpu.execute_instruction<0xD0>(0x00003C, 2); return true;
    // src/unknown/C0/C07B52.asm:46 LDA @LOCAL02
    case 0xC07BAD: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C07B52.asm:47 ASL
    case 0xC07BAF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:48 STA @VIRTUAL02
    case 0xC07BB0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C07B52.asm:49 LDY @LOCAL02
    case 0xC07BB2: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C07B52.asm:50 LDX GAME_STATE+game_state::walking_style
    case 0xC07BB4: cpu.execute_instruction<0xAE>(0x009883, 3); return true;
    // src/unknown/C0/C07B52.asm:51 STX @LOCAL00
    case 0xC07BB7: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C07B52.asm:52 LDX @VIRTUAL02
    case 0xC07BB9: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C07B52.asm:53 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC07BBB: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/unknown/C0/C07B52.asm:54 LDX @LOCAL00
    case 0xC07BBE: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C07B52.asm:55 JSL UNKNOWN_C07A56
    case 0xC07BC0: cpu.execute_instruction<0x22>(0xC07A56, 4); return true;
    // src/unknown/C0/C07B52.asm:56 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC07BC4: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C0/C07B52.asm:57 LDX @VIRTUAL02
    case 0xC07BC7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C07B52.asm:58 STA ENTITY_ABS_X_TABLE,X
    case 0xC07BC9: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/unknown/C0/C07B52.asm:59 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC07BCC: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C0/C07B52.asm:60 LDX @VIRTUAL02
    case 0xC07BCF: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C07B52.asm:61 STA ENTITY_ABS_Y_TABLE,X
    case 0xC07BD1: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/unknown/C0/C07B52.asm:62 LDA GAME_STATE+game_state::party_count
    case 0xC07BD4: cpu.execute_instruction<0xAD>(0x0098A3, 3); return true;
    // src/unknown/C0/C07B52.asm:63 AND #$00FF
    case 0xC07BD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C07B52.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC07BD7.
    case 0xC07BD9: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C07B52.asm:64 CMP #1
    case 0xC07BDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C07B52.asm:64 CMP #1
    // Overlapping static entry reached from 0xC07BDA.
    case 0xC07BDC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C07B52.asm:65 BEQ @UNKNOWN4
    case 0xC07BDD: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/unknown/C0/C07B52.asm:66 LDA GAME_STATE+game_state::leader_direction
    case 0xC07BDF: cpu.execute_instruction<0xAD>(0x00987F, 3); return true;
    // src/unknown/C0/C07B52.asm:67 LDX @VIRTUAL02
    case 0xC07BE2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C07B52.asm:68 STA ENTITY_DIRECTIONS,X
    case 0xC07BE4: cpu.execute_instruction<0x9D>(0x002AF6, 3); return true;
    // src/unknown/C0/C07B52.asm:69 BRA @UNKNOWN4
    case 0xC07BE7: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/unknown/C0/C07B52.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC07BE9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/unknown/C0/C07B52.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC07BEB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/unknown/C0/C07B52.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC07BEC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/unknown/C0/C07B52.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC07BEE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/unknown/C0/C07B52.asm:71 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(player_position_buffer_entry)
    case 0xC07BEF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:72 CLC
    case 0xC07BF0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:73 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC07BF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000056, 2); else cpu.execute_instruction<0x69>(0x005156, 3); return true;
    // src/unknown/C0/C07B52.asm:73 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC07BF1.
    case 0xC07BF3: cpu.execute_instruction<0x51>(0x000085, 2); return true;
    // src/unknown/C0/C07B52.asm:74 STA @VIRTUAL02
    case 0xC07BF4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C07B52.asm:74 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC07BF3.
    case 0xC07BF5: cpu.execute_instruction<0x02>(0x0000A4, 2); return true;
    // src/unknown/C0/C07B52.asm:75 LDY @LOCAL02
    case 0xC07BF6: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C0/C07B52.asm:76 LDX @VIRTUAL02
    case 0xC07BF8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C07B52.asm:77 LDA a:player_position_buffer_entry::walking_style,X
    case 0xC07BFA: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // src/unknown/C0/C07B52.asm:78 TAX
    case 0xC07BFD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:79 STX @LOCAL00
    case 0xC07BFE: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C0/C07B52.asm:80 LDA @LOCAL01
    case 0xC07C00: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C07B52.asm:81 STA @VIRTUAL04
    case 0xC07C02: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C07B52.asm:82 LDX @VIRTUAL04
    case 0xC07C04: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C07B52.asm:83 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC07C06: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/unknown/C0/C07B52.asm:84 LDX @LOCAL00
    case 0xC07C09: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C0/C07B52.asm:85 JSL UNKNOWN_C07A56
    case 0xC07C0B: cpu.execute_instruction<0x22>(0xC07A56, 4); return true;
    // src/unknown/C0/C07B52.asm:86 LDX @VIRTUAL02
    case 0xC07C0F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C07B52.asm:87 LDA a:player_position_buffer_entry::x_coord,X
    case 0xC07C11: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C07B52.asm:88 LDX @VIRTUAL04
    case 0xC07C14: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C07B52.asm:89 STA ENTITY_ABS_X_TABLE,X
    case 0xC07C16: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/unknown/C0/C07B52.asm:90 LDX @VIRTUAL02
    case 0xC07C19: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C07B52.asm:91 LDA a:player_position_buffer_entry::y_coord,X
    case 0xC07C1B: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C0/C07B52.asm:92 LDX @VIRTUAL04
    case 0xC07C1E: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C07B52.asm:93 STA ENTITY_ABS_Y_TABLE,X
    case 0xC07C20: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/unknown/C0/C07B52.asm:94 LDX @VIRTUAL02
    case 0xC07C23: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C0/C07B52.asm:95 LDA a:player_position_buffer_entry::direction,X
    case 0xC07C25: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/unknown/C0/C07B52.asm:96 LDX @VIRTUAL04
    case 0xC07C28: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C0/C07B52.asm:97 STA ENTITY_DIRECTIONS,X
    case 0xC07C2A: cpu.execute_instruction<0x9D>(0x002AF6, 3); return true;
    // src/unknown/C0/C07B52.asm:99 LDA @LOCAL02
    case 0xC07C2D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C07B52.asm:100 ASL
    case 0xC07C2F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:101 TAX
    case 0xC07C30: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:102 LDA ENTITY_ABS_X_TABLE,X
    case 0xC07C31: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C07B52.asm:103 SEC
    case 0xC07C34: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:104 SBC BG1_X_POS
    case 0xC07C35: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C0/C07B52.asm:105 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC07C38: cpu.execute_instruction<0x9D>(0x000B16, 3); return true;
    // src/unknown/C0/C07B52.asm:106 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC07C3B: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C07B52.asm:107 SEC
    case 0xC07C3E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C07B52.asm:108 SBC BG1_Y_POS
    case 0xC07C3F: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/unknown/C0/C07B52.asm:109 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC07C42: cpu.execute_instruction<0x9D>(0x000B52, 3); return true;
    // src/unknown/C0/C07B52.asm:110 LDA @LOCAL02
    case 0xC07C45: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C07B52.asm:111 JSL UNKNOWN_C0A780
    case 0xC07C47: cpu.execute_instruction<0x22>(0xC0A780, 4); return true;
    // src/unknown/C0/C07B52.asm:113 INC @LOCAL02
    case 0xC07C4B: cpu.execute_instruction<0xE6>(0x000012, 2); return true;
    // src/unknown/C0/C07B52.asm:115 LDA @LOCAL02
    case 0xC07C4D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C0/C07B52.asm:116 CMP #MAX_ENTITIES
    case 0xC07C4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C0/C07B52.asm:116 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC07C4F.
    case 0xC07C51: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C0/C07B52.asm:117 BCCL @UNKNOWN0
    case 0xC07C52: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C0/C07B52.asm:117 BCCL @UNKNOWN0
    case 0xC07C54: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C0/C07B52.asm:117 BCCL @UNKNOWN0
    case 0xC07C56: cpu.execute_instruction<0x4C>(0x007B67, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C07B52.asm:118 END_C_FUNCTION
    case 0xC07C59: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C07B52.asm:118 END_C_FUNCTION
    case 0xC07C5A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C07C5B.asm (unresolved).
bool execute_unresolved_c0_c07c5b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C07C5B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC07C5B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C07C5B.asm:6 END_STACK_VARS
    case 0xC07C5D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C07C5B.asm:6 END_STACK_VARS
    case 0xC07C5E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07C5B.asm:6 END_STACK_VARS
    case 0xC07C5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C07C5B.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC07C5F.
    case 0xC07C61: cpu.execute_instruction<0xFF>(0x58AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C07C5B.asm:6 END_STACK_VARS
    case 0xC07C62: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C07C5B.asm:7 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC07C63: cpu.execute_instruction<0xAD>(0x005D58, 3); return true;
    // src/unknown/C0/C07C5B.asm:7 LDA PLAYER_INTANGIBILITY_FRAMES
    // Overlapping static entry reached from 0xC07C61.
    case 0xC07C65: cpu.execute_instruction<0x5D>(0x0020F0, 3); return true;
    // src/unknown/C0/C07C5B.asm:8 BEQ @UNKNOWN2
    case 0xC07C66: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/unknown/C0/C07C5B.asm:9 LDA #24
    case 0xC07C68: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C0/C07C5B.asm:9 LDA #24
    // Overlapping static entry reached from 0xC07C68.
    case 0xC07C6A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C07C5B.asm:10 STA @LOCAL00
    case 0xC07C6B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C07C5B.asm:11 BRA @UNKNOWN1
    case 0xC07C6D: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C0/C07C5B.asm:13 ASL
    case 0xC07C6F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C07C5B.asm:14 CLC
    case 0xC07C70: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C07C5B.asm:15 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC07C71: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006A, 2); else cpu.execute_instruction<0x69>(0x00116A, 3); return true;
    // src/unknown/C0/C07C5B.asm:15 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC07C71.
    case 0xC07C73: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/C0/C07C5B.asm:16 TAX
    case 0xC07C74: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C07C5B.asm:17 LDA __BSS_START__,X
    case 0xC07C75: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C07C5B.asm:18 AND #$7FFF
    case 0xC07C78: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C07C5B.asm:18 AND #$7FFF
    // Overlapping static entry reached from 0xC07C78.
    case 0xC07C7A: cpu.execute_instruction<0x7F>(0x00009D, 4); return true;
    // src/unknown/C0/C07C5B.asm:19 STA __BSS_START__,X
    case 0xC07C7B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C07C5B.asm:20 LDA @LOCAL00
    case 0xC07C7E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C07C5B.asm:21 INC
    case 0xC07C80: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C07C5B.asm:22 STA @LOCAL00
    case 0xC07C81: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C0/C07C5B.asm:24 CMP #MAX_ENTITIES
    case 0xC07C83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C0/C07C5B.asm:24 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC07C83.
    case 0xC07C85: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C07C5B.asm:25 BCC @UNKNOWN0
    case 0xC07C86: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C07C5B.asm:27 END_C_FUNCTION
    case 0xC07C88: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C07C5B.asm:27 END_C_FUNCTION
    case 0xC07C89: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C083B8.asm (unresolved).
bool execute_unresolved_c0_c083b8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C083B8.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC083B8: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C083B8.asm:4 LDA #0
    case 0xC083BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C083B8.asm:4 LDA #0
    // Overlapping static entry reached from 0xC083BA.
    case 0xC083BC: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C083B8.asm:5 STA DEMO_RECORDING_FLAGS
    case 0xC083BD: cpu.execute_instruction<0x8D>(0x00007B, 3); return true;
    // src/unknown/C0/C083B8.asm:6 RTL
    case 0xC083C0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C083C1.asm (unresolved).
bool execute_unresolved_c0_c083c1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C083C1.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC083C1: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C083C1.asm:4 MOVE_INT $0E, DEMO_WRITE_DESTINATION
    case 0xC083C3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C083C1.asm:4 MOVE_INT $0E, DEMO_WRITE_DESTINATION
    case 0xC083C5: cpu.execute_instruction<0x8D>(0x000085, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C083C1.asm:4 MOVE_INT $0E, DEMO_WRITE_DESTINATION
    case 0xC083C8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C083C1.asm:4 MOVE_INT $0E, DEMO_WRITE_DESTINATION
    case 0xC083CA: cpu.execute_instruction<0x8D>(0x000087, 3); return true;
    // src/unknown/C0/C083C1.asm:5 LDA PAD_STATE
    case 0xC083CD: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/unknown/C0/C083C1.asm:6 STA DEMO_LAST_INPUT
    case 0xC083D0: cpu.execute_instruction<0x8D>(0x00008B, 3); return true;
    // src/unknown/C0/C083C1.asm:7 LDA #1
    case 0xC083D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C083C1.asm:7 LDA #1
    // Overlapping static entry reached from 0xC083D3.
    case 0xC083D5: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C083C1.asm:8 STA DEMO_SAME_INPUT_FRAMES
    case 0xC083D6: cpu.execute_instruction<0x8D>(0x000089, 3); return true;
    // src/unknown/C0/C083C1.asm:9 LDA #DEMO_RECORDING_FLAG::RECORDING
    case 0xC083D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/unknown/C0/C083C1.asm:9 LDA #DEMO_RECORDING_FLAG::RECORDING
    // Overlapping static entry reached from 0xC083D9.
    case 0xC083DB: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C083C1.asm:10 ORA DEMO_RECORDING_FLAGS
    case 0xC083DC: cpu.execute_instruction<0x0D>(0x00007B, 3); return true;
    // src/unknown/C0/C083C1.asm:11 STA DEMO_RECORDING_FLAGS
    case 0xC083DF: cpu.execute_instruction<0x8D>(0x00007B, 3); return true;
    // src/unknown/C0/C083C1.asm:12 RTL
    case 0xC083E2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C083E3.asm (unresolved).
bool execute_unresolved_c0_c083e3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C083E3.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC083E3: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C083E3.asm:4 LDA DEMO_RECORDING_FLAGS
    case 0xC083E5: cpu.execute_instruction<0xAD>(0x00007B, 3); return true;
    // src/unknown/C0/C083E3.asm:5 AND #DEMO_RECORDING_FLAG::PLAYBACK
    case 0xC083E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x004000, 3); return true;
    // src/unknown/C0/C083E3.asm:5 AND #DEMO_RECORDING_FLAG::PLAYBACK
    // Overlapping static entry reached from 0xC083E8.
    case 0xC083EA: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C083E3.asm:6 BNE @UNKNOWN0
    case 0xC083EB: cpu.execute_instruction<0xD0>(0x00002D, 2); return true;
    // src/unknown/C0/C083E3.asm:7 LDA [$0E]
    case 0xC083ED: cpu.execute_instruction<0xA7>(0x00000E, 2); return true;
    // src/unknown/C0/C083E3.asm:8 AND #$00FF
    case 0xC083EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C083E3.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC083EF.
    case 0xC083F1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C083E3.asm:9 BEQ UNKNOWN_C083B8
    case 0xC083F2: cpu.execute_instruction<0xF0>(0x0000C4, 2); return true;
    // src/unknown/C0/C083E3.asm:10 STA DEMO_FRAMES_LEFT
    case 0xC083F4: cpu.execute_instruction<0x8D>(0x000081, 3); return true;
    // src/unknown/C0/C083E3.asm:11 LDY #$0001
    case 0xC083F7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C083E3.asm:11 LDY #$0001
    // Overlapping static entry reached from 0xC083F7.
    case 0xC083F9: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C083E3.asm:12 LDA [$0E],Y
    case 0xC083FA: cpu.execute_instruction<0xB7>(0x00000E, 2); return true;
    // src/unknown/C0/C083E3.asm:13 STA DEMO_INITIAL_PAD_STATE
    case 0xC083FC: cpu.execute_instruction<0x8D>(0x000083, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C083E3.asm:14 MOVE_INT $0E, DEMO_READ_SOURCE
    case 0xC083FF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C083E3.asm:14 MOVE_INT $0E, DEMO_READ_SOURCE
    case 0xC08401: cpu.execute_instruction<0x8D>(0x00007D, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C083E3.asm:14 MOVE_INT $0E, DEMO_READ_SOURCE
    case 0xC08404: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C083E3.asm:14 MOVE_INT $0E, DEMO_READ_SOURCE
    case 0xC08406: cpu.execute_instruction<0x8D>(0x00007F, 3); return true;
    // src/unknown/C0/C083E3.asm:15 LDA [$0E],Y
    case 0xC08409: cpu.execute_instruction<0xB7>(0x00000E, 2); return true;
    // src/unknown/C0/C083E3.asm:16 STA PAD_RAW
    case 0xC0840B: cpu.execute_instruction<0x8D>(0x000077, 3); return true;
    // src/unknown/C0/C083E3.asm:17 STA PAD_RAW + 2
    case 0xC0840E: cpu.execute_instruction<0x8D>(0x000079, 3); return true;
    // src/unknown/C0/C083E3.asm:18 LDA #DEMO_RECORDING_FLAG::PLAYBACK
    case 0xC08411: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // src/unknown/C0/C083E3.asm:18 LDA #DEMO_RECORDING_FLAG::PLAYBACK
    // Overlapping static entry reached from 0xC08411.
    case 0xC08413: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C083E3.asm:19 ORA DEMO_RECORDING_FLAGS
    case 0xC08414: cpu.execute_instruction<0x0D>(0x00007B, 3); return true;
    // src/unknown/C0/C083E3.asm:20 STA DEMO_RECORDING_FLAGS
    case 0xC08417: cpu.execute_instruction<0x8D>(0x00007B, 3); return true;
    // src/unknown/C0/C083E3.asm:22 RTL
    case 0xC0841A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08456.asm (unresolved).
bool execute_unresolved_c0_c08456_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08456.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08456: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C08456.asm:4 LDA <DEMO_RECORDING_FLAGS + 0
    case 0xC08458: cpu.execute_instruction<0xA5>(0x00007B, 2); return true;
    // src/unknown/C0/C08456.asm:5 AND #DEMO_RECORDING_FLAG::RECORDING
    case 0xC0845A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C08456.asm:5 AND #DEMO_RECORDING_FLAG::RECORDING
    // Overlapping static entry reached from 0xC0845A.
    case 0xC0845C: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C08456.asm:6 BEQ @UNKNOWN1
    case 0xC0845D: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/unknown/C0/C08456.asm:7 LDA <PAD_RAW +0
    case 0xC0845F: cpu.execute_instruction<0xA5>(0x000077, 2); return true;
    // src/unknown/C0/C08456.asm:8 ORA <PAD_RAW +2
    case 0xC08461: cpu.execute_instruction<0x05>(0x000079, 2); return true;
    // src/unknown/C0/C08456.asm:9 TAX
    case 0xC08463: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C08456.asm:10 CMP <DEMO_LAST_INPUT +0
    case 0xC08464: cpu.execute_instruction<0xC5>(0x00008B, 2); return true;
    // src/unknown/C0/C08456.asm:11 BNE @UNKNOWN0
    case 0xC08466: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C0/C08456.asm:12 INC <DEMO_SAME_INPUT_FRAMES
    case 0xC08468: cpu.execute_instruction<0xE6>(0x000089, 2); return true;
    // src/unknown/C0/C08456.asm:13 LDA <DEMO_SAME_INPUT_FRAMES + 0
    case 0xC0846A: cpu.execute_instruction<0xA5>(0x000089, 2); return true;
    // src/unknown/C0/C08456.asm:14 CMP #$00FF
    case 0xC0846C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/unknown/C0/C08456.asm:14 CMP #$00FF
    // Overlapping static entry reached from 0xC0846C.
    case 0xC0846E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C08456.asm:15 BNE @UNKNOWN1
    case 0xC0846F: cpu.execute_instruction<0xD0>(0x000024, 2); return true;
    // src/unknown/C0/C08456.asm:17 LDA <DEMO_SAME_INPUT_FRAMES + 0
    case 0xC08471: cpu.execute_instruction<0xA5>(0x000089, 2); return true;
    // src/unknown/C0/C08456.asm:18 STA [<DEMO_WRITE_DESTINATION]
    case 0xC08473: cpu.execute_instruction<0x87>(0x000085, 2); return true;
    // src/unknown/C0/C08456.asm:19 INC <DEMO_WRITE_DESTINATION
    case 0xC08475: cpu.execute_instruction<0xE6>(0x000085, 2); return true;
    // src/unknown/C0/C08456.asm:20 LDA <DEMO_LAST_INPUT + 0
    case 0xC08477: cpu.execute_instruction<0xA5>(0x00008B, 2); return true;
    // src/unknown/C0/C08456.asm:21 STA [<DEMO_WRITE_DESTINATION]
    case 0xC08479: cpu.execute_instruction<0x87>(0x000085, 2); return true;
    // src/unknown/C0/C08456.asm:22 INC <DEMO_WRITE_DESTINATION
    case 0xC0847B: cpu.execute_instruction<0xE6>(0x000085, 2); return true;
    // src/unknown/C0/C08456.asm:23 INC <DEMO_WRITE_DESTINATION
    case 0xC0847D: cpu.execute_instruction<0xE6>(0x000085, 2); return true;
    // src/unknown/C0/C08456.asm:24 STX <DEMO_LAST_INPUT
    case 0xC0847F: cpu.execute_instruction<0x86>(0x00008B, 2); return true;
    // src/unknown/C0/C08456.asm:25 STZ <DEMO_SAME_INPUT_FRAMES
    case 0xC08481: cpu.execute_instruction<0x64>(0x000089, 2); return true;
    // src/unknown/C0/C08456.asm:26 INC <DEMO_SAME_INPUT_FRAMES
    case 0xC08483: cpu.execute_instruction<0xE6>(0x000089, 2); return true;
    // src/unknown/C0/C08456.asm:27 LDA #$0000
    case 0xC08485: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C08456.asm:27 LDA #$0000
    // Overlapping static entry reached from 0xC08485.
    case 0xC08487: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/unknown/C0/C08456.asm:28 STA [<DEMO_WRITE_DESTINATION]
    case 0xC08488: cpu.execute_instruction<0x87>(0x000085, 2); return true;
    // src/unknown/C0/C08456.asm:29 LDA <DEMO_WRITE_DESTINATION + 0
    case 0xC0848A: cpu.execute_instruction<0xA5>(0x000085, 2); return true;
    // src/unknown/C0/C08456.asm:30 BPL @UNKNOWN1
    case 0xC0848C: cpu.execute_instruction<0x10>(0x000007, 2); return true;
    // src/unknown/C0/C08456.asm:31 LDA <DEMO_RECORDING_FLAGS + 0
    case 0xC0848E: cpu.execute_instruction<0xA5>(0x00007B, 2); return true;
    // src/unknown/C0/C08456.asm:32 AND #$FFFF ^ DEMO_RECORDING_FLAG::RECORDING
    case 0xC08490: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C08456.asm:32 AND #$FFFF ^ DEMO_RECORDING_FLAG::RECORDING
    // Overlapping static entry reached from 0xC08490.
    case 0xC08492: cpu.execute_instruction<0x7F>(0x607B85, 4); return true;
    // src/unknown/C0/C08456.asm:33 STA <DEMO_RECORDING_FLAGS
    case 0xC08493: cpu.execute_instruction<0x85>(0x00007B, 2); return true;
    // src/unknown/C0/C08456.asm:35 RTS
    case 0xC08495: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08496.asm (unresolved).
bool execute_unresolved_c0_c08496_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08496.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC08496: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C08496.asm:5 LDA HVBJOY
    case 0xC08498: cpu.execute_instruction<0xAD>(0x004212, 3); return true;
    // src/unknown/C0/C08496.asm:6 LSR
    case 0xC0849B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C08496.asm:7 BCS @WAIT_UNTIL_READY
    case 0xC0849C: cpu.execute_instruction<0xB0>(0x0000FA, 2); return true;
    // src/unknown/C0/C08496.asm:8 JSR READ_JOYPAD
    case 0xC0849E: cpu.execute_instruction<0x20>(0x00841B, 3); return true;
    // src/unknown/C0/C08496.asm:9 JSR UNKNOWN_C08456
    case 0xC084A1: cpu.execute_instruction<0x20>(0x008456, 3); return true;
    // src/unknown/C0/C08496.asm:10 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC084A4: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C08496.asm:11 LDX #$0002
    case 0xC084A6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/unknown/C0/C08496.asm:11 LDX #$0002
    // Overlapping static entry reached from 0xC084A6.
    case 0xC084A8: cpu.execute_instruction<0x00>(0x0000B5, 2); return true;
    // src/unknown/C0/C08496.asm:13 LDA <PAD_RAW,X
    case 0xC084A9: cpu.execute_instruction<0xB5>(0x000077, 2); return true;
    // src/unknown/C0/C08496.asm:14 AND #$FFF0
    case 0xC084AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x00FFF0, 3); return true;
    // src/unknown/C0/C08496.asm:14 AND #$FFF0
    // Overlapping static entry reached from 0xC084AB.
    case 0xC084AD: cpu.execute_instruction<0xFF>(0xB57585, 4); return true;
    // src/unknown/C0/C08496.asm:15 STA <PAD_TEMP
    case 0xC084AE: cpu.execute_instruction<0x85>(0x000075, 2); return true;
    // src/unknown/C0/C08496.asm:16 LDA <PAD_STATE,X
    case 0xC084B0: cpu.execute_instruction<0xB5>(0x000065, 2); return true;
    // src/unknown/C0/C08496.asm:16 LDA <PAD_STATE,X
    // Overlapping static entry reached from 0xC084AD.
    case 0xC084B1: cpu.execute_instruction<0x65>(0x000049, 2); return true;
    // src/unknown/C0/C08496.asm:17 EOR #$FFFF
    case 0xC084B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C08496.asm:17 EOR #$FFFF
    // Overlapping static entry reached from 0xC084B1.
    case 0xC084B3: cpu.execute_instruction<0xFF>(0x7525FF, 4); return true;
    // src/unknown/C0/C08496.asm:17 EOR #$FFFF
    // Overlapping static entry reached from 0xC084B2.
    case 0xC084B4: cpu.execute_instruction<0xFF>(0x957525, 4); return true;
    // src/unknown/C0/C08496.asm:18 AND <PAD_TEMP + 0
    case 0xC084B5: cpu.execute_instruction<0x25>(0x000075, 2); return true;
    // src/unknown/C0/C08496.asm:19 STA <PAD_PRESS,X
    case 0xC084B7: cpu.execute_instruction<0x95>(0x00006D, 2); return true;
    // src/unknown/C0/C08496.asm:19 STA <PAD_PRESS,X
    // Overlapping static entry reached from 0xC084B4.
    case 0xC084B8: cpu.execute_instruction<0x6D>(0x0075A5, 3); return true;
    // src/unknown/C0/C08496.asm:20 LDA <PAD_TEMP + 0
    case 0xC084B9: cpu.execute_instruction<0xA5>(0x000075, 2); return true;
    // src/unknown/C0/C08496.asm:21 CMP <PAD_STATE,X
    case 0xC084BB: cpu.execute_instruction<0xD5>(0x000065, 2); return true;
    // src/unknown/C0/C08496.asm:22 STA <PAD_STATE,X
    case 0xC084BD: cpu.execute_instruction<0x95>(0x000065, 2); return true;
    // src/unknown/C0/C08496.asm:23 BEQ @UNKNOWN2
    case 0xC084BF: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/unknown/C0/C08496.asm:24 LDA <PAD_PRESS,X
    case 0xC084C1: cpu.execute_instruction<0xB5>(0x00006D, 2); return true;
    // src/unknown/C0/C08496.asm:25 STA <PAD_HELD,X
    case 0xC084C3: cpu.execute_instruction<0x95>(0x000069, 2); return true;
    // src/unknown/C0/C08496.asm:26 LDA #$0014
    case 0xC084C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C0/C08496.asm:26 LDA #$0014
    // Overlapping static entry reached from 0xC084C5.
    case 0xC084C7: cpu.execute_instruction<0x00>(0x000095, 2); return true;
    // src/unknown/C0/C08496.asm:27 STA <PAD_TIMER,X
    case 0xC084C8: cpu.execute_instruction<0x95>(0x000071, 2); return true;
    // src/unknown/C0/C08496.asm:28 BRA @UNKNOWN4
    case 0xC084CA: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C0/C08496.asm:30 LDY <PAD_TIMER,X
    case 0xC084CC: cpu.execute_instruction<0xB4>(0x000071, 2); return true;
    // src/unknown/C0/C08496.asm:31 BEQ @UNKNOWN3
    case 0xC084CE: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C08496.asm:32 DEC <PAD_TIMER,X
    case 0xC084D0: cpu.execute_instruction<0xD6>(0x000071, 2); return true;
    // src/unknown/C0/C08496.asm:33 STZ <PAD_HELD,X
    case 0xC084D2: cpu.execute_instruction<0x74>(0x000069, 2); return true;
    // src/unknown/C0/C08496.asm:34 BRA @UNKNOWN4
    case 0xC084D4: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C0/C08496.asm:36 STA <PAD_HELD,X
    case 0xC084D6: cpu.execute_instruction<0x95>(0x000069, 2); return true;
    // src/unknown/C0/C08496.asm:37 LDA #$0003
    case 0xC084D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C0/C08496.asm:37 LDA #$0003
    // Overlapping static entry reached from 0xC084D8.
    case 0xC084DA: cpu.execute_instruction<0x00>(0x000095, 2); return true;
    // src/unknown/C0/C08496.asm:38 STA <PAD_TIMER,X
    case 0xC084DB: cpu.execute_instruction<0x95>(0x000071, 2); return true;
    // src/unknown/C0/C08496.asm:40 DEX
    case 0xC084DD: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C08496.asm:41 DEX
    case 0xC084DE: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C08496.asm:42 BPL @UNKNOWN1
    case 0xC084DF: cpu.execute_instruction<0x10>(0x0000C8, 2); return true;
    // src/unknown/C0/C08496.asm:43 LDA f:DEBUG
    case 0xC084E1: cpu.execute_instruction<0xAF>(0x7E436C, 4); return true;
    // src/unknown/C0/C08496.asm:44 BNE @UNKNOWN5
    case 0xC084E5: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/unknown/C0/C08496.asm:45 LDA <PAD_STATE + 2
    case 0xC084E7: cpu.execute_instruction<0xA5>(0x000067, 2); return true;
    // src/unknown/C0/C08496.asm:46 ORA <PAD_STATE + 0
    case 0xC084E9: cpu.execute_instruction<0x05>(0x000065, 2); return true;
    // src/unknown/C0/C08496.asm:47 STA <PAD_STATE
    case 0xC084EB: cpu.execute_instruction<0x85>(0x000065, 2); return true;
    // src/unknown/C0/C08496.asm:48 LDA <PAD_HELD + 2
    case 0xC084ED: cpu.execute_instruction<0xA5>(0x00006B, 2); return true;
    // src/unknown/C0/C08496.asm:49 ORA <PAD_HELD + 0
    case 0xC084EF: cpu.execute_instruction<0x05>(0x000069, 2); return true;
    // src/unknown/C0/C08496.asm:50 STA <PAD_HELD
    case 0xC084F1: cpu.execute_instruction<0x85>(0x000069, 2); return true;
    // src/unknown/C0/C08496.asm:51 LDA <PAD_PRESS + 2
    case 0xC084F3: cpu.execute_instruction<0xA5>(0x00006F, 2); return true;
    // src/unknown/C0/C08496.asm:52 ORA <PAD_PRESS + 0
    case 0xC084F5: cpu.execute_instruction<0x05>(0x00006D, 2); return true;
    // src/unknown/C0/C08496.asm:53 STA <PAD_PRESS
    case 0xC084F7: cpu.execute_instruction<0x85>(0x00006D, 2); return true;
    // src/unknown/C0/C08496.asm:55 LDA <PAD_PRESS + 0
    case 0xC084F9: cpu.execute_instruction<0xA5>(0x00006D, 2); return true;
    // src/unknown/C0/C08496.asm:56 BEQ @UNKNOWN6
    case 0xC084FB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C08496.asm:57 INC PLAYER_HAS_DONE_SOMETHING_THIS_FRAME
    case 0xC084FD: cpu.execute_instruction<0xEE>(0x000A34, 3); return true;
    // src/unknown/C0/C08496.asm:59 RTS
    case 0xC08500: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08529.asm (unresolved).
bool execute_unresolved_c0_c08529_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08529.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC08529: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C08529.asm:4 PHD
    case 0xC0852B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:5 PHA
    case 0xC0852C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:6 TDC
    case 0xC0852D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:7 SEC
    case 0xC0852E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:8 SBC #$0004
    case 0xC0852F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/unknown/C0/C08529.asm:8 SBC #$0004
    // Overlapping static entry reached from 0xC0852F.
    case 0xC08531: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C0/C08529.asm:9 TCD
    case 0xC08532: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:10 PLA
    case 0xC08533: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:11 LDY #$0002
    case 0xC08534: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C0/C08529.asm:11 LDY #$0002
    // Overlapping static entry reached from 0xC08534.
    case 0xC08536: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C08529.asm:12 LDA [$0E],Y
    case 0xC08537: cpu.execute_instruction<0xB7>(0x00000E, 2); return true;
    // src/unknown/C0/C08529.asm:13 STA $00
    case 0xC08539: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C08529.asm:14 INY
    case 0xC0853B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:15 INY
    case 0xC0853C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:16 LDA [$0E],Y
    case 0xC0853D: cpu.execute_instruction<0xB7>(0x00000E, 2); return true;
    // src/unknown/C0/C08529.asm:17 STA $02
    case 0xC0853F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C08529.asm:18 INY
    case 0xC08541: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:19 INY
    case 0xC08542: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:20 LDA [$0E],Y
    case 0xC08543: cpu.execute_instruction<0xB7>(0x00000E, 2); return true;
    // src/unknown/C0/C08529.asm:21 TAX
    case 0xC08545: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:22 LDA [$0E]
    case 0xC08546: cpu.execute_instruction<0xA7>(0x00000E, 2); return true;
    // src/unknown/C0/C08529.asm:23 AND #$01FF
    case 0xC08548: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0001FF, 3); return true;
    // src/unknown/C0/C08529.asm:23 AND #$01FF
    // Overlapping static entry reached from 0xC08548.
    case 0xC0854A: cpu.execute_instruction<0x01>(0x0000A8, 2); return true;
    // src/unknown/C0/C08529.asm:24 TAY
    case 0xC0854B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:25 BRA @UNKNOWN1
    case 0xC0854C: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C0/C08529.asm:27 LDA [$00],Y
    case 0xC0854E: cpu.execute_instruction<0xB7>(0x000000, 2); return true;
    // src/unknown/C0/C08529.asm:28 STA __BSS_START__,X
    case 0xC08550: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C08529.asm:29 INX
    case 0xC08553: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:30 INX
    case 0xC08554: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:32 DEY
    case 0xC08555: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:33 DEY
    case 0xC08556: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:34 BPL @UNKNOWN0
    case 0xC08557: cpu.execute_instruction<0x10>(0x0000F5, 2); return true;
    // src/unknown/C0/C08529.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC08559: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C08529.asm:36 LDY #$0001
    case 0xC0855B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C0/C08529.asm:36 LDY #$0001
    // Overlapping static entry reached from 0xC0855B.
    case 0xC0855D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C08529.asm:37 LDA [$0E],Y
    case 0xC0855E: cpu.execute_instruction<0xB7>(0x00000E, 2); return true;
    // src/unknown/C0/C08529.asm:38 LSR
    case 0xC08560: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:39 ORA PALETTE_UPLOAD_MODE
    case 0xC08561: cpu.execute_instruction<0x0D>(0x000030, 3); return true;
    // src/unknown/C0/C08529.asm:40 STA PALETTE_UPLOAD_MODE
    case 0xC08564: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C0/C08529.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC08567: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C08529.asm:42 PLD
    case 0xC08569: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C08529.asm:43 RTL
    case 0xC0856A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0856B.asm (unresolved).
bool execute_unresolved_c0_c0856b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0856B.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC0856B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0856B.asm:4 STA PALETTE_UPLOAD_MODE
    case 0xC0856D: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C0/C0856B.asm:5 REP #PROC_FLAGS::ACCUM8
    case 0xC08570: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0856B.asm:6 RTL
    case 0xC08572: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08573.asm (unresolved).
bool execute_unresolved_c0_c08573_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08573.asm:3 PHP
    case 0xC08573: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08574: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C08573.asm:5 LDA $0E
    case 0xC08576: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C08573.asm:6 STA UNREAD_7E008D
    case 0xC08578: cpu.execute_instruction<0x8D>(0x00008D, 3); return true;
    // src/unknown/C0/C08573.asm:7 SEP #PROC_FLAGS::INDEX8
    case 0xC0857B: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C0/C08573.asm:8 LDX $10
    case 0xC0857D: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C0/C08573.asm:9 STX UNREAD_7E008D+2
    case 0xC0857F: cpu.execute_instruction<0x8E>(0x00008F, 3); return true;
    // src/unknown/C0/C08573.asm:10 PHD
    case 0xC08582: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:11 PEA $0000
    case 0xC08583: cpu.execute_instruction<0xF4>(0x000000, 3); return true;
    // src/unknown/C0/C08573.asm:12 PLD
    case 0xC08586: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:13 PHB
    case 0xC08587: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:14 LDY #$0000
    case 0xC08588: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x005A00, 3); return true;
    // src/unknown/C0/C08573.asm:15 PHY
    case 0xC0858A: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:16 PLB
    case 0xC0858B: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:17 REP #PROC_FLAGS::INDEX8
    case 0xC0858C: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C0/C08573.asm:18 BRA @UNKNOWN1
    case 0xC0858E: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/unknown/C0/C08573.asm:20 INY
    case 0xC08590: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:21 INY
    case 0xC08591: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:22 LDA [$8D],Y
    case 0xC08592: cpu.execute_instruction<0xB7>(0x00008D, 2); return true;
    // src/unknown/C0/C08573.asm:23 STA $93
    case 0xC08594: cpu.execute_instruction<0x85>(0x000093, 2); return true;
    // src/unknown/C0/C08573.asm:24 INY
    case 0xC08596: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:25 INY
    case 0xC08597: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:26 LDA [$8D],Y
    case 0xC08598: cpu.execute_instruction<0xB7>(0x00008D, 2); return true;
    // src/unknown/C0/C08573.asm:27 STA $95
    case 0xC0859A: cpu.execute_instruction<0x85>(0x000095, 2); return true;
    // src/unknown/C0/C08573.asm:28 INY
    case 0xC0859C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:29 INY
    case 0xC0859D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:30 LDA [$8D],Y
    case 0xC0859E: cpu.execute_instruction<0xB7>(0x00008D, 2); return true;
    // src/unknown/C0/C08573.asm:31 STA $97
    case 0xC085A0: cpu.execute_instruction<0x85>(0x000097, 2); return true;
    // src/unknown/C0/C08573.asm:32 INY
    case 0xC085A2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:33 INY
    case 0xC085A3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:34 JSR COPY_TO_VRAM
    case 0xC085A4: cpu.execute_instruction<0x20>(0x00865F, 3); return true;
    // src/unknown/C0/C08573.asm:36 LDA [$8D],Y
    case 0xC085A7: cpu.execute_instruction<0xB7>(0x00008D, 2); return true;
    // src/unknown/C0/C08573.asm:37 STA $91
    case 0xC085A9: cpu.execute_instruction<0x85>(0x000091, 2); return true;
    // src/unknown/C0/C08573.asm:38 AND #$00FF
    case 0xC085AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C08573.asm:38 AND #$00FF
    // Overlapping static entry reached from 0xC085AB.
    case 0xC085AD: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C08573.asm:39 CMP #$00FF
    case 0xC085AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/unknown/C0/C08573.asm:39 CMP #$00FF
    // Overlapping static entry reached from 0xC085AE.
    case 0xC085B0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C08573.asm:40 BNE @UNKNOWN0
    case 0xC085B1: cpu.execute_instruction<0xD0>(0x0000DD, 2); return true;
    // src/unknown/C0/C08573.asm:41 PLB
    case 0xC085B3: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:42 PLD
    case 0xC085B4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:43 PLP
    case 0xC085B5: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C08573.asm:44 RTL
    case 0xC085B6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08726.asm (unresolved).
bool execute_unresolved_c0_c08726_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08726.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC08726: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C08726.asm:4 LDA #$0080
    case 0xC08728: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008D80, 3); return true;
    // src/unknown/C0/C08726.asm:5 STA INIDISP_MIRROR
    case 0xC0872A: cpu.execute_instruction<0x8D>(0x00000D, 3); return true;
    // src/unknown/C0/C08726.asm:5 STA INIDISP_MIRROR
    // Overlapping static entry reached from 0xC08728.
    case 0xC0872B: cpu.execute_instruction<0x0D>(0x009C00, 3); return true;
    // src/unknown/C0/C08726.asm:6 STZ HDMAEN_MIRROR
    case 0xC0872D: cpu.execute_instruction<0x9C>(0x00001F, 3); return true;
    // src/unknown/C0/C08726.asm:6 STZ HDMAEN_MIRROR
    // Overlapping static entry reached from 0xC0872B.
    case 0xC0872E: cpu.execute_instruction<0x1F>(0x289C00, 4); return true;
    // src/unknown/C0/C08726.asm:8 STZ FADE_PARAMETERS + fade_parameters::step
    case 0xC08730: cpu.execute_instruction<0x9C>(0x000028, 3); return true;
    // src/unknown/C0/C08726.asm:8 STZ FADE_PARAMETERS + fade_parameters::step
    // Overlapping static entry reached from 0xC0872E.
    case 0xC08732: cpu.execute_instruction<0x00>(0x00009C, 2); return true;
    // src/unknown/C0/C08726.asm:10 STZ NEW_FRAME_STARTED
    case 0xC08733: cpu.execute_instruction<0x9C>(0x00002B, 3); return true;
    // src/unknown/C0/C08726.asm:12 LDA NEW_FRAME_STARTED
    case 0xC08736: cpu.execute_instruction<0xAD>(0x00002B, 3); return true;
    // src/unknown/C0/C08726.asm:13 BEQ @UNKNOWN0
    case 0xC08739: cpu.execute_instruction<0xF0>(0x0000FB, 2); return true;
    // src/unknown/C0/C08726.asm:14 LDA #$0000
    case 0xC0873B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/unknown/C0/C08726.asm:15 STA f:HDMAEN
    case 0xC0873D: cpu.execute_instruction<0x8F>(0x00420C, 4); return true;
    // src/unknown/C0/C08726.asm:15 STA f:HDMAEN
    // Overlapping static entry reached from 0xC0873B.
    case 0xC0873E: cpu.execute_instruction<0x0C>(0x000042, 3); return true;
    // src/unknown/C0/C08726.asm:16 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08741: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C08726.asm:17 RTL
    case 0xC08743: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08744.asm (unresolved).
bool execute_unresolved_c0_c08744_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08744.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC08744: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C08744.asm:4 LDA #$0080
    case 0xC08746: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008D80, 3); return true;
    // src/unknown/C0/C08744.asm:5 STA INIDISP_MIRROR
    case 0xC08748: cpu.execute_instruction<0x8D>(0x00000D, 3); return true;
    // src/unknown/C0/C08744.asm:5 STA INIDISP_MIRROR
    // Overlapping static entry reached from 0xC08746.
    case 0xC08749: cpu.execute_instruction<0x0D>(0x009C00, 3); return true;
    // src/unknown/C0/C08744.asm:6 STZ NEW_FRAME_STARTED
    case 0xC0874B: cpu.execute_instruction<0x9C>(0x00002B, 3); return true;
    // src/unknown/C0/C08744.asm:6 STZ NEW_FRAME_STARTED
    // Overlapping static entry reached from 0xC08749.
    case 0xC0874C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C08744.asm:6 STZ NEW_FRAME_STARTED
    // Overlapping static entry reached from 0xC0874C.
    case 0xC0874D: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C0/C08744.asm:8 LDA NEW_FRAME_STARTED
    case 0xC0874E: cpu.execute_instruction<0xAD>(0x00002B, 3); return true;
    // src/unknown/C0/C08744.asm:9 BEQ @UNKNOWN0
    case 0xC08751: cpu.execute_instruction<0xF0>(0x0000FB, 2); return true;
    // src/unknown/C0/C08744.asm:10 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08753: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C08744.asm:11 RTL
    case 0xC08755: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0878B.asm (unresolved).
bool execute_unresolved_c0_c0878b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0878B.asm:3 TAX
    case 0xC0878B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0878B.asm:5 INC NEXT_FRAME_DISPLAY_ID
    case 0xC0878C: cpu.execute_instruction<0xEE>(0x00002C, 3); return true;
    // src/unknown/C0/C0878B.asm:6 PHX
    case 0xC0878F: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C0878B.asm:7 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC08790: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C0/C0878B.asm:8 PLX
    case 0xC08794: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0878B.asm:9 DEX
    case 0xC08795: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0878B.asm:10 BNE @UNKNOWN0
    case 0xC08796: cpu.execute_instruction<0xD0>(0x0000F4, 2); return true;
    // src/unknown/C0/C0878B.asm:11 RTL
    case 0xC08798: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C087AB.asm (unresolved).
bool execute_unresolved_c0_c087ab_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C087AB.asm:3 PHP
    case 0xC087AB: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:4 REP #PROC_FLAGS::ACCUM8
    case 0xC087AC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C087AB.asm:5 PHD
    case 0xC087AE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:6 PHA
    case 0xC087AF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:7 TDC
    case 0xC087B0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:8 SEC
    case 0xC087B1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:9 SBC #$0002
    case 0xC087B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000002, 2); else cpu.execute_instruction<0xE9>(0x000002, 3); return true;
    // src/unknown/C0/C087AB.asm:9 SBC #$0002
    // Overlapping static entry reached from 0xC087B2.
    case 0xC087B4: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C0/C087AB.asm:10 TCD
    case 0xC087B5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:11 PLA
    case 0xC087B6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:12 STA $00
    case 0xC087B7: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C087AB.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC087B9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C087AB.asm:14 LDA INIDISP_MIRROR
    case 0xC087BB: cpu.execute_instruction<0xAD>(0x00000D, 3); return true;
    // src/unknown/C0/C087AB.asm:15 EOR #$00FF
    case 0xC087BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x000AFF, 3); return true;
    // src/unknown/C0/C087AB.asm:16 ASL
    case 0xC087C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:17 ASL
    case 0xC087C1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:18 ASL
    case 0xC087C2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:19 ASL
    case 0xC087C3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:20 AND #$00F0
    case 0xC087C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x0005F0, 3); return true;
    // src/unknown/C0/C087AB.asm:21 ORA $00
    case 0xC087C6: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/unknown/C0/C087AB.asm:21 ORA $00
    // Overlapping static entry reached from 0xC087C4.
    case 0xC087C7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C087AB.asm:22 STA MOSAIC_MIRROR
    case 0xC087C8: cpu.execute_instruction<0x8D>(0x000010, 3); return true;
    // src/unknown/C0/C087AB.asm:23 PLD
    case 0xC087CB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:24 PLP
    case 0xC087CC: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C087AB.asm:25 RTS
    case 0xC087CD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C087AB_redirect.asm (unresolved).
bool execute_unresolved_c0_c087ab_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C087AB_redirect.asm:3 JSR UNKNOWN_C087AB
    case 0xC087A7: cpu.execute_instruction<0x20>(0x0087AB, 3); return true;
    // src/unknown/C0/C087AB_redirect.asm:4 RTL
    case 0xC087AA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0888B.asm (unresolved).
bool execute_unresolved_c0_c0888b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0888B.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC0888B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0888B.asm:4 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC0888D: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/unknown/C0/C0888B.asm:5 BEQ @UNKNOWN0
    case 0xC08890: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C0/C0888B.asm:6 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08892: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C0888B.asm:7 JSL OAM_CLEAR
    case 0xC08894: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/unknown/C0/C0888B.asm:8 JSL UPDATE_SCREEN
    case 0xC08898: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/unknown/C0/C0888B.asm:9 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0889C: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C0/C0888B.asm:10 BRA UNKNOWN_C0888B
    case 0xC088A0: cpu.execute_instruction<0x80>(0x0000E9, 2); return true;
    // src/unknown/C0/C0888B.asm:12 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC088A2: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C0888B.asm:13 RTL
    case 0xC088A4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C088A5.asm (unresolved).
bool execute_unresolved_c0_c088a5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C088A5.asm:3 SEP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC088A5: cpu.execute_instruction<0xE2>(0x000030, 2); return true;
    // src/unknown/C0/C088A5.asm:4 LDX SPRITEMAP_BANK
    case 0xC088A7: cpu.execute_instruction<0xAE>(0x00000B, 3); return true;
    // src/unknown/C0/C088A5.asm:5 STA SPRITEMAP_BANK
    case 0xC088AA: cpu.execute_instruction<0x8D>(0x00000B, 3); return true;
    // src/unknown/C0/C088A5.asm:6 TXA
    case 0xC088AD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C088A5.asm:7 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC088AE: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C088A5.asm:8 RTL
    case 0xC088B0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08B19.asm (unresolved).
bool execute_unresolved_c0_c08b19_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08B19.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC08B19: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C08B19.asm:4 LDA #0
    case 0xC08B1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008D00, 3); return true;
    // src/unknown/C0/C08B19.asm:5 STA UNREAD_7E0009
    case 0xC08B1D: cpu.execute_instruction<0x8D>(0x000009, 3); return true;
    // src/unknown/C0/C08B19.asm:5 STA UNREAD_7E0009
    // Overlapping static entry reached from 0xC08B1B.
    case 0xC08B1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C200, 3); return true;
    // src/unknown/C0/C08B19.asm:6 REP #PROC_FLAGS::ACCUM8
    case 0xC08B20: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C08B19.asm:6 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC08B1E.
    case 0xC08B21: cpu.execute_instruction<0x20>(0x00B122, 3); return true;
    // src/unknown/C0/C08B19.asm:7 JSL OAM_CLEAR
    case 0xC08B22: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/unknown/C0/C08B19.asm:7 JSL OAM_CLEAR
    // Overlapping static entry reached from 0xC08B21.
    case 0xC08B24: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C08B19.asm:7 JSL OAM_CLEAR
    // Overlapping static entry reached from 0xC08B24.
    case 0xC08B25: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000C2, 2); else cpu.execute_instruction<0xC0>(0x0030C2, 3); return true;
    // src/unknown/C0/C08B19.asm:10 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08B26: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C08B19.asm:10 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC08B25.
    case 0xC08B27: cpu.execute_instruction<0x30>(0x000020, 2); return true;
    // src/unknown/C0/C08B19.asm:11 JSR UNKNOWN_C08B8E
    case 0xC08B28: cpu.execute_instruction<0x20>(0x008B8E, 3); return true;
    // src/unknown/C0/C08B19.asm:11 JSR UNKNOWN_C08B8E
    // Overlapping static entry reached from 0xC08B27.
    case 0xC08B29: cpu.execute_instruction<0x8E>(0x00E28B, 3); return true;
    // src/unknown/C0/C08B19.asm:12 SEP #PROC_FLAGS::ACCUM8
    case 0xC08B2B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C08B19.asm:12 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC08B29.
    case 0xC08B2C: cpu.execute_instruction<0x20>(0x00688B, 3); return true;
    // src/unknown/C0/C08B19.asm:13 PHB
    case 0xC08B2D: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/unknown/C0/C08B19.asm:14 PLA
    case 0xC08B2E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C08B19.asm:15 CMP #$00FF
    case 0xC08B2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00D0FF, 3); return true;
    // src/unknown/C0/C08B19.asm:16 BNE @UNKNOWN1
    case 0xC08B31: cpu.execute_instruction<0xD0>(0x000002, 2); return true;
    // src/unknown/C0/C08B19.asm:16 BNE @UNKNOWN1
    // Overlapping static entry reached from 0xC08B2F.
    case 0xC08B32: cpu.execute_instruction<0x02>(0x000080, 2); return true;
    // src/unknown/C0/C08B19.asm:18 BRA @UNKNOWN0
    case 0xC08B33: cpu.execute_instruction<0x80>(0x0000FE, 2); return true;
    // src/unknown/C0/C08B19.asm:20 LDA OAM_HIGH_TABLE_BUFFER
    case 0xC08B35: cpu.execute_instruction<0xAD>(0x00000A, 3); return true;
    // src/unknown/C0/C08B19.asm:21 CMP #$0080
    case 0xC08B38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x00F080, 3); return true;
    // src/unknown/C0/C08B19.asm:22 BEQ @UNKNOWN3
    case 0xC08B3A: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C0/C08B19.asm:22 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC08B38.
    case 0xC08B3B: cpu.execute_instruction<0x04>(0x00004A, 2); return true;
    // src/unknown/C0/C08B19.asm:24 LSR
    case 0xC08B3C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C08B19.asm:25 LSR
    case 0xC08B3D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C08B19.asm:26 BCC @UNKNOWN2
    case 0xC08B3E: cpu.execute_instruction<0x90>(0x0000FC, 2); return true;
    // src/unknown/C0/C08B19.asm:28 LDX OAM_HIGH_TABLE_ADDR
    case 0xC08B40: cpu.execute_instruction<0xAE>(0x000007, 3); return true;
    // src/unknown/C0/C08B19.asm:29 STA a:__BSS_START__,X
    case 0xC08B43: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C08B19.asm:30 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08B46: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C08B19.asm:31 LDA NEXT_FRAME_BUF_ID
    case 0xC08B48: cpu.execute_instruction<0xAD>(0x00002E, 3); return true;
    // src/unknown/C0/C08B19.asm:31 LDA NEXT_FRAME_BUF_ID
    // Overlapping static entry reached from 0xC08B27.
    case 0xC08B49: cpu.execute_instruction<0x2E>(0x003A00, 3); return true;
    // src/unknown/C0/C08B19.asm:32 DEC
    case 0xC08B4B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C08B19.asm:33 ASL
    case 0xC08B4C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C08B19.asm:34 TAX
    case 0xC08B4D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C08B19.asm:35 LDA BG1_X_POS
    case 0xC08B4E: cpu.execute_instruction<0xAD>(0x000031, 3); return true;
    // src/unknown/C0/C08B19.asm:36 STA BG1_X_POS_BUF,X
    case 0xC08B51: cpu.execute_instruction<0x9D>(0x000041, 3); return true;
    // src/unknown/C0/C08B19.asm:37 LDA BG1_Y_POS
    case 0xC08B54: cpu.execute_instruction<0xAD>(0x000033, 3); return true;
    // src/unknown/C0/C08B19.asm:38 STA BG1_Y_POS_BUF,X
    case 0xC08B57: cpu.execute_instruction<0x9D>(0x000045, 3); return true;
    // src/unknown/C0/C08B19.asm:39 LDA BG2_X_POS
    case 0xC08B5A: cpu.execute_instruction<0xAD>(0x000035, 3); return true;
    // src/unknown/C0/C08B19.asm:40 STA BG2_X_POS_BUF,X
    case 0xC08B5D: cpu.execute_instruction<0x9D>(0x000049, 3); return true;
    // src/unknown/C0/C08B19.asm:41 LDA BG2_Y_POS
    case 0xC08B60: cpu.execute_instruction<0xAD>(0x000037, 3); return true;
    // src/unknown/C0/C08B19.asm:42 STA BG2_Y_POS_BUF,X
    case 0xC08B63: cpu.execute_instruction<0x9D>(0x00004D, 3); return true;
    // src/unknown/C0/C08B19.asm:43 LDA BG3_X_POS
    case 0xC08B66: cpu.execute_instruction<0xAD>(0x000039, 3); return true;
    // src/unknown/C0/C08B19.asm:44 STA BG3_X_POS_BUF,X
    case 0xC08B69: cpu.execute_instruction<0x9D>(0x000051, 3); return true;
    // src/unknown/C0/C08B19.asm:45 LDA BG3_Y_POS
    case 0xC08B6C: cpu.execute_instruction<0xAD>(0x00003B, 3); return true;
    // src/unknown/C0/C08B19.asm:46 STA BG3_Y_POS_BUF,X
    case 0xC08B6F: cpu.execute_instruction<0x9D>(0x000055, 3); return true;
    // src/unknown/C0/C08B19.asm:47 LDA BG4_X_POS
    case 0xC08B72: cpu.execute_instruction<0xAD>(0x00003D, 3); return true;
    // src/unknown/C0/C08B19.asm:48 STA BG4_X_POS_BUF,X
    case 0xC08B75: cpu.execute_instruction<0x9D>(0x000059, 3); return true;
    // src/unknown/C0/C08B19.asm:49 LDA BG4_Y_POS
    case 0xC08B78: cpu.execute_instruction<0xAD>(0x00003F, 3); return true;
    // src/unknown/C0/C08B19.asm:50 STA BG4_Y_POS_BUF,X
    case 0xC08B7B: cpu.execute_instruction<0x9D>(0x00005D, 3); return true;
    // src/unknown/C0/C08B19.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC08B7E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C08B19.asm:52 LDA NEXT_FRAME_BUF_ID
    case 0xC08B80: cpu.execute_instruction<0xAD>(0x00002E, 3); return true;
    // src/unknown/C0/C08B19.asm:53 STA NEXT_FRAME_DISPLAY_ID
    case 0xC08B83: cpu.execute_instruction<0x8D>(0x00002C, 3); return true;
    // src/unknown/C0/C08B19.asm:54 EOR #$0003
    case 0xC08B86: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000003, 2); else cpu.execute_instruction<0x49>(0x008D03, 3); return true;
    // src/unknown/C0/C08B19.asm:55 STA NEXT_FRAME_BUF_ID
    case 0xC08B88: cpu.execute_instruction<0x8D>(0x00002E, 3); return true;
    // src/unknown/C0/C08B19.asm:55 STA NEXT_FRAME_BUF_ID
    // Overlapping static entry reached from 0xC08B86.
    case 0xC08B89: cpu.execute_instruction<0x2E>(0x00C200, 3); return true;
    // src/unknown/C0/C08B19.asm:56 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08B8B: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C08B19.asm:56 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC08B89.
    case 0xC08B8C: cpu.execute_instruction<0x30>(0x00006B, 2); return true;
    // src/unknown/C0/C08B19.asm:57 RTL
    case 0xC08B8D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08B8E.asm (unresolved).
bool execute_unresolved_c0_c08b8e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08B8E.asm:3 PHP
    case 0xC08B8E: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:4 REP #PROC_FLAGS::ACCUM8
    case 0xC08B8F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C08B8E.asm:5 LDA UNUSED_7E2402
    case 0xC08B91: cpu.execute_instruction<0xAD>(0x002402, 3); return true;
    // src/unknown/C0/C08B8E.asm:6 CMP #$0000
    case 0xC08B94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C0/C08B8E.asm:6 CMP #$0000
    // Overlapping static entry reached from 0xC08B94.
    case 0xC08B96: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C08B8E.asm:7 BNE @UNKNOWN0
    case 0xC08B97: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C08B8E.asm:8 JSR UNKNOWN_C08C53
    case 0xC08B99: cpu.execute_instruction<0x20>(0x008C53, 3); return true;
    // src/unknown/C0/C08B8E.asm:10 LDX #$0000
    case 0xC08B9C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C08B8E.asm:10 LDX #$0000
    // Overlapping static entry reached from 0xC08B9C.
    case 0xC08B9E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C08B8E.asm:11 BRA @UNKNOWN2
    case 0xC08B9F: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C0/C08B8E.asm:13 LDA PRIORITY_0_SPRITEMAP_BANKS,X
    case 0xC08BA1: cpu.execute_instruction<0xBD>(0x0024C4, 3); return true;
    // src/unknown/C0/C08B8E.asm:14 STA SPRITEMAP_BANK
    case 0xC08BA4: cpu.execute_instruction<0x8D>(0x00000B, 3); return true;
    // src/unknown/C0/C08B8E.asm:15 PHX
    case 0xC08BA7: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:16 LDA PRIORITY_0_SPRITEMAPS,X
    case 0xC08BA8: cpu.execute_instruction<0xBD>(0x002404, 3); return true;
    // src/unknown/C0/C08B8E.asm:17 PHA
    case 0xC08BAB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:18 LDA PRIORITY_0_SPRITE_Y,X
    case 0xC08BAC: cpu.execute_instruction<0xBD>(0x002484, 3); return true;
    // src/unknown/C0/C08B8E.asm:19 TAY
    case 0xC08BAF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:20 LDA PRIORITY_0_SPRITE_X,X
    case 0xC08BB0: cpu.execute_instruction<0xBD>(0x002444, 3); return true;
    // src/unknown/C0/C08B8E.asm:21 TAX
    case 0xC08BB3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:22 PLA
    case 0xC08BB4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:23 JSL UNKNOWN_C08CD5
    case 0xC08BB5: cpu.execute_instruction<0x22>(0xC08CD5, 4); return true;
    // src/unknown/C0/C08B8E.asm:24 PLX
    case 0xC08BB9: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:25 INX
    case 0xC08BBA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:26 INX
    case 0xC08BBB: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:28 CPX PRIORITY_0_SPRITE_OFFSET
    case 0xC08BBC: cpu.execute_instruction<0xEC>(0x002504, 3); return true;
    // src/unknown/C0/C08B8E.asm:29 BCC @UNKNOWN1
    case 0xC08BBF: cpu.execute_instruction<0x90>(0x0000E0, 2); return true;
    // src/unknown/C0/C08B8E.asm:30 LDA UNUSED_7E2402
    case 0xC08BC1: cpu.execute_instruction<0xAD>(0x002402, 3); return true;
    // src/unknown/C0/C08B8E.asm:31 CMP #$0001
    case 0xC08BC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C08B8E.asm:31 CMP #$0001
    // Overlapping static entry reached from 0xC08BC4.
    case 0xC08BC6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C08B8E.asm:32 BNE @UNKNOWN3
    case 0xC08BC7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C08B8E.asm:33 JSR UNKNOWN_C08C53
    case 0xC08BC9: cpu.execute_instruction<0x20>(0x008C53, 3); return true;
    // src/unknown/C0/C08B8E.asm:35 LDX #$0000
    case 0xC08BCC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C08B8E.asm:35 LDX #$0000
    // Overlapping static entry reached from 0xC08BCC.
    case 0xC08BCE: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C08B8E.asm:36 BRA @UNKNOWN5
    case 0xC08BCF: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C0/C08B8E.asm:38 LDA PRIORITY_1_SPRITEMAP_BANKS,X
    case 0xC08BD1: cpu.execute_instruction<0xBD>(0x0025C6, 3); return true;
    // src/unknown/C0/C08B8E.asm:39 STA SPRITEMAP_BANK
    case 0xC08BD4: cpu.execute_instruction<0x8D>(0x00000B, 3); return true;
    // src/unknown/C0/C08B8E.asm:40 PHX
    case 0xC08BD7: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:41 LDA PRIORITY_1_SPRITEMAPS,X
    case 0xC08BD8: cpu.execute_instruction<0xBD>(0x002506, 3); return true;
    // src/unknown/C0/C08B8E.asm:42 PHA
    case 0xC08BDB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:43 LDA PRIORITY_1_SPRITE_Y,X
    case 0xC08BDC: cpu.execute_instruction<0xBD>(0x002586, 3); return true;
    // src/unknown/C0/C08B8E.asm:44 TAY
    case 0xC08BDF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:45 LDA PRIORITY_1_SPRITE_X,X
    case 0xC08BE0: cpu.execute_instruction<0xBD>(0x002546, 3); return true;
    // src/unknown/C0/C08B8E.asm:46 TAX
    case 0xC08BE3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:47 PLA
    case 0xC08BE4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:48 JSL UNKNOWN_C08CD5
    case 0xC08BE5: cpu.execute_instruction<0x22>(0xC08CD5, 4); return true;
    // src/unknown/C0/C08B8E.asm:49 PLX
    case 0xC08BE9: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:50 INX
    case 0xC08BEA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:51 INX
    case 0xC08BEB: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:53 CPX PRIORITY_1_SPRITE_OFFSET
    case 0xC08BEC: cpu.execute_instruction<0xEC>(0x002606, 3); return true;
    // src/unknown/C0/C08B8E.asm:54 BCC @UNKNOWN4
    case 0xC08BEF: cpu.execute_instruction<0x90>(0x0000E0, 2); return true;
    // src/unknown/C0/C08B8E.asm:55 LDA UNUSED_7E2402
    case 0xC08BF1: cpu.execute_instruction<0xAD>(0x002402, 3); return true;
    // src/unknown/C0/C08B8E.asm:56 CMP #$0002
    case 0xC08BF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C0/C08B8E.asm:56 CMP #$0002
    // Overlapping static entry reached from 0xC08BF4.
    case 0xC08BF6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C08B8E.asm:57 BNE @UNKNOWN6
    case 0xC08BF7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C08B8E.asm:58 JSR UNKNOWN_C08C53
    case 0xC08BF9: cpu.execute_instruction<0x20>(0x008C53, 3); return true;
    // src/unknown/C0/C08B8E.asm:60 LDX #$0000
    case 0xC08BFC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C08B8E.asm:60 LDX #$0000
    // Overlapping static entry reached from 0xC08BFC.
    case 0xC08BFE: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C08B8E.asm:61 BRA @UNKNOWN8
    case 0xC08BFF: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C0/C08B8E.asm:63 LDA PRIORITY_2_SPRITEMAP_BANKS,X
    case 0xC08C01: cpu.execute_instruction<0xBD>(0x0026C8, 3); return true;
    // src/unknown/C0/C08B8E.asm:64 STA SPRITEMAP_BANK
    case 0xC08C04: cpu.execute_instruction<0x8D>(0x00000B, 3); return true;
    // src/unknown/C0/C08B8E.asm:65 PHX
    case 0xC08C07: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:66 LDA PRIORITY_2_SPRITEMAPS,X
    case 0xC08C08: cpu.execute_instruction<0xBD>(0x002608, 3); return true;
    // src/unknown/C0/C08B8E.asm:67 PHA
    case 0xC08C0B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:68 LDA PRIORITY_2_SPRITE_Y,X
    case 0xC08C0C: cpu.execute_instruction<0xBD>(0x002688, 3); return true;
    // src/unknown/C0/C08B8E.asm:69 TAY
    case 0xC08C0F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:70 LDA PRIORITY_2_SPRITE_X,X
    case 0xC08C10: cpu.execute_instruction<0xBD>(0x002648, 3); return true;
    // src/unknown/C0/C08B8E.asm:71 TAX
    case 0xC08C13: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:72 PLA
    case 0xC08C14: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:73 JSL UNKNOWN_C08CD5
    case 0xC08C15: cpu.execute_instruction<0x22>(0xC08CD5, 4); return true;
    // src/unknown/C0/C08B8E.asm:74 PLX
    case 0xC08C19: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:75 INX
    case 0xC08C1A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:76 INX
    case 0xC08C1B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:78 CPX PRIORITY_2_SPRITE_OFFSET
    case 0xC08C1C: cpu.execute_instruction<0xEC>(0x002708, 3); return true;
    // src/unknown/C0/C08B8E.asm:79 BCC @UNKNOWN7
    case 0xC08C1F: cpu.execute_instruction<0x90>(0x0000E0, 2); return true;
    // src/unknown/C0/C08B8E.asm:80 LDA UNUSED_7E2402
    case 0xC08C21: cpu.execute_instruction<0xAD>(0x002402, 3); return true;
    // src/unknown/C0/C08B8E.asm:81 CMP #$0003
    case 0xC08C24: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C08B8E.asm:81 CMP #$0003
    // Overlapping static entry reached from 0xC08C24.
    case 0xC08C26: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C08B8E.asm:82 BNE @UNKNOWN9
    case 0xC08C27: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C08B8E.asm:83 JSR UNKNOWN_C08C53
    case 0xC08C29: cpu.execute_instruction<0x20>(0x008C53, 3); return true;
    // src/unknown/C0/C08B8E.asm:85 LDX #$0000
    case 0xC08C2C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C08B8E.asm:85 LDX #$0000
    // Overlapping static entry reached from 0xC08C2C.
    case 0xC08C2E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C08B8E.asm:86 BRA @UNKNOWN11
    case 0xC08C2F: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C0/C08B8E.asm:88 LDA PRIORITY_3_SPRITEMAP_BANKS,X
    case 0xC08C31: cpu.execute_instruction<0xBD>(0x0027CA, 3); return true;
    // src/unknown/C0/C08B8E.asm:89 STA SPRITEMAP_BANK
    case 0xC08C34: cpu.execute_instruction<0x8D>(0x00000B, 3); return true;
    // src/unknown/C0/C08B8E.asm:90 PHX
    case 0xC08C37: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:91 LDA PRIORITY_3_SPRITEMAPS,X
    case 0xC08C38: cpu.execute_instruction<0xBD>(0x00270A, 3); return true;
    // src/unknown/C0/C08B8E.asm:92 PHA
    case 0xC08C3B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:93 LDA PRIORITY_3_SPRITE_Y,X
    case 0xC08C3C: cpu.execute_instruction<0xBD>(0x00278A, 3); return true;
    // src/unknown/C0/C08B8E.asm:94 TAY
    case 0xC08C3F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:95 LDA PRIORITY_3_SPRITE_X,X
    case 0xC08C40: cpu.execute_instruction<0xBD>(0x00274A, 3); return true;
    // src/unknown/C0/C08B8E.asm:96 TAX
    case 0xC08C43: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:97 PLA
    case 0xC08C44: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:98 JSL UNKNOWN_C08CD5
    case 0xC08C45: cpu.execute_instruction<0x22>(0xC08CD5, 4); return true;
    // src/unknown/C0/C08B8E.asm:99 PLX
    case 0xC08C49: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:100 INX
    case 0xC08C4A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:101 INX
    case 0xC08C4B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:103 CPX PRIORITY_3_SPRITE_OFFSET
    case 0xC08C4C: cpu.execute_instruction<0xEC>(0x00280A, 3); return true;
    // src/unknown/C0/C08B8E.asm:104 BCC @UNKNOWN10
    case 0xC08C4F: cpu.execute_instruction<0x90>(0x0000E0, 2); return true;
    // src/unknown/C0/C08B8E.asm:105 PLP
    case 0xC08C51: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C08B8E.asm:106 RTS
    case 0xC08C52: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08C53.asm (unresolved).
bool execute_unresolved_c0_c08c53_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08C53.asm:3 RTS
    case 0xC08C53: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08C54.asm (unresolved).
bool execute_unresolved_c0_c08c54_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08C54.asm:3 JSR UNKNOWN_C08C58
    case 0xC08C54: cpu.execute_instruction<0x20>(0x008C58, 3); return true;
    // src/unknown/C0/C08C54.asm:4 RTL
    case 0xC08C57: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08C58.asm (unresolved).
bool execute_unresolved_c0_c08c58_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08C58.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC08C58: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C08C58.asm:4 PHX
    case 0xC08C5A: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C08C58.asm:5 PHA
    case 0xC08C5B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C08C58.asm:6 LDA CURRENT_SPRITE_DRAWING_PRIORITY
    case 0xC08C5C: cpu.execute_instruction<0xAD>(0x002400, 3); return true;
    // src/unknown/C0/C08C58.asm:7 ASL
    case 0xC08C5F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C08C58.asm:8 TAX
    case 0xC08C60: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C08C58.asm:9 PLA
    case 0xC08C61: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C08C58.asm:10 JMP (.LOWORD(UNKNOWN_C08C65),X)
    case 0xC08C62: cpu.execute_instruction<0x7C>(0x008C65, 3); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08C6D.asm (unresolved).
bool execute_unresolved_c0_c08c6d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08C6D.asm:3 LDX PRIORITY_0_SPRITE_OFFSET
    case 0xC08C6D: cpu.execute_instruction<0xAE>(0x002504, 3); return true;
    // src/unknown/C0/C08C6D.asm:4 STA PRIORITY_0_SPRITEMAPS,X
    case 0xC08C70: cpu.execute_instruction<0x9D>(0x002404, 3); return true;
    // src/unknown/C0/C08C6D.asm:5 PLA
    case 0xC08C73: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C08C6D.asm:6 STA PRIORITY_0_SPRITE_X,X
    case 0xC08C74: cpu.execute_instruction<0x9D>(0x002444, 3); return true;
    // src/unknown/C0/C08C6D.asm:7 TYA
    case 0xC08C77: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C08C6D.asm:8 STA PRIORITY_0_SPRITE_Y,X
    case 0xC08C78: cpu.execute_instruction<0x9D>(0x002484, 3); return true;
    // src/unknown/C0/C08C6D.asm:9 LDA SPRITEMAP_BANK
    case 0xC08C7B: cpu.execute_instruction<0xAD>(0x00000B, 3); return true;
    // src/unknown/C0/C08C6D.asm:10 STA PRIORITY_0_SPRITEMAP_BANKS,X
    case 0xC08C7E: cpu.execute_instruction<0x9D>(0x0024C4, 3); return true;
    // src/unknown/C0/C08C6D.asm:11 INX
    case 0xC08C81: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08C6D.asm:12 INX
    case 0xC08C82: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08C6D.asm:13 STX PRIORITY_0_SPRITE_OFFSET
    case 0xC08C83: cpu.execute_instruction<0x8E>(0x002504, 3); return true;
    // src/unknown/C0/C08C6D.asm:14 RTS
    case 0xC08C86: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08C87.asm (unresolved).
bool execute_unresolved_c0_c08c87_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08C87.asm:3 LDX PRIORITY_1_SPRITE_OFFSET
    case 0xC08C87: cpu.execute_instruction<0xAE>(0x002606, 3); return true;
    // src/unknown/C0/C08C87.asm:4 STA PRIORITY_1_SPRITEMAPS,X
    case 0xC08C8A: cpu.execute_instruction<0x9D>(0x002506, 3); return true;
    // src/unknown/C0/C08C87.asm:5 PLA
    case 0xC08C8D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C08C87.asm:6 STA PRIORITY_1_SPRITE_X,X
    case 0xC08C8E: cpu.execute_instruction<0x9D>(0x002546, 3); return true;
    // src/unknown/C0/C08C87.asm:7 TYA
    case 0xC08C91: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C08C87.asm:8 STA PRIORITY_1_SPRITE_Y,X
    case 0xC08C92: cpu.execute_instruction<0x9D>(0x002586, 3); return true;
    // src/unknown/C0/C08C87.asm:9 LDA SPRITEMAP_BANK
    case 0xC08C95: cpu.execute_instruction<0xAD>(0x00000B, 3); return true;
    // src/unknown/C0/C08C87.asm:10 STA PRIORITY_1_SPRITEMAP_BANKS,X
    case 0xC08C98: cpu.execute_instruction<0x9D>(0x0025C6, 3); return true;
    // src/unknown/C0/C08C87.asm:11 INX
    case 0xC08C9B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08C87.asm:12 INX
    case 0xC08C9C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08C87.asm:13 STX PRIORITY_1_SPRITE_OFFSET
    case 0xC08C9D: cpu.execute_instruction<0x8E>(0x002606, 3); return true;
    // src/unknown/C0/C08C87.asm:14 RTS
    case 0xC08CA0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08CA1.asm (unresolved).
bool execute_unresolved_c0_c08ca1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08CA1.asm:3 LDX PRIORITY_2_SPRITE_OFFSET
    case 0xC08CA1: cpu.execute_instruction<0xAE>(0x002708, 3); return true;
    // src/unknown/C0/C08CA1.asm:4 STA PRIORITY_2_SPRITEMAPS,X
    case 0xC08CA4: cpu.execute_instruction<0x9D>(0x002608, 3); return true;
    // src/unknown/C0/C08CA1.asm:5 PLA
    case 0xC08CA7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C08CA1.asm:6 STA PRIORITY_2_SPRITE_X,X
    case 0xC08CA8: cpu.execute_instruction<0x9D>(0x002648, 3); return true;
    // src/unknown/C0/C08CA1.asm:7 TYA
    case 0xC08CAB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C08CA1.asm:8 STA PRIORITY_2_SPRITE_Y,X
    case 0xC08CAC: cpu.execute_instruction<0x9D>(0x002688, 3); return true;
    // src/unknown/C0/C08CA1.asm:9 LDA SPRITEMAP_BANK
    case 0xC08CAF: cpu.execute_instruction<0xAD>(0x00000B, 3); return true;
    // src/unknown/C0/C08CA1.asm:10 STA PRIORITY_2_SPRITEMAP_BANKS,X
    case 0xC08CB2: cpu.execute_instruction<0x9D>(0x0026C8, 3); return true;
    // src/unknown/C0/C08CA1.asm:11 INX
    case 0xC08CB5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08CA1.asm:12 INX
    case 0xC08CB6: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08CA1.asm:13 STX PRIORITY_2_SPRITE_OFFSET
    case 0xC08CB7: cpu.execute_instruction<0x8E>(0x002708, 3); return true;
    // src/unknown/C0/C08CA1.asm:14 RTS
    case 0xC08CBA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08CBB.asm (unresolved).
bool execute_unresolved_c0_c08cbb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08CBB.asm:3 LDX PRIORITY_3_SPRITE_OFFSET
    case 0xC08CBB: cpu.execute_instruction<0xAE>(0x00280A, 3); return true;
    // src/unknown/C0/C08CBB.asm:4 STA PRIORITY_3_SPRITEMAPS,X
    case 0xC08CBE: cpu.execute_instruction<0x9D>(0x00270A, 3); return true;
    // src/unknown/C0/C08CBB.asm:5 PLA
    case 0xC08CC1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C08CBB.asm:6 STA PRIORITY_3_SPRITE_X,X
    case 0xC08CC2: cpu.execute_instruction<0x9D>(0x00274A, 3); return true;
    // src/unknown/C0/C08CBB.asm:7 TYA
    case 0xC08CC5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C08CBB.asm:8 STA PRIORITY_3_SPRITE_Y,X
    case 0xC08CC6: cpu.execute_instruction<0x9D>(0x00278A, 3); return true;
    // src/unknown/C0/C08CBB.asm:9 LDA SPRITEMAP_BANK
    case 0xC08CC9: cpu.execute_instruction<0xAD>(0x00000B, 3); return true;
    // src/unknown/C0/C08CBB.asm:10 STA PRIORITY_3_SPRITEMAP_BANKS,X
    case 0xC08CCC: cpu.execute_instruction<0x9D>(0x0027CA, 3); return true;
    // src/unknown/C0/C08CBB.asm:11 INX
    case 0xC08CCF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08CBB.asm:12 INX
    case 0xC08CD0: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08CBB.asm:13 STX PRIORITY_3_SPRITE_OFFSET
    case 0xC08CD1: cpu.execute_instruction<0x8E>(0x00280A, 3); return true;
    // src/unknown/C0/C08CBB.asm:14 RTS
    case 0xC08CD4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08CD5.asm (unresolved).
bool execute_unresolved_c0_c08cd5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08CD5.asm:3 PHP
    case 0xC08CD5: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:4 PHD
    case 0xC08CD6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:5 PEA __BSS_START__
    case 0xC08CD7: cpu.execute_instruction<0xF4>(0x000000, 3); return true;
    // src/unknown/C0/C08CD5.asm:6 PLD
    case 0xC08CDA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:7 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08CDB: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C08CD5.asm:8 STX <CURRENT_SPRITE_BASE_X + 0
    case 0xC08CDD: cpu.execute_instruction<0x86>(0x00009B, 2); return true;
    // src/unknown/C0/C08CD5.asm:9 STY <CURRENT_SPRITE_BASE_Y + 0
    case 0xC08CDF: cpu.execute_instruction<0x84>(0x00009D, 2); return true;
    // src/unknown/C0/C08CD5.asm:10 TAY
    case 0xC08CE1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:11 LDX <OAM_ADDR + 0
    case 0xC08CE2: cpu.execute_instruction<0xA6>(0x000003, 2); return true;
    // src/unknown/C0/C08CD5.asm:12 CPX <OAM_END_ADDR + 0
    case 0xC08CE4: cpu.execute_instruction<0xE4>(0x000005, 2); return true;
    // src/unknown/C0/C08CD5.asm:13 BCC @UNKNOWN0
    case 0xC08CE6: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C0/C08CD5.asm:14 PLD
    case 0xC08CE8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:15 PLP
    case 0xC08CE9: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:16 RTL
    case 0xC08CEA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:18 PHB
    case 0xC08CEB: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC08CEC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C08CD5.asm:20 LDA <SPRITEMAP_BANK + 0
    case 0xC08CEE: cpu.execute_instruction<0xA5>(0x00000B, 2); return true;
    // src/unknown/C0/C08CD5.asm:21 PHA
    case 0xC08CF0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:22 PLB
    case 0xC08CF1: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:23 BRA @UNKNOWN3
    case 0xC08CF2: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/unknown/C0/C08CD5.asm:25 LDA a:spritemap::tile,Y
    case 0xC08CF4: cpu.execute_instruction<0xB9>(0x000001, 3); return true;
    // src/unknown/C0/C08CD5.asm:26 TAY
    case 0xC08CF7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:27 BRA @UNKNOWN3
    case 0xC08CF8: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C0/C08CD5.asm:29 INY
    case 0xC08CFA: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:30 INY
    case 0xC08CFB: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:31 INY
    case 0xC08CFC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:32 INY
    case 0xC08CFD: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:33 INY
    case 0xC08CFE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC08CFF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C08CD5.asm:36 LDA a:spritemap::y_offset,Y
    case 0xC08D01: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C0/C08CD5.asm:37 AND #$00FF
    case 0xC08D04: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C08CD5.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC08D04.
    case 0xC08D06: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C08CD5.asm:38 CMP #$0080
    case 0xC08D07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000080, 3); return true;
    // src/unknown/C0/C08CD5.asm:38 CMP #$0080
    // Overlapping static entry reached from 0xC08D07.
    case 0xC08D09: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C08CD5.asm:39 BCC @UNKNOWN4
    case 0xC08D0A: cpu.execute_instruction<0x90>(0x000006, 2); return true;
    // src/unknown/C0/C08CD5.asm:40 BEQ @UNKNOWN1
    case 0xC08D0C: cpu.execute_instruction<0xF0>(0x0000E6, 2); return true;
    // src/unknown/C0/C08CD5.asm:41 ORA #$FF00
    case 0xC08D0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00FF00, 3); return true;
    // src/unknown/C0/C08CD5.asm:41 ORA #$FF00
    // Overlapping static entry reached from 0xC08D0E.
    case 0xC08D10: cpu.execute_instruction<0xFF>(0x9D6518, 4); return true;
    // src/unknown/C0/C08CD5.asm:42 CLC
    case 0xC08D11: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:44 ADC <CURRENT_SPRITE_BASE_Y + 0
    case 0xC08D12: cpu.execute_instruction<0x65>(0x00009D, 2); return true;
    // src/unknown/C0/C08CD5.asm:45 DEC
    case 0xC08D14: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:46 CMP #$00E0
    case 0xC08D15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E0, 2); else cpu.execute_instruction<0xC9>(0x0000E0, 3); return true;
    // src/unknown/C0/C08CD5.asm:46 CMP #$00E0
    // Overlapping static entry reached from 0xC08D15.
    case 0xC08D17: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C08CD5.asm:47 BCC @UNKNOWN6
    case 0xC08D18: cpu.execute_instruction<0x90>(0x00000E, 2); return true;
    // src/unknown/C0/C08CD5.asm:48 CMP #$FFE0
    case 0xC08D1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E0, 2); else cpu.execute_instruction<0xC9>(0x00FFE0, 3); return true;
    // src/unknown/C0/C08CD5.asm:48 CMP #$FFE0
    // Overlapping static entry reached from 0xC08D1A.
    case 0xC08D1C: cpu.execute_instruction<0xFF>(0xE209B0, 4); return true;
    // src/unknown/C0/C08CD5.asm:49 BCS @UNKNOWN6
    case 0xC08D1D: cpu.execute_instruction<0xB0>(0x000009, 2); return true;
    // src/unknown/C0/C08CD5.asm:50 SEP #PROC_FLAGS::ACCUM8
    case 0xC08D1F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C08CD5.asm:50 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC08D1C.
    case 0xC08D20: cpu.execute_instruction<0x20>(0x0004B9, 3); return true;
    // src/unknown/C0/C08CD5.asm:52 LDA a:spritemap::special_flags,Y
    case 0xC08D21: cpu.execute_instruction<0xB9>(0x000004, 3); return true;
    // src/unknown/C0/C08CD5.asm:52 LDA a:spritemap::special_flags,Y
    // Overlapping static entry reached from 0xC08D20.
    case 0xC08D23: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // src/unknown/C0/C08CD5.asm:53 BPL @UNKNOWN2
    case 0xC08D24: cpu.execute_instruction<0x10>(0x0000D4, 2); return true;
    // src/unknown/C0/C08CD5.asm:54 BRA @UNKNOWN10
    case 0xC08D26: cpu.execute_instruction<0x80>(0x00004B, 2); return true;
    // src/unknown/C0/C08CD5.asm:57 STA <CURRENT_SPRITE_Y + 0
    case 0xC08D28: cpu.execute_instruction<0x85>(0x00009F, 2); return true;
    // src/unknown/C0/C08CD5.asm:58 LDA a:spritemap::tile,Y
    case 0xC08D2A: cpu.execute_instruction<0xB9>(0x000001, 3); return true;
    // src/unknown/C0/C08CD5.asm:59 STA <oam_entry::starting_tile,X
    case 0xC08D2D: cpu.execute_instruction<0x95>(0x000002, 2); return true;
    // src/unknown/C0/C08CD5.asm:60 LDA a:spritemap::x_offset,Y
    case 0xC08D2F: cpu.execute_instruction<0xB9>(0x000003, 3); return true;
    // src/unknown/C0/C08CD5.asm:61 AND #$00FF
    case 0xC08D32: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C08CD5.asm:61 AND #$00FF
    // Overlapping static entry reached from 0xC08D32.
    case 0xC08D34: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C08CD5.asm:62 CMP #$0080
    case 0xC08D35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000080, 3); return true;
    // src/unknown/C0/C08CD5.asm:62 CMP #$0080
    // Overlapping static entry reached from 0xC08D35.
    case 0xC08D37: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C08CD5.asm:63 BCC @UNKNOWN7
    case 0xC08D38: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // src/unknown/C0/C08CD5.asm:64 ORA #$FF00
    case 0xC08D3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00FF00, 3); return true;
    // src/unknown/C0/C08CD5.asm:64 ORA #$FF00
    // Overlapping static entry reached from 0xC08D3A.
    case 0xC08D3C: cpu.execute_instruction<0xFF>(0x9B6518, 4); return true;
    // src/unknown/C0/C08CD5.asm:65 CLC
    case 0xC08D3D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:67 ADC <CURRENT_SPRITE_BASE_X + 0
    case 0xC08D3E: cpu.execute_instruction<0x65>(0x00009B, 2); return true;
    // src/unknown/C0/C08CD5.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC08D40: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C08CD5.asm:69 STA <oam_entry::x_coord,X
    case 0xC08D42: cpu.execute_instruction<0x95>(0x000000, 2); return true;
    // src/unknown/C0/C08CD5.asm:70 XBA
    case 0xC08D44: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:71 BEQ @UNKNOWN8
    case 0xC08D45: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C0/C08CD5.asm:72 CMP #$00FF
    case 0xC08D47: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00D0FF, 3); return true;
    // src/unknown/C0/C08CD5.asm:73 BNE @UNKNOWN5
    case 0xC08D49: cpu.execute_instruction<0xD0>(0x0000D6, 2); return true;
    // src/unknown/C0/C08CD5.asm:73 BNE @UNKNOWN5
    // Overlapping static entry reached from 0xC08D47.
    case 0xC08D4A: cpu.execute_instruction<0xD6>(0x00002A, 2); return true;
    // src/unknown/C0/C08CD5.asm:75 ROL
    case 0xC08D4B: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:76 ROR <OAM_HIGH_TABLE_BUFFER + 0
    case 0xC08D4C: cpu.execute_instruction<0x66>(0x00000A, 2); return true;
    // src/unknown/C0/C08CD5.asm:77 LDA a:spritemap::special_flags,Y
    case 0xC08D4E: cpu.execute_instruction<0xB9>(0x000004, 3); return true;
    // src/unknown/C0/C08CD5.asm:78 ROR
    case 0xC08D51: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:79 ROR <OAM_HIGH_TABLE_BUFFER + 0
    case 0xC08D52: cpu.execute_instruction<0x66>(0x00000A, 2); return true;
    // src/unknown/C0/C08CD5.asm:80 BCC @UNKNOWN9
    case 0xC08D54: cpu.execute_instruction<0x90>(0x00000A, 2); return true;
    // src/unknown/C0/C08CD5.asm:81 LDA <OAM_HIGH_TABLE_BUFFER + 0
    case 0xC08D56: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C0/C08CD5.asm:82 STA [<OAM_HIGH_TABLE_ADDR + 0]
    case 0xC08D58: cpu.execute_instruction<0x87>(0x000007, 2); return true;
    // src/unknown/C0/C08CD5.asm:83 INC <OAM_HIGH_TABLE_ADDR + 0
    case 0xC08D5A: cpu.execute_instruction<0xE6>(0x000007, 2); return true;
    // src/unknown/C0/C08CD5.asm:84 LDA #$0080
    case 0xC08D5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008580, 3); return true;
    // src/unknown/C0/C08CD5.asm:85 STA <OAM_HIGH_TABLE_BUFFER + 0
    case 0xC08D5E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C0/C08CD5.asm:85 STA <OAM_HIGH_TABLE_BUFFER + 0
    // Overlapping static entry reached from 0xC08D5C.
    case 0xC08D5F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:87 LDA <CURRENT_SPRITE_Y + 0
    case 0xC08D60: cpu.execute_instruction<0xA5>(0x00009F, 2); return true;
    // src/unknown/C0/C08CD5.asm:88 STA <oam_entry::y_coord,X
    case 0xC08D62: cpu.execute_instruction<0x95>(0x000001, 2); return true;
    // src/unknown/C0/C08CD5.asm:89 INX
    case 0xC08D64: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:90 INX
    case 0xC08D65: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:91 INX
    case 0xC08D66: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:92 INX
    case 0xC08D67: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:93 LDA a:spritemap::special_flags,Y
    case 0xC08D68: cpu.execute_instruction<0xB9>(0x000004, 3); return true;
    // src/unknown/C0/C08CD5.asm:94 BMI @UNKNOWN10
    case 0xC08D6B: cpu.execute_instruction<0x30>(0x000006, 2); return true;
    // src/unknown/C0/C08CD5.asm:95 REP #PROC_FLAGS::ACCUM8
    case 0xC08D6D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C08CD5.asm:96 CPX <OAM_END_ADDR + 0
    case 0xC08D6F: cpu.execute_instruction<0xE4>(0x000005, 2); return true;
    // src/unknown/C0/C08CD5.asm:97 BCC @UNKNOWN2
    case 0xC08D71: cpu.execute_instruction<0x90>(0x000087, 2); return true;
    // src/unknown/C0/C08CD5.asm:99 STX <OAM_ADDR + 0
    case 0xC08D73: cpu.execute_instruction<0x86>(0x000003, 2); return true;
    // src/unknown/C0/C08CD5.asm:100 PLB
    case 0xC08D75: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:101 PLD
    case 0xC08D76: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:102 PLP
    case 0xC08D77: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C08CD5.asm:103 RTL
    case 0xC08D78: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C08D79.asm (unresolved).
bool execute_unresolved_c0_c08d79_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C08D79.asm:3 PHP
    case 0xC08D79: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C0/C08D79.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC08D7A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C08D79.asm:5 XBA
    case 0xC08D7C: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C08D79.asm:6 LDA BGMODE_MIRROR
    case 0xC08D7D: cpu.execute_instruction<0xAD>(0x00000F, 3); return true;
    // src/unknown/C0/C08D79.asm:7 AND #$00F0
    case 0xC08D80: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x008DF0, 3); return true;
    // src/unknown/C0/C08D79.asm:8 STA BGMODE_MIRROR
    case 0xC08D82: cpu.execute_instruction<0x8D>(0x00000F, 3); return true;
    // src/unknown/C0/C08D79.asm:8 STA BGMODE_MIRROR
    // Overlapping static entry reached from 0xC08D80.
    case 0xC08D83: cpu.execute_instruction<0x0F>(0x0DEB00, 4); return true;
    // src/unknown/C0/C08D79.asm:9 XBA
    case 0xC08D85: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C08D79.asm:10 ORA BGMODE_MIRROR
    case 0xC08D86: cpu.execute_instruction<0x0D>(0x00000F, 3); return true;
    // src/unknown/C0/C08D79.asm:10 ORA BGMODE_MIRROR
    // Overlapping static entry reached from 0xC08D83.
    case 0xC08D87: cpu.execute_instruction<0x0F>(0x0F8D00, 4); return true;
    // src/unknown/C0/C08D79.asm:11 STA BGMODE_MIRROR
    case 0xC08D89: cpu.execute_instruction<0x8D>(0x00000F, 3); return true;
    // src/unknown/C0/C08D79.asm:11 STA BGMODE_MIRROR
    // Overlapping static entry reached from 0xC08D87.
    case 0xC08D8B: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/unknown/C0/C08D79.asm:12 STA f:BGMODE
    case 0xC08D8C: cpu.execute_instruction<0x8F>(0x002105, 4); return true;
    // src/unknown/C0/C08D79.asm:13 PLP
    case 0xC08D90: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C0/C08D79.asm:14 RTL
    case 0xC08D91: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09279.asm (unresolved).
bool execute_unresolved_c0_c09279_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09279.asm:3 JML (.LOWORD(TEMP_FUNCTION_POINTER))
    case 0xC09279: cpu.execute_instruction<0xDC>(0x0000BC, 3); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0927C.asm (unresolved).
bool execute_unresolved_c0_c0927c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0927C.asm:3 LDA #.LOWORD(UNKNOWN_C0DB0F)
    case 0xC0927C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00DB0F, 3); return true;
    // src/unknown/C0/C0927C.asm:3 LDA #.LOWORD(UNKNOWN_C0DB0F)
    // Overlapping static entry reached from 0xC0927C.
    case 0xC0927E: cpu.execute_instruction<0xDB>(0x000000, 1); return true;
    // src/unknown/C0/C0927C.asm:4 STA CURRENT_ENTITY_DRAW_CALLBACK
    case 0xC0927F: cpu.execute_instruction<0x8D>(0x000A5E, 3); return true;
    // src/unknown/C0/C0927C.asm:5 LDX #.LOWORD(-1)
    case 0xC09282: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0927C.asm:5 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC09282.
    case 0xC09284: cpu.execute_instruction<0xFF>(0x0A508E, 4); return true;
    // src/unknown/C0/C0927C.asm:6 STX FIRST_ENTITY
    case 0xC09285: cpu.execute_instruction<0x8E>(0x000A50, 3); return true;
    // src/unknown/C0/C0927C.asm:7 STX ENTITY_NEXT_ENTITY_TABLE+58
    case 0xC09288: cpu.execute_instruction<0x8E>(0x000AD8, 3); return true;
    // src/unknown/C0/C0927C.asm:8 STX ENTITY_SCRIPT_NEXT_SCRIPTS+138
    case 0xC0928B: cpu.execute_instruction<0x8E>(0x0012E4, 3); return true;
    // src/unknown/C0/C0927C.asm:9 INX
    case 0xC0928E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C0927C.asm:10 STX LAST_ENTITY
    case 0xC0928F: cpu.execute_instruction<0x8E>(0x000A52, 3); return true;
    // src/unknown/C0/C0927C.asm:11 STX LAST_ALLOCATED_SCRIPT
    case 0xC09292: cpu.execute_instruction<0x8E>(0x000A54, 3); return true;
    // src/unknown/C0/C0927C.asm:12 CLC
    case 0xC09295: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0927C.asm:13 LDX #56
    case 0xC09296: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000038, 2); else cpu.execute_instruction<0xA2>(0x000038, 3); return true;
    // src/unknown/C0/C0927C.asm:13 LDX #56
    // Overlapping static entry reached from 0xC09296.
    case 0xC09298: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C0/C0927C.asm:15 TXA
    case 0xC09299: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0927C.asm:16 ADC #2
    case 0xC0929A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x000002, 3); return true;
    // src/unknown/C0/C0927C.asm:16 ADC #2
    // Overlapping static entry reached from 0xC0929A.
    case 0xC0929C: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0927C.asm:17 STA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC0929D: cpu.execute_instruction<0x9D>(0x000A9E, 3); return true;
    // src/unknown/C0/C0927C.asm:18 DEX
    case 0xC092A0: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0927C.asm:19 DEX
    case 0xC092A1: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0927C.asm:20 BPL @UNKNOWN0
    case 0xC092A2: cpu.execute_instruction<0x10>(0x0000F5, 2); return true;
    // src/unknown/C0/C0927C.asm:21 LDX #136
    case 0xC092A4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000088, 2); else cpu.execute_instruction<0xA2>(0x000088, 3); return true;
    // src/unknown/C0/C0927C.asm:21 LDX #136
    // Overlapping static entry reached from 0xC092A4.
    case 0xC092A6: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C0/C0927C.asm:23 TXA
    case 0xC092A7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0927C.asm:24 ADC #2
    case 0xC092A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000002, 2); else cpu.execute_instruction<0x69>(0x000002, 3); return true;
    // src/unknown/C0/C0927C.asm:24 ADC #2
    // Overlapping static entry reached from 0xC092A8.
    case 0xC092AA: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0927C.asm:25 STA ENTITY_SCRIPT_NEXT_SCRIPTS,X
    case 0xC092AB: cpu.execute_instruction<0x9D>(0x00125A, 3); return true;
    // src/unknown/C0/C0927C.asm:26 DEX
    case 0xC092AE: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0927C.asm:27 DEX
    case 0xC092AF: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0927C.asm:28 BPL @UNKNOWN1
    case 0xC092B0: cpu.execute_instruction<0x10>(0x0000F5, 2); return true;
    // src/unknown/C0/C0927C.asm:29 LDX #58
    case 0xC092B2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003A, 2); else cpu.execute_instruction<0xA2>(0x00003A, 3); return true;
    // src/unknown/C0/C0927C.asm:29 LDX #58
    // Overlapping static entry reached from 0xC092B2.
    case 0xC092B4: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C0/C0927C.asm:30 LDA #.LOWORD(-1)
    case 0xC092B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0927C.asm:30 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC092B5.
    case 0xC092B7: cpu.execute_instruction<0xFF>(0x0A629D, 4); return true;
    // src/unknown/C0/C0927C.asm:32 STA ENTITY_SCRIPT_TABLE,X
    case 0xC092B8: cpu.execute_instruction<0x9D>(0x000A62, 3); return true;
    // src/unknown/C0/C0927C.asm:33 DEX
    case 0xC092BB: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0927C.asm:34 DEX
    case 0xC092BC: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0927C.asm:35 BPL @UNKNOWN2
    case 0xC092BD: cpu.execute_instruction<0x10>(0x0000F9, 2); return true;
    // src/unknown/C0/C0927C.asm:36 LDX #58
    case 0xC092BF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003A, 2); else cpu.execute_instruction<0xA2>(0x00003A, 3); return true;
    // src/unknown/C0/C0927C.asm:36 LDX #58
    // Overlapping static entry reached from 0xC092BF.
    case 0xC092C1: cpu.execute_instruction<0x00>(0x00009E, 2); return true;
    // src/unknown/C0/C0927C.asm:38 STZ ENTITY_SPRITEMAP_POINTER_HIGH,X
    case 0xC092C2: cpu.execute_instruction<0x9E>(0x00116A, 3); return true;
    // src/unknown/C0/C0927C.asm:39 STZ ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC092C5: cpu.execute_instruction<0x9E>(0x0010B6, 3); return true;
    // src/unknown/C0/C0927C.asm:40 DEX
    case 0xC092C8: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0927C.asm:41 DEX
    case 0xC092C9: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0927C.asm:42 BPL @UNKNOWN3
    case 0xC092CA: cpu.execute_instruction<0x10>(0x0000F6, 2); return true;
    // src/unknown/C0/C0927C.asm:43 LDX #6
    case 0xC092CC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/unknown/C0/C0927C.asm:43 LDX #6
    // Overlapping static entry reached from 0xC092CC.
    case 0xC092CE: cpu.execute_instruction<0x00>(0x00009E, 2); return true;
    // src/unknown/C0/C0927C.asm:45 STZ ENTITY_BG_HORIZONTAL_OFFSET_HIGH,X
    case 0xC092CF: cpu.execute_instruction<0x9E>(0x001A12, 3); return true;
    // src/unknown/C0/C0927C.asm:46 STZ ENTITY_BG_VERTICAL_OFFSET_HIGH,X
    case 0xC092D2: cpu.execute_instruction<0x9E>(0x001A1A, 3); return true;
    // src/unknown/C0/C0927C.asm:47 STZ ENTITY_BG_HORIZONTAL_VELOCITY_LOW,X
    case 0xC092D5: cpu.execute_instruction<0x9E>(0x001A22, 3); return true;
    // src/unknown/C0/C0927C.asm:48 STZ ENTITY_BG_HORIZONTAL_VELOCITY_HIGH,X
    case 0xC092D8: cpu.execute_instruction<0x9E>(0x001A32, 3); return true;
    // src/unknown/C0/C0927C.asm:49 STZ ENTITY_BG_VERTICAL_VELOCITY_LOW,X
    case 0xC092DB: cpu.execute_instruction<0x9E>(0x001A2A, 3); return true;
    // src/unknown/C0/C0927C.asm:50 STZ ENTITY_BG_VERTICAL_VELOCITY_HIGH,X
    case 0xC092DE: cpu.execute_instruction<0x9E>(0x001A3A, 3); return true;
    // src/unknown/C0/C0927C.asm:51 STZ ENTITY_BG_HORIZONTAL_OFFSET_LOW,X
    case 0xC092E1: cpu.execute_instruction<0x9E>(0x001A02, 3); return true;
    // src/unknown/C0/C0927C.asm:52 STZ ENTITY_BG_VERTICAL_OFFSET_LOW,X
    case 0xC092E4: cpu.execute_instruction<0x9E>(0x001A0A, 3); return true;
    // src/unknown/C0/C0927C.asm:53 STZ ENTITY_DRAW_PRIORITY,X
    case 0xC092E7: cpu.execute_instruction<0x9E>(0x00103E, 3); return true;
    // src/unknown/C0/C0927C.asm:54 DEX
    case 0xC092EA: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0927C.asm:55 DEX
    case 0xC092EB: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0927C.asm:56 BPL @UNKNOWN4
    case 0xC092EC: cpu.execute_instruction<0x10>(0x0000E1, 2); return true;
    // src/unknown/C0/C0927C.asm:57 JSR CLEAR_ENTITY_DRAW_SORTING_TABLE
    case 0xC092EE: cpu.execute_instruction<0x20>(0x000000, 3); return true;
    // src/unknown/C0/C0927C.asm:58 STZ DISABLE_ACTIONSCRIPT
    case 0xC092F1: cpu.execute_instruction<0x9C>(0x000A60, 3); return true;
    // src/unknown/C0/C0927C.asm:59 RTL
    case 0xC092F4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0943C.asm (unresolved).
bool execute_unresolved_c0_c0943c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0943C.asm:3 LDX FIRST_ENTITY
    case 0xC0943C: cpu.execute_instruction<0xAE>(0x000A50, 3); return true;
    // src/unknown/C0/C0943C.asm:4 BMI @UNKNOWN1
    case 0xC0943F: cpu.execute_instruction<0x30>(0x00000F, 2); return true;
    // src/unknown/C0/C0943C.asm:6 LDA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC09441: cpu.execute_instruction<0xBD>(0x0010B6, 3); return true;
    // src/unknown/C0/C0943C.asm:7 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC09444: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C0/C0943C.asm:7 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC09444.
    case 0xC09446: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00B69D, 3); return true;
    // src/unknown/C0/C0943C.asm:8 STA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC09447: cpu.execute_instruction<0x9D>(0x0010B6, 3); return true;
    // src/unknown/C0/C0943C.asm:8 STA ENTITY_TICK_CALLBACK_HIGH,X
    // Overlapping static entry reached from 0xC09446.
    case 0xC09448: cpu.execute_instruction<0xB6>(0x000010, 2); return true;
    // src/unknown/C0/C0943C.asm:8 STA ENTITY_TICK_CALLBACK_HIGH,X
    // Overlapping static entry reached from 0xC09446.
    case 0xC09449: cpu.execute_instruction<0x10>(0x0000BD, 2); return true;
    // src/unknown/C0/C0943C.asm:9 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC0944A: cpu.execute_instruction<0xBD>(0x000A9E, 3); return true;
    // src/unknown/C0/C0943C.asm:9 LDA ENTITY_NEXT_ENTITY_TABLE,X
    // Overlapping static entry reached from 0xC09449.
    case 0xC0944B: cpu.execute_instruction<0x9E>(0x00AA0A, 3); return true;
    // src/unknown/C0/C0943C.asm:10 TAX
    case 0xC0944D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0943C.asm:11 BPL @UNKNOWN0
    case 0xC0944E: cpu.execute_instruction<0x10>(0x0000F1, 2); return true;
    // src/unknown/C0/C0943C.asm:13 RTL
    case 0xC09450: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09451.asm (unresolved).
bool execute_unresolved_c0_c09451_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09451.asm:3 LDX FIRST_ENTITY
    case 0xC09451: cpu.execute_instruction<0xAE>(0x000A50, 3); return true;
    // src/unknown/C0/C09451.asm:4 BMI @UNKNOWN1
    case 0xC09454: cpu.execute_instruction<0x30>(0x00000F, 2); return true;
    // src/unknown/C0/C09451.asm:6 LDA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC09456: cpu.execute_instruction<0xBD>(0x0010B6, 3); return true;
    // src/unknown/C0/C09451.asm:7 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xC09459: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x003FFF, 3); return true;
    // src/unknown/C0/C09451.asm:7 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xC09459.
    case 0xC0945B: cpu.execute_instruction<0x3F>(0x10B69D, 4); return true;
    // src/unknown/C0/C09451.asm:8 STA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC0945C: cpu.execute_instruction<0x9D>(0x0010B6, 3); return true;
    // src/unknown/C0/C09451.asm:9 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC0945F: cpu.execute_instruction<0xBD>(0x000A9E, 3); return true;
    // src/unknown/C0/C09451.asm:10 TAX
    case 0xC09462: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09451.asm:11 BPL @UNKNOWN0
    case 0xC09463: cpu.execute_instruction<0x10>(0x0000F1, 2); return true;
    // src/unknown/C0/C09451.asm:13 RTL
    case 0xC09465: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C094D0.asm (unresolved).
bool execute_unresolved_c0_c094d0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C094D0.asm:3 BIT ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC094D0: cpu.execute_instruction<0x3C>(0x0010B6, 3); return true;
    // src/unknown/C0/C094D0.asm:4 BVS @UNKNOWN1
    case 0xC094D3: cpu.execute_instruction<0x70>(0x00001E, 2); return true;
    // src/unknown/C0/C094D0.asm:5 LDY ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC094D5: cpu.execute_instruction<0xBC>(0x000ADA, 3); return true;
    // src/unknown/C0/C094D0.asm:7 STY $8A
    case 0xC094D8: cpu.execute_instruction<0x84>(0x00008A, 2); return true;
    // src/unknown/C0/C094D0.asm:8 STY CURRENT_SCRIPT_OFFSET
    case 0xC094DA: cpu.execute_instruction<0x8C>(0x001A48, 3); return true;
    // src/unknown/C0/C094D0.asm:9 STY CURRENT_SCRIPT_SLOT
    case 0xC094DD: cpu.execute_instruction<0x8C>(0x001A46, 3); return true;
    // src/unknown/C0/C094D0.asm:10 LSR CURRENT_SCRIPT_SLOT
    case 0xC094E0: cpu.execute_instruction<0x4E>(0x001A46, 3); return true;
    // src/unknown/C0/C094D0.asm:11 LDA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC094E3: cpu.execute_instruction<0xB9>(0x00125A, 3); return true;
    // src/unknown/C0/C094D0.asm:12 STA ACTIONSCRIPT_CURRENT_SCRIPT
    case 0xC094E6: cpu.execute_instruction<0x8D>(0x000A58, 3); return true;
    // src/unknown/C0/C094D0.asm:13 JSR UNKNOWN_C09506
    case 0xC094E9: cpu.execute_instruction<0x20>(0x009506, 3); return true;
    // src/unknown/C0/C094D0.asm:14 LDY ACTIONSCRIPT_CURRENT_SCRIPT
    case 0xC094EC: cpu.execute_instruction<0xAC>(0x000A58, 3); return true;
    // src/unknown/C0/C094D0.asm:15 BPL @UNKNOWN0
    case 0xC094EF: cpu.execute_instruction<0x10>(0x0000E7, 2); return true;
    // src/unknown/C0/C094D0.asm:16 LDX $88
    case 0xC094F1: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C094D0.asm:18 LDA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC094F3: cpu.execute_instruction<0xBD>(0x0010B6, 3); return true;
    // src/unknown/C0/C094D0.asm:19 BMI @UNKNOWN2
    case 0xC094F6: cpu.execute_instruction<0x30>(0x00000D, 2); return true;
    // src/unknown/C0/C094D0.asm:20 STA CURRENT_ENTITY_TICK_CALLBACK+2
    case 0xC094F8: cpu.execute_instruction<0x8D>(0x000A5C, 3); return true;
    // src/unknown/C0/C094D0.asm:21 LDA ENTITY_TICK_CALLBACK_LOW,X
    case 0xC094FB: cpu.execute_instruction<0xBD>(0x00107A, 3); return true;
    // src/unknown/C0/C094D0.asm:22 STA CURRENT_ENTITY_TICK_CALLBACK
    case 0xC094FE: cpu.execute_instruction<0x8D>(0x000A5A, 3); return true;
    // src/unknown/C0/C094D0.asm:23 JSL JUMP_TO_LOADED_MOVEMENT_PTR
    case 0xC09501: cpu.execute_instruction<0x22>(0xC09D9E, 4); return true;
    // src/unknown/C0/C094D0.asm:25 RTS
    case 0xC09505: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09506.asm (unresolved).
bool execute_unresolved_c0_c09506_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09506.asm:3 LDX $8A
    case 0xC09506: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/unknown/C0/C09506.asm:4 LDA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC09508: cpu.execute_instruction<0xBD>(0x001372, 3); return true;
    // src/unknown/C0/C09506.asm:5 BNE @RETURN
    case 0xC0950B: cpu.execute_instruction<0xD0>(0x000047, 2); return true;
    // src/unknown/C0/C09506.asm:6 LDY ENTITY_SCRIPT_PROGRAM_COUNTERS,X
    case 0xC0950D: cpu.execute_instruction<0xBC>(0x0013FE, 3); return true;
    // src/unknown/C0/C09506.asm:7 LDA ENTITY_SCRIPT_PROGRAM_COUNTER_BANKS,X
    case 0xC09510: cpu.execute_instruction<0xBD>(0x00148A, 3); return true;
    // src/unknown/C0/C09506.asm:8 STA $82
    case 0xC09513: cpu.execute_instruction<0x85>(0x000082, 2); return true;
    // src/unknown/C0/C09506.asm:9 TXA
    case 0xC09515: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C09506.asm:10 ASL
    case 0xC09516: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C09506.asm:11 ASL
    case 0xC09517: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C09506.asm:12 ASL
    case 0xC09518: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C09506.asm:13 ADC #.LOWORD(ENTITY_SCRIPT_STACKS)
    case 0xC09519: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A2, 2); else cpu.execute_instruction<0x69>(0x0015A2, 3); return true;
    // src/unknown/C0/C09506.asm:13 ADC #.LOWORD(ENTITY_SCRIPT_STACKS)
    // Overlapping static entry reached from 0xC09519.
    case 0xC0951B: cpu.execute_instruction<0x15>(0x000085, 2); return true;
    // src/unknown/C0/C09506.asm:14 STA $84
    case 0xC0951C: cpu.execute_instruction<0x85>(0x000084, 2); return true;
    // src/unknown/C0/C09506.asm:14 STA $84
    // Overlapping static entry reached from 0xC0951B.
    case 0xC0951D: cpu.execute_instruction<0x84>(0x0000B7, 2); return true;
    // src/unknown/C0/C09506.asm:16 LDA [$80],Y
    case 0xC0951E: cpu.execute_instruction<0xB7>(0x000080, 2); return true;
    // src/unknown/C0/C09506.asm:16 LDA [$80],Y
    // Overlapping static entry reached from 0xC0951D.
    case 0xC0951F: cpu.execute_instruction<0x80>(0x0000C8, 2); return true;
    // src/unknown/C0/C09506.asm:17 INY
    case 0xC09520: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C09506.asm:18 AND #$00FF
    case 0xC09521: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C09506.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC09521.
    case 0xC09523: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C0/C09506.asm:19 CMP #$0070
    case 0xC09524: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000070, 2); else cpu.execute_instruction<0xC9>(0x000070, 3); return true;
    // src/unknown/C0/C09506.asm:19 CMP #$0070
    // Overlapping static entry reached from 0xC09524.
    case 0xC09526: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C09506.asm:20 BCS @UNKNOWN1
    case 0xC09527: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/unknown/C0/C09506.asm:21 ASL
    case 0xC09529: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C09506.asm:22 TAX
    case 0xC0952A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09506.asm:23 JSR (.LOWORD(MOVEMENT_CTRL_CODES_PTR_TABLE),X)
    case 0xC0952B: cpu.execute_instruction<0xFC>(0x009558, 3); return true;
    // src/unknown/C0/C09506.asm:24 BRA @UNKNOWN2
    case 0xC0952E: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C0/C09506.asm:26 STA $90
    case 0xC09530: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/unknown/C0/C09506.asm:27 AND #$000F
    case 0xC09532: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C0/C09506.asm:27 AND #$000F
    // Overlapping static entry reached from 0xC09532.
    case 0xC09534: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C09506.asm:28 STA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC09535: cpu.execute_instruction<0x9D>(0x001372, 3); return true;
    // src/unknown/C0/C09506.asm:29 LDA $90
    case 0xC09538: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/unknown/C0/C09506.asm:30 AND #$0070
    case 0xC0953A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000070, 2); else cpu.execute_instruction<0x29>(0x000070, 3); return true;
    // src/unknown/C0/C09506.asm:30 AND #$0070
    // Overlapping static entry reached from 0xC0953A.
    case 0xC0953C: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C0/C09506.asm:31 LSR
    case 0xC0953D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C09506.asm:32 LSR
    case 0xC0953E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C09506.asm:33 LSR
    case 0xC0953F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C09506.asm:34 TAX
    case 0xC09540: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09506.asm:35 JSR (.LOWORD(MOVEMENT_CTRL_CODES_PTR_TABLE)+138,X)
    case 0xC09541: cpu.execute_instruction<0xFC>(0x0095E2, 3); return true;
    // src/unknown/C0/C09506.asm:37 LDX $8A
    case 0xC09544: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/unknown/C0/C09506.asm:38 LDA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC09546: cpu.execute_instruction<0xBD>(0x001372, 3); return true;
    // src/unknown/C0/C09506.asm:39 BEQ @UNKNOWN0
    case 0xC09549: cpu.execute_instruction<0xF0>(0x0000D3, 2); return true;
    // src/unknown/C0/C09506.asm:40 TYA
    case 0xC0954B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C09506.asm:41 STA ENTITY_SCRIPT_PROGRAM_COUNTERS,X
    case 0xC0954C: cpu.execute_instruction<0x9D>(0x0013FE, 3); return true;
    // src/unknown/C0/C09506.asm:42 LDA $82
    case 0xC0954F: cpu.execute_instruction<0xA5>(0x000082, 2); return true;
    // src/unknown/C0/C09506.asm:43 STA ENTITY_SCRIPT_PROGRAM_COUNTER_BANKS,X
    case 0xC09551: cpu.execute_instruction<0x9D>(0x00148A, 3); return true;
    // src/unknown/C0/C09506.asm:45 DEC ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC09554: cpu.execute_instruction<0xDE>(0x001372, 3); return true;
    // src/unknown/C0/C09506.asm:46 RTS
    case 0xC09557: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09907.asm (unresolved).
bool execute_unresolved_c0_c09907_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09907.asm:3 ASL
    case 0xC09907: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C09907.asm:4 TAX
    case 0xC09908: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09907.asm:5 STZ ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC09909: cpu.execute_instruction<0x9E>(0x000DAA, 3); return true;
    // src/unknown/C0/C09907.asm:6 STZ ENTITY_DELTA_X_TABLE,X
    case 0xC0990C: cpu.execute_instruction<0x9E>(0x000CF6, 3); return true;
    // src/unknown/C0/C09907.asm:7 STZ ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC0990F: cpu.execute_instruction<0x9E>(0x000DE6, 3); return true;
    // src/unknown/C0/C09907.asm:8 STZ ENTITY_DELTA_Y_TABLE,X
    case 0xC09912: cpu.execute_instruction<0x9E>(0x000D32, 3); return true;
    // src/unknown/C0/C09907.asm:9 STZ ENTITY_DELTA_Z_FRACTION_TABLE,X
    case 0xC09915: cpu.execute_instruction<0x9E>(0x000E22, 3); return true;
    // src/unknown/C0/C09907.asm:10 STZ ENTITY_DELTA_Z_TABLE,X
    case 0xC09918: cpu.execute_instruction<0x9E>(0x000D6E, 3); return true;
    // src/unknown/C0/C09907.asm:11 RTL
    case 0xC0991B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09AC5.asm (unresolved).
bool execute_unresolved_c0_c09ac5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09AC5.asm:3 LDA ($8C)
    case 0xC09AC5: cpu.execute_instruction<0xB2>(0x00008C, 2); return true;
    // src/unknown/C0/C09AC5.asm:4 AND $90
    case 0xC09AC7: cpu.execute_instruction<0x25>(0x000090, 2); return true;
    // src/unknown/C0/C09AC5.asm:5 STA ($8C)
    case 0xC09AC9: cpu.execute_instruction<0x92>(0x00008C, 2); return true;
    // src/unknown/C0/C09AC5.asm:6 RTS
    case 0xC09ACB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09ACC.asm (unresolved).
bool execute_unresolved_c0_c09acc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09ACC.asm:3 LDA ($8C)
    case 0xC09ACC: cpu.execute_instruction<0xB2>(0x00008C, 2); return true;
    // src/unknown/C0/C09ACC.asm:4 ORA $90
    case 0xC09ACE: cpu.execute_instruction<0x05>(0x000090, 2); return true;
    // src/unknown/C0/C09ACC.asm:5 STA ($8C)
    case 0xC09AD0: cpu.execute_instruction<0x92>(0x00008C, 2); return true;
    // src/unknown/C0/C09ACC.asm:6 RTS
    case 0xC09AD2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09AD3.asm (unresolved).
bool execute_unresolved_c0_c09ad3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09AD3.asm:3 LDA ($8C)
    case 0xC09AD3: cpu.execute_instruction<0xB2>(0x00008C, 2); return true;
    // src/unknown/C0/C09AD3.asm:4 CLC
    case 0xC09AD5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09AD3.asm:5 ADC $90
    case 0xC09AD6: cpu.execute_instruction<0x65>(0x000090, 2); return true;
    // src/unknown/C0/C09AD3.asm:6 STA ($8C)
    case 0xC09AD8: cpu.execute_instruction<0x92>(0x00008C, 2); return true;
    // src/unknown/C0/C09AD3.asm:7 RTS
    case 0xC09ADA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09ADB.asm (unresolved).
bool execute_unresolved_c0_c09adb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09ADB.asm:3 LDA ($8C)
    case 0xC09ADB: cpu.execute_instruction<0xB2>(0x00008C, 2); return true;
    // src/unknown/C0/C09ADB.asm:4 EOR $90
    case 0xC09ADD: cpu.execute_instruction<0x45>(0x000090, 2); return true;
    // src/unknown/C0/C09ADB.asm:5 STA ($8C)
    case 0xC09ADF: cpu.execute_instruction<0x92>(0x00008C, 2); return true;
    // src/unknown/C0/C09ADB.asm:6 RTS
    case 0xC09AE1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09C02.asm (unresolved).
bool execute_unresolved_c0_c09c02_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09C02.asm:3 LDA LAST_ALLOCATED_SCRIPT
    case 0xC09C02: cpu.execute_instruction<0xAD>(0x000A54, 3); return true;
    // src/unknown/C0/C09C02.asm:4 BMI @UNKNOWN2
    case 0xC09C05: cpu.execute_instruction<0x30>(0x000019, 2); return true;
    // src/unknown/C0/C09C02.asm:5 LDY #.LOWORD(-1)
    case 0xC09C07: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C09C02.asm:5 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC09C07.
    case 0xC09C09: cpu.execute_instruction<0xFF>(0x0A52AD, 4); return true;
    // src/unknown/C0/C09C02.asm:6 LDA LAST_ENTITY
    case 0xC09C0A: cpu.execute_instruction<0xAD>(0x000A52, 3); return true;
    // src/unknown/C0/C09C02.asm:7 BMI @UNKNOWN2
    case 0xC09C0D: cpu.execute_instruction<0x30>(0x000011, 2); return true;
    // src/unknown/C0/C09C02.asm:9 TAX
    case 0xC09C0F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09C02.asm:10 CPX ENTITY_ALLOCATION_MIN_SLOT
    case 0xC09C10: cpu.execute_instruction<0xEC>(0x000A4C, 3); return true;
    // src/unknown/C0/C09C02.asm:11 BCC @UNKNOWN1
    case 0xC09C13: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/unknown/C0/C09C02.asm:12 CPX ENTITY_ALLOCATION_MAX_SLOT
    case 0xC09C15: cpu.execute_instruction<0xEC>(0x000A4E, 3); return true;
    // src/unknown/C0/C09C02.asm:13 BCC @UNKNOWN3
    case 0xC09C18: cpu.execute_instruction<0x90>(0x000008, 2); return true;
    // src/unknown/C0/C09C02.asm:15 TXY
    case 0xC09C1A: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C09C02.asm:16 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09C1B: cpu.execute_instruction<0xBD>(0x000A9E, 3); return true;
    // src/unknown/C0/C09C02.asm:17 BPL @UNKNOWN0
    case 0xC09C1E: cpu.execute_instruction<0x10>(0x0000EF, 2); return true;
    // src/unknown/C0/C09C02.asm:19 SEC
    case 0xC09C20: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C09C02.asm:20 RTS
    case 0xC09C21: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C0/C09C02.asm:22 TYA
    case 0xC09C22: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C09C02.asm:23 BPL @UNKNOWN4
    case 0xC09C23: cpu.execute_instruction<0x10>(0x000008, 2); return true;
    // src/unknown/C0/C09C02.asm:24 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09C25: cpu.execute_instruction<0xBD>(0x000A9E, 3); return true;
    // src/unknown/C0/C09C02.asm:25 STA LAST_ENTITY
    case 0xC09C28: cpu.execute_instruction<0x8D>(0x000A52, 3); return true;
    // src/unknown/C0/C09C02.asm:26 CLC
    case 0xC09C2B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09C02.asm:27 RTS
    case 0xC09C2C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C0/C09C02.asm:29 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09C2D: cpu.execute_instruction<0xBD>(0x000A9E, 3); return true;
    // src/unknown/C0/C09C02.asm:30 STA ENTITY_NEXT_ENTITY_TABLE,Y
    case 0xC09C30: cpu.execute_instruction<0x99>(0x000A9E, 3); return true;
    // src/unknown/C0/C09C02.asm:31 CLC
    case 0xC09C33: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09C02.asm:32 RTS
    case 0xC09C34: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09C35.asm (unresolved).
bool execute_unresolved_c0_c09c35_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09C35.asm:3 ASL
    case 0xC09C35: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C09C35.asm:4 TAX
    case 0xC09C36: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09C35.asm:5 JSR UNKNOWN_C09C3B
    case 0xC09C37: cpu.execute_instruction<0x20>(0x009C3B, 3); return true;
    // src/unknown/C0/C09C35.asm:6 RTL
    case 0xC09C3A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09C3B.asm (unresolved).
bool execute_unresolved_c0_c09c3b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09C3B.asm:3 PHA
    case 0xC09C3B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C09C3B.asm:4 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC09C3C: cpu.execute_instruction<0xBD>(0x000A62, 3); return true;
    // src/unknown/C0/C09C3B.asm:5 BMI @UNKNOWN0
    case 0xC09C3F: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/unknown/C0/C09C3B.asm:6 PHY
    case 0xC09C41: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/unknown/C0/C09C3B.asm:7 LDA #$FFFF
    case 0xC09C42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C09C3B.asm:7 LDA #$FFFF
    // Overlapping static entry reached from 0xC09C42.
    case 0xC09C44: cpu.execute_instruction<0xFF>(0x0A629D, 4); return true;
    // src/unknown/C0/C09C3B.asm:8 STA ENTITY_SCRIPT_TABLE,X
    case 0xC09C45: cpu.execute_instruction<0x9D>(0x000A62, 3); return true;
    // src/unknown/C0/C09C3B.asm:9 JSR CLEAR_SPRITE_TICK_CALLBACK
    case 0xC09C48: cpu.execute_instruction<0x20>(0x009DA1, 3); return true;
    // src/unknown/C0/C09C3B.asm:10 JSR UNKNOWN_C09C99
    case 0xC09C4B: cpu.execute_instruction<0x20>(0x009C99, 3); return true;
    // src/unknown/C0/C09C3B.asm:11 JSR UNKNOWN_C09C73
    case 0xC09C4E: cpu.execute_instruction<0x20>(0x009C73, 3); return true;
    // src/unknown/C0/C09C3B.asm:12 JSR UNKNOWN_C09C8F
    case 0xC09C51: cpu.execute_instruction<0x20>(0x009C8F, 3); return true;
    // src/unknown/C0/C09C3B.asm:13 PLY
    case 0xC09C54: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C0/C09C3B.asm:15 PLA
    case 0xC09C55: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C09C3B.asm:16 RTS
    case 0xC09C56: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09C57.asm (unresolved).
bool execute_unresolved_c0_c09c57_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09C57.asm:3 LDA #$FFFF
    case 0xC09C57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C09C57.asm:3 LDA #$FFFF
    // Overlapping static entry reached from 0xC09C57.
    case 0xC09C59: cpu.execute_instruction<0xFF>(0x0A9E9D, 4); return true;
    // src/unknown/C0/C09C57.asm:4 STA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09C5A: cpu.execute_instruction<0x9D>(0x000A9E, 3); return true;
    // src/unknown/C0/C09C57.asm:5 TXA
    case 0xC09C5D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C09C57.asm:6 LDX FIRST_ENTITY
    case 0xC09C5E: cpu.execute_instruction<0xAE>(0x000A50, 3); return true;
    // src/unknown/C0/C09C57.asm:7 BPL @UNKNOWN0
    case 0xC09C61: cpu.execute_instruction<0x10>(0x000005, 2); return true;
    // src/unknown/C0/C09C57.asm:8 STA FIRST_ENTITY
    case 0xC09C63: cpu.execute_instruction<0x8D>(0x000A50, 3); return true;
    // src/unknown/C0/C09C57.asm:9 BRA @UNKNOWN1
    case 0xC09C66: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C0/C09C57.asm:11 TXY
    case 0xC09C68: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C09C57.asm:12 LDX ENTITY_NEXT_ENTITY_TABLE,Y
    case 0xC09C69: cpu.execute_instruction<0xBE>(0x000A9E, 3); return true;
    // src/unknown/C0/C09C57.asm:13 BPL @UNKNOWN0
    case 0xC09C6C: cpu.execute_instruction<0x10>(0x0000FA, 2); return true;
    // src/unknown/C0/C09C57.asm:14 STA ENTITY_NEXT_ENTITY_TABLE,Y
    case 0xC09C6E: cpu.execute_instruction<0x99>(0x000A9E, 3); return true;
    // src/unknown/C0/C09C57.asm:16 TAX
    case 0xC09C71: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09C57.asm:17 RTS
    case 0xC09C72: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09C73.asm (unresolved).
bool execute_unresolved_c0_c09c73_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09C73.asm:3 JSR UNKNOWN_C09CB5
    case 0xC09C73: cpu.execute_instruction<0x20>(0x009CB5, 3); return true;
    // src/unknown/C0/C09C73.asm:4 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09C76: cpu.execute_instruction<0xBD>(0x000A9E, 3); return true;
    // src/unknown/C0/C09C73.asm:5 CPY #$FFFF
    case 0xC09C79: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C09C73.asm:5 CPY #$FFFF
    // Overlapping static entry reached from 0xC09C79.
    case 0xC09C7B: cpu.execute_instruction<0xFF>(0x9905F0, 4); return true;
    // src/unknown/C0/C09C73.asm:6 BEQ @UNKNOWN0
    case 0xC09C7C: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C09C73.asm:7 STA ENTITY_NEXT_ENTITY_TABLE,Y
    case 0xC09C7E: cpu.execute_instruction<0x99>(0x000A9E, 3); return true;
    // src/unknown/C0/C09C73.asm:7 STA ENTITY_NEXT_ENTITY_TABLE,Y
    // Overlapping static entry reached from 0xC09C7B.
    case 0xC09C7F: cpu.execute_instruction<0x9E>(0x00800A, 3); return true;
    // src/unknown/C0/C09C73.asm:8 BRA @UNKNOWN1
    case 0xC09C81: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C0/C09C73.asm:8 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC09C7F.
    case 0xC09C82: cpu.execute_instruction<0x03>(0x00008D, 2); return true;
    // src/unknown/C0/C09C73.asm:10 STA FIRST_ENTITY
    case 0xC09C83: cpu.execute_instruction<0x8D>(0x000A50, 3); return true;
    // src/unknown/C0/C09C73.asm:10 STA FIRST_ENTITY
    // Overlapping static entry reached from 0xC09C82.
    case 0xC09C84: cpu.execute_instruction<0x50>(0x00000A, 2); return true;
    // src/unknown/C0/C09C73.asm:12 CPX NEXT_ACTIVE_ENTITY
    case 0xC09C86: cpu.execute_instruction<0xEC>(0x000A56, 3); return true;
    // src/unknown/C0/C09C73.asm:13 BNE @UNKNOWN2
    case 0xC09C89: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C09C73.asm:14 STA NEXT_ACTIVE_ENTITY
    case 0xC09C8B: cpu.execute_instruction<0x8D>(0x000A56, 3); return true;
    // src/unknown/C0/C09C73.asm:16 RTS
    case 0xC09C8E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09C8F.asm (unresolved).
bool execute_unresolved_c0_c09c8f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09C8F.asm:3 LDA LAST_ENTITY
    case 0xC09C8F: cpu.execute_instruction<0xAD>(0x000A52, 3); return true;
    // src/unknown/C0/C09C8F.asm:3 LDA LAST_ENTITY
    // Overlapping static entry reached from 0xC09C84.
    case 0xC09C90: cpu.execute_instruction<0x52>(0x00000A, 2); return true;
    // src/unknown/C0/C09C8F.asm:4 STA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09C92: cpu.execute_instruction<0x9D>(0x000A9E, 3); return true;
    // src/unknown/C0/C09C8F.asm:5 STX LAST_ENTITY
    case 0xC09C95: cpu.execute_instruction<0x8E>(0x000A52, 3); return true;
    // src/unknown/C0/C09C8F.asm:6 RTS
    case 0xC09C98: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09C99.asm (unresolved).
bool execute_unresolved_c0_c09c99_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09C99.asm:3 LDA ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC09C99: cpu.execute_instruction<0xBD>(0x000ADA, 3); return true;
    // src/unknown/C0/C09C99.asm:4 BMI @UNKNOWN1
    case 0xC09C9C: cpu.execute_instruction<0x30>(0x000016, 2); return true;
    // src/unknown/C0/C09C99.asm:5 PHX
    case 0xC09C9E: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C09C99.asm:6 LDA LAST_ALLOCATED_SCRIPT
    case 0xC09C9F: cpu.execute_instruction<0xAD>(0x000A54, 3); return true;
    // src/unknown/C0/C09C99.asm:7 PHA
    case 0xC09CA2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C09C99.asm:8 LDA ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC09CA3: cpu.execute_instruction<0xBD>(0x000ADA, 3); return true;
    // src/unknown/C0/C09C99.asm:9 STA LAST_ALLOCATED_SCRIPT
    case 0xC09CA6: cpu.execute_instruction<0x8D>(0x000A54, 3); return true;
    // src/unknown/C0/C09C99.asm:11 TAX
    case 0xC09CA9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09C99.asm:12 LDA ENTITY_SCRIPT_NEXT_SCRIPTS,X
    case 0xC09CAA: cpu.execute_instruction<0xBD>(0x00125A, 3); return true;
    // src/unknown/C0/C09C99.asm:13 BPL @UNKNOWN0
    case 0xC09CAD: cpu.execute_instruction<0x10>(0x0000FA, 2); return true;
    // src/unknown/C0/C09C99.asm:14 PLA
    case 0xC09CAF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C09C99.asm:15 STA ENTITY_SCRIPT_NEXT_SCRIPTS,X
    case 0xC09CB0: cpu.execute_instruction<0x9D>(0x00125A, 3); return true;
    // src/unknown/C0/C09C99.asm:16 PLX
    case 0xC09CB3: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C09C99.asm:18 RTS
    case 0xC09CB4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09CB5.asm (unresolved).
bool execute_unresolved_c0_c09cb5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09CB5.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC09CB5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C09CB5.asm:4 PHD
    case 0xC09CB7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C09CB5.asm:5 PHA
    case 0xC09CB8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C09CB5.asm:6 TDC
    case 0xC09CB9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C0/C09CB5.asm:7 SEC
    case 0xC09CBA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C09CB5.asm:8 SBC #$0002
    case 0xC09CBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000002, 2); else cpu.execute_instruction<0xE9>(0x000002, 3); return true;
    // src/unknown/C0/C09CB5.asm:8 SBC #$0002
    // Overlapping static entry reached from 0xC09CBB.
    case 0xC09CBD: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C0/C09CB5.asm:9 TCD
    case 0xC09CBE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C09CB5.asm:10 PLA
    case 0xC09CBF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C09CB5.asm:11 STX $00
    case 0xC09CC0: cpu.execute_instruction<0x86>(0x000000, 2); return true;
    // src/unknown/C0/C09CB5.asm:12 LDY #$FFFF
    case 0xC09CC2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C09CB5.asm:12 LDY #$FFFF
    // Overlapping static entry reached from 0xC09CC2.
    case 0xC09CC4: cpu.execute_instruction<0xFF>(0x0A50AE, 4); return true;
    // src/unknown/C0/C09CB5.asm:13 LDX FIRST_ENTITY
    case 0xC09CC5: cpu.execute_instruction<0xAE>(0x000A50, 3); return true;
    // src/unknown/C0/C09CB5.asm:15 CPX $00
    case 0xC09CC8: cpu.execute_instruction<0xE4>(0x000000, 2); return true;
    // src/unknown/C0/C09CB5.asm:16 BEQ @UNKNOWN1
    case 0xC09CCA: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C09CB5.asm:17 TXY
    case 0xC09CCC: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C09CB5.asm:18 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09CCD: cpu.execute_instruction<0xBD>(0x000A9E, 3); return true;
    // src/unknown/C0/C09CB5.asm:19 TAX
    case 0xC09CD0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09CB5.asm:20 BRA @UNKNOWN0
    case 0xC09CD1: cpu.execute_instruction<0x80>(0x0000F5, 2); return true;
    // src/unknown/C0/C09CB5.asm:22 LDX $00
    case 0xC09CD3: cpu.execute_instruction<0xA6>(0x000000, 2); return true;
    // src/unknown/C0/C09CB5.asm:23 PLD
    case 0xC09CD5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C09CB5.asm:24 RTS
    case 0xC09CD6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09CD7.asm (unresolved).
bool execute_unresolved_c0_c09cd7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09CD7.asm:3 LDA #$8000
    case 0xC09CD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/unknown/C0/C09CD7.asm:3 LDA #$8000
    // Overlapping static entry reached from 0xC09CD7.
    case 0xC09CD9: cpu.execute_instruction<0x80>(0x0000AE, 2); return true;
    // src/unknown/C0/C09CD7.asm:4 LDX LAST_ENTITY
    case 0xC09CDA: cpu.execute_instruction<0xAE>(0x000A52, 3); return true;
    // src/unknown/C0/C09CD7.asm:5 BRA @UNKNOWN1
    case 0xC09CDD: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/unknown/C0/C09CD7.asm:7 LDY ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09CDF: cpu.execute_instruction<0xBC>(0x000A9E, 3); return true;
    // src/unknown/C0/C09CD7.asm:8 STA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09CE2: cpu.execute_instruction<0x9D>(0x000A9E, 3); return true;
    // src/unknown/C0/C09CD7.asm:9 TYX
    case 0xC09CE5: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C09CD7.asm:11 BPL @UNKNOWN0
    case 0xC09CE6: cpu.execute_instruction<0x10>(0x0000F7, 2); return true;
    // src/unknown/C0/C09CD7.asm:12 LDX #$003A
    case 0xC09CE8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00003A, 2); else cpu.execute_instruction<0xA2>(0x00003A, 3); return true;
    // src/unknown/C0/C09CD7.asm:12 LDX #$003A
    // Overlapping static entry reached from 0xC09CE8.
    case 0xC09CEA: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C0/C09CD7.asm:13 LDY #$FFFF
    case 0xC09CEB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C09CD7.asm:13 LDY #$FFFF
    // Overlapping static entry reached from 0xC09CEB.
    case 0xC09CED: cpu.execute_instruction<0xFF>(0x0A9EBD, 4); return true;
    // src/unknown/C0/C09CD7.asm:15 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09CEE: cpu.execute_instruction<0xBD>(0x000A9E, 3); return true;
    // src/unknown/C0/C09CD7.asm:16 CMP #$8000
    case 0xC09CF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C0/C09CD7.asm:16 CMP #$8000
    // Overlapping static entry reached from 0xC09CF1.
    case 0xC09CF3: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // src/unknown/C0/C09CD7.asm:17 BNE @UNKNOWN3
    case 0xC09CF4: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C09CD7.asm:18 TYA
    case 0xC09CF6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C09CD7.asm:19 STA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09CF7: cpu.execute_instruction<0x9D>(0x000A9E, 3); return true;
    // src/unknown/C0/C09CD7.asm:20 TXY
    case 0xC09CFA: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C09CD7.asm:22 DEX
    case 0xC09CFB: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C09CD7.asm:23 DEX
    case 0xC09CFC: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C09CD7.asm:24 BPL @UNKNOWN2
    case 0xC09CFD: cpu.execute_instruction<0x10>(0x0000EF, 2); return true;
    // src/unknown/C0/C09CD7.asm:25 STY LAST_ENTITY
    case 0xC09CFF: cpu.execute_instruction<0x8C>(0x000A52, 3); return true;
    // src/unknown/C0/C09CD7.asm:26 RTL
    case 0xC09D02: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09D03.asm (unresolved).
bool execute_unresolved_c0_c09d03_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09D03.asm:3 LDY LAST_ALLOCATED_SCRIPT
    case 0xC09D03: cpu.execute_instruction<0xAC>(0x000A54, 3); return true;
    // src/unknown/C0/C09D03.asm:4 BPL @UNKNOWN0
    case 0xC09D06: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // src/unknown/C0/C09D03.asm:5 SEC
    case 0xC09D08: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C09D03.asm:6 RTS
    case 0xC09D09: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C0/C09D03.asm:8 LDA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC09D0A: cpu.execute_instruction<0xB9>(0x00125A, 3); return true;
    // src/unknown/C0/C09D03.asm:9 STA LAST_ALLOCATED_SCRIPT
    case 0xC09D0D: cpu.execute_instruction<0x8D>(0x000A54, 3); return true;
    // src/unknown/C0/C09D03.asm:10 CLC
    case 0xC09D10: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09D03.asm:11 RTS
    case 0xC09D11: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09D12.asm (unresolved).
bool execute_unresolved_c0_c09d12_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09D12.asm:3 JSR UNKNOWN_C09D1F
    case 0xC09D12: cpu.execute_instruction<0x20>(0x009D1F, 3); return true;
    // src/unknown/C0/C09D12.asm:4 LDA LAST_ALLOCATED_SCRIPT
    case 0xC09D15: cpu.execute_instruction<0xAD>(0x000A54, 3); return true;
    // src/unknown/C0/C09D12.asm:5 STA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC09D18: cpu.execute_instruction<0x99>(0x00125A, 3); return true;
    // src/unknown/C0/C09D12.asm:6 STY LAST_ALLOCATED_SCRIPT
    case 0xC09D1B: cpu.execute_instruction<0x8C>(0x000A54, 3); return true;
    // src/unknown/C0/C09D12.asm:7 RTS
    case 0xC09D1E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09D1F.asm (unresolved).
bool execute_unresolved_c0_c09d1f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09D1F.asm:3 PHX
    case 0xC09D1F: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C09D1F.asm:4 JSR UNKNOWN_C09D3E
    case 0xC09D20: cpu.execute_instruction<0x20>(0x009D3E, 3); return true;
    // src/unknown/C0/C09D1F.asm:5 LDA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC09D23: cpu.execute_instruction<0xB9>(0x00125A, 3); return true;
    // src/unknown/C0/C09D1F.asm:6 CPX #$FFFF
    case 0xC09D26: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C0/C09D1F.asm:6 CPX #$FFFF
    // Overlapping static entry reached from 0xC09D26.
    case 0xC09D28: cpu.execute_instruction<0xFF>(0x9D06F0, 4); return true;
    // src/unknown/C0/C09D1F.asm:7 BEQ @UNKNOWN0
    case 0xC09D29: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C0/C09D1F.asm:8 STA ENTITY_SCRIPT_NEXT_SCRIPTS,X
    case 0xC09D2B: cpu.execute_instruction<0x9D>(0x00125A, 3); return true;
    // src/unknown/C0/C09D1F.asm:8 STA ENTITY_SCRIPT_NEXT_SCRIPTS,X
    // Overlapping static entry reached from 0xC09D28.
    case 0xC09D2C: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/unknown/C0/C09D1F.asm:8 STA ENTITY_SCRIPT_NEXT_SCRIPTS,X
    // Overlapping static entry reached from 0xC09D2C.
    case 0xC09D2D: cpu.execute_instruction<0x12>(0x0000FA, 2); return true;
    // src/unknown/C0/C09D1F.asm:9 PLX
    case 0xC09D2E: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C09D1F.asm:10 BRA @UNKNOWN1
    case 0xC09D2F: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C0/C09D1F.asm:12 PLX
    case 0xC09D31: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C09D1F.asm:13 STA ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC09D32: cpu.execute_instruction<0x9D>(0x000ADA, 3); return true;
    // src/unknown/C0/C09D1F.asm:15 CPY ACTIONSCRIPT_CURRENT_SCRIPT
    case 0xC09D35: cpu.execute_instruction<0xCC>(0x000A58, 3); return true;
    // src/unknown/C0/C09D1F.asm:16 BNE @UNKNOWN2
    case 0xC09D38: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C09D1F.asm:17 STA ACTIONSCRIPT_CURRENT_SCRIPT
    case 0xC09D3A: cpu.execute_instruction<0x8D>(0x000A58, 3); return true;
    // src/unknown/C0/C09D1F.asm:19 RTS
    case 0xC09D3D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09D3E.asm (unresolved).
bool execute_unresolved_c0_c09d3e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09D3E.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC09D3E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C09D3E.asm:4 PHD
    case 0xC09D40: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C09D3E.asm:5 PHA
    case 0xC09D41: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C09D3E.asm:6 TDC
    case 0xC09D42: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C0/C09D3E.asm:7 SEC
    case 0xC09D43: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C09D3E.asm:8 SBC #$0002
    case 0xC09D44: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000002, 2); else cpu.execute_instruction<0xE9>(0x000002, 3); return true;
    // src/unknown/C0/C09D3E.asm:8 SBC #$0002
    // Overlapping static entry reached from 0xC09D44.
    case 0xC09D46: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C0/C09D3E.asm:9 TCD
    case 0xC09D47: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C09D3E.asm:10 PLA
    case 0xC09D48: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C09D3E.asm:11 STY $00
    case 0xC09D49: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/unknown/C0/C09D3E.asm:12 LDY ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC09D4B: cpu.execute_instruction<0xBC>(0x000ADA, 3); return true;
    // src/unknown/C0/C09D3E.asm:13 LDX #$FFFF
    case 0xC09D4E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/unknown/C0/C09D3E.asm:13 LDX #$FFFF
    // Overlapping static entry reached from 0xC09D4E.
    case 0xC09D50: cpu.execute_instruction<0xFF>(0xF000C4, 4); return true;
    // src/unknown/C0/C09D3E.asm:15 CPY $00
    case 0xC09D51: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // src/unknown/C0/C09D3E.asm:16 BEQ @UNKNOWN1
    case 0xC09D53: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C09D3E.asm:16 BEQ @UNKNOWN1
    // Overlapping static entry reached from 0xC09D50.
    case 0xC09D54: cpu.execute_instruction<0x07>(0x0000BB, 2); return true;
    // src/unknown/C0/C09D3E.asm:17 TYX
    case 0xC09D55: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C09D3E.asm:18 LDA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC09D56: cpu.execute_instruction<0xB9>(0x00125A, 3); return true;
    // src/unknown/C0/C09D3E.asm:19 TAY
    case 0xC09D59: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C09D3E.asm:20 BRA @UNKNOWN0
    case 0xC09D5A: cpu.execute_instruction<0x80>(0x0000F5, 2); return true;
    // src/unknown/C0/C09D3E.asm:22 LDY $00
    case 0xC09D5C: cpu.execute_instruction<0xA4>(0x000000, 2); return true;
    // src/unknown/C0/C09D3E.asm:23 PLD
    case 0xC09D5E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C09D3E.asm:24 RTS
    case 0xC09D5F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09D60.asm (unresolved).
bool execute_unresolved_c0_c09d60_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09D60.asm:3 STY $94
    case 0xC09D60: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C09D60.asm:4 STZ $00
    case 0xC09D62: cpu.execute_instruction<0x64>(0x000000, 2); return true;
    // src/unknown/C0/C09D60.asm:5 LDA ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC09D64: cpu.execute_instruction<0xBD>(0x000ADA, 3); return true;
    // src/unknown/C0/C09D60.asm:6 CMP $94
    case 0xC09D67: cpu.execute_instruction<0xC5>(0x000094, 2); return true;
    // src/unknown/C0/C09D60.asm:7 BEQ @UNKNOWN1
    case 0xC09D69: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C09D60.asm:9 INC $00
    case 0xC09D6B: cpu.execute_instruction<0xE6>(0x000000, 2); return true;
    // src/unknown/C0/C09D60.asm:10 TAY
    case 0xC09D6D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C09D60.asm:11 LDA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC09D6E: cpu.execute_instruction<0xB9>(0x00125A, 3); return true;
    // src/unknown/C0/C09D60.asm:12 CMP $94
    case 0xC09D71: cpu.execute_instruction<0xC5>(0x000094, 2); return true;
    // src/unknown/C0/C09D60.asm:13 BNE @UNKNOWN0
    case 0xC09D73: cpu.execute_instruction<0xD0>(0x0000F6, 2); return true;
    // src/unknown/C0/C09D60.asm:15 LDA $00
    case 0xC09D75: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C0/C09D60.asm:16 RTS
    case 0xC09D77: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09D78.asm (unresolved).
bool execute_unresolved_c0_c09d78_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09D78.asm:3 LDY ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC09D78: cpu.execute_instruction<0xBC>(0x000ADA, 3); return true;
    // src/unknown/C0/C09D78.asm:4 DEC
    case 0xC09D7B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C09D78.asm:5 BMI @UNKNOWN1
    case 0xC09D7C: cpu.execute_instruction<0x30>(0x000007, 2); return true;
    // src/unknown/C0/C09D78.asm:7 LDA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC09D7E: cpu.execute_instruction<0xB9>(0x00125A, 3); return true;
    // src/unknown/C0/C09D78.asm:8 TAY
    case 0xC09D81: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C09D78.asm:9 DEC
    case 0xC09D82: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C09D78.asm:10 BPL @UNKNOWN0
    case 0xC09D83: cpu.execute_instruction<0x10>(0x0000F9, 2); return true;
    // src/unknown/C0/C09D78.asm:12 RTS
    case 0xC09D85: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09DAE.asm (unresolved).
bool execute_unresolved_c0_c09dae_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09DAE.asm:3 STZ ENTITY_ALLOCATION_MIN_SLOT
    case 0xC09DAE: cpu.execute_instruction<0x9C>(0x000A4C, 3); return true;
    // src/unknown/C0/C09DAE.asm:4 LDA #$003C
    case 0xC09DB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/unknown/C0/C09DAE.asm:4 LDA #$003C
    // Overlapping static entry reached from 0xC09DB1.
    case 0xC09DB3: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C09DAE.asm:5 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC09DB4: cpu.execute_instruction<0x8D>(0x000A4E, 3); return true;
    // src/unknown/C0/C09DAE.asm:7 LDX $88
    case 0xC09DB7: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C09DAE.asm:8 JSR UNKNOWN_C09D99
    case 0xC09DB9: cpu.execute_instruction<0x20>(0x009D99, 3); return true;
    // src/unknown/C0/C09DAE.asm:9 STA $96
    case 0xC09DBC: cpu.execute_instruction<0x85>(0x000096, 2); return true;
    // src/unknown/C0/C09DAE.asm:10 JSR UNKNOWN_C09D99
    case 0xC09DBE: cpu.execute_instruction<0x20>(0x009D99, 3); return true;
    // src/unknown/C0/C09DAE.asm:11 CLC
    case 0xC09DC1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09DAE.asm:12 ADC ENTITY_SCREEN_X_TABLE,X
    case 0xC09DC2: cpu.execute_instruction<0x7D>(0x000B16, 3); return true;
    // src/unknown/C0/C09DAE.asm:13 STA $98
    case 0xC09DC5: cpu.execute_instruction<0x85>(0x000098, 2); return true;
    // src/unknown/C0/C09DAE.asm:14 JSR UNKNOWN_C09D99
    case 0xC09DC7: cpu.execute_instruction<0x20>(0x009D99, 3); return true;
    // src/unknown/C0/C09DAE.asm:15 CLC
    case 0xC09DCA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09DAE.asm:16 ADC ENTITY_SCREEN_Y_TABLE,X
    case 0xC09DCB: cpu.execute_instruction<0x7D>(0x000B52, 3); return true;
    // src/unknown/C0/C09DAE.asm:17 STA $9A
    case 0xC09DCE: cpu.execute_instruction<0x85>(0x00009A, 2); return true;
    // src/unknown/C0/C09DAE.asm:18 JSR UNKNOWN_C09D99
    case 0xC09DD0: cpu.execute_instruction<0x20>(0x009D99, 3); return true;
    // src/unknown/C0/C09DAE.asm:19 CLC
    case 0xC09DD3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09DAE.asm:20 ADC ENTITY_ABS_Z_TABLE,X
    case 0xC09DD4: cpu.execute_instruction<0x7D>(0x000C06, 3); return true;
    // src/unknown/C0/C09DAE.asm:21 STA NEW_ENTITY_POS_Z
    case 0xC09DD7: cpu.execute_instruction<0x8D>(0x000A48, 3); return true;
    // src/unknown/C0/C09DAE.asm:22 JSR UNKNOWN_C09D99
    case 0xC09DDA: cpu.execute_instruction<0x20>(0x009D99, 3); return true;
    // src/unknown/C0/C09DAE.asm:23 STA NEW_ENTITY_VAR0
    case 0xC09DDD: cpu.execute_instruction<0x8D>(0x000A38, 3); return true;
    // src/unknown/C0/C09DAE.asm:24 JSR UNKNOWN_C09D99
    case 0xC09DE0: cpu.execute_instruction<0x20>(0x009D99, 3); return true;
    // src/unknown/C0/C09DAE.asm:25 CLC
    case 0xC09DE3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09DAE.asm:26 ADC ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC09DE4: cpu.execute_instruction<0x7D>(0x000E9A, 3); return true;
    // src/unknown/C0/C09DAE.asm:27 STA NEW_ENTITY_VAR1
    case 0xC09DE7: cpu.execute_instruction<0x8D>(0x000A3A, 3); return true;
    // src/unknown/C0/C09DAE.asm:28 STX NEW_ENTITY_VAR2
    case 0xC09DEA: cpu.execute_instruction<0x8E>(0x000A3C, 3); return true;
    // src/unknown/C0/C09DAE.asm:29 STZ NEW_ENTITY_VAR3
    case 0xC09DED: cpu.execute_instruction<0x9C>(0x000A3E, 3); return true;
    // src/unknown/C0/C09DAE.asm:30 STZ NEW_ENTITY_VAR4
    case 0xC09DF0: cpu.execute_instruction<0x9C>(0x000A40, 3); return true;
    // src/unknown/C0/C09DAE.asm:31 STZ NEW_ENTITY_VAR5
    case 0xC09DF3: cpu.execute_instruction<0x9C>(0x000A42, 3); return true;
    // src/unknown/C0/C09DAE.asm:32 STZ NEW_ENTITY_VAR6
    case 0xC09DF6: cpu.execute_instruction<0x9C>(0x000A44, 3); return true;
    // src/unknown/C0/C09DAE.asm:33 STZ NEW_ENTITY_VAR7
    case 0xC09DF9: cpu.execute_instruction<0x9C>(0x000A46, 3); return true;
    // src/unknown/C0/C09DAE.asm:34 STY $94
    case 0xC09DFC: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C09DAE.asm:35 LDY $9A
    case 0xC09DFE: cpu.execute_instruction<0xA4>(0x00009A, 2); return true;
    // src/unknown/C0/C09DAE.asm:36 LDX $98
    case 0xC09E00: cpu.execute_instruction<0xA6>(0x000098, 2); return true;
    // src/unknown/C0/C09DAE.asm:37 LDA $96
    case 0xC09E02: cpu.execute_instruction<0xA5>(0x000096, 2); return true;
    // src/unknown/C0/C09DAE.asm:38 AND #$7FFF
    case 0xC09E04: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C09DAE.asm:38 AND #$7FFF
    // Overlapping static entry reached from 0xC09E04.
    case 0xC09E06: cpu.execute_instruction<0x7F>(0x93214C, 4); return true;
    // src/unknown/C0/C09DAE.asm:39 JMP INIT_ENTITY
    case 0xC09E07: cpu.execute_instruction<0x4C>(0x009321, 3); return true;
    // src/unknown/C0/C09DAE.asm:40 JSR UNKNOWN_C09D8D
    case 0xC09E0A: cpu.execute_instruction<0x20>(0x009D8D, 3); return true;
    // src/unknown/C0/C09DAE.asm:41 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC09E0D: cpu.execute_instruction<0x8D>(0x000A4C, 3); return true;
    // src/unknown/C0/C09DAE.asm:42 JSR UNKNOWN_C09D8D
    case 0xC09E10: cpu.execute_instruction<0x20>(0x009D8D, 3); return true;
    // src/unknown/C0/C09DAE.asm:43 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC09E13: cpu.execute_instruction<0x8D>(0x000A4E, 3); return true;
    // src/unknown/C0/C09DAE.asm:44 BRA @UNKNOWN0
    case 0xC09E16: cpu.execute_instruction<0x80>(0x00009F, 2); return true;
    // src/unknown/C0/C09DAE.asm:45 JSR UNKNOWN_C09D8D
    case 0xC09E18: cpu.execute_instruction<0x20>(0x009D8D, 3); return true;
    // src/unknown/C0/C09DAE.asm:46 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC09E1B: cpu.execute_instruction<0x8D>(0x000A4C, 3); return true;
    // src/unknown/C0/C09DAE.asm:47 INC
    case 0xC09E1E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C09DAE.asm:48 INC
    case 0xC09E1F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C09DAE.asm:49 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC09E20: cpu.execute_instruction<0x8D>(0x000A4E, 3); return true;
    // src/unknown/C0/C09DAE.asm:50 BRA @UNKNOWN0
    case 0xC09E23: cpu.execute_instruction<0x80>(0x000092, 2); return true;
    // src/unknown/C0/C09DAE.asm:51 JSR UNKNOWN_C09D8D
    case 0xC09E25: cpu.execute_instruction<0x20>(0x009D8D, 3); return true;
    // src/unknown/C0/C09DAE.asm:52 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC09E28: cpu.execute_instruction<0x8D>(0x000A4C, 3); return true;
    // src/unknown/C0/C09DAE.asm:53 TAX
    case 0xC09E2B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09DAE.asm:54 INC
    case 0xC09E2C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C09DAE.asm:55 INC
    case 0xC09E2D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C09DAE.asm:56 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC09E2E: cpu.execute_instruction<0x8D>(0x000A4E, 3); return true;
    // src/unknown/C0/C09DAE.asm:57 STY $94
    case 0xC09E31: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C09DAE.asm:58 JSR UNKNOWN_C09C3B
    case 0xC09E33: cpu.execute_instruction<0x20>(0x009C3B, 3); return true;
    // src/unknown/C0/C09DAE.asm:59 LDY $94
    case 0xC09E36: cpu.execute_instruction<0xA4>(0x000094, 2); return true;
    // src/unknown/C0/C09DAE.asm:60 JMP @UNKNOWN0
    case 0xC09E38: cpu.execute_instruction<0x4C>(0x009DB7, 3); return true;
    // src/unknown/C0/C09DAE.asm:61 STZ ENTITY_ALLOCATION_MIN_SLOT
    case 0xC09E3B: cpu.execute_instruction<0x9C>(0x000A4C, 3); return true;
    // src/unknown/C0/C09DAE.asm:62 LDA #$003C
    case 0xC09E3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/unknown/C0/C09DAE.asm:62 LDA #$003C
    // Overlapping static entry reached from 0xC09E3E.
    case 0xC09E40: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C09DAE.asm:63 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC09E41: cpu.execute_instruction<0x8D>(0x000A4E, 3); return true;
    // src/unknown/C0/C09DAE.asm:64 STZ NEW_ENTITY_VAR1
    case 0xC09E44: cpu.execute_instruction<0x9C>(0x000A3A, 3); return true;
    // src/unknown/C0/C09DAE.asm:65 STZ NEW_ENTITY_VAR3
    case 0xC09E47: cpu.execute_instruction<0x9C>(0x000A3E, 3); return true;
    // src/unknown/C0/C09DAE.asm:66 STZ NEW_ENTITY_VAR4
    case 0xC09E4A: cpu.execute_instruction<0x9C>(0x000A40, 3); return true;
    // src/unknown/C0/C09DAE.asm:67 STZ NEW_ENTITY_VAR5
    case 0xC09E4D: cpu.execute_instruction<0x9C>(0x000A42, 3); return true;
    // src/unknown/C0/C09DAE.asm:68 STZ NEW_ENTITY_VAR6
    case 0xC09E50: cpu.execute_instruction<0x9C>(0x000A44, 3); return true;
    // src/unknown/C0/C09DAE.asm:69 STZ NEW_ENTITY_VAR7
    case 0xC09E53: cpu.execute_instruction<0x9C>(0x000A46, 3); return true;
    // src/unknown/C0/C09DAE.asm:70 STZ NEW_ENTITY_POS_Z
    case 0xC09E56: cpu.execute_instruction<0x9C>(0x000A48, 3); return true;
    // src/unknown/C0/C09DAE.asm:71 JSR UNKNOWN_C09D99
    case 0xC09E59: cpu.execute_instruction<0x20>(0x009D99, 3); return true;
    // src/unknown/C0/C09DAE.asm:72 TAX
    case 0xC09E5C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09DAE.asm:73 JSR UNKNOWN_C09D99
    case 0xC09E5D: cpu.execute_instruction<0x20>(0x009D99, 3); return true;
    // src/unknown/C0/C09DAE.asm:74 STY $94
    case 0xC09E60: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C09DAE.asm:75 STA NEW_ENTITY_VAR0
    case 0xC09E62: cpu.execute_instruction<0x8D>(0x000A38, 3); return true;
    // src/unknown/C0/C09DAE.asm:76 LDA $88
    case 0xC09E65: cpu.execute_instruction<0xA5>(0x000088, 2); return true;
    // src/unknown/C0/C09DAE.asm:77 STA NEW_ENTITY_VAR2
    case 0xC09E67: cpu.execute_instruction<0x8D>(0x000A3C, 3); return true;
    // src/unknown/C0/C09DAE.asm:78 TXA
    case 0xC09E6A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C09DAE.asm:79 AND #$7FFF
    case 0xC09E6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C09DAE.asm:79 AND #$7FFF
    // Overlapping static entry reached from 0xC09E6B.
    case 0xC09E6D: cpu.execute_instruction<0x7F>(0x93214C, 4); return true;
    // src/unknown/C0/C09DAE.asm:80 JMP INIT_ENTITY
    case 0xC09E6E: cpu.execute_instruction<0x4C>(0x009321, 3); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09E71.asm (unresolved).
bool execute_unresolved_c0_c09e71_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09E71.asm:3 JSR UNKNOWN_C09D99
    case 0xC09E71: cpu.execute_instruction<0x20>(0x009D99, 3); return true;
    // src/unknown/C0/C09E71.asm:4 STY $94
    case 0xC09E74: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C09E71.asm:5 JMP INIT_ENTITY_WIPE
    case 0xC09E76: cpu.execute_instruction<0x4C>(0x0092F5, 3); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09E79.asm (unresolved).
bool execute_unresolved_c0_c09e79_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09E79.asm:3 JSR UNKNOWN_C09D8D
    case 0xC09E79: cpu.execute_instruction<0x20>(0x009D8D, 3); return true;
    // src/unknown/C0/C09E79.asm:4 STY $94
    case 0xC09E7C: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C09E79.asm:5 ASL
    case 0xC09E7E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C09E79.asm:6 TAX
    case 0xC09E7F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09E79.asm:7 LDA ENTITY_SCRIPT_VAR_TABLES,X
    case 0xC09E80: cpu.execute_instruction<0xBD>(0x009AF9, 3); return true;
    // src/unknown/C0/C09E79.asm:8 CLC
    case 0xC09E83: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09E79.asm:9 ADC $88
    case 0xC09E84: cpu.execute_instruction<0x65>(0x000088, 2); return true;
    // src/unknown/C0/C09E79.asm:10 TAX
    case 0xC09E86: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09E79.asm:11 LDA __BSS_START__,X
    case 0xC09E87: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C0/C09E79.asm:12 TAX
    case 0xC09E8A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09E79.asm:13 JMP UNKNOWN_C09C3B
    case 0xC09E8B: cpu.execute_instruction<0x4C>(0x009C3B, 3); return true;
    // src/unknown/C0/C09E79.asm:14 JSR UNKNOWN_C09D8D
    case 0xC09E8E: cpu.execute_instruction<0x20>(0x009D8D, 3); return true;
    // src/unknown/C0/C09E79.asm:15 STY $94
    case 0xC09E91: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C09E79.asm:16 TAX
    case 0xC09E93: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09E79.asm:17 JSR UNKNOWN_C09C3B
    case 0xC09E94: cpu.execute_instruction<0x20>(0x009C3B, 3); return true;
    // src/unknown/C0/C09E79.asm:18 RTL
    case 0xC09E97: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09E98.asm (unresolved).
bool execute_unresolved_c0_c09e98_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09E98.asm:3 LDX FIRST_ENTITY
    case 0xC09E98: cpu.execute_instruction<0xAE>(0x000A50, 3); return true;
    // src/unknown/C0/C09E98.asm:5 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09E9B: cpu.execute_instruction<0xBD>(0x000A9E, 3); return true;
    // src/unknown/C0/C09E98.asm:6 STA $96
    case 0xC09E9E: cpu.execute_instruction<0x85>(0x000096, 2); return true;
    // src/unknown/C0/C09E98.asm:7 CPX $88
    case 0xC09EA0: cpu.execute_instruction<0xE4>(0x000088, 2); return true;
    // src/unknown/C0/C09E98.asm:8 BEQ @UNKNOWN1
    case 0xC09EA2: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C09E98.asm:9 JSR UNKNOWN_C09C3B
    case 0xC09EA4: cpu.execute_instruction<0x20>(0x009C3B, 3); return true;
    // src/unknown/C0/C09E98.asm:11 LDX $96
    case 0xC09EA7: cpu.execute_instruction<0xA6>(0x000096, 2); return true;
    // src/unknown/C0/C09E98.asm:12 BPL @UNKNOWN0
    case 0xC09EA9: cpu.execute_instruction<0x10>(0x0000F0, 2); return true;
    // src/unknown/C0/C09E98.asm:13 RTL
    case 0xC09EAB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09EAC.asm (unresolved).
bool execute_unresolved_c0_c09eac_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09EAC.asm:3 JSR UNKNOWN_C09D99
    case 0xC09EAC: cpu.execute_instruction<0x20>(0x009D99, 3); return true;
    // src/unknown/C0/C09EAC.asm:4 STY $94
    case 0xC09EAF: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C09EAC.asm:5 LDX FIRST_ENTITY
    case 0xC09EB1: cpu.execute_instruction<0xAE>(0x000A50, 3); return true;
    // src/unknown/C0/C09EAC.asm:7 LDY ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09EB4: cpu.execute_instruction<0xBC>(0x000A9E, 3); return true;
    // src/unknown/C0/C09EAC.asm:8 STY $96
    case 0xC09EB7: cpu.execute_instruction<0x84>(0x000096, 2); return true;
    // src/unknown/C0/C09EAC.asm:9 CMP ENTITY_SCRIPT_TABLE,X
    case 0xC09EB9: cpu.execute_instruction<0xDD>(0x000A62, 3); return true;
    // src/unknown/C0/C09EAC.asm:10 BNE @UNKNOWN1
    case 0xC09EBC: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C0/C09EAC.asm:11 CPX $88
    case 0xC09EBE: cpu.execute_instruction<0xE4>(0x000088, 2); return true;
    // src/unknown/C0/C09EAC.asm:12 BEQ @UNKNOWN1
    case 0xC09EC0: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C09EAC.asm:13 STA $98
    case 0xC09EC2: cpu.execute_instruction<0x85>(0x000098, 2); return true;
    // src/unknown/C0/C09EAC.asm:14 JSR UNKNOWN_C09C3B
    case 0xC09EC4: cpu.execute_instruction<0x20>(0x009C3B, 3); return true;
    // src/unknown/C0/C09EAC.asm:15 LDA $98
    case 0xC09EC7: cpu.execute_instruction<0xA5>(0x000098, 2); return true;
    // src/unknown/C0/C09EAC.asm:17 LDX $96
    case 0xC09EC9: cpu.execute_instruction<0xA6>(0x000096, 2); return true;
    // src/unknown/C0/C09EAC.asm:18 BPL @UNKNOWN0
    case 0xC09ECB: cpu.execute_instruction<0x10>(0x0000E7, 2); return true;
    // src/unknown/C0/C09EAC.asm:19 RTL
    case 0xC09ECD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09ECE.asm (unresolved).
bool execute_unresolved_c0_c09ece_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09ECE.asm:3 JSR UNKNOWN_C09D8D
    case 0xC09ECE: cpu.execute_instruction<0x20>(0x009D8D, 3); return true;
    // src/unknown/C0/C09ECE.asm:4 TAX
    case 0xC09ED1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09ECE.asm:5 JSR UNKNOWN_C09D99
    case 0xC09ED2: cpu.execute_instruction<0x20>(0x009D99, 3); return true;
    // src/unknown/C0/C09ECE.asm:6 PHA
    case 0xC09ED5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C09ECE.asm:7 JSR UNKNOWN_C09D8D
    case 0xC09ED6: cpu.execute_instruction<0x20>(0x009D8D, 3); return true;
    // src/unknown/C0/C09ECE.asm:8 STY $94
    case 0xC09ED9: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C09ECE.asm:9 TAY
    case 0xC09EDB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C09ECE.asm:10 PLA
    case 0xC09EDC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C09ECE.asm:11 JMP INIT_ENTITY_UNKNOWN2
    case 0xC09EDD: cpu.execute_instruction<0x4C>(0x009403, 3); return true;
    // src/unknown/C0/C09ECE.asm:12 LDX CURRENT_ENTITY_OFFSET
    case 0xC09EE0: cpu.execute_instruction<0xAE>(0x001A44, 3); return true;
    // src/unknown/C0/C09ECE.asm:13 BRA @UNKNOWN0
    case 0xC09EE3: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C09ECE.asm:14 LDX $88
    case 0xC09EE5: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C09ECE.asm:15 BRA @UNKNOWN0
    case 0xC09EE7: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C0/C09ECE.asm:16 ASL
    case 0xC09EE9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C09ECE.asm:17 TAX
    case 0xC09EEA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09ECE.asm:19 LDY #$0000
    case 0xC09EEB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C09ECE.asm:19 LDY #$0000
    // Overlapping static entry reached from 0xC09EEB.
    case 0xC09EED: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C0/C09ECE.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC09EEE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C09ECE.asm:21 LDA ENTITY_SCREEN_X_TABLE+1,X
    case 0xC09EF0: cpu.execute_instruction<0xBD>(0x000B17, 3); return true;
    // src/unknown/C0/C09ECE.asm:22 BNE @UNKNOWN1
    case 0xC09EF3: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C09ECE.asm:23 LDA ENTITY_SCREEN_Y_TABLE+1,X
    case 0xC09EF5: cpu.execute_instruction<0xBD>(0x000B53, 3); return true;
    // src/unknown/C0/C09ECE.asm:24 BNE @UNKNOWN1
    case 0xC09EF8: cpu.execute_instruction<0xD0>(0x000001, 2); return true;
    // src/unknown/C0/C09ECE.asm:25 DEY
    case 0xC09EFA: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C09ECE.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC09EFB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C09ECE.asm:28 TYA
    case 0xC09EFD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C09ECE.asm:29 RTL
    case 0xC09EFE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09EFF.asm (unresolved).
bool execute_unresolved_c0_c09eff_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09EFF.asm:3 LDX CURRENT_ENTITY_OFFSET
    case 0xC09EFF: cpu.execute_instruction<0xAE>(0x001A44, 3); return true;
    // src/unknown/C0/C09EFF.asm:4 BRA UNKNOWN_C09EFF_UNKNOWN0
    case 0xC09F02: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C09EFF.asm:5 LDX $88
    case 0xC09F04: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C09EFF.asm:6 BRA UNKNOWN_C09EFF_UNKNOWN0
    case 0xC09F06: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/unknown/C0/C09EFF.asm:8 ASL
    case 0xC09F08: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C09EFF.asm:9 TAX
    case 0xC09F09: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09EFF.asm:11 LDY #$0000
    case 0xC09F0A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C09EFF.asm:11 LDY #$0000
    // Overlapping static entry reached from 0xC09F0A.
    case 0xC09F0C: cpu.execute_instruction<0x00>(0x0000BD, 2); return true;
    // src/unknown/C0/C09EFF.asm:12 LDA ENTITY_ABS_X_FRACTION_TABLE,X
    case 0xC09F0D: cpu.execute_instruction<0xBD>(0x000C42, 3); return true;
    // src/unknown/C0/C09EFF.asm:13 CLC
    case 0xC09F10: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09EFF.asm:14 ADC ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC09F11: cpu.execute_instruction<0x7D>(0x000DAA, 3); return true;
    // src/unknown/C0/C09EFF.asm:15 LDA ENTITY_ABS_X_TABLE,X
    case 0xC09F14: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C09EFF.asm:16 ADC ENTITY_DELTA_X_TABLE,X
    case 0xC09F17: cpu.execute_instruction<0x7D>(0x000CF6, 3); return true;
    // src/unknown/C0/C09EFF.asm:17 STA ENTITY_MOVEMENT_PROSPECTIVE_X
    case 0xC09F1A: cpu.execute_instruction<0x8D>(0x002848, 3); return true;
    // src/unknown/C0/C09EFF.asm:18 CMP ENTITY_ABS_X_TABLE,X
    case 0xC09F1D: cpu.execute_instruction<0xDD>(0x000B8E, 3); return true;
    // src/unknown/C0/C09EFF.asm:19 BEQ UNKNOWN_C09EFF_UNKNOWN1
    case 0xC09F20: cpu.execute_instruction<0xF0>(0x000001, 2); return true;
    // src/unknown/C0/C09EFF.asm:20 INY
    case 0xC09F22: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C09EFF.asm:22 LDA ENTITY_ABS_Y_FRACTION_TABLE,X
    case 0xC09F23: cpu.execute_instruction<0xBD>(0x000C7E, 3); return true;
    // src/unknown/C0/C09EFF.asm:23 CLC
    case 0xC09F26: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09EFF.asm:24 ADC ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC09F27: cpu.execute_instruction<0x7D>(0x000DE6, 3); return true;
    // src/unknown/C0/C09EFF.asm:24 ADC ENTITY_DELTA_Y_FRACTION_TABLE,X
    // Overlapping static entry reached from 0xC09F69.
    case 0xC09F28: cpu.execute_instruction<0xE6>(0x00000D, 2); return true;
    // src/unknown/C0/C09EFF.asm:25 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC09F2A: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C09EFF.asm:26 ADC ENTITY_DELTA_Y_TABLE,X
    case 0xC09F2D: cpu.execute_instruction<0x7D>(0x000D32, 3); return true;
    // src/unknown/C0/C09EFF.asm:27 STA ENTITY_MOVEMENT_PROSPECTIVE_Y
    case 0xC09F30: cpu.execute_instruction<0x8D>(0x00284A, 3); return true;
    // src/unknown/C0/C09EFF.asm:28 CMP ENTITY_ABS_Y_TABLE,X
    case 0xC09F33: cpu.execute_instruction<0xDD>(0x000BCA, 3); return true;
    // src/unknown/C0/C09EFF.asm:29 BEQ UNKNOWN_C09EFF_UNKNOWN2
    case 0xC09F36: cpu.execute_instruction<0xF0>(0x000001, 2); return true;
    // src/unknown/C0/C09EFF.asm:30 INY
    case 0xC09F38: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C09EFF.asm:32 TYA
    case 0xC09F39: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C09EFF.asm:33 RTL
    case 0xC09F3A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09F3B.asm (unresolved).
bool execute_unresolved_c0_c09f3b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09F3B.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC09F3B: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C09F3B.asm:4 LDA #$FFFF
    case 0xC09F3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C09F3B.asm:4 LDA #$FFFF
    // Overlapping static entry reached from 0xC09F3D.
    case 0xC09F3F: cpu.execute_instruction<0xFF>(0x1A448D, 4); return true;
    // src/unknown/C0/C09F3B.asm:5 STA CURRENT_ENTITY_OFFSET
    case 0xC09F40: cpu.execute_instruction<0x8D>(0x001A44, 3); return true;
    // src/unknown/C0/C09F3B.asm:7 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC09F43: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C09F3B.asm:8 PHA
    case 0xC09F45: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C09F3B.asm:9 LDX #$0000
    case 0xC09F46: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C09F3B.asm:9 LDX #$0000
    // Overlapping static entry reached from 0xC09F46.
    case 0xC09F48: cpu.execute_instruction<0x00>(0x0000BD, 2); return true;
    // src/unknown/C0/C09F3B.asm:11 LDA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC09F49: cpu.execute_instruction<0xBD>(0x0010B6, 3); return true;
    // src/unknown/C0/C09F3B.asm:12 STA ENTITY_CALLBACK_FLAGS_BACKUP,X
    case 0xC09F4C: cpu.execute_instruction<0x9D>(0x00284C, 3); return true;
    // src/unknown/C0/C09F3B.asm:13 INX
    case 0xC09F4F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C09F3B.asm:14 INX
    case 0xC09F50: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C09F3B.asm:15 CPX #$003C
    case 0xC09F51: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00003C, 2); else cpu.execute_instruction<0xE0>(0x00003C, 3); return true;
    // src/unknown/C0/C09F3B.asm:15 CPX #$003C
    // Overlapping static entry reached from 0xC09F51.
    case 0xC09F53: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C09F3B.asm:16 BNE @UNKNOWN0
    case 0xC09F54: cpu.execute_instruction<0xD0>(0x0000F3, 2); return true;
    // src/unknown/C0/C09F3B.asm:17 PLA
    case 0xC09F56: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C09F3B.asm:18 LDX FIRST_ENTITY
    case 0xC09F57: cpu.execute_instruction<0xAE>(0x000A50, 3); return true;
    // src/unknown/C0/C09F3B.asm:19 BMI @UNKNOWN3
    case 0xC09F5A: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/unknown/C0/C09F3B.asm:21 CPX CURRENT_ENTITY_OFFSET
    case 0xC09F5C: cpu.execute_instruction<0xEC>(0x001A44, 3); return true;
    // src/unknown/C0/C09F3B.asm:22 BEQ @UNKNOWN2
    case 0xC09F5F: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C0/C09F3B.asm:23 LDA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC09F61: cpu.execute_instruction<0xBD>(0x0010B6, 3); return true;
    // src/unknown/C0/C09F3B.asm:24 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC09F64: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C0/C09F3B.asm:24 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC09F64.
    case 0xC09F66: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00B69D, 3); return true;
    // src/unknown/C0/C09F3B.asm:25 STA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC09F67: cpu.execute_instruction<0x9D>(0x0010B6, 3); return true;
    // src/unknown/C0/C09F3B.asm:25 STA ENTITY_TICK_CALLBACK_HIGH,X
    // Overlapping static entry reached from 0xC09F66.
    case 0xC09F68: cpu.execute_instruction<0xB6>(0x000010, 2); return true;
    // src/unknown/C0/C09F3B.asm:25 STA ENTITY_TICK_CALLBACK_HIGH,X
    // Overlapping static entry reached from 0xC09F66.
    case 0xC09F69: cpu.execute_instruction<0x10>(0x0000BD, 2); return true;
    // src/unknown/C0/C09F3B.asm:27 LDA ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC09F6A: cpu.execute_instruction<0xBD>(0x000A9E, 3); return true;
    // src/unknown/C0/C09F3B.asm:27 LDA ENTITY_NEXT_ENTITY_TABLE,X
    // Overlapping static entry reached from 0xC09F69.
    case 0xC09F6B: cpu.execute_instruction<0x9E>(0x00AA0A, 3); return true;
    // src/unknown/C0/C09F3B.asm:28 TAX
    case 0xC09F6D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C09F3B.asm:29 BPL @UNKNOWN1
    case 0xC09F6E: cpu.execute_instruction<0x10>(0x0000EC, 2); return true;
    // src/unknown/C0/C09F3B.asm:31 RTL
    case 0xC09F70: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09F71.asm (unresolved).
bool execute_unresolved_c0_c09f71_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09F71.asm:3 LDX #$0000
    case 0xC09F71: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C09F71.asm:3 LDX #$0000
    // Overlapping static entry reached from 0xC09F71.
    case 0xC09F73: cpu.execute_instruction<0x00>(0x0000BD, 2); return true;
    // src/unknown/C0/C09F71.asm:5 LDA ENTITY_CALLBACK_FLAGS_BACKUP,X
    case 0xC09F74: cpu.execute_instruction<0xBD>(0x00284C, 3); return true;
    // src/unknown/C0/C09F71.asm:6 STA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC09F77: cpu.execute_instruction<0x9D>(0x0010B6, 3); return true;
    // src/unknown/C0/C09F71.asm:7 INX
    case 0xC09F7A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C09F71.asm:8 INX
    case 0xC09F7B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C0/C09F71.asm:9 CPX #30*2
    case 0xC09F7C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00003C, 2); else cpu.execute_instruction<0xE0>(0x00003C, 3); return true;
    // src/unknown/C0/C09F71.asm:9 CPX #30*2
    // Overlapping static entry reached from 0xC09F7C.
    case 0xC09F7E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C09F71.asm:10 BNE @UNKNOWN0
    case 0xC09F7F: cpu.execute_instruction<0xD0>(0x0000F3, 2); return true;
    // src/unknown/C0/C09F71.asm:11 RTL
    case 0xC09F81: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09FA8.asm (unresolved).
bool execute_unresolved_c0_c09fa8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09FA8.asm:3 JSL RAND
    case 0xC09FA8: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/unknown/C0/C09FA8.asm:4 XBA
    case 0xC09FAC: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C09FA8.asm:5 RTL
    case 0xC09FAD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09FAE.asm (unresolved).
bool execute_unresolved_c0_c09fae_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09FAE.asm:3 LDX $88
    case 0xC09FC8: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C09FAE.asm:5 LDA ENTITY_ABS_X_FRACTION_TABLE,X
    case 0xC09FCA: cpu.execute_instruction<0xBD>(0x000C42, 3); return true;
    // src/unknown/C0/C09FAE.asm:6 CLC
    case 0xC09FCD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09FAE.asm:7 ADC ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC09FCE: cpu.execute_instruction<0x7D>(0x000DAA, 3); return true;
    // src/unknown/C0/C09FAE.asm:8 STA ENTITY_ABS_X_FRACTION_TABLE,X
    case 0xC09FD1: cpu.execute_instruction<0x9D>(0x000C42, 3); return true;
    // src/unknown/C0/C09FAE.asm:9 LDA ENTITY_ABS_X_TABLE,X
    case 0xC09FD4: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C09FAE.asm:10 ADC ENTITY_DELTA_X_TABLE,X
    case 0xC09FD7: cpu.execute_instruction<0x7D>(0x000CF6, 3); return true;
    // src/unknown/C0/C09FAE.asm:11 STA ENTITY_ABS_X_TABLE,X
    case 0xC09FDA: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/unknown/C0/C09FAE.asm:12 LDA ENTITY_ABS_Y_FRACTION_TABLE,X
    case 0xC09FDD: cpu.execute_instruction<0xBD>(0x000C7E, 3); return true;
    // src/unknown/C0/C09FAE.asm:13 CLC
    case 0xC09FE0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09FAE.asm:14 ADC ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC09FE1: cpu.execute_instruction<0x7D>(0x000DE6, 3); return true;
    // src/unknown/C0/C09FAE.asm:15 STA ENTITY_ABS_Y_FRACTION_TABLE,X
    case 0xC09FE4: cpu.execute_instruction<0x9D>(0x000C7E, 3); return true;
    // src/unknown/C0/C09FAE.asm:16 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC09FE7: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C09FAE.asm:17 ADC ENTITY_DELTA_Y_TABLE,X
    case 0xC09FEA: cpu.execute_instruction<0x7D>(0x000D32, 3); return true;
    // src/unknown/C0/C09FAE.asm:18 STA ENTITY_ABS_Y_TABLE,X
    case 0xC09FED: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/unknown/C0/C09FAE.asm:20 RTS
    case 0xC09FF0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C09FF1.asm (unresolved).
bool execute_unresolved_c0_c09ff1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C09FF1.asm:3 JSR UNKNOWN_C09FAE_ENTRY2
    case 0xC09FF1: cpu.execute_instruction<0x20>(0x009FC8, 3); return true;
    // src/unknown/C0/C09FF1.asm:4 LDA ENTITY_ABS_Z_FRACTION_TABLE,X
    case 0xC09FF4: cpu.execute_instruction<0xBD>(0x000CBA, 3); return true;
    // src/unknown/C0/C09FF1.asm:5 CLC
    case 0xC09FF7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C09FF1.asm:6 ADC ENTITY_DELTA_Z_FRACTION_TABLE,X
    case 0xC09FF8: cpu.execute_instruction<0x7D>(0x000E22, 3); return true;
    // src/unknown/C0/C09FF1.asm:7 STA ENTITY_ABS_Z_FRACTION_TABLE,X
    case 0xC09FFB: cpu.execute_instruction<0x9D>(0x000CBA, 3); return true;
    // src/unknown/C0/C09FF1.asm:8 LDA ENTITY_ABS_Z_TABLE,X
    case 0xC09FFE: cpu.execute_instruction<0xBD>(0x000C06, 3); return true;
    // src/unknown/C0/C09FF1.asm:9 ADC ENTITY_DELTA_Z_TABLE,X
    case 0xC0A001: cpu.execute_instruction<0x7D>(0x000D6E, 3); return true;
    // src/unknown/C0/C09FF1.asm:10 STA ENTITY_ABS_Z_TABLE,X
    case 0xC0A004: cpu.execute_instruction<0x9D>(0x000C06, 3); return true;
    // src/unknown/C0/C09FF1.asm:11 JSL UNKNOWN_C0C7DB
    case 0xC0A007: cpu.execute_instruction<0x22>(0xC0C7DB, 4); return true;
    // src/unknown/C0/C09FF1.asm:12 RTS
    case 0xC0A00B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A00C.asm (unresolved).
bool execute_unresolved_c0_c0a00c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A00C.asm:3 JSR UNKNOWN_C09FAE_ENTRY2
    case 0xC0A00C: cpu.execute_instruction<0x20>(0x009FC8, 3); return true;
    // src/unknown/C0/C0A00C.asm:4 LDA ENTITY_ABS_Z_FRACTION_TABLE,X
    case 0xC0A00F: cpu.execute_instruction<0xBD>(0x000CBA, 3); return true;
    // src/unknown/C0/C0A00C.asm:5 CLC
    case 0xC0A012: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A00C.asm:6 ADC ENTITY_DELTA_Z_FRACTION_TABLE,X
    case 0xC0A013: cpu.execute_instruction<0x7D>(0x000E22, 3); return true;
    // src/unknown/C0/C0A00C.asm:7 STA ENTITY_ABS_Z_FRACTION_TABLE,X
    case 0xC0A016: cpu.execute_instruction<0x9D>(0x000CBA, 3); return true;
    // src/unknown/C0/C0A00C.asm:8 LDA ENTITY_ABS_Z_TABLE,X
    case 0xC0A019: cpu.execute_instruction<0xBD>(0x000C06, 3); return true;
    // src/unknown/C0/C0A00C.asm:9 ADC ENTITY_DELTA_Z_TABLE,X
    case 0xC0A01C: cpu.execute_instruction<0x7D>(0x000D6E, 3); return true;
    // src/unknown/C0/C0A00C.asm:10 STA ENTITY_ABS_Z_TABLE,X
    case 0xC0A01F: cpu.execute_instruction<0x9D>(0x000C06, 3); return true;
    // src/unknown/C0/C0A00C.asm:11 RTS
    case 0xC0A022: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A023.asm (unresolved).
bool execute_unresolved_c0_c0a023_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A023.asm:3 LDX $88
    case 0xC0A023: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A023.asm:4 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0A025: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0A023.asm:5 SEC
    case 0xC0A028: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A023.asm:6 SBC BG1_X_POS
    case 0xC0A029: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C0/C0A023.asm:7 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC0A02C: cpu.execute_instruction<0x9D>(0x000B16, 3); return true;
    // src/unknown/C0/C0A023.asm:8 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0A02F: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0A023.asm:9 SEC
    case 0xC0A032: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A023.asm:10 SBC BG1_Y_POS
    case 0xC0A033: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/unknown/C0/C0A023.asm:11 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0A036: cpu.execute_instruction<0x9D>(0x000B52, 3); return true;
    // src/unknown/C0/C0A023.asm:13 RTS
    case 0xC0A039: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A03A.asm (unresolved).
bool execute_unresolved_c0_c0a03a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A03A.asm:3 LDX $88
    case 0xC0A03A: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A03A.asm:4 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0A03C: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0A03A.asm:5 SEC
    case 0xC0A03F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A03A.asm:6 SBC BG1_X_POS
    case 0xC0A040: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C0/C0A03A.asm:7 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC0A043: cpu.execute_instruction<0x9D>(0x000B16, 3); return true;
    // src/unknown/C0/C0A03A.asm:8 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0A046: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0A03A.asm:9 SEC
    case 0xC0A049: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A03A.asm:10 SBC BG1_Y_POS
    case 0xC0A04A: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/unknown/C0/C0A03A.asm:11 SEC
    case 0xC0A04D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A03A.asm:12 SBC ENTITY_ABS_Z_TABLE,X
    case 0xC0A04E: cpu.execute_instruction<0xFD>(0x000C06, 3); return true;
    // src/unknown/C0/C0A03A.asm:13 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0A051: cpu.execute_instruction<0x9D>(0x000B52, 3); return true;
    // src/unknown/C0/C0A03A.asm:14 RTS
    case 0xC0A054: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A055.asm (unresolved).
bool execute_unresolved_c0_c0a055_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A055.asm:3 LDX $88
    case 0xC0A055: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A055.asm:4 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0A057: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0A055.asm:5 SEC
    case 0xC0A05A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A055.asm:6 SBC BG3_X_POS
    case 0xC0A05B: cpu.execute_instruction<0xED>(0x000039, 3); return true;
    // src/unknown/C0/C0A055.asm:7 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC0A05E: cpu.execute_instruction<0x9D>(0x000B16, 3); return true;
    // src/unknown/C0/C0A055.asm:8 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0A061: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0A055.asm:9 SEC
    case 0xC0A064: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A055.asm:10 SBC BG3_Y_POS
    case 0xC0A065: cpu.execute_instruction<0xED>(0x00003B, 3); return true;
    // src/unknown/C0/C0A055.asm:11 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0A068: cpu.execute_instruction<0x9D>(0x000B52, 3); return true;
    // src/unknown/C0/C0A055.asm:12 RTS
    case 0xC0A06B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A06C.asm (unresolved).
bool execute_unresolved_c0_c0a06c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A06C.asm:3 LDX $88
    case 0xC0A06C: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A06C.asm:4 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0A06E: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0A06C.asm:5 SEC
    case 0xC0A071: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A06C.asm:6 SBC BG3_X_POS
    case 0xC0A072: cpu.execute_instruction<0xED>(0x000039, 3); return true;
    // src/unknown/C0/C0A06C.asm:7 STA ENTITY_ABS_X_TABLE,X
    case 0xC0A075: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/unknown/C0/C0A06C.asm:8 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC0A078: cpu.execute_instruction<0x9D>(0x000B16, 3); return true;
    // src/unknown/C0/C0A06C.asm:9 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0A07B: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0A06C.asm:10 SEC
    case 0xC0A07E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A06C.asm:11 SBC BG3_Y_POS
    case 0xC0A07F: cpu.execute_instruction<0xED>(0x00003B, 3); return true;
    // src/unknown/C0/C0A06C.asm:12 STA ENTITY_ABS_Y_TABLE,X
    case 0xC0A082: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/unknown/C0/C0A06C.asm:13 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0A085: cpu.execute_instruction<0x9D>(0x000B52, 3); return true;
    // src/unknown/C0/C0A06C.asm:14 RTL
    case 0xC0A088: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A089.asm (unresolved).
bool execute_unresolved_c0_c0a089_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A089.asm:3 LDX $88
    case 0xC0A089: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A089.asm:4 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0A08B: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0A089.asm:5 CLC
    case 0xC0A08E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A089.asm:6 ADC BG3_X_POS
    case 0xC0A08F: cpu.execute_instruction<0x6D>(0x000039, 3); return true;
    // src/unknown/C0/C0A089.asm:7 STA ENTITY_ABS_X_TABLE,X
    case 0xC0A092: cpu.execute_instruction<0x9D>(0x000B8E, 3); return true;
    // src/unknown/C0/C0A089.asm:8 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0A095: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0A089.asm:9 CLC
    case 0xC0A098: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A089.asm:10 ADC BG3_Y_POS
    case 0xC0A099: cpu.execute_instruction<0x6D>(0x00003B, 3); return true;
    // src/unknown/C0/C0A089.asm:11 STA ENTITY_ABS_Y_TABLE,X
    case 0xC0A09C: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/unknown/C0/C0A089.asm:12 RTL
    case 0xC0A09F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A0A0.asm (unresolved).
bool execute_unresolved_c0_c0a0a0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A0A0.asm:3 LDX $88
    case 0xC0A0A0: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A0A0.asm:4 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0A0A2: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0A0A0.asm:5 SEC
    case 0xC0A0A5: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A0A0.asm:6 SBC BG3_X_POS
    case 0xC0A0A6: cpu.execute_instruction<0xED>(0x000039, 3); return true;
    // src/unknown/C0/C0A0A0.asm:7 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC0A0A9: cpu.execute_instruction<0x9D>(0x000B16, 3); return true;
    // src/unknown/C0/C0A0A0.asm:8 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0A0AC: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0A0A0.asm:9 SEC
    case 0xC0A0AF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A0A0.asm:10 SBC BG3_Y_POS
    case 0xC0A0B0: cpu.execute_instruction<0xED>(0x00003B, 3); return true;
    // src/unknown/C0/C0A0A0.asm:11 SEC
    case 0xC0A0B3: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A0A0.asm:12 SBC ENTITY_ABS_Z_TABLE,X
    case 0xC0A0B4: cpu.execute_instruction<0xFD>(0x000C06, 3); return true;
    // src/unknown/C0/C0A0A0.asm:13 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0A0B7: cpu.execute_instruction<0x9D>(0x000B52, 3); return true;
    // src/unknown/C0/C0A0A0.asm:14 RTS
    case 0xC0A0BA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A0BB.asm (unresolved).
bool execute_unresolved_c0_c0a0bb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A0BB.asm:3 LDX $88
    case 0xC0A0BB: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A0BB.asm:4 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0A0BD: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0A0BB.asm:5 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC0A0C0: cpu.execute_instruction<0x9D>(0x000B16, 3); return true;
    // src/unknown/C0/C0A0BB.asm:6 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0A0C3: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0A0BB.asm:7 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0A0C6: cpu.execute_instruction<0x9D>(0x000B52, 3); return true;
    // src/unknown/C0/C0A0BB.asm:8 RTS
    case 0xC0A0C9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A0CA.asm (unresolved).
bool execute_unresolved_c0_c0a0ca_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A0CA.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC0A0CA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0A0CA.asm:4 PHD
    case 0xC0A0CC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0A0CA.asm:5 PHA
    case 0xC0A0CD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A0CA.asm:6 TDC
    case 0xC0A0CE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C0/C0A0CA.asm:7 SEC
    case 0xC0A0CF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A0CA.asm:8 SBC #$00A0
    case 0xC0A0D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000A0, 2); else cpu.execute_instruction<0xE9>(0x0000A0, 3); return true;
    // src/unknown/C0/C0A0CA.asm:8 SBC #$00A0
    // Overlapping static entry reached from 0xC0A0D0.
    case 0xC0A0D2: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C0A0CA.asm:9 AND #$FF00
    case 0xC0A0D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C0A0CA.asm:9 AND #$FF00
    // Overlapping static entry reached from 0xC0A0D3.
    case 0xC0A0D5: cpu.execute_instruction<0xFF>(0x30685B, 4); return true;
    // src/unknown/C0/C0A0CA.asm:10 TCD
    case 0xC0A0D6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0A0CA.asm:11 PLA
    case 0xC0A0D7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A0CA.asm:13 BMI @UNKNOWN0
    case 0xC0A0D8: cpu.execute_instruction<0x30>(0x0000FE, 2); return true;
    // src/unknown/C0/C0A0CA.asm:13 BMI @UNKNOWN0
    // Overlapping static entry reached from 0xC0A0D5.
    case 0xC0A0D9: cpu.execute_instruction<0xFE>(0x00AA0A, 3); return true;
    // src/unknown/C0/C0A0CA.asm:14 ASL
    case 0xC0A0DA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A0CA.asm:15 TAX
    case 0xC0A0DB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A0CA.asm:16 STX $88
    case 0xC0A0DC: cpu.execute_instruction<0x86>(0x000088, 2); return true;
    // src/unknown/C0/C0A0CA.asm:17 JSR UNKNOWN_C0A0E3
    case 0xC0A0DE: cpu.execute_instruction<0x20>(0x00A0E3, 3); return true;
    // src/unknown/C0/C0A0CA.asm:18 PLD
    case 0xC0A0E1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0A0CA.asm:19 RTS
    case 0xC0A0E2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A0E3.asm (unresolved).
bool execute_unresolved_c0_c0a0e3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A0E3.asm:3 LDA ENTITY_SPRITEMAP_POINTER_HIGH,X
    case 0xC0A0E3: cpu.execute_instruction<0xBD>(0x00116A, 3); return true;
    // src/unknown/C0/C0A0E3.asm:4 BMI @UNKNOWN0
    case 0xC0A0E6: cpu.execute_instruction<0x30>(0x000011, 2); return true;
    // src/unknown/C0/C0A0E3.asm:5 BVS @UNKNOWN0
    case 0xC0A0E8: cpu.execute_instruction<0x70>(0x00000F, 2); return true;
    // src/unknown/C0/C0A0E3.asm:6 STA $8E
    case 0xC0A0EA: cpu.execute_instruction<0x85>(0x00008E, 2); return true;
    // src/unknown/C0/C0A0E3.asm:7 LDA ENTITY_SPRITEMAP_POINTER_LOW,X
    case 0xC0A0EC: cpu.execute_instruction<0xBD>(0x00112E, 3); return true;
    // src/unknown/C0/C0A0E3.asm:8 STA $8C
    case 0xC0A0EF: cpu.execute_instruction<0x85>(0x00008C, 2); return true;
    // src/unknown/C0/C0A0E3.asm:9 LDA ENTITY_ANIMATION_FRAME,X
    case 0xC0A0F1: cpu.execute_instruction<0xBD>(0x0010F2, 3); return true;
    // src/unknown/C0/C0A0E3.asm:10 BMI @UNKNOWN0
    case 0xC0A0F4: cpu.execute_instruction<0x30>(0x000003, 2); return true;
    // src/unknown/C0/C0A0E3.asm:11 JMP (.LOWORD(ENTITY_DRAW_CALLBACK),X)
    case 0xC0A0F6: cpu.execute_instruction<0x7C>(0x0011E2, 3); return true;
    // src/unknown/C0/C0A0E3.asm:13 RTS
    case 0xC0A0F9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A0FA.asm (unresolved).
bool execute_unresolved_c0_c0a0fa_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A0FA.asm:3 ASL
    case 0xC0A0FA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A0FA.asm:4 TAY
    case 0xC0A0FB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0A0FA.asm:5 SEP #PROC_FLAGS::ACCUM8
    case 0xC0A0FC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0A0FA.asm:6 LDA $8E
    case 0xC0A0FE: cpu.execute_instruction<0xA5>(0x00008E, 2); return true;
    // src/unknown/C0/C0A0FA.asm:7 STA SPRITEMAP_BANK
    case 0xC0A100: cpu.execute_instruction<0x8D>(0x00000B, 3); return true;
    // src/unknown/C0/C0A0FA.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC0A103: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0A0FA.asm:9 LDA [$8C],Y
    case 0xC0A105: cpu.execute_instruction<0xB7>(0x00008C, 2); return true;
    // src/unknown/C0/C0A0FA.asm:10 STA $96
    case 0xC0A107: cpu.execute_instruction<0x85>(0x000096, 2); return true;
    // src/unknown/C0/C0A0FA.asm:11 LDA ENTITY_DRAW_PRIORITY,X
    case 0xC0A109: cpu.execute_instruction<0xBD>(0x00103E, 3); return true;
    // src/unknown/C0/C0A0FA.asm:12 STA CURRENT_SPRITE_DRAWING_PRIORITY
    case 0xC0A10C: cpu.execute_instruction<0x8D>(0x002400, 3); return true;
    // src/unknown/C0/C0A0FA.asm:13 LDY ENTITY_ABS_Y_TABLE,X
    case 0xC0A10F: cpu.execute_instruction<0xBC>(0x000BCA, 3); return true;
    // src/unknown/C0/C0A0FA.asm:14 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0A112: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0A0FA.asm:15 TAX
    case 0xC0A115: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A0FA.asm:16 LDA $96
    case 0xC0A116: cpu.execute_instruction<0xA5>(0x000096, 2); return true;
    // src/unknown/C0/C0A0FA.asm:17 JMP UNKNOWN_C08C58
    case 0xC0A118: cpu.execute_instruction<0x4C>(0x008C58, 3); return true;
    // src/unknown/C0/C0A0FA.asm:18 RTS
    case 0xC0A11B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A156.asm (unresolved).
bool execute_unresolved_c0_c0a156_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A156.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC0A156: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0A156.asm:4 PHD
    case 0xC0A158: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:5 PHA
    case 0xC0A159: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:6 TDC
    case 0xC0A15A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:7 SEC
    case 0xC0A15B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:8 SBC #$000A
    case 0xC0A15C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000A, 2); else cpu.execute_instruction<0xE9>(0x00000A, 3); return true;
    // src/unknown/C0/C0A156.asm:8 SBC #$000A
    // Overlapping static entry reached from 0xC0A15C.
    case 0xC0A15E: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C0/C0A156.asm:9 TCD
    case 0xC0A15F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:10 PLA
    case 0xC0A160: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:11 STA $00
    case 0xC0A161: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C0A156.asm:12 STX $02
    case 0xC0A163: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C0/C0A156.asm:13 ORA $02
    case 0xC0A165: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C0A156.asm:14 BPL @UNKNOWN0
    case 0xC0A167: cpu.execute_instruction<0x10>(0x000005, 2); return true;
    // src/unknown/C0/C0A156.asm:15 LDA #$FFFF
    case 0xC0A169: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0A156.asm:15 LDA #$FFFF
    // Overlapping static entry reached from 0xC0A169.
    case 0xC0A16B: cpu.execute_instruction<0xFF>(0xA5602B, 4); return true;
    // src/unknown/C0/C0A156.asm:16 PLD
    case 0xC0A16C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:17 RTS
    case 0xC0A16D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:19 LDA $00
    case 0xC0A16E: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C0/C0A156.asm:19 LDA $00
    // Overlapping static entry reached from 0xC0A16B.
    case 0xC0A16F: cpu.execute_instruction<0x00>(0x0000CD, 2); return true;
    // src/unknown/C0/C0A156.asm:20 CMP CACHED_MAP_BLOCK_X
    case 0xC0A170: cpu.execute_instruction<0xCD>(0x002888, 3); return true;
    // src/unknown/C0/C0A156.asm:21 BNE @UNKNOWN1
    case 0xC0A173: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C0/C0A156.asm:22 CPX CACHED_MAP_BLOCK_Y
    case 0xC0A175: cpu.execute_instruction<0xEC>(0x00288A, 3); return true;
    // src/unknown/C0/C0A156.asm:23 BNE @UNKNOWN1
    case 0xC0A178: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C0/C0A156.asm:24 LDA CACHED_MAP_BLOCK_ID
    case 0xC0A17A: cpu.execute_instruction<0xAD>(0x00288C, 3); return true;
    // src/unknown/C0/C0A156.asm:25 PLD
    case 0xC0A17D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:26 RTS
    case 0xC0A17E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:28 STA CACHED_MAP_BLOCK_X
    case 0xC0A17F: cpu.execute_instruction<0x8D>(0x002888, 3); return true;
    // src/unknown/C0/C0A156.asm:29 STX CACHED_MAP_BLOCK_Y
    case 0xC0A182: cpu.execute_instruction<0x8E>(0x00288A, 3); return true;
    // src/unknown/C0/C0A156.asm:30 TXA
    case 0xC0A185: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:31 LSR
    case 0xC0A186: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:32 LSR
    case 0xC0A187: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:33 LSR
    case 0xC0A188: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:34 XBA
    case 0xC0A189: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:35 ORA $00
    case 0xC0A18A: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/unknown/C0/C0A156.asm:36 TAY
    case 0xC0A18C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:37 LDA #.HIWORD(MAP_DATA_TILE_TABLE_CHUNK_9)
    case 0xC0A18D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D7, 2); else cpu.execute_instruction<0xA9>(0x0000D7, 3); return true;
    // src/unknown/C0/C0A156.asm:37 LDA #.HIWORD(MAP_DATA_TILE_TABLE_CHUNK_9)
    // Overlapping static entry reached from 0xC0A18D.
    case 0xC0A18F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0A156.asm:38 STA $06
    case 0xC0A190: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0A156.asm:39 LDX #.LOWORD(MAP_DATA_TILE_TABLE_CHUNK_9)
    case 0xC0A192: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005000, 3); return true;
    // src/unknown/C0/C0A156.asm:39 LDX #.LOWORD(MAP_DATA_TILE_TABLE_CHUNK_9)
    // Overlapping static entry reached from 0xC0A192.
    case 0xC0A194: cpu.execute_instruction<0x50>(0x0000A5, 2); return true;
    // src/unknown/C0/C0A156.asm:40 LDA $02
    case 0xC0A195: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0A156.asm:40 LDA $02
    // Overlapping static entry reached from 0xC0A194.
    case 0xC0A196: cpu.execute_instruction<0x02>(0x000029, 2); return true;
    // src/unknown/C0/C0A156.asm:41 AND #$0004
    case 0xC0A197: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/unknown/C0/C0A156.asm:41 AND #$0004
    // Overlapping static entry reached from 0xC0A197.
    case 0xC0A199: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A156.asm:42 BEQ @UNKNOWN2
    case 0xC0A19A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0A156.asm:43 LDX #.LOWORD(MAP_DATA_TILE_TABLE_CHUNK_10)
    case 0xC0A19C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x008000, 3); return true;
    // src/unknown/C0/C0A156.asm:43 LDX #.LOWORD(MAP_DATA_TILE_TABLE_CHUNK_10)
    // Overlapping static entry reached from 0xC0A19C.
    case 0xC0A19E: cpu.execute_instruction<0x80>(0x000086, 2); return true;
    // src/unknown/C0/C0A156.asm:45 STX $04
    case 0xC0A19F: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C0/C0A156.asm:46 LDA $02
    case 0xC0A1A1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0A156.asm:46 LDA $02
    // Overlapping static entry reached from 0xC0A121.
    case 0xC0A1A2: cpu.execute_instruction<0x02>(0x000029, 2); return true;
    // src/unknown/C0/C0A156.asm:47 AND #$0007
    case 0xC0A1A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C0/C0A156.asm:47 AND #$0007
    // Overlapping static entry reached from 0xC0A1A3.
    case 0xC0A1A5: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C0A156.asm:48 ASL
    case 0xC0A1A6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:49 ASL
    case 0xC0A1A7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:50 TAX
    case 0xC0A1A8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A156.asm:51 LDA [$04],Y
    case 0xC0A1A9: cpu.execute_instruction<0xB7>(0x000004, 2); return true;
    // src/unknown/C0/C0A156.asm:52 JMP (.LOWORD(UNKNOWN_C0A1AE),X)
    case 0xC0A1AB: cpu.execute_instruction<0x7C>(0x00A1AE, 3); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A156_redirect.asm (unresolved).
bool execute_unresolved_c0_c0a156_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A156_redirect.asm:3 JSR UNKNOWN_C0A156
    case 0xC0A152: cpu.execute_instruction<0x20>(0x00A156, 3); return true;
    // src/unknown/C0/C0A156_redirect.asm:4 RTL
    case 0xC0A155: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A1CE.asm (unresolved).
bool execute_unresolved_c0_c0a1ce_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A1CE.asm:3 LSR
    case 0xC0A1CE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A1CE.asm:4 LSR
    case 0xC0A1CF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A1CE.asm:6 LSR
    case 0xC0A1D0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A1CE.asm:7 LSR
    case 0xC0A1D1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A1CE.asm:9 LSR
    case 0xC0A1D2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A1CE.asm:10 LSR
    case 0xC0A1D3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A1CE.asm:12 AND #$0003
    case 0xC0A1D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C0A1CE.asm:12 AND #$0003
    // Overlapping static entry reached from 0xC0A1D4.
    case 0xC0A1D6: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/unknown/C0/C0A1CE.asm:13 XBA
    case 0xC0A1D7: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0A1CE.asm:14 STA $08
    case 0xC0A1D8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1106 LDA src, X
    // Macro caller: src/unknown/C0/C0A1CE.asm:15 MOVE_INT_XPTRSRC f:MAP_DATA_TILE_TABLE_CHUNKS_TABLE, $04
    case 0xC0A1DA: cpu.execute_instruction<0xBF>(0xC42F64, 4); return true;
    // include/macros.asm:1107 STA dest
    // Macro caller: src/unknown/C0/C0A1CE.asm:15 MOVE_INT_XPTRSRC f:MAP_DATA_TILE_TABLE_CHUNKS_TABLE, $04
    case 0xC0A1DE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:1108 LDA src+2, X
    // Macro caller: src/unknown/C0/C0A1CE.asm:15 MOVE_INT_XPTRSRC f:MAP_DATA_TILE_TABLE_CHUNKS_TABLE, $04
    case 0xC0A1E0: cpu.execute_instruction<0xBF>(0xC42F66, 4); return true;
    // include/macros.asm:1109 STA dest+2
    // Macro caller: src/unknown/C0/C0A1CE.asm:15 MOVE_INT_XPTRSRC f:MAP_DATA_TILE_TABLE_CHUNKS_TABLE, $04
    case 0xC0A1E4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0A1CE.asm:16 LDA [$04],Y
    case 0xC0A1E6: cpu.execute_instruction<0xB7>(0x000004, 2); return true;
    // src/unknown/C0/C0A1CE.asm:17 AND #$00FF
    case 0xC0A1E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0A1CE.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC0A1E8.
    case 0xC0A1EA: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/unknown/C0/C0A1CE.asm:18 ORA $08
    case 0xC0A1EB: cpu.execute_instruction<0x05>(0x000008, 2); return true;
    // src/unknown/C0/C0A1CE.asm:19 STA CACHED_MAP_BLOCK_ID
    case 0xC0A1ED: cpu.execute_instruction<0x8D>(0x00288C, 3); return true;
    // src/unknown/C0/C0A1CE.asm:20 PLD
    case 0xC0A1F0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0A1CE.asm:21 RTS
    case 0xC0A1F1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A1F2.asm (unresolved).
bool execute_unresolved_c0_c0a1f2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A1F2.asm:3 ASL
    case 0xC0A1F2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A1F2.asm:4 TAX
    case 0xC0A1F3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A1F2.asm:5 LDA f:UNKNOWN_C0A20C,X
    case 0xC0A1F4: cpu.execute_instruction<0xBF>(0xC0A20C, 4); return true;
    // src/unknown/C0/C0A1F2.asm:6 TAX
    case 0xC0A1F8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A1F2.asm:7 LDY #$0240
    case 0xC0A1F9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000040, 2); else cpu.execute_instruction<0xA0>(0x000240, 3); return true;
    // src/unknown/C0/C0A1F2.asm:7 LDY #$0240
    // Overlapping static entry reached from 0xC0A1F9.
    case 0xC0A1FB: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/unknown/C0/C0A1F2.asm:8 LDA #$00BF
    case 0xC0A1FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BF, 2); else cpu.execute_instruction<0xA9>(0x0000BF, 3); return true;
    // src/unknown/C0/C0A1F2.asm:8 LDA #$00BF
    // Overlapping static entry reached from 0xC0A1FC.
    case 0xC0A1FE: cpu.execute_instruction<0x00>(0x000054, 2); return true;
    // src/unknown/C0/C0A1F2.asm:9 MVN #$7E,#$7E
    case 0xC0A1FF: cpu.execute_instruction<0x54>(0x007E7E, 3); return true;
    // src/unknown/C0/C0A1F2.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC0A202: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0A1F2.asm:11 LDA #PALETTE_UPLOAD::BG_ONLY
    case 0xC0A204: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x008D08, 3); return true;
    // src/unknown/C0/C0A1F2.asm:12 STA PALETTE_UPLOAD_MODE
    case 0xC0A206: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C0/C0A1F2.asm:12 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0A204.
    case 0xC0A207: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C0/C0A1F2.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC0A209: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0A1F2.asm:14 RTL
    case 0xC0A20B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A21C.asm (unresolved).
bool execute_unresolved_c0_c0a21c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A21C.asm:3 LDY FIRST_ENTITY
    case 0xC0A21C: cpu.execute_instruction<0xAC>(0x000A50, 3); return true;
    // src/unknown/C0/C0A21C.asm:4 BMI @UNKNOWN1
    case 0xC0A21F: cpu.execute_instruction<0x30>(0x00000B, 2); return true;
    // src/unknown/C0/C0A21C.asm:6 TYX
    case 0xC0A221: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C0A21C.asm:7 CMP ENTITY_NPC_IDS,X
    case 0xC0A222: cpu.execute_instruction<0xDD>(0x002C9A, 3); return true;
    // src/unknown/C0/C0A21C.asm:8 BEQ @UNKNOWN2
    case 0xC0A225: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C0A21C.asm:9 LDY ENTITY_NEXT_ENTITY_TABLE,X
    case 0xC0A227: cpu.execute_instruction<0xBC>(0x000A9E, 3); return true;
    // src/unknown/C0/C0A21C.asm:10 BPL @UNKNOWN0
    case 0xC0A22A: cpu.execute_instruction<0x10>(0x0000F5, 2); return true;
    // src/unknown/C0/C0A21C.asm:12 LDA #$0000
    case 0xC0A22C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0A21C.asm:12 LDA #$0000
    // Overlapping static entry reached from 0xC0A22C.
    case 0xC0A22E: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/unknown/C0/C0A21C.asm:14 RTL
    case 0xC0A22F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A230.asm (unresolved).
bool execute_unresolved_c0_c0a230_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A230.asm:3 LDY ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC0A230: cpu.execute_instruction<0xBC>(0x000E5E, 3); return true;
    // src/unknown/C0/C0A230.asm:4 LDA ENTITY_ABS_X_FRACTION_TABLE,Y
    case 0xC0A233: cpu.execute_instruction<0xB9>(0x000C42, 3); return true;
    // src/unknown/C0/C0A230.asm:5 CLC
    case 0xC0A236: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A230.asm:6 ADC ENTITY_ABS_X_FRACTION_TABLE,X
    case 0xC0A237: cpu.execute_instruction<0x7D>(0x000C42, 3); return true;
    // src/unknown/C0/C0A230.asm:7 LDA ENTITY_SCREEN_X_TABLE,Y
    case 0xC0A23A: cpu.execute_instruction<0xB9>(0x000B16, 3); return true;
    // src/unknown/C0/C0A230.asm:8 ADC ENTITY_ABS_X_TABLE,X
    case 0xC0A23D: cpu.execute_instruction<0x7D>(0x000B8E, 3); return true;
    // src/unknown/C0/C0A230.asm:9 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC0A240: cpu.execute_instruction<0x9D>(0x000B16, 3); return true;
    // src/unknown/C0/C0A230.asm:10 LDA ENTITY_ABS_Y_FRACTION_TABLE,Y
    case 0xC0A243: cpu.execute_instruction<0xB9>(0x000C7E, 3); return true;
    // src/unknown/C0/C0A230.asm:11 CLC
    case 0xC0A246: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A230.asm:12 ADC ENTITY_ABS_Y_FRACTION_TABLE,X
    case 0xC0A247: cpu.execute_instruction<0x7D>(0x000C7E, 3); return true;
    // src/unknown/C0/C0A230.asm:13 LDA ENTITY_SCREEN_Y_TABLE,Y
    case 0xC0A24A: cpu.execute_instruction<0xB9>(0x000B52, 3); return true;
    // src/unknown/C0/C0A230.asm:14 ADC ENTITY_ABS_Y_TABLE,X
    case 0xC0A24D: cpu.execute_instruction<0x7D>(0x000BCA, 3); return true;
    // src/unknown/C0/C0A230.asm:15 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0A250: cpu.execute_instruction<0x9D>(0x000B52, 3); return true;
    // src/unknown/C0/C0A230.asm:16 RTS
    case 0xC0A253: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A254.asm (unresolved).
bool execute_unresolved_c0_c0a254_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A254.asm:3 ASL
    case 0xC0A254: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A254.asm:4 TAX
    case 0xC0A255: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A254.asm:5 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0A256: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0A254.asm:6 SEC
    case 0xC0A259: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A254.asm:7 SBC BG1_X_POS
    case 0xC0A25A: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C0/C0A254.asm:8 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC0A25D: cpu.execute_instruction<0x9D>(0x000B16, 3); return true;
    // src/unknown/C0/C0A254.asm:9 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0A260: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0A254.asm:10 SEC
    case 0xC0A263: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A254.asm:11 SBC BG1_Y_POS
    case 0xC0A264: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/unknown/C0/C0A254.asm:12 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0A267: cpu.execute_instruction<0x9D>(0x000B52, 3); return true;
    // src/unknown/C0/C0A254.asm:13 RTL
    case 0xC0A26A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A26B.asm (unresolved).
bool execute_unresolved_c0_c0a26b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A26B.asm:4 LDX $88
    case 0xC0A26B: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A26B.asm:5 CPX CURRENT_LEADING_PARTY_MEMBER_ENTITY
    case 0xC0A26D: cpu.execute_instruction<0xEC>(0x005D78, 3); return true;
    // src/unknown/C0/C0A26B.asm:6 BEQ @UNKNOWN0
    case 0xC0A270: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/unknown/C0/C0A26B.asm:7 LDA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC0A272: cpu.execute_instruction<0xBD>(0x001002, 3); return true;
    // src/unknown/C0/C0A26B.asm:8 AND #$0000
    case 0xC0A275: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001800, 3); return true;
    // src/unknown/C0/C0A26B.asm:9 CLC
    case 0xC0A277: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A26B.asm:10 BNE @UNKNOWN0
    case 0xC0A278: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/unknown/C0/C0A26B.asm:11 LDA NOT_MOVING_IN_SAME_DIRECTION_FACED
    case 0xC0A27A: cpu.execute_instruction<0xAD>(0x005DB8, 3); return true;
    // src/unknown/C0/C0A26B.asm:12 BNE @UNKNOWN0
    case 0xC0A27D: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/unknown/C0/C0A26B.asm:13 LDA ENTITY_DIRECTIONS,X
    case 0xC0A27F: cpu.execute_instruction<0xBD>(0x002AF6, 3); return true;
    // src/unknown/C0/C0A26B.asm:14 CMP CURRENT_LEADER_DIRECTION
    case 0xC0A282: cpu.execute_instruction<0xCD>(0x005D76, 3); return true;
    // src/unknown/C0/C0A26B.asm:15 BNE @UNKNOWN0
    case 0xC0A285: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C0/C0A26B.asm:16 ASL
    case 0xC0A287: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A26B.asm:17 TAX
    case 0xC0A288: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A26B.asm:18 LDY CURRENT_LEADING_PARTY_MEMBER_ENTITY
    case 0xC0A289: cpu.execute_instruction<0xAC>(0x005D78, 3); return true;
    // src/unknown/C0/C0A26B.asm:19 JSR (.LOWORD(UNKNOWN_C0A350),X)
    case 0xC0A28C: cpu.execute_instruction<0xFC>(0x00A350, 3); return true;
    // src/unknown/C0/C0A26B.asm:20 ASL
    case 0xC0A28F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A26B.asm:21 BEQ @UNKNOWN1
    case 0xC0A290: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C0/C0A26B.asm:23 LDX $88
    case 0xC0A292: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A26B.asm:24 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0A294: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0A26B.asm:25 SEC
    case 0xC0A297: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A26B.asm:26 SBC BG1_X_POS
    case 0xC0A298: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C0/C0A26B.asm:27 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC0A29B: cpu.execute_instruction<0x9D>(0x000B16, 3); return true;
    // src/unknown/C0/C0A26B.asm:28 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0A29E: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0A26B.asm:29 SEC
    case 0xC0A2A1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A26B.asm:30 SBC BG1_Y_POS
    case 0xC0A2A2: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/unknown/C0/C0A26B.asm:31 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0A2A5: cpu.execute_instruction<0x9D>(0x000B52, 3); return true;
    // src/unknown/C0/C0A26B.asm:33 LDX $88
    case 0xC0A2A8: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A26B.asm:34 RTS
    case 0xC0A2AA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A2B7.asm (unresolved).
bool execute_unresolved_c0_c0a2b7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A2B7.asm:4 LDX $88
    case 0xC0A2B7: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A2B7.asm:5 LDA ENTITY_SCREEN_X_TABLE,Y
    case 0xC0A2B9: cpu.execute_instruction<0xB9>(0x000B16, 3); return true;
    // src/unknown/C0/C0A2B7.asm:6 EOR ENTITY_SCREEN_X_TABLE,X
    case 0xC0A2BC: cpu.execute_instruction<0x5D>(0x000B16, 3); return true;
    // src/unknown/C0/C0A2B7.asm:7 BNE @UNKNOWN2
    case 0xC0A2BF: cpu.execute_instruction<0xD0>(0x00001F, 2); return true;
    // src/unknown/C0/C0A2B7.asm:8 LDA ENTITY_ABS_Y_TABLE,Y
    case 0xC0A2C1: cpu.execute_instruction<0xB9>(0x000BCA, 3); return true;
    // src/unknown/C0/C0A2B7.asm:9 SEC
    case 0xC0A2C4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A2B7.asm:10 SBC ENTITY_ABS_Y_TABLE,X
    case 0xC0A2C5: cpu.execute_instruction<0xFD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0A2B7.asm:11 BPL @UNKNOWN0
    case 0xC0A2C8: cpu.execute_instruction<0x10>(0x000004, 2); return true;
    // src/unknown/C0/C0A2B7.asm:12 EOR #$FFFF
    case 0xC0A2CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0A2B7.asm:12 EOR #$FFFF
    // Overlapping static entry reached from 0xC0A2CA.
    case 0xC0A2CC: cpu.execute_instruction<0xFF>(0x8ABC1A, 4); return true;
    // src/unknown/C0/C0A2B7.asm:13 INC
    case 0xC0A2CD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0A2B7.asm:15 LDY ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC0A2CE: cpu.execute_instruction<0xBC>(0x000F8A, 3); return true;
    // src/unknown/C0/C0A2B7.asm:15 LDY ENTITY_SCRIPT_VAR5_TABLE,X
    // Overlapping static entry reached from 0xC0A2CC.
    case 0xC0A2D0: cpu.execute_instruction<0x0F>(0xFF38BB, 4); return true;
    // src/unknown/C0/C0A2B7.asm:16 TYX
    case 0xC0A2D1: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C0A2B7.asm:17 SEC
    case 0xC0A2D2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A2B7.asm:18 SBC f:UNKNOWN_C0A2AB,X
    case 0xC0A2D3: cpu.execute_instruction<0xFF>(0xC0A2AB, 4); return true;
    // src/unknown/C0/C0A2B7.asm:18 SBC f:UNKNOWN_C0A2AB,X
    // Overlapping static entry reached from 0xC0A2D0.
    case 0xC0A2D4: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/unknown/C0/C0A2B7.asm:18 SBC f:UNKNOWN_C0A2AB,X
    // Overlapping static entry reached from 0xC0A2D4.
    case 0xC0A2D5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C0, 2); else cpu.execute_instruction<0xA2>(0x0010C0, 3); return true;
    // src/unknown/C0/C0A2B7.asm:19 BPL @UNKNOWN1
    case 0xC0A2D7: cpu.execute_instruction<0x10>(0x000004, 2); return true;
    // src/unknown/C0/C0A2B7.asm:19 BPL @UNKNOWN1
    // Overlapping static entry reached from 0xC0A2D5.
    case 0xC0A2D8: cpu.execute_instruction<0x04>(0x000049, 2); return true;
    // src/unknown/C0/C0A2B7.asm:20 EOR #$FFFF
    case 0xC0A2D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0A2B7.asm:20 EOR #$FFFF
    // Overlapping static entry reached from 0xC0A2D8.
    case 0xC0A2DA: cpu.execute_instruction<0xFF>(0xF01AFF, 4); return true;
    // src/unknown/C0/C0A2B7.asm:20 EOR #$FFFF
    // Overlapping static entry reached from 0xC0A2D9.
    case 0xC0A2DB: cpu.execute_instruction<0xFF>(0x01F01A, 4); return true;
    // src/unknown/C0/C0A2B7.asm:21 INC
    case 0xC0A2DC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0A2B7.asm:23 BEQ @UNKNOWN2
    case 0xC0A2DD: cpu.execute_instruction<0xF0>(0x000001, 2); return true;
    // src/unknown/C0/C0A2B7.asm:23 BEQ @UNKNOWN2
    // Overlapping static entry reached from 0xC0A2DA.
    case 0xC0A2DE: cpu.execute_instruction<0x01>(0x00003A, 2); return true;
    // src/unknown/C0/C0A2B7.asm:24 DEC
    case 0xC0A2DF: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0A2B7.asm:26 RTS
    case 0xC0A2E0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A2E1.asm (unresolved).
bool execute_unresolved_c0_c0a2e1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A2E1.asm:3 LDX $88
    case 0xC0A2E1: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A2E1.asm:4 LDA ENTITY_SCREEN_Y_TABLE,Y
    case 0xC0A2E3: cpu.execute_instruction<0xB9>(0x000B52, 3); return true;
    // src/unknown/C0/C0A2E1.asm:5 EOR ENTITY_SCREEN_Y_TABLE,X
    case 0xC0A2E6: cpu.execute_instruction<0x5D>(0x000B52, 3); return true;
    // src/unknown/C0/C0A2E1.asm:6 BNE @UNKNOWN2
    case 0xC0A2E9: cpu.execute_instruction<0xD0>(0x00001F, 2); return true;
    // src/unknown/C0/C0A2E1.asm:7 LDA ENTITY_ABS_X_TABLE,Y
    case 0xC0A2EB: cpu.execute_instruction<0xB9>(0x000B8E, 3); return true;
    // src/unknown/C0/C0A2E1.asm:8 SEC
    case 0xC0A2EE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A2E1.asm:9 SBC ENTITY_ABS_X_TABLE,X
    case 0xC0A2EF: cpu.execute_instruction<0xFD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0A2E1.asm:10 BPL @UNKNOWN0
    case 0xC0A2F2: cpu.execute_instruction<0x10>(0x000004, 2); return true;
    // src/unknown/C0/C0A2E1.asm:11 EOR #$FFFF
    case 0xC0A2F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0A2E1.asm:11 EOR #$FFFF
    // Overlapping static entry reached from 0xC0A2F4.
    case 0xC0A2F6: cpu.execute_instruction<0xFF>(0x8ABC1A, 4); return true;
    // src/unknown/C0/C0A2E1.asm:12 INC
    case 0xC0A2F7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0A2E1.asm:14 LDY ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC0A2F8: cpu.execute_instruction<0xBC>(0x000F8A, 3); return true;
    // src/unknown/C0/C0A2E1.asm:14 LDY ENTITY_SCRIPT_VAR5_TABLE,X
    // Overlapping static entry reached from 0xC0A2F6.
    case 0xC0A2FA: cpu.execute_instruction<0x0F>(0xFF38BB, 4); return true;
    // src/unknown/C0/C0A2E1.asm:15 TYX
    case 0xC0A2FB: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C0A2E1.asm:16 SEC
    case 0xC0A2FC: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A2E1.asm:17 SBC f:UNKNOWN_C0A2AB,X
    case 0xC0A2FD: cpu.execute_instruction<0xFF>(0xC0A2AB, 4); return true;
    // src/unknown/C0/C0A2E1.asm:17 SBC f:UNKNOWN_C0A2AB,X
    // Overlapping static entry reached from 0xC0A2FA.
    case 0xC0A2FE: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/unknown/C0/C0A2E1.asm:17 SBC f:UNKNOWN_C0A2AB,X
    // Overlapping static entry reached from 0xC0A2FE.
    case 0xC0A2FF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C0, 2); else cpu.execute_instruction<0xA2>(0x0010C0, 3); return true;
    // src/unknown/C0/C0A2E1.asm:18 BPL @UNKNOWN1
    case 0xC0A301: cpu.execute_instruction<0x10>(0x000004, 2); return true;
    // src/unknown/C0/C0A2E1.asm:18 BPL @UNKNOWN1
    // Overlapping static entry reached from 0xC0A2FF.
    case 0xC0A302: cpu.execute_instruction<0x04>(0x000049, 2); return true;
    // src/unknown/C0/C0A2E1.asm:19 EOR #$FFFF
    case 0xC0A303: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0A2E1.asm:19 EOR #$FFFF
    // Overlapping static entry reached from 0xC0A302.
    case 0xC0A304: cpu.execute_instruction<0xFF>(0xF01AFF, 4); return true;
    // src/unknown/C0/C0A2E1.asm:19 EOR #$FFFF
    // Overlapping static entry reached from 0xC0A303.
    case 0xC0A305: cpu.execute_instruction<0xFF>(0x01F01A, 4); return true;
    // src/unknown/C0/C0A2E1.asm:20 INC
    case 0xC0A306: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0A2E1.asm:22 BEQ @UNKNOWN2
    case 0xC0A307: cpu.execute_instruction<0xF0>(0x000001, 2); return true;
    // src/unknown/C0/C0A2E1.asm:22 BEQ @UNKNOWN2
    // Overlapping static entry reached from 0xC0A304.
    case 0xC0A308: cpu.execute_instruction<0x01>(0x00003A, 2); return true;
    // src/unknown/C0/C0A2E1.asm:23 DEC
    case 0xC0A309: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0A2E1.asm:25 RTS
    case 0xC0A30A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A317.asm (unresolved).
bool execute_unresolved_c0_c0a317_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A317.asm:3 LDX $88
    case 0xC0A317: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A317.asm:4 LDA ENTITY_ABS_X_TABLE,Y
    case 0xC0A319: cpu.execute_instruction<0xB9>(0x000B8E, 3); return true;
    // src/unknown/C0/C0A317.asm:5 SEC
    case 0xC0A31C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A317.asm:6 SBC ENTITY_ABS_X_TABLE,X
    case 0xC0A31D: cpu.execute_instruction<0xFD>(0x000B8E, 3); return true;
    // src/unknown/C0/C0A317.asm:7 BPL @UNKNOWN0
    case 0xC0A320: cpu.execute_instruction<0x10>(0x000004, 2); return true;
    // src/unknown/C0/C0A317.asm:8 EOR #$FFFF
    case 0xC0A322: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0A317.asm:8 EOR #$FFFF
    // Overlapping static entry reached from 0xC0A322.
    case 0xC0A324: cpu.execute_instruction<0xFF>(0x00851A, 4); return true;
    // src/unknown/C0/C0A317.asm:9 INC
    case 0xC0A325: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0A317.asm:11 STA $00
    case 0xC0A326: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C0A317.asm:12 LDA ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC0A328: cpu.execute_instruction<0xBD>(0x000F8A, 3); return true;
    // src/unknown/C0/C0A317.asm:13 TAX
    case 0xC0A32B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A317.asm:14 LDA $00
    case 0xC0A32C: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C0/C0A317.asm:15 CMP f:UNKNOWN_C0A30B,X
    case 0xC0A32E: cpu.execute_instruction<0xDF>(0xC0A30B, 4); return true;
    // src/unknown/C0/C0A317.asm:16 BCC @UNKNOWN3
    case 0xC0A332: cpu.execute_instruction<0x90>(0x00001B, 2); return true;
    // src/unknown/C0/C0A317.asm:17 LDX $88
    case 0xC0A334: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A317.asm:18 LDA ENTITY_ABS_Y_TABLE,Y
    case 0xC0A336: cpu.execute_instruction<0xB9>(0x000BCA, 3); return true;
    // src/unknown/C0/C0A317.asm:19 SEC
    case 0xC0A339: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A317.asm:20 SBC ENTITY_ABS_Y_TABLE,X
    case 0xC0A33A: cpu.execute_instruction<0xFD>(0x000BCA, 3); return true;
    // src/unknown/C0/C0A317.asm:21 BPL @UNKNOWN1
    case 0xC0A33D: cpu.execute_instruction<0x10>(0x000004, 2); return true;
    // src/unknown/C0/C0A317.asm:22 EOR #$FFFF
    case 0xC0A33F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0A317.asm:22 EOR #$FFFF
    // Overlapping static entry reached from 0xC0A33F.
    case 0xC0A341: cpu.execute_instruction<0xFF>(0xE5381A, 4); return true;
    // src/unknown/C0/C0A317.asm:23 INC
    case 0xC0A342: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0A317.asm:25 SEC
    case 0xC0A343: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A317.asm:26 SBC $00
    case 0xC0A344: cpu.execute_instruction<0xE5>(0x000000, 2); return true;
    // src/unknown/C0/C0A317.asm:26 SBC $00
    // Overlapping static entry reached from 0xC0A341.
    case 0xC0A345: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A317.asm:27 BEQ @UNKNOWN3
    case 0xC0A346: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C0A317.asm:28 BPL @UNKNOWN2
    case 0xC0A348: cpu.execute_instruction<0x10>(0x000004, 2); return true;
    // src/unknown/C0/C0A317.asm:29 EOR #$FFFF
    case 0xC0A34A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C0/C0A317.asm:29 EOR #$FFFF
    // Overlapping static entry reached from 0xC0A34A.
    case 0xC0A34C: cpu.execute_instruction<0xFF>(0x603A1A, 4); return true;
    // src/unknown/C0/C0A317.asm:30 INC
    case 0xC0A34D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0A317.asm:32 DEC
    case 0xC0A34E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0A317.asm:34 RTS
    case 0xC0A34F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A360.asm (unresolved).
bool execute_unresolved_c0_c0a360_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A360.asm:3 LDX $88
    case 0xC0A360: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A360.asm:4 LDA ENTITY_PATHFINDING_STATES,X
    case 0xC0A362: cpu.execute_instruction<0xBD>(0x002C5E, 3); return true;
    // src/unknown/C0/C0A360.asm:5 BMI UNKNOWN_C0A37A_1
    case 0xC0A365: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/unknown/C0/C0A360.asm:6 LDA ENTITY_OBSTACLE_FLAGS,X
    case 0xC0A367: cpu.execute_instruction<0xBD>(0x0028DA, 3); return true;
    // src/unknown/C0/C0A360.asm:7 AND #$00D0
    case 0xC0A36A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000D0, 2); else cpu.execute_instruction<0x29>(0x0000D0, 3); return true;
    // src/unknown/C0/C0A360.asm:7 AND #$00D0
    // Overlapping static entry reached from 0xC0A36A.
    case 0xC0A36C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A360.asm:8 BEQ @UNKNOWN0
    case 0xC0A36D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0A360.asm:9 JMP MOVEMENT_CODE_39
    case 0xC0A36F: cpu.execute_instruction<0x4C>(0x0098F2, 3); return true;
    // src/unknown/C0/C0A360.asm:11 LDX $88
    case 0xC0A372: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A360.asm:12 LDA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0A374: cpu.execute_instruction<0xBD>(0x00289E, 3); return true;
    // src/unknown/C0/C0A360.asm:13 BMI UNKNOWN_C0A37A_1
    case 0xC0A377: cpu.execute_instruction<0x30>(0x000003, 2); return true;
    // src/unknown/C0/C0A360.asm:14 RTS
    case 0xC0A379: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C0/C0A360.asm:16 LDX $88
    case 0xC0A37A: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A360.asm:18 JSR UNKNOWN_C09FAE_ENTRY3
    case 0xC0A37C: cpu.execute_instruction<0x20>(0x009FCA, 3); return true;
    // src/unknown/C0/C0A360.asm:19 JSL UNKNOWN_C0C7DB
    case 0xC0A37F: cpu.execute_instruction<0x22>(0xC0C7DB, 4); return true;
    // src/unknown/C0/C0A360.asm:20 RTS
    case 0xC0A383: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A384.asm (unresolved).
bool execute_unresolved_c0_c0a384_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A384.asm:3 LDX $88
    case 0xC0A384: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A384.asm:4 LDA ENTITY_PATHFINDING_STATES,X
    case 0xC0A386: cpu.execute_instruction<0xBD>(0x002C5E, 3); return true;
    // src/unknown/C0/C0A384.asm:5 BMI @UNKNOWN1
    case 0xC0A389: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/unknown/C0/C0A384.asm:6 LDA ENTITY_OBSTACLE_FLAGS,X
    case 0xC0A38B: cpu.execute_instruction<0xBD>(0x0028DA, 3); return true;
    // src/unknown/C0/C0A384.asm:7 AND #$00D0
    case 0xC0A38E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000D0, 2); else cpu.execute_instruction<0x29>(0x0000D0, 3); return true;
    // src/unknown/C0/C0A384.asm:7 AND #$00D0
    // Overlapping static entry reached from 0xC0A38E.
    case 0xC0A390: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A384.asm:8 BEQ @UNKNOWN0
    case 0xC0A391: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0A384.asm:9 JMP MOVEMENT_CODE_39
    case 0xC0A393: cpu.execute_instruction<0x4C>(0x0098F2, 3); return true;
    // src/unknown/C0/C0A384.asm:11 LDX $88
    case 0xC0A396: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A384.asm:12 LDA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0A398: cpu.execute_instruction<0xBD>(0x00289E, 3); return true;
    // src/unknown/C0/C0A384.asm:13 BMI @UNKNOWN1
    case 0xC0A39B: cpu.execute_instruction<0x30>(0x000003, 2); return true;
    // src/unknown/C0/C0A384.asm:14 RTS
    case 0xC0A39D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C0/C0A384.asm:15 LDX $88
    case 0xC0A39E: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A384.asm:17 JSR UNKNOWN_C09FAE_ENTRY3
    case 0xC0A3A0: cpu.execute_instruction<0x20>(0x009FCA, 3); return true;
    // src/unknown/C0/C0A384.asm:18 RTS
    case 0xC0A3A3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A3A4.asm (unresolved).
bool execute_unresolved_c0_c0a3a4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A3A4.asm:3 LDA ENTITY_CURRENT_DISPLAYED_SPRITES,X
    case 0xC0A3A4: cpu.execute_instruction<0xBD>(0x00341A, 3); return true;
    // src/unknown/C0/C0A3A4.asm:4 AND #$0001
    case 0xC0A3A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0A3A4.asm:4 AND #$0001
    // Overlapping static entry reached from 0xC0A3A7.
    case 0xC0A3A9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A3A4.asm:5 BEQ @UNKNOWN0
    case 0xC0A3AA: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C0A3A4.asm:6 LDA ENTITY_SPRITEMAP_SIZES,X
    case 0xC0A3AC: cpu.execute_instruction<0xBD>(0x002916, 3); return true;
    // src/unknown/C0/C0A3A4.asm:7 CLC
    case 0xC0A3AF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:8 ADC $8C
    case 0xC0A3B0: cpu.execute_instruction<0x65>(0x00008C, 2); return true;
    // src/unknown/C0/C0A3A4.asm:9 STA $8C
    case 0xC0A3B2: cpu.execute_instruction<0x85>(0x00008C, 2); return true;
    // src/unknown/C0/C0A3A4.asm:11 SEP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0A3B4: cpu.execute_instruction<0xE2>(0x000030, 2); return true;
    // src/unknown/C0/C0A3A4.asm:12 LDA #$0030
    case 0xC0A3B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x00A030, 3); return true;
    // src/unknown/C0/C0A3A4.asm:13 LDY #$0020
    case 0xC0A3B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000020, 2); else cpu.execute_instruction<0xA0>(0x008520, 3); return true;
    // src/unknown/C0/C0A3A4.asm:13 LDY #$0020
    // Overlapping static entry reached from 0xC0A3B6.
    case 0xC0A3B9: cpu.execute_instruction<0x20>(0x000085, 3); return true;
    // src/unknown/C0/C0A3A4.asm:14 STA $00
    case 0xC0A3BA: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C0A3A4.asm:14 STA $00
    // Overlapping static entry reached from 0xC0A3B8.
    case 0xC0A3BB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0A3A4.asm:15 STA $02
    case 0xC0A3BC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0A3A4.asm:16 LDA ENTITY_SURFACE_FLAGS,X
    case 0xC0A3BE: cpu.execute_instruction<0xBD>(0x002BAA, 3); return true;
    // src/unknown/C0/C0A3A4.asm:17 LSR
    case 0xC0A3C1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:18 BCC @UNKNOWN1
    case 0xC0A3C2: cpu.execute_instruction<0x90>(0x000002, 2); return true;
    // src/unknown/C0/C0A3A4.asm:19 STY $02
    case 0xC0A3C4: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C0/C0A3A4.asm:19 STY $02
    // Overlapping static entry reached from 0xC0836F.
    case 0xC0A3C5: cpu.execute_instruction<0x02>(0x00004A, 2); return true;
    // src/unknown/C0/C0A3A4.asm:21 LSR
    case 0xC0A3C6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:22 BCC @UNKNOWN2
    case 0xC0A3C7: cpu.execute_instruction<0x90>(0x000002, 2); return true;
    // src/unknown/C0/C0A3A4.asm:23 STY $00
    case 0xC0A3C9: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/unknown/C0/C0A3A4.asm:25 LDA ENTITY_UPPER_LOWER_BODY_DIVIDES+1,X
    case 0xC0A3CB: cpu.execute_instruction<0xBD>(0x002BE7, 3); return true;
    // src/unknown/C0/C0A3A4.asm:26 TAX
    case 0xC0A3CE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:27 LDY #$00FD
    case 0xC0A3CF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FD, 2); else cpu.execute_instruction<0xA0>(0x0080FD, 3); return true;
    // src/unknown/C0/C0A3A4.asm:28 BRA @UNKNOWN4
    case 0xC0A3D1: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C0A3A4.asm:28 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC0A3CF.
    case 0xC0A3D2: cpu.execute_instruction<0x0D>(0x00C8C8, 3); return true;
    // src/unknown/C0/C0A3A4.asm:30 INY
    case 0xC0A3D3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:31 INY
    case 0xC0A3D4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:32 INY
    case 0xC0A3D5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:33 INY
    case 0xC0A3D6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:34 INY
    case 0xC0A3D7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:35 LDA [$8C],Y
    case 0xC0A3D8: cpu.execute_instruction<0xB7>(0x00008C, 2); return true;
    // src/unknown/C0/C0A3A4.asm:36 AND #$00CF
    case 0xC0A3DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000CF, 2); else cpu.execute_instruction<0x29>(0x0005CF, 3); return true;
    // src/unknown/C0/C0A3A4.asm:37 ORA $00
    case 0xC0A3DC: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/unknown/C0/C0A3A4.asm:37 ORA $00
    // Overlapping static entry reached from 0xC0A3DA.
    case 0xC0A3DD: cpu.execute_instruction<0x00>(0x000097, 2); return true;
    // src/unknown/C0/C0A3A4.asm:38 STA [$8C],Y
    case 0xC0A3DE: cpu.execute_instruction<0x97>(0x00008C, 2); return true;
    // src/unknown/C0/C0A3A4.asm:40 DEX
    case 0xC0A3E0: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:41 BPL @UNKNOWN3
    case 0xC0A3E1: cpu.execute_instruction<0x10>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A3A4.asm:42 LDX $88
    case 0xC0A3E3: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A3A4.asm:43 LDA ENTITY_UPPER_LOWER_BODY_DIVIDES,X
    case 0xC0A3E5: cpu.execute_instruction<0xBD>(0x002BE6, 3); return true;
    // src/unknown/C0/C0A3A4.asm:44 TAX
    case 0xC0A3E8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:45 BRA @UNKNOWN6
    case 0xC0A3E9: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C0A3A4.asm:47 INY
    case 0xC0A3EB: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:48 INY
    case 0xC0A3EC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:49 INY
    case 0xC0A3ED: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:50 INY
    case 0xC0A3EE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:51 INY
    case 0xC0A3EF: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:52 LDA [$8C],Y
    case 0xC0A3F0: cpu.execute_instruction<0xB7>(0x00008C, 2); return true;
    // src/unknown/C0/C0A3A4.asm:53 AND #$00CF
    case 0xC0A3F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000CF, 2); else cpu.execute_instruction<0x29>(0x0005CF, 3); return true;
    // src/unknown/C0/C0A3A4.asm:54 ORA $02
    case 0xC0A3F4: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C0A3A4.asm:54 ORA $02
    // Overlapping static entry reached from 0xC0A3F2.
    case 0xC0A3F5: cpu.execute_instruction<0x02>(0x000097, 2); return true;
    // src/unknown/C0/C0A3A4.asm:55 STA [$8C],Y
    case 0xC0A3F6: cpu.execute_instruction<0x97>(0x00008C, 2); return true;
    // src/unknown/C0/C0A3A4.asm:57 DEX
    case 0xC0A3F8: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:58 BPL @UNKNOWN5
    case 0xC0A3F9: cpu.execute_instruction<0x10>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A3A4.asm:59 REP #PROC_FLAGS::INDEX8
    case 0xC0A3FB: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C0/C0A3A4.asm:60 LDX $88
    case 0xC0A3FD: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A3A4.asm:61 LDA $8E
    case 0xC0A3FF: cpu.execute_instruction<0xA5>(0x00008E, 2); return true;
    // src/unknown/C0/C0A3A4.asm:62 STA SPRITEMAP_BANK
    case 0xC0A401: cpu.execute_instruction<0x8D>(0x00000B, 3); return true;
    // src/unknown/C0/C0A3A4.asm:63 REP #PROC_FLAGS::ACCUM8
    case 0xC0A404: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0A3A4.asm:64 LDA ENTITY_DRAW_PRIORITY,X
    case 0xC0A406: cpu.execute_instruction<0xBD>(0x00103E, 3); return true;
    // src/unknown/C0/C0A3A4.asm:65 STA CURRENT_SPRITE_DRAWING_PRIORITY
    case 0xC0A409: cpu.execute_instruction<0x8D>(0x002400, 3); return true;
    // src/unknown/C0/C0A3A4.asm:66 TAY
    case 0xC0A40C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:67 AND #$8000
    case 0xC0A40D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/unknown/C0/C0A3A4.asm:67 AND #$8000
    // Overlapping static entry reached from 0xC0A40D.
    case 0xC0A40F: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A3A4.asm:68 BEQ @UNKNOWN7
    case 0xC0A410: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/unknown/C0/C0A3A4.asm:69 TYA
    case 0xC0A412: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:70 AND #$003F
    case 0xC0A413: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C0/C0A3A4.asm:70 AND #$003F
    // Overlapping static entry reached from 0xC0A413.
    case 0xC0A415: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C0/C0A3A4.asm:71 ASL
    case 0xC0A416: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:72 TAX
    case 0xC0A417: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:73 LDA ENTITY_DRAW_PRIORITY,X
    case 0xC0A418: cpu.execute_instruction<0xBD>(0x00103E, 3); return true;
    // src/unknown/C0/C0A3A4.asm:74 LDX $88
    case 0xC0A41B: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A3A4.asm:75 STA CURRENT_SPRITE_DRAWING_PRIORITY
    case 0xC0A41D: cpu.execute_instruction<0x8D>(0x002400, 3); return true;
    // src/unknown/C0/C0A3A4.asm:76 TYA
    case 0xC0A420: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:77 AND #$4000
    case 0xC0A421: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x004000, 3); return true;
    // src/unknown/C0/C0A3A4.asm:77 AND #$4000
    // Overlapping static entry reached from 0xC0A421.
    case 0xC0A423: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:78 BNE @UNKNOWN7
    case 0xC0A424: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C0/C0A3A4.asm:79 LDA #$0000
    case 0xC0A426: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0A3A4.asm:79 LDA #$0000
    // Overlapping static entry reached from 0xC0A426.
    case 0xC0A428: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0A3A4.asm:80 STA ENTITY_DRAW_PRIORITY,X
    case 0xC0A429: cpu.execute_instruction<0x9D>(0x00103E, 3); return true;
    // src/unknown/C0/C0A3A4.asm:82 JSL UNKNOWN_C0AC43
    case 0xC0A42C: cpu.execute_instruction<0x22>(0xC0AC43, 4); return true;
    // src/unknown/C0/C0A3A4.asm:83 LDX $88
    case 0xC0A430: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A3A4.asm:84 LDA $8E
    case 0xC0A432: cpu.execute_instruction<0xA5>(0x00008E, 2); return true;
    // src/unknown/C0/C0A3A4.asm:85 STA SPRITEMAP_BANK
    case 0xC0A434: cpu.execute_instruction<0x8D>(0x00000B, 3); return true;
    // src/unknown/C0/C0A3A4.asm:86 LDY ENTITY_SCREEN_Y_TABLE,X
    case 0xC0A437: cpu.execute_instruction<0xBC>(0x000B52, 3); return true;
    // src/unknown/C0/C0A3A4.asm:87 LDA ENTITY_SCREEN_X_TABLE,X
    case 0xC0A43A: cpu.execute_instruction<0xBD>(0x000B16, 3); return true;
    // src/unknown/C0/C0A3A4.asm:88 TAX
    case 0xC0A43D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A3A4.asm:89 LDA $8C
    case 0xC0A43E: cpu.execute_instruction<0xA5>(0x00008C, 2); return true;
    // src/unknown/C0/C0A3A4.asm:90 JMP UNKNOWN_C08C58
    case 0xC0A440: cpu.execute_instruction<0x4C>(0x008C58, 3); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A443.asm (unresolved).
bool execute_unresolved_c0_c0a443_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A443.asm:3 LDX $88
    case 0xC0A443: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A443.asm:4 LDA PLAYER_HAS_MOVED_SINCE_MAP_LOAD
    case 0xC0A445: cpu.execute_instruction<0xAD>(0x002890, 3); return true;
    // src/unknown/C0/C0A443.asm:5 CLC
    case 0xC0A448: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:6 ADC CURRENT_ENTITY_SLOT
    case 0xC0A449: cpu.execute_instruction<0x6D>(0x001A42, 3); return true;
    // src/unknown/C0/C0A443.asm:7 LSR
    case 0xC0A44C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:8 LSR
    case 0xC0A44D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:9 LSR
    case 0xC0A44E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:10 AND #$0001
    case 0xC0A44F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0A443.asm:10 AND #$0001
    // Overlapping static entry reached from 0xC0A44F.
    case 0xC0A451: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0A443.asm:11 STA $00
    case 0xC0A452: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C0A443.asm:12 LDA ENTITY_DIRECTIONS,X
    case 0xC0A454: cpu.execute_instruction<0xBD>(0x002AF6, 3); return true;
    // src/unknown/C0/C0A443.asm:13 ASL
    case 0xC0A457: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:14 ORA $00
    case 0xC0A458: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/unknown/C0/C0A443.asm:15 STA $02
    case 0xC0A45A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0A443.asm:16 LDA ENTITY_WALKING_STYLES,X
    case 0xC0A45C: cpu.execute_instruction<0xBD>(0x002C22, 3); return true;
    // src/unknown/C0/C0A443.asm:17 XBA
    case 0xC0A45F: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:18 ORA $02
    case 0xC0A460: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/unknown/C0/C0A443.asm:19 CMP ENTITY_ANIMATION_FINGERPRINTS,X
    case 0xC0A462: cpu.execute_instruction<0xDD>(0x003456, 3); return true;
    // src/unknown/C0/C0A443.asm:20 BNE @UNKNOWN8
    case 0xC0A465: cpu.execute_instruction<0xD0>(0x000001, 2); return true;
    // src/unknown/C0/C0A443.asm:21 RTL
    case 0xC0A467: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:23 STA ENTITY_ANIMATION_FINGERPRINTS,X
    case 0xC0A468: cpu.execute_instruction<0x9D>(0x003456, 3); return true;
    // src/unknown/C0/C0A443.asm:24 LDA $00
    case 0xC0A46B: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C0/C0A443.asm:25 STA USE_SECOND_SPRITE_FRAME
    case 0xC0A46D: cpu.execute_instruction<0x8D>(0x002892, 3); return true;
    // src/unknown/C0/C0A443.asm:26 BRA UNKNOWN_C0A443_UNKNOWN10
    case 0xC0A470: cpu.execute_instruction<0x80>(0x000050, 2); return true;
    // src/unknown/C0/C0A443.asm:27 LDA FRAME_COUNTER
    case 0xC0A472: cpu.execute_instruction<0xAD>(0x000002, 3); return true;
    // src/unknown/C0/C0A443.asm:28 LSR
    case 0xC0A475: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:29 LSR
    case 0xC0A476: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:30 LSR
    case 0xC0A477: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:31 AND #$0001
    case 0xC0A478: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0A443.asm:31 AND #$0001
    // Overlapping static entry reached from 0xC0A478.
    case 0xC0A47A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0A443.asm:32 STA USE_SECOND_SPRITE_FRAME
    case 0xC0A47B: cpu.execute_instruction<0x8D>(0x002892, 3); return true;
    // src/unknown/C0/C0A443.asm:33 BRA UNKNOWN_C0A443_UNKNOWN10
    case 0xC0A47E: cpu.execute_instruction<0x80>(0x000042, 2); return true;
    // src/unknown/C0/C0A443.asm:35 LDY $88
    case 0xC0A480: cpu.execute_instruction<0xA4>(0x000088, 2); return true;
    // src/unknown/C0/C0A443.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC0A482: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0A443.asm:37 PHD
    case 0xC0A484: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:38 PHA
    case 0xC0A485: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:39 TDC
    case 0xC0A486: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:40 SEC
    case 0xC0A487: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:41 SBC #$0006
    case 0xC0A488: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000006, 2); else cpu.execute_instruction<0xE9>(0x000006, 3); return true;
    // src/unknown/C0/C0A443.asm:41 SBC #$0006
    // Overlapping static entry reached from 0xC0A488.
    case 0xC0A48A: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C0/C0A443.asm:42 TCD
    case 0xC0A48B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:43 PLA
    case 0xC0A48C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:44 BRA UNKNOWN_C0A443_UNKNOWN9
    case 0xC0A48D: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C0/C0A443.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xC0A48F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0A443.asm:47 PHD
    case 0xC0A491: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:48 PHA
    case 0xC0A492: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:49 TDC
    case 0xC0A493: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:50 SEC
    case 0xC0A494: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:51 SBC #$0006
    case 0xC0A495: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000006, 2); else cpu.execute_instruction<0xE9>(0x000006, 3); return true;
    // src/unknown/C0/C0A443.asm:51 SBC #$0006
    // Overlapping static entry reached from 0xC0A495.
    case 0xC0A497: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C0/C0A443.asm:52 TCD
    case 0xC0A498: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:53 PLA
    case 0xC0A499: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:54 ASL
    case 0xC0A49A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:55 TAY
    case 0xC0A49B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:57 LDA ENTITY_ANIMATION_FRAME,Y
    case 0xC0A49C: cpu.execute_instruction<0xB9>(0x0010F2, 3); return true;
    // src/unknown/C0/C0A443.asm:58 STA USE_SECOND_SPRITE_FRAME
    case 0xC0A49F: cpu.execute_instruction<0x8D>(0x002892, 3); return true;
    // src/unknown/C0/C0A443.asm:59 JSL UNKNOWN_C0A443_ENTRY4
    case 0xC0A4A2: cpu.execute_instruction<0x22>(0xC0A4C4, 4); return true;
    // src/unknown/C0/C0A443.asm:60 PLD
    case 0xC0A4A6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:61 RTL
    case 0xC0A4A7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:63 STZ USE_SECOND_SPRITE_FRAME
    case 0xC0A4A8: cpu.execute_instruction<0x9C>(0x002892, 3); return true;
    // src/unknown/C0/C0A443.asm:64 JSL UNKNOWN_C0C711
    case 0xC0A4AB: cpu.execute_instruction<0x22>(0xC0C711, 4); return true;
    // src/unknown/C0/C0A443.asm:65 BNE UNKNOWN_C0A443_UNKNOWN10
    case 0xC0A4AF: cpu.execute_instruction<0xD0>(0x000011, 2); return true;
    // src/unknown/C0/C0A443.asm:66 RTL
    case 0xC0A4B1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:68 LDA #$0001
    case 0xC0A4B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0A443.asm:68 LDA #$0001
    // Overlapping static entry reached from 0xC0A4B2.
    case 0xC0A4B4: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0A443.asm:69 STA USE_SECOND_SPRITE_FRAME
    case 0xC0A4B5: cpu.execute_instruction<0x8D>(0x002892, 3); return true;
    // src/unknown/C0/C0A443.asm:70 JSL UNKNOWN_C0C711
    case 0xC0A4B8: cpu.execute_instruction<0x22>(0xC0C711, 4); return true;
    // src/unknown/C0/C0A443.asm:71 BNE UNKNOWN_C0A443_UNKNOWN10
    case 0xC0A4BC: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C0/C0A443.asm:72 RTL
    case 0xC0A4BE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:74 STZ USE_SECOND_SPRITE_FRAME
    case 0xC0A4BF: cpu.execute_instruction<0x9C>(0x002892, 3); return true;
    // src/unknown/C0/C0A443.asm:76 LDY $88
    case 0xC0A4C2: cpu.execute_instruction<0xA4>(0x000088, 2); return true;
    // src/unknown/C0/C0A443.asm:78 STY $08
    case 0xC0A4C4: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C0A443.asm:79 LDA ENTITY_TILE_HEIGHTS,Y
    case 0xC0A4C6: cpu.execute_instruction<0xB9>(0x002ABA, 3); return true;
    // src/unknown/C0/C0A443.asm:80 STA $00
    case 0xC0A4C9: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C0A443.asm:81 LDA ENTITY_BYTE_WIDTHS,Y
    case 0xC0A4CB: cpu.execute_instruction<0xB9>(0x002A7E, 3); return true;
    // src/unknown/C0/C0A443.asm:82 STA DMA_COPY_SIZE
    case 0xC0A4CE: cpu.execute_instruction<0x8D>(0x000092, 3); return true;
    // src/unknown/C0/C0A443.asm:83 LDA ENTITY_VRAM_ADDRESS,Y
    case 0xC0A4D1: cpu.execute_instruction<0xB9>(0x00298E, 3); return true;
    // src/unknown/C0/C0A443.asm:84 STA DMA_COPY_VRAM_DEST
    case 0xC0A4D4: cpu.execute_instruction<0x8D>(0x000097, 3); return true;
    // src/unknown/C0/C0A443.asm:85 LDA ENTITY_GRAPHICS_PTR_HIGH,Y
    case 0xC0A4D7: cpu.execute_instruction<0xB9>(0x002A06, 3); return true;
    // src/unknown/C0/C0A443.asm:86 STA $04
    case 0xC0A4DA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0A443.asm:87 LDA ENTITY_GRAPHICS_PTR_LOW,Y
    case 0xC0A4DC: cpu.execute_instruction<0xB9>(0x0029CA, 3); return true;
    // src/unknown/C0/C0A443.asm:88 STA $02
    case 0xC0A4DF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0A443.asm:89 LDA ENTITY_DIRECTIONS,Y
    case 0xC0A4E1: cpu.execute_instruction<0xB9>(0x002AF6, 3); return true;
    // src/unknown/C0/C0A443.asm:90 ASL
    case 0xC0A4E4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:91 TAX
    case 0xC0A4E5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:92 LDA f:SPRITE_DIRECTION_MAPPING_4_DIRECTION,X
    case 0xC0A4E6: cpu.execute_instruction<0xBF>(0xC0A60B, 4); return true;
    // src/unknown/C0/C0A443.asm:93 BEQ @UNKNOWN12
    case 0xC0A4EA: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C0A443.asm:94 TAX
    case 0xC0A4EC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:95 LDA $02
    case 0xC0A4ED: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0A443.asm:96 CLC
    case 0xC0A4EF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:98 ADC #$0004
    case 0xC0A4F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000004, 2); else cpu.execute_instruction<0x69>(0x000004, 3); return true;
    // src/unknown/C0/C0A443.asm:98 ADC #$0004
    // Overlapping static entry reached from 0xC0A4F0.
    case 0xC0A4F2: cpu.execute_instruction<0x00>(0x0000CA, 2); return true;
    // src/unknown/C0/C0A443.asm:99 DEX
    case 0xC0A4F3: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:100 BNE @UNKNOWN11
    case 0xC0A4F4: cpu.execute_instruction<0xD0>(0x0000FA, 2); return true;
    // src/unknown/C0/C0A443.asm:101 STA $02
    case 0xC0A4F6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0A443.asm:103 LDA USE_SECOND_SPRITE_FRAME
    case 0xC0A4F8: cpu.execute_instruction<0xAD>(0x002892, 3); return true;
    // src/unknown/C0/C0A443.asm:104 BEQ @UNKNOWN13
    case 0xC0A4FB: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C0/C0A443.asm:105 INC $02
    case 0xC0A4FD: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0A443.asm:106 INC $02
    case 0xC0A4FF: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C0/C0A443.asm:108 LDA [$02]
    case 0xC0A501: cpu.execute_instruction<0xA7>(0x000002, 2); return true;
    // src/unknown/C0/C0A443.asm:109 AND #$0002
    case 0xC0A503: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/unknown/C0/C0A443.asm:109 AND #$0002
    // Overlapping static entry reached from 0xC0A503.
    case 0xC0A505: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0A443.asm:110 BNE @UNKNOWN14
    case 0xC0A506: cpu.execute_instruction<0xD0>(0x000035, 2); return true;
    // src/unknown/C0/C0A443.asm:111 LDA ENTITY_SURFACE_FLAGS,Y
    case 0xC0A508: cpu.execute_instruction<0xB9>(0x002BAA, 3); return true;
    // src/unknown/C0/C0A443.asm:111 LDA ENTITY_SURFACE_FLAGS,Y
    // Overlapping static entry reached from 0xC01F36.
    case 0xC0A50A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:112 STA $06
    case 0xC0A50B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0A443.asm:113 AND #$0008
    case 0xC0A50D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000008, 2); else cpu.execute_instruction<0x29>(0x000008, 3); return true;
    // src/unknown/C0/C0A443.asm:113 AND #$0008
    // Overlapping static entry reached from 0xC0A50D.
    case 0xC0A50F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A443.asm:114 BEQ @UNKNOWN14
    case 0xC0A510: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/unknown/C0/C0A443.asm:115 SEP #PROC_FLAGS::ACCUM8
    case 0xC0A512: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0A443.asm:116 LDA #$0003
    case 0xC0A514: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x008D03, 3); return true;
    // src/unknown/C0/C0A443.asm:117 STA DMA_COPY_MODE
    case 0xC0A516: cpu.execute_instruction<0x8D>(0x000091, 3); return true;
    // src/unknown/C0/C0A443.asm:117 STA DMA_COPY_MODE
    // Overlapping static entry reached from 0xC0A514.
    case 0xC0A517: cpu.execute_instruction<0x91>(0x000000, 2); return true;
    // src/unknown/C0/C0A443.asm:118 LDA #.BANKBYTE(UNKNOWN_C40BE8)
    case 0xC0A519: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x008DC4, 3); return true;
    // src/unknown/C0/C0A443.asm:119 STA DMA_COPY_RAM_SRC + 2
    case 0xC0A51B: cpu.execute_instruction<0x8D>(0x000096, 3); return true;
    // src/unknown/C0/C0A443.asm:119 STA DMA_COPY_RAM_SRC + 2
    // Overlapping static entry reached from 0xC0A519.
    case 0xC0A51C: cpu.execute_instruction<0x96>(0x000000, 2); return true;
    // src/unknown/C0/C0A443.asm:120 REP #PROC_FLAGS::ACCUM8
    case 0xC0A51E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0A443.asm:121 LDA #.LOWORD(UNKNOWN_C40BE8)
    case 0xC0A520: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E8, 2); else cpu.execute_instruction<0xA9>(0x000BE8, 3); return true;
    // src/unknown/C0/C0A443.asm:121 LDA #.LOWORD(UNKNOWN_C40BE8)
    // Overlapping static entry reached from 0xC0A520.
    case 0xC0A522: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:122 STA DMA_COPY_RAM_SRC
    case 0xC0A523: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // src/unknown/C0/C0A443.asm:123 JSL UNKNOWN_C0A56E
    case 0xC0A526: cpu.execute_instruction<0x22>(0xC0A56E, 4); return true;
    // src/unknown/C0/C0A443.asm:124 DEC $00
    case 0xC0A52A: cpu.execute_instruction<0xC6>(0x000000, 2); return true;
    // src/unknown/C0/C0A443.asm:125 BEQ @UNKNOWN16
    case 0xC0A52C: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // src/unknown/C0/C0A443.asm:126 LDA $06
    case 0xC0A52E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0A443.asm:127 AND #$0004
    case 0xC0A530: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/unknown/C0/C0A443.asm:127 AND #$0004
    // Overlapping static entry reached from 0xC0A530.
    case 0xC0A532: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A443.asm:128 BEQ @UNKNOWN14
    case 0xC0A533: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C0A443.asm:129 JSL UNKNOWN_C0A56E
    case 0xC0A535: cpu.execute_instruction<0x22>(0xC0A56E, 4); return true;
    // src/unknown/C0/C0A443.asm:130 DEC $00
    case 0xC0A539: cpu.execute_instruction<0xC6>(0x000000, 2); return true;
    // src/unknown/C0/C0A443.asm:131 BEQ @UNKNOWN16
    case 0xC0A53B: cpu.execute_instruction<0xF0>(0x000030, 2); return true;
    // src/unknown/C0/C0A443.asm:133 LDY $08
    case 0xC0A53D: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // src/unknown/C0/C0A443.asm:134 LDA [$02]
    case 0xC0A53F: cpu.execute_instruction<0xA7>(0x000002, 2); return true;
    // src/unknown/C0/C0A443.asm:135 STA ENTITY_CURRENT_DISPLAYED_SPRITES,Y
    case 0xC0A541: cpu.execute_instruction<0x99>(0x00341A, 3); return true;
    // src/unknown/C0/C0A443.asm:136 AND #$FFF0
    case 0xC0A544: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x00FFF0, 3); return true;
    // src/unknown/C0/C0A443.asm:136 AND #$FFF0
    // Overlapping static entry reached from 0xC0A544.
    case 0xC0A546: cpu.execute_instruction<0xFF>(0x00948D, 4); return true;
    // src/unknown/C0/C0A443.asm:137 STA DMA_COPY_RAM_SRC
    case 0xC0A547: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // src/unknown/C0/C0A443.asm:138 SEP #PROC_FLAGS::ACCUM8
    case 0xC0A54A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0A443.asm:139 LDA #$0000
    case 0xC0A54C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008D00, 3); return true;
    // src/unknown/C0/C0A443.asm:140 STA DMA_COPY_MODE
    case 0xC0A54E: cpu.execute_instruction<0x8D>(0x000091, 3); return true;
    // src/unknown/C0/C0A443.asm:140 STA DMA_COPY_MODE
    // Overlapping static entry reached from 0xC0A54C.
    case 0xC0A54F: cpu.execute_instruction<0x91>(0x000000, 2); return true;
    // src/unknown/C0/C0A443.asm:141 LDA ENTITY_GRAPHICS_SPRITE_BANK,Y
    case 0xC0A551: cpu.execute_instruction<0xB9>(0x002A42, 3); return true;
    // src/unknown/C0/C0A443.asm:142 STA DMA_COPY_RAM_SRC + 2
    case 0xC0A554: cpu.execute_instruction<0x8D>(0x000096, 3); return true;
    // src/unknown/C0/C0A443.asm:143 REP #PROC_FLAGS::ACCUM8
    case 0xC0A557: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0A443.asm:145 JSL UNKNOWN_C0A56E
    case 0xC0A559: cpu.execute_instruction<0x22>(0xC0A56E, 4); return true;
    // src/unknown/C0/C0A443.asm:146 DEC $00
    case 0xC0A55D: cpu.execute_instruction<0xC6>(0x000000, 2); return true;
    // src/unknown/C0/C0A443.asm:147 BEQ @UNKNOWN16
    case 0xC0A55F: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C0A443.asm:148 LDA DMA_COPY_RAM_SRC
    case 0xC0A561: cpu.execute_instruction<0xAD>(0x000094, 3); return true;
    // src/unknown/C0/C0A443.asm:149 CLC
    case 0xC0A564: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A443.asm:150 ADC DMA_COPY_SIZE
    case 0xC0A565: cpu.execute_instruction<0x6D>(0x000092, 3); return true;
    // src/unknown/C0/C0A443.asm:151 STA DMA_COPY_RAM_SRC
    case 0xC0A568: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // src/unknown/C0/C0A443.asm:152 BRA @UNKNOWN15
    case 0xC0A56B: cpu.execute_instruction<0x80>(0x0000EC, 2); return true;
    // src/unknown/C0/C0A443.asm:154 RTL
    case 0xC0A56D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A56E.asm (unresolved).
bool execute_unresolved_c0_c0a56e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A56E.asm:3 LDA DMA_COPY_SIZE
    case 0xC0A56E: cpu.execute_instruction<0xAD>(0x000092, 3); return true;
    // src/unknown/C0/C0A56E.asm:4 LSR
    case 0xC0A571: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:5 CLC
    case 0xC0A572: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:6 ADC DMA_COPY_VRAM_DEST
    case 0xC0A573: cpu.execute_instruction<0x6D>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:7 DEC
    case 0xC0A576: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:8 EOR DMA_COPY_VRAM_DEST
    case 0xC0A577: cpu.execute_instruction<0x4D>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:9 AND #$0100
    case 0xC0A57A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/unknown/C0/C0A56E.asm:9 AND #$0100
    // Overlapping static entry reached from 0xC0A57A.
    case 0xC0A57C: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A56E.asm:10 BEQ @UNKNOWN0
    case 0xC0A57D: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // src/unknown/C0/C0A56E.asm:10 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC0A57C.
    case 0xC0A57E: cpu.execute_instruction<0x4F>(0x0094AD, 4); return true;
    // src/unknown/C0/C0A56E.asm:11 LDA DMA_COPY_RAM_SRC
    case 0xC0A57F: cpu.execute_instruction<0xAD>(0x000094, 3); return true;
    // src/unknown/C0/C0A56E.asm:12 PHA
    case 0xC0A582: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:13 LDA DMA_COPY_SIZE
    case 0xC0A583: cpu.execute_instruction<0xAD>(0x000092, 3); return true;
    // src/unknown/C0/C0A56E.asm:14 PHA
    case 0xC0A586: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:15 LDA DMA_COPY_VRAM_DEST
    case 0xC0A587: cpu.execute_instruction<0xAD>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:16 PHA
    case 0xC0A58A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:17 CLC
    case 0xC0A58B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:18 ADC #$0100
    case 0xC0A58C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000100, 3); return true;
    // src/unknown/C0/C0A56E.asm:18 ADC #$0100
    // Overlapping static entry reached from 0xC0A58C.
    case 0xC0A58E: cpu.execute_instruction<0x01>(0x000029, 2); return true;
    // src/unknown/C0/C0A56E.asm:19 AND #$FF00
    case 0xC0A58F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/unknown/C0/C0A56E.asm:19 AND #$FF00
    // Overlapping static entry reached from 0xC0A58E.
    case 0xC0A590: cpu.execute_instruction<0x00>(0x0000FF, 2); return true;
    // src/unknown/C0/C0A56E.asm:19 AND #$FF00
    // Overlapping static entry reached from 0xC0A58F.
    case 0xC0A591: cpu.execute_instruction<0xFF>(0xED3848, 4); return true;
    // src/unknown/C0/C0A56E.asm:20 PHA
    case 0xC0A592: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:21 SEC
    case 0xC0A593: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:22 SBC DMA_COPY_VRAM_DEST
    case 0xC0A594: cpu.execute_instruction<0xED>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:22 SBC DMA_COPY_VRAM_DEST
    // Overlapping static entry reached from 0xC0A591.
    case 0xC0A595: cpu.execute_instruction<0x97>(0x000000, 2); return true;
    // src/unknown/C0/C0A56E.asm:23 ASL
    case 0xC0A597: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:24 STA DMA_COPY_SIZE
    case 0xC0A598: cpu.execute_instruction<0x8D>(0x000092, 3); return true;
    // src/unknown/C0/C0A56E.asm:25 JSL PREPARE_VRAM_COPY_COMMON
    case 0xC0A59B: cpu.execute_instruction<0x22>(0xC08643, 4); return true;
    // src/unknown/C0/C0A56E.asm:27 LDA DMA_COPY_RAM_SRC
    case 0xC0A59F: cpu.execute_instruction<0xAD>(0x000094, 3); return true;
    // src/unknown/C0/C0A56E.asm:28 CLC
    case 0xC0A5A2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:29 ADC DMA_COPY_SIZE
    case 0xC0A5A3: cpu.execute_instruction<0x6D>(0x000092, 3); return true;
    // src/unknown/C0/C0A56E.asm:30 STA DMA_COPY_RAM_SRC
    case 0xC0A5A6: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // src/unknown/C0/C0A56E.asm:31 PLA
    case 0xC0A5A9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:32 CLC
    case 0xC0A5AA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:33 ADC #$0100
    case 0xC0A5AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000100, 3); return true;
    // src/unknown/C0/C0A56E.asm:33 ADC #$0100
    // Overlapping static entry reached from 0xC0A5AB.
    case 0xC0A5AD: cpu.execute_instruction<0x01>(0x00008D, 2); return true;
    // src/unknown/C0/C0A56E.asm:34 STA DMA_COPY_VRAM_DEST
    case 0xC0A5AE: cpu.execute_instruction<0x8D>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:34 STA DMA_COPY_VRAM_DEST
    // Overlapping static entry reached from 0xC0A5AD.
    case 0xC0A5AF: cpu.execute_instruction<0x97>(0x000000, 2); return true;
    // src/unknown/C0/C0A56E.asm:35 PLX
    case 0xC0A5B1: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:36 PLA
    case 0xC0A5B2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:37 PHA
    case 0xC0A5B3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:38 PHX
    case 0xC0A5B4: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:39 SEC
    case 0xC0A5B5: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:40 SBC DMA_COPY_SIZE
    case 0xC0A5B6: cpu.execute_instruction<0xED>(0x000092, 3); return true;
    // src/unknown/C0/C0A56E.asm:41 STA DMA_COPY_SIZE
    case 0xC0A5B9: cpu.execute_instruction<0x8D>(0x000092, 3); return true;
    // src/unknown/C0/C0A56E.asm:42 JSL PREPARE_VRAM_COPY_COMMON
    case 0xC0A5BC: cpu.execute_instruction<0x22>(0xC08643, 4); return true;
    // src/unknown/C0/C0A56E.asm:44 PLA
    case 0xC0A5C0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:45 STA DMA_COPY_VRAM_DEST
    case 0xC0A5C1: cpu.execute_instruction<0x8D>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:46 PLA
    case 0xC0A5C4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:47 STA DMA_COPY_SIZE
    case 0xC0A5C5: cpu.execute_instruction<0x8D>(0x000092, 3); return true;
    // src/unknown/C0/C0A56E.asm:48 PLA
    case 0xC0A5C8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:49 STA DMA_COPY_RAM_SRC
    case 0xC0A5C9: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // src/unknown/C0/C0A56E.asm:50 BRA @UNKNOWN1
    case 0xC0A5CC: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C0/C0A56E.asm:52 JSL PREPARE_VRAM_COPY_COMMON
    case 0xC0A5CE: cpu.execute_instruction<0x22>(0xC08643, 4); return true;
    // src/unknown/C0/C0A56E.asm:55 LDA DMA_COPY_VRAM_DEST
    case 0xC0A5D2: cpu.execute_instruction<0xAD>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:56 AND #$0100
    case 0xC0A5D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/unknown/C0/C0A56E.asm:56 AND #$0100
    // Overlapping static entry reached from 0xC0A5D5.
    case 0xC0A5D7: cpu.execute_instruction<0x01>(0x0000D0, 2); return true;
    // src/unknown/C0/C0A56E.asm:57 BNE @UNKNOWN2
    case 0xC0A5D8: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C0/C0A56E.asm:57 BNE @UNKNOWN2
    // Overlapping static entry reached from 0xC0A5D7.
    case 0xC0A5D9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:58 LDA DMA_COPY_VRAM_DEST
    case 0xC0A5DA: cpu.execute_instruction<0xAD>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:59 CLC
    case 0xC0A5DD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:60 ADC #$0100
    case 0xC0A5DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000100, 3); return true;
    // src/unknown/C0/C0A56E.asm:60 ADC #$0100
    // Overlapping static entry reached from 0xC0A5DE.
    case 0xC0A5E0: cpu.execute_instruction<0x01>(0x00008D, 2); return true;
    // src/unknown/C0/C0A56E.asm:61 STA DMA_COPY_VRAM_DEST
    case 0xC0A5E1: cpu.execute_instruction<0x8D>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:61 STA DMA_COPY_VRAM_DEST
    // Overlapping static entry reached from 0xC0A5E0.
    case 0xC0A5E2: cpu.execute_instruction<0x97>(0x000000, 2); return true;
    // src/unknown/C0/C0A56E.asm:62 RTL
    case 0xC0A5E4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:64 LDA DMA_COPY_SIZE
    case 0xC0A5E5: cpu.execute_instruction<0xAD>(0x000092, 3); return true;
    // src/unknown/C0/C0A56E.asm:65 CLC
    case 0xC0A5E8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:66 ADC #$0020
    case 0xC0A5E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/unknown/C0/C0A56E.asm:66 ADC #$0020
    // Overlapping static entry reached from 0xC0A5E9.
    case 0xC0A5EB: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C0/C0A56E.asm:67 AND #$FFC0
    case 0xC0A5EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x00FFC0, 3); return true;
    // src/unknown/C0/C0A56E.asm:67 AND #$FFC0
    // Overlapping static entry reached from 0xC0A5EC.
    case 0xC0A5EE: cpu.execute_instruction<0xFF>(0x6D184A, 4); return true;
    // src/unknown/C0/C0A56E.asm:68 LSR
    case 0xC0A5EF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:69 CLC
    case 0xC0A5F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:70 ADC DMA_COPY_VRAM_DEST
    case 0xC0A5F1: cpu.execute_instruction<0x6D>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:70 ADC DMA_COPY_VRAM_DEST
    // Overlapping static entry reached from 0xC0A5EE.
    case 0xC0A5F2: cpu.execute_instruction<0x97>(0x000000, 2); return true;
    // src/unknown/C0/C0A56E.asm:71 PHA
    case 0xC0A5F4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:72 EOR DMA_COPY_VRAM_DEST
    case 0xC0A5F5: cpu.execute_instruction<0x4D>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:73 AND #$0100
    case 0xC0A5F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/unknown/C0/C0A56E.asm:73 AND #$0100
    // Overlapping static entry reached from 0xC0A5F8.
    case 0xC0A5FA: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A56E.asm:74 BEQ @UNKNOWN3
    case 0xC0A5FB: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C0/C0A56E.asm:74 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC0A5FA.
    case 0xC0A5FC: cpu.execute_instruction<0x05>(0x000068, 2); return true;
    // src/unknown/C0/C0A56E.asm:75 PLA
    case 0xC0A5FD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:76 STA DMA_COPY_VRAM_DEST
    case 0xC0A5FE: cpu.execute_instruction<0x8D>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:77 RTL
    case 0xC0A601: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:79 PLA
    case 0xC0A602: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:80 SEC
    case 0xC0A603: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A56E.asm:81 SBC #$0100
    case 0xC0A604: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000100, 3); return true;
    // src/unknown/C0/C0A56E.asm:81 SBC #$0100
    // Overlapping static entry reached from 0xC0A604.
    case 0xC0A606: cpu.execute_instruction<0x01>(0x00008D, 2); return true;
    // src/unknown/C0/C0A56E.asm:82 STA DMA_COPY_VRAM_DEST
    case 0xC0A607: cpu.execute_instruction<0x8D>(0x000097, 3); return true;
    // src/unknown/C0/C0A56E.asm:82 STA DMA_COPY_VRAM_DEST
    // Overlapping static entry reached from 0xC0A606.
    case 0xC0A608: cpu.execute_instruction<0x97>(0x000000, 2); return true;
    // src/unknown/C0/C0A56E.asm:83 RTL
    case 0xC0A60A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A643.asm (unresolved).
bool execute_unresolved_c0_c0a643_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A643.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A643: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A643.asm:4 STY $94
    case 0xC0A647: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A643.asm:5 JSL SET_DIRECTION
    case 0xC0A649: cpu.execute_instruction<0x22>(0xC0A65F, 4); return true;
    // src/unknown/C0/C0A643.asm:6 STA ENTITY_NPC_IDS,X
    case 0xC0A64D: cpu.execute_instruction<0x9D>(0x002C9A, 3); return true;
    // src/unknown/C0/C0A643.asm:7 RTL
    case 0xC0A650: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A66D.asm (unresolved).
bool execute_unresolved_c0_c0a66d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A66D.asm:3 LDX $88
    case 0xC0A66D: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A66D.asm:4 STA ENTITY_DIRECTIONS,X
    case 0xC0A66F: cpu.execute_instruction<0x9D>(0x002AF6, 3); return true;
    // src/unknown/C0/C0A66D.asm:5 RTL
    case 0xC0A672: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A673.asm (unresolved).
bool execute_unresolved_c0_c0a673_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A673.asm:3 LDX $88
    case 0xC0A673: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A673.asm:3 LDX $88
    // Overlapping static entry reached from 0xC0A6D5.
    case 0xC0A674: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C0A673.asm:4 LDA ENTITY_DIRECTIONS,X
    case 0xC0A675: cpu.execute_instruction<0xBD>(0x002AF6, 3); return true;
    // src/unknown/C0/C0A673.asm:5 RTL
    case 0xC0A678: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A685.asm (unresolved).
bool execute_unresolved_c0_c0a685_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A685.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A685: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A685.asm:4 STY $94
    case 0xC0A689: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A685.asm:6 LDX $88
    case 0xC0A68B: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A685.asm:7 STA ENTITY_MOVEMENT_SPEEDS,X
    case 0xC0A68D: cpu.execute_instruction<0x9D>(0x002B32, 3); return true;
    // src/unknown/C0/C0A685.asm:8 RTL
    case 0xC0A690: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A691.asm (unresolved).
bool execute_unresolved_c0_c0a691_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A691.asm:3 LDX $88
    case 0xC0A691: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A691.asm:4 LDA ENTITY_MOVEMENT_SPEEDS,X
    case 0xC0A693: cpu.execute_instruction<0xBD>(0x002B32, 3); return true;
    // src/unknown/C0/C0A691.asm:5 RTL
    case 0xC0A696: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A697.asm (unresolved).
bool execute_unresolved_c0_c0a697_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A697.asm:3 JSL MOVEMENT_DATA_READ8
    case 0xC0A697: cpu.execute_instruction<0x22>(0xC09D86, 4); return true;
    // src/unknown/C0/C0A697.asm:4 STY $94
    case 0xC0A69B: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A697.asm:5 JSL UNKNOWN_C0C83B
    case 0xC0A69D: cpu.execute_instruction<0x22>(0xC0C83B, 4); return true;
    // src/unknown/C0/C0A697.asm:6 RTL
    case 0xC0A6A1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A6A2.asm (unresolved).
bool execute_unresolved_c0_c0a6a2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A6A2.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A6A2: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A6A2.asm:4 STY $94
    case 0xC0A6A6: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A6A2.asm:5 JSL UNKNOWN_C0CA4E
    case 0xC0A6A8: cpu.execute_instruction<0x22>(0xC0CA4E, 4); return true;
    // src/unknown/C0/C0A6A2.asm:6 RTL
    case 0xC0A6AC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A6AD.asm (unresolved).
bool execute_unresolved_c0_c0a6ad_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A6AD.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A6AD: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A6AD.asm:4 STY $94
    case 0xC0A6B1: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A6AD.asm:5 JSL UNKNOWN_C0CBD3
    case 0xC0A6B3: cpu.execute_instruction<0x22>(0xC0CBD3, 4); return true;
    // src/unknown/C0/C0A6AD.asm:6 RTL
    case 0xC0A6B7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A6B8.asm (unresolved).
bool execute_unresolved_c0_c0a6b8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A6B8.asm:3 LDY #$0000
    case 0xC0A6B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0A6B8.asm:3 LDY #$0000
    // Overlapping static entry reached from 0xC0A6B8.
    case 0xC0A6BA: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C0/C0A6B8.asm:4 LDX $88
    case 0xC0A6BB: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A6B8.asm:5 LDA ENTITY_COLLIDED_OBJECTS,X
    case 0xC0A6BD: cpu.execute_instruction<0xBD>(0x00289E, 3); return true;
    // src/unknown/C0/C0A6B8.asm:6 BMI @UNKNOWN0
    case 0xC0A6C0: cpu.execute_instruction<0x30>(0x000001, 2); return true;
    // src/unknown/C0/C0A6B8.asm:7 DEY
    case 0xC0A6C2: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C0/C0A6B8.asm:9 TYA
    case 0xC0A6C3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0A6B8.asm:10 RTL
    case 0xC0A6C4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A6C5.asm (unresolved).
bool execute_unresolved_c0_c0a6c5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A6C5.asm:3 LDX $88
    case 0xC0A6C5: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A6C5.asm:4 LDA ENTITY_OBSTACLE_FLAGS,X
    case 0xC0A6C7: cpu.execute_instruction<0xBD>(0x0028DA, 3); return true;
    // src/unknown/C0/C0A6C5.asm:5 RTL
    case 0xC0A6CA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A6CB.asm (unresolved).
bool execute_unresolved_c0_c0a6cb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A6CB.asm:3 LDX $88
    case 0xC0A6CB: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A6CB.asm:4 LDA ENTITY_PATHFINDING_STATES,X
    case 0xC0A6CD: cpu.execute_instruction<0xBD>(0x002C5E, 3); return true;
    // src/unknown/C0/C0A6CB.asm:5 RTL
    case 0xC0A6D0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A6E3.asm (unresolved).
bool execute_unresolved_c0_c0a6e3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A6E3.asm:3 LDX $88
    case 0xC0A6E3: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A6E3.asm:4 STX SPRITE_UPDATE_ENTITY_OFFSET
    case 0xC0A6E5: cpu.execute_instruction<0x8E>(0x002896, 3); return true;
    // src/unknown/C0/C0A6E3.asm:5 LDA ENTITY_WALKING_STYLES,X
    case 0xC0A6E8: cpu.execute_instruction<0xBD>(0x002C22, 3); return true;
    // src/unknown/C0/C0A6E3.asm:6 XBA
    case 0xC0A6EB: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C0/C0A6E3.asm:7 ORA ENTITY_DIRECTIONS,X
    case 0xC0A6EC: cpu.execute_instruction<0x1D>(0x002AF6, 3); return true;
    // src/unknown/C0/C0A6E3.asm:8 CMP ENTITY_ANIMATION_FINGERPRINTS,X
    case 0xC0A6EF: cpu.execute_instruction<0xDD>(0x003456, 3); return true;
    // src/unknown/C0/C0A6E3.asm:9 BEQ @UNKNOWN0
    case 0xC0A6F2: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C0/C0A6E3.asm:10 STA ENTITY_ANIMATION_FINGERPRINTS,X
    case 0xC0A6F4: cpu.execute_instruction<0x9D>(0x003456, 3); return true;
    // src/unknown/C0/C0A6E3.asm:10 STA ENTITY_ANIMATION_FINGERPRINTS,X
    // Overlapping static entry reached from 0xC0A773.
    case 0xC0A6F5: cpu.execute_instruction<0x56>(0x000034, 2); return true;
    // src/unknown/C0/C0A6E3.asm:11 JSR UNKNOWN_C0A794
    case 0xC0A6F7: cpu.execute_instruction<0x20>(0x00A794, 3); return true;
    // src/unknown/C0/C0A6E3.asm:12 RTL
    case 0xC0A6FA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C0A6E3.asm:14 LDA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC0A6FB: cpu.execute_instruction<0xBD>(0x001002, 3); return true;
    // src/unknown/C0/C0A6E3.asm:15 BPL @UNKNOWN1
    case 0xC0A6FE: cpu.execute_instruction<0x10>(0x000008, 2); return true;
    // src/unknown/C0/C0A6E3.asm:16 AND #$FFFF ^ SPRITE_TABLE_10_FLAGS::UNKNOWN15
    case 0xC0A700: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C0A6E3.asm:16 AND #$FFFF ^ SPRITE_TABLE_10_FLAGS::UNKNOWN15
    // Overlapping static entry reached from 0xC0A700.
    case 0xC0A702: cpu.execute_instruction<0x7F>(0x10029D, 4); return true;
    // src/unknown/C0/C0A6E3.asm:17 STA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC0A703: cpu.execute_instruction<0x9D>(0x001002, 3); return true;
    // src/unknown/C0/C0A6E3.asm:18 BRA @UNKNOWN5
    case 0xC0A706: cpu.execute_instruction<0x80>(0x000048, 2); return true;
    // src/unknown/C0/C0A6E3.asm:20 AND #$2000
    case 0xC0A708: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x002000, 3); return true;
    // src/unknown/C0/C0A6E3.asm:20 AND #$2000
    // Overlapping static entry reached from 0xC0A708.
    case 0xC0A70A: cpu.execute_instruction<0x20>(0x000AF0, 3); return true;
    // src/unknown/C0/C0A6E3.asm:21 BEQ @UNKNOWN2
    case 0xC0A70B: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C0A6E3.asm:22 LDA ENTITY_ANIMATION_FRAME,X
    case 0xC0A70D: cpu.execute_instruction<0xBD>(0x0010F2, 3); return true;
    // src/unknown/C0/C0A6E3.asm:23 BEQ @UNKNOWN6
    case 0xC0A710: cpu.execute_instruction<0xF0>(0x000041, 2); return true;
    // src/unknown/C0/C0A6E3.asm:24 STZ ENTITY_ANIMATION_FRAME,X
    case 0xC0A712: cpu.execute_instruction<0x9E>(0x0010F2, 3); return true;
    // src/unknown/C0/C0A6E3.asm:25 BRA @UNKNOWN5
    case 0xC0A715: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // src/unknown/C0/C0A6E3.asm:27 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0A717: cpu.execute_instruction<0xAD>(0x005D60, 3); return true;
    // src/unknown/C0/C0A6E3.asm:28 BNE @UNKNOWN6
    case 0xC0A71A: cpu.execute_instruction<0xD0>(0x000037, 2); return true;
    // src/unknown/C0/C0A6E3.asm:29 DEC ENTITY_SCRIPT_VAR2_TABLE,X
    case 0xC0A71C: cpu.execute_instruction<0xDE>(0x000ED6, 3); return true;
    // src/unknown/C0/C0A6E3.asm:30 BMI @UNKNOWN3
    case 0xC0A71F: cpu.execute_instruction<0x30>(0x000002, 2); return true;
    // src/unknown/C0/C0A6E3.asm:31 BNE @UNKNOWN6
    case 0xC0A721: cpu.execute_instruction<0xD0>(0x000030, 2); return true;
    // src/unknown/C0/C0A6E3.asm:33 LDA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC0A723: cpu.execute_instruction<0xBD>(0x000F12, 3); return true;
    // src/unknown/C0/C0A6E3.asm:34 STA ENTITY_SCRIPT_VAR2_TABLE,X
    case 0xC0A726: cpu.execute_instruction<0x9D>(0x000ED6, 3); return true;
    // src/unknown/C0/C0A6E3.asm:35 LDA ENTITY_ANIMATION_FRAME,X
    case 0xC0A729: cpu.execute_instruction<0xBD>(0x0010F2, 3); return true;
    // src/unknown/C0/C0A6E3.asm:36 EOR #$0002
    case 0xC0A72C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000002, 2); else cpu.execute_instruction<0x49>(0x000002, 3); return true;
    // src/unknown/C0/C0A6E3.asm:36 EOR #$0002
    // Overlapping static entry reached from 0xC0A72C.
    case 0xC0A72E: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C0/C0A6E3.asm:37 STA ENTITY_ANIMATION_FRAME,X
    case 0xC0A72F: cpu.execute_instruction<0x9D>(0x0010F2, 3); return true;
    // src/unknown/C0/C0A6E3.asm:38 BNE @UNKNOWN5
    case 0xC0A732: cpu.execute_instruction<0xD0>(0x00001C, 2); return true;
    // src/unknown/C0/C0A6E3.asm:39 CPX FOOTSTEP_SOUND_IGNORE_ENTITY
    case 0xC0A734: cpu.execute_instruction<0xEC>(0x002898, 3); return true;
    // src/unknown/C0/C0A6E3.asm:40 BNE @UNKNOWN5
    case 0xC0A737: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/unknown/C0/C0A6E3.asm:41 LDX FOOTSTEP_SOUND_ID_OVERRIDE
    case 0xC0A739: cpu.execute_instruction<0xAE>(0x00289C, 3); return true;
    // src/unknown/C0/C0A6E3.asm:42 BNE @UNKNOWN4
    case 0xC0A73C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C0A6E3.asm:43 LDX FOOTSTEP_SOUND_ID
    case 0xC0A73E: cpu.execute_instruction<0xAE>(0x00289A, 3); return true;
    // src/unknown/C0/C0A6E3.asm:45 LDA f:FOOTSTEP_SOUND_TABLE,X
    case 0xC0A741: cpu.execute_instruction<0xBF>(0xC40BD4, 4); return true;
    // src/unknown/C0/C0A6E3.asm:46 BEQ @UNKNOWN5
    case 0xC0A745: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C0/C0A6E3.asm:47 LDX DISABLED_TRANSITIONS
    case 0xC0A747: cpu.execute_instruction<0xAE>(0x00B4B6, 3); return true;
    // src/unknown/C0/C0A6E3.asm:48 BNE @UNKNOWN5
    case 0xC0A74A: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C0/C0A6E3.asm:49 JSL PLAY_SOUND
    case 0xC0A74C: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/unknown/C0/C0A6E3.asm:51 JSR UNKNOWN_C0A794
    case 0xC0A750: cpu.execute_instruction<0x20>(0x00A794, 3); return true;
    // src/unknown/C0/C0A6E3.asm:53 LDX $88
    case 0xC0A753: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0A6E3.asm:54 LDA PSI_TELEPORT_DESTINATION
    case 0xC0A755: cpu.execute_instruction<0xAD>(0x009F3F, 3); return true;
    // src/unknown/C0/C0A6E3.asm:55 BNE @UNKNOWN10
    case 0xC0A758: cpu.execute_instruction<0xD0>(0x000025, 2); return true;
    // src/unknown/C0/C0A6E3.asm:56 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC0A75A: cpu.execute_instruction<0xAD>(0x005D58, 3); return true;
    // src/unknown/C0/C0A6E3.asm:57 BEQ @UNKNOWN10
    case 0xC0A75D: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/unknown/C0/C0A6E3.asm:58 CMP #$002D
    case 0xC0A75F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00002D, 2); else cpu.execute_instruction<0xC9>(0x00002D, 3); return true;
    // src/unknown/C0/C0A6E3.asm:58 CMP #$002D
    // Overlapping static entry reached from 0xC0A75F.
    case 0xC0A761: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C0/C0A6E3.asm:59 BCS @UNKNOWN7
    case 0xC0A762: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C0/C0A6E3.asm:60 AND #$0003
    case 0xC0A764: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C0/C0A6E3.asm:60 AND #$0003
    // Overlapping static entry reached from 0xC0A764.
    case 0xC0A766: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0A6E3.asm:61 BNE @UNKNOWN8
    case 0xC0A767: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C0/C0A6E3.asm:63 AND #$0001
    case 0xC0A769: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0A6E3.asm:63 AND #$0001
    // Overlapping static entry reached from 0xC0A769.
    case 0xC0A76B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0A6E3.asm:64 BNE @UNKNOWN8
    case 0xC0A76C: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/unknown/C0/C0A6E3.asm:65 LDA ENTITY_SPRITEMAP_POINTER_HIGH,X
    case 0xC0A76E: cpu.execute_instruction<0xBD>(0x00116A, 3); return true;
    // src/unknown/C0/C0A6E3.asm:66 ORA #$8000
    case 0xC0A771: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/unknown/C0/C0A6E3.asm:66 ORA #$8000
    // Overlapping static entry reached from 0xC0A771.
    case 0xC0A773: cpu.execute_instruction<0x80>(0x000080, 2); return true;
    // src/unknown/C0/C0A6E3.asm:67 BRA @UNKNOWN9
    case 0xC0A774: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/unknown/C0/C0A6E3.asm:69 LDA ENTITY_SPRITEMAP_POINTER_HIGH,X
    case 0xC0A776: cpu.execute_instruction<0xBD>(0x00116A, 3); return true;
    // src/unknown/C0/C0A6E3.asm:70 AND #$7FFF
    case 0xC0A779: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C0/C0A6E3.asm:70 AND #$7FFF
    // Overlapping static entry reached from 0xC0A779.
    case 0xC0A77B: cpu.execute_instruction<0x7F>(0x116A9D, 4); return true;
    // src/unknown/C0/C0A6E3.asm:72 STA ENTITY_SPRITEMAP_POINTER_HIGH,X
    case 0xC0A77C: cpu.execute_instruction<0x9D>(0x00116A, 3); return true;
    // src/unknown/C0/C0A6E3.asm:74 RTL
    case 0xC0A77F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A780.asm (unresolved).
bool execute_unresolved_c0_c0a780_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A780.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC0A780: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0A780.asm:4 PHD
    case 0xC0A782: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0A780.asm:5 PHA
    case 0xC0A783: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A780.asm:6 TDC
    case 0xC0A784: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C0/C0A780.asm:7 SEC
    case 0xC0A785: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C0/C0A780.asm:8 SBC #$0008
    case 0xC0A786: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/unknown/C0/C0A780.asm:8 SBC #$0008
    // Overlapping static entry reached from 0xC0A786.
    case 0xC0A788: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C0/C0A780.asm:9 TCD
    case 0xC0A789: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C0/C0A780.asm:10 PLA
    case 0xC0A78A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A780.asm:11 ASL
    case 0xC0A78B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A780.asm:12 STA SPRITE_UPDATE_ENTITY_OFFSET
    case 0xC0A78C: cpu.execute_instruction<0x8D>(0x002896, 3); return true;
    // src/unknown/C0/C0A780.asm:13 JSR UNKNOWN_C0A794
    case 0xC0A78F: cpu.execute_instruction<0x20>(0x00A794, 3); return true;
    // src/unknown/C0/C0A780.asm:14 PLD
    case 0xC0A792: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C0/C0A780.asm:15 RTL
    case 0xC0A793: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A794.asm (unresolved).
bool execute_unresolved_c0_c0a794_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A794.asm:3 LDY SPRITE_UPDATE_ENTITY_OFFSET
    case 0xC0A794: cpu.execute_instruction<0xAC>(0x002896, 3); return true;
    // src/unknown/C0/C0A794.asm:4 LDA ENTITY_TILE_HEIGHTS,Y
    case 0xC0A797: cpu.execute_instruction<0xB9>(0x002ABA, 3); return true;
    // src/unknown/C0/C0A794.asm:5 STA $00
    case 0xC0A79A: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C0/C0A794.asm:6 LDA ENTITY_BYTE_WIDTHS,Y
    case 0xC0A79C: cpu.execute_instruction<0xB9>(0x002A7E, 3); return true;
    // src/unknown/C0/C0A794.asm:7 STA DMA_COPY_SIZE
    case 0xC0A79F: cpu.execute_instruction<0x8D>(0x000092, 3); return true;
    // src/unknown/C0/C0A794.asm:8 LDA ENTITY_VRAM_ADDRESS,Y
    case 0xC0A7A2: cpu.execute_instruction<0xB9>(0x00298E, 3); return true;
    // src/unknown/C0/C0A794.asm:9 STA DMA_COPY_VRAM_DEST
    case 0xC0A7A5: cpu.execute_instruction<0x8D>(0x000097, 3); return true;
    // src/unknown/C0/C0A794.asm:10 LDA ENTITY_GRAPHICS_PTR_HIGH,Y
    case 0xC0A7A8: cpu.execute_instruction<0xB9>(0x002A06, 3); return true;
    // src/unknown/C0/C0A794.asm:11 STA $04
    case 0xC0A7AB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0A794.asm:12 LDA ENTITY_DIRECTIONS,Y
    case 0xC0A7AD: cpu.execute_instruction<0xB9>(0x002AF6, 3); return true;
    // src/unknown/C0/C0A794.asm:13 ASL
    case 0xC0A7B0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A794.asm:14 TAX
    case 0xC0A7B1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A794.asm:15 LDA f:SPRITE_DIRECTION_MAPPING_8_DIRECTION,X
    case 0xC0A7B2: cpu.execute_instruction<0xBF>(0xC0A623, 4); return true;
    // src/unknown/C0/C0A794.asm:16 ASL
    case 0xC0A7B6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A794.asm:17 ASL
    case 0xC0A7B7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0A794.asm:18 CLC
    case 0xC0A7B8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A794.asm:19 ADC ENTITY_GRAPHICS_PTR_LOW,Y
    case 0xC0A7B9: cpu.execute_instruction<0x79>(0x0029CA, 3); return true;
    // src/unknown/C0/C0A794.asm:20 ADC ENTITY_ANIMATION_FRAME,Y
    case 0xC0A7BC: cpu.execute_instruction<0x79>(0x0010F2, 3); return true;
    // src/unknown/C0/C0A794.asm:21 STA $02
    case 0xC0A7BF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0A794.asm:22 LDA [$02]
    case 0xC0A7C1: cpu.execute_instruction<0xA7>(0x000002, 2); return true;
    // src/unknown/C0/C0A794.asm:23 AND #$0002
    case 0xC0A7C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000002, 2); else cpu.execute_instruction<0x29>(0x000002, 3); return true;
    // src/unknown/C0/C0A794.asm:23 AND #$0002
    // Overlapping static entry reached from 0xC0A7C3.
    case 0xC0A7C5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0A794.asm:24 BNE @UNKNOWN0
    case 0xC0A7C6: cpu.execute_instruction<0xD0>(0x000035, 2); return true;
    // src/unknown/C0/C0A794.asm:25 LDA ENTITY_SURFACE_FLAGS,Y
    case 0xC0A7C8: cpu.execute_instruction<0xB9>(0x002BAA, 3); return true;
    // src/unknown/C0/C0A794.asm:26 STA $06
    case 0xC0A7CB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0A794.asm:27 AND #$0008
    case 0xC0A7CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000008, 2); else cpu.execute_instruction<0x29>(0x000008, 3); return true;
    // src/unknown/C0/C0A794.asm:27 AND #$0008
    // Overlapping static entry reached from 0xC0A7CD.
    case 0xC0A7CF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A794.asm:28 BEQ @UNKNOWN0
    case 0xC0A7D0: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/unknown/C0/C0A794.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC0A7D2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0A794.asm:30 LDA #$0003
    case 0xC0A7D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x008D03, 3); return true;
    // src/unknown/C0/C0A794.asm:31 STA DMA_COPY_MODE
    case 0xC0A7D6: cpu.execute_instruction<0x8D>(0x000091, 3); return true;
    // src/unknown/C0/C0A794.asm:31 STA DMA_COPY_MODE
    // Overlapping static entry reached from 0xC0A7D4.
    case 0xC0A7D7: cpu.execute_instruction<0x91>(0x000000, 2); return true;
    // src/unknown/C0/C0A794.asm:32 LDA #.BANKBYTE(UNKNOWN_C40BE8)
    case 0xC0A7D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x008DC4, 3); return true;
    // src/unknown/C0/C0A794.asm:33 STA DMA_COPY_RAM_SRC + 2
    case 0xC0A7DB: cpu.execute_instruction<0x8D>(0x000096, 3); return true;
    // src/unknown/C0/C0A794.asm:33 STA DMA_COPY_RAM_SRC + 2
    // Overlapping static entry reached from 0xC0A7D9.
    case 0xC0A7DC: cpu.execute_instruction<0x96>(0x000000, 2); return true;
    // src/unknown/C0/C0A794.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC0A7DE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0A794.asm:35 LDA #.LOWORD(UNKNOWN_C40BE8)
    case 0xC0A7E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E8, 2); else cpu.execute_instruction<0xA9>(0x000BE8, 3); return true;
    // src/unknown/C0/C0A794.asm:35 LDA #.LOWORD(UNKNOWN_C40BE8)
    // Overlapping static entry reached from 0xC0A7E0.
    case 0xC0A7E2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C0/C0A794.asm:36 STA DMA_COPY_RAM_SRC
    case 0xC0A7E3: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // src/unknown/C0/C0A794.asm:37 JSL UNKNOWN_C0A56E
    case 0xC0A7E6: cpu.execute_instruction<0x22>(0xC0A56E, 4); return true;
    // src/unknown/C0/C0A794.asm:38 DEC $00
    case 0xC0A7EA: cpu.execute_instruction<0xC6>(0x000000, 2); return true;
    // src/unknown/C0/C0A794.asm:39 BEQ @UNKNOWN2
    case 0xC0A7EC: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // src/unknown/C0/C0A794.asm:40 LDA $06
    case 0xC0A7EE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C0/C0A794.asm:41 AND #$0004
    case 0xC0A7F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/unknown/C0/C0A794.asm:41 AND #$0004
    // Overlapping static entry reached from 0xC0A7F0.
    case 0xC0A7F2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0A794.asm:42 BEQ @UNKNOWN0
    case 0xC0A7F3: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C0/C0A794.asm:43 JSL UNKNOWN_C0A56E
    case 0xC0A7F5: cpu.execute_instruction<0x22>(0xC0A56E, 4); return true;
    // src/unknown/C0/C0A794.asm:44 DEC $00
    case 0xC0A7F9: cpu.execute_instruction<0xC6>(0x000000, 2); return true;
    // src/unknown/C0/C0A794.asm:45 BEQ @UNKNOWN2
    case 0xC0A7FB: cpu.execute_instruction<0xF0>(0x000031, 2); return true;
    // src/unknown/C0/C0A794.asm:47 LDY SPRITE_UPDATE_ENTITY_OFFSET
    case 0xC0A7FD: cpu.execute_instruction<0xAC>(0x002896, 3); return true;
    // src/unknown/C0/C0A794.asm:48 LDA [$02]
    case 0xC0A800: cpu.execute_instruction<0xA7>(0x000002, 2); return true;
    // src/unknown/C0/C0A794.asm:49 STA ENTITY_CURRENT_DISPLAYED_SPRITES,Y
    case 0xC0A802: cpu.execute_instruction<0x99>(0x00341A, 3); return true;
    // src/unknown/C0/C0A794.asm:50 AND #$FFFE
    case 0xC0A805: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FE, 2); else cpu.execute_instruction<0x29>(0x00FFFE, 3); return true;
    // src/unknown/C0/C0A794.asm:50 AND #$FFFE
    // Overlapping static entry reached from 0xC0A805.
    case 0xC0A807: cpu.execute_instruction<0xFF>(0x00948D, 4); return true;
    // src/unknown/C0/C0A794.asm:51 STA DMA_COPY_RAM_SRC
    case 0xC0A808: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // src/unknown/C0/C0A794.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC0A80B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0A794.asm:53 LDA #$0000
    case 0xC0A80D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008D00, 3); return true;
    // src/unknown/C0/C0A794.asm:54 STA DMA_COPY_MODE
    case 0xC0A80F: cpu.execute_instruction<0x8D>(0x000091, 3); return true;
    // src/unknown/C0/C0A794.asm:54 STA DMA_COPY_MODE
    // Overlapping static entry reached from 0xC0A80D.
    case 0xC0A810: cpu.execute_instruction<0x91>(0x000000, 2); return true;
    // src/unknown/C0/C0A794.asm:55 LDA ENTITY_GRAPHICS_SPRITE_BANK,Y
    case 0xC0A812: cpu.execute_instruction<0xB9>(0x002A42, 3); return true;
    // src/unknown/C0/C0A794.asm:56 STA DMA_COPY_RAM_SRC + 2
    case 0xC0A815: cpu.execute_instruction<0x8D>(0x000096, 3); return true;
    // src/unknown/C0/C0A794.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0xC0A818: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0A794.asm:59 JSL UNKNOWN_C0A56E
    case 0xC0A81A: cpu.execute_instruction<0x22>(0xC0A56E, 4); return true;
    // src/unknown/C0/C0A794.asm:60 DEC $00
    case 0xC0A81E: cpu.execute_instruction<0xC6>(0x000000, 2); return true;
    // src/unknown/C0/C0A794.asm:61 BEQ @UNKNOWN2
    case 0xC0A820: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C0/C0A794.asm:62 LDA DMA_COPY_RAM_SRC
    case 0xC0A822: cpu.execute_instruction<0xAD>(0x000094, 3); return true;
    // src/unknown/C0/C0A794.asm:63 CLC
    case 0xC0A825: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0A794.asm:64 ADC DMA_COPY_SIZE
    case 0xC0A826: cpu.execute_instruction<0x6D>(0x000092, 3); return true;
    // src/unknown/C0/C0A794.asm:65 STA DMA_COPY_RAM_SRC
    case 0xC0A829: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // src/unknown/C0/C0A794.asm:66 BRA @UNKNOWN1
    case 0xC0A82C: cpu.execute_instruction<0x80>(0x0000EC, 2); return true;
    // src/unknown/C0/C0A794.asm:68 RTS
    case 0xC0A82E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A841.asm (unresolved).
bool execute_unresolved_c0_c0a841_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A841.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A841: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A841.asm:4 STY $94
    case 0xC0A845: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A841.asm:5 JSL PLAY_SOUND
    case 0xC0A847: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/unknown/C0/C0A841.asm:6 RTL
    case 0xC0A84B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A84C.asm (unresolved).
bool execute_unresolved_c0_c0a84c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A84C.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A84C: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A84C.asm:4 STY $94
    case 0xC0A850: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A84C.asm:5 JSL GET_EVENT_FLAG
    case 0xC0A852: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/unknown/C0/C0A84C.asm:6 RTL
    case 0xC0A856: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A857.asm (unresolved).
bool execute_unresolved_c0_c0a857_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A857.asm:3 PHA
    case 0xC0A857: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A857.asm:4 JSL MOVEMENT_DATA_READ16
    case 0xC0A858: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A857.asm:5 STY $94
    case 0xC0A85C: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A857.asm:6 PLX
    case 0xC0A85E: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0A857.asm:7 JSL SET_EVENT_FLAG
    case 0xC0A85F: cpu.execute_instruction<0x22>(0xC2165E, 4); return true;
    // src/unknown/C0/C0A857.asm:8 RTL
    case 0xC0A863: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A864.asm (unresolved).
bool execute_unresolved_c0_c0a864_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A864.asm:3 JSL MOVEMENT_DATA_READ8
    case 0xC0A864: cpu.execute_instruction<0x22>(0xC09D86, 4); return true;
    // src/unknown/C0/C0A864.asm:4 STY $94
    case 0xC0A868: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A864.asm:5 JSL UNKNOWN_C46C9B
    case 0xC0A86A: cpu.execute_instruction<0x22>(0xC46C9B, 4); return true;
    // src/unknown/C0/C0A864.asm:6 RTL
    case 0xC0A86E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A86F.asm (unresolved).
bool execute_unresolved_c0_c0a86f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A86F.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A86F: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A86F.asm:4 STY $94
    case 0xC0A873: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A86F.asm:5 JSL UNKNOWN_C46CC7
    case 0xC0A875: cpu.execute_instruction<0x22>(0xC46CC7, 4); return true;
    // src/unknown/C0/C0A86F.asm:6 RTL
    case 0xC0A879: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A87A.asm (unresolved).
bool execute_unresolved_c0_c0a87a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A87A.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A87A: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A87A.asm:4 PHA
    case 0xC0A87E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A87A.asm:5 STY $94
    case 0xC0A87F: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A87A.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A881: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A87A.asm:7 STY $94
    case 0xC0A885: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A87A.asm:8 PLX
    case 0xC0A887: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0A87A.asm:9 JSL UNKNOWN_C46CF5
    case 0xC0A888: cpu.execute_instruction<0x22>(0xC46CF5, 4); return true;
    // src/unknown/C0/C0A87A.asm:10 RTL
    case 0xC0A88C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A88D.asm (unresolved).
bool execute_unresolved_c0_c0a88d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A88D.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A88D: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A88D.asm:4 PHA
    case 0xC0A891: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A88D.asm:5 STY $94
    case 0xC0A892: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A88D.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A894: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A88D.asm:7 STY $94
    case 0xC0A898: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A88D.asm:8 PLX
    case 0xC0A89A: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0A88D.asm:9 JSL UNKNOWN_C46E4F
    case 0xC0A89B: cpu.execute_instruction<0x22>(0xC46E4F, 4); return true;
    // src/unknown/C0/C0A88D.asm:10 RTL
    case 0xC0A89F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A8A0.asm (unresolved).
bool execute_unresolved_c0_c0a8a0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A8A0.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A8A0: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A8A0.asm:4 PHA
    case 0xC0A8A4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A8A0.asm:5 STY $94
    case 0xC0A8A5: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A8A0.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A8A7: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A8A0.asm:7 STY $94
    case 0xC0A8AB: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A8A0.asm:8 PLX
    case 0xC0A8AD: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0A8A0.asm:9 JSL UNKNOWN_C466F0
    case 0xC0A8AE: cpu.execute_instruction<0x22>(0xC466F0, 4); return true;
    // src/unknown/C0/C0A8A0.asm:10 RTL
    case 0xC0A8B2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A8B3.asm (unresolved).
bool execute_unresolved_c0_c0a8b3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A8B3.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A8B3: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A8B3.asm:4 PHA
    case 0xC0A8B7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A8B3.asm:5 STY $94
    case 0xC0A8B8: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A8B3.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A8BA: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A8B3.asm:7 STY $94
    case 0xC0A8BE: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A8B3.asm:8 PLX
    case 0xC0A8C0: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0A8B3.asm:9 JSL UNKNOWN_C46C5E
    case 0xC0A8C1: cpu.execute_instruction<0x22>(0xC46C5E, 4); return true;
    // src/unknown/C0/C0A8B3.asm:10 RTL
    case 0xC0A8C5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A8C6.asm (unresolved).
bool execute_unresolved_c0_c0a8c6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A8C6.asm:3 LDA #$0000
    case 0xC0A8C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0A8C6.asm:3 LDA #$0000
    // Overlapping static entry reached from 0xC0A8C6.
    case 0xC0A8C8: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C0/C0A8C6.asm:4 LDX #$0000
    case 0xC0A8C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0A8C6.asm:4 LDX #$0000
    // Overlapping static entry reached from 0xC0A8C9.
    case 0xC0A8CB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0A8C6.asm:5 JSL UNKNOWN_C47143
    case 0xC0A8CC: cpu.execute_instruction<0x22>(0xC47143, 4); return true;
    // src/unknown/C0/C0A8C6.asm:6 RTL
    case 0xC0A8D0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A8D1.asm (unresolved).
bool execute_unresolved_c0_c0a8d1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A8D1.asm:3 LDA #$0001
    case 0xC0A8D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0A8D1.asm:3 LDA #$0001
    // Overlapping static entry reached from 0xC0A8D1.
    case 0xC0A8D3: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C0/C0A8D1.asm:4 LDX #$0000
    case 0xC0A8D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C0/C0A8D1.asm:4 LDX #$0000
    // Overlapping static entry reached from 0xC0A8D4.
    case 0xC0A8D6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0A8D1.asm:5 JSL UNKNOWN_C47143
    case 0xC0A8D7: cpu.execute_instruction<0x22>(0xC47143, 4); return true;
    // src/unknown/C0/C0A8D1.asm:6 RTL
    case 0xC0A8DB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A8DC.asm (unresolved).
bool execute_unresolved_c0_c0a8dc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A8DC.asm:3 LDA #$0000
    case 0xC0A8DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0A8DC.asm:3 LDA #$0000
    // Overlapping static entry reached from 0xC0A8DC.
    case 0xC0A8DE: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C0/C0A8DC.asm:4 LDX #$0001
    case 0xC0A8DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C0/C0A8DC.asm:4 LDX #$0001
    // Overlapping static entry reached from 0xC0A8DF.
    case 0xC0A8E1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0A8DC.asm:5 JSL UNKNOWN_C47143
    case 0xC0A8E2: cpu.execute_instruction<0x22>(0xC47143, 4); return true;
    // src/unknown/C0/C0A8DC.asm:6 RTL
    case 0xC0A8E6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A8E7.asm (unresolved).
bool execute_unresolved_c0_c0a8e7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A8E7.asm:3 LDA #$0000
    case 0xC0A8E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0A8E7.asm:3 LDA #$0000
    // Overlapping static entry reached from 0xC0A8E7.
    case 0xC0A8E9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0A8E7.asm:4 JSL UNKNOWN_C472A8
    case 0xC0A8EA: cpu.execute_instruction<0x22>(0xC472A8, 4); return true;
    // src/unknown/C0/C0A8E7.asm:5 RTL
    case 0xC0A8EE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A8EF.asm (unresolved).
bool execute_unresolved_c0_c0a8ef_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A8EF.asm:3 LDA #$0001
    case 0xC0A8EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C0/C0A8EF.asm:3 LDA #$0001
    // Overlapping static entry reached from 0xC0A8EF.
    case 0xC0A8F1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C0/C0A8EF.asm:4 JSL UNKNOWN_C472A8
    case 0xC0A8F2: cpu.execute_instruction<0x22>(0xC472A8, 4); return true;
    // src/unknown/C0/C0A8EF.asm:5 RTL
    case 0xC0A8F6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A92D.asm (unresolved).
bool execute_unresolved_c0_c0a92d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A92D.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A92D: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A92D.asm:4 STY $94
    case 0xC0A931: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A92D.asm:5 JSL UNKNOWN_C46B8D
    case 0xC0A933: cpu.execute_instruction<0x22>(0xC46B8D, 4); return true;
    // src/unknown/C0/C0A92D.asm:6 RTL
    case 0xC0A937: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A938.asm (unresolved).
bool execute_unresolved_c0_c0a938_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A938.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A938: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A938.asm:4 STY $94
    case 0xC0A93C: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A938.asm:5 JSL UNKNOWN_C46BBB
    case 0xC0A93E: cpu.execute_instruction<0x22>(0xC46BBB, 4); return true;
    // src/unknown/C0/C0A938.asm:6 RTL
    case 0xC0A942: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A94E.asm (unresolved).
bool execute_unresolved_c0_c0a94e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A94E.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A94E: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A94E.asm:4 STY $94
    case 0xC0A952: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A94E.asm:5 JSL UNKNOWN_C46984
    case 0xC0A954: cpu.execute_instruction<0x22>(0xC46984, 4); return true;
    // src/unknown/C0/C0A94E.asm:6 RTL
    case 0xC0A958: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A959.asm (unresolved).
bool execute_unresolved_c0_c0a959_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A959.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A959: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A959.asm:4 STY $94
    case 0xC0A95D: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A959.asm:5 JSL UNKNOWN_C469F1
    case 0xC0A95F: cpu.execute_instruction<0x22>(0xC469F1, 4); return true;
    // src/unknown/C0/C0A959.asm:6 RTL
    case 0xC0A963: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A964.asm (unresolved).
bool execute_unresolved_c0_c0a964_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A964.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A964: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A964.asm:4 PHA
    case 0xC0A968: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A964.asm:5 STY $94
    case 0xC0A969: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A964.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A96B: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A964.asm:7 STY $94
    case 0xC0A96F: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A964.asm:8 PLX
    case 0xC0A971: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0A964.asm:9 JSL UNKNOWN_C47225
    case 0xC0A972: cpu.execute_instruction<0x22>(0xC47225, 4); return true;
    // src/unknown/C0/C0A964.asm:10 RTL
    case 0xC0A976: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A98B.asm (unresolved).
bool execute_unresolved_c0_c0a98b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A98B.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A98B: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A98B.asm:4 PHA
    case 0xC0A98F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A98B.asm:5 STY $94
    case 0xC0A990: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A98B.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A992: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A98B.asm:7 TAX
    case 0xC0A996: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A98B.asm:8 STY $94
    case 0xC0A997: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A98B.asm:9 PLA
    case 0xC0A999: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A98B.asm:10 JSL UNKNOWN_C46534
    case 0xC0A99A: cpu.execute_instruction<0x22>(0xC46534, 4); return true;
    // src/unknown/C0/C0A98B.asm:11 RTL
    case 0xC0A99E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A99F.asm (unresolved).
bool execute_unresolved_c0_c0a99f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A99F.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A99F: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A99F.asm:4 PHA
    case 0xC0A9A3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A99F.asm:5 STY $94
    case 0xC0A9A4: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A99F.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A9A6: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A99F.asm:7 TAX
    case 0xC0A9AA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0A99F.asm:8 STY $94
    case 0xC0A9AB: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A99F.asm:9 PLA
    case 0xC0A9AD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A99F.asm:10 JSL CREATE_ENTITY_AT_V01_PLUS_BG3Y
    case 0xC0A9AE: cpu.execute_instruction<0x22>(0xC4ECAD, 4); return true;
    // src/unknown/C0/C0A99F.asm:11 RTL
    case 0xC0A9B2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A9B3.asm (unresolved).
bool execute_unresolved_c0_c0a9b3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A9B3.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A9B3: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A9B3.asm:4 PHA
    case 0xC0A9B7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A9B3.asm:5 STY $94
    case 0xC0A9B8: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A9B3.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A9BA: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A9B3.asm:7 PHA
    case 0xC0A9BE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A9B3.asm:8 STY $94
    case 0xC0A9BF: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A9B3.asm:9 JSL MOVEMENT_DATA_READ16
    case 0xC0A9C1: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A9B3.asm:10 STY $94
    case 0xC0A9C5: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A9B3.asm:11 TAY
    case 0xC0A9C7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0A9B3.asm:12 PLX
    case 0xC0A9C8: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0A9B3.asm:13 PLA
    case 0xC0A9C9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A9B3.asm:14 JSL PRINT_CAST_NAME
    case 0xC0A9CA: cpu.execute_instruction<0x22>(0xC4EBAD, 4); return true;
    // src/unknown/C0/C0A9B3.asm:15 RTL
    case 0xC0A9CE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A9CF.asm (unresolved).
bool execute_unresolved_c0_c0a9cf_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A9CF.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A9CF: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A9CF.asm:4 PHA
    case 0xC0A9D3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A9CF.asm:5 STY $94
    case 0xC0A9D4: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A9CF.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A9D6: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A9CF.asm:7 PHA
    case 0xC0A9DA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A9CF.asm:8 STY $94
    case 0xC0A9DB: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A9CF.asm:9 JSL MOVEMENT_DATA_READ16
    case 0xC0A9DD: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A9CF.asm:10 STY $94
    case 0xC0A9E1: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A9CF.asm:11 TAY
    case 0xC0A9E3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0A9CF.asm:12 PLX
    case 0xC0A9E4: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0A9CF.asm:13 PLA
    case 0xC0A9E5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A9CF.asm:14 JSL PRINT_CAST_NAME_PARTY
    case 0xC0A9E6: cpu.execute_instruction<0x22>(0xC4EC05, 4); return true;
    // src/unknown/C0/C0A9CF.asm:15 RTL
    case 0xC0A9EA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0A9EB.asm (unresolved).
bool execute_unresolved_c0_c0a9eb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0A9EB.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A9EB: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A9EB.asm:4 PHA
    case 0xC0A9EF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A9EB.asm:5 STY $94
    case 0xC0A9F0: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A9EB.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A9F2: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A9EB.asm:7 PHA
    case 0xC0A9F6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0A9EB.asm:8 STY $94
    case 0xC0A9F7: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A9EB.asm:9 JSL MOVEMENT_DATA_READ16
    case 0xC0A9F9: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0A9EB.asm:10 STY $94
    case 0xC0A9FD: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0A9EB.asm:11 TAY
    case 0xC0A9FF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0A9EB.asm:12 PLX
    case 0xC0AA00: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0A9EB.asm:13 PLA
    case 0xC0AA01: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0A9EB.asm:14 JSL PRINT_CAST_NAME_ENTITY_VAR0
    case 0xC0AA02: cpu.execute_instruction<0x22>(0xC4EC52, 4); return true;
    // src/unknown/C0/C0A9EB.asm:15 RTL
    case 0xC0AA06: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AA23.asm (unresolved).
bool execute_unresolved_c0_c0aa23_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AA23.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0AA23: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0AA23.asm:4 PHA
    case 0xC0AA27: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0AA23.asm:5 STY $94
    case 0xC0AA28: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AA23.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0AA2A: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0AA23.asm:7 PHA
    case 0xC0AA2E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0AA23.asm:8 STY $94
    case 0xC0AA2F: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AA23.asm:9 JSL MOVEMENT_DATA_READ16
    case 0xC0AA31: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0AA23.asm:10 STY $94
    case 0xC0AA35: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AA23.asm:11 TAY
    case 0xC0AA37: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0AA23.asm:12 PLX
    case 0xC0AA38: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0AA23.asm:13 PLA
    case 0xC0AA39: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0AA23.asm:14 JSL UNKNOWN_C47765
    case 0xC0AA3A: cpu.execute_instruction<0x22>(0xC47765, 4); return true;
    // src/unknown/C0/C0AA23.asm:15 RTL
    case 0xC0AA3E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AA3F.asm (unresolved).
bool execute_unresolved_c0_c0aa3f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AA3F.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0AA3F: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C0AA3F.asm:4 LDX #$0033
    case 0xC0AA41: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000033, 2); else cpu.execute_instruction<0xA2>(0x000033, 3); return true;
    // src/unknown/C0/C0AA3F.asm:4 LDX #$0033
    // Overlapping static entry reached from 0xC0AA41.
    case 0xC0AA43: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C0/C0AA3F.asm:5 DEC
    case 0xC0AA44: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0AA3F.asm:6 BNE @UNKNOWN0
    case 0xC0AA45: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C0/C0AA3F.asm:7 LDX #$00B3
    case 0xC0AA47: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000B3, 2); else cpu.execute_instruction<0xA2>(0x0000B3, 3); return true;
    // src/unknown/C0/C0AA3F.asm:7 LDX #$00B3
    // Overlapping static entry reached from 0xC0AA47.
    case 0xC0AA49: cpu.execute_instruction<0x00>(0x0000DA, 2); return true;
    // src/unknown/C0/C0AA3F.asm:9 PHX
    case 0xC0AA4A: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C0AA3F.asm:10 JSL MOVEMENT_DATA_READ8
    case 0xC0AA4B: cpu.execute_instruction<0x22>(0xC09D86, 4); return true;
    // src/unknown/C0/C0AA3F.asm:11 STY $94
    case 0xC0AA4F: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AA3F.asm:12 STA ACTIONSCRIPT_COLDATA_BLUE
    case 0xC0AA51: cpu.execute_instruction<0x8D>(0x009E37, 3); return true;
    // src/unknown/C0/C0AA3F.asm:13 JSL MOVEMENT_DATA_READ8
    case 0xC0AA54: cpu.execute_instruction<0x22>(0xC09D86, 4); return true;
    // src/unknown/C0/C0AA3F.asm:14 STY $94
    case 0xC0AA58: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AA3F.asm:15 STA ACTIONSCRIPT_COLDATA_GREEN
    case 0xC0AA5A: cpu.execute_instruction<0x8D>(0x009E38, 3); return true;
    // src/unknown/C0/C0AA3F.asm:16 JSL MOVEMENT_DATA_READ8
    case 0xC0AA5D: cpu.execute_instruction<0x22>(0xC09D86, 4); return true;
    // src/unknown/C0/C0AA3F.asm:17 STY $94
    case 0xC0AA61: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AA3F.asm:18 STA ACTIONSCRIPT_COLDATA_RED
    case 0xC0AA63: cpu.execute_instruction<0x8D>(0x009E39, 3); return true;
    // src/unknown/C0/C0AA3F.asm:19 PLA
    case 0xC0AA66: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0AA3F.asm:20 JSL UNKNOWN_C42439
    case 0xC0AA67: cpu.execute_instruction<0x22>(0xC42439, 4); return true;
    // src/unknown/C0/C0AA3F.asm:21 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0AA6B: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C0AA3F.asm:22 RTL
    case 0xC0AA6D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AA6E.asm (unresolved).
bool execute_unresolved_c0_c0aa6e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AA6E.asm:3 LDX $88
    case 0xC0AA6E: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0AA6E.asm:4 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC0AA70: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/unknown/C0/C0AA6E.asm:5 BNE @UNKNOWN0
    case 0xC0AA73: cpu.execute_instruction<0xD0>(0x00001B, 2); return true;
    // src/unknown/C0/C0AA6E.asm:6 JSL MOVEMENT_DATA_READ8
    case 0xC0AA75: cpu.execute_instruction<0x22>(0xC09D86, 4); return true;
    // src/unknown/C0/C0AA6E.asm:7 STY $94
    case 0xC0AA79: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AA6E.asm:8 STA ENTITY_DIRECTIONS,X
    case 0xC0AA7B: cpu.execute_instruction<0x9D>(0x002AF6, 3); return true;
    // src/unknown/C0/C0AA6E.asm:9 JSL MOVEMENT_DATA_READ8
    case 0xC0AA7E: cpu.execute_instruction<0x22>(0xC09D86, 4); return true;
    // src/unknown/C0/C0AA6E.asm:10 STY $94
    case 0xC0AA82: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AA6E.asm:11 STA ENTITY_ANIMATION_FRAME,X
    case 0xC0AA84: cpu.execute_instruction<0x9D>(0x0010F2, 3); return true;
    // src/unknown/C0/C0AA6E.asm:12 STA USE_SECOND_SPRITE_FRAME
    case 0xC0AA87: cpu.execute_instruction<0x8D>(0x002892, 3); return true;
    // src/unknown/C0/C0AA6E.asm:13 TXY
    case 0xC0AA8A: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C0/C0AA6E.asm:14 JSL UNKNOWN_C0A443_ENTRY4
    case 0xC0AA8B: cpu.execute_instruction<0x22>(0xC0A4C4, 4); return true;
    // src/unknown/C0/C0AA6E.asm:15 RTL
    case 0xC0AA8F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C0AA6E.asm:17 LDX $88
    case 0xC0AA90: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0AA6E.asm:18 JSL MOVEMENT_DATA_READ8
    case 0xC0AA92: cpu.execute_instruction<0x22>(0xC09D86, 4); return true;
    // src/unknown/C0/C0AA6E.asm:19 STY $94
    case 0xC0AA96: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AA6E.asm:20 STA ENTITY_DIRECTIONS,X
    case 0xC0AA98: cpu.execute_instruction<0x9D>(0x002AF6, 3); return true;
    // src/unknown/C0/C0AA6E.asm:21 JSL MOVEMENT_DATA_READ8
    case 0xC0AA9B: cpu.execute_instruction<0x22>(0xC09D86, 4); return true;
    // src/unknown/C0/C0AA6E.asm:22 STY $94
    case 0xC0AA9F: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AA6E.asm:23 ASL
    case 0xC0AAA1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0AA6E.asm:24 STA ENTITY_ANIMATION_FRAME,X
    case 0xC0AAA2: cpu.execute_instruction<0x9D>(0x0010F2, 3); return true;
    // src/unknown/C0/C0AA6E.asm:25 STX SPRITE_UPDATE_ENTITY_OFFSET
    case 0xC0AAA5: cpu.execute_instruction<0x8E>(0x002896, 3); return true;
    // src/unknown/C0/C0AA6E.asm:26 JSR UNKNOWN_C0A794
    case 0xC0AAA8: cpu.execute_instruction<0x20>(0x00A794, 3); return true;
    // src/unknown/C0/C0AA6E.asm:27 RTL
    case 0xC0AAAB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AAAC.asm (unresolved).
bool execute_unresolved_c0_c0aaac_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AAAC.asm:3 LDX $88
    case 0xC0AAAC: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0AAAC.asm:4 STX SPRITE_UPDATE_ENTITY_OFFSET
    case 0xC0AAAE: cpu.execute_instruction<0x8E>(0x002896, 3); return true;
    // src/unknown/C0/C0AAAC.asm:5 JSR UNKNOWN_C0A794
    case 0xC0AAB1: cpu.execute_instruction<0x20>(0x00A794, 3); return true;
    // src/unknown/C0/C0AAAC.asm:6 RTL
    case 0xC0AAB4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AAB5.asm (unresolved).
bool execute_unresolved_c0_c0aab5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AAB5.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0AAB5: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0AAB5.asm:4 STA $90
    case 0xC0AAB9: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/unknown/C0/C0AAB5.asm:5 JSL MOVEMENT_DATA_READ8
    case 0xC0AABB: cpu.execute_instruction<0x22>(0xC09D86, 4); return true;
    // src/unknown/C0/C0AAB5.asm:6 TAX
    case 0xC0AABF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0AAB5.asm:7 JSL MOVEMENT_DATA_READ8
    case 0xC0AAC0: cpu.execute_instruction<0x22>(0xC09D86, 4); return true;
    // src/unknown/C0/C0AAB5.asm:8 STY $94
    case 0xC0AAC4: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AAB5.asm:9 LDY $90
    case 0xC0AAC6: cpu.execute_instruction<0xA4>(0x000090, 2); return true;
    // src/unknown/C0/C0AAB5.asm:10 JSL UNKNOWN_C497C0
    case 0xC0AAC8: cpu.execute_instruction<0x22>(0xC497C0, 4); return true;
    // src/unknown/C0/C0AAB5.asm:11 RTL
    case 0xC0AACC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AACD.asm (unresolved).
bool execute_unresolved_c0_c0aacd_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AACD.asm:3 LDX #$0002
    case 0xC0AACD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/unknown/C0/C0AACD.asm:3 LDX #$0002
    // Overlapping static entry reached from 0xC0AACD.
    case 0xC0AACF: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/unknown/C0/C0AACD.asm:4 RTL
    case 0xC0AAD0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AAD1.asm (unresolved).
bool execute_unresolved_c0_c0aad1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AAD1.asm:3 LDX #$0004
    case 0xC0AAD1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/unknown/C0/C0AAD1.asm:3 LDX #$0004
    // Overlapping static entry reached from 0xC0AAD1.
    case 0xC0AAD3: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/unknown/C0/C0AAD1.asm:4 RTL
    case 0xC0AAD4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AAD5.asm (unresolved).
bool execute_unresolved_c0_c0aad5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AAD5.asm:3 JSL MOVEMENT_DATA_READ8
    case 0xC0AAD5: cpu.execute_instruction<0x22>(0xC09D86, 4); return true;
    // src/unknown/C0/C0AAD5.asm:4 STY $94
    case 0xC0AAD9: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AAD5.asm:5 INC
    case 0xC0AADB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0AAD5.asm:6 STA $90
    case 0xC0AADC: cpu.execute_instruction<0x85>(0x000090, 2); return true;
    // src/unknown/C0/C0AAD5.asm:7 JSL MOVEMENT_DATA_READ16
    case 0xC0AADE: cpu.execute_instruction<0x22>(0xC09D94, 4); return true;
    // src/unknown/C0/C0AAD5.asm:8 STY $94
    case 0xC0AAE2: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/unknown/C0/C0AAD5.asm:9 STA $92
    case 0xC0AAE4: cpu.execute_instruction<0x85>(0x000092, 2); return true;
    // src/unknown/C0/C0AAD5.asm:10 LDY #$000C
    case 0xC0AAE6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C0/C0AAD5.asm:10 LDY #$000C
    // Overlapping static entry reached from 0xC0AAE6.
    case 0xC0AAE8: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C0/C0AAD5.asm:11 LDA ($84),Y
    case 0xC0AAE9: cpu.execute_instruction<0xB1>(0x000084, 2); return true;
    // src/unknown/C0/C0AAD5.asm:12 BNE @UNKNOWN0
    case 0xC0AAEB: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C0/C0AAD5.asm:13 LDA $90
    case 0xC0AAED: cpu.execute_instruction<0xA5>(0x000090, 2); return true;
    // src/unknown/C0/C0AAD5.asm:14 STA ($84),Y
    case 0xC0AAEF: cpu.execute_instruction<0x91>(0x000084, 2); return true;
    // src/unknown/C0/C0AAD5.asm:16 LDA ($84),Y
    case 0xC0AAF1: cpu.execute_instruction<0xB1>(0x000084, 2); return true;
    // src/unknown/C0/C0AAD5.asm:17 DEC
    case 0xC0AAF3: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C0/C0AAD5.asm:18 STA ($84),Y
    case 0xC0AAF4: cpu.execute_instruction<0x91>(0x000084, 2); return true;
    // src/unknown/C0/C0AAD5.asm:19 BEQ @UNKNOWN1
    case 0xC0AAF6: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C0/C0AAD5.asm:20 LDA $92
    case 0xC0AAF8: cpu.execute_instruction<0xA5>(0x000092, 2); return true;
    // src/unknown/C0/C0AAD5.asm:21 STA $94
    case 0xC0AAFA: cpu.execute_instruction<0x85>(0x000094, 2); return true;
    // src/unknown/C0/C0AAD5.asm:23 RTL
    case 0xC0AAFC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AAFD.asm (unresolved).
bool execute_unresolved_c0_c0aafd_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AAFD.asm:3 LDA #$0000
    case 0xC0AAFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C0/C0AAFD.asm:3 LDA #$0000
    // Overlapping static entry reached from 0xC0AAFD.
    case 0xC0AAFF: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C0/C0AAFD.asm:4 LDY #$000C
    case 0xC0AB00: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C0/C0AAFD.asm:4 LDY #$000C
    // Overlapping static entry reached from 0xC0AB00.
    case 0xC0AB02: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/unknown/C0/C0AAFD.asm:5 STA ($84),Y
    case 0xC0AB03: cpu.execute_instruction<0x91>(0x000084, 2); return true;
    // src/unknown/C0/C0AAFD.asm:6 RTL
    case 0xC0AB05: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0ABBD.asm (unresolved).
bool execute_unresolved_c0_c0abbd_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0ABBD.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC0ABBD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0ABBD.asm:4 STA f:APUIO0
    case 0xC0ABBF: cpu.execute_instruction<0x8F>(0x002140, 4); return true;
    // src/unknown/C0/C0ABBD.asm:5 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0ABC3: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C0ABBD.asm:6 RTL
    case 0xC0ABC5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AC0C.asm (unresolved).
bool execute_unresolved_c0_c0ac0c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AC0C.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AC0C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0AC0C.asm:4 ORA AUDIO_EFFECT_UPPER_BIT_FLIPPER
    case 0xC0AC0E: cpu.execute_instruction<0x0D>(0x001ACB, 3); return true;
    // src/unknown/C0/C0AC0C.asm:5 STA f:APUIO1
    case 0xC0AC11: cpu.execute_instruction<0x8F>(0x002141, 4); return true;
    // src/unknown/C0/C0AC0C.asm:6 LDA #$0080
    case 0xC0AC15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x004D80, 3); return true;
    // src/unknown/C0/C0AC0C.asm:7 EOR AUDIO_EFFECT_UPPER_BIT_FLIPPER
    case 0xC0AC17: cpu.execute_instruction<0x4D>(0x001ACB, 3); return true;
    // src/unknown/C0/C0AC0C.asm:7 EOR AUDIO_EFFECT_UPPER_BIT_FLIPPER
    // Overlapping static entry reached from 0xC0AC15.
    case 0xC0AC18: cpu.execute_instruction<0xCB>(0x000000, 1); return true;
    // src/unknown/C0/C0AC0C.asm:7 EOR AUDIO_EFFECT_UPPER_BIT_FLIPPER
    // Overlapping static entry reached from 0xC0AC18.
    case 0xC0AC19: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0AC0C.asm:8 STA AUDIO_EFFECT_UPPER_BIT_FLIPPER
    case 0xC0AC1A: cpu.execute_instruction<0x8D>(0x001ACB, 3); return true;
    // src/unknown/C0/C0AC0C.asm:9 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0AC1D: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C0AC0C.asm:10 RTL
    case 0xC0AC1F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AC20.asm (unresolved).
bool execute_unresolved_c0_c0ac20_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AC20.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AC20: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0AC20.asm:4 LDA f:APUIO0
    case 0xC0AC22: cpu.execute_instruction<0xAF>(0x002140, 4); return true;
    // src/unknown/C0/C0AC20.asm:5 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0AC26: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C0AC20.asm:6 AND #$00FF
    case 0xC0AC28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C0/C0AC20.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC0AC28.
    case 0xC0AC2A: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/unknown/C0/C0AC20.asm:7 RTL
    case 0xC0AC2B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AC3A.asm (unresolved).
bool execute_unresolved_c0_c0ac3a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AC3A.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AC3A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0AC3A.asm:4 STA f:APUIO2
    case 0xC0AC3C: cpu.execute_instruction<0x8F>(0x002142, 4); return true;
    // src/unknown/C0/C0AC3A.asm:5 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0AC40: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C0/C0AC3A.asm:6 RTL
    case 0xC0AC42: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AC43.asm (unresolved).
bool execute_unresolved_c0_c0ac43_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AC43.asm:3 LDA #$00C4
    case 0xC0AC43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // src/unknown/C0/C0AC43.asm:3 LDA #$00C4
    // Overlapping static entry reached from 0xC0AC43.
    case 0xC0AC45: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C0/C0AC43.asm:4 STA $04
    case 0xC0AC46: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C0/C0AC43.asm:5 STA SPRITEMAP_BANK
    case 0xC0AC48: cpu.execute_instruction<0x8D>(0x00000B, 3); return true;
    // src/unknown/C0/C0AC43.asm:6 LDY #$0000
    case 0xC0AC4B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0AC43.asm:6 LDY #$0000
    // Overlapping static entry reached from 0xC0AC4B.
    case 0xC0AC4D: cpu.execute_instruction<0x00>(0x0000BD, 2); return true;
    // src/unknown/C0/C0AC43.asm:7 LDA ENTITY_SURFACE_FLAGS,X
    case 0xC0AC4E: cpu.execute_instruction<0xBD>(0x002BAA, 3); return true;
    // src/unknown/C0/C0AC43.asm:8 AND #$0001
    case 0xC0AC51: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C0/C0AC43.asm:8 AND #$0001
    // Overlapping static entry reached from 0xC0AC51.
    case 0xC0AC53: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0AC43.asm:9 BEQ @UNKNOWN0
    case 0xC0AC54: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0AC43.asm:10 LDY #$0005
    case 0xC0AC56: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/unknown/C0/C0AC43.asm:10 LDY #$0005
    // Overlapping static entry reached from 0xC0AC56.
    case 0xC0AC58: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C0/C0AC43.asm:12 STY $00
    case 0xC0AC59: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/unknown/C0/C0AC43.asm:13 LDA ENTITY_SURFACE_FLAGS,X
    case 0xC0AC5B: cpu.execute_instruction<0xBD>(0x002BAA, 3); return true;
    // src/unknown/C0/C0AC43.asm:14 AND #$000C
    case 0xC0AC5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/unknown/C0/C0AC43.asm:14 AND #$000C
    // Overlapping static entry reached from 0xC0AC5E.
    case 0xC0AC60: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0AC43.asm:15 BEQ @UNKNOWN4
    case 0xC0AC61: cpu.execute_instruction<0xF0>(0x000074, 2); return true;
    // src/unknown/C0/C0AC43.asm:16 CMP #$0004
    case 0xC0AC63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C0/C0AC43.asm:16 CMP #$0004
    // Overlapping static entry reached from 0xC0AC63.
    case 0xC0AC65: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C0/C0AC43.asm:17 BEQ @UNKNOWN6
    case 0xC0AC66: cpu.execute_instruction<0xF0>(0x000079, 2); return true;
    // src/unknown/C0/C0AC43.asm:18 LDA ENTITY_BYTE_WIDTHS,X
    case 0xC0AC68: cpu.execute_instruction<0xBD>(0x002A7E, 3); return true;
    // src/unknown/C0/C0AC43.asm:19 CMP #$0040
    case 0xC0AC6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/unknown/C0/C0AC43.asm:19 CMP #$0040
    // Overlapping static entry reached from 0xC0AC6B.
    case 0xC0AC6D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0AC43.asm:20 BNE @UNKNOWN2
    case 0xC0AC6E: cpu.execute_instruction<0xD0>(0x000031, 2); return true;
    // src/unknown/C0/C0AC43.asm:21 LDA ENTITY_RIPPLE_OVERLAY_PTRS,X
    case 0xC0AC70: cpu.execute_instruction<0xBD>(0x00301E, 3); return true;
    // src/unknown/C0/C0AC43.asm:22 STA $02
    case 0xC0AC73: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0AC43.asm:23 LDA ENTITY_RIPPLE_NEXT_UPDATE_FRAMES,X
    case 0xC0AC75: cpu.execute_instruction<0xBD>(0x00305A, 3); return true;
    // src/unknown/C0/C0AC43.asm:24 BNE @UNKNOWN1
    case 0xC0AC78: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C0/C0AC43.asm:25 LDA #.LOWORD(ENTITY_RIPPLE_SPRITEMAPS)
    case 0xC0AC7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000096, 2); else cpu.execute_instruction<0xA9>(0x003096, 3); return true;
    // src/unknown/C0/C0AC43.asm:25 LDA #.LOWORD(ENTITY_RIPPLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC0AC7A.
    case 0xC0AC7C: cpu.execute_instruction<0x30>(0x000020, 2); return true;
    // src/unknown/C0/C0AC43.asm:26 JSR UNKNOWN_C0AD56
    case 0xC0AC7D: cpu.execute_instruction<0x20>(0x00AD56, 3); return true;
    // src/unknown/C0/C0AC43.asm:26 JSR UNKNOWN_C0AD56
    // Overlapping static entry reached from 0xC0AC7C.
    case 0xC0AC7E: cpu.execute_instruction<0x56>(0x0000AD, 2); return true;
    // src/unknown/C0/C0AC43.asm:27 LDX $88
    case 0xC0AC80: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0AC43.asm:28 STA ENTITY_RIPPLE_OVERLAY_PTRS,X
    case 0xC0AC82: cpu.execute_instruction<0x9D>(0x00301E, 3); return true;
    // src/unknown/C0/C0AC43.asm:29 TYA
    case 0xC0AC85: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:30 STA ENTITY_RIPPLE_NEXT_UPDATE_FRAMES,X
    case 0xC0AC86: cpu.execute_instruction<0x9D>(0x00305A, 3); return true;
    // src/unknown/C0/C0AC43.asm:32 DEC ENTITY_RIPPLE_NEXT_UPDATE_FRAMES,X
    case 0xC0AC89: cpu.execute_instruction<0xDE>(0x00305A, 3); return true;
    // src/unknown/C0/C0AC43.asm:33 LDA ENTITY_SCREEN_X_TABLE,X
    case 0xC0AC8C: cpu.execute_instruction<0xBD>(0x000B16, 3); return true;
    // src/unknown/C0/C0AC43.asm:34 STA $06
    case 0xC0AC8F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0AC43.asm:35 LDY ENTITY_SCREEN_Y_TABLE,X
    case 0xC0AC91: cpu.execute_instruction<0xBC>(0x000B52, 3); return true;
    // src/unknown/C0/C0AC43.asm:36 LDA ENTITY_RIPPLE_SPRITEMAPS,X
    case 0xC0AC94: cpu.execute_instruction<0xBD>(0x003096, 3); return true;
    // src/unknown/C0/C0AC43.asm:37 CLC
    case 0xC0AC97: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:38 ADC $00
    case 0xC0AC98: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C0/C0AC43.asm:39 LDX $06
    case 0xC0AC9A: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // src/unknown/C0/C0AC43.asm:40 JSR UNKNOWN_C08C58
    case 0xC0AC9C: cpu.execute_instruction<0x20>(0x008C58, 3); return true;
    // src/unknown/C0/C0AC43.asm:40 JSR UNKNOWN_C08C58
    // Overlapping static entry reached from 0xC0AC7C.
    case 0xC0AC9E: cpu.execute_instruction<0x8C>(0x003680, 3); return true;
    // src/unknown/C0/C0AC43.asm:41 BRA @UNKNOWN4
    case 0xC0AC9F: cpu.execute_instruction<0x80>(0x000036, 2); return true;
    // src/unknown/C0/C0AC43.asm:43 LDA ENTITY_BIG_RIPPLE_OVERLAY_PTRS,X
    case 0xC0ACA1: cpu.execute_instruction<0xBD>(0x0030D2, 3); return true;
    // src/unknown/C0/C0AC43.asm:44 STA $02
    case 0xC0ACA4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0AC43.asm:45 LDA ENTITY_BIG_RIPPLE_NEXT_UPDATE_FRAMES,X
    case 0xC0ACA6: cpu.execute_instruction<0xBD>(0x00310E, 3); return true;
    // src/unknown/C0/C0AC43.asm:46 BNE @UNKNOWN3
    case 0xC0ACA9: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C0/C0AC43.asm:47 LDA #.LOWORD(ENTITY_BIG_RIPPLE_SPRITEMAPS)
    case 0xC0ACAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x00314A, 3); return true;
    // src/unknown/C0/C0AC43.asm:47 LDA #.LOWORD(ENTITY_BIG_RIPPLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC0ACAB.
    case 0xC0ACAD: cpu.execute_instruction<0x31>(0x000020, 2); return true;
    // src/unknown/C0/C0AC43.asm:48 JSR UNKNOWN_C0AD56
    case 0xC0ACAE: cpu.execute_instruction<0x20>(0x00AD56, 3); return true;
    // src/unknown/C0/C0AC43.asm:48 JSR UNKNOWN_C0AD56
    // Overlapping static entry reached from 0xC0ACAD.
    case 0xC0ACAF: cpu.execute_instruction<0x56>(0x0000AD, 2); return true;
    // src/unknown/C0/C0AC43.asm:49 LDX $88
    case 0xC0ACB1: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0AC43.asm:50 STA ENTITY_BIG_RIPPLE_OVERLAY_PTRS,X
    case 0xC0ACB3: cpu.execute_instruction<0x9D>(0x0030D2, 3); return true;
    // src/unknown/C0/C0AC43.asm:51 TYA
    case 0xC0ACB6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:52 STA ENTITY_BIG_RIPPLE_NEXT_UPDATE_FRAMES,X
    case 0xC0ACB7: cpu.execute_instruction<0x9D>(0x00310E, 3); return true;
    // src/unknown/C0/C0AC43.asm:54 DEC ENTITY_BIG_RIPPLE_NEXT_UPDATE_FRAMES,X
    case 0xC0ACBA: cpu.execute_instruction<0xDE>(0x00310E, 3); return true;
    // src/unknown/C0/C0AC43.asm:55 LDA ENTITY_SCREEN_X_TABLE,X
    case 0xC0ACBD: cpu.execute_instruction<0xBD>(0x000B16, 3); return true;
    // src/unknown/C0/C0AC43.asm:56 STA $06
    case 0xC0ACC0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0AC43.asm:57 LDA ENTITY_SCREEN_Y_TABLE,X
    case 0xC0ACC2: cpu.execute_instruction<0xBD>(0x000B52, 3); return true;
    // src/unknown/C0/C0AC43.asm:58 CLC
    case 0xC0ACC5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:59 ADC #$0008
    case 0xC0ACC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C0/C0AC43.asm:59 ADC #$0008
    // Overlapping static entry reached from 0xC0ACC6.
    case 0xC0ACC8: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C0/C0AC43.asm:60 TAY
    case 0xC0ACC9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:61 LDA ENTITY_BIG_RIPPLE_SPRITEMAPS,X
    case 0xC0ACCA: cpu.execute_instruction<0xBD>(0x00314A, 3); return true;
    // src/unknown/C0/C0AC43.asm:62 CLC
    case 0xC0ACCD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:63 ADC $00
    case 0xC0ACCE: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C0/C0AC43.asm:64 ADC $00
    case 0xC0ACD0: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C0/C0AC43.asm:65 LDX $06
    case 0xC0ACD2: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // src/unknown/C0/C0AC43.asm:66 JSR UNKNOWN_C08C58
    case 0xC0ACD4: cpu.execute_instruction<0x20>(0x008C58, 3); return true;
    // src/unknown/C0/C0AC43.asm:68 LDX $88
    case 0xC0ACD7: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0AC43.asm:69 LDA ENTITY_OVERLAY_FLAGS,X
    case 0xC0ACD9: cpu.execute_instruction<0xBD>(0x002E7A, 3); return true;
    // src/unknown/C0/C0AC43.asm:70 BNE @UNKNOWN5
    case 0xC0ACDC: cpu.execute_instruction<0xD0>(0x000001, 2); return true;
    // src/unknown/C0/C0AC43.asm:71 RTL
    case 0xC0ACDE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:73 BPL @UNKNOWN8
    case 0xC0ACDF: cpu.execute_instruction<0x10>(0x000038, 2); return true;
    // src/unknown/C0/C0AC43.asm:75 CPX #$002E
    case 0xC0ACE1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00002E, 2); else cpu.execute_instruction<0xE0>(0x00002E, 3); return true;
    // src/unknown/C0/C0AC43.asm:75 CPX #$002E
    // Overlapping static entry reached from 0xC0ACE1.
    case 0xC0ACE3: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0AC43.asm:76 BCC @UNKNOWN10
    case 0xC0ACE4: cpu.execute_instruction<0x90>(0x00006F, 2); return true;
    // src/unknown/C0/C0AC43.asm:77 LDA ENTITY_SWEATING_OVERLAY_PTRS,X
    case 0xC0ACE6: cpu.execute_instruction<0xBD>(0x002F6A, 3); return true;
    // src/unknown/C0/C0AC43.asm:78 STA $02
    case 0xC0ACE9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0AC43.asm:79 LDA ENTITY_SWEATING_NEXT_UPDATE_FRAMES,X
    case 0xC0ACEB: cpu.execute_instruction<0xBD>(0x002FA6, 3); return true;
    // src/unknown/C0/C0AC43.asm:80 BNE @UNKNOWN7
    case 0xC0ACEE: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C0/C0AC43.asm:81 LDA #.LOWORD(ENTITY_SWEATING_SPRITEMAPS)
    case 0xC0ACF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E2, 2); else cpu.execute_instruction<0xA9>(0x002FE2, 3); return true;
    // src/unknown/C0/C0AC43.asm:81 LDA #.LOWORD(ENTITY_SWEATING_SPRITEMAPS)
    // Overlapping static entry reached from 0xC0ACF0.
    case 0xC0ACF2: cpu.execute_instruction<0x2F>(0xAD5620, 4); return true;
    // src/unknown/C0/C0AC43.asm:82 JSR UNKNOWN_C0AD56
    case 0xC0ACF3: cpu.execute_instruction<0x20>(0x00AD56, 3); return true;
    // src/unknown/C0/C0AC43.asm:83 LDX $88
    case 0xC0ACF6: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0AC43.asm:84 STA ENTITY_SWEATING_OVERLAY_PTRS,X
    case 0xC0ACF8: cpu.execute_instruction<0x9D>(0x002F6A, 3); return true;
    // src/unknown/C0/C0AC43.asm:85 TYA
    case 0xC0ACFB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:86 STA ENTITY_SWEATING_NEXT_UPDATE_FRAMES,X
    case 0xC0ACFC: cpu.execute_instruction<0x9D>(0x002FA6, 3); return true;
    // src/unknown/C0/C0AC43.asm:88 DEC ENTITY_SWEATING_NEXT_UPDATE_FRAMES,X
    case 0xC0ACFF: cpu.execute_instruction<0xDE>(0x002FA6, 3); return true;
    // src/unknown/C0/C0AC43.asm:89 LDA ENTITY_SCREEN_X_TABLE,X
    case 0xC0AD02: cpu.execute_instruction<0xBD>(0x000B16, 3); return true;
    // src/unknown/C0/C0AC43.asm:90 STA $06
    case 0xC0AD05: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0AC43.asm:91 LDY ENTITY_SCREEN_Y_TABLE,X
    case 0xC0AD07: cpu.execute_instruction<0xBC>(0x000B52, 3); return true;
    // src/unknown/C0/C0AC43.asm:92 LDA ENTITY_SWEATING_SPRITEMAPS,X
    case 0xC0AD0A: cpu.execute_instruction<0xBD>(0x002FE2, 3); return true;
    // src/unknown/C0/C0AC43.asm:93 BEQ @UNKNOWN8
    case 0xC0AD0D: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C0/C0AC43.asm:94 CLC
    case 0xC0AD0F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:95 ADC $00
    case 0xC0AD10: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C0/C0AC43.asm:96 LDX $06
    case 0xC0AD12: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // src/unknown/C0/C0AC43.asm:97 JSR UNKNOWN_C08C58
    case 0xC0AD14: cpu.execute_instruction<0x20>(0x008C58, 3); return true;
    // src/unknown/C0/C0AC43.asm:98 LDX $88
    case 0xC0AD17: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0AC43.asm:100 LDA ENTITY_OVERLAY_FLAGS,X
    case 0xC0AD19: cpu.execute_instruction<0xBD>(0x002E7A, 3); return true;
    // src/unknown/C0/C0AC43.asm:101 AND #$4000
    case 0xC0AD1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x004000, 3); return true;
    // src/unknown/C0/C0AC43.asm:101 AND #$4000
    // Overlapping static entry reached from 0xC0AD1C.
    case 0xC0AD1E: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:102 BEQ @UNKNOWN10
    case 0xC0AD1F: cpu.execute_instruction<0xF0>(0x000034, 2); return true;
    // src/unknown/C0/C0AC43.asm:103 CPX #$002E
    case 0xC0AD21: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00002E, 2); else cpu.execute_instruction<0xE0>(0x00002E, 3); return true;
    // src/unknown/C0/C0AC43.asm:103 CPX #$002E
    // Overlapping static entry reached from 0xC0AD21.
    case 0xC0AD23: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C0/C0AC43.asm:104 BCC @UNKNOWN10
    case 0xC0AD24: cpu.execute_instruction<0x90>(0x00002F, 2); return true;
    // src/unknown/C0/C0AC43.asm:105 LDA ENTITY_MUSHROOMIZED_OVERLAY_PTRS,X
    case 0xC0AD26: cpu.execute_instruction<0xBD>(0x002EB6, 3); return true;
    // src/unknown/C0/C0AC43.asm:106 STA $02
    case 0xC0AD29: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0AC43.asm:107 LDA ENTITY_MUSHROOMIZED_NEXT_UPDATE_FRAMES,X
    case 0xC0AD2B: cpu.execute_instruction<0xBD>(0x002EF2, 3); return true;
    // src/unknown/C0/C0AC43.asm:108 BNE @UNKNOWN9
    case 0xC0AD2E: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C0/C0AC43.asm:109 LDA #.LOWORD(ENTITY_MUSHROOMIZED_SPRITEMAPS)
    case 0xC0AD30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002E, 2); else cpu.execute_instruction<0xA9>(0x002F2E, 3); return true;
    // src/unknown/C0/C0AC43.asm:109 LDA #.LOWORD(ENTITY_MUSHROOMIZED_SPRITEMAPS)
    // Overlapping static entry reached from 0xC0AD30.
    case 0xC0AD32: cpu.execute_instruction<0x2F>(0xAD5620, 4); return true;
    // src/unknown/C0/C0AC43.asm:110 JSR UNKNOWN_C0AD56
    case 0xC0AD33: cpu.execute_instruction<0x20>(0x00AD56, 3); return true;
    // src/unknown/C0/C0AC43.asm:111 LDX $88
    case 0xC0AD36: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C0/C0AC43.asm:112 STA ENTITY_MUSHROOMIZED_OVERLAY_PTRS,X
    case 0xC0AD38: cpu.execute_instruction<0x9D>(0x002EB6, 3); return true;
    // src/unknown/C0/C0AC43.asm:113 TYA
    case 0xC0AD3B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:114 STA ENTITY_MUSHROOMIZED_NEXT_UPDATE_FRAMES,X
    case 0xC0AD3C: cpu.execute_instruction<0x9D>(0x002EF2, 3); return true;
    // src/unknown/C0/C0AC43.asm:116 DEC ENTITY_MUSHROOMIZED_NEXT_UPDATE_FRAMES,X
    case 0xC0AD3F: cpu.execute_instruction<0xDE>(0x002EF2, 3); return true;
    // src/unknown/C0/C0AC43.asm:117 LDA ENTITY_SCREEN_X_TABLE,X
    case 0xC0AD42: cpu.execute_instruction<0xBD>(0x000B16, 3); return true;
    // src/unknown/C0/C0AC43.asm:118 STA $06
    case 0xC0AD45: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C0/C0AC43.asm:119 LDY ENTITY_SCREEN_Y_TABLE,X
    case 0xC0AD47: cpu.execute_instruction<0xBC>(0x000B52, 3); return true;
    // src/unknown/C0/C0AC43.asm:120 LDA ENTITY_MUSHROOMIZED_SPRITEMAPS,X
    case 0xC0AD4A: cpu.execute_instruction<0xBD>(0x002F2E, 3); return true;
    // src/unknown/C0/C0AC43.asm:121 CLC
    case 0xC0AD4D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0AC43.asm:122 ADC $00
    case 0xC0AD4E: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C0/C0AC43.asm:123 LDX $06
    case 0xC0AD50: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // src/unknown/C0/C0AC43.asm:124 JSR UNKNOWN_C08C58
    case 0xC0AD52: cpu.execute_instruction<0x20>(0x008C58, 3); return true;
    // src/unknown/C0/C0AC43.asm:126 RTL
    case 0xC0AD55: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AD56.asm (unresolved).
bool execute_unresolved_c0_c0ad56_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AD56.asm:7 CLC
    case 0xC0AD56: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0AD56.asm:8 ADC $88
    case 0xC0AD57: cpu.execute_instruction<0x65>(0x000088, 2); return true;
    // src/unknown/C0/C0AD56.asm:9 TAX
    case 0xC0AD59: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0AD56.asm:10 LDY #$0000
    case 0xC0AD5A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0AD56.asm:10 LDY #$0000
    // Overlapping static entry reached from 0xC0AD5A.
    case 0xC0AD5C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C0/C0AD56.asm:12 LDA [$02],Y
    case 0xC0AD5D: cpu.execute_instruction<0xB7>(0x000002, 2); return true;
    // src/unknown/C0/C0AD56.asm:13 INY
    case 0xC0AD5F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0AD56.asm:14 INY
    case 0xC0AD60: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0AD56.asm:15 CMP #$0001
    case 0xC0AD61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C0/C0AD56.asm:15 CMP #$0001
    // Overlapping static entry reached from 0xC0AD61.
    case 0xC0AD63: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0AD56.asm:16 BNE @NOTCMD1
    case 0xC0AD64: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C0/C0AD56.asm:17 LDA [$02],Y
    case 0xC0AD66: cpu.execute_instruction<0xB7>(0x000002, 2); return true;
    // src/unknown/C0/C0AD56.asm:18 INY
    case 0xC0AD68: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0AD56.asm:19 INY
    case 0xC0AD69: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0AD56.asm:20 STA __BSS_START__,X
    case 0xC0AD6A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C0/C0AD56.asm:21 BRA @NEXTCMD
    case 0xC0AD6D: cpu.execute_instruction<0x80>(0x0000EE, 2); return true;
    // src/unknown/C0/C0AD56.asm:23 CMP #$0003
    case 0xC0AD6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C0/C0AD56.asm:23 CMP #$0003
    // Overlapping static entry reached from 0xC0AD6F.
    case 0xC0AD71: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C0/C0AD56.asm:24 BNE @CMD2
    case 0xC0AD72: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C0/C0AD56.asm:25 LDA [$02],Y
    case 0xC0AD74: cpu.execute_instruction<0xB7>(0x000002, 2); return true;
    // src/unknown/C0/C0AD56.asm:26 STA $02
    case 0xC0AD76: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C0/C0AD56.asm:27 LDY #$0000
    case 0xC0AD78: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C0/C0AD56.asm:27 LDY #$0000
    // Overlapping static entry reached from 0xC0AD78.
    case 0xC0AD7A: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C0/C0AD56.asm:28 BRA @NEXTCMD
    case 0xC0AD7B: cpu.execute_instruction<0x80>(0x0000E0, 2); return true;
    // src/unknown/C0/C0AD56.asm:30 LDA [$02],Y
    case 0xC0AD7D: cpu.execute_instruction<0xB7>(0x000002, 2); return true;
    // src/unknown/C0/C0AD56.asm:31 INY
    case 0xC0AD7F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0AD56.asm:32 INY
    case 0xC0AD80: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C0/C0AD56.asm:33 STY $08
    case 0xC0AD81: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C0/C0AD56.asm:34 TAY
    case 0xC0AD83: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0AD56.asm:35 LDA $02
    case 0xC0AD84: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C0/C0AD56.asm:36 CLC
    case 0xC0AD86: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C0/C0AD56.asm:37 ADC $08
    case 0xC0AD87: cpu.execute_instruction<0x65>(0x000008, 2); return true;
    // src/unknown/C0/C0AD56.asm:38 RTS
    case 0xC0AD89: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AD9F.asm (unresolved).
bool execute_unresolved_c0_c0ad9f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AD9F.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AD9F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0AD9F.asm:4 LDA BG3_Y_POS
    case 0xC0ADA1: cpu.execute_instruction<0xAD>(0x00003B, 3); return true;
    // src/unknown/C0/C0AD9F.asm:5 STA f:BG3VOFS
    case 0xC0ADA4: cpu.execute_instruction<0x8F>(0x002112, 4); return true;
    // src/unknown/C0/C0AD9F.asm:6 LDA BG3_Y_POS+1
    case 0xC0ADA8: cpu.execute_instruction<0xAD>(0x00003C, 3); return true;
    // src/unknown/C0/C0AD9F.asm:7 STA f:BG3VOFS
    case 0xC0ADAB: cpu.execute_instruction<0x8F>(0x002112, 4); return true;
    // src/unknown/C0/C0AD9F.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC0ADAF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0AD9F.asm:9 RTS
    case 0xC0ADB1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AE34.asm (unresolved).
bool execute_unresolved_c0_c0ae34_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AE34.asm:3 TAX
    case 0xC0AE34: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0AE34.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AE35: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0AE34.asm:5 LDA HDMAEN_MIRROR
    case 0xC0AE37: cpu.execute_instruction<0xAD>(0x00001F, 3); return true;
    // src/unknown/C0/C0AE34.asm:6 AND f:UNKNOWN_C0AE44,X
    case 0xC0AE3A: cpu.execute_instruction<0x3F>(0xC0AE44, 4); return true;
    // src/unknown/C0/C0AE34.asm:7 STA HDMAEN_MIRROR
    case 0xC0AE3E: cpu.execute_instruction<0x8D>(0x00001F, 3); return true;
    // src/unknown/C0/C0AE34.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC0AE41: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0AE34.asm:9 RTL
    case 0xC0AE43: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0AFCD.asm (unresolved).
bool execute_unresolved_c0_c0afcd_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0AFCD.asm:3 TAX
    case 0xC0AFCD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0AFCD.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC0AFCE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0AFCD.asm:5 LDA f:UNKNOWN_C0AFF1,X
    case 0xC0AFD0: cpu.execute_instruction<0xBF>(0xC0AFF1, 4); return true;
    // src/unknown/C0/C0AFCD.asm:6 STA TM_MIRROR
    case 0xC0AFD4: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/C0/C0AFCD.asm:7 LDA f:UNKNOWN_C0AFF1+11,X
    case 0xC0AFD7: cpu.execute_instruction<0xBF>(0xC0AFFC, 4); return true;
    // src/unknown/C0/C0AFCD.asm:8 STA TD_MIRROR
    case 0xC0AFDB: cpu.execute_instruction<0x8D>(0x00001B, 3); return true;
    // src/unknown/C0/C0AFCD.asm:9 LDA f:UNKNOWN_C0AFF1+21,X
    case 0xC0AFDE: cpu.execute_instruction<0xBF>(0xC0B006, 4); return true;
    // src/unknown/C0/C0AFCD.asm:10 STA f:CGWSEL
    case 0xC0AFE2: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/unknown/C0/C0AFCD.asm:11 LDA f:UNKNOWN_C0AFF1+31,X
    case 0xC0AFE6: cpu.execute_instruction<0xBF>(0xC0B010, 4); return true;
    // src/unknown/C0/C0AFCD.asm:12 STA f:CGADSUB
    case 0xC0AFEA: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/unknown/C0/C0AFCD.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC0AFEE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0AFCD.asm:14 RTL
    case 0xC0AFF0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0B0AA.asm (unresolved).
bool execute_unresolved_c0_c0b0aa_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0B0AA.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC0B0AA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B0AA.asm:4 LDA #$00FF
    case 0xC0B0AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C0/C0B0AA.asm:4 LDA #$00FF
    // Overlapping static entry reached from 0xC0B0AC.
    case 0xC0B0AE: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/unknown/C0/C0B0AA.asm:5 STA f:WH0
    case 0xC0B0AF: cpu.execute_instruction<0x8F>(0x002126, 4); return true;
    // src/unknown/C0/C0B0AA.asm:6 STA f:WH2
    case 0xC0B0B3: cpu.execute_instruction<0x8F>(0x002128, 4); return true;
    // src/unknown/C0/C0B0AA.asm:7 RTL
    case 0xC0B0B7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0B0B8.asm (unresolved).
bool execute_unresolved_c0_c0b0b8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0B0B8.asm:3 TAY
    case 0xC0B0B8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C0/C0B0B8.asm:4 ASL
    case 0xC0B0B9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B0B8.asm:5 ASL
    case 0xC0B0BA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B0B8.asm:6 ASL
    case 0xC0B0BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B0B8.asm:7 ASL
    case 0xC0B0BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B0B8.asm:8 TAX
    case 0xC0B0BD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B0B8.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B0BE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0B0B8.asm:10 LDA $10
    case 0xC0B0C0: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C0/C0B0B8.asm:11 STA f:A1B0,X
    case 0xC0B0C2: cpu.execute_instruction<0x9F>(0x004304, 4); return true;
    // src/unknown/C0/C0B0B8.asm:12 STA f:DASB0,X
    case 0xC0B0C6: cpu.execute_instruction<0x9F>(0x004307, 4); return true;
    // src/unknown/C0/C0B0B8.asm:13 LDA #$0026
    case 0xC0B0CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x009F26, 3); return true;
    // src/unknown/C0/C0B0B8.asm:14 STA f:BBAD0,X
    case 0xC0B0CC: cpu.execute_instruction<0x9F>(0x004301, 4); return true;
    // src/unknown/C0/C0B0B8.asm:14 STA f:BBAD0,X
    // Overlapping static entry reached from 0xC0B0CA.
    case 0xC0B0CD: cpu.execute_instruction<0x01>(0x000043, 2); return true;
    // src/unknown/C0/C0B0B8.asm:14 STA f:BBAD0,X
    // Overlapping static entry reached from 0xC0B0CD.
    case 0xC0B0CF: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/unknown/C0/C0B0B8.asm:15 LDA [$0E]
    case 0xC0B0D0: cpu.execute_instruction<0xA7>(0x00000E, 2); return true;
    // src/unknown/C0/C0B0B8.asm:16 STA f:DMAP0,X
    case 0xC0B0D2: cpu.execute_instruction<0x9F>(0x004300, 4); return true;
    // src/unknown/C0/C0B0B8.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC0B0D6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B0B8.asm:18 LDA $0E
    case 0xC0B0D8: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C0/C0B0B8.asm:19 INC
    case 0xC0B0DA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C0/C0B0B8.asm:20 STA f:A1T0L,X
    case 0xC0B0DB: cpu.execute_instruction<0x9F>(0x004302, 4); return true;
    // src/unknown/C0/C0B0B8.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B0DF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0B0B8.asm:22 TYX
    case 0xC0B0E1: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C0/C0B0B8.asm:23 LDA HDMAEN_MIRROR
    case 0xC0B0E2: cpu.execute_instruction<0xAD>(0x00001F, 3); return true;
    // src/unknown/C0/C0B0B8.asm:24 ORA f:DMA_FLAGS,X
    case 0xC0B0E5: cpu.execute_instruction<0x1F>(0xC0AE16, 4); return true;
    // src/unknown/C0/C0B0B8.asm:25 STA HDMAEN_MIRROR
    case 0xC0B0E9: cpu.execute_instruction<0x8D>(0x00001F, 3); return true;
    // src/unknown/C0/C0B0B8.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC0B0EC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B0B8.asm:27 RTL
    case 0xC0B0EE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C0/C0B0EF.asm (unresolved).
bool execute_unresolved_c0_c0b0ef_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C0/C0B0EF.asm:3 PHA
    case 0xC0B0EF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C0/C0B0EF.asm:4 PHX
    case 0xC0B0F0: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C0/C0B0EF.asm:5 ASL
    case 0xC0B0F1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B0EF.asm:6 ASL
    case 0xC0B0F2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B0EF.asm:7 ASL
    case 0xC0B0F3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B0EF.asm:8 ASL
    case 0xC0B0F4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C0/C0B0EF.asm:9 TAX
    case 0xC0B0F5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C0/C0B0EF.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B0F6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0B0EF.asm:11 LDA #$00E4
    case 0xC0B0F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E4, 2); else cpu.execute_instruction<0xA9>(0x008DE4, 3); return true;
    // src/unknown/C0/C0B0EF.asm:12 STA SWIRL_WINDOW_HDMA_TABLE
    case 0xC0B0FA: cpu.execute_instruction<0x8D>(0x003FC6, 3); return true;
    // src/unknown/C0/C0B0EF.asm:12 STA SWIRL_WINDOW_HDMA_TABLE
    // Overlapping static entry reached from 0xC0B0F8.
    case 0xC0B0FB: cpu.execute_instruction<0xC6>(0x00003F, 2); return true;
    // src/unknown/C0/C0B0EF.asm:13 LDY #.LOWORD(SWIRL_WINDOW_HDMA_BUFFER)
    case 0xC0B0FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D0, 2); else cpu.execute_instruction<0xA0>(0x003FD0, 3); return true;
    // src/unknown/C0/C0B0EF.asm:13 LDY #.LOWORD(SWIRL_WINDOW_HDMA_BUFFER)
    // Overlapping static entry reached from 0xC0B0FD.
    case 0xC0B0FF: cpu.execute_instruction<0x3F>(0x3FC78C, 4); return true;
    // src/unknown/C0/C0B0EF.asm:14 STY SWIRL_WINDOW_HDMA_TABLE + 1
    case 0xC0B100: cpu.execute_instruction<0x8C>(0x003FC7, 3); return true;
    // src/unknown/C0/C0B0EF.asm:15 LDA #$00FC
    case 0xC0B103: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x008DFC, 3); return true;
    // src/unknown/C0/C0B0EF.asm:16 STA SWIRL_WINDOW_HDMA_TABLE + 3
    case 0xC0B105: cpu.execute_instruction<0x8D>(0x003FC9, 3); return true;
    // src/unknown/C0/C0B0EF.asm:16 STA SWIRL_WINDOW_HDMA_TABLE + 3
    // Overlapping static entry reached from 0xC0B103.
    case 0xC0B106: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00003F, 2); else cpu.execute_instruction<0xC9>(0x00A93F, 3); return true;
    // src/unknown/C0/C0B0EF.asm:17 LDA #$0000
    case 0xC0B108: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008D00, 3); return true;
    // src/unknown/C0/C0B0EF.asm:17 LDA #$0000
    // Overlapping static entry reached from 0xC0B106.
    case 0xC0B109: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C0/C0B0EF.asm:18 STA SWIRL_WINDOW_HDMA_TABLE + 6
    case 0xC0B10A: cpu.execute_instruction<0x8D>(0x003FCC, 3); return true;
    // src/unknown/C0/C0B0EF.asm:18 STA SWIRL_WINDOW_HDMA_TABLE + 6
    // Overlapping static entry reached from 0xC0B108.
    case 0xC0B10B: cpu.execute_instruction<0xCC>(0x00A93F, 3); return true;
    // src/unknown/C0/C0B0EF.asm:19 LDA #$007E
    case 0xC0B10D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x009F7E, 3); return true;
    // src/unknown/C0/C0B0EF.asm:19 LDA #$007E
    // Overlapping static entry reached from 0xC0B10B.
    case 0xC0B10E: cpu.execute_instruction<0x7E>(0x00049F, 3); return true;
    // src/unknown/C0/C0B0EF.asm:20 STA f:A1B0,X
    case 0xC0B10F: cpu.execute_instruction<0x9F>(0x004304, 4); return true;
    // src/unknown/C0/C0B0EF.asm:20 STA f:A1B0,X
    // Overlapping static entry reached from 0xC0B10D.
    case 0xC0B110: cpu.execute_instruction<0x04>(0x000043, 2); return true;
    // src/unknown/C0/C0B0EF.asm:20 STA f:A1B0,X
    // Overlapping static entry reached from 0xC0B10E.
    case 0xC0B111: cpu.execute_instruction<0x43>(0x000000, 2); return true;
    // src/unknown/C0/C0B0EF.asm:20 STA f:A1B0,X
    // Overlapping static entry reached from 0xC0B110.
    case 0xC0B112: cpu.execute_instruction<0x00>(0x00009F, 2); return true;
    // src/unknown/C0/C0B0EF.asm:21 STA f:DASB0,X
    case 0xC0B113: cpu.execute_instruction<0x9F>(0x004307, 4); return true;
    // src/unknown/C0/C0B0EF.asm:22 LDA #$0026
    case 0xC0B117: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x009F26, 3); return true;
    // src/unknown/C0/C0B0EF.asm:23 STA f:BBAD0,X
    case 0xC0B119: cpu.execute_instruction<0x9F>(0x004301, 4); return true;
    // src/unknown/C0/C0B0EF.asm:23 STA f:BBAD0,X
    // Overlapping static entry reached from 0xC0B117.
    case 0xC0B11A: cpu.execute_instruction<0x01>(0x000043, 2); return true;
    // src/unknown/C0/C0B0EF.asm:23 STA f:BBAD0,X
    // Overlapping static entry reached from 0xC0B11A.
    case 0xC0B11C: cpu.execute_instruction<0x00>(0x000068, 2); return true;
    // src/unknown/C0/C0B0EF.asm:24 PLA
    case 0xC0B11D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0B0EF.asm:25 STA f:DMAP0,X
    case 0xC0B11E: cpu.execute_instruction<0x9F>(0x004300, 4); return true;
    // src/unknown/C0/C0B0EF.asm:26 LDY #.LOWORD(SWIRL_WINDOW_HDMA_BUFFER) + 200
    case 0xC0B122: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000098, 2); else cpu.execute_instruction<0xA0>(0x004098, 3); return true;
    // src/unknown/C0/C0B0EF.asm:26 LDY #.LOWORD(SWIRL_WINDOW_HDMA_BUFFER) + 200
    // Overlapping static entry reached from 0xC0B122.
    case 0xC0B124: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C0/C0B0EF.asm:27 AND #$0004
    case 0xC0B125: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x00F004, 3); return true;
    // src/unknown/C0/C0B0EF.asm:28 BEQ @UNKNOWN0
    case 0xC0B127: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C0/C0B0EF.asm:28 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC0B125.
    case 0xC0B128: cpu.execute_instruction<0x03>(0x0000A0, 2); return true;
    // src/unknown/C0/C0B0EF.asm:29 LDY #.LOWORD(SWIRL_WINDOW_HDMA_BUFFER) + 400
    case 0xC0B129: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000060, 2); else cpu.execute_instruction<0xA0>(0x004160, 3); return true;
    // src/unknown/C0/C0B0EF.asm:29 LDY #.LOWORD(SWIRL_WINDOW_HDMA_BUFFER) + 400
    // Overlapping static entry reached from 0xC0B128.
    case 0xC0B12A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C0/C0B0EF.asm:29 LDY #.LOWORD(SWIRL_WINDOW_HDMA_BUFFER) + 400
    // Overlapping static entry reached from 0xC0B129.
    case 0xC0B12B: cpu.execute_instruction<0x41>(0x00008C, 2); return true;
    // src/unknown/C0/C0B0EF.asm:31 STY SWIRL_WINDOW_HDMA_TABLE + 4
    case 0xC0B12C: cpu.execute_instruction<0x8C>(0x003FCA, 3); return true;
    // src/unknown/C0/C0B0EF.asm:31 STY SWIRL_WINDOW_HDMA_TABLE + 4
    // Overlapping static entry reached from 0xC0B12B.
    case 0xC0B12D: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C0/C0B0EF.asm:31 STY SWIRL_WINDOW_HDMA_TABLE + 4
    // Overlapping static entry reached from 0xC0B12D.
    case 0xC0B12E: cpu.execute_instruction<0x3F>(0x20C268, 4); return true;
    // src/unknown/C0/C0B0EF.asm:32 PLA
    case 0xC0B12F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C0/C0B0EF.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0xC0B130: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B0EF.asm:34 LDA #.LOWORD(SWIRL_WINDOW_HDMA_TABLE)
    case 0xC0B132: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C6, 2); else cpu.execute_instruction<0xA9>(0x003FC6, 3); return true;
    // src/unknown/C0/C0B0EF.asm:34 LDA #.LOWORD(SWIRL_WINDOW_HDMA_TABLE)
    // Overlapping static entry reached from 0xC0B132.
    case 0xC0B134: cpu.execute_instruction<0x3F>(0x43029F, 4); return true;
    // src/unknown/C0/C0B0EF.asm:35 STA f:A1T0L,X
    case 0xC0B135: cpu.execute_instruction<0x9F>(0x004302, 4); return true;
    // src/unknown/C0/C0B0EF.asm:35 STA f:A1T0L,X
    // Overlapping static entry reached from 0xC0B134.
    case 0xC0B138: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C0/C0B0EF.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B139: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C0/C0B0EF.asm:37 PLX
    case 0xC0B13B: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C0/C0B0EF.asm:38 LDA HDMAEN_MIRROR
    case 0xC0B13C: cpu.execute_instruction<0xAD>(0x00001F, 3); return true;
    // src/unknown/C0/C0B0EF.asm:39 ORA f:DMA_FLAGS,X
    case 0xC0B13F: cpu.execute_instruction<0x1F>(0xC0AE16, 4); return true;
    // src/unknown/C0/C0B0EF.asm:40 STA HDMAEN_MIRROR
    case 0xC0B143: cpu.execute_instruction<0x8D>(0x00001F, 3); return true;
    // src/unknown/C0/C0B0EF.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC0B146: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C0/C0B0EF.asm:42 RTL
    case 0xC0B148: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
