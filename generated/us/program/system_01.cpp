// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/system/alloc_sprite_mem.asm (source_named).
bool execute_system_alloc_sprite_mem_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/alloc_sprite_mem.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC01C11: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/alloc_sprite_mem.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC01C0E.
    case 0xC01C12: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/alloc_sprite_mem.asm:8 END_STACK_VARS
    case 0xC01C13: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/alloc_sprite_mem.asm:8 END_STACK_VARS
    case 0xC01C14: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/alloc_sprite_mem.asm:8 END_STACK_VARS
    case 0xC01C15: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/alloc_sprite_mem.asm:8 END_STACK_VARS
    case 0xC01C16: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/alloc_sprite_mem.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC01C16.
    case 0xC01C18: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/alloc_sprite_mem.asm:8 END_STACK_VARS
    case 0xC01C19: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/alloc_sprite_mem.asm:8 END_STACK_VARS
    case 0xC01C1A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/alloc_sprite_mem.asm:9 TXY
    case 0xC01C1B: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/alloc_sprite_mem.asm:10 STA @LOCAL00
    case 0xC01C1C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/alloc_sprite_mem.asm:11 LDX #0
    case 0xC01C1E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/alloc_sprite_mem.asm:11 LDX #0
    // Overlapping static entry reached from 0xC01C1E.
    case 0xC01C20: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/system/alloc_sprite_mem.asm:12 BRA @UNKNOWN3
    case 0xC01C21: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/system/alloc_sprite_mem.asm:14 REP #PROC_FLAGS::ACCUM8
    case 0xC01C23: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/alloc_sprite_mem.asm:15 LDA @LOCAL00
    case 0xC01C25: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/alloc_sprite_mem.asm:16 REP #PROC_FLAGS::ACCUM8
    case 0xC01C27: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/alloc_sprite_mem.asm:17 AND #$00FF
    case 0xC01C29: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/alloc_sprite_mem.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC01C29.
    case 0xC01C2B: cpu.execute_instruction<0x00>(0x000009, 2); return true;
    // src/system/alloc_sprite_mem.asm:18 ORA #$0080
    case 0xC01C2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000080, 2); else cpu.execute_instruction<0x09>(0x000080, 3); return true;
    // src/system/alloc_sprite_mem.asm:18 ORA #$0080
    // Overlapping static entry reached from 0xC01C2C.
    case 0xC01C2E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/alloc_sprite_mem.asm:19 STA @VIRTUAL02
    case 0xC01C2F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/alloc_sprite_mem.asm:20 LDA SPRITE_VRAM_TABLE,X
    case 0xC01C31: cpu.execute_instruction<0xBD>(0x004A00, 3); return true;
    // src/system/alloc_sprite_mem.asm:21 AND #$00FF
    case 0xC01C34: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/alloc_sprite_mem.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC01C34.
    case 0xC01C36: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/system/alloc_sprite_mem.asm:22 CMP @VIRTUAL02
    case 0xC01C37: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/system/alloc_sprite_mem.asm:23 BEQ @UNKNOWN1
    case 0xC01C39: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/system/alloc_sprite_mem.asm:24 LDA @LOCAL00
    case 0xC01C3B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/alloc_sprite_mem.asm:25 CMP #$8000
    case 0xC01C3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/system/alloc_sprite_mem.asm:25 CMP #$8000
    // Overlapping static entry reached from 0xC01C3D.
    case 0xC01C3F: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // src/system/alloc_sprite_mem.asm:26 BNE @UNKNOWN2
    case 0xC01C40: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/system/alloc_sprite_mem.asm:28 TYA
    case 0xC01C42: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/alloc_sprite_mem.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC01C43: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/alloc_sprite_mem.asm:30 STA SPRITE_VRAM_TABLE,X
    case 0xC01C45: cpu.execute_instruction<0x9D>(0x004A00, 3); return true;
    // src/system/alloc_sprite_mem.asm:32 INX
    case 0xC01C48: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/alloc_sprite_mem.asm:34 CPX #88
    case 0xC01C49: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000058, 2); else cpu.execute_instruction<0xE0>(0x000058, 3); return true;
    // src/system/alloc_sprite_mem.asm:34 CPX #88
    // Overlapping static entry reached from 0xC01C49.
    case 0xC01C4B: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/alloc_sprite_mem.asm:35 BCC @UNKNOWN0
    case 0xC01C4C: cpu.execute_instruction<0x90>(0x0000D5, 2); return true;
    // src/system/alloc_sprite_mem.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC01C4E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/alloc_sprite_mem.asm:37 END_C_FUNCTION
    case 0xC01C50: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/alloc_sprite_mem.asm:37 END_C_FUNCTION
    case 0xC01C51: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/animate_palette.asm (source_named).
bool execute_system_animate_palette_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/animate_palette.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0030F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/animate_palette.asm:6 END_STACK_VARS
    case 0xC00311: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/animate_palette.asm:6 END_STACK_VARS
    case 0xC00312: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/animate_palette.asm:6 END_STACK_VARS
    case 0xC00313: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/animate_palette.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC00313.
    case 0xC00315: cpu.execute_instruction<0xFF>(0x5CAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/animate_palette.asm:6 END_STACK_VARS
    case 0xC00316: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/animate_palette.asm:7 LDA OVERWORLD_PALETTE_ANIM + overworld_palette_anim::timer
    case 0xC00317: cpu.execute_instruction<0xAD>(0x00445C, 3); return true;
    // src/system/animate_palette.asm:7 LDA OVERWORLD_PALETTE_ANIM + overworld_palette_anim::timer
    // Overlapping static entry reached from 0xC00315.
    case 0xC00319: cpu.execute_instruction<0x44>(0x008D3A, 3); return true;
    // src/system/animate_palette.asm:8 DEC
    case 0xC0031A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/system/animate_palette.asm:9 STA OVERWORLD_PALETTE_ANIM + overworld_palette_anim::timer
    case 0xC0031B: cpu.execute_instruction<0x8D>(0x00445C, 3); return true;
    // src/system/animate_palette.asm:9 STA OVERWORLD_PALETTE_ANIM + overworld_palette_anim::timer
    // Overlapping static entry reached from 0xC00319.
    case 0xC0031C: cpu.execute_instruction<0x5C>(0x39D044, 4); return true;
    // src/system/animate_palette.asm:10 BNE @UNKNOWN1
    case 0xC0031E: cpu.execute_instruction<0xD0>(0x000039, 2); return true;
    // src/system/animate_palette.asm:11 LDX #.LOWORD(OVERWORLD_PALETTE_ANIM) + overworld_palette_anim::index
    case 0xC00320: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00005E, 2); else cpu.execute_instruction<0xA2>(0x00445E, 3); return true;
    // src/system/animate_palette.asm:11 LDX #.LOWORD(OVERWORLD_PALETTE_ANIM) + overworld_palette_anim::index
    // Overlapping static entry reached from 0xC00320.
    case 0xC00322: cpu.execute_instruction<0x44>(0x000E86, 3); return true;
    // src/system/animate_palette.asm:12 STX @LOCAL00
    case 0xC00323: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/animate_palette.asm:13 LDA __BSS_START__,X
    case 0xC00325: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/animate_palette.asm:14 ASL
    case 0xC00328: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/animate_palette.asm:21 TAX
    case 0xC00329: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/animate_palette.asm:22 LDA OVERWORLD_PALETTE_ANIM + overworld_palette_anim::delays,X
    case 0xC0032A: cpu.execute_instruction<0xBD>(0x004460, 3); return true;
    // src/system/animate_palette.asm:24 BNE @UNKNOWN0
    case 0xC0032D: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/system/animate_palette.asm:25 LDA #0
    case 0xC0032F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/animate_palette.asm:25 LDA #0
    // Overlapping static entry reached from 0xC0032F.
    case 0xC00331: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/system/animate_palette.asm:26 LDX @LOCAL00
    case 0xC00332: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/animate_palette.asm:27 STA __BSS_START__,X
    case 0xC00334: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/animate_palette.asm:29 LDX #.LOWORD(OVERWORLD_PALETTE_ANIM) + overworld_palette_anim::index
    case 0xC00337: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00005E, 2); else cpu.execute_instruction<0xA2>(0x00445E, 3); return true;
    // src/system/animate_palette.asm:29 LDX #.LOWORD(OVERWORLD_PALETTE_ANIM) + overworld_palette_anim::index
    // Overlapping static entry reached from 0xC00337.
    case 0xC00339: cpu.execute_instruction<0x44>(0x000E86, 3); return true;
    // src/system/animate_palette.asm:30 STX @LOCAL00
    case 0xC0033A: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/animate_palette.asm:31 LDA __BSS_START__,X
    case 0xC0033C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/animate_palette.asm:32 ASL
    case 0xC0033F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/animate_palette.asm:39 TAX
    case 0xC00340: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/animate_palette.asm:40 LDA OVERWORLD_PALETTE_ANIM + overworld_palette_anim::delays,X
    case 0xC00341: cpu.execute_instruction<0xBD>(0x004460, 3); return true;
    // src/system/animate_palette.asm:42 STA OVERWORLD_PALETTE_ANIM + overworld_palette_anim::timer
    case 0xC00344: cpu.execute_instruction<0x8D>(0x00445C, 3); return true;
    // src/system/animate_palette.asm:43 LDX @LOCAL00
    case 0xC00347: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/animate_palette.asm:44 LDA __BSS_START__,X
    case 0xC00349: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/animate_palette.asm:45 JSL UNKNOWN_C0A1F2
    case 0xC0034C: cpu.execute_instruction<0x22>(0xC0A1F2, 4); return true;
    // src/system/animate_palette.asm:46 LDX @LOCAL00
    case 0xC00350: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/animate_palette.asm:47 LDA __BSS_START__,X
    case 0xC00352: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/animate_palette.asm:48 INC
    case 0xC00355: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/animate_palette.asm:49 STA __BSS_START__,X
    case 0xC00356: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/animate_palette.asm:51 END_C_FUNCTION
    case 0xC00359: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/animate_palette.asm:51 END_C_FUNCTION
    case 0xC0035A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/animate_tileset.asm (source_named).
bool execute_system_animate_tileset_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/animate_tileset.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC00172: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/animate_tileset.asm:9 END_STACK_VARS
    case 0xC00174: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/animate_tileset.asm:9 END_STACK_VARS
    case 0xC00175: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/animate_tileset.asm:9 END_STACK_VARS
    case 0xC00176: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/animate_tileset.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC00176.
    case 0xC00178: cpu.execute_instruction<0xFF>(0xDCA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/animate_tileset.asm:9 END_STACK_VARS
    case 0xC00179: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/animate_tileset.asm:10 LDA #.LOWORD(OVERWORLD_TILESET_ANIM)
    case 0xC0017A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DC, 2); else cpu.execute_instruction<0xA9>(0x0043DC, 3); return true;
    // src/system/animate_tileset.asm:10 LDA #.LOWORD(OVERWORLD_TILESET_ANIM)
    // Overlapping static entry reached from 0xC0017A.
    case 0xC0017C: cpu.execute_instruction<0x43>(0x000085, 2); return true;
    // src/system/animate_tileset.asm:11 STA @LOCAL03
    case 0xC0017D: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/system/animate_tileset.asm:11 STA @LOCAL03
    // Overlapping static entry reached from 0xC0017C.
    case 0xC0017E: cpu.execute_instruction<0x16>(0x000064, 2); return true;
    // src/system/animate_tileset.asm:12 STZ @LOCAL02
    case 0xC0017F: cpu.execute_instruction<0x64>(0x000014, 2); return true;
    // src/system/animate_tileset.asm:12 STZ @LOCAL02
    // Overlapping static entry reached from 0xC0017E.
    case 0xC00180: cpu.execute_instruction<0x14>(0x00004C, 2); return true;
    // src/system/animate_tileset.asm:13 JMP @UNKNOWN4
    case 0xC00181: cpu.execute_instruction<0x4C>(0x000231, 3); return true;
    // src/system/animate_tileset.asm:13 JMP @UNKNOWN4
    // Overlapping static entry reached from 0xC00180.
    case 0xC00182: cpu.execute_instruction<0x31>(0x000002, 2); return true;
    // src/system/animate_tileset.asm:15 LDA @LOCAL03
    case 0xC00184: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/system/animate_tileset.asm:16 CLC
    case 0xC00186: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/animate_tileset.asm:17 ADC #overworld_tileset_anim::frames_until_update
    case 0xC00187: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/system/animate_tileset.asm:17 ADC #overworld_tileset_anim::frames_until_update
    // Overlapping static entry reached from 0xC00187.
    case 0xC00189: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/system/animate_tileset.asm:18 TAX
    case 0xC0018A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/animate_tileset.asm:19 LDA __BSS_START__,X
    case 0xC0018B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/animate_tileset.asm:20 DEC
    case 0xC0018E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/system/animate_tileset.asm:21 STA __BSS_START__,X
    case 0xC0018F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/system/animate_tileset.asm:22 BNEL @UNKNOWN3
    case 0xC00192: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/system/animate_tileset.asm:22 BNEL @UNKNOWN3
    case 0xC00194: cpu.execute_instruction<0x4C>(0x000227, 3); return true;
    // src/system/animate_tileset.asm:23 LDY #overworld_tileset_anim::frame_delay
    case 0xC00197: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/system/animate_tileset.asm:23 LDY #overworld_tileset_anim::frame_delay
    // Overlapping static entry reached from 0xC00197.
    case 0xC00199: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/system/animate_tileset.asm:24 LDA (@LOCAL03),Y
    case 0xC0019A: cpu.execute_instruction<0xB1>(0x000016, 2); return true;
    // src/system/animate_tileset.asm:25 STA __BSS_START__,X
    case 0xC0019C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/animate_tileset.asm:26 LDA @LOCAL03
    case 0xC0019F: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/system/animate_tileset.asm:27 CLC
    case 0xC001A1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/animate_tileset.asm:28 ADC #overworld_tileset_anim::destination_address2
    case 0xC001A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000C, 2); else cpu.execute_instruction<0x69>(0x00000C, 3); return true;
    // src/system/animate_tileset.asm:28 ADC #overworld_tileset_anim::destination_address2
    // Overlapping static entry reached from 0xC001A2.
    case 0xC001A4: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/system/animate_tileset.asm:29 TAX
    case 0xC001A5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/animate_tileset.asm:30 LDA __BSS_START__,X
    case 0xC001A6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/animate_tileset.asm:31 CMP (@LOCAL03) ;overworld_tileset_anim::unknown0
    case 0xC001A9: cpu.execute_instruction<0xD2>(0x000016, 2); return true;
    // src/system/animate_tileset.asm:32 BNE @UNKNOWN2
    case 0xC001AB: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/system/animate_tileset.asm:33 LDA #0
    case 0xC001AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/animate_tileset.asm:33 LDA #0
    // Overlapping static entry reached from 0xC001AD.
    case 0xC001AF: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/system/animate_tileset.asm:34 STA __BSS_START__,X
    case 0xC001B0: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/animate_tileset.asm:35 LDY #overworld_tileset_anim::source_offset
    case 0xC001B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/system/animate_tileset.asm:35 LDY #overworld_tileset_anim::source_offset
    // Overlapping static entry reached from 0xC001B3.
    case 0xC001B5: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/system/animate_tileset.asm:36 LDA (@LOCAL03),Y
    case 0xC001B6: cpu.execute_instruction<0xB1>(0x000016, 2); return true;
    // src/system/animate_tileset.asm:37 LDY #overworld_tileset_anim::source_offset2
    case 0xC001B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/system/animate_tileset.asm:37 LDY #overworld_tileset_anim::source_offset2
    // Overlapping static entry reached from 0xC001B8.
    case 0xC001BA: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/system/animate_tileset.asm:38 STA (@LOCAL03),Y
    case 0xC001BB: cpu.execute_instruction<0x91>(0x000016, 2); return true;
    // src/system/animate_tileset.asm:40 LDA @LOCAL03
    case 0xC001BD: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/system/animate_tileset.asm:41 STA @VIRTUAL04
    case 0xC001BF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/animate_tileset.asm:42 INC @VIRTUAL04
    case 0xC001C1: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/system/animate_tileset.asm:43 INC @VIRTUAL04
    case 0xC001C3: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/system/animate_tileset.asm:44 INC @VIRTUAL04
    case 0xC001C5: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/system/animate_tileset.asm:45 INC @VIRTUAL04
    case 0xC001C7: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/system/animate_tileset.asm:46 LDA @LOCAL03 ;overworld_tileset_anim::copy_size
    case 0xC001C9: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/system/animate_tileset.asm:47 CLC
    case 0xC001CB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/animate_tileset.asm:48 ADC #overworld_tileset_anim::source_offset2
    case 0xC001CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000E, 2); else cpu.execute_instruction<0x69>(0x00000E, 3); return true;
    // src/system/animate_tileset.asm:48 ADC #overworld_tileset_anim::source_offset2
    // Overlapping static entry reached from 0xC001CC.
    case 0xC001CE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/animate_tileset.asm:49 STA @VIRTUAL02
    case 0xC001CF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/animate_tileset.asm:50 STA @LOCAL01
    case 0xC001D1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/animate_tileset.asm:51 LOADPTR ANIMATED_TILESET_BUFFER, @VIRTUAL06
    case 0xC001D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00C000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/animate_tileset.asm:51 LOADPTR ANIMATED_TILESET_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC001D3.
    case 0xC001D5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/animate_tileset.asm:51 LOADPTR ANIMATED_TILESET_BUFFER, @VIRTUAL06
    case 0xC001D6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/animate_tileset.asm:51 LOADPTR ANIMATED_TILESET_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC001D5.
    case 0xC001D7: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/animate_tileset.asm:51 LOADPTR ANIMATED_TILESET_BUFFER, @VIRTUAL06
    case 0xC001D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/animate_tileset.asm:51 LOADPTR ANIMATED_TILESET_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC001D7.
    case 0xC001D9: cpu.execute_instruction<0x7E>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/animate_tileset.asm:51 LOADPTR ANIMATED_TILESET_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC001D8.
    case 0xC001DA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/animate_tileset.asm:51 LOADPTR ANIMATED_TILESET_BUFFER, @VIRTUAL06
    case 0xC001DB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/animate_tileset.asm:51 LOADPTR ANIMATED_TILESET_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC001D9.
    case 0xC001DC: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/animate_tileset.asm:52 LDX @VIRTUAL02
    case 0xC001DD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/animate_tileset.asm:53 LDA __BSS_START__,X
    case 0xC001DF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/animate_tileset.asm:54 CLC
    case 0xC001E2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/animate_tileset.asm:55 ADC @VIRTUAL06
    case 0xC001E3: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/system/animate_tileset.asm:56 STA @VIRTUAL06
    case 0xC001E5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/animate_tileset.asm:57 STA @LOCAL00
    case 0xC001E7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/animate_tileset.asm:58 LDA @VIRTUAL06+2
    case 0xC001E9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/animate_tileset.asm:59 STA @LOCAL00+2
    case 0xC001EB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/animate_tileset.asm:60 LDY #overworld_tileset_anim::destination_address
    case 0xC001ED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/system/animate_tileset.asm:60 LDY #overworld_tileset_anim::destination_address
    // Overlapping static entry reached from 0xC001ED.
    case 0xC001EF: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/system/animate_tileset.asm:61 LDA (@LOCAL03),Y
    case 0xC001F0: cpu.execute_instruction<0xB1>(0x000016, 2); return true;
    // src/system/animate_tileset.asm:62 TAY
    case 0xC001F2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/animate_tileset.asm:63 LDX @VIRTUAL04
    case 0xC001F3: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/system/animate_tileset.asm:64 LDA __BSS_START__,X
    case 0xC001F5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/animate_tileset.asm:65 TAX
    case 0xC001F8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/animate_tileset.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC001F9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/animate_tileset.asm:67 LDA #0
    case 0xC001FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/animate_tileset.asm:68 JSL PREPARE_VRAM_COPY
    case 0xC001FD: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/system/animate_tileset.asm:68 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC001FB.
    case 0xC001FE: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/system/animate_tileset.asm:68 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC001FE.
    case 0xC00200: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A6, 2); else cpu.execute_instruction<0xC0>(0x0004A6, 3); return true;
    // src/system/animate_tileset.asm:70 LDX @VIRTUAL04
    case 0xC00201: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/system/animate_tileset.asm:70 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC00200.
    case 0xC00202: cpu.execute_instruction<0x04>(0x0000BD, 2); return true;
    // src/system/animate_tileset.asm:71 LDA __BSS_START__,X
    case 0xC00203: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/animate_tileset.asm:71 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC00202.
    case 0xC00204: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/system/animate_tileset.asm:72 PHA
    case 0xC00206: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/animate_tileset.asm:73 LDX @VIRTUAL02
    case 0xC00207: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/animate_tileset.asm:74 LDA __BSS_START__,X
    case 0xC00209: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/animate_tileset.asm:75 PLY
    case 0xC0020C: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/system/animate_tileset.asm:76 STY @VIRTUAL02
    case 0xC0020D: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/system/animate_tileset.asm:77 CLC
    case 0xC0020F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/animate_tileset.asm:78 ADC @VIRTUAL02
    case 0xC00210: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/system/animate_tileset.asm:79 LDX @LOCAL01
    case 0xC00212: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/system/animate_tileset.asm:80 STX @VIRTUAL02
    case 0xC00214: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/system/animate_tileset.asm:81 STA __BSS_START__,X
    case 0xC00216: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/animate_tileset.asm:82 LDA @LOCAL03
    case 0xC00219: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/system/animate_tileset.asm:83 CLC
    case 0xC0021B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/animate_tileset.asm:84 ADC #overworld_tileset_anim::destination_address2
    case 0xC0021C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000C, 2); else cpu.execute_instruction<0x69>(0x00000C, 3); return true;
    // src/system/animate_tileset.asm:84 ADC #overworld_tileset_anim::destination_address2
    // Overlapping static entry reached from 0xC0021C.
    case 0xC0021E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/system/animate_tileset.asm:85 TAX
    case 0xC0021F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/animate_tileset.asm:86 LDA __BSS_START__,X
    case 0xC00220: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/animate_tileset.asm:87 INC
    case 0xC00223: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/animate_tileset.asm:88 STA __BSS_START__,X
    case 0xC00224: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/animate_tileset.asm:90 LDA @LOCAL03
    case 0xC00227: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/system/animate_tileset.asm:91 CLC
    case 0xC00229: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/animate_tileset.asm:92 ADC #.SIZEOF(overworld_tileset_anim)
    case 0xC0022A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/system/animate_tileset.asm:92 ADC #.SIZEOF(overworld_tileset_anim)
    // Overlapping static entry reached from 0xC0022A.
    case 0xC0022C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/animate_tileset.asm:93 STA @LOCAL03
    case 0xC0022D: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/system/animate_tileset.asm:94 INC @LOCAL02
    case 0xC0022F: cpu.execute_instruction<0xE6>(0x000014, 2); return true;
    // src/system/animate_tileset.asm:96 LDA LOADED_ANIMATED_TILE_COUNT
    case 0xC00231: cpu.execute_instruction<0xAD>(0x004472, 3); return true;
    // src/system/animate_tileset.asm:97 CMP @LOCAL02
    case 0xC00234: cpu.execute_instruction<0xC5>(0x000014, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/system/animate_tileset.asm:98 BGTL @UNKNOWN0
    case 0xC00236: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/system/animate_tileset.asm:98 BGTL @UNKNOWN0
    case 0xC00238: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/system/animate_tileset.asm:98 BGTL @UNKNOWN0
    case 0xC0023A: cpu.execute_instruction<0x4C>(0x000184, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/animate_tileset.asm:99 END_C_FUNCTION
    case 0xC0023D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/animate_tileset.asm:99 END_C_FUNCTION
    case 0xC0023E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/antipiracy/final_battle_antipiracy_check.asm (source_named).
bool execute_system_antipiracy_final_battle_antipiracy_check_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/antipiracy/final_battle_antipiracy_check.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC3FDC5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:4 LDX #$0033
    case 0xC3FDC7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000033, 2); else cpu.execute_instruction<0xA2>(0x000033, 3); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:4 LDX #$0033
    // Overlapping static entry reached from 0xC3FDC7.
    case 0xC3FDC9: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:5 LDA #$0000
    case 0xC3FDCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:5 LDA #$0000
    // Overlapping static entry reached from 0xC3FDCA.
    case 0xC3FDCC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:7 CLC
    case 0xC3FDCD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:8 ADC f:CHECK_HARDWARE,X
    case 0xC3FDCE: cpu.execute_instruction<0x7F>(0xC0A11C, 4); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:9 DEX
    case 0xC3FDD2: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:10 BPL @UNKNOWN0
    case 0xC3FDD3: cpu.execute_instruction<0x10>(0x0000F8, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:11 SEC
    case 0xC3FDD5: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:12 SBC f:ANTIPIRACY_CHECKSUM_2
    case 0xC3FDD6: cpu.execute_instruction<0xEF>(0xC3FDF2, 4); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:13 BEQ @UNKNOWN3
    case 0xC3FDDA: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC3FDDC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:16 LDX #$0000
    case 0xC3FDDE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x006000, 3); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:17 RTS
    case 0xC3FDE0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:18 LDA #$0000
    case 0xC3FDE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009F00, 3); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:20 STA f:SRAM,X
    case 0xC3FDE3: cpu.execute_instruction<0x9F>(0x300000, 4); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:20 STA f:SRAM,X
    // Overlapping static entry reached from 0xC3FDE1.
    case 0xC3FDE4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:21 INX
    case 0xC3FDE7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:22 BPL @UNKNOWN1
    case 0xC3FDE8: cpu.execute_instruction<0x10>(0x0000F9, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:23 LDA #$0034
    case 0xC3FDEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000034, 2); else cpu.execute_instruction<0xA9>(0x008D34, 3); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:24 STA DMA_QUEUE_INDEX
    case 0xC3FDEC: cpu.execute_instruction<0x8D>(0x000000, 3); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:24 STA DMA_QUEUE_INDEX
    // Overlapping static entry reached from 0xC3FDEA.
    case 0xC3FDED: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:26 BRA @UNKNOWN2
    case 0xC3FDEF: cpu.execute_instruction<0x80>(0x0000FE, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:28 RTL
    case 0xC3FDF1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/antipiracy/sram_check_routine_checksum.asm (source_named).
bool execute_system_antipiracy_sram_check_routine_checksum_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/antipiracy/sram_check_routine_checksum.asm:4 LDX #$0033
    case 0xC1FFD3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000033, 2); else cpu.execute_instruction<0xA2>(0x000033, 3); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:4 LDX #$0033
    // Overlapping static entry reached from 0xC1FFD3.
    case 0xC1FFD5: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:5 REP #PROC_FLAGS::ACCUM8
    case 0xC1FFD6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:6 LDA #$0000
    case 0xC1FFD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:6 LDA #$0000
    // Overlapping static entry reached from 0xC1FFD8.
    case 0xC1FFDA: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:7 STA PIRACY_FLAG
    case 0xC1FFDB: cpu.execute_instruction<0x8D>(0x00B539, 3); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:9 CLC
    case 0xC1FFDE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:10 ADC f:CHECK_HARDWARE,X
    case 0xC1FFDF: cpu.execute_instruction<0x7F>(0xC0A11C, 4); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:11 DEX
    case 0xC1FFE3: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:12 BPL @UNKNOWN0
    case 0xC1FFE4: cpu.execute_instruction<0x10>(0x0000F8, 2); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:13 SEC
    case 0xC1FFE6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:14 SBC f:SRAM_CHECK_ROUTINE_CHECKSUM_VALUE
    case 0xC1FFE7: cpu.execute_instruction<0xEF>(0xC1FFEF, 4); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:15 STA PIRACY_FLAG
    case 0xC1FFEB: cpu.execute_instruction<0x8D>(0x00B539, 3); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:19 RTL
    case 0xC1FFEE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/center_screen.asm (source_named).
bool execute_system_center_screen_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/center_screen.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0400E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/center_screen.asm:8 END_STACK_VARS
    case 0xC04010: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/center_screen.asm:8 END_STACK_VARS
    case 0xC04011: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/center_screen.asm:8 END_STACK_VARS
    case 0xC04012: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/center_screen.asm:8 END_STACK_VARS
    case 0xC04013: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/center_screen.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC04013.
    case 0xC04015: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/center_screen.asm:8 END_STACK_VARS
    case 0xC04016: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/center_screen.asm:8 END_STACK_VARS
    case 0xC04017: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/center_screen.asm:9 STA @LOCAL00
    case 0xC04018: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/center_screen.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC04015.
    case 0xC04019: cpu.execute_instruction<0x0E>(0x00388A, 3); return true;
    // src/system/center_screen.asm:10 TXA
    case 0xC0401A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/center_screen.asm:11 SEC
    case 0xC0401B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/center_screen.asm:12 SBC #112
    case 0xC0401C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000070, 2); else cpu.execute_instruction<0xE9>(0x000070, 3); return true;
    // src/system/center_screen.asm:12 SBC #112
    // Overlapping static entry reached from 0xC0401C.
    case 0xC0401E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/system/center_screen.asm:13 TAX
    case 0xC0401F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/center_screen.asm:14 LDA @LOCAL00
    case 0xC04020: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/center_screen.asm:15 SEC
    case 0xC04022: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/center_screen.asm:16 SBC #128
    case 0xC04023: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/system/center_screen.asm:16 SBC #128
    // Overlapping static entry reached from 0xC04023.
    case 0xC04025: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/system/center_screen.asm:17 JSR REFRESH_MAP_AT_POSITION
    case 0xC04026: cpu.execute_instruction<0x20>(0x001558, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/center_screen.asm:18 END_C_FUNCTION
    case 0xC04029: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/center_screen.asm:18 END_C_FUNCTION
    case 0xC0402A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/check_hardware.asm (source_named).
bool execute_system_check_hardware_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/check_hardware.asm:6 SEP #PROC_FLAGS::ACCUM8
    case 0xC0A11C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/check_hardware.asm:7 LDA #$30
    case 0xC0A11E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x008F30, 3); return true;
    // src/system/check_hardware.asm:8 STA f:ANTIPIRACY_SCRATCH_SPACE
    case 0xC0A120: cpu.execute_instruction<0x8F>(0x307FF0, 4); return true;
    // src/system/check_hardware.asm:8 STA f:ANTIPIRACY_SCRATCH_SPACE
    // Overlapping static entry reached from 0xC0A11E.
    case 0xC0A121: cpu.execute_instruction<0xF0>(0x00007F, 2); return true;
    // src/system/check_hardware.asm:8 STA f:ANTIPIRACY_SCRATCH_SPACE
    // Overlapping static entry reached from 0xC0A121.
    case 0xC0A123: cpu.execute_instruction<0x30>(0x00001A, 2); return true;
    // src/system/check_hardware.asm:9 INC
    case 0xC0A124: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/check_hardware.asm:10 STA f:ANTIPIRACY_MIRROR_TEST
    case 0xC0A125: cpu.execute_instruction<0x8F>(0x317FF0, 4); return true;
    // src/system/check_hardware.asm:10 STA f:ANTIPIRACY_MIRROR_TEST
    // Overlapping static entry reached from 0xC0A19E.
    case 0xC0A126: cpu.execute_instruction<0xF0>(0x00007F, 2); return true;
    // src/system/check_hardware.asm:10 STA f:ANTIPIRACY_MIRROR_TEST
    // Overlapping static entry reached from 0xC0A126.
    case 0xC0A128: cpu.execute_instruction<0x31>(0x0000CF, 2); return true;
    // src/system/check_hardware.asm:11 CMP f:ANTIPIRACY_SCRATCH_SPACE
    case 0xC0A129: cpu.execute_instruction<0xCF>(0x307FF0, 4); return true;
    // src/system/check_hardware.asm:11 CMP f:ANTIPIRACY_SCRATCH_SPACE
    // Overlapping static entry reached from 0xC0A128.
    case 0xC0A12A: cpu.execute_instruction<0xF0>(0x00007F, 2); return true;
    // src/system/check_hardware.asm:11 CMP f:ANTIPIRACY_SCRATCH_SPACE
    // Overlapping static entry reached from 0xC0A12A.
    case 0xC0A12C: cpu.execute_instruction<0x30>(0x0000F0, 2); return true;
    // src/system/check_hardware.asm:12 BEQ @UNKNOWN0
    case 0xC0A12D: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/system/check_hardware.asm:12 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC0A12C.
    case 0xC0A12E: cpu.execute_instruction<0x0C>(0x0020C2, 3); return true;
    // src/system/check_hardware.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC0A12F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/check_hardware.asm:14 PLA
    case 0xC0A131: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/check_hardware.asm:15 TSC
    case 0xC0A132: cpu.execute_instruction<0x3B>(0x000000, 1); return true;
    // src/system/check_hardware.asm:16 SBC #$0100
    case 0xC0A133: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000100, 3); return true;
    // src/system/check_hardware.asm:16 SBC #$0100
    // Overlapping static entry reached from 0xC0A133.
    case 0xC0A135: cpu.execute_instruction<0x01>(0x00005B, 2); return true;
    // src/system/check_hardware.asm:17 TCD
    case 0xC0A136: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/check_hardware.asm:18 JMP f:DISPLAY_ANTI_PIRACY_SCREEN
    case 0xC0A137: cpu.execute_instruction<0x5C>(0xC30100, 4); return true;
    // src/system/check_hardware.asm:21 LDA f:STAT78
    case 0xC0A13B: cpu.execute_instruction<0xAF>(0x00213F, 4); return true;
    // src/system/check_hardware.asm:22 AND #$10
    case 0xC0A13F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x00F010, 3); return true;
    // src/system/check_hardware.asm:23 BEQ @UNKNOWN1
    case 0xC0A141: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/system/check_hardware.asm:23 BEQ @UNKNOWN1
    // Overlapping static entry reached from 0xC0A13F.
    case 0xC0A142: cpu.execute_instruction<0x0C>(0x0020C2, 3); return true;
    // src/system/check_hardware.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC0A143: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/check_hardware.asm:25 PLA
    case 0xC0A145: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/check_hardware.asm:26 TSC
    case 0xC0A146: cpu.execute_instruction<0x3B>(0x000000, 1); return true;
    // src/system/check_hardware.asm:27 SBC #$0100
    case 0xC0A147: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000100, 3); return true;
    // src/system/check_hardware.asm:27 SBC #$0100
    // Overlapping static entry reached from 0xC0A147.
    case 0xC0A149: cpu.execute_instruction<0x01>(0x00005B, 2); return true;
    // src/system/check_hardware.asm:28 TCD
    case 0xC0A14A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/check_hardware.asm:29 JMP f:DISPLAY_FAULTY_GAMEPAK_SCREEN
    case 0xC0A14B: cpu.execute_instruction<0x5C>(0xC30142, 4); return true;
    // src/system/check_hardware.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC0A14F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/check_hardware.asm:33 RTL
    case 0xC0A151: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/copy_to_vram.asm (source_named).
bool execute_system_copy_to_vram_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/copy_to_vram.asm:3 PHP
    case 0xC0865F: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/copy_to_vram.asm:4 PHY
    case 0xC08660: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/system/copy_to_vram.asm:5 SEP #PROC_FLAGS::INDEX8
    case 0xC08661: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/system/copy_to_vram.asm:6 LDY <INIDISP_MIRROR + 0
    case 0xC08663: cpu.execute_instruction<0xA4>(0x00000D, 2); return true;
    // src/system/copy_to_vram.asm:7 BMI @UNKNOWN4
    case 0xC08665: cpu.execute_instruction<0x30>(0x00003E, 2); return true;
    // src/system/copy_to_vram.asm:8 LDA <DMA_COPY_SIZE + 0
    case 0xC08667: cpu.execute_instruction<0xA5>(0x000092, 2); return true;
    // src/system/copy_to_vram.asm:9 CLC
    case 0xC08669: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/copy_to_vram.asm:10 ADC <DMA_BYTES_COPIED + 0
    case 0xC0866A: cpu.execute_instruction<0x65>(0x000099, 2); return true;
    // src/system/copy_to_vram.asm:11 CMP #$1201
    case 0xC0866C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x001201, 3); return true;
    // src/system/copy_to_vram.asm:11 CMP #$1201
    // Overlapping static entry reached from 0xC0866C.
    case 0xC0866E: cpu.execute_instruction<0x12>(0x000090, 2); return true;
    // src/system/copy_to_vram.asm:12 BCC @UNKNOWN1
    case 0xC0866F: cpu.execute_instruction<0x90>(0x000006, 2); return true;
    // src/system/copy_to_vram.asm:12 BCC @UNKNOWN1
    // Overlapping static entry reached from 0xC0866E.
    case 0xC08670: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // src/system/copy_to_vram.asm:14 LDA <DMA_BYTES_COPIED + 0
    case 0xC08671: cpu.execute_instruction<0xA5>(0x000099, 2); return true;
    // src/system/copy_to_vram.asm:14 LDA <DMA_BYTES_COPIED + 0
    // Overlapping static entry reached from 0xC08670.
    case 0xC08672: cpu.execute_instruction<0x99>(0x00FCD0, 3); return true;
    // src/system/copy_to_vram.asm:15 BNE @UNKNOWN0
    case 0xC08673: cpu.execute_instruction<0xD0>(0x0000FC, 2); return true;
    // src/system/copy_to_vram.asm:16 LDA <DMA_COPY_SIZE + 0
    case 0xC08675: cpu.execute_instruction<0xA5>(0x000092, 2); return true;
    // src/system/copy_to_vram.asm:18 STA <DMA_BYTES_COPIED + 0
    case 0xC08677: cpu.execute_instruction<0x85>(0x000099, 2); return true;
    // src/system/copy_to_vram.asm:19 LDY <LAST_COMPLETED_DMA_INDEX + 0
    case 0xC08679: cpu.execute_instruction<0xA4>(0x000001, 2); return true;
    // src/system/copy_to_vram.asm:20 STY <MEMCPY_WORDS_LEFT + 0
    case 0xC0867B: cpu.execute_instruction<0x84>(0x0000A5, 2); return true;
    // src/system/copy_to_vram.asm:21 LDY <DMA_QUEUE_INDEX + 0
    case 0xC0867D: cpu.execute_instruction<0xA4>(0x000000, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/system/copy_to_vram.asm:22 MOVE_INT64_YPTRDEST <DMA_COPY_MODE + 0, DMA_QUEUE
    case 0xC0867F: cpu.execute_instruction<0xA5>(0x000091, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/system/copy_to_vram.asm:22 MOVE_INT64_YPTRDEST <DMA_COPY_MODE + 0, DMA_QUEUE
    case 0xC08681: cpu.execute_instruction<0x99>(0x000400, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/system/copy_to_vram.asm:22 MOVE_INT64_YPTRDEST <DMA_COPY_MODE + 0, DMA_QUEUE
    case 0xC08684: cpu.execute_instruction<0xA5>(0x000093, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/system/copy_to_vram.asm:22 MOVE_INT64_YPTRDEST <DMA_COPY_MODE + 0, DMA_QUEUE
    case 0xC08686: cpu.execute_instruction<0x99>(0x000402, 3); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/system/copy_to_vram.asm:22 MOVE_INT64_YPTRDEST <DMA_COPY_MODE + 0, DMA_QUEUE
    case 0xC08689: cpu.execute_instruction<0xA5>(0x000095, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/system/copy_to_vram.asm:22 MOVE_INT64_YPTRDEST <DMA_COPY_MODE + 0, DMA_QUEUE
    case 0xC0868B: cpu.execute_instruction<0x99>(0x000404, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/system/copy_to_vram.asm:22 MOVE_INT64_YPTRDEST <DMA_COPY_MODE + 0, DMA_QUEUE
    case 0xC0868E: cpu.execute_instruction<0xA5>(0x000097, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/system/copy_to_vram.asm:22 MOVE_INT64_YPTRDEST <DMA_COPY_MODE + 0, DMA_QUEUE
    case 0xC08690: cpu.execute_instruction<0x99>(0x000406, 3); return true;
    // src/system/copy_to_vram.asm:23 TYA
    case 0xC08693: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/copy_to_vram.asm:24 CLC
    case 0xC08694: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/copy_to_vram.asm:25 ADC #.SIZEOF(queued_dma)
    case 0xC08695: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/system/copy_to_vram.asm:25 ADC #.SIZEOF(queued_dma)
    // Overlapping static entry reached from 0xC08695.
    case 0xC08697: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/system/copy_to_vram.asm:26 TAY
    case 0xC08698: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/copy_to_vram.asm:27 CPY <MEMCPY_WORDS_LEFT + 0
    case 0xC08699: cpu.execute_instruction<0xC4>(0x0000A5, 2); return true;
    // src/system/copy_to_vram.asm:28 BNE @UNKNOWN3
    case 0xC0869B: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/system/copy_to_vram.asm:30 CPY <LAST_COMPLETED_DMA_INDEX + 0
    case 0xC0869D: cpu.execute_instruction<0xC4>(0x000001, 2); return true;
    // src/system/copy_to_vram.asm:31 BEQ @UNKNOWN2
    case 0xC0869F: cpu.execute_instruction<0xF0>(0x0000FC, 2); return true;
    // src/system/copy_to_vram.asm:33 STY <DMA_QUEUE_INDEX + 0
    case 0xC086A1: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/system/copy_to_vram.asm:34 BRA @UNKNOWN5
    case 0xC086A3: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/system/copy_to_vram.asm:36 LDY <DMA_COPY_MODE + 0
    case 0xC086A5: cpu.execute_instruction<0xA4>(0x000091, 2); return true;
    // src/system/copy_to_vram.asm:37 LDA DMA_TABLE,Y
    case 0xC086A7: cpu.execute_instruction<0xB9>(0x008FB0, 3); return true;
    // src/system/copy_to_vram.asm:38 STA DMAP1
    case 0xC086AA: cpu.execute_instruction<0x8D>(0x004310, 3); return true;
    // src/system/copy_to_vram.asm:39 LDX DMA_TABLE + 2,Y
    case 0xC086AD: cpu.execute_instruction<0xBE>(0x008FB2, 3); return true;
    // src/system/copy_to_vram.asm:40 STX VMAIN
    case 0xC086B0: cpu.execute_instruction<0x8E>(0x002115, 3); return true;
    // src/system/copy_to_vram.asm:41 LDA <DMA_COPY_SIZE + 0
    case 0xC086B3: cpu.execute_instruction<0xA5>(0x000092, 2); return true;
    // src/system/copy_to_vram.asm:42 STA DAS1L
    case 0xC086B5: cpu.execute_instruction<0x8D>(0x004315, 3); return true;
    // src/system/copy_to_vram.asm:43 LDA <DMA_COPY_RAM_SRC + 0
    case 0xC086B8: cpu.execute_instruction<0xA5>(0x000094, 2); return true;
    // src/system/copy_to_vram.asm:44 STA A1T1L
    case 0xC086BA: cpu.execute_instruction<0x8D>(0x004312, 3); return true;
    // src/system/copy_to_vram.asm:45 LDX <DMA_COPY_RAM_SRC + 2
    case 0xC086BD: cpu.execute_instruction<0xA6>(0x000096, 2); return true;
    // src/system/copy_to_vram.asm:46 STX A1B1
    case 0xC086BF: cpu.execute_instruction<0x8E>(0x004314, 3); return true;
    // src/system/copy_to_vram.asm:47 LDA <DMA_COPY_VRAM_DEST + 0
    case 0xC086C2: cpu.execute_instruction<0xA5>(0x000097, 2); return true;
    // src/system/copy_to_vram.asm:48 STA VMADDL
    case 0xC086C4: cpu.execute_instruction<0x8D>(0x002116, 3); return true;
    // src/system/copy_to_vram.asm:49 LDX #$02
    case 0xC086C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x008E02, 3); return true;
    // src/system/copy_to_vram.asm:50 STX MDMAEN
    case 0xC086C9: cpu.execute_instruction<0x8E>(0x00420B, 3); return true;
    // src/system/copy_to_vram.asm:50 STX MDMAEN
    // Overlapping static entry reached from 0xC086C7.
    case 0xC086CA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/system/copy_to_vram.asm:50 STX MDMAEN
    // Overlapping static entry reached from 0xC086CA.
    case 0xC086CB: cpu.execute_instruction<0x42>(0x0000AD, 2); return true;
    // src/system/copy_to_vram.asm:51 LDA BASE_HEAP_ADDRESS
    case 0xC086CC: cpu.execute_instruction<0xAD>(0x0000A3, 3); return true;
    // src/system/copy_to_vram.asm:51 LDA BASE_HEAP_ADDRESS
    // Overlapping static entry reached from 0xC086CB.
    case 0xC086CD: cpu.execute_instruction<0xA3>(0x000000, 2); return true;
    // src/system/copy_to_vram.asm:52 STA CURRENT_HEAP_ADDRESS
    case 0xC086CF: cpu.execute_instruction<0x8D>(0x0000A1, 3); return true;
    // src/system/copy_to_vram.asm:54 LDA #0
    case 0xC086D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/copy_to_vram.asm:54 LDA #0
    // Overlapping static entry reached from 0xC086D2.
    case 0xC086D4: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/system/copy_to_vram.asm:55 STA f:DMA_TRANSFER_FLAG
    case 0xC086D5: cpu.execute_instruction<0x8F>(0x7E9E2B, 4); return true;
    // src/system/copy_to_vram.asm:58 REP #PROC_FLAGS::INDEX8
    case 0xC086D9: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/system/copy_to_vram.asm:59 PLY
    case 0xC086DB: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/system/copy_to_vram.asm:60 PLP
    case 0xC086DC: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/copy_to_vram.asm:61 RTS
    case 0xC086DD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/copy_to_vram_redirect.asm (source_named).
bool execute_system_copy_to_vram_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/copy_to_vram_redirect.asm:3 JSR COPY_TO_VRAM
    case 0xC0865B: cpu.execute_instruction<0x20>(0x00865F, 3); return true;
    // src/system/copy_to_vram_redirect.asm:4 RTL
    case 0xC0865E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/debug/check_view_character_mode.asm (source_named).
bool execute_system_debug_check_view_character_mode_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/debug/check_view_character_mode.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEFE746: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/system/debug/check_view_character_mode.asm:4 LDA DEBUG_MODE_NUMBER
    case 0xEFE748: cpu.execute_instruction<0xAD>(0x00B559, 3); return true;
    // src/system/debug/check_view_character_mode.asm:5 CMP #$0002
    case 0xEFE74B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/system/debug/check_view_character_mode.asm:5 CMP #$0002
    // Overlapping static entry reached from 0xEFE74B.
    case 0xEFE74D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/system/debug/check_view_character_mode.asm:6 BNE @UNKNOWN0
    case 0xEFE74E: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/system/debug/check_view_character_mode.asm:7 LDA #$0000
    case 0xEFE750: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/debug/check_view_character_mode.asm:7 LDA #$0000
    // Overlapping static entry reached from 0xEFE750.
    case 0xEFE752: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/system/debug/check_view_character_mode.asm:8 BRA @UNKNOWN1
    case 0xEFE753: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/system/debug/check_view_character_mode.asm:10 LDA #$0001
    case 0xEFE755: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/debug/check_view_character_mode.asm:10 LDA #$0001
    // Overlapping static entry reached from 0xEFE755.
    case 0xEFE757: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/system/debug/check_view_character_mode.asm:12 RTL
    case 0xEFE758: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/debug/display_check_position_debug_overlay.asm (source_named).
bool execute_system_debug_display_check_position_debug_overlay_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/debug/display_check_position_debug_overlay.asm:3 BEGIN_C_FUNCTION
    case 0xEFDCBC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/debug/display_check_position_debug_overlay.asm:7 END_STACK_VARS
    case 0xEFDCBE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/debug/display_check_position_debug_overlay.asm:7 END_STACK_VARS
    case 0xEFDCBF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/display_check_position_debug_overlay.asm:7 END_STACK_VARS
    case 0xEFDCC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/display_check_position_debug_overlay.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xEFDCC0.
    case 0xEFDCC2: cpu.execute_instruction<0xFF>(0x77A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/debug/display_check_position_debug_overlay.asm:7 END_STACK_VARS
    case 0xEFDCC3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:8 LDA #.LOWORD(GAME_STATE)+game_state::leader_x_coord
    case 0xEFDCC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000077, 2); else cpu.execute_instruction<0xA9>(0x009877, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:8 LDA #.LOWORD(GAME_STATE)+game_state::leader_x_coord
    // Overlapping static entry reached from 0xEFDCC4.
    case 0xEFDCC6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:9 STA @VIRTUAL04
    case 0xEFDCC7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:10 LDX @VIRTUAL04
    case 0xEFDCC9: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:11 LDA __BSS_START__,X
    case 0xEFDCCB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:12 XBA
    case 0xEFDCCE: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:13 AND #$00FF
    case 0xEFDCCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xEFDCCF.
    case 0xEFDCD1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:14 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xEFDCD2: cpu.execute_instruction<0x20>(0x00DB95, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:15 TAX
    case 0xEFDCD5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:16 LDA #^__BSS_START__
    case 0xEFDCD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:16 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDCD6.
    case 0xEFDCD8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:17 STA @LOCAL00
    case 0xEFDCD9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:18 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 26
    case 0xEFDCDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000044, 2); else cpu.execute_instruction<0xA9>(0x007F44, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:18 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 26
    // Overlapping static entry reached from 0xEFDCDB.
    case 0xEFDCDD: cpu.execute_instruction<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:19 STA @LOCAL01
    case 0xEFDCDE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:20 TXY
    case 0xEFDCE0: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:21 LDX #8
    case 0xEFDCE1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:21 LDX #8
    // Overlapping static entry reached from 0xEFDCE1.
    case 0xEFDCE3: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xEFDCE4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:23 LDA #0
    case 0xEFDCE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:24 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFDCE8: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:24 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDCE6.
    case 0xEFDCE9: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:26 LDA #.LOWORD(GAME_STATE)+game_state::leader_y_coord
    case 0xEFDCEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007B, 2); else cpu.execute_instruction<0xA9>(0x00987B, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:26 LDA #.LOWORD(GAME_STATE)+game_state::leader_y_coord
    // Overlapping static entry reached from 0xEFDCEC.
    case 0xEFDCEE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:27 STA @VIRTUAL02
    case 0xEFDCEF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:28 LDX @VIRTUAL02
    case 0xEFDCF1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:29 LDA __BSS_START__,X
    case 0xEFDCF3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:30 XBA
    case 0xEFDCF6: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:31 AND #$00FF
    case 0xEFDCF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xEFDCF7.
    case 0xEFDCF9: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:32 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xEFDCFA: cpu.execute_instruction<0x20>(0x00DB95, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:34 TAX
    case 0xEFDCFD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:35 LDA #^__BSS_START__
    case 0xEFDCFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:35 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDCFE.
    case 0xEFDD00: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:36 STA @LOCAL00
    case 0xEFDD01: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:37 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 26
    case 0xEFDD03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x007F4A, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:37 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 26
    // Overlapping static entry reached from 0xEFDD03.
    case 0xEFDD05: cpu.execute_instruction<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:38 STA @LOCAL01
    case 0xEFDD06: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:39 TXY
    case 0xEFDD08: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:40 LDX #8
    case 0xEFDD09: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:40 LDX #8
    // Overlapping static entry reached from 0xEFDD09.
    case 0xEFDD0B: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xEFDD0C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:42 LDA #0
    case 0xEFDD0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:43 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFDD10: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:43 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDD0E.
    case 0xEFDD11: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:44 LDX @VIRTUAL04
    case 0xEFDD14: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:45 LDA __BSS_START__,X
    case 0xEFDD16: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:46 LSR
    case 0xEFDD19: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:47 LSR
    case 0xEFDD1A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:48 LSR
    case 0xEFDD1B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:49 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xEFDD1C: cpu.execute_instruction<0x20>(0x00DB95, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:51 TAX
    case 0xEFDD1F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:52 LDA #^__BSS_START__
    case 0xEFDD20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:52 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDD20.
    case 0xEFDD22: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:53 STA @LOCAL00
    case 0xEFDD23: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:54 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 25
    case 0xEFDD25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x007F24, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:54 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 25
    // Overlapping static entry reached from 0xEFDD25.
    case 0xEFDD27: cpu.execute_instruction<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:55 STA @LOCAL01
    case 0xEFDD28: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:56 TXY
    case 0xEFDD2A: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:57 LDX #8
    case 0xEFDD2B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:57 LDX #8
    // Overlapping static entry reached from 0xEFDD2B.
    case 0xEFDD2D: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xEFDD2E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:59 LDA #0
    case 0xEFDD30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:60 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFDD32: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:60 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDD30.
    case 0xEFDD33: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:61 LDX @VIRTUAL02
    case 0xEFDD36: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:62 LDA __BSS_START__,X
    case 0xEFDD38: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:63 LSR
    case 0xEFDD3B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:64 LSR
    case 0xEFDD3C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:65 LSR
    case 0xEFDD3D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:66 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xEFDD3E: cpu.execute_instruction<0x20>(0x00DB95, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:68 TAX
    case 0xEFDD41: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:69 LDA #^__BSS_START__
    case 0xEFDD42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:69 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDD42.
    case 0xEFDD44: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:70 STA @LOCAL00
    case 0xEFDD45: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:71 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 25
    case 0xEFDD47: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002A, 2); else cpu.execute_instruction<0xA9>(0x007F2A, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:71 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 25
    // Overlapping static entry reached from 0xEFDD47.
    case 0xEFDD49: cpu.execute_instruction<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:72 STA @LOCAL01
    case 0xEFDD4A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:73 TXY
    case 0xEFDD4C: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:74 LDX #8
    case 0xEFDD4D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:74 LDX #8
    // Overlapping static entry reached from 0xEFDD4D.
    case 0xEFDD4F: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xEFDD50: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:76 LDA #0
    case 0xEFDD52: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:77 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFDD54: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:77 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDD52.
    case 0xEFDD55: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:78 LDX @VIRTUAL04
    case 0xEFDD58: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:79 LDA __BSS_START__,X
    case 0xEFDD5A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:80 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xEFDD5D: cpu.execute_instruction<0x20>(0x00DB95, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:82 TAX
    case 0xEFDD60: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:83 LDA #^__BSS_START__
    case 0xEFDD61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:83 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDD61.
    case 0xEFDD63: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:84 STA @LOCAL00
    case 0xEFDD64: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:85 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 24
    case 0xEFDD66: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x007F04, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:85 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 24
    // Overlapping static entry reached from 0xEFDD66.
    case 0xEFDD68: cpu.execute_instruction<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:86 STA @LOCAL01
    case 0xEFDD69: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:87 TXY
    case 0xEFDD6B: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:88 LDX #8
    case 0xEFDD6C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:88 LDX #8
    // Overlapping static entry reached from 0xEFDD6C.
    case 0xEFDD6E: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:89 SEP #PROC_FLAGS::ACCUM8
    case 0xEFDD6F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:90 LDA #0
    case 0xEFDD71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:91 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFDD73: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:91 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDD71.
    case 0xEFDD74: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:92 LDX @VIRTUAL02
    case 0xEFDD77: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:93 LDA __BSS_START__,X
    case 0xEFDD79: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:94 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xEFDD7C: cpu.execute_instruction<0x20>(0x00DB95, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:96 TAX
    case 0xEFDD7F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:97 LDA #^__BSS_START__
    case 0xEFDD80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:97 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDD80.
    case 0xEFDD82: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:98 STA @LOCAL00
    case 0xEFDD83: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:99 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 24
    case 0xEFDD85: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x007F0A, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:99 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 24
    // Overlapping static entry reached from 0xEFDD85.
    case 0xEFDD87: cpu.execute_instruction<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:100 STA @LOCAL01
    case 0xEFDD88: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:101 TXY
    case 0xEFDD8A: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:102 LDX #8
    case 0xEFDD8B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:102 LDX #8
    // Overlapping static entry reached from 0xEFDD8B.
    case 0xEFDD8D: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:103 SEP #PROC_FLAGS::ACCUM8
    case 0xEFDD8E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:104 LDA #0
    case 0xEFDD90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:105 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFDD92: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:105 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDD90.
    case 0xEFDD93: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:107 LDX @VIRTUAL04
    case 0xEFDD96: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:108 LDA __BSS_START__,X
    case 0xEFDD98: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:109 XBA
    case 0xEFDD9B: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:110 AND #$00FF
    case 0xEFDD9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:110 AND #$00FF
    // Overlapping static entry reached from 0xEFDD9C.
    case 0xEFDD9E: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:111 PHA
    case 0xEFDD9F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:112 LDY #MAP_WIDTH_TILES
    case 0xEFDDA0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000080, 2); else cpu.execute_instruction<0xA0>(0x000080, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:112 LDY #MAP_WIDTH_TILES
    // Overlapping static entry reached from 0xEFDDA0.
    case 0xEFDDA2: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:113 LDX @VIRTUAL02
    case 0xEFDDA3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:114 LDA __BSS_START__,X
    case 0xEFDDA5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:115 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xEFDDA8: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:116 ASL
    case 0xEFDDAC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:117 ASL
    case 0xEFDDAD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:118 ASL
    case 0xEFDDAE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:119 ASL
    case 0xEFDDAF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:120 ASL
    case 0xEFDDB0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:121 PLY
    case 0xEFDDB1: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:122 STY @VIRTUAL02
    case 0xEFDDB2: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:123 CLC
    case 0xEFDDB4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:124 ADC @VIRTUAL02
    case 0xEFDDB5: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:125 TAX
    case 0xEFDDB7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:126 LDA MAP_DATA_PER_SECTOR_MUSIC,X
    case 0xEFDDB8: cpu.execute_instruction<0xBF>(0xDCD637, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:127 AND #$00FF
    case 0xEFDDBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:127 AND #$00FF
    // Overlapping static entry reached from 0xEFDDBC.
    case 0xEFDDBE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:128 TAX
    case 0xEFDDBF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:129 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xEFDDC0: cpu.execute_instruction<0x20>(0x00DB95, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:130 TAX
    case 0xEFDDC3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:131 LDA #^__BSS_START__
    case 0xEFDDC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:131 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDDC4.
    case 0xEFDDC6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:132 STA @LOCAL00
    case 0xEFDDC7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:133 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 2, 2
    case 0xEFDDC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000042, 2); else cpu.execute_instruction<0xA9>(0x007C42, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:133 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 2, 2
    // Overlapping static entry reached from 0xEFDDC9.
    case 0xEFDDCB: cpu.execute_instruction<0x7C>(0x001085, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:134 STA @LOCAL01
    case 0xEFDDCC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:135 TXY
    case 0xEFDDCE: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:136 INY
    case 0xEFDDCF: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:137 INY
    case 0xEFDDD0: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:138 INY
    case 0xEFDDD1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:139 INY
    case 0xEFDDD2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:140 LDX #4
    case 0xEFDDD3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:140 LDX #4
    // Overlapping static entry reached from 0xEFDDD3.
    case 0xEFDDD5: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:141 SEP #PROC_FLAGS::ACCUM8
    case 0xEFDDD6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:142 LDA #0
    case 0xEFDDD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:143 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFDDDA: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:143 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDDD8.
    case 0xEFDDDB: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:144 LDA CURRENT_SECTOR_ATTRIBUTES
    case 0xEFDDDE: cpu.execute_instruction<0xAD>(0x00438E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:145 JSR INTEGER_TO_BINARY_DEBUG_TILES
    case 0xEFDDE1: cpu.execute_instruction<0x20>(0x00DC69, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:147 TAX
    case 0xEFDDE4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:148 LDA #^__BSS_START__
    case 0xEFDDE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:148 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDDE5.
    case 0xEFDDE7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:149 STA @LOCAL00
    case 0xEFDDE8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:150 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 2, 3
    case 0xEFDDEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000062, 2); else cpu.execute_instruction<0xA9>(0x007C62, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:150 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 2, 3
    // Overlapping static entry reached from 0xEFDDEA.
    case 0xEFDDEC: cpu.execute_instruction<0x7C>(0x001085, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:151 STA @LOCAL01
    case 0xEFDDED: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:152 TXY
    case 0xEFDDEF: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:153 LDX #16
    case 0xEFDDF0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:153 LDX #16
    // Overlapping static entry reached from 0xEFDDF0.
    case 0xEFDDF2: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:154 SEP #PROC_FLAGS::ACCUM8
    case 0xEFDDF3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:155 LDA #0
    case 0xEFDDF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:156 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFDDF7: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:156 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDDF5.
    case 0xEFDDF8: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:157 LDA GAME_STATE+game_state::trodden_tile_type
    case 0xEFDDFB: cpu.execute_instruction<0xAD>(0x009881, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:158 JSR INTEGER_TO_BINARY_DEBUG_TILES
    case 0xEFDDFE: cpu.execute_instruction<0x20>(0x00DC69, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:160 TAX
    case 0xEFDE01: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:161 LDA #^__BSS_START__
    case 0xEFDE02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:161 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDE02.
    case 0xEFDE04: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:162 STA @LOCAL00
    case 0xEFDE05: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:163 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 2, 4
    case 0xEFDE07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000082, 2); else cpu.execute_instruction<0xA9>(0x007C82, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:163 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 2, 4
    // Overlapping static entry reached from 0xEFDE07.
    case 0xEFDE09: cpu.execute_instruction<0x7C>(0x001085, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:164 STA @LOCAL01
    case 0xEFDE0A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:165 TXY
    case 0xEFDE0C: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:166 LDX #16
    case 0xEFDE0D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:166 LDX #16
    // Overlapping static entry reached from 0xEFDE0D.
    case 0xEFDE0F: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:167 SEP #PROC_FLAGS::ACCUM8
    case 0xEFDE10: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:168 LDA #0
    case 0xEFDE12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:169 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFDE14: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:169 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDE12.
    case 0xEFDE15: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/debug/display_check_position_debug_overlay.asm:170 END_C_FUNCTION
    case 0xEFDE18: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/debug/display_check_position_debug_overlay.asm:170 END_C_FUNCTION
    case 0xEFDE19: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/debug/display_menu_options.asm (source_named).
bool execute_system_debug_display_menu_options_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/debug/display_menu_options.asm:3 BEGIN_C_FUNCTION
    case 0xEFDB21: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/debug/display_menu_options.asm:7 END_STACK_VARS
    case 0xEFDB23: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/debug/display_menu_options.asm:7 END_STACK_VARS
    case 0xEFDB24: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/display_menu_options.asm:7 END_STACK_VARS
    case 0xEFDB25: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/display_menu_options.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xEFDB25.
    case 0xEFDB27: cpu.execute_instruction<0xFF>(0xB5A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/debug/display_menu_options.asm:7 END_STACK_VARS
    case 0xEFDB28: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:8 LOADPTR DEBUG_MENU_TEXT_2_LINE_1, @LOCAL00
    case 0xEFDB29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B5, 2); else cpu.execute_instruction<0xA9>(0x00D8B5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:8 LOADPTR DEBUG_MENU_TEXT_2_LINE_1, @LOCAL00
    // Overlapping static entry reached from 0xEFDB29.
    case 0xEFDB2B: cpu.execute_instruction<0xD8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/display_menu_options.asm:8 LOADPTR DEBUG_MENU_TEXT_2_LINE_1, @LOCAL00
    case 0xEFDB2C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:8 LOADPTR DEBUG_MENU_TEXT_2_LINE_1, @LOCAL00
    case 0xEFDB2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:8 LOADPTR DEBUG_MENU_TEXT_2_LINE_1, @LOCAL00
    // Overlapping static entry reached from 0xEFDB2E.
    case 0xEFDB30: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/display_menu_options.asm:8 LOADPTR DEBUG_MENU_TEXT_2_LINE_1, @LOCAL00
    case 0xEFDB31: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_menu_options.asm:9 LDX #0
    case 0xEFDB33: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/debug/display_menu_options.asm:9 LDX #0
    // Overlapping static entry reached from 0xEFDB33.
    case 0xEFDB35: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/system/debug/display_menu_options.asm:10 TXA
    case 0xEFDB36: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/debug/display_menu_options.asm:11 JSR UNKNOWN_EFDABD
    case 0xEFDB37: cpu.execute_instruction<0x20>(0x00DABD, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:12 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @LOCAL00
    case 0xEFDB3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D6, 2); else cpu.execute_instruction<0xA9>(0x00D8D6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:12 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @LOCAL00
    // Overlapping static entry reached from 0xEFDB3A.
    case 0xEFDB3C: cpu.execute_instruction<0xD8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/display_menu_options.asm:12 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @LOCAL00
    case 0xEFDB3D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:12 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @LOCAL00
    case 0xEFDB3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:12 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @LOCAL00
    // Overlapping static entry reached from 0xEFDB3F.
    case 0xEFDB41: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/display_menu_options.asm:12 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @LOCAL00
    case 0xEFDB42: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_menu_options.asm:13 LDX #3
    case 0xEFDB44: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/system/debug/display_menu_options.asm:13 LDX #3
    // Overlapping static entry reached from 0xEFDB44.
    case 0xEFDB46: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/system/debug/display_menu_options.asm:14 LDA #11
    case 0xEFDB47: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000B, 2); else cpu.execute_instruction<0xA9>(0x00000B, 3); return true;
    // src/system/debug/display_menu_options.asm:14 LDA #11
    // Overlapping static entry reached from 0xEFDB47.
    case 0xEFDB49: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/system/debug/display_menu_options.asm:15 JSR UNKNOWN_EFDABD
    case 0xEFDB4A: cpu.execute_instruction<0x20>(0x00DABD, 3); return true;
    // src/system/debug/display_menu_options.asm:16 LDA #6
    case 0xEFDB4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/system/debug/display_menu_options.asm:16 LDA #6
    // Overlapping static entry reached from 0xEFDB4D.
    case 0xEFDB4F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_menu_options.asm:17 STA @VIRTUAL02
    case 0xEFDB50: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/debug/display_menu_options.asm:18 LDY #0
    case 0xEFDB52: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/debug/display_menu_options.asm:18 LDY #0
    // Overlapping static entry reached from 0xEFDB52.
    case 0xEFDB54: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/system/debug/display_menu_options.asm:19 STY @LOCAL01
    case 0xEFDB55: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/system/debug/display_menu_options.asm:20 BRA @UNKNOWN1
    case 0xEFDB57: cpu.execute_instruction<0x80>(0x000035, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:22 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @VIRTUAL06
    case 0xEFDB59: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D6, 2); else cpu.execute_instruction<0xA9>(0x00D8D6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:22 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @VIRTUAL06
    // Overlapping static entry reached from 0xEFDB59.
    case 0xEFDB5B: cpu.execute_instruction<0xD8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/display_menu_options.asm:22 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @VIRTUAL06
    case 0xEFDB5C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:22 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @VIRTUAL06
    case 0xEFDB5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:22 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @VIRTUAL06
    // Overlapping static entry reached from 0xEFDB5E.
    case 0xEFDB60: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/display_menu_options.asm:22 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @VIRTUAL06
    case 0xEFDB61: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/debug/display_menu_options.asm:23 TYA
    case 0xEFDB63: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/system/debug/display_menu_options.asm:24 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xEFDB64: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/system/debug/display_menu_options.asm:24 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xEFDB66: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/system/debug/display_menu_options.asm:24 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xEFDB67: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/system/debug/display_menu_options.asm:24 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xEFDB68: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/system/debug/display_menu_options.asm:24 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xEFDB69: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/system/debug/display_menu_options.asm:24 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xEFDB6A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/system/debug/display_menu_options.asm:25 CLC
    case 0xEFDB6C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/display_menu_options.asm:26 ADC #17
    case 0xEFDB6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000011, 2); else cpu.execute_instruction<0x69>(0x000011, 3); return true;
    // src/system/debug/display_menu_options.asm:26 ADC #17
    // Overlapping static entry reached from 0xEFDB6D.
    case 0xEFDB6F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/system/debug/display_menu_options.asm:27 CLC
    case 0xEFDB70: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/display_menu_options.asm:28 ADC @VIRTUAL06
    case 0xEFDB71: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/system/debug/display_menu_options.asm:29 STA @VIRTUAL06
    case 0xEFDB73: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/debug/display_menu_options.asm:30 STA @LOCAL00
    case 0xEFDB75: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_menu_options.asm:31 LDA @VIRTUAL06+2
    case 0xEFDB77: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/debug/display_menu_options.asm:32 STA @LOCAL00+2
    case 0xEFDB79: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_menu_options.asm:33 LDX @VIRTUAL02
    case 0xEFDB7B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/debug/display_menu_options.asm:34 LDA #8
    case 0xEFDB7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/system/debug/display_menu_options.asm:34 LDA #8
    // Overlapping static entry reached from 0xEFDB7D.
    case 0xEFDB7F: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/system/debug/display_menu_options.asm:35 JSR UNKNOWN_EFDABD
    case 0xEFDB80: cpu.execute_instruction<0x20>(0x00DABD, 3); return true;
    // src/system/debug/display_menu_options.asm:36 INC @VIRTUAL02
    case 0xEFDB83: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/system/debug/display_menu_options.asm:37 INC @VIRTUAL02
    case 0xEFDB85: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/system/debug/display_menu_options.asm:38 INC @VIRTUAL02
    case 0xEFDB87: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/system/debug/display_menu_options.asm:39 LDY @LOCAL01
    case 0xEFDB89: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/system/debug/display_menu_options.asm:40 INY
    case 0xEFDB8B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/debug/display_menu_options.asm:41 STY @LOCAL01
    case 0xEFDB8C: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/system/debug/display_menu_options.asm:43 CPY #7
    case 0xEFDB8E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000007, 2); else cpu.execute_instruction<0xC0>(0x000007, 3); return true;
    // src/system/debug/display_menu_options.asm:43 CPY #7
    // Overlapping static entry reached from 0xEFDB8E.
    case 0xEFDB90: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/debug/display_menu_options.asm:44 BCC @UNKNOWN0
    case 0xEFDB91: cpu.execute_instruction<0x90>(0x0000C6, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/debug/display_menu_options.asm:45 END_C_FUNCTION
    case 0xEFDB93: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/debug/display_menu_options.asm:45 END_C_FUNCTION
    case 0xEFDB94: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/debug/display_view_character_debug_overlay.asm (source_named).
bool execute_system_debug_display_view_character_debug_overlay_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/debug/display_view_character_debug_overlay.asm:3 BEGIN_C_FUNCTION
    case 0xEFDE1A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/debug/display_view_character_debug_overlay.asm:7 END_STACK_VARS
    case 0xEFDE1C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/debug/display_view_character_debug_overlay.asm:7 END_STACK_VARS
    case 0xEFDE1D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/display_view_character_debug_overlay.asm:7 END_STACK_VARS
    case 0xEFDE1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/display_view_character_debug_overlay.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xEFDE1E.
    case 0xEFDE20: cpu.execute_instruction<0xFF>(0x40A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/debug/display_view_character_debug_overlay.asm:7 END_STACK_VARS
    case 0xEFDE21: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:8 LDY #64
    case 0xEFDE22: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000040, 2); else cpu.execute_instruction<0xA0>(0x000040, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:8 LDY #64
    // Overlapping static entry reached from 0xEFDE22.
    case 0xEFDE24: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:9 LDA GAME_STATE+game_state::leader_x_coord
    case 0xEFDE25: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:10 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xEFDE28: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:11 STA @VIRTUAL04
    case 0xEFDE2C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:12 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xEFDE2E: cpu.execute_instruction<0x20>(0x00DB95, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:14 TAX
    case 0xEFDE31: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:15 LDA #^__BSS_START__
    case 0xEFDE32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:15 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDE32.
    case 0xEFDE34: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:16 STA @LOCAL00
    case 0xEFDE35: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:17 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 25
    case 0xEFDE37: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x007F24, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:17 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 25
    // Overlapping static entry reached from 0xEFDE37.
    case 0xEFDE39: cpu.execute_instruction<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:18 STA @LOCAL01
    case 0xEFDE3A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:19 TXY
    case 0xEFDE3C: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:20 LDX #8
    case 0xEFDE3D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:20 LDX #8
    // Overlapping static entry reached from 0xEFDE3D.
    case 0xEFDE3F: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xEFDE40: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:22 LDA #0
    case 0xEFDE42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:23 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFDE44: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:23 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDE42.
    case 0xEFDE45: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:24 LDY #64
    case 0xEFDE48: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000040, 2); else cpu.execute_instruction<0xA0>(0x000040, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:24 LDY #64
    // Overlapping static entry reached from 0xEFDE48.
    case 0xEFDE4A: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:25 LDA GAME_STATE+game_state::leader_y_coord
    case 0xEFDE4B: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:26 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xEFDE4E: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:27 STA @VIRTUAL02
    case 0xEFDE52: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:28 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xEFDE54: cpu.execute_instruction<0x20>(0x00DB95, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:30 TAX
    case 0xEFDE57: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:31 LDA #^__BSS_START__
    case 0xEFDE58: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:31 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDE58.
    case 0xEFDE5A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:32 STA @LOCAL00
    case 0xEFDE5B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:33 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 25
    case 0xEFDE5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002A, 2); else cpu.execute_instruction<0xA9>(0x007F2A, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:33 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 25
    // Overlapping static entry reached from 0xEFDE5D.
    case 0xEFDE5F: cpu.execute_instruction<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:34 STA @LOCAL01
    case 0xEFDE60: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:35 TXY
    case 0xEFDE62: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:36 LDX #8
    case 0xEFDE63: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:36 LDX #8
    // Overlapping static entry reached from 0xEFDE63.
    case 0xEFDE65: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xEFDE66: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:38 LDA #0
    case 0xEFDE68: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:39 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFDE6A: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:39 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDE68.
    case 0xEFDE6B: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:40 LDX @VIRTUAL02
    case 0xEFDE6E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:41 LDA @VIRTUAL04
    case 0xEFDE70: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:42 JSL UNKNOWN_C0263D
    case 0xEFDE72: cpu.execute_instruction<0x22>(0xC0263D, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:43 JSR INTEGER_TO_DECIMAL_DEBUG_TILES
    case 0xEFDE76: cpu.execute_instruction<0x20>(0x00DBF0, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:45 TAX
    case 0xEFDE79: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:46 LDA #^__BSS_START__
    case 0xEFDE7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:46 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDE7A.
    case 0xEFDE7C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:47 STA @LOCAL00
    case 0xEFDE7D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:48 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 21, 25
    case 0xEFDE7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x007F35, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:48 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 21, 25
    // Overlapping static entry reached from 0xEFDE7F.
    case 0xEFDE81: cpu.execute_instruction<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:49 STA @LOCAL01
    case 0xEFDE82: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:50 TXY
    case 0xEFDE84: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:51 LDX #8
    case 0xEFDE85: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:51 LDX #8
    // Overlapping static entry reached from 0xEFDE85.
    case 0xEFDE87: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xEFDE88: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:53 LDA #0
    case 0xEFDE8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:54 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFDE8C: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:54 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDE8A.
    case 0xEFDE8D: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:55 LDA ENEMY_SPAWN_TOO_MANY_ENEMIES_FAILURE_COUNT
    case 0xEFDE90: cpu.execute_instruction<0xAD>(0x004A68, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:56 JSR INTEGER_TO_DECIMAL_DEBUG_TILES
    case 0xEFDE93: cpu.execute_instruction<0x20>(0x00DBF0, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:58 TAX
    case 0xEFDE96: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:59 LDA #^__BSS_START__
    case 0xEFDE97: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:59 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDE97.
    case 0xEFDE99: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:60 STA @LOCAL00
    case 0xEFDE9A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:61 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 26, 25
    case 0xEFDE9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003A, 2); else cpu.execute_instruction<0xA9>(0x007F3A, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:61 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 26, 25
    // Overlapping static entry reached from 0xEFDE9C.
    case 0xEFDE9E: cpu.execute_instruction<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:62 STA @LOCAL01
    case 0xEFDE9F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:63 TXY
    case 0xEFDEA1: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:64 LDX #8
    case 0xEFDEA2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:64 LDX #8
    // Overlapping static entry reached from 0xEFDEA2.
    case 0xEFDEA4: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xEFDEA5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:66 LDA #0
    case 0xEFDEA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:67 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFDEA9: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:67 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDEA7.
    case 0xEFDEAA: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:69 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xEFDEAD: cpu.execute_instruction<0xAD>(0x005D60, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:70 BEQ @UNKNOWN2
    case 0xEFDEB0: cpu.execute_instruction<0xF0>(0x000057, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:71 LDA #0
    case 0xEFDEB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:71 LDA #0
    // Overlapping static entry reached from 0xEFDEB2.
    case 0xEFDEB4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:72 STA @VIRTUAL02
    case 0xEFDEB5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:73 BRA @UNKNOWN1
    case 0xEFDEB7: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:75 LDA @VIRTUAL02
    case 0xEFDEB9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:76 ASL
    case 0xEFDEBB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:77 TAX
    case 0xEFDEBC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:78 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xEFDEBD: cpu.execute_instruction<0xBD>(0x009F8C, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:79 JSR INTEGER_TO_DECIMAL_DEBUG_TILES
    case 0xEFDEC0: cpu.execute_instruction<0x20>(0x00DBF0, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:81 TAX
    case 0xEFDEC3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:82 LDA #^__BSS_START__
    case 0xEFDEC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:82 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDEC4.
    case 0xEFDEC6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:83 STA @LOCAL00
    case 0xEFDEC7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:84 LDA @VIRTUAL02
    case 0xEFDEC9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:85 STA @VIRTUAL04
    case 0xEFDECB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:86 ASL
    case 0xEFDECD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:87 ASL
    case 0xEFDECE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:88 ADC @VIRTUAL04
    case 0xEFDECF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:89 CLC
    case 0xEFDED1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:90 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 6, 26
    case 0xEFDED2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000046, 2); else cpu.execute_instruction<0x69>(0x007F46, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:90 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 6, 26
    // Overlapping static entry reached from 0xEFDED2.
    case 0xEFDED4: cpu.execute_instruction<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:91 STA @LOCAL01
    case 0xEFDED5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:92 TXY
    case 0xEFDED7: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:93 LDX #8
    case 0xEFDED8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:93 LDX #8
    // Overlapping static entry reached from 0xEFDED8.
    case 0xEFDEDA: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:94 SEP #PROC_FLAGS::ACCUM8
    case 0xEFDEDB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:95 LDA #0
    case 0xEFDEDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:96 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFDEDF: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:96 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDEDD.
    case 0xEFDEE0: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:98 INC @VIRTUAL02
    case 0xEFDEE3: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:100 LDA @VIRTUAL02
    case 0xEFDEE5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:101 CMP #5
    case 0xEFDEE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:101 CMP #5
    // Overlapping static entry reached from 0xEFDEE7.
    case 0xEFDEE9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:102 BNE @UNKNOWN0
    case 0xEFDEEA: cpu.execute_instruction<0xD0>(0x0000CD, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:103 LDA CURRENT_BATTLE_GROUP
    case 0xEFDEEC: cpu.execute_instruction<0xAD>(0x004A8C, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:104 JSR INTEGER_TO_DECIMAL_DEBUG_TILES
    case 0xEFDEEF: cpu.execute_instruction<0x20>(0x00DBF0, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:106 TAX
    case 0xEFDEF2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:107 LDA #^__BSS_START__
    case 0xEFDEF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:107 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFDEF3.
    case 0xEFDEF5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:108 STA @LOCAL00
    case 0xEFDEF6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:109 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 1, 26
    case 0xEFDEF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000041, 2); else cpu.execute_instruction<0xA9>(0x007F41, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:109 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 1, 26
    // Overlapping static entry reached from 0xEFDEF8.
    case 0xEFDEFA: cpu.execute_instruction<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:110 STA @LOCAL01
    case 0xEFDEFB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:111 TXY
    case 0xEFDEFD: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:112 LDX #8
    case 0xEFDEFE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:112 LDX #8
    // Overlapping static entry reached from 0xEFDEFE.
    case 0xEFDF00: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:113 SEP #PROC_FLAGS::ACCUM8
    case 0xEFDF01: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:114 LDA #0
    case 0xEFDF03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:115 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFDF05: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:115 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFDF03.
    case 0xEFDF06: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/debug/display_view_character_debug_overlay.asm:117 END_C_FUNCTION
    case 0xEFDF09: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/debug/display_view_character_debug_overlay.asm:117 END_C_FUNCTION
    case 0xEFDF0A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/debug/handle_cursor_movement.asm (source_named).
bool execute_system_debug_handle_cursor_movement_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/debug/handle_cursor_movement.asm:3 BEGIN_C_FUNCTION
    case 0xEFE578: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/debug/handle_cursor_movement.asm:6 END_STACK_VARS
    case 0xEFE57A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/debug/handle_cursor_movement.asm:6 END_STACK_VARS
    case 0xEFE57B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/handle_cursor_movement.asm:6 END_STACK_VARS
    case 0xEFE57C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/handle_cursor_movement.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xEFE57C.
    case 0xEFE57E: cpu.execute_instruction<0xFF>(0x69AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/debug/handle_cursor_movement.asm:6 END_STACK_VARS
    case 0xEFE57F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:7 LDA PAD_HELD
    case 0xEFE580: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:7 LDA PAD_HELD
    // Overlapping static entry reached from 0xEFE57E.
    case 0xEFE582: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:8 STA @LOCAL00
    case 0xEFE583: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:9 AND #PAD::UP
    case 0xEFE585: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:9 AND #PAD::UP
    // Overlapping static entry reached from 0xEFE585.
    case 0xEFE587: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:10 BEQ @UNKNOWN1
    case 0xEFE588: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:11 LDA DEBUG_MENU_CURSOR_POSITION
    case 0xEFE58A: cpu.execute_instruction<0xAD>(0x00B555, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:12 BEQ @UNKNOWN0
    case 0xEFE58D: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:13 DEC DEBUG_MENU_CURSOR_POSITION
    case 0xEFE58F: cpu.execute_instruction<0xCE>(0x00B555, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:14 BRA @UNKNOWN1
    case 0xEFE592: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:16 LDA #6
    case 0xEFE594: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:16 LDA #6
    // Overlapping static entry reached from 0xEFE594.
    case 0xEFE596: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:17 STA DEBUG_MENU_CURSOR_POSITION
    case 0xEFE597: cpu.execute_instruction<0x8D>(0x00B555, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:19 LDA @LOCAL00
    case 0xEFE59A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:20 AND #PAD::DOWN
    case 0xEFE59C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:20 AND #PAD::DOWN
    // Overlapping static entry reached from 0xEFE59C.
    case 0xEFE59E: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:21 BEQ @UNKNOWN3
    case 0xEFE59F: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:21 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xEFE59E.
    case 0xEFE5A0: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:22 LDA DEBUG_MENU_CURSOR_POSITION
    case 0xEFE5A1: cpu.execute_instruction<0xAD>(0x00B555, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:22 LDA DEBUG_MENU_CURSOR_POSITION
    // Overlapping static entry reached from 0xEFE5A0.
    case 0xEFE5A2: cpu.execute_instruction<0x55>(0x0000B5, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:23 CMP #6
    case 0xEFE5A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:23 CMP #6
    // Overlapping static entry reached from 0xEFE5A4.
    case 0xEFE5A6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:24 BEQ @UNKNOWN2
    case 0xEFE5A7: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:25 INC DEBUG_MENU_CURSOR_POSITION
    case 0xEFE5A9: cpu.execute_instruction<0xEE>(0x00B555, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:26 BRA @UNKNOWN3
    case 0xEFE5AC: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:28 STZ DEBUG_MENU_CURSOR_POSITION
    case 0xEFE5AE: cpu.execute_instruction<0x9C>(0x00B555, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:30 LDA DEBUG_CURSOR_ENTITY
    case 0xEFE5B1: cpu.execute_instruction<0xAD>(0x00B553, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:31 ASL
    case 0xEFE5B4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:32 TAX
    case 0xEFE5B5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:33 LDA DEBUG_MENU_CURSOR_POSITION
    case 0xEFE5B6: cpu.execute_instruction<0xAD>(0x00B555, 3); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/system/debug/handle_cursor_movement.asm:34 OPTIMIZED_MULT @VIRTUAL04, 3 * 8
    case 0xEFE5B9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/system/debug/handle_cursor_movement.asm:34 OPTIMIZED_MULT @VIRTUAL04, 3 * 8
    case 0xEFE5BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/system/debug/handle_cursor_movement.asm:34 OPTIMIZED_MULT @VIRTUAL04, 3 * 8
    case 0xEFE5BC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/system/debug/handle_cursor_movement.asm:34 OPTIMIZED_MULT @VIRTUAL04, 3 * 8
    case 0xEFE5BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/system/debug/handle_cursor_movement.asm:34 OPTIMIZED_MULT @VIRTUAL04, 3 * 8
    case 0xEFE5BF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/system/debug/handle_cursor_movement.asm:34 OPTIMIZED_MULT @VIRTUAL04, 3 * 8
    case 0xEFE5C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:35 CLC
    case 0xEFE5C1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:36 ADC #26 * 2
    case 0xEFE5C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000034, 2); else cpu.execute_instruction<0x69>(0x000034, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:36 ADC #26 * 2
    // Overlapping static entry reached from 0xEFE5C2.
    case 0xEFE5C4: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:37 STA ENTITY_ABS_Y_TABLE,X
    case 0xEFE5C5: cpu.execute_instruction<0x9D>(0x000BCA, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:38 LDA PAD_PRESS
    case 0xEFE5C8: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:39 AND #PAD::B_BUTTON | PAD::START_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    case 0xEFE5CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0090A0, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:39 AND #PAD::B_BUTTON | PAD::START_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xEFE5CB.
    case 0xEFE5CD: cpu.execute_instruction<0x90>(0x00008D, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:40 STA DEBUG_MENU_BUTTONS_PRESSED
    case 0xEFE5CE: cpu.execute_instruction<0x8D>(0x00B557, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:40 STA DEBUG_MENU_BUTTONS_PRESSED
    // Overlapping static entry reached from 0xEFE5CD.
    case 0xEFE5CF: cpu.execute_instruction<0x57>(0x0000B5, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/debug/handle_cursor_movement.asm:41 END_C_FUNCTION
    case 0xEFE5D1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/debug/handle_cursor_movement.asm:41 END_C_FUNCTION
    case 0xEFE5D2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/debug/integer_to_binary_debug_tiles.asm (source_named).
bool execute_system_debug_integer_to_binary_debug_tiles_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/debug/integer_to_binary_debug_tiles.asm:3 BEGIN_C_FUNCTION
    case 0xEFDC69: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/debug/integer_to_binary_debug_tiles.asm:9 END_STACK_VARS
    case 0xEFDC6B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/debug/integer_to_binary_debug_tiles.asm:9 END_STACK_VARS
    case 0xEFDC6C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/debug/integer_to_binary_debug_tiles.asm:9 END_STACK_VARS
    case 0xEFDC6D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/integer_to_binary_debug_tiles.asm:9 END_STACK_VARS
    case 0xEFDC6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/integer_to_binary_debug_tiles.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xEFDC6E.
    case 0xEFDC70: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/debug/integer_to_binary_debug_tiles.asm:9 END_STACK_VARS
    case 0xEFDC71: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/debug/integer_to_binary_debug_tiles.asm:9 END_STACK_VARS
    case 0xEFDC72: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:10 TAY
    case 0xEFDC73: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:11 STY @LOCAL02
    case 0xEFDC74: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:12 LDA #16
    case 0xEFDC76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:12 LDA #16
    // Overlapping static entry reached from 0xEFDC76.
    case 0xEFDC78: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:13 JSL SBRK
    case 0xEFDC79: cpu.execute_instruction<0x22>(0xC086DE, 4); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:14 STA @VIRTUAL02
    case 0xEFDC7D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:15 LDX #0
    case 0xEFDC7F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:15 LDX #0
    // Overlapping static entry reached from 0xEFDC7F.
    case 0xEFDC81: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:16 STX @LOCAL01
    case 0xEFDC82: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:17 BRA @UNKNOWN3
    case 0xEFDC84: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:19 LDY @LOCAL02
    case 0xEFDC86: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:20 TYA
    case 0xEFDC88: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:21 AND #$0080
    case 0xEFDC89: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:21 AND #$0080
    // Overlapping static entry reached from 0xEFDC89.
    case 0xEFDC8B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:22 BEQ @UNKNOWN1
    case 0xEFDC8C: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:23 LDA #$2031 ;1 tile, priority
    case 0xEFDC8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000031, 2); else cpu.execute_instruction<0xA9>(0x002031, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:23 LDA #$2031 ;1 tile, priority
    // Overlapping static entry reached from 0xEFDC8E.
    case 0xEFDC90: cpu.execute_instruction<0x20>(0x000E85, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:24 STA @LOCAL00
    case 0xEFDC91: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:25 BRA @UNKNOWN2
    case 0xEFDC93: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:27 LDA #$2030 ;0 tile, priority
    case 0xEFDC95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x002030, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:27 LDA #$2030 ;0 tile, priority
    // Overlapping static entry reached from 0xEFDC95.
    case 0xEFDC97: cpu.execute_instruction<0x20>(0x000E85, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:28 STA @LOCAL00
    case 0xEFDC98: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:30 TXA
    case 0xEFDC9A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:31 ASL
    case 0xEFDC9B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:32 STA @VIRTUAL04
    case 0xEFDC9C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:33 LDA @VIRTUAL02
    case 0xEFDC9E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:34 CLC
    case 0xEFDCA0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:35 ADC @VIRTUAL04
    case 0xEFDCA1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:36 TAX
    case 0xEFDCA3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:37 LDA @LOCAL00
    case 0xEFDCA4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:38 STA __BSS_START__,X
    case 0xEFDCA6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:39 TYA
    case 0xEFDCA9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:40 ASL
    case 0xEFDCAA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:41 TAY
    case 0xEFDCAB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:42 STY @LOCAL02
    case 0xEFDCAC: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:43 LDX @LOCAL01
    case 0xEFDCAE: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:44 INX
    case 0xEFDCB0: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:45 STX @LOCAL01
    case 0xEFDCB1: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:47 CPX #8
    case 0xEFDCB3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000008, 2); else cpu.execute_instruction<0xE0>(0x000008, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:47 CPX #8
    // Overlapping static entry reached from 0xEFDCB3.
    case 0xEFDCB5: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:48 BCC @UNKNOWN0
    case 0xEFDCB6: cpu.execute_instruction<0x90>(0x0000CE, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:49 LDA @VIRTUAL02
    case 0xEFDCB8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/debug/integer_to_binary_debug_tiles.asm:50 END_C_FUNCTION
    case 0xEFDCBA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/debug/integer_to_binary_debug_tiles.asm:50 END_C_FUNCTION
    case 0xEFDCBB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/debug/integer_to_decimal_debug_tiles.asm (source_named).
bool execute_system_debug_integer_to_decimal_debug_tiles_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:3 BEGIN_C_FUNCTION
    case 0xEFDBF0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:12 END_STACK_VARS
    case 0xEFDBF2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:12 END_STACK_VARS
    case 0xEFDBF3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:12 END_STACK_VARS
    case 0xEFDBF4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:12 END_STACK_VARS
    case 0xEFDBF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xEFDBF5.
    case 0xEFDBF7: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:12 END_STACK_VARS
    case 0xEFDBF8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:12 END_STACK_VARS
    case 0xEFDBF9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:13 STA @VIRTUAL04
    case 0xEFDBFA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:13 STA @VIRTUAL04
    // Overlapping static entry reached from 0xEFDBF7.
    case 0xEFDBFB: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:14 STA @LOCAL04
    case 0xEFDBFC: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:14 STA @LOCAL04
    // Overlapping static entry reached from 0xEFDBFB.
    case 0xEFDBFD: cpu.execute_instruction<0x16>(0x0000A0, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:15 LDY #1
    case 0xEFDBFE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:15 LDY #1
    // Overlapping static entry reached from 0xEFDBFD.
    case 0xEFDBFF: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:15 LDY #1
    // Overlapping static entry reached from 0xEFDBFE.
    case 0xEFDC00: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:16 STY @LOCAL03
    case 0xEFDC01: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:17 LDA #8
    case 0xEFDC03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:17 LDA #8
    // Overlapping static entry reached from 0xEFDC03.
    case 0xEFDC05: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:18 JSL SBRK
    case 0xEFDC06: cpu.execute_instruction<0x22>(0xC086DE, 4); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:19 STA @VIRTUAL02
    case 0xEFDC0A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:20 STA @LOCAL02
    case 0xEFDC0C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:21 LDX #3
    case 0xEFDC0E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:21 LDX #3
    // Overlapping static entry reached from 0xEFDC0E.
    case 0xEFDC10: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:22 STX @LOCAL01
    case 0xEFDC11: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:23 BRA @UNKNOWN3
    case 0xEFDC13: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:25 LDY @LOCAL03
    case 0xEFDC15: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:26 LDA @LOCAL04
    case 0xEFDC17: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:27 STA @VIRTUAL04
    case 0xEFDC19: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:28 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xEFDC1B: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:29 LDY #10
    case 0xEFDC1F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:29 LDY #10
    // Overlapping static entry reached from 0xEFDC1F.
    case 0xEFDC21: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:30 JSL MODULUS16
    case 0xEFDC22: cpu.execute_instruction<0x22>(0xC09231, 4); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:31 CMP #10
    case 0xEFDC26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:31 CMP #10
    // Overlapping static entry reached from 0xEFDC26.
    case 0xEFDC28: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:32 BCC @UNKNOWN1
    case 0xEFDC29: cpu.execute_instruction<0x90>(0x000008, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:33 CLC
    case 0xEFDC2B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:34 ADC #7
    case 0xEFDC2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:34 ADC #7
    // Overlapping static entry reached from 0xEFDC2C.
    case 0xEFDC2E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:35 STA @LOCAL00
    case 0xEFDC2F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:36 BRA @UNKNOWN2
    case 0xEFDC31: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:38 STA @LOCAL00
    case 0xEFDC33: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:40 TXA
    case 0xEFDC35: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:41 ASL
    case 0xEFDC36: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:42 PHA
    case 0xEFDC37: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:43 LDA @LOCAL02
    case 0xEFDC38: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:44 STA @VIRTUAL02
    case 0xEFDC3A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:45 PLY
    case 0xEFDC3C: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:46 STY @VIRTUAL02
    case 0xEFDC3D: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:47 CLC
    case 0xEFDC3F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:48 ADC @VIRTUAL02
    case 0xEFDC40: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:49 TAX
    case 0xEFDC42: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:50 LDA @LOCAL00
    case 0xEFDC43: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:51 CLC
    case 0xEFDC45: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:52 ADC #$2030 ;0 tile, priority
    case 0xEFDC46: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x002030, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:52 ADC #$2030 ;0 tile, priority
    // Overlapping static entry reached from 0xEFDC46.
    case 0xEFDC48: cpu.execute_instruction<0x20>(0x00009D, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:53 STA __BSS_START__,X
    case 0xEFDC49: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:53 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFDC48.
    case 0xEFDC4B: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:54 LDY @LOCAL03
    case 0xEFDC4C: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:55 TYA
    case 0xEFDC4E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:56 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xEFDC4F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:56 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xEFDC51: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:56 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xEFDC52: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:56 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xEFDC53: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:56 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xEFDC55: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:57 TAY
    case 0xEFDC56: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:58 STY @LOCAL03
    case 0xEFDC57: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:59 LDX @LOCAL01
    case 0xEFDC59: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:60 DEX
    case 0xEFDC5B: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:61 STX @LOCAL01
    case 0xEFDC5C: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:63 CPX #.LOWORD(-1)
    case 0xEFDC5E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:63 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFDC5E.
    case 0xEFDC60: cpu.execute_instruction<0xFF>(0xA5B2D0, 4); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:64 BNE @UNKNOWN0
    case 0xEFDC61: cpu.execute_instruction<0xD0>(0x0000B2, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:65 LDA @LOCAL02
    case 0xEFDC63: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:65 LDA @LOCAL02
    // Overlapping static entry reached from 0xEFDC60.
    case 0xEFDC64: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:66 STA @VIRTUAL02
    case 0xEFDC65: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:66 STA @VIRTUAL02
    // Overlapping static entry reached from 0xEFDC64.
    case 0xEFDC66: cpu.execute_instruction<0x02>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:67 END_C_FUNCTION
    case 0xEFDC67: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:67 END_C_FUNCTION
    case 0xEFDC68: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/debug/integer_to_hex_debug_tiles.asm (source_named).
bool execute_system_debug_integer_to_hex_debug_tiles_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/debug/integer_to_hex_debug_tiles.asm:3 BEGIN_C_FUNCTION
    case 0xEFDB95: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/debug/integer_to_hex_debug_tiles.asm:10 END_STACK_VARS
    case 0xEFDB97: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/debug/integer_to_hex_debug_tiles.asm:10 END_STACK_VARS
    case 0xEFDB98: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/debug/integer_to_hex_debug_tiles.asm:10 END_STACK_VARS
    case 0xEFDB99: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/integer_to_hex_debug_tiles.asm:10 END_STACK_VARS
    case 0xEFDB9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/integer_to_hex_debug_tiles.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xEFDB9A.
    case 0xEFDB9C: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/debug/integer_to_hex_debug_tiles.asm:10 END_STACK_VARS
    case 0xEFDB9D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/debug/integer_to_hex_debug_tiles.asm:10 END_STACK_VARS
    case 0xEFDB9E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:11 TAY
    case 0xEFDB9F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:12 STY @LOCAL02
    case 0xEFDBA0: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:13 LDA #8
    case 0xEFDBA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:13 LDA #8
    // Overlapping static entry reached from 0xEFDBA2.
    case 0xEFDBA4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:14 JSL SBRK
    case 0xEFDBA5: cpu.execute_instruction<0x22>(0xC086DE, 4); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:15 STA @VIRTUAL02
    case 0xEFDBA9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:16 LDX #3
    case 0xEFDBAB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:16 LDX #3
    // Overlapping static entry reached from 0xEFDBAB.
    case 0xEFDBAD: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:17 STX @LOCAL01
    case 0xEFDBAE: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:18 BRA @UNKNOWN3
    case 0xEFDBB0: cpu.execute_instruction<0x80>(0x000035, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:20 LDY @LOCAL02
    case 0xEFDBB2: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:21 TYA
    case 0xEFDBB4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:22 AND #$000F
    case 0xEFDBB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:22 AND #$000F
    // Overlapping static entry reached from 0xEFDBB5.
    case 0xEFDBB7: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:23 CMP #10
    case 0xEFDBB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:23 CMP #10
    // Overlapping static entry reached from 0xEFDBB8.
    case 0xEFDBBA: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:24 BCC @UNKNOWN1
    case 0xEFDBBB: cpu.execute_instruction<0x90>(0x000008, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:25 CLC
    case 0xEFDBBD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:26 ADC #7
    case 0xEFDBBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:26 ADC #7
    // Overlapping static entry reached from 0xEFDBBE.
    case 0xEFDBC0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:27 STA @LOCAL00
    case 0xEFDBC1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:28 BRA @UNKNOWN2
    case 0xEFDBC3: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:30 STA @LOCAL00
    case 0xEFDBC5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:32 TXA
    case 0xEFDBC7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:33 ASL
    case 0xEFDBC8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:34 STA @VIRTUAL04
    case 0xEFDBC9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:35 LDA @VIRTUAL02
    case 0xEFDBCB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:36 CLC
    case 0xEFDBCD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:37 ADC @VIRTUAL04
    case 0xEFDBCE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:38 TAX
    case 0xEFDBD0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:39 LDA @LOCAL00
    case 0xEFDBD1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:40 CLC
    case 0xEFDBD3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:41 ADC #$2030 ;0 tile, priority
    case 0xEFDBD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x002030, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:41 ADC #$2030 ;0 tile, priority
    // Overlapping static entry reached from 0xEFDBD4.
    case 0xEFDBD6: cpu.execute_instruction<0x20>(0x00009D, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:42 STA __BSS_START__,X
    case 0xEFDBD7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:42 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFDBD6.
    case 0xEFDBD9: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:43 TYA
    case 0xEFDBDA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:44 LSR
    case 0xEFDBDB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:45 LSR
    case 0xEFDBDC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:46 LSR
    case 0xEFDBDD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:47 LSR
    case 0xEFDBDE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:48 TAY
    case 0xEFDBDF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:49 STY @LOCAL02
    case 0xEFDBE0: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:50 LDX @LOCAL01
    case 0xEFDBE2: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:51 DEX
    case 0xEFDBE4: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:52 STX @LOCAL01
    case 0xEFDBE5: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:54 CPX #.LOWORD(-1)
    case 0xEFDBE7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:54 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFDBE7.
    case 0xEFDBE9: cpu.execute_instruction<0xFF>(0xA5C6D0, 4); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:55 BNE @UNKNOWN0
    case 0xEFDBEA: cpu.execute_instruction<0xD0>(0x0000C6, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:56 LDA @VIRTUAL02
    case 0xEFDBEC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:56 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xEFDBE9.
    case 0xEFDBED: cpu.execute_instruction<0x02>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/debug/integer_to_hex_debug_tiles.asm:57 END_C_FUNCTION
    case 0xEFDBEE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/debug/integer_to_hex_debug_tiles.asm:57 END_C_FUNCTION
    case 0xEFDBEF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/debug/load_debug_cursor_graphics.asm (source_named).
bool execute_system_debug_load_debug_cursor_graphics_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFE556: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:6 END_STACK_VARS
    case 0xEFE558: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:6 END_STACK_VARS
    case 0xEFE559: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:6 END_STACK_VARS
    case 0xEFE55A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xEFE55A.
    case 0xEFE55C: cpu.execute_instruction<0xFF>(0xB7A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:6 END_STACK_VARS
    case 0xEFE55D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    case 0xEFE55E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B7, 2); else cpu.execute_instruction<0xA9>(0x00EFB7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    // Overlapping static entry reached from 0xEFE55E.
    case 0xEFE560: cpu.execute_instruction<0xEF>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    case 0xEFE561: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    case 0xEFE563: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    // Overlapping static entry reached from 0xEFE560.
    case 0xEFE564: cpu.execute_instruction<0xEF>(0x108500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    // Overlapping static entry reached from 0xEFE563.
    case 0xEFE565: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    case 0xEFE566: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    case 0xEFE568: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x004000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    // Overlapping static entry reached from 0xEFE568.
    case 0xEFE56A: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    case 0xEFE56B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    // Overlapping static entry reached from 0xEFE56B.
    case 0xEFE56D: cpu.execute_instruction<0x02>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    case 0xEFE56E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    case 0xEFE570: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    case 0xEFE572: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    // Overlapping static entry reached from 0xEFE570.
    case 0xEFE573: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    // Overlapping static entry reached from 0xEFE573.
    case 0xEFE575: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:8 END_C_FUNCTION
    case 0xEFE576: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:8 END_C_FUNCTION
    case 0xEFE577: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/debug/load_menu.asm (source_named).
bool execute_system_debug_load_menu_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/debug/load_menu.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEFE689: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/system/debug/load_menu.asm:4 LDA #$0080
    case 0xEFE68B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/system/debug/load_menu.asm:4 LDA #$0080
    // Overlapping static entry reached from 0xEFE68B.
    case 0xEFE68D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/debug/load_menu.asm:5 STA DEBUG_START_POSITION_X
    case 0xEFE68E: cpu.execute_instruction<0x8D>(0x00B561, 3); return true;
    // src/system/debug/load_menu.asm:6 LDA #$0070
    case 0xEFE691: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000070, 2); else cpu.execute_instruction<0xA9>(0x000070, 3); return true;
    // src/system/debug/load_menu.asm:6 LDA #$0070
    // Overlapping static entry reached from 0xEFE691.
    case 0xEFE693: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/debug/load_menu.asm:7 STA DEBUG_START_POSITION_Y
    case 0xEFE694: cpu.execute_instruction<0x8D>(0x00B563, 3); return true;
    // src/system/debug/load_menu.asm:8 LDA #$0094
    case 0xEFE697: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000094, 2); else cpu.execute_instruction<0xA9>(0x000094, 3); return true;
    // src/system/debug/load_menu.asm:8 LDA #$0094
    // Overlapping static entry reached from 0xEFE697.
    case 0xEFE699: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/debug/load_menu.asm:9 STA DEBUG_VIEW_CHARACTER_SPRITE
    case 0xEFE69A: cpu.execute_instruction<0x8D>(0x00B565, 3); return true;
    // src/system/debug/load_menu.asm:10 LDA #$FFFF
    case 0xEFE69D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/system/debug/load_menu.asm:10 LDA #$FFFF
    // Overlapping static entry reached from 0xEFE69D.
    case 0xEFE69F: cpu.execute_instruction<0xFF>(0x9E548D, 4); return true;
    // src/system/debug/load_menu.asm:11 STA DAD_PHONE_TIMER
    case 0xEFE6A0: cpu.execute_instruction<0x8D>(0x009E54, 3); return true;
    // src/system/debug/load_menu.asm:12 JSL UNKNOWN_C0927C
    case 0xEFE6A3: cpu.execute_instruction<0x22>(0xC0927C, 4); return true;
    // src/system/debug/load_menu.asm:13 JSR UNKNOWN_EFDA05
    case 0xEFE6A7: cpu.execute_instruction<0x20>(0x00DA05, 3); return true;
    // src/system/debug/load_menu.asm:14 JSR DEBUG_DISPLAY_MENU_OPTIONS
    case 0xEFE6AA: cpu.execute_instruction<0x20>(0x00DB21, 3); return true;
    // src/system/debug/load_menu.asm:15 LDX #$0001
    case 0xEFE6AD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/system/debug/load_menu.asm:15 LDX #$0001
    // Overlapping static entry reached from 0xEFE6AD.
    case 0xEFE6AF: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/system/debug/load_menu.asm:16 LDA #$0004
    case 0xEFE6B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/system/debug/load_menu.asm:16 LDA #$0004
    // Overlapping static entry reached from 0xEFE6B0.
    case 0xEFE6B2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/load_menu.asm:17 JSL FADE_IN
    case 0xEFE6B3: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/system/debug/load_menu.asm:19 JSL OAM_CLEAR
    case 0xEFE6B7: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/system/debug/load_menu.asm:20 JSR DEBUG_HANDLE_CURSOR_MOVEMENT
    case 0xEFE6BB: cpu.execute_instruction<0x20>(0x00E578, 3); return true;
    // src/system/debug/load_menu.asm:21 JSR DEBUG_PROCESS_COMMAND_SELECTION
    case 0xEFE6BE: cpu.execute_instruction<0x20>(0x00E5D3, 3); return true;
    // src/system/debug/load_menu.asm:22 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xEFE6C1: cpu.execute_instruction<0x22>(0xC09466, 4); return true;
    // src/system/debug/load_menu.asm:23 JSL UPDATE_SCREEN
    case 0xEFE6C5: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/system/debug/load_menu.asm:24 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xEFE6C9: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/system/debug/load_menu.asm:25 BRA @UNKNOWN0
    case 0xEFE6CD: cpu.execute_instruction<0x80>(0x0000E8, 2); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/debug/process_command_selection.asm (source_named).
bool execute_system_debug_process_command_selection_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/debug/process_command_selection.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEFE5D3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/system/debug/process_command_selection.asm:4 LDA DEBUG_MENU_BUTTONS_PRESSED
    case 0xEFE5D5: cpu.execute_instruction<0xAD>(0x00B557, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/process_command_selection.asm:5 BEQL @UNKNOWN9
    case 0xEFE5D8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/process_command_selection.asm:5 BEQL @UNKNOWN9
    case 0xEFE5DA: cpu.execute_instruction<0x4C>(0x00E688, 3); return true;
    // src/system/debug/process_command_selection.asm:6 LDA DEBUG_MENU_CURSOR_POSITION
    case 0xEFE5DD: cpu.execute_instruction<0xAD>(0x00B555, 3); return true;
    // src/system/debug/process_command_selection.asm:7 BEQ @UNKNOWN1
    case 0xEFE5E0: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/system/debug/process_command_selection.asm:8 CMP #$0001
    case 0xEFE5E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/system/debug/process_command_selection.asm:8 CMP #$0001
    // Overlapping static entry reached from 0xEFE5E2.
    case 0xEFE5E4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/debug/process_command_selection.asm:9 BEQ @UNKNOWN2
    case 0xEFE5E5: cpu.execute_instruction<0xF0>(0x00002E, 2); return true;
    // src/system/debug/process_command_selection.asm:10 CMP #$0002
    case 0xEFE5E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/system/debug/process_command_selection.asm:10 CMP #$0002
    // Overlapping static entry reached from 0xEFE5E7.
    case 0xEFE5E9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/debug/process_command_selection.asm:11 BEQ @UNKNOWN3
    case 0xEFE5EA: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/system/debug/process_command_selection.asm:12 CMP #$0003
    case 0xEFE5EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/system/debug/process_command_selection.asm:12 CMP #$0003
    // Overlapping static entry reached from 0xEFE5EC.
    case 0xEFE5EE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/debug/process_command_selection.asm:13 BEQ @UNKNOWN4
    case 0xEFE5EF: cpu.execute_instruction<0xF0>(0x00004C, 2); return true;
    // src/system/debug/process_command_selection.asm:14 CMP #$0004
    case 0xEFE5F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/system/debug/process_command_selection.asm:14 CMP #$0004
    // Overlapping static entry reached from 0xEFE5F1.
    case 0xEFE5F3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/debug/process_command_selection.asm:15 BEQ @UNKNOWN5
    case 0xEFE5F4: cpu.execute_instruction<0xF0>(0x000052, 2); return true;
    // src/system/debug/process_command_selection.asm:16 CMP #$0005
    case 0xEFE5F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/system/debug/process_command_selection.asm:16 CMP #$0005
    // Overlapping static entry reached from 0xEFE5F6.
    case 0xEFE5F8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/debug/process_command_selection.asm:17 BEQ @UNKNOWN6
    case 0xEFE5F9: cpu.execute_instruction<0xF0>(0x000059, 2); return true;
    // src/system/debug/process_command_selection.asm:18 CMP #$0006
    case 0xEFE5FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/system/debug/process_command_selection.asm:18 CMP #$0006
    // Overlapping static entry reached from 0xEFE5FB.
    case 0xEFE5FD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/debug/process_command_selection.asm:19 BEQ @UNKNOWN7
    case 0xEFE5FE: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // src/system/debug/process_command_selection.asm:20 BRA @UNKNOWN8
    case 0xEFE600: cpu.execute_instruction<0x80>(0x00006A, 2); return true;
    // src/system/debug/process_command_selection.asm:22 LDY #$0000
    case 0xEFE602: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/debug/process_command_selection.asm:22 LDY #$0000
    // Overlapping static entry reached from 0xEFE602.
    case 0xEFE604: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/system/debug/process_command_selection.asm:23 LDX #$0001
    case 0xEFE605: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/system/debug/process_command_selection.asm:23 LDX #$0001
    // Overlapping static entry reached from 0xEFE605.
    case 0xEFE607: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/system/debug/process_command_selection.asm:24 LDA #$0004
    case 0xEFE608: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/system/debug/process_command_selection.asm:24 LDA #$0004
    // Overlapping static entry reached from 0xEFE608.
    case 0xEFE60A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/process_command_selection.asm:25 JSL FADE_OUT_WITH_MOSAIC
    case 0xEFE60B: cpu.execute_instruction<0x22>(0xC08814, 4); return true;
    // src/system/debug/process_command_selection.asm:26 JSL MAIN_LOOP
    case 0xEFE60F: cpu.execute_instruction<0x22>(0xC0B7D8, 4); return true;
    // src/system/debug/process_command_selection.asm:27 BRA @UNKNOWN8
    case 0xEFE613: cpu.execute_instruction<0x80>(0x000057, 2); return true;
    // src/system/debug/process_command_selection.asm:29 LDA #$0001
    case 0xEFE615: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/debug/process_command_selection.asm:29 LDA #$0001
    // Overlapping static entry reached from 0xEFE615.
    case 0xEFE617: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:30 STA DEBUG_MODE_NUMBER
    case 0xEFE618: cpu.execute_instruction<0x8D>(0x00B559, 3); return true;
    // src/system/debug/process_command_selection.asm:31 LDA #$FFFF
    case 0xEFE61B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/system/debug/process_command_selection.asm:31 LDA #$FFFF
    // Overlapping static entry reached from 0xEFE61B.
    case 0xEFE61D: cpu.execute_instruction<0xFF>(0x4A588D, 4); return true;
    // src/system/debug/process_command_selection.asm:32 STA NPC_SPAWNS_ENABLED
    case 0xEFE61E: cpu.execute_instruction<0x8D>(0x004A58, 3); return true;
    // src/system/debug/process_command_selection.asm:33 JSR UNKNOWN_EFE175
    case 0xEFE621: cpu.execute_instruction<0x20>(0x00E175, 3); return true;
    // src/system/debug/process_command_selection.asm:34 BRA @UNKNOWN8
    case 0xEFE624: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/system/debug/process_command_selection.asm:36 LDA #$0002
    case 0xEFE626: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/system/debug/process_command_selection.asm:36 LDA #$0002
    // Overlapping static entry reached from 0xEFE626.
    case 0xEFE628: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:37 STA DEBUG_MODE_NUMBER
    case 0xEFE629: cpu.execute_instruction<0x8D>(0x00B559, 3); return true;
    // src/system/debug/process_command_selection.asm:38 LDA #$000A
    case 0xEFE62C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/system/debug/process_command_selection.asm:38 LDA #$000A
    // Overlapping static entry reached from 0xEFE62C.
    case 0xEFE62E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:39 STA OVERWORLD_ENEMY_MAXIMUM
    case 0xEFE62F: cpu.execute_instruction<0x8D>(0x004A5E, 3); return true;
    // src/system/debug/process_command_selection.asm:40 LDA #$FFFF
    case 0xEFE632: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/system/debug/process_command_selection.asm:40 LDA #$FFFF
    // Overlapping static entry reached from 0xEFE632.
    case 0xEFE634: cpu.execute_instruction<0xFF>(0x4A5A8D, 4); return true;
    // src/system/debug/process_command_selection.asm:41 STA ENEMY_SPAWNS_ENABLED
    case 0xEFE635: cpu.execute_instruction<0x8D>(0x004A5A, 3); return true;
    // src/system/debug/process_command_selection.asm:42 JSR UNKNOWN_EFE175
    case 0xEFE638: cpu.execute_instruction<0x20>(0x00E175, 3); return true;
    // src/system/debug/process_command_selection.asm:43 BRA @UNKNOWN8
    case 0xEFE63B: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/system/debug/process_command_selection.asm:45 LDA #$0003
    case 0xEFE63D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/system/debug/process_command_selection.asm:45 LDA #$0003
    // Overlapping static entry reached from 0xEFE63D.
    case 0xEFE63F: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:46 STA DEBUG_MODE_NUMBER
    case 0xEFE640: cpu.execute_instruction<0x8D>(0x00B559, 3); return true;
    // src/system/debug/process_command_selection.asm:47 JSR UNKNOWN_EFE175
    case 0xEFE643: cpu.execute_instruction<0x20>(0x00E175, 3); return true;
    // src/system/debug/process_command_selection.asm:48 BRA @UNKNOWN8
    case 0xEFE646: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/system/debug/process_command_selection.asm:50 LDA #$0004
    case 0xEFE648: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/system/debug/process_command_selection.asm:50 LDA #$0004
    // Overlapping static entry reached from 0xEFE648.
    case 0xEFE64A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:51 STA DEBUG_MODE_NUMBER
    case 0xEFE64B: cpu.execute_instruction<0x8D>(0x00B559, 3); return true;
    // src/system/debug/process_command_selection.asm:52 JSL BATTLE_ROUTINE
    case 0xEFE64E: cpu.execute_instruction<0x22>(0xC24821, 4); return true;
    // src/system/debug/process_command_selection.asm:53 BRA @UNKNOWN8
    case 0xEFE652: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/system/debug/process_command_selection.asm:55 LDA #$0005
    case 0xEFE654: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/system/debug/process_command_selection.asm:55 LDA #$0005
    // Overlapping static entry reached from 0xEFE654.
    case 0xEFE656: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:56 STA DEBUG_MODE_NUMBER
    case 0xEFE657: cpu.execute_instruction<0x8D>(0x00B559, 3); return true;
    // src/system/debug/process_command_selection.asm:57 JSR UNKNOWN_EFE175
    case 0xEFE65A: cpu.execute_instruction<0x20>(0x00E175, 3); return true;
    // src/system/debug/process_command_selection.asm:58 BRA @UNKNOWN8
    case 0xEFE65D: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/system/debug/process_command_selection.asm:60 LDA #$0006
    case 0xEFE65F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/system/debug/process_command_selection.asm:60 LDA #$0006
    // Overlapping static entry reached from 0xEFE65F.
    case 0xEFE661: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:61 STA DEBUG_MODE_NUMBER
    case 0xEFE662: cpu.execute_instruction<0x8D>(0x00B559, 3); return true;
    // src/system/debug/process_command_selection.asm:62 LDA DEBUG_CURSOR_ENTITY
    case 0xEFE665: cpu.execute_instruction<0xAD>(0x00B553, 3); return true;
    // src/system/debug/process_command_selection.asm:63 JSL UNKNOWN_EFD6D4
    case 0xEFE668: cpu.execute_instruction<0x22>(0xEFD6D4, 4); return true;
    // src/system/debug/process_command_selection.asm:65 JSL UNKNOWN_EFEB2A
    case 0xEFE66C: cpu.execute_instruction<0x22>(0xEFEB2A, 4); return true;
    // src/system/debug/process_command_selection.asm:66 STZ DEBUG_MENU_BUTTONS_PRESSED
    case 0xEFE670: cpu.execute_instruction<0x9C>(0x00B557, 3); return true;
    // src/system/debug/process_command_selection.asm:67 STZ DEBUG_MODE_NUMBER
    case 0xEFE673: cpu.execute_instruction<0x9C>(0x00B559, 3); return true;
    // src/system/debug/process_command_selection.asm:68 JSL UNKNOWN_C0927C
    case 0xEFE676: cpu.execute_instruction<0x22>(0xC0927C, 4); return true;
    // src/system/debug/process_command_selection.asm:69 JSR UNKNOWN_EFDA05
    case 0xEFE67A: cpu.execute_instruction<0x20>(0x00DA05, 3); return true;
    // src/system/debug/process_command_selection.asm:70 JSR DEBUG_DISPLAY_MENU_OPTIONS
    case 0xEFE67D: cpu.execute_instruction<0x20>(0x00DB21, 3); return true;
    // src/system/debug/process_command_selection.asm:71 LDX #$0001
    case 0xEFE680: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/system/debug/process_command_selection.asm:71 LDX #$0001
    // Overlapping static entry reached from 0xEFE680.
    case 0xEFE682: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/system/debug/process_command_selection.asm:72 TXA
    case 0xEFE683: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/debug/process_command_selection.asm:73 JSL FADE_IN
    case 0xEFE684: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/system/debug/process_command_selection.asm:75 RTS
    case 0xEFE688: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/debug/y_button_menu.asm (source_named).
bool execute_system_debug_y_button_menu_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/debug/y_button_menu.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC12E63: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/debug/y_button_menu.asm:12 END_STACK_VARS
    case 0xC12E65: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/debug/y_button_menu.asm:12 END_STACK_VARS
    case 0xC12E66: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/y_button_menu.asm:12 END_STACK_VARS
    case 0xC12E67: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/y_button_menu.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC12E67.
    case 0xC12E69: cpu.execute_instruction<0xFF>(0x3C225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/debug/y_button_menu.asm:12 END_STACK_VARS
    case 0xC12E6A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/debug/y_button_menu.asm:18 JSL UNKNOWN_C0943C
    case 0xC12E6B: cpu.execute_instruction<0x22>(0xC0943C, 4); return true;
    // src/system/debug/y_button_menu.asm:18 JSL UNKNOWN_C0943C
    // Overlapping static entry reached from 0xC12E69.
    case 0xC12E6D: cpu.execute_instruction<0x94>(0x0000C0, 2); return true;
    // src/system/debug/y_button_menu.asm:19 LDA #SFX::CURSOR1
    case 0xC12E6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:19 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC12E6F.
    case 0xC12E71: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/y_button_menu.asm:20 JSL PLAY_SOUND
    case 0xC12E72: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/system/debug/y_button_menu.asm:21 JSR SHOW_HPPP_WINDOWS
    case 0xC12E76: cpu.execute_instruction<0x20>(0x000A04, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/system/debug/y_button_menu.asm:23 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC12E79: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/system/debug/y_button_menu.asm:23 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC12E79.
    case 0xC12E7B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/system/debug/y_button_menu.asm:23 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC12E7C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/system/debug/y_button_menu.asm:23 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC12E7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/system/debug/y_button_menu.asm:23 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC12E7E.
    case 0xC12E80: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/system/debug/y_button_menu.asm:23 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC12E81: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/debug/y_button_menu.asm:25 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC12E83: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/debug/y_button_menu.asm:25 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC12E85: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/debug/y_button_menu.asm:25 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC12E87: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/debug/y_button_menu.asm:25 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC12E89: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/system/debug/y_button_menu.asm:27 CREATE_WINDOW_NEAR #WINDOW::PHONE_MENU
    case 0xC12E8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/system/debug/y_button_menu.asm:27 CREATE_WINDOW_NEAR #WINDOW::PHONE_MENU
    // Overlapping static entry reached from 0xC12E8B.
    case 0xC12E8D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/system/debug/y_button_menu.asm:27 CREATE_WINDOW_NEAR #WINDOW::PHONE_MENU
    case 0xC12E8E: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/system/debug/y_button_menu.asm:28 LDA #0
    case 0xC12E91: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/debug/y_button_menu.asm:28 LDA #0
    // Overlapping static entry reached from 0xC12E91.
    case 0xC12E93: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/y_button_menu.asm:29 STA @LOCAL03
    case 0xC12E94: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/system/debug/y_button_menu.asm:30 BRA @UNKNOWN2
    case 0xC12E96: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/debug/y_button_menu.asm:35 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC12E98: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/debug/y_button_menu.asm:35 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC12E9A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/debug/y_button_menu.asm:35 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC12E9C: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/debug/y_button_menu.asm:35 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC12E9E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/debug/y_button_menu.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12EA0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/debug/y_button_menu.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12EA2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/debug/y_button_menu.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12EA4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/debug/y_button_menu.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12EA6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/system/debug/y_button_menu.asm:38 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC12EA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/system/debug/y_button_menu.asm:38 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC12EA8.
    case 0xC12EAA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/system/debug/y_button_menu.asm:38 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC12EAB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/system/debug/y_button_menu.asm:38 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC12EAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/system/debug/y_button_menu.asm:38 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC12EAD.
    case 0xC12EAF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/system/debug/y_button_menu.asm:38 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC12EB0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/debug/y_button_menu.asm:39 JSR UNKNOWN_C113D1
    case 0xC12EB2: cpu.execute_instruction<0x20>(0x0013D1, 3); return true;
    // src/system/debug/y_button_menu.asm:40 LDA @LOCAL03
    case 0xC12EB5: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/system/debug/y_button_menu.asm:41 INC
    case 0xC12EB7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/debug/y_button_menu.asm:42 STA @LOCAL03
    case 0xC12EB8: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:44 LOADPTR DEBUG_MENU_TEXT, @VIRTUAL0A
    case 0xC12EBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000074, 2); else cpu.execute_instruction<0xA9>(0x00E874, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:44 LOADPTR DEBUG_MENU_TEXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC12EBA.
    case 0xC12EBC: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/y_button_menu.asm:44 LOADPTR DEBUG_MENU_TEXT, @VIRTUAL0A
    case 0xC12EBD: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:44 LOADPTR DEBUG_MENU_TEXT, @VIRTUAL0A
    case 0xC12EBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:44 LOADPTR DEBUG_MENU_TEXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC12EBF.
    case 0xC12EC1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/y_button_menu.asm:44 LOADPTR DEBUG_MENU_TEXT, @VIRTUAL0A
    case 0xC12EC2: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/system/debug/y_button_menu.asm:45 LDA @LOCAL03
    case 0xC12EC4: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/system/debug/y_button_menu.asm:46 OPTIMIZED_MULT @VIRTUAL04, @DEBUGSTRINGLENGTH
    case 0xC12EC6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/system/debug/y_button_menu.asm:46 OPTIMIZED_MULT @VIRTUAL04, @DEBUGSTRINGLENGTH
    case 0xC12EC8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/system/debug/y_button_menu.asm:46 OPTIMIZED_MULT @VIRTUAL04, @DEBUGSTRINGLENGTH
    case 0xC12EC9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/system/debug/y_button_menu.asm:46 OPTIMIZED_MULT @VIRTUAL04, @DEBUGSTRINGLENGTH
    case 0xC12ECA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/system/debug/y_button_menu.asm:46 OPTIMIZED_MULT @VIRTUAL04, @DEBUGSTRINGLENGTH
    case 0xC12ECC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/y_button_menu.asm:47 CLC
    case 0xC12ECD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/y_button_menu.asm:48 ADC @VIRTUAL0A
    case 0xC12ECE: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/system/debug/y_button_menu.asm:49 STA @VIRTUAL0A
    case 0xC12ED0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/system/debug/y_button_menu.asm:50 LDA [@VIRTUAL0A]
    case 0xC12ED2: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/system/debug/y_button_menu.asm:51 AND #$00FF
    case 0xC12ED4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/debug/y_button_menu.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xC12ED4.
    case 0xC12ED6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/system/debug/y_button_menu.asm:52 BNE @UNKNOWN1
    case 0xC12ED7: cpu.execute_instruction<0xD0>(0x0000BF, 2); return true;
    // src/system/debug/y_button_menu.asm:53 LDY #0
    case 0xC12ED9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/debug/y_button_menu.asm:53 LDY #0
    // Overlapping static entry reached from 0xC12ED9.
    case 0xC12EDB: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/system/debug/y_button_menu.asm:54 TYX
    case 0xC12EDC: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/system/debug/y_button_menu.asm:55 LDA #1
    case 0xC12EDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:55 LDA #1
    // Overlapping static entry reached from 0xC12EDD.
    case 0xC12EDF: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/system/debug/y_button_menu.asm:56 JSR UNKNOWN_C1180D
    case 0xC12EE0: cpu.execute_instruction<0x20>(0x00180D, 3); return true;
    // src/system/debug/y_button_menu.asm:57 LDA #1
    case 0xC12EE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:57 LDA #1
    // Overlapping static entry reached from 0xC12EE3.
    case 0xC12EE5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/system/debug/y_button_menu.asm:58 JSR SELECTION_MENU
    case 0xC12EE6: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // src/system/debug/y_button_menu.asm:59 CMP #1
    case 0xC12EE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:59 CMP #1
    // Overlapping static entry reached from 0xC12EE9.
    case 0xC12EEB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:60 BEQL @UNKNOWN26
    case 0xC12EEC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:60 BEQL @UNKNOWN26
    case 0xC12EEE: cpu.execute_instruction<0x4C>(0x002FA4, 3); return true;
    // src/system/debug/y_button_menu.asm:61 CMP #2
    case 0xC12EF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/system/debug/y_button_menu.asm:61 CMP #2
    // Overlapping static entry reached from 0xC12EF1.
    case 0xC12EF3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:62 BEQL @UNKNOWN27
    case 0xC12EF4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:62 BEQL @UNKNOWN27
    case 0xC12EF6: cpu.execute_instruction<0x4C>(0x002FAB, 3); return true;
    // src/system/debug/y_button_menu.asm:63 CMP #3
    case 0xC12EF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/system/debug/y_button_menu.asm:63 CMP #3
    // Overlapping static entry reached from 0xC12EF9.
    case 0xC12EFB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:64 BEQL @UNKNOWN28
    case 0xC12EFC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:64 BEQL @UNKNOWN28
    case 0xC12EFE: cpu.execute_instruction<0x4C>(0x002FB2, 3); return true;
    // src/system/debug/y_button_menu.asm:65 CMP #4
    case 0xC12F01: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/system/debug/y_button_menu.asm:65 CMP #4
    // Overlapping static entry reached from 0xC12F01.
    case 0xC12F03: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:66 BEQL @UNKNOWN29
    case 0xC12F04: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:66 BEQL @UNKNOWN29
    case 0xC12F06: cpu.execute_instruction<0x4C>(0x002FC5, 3); return true;
    // src/system/debug/y_button_menu.asm:67 CMP #5
    case 0xC12F09: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/system/debug/y_button_menu.asm:67 CMP #5
    // Overlapping static entry reached from 0xC12F09.
    case 0xC12F0B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:68 BEQL @UNKNOWN30
    case 0xC12F0C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:68 BEQL @UNKNOWN30
    case 0xC12F0E: cpu.execute_instruction<0x4C>(0x002FDA, 3); return true;
    // src/system/debug/y_button_menu.asm:69 CMP #6
    case 0xC12F11: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/system/debug/y_button_menu.asm:69 CMP #6
    // Overlapping static entry reached from 0xC12F11.
    case 0xC12F13: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:70 BEQL @UNKNOWN31
    case 0xC12F14: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:70 BEQL @UNKNOWN31
    case 0xC12F16: cpu.execute_instruction<0x4C>(0x002FEF, 3); return true;
    // src/system/debug/y_button_menu.asm:71 CMP #7
    case 0xC12F19: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/system/debug/y_button_menu.asm:71 CMP #7
    // Overlapping static entry reached from 0xC12F19.
    case 0xC12F1B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:72 BEQL @UNKNOWN32
    case 0xC12F1C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:72 BEQL @UNKNOWN32
    case 0xC12F1E: cpu.execute_instruction<0x4C>(0x003004, 3); return true;
    // src/system/debug/y_button_menu.asm:73 CMP #8
    case 0xC12F21: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/system/debug/y_button_menu.asm:73 CMP #8
    // Overlapping static entry reached from 0xC12F21.
    case 0xC12F23: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:74 BEQL @UNKNOWN33
    case 0xC12F24: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:74 BEQL @UNKNOWN33
    case 0xC12F26: cpu.execute_instruction<0x4C>(0x003019, 3); return true;
    // src/system/debug/y_button_menu.asm:75 CMP #9
    case 0xC12F29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/system/debug/y_button_menu.asm:75 CMP #9
    // Overlapping static entry reached from 0xC12F29.
    case 0xC12F2B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:76 BEQL @UNKNOWN36
    case 0xC12F2C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:76 BEQL @UNKNOWN36
    case 0xC12F2E: cpu.execute_instruction<0x4C>(0x003078, 3); return true;
    // src/system/debug/y_button_menu.asm:77 CMP #10
    case 0xC12F31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/system/debug/y_button_menu.asm:77 CMP #10
    // Overlapping static entry reached from 0xC12F31.
    case 0xC12F33: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:78 BEQL @UNKNOWN37
    case 0xC12F34: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:78 BEQL @UNKNOWN37
    case 0xC12F36: cpu.execute_instruction<0x4C>(0x003086, 3); return true;
    // src/system/debug/y_button_menu.asm:79 CMP #11
    case 0xC12F39: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000B, 2); else cpu.execute_instruction<0xC9>(0x00000B, 3); return true;
    // src/system/debug/y_button_menu.asm:79 CMP #11
    // Overlapping static entry reached from 0xC12F39.
    case 0xC12F3B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:80 BEQL @UNKNOWN38
    case 0xC12F3C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:80 BEQL @UNKNOWN38
    case 0xC12F3E: cpu.execute_instruction<0x4C>(0x003090, 3); return true;
    // src/system/debug/y_button_menu.asm:81 CMP #12
    case 0xC12F41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/system/debug/y_button_menu.asm:81 CMP #12
    // Overlapping static entry reached from 0xC12F41.
    case 0xC12F43: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:82 BEQL @UNKNOWN39
    case 0xC12F44: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:82 BEQL @UNKNOWN39
    case 0xC12F46: cpu.execute_instruction<0x4C>(0x00309A, 3); return true;
    // src/system/debug/y_button_menu.asm:83 CMP #13
    case 0xC12F49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000D, 2); else cpu.execute_instruction<0xC9>(0x00000D, 3); return true;
    // src/system/debug/y_button_menu.asm:83 CMP #13
    // Overlapping static entry reached from 0xC12F49.
    case 0xC12F4B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:84 BEQL @UNKNOWN40
    case 0xC12F4C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:84 BEQL @UNKNOWN40
    case 0xC12F4E: cpu.execute_instruction<0x4C>(0x0030AB, 3); return true;
    // src/system/debug/y_button_menu.asm:85 CMP #14
    case 0xC12F51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000E, 2); else cpu.execute_instruction<0xC9>(0x00000E, 3); return true;
    // src/system/debug/y_button_menu.asm:85 CMP #14
    // Overlapping static entry reached from 0xC12F51.
    case 0xC12F53: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:86 BEQL @UNKNOWN41
    case 0xC12F54: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:86 BEQL @UNKNOWN41
    case 0xC12F56: cpu.execute_instruction<0x4C>(0x0030B5, 3); return true;
    // src/system/debug/y_button_menu.asm:87 CMP #15
    case 0xC12F59: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000F, 2); else cpu.execute_instruction<0xC9>(0x00000F, 3); return true;
    // src/system/debug/y_button_menu.asm:87 CMP #15
    // Overlapping static entry reached from 0xC12F59.
    case 0xC12F5B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:88 BEQL @UNKNOWN42
    case 0xC12F5C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:88 BEQL @UNKNOWN42
    case 0xC12F5E: cpu.execute_instruction<0x4C>(0x0030BF, 3); return true;
    // src/system/debug/y_button_menu.asm:89 CMP #16
    case 0xC12F61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/system/debug/y_button_menu.asm:89 CMP #16
    // Overlapping static entry reached from 0xC12F61.
    case 0xC12F63: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:90 BEQL @UNKNOWN43
    case 0xC12F64: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:90 BEQL @UNKNOWN43
    case 0xC12F66: cpu.execute_instruction<0x4C>(0x0030C5, 3); return true;
    // src/system/debug/y_button_menu.asm:91 CMP #17
    case 0xC12F69: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000011, 2); else cpu.execute_instruction<0xC9>(0x000011, 3); return true;
    // src/system/debug/y_button_menu.asm:91 CMP #17
    // Overlapping static entry reached from 0xC12F69.
    case 0xC12F6B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:92 BEQL @UNKNOWN44
    case 0xC12F6C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:92 BEQL @UNKNOWN44
    case 0xC12F6E: cpu.execute_instruction<0x4C>(0x0030CB, 3); return true;
    // src/system/debug/y_button_menu.asm:93 CMP #18
    case 0xC12F71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000012, 2); else cpu.execute_instruction<0xC9>(0x000012, 3); return true;
    // src/system/debug/y_button_menu.asm:93 CMP #18
    // Overlapping static entry reached from 0xC12F71.
    case 0xC12F73: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:94 BEQL @UNKNOWN45
    case 0xC12F74: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:94 BEQL @UNKNOWN45
    case 0xC12F76: cpu.execute_instruction<0x4C>(0x0030D7, 3); return true;
    // src/system/debug/y_button_menu.asm:95 CMP #19
    case 0xC12F79: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000013, 2); else cpu.execute_instruction<0xC9>(0x000013, 3); return true;
    // src/system/debug/y_button_menu.asm:95 CMP #19
    // Overlapping static entry reached from 0xC12F79.
    case 0xC12F7B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:96 BEQL @UNKNOWN46
    case 0xC12F7C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:96 BEQL @UNKNOWN46
    case 0xC12F7E: cpu.execute_instruction<0x4C>(0x0030E0, 3); return true;
    // src/system/debug/y_button_menu.asm:97 CMP #20
    case 0xC12F81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000014, 2); else cpu.execute_instruction<0xC9>(0x000014, 3); return true;
    // src/system/debug/y_button_menu.asm:97 CMP #20
    // Overlapping static entry reached from 0xC12F81.
    case 0xC12F83: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:98 BEQL @UNKNOWN47
    case 0xC12F84: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:98 BEQL @UNKNOWN47
    case 0xC12F86: cpu.execute_instruction<0x4C>(0x0030EC, 3); return true;
    // src/system/debug/y_button_menu.asm:99 CMP #21
    case 0xC12F89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000015, 2); else cpu.execute_instruction<0xC9>(0x000015, 3); return true;
    // src/system/debug/y_button_menu.asm:99 CMP #21
    // Overlapping static entry reached from 0xC12F89.
    case 0xC12F8B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:100 BEQL @UNKNOWN49
    case 0xC12F8C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:100 BEQL @UNKNOWN49
    case 0xC12F8E: cpu.execute_instruction<0x4C>(0x0030FD, 3); return true;
    // src/system/debug/y_button_menu.asm:101 CMP #22
    case 0xC12F91: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000016, 2); else cpu.execute_instruction<0xC9>(0x000016, 3); return true;
    // src/system/debug/y_button_menu.asm:101 CMP #22
    // Overlapping static entry reached from 0xC12F91.
    case 0xC12F93: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:102 BEQL @UNKNOWN50
    case 0xC12F94: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:102 BEQL @UNKNOWN50
    case 0xC12F96: cpu.execute_instruction<0x4C>(0x003103, 3); return true;
    // src/system/debug/y_button_menu.asm:103 CMP #23
    case 0xC12F99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/system/debug/y_button_menu.asm:103 CMP #23
    // Overlapping static entry reached from 0xC12F99.
    case 0xC12F9B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:104 BEQL @UNKNOWN51
    case 0xC12F9C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:104 BEQL @UNKNOWN51
    case 0xC12F9E: cpu.execute_instruction<0x4C>(0x003117, 3); return true;
    // src/system/debug/y_button_menu.asm:105 JMP @UNKNOWN52
    case 0xC12FA1: cpu.execute_instruction<0x4C>(0x003135, 3); return true;
    // src/system/debug/y_button_menu.asm:107 JSL DEBUG_Y_BUTTON_FLAG
    case 0xC12FA4: cpu.execute_instruction<0x22>(0xC13D03, 4); return true;
    // src/system/debug/y_button_menu.asm:108 JMP @UNKNOWN53
    case 0xC12FA8: cpu.execute_instruction<0x4C>(0x00313B, 3); return true;
    // src/system/debug/y_button_menu.asm:110 JSL DEBUG_Y_BUTTON_GOODS
    case 0xC12FAB: cpu.execute_instruction<0x22>(0xC13EE7, 4); return true;
    // src/system/debug/y_button_menu.asm:111 JMP @UNKNOWN53
    case 0xC12FAF: cpu.execute_instruction<0x4C>(0x00313B, 3); return true;
    // src/system/debug/y_button_menu.asm:113 JSL SAVE_CURRENT_GAME
    case 0xC12FB2: cpu.execute_instruction<0x22>(0xC22A2C, 4); return true;
    // src/system/debug/y_button_menu.asm:114 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC12FB6: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/system/debug/y_button_menu.asm:115 STA RESPAWN_X
    case 0xC12FB9: cpu.execute_instruction<0x8D>(0x009D1F, 3); return true;
    // src/system/debug/y_button_menu.asm:116 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC12FBC: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/system/debug/y_button_menu.asm:117 STA RESPAWN_Y
    case 0xC12FBF: cpu.execute_instruction<0x8D>(0x009D21, 3); return true;
    // src/system/debug/y_button_menu.asm:118 JMP @UNKNOWN53
    case 0xC12FC2: cpu.execute_instruction<0x4C>(0x00313B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:120 LOADPTR MSG_DEBUG_00, @VIRTUAL06
    case 0xC12FC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:120 LOADPTR MSG_DEBUG_00, @VIRTUAL06
    // Overlapping static entry reached from 0xC12FC5.
    case 0xC12FC7: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/y_button_menu.asm:120 LOADPTR MSG_DEBUG_00, @VIRTUAL06
    case 0xC12FC8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:120 LOADPTR MSG_DEBUG_00, @VIRTUAL06
    case 0xC12FCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C5, 2); else cpu.execute_instruction<0xA9>(0x0000C5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:120 LOADPTR MSG_DEBUG_00, @VIRTUAL06
    // Overlapping static entry reached from 0xC12FCA.
    case 0xC12FCC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/y_button_menu.asm:120 LOADPTR MSG_DEBUG_00, @VIRTUAL06
    case 0xC12FCD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/debug/y_button_menu.asm:122 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC12FCF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/debug/y_button_menu.asm:122 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC12FD1: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/debug/y_button_menu.asm:122 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC12FD3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/debug/y_button_menu.asm:122 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC12FD5: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/system/debug/y_button_menu.asm:124 JMP @UNKNOWN53
    case 0xC12FD7: cpu.execute_instruction<0x4C>(0x00313B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:126 LOADPTR MSG_DEBUG_01, @VIRTUAL06
    case 0xC12FDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D1, 2); else cpu.execute_instruction<0xA9>(0x008ED1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:126 LOADPTR MSG_DEBUG_01, @VIRTUAL06
    // Overlapping static entry reached from 0xC12FDA.
    case 0xC12FDC: cpu.execute_instruction<0x8E>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/y_button_menu.asm:126 LOADPTR MSG_DEBUG_01, @VIRTUAL06
    case 0xC12FDD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:126 LOADPTR MSG_DEBUG_01, @VIRTUAL06
    case 0xC12FDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C5, 2); else cpu.execute_instruction<0xA9>(0x0000C5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:126 LOADPTR MSG_DEBUG_01, @VIRTUAL06
    // Overlapping static entry reached from 0xC12FDF.
    case 0xC12FE1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/y_button_menu.asm:126 LOADPTR MSG_DEBUG_01, @VIRTUAL06
    case 0xC12FE2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/debug/y_button_menu.asm:128 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC12FE4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/debug/y_button_menu.asm:128 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC12FE6: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/debug/y_button_menu.asm:128 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC12FE8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/debug/y_button_menu.asm:128 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC12FEA: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/system/debug/y_button_menu.asm:130 JMP @UNKNOWN53
    case 0xC12FEC: cpu.execute_instruction<0x4C>(0x00313B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:132 LOADPTR MSG_DEBUG_02, @VIRTUAL06
    case 0xC12FEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BF, 2); else cpu.execute_instruction<0xA9>(0x008DBF, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:132 LOADPTR MSG_DEBUG_02, @VIRTUAL06
    // Overlapping static entry reached from 0xC12FEF.
    case 0xC12FF1: cpu.execute_instruction<0x8D>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/y_button_menu.asm:132 LOADPTR MSG_DEBUG_02, @VIRTUAL06
    case 0xC12FF2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:132 LOADPTR MSG_DEBUG_02, @VIRTUAL06
    case 0xC12FF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C5, 2); else cpu.execute_instruction<0xA9>(0x0000C5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:132 LOADPTR MSG_DEBUG_02, @VIRTUAL06
    // Overlapping static entry reached from 0xC12FF4.
    case 0xC12FF6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/y_button_menu.asm:132 LOADPTR MSG_DEBUG_02, @VIRTUAL06
    case 0xC12FF7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/debug/y_button_menu.asm:134 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC12FF9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/debug/y_button_menu.asm:134 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC12FFB: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/debug/y_button_menu.asm:134 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC12FFD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/debug/y_button_menu.asm:134 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC12FFF: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/system/debug/y_button_menu.asm:136 JMP @UNKNOWN53
    case 0xC13001: cpu.execute_instruction<0x4C>(0x00313B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:138 LOADPTR TEXT_DEBUG_UNKNOWN_MENU_2, @VIRTUAL06
    case 0xC13004: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EC, 2); else cpu.execute_instruction<0xA9>(0x00A6EC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:138 LOADPTR TEXT_DEBUG_UNKNOWN_MENU_2, @VIRTUAL06
    // Overlapping static entry reached from 0xC13004.
    case 0xC13006: cpu.execute_instruction<0xA6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/y_button_menu.asm:138 LOADPTR TEXT_DEBUG_UNKNOWN_MENU_2, @VIRTUAL06
    case 0xC13007: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/y_button_menu.asm:138 LOADPTR TEXT_DEBUG_UNKNOWN_MENU_2, @VIRTUAL06
    // Overlapping static entry reached from 0xC13006.
    case 0xC13008: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:138 LOADPTR TEXT_DEBUG_UNKNOWN_MENU_2, @VIRTUAL06
    case 0xC13009: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:138 LOADPTR TEXT_DEBUG_UNKNOWN_MENU_2, @VIRTUAL06
    // Overlapping static entry reached from 0xC13008.
    case 0xC1300A: cpu.execute_instruction<0xEF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:138 LOADPTR TEXT_DEBUG_UNKNOWN_MENU_2, @VIRTUAL06
    // Overlapping static entry reached from 0xC13009.
    case 0xC1300B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/y_button_menu.asm:138 LOADPTR TEXT_DEBUG_UNKNOWN_MENU_2, @VIRTUAL06
    case 0xC1300C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/debug/y_button_menu.asm:140 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC1300E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/debug/y_button_menu.asm:140 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC13010: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/debug/y_button_menu.asm:140 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC13012: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/debug/y_button_menu.asm:140 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC13014: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/system/debug/y_button_menu.asm:142 JMP @UNKNOWN53
    case 0xC13016: cpu.execute_instruction<0x4C>(0x00313B, 3); return true;
    // src/system/debug/y_button_menu.asm:144 LDX #0
    case 0xC13019: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/debug/y_button_menu.asm:144 LDX #0
    // Overlapping static entry reached from 0xC13019.
    case 0xC1301B: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/system/debug/y_button_menu.asm:145 STX @LOCAL02
    case 0xC1301C: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/system/debug/y_button_menu.asm:146 BRA @UNKNOWN35
    case 0xC1301E: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/system/debug/y_button_menu.asm:148 LDA #0
    case 0xC13020: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/debug/y_button_menu.asm:148 LDA #0
    // Overlapping static entry reached from 0xC13020.
    case 0xC13022: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/y_button_menu.asm:149 JSL UNDRAW_HP_PP_WINDOW
    case 0xC13023: cpu.execute_instruction<0x22>(0xC207E1, 4); return true;
    // src/system/debug/y_button_menu.asm:150 JSL UNKNOWN_C12E42
    case 0xC13027: cpu.execute_instruction<0x22>(0xC12E42, 4); return true;
    // src/system/debug/y_button_menu.asm:151 JSL UNKNOWN_C12E42
    case 0xC1302B: cpu.execute_instruction<0x22>(0xC12E42, 4); return true;
    // src/system/debug/y_button_menu.asm:152 LDA #0
    case 0xC1302F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/debug/y_button_menu.asm:152 LDA #0
    // Overlapping static entry reached from 0xC1302F.
    case 0xC13031: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/y_button_menu.asm:153 JSL UNKNOWN_C207B6
    case 0xC13032: cpu.execute_instruction<0x22>(0xC207B6, 4); return true;
    // src/system/debug/y_button_menu.asm:154 JSL UNKNOWN_C12E42
    case 0xC13036: cpu.execute_instruction<0x22>(0xC12E42, 4); return true;
    // src/system/debug/y_button_menu.asm:155 JSL UNKNOWN_C12E42
    case 0xC1303A: cpu.execute_instruction<0x22>(0xC12E42, 4); return true;
    // src/system/debug/y_button_menu.asm:156 LDX @LOCAL02
    case 0xC1303E: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/system/debug/y_button_menu.asm:157 INX
    case 0xC13040: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/debug/y_button_menu.asm:158 STX @LOCAL02
    case 0xC13041: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/system/debug/y_button_menu.asm:160 CPX #30
    case 0xC13043: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00001E, 2); else cpu.execute_instruction<0xE0>(0x00001E, 3); return true;
    // src/system/debug/y_button_menu.asm:160 CPX #30
    // Overlapping static entry reached from 0xC13043.
    case 0xC13045: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/debug/y_button_menu.asm:161 BCC @UNKNOWN34
    case 0xC13046: cpu.execute_instruction<0x90>(0x0000D8, 2); return true;
    // src/system/debug/y_button_menu.asm:162 LDA #7696
    case 0xC13048: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x001E10, 3); return true;
    // src/system/debug/y_button_menu.asm:162 LDA #7696
    // Overlapping static entry reached from 0xC13048.
    case 0xC1304A: cpu.execute_instruction<0x1E>(0x000485, 3); return true;
    // src/system/debug/y_button_menu.asm:163 STA @VIRTUAL04
    case 0xC1304B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/debug/y_button_menu.asm:164 LDA #2280
    case 0xC1304D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E8, 2); else cpu.execute_instruction<0xA9>(0x0008E8, 3); return true;
    // src/system/debug/y_button_menu.asm:164 LDA #2280
    // Overlapping static entry reached from 0xC1304D.
    case 0xC1304F: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/debug/y_button_menu.asm:165 STA @VIRTUAL02
    case 0xC13050: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/debug/y_button_menu.asm:166 LDX #1
    case 0xC13052: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:166 LDX #1
    // Overlapping static entry reached from 0xC13052.
    case 0xC13054: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/system/debug/y_button_menu.asm:167 TXA
    case 0xC13055: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/debug/y_button_menu.asm:168 JSL FADE_OUT
    case 0xC13056: cpu.execute_instruction<0x22>(0xC0887A, 4); return true;
    // src/system/debug/y_button_menu.asm:169 LDX @VIRTUAL02
    case 0xC1305A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/debug/y_button_menu.asm:170 LDA @VIRTUAL04
    case 0xC1305C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/system/debug/y_button_menu.asm:171 JSL LOAD_MAP_AT_POSITION
    case 0xC1305E: cpu.execute_instruction<0x22>(0xC013F6, 4); return true;
    // src/system/debug/y_button_menu.asm:172 LDY #0
    case 0xC13062: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/debug/y_button_menu.asm:172 LDY #0
    // Overlapping static entry reached from 0xC13062.
    case 0xC13064: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/system/debug/y_button_menu.asm:173 LDX @VIRTUAL02
    case 0xC13065: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/debug/y_button_menu.asm:174 LDA @VIRTUAL04
    case 0xC13067: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/system/debug/y_button_menu.asm:175 JSL UNKNOWN_C03FA9
    case 0xC13069: cpu.execute_instruction<0x22>(0xC03FA9, 4); return true;
    // src/system/debug/y_button_menu.asm:176 LDX #1
    case 0xC1306D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:176 LDX #1
    // Overlapping static entry reached from 0xC1306D.
    case 0xC1306F: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/system/debug/y_button_menu.asm:177 TXA
    case 0xC13070: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/debug/y_button_menu.asm:178 JSL FADE_IN
    case 0xC13071: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/system/debug/y_button_menu.asm:179 JMP @UNKNOWN53
    case 0xC13075: cpu.execute_instruction<0x4C>(0x00313B, 3); return true;
    // src/system/debug/y_button_menu.asm:181 JSL RAND
    case 0xC13078: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/system/debug/y_button_menu.asm:182 AND #$0001
    case 0xC1307C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:182 AND #$0001
    // Overlapping static entry reached from 0xC1307C.
    case 0xC1307E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/y_button_menu.asm:183 JSL COFFEETEA_SCENE
    case 0xC1307F: cpu.execute_instruction<0x22>(0xC49D6A, 4); return true;
    // src/system/debug/y_button_menu.asm:184 JMP @UNKNOWN53
    case 0xC13083: cpu.execute_instruction<0x4C>(0x00313B, 3); return true;
    // src/system/debug/y_button_menu.asm:186 LDA #1
    case 0xC13086: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:186 LDA #1
    // Overlapping static entry reached from 0xC13086.
    case 0xC13088: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/y_button_menu.asm:187 JSL LEARN_SPECIAL_PSI
    case 0xC13089: cpu.execute_instruction<0x22>(0xC227C8, 4); return true;
    // src/system/debug/y_button_menu.asm:188 JMP @UNKNOWN53
    case 0xC1308D: cpu.execute_instruction<0x4C>(0x00313B, 3); return true;
    // src/system/debug/y_button_menu.asm:190 LDA #2
    case 0xC13090: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/system/debug/y_button_menu.asm:190 LDA #2
    // Overlapping static entry reached from 0xC13090.
    case 0xC13092: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/y_button_menu.asm:191 JSL LEARN_SPECIAL_PSI
    case 0xC13093: cpu.execute_instruction<0x22>(0xC227C8, 4); return true;
    // src/system/debug/y_button_menu.asm:192 JMP @UNKNOWN53
    case 0xC13097: cpu.execute_instruction<0x4C>(0x00313B, 3); return true;
    // src/system/debug/y_button_menu.asm:194 LDA #3
    case 0xC1309A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/system/debug/y_button_menu.asm:194 LDA #3
    // Overlapping static entry reached from 0xC1309A.
    case 0xC1309C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/y_button_menu.asm:195 JSL LEARN_SPECIAL_PSI
    case 0xC1309D: cpu.execute_instruction<0x22>(0xC227C8, 4); return true;
    // src/system/debug/y_button_menu.asm:196 LDA #4
    case 0xC130A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/system/debug/y_button_menu.asm:196 LDA #4
    // Overlapping static entry reached from 0xC130A1.
    case 0xC130A3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/y_button_menu.asm:197 JSL LEARN_SPECIAL_PSI
    case 0xC130A4: cpu.execute_instruction<0x22>(0xC227C8, 4); return true;
    // src/system/debug/y_button_menu.asm:198 JMP @UNKNOWN53
    case 0xC130A8: cpu.execute_instruction<0x4C>(0x00313B, 3); return true;
    // src/system/debug/y_button_menu.asm:200 LDA #0
    case 0xC130AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/debug/y_button_menu.asm:200 LDA #0
    // Overlapping static entry reached from 0xC130AB.
    case 0xC130AD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/y_button_menu.asm:201 JSL ENTER_YOUR_NAME_PLEASE
    case 0xC130AE: cpu.execute_instruction<0x22>(0xC1EAA6, 4); return true;
    // src/system/debug/y_button_menu.asm:202 JMP @UNKNOWN53
    case 0xC130B2: cpu.execute_instruction<0x4C>(0x00313B, 3); return true;
    // src/system/debug/y_button_menu.asm:204 LDA #1
    case 0xC130B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:204 LDA #1
    // Overlapping static entry reached from 0xC130B5.
    case 0xC130B7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/y_button_menu.asm:205 JSL ENTER_YOUR_NAME_PLEASE
    case 0xC130B8: cpu.execute_instruction<0x22>(0xC1EAA6, 4); return true;
    // src/system/debug/y_button_menu.asm:209 JMP @UNKNOWN53
    case 0xC130BC: cpu.execute_instruction<0x4C>(0x00313B, 3); return true;
    // src/system/debug/y_button_menu.asm:212 JSL UNKNOWN_C4D744
    case 0xC130BF: cpu.execute_instruction<0x22>(0xC4D744, 4); return true;
    // src/system/debug/y_button_menu.asm:213 BRA @UNKNOWN53
    case 0xC130C3: cpu.execute_instruction<0x80>(0x000076, 2); return true;
    // src/system/debug/y_button_menu.asm:215 JSL DEBUG_Y_BUTTON_GUIDE
    case 0xC130C5: cpu.execute_instruction<0x22>(0xC13E0E, 4); return true;
    // src/system/debug/y_button_menu.asm:216 BRA @UNKNOWN53
    case 0xC130C9: cpu.execute_instruction<0x80>(0x000070, 2); return true;
    // src/system/debug/y_button_menu.asm:218 JSL PLAY_CAST_SCENE
    case 0xC130CB: cpu.execute_instruction<0x22>(0xC4ED0E, 4); return true;
    // src/system/debug/y_button_menu.asm:219 LDA #1
    case 0xC130CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:219 LDA #1
    // Overlapping static entry reached from 0xC130CF.
    case 0xC130D1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/system/debug/y_button_menu.asm:220 JSR TELEPORT
    case 0xC130D2: cpu.execute_instruction<0x20>(0x00BCAB, 3); return true;
    // src/system/debug/y_button_menu.asm:221 BRA @UNKNOWN53
    case 0xC130D5: cpu.execute_instruction<0x80>(0x000064, 2); return true;
    // src/system/debug/y_button_menu.asm:223 LDA #1
    case 0xC130D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:223 LDA #1
    // Overlapping static entry reached from 0xC130D7.
    case 0xC130D9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/y_button_menu.asm:224 JSL USE_SOUND_STONE
    case 0xC130DA: cpu.execute_instruction<0x22>(0xC4ACCE, 4); return true;
    // src/system/debug/y_button_menu.asm:225 BRA @UNKNOWN53
    case 0xC130DE: cpu.execute_instruction<0x80>(0x00005B, 2); return true;
    // src/system/debug/y_button_menu.asm:227 JSL PLAY_CREDITS
    case 0xC130E0: cpu.execute_instruction<0x22>(0xC4F554, 4); return true;
    // src/system/debug/y_button_menu.asm:228 LDA #1
    case 0xC130E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:228 LDA #1
    // Overlapping static entry reached from 0xC130E4.
    case 0xC130E6: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/system/debug/y_button_menu.asm:229 JSR TELEPORT
    case 0xC130E7: cpu.execute_instruction<0x20>(0x00BCAB, 3); return true;
    // src/system/debug/y_button_menu.asm:230 BRA @UNKNOWN53
    case 0xC130EA: cpu.execute_instruction<0x80>(0x00004F, 2); return true;
    // src/system/debug/y_button_menu.asm:232 LDX #0
    case 0xC130EC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/debug/y_button_menu.asm:232 LDX #0
    // Overlapping static entry reached from 0xC130EC.
    case 0xC130EE: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/system/debug/y_button_menu.asm:233 LDA HPPP_METER_FLIPOUT_MODE
    case 0xC130EF: cpu.execute_instruction<0xAD>(0x009698, 3); return true;
    // src/system/debug/y_button_menu.asm:234 BNE @UNKNOWN48
    case 0xC130F2: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/system/debug/y_button_menu.asm:235 LDX #1
    case 0xC130F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:235 LDX #1
    // Overlapping static entry reached from 0xC130F4.
    case 0xC130F6: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/system/debug/y_button_menu.asm:237 TXA
    case 0xC130F7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/debug/y_button_menu.asm:238 JSR UNKNOWN_C12D17
    case 0xC130F8: cpu.execute_instruction<0x20>(0x002D17, 3); return true;
    // src/system/debug/y_button_menu.asm:239 BRA @UNKNOWN53
    case 0xC130FB: cpu.execute_instruction<0x80>(0x00003E, 2); return true;
    // src/system/debug/y_button_menu.asm:241 JSL UNKNOWN_EFEA4A
    case 0xC130FD: cpu.execute_instruction<0x22>(0xEFEA4A, 4); return true;
    // src/system/debug/y_button_menu.asm:242 BRA @UNKNOWN56
    case 0xC13101: cpu.execute_instruction<0x80>(0x00006C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:244 LOADPTR MSG_BTL_INORU_BACK_TO_PC_9, @VIRTUAL06
    case 0xC13103: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00F70C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:244 LOADPTR MSG_BTL_INORU_BACK_TO_PC_9, @VIRTUAL06
    // Overlapping static entry reached from 0xC13103.
    case 0xC13105: cpu.execute_instruction<0xF7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/y_button_menu.asm:244 LOADPTR MSG_BTL_INORU_BACK_TO_PC_9, @VIRTUAL06
    case 0xC13106: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/y_button_menu.asm:244 LOADPTR MSG_BTL_INORU_BACK_TO_PC_9, @VIRTUAL06
    // Overlapping static entry reached from 0xC13105.
    case 0xC13107: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:244 LOADPTR MSG_BTL_INORU_BACK_TO_PC_9, @VIRTUAL06
    case 0xC13108: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:244 LOADPTR MSG_BTL_INORU_BACK_TO_PC_9, @VIRTUAL06
    // Overlapping static entry reached from 0xC13107.
    case 0xC13109: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:244 LOADPTR MSG_BTL_INORU_BACK_TO_PC_9, @VIRTUAL06
    // Overlapping static entry reached from 0xC13108.
    case 0xC1310A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/y_button_menu.asm:244 LOADPTR MSG_BTL_INORU_BACK_TO_PC_9, @VIRTUAL06
    case 0xC1310B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/y_button_menu.asm:244 LOADPTR MSG_BTL_INORU_BACK_TO_PC_9, @VIRTUAL06
    // Overlapping static entry reached from 0xC13109.
    case 0xC1310C: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/debug/y_button_menu.asm:246 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC1310D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/debug/y_button_menu.asm:246 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC1310F: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/debug/y_button_menu.asm:246 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC13111: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/debug/y_button_menu.asm:246 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC13113: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/system/debug/y_button_menu.asm:248 BRA @UNKNOWN53
    case 0xC13115: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:250 LOADPTR MSG_EVT_TO_BE_CONTINUED, @VIRTUAL06
    case 0xC13117: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FA, 2); else cpu.execute_instruction<0xA9>(0x00C7FA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:250 LOADPTR MSG_EVT_TO_BE_CONTINUED, @VIRTUAL06
    // Overlapping static entry reached from 0xC13117.
    case 0xC13119: cpu.execute_instruction<0xC7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/y_button_menu.asm:250 LOADPTR MSG_EVT_TO_BE_CONTINUED, @VIRTUAL06
    case 0xC1311A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/y_button_menu.asm:250 LOADPTR MSG_EVT_TO_BE_CONTINUED, @VIRTUAL06
    // Overlapping static entry reached from 0xC13119.
    case 0xC1311B: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:250 LOADPTR MSG_EVT_TO_BE_CONTINUED, @VIRTUAL06
    case 0xC1311C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:250 LOADPTR MSG_EVT_TO_BE_CONTINUED, @VIRTUAL06
    // Overlapping static entry reached from 0xC1311B.
    case 0xC1311D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:250 LOADPTR MSG_EVT_TO_BE_CONTINUED, @VIRTUAL06
    // Overlapping static entry reached from 0xC1311C.
    case 0xC1311E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/y_button_menu.asm:250 LOADPTR MSG_EVT_TO_BE_CONTINUED, @VIRTUAL06
    case 0xC1311F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/y_button_menu.asm:250 LOADPTR MSG_EVT_TO_BE_CONTINUED, @VIRTUAL06
    // Overlapping static entry reached from 0xC1311D.
    case 0xC13120: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/debug/y_button_menu.asm:251 JSR UNKNOWN_C1008E
    case 0xC13121: cpu.execute_instruction<0x20>(0x00008E, 3); return true;
    // src/system/debug/y_button_menu.asm:252 JSR HIDE_HPPP_WINDOWS
    case 0xC13124: cpu.execute_instruction<0x20>(0x000A1D, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/debug/y_button_menu.asm:253 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13127: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/debug/y_button_menu.asm:253 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13129: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/debug/y_button_menu.asm:253 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1312B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/debug/y_button_menu.asm:253 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1312D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/y_button_menu.asm:254 JSL DISPLAY_TEXT
    case 0xC1312F: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/system/debug/y_button_menu.asm:255 BRA @UNKNOWN56
    case 0xC13133: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/system/debug/y_button_menu.asm:257 JSL UNKNOWN_EFEA9E
    case 0xC13135: cpu.execute_instruction<0x22>(0xEFEA9E, 4); return true;
    // src/system/debug/y_button_menu.asm:258 BRA @UNKNOWN56
    case 0xC13139: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/system/debug/y_button_menu.asm:260 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1313B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/system/debug/y_button_menu.asm:260 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1313B.
    case 0xC1313D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/system/debug/y_button_menu.asm:260 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1313E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/system/debug/y_button_menu.asm:260 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13140: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/system/debug/y_button_menu.asm:260 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13140.
    case 0xC13142: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/system/debug/y_button_menu.asm:260 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13143: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/debug/y_button_menu.asm:262 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13145: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/debug/y_button_menu.asm:262 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13147: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/debug/y_button_menu.asm:262 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC13149: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/debug/y_button_menu.asm:262 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC1314B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/debug/y_button_menu.asm:263 CMP @VIRTUAL0A+2
    case 0xC1314D: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // src/system/debug/y_button_menu.asm:264 BNE @UNKNOWN54
    case 0xC1314F: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/system/debug/y_button_menu.asm:265 LDA @VIRTUAL06
    case 0xC13151: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/system/debug/y_button_menu.asm:266 CMP @VIRTUAL0A
    case 0xC13153: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:271 BEQL @UNKNOWN0
    case 0xC13155: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:271 BEQL @UNKNOWN0
    case 0xC13157: cpu.execute_instruction<0x4C>(0x002E79, 3); return true;
    // src/system/debug/y_button_menu.asm:272 JSR CLOSE_FOCUS_WINDOW
    case 0xC1315A: cpu.execute_instruction<0x20>(0x000084, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/system/debug/y_button_menu.asm:273 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1315D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/system/debug/y_button_menu.asm:273 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1315D.
    case 0xC1315F: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/system/debug/y_button_menu.asm:273 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13160: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/debug/y_button_menu.asm:274 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13163: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/debug/y_button_menu.asm:274 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13165: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/debug/y_button_menu.asm:274 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13167: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/debug/y_button_menu.asm:274 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13169: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/y_button_menu.asm:275 JSL DISPLAY_TEXT
    case 0xC1316B: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/system/debug/y_button_menu.asm:277 JSR UNKNOWN_C1008E
    case 0xC1316F: cpu.execute_instruction<0x20>(0x00008E, 3); return true;
    // src/system/debug/y_button_menu.asm:278 JSR HIDE_HPPP_WINDOWS
    case 0xC13172: cpu.execute_instruction<0x20>(0x000A1D, 3); return true;
    // src/system/debug/y_button_menu.asm:280 JSL WINDOW_TICK
    case 0xC13175: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/system/debug/y_button_menu.asm:281 LDA ENTITY_FADE_ENTITY
    case 0xC13179: cpu.execute_instruction<0xAD>(0x00B4A8, 3); return true;
    // src/system/debug/y_button_menu.asm:282 CMP #.LOWORD(-1)
    case 0xC1317C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/system/debug/y_button_menu.asm:282 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1317C.
    case 0xC1317E: cpu.execute_instruction<0xFF>(0x22F4D0, 4); return true;
    // src/system/debug/y_button_menu.asm:283 BNE @UNKNOWN57
    case 0xC1317F: cpu.execute_instruction<0xD0>(0x0000F4, 2); return true;
    // src/system/debug/y_button_menu.asm:284 JSL UNKNOWN_C09451
    case 0xC13181: cpu.execute_instruction<0x22>(0xC09451, 4); return true;
    // src/system/debug/y_button_menu.asm:284 JSL UNKNOWN_C09451
    // Overlapping static entry reached from 0xC1317E.
    case 0xC13182: cpu.execute_instruction<0x51>(0x000094, 2); return true;
    // src/system/debug/y_button_menu.asm:284 JSL UNKNOWN_C09451
    // Overlapping static entry reached from 0xC13182.
    case 0xC13184: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/debug/y_button_menu.asm:285 END_C_FUNCTION
    case 0xC13185: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/debug/y_button_menu.asm:285 END_C_FUNCTION
    case 0xC13186: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/decomp.asm (source_named).
bool execute_system_decompression_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/decomp.asm:3 MOVE_INT $0E, DECOMP_DATA_SRC
    case 0xC41A9E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/decomp.asm:3 MOVE_INT $0E, DECOMP_DATA_SRC
    case 0xC41AA0: cpu.execute_instruction<0x8D>(0x0000CC, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/decomp.asm:3 MOVE_INT $0E, DECOMP_DATA_SRC
    case 0xC41AA3: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/decomp.asm:3 MOVE_INT $0E, DECOMP_DATA_SRC
    case 0xC41AA5: cpu.execute_instruction<0x8D>(0x0000CE, 3); return true;
    // src/system/decomp.asm:4 LDX $12
    case 0xC41AA8: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/system/decomp.asm:4 LDX $12
    // Overlapping static entry reached from 0xC49006.
    case 0xC41AA9: cpu.execute_instruction<0x12>(0x00008E, 2); return true;
    // src/system/decomp.asm:5 STX DECOMP_DEST_BUFFER
    case 0xC41AAA: cpu.execute_instruction<0x8E>(0x0000CF, 3); return true;
    // src/system/decomp.asm:5 STX DECOMP_DEST_BUFFER
    // Overlapping static entry reached from 0xC41AA9.
    case 0xC41AAB: cpu.execute_instruction<0xCF>(0xE28B00, 4); return true;
    // src/system/decomp.asm:6 PHB
    case 0xC41AAD: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/system/decomp.asm:7 SEP #PROC_FLAGS::ACCUM8
    case 0xC41AAE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/decomp.asm:7 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC41AAB.
    case 0xC41AAF: cpu.execute_instruction<0x20>(0x0014A5, 3); return true;
    // src/system/decomp.asm:8 LDA $14
    case 0xC41AB0: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/system/decomp.asm:9 PHA
    case 0xC41AB2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/decomp.asm:10 PLB
    case 0xC41AB3: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/decomp.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC41AB4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/decomp.asm:12 PHD
    case 0xC41AB6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/system/decomp.asm:13 PEA $0000
    case 0xC41AB7: cpu.execute_instruction<0xF4>(0x000000, 3); return true;
    // src/system/decomp.asm:14 PLD
    case 0xC41ABA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/decomp.asm:15 PHP
    case 0xC41ABB: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/decomp.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC41ABC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/decomp.asm:17 LDY #$0000
    case 0xC41ABE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/decomp.asm:17 LDY #$0000
    // Overlapping static entry reached from 0xC41ABE.
    case 0xC41AC0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/system/decomp.asm:19 LDA [<DECOMP_DATA_SRC],Y
    case 0xC41AC1: cpu.execute_instruction<0xB7>(0x0000CC, 2); return true;
    // src/system/decomp.asm:20 CMP #$00FF
    case 0xC41AC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00D0FF, 3); return true;
    // src/system/decomp.asm:21 BNE DECOMP_UNKNOWN1
    case 0xC41AC5: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/system/decomp.asm:21 BNE DECOMP_UNKNOWN1
    // Overlapping static entry reached from 0xC41AC3.
    case 0xC41AC6: cpu.execute_instruction<0x04>(0x000028, 2); return true;
    // src/system/decomp.asm:22 PLP
    case 0xC41AC7: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/decomp.asm:23 PLD
    case 0xC41AC8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/decomp.asm:24 PLB
    case 0xC41AC9: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/decomp.asm:25 RTL
    case 0xC41ACA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/system/decomp.asm:27 AND #$00E0
    case 0xC41ACB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x00C9E0, 3); return true;
    // src/system/decomp.asm:28 CMP #$00E0
    case 0xC41ACD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E0, 2); else cpu.execute_instruction<0xC9>(0x00D0E0, 3); return true;
    // src/system/decomp.asm:28 CMP #$00E0
    // Overlapping static entry reached from 0xC41ACB.
    case 0xC41ACE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000D0, 2); else cpu.execute_instruction<0xE0>(0x001CD0, 3); return true;
    // src/system/decomp.asm:29 BNE DECOMP_UNKNOWN2
    case 0xC41ACF: cpu.execute_instruction<0xD0>(0x00001C, 2); return true;
    // src/system/decomp.asm:29 BNE DECOMP_UNKNOWN2
    // Overlapping static entry reached from 0xC41ACD.
    case 0xC41AD0: cpu.execute_instruction<0x1C>(0x00CCB7, 3); return true;
    // src/system/decomp.asm:30 LDA [<DECOMP_DATA_SRC],Y
    case 0xC41AD1: cpu.execute_instruction<0xB7>(0x0000CC, 2); return true;
    // src/system/decomp.asm:31 ASL
    case 0xC41AD3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:32 ASL
    case 0xC41AD4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:33 ASL
    case 0xC41AD5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:34 AND #$00E0
    case 0xC41AD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x0048E0, 3); return true;
    // src/system/decomp.asm:35 PHA
    case 0xC41AD8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/decomp.asm:36 LDA [<DECOMP_DATA_SRC],Y
    case 0xC41AD9: cpu.execute_instruction<0xB7>(0x0000CC, 2); return true;
    // src/system/decomp.asm:37 INY
    case 0xC41ADB: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:38 AND #$0003
    case 0xC41ADC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x008503, 3); return true;
    // src/system/decomp.asm:39 STA <DECOMP_TEMP_UNREAD
    case 0xC41ADE: cpu.execute_instruction<0x85>(0x0000D2, 2); return true;
    // src/system/decomp.asm:39 STA <DECOMP_TEMP_UNREAD
    // Overlapping static entry reached from 0xC41ADC.
    case 0xC41ADF: cpu.execute_instruction<0xD2>(0x0000B7, 2); return true;
    // src/system/decomp.asm:40 LDA [<DECOMP_DATA_SRC],Y
    case 0xC41AE0: cpu.execute_instruction<0xB7>(0x0000CC, 2); return true;
    // src/system/decomp.asm:40 LDA [<DECOMP_DATA_SRC],Y
    // Overlapping static entry reached from 0xC41ADF.
    case 0xC41AE1: cpu.execute_instruction<0xCC>(0x0085C8, 3); return true;
    // src/system/decomp.asm:41 INY
    case 0xC41AE2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:42 STA <DECOMP_TEMP_LENGTH
    case 0xC41AE3: cpu.execute_instruction<0x85>(0x0000D1, 2); return true;
    // src/system/decomp.asm:42 STA <DECOMP_TEMP_LENGTH
    // Overlapping static entry reached from 0xC41AE1.
    case 0xC41AE4: cpu.execute_instruction<0xD1>(0x0000C2, 2); return true;
    // src/system/decomp.asm:43 REP #PROC_FLAGS::ACCUM8
    case 0xC41AE5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/decomp.asm:43 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC41AE4.
    case 0xC41AE6: cpu.execute_instruction<0x20>(0x00D1E6, 3); return true;
    // src/system/decomp.asm:44 INC <DECOMP_TEMP_LENGTH
    case 0xC41AE7: cpu.execute_instruction<0xE6>(0x0000D1, 2); return true;
    // src/system/decomp.asm:45 SEP #PROC_FLAGS::ACCUM8
    case 0xC41AE9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/decomp.asm:46 BRA DECOMP_UNKNOWN3
    case 0xC41AEB: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/system/decomp.asm:48 PHA
    case 0xC41AED: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/decomp.asm:49 LDA [<DECOMP_DATA_SRC],Y
    case 0xC41AEE: cpu.execute_instruction<0xB7>(0x0000CC, 2); return true;
    // src/system/decomp.asm:50 INY
    case 0xC41AF0: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:51 AND #$001F
    case 0xC41AF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x001A1F, 3); return true;
    // src/system/decomp.asm:52 INC
    case 0xC41AF3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/decomp.asm:53 STA <DECOMP_TEMP_LENGTH
    case 0xC41AF4: cpu.execute_instruction<0x85>(0x0000D1, 2); return true;
    // src/system/decomp.asm:54 STZ <DECOMP_TEMP_UNREAD
    case 0xC41AF6: cpu.execute_instruction<0x64>(0x0000D2, 2); return true;
    // src/system/decomp.asm:56 PLA
    case 0xC41AF8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/decomp.asm:57 BPL DECOMP_UNKNOWN4
    case 0xC41AF9: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/system/decomp.asm:58 JMP DECOMP_UNKNOWN12
    case 0xC41AFB: cpu.execute_instruction<0x4C>(0x001B56, 3); return true;
    // src/system/decomp.asm:60 CMP #$0020
    case 0xC41AFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x00F020, 3); return true;
    // src/system/decomp.asm:61 BEQ DECOMP_UNKNOWN6
    case 0xC41B00: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/system/decomp.asm:61 BEQ DECOMP_UNKNOWN6
    // Overlapping static entry reached from 0xC41AFE.
    case 0xC41B01: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/decomp.asm:62 CMP #$0040
    case 0xC41B02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x00F040, 3); return true;
    // src/system/decomp.asm:63 BEQ DECOMP_UNKNOWN8
    case 0xC41B04: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/system/decomp.asm:63 BEQ DECOMP_UNKNOWN8
    // Overlapping static entry reached from 0xC41B02.
    case 0xC41B05: cpu.execute_instruction<0x27>(0x0000C9, 2); return true;
    // src/system/decomp.asm:64 CMP #$0060
    case 0xC41B06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000060, 2); else cpu.execute_instruction<0xC9>(0x00F060, 3); return true;
    // src/system/decomp.asm:64 CMP #$0060
    // Overlapping static entry reached from 0xC41B05.
    case 0xC41B07: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/system/decomp.asm:65 BEQ DECOMP_UNKNOWN10
    case 0xC41B08: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/system/decomp.asm:65 BEQ DECOMP_UNKNOWN10
    // Overlapping static entry reached from 0xC41B06.
    case 0xC41B09: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/system/decomp.asm:67 LDA [<DECOMP_DATA_SRC],Y
    case 0xC41B0A: cpu.execute_instruction<0xB7>(0x0000CC, 2); return true;
    // src/system/decomp.asm:68 INY
    case 0xC41B0C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:69 STA __BSS_START__,X
    case 0xC41B0D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/decomp.asm:70 INX
    case 0xC41B10: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/decomp.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC41B11: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/decomp.asm:72 DEC <DECOMP_TEMP_LENGTH
    case 0xC41B13: cpu.execute_instruction<0xC6>(0x0000D1, 2); return true;
    // src/system/decomp.asm:73 SEP #PROC_FLAGS::ACCUM8
    case 0xC41B15: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/decomp.asm:74 BNE DECOMP_UNKNOWN5
    case 0xC41B17: cpu.execute_instruction<0xD0>(0x0000F1, 2); return true;
    // src/system/decomp.asm:75 JMP DECOMP_UNKNOWN0
    case 0xC41B19: cpu.execute_instruction<0x4C>(0x001AC1, 3); return true;
    // src/system/decomp.asm:77 LDA [<DECOMP_DATA_SRC],Y
    case 0xC41B1C: cpu.execute_instruction<0xB7>(0x0000CC, 2); return true;
    // src/system/decomp.asm:78 INY
    case 0xC41B1E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:79 PHY
    case 0xC41B1F: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/system/decomp.asm:80 LDY <DECOMP_TEMP_LENGTH + 0
    case 0xC41B20: cpu.execute_instruction<0xA4>(0x0000D1, 2); return true;
    // src/system/decomp.asm:82 STA __BSS_START__,X
    case 0xC41B22: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/decomp.asm:83 INX
    case 0xC41B25: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/decomp.asm:84 DEY
    case 0xC41B26: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/decomp.asm:85 BNE DECOMP_UNKNOWN7
    case 0xC41B27: cpu.execute_instruction<0xD0>(0x0000F9, 2); return true;
    // src/system/decomp.asm:86 PLY
    case 0xC41B29: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/system/decomp.asm:87 JMP DECOMP_UNKNOWN0
    case 0xC41B2A: cpu.execute_instruction<0x4C>(0x001AC1, 3); return true;
    // src/system/decomp.asm:89 REP #PROC_FLAGS::ACCUM8
    case 0xC41B2D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/decomp.asm:90 LDA [<DECOMP_DATA_SRC],Y
    case 0xC41B2F: cpu.execute_instruction<0xB7>(0x0000CC, 2); return true;
    // src/system/decomp.asm:91 INY
    case 0xC41B31: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:92 INY
    case 0xC41B32: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:93 PHY
    case 0xC41B33: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/system/decomp.asm:94 LDY <DECOMP_TEMP_LENGTH + 0
    case 0xC41B34: cpu.execute_instruction<0xA4>(0x0000D1, 2); return true;
    // src/system/decomp.asm:96 STA __BSS_START__,X
    case 0xC41B36: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/decomp.asm:97 INX
    case 0xC41B39: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/decomp.asm:98 INX
    case 0xC41B3A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/decomp.asm:99 DEY
    case 0xC41B3B: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/decomp.asm:100 BNE DECOMP_UNKNOWN9
    case 0xC41B3C: cpu.execute_instruction<0xD0>(0x0000F8, 2); return true;
    // src/system/decomp.asm:101 PLY
    case 0xC41B3E: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/system/decomp.asm:102 SEP #PROC_FLAGS::ACCUM8
    case 0xC41B3F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/decomp.asm:103 JMP DECOMP_UNKNOWN0
    case 0xC41B41: cpu.execute_instruction<0x4C>(0x001AC1, 3); return true;
    // src/system/decomp.asm:105 LDA [<DECOMP_DATA_SRC],Y
    case 0xC41B44: cpu.execute_instruction<0xB7>(0x0000CC, 2); return true;
    // src/system/decomp.asm:106 INY
    case 0xC41B46: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:107 PHY
    case 0xC41B47: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/system/decomp.asm:108 LDY <DECOMP_TEMP_LENGTH + 0
    case 0xC41B48: cpu.execute_instruction<0xA4>(0x0000D1, 2); return true;
    // src/system/decomp.asm:110 STA __BSS_START__,X
    case 0xC41B4A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/decomp.asm:111 INX
    case 0xC41B4D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/decomp.asm:112 INC
    case 0xC41B4E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/decomp.asm:113 DEY
    case 0xC41B4F: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/decomp.asm:114 BNE DECOMP_UNKNOWN11
    case 0xC41B50: cpu.execute_instruction<0xD0>(0x0000F8, 2); return true;
    // src/system/decomp.asm:115 PLY
    case 0xC41B52: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/system/decomp.asm:116 JMP DECOMP_UNKNOWN0
    case 0xC41B53: cpu.execute_instruction<0x4C>(0x001AC1, 3); return true;
    // src/system/decomp.asm:118 STA <DECOMP_TEMP_COMMAND
    case 0xC41B56: cpu.execute_instruction<0x85>(0x0000D3, 2); return true;
    // src/system/decomp.asm:119 REP #PROC_FLAGS::ACCUM8
    case 0xC41B58: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/decomp.asm:120 LDA [<DECOMP_DATA_SRC],Y
    case 0xC41B5A: cpu.execute_instruction<0xB7>(0x0000CC, 2); return true;
    // src/system/decomp.asm:121 XBA
    case 0xC41B5C: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:122 CLC
    case 0xC41B5D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/decomp.asm:123 ADC <DECOMP_DEST_BUFFER + 0
    case 0xC41B5E: cpu.execute_instruction<0x65>(0x0000CF, 2); return true;
    // src/system/decomp.asm:124 INY
    case 0xC41B60: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:125 INY
    case 0xC41B61: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:126 PHY
    case 0xC41B62: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/system/decomp.asm:127 TAY
    case 0xC41B63: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/decomp.asm:128 SEP #PROC_FLAGS::ACCUM8
    case 0xC41B64: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/decomp.asm:129 LDA <DECOMP_TEMP_COMMAND + 0
    case 0xC41B66: cpu.execute_instruction<0xA5>(0x0000D3, 2); return true;
    // src/system/decomp.asm:130 CMP #$0080
    case 0xC41B68: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x00F080, 3); return true;
    // src/system/decomp.asm:131 BEQ DECOMP_UNKNOWN13
    case 0xC41B6A: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/system/decomp.asm:131 BEQ DECOMP_UNKNOWN13
    // Overlapping static entry reached from 0xC41B68.
    case 0xC41B6B: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/decomp.asm:132 CMP #$00A0
    case 0xC41B6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000A0, 2); else cpu.execute_instruction<0xC9>(0x00F0A0, 3); return true;
    // src/system/decomp.asm:133 BEQ DECOMP_UNKNOWN14
    case 0xC41B6E: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/system/decomp.asm:133 BEQ DECOMP_UNKNOWN14
    // Overlapping static entry reached from 0xC41B6C.
    case 0xC41B6F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/decomp.asm:134 CMP #$00C0
    case 0xC41B70: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C0, 2); else cpu.execute_instruction<0xC9>(0x00F0C0, 3); return true;
    // src/system/decomp.asm:135 BEQ DECOMP_UNKNOWN15
    case 0xC41B72: cpu.execute_instruction<0xF0>(0x000042, 2); return true;
    // src/system/decomp.asm:135 BEQ DECOMP_UNKNOWN15
    // Overlapping static entry reached from 0xC41B70.
    case 0xC41B73: cpu.execute_instruction<0x42>(0x0000B9, 2); return true;
    // src/system/decomp.asm:137 LDA __BSS_START__,Y
    case 0xC41B74: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/system/decomp.asm:137 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC41B73.
    case 0xC41B75: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/system/decomp.asm:138 STA __BSS_START__,X
    case 0xC41B77: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/decomp.asm:139 INY
    case 0xC41B7A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:140 INX
    case 0xC41B7B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/decomp.asm:141 REP #PROC_FLAGS::ACCUM8
    case 0xC41B7C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/decomp.asm:142 DEC <DECOMP_TEMP_LENGTH
    case 0xC41B7E: cpu.execute_instruction<0xC6>(0x0000D1, 2); return true;
    // src/system/decomp.asm:143 SEP #PROC_FLAGS::ACCUM8
    case 0xC41B80: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/decomp.asm:144 BNE DECOMP_UNKNOWN13
    case 0xC41B82: cpu.execute_instruction<0xD0>(0x0000F0, 2); return true;
    // src/system/decomp.asm:145 PLY
    case 0xC41B84: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/system/decomp.asm:146 JMP DECOMP_UNKNOWN0
    case 0xC41B85: cpu.execute_instruction<0x4C>(0x001AC1, 3); return true;
    // src/system/decomp.asm:148 LDA __BSS_START__,Y
    case 0xC41B88: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/system/decomp.asm:149 STA <DECOMP_TEMP_COMMAND
    case 0xC41B8B: cpu.execute_instruction<0x85>(0x0000D3, 2); return true;
    // src/system/decomp.asm:150 ASL <DECOMP_TEMP_COMMAND
    case 0xC41B8D: cpu.execute_instruction<0x06>(0x0000D3, 2); return true;
    // src/system/decomp.asm:151 ROR
    case 0xC41B8F: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/decomp.asm:152 ASL <DECOMP_TEMP_COMMAND
    case 0xC41B90: cpu.execute_instruction<0x06>(0x0000D3, 2); return true;
    // src/system/decomp.asm:153 ROR
    case 0xC41B92: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/decomp.asm:154 ASL <DECOMP_TEMP_COMMAND
    case 0xC41B93: cpu.execute_instruction<0x06>(0x0000D3, 2); return true;
    // src/system/decomp.asm:155 ROR
    case 0xC41B95: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/decomp.asm:156 ASL <DECOMP_TEMP_COMMAND
    case 0xC41B96: cpu.execute_instruction<0x06>(0x0000D3, 2); return true;
    // src/system/decomp.asm:157 ROR
    case 0xC41B98: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/decomp.asm:158 ASL <DECOMP_TEMP_COMMAND
    case 0xC41B99: cpu.execute_instruction<0x06>(0x0000D3, 2); return true;
    // src/system/decomp.asm:159 ROR
    case 0xC41B9B: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/decomp.asm:160 ASL <DECOMP_TEMP_COMMAND
    case 0xC41B9C: cpu.execute_instruction<0x06>(0x0000D3, 2); return true;
    // src/system/decomp.asm:161 ROR
    case 0xC41B9E: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/decomp.asm:162 ASL <DECOMP_TEMP_COMMAND
    case 0xC41B9F: cpu.execute_instruction<0x06>(0x0000D3, 2); return true;
    // src/system/decomp.asm:163 ROR
    case 0xC41BA1: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/decomp.asm:164 ASL <DECOMP_TEMP_COMMAND
    case 0xC41BA2: cpu.execute_instruction<0x06>(0x0000D3, 2); return true;
    // src/system/decomp.asm:165 ROR
    case 0xC41BA4: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/decomp.asm:166 STA __BSS_START__,X
    case 0xC41BA5: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/decomp.asm:167 INY
    case 0xC41BA8: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:168 INX
    case 0xC41BA9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/decomp.asm:169 REP #PROC_FLAGS::ACCUM8
    case 0xC41BAA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/decomp.asm:170 DEC <DECOMP_TEMP_LENGTH
    case 0xC41BAC: cpu.execute_instruction<0xC6>(0x0000D1, 2); return true;
    // src/system/decomp.asm:171 SEP #PROC_FLAGS::ACCUM8
    case 0xC41BAE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/decomp.asm:172 BNE DECOMP_UNKNOWN14
    case 0xC41BB0: cpu.execute_instruction<0xD0>(0x0000D6, 2); return true;
    // src/system/decomp.asm:173 PLY
    case 0xC41BB2: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/system/decomp.asm:174 JMP DECOMP_UNKNOWN0
    case 0xC41BB3: cpu.execute_instruction<0x4C>(0x001AC1, 3); return true;
    // src/system/decomp.asm:176 LDA __BSS_START__,Y
    case 0xC41BB6: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/system/decomp.asm:177 STA __BSS_START__,X
    case 0xC41BB9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/decomp.asm:177 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC41C28.
    case 0xC41BBB: cpu.execute_instruction<0x00>(0x000088, 2); return true;
    // src/system/decomp.asm:178 DEY
    case 0xC41BBC: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/decomp.asm:179 INX
    case 0xC41BBD: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/decomp.asm:180 REP #PROC_FLAGS::ACCUM8
    case 0xC41BBE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/decomp.asm:181 DEC <DECOMP_TEMP_LENGTH
    case 0xC41BC0: cpu.execute_instruction<0xC6>(0x0000D1, 2); return true;
    // src/system/decomp.asm:182 SEP #PROC_FLAGS::ACCUM8
    case 0xC41BC2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/decomp.asm:183 BNE DECOMP_UNKNOWN15
    case 0xC41BC4: cpu.execute_instruction<0xD0>(0x0000F0, 2); return true;
    // src/system/decomp.asm:184 PLY
    case 0xC41BC6: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/system/decomp.asm:185 JMP DECOMP_UNKNOWN0
    case 0xC41BC7: cpu.execute_instruction<0x4C>(0x001AC1, 3); return true;
    // src/system/decomp.asm:187 REP #PROC_FLAGS::ACCUM8
    case 0xC41BCA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/decomp.asm:188 PHD
    case 0xC41BCC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/system/decomp.asm:189 PHA
    case 0xC41BCD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/decomp.asm:190 TDC
    case 0xC41BCE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/system/decomp.asm:191 SEC
    case 0xC41BCF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/decomp.asm:192 SBC #$000C
    case 0xC41BD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000C, 2); else cpu.execute_instruction<0xE9>(0x00000C, 3); return true;
    // src/system/decomp.asm:192 SBC #$000C
    // Overlapping static entry reached from 0xC41BD0.
    case 0xC41BD2: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/system/decomp.asm:193 TCD
    case 0xC41BD3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/decomp.asm:194 PLA
    case 0xC41BD4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/decomp.asm:195 STA $00
    case 0xC41BD5: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/system/decomp.asm:196 STX $02
    case 0xC41BD7: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/system/decomp.asm:197 STY $04
    case 0xC41BD9: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/system/decomp.asm:198 LDA #$00E1
    case 0xC41BDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // src/system/decomp.asm:198 LDA #$00E1
    // Overlapping static entry reached from 0xC41BDB.
    case 0xC41BDD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/decomp.asm:199 STA $08
    case 0xC41BDE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/decomp.asm:200 LDA $00
    case 0xC41BE0: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/system/decomp.asm:202 SEC
    case 0xC41BE2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/decomp.asm:203 SBC #$071C
    case 0xC41BE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00001C, 2); else cpu.execute_instruction<0xE9>(0x00071C, 3); return true;
    // src/system/decomp.asm:203 SBC #$071C
    // Overlapping static entry reached from 0xC41BE3.
    case 0xC41BE5: cpu.execute_instruction<0x07>(0x000090, 2); return true;
    // src/system/decomp.asm:204 BCC DECOMP_UNKNOWN17
    case 0xC41BE6: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // src/system/decomp.asm:204 BCC DECOMP_UNKNOWN17
    // Overlapping static entry reached from 0xC41BE5.
    case 0xC41BE7: cpu.execute_instruction<0x04>(0x0000E6, 2); return true;
    // src/system/decomp.asm:205 INC $08
    case 0xC41BE8: cpu.execute_instruction<0xE6>(0x000008, 2); return true;
    // src/system/decomp.asm:205 INC $08
    // Overlapping static entry reached from 0xC41BE7.
    case 0xC41BE9: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/decomp.asm:206 BRA DECOMP_UNKNOWN16
    case 0xC41BEA: cpu.execute_instruction<0x80>(0x0000F6, 2); return true;
    // src/system/decomp.asm:208 ADC #$071C
    case 0xC41BEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00071C, 3); return true;
    // src/system/decomp.asm:208 ADC #$071C
    // Overlapping static entry reached from 0xC41BEC.
    case 0xC41BEE: cpu.execute_instruction<0x07>(0x000085, 2); return true;
    // src/system/decomp.asm:209 STA $00
    case 0xC41BEF: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/system/decomp.asm:209 STA $00
    // Overlapping static entry reached from 0xC41BEE.
    case 0xC41BF0: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/system/decomp.asm:210 LDA $00
    case 0xC41BF1: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/system/decomp.asm:211 SEP #PROC_FLAGS::ACCUM8
    case 0xC41BF3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/decomp.asm:212 PHA
    case 0xC41BF5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/decomp.asm:213 LDA #$0012
    case 0xC41BF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x00C212, 3); return true;
    // src/system/decomp.asm:214 REP #PROC_FLAGS::ACCUM8
    case 0xC41BF8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/decomp.asm:214 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC41BF6.
    case 0xC41BF9: cpu.execute_instruction<0x20>(0x00028F, 3); return true;
    // src/system/decomp.asm:215 STA f:WRMPYA
    case 0xC41BFA: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/system/decomp.asm:215 STA f:WRMPYA
    // Overlapping static entry reached from 0xC41BF9.
    case 0xC41BFC: cpu.execute_instruction<0x42>(0x000000, 2); return true;
    // src/system/decomp.asm:216 NOP
    case 0xC41BFE: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/decomp.asm:217 CLC
    case 0xC41BFF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/decomp.asm:218 LDA f:RDMPYL
    case 0xC41C00: cpu.execute_instruction<0xAF>(0x004216, 4); return true;
    // src/system/decomp.asm:219 TAX
    case 0xC41C04: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/decomp.asm:220 SEP #PROC_FLAGS::ACCUM8
    case 0xC41C05: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/decomp.asm:221 PLA
    case 0xC41C07: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/decomp.asm:222 STA f:WRMPYB
    case 0xC41C08: cpu.execute_instruction<0x8F>(0x004203, 4); return true;
    // src/system/decomp.asm:223 TXA
    case 0xC41C0C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/decomp.asm:224 XBA
    case 0xC41C0D: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:225 REP #PROC_FLAGS::ACCUM8
    case 0xC41C0E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/decomp.asm:226 ADC f:RDMPYL
    case 0xC41C10: cpu.execute_instruction<0x6F>(0x004216, 4); return true;
    // src/system/decomp.asm:227 CLC
    case 0xC41C14: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/decomp.asm:228 ADC #$0000
    case 0xC41C15: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000000, 3); return true;
    // src/system/decomp.asm:228 ADC #$0000
    // Overlapping static entry reached from 0xC41C15.
    case 0xC41C17: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/decomp.asm:229 STA $06
    case 0xC41C18: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/decomp.asm:230 LDY #$0000
    case 0xC41C1A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/decomp.asm:230 LDY #$0000
    // Overlapping static entry reached from 0xC41C1A.
    case 0xC41C1C: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/system/decomp.asm:231 LDA $04
    case 0xC41C1D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/system/decomp.asm:232 BNE DECOMP_UNKNOWN19
    case 0xC41C1F: cpu.execute_instruction<0xD0>(0x000029, 2); return true;
    // src/system/decomp.asm:233 LDY #$0000
    case 0xC41C21: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/decomp.asm:233 LDY #$0000
    // Overlapping static entry reached from 0xC41C21.
    case 0xC41C23: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/system/decomp.asm:235 LDA [$06]
    case 0xC41C24: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:236 AND #$F0FF
    case 0xC41C26: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x00F0FF, 3); return true;
    // src/system/decomp.asm:236 AND #$F0FF
    // Overlapping static entry reached from 0xC41C26.
    case 0xC41C28: cpu.execute_instruction<0xF0>(0x000091, 2); return true;
    // src/system/decomp.asm:237 STA ($02),Y
    case 0xC41C29: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:237 STA ($02),Y
    // Overlapping static entry reached from 0xC41C28.
    case 0xC41C2A: cpu.execute_instruction<0x02>(0x0000C8, 2); return true;
    // src/system/decomp.asm:238 INY
    case 0xC41C2B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:239 INY
    case 0xC41C2C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:240 INY
    case 0xC41C2D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:241 INC $06
    case 0xC41C2E: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:242 LDA [$06]
    case 0xC41C30: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:243 XBA
    case 0xC41C32: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:244 ASL
    case 0xC41C33: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:245 ASL
    case 0xC41C34: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:246 ASL
    case 0xC41C35: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:247 ASL
    case 0xC41C36: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:248 XBA
    case 0xC41C37: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:249 STA ($02),Y
    case 0xC41C38: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:250 INY
    case 0xC41C3A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:251 INY
    case 0xC41C3B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:252 INY
    case 0xC41C3C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:253 INC $06
    case 0xC41C3D: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:254 INC $06
    case 0xC41C3F: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:255 CPY #$0024
    case 0xC41C41: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000024, 2); else cpu.execute_instruction<0xC0>(0x000024, 3); return true;
    // src/system/decomp.asm:255 CPY #$0024
    // Overlapping static entry reached from 0xC41C41.
    case 0xC41C43: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/decomp.asm:256 BCC DECOMP_UNKNOWN18
    case 0xC41C44: cpu.execute_instruction<0x90>(0x0000DE, 2); return true;
    // src/system/decomp.asm:257 PLD
    case 0xC41C46: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/decomp.asm:258 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC41C47: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/decomp.asm:259 RTS
    case 0xC41C49: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/system/decomp.asm:261 DEC
    case 0xC41C4A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/system/decomp.asm:262 BNE DECOMP_UNKNOWN21
    case 0xC41C4B: cpu.execute_instruction<0xD0>(0x00002B, 2); return true;
    // src/system/decomp.asm:264 LDA [$06]
    case 0xC41C4D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:265 XBA
    case 0xC41C4F: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:266 LSR
    case 0xC41C50: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:267 AND #$7FF8
    case 0xC41C51: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x007FF8, 3); return true;
    // src/system/decomp.asm:267 AND #$7FF8
    // Overlapping static entry reached from 0xC41C51.
    case 0xC41C53: cpu.execute_instruction<0x7F>(0x0291EB, 4); return true;
    // src/system/decomp.asm:268 XBA
    case 0xC41C54: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:269 STA ($02),Y
    case 0xC41C55: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:270 INY
    case 0xC41C57: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:271 INY
    case 0xC41C58: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:272 INY
    case 0xC41C59: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:273 INC $06
    case 0xC41C5A: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:274 LDA [$06]
    case 0xC41C5C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:275 XBA
    case 0xC41C5E: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:276 ASL
    case 0xC41C5F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:277 ASL
    case 0xC41C60: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:278 ASL
    case 0xC41C61: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:279 AND #$7FF8
    case 0xC41C62: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x007FF8, 3); return true;
    // src/system/decomp.asm:279 AND #$7FF8
    // Overlapping static entry reached from 0xC41C62.
    case 0xC41C64: cpu.execute_instruction<0x7F>(0x0291EB, 4); return true;
    // src/system/decomp.asm:280 XBA
    case 0xC41C65: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:281 STA ($02),Y
    case 0xC41C66: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:282 INY
    case 0xC41C68: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:283 INY
    case 0xC41C69: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:284 INY
    case 0xC41C6A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:285 INC $06
    case 0xC41C6B: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:286 INC $06
    case 0xC41C6D: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:287 CPY #$0024
    case 0xC41C6F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000024, 2); else cpu.execute_instruction<0xC0>(0x000024, 3); return true;
    // src/system/decomp.asm:287 CPY #$0024
    // Overlapping static entry reached from 0xC41C6F.
    case 0xC41C71: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/decomp.asm:288 BCC DECOMP_UNKNOWN20
    case 0xC41C72: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // src/system/decomp.asm:289 PLD
    case 0xC41C74: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/decomp.asm:290 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC41C75: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/decomp.asm:291 RTS
    case 0xC41C77: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/system/decomp.asm:293 DEC
    case 0xC41C78: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/system/decomp.asm:294 BNE DECOMP_UNKNOWN23
    case 0xC41C79: cpu.execute_instruction<0xD0>(0x00002B, 2); return true;
    // src/system/decomp.asm:296 LDA [$06]
    case 0xC41C7B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:297 XBA
    case 0xC41C7D: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:298 LSR
    case 0xC41C7E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:299 LSR
    case 0xC41C7F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:300 AND #$3FFC
    case 0xC41C80: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x003FFC, 3); return true;
    // src/system/decomp.asm:300 AND #$3FFC
    // Overlapping static entry reached from 0xC41C80.
    case 0xC41C82: cpu.execute_instruction<0x3F>(0x0291EB, 4); return true;
    // src/system/decomp.asm:301 XBA
    case 0xC41C83: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:302 STA ($02),Y
    case 0xC41C84: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:303 INY
    case 0xC41C86: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:304 INY
    case 0xC41C87: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:305 INY
    case 0xC41C88: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:306 INC $06
    case 0xC41C89: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:307 LDA [$06]
    case 0xC41C8B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:308 XBA
    case 0xC41C8D: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:309 ASL
    case 0xC41C8E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:310 ASL
    case 0xC41C8F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:311 AND #$3FFC
    case 0xC41C90: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x003FFC, 3); return true;
    // src/system/decomp.asm:311 AND #$3FFC
    // Overlapping static entry reached from 0xC41C90.
    case 0xC41C92: cpu.execute_instruction<0x3F>(0x0291EB, 4); return true;
    // src/system/decomp.asm:312 XBA
    case 0xC41C93: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:313 STA ($02),Y
    case 0xC41C94: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:314 INY
    case 0xC41C96: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:315 INY
    case 0xC41C97: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:316 INY
    case 0xC41C98: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:317 INC $06
    case 0xC41C99: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:318 INC $06
    case 0xC41C9B: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:319 CPY #$0024
    case 0xC41C9D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000024, 2); else cpu.execute_instruction<0xC0>(0x000024, 3); return true;
    // src/system/decomp.asm:319 CPY #$0024
    // Overlapping static entry reached from 0xC41C9D.
    case 0xC41C9F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/decomp.asm:320 BCC DECOMP_UNKNOWN22
    case 0xC41CA0: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // src/system/decomp.asm:321 PLD
    case 0xC41CA2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/decomp.asm:322 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC41CA3: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/decomp.asm:323 RTS
    case 0xC41CA5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/system/decomp.asm:325 DEC
    case 0xC41CA6: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/system/decomp.asm:326 BNE DECOMP_UNKNOWN25
    case 0xC41CA7: cpu.execute_instruction<0xD0>(0x00002B, 2); return true;
    // src/system/decomp.asm:328 LDA [$06]
    case 0xC41CA9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:329 XBA
    case 0xC41CAB: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:330 LSR
    case 0xC41CAC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:331 LSR
    case 0xC41CAD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:332 LSR
    case 0xC41CAE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:333 AND #$1FFE
    case 0xC41CAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FE, 2); else cpu.execute_instruction<0x29>(0x001FFE, 3); return true;
    // src/system/decomp.asm:333 AND #$1FFE
    // Overlapping static entry reached from 0xC41CAF.
    case 0xC41CB1: cpu.execute_instruction<0x1F>(0x0291EB, 4); return true;
    // src/system/decomp.asm:334 XBA
    case 0xC41CB2: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:335 STA ($02),Y
    case 0xC41CB3: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:336 INY
    case 0xC41CB5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:337 INY
    case 0xC41CB6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:338 INY
    case 0xC41CB7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:339 INC $06
    case 0xC41CB8: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:340 LDA [$06]
    case 0xC41CBA: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:341 XBA
    case 0xC41CBC: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:342 ASL
    case 0xC41CBD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:343 AND #$1FFE
    case 0xC41CBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FE, 2); else cpu.execute_instruction<0x29>(0x001FFE, 3); return true;
    // src/system/decomp.asm:343 AND #$1FFE
    // Overlapping static entry reached from 0xC41CBE.
    case 0xC41CC0: cpu.execute_instruction<0x1F>(0x0291EB, 4); return true;
    // src/system/decomp.asm:344 XBA
    case 0xC41CC1: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:345 STA ($02),Y
    case 0xC41CC2: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:346 INY
    case 0xC41CC4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:347 INY
    case 0xC41CC5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:348 INY
    case 0xC41CC6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:349 INC $06
    case 0xC41CC7: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:350 INC $06
    case 0xC41CC9: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:351 CPY #$0024
    case 0xC41CCB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000024, 2); else cpu.execute_instruction<0xC0>(0x000024, 3); return true;
    // src/system/decomp.asm:351 CPY #$0024
    // Overlapping static entry reached from 0xC41CCB.
    case 0xC41CCD: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/decomp.asm:352 BCC DECOMP_UNKNOWN24
    case 0xC41CCE: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // src/system/decomp.asm:353 PLD
    case 0xC41CD0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/decomp.asm:354 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC41CD1: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/decomp.asm:355 RTS
    case 0xC41CD3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/system/decomp.asm:357 DEC
    case 0xC41CD4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/system/decomp.asm:358 BNE DECOMP_UNKNOWN27
    case 0xC41CD5: cpu.execute_instruction<0xD0>(0x000026, 2); return true;
    // src/system/decomp.asm:360 LDA [$06]
    case 0xC41CD7: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:361 XBA
    case 0xC41CD9: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:362 LSR
    case 0xC41CDA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:363 LSR
    case 0xC41CDB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:364 LSR
    case 0xC41CDC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:365 LSR
    case 0xC41CDD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:366 XBA
    case 0xC41CDE: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:367 STA ($02),Y
    case 0xC41CDF: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:368 INY
    case 0xC41CE1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:369 INY
    case 0xC41CE2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:370 INY
    case 0xC41CE3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:371 INC $06
    case 0xC41CE4: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:372 LDA [$06]
    case 0xC41CE6: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:373 AND #$FF0F
    case 0xC41CE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00FF0F, 3); return true;
    // src/system/decomp.asm:373 AND #$FF0F
    // Overlapping static entry reached from 0xC41CE8.
    case 0xC41CEA: cpu.execute_instruction<0xFF>(0xC80291, 4); return true;
    // src/system/decomp.asm:374 STA ($02),Y
    case 0xC41CEB: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:375 INY
    case 0xC41CED: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:376 INY
    case 0xC41CEE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:377 INY
    case 0xC41CEF: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:378 INC $06
    case 0xC41CF0: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:379 INC $06
    case 0xC41CF2: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:380 CPY #$0024
    case 0xC41CF4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000024, 2); else cpu.execute_instruction<0xC0>(0x000024, 3); return true;
    // src/system/decomp.asm:380 CPY #$0024
    // Overlapping static entry reached from 0xC41CF4.
    case 0xC41CF6: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/decomp.asm:381 BCC DECOMP_UNKNOWN26
    case 0xC41CF7: cpu.execute_instruction<0x90>(0x0000DE, 2); return true;
    // src/system/decomp.asm:382 PLD
    case 0xC41CF9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/decomp.asm:383 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC41CFA: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/decomp.asm:384 RTS
    case 0xC41CFC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/system/decomp.asm:386 DEC
    case 0xC41CFD: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/system/decomp.asm:387 BNE DECOMP_UNKNOWN29
    case 0xC41CFE: cpu.execute_instruction<0xD0>(0x000039, 2); return true;
    // src/system/decomp.asm:389 STZ $0A
    case 0xC41D00: cpu.execute_instruction<0x64>(0x00000A, 2); return true;
    // src/system/decomp.asm:390 LDA [$06]
    case 0xC41D02: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:391 XBA
    case 0xC41D04: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:392 LSR
    case 0xC41D05: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:393 LSR
    case 0xC41D06: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:394 LSR
    case 0xC41D07: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:395 LSR
    case 0xC41D08: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:396 LSR
    case 0xC41D09: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:397 ROR $0A
    case 0xC41D0A: cpu.execute_instruction<0x66>(0x00000A, 2); return true;
    // src/system/decomp.asm:398 XBA
    case 0xC41D0C: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:399 STA ($02),Y
    case 0xC41D0D: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:400 INY
    case 0xC41D0F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:401 INY
    case 0xC41D10: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:402 LDA $0A
    case 0xC41D11: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/system/decomp.asm:403 XBA
    case 0xC41D13: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:404 STA ($02),Y
    case 0xC41D14: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:405 INY
    case 0xC41D16: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:406 INC $06
    case 0xC41D17: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:407 STZ $0A
    case 0xC41D19: cpu.execute_instruction<0x64>(0x00000A, 2); return true;
    // src/system/decomp.asm:408 LDA [$06]
    case 0xC41D1B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:409 XBA
    case 0xC41D1D: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:410 LSR
    case 0xC41D1E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:411 ROR $0A
    case 0xC41D1F: cpu.execute_instruction<0x66>(0x00000A, 2); return true;
    // src/system/decomp.asm:412 XBA
    case 0xC41D21: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:413 STA ($02),Y
    case 0xC41D22: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:414 INY
    case 0xC41D24: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:415 INY
    case 0xC41D25: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:416 LDA $0A
    case 0xC41D26: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/system/decomp.asm:417 XBA
    case 0xC41D28: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:418 STA ($02),Y
    case 0xC41D29: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:419 INY
    case 0xC41D2B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:420 INC $06
    case 0xC41D2C: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:421 INC $06
    case 0xC41D2E: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:422 CPY #$0024
    case 0xC41D30: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000024, 2); else cpu.execute_instruction<0xC0>(0x000024, 3); return true;
    // src/system/decomp.asm:422 CPY #$0024
    // Overlapping static entry reached from 0xC41D30.
    case 0xC41D32: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/decomp.asm:423 BCC DECOMP_UNKNOWN28
    case 0xC41D33: cpu.execute_instruction<0x90>(0x0000CB, 2); return true;
    // src/system/decomp.asm:424 PLD
    case 0xC41D35: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/decomp.asm:425 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC41D36: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/decomp.asm:426 RTS
    case 0xC41D38: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/system/decomp.asm:428 DEC
    case 0xC41D39: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/system/decomp.asm:429 BNE DECOMP_UNKNOWN31
    case 0xC41D3A: cpu.execute_instruction<0xD0>(0x00003D, 2); return true;
    // src/system/decomp.asm:431 LDA [$06]
    case 0xC41D3C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:432 XBA
    case 0xC41D3E: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:433 STA $0A
    case 0xC41D3F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/system/decomp.asm:434 LDA #$0000
    case 0xC41D41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/decomp.asm:434 LDA #$0000
    // Overlapping static entry reached from 0xC41D41.
    case 0xC41D43: cpu.execute_instruction<0x00>(0x000006, 2); return true;
    // src/system/decomp.asm:435 ASL $0A
    case 0xC41D44: cpu.execute_instruction<0x06>(0x00000A, 2); return true;
    // src/system/decomp.asm:436 ROL
    case 0xC41D46: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/system/decomp.asm:437 ASL $0A
    case 0xC41D47: cpu.execute_instruction<0x06>(0x00000A, 2); return true;
    // src/system/decomp.asm:438 ROL
    case 0xC41D49: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/system/decomp.asm:439 STA ($02),Y
    case 0xC41D4A: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:440 INY
    case 0xC41D4C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:441 LDA $0A
    case 0xC41D4D: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/system/decomp.asm:442 XBA
    case 0xC41D4F: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:443 STA ($02),Y
    case 0xC41D50: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:444 INY
    case 0xC41D52: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:445 INY
    case 0xC41D53: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:446 INC $06
    case 0xC41D54: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:447 STZ $0A
    case 0xC41D56: cpu.execute_instruction<0x64>(0x00000A, 2); return true;
    // src/system/decomp.asm:448 LDA [$06]
    case 0xC41D58: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:449 XBA
    case 0xC41D5A: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:450 LSR
    case 0xC41D5B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:451 ROR $0A
    case 0xC41D5C: cpu.execute_instruction<0x66>(0x00000A, 2); return true;
    // src/system/decomp.asm:452 LSR
    case 0xC41D5E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:453 ROR $0A
    case 0xC41D5F: cpu.execute_instruction<0x66>(0x00000A, 2); return true;
    // src/system/decomp.asm:454 XBA
    case 0xC41D61: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:455 STA ($02),Y
    case 0xC41D62: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:456 INY
    case 0xC41D64: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:457 INY
    case 0xC41D65: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:458 LDA $0A
    case 0xC41D66: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/system/decomp.asm:459 XBA
    case 0xC41D68: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:460 STA ($02),Y
    case 0xC41D69: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:461 INY
    case 0xC41D6B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:462 INC $06
    case 0xC41D6C: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:463 INC $06
    case 0xC41D6E: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:464 CPY #$0024
    case 0xC41D70: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000024, 2); else cpu.execute_instruction<0xC0>(0x000024, 3); return true;
    // src/system/decomp.asm:464 CPY #$0024
    // Overlapping static entry reached from 0xC41D70.
    case 0xC41D72: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/decomp.asm:465 BCC DECOMP_UNKNOWN30
    case 0xC41D73: cpu.execute_instruction<0x90>(0x0000C7, 2); return true;
    // src/system/decomp.asm:466 PLD
    case 0xC41D75: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/decomp.asm:467 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC41D76: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/decomp.asm:468 RTS
    case 0xC41D78: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/system/decomp.asm:470 LDA [$06]
    case 0xC41D79: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:471 XBA
    case 0xC41D7B: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:472 STA $0A
    case 0xC41D7C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/system/decomp.asm:473 LDA #$0000
    case 0xC41D7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/decomp.asm:473 LDA #$0000
    // Overlapping static entry reached from 0xC41D7E.
    case 0xC41D80: cpu.execute_instruction<0x00>(0x000006, 2); return true;
    // src/system/decomp.asm:474 ASL $0A
    case 0xC41D81: cpu.execute_instruction<0x06>(0x00000A, 2); return true;
    // src/system/decomp.asm:475 ROL
    case 0xC41D83: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/system/decomp.asm:476 STA ($02),Y
    case 0xC41D84: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:477 INY
    case 0xC41D86: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:478 LDA $0A
    case 0xC41D87: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/system/decomp.asm:479 XBA
    case 0xC41D89: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:480 STA ($02),Y
    case 0xC41D8A: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:481 INY
    case 0xC41D8C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:482 INY
    case 0xC41D8D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:483 INC $06
    case 0xC41D8E: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:484 STZ $0A
    case 0xC41D90: cpu.execute_instruction<0x64>(0x00000A, 2); return true;
    // src/system/decomp.asm:485 LDA [$06]
    case 0xC41D92: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:486 XBA
    case 0xC41D94: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:487 LSR
    case 0xC41D95: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:488 ROR $0A
    case 0xC41D96: cpu.execute_instruction<0x66>(0x00000A, 2); return true;
    // src/system/decomp.asm:489 LSR
    case 0xC41D98: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:490 ROR $0A
    case 0xC41D99: cpu.execute_instruction<0x66>(0x00000A, 2); return true;
    // src/system/decomp.asm:491 LSR
    case 0xC41D9B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:492 ROR $0A
    case 0xC41D9C: cpu.execute_instruction<0x66>(0x00000A, 2); return true;
    // src/system/decomp.asm:493 XBA
    case 0xC41D9E: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:494 STA ($02),Y
    case 0xC41D9F: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:495 INY
    case 0xC41DA1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:496 INY
    case 0xC41DA2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:497 LDA $0A
    case 0xC41DA3: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/system/decomp.asm:498 XBA
    case 0xC41DA5: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:499 STA ($02),Y
    case 0xC41DA6: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:500 INY
    case 0xC41DA8: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:501 INC $06
    case 0xC41DA9: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:502 INC $06
    case 0xC41DAB: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:503 CPY #$0024
    case 0xC41DAD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000024, 2); else cpu.execute_instruction<0xC0>(0x000024, 3); return true;
    // src/system/decomp.asm:503 CPY #$0024
    // Overlapping static entry reached from 0xC41DAD.
    case 0xC41DAF: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/decomp.asm:504 BCC DECOMP_UNKNOWN31
    case 0xC41DB0: cpu.execute_instruction<0x90>(0x0000C7, 2); return true;
    // src/system/decomp.asm:505 PLD
    case 0xC41DB2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/decomp.asm:506 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC41DB3: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/decomp.asm:507 RTS
    case 0xC41DB5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/default_irq_callback.asm (source_named).
bool execute_system_default_irq_callback_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/default_irq_callback.asm:3 RTS
    case 0xC0851B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/display_antipiracy_screen.asm (source_named).
bool execute_system_display_antipiracy_screen_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/display_antipiracy_screen.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC30100: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/display_antipiracy_screen.asm:7 END_STACK_VARS
    case 0xC30102: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/display_antipiracy_screen.asm:7 END_STACK_VARS
    case 0xC30103: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/display_antipiracy_screen.asm:7 END_STACK_VARS
    case 0xC30104: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/display_antipiracy_screen.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC30104.
    case 0xC30106: cpu.execute_instruction<0xFF>(0x51225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/display_antipiracy_screen.asm:7 END_STACK_VARS
    case 0xC30107: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/display_antipiracy_screen.asm:8 JSL UNKNOWN_C40B51
    case 0xC30108: cpu.execute_instruction<0x22>(0xC40B51, 4); return true;
    // src/system/display_antipiracy_screen.asm:8 JSL UNKNOWN_C40B51
    // Overlapping static entry reached from 0xC30106.
    case 0xC3010A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/system/display_antipiracy_screen.asm:8 JSL UNKNOWN_C40B51
    // Overlapping static entry reached from 0xC3010A.
    case 0xC3010B: cpu.execute_instruction<0xC4>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_antipiracy_screen.asm:9 LOADPTR ANTI_PIRACY_NOTICE_GRAPHICS, @LOCAL00
    case 0xC3010C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00F20D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_antipiracy_screen.asm:9 LOADPTR ANTI_PIRACY_NOTICE_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC3010B.
    case 0xC3010D: cpu.execute_instruction<0x0D>(0x0085F2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_antipiracy_screen.asm:9 LOADPTR ANTI_PIRACY_NOTICE_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC3010C.
    case 0xC3010E: cpu.execute_instruction<0xF2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/display_antipiracy_screen.asm:9 LOADPTR ANTI_PIRACY_NOTICE_GRAPHICS, @LOCAL00
    case 0xC3010F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/display_antipiracy_screen.asm:9 LOADPTR ANTI_PIRACY_NOTICE_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC3010E.
    case 0xC30110: cpu.execute_instruction<0x0E>(0x00D8A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/display_antipiracy_screen.asm:9 LOADPTR ANTI_PIRACY_NOTICE_GRAPHICS, @LOCAL00
    case 0xC30111: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D8, 2); else cpu.execute_instruction<0xA9>(0x0000D8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/display_antipiracy_screen.asm:9 LOADPTR ANTI_PIRACY_NOTICE_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC30111.
    case 0xC30113: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/display_antipiracy_screen.asm:9 LOADPTR ANTI_PIRACY_NOTICE_GRAPHICS, @LOCAL00
    case 0xC30114: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_antipiracy_screen.asm:10 LOADPTR BUFFER, @LOCAL01
    case 0xC30116: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_antipiracy_screen.asm:10 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC30116.
    case 0xC30118: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/display_antipiracy_screen.asm:10 LOADPTR BUFFER, @LOCAL01
    case 0xC30119: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/display_antipiracy_screen.asm:10 LOADPTR BUFFER, @LOCAL01
    case 0xC3011B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/display_antipiracy_screen.asm:10 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC3011B.
    case 0xC3011D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/display_antipiracy_screen.asm:10 LOADPTR BUFFER, @LOCAL01
    case 0xC3011E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/display_antipiracy_screen.asm:11 JSL DECOMP
    case 0xC30120: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_antipiracy_screen.asm:12 LOADPTR ANTI_PIRACY_NOTICE_ARRANGEMENT, @LOCAL00
    case 0xC30124: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005E, 2); else cpu.execute_instruction<0xA9>(0x00F05E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_antipiracy_screen.asm:12 LOADPTR ANTI_PIRACY_NOTICE_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC30124.
    case 0xC30126: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/display_antipiracy_screen.asm:12 LOADPTR ANTI_PIRACY_NOTICE_ARRANGEMENT, @LOCAL00
    case 0xC30127: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/display_antipiracy_screen.asm:12 LOADPTR ANTI_PIRACY_NOTICE_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC30126.
    case 0xC30128: cpu.execute_instruction<0x0E>(0x00D8A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/display_antipiracy_screen.asm:12 LOADPTR ANTI_PIRACY_NOTICE_ARRANGEMENT, @LOCAL00
    case 0xC30129: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D8, 2); else cpu.execute_instruction<0xA9>(0x0000D8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/display_antipiracy_screen.asm:12 LOADPTR ANTI_PIRACY_NOTICE_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC30129.
    case 0xC3012B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/display_antipiracy_screen.asm:12 LOADPTR ANTI_PIRACY_NOTICE_ARRANGEMENT, @LOCAL00
    case 0xC3012C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_antipiracy_screen.asm:13 LOADPTR BUFFER + $4000, @LOCAL01
    case 0xC3012E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_antipiracy_screen.asm:13 LOADPTR BUFFER + $4000, @LOCAL01
    // Overlapping static entry reached from 0xC3012E.
    case 0xC30130: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/display_antipiracy_screen.asm:13 LOADPTR BUFFER + $4000, @LOCAL01
    case 0xC30131: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/display_antipiracy_screen.asm:13 LOADPTR BUFFER + $4000, @LOCAL01
    case 0xC30133: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/display_antipiracy_screen.asm:13 LOADPTR BUFFER + $4000, @LOCAL01
    // Overlapping static entry reached from 0xC30133.
    case 0xC30135: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/display_antipiracy_screen.asm:13 LOADPTR BUFFER + $4000, @LOCAL01
    case 0xC30136: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/display_antipiracy_screen.asm:14 JSL DECOMP
    case 0xC30138: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/system/display_antipiracy_screen.asm:15 JSL UNKNOWN_C40B75
    case 0xC3013C: cpu.execute_instruction<0x22>(0xC40B75, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/display_antipiracy_screen.asm:16 END_C_FUNCTION
    case 0xC30140: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/display_antipiracy_screen.asm:16 END_C_FUNCTION
    case 0xC30141: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/display_faulty_gamepak_screen.asm (source_named).
bool execute_system_display_faulty_gamepak_screen_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC30142: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:7 END_STACK_VARS
    case 0xC30144: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:7 END_STACK_VARS
    case 0xC30145: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:7 END_STACK_VARS
    case 0xC30146: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC30146.
    case 0xC30148: cpu.execute_instruction<0xFF>(0x51225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:7 END_STACK_VARS
    case 0xC30149: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/display_faulty_gamepak_screen.asm:8 JSL UNKNOWN_C40B51
    case 0xC3014A: cpu.execute_instruction<0x22>(0xC40B51, 4); return true;
    // src/system/display_faulty_gamepak_screen.asm:8 JSL UNKNOWN_C40B51
    // Overlapping static entry reached from 0xC30148.
    case 0xC3014C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/system/display_faulty_gamepak_screen.asm:8 JSL UNKNOWN_C40B51
    // Overlapping static entry reached from 0xC3014C.
    case 0xC3014D: cpu.execute_instruction<0xC4>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:9 LOADPTR FAULTY_GAME_PAK_GRAPHICS, @LOCAL00
    case 0xC3014E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x00F5C4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:9 LOADPTR FAULTY_GAME_PAK_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC3014D.
    case 0xC3014F: cpu.execute_instruction<0xC4>(0x0000F5, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:9 LOADPTR FAULTY_GAME_PAK_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC3014E.
    case 0xC30150: cpu.execute_instruction<0xF5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:9 LOADPTR FAULTY_GAME_PAK_GRAPHICS, @LOCAL00
    case 0xC30151: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:9 LOADPTR FAULTY_GAME_PAK_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC30150.
    case 0xC30152: cpu.execute_instruction<0x0E>(0x00D8A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:9 LOADPTR FAULTY_GAME_PAK_GRAPHICS, @LOCAL00
    case 0xC30153: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D8, 2); else cpu.execute_instruction<0xA9>(0x0000D8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:9 LOADPTR FAULTY_GAME_PAK_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC30153.
    case 0xC30155: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:9 LOADPTR FAULTY_GAME_PAK_GRAPHICS, @LOCAL00
    case 0xC30156: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:10 LOADPTR BUFFER, @LOCAL01
    case 0xC30158: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:10 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC30158.
    case 0xC3015A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:10 LOADPTR BUFFER, @LOCAL01
    case 0xC3015B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:10 LOADPTR BUFFER, @LOCAL01
    case 0xC3015D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:10 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC3015D.
    case 0xC3015F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:10 LOADPTR BUFFER, @LOCAL01
    case 0xC30160: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/display_faulty_gamepak_screen.asm:11 JSL DECOMP
    case 0xC30162: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:12 LOADPTR FAULTY_GAME_PAK_ARRANGEMENT, @LOCAL00
    case 0xC30166: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C6, 2); else cpu.execute_instruction<0xA9>(0x00F3C6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:12 LOADPTR FAULTY_GAME_PAK_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC30166.
    case 0xC30168: cpu.execute_instruction<0xF3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:12 LOADPTR FAULTY_GAME_PAK_ARRANGEMENT, @LOCAL00
    case 0xC30169: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:12 LOADPTR FAULTY_GAME_PAK_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC30168.
    case 0xC3016A: cpu.execute_instruction<0x0E>(0x00D8A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:12 LOADPTR FAULTY_GAME_PAK_ARRANGEMENT, @LOCAL00
    case 0xC3016B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D8, 2); else cpu.execute_instruction<0xA9>(0x0000D8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:12 LOADPTR FAULTY_GAME_PAK_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC3016B.
    case 0xC3016D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:12 LOADPTR FAULTY_GAME_PAK_ARRANGEMENT, @LOCAL00
    case 0xC3016E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:13 LOADPTR BUFFER + $4000, @LOCAL01
    case 0xC30170: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:13 LOADPTR BUFFER + $4000, @LOCAL01
    // Overlapping static entry reached from 0xC30170.
    case 0xC30172: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:13 LOADPTR BUFFER + $4000, @LOCAL01
    case 0xC30173: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:13 LOADPTR BUFFER + $4000, @LOCAL01
    case 0xC30175: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:13 LOADPTR BUFFER + $4000, @LOCAL01
    // Overlapping static entry reached from 0xC30175.
    case 0xC30177: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:13 LOADPTR BUFFER + $4000, @LOCAL01
    case 0xC30178: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/display_faulty_gamepak_screen.asm:14 JSL DECOMP
    case 0xC3017A: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/system/display_faulty_gamepak_screen.asm:15 JSL UNKNOWN_C40B75
    case 0xC3017E: cpu.execute_instruction<0x22>(0xC40B75, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:16 END_C_FUNCTION
    case 0xC30182: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:16 END_C_FUNCTION
    case 0xC30183: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/enable_nmi_joypad.asm (source_named).
bool execute_system_enable_nmi_joypad_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/enable_nmi_joypad.asm:3 PHP
    case 0xC08715: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/enable_nmi_joypad.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC08716: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/enable_nmi_joypad.asm:5 LDA NMITIMEN_MIRROR
    case 0xC08718: cpu.execute_instruction<0xAD>(0x00001E, 3); return true;
    // src/system/enable_nmi_joypad.asm:6 ORA #$0081
    case 0xC0871B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000081, 2); else cpu.execute_instruction<0x09>(0x008D81, 3); return true;
    // src/system/enable_nmi_joypad.asm:7 STA NMITIMEN_MIRROR
    case 0xC0871D: cpu.execute_instruction<0x8D>(0x00001E, 3); return true;
    // src/system/enable_nmi_joypad.asm:7 STA NMITIMEN_MIRROR
    // Overlapping static entry reached from 0xC0871B.
    case 0xC0871E: cpu.execute_instruction<0x1E>(0x008F00, 3); return true;
    // src/system/enable_nmi_joypad.asm:8 STA f:NMITIMEN
    case 0xC08720: cpu.execute_instruction<0x8F>(0x004200, 4); return true;
    // src/system/enable_nmi_joypad.asm:8 STA f:NMITIMEN
    // Overlapping static entry reached from 0xC0871E.
    case 0xC08721: cpu.execute_instruction<0x00>(0x000042, 2); return true;
    // src/system/enable_nmi_joypad.asm:9 PLP
    case 0xC08724: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/enable_nmi_joypad.asm:10 RTL
    case 0xC08725: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/execute_irq_callback.asm (source_named).
bool execute_system_execute_irq_callback_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/execute_irq_callback.asm:3 JMP (.LOWORD(IRQ_CALLBACK))
    case 0xC08518: cpu.execute_instruction<0x6C>(0x000020, 3); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/fade_in.asm (source_named).
bool execute_system_fade_in_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/fade_in.asm:3 PHP
    case 0xC0886C: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/fade_in.asm:4 SEP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0886D: cpu.execute_instruction<0xE2>(0x000030, 2); return true;
    // src/system/fade_in.asm:5 STA FADE_PARAMETERS + fade_parameters::step
    case 0xC0886F: cpu.execute_instruction<0x8D>(0x000028, 3); return true;
    // src/system/fade_in.asm:6 STX FADE_PARAMETERS + fade_parameters::delay
    case 0xC08872: cpu.execute_instruction<0x8E>(0x000029, 3); return true;
    // src/system/fade_in.asm:7 STX FADE_DELAY_FRAMES_LEFT
    case 0xC08875: cpu.execute_instruction<0x8E>(0x00002A, 3); return true;
    // src/system/fade_in.asm:8 PLP
    case 0xC08878: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/fade_in.asm:9 RTL
    case 0xC08879: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/fade_in_with_mosaic.asm (source_named).
bool execute_system_fade_in_with_mosaic_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/fade_in_with_mosaic.asm:3 PHP
    case 0xC087CE: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/fade_in_with_mosaic.asm:4 REP #PROC_FLAGS::ACCUM8
    case 0xC087CF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/fade_in_with_mosaic.asm:5 PHD
    case 0xC087D1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/system/fade_in_with_mosaic.asm:6 PHA
    case 0xC087D2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/fade_in_with_mosaic.asm:7 TDC
    case 0xC087D3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/system/fade_in_with_mosaic.asm:8 SEC
    case 0xC087D4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/fade_in_with_mosaic.asm:9 SBC #$0006
    case 0xC087D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000006, 2); else cpu.execute_instruction<0xE9>(0x000006, 3); return true;
    // src/system/fade_in_with_mosaic.asm:9 SBC #$0006
    // Overlapping static entry reached from 0xC087D5.
    case 0xC087D7: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/system/fade_in_with_mosaic.asm:10 TCD
    case 0xC087D8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/fade_in_with_mosaic.asm:11 PLA
    case 0xC087D9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/fade_in_with_mosaic.asm:12 STZ FADE_PARAMETERS
    case 0xC087DA: cpu.execute_instruction<0x9C>(0x000028, 3); return true;
    // src/system/fade_in_with_mosaic.asm:13 STA $00
    case 0xC087DD: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/system/fade_in_with_mosaic.asm:14 STX $02
    case 0xC087DF: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/system/fade_in_with_mosaic.asm:15 STY $04
    case 0xC087E1: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/system/fade_in_with_mosaic.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC087E3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/fade_in_with_mosaic.asm:17 STZ INIDISP_MIRROR
    case 0xC087E5: cpu.execute_instruction<0x9C>(0x00000D, 3); return true;
    // src/system/fade_in_with_mosaic.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC087E8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/fade_in_with_mosaic.asm:20 STZ MOSAIC_MIRROR
    case 0xC087EA: cpu.execute_instruction<0x9C>(0x000010, 3); return true;
    // src/system/fade_in_with_mosaic.asm:21 LDA INIDISP_MIRROR
    case 0xC087ED: cpu.execute_instruction<0xAD>(0x00000D, 3); return true;
    // src/system/fade_in_with_mosaic.asm:22 CLC
    case 0xC087F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/fade_in_with_mosaic.asm:23 ADC $00
    case 0xC087F1: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/system/fade_in_with_mosaic.asm:24 CMP #$000F
    case 0xC087F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000F, 2); else cpu.execute_instruction<0xC9>(0x00C20F, 3); return true;
    // src/system/fade_in_with_mosaic.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC087F5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/fade_in_with_mosaic.asm:25 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC087F3.
    case 0xC087F6: cpu.execute_instruction<0x20>(0x0012B0, 3); return true;
    // src/system/fade_in_with_mosaic.asm:26 BCS @UNKNOWN2
    case 0xC087F7: cpu.execute_instruction<0xB0>(0x000012, 2); return true;
    // src/system/fade_in_with_mosaic.asm:27 JSR SET_INIDISP
    case 0xC087F9: cpu.execute_instruction<0x20>(0x00879D, 3); return true;
    // src/system/fade_in_with_mosaic.asm:28 LDA $04
    case 0xC087FC: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/system/fade_in_with_mosaic.asm:29 BEQ @UNKNOWN1
    case 0xC087FE: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/system/fade_in_with_mosaic.asm:30 JSR UNKNOWN_C087AB
    case 0xC08800: cpu.execute_instruction<0x20>(0x0087AB, 3); return true;
    // src/system/fade_in_with_mosaic.asm:32 LDA $02
    case 0xC08803: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/fade_in_with_mosaic.asm:33 JSL UNKNOWN_C0878B
    case 0xC08805: cpu.execute_instruction<0x22>(0xC0878B, 4); return true;
    // src/system/fade_in_with_mosaic.asm:34 BRA @UNKNOWN0
    case 0xC08809: cpu.execute_instruction<0x80>(0x0000DD, 2); return true;
    // src/system/fade_in_with_mosaic.asm:36 LDA #$000F
    case 0xC0880B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00000F, 3); return true;
    // src/system/fade_in_with_mosaic.asm:36 LDA #$000F
    // Overlapping static entry reached from 0xC0880B.
    case 0xC0880D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/system/fade_in_with_mosaic.asm:37 JSR SET_INIDISP
    case 0xC0880E: cpu.execute_instruction<0x20>(0x00879D, 3); return true;
    // src/system/fade_in_with_mosaic.asm:38 PLD
    case 0xC08811: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/fade_in_with_mosaic.asm:39 PLP
    case 0xC08812: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/fade_in_with_mosaic.asm:40 RTL
    case 0xC08813: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/fade_out.asm (source_named).
bool execute_system_fade_out_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/fade_out.asm:3 PHP
    case 0xC0887A: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/fade_out.asm:4 SEP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0887B: cpu.execute_instruction<0xE2>(0x000030, 2); return true;
    // src/system/fade_out.asm:5 EOR #$00FF
    case 0xC0887D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x001AFF, 3); return true;
    // src/system/fade_out.asm:6 INC
    case 0xC0887F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/fade_out.asm:7 STA FADE_PARAMETERS + fade_parameters::step
    case 0xC08880: cpu.execute_instruction<0x8D>(0x000028, 3); return true;
    // src/system/fade_out.asm:8 STX FADE_PARAMETERS + fade_parameters::delay
    case 0xC08883: cpu.execute_instruction<0x8E>(0x000029, 3); return true;
    // src/system/fade_out.asm:9 STX FADE_DELAY_FRAMES_LEFT
    case 0xC08886: cpu.execute_instruction<0x8E>(0x00002A, 3); return true;
    // src/system/fade_out.asm:10 PLP
    case 0xC08889: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/fade_out.asm:11 RTL
    case 0xC0888A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/fade_out_with_mosaic.asm (source_named).
bool execute_system_fade_out_with_mosaic_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/fade_out_with_mosaic.asm:3 PHP
    case 0xC08814: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/fade_out_with_mosaic.asm:4 REP #PROC_FLAGS::ACCUM8
    case 0xC08815: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/fade_out_with_mosaic.asm:5 PHD
    case 0xC08817: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/system/fade_out_with_mosaic.asm:6 PHA
    case 0xC08818: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/fade_out_with_mosaic.asm:7 TDC
    case 0xC08819: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/system/fade_out_with_mosaic.asm:8 SEC
    case 0xC0881A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/fade_out_with_mosaic.asm:9 SBC #$0006
    case 0xC0881B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000006, 2); else cpu.execute_instruction<0xE9>(0x000006, 3); return true;
    // src/system/fade_out_with_mosaic.asm:9 SBC #$0006
    // Overlapping static entry reached from 0xC0881B.
    case 0xC0881D: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/system/fade_out_with_mosaic.asm:10 TCD
    case 0xC0881E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/fade_out_with_mosaic.asm:11 PLA
    case 0xC0881F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/fade_out_with_mosaic.asm:12 STZ FADE_PARAMETERS
    case 0xC08820: cpu.execute_instruction<0x9C>(0x000028, 3); return true;
    // src/system/fade_out_with_mosaic.asm:13 STA $00
    case 0xC08823: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/system/fade_out_with_mosaic.asm:14 STX $02
    case 0xC08825: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/system/fade_out_with_mosaic.asm:15 STY $04
    case 0xC08827: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/system/fade_out_with_mosaic.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC08829: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/fade_out_with_mosaic.asm:18 STZ MOSAIC_MIRROR
    case 0xC0882B: cpu.execute_instruction<0x9C>(0x000010, 3); return true;
    // src/system/fade_out_with_mosaic.asm:19 LDA INIDISP_MIRROR
    case 0xC0882E: cpu.execute_instruction<0xAD>(0x00000D, 3); return true;
    // src/system/fade_out_with_mosaic.asm:22 BMI @UNKNOWN2
    case 0xC08831: cpu.execute_instruction<0x30>(0x000019, 2); return true;
    // src/system/fade_out_with_mosaic.asm:24 SEC
    case 0xC08833: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/fade_out_with_mosaic.asm:25 SBC $00
    case 0xC08834: cpu.execute_instruction<0xE5>(0x000000, 2); return true;
    // src/system/fade_out_with_mosaic.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC08836: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/fade_out_with_mosaic.asm:27 BMI @UNKNOWN2
    case 0xC08838: cpu.execute_instruction<0x30>(0x000012, 2); return true;
    // src/system/fade_out_with_mosaic.asm:28 JSR SET_INIDISP
    case 0xC0883A: cpu.execute_instruction<0x20>(0x00879D, 3); return true;
    // src/system/fade_out_with_mosaic.asm:29 LDA $04
    case 0xC0883D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/system/fade_out_with_mosaic.asm:30 BEQ @UNKNOWN1
    case 0xC0883F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/system/fade_out_with_mosaic.asm:31 JSR UNKNOWN_C087AB
    case 0xC08841: cpu.execute_instruction<0x20>(0x0087AB, 3); return true;
    // src/system/fade_out_with_mosaic.asm:33 LDA $02
    case 0xC08844: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/fade_out_with_mosaic.asm:34 JSL UNKNOWN_C0878B
    case 0xC08846: cpu.execute_instruction<0x22>(0xC0878B, 4); return true;
    // src/system/fade_out_with_mosaic.asm:35 BRA @UNKNOWN0
    case 0xC0884A: cpu.execute_instruction<0x80>(0x0000DD, 2); return true;
    // src/system/fade_out_with_mosaic.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC0884C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/fade_out_with_mosaic.asm:41 LDA #$0080
    case 0xC0884E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/system/fade_out_with_mosaic.asm:41 LDA #$0080
    // Overlapping static entry reached from 0xC0884E.
    case 0xC08850: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/system/fade_out_with_mosaic.asm:42 JSR SET_INIDISP
    case 0xC08851: cpu.execute_instruction<0x20>(0x00879D, 3); return true;
    // src/system/fade_out_with_mosaic.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC08854: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/fade_out_with_mosaic.asm:44 STZ HDMAEN_MIRROR
    case 0xC08856: cpu.execute_instruction<0x9C>(0x00001F, 3); return true;
    // src/system/fade_out_with_mosaic.asm:45 STZ NEW_FRAME_STARTED
    case 0xC08859: cpu.execute_instruction<0x9C>(0x00002B, 3); return true;
    // src/system/fade_out_with_mosaic.asm:47 LDA NEW_FRAME_STARTED
    case 0xC0885C: cpu.execute_instruction<0xAD>(0x00002B, 3); return true;
    // src/system/fade_out_with_mosaic.asm:48 BEQ @UNKNOWN3
    case 0xC0885F: cpu.execute_instruction<0xF0>(0x0000FB, 2); return true;
    // src/system/fade_out_with_mosaic.asm:49 LDA #$0000
    case 0xC08861: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/system/fade_out_with_mosaic.asm:50 STA f:HDMAEN
    case 0xC08863: cpu.execute_instruction<0x8F>(0x00420C, 4); return true;
    // src/system/fade_out_with_mosaic.asm:50 STA f:HDMAEN
    // Overlapping static entry reached from 0xC08861.
    case 0xC08864: cpu.execute_instruction<0x0C>(0x000042, 3); return true;
    // src/system/fade_out_with_mosaic.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC08867: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/fade_out_with_mosaic.asm:52 PLD
    case 0xC08869: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/fade_out_with_mosaic.asm:53 PLP
    case 0xC0886A: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/fade_out_with_mosaic.asm:54 RTL
    case 0xC0886B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/file_select_init.asm (source_named).
bool execute_system_file_select_init_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/file_select_init.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0B525: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/file_select_init.asm:7 END_STACK_VARS
    case 0xC0B527: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/file_select_init.asm:7 END_STACK_VARS
    case 0xC0B528: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/file_select_init.asm:7 END_STACK_VARS
    case 0xC0B529: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/file_select_init.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0B529.
    case 0xC0B52B: cpu.execute_instruction<0xFF>(0x26225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/file_select_init.asm:7 END_STACK_VARS
    case 0xC0B52C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/file_select_init.asm:8 JSL UNKNOWN_C08726
    case 0xC0B52D: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/system/file_select_init.asm:8 JSL UNKNOWN_C08726
    // Overlapping static entry reached from 0xC0B52B.
    case 0xC0B52F: cpu.execute_instruction<0x87>(0x0000C0, 2); return true;
    // src/system/file_select_init.asm:9 JSL UNKNOWN_C0927C
    case 0xC0B531: cpu.execute_instruction<0x22>(0xC0927C, 4); return true;
    // src/system/file_select_init.asm:10 JSL OAM_CLEAR
    case 0xC0B535: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/system/file_select_init.asm:11 JSL UPDATE_SCREEN
    case 0xC0B539: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/system/file_select_init.asm:12 JSL UNKNOWN_C01A86
    case 0xC0B53D: cpu.execute_instruction<0x22>(0xC01A86, 4); return true;
    // src/system/file_select_init.asm:13 LDX #0
    case 0xC0B541: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/file_select_init.asm:13 LDX #0
    // Overlapping static entry reached from 0xC0B541.
    case 0xC0B543: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/system/file_select_init.asm:14 LDA #$8000
    case 0xC0B544: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/system/file_select_init.asm:14 LDA #$8000
    // Overlapping static entry reached from 0xC0B544.
    case 0xC0B546: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/system/file_select_init.asm:15 JSL ALLOC_SPRITE_MEM
    case 0xC0B547: cpu.execute_instruction<0x22>(0xC01C11, 4); return true;
    // src/system/file_select_init.asm:16 JSL INITIALIZE_MISC_OBJECT_DATA
    case 0xC0B54B: cpu.execute_instruction<0x22>(0xC01A69, 4); return true;
    // src/system/file_select_init.asm:17 JSL OVERWORLD_SETUP_VRAM
    case 0xC0B54F: cpu.execute_instruction<0x22>(0xC00013, 4); return true;
    // src/system/file_select_init.asm:18 JSL UNKNOWN_C432B1
    case 0xC0B553: cpu.execute_instruction<0x22>(0xC432B1, 4); return true;
    // src/system/file_select_init.asm:19 JSL PREPARE_AVERAGE_FOR_SPRITE_PALETTES
    case 0xC0B557: cpu.execute_instruction<0x22>(0xC005E7, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/file_select_init.asm:20 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC0B55B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/file_select_init.asm:20 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC0B55B.
    case 0xC0B55D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/file_select_init.asm:20 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC0B55E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/file_select_init.asm:20 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC0B560: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/file_select_init.asm:20 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC0B560.
    case 0xC0B562: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/file_select_init.asm:20 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC0B563: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/file_select_init.asm:21 LDX #BPP4PALETTE_SIZE * 8
    case 0xC0B565: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/system/file_select_init.asm:21 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC0B565.
    case 0xC0B567: cpu.execute_instruction<0x01>(0x0000A9, 2); return true;
    // src/system/file_select_init.asm:22 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC0B568: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000300, 3); return true;
    // src/system/file_select_init.asm:22 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC0B567.
    case 0xC0B569: cpu.execute_instruction<0x00>(0x000003, 2); return true;
    // src/system/file_select_init.asm:22 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC0B568.
    case 0xC0B56A: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/system/file_select_init.asm:23 JSL MEMCPY16
    case 0xC0B56B: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/system/file_select_init.asm:23 JSL MEMCPY16
    // Overlapping static entry reached from 0xC0B56A.
    case 0xC0B56C: cpu.execute_instruction<0xD2>(0x00008E, 2); return true;
    // src/system/file_select_init.asm:23 JSL MEMCPY16
    // Overlapping static entry reached from 0xC0B56C.
    case 0xC0B56E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x00D922, 3); return true;
    // src/system/file_select_init.asm:24 JSL UNKNOWN_C200D9
    case 0xC0B56F: cpu.execute_instruction<0x22>(0xC200D9, 4); return true;
    // src/system/file_select_init.asm:24 JSL UNKNOWN_C200D9
    // Overlapping static entry reached from 0xC0B56E.
    case 0xC0B570: cpu.execute_instruction<0xD9>(0x00C200, 3); return true;
    // src/system/file_select_init.asm:24 JSL UNKNOWN_C200D9
    // Overlapping static entry reached from 0xC0B56E.
    case 0xC0B571: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/file_select_init.asm:25 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0B573: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/file_select_init.asm:25 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC0B573.
    case 0xC0B575: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/file_select_init.asm:25 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0B576: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/file_select_init.asm:25 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0B578: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/file_select_init.asm:25 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC0B578.
    case 0xC0B57A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/file_select_init.asm:25 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0B57B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/file_select_init.asm:26 LDA #0
    case 0xC0B57D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/file_select_init.asm:26 LDA #0
    // Overlapping static entry reached from 0xC0B57D.
    case 0xC0B57F: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/system/file_select_init.asm:27 STA [@VIRTUAL06]
    case 0xC0B580: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    case 0xC0B582: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    case 0xC0B584: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    case 0xC0B586: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    case 0xC0B588: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    case 0xC0B58A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    // Overlapping static entry reached from 0xC0B58A.
    case 0xC0B58C: cpu.execute_instruction<0x7C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    case 0xC0B58D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    // Overlapping static entry reached from 0xC0B58D.
    case 0xC0B58F: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    case 0xC0B590: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    case 0xC0B592: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    case 0xC0B594: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    // Overlapping static entry reached from 0xC0B592.
    case 0xC0B595: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    // Overlapping static entry reached from 0xC0B595.
    case 0xC0B597: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/file_select_init.asm:30 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC0B598: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/file_select_init.asm:30 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC0B597.
    case 0xC0B599: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/file_select_init.asm:30 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC0B598.
    case 0xC0B59A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/file_select_init.asm:30 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC0B59B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/file_select_init.asm:30 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC0B59D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/file_select_init.asm:30 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC0B59D.
    case 0xC0B59F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/file_select_init.asm:30 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC0B5A0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/file_select_init.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0B5A2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/file_select_init.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0B5A4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/file_select_init.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0B5A6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/file_select_init.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0B5A8: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/file_select_init.asm:32 JSL DECOMP
    case 0xC0B5AA: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/file_select_init.asm:37 LOADPTR BUFFER + $2000, @LOCAL00
    case 0xC0B5AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/file_select_init.asm:37 LOADPTR BUFFER + $2000, @LOCAL00
    // Overlapping static entry reached from 0xC0B5AE.
    case 0xC0B5B0: cpu.execute_instruction<0x20>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/file_select_init.asm:37 LOADPTR BUFFER + $2000, @LOCAL00
    case 0xC0B5B1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/file_select_init.asm:37 LOADPTR BUFFER + $2000, @LOCAL00
    case 0xC0B5B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/file_select_init.asm:37 LOADPTR BUFFER + $2000, @LOCAL00
    // Overlapping static entry reached from 0xC0B5B3.
    case 0xC0B5B5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/file_select_init.asm:37 LOADPTR BUFFER + $2000, @LOCAL00
    case 0xC0B5B6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/file_select_init.asm:38 LOADPTR BUFFER + $1000, @LOCAL01
    case 0xC0B5B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/file_select_init.asm:38 LOADPTR BUFFER + $1000, @LOCAL01
    // Overlapping static entry reached from 0xC0B5B8.
    case 0xC0B5BA: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/file_select_init.asm:38 LOADPTR BUFFER + $1000, @LOCAL01
    case 0xC0B5BB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/file_select_init.asm:38 LOADPTR BUFFER + $1000, @LOCAL01
    // Overlapping static entry reached from 0xC0B5BA.
    case 0xC0B5BC: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/file_select_init.asm:38 LOADPTR BUFFER + $1000, @LOCAL01
    case 0xC0B5BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/file_select_init.asm:38 LOADPTR BUFFER + $1000, @LOCAL01
    // Overlapping static entry reached from 0xC0B5BC.
    case 0xC0B5BE: cpu.execute_instruction<0x7F>(0x148500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/file_select_init.asm:38 LOADPTR BUFFER + $1000, @LOCAL01
    // Overlapping static entry reached from 0xC0B5BD.
    case 0xC0B5BF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/file_select_init.asm:38 LOADPTR BUFFER + $1000, @LOCAL01
    case 0xC0B5C0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/file_select_init.asm:39 LDA #$2A00
    case 0xC0B5C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002A00, 3); return true;
    // src/system/file_select_init.asm:39 LDA #$2A00
    // Overlapping static entry reached from 0xC0B5C2.
    case 0xC0B5C4: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/system/file_select_init.asm:40 JSL MEMCPY24
    case 0xC0B5C5: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/system/file_select_init.asm:41 LDA #1
    case 0xC0B5C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/file_select_init.asm:41 LDA #1
    // Overlapping static entry reached from 0xC0B5C9.
    case 0xC0B5CB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/file_select_init.asm:42 JSL UNKNOWN_C44963
    case 0xC0B5CC: cpu.execute_instruction<0x22>(0xC44963, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/file_select_init.asm:45 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @LOCAL00
    case 0xC0B5D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x001FC8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/file_select_init.asm:45 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC0B5D0.
    case 0xC0B5D2: cpu.execute_instruction<0x1F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/file_select_init.asm:45 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @LOCAL00
    case 0xC0B5D3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/file_select_init.asm:45 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @LOCAL00
    case 0xC0B5D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/file_select_init.asm:45 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC0B5D2.
    case 0xC0B5D6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/file_select_init.asm:45 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC0B5D5.
    case 0xC0B5D7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/file_select_init.asm:45 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @LOCAL00
    case 0xC0B5D8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/file_select_init.asm:45 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC0B5D6.
    case 0xC0B5D9: cpu.execute_instruction<0x10>(0x0000A2, 2); return true;
    // src/system/file_select_init.asm:46 LDX #BPP4PALETTE_SIZE * 2
    case 0xC0B5DA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // src/system/file_select_init.asm:46 LDX #BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC0B5D9.
    case 0xC0B5DB: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/system/file_select_init.asm:46 LDX #BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC0B5DA.
    case 0xC0B5DC: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/system/file_select_init.asm:47 LDA #.LOWORD(PALETTES)
    case 0xC0B5DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/system/file_select_init.asm:47 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0B5DD.
    case 0xC0B5DF: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/system/file_select_init.asm:48 JSL MEMCPY16
    case 0xC0B5E0: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/system/file_select_init.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B5E4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/file_select_init.asm:50 LDA #PALETTE_UPLOAD::FULL
    case 0xC0B5E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/system/file_select_init.asm:51 STA PALETTE_UPLOAD_MODE
    case 0xC0B5E8: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/system/file_select_init.asm:51 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0B5E6.
    case 0xC0B5E9: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/system/file_select_init.asm:52 LDX #0
    case 0xC0B5EB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/file_select_init.asm:52 LDX #0
    // Overlapping static entry reached from 0xC0B5EB.
    case 0xC0B5ED: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/system/file_select_init.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC0B5EE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/file_select_init.asm:54 LDA #BATTLEBG_LAYER::FILE_SELECT
    case 0xC0B5F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E6, 2); else cpu.execute_instruction<0xA9>(0x0000E6, 3); return true;
    // src/system/file_select_init.asm:54 LDA #BATTLEBG_LAYER::FILE_SELECT
    // Overlapping static entry reached from 0xC0B5F0.
    case 0xC0B5F2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/file_select_init.asm:55 JSL LOAD_BACKGROUND_ANIMATION
    case 0xC0B5F3: cpu.execute_instruction<0x22>(0xC47370, 4); return true;
    // src/system/file_select_init.asm:56 LDA #23
    case 0xC0B5F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/system/file_select_init.asm:56 LDA #23
    // Overlapping static entry reached from 0xC0B5F7.
    case 0xC0B5F9: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/file_select_init.asm:57 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC0B5FA: cpu.execute_instruction<0x8D>(0x000A4C, 3); return true;
    // src/system/file_select_init.asm:58 LDA #24
    case 0xC0B5FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/system/file_select_init.asm:58 LDA #24
    // Overlapping static entry reached from 0xC0B5FD.
    case 0xC0B5FF: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/file_select_init.asm:59 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC0B600: cpu.execute_instruction<0x8D>(0x000A4E, 3); return true;
    // src/system/file_select_init.asm:60 LDY #0
    case 0xC0B603: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/file_select_init.asm:60 LDY #0
    // Overlapping static entry reached from 0xC0B603.
    case 0xC0B605: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/system/file_select_init.asm:61 TYX
    case 0xC0B606: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/system/file_select_init.asm:62 LDA #EVENT_SCRIPT::EVENT_787
    case 0xC0B607: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x000313, 3); return true;
    // src/system/file_select_init.asm:62 LDA #EVENT_SCRIPT::EVENT_787
    // Overlapping static entry reached from 0xC0B607.
    case 0xC0B609: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/system/file_select_init.asm:63 JSL INIT_ENTITY
    case 0xC0B60A: cpu.execute_instruction<0x22>(0xC09321, 4); return true;
    // src/system/file_select_init.asm:63 JSL INIT_ENTITY
    // Overlapping static entry reached from 0xC0B609.
    case 0xC0B60B: cpu.execute_instruction<0x21>(0x000093, 2); return true;
    // src/system/file_select_init.asm:63 JSL INIT_ENTITY
    // Overlapping static entry reached from 0xC0B60B.
    case 0xC0B60D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/system/file_select_init.asm:64 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B60E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/file_select_init.asm:64 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0B60D.
    case 0xC0B60F: cpu.execute_instruction<0x20>(0x0016A9, 3); return true;
    // src/system/file_select_init.asm:65 LDA #$16
    case 0xC0B610: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000016, 2); else cpu.execute_instruction<0xA9>(0x008D16, 3); return true;
    // src/system/file_select_init.asm:66 STA TM_MIRROR
    case 0xC0B612: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/system/file_select_init.asm:66 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0B610.
    case 0xC0B613: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/file_select_init.asm:66 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0B613.
    case 0xC0B614: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/system/file_select_init.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC0B615: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/file_select_init.asm:68 STZ BG2_Y_POS
    case 0xC0B617: cpu.execute_instruction<0x9C>(0x000037, 3); return true;
    // src/system/file_select_init.asm:69 STZ BG1_Y_POS
    case 0xC0B61A: cpu.execute_instruction<0x9C>(0x000033, 3); return true;
    // src/system/file_select_init.asm:70 STZ BG2_X_POS
    case 0xC0B61D: cpu.execute_instruction<0x9C>(0x000035, 3); return true;
    // src/system/file_select_init.asm:71 STZ BG1_X_POS
    case 0xC0B620: cpu.execute_instruction<0x9C>(0x000031, 3); return true;
    // src/system/file_select_init.asm:72 JSL OAM_CLEAR
    case 0xC0B623: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/system/file_select_init.asm:73 JSL UPDATE_SCREEN
    case 0xC0B627: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/system/file_select_init.asm:74 LDX #1
    case 0xC0B62B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/system/file_select_init.asm:74 LDX #1
    // Overlapping static entry reached from 0xC0B62B.
    case 0xC0B62D: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/system/file_select_init.asm:75 TXA
    case 0xC0B62E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/file_select_init.asm:76 JSL FADE_IN
    case 0xC0B62F: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/system/file_select_init.asm:77 JSL UNKNOWN_C1FF6B
    case 0xC0B633: cpu.execute_instruction<0x22>(0xC1FF6B, 4); return true;
    // src/system/file_select_init.asm:78 LDY #0
    case 0xC0B637: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/file_select_init.asm:78 LDY #0
    // Overlapping static entry reached from 0xC0B637.
    case 0xC0B639: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/system/file_select_init.asm:79 LDX #1
    case 0xC0B63A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/system/file_select_init.asm:79 LDX #1
    // Overlapping static entry reached from 0xC0B63A.
    case 0xC0B63C: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/system/file_select_init.asm:80 TXA
    case 0xC0B63D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/file_select_init.asm:81 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0B63E: cpu.execute_instruction<0x22>(0xC08814, 4); return true;
    // src/system/file_select_init.asm:82 LDA #$17
    case 0xC0B642: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/system/file_select_init.asm:82 LDA #$17
    // Overlapping static entry reached from 0xC0B642.
    case 0xC0B644: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/file_select_init.asm:83 JSL UNKNOWN_C09C35
    case 0xC0B645: cpu.execute_instruction<0x22>(0xC09C35, 4); return true;
    // src/system/file_select_init.asm:84 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B649: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/file_select_init.asm:85 LDA #$17
    case 0xC0B64B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/system/file_select_init.asm:86 STA TM_MIRROR
    case 0xC0B64D: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/system/file_select_init.asm:86 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0B64B.
    case 0xC0B64E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/file_select_init.asm:86 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0B64E.
    case 0xC0B64F: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/system/file_select_init.asm:87 REP #PROC_FLAGS::ACCUM8
    case 0xC0B650: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/file_select_init.asm:88 LDA GAME_STATE+game_state::sound_setting
    case 0xC0B652: cpu.execute_instruction<0xAD>(0x0098B7, 3); return true;
    // src/system/file_select_init.asm:89 AND #$00FF
    case 0xC0B655: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/file_select_init.asm:89 AND #$00FF
    // Overlapping static entry reached from 0xC0B655.
    case 0xC0B657: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/system/file_select_init.asm:90 DEC
    case 0xC0B658: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/system/file_select_init.asm:91 JSL SET_AUDIO_CHANNELS
    case 0xC0B659: cpu.execute_instruction<0x22>(0xC4FD18, 4); return true;
    // src/system/file_select_init.asm:92 PLD
    case 0xC0B65D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/file_select_init.asm:93 RTS
    case 0xC0B65E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/game_init.asm (source_named).
bool execute_system_game_init_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/game_init.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0B99A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/system/game_init.asm:4 JSL CHECK_SRAM_INTEGRITY
    case 0xC0B99C: cpu.execute_instruction<0x22>(0xEF0B9E, 4); return true;
    // src/system/game_init.asm:5 JSL INITIALIZE_MUSIC_SUBSYSTEM
    case 0xC0B9A0: cpu.execute_instruction<0x22>(0xC4FB58, 4); return true;
    // src/system/game_init.asm:6 JSL ENABLE_NMI_JOYPAD
    case 0xC0B9A4: cpu.execute_instruction<0x22>(0xC08715, 4); return true;
    // src/system/game_init.asm:7 JSL CHECK_HARDWARE
    case 0xC0B9A8: cpu.execute_instruction<0x22>(0xC0A11C, 4); return true;
    // src/system/game_init.asm:8 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0B9AC: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/system/game_init.asm:9 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0B9B0: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/system/game_init.asm:20 STZ DEBUG
    case 0xC0B9B4: cpu.execute_instruction<0x9C>(0x00436C, 3); return true;
    // src/system/game_init.asm:21 JSL MAIN_LOOP
    case 0xC0B9B7: cpu.execute_instruction<0x22>(0xC0B7D8, 4); return true;
    // src/system/game_init.asm:23 RTS
    case 0xC0B9BB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/get_colour_average.asm (source_named).
bool execute_system_get_colour_average_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/get_colour_average.asm:3 BEGIN_C_FUNCTION
    case 0xC00391: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/get_colour_average.asm:12 END_STACK_VARS
    case 0xC00393: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/get_colour_average.asm:12 END_STACK_VARS
    case 0xC00394: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/get_colour_average.asm:12 END_STACK_VARS
    case 0xC00395: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/get_colour_average.asm:12 END_STACK_VARS
    case 0xC00396: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/get_colour_average.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC00396.
    case 0xC00398: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/get_colour_average.asm:12 END_STACK_VARS
    case 0xC00399: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/get_colour_average.asm:12 END_STACK_VARS
    case 0xC0039A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:13 STA @LOCAL05
    case 0xC0039B: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/system/get_colour_average.asm:13 STA @LOCAL05
    // Overlapping static entry reached from 0xC00398.
    case 0xC0039C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:14 STZ @LOCAL04
    case 0xC0039D: cpu.execute_instruction<0x64>(0x000016, 2); return true;
    // src/system/get_colour_average.asm:15 STZ @LOCAL03
    case 0xC0039F: cpu.execute_instruction<0x64>(0x000014, 2); return true;
    // src/system/get_colour_average.asm:16 LDA #0
    case 0xC003A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/get_colour_average.asm:16 LDA #0
    // Overlapping static entry reached from 0xC003A1.
    case 0xC003A3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/get_colour_average.asm:17 STA @VIRTUAL04
    case 0xC003A4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/get_colour_average.asm:18 TAY
    case 0xC003A6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:19 STY @LOCAL02
    case 0xC003A7: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/system/get_colour_average.asm:20 LDA @LOCAL05
    case 0xC003A9: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/system/get_colour_average.asm:21 DEC
    case 0xC003AB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:22 DEC
    case 0xC003AC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:23 STA @VIRTUAL02
    case 0xC003AD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/get_colour_average.asm:24 STA @LOCAL01
    case 0xC003AF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/get_colour_average.asm:25 LDX #0
    case 0xC003B1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/get_colour_average.asm:25 LDX #0
    // Overlapping static entry reached from 0xC003B1.
    case 0xC003B3: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/system/get_colour_average.asm:26 STX @LOCAL00
    case 0xC003B4: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/get_colour_average.asm:27 BRA @UNKNOWN2
    case 0xC003B6: cpu.execute_instruction<0x80>(0x00004D, 2); return true;
    // src/system/get_colour_average.asm:29 LDA @LOCAL01
    case 0xC003B8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/system/get_colour_average.asm:30 STA @VIRTUAL02
    case 0xC003BA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/get_colour_average.asm:31 INC @VIRTUAL02
    case 0xC003BC: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/system/get_colour_average.asm:32 INC @VIRTUAL02
    case 0xC003BE: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/system/get_colour_average.asm:33 LDA @VIRTUAL02
    case 0xC003C0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/get_colour_average.asm:34 STA @LOCAL01
    case 0xC003C2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/get_colour_average.asm:35 LDX @VIRTUAL02
    case 0xC003C4: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/get_colour_average.asm:36 LDA __BSS_START__,X
    case 0xC003C6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/get_colour_average.asm:37 STA @LOCAL05
    case 0xC003C9: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/system/get_colour_average.asm:38 AND #$7FFF
    case 0xC003CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/system/get_colour_average.asm:38 AND #$7FFF
    // Overlapping static entry reached from 0xC003CB.
    case 0xC003CD: cpu.execute_instruction<0x7F>(0xA530F0, 4); return true;
    // src/system/get_colour_average.asm:39 BEQ @UNKNOWN1
    case 0xC003CE: cpu.execute_instruction<0xF0>(0x000030, 2); return true;
    // src/system/get_colour_average.asm:40 LDA @LOCAL05
    case 0xC003D0: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/system/get_colour_average.asm:40 LDA @LOCAL05
    // Overlapping static entry reached from 0xC003CD.
    case 0xC003D1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:41 AND #BGR555::RED
    case 0xC003D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/system/get_colour_average.asm:41 AND #BGR555::RED
    // Overlapping static entry reached from 0xC003D2.
    case 0xC003D4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/get_colour_average.asm:42 STA @VIRTUAL02
    case 0xC003D5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/get_colour_average.asm:43 LDA @VIRTUAL04
    case 0xC003D7: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/system/get_colour_average.asm:44 CLC
    case 0xC003D9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:45 ADC @VIRTUAL02
    case 0xC003DA: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/system/get_colour_average.asm:46 STA @VIRTUAL04
    case 0xC003DC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/get_colour_average.asm:47 LDA @LOCAL05
    case 0xC003DE: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/system/get_colour_average.asm:48 AND #BGR555::GREEN
    case 0xC003E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x0003E0, 3); return true;
    // src/system/get_colour_average.asm:48 AND #BGR555::GREEN
    // Overlapping static entry reached from 0xC003E0.
    case 0xC003E2: cpu.execute_instruction<0x03>(0x00004A, 2); return true;
    // src/system/get_colour_average.asm:49 LSR
    case 0xC003E3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:50 LSR
    case 0xC003E4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:51 LSR
    case 0xC003E5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:52 LSR
    case 0xC003E6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:53 LSR
    case 0xC003E7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:54 CLC
    case 0xC003E8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:55 ADC @LOCAL03
    case 0xC003E9: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/system/get_colour_average.asm:56 STA @LOCAL03
    case 0xC003EB: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/get_colour_average.asm:57 LDA @LOCAL05
    case 0xC003ED: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/system/get_colour_average.asm:58 AND #BGR555::BLUE
    case 0xC003EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x007C00, 3); return true;
    // src/system/get_colour_average.asm:58 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC003EF.
    case 0xC003F1: cpu.execute_instruction<0x7C>(0x0029EB, 3); return true;
    // src/system/get_colour_average.asm:59 XBA
    case 0xC003F2: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:60 AND #$00FF
    case 0xC003F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/get_colour_average.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC003F3.
    case 0xC003F5: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/system/get_colour_average.asm:61 LSR
    case 0xC003F6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:62 LSR
    case 0xC003F7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:63 CLC
    case 0xC003F8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:64 ADC @LOCAL04
    case 0xC003F9: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/system/get_colour_average.asm:65 STA @LOCAL04
    case 0xC003FB: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/system/get_colour_average.asm:66 INY
    case 0xC003FD: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:67 STY @LOCAL02
    case 0xC003FE: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/system/get_colour_average.asm:69 LDX @LOCAL00
    case 0xC00400: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/get_colour_average.asm:70 INX
    case 0xC00402: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:71 STX @LOCAL00
    case 0xC00403: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/get_colour_average.asm:73 CPX #96
    case 0xC00405: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000060, 2); else cpu.execute_instruction<0xE0>(0x000060, 3); return true;
    // src/system/get_colour_average.asm:73 CPX #96
    // Overlapping static entry reached from 0xC00405.
    case 0xC00407: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/get_colour_average.asm:74 BCC @UNKNOWN0
    case 0xC00408: cpu.execute_instruction<0x90>(0x0000AE, 2); return true;
    // src/system/get_colour_average.asm:75 LDA @VIRTUAL04
    case 0xC0040A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/system/get_colour_average.asm:76 ASL
    case 0xC0040C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:77 ASL
    case 0xC0040D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:78 ASL
    case 0xC0040E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:79 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC0040F: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/system/get_colour_average.asm:80 STA COLOUR_AVERAGE_RED
    case 0xC00413: cpu.execute_instruction<0x8D>(0x0043D0, 3); return true;
    // src/system/get_colour_average.asm:81 LDY @LOCAL02
    case 0xC00416: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/system/get_colour_average.asm:82 LDA @LOCAL03
    case 0xC00418: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/system/get_colour_average.asm:83 ASL
    case 0xC0041A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:84 ASL
    case 0xC0041B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:85 ASL
    case 0xC0041C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:86 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC0041D: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/system/get_colour_average.asm:87 STA COLOUR_AVERAGE_GREEN
    case 0xC00421: cpu.execute_instruction<0x8D>(0x0043D2, 3); return true;
    // src/system/get_colour_average.asm:88 LDY @LOCAL02
    case 0xC00424: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/system/get_colour_average.asm:89 LDA @LOCAL04
    case 0xC00426: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/system/get_colour_average.asm:90 ASL
    case 0xC00428: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:91 ASL
    case 0xC00429: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:92 ASL
    case 0xC0042A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:93 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC0042B: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/system/get_colour_average.asm:94 STA COLOUR_AVERAGE_BLUE
    case 0xC0042F: cpu.execute_instruction<0x8D>(0x0043D4, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/get_colour_average.asm:95 END_C_FUNCTION
    case 0xC00432: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/get_colour_average.asm:95 END_C_FUNCTION
    case 0xC00433: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/get_colour_fade_slope.asm (source_named).
bool execute_system_get_colour_fade_slope_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/get_colour_fade_slope.asm:3 BEGIN_C_FUNCTION
    case 0xC491EE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/get_colour_fade_slope.asm:9 END_STACK_VARS
    case 0xC491F0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/get_colour_fade_slope.asm:9 END_STACK_VARS
    case 0xC491F1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/get_colour_fade_slope.asm:9 END_STACK_VARS
    case 0xC491F2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/get_colour_fade_slope.asm:9 END_STACK_VARS
    case 0xC491F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/get_colour_fade_slope.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC491F3.
    case 0xC491F5: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/get_colour_fade_slope.asm:9 END_STACK_VARS
    case 0xC491F6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/get_colour_fade_slope.asm:9 END_STACK_VARS
    case 0xC491F7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/get_colour_fade_slope.asm:10 STA @VIRTUAL02
    case 0xC491F8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/get_colour_fade_slope.asm:10 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC491F5.
    case 0xC491F9: cpu.execute_instruction<0x02>(0x00008A, 2); return true;
    // src/system/get_colour_fade_slope.asm:11 TXA
    case 0xC491FA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/get_colour_fade_slope.asm:12 SEC
    case 0xC491FB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/get_colour_fade_slope.asm:13 SBC @VIRTUAL02
    case 0xC491FC: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/system/get_colour_fade_slope.asm:14 XBA
    case 0xC491FE: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/get_colour_fade_slope.asm:15 AND #$FF00
    case 0xC491FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/system/get_colour_fade_slope.asm:15 AND #$FF00
    // Overlapping static entry reached from 0xC491FF.
    case 0xC49201: cpu.execute_instruction<0xFF>(0x90E622, 4); return true;
    // src/system/get_colour_fade_slope.asm:16 JSL DIVISION16
    case 0xC49202: cpu.execute_instruction<0x22>(0xC090E6, 4); return true;
    // src/system/get_colour_fade_slope.asm:16 JSL DIVISION16
    // Overlapping static entry reached from 0xC49201.
    case 0xC49205: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x00602B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/get_colour_fade_slope.asm:17 END_C_FUNCTION
    case 0xC49206: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/get_colour_fade_slope.asm:17 END_C_FUNCTION
    case 0xC49207: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/irq_nmi.asm (source_named).
bool execute_system_irq_nmi_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/irq_nmi.asm:3 PHP
    case 0xC0814F: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08150: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/irq_nmi.asm:5 PHA
    case 0xC08152: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:6 PHX
    case 0xC08153: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:7 PHY
    case 0xC08154: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:8 PHD
    case 0xC08155: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:9 PEA __BSS_START__
    case 0xC08156: cpu.execute_instruction<0xF4>(0x000000, 3); return true;
    // src/system/irq_nmi.asm:10 PLD
    case 0xC08159: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:11 PHB
    case 0xC0815A: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:12 PEA __BSS_START__
    case 0xC0815B: cpu.execute_instruction<0xF4>(0x000000, 3); return true;
    // src/system/irq_nmi.asm:13 PLB
    case 0xC0815E: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:14 PLB
    case 0xC0815F: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC08160: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/irq_nmi.asm:16 LDA TIMEUP
    case 0xC08162: cpu.execute_instruction<0xAD>(0x004211, 3); return true;
    // src/system/irq_nmi.asm:17 BMI IRQ_ENABLED
    case 0xC08165: cpu.execute_instruction<0x30>(0x00001C, 2); return true;
    // src/system/irq_nmi.asm:18 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08167: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/irq_nmi.asm:19 PLB
    case 0xC08169: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:20 PLD
    case 0xC0816A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:21 PLY
    case 0xC0816B: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:22 PLX
    case 0xC0816C: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:23 PLA
    case 0xC0816D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:24 PLP
    case 0xC0816E: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:25 RTI
    case 0xC0816F: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:27 PHP
    case 0xC08170: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:28 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08171: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/irq_nmi.asm:29 PHA
    case 0xC08173: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:30 PHX
    case 0xC08174: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:31 PHY
    case 0xC08175: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:32 PHD
    case 0xC08176: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:33 PEA __BSS_START__
    case 0xC08177: cpu.execute_instruction<0xF4>(0x000000, 3); return true;
    // src/system/irq_nmi.asm:34 PLD
    case 0xC0817A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:35 PHB
    case 0xC0817B: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:36 PEA __BSS_START__
    case 0xC0817C: cpu.execute_instruction<0xF4>(0x000000, 3); return true;
    // src/system/irq_nmi.asm:37 PLB
    case 0xC0817F: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:38 PLB
    case 0xC08180: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC08181: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/irq_nmi.asm:41 LDA RDNMI
    case 0xC08183: cpu.execute_instruction<0xAD>(0x004210, 3); return true;
    // src/system/irq_nmi.asm:42 STZ HDMAEN
    case 0xC08186: cpu.execute_instruction<0x9C>(0x00420C, 3); return true;
    // src/system/irq_nmi.asm:43 LDA #$0080
    case 0xC08189: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008D80, 3); return true;
    // src/system/irq_nmi.asm:44 STA INIDISP
    case 0xC0818B: cpu.execute_instruction<0x8D>(0x002100, 3); return true;
    // src/system/irq_nmi.asm:44 STA INIDISP
    // Overlapping static entry reached from 0xC08189.
    case 0xC0818C: cpu.execute_instruction<0x00>(0x000021, 2); return true;
    // src/system/irq_nmi.asm:45 INC <NEW_FRAME_STARTED + 0
    case 0xC0818E: cpu.execute_instruction<0xE6>(0x00002B, 2); return true;
    // src/system/irq_nmi.asm:46 INC <FRAME_COUNTER + 0
    case 0xC08190: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/system/irq_nmi.asm:47 REP #PROC_FLAGS::ACCUM8
    case 0xC08192: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/irq_nmi.asm:48 SEP #PROC_FLAGS::INDEX8
    case 0xC08194: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/system/irq_nmi.asm:49 LDX <NEXT_FRAME_DISPLAY_ID + 0
    case 0xC08196: cpu.execute_instruction<0xA6>(0x00002C, 2); return true;
    // src/system/irq_nmi.asm:50 BEQ @UNKNOWN2
    case 0xC08198: cpu.execute_instruction<0xF0>(0x00002E, 2); return true;
    // src/system/irq_nmi.asm:52 LDY #$0000
    case 0xC0819A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x009C00, 3); return true;
    // src/system/irq_nmi.asm:53 STZ OAMADDL
    case 0xC0819C: cpu.execute_instruction<0x9C>(0x002102, 3); return true;
    // src/system/irq_nmi.asm:53 STZ OAMADDL
    // Overlapping static entry reached from 0xC0819A.
    case 0xC0819D: cpu.execute_instruction<0x02>(0x000021, 2); return true;
    // src/system/irq_nmi.asm:54 STY DMAP0
    case 0xC0819F: cpu.execute_instruction<0x8C>(0x004300, 3); return true;
    // src/system/irq_nmi.asm:55 STY A1B0
    case 0xC081A2: cpu.execute_instruction<0x8C>(0x004304, 3); return true;
    // src/system/irq_nmi.asm:56 LDY #$0004
    case 0xC081A5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x008C04, 3); return true;
    // src/system/irq_nmi.asm:57 STY BBAD0
    case 0xC081A7: cpu.execute_instruction<0x8C>(0x004301, 3); return true;
    // src/system/irq_nmi.asm:57 STY BBAD0
    // Overlapping static entry reached from 0xC081A5.
    case 0xC081A8: cpu.execute_instruction<0x01>(0x000043, 2); return true;
    // src/system/irq_nmi.asm:58 LDA #.LOWORD(OAM1)
    case 0xC081AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000500, 3); return true;
    // src/system/irq_nmi.asm:58 LDA #.LOWORD(OAM1)
    // Overlapping static entry reached from 0xC081AA.
    case 0xC081AC: cpu.execute_instruction<0x05>(0x0000A6, 2); return true;
    // src/system/irq_nmi.asm:59 LDX <NEXT_FRAME_DISPLAY_ID + 0
    case 0xC081AD: cpu.execute_instruction<0xA6>(0x00002C, 2); return true;
    // src/system/irq_nmi.asm:59 LDX <NEXT_FRAME_DISPLAY_ID + 0
    // Overlapping static entry reached from 0xC081AC.
    case 0xC081AE: cpu.execute_instruction<0x2C>(0x00F0CA, 3); return true;
    // src/system/irq_nmi.asm:60 DEX
    case 0xC081AF: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:61 BEQ @UNKNOWN1
    case 0xC081B0: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/system/irq_nmi.asm:61 BEQ @UNKNOWN1
    // Overlapping static entry reached from 0xC081AE.
    case 0xC081B1: cpu.execute_instruction<0x03>(0x0000A9, 2); return true;
    // src/system/irq_nmi.asm:62 LDA #.LOWORD(OAM2)
    case 0xC081B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000800, 3); return true;
    // src/system/irq_nmi.asm:62 LDA #.LOWORD(OAM2)
    // Overlapping static entry reached from 0xC081B1.
    case 0xC081B3: cpu.execute_instruction<0x00>(0x000008, 2); return true;
    // src/system/irq_nmi.asm:62 LDA #.LOWORD(OAM2)
    // Overlapping static entry reached from 0xC081B2.
    case 0xC081B4: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:64 STA A1T0L
    case 0xC081B5: cpu.execute_instruction<0x8D>(0x004302, 3); return true;
    // src/system/irq_nmi.asm:65 LDA #$0220
    case 0xC081B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000220, 3); return true;
    // src/system/irq_nmi.asm:65 LDA #$0220
    // Overlapping static entry reached from 0xC081B8.
    case 0xC081BA: cpu.execute_instruction<0x02>(0x00008D, 2); return true;
    // src/system/irq_nmi.asm:66 STA DAS0L
    case 0xC081BB: cpu.execute_instruction<0x8D>(0x004305, 3); return true;
    // src/system/irq_nmi.asm:67 LDY #DMA_CHANNELS::CHANNEL_0
    case 0xC081BE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x008C01, 3); return true;
    // src/system/irq_nmi.asm:68 STY MDMAEN
    case 0xC081C0: cpu.execute_instruction<0x8C>(0x00420B, 3); return true;
    // src/system/irq_nmi.asm:68 STY MDMAEN
    // Overlapping static entry reached from 0xC081BE.
    case 0xC081C1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:68 STY MDMAEN
    // Overlapping static entry reached from 0xC081C1.
    case 0xC081C2: cpu.execute_instruction<0x42>(0x000018, 2); return true;
    // src/system/irq_nmi.asm:69 CLC
    case 0xC081C3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:70 ADC <DMA_BYTES_COPIED + 0
    case 0xC081C4: cpu.execute_instruction<0x65>(0x000099, 2); return true;
    // src/system/irq_nmi.asm:71 STA <DMA_BYTES_COPIED + 0
    case 0xC081C6: cpu.execute_instruction<0x85>(0x000099, 2); return true;
    // src/system/irq_nmi.asm:73 LDX PALETTE_UPLOAD_MODE
    case 0xC081C8: cpu.execute_instruction<0xAE>(0x000030, 3); return true;
    // src/system/irq_nmi.asm:74 BEQ @UNKNOWN3
    case 0xC081CB: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/system/irq_nmi.asm:75 LDA PALETTE_DMA_PARAMETERS - 4,X
    case 0xC081CD: cpu.execute_instruction<0xBD>(0x008F94, 3); return true;
    // src/system/irq_nmi.asm:76 STA A1T0L
    case 0xC081D0: cpu.execute_instruction<0x8D>(0x004302, 3); return true;
    // src/system/irq_nmi.asm:77 LDY PALETTE_DMA_PARAMETERS - 2,X
    case 0xC081D3: cpu.execute_instruction<0xBC>(0x008F96, 3); return true;
    // src/system/irq_nmi.asm:78 STY CGADD
    case 0xC081D6: cpu.execute_instruction<0x8C>(0x002121, 3); return true;
    // src/system/irq_nmi.asm:79 LDA #$2200
    case 0xC081D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/irq_nmi.asm:79 LDA #$2200
    // Overlapping static entry reached from 0xC081D9.
    case 0xC081DB: cpu.execute_instruction<0x22>(0x43008D, 4); return true;
    // src/system/irq_nmi.asm:80 STA DMAP0
    case 0xC081DC: cpu.execute_instruction<0x8D>(0x004300, 3); return true;
    // src/system/irq_nmi.asm:81 LDY #$0000
    case 0xC081DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x008C00, 3); return true;
    // src/system/irq_nmi.asm:82 STY A1B0
    case 0xC081E1: cpu.execute_instruction<0x8C>(0x004304, 3); return true;
    // src/system/irq_nmi.asm:82 STY A1B0
    // Overlapping static entry reached from 0xC081DF.
    case 0xC081E2: cpu.execute_instruction<0x04>(0x000043, 2); return true;
    // src/system/irq_nmi.asm:83 STY PALETTE_UPLOAD_MODE
    case 0xC081E4: cpu.execute_instruction<0x8C>(0x000030, 3); return true;
    // src/system/irq_nmi.asm:84 LDA PALETTE_DMA_PARAMETERS - 6,X
    case 0xC081E7: cpu.execute_instruction<0xBD>(0x008F92, 3); return true;
    // src/system/irq_nmi.asm:85 STA DAS0L
    case 0xC081EA: cpu.execute_instruction<0x8D>(0x004305, 3); return true;
    // src/system/irq_nmi.asm:86 LDY #DMA_CHANNELS::CHANNEL_0
    case 0xC081ED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x008C01, 3); return true;
    // src/system/irq_nmi.asm:87 STY MDMAEN
    case 0xC081EF: cpu.execute_instruction<0x8C>(0x00420B, 3); return true;
    // src/system/irq_nmi.asm:87 STY MDMAEN
    // Overlapping static entry reached from 0xC081ED.
    case 0xC081F0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:87 STY MDMAEN
    // Overlapping static entry reached from 0xC081F0.
    case 0xC081F1: cpu.execute_instruction<0x42>(0x000018, 2); return true;
    // src/system/irq_nmi.asm:88 CLC
    case 0xC081F2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:89 ADC <DMA_BYTES_COPIED + 0
    case 0xC081F3: cpu.execute_instruction<0x65>(0x000099, 2); return true;
    // src/system/irq_nmi.asm:90 STA <DMA_BYTES_COPIED + 0
    case 0xC081F5: cpu.execute_instruction<0x85>(0x000099, 2); return true;
    // src/system/irq_nmi.asm:92 SEP #PROC_FLAGS::ACCUM8
    case 0xC081F7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/irq_nmi.asm:93 LDA <FADE_PARAMETERS + fade_parameters::step
    case 0xC081F9: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/system/irq_nmi.asm:94 BEQ @UNKNOWN7
    case 0xC081FB: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/system/irq_nmi.asm:95 DEC <FADE_DELAY_FRAMES_LEFT + 0
    case 0xC081FD: cpu.execute_instruction<0xC6>(0x00002A, 2); return true;
    // src/system/irq_nmi.asm:96 BPL @UNKNOWN7
    case 0xC081FF: cpu.execute_instruction<0x10>(0x00001E, 2); return true;
    // src/system/irq_nmi.asm:97 LDA <FADE_PARAMETERS + fade_parameters::delay
    case 0xC08201: cpu.execute_instruction<0xA5>(0x000029, 2); return true;
    // src/system/irq_nmi.asm:98 STA <FADE_DELAY_FRAMES_LEFT + 0
    case 0xC08203: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/system/irq_nmi.asm:99 LDA <INIDISP_MIRROR + 0
    case 0xC08205: cpu.execute_instruction<0xA5>(0x00000D, 2); return true;
    // src/system/irq_nmi.asm:100 AND #$000F
    case 0xC08207: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00180F, 3); return true;
    // src/system/irq_nmi.asm:101 CLC
    case 0xC08209: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:102 ADC <FADE_PARAMETERS + fade_parameters::step
    case 0xC0820A: cpu.execute_instruction<0x65>(0x000028, 2); return true;
    // src/system/irq_nmi.asm:103 BPL @UNKNOWN4
    case 0xC0820C: cpu.execute_instruction<0x10>(0x000007, 2); return true;
    // src/system/irq_nmi.asm:104 STZ HDMAEN_MIRROR
    case 0xC0820E: cpu.execute_instruction<0x9C>(0x00001F, 3); return true;
    // src/system/irq_nmi.asm:105 LDA #$0080
    case 0xC08211: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008080, 3); return true;
    // src/system/irq_nmi.asm:106 BRA @UNKNOWN5
    case 0xC08213: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/system/irq_nmi.asm:106 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC08211.
    case 0xC08214: cpu.execute_instruction<0x06>(0x0000C9, 2); return true;
    // src/system/irq_nmi.asm:108 CMP #$0010
    case 0xC08215: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x009010, 3); return true;
    // src/system/irq_nmi.asm:108 CMP #$0010
    // Overlapping static entry reached from 0xC08214.
    case 0xC08216: cpu.execute_instruction<0x10>(0x000090, 2); return true;
    // src/system/irq_nmi.asm:109 BCC @UNKNOWN6
    case 0xC08217: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // src/system/irq_nmi.asm:109 BCC @UNKNOWN6
    // Overlapping static entry reached from 0xC08215.
    case 0xC08218: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/system/irq_nmi.asm:110 LDA #$000F
    case 0xC08219: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00640F, 3); return true;
    // src/system/irq_nmi.asm:110 LDA #$000F
    // Overlapping static entry reached from 0xC08218.
    case 0xC0821A: cpu.execute_instruction<0x0F>(0x852864, 4); return true;
    // src/system/irq_nmi.asm:112 STZ <FADE_PARAMETERS + fade_parameters::step
    case 0xC0821B: cpu.execute_instruction<0x64>(0x000028, 2); return true;
    // src/system/irq_nmi.asm:112 STZ <FADE_PARAMETERS + fade_parameters::step
    // Overlapping static entry reached from 0xC08219.
    case 0xC0821C: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:114 STA <INIDISP_MIRROR + 0
    case 0xC0821D: cpu.execute_instruction<0x85>(0x00000D, 2); return true;
    // src/system/irq_nmi.asm:114 STA <INIDISP_MIRROR + 0
    // Overlapping static entry reached from 0xC0821A.
    case 0xC0821E: cpu.execute_instruction<0x0D>(0x0010C2, 3); return true;
    // src/system/irq_nmi.asm:116 REP #PROC_FLAGS::INDEX8
    case 0xC0821F: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/system/irq_nmi.asm:117 LDA <INIDISP_MIRROR + 0
    case 0xC08221: cpu.execute_instruction<0xA5>(0x00000D, 2); return true;
    // src/system/irq_nmi.asm:118 STA INIDISP
    case 0xC08223: cpu.execute_instruction<0x8D>(0x002100, 3); return true;
    // src/system/irq_nmi.asm:119 LDA <MOSAIC_MIRROR + 0
    case 0xC08226: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/system/irq_nmi.asm:120 STA MOSAIC
    case 0xC08228: cpu.execute_instruction<0x8D>(0x002106, 3); return true;
    // src/system/irq_nmi.asm:121 LDY <BG12NBA_MIRROR + 0
    case 0xC0822B: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // src/system/irq_nmi.asm:122 STY BG12NBA
    case 0xC0822D: cpu.execute_instruction<0x8C>(0x00210B, 3); return true;
    // src/system/irq_nmi.asm:123 LDY <WH2_MIRROR + 0
    case 0xC08230: cpu.execute_instruction<0xA4>(0x000017, 2); return true;
    // src/system/irq_nmi.asm:124 LDY #$00FF
    case 0xC08232: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x0000FF, 3); return true;
    // src/system/irq_nmi.asm:124 LDY #$00FF
    // Overlapping static entry reached from 0xC08232.
    case 0xC08234: cpu.execute_instruction<0x00>(0x00008C, 2); return true;
    // src/system/irq_nmi.asm:125 STY WH2
    case 0xC08235: cpu.execute_instruction<0x8C>(0x002128, 3); return true;
    // src/system/irq_nmi.asm:126 REP #PROC_FLAGS::ACCUM8
    case 0xC08238: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/irq_nmi.asm:127 SEP #PROC_FLAGS::INDEX8
    case 0xC0823A: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/system/irq_nmi.asm:128 LDX <LAST_COMPLETED_DMA_INDEX + 0
    case 0xC0823C: cpu.execute_instruction<0xA6>(0x000001, 2); return true;
    // src/system/irq_nmi.asm:129 BRA @UNKNOWN9
    case 0xC0823E: cpu.execute_instruction<0x80>(0x000032, 2); return true;
    // src/system/irq_nmi.asm:131 LDY DMA_QUEUE + queued_dma::mode,X
    case 0xC08240: cpu.execute_instruction<0xBC>(0x000400, 3); return true;
    // src/system/irq_nmi.asm:132 LDA DMA_TABLE,Y
    case 0xC08243: cpu.execute_instruction<0xB9>(0x008FB0, 3); return true;
    // src/system/irq_nmi.asm:133 STA DMAP0
    case 0xC08246: cpu.execute_instruction<0x8D>(0x004300, 3); return true;
    // src/system/irq_nmi.asm:134 LDA DMA_TABLE + 2,Y
    case 0xC08249: cpu.execute_instruction<0xB9>(0x008FB2, 3); return true;
    // src/system/irq_nmi.asm:135 STA VMAIN
    case 0xC0824C: cpu.execute_instruction<0x8D>(0x002115, 3); return true;
    // src/system/irq_nmi.asm:136 LDA DMA_QUEUE + queued_dma::size,X
    case 0xC0824F: cpu.execute_instruction<0xBD>(0x000401, 3); return true;
    // src/system/irq_nmi.asm:137 STA DAS0L
    case 0xC08252: cpu.execute_instruction<0x8D>(0x004305, 3); return true;
    // src/system/irq_nmi.asm:138 LDA DMA_QUEUE + queued_dma::src,X
    case 0xC08255: cpu.execute_instruction<0xBD>(0x000403, 3); return true;
    // src/system/irq_nmi.asm:139 STA A1T0L
    case 0xC08258: cpu.execute_instruction<0x8D>(0x004302, 3); return true;
    // src/system/irq_nmi.asm:140 LDY DMA_QUEUE + queued_dma::src + 2,X
    case 0xC0825B: cpu.execute_instruction<0xBC>(0x000405, 3); return true;
    // src/system/irq_nmi.asm:141 STY A1B0
    case 0xC0825E: cpu.execute_instruction<0x8C>(0x004304, 3); return true;
    // src/system/irq_nmi.asm:142 LDA DMA_QUEUE + queued_dma::dest,X
    case 0xC08261: cpu.execute_instruction<0xBD>(0x000406, 3); return true;
    // src/system/irq_nmi.asm:143 STA VMADDL
    case 0xC08264: cpu.execute_instruction<0x8D>(0x002116, 3); return true;
    // src/system/irq_nmi.asm:144 TXA
    case 0xC08267: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:145 CLC
    case 0xC08268: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:146 ADC #.SIZEOF(queued_dma)
    case 0xC08269: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/system/irq_nmi.asm:146 ADC #.SIZEOF(queued_dma)
    // Overlapping static entry reached from 0xC08269.
    case 0xC0826B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/system/irq_nmi.asm:147 TAX
    case 0xC0826C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:148 LDY #DMA_CHANNELS::CHANNEL_0
    case 0xC0826D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x008C01, 3); return true;
    // src/system/irq_nmi.asm:149 STY MDMAEN
    case 0xC0826F: cpu.execute_instruction<0x8C>(0x00420B, 3); return true;
    // src/system/irq_nmi.asm:149 STY MDMAEN
    // Overlapping static entry reached from 0xC0826D.
    case 0xC08270: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:149 STY MDMAEN
    // Overlapping static entry reached from 0xC08270.
    case 0xC08271: cpu.execute_instruction<0x42>(0x0000E4, 2); return true;
    // src/system/irq_nmi.asm:151 CPX <DMA_QUEUE_INDEX + 0
    case 0xC08272: cpu.execute_instruction<0xE4>(0x000000, 2); return true;
    // src/system/irq_nmi.asm:151 CPX <DMA_QUEUE_INDEX + 0
    // Overlapping static entry reached from 0xC08271.
    case 0xC08273: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/system/irq_nmi.asm:152 BNE @UNKNOWN8
    case 0xC08274: cpu.execute_instruction<0xD0>(0x0000CA, 2); return true;
    // src/system/irq_nmi.asm:153 STX <LAST_COMPLETED_DMA_INDEX + 0
    case 0xC08276: cpu.execute_instruction<0x86>(0x000001, 2); return true;
    // src/system/irq_nmi.asm:154 SEP #PROC_FLAGS::ACCUM8
    case 0xC08278: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/irq_nmi.asm:155 LDA <NEXT_FRAME_DISPLAY_ID + 0
    case 0xC0827A: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/irq_nmi.asm:156 BEQL @UNKNOWN12
    case 0xC0827C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/irq_nmi.asm:156 BEQL @UNKNOWN12
    case 0xC0827E: cpu.execute_instruction<0x4C>(0x008334, 3); return true;
    // src/system/irq_nmi.asm:157 DEC
    case 0xC08281: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:158 BNE @UNKNOWN11
    case 0xC08282: cpu.execute_instruction<0xD0>(0x000052, 2); return true;
    // src/system/irq_nmi.asm:160 LDA <BG1_X_POS_BUF + 0
    case 0xC08284: cpu.execute_instruction<0xA5>(0x000041, 2); return true;
    // src/system/irq_nmi.asm:161 STA BG1HOFS
    case 0xC08286: cpu.execute_instruction<0x8D>(0x00210D, 3); return true;
    // src/system/irq_nmi.asm:162 LDA <BG1_X_POS_BUF + 1
    case 0xC08289: cpu.execute_instruction<0xA5>(0x000042, 2); return true;
    // src/system/irq_nmi.asm:163 STA BG1HOFS
    case 0xC0828B: cpu.execute_instruction<0x8D>(0x00210D, 3); return true;
    // src/system/irq_nmi.asm:164 LDA <BG1_Y_POS_BUF + 0
    case 0xC0828E: cpu.execute_instruction<0xA5>(0x000045, 2); return true;
    // src/system/irq_nmi.asm:165 STA BG1VOFS
    case 0xC08290: cpu.execute_instruction<0x8D>(0x00210E, 3); return true;
    // src/system/irq_nmi.asm:166 LDA <BG1_Y_POS_BUF + 1
    case 0xC08293: cpu.execute_instruction<0xA5>(0x000046, 2); return true;
    // src/system/irq_nmi.asm:167 STA BG1VOFS
    case 0xC08295: cpu.execute_instruction<0x8D>(0x00210E, 3); return true;
    // src/system/irq_nmi.asm:168 LDA <BG2_X_POS_BUF + 0
    case 0xC08298: cpu.execute_instruction<0xA5>(0x000049, 2); return true;
    // src/system/irq_nmi.asm:169 STA BG2HOFS
    case 0xC0829A: cpu.execute_instruction<0x8D>(0x00210F, 3); return true;
    // src/system/irq_nmi.asm:170 LDA <BG2_X_POS_BUF + 1
    case 0xC0829D: cpu.execute_instruction<0xA5>(0x00004A, 2); return true;
    // src/system/irq_nmi.asm:171 STA BG2HOFS
    case 0xC0829F: cpu.execute_instruction<0x8D>(0x00210F, 3); return true;
    // src/system/irq_nmi.asm:172 LDA <BG2_Y_POS_BUF + 0
    case 0xC082A2: cpu.execute_instruction<0xA5>(0x00004D, 2); return true;
    // src/system/irq_nmi.asm:173 STA BG2VOFS
    case 0xC082A4: cpu.execute_instruction<0x8D>(0x002110, 3); return true;
    // src/system/irq_nmi.asm:174 LDA <BG2_Y_POS_BUF + 1
    case 0xC082A7: cpu.execute_instruction<0xA5>(0x00004E, 2); return true;
    // src/system/irq_nmi.asm:175 STA BG2VOFS
    case 0xC082A9: cpu.execute_instruction<0x8D>(0x002110, 3); return true;
    // src/system/irq_nmi.asm:176 LDA <BG3_X_POS_BUF + 0
    case 0xC082AC: cpu.execute_instruction<0xA5>(0x000051, 2); return true;
    // src/system/irq_nmi.asm:177 STA BG3HOFS
    case 0xC082AE: cpu.execute_instruction<0x8D>(0x002111, 3); return true;
    // src/system/irq_nmi.asm:178 LDA <BG3_X_POS_BUF + 1
    case 0xC082B1: cpu.execute_instruction<0xA5>(0x000052, 2); return true;
    // src/system/irq_nmi.asm:179 STA BG3HOFS
    case 0xC082B3: cpu.execute_instruction<0x8D>(0x002111, 3); return true;
    // src/system/irq_nmi.asm:180 LDA <BG3_Y_POS_BUF + 0
    case 0xC082B6: cpu.execute_instruction<0xA5>(0x000055, 2); return true;
    // src/system/irq_nmi.asm:181 STA BG3VOFS
    case 0xC082B8: cpu.execute_instruction<0x8D>(0x002112, 3); return true;
    // src/system/irq_nmi.asm:182 LDA <BG3_Y_POS_BUF + 1
    case 0xC082BB: cpu.execute_instruction<0xA5>(0x000056, 2); return true;
    // src/system/irq_nmi.asm:183 STA BG3VOFS
    case 0xC082BD: cpu.execute_instruction<0x8D>(0x002112, 3); return true;
    // src/system/irq_nmi.asm:184 LDA <BG4_X_POS_BUF + 0
    case 0xC082C0: cpu.execute_instruction<0xA5>(0x000059, 2); return true;
    // src/system/irq_nmi.asm:185 STA BG4HOFS
    case 0xC082C2: cpu.execute_instruction<0x8D>(0x002113, 3); return true;
    // src/system/irq_nmi.asm:186 LDA <BG4_X_POS_BUF + 1
    case 0xC082C5: cpu.execute_instruction<0xA5>(0x00005A, 2); return true;
    // src/system/irq_nmi.asm:187 STA BG4HOFS
    case 0xC082C7: cpu.execute_instruction<0x8D>(0x002113, 3); return true;
    // src/system/irq_nmi.asm:188 LDA <BG4_Y_POS_BUF + 0
    case 0xC082CA: cpu.execute_instruction<0xA5>(0x00005D, 2); return true;
    // src/system/irq_nmi.asm:189 STA BG4VOFS
    case 0xC082CC: cpu.execute_instruction<0x8D>(0x002114, 3); return true;
    // src/system/irq_nmi.asm:190 LDA <BG4_Y_POS_BUF + 1
    case 0xC082CF: cpu.execute_instruction<0xA5>(0x00005E, 2); return true;
    // src/system/irq_nmi.asm:191 STA BG4VOFS
    case 0xC082D1: cpu.execute_instruction<0x8D>(0x002114, 3); return true;
    // src/system/irq_nmi.asm:192 BRA @UNKNOWN12
    case 0xC082D4: cpu.execute_instruction<0x80>(0x00005E, 2); return true;
    // src/system/irq_nmi.asm:194 LDA <BG1_X_POS_BUF + 2
    case 0xC082D6: cpu.execute_instruction<0xA5>(0x000043, 2); return true;
    // src/system/irq_nmi.asm:195 STA BG1HOFS
    case 0xC082D8: cpu.execute_instruction<0x8D>(0x00210D, 3); return true;
    // src/system/irq_nmi.asm:196 LDA <BG1_X_POS_BUF + 3
    case 0xC082DB: cpu.execute_instruction<0xA5>(0x000044, 2); return true;
    // src/system/irq_nmi.asm:197 STA BG1HOFS
    case 0xC082DD: cpu.execute_instruction<0x8D>(0x00210D, 3); return true;
    // src/system/irq_nmi.asm:198 LDA <BG1_Y_POS_BUF + 2
    case 0xC082E0: cpu.execute_instruction<0xA5>(0x000047, 2); return true;
    // src/system/irq_nmi.asm:199 STA BG1VOFS
    case 0xC082E2: cpu.execute_instruction<0x8D>(0x00210E, 3); return true;
    // src/system/irq_nmi.asm:200 LDA <BG1_Y_POS_BUF + 3
    case 0xC082E5: cpu.execute_instruction<0xA5>(0x000048, 2); return true;
    // src/system/irq_nmi.asm:201 STA BG1VOFS
    case 0xC082E7: cpu.execute_instruction<0x8D>(0x00210E, 3); return true;
    // src/system/irq_nmi.asm:202 LDA <BG2_X_POS_BUF + 2
    case 0xC082EA: cpu.execute_instruction<0xA5>(0x00004B, 2); return true;
    // src/system/irq_nmi.asm:203 STA BG2HOFS
    case 0xC082EC: cpu.execute_instruction<0x8D>(0x00210F, 3); return true;
    // src/system/irq_nmi.asm:204 LDA <BG2_X_POS_BUF + 3
    case 0xC082EF: cpu.execute_instruction<0xA5>(0x00004C, 2); return true;
    // src/system/irq_nmi.asm:205 STA BG2HOFS
    case 0xC082F1: cpu.execute_instruction<0x8D>(0x00210F, 3); return true;
    // src/system/irq_nmi.asm:206 LDA <BG2_Y_POS_BUF + 2
    case 0xC082F4: cpu.execute_instruction<0xA5>(0x00004F, 2); return true;
    // src/system/irq_nmi.asm:207 STA BG2VOFS
    case 0xC082F6: cpu.execute_instruction<0x8D>(0x002110, 3); return true;
    // src/system/irq_nmi.asm:208 LDA <BG2_Y_POS_BUF + 3
    case 0xC082F9: cpu.execute_instruction<0xA5>(0x000050, 2); return true;
    // src/system/irq_nmi.asm:209 STA BG2VOFS
    case 0xC082FB: cpu.execute_instruction<0x8D>(0x002110, 3); return true;
    // src/system/irq_nmi.asm:210 LDA <BG3_X_POS_BUF + 2
    case 0xC082FE: cpu.execute_instruction<0xA5>(0x000053, 2); return true;
    // src/system/irq_nmi.asm:211 STA BG3HOFS
    case 0xC08300: cpu.execute_instruction<0x8D>(0x002111, 3); return true;
    // src/system/irq_nmi.asm:212 LDA <BG3_X_POS_BUF + 3
    case 0xC08303: cpu.execute_instruction<0xA5>(0x000054, 2); return true;
    // src/system/irq_nmi.asm:213 STA BG3HOFS
    case 0xC08305: cpu.execute_instruction<0x8D>(0x002111, 3); return true;
    // src/system/irq_nmi.asm:214 LDA <BG3_Y_POS_BUF + 2
    case 0xC08308: cpu.execute_instruction<0xA5>(0x000057, 2); return true;
    // src/system/irq_nmi.asm:215 STA BG3VOFS
    case 0xC0830A: cpu.execute_instruction<0x8D>(0x002112, 3); return true;
    // src/system/irq_nmi.asm:216 LDA <BG3_Y_POS_BUF + 3
    case 0xC0830D: cpu.execute_instruction<0xA5>(0x000058, 2); return true;
    // src/system/irq_nmi.asm:217 STA BG3VOFS
    case 0xC0830F: cpu.execute_instruction<0x8D>(0x002112, 3); return true;
    // src/system/irq_nmi.asm:218 LDA <BG4_X_POS_BUF + 2
    case 0xC08312: cpu.execute_instruction<0xA5>(0x00005B, 2); return true;
    // src/system/irq_nmi.asm:219 STA BG4HOFS
    case 0xC08314: cpu.execute_instruction<0x8D>(0x002113, 3); return true;
    // src/system/irq_nmi.asm:220 LDA <BG4_X_POS_BUF + 3
    case 0xC08317: cpu.execute_instruction<0xA5>(0x00005C, 2); return true;
    // src/system/irq_nmi.asm:221 STA BG4HOFS
    case 0xC08319: cpu.execute_instruction<0x8D>(0x002113, 3); return true;
    // src/system/irq_nmi.asm:222 LDA <BG4_Y_POS_BUF + 2
    case 0xC0831C: cpu.execute_instruction<0xA5>(0x00005F, 2); return true;
    // src/system/irq_nmi.asm:223 STA BG4VOFS
    case 0xC0831E: cpu.execute_instruction<0x8D>(0x002114, 3); return true;
    // src/system/irq_nmi.asm:224 LDA <BG4_Y_POS_BUF + 3
    case 0xC08321: cpu.execute_instruction<0xA5>(0x000060, 2); return true;
    // src/system/irq_nmi.asm:225 STA BG4VOFS
    case 0xC08323: cpu.execute_instruction<0x8D>(0x002114, 3); return true;
    // src/system/irq_nmi.asm:226 REP #PROC_FLAGS::ACCUM8
    case 0xC08326: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/irq_nmi.asm:227 LDA BG1_X_POS
    case 0xC08328: cpu.execute_instruction<0xAD>(0x000031, 3); return true;
    // src/system/irq_nmi.asm:228 STA EVEN_BG1_X_POSITION
    case 0xC0832B: cpu.execute_instruction<0x8D>(0x000061, 3); return true;
    // src/system/irq_nmi.asm:229 LDA BG1_Y_POS
    case 0xC0832E: cpu.execute_instruction<0xAD>(0x000033, 3); return true;
    // src/system/irq_nmi.asm:230 STA EVEN_BG1_Y_POSITION
    case 0xC08331: cpu.execute_instruction<0x8D>(0x000063, 3); return true;
    // src/system/irq_nmi.asm:232 LDY #$0000
    case 0xC08334: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x008400, 3); return true;
    // src/system/irq_nmi.asm:233 STY <NEXT_FRAME_DISPLAY_ID + 0
    case 0xC08336: cpu.execute_instruction<0x84>(0x00002C, 2); return true;
    // src/system/irq_nmi.asm:233 STY <NEXT_FRAME_DISPLAY_ID + 0
    // Overlapping static entry reached from 0xC08334.
    case 0xC08337: cpu.execute_instruction<0x2C>(0x000DA6, 3); return true;
    // src/system/irq_nmi.asm:234 LDX <INIDISP_MIRROR + 0
    case 0xC08338: cpu.execute_instruction<0xA6>(0x00000D, 2); return true;
    // src/system/irq_nmi.asm:235 BMI @UNKNOWN13
    case 0xC0833A: cpu.execute_instruction<0x30>(0x00000F, 2); return true;
    // src/system/irq_nmi.asm:236 LDX <TM_MIRROR + 0
    case 0xC0833C: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/system/irq_nmi.asm:237 STX TM
    case 0xC0833E: cpu.execute_instruction<0x8E>(0x00212C, 3); return true;
    // src/system/irq_nmi.asm:238 LDX <TD_MIRROR + 0
    case 0xC08341: cpu.execute_instruction<0xA6>(0x00001B, 2); return true;
    // src/system/irq_nmi.asm:239 STX TD
    case 0xC08343: cpu.execute_instruction<0x8E>(0x00212D, 3); return true;
    // src/system/irq_nmi.asm:240 LDX <HDMAEN_MIRROR + 0
    case 0xC08346: cpu.execute_instruction<0xA6>(0x00001F, 2); return true;
    // src/system/irq_nmi.asm:241 STX HDMAEN
    case 0xC08348: cpu.execute_instruction<0x8E>(0x00420C, 3); return true;
    // src/system/irq_nmi.asm:243 JSR PROCESS_SFX_QUEUE
    case 0xC0834B: cpu.execute_instruction<0x20>(0x008501, 3); return true;
    // src/system/irq_nmi.asm:244 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0834E: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/irq_nmi.asm:245 STZ <DMA_BYTES_COPIED + 0
    case 0xC08350: cpu.execute_instruction<0x64>(0x000099, 2); return true;
    // src/system/irq_nmi.asm:246 LDA IN_IRQ_CALLBACK
    case 0xC08352: cpu.execute_instruction<0xAD>(0x000022, 3); return true;
    // src/system/irq_nmi.asm:247 BNE @UNKNOWN14
    case 0xC08355: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // src/system/irq_nmi.asm:248 INC IN_IRQ_CALLBACK
    case 0xC08357: cpu.execute_instruction<0xEE>(0x000022, 3); return true;
    // src/system/irq_nmi.asm:249 PHB
    case 0xC0835A: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:250 PEA $7E7E
    case 0xC0835B: cpu.execute_instruction<0xF4>(0x007E7E, 3); return true;
    // src/system/irq_nmi.asm:251 PLB
    case 0xC0835E: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:252 PLB
    case 0xC0835F: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:253 PHD
    case 0xC08360: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:254 PEA $0200
    case 0xC08361: cpu.execute_instruction<0xF4>(0x000200, 3); return true;
    // src/system/irq_nmi.asm:255 PLD
    case 0xC08364: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:256 JSR EXECUTE_IRQ_CALLBACK
    case 0xC08365: cpu.execute_instruction<0x20>(0x008518, 3); return true;
    // src/system/irq_nmi.asm:257 PLD
    case 0xC08368: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:258 PLB
    case 0xC08369: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:259 STZ IN_IRQ_CALLBACK
    case 0xC0836A: cpu.execute_instruction<0x9C>(0x000022, 3); return true;
    // src/system/irq_nmi.asm:261 LDA #.LOWORD(HEAP)
    case 0xC0836D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002000, 3); return true;
    // src/system/irq_nmi.asm:261 LDA #.LOWORD(HEAP)
    // Overlapping static entry reached from 0xC0836D.
    case 0xC0836F: cpu.execute_instruction<0x20>(0x00A3C5, 3); return true;
    // src/system/irq_nmi.asm:262 CMP <BASE_HEAP_ADDRESS + 0
    case 0xC08370: cpu.execute_instruction<0xC5>(0x0000A3, 2); return true;
    // src/system/irq_nmi.asm:263 BNE @UNKNOWN15
    case 0xC08372: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/system/irq_nmi.asm:264 LDA #.LOWORD(HEAP_ALT)
    case 0xC08374: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/irq_nmi.asm:264 LDA #.LOWORD(HEAP_ALT)
    // Overlapping static entry reached from 0xC08374.
    case 0xC08376: cpu.execute_instruction<0x22>(0x85A385, 4); return true;
    // src/system/irq_nmi.asm:266 STA <BASE_HEAP_ADDRESS + 0
    case 0xC08377: cpu.execute_instruction<0x85>(0x0000A3, 2); return true;
    // src/system/irq_nmi.asm:267 STA <CURRENT_HEAP_ADDRESS + 0
    case 0xC08379: cpu.execute_instruction<0x85>(0x0000A1, 2); return true;
    // src/system/irq_nmi.asm:267 STA <CURRENT_HEAP_ADDRESS + 0
    // Overlapping static entry reached from 0xC08376.
    case 0xC0837A: cpu.execute_instruction<0xA1>(0x0000A9, 2); return true;
    // src/system/irq_nmi.asm:268 LDA #$0000
    case 0xC0837B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/irq_nmi.asm:268 LDA #$0000
    // Overlapping static entry reached from 0xC0837A.
    case 0xC0837C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/system/irq_nmi.asm:268 LDA #$0000
    // Overlapping static entry reached from 0xC0837B.
    case 0xC0837D: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/system/irq_nmi.asm:269 STA f:DMA_TRANSFER_FLAG
    case 0xC0837E: cpu.execute_instruction<0x8F>(0x7E9E2B, 4); return true;
    // src/system/irq_nmi.asm:270 STZ <UNREAD_7E00AB + 0
    case 0xC08382: cpu.execute_instruction<0x64>(0x0000AB, 2); return true;
    // src/system/irq_nmi.asm:271 INC <TIMER + 0
    case 0xC08384: cpu.execute_instruction<0xE6>(0x0000A7, 2); return true;
    // src/system/irq_nmi.asm:272 BNE @RETURN
    case 0xC08386: cpu.execute_instruction<0xD0>(0x000002, 2); return true;
    // src/system/irq_nmi.asm:273 INC <TIMER + 2
    case 0xC08388: cpu.execute_instruction<0xE6>(0x0000A9, 2); return true;
    // src/system/irq_nmi.asm:275 PLB
    case 0xC0838A: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:276 PLD
    case 0xC0838B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:277 PLY
    case 0xC0838C: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:278 PLX
    case 0xC0838D: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:279 PLA
    case 0xC0838E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:280 PLP
    case 0xC0838F: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/irq_nmi.asm:281 RTI
    case 0xC08390: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/irq_vector.asm (source_named).
bool execute_system_irq_vector_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/irq_vector.asm:3 JMP f:IRQ
    case 0xC0814B: cpu.execute_instruction<0x5C>(0xC0814F, 4); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/load_background_animation.asm (source_named).
bool execute_system_load_background_animation_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/load_background_animation.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC47370: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/load_background_animation.asm:7 END_STACK_VARS
    case 0xC47372: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/load_background_animation.asm:7 END_STACK_VARS
    case 0xC47373: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/load_background_animation.asm:7 END_STACK_VARS
    case 0xC47374: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/load_background_animation.asm:7 END_STACK_VARS
    case 0xC47375: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/load_background_animation.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC47375.
    case 0xC47377: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/load_background_animation.asm:7 END_STACK_VARS
    case 0xC47378: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/load_background_animation.asm:7 END_STACK_VARS
    case 0xC47379: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/load_background_animation.asm:8 STX @VIRTUAL02
    case 0xC4737A: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/system/load_background_animation.asm:8 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC47377.
    case 0xC4737B: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/system/load_background_animation.asm:9 STA @VIRTUAL04
    case 0xC4737C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/load_background_animation.asm:10 JSL UNKNOWN_C08726
    case 0xC4737E: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/system/load_background_animation.asm:11 LDA #$0009
    case 0xC47382: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/system/load_background_animation.asm:11 LDA #$0009
    // Overlapping static entry reached from 0xC47382.
    case 0xC47384: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/load_background_animation.asm:12 JSL UNKNOWN_C08D79
    case 0xC47385: cpu.execute_instruction<0x22>(0xC08D79, 4); return true;
    // src/system/load_background_animation.asm:13 LDY #$0000
    case 0xC47389: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/load_background_animation.asm:13 LDY #$0000
    // Overlapping static entry reached from 0xC47389.
    case 0xC4738B: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/system/load_background_animation.asm:14 LDX #$5800
    case 0xC4738C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005800, 3); return true;
    // src/system/load_background_animation.asm:14 LDX #$5800
    // Overlapping static entry reached from 0xC4738C.
    case 0xC4738E: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/system/load_background_animation.asm:15 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC4738F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/load_background_animation.asm:16 JSL SET_BG1_VRAM_LOCATION
    case 0xC47390: cpu.execute_instruction<0x22>(0xC08D9E, 4); return true;
    // src/system/load_background_animation.asm:17 LDY #$1000
    case 0xC47394: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x001000, 3); return true;
    // src/system/load_background_animation.asm:17 LDY #$1000
    // Overlapping static entry reached from 0xC47394.
    case 0xC47396: cpu.execute_instruction<0x10>(0x0000A2, 2); return true;
    // src/system/load_background_animation.asm:18 LDX #$5C00
    case 0xC47397: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005C00, 3); return true;
    // src/system/load_background_animation.asm:18 LDX #$5C00
    // Overlapping static entry reached from 0xC47396.
    case 0xC47398: cpu.execute_instruction<0x00>(0x00005C, 2); return true;
    // src/system/load_background_animation.asm:18 LDX #$5C00
    // Overlapping static entry reached from 0xC47397.
    case 0xC47399: cpu.execute_instruction<0x5C>(0x0000A9, 4); return true;
    // src/system/load_background_animation.asm:19 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC4739A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/load_background_animation.asm:19 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC4739A.
    case 0xC4739C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/load_background_animation.asm:20 JSL SET_BG2_VRAM_LOCATION
    case 0xC4739D: cpu.execute_instruction<0x22>(0xC08DDE, 4); return true;
    // src/system/load_background_animation.asm:21 LDY #$0004
    case 0xC473A1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/system/load_background_animation.asm:21 LDY #$0004
    // Overlapping static entry reached from 0xC473A1.
    case 0xC473A3: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/system/load_background_animation.asm:22 LDX @VIRTUAL02
    case 0xC473A4: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/load_background_animation.asm:23 LDA @VIRTUAL04
    case 0xC473A6: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/system/load_background_animation.asm:24 JSL LOAD_BATTLE_BG
    case 0xC473A8: cpu.execute_instruction<0x22>(0xC2D121, 4); return true;
    // src/system/load_background_animation.asm:25 JSL UNKNOWN_C08744
    case 0xC473AC: cpu.execute_instruction<0x22>(0xC08744, 4); return true;
    // src/system/load_background_animation.asm:26 PLD
    case 0xC473B0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/load_background_animation.asm:27 RTL
    case 0xC473B1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/load_palette_anim.asm (source_named).
bool execute_system_load_palette_anim_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/load_palette_anim.asm:3 BEGIN_C_FUNCTION
    case 0xC0023F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/load_palette_anim.asm:8 END_STACK_VARS
    case 0xC00241: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/load_palette_anim.asm:8 END_STACK_VARS
    case 0xC00242: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/load_palette_anim.asm:8 END_STACK_VARS
    case 0xC00243: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/load_palette_anim.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC00243.
    case 0xC00245: cpu.execute_instruction<0xFF>(0x749C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/load_palette_anim.asm:8 END_STACK_VARS
    case 0xC00246: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/load_palette_anim.asm:9 STZ MAP_PALETTE_ANIMATION_LOADED
    case 0xC00247: cpu.execute_instruction<0x9C>(0x004474, 3); return true;
    // src/system/load_palette_anim.asm:9 STZ MAP_PALETTE_ANIMATION_LOADED
    // Overlapping static entry reached from 0xC00245.
    case 0xC00249: cpu.execute_instruction<0x44>(0x00A0AE, 3); return true;
    // src/system/load_palette_anim.asm:10 LDX PALETTES + BPP4PALETTE_SIZE * 5
    case 0xC0024A: cpu.execute_instruction<0xAE>(0x0002A0, 3); return true;
    // src/system/load_palette_anim.asm:10 LDX PALETTES + BPP4PALETTE_SIZE * 5
    // Overlapping static entry reached from 0xC00249.
    case 0xC0024C: cpu.execute_instruction<0x02>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/load_palette_anim.asm:11 BEQL @UNKNOWN6
    case 0xC0024D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/load_palette_anim.asm:11 BEQL @UNKNOWN6
    case 0xC0024F: cpu.execute_instruction<0x4C>(0x00030D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_palette_anim.asm:12 LOADPTR MAP_DATA_PALETTE_ANIM_POINTER_TABLE, @VIRTUAL06
    case 0xC00252: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x00E4E1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_palette_anim.asm:12 LOADPTR MAP_DATA_PALETTE_ANIM_POINTER_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC00252.
    case 0xC00254: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_palette_anim.asm:12 LOADPTR MAP_DATA_PALETTE_ANIM_POINTER_TABLE, @VIRTUAL06
    case 0xC00255: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_palette_anim.asm:12 LOADPTR MAP_DATA_PALETTE_ANIM_POINTER_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC00254.
    case 0xC00256: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_palette_anim.asm:12 LOADPTR MAP_DATA_PALETTE_ANIM_POINTER_TABLE, @VIRTUAL06
    case 0xC00257: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DF, 2); else cpu.execute_instruction<0xA9>(0x0000DF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_palette_anim.asm:12 LOADPTR MAP_DATA_PALETTE_ANIM_POINTER_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC00256.
    case 0xC00258: cpu.execute_instruction<0xDF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_palette_anim.asm:12 LOADPTR MAP_DATA_PALETTE_ANIM_POINTER_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC00257.
    case 0xC00259: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_palette_anim.asm:12 LOADPTR MAP_DATA_PALETTE_ANIM_POINTER_TABLE, @VIRTUAL06
    case 0xC0025A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/load_palette_anim.asm:13 TXA
    case 0xC0025C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/load_palette_anim.asm:14 DEC
    case 0xC0025D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/system/load_palette_anim.asm:15 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC0025E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/system/load_palette_anim.asm:15 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC0025F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_palette_anim.asm:16 CLC
    case 0xC00260: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/load_palette_anim.asm:17 ADC @VIRTUAL06
    case 0xC00261: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/system/load_palette_anim.asm:18 STA @VIRTUAL06
    case 0xC00263: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/system/load_palette_anim.asm:19 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC00265: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/system/load_palette_anim.asm:19 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC00265.
    case 0xC00267: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/system/load_palette_anim.asm:19 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC00268: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/system/load_palette_anim.asm:19 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC0026A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/system/load_palette_anim.asm:19 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC0026B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/system/load_palette_anim.asm:19 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC0026D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/system/load_palette_anim.asm:19 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC0026F: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/system/load_palette_anim.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC00271: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/load_palette_anim.asm:21 LDY #map_palette_animation_entry::count
    case 0xC00273: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/system/load_palette_anim.asm:21 LDY #map_palette_animation_entry::count
    // Overlapping static entry reached from 0xC00273.
    case 0xC00275: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/system/load_palette_anim.asm:22 LDA [@VIRTUAL0A],Y
    case 0xC00276: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/system/load_palette_anim.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC00278: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/load_palette_anim.asm:24 AND #$00FF
    case 0xC0027A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_palette_anim.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC0027A.
    case 0xC0027C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/load_palette_anim.asm:25 BEQL @UNKNOWN6
    case 0xC0027D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/load_palette_anim.asm:25 BEQL @UNKNOWN6
    case 0xC0027F: cpu.execute_instruction<0x4C>(0x00030D, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_palette_anim.asm:26 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC00282: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_palette_anim.asm:26 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC00284: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_palette_anim.asm:26 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC00286: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_palette_anim.asm:26 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC00288: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/system/load_palette_anim.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC0028A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/system/load_palette_anim.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC0028A.
    case 0xC0028C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/system/load_palette_anim.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC0028D: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/system/load_palette_anim.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC0028F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/system/load_palette_anim.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC00290: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/system/load_palette_anim.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC00292: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/system/load_palette_anim.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC00294: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_palette_anim.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00296: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_palette_anim.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00298: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_palette_anim.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0029A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_palette_anim.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0029C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_palette_anim.asm:29 LOADPTR ANIMATED_MAP_PALETTE_BUFFER, @LOCAL01
    case 0xC0029E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00B800, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_palette_anim.asm:29 LOADPTR ANIMATED_MAP_PALETTE_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0029E.
    case 0xC002A0: cpu.execute_instruction<0xB8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_palette_anim.asm:29 LOADPTR ANIMATED_MAP_PALETTE_BUFFER, @LOCAL01
    case 0xC002A1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_palette_anim.asm:29 LOADPTR ANIMATED_MAP_PALETTE_BUFFER, @LOCAL01
    case 0xC002A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_palette_anim.asm:29 LOADPTR ANIMATED_MAP_PALETTE_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC002A3.
    case 0xC002A5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_palette_anim.asm:29 LOADPTR ANIMATED_MAP_PALETTE_BUFFER, @LOCAL01
    case 0xC002A6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/load_palette_anim.asm:30 JSL DECOMP
    case 0xC002A8: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/system/load_palette_anim.asm:31 LDA #0
    case 0xC002AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/load_palette_anim.asm:31 LDA #0
    // Overlapping static entry reached from 0xC002AC.
    case 0xC002AE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/load_palette_anim.asm:32 STA @LOCAL02
    case 0xC002AF: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/system/load_palette_anim.asm:33 BRA @UNKNOWN3
    case 0xC002B1: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/system/load_palette_anim.asm:35 ASL
    case 0xC002B3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_palette_anim.asm:42 TAX
    case 0xC002B4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/load_palette_anim.asm:43 STZ OVERWORLD_PALETTE_ANIM + overworld_palette_anim::delays,X
    case 0xC002B5: cpu.execute_instruction<0x9E>(0x004460, 3); return true;
    // src/system/load_palette_anim.asm:45 LDA @LOCAL02
    case 0xC002B8: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/system/load_palette_anim.asm:46 INC
    case 0xC002BA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/load_palette_anim.asm:47 STA @LOCAL02
    case 0xC002BB: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/system/load_palette_anim.asm:49 CMP #9
    case 0xC002BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/system/load_palette_anim.asm:49 CMP #9
    // Overlapping static entry reached from 0xC002BD.
    case 0xC002BF: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/load_palette_anim.asm:50 BCC @UNKNOWN2
    case 0xC002C0: cpu.execute_instruction<0x90>(0x0000F1, 2); return true;
    // src/system/load_palette_anim.asm:51 LDA #map_palette_animation_entry::entries
    case 0xC002C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/system/load_palette_anim.asm:51 LDA #map_palette_animation_entry::entries
    // Overlapping static entry reached from 0xC002C2.
    case 0xC002C4: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/system/load_palette_anim.asm:52 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC002C5: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/system/load_palette_anim.asm:52 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC002C7: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/system/load_palette_anim.asm:52 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC002C9: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/system/load_palette_anim.asm:52 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC002CB: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/system/load_palette_anim.asm:53 CLC
    case 0xC002CD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/load_palette_anim.asm:54 ADC @VIRTUAL06
    case 0xC002CE: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/system/load_palette_anim.asm:55 STA @VIRTUAL06
    case 0xC002D0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/load_palette_anim.asm:56 LDA #0
    case 0xC002D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/load_palette_anim.asm:56 LDA #0
    // Overlapping static entry reached from 0xC002D2.
    case 0xC002D4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/load_palette_anim.asm:57 STA @LOCAL02
    case 0xC002D5: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/system/load_palette_anim.asm:58 BRA @UNKNOWN5
    case 0xC002D7: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/system/load_palette_anim.asm:60 ASL
    case 0xC002D9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_palette_anim.asm:69 TAX
    case 0xC002DA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/load_palette_anim.asm:70 LDA [@VIRTUAL06]
    case 0xC002DB: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/load_palette_anim.asm:71 AND #$00FF
    case 0xC002DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_palette_anim.asm:71 AND #$00FF
    // Overlapping static entry reached from 0xC002DD.
    case 0xC002DF: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/system/load_palette_anim.asm:72 STA OVERWORLD_PALETTE_ANIM + overworld_palette_anim::delays,X
    case 0xC002E0: cpu.execute_instruction<0x9D>(0x004460, 3); return true;
    // src/system/load_palette_anim.asm:74 INC @VIRTUAL06
    case 0xC002E3: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/load_palette_anim.asm:75 LDA @LOCAL02
    case 0xC002E5: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/system/load_palette_anim.asm:76 INC
    case 0xC002E7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/load_palette_anim.asm:77 STA @LOCAL02
    case 0xC002E8: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/system/load_palette_anim.asm:79 SEP #PROC_FLAGS::ACCUM8
    case 0xC002EA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/load_palette_anim.asm:80 LDY #map_palette_animation_entry::count
    case 0xC002EC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/system/load_palette_anim.asm:80 LDY #map_palette_animation_entry::count
    // Overlapping static entry reached from 0xC002EC.
    case 0xC002EE: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/system/load_palette_anim.asm:81 LDA [@VIRTUAL0A],Y
    case 0xC002EF: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/system/load_palette_anim.asm:81 LDA [@VIRTUAL0A],Y
    // Overlapping static entry reached from 0xC00369.
    case 0xC002F0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_palette_anim.asm:82 REP #PROC_FLAGS::ACCUM8
    case 0xC002F1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/load_palette_anim.asm:83 AND #$00FF
    case 0xC002F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_palette_anim.asm:83 AND #$00FF
    // Overlapping static entry reached from 0xC002F3.
    case 0xC002F5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/load_palette_anim.asm:84 STA @VIRTUAL02
    case 0xC002F6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/load_palette_anim.asm:85 LDA @LOCAL02
    case 0xC002F8: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/system/load_palette_anim.asm:86 CMP @VIRTUAL02
    case 0xC002FA: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/system/load_palette_anim.asm:87 BCC @UNKNOWN4
    case 0xC002FC: cpu.execute_instruction<0x90>(0x0000DB, 2); return true;
    // src/system/load_palette_anim.asm:88 LDA OVERWORLD_PALETTE_ANIM + overworld_palette_anim::delays
    case 0xC002FE: cpu.execute_instruction<0xAD>(0x004460, 3); return true;
    // src/system/load_palette_anim.asm:89 STA OVERWORLD_PALETTE_ANIM + overworld_palette_anim::timer
    case 0xC00301: cpu.execute_instruction<0x8D>(0x00445C, 3); return true;
    // src/system/load_palette_anim.asm:90 LDA #1
    case 0xC00304: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/load_palette_anim.asm:90 LDA #1
    // Overlapping static entry reached from 0xC00304.
    case 0xC00306: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/load_palette_anim.asm:91 STA MAP_PALETTE_ANIMATION_LOADED
    case 0xC00307: cpu.execute_instruction<0x8D>(0x004474, 3); return true;
    // src/system/load_palette_anim.asm:92 STA OVERWORLD_PALETTE_ANIM + overworld_palette_anim::index
    case 0xC0030A: cpu.execute_instruction<0x8D>(0x00445E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/load_palette_anim.asm:94 END_C_FUNCTION
    case 0xC0030D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/load_palette_anim.asm:94 END_C_FUNCTION
    case 0xC0030E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/load_tileset_anim.asm (source_named).
bool execute_system_load_tileset_anim_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/load_tileset_anim.asm:3 BEGIN_C_FUNCTION
    case 0xC00085: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/load_tileset_anim.asm:10 END_STACK_VARS
    case 0xC00087: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/load_tileset_anim.asm:10 END_STACK_VARS
    case 0xC00088: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/load_tileset_anim.asm:10 END_STACK_VARS
    case 0xC00089: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/load_tileset_anim.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC00089.
    case 0xC0008B: cpu.execute_instruction<0xFF>(0x729C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/load_tileset_anim.asm:10 END_STACK_VARS
    case 0xC0008C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/load_tileset_anim.asm:18 STZ LOADED_ANIMATED_TILE_COUNT
    case 0xC0008D: cpu.execute_instruction<0x9C>(0x004472, 3); return true;
    // src/system/load_tileset_anim.asm:18 STZ LOADED_ANIMATED_TILE_COUNT
    // Overlapping static entry reached from 0xC0008B.
    case 0xC0008F: cpu.execute_instruction<0x44>(0x0072AD, 3); return true;
    // src/system/load_tileset_anim.asm:19 LDA LOADED_MAP_TILESET
    case 0xC00090: cpu.execute_instruction<0xAD>(0x004372, 3); return true;
    // src/system/load_tileset_anim.asm:19 LDA LOADED_MAP_TILESET
    // Overlapping static entry reached from 0xC0008F.
    case 0xC00092: cpu.execute_instruction<0x43>(0x00000A, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/system/load_tileset_anim.asm:20 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC00093: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/system/load_tileset_anim.asm:20 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC00094: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_tileset_anim.asm:21 STA @LOCAL04
    case 0xC00095: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_tileset_anim.asm:22 LOADPTR MAP_DATA_WEIRD_TILE_ANIMATION_PTR_TABLE, @VIRTUAL0A
    case 0xC00097: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00121B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_tileset_anim.asm:22 LOADPTR MAP_DATA_WEIRD_TILE_ANIMATION_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC00097.
    case 0xC00099: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_tileset_anim.asm:22 LOADPTR MAP_DATA_WEIRD_TILE_ANIMATION_PTR_TABLE, @VIRTUAL0A
    case 0xC0009A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_tileset_anim.asm:22 LOADPTR MAP_DATA_WEIRD_TILE_ANIMATION_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC00099.
    case 0xC0009B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_tileset_anim.asm:22 LOADPTR MAP_DATA_WEIRD_TILE_ANIMATION_PTR_TABLE, @VIRTUAL0A
    case 0xC0009C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_tileset_anim.asm:22 LOADPTR MAP_DATA_WEIRD_TILE_ANIMATION_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC0009C.
    case 0xC0009E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_tileset_anim.asm:22 LOADPTR MAP_DATA_WEIRD_TILE_ANIMATION_PTR_TABLE, @VIRTUAL0A
    case 0xC0009F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/system/load_tileset_anim.asm:23 LDA @LOCAL04
    case 0xC000A1: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/system/load_tileset_anim.asm:23 LDA @LOCAL04
    // Overlapping static entry reached from 0xC0002B.
    case 0xC000A2: cpu.execute_instruction<0x1C>(0x006518, 3); return true;
    // src/system/load_tileset_anim.asm:24 CLC
    case 0xC000A3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/load_tileset_anim.asm:25 ADC @VIRTUAL0A
    case 0xC000A4: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/system/load_tileset_anim.asm:25 ADC @VIRTUAL0A
    // Overlapping static entry reached from 0xC000A2.
    case 0xC000A5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_tileset_anim.asm:26 STA @VIRTUAL0A
    case 0xC000A6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/system/load_tileset_anim.asm:27 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC000A8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/system/load_tileset_anim.asm:27 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC0EC42.
    case 0xC000A9: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/system/load_tileset_anim.asm:27 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC000A8.
    case 0xC000AA: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/system/load_tileset_anim.asm:27 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC000AB: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/system/load_tileset_anim.asm:27 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC000AD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/system/load_tileset_anim.asm:27 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC000AE: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/system/load_tileset_anim.asm:27 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC000B0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/system/load_tileset_anim.asm:27 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC000B2: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_tileset_anim.asm:28 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC000B4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_tileset_anim.asm:28 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC000B6: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_tileset_anim.asm:28 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC000B8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_tileset_anim.asm:28 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC000BA: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/system/load_tileset_anim.asm:29 LDA [@VIRTUAL06]
    case 0xC000BC: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/load_tileset_anim.asm:30 AND #$00FF
    case 0xC000BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_tileset_anim.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC000BE.
    case 0xC000C0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/load_tileset_anim.asm:31 BEQL @UNKNOWN3
    case 0xC000C1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/load_tileset_anim.asm:31 BEQL @UNKNOWN3
    case 0xC000C3: cpu.execute_instruction<0x4C>(0x000170, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_tileset_anim.asm:32 LOADPTR MAP_DATA_TILE_ANIMATION_PTR_TABLE, @PTRBASE
    case 0xC000C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CB, 2); else cpu.execute_instruction<0xA9>(0x0011CB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_tileset_anim.asm:32 LOADPTR MAP_DATA_TILE_ANIMATION_PTR_TABLE, @PTRBASE
    // Overlapping static entry reached from 0xC000C6.
    case 0xC000C8: cpu.execute_instruction<0x11>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_tileset_anim.asm:32 LOADPTR MAP_DATA_TILE_ANIMATION_PTR_TABLE, @PTRBASE
    case 0xC000C9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_tileset_anim.asm:32 LOADPTR MAP_DATA_TILE_ANIMATION_PTR_TABLE, @PTRBASE
    // Overlapping static entry reached from 0xC000C8.
    case 0xC000CA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_tileset_anim.asm:32 LOADPTR MAP_DATA_TILE_ANIMATION_PTR_TABLE, @PTRBASE
    case 0xC000CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_tileset_anim.asm:32 LOADPTR MAP_DATA_TILE_ANIMATION_PTR_TABLE, @PTRBASE
    // Overlapping static entry reached from 0xC000CB.
    case 0xC000CD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_tileset_anim.asm:32 LOADPTR MAP_DATA_TILE_ANIMATION_PTR_TABLE, @PTRBASE
    case 0xC000CE: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/system/load_tileset_anim.asm:33 LDA @LOCAL04
    case 0xC000D0: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/system/load_tileset_anim.asm:34 CLC
    case 0xC000D2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/load_tileset_anim.asm:35 ADC @PTRBASE
    case 0xC000D3: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/system/load_tileset_anim.asm:36 STA @PTRBASE
    case 0xC000D5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/system/load_tileset_anim.asm:37 DEREFERENCE_PTR_TO @PTRBASE, @PTRFINAL
    case 0xC000D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/system/load_tileset_anim.asm:37 DEREFERENCE_PTR_TO @PTRBASE, @PTRFINAL
    // Overlapping static entry reached from 0xC000D7.
    case 0xC000D9: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/system/load_tileset_anim.asm:37 DEREFERENCE_PTR_TO @PTRBASE, @PTRFINAL
    case 0xC000DA: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/system/load_tileset_anim.asm:37 DEREFERENCE_PTR_TO @PTRBASE, @PTRFINAL
    case 0xC000DC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/system/load_tileset_anim.asm:37 DEREFERENCE_PTR_TO @PTRBASE, @PTRFINAL
    case 0xC000DD: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/system/load_tileset_anim.asm:37 DEREFERENCE_PTR_TO @PTRBASE, @PTRFINAL
    case 0xC000DF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/system/load_tileset_anim.asm:37 DEREFERENCE_PTR_TO @PTRBASE, @PTRFINAL
    case 0xC000E1: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_tileset_anim.asm:38 MOVE_INT @PTRFINAL, @LOCAL00
    case 0xC000E3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_tileset_anim.asm:38 MOVE_INT @PTRFINAL, @LOCAL00
    case 0xC000E5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_tileset_anim.asm:38 MOVE_INT @PTRFINAL, @LOCAL00
    case 0xC000E7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_tileset_anim.asm:38 MOVE_INT @PTRFINAL, @LOCAL00
    case 0xC000E9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_tileset_anim.asm:39 LOADPTR ANIMATED_TILESET_BUFFER, @LOCAL01
    case 0xC000EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00C000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_tileset_anim.asm:39 LOADPTR ANIMATED_TILESET_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC000EB.
    case 0xC000ED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x001285, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_tileset_anim.asm:39 LOADPTR ANIMATED_TILESET_BUFFER, @LOCAL01
    case 0xC000EE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_tileset_anim.asm:39 LOADPTR ANIMATED_TILESET_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC000ED.
    case 0xC000EF: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_tileset_anim.asm:39 LOADPTR ANIMATED_TILESET_BUFFER, @LOCAL01
    case 0xC000F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_tileset_anim.asm:39 LOADPTR ANIMATED_TILESET_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC000EF.
    case 0xC000F1: cpu.execute_instruction<0x7E>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_tileset_anim.asm:39 LOADPTR ANIMATED_TILESET_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC000F0.
    case 0xC000F2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_tileset_anim.asm:39 LOADPTR ANIMATED_TILESET_BUFFER, @LOCAL01
    case 0xC000F3: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_tileset_anim.asm:39 LOADPTR ANIMATED_TILESET_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC000F1.
    case 0xC000F4: cpu.execute_instruction<0x14>(0x000022, 2); return true;
    // src/system/load_tileset_anim.asm:40 JSL DECOMP
    case 0xC000F5: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/system/load_tileset_anim.asm:40 JSL DECOMP
    // Overlapping static entry reached from 0xC000F4.
    case 0xC000F6: cpu.execute_instruction<0x9E>(0x00C41A, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_tileset_anim.asm:41 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC000F9: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_tileset_anim.asm:41 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC000FB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_tileset_anim.asm:41 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC000FD: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_tileset_anim.asm:41 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC000FF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/load_tileset_anim.asm:42 LDA [@VIRTUAL06]
    case 0xC00101: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/load_tileset_anim.asm:43 AND #$00FF
    case 0xC00103: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_tileset_anim.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC00103.
    case 0xC00105: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/load_tileset_anim.asm:44 STA LOADED_ANIMATED_TILE_COUNT
    case 0xC00106: cpu.execute_instruction<0x8D>(0x004472, 3); return true;
    // src/system/load_tileset_anim.asm:45 STA @VIRTUAL02
    case 0xC00109: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/load_tileset_anim.asm:46 INC @VIRTUAL06
    case 0xC0010B: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/load_tileset_anim.asm:47 LDY #0
    case 0xC0010D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/load_tileset_anim.asm:47 LDY #0
    // Overlapping static entry reached from 0xC0010D.
    case 0xC0010F: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/system/load_tileset_anim.asm:48 STY @LOCAL02
    case 0xC00110: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/system/load_tileset_anim.asm:49 BRA @UNKNOWN2
    case 0xC00112: cpu.execute_instruction<0x80>(0x000057, 2); return true;
    // src/system/load_tileset_anim.asm:51 TYA
    case 0xC00114: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:589 ASL
    // Macro caller: src/system/load_tileset_anim.asm:52 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(overworld_tileset_anim)
    case 0xC00115: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:590 ASL
    // Macro caller: src/system/load_tileset_anim.asm:52 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(overworld_tileset_anim)
    case 0xC00116: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:591 ASL
    // Macro caller: src/system/load_tileset_anim.asm:52 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(overworld_tileset_anim)
    case 0xC00117: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:592 ASL
    // Macro caller: src/system/load_tileset_anim.asm:52 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(overworld_tileset_anim)
    case 0xC00118: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_tileset_anim.asm:53 CLC
    case 0xC00119: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/load_tileset_anim.asm:54 ADC #.LOWORD(OVERWORLD_TILESET_ANIM)
    case 0xC0011A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0043DC, 3); return true;
    // src/system/load_tileset_anim.asm:54 ADC #.LOWORD(OVERWORLD_TILESET_ANIM)
    // Overlapping static entry reached from 0xC0011A.
    case 0xC0011C: cpu.execute_instruction<0x43>(0x0000AA, 2); return true;
    // src/system/load_tileset_anim.asm:55 TAX
    case 0xC0011D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_tileset_anim.asm:56 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0011E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_tileset_anim.asm:56 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC00120: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_tileset_anim.asm:56 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC00122: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_tileset_anim.asm:56 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC00124: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/system/load_tileset_anim.asm:57 LDA [@VIRTUAL0A] ;overworld_tileset_anim_entry::unknown0
    case 0xC00126: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/system/load_tileset_anim.asm:58 AND #$00FF
    case 0xC00128: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_tileset_anim.asm:58 AND #$00FF
    // Overlapping static entry reached from 0xC00128.
    case 0xC0012A: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/system/load_tileset_anim.asm:59 STA a:overworld_tileset_anim::unknown0,X
    case 0xC0012B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/load_tileset_anim.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC0012E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/load_tileset_anim.asm:61 LDY #overworld_tileset_anim_entry::frame_delay
    case 0xC00130: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/system/load_tileset_anim.asm:61 LDY #overworld_tileset_anim_entry::frame_delay
    // Overlapping static entry reached from 0xC00130.
    case 0xC00132: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/system/load_tileset_anim.asm:62 LDA [@VIRTUAL06],Y
    case 0xC00133: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/system/load_tileset_anim.asm:63 REP #PROC_FLAGS::ACCUM8
    case 0xC00135: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/load_tileset_anim.asm:64 AND #$00FF
    case 0xC00137: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_tileset_anim.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC00137.
    case 0xC00139: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/system/load_tileset_anim.asm:65 STA a:overworld_tileset_anim::frames_until_update,X
    case 0xC0013A: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/system/load_tileset_anim.asm:66 STA a:overworld_tileset_anim::frame_delay,X
    case 0xC0013D: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/system/load_tileset_anim.asm:67 LDY #overworld_tileset_anim_entry::copy_size
    case 0xC00140: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/system/load_tileset_anim.asm:67 LDY #overworld_tileset_anim_entry::copy_size
    // Overlapping static entry reached from 0xC00140.
    case 0xC00142: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/system/load_tileset_anim.asm:68 LDA [@VIRTUAL06],Y
    case 0xC00143: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/system/load_tileset_anim.asm:69 STA a:overworld_tileset_anim::copy_size,X
    case 0xC00145: cpu.execute_instruction<0x9D>(0x000004, 3); return true;
    // src/system/load_tileset_anim.asm:70 LDY #overworld_tileset_anim_entry::source_offset
    case 0xC00148: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/system/load_tileset_anim.asm:70 LDY #overworld_tileset_anim_entry::source_offset
    // Overlapping static entry reached from 0xC00148.
    case 0xC0014A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/system/load_tileset_anim.asm:71 LDA [@VIRTUAL06],Y
    case 0xC0014B: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/system/load_tileset_anim.asm:72 STA a:overworld_tileset_anim::source_offset2,X
    case 0xC0014D: cpu.execute_instruction<0x9D>(0x00000E, 3); return true;
    // src/system/load_tileset_anim.asm:73 STA a:overworld_tileset_anim::source_offset,X
    case 0xC00150: cpu.execute_instruction<0x9D>(0x000006, 3); return true;
    // src/system/load_tileset_anim.asm:74 LDY #overworld_tileset_anim_entry::destination_address
    case 0xC00153: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/system/load_tileset_anim.asm:74 LDY #overworld_tileset_anim_entry::destination_address
    // Overlapping static entry reached from 0xC00153.
    case 0xC00155: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/system/load_tileset_anim.asm:75 LDA [@VIRTUAL06],Y
    case 0xC00156: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/system/load_tileset_anim.asm:76 STA a:overworld_tileset_anim::destination_address,X
    case 0xC00158: cpu.execute_instruction<0x9D>(0x000008, 3); return true;
    // src/system/load_tileset_anim.asm:77 STZ a:overworld_tileset_anim::destination_address2,X
    case 0xC0015B: cpu.execute_instruction<0x9E>(0x00000C, 3); return true;
    // src/system/load_tileset_anim.asm:78 LDA #.SIZEOF(overworld_tileset_anim_entry)
    case 0xC0015E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/system/load_tileset_anim.asm:78 LDA #.SIZEOF(overworld_tileset_anim_entry)
    // Overlapping static entry reached from 0xC0015E.
    case 0xC00160: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/system/load_tileset_anim.asm:79 CLC
    case 0xC00161: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/load_tileset_anim.asm:80 ADC @VIRTUAL06
    case 0xC00162: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/system/load_tileset_anim.asm:81 STA @VIRTUAL06
    case 0xC00164: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/load_tileset_anim.asm:82 LDY @LOCAL02
    case 0xC00166: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/system/load_tileset_anim.asm:83 INY
    case 0xC00168: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/load_tileset_anim.asm:84 STY @LOCAL02
    case 0xC00169: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/system/load_tileset_anim.asm:86 TYA
    case 0xC0016B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/load_tileset_anim.asm:87 CMP @VIRTUAL02
    case 0xC0016C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/system/load_tileset_anim.asm:88 BCC @UNKNOWN1
    case 0xC0016E: cpu.execute_instruction<0x90>(0x0000A4, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/load_tileset_anim.asm:90 END_C_FUNCTION
    case 0xC00170: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/load_tileset_anim.asm:90 END_C_FUNCTION
    case 0xC00171: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/load_window_gfx.asm (source_named).
bool execute_system_load_window_gfx_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/load_window_gfx.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47C3F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/load_window_gfx.asm:15 END_STACK_VARS
    case 0xC47C41: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/load_window_gfx.asm:15 END_STACK_VARS
    case 0xC47C42: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/load_window_gfx.asm:15 END_STACK_VARS
    case 0xC47C43: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x00FFD4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/load_window_gfx.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC47C43.
    case 0xC47C45: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/load_window_gfx.asm:15 END_STACK_VARS
    case 0xC47C46: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:16 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC47C47: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:16 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC47C47.
    case 0xC47C49: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx.asm:16 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC47C4A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx.asm:16 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC47CC4.
    case 0xC47C4B: cpu.execute_instruction<0x0E>(0x00E0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:16 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC47C4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:16 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC47C4C.
    case 0xC47C4E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_window_gfx.asm:16 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC47C4F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:17 LOADPTR BUFFER, @LOCAL01
    case 0xC47C51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:17 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC47C51.
    case 0xC47C53: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx.asm:17 LOADPTR BUFFER, @LOCAL01
    case 0xC47C54: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:17 LOADPTR BUFFER, @LOCAL01
    case 0xC47C56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:17 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC47C56.
    case 0xC47C58: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_window_gfx.asm:17 LOADPTR BUFFER, @LOCAL01
    case 0xC47C59: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/load_window_gfx.asm:18 JSL DECOMP
    case 0xC47C5B: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:19 LOADPTR BUFFER + $2000, @LOCAL00
    case 0xC47C5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:19 LOADPTR BUFFER + $2000, @LOCAL00
    // Overlapping static entry reached from 0xC47C5F.
    case 0xC47C61: cpu.execute_instruction<0x20>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx.asm:19 LOADPTR BUFFER + $2000, @LOCAL00
    case 0xC47C62: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:19 LOADPTR BUFFER + $2000, @LOCAL00
    case 0xC47C64: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:19 LOADPTR BUFFER + $2000, @LOCAL00
    // Overlapping static entry reached from 0xC47C64.
    case 0xC47C66: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_window_gfx.asm:19 LOADPTR BUFFER + $2000, @LOCAL00
    case 0xC47C67: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:20 LOADPTR BUFFER + $1000, @LOCAL01
    case 0xC47C69: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:20 LOADPTR BUFFER + $1000, @LOCAL01
    // Overlapping static entry reached from 0xC47C69.
    case 0xC47C6B: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx.asm:20 LOADPTR BUFFER + $1000, @LOCAL01
    case 0xC47C6C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx.asm:20 LOADPTR BUFFER + $1000, @LOCAL01
    // Overlapping static entry reached from 0xC47C6B.
    case 0xC47C6D: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:20 LOADPTR BUFFER + $1000, @LOCAL01
    case 0xC47C6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:20 LOADPTR BUFFER + $1000, @LOCAL01
    // Overlapping static entry reached from 0xC47C6D.
    case 0xC47C6F: cpu.execute_instruction<0x7F>(0x148500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:20 LOADPTR BUFFER + $1000, @LOCAL01
    // Overlapping static entry reached from 0xC47C6E.
    case 0xC47C70: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_window_gfx.asm:20 LOADPTR BUFFER + $1000, @LOCAL01
    case 0xC47C71: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/load_window_gfx.asm:21 LDA #$2A00
    case 0xC47C73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002A00, 3); return true;
    // src/system/load_window_gfx.asm:21 LDA #$2A00
    // Overlapping static entry reached from 0xC47C73.
    case 0xC47C75: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:22 JSL MEMCPY24
    case 0xC47C76: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:23 LOADPTR BUFFER + $3200, @LOCAL00
    case 0xC47C7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x003200, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:23 LOADPTR BUFFER + $3200, @LOCAL00
    // Overlapping static entry reached from 0xC47C7A.
    case 0xC47C7C: cpu.execute_instruction<0x32>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx.asm:23 LOADPTR BUFFER + $3200, @LOCAL00
    case 0xC47C7D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx.asm:23 LOADPTR BUFFER + $3200, @LOCAL00
    // Overlapping static entry reached from 0xC47C7C.
    case 0xC47C7E: cpu.execute_instruction<0x0E>(0x007FA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:23 LOADPTR BUFFER + $3200, @LOCAL00
    case 0xC47C7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:23 LOADPTR BUFFER + $3200, @LOCAL00
    // Overlapping static entry reached from 0xC47C7F.
    case 0xC47C81: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_window_gfx.asm:23 LOADPTR BUFFER + $3200, @LOCAL00
    case 0xC47C82: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/load_window_gfx.asm:24 LDX #1536
    case 0xC47C84: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000600, 3); return true;
    // src/system/load_window_gfx.asm:24 LDX #1536
    // Overlapping static entry reached from 0xC47C84.
    case 0xC47C86: cpu.execute_instruction<0x06>(0x0000E2, 2); return true;
    // src/system/load_window_gfx.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC47C87: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/load_window_gfx.asm:25 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47C86.
    case 0xC47C88: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/system/load_window_gfx.asm:26 LDA #0
    case 0xC47C89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/load_window_gfx.asm:27 JSL MEMSET24
    case 0xC47C8B: cpu.execute_instruction<0x22>(0xC08F15, 4); return true;
    // src/system/load_window_gfx.asm:27 JSL MEMSET24
    // Overlapping static entry reached from 0xC47C89.
    case 0xC47C8C: cpu.execute_instruction<0x15>(0x00008F, 2); return true;
    // src/system/load_window_gfx.asm:27 JSL MEMSET24
    // Overlapping static entry reached from 0xC47C8C.
    case 0xC47C8E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AD, 2); else cpu.execute_instruction<0xC0>(0x00CDAD, 3); return true;
    // src/system/load_window_gfx.asm:29 LDA GAME_STATE+game_state::text_flavour
    case 0xC47C8F: cpu.execute_instruction<0xAD>(0x0099CD, 3); return true;
    // src/system/load_window_gfx.asm:29 LDA GAME_STATE+game_state::text_flavour
    // Overlapping static entry reached from 0xC47C8E.
    case 0xC47C90: cpu.execute_instruction<0xCD>(0x002999, 3); return true;
    // src/system/load_window_gfx.asm:29 LDA GAME_STATE+game_state::text_flavour
    // Overlapping static entry reached from 0xC47C8E.
    case 0xC47C91: cpu.execute_instruction<0x99>(0x00FF29, 3); return true;
    // src/system/load_window_gfx.asm:30 AND #$00FF
    case 0xC47C92: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_window_gfx.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC47C90.
    case 0xC47C93: cpu.execute_instruction<0xFF>(0x853A00, 4); return true;
    // src/system/load_window_gfx.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC47C92.
    case 0xC47C94: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/system/load_window_gfx.asm:31 DEC
    case 0xC47C95: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/system/load_window_gfx.asm:32 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC47C96: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/system/load_window_gfx.asm:32 OPTIMIZED_MULT @VIRTUAL04, 3
    // Overlapping static entry reached from 0xC47C93.
    case 0xC47C97: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/system/load_window_gfx.asm:32 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC47C98: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/system/load_window_gfx.asm:32 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC47C99: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/system/load_window_gfx.asm:33 TAX
    case 0xC47C9B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:34 INX
    case 0xC47C9C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:35 INX
    case 0xC47C9D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:36 LDA f:TEXT_WINDOW_PROPERTIES,X
    case 0xC47C9E: cpu.execute_instruction<0xBF>(0xE01FB9, 4); return true;
    // src/system/load_window_gfx.asm:37 AND #$00FF
    case 0xC47CA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_window_gfx.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC47CA2.
    case 0xC47CA4: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/system/load_window_gfx.asm:38 CMP #8
    case 0xC47CA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/system/load_window_gfx.asm:38 CMP #8
    // Overlapping static entry reached from 0xC47CA5.
    case 0xC47CA7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/system/load_window_gfx.asm:39 BNE @UNKNOWN1
    case 0xC47CA8: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:40 LOADPTR FLAVOURED_TEXT_GFX, @LOCAL00
    case 0xC47CAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000054, 2); else cpu.execute_instruction<0xA9>(0x000754, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:40 LOADPTR FLAVOURED_TEXT_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC47CAA.
    case 0xC47CAC: cpu.execute_instruction<0x07>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx.asm:40 LOADPTR FLAVOURED_TEXT_GFX, @LOCAL00
    case 0xC47CAD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx.asm:40 LOADPTR FLAVOURED_TEXT_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC47CAC.
    case 0xC47CAE: cpu.execute_instruction<0x0E>(0x00E0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:40 LOADPTR FLAVOURED_TEXT_GFX, @LOCAL00
    case 0xC47CAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:40 LOADPTR FLAVOURED_TEXT_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC47CAF.
    case 0xC47CB1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_window_gfx.asm:40 LOADPTR FLAVOURED_TEXT_GFX, @LOCAL00
    case 0xC47CB2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:41 LOADPTR BUFFER + $100, @LOCAL01
    case 0xC47CB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000100, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:41 LOADPTR BUFFER + $100, @LOCAL01
    // Overlapping static entry reached from 0xC47CB4.
    case 0xC47CB6: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx.asm:41 LOADPTR BUFFER + $100, @LOCAL01
    case 0xC47CB7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx.asm:41 LOADPTR BUFFER + $100, @LOCAL01
    // Overlapping static entry reached from 0xC47CB6.
    case 0xC47CB8: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:41 LOADPTR BUFFER + $100, @LOCAL01
    case 0xC47CB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:41 LOADPTR BUFFER + $100, @LOCAL01
    // Overlapping static entry reached from 0xC47CB8.
    case 0xC47CBA: cpu.execute_instruction<0x7F>(0x148500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:41 LOADPTR BUFFER + $100, @LOCAL01
    // Overlapping static entry reached from 0xC47CB9.
    case 0xC47CBB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_window_gfx.asm:41 LOADPTR BUFFER + $100, @LOCAL01
    case 0xC47CBC: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/load_window_gfx.asm:42 JSL DECOMP
    case 0xC47CBE: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:45 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC47CC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000054, 2); else cpu.execute_instruction<0xA9>(0x00F054, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:45 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC47CC2.
    case 0xC47CC4: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx.asm:45 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC47CC5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx.asm:45 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC47CC4.
    case 0xC47CC6: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:45 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC47CC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:45 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC47CC6.
    case 0xC47CC8: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:45 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC47CC7.
    case 0xC47CC9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_window_gfx.asm:45 LOADPTR FONT_PTR_TABLE, @VIRTUAL06
    case 0xC47CCA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/load_window_gfx.asm:46 LDY #(.SIZEOF(font_table_entry) * FONT::BATTLE) + font_table_entry::height
    case 0xC47CCC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000020, 2); else cpu.execute_instruction<0xA0>(0x000020, 3); return true;
    // src/system/load_window_gfx.asm:46 LDY #(.SIZEOF(font_table_entry) * FONT::BATTLE) + font_table_entry::height
    // Overlapping static entry reached from 0xC47CCC.
    case 0xC47CCE: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/system/load_window_gfx.asm:47 LDA [@VIRTUAL06],Y
    case 0xC47CCF: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/system/load_window_gfx.asm:48 STA @LOCAL09
    case 0xC47CD1: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/system/load_window_gfx.asm:49 LDY #(.SIZEOF(font_table_entry) * FONT::BATTLE) + font_table_entry::width
    case 0xC47CD3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000022, 2); else cpu.execute_instruction<0xA0>(0x000022, 3); return true;
    // src/system/load_window_gfx.asm:49 LDY #(.SIZEOF(font_table_entry) * FONT::BATTLE) + font_table_entry::width
    // Overlapping static entry reached from 0xC47CD3.
    case 0xC47CD5: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/system/load_window_gfx.asm:50 LDA [@VIRTUAL06],Y
    case 0xC47CD6: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/system/load_window_gfx.asm:51 STA @LOCAL08
    case 0xC47CD8: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:52 LOADPTR BUFFER + $2A00, @LOCAL07
    case 0xC47CDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002A00, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:52 LOADPTR BUFFER + $2A00, @LOCAL07
    // Overlapping static entry reached from 0xC47CDA.
    case 0xC47CDC: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx.asm:52 LOADPTR BUFFER + $2A00, @LOCAL07
    case 0xC47CDD: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:52 LOADPTR BUFFER + $2A00, @LOCAL07
    case 0xC47CDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:52 LOADPTR BUFFER + $2A00, @LOCAL07
    // Overlapping static entry reached from 0xC47CDF.
    case 0xC47CE1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_window_gfx.asm:52 LOADPTR BUFFER + $2A00, @LOCAL07
    case 0xC47CE2: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/system/load_window_gfx.asm:53 LDA #6
    case 0xC47CE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/system/load_window_gfx.asm:53 LDA #6
    // Overlapping static entry reached from 0xC47CE4.
    case 0xC47CE6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/load_window_gfx.asm:54 STA @LOCAL06
    case 0xC47CE7: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/system/load_window_gfx.asm:55 LDA #0
    case 0xC47CE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/load_window_gfx.asm:55 LDA #0
    // Overlapping static entry reached from 0xC47CE9.
    case 0xC47CEB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/load_window_gfx.asm:56 STA @VIRTUAL04
    case 0xC47CEC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/load_window_gfx.asm:57 JMP @UNKNOWN8
    case 0xC47CEE: cpu.execute_instruction<0x4C>(0x007E27, 3); return true;
    // src/system/load_window_gfx.asm:59 STZ VWF_TILE
    case 0xC47CF1: cpu.execute_instruction<0x9C>(0x009E25, 3); return true;
    // src/system/load_window_gfx.asm:60 STZ VWF_X
    case 0xC47CF4: cpu.execute_instruction<0x9C>(0x009E23, 3); return true;
    // src/system/load_window_gfx.asm:61 SEP #PROC_FLAGS::ACCUM8
    case 0xC47CF7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/load_window_gfx.asm:62 LDA #$00FF
    case 0xC47CF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/system/load_window_gfx.asm:63 STA @LOCAL00
    case 0xC47CFB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/load_window_gfx.asm:63 STA @LOCAL00
    // Overlapping static entry reached from 0xC47CF9.
    case 0xC47CFC: cpu.execute_instruction<0x0E>(0x0040A2, 3); return true;
    // src/system/load_window_gfx.asm:64 LDX #52 * 16
    case 0xC47CFD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000340, 3); return true;
    // src/system/load_window_gfx.asm:64 LDX #52 * 16
    // Overlapping static entry reached from 0xC47CFD.
    case 0xC47CFF: cpu.execute_instruction<0x03>(0x0000C2, 2); return true;
    // src/system/load_window_gfx.asm:65 REP #PROC_FLAGS::ACCUM8
    case 0xC47D00: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/load_window_gfx.asm:65 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC47CFF.
    case 0xC47D01: cpu.execute_instruction<0x20>(0x0092A9, 3); return true;
    // src/system/load_window_gfx.asm:66 LDA #.LOWORD(VWF_BUFFER)
    case 0xC47D02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000092, 2); else cpu.execute_instruction<0xA9>(0x003492, 3); return true;
    // src/system/load_window_gfx.asm:66 LDA #.LOWORD(VWF_BUFFER)
    // Overlapping static entry reached from 0xC47D02.
    case 0xC47D04: cpu.execute_instruction<0x34>(0x000022, 2); return true;
    // src/system/load_window_gfx.asm:67 JSL MEMSET16
    case 0xC47D05: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/system/load_window_gfx.asm:67 JSL MEMSET16
    // Overlapping static entry reached from 0xC47D04.
    case 0xC47D06: cpu.execute_instruction<0xFC>(0x00C08E, 3); return true;
    // src/system/load_window_gfx.asm:68 STZ TEXT_RENDER_STATE + 2
    case 0xC47D09: cpu.execute_instruction<0x9C>(0x009654, 3); return true;
    // src/system/load_window_gfx.asm:69 STZ TEXT_RENDER_STATE
    case 0xC47D0C: cpu.execute_instruction<0x9C>(0x009652, 3); return true;
    // src/system/load_window_gfx.asm:70 LDA @VIRTUAL04
    case 0xC47D0F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/system/load_window_gfx.asm:71 LDY #.SIZEOF(char_struct)
    case 0xC47D11: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/system/load_window_gfx.asm:71 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC47D11.
    case 0xC47D13: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/load_window_gfx.asm:72 JSL MULT168
    case 0xC47D14: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/system/load_window_gfx.asm:73 CLC
    case 0xC47D18: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:74 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC47D19: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/system/load_window_gfx.asm:74 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC47D19.
    case 0xC47D1B: cpu.execute_instruction<0x99>(0x000A85, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/system/load_window_gfx.asm:75 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC47D1C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/system/load_window_gfx.asm:75 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC47D1E: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/system/load_window_gfx.asm:75 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC47D1F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/system/load_window_gfx.asm:75 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC47D21: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/system/load_window_gfx.asm:75 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC47D22: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/system/load_window_gfx.asm:75 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC47D24: cpu.execute_instruction<0x64>(0x00000D, 2); return true;
    // src/system/load_window_gfx.asm:76 REP #PROC_FLAGS::ACCUM8
    case 0xC47D26: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/load_window_gfx.asm:77 LDA #2
    case 0xC47D28: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/system/load_window_gfx.asm:77 LDA #2
    // Overlapping static entry reached from 0xC47D28.
    case 0xC47D2A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/load_window_gfx.asm:78 STA VWF_X
    case 0xC47D2B: cpu.execute_instruction<0x8D>(0x009E23, 3); return true;
    // src/system/load_window_gfx.asm:79 LDA #0
    case 0xC47D2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/load_window_gfx.asm:79 LDA #0
    // Overlapping static entry reached from 0xC47D2E.
    case 0xC47D30: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/load_window_gfx.asm:80 STA @VIRTUAL02
    case 0xC47D31: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/load_window_gfx.asm:81 BRA @UNKNOWN4
    case 0xC47D33: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/system/load_window_gfx.asm:83 AND #$00FF
    case 0xC47D35: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_window_gfx.asm:83 AND #$00FF
    // Overlapping static entry reached from 0xC47D35.
    case 0xC47D37: cpu.execute_instruction<0x00>(0x0000E6, 2); return true;
    // src/system/load_window_gfx.asm:84 INC @VIRTUAL0A
    case 0xC47D38: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/system/load_window_gfx.asm:85 SEC
    case 0xC47D3A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:86 SBC #80
    case 0xC47D3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000050, 2); else cpu.execute_instruction<0xE9>(0x000050, 3); return true;
    // src/system/load_window_gfx.asm:86 SBC #80
    // Overlapping static entry reached from 0xC47D3B.
    case 0xC47D3D: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/system/load_window_gfx.asm:87 AND #$007F
    case 0xC47D3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/system/load_window_gfx.asm:87 AND #$007F
    // Overlapping static entry reached from 0xC47D3E.
    case 0xC47D40: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/system/load_window_gfx.asm:88 TAY
    case 0xC47D41: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx.asm:89 MOVE_INT FONT_PTR_TABLE + (.SIZEOF(font_table_entry) * FONT::BATTLE) + font_table_entry::graphics, @VIRTUAL06
    case 0xC47D42: cpu.execute_instruction<0xAF>(0xC3F070, 4); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx.asm:89 MOVE_INT FONT_PTR_TABLE + (.SIZEOF(font_table_entry) * FONT::BATTLE) + font_table_entry::graphics, @VIRTUAL06
    case 0xC47D46: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx.asm:89 MOVE_INT FONT_PTR_TABLE + (.SIZEOF(font_table_entry) * FONT::BATTLE) + font_table_entry::graphics, @VIRTUAL06
    case 0xC47D48: cpu.execute_instruction<0xAF>(0xC3F072, 4); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx.asm:89 MOVE_INT FONT_PTR_TABLE + (.SIZEOF(font_table_entry) * FONT::BATTLE) + font_table_entry::graphics, @VIRTUAL06
    case 0xC47D4C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/load_window_gfx.asm:90 LDA @LOCAL09
    case 0xC47D4E: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/system/load_window_gfx.asm:91 JSL MULT16
    case 0xC47D50: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/system/load_window_gfx.asm:92 CLC
    case 0xC47D54: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:93 ADC @VIRTUAL06
    case 0xC47D55: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/system/load_window_gfx.asm:94 STA @VIRTUAL06
    case 0xC47D57: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/load_window_gfx.asm:95 STA @LOCAL00
    case 0xC47D59: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/load_window_gfx.asm:96 LDA @VIRTUAL06+2
    case 0xC47D5B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/load_window_gfx.asm:97 STA @LOCAL00+2
    case 0xC47D5D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/load_window_gfx.asm:98 LDX @LOCAL08
    case 0xC47D5F: cpu.execute_instruction<0xA6>(0x000028, 2); return true;
    // src/system/load_window_gfx.asm:99 LDA @LOCAL06
    case 0xC47D61: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/system/load_window_gfx.asm:100 JSL UNKNOWN_C44B3A
    case 0xC47D63: cpu.execute_instruction<0x22>(0xC44B3A, 4); return true;
    // src/system/load_window_gfx.asm:101 INC @VIRTUAL02
    case 0xC47D67: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/system/load_window_gfx.asm:103 LDA [@VIRTUAL0A]
    case 0xC47D69: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/system/load_window_gfx.asm:104 AND #$00FF
    case 0xC47D6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_window_gfx.asm:104 AND #$00FF
    // Overlapping static entry reached from 0xC47D6B.
    case 0xC47D6D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/system/load_window_gfx.asm:105 BNE @UNKNOWN3
    case 0xC47D6E: cpu.execute_instruction<0xD0>(0x0000C5, 2); return true;
    // src/system/load_window_gfx.asm:106 LDY #0
    case 0xC47D70: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/load_window_gfx.asm:106 LDY #0
    // Overlapping static entry reached from 0xC47D70.
    case 0xC47D72: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/system/load_window_gfx.asm:107 STY @LOCAL05
    case 0xC47D73: cpu.execute_instruction<0x84>(0x000020, 2); return true;
    // src/system/load_window_gfx.asm:108 JMP @UNKNOWN6
    case 0xC47D75: cpu.execute_instruction<0x4C>(0x007E1B, 3); return true;
    // src/system/load_window_gfx.asm:110 TYA
    case 0xC47D78: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:111 ASL
    case 0xC47D79: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:112 ASL
    case 0xC47D7A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:113 ASL
    case 0xC47D7B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:114 ASL
    case 0xC47D7C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:115 STA @VIRTUAL02
    case 0xC47D7D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/load_window_gfx.asm:116 LDA @VIRTUAL04
    case 0xC47D7F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/system/load_window_gfx.asm:117 ASL
    case 0xC47D81: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:118 ASL
    case 0xC47D82: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:119 ASL
    case 0xC47D83: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:120 ASL
    case 0xC47D84: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:121 ASL
    case 0xC47D85: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:122 ASL
    case 0xC47D86: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:123 CLC
    case 0xC47D87: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:124 ADC @VIRTUAL02
    case 0xC47D88: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/system/load_window_gfx.asm:125 TAX
    case 0xC47D8A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:126 STX @LOCAL04
    case 0xC47D8B: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/load_window_gfx.asm:127 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC47D8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000092, 2); else cpu.execute_instruction<0xA9>(0x003492, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/system/load_window_gfx.asm:127 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC47D8D.
    case 0xC47D8F: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/system/load_window_gfx.asm:127 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC47D90: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/system/load_window_gfx.asm:127 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC47D8F.
    case 0xC47D91: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/system/load_window_gfx.asm:127 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC47D92: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/system/load_window_gfx.asm:127 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC47D93: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/system/load_window_gfx.asm:127 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC47D95: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/system/load_window_gfx.asm:127 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC47D96: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/system/load_window_gfx.asm:127 PROMOTENEARPTR VWF_BUFFER, @VIRTUAL06
    case 0xC47D98: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/system/load_window_gfx.asm:128 REP #PROC_FLAGS::ACCUM8
    case 0xC47D9A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx.asm:129 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC47D9C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx.asm:129 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC47D9E: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx.asm:129 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC47DA0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx.asm:129 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC47DA2: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/system/load_window_gfx.asm:130 TYA
    case 0xC47DA4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:131 ASL
    case 0xC47DA5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:132 ASL
    case 0xC47DA6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:133 ASL
    case 0xC47DA7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:134 ASL
    case 0xC47DA8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:135 ASL
    case 0xC47DA9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:136 STA @VIRTUAL02
    case 0xC47DAA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx.asm:137 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC47DAC: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx.asm:137 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC47DAE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx.asm:137 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC47DB0: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx.asm:137 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC47DB2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/load_window_gfx.asm:138 TXA
    case 0xC47DB4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:139 CLC
    case 0xC47DB5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:140 ADC @VIRTUAL06
    case 0xC47DB6: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/system/load_window_gfx.asm:141 STA @VIRTUAL06
    case 0xC47DB8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/load_window_gfx.asm:142 STA @LOCAL00
    case 0xC47DBA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/load_window_gfx.asm:143 LDA @VIRTUAL06+2
    case 0xC47DBC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/load_window_gfx.asm:144 STA @LOCAL00+2
    case 0xC47DBE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/load_window_gfx.asm:145 LDA @VIRTUAL02
    case 0xC47DC0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/system/load_window_gfx.asm:146 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC47DC2: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/system/load_window_gfx.asm:146 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC47DC4: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/system/load_window_gfx.asm:146 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC47DC6: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/system/load_window_gfx.asm:146 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC47DC8: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/system/load_window_gfx.asm:147 CLC
    case 0xC47DCA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:148 ADC @VIRTUAL06
    case 0xC47DCB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/system/load_window_gfx.asm:149 STA @VIRTUAL06
    case 0xC47DCD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/load_window_gfx.asm:150 STA @LOCAL01
    case 0xC47DCF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/system/load_window_gfx.asm:151 LDA @VIRTUAL06+2
    case 0xC47DD1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/load_window_gfx.asm:152 STA @LOCAL01+2
    case 0xC47DD3: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/load_window_gfx.asm:153 LDA #16
    case 0xC47DD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/system/load_window_gfx.asm:153 LDA #16
    // Overlapping static entry reached from 0xC47DD5.
    case 0xC47DD7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/load_window_gfx.asm:154 JSL MEMCPY24
    case 0xC47DD8: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx.asm:155 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC47DDC: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx.asm:155 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC47DDE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx.asm:155 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC47DE0: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx.asm:155 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC47DE2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/load_window_gfx.asm:156 LDX @LOCAL04
    case 0xC47DE4: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/system/load_window_gfx.asm:157 TXA
    case 0xC47DE6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:158 CLC
    case 0xC47DE7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:159 ADC #256
    case 0xC47DE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000100, 3); return true;
    // src/system/load_window_gfx.asm:159 ADC #256
    // Overlapping static entry reached from 0xC47DE8.
    case 0xC47DEA: cpu.execute_instruction<0x01>(0x000018, 2); return true;
    // src/system/load_window_gfx.asm:160 CLC
    case 0xC47DEB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:161 ADC @VIRTUAL06
    case 0xC47DEC: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/system/load_window_gfx.asm:162 STA @VIRTUAL06
    case 0xC47DEE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/load_window_gfx.asm:163 STA @LOCAL00
    case 0xC47DF0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/load_window_gfx.asm:164 LDA @VIRTUAL06+2
    case 0xC47DF2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/load_window_gfx.asm:165 STA @LOCAL00+2
    case 0xC47DF4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/load_window_gfx.asm:166 LDA @VIRTUAL02
    case 0xC47DF6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/load_window_gfx.asm:167 CLC
    case 0xC47DF8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:168 ADC #16
    case 0xC47DF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/system/load_window_gfx.asm:168 ADC #16
    // Overlapping static entry reached from 0xC47DF9.
    case 0xC47DFB: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/system/load_window_gfx.asm:169 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC47DFC: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/system/load_window_gfx.asm:169 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC47DFE: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/system/load_window_gfx.asm:169 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC47E00: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/system/load_window_gfx.asm:169 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC47E02: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/system/load_window_gfx.asm:170 CLC
    case 0xC47E04: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:171 ADC @VIRTUAL06
    case 0xC47E05: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/system/load_window_gfx.asm:172 STA @VIRTUAL06
    case 0xC47E07: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/load_window_gfx.asm:173 STA @LOCAL01
    case 0xC47E09: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/system/load_window_gfx.asm:174 LDA @VIRTUAL06+2
    case 0xC47E0B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/load_window_gfx.asm:175 STA @LOCAL01+2
    case 0xC47E0D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/load_window_gfx.asm:176 LDA #16
    case 0xC47E0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/system/load_window_gfx.asm:176 LDA #16
    // Overlapping static entry reached from 0xC47E0F.
    case 0xC47E11: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/load_window_gfx.asm:177 JSL MEMCPY24
    case 0xC47E12: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/system/load_window_gfx.asm:178 LDY @LOCAL05
    case 0xC47E16: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/system/load_window_gfx.asm:179 INY
    case 0xC47E18: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:180 STY @LOCAL05
    case 0xC47E19: cpu.execute_instruction<0x84>(0x000020, 2); return true;
    // src/system/load_window_gfx.asm:182 CPY #4
    case 0xC47E1B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000004, 2); else cpu.execute_instruction<0xC0>(0x000004, 3); return true;
    // src/system/load_window_gfx.asm:182 CPY #4
    // Overlapping static entry reached from 0xC47E1B.
    case 0xC47E1D: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/system/load_window_gfx.asm:183 BCCL @UNKNOWN5
    case 0xC47E1E: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/system/load_window_gfx.asm:183 BCCL @UNKNOWN5
    case 0xC47E20: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/system/load_window_gfx.asm:183 BCCL @UNKNOWN5
    case 0xC47E22: cpu.execute_instruction<0x4C>(0x007D78, 3); return true;
    // src/system/load_window_gfx.asm:184 INC @VIRTUAL04
    case 0xC47E25: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/system/load_window_gfx.asm:186 LDA @VIRTUAL04
    case 0xC47E27: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/system/load_window_gfx.asm:187 CMP #4
    case 0xC47E29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/system/load_window_gfx.asm:187 CMP #4
    // Overlapping static entry reached from 0xC47E29.
    case 0xC47E2B: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/system/load_window_gfx.asm:188 BCCL @UNKNOWN2
    case 0xC47E2C: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/system/load_window_gfx.asm:188 BCCL @UNKNOWN2
    case 0xC47E2E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/system/load_window_gfx.asm:188 BCCL @UNKNOWN2
    case 0xC47E30: cpu.execute_instruction<0x4C>(0x007CF1, 3); return true;
    // src/system/load_window_gfx.asm:189 LDY #0
    case 0xC47E33: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/load_window_gfx.asm:189 LDY #0
    // Overlapping static entry reached from 0xC47E33.
    case 0xC47E35: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/system/load_window_gfx.asm:190 BRA @UNKNOWN13
    case 0xC47E36: cpu.execute_instruction<0x80>(0x000065, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:192 LOADPTR BUFFER + $70, @VIRTUAL06
    case 0xC47E38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000070, 2); else cpu.execute_instruction<0xA9>(0x000070, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:192 LOADPTR BUFFER + $70, @VIRTUAL06
    // Overlapping static entry reached from 0xC47E38.
    case 0xC47E3A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx.asm:192 LOADPTR BUFFER + $70, @VIRTUAL06
    case 0xC47E3B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:192 LOADPTR BUFFER + $70, @VIRTUAL06
    case 0xC47E3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:192 LOADPTR BUFFER + $70, @VIRTUAL06
    // Overlapping static entry reached from 0xC47E3D.
    case 0xC47E3F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_window_gfx.asm:192 LOADPTR BUFFER + $70, @VIRTUAL06
    case 0xC47E40: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx.asm:193 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC47E42: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx.asm:193 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC47E44: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx.asm:193 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC47E46: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx.asm:193 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC47E48: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/system/load_window_gfx.asm:194 LDX #0
    case 0xC47E4A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/load_window_gfx.asm:194 LDX #0
    // Overlapping static entry reached from 0xC47E4A.
    case 0xC47E4C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/system/load_window_gfx.asm:195 BRA @UNKNOWN12
    case 0xC47E4D: cpu.execute_instruction<0x80>(0x000048, 2); return true;
    // src/system/load_window_gfx.asm:197 LDA [@LOCAL07]
    case 0xC47E4F: cpu.execute_instruction<0xA7>(0x000024, 2); return true;
    // src/system/load_window_gfx.asm:198 STA @LOCAL04
    case 0xC47E51: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/system/load_window_gfx.asm:199 XBA
    case 0xC47E53: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:200 AND #$00FF
    case 0xC47E54: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_window_gfx.asm:200 AND #$00FF
    // Overlapping static entry reached from 0xC47E54.
    case 0xC47E56: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/system/load_window_gfx.asm:201 EOR #$00FF
    case 0xC47E57: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0000FF, 3); return true;
    // src/system/load_window_gfx.asm:201 EOR #$00FF
    // Overlapping static entry reached from 0xC47E57.
    case 0xC47E59: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/load_window_gfx.asm:202 STA @VIRTUAL02
    case 0xC47E5A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/load_window_gfx.asm:203 LDA [@VIRTUAL06]
    case 0xC47E5C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/load_window_gfx.asm:204 AND #$00FF
    case 0xC47E5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_window_gfx.asm:204 AND #$00FF
    // Overlapping static entry reached from 0xC47E5E.
    case 0xC47E60: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/load_window_gfx.asm:205 STA @VIRTUAL04
    case 0xC47E61: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/load_window_gfx.asm:206 LDA @LOCAL04
    case 0xC47E63: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/system/load_window_gfx.asm:207 AND #$FF00
    case 0xC47E65: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/system/load_window_gfx.asm:207 AND #$FF00
    // Overlapping static entry reached from 0xC47E65.
    case 0xC47E67: cpu.execute_instruction<0xFF>(0x050405, 4); return true;
    // src/system/load_window_gfx.asm:208 ORA @VIRTUAL04
    case 0xC47E68: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/system/load_window_gfx.asm:209 ORA @VIRTUAL02
    case 0xC47E6A: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/system/load_window_gfx.asm:209 ORA @VIRTUAL02
    // Overlapping static entry reached from 0xC47E67.
    case 0xC47E6B: cpu.execute_instruction<0x02>(0x000087, 2); return true;
    // src/system/load_window_gfx.asm:210 STA [@LOCAL07]
    case 0xC47E6C: cpu.execute_instruction<0x87>(0x000024, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx.asm:211 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC47E6E: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx.asm:211 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC47E70: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx.asm:211 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC47E72: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx.asm:211 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC47E74: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/load_window_gfx.asm:212 INC @VIRTUAL06
    case 0xC47E76: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/load_window_gfx.asm:213 INC @VIRTUAL06
    case 0xC47E78: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx.asm:214 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC47E7A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx.asm:214 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC47E7C: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx.asm:214 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC47E7E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx.asm:214 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC47E80: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx.asm:215 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC47E82: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx.asm:215 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC47E84: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx.asm:215 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC47E86: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx.asm:215 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC47E88: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/load_window_gfx.asm:216 INC @VIRTUAL06
    case 0xC47E8A: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/load_window_gfx.asm:217 INC @VIRTUAL06
    case 0xC47E8C: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx.asm:218 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC47E8E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx.asm:218 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC47E90: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx.asm:218 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC47E92: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx.asm:218 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC47E94: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/system/load_window_gfx.asm:219 INX
    case 0xC47E96: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:221 CPX #8
    case 0xC47E97: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000008, 2); else cpu.execute_instruction<0xE0>(0x000008, 3); return true;
    // src/system/load_window_gfx.asm:221 CPX #8
    // Overlapping static entry reached from 0xC47E97.
    case 0xC47E99: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/load_window_gfx.asm:222 BCC @UNKNOWN11
    case 0xC47E9A: cpu.execute_instruction<0x90>(0x0000B3, 2); return true;
    // src/system/load_window_gfx.asm:223 INY
    case 0xC47E9C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:225 CPY #32
    case 0xC47E9D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/system/load_window_gfx.asm:225 CPY #32
    // Overlapping static entry reached from 0xC47E9D.
    case 0xC47E9F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/load_window_gfx.asm:226 BCC @UNKNOWN10
    case 0xC47EA0: cpu.execute_instruction<0x90>(0x000096, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:227 LOADPTR BUFFER + $2C00, @LOCAL02
    case 0xC47EA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002C00, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:227 LOADPTR BUFFER + $2C00, @LOCAL02
    // Overlapping static entry reached from 0xC47EA2.
    case 0xC47EA4: cpu.execute_instruction<0x2C>(0x001685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx.asm:227 LOADPTR BUFFER + $2C00, @LOCAL02
    case 0xC47EA5: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:227 LOADPTR BUFFER + $2C00, @LOCAL02
    case 0xC47EA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:227 LOADPTR BUFFER + $2C00, @LOCAL02
    // Overlapping static entry reached from 0xC47EA7.
    case 0xC47EA9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_window_gfx.asm:227 LOADPTR BUFFER + $2C00, @LOCAL02
    case 0xC47EAA: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:228 LOADPTR STATUS_EQUIP_WINDOW_TEXT_2, @LOCAL07
    case 0xC47EAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x005A89, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:228 LOADPTR STATUS_EQUIP_WINDOW_TEXT_2, @LOCAL07
    // Overlapping static entry reached from 0xC47EAC.
    case 0xC47EAE: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx.asm:228 LOADPTR STATUS_EQUIP_WINDOW_TEXT_2, @LOCAL07
    case 0xC47EAF: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:228 LOADPTR STATUS_EQUIP_WINDOW_TEXT_2, @LOCAL07
    case 0xC47EB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:228 LOADPTR STATUS_EQUIP_WINDOW_TEXT_2, @LOCAL07
    // Overlapping static entry reached from 0xC47EB1.
    case 0xC47EB3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_window_gfx.asm:228 LOADPTR STATUS_EQUIP_WINDOW_TEXT_2, @LOCAL07
    case 0xC47EB4: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/system/load_window_gfx.asm:229 JMP @UNKNOWN19
    case 0xC47EB6: cpu.execute_instruction<0x4C>(0x007F7E, 3); return true;
    // src/system/load_window_gfx.asm:231 CMP #32
    case 0xC47EB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/system/load_window_gfx.asm:231 CMP #32
    // Overlapping static entry reached from 0xC47EB9.
    case 0xC47EBB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/load_window_gfx.asm:232 BEQL @UNKNOWN18
    case 0xC47EBC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/load_window_gfx.asm:232 BEQL @UNKNOWN18
    case 0xC47EBE: cpu.execute_instruction<0x4C>(0x007F6A, 3); return true;
    // src/system/load_window_gfx.asm:233 STA @VIRTUAL02
    case 0xC47EC1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/load_window_gfx.asm:234 AND #$FFF0
    case 0xC47EC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x00FFF0, 3); return true;
    // src/system/load_window_gfx.asm:234 AND #$FFF0
    // Overlapping static entry reached from 0xC47EC3.
    case 0xC47EC5: cpu.execute_instruction<0xFF>(0x026518, 4); return true;
    // src/system/load_window_gfx.asm:235 CLC
    case 0xC47EC6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:236 ADC @VIRTUAL02
    case 0xC47EC7: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/system/load_window_gfx.asm:237 ASL
    case 0xC47EC9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:238 ASL
    case 0xC47ECA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:239 ASL
    case 0xC47ECB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:240 ASL
    case 0xC47ECC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/load_window_gfx.asm:241 STORE_INT1632 @VIRTUAL0A
    case 0xC47ECD: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/load_window_gfx.asm:241 STORE_INT1632 @VIRTUAL0A
    case 0xC47ECF: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/system/load_window_gfx.asm:242 CLC
    case 0xC47ED1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/system/load_window_gfx.asm:243 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL0A
    case 0xC47ED2: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/load_window_gfx.asm:243 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL0A
    case 0xC47ED4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000000, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/load_window_gfx.asm:243 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC47ED4.
    case 0xC47ED6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/system/load_window_gfx.asm:243 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL0A
    case 0xC47ED7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/system/load_window_gfx.asm:243 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL0A
    case 0xC47ED9: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/load_window_gfx.asm:243 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL0A
    case 0xC47EDB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/load_window_gfx.asm:243 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC47EDB.
    case 0xC47EDD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/system/load_window_gfx.asm:243 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL0A
    case 0xC47EDE: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:244 LOADPTR BUFFER + $70, @VIRTUAL06
    case 0xC47EE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000070, 2); else cpu.execute_instruction<0xA9>(0x000070, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:244 LOADPTR BUFFER + $70, @VIRTUAL06
    // Overlapping static entry reached from 0xC47EE0.
    case 0xC47EE2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx.asm:244 LOADPTR BUFFER + $70, @VIRTUAL06
    case 0xC47EE3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:244 LOADPTR BUFFER + $70, @VIRTUAL06
    case 0xC47EE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx.asm:244 LOADPTR BUFFER + $70, @VIRTUAL06
    // Overlapping static entry reached from 0xC47EE5.
    case 0xC47EE7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_window_gfx.asm:244 LOADPTR BUFFER + $70, @VIRTUAL06
    case 0xC47EE8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx.asm:245 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC47EEA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx.asm:245 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC47EEC: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx.asm:245 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC47EEE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx.asm:245 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC47EF0: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/system/load_window_gfx.asm:246 LDX #0
    case 0xC47EF2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/load_window_gfx.asm:246 LDX #0
    // Overlapping static entry reached from 0xC47EF2.
    case 0xC47EF4: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/system/load_window_gfx.asm:247 BRA @UNKNOWN17
    case 0xC47EF5: cpu.execute_instruction<0x80>(0x00006E, 2); return true;
    // src/system/load_window_gfx.asm:249 LDA [@VIRTUAL0A]
    case 0xC47EF7: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/system/load_window_gfx.asm:250 STA @LOCAL04
    case 0xC47EF9: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/system/load_window_gfx.asm:251 XBA
    case 0xC47EFB: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:252 AND #$00FF
    case 0xC47EFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_window_gfx.asm:252 AND #$00FF
    // Overlapping static entry reached from 0xC47EFC.
    case 0xC47EFE: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/system/load_window_gfx.asm:253 EOR #$00FF
    case 0xC47EFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0000FF, 3); return true;
    // src/system/load_window_gfx.asm:253 EOR #$00FF
    // Overlapping static entry reached from 0xC47EFF.
    case 0xC47F01: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/load_window_gfx.asm:254 STA @VIRTUAL02
    case 0xC47F02: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/load_window_gfx.asm:255 LDA [@VIRTUAL06]
    case 0xC47F04: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/load_window_gfx.asm:256 AND #$00FF
    case 0xC47F06: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_window_gfx.asm:256 AND #$00FF
    // Overlapping static entry reached from 0xC47F06.
    case 0xC47F08: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/load_window_gfx.asm:257 STA @VIRTUAL04
    case 0xC47F09: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/load_window_gfx.asm:258 LDA @LOCAL04
    case 0xC47F0B: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/system/load_window_gfx.asm:259 AND #$FF00
    case 0xC47F0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/system/load_window_gfx.asm:259 AND #$FF00
    // Overlapping static entry reached from 0xC47F0D.
    case 0xC47F0F: cpu.execute_instruction<0xFF>(0x050405, 4); return true;
    // src/system/load_window_gfx.asm:260 ORA @VIRTUAL04
    case 0xC47F10: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/system/load_window_gfx.asm:261 ORA @VIRTUAL02
    case 0xC47F12: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/system/load_window_gfx.asm:261 ORA @VIRTUAL02
    // Overlapping static entry reached from 0xC47F0F.
    case 0xC47F13: cpu.execute_instruction<0x02>(0x000087, 2); return true;
    // src/system/load_window_gfx.asm:262 STA [@LOCAL02]
    case 0xC47F14: cpu.execute_instruction<0x87>(0x000016, 2); return true;
    // src/system/load_window_gfx.asm:263 LDY #256
    case 0xC47F16: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000100, 3); return true;
    // src/system/load_window_gfx.asm:263 LDY #256
    // Overlapping static entry reached from 0xC47F16.
    case 0xC47F18: cpu.execute_instruction<0x01>(0x0000B7, 2); return true;
    // src/system/load_window_gfx.asm:264 LDA [@VIRTUAL0A],Y
    case 0xC47F19: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/system/load_window_gfx.asm:264 LDA [@VIRTUAL0A],Y
    // Overlapping static entry reached from 0xC47F18.
    case 0xC47F1A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:265 STA @LOCAL04
    case 0xC47F1B: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/system/load_window_gfx.asm:266 XBA
    case 0xC47F1D: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:267 AND #$00FF
    case 0xC47F1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_window_gfx.asm:267 AND #$00FF
    // Overlapping static entry reached from 0xC47F1E.
    case 0xC47F20: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/system/load_window_gfx.asm:268 EOR #$00FF
    case 0xC47F21: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0000FF, 3); return true;
    // src/system/load_window_gfx.asm:268 EOR #$00FF
    // Overlapping static entry reached from 0xC47F21.
    case 0xC47F23: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/load_window_gfx.asm:269 STA @VIRTUAL02
    case 0xC47F24: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/load_window_gfx.asm:270 LDA [@VIRTUAL06],Y
    case 0xC47F26: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/system/load_window_gfx.asm:271 AND #$00FF
    case 0xC47F28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_window_gfx.asm:271 AND #$00FF
    // Overlapping static entry reached from 0xC47F28.
    case 0xC47F2A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/load_window_gfx.asm:272 STA @VIRTUAL04
    case 0xC47F2B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/load_window_gfx.asm:273 LDA @LOCAL04
    case 0xC47F2D: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/system/load_window_gfx.asm:274 AND #$FF00
    case 0xC47F2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/system/load_window_gfx.asm:274 AND #$FF00
    // Overlapping static entry reached from 0xC47F2F.
    case 0xC47F31: cpu.execute_instruction<0xFF>(0x050405, 4); return true;
    // src/system/load_window_gfx.asm:275 ORA @VIRTUAL04
    case 0xC47F32: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/system/load_window_gfx.asm:276 ORA @VIRTUAL02
    case 0xC47F34: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/system/load_window_gfx.asm:276 ORA @VIRTUAL02
    // Overlapping static entry reached from 0xC47F31.
    case 0xC47F35: cpu.execute_instruction<0x02>(0x000097, 2); return true;
    // src/system/load_window_gfx.asm:277 STA [@LOCAL02],Y
    case 0xC47F36: cpu.execute_instruction<0x97>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx.asm:278 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC47F38: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx.asm:278 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC47F3A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx.asm:278 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC47F3C: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx.asm:278 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC47F3E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/load_window_gfx.asm:279 INC @VIRTUAL06
    case 0xC47F40: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/load_window_gfx.asm:280 INC @VIRTUAL06
    case 0xC47F42: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx.asm:281 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC47F44: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx.asm:281 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC47F46: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx.asm:281 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC47F48: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx.asm:281 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC47F4A: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/system/load_window_gfx.asm:282 INC @VIRTUAL0A
    case 0xC47F4C: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/system/load_window_gfx.asm:283 INC @VIRTUAL0A
    case 0xC47F4E: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx.asm:284 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC47F50: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx.asm:284 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC47F52: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx.asm:284 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC47F54: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx.asm:284 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC47F56: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/load_window_gfx.asm:285 INC @VIRTUAL06
    case 0xC47F58: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/load_window_gfx.asm:286 INC @VIRTUAL06
    case 0xC47F5A: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx.asm:287 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC47F5C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx.asm:287 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC47F5E: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx.asm:287 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC47F60: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx.asm:287 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC47F62: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/system/load_window_gfx.asm:288 INX
    case 0xC47F64: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/load_window_gfx.asm:290 CPX #8
    case 0xC47F65: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000008, 2); else cpu.execute_instruction<0xE0>(0x000008, 3); return true;
    // src/system/load_window_gfx.asm:290 CPX #8
    // Overlapping static entry reached from 0xC47F65.
    case 0xC47F67: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/load_window_gfx.asm:291 BCC @UNKNOWN16
    case 0xC47F68: cpu.execute_instruction<0x90>(0x00008D, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx.asm:293 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC47F6A: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx.asm:293 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC47F6C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx.asm:293 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC47F6E: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx.asm:293 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC47F70: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/load_window_gfx.asm:294 INC @VIRTUAL06
    case 0xC47F72: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/load_window_gfx.asm:295 INC @VIRTUAL06
    case 0xC47F74: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx.asm:296 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC47F76: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx.asm:296 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC47F78: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx.asm:296 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC47F7A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx.asm:296 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC47F7C: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/system/load_window_gfx.asm:298 LDA [@LOCAL07]
    case 0xC47F7E: cpu.execute_instruction<0xA7>(0x000024, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/system/load_window_gfx.asm:299 BNEL @UNKNOWN14
    case 0xC47F80: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/system/load_window_gfx.asm:299 BNEL @UNKNOWN14
    case 0xC47F82: cpu.execute_instruction<0x4C>(0x007EB9, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/load_window_gfx.asm:300 END_C_FUNCTION
    case 0xC47F85: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/load_window_gfx.asm:300 END_C_FUNCTION
    case 0xC47F86: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/longjmp.asm (source_named).
bool execute_system_longjmp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/longjmp.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08F68: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/longjmp.asm:4 TAY
    case 0xC08F6A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/longjmp.asm:5 PEA $0000
    case 0xC08F6B: cpu.execute_instruction<0xF4>(0x000000, 3); return true;
    // src/system/longjmp.asm:6 PLB
    case 0xC08F6E: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/longjmp.asm:7 PLB
    case 0xC08F6F: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/longjmp.asm:8 LDA __BSS_START__+7,Y
    case 0xC08F70: cpu.execute_instruction<0xB9>(0x000007, 3); return true;
    // src/system/longjmp.asm:9 TCS
    case 0xC08F73: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/system/longjmp.asm:10 LDA __BSS_START__+5,Y
    case 0xC08F74: cpu.execute_instruction<0xB9>(0x000005, 3); return true;
    // src/system/longjmp.asm:11 TCD
    case 0xC08F77: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/longjmp.asm:12 LDA __BSS_START__+3,Y
    case 0xC08F78: cpu.execute_instruction<0xB9>(0x000003, 3); return true;
    // src/system/longjmp.asm:13 PHA
    case 0xC08F7B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/longjmp.asm:14 PLP
    case 0xC08F7C: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/longjmp.asm:15 PLP
    case 0xC08F7D: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/longjmp.asm:16 LDA __BSS_START__,Y
    case 0xC08F7E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/system/longjmp.asm:17 STA $01,S
    case 0xC08F81: cpu.execute_instruction<0x83>(0x000001, 2); return true;
    // src/system/longjmp.asm:18 LDA __BSS_START__+2,Y
    case 0xC08F83: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // src/system/longjmp.asm:19 STA $03,S
    case 0xC08F86: cpu.execute_instruction<0x83>(0x000003, 2); return true;
    // src/system/longjmp.asm:20 PLB
    case 0xC08F88: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/longjmp.asm:21 TXA
    case 0xC08F89: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/longjmp.asm:22 RTL
    case 0xC08F8A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/main.asm (source_named).
bool execute_system_main_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/main.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0B7D8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/main.asm:6 END_STACK_VARS
    case 0xC0B7DA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/main.asm:6 END_STACK_VARS
    case 0xC0B7DB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/main.asm:6 END_STACK_VARS
    case 0xC0B7DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/main.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0B7DC.
    case 0xC0B7DE: cpu.execute_instruction<0xFF>(0x17225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/main.asm:6 END_STACK_VARS
    case 0xC0B7DF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/main.asm:7 JSL UNKNOWN_C43317
    case 0xC0B7E0: cpu.execute_instruction<0x22>(0xC43317, 4); return true;
    // src/system/main.asm:7 JSL UNKNOWN_C43317
    // Overlapping static entry reached from 0xC0B7DE.
    case 0xC0B7E2: cpu.execute_instruction<0x33>(0x0000C4, 2); return true;
    // src/system/main.asm:8 LDA #.LOWORD(JMP_BUF1)
    case 0xC0B7E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000A20, 3); return true;
    // src/system/main.asm:8 LDA #.LOWORD(JMP_BUF1)
    // Overlapping static entry reached from 0xC0B7E4.
    case 0xC0B7E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/main.asm:9 JSL SETJMP
    case 0xC0B7E7: cpu.execute_instruction<0x22>(0xC08F42, 4); return true;
    // src/system/main.asm:10 JSL INIT_INTRO
    case 0xC0B7EB: cpu.execute_instruction<0x22>(0xC4DAD2, 4); return true;
    // src/system/main.asm:11 JSR FILE_SELECT_INIT
    case 0xC0B7EF: cpu.execute_instruction<0x20>(0x00B525, 3); return true;
    // src/system/main.asm:12 JSR UNKNOWN_C0B67F
    case 0xC0B7F2: cpu.execute_instruction<0x20>(0x00B67F, 3); return true;
    // src/system/main.asm:13 JSL OAM_CLEAR
    case 0xC0B7F5: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/system/main.asm:14 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC0B7F9: cpu.execute_instruction<0x22>(0xC09466, 4); return true;
    // src/system/main.asm:15 LDX #1
    case 0xC0B7FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/system/main.asm:15 LDX #1
    // Overlapping static entry reached from 0xC0B7FD.
    case 0xC0B7FF: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/system/main.asm:16 TXA
    case 0xC0B800: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/main.asm:17 JSL FADE_IN
    case 0xC0B801: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/system/main.asm:18 JSL UPDATE_SCREEN
    case 0xC0B805: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/system/main.asm:20 LDA #.LOWORD(JMP_BUF2)
    case 0xC0B809: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002A, 2); else cpu.execute_instruction<0xA9>(0x000A2A, 3); return true;
    // src/system/main.asm:20 LDA #.LOWORD(JMP_BUF2)
    // Overlapping static entry reached from 0xC0B809.
    case 0xC0B80B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/main.asm:21 JSL SETJMP
    case 0xC0B80C: cpu.execute_instruction<0x22>(0xC08F42, 4); return true;
    // src/system/main.asm:22 JSL UNKNOWN_C43F53
    case 0xC0B810: cpu.execute_instruction<0x22>(0xC43F53, 4); return true;
    // src/system/main.asm:25 JSL OAM_CLEAR
    case 0xC0B814: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/system/main.asm:26 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC0B818: cpu.execute_instruction<0x22>(0xC09466, 4); return true;
    // src/system/main.asm:27 JSL UPDATE_SCREEN
    case 0xC0B81C: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/system/main.asm:28 JSL UNKNOWN_C4A7B0
    case 0xC0B820: cpu.execute_instruction<0x22>(0xC4A7B0, 4); return true;
    // src/system/main.asm:29 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0B824: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/system/main.asm:30 LDA CURRENT_QUEUED_INTERACTION
    case 0xC0B828: cpu.execute_instruction<0xAD>(0x005E02, 3); return true;
    // src/system/main.asm:31 SEC
    case 0xC0B82B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/main.asm:32 SBC NEXT_QUEUED_INTERACTION
    case 0xC0B82C: cpu.execute_instruction<0xED>(0x005E04, 3); return true;
    // src/system/main.asm:33 BEQ @UNKNOWN1
    case 0xC0B82F: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/system/main.asm:34 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0B831: cpu.execute_instruction<0xAD>(0x005D60, 3); return true;
    // src/system/main.asm:35 BNE @UNKNOWN1
    case 0xC0B834: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/system/main.asm:36 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC0B836: cpu.execute_instruction<0xAD>(0x004DBA, 3); return true;
    // src/system/main.asm:37 BNE @UNKNOWN1
    case 0xC0B839: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/system/main.asm:38 LDA BATTLE_MODE
    case 0xC0B83B: cpu.execute_instruction<0xAD>(0x004DC2, 3); return true;
    // src/system/main.asm:39 BNE @UNKNOWN1
    case 0xC0B83E: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/system/main.asm:40 JSL PROCESS_QUEUED_INTERACTIONS
    case 0xC0B840: cpu.execute_instruction<0x22>(0xC075DD, 4); return true;
    // src/system/main.asm:41 INC INPUT_DISABLE_FRAME_COUNTER
    case 0xC0B844: cpu.execute_instruction<0xEE>(0x005D74, 3); return true;
    // src/system/main.asm:42 JMP @UNKNOWN20
    case 0xC0B847: cpu.execute_instruction<0x4C>(0x00B95E, 3); return true;
    // src/system/main.asm:44 LDA GAME_STATE + game_state::unknownB0
    case 0xC0B84A: cpu.execute_instruction<0xAD>(0x0098A5, 3); return true;
    // src/system/main.asm:45 CMP #2
    case 0xC0B84D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/system/main.asm:45 CMP #2
    // Overlapping static entry reached from 0xC0B84D.
    case 0xC0B84F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/main.asm:46 BEQL @UNKNOWN20
    case 0xC0B850: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/main.asm:46 BEQL @UNKNOWN20
    case 0xC0B852: cpu.execute_instruction<0x4C>(0x00B95E, 3); return true;
    // src/system/main.asm:47 LDX GAME_STATE+game_state::walking_style
    case 0xC0B855: cpu.execute_instruction<0xAE>(0x009883, 3); return true;
    // src/system/main.asm:48 CPX #WALKING_STYLE::ESCALATOR
    case 0xC0B858: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00000C, 2); else cpu.execute_instruction<0xE0>(0x00000C, 3); return true;
    // src/system/main.asm:48 CPX #WALKING_STYLE::ESCALATOR
    // Overlapping static entry reached from 0xC0B858.
    case 0xC0B85A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/main.asm:49 BEQL @UNKNOWN20
    case 0xC0B85B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/main.asm:49 BEQL @UNKNOWN20
    case 0xC0B85D: cpu.execute_instruction<0x4C>(0x00B95E, 3); return true;
    // src/system/main.asm:50 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0B860: cpu.execute_instruction<0xAD>(0x005D60, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/system/main.asm:51 BNEL @UNKNOWN20
    case 0xC0B863: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/system/main.asm:51 BNEL @UNKNOWN20
    case 0xC0B865: cpu.execute_instruction<0x4C>(0x00B95E, 3); return true;
    // src/system/main.asm:52 LDA BATTLE_MODE
    case 0xC0B868: cpu.execute_instruction<0xAD>(0x004DC2, 3); return true;
    // src/system/main.asm:53 BEQ @UNKNOWN5
    case 0xC0B86B: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/system/main.asm:54 JSL INIT_BATTLE_OVERWORLD
    case 0xC0B86D: cpu.execute_instruction<0x22>(0xC0B731, 4); return true;
    // src/system/main.asm:55 INC INPUT_DISABLE_FRAME_COUNTER
    case 0xC0B871: cpu.execute_instruction<0xEE>(0x005D74, 3); return true;
    // src/system/main.asm:56 BRA @UNKNOWN6
    case 0xC0B874: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/system/main.asm:58 LDA PAD_PRESS
    case 0xC0B876: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/system/main.asm:59 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC0B879: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/system/main.asm:59 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC0B879.
    case 0xC0B87B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/main.asm:60 BEQ @UNKNOWN6
    case 0xC0B87C: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/system/main.asm:61 CPX #3
    case 0xC0B87E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/system/main.asm:61 CPX #3
    // Overlapping static entry reached from 0xC0B87E.
    case 0xC0B880: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/system/main.asm:62 BNE @UNKNOWN6
    case 0xC0B881: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/system/main.asm:63 JSL UNKNOWN_C0943C
    case 0xC0B883: cpu.execute_instruction<0x22>(0xC0943C, 4); return true;
    // src/system/main.asm:64 JSL GET_OFF_BICYCLE
    case 0xC0B887: cpu.execute_instruction<0x22>(0xC1BEC6, 4); return true;
    // src/system/main.asm:65 JSL UNKNOWN_C09451
    case 0xC0B88B: cpu.execute_instruction<0x22>(0xC09451, 4); return true;
    // src/system/main.asm:66 JMP @LOOP_BEGIN
    case 0xC0B88F: cpu.execute_instruction<0x4C>(0x00B814, 3); return true;
    // src/system/main.asm:68 LDA DEBUG
    case 0xC0B892: cpu.execute_instruction<0xAD>(0x00436C, 3); return true;
    // src/system/main.asm:69 BEQ @NO_DEBUG
    case 0xC0B895: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/system/main.asm:70 LDA PAD_STATE
    case 0xC0B897: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/system/main.asm:71 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC0B89A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/system/main.asm:71 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC0B89A.
    case 0xC0B89C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x000FF0, 3); return true;
    // src/system/main.asm:72 BEQ @DEBUG_PAD2_B_HELD
    case 0xC0B89D: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/system/main.asm:72 BEQ @DEBUG_PAD2_B_HELD
    // Overlapping static entry reached from 0xC0B89C.
    case 0xC0B89E: cpu.execute_instruction<0x0F>(0x006DAD, 4); return true;
    // src/system/main.asm:73 LDA PAD_PRESS
    case 0xC0B89F: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/system/main.asm:74 AND #PAD::R_BUTTON
    case 0xC0B8A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x000010, 3); return true;
    // src/system/main.asm:74 AND #PAD::R_BUTTON
    // Overlapping static entry reached from 0xC0B8A2.
    case 0xC0B8A4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/main.asm:75 BEQ @DEBUG_PAD2_B_HELD
    case 0xC0B8A5: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/system/main.asm:76 JSL DEBUG_Y_BUTTON_MENU
    case 0xC0B8A7: cpu.execute_instruction<0x22>(0xC12E63, 4); return true;
    // src/system/main.asm:77 JMP @LOOP_BEGIN
    case 0xC0B8AB: cpu.execute_instruction<0x4C>(0x00B814, 3); return true;
    // src/system/main.asm:79 LDA PAD_PRESS + 2
    case 0xC0B8AE: cpu.execute_instruction<0xAD>(0x00006F, 3); return true;
    // src/system/main.asm:80 AND #PAD::A_BUTTON
    case 0xC0B8B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/system/main.asm:80 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xC0B8B1.
    case 0xC0B8B3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/main.asm:81 BEQ @DEBUG_PAD2_A_HELD
    case 0xC0B8B4: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/system/main.asm:82 JSL GET_DISTANCE_TO_MAGIC_TRUFFLE
    case 0xC0B8B6: cpu.execute_instruction<0x22>(0xC490EE, 4); return true;
    // src/system/main.asm:84 LDA PAD_PRESS + 2
    case 0xC0B8BA: cpu.execute_instruction<0xAD>(0x00006F, 3); return true;
    // src/system/main.asm:85 AND #PAD::B_BUTTON
    case 0xC0B8BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/system/main.asm:85 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC0B8BD.
    case 0xC0B8BF: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/system/main.asm:86 BEQ @NO_DEBUG
    case 0xC0B8C0: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/system/main.asm:87 JSL TEST_YOUR_SANCTUARY_DISPLAY
    case 0xC0B8C2: cpu.execute_instruction<0x22>(0xC4E366, 4); return true;
    // src/system/main.asm:89 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0B8C6: cpu.execute_instruction<0xAD>(0x005D60, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/system/main.asm:90 BNEL @LOOP_BEGIN
    case 0xC0B8C9: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/system/main.asm:90 BNEL @LOOP_BEGIN
    case 0xC0B8CB: cpu.execute_instruction<0x4C>(0x00B814, 3); return true;
    // src/system/main.asm:91 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC0B8CE: cpu.execute_instruction<0xAD>(0x004DBA, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/system/main.asm:92 BNEL @LOOP_BEGIN
    case 0xC0B8D1: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/system/main.asm:92 BNEL @LOOP_BEGIN
    case 0xC0B8D3: cpu.execute_instruction<0x4C>(0x00B814, 3); return true;
    // src/system/main.asm:93 LDA INPUT_DISABLE_FRAME_COUNTER
    case 0xC0B8D6: cpu.execute_instruction<0xAD>(0x005D74, 3); return true;
    // src/system/main.asm:94 BNE @UNKNOWN15
    case 0xC0B8D9: cpu.execute_instruction<0xD0>(0x000045, 2); return true;
    // src/system/main.asm:95 LDA PENDING_INTERACTIONS
    case 0xC0B8DB: cpu.execute_instruction<0xAD>(0x005D9A, 3); return true;
    // src/system/main.asm:96 BNE @UNKNOWN16
    case 0xC0B8DE: cpu.execute_instruction<0xD0>(0x000043, 2); return true;
    // src/system/main.asm:97 LDA PAD_PRESS
    case 0xC0B8E0: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/system/main.asm:98 AND #PAD::A_BUTTON
    case 0xC0B8E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/system/main.asm:98 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xC0B8E3.
    case 0xC0B8E5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/main.asm:99 BEQ @NO_OPEN_MENU
    case 0xC0B8E6: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/system/main.asm:100 JSL OPEN_MENU_BUTTON
    case 0xC0B8E8: cpu.execute_instruction<0x22>(0xC134A7, 4); return true;
    // src/system/main.asm:101 BRA @UNKNOWN16
    case 0xC0B8EC: cpu.execute_instruction<0x80>(0x000035, 2); return true;
    // src/system/main.asm:103 LDA PAD_PRESS
    case 0xC0B8EE: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/system/main.asm:104 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC0B8F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/system/main.asm:104 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC0B8F1.
    case 0xC0B8F3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x000EF0, 3); return true;
    // src/system/main.asm:105 BEQ @NO_OPEN_HPPP_DISPLAY
    case 0xC0B8F4: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/system/main.asm:105 BEQ @NO_OPEN_HPPP_DISPLAY
    // Overlapping static entry reached from 0xC0B8F3.
    case 0xC0B8F5: cpu.execute_instruction<0x0E>(0x0083AD, 3); return true;
    // src/system/main.asm:106 LDA GAME_STATE+game_state::walking_style
    case 0xC0B8F6: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/system/main.asm:106 LDA GAME_STATE+game_state::walking_style
    // Overlapping static entry reached from 0xC0B8F5.
    case 0xC0B8F8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/main.asm:107 CMP #WALKING_STYLE::BICYCLE
    case 0xC0B8F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/system/main.asm:107 CMP #WALKING_STYLE::BICYCLE
    // Overlapping static entry reached from 0xC0B8F9.
    case 0xC0B8FB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/main.asm:108 BEQ @NO_OPEN_HPPP_DISPLAY
    case 0xC0B8FC: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/system/main.asm:109 JSL OPEN_HPPP_DISPLAY
    case 0xC0B8FE: cpu.execute_instruction<0x22>(0xC13CA1, 4); return true;
    // src/system/main.asm:110 BRA @UNKNOWN16
    case 0xC0B902: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/system/main.asm:112 LDA PAD_PRESS
    case 0xC0B904: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/system/main.asm:113 AND #PAD::X_BUTTON
    case 0xC0B907: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/system/main.asm:113 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xC0B907.
    case 0xC0B909: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/main.asm:114 BEQ @NO_OPEN_TOWN_MAP
    case 0xC0B90A: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/system/main.asm:115 JSL SHOW_TOWN_MAP
    case 0xC0B90C: cpu.execute_instruction<0x22>(0xC13CE5, 4); return true;
    // src/system/main.asm:116 BRA @UNKNOWN16
    case 0xC0B910: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/system/main.asm:118 LDA PAD_PRESS
    case 0xC0B912: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/system/main.asm:119 AND #PAD::L_BUTTON
    case 0xC0B915: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000020, 2); else cpu.execute_instruction<0x29>(0x000020, 3); return true;
    // src/system/main.asm:119 AND #PAD::L_BUTTON
    // Overlapping static entry reached from 0xC0B915.
    case 0xC0B917: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/main.asm:120 BEQ @UNKNOWN16
    case 0xC0B918: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/system/main.asm:121 JSL OPEN_MENU_BUTTON_CHECKTALK
    case 0xC0B91A: cpu.execute_instruction<0x22>(0xC13C32, 4); return true;
    // src/system/main.asm:122 BRA @UNKNOWN16
    case 0xC0B91E: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/system/main.asm:124 DEC INPUT_DISABLE_FRAME_COUNTER
    case 0xC0B920: cpu.execute_instruction<0xCE>(0x005D74, 3); return true;
    // src/system/main.asm:126 LDA PSI_TELEPORT_DESTINATION
    case 0xC0B923: cpu.execute_instruction<0xAD>(0x009F3F, 3); return true;
    // src/system/main.asm:127 BEQ @UNKNOWN17
    case 0xC0B926: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/system/main.asm:128 JSL TELEPORT_MAINLOOP
    case 0xC0B928: cpu.execute_instruction<0x22>(0xC0EA99, 4); return true;
    // src/system/main.asm:130 LDA DEBUG
    case 0xC0B92C: cpu.execute_instruction<0xAD>(0x00436C, 3); return true;
    // src/system/main.asm:131 BEQ @UNKNOWN20
    case 0xC0B92F: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/system/main.asm:132 LDA PAD_PRESS + 2
    case 0xC0B931: cpu.execute_instruction<0xAD>(0x00006F, 3); return true;
    // src/system/main.asm:133 AND #PAD::B_BUTTON
    case 0xC0B934: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/system/main.asm:133 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC0B934.
    case 0xC0B936: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/system/main.asm:134 BEQ @UNKNOWN20
    case 0xC0B937: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/system/main.asm:135 LDA #0
    case 0xC0B939: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/main.asm:135 LDA #0
    // Overlapping static entry reached from 0xC0B939.
    case 0xC0B93B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/main.asm:136 STA @LOCAL00
    case 0xC0B93C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/main.asm:137 BRA @UNKNOWN19
    case 0xC0B93E: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/system/main.asm:139 LDY #.SIZEOF(char_struct)
    case 0xC0B940: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/system/main.asm:139 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC0B940.
    case 0xC0B942: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/main.asm:140 JSL MULT168
    case 0xC0B943: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/system/main.asm:141 TAX
    case 0xC0B947: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/main.asm:142 LDA PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xC0B948: cpu.execute_instruction<0xBD>(0x0099D8, 3); return true;
    // src/system/main.asm:143 STA PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC0B94B: cpu.execute_instruction<0x9D>(0x009A15, 3); return true;
    // src/system/main.asm:144 LDA PARTY_CHARACTERS+char_struct::max_pp,X
    case 0xC0B94E: cpu.execute_instruction<0xBD>(0x0099DA, 3); return true;
    // src/system/main.asm:145 STA PARTY_CHARACTERS+char_struct::current_pp_target,X
    case 0xC0B951: cpu.execute_instruction<0x9D>(0x009A1B, 3); return true;
    // src/system/main.asm:146 LDA @LOCAL00
    case 0xC0B954: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/main.asm:147 INC
    case 0xC0B956: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/main.asm:148 STA @LOCAL00
    case 0xC0B957: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/main.asm:150 CMP #TOTAL_PARTY_COUNT
    case 0xC0B959: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/system/main.asm:150 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC0B959.
    case 0xC0B95B: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/main.asm:151 BCC @UNKNOWN18
    case 0xC0B95C: cpu.execute_instruction<0x90>(0x0000E2, 2); return true;
    // src/system/main.asm:153 JSL UNKNOWN_C04FFE
    case 0xC0B95E: cpu.execute_instruction<0x22>(0xC04FFE, 4); return true;
    // src/system/main.asm:154 CMP #0
    case 0xC0B962: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/system/main.asm:154 CMP #0
    // Overlapping static entry reached from 0xC0B962.
    case 0xC0B964: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/system/main.asm:155 BNE @UNKNOWN21
    case 0xC0B965: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/system/main.asm:156 JSL SPAWN
    case 0xC0B967: cpu.execute_instruction<0x22>(0xC4C718, 4); return true;
    // src/system/main.asm:157 CMP #0
    case 0xC0B96B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/system/main.asm:157 CMP #0
    // Overlapping static entry reached from 0xC0B96B.
    case 0xC0B96D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/main.asm:158 BEQ @UNKNOWN21
    case 0xC0B96E: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/system/main.asm:159 LDX #0
    case 0xC0B970: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/main.asm:159 LDX #0
    // Overlapping static entry reached from 0xC0B970.
    case 0xC0B972: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/system/main.asm:160 LDA #.LOWORD(JMP_BUF1)
    case 0xC0B973: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000A20, 3); return true;
    // src/system/main.asm:160 LDA #.LOWORD(JMP_BUF1)
    // Overlapping static entry reached from 0xC0B973.
    case 0xC0B975: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/main.asm:161 JSL LONGJMP
    case 0xC0B976: cpu.execute_instruction<0x22>(0xC08F68, 4); return true;
    // src/system/main.asm:163 LDA DEBUG
    case 0xC0B97A: cpu.execute_instruction<0xAD>(0x00436C, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/main.asm:164 BEQL @LOOP_BEGIN
    case 0xC0B97D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/main.asm:164 BEQL @LOOP_BEGIN
    case 0xC0B97F: cpu.execute_instruction<0x4C>(0x00B814, 3); return true;
    // src/system/main.asm:165 LDA PAD_STATE
    case 0xC0B982: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/system/main.asm:166 AND #PAD::START_BUTTON
    case 0xC0B985: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001000, 3); return true;
    // src/system/main.asm:166 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xC0B985.
    case 0xC0B987: cpu.execute_instruction<0x10>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/main.asm:167 BEQL @LOOP_BEGIN
    case 0xC0B988: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/main.asm:167 BEQL @LOOP_BEGIN
    // Overlapping static entry reached from 0xC0B987.
    case 0xC0B989: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/main.asm:167 BEQL @LOOP_BEGIN
    case 0xC0B98A: cpu.execute_instruction<0x4C>(0x00B814, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/main.asm:167 BEQL @LOOP_BEGIN
    // Overlapping static entry reached from 0xC0B989.
    case 0xC0B98B: cpu.execute_instruction<0x14>(0x0000B8, 2); return true;
    // src/system/main.asm:168 LDA PAD_STATE
    case 0xC0B98D: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/system/main.asm:169 AND #PAD::SELECT_BUTTON
    case 0xC0B990: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x002000, 3); return true;
    // src/system/main.asm:169 AND #PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC0B990.
    case 0xC0B992: cpu.execute_instruction<0x20>(0x0003D0, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/main.asm:170 BEQL @LOOP_BEGIN
    case 0xC0B993: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/main.asm:170 BEQL @LOOP_BEGIN
    case 0xC0B995: cpu.execute_instruction<0x4C>(0x00B814, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/main.asm:171 END_C_FUNCTION
    case 0xC0B998: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/main.asm:171 END_C_FUNCTION
    case 0xC0B999: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/asl16.asm (source_named).
bool execute_system_math_asl16_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/asl16.asm:3 ASL
    case 0xC0923D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/math/asl16.asm:5 DEY
    case 0xC0923E: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/math/asl16.asm:6 BPL ASL16
    case 0xC0923F: cpu.execute_instruction<0x10>(0x0000FC, 2); return true;
    // src/system/math/asl16.asm:7 RTL
    case 0xC09241: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/asl32.asm (source_named).
bool execute_system_math_asl32_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/asl32.asm:3 ASL $06
    case 0xC09242: cpu.execute_instruction<0x06>(0x000006, 2); return true;
    // src/system/math/asl32.asm:4 ROL $08
    case 0xC09244: cpu.execute_instruction<0x26>(0x000008, 2); return true;
    // src/system/math/asl32.asm:6 DEY
    case 0xC09246: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/math/asl32.asm:7 BPL ASL32
    case 0xC09247: cpu.execute_instruction<0x10>(0x0000F9, 2); return true;
    // src/system/math/asl32.asm:8 RTL
    case 0xC09249: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/asr16.asm (source_named).
bool execute_system_math_asr16_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/asr16.asm:4 CMP #$0000
    case 0xC0925B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/system/math/asr16.asm:4 CMP #$0000
    // Overlapping static entry reached from 0xC0925B.
    case 0xC0925D: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // src/system/math/asr16.asm:5 BPL ASR8_UNKNOWN1
    case 0xC0925E: cpu.execute_instruction<0x10>(0x0000F1, 2); return true;
    // src/system/math/asr16.asm:6 BMI ASR8_UNKNOWN3
    case 0xC09260: cpu.execute_instruction<0x30>(0x0000F5, 2); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/asr32.asm (source_named).
bool execute_system_math_asr32_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/asr32.asm:3 LDA $08
    case 0xC09262: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/math/asr32.asm:4 BPL ASR32_UNKNOWN1
    case 0xC09264: cpu.execute_instruction<0x10>(0x000006, 2); return true;
    // src/system/math/asr32.asm:5 BMI ASR32_UNKNOWN3
    case 0xC09266: cpu.execute_instruction<0x30>(0x00000D, 2); return true;
    // src/system/math/asr32.asm:7 LSR $08
    case 0xC09268: cpu.execute_instruction<0x46>(0x000008, 2); return true;
    // src/system/math/asr32.asm:8 ROR $06
    case 0xC0926A: cpu.execute_instruction<0x66>(0x000006, 2); return true;
    // src/system/math/asr32.asm:10 DEY
    case 0xC0926C: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/math/asr32.asm:11 BPL ASR32_UNKNOWN0
    case 0xC0926D: cpu.execute_instruction<0x10>(0x0000F9, 2); return true;
    // src/system/math/asr32.asm:12 RTL
    case 0xC0926F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/system/math/asr32.asm:14 SEC
    case 0xC09270: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/math/asr32.asm:15 ROR $08
    case 0xC09271: cpu.execute_instruction<0x66>(0x000008, 2); return true;
    // src/system/math/asr32.asm:16 ROR $06
    case 0xC09273: cpu.execute_instruction<0x66>(0x000006, 2); return true;
    // src/system/math/asr32.asm:18 DEY
    case 0xC09275: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/math/asr32.asm:19 BPL ASR32_UNKNOWN2
    case 0xC09276: cpu.execute_instruction<0x10>(0x0000F8, 2); return true;
    // src/system/math/asr32.asm:20 RTL
    case 0xC09278: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/asr8.asm (source_named).
bool execute_system_math_asr8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/asr8.asm:4 CMP #$0000
    case 0xC0924A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x001000, 3); return true;
    // src/system/math/asr8.asm:5 BPL ASR8_UNKNOWN1
    case 0xC0924C: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/system/math/asr8.asm:5 BPL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC0924A.
    case 0xC0924D: cpu.execute_instruction<0x03>(0x000030, 2); return true;
    // src/system/math/asr8.asm:6 BMI ASR8_UNKNOWN3
    case 0xC0924E: cpu.execute_instruction<0x30>(0x000007, 2); return true;
    // src/system/math/asr8.asm:6 BMI ASR8_UNKNOWN3
    // Overlapping static entry reached from 0xC0924D.
    case 0xC0924F: cpu.execute_instruction<0x07>(0x00004A, 2); return true;
    // src/system/math/asr8.asm:8 LSR
    case 0xC09250: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/math/asr8.asm:10 DEY
    case 0xC09251: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/math/asr8.asm:11 BPL ASR8_UNKNOWN0
    case 0xC09252: cpu.execute_instruction<0x10>(0x0000FC, 2); return true;
    // src/system/math/asr8.asm:12 RTL
    case 0xC09254: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/system/math/asr8.asm:14 SEC
    case 0xC09255: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/math/asr8.asm:15 ROR
    case 0xC09256: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/math/asr8.asm:17 DEY
    case 0xC09257: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/math/asr8.asm:18 BPL ASR8_UNKNOWN2
    case 0xC09258: cpu.execute_instruction<0x10>(0x0000FB, 2); return true;
    // src/system/math/asr8.asm:19 RTL
    case 0xC0925A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/cosine_sine.asm (source_named).
bool execute_system_math_cosine_sine_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/cosine_sine.asm:3 PHA
    case 0xC0B400: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/math/cosine_sine.asm:4 TXA
    case 0xC0B401: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/math/cosine_sine.asm:5 SEC
    case 0xC0B402: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/math/cosine_sine.asm:6 SBC #$0040
    case 0xC0B403: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000040, 2); else cpu.execute_instruction<0xE9>(0x000040, 3); return true;
    // src/system/math/cosine_sine.asm:6 SBC #$0040
    // Overlapping static entry reached from 0xC0B403.
    case 0xC0B405: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/system/math/cosine_sine.asm:7 AND #$00FF
    case 0xC0B406: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/math/cosine_sine.asm:7 AND #$00FF
    // Overlapping static entry reached from 0xC0B406.
    case 0xC0B408: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/system/math/cosine_sine.asm:8 TAX
    case 0xC0B409: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/math/cosine_sine.asm:9 PLA
    case 0xC0B40A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/math/cosine_sine.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B40B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/math/cosine_sine.asm:12 STA f:M7A
    case 0xC0B40D: cpu.execute_instruction<0x8F>(0x00211B, 4); return true;
    // src/system/math/cosine_sine.asm:13 XBA
    case 0xC0B411: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/math/cosine_sine.asm:14 STA f:M7A
    case 0xC0B412: cpu.execute_instruction<0x8F>(0x00211B, 4); return true;
    // src/system/math/cosine_sine.asm:15 LDA f:SINE_LOOKUP_TABLE,X
    case 0xC0B416: cpu.execute_instruction<0xBF>(0xC0B425, 4); return true;
    // src/system/math/cosine_sine.asm:16 STA f:M7B
    case 0xC0B41A: cpu.execute_instruction<0x8F>(0x00211C, 4); return true;
    // src/system/math/cosine_sine.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC0B41E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/cosine_sine.asm:18 LDA f:MPYM
    case 0xC0B420: cpu.execute_instruction<0xAF>(0x002135, 4); return true;
    // src/system/math/cosine_sine.asm:19 RTL
    case 0xC0B424: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/division16.asm (source_named).
bool execute_system_math_division16_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/division16.asm:4 PHA
    case 0xC090E6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/math/division16.asm:5 STY TEMP_DIVIDEND
    case 0xC090E7: cpu.execute_instruction<0x8C>(0x0000B4, 3); return true;
    // src/system/math/division16.asm:6 EOR TEMP_DIVIDEND
    case 0xC090EA: cpu.execute_instruction<0x4D>(0x0000B4, 3); return true;
    // src/system/math/division16.asm:7 STA TEMP_DIVIDEND
    case 0xC090ED: cpu.execute_instruction<0x8D>(0x0000B4, 3); return true;
    // src/system/math/division16.asm:8 PLA
    case 0xC090F0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/math/division16.asm:9 JSL DIVISION16S
    case 0xC090F1: cpu.execute_instruction<0x22>(0xC0914B, 4); return true;
    // src/system/math/division16.asm:10 ROL TEMP_DIVIDEND
    case 0xC090F5: cpu.execute_instruction<0x2E>(0x0000B4, 3); return true;
    // src/system/math/division16.asm:11 BCC @UNKNOWN0
    case 0xC090F8: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // src/system/math/division16.asm:12 EOR #$FFFF
    case 0xC090FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/system/math/division16.asm:12 EOR #$FFFF
    // Overlapping static entry reached from 0xC090FA.
    case 0xC090FC: cpu.execute_instruction<0xFF>(0xA56B1A, 4); return true;
    // src/system/math/division16.asm:13 INC
    case 0xC090FD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/math/division16.asm:15 RTL
    case 0xC090FE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/division16s.asm (source_named).
bool execute_system_math_division16s_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/division16s.asm:5 PHA
    case 0xC0914B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/math/division16s.asm:6 TYA
    case 0xC0914C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/division16s.asm:7 BPL @DIVIDEND_POSITIVE
    case 0xC0914D: cpu.execute_instruction<0x10>(0x000005, 2); return true;
    // src/system/math/division16s.asm:8 EOR #$FFFF
    case 0xC0914F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/system/math/division16s.asm:8 EOR #$FFFF
    // Overlapping static entry reached from 0xC0914F.
    case 0xC09151: cpu.execute_instruction<0xFF>(0x68A81A, 4); return true;
    // src/system/math/division16s.asm:9 INC
    case 0xC09152: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/math/division16s.asm:10 TAY
    case 0xC09153: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/math/division16s.asm:12 PLA
    case 0xC09154: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/math/division16s.asm:13 BPL DIVISION16S_DIVISOR_POSITIVE
    case 0xC09155: cpu.execute_instruction<0x10>(0x000004, 2); return true;
    // src/system/math/division16s.asm:14 EOR #$FFFF
    case 0xC09157: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/system/math/division16s.asm:14 EOR #$FFFF
    // Overlapping static entry reached from 0xC09157.
    case 0xC09159: cpu.execute_instruction<0xFF>(0xB08D1A, 4); return true;
    // src/system/math/division16s.asm:15 INC
    case 0xC0915A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/math/division16s.asm:17 STA DIV_MULT_TMP
    case 0xC0915B: cpu.execute_instruction<0x8D>(0x0000B0, 3); return true;
    // src/system/math/division16s.asm:17 STA DIV_MULT_TMP
    // Overlapping static entry reached from 0xC09159.
    case 0xC0915D: cpu.execute_instruction<0x00>(0x00008C, 2); return true;
    // src/system/math/division16s.asm:18 STY DIV_MULT_TMP2
    case 0xC0915E: cpu.execute_instruction<0x8C>(0x0000B2, 3); return true;
    // src/system/math/division16s.asm:19 LDA #$0000
    case 0xC09161: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/math/division16s.asm:19 LDA #$0000
    // Overlapping static entry reached from 0xC09161.
    case 0xC09163: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/system/math/division16s.asm:20 LDY #$0010
    case 0xC09164: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x000010, 3); return true;
    // src/system/math/division16s.asm:20 LDY #$0010
    // Overlapping static entry reached from 0xC09164.
    case 0xC09166: cpu.execute_instruction<0x00>(0x00002E, 2); return true;
    // src/system/math/division16s.asm:22 ROL DIV_MULT_TMP
    case 0xC09167: cpu.execute_instruction<0x2E>(0x0000B0, 3); return true;
    // src/system/math/division16s.asm:23 ROL
    case 0xC0916A: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/system/math/division16s.asm:24 CMP DIV_MULT_TMP2
    case 0xC0916B: cpu.execute_instruction<0xCD>(0x0000B2, 3); return true;
    // src/system/math/division16s.asm:25 BCC @OVERFLOW
    case 0xC0916E: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/system/math/division16s.asm:26 SBC DIV_MULT_TMP2
    case 0xC09170: cpu.execute_instruction<0xED>(0x0000B2, 3); return true;
    // src/system/math/division16s.asm:28 DEY
    case 0xC09173: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/math/division16s.asm:29 BNE @LOOP_BEGIN
    case 0xC09174: cpu.execute_instruction<0xD0>(0x0000F1, 2); return true;
    // src/system/math/division16s.asm:30 TAY
    case 0xC09176: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/math/division16s.asm:31 LDA DIV_MULT_TMP
    case 0xC09177: cpu.execute_instruction<0xAD>(0x0000B0, 3); return true;
    // src/system/math/division16s.asm:32 ROL
    case 0xC0917A: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/system/math/division16s.asm:33 RTL
    case 0xC0917B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/division32.asm (source_named).
bool execute_system_math_division32_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/division32.asm:3 LDA $08
    case 0xC090FF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/math/division32.asm:3 LDA $08
    // Overlapping static entry reached from 0xC090FC.
    case 0xC09100: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/math/division32.asm:4 EOR $0C
    case 0xC09101: cpu.execute_instruction<0x45>(0x00000C, 2); return true;
    // src/system/math/division32.asm:5 STA TEMP_DIVIDEND
    case 0xC09103: cpu.execute_instruction<0x8D>(0x0000B4, 3); return true;
    // src/system/math/division32.asm:6 JSL DIVISION32S
    case 0xC09106: cpu.execute_instruction<0x22>(0xC0917C, 4); return true;
    // src/system/math/division32.asm:7 ROL TEMP_DIVIDEND
    case 0xC0910A: cpu.execute_instruction<0x2E>(0x0000B4, 3); return true;
    // src/system/math/division32.asm:8 BCC @UNKNOWN0
    case 0xC0910D: cpu.execute_instruction<0x90>(0x00000E, 2); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/system/math/division32.asm:9 NEGATE_INT_ASSIGN $06
    case 0xC0910F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/system/math/division32.asm:9 NEGATE_INT_ASSIGN $06
    // Overlapping static entry reached from 0xC0910F.
    case 0xC09111: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/system/math/division32.asm:9 NEGATE_INT_ASSIGN $06
    case 0xC09112: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/system/math/division32.asm:9 NEGATE_INT_ASSIGN $06
    case 0xC09114: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/system/math/division32.asm:9 NEGATE_INT_ASSIGN $06
    case 0xC09116: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/system/math/division32.asm:9 NEGATE_INT_ASSIGN $06
    // Overlapping static entry reached from 0xC09116.
    case 0xC09118: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/system/math/division32.asm:9 NEGATE_INT_ASSIGN $06
    case 0xC09119: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/system/math/division32.asm:9 NEGATE_INT_ASSIGN $06
    case 0xC0911B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/math/division32.asm:11 RTL
    case 0xC0911D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/division32s.asm (source_named).
bool execute_system_math_division32s_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/division32s.asm:3 LDA $08
    case 0xC0917C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/math/division32s.asm:4 BPL @DIVIDEND_POSITIVE
    case 0xC0917E: cpu.execute_instruction<0x10>(0x000011, 2); return true;
    // src/system/math/division32s.asm:5 EOR #$FFFF
    case 0xC09180: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/system/math/division32s.asm:5 EOR #$FFFF
    // Overlapping static entry reached from 0xC09180.
    case 0xC09182: cpu.execute_instruction<0xFF>(0xA50885, 4); return true;
    // src/system/math/division32s.asm:6 STA $08
    case 0xC09183: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/math/division32s.asm:7 LDA $06
    case 0xC09185: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/system/math/division32s.asm:7 LDA $06
    // Overlapping static entry reached from 0xC09182.
    case 0xC09186: cpu.execute_instruction<0x06>(0x000049, 2); return true;
    // src/system/math/division32s.asm:8 EOR #$FFFF
    case 0xC09187: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/system/math/division32s.asm:8 EOR #$FFFF
    // Overlapping static entry reached from 0xC09186.
    case 0xC09188: cpu.execute_instruction<0xFF>(0x851AFF, 4); return true;
    // src/system/math/division32s.asm:8 EOR #$FFFF
    // Overlapping static entry reached from 0xC09187.
    case 0xC09189: cpu.execute_instruction<0xFF>(0x06851A, 4); return true;
    // src/system/math/division32s.asm:9 INC
    case 0xC0918A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/math/division32s.asm:10 STA $06
    case 0xC0918B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/math/division32s.asm:10 STA $06
    // Overlapping static entry reached from 0xC09188.
    case 0xC0918C: cpu.execute_instruction<0x06>(0x0000D0, 2); return true;
    // src/system/math/division32s.asm:11 BNE @DIVIDEND_POSITIVE
    case 0xC0918D: cpu.execute_instruction<0xD0>(0x000002, 2); return true;
    // src/system/math/division32s.asm:11 BNE @DIVIDEND_POSITIVE
    // Overlapping static entry reached from 0xC0918C.
    case 0xC0918E: cpu.execute_instruction<0x02>(0x0000E6, 2); return true;
    // src/system/math/division32s.asm:12 INC $08
    case 0xC0918F: cpu.execute_instruction<0xE6>(0x000008, 2); return true;
    // src/system/math/division32s.asm:14 LDA $0C
    case 0xC09191: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/system/math/division32s.asm:15 BPL DIVISION32S_DIVISOR_POSITIVE
    case 0xC09193: cpu.execute_instruction<0x10>(0x000011, 2); return true;
    // src/system/math/division32s.asm:16 EOR #$FFFF
    case 0xC09195: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/system/math/division32s.asm:16 EOR #$FFFF
    // Overlapping static entry reached from 0xC09195.
    case 0xC09197: cpu.execute_instruction<0xFF>(0xA50C85, 4); return true;
    // src/system/math/division32s.asm:17 STA $0C
    case 0xC09198: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/system/math/division32s.asm:18 LDA $0A
    case 0xC0919A: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/system/math/division32s.asm:18 LDA $0A
    // Overlapping static entry reached from 0xC09197.
    case 0xC0919B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/math/division32s.asm:19 EOR #$FFFF
    case 0xC0919C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/system/math/division32s.asm:19 EOR #$FFFF
    // Overlapping static entry reached from 0xC0919C.
    case 0xC0919E: cpu.execute_instruction<0xFF>(0x0A851A, 4); return true;
    // src/system/math/division32s.asm:20 INC
    case 0xC0919F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/math/division32s.asm:21 STA $0A
    case 0xC091A0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/system/math/division32s.asm:22 BNE DIVISION32S_DIVISOR_POSITIVE
    case 0xC091A2: cpu.execute_instruction<0xD0>(0x000002, 2); return true;
    // src/system/math/division32s.asm:23 INC $0C
    case 0xC091A4: cpu.execute_instruction<0xE6>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/math/division32s.asm:25 MOVE_INT $0A, DIV_MULT_TMP
    case 0xC091A6: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/math/division32s.asm:25 MOVE_INT $0A, DIV_MULT_TMP
    case 0xC091A8: cpu.execute_instruction<0x8D>(0x0000B0, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/math/division32s.asm:25 MOVE_INT $0A, DIV_MULT_TMP
    case 0xC091AB: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/math/division32s.asm:25 MOVE_INT $0A, DIV_MULT_TMP
    case 0xC091AD: cpu.execute_instruction<0x8D>(0x0000B2, 3); return true;
    // src/system/math/division32s.asm:26 STZ $0A
    case 0xC091B0: cpu.execute_instruction<0x64>(0x00000A, 2); return true;
    // src/system/math/division32s.asm:27 STZ $0C
    case 0xC091B2: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/system/math/division32s.asm:28 LDY #$0020
    case 0xC091B4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000020, 2); else cpu.execute_instruction<0xA0>(0x000020, 3); return true;
    // src/system/math/division32s.asm:28 LDY #$0020
    // Overlapping static entry reached from 0xC091B4.
    case 0xC091B6: cpu.execute_instruction<0x00>(0x000026, 2); return true;
    // src/system/math/division32s.asm:30 ROL $06
    case 0xC091B7: cpu.execute_instruction<0x26>(0x000006, 2); return true;
    // src/system/math/division32s.asm:31 ROL $08
    case 0xC091B9: cpu.execute_instruction<0x26>(0x000008, 2); return true;
    // src/system/math/division32s.asm:32 ROL $0A
    case 0xC091BB: cpu.execute_instruction<0x26>(0x00000A, 2); return true;
    // src/system/math/division32s.asm:33 ROL $0C
    case 0xC091BD: cpu.execute_instruction<0x26>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/system/math/division32s.asm:34 CMP32 $0A, DIV_MULT_TMP
    case 0xC091BF: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/system/math/division32s.asm:34 CMP32 $0A, DIV_MULT_TMP
    case 0xC091C1: cpu.execute_instruction<0xCD>(0x0000B2, 3); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/system/math/division32s.asm:34 CMP32 $0A, DIV_MULT_TMP
    case 0xC091C4: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/system/math/division32s.asm:34 CMP32 $0A, DIV_MULT_TMP
    case 0xC091C6: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/system/math/division32s.asm:34 CMP32 $0A, DIV_MULT_TMP
    case 0xC091C8: cpu.execute_instruction<0xCD>(0x0000B0, 3); return true;
    // src/system/math/division32s.asm:35 BCC @OVERFLOW
    case 0xC091CB: cpu.execute_instruction<0x90>(0x00000E, 2); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/system/math/division32s.asm:36 SUB_INT_ASSIGN $0A, DIV_MULT_TMP
    case 0xC091CD: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/system/math/division32s.asm:36 SUB_INT_ASSIGN $0A, DIV_MULT_TMP
    case 0xC091CF: cpu.execute_instruction<0xED>(0x0000B0, 3); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/system/math/division32s.asm:36 SUB_INT_ASSIGN $0A, DIV_MULT_TMP
    case 0xC091D2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/system/math/division32s.asm:36 SUB_INT_ASSIGN $0A, DIV_MULT_TMP
    case 0xC091D4: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/system/math/division32s.asm:36 SUB_INT_ASSIGN $0A, DIV_MULT_TMP
    case 0xC091D6: cpu.execute_instruction<0xED>(0x0000B2, 3); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/system/math/division32s.asm:36 SUB_INT_ASSIGN $0A, DIV_MULT_TMP
    case 0xC091D9: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/system/math/division32s.asm:38 DEY
    case 0xC091DB: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/math/division32s.asm:39 BNE @LOOP_BEGIN
    case 0xC091DC: cpu.execute_instruction<0xD0>(0x0000D9, 2); return true;
    // src/system/math/division32s.asm:40 ROL $06
    case 0xC091DE: cpu.execute_instruction<0x26>(0x000006, 2); return true;
    // src/system/math/division32s.asm:41 ROL $08
    case 0xC091E0: cpu.execute_instruction<0x26>(0x000008, 2); return true;
    // src/system/math/division32s.asm:42 RTL
    case 0xC091E2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/division8.asm (source_named).
bool execute_system_math_division8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/division8.asm:3 PHA
    case 0xC090CE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/math/division8.asm:4 STY TEMP_DIVIDEND
    case 0xC090CF: cpu.execute_instruction<0x8C>(0x0000B4, 3); return true;
    // src/system/math/division8.asm:5 EOR TEMP_DIVIDEND
    case 0xC090D2: cpu.execute_instruction<0x4D>(0x0000B4, 3); return true;
    // src/system/math/division8.asm:6 STA TEMP_DIVIDEND
    case 0xC090D5: cpu.execute_instruction<0x8D>(0x0000B4, 3); return true;
    // src/system/math/division8.asm:7 PLA
    case 0xC090D8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/math/division8.asm:8 JSL DIVISION8S
    case 0xC090D9: cpu.execute_instruction<0x22>(0xC0911E, 4); return true;
    // src/system/math/division8.asm:10 ROL TEMP_DIVIDEND
    case 0xC090DD: cpu.execute_instruction<0x2E>(0x0000B4, 3); return true;
    // src/system/math/division8.asm:11 BCC @UNKNOWN0
    case 0xC090E0: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/system/math/division8.asm:12 EOR #$00FF
    case 0xC090E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x001AFF, 3); return true;
    // src/system/math/division8.asm:13 INC
    case 0xC090E4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/math/division8.asm:15 RTL
    case 0xC090E5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/division8s.asm (source_named).
bool execute_system_math_division8s_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/division8s.asm:4 PHA
    case 0xC0911E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/math/division8s.asm:5 TYA
    case 0xC0911F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/division8s.asm:6 BPL @DIVIDEND_POSITIVE
    case 0xC09120: cpu.execute_instruction<0x10>(0x000004, 2); return true;
    // src/system/math/division8s.asm:7 EOR #$00FF
    case 0xC09122: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x001AFF, 3); return true;
    // src/system/math/division8s.asm:8 INC
    case 0xC09124: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/math/division8s.asm:9 TAY
    case 0xC09125: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/math/division8s.asm:11 PLA
    case 0xC09126: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/math/division8s.asm:12 BPL DIVISION8S_DIVISOR_POSITIVE
    case 0xC09127: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/system/math/division8s.asm:13 EOR #$00FF
    case 0xC09129: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x001AFF, 3); return true;
    // src/system/math/division8s.asm:14 INC
    case 0xC0912B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/math/division8s.asm:16 STA f:WRDIVL
    case 0xC0912C: cpu.execute_instruction<0x8F>(0x004204, 4); return true;
    // src/system/math/division8s.asm:17 LDA #$0000
    case 0xC09130: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/system/math/division8s.asm:18 STA f:WRDIVH
    case 0xC09132: cpu.execute_instruction<0x8F>(0x004205, 4); return true;
    // src/system/math/division8s.asm:18 STA f:WRDIVH
    // Overlapping static entry reached from 0xC09130.
    case 0xC09133: cpu.execute_instruction<0x05>(0x000042, 2); return true;
    // src/system/math/division8s.asm:18 STA f:WRDIVH
    // Overlapping static entry reached from 0xC09133.
    case 0xC09135: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/system/math/division8s.asm:19 TYA
    case 0xC09136: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/division8s.asm:20 STA f:WRDIVB
    case 0xC09137: cpu.execute_instruction<0x8F>(0x004206, 4); return true;
    // src/system/math/division8s.asm:21 NOP
    case 0xC0913B: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/division8s.asm:22 NOP
    case 0xC0913C: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/division8s.asm:23 NOP
    case 0xC0913D: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/division8s.asm:24 NOP
    case 0xC0913E: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/division8s.asm:25 NOP
    case 0xC0913F: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/division8s.asm:26 NOP
    case 0xC09140: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/division8s.asm:27 LDA f:RDMPYL
    case 0xC09141: cpu.execute_instruction<0xAF>(0x004216, 4); return true;
    // src/system/math/division8s.asm:28 TAY
    case 0xC09145: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/math/division8s.asm:29 LDA f:RDDIVL
    case 0xC09146: cpu.execute_instruction<0xAF>(0x004214, 4); return true;
    // src/system/math/division8s.asm:30 RTL
    case 0xC0914A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/modulus16.asm (source_named).
bool execute_system_math_modulus16_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/modulus16.asm:3 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC09231: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/system/math/modulus16.asm:4 TYA
    case 0xC09235: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/modulus16.asm:5 RTL
    case 0xC09236: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/modulus16s.asm (source_named).
bool execute_system_math_modulus16s_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/modulus16s.asm:4 STA TEMP_DIVIDEND
    case 0xC091F4: cpu.execute_instruction<0x8D>(0x0000B4, 3); return true;
    // src/system/math/modulus16s.asm:5 JSL DIVISION16S
    case 0xC091F7: cpu.execute_instruction<0x22>(0xC0914B, 4); return true;
    // src/system/math/modulus16s.asm:6 TYA
    case 0xC091FB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/modulus16s.asm:7 ROL TEMP_DIVIDEND
    case 0xC091FC: cpu.execute_instruction<0x2E>(0x0000B4, 3); return true;
    // src/system/math/modulus16s.asm:8 BCC @UNKNOWN0
    case 0xC091FF: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // src/system/math/modulus16s.asm:9 EOR #$FFFF
    case 0xC09201: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/system/math/modulus16s.asm:9 EOR #$FFFF
    // Overlapping static entry reached from 0xC09201.
    case 0xC09203: cpu.execute_instruction<0xFF>(0xA56B1A, 4); return true;
    // src/system/math/modulus16s.asm:10 INC
    case 0xC09204: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/math/modulus16s.asm:12 RTL
    case 0xC09205: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/modulus32.asm (source_named).
bool execute_system_math_modulus32_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/modulus32.asm:3 JSL DIVISION32S_DIVISOR_POSITIVE
    case 0xC09237: cpu.execute_instruction<0x22>(0xC091A6, 4); return true;
    // src/system/math/modulus32.asm:4 BRA MODULUS32S_UNKNOWN0
    case 0xC0923B: cpu.execute_instruction<0x80>(0x0000E5, 2); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/modulus32s.asm (source_named).
bool execute_system_math_modulus32s_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/modulus32s.asm:3 LDA $08
    case 0xC09206: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/math/modulus32s.asm:3 LDA $08
    // Overlapping static entry reached from 0xC09203.
    case 0xC09207: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/math/modulus32s.asm:4 STA TEMP_DIVIDEND
    case 0xC09208: cpu.execute_instruction<0x8D>(0x0000B4, 3); return true;
    // src/system/math/modulus32s.asm:5 JSL DIVISION32S
    case 0xC0920B: cpu.execute_instruction<0x22>(0xC0917C, 4); return true;
    // src/system/math/modulus32s.asm:6 ROL TEMP_DIVIDEND
    case 0xC0920F: cpu.execute_instruction<0x2E>(0x0000B4, 3); return true;
    // src/system/math/modulus32s.asm:7 BCC MODULUS32S_UNKNOWN0
    case 0xC09212: cpu.execute_instruction<0x90>(0x00000E, 2); return true;
    // src/system/math/modulus32s.asm:8 LDA #$0000
    case 0xC09214: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/math/modulus32s.asm:8 LDA #$0000
    // Overlapping static entry reached from 0xC09214.
    case 0xC09216: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // src/system/math/modulus32s.asm:9 SBC $0A
    case 0xC09217: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // src/system/math/modulus32s.asm:10 STA $06
    case 0xC09219: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/math/modulus32s.asm:11 LDA #$0000
    case 0xC0921B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/math/modulus32s.asm:11 LDA #$0000
    // Overlapping static entry reached from 0xC0921B.
    case 0xC0921D: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // src/system/math/modulus32s.asm:12 SBC $0C
    case 0xC0921E: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // src/system/math/modulus32s.asm:13 BRA MODULUS32S_UNKNOWN1
    case 0xC09220: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/system/math/modulus32s.asm:15 LDA $0A
    case 0xC09222: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/system/math/modulus32s.asm:16 STA $06
    case 0xC09224: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/math/modulus32s.asm:17 LDA $0C
    case 0xC09226: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/system/math/modulus32s.asm:19 STA $08
    case 0xC09228: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/math/modulus32s.asm:20 RTL
    case 0xC0922A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/modulus8.asm (source_named).
bool execute_system_math_modulus8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/modulus8.asm:3 JSL DIVISION8S_DIVISOR_POSITIVE
    case 0xC0922B: cpu.execute_instruction<0x22>(0xC0912C, 4); return true;
    // src/system/math/modulus8.asm:4 TYA
    case 0xC0922F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/modulus8.asm:5 RTL
    case 0xC09230: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/modulus8s.asm (source_named).
bool execute_system_math_modulus8s_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/modulus8s.asm:4 STA TEMP_DIVIDEND
    case 0xC091E3: cpu.execute_instruction<0x8D>(0x0000B4, 3); return true;
    // src/system/math/modulus8s.asm:5 JSL DIVISION8S
    case 0xC091E6: cpu.execute_instruction<0x22>(0xC0911E, 4); return true;
    // src/system/math/modulus8s.asm:6 TYA
    case 0xC091EA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/modulus8s.asm:7 ROL TEMP_DIVIDEND
    case 0xC091EB: cpu.execute_instruction<0x2E>(0x0000B4, 3); return true;
    // src/system/math/modulus8s.asm:8 BCC @UNKNOWN0
    case 0xC091EE: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/system/math/modulus8s.asm:9 EOR #$00FF
    case 0xC091F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x001AFF, 3); return true;
    // src/system/math/modulus8s.asm:10 INC
    case 0xC091F2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/math/modulus8s.asm:12 RTL
    case 0xC091F3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/mult16.asm (source_named).
bool execute_system_math_mult16_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/mult16.asm:3 STY TEMP_DIVIDEND
    case 0xC09032: cpu.execute_instruction<0x8C>(0x0000B4, 3); return true;
    // src/system/math/mult16.asm:4 STA MULT_TMP3
    case 0xC09035: cpu.execute_instruction<0x8D>(0x0000B6, 3); return true;
    // src/system/math/mult16.asm:5 STZ DIV_MULT_TMP2
    case 0xC09038: cpu.execute_instruction<0x9C>(0x0000B2, 3); return true;
    // src/system/math/mult16.asm:6 INC MULT16_NUM_CALLS
    case 0xC0903B: cpu.execute_instruction<0xEE>(0x0000C4, 3); return true;
    // src/system/math/mult16.asm:7 LDA MULT_TMP2
    case 0xC0903E: cpu.execute_instruction<0xAD>(0x0000B5, 3); return true;
    // src/system/math/mult16.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC09041: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/math/mult16.asm:9 TYA
    case 0xC09043: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/mult16.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC09044: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/mult16.asm:11 STA f:WRMPYA
    case 0xC09046: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/system/math/mult16.asm:12 LDY MULT_TMP2
    case 0xC0904A: cpu.execute_instruction<0xAC>(0x0000B5, 3); return true;
    // src/system/math/mult16.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC0904D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/mult16.asm:14 LDA f:RDMPYL
    case 0xC0904F: cpu.execute_instruction<0xAF>(0x004216, 4); return true;
    // src/system/math/mult16.asm:15 STA DIV_MULT_TMP
    case 0xC09053: cpu.execute_instruction<0x8D>(0x0000B0, 3); return true;
    // src/system/math/mult16.asm:16 TYA
    case 0xC09056: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/mult16.asm:17 STA f:WRMPYA
    case 0xC09057: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/system/math/mult16.asm:18 LDA MULT_TMP3
    case 0xC0905B: cpu.execute_instruction<0xAD>(0x0000B6, 3); return true;
    // src/system/math/mult16.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC0905E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/math/mult16.asm:20 LDA TEMP_DIVIDEND
    case 0xC09060: cpu.execute_instruction<0xAD>(0x0000B4, 3); return true;
    // src/system/math/mult16.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC09063: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/mult16.asm:22 TAY
    case 0xC09065: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/math/mult16.asm:23 LDA f:RDMPYL
    case 0xC09066: cpu.execute_instruction<0xAF>(0x004216, 4); return true;
    // src/system/math/mult16.asm:24 CLC
    case 0xC0906A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/math/mult16.asm:25 ADC MULT_TMP
    case 0xC0906B: cpu.execute_instruction<0x6D>(0x0000B1, 3); return true;
    // src/system/math/mult16.asm:26 STA MULT_TMP
    case 0xC0906E: cpu.execute_instruction<0x8D>(0x0000B1, 3); return true;
    // src/system/math/mult16.asm:27 TYA
    case 0xC09071: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/mult16.asm:28 STA f:WRMPYA
    case 0xC09072: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/system/math/mult16.asm:29 NOP
    case 0xC09076: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/mult16.asm:30 LDA MULT_TMP
    case 0xC09077: cpu.execute_instruction<0xAD>(0x0000B1, 3); return true;
    // src/system/math/mult16.asm:31 CLC
    case 0xC0907A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/math/mult16.asm:32 ADC f:RDMPYL
    case 0xC0907B: cpu.execute_instruction<0x6F>(0x004216, 4); return true;
    // src/system/math/mult16.asm:33 STA MULT_TMP
    case 0xC0907F: cpu.execute_instruction<0x8D>(0x0000B1, 3); return true;
    // src/system/math/mult16.asm:34 LDA DIV_MULT_TMP
    case 0xC09082: cpu.execute_instruction<0xAD>(0x0000B0, 3); return true;
    // src/system/math/mult16.asm:35 RTL
    case 0xC09085: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/mult168.asm (source_named).
bool execute_system_math_mult168_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/mult168.asm:4 REP #PROC_FLAGS::INDEX8
    case 0xC08FF7: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/system/math/mult168.asm:6 XBA
    case 0xC08FF9: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/math/mult168.asm:7 BEQ @UNKNOWN0
    case 0xC08FFA: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/system/math/mult168.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC08FFC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/math/mult168.asm:9 XBA
    case 0xC08FFE: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/math/mult168.asm:10 PHA
    case 0xC08FFF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/math/mult168.asm:11 TYA
    case 0xC09000: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/mult168.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC09001: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/mult168.asm:13 STA f:WRMPYA
    case 0xC09003: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/system/math/mult168.asm:14 NOP
    case 0xC09007: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/mult168.asm:15 NOP
    case 0xC09008: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/mult168.asm:16 LDA f:RDMPYL
    case 0xC09009: cpu.execute_instruction<0xAF>(0x004216, 4); return true;
    // src/system/math/mult168.asm:17 TAY
    case 0xC0900D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/math/mult168.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC0900E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/math/mult168.asm:19 PLA
    case 0xC09010: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/math/mult168.asm:20 STA f:WRMPYB
    case 0xC09011: cpu.execute_instruction<0x8F>(0x004203, 4); return true;
    // src/system/math/mult168.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC09015: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/mult168.asm:22 TYA
    case 0xC09017: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/mult168.asm:23 XBA
    case 0xC09018: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/math/mult168.asm:24 AND #$FF00
    case 0xC09019: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/system/math/mult168.asm:24 AND #$FF00
    // Overlapping static entry reached from 0xC09019.
    case 0xC0901B: cpu.execute_instruction<0xFF>(0x166F18, 4); return true;
    // src/system/math/mult168.asm:25 CLC
    case 0xC0901C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/math/mult168.asm:26 ADC f:RDMPYL
    case 0xC0901D: cpu.execute_instruction<0x6F>(0x004216, 4); return true;
    // src/system/math/mult168.asm:26 ADC f:RDMPYL
    // Overlapping static entry reached from 0xC0901B.
    case 0xC0901F: cpu.execute_instruction<0x42>(0x000000, 2); return true;
    // src/system/math/mult168.asm:27 RTL
    case 0xC09021: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/system/math/mult168.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC09022: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/math/mult168.asm:30 TYA
    case 0xC09024: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/mult168.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC09025: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/mult168.asm:32 STA f:WRMPYA
    case 0xC09027: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/system/math/mult168.asm:33 NOP
    case 0xC0902B: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/mult168.asm:34 NOP
    case 0xC0902C: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/mult168.asm:35 LDA f:RDMPYL
    case 0xC0902D: cpu.execute_instruction<0xAF>(0x004216, 4); return true;
    // src/system/math/mult168.asm:36 RTL
    case 0xC09031: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/mult32.asm (source_named).
bool execute_system_math_mult32_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/mult32.asm:3 LDA $08
    case 0xC09086: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/math/mult32.asm:4 STA MULT_TMP6
    case 0xC09088: cpu.execute_instruction<0x8D>(0x0000BA, 3); return true;
    // src/system/math/mult32.asm:5 LDA $06
    case 0xC0908B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/system/math/mult32.asm:6 STA MULT_TMP5
    case 0xC0908D: cpu.execute_instruction<0x8D>(0x0000B8, 3); return true;
    // src/system/math/mult32.asm:7 LDY $0A
    case 0xC09090: cpu.execute_instruction<0xA4>(0x00000A, 2); return true;
    // src/system/math/mult32.asm:8 JSL MULT16
    case 0xC09092: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/system/math/mult32.asm:9 STA $06
    case 0xC09096: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/math/mult32.asm:10 LDA TEMP_DIVIDEND
    case 0xC09098: cpu.execute_instruction<0xAD>(0x0000B4, 3); return true;
    // src/system/math/mult32.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC0909B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/math/mult32.asm:12 LDA MULT_TMP4
    case 0xC0909D: cpu.execute_instruction<0xAD>(0x0000B7, 3); return true;
    // src/system/math/mult32.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC090A0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/mult32.asm:14 STA f:WRMPYA
    case 0xC090A2: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/system/math/mult32.asm:15 LDA DIV_MULT_TMP2
    case 0xC090A6: cpu.execute_instruction<0xAD>(0x0000B2, 3); return true;
    // src/system/math/mult32.asm:16 NOP
    case 0xC090A9: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/mult32.asm:17 CLC
    case 0xC090AA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/math/mult32.asm:18 ADC f:RDMPYL
    case 0xC090AB: cpu.execute_instruction<0x6F>(0x004216, 4); return true;
    // src/system/math/mult32.asm:19 STA $08
    case 0xC090AF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/math/mult32.asm:20 LDA MULT_TMP5
    case 0xC090B1: cpu.execute_instruction<0xAD>(0x0000B8, 3); return true;
    // src/system/math/mult32.asm:21 LDY $0C
    case 0xC090B4: cpu.execute_instruction<0xA4>(0x00000C, 2); return true;
    // src/system/math/mult32.asm:22 JSL MULT16
    case 0xC090B6: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/system/math/mult32.asm:23 CLC
    case 0xC090BA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/math/mult32.asm:24 ADC $08
    case 0xC090BB: cpu.execute_instruction<0x65>(0x000008, 2); return true;
    // src/system/math/mult32.asm:25 STA $08
    case 0xC090BD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/math/mult32.asm:26 LDA MULT_TMP6
    case 0xC090BF: cpu.execute_instruction<0xAD>(0x0000BA, 3); return true;
    // src/system/math/mult32.asm:27 LDY $0A
    case 0xC090C2: cpu.execute_instruction<0xA4>(0x00000A, 2); return true;
    // src/system/math/mult32.asm:28 JSL MULT16
    case 0xC090C4: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/system/math/mult32.asm:29 CLC
    case 0xC090C8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/math/mult32.asm:30 ADC $08
    case 0xC090C9: cpu.execute_instruction<0x65>(0x000008, 2); return true;
    // src/system/math/mult32.asm:31 STA $08
    case 0xC090CB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/math/mult32.asm:32 RTL
    case 0xC090CD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/mult8.asm (source_named).
bool execute_system_math_mult8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/mult8.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC08FE8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/mult8.asm:4 STA f:WRMPYA
    case 0xC08FEA: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/system/math/mult8.asm:5 NOP
    case 0xC08FEE: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/mult8.asm:6 NOP
    case 0xC08FEF: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/mult8.asm:7 LDA f:RDMPYL
    case 0xC08FF0: cpu.execute_instruction<0xAF>(0x004216, 4); return true;
    // src/system/math/mult8.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC08FF4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/math/mult8.asm:9 RTL
    case 0xC08FF6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/rand.asm (source_named).
bool execute_system_math_rand_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/rand.asm:3 PHP
    case 0xC08E9A: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/math/rand.asm:4 REP #PROC_FLAGS::ACCUM8
    case 0xC08E9B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/rand.asm:5 LDA RAND_A
    case 0xC08E9D: cpu.execute_instruction<0xAD>(0x000024, 3); return true;
    // src/system/math/rand.asm:6 SEP #PROC_FLAGS::ACCUM8
    case 0xC08EA0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/math/rand.asm:7 XBA
    case 0xC08EA2: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/math/rand.asm:8 LDA RAND_B
    case 0xC08EA3: cpu.execute_instruction<0xAD>(0x000026, 3); return true;
    // src/system/math/rand.asm:9 REP #PROC_FLAGS::ACCUM8
    case 0xC08EA6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/rand.asm:10 STA f:WRMPYA
    case 0xC08EA8: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/system/math/rand.asm:11 CLC
    case 0xC08EAC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/math/rand.asm:12 ADC #$006D
    case 0xC08EAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006D, 2); else cpu.execute_instruction<0x69>(0x00006D, 3); return true;
    // src/system/math/rand.asm:12 ADC #$006D
    // Overlapping static entry reached from 0xC08EAD.
    case 0xC08EAF: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/math/rand.asm:13 STA RAND_B
    case 0xC08EB0: cpu.execute_instruction<0x8D>(0x000026, 3); return true;
    // src/system/math/rand.asm:14 LDA f:RDMPYL
    case 0xC08EB3: cpu.execute_instruction<0xAF>(0x004216, 4); return true;
    // src/system/math/rand.asm:15 ROR
    case 0xC08EB7: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/math/rand.asm:16 ROR
    case 0xC08EB8: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/math/rand.asm:17 PHA
    case 0xC08EB9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/math/rand.asm:18 AND #$0003
    case 0xC08EBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/system/math/rand.asm:18 AND #$0003
    // Overlapping static entry reached from 0xC08EBA.
    case 0xC08EBC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/system/math/rand.asm:19 CLC
    case 0xC08EBD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/math/rand.asm:20 ADC RAND_A
    case 0xC08EBE: cpu.execute_instruction<0x6D>(0x000024, 3); return true;
    // src/system/math/rand.asm:21 ROR
    case 0xC08EC1: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/math/rand.asm:22 BCC @UNKNOWN0
    case 0xC08EC2: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/system/math/rand.asm:23 ORA #$8000
    case 0xC08EC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/system/math/rand.asm:23 ORA #$8000
    // Overlapping static entry reached from 0xC08EC4.
    case 0xC08EC6: cpu.execute_instruction<0x80>(0x00008D, 2); return true;
    // src/system/math/rand.asm:25 STA RAND_A
    case 0xC08EC7: cpu.execute_instruction<0x8D>(0x000024, 3); return true;
    // src/system/math/rand.asm:26 PLA
    case 0xC08ECA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/math/rand.asm:27 ROR
    case 0xC08ECB: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/math/rand.asm:28 ROR
    case 0xC08ECC: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/math/rand.asm:29 AND #$00FF
    case 0xC08ECD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/math/rand.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC08ECD.
    case 0xC08ECF: cpu.execute_instruction<0x00>(0x000028, 2); return true;
    // src/system/math/rand.asm:30 PLP
    case 0xC08ED0: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/math/rand.asm:31 RTL
    case 0xC08ED1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/rand_0_3.asm (source_named).
bool execute_system_math_rand_0_3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/rand_0_3.asm:3 JSL RAND
    case 0xC0A633: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/system/math/rand_0_3.asm:4 AND #$0003
    case 0xC0A637: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/system/math/rand_0_3.asm:4 AND #$0003
    // Overlapping static entry reached from 0xC0A637.
    case 0xC0A639: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/system/math/rand_0_3.asm:5 RTL
    case 0xC0A63A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/rand_0_7.asm (source_named).
bool execute_system_math_rand_0_7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/rand_0_7.asm:3 JSL RAND
    case 0xC0A63B: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/system/math/rand_0_7.asm:4 AND #$0007
    case 0xC0A63F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/system/math/rand_0_7.asm:4 AND #$0007
    // Overlapping static entry reached from 0xC0A63F.
    case 0xC0A641: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/system/math/rand_0_7.asm:5 RTL
    case 0xC0A642: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/rand_limit.asm (source_named).
bool execute_system_math_rand_limit_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/math/rand_limit.asm:3 BEGIN_C_FUNCTION
    case 0xC26A2D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/math/rand_limit.asm:8 END_STACK_VARS
    case 0xC26A2F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/math/rand_limit.asm:8 END_STACK_VARS
    case 0xC26A30: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/math/rand_limit.asm:8 END_STACK_VARS
    case 0xC26A31: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/math/rand_limit.asm:8 END_STACK_VARS
    case 0xC26A32: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/math/rand_limit.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC26A32.
    case 0xC26A34: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/math/rand_limit.asm:8 END_STACK_VARS
    case 0xC26A35: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/math/rand_limit.asm:8 END_STACK_VARS
    case 0xC26A36: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/math/rand_limit.asm:9 TAX
    case 0xC26A37: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/math/rand_limit.asm:10 STX @LOCAL00
    case 0xC26A38: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/math/rand_limit.asm:11 JSR RAND_LONG
    case 0xC26A3A: cpu.execute_instruction<0x20>(0x0069EF, 3); return true;
    // src/system/math/rand_limit.asm:12 LDX @LOCAL00
    case 0xC26A3D: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/math/rand_limit.asm:13 JSR TRUNCATE_16_TO_8
    case 0xC26A3F: cpu.execute_instruction<0x20>(0x0069F8, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/math/rand_limit.asm:14 END_C_FUNCTION
    case 0xC26A42: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/math/rand_limit.asm:14 END_C_FUNCTION
    case 0xC26A43: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/rand_long.asm (source_named).
bool execute_system_math_rand_long_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/rand_long.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC269EF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/system/math/rand_long.asm:4 JSL RAND
    case 0xC269F1: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/system/math/rand_long.asm:5 SEP #PROC_FLAGS::ACCUM8
    case 0xC269F5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/math/rand_long.asm:6 RTS
    case 0xC269F7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/rand_mod.asm (source_named).
bool execute_system_math_rand_mod_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/math/rand_mod.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC45F7B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/math/rand_mod.asm:7 END_STACK_VARS
    case 0xC45F7D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/math/rand_mod.asm:7 END_STACK_VARS
    case 0xC45F7E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/math/rand_mod.asm:7 END_STACK_VARS
    case 0xC45F7F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/math/rand_mod.asm:7 END_STACK_VARS
    case 0xC45F80: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/math/rand_mod.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC45F80.
    case 0xC45F82: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/math/rand_mod.asm:7 END_STACK_VARS
    case 0xC45F83: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/math/rand_mod.asm:7 END_STACK_VARS
    case 0xC45F84: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/math/rand_mod.asm:8 TAX
    case 0xC45F85: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/math/rand_mod.asm:9 STX @LOCAL00
    case 0xC45F86: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/math/rand_mod.asm:10 JSL RAND
    case 0xC45F88: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/system/math/rand_mod.asm:11 LDX @LOCAL00
    case 0xC45F8C: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/math/rand_mod.asm:12 TXY
    case 0xC45F8E: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/math/rand_mod.asm:13 INY
    case 0xC45F8F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/math/rand_mod.asm:14 JSL MODULUS16
    case 0xC45F90: cpu.execute_instruction<0x22>(0xC09231, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/math/rand_mod.asm:15 END_C_FUNCTION
    case 0xC45F94: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/math/rand_mod.asm:15 END_C_FUNCTION
    case 0xC45F95: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/truncate_16_to_8.asm (source_named).
bool execute_system_math_truncate_16_to_8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/math/truncate_16_to_8.asm:3 BEGIN_C_FUNCTION
    case 0xC269F8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/math/truncate_16_to_8.asm:9 END_STACK_VARS
    case 0xC269FA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/math/truncate_16_to_8.asm:9 END_STACK_VARS
    case 0xC269FB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/math/truncate_16_to_8.asm:9 END_STACK_VARS
    case 0xC269FC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/math/truncate_16_to_8.asm:9 END_STACK_VARS
    case 0xC269FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/math/truncate_16_to_8.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC269FD.
    case 0xC269FF: cpu.execute_instruction<0xFF>(0xE2685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/math/truncate_16_to_8.asm:9 END_STACK_VARS
    case 0xC26A00: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/math/truncate_16_to_8.asm:9 END_STACK_VARS
    case 0xC26A01: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/math/truncate_16_to_8.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC26A02: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/math/truncate_16_to_8.asm:10 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC269FF.
    case 0xC26A03: cpu.execute_instruction<0x20>(0x000E85, 3); return true;
    // src/system/math/truncate_16_to_8.asm:11 STA @LOCAL00
    case 0xC26A04: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/math/truncate_16_to_8.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC26A06: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/truncate_16_to_8.asm:13 TXA
    case 0xC26A08: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/math/truncate_16_to_8.asm:14 STORE_INT1632 @VIRTUAL0A
    case 0xC26A09: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/math/truncate_16_to_8.asm:14 STORE_INT1632 @VIRTUAL0A
    case 0xC26A0B: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/system/math/truncate_16_to_8.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC26A0D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/system/math/truncate_16_to_8.asm:16 MOVE_INT832 @LOCAL00, @VIRTUAL06
    case 0xC26A0F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/system/math/truncate_16_to_8.asm:16 MOVE_INT832 @LOCAL00, @VIRTUAL06
    case 0xC26A11: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/system/math/truncate_16_to_8.asm:16 MOVE_INT832 @LOCAL00, @VIRTUAL06
    case 0xC26A13: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/system/math/truncate_16_to_8.asm:16 MOVE_INT832 @LOCAL00, @VIRTUAL06
    case 0xC26A15: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/system/math/truncate_16_to_8.asm:16 MOVE_INT832 @LOCAL00, @VIRTUAL06
    case 0xC26A17: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/system/math/truncate_16_to_8.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC26A19: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/truncate_16_to_8.asm:18 JSL MULT32
    case 0xC26A1B: cpu.execute_instruction<0x22>(0xC09086, 4); return true;
    // src/system/math/truncate_16_to_8.asm:19 SEP #PROC_FLAGS::INDEX8
    case 0xC26A1F: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/system/math/truncate_16_to_8.asm:20 LDY #8
    case 0xC26A21: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x002208, 3); return true;
    // src/system/math/truncate_16_to_8.asm:21 JSL ASR32_UNKNOWN1
    case 0xC26A23: cpu.execute_instruction<0x22>(0xC0926C, 4); return true;
    // src/system/math/truncate_16_to_8.asm:21 JSL ASR32_UNKNOWN1
    // Overlapping static entry reached from 0xC26A21.
    case 0xC26A24: cpu.execute_instruction<0x6C>(0x00C092, 3); return true;
    // src/system/math/truncate_16_to_8.asm:22 LDA @VIRTUAL06
    case 0xC26A27: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/system/math/truncate_16_to_8.asm:23 REP #PROC_FLAGS::INDEX8
    case 0xC26A29: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/math/truncate_16_to_8.asm:24 END_C_FUNCTION
    case 0xC26A2B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/math/truncate_16_to_8.asm:24 END_C_FUNCTION
    case 0xC26A2C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/memcpy16.asm (source_named).
bool execute_system_memcpy16_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/memcpy16.asm:3 STX MEMCPY_WORDS_LEFT
    case 0xC08ED2: cpu.execute_instruction<0x8E>(0x0000A5, 3); return true;
    // src/system/memcpy16.asm:4 LSR MEMCPY_WORDS_LEFT
    case 0xC08ED5: cpu.execute_instruction<0x4E>(0x0000A5, 3); return true;
    // src/system/memcpy16.asm:5 TAX
    case 0xC08ED8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/memcpy16.asm:6 LDY #$0000
    case 0xC08ED9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/memcpy16.asm:6 LDY #$0000
    // Overlapping static entry reached from 0xC08ED9.
    case 0xC08EDB: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/system/memcpy16.asm:7 BRA @UNKNOWN1
    case 0xC08EDC: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/system/memcpy16.asm:9 LDA [$0E],Y
    case 0xC08EDE: cpu.execute_instruction<0xB7>(0x00000E, 2); return true;
    // src/system/memcpy16.asm:10 STA __BSS_START__,X
    case 0xC08EE0: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/memcpy16.asm:11 INX
    case 0xC08EE3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/memcpy16.asm:12 INX
    case 0xC08EE4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/memcpy16.asm:13 INY
    case 0xC08EE5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/memcpy16.asm:14 INY
    case 0xC08EE6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/memcpy16.asm:16 DEC MEMCPY_WORDS_LEFT
    case 0xC08EE7: cpu.execute_instruction<0xCE>(0x0000A5, 3); return true;
    // src/system/memcpy16.asm:17 BPL @UNKNOWN0
    case 0xC08EEA: cpu.execute_instruction<0x10>(0x0000F2, 2); return true;
    // src/system/memcpy16.asm:18 RTL
    case 0xC08EEC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/memcpy24.asm (source_named).
bool execute_system_memcpy24_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/memcpy24.asm:3 TAY
    case 0xC08EED: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/memcpy24.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC08EEE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/memcpy24.asm:5 BRA @UNKNOWN1
    case 0xC08EF0: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/system/memcpy24.asm:7 LDA [$12],Y
    case 0xC08EF2: cpu.execute_instruction<0xB7>(0x000012, 2); return true;
    // src/system/memcpy24.asm:8 STA [$0E],Y
    case 0xC08EF4: cpu.execute_instruction<0x97>(0x00000E, 2); return true;
    // src/system/memcpy24.asm:10 DEY
    case 0xC08EF6: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/memcpy24.asm:11 BPL @UNKNOWN0
    case 0xC08EF7: cpu.execute_instruction<0x10>(0x0000F9, 2); return true;
    // src/system/memcpy24.asm:12 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08EF9: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/memcpy24.asm:13 RTL
    case 0xC08EFB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/memset16.asm (source_named).
bool execute_system_memset16_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/memset16.asm:3 TXY
    case 0xC08EFC: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/memset16.asm:4 TAX
    case 0xC08EFD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/memset16.asm:5 TYA
    case 0xC08EFE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/memset16.asm:6 LSR
    case 0xC08EFF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/memset16.asm:7 TAY
    case 0xC08F00: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/memset16.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC08F01: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/memset16.asm:9 LDA $0E
    case 0xC08F03: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/memset16.asm:10 XBA
    case 0xC08F05: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/memset16.asm:11 LDA $0E
    case 0xC08F06: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/memset16.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC08F08: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/memset16.asm:13 BRA @LOOP_ENTRY
    case 0xC08F0A: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/system/memset16.asm:15 STA __BSS_START__,X
    case 0xC08F0C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/memset16.asm:16 INX
    case 0xC08F0F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/memset16.asm:17 INX
    case 0xC08F10: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/memset16.asm:19 DEY
    case 0xC08F11: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/memset16.asm:20 BPL @LOOP_ITERATION
    case 0xC08F12: cpu.execute_instruction<0x10>(0x0000F8, 2); return true;
    // src/system/memset16.asm:21 RTL
    case 0xC08F14: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/memset24.asm (source_named).
bool execute_system_memset24_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/memset24.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC08F15: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/memset24.asm:4 TXY
    case 0xC08F17: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/memset24.asm:6 DEY
    case 0xC08F18: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/memset24.asm:7 BMI @LOOP_EXIT
    case 0xC08F19: cpu.execute_instruction<0x30>(0x000004, 2); return true;
    // src/system/memset24.asm:8 STA [$0E],Y
    case 0xC08F1B: cpu.execute_instruction<0x97>(0x00000E, 2); return true;
    // src/system/memset24.asm:9 BRA @LOOP_BEGIN
    case 0xC08F1D: cpu.execute_instruction<0x80>(0x0000F9, 2); return true;
    // src/system/memset24.asm:11 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08F1F: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/memset24.asm:12 RTL
    case 0xC08F21: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/nmi_vector.asm (source_named).
bool execute_system_nmi_vector_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/nmi_vector.asm:3 JMP f:NMI
    case 0xC08147: cpu.execute_instruction<0x5C>(0xC08170, 4); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/oam_clear.asm (source_named).
bool execute_system_oam_clear_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/oam_clear.asm:6 SEP #PROC_FLAGS::ACCUM8
    case 0xC088B1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/oam_clear.asm:7 REP #PROC_FLAGS::INDEX8
    case 0xC088B3: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/system/oam_clear.asm:8 LDX #$0000
    case 0xC088B5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/oam_clear.asm:8 LDX #$0000
    // Overlapping static entry reached from 0xC088B5.
    case 0xC088B7: cpu.execute_instruction<0x00>(0x00008E, 2); return true;
    // src/system/oam_clear.asm:9 STX PRIORITY_0_SPRITE_OFFSET
    case 0xC088B8: cpu.execute_instruction<0x8E>(0x002504, 3); return true;
    // src/system/oam_clear.asm:10 STX PRIORITY_1_SPRITE_OFFSET
    case 0xC088BB: cpu.execute_instruction<0x8E>(0x002606, 3); return true;
    // src/system/oam_clear.asm:11 STX PRIORITY_2_SPRITE_OFFSET
    case 0xC088BE: cpu.execute_instruction<0x8E>(0x002708, 3); return true;
    // src/system/oam_clear.asm:12 STX PRIORITY_3_SPRITE_OFFSET
    case 0xC088C1: cpu.execute_instruction<0x8E>(0x00280A, 3); return true;
    // src/system/oam_clear.asm:13 LDX NEXT_FRAME_BUF_ID
    case 0xC088C4: cpu.execute_instruction<0xAE>(0x00002E, 3); return true;
    // src/system/oam_clear.asm:14 DEX
    case 0xC088C7: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/system/oam_clear.asm:15 BNEL @UNKNOWN1
    case 0xC088C8: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/system/oam_clear.asm:15 BNEL @UNKNOWN1
    case 0xC088CA: cpu.execute_instruction<0x4C>(0x0089F3, 3); return true;
    // src/system/oam_clear.asm:16 LDX #.LOWORD(OAM1)
    case 0xC088CD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000500, 3); return true;
    // src/system/oam_clear.asm:16 LDX #.LOWORD(OAM1)
    // Overlapping static entry reached from 0xC088CD.
    case 0xC088CF: cpu.execute_instruction<0x05>(0x00008E, 2); return true;
    // src/system/oam_clear.asm:17 STX OAM_ADDR
    case 0xC088D0: cpu.execute_instruction<0x8E>(0x000003, 3); return true;
    // src/system/oam_clear.asm:17 STX OAM_ADDR
    // Overlapping static entry reached from 0xC088CF.
    case 0xC088D1: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/system/oam_clear.asm:18 LDX #.LOWORD(OAM1) + 128 * .SIZEOF(oam_entry)
    case 0xC088D3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000700, 3); return true;
    // src/system/oam_clear.asm:18 LDX #.LOWORD(OAM1) + 128 * .SIZEOF(oam_entry)
    // Overlapping static entry reached from 0xC088D3.
    case 0xC088D5: cpu.execute_instruction<0x07>(0x00008E, 2); return true;
    // src/system/oam_clear.asm:19 STX OAM_END_ADDR
    case 0xC088D6: cpu.execute_instruction<0x8E>(0x000005, 3); return true;
    // src/system/oam_clear.asm:19 STX OAM_END_ADDR
    // Overlapping static entry reached from 0xC088D5.
    case 0xC088D7: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/system/oam_clear.asm:20 LDX #.LOWORD(OAM1_HIGH_TABLE)
    case 0xC088D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000700, 3); return true;
    // src/system/oam_clear.asm:20 LDX #.LOWORD(OAM1_HIGH_TABLE)
    // Overlapping static entry reached from 0xC088D9.
    case 0xC088DB: cpu.execute_instruction<0x07>(0x00008E, 2); return true;
    // src/system/oam_clear.asm:21 STX OAM_HIGH_TABLE_ADDR
    case 0xC088DC: cpu.execute_instruction<0x8E>(0x000007, 3); return true;
    // src/system/oam_clear.asm:21 STX OAM_HIGH_TABLE_ADDR
    // Overlapping static entry reached from 0xC088DB.
    case 0xC088DD: cpu.execute_instruction<0x07>(0x000000, 2); return true;
    // src/system/oam_clear.asm:22 LDA #$80
    case 0xC088DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008D80, 3); return true;
    // src/system/oam_clear.asm:23 STA OAM_HIGH_TABLE_BUFFER
    case 0xC088E1: cpu.execute_instruction<0x8D>(0x00000A, 3); return true;
    // src/system/oam_clear.asm:23 STA OAM_HIGH_TABLE_BUFFER
    // Overlapping static entry reached from 0xC088DF.
    case 0xC088E2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/oam_clear.asm:23 STA OAM_HIGH_TABLE_BUFFER
    // Overlapping static entry reached from 0xC088E2.
    case 0xC088E3: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/system/oam_clear.asm:24 LDA #$E0
    case 0xC088E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x000BE0, 3); return true;
    // src/system/oam_clear.asm:25 PHD
    case 0xC088E6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/system/oam_clear.asm:26 PEA OAM1
    case 0xC088E7: cpu.execute_instruction<0xF4>(0x000500, 3); return true;
    // src/system/oam_clear.asm:27 PLD
    case 0xC088EA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/oam_clear.asm:28 STA <(OAM1 + 0 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088EB: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/system/oam_clear.asm:29 STA <(OAM1 + 1 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088ED: cpu.execute_instruction<0x85>(0x000005, 2); return true;
    // src/system/oam_clear.asm:30 STA <(OAM1 + 2 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088EF: cpu.execute_instruction<0x85>(0x000009, 2); return true;
    // src/system/oam_clear.asm:31 STA <(OAM1 + 3 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088F1: cpu.execute_instruction<0x85>(0x00000D, 2); return true;
    // src/system/oam_clear.asm:32 STA <(OAM1 + 4 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088F3: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/system/oam_clear.asm:33 STA <(OAM1 + 5 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088F5: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/system/oam_clear.asm:34 STA <(OAM1 + 6 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088F7: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/system/oam_clear.asm:35 STA <(OAM1 + 7 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088F9: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/system/oam_clear.asm:36 STA <(OAM1 + 8 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088FB: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/system/oam_clear.asm:37 STA <(OAM1 + 9 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088FD: cpu.execute_instruction<0x85>(0x000025, 2); return true;
    // src/system/oam_clear.asm:38 STA <(OAM1 + 10 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088FF: cpu.execute_instruction<0x85>(0x000029, 2); return true;
    // src/system/oam_clear.asm:39 STA <(OAM1 + 11 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08901: cpu.execute_instruction<0x85>(0x00002D, 2); return true;
    // src/system/oam_clear.asm:40 STA <(OAM1 + 12 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08903: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // src/system/oam_clear.asm:41 STA <(OAM1 + 13 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08905: cpu.execute_instruction<0x85>(0x000035, 2); return true;
    // src/system/oam_clear.asm:42 STA <(OAM1 + 14 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08907: cpu.execute_instruction<0x85>(0x000039, 2); return true;
    // src/system/oam_clear.asm:43 STA <(OAM1 + 15 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08909: cpu.execute_instruction<0x85>(0x00003D, 2); return true;
    // src/system/oam_clear.asm:44 STA <(OAM1 + 16 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0890B: cpu.execute_instruction<0x85>(0x000041, 2); return true;
    // src/system/oam_clear.asm:45 STA <(OAM1 + 17 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0890D: cpu.execute_instruction<0x85>(0x000045, 2); return true;
    // src/system/oam_clear.asm:46 STA <(OAM1 + 18 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0890F: cpu.execute_instruction<0x85>(0x000049, 2); return true;
    // src/system/oam_clear.asm:47 STA <(OAM1 + 19 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08911: cpu.execute_instruction<0x85>(0x00004D, 2); return true;
    // src/system/oam_clear.asm:48 STA <(OAM1 + 20 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08913: cpu.execute_instruction<0x85>(0x000051, 2); return true;
    // src/system/oam_clear.asm:49 STA <(OAM1 + 21 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08915: cpu.execute_instruction<0x85>(0x000055, 2); return true;
    // src/system/oam_clear.asm:50 STA <(OAM1 + 22 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08917: cpu.execute_instruction<0x85>(0x000059, 2); return true;
    // src/system/oam_clear.asm:51 STA <(OAM1 + 23 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08919: cpu.execute_instruction<0x85>(0x00005D, 2); return true;
    // src/system/oam_clear.asm:52 STA <(OAM1 + 24 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0891B: cpu.execute_instruction<0x85>(0x000061, 2); return true;
    // src/system/oam_clear.asm:53 STA <(OAM1 + 25 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0891D: cpu.execute_instruction<0x85>(0x000065, 2); return true;
    // src/system/oam_clear.asm:54 STA <(OAM1 + 26 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0891F: cpu.execute_instruction<0x85>(0x000069, 2); return true;
    // src/system/oam_clear.asm:55 STA <(OAM1 + 27 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08921: cpu.execute_instruction<0x85>(0x00006D, 2); return true;
    // src/system/oam_clear.asm:56 STA <(OAM1 + 28 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08923: cpu.execute_instruction<0x85>(0x000071, 2); return true;
    // src/system/oam_clear.asm:57 STA <(OAM1 + 29 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08925: cpu.execute_instruction<0x85>(0x000075, 2); return true;
    // src/system/oam_clear.asm:58 STA <(OAM1 + 30 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08927: cpu.execute_instruction<0x85>(0x000079, 2); return true;
    // src/system/oam_clear.asm:59 STA <(OAM1 + 31 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08929: cpu.execute_instruction<0x85>(0x00007D, 2); return true;
    // src/system/oam_clear.asm:60 STA <(OAM1 + 32 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0892B: cpu.execute_instruction<0x85>(0x000081, 2); return true;
    // src/system/oam_clear.asm:61 STA <(OAM1 + 33 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0892D: cpu.execute_instruction<0x85>(0x000085, 2); return true;
    // src/system/oam_clear.asm:62 STA <(OAM1 + 34 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0892F: cpu.execute_instruction<0x85>(0x000089, 2); return true;
    // src/system/oam_clear.asm:63 STA <(OAM1 + 35 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08931: cpu.execute_instruction<0x85>(0x00008D, 2); return true;
    // src/system/oam_clear.asm:64 STA <(OAM1 + 36 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08933: cpu.execute_instruction<0x85>(0x000091, 2); return true;
    // src/system/oam_clear.asm:65 STA <(OAM1 + 37 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08935: cpu.execute_instruction<0x85>(0x000095, 2); return true;
    // src/system/oam_clear.asm:66 STA <(OAM1 + 38 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08937: cpu.execute_instruction<0x85>(0x000099, 2); return true;
    // src/system/oam_clear.asm:67 STA <(OAM1 + 39 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08939: cpu.execute_instruction<0x85>(0x00009D, 2); return true;
    // src/system/oam_clear.asm:68 STA <(OAM1 + 40 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0893B: cpu.execute_instruction<0x85>(0x0000A1, 2); return true;
    // src/system/oam_clear.asm:69 STA <(OAM1 + 41 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0893D: cpu.execute_instruction<0x85>(0x0000A5, 2); return true;
    // src/system/oam_clear.asm:70 STA <(OAM1 + 42 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0893F: cpu.execute_instruction<0x85>(0x0000A9, 2); return true;
    // src/system/oam_clear.asm:71 STA <(OAM1 + 43 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08941: cpu.execute_instruction<0x85>(0x0000AD, 2); return true;
    // src/system/oam_clear.asm:72 STA <(OAM1 + 44 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08943: cpu.execute_instruction<0x85>(0x0000B1, 2); return true;
    // src/system/oam_clear.asm:73 STA <(OAM1 + 45 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08945: cpu.execute_instruction<0x85>(0x0000B5, 2); return true;
    // src/system/oam_clear.asm:74 STA <(OAM1 + 46 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08947: cpu.execute_instruction<0x85>(0x0000B9, 2); return true;
    // src/system/oam_clear.asm:75 STA <(OAM1 + 47 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08949: cpu.execute_instruction<0x85>(0x0000BD, 2); return true;
    // src/system/oam_clear.asm:76 STA <(OAM1 + 48 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0894B: cpu.execute_instruction<0x85>(0x0000C1, 2); return true;
    // src/system/oam_clear.asm:77 STA <(OAM1 + 49 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0894D: cpu.execute_instruction<0x85>(0x0000C5, 2); return true;
    // src/system/oam_clear.asm:78 STA <(OAM1 + 50 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0894F: cpu.execute_instruction<0x85>(0x0000C9, 2); return true;
    // src/system/oam_clear.asm:79 STA <(OAM1 + 51 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08951: cpu.execute_instruction<0x85>(0x0000CD, 2); return true;
    // src/system/oam_clear.asm:80 STA <(OAM1 + 52 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08953: cpu.execute_instruction<0x85>(0x0000D1, 2); return true;
    // src/system/oam_clear.asm:81 STA <(OAM1 + 53 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08955: cpu.execute_instruction<0x85>(0x0000D5, 2); return true;
    // src/system/oam_clear.asm:82 STA <(OAM1 + 54 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08957: cpu.execute_instruction<0x85>(0x0000D9, 2); return true;
    // src/system/oam_clear.asm:83 STA <(OAM1 + 55 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08959: cpu.execute_instruction<0x85>(0x0000DD, 2); return true;
    // src/system/oam_clear.asm:84 STA <(OAM1 + 56 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0895B: cpu.execute_instruction<0x85>(0x0000E1, 2); return true;
    // src/system/oam_clear.asm:85 STA <(OAM1 + 57 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0895D: cpu.execute_instruction<0x85>(0x0000E5, 2); return true;
    // src/system/oam_clear.asm:86 STA <(OAM1 + 58 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0895F: cpu.execute_instruction<0x85>(0x0000E9, 2); return true;
    // src/system/oam_clear.asm:87 STA <(OAM1 + 59 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08961: cpu.execute_instruction<0x85>(0x0000ED, 2); return true;
    // src/system/oam_clear.asm:88 STA <(OAM1 + 60 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08963: cpu.execute_instruction<0x85>(0x0000F1, 2); return true;
    // src/system/oam_clear.asm:89 STA <(OAM1 + 61 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08965: cpu.execute_instruction<0x85>(0x0000F5, 2); return true;
    // src/system/oam_clear.asm:90 STA <(OAM1 + 62 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08967: cpu.execute_instruction<0x85>(0x0000F9, 2); return true;
    // src/system/oam_clear.asm:91 STA <(OAM1 + 63 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08969: cpu.execute_instruction<0x85>(0x0000FD, 2); return true;
    // src/system/oam_clear.asm:92 PEA OAM1 + $100
    case 0xC0896B: cpu.execute_instruction<0xF4>(0x000600, 3); return true;
    // src/system/oam_clear.asm:93 PLD
    case 0xC0896E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/oam_clear.asm:94 STA <(OAM1 + 64 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0896F: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/system/oam_clear.asm:95 STA <(OAM1 + 65 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08971: cpu.execute_instruction<0x85>(0x000005, 2); return true;
    // src/system/oam_clear.asm:96 STA <(OAM1 + 66 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08973: cpu.execute_instruction<0x85>(0x000009, 2); return true;
    // src/system/oam_clear.asm:97 STA <(OAM1 + 67 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08975: cpu.execute_instruction<0x85>(0x00000D, 2); return true;
    // src/system/oam_clear.asm:98 STA <(OAM1 + 68 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08977: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/system/oam_clear.asm:99 STA <(OAM1 + 69 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08979: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/system/oam_clear.asm:100 STA <(OAM1 + 70 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0897B: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/system/oam_clear.asm:101 STA <(OAM1 + 71 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0897D: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/system/oam_clear.asm:102 STA <(OAM1 + 72 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0897F: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/system/oam_clear.asm:103 STA <(OAM1 + 73 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08981: cpu.execute_instruction<0x85>(0x000025, 2); return true;
    // src/system/oam_clear.asm:104 STA <(OAM1 + 74 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08983: cpu.execute_instruction<0x85>(0x000029, 2); return true;
    // src/system/oam_clear.asm:105 STA <(OAM1 + 75 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08985: cpu.execute_instruction<0x85>(0x00002D, 2); return true;
    // src/system/oam_clear.asm:106 STA <(OAM1 + 76 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08987: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // src/system/oam_clear.asm:107 STA <(OAM1 + 77 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08989: cpu.execute_instruction<0x85>(0x000035, 2); return true;
    // src/system/oam_clear.asm:108 STA <(OAM1 + 78 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0898B: cpu.execute_instruction<0x85>(0x000039, 2); return true;
    // src/system/oam_clear.asm:109 STA <(OAM1 + 79 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0898D: cpu.execute_instruction<0x85>(0x00003D, 2); return true;
    // src/system/oam_clear.asm:110 STA <(OAM1 + 80 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0898F: cpu.execute_instruction<0x85>(0x000041, 2); return true;
    // src/system/oam_clear.asm:111 STA <(OAM1 + 81 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08991: cpu.execute_instruction<0x85>(0x000045, 2); return true;
    // src/system/oam_clear.asm:112 STA <(OAM1 + 82 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08993: cpu.execute_instruction<0x85>(0x000049, 2); return true;
    // src/system/oam_clear.asm:113 STA <(OAM1 + 83 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08995: cpu.execute_instruction<0x85>(0x00004D, 2); return true;
    // src/system/oam_clear.asm:114 STA <(OAM1 + 84 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08997: cpu.execute_instruction<0x85>(0x000051, 2); return true;
    // src/system/oam_clear.asm:115 STA <(OAM1 + 85 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08999: cpu.execute_instruction<0x85>(0x000055, 2); return true;
    // src/system/oam_clear.asm:116 STA <(OAM1 + 86 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0899B: cpu.execute_instruction<0x85>(0x000059, 2); return true;
    // src/system/oam_clear.asm:117 STA <(OAM1 + 87 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0899D: cpu.execute_instruction<0x85>(0x00005D, 2); return true;
    // src/system/oam_clear.asm:118 STA <(OAM1 + 88 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0899F: cpu.execute_instruction<0x85>(0x000061, 2); return true;
    // src/system/oam_clear.asm:119 STA <(OAM1 + 89 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089A1: cpu.execute_instruction<0x85>(0x000065, 2); return true;
    // src/system/oam_clear.asm:120 STA <(OAM1 + 90 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089A3: cpu.execute_instruction<0x85>(0x000069, 2); return true;
    // src/system/oam_clear.asm:121 STA <(OAM1 + 91 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089A5: cpu.execute_instruction<0x85>(0x00006D, 2); return true;
    // src/system/oam_clear.asm:122 STA <(OAM1 + 92 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089A7: cpu.execute_instruction<0x85>(0x000071, 2); return true;
    // src/system/oam_clear.asm:123 STA <(OAM1 + 93 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089A9: cpu.execute_instruction<0x85>(0x000075, 2); return true;
    // src/system/oam_clear.asm:124 STA <(OAM1 + 94 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089AB: cpu.execute_instruction<0x85>(0x000079, 2); return true;
    // src/system/oam_clear.asm:125 STA <(OAM1 + 95 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089AD: cpu.execute_instruction<0x85>(0x00007D, 2); return true;
    // src/system/oam_clear.asm:126 STA <(OAM1 + 96 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089AF: cpu.execute_instruction<0x85>(0x000081, 2); return true;
    // src/system/oam_clear.asm:127 STA <(OAM1 + 97 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089B1: cpu.execute_instruction<0x85>(0x000085, 2); return true;
    // src/system/oam_clear.asm:128 STA <(OAM1 + 98 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089B3: cpu.execute_instruction<0x85>(0x000089, 2); return true;
    // src/system/oam_clear.asm:129 STA <(OAM1 + 99 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089B5: cpu.execute_instruction<0x85>(0x00008D, 2); return true;
    // src/system/oam_clear.asm:130 STA <(OAM1 + 100 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089B7: cpu.execute_instruction<0x85>(0x000091, 2); return true;
    // src/system/oam_clear.asm:131 STA <(OAM1 + 101 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089B9: cpu.execute_instruction<0x85>(0x000095, 2); return true;
    // src/system/oam_clear.asm:132 STA <(OAM1 + 102 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089BB: cpu.execute_instruction<0x85>(0x000099, 2); return true;
    // src/system/oam_clear.asm:133 STA <(OAM1 + 103 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089BD: cpu.execute_instruction<0x85>(0x00009D, 2); return true;
    // src/system/oam_clear.asm:134 STA <(OAM1 + 104 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089BF: cpu.execute_instruction<0x85>(0x0000A1, 2); return true;
    // src/system/oam_clear.asm:135 STA <(OAM1 + 105 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089C1: cpu.execute_instruction<0x85>(0x0000A5, 2); return true;
    // src/system/oam_clear.asm:136 STA <(OAM1 + 106 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089C3: cpu.execute_instruction<0x85>(0x0000A9, 2); return true;
    // src/system/oam_clear.asm:137 STA <(OAM1 + 107 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089C5: cpu.execute_instruction<0x85>(0x0000AD, 2); return true;
    // src/system/oam_clear.asm:138 STA <(OAM1 + 108 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089C7: cpu.execute_instruction<0x85>(0x0000B1, 2); return true;
    // src/system/oam_clear.asm:139 STA <(OAM1 + 109 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089C9: cpu.execute_instruction<0x85>(0x0000B5, 2); return true;
    // src/system/oam_clear.asm:140 STA <(OAM1 + 110 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089CB: cpu.execute_instruction<0x85>(0x0000B9, 2); return true;
    // src/system/oam_clear.asm:141 STA <(OAM1 + 111 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089CD: cpu.execute_instruction<0x85>(0x0000BD, 2); return true;
    // src/system/oam_clear.asm:142 STA <(OAM1 + 112 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089CF: cpu.execute_instruction<0x85>(0x0000C1, 2); return true;
    // src/system/oam_clear.asm:143 STA <(OAM1 + 113 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089D1: cpu.execute_instruction<0x85>(0x0000C5, 2); return true;
    // src/system/oam_clear.asm:144 STA <(OAM1 + 114 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089D3: cpu.execute_instruction<0x85>(0x0000C9, 2); return true;
    // src/system/oam_clear.asm:145 STA <(OAM1 + 115 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089D5: cpu.execute_instruction<0x85>(0x0000CD, 2); return true;
    // src/system/oam_clear.asm:146 STA <(OAM1 + 116 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089D7: cpu.execute_instruction<0x85>(0x0000D1, 2); return true;
    // src/system/oam_clear.asm:147 STA <(OAM1 + 117 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089D9: cpu.execute_instruction<0x85>(0x0000D5, 2); return true;
    // src/system/oam_clear.asm:148 STA <(OAM1 + 118 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089DB: cpu.execute_instruction<0x85>(0x0000D9, 2); return true;
    // src/system/oam_clear.asm:149 STA <(OAM1 + 119 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089DD: cpu.execute_instruction<0x85>(0x0000DD, 2); return true;
    // src/system/oam_clear.asm:150 STA <(OAM1 + 120 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089DF: cpu.execute_instruction<0x85>(0x0000E1, 2); return true;
    // src/system/oam_clear.asm:151 STA <(OAM1 + 121 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089E1: cpu.execute_instruction<0x85>(0x0000E5, 2); return true;
    // src/system/oam_clear.asm:152 STA <(OAM1 + 122 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089E3: cpu.execute_instruction<0x85>(0x0000E9, 2); return true;
    // src/system/oam_clear.asm:153 STA <(OAM1 + 123 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089E5: cpu.execute_instruction<0x85>(0x0000ED, 2); return true;
    // src/system/oam_clear.asm:154 STA <(OAM1 + 124 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089E7: cpu.execute_instruction<0x85>(0x0000F1, 2); return true;
    // src/system/oam_clear.asm:155 STA <(OAM1 + 125 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089E9: cpu.execute_instruction<0x85>(0x0000F5, 2); return true;
    // src/system/oam_clear.asm:156 STA <(OAM1 + 126 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089EB: cpu.execute_instruction<0x85>(0x0000F9, 2); return true;
    // src/system/oam_clear.asm:157 STA <(OAM1 + 127 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089ED: cpu.execute_instruction<0x85>(0x0000FD, 2); return true;
    // src/system/oam_clear.asm:158 PLD
    case 0xC089EF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/oam_clear.asm:162 REP #PROC_FLAGS::ACCUM8
    case 0xC089F0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/oam_clear.asm:164 RTL
    case 0xC089F2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/system/oam_clear.asm:167 LDX #.LOWORD(OAM2)
    case 0xC089F3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // src/system/oam_clear.asm:167 LDX #.LOWORD(OAM2)
    // Overlapping static entry reached from 0xC089F3.
    case 0xC089F5: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/oam_clear.asm:168 STX OAM_ADDR
    case 0xC089F6: cpu.execute_instruction<0x8E>(0x000003, 3); return true;
    // src/system/oam_clear.asm:169 LDX #.LOWORD(OAM2) + 128 * .SIZEOF(oam_entry)
    case 0xC089F9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000A00, 3); return true;
    // src/system/oam_clear.asm:169 LDX #.LOWORD(OAM2) + 128 * .SIZEOF(oam_entry)
    // Overlapping static entry reached from 0xC089F9.
    case 0xC089FB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/oam_clear.asm:170 STX OAM_END_ADDR
    case 0xC089FC: cpu.execute_instruction<0x8E>(0x000005, 3); return true;
    // src/system/oam_clear.asm:171 LDX #.LOWORD(OAM2_HIGH_TABLE)
    case 0xC089FF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000A00, 3); return true;
    // src/system/oam_clear.asm:171 LDX #.LOWORD(OAM2_HIGH_TABLE)
    // Overlapping static entry reached from 0xC089FF.
    case 0xC08A01: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/oam_clear.asm:172 STX OAM_HIGH_TABLE_ADDR
    case 0xC08A02: cpu.execute_instruction<0x8E>(0x000007, 3); return true;
    // src/system/oam_clear.asm:173 LDA #$80
    case 0xC08A05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008D80, 3); return true;
    // src/system/oam_clear.asm:174 STA OAM_HIGH_TABLE_BUFFER
    case 0xC08A07: cpu.execute_instruction<0x8D>(0x00000A, 3); return true;
    // src/system/oam_clear.asm:174 STA OAM_HIGH_TABLE_BUFFER
    // Overlapping static entry reached from 0xC08A05.
    case 0xC08A08: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/oam_clear.asm:174 STA OAM_HIGH_TABLE_BUFFER
    // Overlapping static entry reached from 0xC08A08.
    case 0xC08A09: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/system/oam_clear.asm:175 LDA #$E0
    case 0xC08A0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x000BE0, 3); return true;
    // src/system/oam_clear.asm:176 PHD
    case 0xC08A0C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/system/oam_clear.asm:177 PEA OAM2
    case 0xC08A0D: cpu.execute_instruction<0xF4>(0x000800, 3); return true;
    // src/system/oam_clear.asm:178 PLD
    case 0xC08A10: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/oam_clear.asm:179 STA <(OAM2 + 0 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A11: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/system/oam_clear.asm:180 STA <(OAM2 + 1 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A13: cpu.execute_instruction<0x85>(0x000005, 2); return true;
    // src/system/oam_clear.asm:181 STA <(OAM2 + 2 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A15: cpu.execute_instruction<0x85>(0x000009, 2); return true;
    // src/system/oam_clear.asm:182 STA <(OAM2 + 3 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A17: cpu.execute_instruction<0x85>(0x00000D, 2); return true;
    // src/system/oam_clear.asm:183 STA <(OAM2 + 4 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A19: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/system/oam_clear.asm:184 STA <(OAM2 + 5 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A1B: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/system/oam_clear.asm:185 STA <(OAM2 + 6 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A1D: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/system/oam_clear.asm:186 STA <(OAM2 + 7 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A1F: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/system/oam_clear.asm:187 STA <(OAM2 + 8 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A21: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/system/oam_clear.asm:188 STA <(OAM2 + 9 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A23: cpu.execute_instruction<0x85>(0x000025, 2); return true;
    // src/system/oam_clear.asm:189 STA <(OAM2 + 10 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A25: cpu.execute_instruction<0x85>(0x000029, 2); return true;
    // src/system/oam_clear.asm:190 STA <(OAM2 + 11 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A27: cpu.execute_instruction<0x85>(0x00002D, 2); return true;
    // src/system/oam_clear.asm:191 STA <(OAM2 + 12 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A29: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // src/system/oam_clear.asm:192 STA <(OAM2 + 13 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A2B: cpu.execute_instruction<0x85>(0x000035, 2); return true;
    // src/system/oam_clear.asm:193 STA <(OAM2 + 14 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A2D: cpu.execute_instruction<0x85>(0x000039, 2); return true;
    // src/system/oam_clear.asm:194 STA <(OAM2 + 15 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A2F: cpu.execute_instruction<0x85>(0x00003D, 2); return true;
    // src/system/oam_clear.asm:195 STA <(OAM2 + 16 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A31: cpu.execute_instruction<0x85>(0x000041, 2); return true;
    // src/system/oam_clear.asm:196 STA <(OAM2 + 17 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A33: cpu.execute_instruction<0x85>(0x000045, 2); return true;
    // src/system/oam_clear.asm:197 STA <(OAM2 + 18 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A35: cpu.execute_instruction<0x85>(0x000049, 2); return true;
    // src/system/oam_clear.asm:198 STA <(OAM2 + 19 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A37: cpu.execute_instruction<0x85>(0x00004D, 2); return true;
    // src/system/oam_clear.asm:199 STA <(OAM2 + 20 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A39: cpu.execute_instruction<0x85>(0x000051, 2); return true;
    // src/system/oam_clear.asm:200 STA <(OAM2 + 21 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A3B: cpu.execute_instruction<0x85>(0x000055, 2); return true;
    // src/system/oam_clear.asm:201 STA <(OAM2 + 22 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A3D: cpu.execute_instruction<0x85>(0x000059, 2); return true;
    // src/system/oam_clear.asm:202 STA <(OAM2 + 23 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A3F: cpu.execute_instruction<0x85>(0x00005D, 2); return true;
    // src/system/oam_clear.asm:203 STA <(OAM2 + 24 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A41: cpu.execute_instruction<0x85>(0x000061, 2); return true;
    // src/system/oam_clear.asm:204 STA <(OAM2 + 25 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A43: cpu.execute_instruction<0x85>(0x000065, 2); return true;
    // src/system/oam_clear.asm:205 STA <(OAM2 + 26 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A45: cpu.execute_instruction<0x85>(0x000069, 2); return true;
    // src/system/oam_clear.asm:206 STA <(OAM2 + 27 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A47: cpu.execute_instruction<0x85>(0x00006D, 2); return true;
    // src/system/oam_clear.asm:207 STA <(OAM2 + 28 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A49: cpu.execute_instruction<0x85>(0x000071, 2); return true;
    // src/system/oam_clear.asm:208 STA <(OAM2 + 29 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A4B: cpu.execute_instruction<0x85>(0x000075, 2); return true;
    // src/system/oam_clear.asm:209 STA <(OAM2 + 30 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A4D: cpu.execute_instruction<0x85>(0x000079, 2); return true;
    // src/system/oam_clear.asm:210 STA <(OAM2 + 31 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A4F: cpu.execute_instruction<0x85>(0x00007D, 2); return true;
    // src/system/oam_clear.asm:211 STA <(OAM2 + 32 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A51: cpu.execute_instruction<0x85>(0x000081, 2); return true;
    // src/system/oam_clear.asm:212 STA <(OAM2 + 33 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A53: cpu.execute_instruction<0x85>(0x000085, 2); return true;
    // src/system/oam_clear.asm:213 STA <(OAM2 + 34 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A55: cpu.execute_instruction<0x85>(0x000089, 2); return true;
    // src/system/oam_clear.asm:214 STA <(OAM2 + 35 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A57: cpu.execute_instruction<0x85>(0x00008D, 2); return true;
    // src/system/oam_clear.asm:215 STA <(OAM2 + 36 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A59: cpu.execute_instruction<0x85>(0x000091, 2); return true;
    // src/system/oam_clear.asm:216 STA <(OAM2 + 37 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A5B: cpu.execute_instruction<0x85>(0x000095, 2); return true;
    // src/system/oam_clear.asm:217 STA <(OAM2 + 38 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A5D: cpu.execute_instruction<0x85>(0x000099, 2); return true;
    // src/system/oam_clear.asm:218 STA <(OAM2 + 39 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A5F: cpu.execute_instruction<0x85>(0x00009D, 2); return true;
    // src/system/oam_clear.asm:219 STA <(OAM2 + 40 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A61: cpu.execute_instruction<0x85>(0x0000A1, 2); return true;
    // src/system/oam_clear.asm:220 STA <(OAM2 + 41 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A63: cpu.execute_instruction<0x85>(0x0000A5, 2); return true;
    // src/system/oam_clear.asm:221 STA <(OAM2 + 42 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A65: cpu.execute_instruction<0x85>(0x0000A9, 2); return true;
    // src/system/oam_clear.asm:222 STA <(OAM2 + 43 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A67: cpu.execute_instruction<0x85>(0x0000AD, 2); return true;
    // src/system/oam_clear.asm:223 STA <(OAM2 + 44 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A69: cpu.execute_instruction<0x85>(0x0000B1, 2); return true;
    // src/system/oam_clear.asm:224 STA <(OAM2 + 45 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A6B: cpu.execute_instruction<0x85>(0x0000B5, 2); return true;
    // src/system/oam_clear.asm:225 STA <(OAM2 + 46 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A6D: cpu.execute_instruction<0x85>(0x0000B9, 2); return true;
    // src/system/oam_clear.asm:226 STA <(OAM2 + 47 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A6F: cpu.execute_instruction<0x85>(0x0000BD, 2); return true;
    // src/system/oam_clear.asm:227 STA <(OAM2 + 48 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A71: cpu.execute_instruction<0x85>(0x0000C1, 2); return true;
    // src/system/oam_clear.asm:228 STA <(OAM2 + 49 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A73: cpu.execute_instruction<0x85>(0x0000C5, 2); return true;
    // src/system/oam_clear.asm:229 STA <(OAM2 + 50 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A75: cpu.execute_instruction<0x85>(0x0000C9, 2); return true;
    // src/system/oam_clear.asm:230 STA <(OAM2 + 51 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A77: cpu.execute_instruction<0x85>(0x0000CD, 2); return true;
    // src/system/oam_clear.asm:231 STA <(OAM2 + 52 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A79: cpu.execute_instruction<0x85>(0x0000D1, 2); return true;
    // src/system/oam_clear.asm:232 STA <(OAM2 + 53 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A7B: cpu.execute_instruction<0x85>(0x0000D5, 2); return true;
    // src/system/oam_clear.asm:233 STA <(OAM2 + 54 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A7D: cpu.execute_instruction<0x85>(0x0000D9, 2); return true;
    // src/system/oam_clear.asm:234 STA <(OAM2 + 55 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A7F: cpu.execute_instruction<0x85>(0x0000DD, 2); return true;
    // src/system/oam_clear.asm:235 STA <(OAM2 + 56 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A81: cpu.execute_instruction<0x85>(0x0000E1, 2); return true;
    // src/system/oam_clear.asm:236 STA <(OAM2 + 57 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A83: cpu.execute_instruction<0x85>(0x0000E5, 2); return true;
    // src/system/oam_clear.asm:237 STA <(OAM2 + 58 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A85: cpu.execute_instruction<0x85>(0x0000E9, 2); return true;
    // src/system/oam_clear.asm:238 STA <(OAM2 + 59 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A87: cpu.execute_instruction<0x85>(0x0000ED, 2); return true;
    // src/system/oam_clear.asm:239 STA <(OAM2 + 60 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A89: cpu.execute_instruction<0x85>(0x0000F1, 2); return true;
    // src/system/oam_clear.asm:240 STA <(OAM2 + 61 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A8B: cpu.execute_instruction<0x85>(0x0000F5, 2); return true;
    // src/system/oam_clear.asm:241 STA <(OAM2 + 62 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A8D: cpu.execute_instruction<0x85>(0x0000F9, 2); return true;
    // src/system/oam_clear.asm:242 STA <(OAM2 + 63 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A8F: cpu.execute_instruction<0x85>(0x0000FD, 2); return true;
    // src/system/oam_clear.asm:243 PEA OAM2 + $100
    case 0xC08A91: cpu.execute_instruction<0xF4>(0x000900, 3); return true;
    // src/system/oam_clear.asm:244 PLD
    case 0xC08A94: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/oam_clear.asm:245 STA <(OAM2 + 64 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A95: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/system/oam_clear.asm:246 STA <(OAM2 + 65 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A97: cpu.execute_instruction<0x85>(0x000005, 2); return true;
    // src/system/oam_clear.asm:247 STA <(OAM2 + 66 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A99: cpu.execute_instruction<0x85>(0x000009, 2); return true;
    // src/system/oam_clear.asm:248 STA <(OAM2 + 67 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A9B: cpu.execute_instruction<0x85>(0x00000D, 2); return true;
    // src/system/oam_clear.asm:249 STA <(OAM2 + 68 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A9D: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/system/oam_clear.asm:250 STA <(OAM2 + 69 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A9F: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/system/oam_clear.asm:251 STA <(OAM2 + 70 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AA1: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/system/oam_clear.asm:252 STA <(OAM2 + 71 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AA3: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/system/oam_clear.asm:253 STA <(OAM2 + 72 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AA5: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/system/oam_clear.asm:254 STA <(OAM2 + 73 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AA7: cpu.execute_instruction<0x85>(0x000025, 2); return true;
    // src/system/oam_clear.asm:255 STA <(OAM2 + 74 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AA9: cpu.execute_instruction<0x85>(0x000029, 2); return true;
    // src/system/oam_clear.asm:256 STA <(OAM2 + 75 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AAB: cpu.execute_instruction<0x85>(0x00002D, 2); return true;
    // src/system/oam_clear.asm:257 STA <(OAM2 + 76 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AAD: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // src/system/oam_clear.asm:258 STA <(OAM2 + 77 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AAF: cpu.execute_instruction<0x85>(0x000035, 2); return true;
    // src/system/oam_clear.asm:259 STA <(OAM2 + 78 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AB1: cpu.execute_instruction<0x85>(0x000039, 2); return true;
    // src/system/oam_clear.asm:260 STA <(OAM2 + 79 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AB3: cpu.execute_instruction<0x85>(0x00003D, 2); return true;
    // src/system/oam_clear.asm:261 STA <(OAM2 + 80 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AB5: cpu.execute_instruction<0x85>(0x000041, 2); return true;
    // src/system/oam_clear.asm:262 STA <(OAM2 + 81 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AB7: cpu.execute_instruction<0x85>(0x000045, 2); return true;
    // src/system/oam_clear.asm:263 STA <(OAM2 + 82 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AB9: cpu.execute_instruction<0x85>(0x000049, 2); return true;
    // src/system/oam_clear.asm:264 STA <(OAM2 + 83 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08ABB: cpu.execute_instruction<0x85>(0x00004D, 2); return true;
    // src/system/oam_clear.asm:265 STA <(OAM2 + 84 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08ABD: cpu.execute_instruction<0x85>(0x000051, 2); return true;
    // src/system/oam_clear.asm:266 STA <(OAM2 + 85 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08ABF: cpu.execute_instruction<0x85>(0x000055, 2); return true;
    // src/system/oam_clear.asm:267 STA <(OAM2 + 86 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AC1: cpu.execute_instruction<0x85>(0x000059, 2); return true;
    // src/system/oam_clear.asm:268 STA <(OAM2 + 87 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AC3: cpu.execute_instruction<0x85>(0x00005D, 2); return true;
    // src/system/oam_clear.asm:269 STA <(OAM2 + 88 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AC5: cpu.execute_instruction<0x85>(0x000061, 2); return true;
    // src/system/oam_clear.asm:270 STA <(OAM2 + 89 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AC7: cpu.execute_instruction<0x85>(0x000065, 2); return true;
    // src/system/oam_clear.asm:271 STA <(OAM2 + 90 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AC9: cpu.execute_instruction<0x85>(0x000069, 2); return true;
    // src/system/oam_clear.asm:272 STA <(OAM2 + 91 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08ACB: cpu.execute_instruction<0x85>(0x00006D, 2); return true;
    // src/system/oam_clear.asm:273 STA <(OAM2 + 92 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08ACD: cpu.execute_instruction<0x85>(0x000071, 2); return true;
    // src/system/oam_clear.asm:274 STA <(OAM2 + 93 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08ACF: cpu.execute_instruction<0x85>(0x000075, 2); return true;
    // src/system/oam_clear.asm:275 STA <(OAM2 + 94 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AD1: cpu.execute_instruction<0x85>(0x000079, 2); return true;
    // src/system/oam_clear.asm:276 STA <(OAM2 + 95 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AD3: cpu.execute_instruction<0x85>(0x00007D, 2); return true;
    // src/system/oam_clear.asm:277 STA <(OAM2 + 96 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AD5: cpu.execute_instruction<0x85>(0x000081, 2); return true;
    // src/system/oam_clear.asm:278 STA <(OAM2 + 97 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AD7: cpu.execute_instruction<0x85>(0x000085, 2); return true;
    // src/system/oam_clear.asm:279 STA <(OAM2 + 98 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AD9: cpu.execute_instruction<0x85>(0x000089, 2); return true;
    // src/system/oam_clear.asm:280 STA <(OAM2 + 99 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08ADB: cpu.execute_instruction<0x85>(0x00008D, 2); return true;
    // src/system/oam_clear.asm:281 STA <(OAM2 + 100 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08ADD: cpu.execute_instruction<0x85>(0x000091, 2); return true;
    // src/system/oam_clear.asm:282 STA <(OAM2 + 101 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08ADF: cpu.execute_instruction<0x85>(0x000095, 2); return true;
    // src/system/oam_clear.asm:283 STA <(OAM2 + 102 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AE1: cpu.execute_instruction<0x85>(0x000099, 2); return true;
    // src/system/oam_clear.asm:284 STA <(OAM2 + 103 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AE3: cpu.execute_instruction<0x85>(0x00009D, 2); return true;
    // src/system/oam_clear.asm:285 STA <(OAM2 + 104 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AE5: cpu.execute_instruction<0x85>(0x0000A1, 2); return true;
    // src/system/oam_clear.asm:286 STA <(OAM2 + 105 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AE7: cpu.execute_instruction<0x85>(0x0000A5, 2); return true;
    // src/system/oam_clear.asm:287 STA <(OAM2 + 106 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AE9: cpu.execute_instruction<0x85>(0x0000A9, 2); return true;
    // src/system/oam_clear.asm:288 STA <(OAM2 + 107 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AEB: cpu.execute_instruction<0x85>(0x0000AD, 2); return true;
    // src/system/oam_clear.asm:289 STA <(OAM2 + 108 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AED: cpu.execute_instruction<0x85>(0x0000B1, 2); return true;
    // src/system/oam_clear.asm:290 STA <(OAM2 + 109 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AEF: cpu.execute_instruction<0x85>(0x0000B5, 2); return true;
    // src/system/oam_clear.asm:291 STA <(OAM2 + 110 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AF1: cpu.execute_instruction<0x85>(0x0000B9, 2); return true;
    // src/system/oam_clear.asm:292 STA <(OAM2 + 111 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AF3: cpu.execute_instruction<0x85>(0x0000BD, 2); return true;
    // src/system/oam_clear.asm:293 STA <(OAM2 + 112 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AF5: cpu.execute_instruction<0x85>(0x0000C1, 2); return true;
    // src/system/oam_clear.asm:294 STA <(OAM2 + 113 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AF7: cpu.execute_instruction<0x85>(0x0000C5, 2); return true;
    // src/system/oam_clear.asm:295 STA <(OAM2 + 114 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AF9: cpu.execute_instruction<0x85>(0x0000C9, 2); return true;
    // src/system/oam_clear.asm:296 STA <(OAM2 + 115 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AFB: cpu.execute_instruction<0x85>(0x0000CD, 2); return true;
    // src/system/oam_clear.asm:297 STA <(OAM2 + 116 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AFD: cpu.execute_instruction<0x85>(0x0000D1, 2); return true;
    // src/system/oam_clear.asm:298 STA <(OAM2 + 117 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AFF: cpu.execute_instruction<0x85>(0x0000D5, 2); return true;
    // src/system/oam_clear.asm:299 STA <(OAM2 + 118 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08B01: cpu.execute_instruction<0x85>(0x0000D9, 2); return true;
    // src/system/oam_clear.asm:300 STA <(OAM2 + 119 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08B03: cpu.execute_instruction<0x85>(0x0000DD, 2); return true;
    // src/system/oam_clear.asm:301 STA <(OAM2 + 120 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08B05: cpu.execute_instruction<0x85>(0x0000E1, 2); return true;
    // src/system/oam_clear.asm:302 STA <(OAM2 + 121 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08B07: cpu.execute_instruction<0x85>(0x0000E5, 2); return true;
    // src/system/oam_clear.asm:303 STA <(OAM2 + 122 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08B09: cpu.execute_instruction<0x85>(0x0000E9, 2); return true;
    // src/system/oam_clear.asm:304 STA <(OAM2 + 123 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08B0B: cpu.execute_instruction<0x85>(0x0000ED, 2); return true;
    // src/system/oam_clear.asm:305 STA <(OAM2 + 124 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08B0D: cpu.execute_instruction<0x85>(0x0000F1, 2); return true;
    // src/system/oam_clear.asm:306 STA <(OAM2 + 125 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08B0F: cpu.execute_instruction<0x85>(0x0000F5, 2); return true;
    // src/system/oam_clear.asm:307 STA <(OAM2 + 126 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08B11: cpu.execute_instruction<0x85>(0x0000F9, 2); return true;
    // src/system/oam_clear.asm:308 STA <(OAM2 + 127 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08B13: cpu.execute_instruction<0x85>(0x0000FD, 2); return true;
    // src/system/oam_clear.asm:309 PLD
    case 0xC08B15: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/oam_clear.asm:313 REP #PROC_FLAGS::ACCUM8
    case 0xC08B16: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/oam_clear.asm:315 RTL
    case 0xC08B18: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/prepare_vram_copy.asm (source_named).
bool execute_system_prepare_vram_copy_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/prepare_vram_copy.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08616: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/prepare_vram_copy.asm:4 STA DMA_COPY_MODE
    case 0xC08618: cpu.execute_instruction<0x8D>(0x000091, 3); return true;
    // src/system/prepare_vram_copy.asm:5 STX DMA_COPY_SIZE
    case 0xC0861B: cpu.execute_instruction<0x8E>(0x000092, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/prepare_vram_copy.asm:6 MOVE_INT $0E, DMA_COPY_RAM_SRC
    case 0xC0861E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/prepare_vram_copy.asm:6 MOVE_INT $0E, DMA_COPY_RAM_SRC
    case 0xC08620: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/prepare_vram_copy.asm:6 MOVE_INT $0E, DMA_COPY_RAM_SRC
    case 0xC08623: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/prepare_vram_copy.asm:6 MOVE_INT $0E, DMA_COPY_RAM_SRC
    case 0xC08625: cpu.execute_instruction<0x8D>(0x000096, 3); return true;
    // src/system/prepare_vram_copy.asm:7 STY DMA_COPY_VRAM_DEST
    case 0xC08628: cpu.execute_instruction<0x8C>(0x000097, 3); return true;
    // src/system/prepare_vram_copy.asm:8 JMP .LOWORD(PREPARE_VRAM_COPY_COMMON)
    case 0xC0862B: cpu.execute_instruction<0x4C>(0x008643, 3); return true;
    // src/system/prepare_vram_copy.asm:10 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0862E: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/prepare_vram_copy.asm:11 STA DMA_COPY_MODE
    case 0xC08630: cpu.execute_instruction<0x8D>(0x000091, 3); return true;
    // src/system/prepare_vram_copy.asm:12 STX DMA_COPY_SIZE
    case 0xC08633: cpu.execute_instruction<0x8E>(0x000092, 3); return true;
    // src/system/prepare_vram_copy.asm:13 STY DMA_COPY_RAM_SRC
    case 0xC08636: cpu.execute_instruction<0x8C>(0x000094, 3); return true;
    // src/system/prepare_vram_copy.asm:14 LDA $0E
    case 0xC08639: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/prepare_vram_copy.asm:15 STA DMA_COPY_RAM_SRC + 2
    case 0xC0863B: cpu.execute_instruction<0x8D>(0x000096, 3); return true;
    // src/system/prepare_vram_copy.asm:16 LDA $10
    case 0xC0863E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/system/prepare_vram_copy.asm:17 STA DMA_COPY_VRAM_DEST
    case 0xC08640: cpu.execute_instruction<0x8D>(0x000097, 3); return true;
    // src/system/prepare_vram_copy.asm:19 PHP
    case 0xC08643: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/prepare_vram_copy.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC08644: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/prepare_vram_copy.asm:21 SEP #PROC_FLAGS::INDEX8
    case 0xC08646: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/system/prepare_vram_copy.asm:22 PHD
    case 0xC08648: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/system/prepare_vram_copy.asm:23 PEA $0000
    case 0xC08649: cpu.execute_instruction<0xF4>(0x000000, 3); return true;
    // src/system/prepare_vram_copy.asm:24 PLD
    case 0xC0864C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/prepare_vram_copy.asm:25 PHB
    case 0xC0864D: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/system/prepare_vram_copy.asm:26 LDY #$0000
    case 0xC0864E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x005A00, 3); return true;
    // src/system/prepare_vram_copy.asm:27 PHY
    case 0xC08650: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/system/prepare_vram_copy.asm:28 PLB
    case 0xC08651: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/prepare_vram_copy.asm:29 REP #PROC_FLAGS::INDEX8
    case 0xC08652: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/system/prepare_vram_copy.asm:30 JSR COPY_TO_VRAM
    case 0xC08654: cpu.execute_instruction<0x20>(0x00865F, 3); return true;
    // src/system/prepare_vram_copy.asm:31 PLB
    case 0xC08657: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/prepare_vram_copy.asm:32 PLD
    case 0xC08658: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/prepare_vram_copy.asm:33 PLP
    case 0xC08659: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/prepare_vram_copy.asm:34 RTL
    case 0xC0865A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/process_sfx_queue.asm (source_named).
bool execute_system_process_sfx_queue_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/process_sfx_queue.asm:3 SEP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08501: cpu.execute_instruction<0xE2>(0x000030, 2); return true;
    // src/system/process_sfx_queue.asm:4 LDX <SOUND_EFFECT_QUEUE_INDEX + 0
    case 0xC08503: cpu.execute_instruction<0xA6>(0x0000CB, 2); return true;
    // src/system/process_sfx_queue.asm:5 CPX <SOUND_EFFECT_QUEUE_END_INDEX + 0
    case 0xC08505: cpu.execute_instruction<0xE4>(0x0000CA, 2); return true;
    // src/system/process_sfx_queue.asm:6 BEQ @UNKNOWN0
    case 0xC08507: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/system/process_sfx_queue.asm:7 LDA SOUND_EFFECT_QUEUE,X
    case 0xC08509: cpu.execute_instruction<0xBD>(0x001AC2, 3); return true;
    // src/system/process_sfx_queue.asm:8 STA APUIO3
    case 0xC0850C: cpu.execute_instruction<0x8D>(0x002143, 3); return true;
    // src/system/process_sfx_queue.asm:9 TXA
    case 0xC0850F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/process_sfx_queue.asm:10 INC
    case 0xC08510: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/process_sfx_queue.asm:11 AND #$0007
    case 0xC08511: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x008507, 3); return true;
    // src/system/process_sfx_queue.asm:12 STA <SOUND_EFFECT_QUEUE_INDEX
    case 0xC08513: cpu.execute_instruction<0x85>(0x0000CB, 2); return true;
    // src/system/process_sfx_queue.asm:12 STA <SOUND_EFFECT_QUEUE_INDEX
    // Overlapping static entry reached from 0xC08511.
    case 0xC08514: cpu.execute_instruction<0xCB>(0x000000, 1); return true;
    // src/system/process_sfx_queue.asm:14 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08515: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/process_sfx_queue.asm:15 RTS
    case 0xC08517: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/read_joypad.asm (source_named).
bool execute_system_read_joypad_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/read_joypad.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0841B: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/read_joypad.asm:4 LDA <DEMO_RECORDING_FLAGS + 0
    case 0xC0841D: cpu.execute_instruction<0xA5>(0x00007B, 2); return true;
    // src/system/read_joypad.asm:5 BEQ @UNKNOWN1
    case 0xC0841F: cpu.execute_instruction<0xF0>(0x00002A, 2); return true;
    // src/system/read_joypad.asm:6 AND #$4000
    case 0xC08421: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x004000, 3); return true;
    // src/system/read_joypad.asm:6 AND #$4000
    // Overlapping static entry reached from 0xC08421.
    case 0xC08423: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/system/read_joypad.asm:7 BEQ @UNKNOWN1
    case 0xC08424: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/system/read_joypad.asm:8 DEC <DEMO_FRAMES_LEFT
    case 0xC08426: cpu.execute_instruction<0xC6>(0x000081, 2); return true;
    // src/system/read_joypad.asm:9 BNE @UNKNOWN2
    case 0xC08428: cpu.execute_instruction<0xD0>(0x00002B, 2); return true;
    // src/system/read_joypad.asm:10 INC <DEMO_READ_SOURCE
    case 0xC0842A: cpu.execute_instruction<0xE6>(0x00007D, 2); return true;
    // src/system/read_joypad.asm:11 INC <DEMO_READ_SOURCE
    case 0xC0842C: cpu.execute_instruction<0xE6>(0x00007D, 2); return true;
    // src/system/read_joypad.asm:12 INC <DEMO_READ_SOURCE
    case 0xC0842E: cpu.execute_instruction<0xE6>(0x00007D, 2); return true;
    // src/system/read_joypad.asm:13 LDA [<DEMO_READ_SOURCE]
    case 0xC08430: cpu.execute_instruction<0xA7>(0x00007D, 2); return true;
    // src/system/read_joypad.asm:14 AND #$00FF
    case 0xC08432: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/read_joypad.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC08432.
    case 0xC08434: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/read_joypad.asm:15 BEQ @UNKNOWN0
    case 0xC08435: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/system/read_joypad.asm:16 STA <DEMO_FRAMES_LEFT
    case 0xC08437: cpu.execute_instruction<0x85>(0x000081, 2); return true;
    // src/system/read_joypad.asm:17 LDY #$0001
    case 0xC08439: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/system/read_joypad.asm:17 LDY #$0001
    // Overlapping static entry reached from 0xC08439.
    case 0xC0843B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/system/read_joypad.asm:18 LDA [<DEMO_READ_SOURCE],Y
    case 0xC0843C: cpu.execute_instruction<0xB7>(0x00007D, 2); return true;
    // src/system/read_joypad.asm:19 STA <PAD_RAW
    case 0xC0843E: cpu.execute_instruction<0x85>(0x000077, 2); return true;
    // src/system/read_joypad.asm:20 STA <PAD_RAW + 2
    case 0xC08440: cpu.execute_instruction<0x85>(0x000079, 2); return true;
    // src/system/read_joypad.asm:21 BRA @UNKNOWN2
    case 0xC08442: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/system/read_joypad.asm:23 LDA <DEMO_RECORDING_FLAGS + 0
    case 0xC08444: cpu.execute_instruction<0xA5>(0x00007B, 2); return true;
    // src/system/read_joypad.asm:24 AND #$FFFF ^ DEMO_RECORDING_FLAG::PLAYBACK
    case 0xC08446: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x00BFFF, 3); return true;
    // src/system/read_joypad.asm:24 AND #$FFFF ^ DEMO_RECORDING_FLAG::PLAYBACK
    // Overlapping static entry reached from 0xC08446.
    case 0xC08448: cpu.execute_instruction<0xBF>(0xAD7B85, 4); return true;
    // src/system/read_joypad.asm:25 STA <DEMO_RECORDING_FLAGS
    case 0xC08449: cpu.execute_instruction<0x85>(0x00007B, 2); return true;
    // src/system/read_joypad.asm:27 LDA JOYPAD_2_DATA
    case 0xC0844B: cpu.execute_instruction<0xAD>(0x00421A, 3); return true;
    // src/system/read_joypad.asm:27 LDA JOYPAD_2_DATA
    // Overlapping static entry reached from 0xC08448.
    case 0xC0844C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/read_joypad.asm:27 LDA JOYPAD_2_DATA
    // Overlapping static entry reached from 0xC0844C.
    case 0xC0844D: cpu.execute_instruction<0x42>(0x000085, 2); return true;
    // src/system/read_joypad.asm:28 STA <PAD_RAW + 2
    case 0xC0844E: cpu.execute_instruction<0x85>(0x000079, 2); return true;
    // src/system/read_joypad.asm:28 STA <PAD_RAW + 2
    // Overlapping static entry reached from 0xC0844D.
    case 0xC0844F: cpu.execute_instruction<0x79>(0x0018AD, 3); return true;
    // src/system/read_joypad.asm:29 LDA JOYPAD_1_DATA
    case 0xC08450: cpu.execute_instruction<0xAD>(0x004218, 3); return true;
    // src/system/read_joypad.asm:29 LDA JOYPAD_1_DATA
    // Overlapping static entry reached from 0xC0844F.
    case 0xC08452: cpu.execute_instruction<0x42>(0x000085, 2); return true;
    // src/system/read_joypad.asm:30 STA <PAD_RAW
    case 0xC08453: cpu.execute_instruction<0x85>(0x000077, 2); return true;
    // src/system/read_joypad.asm:30 STA <PAD_RAW
    // Overlapping static entry reached from 0xC08452.
    case 0xC08454: cpu.execute_instruction<0x77>(0x000060, 2); return true;
    // src/system/read_joypad.asm:32 RTS
    case 0xC08455: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/reset.asm (source_named).
bool execute_system_reset_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/reset.asm:9 STZ NMITIMEN
    case 0xC08000: cpu.execute_instruction<0x9C>(0x004200, 3); return true;
    // src/system/reset.asm:10 STZ $00
    case 0xC08003: cpu.execute_instruction<0x64>(0x000000, 2); return true;
    // src/system/reset.asm:11 LDX #$00
    case 0xC08005: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x00A000, 3); return true;
    // src/system/reset.asm:12 LDY #$01
    case 0xC08007: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x00C201, 3); return true;
    // src/system/reset.asm:12 LDY #$01
    // Overlapping static entry reached from 0xC08005.
    case 0xC08008: cpu.execute_instruction<0x01>(0x0000C2, 2); return true;
    // src/system/reset.asm:13 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08009: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/reset.asm:13 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC08007.
    case 0xC0800A: cpu.execute_instruction<0x30>(0x0000A9, 2); return true;
    // src/system/reset.asm:14 LDA #.LOWORD(STACK_65816_END) - 1
    case 0xC0800B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x001FFE, 3); return true;
    // src/system/reset.asm:14 LDA #.LOWORD(STACK_65816_END) - 1
    // Overlapping static entry reached from 0xC0800A.
    case 0xC0800C: cpu.execute_instruction<0xFE>(0x00541F, 3); return true;
    // src/system/reset.asm:14 LDA #.LOWORD(STACK_65816_END) - 1
    // Overlapping static entry reached from 0xC0800B.
    case 0xC0800D: cpu.execute_instruction<0x1F>(0x000054, 4); return true;
    // src/system/reset.asm:15 MVN #$00,#$00
    case 0xC0800E: cpu.execute_instruction<0x54>(0x000000, 3); return true;
    // src/system/reset.asm:15 MVN #$00,#$00
    // Overlapping static entry reached from 0xC0800C.
    case 0xC0800F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/system/reset.asm:16 TXS ; STACK_65816_END
    case 0xC08011: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/system/reset.asm:17 LDA #.LOWORD(STACK_END)
    case 0xC08012: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001F00, 3); return true;
    // src/system/reset.asm:17 LDA #.LOWORD(STACK_END)
    // Overlapping static entry reached from 0xC08012.
    case 0xC08014: cpu.execute_instruction<0x1F>(0x20E25B, 4); return true;
    // src/system/reset.asm:18 TCD
    case 0xC08015: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/reset.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC08016: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/reset.asm:20 LDA #$80
    case 0xC08018: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008D80, 3); return true;
    // src/system/reset.asm:21 STA INIDISP
    case 0xC0801A: cpu.execute_instruction<0x8D>(0x002100, 3); return true;
    // src/system/reset.asm:21 STA INIDISP
    // Overlapping static entry reached from 0xC08018.
    case 0xC0801B: cpu.execute_instruction<0x00>(0x000021, 2); return true;
    // src/system/reset.asm:22 STA INIDISP_MIRROR
    case 0xC0801D: cpu.execute_instruction<0x8D>(0x00000D, 3); return true;
    // src/system/reset.asm:23 STZ OBSEL
    case 0xC08020: cpu.execute_instruction<0x9C>(0x002101, 3); return true;
    // src/system/reset.asm:24 STZ OAMADDL
    case 0xC08023: cpu.execute_instruction<0x9C>(0x002102, 3); return true;
    // src/system/reset.asm:25 STZ OAMADDH
    case 0xC08026: cpu.execute_instruction<0x9C>(0x002103, 3); return true;
    // src/system/reset.asm:26 STZ BGMODE
    case 0xC08029: cpu.execute_instruction<0x9C>(0x002105, 3); return true;
    // src/system/reset.asm:27 STZ MOSAIC
    case 0xC0802C: cpu.execute_instruction<0x9C>(0x002106, 3); return true;
    // src/system/reset.asm:28 STZ BG1SC
    case 0xC0802F: cpu.execute_instruction<0x9C>(0x002107, 3); return true;
    // src/system/reset.asm:29 STZ BG2SC
    case 0xC08032: cpu.execute_instruction<0x9C>(0x002108, 3); return true;
    // src/system/reset.asm:30 STZ BG3SC
    case 0xC08035: cpu.execute_instruction<0x9C>(0x002109, 3); return true;
    // src/system/reset.asm:31 STZ BG4SC
    case 0xC08038: cpu.execute_instruction<0x9C>(0x00210A, 3); return true;
    // src/system/reset.asm:32 STZ BG12NBA
    case 0xC0803B: cpu.execute_instruction<0x9C>(0x00210B, 3); return true;
    // src/system/reset.asm:33 STZ BG34NBA
    case 0xC0803E: cpu.execute_instruction<0x9C>(0x00210C, 3); return true;
    // src/system/reset.asm:34 STZ BG1HOFS
    case 0xC08041: cpu.execute_instruction<0x9C>(0x00210D, 3); return true;
    // src/system/reset.asm:35 STZ BG1HOFS
    case 0xC08044: cpu.execute_instruction<0x9C>(0x00210D, 3); return true;
    // src/system/reset.asm:36 STZ BG1VOFS
    case 0xC08047: cpu.execute_instruction<0x9C>(0x00210E, 3); return true;
    // src/system/reset.asm:37 STZ BG1VOFS
    case 0xC0804A: cpu.execute_instruction<0x9C>(0x00210E, 3); return true;
    // src/system/reset.asm:38 STZ BG2HOFS
    case 0xC0804D: cpu.execute_instruction<0x9C>(0x00210F, 3); return true;
    // src/system/reset.asm:39 STZ BG2HOFS
    case 0xC08050: cpu.execute_instruction<0x9C>(0x00210F, 3); return true;
    // src/system/reset.asm:40 STZ BG2VOFS
    case 0xC08053: cpu.execute_instruction<0x9C>(0x002110, 3); return true;
    // src/system/reset.asm:41 STZ BG2VOFS
    case 0xC08056: cpu.execute_instruction<0x9C>(0x002110, 3); return true;
    // src/system/reset.asm:42 STZ BG3HOFS
    case 0xC08059: cpu.execute_instruction<0x9C>(0x002111, 3); return true;
    // src/system/reset.asm:43 STZ BG3HOFS
    case 0xC0805C: cpu.execute_instruction<0x9C>(0x002111, 3); return true;
    // src/system/reset.asm:44 STZ BG3VOFS
    case 0xC0805F: cpu.execute_instruction<0x9C>(0x002112, 3); return true;
    // src/system/reset.asm:45 STZ BG3VOFS
    case 0xC08062: cpu.execute_instruction<0x9C>(0x002112, 3); return true;
    // src/system/reset.asm:46 STZ BG4HOFS
    case 0xC08065: cpu.execute_instruction<0x9C>(0x002113, 3); return true;
    // src/system/reset.asm:47 STZ BG4HOFS
    case 0xC08068: cpu.execute_instruction<0x9C>(0x002113, 3); return true;
    // src/system/reset.asm:48 STZ BG4VOFS
    case 0xC0806B: cpu.execute_instruction<0x9C>(0x002114, 3); return true;
    // src/system/reset.asm:49 STZ BG4VOFS
    case 0xC0806E: cpu.execute_instruction<0x9C>(0x002114, 3); return true;
    // src/system/reset.asm:50 LDA #$0080
    case 0xC08071: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008D80, 3); return true;
    // src/system/reset.asm:51 STA VMAIN
    case 0xC08073: cpu.execute_instruction<0x8D>(0x002115, 3); return true;
    // src/system/reset.asm:51 STA VMAIN
    // Overlapping static entry reached from 0xC08071.
    case 0xC08074: cpu.execute_instruction<0x15>(0x000021, 2); return true;
    // src/system/reset.asm:52 STZ VMADDL
    case 0xC08076: cpu.execute_instruction<0x9C>(0x002116, 3); return true;
    // src/system/reset.asm:53 STZ VMADDH
    case 0xC08079: cpu.execute_instruction<0x9C>(0x002117, 3); return true;
    // src/system/reset.asm:54 STZ M7SEL
    case 0xC0807C: cpu.execute_instruction<0x9C>(0x00211A, 3); return true;
    // src/system/reset.asm:55 STZ M7A
    case 0xC0807F: cpu.execute_instruction<0x9C>(0x00211B, 3); return true;
    // src/system/reset.asm:56 LDA #$01
    case 0xC08082: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/system/reset.asm:57 STA M7A
    case 0xC08084: cpu.execute_instruction<0x8D>(0x00211B, 3); return true;
    // src/system/reset.asm:57 STA M7A
    // Overlapping static entry reached from 0xC08082.
    case 0xC08085: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/system/reset.asm:57 STA M7A
    // Overlapping static entry reached from 0xC08085.
    case 0xC08086: cpu.execute_instruction<0x21>(0x00009C, 2); return true;
    // src/system/reset.asm:58 STZ M7B
    case 0xC08087: cpu.execute_instruction<0x9C>(0x00211C, 3); return true;
    // src/system/reset.asm:58 STZ M7B
    // Overlapping static entry reached from 0xC08086.
    case 0xC08088: cpu.execute_instruction<0x1C>(0x009C21, 3); return true;
    // src/system/reset.asm:59 STZ M7B
    case 0xC0808A: cpu.execute_instruction<0x9C>(0x00211C, 3); return true;
    // src/system/reset.asm:59 STZ M7B
    // Overlapping static entry reached from 0xC08088.
    case 0xC0808B: cpu.execute_instruction<0x1C>(0x009C21, 3); return true;
    // src/system/reset.asm:60 STZ M7C
    case 0xC0808D: cpu.execute_instruction<0x9C>(0x00211D, 3); return true;
    // src/system/reset.asm:60 STZ M7C
    // Overlapping static entry reached from 0xC0808B.
    case 0xC0808E: cpu.execute_instruction<0x1D>(0x009C21, 3); return true;
    // src/system/reset.asm:61 STZ M7C
    case 0xC08090: cpu.execute_instruction<0x9C>(0x00211D, 3); return true;
    // src/system/reset.asm:61 STZ M7C
    // Overlapping static entry reached from 0xC0808E.
    case 0xC08091: cpu.execute_instruction<0x1D>(0x009C21, 3); return true;
    // src/system/reset.asm:62 STZ M7D
    case 0xC08093: cpu.execute_instruction<0x9C>(0x00211E, 3); return true;
    // src/system/reset.asm:62 STZ M7D
    // Overlapping static entry reached from 0xC08091.
    case 0xC08094: cpu.execute_instruction<0x1E>(0x008D21, 3); return true;
    // src/system/reset.asm:63 STA M7D
    case 0xC08096: cpu.execute_instruction<0x8D>(0x00211E, 3); return true;
    // src/system/reset.asm:63 STA M7D
    // Overlapping static entry reached from 0xC08094.
    case 0xC08097: cpu.execute_instruction<0x1E>(0x009C21, 3); return true;
    // src/system/reset.asm:64 STZ M7X
    case 0xC08099: cpu.execute_instruction<0x9C>(0x00211F, 3); return true;
    // src/system/reset.asm:64 STZ M7X
    // Overlapping static entry reached from 0xC08097.
    case 0xC0809A: cpu.execute_instruction<0x1F>(0x1F9C21, 4); return true;
    // src/system/reset.asm:65 STZ M7X
    case 0xC0809C: cpu.execute_instruction<0x9C>(0x00211F, 3); return true;
    // src/system/reset.asm:65 STZ M7X
    // Overlapping static entry reached from 0xC0809A.
    case 0xC0809E: cpu.execute_instruction<0x21>(0x00009C, 2); return true;
    // src/system/reset.asm:66 STZ M7Y
    case 0xC0809F: cpu.execute_instruction<0x9C>(0x002120, 3); return true;
    // src/system/reset.asm:66 STZ M7Y
    // Overlapping static entry reached from 0xC0809E.
    case 0xC080A0: cpu.execute_instruction<0x20>(0x009C21, 3); return true;
    // src/system/reset.asm:67 STZ M7Y
    case 0xC080A2: cpu.execute_instruction<0x9C>(0x002120, 3); return true;
    // src/system/reset.asm:67 STZ M7Y
    // Overlapping static entry reached from 0xC080A0.
    case 0xC080A3: cpu.execute_instruction<0x20>(0x009C21, 3); return true;
    // src/system/reset.asm:68 STZ CGADD
    case 0xC080A5: cpu.execute_instruction<0x9C>(0x002121, 3); return true;
    // src/system/reset.asm:68 STZ CGADD
    // Overlapping static entry reached from 0xC080A3.
    case 0xC080A6: cpu.execute_instruction<0x21>(0x000021, 2); return true;
    // src/system/reset.asm:69 STZ W12SEL
    case 0xC080A8: cpu.execute_instruction<0x9C>(0x002123, 3); return true;
    // src/system/reset.asm:70 STZ W34SEL
    case 0xC080AB: cpu.execute_instruction<0x9C>(0x002124, 3); return true;
    // src/system/reset.asm:71 STZ WOBJSEL
    case 0xC080AE: cpu.execute_instruction<0x9C>(0x002125, 3); return true;
    // src/system/reset.asm:72 STZ WH0
    case 0xC080B1: cpu.execute_instruction<0x9C>(0x002126, 3); return true;
    // src/system/reset.asm:73 STZ WH1
    case 0xC080B4: cpu.execute_instruction<0x9C>(0x002127, 3); return true;
    // src/system/reset.asm:73 STZ WH1
    // Overlapping static entry reached from 0xC0810B.
    case 0xC080B6: cpu.execute_instruction<0x21>(0x00009C, 2); return true;
    // src/system/reset.asm:74 STZ WH2
    case 0xC080B7: cpu.execute_instruction<0x9C>(0x002128, 3); return true;
    // src/system/reset.asm:74 STZ WH2
    // Overlapping static entry reached from 0xC080B6.
    case 0xC080B8: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/reset.asm:74 STZ WH2
    // Overlapping static entry reached from 0xC080B8.
    case 0xC080B9: cpu.execute_instruction<0x21>(0x00009C, 2); return true;
    // src/system/reset.asm:75 STZ WH3
    case 0xC080BA: cpu.execute_instruction<0x9C>(0x002129, 3); return true;
    // src/system/reset.asm:75 STZ WH3
    // Overlapping static entry reached from 0xC080B9.
    case 0xC080BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000021, 2); else cpu.execute_instruction<0x29>(0x009C21, 3); return true;
    // src/system/reset.asm:76 STZ WBGLOG
    case 0xC080BD: cpu.execute_instruction<0x9C>(0x00212A, 3); return true;
    // src/system/reset.asm:76 STZ WBGLOG
    // Overlapping static entry reached from 0xC080BB.
    case 0xC080BE: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/system/reset.asm:76 STZ WBGLOG
    // Overlapping static entry reached from 0xC080BE.
    case 0xC080BF: cpu.execute_instruction<0x21>(0x00009C, 2); return true;
    // src/system/reset.asm:77 STZ WOBJLOG
    case 0xC080C0: cpu.execute_instruction<0x9C>(0x00212B, 3); return true;
    // src/system/reset.asm:77 STZ WOBJLOG
    // Overlapping static entry reached from 0xC080BF.
    case 0xC080C1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/reset.asm:77 STZ WOBJLOG
    // Overlapping static entry reached from 0xC080C1.
    case 0xC080C2: cpu.execute_instruction<0x21>(0x0000A9, 2); return true;
    // src/system/reset.asm:78 LDA #$1F
    case 0xC080C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x008D1F, 3); return true;
    // src/system/reset.asm:78 LDA #$1F
    // Overlapping static entry reached from 0xC080C2.
    case 0xC080C4: cpu.execute_instruction<0x1F>(0x212C8D, 4); return true;
    // src/system/reset.asm:79 STA TM
    case 0xC080C5: cpu.execute_instruction<0x8D>(0x00212C, 3); return true;
    // src/system/reset.asm:79 STA TM
    // Overlapping static entry reached from 0xC080C3.
    case 0xC080C6: cpu.execute_instruction<0x2C>(0x009C21, 3); return true;
    // src/system/reset.asm:80 STZ TD
    case 0xC080C8: cpu.execute_instruction<0x9C>(0x00212D, 3); return true;
    // src/system/reset.asm:80 STZ TD
    // Overlapping static entry reached from 0xC080C6.
    case 0xC080C9: cpu.execute_instruction<0x2D>(0x009C21, 3); return true;
    // src/system/reset.asm:81 STZ TMW
    case 0xC080CB: cpu.execute_instruction<0x9C>(0x00212E, 3); return true;
    // src/system/reset.asm:81 STZ TMW
    // Overlapping static entry reached from 0xC080C9.
    case 0xC080CC: cpu.execute_instruction<0x2E>(0x009C21, 3); return true;
    // src/system/reset.asm:82 STZ TSW
    case 0xC080CE: cpu.execute_instruction<0x9C>(0x00212F, 3); return true;
    // src/system/reset.asm:82 STZ TSW
    // Overlapping static entry reached from 0xC080CC.
    case 0xC080CF: cpu.execute_instruction<0x2F>(0x309C21, 4); return true;
    // src/system/reset.asm:83 STZ CGWSEL
    case 0xC080D1: cpu.execute_instruction<0x9C>(0x002130, 3); return true;
    // src/system/reset.asm:83 STZ CGWSEL
    // Overlapping static entry reached from 0xC080CF.
    case 0xC080D3: cpu.execute_instruction<0x21>(0x00009C, 2); return true;
    // src/system/reset.asm:84 STZ CGADSUB
    case 0xC080D4: cpu.execute_instruction<0x9C>(0x002131, 3); return true;
    // src/system/reset.asm:84 STZ CGADSUB
    // Overlapping static entry reached from 0xC080D3.
    case 0xC080D5: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/system/reset.asm:85 LDA #$E0
    case 0xC080D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x008DE0, 3); return true;
    // src/system/reset.asm:86 STA FIXED_COLOR_DATA
    case 0xC080D9: cpu.execute_instruction<0x8D>(0x002132, 3); return true;
    // src/system/reset.asm:86 STA FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC080D7.
    case 0xC080DA: cpu.execute_instruction<0x32>(0x000021, 2); return true;
    // src/system/reset.asm:87 STZ SETINI
    case 0xC080DC: cpu.execute_instruction<0x9C>(0x002133, 3); return true;
    // src/system/reset.asm:88 LDA #$FF
    case 0xC080DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x008DFF, 3); return true;
    // src/system/reset.asm:89 STA WRMPYA
    case 0xC080E1: cpu.execute_instruction<0x8D>(0x004202, 3); return true;
    // src/system/reset.asm:89 STA WRMPYA
    // Overlapping static entry reached from 0xC080DF.
    case 0xC080E2: cpu.execute_instruction<0x02>(0x000042, 2); return true;
    // src/system/reset.asm:90 STZ WRMPYA
    case 0xC080E4: cpu.execute_instruction<0x9C>(0x004202, 3); return true;
    // src/system/reset.asm:91 STZ WRMPYB
    case 0xC080E7: cpu.execute_instruction<0x9C>(0x004203, 3); return true;
    // src/system/reset.asm:92 STZ WRDIVL
    case 0xC080EA: cpu.execute_instruction<0x9C>(0x004204, 3); return true;
    // src/system/reset.asm:93 STZ WRDIVH
    case 0xC080ED: cpu.execute_instruction<0x9C>(0x004205, 3); return true;
    // src/system/reset.asm:94 STZ WRDIVB
    case 0xC080F0: cpu.execute_instruction<0x9C>(0x004206, 3); return true;
    // src/system/reset.asm:95 STZ HTIMEL
    case 0xC080F3: cpu.execute_instruction<0x9C>(0x004207, 3); return true;
    // src/system/reset.asm:96 STZ HTIMEH
    case 0xC080F6: cpu.execute_instruction<0x9C>(0x004208, 3); return true;
    // src/system/reset.asm:97 STZ VTIMEL
    case 0xC080F9: cpu.execute_instruction<0x9C>(0x004209, 3); return true;
    // src/system/reset.asm:98 STZ VTIMEH
    case 0xC080FC: cpu.execute_instruction<0x9C>(0x00420A, 3); return true;
    // src/system/reset.asm:99 STZ MDMAEN
    case 0xC080FF: cpu.execute_instruction<0x9C>(0x00420B, 3); return true;
    // src/system/reset.asm:100 STZ HDMAEN
    case 0xC08102: cpu.execute_instruction<0x9C>(0x00420C, 3); return true;
    // src/system/reset.asm:101 LDA #$01
    case 0xC08105: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/system/reset.asm:102 STA MEMSEL
    case 0xC08107: cpu.execute_instruction<0x8D>(0x00420D, 3); return true;
    // src/system/reset.asm:102 STA MEMSEL
    // Overlapping static entry reached from 0xC08105.
    case 0xC08108: cpu.execute_instruction<0x0D>(0x00C242, 3); return true;
    // src/system/reset.asm:103 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0810A: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/reset.asm:103 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC08108.
    case 0xC0810B: cpu.execute_instruction<0x30>(0x0000A9, 2); return true;
    // src/system/reset.asm:104 LDA #$DFFF
    case 0xC0810C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00DFFF, 3); return true;
    // src/system/reset.asm:104 LDA #$DFFF
    // Overlapping static entry reached from 0xC0810B.
    case 0xC0810D: cpu.execute_instruction<0xFF>(0x7E54DF, 4); return true;
    // src/system/reset.asm:104 LDA #$DFFF
    // Overlapping static entry reached from 0xC0810C.
    case 0xC0810E: cpu.execute_instruction<0xDF>(0x7E7E54, 4); return true;
    // src/system/reset.asm:105 MVN #^__BSS_START__,#^__BSS_START__
    case 0xC0810F: cpu.execute_instruction<0x54>(0x007E7E, 3); return true;
    // src/system/reset.asm:105 MVN #^__BSS_START__,#^__BSS_START__
    // Overlapping static entry reached from 0xC0810D.
    case 0xC08111: cpu.execute_instruction<0x7E>(0x0000A9, 3); return true;
    // src/system/reset.asm:106 LDA #$2000
    case 0xC08112: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002000, 3); return true;
    // src/system/reset.asm:106 LDA #$2000
    // Overlapping static entry reached from 0xC08112.
    case 0xC08114: cpu.execute_instruction<0x20>(0x00A18D, 3); return true;
    // src/system/reset.asm:107 STA CURRENT_HEAP_ADDRESS
    case 0xC08115: cpu.execute_instruction<0x8D>(0x0000A1, 3); return true;
    // src/system/reset.asm:107 STA CURRENT_HEAP_ADDRESS
    // Overlapping static entry reached from 0xC08114.
    case 0xC08117: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/reset.asm:108 STA BASE_HEAP_ADDRESS
    case 0xC08118: cpu.execute_instruction<0x8D>(0x0000A3, 3); return true;
    // src/system/reset.asm:109 LDA #$FFFF
    case 0xC0811B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/system/reset.asm:109 LDA #$FFFF
    // Overlapping static entry reached from 0xC0811B.
    case 0xC0811D: cpu.execute_instruction<0xFF>(0x24028D, 4); return true;
    // src/system/reset.asm:110 STA UNUSED_7E2402
    case 0xC0811E: cpu.execute_instruction<0x8D>(0x002402, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/system/reset.asm:111 MOVE_INT_CONSTANT $56781234, RAND_A
    case 0xC08121: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000034, 2); else cpu.execute_instruction<0xA9>(0x001234, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/system/reset.asm:111 MOVE_INT_CONSTANT $56781234, RAND_A
    // Overlapping static entry reached from 0xC08121.
    case 0xC08123: cpu.execute_instruction<0x12>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/system/reset.asm:111 MOVE_INT_CONSTANT $56781234, RAND_A
    case 0xC08124: cpu.execute_instruction<0x8D>(0x000024, 3); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/system/reset.asm:111 MOVE_INT_CONSTANT $56781234, RAND_A
    // Overlapping static entry reached from 0xC08123.
    case 0xC08125: cpu.execute_instruction<0x24>(0x000000, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/system/reset.asm:111 MOVE_INT_CONSTANT $56781234, RAND_A
    case 0xC08127: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x005678, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/system/reset.asm:111 MOVE_INT_CONSTANT $56781234, RAND_A
    // Overlapping static entry reached from 0xC08127.
    case 0xC08129: cpu.execute_instruction<0x56>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/system/reset.asm:111 MOVE_INT_CONSTANT $56781234, RAND_A
    case 0xC0812A: cpu.execute_instruction<0x8D>(0x000026, 3); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/system/reset.asm:111 MOVE_INT_CONSTANT $56781234, RAND_A
    // Overlapping static entry reached from 0xC08129.
    case 0xC0812B: cpu.execute_instruction<0x26>(0x000000, 2); return true;
    // src/system/reset.asm:112 LDA #$0001
    case 0xC0812D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/reset.asm:112 LDA #$0001
    // Overlapping static entry reached from 0xC0812D.
    case 0xC0812F: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/reset.asm:113 STA NEXT_FRAME_BUF_ID
    case 0xC08130: cpu.execute_instruction<0x8D>(0x00002E, 3); return true;
    // src/system/reset.asm:114 LDA #.LOWORD(DEFAULT_IRQ_CALLBACK)
    case 0xC08133: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00851B, 3); return true;
    // src/system/reset.asm:114 LDA #.LOWORD(DEFAULT_IRQ_CALLBACK)
    // Overlapping static entry reached from 0xC08133.
    case 0xC08135: cpu.execute_instruction<0x85>(0x00008D, 2); return true;
    // src/system/reset.asm:115 STA IRQ_CALLBACK
    case 0xC08136: cpu.execute_instruction<0x8D>(0x000020, 3); return true;
    // src/system/reset.asm:115 STA IRQ_CALLBACK
    // Overlapping static entry reached from 0xC08135.
    case 0xC08137: cpu.execute_instruction<0x20>(0x002200, 3); return true;
    // src/system/reset.asm:116 JSL UNKNOWN_C08B19
    case 0xC08139: cpu.execute_instruction<0x22>(0xC08B19, 4); return true;
    // src/system/reset.asm:116 JSL UNKNOWN_C08B19
    // Overlapping static entry reached from 0xC08137.
    case 0xC0813A: cpu.execute_instruction<0x19>(0x00C08B, 3); return true;
    // src/system/reset.asm:117 JMP f:GAME_INIT
    case 0xC0813D: cpu.execute_instruction<0x5C>(0xC0B99A, 4); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/reset_irq_callback.asm (source_named).
bool execute_system_reset_irq_callback_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/reset_irq_callback.asm:3 LDA #.LOWORD(DEFAULT_IRQ_CALLBACK)
    case 0xC08522: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00851B, 3); return true;
    // src/system/reset_irq_callback.asm:3 LDA #.LOWORD(DEFAULT_IRQ_CALLBACK)
    // Overlapping static entry reached from 0xC08522.
    case 0xC08524: cpu.execute_instruction<0x85>(0x00008D, 2); return true;
    // src/system/reset_irq_callback.asm:4 STA IRQ_CALLBACK
    case 0xC08525: cpu.execute_instruction<0x8D>(0x000020, 3); return true;
    // src/system/reset_irq_callback.asm:4 STA IRQ_CALLBACK
    // Overlapping static entry reached from 0xC08524.
    case 0xC08526: cpu.execute_instruction<0x20>(0x006B00, 3); return true;
    // src/system/reset_irq_callback.asm:5 RTL
    case 0xC08528: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/reset_vector.asm (source_named).
bool execute_system_reset_vector_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/reset_vector.asm:4 CLC
    case 0xC08141: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/reset_vector.asm:5 XCE
    case 0xC08142: cpu.execute_instruction<0xFB>(0x000000, 1); return true;
    // src/system/reset_vector.asm:7 JMP f:RESET
    case 0xC08143: cpu.execute_instruction<0x5C>(0xC08000, 4); return true;
    default: return false;
    }
}

} // namespace eb::us
