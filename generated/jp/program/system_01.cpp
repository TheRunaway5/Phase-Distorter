// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/system/alloc_sprite_mem.asm (source_named).
bool execute_system_alloc_sprite_mem_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/alloc_sprite_mem.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC01C27: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/alloc_sprite_mem.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC01C24.
    case 0xC01C28: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/alloc_sprite_mem.asm:8 END_STACK_VARS
    case 0xC01C29: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/alloc_sprite_mem.asm:8 END_STACK_VARS
    case 0xC01C2A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/alloc_sprite_mem.asm:8 END_STACK_VARS
    case 0xC01C2B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/alloc_sprite_mem.asm:8 END_STACK_VARS
    case 0xC01C2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/alloc_sprite_mem.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC01C2C.
    case 0xC01C2E: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/alloc_sprite_mem.asm:8 END_STACK_VARS
    case 0xC01C2F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/alloc_sprite_mem.asm:8 END_STACK_VARS
    case 0xC01C30: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/alloc_sprite_mem.asm:9 TXY
    case 0xC01C31: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/alloc_sprite_mem.asm:10 STA @LOCAL00
    case 0xC01C32: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/alloc_sprite_mem.asm:11 LDX #0
    case 0xC01C34: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/alloc_sprite_mem.asm:11 LDX #0
    // Overlapping static entry reached from 0xC01C34.
    case 0xC01C36: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/system/alloc_sprite_mem.asm:12 BRA @UNKNOWN3
    case 0xC01C37: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/system/alloc_sprite_mem.asm:14 REP #PROC_FLAGS::ACCUM8
    case 0xC01C39: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/alloc_sprite_mem.asm:15 LDA @LOCAL00
    case 0xC01C3B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/alloc_sprite_mem.asm:16 REP #PROC_FLAGS::ACCUM8
    case 0xC01C3D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/alloc_sprite_mem.asm:17 AND #$00FF
    case 0xC01C3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/alloc_sprite_mem.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC01C3F.
    case 0xC01C41: cpu.execute_instruction<0x00>(0x000009, 2); return true;
    // src/system/alloc_sprite_mem.asm:18 ORA #$0080
    case 0xC01C42: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000080, 2); else cpu.execute_instruction<0x09>(0x000080, 3); return true;
    // src/system/alloc_sprite_mem.asm:18 ORA #$0080
    // Overlapping static entry reached from 0xC01C42.
    case 0xC01C44: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/alloc_sprite_mem.asm:19 STA @VIRTUAL02
    case 0xC01C45: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/alloc_sprite_mem.asm:20 LDA SPRITE_VRAM_TABLE,X
    case 0xC01C47: cpu.execute_instruction<0xBD>(0x004D86, 3); return true;
    // src/system/alloc_sprite_mem.asm:21 AND #$00FF
    case 0xC01C4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/alloc_sprite_mem.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC01C4A.
    case 0xC01C4C: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/system/alloc_sprite_mem.asm:22 CMP @VIRTUAL02
    case 0xC01C4D: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/system/alloc_sprite_mem.asm:23 BEQ @UNKNOWN1
    case 0xC01C4F: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/system/alloc_sprite_mem.asm:24 LDA @LOCAL00
    case 0xC01C51: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/alloc_sprite_mem.asm:25 CMP #$8000
    case 0xC01C53: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/system/alloc_sprite_mem.asm:25 CMP #$8000
    // Overlapping static entry reached from 0xC01C53.
    case 0xC01C55: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // src/system/alloc_sprite_mem.asm:26 BNE @UNKNOWN2
    case 0xC01C56: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/system/alloc_sprite_mem.asm:28 TYA
    case 0xC01C58: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/alloc_sprite_mem.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC01C59: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/alloc_sprite_mem.asm:30 STA SPRITE_VRAM_TABLE,X
    case 0xC01C5B: cpu.execute_instruction<0x9D>(0x004D86, 3); return true;
    // src/system/alloc_sprite_mem.asm:32 INX
    case 0xC01C5E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/alloc_sprite_mem.asm:34 CPX #88
    case 0xC01C5F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000058, 2); else cpu.execute_instruction<0xE0>(0x000058, 3); return true;
    // src/system/alloc_sprite_mem.asm:34 CPX #88
    // Overlapping static entry reached from 0xC01C5F.
    case 0xC01C61: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/alloc_sprite_mem.asm:35 BCC @UNKNOWN0
    case 0xC01C62: cpu.execute_instruction<0x90>(0x0000D5, 2); return true;
    // src/system/alloc_sprite_mem.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC01C64: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/alloc_sprite_mem.asm:37 END_C_FUNCTION
    case 0xC01C66: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/alloc_sprite_mem.asm:37 END_C_FUNCTION
    case 0xC01C67: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/animate_palette.asm (source_named).
bool execute_system_animate_palette_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/animate_palette.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC00317: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/animate_palette.asm:6 END_STACK_VARS
    case 0xC00319: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/animate_palette.asm:6 END_STACK_VARS
    case 0xC0031A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/animate_palette.asm:6 END_STACK_VARS
    case 0xC0031B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/animate_palette.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0031B.
    case 0xC0031D: cpu.execute_instruction<0xFF>(0xE2AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/animate_palette.asm:6 END_STACK_VARS
    case 0xC0031E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/animate_palette.asm:7 LDA OVERWORLD_PALETTE_ANIM + overworld_palette_anim::timer
    case 0xC0031F: cpu.execute_instruction<0xAD>(0x0047E2, 3); return true;
    // src/system/animate_palette.asm:7 LDA OVERWORLD_PALETTE_ANIM + overworld_palette_anim::timer
    // Overlapping static entry reached from 0xC0031D.
    case 0xC00321: cpu.execute_instruction<0x47>(0x00003A, 2); return true;
    // src/system/animate_palette.asm:8 DEC
    case 0xC00322: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/system/animate_palette.asm:9 STA OVERWORLD_PALETTE_ANIM + overworld_palette_anim::timer
    case 0xC00323: cpu.execute_instruction<0x8D>(0x0047E2, 3); return true;
    // src/system/animate_palette.asm:10 BNE @UNKNOWN1
    case 0xC00326: cpu.execute_instruction<0xD0>(0x000041, 2); return true;
    // src/system/animate_palette.asm:11 LDX #.LOWORD(OVERWORLD_PALETTE_ANIM) + overworld_palette_anim::index
    case 0xC00328: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E4, 2); else cpu.execute_instruction<0xA2>(0x0047E4, 3); return true;
    // src/system/animate_palette.asm:11 LDX #.LOWORD(OVERWORLD_PALETTE_ANIM) + overworld_palette_anim::index
    // Overlapping static entry reached from 0xC00328.
    case 0xC0032A: cpu.execute_instruction<0x47>(0x000086, 2); return true;
    // src/system/animate_palette.asm:12 STX @LOCAL00
    case 0xC0032B: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/animate_palette.asm:12 STX @LOCAL00
    // Overlapping static entry reached from 0xC0032A.
    case 0xC0032C: cpu.execute_instruction<0x0E>(0x0000BD, 3); return true;
    // src/system/animate_palette.asm:13 LDA __BSS_START__,X
    case 0xC0032D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/animate_palette.asm:13 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC0032C.
    case 0xC0032F: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/system/animate_palette.asm:14 ASL
    case 0xC00330: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/animate_palette.asm:16 CLC
    case 0xC00331: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/animate_palette.asm:17 ADC #.LOWORD(OVERWORLD_PALETTE_ANIM)
    case 0xC00332: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x0047E2, 3); return true;
    // src/system/animate_palette.asm:17 ADC #.LOWORD(OVERWORLD_PALETTE_ANIM)
    // Overlapping static entry reached from 0xC00332.
    case 0xC00334: cpu.execute_instruction<0x47>(0x0000AA, 2); return true;
    // src/system/animate_palette.asm:18 TAX
    case 0xC00335: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/animate_palette.asm:19 LDA a:overworld_palette_anim::delays,X
    case 0xC00336: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/system/animate_palette.asm:24 BNE @UNKNOWN0
    case 0xC00339: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/system/animate_palette.asm:25 LDA #0
    case 0xC0033B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/animate_palette.asm:25 LDA #0
    // Overlapping static entry reached from 0xC0033B.
    case 0xC0033D: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/system/animate_palette.asm:26 LDX @LOCAL00
    case 0xC0033E: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/animate_palette.asm:27 STA __BSS_START__,X
    case 0xC00340: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/animate_palette.asm:29 LDX #.LOWORD(OVERWORLD_PALETTE_ANIM) + overworld_palette_anim::index
    case 0xC00343: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E4, 2); else cpu.execute_instruction<0xA2>(0x0047E4, 3); return true;
    // src/system/animate_palette.asm:29 LDX #.LOWORD(OVERWORLD_PALETTE_ANIM) + overworld_palette_anim::index
    // Overlapping static entry reached from 0xC00343.
    case 0xC00345: cpu.execute_instruction<0x47>(0x000086, 2); return true;
    // src/system/animate_palette.asm:30 STX @LOCAL00
    case 0xC00346: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/animate_palette.asm:30 STX @LOCAL00
    // Overlapping static entry reached from 0xC00345.
    case 0xC00347: cpu.execute_instruction<0x0E>(0x0000BD, 3); return true;
    // src/system/animate_palette.asm:31 LDA __BSS_START__,X
    case 0xC00348: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/animate_palette.asm:31 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC00347.
    case 0xC0034A: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/system/animate_palette.asm:32 ASL
    case 0xC0034B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/animate_palette.asm:34 CLC
    case 0xC0034C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/animate_palette.asm:35 ADC #.LOWORD(OVERWORLD_PALETTE_ANIM)
    case 0xC0034D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x0047E2, 3); return true;
    // src/system/animate_palette.asm:35 ADC #.LOWORD(OVERWORLD_PALETTE_ANIM)
    // Overlapping static entry reached from 0xC0034D.
    case 0xC0034F: cpu.execute_instruction<0x47>(0x0000AA, 2); return true;
    // src/system/animate_palette.asm:36 TAX
    case 0xC00350: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/animate_palette.asm:37 LDA a:overworld_palette_anim::delays,X
    case 0xC00351: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/system/animate_palette.asm:42 STA OVERWORLD_PALETTE_ANIM + overworld_palette_anim::timer
    case 0xC00354: cpu.execute_instruction<0x8D>(0x0047E2, 3); return true;
    // src/system/animate_palette.asm:43 LDX @LOCAL00
    case 0xC00357: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/animate_palette.asm:44 LDA __BSS_START__,X
    case 0xC00359: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/animate_palette.asm:45 JSL UNKNOWN_C0A1F2
    case 0xC0035C: cpu.execute_instruction<0x22>(0xC0A1D1, 4); return true;
    // src/system/animate_palette.asm:46 LDX @LOCAL00
    case 0xC00360: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/animate_palette.asm:47 LDA __BSS_START__,X
    case 0xC00362: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/animate_palette.asm:48 INC
    case 0xC00365: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/animate_palette.asm:49 STA __BSS_START__,X
    case 0xC00366: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/animate_palette.asm:51 END_C_FUNCTION
    case 0xC00369: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/animate_palette.asm:51 END_C_FUNCTION
    case 0xC0036A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
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
    case 0xC00178: cpu.execute_instruction<0xFF>(0x62A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/animate_tileset.asm:9 END_STACK_VARS
    case 0xC00179: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/animate_tileset.asm:10 LDA #.LOWORD(OVERWORLD_TILESET_ANIM)
    case 0xC0017A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000062, 2); else cpu.execute_instruction<0xA9>(0x004762, 3); return true;
    // src/system/animate_tileset.asm:10 LDA #.LOWORD(OVERWORLD_TILESET_ANIM)
    // Overlapping static entry reached from 0xC0017A.
    case 0xC0017C: cpu.execute_instruction<0x47>(0x000085, 2); return true;
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
    case 0xC00231: cpu.execute_instruction<0xAD>(0x0047F8, 3); return true;
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
    case 0xC3F8F3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:4 LDX #$0033
    case 0xC3F8F5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000033, 2); else cpu.execute_instruction<0xA2>(0x000033, 3); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:4 LDX #$0033
    // Overlapping static entry reached from 0xC3F8F5.
    case 0xC3F8F7: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:5 LDA #$0000
    case 0xC3F8F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:5 LDA #$0000
    // Overlapping static entry reached from 0xC3F8F8.
    case 0xC3F8FA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:7 CLC
    case 0xC3F8FB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:8 ADC f:CHECK_HARDWARE,X
    case 0xC3F8FC: cpu.execute_instruction<0x7F>(0xC0A0FB, 4); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:9 DEX
    case 0xC3F900: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:10 BPL @UNKNOWN0
    case 0xC3F901: cpu.execute_instruction<0x10>(0x0000F8, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:11 SEC
    case 0xC3F903: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:12 SBC f:ANTIPIRACY_CHECKSUM_2
    case 0xC3F904: cpu.execute_instruction<0xEF>(0xC3F920, 4); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:13 BEQ @UNKNOWN3
    case 0xC3F908: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC3F90A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:16 LDX #$0000
    case 0xC3F90C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x006000, 3); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:17 RTS
    case 0xC3F90E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:18 LDA #$0000
    case 0xC3F90F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009F00, 3); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:20 STA f:SRAM,X
    case 0xC3F911: cpu.execute_instruction<0x9F>(0x300000, 4); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:20 STA f:SRAM,X
    // Overlapping static entry reached from 0xC3F90F.
    case 0xC3F912: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:21 INX
    case 0xC3F915: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:22 BPL @UNKNOWN1
    case 0xC3F916: cpu.execute_instruction<0x10>(0x0000F9, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:23 LDA #$0034
    case 0xC3F918: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000034, 2); else cpu.execute_instruction<0xA9>(0x008D34, 3); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:24 STA DMA_QUEUE_INDEX
    case 0xC3F91A: cpu.execute_instruction<0x8D>(0x000000, 3); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:24 STA DMA_QUEUE_INDEX
    // Overlapping static entry reached from 0xC3F918.
    case 0xC3F91B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:26 BRA @UNKNOWN2
    case 0xC3F91D: cpu.execute_instruction<0x80>(0x0000FE, 2); return true;
    // src/system/antipiracy/final_battle_antipiracy_check.asm:28 RTL
    case 0xC3F91F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/antipiracy/sram_check_routine_checksum.asm (source_named).
bool execute_system_antipiracy_sram_check_routine_checksum_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/antipiracy/sram_check_routine_checksum.asm:4 LDX #$0033
    case 0xC1FD04: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000033, 2); else cpu.execute_instruction<0xA2>(0x000033, 3); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:4 LDX #$0033
    // Overlapping static entry reached from 0xC1FD04.
    case 0xC1FD06: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:5 REP #PROC_FLAGS::ACCUM8
    case 0xC1FD07: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:6 LDA #$0000
    case 0xC1FD09: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:6 LDA #$0000
    // Overlapping static entry reached from 0xC1FD09.
    case 0xC1FD0B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:7 STA PIRACY_FLAG
    case 0xC1FD0C: cpu.execute_instruction<0x8D>(0x00B6EA, 3); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:9 CLC
    case 0xC1FD0F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:10 ADC f:CHECK_HARDWARE,X
    case 0xC1FD10: cpu.execute_instruction<0x7F>(0xC0A0FB, 4); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:11 DEX
    case 0xC1FD14: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:12 BPL @UNKNOWN0
    case 0xC1FD15: cpu.execute_instruction<0x10>(0x0000F8, 2); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:13 SEC
    case 0xC1FD17: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:14 SBC f:SRAM_CHECK_ROUTINE_CHECKSUM_VALUE
    case 0xC1FD18: cpu.execute_instruction<0xEF>(0xC1FD20, 4); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:15 STA PIRACY_FLAG
    case 0xC1FD1C: cpu.execute_instruction<0x8D>(0x00B6EA, 3); return true;
    // src/system/antipiracy/sram_check_routine_checksum.asm:19 RTL
    case 0xC1FD1F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/center_screen.asm (source_named).
bool execute_system_center_screen_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/center_screen.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC04295: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/center_screen.asm:8 END_STACK_VARS
    case 0xC04297: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/center_screen.asm:8 END_STACK_VARS
    case 0xC04298: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/center_screen.asm:8 END_STACK_VARS
    case 0xC04299: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/center_screen.asm:8 END_STACK_VARS
    case 0xC0429A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/center_screen.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0429A.
    case 0xC0429C: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/center_screen.asm:8 END_STACK_VARS
    case 0xC0429D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/center_screen.asm:8 END_STACK_VARS
    case 0xC0429E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/center_screen.asm:9 STA @LOCAL00
    case 0xC0429F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/center_screen.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC0429C.
    case 0xC042A0: cpu.execute_instruction<0x0E>(0x00388A, 3); return true;
    // src/system/center_screen.asm:10 TXA
    case 0xC042A1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/center_screen.asm:11 SEC
    case 0xC042A2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/center_screen.asm:12 SBC #112
    case 0xC042A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000070, 2); else cpu.execute_instruction<0xE9>(0x000070, 3); return true;
    // src/system/center_screen.asm:12 SBC #112
    // Overlapping static entry reached from 0xC042A3.
    case 0xC042A5: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/system/center_screen.asm:13 TAX
    case 0xC042A6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/center_screen.asm:14 LDA @LOCAL00
    case 0xC042A7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/center_screen.asm:15 SEC
    case 0xC042A9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/center_screen.asm:16 SBC #128
    case 0xC042AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/system/center_screen.asm:16 SBC #128
    // Overlapping static entry reached from 0xC042AA.
    case 0xC042AC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/system/center_screen.asm:17 JSR REFRESH_MAP_AT_POSITION
    case 0xC042AD: cpu.execute_instruction<0x20>(0x00156E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/center_screen.asm:18 END_C_FUNCTION
    case 0xC042B0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/center_screen.asm:18 END_C_FUNCTION
    case 0xC042B1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/check_hardware.asm (source_named).
bool execute_system_check_hardware_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/check_hardware.asm:6 SEP #PROC_FLAGS::ACCUM8
    case 0xC0A0FB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/check_hardware.asm:7 LDA #$30
    case 0xC0A0FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x008F30, 3); return true;
    // src/system/check_hardware.asm:8 STA f:ANTIPIRACY_SCRATCH_SPACE
    case 0xC0A0FF: cpu.execute_instruction<0x8F>(0x307FF0, 4); return true;
    // src/system/check_hardware.asm:8 STA f:ANTIPIRACY_SCRATCH_SPACE
    // Overlapping static entry reached from 0xC0A0FD.
    case 0xC0A100: cpu.execute_instruction<0xF0>(0x00007F, 2); return true;
    // src/system/check_hardware.asm:8 STA f:ANTIPIRACY_SCRATCH_SPACE
    // Overlapping static entry reached from 0xC0A100.
    case 0xC0A102: cpu.execute_instruction<0x30>(0x00001A, 2); return true;
    // src/system/check_hardware.asm:9 INC
    case 0xC0A103: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/check_hardware.asm:10 STA f:ANTIPIRACY_MIRROR_TEST
    case 0xC0A104: cpu.execute_instruction<0x8F>(0x317FF0, 4); return true;
    // src/system/check_hardware.asm:10 STA f:ANTIPIRACY_MIRROR_TEST
    // Overlapping static entry reached from 0xC0A17D.
    case 0xC0A105: cpu.execute_instruction<0xF0>(0x00007F, 2); return true;
    // src/system/check_hardware.asm:10 STA f:ANTIPIRACY_MIRROR_TEST
    // Overlapping static entry reached from 0xC0A105.
    case 0xC0A107: cpu.execute_instruction<0x31>(0x0000CF, 2); return true;
    // src/system/check_hardware.asm:11 CMP f:ANTIPIRACY_SCRATCH_SPACE
    case 0xC0A108: cpu.execute_instruction<0xCF>(0x307FF0, 4); return true;
    // src/system/check_hardware.asm:11 CMP f:ANTIPIRACY_SCRATCH_SPACE
    // Overlapping static entry reached from 0xC0A107.
    case 0xC0A109: cpu.execute_instruction<0xF0>(0x00007F, 2); return true;
    // src/system/check_hardware.asm:11 CMP f:ANTIPIRACY_SCRATCH_SPACE
    // Overlapping static entry reached from 0xC0A109.
    case 0xC0A10B: cpu.execute_instruction<0x30>(0x0000F0, 2); return true;
    // src/system/check_hardware.asm:12 BEQ @UNKNOWN0
    case 0xC0A10C: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/system/check_hardware.asm:12 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC0A10B.
    case 0xC0A10D: cpu.execute_instruction<0x0C>(0x0020C2, 3); return true;
    // src/system/check_hardware.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC0A10E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/check_hardware.asm:14 PLA
    case 0xC0A110: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/check_hardware.asm:15 TSC
    case 0xC0A111: cpu.execute_instruction<0x3B>(0x000000, 1); return true;
    // src/system/check_hardware.asm:16 SBC #$0100
    case 0xC0A112: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000100, 3); return true;
    // src/system/check_hardware.asm:16 SBC #$0100
    // Overlapping static entry reached from 0xC0A112.
    case 0xC0A114: cpu.execute_instruction<0x01>(0x00005B, 2); return true;
    // src/system/check_hardware.asm:17 TCD
    case 0xC0A115: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/check_hardware.asm:18 JMP f:DISPLAY_ANTI_PIRACY_SCREEN
    case 0xC0A116: cpu.execute_instruction<0x5C>(0xC30100, 4); return true;
    // src/system/check_hardware.asm:21 LDA f:STAT78
    case 0xC0A11A: cpu.execute_instruction<0xAF>(0x00213F, 4); return true;
    // src/system/check_hardware.asm:22 AND #$10
    case 0xC0A11E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x00F010, 3); return true;
    // src/system/check_hardware.asm:23 BEQ @UNKNOWN1
    case 0xC0A120: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/system/check_hardware.asm:23 BEQ @UNKNOWN1
    // Overlapping static entry reached from 0xC0A11E.
    case 0xC0A121: cpu.execute_instruction<0x0C>(0x0020C2, 3); return true;
    // src/system/check_hardware.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC0A122: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/check_hardware.asm:25 PLA
    case 0xC0A124: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/check_hardware.asm:26 TSC
    case 0xC0A125: cpu.execute_instruction<0x3B>(0x000000, 1); return true;
    // src/system/check_hardware.asm:27 SBC #$0100
    case 0xC0A126: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x000100, 3); return true;
    // src/system/check_hardware.asm:27 SBC #$0100
    // Overlapping static entry reached from 0xC0A126.
    case 0xC0A128: cpu.execute_instruction<0x01>(0x00005B, 2); return true;
    // src/system/check_hardware.asm:28 TCD
    case 0xC0A129: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/check_hardware.asm:29 JMP f:DISPLAY_FAULTY_GAMEPAK_SCREEN
    case 0xC0A12A: cpu.execute_instruction<0x5C>(0xC30142, 4); return true;
    // src/system/check_hardware.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC0A12E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/check_hardware.asm:33 RTL
    case 0xC0A130: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
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
    case 0xC086A3: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/system/copy_to_vram.asm:36 LDY <DMA_COPY_MODE + 0
    case 0xC086A5: cpu.execute_instruction<0xA4>(0x000091, 2); return true;
    // src/system/copy_to_vram.asm:37 LDA DMA_TABLE,Y
    case 0xC086A7: cpu.execute_instruction<0xB9>(0x008F94, 3); return true;
    // src/system/copy_to_vram.asm:38 STA DMAP1
    case 0xC086AA: cpu.execute_instruction<0x8D>(0x004310, 3); return true;
    // src/system/copy_to_vram.asm:39 LDX DMA_TABLE + 2,Y
    case 0xC086AD: cpu.execute_instruction<0xBE>(0x008F96, 3); return true;
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
    // src/system/copy_to_vram.asm:58 REP #PROC_FLAGS::INDEX8
    case 0xC086D2: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/system/copy_to_vram.asm:59 PLY
    case 0xC086D4: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/system/copy_to_vram.asm:60 PLP
    case 0xC086D5: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/copy_to_vram.asm:61 RTS
    case 0xC086D6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
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
    case 0xEFD069: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/system/debug/check_view_character_mode.asm:4 LDA DEBUG_MODE_NUMBER
    case 0xEFD06B: cpu.execute_instruction<0xAD>(0x00B70A, 3); return true;
    // src/system/debug/check_view_character_mode.asm:5 CMP #$0002
    case 0xEFD06E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/system/debug/check_view_character_mode.asm:5 CMP #$0002
    // Overlapping static entry reached from 0xEFD06E.
    case 0xEFD070: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/system/debug/check_view_character_mode.asm:6 BNE @UNKNOWN0
    case 0xEFD071: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/system/debug/check_view_character_mode.asm:7 LDA #$0000
    case 0xEFD073: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/debug/check_view_character_mode.asm:7 LDA #$0000
    // Overlapping static entry reached from 0xEFD073.
    case 0xEFD075: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/system/debug/check_view_character_mode.asm:8 BRA @UNKNOWN1
    case 0xEFD076: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/system/debug/check_view_character_mode.asm:10 LDA #$0001
    case 0xEFD078: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/debug/check_view_character_mode.asm:10 LDA #$0001
    // Overlapping static entry reached from 0xEFD078.
    case 0xEFD07A: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/system/debug/check_view_character_mode.asm:12 RTL
    case 0xEFD07B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/debug/display_check_position_debug_overlay.asm (source_named).
bool execute_system_debug_display_check_position_debug_overlay_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/debug/display_check_position_debug_overlay.asm:3 BEGIN_C_FUNCTION
    case 0xEFC5D6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/debug/display_check_position_debug_overlay.asm:7 END_STACK_VARS
    case 0xEFC5D8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/debug/display_check_position_debug_overlay.asm:7 END_STACK_VARS
    case 0xEFC5D9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/display_check_position_debug_overlay.asm:7 END_STACK_VARS
    case 0xEFC5DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/display_check_position_debug_overlay.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xEFC5DA.
    case 0xEFC5DC: cpu.execute_instruction<0xFF>(0x28A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/debug/display_check_position_debug_overlay.asm:7 END_STACK_VARS
    case 0xEFC5DD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:8 LDA #.LOWORD(GAME_STATE)+game_state::leader_x_coord
    case 0xEFC5DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x009B28, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:8 LDA #.LOWORD(GAME_STATE)+game_state::leader_x_coord
    // Overlapping static entry reached from 0xEFC5DE.
    case 0xEFC5E0: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:9 STA @VIRTUAL04
    case 0xEFC5E1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:10 LDX @VIRTUAL04
    case 0xEFC5E3: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:11 LDA __BSS_START__,X
    case 0xEFC5E5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:12 XBA
    case 0xEFC5E8: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:13 AND #$00FF
    case 0xEFC5E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xEFC5E9.
    case 0xEFC5EB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:14 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xEFC5EC: cpu.execute_instruction<0x20>(0x00C4AF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:15 TAX
    case 0xEFC5EF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:16 LDA #^__BSS_START__
    case 0xEFC5F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:16 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC5F0.
    case 0xEFC5F2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:17 STA @LOCAL00
    case 0xEFC5F3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:18 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 26
    case 0xEFC5F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000044, 2); else cpu.execute_instruction<0xA9>(0x007F44, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:18 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 26
    // Overlapping static entry reached from 0xEFC5F5.
    case 0xEFC5F7: cpu.execute_instruction<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:19 STA @LOCAL01
    case 0xEFC5F8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:20 TXY
    case 0xEFC5FA: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:21 LDX #8
    case 0xEFC5FB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:21 LDX #8
    // Overlapping static entry reached from 0xEFC5FB.
    case 0xEFC5FD: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xEFC5FE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:23 LDA #0
    case 0xEFC600: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:24 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFC602: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:24 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC600.
    case 0xEFC603: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:26 LDA #.LOWORD(GAME_STATE)+game_state::leader_y_coord
    case 0xEFC606: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002C, 2); else cpu.execute_instruction<0xA9>(0x009B2C, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:26 LDA #.LOWORD(GAME_STATE)+game_state::leader_y_coord
    // Overlapping static entry reached from 0xEFC606.
    case 0xEFC608: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:27 STA @VIRTUAL02
    case 0xEFC609: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:28 LDX @VIRTUAL02
    case 0xEFC60B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:29 LDA __BSS_START__,X
    case 0xEFC60D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:30 XBA
    case 0xEFC610: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:31 AND #$00FF
    case 0xEFC611: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xEFC611.
    case 0xEFC613: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:32 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xEFC614: cpu.execute_instruction<0x20>(0x00C4AF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:34 TAX
    case 0xEFC617: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:35 LDA #^__BSS_START__
    case 0xEFC618: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:35 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC618.
    case 0xEFC61A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:36 STA @LOCAL00
    case 0xEFC61B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:37 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 26
    case 0xEFC61D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x007F4A, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:37 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 26
    // Overlapping static entry reached from 0xEFC61D.
    case 0xEFC61F: cpu.execute_instruction<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:38 STA @LOCAL01
    case 0xEFC620: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:39 TXY
    case 0xEFC622: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:40 LDX #8
    case 0xEFC623: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:40 LDX #8
    // Overlapping static entry reached from 0xEFC623.
    case 0xEFC625: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xEFC626: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:42 LDA #0
    case 0xEFC628: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:43 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFC62A: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:43 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC628.
    case 0xEFC62B: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:44 LDX @VIRTUAL04
    case 0xEFC62E: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:45 LDA __BSS_START__,X
    case 0xEFC630: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:46 LSR
    case 0xEFC633: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:47 LSR
    case 0xEFC634: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:48 LSR
    case 0xEFC635: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:49 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xEFC636: cpu.execute_instruction<0x20>(0x00C4AF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:51 TAX
    case 0xEFC639: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:52 LDA #^__BSS_START__
    case 0xEFC63A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:52 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC63A.
    case 0xEFC63C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:53 STA @LOCAL00
    case 0xEFC63D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:54 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 25
    case 0xEFC63F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x007F24, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:54 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 25
    // Overlapping static entry reached from 0xEFC63F.
    case 0xEFC641: cpu.execute_instruction<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:55 STA @LOCAL01
    case 0xEFC642: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:56 TXY
    case 0xEFC644: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:57 LDX #8
    case 0xEFC645: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:57 LDX #8
    // Overlapping static entry reached from 0xEFC645.
    case 0xEFC647: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xEFC648: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:59 LDA #0
    case 0xEFC64A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:60 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFC64C: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:60 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC64A.
    case 0xEFC64D: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:61 LDX @VIRTUAL02
    case 0xEFC650: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:62 LDA __BSS_START__,X
    case 0xEFC652: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:63 LSR
    case 0xEFC655: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:64 LSR
    case 0xEFC656: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:65 LSR
    case 0xEFC657: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:66 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xEFC658: cpu.execute_instruction<0x20>(0x00C4AF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:68 TAX
    case 0xEFC65B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:69 LDA #^__BSS_START__
    case 0xEFC65C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:69 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC65C.
    case 0xEFC65E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:70 STA @LOCAL00
    case 0xEFC65F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:71 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 25
    case 0xEFC661: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002A, 2); else cpu.execute_instruction<0xA9>(0x007F2A, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:71 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 25
    // Overlapping static entry reached from 0xEFC661.
    case 0xEFC663: cpu.execute_instruction<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:72 STA @LOCAL01
    case 0xEFC664: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:73 TXY
    case 0xEFC666: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:74 LDX #8
    case 0xEFC667: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:74 LDX #8
    // Overlapping static entry reached from 0xEFC667.
    case 0xEFC669: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xEFC66A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:76 LDA #0
    case 0xEFC66C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:77 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFC66E: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:77 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC66C.
    case 0xEFC66F: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:78 LDX @VIRTUAL04
    case 0xEFC672: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:79 LDA __BSS_START__,X
    case 0xEFC674: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:80 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xEFC677: cpu.execute_instruction<0x20>(0x00C4AF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:82 TAX
    case 0xEFC67A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:83 LDA #^__BSS_START__
    case 0xEFC67B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:83 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC67B.
    case 0xEFC67D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:84 STA @LOCAL00
    case 0xEFC67E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:85 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 24
    case 0xEFC680: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x007F04, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:85 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 24
    // Overlapping static entry reached from 0xEFC680.
    case 0xEFC682: cpu.execute_instruction<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:86 STA @LOCAL01
    case 0xEFC683: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:87 TXY
    case 0xEFC685: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:88 LDX #8
    case 0xEFC686: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:88 LDX #8
    // Overlapping static entry reached from 0xEFC686.
    case 0xEFC688: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:89 SEP #PROC_FLAGS::ACCUM8
    case 0xEFC689: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:90 LDA #0
    case 0xEFC68B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:91 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFC68D: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:91 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC68B.
    case 0xEFC68E: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:92 LDX @VIRTUAL02
    case 0xEFC691: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:93 LDA __BSS_START__,X
    case 0xEFC693: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:94 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xEFC696: cpu.execute_instruction<0x20>(0x00C4AF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:96 TAX
    case 0xEFC699: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:97 LDA #^__BSS_START__
    case 0xEFC69A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:97 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC69A.
    case 0xEFC69C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:98 STA @LOCAL00
    case 0xEFC69D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:99 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 24
    case 0xEFC69F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x007F0A, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:99 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 24
    // Overlapping static entry reached from 0xEFC69F.
    case 0xEFC6A1: cpu.execute_instruction<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:100 STA @LOCAL01
    case 0xEFC6A2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:101 TXY
    case 0xEFC6A4: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:102 LDX #8
    case 0xEFC6A5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:102 LDX #8
    // Overlapping static entry reached from 0xEFC6A5.
    case 0xEFC6A7: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:103 SEP #PROC_FLAGS::ACCUM8
    case 0xEFC6A8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:104 LDA #0
    case 0xEFC6AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:105 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFC6AC: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:105 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC6AA.
    case 0xEFC6AD: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:107 LDX @VIRTUAL04
    case 0xEFC6B0: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:108 LDA __BSS_START__,X
    case 0xEFC6B2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:109 XBA
    case 0xEFC6B5: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:110 AND #$00FF
    case 0xEFC6B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:110 AND #$00FF
    // Overlapping static entry reached from 0xEFC6B6.
    case 0xEFC6B8: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:111 PHA
    case 0xEFC6B9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:112 LDY #MAP_WIDTH_TILES
    case 0xEFC6BA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000080, 2); else cpu.execute_instruction<0xA0>(0x000080, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:112 LDY #MAP_WIDTH_TILES
    // Overlapping static entry reached from 0xEFC6BA.
    case 0xEFC6BC: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:113 LDX @VIRTUAL02
    case 0xEFC6BD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:114 LDA __BSS_START__,X
    case 0xEFC6BF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:115 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xEFC6C2: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:116 ASL
    case 0xEFC6C6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:117 ASL
    case 0xEFC6C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:118 ASL
    case 0xEFC6C8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:119 ASL
    case 0xEFC6C9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:120 ASL
    case 0xEFC6CA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:121 PLY
    case 0xEFC6CB: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:122 STY @VIRTUAL02
    case 0xEFC6CC: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:123 CLC
    case 0xEFC6CE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:124 ADC @VIRTUAL02
    case 0xEFC6CF: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:125 TAX
    case 0xEFC6D1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:126 LDA MAP_DATA_PER_SECTOR_MUSIC,X
    case 0xEFC6D2: cpu.execute_instruction<0xBF>(0xDCD634, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:127 AND #$00FF
    case 0xEFC6D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:127 AND #$00FF
    // Overlapping static entry reached from 0xEFC6D6.
    case 0xEFC6D8: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:128 TAX
    case 0xEFC6D9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:129 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xEFC6DA: cpu.execute_instruction<0x20>(0x00C4AF, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:130 TAX
    case 0xEFC6DD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:131 LDA #^__BSS_START__
    case 0xEFC6DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:131 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC6DE.
    case 0xEFC6E0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:132 STA @LOCAL00
    case 0xEFC6E1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:133 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 2, 2
    case 0xEFC6E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000042, 2); else cpu.execute_instruction<0xA9>(0x007C42, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:133 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 2, 2
    // Overlapping static entry reached from 0xEFC6E3.
    case 0xEFC6E5: cpu.execute_instruction<0x7C>(0x001085, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:134 STA @LOCAL01
    case 0xEFC6E6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:135 TXY
    case 0xEFC6E8: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:136 INY
    case 0xEFC6E9: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:137 INY
    case 0xEFC6EA: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:138 INY
    case 0xEFC6EB: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:139 INY
    case 0xEFC6EC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:140 LDX #4
    case 0xEFC6ED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:140 LDX #4
    // Overlapping static entry reached from 0xEFC6ED.
    case 0xEFC6EF: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:141 SEP #PROC_FLAGS::ACCUM8
    case 0xEFC6F0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:142 LDA #0
    case 0xEFC6F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:143 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFC6F4: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:143 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC6F2.
    case 0xEFC6F5: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:144 LDA CURRENT_SECTOR_ATTRIBUTES
    case 0xEFC6F8: cpu.execute_instruction<0xAD>(0x004714, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:145 JSR INTEGER_TO_BINARY_DEBUG_TILES
    case 0xEFC6FB: cpu.execute_instruction<0x20>(0x00C583, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:147 TAX
    case 0xEFC6FE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:148 LDA #^__BSS_START__
    case 0xEFC6FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:148 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC6FF.
    case 0xEFC701: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:149 STA @LOCAL00
    case 0xEFC702: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:150 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 2, 3
    case 0xEFC704: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000062, 2); else cpu.execute_instruction<0xA9>(0x007C62, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:150 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 2, 3
    // Overlapping static entry reached from 0xEFC704.
    case 0xEFC706: cpu.execute_instruction<0x7C>(0x001085, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:151 STA @LOCAL01
    case 0xEFC707: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:152 TXY
    case 0xEFC709: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:153 LDX #16
    case 0xEFC70A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:153 LDX #16
    // Overlapping static entry reached from 0xEFC70A.
    case 0xEFC70C: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:154 SEP #PROC_FLAGS::ACCUM8
    case 0xEFC70D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:155 LDA #0
    case 0xEFC70F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:156 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFC711: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:156 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC70F.
    case 0xEFC712: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:157 LDA GAME_STATE+game_state::trodden_tile_type
    case 0xEFC715: cpu.execute_instruction<0xAD>(0x009B32, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:158 JSR INTEGER_TO_BINARY_DEBUG_TILES
    case 0xEFC718: cpu.execute_instruction<0x20>(0x00C583, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:160 TAX
    case 0xEFC71B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:161 LDA #^__BSS_START__
    case 0xEFC71C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:161 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC71C.
    case 0xEFC71E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:162 STA @LOCAL00
    case 0xEFC71F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:163 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 2, 4
    case 0xEFC721: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000082, 2); else cpu.execute_instruction<0xA9>(0x007C82, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:163 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 2, 4
    // Overlapping static entry reached from 0xEFC721.
    case 0xEFC723: cpu.execute_instruction<0x7C>(0x001085, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:164 STA @LOCAL01
    case 0xEFC724: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:165 TXY
    case 0xEFC726: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:166 LDX #16
    case 0xEFC727: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:166 LDX #16
    // Overlapping static entry reached from 0xEFC727.
    case 0xEFC729: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:167 SEP #PROC_FLAGS::ACCUM8
    case 0xEFC72A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:168 LDA #0
    case 0xEFC72C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:169 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFC72E: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_check_position_debug_overlay.asm:169 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC72C.
    case 0xEFC72F: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/debug/display_check_position_debug_overlay.asm:170 END_C_FUNCTION
    case 0xEFC732: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/debug/display_check_position_debug_overlay.asm:170 END_C_FUNCTION
    case 0xEFC733: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/debug/display_menu_options.asm (source_named).
bool execute_system_debug_display_menu_options_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/debug/display_menu_options.asm:3 BEGIN_C_FUNCTION
    case 0xEFC43B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/debug/display_menu_options.asm:7 END_STACK_VARS
    case 0xEFC43D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/debug/display_menu_options.asm:7 END_STACK_VARS
    case 0xEFC43E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/display_menu_options.asm:7 END_STACK_VARS
    case 0xEFC43F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/display_menu_options.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xEFC43F.
    case 0xEFC441: cpu.execute_instruction<0xFF>(0xC0A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/debug/display_menu_options.asm:7 END_STACK_VARS
    case 0xEFC442: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:8 LOADPTR DEBUG_MENU_TEXT_2_LINE_1, @LOCAL00
    case 0xEFC443: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x00C1C0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:8 LOADPTR DEBUG_MENU_TEXT_2_LINE_1, @LOCAL00
    // Overlapping static entry reached from 0xEFC443.
    case 0xEFC445: cpu.execute_instruction<0xC1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/display_menu_options.asm:8 LOADPTR DEBUG_MENU_TEXT_2_LINE_1, @LOCAL00
    case 0xEFC446: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/display_menu_options.asm:8 LOADPTR DEBUG_MENU_TEXT_2_LINE_1, @LOCAL00
    // Overlapping static entry reached from 0xEFC445.
    case 0xEFC447: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:8 LOADPTR DEBUG_MENU_TEXT_2_LINE_1, @LOCAL00
    case 0xEFC448: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:8 LOADPTR DEBUG_MENU_TEXT_2_LINE_1, @LOCAL00
    // Overlapping static entry reached from 0xEFC448.
    case 0xEFC44A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/display_menu_options.asm:8 LOADPTR DEBUG_MENU_TEXT_2_LINE_1, @LOCAL00
    case 0xEFC44B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_menu_options.asm:9 LDX #0
    case 0xEFC44D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/debug/display_menu_options.asm:9 LDX #0
    // Overlapping static entry reached from 0xEFC44D.
    case 0xEFC44F: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/system/debug/display_menu_options.asm:10 TXA
    case 0xEFC450: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/debug/display_menu_options.asm:11 JSR UNKNOWN_EFDABD
    case 0xEFC451: cpu.execute_instruction<0x20>(0x00C3D7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:12 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @LOCAL00
    case 0xEFC454: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x00C1E1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:12 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @LOCAL00
    // Overlapping static entry reached from 0xEFC454.
    case 0xEFC456: cpu.execute_instruction<0xC1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/display_menu_options.asm:12 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @LOCAL00
    case 0xEFC457: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/display_menu_options.asm:12 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @LOCAL00
    // Overlapping static entry reached from 0xEFC456.
    case 0xEFC458: cpu.execute_instruction<0x0E>(0x00EFA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:12 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @LOCAL00
    case 0xEFC459: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:12 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @LOCAL00
    // Overlapping static entry reached from 0xEFC459.
    case 0xEFC45B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/display_menu_options.asm:12 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @LOCAL00
    case 0xEFC45C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_menu_options.asm:13 LDX #3
    case 0xEFC45E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/system/debug/display_menu_options.asm:13 LDX #3
    // Overlapping static entry reached from 0xEFC45E.
    case 0xEFC460: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/system/debug/display_menu_options.asm:14 LDA #11
    case 0xEFC461: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000B, 2); else cpu.execute_instruction<0xA9>(0x00000B, 3); return true;
    // src/system/debug/display_menu_options.asm:14 LDA #11
    // Overlapping static entry reached from 0xEFC461.
    case 0xEFC463: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/system/debug/display_menu_options.asm:15 JSR UNKNOWN_EFDABD
    case 0xEFC464: cpu.execute_instruction<0x20>(0x00C3D7, 3); return true;
    // src/system/debug/display_menu_options.asm:16 LDA #6
    case 0xEFC467: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/system/debug/display_menu_options.asm:16 LDA #6
    // Overlapping static entry reached from 0xEFC467.
    case 0xEFC469: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_menu_options.asm:17 STA @VIRTUAL02
    case 0xEFC46A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/debug/display_menu_options.asm:18 LDY #0
    case 0xEFC46C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/debug/display_menu_options.asm:18 LDY #0
    // Overlapping static entry reached from 0xEFC46C.
    case 0xEFC46E: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/system/debug/display_menu_options.asm:19 STY @LOCAL01
    case 0xEFC46F: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/system/debug/display_menu_options.asm:20 BRA @UNKNOWN1
    case 0xEFC471: cpu.execute_instruction<0x80>(0x000035, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:22 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @VIRTUAL06
    case 0xEFC473: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x00C1E1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:22 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @VIRTUAL06
    // Overlapping static entry reached from 0xEFC473.
    case 0xEFC475: cpu.execute_instruction<0xC1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/display_menu_options.asm:22 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @VIRTUAL06
    case 0xEFC476: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/display_menu_options.asm:22 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @VIRTUAL06
    // Overlapping static entry reached from 0xEFC475.
    case 0xEFC477: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:22 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @VIRTUAL06
    case 0xEFC478: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:22 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @VIRTUAL06
    // Overlapping static entry reached from 0xEFC477.
    case 0xEFC479: cpu.execute_instruction<0xEF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/display_menu_options.asm:22 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @VIRTUAL06
    // Overlapping static entry reached from 0xEFC478.
    case 0xEFC47A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/display_menu_options.asm:22 LOADPTR DEBUG_MENU_TEXT_2_LINE_2, @VIRTUAL06
    case 0xEFC47B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/debug/display_menu_options.asm:23 TYA
    case 0xEFC47D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/system/debug/display_menu_options.asm:24 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xEFC47E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/system/debug/display_menu_options.asm:24 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xEFC480: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/system/debug/display_menu_options.asm:24 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xEFC481: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/system/debug/display_menu_options.asm:24 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xEFC482: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/system/debug/display_menu_options.asm:24 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xEFC483: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/system/debug/display_menu_options.asm:24 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xEFC484: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/system/debug/display_menu_options.asm:25 CLC
    case 0xEFC486: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/display_menu_options.asm:26 ADC #17
    case 0xEFC487: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000011, 2); else cpu.execute_instruction<0x69>(0x000011, 3); return true;
    // src/system/debug/display_menu_options.asm:26 ADC #17
    // Overlapping static entry reached from 0xEFC487.
    case 0xEFC489: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/system/debug/display_menu_options.asm:27 CLC
    case 0xEFC48A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/display_menu_options.asm:28 ADC @VIRTUAL06
    case 0xEFC48B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/system/debug/display_menu_options.asm:29 STA @VIRTUAL06
    case 0xEFC48D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/debug/display_menu_options.asm:30 STA @LOCAL00
    case 0xEFC48F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_menu_options.asm:31 LDA @VIRTUAL06+2
    case 0xEFC491: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/debug/display_menu_options.asm:32 STA @LOCAL00+2
    case 0xEFC493: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_menu_options.asm:33 LDX @VIRTUAL02
    case 0xEFC495: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/debug/display_menu_options.asm:34 LDA #8
    case 0xEFC497: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/system/debug/display_menu_options.asm:34 LDA #8
    // Overlapping static entry reached from 0xEFC497.
    case 0xEFC499: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/system/debug/display_menu_options.asm:35 JSR UNKNOWN_EFDABD
    case 0xEFC49A: cpu.execute_instruction<0x20>(0x00C3D7, 3); return true;
    // src/system/debug/display_menu_options.asm:36 INC @VIRTUAL02
    case 0xEFC49D: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/system/debug/display_menu_options.asm:37 INC @VIRTUAL02
    case 0xEFC49F: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/system/debug/display_menu_options.asm:38 INC @VIRTUAL02
    case 0xEFC4A1: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/system/debug/display_menu_options.asm:39 LDY @LOCAL01
    case 0xEFC4A3: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/system/debug/display_menu_options.asm:40 INY
    case 0xEFC4A5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/debug/display_menu_options.asm:41 STY @LOCAL01
    case 0xEFC4A6: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/system/debug/display_menu_options.asm:43 CPY #7
    case 0xEFC4A8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000007, 2); else cpu.execute_instruction<0xC0>(0x000007, 3); return true;
    // src/system/debug/display_menu_options.asm:43 CPY #7
    // Overlapping static entry reached from 0xEFC4A8.
    case 0xEFC4AA: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/debug/display_menu_options.asm:44 BCC @UNKNOWN0
    case 0xEFC4AB: cpu.execute_instruction<0x90>(0x0000C6, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/debug/display_menu_options.asm:45 END_C_FUNCTION
    case 0xEFC4AD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/debug/display_menu_options.asm:45 END_C_FUNCTION
    case 0xEFC4AE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/debug/display_view_character_debug_overlay.asm (source_named).
bool execute_system_debug_display_view_character_debug_overlay_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/debug/display_view_character_debug_overlay.asm:3 BEGIN_C_FUNCTION
    case 0xEFC734: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/debug/display_view_character_debug_overlay.asm:7 END_STACK_VARS
    case 0xEFC736: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/debug/display_view_character_debug_overlay.asm:7 END_STACK_VARS
    case 0xEFC737: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/display_view_character_debug_overlay.asm:7 END_STACK_VARS
    case 0xEFC738: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/display_view_character_debug_overlay.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xEFC738.
    case 0xEFC73A: cpu.execute_instruction<0xFF>(0x40A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/debug/display_view_character_debug_overlay.asm:7 END_STACK_VARS
    case 0xEFC73B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:8 LDY #64
    case 0xEFC73C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000040, 2); else cpu.execute_instruction<0xA0>(0x000040, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:8 LDY #64
    // Overlapping static entry reached from 0xEFC73C.
    case 0xEFC73E: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:9 LDA GAME_STATE+game_state::leader_x_coord
    case 0xEFC73F: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:10 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xEFC742: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:11 STA @VIRTUAL04
    case 0xEFC746: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:12 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xEFC748: cpu.execute_instruction<0x20>(0x00C4AF, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:14 TAX
    case 0xEFC74B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:15 LDA #^__BSS_START__
    case 0xEFC74C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:15 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC74C.
    case 0xEFC74E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:16 STA @LOCAL00
    case 0xEFC74F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:17 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 25
    case 0xEFC751: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x007F24, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:17 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 4, 25
    // Overlapping static entry reached from 0xEFC751.
    case 0xEFC753: cpu.execute_instruction<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:18 STA @LOCAL01
    case 0xEFC754: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:19 TXY
    case 0xEFC756: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:20 LDX #8
    case 0xEFC757: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:20 LDX #8
    // Overlapping static entry reached from 0xEFC757.
    case 0xEFC759: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xEFC75A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:22 LDA #0
    case 0xEFC75C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:23 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFC75E: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:23 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC75C.
    case 0xEFC75F: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:24 LDY #64
    case 0xEFC762: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000040, 2); else cpu.execute_instruction<0xA0>(0x000040, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:24 LDY #64
    // Overlapping static entry reached from 0xEFC762.
    case 0xEFC764: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:25 LDA GAME_STATE+game_state::leader_y_coord
    case 0xEFC765: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:26 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xEFC768: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:27 STA @VIRTUAL02
    case 0xEFC76C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:28 JSR INTEGER_TO_HEX_DEBUG_TILES
    case 0xEFC76E: cpu.execute_instruction<0x20>(0x00C4AF, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:30 TAX
    case 0xEFC771: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:31 LDA #^__BSS_START__
    case 0xEFC772: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:31 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC772.
    case 0xEFC774: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:32 STA @LOCAL00
    case 0xEFC775: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:33 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 25
    case 0xEFC777: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002A, 2); else cpu.execute_instruction<0xA9>(0x007F2A, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:33 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 10, 25
    // Overlapping static entry reached from 0xEFC777.
    case 0xEFC779: cpu.execute_instruction<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:34 STA @LOCAL01
    case 0xEFC77A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:35 TXY
    case 0xEFC77C: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:36 LDX #8
    case 0xEFC77D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:36 LDX #8
    // Overlapping static entry reached from 0xEFC77D.
    case 0xEFC77F: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xEFC780: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:38 LDA #0
    case 0xEFC782: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:39 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFC784: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:39 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC782.
    case 0xEFC785: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:40 LDX @VIRTUAL02
    case 0xEFC788: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:41 LDA @VIRTUAL04
    case 0xEFC78A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:42 JSL UNKNOWN_C0263D
    case 0xEFC78C: cpu.execute_instruction<0x22>(0xC0264B, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:43 JSR INTEGER_TO_DECIMAL_DEBUG_TILES
    case 0xEFC790: cpu.execute_instruction<0x20>(0x00C50A, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:45 TAX
    case 0xEFC793: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:46 LDA #^__BSS_START__
    case 0xEFC794: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:46 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC794.
    case 0xEFC796: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:47 STA @LOCAL00
    case 0xEFC797: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:48 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 21, 25
    case 0xEFC799: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x007F35, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:48 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 21, 25
    // Overlapping static entry reached from 0xEFC799.
    case 0xEFC79B: cpu.execute_instruction<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:49 STA @LOCAL01
    case 0xEFC79C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:50 TXY
    case 0xEFC79E: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:51 LDX #8
    case 0xEFC79F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:51 LDX #8
    // Overlapping static entry reached from 0xEFC79F.
    case 0xEFC7A1: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xEFC7A2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:53 LDA #0
    case 0xEFC7A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:54 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFC7A6: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:54 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC7A4.
    case 0xEFC7A7: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:55 LDA ENEMY_SPAWN_TOO_MANY_ENEMIES_FAILURE_COUNT
    case 0xEFC7AA: cpu.execute_instruction<0xAD>(0x004DEE, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:56 JSR INTEGER_TO_DECIMAL_DEBUG_TILES
    case 0xEFC7AD: cpu.execute_instruction<0x20>(0x00C50A, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:58 TAX
    case 0xEFC7B0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:59 LDA #^__BSS_START__
    case 0xEFC7B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:59 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC7B1.
    case 0xEFC7B3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:60 STA @LOCAL00
    case 0xEFC7B4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:61 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 26, 25
    case 0xEFC7B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003A, 2); else cpu.execute_instruction<0xA9>(0x007F3A, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:61 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 26, 25
    // Overlapping static entry reached from 0xEFC7B6.
    case 0xEFC7B8: cpu.execute_instruction<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:62 STA @LOCAL01
    case 0xEFC7B9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:63 TXY
    case 0xEFC7BB: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:64 LDX #8
    case 0xEFC7BC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:64 LDX #8
    // Overlapping static entry reached from 0xEFC7BC.
    case 0xEFC7BE: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xEFC7BF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:66 LDA #0
    case 0xEFC7C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:67 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFC7C3: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:67 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC7C1.
    case 0xEFC7C4: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:69 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xEFC7C7: cpu.execute_instruction<0xAD>(0x0060E6, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:70 BEQ @UNKNOWN2
    case 0xEFC7CA: cpu.execute_instruction<0xF0>(0x000057, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:71 LDA #0
    case 0xEFC7CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:71 LDA #0
    // Overlapping static entry reached from 0xEFC7CC.
    case 0xEFC7CE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:72 STA @VIRTUAL02
    case 0xEFC7CF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:73 BRA @UNKNOWN1
    case 0xEFC7D1: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:75 LDA @VIRTUAL02
    case 0xEFC7D3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:76 ASL
    case 0xEFC7D5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:77 TAX
    case 0xEFC7D6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:78 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xEFC7D7: cpu.execute_instruction<0xBD>(0x00A18E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:79 JSR INTEGER_TO_DECIMAL_DEBUG_TILES
    case 0xEFC7DA: cpu.execute_instruction<0x20>(0x00C50A, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:81 TAX
    case 0xEFC7DD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:82 LDA #^__BSS_START__
    case 0xEFC7DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:82 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC7DE.
    case 0xEFC7E0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:83 STA @LOCAL00
    case 0xEFC7E1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:84 LDA @VIRTUAL02
    case 0xEFC7E3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:85 STA @VIRTUAL04
    case 0xEFC7E5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:86 ASL
    case 0xEFC7E7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:87 ASL
    case 0xEFC7E8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:88 ADC @VIRTUAL04
    case 0xEFC7E9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:89 CLC
    case 0xEFC7EB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:90 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 6, 26
    case 0xEFC7EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000046, 2); else cpu.execute_instruction<0x69>(0x007F46, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:90 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 6, 26
    // Overlapping static entry reached from 0xEFC7EC.
    case 0xEFC7EE: cpu.execute_instruction<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:91 STA @LOCAL01
    case 0xEFC7EF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:92 TXY
    case 0xEFC7F1: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:93 LDX #8
    case 0xEFC7F2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:93 LDX #8
    // Overlapping static entry reached from 0xEFC7F2.
    case 0xEFC7F4: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:94 SEP #PROC_FLAGS::ACCUM8
    case 0xEFC7F5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:95 LDA #0
    case 0xEFC7F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:96 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFC7F9: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:96 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC7F7.
    case 0xEFC7FA: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:98 INC @VIRTUAL02
    case 0xEFC7FD: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:100 LDA @VIRTUAL02
    case 0xEFC7FF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:101 CMP #5
    case 0xEFC801: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:101 CMP #5
    // Overlapping static entry reached from 0xEFC801.
    case 0xEFC803: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:102 BNE @UNKNOWN0
    case 0xEFC804: cpu.execute_instruction<0xD0>(0x0000CD, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:103 LDA CURRENT_BATTLE_GROUP
    case 0xEFC806: cpu.execute_instruction<0xAD>(0x004E12, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:104 JSR INTEGER_TO_DECIMAL_DEBUG_TILES
    case 0xEFC809: cpu.execute_instruction<0x20>(0x00C50A, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:106 TAX
    case 0xEFC80C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:107 LDA #^__BSS_START__
    case 0xEFC80D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:107 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xEFC80D.
    case 0xEFC80F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:108 STA @LOCAL00
    case 0xEFC810: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:109 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 1, 26
    case 0xEFC812: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000041, 2); else cpu.execute_instruction<0xA9>(0x007F41, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:109 LDA #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 1, 26
    // Overlapping static entry reached from 0xEFC812.
    case 0xEFC814: cpu.execute_instruction<0x7F>(0x9B1085, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:110 STA @LOCAL01
    case 0xEFC815: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:111 TXY
    case 0xEFC817: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:112 LDX #8
    case 0xEFC818: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:112 LDX #8
    // Overlapping static entry reached from 0xEFC818.
    case 0xEFC81A: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:113 SEP #PROC_FLAGS::ACCUM8
    case 0xEFC81B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:114 LDA #0
    case 0xEFC81D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:115 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xEFC81F: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/system/debug/display_view_character_debug_overlay.asm:115 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xEFC81D.
    case 0xEFC820: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/debug/display_view_character_debug_overlay.asm:117 END_C_FUNCTION
    case 0xEFC823: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/debug/display_view_character_debug_overlay.asm:117 END_C_FUNCTION
    case 0xEFC824: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/debug/handle_cursor_movement.asm (source_named).
bool execute_system_debug_handle_cursor_movement_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/debug/handle_cursor_movement.asm:3 BEGIN_C_FUNCTION
    case 0xEFCE9B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/debug/handle_cursor_movement.asm:6 END_STACK_VARS
    case 0xEFCE9D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/debug/handle_cursor_movement.asm:6 END_STACK_VARS
    case 0xEFCE9E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/handle_cursor_movement.asm:6 END_STACK_VARS
    case 0xEFCE9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/handle_cursor_movement.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xEFCE9F.
    case 0xEFCEA1: cpu.execute_instruction<0xFF>(0x69AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/debug/handle_cursor_movement.asm:6 END_STACK_VARS
    case 0xEFCEA2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:7 LDA PAD_HELD
    case 0xEFCEA3: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:7 LDA PAD_HELD
    // Overlapping static entry reached from 0xEFCEA1.
    case 0xEFCEA5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:8 STA @LOCAL00
    case 0xEFCEA6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:9 AND #PAD::UP
    case 0xEFCEA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:9 AND #PAD::UP
    // Overlapping static entry reached from 0xEFCEA8.
    case 0xEFCEAA: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:10 BEQ @UNKNOWN1
    case 0xEFCEAB: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:11 LDA DEBUG_MENU_CURSOR_POSITION
    case 0xEFCEAD: cpu.execute_instruction<0xAD>(0x00B706, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:12 BEQ @UNKNOWN0
    case 0xEFCEB0: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:13 DEC DEBUG_MENU_CURSOR_POSITION
    case 0xEFCEB2: cpu.execute_instruction<0xCE>(0x00B706, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:14 BRA @UNKNOWN1
    case 0xEFCEB5: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:16 LDA #6
    case 0xEFCEB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:16 LDA #6
    // Overlapping static entry reached from 0xEFCEB7.
    case 0xEFCEB9: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:17 STA DEBUG_MENU_CURSOR_POSITION
    case 0xEFCEBA: cpu.execute_instruction<0x8D>(0x00B706, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:19 LDA @LOCAL00
    case 0xEFCEBD: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:20 AND #PAD::DOWN
    case 0xEFCEBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:20 AND #PAD::DOWN
    // Overlapping static entry reached from 0xEFCEBF.
    case 0xEFCEC1: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:21 BEQ @UNKNOWN3
    case 0xEFCEC2: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:21 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xEFCEC1.
    case 0xEFCEC3: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:22 LDA DEBUG_MENU_CURSOR_POSITION
    case 0xEFCEC4: cpu.execute_instruction<0xAD>(0x00B706, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:22 LDA DEBUG_MENU_CURSOR_POSITION
    // Overlapping static entry reached from 0xEFCEC3.
    case 0xEFCEC5: cpu.execute_instruction<0x06>(0x0000B7, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:23 CMP #6
    case 0xEFCEC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:23 CMP #6
    // Overlapping static entry reached from 0xEFCEC7.
    case 0xEFCEC9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:24 BEQ @UNKNOWN2
    case 0xEFCECA: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:25 INC DEBUG_MENU_CURSOR_POSITION
    case 0xEFCECC: cpu.execute_instruction<0xEE>(0x00B706, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:26 BRA @UNKNOWN3
    case 0xEFCECF: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:28 STZ DEBUG_MENU_CURSOR_POSITION
    case 0xEFCED1: cpu.execute_instruction<0x9C>(0x00B706, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:30 LDA DEBUG_CURSOR_ENTITY
    case 0xEFCED4: cpu.execute_instruction<0xAD>(0x00B704, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:31 ASL
    case 0xEFCED7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:32 TAX
    case 0xEFCED8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:33 LDA DEBUG_MENU_CURSOR_POSITION
    case 0xEFCED9: cpu.execute_instruction<0xAD>(0x00B706, 3); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/system/debug/handle_cursor_movement.asm:34 OPTIMIZED_MULT @VIRTUAL04, 3 * 8
    case 0xEFCEDC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/system/debug/handle_cursor_movement.asm:34 OPTIMIZED_MULT @VIRTUAL04, 3 * 8
    case 0xEFCEDE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/system/debug/handle_cursor_movement.asm:34 OPTIMIZED_MULT @VIRTUAL04, 3 * 8
    case 0xEFCEDF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/system/debug/handle_cursor_movement.asm:34 OPTIMIZED_MULT @VIRTUAL04, 3 * 8
    case 0xEFCEE1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/system/debug/handle_cursor_movement.asm:34 OPTIMIZED_MULT @VIRTUAL04, 3 * 8
    case 0xEFCEE2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/system/debug/handle_cursor_movement.asm:34 OPTIMIZED_MULT @VIRTUAL04, 3 * 8
    case 0xEFCEE3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:35 CLC
    case 0xEFCEE4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:36 ADC #26 * 2
    case 0xEFCEE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000034, 2); else cpu.execute_instruction<0x69>(0x000034, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:36 ADC #26 * 2
    // Overlapping static entry reached from 0xEFCEE5.
    case 0xEFCEE7: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:37 STA ENTITY_ABS_Y_TABLE,X
    case 0xEFCEE8: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:38 LDA PAD_PRESS
    case 0xEFCEEB: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:39 AND #PAD::B_BUTTON | PAD::START_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    case 0xEFCEEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0090A0, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:39 AND #PAD::B_BUTTON | PAD::START_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xEFCEEE.
    case 0xEFCEF0: cpu.execute_instruction<0x90>(0x00008D, 2); return true;
    // src/system/debug/handle_cursor_movement.asm:40 STA DEBUG_MENU_BUTTONS_PRESSED
    case 0xEFCEF1: cpu.execute_instruction<0x8D>(0x00B708, 3); return true;
    // src/system/debug/handle_cursor_movement.asm:40 STA DEBUG_MENU_BUTTONS_PRESSED
    // Overlapping static entry reached from 0xEFCEF0.
    case 0xEFCEF2: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/debug/handle_cursor_movement.asm:40 STA DEBUG_MENU_BUTTONS_PRESSED
    // Overlapping static entry reached from 0xEFCEF2.
    case 0xEFCEF3: cpu.execute_instruction<0xB7>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/debug/handle_cursor_movement.asm:41 END_C_FUNCTION
    case 0xEFCEF4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/debug/handle_cursor_movement.asm:41 END_C_FUNCTION
    case 0xEFCEF5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/debug/integer_to_binary_debug_tiles.asm (source_named).
bool execute_system_debug_integer_to_binary_debug_tiles_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/debug/integer_to_binary_debug_tiles.asm:3 BEGIN_C_FUNCTION
    case 0xEFC583: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/debug/integer_to_binary_debug_tiles.asm:9 END_STACK_VARS
    case 0xEFC585: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/debug/integer_to_binary_debug_tiles.asm:9 END_STACK_VARS
    case 0xEFC586: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/debug/integer_to_binary_debug_tiles.asm:9 END_STACK_VARS
    case 0xEFC587: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/integer_to_binary_debug_tiles.asm:9 END_STACK_VARS
    case 0xEFC588: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/integer_to_binary_debug_tiles.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xEFC588.
    case 0xEFC58A: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/debug/integer_to_binary_debug_tiles.asm:9 END_STACK_VARS
    case 0xEFC58B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/debug/integer_to_binary_debug_tiles.asm:9 END_STACK_VARS
    case 0xEFC58C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:10 TAY
    case 0xEFC58D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:11 STY @LOCAL02
    case 0xEFC58E: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:12 LDA #16
    case 0xEFC590: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:12 LDA #16
    // Overlapping static entry reached from 0xEFC590.
    case 0xEFC592: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:13 JSL SBRK
    case 0xEFC593: cpu.execute_instruction<0x22>(0xC086D7, 4); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:14 STA @VIRTUAL02
    case 0xEFC597: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:15 LDX #0
    case 0xEFC599: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:15 LDX #0
    // Overlapping static entry reached from 0xEFC599.
    case 0xEFC59B: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:16 STX @LOCAL01
    case 0xEFC59C: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:17 BRA @UNKNOWN3
    case 0xEFC59E: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:19 LDY @LOCAL02
    case 0xEFC5A0: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:20 TYA
    case 0xEFC5A2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:21 AND #$0080
    case 0xEFC5A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:21 AND #$0080
    // Overlapping static entry reached from 0xEFC5A3.
    case 0xEFC5A5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:22 BEQ @UNKNOWN1
    case 0xEFC5A6: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:23 LDA #$2031 ;1 tile, priority
    case 0xEFC5A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000031, 2); else cpu.execute_instruction<0xA9>(0x002031, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:23 LDA #$2031 ;1 tile, priority
    // Overlapping static entry reached from 0xEFC5A8.
    case 0xEFC5AA: cpu.execute_instruction<0x20>(0x000E85, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:24 STA @LOCAL00
    case 0xEFC5AB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:25 BRA @UNKNOWN2
    case 0xEFC5AD: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:27 LDA #$2030 ;0 tile, priority
    case 0xEFC5AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x002030, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:27 LDA #$2030 ;0 tile, priority
    // Overlapping static entry reached from 0xEFC5AF.
    case 0xEFC5B1: cpu.execute_instruction<0x20>(0x000E85, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:28 STA @LOCAL00
    case 0xEFC5B2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:30 TXA
    case 0xEFC5B4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:31 ASL
    case 0xEFC5B5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:32 STA @VIRTUAL04
    case 0xEFC5B6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:33 LDA @VIRTUAL02
    case 0xEFC5B8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:34 CLC
    case 0xEFC5BA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:35 ADC @VIRTUAL04
    case 0xEFC5BB: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:36 TAX
    case 0xEFC5BD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:37 LDA @LOCAL00
    case 0xEFC5BE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:38 STA __BSS_START__,X
    case 0xEFC5C0: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:39 TYA
    case 0xEFC5C3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:40 ASL
    case 0xEFC5C4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:41 TAY
    case 0xEFC5C5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:42 STY @LOCAL02
    case 0xEFC5C6: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:43 LDX @LOCAL01
    case 0xEFC5C8: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:44 INX
    case 0xEFC5CA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:45 STX @LOCAL01
    case 0xEFC5CB: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:47 CPX #8
    case 0xEFC5CD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000008, 2); else cpu.execute_instruction<0xE0>(0x000008, 3); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:47 CPX #8
    // Overlapping static entry reached from 0xEFC5CD.
    case 0xEFC5CF: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:48 BCC @UNKNOWN0
    case 0xEFC5D0: cpu.execute_instruction<0x90>(0x0000CE, 2); return true;
    // src/system/debug/integer_to_binary_debug_tiles.asm:49 LDA @VIRTUAL02
    case 0xEFC5D2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/debug/integer_to_binary_debug_tiles.asm:50 END_C_FUNCTION
    case 0xEFC5D4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/debug/integer_to_binary_debug_tiles.asm:50 END_C_FUNCTION
    case 0xEFC5D5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/debug/integer_to_decimal_debug_tiles.asm (source_named).
bool execute_system_debug_integer_to_decimal_debug_tiles_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:3 BEGIN_C_FUNCTION
    case 0xEFC50A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:12 END_STACK_VARS
    case 0xEFC50C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:12 END_STACK_VARS
    case 0xEFC50D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:12 END_STACK_VARS
    case 0xEFC50E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:12 END_STACK_VARS
    case 0xEFC50F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xEFC50F.
    case 0xEFC511: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:12 END_STACK_VARS
    case 0xEFC512: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:12 END_STACK_VARS
    case 0xEFC513: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:13 STA @VIRTUAL04
    case 0xEFC514: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:13 STA @VIRTUAL04
    // Overlapping static entry reached from 0xEFC511.
    case 0xEFC515: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:14 STA @LOCAL04
    case 0xEFC516: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:14 STA @LOCAL04
    // Overlapping static entry reached from 0xEFC515.
    case 0xEFC517: cpu.execute_instruction<0x16>(0x0000A0, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:15 LDY #1
    case 0xEFC518: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:15 LDY #1
    // Overlapping static entry reached from 0xEFC517.
    case 0xEFC519: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:15 LDY #1
    // Overlapping static entry reached from 0xEFC518.
    case 0xEFC51A: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:16 STY @LOCAL03
    case 0xEFC51B: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:17 LDA #8
    case 0xEFC51D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:17 LDA #8
    // Overlapping static entry reached from 0xEFC51D.
    case 0xEFC51F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:18 JSL SBRK
    case 0xEFC520: cpu.execute_instruction<0x22>(0xC086D7, 4); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:19 STA @VIRTUAL02
    case 0xEFC524: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:20 STA @LOCAL02
    case 0xEFC526: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:21 LDX #3
    case 0xEFC528: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:21 LDX #3
    // Overlapping static entry reached from 0xEFC528.
    case 0xEFC52A: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:22 STX @LOCAL01
    case 0xEFC52B: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:23 BRA @UNKNOWN3
    case 0xEFC52D: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:25 LDY @LOCAL03
    case 0xEFC52F: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:26 LDA @LOCAL04
    case 0xEFC531: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:27 STA @VIRTUAL04
    case 0xEFC533: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:28 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xEFC535: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:29 LDY #10
    case 0xEFC539: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:29 LDY #10
    // Overlapping static entry reached from 0xEFC539.
    case 0xEFC53B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:30 JSL MODULUS16
    case 0xEFC53C: cpu.execute_instruction<0x22>(0xC09213, 4); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:31 CMP #10
    case 0xEFC540: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:31 CMP #10
    // Overlapping static entry reached from 0xEFC540.
    case 0xEFC542: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:32 BCC @UNKNOWN1
    case 0xEFC543: cpu.execute_instruction<0x90>(0x000008, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:33 CLC
    case 0xEFC545: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:34 ADC #7
    case 0xEFC546: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:34 ADC #7
    // Overlapping static entry reached from 0xEFC546.
    case 0xEFC548: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:35 STA @LOCAL00
    case 0xEFC549: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:36 BRA @UNKNOWN2
    case 0xEFC54B: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:38 STA @LOCAL00
    case 0xEFC54D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:40 TXA
    case 0xEFC54F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:41 ASL
    case 0xEFC550: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:42 PHA
    case 0xEFC551: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:43 LDA @LOCAL02
    case 0xEFC552: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:44 STA @VIRTUAL02
    case 0xEFC554: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:45 PLY
    case 0xEFC556: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:46 STY @VIRTUAL02
    case 0xEFC557: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:47 CLC
    case 0xEFC559: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:48 ADC @VIRTUAL02
    case 0xEFC55A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:49 TAX
    case 0xEFC55C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:50 LDA @LOCAL00
    case 0xEFC55D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:51 CLC
    case 0xEFC55F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:52 ADC #$2030 ;0 tile, priority
    case 0xEFC560: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x002030, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:52 ADC #$2030 ;0 tile, priority
    // Overlapping static entry reached from 0xEFC560.
    case 0xEFC562: cpu.execute_instruction<0x20>(0x00009D, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:53 STA __BSS_START__,X
    case 0xEFC563: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:53 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFC562.
    case 0xEFC565: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:54 LDY @LOCAL03
    case 0xEFC566: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:55 TYA
    case 0xEFC568: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:56 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xEFC569: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:56 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xEFC56B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:56 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xEFC56C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:56 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xEFC56D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:56 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xEFC56F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:57 TAY
    case 0xEFC570: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:58 STY @LOCAL03
    case 0xEFC571: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:59 LDX @LOCAL01
    case 0xEFC573: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:60 DEX
    case 0xEFC575: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:61 STX @LOCAL01
    case 0xEFC576: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:63 CPX #.LOWORD(-1)
    case 0xEFC578: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:63 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFC578.
    case 0xEFC57A: cpu.execute_instruction<0xFF>(0xA5B2D0, 4); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:64 BNE @UNKNOWN0
    case 0xEFC57B: cpu.execute_instruction<0xD0>(0x0000B2, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:65 LDA @LOCAL02
    case 0xEFC57D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:65 LDA @LOCAL02
    // Overlapping static entry reached from 0xEFC57A.
    case 0xEFC57E: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:66 STA @VIRTUAL02
    case 0xEFC57F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/debug/integer_to_decimal_debug_tiles.asm:66 STA @VIRTUAL02
    // Overlapping static entry reached from 0xEFC57E.
    case 0xEFC580: cpu.execute_instruction<0x02>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:67 END_C_FUNCTION
    case 0xEFC581: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/debug/integer_to_decimal_debug_tiles.asm:67 END_C_FUNCTION
    case 0xEFC582: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/debug/integer_to_hex_debug_tiles.asm (source_named).
bool execute_system_debug_integer_to_hex_debug_tiles_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/debug/integer_to_hex_debug_tiles.asm:3 BEGIN_C_FUNCTION
    case 0xEFC4AF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/debug/integer_to_hex_debug_tiles.asm:10 END_STACK_VARS
    case 0xEFC4B1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/debug/integer_to_hex_debug_tiles.asm:10 END_STACK_VARS
    case 0xEFC4B2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/debug/integer_to_hex_debug_tiles.asm:10 END_STACK_VARS
    case 0xEFC4B3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/integer_to_hex_debug_tiles.asm:10 END_STACK_VARS
    case 0xEFC4B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/integer_to_hex_debug_tiles.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xEFC4B4.
    case 0xEFC4B6: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/debug/integer_to_hex_debug_tiles.asm:10 END_STACK_VARS
    case 0xEFC4B7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/debug/integer_to_hex_debug_tiles.asm:10 END_STACK_VARS
    case 0xEFC4B8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:11 TAY
    case 0xEFC4B9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:12 STY @LOCAL02
    case 0xEFC4BA: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:13 LDA #8
    case 0xEFC4BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:13 LDA #8
    // Overlapping static entry reached from 0xEFC4BC.
    case 0xEFC4BE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:14 JSL SBRK
    case 0xEFC4BF: cpu.execute_instruction<0x22>(0xC086D7, 4); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:15 STA @VIRTUAL02
    case 0xEFC4C3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:16 LDX #3
    case 0xEFC4C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:16 LDX #3
    // Overlapping static entry reached from 0xEFC4C5.
    case 0xEFC4C7: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:17 STX @LOCAL01
    case 0xEFC4C8: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:18 BRA @UNKNOWN3
    case 0xEFC4CA: cpu.execute_instruction<0x80>(0x000035, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:20 LDY @LOCAL02
    case 0xEFC4CC: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:21 TYA
    case 0xEFC4CE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:22 AND #$000F
    case 0xEFC4CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:22 AND #$000F
    // Overlapping static entry reached from 0xEFC4CF.
    case 0xEFC4D1: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:23 CMP #10
    case 0xEFC4D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:23 CMP #10
    // Overlapping static entry reached from 0xEFC4D2.
    case 0xEFC4D4: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:24 BCC @UNKNOWN1
    case 0xEFC4D5: cpu.execute_instruction<0x90>(0x000008, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:25 CLC
    case 0xEFC4D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:26 ADC #7
    case 0xEFC4D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x000007, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:26 ADC #7
    // Overlapping static entry reached from 0xEFC4D8.
    case 0xEFC4DA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:27 STA @LOCAL00
    case 0xEFC4DB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:28 BRA @UNKNOWN2
    case 0xEFC4DD: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:30 STA @LOCAL00
    case 0xEFC4DF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:32 TXA
    case 0xEFC4E1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:33 ASL
    case 0xEFC4E2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:34 STA @VIRTUAL04
    case 0xEFC4E3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:35 LDA @VIRTUAL02
    case 0xEFC4E5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:36 CLC
    case 0xEFC4E7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:37 ADC @VIRTUAL04
    case 0xEFC4E8: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:38 TAX
    case 0xEFC4EA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:39 LDA @LOCAL00
    case 0xEFC4EB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:40 CLC
    case 0xEFC4ED: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:41 ADC #$2030 ;0 tile, priority
    case 0xEFC4EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x002030, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:41 ADC #$2030 ;0 tile, priority
    // Overlapping static entry reached from 0xEFC4EE.
    case 0xEFC4F0: cpu.execute_instruction<0x20>(0x00009D, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:42 STA __BSS_START__,X
    case 0xEFC4F1: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:42 STA __BSS_START__,X
    // Overlapping static entry reached from 0xEFC4F0.
    case 0xEFC4F3: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:43 TYA
    case 0xEFC4F4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:44 LSR
    case 0xEFC4F5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:45 LSR
    case 0xEFC4F6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:46 LSR
    case 0xEFC4F7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:47 LSR
    case 0xEFC4F8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:48 TAY
    case 0xEFC4F9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:49 STY @LOCAL02
    case 0xEFC4FA: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:50 LDX @LOCAL01
    case 0xEFC4FC: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:51 DEX
    case 0xEFC4FE: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:52 STX @LOCAL01
    case 0xEFC4FF: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:54 CPX #.LOWORD(-1)
    case 0xEFC501: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:54 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xEFC501.
    case 0xEFC503: cpu.execute_instruction<0xFF>(0xA5C6D0, 4); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:55 BNE @UNKNOWN0
    case 0xEFC504: cpu.execute_instruction<0xD0>(0x0000C6, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:56 LDA @VIRTUAL02
    case 0xEFC506: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/debug/integer_to_hex_debug_tiles.asm:56 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xEFC503.
    case 0xEFC507: cpu.execute_instruction<0x02>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/debug/integer_to_hex_debug_tiles.asm:57 END_C_FUNCTION
    case 0xEFC508: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/debug/integer_to_hex_debug_tiles.asm:57 END_C_FUNCTION
    case 0xEFC509: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/debug/load_debug_cursor_graphics.asm (source_named).
bool execute_system_debug_load_debug_cursor_graphics_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xEFCE79: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:6 END_STACK_VARS
    case 0xEFCE7B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:6 END_STACK_VARS
    case 0xEFCE7C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:6 END_STACK_VARS
    case 0xEFCE7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xEFCE7D.
    case 0xEFCE7F: cpu.execute_instruction<0xFF>(0xE2A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:6 END_STACK_VARS
    case 0xEFCE80: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    case 0xEFCE81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E2, 2); else cpu.execute_instruction<0xA9>(0x00D8E2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    // Overlapping static entry reached from 0xEFCE81.
    case 0xEFCE83: cpu.execute_instruction<0xD8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    case 0xEFCE84: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    case 0xEFCE86: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    // Overlapping static entry reached from 0xEFCE86.
    case 0xEFCE88: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    case 0xEFCE89: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    case 0xEFCE8B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x004000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    // Overlapping static entry reached from 0xEFCE8B.
    case 0xEFCE8D: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    case 0xEFCE8E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    // Overlapping static entry reached from 0xEFCE8E.
    case 0xEFCE90: cpu.execute_instruction<0x02>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    case 0xEFCE91: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    case 0xEFCE93: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    case 0xEFCE95: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    // Overlapping static entry reached from 0xEFCE93.
    case 0xEFCE96: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:7 COPY_TO_VRAM1 DEBUG_CURSOR_GRAPHICS, VRAM::OBJ, $200, 0
    // Overlapping static entry reached from 0xEFCE96.
    case 0xEFCE98: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:8 END_C_FUNCTION
    case 0xEFCE99: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/debug/load_debug_cursor_graphics.asm:8 END_C_FUNCTION
    case 0xEFCE9A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/debug/load_menu.asm (source_named).
bool execute_system_debug_load_menu_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/debug/load_menu.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEFCFAC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/system/debug/load_menu.asm:4 LDA #$0080
    case 0xEFCFAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/system/debug/load_menu.asm:4 LDA #$0080
    // Overlapping static entry reached from 0xEFCFAE.
    case 0xEFCFB0: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/debug/load_menu.asm:5 STA DEBUG_START_POSITION_X
    case 0xEFCFB1: cpu.execute_instruction<0x8D>(0x00B712, 3); return true;
    // src/system/debug/load_menu.asm:6 LDA #$0070
    case 0xEFCFB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000070, 2); else cpu.execute_instruction<0xA9>(0x000070, 3); return true;
    // src/system/debug/load_menu.asm:6 LDA #$0070
    // Overlapping static entry reached from 0xEFCFB4.
    case 0xEFCFB6: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/debug/load_menu.asm:7 STA DEBUG_START_POSITION_Y
    case 0xEFCFB7: cpu.execute_instruction<0x8D>(0x00B714, 3); return true;
    // src/system/debug/load_menu.asm:8 LDA #$0094
    case 0xEFCFBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000094, 2); else cpu.execute_instruction<0xA9>(0x000094, 3); return true;
    // src/system/debug/load_menu.asm:8 LDA #$0094
    // Overlapping static entry reached from 0xEFCFBA.
    case 0xEFCFBC: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/debug/load_menu.asm:9 STA DEBUG_VIEW_CHARACTER_SPRITE
    case 0xEFCFBD: cpu.execute_instruction<0x8D>(0x00B716, 3); return true;
    // src/system/debug/load_menu.asm:10 LDA #$FFFF
    case 0xEFCFC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/system/debug/load_menu.asm:10 LDA #$FFFF
    // Overlapping static entry reached from 0xEFCFC0.
    case 0xEFCFC2: cpu.execute_instruction<0xFF>(0xA05A8D, 4); return true;
    // src/system/debug/load_menu.asm:11 STA DAD_PHONE_TIMER
    case 0xEFCFC3: cpu.execute_instruction<0x8D>(0x00A05A, 3); return true;
    // src/system/debug/load_menu.asm:12 JSL UNKNOWN_C0927C
    case 0xEFCFC6: cpu.execute_instruction<0x22>(0xC0925E, 4); return true;
    // src/system/debug/load_menu.asm:13 JSR UNKNOWN_EFDA05
    case 0xEFCFCA: cpu.execute_instruction<0x20>(0x00C31F, 3); return true;
    // src/system/debug/load_menu.asm:14 JSR DEBUG_DISPLAY_MENU_OPTIONS
    case 0xEFCFCD: cpu.execute_instruction<0x20>(0x00C43B, 3); return true;
    // src/system/debug/load_menu.asm:15 LDX #$0001
    case 0xEFCFD0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/system/debug/load_menu.asm:15 LDX #$0001
    // Overlapping static entry reached from 0xEFCFD0.
    case 0xEFCFD2: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/system/debug/load_menu.asm:16 LDA #$0004
    case 0xEFCFD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/system/debug/load_menu.asm:16 LDA #$0004
    // Overlapping static entry reached from 0xEFCFD3.
    case 0xEFCFD5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/load_menu.asm:17 JSL FADE_IN
    case 0xEFCFD6: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/system/debug/load_menu.asm:19 JSL OAM_CLEAR
    case 0xEFCFDA: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/system/debug/load_menu.asm:20 JSR DEBUG_HANDLE_CURSOR_MOVEMENT
    case 0xEFCFDE: cpu.execute_instruction<0x20>(0x00CE9B, 3); return true;
    // src/system/debug/load_menu.asm:21 JSR DEBUG_PROCESS_COMMAND_SELECTION
    case 0xEFCFE1: cpu.execute_instruction<0x20>(0x00CEF6, 3); return true;
    // src/system/debug/load_menu.asm:22 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xEFCFE4: cpu.execute_instruction<0x22>(0xC09445, 4); return true;
    // src/system/debug/load_menu.asm:23 JSL UPDATE_SCREEN
    case 0xEFCFE8: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/system/debug/load_menu.asm:24 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xEFCFEC: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/system/debug/load_menu.asm:25 BRA @UNKNOWN0
    case 0xEFCFF0: cpu.execute_instruction<0x80>(0x0000E8, 2); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/debug/process_command_selection.asm (source_named).
bool execute_system_debug_process_command_selection_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/debug/process_command_selection.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xEFCEF6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/system/debug/process_command_selection.asm:4 LDA DEBUG_MENU_BUTTONS_PRESSED
    case 0xEFCEF8: cpu.execute_instruction<0xAD>(0x00B708, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/process_command_selection.asm:5 BEQL @UNKNOWN9
    case 0xEFCEFB: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/process_command_selection.asm:5 BEQL @UNKNOWN9
    case 0xEFCEFD: cpu.execute_instruction<0x4C>(0x00CFAB, 3); return true;
    // src/system/debug/process_command_selection.asm:6 LDA DEBUG_MENU_CURSOR_POSITION
    case 0xEFCF00: cpu.execute_instruction<0xAD>(0x00B706, 3); return true;
    // src/system/debug/process_command_selection.asm:7 BEQ @UNKNOWN1
    case 0xEFCF03: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/system/debug/process_command_selection.asm:8 CMP #$0001
    case 0xEFCF05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/system/debug/process_command_selection.asm:8 CMP #$0001
    // Overlapping static entry reached from 0xEFCF05.
    case 0xEFCF07: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/debug/process_command_selection.asm:9 BEQ @UNKNOWN2
    case 0xEFCF08: cpu.execute_instruction<0xF0>(0x00002E, 2); return true;
    // src/system/debug/process_command_selection.asm:10 CMP #$0002
    case 0xEFCF0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/system/debug/process_command_selection.asm:10 CMP #$0002
    // Overlapping static entry reached from 0xEFCF0A.
    case 0xEFCF0C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/debug/process_command_selection.asm:11 BEQ @UNKNOWN3
    case 0xEFCF0D: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/system/debug/process_command_selection.asm:12 CMP #$0003
    case 0xEFCF0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/system/debug/process_command_selection.asm:12 CMP #$0003
    // Overlapping static entry reached from 0xEFCF0F.
    case 0xEFCF11: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/debug/process_command_selection.asm:13 BEQ @UNKNOWN4
    case 0xEFCF12: cpu.execute_instruction<0xF0>(0x00004C, 2); return true;
    // src/system/debug/process_command_selection.asm:14 CMP #$0004
    case 0xEFCF14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/system/debug/process_command_selection.asm:14 CMP #$0004
    // Overlapping static entry reached from 0xEFCF14.
    case 0xEFCF16: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/debug/process_command_selection.asm:15 BEQ @UNKNOWN5
    case 0xEFCF17: cpu.execute_instruction<0xF0>(0x000052, 2); return true;
    // src/system/debug/process_command_selection.asm:16 CMP #$0005
    case 0xEFCF19: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/system/debug/process_command_selection.asm:16 CMP #$0005
    // Overlapping static entry reached from 0xEFCF19.
    case 0xEFCF1B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/debug/process_command_selection.asm:17 BEQ @UNKNOWN6
    case 0xEFCF1C: cpu.execute_instruction<0xF0>(0x000059, 2); return true;
    // src/system/debug/process_command_selection.asm:18 CMP #$0006
    case 0xEFCF1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/system/debug/process_command_selection.asm:18 CMP #$0006
    // Overlapping static entry reached from 0xEFCF1E.
    case 0xEFCF20: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/debug/process_command_selection.asm:19 BEQ @UNKNOWN7
    case 0xEFCF21: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // src/system/debug/process_command_selection.asm:20 BRA @UNKNOWN8
    case 0xEFCF23: cpu.execute_instruction<0x80>(0x00006A, 2); return true;
    // src/system/debug/process_command_selection.asm:22 LDY #$0000
    case 0xEFCF25: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/debug/process_command_selection.asm:22 LDY #$0000
    // Overlapping static entry reached from 0xEFCF25.
    case 0xEFCF27: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/system/debug/process_command_selection.asm:23 LDX #$0001
    case 0xEFCF28: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/system/debug/process_command_selection.asm:23 LDX #$0001
    // Overlapping static entry reached from 0xEFCF28.
    case 0xEFCF2A: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/system/debug/process_command_selection.asm:24 LDA #$0004
    case 0xEFCF2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/system/debug/process_command_selection.asm:24 LDA #$0004
    // Overlapping static entry reached from 0xEFCF2B.
    case 0xEFCF2D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/process_command_selection.asm:25 JSL FADE_OUT_WITH_MOSAIC
    case 0xEFCF2E: cpu.execute_instruction<0x22>(0xC0880A, 4); return true;
    // src/system/debug/process_command_selection.asm:26 JSL MAIN_LOOP
    case 0xEFCF32: cpu.execute_instruction<0x22>(0xC0B7BE, 4); return true;
    // src/system/debug/process_command_selection.asm:27 BRA @UNKNOWN8
    case 0xEFCF36: cpu.execute_instruction<0x80>(0x000057, 2); return true;
    // src/system/debug/process_command_selection.asm:29 LDA #$0001
    case 0xEFCF38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/debug/process_command_selection.asm:29 LDA #$0001
    // Overlapping static entry reached from 0xEFCF38.
    case 0xEFCF3A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:30 STA DEBUG_MODE_NUMBER
    case 0xEFCF3B: cpu.execute_instruction<0x8D>(0x00B70A, 3); return true;
    // src/system/debug/process_command_selection.asm:31 LDA #$FFFF
    case 0xEFCF3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/system/debug/process_command_selection.asm:31 LDA #$FFFF
    // Overlapping static entry reached from 0xEFCF3E.
    case 0xEFCF40: cpu.execute_instruction<0xFF>(0x4DDE8D, 4); return true;
    // src/system/debug/process_command_selection.asm:32 STA NPC_SPAWNS_ENABLED
    case 0xEFCF41: cpu.execute_instruction<0x8D>(0x004DDE, 3); return true;
    // src/system/debug/process_command_selection.asm:33 JSR UNKNOWN_EFE175
    case 0xEFCF44: cpu.execute_instruction<0x20>(0x00CA8F, 3); return true;
    // src/system/debug/process_command_selection.asm:34 BRA @UNKNOWN8
    case 0xEFCF47: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/system/debug/process_command_selection.asm:36 LDA #$0002
    case 0xEFCF49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/system/debug/process_command_selection.asm:36 LDA #$0002
    // Overlapping static entry reached from 0xEFCF49.
    case 0xEFCF4B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:37 STA DEBUG_MODE_NUMBER
    case 0xEFCF4C: cpu.execute_instruction<0x8D>(0x00B70A, 3); return true;
    // src/system/debug/process_command_selection.asm:38 LDA #$000A
    case 0xEFCF4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/system/debug/process_command_selection.asm:38 LDA #$000A
    // Overlapping static entry reached from 0xEFCF4F.
    case 0xEFCF51: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:39 STA OVERWORLD_ENEMY_MAXIMUM
    case 0xEFCF52: cpu.execute_instruction<0x8D>(0x004DE4, 3); return true;
    // src/system/debug/process_command_selection.asm:40 LDA #$FFFF
    case 0xEFCF55: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/system/debug/process_command_selection.asm:40 LDA #$FFFF
    // Overlapping static entry reached from 0xEFCF55.
    case 0xEFCF57: cpu.execute_instruction<0xFF>(0x4DE08D, 4); return true;
    // src/system/debug/process_command_selection.asm:41 STA ENEMY_SPAWNS_ENABLED
    case 0xEFCF58: cpu.execute_instruction<0x8D>(0x004DE0, 3); return true;
    // src/system/debug/process_command_selection.asm:42 JSR UNKNOWN_EFE175
    case 0xEFCF5B: cpu.execute_instruction<0x20>(0x00CA8F, 3); return true;
    // src/system/debug/process_command_selection.asm:43 BRA @UNKNOWN8
    case 0xEFCF5E: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/system/debug/process_command_selection.asm:45 LDA #$0003
    case 0xEFCF60: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/system/debug/process_command_selection.asm:45 LDA #$0003
    // Overlapping static entry reached from 0xEFCF60.
    case 0xEFCF62: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:46 STA DEBUG_MODE_NUMBER
    case 0xEFCF63: cpu.execute_instruction<0x8D>(0x00B70A, 3); return true;
    // src/system/debug/process_command_selection.asm:47 JSR UNKNOWN_EFE175
    case 0xEFCF66: cpu.execute_instruction<0x20>(0x00CA8F, 3); return true;
    // src/system/debug/process_command_selection.asm:48 BRA @UNKNOWN8
    case 0xEFCF69: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/system/debug/process_command_selection.asm:50 LDA #$0004
    case 0xEFCF6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/system/debug/process_command_selection.asm:50 LDA #$0004
    // Overlapping static entry reached from 0xEFCF6B.
    case 0xEFCF6D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:51 STA DEBUG_MODE_NUMBER
    case 0xEFCF6E: cpu.execute_instruction<0x8D>(0x00B70A, 3); return true;
    // src/system/debug/process_command_selection.asm:52 JSL BATTLE_ROUTINE
    case 0xEFCF71: cpu.execute_instruction<0x22>(0xC246EE, 4); return true;
    // src/system/debug/process_command_selection.asm:53 BRA @UNKNOWN8
    case 0xEFCF75: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/system/debug/process_command_selection.asm:55 LDA #$0005
    case 0xEFCF77: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/system/debug/process_command_selection.asm:55 LDA #$0005
    // Overlapping static entry reached from 0xEFCF77.
    case 0xEFCF79: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:56 STA DEBUG_MODE_NUMBER
    case 0xEFCF7A: cpu.execute_instruction<0x8D>(0x00B70A, 3); return true;
    // src/system/debug/process_command_selection.asm:57 JSR UNKNOWN_EFE175
    case 0xEFCF7D: cpu.execute_instruction<0x20>(0x00CA8F, 3); return true;
    // src/system/debug/process_command_selection.asm:58 BRA @UNKNOWN8
    case 0xEFCF80: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/system/debug/process_command_selection.asm:60 LDA #$0006
    case 0xEFCF82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/system/debug/process_command_selection.asm:60 LDA #$0006
    // Overlapping static entry reached from 0xEFCF82.
    case 0xEFCF84: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/debug/process_command_selection.asm:61 STA DEBUG_MODE_NUMBER
    case 0xEFCF85: cpu.execute_instruction<0x8D>(0x00B70A, 3); return true;
    // src/system/debug/process_command_selection.asm:62 LDA DEBUG_CURSOR_ENTITY
    case 0xEFCF88: cpu.execute_instruction<0xAD>(0x00B704, 3); return true;
    // src/system/debug/process_command_selection.asm:63 JSL UNKNOWN_EFD6D4
    case 0xEFCF8B: cpu.execute_instruction<0x22>(0xEFBFDF, 4); return true;
    // src/system/debug/process_command_selection.asm:65 JSL UNKNOWN_EFEB2A
    case 0xEFCF8F: cpu.execute_instruction<0x22>(0xEFD455, 4); return true;
    // src/system/debug/process_command_selection.asm:66 STZ DEBUG_MENU_BUTTONS_PRESSED
    case 0xEFCF93: cpu.execute_instruction<0x9C>(0x00B708, 3); return true;
    // src/system/debug/process_command_selection.asm:67 STZ DEBUG_MODE_NUMBER
    case 0xEFCF96: cpu.execute_instruction<0x9C>(0x00B70A, 3); return true;
    // src/system/debug/process_command_selection.asm:68 JSL UNKNOWN_C0927C
    case 0xEFCF99: cpu.execute_instruction<0x22>(0xC0925E, 4); return true;
    // src/system/debug/process_command_selection.asm:69 JSR UNKNOWN_EFDA05
    case 0xEFCF9D: cpu.execute_instruction<0x20>(0x00C31F, 3); return true;
    // src/system/debug/process_command_selection.asm:70 JSR DEBUG_DISPLAY_MENU_OPTIONS
    case 0xEFCFA0: cpu.execute_instruction<0x20>(0x00C43B, 3); return true;
    // src/system/debug/process_command_selection.asm:71 LDX #$0001
    case 0xEFCFA3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/system/debug/process_command_selection.asm:71 LDX #$0001
    // Overlapping static entry reached from 0xEFCFA3.
    case 0xEFCFA5: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/system/debug/process_command_selection.asm:72 TXA
    case 0xEFCFA6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/debug/process_command_selection.asm:73 JSL FADE_IN
    case 0xEFCFA7: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/system/debug/process_command_selection.asm:75 RTS
    case 0xEFCFAB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/debug/y_button_menu.asm (source_named).
bool execute_system_debug_y_button_menu_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/debug/y_button_menu.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1357F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/debug/y_button_menu.asm:12 END_STACK_VARS
    case 0xC13581: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/debug/y_button_menu.asm:12 END_STACK_VARS
    case 0xC13582: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/y_button_menu.asm:12 END_STACK_VARS
    case 0xC13583: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/debug/y_button_menu.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC13583.
    case 0xC13585: cpu.execute_instruction<0xFF>(0x1B225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/debug/y_button_menu.asm:12 END_STACK_VARS
    case 0xC13586: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/debug/y_button_menu.asm:18 JSL UNKNOWN_C0943C
    case 0xC13587: cpu.execute_instruction<0x22>(0xC0941B, 4); return true;
    // src/system/debug/y_button_menu.asm:18 JSL UNKNOWN_C0943C
    // Overlapping static entry reached from 0xC13585.
    case 0xC13589: cpu.execute_instruction<0x94>(0x0000C0, 2); return true;
    // src/system/debug/y_button_menu.asm:19 LDA #SFX::CURSOR1
    case 0xC1358B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:19 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC1358B.
    case 0xC1358D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/y_button_menu.asm:20 JSL PLAY_SOUND
    case 0xC1358E: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/system/debug/y_button_menu.asm:21 JSR SHOW_HPPP_WINDOWS
    case 0xC13592: cpu.execute_instruction<0x20>(0x000E5A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/system/debug/y_button_menu.asm:23 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13595: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/system/debug/y_button_menu.asm:23 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC13595.
    case 0xC13597: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/system/debug/y_button_menu.asm:23 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13598: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/system/debug/y_button_menu.asm:23 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1359A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/system/debug/y_button_menu.asm:23 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1359A.
    case 0xC1359C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/system/debug/y_button_menu.asm:23 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1359D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/system/debug/y_button_menu.asm:27 CREATE_WINDOW_NEAR #WINDOW::PHONE_MENU
    case 0xC1359F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/system/debug/y_button_menu.asm:27 CREATE_WINDOW_NEAR #WINDOW::PHONE_MENU
    // Overlapping static entry reached from 0xC1359F.
    case 0xC135A1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/system/debug/y_button_menu.asm:27 CREATE_WINDOW_NEAR #WINDOW::PHONE_MENU
    case 0xC135A2: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/system/debug/y_button_menu.asm:28 LDA #0
    case 0xC135A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/debug/y_button_menu.asm:28 LDA #0
    // Overlapping static entry reached from 0xC135A5.
    case 0xC135A7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/debug/y_button_menu.asm:29 STA @LOCAL03
    case 0xC135A8: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/system/debug/y_button_menu.asm:30 BRA @UNKNOWN2
    case 0xC135AA: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/debug/y_button_menu.asm:33 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC135AC: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/debug/y_button_menu.asm:33 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC135AE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/debug/y_button_menu.asm:33 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC135B0: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/debug/y_button_menu.asm:33 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC135B2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/system/debug/y_button_menu.asm:38 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC135B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/system/debug/y_button_menu.asm:38 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC135B4.
    case 0xC135B6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/system/debug/y_button_menu.asm:38 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC135B7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/system/debug/y_button_menu.asm:38 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC135B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/system/debug/y_button_menu.asm:38 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC135B9.
    case 0xC135BB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/system/debug/y_button_menu.asm:38 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC135BC: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/debug/y_button_menu.asm:39 JSR UNKNOWN_C113D1
    case 0xC135BE: cpu.execute_instruction<0x20>(0x001A00, 3); return true;
    // src/system/debug/y_button_menu.asm:40 LDA @LOCAL03
    case 0xC135C1: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/system/debug/y_button_menu.asm:41 INC
    case 0xC135C3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/debug/y_button_menu.asm:42 STA @LOCAL03
    case 0xC135C4: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:44 LOADPTR DEBUG_MENU_TEXT, @VIRTUAL0A
    case 0xC135C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000058, 2); else cpu.execute_instruction<0xA9>(0x00E458, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:44 LOADPTR DEBUG_MENU_TEXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC135C6.
    case 0xC135C8: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/y_button_menu.asm:44 LOADPTR DEBUG_MENU_TEXT, @VIRTUAL0A
    case 0xC135C9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/y_button_menu.asm:44 LOADPTR DEBUG_MENU_TEXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC135C8.
    case 0xC135CA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:44 LOADPTR DEBUG_MENU_TEXT, @VIRTUAL0A
    case 0xC135CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:44 LOADPTR DEBUG_MENU_TEXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC135CB.
    case 0xC135CD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/y_button_menu.asm:44 LOADPTR DEBUG_MENU_TEXT, @VIRTUAL0A
    case 0xC135CE: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/system/debug/y_button_menu.asm:45 LDA @LOCAL03
    case 0xC135D0: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:549 STA scratch
    // Macro caller: src/system/debug/y_button_menu.asm:46 OPTIMIZED_MULT @VIRTUAL04, @DEBUGSTRINGLENGTH
    case 0xC135D2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:550 ASL
    // Macro caller: src/system/debug/y_button_menu.asm:46 OPTIMIZED_MULT @VIRTUAL04, @DEBUGSTRINGLENGTH
    case 0xC135D4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:551 ASL
    // Macro caller: src/system/debug/y_button_menu.asm:46 OPTIMIZED_MULT @VIRTUAL04, @DEBUGSTRINGLENGTH
    case 0xC135D5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:552 ASL
    // Macro caller: src/system/debug/y_button_menu.asm:46 OPTIMIZED_MULT @VIRTUAL04, @DEBUGSTRINGLENGTH
    case 0xC135D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:553 ADC scratch
    // Macro caller: src/system/debug/y_button_menu.asm:46 OPTIMIZED_MULT @VIRTUAL04, @DEBUGSTRINGLENGTH
    case 0xC135D7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/system/debug/y_button_menu.asm:47 CLC
    case 0xC135D9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/debug/y_button_menu.asm:48 ADC @VIRTUAL0A
    case 0xC135DA: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/system/debug/y_button_menu.asm:49 STA @VIRTUAL0A
    case 0xC135DC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/system/debug/y_button_menu.asm:50 LDA [@VIRTUAL0A]
    case 0xC135DE: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/system/debug/y_button_menu.asm:51 AND #$00FF
    case 0xC135E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/debug/y_button_menu.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xC135E0.
    case 0xC135E2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/system/debug/y_button_menu.asm:52 BNE @UNKNOWN1
    case 0xC135E3: cpu.execute_instruction<0xD0>(0x0000C7, 2); return true;
    // src/system/debug/y_button_menu.asm:53 LDY #0
    case 0xC135E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/debug/y_button_menu.asm:53 LDY #0
    // Overlapping static entry reached from 0xC135E5.
    case 0xC135E7: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/system/debug/y_button_menu.asm:54 TYX
    case 0xC135E8: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/system/debug/y_button_menu.asm:55 LDA #1
    case 0xC135E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:55 LDA #1
    // Overlapping static entry reached from 0xC135E9.
    case 0xC135EB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/system/debug/y_button_menu.asm:56 JSR UNKNOWN_C1180D
    case 0xC135EC: cpu.execute_instruction<0x20>(0x001FA6, 3); return true;
    // src/system/debug/y_button_menu.asm:57 LDA #1
    case 0xC135EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:57 LDA #1
    // Overlapping static entry reached from 0xC135EF.
    case 0xC135F1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/system/debug/y_button_menu.asm:58 JSR SELECTION_MENU
    case 0xC135F2: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // src/system/debug/y_button_menu.asm:59 CMP #1
    case 0xC135F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:59 CMP #1
    // Overlapping static entry reached from 0xC135F5.
    case 0xC135F7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:60 BEQL @UNKNOWN26
    case 0xC135F8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:60 BEQL @UNKNOWN26
    case 0xC135FA: cpu.execute_instruction<0x4C>(0x0036B0, 3); return true;
    // src/system/debug/y_button_menu.asm:61 CMP #2
    case 0xC135FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/system/debug/y_button_menu.asm:61 CMP #2
    // Overlapping static entry reached from 0xC135FD.
    case 0xC135FF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:62 BEQL @UNKNOWN27
    case 0xC13600: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:62 BEQL @UNKNOWN27
    case 0xC13602: cpu.execute_instruction<0x4C>(0x0036B7, 3); return true;
    // src/system/debug/y_button_menu.asm:63 CMP #3
    case 0xC13605: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/system/debug/y_button_menu.asm:63 CMP #3
    // Overlapping static entry reached from 0xC13605.
    case 0xC13607: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:64 BEQL @UNKNOWN28
    case 0xC13608: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:64 BEQL @UNKNOWN28
    case 0xC1360A: cpu.execute_instruction<0x4C>(0x0036BE, 3); return true;
    // src/system/debug/y_button_menu.asm:65 CMP #4
    case 0xC1360D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/system/debug/y_button_menu.asm:65 CMP #4
    // Overlapping static entry reached from 0xC1360D.
    case 0xC1360F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:66 BEQL @UNKNOWN29
    case 0xC13610: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:66 BEQL @UNKNOWN29
    case 0xC13612: cpu.execute_instruction<0x4C>(0x0036D1, 3); return true;
    // src/system/debug/y_button_menu.asm:67 CMP #5
    case 0xC13615: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/system/debug/y_button_menu.asm:67 CMP #5
    // Overlapping static entry reached from 0xC13615.
    case 0xC13617: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:68 BEQL @UNKNOWN30
    case 0xC13618: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:68 BEQL @UNKNOWN30
    case 0xC1361A: cpu.execute_instruction<0x4C>(0x0036DE, 3); return true;
    // src/system/debug/y_button_menu.asm:69 CMP #6
    case 0xC1361D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/system/debug/y_button_menu.asm:69 CMP #6
    // Overlapping static entry reached from 0xC1361D.
    case 0xC1361F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:70 BEQL @UNKNOWN31
    case 0xC13620: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:70 BEQL @UNKNOWN31
    case 0xC13622: cpu.execute_instruction<0x4C>(0x0036EB, 3); return true;
    // src/system/debug/y_button_menu.asm:71 CMP #7
    case 0xC13625: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/system/debug/y_button_menu.asm:71 CMP #7
    // Overlapping static entry reached from 0xC13625.
    case 0xC13627: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:72 BEQL @UNKNOWN32
    case 0xC13628: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:72 BEQL @UNKNOWN32
    case 0xC1362A: cpu.execute_instruction<0x4C>(0x0036F8, 3); return true;
    // src/system/debug/y_button_menu.asm:73 CMP #8
    case 0xC1362D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/system/debug/y_button_menu.asm:73 CMP #8
    // Overlapping static entry reached from 0xC1362D.
    case 0xC1362F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:74 BEQL @UNKNOWN33
    case 0xC13630: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:74 BEQL @UNKNOWN33
    case 0xC13632: cpu.execute_instruction<0x4C>(0x003705, 3); return true;
    // src/system/debug/y_button_menu.asm:75 CMP #9
    case 0xC13635: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/system/debug/y_button_menu.asm:75 CMP #9
    // Overlapping static entry reached from 0xC13635.
    case 0xC13637: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:76 BEQL @UNKNOWN36
    case 0xC13638: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:76 BEQL @UNKNOWN36
    case 0xC1363A: cpu.execute_instruction<0x4C>(0x003764, 3); return true;
    // src/system/debug/y_button_menu.asm:77 CMP #10
    case 0xC1363D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/system/debug/y_button_menu.asm:77 CMP #10
    // Overlapping static entry reached from 0xC1363D.
    case 0xC1363F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:78 BEQL @UNKNOWN37
    case 0xC13640: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:78 BEQL @UNKNOWN37
    case 0xC13642: cpu.execute_instruction<0x4C>(0x003772, 3); return true;
    // src/system/debug/y_button_menu.asm:79 CMP #11
    case 0xC13645: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000B, 2); else cpu.execute_instruction<0xC9>(0x00000B, 3); return true;
    // src/system/debug/y_button_menu.asm:79 CMP #11
    // Overlapping static entry reached from 0xC13645.
    case 0xC13647: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:80 BEQL @UNKNOWN38
    case 0xC13648: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:80 BEQL @UNKNOWN38
    case 0xC1364A: cpu.execute_instruction<0x4C>(0x00377C, 3); return true;
    // src/system/debug/y_button_menu.asm:81 CMP #12
    case 0xC1364D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/system/debug/y_button_menu.asm:81 CMP #12
    // Overlapping static entry reached from 0xC1364D.
    case 0xC1364F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:82 BEQL @UNKNOWN39
    case 0xC13650: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:82 BEQL @UNKNOWN39
    case 0xC13652: cpu.execute_instruction<0x4C>(0x003786, 3); return true;
    // src/system/debug/y_button_menu.asm:83 CMP #13
    case 0xC13655: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000D, 2); else cpu.execute_instruction<0xC9>(0x00000D, 3); return true;
    // src/system/debug/y_button_menu.asm:83 CMP #13
    // Overlapping static entry reached from 0xC13655.
    case 0xC13657: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:84 BEQL @UNKNOWN40
    case 0xC13658: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:84 BEQL @UNKNOWN40
    case 0xC1365A: cpu.execute_instruction<0x4C>(0x003797, 3); return true;
    // src/system/debug/y_button_menu.asm:85 CMP #14
    case 0xC1365D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000E, 2); else cpu.execute_instruction<0xC9>(0x00000E, 3); return true;
    // src/system/debug/y_button_menu.asm:85 CMP #14
    // Overlapping static entry reached from 0xC1365D.
    case 0xC1365F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:86 BEQL @UNKNOWN41
    case 0xC13660: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:86 BEQL @UNKNOWN41
    case 0xC13662: cpu.execute_instruction<0x4C>(0x0037A1, 3); return true;
    // src/system/debug/y_button_menu.asm:87 CMP #15
    case 0xC13665: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000F, 2); else cpu.execute_instruction<0xC9>(0x00000F, 3); return true;
    // src/system/debug/y_button_menu.asm:87 CMP #15
    // Overlapping static entry reached from 0xC13665.
    case 0xC13667: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:88 BEQL @UNKNOWN42
    case 0xC13668: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:88 BEQL @UNKNOWN42
    case 0xC1366A: cpu.execute_instruction<0x4C>(0x0037AA, 3); return true;
    // src/system/debug/y_button_menu.asm:89 CMP #16
    case 0xC1366D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/system/debug/y_button_menu.asm:89 CMP #16
    // Overlapping static entry reached from 0xC1366D.
    case 0xC1366F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:90 BEQL @UNKNOWN43
    case 0xC13670: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:90 BEQL @UNKNOWN43
    case 0xC13672: cpu.execute_instruction<0x4C>(0x0037B0, 3); return true;
    // src/system/debug/y_button_menu.asm:91 CMP #17
    case 0xC13675: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000011, 2); else cpu.execute_instruction<0xC9>(0x000011, 3); return true;
    // src/system/debug/y_button_menu.asm:91 CMP #17
    // Overlapping static entry reached from 0xC13675.
    case 0xC13677: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:92 BEQL @UNKNOWN44
    case 0xC13678: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:92 BEQL @UNKNOWN44
    case 0xC1367A: cpu.execute_instruction<0x4C>(0x0037B6, 3); return true;
    // src/system/debug/y_button_menu.asm:93 CMP #18
    case 0xC1367D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000012, 2); else cpu.execute_instruction<0xC9>(0x000012, 3); return true;
    // src/system/debug/y_button_menu.asm:93 CMP #18
    // Overlapping static entry reached from 0xC1367D.
    case 0xC1367F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:94 BEQL @UNKNOWN45
    case 0xC13680: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:94 BEQL @UNKNOWN45
    case 0xC13682: cpu.execute_instruction<0x4C>(0x0037C2, 3); return true;
    // src/system/debug/y_button_menu.asm:95 CMP #19
    case 0xC13685: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000013, 2); else cpu.execute_instruction<0xC9>(0x000013, 3); return true;
    // src/system/debug/y_button_menu.asm:95 CMP #19
    // Overlapping static entry reached from 0xC13685.
    case 0xC13687: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:96 BEQL @UNKNOWN46
    case 0xC13688: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:96 BEQL @UNKNOWN46
    case 0xC1368A: cpu.execute_instruction<0x4C>(0x0037CB, 3); return true;
    // src/system/debug/y_button_menu.asm:97 CMP #20
    case 0xC1368D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000014, 2); else cpu.execute_instruction<0xC9>(0x000014, 3); return true;
    // src/system/debug/y_button_menu.asm:97 CMP #20
    // Overlapping static entry reached from 0xC1368D.
    case 0xC1368F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:98 BEQL @UNKNOWN47
    case 0xC13690: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:98 BEQL @UNKNOWN47
    case 0xC13692: cpu.execute_instruction<0x4C>(0x0037D7, 3); return true;
    // src/system/debug/y_button_menu.asm:99 CMP #21
    case 0xC13695: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000015, 2); else cpu.execute_instruction<0xC9>(0x000015, 3); return true;
    // src/system/debug/y_button_menu.asm:99 CMP #21
    // Overlapping static entry reached from 0xC13695.
    case 0xC13697: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:100 BEQL @UNKNOWN49
    case 0xC13698: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:100 BEQL @UNKNOWN49
    case 0xC1369A: cpu.execute_instruction<0x4C>(0x0037E8, 3); return true;
    // src/system/debug/y_button_menu.asm:101 CMP #22
    case 0xC1369D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000016, 2); else cpu.execute_instruction<0xC9>(0x000016, 3); return true;
    // src/system/debug/y_button_menu.asm:101 CMP #22
    // Overlapping static entry reached from 0xC1369D.
    case 0xC1369F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:102 BEQL @UNKNOWN50
    case 0xC136A0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:102 BEQL @UNKNOWN50
    case 0xC136A2: cpu.execute_instruction<0x4C>(0x0037EE, 3); return true;
    // src/system/debug/y_button_menu.asm:103 CMP #23
    case 0xC136A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/system/debug/y_button_menu.asm:103 CMP #23
    // Overlapping static entry reached from 0xC136A5.
    case 0xC136A7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:104 BEQL @UNKNOWN51
    case 0xC136A8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:104 BEQL @UNKNOWN51
    case 0xC136AA: cpu.execute_instruction<0x4C>(0x0037FA, 3); return true;
    // src/system/debug/y_button_menu.asm:105 JMP @UNKNOWN52
    case 0xC136AD: cpu.execute_instruction<0x4C>(0x003818, 3); return true;
    // src/system/debug/y_button_menu.asm:107 JSL DEBUG_Y_BUTTON_FLAG
    case 0xC136B0: cpu.execute_instruction<0x22>(0xC1416D, 4); return true;
    // src/system/debug/y_button_menu.asm:108 JMP @UNKNOWN53
    case 0xC136B4: cpu.execute_instruction<0x4C>(0x00381E, 3); return true;
    // src/system/debug/y_button_menu.asm:110 JSL DEBUG_Y_BUTTON_GOODS
    case 0xC136B7: cpu.execute_instruction<0x22>(0xC14344, 4); return true;
    // src/system/debug/y_button_menu.asm:111 JMP @UNKNOWN53
    case 0xC136BB: cpu.execute_instruction<0x4C>(0x00381E, 3); return true;
    // src/system/debug/y_button_menu.asm:113 JSL SAVE_CURRENT_GAME
    case 0xC136BE: cpu.execute_instruction<0x22>(0xC22951, 4); return true;
    // src/system/debug/y_button_menu.asm:114 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC136C2: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/system/debug/y_button_menu.asm:115 STA RESPAWN_X
    case 0xC136C5: cpu.execute_instruction<0x8D>(0x009FA5, 3); return true;
    // src/system/debug/y_button_menu.asm:116 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC136C8: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/system/debug/y_button_menu.asm:117 STA RESPAWN_Y
    case 0xC136CB: cpu.execute_instruction<0x8D>(0x009FA7, 3); return true;
    // src/system/debug/y_button_menu.asm:118 JMP @UNKNOWN53
    case 0xC136CE: cpu.execute_instruction<0x4C>(0x00381E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:120 LOADPTR MSG_DEBUG_00, @VIRTUAL06
    case 0xC136D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003F, 2); else cpu.execute_instruction<0xA9>(0x00C43F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:120 LOADPTR MSG_DEBUG_00, @VIRTUAL06
    // Overlapping static entry reached from 0xC136D1.
    case 0xC136D3: cpu.execute_instruction<0xC4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/y_button_menu.asm:120 LOADPTR MSG_DEBUG_00, @VIRTUAL06
    case 0xC136D4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/y_button_menu.asm:120 LOADPTR MSG_DEBUG_00, @VIRTUAL06
    // Overlapping static entry reached from 0xC136D3.
    case 0xC136D5: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:120 LOADPTR MSG_DEBUG_00, @VIRTUAL06
    case 0xC136D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:120 LOADPTR MSG_DEBUG_00, @VIRTUAL06
    // Overlapping static entry reached from 0xC136D5.
    case 0xC136D7: cpu.execute_instruction<0xC7>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:120 LOADPTR MSG_DEBUG_00, @VIRTUAL06
    // Overlapping static entry reached from 0xC136D6.
    case 0xC136D8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/y_button_menu.asm:120 LOADPTR MSG_DEBUG_00, @VIRTUAL06
    case 0xC136D9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/debug/y_button_menu.asm:124 JMP @UNKNOWN53
    case 0xC136DB: cpu.execute_instruction<0x4C>(0x00381E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:126 LOADPTR MSG_DEBUG_01, @VIRTUAL06
    case 0xC136DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006D, 2); else cpu.execute_instruction<0xA9>(0x00D36D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:126 LOADPTR MSG_DEBUG_01, @VIRTUAL06
    // Overlapping static entry reached from 0xC136DE.
    case 0xC136E0: cpu.execute_instruction<0xD3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/y_button_menu.asm:126 LOADPTR MSG_DEBUG_01, @VIRTUAL06
    case 0xC136E1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/y_button_menu.asm:126 LOADPTR MSG_DEBUG_01, @VIRTUAL06
    // Overlapping static entry reached from 0xC136E0.
    case 0xC136E2: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:126 LOADPTR MSG_DEBUG_01, @VIRTUAL06
    case 0xC136E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:126 LOADPTR MSG_DEBUG_01, @VIRTUAL06
    // Overlapping static entry reached from 0xC136E2.
    case 0xC136E4: cpu.execute_instruction<0xC7>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:126 LOADPTR MSG_DEBUG_01, @VIRTUAL06
    // Overlapping static entry reached from 0xC136E3.
    case 0xC136E5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/y_button_menu.asm:126 LOADPTR MSG_DEBUG_01, @VIRTUAL06
    case 0xC136E6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/debug/y_button_menu.asm:130 JMP @UNKNOWN53
    case 0xC136E8: cpu.execute_instruction<0x4C>(0x00381E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:132 LOADPTR MSG_DEBUG_02, @VIRTUAL06
    case 0xC136EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000058, 2); else cpu.execute_instruction<0xA9>(0x00D258, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:132 LOADPTR MSG_DEBUG_02, @VIRTUAL06
    // Overlapping static entry reached from 0xC136EB.
    case 0xC136ED: cpu.execute_instruction<0xD2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/y_button_menu.asm:132 LOADPTR MSG_DEBUG_02, @VIRTUAL06
    case 0xC136EE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/y_button_menu.asm:132 LOADPTR MSG_DEBUG_02, @VIRTUAL06
    // Overlapping static entry reached from 0xC136ED.
    case 0xC136EF: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:132 LOADPTR MSG_DEBUG_02, @VIRTUAL06
    case 0xC136F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:132 LOADPTR MSG_DEBUG_02, @VIRTUAL06
    // Overlapping static entry reached from 0xC136EF.
    case 0xC136F1: cpu.execute_instruction<0xC7>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:132 LOADPTR MSG_DEBUG_02, @VIRTUAL06
    // Overlapping static entry reached from 0xC136F0.
    case 0xC136F2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/y_button_menu.asm:132 LOADPTR MSG_DEBUG_02, @VIRTUAL06
    case 0xC136F3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/debug/y_button_menu.asm:136 JMP @UNKNOWN53
    case 0xC136F5: cpu.execute_instruction<0x4C>(0x00381E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:138 LOADPTR TEXT_DEBUG_UNKNOWN_MENU_2, @VIRTUAL06
    case 0xC136F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007D, 2); else cpu.execute_instruction<0xA9>(0x00E27D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:138 LOADPTR TEXT_DEBUG_UNKNOWN_MENU_2, @VIRTUAL06
    // Overlapping static entry reached from 0xC136F8.
    case 0xC136FA: cpu.execute_instruction<0xE2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/y_button_menu.asm:138 LOADPTR TEXT_DEBUG_UNKNOWN_MENU_2, @VIRTUAL06
    case 0xC136FB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/y_button_menu.asm:138 LOADPTR TEXT_DEBUG_UNKNOWN_MENU_2, @VIRTUAL06
    // Overlapping static entry reached from 0xC136FA.
    case 0xC136FC: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:138 LOADPTR TEXT_DEBUG_UNKNOWN_MENU_2, @VIRTUAL06
    case 0xC136FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:138 LOADPTR TEXT_DEBUG_UNKNOWN_MENU_2, @VIRTUAL06
    // Overlapping static entry reached from 0xC136FC.
    case 0xC136FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:138 LOADPTR TEXT_DEBUG_UNKNOWN_MENU_2, @VIRTUAL06
    // Overlapping static entry reached from 0xC136FD.
    case 0xC136FF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/y_button_menu.asm:138 LOADPTR TEXT_DEBUG_UNKNOWN_MENU_2, @VIRTUAL06
    case 0xC13700: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/y_button_menu.asm:138 LOADPTR TEXT_DEBUG_UNKNOWN_MENU_2, @VIRTUAL06
    // Overlapping static entry reached from 0xC136FE.
    case 0xC13701: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/debug/y_button_menu.asm:142 JMP @UNKNOWN53
    case 0xC13702: cpu.execute_instruction<0x4C>(0x00381E, 3); return true;
    // src/system/debug/y_button_menu.asm:144 LDX #0
    case 0xC13705: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/debug/y_button_menu.asm:144 LDX #0
    // Overlapping static entry reached from 0xC13705.
    case 0xC13707: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/system/debug/y_button_menu.asm:145 STX @LOCAL02
    case 0xC13708: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/system/debug/y_button_menu.asm:146 BRA @UNKNOWN35
    case 0xC1370A: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/system/debug/y_button_menu.asm:148 LDA #0
    case 0xC1370C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/debug/y_button_menu.asm:148 LDA #0
    // Overlapping static entry reached from 0xC1370C.
    case 0xC1370E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/y_button_menu.asm:149 JSL UNDRAW_HP_PP_WINDOW
    case 0xC1370F: cpu.execute_instruction<0x22>(0xC20782, 4); return true;
    // src/system/debug/y_button_menu.asm:150 JSL UNKNOWN_C12E42
    case 0xC13713: cpu.execute_instruction<0x22>(0xC1355E, 4); return true;
    // src/system/debug/y_button_menu.asm:151 JSL UNKNOWN_C12E42
    case 0xC13717: cpu.execute_instruction<0x22>(0xC1355E, 4); return true;
    // src/system/debug/y_button_menu.asm:152 LDA #0
    case 0xC1371B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/debug/y_button_menu.asm:152 LDA #0
    // Overlapping static entry reached from 0xC1371B.
    case 0xC1371D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/y_button_menu.asm:153 JSL UNKNOWN_C207B6
    case 0xC1371E: cpu.execute_instruction<0x22>(0xC20757, 4); return true;
    // src/system/debug/y_button_menu.asm:154 JSL UNKNOWN_C12E42
    case 0xC13722: cpu.execute_instruction<0x22>(0xC1355E, 4); return true;
    // src/system/debug/y_button_menu.asm:155 JSL UNKNOWN_C12E42
    case 0xC13726: cpu.execute_instruction<0x22>(0xC1355E, 4); return true;
    // src/system/debug/y_button_menu.asm:156 LDX @LOCAL02
    case 0xC1372A: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/system/debug/y_button_menu.asm:157 INX
    case 0xC1372C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/debug/y_button_menu.asm:158 STX @LOCAL02
    case 0xC1372D: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/system/debug/y_button_menu.asm:160 CPX #30
    case 0xC1372F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00001E, 2); else cpu.execute_instruction<0xE0>(0x00001E, 3); return true;
    // src/system/debug/y_button_menu.asm:160 CPX #30
    // Overlapping static entry reached from 0xC1372F.
    case 0xC13731: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/debug/y_button_menu.asm:161 BCC @UNKNOWN34
    case 0xC13732: cpu.execute_instruction<0x90>(0x0000D8, 2); return true;
    // src/system/debug/y_button_menu.asm:162 LDA #7696
    case 0xC13734: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x001E10, 3); return true;
    // src/system/debug/y_button_menu.asm:162 LDA #7696
    // Overlapping static entry reached from 0xC13734.
    case 0xC13736: cpu.execute_instruction<0x1E>(0x000485, 3); return true;
    // src/system/debug/y_button_menu.asm:163 STA @VIRTUAL04
    case 0xC13737: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/debug/y_button_menu.asm:164 LDA #2280
    case 0xC13739: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E8, 2); else cpu.execute_instruction<0xA9>(0x0008E8, 3); return true;
    // src/system/debug/y_button_menu.asm:164 LDA #2280
    // Overlapping static entry reached from 0xC13739.
    case 0xC1373B: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/debug/y_button_menu.asm:165 STA @VIRTUAL02
    case 0xC1373C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/debug/y_button_menu.asm:166 LDX #1
    case 0xC1373E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:166 LDX #1
    // Overlapping static entry reached from 0xC1373E.
    case 0xC13740: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/system/debug/y_button_menu.asm:167 TXA
    case 0xC13741: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/debug/y_button_menu.asm:168 JSL FADE_OUT
    case 0xC13742: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/system/debug/y_button_menu.asm:169 LDX @VIRTUAL02
    case 0xC13746: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/debug/y_button_menu.asm:170 LDA @VIRTUAL04
    case 0xC13748: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/system/debug/y_button_menu.asm:171 JSL LOAD_MAP_AT_POSITION
    case 0xC1374A: cpu.execute_instruction<0x22>(0xC0140C, 4); return true;
    // src/system/debug/y_button_menu.asm:172 LDY #0
    case 0xC1374E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/debug/y_button_menu.asm:172 LDY #0
    // Overlapping static entry reached from 0xC1374E.
    case 0xC13750: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/system/debug/y_button_menu.asm:173 LDX @VIRTUAL02
    case 0xC13751: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/debug/y_button_menu.asm:174 LDA @VIRTUAL04
    case 0xC13753: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/system/debug/y_button_menu.asm:175 JSL UNKNOWN_C03FA9
    case 0xC13755: cpu.execute_instruction<0x22>(0xC04230, 4); return true;
    // src/system/debug/y_button_menu.asm:176 LDX #1
    case 0xC13759: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:176 LDX #1
    // Overlapping static entry reached from 0xC13759.
    case 0xC1375B: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/system/debug/y_button_menu.asm:177 TXA
    case 0xC1375C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/debug/y_button_menu.asm:178 JSL FADE_IN
    case 0xC1375D: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/system/debug/y_button_menu.asm:179 JMP @UNKNOWN53
    case 0xC13761: cpu.execute_instruction<0x4C>(0x00381E, 3); return true;
    // src/system/debug/y_button_menu.asm:181 JSL RAND
    case 0xC13764: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/system/debug/y_button_menu.asm:182 AND #$0001
    case 0xC13768: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:182 AND #$0001
    // Overlapping static entry reached from 0xC13768.
    case 0xC1376A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/y_button_menu.asm:183 JSL COFFEETEA_SCENE
    case 0xC1376B: cpu.execute_instruction<0x22>(0xC4723E, 4); return true;
    // src/system/debug/y_button_menu.asm:184 JMP @UNKNOWN53
    case 0xC1376F: cpu.execute_instruction<0x4C>(0x00381E, 3); return true;
    // src/system/debug/y_button_menu.asm:186 LDA #1
    case 0xC13772: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:186 LDA #1
    // Overlapping static entry reached from 0xC13772.
    case 0xC13774: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/y_button_menu.asm:187 JSL LEARN_SPECIAL_PSI
    case 0xC13775: cpu.execute_instruction<0x22>(0xC22694, 4); return true;
    // src/system/debug/y_button_menu.asm:188 JMP @UNKNOWN53
    case 0xC13779: cpu.execute_instruction<0x4C>(0x00381E, 3); return true;
    // src/system/debug/y_button_menu.asm:190 LDA #2
    case 0xC1377C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/system/debug/y_button_menu.asm:190 LDA #2
    // Overlapping static entry reached from 0xC1377C.
    case 0xC1377E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/y_button_menu.asm:191 JSL LEARN_SPECIAL_PSI
    case 0xC1377F: cpu.execute_instruction<0x22>(0xC22694, 4); return true;
    // src/system/debug/y_button_menu.asm:192 JMP @UNKNOWN53
    case 0xC13783: cpu.execute_instruction<0x4C>(0x00381E, 3); return true;
    // src/system/debug/y_button_menu.asm:194 LDA #3
    case 0xC13786: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/system/debug/y_button_menu.asm:194 LDA #3
    // Overlapping static entry reached from 0xC13786.
    case 0xC13788: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/y_button_menu.asm:195 JSL LEARN_SPECIAL_PSI
    case 0xC13789: cpu.execute_instruction<0x22>(0xC22694, 4); return true;
    // src/system/debug/y_button_menu.asm:196 LDA #4
    case 0xC1378D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/system/debug/y_button_menu.asm:196 LDA #4
    // Overlapping static entry reached from 0xC1378D.
    case 0xC1378F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/y_button_menu.asm:197 JSL LEARN_SPECIAL_PSI
    case 0xC13790: cpu.execute_instruction<0x22>(0xC22694, 4); return true;
    // src/system/debug/y_button_menu.asm:198 JMP @UNKNOWN53
    case 0xC13794: cpu.execute_instruction<0x4C>(0x00381E, 3); return true;
    // src/system/debug/y_button_menu.asm:200 LDA #0
    case 0xC13797: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/debug/y_button_menu.asm:200 LDA #0
    // Overlapping static entry reached from 0xC13797.
    case 0xC13799: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/y_button_menu.asm:201 JSL ENTER_YOUR_NAME_PLEASE
    case 0xC1379A: cpu.execute_instruction<0x22>(0xC1E8F6, 4); return true;
    // src/system/debug/y_button_menu.asm:202 JMP @UNKNOWN53
    case 0xC1379E: cpu.execute_instruction<0x4C>(0x00381E, 3); return true;
    // src/system/debug/y_button_menu.asm:204 LDA #1
    case 0xC137A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:204 LDA #1
    // Overlapping static entry reached from 0xC137A1.
    case 0xC137A3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/y_button_menu.asm:205 JSL ENTER_YOUR_NAME_PLEASE
    case 0xC137A4: cpu.execute_instruction<0x22>(0xC1E8F6, 4); return true;
    // src/system/debug/y_button_menu.asm:207 BRA @UNKNOWN53
    case 0xC137A8: cpu.execute_instruction<0x80>(0x000074, 2); return true;
    // src/system/debug/y_button_menu.asm:212 JSL UNKNOWN_C4D744
    case 0xC137AA: cpu.execute_instruction<0x22>(0xC4AA14, 4); return true;
    // src/system/debug/y_button_menu.asm:213 BRA @UNKNOWN53
    case 0xC137AE: cpu.execute_instruction<0x80>(0x00006E, 2); return true;
    // src/system/debug/y_button_menu.asm:215 JSL DEBUG_Y_BUTTON_GUIDE
    case 0xC137B0: cpu.execute_instruction<0x22>(0xC14270, 4); return true;
    // src/system/debug/y_button_menu.asm:216 BRA @UNKNOWN53
    case 0xC137B4: cpu.execute_instruction<0x80>(0x000068, 2); return true;
    // src/system/debug/y_button_menu.asm:218 JSL PLAY_CAST_SCENE
    case 0xC137B6: cpu.execute_instruction<0x22>(0xC4BF69, 4); return true;
    // src/system/debug/y_button_menu.asm:219 LDA #1
    case 0xC137BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:219 LDA #1
    // Overlapping static entry reached from 0xC137BA.
    case 0xC137BC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/system/debug/y_button_menu.asm:220 JSR TELEPORT
    case 0xC137BD: cpu.execute_instruction<0x20>(0x00BB11, 3); return true;
    // src/system/debug/y_button_menu.asm:221 BRA @UNKNOWN53
    case 0xC137C0: cpu.execute_instruction<0x80>(0x00005C, 2); return true;
    // src/system/debug/y_button_menu.asm:223 LDA #1
    case 0xC137C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:223 LDA #1
    // Overlapping static entry reached from 0xC137C2.
    case 0xC137C4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/debug/y_button_menu.asm:224 JSL USE_SOUND_STONE
    case 0xC137C5: cpu.execute_instruction<0x22>(0xC48137, 4); return true;
    // src/system/debug/y_button_menu.asm:225 BRA @UNKNOWN53
    case 0xC137C9: cpu.execute_instruction<0x80>(0x000053, 2); return true;
    // src/system/debug/y_button_menu.asm:227 JSL PLAY_CREDITS
    case 0xC137CB: cpu.execute_instruction<0x22>(0xC4C594, 4); return true;
    // src/system/debug/y_button_menu.asm:228 LDA #1
    case 0xC137CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:228 LDA #1
    // Overlapping static entry reached from 0xC137CF.
    case 0xC137D1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/system/debug/y_button_menu.asm:229 JSR TELEPORT
    case 0xC137D2: cpu.execute_instruction<0x20>(0x00BB11, 3); return true;
    // src/system/debug/y_button_menu.asm:230 BRA @UNKNOWN53
    case 0xC137D5: cpu.execute_instruction<0x80>(0x000047, 2); return true;
    // src/system/debug/y_button_menu.asm:232 LDX #0
    case 0xC137D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/debug/y_button_menu.asm:232 LDX #0
    // Overlapping static entry reached from 0xC137D7.
    case 0xC137D9: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/system/debug/y_button_menu.asm:233 LDA HPPP_METER_FLIPOUT_MODE
    case 0xC137DA: cpu.execute_instruction<0xAD>(0x00994C, 3); return true;
    // src/system/debug/y_button_menu.asm:234 BNE @UNKNOWN48
    case 0xC137DD: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/system/debug/y_button_menu.asm:235 LDX #1
    case 0xC137DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/system/debug/y_button_menu.asm:235 LDX #1
    // Overlapping static entry reached from 0xC137DF.
    case 0xC137E1: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/system/debug/y_button_menu.asm:237 TXA
    case 0xC137E2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/debug/y_button_menu.asm:238 JSR UNKNOWN_C12D17
    case 0xC137E3: cpu.execute_instruction<0x20>(0x003444, 3); return true;
    // src/system/debug/y_button_menu.asm:239 BRA @UNKNOWN53
    case 0xC137E6: cpu.execute_instruction<0x80>(0x000036, 2); return true;
    // src/system/debug/y_button_menu.asm:241 JSL UNKNOWN_EFEA4A
    case 0xC137E8: cpu.execute_instruction<0x22>(0xEFD375, 4); return true;
    // src/system/debug/y_button_menu.asm:242 BRA @UNKNOWN56
    case 0xC137EC: cpu.execute_instruction<0x80>(0x00005E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:244 LOADPTR MSG_BTL_INORU_BACK_TO_PC_9, @VIRTUAL06
    case 0xC137EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F4, 2); else cpu.execute_instruction<0xA9>(0x0044F4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:244 LOADPTR MSG_BTL_INORU_BACK_TO_PC_9, @VIRTUAL06
    // Overlapping static entry reached from 0xC137EE.
    case 0xC137F0: cpu.execute_instruction<0x44>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/y_button_menu.asm:244 LOADPTR MSG_BTL_INORU_BACK_TO_PC_9, @VIRTUAL06
    case 0xC137F1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:244 LOADPTR MSG_BTL_INORU_BACK_TO_PC_9, @VIRTUAL06
    case 0xC137F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:244 LOADPTR MSG_BTL_INORU_BACK_TO_PC_9, @VIRTUAL06
    // Overlapping static entry reached from 0xC137F3.
    case 0xC137F5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/y_button_menu.asm:244 LOADPTR MSG_BTL_INORU_BACK_TO_PC_9, @VIRTUAL06
    case 0xC137F6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/debug/y_button_menu.asm:248 BRA @UNKNOWN53
    case 0xC137F8: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:250 LOADPTR MSG_EVT_TO_BE_CONTINUED, @VIRTUAL06
    case 0xC137FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x0077FE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:250 LOADPTR MSG_EVT_TO_BE_CONTINUED, @VIRTUAL06
    // Overlapping static entry reached from 0xC137FA.
    case 0xC137FC: cpu.execute_instruction<0x77>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/y_button_menu.asm:250 LOADPTR MSG_EVT_TO_BE_CONTINUED, @VIRTUAL06
    case 0xC137FD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/debug/y_button_menu.asm:250 LOADPTR MSG_EVT_TO_BE_CONTINUED, @VIRTUAL06
    // Overlapping static entry reached from 0xC137FC.
    case 0xC137FE: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:250 LOADPTR MSG_EVT_TO_BE_CONTINUED, @VIRTUAL06
    case 0xC137FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:250 LOADPTR MSG_EVT_TO_BE_CONTINUED, @VIRTUAL06
    // Overlapping static entry reached from 0xC137FE.
    case 0xC13800: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/debug/y_button_menu.asm:250 LOADPTR MSG_EVT_TO_BE_CONTINUED, @VIRTUAL06
    // Overlapping static entry reached from 0xC137FF.
    case 0xC13801: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/debug/y_button_menu.asm:250 LOADPTR MSG_EVT_TO_BE_CONTINUED, @VIRTUAL06
    case 0xC13802: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/debug/y_button_menu.asm:251 JSR UNKNOWN_C1008E
    case 0xC13804: cpu.execute_instruction<0x20>(0x0002AF, 3); return true;
    // src/system/debug/y_button_menu.asm:252 JSR HIDE_HPPP_WINDOWS
    case 0xC13807: cpu.execute_instruction<0x20>(0x000E72, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/debug/y_button_menu.asm:253 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1380A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/debug/y_button_menu.asm:253 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1380C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/debug/y_button_menu.asm:253 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1380E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/debug/y_button_menu.asm:253 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13810: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/y_button_menu.asm:254 JSL DISPLAY_TEXT
    case 0xC13812: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/system/debug/y_button_menu.asm:255 BRA @UNKNOWN56
    case 0xC13816: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/system/debug/y_button_menu.asm:257 JSL UNKNOWN_EFEA9E
    case 0xC13818: cpu.execute_instruction<0x22>(0xEFD3C9, 4); return true;
    // src/system/debug/y_button_menu.asm:258 BRA @UNKNOWN56
    case 0xC1381C: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/system/debug/y_button_menu.asm:260 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1381E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/system/debug/y_button_menu.asm:260 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1381E.
    case 0xC13820: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/system/debug/y_button_menu.asm:260 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13821: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/system/debug/y_button_menu.asm:260 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13823: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/system/debug/y_button_menu.asm:260 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13823.
    case 0xC13825: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/system/debug/y_button_menu.asm:260 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13826: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/system/debug/y_button_menu.asm:269 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13828: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/system/debug/y_button_menu.asm:269 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1382A: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:269 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1382C: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/system/debug/y_button_menu.asm:269 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1382E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:269 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC13830: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/debug/y_button_menu.asm:271 BEQL @UNKNOWN0
    case 0xC13832: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/debug/y_button_menu.asm:271 BEQL @UNKNOWN0
    case 0xC13834: cpu.execute_instruction<0x4C>(0x003595, 3); return true;
    // src/system/debug/y_button_menu.asm:272 JSR CLOSE_FOCUS_WINDOW
    case 0xC13837: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/system/debug/y_button_menu.asm:273 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1383A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/system/debug/y_button_menu.asm:273 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1383A.
    case 0xC1383C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/system/debug/y_button_menu.asm:273 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1383D: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/debug/y_button_menu.asm:274 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13840: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/debug/y_button_menu.asm:274 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13842: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/debug/y_button_menu.asm:274 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13844: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/debug/y_button_menu.asm:274 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC13846: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/debug/y_button_menu.asm:275 JSL DISPLAY_TEXT
    case 0xC13848: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/system/debug/y_button_menu.asm:277 JSR UNKNOWN_C1008E
    case 0xC1384C: cpu.execute_instruction<0x20>(0x0002AF, 3); return true;
    // src/system/debug/y_button_menu.asm:278 JSR HIDE_HPPP_WINDOWS
    case 0xC1384F: cpu.execute_instruction<0x20>(0x000E72, 3); return true;
    // src/system/debug/y_button_menu.asm:280 JSL WINDOW_TICK
    case 0xC13852: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/system/debug/y_button_menu.asm:281 LDA ENTITY_FADE_ENTITY
    case 0xC13856: cpu.execute_instruction<0xAD>(0x00B67C, 3); return true;
    // src/system/debug/y_button_menu.asm:282 CMP #.LOWORD(-1)
    case 0xC13859: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/system/debug/y_button_menu.asm:282 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC13859.
    case 0xC1385B: cpu.execute_instruction<0xFF>(0x22F4D0, 4); return true;
    // src/system/debug/y_button_menu.asm:283 BNE @UNKNOWN57
    case 0xC1385C: cpu.execute_instruction<0xD0>(0x0000F4, 2); return true;
    // src/system/debug/y_button_menu.asm:284 JSL UNKNOWN_C09451
    case 0xC1385E: cpu.execute_instruction<0x22>(0xC09430, 4); return true;
    // src/system/debug/y_button_menu.asm:284 JSL UNKNOWN_C09451
    // Overlapping static entry reached from 0xC1385B.
    case 0xC1385F: cpu.execute_instruction<0x30>(0x000094, 2); return true;
    // src/system/debug/y_button_menu.asm:284 JSL UNKNOWN_C09451
    // Overlapping static entry reached from 0xC1385F.
    case 0xC13861: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/debug/y_button_menu.asm:285 END_C_FUNCTION
    case 0xC13862: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/debug/y_button_menu.asm:285 END_C_FUNCTION
    case 0xC13863: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/decomp.asm (source_named).
bool execute_system_decompression_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/decomp.asm:3 MOVE_INT $0E, DECOMP_DATA_SRC
    case 0xC419EA: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/decomp.asm:3 MOVE_INT $0E, DECOMP_DATA_SRC
    case 0xC419EC: cpu.execute_instruction<0x8D>(0x0000CA, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/decomp.asm:3 MOVE_INT $0E, DECOMP_DATA_SRC
    case 0xC419EF: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/decomp.asm:3 MOVE_INT $0E, DECOMP_DATA_SRC
    case 0xC419F1: cpu.execute_instruction<0x8D>(0x0000CC, 3); return true;
    // src/system/decomp.asm:4 LDX $12
    case 0xC419F4: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/system/decomp.asm:5 STX DECOMP_DEST_BUFFER
    case 0xC419F6: cpu.execute_instruction<0x8E>(0x0000CD, 3); return true;
    // src/system/decomp.asm:6 PHB
    case 0xC419F9: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/system/decomp.asm:7 SEP #PROC_FLAGS::ACCUM8
    case 0xC419FA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/decomp.asm:8 LDA $14
    case 0xC419FC: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/system/decomp.asm:9 PHA
    case 0xC419FE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/decomp.asm:10 PLB
    case 0xC419FF: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/decomp.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC41A00: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/decomp.asm:12 PHD
    case 0xC41A02: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/system/decomp.asm:13 PEA $0000
    case 0xC41A03: cpu.execute_instruction<0xF4>(0x000000, 3); return true;
    // src/system/decomp.asm:14 PLD
    case 0xC41A06: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/decomp.asm:15 PHP
    case 0xC41A07: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/decomp.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC41A08: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/decomp.asm:17 LDY #$0000
    case 0xC41A0A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/decomp.asm:17 LDY #$0000
    // Overlapping static entry reached from 0xC41A0A.
    case 0xC41A0C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/system/decomp.asm:19 LDA [<DECOMP_DATA_SRC],Y
    case 0xC41A0D: cpu.execute_instruction<0xB7>(0x0000CA, 2); return true;
    // src/system/decomp.asm:20 CMP #$00FF
    case 0xC41A0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00D0FF, 3); return true;
    // src/system/decomp.asm:21 BNE DECOMP_UNKNOWN1
    case 0xC41A11: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/system/decomp.asm:21 BNE DECOMP_UNKNOWN1
    // Overlapping static entry reached from 0xC41A0F.
    case 0xC41A12: cpu.execute_instruction<0x04>(0x000028, 2); return true;
    // src/system/decomp.asm:22 PLP
    case 0xC41A13: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/decomp.asm:23 PLD
    case 0xC41A14: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/decomp.asm:24 PLB
    case 0xC41A15: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/decomp.asm:25 RTL
    case 0xC41A16: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/system/decomp.asm:27 AND #$00E0
    case 0xC41A17: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x00C9E0, 3); return true;
    // src/system/decomp.asm:28 CMP #$00E0
    case 0xC41A19: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E0, 2); else cpu.execute_instruction<0xC9>(0x00D0E0, 3); return true;
    // src/system/decomp.asm:28 CMP #$00E0
    // Overlapping static entry reached from 0xC41A17.
    case 0xC41A1A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000D0, 2); else cpu.execute_instruction<0xE0>(0x001CD0, 3); return true;
    // src/system/decomp.asm:29 BNE DECOMP_UNKNOWN2
    case 0xC41A1B: cpu.execute_instruction<0xD0>(0x00001C, 2); return true;
    // src/system/decomp.asm:29 BNE DECOMP_UNKNOWN2
    // Overlapping static entry reached from 0xC41A19.
    case 0xC41A1C: cpu.execute_instruction<0x1C>(0x00CAB7, 3); return true;
    // src/system/decomp.asm:30 LDA [<DECOMP_DATA_SRC],Y
    case 0xC41A1D: cpu.execute_instruction<0xB7>(0x0000CA, 2); return true;
    // src/system/decomp.asm:31 ASL
    case 0xC41A1F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:32 ASL
    case 0xC41A20: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:33 ASL
    case 0xC41A21: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:34 AND #$00E0
    case 0xC41A22: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x0048E0, 3); return true;
    // src/system/decomp.asm:35 PHA
    case 0xC41A24: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/decomp.asm:36 LDA [<DECOMP_DATA_SRC],Y
    case 0xC41A25: cpu.execute_instruction<0xB7>(0x0000CA, 2); return true;
    // src/system/decomp.asm:37 INY
    case 0xC41A27: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:38 AND #$0003
    case 0xC41A28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x008503, 3); return true;
    // src/system/decomp.asm:39 STA <DECOMP_TEMP_UNREAD
    case 0xC41A2A: cpu.execute_instruction<0x85>(0x0000D0, 2); return true;
    // src/system/decomp.asm:39 STA <DECOMP_TEMP_UNREAD
    // Overlapping static entry reached from 0xC41A28.
    case 0xC41A2B: cpu.execute_instruction<0xD0>(0x0000B7, 2); return true;
    // src/system/decomp.asm:40 LDA [<DECOMP_DATA_SRC],Y
    case 0xC41A2C: cpu.execute_instruction<0xB7>(0x0000CA, 2); return true;
    // src/system/decomp.asm:40 LDA [<DECOMP_DATA_SRC],Y
    // Overlapping static entry reached from 0xC41A2B.
    case 0xC41A2D: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/system/decomp.asm:41 INY
    case 0xC41A2E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:42 STA <DECOMP_TEMP_LENGTH
    case 0xC41A2F: cpu.execute_instruction<0x85>(0x0000CF, 2); return true;
    // src/system/decomp.asm:43 REP #PROC_FLAGS::ACCUM8
    case 0xC41A31: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/decomp.asm:44 INC <DECOMP_TEMP_LENGTH
    case 0xC41A33: cpu.execute_instruction<0xE6>(0x0000CF, 2); return true;
    // src/system/decomp.asm:45 SEP #PROC_FLAGS::ACCUM8
    case 0xC41A35: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/decomp.asm:46 BRA DECOMP_UNKNOWN3
    case 0xC41A37: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/system/decomp.asm:48 PHA
    case 0xC41A39: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/decomp.asm:49 LDA [<DECOMP_DATA_SRC],Y
    case 0xC41A3A: cpu.execute_instruction<0xB7>(0x0000CA, 2); return true;
    // src/system/decomp.asm:50 INY
    case 0xC41A3C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:51 AND #$001F
    case 0xC41A3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x001A1F, 3); return true;
    // src/system/decomp.asm:52 INC
    case 0xC41A3F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/decomp.asm:53 STA <DECOMP_TEMP_LENGTH
    case 0xC41A40: cpu.execute_instruction<0x85>(0x0000CF, 2); return true;
    // src/system/decomp.asm:54 STZ <DECOMP_TEMP_UNREAD
    case 0xC41A42: cpu.execute_instruction<0x64>(0x0000D0, 2); return true;
    // src/system/decomp.asm:56 PLA
    case 0xC41A44: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/decomp.asm:57 BPL DECOMP_UNKNOWN4
    case 0xC41A45: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/system/decomp.asm:58 JMP DECOMP_UNKNOWN12
    case 0xC41A47: cpu.execute_instruction<0x4C>(0x001AA2, 3); return true;
    // src/system/decomp.asm:60 CMP #$0020
    case 0xC41A4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x00F020, 3); return true;
    // src/system/decomp.asm:61 BEQ DECOMP_UNKNOWN6
    case 0xC41A4C: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/system/decomp.asm:61 BEQ DECOMP_UNKNOWN6
    // Overlapping static entry reached from 0xC41A4A.
    case 0xC41A4D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/decomp.asm:62 CMP #$0040
    case 0xC41A4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x00F040, 3); return true;
    // src/system/decomp.asm:63 BEQ DECOMP_UNKNOWN8
    case 0xC41A50: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/system/decomp.asm:63 BEQ DECOMP_UNKNOWN8
    // Overlapping static entry reached from 0xC41A4E.
    case 0xC41A51: cpu.execute_instruction<0x27>(0x0000C9, 2); return true;
    // src/system/decomp.asm:64 CMP #$0060
    case 0xC41A52: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000060, 2); else cpu.execute_instruction<0xC9>(0x00F060, 3); return true;
    // src/system/decomp.asm:64 CMP #$0060
    // Overlapping static entry reached from 0xC41A51.
    case 0xC41A53: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/system/decomp.asm:65 BEQ DECOMP_UNKNOWN10
    case 0xC41A54: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/system/decomp.asm:65 BEQ DECOMP_UNKNOWN10
    // Overlapping static entry reached from 0xC41A52.
    case 0xC41A55: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/system/decomp.asm:67 LDA [<DECOMP_DATA_SRC],Y
    case 0xC41A56: cpu.execute_instruction<0xB7>(0x0000CA, 2); return true;
    // src/system/decomp.asm:68 INY
    case 0xC41A58: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:69 STA __BSS_START__,X
    case 0xC41A59: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/decomp.asm:70 INX
    case 0xC41A5C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/decomp.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC41A5D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/decomp.asm:72 DEC <DECOMP_TEMP_LENGTH
    case 0xC41A5F: cpu.execute_instruction<0xC6>(0x0000CF, 2); return true;
    // src/system/decomp.asm:73 SEP #PROC_FLAGS::ACCUM8
    case 0xC41A61: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/decomp.asm:74 BNE DECOMP_UNKNOWN5
    case 0xC41A63: cpu.execute_instruction<0xD0>(0x0000F1, 2); return true;
    // src/system/decomp.asm:75 JMP DECOMP_UNKNOWN0
    case 0xC41A65: cpu.execute_instruction<0x4C>(0x001A0D, 3); return true;
    // src/system/decomp.asm:77 LDA [<DECOMP_DATA_SRC],Y
    case 0xC41A68: cpu.execute_instruction<0xB7>(0x0000CA, 2); return true;
    // src/system/decomp.asm:78 INY
    case 0xC41A6A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:79 PHY
    case 0xC41A6B: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/system/decomp.asm:80 LDY <DECOMP_TEMP_LENGTH + 0
    case 0xC41A6C: cpu.execute_instruction<0xA4>(0x0000CF, 2); return true;
    // src/system/decomp.asm:82 STA __BSS_START__,X
    case 0xC41A6E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/decomp.asm:83 INX
    case 0xC41A71: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/decomp.asm:84 DEY
    case 0xC41A72: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/decomp.asm:85 BNE DECOMP_UNKNOWN7
    case 0xC41A73: cpu.execute_instruction<0xD0>(0x0000F9, 2); return true;
    // src/system/decomp.asm:86 PLY
    case 0xC41A75: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/system/decomp.asm:87 JMP DECOMP_UNKNOWN0
    case 0xC41A76: cpu.execute_instruction<0x4C>(0x001A0D, 3); return true;
    // src/system/decomp.asm:89 REP #PROC_FLAGS::ACCUM8
    case 0xC41A79: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/decomp.asm:90 LDA [<DECOMP_DATA_SRC],Y
    case 0xC41A7B: cpu.execute_instruction<0xB7>(0x0000CA, 2); return true;
    // src/system/decomp.asm:91 INY
    case 0xC41A7D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:92 INY
    case 0xC41A7E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:93 PHY
    case 0xC41A7F: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/system/decomp.asm:94 LDY <DECOMP_TEMP_LENGTH + 0
    case 0xC41A80: cpu.execute_instruction<0xA4>(0x0000CF, 2); return true;
    // src/system/decomp.asm:96 STA __BSS_START__,X
    case 0xC41A82: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/decomp.asm:97 INX
    case 0xC41A85: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/decomp.asm:98 INX
    case 0xC41A86: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/decomp.asm:99 DEY
    case 0xC41A87: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/decomp.asm:100 BNE DECOMP_UNKNOWN9
    case 0xC41A88: cpu.execute_instruction<0xD0>(0x0000F8, 2); return true;
    // src/system/decomp.asm:101 PLY
    case 0xC41A8A: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/system/decomp.asm:102 SEP #PROC_FLAGS::ACCUM8
    case 0xC41A8B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/decomp.asm:103 JMP DECOMP_UNKNOWN0
    case 0xC41A8D: cpu.execute_instruction<0x4C>(0x001A0D, 3); return true;
    // src/system/decomp.asm:105 LDA [<DECOMP_DATA_SRC],Y
    case 0xC41A90: cpu.execute_instruction<0xB7>(0x0000CA, 2); return true;
    // src/system/decomp.asm:106 INY
    case 0xC41A92: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:107 PHY
    case 0xC41A93: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/system/decomp.asm:108 LDY <DECOMP_TEMP_LENGTH + 0
    case 0xC41A94: cpu.execute_instruction<0xA4>(0x0000CF, 2); return true;
    // src/system/decomp.asm:110 STA __BSS_START__,X
    case 0xC41A96: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/decomp.asm:111 INX
    case 0xC41A99: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/decomp.asm:112 INC
    case 0xC41A9A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/decomp.asm:113 DEY
    case 0xC41A9B: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/decomp.asm:114 BNE DECOMP_UNKNOWN11
    case 0xC41A9C: cpu.execute_instruction<0xD0>(0x0000F8, 2); return true;
    // src/system/decomp.asm:115 PLY
    case 0xC41A9E: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/system/decomp.asm:116 JMP DECOMP_UNKNOWN0
    case 0xC41A9F: cpu.execute_instruction<0x4C>(0x001A0D, 3); return true;
    // src/system/decomp.asm:118 STA <DECOMP_TEMP_COMMAND
    case 0xC41AA2: cpu.execute_instruction<0x85>(0x0000D1, 2); return true;
    // src/system/decomp.asm:119 REP #PROC_FLAGS::ACCUM8
    case 0xC41AA4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/decomp.asm:120 LDA [<DECOMP_DATA_SRC],Y
    case 0xC41AA6: cpu.execute_instruction<0xB7>(0x0000CA, 2); return true;
    // src/system/decomp.asm:121 XBA
    case 0xC41AA8: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:122 CLC
    case 0xC41AA9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/decomp.asm:123 ADC <DECOMP_DEST_BUFFER + 0
    case 0xC41AAA: cpu.execute_instruction<0x65>(0x0000CD, 2); return true;
    // src/system/decomp.asm:124 INY
    case 0xC41AAC: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:125 INY
    case 0xC41AAD: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:126 PHY
    case 0xC41AAE: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/system/decomp.asm:127 TAY
    case 0xC41AAF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/decomp.asm:128 SEP #PROC_FLAGS::ACCUM8
    case 0xC41AB0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/decomp.asm:129 LDA <DECOMP_TEMP_COMMAND + 0
    case 0xC41AB2: cpu.execute_instruction<0xA5>(0x0000D1, 2); return true;
    // src/system/decomp.asm:130 CMP #$0080
    case 0xC41AB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x00F080, 3); return true;
    // src/system/decomp.asm:131 BEQ DECOMP_UNKNOWN13
    case 0xC41AB6: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/system/decomp.asm:131 BEQ DECOMP_UNKNOWN13
    // Overlapping static entry reached from 0xC41AB4.
    case 0xC41AB7: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/decomp.asm:132 CMP #$00A0
    case 0xC41AB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000A0, 2); else cpu.execute_instruction<0xC9>(0x00F0A0, 3); return true;
    // src/system/decomp.asm:133 BEQ DECOMP_UNKNOWN14
    case 0xC41ABA: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/system/decomp.asm:133 BEQ DECOMP_UNKNOWN14
    // Overlapping static entry reached from 0xC41AB8.
    case 0xC41ABB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/decomp.asm:134 CMP #$00C0
    case 0xC41ABC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C0, 2); else cpu.execute_instruction<0xC9>(0x00F0C0, 3); return true;
    // src/system/decomp.asm:135 BEQ DECOMP_UNKNOWN15
    case 0xC41ABE: cpu.execute_instruction<0xF0>(0x000042, 2); return true;
    // src/system/decomp.asm:135 BEQ DECOMP_UNKNOWN15
    // Overlapping static entry reached from 0xC41ABC.
    case 0xC41ABF: cpu.execute_instruction<0x42>(0x0000B9, 2); return true;
    // src/system/decomp.asm:137 LDA __BSS_START__,Y
    case 0xC41AC0: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/system/decomp.asm:137 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC41ABF.
    case 0xC41AC1: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/system/decomp.asm:138 STA __BSS_START__,X
    case 0xC41AC3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/decomp.asm:139 INY
    case 0xC41AC6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:140 INX
    case 0xC41AC7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/decomp.asm:141 REP #PROC_FLAGS::ACCUM8
    case 0xC41AC8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/decomp.asm:142 DEC <DECOMP_TEMP_LENGTH
    case 0xC41ACA: cpu.execute_instruction<0xC6>(0x0000CF, 2); return true;
    // src/system/decomp.asm:143 SEP #PROC_FLAGS::ACCUM8
    case 0xC41ACC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/decomp.asm:144 BNE DECOMP_UNKNOWN13
    case 0xC41ACE: cpu.execute_instruction<0xD0>(0x0000F0, 2); return true;
    // src/system/decomp.asm:145 PLY
    case 0xC41AD0: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/system/decomp.asm:146 JMP DECOMP_UNKNOWN0
    case 0xC41AD1: cpu.execute_instruction<0x4C>(0x001A0D, 3); return true;
    // src/system/decomp.asm:148 LDA __BSS_START__,Y
    case 0xC41AD4: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/system/decomp.asm:149 STA <DECOMP_TEMP_COMMAND
    case 0xC41AD7: cpu.execute_instruction<0x85>(0x0000D1, 2); return true;
    // src/system/decomp.asm:150 ASL <DECOMP_TEMP_COMMAND
    case 0xC41AD9: cpu.execute_instruction<0x06>(0x0000D1, 2); return true;
    // src/system/decomp.asm:151 ROR
    case 0xC41ADB: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/decomp.asm:152 ASL <DECOMP_TEMP_COMMAND
    case 0xC41ADC: cpu.execute_instruction<0x06>(0x0000D1, 2); return true;
    // src/system/decomp.asm:153 ROR
    case 0xC41ADE: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/decomp.asm:154 ASL <DECOMP_TEMP_COMMAND
    case 0xC41ADF: cpu.execute_instruction<0x06>(0x0000D1, 2); return true;
    // src/system/decomp.asm:155 ROR
    case 0xC41AE1: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/decomp.asm:156 ASL <DECOMP_TEMP_COMMAND
    case 0xC41AE2: cpu.execute_instruction<0x06>(0x0000D1, 2); return true;
    // src/system/decomp.asm:157 ROR
    case 0xC41AE4: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/decomp.asm:158 ASL <DECOMP_TEMP_COMMAND
    case 0xC41AE5: cpu.execute_instruction<0x06>(0x0000D1, 2); return true;
    // src/system/decomp.asm:159 ROR
    case 0xC41AE7: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/decomp.asm:160 ASL <DECOMP_TEMP_COMMAND
    case 0xC41AE8: cpu.execute_instruction<0x06>(0x0000D1, 2); return true;
    // src/system/decomp.asm:161 ROR
    case 0xC41AEA: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/decomp.asm:162 ASL <DECOMP_TEMP_COMMAND
    case 0xC41AEB: cpu.execute_instruction<0x06>(0x0000D1, 2); return true;
    // src/system/decomp.asm:163 ROR
    case 0xC41AED: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/decomp.asm:164 ASL <DECOMP_TEMP_COMMAND
    case 0xC41AEE: cpu.execute_instruction<0x06>(0x0000D1, 2); return true;
    // src/system/decomp.asm:165 ROR
    case 0xC41AF0: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/decomp.asm:166 STA __BSS_START__,X
    case 0xC41AF1: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/decomp.asm:167 INY
    case 0xC41AF4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:168 INX
    case 0xC41AF5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/decomp.asm:169 REP #PROC_FLAGS::ACCUM8
    case 0xC41AF6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/decomp.asm:170 DEC <DECOMP_TEMP_LENGTH
    case 0xC41AF8: cpu.execute_instruction<0xC6>(0x0000CF, 2); return true;
    // src/system/decomp.asm:171 SEP #PROC_FLAGS::ACCUM8
    case 0xC41AFA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/decomp.asm:172 BNE DECOMP_UNKNOWN14
    case 0xC41AFC: cpu.execute_instruction<0xD0>(0x0000D6, 2); return true;
    // src/system/decomp.asm:173 PLY
    case 0xC41AFE: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/system/decomp.asm:174 JMP DECOMP_UNKNOWN0
    case 0xC41AFF: cpu.execute_instruction<0x4C>(0x001A0D, 3); return true;
    // src/system/decomp.asm:176 LDA __BSS_START__,Y
    case 0xC41B02: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/system/decomp.asm:177 STA __BSS_START__,X
    case 0xC41B05: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/decomp.asm:177 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC41B74.
    case 0xC41B07: cpu.execute_instruction<0x00>(0x000088, 2); return true;
    // src/system/decomp.asm:178 DEY
    case 0xC41B08: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/decomp.asm:179 INX
    case 0xC41B09: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/decomp.asm:180 REP #PROC_FLAGS::ACCUM8
    case 0xC41B0A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/decomp.asm:181 DEC <DECOMP_TEMP_LENGTH
    case 0xC41B0C: cpu.execute_instruction<0xC6>(0x0000CF, 2); return true;
    // src/system/decomp.asm:182 SEP #PROC_FLAGS::ACCUM8
    case 0xC41B0E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/decomp.asm:183 BNE DECOMP_UNKNOWN15
    case 0xC41B10: cpu.execute_instruction<0xD0>(0x0000F0, 2); return true;
    // src/system/decomp.asm:184 PLY
    case 0xC41B12: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/system/decomp.asm:185 JMP DECOMP_UNKNOWN0
    case 0xC41B13: cpu.execute_instruction<0x4C>(0x001A0D, 3); return true;
    // src/system/decomp.asm:187 REP #PROC_FLAGS::ACCUM8
    case 0xC41B16: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/decomp.asm:188 PHD
    case 0xC41B18: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/system/decomp.asm:189 PHA
    case 0xC41B19: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/decomp.asm:190 TDC
    case 0xC41B1A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/system/decomp.asm:191 SEC
    case 0xC41B1B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/decomp.asm:192 SBC #$000C
    case 0xC41B1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000C, 2); else cpu.execute_instruction<0xE9>(0x00000C, 3); return true;
    // src/system/decomp.asm:192 SBC #$000C
    // Overlapping static entry reached from 0xC41B1C.
    case 0xC41B1E: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/system/decomp.asm:193 TCD
    case 0xC41B1F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/decomp.asm:194 PLA
    case 0xC41B20: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/decomp.asm:195 STA $00
    case 0xC41B21: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/system/decomp.asm:196 STX $02
    case 0xC41B23: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/system/decomp.asm:197 STY $04
    case 0xC41B25: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/system/decomp.asm:198 LDA #$00E1
    case 0xC41B27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // src/system/decomp.asm:198 LDA #$00E1
    // Overlapping static entry reached from 0xC41B27.
    case 0xC41B29: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/decomp.asm:199 STA $08
    case 0xC41B2A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/decomp.asm:200 LDA $00
    case 0xC41B2C: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/system/decomp.asm:202 SEC
    case 0xC41B2E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/decomp.asm:203 SBC #$071C
    case 0xC41B2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00001C, 2); else cpu.execute_instruction<0xE9>(0x00071C, 3); return true;
    // src/system/decomp.asm:203 SBC #$071C
    // Overlapping static entry reached from 0xC41B2F.
    case 0xC41B31: cpu.execute_instruction<0x07>(0x000090, 2); return true;
    // src/system/decomp.asm:204 BCC DECOMP_UNKNOWN17
    case 0xC41B32: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // src/system/decomp.asm:204 BCC DECOMP_UNKNOWN17
    // Overlapping static entry reached from 0xC41B31.
    case 0xC41B33: cpu.execute_instruction<0x04>(0x0000E6, 2); return true;
    // src/system/decomp.asm:205 INC $08
    case 0xC41B34: cpu.execute_instruction<0xE6>(0x000008, 2); return true;
    // src/system/decomp.asm:205 INC $08
    // Overlapping static entry reached from 0xC41B33.
    case 0xC41B35: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/decomp.asm:206 BRA DECOMP_UNKNOWN16
    case 0xC41B36: cpu.execute_instruction<0x80>(0x0000F6, 2); return true;
    // src/system/decomp.asm:208 ADC #$071C
    case 0xC41B38: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00071C, 3); return true;
    // src/system/decomp.asm:208 ADC #$071C
    // Overlapping static entry reached from 0xC41B38.
    case 0xC41B3A: cpu.execute_instruction<0x07>(0x000085, 2); return true;
    // src/system/decomp.asm:209 STA $00
    case 0xC41B3B: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/system/decomp.asm:209 STA $00
    // Overlapping static entry reached from 0xC41B3A.
    case 0xC41B3C: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/system/decomp.asm:210 LDA $00
    case 0xC41B3D: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/system/decomp.asm:211 SEP #PROC_FLAGS::ACCUM8
    case 0xC41B3F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/decomp.asm:212 PHA
    case 0xC41B41: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/decomp.asm:213 LDA #$0012
    case 0xC41B42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x00C212, 3); return true;
    // src/system/decomp.asm:214 REP #PROC_FLAGS::ACCUM8
    case 0xC41B44: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/decomp.asm:214 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC41B42.
    case 0xC41B45: cpu.execute_instruction<0x20>(0x00028F, 3); return true;
    // src/system/decomp.asm:215 STA f:WRMPYA
    case 0xC41B46: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/system/decomp.asm:215 STA f:WRMPYA
    // Overlapping static entry reached from 0xC41B45.
    case 0xC41B48: cpu.execute_instruction<0x42>(0x000000, 2); return true;
    // src/system/decomp.asm:216 NOP
    case 0xC41B4A: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/decomp.asm:217 CLC
    case 0xC41B4B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/decomp.asm:218 LDA f:RDMPYL
    case 0xC41B4C: cpu.execute_instruction<0xAF>(0x004216, 4); return true;
    // src/system/decomp.asm:219 TAX
    case 0xC41B50: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/decomp.asm:220 SEP #PROC_FLAGS::ACCUM8
    case 0xC41B51: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/decomp.asm:221 PLA
    case 0xC41B53: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/decomp.asm:222 STA f:WRMPYB
    case 0xC41B54: cpu.execute_instruction<0x8F>(0x004203, 4); return true;
    // src/system/decomp.asm:223 TXA
    case 0xC41B58: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/decomp.asm:224 XBA
    case 0xC41B59: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:225 REP #PROC_FLAGS::ACCUM8
    case 0xC41B5A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/decomp.asm:226 ADC f:RDMPYL
    case 0xC41B5C: cpu.execute_instruction<0x6F>(0x004216, 4); return true;
    // src/system/decomp.asm:227 CLC
    case 0xC41B60: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/decomp.asm:228 ADC #$0000
    case 0xC41B61: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000000, 3); return true;
    // src/system/decomp.asm:228 ADC #$0000
    // Overlapping static entry reached from 0xC41B61.
    case 0xC41B63: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/decomp.asm:229 STA $06
    case 0xC41B64: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/decomp.asm:230 LDY #$0000
    case 0xC41B66: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/decomp.asm:230 LDY #$0000
    // Overlapping static entry reached from 0xC41B66.
    case 0xC41B68: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/system/decomp.asm:231 LDA $04
    case 0xC41B69: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/system/decomp.asm:232 BNE DECOMP_UNKNOWN19
    case 0xC41B6B: cpu.execute_instruction<0xD0>(0x000029, 2); return true;
    // src/system/decomp.asm:233 LDY #$0000
    case 0xC41B6D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/decomp.asm:233 LDY #$0000
    // Overlapping static entry reached from 0xC41B6D.
    case 0xC41B6F: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/system/decomp.asm:235 LDA [$06]
    case 0xC41B70: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:236 AND #$F0FF
    case 0xC41B72: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x00F0FF, 3); return true;
    // src/system/decomp.asm:236 AND #$F0FF
    // Overlapping static entry reached from 0xC41B72.
    case 0xC41B74: cpu.execute_instruction<0xF0>(0x000091, 2); return true;
    // src/system/decomp.asm:237 STA ($02),Y
    case 0xC41B75: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:237 STA ($02),Y
    // Overlapping static entry reached from 0xC41B74.
    case 0xC41B76: cpu.execute_instruction<0x02>(0x0000C8, 2); return true;
    // src/system/decomp.asm:238 INY
    case 0xC41B77: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:239 INY
    case 0xC41B78: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:240 INY
    case 0xC41B79: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:241 INC $06
    case 0xC41B7A: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:242 LDA [$06]
    case 0xC41B7C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:243 XBA
    case 0xC41B7E: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:244 ASL
    case 0xC41B7F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:245 ASL
    case 0xC41B80: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:246 ASL
    case 0xC41B81: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:247 ASL
    case 0xC41B82: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:248 XBA
    case 0xC41B83: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:249 STA ($02),Y
    case 0xC41B84: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:250 INY
    case 0xC41B86: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:251 INY
    case 0xC41B87: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:252 INY
    case 0xC41B88: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:253 INC $06
    case 0xC41B89: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:254 INC $06
    case 0xC41B8B: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:255 CPY #$0024
    case 0xC41B8D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000024, 2); else cpu.execute_instruction<0xC0>(0x000024, 3); return true;
    // src/system/decomp.asm:255 CPY #$0024
    // Overlapping static entry reached from 0xC41B8D.
    case 0xC41B8F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/decomp.asm:256 BCC DECOMP_UNKNOWN18
    case 0xC41B90: cpu.execute_instruction<0x90>(0x0000DE, 2); return true;
    // src/system/decomp.asm:257 PLD
    case 0xC41B92: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/decomp.asm:258 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC41B93: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/decomp.asm:259 RTS
    case 0xC41B95: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/system/decomp.asm:261 DEC
    case 0xC41B96: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/system/decomp.asm:262 BNE DECOMP_UNKNOWN21
    case 0xC41B97: cpu.execute_instruction<0xD0>(0x00002B, 2); return true;
    // src/system/decomp.asm:264 LDA [$06]
    case 0xC41B99: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:265 XBA
    case 0xC41B9B: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:266 LSR
    case 0xC41B9C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:267 AND #$7FF8
    case 0xC41B9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x007FF8, 3); return true;
    // src/system/decomp.asm:267 AND #$7FF8
    // Overlapping static entry reached from 0xC41B9D.
    case 0xC41B9F: cpu.execute_instruction<0x7F>(0x0291EB, 4); return true;
    // src/system/decomp.asm:268 XBA
    case 0xC41BA0: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:269 STA ($02),Y
    case 0xC41BA1: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:270 INY
    case 0xC41BA3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:271 INY
    case 0xC41BA4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:272 INY
    case 0xC41BA5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:273 INC $06
    case 0xC41BA6: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:274 LDA [$06]
    case 0xC41BA8: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:275 XBA
    case 0xC41BAA: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:276 ASL
    case 0xC41BAB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:277 ASL
    case 0xC41BAC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:278 ASL
    case 0xC41BAD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:279 AND #$7FF8
    case 0xC41BAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x007FF8, 3); return true;
    // src/system/decomp.asm:279 AND #$7FF8
    // Overlapping static entry reached from 0xC41BAE.
    case 0xC41BB0: cpu.execute_instruction<0x7F>(0x0291EB, 4); return true;
    // src/system/decomp.asm:280 XBA
    case 0xC41BB1: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:281 STA ($02),Y
    case 0xC41BB2: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:282 INY
    case 0xC41BB4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:283 INY
    case 0xC41BB5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:284 INY
    case 0xC41BB6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:285 INC $06
    case 0xC41BB7: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:286 INC $06
    case 0xC41BB9: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:287 CPY #$0024
    case 0xC41BBB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000024, 2); else cpu.execute_instruction<0xC0>(0x000024, 3); return true;
    // src/system/decomp.asm:287 CPY #$0024
    // Overlapping static entry reached from 0xC41BBB.
    case 0xC41BBD: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/decomp.asm:288 BCC DECOMP_UNKNOWN20
    case 0xC41BBE: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // src/system/decomp.asm:289 PLD
    case 0xC41BC0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/decomp.asm:290 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC41BC1: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/decomp.asm:291 RTS
    case 0xC41BC3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/system/decomp.asm:293 DEC
    case 0xC41BC4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/system/decomp.asm:294 BNE DECOMP_UNKNOWN23
    case 0xC41BC5: cpu.execute_instruction<0xD0>(0x00002B, 2); return true;
    // src/system/decomp.asm:296 LDA [$06]
    case 0xC41BC7: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:297 XBA
    case 0xC41BC9: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:298 LSR
    case 0xC41BCA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:299 LSR
    case 0xC41BCB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:300 AND #$3FFC
    case 0xC41BCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x003FFC, 3); return true;
    // src/system/decomp.asm:300 AND #$3FFC
    // Overlapping static entry reached from 0xC41BCC.
    case 0xC41BCE: cpu.execute_instruction<0x3F>(0x0291EB, 4); return true;
    // src/system/decomp.asm:301 XBA
    case 0xC41BCF: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:302 STA ($02),Y
    case 0xC41BD0: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:303 INY
    case 0xC41BD2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:304 INY
    case 0xC41BD3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:305 INY
    case 0xC41BD4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:306 INC $06
    case 0xC41BD5: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:307 LDA [$06]
    case 0xC41BD7: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:308 XBA
    case 0xC41BD9: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:309 ASL
    case 0xC41BDA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:310 ASL
    case 0xC41BDB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:311 AND #$3FFC
    case 0xC41BDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x003FFC, 3); return true;
    // src/system/decomp.asm:311 AND #$3FFC
    // Overlapping static entry reached from 0xC41BDC.
    case 0xC41BDE: cpu.execute_instruction<0x3F>(0x0291EB, 4); return true;
    // src/system/decomp.asm:312 XBA
    case 0xC41BDF: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:313 STA ($02),Y
    case 0xC41BE0: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:314 INY
    case 0xC41BE2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:315 INY
    case 0xC41BE3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:316 INY
    case 0xC41BE4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:317 INC $06
    case 0xC41BE5: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:318 INC $06
    case 0xC41BE7: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:319 CPY #$0024
    case 0xC41BE9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000024, 2); else cpu.execute_instruction<0xC0>(0x000024, 3); return true;
    // src/system/decomp.asm:319 CPY #$0024
    // Overlapping static entry reached from 0xC41BE9.
    case 0xC41BEB: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/decomp.asm:320 BCC DECOMP_UNKNOWN22
    case 0xC41BEC: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // src/system/decomp.asm:321 PLD
    case 0xC41BEE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/decomp.asm:322 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC41BEF: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/decomp.asm:323 RTS
    case 0xC41BF1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/system/decomp.asm:325 DEC
    case 0xC41BF2: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/system/decomp.asm:326 BNE DECOMP_UNKNOWN25
    case 0xC41BF3: cpu.execute_instruction<0xD0>(0x00002B, 2); return true;
    // src/system/decomp.asm:328 LDA [$06]
    case 0xC41BF5: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:329 XBA
    case 0xC41BF7: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:330 LSR
    case 0xC41BF8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:331 LSR
    case 0xC41BF9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:332 LSR
    case 0xC41BFA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:333 AND #$1FFE
    case 0xC41BFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FE, 2); else cpu.execute_instruction<0x29>(0x001FFE, 3); return true;
    // src/system/decomp.asm:333 AND #$1FFE
    // Overlapping static entry reached from 0xC41BFB.
    case 0xC41BFD: cpu.execute_instruction<0x1F>(0x0291EB, 4); return true;
    // src/system/decomp.asm:334 XBA
    case 0xC41BFE: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:335 STA ($02),Y
    case 0xC41BFF: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:336 INY
    case 0xC41C01: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:337 INY
    case 0xC41C02: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:338 INY
    case 0xC41C03: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:339 INC $06
    case 0xC41C04: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:340 LDA [$06]
    case 0xC41C06: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:341 XBA
    case 0xC41C08: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:342 ASL
    case 0xC41C09: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/decomp.asm:343 AND #$1FFE
    case 0xC41C0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FE, 2); else cpu.execute_instruction<0x29>(0x001FFE, 3); return true;
    // src/system/decomp.asm:343 AND #$1FFE
    // Overlapping static entry reached from 0xC41C0A.
    case 0xC41C0C: cpu.execute_instruction<0x1F>(0x0291EB, 4); return true;
    // src/system/decomp.asm:344 XBA
    case 0xC41C0D: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:345 STA ($02),Y
    case 0xC41C0E: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:346 INY
    case 0xC41C10: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:347 INY
    case 0xC41C11: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:348 INY
    case 0xC41C12: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:349 INC $06
    case 0xC41C13: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:350 INC $06
    case 0xC41C15: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:351 CPY #$0024
    case 0xC41C17: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000024, 2); else cpu.execute_instruction<0xC0>(0x000024, 3); return true;
    // src/system/decomp.asm:351 CPY #$0024
    // Overlapping static entry reached from 0xC41C17.
    case 0xC41C19: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/decomp.asm:352 BCC DECOMP_UNKNOWN24
    case 0xC41C1A: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // src/system/decomp.asm:353 PLD
    case 0xC41C1C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/decomp.asm:354 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC41C1D: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/decomp.asm:355 RTS
    case 0xC41C1F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/system/decomp.asm:357 DEC
    case 0xC41C20: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/system/decomp.asm:358 BNE DECOMP_UNKNOWN27
    case 0xC41C21: cpu.execute_instruction<0xD0>(0x000026, 2); return true;
    // src/system/decomp.asm:360 LDA [$06]
    case 0xC41C23: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:361 XBA
    case 0xC41C25: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:362 LSR
    case 0xC41C26: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:363 LSR
    case 0xC41C27: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:364 LSR
    case 0xC41C28: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:365 LSR
    case 0xC41C29: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:366 XBA
    case 0xC41C2A: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:367 STA ($02),Y
    case 0xC41C2B: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:368 INY
    case 0xC41C2D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:369 INY
    case 0xC41C2E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:370 INY
    case 0xC41C2F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:371 INC $06
    case 0xC41C30: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:372 LDA [$06]
    case 0xC41C32: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:373 AND #$FF0F
    case 0xC41C34: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00FF0F, 3); return true;
    // src/system/decomp.asm:373 AND #$FF0F
    // Overlapping static entry reached from 0xC41C34.
    case 0xC41C36: cpu.execute_instruction<0xFF>(0xC80291, 4); return true;
    // src/system/decomp.asm:374 STA ($02),Y
    case 0xC41C37: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:375 INY
    case 0xC41C39: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:376 INY
    case 0xC41C3A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:377 INY
    case 0xC41C3B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:378 INC $06
    case 0xC41C3C: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:379 INC $06
    case 0xC41C3E: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:380 CPY #$0024
    case 0xC41C40: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000024, 2); else cpu.execute_instruction<0xC0>(0x000024, 3); return true;
    // src/system/decomp.asm:380 CPY #$0024
    // Overlapping static entry reached from 0xC41C40.
    case 0xC41C42: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/decomp.asm:381 BCC DECOMP_UNKNOWN26
    case 0xC41C43: cpu.execute_instruction<0x90>(0x0000DE, 2); return true;
    // src/system/decomp.asm:382 PLD
    case 0xC41C45: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/decomp.asm:383 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC41C46: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/decomp.asm:384 RTS
    case 0xC41C48: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/system/decomp.asm:386 DEC
    case 0xC41C49: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/system/decomp.asm:387 BNE DECOMP_UNKNOWN29
    case 0xC41C4A: cpu.execute_instruction<0xD0>(0x000039, 2); return true;
    // src/system/decomp.asm:389 STZ $0A
    case 0xC41C4C: cpu.execute_instruction<0x64>(0x00000A, 2); return true;
    // src/system/decomp.asm:390 LDA [$06]
    case 0xC41C4E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:391 XBA
    case 0xC41C50: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:392 LSR
    case 0xC41C51: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:393 LSR
    case 0xC41C52: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:394 LSR
    case 0xC41C53: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:395 LSR
    case 0xC41C54: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:396 LSR
    case 0xC41C55: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:397 ROR $0A
    case 0xC41C56: cpu.execute_instruction<0x66>(0x00000A, 2); return true;
    // src/system/decomp.asm:398 XBA
    case 0xC41C58: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:399 STA ($02),Y
    case 0xC41C59: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:400 INY
    case 0xC41C5B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:401 INY
    case 0xC41C5C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:402 LDA $0A
    case 0xC41C5D: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/system/decomp.asm:403 XBA
    case 0xC41C5F: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:404 STA ($02),Y
    case 0xC41C60: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:405 INY
    case 0xC41C62: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:406 INC $06
    case 0xC41C63: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:407 STZ $0A
    case 0xC41C65: cpu.execute_instruction<0x64>(0x00000A, 2); return true;
    // src/system/decomp.asm:408 LDA [$06]
    case 0xC41C67: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:409 XBA
    case 0xC41C69: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:410 LSR
    case 0xC41C6A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:411 ROR $0A
    case 0xC41C6B: cpu.execute_instruction<0x66>(0x00000A, 2); return true;
    // src/system/decomp.asm:412 XBA
    case 0xC41C6D: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:413 STA ($02),Y
    case 0xC41C6E: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:414 INY
    case 0xC41C70: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:415 INY
    case 0xC41C71: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:416 LDA $0A
    case 0xC41C72: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/system/decomp.asm:417 XBA
    case 0xC41C74: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:418 STA ($02),Y
    case 0xC41C75: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:419 INY
    case 0xC41C77: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:420 INC $06
    case 0xC41C78: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:421 INC $06
    case 0xC41C7A: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:422 CPY #$0024
    case 0xC41C7C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000024, 2); else cpu.execute_instruction<0xC0>(0x000024, 3); return true;
    // src/system/decomp.asm:422 CPY #$0024
    // Overlapping static entry reached from 0xC41C7C.
    case 0xC41C7E: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/decomp.asm:423 BCC DECOMP_UNKNOWN28
    case 0xC41C7F: cpu.execute_instruction<0x90>(0x0000CB, 2); return true;
    // src/system/decomp.asm:424 PLD
    case 0xC41C81: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/decomp.asm:425 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC41C82: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/decomp.asm:426 RTS
    case 0xC41C84: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/system/decomp.asm:428 DEC
    case 0xC41C85: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/system/decomp.asm:429 BNE DECOMP_UNKNOWN31
    case 0xC41C86: cpu.execute_instruction<0xD0>(0x00003D, 2); return true;
    // src/system/decomp.asm:431 LDA [$06]
    case 0xC41C88: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:432 XBA
    case 0xC41C8A: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:433 STA $0A
    case 0xC41C8B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/system/decomp.asm:434 LDA #$0000
    case 0xC41C8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/decomp.asm:434 LDA #$0000
    // Overlapping static entry reached from 0xC41C8D.
    case 0xC41C8F: cpu.execute_instruction<0x00>(0x000006, 2); return true;
    // src/system/decomp.asm:435 ASL $0A
    case 0xC41C90: cpu.execute_instruction<0x06>(0x00000A, 2); return true;
    // src/system/decomp.asm:436 ROL
    case 0xC41C92: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/system/decomp.asm:437 ASL $0A
    case 0xC41C93: cpu.execute_instruction<0x06>(0x00000A, 2); return true;
    // src/system/decomp.asm:438 ROL
    case 0xC41C95: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/system/decomp.asm:439 STA ($02),Y
    case 0xC41C96: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:440 INY
    case 0xC41C98: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:441 LDA $0A
    case 0xC41C99: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/system/decomp.asm:442 XBA
    case 0xC41C9B: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:443 STA ($02),Y
    case 0xC41C9C: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:444 INY
    case 0xC41C9E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:445 INY
    case 0xC41C9F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:446 INC $06
    case 0xC41CA0: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:447 STZ $0A
    case 0xC41CA2: cpu.execute_instruction<0x64>(0x00000A, 2); return true;
    // src/system/decomp.asm:448 LDA [$06]
    case 0xC41CA4: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:449 XBA
    case 0xC41CA6: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:450 LSR
    case 0xC41CA7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:451 ROR $0A
    case 0xC41CA8: cpu.execute_instruction<0x66>(0x00000A, 2); return true;
    // src/system/decomp.asm:452 LSR
    case 0xC41CAA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:453 ROR $0A
    case 0xC41CAB: cpu.execute_instruction<0x66>(0x00000A, 2); return true;
    // src/system/decomp.asm:454 XBA
    case 0xC41CAD: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:455 STA ($02),Y
    case 0xC41CAE: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:456 INY
    case 0xC41CB0: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:457 INY
    case 0xC41CB1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:458 LDA $0A
    case 0xC41CB2: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/system/decomp.asm:459 XBA
    case 0xC41CB4: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:460 STA ($02),Y
    case 0xC41CB5: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:461 INY
    case 0xC41CB7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:462 INC $06
    case 0xC41CB8: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:463 INC $06
    case 0xC41CBA: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:464 CPY #$0024
    case 0xC41CBC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000024, 2); else cpu.execute_instruction<0xC0>(0x000024, 3); return true;
    // src/system/decomp.asm:464 CPY #$0024
    // Overlapping static entry reached from 0xC41CBC.
    case 0xC41CBE: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/decomp.asm:465 BCC DECOMP_UNKNOWN30
    case 0xC41CBF: cpu.execute_instruction<0x90>(0x0000C7, 2); return true;
    // src/system/decomp.asm:466 PLD
    case 0xC41CC1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/decomp.asm:467 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC41CC2: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/decomp.asm:468 RTS
    case 0xC41CC4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/system/decomp.asm:470 LDA [$06]
    case 0xC41CC5: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:471 XBA
    case 0xC41CC7: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:472 STA $0A
    case 0xC41CC8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/system/decomp.asm:473 LDA #$0000
    case 0xC41CCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/decomp.asm:473 LDA #$0000
    // Overlapping static entry reached from 0xC41CCA.
    case 0xC41CCC: cpu.execute_instruction<0x00>(0x000006, 2); return true;
    // src/system/decomp.asm:474 ASL $0A
    case 0xC41CCD: cpu.execute_instruction<0x06>(0x00000A, 2); return true;
    // src/system/decomp.asm:475 ROL
    case 0xC41CCF: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/system/decomp.asm:476 STA ($02),Y
    case 0xC41CD0: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:477 INY
    case 0xC41CD2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:478 LDA $0A
    case 0xC41CD3: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/system/decomp.asm:479 XBA
    case 0xC41CD5: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:480 STA ($02),Y
    case 0xC41CD6: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:481 INY
    case 0xC41CD8: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:482 INY
    case 0xC41CD9: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:483 INC $06
    case 0xC41CDA: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:484 STZ $0A
    case 0xC41CDC: cpu.execute_instruction<0x64>(0x00000A, 2); return true;
    // src/system/decomp.asm:485 LDA [$06]
    case 0xC41CDE: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/decomp.asm:486 XBA
    case 0xC41CE0: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:487 LSR
    case 0xC41CE1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:488 ROR $0A
    case 0xC41CE2: cpu.execute_instruction<0x66>(0x00000A, 2); return true;
    // src/system/decomp.asm:489 LSR
    case 0xC41CE4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:490 ROR $0A
    case 0xC41CE5: cpu.execute_instruction<0x66>(0x00000A, 2); return true;
    // src/system/decomp.asm:491 LSR
    case 0xC41CE7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/decomp.asm:492 ROR $0A
    case 0xC41CE8: cpu.execute_instruction<0x66>(0x00000A, 2); return true;
    // src/system/decomp.asm:493 XBA
    case 0xC41CEA: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:494 STA ($02),Y
    case 0xC41CEB: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:495 INY
    case 0xC41CED: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:496 INY
    case 0xC41CEE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:497 LDA $0A
    case 0xC41CEF: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/system/decomp.asm:498 XBA
    case 0xC41CF1: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/decomp.asm:499 STA ($02),Y
    case 0xC41CF2: cpu.execute_instruction<0x91>(0x000002, 2); return true;
    // src/system/decomp.asm:500 INY
    case 0xC41CF4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/decomp.asm:501 INC $06
    case 0xC41CF5: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:502 INC $06
    case 0xC41CF7: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/decomp.asm:503 CPY #$0024
    case 0xC41CF9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000024, 2); else cpu.execute_instruction<0xC0>(0x000024, 3); return true;
    // src/system/decomp.asm:503 CPY #$0024
    // Overlapping static entry reached from 0xC41CF9.
    case 0xC41CFB: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/decomp.asm:504 BCC DECOMP_UNKNOWN31
    case 0xC41CFC: cpu.execute_instruction<0x90>(0x0000C7, 2); return true;
    // src/system/decomp.asm:505 PLD
    case 0xC41CFE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/decomp.asm:506 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC41CFF: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/decomp.asm:507 RTS
    case 0xC41D01: cpu.execute_instruction<0x60>(0x000000, 1); return true;
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
    case 0xC30106: cpu.execute_instruction<0xFF>(0x9D225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/display_antipiracy_screen.asm:7 END_STACK_VARS
    case 0xC30107: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/display_antipiracy_screen.asm:8 JSL UNKNOWN_C40B51
    case 0xC30108: cpu.execute_instruction<0x22>(0xC40A9D, 4); return true;
    // src/system/display_antipiracy_screen.asm:8 JSL UNKNOWN_C40B51
    // Overlapping static entry reached from 0xC30106.
    case 0xC3010A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/display_antipiracy_screen.asm:8 JSL UNKNOWN_C40B51
    // Overlapping static entry reached from 0xC3010A.
    case 0xC3010B: cpu.execute_instruction<0xC4>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_antipiracy_screen.asm:9 LOADPTR ANTI_PIRACY_NOTICE_GRAPHICS, @LOCAL00
    case 0xC3010C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000036, 2); else cpu.execute_instruction<0xA9>(0x00F336, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_antipiracy_screen.asm:9 LOADPTR ANTI_PIRACY_NOTICE_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC3010B.
    case 0xC3010D: cpu.execute_instruction<0x36>(0x0000F3, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_antipiracy_screen.asm:9 LOADPTR ANTI_PIRACY_NOTICE_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC3010C.
    case 0xC3010E: cpu.execute_instruction<0xF3>(0x000085, 2); return true;
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
    case 0xC30120: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
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
    case 0xC30138: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/system/display_antipiracy_screen.asm:15 JSL UNKNOWN_C40B75
    case 0xC3013C: cpu.execute_instruction<0x22>(0xC40AC1, 4); return true;
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
    case 0xC30148: cpu.execute_instruction<0xFF>(0x9D225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:7 END_STACK_VARS
    case 0xC30149: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/display_faulty_gamepak_screen.asm:8 JSL UNKNOWN_C40B51
    case 0xC3014A: cpu.execute_instruction<0x22>(0xC40A9D, 4); return true;
    // src/system/display_faulty_gamepak_screen.asm:8 JSL UNKNOWN_C40B51
    // Overlapping static entry reached from 0xC30148.
    case 0xC3014C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/display_faulty_gamepak_screen.asm:8 JSL UNKNOWN_C40B51
    // Overlapping static entry reached from 0xC3014C.
    case 0xC3014D: cpu.execute_instruction<0xC4>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:9 LOADPTR FAULTY_GAME_PAK_GRAPHICS, @LOCAL00
    case 0xC3014E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D4, 2); else cpu.execute_instruction<0xA9>(0x00FAD4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:9 LOADPTR FAULTY_GAME_PAK_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC3014D.
    case 0xC3014F: cpu.execute_instruction<0xD4>(0x0000FA, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:9 LOADPTR FAULTY_GAME_PAK_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC3014E.
    case 0xC30150: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:9 LOADPTR FAULTY_GAME_PAK_GRAPHICS, @LOCAL00
    case 0xC30151: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
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
    case 0xC30162: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:12 LOADPTR FAULTY_GAME_PAK_ARRANGEMENT, @LOCAL00
    case 0xC30166: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D6, 2); else cpu.execute_instruction<0xA9>(0x00F8D6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:12 LOADPTR FAULTY_GAME_PAK_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC30166.
    case 0xC30168: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/display_faulty_gamepak_screen.asm:12 LOADPTR FAULTY_GAME_PAK_ARRANGEMENT, @LOCAL00
    case 0xC30169: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
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
    case 0xC3017A: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/system/display_faulty_gamepak_screen.asm:15 JSL UNKNOWN_C40B75
    case 0xC3017E: cpu.execute_instruction<0x22>(0xC40AC1, 4); return true;
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
    case 0xC0870E: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/enable_nmi_joypad.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC0870F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/enable_nmi_joypad.asm:5 LDA NMITIMEN_MIRROR
    case 0xC08711: cpu.execute_instruction<0xAD>(0x00001E, 3); return true;
    // src/system/enable_nmi_joypad.asm:6 ORA #$0081
    case 0xC08714: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000081, 2); else cpu.execute_instruction<0x09>(0x008D81, 3); return true;
    // src/system/enable_nmi_joypad.asm:7 STA NMITIMEN_MIRROR
    case 0xC08716: cpu.execute_instruction<0x8D>(0x00001E, 3); return true;
    // src/system/enable_nmi_joypad.asm:7 STA NMITIMEN_MIRROR
    // Overlapping static entry reached from 0xC08714.
    case 0xC08717: cpu.execute_instruction<0x1E>(0x008F00, 3); return true;
    // src/system/enable_nmi_joypad.asm:8 STA f:NMITIMEN
    case 0xC08719: cpu.execute_instruction<0x8F>(0x004200, 4); return true;
    // src/system/enable_nmi_joypad.asm:8 STA f:NMITIMEN
    // Overlapping static entry reached from 0xC08717.
    case 0xC0871A: cpu.execute_instruction<0x00>(0x000042, 2); return true;
    // src/system/enable_nmi_joypad.asm:9 PLP
    case 0xC0871D: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/enable_nmi_joypad.asm:10 RTL
    case 0xC0871E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
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
    case 0xC0885E: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/fade_in.asm:4 SEP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0885F: cpu.execute_instruction<0xE2>(0x000030, 2); return true;
    // src/system/fade_in.asm:5 STA FADE_PARAMETERS + fade_parameters::step
    case 0xC08861: cpu.execute_instruction<0x8D>(0x000028, 3); return true;
    // src/system/fade_in.asm:6 STX FADE_PARAMETERS + fade_parameters::delay
    case 0xC08864: cpu.execute_instruction<0x8E>(0x000029, 3); return true;
    // src/system/fade_in.asm:7 STX FADE_DELAY_FRAMES_LEFT
    case 0xC08867: cpu.execute_instruction<0x8E>(0x00002A, 3); return true;
    // src/system/fade_in.asm:8 PLP
    case 0xC0886A: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/fade_in.asm:9 RTL
    case 0xC0886B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/fade_in_with_mosaic.asm (source_named).
bool execute_system_fade_in_with_mosaic_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/fade_in_with_mosaic.asm:3 PHP
    case 0xC087C4: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/fade_in_with_mosaic.asm:4 REP #PROC_FLAGS::ACCUM8
    case 0xC087C5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/fade_in_with_mosaic.asm:5 PHD
    case 0xC087C7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/system/fade_in_with_mosaic.asm:6 PHA
    case 0xC087C8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/fade_in_with_mosaic.asm:7 TDC
    case 0xC087C9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/system/fade_in_with_mosaic.asm:8 SEC
    case 0xC087CA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/fade_in_with_mosaic.asm:9 SBC #$0006
    case 0xC087CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000006, 2); else cpu.execute_instruction<0xE9>(0x000006, 3); return true;
    // src/system/fade_in_with_mosaic.asm:9 SBC #$0006
    // Overlapping static entry reached from 0xC087CB.
    case 0xC087CD: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/system/fade_in_with_mosaic.asm:10 TCD
    case 0xC087CE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/fade_in_with_mosaic.asm:11 PLA
    case 0xC087CF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/fade_in_with_mosaic.asm:12 STZ FADE_PARAMETERS
    case 0xC087D0: cpu.execute_instruction<0x9C>(0x000028, 3); return true;
    // src/system/fade_in_with_mosaic.asm:13 STA $00
    case 0xC087D3: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/system/fade_in_with_mosaic.asm:14 STX $02
    case 0xC087D5: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/system/fade_in_with_mosaic.asm:15 STY $04
    case 0xC087D7: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/system/fade_in_with_mosaic.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC087D9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/fade_in_with_mosaic.asm:17 STZ INIDISP_MIRROR
    case 0xC087DB: cpu.execute_instruction<0x9C>(0x00000D, 3); return true;
    // src/system/fade_in_with_mosaic.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC087DE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/fade_in_with_mosaic.asm:20 STZ MOSAIC_MIRROR
    case 0xC087E0: cpu.execute_instruction<0x9C>(0x000010, 3); return true;
    // src/system/fade_in_with_mosaic.asm:21 LDA INIDISP_MIRROR
    case 0xC087E3: cpu.execute_instruction<0xAD>(0x00000D, 3); return true;
    // src/system/fade_in_with_mosaic.asm:22 CLC
    case 0xC087E6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/fade_in_with_mosaic.asm:23 ADC $00
    case 0xC087E7: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/system/fade_in_with_mosaic.asm:24 CMP #$000F
    case 0xC087E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000F, 2); else cpu.execute_instruction<0xC9>(0x00C20F, 3); return true;
    // src/system/fade_in_with_mosaic.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC087EB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/fade_in_with_mosaic.asm:25 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC087E9.
    case 0xC087EC: cpu.execute_instruction<0x20>(0x0012B0, 3); return true;
    // src/system/fade_in_with_mosaic.asm:26 BCS @UNKNOWN2
    case 0xC087ED: cpu.execute_instruction<0xB0>(0x000012, 2); return true;
    // src/system/fade_in_with_mosaic.asm:27 JSR SET_INIDISP
    case 0xC087EF: cpu.execute_instruction<0x20>(0x008793, 3); return true;
    // src/system/fade_in_with_mosaic.asm:28 LDA $04
    case 0xC087F2: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/system/fade_in_with_mosaic.asm:29 BEQ @UNKNOWN1
    case 0xC087F4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/system/fade_in_with_mosaic.asm:30 JSR UNKNOWN_C087AB
    case 0xC087F6: cpu.execute_instruction<0x20>(0x0087A1, 3); return true;
    // src/system/fade_in_with_mosaic.asm:32 LDA $02
    case 0xC087F9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/fade_in_with_mosaic.asm:33 JSL UNKNOWN_C0878B
    case 0xC087FB: cpu.execute_instruction<0x22>(0xC08781, 4); return true;
    // src/system/fade_in_with_mosaic.asm:34 BRA @UNKNOWN0
    case 0xC087FF: cpu.execute_instruction<0x80>(0x0000DD, 2); return true;
    // src/system/fade_in_with_mosaic.asm:36 LDA #$000F
    case 0xC08801: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00000F, 3); return true;
    // src/system/fade_in_with_mosaic.asm:36 LDA #$000F
    // Overlapping static entry reached from 0xC08801.
    case 0xC08803: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/system/fade_in_with_mosaic.asm:37 JSR SET_INIDISP
    case 0xC08804: cpu.execute_instruction<0x20>(0x008793, 3); return true;
    // src/system/fade_in_with_mosaic.asm:38 PLD
    case 0xC08807: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/fade_in_with_mosaic.asm:39 PLP
    case 0xC08808: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/fade_in_with_mosaic.asm:40 RTL
    case 0xC08809: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/fade_out.asm (source_named).
bool execute_system_fade_out_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/fade_out.asm:3 PHP
    case 0xC0886C: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/fade_out.asm:4 SEP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0886D: cpu.execute_instruction<0xE2>(0x000030, 2); return true;
    // src/system/fade_out.asm:5 EOR #$00FF
    case 0xC0886F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x001AFF, 3); return true;
    // src/system/fade_out.asm:6 INC
    case 0xC08871: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/fade_out.asm:7 STA FADE_PARAMETERS + fade_parameters::step
    case 0xC08872: cpu.execute_instruction<0x8D>(0x000028, 3); return true;
    // src/system/fade_out.asm:8 STX FADE_PARAMETERS + fade_parameters::delay
    case 0xC08875: cpu.execute_instruction<0x8E>(0x000029, 3); return true;
    // src/system/fade_out.asm:9 STX FADE_DELAY_FRAMES_LEFT
    case 0xC08878: cpu.execute_instruction<0x8E>(0x00002A, 3); return true;
    // src/system/fade_out.asm:10 PLP
    case 0xC0887B: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/fade_out.asm:11 RTL
    case 0xC0887C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/fade_out_with_mosaic.asm (source_named).
bool execute_system_fade_out_with_mosaic_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/fade_out_with_mosaic.asm:3 PHP
    case 0xC0880A: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/fade_out_with_mosaic.asm:4 REP #PROC_FLAGS::ACCUM8
    case 0xC0880B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/fade_out_with_mosaic.asm:5 PHD
    case 0xC0880D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/system/fade_out_with_mosaic.asm:6 PHA
    case 0xC0880E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/fade_out_with_mosaic.asm:7 TDC
    case 0xC0880F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/system/fade_out_with_mosaic.asm:8 SEC
    case 0xC08810: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/fade_out_with_mosaic.asm:9 SBC #$0006
    case 0xC08811: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000006, 2); else cpu.execute_instruction<0xE9>(0x000006, 3); return true;
    // src/system/fade_out_with_mosaic.asm:9 SBC #$0006
    // Overlapping static entry reached from 0xC08811.
    case 0xC08813: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/system/fade_out_with_mosaic.asm:10 TCD
    case 0xC08814: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/fade_out_with_mosaic.asm:11 PLA
    case 0xC08815: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/fade_out_with_mosaic.asm:12 STZ FADE_PARAMETERS
    case 0xC08816: cpu.execute_instruction<0x9C>(0x000028, 3); return true;
    // src/system/fade_out_with_mosaic.asm:13 STA $00
    case 0xC08819: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/system/fade_out_with_mosaic.asm:14 STX $02
    case 0xC0881B: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/system/fade_out_with_mosaic.asm:15 STY $04
    case 0xC0881D: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/system/fade_out_with_mosaic.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC0881F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/fade_out_with_mosaic.asm:18 STZ MOSAIC_MIRROR
    case 0xC08821: cpu.execute_instruction<0x9C>(0x000010, 3); return true;
    // src/system/fade_out_with_mosaic.asm:19 LDA INIDISP_MIRROR
    case 0xC08824: cpu.execute_instruction<0xAD>(0x00000D, 3); return true;
    // src/system/fade_out_with_mosaic.asm:24 SEC
    case 0xC08827: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/fade_out_with_mosaic.asm:25 SBC $00
    case 0xC08828: cpu.execute_instruction<0xE5>(0x000000, 2); return true;
    // src/system/fade_out_with_mosaic.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC0882A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/fade_out_with_mosaic.asm:27 BMI @UNKNOWN2
    case 0xC0882C: cpu.execute_instruction<0x30>(0x000012, 2); return true;
    // src/system/fade_out_with_mosaic.asm:28 JSR SET_INIDISP
    case 0xC0882E: cpu.execute_instruction<0x20>(0x008793, 3); return true;
    // src/system/fade_out_with_mosaic.asm:29 LDA $04
    case 0xC08831: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/system/fade_out_with_mosaic.asm:30 BEQ @UNKNOWN1
    case 0xC08833: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/system/fade_out_with_mosaic.asm:31 JSR UNKNOWN_C087AB
    case 0xC08835: cpu.execute_instruction<0x20>(0x0087A1, 3); return true;
    // src/system/fade_out_with_mosaic.asm:33 LDA $02
    case 0xC08838: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/fade_out_with_mosaic.asm:34 JSL UNKNOWN_C0878B
    case 0xC0883A: cpu.execute_instruction<0x22>(0xC08781, 4); return true;
    // src/system/fade_out_with_mosaic.asm:35 BRA @UNKNOWN0
    case 0xC0883E: cpu.execute_instruction<0x80>(0x0000DF, 2); return true;
    // src/system/fade_out_with_mosaic.asm:41 LDA #$0080
    case 0xC08840: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000080, 3); return true;
    // src/system/fade_out_with_mosaic.asm:41 LDA #$0080
    // Overlapping static entry reached from 0xC08840.
    case 0xC08842: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/system/fade_out_with_mosaic.asm:42 JSR SET_INIDISP
    case 0xC08843: cpu.execute_instruction<0x20>(0x008793, 3); return true;
    // src/system/fade_out_with_mosaic.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC08846: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/fade_out_with_mosaic.asm:44 STZ HDMAEN_MIRROR
    case 0xC08848: cpu.execute_instruction<0x9C>(0x00001F, 3); return true;
    // src/system/fade_out_with_mosaic.asm:45 STZ NEW_FRAME_STARTED
    case 0xC0884B: cpu.execute_instruction<0x9C>(0x00002B, 3); return true;
    // src/system/fade_out_with_mosaic.asm:47 LDA NEW_FRAME_STARTED
    case 0xC0884E: cpu.execute_instruction<0xAD>(0x00002B, 3); return true;
    // src/system/fade_out_with_mosaic.asm:48 BEQ @UNKNOWN3
    case 0xC08851: cpu.execute_instruction<0xF0>(0x0000FB, 2); return true;
    // src/system/fade_out_with_mosaic.asm:49 LDA #$0000
    case 0xC08853: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/system/fade_out_with_mosaic.asm:50 STA f:HDMAEN
    case 0xC08855: cpu.execute_instruction<0x8F>(0x00420C, 4); return true;
    // src/system/fade_out_with_mosaic.asm:50 STA f:HDMAEN
    // Overlapping static entry reached from 0xC08853.
    case 0xC08856: cpu.execute_instruction<0x0C>(0x000042, 3); return true;
    // src/system/fade_out_with_mosaic.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC08859: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/fade_out_with_mosaic.asm:52 PLD
    case 0xC0885B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/fade_out_with_mosaic.asm:53 PLP
    case 0xC0885C: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/fade_out_with_mosaic.asm:54 RTL
    case 0xC0885D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/file_select_init.asm (source_named).
bool execute_system_file_select_init_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/file_select_init.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0B504: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/file_select_init.asm:7 END_STACK_VARS
    case 0xC0B506: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/file_select_init.asm:7 END_STACK_VARS
    case 0xC0B507: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/file_select_init.asm:7 END_STACK_VARS
    case 0xC0B508: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/file_select_init.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0B508.
    case 0xC0B50A: cpu.execute_instruction<0xFF>(0x1F225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/file_select_init.asm:7 END_STACK_VARS
    case 0xC0B50B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/file_select_init.asm:8 JSL UNKNOWN_C08726
    case 0xC0B50C: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/system/file_select_init.asm:8 JSL UNKNOWN_C08726
    // Overlapping static entry reached from 0xC0B50A.
    case 0xC0B50E: cpu.execute_instruction<0x87>(0x0000C0, 2); return true;
    // src/system/file_select_init.asm:9 JSL UNKNOWN_C0927C
    case 0xC0B510: cpu.execute_instruction<0x22>(0xC0925E, 4); return true;
    // src/system/file_select_init.asm:10 JSL OAM_CLEAR
    case 0xC0B514: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/system/file_select_init.asm:11 JSL UPDATE_SCREEN
    case 0xC0B518: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/system/file_select_init.asm:12 JSL UNKNOWN_C01A86
    case 0xC0B51C: cpu.execute_instruction<0x22>(0xC01A9C, 4); return true;
    // src/system/file_select_init.asm:13 LDX #0
    case 0xC0B520: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/file_select_init.asm:13 LDX #0
    // Overlapping static entry reached from 0xC0B520.
    case 0xC0B522: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/system/file_select_init.asm:14 LDA #$8000
    case 0xC0B523: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/system/file_select_init.asm:14 LDA #$8000
    // Overlapping static entry reached from 0xC0B523.
    case 0xC0B525: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/system/file_select_init.asm:15 JSL ALLOC_SPRITE_MEM
    case 0xC0B526: cpu.execute_instruction<0x22>(0xC01C27, 4); return true;
    // src/system/file_select_init.asm:16 JSL INITIALIZE_MISC_OBJECT_DATA
    case 0xC0B52A: cpu.execute_instruction<0x22>(0xC01A7F, 4); return true;
    // src/system/file_select_init.asm:17 JSL OVERWORLD_SETUP_VRAM
    case 0xC0B52E: cpu.execute_instruction<0x22>(0xC00013, 4); return true;
    // src/system/file_select_init.asm:18 JSL UNKNOWN_C432B1
    case 0xC0B532: cpu.execute_instruction<0x22>(0xC4302A, 4); return true;
    // src/system/file_select_init.asm:19 JSL PREPARE_AVERAGE_FOR_SPRITE_PALETTES
    case 0xC0B536: cpu.execute_instruction<0x22>(0xC005F7, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/file_select_init.asm:20 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC0B53A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/file_select_init.asm:20 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC0B53A.
    case 0xC0B53C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/file_select_init.asm:20 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC0B53D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/file_select_init.asm:20 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC0B53F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/file_select_init.asm:20 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC0B53F.
    case 0xC0B541: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/file_select_init.asm:20 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC0B542: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/file_select_init.asm:21 LDX #BPP4PALETTE_SIZE * 8
    case 0xC0B544: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/system/file_select_init.asm:21 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC0B544.
    case 0xC0B546: cpu.execute_instruction<0x01>(0x0000A9, 2); return true;
    // src/system/file_select_init.asm:22 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC0B547: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000300, 3); return true;
    // src/system/file_select_init.asm:22 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC0B546.
    case 0xC0B548: cpu.execute_instruction<0x00>(0x000003, 2); return true;
    // src/system/file_select_init.asm:22 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC0B547.
    case 0xC0B549: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/system/file_select_init.asm:23 JSL MEMCPY16
    case 0xC0B54A: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/system/file_select_init.asm:23 JSL MEMCPY16
    // Overlapping static entry reached from 0xC0B549.
    case 0xC0B54B: cpu.execute_instruction<0xC3>(0x00008E, 2); return true;
    // src/system/file_select_init.asm:23 JSL MEMCPY16
    // Overlapping static entry reached from 0xC0B54B.
    case 0xC0B54D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x00D922, 3); return true;
    // src/system/file_select_init.asm:24 JSL UNKNOWN_C200D9
    case 0xC0B54E: cpu.execute_instruction<0x22>(0xC200D9, 4); return true;
    // src/system/file_select_init.asm:24 JSL UNKNOWN_C200D9
    // Overlapping static entry reached from 0xC0B54D.
    case 0xC0B54F: cpu.execute_instruction<0xD9>(0x00C200, 3); return true;
    // src/system/file_select_init.asm:24 JSL UNKNOWN_C200D9
    // Overlapping static entry reached from 0xC0B54D.
    case 0xC0B550: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/file_select_init.asm:25 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0B552: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/file_select_init.asm:25 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC0B552.
    case 0xC0B554: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/file_select_init.asm:25 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0B555: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/file_select_init.asm:25 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0B557: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/file_select_init.asm:25 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC0B557.
    case 0xC0B559: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/file_select_init.asm:25 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0B55A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/file_select_init.asm:26 LDA #0
    case 0xC0B55C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/file_select_init.asm:26 LDA #0
    // Overlapping static entry reached from 0xC0B55C.
    case 0xC0B55E: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/system/file_select_init.asm:27 STA [@VIRTUAL06]
    case 0xC0B55F: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    case 0xC0B561: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    case 0xC0B563: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    case 0xC0B565: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    case 0xC0B567: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    case 0xC0B569: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    // Overlapping static entry reached from 0xC0B569.
    case 0xC0B56B: cpu.execute_instruction<0x7C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    case 0xC0B56C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    // Overlapping static entry reached from 0xC0B56C.
    case 0xC0B56E: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    case 0xC0B56F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    case 0xC0B571: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    case 0xC0B573: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    // Overlapping static entry reached from 0xC0B571.
    case 0xC0B574: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/system/file_select_init.asm:28 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILEMAP, $800, 3
    // Overlapping static entry reached from 0xC0B574.
    case 0xC0B576: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/file_select_init.asm:30 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC0B577: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/file_select_init.asm:30 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC0B576.
    case 0xC0B578: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/file_select_init.asm:30 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC0B577.
    case 0xC0B579: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/file_select_init.asm:30 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC0B57A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/file_select_init.asm:30 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC0B57C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/file_select_init.asm:30 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC0B57C.
    case 0xC0B57E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/file_select_init.asm:30 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC0B57F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/file_select_init.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0B581: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/file_select_init.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0B583: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/file_select_init.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0B585: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/file_select_init.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0B587: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/file_select_init.asm:32 JSL DECOMP
    case 0xC0B589: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/file_select_init.asm:35 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC0B58D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/file_select_init.asm:35 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC0B58F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/file_select_init.asm:35 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC0B591: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/file_select_init.asm:35 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC0B593: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/system/file_select_init.asm:35 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC0B595: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/system/file_select_init.asm:35 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 0
    // Overlapping static entry reached from 0xC0B595.
    case 0xC0B597: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/system/file_select_init.asm:35 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC0B598: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/system/file_select_init.asm:35 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 0
    // Overlapping static entry reached from 0xC0B598.
    case 0xC0B59A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/system/file_select_init.asm:35 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC0B59B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/system/file_select_init.asm:35 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC0B59D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/system/file_select_init.asm:35 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 0
    case 0xC0B59F: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/system/file_select_init.asm:35 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 0
    // Overlapping static entry reached from 0xC0B59D.
    case 0xC0B5A0: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/system/file_select_init.asm:35 COPY_TO_VRAM1P @VIRTUAL06, VRAM::TEXT_LAYER_TILES, $3800, 0
    // Overlapping static entry reached from 0xC0B5A0.
    case 0xC0B5A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x001DA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/file_select_init.asm:45 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @LOCAL00
    case 0xC0B5A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001D, 2); else cpu.execute_instruction<0xA9>(0x001F1D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/file_select_init.asm:45 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC0B5A2.
    case 0xC0B5A4: cpu.execute_instruction<0x1D>(0x00851F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/file_select_init.asm:45 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC0B5A3.
    case 0xC0B5A5: cpu.execute_instruction<0x1F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/file_select_init.asm:45 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @LOCAL00
    case 0xC0B5A6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/file_select_init.asm:45 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC0B5A4.
    case 0xC0B5A7: cpu.execute_instruction<0x0E>(0x00E0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/file_select_init.asm:45 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @LOCAL00
    case 0xC0B5A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/file_select_init.asm:45 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC0B5A5.
    case 0xC0B5A9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/file_select_init.asm:45 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC0B5A8.
    case 0xC0B5AA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/file_select_init.asm:45 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @LOCAL00
    case 0xC0B5AB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/file_select_init.asm:45 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC0B5A9.
    case 0xC0B5AC: cpu.execute_instruction<0x10>(0x0000A2, 2); return true;
    // src/system/file_select_init.asm:46 LDX #BPP4PALETTE_SIZE * 2
    case 0xC0B5AD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // src/system/file_select_init.asm:46 LDX #BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC0B5AC.
    case 0xC0B5AE: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/system/file_select_init.asm:46 LDX #BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC0B5AD.
    case 0xC0B5AF: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/system/file_select_init.asm:47 LDA #.LOWORD(PALETTES)
    case 0xC0B5B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/system/file_select_init.asm:47 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0B5B0.
    case 0xC0B5B2: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/system/file_select_init.asm:48 JSL MEMCPY16
    case 0xC0B5B3: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/system/file_select_init.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B5B7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/file_select_init.asm:50 LDA #PALETTE_UPLOAD::FULL
    case 0xC0B5B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/system/file_select_init.asm:51 STA PALETTE_UPLOAD_MODE
    case 0xC0B5BB: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/system/file_select_init.asm:51 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0B5B9.
    case 0xC0B5BC: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/system/file_select_init.asm:52 LDX #0
    case 0xC0B5BE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/file_select_init.asm:52 LDX #0
    // Overlapping static entry reached from 0xC0B5BE.
    case 0xC0B5C0: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/system/file_select_init.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC0B5C1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/file_select_init.asm:54 LDA #BATTLEBG_LAYER::FILE_SELECT
    case 0xC0B5C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E6, 2); else cpu.execute_instruction<0xA9>(0x0000E6, 3); return true;
    // src/system/file_select_init.asm:54 LDA #BATTLEBG_LAYER::FILE_SELECT
    // Overlapping static entry reached from 0xC0B5C3.
    case 0xC0B5C5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/file_select_init.asm:55 JSL LOAD_BACKGROUND_ANIMATION
    case 0xC0B5C6: cpu.execute_instruction<0x22>(0xC450F4, 4); return true;
    // src/system/file_select_init.asm:56 LDA #23
    case 0xC0B5CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/system/file_select_init.asm:56 LDA #23
    // Overlapping static entry reached from 0xC0B5CA.
    case 0xC0B5CC: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/file_select_init.asm:57 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC0B5CD: cpu.execute_instruction<0x8D>(0x000A42, 3); return true;
    // src/system/file_select_init.asm:58 LDA #24
    case 0xC0B5D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/system/file_select_init.asm:58 LDA #24
    // Overlapping static entry reached from 0xC0B5D0.
    case 0xC0B5D2: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/file_select_init.asm:59 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC0B5D3: cpu.execute_instruction<0x8D>(0x000A44, 3); return true;
    // src/system/file_select_init.asm:60 LDY #0
    case 0xC0B5D6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/file_select_init.asm:60 LDY #0
    // Overlapping static entry reached from 0xC0B5D6.
    case 0xC0B5D8: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/system/file_select_init.asm:61 TYX
    case 0xC0B5D9: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/system/file_select_init.asm:62 LDA #EVENT_SCRIPT::EVENT_787
    case 0xC0B5DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x000313, 3); return true;
    // src/system/file_select_init.asm:62 LDA #EVENT_SCRIPT::EVENT_787
    // Overlapping static entry reached from 0xC0B5DA.
    case 0xC0B5DC: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/system/file_select_init.asm:63 JSL INIT_ENTITY
    case 0xC0B5DD: cpu.execute_instruction<0x22>(0xC09300, 4); return true;
    // src/system/file_select_init.asm:63 JSL INIT_ENTITY
    // Overlapping static entry reached from 0xC0B5DC.
    case 0xC0B5DE: cpu.execute_instruction<0x00>(0x000093, 2); return true;
    // src/system/file_select_init.asm:64 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B5E1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/file_select_init.asm:65 LDA #$16
    case 0xC0B5E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000016, 2); else cpu.execute_instruction<0xA9>(0x008D16, 3); return true;
    // src/system/file_select_init.asm:66 STA TM_MIRROR
    case 0xC0B5E5: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/system/file_select_init.asm:66 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0B5E3.
    case 0xC0B5E6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/file_select_init.asm:66 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0B5E6.
    case 0xC0B5E7: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/system/file_select_init.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC0B5E8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/file_select_init.asm:68 STZ BG2_Y_POS
    case 0xC0B5EA: cpu.execute_instruction<0x9C>(0x000037, 3); return true;
    // src/system/file_select_init.asm:69 STZ BG1_Y_POS
    case 0xC0B5ED: cpu.execute_instruction<0x9C>(0x000033, 3); return true;
    // src/system/file_select_init.asm:70 STZ BG2_X_POS
    case 0xC0B5F0: cpu.execute_instruction<0x9C>(0x000035, 3); return true;
    // src/system/file_select_init.asm:71 STZ BG1_X_POS
    case 0xC0B5F3: cpu.execute_instruction<0x9C>(0x000031, 3); return true;
    // src/system/file_select_init.asm:72 JSL OAM_CLEAR
    case 0xC0B5F6: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/system/file_select_init.asm:73 JSL UPDATE_SCREEN
    case 0xC0B5FA: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/system/file_select_init.asm:74 LDX #1
    case 0xC0B5FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/system/file_select_init.asm:74 LDX #1
    // Overlapping static entry reached from 0xC0B5FE.
    case 0xC0B600: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/system/file_select_init.asm:75 TXA
    case 0xC0B601: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/file_select_init.asm:76 JSL FADE_IN
    case 0xC0B602: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/system/file_select_init.asm:77 JSL UNKNOWN_C1FF6B
    case 0xC0B606: cpu.execute_instruction<0x22>(0xC1FCEE, 4); return true;
    // src/system/file_select_init.asm:78 LDY #0
    case 0xC0B60A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/file_select_init.asm:78 LDY #0
    // Overlapping static entry reached from 0xC0B60A.
    case 0xC0B60C: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/system/file_select_init.asm:79 LDX #1
    case 0xC0B60D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/system/file_select_init.asm:79 LDX #1
    // Overlapping static entry reached from 0xC0B60D.
    case 0xC0B60F: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/system/file_select_init.asm:80 TXA
    case 0xC0B610: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/file_select_init.asm:81 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0B611: cpu.execute_instruction<0x22>(0xC0880A, 4); return true;
    // src/system/file_select_init.asm:82 LDA #$17
    case 0xC0B615: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/system/file_select_init.asm:82 LDA #$17
    // Overlapping static entry reached from 0xC0B615.
    case 0xC0B617: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/file_select_init.asm:83 JSL UNKNOWN_C09C35
    case 0xC0B618: cpu.execute_instruction<0x22>(0xC09C14, 4); return true;
    // src/system/file_select_init.asm:84 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B61C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/file_select_init.asm:85 LDA #$17
    case 0xC0B61E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/system/file_select_init.asm:86 STA TM_MIRROR
    case 0xC0B620: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/system/file_select_init.asm:86 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0B61E.
    case 0xC0B621: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/file_select_init.asm:86 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0B621.
    case 0xC0B622: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/system/file_select_init.asm:87 REP #PROC_FLAGS::ACCUM8
    case 0xC0B623: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/file_select_init.asm:88 LDA GAME_STATE+game_state::sound_setting
    case 0xC0B625: cpu.execute_instruction<0xAD>(0x009B68, 3); return true;
    // src/system/file_select_init.asm:89 AND #$00FF
    case 0xC0B628: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/file_select_init.asm:89 AND #$00FF
    // Overlapping static entry reached from 0xC0B628.
    case 0xC0B62A: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/system/file_select_init.asm:90 DEC
    case 0xC0B62B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/system/file_select_init.asm:91 JSL SET_AUDIO_CHANNELS
    case 0xC0B62C: cpu.execute_instruction<0x22>(0xC4D0B7, 4); return true;
    // src/system/file_select_init.asm:92 PLD
    case 0xC0B630: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/file_select_init.asm:93 RTS
    case 0xC0B631: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/game_init.asm (source_named).
bool execute_system_game_init_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/game_init.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC0B975: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/system/game_init.asm:4 JSL CHECK_SRAM_INTEGRITY
    case 0xC0B977: cpu.execute_instruction<0x22>(0xC0FAA4, 4); return true;
    // src/system/game_init.asm:5 JSL INITIALIZE_MUSIC_SUBSYSTEM
    case 0xC0B97B: cpu.execute_instruction<0x22>(0xC4CEF7, 4); return true;
    // src/system/game_init.asm:6 JSL ENABLE_NMI_JOYPAD
    case 0xC0B97F: cpu.execute_instruction<0x22>(0xC0870E, 4); return true;
    // src/system/game_init.asm:7 JSL CHECK_HARDWARE
    case 0xC0B983: cpu.execute_instruction<0x22>(0xC0A0FB, 4); return true;
    // src/system/game_init.asm:8 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0B987: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/system/game_init.asm:9 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0B98B: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/system/game_init.asm:20 STZ DEBUG
    case 0xC0B98F: cpu.execute_instruction<0x9C>(0x0046F2, 3); return true;
    // src/system/game_init.asm:21 JSL MAIN_LOOP
    case 0xC0B992: cpu.execute_instruction<0x22>(0xC0B7BE, 4); return true;
    // src/system/game_init.asm:23 RTS
    case 0xC0B996: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/get_colour_average.asm (source_named).
bool execute_system_get_colour_average_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/get_colour_average.asm:3 BEGIN_C_FUNCTION
    case 0xC003A1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/get_colour_average.asm:12 END_STACK_VARS
    case 0xC003A3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/get_colour_average.asm:12 END_STACK_VARS
    case 0xC003A4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/get_colour_average.asm:12 END_STACK_VARS
    case 0xC003A5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/get_colour_average.asm:12 END_STACK_VARS
    case 0xC003A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/get_colour_average.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC003A6.
    case 0xC003A8: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/get_colour_average.asm:12 END_STACK_VARS
    case 0xC003A9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/get_colour_average.asm:12 END_STACK_VARS
    case 0xC003AA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:13 STA @LOCAL05
    case 0xC003AB: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/system/get_colour_average.asm:13 STA @LOCAL05
    // Overlapping static entry reached from 0xC003A8.
    case 0xC003AC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:14 STZ @LOCAL04
    case 0xC003AD: cpu.execute_instruction<0x64>(0x000016, 2); return true;
    // src/system/get_colour_average.asm:15 STZ @LOCAL03
    case 0xC003AF: cpu.execute_instruction<0x64>(0x000014, 2); return true;
    // src/system/get_colour_average.asm:16 LDA #0
    case 0xC003B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/get_colour_average.asm:16 LDA #0
    // Overlapping static entry reached from 0xC003B1.
    case 0xC003B3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/get_colour_average.asm:17 STA @VIRTUAL04
    case 0xC003B4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/get_colour_average.asm:18 TAY
    case 0xC003B6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:19 STY @LOCAL02
    case 0xC003B7: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/system/get_colour_average.asm:20 LDA @LOCAL05
    case 0xC003B9: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/system/get_colour_average.asm:21 DEC
    case 0xC003BB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:22 DEC
    case 0xC003BC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:23 STA @VIRTUAL02
    case 0xC003BD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/get_colour_average.asm:24 STA @LOCAL01
    case 0xC003BF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/get_colour_average.asm:25 LDX #0
    case 0xC003C1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/get_colour_average.asm:25 LDX #0
    // Overlapping static entry reached from 0xC003C1.
    case 0xC003C3: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/system/get_colour_average.asm:26 STX @LOCAL00
    case 0xC003C4: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/get_colour_average.asm:27 BRA @UNKNOWN2
    case 0xC003C6: cpu.execute_instruction<0x80>(0x00004D, 2); return true;
    // src/system/get_colour_average.asm:29 LDA @LOCAL01
    case 0xC003C8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/system/get_colour_average.asm:30 STA @VIRTUAL02
    case 0xC003CA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/get_colour_average.asm:31 INC @VIRTUAL02
    case 0xC003CC: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/system/get_colour_average.asm:32 INC @VIRTUAL02
    case 0xC003CE: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/system/get_colour_average.asm:33 LDA @VIRTUAL02
    case 0xC003D0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/get_colour_average.asm:34 STA @LOCAL01
    case 0xC003D2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/get_colour_average.asm:35 LDX @VIRTUAL02
    case 0xC003D4: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/get_colour_average.asm:36 LDA __BSS_START__,X
    case 0xC003D6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/system/get_colour_average.asm:37 STA @LOCAL05
    case 0xC003D9: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/system/get_colour_average.asm:38 AND #$7FFF
    case 0xC003DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/system/get_colour_average.asm:38 AND #$7FFF
    // Overlapping static entry reached from 0xC003DB.
    case 0xC003DD: cpu.execute_instruction<0x7F>(0xA530F0, 4); return true;
    // src/system/get_colour_average.asm:39 BEQ @UNKNOWN1
    case 0xC003DE: cpu.execute_instruction<0xF0>(0x000030, 2); return true;
    // src/system/get_colour_average.asm:40 LDA @LOCAL05
    case 0xC003E0: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/system/get_colour_average.asm:40 LDA @LOCAL05
    // Overlapping static entry reached from 0xC003DD.
    case 0xC003E1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:41 AND #BGR555::RED
    case 0xC003E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/system/get_colour_average.asm:41 AND #BGR555::RED
    // Overlapping static entry reached from 0xC003E2.
    case 0xC003E4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/get_colour_average.asm:42 STA @VIRTUAL02
    case 0xC003E5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/get_colour_average.asm:43 LDA @VIRTUAL04
    case 0xC003E7: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/system/get_colour_average.asm:44 CLC
    case 0xC003E9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:45 ADC @VIRTUAL02
    case 0xC003EA: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/system/get_colour_average.asm:46 STA @VIRTUAL04
    case 0xC003EC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/get_colour_average.asm:47 LDA @LOCAL05
    case 0xC003EE: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/system/get_colour_average.asm:48 AND #BGR555::GREEN
    case 0xC003F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000E0, 2); else cpu.execute_instruction<0x29>(0x0003E0, 3); return true;
    // src/system/get_colour_average.asm:48 AND #BGR555::GREEN
    // Overlapping static entry reached from 0xC003F0.
    case 0xC003F2: cpu.execute_instruction<0x03>(0x00004A, 2); return true;
    // src/system/get_colour_average.asm:49 LSR
    case 0xC003F3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:50 LSR
    case 0xC003F4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:51 LSR
    case 0xC003F5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:52 LSR
    case 0xC003F6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:53 LSR
    case 0xC003F7: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:54 CLC
    case 0xC003F8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:55 ADC @LOCAL03
    case 0xC003F9: cpu.execute_instruction<0x65>(0x000014, 2); return true;
    // src/system/get_colour_average.asm:56 STA @LOCAL03
    case 0xC003FB: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/get_colour_average.asm:57 LDA @LOCAL05
    case 0xC003FD: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/system/get_colour_average.asm:58 AND #BGR555::BLUE
    case 0xC003FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x007C00, 3); return true;
    // src/system/get_colour_average.asm:58 AND #BGR555::BLUE
    // Overlapping static entry reached from 0xC003FF.
    case 0xC00401: cpu.execute_instruction<0x7C>(0x0029EB, 3); return true;
    // src/system/get_colour_average.asm:59 XBA
    case 0xC00402: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:60 AND #$00FF
    case 0xC00403: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/get_colour_average.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC00403.
    case 0xC00405: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/system/get_colour_average.asm:61 LSR
    case 0xC00406: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:62 LSR
    case 0xC00407: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:63 CLC
    case 0xC00408: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:64 ADC @LOCAL04
    case 0xC00409: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/system/get_colour_average.asm:65 STA @LOCAL04
    case 0xC0040B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/system/get_colour_average.asm:66 INY
    case 0xC0040D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:67 STY @LOCAL02
    case 0xC0040E: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/system/get_colour_average.asm:69 LDX @LOCAL00
    case 0xC00410: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/get_colour_average.asm:70 INX
    case 0xC00412: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:71 STX @LOCAL00
    case 0xC00413: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/get_colour_average.asm:73 CPX #96
    case 0xC00415: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000060, 2); else cpu.execute_instruction<0xE0>(0x000060, 3); return true;
    // src/system/get_colour_average.asm:73 CPX #96
    // Overlapping static entry reached from 0xC00415.
    case 0xC00417: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/get_colour_average.asm:74 BCC @UNKNOWN0
    case 0xC00418: cpu.execute_instruction<0x90>(0x0000AE, 2); return true;
    // src/system/get_colour_average.asm:75 LDA @VIRTUAL04
    case 0xC0041A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/system/get_colour_average.asm:76 ASL
    case 0xC0041C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:77 ASL
    case 0xC0041D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:78 ASL
    case 0xC0041E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:79 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC0041F: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/system/get_colour_average.asm:80 STA COLOUR_AVERAGE_RED
    case 0xC00423: cpu.execute_instruction<0x8D>(0x004756, 3); return true;
    // src/system/get_colour_average.asm:81 LDY @LOCAL02
    case 0xC00426: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/system/get_colour_average.asm:82 LDA @LOCAL03
    case 0xC00428: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/system/get_colour_average.asm:83 ASL
    case 0xC0042A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:84 ASL
    case 0xC0042B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:85 ASL
    case 0xC0042C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:86 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC0042D: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/system/get_colour_average.asm:87 STA COLOUR_AVERAGE_GREEN
    case 0xC00431: cpu.execute_instruction<0x8D>(0x004758, 3); return true;
    // src/system/get_colour_average.asm:88 LDY @LOCAL02
    case 0xC00434: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/system/get_colour_average.asm:89 LDA @LOCAL04
    case 0xC00436: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/system/get_colour_average.asm:90 ASL
    case 0xC00438: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:91 ASL
    case 0xC00439: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:92 ASL
    case 0xC0043A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/get_colour_average.asm:93 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC0043B: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/system/get_colour_average.asm:94 STA COLOUR_AVERAGE_BLUE
    case 0xC0043F: cpu.execute_instruction<0x8D>(0x00475A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/get_colour_average.asm:95 END_C_FUNCTION
    case 0xC00442: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/get_colour_average.asm:95 END_C_FUNCTION
    case 0xC00443: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/get_colour_fade_slope.asm (source_named).
bool execute_system_get_colour_fade_slope_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/get_colour_fade_slope.asm:3 BEGIN_C_FUNCTION
    case 0xC46838: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/get_colour_fade_slope.asm:9 END_STACK_VARS
    case 0xC4683A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/get_colour_fade_slope.asm:9 END_STACK_VARS
    case 0xC4683B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/get_colour_fade_slope.asm:9 END_STACK_VARS
    case 0xC4683C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/get_colour_fade_slope.asm:9 END_STACK_VARS
    case 0xC4683D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/get_colour_fade_slope.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4683D.
    case 0xC4683F: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/get_colour_fade_slope.asm:9 END_STACK_VARS
    case 0xC46840: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/get_colour_fade_slope.asm:9 END_STACK_VARS
    case 0xC46841: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/get_colour_fade_slope.asm:10 STA @VIRTUAL02
    case 0xC46842: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/get_colour_fade_slope.asm:10 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4683F.
    case 0xC46843: cpu.execute_instruction<0x02>(0x00008A, 2); return true;
    // src/system/get_colour_fade_slope.asm:11 TXA
    case 0xC46844: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/get_colour_fade_slope.asm:12 SEC
    case 0xC46845: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/get_colour_fade_slope.asm:13 SBC @VIRTUAL02
    case 0xC46846: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/system/get_colour_fade_slope.asm:14 XBA
    case 0xC46848: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/get_colour_fade_slope.asm:15 AND #$FF00
    case 0xC46849: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/system/get_colour_fade_slope.asm:15 AND #$FF00
    // Overlapping static entry reached from 0xC46849.
    case 0xC4684B: cpu.execute_instruction<0xFF>(0x90C822, 4); return true;
    // src/system/get_colour_fade_slope.asm:16 JSL DIVISION16
    case 0xC4684C: cpu.execute_instruction<0x22>(0xC090C8, 4); return true;
    // src/system/get_colour_fade_slope.asm:16 JSL DIVISION16
    // Overlapping static entry reached from 0xC4684B.
    case 0xC4684F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x00602B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/get_colour_fade_slope.asm:17 END_C_FUNCTION
    case 0xC46850: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/get_colour_fade_slope.asm:17 END_C_FUNCTION
    case 0xC46851: cpu.execute_instruction<0x60>(0x000000, 1); return true;
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
    case 0xC081CD: cpu.execute_instruction<0xBD>(0x008F78, 3); return true;
    // src/system/irq_nmi.asm:76 STA A1T0L
    case 0xC081D0: cpu.execute_instruction<0x8D>(0x004302, 3); return true;
    // src/system/irq_nmi.asm:77 LDY PALETTE_DMA_PARAMETERS - 2,X
    case 0xC081D3: cpu.execute_instruction<0xBC>(0x008F7A, 3); return true;
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
    case 0xC081E7: cpu.execute_instruction<0xBD>(0x008F76, 3); return true;
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
    case 0xC08243: cpu.execute_instruction<0xB9>(0x008F94, 3); return true;
    // src/system/irq_nmi.asm:133 STA DMAP0
    case 0xC08246: cpu.execute_instruction<0x8D>(0x004300, 3); return true;
    // src/system/irq_nmi.asm:134 LDA DMA_TABLE + 2,Y
    case 0xC08249: cpu.execute_instruction<0xB9>(0x008F96, 3); return true;
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
    case 0xC08374: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002400, 3); return true;
    // src/system/irq_nmi.asm:264 LDA #.LOWORD(HEAP_ALT)
    // Overlapping static entry reached from 0xC08374.
    case 0xC08376: cpu.execute_instruction<0x24>(0x000085, 2); return true;
    // src/system/irq_nmi.asm:266 STA <BASE_HEAP_ADDRESS + 0
    case 0xC08377: cpu.execute_instruction<0x85>(0x0000A3, 2); return true;
    // src/system/irq_nmi.asm:266 STA <BASE_HEAP_ADDRESS + 0
    // Overlapping static entry reached from 0xC08376.
    case 0xC08378: cpu.execute_instruction<0xA3>(0x000085, 2); return true;
    // src/system/irq_nmi.asm:267 STA <CURRENT_HEAP_ADDRESS + 0
    case 0xC08379: cpu.execute_instruction<0x85>(0x0000A1, 2); return true;
    // src/system/irq_nmi.asm:267 STA <CURRENT_HEAP_ADDRESS + 0
    // Overlapping static entry reached from 0xC08378.
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
    case 0xC0837E: cpu.execute_instruction<0x8F>(0x7EA031, 4); return true;
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
    case 0xC450F4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/load_background_animation.asm:7 END_STACK_VARS
    case 0xC450F6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/load_background_animation.asm:7 END_STACK_VARS
    case 0xC450F7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/load_background_animation.asm:7 END_STACK_VARS
    case 0xC450F8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/load_background_animation.asm:7 END_STACK_VARS
    case 0xC450F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/load_background_animation.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC450F9.
    case 0xC450FB: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/load_background_animation.asm:7 END_STACK_VARS
    case 0xC450FC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/load_background_animation.asm:7 END_STACK_VARS
    case 0xC450FD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/load_background_animation.asm:8 STX @VIRTUAL02
    case 0xC450FE: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/system/load_background_animation.asm:8 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC450FB.
    case 0xC450FF: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/system/load_background_animation.asm:9 STA @VIRTUAL04
    case 0xC45100: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/load_background_animation.asm:10 JSL UNKNOWN_C08726
    case 0xC45102: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/system/load_background_animation.asm:11 LDA #$0009
    case 0xC45106: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/system/load_background_animation.asm:11 LDA #$0009
    // Overlapping static entry reached from 0xC45106.
    case 0xC45108: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/load_background_animation.asm:12 JSL UNKNOWN_C08D79
    case 0xC45109: cpu.execute_instruction<0x22>(0xC08D6A, 4); return true;
    // src/system/load_background_animation.asm:13 LDY #$0000
    case 0xC4510D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/load_background_animation.asm:13 LDY #$0000
    // Overlapping static entry reached from 0xC4510D.
    case 0xC4510F: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/system/load_background_animation.asm:14 LDX #$5800
    case 0xC45110: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005800, 3); return true;
    // src/system/load_background_animation.asm:14 LDX #$5800
    // Overlapping static entry reached from 0xC45110.
    case 0xC45112: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/system/load_background_animation.asm:15 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC45113: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/load_background_animation.asm:16 JSL SET_BG1_VRAM_LOCATION
    case 0xC45114: cpu.execute_instruction<0x22>(0xC08D8F, 4); return true;
    // src/system/load_background_animation.asm:17 LDY #$1000
    case 0xC45118: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x001000, 3); return true;
    // src/system/load_background_animation.asm:17 LDY #$1000
    // Overlapping static entry reached from 0xC45118.
    case 0xC4511A: cpu.execute_instruction<0x10>(0x0000A2, 2); return true;
    // src/system/load_background_animation.asm:18 LDX #$5C00
    case 0xC4511B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005C00, 3); return true;
    // src/system/load_background_animation.asm:18 LDX #$5C00
    // Overlapping static entry reached from 0xC4511A.
    case 0xC4511C: cpu.execute_instruction<0x00>(0x00005C, 2); return true;
    // src/system/load_background_animation.asm:18 LDX #$5C00
    // Overlapping static entry reached from 0xC4511B.
    case 0xC4511D: cpu.execute_instruction<0x5C>(0x0000A9, 4); return true;
    // src/system/load_background_animation.asm:19 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC4511E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/load_background_animation.asm:19 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC4511E.
    case 0xC45120: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/load_background_animation.asm:20 JSL SET_BG2_VRAM_LOCATION
    case 0xC45121: cpu.execute_instruction<0x22>(0xC08DCF, 4); return true;
    // src/system/load_background_animation.asm:21 LDY #$0004
    case 0xC45125: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/system/load_background_animation.asm:21 LDY #$0004
    // Overlapping static entry reached from 0xC45125.
    case 0xC45127: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/system/load_background_animation.asm:22 LDX @VIRTUAL02
    case 0xC45128: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/system/load_background_animation.asm:23 LDA @VIRTUAL04
    case 0xC4512A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/system/load_background_animation.asm:24 JSL LOAD_BATTLE_BG
    case 0xC4512C: cpu.execute_instruction<0x22>(0xC2D0D5, 4); return true;
    // src/system/load_background_animation.asm:25 JSL UNKNOWN_C08744
    case 0xC45130: cpu.execute_instruction<0x22>(0xC0873A, 4); return true;
    // src/system/load_background_animation.asm:26 PLD
    case 0xC45134: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/load_background_animation.asm:27 RTL
    case 0xC45135: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
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
    case 0xC00245: cpu.execute_instruction<0xFF>(0xFA9C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/load_palette_anim.asm:8 END_STACK_VARS
    case 0xC00246: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/load_palette_anim.asm:9 STZ MAP_PALETTE_ANIMATION_LOADED
    case 0xC00247: cpu.execute_instruction<0x9C>(0x0047FA, 3); return true;
    // src/system/load_palette_anim.asm:9 STZ MAP_PALETTE_ANIMATION_LOADED
    // Overlapping static entry reached from 0xC00245.
    case 0xC00249: cpu.execute_instruction<0x47>(0x0000AE, 2); return true;
    // src/system/load_palette_anim.asm:10 LDX PALETTES + BPP4PALETTE_SIZE * 5
    case 0xC0024A: cpu.execute_instruction<0xAE>(0x0002A0, 3); return true;
    // src/system/load_palette_anim.asm:10 LDX PALETTES + BPP4PALETTE_SIZE * 5
    // Overlapping static entry reached from 0xC00249.
    case 0xC0024B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x00D002, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/load_palette_anim.asm:11 BEQL @UNKNOWN6
    case 0xC0024D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/load_palette_anim.asm:11 BEQL @UNKNOWN6
    // Overlapping static entry reached from 0xC0024B.
    case 0xC0024E: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/load_palette_anim.asm:11 BEQL @UNKNOWN6
    case 0xC0024F: cpu.execute_instruction<0x4C>(0x000315, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/load_palette_anim.asm:11 BEQL @UNKNOWN6
    // Overlapping static entry reached from 0xC0024E.
    case 0xC00250: cpu.execute_instruction<0x15>(0x000003, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_palette_anim.asm:12 LOADPTR MAP_DATA_PALETTE_ANIM_POINTER_TABLE, @VIRTUAL06
    case 0xC00252: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AC, 2); else cpu.execute_instruction<0xA9>(0x00E4AC, 3); return true;
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
    case 0xC0027F: cpu.execute_instruction<0x4C>(0x000315, 3); return true;
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
    case 0xC002A8: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/system/load_palette_anim.asm:31 LDA #0
    case 0xC002AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/load_palette_anim.asm:31 LDA #0
    // Overlapping static entry reached from 0xC002AC.
    case 0xC002AE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/load_palette_anim.asm:32 STA @LOCAL02
    case 0xC002AF: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/system/load_palette_anim.asm:33 BRA @UNKNOWN3
    case 0xC002B1: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/system/load_palette_anim.asm:35 ASL
    case 0xC002B3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_palette_anim.asm:37 CLC
    case 0xC002B4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/load_palette_anim.asm:38 ADC #.LOWORD(OVERWORLD_PALETTE_ANIM)
    case 0xC002B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x0047E2, 3); return true;
    // src/system/load_palette_anim.asm:38 ADC #.LOWORD(OVERWORLD_PALETTE_ANIM)
    // Overlapping static entry reached from 0xC002B5.
    case 0xC002B7: cpu.execute_instruction<0x47>(0x0000AA, 2); return true;
    // src/system/load_palette_anim.asm:39 TAX
    case 0xC002B8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/load_palette_anim.asm:40 STZ a:overworld_palette_anim::delays,X
    case 0xC002B9: cpu.execute_instruction<0x9E>(0x000004, 3); return true;
    // src/system/load_palette_anim.asm:45 LDA @LOCAL02
    case 0xC002BC: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/system/load_palette_anim.asm:46 INC
    case 0xC002BE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/load_palette_anim.asm:47 STA @LOCAL02
    case 0xC002BF: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/system/load_palette_anim.asm:49 CMP #9
    case 0xC002C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/system/load_palette_anim.asm:49 CMP #9
    // Overlapping static entry reached from 0xC002C1.
    case 0xC002C3: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/load_palette_anim.asm:50 BCC @UNKNOWN2
    case 0xC002C4: cpu.execute_instruction<0x90>(0x0000ED, 2); return true;
    // src/system/load_palette_anim.asm:51 LDA #map_palette_animation_entry::entries
    case 0xC002C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/system/load_palette_anim.asm:51 LDA #map_palette_animation_entry::entries
    // Overlapping static entry reached from 0xC002C6.
    case 0xC002C8: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/system/load_palette_anim.asm:52 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC002C9: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/system/load_palette_anim.asm:52 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC002CB: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/system/load_palette_anim.asm:52 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC002CD: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/system/load_palette_anim.asm:52 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC002CF: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/system/load_palette_anim.asm:53 CLC
    case 0xC002D1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/load_palette_anim.asm:54 ADC @VIRTUAL06
    case 0xC002D2: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/system/load_palette_anim.asm:55 STA @VIRTUAL06
    case 0xC002D4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/load_palette_anim.asm:56 LDA #0
    case 0xC002D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/load_palette_anim.asm:56 LDA #0
    // Overlapping static entry reached from 0xC002D6.
    case 0xC002D8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/load_palette_anim.asm:57 STA @LOCAL02
    case 0xC002D9: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/system/load_palette_anim.asm:58 BRA @UNKNOWN5
    case 0xC002DB: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/system/load_palette_anim.asm:60 ASL
    case 0xC002DD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_palette_anim.asm:62 CLC
    case 0xC002DE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/load_palette_anim.asm:63 ADC #.LOWORD(OVERWORLD_PALETTE_ANIM)
    case 0xC002DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x0047E2, 3); return true;
    // src/system/load_palette_anim.asm:63 ADC #.LOWORD(OVERWORLD_PALETTE_ANIM)
    // Overlapping static entry reached from 0xC002DF.
    case 0xC002E1: cpu.execute_instruction<0x47>(0x0000AA, 2); return true;
    // src/system/load_palette_anim.asm:64 TAX
    case 0xC002E2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/load_palette_anim.asm:65 LDA [@VIRTUAL06]
    case 0xC002E3: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/load_palette_anim.asm:66 AND #$00FF
    case 0xC002E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_palette_anim.asm:66 AND #$00FF
    // Overlapping static entry reached from 0xC002E5.
    case 0xC002E7: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/system/load_palette_anim.asm:67 STA a:overworld_palette_anim::delays,X
    case 0xC002E8: cpu.execute_instruction<0x9D>(0x000004, 3); return true;
    // src/system/load_palette_anim.asm:74 INC @VIRTUAL06
    case 0xC002EB: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/load_palette_anim.asm:75 LDA @LOCAL02
    case 0xC002ED: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/system/load_palette_anim.asm:76 INC
    case 0xC002EF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/load_palette_anim.asm:77 STA @LOCAL02
    case 0xC002F0: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/system/load_palette_anim.asm:79 SEP #PROC_FLAGS::ACCUM8
    case 0xC002F2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/load_palette_anim.asm:80 LDY #map_palette_animation_entry::count
    case 0xC002F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/system/load_palette_anim.asm:80 LDY #map_palette_animation_entry::count
    // Overlapping static entry reached from 0xC002F4.
    case 0xC002F6: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/system/load_palette_anim.asm:81 LDA [@VIRTUAL0A],Y
    case 0xC002F7: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/system/load_palette_anim.asm:82 REP #PROC_FLAGS::ACCUM8
    case 0xC002F9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/load_palette_anim.asm:83 AND #$00FF
    case 0xC002FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_palette_anim.asm:83 AND #$00FF
    // Overlapping static entry reached from 0xC002FB.
    case 0xC002FD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/load_palette_anim.asm:84 STA @VIRTUAL02
    case 0xC002FE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/load_palette_anim.asm:85 LDA @LOCAL02
    case 0xC00300: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/system/load_palette_anim.asm:86 CMP @VIRTUAL02
    case 0xC00302: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/system/load_palette_anim.asm:87 BCC @UNKNOWN4
    case 0xC00304: cpu.execute_instruction<0x90>(0x0000D7, 2); return true;
    // src/system/load_palette_anim.asm:88 LDA OVERWORLD_PALETTE_ANIM + overworld_palette_anim::delays
    case 0xC00306: cpu.execute_instruction<0xAD>(0x0047E6, 3); return true;
    // src/system/load_palette_anim.asm:89 STA OVERWORLD_PALETTE_ANIM + overworld_palette_anim::timer
    case 0xC00309: cpu.execute_instruction<0x8D>(0x0047E2, 3); return true;
    // src/system/load_palette_anim.asm:90 LDA #1
    case 0xC0030C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/load_palette_anim.asm:90 LDA #1
    // Overlapping static entry reached from 0xC0030C.
    case 0xC0030E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/load_palette_anim.asm:91 STA MAP_PALETTE_ANIMATION_LOADED
    case 0xC0030F: cpu.execute_instruction<0x8D>(0x0047FA, 3); return true;
    // src/system/load_palette_anim.asm:92 STA OVERWORLD_PALETTE_ANIM + overworld_palette_anim::index
    case 0xC00312: cpu.execute_instruction<0x8D>(0x0047E4, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/load_palette_anim.asm:94 END_C_FUNCTION
    case 0xC00315: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/load_palette_anim.asm:94 END_C_FUNCTION
    case 0xC00316: cpu.execute_instruction<0x60>(0x000000, 1); return true;
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
    case 0xC0008B: cpu.execute_instruction<0xFF>(0xF89C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/load_tileset_anim.asm:10 END_STACK_VARS
    case 0xC0008C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/load_tileset_anim.asm:18 STZ LOADED_ANIMATED_TILE_COUNT
    case 0xC0008D: cpu.execute_instruction<0x9C>(0x0047F8, 3); return true;
    // src/system/load_tileset_anim.asm:18 STZ LOADED_ANIMATED_TILE_COUNT
    // Overlapping static entry reached from 0xC0008B.
    case 0xC0008F: cpu.execute_instruction<0x47>(0x0000AD, 2); return true;
    // src/system/load_tileset_anim.asm:19 LDA LOADED_MAP_TILESET
    case 0xC00090: cpu.execute_instruction<0xAD>(0x0046F8, 3); return true;
    // src/system/load_tileset_anim.asm:19 LDA LOADED_MAP_TILESET
    // Overlapping static entry reached from 0xC0008F.
    case 0xC00091: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // src/system/load_tileset_anim.asm:19 LDA LOADED_MAP_TILESET
    // Overlapping static entry reached from 0xC00091.
    case 0xC00092: cpu.execute_instruction<0x46>(0x00000A, 2); return true;
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
    case 0xC00097: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001D, 2); else cpu.execute_instruction<0xA9>(0x00641D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_tileset_anim.asm:22 LOADPTR MAP_DATA_WEIRD_TILE_ANIMATION_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC00097.
    case 0xC00099: cpu.execute_instruction<0x64>(0x000085, 2); return true;
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
    // Overlapping static entry reached from 0xC0ECAC.
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
    case 0xC000C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CD, 2); else cpu.execute_instruction<0xA9>(0x0063CD, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_tileset_anim.asm:32 LOADPTR MAP_DATA_TILE_ANIMATION_PTR_TABLE, @PTRBASE
    // Overlapping static entry reached from 0xC000C6.
    case 0xC000C8: cpu.execute_instruction<0x63>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_tileset_anim.asm:32 LOADPTR MAP_DATA_TILE_ANIMATION_PTR_TABLE, @PTRBASE
    case 0xC000C9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_tileset_anim.asm:32 LOADPTR MAP_DATA_TILE_ANIMATION_PTR_TABLE, @PTRBASE
    // Overlapping static entry reached from 0xC000C8.
    case 0xC000CA: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_tileset_anim.asm:32 LOADPTR MAP_DATA_TILE_ANIMATION_PTR_TABLE, @PTRBASE
    case 0xC000CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_tileset_anim.asm:32 LOADPTR MAP_DATA_TILE_ANIMATION_PTR_TABLE, @PTRBASE
    // Overlapping static entry reached from 0xC000CA.
    case 0xC000CC: cpu.execute_instruction<0xEF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_tileset_anim.asm:32 LOADPTR MAP_DATA_TILE_ANIMATION_PTR_TABLE, @PTRBASE
    // Overlapping static entry reached from 0xC000CB.
    case 0xC000CD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_tileset_anim.asm:32 LOADPTR MAP_DATA_TILE_ANIMATION_PTR_TABLE, @PTRBASE
    case 0xC000CE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/load_tileset_anim.asm:33 LDA @LOCAL04
    case 0xC000D0: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/system/load_tileset_anim.asm:34 CLC
    case 0xC000D2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/load_tileset_anim.asm:35 ADC @PTRBASE
    case 0xC000D3: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/system/load_tileset_anim.asm:36 STA @PTRBASE
    case 0xC000D5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/system/load_tileset_anim.asm:37 DEREFERENCE_PTR_TO @PTRBASE, @PTRFINAL
    case 0xC000D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/system/load_tileset_anim.asm:37 DEREFERENCE_PTR_TO @PTRBASE, @PTRFINAL
    // Overlapping static entry reached from 0xC000D7.
    case 0xC000D9: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/system/load_tileset_anim.asm:37 DEREFERENCE_PTR_TO @PTRBASE, @PTRFINAL
    case 0xC000DA: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/system/load_tileset_anim.asm:37 DEREFERENCE_PTR_TO @PTRBASE, @PTRFINAL
    case 0xC000DC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/system/load_tileset_anim.asm:37 DEREFERENCE_PTR_TO @PTRBASE, @PTRFINAL
    case 0xC000DD: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/system/load_tileset_anim.asm:37 DEREFERENCE_PTR_TO @PTRBASE, @PTRFINAL
    case 0xC000DF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/system/load_tileset_anim.asm:37 DEREFERENCE_PTR_TO @PTRBASE, @PTRFINAL
    case 0xC000E1: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_tileset_anim.asm:38 MOVE_INT @PTRFINAL, @LOCAL00
    case 0xC000E3: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_tileset_anim.asm:38 MOVE_INT @PTRFINAL, @LOCAL00
    case 0xC000E5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_tileset_anim.asm:38 MOVE_INT @PTRFINAL, @LOCAL00
    case 0xC000E7: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
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
    case 0xC000F5: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/system/load_tileset_anim.asm:40 JSL DECOMP
    // Overlapping static entry reached from 0xC000F4.
    case 0xC000F6: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/load_tileset_anim.asm:40 JSL DECOMP
    // Overlapping static entry reached from 0xC000F6.
    case 0xC000F7: cpu.execute_instruction<0x19>(0x00A5C4, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_tileset_anim.asm:41 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC000F9: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_tileset_anim.asm:41 MOVE_INT @LOCAL03, @VIRTUAL06
    // Overlapping static entry reached from 0xC000F7.
    case 0xC000FA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
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
    case 0xC00106: cpu.execute_instruction<0x8D>(0x0047F8, 3); return true;
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
    case 0xC0011A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000062, 2); else cpu.execute_instruction<0x69>(0x004762, 3); return true;
    // src/system/load_tileset_anim.asm:54 ADC #.LOWORD(OVERWORLD_TILESET_ANIM)
    // Overlapping static entry reached from 0xC0011A.
    case 0xC0011C: cpu.execute_instruction<0x47>(0x0000AA, 2); return true;
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

// Assembly routine source: src/system/load_window_gfx-jp.asm (source_named).
bool execute_system_load_window_gfx_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/load_window_gfx-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC459AB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/load_window_gfx-jp.asm:13 END_STACK_VARS
    case 0xC459AD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/load_window_gfx-jp.asm:13 END_STACK_VARS
    case 0xC459AE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/load_window_gfx-jp.asm:13 END_STACK_VARS
    case 0xC459AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D8, 2); else cpu.execute_instruction<0x69>(0x00FFD8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/load_window_gfx-jp.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC459AF.
    case 0xC459B1: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/load_window_gfx-jp.asm:13 END_STACK_VARS
    case 0xC459B2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:14 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC459B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:14 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC459B3.
    case 0xC459B5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx-jp.asm:14 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC459B6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:14 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC459B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:14 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC459B8.
    case 0xC459BA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_window_gfx-jp.asm:14 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC459BB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:15 LOADPTR BUFFER, @LOCAL01
    case 0xC459BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:15 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC459BD.
    case 0xC459BF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx-jp.asm:15 LOADPTR BUFFER, @LOCAL01
    case 0xC459C0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:15 LOADPTR BUFFER, @LOCAL01
    case 0xC459C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:15 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC459C2.
    case 0xC459C4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_window_gfx-jp.asm:15 LOADPTR BUFFER, @LOCAL01
    case 0xC459C5: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/load_window_gfx-jp.asm:16 JSL DECOMP
    case 0xC459C7: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:17 LOADPTR BUFFER + $3200, @LOCAL00
    case 0xC459CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x003200, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:17 LOADPTR BUFFER + $3200, @LOCAL00
    // Overlapping static entry reached from 0xC459CB.
    case 0xC459CD: cpu.execute_instruction<0x32>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx-jp.asm:17 LOADPTR BUFFER + $3200, @LOCAL00
    case 0xC459CE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx-jp.asm:17 LOADPTR BUFFER + $3200, @LOCAL00
    // Overlapping static entry reached from 0xC459CD.
    case 0xC459CF: cpu.execute_instruction<0x0E>(0x007FA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:17 LOADPTR BUFFER + $3200, @LOCAL00
    case 0xC459D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:17 LOADPTR BUFFER + $3200, @LOCAL00
    // Overlapping static entry reached from 0xC459D0.
    case 0xC459D2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_window_gfx-jp.asm:17 LOADPTR BUFFER + $3200, @LOCAL00
    case 0xC459D3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/system/load_window_gfx-jp.asm:18 LDX #$0600
    case 0xC459D5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000600, 3); return true;
    // src/system/load_window_gfx-jp.asm:18 LDX #$0600
    // Overlapping static entry reached from 0xC459D5.
    case 0xC459D7: cpu.execute_instruction<0x06>(0x0000E2, 2); return true;
    // src/system/load_window_gfx-jp.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC459D8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/load_window_gfx-jp.asm:19 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC459D7.
    case 0xC459D9: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/system/load_window_gfx-jp.asm:20 LDA #0
    case 0xC459DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/system/load_window_gfx-jp.asm:21 JSL MEMSET24
    case 0xC459DC: cpu.execute_instruction<0x22>(0xC08F06, 4); return true;
    // src/system/load_window_gfx-jp.asm:21 JSL MEMSET24
    // Overlapping static entry reached from 0xC459DA.
    case 0xC459DD: cpu.execute_instruction<0x06>(0x00008F, 2); return true;
    // src/system/load_window_gfx-jp.asm:21 JSL MEMSET24
    // Overlapping static entry reached from 0xC459DD.
    case 0xC459DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AD, 2); else cpu.execute_instruction<0xC0>(0x007EAD, 3); return true;
    // src/system/load_window_gfx-jp.asm:23 LDA GAME_STATE+game_state::text_flavour
    case 0xC459E0: cpu.execute_instruction<0xAD>(0x009C7E, 3); return true;
    // src/system/load_window_gfx-jp.asm:23 LDA GAME_STATE+game_state::text_flavour
    // Overlapping static entry reached from 0xC459DF.
    case 0xC459E1: cpu.execute_instruction<0x7E>(0x00299C, 3); return true;
    // src/system/load_window_gfx-jp.asm:23 LDA GAME_STATE+game_state::text_flavour
    // Overlapping static entry reached from 0xC459DF.
    case 0xC459E2: cpu.execute_instruction<0x9C>(0x00FF29, 3); return true;
    // src/system/load_window_gfx-jp.asm:24 AND #$00FF
    case 0xC459E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_window_gfx-jp.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC459E1.
    case 0xC459E4: cpu.execute_instruction<0xFF>(0x853A00, 4); return true;
    // src/system/load_window_gfx-jp.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC459E3.
    case 0xC459E5: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/system/load_window_gfx-jp.asm:25 DEC
    case 0xC459E6: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/system/load_window_gfx-jp.asm:26 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC459E7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/system/load_window_gfx-jp.asm:26 OPTIMIZED_MULT @VIRTUAL04, 3
    // Overlapping static entry reached from 0xC459E4.
    case 0xC459E8: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/system/load_window_gfx-jp.asm:26 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC459E9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/system/load_window_gfx-jp.asm:26 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC459EA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/system/load_window_gfx-jp.asm:27 TAX
    case 0xC459EC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:28 INX
    case 0xC459ED: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:29 INX
    case 0xC459EE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:30 LDA f:TEXT_WINDOW_PROPERTIES,X
    case 0xC459EF: cpu.execute_instruction<0xBF>(0xE01F0E, 4); return true;
    // src/system/load_window_gfx-jp.asm:31 AND #$00FF
    case 0xC459F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_window_gfx-jp.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC459F3.
    case 0xC459F5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/load_window_gfx-jp.asm:32 BEQ @UNKNOWN1
    case 0xC459F6: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:33 LOADPTR FLAVOURED_TEXT_GFX, @LOCAL00
    case 0xC459F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C2, 2); else cpu.execute_instruction<0xA9>(0x0010C2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:33 LOADPTR FLAVOURED_TEXT_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC459F8.
    case 0xC459FA: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx-jp.asm:33 LOADPTR FLAVOURED_TEXT_GFX, @LOCAL00
    case 0xC459FB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx-jp.asm:33 LOADPTR FLAVOURED_TEXT_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC459FA.
    case 0xC459FC: cpu.execute_instruction<0x0E>(0x00E0A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:33 LOADPTR FLAVOURED_TEXT_GFX, @LOCAL00
    case 0xC459FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:33 LOADPTR FLAVOURED_TEXT_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC459FD.
    case 0xC459FF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_window_gfx-jp.asm:33 LOADPTR FLAVOURED_TEXT_GFX, @LOCAL00
    case 0xC45A00: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:34 LOADPTR BUFFER + $100, @LOCAL01
    case 0xC45A02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000100, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:34 LOADPTR BUFFER + $100, @LOCAL01
    // Overlapping static entry reached from 0xC45A02.
    case 0xC45A04: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx-jp.asm:34 LOADPTR BUFFER + $100, @LOCAL01
    case 0xC45A05: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx-jp.asm:34 LOADPTR BUFFER + $100, @LOCAL01
    // Overlapping static entry reached from 0xC45A04.
    case 0xC45A06: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:34 LOADPTR BUFFER + $100, @LOCAL01
    case 0xC45A07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:34 LOADPTR BUFFER + $100, @LOCAL01
    // Overlapping static entry reached from 0xC45A06.
    case 0xC45A08: cpu.execute_instruction<0x7F>(0x148500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:34 LOADPTR BUFFER + $100, @LOCAL01
    // Overlapping static entry reached from 0xC45A07.
    case 0xC45A09: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_window_gfx-jp.asm:34 LOADPTR BUFFER + $100, @LOCAL01
    case 0xC45A0A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/system/load_window_gfx-jp.asm:35 JSL DECOMP
    case 0xC45A0C: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:38 LOADPTR BUFFER + $2A00, @LOCAL07
    case 0xC45A10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002A00, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:38 LOADPTR BUFFER + $2A00, @LOCAL07
    // Overlapping static entry reached from 0xC45A10.
    case 0xC45A12: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx-jp.asm:38 LOADPTR BUFFER + $2A00, @LOCAL07
    case 0xC45A13: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:38 LOADPTR BUFFER + $2A00, @LOCAL07
    case 0xC45A15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:38 LOADPTR BUFFER + $2A00, @LOCAL07
    // Overlapping static entry reached from 0xC45A15.
    case 0xC45A17: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_window_gfx-jp.asm:38 LOADPTR BUFFER + $2A00, @LOCAL07
    case 0xC45A18: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/system/load_window_gfx-jp.asm:39 LDA #0
    case 0xC45A1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/load_window_gfx-jp.asm:39 LDA #0
    // Overlapping static entry reached from 0xC45A1A.
    case 0xC45A1C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/load_window_gfx-jp.asm:40 STA @LOCAL06
    case 0xC45A1D: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/system/load_window_gfx-jp.asm:41 JMP @UNKNOWN8
    case 0xC45A1F: cpu.execute_instruction<0x4C>(0x005B2B, 3); return true;
    // src/system/load_window_gfx-jp.asm:44 LDY #.SIZEOF(char_struct)
    case 0xC45A22: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/system/load_window_gfx-jp.asm:44 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC45A22.
    case 0xC45A24: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/load_window_gfx-jp.asm:45 JSL MULT168
    case 0xC45A25: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/system/load_window_gfx-jp.asm:46 CLC
    case 0xC45A29: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:47 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC45A2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/system/load_window_gfx-jp.asm:47 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC45A2A.
    case 0xC45A2C: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/system/load_window_gfx-jp.asm:48 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45A2D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/system/load_window_gfx-jp.asm:48 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45A2F: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/system/load_window_gfx-jp.asm:48 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45A30: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/system/load_window_gfx-jp.asm:48 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45A32: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/system/load_window_gfx-jp.asm:48 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45A33: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/system/load_window_gfx-jp.asm:48 PROMOTENEARPTRA @VIRTUAL06
    case 0xC45A35: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/system/load_window_gfx-jp.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC45A37: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx-jp.asm:50 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC45A39: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx-jp.asm:50 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC45A3B: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx-jp.asm:50 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC45A3D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx-jp.asm:50 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC45A3F: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/system/load_window_gfx-jp.asm:51 LDY #0
    case 0xC45A41: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/load_window_gfx-jp.asm:51 LDY #0
    // Overlapping static entry reached from 0xC45A41.
    case 0xC45A43: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/system/load_window_gfx-jp.asm:52 STY @LOCAL04
    case 0xC45A44: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/system/load_window_gfx-jp.asm:53 JMP @UNKNOWN6
    case 0xC45A46: cpu.execute_instruction<0x4C>(0x005B1C, 3); return true;
    // src/system/load_window_gfx-jp.asm:55 LDA [@LOCAL05]
    case 0xC45A49: cpu.execute_instruction<0xA7>(0x00001E, 2); return true;
    // src/system/load_window_gfx-jp.asm:56 AND #$00FF
    case 0xC45A4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_window_gfx-jp.asm:56 AND #$00FF
    // Overlapping static entry reached from 0xC45A4B.
    case 0xC45A4D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/system/load_window_gfx-jp.asm:57 TAX
    case 0xC45A4E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:58 STX @VIRTUAL02
    case 0xC45A4F: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/system/load_window_gfx-jp.asm:59 TXA
    case 0xC45A51: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:60 AND #$00F0
    case 0xC45A52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x0000F0, 3); return true;
    // src/system/load_window_gfx-jp.asm:60 AND #$00F0
    // Overlapping static entry reached from 0xC45A52.
    case 0xC45A54: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/system/load_window_gfx-jp.asm:61 CLC
    case 0xC45A55: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:62 ADC @VIRTUAL02
    case 0xC45A56: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/system/load_window_gfx-jp.asm:63 ASL
    case 0xC45A58: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:64 ASL
    case 0xC45A59: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:65 ASL
    case 0xC45A5A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:66 ASL
    case 0xC45A5B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/load_window_gfx-jp.asm:67 STORE_INT1632 @VIRTUAL0A
    case 0xC45A5C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/load_window_gfx-jp.asm:67 STORE_INT1632 @VIRTUAL0A
    case 0xC45A5E: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/system/load_window_gfx-jp.asm:68 CLC
    case 0xC45A60: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/system/load_window_gfx-jp.asm:69 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL0A
    case 0xC45A61: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/load_window_gfx-jp.asm:69 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL0A
    case 0xC45A63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000000, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/load_window_gfx-jp.asm:69 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC45A63.
    case 0xC45A65: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/system/load_window_gfx-jp.asm:69 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL0A
    case 0xC45A66: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/system/load_window_gfx-jp.asm:69 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL0A
    case 0xC45A68: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/load_window_gfx-jp.asm:69 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL0A
    case 0xC45A6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/load_window_gfx-jp.asm:69 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC45A6A.
    case 0xC45A6C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/system/load_window_gfx-jp.asm:69 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL0A
    case 0xC45A6D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:70 LOADPTR BUFFER + $70, @VIRTUAL06
    case 0xC45A6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000070, 2); else cpu.execute_instruction<0xA9>(0x000070, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:70 LOADPTR BUFFER + $70, @VIRTUAL06
    // Overlapping static entry reached from 0xC45A6F.
    case 0xC45A71: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx-jp.asm:70 LOADPTR BUFFER + $70, @VIRTUAL06
    case 0xC45A72: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:70 LOADPTR BUFFER + $70, @VIRTUAL06
    case 0xC45A74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:70 LOADPTR BUFFER + $70, @VIRTUAL06
    // Overlapping static entry reached from 0xC45A74.
    case 0xC45A76: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_window_gfx-jp.asm:70 LOADPTR BUFFER + $70, @VIRTUAL06
    case 0xC45A77: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx-jp.asm:71 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC45A79: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx-jp.asm:71 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC45A7B: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx-jp.asm:71 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC45A7D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx-jp.asm:71 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC45A7F: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/system/load_window_gfx-jp.asm:72 LDX #0
    case 0xC45A81: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/load_window_gfx-jp.asm:72 LDX #0
    // Overlapping static entry reached from 0xC45A81.
    case 0xC45A83: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/system/load_window_gfx-jp.asm:73 BRA @UNKNOWN5___
    case 0xC45A84: cpu.execute_instruction<0x80>(0x000075, 2); return true;
    // src/system/load_window_gfx-jp.asm:75 LDA [@VIRTUAL0A]
    case 0xC45A86: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/system/load_window_gfx-jp.asm:76 STA @VIRTUAL02
    case 0xC45A88: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/load_window_gfx-jp.asm:77 XBA
    case 0xC45A8A: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:78 AND #$00FF
    case 0xC45A8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_window_gfx-jp.asm:78 AND #$00FF
    // Overlapping static entry reached from 0xC45A8B.
    case 0xC45A8D: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/system/load_window_gfx-jp.asm:79 EOR #$00FF
    case 0xC45A8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0000FF, 3); return true;
    // src/system/load_window_gfx-jp.asm:79 EOR #$00FF
    // Overlapping static entry reached from 0xC45A8E.
    case 0xC45A90: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/system/load_window_gfx-jp.asm:80 PHA
    case 0xC45A91: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:81 LDA [@VIRTUAL06]
    case 0xC45A92: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/load_window_gfx-jp.asm:82 AND #$00FF
    case 0xC45A94: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_window_gfx-jp.asm:82 AND #$00FF
    // Overlapping static entry reached from 0xC45A94.
    case 0xC45A96: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/load_window_gfx-jp.asm:83 STA @VIRTUAL04
    case 0xC45A97: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/load_window_gfx-jp.asm:84 LDA @VIRTUAL02
    case 0xC45A99: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/load_window_gfx-jp.asm:85 AND #$FF00
    case 0xC45A9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/system/load_window_gfx-jp.asm:85 AND #$FF00
    // Overlapping static entry reached from 0xC45A9B.
    case 0xC45A9D: cpu.execute_instruction<0xFF>(0x7A0405, 4); return true;
    // src/system/load_window_gfx-jp.asm:86 ORA @VIRTUAL04
    case 0xC45A9E: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/system/load_window_gfx-jp.asm:87 PLY
    case 0xC45AA0: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:88 STY @VIRTUAL02
    case 0xC45AA1: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/system/load_window_gfx-jp.asm:89 ORA @VIRTUAL02
    case 0xC45AA3: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/system/load_window_gfx-jp.asm:90 STA [@LOCAL07]
    case 0xC45AA5: cpu.execute_instruction<0x87>(0x000024, 2); return true;
    // src/system/load_window_gfx-jp.asm:91 LDY #256
    case 0xC45AA7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000100, 3); return true;
    // src/system/load_window_gfx-jp.asm:91 LDY #256
    // Overlapping static entry reached from 0xC45AA7.
    case 0xC45AA9: cpu.execute_instruction<0x01>(0x0000B7, 2); return true;
    // src/system/load_window_gfx-jp.asm:92 LDA [@VIRTUAL0A],Y
    case 0xC45AAA: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/system/load_window_gfx-jp.asm:92 LDA [@VIRTUAL0A],Y
    // Overlapping static entry reached from 0xC45AA9.
    case 0xC45AAB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:93 STA @VIRTUAL02
    case 0xC45AAC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/load_window_gfx-jp.asm:94 XBA
    case 0xC45AAE: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:95 AND #$00FF
    case 0xC45AAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_window_gfx-jp.asm:95 AND #$00FF
    // Overlapping static entry reached from 0xC45AAF.
    case 0xC45AB1: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/system/load_window_gfx-jp.asm:96 EOR #$00FF
    case 0xC45AB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0000FF, 3); return true;
    // src/system/load_window_gfx-jp.asm:96 EOR #$00FF
    // Overlapping static entry reached from 0xC45AB2.
    case 0xC45AB4: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/system/load_window_gfx-jp.asm:97 PHA
    case 0xC45AB5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:98 LDA [@VIRTUAL06],Y
    case 0xC45AB6: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/system/load_window_gfx-jp.asm:99 AND #$00FF
    case 0xC45AB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_window_gfx-jp.asm:99 AND #$00FF
    // Overlapping static entry reached from 0xC45AB8.
    case 0xC45ABA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/load_window_gfx-jp.asm:100 STA @VIRTUAL04
    case 0xC45ABB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/load_window_gfx-jp.asm:101 LDA @VIRTUAL02
    case 0xC45ABD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/system/load_window_gfx-jp.asm:102 AND #$FF00
    case 0xC45ABF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/system/load_window_gfx-jp.asm:102 AND #$FF00
    // Overlapping static entry reached from 0xC45ABF.
    case 0xC45AC1: cpu.execute_instruction<0xFF>(0x7A0405, 4); return true;
    // src/system/load_window_gfx-jp.asm:103 ORA @VIRTUAL04
    case 0xC45AC2: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/system/load_window_gfx-jp.asm:104 PLY
    case 0xC45AC4: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:105 STY @VIRTUAL02
    case 0xC45AC5: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/system/load_window_gfx-jp.asm:106 ORA @VIRTUAL02
    case 0xC45AC7: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/system/load_window_gfx-jp.asm:107 LDY #256
    case 0xC45AC9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000100, 3); return true;
    // src/system/load_window_gfx-jp.asm:107 LDY #256
    // Overlapping static entry reached from 0xC45AC9.
    case 0xC45ACB: cpu.execute_instruction<0x01>(0x000097, 2); return true;
    // src/system/load_window_gfx-jp.asm:108 STA [@LOCAL07],Y
    case 0xC45ACC: cpu.execute_instruction<0x97>(0x000024, 2); return true;
    // src/system/load_window_gfx-jp.asm:108 STA [@LOCAL07],Y
    // Overlapping static entry reached from 0xC45ACB.
    case 0xC45ACD: cpu.execute_instruction<0x24>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx-jp.asm:109 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC45ACE: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx-jp.asm:109 MOVE_INT @LOCAL07, @VIRTUAL06
    // Overlapping static entry reached from 0xC45ACD.
    case 0xC45ACF: cpu.execute_instruction<0x24>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx-jp.asm:109 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC45AD0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx-jp.asm:109 MOVE_INT @LOCAL07, @VIRTUAL06
    // Overlapping static entry reached from 0xC45ACF.
    case 0xC45AD1: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx-jp.asm:109 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC45AD2: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx-jp.asm:109 MOVE_INT @LOCAL07, @VIRTUAL06
    // Overlapping static entry reached from 0xC45AD1.
    case 0xC45AD3: cpu.execute_instruction<0x26>(0x000085, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx-jp.asm:109 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC45AD4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx-jp.asm:109 MOVE_INT @LOCAL07, @VIRTUAL06
    // Overlapping static entry reached from 0xC45AD3.
    case 0xC45AD5: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:110 INC @VIRTUAL06
    case 0xC45AD6: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/load_window_gfx-jp.asm:111 INC @VIRTUAL06
    case 0xC45AD8: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx-jp.asm:112 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC45ADA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx-jp.asm:112 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC45ADC: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx-jp.asm:112 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC45ADE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx-jp.asm:112 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC45AE0: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/system/load_window_gfx-jp.asm:113 INC @VIRTUAL0A
    case 0xC45AE2: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/system/load_window_gfx-jp.asm:114 INC @VIRTUAL0A
    case 0xC45AE4: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx-jp.asm:115 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC45AE6: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx-jp.asm:115 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC45AE8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx-jp.asm:115 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC45AEA: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx-jp.asm:115 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC45AEC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/load_window_gfx-jp.asm:116 INC @VIRTUAL06
    case 0xC45AEE: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/load_window_gfx-jp.asm:117 INC @VIRTUAL06
    case 0xC45AF0: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx-jp.asm:118 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC45AF2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx-jp.asm:118 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC45AF4: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx-jp.asm:118 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC45AF6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx-jp.asm:118 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC45AF8: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/system/load_window_gfx-jp.asm:119 INX
    case 0xC45AFA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:121 CPX #8
    case 0xC45AFB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000008, 2); else cpu.execute_instruction<0xE0>(0x000008, 3); return true;
    // src/system/load_window_gfx-jp.asm:121 CPX #8
    // Overlapping static entry reached from 0xC45AFB.
    case 0xC45AFD: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/system/load_window_gfx-jp.asm:122 BCCL @UNKNOWN5__
    case 0xC45AFE: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/system/load_window_gfx-jp.asm:122 BCCL @UNKNOWN5__
    case 0xC45B00: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/system/load_window_gfx-jp.asm:122 BCCL @UNKNOWN5__
    case 0xC45B02: cpu.execute_instruction<0x4C>(0x005A86, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx-jp.asm:123 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC45B05: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx-jp.asm:123 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC45B07: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx-jp.asm:123 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC45B09: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx-jp.asm:123 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC45B0B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/load_window_gfx-jp.asm:124 INC @VIRTUAL06
    case 0xC45B0D: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx-jp.asm:125 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC45B0F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx-jp.asm:125 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC45B11: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx-jp.asm:125 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC45B13: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx-jp.asm:125 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC45B15: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/system/load_window_gfx-jp.asm:126 LDY @LOCAL04
    case 0xC45B17: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/system/load_window_gfx-jp.asm:127 INY
    case 0xC45B19: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:128 STY @LOCAL04
    case 0xC45B1A: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/system/load_window_gfx-jp.asm:130 CPY #4
    case 0xC45B1C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000004, 2); else cpu.execute_instruction<0xC0>(0x000004, 3); return true;
    // src/system/load_window_gfx-jp.asm:130 CPY #4
    // Overlapping static entry reached from 0xC45B1C.
    case 0xC45B1E: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/system/load_window_gfx-jp.asm:131 BCCL @UNKNOWN5
    case 0xC45B1F: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/system/load_window_gfx-jp.asm:131 BCCL @UNKNOWN5
    case 0xC45B21: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/system/load_window_gfx-jp.asm:131 BCCL @UNKNOWN5
    case 0xC45B23: cpu.execute_instruction<0x4C>(0x005A49, 3); return true;
    // src/system/load_window_gfx-jp.asm:132 LDA @LOCAL06
    case 0xC45B26: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/system/load_window_gfx-jp.asm:133 INC
    case 0xC45B28: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:134 STA @LOCAL06
    case 0xC45B29: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/system/load_window_gfx-jp.asm:136 CMP #4
    case 0xC45B2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/system/load_window_gfx-jp.asm:136 CMP #4
    // Overlapping static entry reached from 0xC45B2B.
    case 0xC45B2D: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/system/load_window_gfx-jp.asm:137 BCCL @UNKNOWN2
    case 0xC45B2E: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/system/load_window_gfx-jp.asm:137 BCCL @UNKNOWN2
    case 0xC45B30: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/system/load_window_gfx-jp.asm:137 BCCL @UNKNOWN2
    case 0xC45B32: cpu.execute_instruction<0x4C>(0x005A22, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:138 LOADPTR BUFFER + $2C00, @LOCAL05
    case 0xC45B35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002C00, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:138 LOADPTR BUFFER + $2C00, @LOCAL05
    // Overlapping static entry reached from 0xC45B35.
    case 0xC45B37: cpu.execute_instruction<0x2C>(0x001E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx-jp.asm:138 LOADPTR BUFFER + $2C00, @LOCAL05
    case 0xC45B38: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:138 LOADPTR BUFFER + $2C00, @LOCAL05
    case 0xC45B3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:138 LOADPTR BUFFER + $2C00, @LOCAL05
    // Overlapping static entry reached from 0xC45B3A.
    case 0xC45B3C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_window_gfx-jp.asm:138 LOADPTR BUFFER + $2C00, @LOCAL05
    case 0xC45B3D: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:139 LOADPTR STATUS_EQUIP_WINDOW_TEXT_2, @LOCAL07
    case 0xC45B3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x003868, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:139 LOADPTR STATUS_EQUIP_WINDOW_TEXT_2, @LOCAL07
    // Overlapping static entry reached from 0xC45B3F.
    case 0xC45B41: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx-jp.asm:139 LOADPTR STATUS_EQUIP_WINDOW_TEXT_2, @LOCAL07
    case 0xC45B42: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:139 LOADPTR STATUS_EQUIP_WINDOW_TEXT_2, @LOCAL07
    case 0xC45B44: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:139 LOADPTR STATUS_EQUIP_WINDOW_TEXT_2, @LOCAL07
    // Overlapping static entry reached from 0xC45B44.
    case 0xC45B46: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_window_gfx-jp.asm:139 LOADPTR STATUS_EQUIP_WINDOW_TEXT_2, @LOCAL07
    case 0xC45B47: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/system/load_window_gfx-jp.asm:140 JMP @UNKNOWN19
    case 0xC45B49: cpu.execute_instruction<0x4C>(0x005C11, 3); return true;
    // src/system/load_window_gfx-jp.asm:142 CMP #32
    case 0xC45B4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/system/load_window_gfx-jp.asm:142 CMP #32
    // Overlapping static entry reached from 0xC45B4C.
    case 0xC45B4E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/load_window_gfx-jp.asm:143 BEQL @UNKNOWN18
    case 0xC45B4F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/load_window_gfx-jp.asm:143 BEQL @UNKNOWN18
    case 0xC45B51: cpu.execute_instruction<0x4C>(0x005BFD, 3); return true;
    // src/system/load_window_gfx-jp.asm:144 STA @VIRTUAL02
    case 0xC45B54: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/load_window_gfx-jp.asm:145 AND #$FFF0
    case 0xC45B56: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x00FFF0, 3); return true;
    // src/system/load_window_gfx-jp.asm:145 AND #$FFF0
    // Overlapping static entry reached from 0xC45B56.
    case 0xC45B58: cpu.execute_instruction<0xFF>(0x026518, 4); return true;
    // src/system/load_window_gfx-jp.asm:146 CLC
    case 0xC45B59: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:147 ADC @VIRTUAL02
    case 0xC45B5A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/system/load_window_gfx-jp.asm:148 ASL
    case 0xC45B5C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:149 ASL
    case 0xC45B5D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:150 ASL
    case 0xC45B5E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:151 ASL
    case 0xC45B5F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/load_window_gfx-jp.asm:152 STORE_INT1632 @VIRTUAL0A
    case 0xC45B60: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/load_window_gfx-jp.asm:152 STORE_INT1632 @VIRTUAL0A
    case 0xC45B62: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/system/load_window_gfx-jp.asm:153 CLC
    case 0xC45B64: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/system/load_window_gfx-jp.asm:154 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL0A
    case 0xC45B65: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/load_window_gfx-jp.asm:154 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL0A
    case 0xC45B67: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000000, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/load_window_gfx-jp.asm:154 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC45B67.
    case 0xC45B69: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/system/load_window_gfx-jp.asm:154 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL0A
    case 0xC45B6A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/system/load_window_gfx-jp.asm:154 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL0A
    case 0xC45B6C: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/load_window_gfx-jp.asm:154 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL0A
    case 0xC45B6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/load_window_gfx-jp.asm:154 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC45B6E.
    case 0xC45B70: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/system/load_window_gfx-jp.asm:154 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL0A
    case 0xC45B71: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:155 LOADPTR BUFFER + $70, @VIRTUAL06
    case 0xC45B73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000070, 2); else cpu.execute_instruction<0xA9>(0x000070, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:155 LOADPTR BUFFER + $70, @VIRTUAL06
    // Overlapping static entry reached from 0xC45B73.
    case 0xC45B75: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/system/load_window_gfx-jp.asm:155 LOADPTR BUFFER + $70, @VIRTUAL06
    case 0xC45B76: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:155 LOADPTR BUFFER + $70, @VIRTUAL06
    case 0xC45B78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/system/load_window_gfx-jp.asm:155 LOADPTR BUFFER + $70, @VIRTUAL06
    // Overlapping static entry reached from 0xC45B78.
    case 0xC45B7A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/system/load_window_gfx-jp.asm:155 LOADPTR BUFFER + $70, @VIRTUAL06
    case 0xC45B7B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx-jp.asm:156 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC45B7D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx-jp.asm:156 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC45B7F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx-jp.asm:156 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC45B81: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx-jp.asm:156 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC45B83: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/system/load_window_gfx-jp.asm:157 LDX #0
    case 0xC45B85: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/load_window_gfx-jp.asm:157 LDX #0
    // Overlapping static entry reached from 0xC45B85.
    case 0xC45B87: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/system/load_window_gfx-jp.asm:158 BRA @UNKNOWN17
    case 0xC45B88: cpu.execute_instruction<0x80>(0x00006E, 2); return true;
    // src/system/load_window_gfx-jp.asm:160 LDA [@VIRTUAL0A]
    case 0xC45B8A: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/system/load_window_gfx-jp.asm:161 STA @LOCAL02
    case 0xC45B8C: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/system/load_window_gfx-jp.asm:162 XBA
    case 0xC45B8E: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:163 AND #$00FF
    case 0xC45B8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_window_gfx-jp.asm:163 AND #$00FF
    // Overlapping static entry reached from 0xC45B8F.
    case 0xC45B91: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/system/load_window_gfx-jp.asm:164 EOR #$00FF
    case 0xC45B92: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0000FF, 3); return true;
    // src/system/load_window_gfx-jp.asm:164 EOR #$00FF
    // Overlapping static entry reached from 0xC45B92.
    case 0xC45B94: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/load_window_gfx-jp.asm:165 STA @VIRTUAL02
    case 0xC45B95: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/load_window_gfx-jp.asm:166 LDA [@VIRTUAL06]
    case 0xC45B97: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/load_window_gfx-jp.asm:167 AND #$00FF
    case 0xC45B99: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_window_gfx-jp.asm:167 AND #$00FF
    // Overlapping static entry reached from 0xC45B99.
    case 0xC45B9B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/load_window_gfx-jp.asm:168 STA @VIRTUAL04
    case 0xC45B9C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/load_window_gfx-jp.asm:169 LDA @LOCAL02
    case 0xC45B9E: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/system/load_window_gfx-jp.asm:170 AND #$FF00
    case 0xC45BA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/system/load_window_gfx-jp.asm:170 AND #$FF00
    // Overlapping static entry reached from 0xC45BA0.
    case 0xC45BA2: cpu.execute_instruction<0xFF>(0x050405, 4); return true;
    // src/system/load_window_gfx-jp.asm:171 ORA @VIRTUAL04
    case 0xC45BA3: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/system/load_window_gfx-jp.asm:172 ORA @VIRTUAL02
    case 0xC45BA5: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/system/load_window_gfx-jp.asm:172 ORA @VIRTUAL02
    // Overlapping static entry reached from 0xC45BA2.
    case 0xC45BA6: cpu.execute_instruction<0x02>(0x000087, 2); return true;
    // src/system/load_window_gfx-jp.asm:173 STA [@LOCAL05]
    case 0xC45BA7: cpu.execute_instruction<0x87>(0x00001E, 2); return true;
    // src/system/load_window_gfx-jp.asm:174 LDY #256
    case 0xC45BA9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000100, 3); return true;
    // src/system/load_window_gfx-jp.asm:174 LDY #256
    // Overlapping static entry reached from 0xC45BA9.
    case 0xC45BAB: cpu.execute_instruction<0x01>(0x0000B7, 2); return true;
    // src/system/load_window_gfx-jp.asm:175 LDA [@VIRTUAL0A],Y
    case 0xC45BAC: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/system/load_window_gfx-jp.asm:175 LDA [@VIRTUAL0A],Y
    // Overlapping static entry reached from 0xC45BAB.
    case 0xC45BAD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:176 STA @LOCAL02
    case 0xC45BAE: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/system/load_window_gfx-jp.asm:177 XBA
    case 0xC45BB0: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:178 AND #$00FF
    case 0xC45BB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_window_gfx-jp.asm:178 AND #$00FF
    // Overlapping static entry reached from 0xC45BB1.
    case 0xC45BB3: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/system/load_window_gfx-jp.asm:179 EOR #$00FF
    case 0xC45BB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0000FF, 3); return true;
    // src/system/load_window_gfx-jp.asm:179 EOR #$00FF
    // Overlapping static entry reached from 0xC45BB4.
    case 0xC45BB6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/load_window_gfx-jp.asm:180 STA @VIRTUAL02
    case 0xC45BB7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/load_window_gfx-jp.asm:181 LDA [@VIRTUAL06],Y
    case 0xC45BB9: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/system/load_window_gfx-jp.asm:182 AND #$00FF
    case 0xC45BBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/load_window_gfx-jp.asm:182 AND #$00FF
    // Overlapping static entry reached from 0xC45BBB.
    case 0xC45BBD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/load_window_gfx-jp.asm:183 STA @VIRTUAL04
    case 0xC45BBE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/system/load_window_gfx-jp.asm:184 LDA @LOCAL02
    case 0xC45BC0: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/system/load_window_gfx-jp.asm:185 AND #$FF00
    case 0xC45BC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/system/load_window_gfx-jp.asm:185 AND #$FF00
    // Overlapping static entry reached from 0xC45BC2.
    case 0xC45BC4: cpu.execute_instruction<0xFF>(0x050405, 4); return true;
    // src/system/load_window_gfx-jp.asm:186 ORA @VIRTUAL04
    case 0xC45BC5: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/system/load_window_gfx-jp.asm:187 ORA @VIRTUAL02
    case 0xC45BC7: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/system/load_window_gfx-jp.asm:187 ORA @VIRTUAL02
    // Overlapping static entry reached from 0xC45BC4.
    case 0xC45BC8: cpu.execute_instruction<0x02>(0x000097, 2); return true;
    // src/system/load_window_gfx-jp.asm:188 STA [@LOCAL05],Y
    case 0xC45BC9: cpu.execute_instruction<0x97>(0x00001E, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx-jp.asm:189 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC45BCB: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx-jp.asm:189 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC45BCD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx-jp.asm:189 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC45BCF: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx-jp.asm:189 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC45BD1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/load_window_gfx-jp.asm:190 INC @VIRTUAL06
    case 0xC45BD3: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/load_window_gfx-jp.asm:191 INC @VIRTUAL06
    case 0xC45BD5: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx-jp.asm:192 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC45BD7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx-jp.asm:192 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC45BD9: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx-jp.asm:192 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC45BDB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx-jp.asm:192 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC45BDD: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/system/load_window_gfx-jp.asm:193 INC @VIRTUAL0A
    case 0xC45BDF: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/system/load_window_gfx-jp.asm:194 INC @VIRTUAL0A
    case 0xC45BE1: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx-jp.asm:195 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC45BE3: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx-jp.asm:195 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC45BE5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx-jp.asm:195 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC45BE7: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx-jp.asm:195 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC45BE9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/load_window_gfx-jp.asm:196 INC @VIRTUAL06
    case 0xC45BEB: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/load_window_gfx-jp.asm:197 INC @VIRTUAL06
    case 0xC45BED: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx-jp.asm:198 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC45BEF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx-jp.asm:198 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC45BF1: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx-jp.asm:198 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC45BF3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx-jp.asm:198 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC45BF5: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/system/load_window_gfx-jp.asm:199 INX
    case 0xC45BF7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/load_window_gfx-jp.asm:201 CPX #8
    case 0xC45BF8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000008, 2); else cpu.execute_instruction<0xE0>(0x000008, 3); return true;
    // src/system/load_window_gfx-jp.asm:201 CPX #8
    // Overlapping static entry reached from 0xC45BF8.
    case 0xC45BFA: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/load_window_gfx-jp.asm:202 BCC @UNKNOWN16
    case 0xC45BFB: cpu.execute_instruction<0x90>(0x00008D, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx-jp.asm:204 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC45BFD: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx-jp.asm:204 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC45BFF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx-jp.asm:204 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC45C01: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx-jp.asm:204 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC45C03: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/load_window_gfx-jp.asm:205 INC @VIRTUAL06
    case 0xC45C05: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/load_window_gfx-jp.asm:206 INC @VIRTUAL06
    case 0xC45C07: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/load_window_gfx-jp.asm:207 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC45C09: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/load_window_gfx-jp.asm:207 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC45C0B: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/load_window_gfx-jp.asm:207 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC45C0D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/load_window_gfx-jp.asm:207 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC45C0F: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/system/load_window_gfx-jp.asm:209 LDA [@LOCAL07]
    case 0xC45C11: cpu.execute_instruction<0xA7>(0x000024, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/system/load_window_gfx-jp.asm:210 BNEL @UNKNOWN14
    case 0xC45C13: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/system/load_window_gfx-jp.asm:210 BNEL @UNKNOWN14
    case 0xC45C15: cpu.execute_instruction<0x4C>(0x005B4C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/load_window_gfx-jp.asm:211 END_C_FUNCTION
    case 0xC45C18: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/load_window_gfx-jp.asm:211 END_C_FUNCTION
    case 0xC45C19: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/longjmp.asm (source_named).
bool execute_system_longjmp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/longjmp.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08F59: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/longjmp.asm:4 TAY
    case 0xC08F5B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/longjmp.asm:5 PEA $0000
    case 0xC08F5C: cpu.execute_instruction<0xF4>(0x000000, 3); return true;
    // src/system/longjmp.asm:6 PLB
    case 0xC08F5F: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/longjmp.asm:7 PLB
    case 0xC08F60: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/longjmp.asm:8 LDA __BSS_START__+7,Y
    case 0xC08F61: cpu.execute_instruction<0xB9>(0x000007, 3); return true;
    // src/system/longjmp.asm:9 TCS
    case 0xC08F64: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/system/longjmp.asm:10 LDA __BSS_START__+5,Y
    case 0xC08F65: cpu.execute_instruction<0xB9>(0x000005, 3); return true;
    // src/system/longjmp.asm:11 TCD
    case 0xC08F68: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/longjmp.asm:12 LDA __BSS_START__+3,Y
    case 0xC08F69: cpu.execute_instruction<0xB9>(0x000003, 3); return true;
    // src/system/longjmp.asm:13 PHA
    case 0xC08F6C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/longjmp.asm:14 PLP
    case 0xC08F6D: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/longjmp.asm:15 PLP
    case 0xC08F6E: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/longjmp.asm:16 LDA __BSS_START__,Y
    case 0xC08F6F: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/system/longjmp.asm:17 STA $01,S
    case 0xC08F72: cpu.execute_instruction<0x83>(0x000001, 2); return true;
    // src/system/longjmp.asm:18 LDA __BSS_START__+2,Y
    case 0xC08F74: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // src/system/longjmp.asm:19 STA $03,S
    case 0xC08F77: cpu.execute_instruction<0x83>(0x000003, 2); return true;
    // src/system/longjmp.asm:20 PLB
    case 0xC08F79: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/system/longjmp.asm:21 TXA
    case 0xC08F7A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/longjmp.asm:22 RTL
    case 0xC08F7B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/main.asm (source_named).
bool execute_system_main_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/main.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0B7BE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/main.asm:6 END_STACK_VARS
    case 0xC0B7C0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/main.asm:6 END_STACK_VARS
    case 0xC0B7C1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/main.asm:6 END_STACK_VARS
    case 0xC0B7C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/main.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0B7C2.
    case 0xC0B7C4: cpu.execute_instruction<0xFF>(0x90225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/main.asm:6 END_STACK_VARS
    case 0xC0B7C5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/main.asm:7 JSL UNKNOWN_C43317
    case 0xC0B7C6: cpu.execute_instruction<0x22>(0xC43090, 4); return true;
    // src/system/main.asm:7 JSL UNKNOWN_C43317
    // Overlapping static entry reached from 0xC0B7C4.
    case 0xC0B7C8: cpu.execute_instruction<0x30>(0x0000C4, 2); return true;
    // src/system/main.asm:8 LDA #.LOWORD(JMP_BUF1)
    case 0xC0B7CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000A20, 3); return true;
    // src/system/main.asm:8 LDA #.LOWORD(JMP_BUF1)
    // Overlapping static entry reached from 0xC0B7CA.
    case 0xC0B7CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/main.asm:9 JSL SETJMP
    case 0xC0B7CD: cpu.execute_instruction<0x22>(0xC08F33, 4); return true;
    // src/system/main.asm:10 JSL INIT_INTRO
    case 0xC0B7D1: cpu.execute_instruction<0x22>(0xC4ADB2, 4); return true;
    // src/system/main.asm:11 JSR FILE_SELECT_INIT
    case 0xC0B7D5: cpu.execute_instruction<0x20>(0x00B504, 3); return true;
    // src/system/main.asm:12 JSR UNKNOWN_C0B67F
    case 0xC0B7D8: cpu.execute_instruction<0x20>(0x00B652, 3); return true;
    // src/system/main.asm:13 JSL OAM_CLEAR
    case 0xC0B7DB: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/system/main.asm:14 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC0B7DF: cpu.execute_instruction<0x22>(0xC09445, 4); return true;
    // src/system/main.asm:15 LDX #1
    case 0xC0B7E3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/system/main.asm:15 LDX #1
    // Overlapping static entry reached from 0xC0B7E3.
    case 0xC0B7E5: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/system/main.asm:16 TXA
    case 0xC0B7E6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/main.asm:17 JSL FADE_IN
    case 0xC0B7E7: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/system/main.asm:18 JSL UPDATE_SCREEN
    case 0xC0B7EB: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/system/main.asm:25 JSL OAM_CLEAR
    case 0xC0B7EF: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/system/main.asm:26 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC0B7F3: cpu.execute_instruction<0x22>(0xC09445, 4); return true;
    // src/system/main.asm:27 JSL UPDATE_SCREEN
    case 0xC0B7F7: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/system/main.asm:28 JSL UNKNOWN_C4A7B0
    case 0xC0B7FB: cpu.execute_instruction<0x22>(0xC47C19, 4); return true;
    // src/system/main.asm:29 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0B7FF: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/system/main.asm:30 LDA CURRENT_QUEUED_INTERACTION
    case 0xC0B803: cpu.execute_instruction<0xAD>(0x006188, 3); return true;
    // src/system/main.asm:31 SEC
    case 0xC0B806: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/main.asm:32 SBC NEXT_QUEUED_INTERACTION
    case 0xC0B807: cpu.execute_instruction<0xED>(0x00618A, 3); return true;
    // src/system/main.asm:33 BEQ @UNKNOWN1
    case 0xC0B80A: cpu.execute_instruction<0xF0>(0x000019, 2); return true;
    // src/system/main.asm:34 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0B80C: cpu.execute_instruction<0xAD>(0x0060E6, 3); return true;
    // src/system/main.asm:35 BNE @UNKNOWN1
    case 0xC0B80F: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/system/main.asm:36 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC0B811: cpu.execute_instruction<0xAD>(0x005140, 3); return true;
    // src/system/main.asm:37 BNE @UNKNOWN1
    case 0xC0B814: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/system/main.asm:38 LDA BATTLE_MODE
    case 0xC0B816: cpu.execute_instruction<0xAD>(0x005148, 3); return true;
    // src/system/main.asm:39 BNE @UNKNOWN1
    case 0xC0B819: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/system/main.asm:40 JSL PROCESS_QUEUED_INTERACTIONS
    case 0xC0B81B: cpu.execute_instruction<0x22>(0xC0781C, 4); return true;
    // src/system/main.asm:41 INC INPUT_DISABLE_FRAME_COUNTER
    case 0xC0B81F: cpu.execute_instruction<0xEE>(0x0060FA, 3); return true;
    // src/system/main.asm:42 JMP @UNKNOWN20
    case 0xC0B822: cpu.execute_instruction<0x4C>(0x00B939, 3); return true;
    // src/system/main.asm:44 LDA GAME_STATE + game_state::unknownB0
    case 0xC0B825: cpu.execute_instruction<0xAD>(0x009B56, 3); return true;
    // src/system/main.asm:45 CMP #2
    case 0xC0B828: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/system/main.asm:45 CMP #2
    // Overlapping static entry reached from 0xC0B828.
    case 0xC0B82A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/main.asm:46 BEQL @UNKNOWN20
    case 0xC0B82B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/main.asm:46 BEQL @UNKNOWN20
    case 0xC0B82D: cpu.execute_instruction<0x4C>(0x00B939, 3); return true;
    // src/system/main.asm:47 LDX GAME_STATE+game_state::walking_style
    case 0xC0B830: cpu.execute_instruction<0xAE>(0x009B34, 3); return true;
    // src/system/main.asm:48 CPX #WALKING_STYLE::ESCALATOR
    case 0xC0B833: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00000C, 2); else cpu.execute_instruction<0xE0>(0x00000C, 3); return true;
    // src/system/main.asm:48 CPX #WALKING_STYLE::ESCALATOR
    // Overlapping static entry reached from 0xC0B833.
    case 0xC0B835: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/main.asm:49 BEQL @UNKNOWN20
    case 0xC0B836: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/main.asm:49 BEQL @UNKNOWN20
    case 0xC0B838: cpu.execute_instruction<0x4C>(0x00B939, 3); return true;
    // src/system/main.asm:50 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0B83B: cpu.execute_instruction<0xAD>(0x0060E6, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/system/main.asm:51 BNEL @UNKNOWN20
    case 0xC0B83E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/system/main.asm:51 BNEL @UNKNOWN20
    case 0xC0B840: cpu.execute_instruction<0x4C>(0x00B939, 3); return true;
    // src/system/main.asm:52 LDA BATTLE_MODE
    case 0xC0B843: cpu.execute_instruction<0xAD>(0x005148, 3); return true;
    // src/system/main.asm:53 BEQ @UNKNOWN5
    case 0xC0B846: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/system/main.asm:54 JSL INIT_BATTLE_OVERWORLD
    case 0xC0B848: cpu.execute_instruction<0x22>(0xC0B717, 4); return true;
    // src/system/main.asm:55 INC INPUT_DISABLE_FRAME_COUNTER
    case 0xC0B84C: cpu.execute_instruction<0xEE>(0x0060FA, 3); return true;
    // src/system/main.asm:56 BRA @UNKNOWN6
    case 0xC0B84F: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/system/main.asm:58 LDA PAD_PRESS
    case 0xC0B851: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/system/main.asm:59 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC0B854: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/system/main.asm:59 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC0B854.
    case 0xC0B856: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/main.asm:60 BEQ @UNKNOWN6
    case 0xC0B857: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/system/main.asm:61 CPX #3
    case 0xC0B859: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/system/main.asm:61 CPX #3
    // Overlapping static entry reached from 0xC0B859.
    case 0xC0B85B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/system/main.asm:62 BNE @UNKNOWN6
    case 0xC0B85C: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/system/main.asm:63 JSL UNKNOWN_C0943C
    case 0xC0B85E: cpu.execute_instruction<0x22>(0xC0941B, 4); return true;
    // src/system/main.asm:64 JSL GET_OFF_BICYCLE
    case 0xC0B862: cpu.execute_instruction<0x22>(0xC1BD2C, 4); return true;
    // src/system/main.asm:65 JSL UNKNOWN_C09451
    case 0xC0B866: cpu.execute_instruction<0x22>(0xC09430, 4); return true;
    // src/system/main.asm:66 JMP @LOOP_BEGIN
    case 0xC0B86A: cpu.execute_instruction<0x4C>(0x00B7EF, 3); return true;
    // src/system/main.asm:68 LDA DEBUG
    case 0xC0B86D: cpu.execute_instruction<0xAD>(0x0046F2, 3); return true;
    // src/system/main.asm:69 BEQ @NO_DEBUG
    case 0xC0B870: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/system/main.asm:70 LDA PAD_STATE
    case 0xC0B872: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/system/main.asm:71 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC0B875: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/system/main.asm:71 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC0B875.
    case 0xC0B877: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x000FF0, 3); return true;
    // src/system/main.asm:72 BEQ @DEBUG_PAD2_B_HELD
    case 0xC0B878: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/system/main.asm:72 BEQ @DEBUG_PAD2_B_HELD
    // Overlapping static entry reached from 0xC0B877.
    case 0xC0B879: cpu.execute_instruction<0x0F>(0x006DAD, 4); return true;
    // src/system/main.asm:73 LDA PAD_PRESS
    case 0xC0B87A: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/system/main.asm:74 AND #PAD::R_BUTTON
    case 0xC0B87D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x000010, 3); return true;
    // src/system/main.asm:74 AND #PAD::R_BUTTON
    // Overlapping static entry reached from 0xC0B87D.
    case 0xC0B87F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/main.asm:75 BEQ @DEBUG_PAD2_B_HELD
    case 0xC0B880: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/system/main.asm:76 JSL DEBUG_Y_BUTTON_MENU
    case 0xC0B882: cpu.execute_instruction<0x22>(0xC1357F, 4); return true;
    // src/system/main.asm:77 JMP @LOOP_BEGIN
    case 0xC0B886: cpu.execute_instruction<0x4C>(0x00B7EF, 3); return true;
    // src/system/main.asm:79 LDA PAD_PRESS + 2
    case 0xC0B889: cpu.execute_instruction<0xAD>(0x00006F, 3); return true;
    // src/system/main.asm:80 AND #PAD::A_BUTTON
    case 0xC0B88C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/system/main.asm:80 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xC0B88C.
    case 0xC0B88E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/main.asm:81 BEQ @DEBUG_PAD2_A_HELD
    case 0xC0B88F: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/system/main.asm:82 JSL GET_DISTANCE_TO_MAGIC_TRUFFLE
    case 0xC0B891: cpu.execute_instruction<0x22>(0xC46738, 4); return true;
    // src/system/main.asm:84 LDA PAD_PRESS + 2
    case 0xC0B895: cpu.execute_instruction<0xAD>(0x00006F, 3); return true;
    // src/system/main.asm:85 AND #PAD::B_BUTTON
    case 0xC0B898: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/system/main.asm:85 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC0B898.
    case 0xC0B89A: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/system/main.asm:86 BEQ @NO_DEBUG
    case 0xC0B89B: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/system/main.asm:87 JSL TEST_YOUR_SANCTUARY_DISPLAY
    case 0xC0B89D: cpu.execute_instruction<0x22>(0xC4B573, 4); return true;
    // src/system/main.asm:89 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0B8A1: cpu.execute_instruction<0xAD>(0x0060E6, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/system/main.asm:90 BNEL @LOOP_BEGIN
    case 0xC0B8A4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/system/main.asm:90 BNEL @LOOP_BEGIN
    case 0xC0B8A6: cpu.execute_instruction<0x4C>(0x00B7EF, 3); return true;
    // src/system/main.asm:91 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC0B8A9: cpu.execute_instruction<0xAD>(0x005140, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/system/main.asm:92 BNEL @LOOP_BEGIN
    case 0xC0B8AC: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/system/main.asm:92 BNEL @LOOP_BEGIN
    case 0xC0B8AE: cpu.execute_instruction<0x4C>(0x00B7EF, 3); return true;
    // src/system/main.asm:93 LDA INPUT_DISABLE_FRAME_COUNTER
    case 0xC0B8B1: cpu.execute_instruction<0xAD>(0x0060FA, 3); return true;
    // src/system/main.asm:94 BNE @UNKNOWN15
    case 0xC0B8B4: cpu.execute_instruction<0xD0>(0x000045, 2); return true;
    // src/system/main.asm:95 LDA PENDING_INTERACTIONS
    case 0xC0B8B6: cpu.execute_instruction<0xAD>(0x006120, 3); return true;
    // src/system/main.asm:96 BNE @UNKNOWN16
    case 0xC0B8B9: cpu.execute_instruction<0xD0>(0x000043, 2); return true;
    // src/system/main.asm:97 LDA PAD_PRESS
    case 0xC0B8BB: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/system/main.asm:98 AND #PAD::A_BUTTON
    case 0xC0B8BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/system/main.asm:98 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xC0B8BE.
    case 0xC0B8C0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/main.asm:99 BEQ @NO_OPEN_MENU
    case 0xC0B8C1: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/system/main.asm:100 JSL OPEN_MENU_BUTTON
    case 0xC0B8C3: cpu.execute_instruction<0x22>(0xC13A85, 4); return true;
    // src/system/main.asm:101 BRA @UNKNOWN16
    case 0xC0B8C7: cpu.execute_instruction<0x80>(0x000035, 2); return true;
    // src/system/main.asm:103 LDA PAD_PRESS
    case 0xC0B8C9: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/system/main.asm:104 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC0B8CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/system/main.asm:104 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC0B8CC.
    case 0xC0B8CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x000EF0, 3); return true;
    // src/system/main.asm:105 BEQ @NO_OPEN_HPPP_DISPLAY
    case 0xC0B8CF: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/system/main.asm:105 BEQ @NO_OPEN_HPPP_DISPLAY
    // Overlapping static entry reached from 0xC0B8CE.
    case 0xC0B8D0: cpu.execute_instruction<0x0E>(0x0034AD, 3); return true;
    // src/system/main.asm:106 LDA GAME_STATE+game_state::walking_style
    case 0xC0B8D1: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/system/main.asm:106 LDA GAME_STATE+game_state::walking_style
    // Overlapping static entry reached from 0xC0B8D0.
    case 0xC0B8D3: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/main.asm:107 CMP #WALKING_STYLE::BICYCLE
    case 0xC0B8D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/system/main.asm:107 CMP #WALKING_STYLE::BICYCLE
    // Overlapping static entry reached from 0xC0B8D4.
    case 0xC0B8D6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/main.asm:108 BEQ @NO_OPEN_HPPP_DISPLAY
    case 0xC0B8D7: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/system/main.asm:109 JSL OPEN_HPPP_DISPLAY
    case 0xC0B8D9: cpu.execute_instruction<0x22>(0xC1410C, 4); return true;
    // src/system/main.asm:110 BRA @UNKNOWN16
    case 0xC0B8DD: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/system/main.asm:112 LDA PAD_PRESS
    case 0xC0B8DF: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/system/main.asm:113 AND #PAD::X_BUTTON
    case 0xC0B8E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000040, 2); else cpu.execute_instruction<0x29>(0x000040, 3); return true;
    // src/system/main.asm:113 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xC0B8E2.
    case 0xC0B8E4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/main.asm:114 BEQ @NO_OPEN_TOWN_MAP
    case 0xC0B8E5: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/system/main.asm:115 JSL SHOW_TOWN_MAP
    case 0xC0B8E7: cpu.execute_instruction<0x22>(0xC1414F, 4); return true;
    // src/system/main.asm:116 BRA @UNKNOWN16
    case 0xC0B8EB: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/system/main.asm:118 LDA PAD_PRESS
    case 0xC0B8ED: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/system/main.asm:119 AND #PAD::L_BUTTON
    case 0xC0B8F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000020, 2); else cpu.execute_instruction<0x29>(0x000020, 3); return true;
    // src/system/main.asm:119 AND #PAD::L_BUTTON
    // Overlapping static entry reached from 0xC0B8F0.
    case 0xC0B8F2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/main.asm:120 BEQ @UNKNOWN16
    case 0xC0B8F3: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/system/main.asm:121 JSL OPEN_MENU_BUTTON_CHECKTALK
    case 0xC0B8F5: cpu.execute_instruction<0x22>(0xC1409E, 4); return true;
    // src/system/main.asm:122 BRA @UNKNOWN16
    case 0xC0B8F9: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/system/main.asm:124 DEC INPUT_DISABLE_FRAME_COUNTER
    case 0xC0B8FB: cpu.execute_instruction<0xCE>(0x0060FA, 3); return true;
    // src/system/main.asm:126 LDA PSI_TELEPORT_DESTINATION
    case 0xC0B8FE: cpu.execute_instruction<0xAD>(0x00A141, 3); return true;
    // src/system/main.asm:127 BEQ @UNKNOWN17
    case 0xC0B901: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/system/main.asm:128 JSL TELEPORT_MAINLOOP
    case 0xC0B903: cpu.execute_instruction<0x22>(0xC0EA63, 4); return true;
    // src/system/main.asm:130 LDA DEBUG
    case 0xC0B907: cpu.execute_instruction<0xAD>(0x0046F2, 3); return true;
    // src/system/main.asm:131 BEQ @UNKNOWN20
    case 0xC0B90A: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/system/main.asm:132 LDA PAD_PRESS + 2
    case 0xC0B90C: cpu.execute_instruction<0xAD>(0x00006F, 3); return true;
    // src/system/main.asm:133 AND #PAD::B_BUTTON
    case 0xC0B90F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/system/main.asm:133 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC0B90F.
    case 0xC0B911: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/system/main.asm:134 BEQ @UNKNOWN20
    case 0xC0B912: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/system/main.asm:135 LDA #0
    case 0xC0B914: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/main.asm:135 LDA #0
    // Overlapping static entry reached from 0xC0B914.
    case 0xC0B916: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/main.asm:136 STA @LOCAL00
    case 0xC0B917: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/main.asm:137 BRA @UNKNOWN19
    case 0xC0B919: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/system/main.asm:139 LDY #.SIZEOF(char_struct)
    case 0xC0B91B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/system/main.asm:139 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC0B91B.
    case 0xC0B91D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/system/main.asm:140 JSL MULT168
    case 0xC0B91E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/system/main.asm:141 TAX
    case 0xC0B922: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/main.asm:142 LDA PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xC0B923: cpu.execute_instruction<0xBD>(0x009C88, 3); return true;
    // src/system/main.asm:143 STA PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC0B926: cpu.execute_instruction<0x9D>(0x009CC5, 3); return true;
    // src/system/main.asm:144 LDA PARTY_CHARACTERS+char_struct::max_pp,X
    case 0xC0B929: cpu.execute_instruction<0xBD>(0x009C8A, 3); return true;
    // src/system/main.asm:145 STA PARTY_CHARACTERS+char_struct::current_pp_target,X
    case 0xC0B92C: cpu.execute_instruction<0x9D>(0x009CCB, 3); return true;
    // src/system/main.asm:146 LDA @LOCAL00
    case 0xC0B92F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/main.asm:147 INC
    case 0xC0B931: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/main.asm:148 STA @LOCAL00
    case 0xC0B932: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/main.asm:150 CMP #TOTAL_PARTY_COUNT
    case 0xC0B934: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/system/main.asm:150 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC0B934.
    case 0xC0B936: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/main.asm:151 BCC @UNKNOWN18
    case 0xC0B937: cpu.execute_instruction<0x90>(0x0000E2, 2); return true;
    // src/system/main.asm:153 JSL UNKNOWN_C04FFE
    case 0xC0B939: cpu.execute_instruction<0x22>(0xC05223, 4); return true;
    // src/system/main.asm:154 CMP #0
    case 0xC0B93D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/system/main.asm:154 CMP #0
    // Overlapping static entry reached from 0xC0B93D.
    case 0xC0B93F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/system/main.asm:155 BNE @UNKNOWN21
    case 0xC0B940: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/system/main.asm:156 JSL SPAWN
    case 0xC0B942: cpu.execute_instruction<0x22>(0xC499F0, 4); return true;
    // src/system/main.asm:157 CMP #0
    case 0xC0B946: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/system/main.asm:157 CMP #0
    // Overlapping static entry reached from 0xC0B946.
    case 0xC0B948: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/system/main.asm:158 BEQ @UNKNOWN21
    case 0xC0B949: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/system/main.asm:159 LDX #0
    case 0xC0B94B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/main.asm:159 LDX #0
    // Overlapping static entry reached from 0xC0B94B.
    case 0xC0B94D: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/system/main.asm:160 LDA #.LOWORD(JMP_BUF1)
    case 0xC0B94E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000A20, 3); return true;
    // src/system/main.asm:160 LDA #.LOWORD(JMP_BUF1)
    // Overlapping static entry reached from 0xC0B94E.
    case 0xC0B950: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/main.asm:161 JSL LONGJMP
    case 0xC0B951: cpu.execute_instruction<0x22>(0xC08F59, 4); return true;
    // src/system/main.asm:163 LDA DEBUG
    case 0xC0B955: cpu.execute_instruction<0xAD>(0x0046F2, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/main.asm:164 BEQL @LOOP_BEGIN
    case 0xC0B958: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/main.asm:164 BEQL @LOOP_BEGIN
    case 0xC0B95A: cpu.execute_instruction<0x4C>(0x00B7EF, 3); return true;
    // src/system/main.asm:165 LDA PAD_STATE
    case 0xC0B95D: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/system/main.asm:166 AND #PAD::START_BUTTON
    case 0xC0B960: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001000, 3); return true;
    // src/system/main.asm:166 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xC0B960.
    case 0xC0B962: cpu.execute_instruction<0x10>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/main.asm:167 BEQL @LOOP_BEGIN
    case 0xC0B963: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/main.asm:167 BEQL @LOOP_BEGIN
    // Overlapping static entry reached from 0xC0B962.
    case 0xC0B964: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/main.asm:167 BEQL @LOOP_BEGIN
    case 0xC0B965: cpu.execute_instruction<0x4C>(0x00B7EF, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/main.asm:167 BEQL @LOOP_BEGIN
    // Overlapping static entry reached from 0xC0B964.
    case 0xC0B966: cpu.execute_instruction<0xEF>(0x65ADB7, 4); return true;
    // src/system/main.asm:168 LDA PAD_STATE
    case 0xC0B968: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/system/main.asm:168 LDA PAD_STATE
    // Overlapping static entry reached from 0xC0B966.
    case 0xC0B96A: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/system/main.asm:169 AND #PAD::SELECT_BUTTON
    case 0xC0B96B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x002000, 3); return true;
    // src/system/main.asm:169 AND #PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC0B96B.
    case 0xC0B96D: cpu.execute_instruction<0x20>(0x0003D0, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/system/main.asm:170 BEQL @LOOP_BEGIN
    case 0xC0B96E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/system/main.asm:170 BEQL @LOOP_BEGIN
    case 0xC0B970: cpu.execute_instruction<0x4C>(0x00B7EF, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/main.asm:171 END_C_FUNCTION
    case 0xC0B973: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/main.asm:171 END_C_FUNCTION
    case 0xC0B974: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/asl16.asm (source_named).
bool execute_system_math_asl16_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/asl16.asm:3 ASL
    case 0xC0921F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/math/asl16.asm:5 DEY
    case 0xC09220: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/math/asl16.asm:6 BPL ASL16
    case 0xC09221: cpu.execute_instruction<0x10>(0x0000FC, 2); return true;
    // src/system/math/asl16.asm:7 RTL
    case 0xC09223: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/asl32.asm (source_named).
bool execute_system_math_asl32_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/asl32.asm:3 ASL $06
    case 0xC09224: cpu.execute_instruction<0x06>(0x000006, 2); return true;
    // src/system/math/asl32.asm:4 ROL $08
    case 0xC09226: cpu.execute_instruction<0x26>(0x000008, 2); return true;
    // src/system/math/asl32.asm:6 DEY
    case 0xC09228: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/math/asl32.asm:7 BPL ASL32
    case 0xC09229: cpu.execute_instruction<0x10>(0x0000F9, 2); return true;
    // src/system/math/asl32.asm:8 RTL
    case 0xC0922B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/asr16.asm (source_named).
bool execute_system_math_asr16_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/asr16.asm:4 CMP #$0000
    case 0xC0923D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/system/math/asr16.asm:4 CMP #$0000
    // Overlapping static entry reached from 0xC0923D.
    case 0xC0923F: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // src/system/math/asr16.asm:5 BPL ASR8_UNKNOWN1
    case 0xC09240: cpu.execute_instruction<0x10>(0x0000F1, 2); return true;
    // src/system/math/asr16.asm:6 BMI ASR8_UNKNOWN3
    case 0xC09242: cpu.execute_instruction<0x30>(0x0000F5, 2); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/asr32.asm (source_named).
bool execute_system_math_asr32_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/asr32.asm:3 LDA $08
    case 0xC09244: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/math/asr32.asm:4 BPL ASR32_UNKNOWN1
    case 0xC09246: cpu.execute_instruction<0x10>(0x000006, 2); return true;
    // src/system/math/asr32.asm:5 BMI ASR32_UNKNOWN3
    case 0xC09248: cpu.execute_instruction<0x30>(0x00000D, 2); return true;
    // src/system/math/asr32.asm:7 LSR $08
    case 0xC0924A: cpu.execute_instruction<0x46>(0x000008, 2); return true;
    // src/system/math/asr32.asm:8 ROR $06
    case 0xC0924C: cpu.execute_instruction<0x66>(0x000006, 2); return true;
    // src/system/math/asr32.asm:10 DEY
    case 0xC0924E: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/math/asr32.asm:11 BPL ASR32_UNKNOWN0
    case 0xC0924F: cpu.execute_instruction<0x10>(0x0000F9, 2); return true;
    // src/system/math/asr32.asm:12 RTL
    case 0xC09251: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/system/math/asr32.asm:14 SEC
    case 0xC09252: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/math/asr32.asm:15 ROR $08
    case 0xC09253: cpu.execute_instruction<0x66>(0x000008, 2); return true;
    // src/system/math/asr32.asm:16 ROR $06
    case 0xC09255: cpu.execute_instruction<0x66>(0x000006, 2); return true;
    // src/system/math/asr32.asm:18 DEY
    case 0xC09257: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/math/asr32.asm:19 BPL ASR32_UNKNOWN2
    case 0xC09258: cpu.execute_instruction<0x10>(0x0000F8, 2); return true;
    // src/system/math/asr32.asm:20 RTL
    case 0xC0925A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/asr8.asm (source_named).
bool execute_system_math_asr8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/asr8.asm:4 CMP #$0000
    case 0xC0922C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x001000, 3); return true;
    // src/system/math/asr8.asm:5 BPL ASR8_UNKNOWN1
    case 0xC0922E: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/system/math/asr8.asm:5 BPL ASR8_UNKNOWN1
    // Overlapping static entry reached from 0xC0922C.
    case 0xC0922F: cpu.execute_instruction<0x03>(0x000030, 2); return true;
    // src/system/math/asr8.asm:6 BMI ASR8_UNKNOWN3
    case 0xC09230: cpu.execute_instruction<0x30>(0x000007, 2); return true;
    // src/system/math/asr8.asm:6 BMI ASR8_UNKNOWN3
    // Overlapping static entry reached from 0xC0922F.
    case 0xC09231: cpu.execute_instruction<0x07>(0x00004A, 2); return true;
    // src/system/math/asr8.asm:8 LSR
    case 0xC09232: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/math/asr8.asm:10 DEY
    case 0xC09233: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/math/asr8.asm:11 BPL ASR8_UNKNOWN0
    case 0xC09234: cpu.execute_instruction<0x10>(0x0000FC, 2); return true;
    // src/system/math/asr8.asm:12 RTL
    case 0xC09236: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/system/math/asr8.asm:14 SEC
    case 0xC09237: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/math/asr8.asm:15 ROR
    case 0xC09238: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/math/asr8.asm:17 DEY
    case 0xC09239: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/math/asr8.asm:18 BPL ASR8_UNKNOWN2
    case 0xC0923A: cpu.execute_instruction<0x10>(0x0000FB, 2); return true;
    // src/system/math/asr8.asm:19 RTL
    case 0xC0923C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/cosine_sine.asm (source_named).
bool execute_system_math_cosine_sine_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/cosine_sine.asm:3 PHA
    case 0xC0B3DF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/math/cosine_sine.asm:4 TXA
    case 0xC0B3E0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/math/cosine_sine.asm:5 SEC
    case 0xC0B3E1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/system/math/cosine_sine.asm:6 SBC #$0040
    case 0xC0B3E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000040, 2); else cpu.execute_instruction<0xE9>(0x000040, 3); return true;
    // src/system/math/cosine_sine.asm:6 SBC #$0040
    // Overlapping static entry reached from 0xC0B3E2.
    case 0xC0B3E4: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/system/math/cosine_sine.asm:7 AND #$00FF
    case 0xC0B3E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/math/cosine_sine.asm:7 AND #$00FF
    // Overlapping static entry reached from 0xC0B3E5.
    case 0xC0B3E7: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/system/math/cosine_sine.asm:8 TAX
    case 0xC0B3E8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/math/cosine_sine.asm:9 PLA
    case 0xC0B3E9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/math/cosine_sine.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC0B3EA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/math/cosine_sine.asm:12 STA f:M7A
    case 0xC0B3EC: cpu.execute_instruction<0x8F>(0x00211B, 4); return true;
    // src/system/math/cosine_sine.asm:13 XBA
    case 0xC0B3F0: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/math/cosine_sine.asm:14 STA f:M7A
    case 0xC0B3F1: cpu.execute_instruction<0x8F>(0x00211B, 4); return true;
    // src/system/math/cosine_sine.asm:15 LDA f:SINE_LOOKUP_TABLE,X
    case 0xC0B3F5: cpu.execute_instruction<0xBF>(0xC0B404, 4); return true;
    // src/system/math/cosine_sine.asm:16 STA f:M7B
    case 0xC0B3F9: cpu.execute_instruction<0x8F>(0x00211C, 4); return true;
    // src/system/math/cosine_sine.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC0B3FD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/cosine_sine.asm:18 LDA f:MPYM
    case 0xC0B3FF: cpu.execute_instruction<0xAF>(0x002135, 4); return true;
    // src/system/math/cosine_sine.asm:19 RTL
    case 0xC0B403: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/division16.asm (source_named).
bool execute_system_math_division16_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/division16.asm:4 PHA
    case 0xC090C8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/math/division16.asm:5 STY TEMP_DIVIDEND
    case 0xC090C9: cpu.execute_instruction<0x8C>(0x0000B2, 3); return true;
    // src/system/math/division16.asm:6 EOR TEMP_DIVIDEND
    case 0xC090CC: cpu.execute_instruction<0x4D>(0x0000B2, 3); return true;
    // src/system/math/division16.asm:7 STA TEMP_DIVIDEND
    case 0xC090CF: cpu.execute_instruction<0x8D>(0x0000B2, 3); return true;
    // src/system/math/division16.asm:8 PLA
    case 0xC090D2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/math/division16.asm:9 JSL DIVISION16S
    case 0xC090D3: cpu.execute_instruction<0x22>(0xC0912D, 4); return true;
    // src/system/math/division16.asm:10 ROL TEMP_DIVIDEND
    case 0xC090D7: cpu.execute_instruction<0x2E>(0x0000B2, 3); return true;
    // src/system/math/division16.asm:11 BCC @UNKNOWN0
    case 0xC090DA: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // src/system/math/division16.asm:12 EOR #$FFFF
    case 0xC090DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/system/math/division16.asm:12 EOR #$FFFF
    // Overlapping static entry reached from 0xC090DC.
    case 0xC090DE: cpu.execute_instruction<0xFF>(0xA56B1A, 4); return true;
    // src/system/math/division16.asm:13 INC
    case 0xC090DF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/math/division16.asm:15 RTL
    case 0xC090E0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/division16s.asm (source_named).
bool execute_system_math_division16s_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/division16s.asm:5 PHA
    case 0xC0912D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/math/division16s.asm:6 TYA
    case 0xC0912E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/division16s.asm:7 BPL @DIVIDEND_POSITIVE
    case 0xC0912F: cpu.execute_instruction<0x10>(0x000005, 2); return true;
    // src/system/math/division16s.asm:8 EOR #$FFFF
    case 0xC09131: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/system/math/division16s.asm:8 EOR #$FFFF
    // Overlapping static entry reached from 0xC09131.
    case 0xC09133: cpu.execute_instruction<0xFF>(0x68A81A, 4); return true;
    // src/system/math/division16s.asm:9 INC
    case 0xC09134: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/math/division16s.asm:10 TAY
    case 0xC09135: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/math/division16s.asm:12 PLA
    case 0xC09136: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/math/division16s.asm:13 BPL DIVISION16S_DIVISOR_POSITIVE
    case 0xC09137: cpu.execute_instruction<0x10>(0x000004, 2); return true;
    // src/system/math/division16s.asm:14 EOR #$FFFF
    case 0xC09139: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/system/math/division16s.asm:14 EOR #$FFFF
    // Overlapping static entry reached from 0xC09139.
    case 0xC0913B: cpu.execute_instruction<0xFF>(0xAE8D1A, 4); return true;
    // src/system/math/division16s.asm:15 INC
    case 0xC0913C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/math/division16s.asm:17 STA DIV_MULT_TMP
    case 0xC0913D: cpu.execute_instruction<0x8D>(0x0000AE, 3); return true;
    // src/system/math/division16s.asm:17 STA DIV_MULT_TMP
    // Overlapping static entry reached from 0xC0913B.
    case 0xC0913F: cpu.execute_instruction<0x00>(0x00008C, 2); return true;
    // src/system/math/division16s.asm:18 STY DIV_MULT_TMP2
    case 0xC09140: cpu.execute_instruction<0x8C>(0x0000B0, 3); return true;
    // src/system/math/division16s.asm:19 LDA #$0000
    case 0xC09143: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/math/division16s.asm:19 LDA #$0000
    // Overlapping static entry reached from 0xC09143.
    case 0xC09145: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/system/math/division16s.asm:20 LDY #$0010
    case 0xC09146: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x000010, 3); return true;
    // src/system/math/division16s.asm:20 LDY #$0010
    // Overlapping static entry reached from 0xC09146.
    case 0xC09148: cpu.execute_instruction<0x00>(0x00002E, 2); return true;
    // src/system/math/division16s.asm:22 ROL DIV_MULT_TMP
    case 0xC09149: cpu.execute_instruction<0x2E>(0x0000AE, 3); return true;
    // src/system/math/division16s.asm:23 ROL
    case 0xC0914C: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/system/math/division16s.asm:24 CMP DIV_MULT_TMP2
    case 0xC0914D: cpu.execute_instruction<0xCD>(0x0000B0, 3); return true;
    // src/system/math/division16s.asm:25 BCC @OVERFLOW
    case 0xC09150: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/system/math/division16s.asm:26 SBC DIV_MULT_TMP2
    case 0xC09152: cpu.execute_instruction<0xED>(0x0000B0, 3); return true;
    // src/system/math/division16s.asm:28 DEY
    case 0xC09155: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/math/division16s.asm:29 BNE @LOOP_BEGIN
    case 0xC09156: cpu.execute_instruction<0xD0>(0x0000F1, 2); return true;
    // src/system/math/division16s.asm:30 TAY
    case 0xC09158: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/math/division16s.asm:31 LDA DIV_MULT_TMP
    case 0xC09159: cpu.execute_instruction<0xAD>(0x0000AE, 3); return true;
    // src/system/math/division16s.asm:32 ROL
    case 0xC0915C: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/system/math/division16s.asm:33 RTL
    case 0xC0915D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/division32.asm (source_named).
bool execute_system_math_division32_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/division32.asm:3 LDA $08
    case 0xC090E1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/math/division32.asm:3 LDA $08
    // Overlapping static entry reached from 0xC090DE.
    case 0xC090E2: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/math/division32.asm:4 EOR $0C
    case 0xC090E3: cpu.execute_instruction<0x45>(0x00000C, 2); return true;
    // src/system/math/division32.asm:5 STA TEMP_DIVIDEND
    case 0xC090E5: cpu.execute_instruction<0x8D>(0x0000B2, 3); return true;
    // src/system/math/division32.asm:6 JSL DIVISION32S
    case 0xC090E8: cpu.execute_instruction<0x22>(0xC0915E, 4); return true;
    // src/system/math/division32.asm:7 ROL TEMP_DIVIDEND
    case 0xC090EC: cpu.execute_instruction<0x2E>(0x0000B2, 3); return true;
    // src/system/math/division32.asm:8 BCC @UNKNOWN0
    case 0xC090EF: cpu.execute_instruction<0x90>(0x00000E, 2); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/system/math/division32.asm:9 NEGATE_INT_ASSIGN $06
    case 0xC090F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/system/math/division32.asm:9 NEGATE_INT_ASSIGN $06
    // Overlapping static entry reached from 0xC090F1.
    case 0xC090F3: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/system/math/division32.asm:9 NEGATE_INT_ASSIGN $06
    case 0xC090F4: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/system/math/division32.asm:9 NEGATE_INT_ASSIGN $06
    case 0xC090F6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/system/math/division32.asm:9 NEGATE_INT_ASSIGN $06
    case 0xC090F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/system/math/division32.asm:9 NEGATE_INT_ASSIGN $06
    // Overlapping static entry reached from 0xC090F8.
    case 0xC090FA: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/system/math/division32.asm:9 NEGATE_INT_ASSIGN $06
    case 0xC090FB: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/system/math/division32.asm:9 NEGATE_INT_ASSIGN $06
    case 0xC090FD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/math/division32.asm:11 RTL
    case 0xC090FF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/division32s.asm (source_named).
bool execute_system_math_division32s_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/division32s.asm:3 LDA $08
    case 0xC0915E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/math/division32s.asm:4 BPL @DIVIDEND_POSITIVE
    case 0xC09160: cpu.execute_instruction<0x10>(0x000011, 2); return true;
    // src/system/math/division32s.asm:5 EOR #$FFFF
    case 0xC09162: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/system/math/division32s.asm:5 EOR #$FFFF
    // Overlapping static entry reached from 0xC09162.
    case 0xC09164: cpu.execute_instruction<0xFF>(0xA50885, 4); return true;
    // src/system/math/division32s.asm:6 STA $08
    case 0xC09165: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/math/division32s.asm:7 LDA $06
    case 0xC09167: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/system/math/division32s.asm:7 LDA $06
    // Overlapping static entry reached from 0xC09164.
    case 0xC09168: cpu.execute_instruction<0x06>(0x000049, 2); return true;
    // src/system/math/division32s.asm:8 EOR #$FFFF
    case 0xC09169: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/system/math/division32s.asm:8 EOR #$FFFF
    // Overlapping static entry reached from 0xC09168.
    case 0xC0916A: cpu.execute_instruction<0xFF>(0x851AFF, 4); return true;
    // src/system/math/division32s.asm:8 EOR #$FFFF
    // Overlapping static entry reached from 0xC09169.
    case 0xC0916B: cpu.execute_instruction<0xFF>(0x06851A, 4); return true;
    // src/system/math/division32s.asm:9 INC
    case 0xC0916C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/math/division32s.asm:10 STA $06
    case 0xC0916D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/math/division32s.asm:10 STA $06
    // Overlapping static entry reached from 0xC0916A.
    case 0xC0916E: cpu.execute_instruction<0x06>(0x0000D0, 2); return true;
    // src/system/math/division32s.asm:11 BNE @DIVIDEND_POSITIVE
    case 0xC0916F: cpu.execute_instruction<0xD0>(0x000002, 2); return true;
    // src/system/math/division32s.asm:11 BNE @DIVIDEND_POSITIVE
    // Overlapping static entry reached from 0xC0916E.
    case 0xC09170: cpu.execute_instruction<0x02>(0x0000E6, 2); return true;
    // src/system/math/division32s.asm:12 INC $08
    case 0xC09171: cpu.execute_instruction<0xE6>(0x000008, 2); return true;
    // src/system/math/division32s.asm:14 LDA $0C
    case 0xC09173: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/system/math/division32s.asm:15 BPL DIVISION32S_DIVISOR_POSITIVE
    case 0xC09175: cpu.execute_instruction<0x10>(0x000011, 2); return true;
    // src/system/math/division32s.asm:16 EOR #$FFFF
    case 0xC09177: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/system/math/division32s.asm:16 EOR #$FFFF
    // Overlapping static entry reached from 0xC09177.
    case 0xC09179: cpu.execute_instruction<0xFF>(0xA50C85, 4); return true;
    // src/system/math/division32s.asm:17 STA $0C
    case 0xC0917A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/system/math/division32s.asm:18 LDA $0A
    case 0xC0917C: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/system/math/division32s.asm:18 LDA $0A
    // Overlapping static entry reached from 0xC09179.
    case 0xC0917D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/math/division32s.asm:19 EOR #$FFFF
    case 0xC0917E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/system/math/division32s.asm:19 EOR #$FFFF
    // Overlapping static entry reached from 0xC0917E.
    case 0xC09180: cpu.execute_instruction<0xFF>(0x0A851A, 4); return true;
    // src/system/math/division32s.asm:20 INC
    case 0xC09181: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/math/division32s.asm:21 STA $0A
    case 0xC09182: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/system/math/division32s.asm:22 BNE DIVISION32S_DIVISOR_POSITIVE
    case 0xC09184: cpu.execute_instruction<0xD0>(0x000002, 2); return true;
    // src/system/math/division32s.asm:23 INC $0C
    case 0xC09186: cpu.execute_instruction<0xE6>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/system/math/division32s.asm:25 MOVE_INT $0A, DIV_MULT_TMP
    case 0xC09188: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/system/math/division32s.asm:25 MOVE_INT $0A, DIV_MULT_TMP
    case 0xC0918A: cpu.execute_instruction<0x8D>(0x0000AE, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/system/math/division32s.asm:25 MOVE_INT $0A, DIV_MULT_TMP
    case 0xC0918D: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/system/math/division32s.asm:25 MOVE_INT $0A, DIV_MULT_TMP
    case 0xC0918F: cpu.execute_instruction<0x8D>(0x0000B0, 3); return true;
    // src/system/math/division32s.asm:26 STZ $0A
    case 0xC09192: cpu.execute_instruction<0x64>(0x00000A, 2); return true;
    // src/system/math/division32s.asm:27 STZ $0C
    case 0xC09194: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/system/math/division32s.asm:28 LDY #$0020
    case 0xC09196: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000020, 2); else cpu.execute_instruction<0xA0>(0x000020, 3); return true;
    // src/system/math/division32s.asm:28 LDY #$0020
    // Overlapping static entry reached from 0xC09196.
    case 0xC09198: cpu.execute_instruction<0x00>(0x000026, 2); return true;
    // src/system/math/division32s.asm:30 ROL $06
    case 0xC09199: cpu.execute_instruction<0x26>(0x000006, 2); return true;
    // src/system/math/division32s.asm:31 ROL $08
    case 0xC0919B: cpu.execute_instruction<0x26>(0x000008, 2); return true;
    // src/system/math/division32s.asm:32 ROL $0A
    case 0xC0919D: cpu.execute_instruction<0x26>(0x00000A, 2); return true;
    // src/system/math/division32s.asm:33 ROL $0C
    case 0xC0919F: cpu.execute_instruction<0x26>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/system/math/division32s.asm:34 CMP32 $0A, DIV_MULT_TMP
    case 0xC091A1: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/system/math/division32s.asm:34 CMP32 $0A, DIV_MULT_TMP
    case 0xC091A3: cpu.execute_instruction<0xCD>(0x0000B0, 3); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/system/math/division32s.asm:34 CMP32 $0A, DIV_MULT_TMP
    case 0xC091A6: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/system/math/division32s.asm:34 CMP32 $0A, DIV_MULT_TMP
    case 0xC091A8: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/system/math/division32s.asm:34 CMP32 $0A, DIV_MULT_TMP
    case 0xC091AA: cpu.execute_instruction<0xCD>(0x0000AE, 3); return true;
    // src/system/math/division32s.asm:35 BCC @OVERFLOW
    case 0xC091AD: cpu.execute_instruction<0x90>(0x00000E, 2); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/system/math/division32s.asm:36 SUB_INT_ASSIGN $0A, DIV_MULT_TMP
    case 0xC091AF: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/system/math/division32s.asm:36 SUB_INT_ASSIGN $0A, DIV_MULT_TMP
    case 0xC091B1: cpu.execute_instruction<0xED>(0x0000AE, 3); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/system/math/division32s.asm:36 SUB_INT_ASSIGN $0A, DIV_MULT_TMP
    case 0xC091B4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/system/math/division32s.asm:36 SUB_INT_ASSIGN $0A, DIV_MULT_TMP
    case 0xC091B6: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/system/math/division32s.asm:36 SUB_INT_ASSIGN $0A, DIV_MULT_TMP
    case 0xC091B8: cpu.execute_instruction<0xED>(0x0000B0, 3); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/system/math/division32s.asm:36 SUB_INT_ASSIGN $0A, DIV_MULT_TMP
    case 0xC091BB: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/system/math/division32s.asm:38 DEY
    case 0xC091BD: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/math/division32s.asm:39 BNE @LOOP_BEGIN
    case 0xC091BE: cpu.execute_instruction<0xD0>(0x0000D9, 2); return true;
    // src/system/math/division32s.asm:40 ROL $06
    case 0xC091C0: cpu.execute_instruction<0x26>(0x000006, 2); return true;
    // src/system/math/division32s.asm:41 ROL $08
    case 0xC091C2: cpu.execute_instruction<0x26>(0x000008, 2); return true;
    // src/system/math/division32s.asm:42 RTL
    case 0xC091C4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/division8.asm (source_named).
bool execute_system_math_division8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/division8.asm:3 PHA
    case 0xC090B0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/math/division8.asm:4 STY TEMP_DIVIDEND
    case 0xC090B1: cpu.execute_instruction<0x8C>(0x0000B2, 3); return true;
    // src/system/math/division8.asm:5 EOR TEMP_DIVIDEND
    case 0xC090B4: cpu.execute_instruction<0x4D>(0x0000B2, 3); return true;
    // src/system/math/division8.asm:6 STA TEMP_DIVIDEND
    case 0xC090B7: cpu.execute_instruction<0x8D>(0x0000B2, 3); return true;
    // src/system/math/division8.asm:7 PLA
    case 0xC090BA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/math/division8.asm:8 JSL DIVISION8S
    case 0xC090BB: cpu.execute_instruction<0x22>(0xC09100, 4); return true;
    // src/system/math/division8.asm:10 ROL TEMP_DIVIDEND
    case 0xC090BF: cpu.execute_instruction<0x2E>(0x0000B2, 3); return true;
    // src/system/math/division8.asm:11 BCC @UNKNOWN0
    case 0xC090C2: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/system/math/division8.asm:12 EOR #$00FF
    case 0xC090C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x001AFF, 3); return true;
    // src/system/math/division8.asm:13 INC
    case 0xC090C6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/math/division8.asm:15 RTL
    case 0xC090C7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/division8s.asm (source_named).
bool execute_system_math_division8s_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/division8s.asm:4 PHA
    case 0xC09100: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/math/division8s.asm:5 TYA
    case 0xC09101: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/division8s.asm:6 BPL @DIVIDEND_POSITIVE
    case 0xC09102: cpu.execute_instruction<0x10>(0x000004, 2); return true;
    // src/system/math/division8s.asm:7 EOR #$00FF
    case 0xC09104: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x001AFF, 3); return true;
    // src/system/math/division8s.asm:8 INC
    case 0xC09106: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/math/division8s.asm:9 TAY
    case 0xC09107: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/math/division8s.asm:11 PLA
    case 0xC09108: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/math/division8s.asm:12 BPL DIVISION8S_DIVISOR_POSITIVE
    case 0xC09109: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // src/system/math/division8s.asm:13 EOR #$00FF
    case 0xC0910B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x001AFF, 3); return true;
    // src/system/math/division8s.asm:14 INC
    case 0xC0910D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/math/division8s.asm:16 STA f:WRDIVL
    case 0xC0910E: cpu.execute_instruction<0x8F>(0x004204, 4); return true;
    // src/system/math/division8s.asm:17 LDA #$0000
    case 0xC09112: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/system/math/division8s.asm:18 STA f:WRDIVH
    case 0xC09114: cpu.execute_instruction<0x8F>(0x004205, 4); return true;
    // src/system/math/division8s.asm:18 STA f:WRDIVH
    // Overlapping static entry reached from 0xC09112.
    case 0xC09115: cpu.execute_instruction<0x05>(0x000042, 2); return true;
    // src/system/math/division8s.asm:18 STA f:WRDIVH
    // Overlapping static entry reached from 0xC09115.
    case 0xC09117: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/system/math/division8s.asm:19 TYA
    case 0xC09118: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/division8s.asm:20 STA f:WRDIVB
    case 0xC09119: cpu.execute_instruction<0x8F>(0x004206, 4); return true;
    // src/system/math/division8s.asm:21 NOP
    case 0xC0911D: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/division8s.asm:22 NOP
    case 0xC0911E: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/division8s.asm:23 NOP
    case 0xC0911F: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/division8s.asm:24 NOP
    case 0xC09120: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/division8s.asm:25 NOP
    case 0xC09121: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/division8s.asm:26 NOP
    case 0xC09122: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/division8s.asm:27 LDA f:RDMPYL
    case 0xC09123: cpu.execute_instruction<0xAF>(0x004216, 4); return true;
    // src/system/math/division8s.asm:28 TAY
    case 0xC09127: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/math/division8s.asm:29 LDA f:RDDIVL
    case 0xC09128: cpu.execute_instruction<0xAF>(0x004214, 4); return true;
    // src/system/math/division8s.asm:30 RTL
    case 0xC0912C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/modulus16.asm (source_named).
bool execute_system_math_modulus16_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/modulus16.asm:3 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC09213: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/system/math/modulus16.asm:4 TYA
    case 0xC09217: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/modulus16.asm:5 RTL
    case 0xC09218: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/modulus16s.asm (source_named).
bool execute_system_math_modulus16s_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/modulus16s.asm:4 STA TEMP_DIVIDEND
    case 0xC091D6: cpu.execute_instruction<0x8D>(0x0000B2, 3); return true;
    // src/system/math/modulus16s.asm:5 JSL DIVISION16S
    case 0xC091D9: cpu.execute_instruction<0x22>(0xC0912D, 4); return true;
    // src/system/math/modulus16s.asm:6 TYA
    case 0xC091DD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/modulus16s.asm:7 ROL TEMP_DIVIDEND
    case 0xC091DE: cpu.execute_instruction<0x2E>(0x0000B2, 3); return true;
    // src/system/math/modulus16s.asm:8 BCC @UNKNOWN0
    case 0xC091E1: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // src/system/math/modulus16s.asm:9 EOR #$FFFF
    case 0xC091E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/system/math/modulus16s.asm:9 EOR #$FFFF
    // Overlapping static entry reached from 0xC091E3.
    case 0xC091E5: cpu.execute_instruction<0xFF>(0xA56B1A, 4); return true;
    // src/system/math/modulus16s.asm:10 INC
    case 0xC091E6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/math/modulus16s.asm:12 RTL
    case 0xC091E7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/modulus32.asm (source_named).
bool execute_system_math_modulus32_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/modulus32.asm:3 JSL DIVISION32S_DIVISOR_POSITIVE
    case 0xC09219: cpu.execute_instruction<0x22>(0xC09188, 4); return true;
    // src/system/math/modulus32.asm:4 BRA MODULUS32S_UNKNOWN0
    case 0xC0921D: cpu.execute_instruction<0x80>(0x0000E5, 2); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/modulus32s.asm (source_named).
bool execute_system_math_modulus32s_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/modulus32s.asm:3 LDA $08
    case 0xC091E8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/math/modulus32s.asm:3 LDA $08
    // Overlapping static entry reached from 0xC091E5.
    case 0xC091E9: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/math/modulus32s.asm:4 STA TEMP_DIVIDEND
    case 0xC091EA: cpu.execute_instruction<0x8D>(0x0000B2, 3); return true;
    // src/system/math/modulus32s.asm:5 JSL DIVISION32S
    case 0xC091ED: cpu.execute_instruction<0x22>(0xC0915E, 4); return true;
    // src/system/math/modulus32s.asm:6 ROL TEMP_DIVIDEND
    case 0xC091F1: cpu.execute_instruction<0x2E>(0x0000B2, 3); return true;
    // src/system/math/modulus32s.asm:7 BCC MODULUS32S_UNKNOWN0
    case 0xC091F4: cpu.execute_instruction<0x90>(0x00000E, 2); return true;
    // src/system/math/modulus32s.asm:8 LDA #$0000
    case 0xC091F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/math/modulus32s.asm:8 LDA #$0000
    // Overlapping static entry reached from 0xC091F6.
    case 0xC091F8: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // src/system/math/modulus32s.asm:9 SBC $0A
    case 0xC091F9: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // src/system/math/modulus32s.asm:10 STA $06
    case 0xC091FB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/math/modulus32s.asm:11 LDA #$0000
    case 0xC091FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/system/math/modulus32s.asm:11 LDA #$0000
    // Overlapping static entry reached from 0xC091FD.
    case 0xC091FF: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // src/system/math/modulus32s.asm:12 SBC $0C
    case 0xC09200: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // src/system/math/modulus32s.asm:13 BRA MODULUS32S_UNKNOWN1
    case 0xC09202: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/system/math/modulus32s.asm:15 LDA $0A
    case 0xC09204: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/system/math/modulus32s.asm:16 STA $06
    case 0xC09206: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/math/modulus32s.asm:17 LDA $0C
    case 0xC09208: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/system/math/modulus32s.asm:19 STA $08
    case 0xC0920A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/math/modulus32s.asm:20 RTL
    case 0xC0920C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/modulus8.asm (source_named).
bool execute_system_math_modulus8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/modulus8.asm:3 JSL DIVISION8S_DIVISOR_POSITIVE
    case 0xC0920D: cpu.execute_instruction<0x22>(0xC0910E, 4); return true;
    // src/system/math/modulus8.asm:4 TYA
    case 0xC09211: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/modulus8.asm:5 RTL
    case 0xC09212: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/modulus8s.asm (source_named).
bool execute_system_math_modulus8s_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/modulus8s.asm:4 STA TEMP_DIVIDEND
    case 0xC091C5: cpu.execute_instruction<0x8D>(0x0000B2, 3); return true;
    // src/system/math/modulus8s.asm:5 JSL DIVISION8S
    case 0xC091C8: cpu.execute_instruction<0x22>(0xC09100, 4); return true;
    // src/system/math/modulus8s.asm:6 TYA
    case 0xC091CC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/modulus8s.asm:7 ROL TEMP_DIVIDEND
    case 0xC091CD: cpu.execute_instruction<0x2E>(0x0000B2, 3); return true;
    // src/system/math/modulus8s.asm:8 BCC @UNKNOWN0
    case 0xC091D0: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/system/math/modulus8s.asm:9 EOR #$00FF
    case 0xC091D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x001AFF, 3); return true;
    // src/system/math/modulus8s.asm:10 INC
    case 0xC091D4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/math/modulus8s.asm:12 RTL
    case 0xC091D5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/mult16.asm (source_named).
bool execute_system_math_mult16_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/mult16.asm:3 STY TEMP_DIVIDEND
    case 0xC09014: cpu.execute_instruction<0x8C>(0x0000B2, 3); return true;
    // src/system/math/mult16.asm:4 STA MULT_TMP3
    case 0xC09017: cpu.execute_instruction<0x8D>(0x0000B4, 3); return true;
    // src/system/math/mult16.asm:5 STZ DIV_MULT_TMP2
    case 0xC0901A: cpu.execute_instruction<0x9C>(0x0000B0, 3); return true;
    // src/system/math/mult16.asm:6 INC MULT16_NUM_CALLS
    case 0xC0901D: cpu.execute_instruction<0xEE>(0x0000C2, 3); return true;
    // src/system/math/mult16.asm:7 LDA MULT_TMP2
    case 0xC09020: cpu.execute_instruction<0xAD>(0x0000B3, 3); return true;
    // src/system/math/mult16.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC09023: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/math/mult16.asm:9 TYA
    case 0xC09025: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/mult16.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC09026: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/mult16.asm:11 STA f:WRMPYA
    case 0xC09028: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/system/math/mult16.asm:12 LDY MULT_TMP2
    case 0xC0902C: cpu.execute_instruction<0xAC>(0x0000B3, 3); return true;
    // src/system/math/mult16.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC0902F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/mult16.asm:14 LDA f:RDMPYL
    case 0xC09031: cpu.execute_instruction<0xAF>(0x004216, 4); return true;
    // src/system/math/mult16.asm:15 STA DIV_MULT_TMP
    case 0xC09035: cpu.execute_instruction<0x8D>(0x0000AE, 3); return true;
    // src/system/math/mult16.asm:16 TYA
    case 0xC09038: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/mult16.asm:17 STA f:WRMPYA
    case 0xC09039: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/system/math/mult16.asm:18 LDA MULT_TMP3
    case 0xC0903D: cpu.execute_instruction<0xAD>(0x0000B4, 3); return true;
    // src/system/math/mult16.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC09040: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/math/mult16.asm:20 LDA TEMP_DIVIDEND
    case 0xC09042: cpu.execute_instruction<0xAD>(0x0000B2, 3); return true;
    // src/system/math/mult16.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC09045: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/mult16.asm:22 TAY
    case 0xC09047: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/math/mult16.asm:23 LDA f:RDMPYL
    case 0xC09048: cpu.execute_instruction<0xAF>(0x004216, 4); return true;
    // src/system/math/mult16.asm:24 CLC
    case 0xC0904C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/math/mult16.asm:25 ADC MULT_TMP
    case 0xC0904D: cpu.execute_instruction<0x6D>(0x0000AF, 3); return true;
    // src/system/math/mult16.asm:26 STA MULT_TMP
    case 0xC09050: cpu.execute_instruction<0x8D>(0x0000AF, 3); return true;
    // src/system/math/mult16.asm:27 TYA
    case 0xC09053: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/mult16.asm:28 STA f:WRMPYA
    case 0xC09054: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/system/math/mult16.asm:29 NOP
    case 0xC09058: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/mult16.asm:30 LDA MULT_TMP
    case 0xC09059: cpu.execute_instruction<0xAD>(0x0000AF, 3); return true;
    // src/system/math/mult16.asm:31 CLC
    case 0xC0905C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/math/mult16.asm:32 ADC f:RDMPYL
    case 0xC0905D: cpu.execute_instruction<0x6F>(0x004216, 4); return true;
    // src/system/math/mult16.asm:33 STA MULT_TMP
    case 0xC09061: cpu.execute_instruction<0x8D>(0x0000AF, 3); return true;
    // src/system/math/mult16.asm:34 LDA DIV_MULT_TMP
    case 0xC09064: cpu.execute_instruction<0xAD>(0x0000AE, 3); return true;
    // src/system/math/mult16.asm:35 RTL
    case 0xC09067: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/mult168.asm (source_named).
bool execute_system_math_mult168_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/mult168.asm:6 XBA
    case 0xC08FDB: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/math/mult168.asm:7 BEQ @UNKNOWN0
    case 0xC08FDC: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/system/math/mult168.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC08FDE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/math/mult168.asm:9 XBA
    case 0xC08FE0: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/math/mult168.asm:10 PHA
    case 0xC08FE1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/math/mult168.asm:11 TYA
    case 0xC08FE2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/mult168.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC08FE3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/mult168.asm:13 STA f:WRMPYA
    case 0xC08FE5: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/system/math/mult168.asm:14 NOP
    case 0xC08FE9: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/mult168.asm:15 NOP
    case 0xC08FEA: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/mult168.asm:16 LDA f:RDMPYL
    case 0xC08FEB: cpu.execute_instruction<0xAF>(0x004216, 4); return true;
    // src/system/math/mult168.asm:17 TAY
    case 0xC08FEF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/math/mult168.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC08FF0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/math/mult168.asm:19 PLA
    case 0xC08FF2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/math/mult168.asm:20 STA f:WRMPYB
    case 0xC08FF3: cpu.execute_instruction<0x8F>(0x004203, 4); return true;
    // src/system/math/mult168.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC08FF7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/mult168.asm:22 TYA
    case 0xC08FF9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/mult168.asm:23 XBA
    case 0xC08FFA: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/math/mult168.asm:24 AND #$FF00
    case 0xC08FFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/system/math/mult168.asm:24 AND #$FF00
    // Overlapping static entry reached from 0xC08FFB.
    case 0xC08FFD: cpu.execute_instruction<0xFF>(0x166F18, 4); return true;
    // src/system/math/mult168.asm:25 CLC
    case 0xC08FFE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/math/mult168.asm:26 ADC f:RDMPYL
    case 0xC08FFF: cpu.execute_instruction<0x6F>(0x004216, 4); return true;
    // src/system/math/mult168.asm:26 ADC f:RDMPYL
    // Overlapping static entry reached from 0xC08FFD.
    case 0xC09001: cpu.execute_instruction<0x42>(0x000000, 2); return true;
    // src/system/math/mult168.asm:27 RTL
    case 0xC09003: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/system/math/mult168.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC09004: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/math/mult168.asm:30 TYA
    case 0xC09006: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/math/mult168.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC09007: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/mult168.asm:32 STA f:WRMPYA
    case 0xC09009: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/system/math/mult168.asm:33 NOP
    case 0xC0900D: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/mult168.asm:34 NOP
    case 0xC0900E: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/mult168.asm:35 LDA f:RDMPYL
    case 0xC0900F: cpu.execute_instruction<0xAF>(0x004216, 4); return true;
    // src/system/math/mult168.asm:36 RTL
    case 0xC09013: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/mult32.asm (source_named).
bool execute_system_math_mult32_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/mult32.asm:3 LDA $08
    case 0xC09068: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/system/math/mult32.asm:4 STA MULT_TMP6
    case 0xC0906A: cpu.execute_instruction<0x8D>(0x0000B8, 3); return true;
    // src/system/math/mult32.asm:5 LDA $06
    case 0xC0906D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/system/math/mult32.asm:6 STA MULT_TMP5
    case 0xC0906F: cpu.execute_instruction<0x8D>(0x0000B6, 3); return true;
    // src/system/math/mult32.asm:7 LDY $0A
    case 0xC09072: cpu.execute_instruction<0xA4>(0x00000A, 2); return true;
    // src/system/math/mult32.asm:8 JSL MULT16
    case 0xC09074: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/system/math/mult32.asm:9 STA $06
    case 0xC09078: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/system/math/mult32.asm:10 LDA TEMP_DIVIDEND
    case 0xC0907A: cpu.execute_instruction<0xAD>(0x0000B2, 3); return true;
    // src/system/math/mult32.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC0907D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/math/mult32.asm:12 LDA MULT_TMP4
    case 0xC0907F: cpu.execute_instruction<0xAD>(0x0000B5, 3); return true;
    // src/system/math/mult32.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC09082: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/mult32.asm:14 STA f:WRMPYA
    case 0xC09084: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/system/math/mult32.asm:15 LDA DIV_MULT_TMP2
    case 0xC09088: cpu.execute_instruction<0xAD>(0x0000B0, 3); return true;
    // src/system/math/mult32.asm:16 NOP
    case 0xC0908B: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/mult32.asm:17 CLC
    case 0xC0908C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/math/mult32.asm:18 ADC f:RDMPYL
    case 0xC0908D: cpu.execute_instruction<0x6F>(0x004216, 4); return true;
    // src/system/math/mult32.asm:19 STA $08
    case 0xC09091: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/math/mult32.asm:20 LDA MULT_TMP5
    case 0xC09093: cpu.execute_instruction<0xAD>(0x0000B6, 3); return true;
    // src/system/math/mult32.asm:21 LDY $0C
    case 0xC09096: cpu.execute_instruction<0xA4>(0x00000C, 2); return true;
    // src/system/math/mult32.asm:22 JSL MULT16
    case 0xC09098: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/system/math/mult32.asm:23 CLC
    case 0xC0909C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/math/mult32.asm:24 ADC $08
    case 0xC0909D: cpu.execute_instruction<0x65>(0x000008, 2); return true;
    // src/system/math/mult32.asm:25 STA $08
    case 0xC0909F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/math/mult32.asm:26 LDA MULT_TMP6
    case 0xC090A1: cpu.execute_instruction<0xAD>(0x0000B8, 3); return true;
    // src/system/math/mult32.asm:27 LDY $0A
    case 0xC090A4: cpu.execute_instruction<0xA4>(0x00000A, 2); return true;
    // src/system/math/mult32.asm:28 JSL MULT16
    case 0xC090A6: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/system/math/mult32.asm:29 CLC
    case 0xC090AA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/math/mult32.asm:30 ADC $08
    case 0xC090AB: cpu.execute_instruction<0x65>(0x000008, 2); return true;
    // src/system/math/mult32.asm:31 STA $08
    case 0xC090AD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/math/mult32.asm:32 RTL
    case 0xC090AF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/mult8.asm (source_named).
bool execute_system_math_mult8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/mult8.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC08FCC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/mult8.asm:4 STA f:WRMPYA
    case 0xC08FCE: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/system/math/mult8.asm:5 NOP
    case 0xC08FD2: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/mult8.asm:6 NOP
    case 0xC08FD3: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/system/math/mult8.asm:7 LDA f:RDMPYL
    case 0xC08FD4: cpu.execute_instruction<0xAF>(0x004216, 4); return true;
    // src/system/math/mult8.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC08FD8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/math/mult8.asm:9 RTL
    case 0xC08FDA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/rand.asm (source_named).
bool execute_system_math_rand_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/rand.asm:3 PHP
    case 0xC08E8B: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/math/rand.asm:4 REP #PROC_FLAGS::ACCUM8
    case 0xC08E8C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/rand.asm:5 LDA RAND_A
    case 0xC08E8E: cpu.execute_instruction<0xAD>(0x000024, 3); return true;
    // src/system/math/rand.asm:6 SEP #PROC_FLAGS::ACCUM8
    case 0xC08E91: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/math/rand.asm:7 XBA
    case 0xC08E93: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/math/rand.asm:8 LDA RAND_B
    case 0xC08E94: cpu.execute_instruction<0xAD>(0x000026, 3); return true;
    // src/system/math/rand.asm:9 REP #PROC_FLAGS::ACCUM8
    case 0xC08E97: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/rand.asm:10 STA f:WRMPYA
    case 0xC08E99: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/system/math/rand.asm:10 STA f:WRMPYA
    // Overlapping static entry reached from 0xC0B647.
    case 0xC08E9B: cpu.execute_instruction<0x42>(0x000000, 2); return true;
    // src/system/math/rand.asm:11 CLC
    case 0xC08E9D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/math/rand.asm:12 ADC #$006D
    case 0xC08E9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006D, 2); else cpu.execute_instruction<0x69>(0x00006D, 3); return true;
    // src/system/math/rand.asm:12 ADC #$006D
    // Overlapping static entry reached from 0xC08E9E.
    case 0xC08EA0: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/math/rand.asm:13 STA RAND_B
    case 0xC08EA1: cpu.execute_instruction<0x8D>(0x000026, 3); return true;
    // src/system/math/rand.asm:14 LDA f:RDMPYL
    case 0xC08EA4: cpu.execute_instruction<0xAF>(0x004216, 4); return true;
    // src/system/math/rand.asm:15 ROR
    case 0xC08EA8: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/math/rand.asm:16 ROR
    case 0xC08EA9: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/math/rand.asm:17 PHA
    case 0xC08EAA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/system/math/rand.asm:18 AND #$0003
    case 0xC08EAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/system/math/rand.asm:18 AND #$0003
    // Overlapping static entry reached from 0xC08EAB.
    case 0xC08EAD: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/system/math/rand.asm:19 CLC
    case 0xC08EAE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/math/rand.asm:20 ADC RAND_A
    case 0xC08EAF: cpu.execute_instruction<0x6D>(0x000024, 3); return true;
    // src/system/math/rand.asm:21 ROR
    case 0xC08EB2: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/math/rand.asm:22 BCC @UNKNOWN0
    case 0xC08EB3: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/system/math/rand.asm:23 ORA #$8000
    case 0xC08EB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/system/math/rand.asm:23 ORA #$8000
    // Overlapping static entry reached from 0xC08EB5.
    case 0xC08EB7: cpu.execute_instruction<0x80>(0x00008D, 2); return true;
    // src/system/math/rand.asm:25 STA RAND_A
    case 0xC08EB8: cpu.execute_instruction<0x8D>(0x000024, 3); return true;
    // src/system/math/rand.asm:26 PLA
    case 0xC08EBB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/math/rand.asm:27 ROR
    case 0xC08EBC: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/math/rand.asm:28 ROR
    case 0xC08EBD: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/system/math/rand.asm:29 AND #$00FF
    case 0xC08EBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/math/rand.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC08EBE.
    case 0xC08EC0: cpu.execute_instruction<0x00>(0x000028, 2); return true;
    // src/system/math/rand.asm:30 PLP
    case 0xC08EC1: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/math/rand.asm:31 RTL
    case 0xC08EC2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/rand_0_3.asm (source_named).
bool execute_system_math_rand_0_3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/rand_0_3.asm:3 JSL RAND
    case 0xC0A612: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/system/math/rand_0_3.asm:4 AND #$0003
    case 0xC0A616: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/system/math/rand_0_3.asm:4 AND #$0003
    // Overlapping static entry reached from 0xC0A616.
    case 0xC0A618: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/system/math/rand_0_3.asm:5 RTL
    case 0xC0A619: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/rand_0_7.asm (source_named).
bool execute_system_math_rand_0_7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/rand_0_7.asm:3 JSL RAND
    case 0xC0A61A: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/system/math/rand_0_7.asm:4 AND #$0007
    case 0xC0A61E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/system/math/rand_0_7.asm:4 AND #$0007
    // Overlapping static entry reached from 0xC0A61E.
    case 0xC0A620: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/system/math/rand_0_7.asm:5 RTL
    case 0xC0A621: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/rand_limit.asm (source_named).
bool execute_system_math_rand_limit_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/math/rand_limit.asm:3 BEGIN_C_FUNCTION
    case 0xC2696C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/math/rand_limit.asm:8 END_STACK_VARS
    case 0xC2696E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/math/rand_limit.asm:8 END_STACK_VARS
    case 0xC2696F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/math/rand_limit.asm:8 END_STACK_VARS
    case 0xC26970: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/math/rand_limit.asm:8 END_STACK_VARS
    case 0xC26971: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/math/rand_limit.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC26971.
    case 0xC26973: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/math/rand_limit.asm:8 END_STACK_VARS
    case 0xC26974: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/math/rand_limit.asm:8 END_STACK_VARS
    case 0xC26975: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/math/rand_limit.asm:9 TAX
    case 0xC26976: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/math/rand_limit.asm:10 STX @LOCAL00
    case 0xC26977: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/math/rand_limit.asm:11 JSR RAND_LONG
    case 0xC26979: cpu.execute_instruction<0x20>(0x00692E, 3); return true;
    // src/system/math/rand_limit.asm:12 LDX @LOCAL00
    case 0xC2697C: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/math/rand_limit.asm:13 JSR TRUNCATE_16_TO_8
    case 0xC2697E: cpu.execute_instruction<0x20>(0x006937, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/math/rand_limit.asm:14 END_C_FUNCTION
    case 0xC26981: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/math/rand_limit.asm:14 END_C_FUNCTION
    case 0xC26982: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/rand_long.asm (source_named).
bool execute_system_math_rand_long_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/math/rand_long.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC2692E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/system/math/rand_long.asm:4 JSL RAND
    case 0xC26930: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/system/math/rand_long.asm:5 SEP #PROC_FLAGS::ACCUM8
    case 0xC26934: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/math/rand_long.asm:6 RTS
    case 0xC26936: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/rand_mod.asm (source_named).
bool execute_system_math_rand_mod_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/math/rand_mod.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43CC9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/math/rand_mod.asm:7 END_STACK_VARS
    case 0xC43CCB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/math/rand_mod.asm:7 END_STACK_VARS
    case 0xC43CCC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/math/rand_mod.asm:7 END_STACK_VARS
    case 0xC43CCD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/math/rand_mod.asm:7 END_STACK_VARS
    case 0xC43CCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/math/rand_mod.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC43CCE.
    case 0xC43CD0: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/math/rand_mod.asm:7 END_STACK_VARS
    case 0xC43CD1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/math/rand_mod.asm:7 END_STACK_VARS
    case 0xC43CD2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/math/rand_mod.asm:8 TAX
    case 0xC43CD3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/math/rand_mod.asm:9 STX @LOCAL00
    case 0xC43CD4: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/math/rand_mod.asm:10 JSL RAND
    case 0xC43CD6: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/system/math/rand_mod.asm:11 LDX @LOCAL00
    case 0xC43CDA: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/math/rand_mod.asm:12 TXY
    case 0xC43CDC: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/math/rand_mod.asm:13 INY
    case 0xC43CDD: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/math/rand_mod.asm:14 JSL MODULUS16
    case 0xC43CDE: cpu.execute_instruction<0x22>(0xC09213, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/math/rand_mod.asm:15 END_C_FUNCTION
    case 0xC43CE2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/system/math/rand_mod.asm:15 END_C_FUNCTION
    case 0xC43CE3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/math/truncate_16_to_8.asm (source_named).
bool execute_system_math_truncate_16_to_8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/math/truncate_16_to_8.asm:3 BEGIN_C_FUNCTION
    case 0xC26937: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/math/truncate_16_to_8.asm:9 END_STACK_VARS
    case 0xC26939: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/math/truncate_16_to_8.asm:9 END_STACK_VARS
    case 0xC2693A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/math/truncate_16_to_8.asm:9 END_STACK_VARS
    case 0xC2693B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/math/truncate_16_to_8.asm:9 END_STACK_VARS
    case 0xC2693C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/math/truncate_16_to_8.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2693C.
    case 0xC2693E: cpu.execute_instruction<0xFF>(0xE2685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/math/truncate_16_to_8.asm:9 END_STACK_VARS
    case 0xC2693F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/math/truncate_16_to_8.asm:9 END_STACK_VARS
    case 0xC26940: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/math/truncate_16_to_8.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC26941: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/math/truncate_16_to_8.asm:10 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2693E.
    case 0xC26942: cpu.execute_instruction<0x20>(0x000E85, 3); return true;
    // src/system/math/truncate_16_to_8.asm:11 STA @LOCAL00
    case 0xC26943: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/math/truncate_16_to_8.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC26945: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/truncate_16_to_8.asm:13 TXA
    case 0xC26947: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/math/truncate_16_to_8.asm:14 STORE_INT1632 @VIRTUAL0A
    case 0xC26948: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/math/truncate_16_to_8.asm:14 STORE_INT1632 @VIRTUAL0A
    case 0xC2694A: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/system/math/truncate_16_to_8.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC2694C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/system/math/truncate_16_to_8.asm:16 MOVE_INT832 @LOCAL00, @VIRTUAL06
    case 0xC2694E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/system/math/truncate_16_to_8.asm:16 MOVE_INT832 @LOCAL00, @VIRTUAL06
    case 0xC26950: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/system/math/truncate_16_to_8.asm:16 MOVE_INT832 @LOCAL00, @VIRTUAL06
    case 0xC26952: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/system/math/truncate_16_to_8.asm:16 MOVE_INT832 @LOCAL00, @VIRTUAL06
    case 0xC26954: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/system/math/truncate_16_to_8.asm:16 MOVE_INT832 @LOCAL00, @VIRTUAL06
    case 0xC26956: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/system/math/truncate_16_to_8.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC26958: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/math/truncate_16_to_8.asm:18 JSL MULT32
    case 0xC2695A: cpu.execute_instruction<0x22>(0xC09068, 4); return true;
    // src/system/math/truncate_16_to_8.asm:19 SEP #PROC_FLAGS::INDEX8
    case 0xC2695E: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/system/math/truncate_16_to_8.asm:20 LDY #8
    case 0xC26960: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x002208, 3); return true;
    // src/system/math/truncate_16_to_8.asm:21 JSL ASR32_UNKNOWN1
    case 0xC26962: cpu.execute_instruction<0x22>(0xC0924E, 4); return true;
    // src/system/math/truncate_16_to_8.asm:21 JSL ASR32_UNKNOWN1
    // Overlapping static entry reached from 0xC26960.
    case 0xC26963: cpu.execute_instruction<0x4E>(0x00C092, 3); return true;
    // src/system/math/truncate_16_to_8.asm:22 LDA @VIRTUAL06
    case 0xC26966: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/system/math/truncate_16_to_8.asm:23 REP #PROC_FLAGS::INDEX8
    case 0xC26968: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/math/truncate_16_to_8.asm:24 END_C_FUNCTION
    case 0xC2696A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/math/truncate_16_to_8.asm:24 END_C_FUNCTION
    case 0xC2696B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/memcpy16.asm (source_named).
bool execute_system_memcpy16_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/memcpy16.asm:3 STX MEMCPY_WORDS_LEFT
    case 0xC08EC3: cpu.execute_instruction<0x8E>(0x0000A5, 3); return true;
    // src/system/memcpy16.asm:4 LSR MEMCPY_WORDS_LEFT
    case 0xC08EC6: cpu.execute_instruction<0x4E>(0x0000A5, 3); return true;
    // src/system/memcpy16.asm:5 TAX
    case 0xC08EC9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/memcpy16.asm:6 LDY #$0000
    case 0xC08ECA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/system/memcpy16.asm:6 LDY #$0000
    // Overlapping static entry reached from 0xC08ECA.
    case 0xC08ECC: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/system/memcpy16.asm:7 BRA @UNKNOWN1
    case 0xC08ECD: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/system/memcpy16.asm:9 LDA [$0E],Y
    case 0xC08ECF: cpu.execute_instruction<0xB7>(0x00000E, 2); return true;
    // src/system/memcpy16.asm:10 STA __BSS_START__,X
    case 0xC08ED1: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/memcpy16.asm:11 INX
    case 0xC08ED4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/memcpy16.asm:12 INX
    case 0xC08ED5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/memcpy16.asm:13 INY
    case 0xC08ED6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/memcpy16.asm:14 INY
    case 0xC08ED7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/system/memcpy16.asm:16 DEC MEMCPY_WORDS_LEFT
    case 0xC08ED8: cpu.execute_instruction<0xCE>(0x0000A5, 3); return true;
    // src/system/memcpy16.asm:17 BPL @UNKNOWN0
    case 0xC08EDB: cpu.execute_instruction<0x10>(0x0000F2, 2); return true;
    // src/system/memcpy16.asm:18 RTL
    case 0xC08EDD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/memcpy24.asm (source_named).
bool execute_system_memcpy24_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/memcpy24.asm:3 TAY
    case 0xC08EDE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/memcpy24.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC08EDF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/memcpy24.asm:5 BRA @UNKNOWN1
    case 0xC08EE1: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/system/memcpy24.asm:7 LDA [$12],Y
    case 0xC08EE3: cpu.execute_instruction<0xB7>(0x000012, 2); return true;
    // src/system/memcpy24.asm:8 STA [$0E],Y
    case 0xC08EE5: cpu.execute_instruction<0x97>(0x00000E, 2); return true;
    // src/system/memcpy24.asm:10 DEY
    case 0xC08EE7: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/memcpy24.asm:11 BPL @UNKNOWN0
    case 0xC08EE8: cpu.execute_instruction<0x10>(0x0000F9, 2); return true;
    // src/system/memcpy24.asm:12 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08EEA: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/memcpy24.asm:13 RTL
    case 0xC08EEC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/memset16.asm (source_named).
bool execute_system_memset16_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/memset16.asm:3 TXY
    case 0xC08EED: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/memset16.asm:4 TAX
    case 0xC08EEE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/memset16.asm:5 TYA
    case 0xC08EEF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/system/memset16.asm:6 LSR
    case 0xC08EF0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/system/memset16.asm:7 TAY
    case 0xC08EF1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/system/memset16.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC08EF2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/memset16.asm:9 LDA $0E
    case 0xC08EF4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/memset16.asm:10 XBA
    case 0xC08EF6: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/system/memset16.asm:11 LDA $0E
    case 0xC08EF7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/memset16.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC08EF9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/system/memset16.asm:13 BRA @LOOP_ENTRY
    case 0xC08EFB: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/system/memset16.asm:15 STA __BSS_START__,X
    case 0xC08EFD: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/system/memset16.asm:16 INX
    case 0xC08F00: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/memset16.asm:17 INX
    case 0xC08F01: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/memset16.asm:19 DEY
    case 0xC08F02: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/memset16.asm:20 BPL @LOOP_ITERATION
    case 0xC08F03: cpu.execute_instruction<0x10>(0x0000F8, 2); return true;
    // src/system/memset16.asm:21 RTL
    case 0xC08F05: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/memset24.asm (source_named).
bool execute_system_memset24_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/memset24.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC08F06: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/memset24.asm:4 TXY
    case 0xC08F08: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/system/memset24.asm:6 DEY
    case 0xC08F09: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/system/memset24.asm:7 BMI @LOOP_EXIT
    case 0xC08F0A: cpu.execute_instruction<0x30>(0x000004, 2); return true;
    // src/system/memset24.asm:8 STA [$0E],Y
    case 0xC08F0C: cpu.execute_instruction<0x97>(0x00000E, 2); return true;
    // src/system/memset24.asm:9 BRA @LOOP_BEGIN
    case 0xC08F0E: cpu.execute_instruction<0x80>(0x0000F9, 2); return true;
    // src/system/memset24.asm:11 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08F10: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/memset24.asm:12 RTL
    case 0xC08F12: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
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
    // src/system/oam_clear.asm:4 PHP
    case 0xC088A3: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/oam_clear.asm:6 SEP #PROC_FLAGS::ACCUM8
    case 0xC088A4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/oam_clear.asm:7 REP #PROC_FLAGS::INDEX8
    case 0xC088A6: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/system/oam_clear.asm:8 LDX #$0000
    case 0xC088A8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/oam_clear.asm:8 LDX #$0000
    // Overlapping static entry reached from 0xC088A8.
    case 0xC088AA: cpu.execute_instruction<0x00>(0x00008E, 2); return true;
    // src/system/oam_clear.asm:9 STX PRIORITY_0_SPRITE_OFFSET
    case 0xC088AB: cpu.execute_instruction<0x8E>(0x002904, 3); return true;
    // src/system/oam_clear.asm:10 STX PRIORITY_1_SPRITE_OFFSET
    case 0xC088AE: cpu.execute_instruction<0x8E>(0x002A06, 3); return true;
    // src/system/oam_clear.asm:11 STX PRIORITY_2_SPRITE_OFFSET
    case 0xC088B1: cpu.execute_instruction<0x8E>(0x002B08, 3); return true;
    // src/system/oam_clear.asm:12 STX PRIORITY_3_SPRITE_OFFSET
    case 0xC088B4: cpu.execute_instruction<0x8E>(0x002C0A, 3); return true;
    // src/system/oam_clear.asm:13 LDX NEXT_FRAME_BUF_ID
    case 0xC088B7: cpu.execute_instruction<0xAE>(0x00002E, 3); return true;
    // src/system/oam_clear.asm:14 DEX
    case 0xC088BA: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/system/oam_clear.asm:15 BNEL @UNKNOWN1
    case 0xC088BB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/system/oam_clear.asm:15 BNEL @UNKNOWN1
    case 0xC088BD: cpu.execute_instruction<0x4C>(0x0089E5, 3); return true;
    // src/system/oam_clear.asm:16 LDX #.LOWORD(OAM1)
    case 0xC088C0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000500, 3); return true;
    // src/system/oam_clear.asm:16 LDX #.LOWORD(OAM1)
    // Overlapping static entry reached from 0xC088C0.
    case 0xC088C2: cpu.execute_instruction<0x05>(0x00008E, 2); return true;
    // src/system/oam_clear.asm:17 STX OAM_ADDR
    case 0xC088C3: cpu.execute_instruction<0x8E>(0x000003, 3); return true;
    // src/system/oam_clear.asm:17 STX OAM_ADDR
    // Overlapping static entry reached from 0xC088C2.
    case 0xC088C4: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/system/oam_clear.asm:18 LDX #.LOWORD(OAM1) + 128 * .SIZEOF(oam_entry)
    case 0xC088C6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000700, 3); return true;
    // src/system/oam_clear.asm:18 LDX #.LOWORD(OAM1) + 128 * .SIZEOF(oam_entry)
    // Overlapping static entry reached from 0xC088C6.
    case 0xC088C8: cpu.execute_instruction<0x07>(0x00008E, 2); return true;
    // src/system/oam_clear.asm:19 STX OAM_END_ADDR
    case 0xC088C9: cpu.execute_instruction<0x8E>(0x000005, 3); return true;
    // src/system/oam_clear.asm:19 STX OAM_END_ADDR
    // Overlapping static entry reached from 0xC088C8.
    case 0xC088CA: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/system/oam_clear.asm:20 LDX #.LOWORD(OAM1_HIGH_TABLE)
    case 0xC088CC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000700, 3); return true;
    // src/system/oam_clear.asm:20 LDX #.LOWORD(OAM1_HIGH_TABLE)
    // Overlapping static entry reached from 0xC088CC.
    case 0xC088CE: cpu.execute_instruction<0x07>(0x00008E, 2); return true;
    // src/system/oam_clear.asm:21 STX OAM_HIGH_TABLE_ADDR
    case 0xC088CF: cpu.execute_instruction<0x8E>(0x000007, 3); return true;
    // src/system/oam_clear.asm:21 STX OAM_HIGH_TABLE_ADDR
    // Overlapping static entry reached from 0xC088CE.
    case 0xC088D0: cpu.execute_instruction<0x07>(0x000000, 2); return true;
    // src/system/oam_clear.asm:22 LDA #$80
    case 0xC088D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008D80, 3); return true;
    // src/system/oam_clear.asm:23 STA OAM_HIGH_TABLE_BUFFER
    case 0xC088D4: cpu.execute_instruction<0x8D>(0x00000A, 3); return true;
    // src/system/oam_clear.asm:23 STA OAM_HIGH_TABLE_BUFFER
    // Overlapping static entry reached from 0xC088D2.
    case 0xC088D5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/oam_clear.asm:23 STA OAM_HIGH_TABLE_BUFFER
    // Overlapping static entry reached from 0xC088D5.
    case 0xC088D6: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/system/oam_clear.asm:24 LDA #$E0
    case 0xC088D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x000BE0, 3); return true;
    // src/system/oam_clear.asm:25 PHD
    case 0xC088D9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/system/oam_clear.asm:26 PEA OAM1
    case 0xC088DA: cpu.execute_instruction<0xF4>(0x000500, 3); return true;
    // src/system/oam_clear.asm:27 PLD
    case 0xC088DD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/oam_clear.asm:28 STA <(OAM1 + 0 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088DE: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/system/oam_clear.asm:29 STA <(OAM1 + 1 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088E0: cpu.execute_instruction<0x85>(0x000005, 2); return true;
    // src/system/oam_clear.asm:30 STA <(OAM1 + 2 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088E2: cpu.execute_instruction<0x85>(0x000009, 2); return true;
    // src/system/oam_clear.asm:31 STA <(OAM1 + 3 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088E4: cpu.execute_instruction<0x85>(0x00000D, 2); return true;
    // src/system/oam_clear.asm:32 STA <(OAM1 + 4 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088E6: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/system/oam_clear.asm:33 STA <(OAM1 + 5 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088E8: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/system/oam_clear.asm:34 STA <(OAM1 + 6 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088EA: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/system/oam_clear.asm:35 STA <(OAM1 + 7 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088EC: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/system/oam_clear.asm:36 STA <(OAM1 + 8 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088EE: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/system/oam_clear.asm:37 STA <(OAM1 + 9 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088F0: cpu.execute_instruction<0x85>(0x000025, 2); return true;
    // src/system/oam_clear.asm:38 STA <(OAM1 + 10 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088F2: cpu.execute_instruction<0x85>(0x000029, 2); return true;
    // src/system/oam_clear.asm:39 STA <(OAM1 + 11 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088F4: cpu.execute_instruction<0x85>(0x00002D, 2); return true;
    // src/system/oam_clear.asm:40 STA <(OAM1 + 12 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088F6: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // src/system/oam_clear.asm:41 STA <(OAM1 + 13 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088F8: cpu.execute_instruction<0x85>(0x000035, 2); return true;
    // src/system/oam_clear.asm:42 STA <(OAM1 + 14 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088FA: cpu.execute_instruction<0x85>(0x000039, 2); return true;
    // src/system/oam_clear.asm:43 STA <(OAM1 + 15 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088FC: cpu.execute_instruction<0x85>(0x00003D, 2); return true;
    // src/system/oam_clear.asm:44 STA <(OAM1 + 16 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC088FE: cpu.execute_instruction<0x85>(0x000041, 2); return true;
    // src/system/oam_clear.asm:45 STA <(OAM1 + 17 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08900: cpu.execute_instruction<0x85>(0x000045, 2); return true;
    // src/system/oam_clear.asm:46 STA <(OAM1 + 18 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08902: cpu.execute_instruction<0x85>(0x000049, 2); return true;
    // src/system/oam_clear.asm:47 STA <(OAM1 + 19 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08904: cpu.execute_instruction<0x85>(0x00004D, 2); return true;
    // src/system/oam_clear.asm:48 STA <(OAM1 + 20 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08906: cpu.execute_instruction<0x85>(0x000051, 2); return true;
    // src/system/oam_clear.asm:49 STA <(OAM1 + 21 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08908: cpu.execute_instruction<0x85>(0x000055, 2); return true;
    // src/system/oam_clear.asm:50 STA <(OAM1 + 22 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0890A: cpu.execute_instruction<0x85>(0x000059, 2); return true;
    // src/system/oam_clear.asm:51 STA <(OAM1 + 23 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0890C: cpu.execute_instruction<0x85>(0x00005D, 2); return true;
    // src/system/oam_clear.asm:52 STA <(OAM1 + 24 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0890E: cpu.execute_instruction<0x85>(0x000061, 2); return true;
    // src/system/oam_clear.asm:53 STA <(OAM1 + 25 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08910: cpu.execute_instruction<0x85>(0x000065, 2); return true;
    // src/system/oam_clear.asm:54 STA <(OAM1 + 26 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08912: cpu.execute_instruction<0x85>(0x000069, 2); return true;
    // src/system/oam_clear.asm:55 STA <(OAM1 + 27 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08914: cpu.execute_instruction<0x85>(0x00006D, 2); return true;
    // src/system/oam_clear.asm:56 STA <(OAM1 + 28 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08916: cpu.execute_instruction<0x85>(0x000071, 2); return true;
    // src/system/oam_clear.asm:57 STA <(OAM1 + 29 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08918: cpu.execute_instruction<0x85>(0x000075, 2); return true;
    // src/system/oam_clear.asm:58 STA <(OAM1 + 30 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0891A: cpu.execute_instruction<0x85>(0x000079, 2); return true;
    // src/system/oam_clear.asm:59 STA <(OAM1 + 31 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0891C: cpu.execute_instruction<0x85>(0x00007D, 2); return true;
    // src/system/oam_clear.asm:60 STA <(OAM1 + 32 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0891E: cpu.execute_instruction<0x85>(0x000081, 2); return true;
    // src/system/oam_clear.asm:61 STA <(OAM1 + 33 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08920: cpu.execute_instruction<0x85>(0x000085, 2); return true;
    // src/system/oam_clear.asm:62 STA <(OAM1 + 34 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08922: cpu.execute_instruction<0x85>(0x000089, 2); return true;
    // src/system/oam_clear.asm:63 STA <(OAM1 + 35 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08924: cpu.execute_instruction<0x85>(0x00008D, 2); return true;
    // src/system/oam_clear.asm:64 STA <(OAM1 + 36 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08926: cpu.execute_instruction<0x85>(0x000091, 2); return true;
    // src/system/oam_clear.asm:65 STA <(OAM1 + 37 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08928: cpu.execute_instruction<0x85>(0x000095, 2); return true;
    // src/system/oam_clear.asm:66 STA <(OAM1 + 38 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0892A: cpu.execute_instruction<0x85>(0x000099, 2); return true;
    // src/system/oam_clear.asm:67 STA <(OAM1 + 39 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0892C: cpu.execute_instruction<0x85>(0x00009D, 2); return true;
    // src/system/oam_clear.asm:68 STA <(OAM1 + 40 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0892E: cpu.execute_instruction<0x85>(0x0000A1, 2); return true;
    // src/system/oam_clear.asm:69 STA <(OAM1 + 41 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08930: cpu.execute_instruction<0x85>(0x0000A5, 2); return true;
    // src/system/oam_clear.asm:70 STA <(OAM1 + 42 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08932: cpu.execute_instruction<0x85>(0x0000A9, 2); return true;
    // src/system/oam_clear.asm:71 STA <(OAM1 + 43 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08934: cpu.execute_instruction<0x85>(0x0000AD, 2); return true;
    // src/system/oam_clear.asm:72 STA <(OAM1 + 44 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08936: cpu.execute_instruction<0x85>(0x0000B1, 2); return true;
    // src/system/oam_clear.asm:73 STA <(OAM1 + 45 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08938: cpu.execute_instruction<0x85>(0x0000B5, 2); return true;
    // src/system/oam_clear.asm:74 STA <(OAM1 + 46 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0893A: cpu.execute_instruction<0x85>(0x0000B9, 2); return true;
    // src/system/oam_clear.asm:75 STA <(OAM1 + 47 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0893C: cpu.execute_instruction<0x85>(0x0000BD, 2); return true;
    // src/system/oam_clear.asm:76 STA <(OAM1 + 48 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0893E: cpu.execute_instruction<0x85>(0x0000C1, 2); return true;
    // src/system/oam_clear.asm:77 STA <(OAM1 + 49 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08940: cpu.execute_instruction<0x85>(0x0000C5, 2); return true;
    // src/system/oam_clear.asm:78 STA <(OAM1 + 50 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08942: cpu.execute_instruction<0x85>(0x0000C9, 2); return true;
    // src/system/oam_clear.asm:79 STA <(OAM1 + 51 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08944: cpu.execute_instruction<0x85>(0x0000CD, 2); return true;
    // src/system/oam_clear.asm:80 STA <(OAM1 + 52 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08946: cpu.execute_instruction<0x85>(0x0000D1, 2); return true;
    // src/system/oam_clear.asm:81 STA <(OAM1 + 53 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08948: cpu.execute_instruction<0x85>(0x0000D5, 2); return true;
    // src/system/oam_clear.asm:82 STA <(OAM1 + 54 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0894A: cpu.execute_instruction<0x85>(0x0000D9, 2); return true;
    // src/system/oam_clear.asm:83 STA <(OAM1 + 55 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0894C: cpu.execute_instruction<0x85>(0x0000DD, 2); return true;
    // src/system/oam_clear.asm:84 STA <(OAM1 + 56 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0894E: cpu.execute_instruction<0x85>(0x0000E1, 2); return true;
    // src/system/oam_clear.asm:85 STA <(OAM1 + 57 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08950: cpu.execute_instruction<0x85>(0x0000E5, 2); return true;
    // src/system/oam_clear.asm:86 STA <(OAM1 + 58 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08952: cpu.execute_instruction<0x85>(0x0000E9, 2); return true;
    // src/system/oam_clear.asm:87 STA <(OAM1 + 59 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08954: cpu.execute_instruction<0x85>(0x0000ED, 2); return true;
    // src/system/oam_clear.asm:88 STA <(OAM1 + 60 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08956: cpu.execute_instruction<0x85>(0x0000F1, 2); return true;
    // src/system/oam_clear.asm:89 STA <(OAM1 + 61 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08958: cpu.execute_instruction<0x85>(0x0000F5, 2); return true;
    // src/system/oam_clear.asm:90 STA <(OAM1 + 62 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0895A: cpu.execute_instruction<0x85>(0x0000F9, 2); return true;
    // src/system/oam_clear.asm:91 STA <(OAM1 + 63 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0895C: cpu.execute_instruction<0x85>(0x0000FD, 2); return true;
    // src/system/oam_clear.asm:92 PEA OAM1 + $100
    case 0xC0895E: cpu.execute_instruction<0xF4>(0x000600, 3); return true;
    // src/system/oam_clear.asm:93 PLD
    case 0xC08961: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/oam_clear.asm:94 STA <(OAM1 + 64 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08962: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/system/oam_clear.asm:95 STA <(OAM1 + 65 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08964: cpu.execute_instruction<0x85>(0x000005, 2); return true;
    // src/system/oam_clear.asm:96 STA <(OAM1 + 66 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08966: cpu.execute_instruction<0x85>(0x000009, 2); return true;
    // src/system/oam_clear.asm:97 STA <(OAM1 + 67 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08968: cpu.execute_instruction<0x85>(0x00000D, 2); return true;
    // src/system/oam_clear.asm:98 STA <(OAM1 + 68 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0896A: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/system/oam_clear.asm:99 STA <(OAM1 + 69 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0896C: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/system/oam_clear.asm:100 STA <(OAM1 + 70 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0896E: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/system/oam_clear.asm:101 STA <(OAM1 + 71 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08970: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/system/oam_clear.asm:102 STA <(OAM1 + 72 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08972: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/system/oam_clear.asm:103 STA <(OAM1 + 73 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08974: cpu.execute_instruction<0x85>(0x000025, 2); return true;
    // src/system/oam_clear.asm:104 STA <(OAM1 + 74 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08976: cpu.execute_instruction<0x85>(0x000029, 2); return true;
    // src/system/oam_clear.asm:105 STA <(OAM1 + 75 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08978: cpu.execute_instruction<0x85>(0x00002D, 2); return true;
    // src/system/oam_clear.asm:106 STA <(OAM1 + 76 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0897A: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // src/system/oam_clear.asm:107 STA <(OAM1 + 77 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0897C: cpu.execute_instruction<0x85>(0x000035, 2); return true;
    // src/system/oam_clear.asm:108 STA <(OAM1 + 78 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0897E: cpu.execute_instruction<0x85>(0x000039, 2); return true;
    // src/system/oam_clear.asm:109 STA <(OAM1 + 79 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08980: cpu.execute_instruction<0x85>(0x00003D, 2); return true;
    // src/system/oam_clear.asm:110 STA <(OAM1 + 80 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08982: cpu.execute_instruction<0x85>(0x000041, 2); return true;
    // src/system/oam_clear.asm:111 STA <(OAM1 + 81 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08984: cpu.execute_instruction<0x85>(0x000045, 2); return true;
    // src/system/oam_clear.asm:112 STA <(OAM1 + 82 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08986: cpu.execute_instruction<0x85>(0x000049, 2); return true;
    // src/system/oam_clear.asm:113 STA <(OAM1 + 83 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08988: cpu.execute_instruction<0x85>(0x00004D, 2); return true;
    // src/system/oam_clear.asm:114 STA <(OAM1 + 84 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0898A: cpu.execute_instruction<0x85>(0x000051, 2); return true;
    // src/system/oam_clear.asm:115 STA <(OAM1 + 85 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0898C: cpu.execute_instruction<0x85>(0x000055, 2); return true;
    // src/system/oam_clear.asm:116 STA <(OAM1 + 86 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0898E: cpu.execute_instruction<0x85>(0x000059, 2); return true;
    // src/system/oam_clear.asm:117 STA <(OAM1 + 87 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08990: cpu.execute_instruction<0x85>(0x00005D, 2); return true;
    // src/system/oam_clear.asm:118 STA <(OAM1 + 88 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08992: cpu.execute_instruction<0x85>(0x000061, 2); return true;
    // src/system/oam_clear.asm:119 STA <(OAM1 + 89 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08994: cpu.execute_instruction<0x85>(0x000065, 2); return true;
    // src/system/oam_clear.asm:120 STA <(OAM1 + 90 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08996: cpu.execute_instruction<0x85>(0x000069, 2); return true;
    // src/system/oam_clear.asm:121 STA <(OAM1 + 91 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08998: cpu.execute_instruction<0x85>(0x00006D, 2); return true;
    // src/system/oam_clear.asm:122 STA <(OAM1 + 92 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0899A: cpu.execute_instruction<0x85>(0x000071, 2); return true;
    // src/system/oam_clear.asm:123 STA <(OAM1 + 93 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0899C: cpu.execute_instruction<0x85>(0x000075, 2); return true;
    // src/system/oam_clear.asm:124 STA <(OAM1 + 94 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC0899E: cpu.execute_instruction<0x85>(0x000079, 2); return true;
    // src/system/oam_clear.asm:125 STA <(OAM1 + 95 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089A0: cpu.execute_instruction<0x85>(0x00007D, 2); return true;
    // src/system/oam_clear.asm:126 STA <(OAM1 + 96 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089A2: cpu.execute_instruction<0x85>(0x000081, 2); return true;
    // src/system/oam_clear.asm:127 STA <(OAM1 + 97 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089A4: cpu.execute_instruction<0x85>(0x000085, 2); return true;
    // src/system/oam_clear.asm:128 STA <(OAM1 + 98 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089A6: cpu.execute_instruction<0x85>(0x000089, 2); return true;
    // src/system/oam_clear.asm:129 STA <(OAM1 + 99 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089A8: cpu.execute_instruction<0x85>(0x00008D, 2); return true;
    // src/system/oam_clear.asm:130 STA <(OAM1 + 100 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089AA: cpu.execute_instruction<0x85>(0x000091, 2); return true;
    // src/system/oam_clear.asm:131 STA <(OAM1 + 101 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089AC: cpu.execute_instruction<0x85>(0x000095, 2); return true;
    // src/system/oam_clear.asm:132 STA <(OAM1 + 102 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089AE: cpu.execute_instruction<0x85>(0x000099, 2); return true;
    // src/system/oam_clear.asm:133 STA <(OAM1 + 103 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089B0: cpu.execute_instruction<0x85>(0x00009D, 2); return true;
    // src/system/oam_clear.asm:134 STA <(OAM1 + 104 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089B2: cpu.execute_instruction<0x85>(0x0000A1, 2); return true;
    // src/system/oam_clear.asm:135 STA <(OAM1 + 105 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089B4: cpu.execute_instruction<0x85>(0x0000A5, 2); return true;
    // src/system/oam_clear.asm:136 STA <(OAM1 + 106 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089B6: cpu.execute_instruction<0x85>(0x0000A9, 2); return true;
    // src/system/oam_clear.asm:137 STA <(OAM1 + 107 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089B8: cpu.execute_instruction<0x85>(0x0000AD, 2); return true;
    // src/system/oam_clear.asm:138 STA <(OAM1 + 108 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089BA: cpu.execute_instruction<0x85>(0x0000B1, 2); return true;
    // src/system/oam_clear.asm:139 STA <(OAM1 + 109 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089BC: cpu.execute_instruction<0x85>(0x0000B5, 2); return true;
    // src/system/oam_clear.asm:140 STA <(OAM1 + 110 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089BE: cpu.execute_instruction<0x85>(0x0000B9, 2); return true;
    // src/system/oam_clear.asm:141 STA <(OAM1 + 111 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089C0: cpu.execute_instruction<0x85>(0x0000BD, 2); return true;
    // src/system/oam_clear.asm:142 STA <(OAM1 + 112 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089C2: cpu.execute_instruction<0x85>(0x0000C1, 2); return true;
    // src/system/oam_clear.asm:143 STA <(OAM1 + 113 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089C4: cpu.execute_instruction<0x85>(0x0000C5, 2); return true;
    // src/system/oam_clear.asm:144 STA <(OAM1 + 114 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089C6: cpu.execute_instruction<0x85>(0x0000C9, 2); return true;
    // src/system/oam_clear.asm:145 STA <(OAM1 + 115 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089C8: cpu.execute_instruction<0x85>(0x0000CD, 2); return true;
    // src/system/oam_clear.asm:146 STA <(OAM1 + 116 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089CA: cpu.execute_instruction<0x85>(0x0000D1, 2); return true;
    // src/system/oam_clear.asm:147 STA <(OAM1 + 117 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089CC: cpu.execute_instruction<0x85>(0x0000D5, 2); return true;
    // src/system/oam_clear.asm:148 STA <(OAM1 + 118 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089CE: cpu.execute_instruction<0x85>(0x0000D9, 2); return true;
    // src/system/oam_clear.asm:149 STA <(OAM1 + 119 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089D0: cpu.execute_instruction<0x85>(0x0000DD, 2); return true;
    // src/system/oam_clear.asm:150 STA <(OAM1 + 120 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089D2: cpu.execute_instruction<0x85>(0x0000E1, 2); return true;
    // src/system/oam_clear.asm:151 STA <(OAM1 + 121 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089D4: cpu.execute_instruction<0x85>(0x0000E5, 2); return true;
    // src/system/oam_clear.asm:152 STA <(OAM1 + 122 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089D6: cpu.execute_instruction<0x85>(0x0000E9, 2); return true;
    // src/system/oam_clear.asm:153 STA <(OAM1 + 123 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089D8: cpu.execute_instruction<0x85>(0x0000ED, 2); return true;
    // src/system/oam_clear.asm:154 STA <(OAM1 + 124 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089DA: cpu.execute_instruction<0x85>(0x0000F1, 2); return true;
    // src/system/oam_clear.asm:155 STA <(OAM1 + 125 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089DC: cpu.execute_instruction<0x85>(0x0000F5, 2); return true;
    // src/system/oam_clear.asm:156 STA <(OAM1 + 126 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089DE: cpu.execute_instruction<0x85>(0x0000F9, 2); return true;
    // src/system/oam_clear.asm:157 STA <(OAM1 + 127 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC089E0: cpu.execute_instruction<0x85>(0x0000FD, 2); return true;
    // src/system/oam_clear.asm:158 PLD
    case 0xC089E2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/oam_clear.asm:160 PLP
    case 0xC089E3: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/oam_clear.asm:164 RTL
    case 0xC089E4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/system/oam_clear.asm:167 LDX #.LOWORD(OAM2)
    case 0xC089E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // src/system/oam_clear.asm:167 LDX #.LOWORD(OAM2)
    // Overlapping static entry reached from 0xC089E5.
    case 0xC089E7: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/oam_clear.asm:168 STX OAM_ADDR
    case 0xC089E8: cpu.execute_instruction<0x8E>(0x000003, 3); return true;
    // src/system/oam_clear.asm:169 LDX #.LOWORD(OAM2) + 128 * .SIZEOF(oam_entry)
    case 0xC089EB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000A00, 3); return true;
    // src/system/oam_clear.asm:169 LDX #.LOWORD(OAM2) + 128 * .SIZEOF(oam_entry)
    // Overlapping static entry reached from 0xC089EB.
    case 0xC089ED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/oam_clear.asm:170 STX OAM_END_ADDR
    case 0xC089EE: cpu.execute_instruction<0x8E>(0x000005, 3); return true;
    // src/system/oam_clear.asm:171 LDX #.LOWORD(OAM2_HIGH_TABLE)
    case 0xC089F1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000A00, 3); return true;
    // src/system/oam_clear.asm:171 LDX #.LOWORD(OAM2_HIGH_TABLE)
    // Overlapping static entry reached from 0xC089F1.
    case 0xC089F3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/oam_clear.asm:172 STX OAM_HIGH_TABLE_ADDR
    case 0xC089F4: cpu.execute_instruction<0x8E>(0x000007, 3); return true;
    // src/system/oam_clear.asm:173 LDA #$80
    case 0xC089F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008D80, 3); return true;
    // src/system/oam_clear.asm:174 STA OAM_HIGH_TABLE_BUFFER
    case 0xC089F9: cpu.execute_instruction<0x8D>(0x00000A, 3); return true;
    // src/system/oam_clear.asm:174 STA OAM_HIGH_TABLE_BUFFER
    // Overlapping static entry reached from 0xC089F7.
    case 0xC089FA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/oam_clear.asm:174 STA OAM_HIGH_TABLE_BUFFER
    // Overlapping static entry reached from 0xC089FA.
    case 0xC089FB: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/system/oam_clear.asm:175 LDA #$E0
    case 0xC089FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x000BE0, 3); return true;
    // src/system/oam_clear.asm:176 PHD
    case 0xC089FE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/system/oam_clear.asm:177 PEA OAM2
    case 0xC089FF: cpu.execute_instruction<0xF4>(0x000800, 3); return true;
    // src/system/oam_clear.asm:178 PLD
    case 0xC08A02: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/oam_clear.asm:179 STA <(OAM2 + 0 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A03: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/system/oam_clear.asm:180 STA <(OAM2 + 1 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A05: cpu.execute_instruction<0x85>(0x000005, 2); return true;
    // src/system/oam_clear.asm:181 STA <(OAM2 + 2 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A07: cpu.execute_instruction<0x85>(0x000009, 2); return true;
    // src/system/oam_clear.asm:182 STA <(OAM2 + 3 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A09: cpu.execute_instruction<0x85>(0x00000D, 2); return true;
    // src/system/oam_clear.asm:183 STA <(OAM2 + 4 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A0B: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/system/oam_clear.asm:184 STA <(OAM2 + 5 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A0D: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/system/oam_clear.asm:185 STA <(OAM2 + 6 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A0F: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/system/oam_clear.asm:186 STA <(OAM2 + 7 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A11: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/system/oam_clear.asm:187 STA <(OAM2 + 8 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A13: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/system/oam_clear.asm:188 STA <(OAM2 + 9 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A15: cpu.execute_instruction<0x85>(0x000025, 2); return true;
    // src/system/oam_clear.asm:189 STA <(OAM2 + 10 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A17: cpu.execute_instruction<0x85>(0x000029, 2); return true;
    // src/system/oam_clear.asm:190 STA <(OAM2 + 11 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A19: cpu.execute_instruction<0x85>(0x00002D, 2); return true;
    // src/system/oam_clear.asm:191 STA <(OAM2 + 12 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A1B: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // src/system/oam_clear.asm:192 STA <(OAM2 + 13 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A1D: cpu.execute_instruction<0x85>(0x000035, 2); return true;
    // src/system/oam_clear.asm:193 STA <(OAM2 + 14 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A1F: cpu.execute_instruction<0x85>(0x000039, 2); return true;
    // src/system/oam_clear.asm:194 STA <(OAM2 + 15 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A21: cpu.execute_instruction<0x85>(0x00003D, 2); return true;
    // src/system/oam_clear.asm:195 STA <(OAM2 + 16 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A23: cpu.execute_instruction<0x85>(0x000041, 2); return true;
    // src/system/oam_clear.asm:196 STA <(OAM2 + 17 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A25: cpu.execute_instruction<0x85>(0x000045, 2); return true;
    // src/system/oam_clear.asm:197 STA <(OAM2 + 18 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A27: cpu.execute_instruction<0x85>(0x000049, 2); return true;
    // src/system/oam_clear.asm:198 STA <(OAM2 + 19 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A29: cpu.execute_instruction<0x85>(0x00004D, 2); return true;
    // src/system/oam_clear.asm:199 STA <(OAM2 + 20 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A2B: cpu.execute_instruction<0x85>(0x000051, 2); return true;
    // src/system/oam_clear.asm:199 STA <(OAM2 + 20 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    // Overlapping static entry reached from 0xC02BB4.
    case 0xC08A2C: cpu.execute_instruction<0x51>(0x000085, 2); return true;
    // src/system/oam_clear.asm:200 STA <(OAM2 + 21 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A2D: cpu.execute_instruction<0x85>(0x000055, 2); return true;
    // src/system/oam_clear.asm:200 STA <(OAM2 + 21 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    // Overlapping static entry reached from 0xC08A2C.
    case 0xC08A2E: cpu.execute_instruction<0x55>(0x000085, 2); return true;
    // src/system/oam_clear.asm:201 STA <(OAM2 + 22 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A2F: cpu.execute_instruction<0x85>(0x000059, 2); return true;
    // src/system/oam_clear.asm:201 STA <(OAM2 + 22 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    // Overlapping static entry reached from 0xC08A2E.
    case 0xC08A30: cpu.execute_instruction<0x59>(0x005D85, 3); return true;
    // src/system/oam_clear.asm:202 STA <(OAM2 + 23 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A31: cpu.execute_instruction<0x85>(0x00005D, 2); return true;
    // src/system/oam_clear.asm:203 STA <(OAM2 + 24 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A33: cpu.execute_instruction<0x85>(0x000061, 2); return true;
    // src/system/oam_clear.asm:204 STA <(OAM2 + 25 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A35: cpu.execute_instruction<0x85>(0x000065, 2); return true;
    // src/system/oam_clear.asm:205 STA <(OAM2 + 26 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A37: cpu.execute_instruction<0x85>(0x000069, 2); return true;
    // src/system/oam_clear.asm:206 STA <(OAM2 + 27 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A39: cpu.execute_instruction<0x85>(0x00006D, 2); return true;
    // src/system/oam_clear.asm:207 STA <(OAM2 + 28 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A3B: cpu.execute_instruction<0x85>(0x000071, 2); return true;
    // src/system/oam_clear.asm:208 STA <(OAM2 + 29 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A3D: cpu.execute_instruction<0x85>(0x000075, 2); return true;
    // src/system/oam_clear.asm:209 STA <(OAM2 + 30 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A3F: cpu.execute_instruction<0x85>(0x000079, 2); return true;
    // src/system/oam_clear.asm:210 STA <(OAM2 + 31 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A41: cpu.execute_instruction<0x85>(0x00007D, 2); return true;
    // src/system/oam_clear.asm:211 STA <(OAM2 + 32 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A43: cpu.execute_instruction<0x85>(0x000081, 2); return true;
    // src/system/oam_clear.asm:212 STA <(OAM2 + 33 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A45: cpu.execute_instruction<0x85>(0x000085, 2); return true;
    // src/system/oam_clear.asm:213 STA <(OAM2 + 34 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A47: cpu.execute_instruction<0x85>(0x000089, 2); return true;
    // src/system/oam_clear.asm:214 STA <(OAM2 + 35 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A49: cpu.execute_instruction<0x85>(0x00008D, 2); return true;
    // src/system/oam_clear.asm:215 STA <(OAM2 + 36 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A4B: cpu.execute_instruction<0x85>(0x000091, 2); return true;
    // src/system/oam_clear.asm:216 STA <(OAM2 + 37 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A4D: cpu.execute_instruction<0x85>(0x000095, 2); return true;
    // src/system/oam_clear.asm:217 STA <(OAM2 + 38 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A4F: cpu.execute_instruction<0x85>(0x000099, 2); return true;
    // src/system/oam_clear.asm:218 STA <(OAM2 + 39 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A51: cpu.execute_instruction<0x85>(0x00009D, 2); return true;
    // src/system/oam_clear.asm:219 STA <(OAM2 + 40 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A53: cpu.execute_instruction<0x85>(0x0000A1, 2); return true;
    // src/system/oam_clear.asm:220 STA <(OAM2 + 41 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A55: cpu.execute_instruction<0x85>(0x0000A5, 2); return true;
    // src/system/oam_clear.asm:221 STA <(OAM2 + 42 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A57: cpu.execute_instruction<0x85>(0x0000A9, 2); return true;
    // src/system/oam_clear.asm:222 STA <(OAM2 + 43 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A59: cpu.execute_instruction<0x85>(0x0000AD, 2); return true;
    // src/system/oam_clear.asm:223 STA <(OAM2 + 44 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A5B: cpu.execute_instruction<0x85>(0x0000B1, 2); return true;
    // src/system/oam_clear.asm:224 STA <(OAM2 + 45 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A5D: cpu.execute_instruction<0x85>(0x0000B5, 2); return true;
    // src/system/oam_clear.asm:225 STA <(OAM2 + 46 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A5F: cpu.execute_instruction<0x85>(0x0000B9, 2); return true;
    // src/system/oam_clear.asm:226 STA <(OAM2 + 47 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A61: cpu.execute_instruction<0x85>(0x0000BD, 2); return true;
    // src/system/oam_clear.asm:227 STA <(OAM2 + 48 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A63: cpu.execute_instruction<0x85>(0x0000C1, 2); return true;
    // src/system/oam_clear.asm:228 STA <(OAM2 + 49 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A65: cpu.execute_instruction<0x85>(0x0000C5, 2); return true;
    // src/system/oam_clear.asm:229 STA <(OAM2 + 50 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A67: cpu.execute_instruction<0x85>(0x0000C9, 2); return true;
    // src/system/oam_clear.asm:230 STA <(OAM2 + 51 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A69: cpu.execute_instruction<0x85>(0x0000CD, 2); return true;
    // src/system/oam_clear.asm:231 STA <(OAM2 + 52 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A6B: cpu.execute_instruction<0x85>(0x0000D1, 2); return true;
    // src/system/oam_clear.asm:232 STA <(OAM2 + 53 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A6D: cpu.execute_instruction<0x85>(0x0000D5, 2); return true;
    // src/system/oam_clear.asm:233 STA <(OAM2 + 54 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A6F: cpu.execute_instruction<0x85>(0x0000D9, 2); return true;
    // src/system/oam_clear.asm:234 STA <(OAM2 + 55 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A71: cpu.execute_instruction<0x85>(0x0000DD, 2); return true;
    // src/system/oam_clear.asm:235 STA <(OAM2 + 56 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A73: cpu.execute_instruction<0x85>(0x0000E1, 2); return true;
    // src/system/oam_clear.asm:236 STA <(OAM2 + 57 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A75: cpu.execute_instruction<0x85>(0x0000E5, 2); return true;
    // src/system/oam_clear.asm:237 STA <(OAM2 + 58 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A77: cpu.execute_instruction<0x85>(0x0000E9, 2); return true;
    // src/system/oam_clear.asm:238 STA <(OAM2 + 59 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A79: cpu.execute_instruction<0x85>(0x0000ED, 2); return true;
    // src/system/oam_clear.asm:239 STA <(OAM2 + 60 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A7B: cpu.execute_instruction<0x85>(0x0000F1, 2); return true;
    // src/system/oam_clear.asm:240 STA <(OAM2 + 61 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A7D: cpu.execute_instruction<0x85>(0x0000F5, 2); return true;
    // src/system/oam_clear.asm:241 STA <(OAM2 + 62 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A7F: cpu.execute_instruction<0x85>(0x0000F9, 2); return true;
    // src/system/oam_clear.asm:242 STA <(OAM2 + 63 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A81: cpu.execute_instruction<0x85>(0x0000FD, 2); return true;
    // src/system/oam_clear.asm:243 PEA OAM2 + $100
    case 0xC08A83: cpu.execute_instruction<0xF4>(0x000900, 3); return true;
    // src/system/oam_clear.asm:244 PLD
    case 0xC08A86: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/oam_clear.asm:245 STA <(OAM2 + 64 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A87: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/system/oam_clear.asm:246 STA <(OAM2 + 65 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A89: cpu.execute_instruction<0x85>(0x000005, 2); return true;
    // src/system/oam_clear.asm:247 STA <(OAM2 + 66 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A8B: cpu.execute_instruction<0x85>(0x000009, 2); return true;
    // src/system/oam_clear.asm:248 STA <(OAM2 + 67 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A8D: cpu.execute_instruction<0x85>(0x00000D, 2); return true;
    // src/system/oam_clear.asm:249 STA <(OAM2 + 68 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A8F: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/system/oam_clear.asm:250 STA <(OAM2 + 69 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A91: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/system/oam_clear.asm:251 STA <(OAM2 + 70 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A93: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/system/oam_clear.asm:252 STA <(OAM2 + 71 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A95: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/system/oam_clear.asm:253 STA <(OAM2 + 72 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A97: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/system/oam_clear.asm:254 STA <(OAM2 + 73 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A99: cpu.execute_instruction<0x85>(0x000025, 2); return true;
    // src/system/oam_clear.asm:255 STA <(OAM2 + 74 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A9B: cpu.execute_instruction<0x85>(0x000029, 2); return true;
    // src/system/oam_clear.asm:256 STA <(OAM2 + 75 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A9D: cpu.execute_instruction<0x85>(0x00002D, 2); return true;
    // src/system/oam_clear.asm:257 STA <(OAM2 + 76 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08A9F: cpu.execute_instruction<0x85>(0x000031, 2); return true;
    // src/system/oam_clear.asm:258 STA <(OAM2 + 77 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AA1: cpu.execute_instruction<0x85>(0x000035, 2); return true;
    // src/system/oam_clear.asm:259 STA <(OAM2 + 78 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AA3: cpu.execute_instruction<0x85>(0x000039, 2); return true;
    // src/system/oam_clear.asm:260 STA <(OAM2 + 79 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AA5: cpu.execute_instruction<0x85>(0x00003D, 2); return true;
    // src/system/oam_clear.asm:261 STA <(OAM2 + 80 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AA7: cpu.execute_instruction<0x85>(0x000041, 2); return true;
    // src/system/oam_clear.asm:262 STA <(OAM2 + 81 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AA9: cpu.execute_instruction<0x85>(0x000045, 2); return true;
    // src/system/oam_clear.asm:263 STA <(OAM2 + 82 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AAB: cpu.execute_instruction<0x85>(0x000049, 2); return true;
    // src/system/oam_clear.asm:264 STA <(OAM2 + 83 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AAD: cpu.execute_instruction<0x85>(0x00004D, 2); return true;
    // src/system/oam_clear.asm:265 STA <(OAM2 + 84 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AAF: cpu.execute_instruction<0x85>(0x000051, 2); return true;
    // src/system/oam_clear.asm:266 STA <(OAM2 + 85 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AB1: cpu.execute_instruction<0x85>(0x000055, 2); return true;
    // src/system/oam_clear.asm:267 STA <(OAM2 + 86 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AB3: cpu.execute_instruction<0x85>(0x000059, 2); return true;
    // src/system/oam_clear.asm:268 STA <(OAM2 + 87 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AB5: cpu.execute_instruction<0x85>(0x00005D, 2); return true;
    // src/system/oam_clear.asm:269 STA <(OAM2 + 88 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AB7: cpu.execute_instruction<0x85>(0x000061, 2); return true;
    // src/system/oam_clear.asm:270 STA <(OAM2 + 89 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AB9: cpu.execute_instruction<0x85>(0x000065, 2); return true;
    // src/system/oam_clear.asm:271 STA <(OAM2 + 90 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08ABB: cpu.execute_instruction<0x85>(0x000069, 2); return true;
    // src/system/oam_clear.asm:272 STA <(OAM2 + 91 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08ABD: cpu.execute_instruction<0x85>(0x00006D, 2); return true;
    // src/system/oam_clear.asm:273 STA <(OAM2 + 92 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08ABF: cpu.execute_instruction<0x85>(0x000071, 2); return true;
    // src/system/oam_clear.asm:274 STA <(OAM2 + 93 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AC1: cpu.execute_instruction<0x85>(0x000075, 2); return true;
    // src/system/oam_clear.asm:275 STA <(OAM2 + 94 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AC3: cpu.execute_instruction<0x85>(0x000079, 2); return true;
    // src/system/oam_clear.asm:276 STA <(OAM2 + 95 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AC5: cpu.execute_instruction<0x85>(0x00007D, 2); return true;
    // src/system/oam_clear.asm:277 STA <(OAM2 + 96 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AC7: cpu.execute_instruction<0x85>(0x000081, 2); return true;
    // src/system/oam_clear.asm:278 STA <(OAM2 + 97 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AC9: cpu.execute_instruction<0x85>(0x000085, 2); return true;
    // src/system/oam_clear.asm:279 STA <(OAM2 + 98 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08ACB: cpu.execute_instruction<0x85>(0x000089, 2); return true;
    // src/system/oam_clear.asm:280 STA <(OAM2 + 99 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08ACD: cpu.execute_instruction<0x85>(0x00008D, 2); return true;
    // src/system/oam_clear.asm:281 STA <(OAM2 + 100 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08ACF: cpu.execute_instruction<0x85>(0x000091, 2); return true;
    // src/system/oam_clear.asm:282 STA <(OAM2 + 101 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AD1: cpu.execute_instruction<0x85>(0x000095, 2); return true;
    // src/system/oam_clear.asm:283 STA <(OAM2 + 102 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AD3: cpu.execute_instruction<0x85>(0x000099, 2); return true;
    // src/system/oam_clear.asm:284 STA <(OAM2 + 103 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AD5: cpu.execute_instruction<0x85>(0x00009D, 2); return true;
    // src/system/oam_clear.asm:285 STA <(OAM2 + 104 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AD7: cpu.execute_instruction<0x85>(0x0000A1, 2); return true;
    // src/system/oam_clear.asm:286 STA <(OAM2 + 105 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AD9: cpu.execute_instruction<0x85>(0x0000A5, 2); return true;
    // src/system/oam_clear.asm:287 STA <(OAM2 + 106 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08ADB: cpu.execute_instruction<0x85>(0x0000A9, 2); return true;
    // src/system/oam_clear.asm:288 STA <(OAM2 + 107 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08ADD: cpu.execute_instruction<0x85>(0x0000AD, 2); return true;
    // src/system/oam_clear.asm:289 STA <(OAM2 + 108 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08ADF: cpu.execute_instruction<0x85>(0x0000B1, 2); return true;
    // src/system/oam_clear.asm:290 STA <(OAM2 + 109 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AE1: cpu.execute_instruction<0x85>(0x0000B5, 2); return true;
    // src/system/oam_clear.asm:291 STA <(OAM2 + 110 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AE3: cpu.execute_instruction<0x85>(0x0000B9, 2); return true;
    // src/system/oam_clear.asm:292 STA <(OAM2 + 111 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AE5: cpu.execute_instruction<0x85>(0x0000BD, 2); return true;
    // src/system/oam_clear.asm:293 STA <(OAM2 + 112 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AE7: cpu.execute_instruction<0x85>(0x0000C1, 2); return true;
    // src/system/oam_clear.asm:294 STA <(OAM2 + 113 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AE9: cpu.execute_instruction<0x85>(0x0000C5, 2); return true;
    // src/system/oam_clear.asm:295 STA <(OAM2 + 114 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AEB: cpu.execute_instruction<0x85>(0x0000C9, 2); return true;
    // src/system/oam_clear.asm:296 STA <(OAM2 + 115 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AED: cpu.execute_instruction<0x85>(0x0000CD, 2); return true;
    // src/system/oam_clear.asm:297 STA <(OAM2 + 116 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AEF: cpu.execute_instruction<0x85>(0x0000D1, 2); return true;
    // src/system/oam_clear.asm:298 STA <(OAM2 + 117 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AF1: cpu.execute_instruction<0x85>(0x0000D5, 2); return true;
    // src/system/oam_clear.asm:299 STA <(OAM2 + 118 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AF3: cpu.execute_instruction<0x85>(0x0000D9, 2); return true;
    // src/system/oam_clear.asm:300 STA <(OAM2 + 119 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AF5: cpu.execute_instruction<0x85>(0x0000DD, 2); return true;
    // src/system/oam_clear.asm:301 STA <(OAM2 + 120 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AF7: cpu.execute_instruction<0x85>(0x0000E1, 2); return true;
    // src/system/oam_clear.asm:302 STA <(OAM2 + 121 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AF9: cpu.execute_instruction<0x85>(0x0000E5, 2); return true;
    // src/system/oam_clear.asm:303 STA <(OAM2 + 122 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AFB: cpu.execute_instruction<0x85>(0x0000E9, 2); return true;
    // src/system/oam_clear.asm:304 STA <(OAM2 + 123 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AFD: cpu.execute_instruction<0x85>(0x0000ED, 2); return true;
    // src/system/oam_clear.asm:305 STA <(OAM2 + 124 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08AFF: cpu.execute_instruction<0x85>(0x0000F1, 2); return true;
    // src/system/oam_clear.asm:306 STA <(OAM2 + 125 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08B01: cpu.execute_instruction<0x85>(0x0000F5, 2); return true;
    // src/system/oam_clear.asm:307 STA <(OAM2 + 126 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08B03: cpu.execute_instruction<0x85>(0x0000F9, 2); return true;
    // src/system/oam_clear.asm:308 STA <(OAM2 + 127 * .SIZEOF(oam_entry) + oam_entry::y_coord)
    case 0xC08B05: cpu.execute_instruction<0x85>(0x0000FD, 2); return true;
    // src/system/oam_clear.asm:309 PLD
    case 0xC08B07: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/oam_clear.asm:311 PLP
    case 0xC08B08: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/oam_clear.asm:315 RTL
    case 0xC08B09: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
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
    case 0xC08503: cpu.execute_instruction<0xA6>(0x0000C9, 2); return true;
    // src/system/process_sfx_queue.asm:5 CPX <SOUND_EFFECT_QUEUE_END_INDEX + 0
    case 0xC08505: cpu.execute_instruction<0xE4>(0x0000C8, 2); return true;
    // src/system/process_sfx_queue.asm:6 BEQ @UNKNOWN0
    case 0xC08507: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/system/process_sfx_queue.asm:7 LDA SOUND_EFFECT_QUEUE,X
    case 0xC08509: cpu.execute_instruction<0xBD>(0x001B30, 3); return true;
    // src/system/process_sfx_queue.asm:7 LDA SOUND_EFFECT_QUEUE,X
    // Overlapping static entry reached from 0xC0D176.
    case 0xC0850A: cpu.execute_instruction<0x30>(0x00001B, 2); return true;
    // src/system/process_sfx_queue.asm:8 STA APUIO3
    case 0xC0850C: cpu.execute_instruction<0x8D>(0x002143, 3); return true;
    // src/system/process_sfx_queue.asm:9 TXA
    case 0xC0850F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/process_sfx_queue.asm:10 INC
    case 0xC08510: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/process_sfx_queue.asm:11 AND #$0007
    case 0xC08511: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x008507, 3); return true;
    // src/system/process_sfx_queue.asm:12 STA <SOUND_EFFECT_QUEUE_INDEX
    case 0xC08513: cpu.execute_instruction<0x85>(0x0000C9, 2); return true;
    // src/system/process_sfx_queue.asm:12 STA <SOUND_EFFECT_QUEUE_INDEX
    // Overlapping static entry reached from 0xC08511.
    case 0xC08514: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C2, 2); else cpu.execute_instruction<0xC9>(0x0030C2, 3); return true;
    // src/system/process_sfx_queue.asm:14 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC08515: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/process_sfx_queue.asm:14 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC08514.
    case 0xC08516: cpu.execute_instruction<0x30>(0x000060, 2); return true;
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
    // src/system/reset.asm:6 CLC
    case 0xC08000: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/reset.asm:7 XCE
    case 0xC08001: cpu.execute_instruction<0xFB>(0x000000, 1); return true;
    // src/system/reset.asm:9 STZ NMITIMEN
    case 0xC08002: cpu.execute_instruction<0x9C>(0x004200, 3); return true;
    // src/system/reset.asm:10 STZ $00
    case 0xC08005: cpu.execute_instruction<0x64>(0x000000, 2); return true;
    // src/system/reset.asm:11 LDX #$00
    case 0xC08007: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x00A000, 3); return true;
    // src/system/reset.asm:12 LDY #$01
    case 0xC08009: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x00C201, 3); return true;
    // src/system/reset.asm:12 LDY #$01
    // Overlapping static entry reached from 0xC08007.
    case 0xC0800A: cpu.execute_instruction<0x01>(0x0000C2, 2); return true;
    // src/system/reset.asm:13 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0800B: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/reset.asm:13 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC08009.
    case 0xC0800C: cpu.execute_instruction<0x30>(0x0000A9, 2); return true;
    // src/system/reset.asm:14 LDA #.LOWORD(STACK_65816_END) - 1
    case 0xC0800D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x001FFE, 3); return true;
    // src/system/reset.asm:14 LDA #.LOWORD(STACK_65816_END) - 1
    // Overlapping static entry reached from 0xC0800C.
    case 0xC0800E: cpu.execute_instruction<0xFE>(0x00541F, 3); return true;
    // src/system/reset.asm:14 LDA #.LOWORD(STACK_65816_END) - 1
    // Overlapping static entry reached from 0xC0800D.
    case 0xC0800F: cpu.execute_instruction<0x1F>(0x000054, 4); return true;
    // src/system/reset.asm:15 MVN #$00,#$00
    case 0xC08010: cpu.execute_instruction<0x54>(0x000000, 3); return true;
    // src/system/reset.asm:15 MVN #$00,#$00
    // Overlapping static entry reached from 0xC0800E.
    case 0xC08011: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/system/reset.asm:16 TXS ; STACK_65816_END
    case 0xC08013: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/system/reset.asm:17 LDA #.LOWORD(STACK_END)
    case 0xC08014: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001F00, 3); return true;
    // src/system/reset.asm:17 LDA #.LOWORD(STACK_END)
    // Overlapping static entry reached from 0xC08014.
    case 0xC08016: cpu.execute_instruction<0x1F>(0x20E25B, 4); return true;
    // src/system/reset.asm:18 TCD
    case 0xC08017: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/reset.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC08018: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/system/reset.asm:20 LDA #$80
    case 0xC0801A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008D80, 3); return true;
    // src/system/reset.asm:21 STA INIDISP
    case 0xC0801C: cpu.execute_instruction<0x8D>(0x002100, 3); return true;
    // src/system/reset.asm:21 STA INIDISP
    // Overlapping static entry reached from 0xC0801A.
    case 0xC0801D: cpu.execute_instruction<0x00>(0x000021, 2); return true;
    // src/system/reset.asm:22 STA INIDISP_MIRROR
    case 0xC0801F: cpu.execute_instruction<0x8D>(0x00000D, 3); return true;
    // src/system/reset.asm:23 STZ OBSEL
    case 0xC08022: cpu.execute_instruction<0x9C>(0x002101, 3); return true;
    // src/system/reset.asm:24 STZ OAMADDL
    case 0xC08025: cpu.execute_instruction<0x9C>(0x002102, 3); return true;
    // src/system/reset.asm:25 STZ OAMADDH
    case 0xC08028: cpu.execute_instruction<0x9C>(0x002103, 3); return true;
    // src/system/reset.asm:26 STZ BGMODE
    case 0xC0802B: cpu.execute_instruction<0x9C>(0x002105, 3); return true;
    // src/system/reset.asm:27 STZ MOSAIC
    case 0xC0802E: cpu.execute_instruction<0x9C>(0x002106, 3); return true;
    // src/system/reset.asm:28 STZ BG1SC
    case 0xC08031: cpu.execute_instruction<0x9C>(0x002107, 3); return true;
    // src/system/reset.asm:29 STZ BG2SC
    case 0xC08034: cpu.execute_instruction<0x9C>(0x002108, 3); return true;
    // src/system/reset.asm:30 STZ BG3SC
    case 0xC08037: cpu.execute_instruction<0x9C>(0x002109, 3); return true;
    // src/system/reset.asm:31 STZ BG4SC
    case 0xC0803A: cpu.execute_instruction<0x9C>(0x00210A, 3); return true;
    // src/system/reset.asm:32 STZ BG12NBA
    case 0xC0803D: cpu.execute_instruction<0x9C>(0x00210B, 3); return true;
    // src/system/reset.asm:33 STZ BG34NBA
    case 0xC08040: cpu.execute_instruction<0x9C>(0x00210C, 3); return true;
    // src/system/reset.asm:34 STZ BG1HOFS
    case 0xC08043: cpu.execute_instruction<0x9C>(0x00210D, 3); return true;
    // src/system/reset.asm:35 STZ BG1HOFS
    case 0xC08046: cpu.execute_instruction<0x9C>(0x00210D, 3); return true;
    // src/system/reset.asm:36 STZ BG1VOFS
    case 0xC08049: cpu.execute_instruction<0x9C>(0x00210E, 3); return true;
    // src/system/reset.asm:37 STZ BG1VOFS
    case 0xC0804C: cpu.execute_instruction<0x9C>(0x00210E, 3); return true;
    // src/system/reset.asm:38 STZ BG2HOFS
    case 0xC0804F: cpu.execute_instruction<0x9C>(0x00210F, 3); return true;
    // src/system/reset.asm:39 STZ BG2HOFS
    case 0xC08052: cpu.execute_instruction<0x9C>(0x00210F, 3); return true;
    // src/system/reset.asm:40 STZ BG2VOFS
    case 0xC08055: cpu.execute_instruction<0x9C>(0x002110, 3); return true;
    // src/system/reset.asm:41 STZ BG2VOFS
    case 0xC08058: cpu.execute_instruction<0x9C>(0x002110, 3); return true;
    // src/system/reset.asm:42 STZ BG3HOFS
    case 0xC0805B: cpu.execute_instruction<0x9C>(0x002111, 3); return true;
    // src/system/reset.asm:43 STZ BG3HOFS
    case 0xC0805E: cpu.execute_instruction<0x9C>(0x002111, 3); return true;
    // src/system/reset.asm:44 STZ BG3VOFS
    case 0xC08061: cpu.execute_instruction<0x9C>(0x002112, 3); return true;
    // src/system/reset.asm:45 STZ BG3VOFS
    case 0xC08064: cpu.execute_instruction<0x9C>(0x002112, 3); return true;
    // src/system/reset.asm:46 STZ BG4HOFS
    case 0xC08067: cpu.execute_instruction<0x9C>(0x002113, 3); return true;
    // src/system/reset.asm:47 STZ BG4HOFS
    case 0xC0806A: cpu.execute_instruction<0x9C>(0x002113, 3); return true;
    // src/system/reset.asm:48 STZ BG4VOFS
    case 0xC0806D: cpu.execute_instruction<0x9C>(0x002114, 3); return true;
    // src/system/reset.asm:49 STZ BG4VOFS
    case 0xC08070: cpu.execute_instruction<0x9C>(0x002114, 3); return true;
    // src/system/reset.asm:50 LDA #$0080
    case 0xC08073: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008D80, 3); return true;
    // src/system/reset.asm:51 STA VMAIN
    case 0xC08075: cpu.execute_instruction<0x8D>(0x002115, 3); return true;
    // src/system/reset.asm:51 STA VMAIN
    // Overlapping static entry reached from 0xC08073.
    case 0xC08076: cpu.execute_instruction<0x15>(0x000021, 2); return true;
    // src/system/reset.asm:52 STZ VMADDL
    case 0xC08078: cpu.execute_instruction<0x9C>(0x002116, 3); return true;
    // src/system/reset.asm:53 STZ VMADDH
    case 0xC0807B: cpu.execute_instruction<0x9C>(0x002117, 3); return true;
    // src/system/reset.asm:54 STZ M7SEL
    case 0xC0807E: cpu.execute_instruction<0x9C>(0x00211A, 3); return true;
    // src/system/reset.asm:55 STZ M7A
    case 0xC08081: cpu.execute_instruction<0x9C>(0x00211B, 3); return true;
    // src/system/reset.asm:56 LDA #$01
    case 0xC08084: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/system/reset.asm:57 STA M7A
    case 0xC08086: cpu.execute_instruction<0x8D>(0x00211B, 3); return true;
    // src/system/reset.asm:57 STA M7A
    // Overlapping static entry reached from 0xC08084.
    case 0xC08087: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/system/reset.asm:57 STA M7A
    // Overlapping static entry reached from 0xC08087.
    case 0xC08088: cpu.execute_instruction<0x21>(0x00009C, 2); return true;
    // src/system/reset.asm:58 STZ M7B
    case 0xC08089: cpu.execute_instruction<0x9C>(0x00211C, 3); return true;
    // src/system/reset.asm:58 STZ M7B
    // Overlapping static entry reached from 0xC08088.
    case 0xC0808A: cpu.execute_instruction<0x1C>(0x009C21, 3); return true;
    // src/system/reset.asm:59 STZ M7B
    case 0xC0808C: cpu.execute_instruction<0x9C>(0x00211C, 3); return true;
    // src/system/reset.asm:59 STZ M7B
    // Overlapping static entry reached from 0xC0808A.
    case 0xC0808D: cpu.execute_instruction<0x1C>(0x009C21, 3); return true;
    // src/system/reset.asm:60 STZ M7C
    case 0xC0808F: cpu.execute_instruction<0x9C>(0x00211D, 3); return true;
    // src/system/reset.asm:60 STZ M7C
    // Overlapping static entry reached from 0xC0808D.
    case 0xC08090: cpu.execute_instruction<0x1D>(0x009C21, 3); return true;
    // src/system/reset.asm:61 STZ M7C
    case 0xC08092: cpu.execute_instruction<0x9C>(0x00211D, 3); return true;
    // src/system/reset.asm:61 STZ M7C
    // Overlapping static entry reached from 0xC08090.
    case 0xC08093: cpu.execute_instruction<0x1D>(0x009C21, 3); return true;
    // src/system/reset.asm:62 STZ M7D
    case 0xC08095: cpu.execute_instruction<0x9C>(0x00211E, 3); return true;
    // src/system/reset.asm:62 STZ M7D
    // Overlapping static entry reached from 0xC08093.
    case 0xC08096: cpu.execute_instruction<0x1E>(0x008D21, 3); return true;
    // src/system/reset.asm:63 STA M7D
    case 0xC08098: cpu.execute_instruction<0x8D>(0x00211E, 3); return true;
    // src/system/reset.asm:63 STA M7D
    // Overlapping static entry reached from 0xC08096.
    case 0xC08099: cpu.execute_instruction<0x1E>(0x009C21, 3); return true;
    // src/system/reset.asm:64 STZ M7X
    case 0xC0809B: cpu.execute_instruction<0x9C>(0x00211F, 3); return true;
    // src/system/reset.asm:64 STZ M7X
    // Overlapping static entry reached from 0xC08099.
    case 0xC0809C: cpu.execute_instruction<0x1F>(0x1F9C21, 4); return true;
    // src/system/reset.asm:65 STZ M7X
    case 0xC0809E: cpu.execute_instruction<0x9C>(0x00211F, 3); return true;
    // src/system/reset.asm:65 STZ M7X
    // Overlapping static entry reached from 0xC0809C.
    case 0xC080A0: cpu.execute_instruction<0x21>(0x00009C, 2); return true;
    // src/system/reset.asm:66 STZ M7Y
    case 0xC080A1: cpu.execute_instruction<0x9C>(0x002120, 3); return true;
    // src/system/reset.asm:66 STZ M7Y
    // Overlapping static entry reached from 0xC080A0.
    case 0xC080A2: cpu.execute_instruction<0x20>(0x009C21, 3); return true;
    // src/system/reset.asm:67 STZ M7Y
    case 0xC080A4: cpu.execute_instruction<0x9C>(0x002120, 3); return true;
    // src/system/reset.asm:67 STZ M7Y
    // Overlapping static entry reached from 0xC080A2.
    case 0xC080A5: cpu.execute_instruction<0x20>(0x009C21, 3); return true;
    // src/system/reset.asm:68 STZ CGADD
    case 0xC080A7: cpu.execute_instruction<0x9C>(0x002121, 3); return true;
    // src/system/reset.asm:68 STZ CGADD
    // Overlapping static entry reached from 0xC080A5.
    case 0xC080A8: cpu.execute_instruction<0x21>(0x000021, 2); return true;
    // src/system/reset.asm:69 STZ W12SEL
    case 0xC080AA: cpu.execute_instruction<0x9C>(0x002123, 3); return true;
    // src/system/reset.asm:70 STZ W34SEL
    case 0xC080AD: cpu.execute_instruction<0x9C>(0x002124, 3); return true;
    // src/system/reset.asm:71 STZ WOBJSEL
    case 0xC080B0: cpu.execute_instruction<0x9C>(0x002125, 3); return true;
    // src/system/reset.asm:72 STZ WH0
    case 0xC080B3: cpu.execute_instruction<0x9C>(0x002126, 3); return true;
    // src/system/reset.asm:73 STZ WH1
    case 0xC080B6: cpu.execute_instruction<0x9C>(0x002127, 3); return true;
    // src/system/reset.asm:73 STZ WH1
    // Overlapping static entry reached from 0xC0810D.
    case 0xC080B8: cpu.execute_instruction<0x21>(0x00009C, 2); return true;
    // src/system/reset.asm:74 STZ WH2
    case 0xC080B9: cpu.execute_instruction<0x9C>(0x002128, 3); return true;
    // src/system/reset.asm:74 STZ WH2
    // Overlapping static entry reached from 0xC080B8.
    case 0xC080BA: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/system/reset.asm:74 STZ WH2
    // Overlapping static entry reached from 0xC080BA.
    case 0xC080BB: cpu.execute_instruction<0x21>(0x00009C, 2); return true;
    // src/system/reset.asm:75 STZ WH3
    case 0xC080BC: cpu.execute_instruction<0x9C>(0x002129, 3); return true;
    // src/system/reset.asm:75 STZ WH3
    // Overlapping static entry reached from 0xC080BB.
    case 0xC080BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000021, 2); else cpu.execute_instruction<0x29>(0x009C21, 3); return true;
    // src/system/reset.asm:76 STZ WBGLOG
    case 0xC080BF: cpu.execute_instruction<0x9C>(0x00212A, 3); return true;
    // src/system/reset.asm:76 STZ WBGLOG
    // Overlapping static entry reached from 0xC080BD.
    case 0xC080C0: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/system/reset.asm:76 STZ WBGLOG
    // Overlapping static entry reached from 0xC080C0.
    case 0xC080C1: cpu.execute_instruction<0x21>(0x00009C, 2); return true;
    // src/system/reset.asm:77 STZ WOBJLOG
    case 0xC080C2: cpu.execute_instruction<0x9C>(0x00212B, 3); return true;
    // src/system/reset.asm:77 STZ WOBJLOG
    // Overlapping static entry reached from 0xC080C1.
    case 0xC080C3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/system/reset.asm:77 STZ WOBJLOG
    // Overlapping static entry reached from 0xC080C3.
    case 0xC080C4: cpu.execute_instruction<0x21>(0x0000A9, 2); return true;
    // src/system/reset.asm:78 LDA #$1F
    case 0xC080C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x008D1F, 3); return true;
    // src/system/reset.asm:78 LDA #$1F
    // Overlapping static entry reached from 0xC080C4.
    case 0xC080C6: cpu.execute_instruction<0x1F>(0x212C8D, 4); return true;
    // src/system/reset.asm:79 STA TM
    case 0xC080C7: cpu.execute_instruction<0x8D>(0x00212C, 3); return true;
    // src/system/reset.asm:79 STA TM
    // Overlapping static entry reached from 0xC080C5.
    case 0xC080C8: cpu.execute_instruction<0x2C>(0x009C21, 3); return true;
    // src/system/reset.asm:80 STZ TD
    case 0xC080CA: cpu.execute_instruction<0x9C>(0x00212D, 3); return true;
    // src/system/reset.asm:80 STZ TD
    // Overlapping static entry reached from 0xC080C8.
    case 0xC080CB: cpu.execute_instruction<0x2D>(0x009C21, 3); return true;
    // src/system/reset.asm:81 STZ TMW
    case 0xC080CD: cpu.execute_instruction<0x9C>(0x00212E, 3); return true;
    // src/system/reset.asm:81 STZ TMW
    // Overlapping static entry reached from 0xC080CB.
    case 0xC080CE: cpu.execute_instruction<0x2E>(0x009C21, 3); return true;
    // src/system/reset.asm:82 STZ TSW
    case 0xC080D0: cpu.execute_instruction<0x9C>(0x00212F, 3); return true;
    // src/system/reset.asm:82 STZ TSW
    // Overlapping static entry reached from 0xC080CE.
    case 0xC080D1: cpu.execute_instruction<0x2F>(0x309C21, 4); return true;
    // src/system/reset.asm:83 STZ CGWSEL
    case 0xC080D3: cpu.execute_instruction<0x9C>(0x002130, 3); return true;
    // src/system/reset.asm:83 STZ CGWSEL
    // Overlapping static entry reached from 0xC080D1.
    case 0xC080D5: cpu.execute_instruction<0x21>(0x00009C, 2); return true;
    // src/system/reset.asm:84 STZ CGADSUB
    case 0xC080D6: cpu.execute_instruction<0x9C>(0x002131, 3); return true;
    // src/system/reset.asm:84 STZ CGADSUB
    // Overlapping static entry reached from 0xC080D5.
    case 0xC080D7: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/system/reset.asm:85 LDA #$E0
    case 0xC080D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x008DE0, 3); return true;
    // src/system/reset.asm:86 STA FIXED_COLOR_DATA
    case 0xC080DB: cpu.execute_instruction<0x8D>(0x002132, 3); return true;
    // src/system/reset.asm:86 STA FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC080D9.
    case 0xC080DC: cpu.execute_instruction<0x32>(0x000021, 2); return true;
    // src/system/reset.asm:87 STZ SETINI
    case 0xC080DE: cpu.execute_instruction<0x9C>(0x002133, 3); return true;
    // src/system/reset.asm:88 LDA #$FF
    case 0xC080E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x008DFF, 3); return true;
    // src/system/reset.asm:89 STA WRMPYA
    case 0xC080E3: cpu.execute_instruction<0x8D>(0x004202, 3); return true;
    // src/system/reset.asm:89 STA WRMPYA
    // Overlapping static entry reached from 0xC080E1.
    case 0xC080E4: cpu.execute_instruction<0x02>(0x000042, 2); return true;
    // src/system/reset.asm:90 STZ WRMPYA
    case 0xC080E6: cpu.execute_instruction<0x9C>(0x004202, 3); return true;
    // src/system/reset.asm:91 STZ WRMPYB
    case 0xC080E9: cpu.execute_instruction<0x9C>(0x004203, 3); return true;
    // src/system/reset.asm:92 STZ WRDIVL
    case 0xC080EC: cpu.execute_instruction<0x9C>(0x004204, 3); return true;
    // src/system/reset.asm:93 STZ WRDIVH
    case 0xC080EF: cpu.execute_instruction<0x9C>(0x004205, 3); return true;
    // src/system/reset.asm:94 STZ WRDIVB
    case 0xC080F2: cpu.execute_instruction<0x9C>(0x004206, 3); return true;
    // src/system/reset.asm:95 STZ HTIMEL
    case 0xC080F5: cpu.execute_instruction<0x9C>(0x004207, 3); return true;
    // src/system/reset.asm:96 STZ HTIMEH
    case 0xC080F8: cpu.execute_instruction<0x9C>(0x004208, 3); return true;
    // src/system/reset.asm:97 STZ VTIMEL
    case 0xC080FB: cpu.execute_instruction<0x9C>(0x004209, 3); return true;
    // src/system/reset.asm:98 STZ VTIMEH
    case 0xC080FE: cpu.execute_instruction<0x9C>(0x00420A, 3); return true;
    // src/system/reset.asm:99 STZ MDMAEN
    case 0xC08101: cpu.execute_instruction<0x9C>(0x00420B, 3); return true;
    // src/system/reset.asm:100 STZ HDMAEN
    case 0xC08104: cpu.execute_instruction<0x9C>(0x00420C, 3); return true;
    // src/system/reset.asm:101 LDA #$01
    case 0xC08107: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/system/reset.asm:102 STA MEMSEL
    case 0xC08109: cpu.execute_instruction<0x8D>(0x00420D, 3); return true;
    // src/system/reset.asm:102 STA MEMSEL
    // Overlapping static entry reached from 0xC08107.
    case 0xC0810A: cpu.execute_instruction<0x0D>(0x00C242, 3); return true;
    // src/system/reset.asm:103 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC0810C: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/system/reset.asm:103 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC0810A.
    case 0xC0810D: cpu.execute_instruction<0x30>(0x0000A9, 2); return true;
    // src/system/reset.asm:104 LDA #$DFFF
    case 0xC0810E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00DFFF, 3); return true;
    // src/system/reset.asm:104 LDA #$DFFF
    // Overlapping static entry reached from 0xC0810D.
    case 0xC0810F: cpu.execute_instruction<0xFF>(0x7E54DF, 4); return true;
    // src/system/reset.asm:104 LDA #$DFFF
    // Overlapping static entry reached from 0xC0810E.
    case 0xC08110: cpu.execute_instruction<0xDF>(0x7E7E54, 4); return true;
    // src/system/reset.asm:105 MVN #^__BSS_START__,#^__BSS_START__
    case 0xC08111: cpu.execute_instruction<0x54>(0x007E7E, 3); return true;
    // src/system/reset.asm:105 MVN #^__BSS_START__,#^__BSS_START__
    // Overlapping static entry reached from 0xC0810F.
    case 0xC08113: cpu.execute_instruction<0x7E>(0x0000A9, 3); return true;
    // src/system/reset.asm:106 LDA #$2000
    case 0xC08114: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002000, 3); return true;
    // src/system/reset.asm:106 LDA #$2000
    // Overlapping static entry reached from 0xC08114.
    case 0xC08116: cpu.execute_instruction<0x20>(0x00A18D, 3); return true;
    // src/system/reset.asm:107 STA CURRENT_HEAP_ADDRESS
    case 0xC08117: cpu.execute_instruction<0x8D>(0x0000A1, 3); return true;
    // src/system/reset.asm:107 STA CURRENT_HEAP_ADDRESS
    // Overlapping static entry reached from 0xC08116.
    case 0xC08119: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/reset.asm:108 STA BASE_HEAP_ADDRESS
    case 0xC0811A: cpu.execute_instruction<0x8D>(0x0000A3, 3); return true;
    // src/system/reset.asm:109 LDA #$FFFF
    case 0xC0811D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/system/reset.asm:109 LDA #$FFFF
    // Overlapping static entry reached from 0xC0811D.
    case 0xC0811F: cpu.execute_instruction<0xFF>(0x28028D, 4); return true;
    // src/system/reset.asm:110 STA UNUSED_7E2402
    case 0xC08120: cpu.execute_instruction<0x8D>(0x002802, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/system/reset.asm:111 MOVE_INT_CONSTANT $56781234, RAND_A
    case 0xC08123: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000034, 2); else cpu.execute_instruction<0xA9>(0x001234, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/system/reset.asm:111 MOVE_INT_CONSTANT $56781234, RAND_A
    // Overlapping static entry reached from 0xC08123.
    case 0xC08125: cpu.execute_instruction<0x12>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/system/reset.asm:111 MOVE_INT_CONSTANT $56781234, RAND_A
    case 0xC08126: cpu.execute_instruction<0x8D>(0x000024, 3); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/system/reset.asm:111 MOVE_INT_CONSTANT $56781234, RAND_A
    // Overlapping static entry reached from 0xC08125.
    case 0xC08127: cpu.execute_instruction<0x24>(0x000000, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/system/reset.asm:111 MOVE_INT_CONSTANT $56781234, RAND_A
    case 0xC08129: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x005678, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/system/reset.asm:111 MOVE_INT_CONSTANT $56781234, RAND_A
    // Overlapping static entry reached from 0xC08129.
    case 0xC0812B: cpu.execute_instruction<0x56>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/system/reset.asm:111 MOVE_INT_CONSTANT $56781234, RAND_A
    case 0xC0812C: cpu.execute_instruction<0x8D>(0x000026, 3); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/system/reset.asm:111 MOVE_INT_CONSTANT $56781234, RAND_A
    // Overlapping static entry reached from 0xC0812B.
    case 0xC0812D: cpu.execute_instruction<0x26>(0x000000, 2); return true;
    // src/system/reset.asm:112 LDA #$0001
    case 0xC0812F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/system/reset.asm:112 LDA #$0001
    // Overlapping static entry reached from 0xC0812F.
    case 0xC08131: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/system/reset.asm:113 STA NEXT_FRAME_BUF_ID
    case 0xC08132: cpu.execute_instruction<0x8D>(0x00002E, 3); return true;
    // src/system/reset.asm:114 LDA #.LOWORD(DEFAULT_IRQ_CALLBACK)
    case 0xC08135: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00851B, 3); return true;
    // src/system/reset.asm:114 LDA #.LOWORD(DEFAULT_IRQ_CALLBACK)
    // Overlapping static entry reached from 0xC08135.
    case 0xC08137: cpu.execute_instruction<0x85>(0x00008D, 2); return true;
    // src/system/reset.asm:115 STA IRQ_CALLBACK
    case 0xC08138: cpu.execute_instruction<0x8D>(0x000020, 3); return true;
    // src/system/reset.asm:115 STA IRQ_CALLBACK
    // Overlapping static entry reached from 0xC08137.
    case 0xC08139: cpu.execute_instruction<0x20>(0x002200, 3); return true;
    // src/system/reset.asm:116 JSL UNKNOWN_C08B19
    case 0xC0813B: cpu.execute_instruction<0x22>(0xC08B0A, 4); return true;
    // src/system/reset.asm:116 JSL UNKNOWN_C08B19
    // Overlapping static entry reached from 0xC08139.
    case 0xC0813C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/system/reset.asm:116 JSL UNKNOWN_C08B19
    // Overlapping static entry reached from 0xC0813C.
    case 0xC0813D: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/system/reset.asm:116 JSL UNKNOWN_C08B19
    // Overlapping static entry reached from 0xC0813D.
    case 0xC0813E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00005C, 2); else cpu.execute_instruction<0xC0>(0x00755C, 3); return true;
    // src/system/reset.asm:117 JMP f:GAME_INIT
    case 0xC0813F: cpu.execute_instruction<0x5C>(0xC0B975, 4); return true;
    // src/system/reset.asm:117 JMP f:GAME_INIT
    // Overlapping static entry reached from 0xC0813E.
    case 0xC08140: cpu.execute_instruction<0x75>(0x0000B9, 2); return true;
    // src/system/reset.asm:117 JMP f:GAME_INIT
    // Overlapping static entry reached from 0xC0813E.
    case 0xC08141: cpu.execute_instruction<0xB9>(0x005CC0, 3); return true;
    // src/system/reset.asm:117 JMP f:GAME_INIT
    // Overlapping static entry reached from 0xC08140.
    case 0xC08142: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00005C, 2); else cpu.execute_instruction<0xC0>(0x00005C, 3); return true;
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
    // src/system/reset_irq_callback.asm:4 STA IRQ_CALLBACK
    // Overlapping static entry reached from 0xC0850A.
    case 0xC08527: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // src/system/reset_irq_callback.asm:5 RTL
    case 0xC08528: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/reset_vector.asm (source_named).
bool execute_system_reset_vector_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/system/reset_vector.asm:7 JMP f:RESET
    case 0xC08143: cpu.execute_instruction<0x5C>(0xC08000, 4); return true;
    // src/system/reset_vector.asm:7 JMP f:RESET
    // Overlapping static entry reached from 0xC08141.
    case 0xC08144: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/system/reset_vector.asm:7 JMP f:RESET
    // Overlapping static entry reached from 0xC08142.
    case 0xC08145: cpu.execute_instruction<0x80>(0x0000C0, 2); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/calc_save_block_checksum.asm (source_named).
bool execute_system_saves_calc_save_block_checksum_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:3 BEGIN_C_FUNCTION
    case 0xC0F658: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:8 END_STACK_VARS
    case 0xC0F65A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:8 END_STACK_VARS
    case 0xC0F65B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:8 END_STACK_VARS
    case 0xC0F65C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:8 END_STACK_VARS
    case 0xC0F65D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F65D.
    case 0xC0F65F: cpu.execute_instruction<0xFF>(0xA0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:8 END_STACK_VARS
    case 0xC0F660: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:8 END_STACK_VARS
    case 0xC0F661: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum.asm:9 LDY #.SIZEOF(save_block)
    case 0xC0F662: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000500, 3); return true;
    // src/system/saves/calc_save_block_checksum.asm:9 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xC0F65F.
    case 0xC0F663: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:9 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xC0F662.
    case 0xC0F664: cpu.execute_instruction<0x05>(0x000022, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:10 JSL MULT16
    case 0xC0F665: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/system/saves/calc_save_block_checksum.asm:10 JSL MULT16
    // Overlapping static entry reached from 0xC0F664.
    case 0xC0F666: cpu.execute_instruction<0x14>(0x000090, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:10 JSL MULT16
    // Overlapping static entry reached from 0xC0F666.
    case 0xC0F668: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000685, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC0F669: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:11 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC0F668.
    case 0xC0F66A: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC0F66B: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:11 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC0F66A.
    case 0xC0F66C: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum.asm:12 CLC
    case 0xC0F66D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xC0F66E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xC0F670: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x006020, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F670.
    case 0xC0F672: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xC0F673: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xC0F675: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xC0F677: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F677.
    case 0xC0F679: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xC0F67A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:14 LDX #0
    case 0xC0F67C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/saves/calc_save_block_checksum.asm:14 LDX #0
    // Overlapping static entry reached from 0xC0F67C.
    case 0xC0F67E: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:15 TXA
    case 0xC0F67F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum.asm:16 STA @LOCAL00
    case 0xC0F680: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:17 BRA @UNKNOWN1
    case 0xC0F682: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:19 LDA [@VIRTUAL06]
    case 0xC0F684: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:20 AND #$00FF
    case 0xC0F686: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/system/saves/calc_save_block_checksum.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC0F686.
    case 0xC0F688: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:21 STA @VIRTUAL02
    case 0xC0F689: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:22 TXA
    case 0xC0F68B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum.asm:23 CLC
    case 0xC0F68C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum.asm:24 ADC @VIRTUAL02
    case 0xC0F68D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:25 TAX
    case 0xC0F68F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum.asm:26 INC @VIRTUAL06
    case 0xC0F690: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:27 LDA @LOCAL00
    case 0xC0F692: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:28 INC
    case 0xC0F694: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum.asm:29 STA @LOCAL00
    case 0xC0F695: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:31 CMP #.SIZEOF(save_block) - .SIZEOF(save_header)
    case 0xC0F697: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E0, 2); else cpu.execute_instruction<0xC9>(0x0004E0, 3); return true;
    // src/system/saves/calc_save_block_checksum.asm:31 CMP #.SIZEOF(save_block) - .SIZEOF(save_header)
    // Overlapping static entry reached from 0xC0F697.
    case 0xC0F699: cpu.execute_instruction<0x04>(0x000090, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:32 BCC @UNKNOWN0
    case 0xC0F69A: cpu.execute_instruction<0x90>(0x0000E8, 2); return true;
    // src/system/saves/calc_save_block_checksum.asm:32 BCC @UNKNOWN0
    // Overlapping static entry reached from 0xC0F699.
    case 0xC0F69B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum.asm:33 TXA
    case 0xC0F69C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:34 END_C_FUNCTION
    case 0xC0F69D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/saves/calc_save_block_checksum.asm:34 END_C_FUNCTION
    case 0xC0F69E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/calc_save_block_checksum_complement.asm (source_named).
bool execute_system_saves_calc_save_block_checksum_complement_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:3 BEGIN_C_FUNCTION
    case 0xC0F69F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:8 END_STACK_VARS
    case 0xC0F6A1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:8 END_STACK_VARS
    case 0xC0F6A2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:8 END_STACK_VARS
    case 0xC0F6A3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:8 END_STACK_VARS
    case 0xC0F6A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F6A4.
    case 0xC0F6A6: cpu.execute_instruction<0xFF>(0xA0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:8 END_STACK_VARS
    case 0xC0F6A7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:8 END_STACK_VARS
    case 0xC0F6A8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:9 LDY #.SIZEOF(save_block)
    case 0xC0F6A9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000500, 3); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:9 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xC0F6A6.
    case 0xC0F6AA: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:9 LDY #.SIZEOF(save_block)
    // Overlapping static entry reached from 0xC0F6A9.
    case 0xC0F6AB: cpu.execute_instruction<0x05>(0x000022, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:10 JSL MULT16
    case 0xC0F6AC: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:10 JSL MULT16
    // Overlapping static entry reached from 0xC0F6AB.
    case 0xC0F6AD: cpu.execute_instruction<0x14>(0x000090, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:10 JSL MULT16
    // Overlapping static entry reached from 0xC0F6AD.
    case 0xC0F6AF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000685, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC0F6B0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:11 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC0F6AF.
    case 0xC0F6B1: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC0F6B2: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:11 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC0F6B1.
    case 0xC0F6B3: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:12 CLC
    case 0xC0F6B4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xC0F6B5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xC0F6B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x006020, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F6B7.
    case 0xC0F6B9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xC0F6BA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xC0F6BC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xC0F6BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F6BE.
    case 0xC0F6C0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:13 VAR_ADD_CONST_INT_ASSIGN SAVE_BASE + save_block::game_state, @VIRTUAL06
    case 0xC0F6C1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:14 LDX #0
    case 0xC0F6C3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:14 LDX #0
    // Overlapping static entry reached from 0xC0F6C3.
    case 0xC0F6C5: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:15 TXA
    case 0xC0F6C6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:16 STA @LOCAL00
    case 0xC0F6C7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:17 BRA @UNKNOWN1
    case 0xC0F6C9: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:19 LDA [@VIRTUAL06]
    case 0xC0F6CB: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:20 STA @VIRTUAL02
    case 0xC0F6CD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:21 TXA
    case 0xC0F6CF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:22 EOR @VIRTUAL02
    case 0xC0F6D0: cpu.execute_instruction<0x45>(0x000002, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:23 TAX
    case 0xC0F6D2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:24 INC @VIRTUAL06
    case 0xC0F6D3: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:25 INC @VIRTUAL06
    case 0xC0F6D5: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:26 LDA @LOCAL00
    case 0xC0F6D7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:27 INC
    case 0xC0F6D9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:28 STA @LOCAL00
    case 0xC0F6DA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:30 CMP #(.SIZEOF(save_block) - .SIZEOF(save_header)) / 2
    case 0xC0F6DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000070, 2); else cpu.execute_instruction<0xC9>(0x000270, 3); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:30 CMP #(.SIZEOF(save_block) - .SIZEOF(save_header)) / 2
    // Overlapping static entry reached from 0xC0F6DC.
    case 0xC0F6DE: cpu.execute_instruction<0x02>(0x000090, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:31 BCC @UNKNOWN0
    case 0xC0F6DF: cpu.execute_instruction<0x90>(0x0000EA, 2); return true;
    // src/system/saves/calc_save_block_checksum_complement.asm:32 TXA
    case 0xC0F6E1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:33 END_C_FUNCTION
    case 0xC0F6E2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/saves/calc_save_block_checksum_complement.asm:33 END_C_FUNCTION
    case 0xC0F6E3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/system/saves/check_all_blocks_signature.asm (source_named).
bool execute_system_saves_check_all_blocks_signature_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/system/saves/check_all_blocks_signature.asm:3 BEGIN_C_FUNCTION
    case 0xC0F5BF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/system/saves/check_all_blocks_signature.asm:6 END_STACK_VARS
    case 0xC0F5C1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/system/saves/check_all_blocks_signature.asm:6 END_STACK_VARS
    case 0xC0F5C2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/check_all_blocks_signature.asm:6 END_STACK_VARS
    case 0xC0F5C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/system/saves/check_all_blocks_signature.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F5C3.
    case 0xC0F5C5: cpu.execute_instruction<0xFF>(0x00A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/system/saves/check_all_blocks_signature.asm:6 END_STACK_VARS
    case 0xC0F5C6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/system/saves/check_all_blocks_signature.asm:7 LDX #0
    case 0xC0F5C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/system/saves/check_all_blocks_signature.asm:7 LDX #0
    // Overlapping static entry reached from 0xC0F5C7.
    case 0xC0F5C9: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/system/saves/check_all_blocks_signature.asm:8 STX @LOCAL00
    case 0xC0F5CA: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/saves/check_all_blocks_signature.asm:9 BRA @UNKNOWN1
    case 0xC0F5CC: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/system/saves/check_all_blocks_signature.asm:11 TXA
    case 0xC0F5CE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/system/saves/check_all_blocks_signature.asm:12 JSR CHECK_BLOCK_SIGNATURE
    case 0xC0F5CF: cpu.execute_instruction<0x20>(0x00F56C, 3); return true;
    // src/system/saves/check_all_blocks_signature.asm:13 LDX @LOCAL00
    case 0xC0F5D2: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/system/saves/check_all_blocks_signature.asm:14 INX
    case 0xC0F5D4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/system/saves/check_all_blocks_signature.asm:15 STX @LOCAL00
    case 0xC0F5D5: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/system/saves/check_all_blocks_signature.asm:17 CPX #SAVE_COUNT*SAVE_COPY_COUNT
    case 0xC0F5D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000006, 2); else cpu.execute_instruction<0xE0>(0x000006, 3); return true;
    // src/system/saves/check_all_blocks_signature.asm:17 CPX #SAVE_COUNT*SAVE_COPY_COUNT
    // Overlapping static entry reached from 0xC0F5D7.
    case 0xC0F5D9: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/system/saves/check_all_blocks_signature.asm:18 BCC @UNKNOWN0
    case 0xC0F5DA: cpu.execute_instruction<0x90>(0x0000F2, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/system/saves/check_all_blocks_signature.asm:19 END_C_FUNCTION
    case 0xC0F5DC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/system/saves/check_all_blocks_signature.asm:19 END_C_FUNCTION
    case 0xC0F5DD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
