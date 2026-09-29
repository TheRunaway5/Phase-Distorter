// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/unknown/C4/C40000.asm (unresolved).
bool execute_unresolved_c4_c40000_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C40000.asm:3 PHP
    case 0xC40000: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C40000.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC40001: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C40000.asm:5 STA f:INIDISP
    case 0xC40003: cpu.execute_instruction<0x8F>(0x002100, 4); return true;
    // src/unknown/C4/C40000.asm:6 PLP
    case 0xC40007: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C4/C40000.asm:7 RTL
    case 0xC40008: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C40009.asm (unresolved).
bool execute_unresolved_c4_c40009_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C40009.asm:3 PHP
    case 0xC40009: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C40009.asm:4 SEP #PROC_FLAGS::ACCUM8
    case 0xC4000A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C40009.asm:5 LDA INIDISP_MIRROR
    case 0xC4000C: cpu.execute_instruction<0xAD>(0x00000D, 3); return true;
    // src/unknown/C4/C40009.asm:6 STA f:INIDISP
    case 0xC4000F: cpu.execute_instruction<0x8F>(0x002100, 4); return true;
    // src/unknown/C4/C40009.asm:7 PLP
    case 0xC40013: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/unknown/C4/C40009.asm:8 RTL
    case 0xC40014: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C40015.asm (unresolved).
bool execute_unresolved_c4_c40015_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C40015.asm:3 LDX $88
    case 0xC40015: cpu.execute_instruction<0xA6>(0x000088, 2); return true;
    // src/unknown/C4/C40015.asm:4 STZ ENTITY_ANIMATION_FRAME,X
    case 0xC40017: cpu.execute_instruction<0x9E>(0x0010E8, 3); return true;
    // src/unknown/C4/C40015.asm:5 JSL UNKNOWN_C0A443_ENTRY3
    case 0xC4001A: cpu.execute_instruction<0x22>(0xC0A487, 4); return true;
    // src/unknown/C4/C40015.asm:6 JSL UNKNOWN_C0C6B6
    case 0xC4001E: cpu.execute_instruction<0x22>(0xC0C698, 4); return true;
    // src/unknown/C4/C40015.asm:7 RTL
    case 0xC40022: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C40023.asm (unresolved).
bool execute_unresolved_c4_c40023_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C40023.asm:4 LDX $8A
    case 0xC40023: cpu.execute_instruction<0xA6>(0x00008A, 2); return true;
    // src/unknown/C4/C40023.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC40025: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C40023.asm:6 AND #$000F
    case 0xC40028: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C4/C40023.asm:6 AND #$000F
    // Overlapping static entry reached from 0xC40028.
    case 0xC4002A: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C4/C40023.asm:7 STA ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC4002B: cpu.execute_instruction<0x9D>(0x001368, 3); return true;
    // src/unknown/C4/C40023.asm:8 RTL
    case 0xC4002E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C40B51.asm (unresolved).
bool execute_unresolved_c4_c40b51_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C40B51.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC40A9D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C40B51.asm:4 JSL STOP_MUSIC
    case 0xC40A9F: cpu.execute_instruction<0x22>(0xC0ABA5, 4); return true;
    // src/unknown/C4/C40B51.asm:5 LDA #$0001
    case 0xC40AA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C40B51.asm:5 LDA #$0001
    // Overlapping static entry reached from 0xC40AA3.
    case 0xC40AA5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C40B51.asm:6 JSL UNKNOWN_C08D79
    case 0xC40AA6: cpu.execute_instruction<0x22>(0xC08D6A, 4); return true;
    // src/unknown/C4/C40B51.asm:7 LDY #VRAM::ERROR_SCREEN_TILES
    case 0xC40AAA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C40B51.asm:7 LDY #VRAM::ERROR_SCREEN_TILES
    // Overlapping static entry reached from 0xC40AAA.
    case 0xC40AAC: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C4/C40B51.asm:8 LDX #VRAM::ERROR_SCREEN_TILEMAP
    case 0xC40AAD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x004000, 3); return true;
    // src/unknown/C4/C40B51.asm:8 LDX #VRAM::ERROR_SCREEN_TILEMAP
    // Overlapping static entry reached from 0xC40AAD.
    case 0xC40AAF: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C4/C40B51.asm:9 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC40AB0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C40B51.asm:10 JSL SET_BG3_VRAM_LOCATION
    case 0xC40AB1: cpu.execute_instruction<0x22>(0xC08E0D, 4); return true;
    // src/unknown/C4/C40B51.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC40AB5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C40B51.asm:12 LDA #$0004
    case 0xC40AB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x008D04, 3); return true;
    // src/unknown/C4/C40B51.asm:13 STA TM_MIRROR
    case 0xC40AB9: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/C4/C40B51.asm:13 STA TM_MIRROR
    // Overlapping static entry reached from 0xC40AB7.
    case 0xC40ABA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C40B51.asm:13 STA TM_MIRROR
    // Overlapping static entry reached from 0xC40ABA.
    case 0xC40ABB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C40B51.asm:14 JSL UNKNOWN_C08726
    case 0xC40ABC: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/unknown/C4/C40B51.asm:15 RTL
    case 0xC40AC0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C40B75.asm (unresolved).
bool execute_unresolved_c4_c40b75_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C40B75.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC40AC1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C40B75.asm:6 END_STACK_VARS
    case 0xC40AC3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C40B75.asm:6 END_STACK_VARS
    case 0xC40AC4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C40B75.asm:6 END_STACK_VARS
    case 0xC40AC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C40B75.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC40AC5.
    case 0xC40AC7: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C40B75.asm:6 END_STACK_VARS
    case 0xC40AC8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    case 0xC40AC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    // Overlapping static entry reached from 0xC40AC9.
    case 0xC40ACB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    case 0xC40ACC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    case 0xC40ACE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    // Overlapping static entry reached from 0xC40ACE.
    case 0xC40AD0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    case 0xC40AD1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    case 0xC40AD3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    // Overlapping static entry reached from 0xC40AD3.
    case 0xC40AD5: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    case 0xC40AD6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000A00, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    // Overlapping static entry reached from 0xC40AD6.
    case 0xC40AD8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    case 0xC40AD9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1161 TYA
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    case 0xC40ADB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C40B75.asm:7 COPY_TO_VRAM1 BUFFER, VRAM::ERROR_SCREEN_TILES, $A00, $00
    case 0xC40ADC: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    case 0xC40AE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    // Overlapping static entry reached from 0xC40AE0.
    case 0xC40AE2: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    case 0xC40AE3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    case 0xC40AE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    // Overlapping static entry reached from 0xC40AE5.
    case 0xC40AE7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    case 0xC40AE8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    case 0xC40AEA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x004000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    // Overlapping static entry reached from 0xC40AEA.
    case 0xC40AEC: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    case 0xC40AED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    // Overlapping static entry reached from 0xC40AED.
    case 0xC40AEF: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    case 0xC40AF0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    case 0xC40AF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    case 0xC40AF4: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    // Overlapping static entry reached from 0xC40AF2.
    case 0xC40AF5: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C40B75.asm:9 COPY_TO_VRAM1 BUFFER + $4000, VRAM::ERROR_SCREEN_TILEMAP, $800, $00
    // Overlapping static entry reached from 0xC40AF5.
    case 0xC40AF7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00CEA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:11 LOADPTR WARNING_PALETTE, @LOCAL00
    case 0xC40AF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x00F8CE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:11 LOADPTR WARNING_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC40AF7.
    case 0xC40AF9: cpu.execute_instruction<0xCE>(0x0085F8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:11 LOADPTR WARNING_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC40AF8.
    case 0xC40AFA: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C40B75.asm:11 LOADPTR WARNING_PALETTE, @LOCAL00
    case 0xC40AFB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C40B75.asm:11 LOADPTR WARNING_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC40AF9.
    case 0xC40AFC: cpu.execute_instruction<0x0E>(0x00D8A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:11 LOADPTR WARNING_PALETTE, @LOCAL00
    case 0xC40AFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D8, 2); else cpu.execute_instruction<0xA9>(0x0000D8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C40B75.asm:11 LOADPTR WARNING_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC40AFD.
    case 0xC40AFF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C40B75.asm:11 LOADPTR WARNING_PALETTE, @LOCAL00
    case 0xC40B00: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C40B75.asm:12 LDX #BPP2PALETTE_SIZE * 2
    case 0xC40B02: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/unknown/C4/C40B75.asm:12 LDX #BPP2PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC40B02.
    case 0xC40B04: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C40B75.asm:13 LDA #.LOWORD(PALETTES)
    case 0xC40B05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C4/C40B75.asm:13 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC40B05.
    case 0xC40B07: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C40B75.asm:14 JSL MEMCPY16
    case 0xC40B08: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/unknown/C4/C40B75.asm:15 LDA #24
    case 0xC40B0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C4/C40B75.asm:15 LDA #24
    // Overlapping static entry reached from 0xC40B0C.
    case 0xC40B0E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C40B75.asm:16 JSL UNKNOWN_C0856B
    case 0xC40B0F: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/unknown/C4/C40B75.asm:17 LDY #0
    case 0xC40B13: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C40B75.asm:17 LDY #0
    // Overlapping static entry reached from 0xC40B13.
    case 0xC40B15: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C4/C40B75.asm:18 LDX #1
    case 0xC40B16: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C40B75.asm:18 LDX #1
    // Overlapping static entry reached from 0xC40B16.
    case 0xC40B18: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C4/C40B75.asm:19 TXA
    case 0xC40B19: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C40B75.asm:20 JSL FADE_IN_WITH_MOSAIC
    case 0xC40B1A: cpu.execute_instruction<0x22>(0xC087C4, 4); return true;
    // src/unknown/C4/C40B75.asm:22 BRA @UNKNOWN0
    case 0xC40B1E: cpu.execute_instruction<0x80>(0x0000FE, 2); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C41DB6.asm (unresolved).
bool execute_unresolved_c4_c41db6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C41DB6.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC41D02: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C41DB6.asm:4 PHD
    case 0xC41D04: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:5 PHA
    case 0xC41D05: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:6 TDC
    case 0xC41D06: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:7 SEC
    case 0xC41D07: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:8 SBC #$0014
    case 0xC41D08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000014, 2); else cpu.execute_instruction<0xE9>(0x000014, 3); return true;
    // src/unknown/C4/C41DB6.asm:8 SBC #$0014
    // Overlapping static entry reached from 0xC41D08.
    case 0xC41D0A: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C4/C41DB6.asm:9 TCD
    case 0xC41D0B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:10 PLA
    case 0xC41D0C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:11 STA $00
    case 0xC41D0D: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C41DB6.asm:12 LDA UNKNOWN_7E3C14
    case 0xC41D0F: cpu.execute_instruction<0xAD>(0x003F9A, 3); return true;
    // src/unknown/C4/C41DB6.asm:13 AND #$0007
    case 0xC41D12: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C4/C41DB6.asm:13 AND #$0007
    // Overlapping static entry reached from 0xC41D12.
    case 0xC41D14: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C41DB6.asm:14 STA $06
    case 0xC41D15: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C41DB6.asm:15 LDA UNKNOWN_7E3C16
    case 0xC41D17: cpu.execute_instruction<0xAD>(0x003F9C, 3); return true;
    // src/unknown/C4/C41DB6.asm:16 AND #$0007
    case 0xC41D1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C4/C41DB6.asm:16 AND #$0007
    // Overlapping static entry reached from 0xC41D1A.
    case 0xC41D1C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C41DB6.asm:17 STA $08
    case 0xC41D1D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C41DB6.asm:18 LDA UNKNOWN_7E3C14
    case 0xC41D1F: cpu.execute_instruction<0xAD>(0x003F9A, 3); return true;
    // src/unknown/C4/C41DB6.asm:19 LSR
    case 0xC41D22: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:20 LSR
    case 0xC41D23: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:21 LSR
    case 0xC41D24: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:22 STA $02
    case 0xC41D25: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C41DB6.asm:23 LDA UNKNOWN_7E3C16
    case 0xC41D27: cpu.execute_instruction<0xAD>(0x003F9C, 3); return true;
    // src/unknown/C4/C41DB6.asm:24 LSR
    case 0xC41D2A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:25 LSR
    case 0xC41D2B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:26 LSR
    case 0xC41D2C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:27 STA $04
    case 0xC41D2D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C41DB6.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC41D2F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C41DB6.asm:29 XBA
    case 0xC41D31: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:30 LDA UNKNOWN_7E3C18
    case 0xC41D32: cpu.execute_instruction<0xAD>(0x003F9E, 3); return true;
    // src/unknown/C4/C41DB6.asm:30 LDA UNKNOWN_7E3C18
    // Overlapping static entry reached from 0xC41D6F.
    case 0xC41D33: cpu.execute_instruction<0x9E>(0x00C23F, 3); return true;
    // src/unknown/C4/C41DB6.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC41D35: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C41DB6.asm:31 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC41D33.
    case 0xC41D36: cpu.execute_instruction<0x20>(0x00028F, 3); return true;
    // src/unknown/C4/C41DB6.asm:32 STA f:WRMPYA
    case 0xC41D37: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/unknown/C4/C41DB6.asm:32 STA f:WRMPYA
    // Overlapping static entry reached from 0xC41D36.
    case 0xC41D39: cpu.execute_instruction<0x42>(0x000000, 2); return true;
    // src/unknown/C4/C41DB6.asm:33 NOP
    case 0xC41D3B: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:34 NOP
    case 0xC41D3C: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:35 LDA f:RDMPYL
    case 0xC41D3D: cpu.execute_instruction<0xAF>(0x004216, 4); return true;
    // src/unknown/C4/C41DB6.asm:36 CLC
    case 0xC41D41: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:37 ADC $02
    case 0xC41D42: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C41DB6.asm:38 CLC
    case 0xC41D44: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:39 ADC UNKNOWN_7E3C1C
    case 0xC41D45: cpu.execute_instruction<0x6D>(0x003FA2, 3); return true;
    // src/unknown/C4/C41DB6.asm:40 ASL
    case 0xC41D48: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:41 ASL
    case 0xC41D49: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:42 ASL
    case 0xC41D4A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:43 CLC
    case 0xC41D4B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:44 ADC $08
    case 0xC41D4C: cpu.execute_instruction<0x65>(0x000008, 2); return true;
    // src/unknown/C4/C41DB6.asm:45 ASL
    case 0xC41D4E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:46 STA $0A
    case 0xC41D4F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C41DB6.asm:47 JSR UNKNOWN_C41EE9
    case 0xC41D51: cpu.execute_instruction<0x20>(0x001E35, 3); return true;
    // src/unknown/C4/C41DB6.asm:48 LDA $06
    case 0xC41D54: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C4/C41DB6.asm:49 ASL
    case 0xC41D56: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:50 TAX
    case 0xC41D57: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:51 LDA f:UNKNOWN_C41EB9,X
    case 0xC41D58: cpu.execute_instruction<0xBF>(0xC41E05, 4); return true;
    // src/unknown/C4/C41DB6.asm:52 STA $0E
    case 0xC41D5C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C41DB6.asm:53 LDA f:UNKNOWN_C41EC9,X
    case 0xC41D5E: cpu.execute_instruction<0xBF>(0xC41E15, 4); return true;
    // src/unknown/C4/C41DB6.asm:54 STA $10
    case 0xC41D62: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C41DB6.asm:55 LDA f:UNKNOWN_C41ED9,X
    case 0xC41D64: cpu.execute_instruction<0xBF>(0xC41E25, 4); return true;
    // src/unknown/C4/C41DB6.asm:56 STA $12
    case 0xC41D68: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C41DB6.asm:57 LDA $00
    case 0xC41D6A: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C41DB6.asm:58 SEC
    case 0xC41D6C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:59 SBC #$8000
    case 0xC41D6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x008000, 3); return true;
    // src/unknown/C4/C41DB6.asm:59 SBC #$8000
    // Overlapping static entry reached from 0xC41D6D.
    case 0xC41D6F: cpu.execute_instruction<0x80>(0x0000C2, 2); return true;
    // src/unknown/C4/C41DB6.asm:60 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC41D70: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C4/C41DB6.asm:61 LDX #.LOWORD(UNKNOWN_7E3B12)
    case 0xC41D72: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000018, 2); else cpu.execute_instruction<0xA2>(0x003818, 3); return true;
    // src/unknown/C4/C41DB6.asm:61 LDX #.LOWORD(UNKNOWN_7E3B12)
    // Overlapping static entry reached from 0xC41D72.
    case 0xC41D74: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:62 LDY $06
    case 0xC41D75: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // src/unknown/C4/C41DB6.asm:63 JSR DECOMP_ENTRY2
    case 0xC41D77: cpu.execute_instruction<0x20>(0x001B16, 3); return true;
    // src/unknown/C4/C41DB6.asm:64 LDY #$0000
    case 0xC41D7A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C41DB6.asm:64 LDY #$0000
    // Overlapping static entry reached from 0xC41D7A.
    case 0xC41D7C: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C4/C41DB6.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC41D7D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C41DB6.asm:67 LDA UNKNOWN_7E3B12,Y
    case 0xC41D7F: cpu.execute_instruction<0xB9>(0x003818, 3); return true;
    // src/unknown/C4/C41DB6.asm:68 XBA
    case 0xC41D82: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:69 LDA UNKNOWN_7E3B12,Y
    case 0xC41D83: cpu.execute_instruction<0xB9>(0x003818, 3); return true;
    // src/unknown/C4/C41DB6.asm:70 REP #PROC_FLAGS::ACCUM8
    case 0xC41D86: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C41DB6.asm:71 LDX $0A
    case 0xC41D88: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // src/unknown/C4/C41DB6.asm:72 EOR VWF_BUFFER,X
    case 0xC41D8A: cpu.execute_instruction<0x5D>(0x003918, 3); return true;
    // src/unknown/C4/C41DB6.asm:73 AND $0E
    case 0xC41D8D: cpu.execute_instruction<0x25>(0x00000E, 2); return true;
    // src/unknown/C4/C41DB6.asm:74 EOR VWF_BUFFER,X
    case 0xC41D8F: cpu.execute_instruction<0x5D>(0x003918, 3); return true;
    // src/unknown/C4/C41DB6.asm:75 STA VWF_BUFFER,X
    case 0xC41D92: cpu.execute_instruction<0x9D>(0x003918, 3); return true;
    // src/unknown/C4/C41DB6.asm:76 INY
    case 0xC41D95: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:77 SEP #PROC_FLAGS::ACCUM8
    case 0xC41D96: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C41DB6.asm:78 LDA UNKNOWN_7E3B12,Y
    case 0xC41D98: cpu.execute_instruction<0xB9>(0x003818, 3); return true;
    // src/unknown/C4/C41DB6.asm:79 XBA
    case 0xC41D9B: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:80 LDA UNKNOWN_7E3B12,Y
    case 0xC41D9C: cpu.execute_instruction<0xB9>(0x003818, 3); return true;
    // src/unknown/C4/C41DB6.asm:81 REP #PROC_FLAGS::ACCUM8
    case 0xC41D9F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C41DB6.asm:82 LDX $0A
    case 0xC41DA1: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // src/unknown/C4/C41DB6.asm:83 EOR VWF_BUFFER + 16,X
    case 0xC41DA3: cpu.execute_instruction<0x5D>(0x003928, 3); return true;
    // src/unknown/C4/C41DB6.asm:84 AND $10
    case 0xC41DA6: cpu.execute_instruction<0x25>(0x000010, 2); return true;
    // src/unknown/C4/C41DB6.asm:85 EOR VWF_BUFFER + 16,X
    case 0xC41DA8: cpu.execute_instruction<0x5D>(0x003928, 3); return true;
    // src/unknown/C4/C41DB6.asm:86 STA VWF_BUFFER + 16,X
    case 0xC41DAB: cpu.execute_instruction<0x9D>(0x003928, 3); return true;
    // src/unknown/C4/C41DB6.asm:87 INY
    case 0xC41DAE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:88 LDA $12
    case 0xC41DAF: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C41DB6.asm:89 BEQ @UNKNOWN1
    case 0xC41DB1: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C4/C41DB6.asm:90 SEP #PROC_FLAGS::ACCUM8
    case 0xC41DB3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C41DB6.asm:91 LDA UNKNOWN_7E3B12,Y
    case 0xC41DB5: cpu.execute_instruction<0xB9>(0x003818, 3); return true;
    // src/unknown/C4/C41DB6.asm:92 XBA
    case 0xC41DB8: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:93 LDA UNKNOWN_7E3B12,Y
    case 0xC41DB9: cpu.execute_instruction<0xB9>(0x003818, 3); return true;
    // src/unknown/C4/C41DB6.asm:94 REP #PROC_FLAGS::ACCUM8
    case 0xC41DBC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C41DB6.asm:95 LDX $0A
    case 0xC41DBE: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // src/unknown/C4/C41DB6.asm:96 EOR VWF_BUFFER + 32,X
    case 0xC41DC0: cpu.execute_instruction<0x5D>(0x003938, 3); return true;
    // src/unknown/C4/C41DB6.asm:97 AND $12
    case 0xC41DC3: cpu.execute_instruction<0x25>(0x000012, 2); return true;
    // src/unknown/C4/C41DB6.asm:98 EOR VWF_BUFFER + 32,X
    case 0xC41DC5: cpu.execute_instruction<0x5D>(0x003938, 3); return true;
    // src/unknown/C4/C41DB6.asm:99 STA VWF_BUFFER + 32,X
    case 0xC41DC8: cpu.execute_instruction<0x9D>(0x003938, 3); return true;
    // src/unknown/C4/C41DB6.asm:101 INY
    case 0xC41DCB: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:102 INC $0A
    case 0xC41DCC: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C41DB6.asm:103 INC $0A
    case 0xC41DCE: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/unknown/C4/C41DB6.asm:104 CPY #$0024
    case 0xC41DD0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000024, 2); else cpu.execute_instruction<0xC0>(0x000024, 3); return true;
    // src/unknown/C4/C41DB6.asm:104 CPY #$0024
    // Overlapping static entry reached from 0xC41DD0.
    case 0xC41DD2: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C4/C41DB6.asm:105 BCS @UNKNOWN3
    case 0xC41DD3: cpu.execute_instruction<0xB0>(0x00001A, 2); return true;
    // src/unknown/C4/C41DB6.asm:106 LDA $08
    case 0xC41DD5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C41DB6.asm:107 INC
    case 0xC41DD7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:108 AND #$0007
    case 0xC41DD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C4/C41DB6.asm:108 AND #$0007
    // Overlapping static entry reached from 0xC41DD8.
    case 0xC41DDA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C41DB6.asm:109 STA $08
    case 0xC41DDB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C41DB6.asm:110 BNE @UNKNOWN2
    case 0xC41DDD: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/unknown/C4/C41DB6.asm:111 LDA UNKNOWN_7E3C18
    case 0xC41DDF: cpu.execute_instruction<0xAD>(0x003F9E, 3); return true;
    // src/unknown/C4/C41DB6.asm:112 DEC
    case 0xC41DE2: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:113 ASL
    case 0xC41DE3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:114 ASL
    case 0xC41DE4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:115 ASL
    case 0xC41DE5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:116 ASL
    case 0xC41DE6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:117 CLC
    case 0xC41DE7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:118 ADC $0A
    case 0xC41DE8: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C41DB6.asm:119 STA $0A
    case 0xC41DEA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C41DB6.asm:121 JMP @UNKNOWN0
    case 0xC41DEC: cpu.execute_instruction<0x4C>(0x001D7D, 3); return true;
    // src/unknown/C4/C41DB6.asm:123 LDA $0A
    case 0xC41DEF: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C4/C41DB6.asm:124 CLC
    case 0xC41DF1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:125 ADC #$0010
    case 0xC41DF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C41DB6.asm:125 ADC #$0010
    // Overlapping static entry reached from 0xC41DF2.
    case 0xC41DF4: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C4/C41DB6.asm:126 LDX $12
    case 0xC41DF5: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C41DB6.asm:127 BEQ @UNKNOWN4
    case 0xC41DF7: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C4/C41DB6.asm:128 ADC #$0010
    case 0xC41DF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C41DB6.asm:128 ADC #$0010
    // Overlapping static entry reached from 0xC41DF9.
    case 0xC41DFB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C41DB6.asm:130 STA $0A
    case 0xC41DFC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C41DB6.asm:131 JSR UNKNOWN_C41EF4
    case 0xC41DFE: cpu.execute_instruction<0x20>(0x001E40, 3); return true;
    // src/unknown/C4/C41DB6.asm:132 PLD
    case 0xC41E01: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C41DB6.asm:133 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC41E02: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C4/C41DB6.asm:134 RTL
    case 0xC41E04: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C41EE9.asm (unresolved).
bool execute_unresolved_c4_c41ee9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C41EE9.asm:3 LDA $0A
    case 0xC41E35: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C4/C41EE9.asm:4 CMP UNKNOWN_7E3C1E
    case 0xC41E37: cpu.execute_instruction<0xCD>(0x003FA4, 3); return true;
    // src/unknown/C4/C41EE9.asm:5 BCS @UNKNOWN0
    case 0xC41E3A: cpu.execute_instruction<0xB0>(0x000003, 2); return true;
    // src/unknown/C4/C41EE9.asm:6 STA UNKNOWN_7E3C1E
    case 0xC41E3C: cpu.execute_instruction<0x8D>(0x003FA4, 3); return true;
    // src/unknown/C4/C41EE9.asm:8 RTS
    case 0xC41E3F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C41EF4.asm (unresolved).
bool execute_unresolved_c4_c41ef4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C41EF4.asm:3 LDA $0A
    case 0xC41E40: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C4/C41EF4.asm:4 CMP UNKNOWN_7E3C20
    case 0xC41E42: cpu.execute_instruction<0xCD>(0x003FA6, 3); return true;
    // src/unknown/C4/C41EF4.asm:5 BCC @UNKNOWN0
    case 0xC41E45: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C4/C41EF4.asm:6 STA UNKNOWN_7E3C20
    case 0xC41E47: cpu.execute_instruction<0x8D>(0x003FA6, 3); return true;
    // src/unknown/C4/C41EF4.asm:8 RTS
    case 0xC41E4A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C41EFF.asm (unresolved).
bool execute_unresolved_c4_c41eff_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C41EFF.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC41E4B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C41EFF.asm:4 PHD
    case 0xC41E4D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:5 PHA
    case 0xC41E4E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:6 TDC
    case 0xC41E4F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:7 SEC
    case 0xC41E50: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:8 SBC #$0010
    case 0xC41E51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/unknown/C4/C41EFF.asm:8 SBC #$0010
    // Overlapping static entry reached from 0xC41E51.
    case 0xC41E53: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C4/C41EFF.asm:9 TCD
    case 0xC41E54: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:10 PLA
    case 0xC41E55: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:11 STA $00
    case 0xC41E56: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C41EFF.asm:12 STX $02
    case 0xC41E58: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C41EFF.asm:13 STY $04
    case 0xC41E5A: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C4/C41EFF.asm:14 LDA $1E
    case 0xC41E5C: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C41EFF.asm:15 STA $06
    case 0xC41E5E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C41EFF.asm:16 LDA $00
    case 0xC41E60: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C41EFF.asm:17 SEC
    case 0xC41E62: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:18 SBC $04
    case 0xC41E63: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C4/C41EFF.asm:19 PHA
    case 0xC41E65: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:20 BPL @UNKNOWN0
    case 0xC41E66: cpu.execute_instruction<0x10>(0x000004, 2); return true;
    // src/unknown/C4/C41EFF.asm:21 EOR #$FFFF
    case 0xC41E68: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C41EFF.asm:21 EOR #$FFFF
    // Overlapping static entry reached from 0xC41E68.
    case 0xC41E6A: cpu.execute_instruction<0xFF>(0xA5A81A, 4); return true;
    // src/unknown/C4/C41EFF.asm:22 INC
    case 0xC41E6B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:24 TAY
    case 0xC41E6C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:25 LDA $02
    case 0xC41E6D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C41EFF.asm:25 LDA $02
    // Overlapping static entry reached from 0xC41E6A.
    case 0xC41E6E: cpu.execute_instruction<0x02>(0x000038, 2); return true;
    // src/unknown/C4/C41EFF.asm:26 SEC
    case 0xC41E6F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:27 SBC $06
    case 0xC41E70: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // src/unknown/C4/C41EFF.asm:28 PHA
    case 0xC41E72: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:29 BPL @UNKNOWN1
    case 0xC41E73: cpu.execute_instruction<0x10>(0x000004, 2); return true;
    // src/unknown/C4/C41EFF.asm:30 EOR #$FFFF
    case 0xC41E75: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C41EFF.asm:30 EOR #$FFFF
    // Overlapping static entry reached from 0xC41E75.
    case 0xC41E77: cpu.execute_instruction<0xFF>(0x0C851A, 4); return true;
    // src/unknown/C4/C41EFF.asm:31 INC
    case 0xC41E78: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:33 STA $0C
    case 0xC41E79: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C41EFF.asm:34 TYA
    case 0xC41E7B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:36 CMP #$0100
    case 0xC41E7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C4/C41EFF.asm:36 CMP #$0100
    // Overlapping static entry reached from 0xC41E7C.
    case 0xC41E7E: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/unknown/C4/C41EFF.asm:37 BCC @UNKNOWN3
    case 0xC41E7F: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/unknown/C4/C41EFF.asm:37 BCC @UNKNOWN3
    // Overlapping static entry reached from 0xC41E7E.
    case 0xC41E80: cpu.execute_instruction<0x05>(0x00004A, 2); return true;
    // src/unknown/C4/C41EFF.asm:38 LSR
    case 0xC41E81: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:39 LSR $0C
    case 0xC41E82: cpu.execute_instruction<0x46>(0x00000C, 2); return true;
    // src/unknown/C4/C41EFF.asm:40 BRA @UNKNOWN2
    case 0xC41E84: cpu.execute_instruction<0x80>(0x0000F6, 2); return true;
    // src/unknown/C4/C41EFF.asm:42 STA $0A
    case 0xC41E86: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C41EFF.asm:43 PLA
    case 0xC41E88: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:44 BEQ @UNKNOWN4
    case 0xC41E89: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C4/C41EFF.asm:45 BPL @UNKNOWN5
    case 0xC41E8B: cpu.execute_instruction<0x10>(0x00000A, 2); return true;
    // src/unknown/C4/C41EFF.asm:46 LDA #$0000
    case 0xC41E8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C41EFF.asm:46 LDA #$0000
    // Overlapping static entry reached from 0xC41E8D.
    case 0xC41E8F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C41EFF.asm:47 BRA @UNKNOWN6
    case 0xC41E90: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C4/C41EFF.asm:49 LDA #$0008
    case 0xC41E92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C4/C41EFF.asm:49 LDA #$0008
    // Overlapping static entry reached from 0xC41E92.
    case 0xC41E94: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C41EFF.asm:50 BRA @UNKNOWN6
    case 0xC41E95: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C41EFF.asm:52 LDA #$0002
    case 0xC41E97: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C4/C41EFF.asm:52 LDA #$0002
    // Overlapping static entry reached from 0xC41E97.
    case 0xC41E99: cpu.execute_instruction<0x00>(0x0000FA, 2); return true;
    // src/unknown/C4/C41EFF.asm:54 PLX
    case 0xC41E9A: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:55 BEQ @UNKNOWN7
    case 0xC41E9B: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C4/C41EFF.asm:56 BPL @UNKNOWN8
    case 0xC41E9D: cpu.execute_instruction<0x10>(0x000007, 2); return true;
    // src/unknown/C4/C41EFF.asm:57 BRA @UNKNOWN9
    case 0xC41E9F: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C4/C41EFF.asm:59 ORA #$0004
    case 0xC41EA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000004, 2); else cpu.execute_instruction<0x09>(0x000004, 3); return true;
    // src/unknown/C4/C41EFF.asm:59 ORA #$0004
    // Overlapping static entry reached from 0xC41EA1.
    case 0xC41EA3: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C41EFF.asm:60 BRA @UNKNOWN10
    case 0xC41EA4: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C4/C41EFF.asm:60 BRA @UNKNOWN10
    // Overlapping static entry reached from 0xC478DE.
    case 0xC41EA5: cpu.execute_instruction<0x13>(0x000009, 2); return true;
    // src/unknown/C4/C41EFF.asm:62 ORA #$0001
    case 0xC41EA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000001, 2); else cpu.execute_instruction<0x09>(0x000001, 3); return true;
    // src/unknown/C4/C41EFF.asm:62 ORA #$0001
    // Overlapping static entry reached from 0xC41EA5.
    case 0xC41EA7: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C4/C41EFF.asm:62 ORA #$0001
    // Overlapping static entry reached from 0xC41EA6.
    case 0xC41EA8: cpu.execute_instruction<0x00>(0x000089, 2); return true;
    // src/unknown/C4/C41EFF.asm:64 BIT #$000C
    case 0xC41EA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x00000C, 2); else cpu.execute_instruction<0x89>(0x00000C, 3); return true;
    // src/unknown/C4/C41EFF.asm:64 BIT #$000C
    // Overlapping static entry reached from 0xC41EA9.
    case 0xC41EAB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C41EFF.asm:65 BEQ @UNKNOWN10
    case 0xC41EAC: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/unknown/C4/C41EFF.asm:66 ASL
    case 0xC41EAE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:67 TAX
    case 0xC41EAF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:68 LDA f:UNKNOWN_C41FC5,X
    case 0xC41EB0: cpu.execute_instruction<0xBF>(0xC41F11, 4); return true;
    // src/unknown/C4/C41EFF.asm:69 STA $0E
    case 0xC41EB4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C41EFF.asm:70 JMP @UNKNOWN16
    case 0xC41EB6: cpu.execute_instruction<0x4C>(0x001F0D, 3); return true;
    // src/unknown/C4/C41EFF.asm:72 STA $0E
    case 0xC41EB9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C41EFF.asm:73 ASL
    case 0xC41EBB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:74 STA $08
    case 0xC41EBC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C41EFF.asm:75 LDA $0C
    case 0xC41EBE: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/unknown/C4/C41EFF.asm:76 XBA
    case 0xC41EC0: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:77 BIT #$00FF
    case 0xC41EC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000FF, 2); else cpu.execute_instruction<0x89>(0x0000FF, 3); return true;
    // src/unknown/C4/C41EFF.asm:77 BIT #$00FF
    // Overlapping static entry reached from 0xC41EC1.
    case 0xC41EC3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C41EFF.asm:78 BEQ @UNKNOWN11
    case 0xC41EC4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C4/C41EFF.asm:79 LDA #$FFFF
    case 0xC41EC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C41EFF.asm:79 LDA #$FFFF
    // Overlapping static entry reached from 0xC41EC6.
    case 0xC41EC8: cpu.execute_instruction<0xFF>(0x42048F, 4); return true;
    // src/unknown/C4/C41EFF.asm:82 STA f:WRDIVL
    case 0xC41EC9: cpu.execute_instruction<0x8F>(0x004204, 4); return true;
    // src/unknown/C4/C41EFF.asm:82 STA f:WRDIVL
    // Overlapping static entry reached from 0xC41EC8.
    case 0xC41ECC: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C41EFF.asm:83 LDA $0A
    case 0xC41ECD: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C4/C41EFF.asm:84 SEP #PROC_FLAGS::ACCUM8
    case 0xC41ECF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C41EFF.asm:85 STA f:WRDIVB
    case 0xC41ED1: cpu.execute_instruction<0x8F>(0x004206, 4); return true;
    // src/unknown/C4/C41EFF.asm:86 REP #PROC_FLAGS::ACCUM8
    case 0xC41ED5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C41EFF.asm:87 NOP
    case 0xC41ED7: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:88 NOP
    case 0xC41ED8: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:89 NOP
    case 0xC41ED9: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:90 NOP
    case 0xC41EDA: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:91 NOP
    case 0xC41EDB: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:92 LDA f:RDDIVL
    case 0xC41EDC: cpu.execute_instruction<0xAF>(0x004214, 4); return true;
    // src/unknown/C4/C41EFF.asm:93 LDX #$0000
    case 0xC41EE0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C41EFF.asm:93 LDX #$0000
    // Overlapping static entry reached from 0xC41EE0.
    case 0xC41EE2: cpu.execute_instruction<0x00>(0x0000DF, 2); return true;
    // src/unknown/C4/C41EFF.asm:96 CMP f:UNKNOWN_C41FDF,X
    case 0xC41EE3: cpu.execute_instruction<0xDF>(0xC41F2B, 4); return true;
    // src/unknown/C4/C41EFF.asm:97 BCC @UNKNOWN13
    case 0xC41EE7: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // src/unknown/C4/C41EFF.asm:98 INX
    case 0xC41EE9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:99 INX
    case 0xC41EEA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:100 CPX #$0020
    case 0xC41EEB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/unknown/C4/C41EFF.asm:100 CPX #$0020
    // Overlapping static entry reached from 0xC41EEB.
    case 0xC41EED: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C41EFF.asm:101 BCC @UNKNOWN12
    case 0xC41EEE: cpu.execute_instruction<0x90>(0x0000F3, 2); return true;
    // src/unknown/C4/C41EFF.asm:103 LDA $0E
    case 0xC41EF0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C41EFF.asm:104 BEQ @UNKNOWN14
    case 0xC41EF2: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C4/C41EFF.asm:105 EOR #$0003
    case 0xC41EF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000003, 2); else cpu.execute_instruction<0x49>(0x000003, 3); return true;
    // src/unknown/C4/C41EFF.asm:105 EOR #$0003
    // Overlapping static entry reached from 0xC41EF4.
    case 0xC41EF6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C41EFF.asm:106 BEQ @UNKNOWN14
    case 0xC41EF7: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C4/C41EFF.asm:107 STX $0E
    case 0xC41EF9: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C41EFF.asm:108 LDA #$0020
    case 0xC41EFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C4/C41EFF.asm:108 LDA #$0020
    // Overlapping static entry reached from 0xC41EFB.
    case 0xC41EFD: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C41EFF.asm:109 SEC
    case 0xC41EFE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:110 SBC $0E
    case 0xC41EFF: cpu.execute_instruction<0xE5>(0x00000E, 2); return true;
    // src/unknown/C4/C41EFF.asm:111 BRA @UNKNOWN15
    case 0xC41F01: cpu.execute_instruction<0x80>(0x000001, 2); return true;
    // src/unknown/C4/C41EFF.asm:113 TXA
    case 0xC41F03: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:115 ASL
    case 0xC41F04: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:116 XBA
    case 0xC41F05: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:117 LDX $08
    case 0xC41F06: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // src/unknown/C4/C41EFF.asm:118 CLC
    case 0xC41F08: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:119 ADC f:UNKNOWN_C41FC5,X
    case 0xC41F09: cpu.execute_instruction<0x7F>(0xC41F11, 4); return true;
    // src/unknown/C4/C41EFF.asm:121 PLD
    case 0xC41F0D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C41EFF.asm:122 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC41F0E: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C4/C41EFF.asm:123 RTL
    case 0xC41F10: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C41FFF.asm (unresolved).
bool execute_unresolved_c4_c41fff_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C41FFF.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC41F4B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C41FFF.asm:4 PHD
    case 0xC41F4D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:5 PHA
    case 0xC41F4E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:6 TDC
    case 0xC41F4F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:7 SEC
    case 0xC41F50: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:8 SBC #$000E
    case 0xC41F51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000E, 2); else cpu.execute_instruction<0xE9>(0x00000E, 3); return true;
    // src/unknown/C4/C41FFF.asm:8 SBC #$000E
    // Overlapping static entry reached from 0xC41F51.
    case 0xC41F53: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C4/C41FFF.asm:9 TCD
    case 0xC41F54: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:10 PLA
    case 0xC41F55: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:11 TXY
    case 0xC41F56: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:12 PHY
    case 0xC41F57: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:13 XBA
    case 0xC41F58: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:14 AND #$00FC
    case 0xC41F59: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FC, 2); else cpu.execute_instruction<0x29>(0x0000FC, 3); return true;
    // src/unknown/C4/C41FFF.asm:14 AND #$00FC
    // Overlapping static entry reached from 0xC41F59.
    case 0xC41F5B: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/unknown/C4/C41FFF.asm:15 LSR
    case 0xC41F5C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:16 PHA
    case 0xC41F5D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:17 TAX
    case 0xC41F5E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:18 LDA f:UNKNOWN_C4205D,X
    case 0xC41F5F: cpu.execute_instruction<0xBF>(0xC41FA9, 4); return true;
    // src/unknown/C4/C41FFF.asm:19 CMP #$0100
    case 0xC41F63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C4/C41FFF.asm:19 CMP #$0100
    // Overlapping static entry reached from 0xC41F63.
    case 0xC41F65: cpu.execute_instruction<0x01>(0x0000D0, 2); return true;
    // src/unknown/C4/C41FFF.asm:20 BNE @FLAG_UNSET
    case 0xC41F66: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C4/C41FFF.asm:20 BNE @FLAG_UNSET
    // Overlapping static entry reached from 0xC41F65.
    case 0xC41F67: cpu.execute_instruction<0x03>(0x000098, 2); return true;
    // src/unknown/C4/C41FFF.asm:21 TYA
    case 0xC41F68: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:22 BRA @POST_FLAG
    case 0xC41F69: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C41FFF.asm:24 JSR UNKNOWN_C4213F
    case 0xC41F6B: cpu.execute_instruction<0x20>(0x00208B, 3); return true;
    // src/unknown/C4/C41FFF.asm:26 PLX
    case 0xC41F6E: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:27 PLY
    case 0xC41F6F: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:28 PHA
    case 0xC41F70: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:29 LDA f:UNKNOWN_C420BD,X
    case 0xC41F71: cpu.execute_instruction<0xBF>(0xC42009, 4); return true;
    // src/unknown/C4/C41FFF.asm:30 PHX
    case 0xC41F75: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:31 CMP #$0100
    case 0xC41F76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000100, 3); return true;
    // src/unknown/C4/C41FFF.asm:31 CMP #$0100
    // Overlapping static entry reached from 0xC41F76.
    case 0xC41F78: cpu.execute_instruction<0x01>(0x0000D0, 2); return true;
    // src/unknown/C4/C41FFF.asm:32 BNE @FLAG2_UNSET
    case 0xC41F79: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C4/C41FFF.asm:32 BNE @FLAG2_UNSET
    // Overlapping static entry reached from 0xC41F78.
    case 0xC41F7A: cpu.execute_instruction<0x03>(0x000098, 2); return true;
    // src/unknown/C4/C41FFF.asm:33 TYA
    case 0xC41F7B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:34 BRA @POST_FLAG2
    case 0xC41F7C: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C41FFF.asm:36 JSR UNKNOWN_C4213F
    case 0xC41F7E: cpu.execute_instruction<0x20>(0x00208B, 3); return true;
    // src/unknown/C4/C41FFF.asm:38 PLX
    case 0xC41F81: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:39 CPX #$0020
    case 0xC41F82: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/unknown/C4/C41FFF.asm:39 CPX #$0020
    // Overlapping static entry reached from 0xC41F82.
    case 0xC41F84: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C41FFF.asm:40 BCC @UNKNOWN4
    case 0xC41F85: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/unknown/C4/C41FFF.asm:41 CPX #$0062
    case 0xC41F87: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000062, 2); else cpu.execute_instruction<0xE0>(0x000062, 3); return true;
    // src/unknown/C4/C41FFF.asm:41 CPX #$0062
    // Overlapping static entry reached from 0xC41F87.
    case 0xC41F89: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C41FFF.asm:42 BCC @UNKNOWN5
    case 0xC41F8A: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // src/unknown/C4/C41FFF.asm:44 EOR #$FFFF
    case 0xC41F8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C41FFF.asm:44 EOR #$FFFF
    // Overlapping static entry reached from 0xC41F8C.
    case 0xC41F8E: cpu.execute_instruction<0xFF>(0x68A81A, 4); return true;
    // src/unknown/C4/C41FFF.asm:45 INC
    case 0xC41F8F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:47 TAY
    case 0xC41F90: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:48 PLA
    case 0xC41F91: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:49 CPX #$0042
    case 0xC41F92: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000042, 2); else cpu.execute_instruction<0xE0>(0x000042, 3); return true;
    // src/unknown/C4/C41FFF.asm:49 CPX #$0042
    // Overlapping static entry reached from 0xC41F92.
    case 0xC41F94: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C41FFF.asm:50 BCC @UNKNOWN6
    case 0xC41F95: cpu.execute_instruction<0x90>(0x000009, 2); return true;
    // src/unknown/C4/C41FFF.asm:51 CPX #$0080
    case 0xC41F97: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000080, 2); else cpu.execute_instruction<0xE0>(0x000080, 3); return true;
    // src/unknown/C4/C41FFF.asm:51 CPX #$0080
    // Overlapping static entry reached from 0xC41F97.
    case 0xC41F99: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C4/C41FFF.asm:52 BCS @UNKNOWN6
    case 0xC41F9A: cpu.execute_instruction<0xB0>(0x000004, 2); return true;
    // src/unknown/C4/C41FFF.asm:53 EOR #$FFFF
    case 0xC41F9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C41FFF.asm:53 EOR #$FFFF
    // Overlapping static entry reached from 0xC41F9C.
    case 0xC41F9E: cpu.execute_instruction<0xFF>(0x86AA1A, 4); return true;
    // src/unknown/C4/C41FFF.asm:54 INC
    case 0xC41F9F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:56 TAX
    case 0xC41FA0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:57 STX $16
    case 0xC41FA1: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C4/C41FFF.asm:57 STX $16
    // Overlapping static entry reached from 0xC41F9E.
    case 0xC41FA2: cpu.execute_instruction<0x16>(0x000084, 2); return true;
    // src/unknown/C4/C41FFF.asm:58 STY $14
    case 0xC41FA3: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C4/C41FFF.asm:58 STY $14
    // Overlapping static entry reached from 0xC41FA2.
    case 0xC41FA4: cpu.execute_instruction<0x14>(0x00002B, 2); return true;
    // src/unknown/C4/C41FFF.asm:59 PLD
    case 0xC41FA5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C41FFF.asm:60 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC41FA6: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C4/C41FFF.asm:61 RTL
    case 0xC41FA8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4213F.asm (unresolved).
bool execute_unresolved_c4_c4213f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C4213F.asm:3 STY $00
    case 0xC4208B: cpu.execute_instruction<0x84>(0x000000, 2); return true;
    // src/unknown/C4/C4213F.asm:4 STA $02
    case 0xC4208D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4213F.asm:5 TYA
    case 0xC4208F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4213F.asm:6 SEP #PROC_FLAGS::ACCUM8
    case 0xC42090: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4213F.asm:7 LDA $02
    case 0xC42092: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4213F.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC42094: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4213F.asm:9 STA f:WRMPYA
    case 0xC42096: cpu.execute_instruction<0x8F>(0x004202, 4); return true;
    // src/unknown/C4/C4213F.asm:10 NOP
    case 0xC4209A: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C4/C4213F.asm:11 CLC
    case 0xC4209B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4213F.asm:12 LDA f:RDMPYL
    case 0xC4209C: cpu.execute_instruction<0xAF>(0x004216, 4); return true;
    // src/unknown/C4/C4213F.asm:13 STA $04
    case 0xC420A0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4213F.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC420A2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4213F.asm:15 LDA $00
    case 0xC420A4: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4213F.asm:15 LDA $00
    // Overlapping static entry reached from 0xC4849F.
    case 0xC420A5: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/unknown/C4/C4213F.asm:16 STA f:WRMPYB
    case 0xC420A6: cpu.execute_instruction<0x8F>(0x004203, 4); return true;
    // src/unknown/C4/C4213F.asm:16 STA f:WRMPYB
    // Overlapping static entry reached from 0xC47B2B.
    case 0xC420A9: cpu.execute_instruction<0x00>(0x0000EA, 2); return true;
    // src/unknown/C4/C4213F.asm:17 NOP
    case 0xC420AA: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C4/C4213F.asm:18 NOP
    case 0xC420AB: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C4/C4213F.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC420AC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4213F.asm:20 LDA f:RDMPYL
    case 0xC420AE: cpu.execute_instruction<0xAF>(0x004216, 4); return true;
    // src/unknown/C4/C4213F.asm:21 XBA
    case 0xC420B2: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C4213F.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC420B3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4213F.asm:23 STA $02
    case 0xC420B5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4213F.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC420B7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4213F.asm:25 LDA $02
    case 0xC420B9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4213F.asm:26 ADC $04
    case 0xC420BB: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4213F.asm:27 RTS
    case 0xC420BD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C423DC.asm (unresolved).
bool execute_unresolved_c4_c423dc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C423DC.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC4231A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C423DC.asm:4 LDA #$0080
    case 0xC4231C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008F80, 3); return true;
    // src/unknown/C4/C423DC.asm:5 STA f:WH0
    case 0xC4231E: cpu.execute_instruction<0x8F>(0x002126, 4); return true;
    // src/unknown/C4/C423DC.asm:5 STA f:WH0
    // Overlapping static entry reached from 0xC4231C.
    case 0xC4231F: cpu.execute_instruction<0x26>(0x000021, 2); return true;
    // src/unknown/C4/C423DC.asm:5 STA f:WH0
    // Overlapping static entry reached from 0xC4231F.
    case 0xC42321: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/unknown/C4/C423DC.asm:6 STA f:WH2
    case 0xC42322: cpu.execute_instruction<0x8F>(0x002128, 4); return true;
    // src/unknown/C4/C423DC.asm:7 DEC
    case 0xC42326: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C423DC.asm:8 STA f:WH1
    case 0xC42327: cpu.execute_instruction<0x8F>(0x002127, 4); return true;
    // src/unknown/C4/C423DC.asm:9 STA f:WH3
    case 0xC4232B: cpu.execute_instruction<0x8F>(0x002129, 4); return true;
    // src/unknown/C4/C423DC.asm:10 LDA #$0010
    case 0xC4232F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x008F10, 3); return true;
    // src/unknown/C4/C423DC.asm:11 STA f:CGWSEL
    case 0xC42331: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/unknown/C4/C423DC.asm:11 STA f:CGWSEL
    // Overlapping static entry reached from 0xC4232F.
    case 0xC42332: cpu.execute_instruction<0x30>(0x000021, 2); return true;
    // src/unknown/C4/C423DC.asm:11 STA f:CGWSEL
    // Overlapping static entry reached from 0xC42332.
    case 0xC42334: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C423DC.asm:12 LDA #$0013
    case 0xC42335: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x008F13, 3); return true;
    // src/unknown/C4/C423DC.asm:13 STA f:TMW
    case 0xC42337: cpu.execute_instruction<0x8F>(0x00212E, 4); return true;
    // src/unknown/C4/C423DC.asm:13 STA f:TMW
    // Overlapping static entry reached from 0xC42335.
    case 0xC42338: cpu.execute_instruction<0x2E>(0x000021, 3); return true;
    // src/unknown/C4/C423DC.asm:14 LDA #$0000
    case 0xC4233B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/unknown/C4/C423DC.asm:15 STA f:WBGLOG
    case 0xC4233D: cpu.execute_instruction<0x8F>(0x00212A, 4); return true;
    // src/unknown/C4/C423DC.asm:15 STA f:WBGLOG
    // Overlapping static entry reached from 0xC4233B.
    case 0xC4233E: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C4/C423DC.asm:15 STA f:WBGLOG
    // Overlapping static entry reached from 0xC4233E.
    case 0xC4233F: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/unknown/C4/C423DC.asm:16 STA f:WOBJLOG
    case 0xC42341: cpu.execute_instruction<0x8F>(0x00212B, 4); return true;
    // src/unknown/C4/C423DC.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC42345: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C423DC.asm:18 RTL
    case 0xC42347: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4240A.asm (unresolved).
bool execute_unresolved_c4_c4240a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C4240A.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC42348: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4240A.asm:4 LDA #$0000
    case 0xC4234A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/unknown/C4/C4240A.asm:5 STA f:WH0
    case 0xC4234C: cpu.execute_instruction<0x8F>(0x002126, 4); return true;
    // src/unknown/C4/C4240A.asm:5 STA f:WH0
    // Overlapping static entry reached from 0xC4234A.
    case 0xC4234D: cpu.execute_instruction<0x26>(0x000021, 2); return true;
    // src/unknown/C4/C4240A.asm:5 STA f:WH0
    // Overlapping static entry reached from 0xC4234D.
    case 0xC4234F: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/unknown/C4/C4240A.asm:6 STA f:WH2
    case 0xC42350: cpu.execute_instruction<0x8F>(0x002128, 4); return true;
    // src/unknown/C4/C4240A.asm:7 LDA #$00FF
    case 0xC42354: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x008FFF, 3); return true;
    // src/unknown/C4/C4240A.asm:7 LDA #$00FF
    // Overlapping static entry reached from 0xC42332.
    case 0xC42355: cpu.execute_instruction<0xFF>(0x21278F, 4); return true;
    // src/unknown/C4/C4240A.asm:8 STA f:WH1
    case 0xC42356: cpu.execute_instruction<0x8F>(0x002127, 4); return true;
    // src/unknown/C4/C4240A.asm:8 STA f:WH1
    // Overlapping static entry reached from 0xC42354.
    case 0xC42357: cpu.execute_instruction<0x27>(0x000021, 2); return true;
    // src/unknown/C4/C4240A.asm:8 STA f:WH1
    // Overlapping static entry reached from 0xC42357.
    case 0xC42359: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/unknown/C4/C4240A.asm:9 STA f:WH3
    case 0xC4235A: cpu.execute_instruction<0x8F>(0x002129, 4); return true;
    // src/unknown/C4/C4240A.asm:10 LDA #$0020
    case 0xC4235E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x008F20, 3); return true;
    // src/unknown/C4/C4240A.asm:11 STA f:CGWSEL
    case 0xC42360: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/unknown/C4/C4240A.asm:11 STA f:CGWSEL
    // Overlapping static entry reached from 0xC4235E.
    case 0xC42361: cpu.execute_instruction<0x30>(0x000021, 2); return true;
    // src/unknown/C4/C4240A.asm:11 STA f:CGWSEL
    // Overlapping static entry reached from 0xC42361.
    case 0xC42363: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4240A.asm:12 LDA #$0013
    case 0xC42364: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x008F13, 3); return true;
    // src/unknown/C4/C4240A.asm:13 STA f:TMW
    case 0xC42366: cpu.execute_instruction<0x8F>(0x00212E, 4); return true;
    // src/unknown/C4/C4240A.asm:13 STA f:TMW
    // Overlapping static entry reached from 0xC42364.
    case 0xC42367: cpu.execute_instruction<0x2E>(0x000021, 3); return true;
    // src/unknown/C4/C4240A.asm:14 LDA #$0000
    case 0xC4236A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/unknown/C4/C4240A.asm:15 STA f:WBGLOG
    case 0xC4236C: cpu.execute_instruction<0x8F>(0x00212A, 4); return true;
    // src/unknown/C4/C4240A.asm:15 STA f:WBGLOG
    // Overlapping static entry reached from 0xC4236A.
    case 0xC4236D: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C4/C4240A.asm:15 STA f:WBGLOG
    // Overlapping static entry reached from 0xC4236D.
    case 0xC4236E: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/unknown/C4/C4240A.asm:16 STA f:WOBJLOG
    case 0xC42370: cpu.execute_instruction<0x8F>(0x00212B, 4); return true;
    // src/unknown/C4/C4240A.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC42374: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4240A.asm:18 RTL
    case 0xC42376: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C42439.asm (unresolved).
bool execute_unresolved_c4_c42439_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C42439.asm:3 SEP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC42377: cpu.execute_instruction<0xE2>(0x000030, 2); return true;
    // src/unknown/C4/C42439.asm:4 STA f:CGADSUB
    case 0xC42379: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/unknown/C4/C42439.asm:5 LDA ACTIONSCRIPT_COLDATA_BLUE
    case 0xC4237D: cpu.execute_instruction<0xAD>(0x00A03D, 3); return true;
    // src/unknown/C4/C42439.asm:6 ORA #$0080
    case 0xC42380: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000080, 2); else cpu.execute_instruction<0x09>(0x008F80, 3); return true;
    // src/unknown/C4/C42439.asm:7 STA f:FIXED_COLOR_DATA
    case 0xC42382: cpu.execute_instruction<0x8F>(0x002132, 4); return true;
    // src/unknown/C4/C42439.asm:7 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC42380.
    case 0xC42383: cpu.execute_instruction<0x32>(0x000021, 2); return true;
    // src/unknown/C4/C42439.asm:7 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC42361.
    case 0xC42384: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/unknown/C4/C42439.asm:7 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC42383.
    case 0xC42385: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C4/C42439.asm:8 LDA ACTIONSCRIPT_COLDATA_GREEN
    case 0xC42386: cpu.execute_instruction<0xAD>(0x00A03E, 3); return true;
    // src/unknown/C4/C42439.asm:9 ORA #$0040
    case 0xC42389: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000040, 2); else cpu.execute_instruction<0x09>(0x008F40, 3); return true;
    // src/unknown/C4/C42439.asm:10 STA f:FIXED_COLOR_DATA
    case 0xC4238B: cpu.execute_instruction<0x8F>(0x002132, 4); return true;
    // src/unknown/C4/C42439.asm:10 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC42389.
    case 0xC4238C: cpu.execute_instruction<0x32>(0x000021, 2); return true;
    // src/unknown/C4/C42439.asm:10 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC4238C.
    case 0xC4238E: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C4/C42439.asm:11 LDA ACTIONSCRIPT_COLDATA_RED
    case 0xC4238F: cpu.execute_instruction<0xAD>(0x00A03F, 3); return true;
    // src/unknown/C4/C42439.asm:12 ORA #$0020
    case 0xC42392: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000020, 2); else cpu.execute_instruction<0x09>(0x008F20, 3); return true;
    // src/unknown/C4/C42439.asm:13 STA f:FIXED_COLOR_DATA
    case 0xC42394: cpu.execute_instruction<0x8F>(0x002132, 4); return true;
    // src/unknown/C4/C42439.asm:13 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC42392.
    case 0xC42395: cpu.execute_instruction<0x32>(0x000021, 2); return true;
    // src/unknown/C4/C42439.asm:13 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC42395.
    case 0xC42397: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C42439.asm:14 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC42398: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C4/C42439.asm:15 RTL
    case 0xC4239A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4245D.asm (unresolved).
bool execute_unresolved_c4_c4245d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C4245D.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC4239B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4245D.asm:4 STA f:A1B4
    case 0xC4239D: cpu.execute_instruction<0x8F>(0x004344, 4); return true;
    // src/unknown/C4/C4245D.asm:5 STA f:DASB4
    case 0xC423A1: cpu.execute_instruction<0x8F>(0x004347, 4); return true;
    // src/unknown/C4/C4245D.asm:6 LDA #$0001
    case 0xC423A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008F01, 3); return true;
    // src/unknown/C4/C4245D.asm:7 STA f:DMAP4
    case 0xC423A7: cpu.execute_instruction<0x8F>(0x004340, 4); return true;
    // src/unknown/C4/C4245D.asm:7 STA f:DMAP4
    // Overlapping static entry reached from 0xC423A5.
    case 0xC423A8: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C4/C4245D.asm:8 LDA #$0026
    case 0xC423AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x008F26, 3); return true;
    // src/unknown/C4/C4245D.asm:9 STA f:BBAD4
    case 0xC423AD: cpu.execute_instruction<0x8F>(0x004341, 4); return true;
    // src/unknown/C4/C4245D.asm:9 STA f:BBAD4
    // Overlapping static entry reached from 0xC423AB.
    case 0xC423AE: cpu.execute_instruction<0x41>(0x000043, 2); return true;
    // src/unknown/C4/C4245D.asm:9 STA f:BBAD4
    // Overlapping static entry reached from 0xC423AE.
    case 0xC423B0: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C4245D.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC423B1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4245D.asm:11 TXA
    case 0xC423B3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4245D.asm:12 STA f:A1T4L
    case 0xC423B4: cpu.execute_instruction<0x8F>(0x004342, 4); return true;
    // src/unknown/C4/C4245D.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC423B8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4245D.asm:14 LDA #$00A0
    case 0xC423BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A0, 2); else cpu.execute_instruction<0xA9>(0x008FA0, 3); return true;
    // src/unknown/C4/C4245D.asm:15 STA f:WOBJSEL
    case 0xC423BC: cpu.execute_instruction<0x8F>(0x002125, 4); return true;
    // src/unknown/C4/C4245D.asm:15 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC423BA.
    case 0xC423BD: cpu.execute_instruction<0x25>(0x000021, 2); return true;
    // src/unknown/C4/C4245D.asm:15 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC423BD.
    case 0xC423BF: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4245D.asm:16 LDA #$0010
    case 0xC423C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000C10, 3); return true;
    // src/unknown/C4/C4245D.asm:17 TSB HDMAEN_MIRROR
    case 0xC423C2: cpu.execute_instruction<0x0C>(0x00001F, 3); return true;
    // src/unknown/C4/C4245D.asm:17 TSB HDMAEN_MIRROR
    // Overlapping static entry reached from 0xC423C0.
    case 0xC423C3: cpu.execute_instruction<0x1F>(0x20C200, 4); return true;
    // src/unknown/C4/C4245D.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC423C5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4245D.asm:19 RTL
    case 0xC423C7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4248A.asm (unresolved).
bool execute_unresolved_c4_c4248a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C4248A.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC423C8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4248A.asm:4 LDA #$0010
    case 0xC423CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x001C10, 3); return true;
    // src/unknown/C4/C4248A.asm:5 TRB HDMAEN_MIRROR
    case 0xC423CC: cpu.execute_instruction<0x1C>(0x00001F, 3); return true;
    // src/unknown/C4/C4248A.asm:5 TRB HDMAEN_MIRROR
    // Overlapping static entry reached from 0xC423CA.
    case 0xC423CD: cpu.execute_instruction<0x1F>(0x00A900, 4); return true;
    // src/unknown/C4/C4248A.asm:6 LDA #$0000
    case 0xC423CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/unknown/C4/C4248A.asm:7 STA f:WOBJSEL
    case 0xC423D1: cpu.execute_instruction<0x8F>(0x002125, 4); return true;
    // src/unknown/C4/C4248A.asm:7 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC423CF.
    case 0xC423D2: cpu.execute_instruction<0x25>(0x000021, 2); return true;
    // src/unknown/C4/C4248A.asm:7 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC423D2.
    case 0xC423D4: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C4248A.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC423D5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4248A.asm:9 RTL
    case 0xC423D7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4249A.asm (unresolved).
bool execute_unresolved_c4_c4249a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C4249A.asm:3 SEP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC423D8: cpu.execute_instruction<0xE2>(0x000030, 2); return true;
    // src/unknown/C4/C4249A.asm:4 STA f:CGADSUB
    case 0xC423DA: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/unknown/C4/C4249A.asm:5 LDA #$0020
    case 0xC423DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x008F20, 3); return true;
    // src/unknown/C4/C4249A.asm:6 STA f:WOBJSEL
    case 0xC423E0: cpu.execute_instruction<0x8F>(0x002125, 4); return true;
    // src/unknown/C4/C4249A.asm:6 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC423DE.
    case 0xC423E1: cpu.execute_instruction<0x25>(0x000021, 2); return true;
    // src/unknown/C4/C4249A.asm:6 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC423E1.
    case 0xC423E3: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4249A.asm:7 LDA #$0000
    case 0xC423E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/unknown/C4/C4249A.asm:8 STA f:WH0
    case 0xC423E6: cpu.execute_instruction<0x8F>(0x002126, 4); return true;
    // src/unknown/C4/C4249A.asm:8 STA f:WH0
    // Overlapping static entry reached from 0xC423E4.
    case 0xC423E7: cpu.execute_instruction<0x26>(0x000021, 2); return true;
    // src/unknown/C4/C4249A.asm:8 STA f:WH0
    // Overlapping static entry reached from 0xC423E7.
    case 0xC423E9: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4249A.asm:9 LDA #$00FF
    case 0xC423EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x008FFF, 3); return true;
    // src/unknown/C4/C4249A.asm:10 STA f:WH1
    case 0xC423EC: cpu.execute_instruction<0x8F>(0x002127, 4); return true;
    // src/unknown/C4/C4249A.asm:10 STA f:WH1
    // Overlapping static entry reached from 0xC423EA.
    case 0xC423ED: cpu.execute_instruction<0x27>(0x000021, 2); return true;
    // src/unknown/C4/C4249A.asm:10 STA f:WH1
    // Overlapping static entry reached from 0xC423ED.
    case 0xC423EF: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4249A.asm:11 LDA #$0013
    case 0xC423F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x008D13, 3); return true;
    // src/unknown/C4/C4249A.asm:12 STA TMW
    case 0xC423F2: cpu.execute_instruction<0x8D>(0x00212E, 3); return true;
    // src/unknown/C4/C4249A.asm:12 STA TMW
    // Overlapping static entry reached from 0xC423F0.
    case 0xC423F3: cpu.execute_instruction<0x2E>(0x00A921, 3); return true;
    // src/unknown/C4/C4249A.asm:13 LDA #$0000
    case 0xC423F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/unknown/C4/C4249A.asm:13 LDA #$0000
    // Overlapping static entry reached from 0xC423F3.
    case 0xC423F6: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/unknown/C4/C4249A.asm:14 STA f:WBGLOG
    case 0xC423F7: cpu.execute_instruction<0x8F>(0x00212A, 4); return true;
    // src/unknown/C4/C4249A.asm:14 STA f:WBGLOG
    // Overlapping static entry reached from 0xC423F5.
    case 0xC423F8: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C4/C4249A.asm:14 STA f:WBGLOG
    // Overlapping static entry reached from 0xC423F8.
    case 0xC423F9: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/unknown/C4/C4249A.asm:15 STA f:WOBJLOG
    case 0xC423FB: cpu.execute_instruction<0x8F>(0x00212B, 4); return true;
    // src/unknown/C4/C4249A.asm:16 LDA #$0010
    case 0xC423FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x008F10, 3); return true;
    // src/unknown/C4/C4249A.asm:17 STA f:CGWSEL
    case 0xC42401: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/unknown/C4/C4249A.asm:17 STA f:CGWSEL
    // Overlapping static entry reached from 0xC423FF.
    case 0xC42402: cpu.execute_instruction<0x30>(0x000021, 2); return true;
    // src/unknown/C4/C4249A.asm:17 STA f:CGWSEL
    // Overlapping static entry reached from 0xC42402.
    case 0xC42404: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C4/C4249A.asm:18 TXA
    case 0xC42405: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4249A.asm:19 ORA #$00E0
    case 0xC42406: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000E0, 2); else cpu.execute_instruction<0x09>(0x008FE0, 3); return true;
    // src/unknown/C4/C4249A.asm:20 STA f:FIXED_COLOR_DATA
    case 0xC42408: cpu.execute_instruction<0x8F>(0x002132, 4); return true;
    // src/unknown/C4/C4249A.asm:20 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC42406.
    case 0xC42409: cpu.execute_instruction<0x32>(0x000021, 2); return true;
    // src/unknown/C4/C4249A.asm:20 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC42409.
    case 0xC4240B: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C4249A.asm:21 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC4240C: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C4/C4249A.asm:22 RTL
    case 0xC4240E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C424D1.asm (unresolved).
bool execute_unresolved_c4_c424d1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C424D1.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC4240F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C424D1.asm:4 LDA #$0020
    case 0xC42411: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x008F20, 3); return true;
    // src/unknown/C4/C424D1.asm:5 STA f:WOBJSEL
    case 0xC42413: cpu.execute_instruction<0x8F>(0x002125, 4); return true;
    // src/unknown/C4/C424D1.asm:5 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC42411.
    case 0xC42414: cpu.execute_instruction<0x25>(0x000021, 2); return true;
    // src/unknown/C4/C424D1.asm:5 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC42414.
    case 0xC42416: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C424D1.asm:6 LDA #$0080
    case 0xC42417: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008F80, 3); return true;
    // src/unknown/C4/C424D1.asm:7 STA f:WH0
    case 0xC42419: cpu.execute_instruction<0x8F>(0x002126, 4); return true;
    // src/unknown/C4/C424D1.asm:7 STA f:WH0
    // Overlapping static entry reached from 0xC42417.
    case 0xC4241A: cpu.execute_instruction<0x26>(0x000021, 2); return true;
    // src/unknown/C4/C424D1.asm:7 STA f:WH0
    // Overlapping static entry reached from 0xC4241A.
    case 0xC4241C: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C4/C424D1.asm:8 DEC
    case 0xC4241D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C424D1.asm:9 STA f:WH1
    case 0xC4241E: cpu.execute_instruction<0x8F>(0x002127, 4); return true;
    // src/unknown/C4/C424D1.asm:10 LDA #$0013
    case 0xC42422: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x008F13, 3); return true;
    // src/unknown/C4/C424D1.asm:11 STA f:TMW
    case 0xC42424: cpu.execute_instruction<0x8F>(0x00212E, 4); return true;
    // src/unknown/C4/C424D1.asm:11 STA f:TMW
    // Overlapping static entry reached from 0xC42422.
    case 0xC42425: cpu.execute_instruction<0x2E>(0x000021, 3); return true;
    // src/unknown/C4/C424D1.asm:12 LDA #$0000
    case 0xC42428: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/unknown/C4/C424D1.asm:13 STA f:WBGLOG
    case 0xC4242A: cpu.execute_instruction<0x8F>(0x00212A, 4); return true;
    // src/unknown/C4/C424D1.asm:13 STA f:WBGLOG
    // Overlapping static entry reached from 0xC42428.
    case 0xC4242B: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C4/C424D1.asm:13 STA f:WBGLOG
    // Overlapping static entry reached from 0xC4242B.
    case 0xC4242C: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/unknown/C4/C424D1.asm:14 STA f:WOBJLOG
    case 0xC4242E: cpu.execute_instruction<0x8F>(0x00212B, 4); return true;
    // src/unknown/C4/C424D1.asm:15 LDA #$0020
    case 0xC42432: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x008F20, 3); return true;
    // src/unknown/C4/C424D1.asm:16 STA f:CGWSEL
    case 0xC42434: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/unknown/C4/C424D1.asm:16 STA f:CGWSEL
    // Overlapping static entry reached from 0xC42432.
    case 0xC42435: cpu.execute_instruction<0x30>(0x000021, 2); return true;
    // src/unknown/C4/C424D1.asm:16 STA f:CGWSEL
    // Overlapping static entry reached from 0xC42435.
    case 0xC42437: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C424D1.asm:17 LDA #$00B3
    case 0xC42438: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B3, 2); else cpu.execute_instruction<0xA9>(0x008FB3, 3); return true;
    // src/unknown/C4/C424D1.asm:18 STA f:CGADSUB
    case 0xC4243A: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/unknown/C4/C424D1.asm:18 STA f:CGADSUB
    // Overlapping static entry reached from 0xC42438.
    case 0xC4243B: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/unknown/C4/C424D1.asm:18 STA f:CGADSUB
    // Overlapping static entry reached from 0xC4243B.
    case 0xC4243D: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C424D1.asm:19 LDA #$00EF
    case 0xC4243E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x008FEF, 3); return true;
    // src/unknown/C4/C424D1.asm:20 STA f:FIXED_COLOR_DATA
    case 0xC42440: cpu.execute_instruction<0x8F>(0x002132, 4); return true;
    // src/unknown/C4/C424D1.asm:20 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC4243E.
    case 0xC42441: cpu.execute_instruction<0x32>(0x000021, 2); return true;
    // src/unknown/C4/C424D1.asm:20 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC42441.
    case 0xC42443: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C424D1.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC42444: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C424D1.asm:22 RTL
    case 0xC42446: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C42509.asm (unresolved).
bool execute_unresolved_c4_c42509_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C42509.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC42447: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C42509.asm:4 LDA #$0020
    case 0xC42449: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x008F20, 3); return true;
    // src/unknown/C4/C42509.asm:5 STA f:WOBJSEL
    case 0xC4244B: cpu.execute_instruction<0x8F>(0x002125, 4); return true;
    // src/unknown/C4/C42509.asm:5 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC42449.
    case 0xC4244C: cpu.execute_instruction<0x25>(0x000021, 2); return true;
    // src/unknown/C4/C42509.asm:5 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC4244C.
    case 0xC4244E: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C42509.asm:6 LDA #$0000
    case 0xC4244F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/unknown/C4/C42509.asm:7 STA f:WH0
    case 0xC42451: cpu.execute_instruction<0x8F>(0x002126, 4); return true;
    // src/unknown/C4/C42509.asm:7 STA f:WH0
    // Overlapping static entry reached from 0xC4244F.
    case 0xC42452: cpu.execute_instruction<0x26>(0x000021, 2); return true;
    // src/unknown/C4/C42509.asm:7 STA f:WH0
    // Overlapping static entry reached from 0xC42452.
    case 0xC42454: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C42509.asm:8 LDA #$00FF
    case 0xC42455: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x008FFF, 3); return true;
    // src/unknown/C4/C42509.asm:9 STA f:WH1
    case 0xC42457: cpu.execute_instruction<0x8F>(0x002127, 4); return true;
    // src/unknown/C4/C42509.asm:9 STA f:WH1
    // Overlapping static entry reached from 0xC42455.
    case 0xC42458: cpu.execute_instruction<0x27>(0x000021, 2); return true;
    // src/unknown/C4/C42509.asm:9 STA f:WH1
    // Overlapping static entry reached from 0xC42458.
    case 0xC4245A: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C42509.asm:10 LDA #$0013
    case 0xC4245B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x008F13, 3); return true;
    // src/unknown/C4/C42509.asm:11 STA f:TMW
    case 0xC4245D: cpu.execute_instruction<0x8F>(0x00212E, 4); return true;
    // src/unknown/C4/C42509.asm:11 STA f:TMW
    // Overlapping static entry reached from 0xC4245B.
    case 0xC4245E: cpu.execute_instruction<0x2E>(0x000021, 3); return true;
    // src/unknown/C4/C42509.asm:12 LDA #$0000
    case 0xC42461: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/unknown/C4/C42509.asm:13 STA f:WBGLOG
    case 0xC42463: cpu.execute_instruction<0x8F>(0x00212A, 4); return true;
    // src/unknown/C4/C42509.asm:13 STA f:WBGLOG
    // Overlapping static entry reached from 0xC42461.
    case 0xC42464: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C4/C42509.asm:13 STA f:WBGLOG
    // Overlapping static entry reached from 0xC42464.
    case 0xC42465: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/unknown/C4/C42509.asm:14 STA f:WOBJLOG
    case 0xC42467: cpu.execute_instruction<0x8F>(0x00212B, 4); return true;
    // src/unknown/C4/C42509.asm:15 LDA #$0020
    case 0xC4246B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x008F20, 3); return true;
    // src/unknown/C4/C42509.asm:16 STA f:CGWSEL
    case 0xC4246D: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/unknown/C4/C42509.asm:16 STA f:CGWSEL
    // Overlapping static entry reached from 0xC4246B.
    case 0xC4246E: cpu.execute_instruction<0x30>(0x000021, 2); return true;
    // src/unknown/C4/C42509.asm:16 STA f:CGWSEL
    // Overlapping static entry reached from 0xC4246E.
    case 0xC42470: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C42509.asm:17 LDA #$00B3
    case 0xC42471: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B3, 2); else cpu.execute_instruction<0xA9>(0x008FB3, 3); return true;
    // src/unknown/C4/C42509.asm:18 STA f:CGADSUB
    case 0xC42473: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/unknown/C4/C42509.asm:18 STA f:CGADSUB
    // Overlapping static entry reached from 0xC42471.
    case 0xC42474: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/unknown/C4/C42509.asm:18 STA f:CGADSUB
    // Overlapping static entry reached from 0xC42474.
    case 0xC42476: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C42509.asm:19 LDA #$00FF
    case 0xC42477: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x008FFF, 3); return true;
    // src/unknown/C4/C42509.asm:20 STA f:FIXED_COLOR_DATA
    case 0xC42479: cpu.execute_instruction<0x8F>(0x002132, 4); return true;
    // src/unknown/C4/C42509.asm:20 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC42477.
    case 0xC4247A: cpu.execute_instruction<0x32>(0x000021, 2); return true;
    // src/unknown/C4/C42509.asm:20 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC4247A.
    case 0xC4247C: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C42509.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC4247D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C42509.asm:22 RTL
    case 0xC4247F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C42542.asm (unresolved).
bool execute_unresolved_c4_c42542_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C42542.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC42480: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C42542.asm:4 STA f:A1B4
    case 0xC42482: cpu.execute_instruction<0x8F>(0x004344, 4); return true;
    // src/unknown/C4/C42542.asm:5 STA f:DASB4
    case 0xC42486: cpu.execute_instruction<0x8F>(0x004347, 4); return true;
    // src/unknown/C4/C42542.asm:6 LDA #$0001
    case 0xC4248A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008F01, 3); return true;
    // src/unknown/C4/C42542.asm:7 STA f:DMAP4
    case 0xC4248C: cpu.execute_instruction<0x8F>(0x004340, 4); return true;
    // src/unknown/C4/C42542.asm:7 STA f:DMAP4
    // Overlapping static entry reached from 0xC4248A.
    case 0xC4248D: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C4/C42542.asm:8 LDA #$0026
    case 0xC42490: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x008F26, 3); return true;
    // src/unknown/C4/C42542.asm:8 LDA #$0026
    // Overlapping static entry reached from 0xC4246E.
    case 0xC42491: cpu.execute_instruction<0x26>(0x00008F, 2); return true;
    // src/unknown/C4/C42542.asm:9 STA f:BBAD4
    case 0xC42492: cpu.execute_instruction<0x8F>(0x004341, 4); return true;
    // src/unknown/C4/C42542.asm:9 STA f:BBAD4
    // Overlapping static entry reached from 0xC42490.
    case 0xC42493: cpu.execute_instruction<0x41>(0x000043, 2); return true;
    // src/unknown/C4/C42542.asm:9 STA f:BBAD4
    // Overlapping static entry reached from 0xC42493.
    case 0xC42495: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C42542.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC42496: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C42542.asm:11 TXA
    case 0xC42498: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C42542.asm:12 STA f:A1T4L
    case 0xC42499: cpu.execute_instruction<0x8F>(0x004342, 4); return true;
    // src/unknown/C4/C42542.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC4249D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C42542.asm:14 LDA #$0010
    case 0xC4249F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000C10, 3); return true;
    // src/unknown/C4/C42542.asm:15 TSB HDMAEN_MIRROR
    case 0xC424A1: cpu.execute_instruction<0x0C>(0x00001F, 3); return true;
    // src/unknown/C4/C42542.asm:15 TSB HDMAEN_MIRROR
    // Overlapping static entry reached from 0xC4249F.
    case 0xC424A2: cpu.execute_instruction<0x1F>(0x20C200, 4); return true;
    // src/unknown/C4/C42542.asm:16 REP #PROC_FLAGS::ACCUM8
    case 0xC424A4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C42542.asm:17 RTL
    case 0xC424A6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C42569.asm (unresolved).
bool execute_unresolved_c4_c42569_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C42569.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC424A7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C42569.asm:4 LDA #$0033
    case 0xC424A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000033, 2); else cpu.execute_instruction<0xA9>(0x008F33, 3); return true;
    // src/unknown/C4/C42569.asm:5 STA f:CGADSUB
    case 0xC424AB: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/unknown/C4/C42569.asm:5 STA f:CGADSUB
    // Overlapping static entry reached from 0xC424A9.
    case 0xC424AC: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/unknown/C4/C42569.asm:5 STA f:CGADSUB
    // Overlapping static entry reached from 0xC424AC.
    case 0xC424AE: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C42569.asm:6 REP #PROC_FLAGS::ACCUM8
    case 0xC424AF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C42569.asm:7 RTL
    case 0xC424B1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C42574.asm (unresolved).
bool execute_unresolved_c4_c42574_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C42574.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC424B2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C42574.asm:4 LDA #$00B3
    case 0xC424B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B3, 2); else cpu.execute_instruction<0xA9>(0x008FB3, 3); return true;
    // src/unknown/C4/C42574.asm:5 STA f:CGADSUB
    case 0xC424B6: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/unknown/C4/C42574.asm:5 STA f:CGADSUB
    // Overlapping static entry reached from 0xC424B4.
    case 0xC424B7: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/unknown/C4/C42574.asm:5 STA f:CGADSUB
    // Overlapping static entry reached from 0xC424B7.
    case 0xC424B9: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C42574.asm:6 REP #PROC_FLAGS::ACCUM8
    case 0xC424BA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C42574.asm:7 RTL
    case 0xC424BC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4257F.asm (unresolved).
bool execute_unresolved_c4_c4257f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C4257F.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC424BD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4257F.asm:4 LDA HDMAEN_MIRROR
    case 0xC424BF: cpu.execute_instruction<0xAD>(0x00001F, 3); return true;
    // src/unknown/C4/C4257F.asm:5 AND #$00EF
    case 0xC424C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000EF, 2); else cpu.execute_instruction<0x29>(0x008DEF, 3); return true;
    // src/unknown/C4/C4257F.asm:6 STA HDMAEN_MIRROR
    case 0xC424C4: cpu.execute_instruction<0x8D>(0x00001F, 3); return true;
    // src/unknown/C4/C4257F.asm:6 STA HDMAEN_MIRROR
    // Overlapping static entry reached from 0xC424C2.
    case 0xC424C5: cpu.execute_instruction<0x1F>(0x20C200, 4); return true;
    // src/unknown/C4/C4257F.asm:7 REP #PROC_FLAGS::ACCUM8
    case 0xC424C7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4257F.asm:8 RTL
    case 0xC424C9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4258C.asm (unresolved).
bool execute_unresolved_c4_c4258c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C4258C.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC424CA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4258C.asm:4 LDA #$00A0
    case 0xC424CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A0, 2); else cpu.execute_instruction<0xA9>(0x008FA0, 3); return true;
    // src/unknown/C4/C4258C.asm:5 STA f:WOBJSEL
    case 0xC424CE: cpu.execute_instruction<0x8F>(0x002125, 4); return true;
    // src/unknown/C4/C4258C.asm:5 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC424CC.
    case 0xC424CF: cpu.execute_instruction<0x25>(0x000021, 2); return true;
    // src/unknown/C4/C4258C.asm:5 STA f:WOBJSEL
    // Overlapping static entry reached from 0xC424CF.
    case 0xC424D1: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4258C.asm:6 LDA #$0080
    case 0xC424D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008F80, 3); return true;
    // src/unknown/C4/C4258C.asm:7 STA f:WH0
    case 0xC424D4: cpu.execute_instruction<0x8F>(0x002126, 4); return true;
    // src/unknown/C4/C4258C.asm:7 STA f:WH0
    // Overlapping static entry reached from 0xC424D2.
    case 0xC424D5: cpu.execute_instruction<0x26>(0x000021, 2); return true;
    // src/unknown/C4/C4258C.asm:7 STA f:WH0
    // Overlapping static entry reached from 0xC424D5.
    case 0xC424D7: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/unknown/C4/C4258C.asm:8 STA f:WH2
    case 0xC424D8: cpu.execute_instruction<0x8F>(0x002128, 4); return true;
    // src/unknown/C4/C4258C.asm:9 DEC
    case 0xC424DC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4258C.asm:10 STA f:WH1
    case 0xC424DD: cpu.execute_instruction<0x8F>(0x002127, 4); return true;
    // src/unknown/C4/C4258C.asm:11 STA f:WH3
    case 0xC424E1: cpu.execute_instruction<0x8F>(0x002129, 4); return true;
    // src/unknown/C4/C4258C.asm:12 LDA #$0013
    case 0xC424E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x008F13, 3); return true;
    // src/unknown/C4/C4258C.asm:13 STA f:TMW
    case 0xC424E7: cpu.execute_instruction<0x8F>(0x00212E, 4); return true;
    // src/unknown/C4/C4258C.asm:13 STA f:TMW
    // Overlapping static entry reached from 0xC424E5.
    case 0xC424E8: cpu.execute_instruction<0x2E>(0x000021, 3); return true;
    // src/unknown/C4/C4258C.asm:14 LDA #$0000
    case 0xC424EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/unknown/C4/C4258C.asm:15 STA f:WBGLOG
    case 0xC424ED: cpu.execute_instruction<0x8F>(0x00212A, 4); return true;
    // src/unknown/C4/C4258C.asm:15 STA f:WBGLOG
    // Overlapping static entry reached from 0xC424EB.
    case 0xC424EE: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C4/C4258C.asm:15 STA f:WBGLOG
    // Overlapping static entry reached from 0xC424EE.
    case 0xC424EF: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/unknown/C4/C4258C.asm:16 STA f:WOBJLOG
    case 0xC424F1: cpu.execute_instruction<0x8F>(0x00212B, 4); return true;
    // src/unknown/C4/C4258C.asm:17 LDA #$0020
    case 0xC424F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x008F20, 3); return true;
    // src/unknown/C4/C4258C.asm:18 STA f:CGWSEL
    case 0xC424F7: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/unknown/C4/C4258C.asm:18 STA f:CGWSEL
    // Overlapping static entry reached from 0xC424F5.
    case 0xC424F8: cpu.execute_instruction<0x30>(0x000021, 2); return true;
    // src/unknown/C4/C4258C.asm:18 STA f:CGWSEL
    // Overlapping static entry reached from 0xC424F8.
    case 0xC424FA: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4258C.asm:19 LDA #$00B3
    case 0xC424FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B3, 2); else cpu.execute_instruction<0xA9>(0x008FB3, 3); return true;
    // src/unknown/C4/C4258C.asm:20 STA f:CGADSUB
    case 0xC424FD: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/unknown/C4/C4258C.asm:20 STA f:CGADSUB
    // Overlapping static entry reached from 0xC424FB.
    case 0xC424FE: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/unknown/C4/C4258C.asm:20 STA f:CGADSUB
    // Overlapping static entry reached from 0xC424FE.
    case 0xC42500: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4258C.asm:21 LDA #$00EF
    case 0xC42501: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x008FEF, 3); return true;
    // src/unknown/C4/C4258C.asm:22 STA f:FIXED_COLOR_DATA
    case 0xC42503: cpu.execute_instruction<0x8F>(0x002132, 4); return true;
    // src/unknown/C4/C4258C.asm:22 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC42501.
    case 0xC42504: cpu.execute_instruction<0x32>(0x000021, 2); return true;
    // src/unknown/C4/C4258C.asm:22 STA f:FIXED_COLOR_DATA
    // Overlapping static entry reached from 0xC42504.
    case 0xC42506: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C4258C.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC42507: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4258C.asm:24 RTL
    case 0xC42509: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C425CC.asm (unresolved).
bool execute_unresolved_c4_c425cc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C425CC.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC4250A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C425CC.asm:4 STA f:A1B4
    case 0xC4250C: cpu.execute_instruction<0x8F>(0x004344, 4); return true;
    // src/unknown/C4/C425CC.asm:5 STA f:DASB4
    case 0xC42510: cpu.execute_instruction<0x8F>(0x004347, 4); return true;
    // src/unknown/C4/C425CC.asm:6 LDA #$0001
    case 0xC42514: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008F01, 3); return true;
    // src/unknown/C4/C425CC.asm:7 STA f:DMAP4
    case 0xC42516: cpu.execute_instruction<0x8F>(0x004340, 4); return true;
    // src/unknown/C4/C425CC.asm:7 STA f:DMAP4
    // Overlapping static entry reached from 0xC42514.
    case 0xC42517: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C4/C425CC.asm:8 LDA #$0026
    case 0xC4251A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000026, 2); else cpu.execute_instruction<0xA9>(0x008F26, 3); return true;
    // src/unknown/C4/C425CC.asm:8 LDA #$0026
    // Overlapping static entry reached from 0xC424F8.
    case 0xC4251B: cpu.execute_instruction<0x26>(0x00008F, 2); return true;
    // src/unknown/C4/C425CC.asm:9 STA f:BBAD4
    case 0xC4251C: cpu.execute_instruction<0x8F>(0x004341, 4); return true;
    // src/unknown/C4/C425CC.asm:9 STA f:BBAD4
    // Overlapping static entry reached from 0xC4251A.
    case 0xC4251D: cpu.execute_instruction<0x41>(0x000043, 2); return true;
    // src/unknown/C4/C425CC.asm:9 STA f:BBAD4
    // Overlapping static entry reached from 0xC4251D.
    case 0xC4251F: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C425CC.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC42520: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C425CC.asm:11 TXA
    case 0xC42522: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C425CC.asm:12 STA f:A1T4L
    case 0xC42523: cpu.execute_instruction<0x8F>(0x004342, 4); return true;
    // src/unknown/C4/C425CC.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC42527: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C425CC.asm:14 LDA #$0010
    case 0xC42529: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000C10, 3); return true;
    // src/unknown/C4/C425CC.asm:15 TSB HDMAEN_MIRROR
    case 0xC4252B: cpu.execute_instruction<0x0C>(0x00001F, 3); return true;
    // src/unknown/C4/C425CC.asm:15 TSB HDMAEN_MIRROR
    // Overlapping static entry reached from 0xC42529.
    case 0xC4252C: cpu.execute_instruction<0x1F>(0x20C200, 4); return true;
    // src/unknown/C4/C425CC.asm:16 REP #PROC_FLAGS::ACCUM8
    case 0xC4252E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C425CC.asm:17 RTL
    case 0xC42530: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C425F3.asm (unresolved).
bool execute_unresolved_c4_c425f3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C425F3.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC42531: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C425F3.asm:4 LDA #$0010
    case 0xC42533: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x001C10, 3); return true;
    // src/unknown/C4/C425F3.asm:5 TRB HDMAEN_MIRROR
    case 0xC42535: cpu.execute_instruction<0x1C>(0x00001F, 3); return true;
    // src/unknown/C4/C425F3.asm:5 TRB HDMAEN_MIRROR
    // Overlapping static entry reached from 0xC42533.
    case 0xC42536: cpu.execute_instruction<0x1F>(0x20C200, 4); return true;
    // src/unknown/C4/C425F3.asm:6 REP #PROC_FLAGS::ACCUM8
    case 0xC42538: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C425F3.asm:7 RTL
    case 0xC4253A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C425FD.asm (unresolved).
bool execute_unresolved_c4_c425fd_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C425FD.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC4253B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C425FD.asm:4 STA f:A1B5
    case 0xC4253D: cpu.execute_instruction<0x8F>(0x004354, 4); return true;
    // src/unknown/C4/C425FD.asm:5 STA f:DASB5
    case 0xC42541: cpu.execute_instruction<0x8F>(0x004357, 4); return true;
    // src/unknown/C4/C425FD.asm:6 LDA #$0001
    case 0xC42545: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008F01, 3); return true;
    // src/unknown/C4/C425FD.asm:7 STA f:DMAP5
    case 0xC42547: cpu.execute_instruction<0x8F>(0x004350, 4); return true;
    // src/unknown/C4/C425FD.asm:7 STA f:DMAP5
    // Overlapping static entry reached from 0xC42545.
    case 0xC42548: cpu.execute_instruction<0x50>(0x000043, 2); return true;
    // src/unknown/C4/C425FD.asm:7 STA f:DMAP5
    // Overlapping static entry reached from 0xC42548.
    case 0xC4254A: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C425FD.asm:8 LDA #$0028
    case 0xC4254B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x008F28, 3); return true;
    // src/unknown/C4/C425FD.asm:9 STA f:BBAD5
    case 0xC4254D: cpu.execute_instruction<0x8F>(0x004351, 4); return true;
    // src/unknown/C4/C425FD.asm:9 STA f:BBAD5
    // Overlapping static entry reached from 0xC4254B.
    case 0xC4254E: cpu.execute_instruction<0x51>(0x000043, 2); return true;
    // src/unknown/C4/C425FD.asm:9 STA f:BBAD5
    // Overlapping static entry reached from 0xC4254E.
    case 0xC42550: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C425FD.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC42551: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C425FD.asm:11 TXA
    case 0xC42553: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C425FD.asm:12 STA f:A1T5L
    case 0xC42554: cpu.execute_instruction<0x8F>(0x004352, 4); return true;
    // src/unknown/C4/C425FD.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC42558: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C425FD.asm:14 LDA #$0020
    case 0xC4255A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000C20, 3); return true;
    // src/unknown/C4/C425FD.asm:15 TSB HDMAEN_MIRROR
    case 0xC4255C: cpu.execute_instruction<0x0C>(0x00001F, 3); return true;
    // src/unknown/C4/C425FD.asm:15 TSB HDMAEN_MIRROR
    // Overlapping static entry reached from 0xC4255A.
    case 0xC4255D: cpu.execute_instruction<0x1F>(0x20C200, 4); return true;
    // src/unknown/C4/C425FD.asm:16 REP #PROC_FLAGS::ACCUM8
    case 0xC4255F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C425FD.asm:17 RTL
    case 0xC42561: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C42624.asm (unresolved).
bool execute_unresolved_c4_c42624_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C42624.asm:3 SEP #PROC_FLAGS::ACCUM8
    case 0xC42562: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C42624.asm:4 LDA HDMAEN_MIRROR
    case 0xC42564: cpu.execute_instruction<0xAD>(0x00001F, 3); return true;
    // src/unknown/C4/C42624.asm:5 AND #$00DF
    case 0xC42567: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000DF, 2); else cpu.execute_instruction<0x29>(0x008DDF, 3); return true;
    // src/unknown/C4/C42624.asm:6 STA HDMAEN_MIRROR
    case 0xC42569: cpu.execute_instruction<0x8D>(0x00001F, 3); return true;
    // src/unknown/C4/C42624.asm:6 STA HDMAEN_MIRROR
    // Overlapping static entry reached from 0xC42567.
    case 0xC4256A: cpu.execute_instruction<0x1F>(0x20C200, 4); return true;
    // src/unknown/C4/C42624.asm:7 REP #PROC_FLAGS::ACCUM8
    case 0xC4256C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C42624.asm:8 RTL
    case 0xC4256E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C42631.asm (unresolved).
bool execute_unresolved_c4_c42631_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C42631.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC4256F: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C4/C42631.asm:4 STZ UNKNOWN_7E3C22
    case 0xC42571: cpu.execute_instruction<0x9C>(0x003FA8, 3); return true;
    // src/unknown/C4/C42631.asm:5 STZ TRANSITION_BACKGROUND_X_VELOCITY
    case 0xC42574: cpu.execute_instruction<0x9C>(0x003FAA, 3); return true;
    // src/unknown/C4/C42631.asm:6 STZ UNKNOWN_7E3C26
    case 0xC42577: cpu.execute_instruction<0x9C>(0x003FAC, 3); return true;
    // src/unknown/C4/C42631.asm:7 STZ TRANSITION_BACKGROUND_Y_VELOCITY
    case 0xC4257A: cpu.execute_instruction<0x9C>(0x003FAE, 3); return true;
    // src/unknown/C4/C42631.asm:8 TAY
    case 0xC4257D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C42631.asm:9 TXA
    case 0xC4257E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C42631.asm:10 CLC
    case 0xC4257F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C42631.asm:11 ADC #$0080
    case 0xC42580: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x000080, 3); return true;
    // src/unknown/C4/C42631.asm:11 ADC #$0080
    // Overlapping static entry reached from 0xC42580.
    case 0xC42582: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C4/C42631.asm:12 AND #$00FF
    case 0xC42583: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C42631.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC42583.
    case 0xC42585: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C42631.asm:13 TAX
    case 0xC42586: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C42631.asm:14 PHX
    case 0xC42587: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/unknown/C4/C42631.asm:15 TYA
    case 0xC42588: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C42631.asm:16 JSL COSINE_SINE
    case 0xC42589: cpu.execute_instruction<0x22>(0xC0B3EA, 4); return true;
    // src/unknown/C4/C42631.asm:17 STA UNKNOWN_7E3C22 + 1
    case 0xC4258D: cpu.execute_instruction<0x8D>(0x003FA9, 3); return true;
    // src/unknown/C4/C42631.asm:18 LDA UNKNOWN_7E3C22 + 1
    case 0xC42590: cpu.execute_instruction<0xAD>(0x003FA9, 3); return true;
    // src/unknown/C4/C42631.asm:19 BPL @UNKNOWN0
    case 0xC42593: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // src/unknown/C4/C42631.asm:20 LDA #$FF00
    case 0xC42595: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00FF00, 3); return true;
    // src/unknown/C4/C42631.asm:20 LDA #$FF00
    // Overlapping static entry reached from 0xC42595.
    case 0xC42597: cpu.execute_instruction<0xFF>(0x3FAA0D, 4); return true;
    // src/unknown/C4/C42631.asm:21 ORA TRANSITION_BACKGROUND_X_VELOCITY
    case 0xC42598: cpu.execute_instruction<0x0D>(0x003FAA, 3); return true;
    // src/unknown/C4/C42631.asm:22 STA TRANSITION_BACKGROUND_X_VELOCITY
    case 0xC4259B: cpu.execute_instruction<0x8D>(0x003FAA, 3); return true;
    // src/unknown/C4/C42631.asm:24 PLX
    case 0xC4259E: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C4/C42631.asm:25 TYA
    case 0xC4259F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C42631.asm:26 JSL COSINE
    case 0xC425A0: cpu.execute_instruction<0x22>(0xC0B3DF, 4); return true;
    // src/unknown/C4/C42631.asm:27 STA UNKNOWN_7E3C26 + 1
    case 0xC425A4: cpu.execute_instruction<0x8D>(0x003FAD, 3); return true;
    // src/unknown/C4/C42631.asm:28 LDA UNKNOWN_7E3C26 + 1
    case 0xC425A7: cpu.execute_instruction<0xAD>(0x003FAD, 3); return true;
    // src/unknown/C4/C42631.asm:29 BPL @UNKNOWN1
    case 0xC425AA: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // src/unknown/C4/C42631.asm:30 LDA #$FF00
    case 0xC425AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00FF00, 3); return true;
    // src/unknown/C4/C42631.asm:30 LDA #$FF00
    // Overlapping static entry reached from 0xC425AC.
    case 0xC425AE: cpu.execute_instruction<0xFF>(0x3FAE0D, 4); return true;
    // src/unknown/C4/C42631.asm:31 ORA TRANSITION_BACKGROUND_Y_VELOCITY
    case 0xC425AF: cpu.execute_instruction<0x0D>(0x003FAE, 3); return true;
    // src/unknown/C4/C42631.asm:32 STA TRANSITION_BACKGROUND_Y_VELOCITY
    case 0xC425B2: cpu.execute_instruction<0x8D>(0x003FAE, 3); return true;
    // src/unknown/C4/C42631.asm:34 LDA BG1_X_POS
    case 0xC425B5: cpu.execute_instruction<0xAD>(0x000031, 3); return true;
    // src/unknown/C4/C42631.asm:35 STA TRANSITION_BACKGROUND_X
    case 0xC425B8: cpu.execute_instruction<0x8D>(0x003FB2, 3); return true;
    // src/unknown/C4/C42631.asm:36 LDA BG1_Y_POS
    case 0xC425BB: cpu.execute_instruction<0xAD>(0x000033, 3); return true;
    // src/unknown/C4/C42631.asm:37 STA TRANSITION_BACKGROUND_Y
    case 0xC425BE: cpu.execute_instruction<0x8D>(0x003FB6, 3); return true;
    // src/unknown/C4/C42631.asm:38 STZ UNREAD_7E3C2A
    case 0xC425C1: cpu.execute_instruction<0x9C>(0x003FB0, 3); return true;
    // src/unknown/C4/C42631.asm:39 STZ UNREAD_7E3C2E
    case 0xC425C4: cpu.execute_instruction<0x9C>(0x003FB4, 3); return true;
    // src/unknown/C4/C42631.asm:40 RTL
    case 0xC425C7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4268A.asm (unresolved).
bool execute_unresolved_c4_c4268a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C4268A.asm:3 LDA UNKNOWN_7E3C22
    case 0xC425C8: cpu.execute_instruction<0xAD>(0x003FA8, 3); return true;
    // src/unknown/C4/C4268A.asm:4 CLC
    case 0xC425CB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4268A.asm:5 ADC UNREAD_7E3C2A
    case 0xC425CC: cpu.execute_instruction<0x6D>(0x003FB0, 3); return true;
    // src/unknown/C4/C4268A.asm:6 STA UNREAD_7E3C2A
    case 0xC425CF: cpu.execute_instruction<0x8D>(0x003FB0, 3); return true;
    // src/unknown/C4/C4268A.asm:7 LDA TRANSITION_BACKGROUND_X_VELOCITY
    case 0xC425D2: cpu.execute_instruction<0xAD>(0x003FAA, 3); return true;
    // src/unknown/C4/C4268A.asm:8 ADC TRANSITION_BACKGROUND_X
    case 0xC425D5: cpu.execute_instruction<0x6D>(0x003FB2, 3); return true;
    // src/unknown/C4/C4268A.asm:9 STA TRANSITION_BACKGROUND_X
    case 0xC425D8: cpu.execute_instruction<0x8D>(0x003FB2, 3); return true;
    // src/unknown/C4/C4268A.asm:10 STA BG1_X_POS
    case 0xC425DB: cpu.execute_instruction<0x8D>(0x000031, 3); return true;
    // src/unknown/C4/C4268A.asm:11 STA BG2_X_POS
    case 0xC425DE: cpu.execute_instruction<0x8D>(0x000035, 3); return true;
    // src/unknown/C4/C4268A.asm:12 LDA UNKNOWN_7E3C26
    case 0xC425E1: cpu.execute_instruction<0xAD>(0x003FAC, 3); return true;
    // src/unknown/C4/C4268A.asm:13 CLC
    case 0xC425E4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4268A.asm:14 ADC UNREAD_7E3C2E
    case 0xC425E5: cpu.execute_instruction<0x6D>(0x003FB4, 3); return true;
    // src/unknown/C4/C4268A.asm:15 STA UNREAD_7E3C2E
    case 0xC425E8: cpu.execute_instruction<0x8D>(0x003FB4, 3); return true;
    // src/unknown/C4/C4268A.asm:16 LDA TRANSITION_BACKGROUND_Y_VELOCITY
    case 0xC425EB: cpu.execute_instruction<0xAD>(0x003FAE, 3); return true;
    // src/unknown/C4/C4268A.asm:17 ADC TRANSITION_BACKGROUND_Y
    case 0xC425EE: cpu.execute_instruction<0x6D>(0x003FB6, 3); return true;
    // src/unknown/C4/C4268A.asm:18 STA TRANSITION_BACKGROUND_Y
    case 0xC425F1: cpu.execute_instruction<0x8D>(0x003FB6, 3); return true;
    // src/unknown/C4/C4268A.asm:19 STA BG1_Y_POS
    case 0xC425F4: cpu.execute_instruction<0x8D>(0x000033, 3); return true;
    // src/unknown/C4/C4268A.asm:20 STA BG2_Y_POS
    case 0xC425F7: cpu.execute_instruction<0x8D>(0x000037, 3); return true;
    // src/unknown/C4/C4268A.asm:21 LDA BG1_X_POS
    case 0xC425FA: cpu.execute_instruction<0xAD>(0x000031, 3); return true;
    // src/unknown/C4/C4268A.asm:22 LDX BG1_Y_POS
    case 0xC425FD: cpu.execute_instruction<0xAE>(0x000033, 3); return true;
    // src/unknown/C4/C4268A.asm:23 JSL UNKNOWN_C01731
    case 0xC42600: cpu.execute_instruction<0x22>(0xC01747, 4); return true;
    // src/unknown/C4/C4268A.asm:24 RTL
    case 0xC42604: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C426C7.asm (unresolved).
bool execute_unresolved_c4_c426c7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C426C7.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC42605: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C4/C426C7.asm:4 LDX #$0000
    case 0xC42607: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C426C7.asm:4 LDX #$0000
    // Overlapping static entry reached from 0xC42607.
    case 0xC42609: cpu.execute_instruction<0x00>(0x0000BD, 2); return true;
    // src/unknown/C4/C426C7.asm:6 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC4260A: cpu.execute_instruction<0xBD>(0x000A58, 3); return true;
    // src/unknown/C4/C426C7.asm:7 BMI @UNKNOWN1
    case 0xC4260D: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/unknown/C4/C426C7.asm:8 LDA ENTITY_ABS_X_TABLE,X
    case 0xC4260F: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C4/C426C7.asm:9 SEC
    case 0xC42612: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C426C7.asm:10 SBC BG1_X_POS
    case 0xC42613: cpu.execute_instruction<0xED>(0x000031, 3); return true;
    // src/unknown/C4/C426C7.asm:11 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC42616: cpu.execute_instruction<0x9D>(0x000B0C, 3); return true;
    // src/unknown/C4/C426C7.asm:12 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC42619: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C4/C426C7.asm:13 SEC
    case 0xC4261C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C426C7.asm:14 SBC BG1_Y_POS
    case 0xC4261D: cpu.execute_instruction<0xED>(0x000033, 3); return true;
    // src/unknown/C4/C426C7.asm:15 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC42620: cpu.execute_instruction<0x9D>(0x000B48, 3); return true;
    // src/unknown/C4/C426C7.asm:17 INX
    case 0xC42623: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C426C7.asm:18 INX
    case 0xC42624: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C426C7.asm:19 CPX #$003C
    case 0xC42625: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00003C, 2); else cpu.execute_instruction<0xE0>(0x00003C, 3); return true;
    // src/unknown/C4/C426C7.asm:19 CPX #$003C
    // Overlapping static entry reached from 0xC42625.
    case 0xC42627: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C426C7.asm:20 BNE @UNKNOWN0
    case 0xC42628: cpu.execute_instruction<0xD0>(0x0000E0, 2); return true;
    // src/unknown/C4/C426C7.asm:21 RTL
    case 0xC4262A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C426ED.asm (unresolved).
bool execute_unresolved_c4_c426ed_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C426ED.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC4262B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C426ED.asm:4 PHD
    case 0xC4262D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:5 PHA
    case 0xC4262E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:6 TDC
    case 0xC4262F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:7 SEC
    case 0xC42630: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:8 SBC #$0002
    case 0xC42631: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000002, 2); else cpu.execute_instruction<0xE9>(0x000002, 3); return true;
    // src/unknown/C4/C426ED.asm:8 SBC #$0002
    // Overlapping static entry reached from 0xC42631.
    case 0xC42633: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C4/C426ED.asm:9 TCD
    case 0xC42634: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:10 PLA
    case 0xC42635: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:11 LDX #$0000
    case 0xC42636: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C426ED.asm:11 LDX #$0000
    // Overlapping static entry reached from 0xC42636.
    case 0xC42638: cpu.execute_instruction<0x00>(0x0000BF, 2); return true;
    // src/unknown/C4/C426ED.asm:13 LDA BUFFER + $200,X
    case 0xC42639: cpu.execute_instruction<0xBF>(0x7F0200, 4); return true;
    // src/unknown/C4/C426ED.asm:14 CLC
    case 0xC4263D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:15 ADC BUFFER + $800,X
    case 0xC4263E: cpu.execute_instruction<0x7F>(0x7F0800, 4); return true;
    // src/unknown/C4/C426ED.asm:16 STA BUFFER + $800,X
    case 0xC42642: cpu.execute_instruction<0x9F>(0x7F0800, 4); return true;
    // src/unknown/C4/C426ED.asm:17 BPL @UNKNOWN1
    case 0xC42646: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // src/unknown/C4/C426ED.asm:18 LDA #$0000
    case 0xC42648: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C426ED.asm:18 LDA #$0000
    // Overlapping static entry reached from 0xC42648.
    case 0xC4264A: cpu.execute_instruction<0x00>(0x00009F, 2); return true;
    // src/unknown/C4/C426ED.asm:19 STA BUFFER + $200,X
    case 0xC4264B: cpu.execute_instruction<0x9F>(0x7F0200, 4); return true;
    // src/unknown/C4/C426ED.asm:20 BRA @UNKNOWN2
    case 0xC4264F: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C4/C426ED.asm:22 AND #$1F00
    case 0xC42651: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001F00, 3); return true;
    // src/unknown/C4/C426ED.asm:22 AND #$1F00
    // Overlapping static entry reached from 0xC42651.
    case 0xC42653: cpu.execute_instruction<0x1F>(0x1F00C9, 4); return true;
    // src/unknown/C4/C426ED.asm:23 CMP #$1F00
    case 0xC42654: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x001F00, 3); return true;
    // src/unknown/C4/C426ED.asm:23 CMP #$1F00
    // Overlapping static entry reached from 0xC42654.
    case 0xC42656: cpu.execute_instruction<0x1F>(0xA90AD0, 4); return true;
    // src/unknown/C4/C426ED.asm:24 BNE @UNKNOWN2
    case 0xC42657: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C4/C426ED.asm:25 LDA #$0000
    case 0xC42659: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C426ED.asm:25 LDA #$0000
    // Overlapping static entry reached from 0xC42656.
    case 0xC4265A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C426ED.asm:25 LDA #$0000
    // Overlapping static entry reached from 0xC42659.
    case 0xC4265B: cpu.execute_instruction<0x00>(0x00009F, 2); return true;
    // src/unknown/C4/C426ED.asm:26 STA BUFFER + $200,X
    case 0xC4265C: cpu.execute_instruction<0x9F>(0x7F0200, 4); return true;
    // src/unknown/C4/C426ED.asm:27 LDA #$1F00
    case 0xC42660: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001F00, 3); return true;
    // src/unknown/C4/C426ED.asm:27 LDA #$1F00
    // Overlapping static entry reached from 0xC42660.
    case 0xC42662: cpu.execute_instruction<0x1F>(0x0085EB, 4); return true;
    // src/unknown/C4/C426ED.asm:29 XBA
    case 0xC42663: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:30 STA $00
    case 0xC42664: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C426ED.asm:31 LDA BUFFER + $400,X
    case 0xC42666: cpu.execute_instruction<0xBF>(0x7F0400, 4); return true;
    // src/unknown/C4/C426ED.asm:32 CLC
    case 0xC4266A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:33 ADC BUFFER + $A00,X
    case 0xC4266B: cpu.execute_instruction<0x7F>(0x7F0A00, 4); return true;
    // src/unknown/C4/C426ED.asm:34 STA BUFFER + $A00,X
    case 0xC4266F: cpu.execute_instruction<0x9F>(0x7F0A00, 4); return true;
    // src/unknown/C4/C426ED.asm:35 BPL @UNKNOWN3
    case 0xC42673: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // src/unknown/C4/C426ED.asm:36 LDA #$0000
    case 0xC42675: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C426ED.asm:36 LDA #$0000
    // Overlapping static entry reached from 0xC42675.
    case 0xC42677: cpu.execute_instruction<0x00>(0x00009F, 2); return true;
    // src/unknown/C4/C426ED.asm:37 STA BUFFER + $400,X
    case 0xC42678: cpu.execute_instruction<0x9F>(0x7F0400, 4); return true;
    // src/unknown/C4/C426ED.asm:38 BRA @UNKNOWN4
    case 0xC4267C: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C4/C426ED.asm:40 AND #$1F00
    case 0xC4267E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001F00, 3); return true;
    // src/unknown/C4/C426ED.asm:40 AND #$1F00
    // Overlapping static entry reached from 0xC4267E.
    case 0xC42680: cpu.execute_instruction<0x1F>(0x1F00C9, 4); return true;
    // src/unknown/C4/C426ED.asm:41 CMP #$1F00
    case 0xC42681: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x001F00, 3); return true;
    // src/unknown/C4/C426ED.asm:41 CMP #$1F00
    // Overlapping static entry reached from 0xC42681.
    case 0xC42683: cpu.execute_instruction<0x1F>(0xA90AD0, 4); return true;
    // src/unknown/C4/C426ED.asm:42 BNE @UNKNOWN4
    case 0xC42684: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C4/C426ED.asm:43 LDA #$0000
    case 0xC42686: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C426ED.asm:43 LDA #$0000
    // Overlapping static entry reached from 0xC42683.
    case 0xC42687: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C426ED.asm:43 LDA #$0000
    // Overlapping static entry reached from 0xC42686.
    case 0xC42688: cpu.execute_instruction<0x00>(0x00009F, 2); return true;
    // src/unknown/C4/C426ED.asm:44 STA BUFFER + $400,X
    case 0xC42689: cpu.execute_instruction<0x9F>(0x7F0400, 4); return true;
    // src/unknown/C4/C426ED.asm:45 LDA #$1F00
    case 0xC4268D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001F00, 3); return true;
    // src/unknown/C4/C426ED.asm:45 LDA #$1F00
    // Overlapping static entry reached from 0xC4268D.
    case 0xC4268F: cpu.execute_instruction<0x1F>(0x4A4A4A, 4); return true;
    // src/unknown/C4/C426ED.asm:47 LSR
    case 0xC42690: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:48 LSR
    case 0xC42691: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:49 LSR
    case 0xC42692: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:50 ORA $00
    case 0xC42693: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/unknown/C4/C426ED.asm:51 STA $00
    case 0xC42695: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C426ED.asm:52 LDA BUFFER + $600,X
    case 0xC42697: cpu.execute_instruction<0xBF>(0x7F0600, 4); return true;
    // src/unknown/C4/C426ED.asm:53 CLC
    case 0xC4269B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:54 ADC BUFFER + $C00,X
    case 0xC4269C: cpu.execute_instruction<0x7F>(0x7F0C00, 4); return true;
    // src/unknown/C4/C426ED.asm:55 STA BUFFER + $C00,X
    case 0xC426A0: cpu.execute_instruction<0x9F>(0x7F0C00, 4); return true;
    // src/unknown/C4/C426ED.asm:56 BPL @UNKNOWN5
    case 0xC426A4: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // src/unknown/C4/C426ED.asm:57 LDA #$0000
    case 0xC426A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C426ED.asm:57 LDA #$0000
    // Overlapping static entry reached from 0xC426A6.
    case 0xC426A8: cpu.execute_instruction<0x00>(0x00009F, 2); return true;
    // src/unknown/C4/C426ED.asm:58 STA BUFFER + $400,X
    case 0xC426A9: cpu.execute_instruction<0x9F>(0x7F0400, 4); return true;
    // src/unknown/C4/C426ED.asm:59 BRA @UNKNOWN6
    case 0xC426AD: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C4/C426ED.asm:61 AND #$1F00
    case 0xC426AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001F00, 3); return true;
    // src/unknown/C4/C426ED.asm:61 AND #$1F00
    // Overlapping static entry reached from 0xC426AF.
    case 0xC426B1: cpu.execute_instruction<0x1F>(0x1F00C9, 4); return true;
    // src/unknown/C4/C426ED.asm:62 CMP #$1F00
    case 0xC426B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x001F00, 3); return true;
    // src/unknown/C4/C426ED.asm:62 CMP #$1F00
    // Overlapping static entry reached from 0xC426B2.
    case 0xC426B4: cpu.execute_instruction<0x1F>(0xA90AD0, 4); return true;
    // src/unknown/C4/C426ED.asm:63 BNE @UNKNOWN6
    case 0xC426B5: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/unknown/C4/C426ED.asm:64 LDA #$0000
    case 0xC426B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C426ED.asm:64 LDA #$0000
    // Overlapping static entry reached from 0xC426B4.
    case 0xC426B8: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C426ED.asm:64 LDA #$0000
    // Overlapping static entry reached from 0xC426B7.
    case 0xC426B9: cpu.execute_instruction<0x00>(0x00009F, 2); return true;
    // src/unknown/C4/C426ED.asm:65 STA BUFFER + $600,X
    case 0xC426BA: cpu.execute_instruction<0x9F>(0x7F0600, 4); return true;
    // src/unknown/C4/C426ED.asm:66 LDA #$1F00
    case 0xC426BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001F00, 3); return true;
    // src/unknown/C4/C426ED.asm:66 LDA #$1F00
    // Overlapping static entry reached from 0xC426BE.
    case 0xC426C0: cpu.execute_instruction<0x1F>(0x050A0A, 4); return true;
    // src/unknown/C4/C426ED.asm:68 ASL
    case 0xC426C1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:69 ASL
    case 0xC426C2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:70 ORA $00
    case 0xC426C3: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/unknown/C4/C426ED.asm:70 ORA $00
    // Overlapping static entry reached from 0xC426C0.
    case 0xC426C4: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C4/C426ED.asm:71 STA PALETTES,X
    case 0xC426C5: cpu.execute_instruction<0x9D>(0x000200, 3); return true;
    // src/unknown/C4/C426ED.asm:72 INX
    case 0xC426C8: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:73 INX
    case 0xC426C9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:74 CPX #$0200
    case 0xC426CA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000200, 3); return true;
    // src/unknown/C4/C426ED.asm:74 CPX #$0200
    // Overlapping static entry reached from 0xC426CA.
    case 0xC426CC: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C426ED.asm:75 BNEL @UNKNOWN0
    case 0xC426CD: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C426ED.asm:75 BNEL @UNKNOWN0
    case 0xC426CF: cpu.execute_instruction<0x4C>(0x002639, 3); return true;
    // src/unknown/C4/C426ED.asm:76 SEP #PROC_FLAGS::ACCUM8
    case 0xC426D2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C426ED.asm:77 LDA #PALETTE_UPLOAD::FULL
    case 0xC426D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/unknown/C4/C426ED.asm:78 STA PALETTE_UPLOAD_MODE
    case 0xC426D6: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/unknown/C4/C426ED.asm:78 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC426D4.
    case 0xC426D7: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/unknown/C4/C426ED.asm:79 REP #PROC_FLAGS::ACCUM8
    case 0xC426D9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C426ED.asm:80 PLD
    case 0xC426DB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C426ED.asm:81 RTL
    case 0xC426DC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4283F.asm (unresolved).
bool execute_unresolved_c4_c4283f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C4283F.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC4277D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4283F.asm:4 PHD
    case 0xC4277F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:5 PHA
    case 0xC42780: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:6 TDC
    case 0xC42781: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:7 SEC
    case 0xC42782: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:8 SBC #$0008
    case 0xC42783: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/unknown/C4/C4283F.asm:8 SBC #$0008
    // Overlapping static entry reached from 0xC42783.
    case 0xC42785: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C4/C4283F.asm:9 TCD
    case 0xC42786: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:10 PLA
    case 0xC42787: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:11 PHY
    case 0xC42788: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:12 STX $04
    case 0xC42789: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C4/C4283F.asm:13 ASL
    case 0xC4278B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:14 TAY
    case 0xC4278C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:15 LDA #$007F
    case 0xC4278D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // src/unknown/C4/C4283F.asm:15 LDA #$007F
    // Overlapping static entry reached from 0xC4278D.
    case 0xC4278F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4283F.asm:16 STA $06
    case 0xC42790: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4283F.asm:17 LDA ENTITY_GRAPHICS_PTR_HIGH,Y
    case 0xC42792: cpu.execute_instruction<0xB9>(0x002E04, 3); return true;
    // src/unknown/C4/C4283F.asm:18 STA $02
    case 0xC42795: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4283F.asm:19 LDA ENTITY_DIRECTIONS,Y
    case 0xC42797: cpu.execute_instruction<0xB9>(0x002EF4, 3); return true;
    // src/unknown/C4/C4283F.asm:20 ASL
    case 0xC4279A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:21 TAX
    case 0xC4279B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:22 LDA SPRITE_DIRECTION_MAPPING_8_DIRECTION,X
    case 0xC4279C: cpu.execute_instruction<0xBF>(0xC0A602, 4); return true;
    // src/unknown/C4/C4283F.asm:23 ASL
    case 0xC427A0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:24 ASL
    case 0xC427A1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:25 CLC
    case 0xC427A2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:26 ADC ENTITY_GRAPHICS_PTR_LOW,Y
    case 0xC427A3: cpu.execute_instruction<0x79>(0x002DC8, 3); return true;
    // src/unknown/C4/C4283F.asm:27 ADC ENTITY_ANIMATION_FRAME,Y
    case 0xC427A6: cpu.execute_instruction<0x79>(0x0010E8, 3); return true;
    // src/unknown/C4/C4283F.asm:28 STA $00
    case 0xC427A9: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4283F.asm:29 LDA [$00]
    case 0xC427AB: cpu.execute_instruction<0xA7>(0x000000, 2); return true;
    // src/unknown/C4/C4283F.asm:30 AND #$FFF0
    case 0xC427AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x00FFF0, 3); return true;
    // src/unknown/C4/C4283F.asm:30 AND #$FFF0
    // Overlapping static entry reached from 0xC427AD.
    case 0xC427AF: cpu.execute_instruction<0xFF>(0xB90085, 4); return true;
    // src/unknown/C4/C4283F.asm:31 STA $00
    case 0xC427B0: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4283F.asm:32 LDA ENTITY_GRAPHICS_SPRITE_BANK,Y
    case 0xC427B2: cpu.execute_instruction<0xB9>(0x002E40, 3); return true;
    // src/unknown/C4/C4283F.asm:32 LDA ENTITY_GRAPHICS_SPRITE_BANK,Y
    // Overlapping static entry reached from 0xC427AF.
    case 0xC427B3: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:33 STA $02
    case 0xC427B5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4283F.asm:34 PLY
    case 0xC427B7: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:36 LDA [$00],Y
    case 0xC427B8: cpu.execute_instruction<0xB7>(0x000000, 2); return true;
    // src/unknown/C4/C4283F.asm:37 STA [$04],Y
    case 0xC427BA: cpu.execute_instruction<0x97>(0x000004, 2); return true;
    // src/unknown/C4/C4283F.asm:38 DEY
    case 0xC427BC: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:39 DEY
    case 0xC427BD: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:40 BPL @UNKNOWN0
    case 0xC427BE: cpu.execute_instruction<0x10>(0x0000F8, 2); return true;
    // src/unknown/C4/C4283F.asm:41 PLD
    case 0xC427C0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C4283F.asm:42 RTL
    case 0xC427C1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C42884.asm (unresolved).
bool execute_unresolved_c4_c42884_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C42884.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC427C2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C42884.asm:4 PHD
    case 0xC427C4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:5 PHA
    case 0xC427C5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:6 TDC
    case 0xC427C6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:7 SEC
    case 0xC427C7: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:8 SBC #$0008
    case 0xC427C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/unknown/C4/C42884.asm:8 SBC #$0008
    // Overlapping static entry reached from 0xC427C8.
    case 0xC427CA: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C4/C42884.asm:9 TCD
    case 0xC427CB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:10 PLA
    case 0xC427CC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:11 PHY
    case 0xC427CD: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:12 STX $04
    case 0xC427CE: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C4/C42884.asm:13 ASL
    case 0xC427D0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:14 TAY
    case 0xC427D1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:15 LDA #$007F
    case 0xC427D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // src/unknown/C4/C42884.asm:15 LDA #$007F
    // Overlapping static entry reached from 0xC427D2.
    case 0xC427D4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C42884.asm:16 STA $06
    case 0xC427D5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C42884.asm:17 LDA ENTITY_GRAPHICS_PTR_HIGH,Y
    case 0xC427D7: cpu.execute_instruction<0xB9>(0x002E04, 3); return true;
    // src/unknown/C4/C42884.asm:18 STA $02
    case 0xC427DA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C42884.asm:19 LDA ENTITY_GRAPHICS_PTR_LOW,Y
    case 0xC427DC: cpu.execute_instruction<0xB9>(0x002DC8, 3); return true;
    // src/unknown/C4/C42884.asm:20 STA $00
    case 0xC427DF: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C42884.asm:21 LDA ENTITY_DIRECTIONS,Y
    case 0xC427E1: cpu.execute_instruction<0xB9>(0x002EF4, 3); return true;
    // src/unknown/C4/C42884.asm:22 ASL
    case 0xC427E4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:23 TAX
    case 0xC427E5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:24 LDA SPRITE_DIRECTION_MAPPING_4_DIRECTION,X
    case 0xC427E6: cpu.execute_instruction<0xBF>(0xC0A5EA, 4); return true;
    // src/unknown/C4/C42884.asm:25 BEQ @UNKNOWN1
    case 0xC427EA: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C4/C42884.asm:26 TAX
    case 0xC427EC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:27 LDA $00
    case 0xC427ED: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C42884.asm:28 CLC
    case 0xC427EF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:30 ADC #$0004
    case 0xC427F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000004, 2); else cpu.execute_instruction<0x69>(0x000004, 3); return true;
    // src/unknown/C4/C42884.asm:30 ADC #$0004
    // Overlapping static entry reached from 0xC427F0.
    case 0xC427F2: cpu.execute_instruction<0x00>(0x0000CA, 2); return true;
    // src/unknown/C4/C42884.asm:31 DEX
    case 0xC427F3: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:32 BNE @UNKNOWN0
    case 0xC427F4: cpu.execute_instruction<0xD0>(0x0000FA, 2); return true;
    // src/unknown/C4/C42884.asm:33 STA $00
    case 0xC427F6: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C42884.asm:35 LDA [$00]
    case 0xC427F8: cpu.execute_instruction<0xA7>(0x000000, 2); return true;
    // src/unknown/C4/C42884.asm:36 AND #$FFF0
    case 0xC427FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x00FFF0, 3); return true;
    // src/unknown/C4/C42884.asm:36 AND #$FFF0
    // Overlapping static entry reached from 0xC427FA.
    case 0xC427FC: cpu.execute_instruction<0xFF>(0xB90085, 4); return true;
    // src/unknown/C4/C42884.asm:37 STA $00
    case 0xC427FD: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C42884.asm:38 LDA ENTITY_GRAPHICS_SPRITE_BANK,Y
    case 0xC427FF: cpu.execute_instruction<0xB9>(0x002E40, 3); return true;
    // src/unknown/C4/C42884.asm:38 LDA ENTITY_GRAPHICS_SPRITE_BANK,Y
    // Overlapping static entry reached from 0xC427FC.
    case 0xC42800: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:39 STA $02
    case 0xC42802: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C42884.asm:40 PLY
    case 0xC42804: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:42 LDA [$00],Y
    case 0xC42805: cpu.execute_instruction<0xB7>(0x000000, 2); return true;
    // src/unknown/C4/C42884.asm:43 STA [$04],Y
    case 0xC42807: cpu.execute_instruction<0x97>(0x000004, 2); return true;
    // src/unknown/C4/C42884.asm:44 DEY
    case 0xC42809: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:45 DEY
    case 0xC4280A: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:46 BPL @UNKNOWN2
    case 0xC4280B: cpu.execute_instruction<0x10>(0x0000F8, 2); return true;
    // src/unknown/C4/C42884.asm:47 PLD
    case 0xC4280D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C42884.asm:48 RTL
    case 0xC4280E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C428D1.asm (unresolved).
bool execute_unresolved_c4_c428d1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C428D1.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC4280F: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C4/C428D1.asm:4 REP #PROC_FLAGS::ACCUM8
    case 0xC42811: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C428D1.asm:5 PHD
    case 0xC42813: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:6 PHA
    case 0xC42814: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:7 TDC
    case 0xC42815: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:8 SEC
    case 0xC42816: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:9 SBC #$0008
    case 0xC42817: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/unknown/C4/C428D1.asm:9 SBC #$0008
    // Overlapping static entry reached from 0xC42817.
    case 0xC42819: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C4/C428D1.asm:10 TCD
    case 0xC4281A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:11 PLA
    case 0xC4281B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:12 STA $00
    case 0xC4281C: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C428D1.asm:13 STX $04
    case 0xC4281E: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C4/C428D1.asm:14 LDA #$007F
    case 0xC42820: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // src/unknown/C4/C428D1.asm:14 LDA #$007F
    // Overlapping static entry reached from 0xC42820.
    case 0xC42822: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C428D1.asm:15 STA $02
    case 0xC42823: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C428D1.asm:16 STA $06
    case 0xC42825: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C428D1.asm:17 LDA $16
    case 0xC42827: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C428D1.asm:18 ASL
    case 0xC42829: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:19 TAX
    case 0xC4282A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:21 LDA [$04],Y
    case 0xC4282B: cpu.execute_instruction<0xB7>(0x000004, 2); return true;
    // src/unknown/C4/C428D1.asm:22 STA [$00],Y
    case 0xC4282D: cpu.execute_instruction<0x97>(0x000000, 2); return true;
    // src/unknown/C4/C428D1.asm:23 TYA
    case 0xC4282F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:24 CLC
    case 0xC42830: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:25 ADC #$0010
    case 0xC42831: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C428D1.asm:25 ADC #$0010
    // Overlapping static entry reached from 0xC42831.
    case 0xC42833: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C428D1.asm:26 TAY
    case 0xC42834: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:27 DEX
    case 0xC42835: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:28 BNE @UNKNOWN0
    case 0xC42836: cpu.execute_instruction<0xD0>(0x0000F3, 2); return true;
    // src/unknown/C4/C428D1.asm:29 PLD
    case 0xC42838: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C428D1.asm:30 RTL
    case 0xC42839: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C428FC.asm (unresolved).
bool execute_unresolved_c4_c428fc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C428FC.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC4283A: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // src/unknown/C4/C428FC.asm:4 REP #PROC_FLAGS::ACCUM8
    case 0xC4283C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C428FC.asm:5 PHD
    case 0xC4283E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:6 PHA
    case 0xC4283F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:7 TDC
    case 0xC42840: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:8 SEC
    case 0xC42841: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:9 SBC #$0010
    case 0xC42842: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/unknown/C4/C428FC.asm:9 SBC #$0010
    // Overlapping static entry reached from 0xC42842.
    case 0xC42844: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C4/C428FC.asm:10 TCD
    case 0xC42845: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:11 PLA
    case 0xC42846: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:12 STA $00
    case 0xC42847: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C428FC.asm:13 STX $04
    case 0xC42849: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C4/C428FC.asm:14 LDA #$007F
    case 0xC4284B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // src/unknown/C4/C428FC.asm:14 LDA #$007F
    // Overlapping static entry reached from 0xC4284B.
    case 0xC4284D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C428FC.asm:15 STA $02
    case 0xC4284E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C428FC.asm:16 STA $06
    case 0xC42850: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C428FC.asm:17 TYA
    case 0xC42852: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:18 AND #$0007
    case 0xC42853: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C4/C428FC.asm:18 AND #$0007
    // Overlapping static entry reached from 0xC42853.
    case 0xC42855: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C428FC.asm:19 ASL
    case 0xC42856: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:20 TAX
    case 0xC42857: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:21 LDA f:UNKNOWN_C42955,X
    case 0xC42858: cpu.execute_instruction<0xBF>(0xC42893, 4); return true;
    // src/unknown/C4/C428FC.asm:22 STA $08
    case 0xC4285C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C428FC.asm:23 EOR #$FFFF
    case 0xC4285E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C428FC.asm:23 EOR #$FFFF
    // Overlapping static entry reached from 0xC4285E.
    case 0xC42860: cpu.execute_instruction<0xFF>(0x980A85, 4); return true;
    // src/unknown/C4/C428FC.asm:24 STA $0A
    case 0xC42861: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C428FC.asm:25 TYA
    case 0xC42863: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:26 AND #$FFF8
    case 0xC42864: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x00FFF8, 3); return true;
    // src/unknown/C4/C428FC.asm:26 AND #$FFF8
    // Overlapping static entry reached from 0xC42864.
    case 0xC42866: cpu.execute_instruction<0xFF>(0xA80A0A, 4); return true;
    // src/unknown/C4/C428FC.asm:27 ASL
    case 0xC42867: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:28 ASL
    case 0xC42868: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:29 TAY
    case 0xC42869: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:30 LDA $1E
    case 0xC4286A: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C428FC.asm:31 LSR
    case 0xC4286C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:32 LSR
    case 0xC4286D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:33 LSR
    case 0xC4286E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:34 STA $0E
    case 0xC4286F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C428FC.asm:36 LDX #$0010
    case 0xC42871: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/unknown/C4/C428FC.asm:36 LDX #$0010
    // Overlapping static entry reached from 0xC42871.
    case 0xC42873: cpu.execute_instruction<0x00>(0x00005A, 2); return true;
    // src/unknown/C4/C428FC.asm:37 PHY
    case 0xC42874: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:39 LDA [$04],Y
    case 0xC42875: cpu.execute_instruction<0xB7>(0x000004, 2); return true;
    // src/unknown/C4/C428FC.asm:40 AND $08
    case 0xC42877: cpu.execute_instruction<0x25>(0x000008, 2); return true;
    // src/unknown/C4/C428FC.asm:41 STA $0C
    case 0xC42879: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C428FC.asm:42 LDA [$00],Y
    case 0xC4287B: cpu.execute_instruction<0xB7>(0x000000, 2); return true;
    // src/unknown/C4/C428FC.asm:43 AND $0A
    case 0xC4287D: cpu.execute_instruction<0x25>(0x00000A, 2); return true;
    // src/unknown/C4/C428FC.asm:44 ORA $0C
    case 0xC4287F: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // src/unknown/C4/C428FC.asm:45 STA [$00],Y
    case 0xC42881: cpu.execute_instruction<0x97>(0x000000, 2); return true;
    // src/unknown/C4/C428FC.asm:46 INY
    case 0xC42883: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:47 INY
    case 0xC42884: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:48 DEX
    case 0xC42885: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:49 BNE @UNKNOWN1
    case 0xC42886: cpu.execute_instruction<0xD0>(0x0000ED, 2); return true;
    // src/unknown/C4/C428FC.asm:50 PLA
    case 0xC42888: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:51 CLC
    case 0xC42889: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:52 ADC $20
    case 0xC4288A: cpu.execute_instruction<0x65>(0x000020, 2); return true;
    // src/unknown/C4/C428FC.asm:53 TAY
    case 0xC4288C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:54 DEC $0E
    case 0xC4288D: cpu.execute_instruction<0xC6>(0x00000E, 2); return true;
    // src/unknown/C4/C428FC.asm:55 BNE @UNKNOWN0
    case 0xC4288F: cpu.execute_instruction<0xD0>(0x0000E0, 2); return true;
    // src/unknown/C4/C428FC.asm:56 PLD
    case 0xC42891: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C428FC.asm:57 RTL
    case 0xC42892: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C42965.asm (unresolved).
bool execute_unresolved_c4_c42965_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C42965.asm:3 REP #PROC_FLAGS::ACCUM8
    case 0xC428A3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C42965.asm:4 PHD
    case 0xC428A5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:5 PHA
    case 0xC428A6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:6 TDC
    case 0xC428A7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:7 SEC
    case 0xC428A8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:8 SBC #$000E
    case 0xC428A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000E, 2); else cpu.execute_instruction<0xE9>(0x00000E, 3); return true;
    // src/unknown/C4/C42965.asm:8 SBC #$000E
    // Overlapping static entry reached from 0xC428A9.
    case 0xC428AB: cpu.execute_instruction<0x00>(0x00005B, 2); return true;
    // src/unknown/C4/C42965.asm:9 TCD
    case 0xC428AC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:10 PLA
    case 0xC428AD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:11 STA $00
    case 0xC428AE: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C42965.asm:12 STX $04
    case 0xC428B0: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C4/C42965.asm:13 LDA #$007F
    case 0xC428B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // src/unknown/C4/C42965.asm:13 LDA #$007F
    // Overlapping static entry reached from 0xC428B2.
    case 0xC428B4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C42965.asm:14 STA $02
    case 0xC428B5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C42965.asm:15 STA $06
    case 0xC428B7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C42965.asm:16 LDA $1C
    case 0xC428B9: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C42965.asm:17 ASL
    case 0xC428BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:18 TAX
    case 0xC428BC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:19 LDA f:UNKNOWN_C42955,X
    case 0xC428BD: cpu.execute_instruction<0xBF>(0xC42893, 4); return true;
    // src/unknown/C4/C42965.asm:20 STA $08
    case 0xC428C1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C42965.asm:21 EOR #$FFFF
    case 0xC428C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C42965.asm:21 EOR #$FFFF
    // Overlapping static entry reached from 0xC428C3.
    case 0xC428C5: cpu.execute_instruction<0xFF>(0xB70A85, 4); return true;
    // src/unknown/C4/C42965.asm:22 STA $0A
    case 0xC428C6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C42965.asm:23 LDA [$04],Y
    case 0xC428C8: cpu.execute_instruction<0xB7>(0x000004, 2); return true;
    // src/unknown/C4/C42965.asm:23 LDA [$04],Y
    // Overlapping static entry reached from 0xC428C5.
    case 0xC428C9: cpu.execute_instruction<0x04>(0x000025, 2); return true;
    // src/unknown/C4/C42965.asm:24 AND $08
    case 0xC428CA: cpu.execute_instruction<0x25>(0x000008, 2); return true;
    // src/unknown/C4/C42965.asm:24 AND $08
    // Overlapping static entry reached from 0xC428C9.
    case 0xC428CB: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:25 STA $0C
    case 0xC428CC: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C42965.asm:26 LDA [$00],Y
    case 0xC428CE: cpu.execute_instruction<0xB7>(0x000000, 2); return true;
    // src/unknown/C4/C42965.asm:27 AND $0A
    case 0xC428D0: cpu.execute_instruction<0x25>(0x00000A, 2); return true;
    // src/unknown/C4/C42965.asm:28 ORA $0C
    case 0xC428D2: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // src/unknown/C4/C42965.asm:29 STA [$00],Y
    case 0xC428D4: cpu.execute_instruction<0x97>(0x000000, 2); return true;
    // src/unknown/C4/C42965.asm:30 TYA
    case 0xC428D6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:31 CLC
    case 0xC428D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:32 ADC #$0010
    case 0xC428D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C42965.asm:32 ADC #$0010
    // Overlapping static entry reached from 0xC428D8.
    case 0xC428DA: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C42965.asm:33 TAY
    case 0xC428DB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:34 LDA [$04],Y
    case 0xC428DC: cpu.execute_instruction<0xB7>(0x000004, 2); return true;
    // src/unknown/C4/C42965.asm:35 AND $08
    case 0xC428DE: cpu.execute_instruction<0x25>(0x000008, 2); return true;
    // src/unknown/C4/C42965.asm:36 STA $0C
    case 0xC428E0: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C42965.asm:37 LDA [$00],Y
    case 0xC428E2: cpu.execute_instruction<0xB7>(0x000000, 2); return true;
    // src/unknown/C4/C42965.asm:38 AND $0A
    case 0xC428E4: cpu.execute_instruction<0x25>(0x00000A, 2); return true;
    // src/unknown/C4/C42965.asm:39 ORA $0C
    case 0xC428E6: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // src/unknown/C4/C42965.asm:40 STA [$00],Y
    case 0xC428E8: cpu.execute_instruction<0x97>(0x000000, 2); return true;
    // src/unknown/C4/C42965.asm:41 PLD
    case 0xC428EA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C42965.asm:42 RTL
    case 0xC428EB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C429AE.asm (unresolved).
bool execute_unresolved_c4_c429ae_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C429AE.asm:3 PHA
    case 0xC428EC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C429AE.asm:4 TXA
    case 0xC428ED: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C429AE.asm:5 ASL
    case 0xC428EE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C429AE.asm:6 TAX
    case 0xC428EF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C429AE.asm:7 LDA ENTITY_TILE_HEIGHTS,X
    case 0xC428F0: cpu.execute_instruction<0xBD>(0x002EB8, 3); return true;
    // src/unknown/C4/C429AE.asm:8 STA $00
    case 0xC428F3: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C429AE.asm:9 LDA #$0000
    case 0xC428F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C429AE.asm:9 LDA #$0000
    // Overlapping static entry reached from 0xC428F5.
    case 0xC428F7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C429AE.asm:10 STA DMA_COPY_MODE
    case 0xC428F8: cpu.execute_instruction<0x8D>(0x000091, 3); return true;
    // src/unknown/C4/C429AE.asm:11 LDA ENTITY_BYTE_WIDTHS,X
    case 0xC428FB: cpu.execute_instruction<0xBD>(0x002E7C, 3); return true;
    // src/unknown/C4/C429AE.asm:12 STA DMA_COPY_SIZE
    case 0xC428FE: cpu.execute_instruction<0x8D>(0x000092, 3); return true;
    // src/unknown/C4/C429AE.asm:13 LDA #$007F
    case 0xC42901: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // src/unknown/C4/C429AE.asm:13 LDA #$007F
    // Overlapping static entry reached from 0xC42901.
    case 0xC42903: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C429AE.asm:14 STA DMA_COPY_RAM_SRC + 2
    case 0xC42904: cpu.execute_instruction<0x8D>(0x000096, 3); return true;
    // src/unknown/C4/C429AE.asm:15 PLA
    case 0xC42907: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C429AE.asm:16 STA DMA_COPY_RAM_SRC
    case 0xC42908: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // src/unknown/C4/C429AE.asm:17 LDA ENTITY_VRAM_ADDRESS,X
    case 0xC4290B: cpu.execute_instruction<0xBD>(0x002D8C, 3); return true;
    // src/unknown/C4/C429AE.asm:18 STA DMA_COPY_VRAM_DEST
    case 0xC4290E: cpu.execute_instruction<0x8D>(0x000097, 3); return true;
    // src/unknown/C4/C429AE.asm:20 JSL UNKNOWN_C0A56E
    case 0xC42911: cpu.execute_instruction<0x22>(0xC0A54D, 4); return true;
    // src/unknown/C4/C429AE.asm:21 DEC $00
    case 0xC42915: cpu.execute_instruction<0xC6>(0x000000, 2); return true;
    // src/unknown/C4/C429AE.asm:22 BEQ @UNKNOWN1
    case 0xC42917: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C4/C429AE.asm:23 LDA DMA_COPY_RAM_SRC
    case 0xC42919: cpu.execute_instruction<0xAD>(0x000094, 3); return true;
    // src/unknown/C4/C429AE.asm:24 CLC
    case 0xC4291C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C429AE.asm:25 ADC DMA_COPY_SIZE
    case 0xC4291D: cpu.execute_instruction<0x6D>(0x000092, 3); return true;
    // src/unknown/C4/C429AE.asm:26 STA DMA_COPY_RAM_SRC
    case 0xC42920: cpu.execute_instruction<0x8D>(0x000094, 3); return true;
    // src/unknown/C4/C429AE.asm:27 BRA @UNKNOWN0
    case 0xC42923: cpu.execute_instruction<0x80>(0x0000EC, 2); return true;
    // src/unknown/C4/C429AE.asm:29 RTL
    case 0xC42925: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C429E8.asm (unresolved).
bool execute_unresolved_c4_c429e8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/unknown/C4/C429E8.asm:4 TAY
    case 0xC42926: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C429E8.asm:5 ASL
    case 0xC42927: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C429E8.asm:6 ASL
    case 0xC42928: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C429E8.asm:7 ASL
    case 0xC42929: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C429E8.asm:8 ASL
    case 0xC4292A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C429E8.asm:9 TAX
    case 0xC4292B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C429E8.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC4292C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C429E8.asm:11 LDA #^__BSS_START__
    case 0xC4292E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x009F7E, 3); return true;
    // src/unknown/C4/C429E8.asm:12 STA f:A1B0,X
    case 0xC42930: cpu.execute_instruction<0x9F>(0x004304, 4); return true;
    // src/unknown/C4/C429E8.asm:12 STA f:A1B0,X
    // Overlapping static entry reached from 0xC4292E.
    case 0xC42931: cpu.execute_instruction<0x04>(0x000043, 2); return true;
    // src/unknown/C4/C429E8.asm:12 STA f:A1B0,X
    // Overlapping static entry reached from 0xC42931.
    case 0xC42933: cpu.execute_instruction<0x00>(0x00009F, 2); return true;
    // src/unknown/C4/C429E8.asm:13 STA f:DASB0,X
    case 0xC42934: cpu.execute_instruction<0x9F>(0x004307, 4); return true;
    // src/unknown/C4/C429E8.asm:14 LDA #$002C
    case 0xC42938: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002C, 2); else cpu.execute_instruction<0xA9>(0x009F2C, 3); return true;
    // src/unknown/C4/C429E8.asm:15 STA f:BBAD0,X
    case 0xC4293A: cpu.execute_instruction<0x9F>(0x004301, 4); return true;
    // src/unknown/C4/C429E8.asm:15 STA f:BBAD0,X
    // Overlapping static entry reached from 0xC42938.
    case 0xC4293B: cpu.execute_instruction<0x01>(0x000043, 2); return true;
    // src/unknown/C4/C429E8.asm:15 STA f:BBAD0,X
    // Overlapping static entry reached from 0xC4293B.
    case 0xC4293D: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C429E8.asm:16 LDA #DMA_TRANSFER_UNIT::WORD
    case 0xC4293E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009F01, 3); return true;
    // src/unknown/C4/C429E8.asm:17 STA f:DMAP0,X
    case 0xC42940: cpu.execute_instruction<0x9F>(0x004300, 4); return true;
    // src/unknown/C4/C429E8.asm:17 STA f:DMAP0,X
    // Overlapping static entry reached from 0xC4293E.
    case 0xC42941: cpu.execute_instruction<0x00>(0x000043, 2); return true;
    // src/unknown/C4/C429E8.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC42944: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C429E8.asm:19 LDA #.LOWORD(LETTERBOX_HDMA_TABLE)
    case 0xC42946: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008D, 2); else cpu.execute_instruction<0xA9>(0x00AF8D, 3); return true;
    // src/unknown/C4/C429E8.asm:19 LDA #.LOWORD(LETTERBOX_HDMA_TABLE)
    // Overlapping static entry reached from 0xC42946.
    case 0xC42948: cpu.execute_instruction<0xAF>(0x43029F, 4); return true;
    // src/unknown/C4/C429E8.asm:20 STA f:A1T0L,X
    case 0xC42949: cpu.execute_instruction<0x9F>(0x004302, 4); return true;
    // src/unknown/C4/C429E8.asm:20 STA f:A1T0L,X
    // Overlapping static entry reached from 0xC42948.
    case 0xC4294C: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C4/C429E8.asm:21 SEP #PROC_FLAGS::ACCUM8
    case 0xC4294D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C429E8.asm:22 TYX
    case 0xC4294F: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C429E8.asm:23 LDA HDMAEN_MIRROR
    case 0xC42950: cpu.execute_instruction<0xAD>(0x00001F, 3); return true;
    // src/unknown/C4/C429E8.asm:24 ORA DMA_FLAGS,X
    case 0xC42953: cpu.execute_instruction<0x1F>(0xC0ADF5, 4); return true;
    // src/unknown/C4/C429E8.asm:25 STA HDMAEN_MIRROR
    case 0xC42957: cpu.execute_instruction<0x8D>(0x00001F, 3); return true;
    // src/unknown/C4/C429E8.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC4295A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C429E8.asm:27 RTL
    case 0xC4295C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C432B1.asm (unresolved).
bool execute_unresolved_c4_c432b1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C432B1.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4302A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C432B1.asm:7 END_STACK_VARS
    case 0xC4302C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C432B1.asm:7 END_STACK_VARS
    case 0xC4302D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C432B1.asm:7 END_STACK_VARS
    case 0xC4302E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C432B1.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4302E.
    case 0xC43030: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C432B1.asm:7 END_STACK_VARS
    case 0xC43031: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C432B1.asm:8 LDA #0
    case 0xC43032: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C432B1.asm:8 LDA #0
    // Overlapping static entry reached from 0xC43032.
    case 0xC43034: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C432B1.asm:9 STA @LOCAL01
    case 0xC43035: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C432B1.asm:10 BRA @UNKNOWN1
    case 0xC43037: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C4/C432B1.asm:12 ASL
    case 0xC43039: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C432B1.asm:13 TAX
    case 0xC4303A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C432B1.asm:14 STZ ENTITY_SURFACE_FLAGS,X
    case 0xC4303B: cpu.execute_instruction<0x9E>(0x002FA8, 3); return true;
    // src/unknown/C4/C432B1.asm:15 LDA @LOCAL01
    case 0xC4303E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C432B1.asm:16 INC
    case 0xC43040: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C432B1.asm:17 STA @LOCAL01
    case 0xC43041: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C432B1.asm:19 CMP #MAX_ENTITIES
    case 0xC43043: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C4/C432B1.asm:19 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC43043.
    case 0xC43045: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C432B1.asm:20 BCC @UNKNOWN0
    case 0xC43046: cpu.execute_instruction<0x90>(0x0000F1, 2); return true;
    // src/unknown/C4/C432B1.asm:21 LDX #0
    case 0xC43048: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C432B1.asm:21 LDX #0
    // Overlapping static entry reached from 0xC43048.
    case 0xC4304A: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C432B1.asm:22 STX @LOCAL00
    case 0xC4304B: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C432B1.asm:23 BRA @UNKNOWN5
    case 0xC4304D: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/unknown/C4/C432B1.asm:25 LDA #0
    case 0xC4304F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C432B1.asm:25 LDA #0
    // Overlapping static entry reached from 0xC4304F.
    case 0xC43051: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C432B1.asm:26 STA @LOCAL01
    case 0xC43052: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C432B1.asm:27 BRA @UNKNOWN4
    case 0xC43054: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/unknown/C4/C432B1.asm:29 STA @VIRTUAL02
    case 0xC43056: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C432B1.asm:30 LDX @LOCAL00
    case 0xC43058: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C432B1.asm:31 TXA
    case 0xC4305A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C432B1.asm:32 LDY #.SIZEOF(char_struct)
    case 0xC4305B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C4/C432B1.asm:32 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4305B.
    case 0xC4305D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C432B1.asm:33 JSL MULT168
    case 0xC4305E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C4/C432B1.asm:34 CLC
    case 0xC43062: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C432B1.asm:35 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    case 0xC43063: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008C, 2); else cpu.execute_instruction<0x69>(0x009C8C, 3); return true;
    // src/unknown/C4/C432B1.asm:35 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    // Overlapping static entry reached from 0xC43063.
    case 0xC43065: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/unknown/C4/C432B1.asm:36 CLC
    case 0xC43066: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C432B1.asm:37 ADC @VIRTUAL02
    case 0xC43067: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C432B1.asm:37 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC43065.
    case 0xC43068: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C4/C432B1.asm:38 TAX
    case 0xC43069: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C432B1.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC4306A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C432B1.asm:40 LDA #0
    case 0xC4306C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/unknown/C4/C432B1.asm:41 STA __BSS_START__,X
    case 0xC4306E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C432B1.asm:41 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4306C.
    case 0xC4306F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C432B1.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC43071: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C432B1.asm:43 LDA @LOCAL01
    case 0xC43073: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C432B1.asm:44 INC
    case 0xC43075: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C432B1.asm:45 STA @LOCAL01
    case 0xC43076: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C432B1.asm:47 CMP #7
    case 0xC43078: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C4/C432B1.asm:47 CMP #7
    // Overlapping static entry reached from 0xC43078.
    case 0xC4307A: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C432B1.asm:48 BCC @UNKNOWN3
    case 0xC4307B: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // src/unknown/C4/C432B1.asm:49 LDX @LOCAL00
    case 0xC4307D: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C432B1.asm:50 INX
    case 0xC4307F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C432B1.asm:51 STX @LOCAL00
    case 0xC43080: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C432B1.asm:53 CPX #6
    case 0xC43082: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000006, 2); else cpu.execute_instruction<0xE0>(0x000006, 3); return true;
    // src/unknown/C4/C432B1.asm:53 CPX #6
    // Overlapping static entry reached from 0xC43082.
    case 0xC43084: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C432B1.asm:54 BCC @UNKNOWN2
    case 0xC43085: cpu.execute_instruction<0x90>(0x0000C8, 2); return true;
    // src/unknown/C4/C432B1.asm:55 SEP #PROC_FLAGS::ACCUM8
    case 0xC43087: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C432B1.asm:56 STZ GAME_STATE + game_state::party_status
    case 0xC43089: cpu.execute_instruction<0x9C>(0x009AF1, 3); return true;
    // src/unknown/C4/C432B1.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0xC4308C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C432B1.asm:58 END_C_FUNCTION
    case 0xC4308E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C432B1.asm:58 END_C_FUNCTION
    case 0xC4308F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43317.asm (unresolved).
bool execute_unresolved_c4_c43317_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43317.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43090: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43317.asm:6 END_STACK_VARS
    case 0xC43092: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43317.asm:6 END_STACK_VARS
    case 0xC43093: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43317.asm:6 END_STACK_VARS
    case 0xC43094: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43317.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC43094.
    case 0xC43096: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43317.asm:6 END_STACK_VARS
    case 0xC43097: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C43317.asm:7 LDA #0
    case 0xC43098: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C43317.asm:7 LDA #0
    // Overlapping static entry reached from 0xC43098.
    case 0xC4309A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C43317.asm:8 STA @LOCAL00
    case 0xC4309B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C43317.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC4C307.
    case 0xC4309C: cpu.execute_instruction<0x0E>(0x001780, 3); return true;
    // src/unknown/C4/C43317.asm:9 BRA @UNKNOWN1
    case 0xC4309D: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/unknown/C4/C43317.asm:11 ASL
    case 0xC4309F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43317.asm:12 TAX
    case 0xC430A0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43317.asm:13 LDA @LOCAL00
    case 0xC430A1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C43317.asm:14 LDY #.SIZEOF(char_struct)
    case 0xC430A3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C4/C43317.asm:14 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC430A3.
    case 0xC430A5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C43317.asm:15 JSL MULT168
    case 0xC430A6: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C4/C43317.asm:16 CLC
    case 0xC430AA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43317.asm:17 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC430AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/unknown/C4/C43317.asm:17 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC430AB.
    case 0xC430AD: cpu.execute_instruction<0x9C>(0x004E9D, 3); return true;
    // src/unknown/C4/C43317.asm:18 STA CHOSEN_FOUR_PTRS,X
    case 0xC430AE: cpu.execute_instruction<0x9D>(0x00514E, 3); return true;
    // src/unknown/C4/C43317.asm:18 STA CHOSEN_FOUR_PTRS,X
    // Overlapping static entry reached from 0xC430AD.
    case 0xC430B0: cpu.execute_instruction<0x51>(0x0000A5, 2); return true;
    // src/unknown/C4/C43317.asm:19 LDA @LOCAL00
    case 0xC430B1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C43317.asm:19 LDA @LOCAL00
    // Overlapping static entry reached from 0xC430B0.
    case 0xC430B2: cpu.execute_instruction<0x0E>(0x00851A, 3); return true;
    // src/unknown/C4/C43317.asm:20 INC
    case 0xC430B3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C43317.asm:21 STA @LOCAL00
    case 0xC430B4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C43317.asm:21 STA @LOCAL00
    // Overlapping static entry reached from 0xC430B2.
    case 0xC430B5: cpu.execute_instruction<0x0E>(0x0006C9, 3); return true;
    // src/unknown/C4/C43317.asm:23 CMP #6
    case 0xC430B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C4/C43317.asm:23 CMP #6
    // Overlapping static entry reached from 0xC430B6.
    case 0xC430B8: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C43317.asm:24 BCC @UNKNOWN0
    case 0xC430B9: cpu.execute_instruction<0x90>(0x0000E4, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43317.asm:25 END_C_FUNCTION
    case 0xC430BB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43317.asm:25 END_C_FUNCTION
    case 0xC430BC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43344.asm (unresolved).
bool execute_unresolved_c4_c43344_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43344.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC430BD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C43344.asm:5 STA OVERWORLD_STATUS_SUPPRESSION
    case 0xC430BF: cpu.execute_instruction<0x8D>(0x00611E, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43344.asm:6 END_C_FUNCTION
    case 0xC430C2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4334A.asm (unresolved).
bool execute_unresolved_c4_c4334a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4334A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC430C3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4334A.asm:8 END_STACK_VARS
    case 0xC430C5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4334A.asm:8 END_STACK_VARS
    case 0xC430C6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4334A.asm:8 END_STACK_VARS
    case 0xC430C7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4334A.asm:8 END_STACK_VARS
    case 0xC430C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4334A.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC430C8.
    case 0xC430CA: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4334A.asm:8 END_STACK_VARS
    case 0xC430CB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4334A.asm:8 END_STACK_VARS
    case 0xC430CC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:16 STA @TMP2
    case 0xC430CD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4334A.asm:16 STA @TMP2
    // Overlapping static entry reached from 0xC430CA.
    case 0xC430CE: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // src/unknown/C4/C4334A.asm:17 ASL
    case 0xC430CF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:18 TAX
    case 0xC430D0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:19 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC430D1: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C4/C4334A.asm:20 LSR
    case 0xC430D4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:21 LSR
    case 0xC430D5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:22 LSR
    case 0xC430D6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:23 CLC
    case 0xC430D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:24 ADC UNKNOWN_C3E230,X
    case 0xC430D8: cpu.execute_instruction<0x7F>(0xC3E21A, 4); return true;
    // src/unknown/C4/C4334A.asm:25 STA @LOCAL01
    case 0xC430DC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4334A.asm:26 LDA @TMP2
    case 0xC430DE: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4334A.asm:27 CMP #4
    case 0xC430E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C4/C4334A.asm:27 CMP #4
    // Overlapping static entry reached from 0xC430E0.
    case 0xC430E2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4334A.asm:28 BNE @UNKNOWN0
    case 0xC430E3: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C4/C4334A.asm:29 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC430E5: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C4/C4334A.asm:30 INC
    case 0xC430E8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:31 LSR
    case 0xC430E9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:32 LSR
    case 0xC430EA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:33 LSR
    case 0xC430EB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:34 CLC
    case 0xC430EC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:35 ADC UNKNOWN_C3E240,X
    case 0xC430ED: cpu.execute_instruction<0x7F>(0xC3E22A, 4); return true;
    // src/unknown/C4/C4334A.asm:36 STA @TMP1
    case 0xC430F1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4334A.asm:37 BRA @UNKNOWN1
    case 0xC430F3: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C4/C4334A.asm:39 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC430F5: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C4/C4334A.asm:40 LSR
    case 0xC430F8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:41 LSR
    case 0xC430F9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:42 LSR
    case 0xC430FA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:43 CLC
    case 0xC430FB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:44 ADC UNKNOWN_C3E240,X
    case 0xC430FC: cpu.execute_instruction<0x7F>(0xC3E22A, 4); return true;
    // src/unknown/C4/C4334A.asm:45 STA @TMP1
    case 0xC43100: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4334A.asm:47 LDA @TMP2
    case 0xC43102: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4334A.asm:48 STA @LOCAL00
    case 0xC43104: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4334A.asm:49 LDY GAME_STATE+game_state::current_party_members
    case 0xC43106: cpu.execute_instruction<0xAC>(0x009B3A, 3); return true;
    // src/unknown/C4/C4334A.asm:50 LDA @TMP1
    case 0xC43109: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4334A.asm:51 ASL
    case 0xC4310B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:52 ASL
    case 0xC4310C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:53 ASL
    case 0xC4310D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:54 TAX
    case 0xC4310E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:55 LDA @LOCAL01
    case 0xC4310F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4334A.asm:56 ASL
    case 0xC43111: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:57 ASL
    case 0xC43112: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:58 ASL
    case 0xC43113: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:59 JSL UNKNOWN_C05CD7
    case 0xC43114: cpu.execute_instruction<0x22>(0xC05F05, 4); return true;
    // src/unknown/C4/C4334A.asm:60 AND #$0082
    case 0xC43118: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000082, 2); else cpu.execute_instruction<0x29>(0x000082, 3); return true;
    // src/unknown/C4/C4334A.asm:60 AND #$0082
    // Overlapping static entry reached from 0xC43118.
    case 0xC4311A: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C4/C4334A.asm:61 CMP #$0082
    case 0xC4311B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000082, 2); else cpu.execute_instruction<0xC9>(0x000082, 3); return true;
    // src/unknown/C4/C4334A.asm:61 CMP #$0082
    // Overlapping static entry reached from 0xC4311B.
    case 0xC4311D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4334A.asm:62 BNE @UNKNOWN2
    case 0xC4311E: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // src/unknown/C4/C4334A.asm:63 LDA @TMP2
    case 0xC43120: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4334A.asm:64 ASL
    case 0xC43122: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:65 TAX
    case 0xC43123: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:66 LDA UNKNOWN_C3E230,X
    case 0xC43124: cpu.execute_instruction<0xBF>(0xC3E21A, 4); return true;
    // src/unknown/C4/C4334A.asm:67 CLC
    case 0xC43128: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:68 ADC @LOCAL01
    case 0xC43129: cpu.execute_instruction<0x65>(0x000010, 2); return true;
    // src/unknown/C4/C4334A.asm:69 STA @LOCAL01
    case 0xC4312B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4334A.asm:70 LDA @TMP1
    case 0xC4312D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4334A.asm:71 CLC
    case 0xC4312F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:72 ADC UNKNOWN_C3E240,X
    case 0xC43130: cpu.execute_instruction<0x7F>(0xC3E22A, 4); return true;
    // src/unknown/C4/C4334A.asm:73 STA @TMP1
    case 0xC43134: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4334A.asm:75 LDX @TMP1
    case 0xC43136: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4334A.asm:76 LDA @LOCAL01
    case 0xC43138: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4334A.asm:77 JSL UNKNOWN_C07477
    case 0xC4313A: cpu.execute_instruction<0x22>(0xC076B6, 4); return true;
    // src/unknown/C4/C4334A.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC4313E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4334A.asm:79 AND #$00FF
    case 0xC43140: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4334A.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC43140.
    case 0xC43142: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4334A.asm:80 TAX
    case 0xC43143: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:81 CPX #<-1
    case 0xC43144: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x0000FF, 3); return true;
    // src/unknown/C4/C4334A.asm:81 CPX #<-1
    // Overlapping static entry reached from 0xC43144.
    case 0xC43146: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4334A.asm:82 BNE @UNKNOWN3
    case 0xC43147: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C4/C4334A.asm:83 LDX @TMP1
    case 0xC43149: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4334A.asm:84 LDA @LOCAL01
    case 0xC4314B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4334A.asm:85 INC
    case 0xC4314D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:86 JSL UNKNOWN_C07477
    case 0xC4314E: cpu.execute_instruction<0x22>(0xC076B6, 4); return true;
    // src/unknown/C4/C4334A.asm:87 REP #PROC_FLAGS::ACCUM8
    case 0xC43152: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4334A.asm:88 AND #$00FF
    case 0xC43154: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4334A.asm:88 AND #$00FF
    // Overlapping static entry reached from 0xC43154.
    case 0xC43156: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4334A.asm:89 TAX
    case 0xC43157: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:91 CPX #<-1
    case 0xC43158: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x0000FF, 3); return true;
    // src/unknown/C4/C4334A.asm:91 CPX #<-1
    // Overlapping static entry reached from 0xC43158.
    case 0xC4315A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4334A.asm:92 BNE @UNKNOWN4
    case 0xC4315B: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C4/C4334A.asm:93 LDX @TMP1
    case 0xC4315D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4334A.asm:94 LDA @LOCAL01
    case 0xC4315F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4334A.asm:95 DEC
    case 0xC43161: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:96 JSL UNKNOWN_C07477
    case 0xC43162: cpu.execute_instruction<0x22>(0xC076B6, 4); return true;
    // src/unknown/C4/C4334A.asm:97 REP #PROC_FLAGS::ACCUM8
    case 0xC43166: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4334A.asm:98 AND #$00FF
    case 0xC43168: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4334A.asm:98 AND #$00FF
    // Overlapping static entry reached from 0xC43168.
    case 0xC4316A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4334A.asm:99 TAX
    case 0xC4316B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:101 CPX #<-1
    case 0xC4316C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x0000FF, 3); return true;
    // src/unknown/C4/C4334A.asm:101 CPX #<-1
    // Overlapping static entry reached from 0xC4316C.
    case 0xC4316E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4334A.asm:102 BEQ @UNKNOWN5
    case 0xC4316F: cpu.execute_instruction<0xF0>(0x000044, 2); return true;
    // src/unknown/C4/C4334A.asm:103 CPX #5
    case 0xC43171: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000005, 2); else cpu.execute_instruction<0xE0>(0x000005, 3); return true;
    // src/unknown/C4/C4334A.asm:103 CPX #5
    // Overlapping static entry reached from 0xC43171.
    case 0xC43173: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4334A.asm:104 BNE @UNKNOWN5
    case 0xC43174: cpu.execute_instruction<0xD0>(0x00003F, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4334A.asm:105 LOADPTR DOOR_DATA&$FF0000, @VIRTUAL06
    case 0xC43176: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4334A.asm:105 LOADPTR DOOR_DATA&$FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC43176.
    case 0xC43178: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4334A.asm:105 LOADPTR DOOR_DATA&$FF0000, @VIRTUAL06
    case 0xC43179: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4334A.asm:105 LOADPTR DOOR_DATA&$FF0000, @VIRTUAL06
    case 0xC4317B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4334A.asm:105 LOADPTR DOOR_DATA&$FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4317B.
    case 0xC4317D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4334A.asm:105 LOADPTR DOOR_DATA&$FF0000, @VIRTUAL06
    case 0xC4317E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4334A.asm:106 LDA DOOR_FOUND
    case 0xC43180: cpu.execute_instruction<0xAD>(0x006142, 3); return true;
    // src/unknown/C4/C4334A.asm:107 AND #$7FFF
    case 0xC43183: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C4/C4334A.asm:107 AND #$7FFF
    // Overlapping static entry reached from 0xC43183.
    case 0xC43185: cpu.execute_instruction<0x7F>(0x066518, 4); return true;
    // src/unknown/C4/C4334A.asm:108 CLC
    case 0xC43186: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4334A.asm:109 ADC @VIRTUAL06
    case 0xC43187: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4334A.asm:110 STA @VIRTUAL06
    case 0xC43189: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4334A.asm:111 LDA DOOR_FOUND_TYPE
    case 0xC4318B: cpu.execute_instruction<0xAD>(0x006144, 3); return true;
    // src/unknown/C4/C4334A.asm:112 STA UNREAD_7E5DDC
    case 0xC4318E: cpu.execute_instruction<0x8D>(0x006162, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4334A.asm:113 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC43191: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4334A.asm:113 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC43193: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4334A.asm:113 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC43195: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4334A.asm:113 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC43197: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4334A.asm:114 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC43199: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4334A.asm:114 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC43199.
    case 0xC4319B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4334A.asm:114 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4319C: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4334A.asm:114 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4319E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4334A.asm:114 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4319F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4334A.asm:114 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC431A1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4334A.asm:114 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC431A3: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4334A.asm:115 MOVE_INT @VIRTUAL06, MAP_OBJECT_TEXT
    case 0xC431A5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4334A.asm:115 MOVE_INT @VIRTUAL06, MAP_OBJECT_TEXT
    case 0xC431A7: cpu.execute_instruction<0x8D>(0x006164, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4334A.asm:115 MOVE_INT @VIRTUAL06, MAP_OBJECT_TEXT
    case 0xC431AA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4334A.asm:115 MOVE_INT @VIRTUAL06, MAP_OBJECT_TEXT
    case 0xC431AC: cpu.execute_instruction<0x8D>(0x006166, 3); return true;
    // src/unknown/C4/C4334A.asm:116 LDA #.LOWORD(-2)
    case 0xC431AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x00FFFE, 3); return true;
    // src/unknown/C4/C4334A.asm:116 LDA #.LOWORD(-2)
    // Overlapping static entry reached from 0xC431AF.
    case 0xC431B1: cpu.execute_instruction<0xFF>(0x60E88D, 4); return true;
    // src/unknown/C4/C4334A.asm:117 STA INTERACTING_NPC_ID
    case 0xC431B2: cpu.execute_instruction<0x8D>(0x0060E8, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4334A.asm:119 END_C_FUNCTION
    case 0xC431B5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4334A.asm:119 END_C_FUNCTION
    case 0xC431B6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4343E.asm (unresolved).
bool execute_unresolved_c4_c4343e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4343E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC431B7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4343E.asm:9 END_STACK_VARS
    case 0xC431B9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4343E.asm:9 END_STACK_VARS
    case 0xC431BA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4343E.asm:9 END_STACK_VARS
    case 0xC431BB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4343E.asm:9 END_STACK_VARS
    case 0xC431BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4343E.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC431BC.
    case 0xC431BE: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4343E.asm:9 END_STACK_VARS
    case 0xC431BF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4343E.asm:9 END_STACK_VARS
    case 0xC431C0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:10 TAX
    case 0xC431C1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:11 DEC
    case 0xC431C2: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:12 STA @VIRTUAL02
    case 0xC431C3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4343E.asm:13 LOADINT32 3600, @VIRTUAL0A
    case 0xC431C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000E10, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4343E.asm:13 LOADINT32 3600, @VIRTUAL0A
    // Overlapping static entry reached from 0xC431C5.
    case 0xC431C7: cpu.execute_instruction<0x0E>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4343E.asm:13 LOADINT32 3600, @VIRTUAL0A
    case 0xC431C8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4343E.asm:13 LOADINT32 3600, @VIRTUAL0A
    case 0xC431CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4343E.asm:13 LOADINT32 3600, @VIRTUAL0A
    // Overlapping static entry reached from 0xC431CA.
    case 0xC431CC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4343E.asm:13 LOADINT32 3600, @VIRTUAL0A
    case 0xC431CD: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:230 LDA .LOWORD(ptr)
    // Macro caller: src/unknown/C4/C4343E.asm:14 LOADPTRPTR TIMER, @VIRTUAL06
    case 0xC431CF: cpu.execute_instruction<0xAD>(0x0000A7, 3); return true;
    // include/macros.asm:231 STA var
    // Macro caller: src/unknown/C4/C4343E.asm:14 LOADPTRPTR TIMER, @VIRTUAL06
    case 0xC431D2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:232 LDA .LOWORD(ptr)+2
    // Macro caller: src/unknown/C4/C4343E.asm:14 LOADPTRPTR TIMER, @VIRTUAL06
    case 0xC431D4: cpu.execute_instruction<0xAD>(0x0000A9, 3); return true;
    // include/macros.asm:233 STA var+2
    // Macro caller: src/unknown/C4/C4343E.asm:14 LOADPTRPTR TIMER, @VIRTUAL06
    case 0xC431D7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4343E.asm:15 JSL DIVISION32
    case 0xC431D9: cpu.execute_instruction<0x22>(0xC090E1, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4343E.asm:16 LOADINT32 60000, @VIRTUAL0A
    case 0xC431DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000060, 2); else cpu.execute_instruction<0xA9>(0x00EA60, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4343E.asm:16 LOADINT32 60000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC431DD.
    case 0xC431DF: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4343E.asm:16 LOADINT32 60000, @VIRTUAL0A
    case 0xC431E0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4343E.asm:16 LOADINT32 60000, @VIRTUAL0A
    case 0xC431E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4343E.asm:16 LOADINT32 60000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC431E2.
    case 0xC431E4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4343E.asm:16 LOADINT32 60000, @VIRTUAL0A
    case 0xC431E5: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4343E.asm:17 CLC
    case 0xC431E7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:18 LDA @VIRTUAL0A
    case 0xC431E8: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C4/C4343E.asm:19 SBC @VIRTUAL06
    case 0xC431EA: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // src/unknown/C4/C4343E.asm:20 LDA @VIRTUAL0A+2
    case 0xC431EC: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/unknown/C4/C4343E.asm:21 SBC @VIRTUAL06+2
    case 0xC431EE: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C4343E.asm:22 BRANCHLTEQS @UNKNOWN2
    case 0xC431F0: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C4343E.asm:22 BRANCHLTEQS @UNKNOWN2
    case 0xC431F2: cpu.execute_instruction<0x10>(0x00000A, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C4343E.asm:22 BRANCHLTEQS @UNKNOWN2
    case 0xC431F4: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C4343E.asm:22 BRANCHLTEQS @UNKNOWN2
    case 0xC431F6: cpu.execute_instruction<0x30>(0x000006, 2); return true;
    // src/unknown/C4/C4343E.asm:23 LDA @VIRTUAL06
    case 0xC431F8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/unknown/C4/C4343E.asm:24 STA @LOCAL02
    case 0xC431FA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4343E.asm:25 BRA @UNKNOWN3
    case 0xC431FC: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C4/C4343E.asm:27 LDA #59999
    case 0xC431FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005F, 2); else cpu.execute_instruction<0xA9>(0x00EA5F, 3); return true;
    // src/unknown/C4/C4343E.asm:27 LDA #59999
    // Overlapping static entry reached from 0xC431FE.
    case 0xC43200: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:28 STA @LOCAL02
    case 0xC43201: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4343E.asm:30 LDA @VIRTUAL02
    case 0xC43203: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4343E.asm:31 ASL
    case 0xC43205: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:32 ASL
    case 0xC43206: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:33 ASL
    case 0xC43207: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:35 CLC
    case 0xC43208: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:36 ADC #.LOWORD(GAME_STATE)
    case 0xC43209: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C4/C4343E.asm:36 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC43209.
    case 0xC4320B: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:37 TAX
    case 0xC4320C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:38 LDA @LOCAL02
    case 0xC4320D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4343E.asm:39 STA a:game_state::saved_photo_states,X
    case 0xC4320F: cpu.execute_instruction<0x9D>(0x0000D1, 3); return true;
    // src/unknown/C4/C4343E.asm:45 LDY #0
    case 0xC43212: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4343E.asm:45 LDY #0
    // Overlapping static entry reached from 0xC43212.
    case 0xC43214: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4343E.asm:46 STY @LOCAL01
    case 0xC43215: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C4343E.asm:47 JMP @UNKNOWN10
    case 0xC43217: cpu.execute_instruction<0x4C>(0x0032C8, 3); return true;
    // src/unknown/C4/C4343E.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC4321A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4343E.asm:50 TYA
    case 0xC4321C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:51 CLC
    case 0xC4321D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:52 ADC #.LOWORD(GAME_STATE)
    case 0xC4321E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C4/C4343E.asm:52 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC4321E.
    case 0xC43220: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:53 STA @LOCAL02
    case 0xC43221: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4343E.asm:54 CLC
    case 0xC43223: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:55 ADC #game_state::unknown96
    case 0xC43224: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000093, 2); else cpu.execute_instruction<0x69>(0x000093, 3); return true;
    // src/unknown/C4/C4343E.asm:55 ADC #game_state::unknown96
    // Overlapping static entry reached from 0xC43224.
    case 0xC43226: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4343E.asm:56 TAX
    case 0xC43227: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:57 STX @LOCAL00
    case 0xC43228: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4343E.asm:58 LDA __BSS_START__,X
    case 0xC4322A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4343E.asm:59 AND #$00FF
    case 0xC4322D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4343E.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC4322D.
    case 0xC4322F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4343E.asm:60 BNE @UNKNOWN5
    case 0xC43230: cpu.execute_instruction<0xD0>(0x000017, 2); return true;
    // src/unknown/C4/C4343E.asm:61 STY @VIRTUAL04
    case 0xC43232: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C4/C4343E.asm:62 LDA @VIRTUAL02
    case 0xC43234: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4343E.asm:63 ASL
    case 0xC43236: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:64 ASL
    case 0xC43237: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:65 ASL
    case 0xC43238: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:66 CLC
    case 0xC43239: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:68 ADC #.LOWORD(GAME_STATE)
    case 0xC4323A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C4/C4343E.asm:68 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC4323A.
    case 0xC4323C: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:69 CLC
    case 0xC4323D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:70 ADC @VIRTUAL04
    case 0xC4323E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4343E.asm:71 TAX
    case 0xC43240: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:72 SEP #PROC_FLAGS::ACCUM8
    case 0xC43241: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4343E.asm:73 STZ a:game_state::saved_photo_states + photo_state::party,X
    case 0xC43243: cpu.execute_instruction<0x9E>(0x0000D3, 3); return true;
    // src/unknown/C4/C4343E.asm:74 JMP @UNKNOWN9
    case 0xC43246: cpu.execute_instruction<0x4C>(0x0032C5, 3); return true;
    // src/unknown/C4/C4343E.asm:84 LDA @LOCAL02
    case 0xC43249: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4343E.asm:85 TAX
    case 0xC4324B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:86 LDA __BSS_START__+game_state::player_controlled_party_members,X
    case 0xC4324C: cpu.execute_instruction<0xBD>(0x000099, 3); return true;
    // src/unknown/C4/C4343E.asm:87 AND #$00FF
    case 0xC4324F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4343E.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC4324F.
    case 0xC43251: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C4/C4343E.asm:88 LDY #.SIZEOF(char_struct)
    case 0xC43252: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/unknown/C4/C4343E.asm:88 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC43252.
    case 0xC43254: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4343E.asm:89 JSL MULT168
    case 0xC43255: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C4/C4343E.asm:90 CLC
    case 0xC43259: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:91 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC4325A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/unknown/C4/C4343E.asm:91 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC4325A.
    case 0xC4325C: cpu.execute_instruction<0x9C>(0x001285, 3); return true;
    // src/unknown/C4/C4343E.asm:92 STA @LOCAL02
    case 0xC4325D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4343E.asm:93 STA CURRENT_PARTY_MEMBER_TICK
    case 0xC4325F: cpu.execute_instruction<0x8D>(0x00514C, 3); return true;
    // src/unknown/C4/C4343E.asm:94 LDX @LOCAL00
    case 0xC43262: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C4343E.asm:95 LDA __BSS_START__,X
    case 0xC43264: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4343E.asm:96 AND #$00FF
    case 0xC43267: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4343E.asm:96 AND #$00FF
    // Overlapping static entry reached from 0xC43267.
    case 0xC43269: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4343E.asm:97 TAX
    case 0xC4326A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:98 STX @LOCAL00
    case 0xC4326B: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4343E.asm:99 LDA @LOCAL02
    case 0xC4326D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4343E.asm:100 TAX
    case 0xC4326F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:101 LDA a:char_struct::afflictions,X
    case 0xC43270: cpu.execute_instruction<0xBD>(0x00000D, 3); return true;
    // src/unknown/C4/C4343E.asm:102 AND #$00FF
    case 0xC43273: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4343E.asm:102 AND #$00FF
    // Overlapping static entry reached from 0xC43273.
    case 0xC43275: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C4/C4343E.asm:103 CMP #STATUS_0::UNCONSCIOUS
    case 0xC43276: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C4343E.asm:103 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC43276.
    case 0xC43278: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4343E.asm:104 BNE @UNKNOWN6
    case 0xC43279: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C4/C4343E.asm:105 LDX @LOCAL00
    case 0xC4327B: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C4343E.asm:106 TXA
    case 0xC4327D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:107 ORA #$0020
    case 0xC4327E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000020, 2); else cpu.execute_instruction<0x09>(0x000020, 3); return true;
    // src/unknown/C4/C4343E.asm:107 ORA #$0020
    // Overlapping static entry reached from 0xC4327E.
    case 0xC43280: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4343E.asm:108 TAX
    case 0xC43281: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:109 STX @LOCAL00
    case 0xC43282: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4343E.asm:110 BRA @UNKNOWN7
    case 0xC43284: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C4/C4343E.asm:112 CMP #STATUS_0::DIAMONDIZED
    case 0xC43286: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C4/C4343E.asm:112 CMP #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC43286.
    case 0xC43288: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4343E.asm:113 BNE @UNKNOWN7
    case 0xC43289: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C4/C4343E.asm:114 LDX @LOCAL00
    case 0xC4328B: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C4343E.asm:115 TXA
    case 0xC4328D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:116 ORA #$0040
    case 0xC4328E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000040, 2); else cpu.execute_instruction<0x09>(0x000040, 3); return true;
    // src/unknown/C4/C4343E.asm:116 ORA #$0040
    // Overlapping static entry reached from 0xC4328E.
    case 0xC43290: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4343E.asm:117 TAX
    case 0xC43291: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:118 STX @LOCAL00
    case 0xC43292: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4343E.asm:120 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC43294: cpu.execute_instruction<0xAE>(0x00514C, 3); return true;
    // src/unknown/C4/C4343E.asm:121 LDA a:char_struct::afflictions+STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC43297: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/unknown/C4/C4343E.asm:122 AND #$00FF
    case 0xC4329A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4343E.asm:122 AND #$00FF
    // Overlapping static entry reached from 0xC4329A.
    case 0xC4329C: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C4/C4343E.asm:123 CMP #STATUS_1::MUSHROOMIZED
    case 0xC4329D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C4343E.asm:123 CMP #STATUS_1::MUSHROOMIZED
    // Overlapping static entry reached from 0xC4329D.
    case 0xC4329F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4343E.asm:124 BNE @UNKNOWN8
    case 0xC432A0: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C4/C4343E.asm:125 LDX @LOCAL00
    case 0xC432A2: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C4343E.asm:126 TXA
    case 0xC432A4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:127 ORA #$0080
    case 0xC432A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000080, 2); else cpu.execute_instruction<0x09>(0x000080, 3); return true;
    // src/unknown/C4/C4343E.asm:127 ORA #$0080
    // Overlapping static entry reached from 0xC432A5.
    case 0xC432A7: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4343E.asm:128 TAX
    case 0xC432A8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:129 STX @LOCAL00
    case 0xC432A9: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4343E.asm:131 LDY @LOCAL01
    case 0xC432AB: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C4343E.asm:132 STY @VIRTUAL04
    case 0xC432AD: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C4/C4343E.asm:133 LDA @VIRTUAL02
    case 0xC432AF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4343E.asm:134 ASL
    case 0xC432B1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:135 ASL
    case 0xC432B2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:136 ASL
    case 0xC432B3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:137 CLC
    case 0xC432B4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:139 ADC #.LOWORD(GAME_STATE)
    case 0xC432B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C4/C4343E.asm:139 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC432B5.
    case 0xC432B7: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:140 CLC
    case 0xC432B8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:141 ADC @VIRTUAL04
    case 0xC432B9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4343E.asm:142 PHA
    case 0xC432BB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:143 LDX @LOCAL00
    case 0xC432BC: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C4343E.asm:144 TXA
    case 0xC432BE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:145 SEP #PROC_FLAGS::ACCUM8
    case 0xC432BF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4343E.asm:146 PLX
    case 0xC432C1: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:147 STA a:game_state::saved_photo_states + photo_state::party,X
    case 0xC432C2: cpu.execute_instruction<0x9D>(0x0000D3, 3); return true;
    // src/unknown/C4/C4343E.asm:158 INY
    case 0xC432C5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4343E.asm:159 STY @LOCAL01
    case 0xC432C6: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C4343E.asm:161 CPY #6
    case 0xC432C8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/unknown/C4/C4343E.asm:161 CPY #6
    // Overlapping static entry reached from 0xC432C8.
    case 0xC432CA: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4343E.asm:162 BCCL @UNKNOWN4
    case 0xC432CB: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4343E.asm:162 BCCL @UNKNOWN4
    case 0xC432CD: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4343E.asm:162 BCCL @UNKNOWN4
    case 0xC432CF: cpu.execute_instruction<0x4C>(0x00321A, 3); return true;
    // src/unknown/C4/C4343E.asm:163 REP #PROC_FLAGS::ACCUM8
    case 0xC432D2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4343E.asm:164 END_C_FUNCTION
    case 0xC432D4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4343E.asm:164 END_C_FUNCTION
    case 0xC432D5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43568.asm (unresolved).
bool execute_unresolved_c4_c43568_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43568.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC432EA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C43568.asm:5 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC432EC: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/unknown/C4/C43568.asm:6 JSL UNKNOWN_C2DB3F
    case 0xC432F0: cpu.execute_instruction<0x22>(0xC2DAB4, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43568.asm:7 END_C_FUNCTION
    case 0xC432F4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43573.asm (unresolved).
bool execute_unresolved_c4_c43573_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43573.asm:4 BEGIN_C_FUNCTION
    case 0xC10C40: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43573.asm:11 END_STACK_VARS
    case 0xC10C42: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C43573.asm:11 END_STACK_VARS
    case 0xC10C43: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43573.asm:11 END_STACK_VARS
    case 0xC10C44: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43573.asm:11 END_STACK_VARS
    case 0xC10C45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43573.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC10C45.
    case 0xC10C47: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43573.asm:11 END_STACK_VARS
    case 0xC10C48: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C43573.asm:11 END_STACK_VARS
    case 0xC10C49: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:12 STA @LOCAL00
    case 0xC10C4A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C43573.asm:12 STA @LOCAL00
    // Overlapping static entry reached from 0xC10C47.
    case 0xC10C4B: cpu.execute_instruction<0x0E>(0x0008AD, 3); return true;
    // src/unknown/C4/C43573.asm:13 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC10C4C: cpu.execute_instruction<0xAD>(0x008D08, 3); return true;
    // src/unknown/C4/C43573.asm:13 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    // Overlapping static entry reached from 0xC10C4B.
    case 0xC10C4E: cpu.execute_instruction<0x8D>(0x00FFC9, 3); return true;
    // src/unknown/C4/C43573.asm:14 CMP #.LOWORD(-1)
    case 0xC10C4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C43573.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10C4F.
    case 0xC10C51: cpu.execute_instruction<0xFF>(0x2003F0, 4); return true;
    // src/unknown/C4/C43573.asm:15 BEQ @UNKNOWN0
    case 0xC10C52: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C4/C43573.asm:19 JSR UNKNOWN_C3E6F8
    case 0xC10C54: cpu.execute_instruction<0x20>(0x000BDB, 3); return true;
    // src/unknown/C4/C43573.asm:19 JSR UNKNOWN_C3E6F8
    // Overlapping static entry reached from 0xC10C51.
    case 0xC10C55: cpu.execute_instruction<0xDB>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:22 LDA @LOCAL00
    case 0xC10C57: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C43573.asm:23 STA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC10C59: cpu.execute_instruction<0x8D>(0x008D08, 3); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/unknown/C4/C43573.asm:28 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC10C5C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/unknown/C4/C43573.asm:28 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC10C5E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/unknown/C4/C43573.asm:28 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC10C5F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/unknown/C4/C43573.asm:28 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC10C61: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/unknown/C4/C43573.asm:28 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC10C62: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C43573.asm:29 STA @VIRTUAL02
    case 0xC10C64: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C43573.asm:30 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC10C66: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/unknown/C4/C43573.asm:31 AND #$00FF
    case 0xC10C69: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C43573.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC10C69.
    case 0xC10C6B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/unknown/C4/C43573.asm:32 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC10C6C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/unknown/C4/C43573.asm:32 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC10C6E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/unknown/C4/C43573.asm:32 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC10C6F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/unknown/C4/C43573.asm:32 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC10C71: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/unknown/C4/C43573.asm:32 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC10C72: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C43573.asm:33 PHA
    case 0xC10C74: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:34 ASL
    case 0xC10C75: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:35 PLA
    case 0xC10C76: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:36 ROR
    case 0xC10C77: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:37 STA @VIRTUAL04
    case 0xC10C78: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C43573.asm:38 LDA #16
    case 0xC10C7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C4/C43573.asm:38 LDA #16
    // Overlapping static entry reached from 0xC10C7A.
    case 0xC10C7C: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C43573.asm:39 SEC
    case 0xC10C7D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:40 SBC @VIRTUAL04
    case 0xC10C7E: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C4/C43573.asm:41 CLC
    case 0xC10C80: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:42 ADC @VIRTUAL02
    case 0xC10C81: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C43573.asm:43 ASL
    case 0xC10C83: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:44 CLC
    case 0xC10C84: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:46 ADC #.LOWORD(BG2_BUFFER)
    case 0xC10C85: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000076, 2); else cpu.execute_instruction<0x69>(0x008176, 3); return true;
    // src/unknown/C4/C43573.asm:46 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC10C85.
    case 0xC10C87: cpu.execute_instruction<0x81>(0x000018, 2); return true;
    // src/unknown/C4/C43573.asm:47 CLC
    case 0xC10C88: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:48 ADC #((ACTIVE_HPPP_WINDOW_Y_OFFSET + HPPP_WINDOW_HEIGHT) * 32) * 2
    case 0xC10C89: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x000680, 3); return true;
    // src/unknown/C4/C43573.asm:48 ADC #((ACTIVE_HPPP_WINDOW_Y_OFFSET + HPPP_WINDOW_HEIGHT) * 32) * 2
    // Overlapping static entry reached from 0xC10C89.
    case 0xC10C8B: cpu.execute_instruction<0x06>(0x0000AA, 2); return true;
    // src/unknown/C4/C43573.asm:52 TAX
    case 0xC10C8C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:53 LDA #7
    case 0xC10C8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C4/C43573.asm:53 LDA #7
    // Overlapping static entry reached from 0xC10C8D.
    case 0xC10C8F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C43573.asm:54 STA @LOCAL00
    case 0xC10C90: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C43573.asm:55 BRA @UNKNOWN2
    case 0xC10C92: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C4/C43573.asm:57 LDA #0
    case 0xC10C94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C43573.asm:57 LDA #0
    // Overlapping static entry reached from 0xC10C94.
    case 0xC10C96: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C4/C43573.asm:58 STA __BSS_START__,X
    case 0xC10C97: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C43573.asm:59 INX
    case 0xC10C9A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:60 INX
    case 0xC10C9B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:61 LDA @LOCAL00
    case 0xC10C9C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C43573.asm:62 DEC
    case 0xC10C9E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:63 STA @LOCAL00
    case 0xC10C9F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C43573.asm:65 BNE @UNKNOWN1
    case 0xC10CA1: cpu.execute_instruction<0xD0>(0x0000F1, 2); return true;
    // src/unknown/C4/C43573.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC10CA3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C43573.asm:67 LDA #1
    case 0xC10CA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C4/C43573.asm:68 STA REDRAW_ALL_WINDOWS
    case 0xC10CA7: cpu.execute_instruction<0x8D>(0x00991B, 3); return true;
    // src/unknown/C4/C43573.asm:68 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10CA5.
    case 0xC10CA8: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C4/C43573.asm:68 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10CA8.
    case 0xC10CA9: cpu.execute_instruction<0x99>(0x0020C2, 3); return true;
    // src/unknown/C4/C43573.asm:69 REP #PROC_FLAGS::ACCUM8
    case 0xC10CAA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43573.asm:70 END_C_FUNCTION
    case 0xC10CAC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C43573.asm:70 END_C_FUNCTION
    case 0xC10CAD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43573_redirect.asm (unresolved).
bool execute_unresolved_c4_c43573_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43573_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DBA9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C43573_redirect.asm:5 JSR UNKNOWN_C43573
    case 0xC1DBAB: cpu.execute_instruction<0x20>(0x000C40, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C43573_redirect.asm:6 END_C_FUNCTION
    case 0xC1DBAE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C435E4.asm (unresolved).
bool execute_unresolved_c4_c435e4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C435E4.asm:4 BEGIN_C_FUNCTION
    case 0xC10CAE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C435E4.asm:10 END_STACK_VARS
    case 0xC10CB0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C435E4.asm:10 END_STACK_VARS
    case 0xC10CB1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C435E4.asm:10 END_STACK_VARS
    case 0xC10CB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C435E4.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC10CB2.
    case 0xC10CB4: cpu.execute_instruction<0xFF>(0x0CAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C435E4.asm:10 END_STACK_VARS
    case 0xC10CB5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C435E4.asm:11 LDA CURRENT_FLASHING_ROW
    case 0xC10CB6: cpu.execute_instruction<0xAD>(0x008D0C, 3); return true;
    // src/unknown/C4/C435E4.asm:11 LDA CURRENT_FLASHING_ROW
    // Overlapping static entry reached from 0xC10CB4.
    case 0xC10CB8: cpu.execute_instruction<0x8D>(0x00FFC9, 3); return true;
    // src/unknown/C4/C435E4.asm:12 CMP #.LOWORD(-1)
    case 0xC10CB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C435E4.asm:12 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10CB9.
    case 0xC10CBB: cpu.execute_instruction<0xFF>(0xAD5FF0, 4); return true;
    // src/unknown/C4/C435E4.asm:13 BEQ @UNKNOWN6
    case 0xC10CBC: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // src/unknown/C4/C435E4.asm:14 LDA CURRENT_FLASHING_ROW
    case 0xC10CBE: cpu.execute_instruction<0xAD>(0x008D0C, 3); return true;
    // src/unknown/C4/C435E4.asm:14 LDA CURRENT_FLASHING_ROW
    // Overlapping static entry reached from 0xC10CBB.
    case 0xC10CBF: cpu.execute_instruction<0x0C>(0x00F08D, 3); return true;
    // src/unknown/C4/C435E4.asm:15 BEQ @UNKNOWN0
    case 0xC10CC1: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C435E4.asm:15 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC10CBF.
    case 0xC10CC2: cpu.execute_instruction<0x05>(0x0000AE, 2); return true;
    // src/unknown/C4/C435E4.asm:16 LDX NUM_BATTLERS_IN_BACK_ROW
    case 0xC10CC3: cpu.execute_instruction<0xAE>(0x00AF2D, 3); return true;
    // src/unknown/C4/C435E4.asm:16 LDX NUM_BATTLERS_IN_BACK_ROW
    // Overlapping static entry reached from 0xC10CC2.
    case 0xC10CC4: cpu.execute_instruction<0x2D>(0x0080AF, 3); return true;
    // src/unknown/C4/C435E4.asm:17 BRA @UNKNOWN1
    case 0xC10CC6: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C435E4.asm:17 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC10CC4.
    case 0xC10CC7: cpu.execute_instruction<0x03>(0x0000AE, 2); return true;
    // src/unknown/C4/C435E4.asm:19 LDX NUM_BATTLERS_IN_FRONT_ROW
    case 0xC10CC8: cpu.execute_instruction<0xAE>(0x00AF2B, 3); return true;
    // src/unknown/C4/C435E4.asm:19 LDX NUM_BATTLERS_IN_FRONT_ROW
    // Overlapping static entry reached from 0xC10CC7.
    case 0xC10CC9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C435E4.asm:19 LDX NUM_BATTLERS_IN_FRONT_ROW
    // Overlapping static entry reached from 0xC10CC9.
    case 0xC10CCA: cpu.execute_instruction<0xAF>(0xA20286, 4); return true;
    // src/unknown/C4/C435E4.asm:21 STX @VIRTUAL02
    case 0xC10CCB: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C435E4.asm:22 LDX #0
    case 0xC10CCD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C435E4.asm:22 LDX #0
    // Overlapping static entry reached from 0xC10CCA.
    case 0xC10CCE: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C435E4.asm:22 LDX #0
    // Overlapping static entry reached from 0xC10CCD.
    case 0xC10CCF: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C435E4.asm:23 STX @LOCAL00
    case 0xC10CD0: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C435E4.asm:24 BRA @UNKNOWN5
    case 0xC10CD2: cpu.execute_instruction<0x80>(0x000032, 2); return true;
    // src/unknown/C4/C435E4.asm:26 LDA CURRENT_FLASHING_ROW
    case 0xC10CD4: cpu.execute_instruction<0xAD>(0x008D0C, 3); return true;
    // src/unknown/C4/C435E4.asm:27 BEQ @UNKNOWN3
    case 0xC10CD7: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C4/C435E4.asm:28 LDA BACK_ROW_BATTLERS,X
    case 0xC10CD9: cpu.execute_instruction<0xBD>(0x00AF57, 3); return true;
    // src/unknown/C4/C435E4.asm:29 AND #$00FF
    case 0xC10CDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C435E4.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC10CDC.
    case 0xC10CDE: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C4/C435E4.asm:30 LDY #.SIZEOF(battler)
    case 0xC10CDF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C4/C435E4.asm:30 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC10CDF.
    case 0xC10CE1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C435E4.asm:31 JSL MULT168
    case 0xC10CE2: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C4/C435E4.asm:32 TAX
    case 0xC10CE6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C435E4.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC10CE7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C435E4.asm:34 STZ BATTLERS_TABLE + battler::unknown74,X
    case 0xC10CE9: cpu.execute_instruction<0x9E>(0x00A1F8, 3); return true;
    // src/unknown/C4/C435E4.asm:35 BRA @UNKNOWN4
    case 0xC10CEC: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C4/C435E4.asm:38 LDA FRONT_ROW_BATTLERS,X
    case 0xC10CEE: cpu.execute_instruction<0xBD>(0x00AF4F, 3); return true;
    // src/unknown/C4/C435E4.asm:39 AND #$00FF
    case 0xC10CF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C435E4.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC10CF1.
    case 0xC10CF3: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C4/C435E4.asm:40 LDY #.SIZEOF(battler)
    case 0xC10CF4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C4/C435E4.asm:40 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC10CF4.
    case 0xC10CF6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C435E4.asm:41 JSL MULT168
    case 0xC10CF7: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C4/C435E4.asm:42 TAX
    case 0xC10CFB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C435E4.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC10CFC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C435E4.asm:44 STZ BATTLERS_TABLE + battler::unknown74,X
    case 0xC10CFE: cpu.execute_instruction<0x9E>(0x00A1F8, 3); return true;
    // src/unknown/C4/C435E4.asm:46 LDX @LOCAL00
    case 0xC10D01: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C435E4.asm:47 INX
    case 0xC10D03: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C435E4.asm:48 STX @LOCAL00
    case 0xC10D04: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C435E4.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC10D06: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C435E4.asm:51 TXA
    case 0xC10D08: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C435E4.asm:52 CMP @VIRTUAL02
    case 0xC10D09: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C435E4.asm:53 BCC @UNKNOWN2
    case 0xC10D0B: cpu.execute_instruction<0x90>(0x0000C7, 2); return true;
    // src/unknown/C4/C435E4.asm:54 STZ ENEMY_TARGETTING_FLASHING
    case 0xC10D0D: cpu.execute_instruction<0x9C>(0x00AF77, 3); return true;
    // src/unknown/C4/C435E4.asm:55 LDA #.LOWORD(-1)
    case 0xC10D10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C435E4.asm:55 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10D10.
    case 0xC10D12: cpu.execute_instruction<0xFF>(0x8D0C8D, 4); return true;
    // src/unknown/C4/C435E4.asm:56 STA CURRENT_FLASHING_ROW
    case 0xC10D13: cpu.execute_instruction<0x8D>(0x008D0C, 3); return true;
    // src/unknown/C4/C435E4.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC10D16: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C435E4.asm:58 LDA #1
    case 0xC10D18: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C4/C435E4.asm:59 STA REDRAW_ALL_WINDOWS
    case 0xC10D1A: cpu.execute_instruction<0x8D>(0x00991B, 3); return true;
    // src/unknown/C4/C435E4.asm:59 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10D18.
    case 0xC10D1B: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/unknown/C4/C435E4.asm:59 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10D1B.
    case 0xC10D1C: cpu.execute_instruction<0x99>(0x0020C2, 3); return true;
    // src/unknown/C4/C435E4.asm:61 REP #PROC_FLAGS::ACCUM8
    case 0xC10D1D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C435E4.asm:62 END_C_FUNCTION
    case 0xC10D1F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C435E4.asm:62 END_C_FUNCTION
    case 0xC10D20: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43657.asm (unresolved).
bool execute_unresolved_c4_c43657_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43657.asm:4 BEGIN_C_FUNCTION
    case 0xC10D21: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43657.asm:11 END_STACK_VARS
    case 0xC10D23: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C43657.asm:11 END_STACK_VARS
    case 0xC10D24: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43657.asm:11 END_STACK_VARS
    case 0xC10D25: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43657.asm:11 END_STACK_VARS
    case 0xC10D26: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43657.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC10D26.
    case 0xC10D28: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43657.asm:11 END_STACK_VARS
    case 0xC10D29: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C43657.asm:11 END_STACK_VARS
    case 0xC10D2A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C43657.asm:12 TAX
    case 0xC10D2B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43657.asm:13 STX @LOCAL00
    case 0xC10D2C: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C43657.asm:14 LDA CURRENT_FLASHING_ROW
    case 0xC10D2E: cpu.execute_instruction<0xAD>(0x008D0C, 3); return true;
    // src/unknown/C4/C43657.asm:15 CMP #.LOWORD(-1)
    case 0xC10D31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C43657.asm:15 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10D31.
    case 0xC10D33: cpu.execute_instruction<0xFF>(0x2003F0, 4); return true;
    // src/unknown/C4/C43657.asm:16 BEQ @UNKNOWN0
    case 0xC10D34: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C4/C43657.asm:18 JSR UNKNOWN_C435E4
    case 0xC10D36: cpu.execute_instruction<0x20>(0x000CAE, 3); return true;
    // src/unknown/C4/C43657.asm:18 JSR UNKNOWN_C435E4
    // Overlapping static entry reached from 0xC10D33.
    case 0xC10D37: cpu.execute_instruction<0xAE>(0x00A60C, 3); return true;
    // src/unknown/C4/C43657.asm:23 LDX @LOCAL00
    case 0xC10D39: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C43657.asm:23 LDX @LOCAL00
    // Overlapping static entry reached from 0xC10D37.
    case 0xC10D3A: cpu.execute_instruction<0x0E>(0x000C8E, 3); return true;
    // src/unknown/C4/C43657.asm:24 STX CURRENT_FLASHING_ROW
    case 0xC10D3B: cpu.execute_instruction<0x8E>(0x008D0C, 3); return true;
    // src/unknown/C4/C43657.asm:24 STX CURRENT_FLASHING_ROW
    // Overlapping static entry reached from 0xC10D3A.
    case 0xC10D3D: cpu.execute_instruction<0x8D>(0x000CAD, 3); return true;
    // src/unknown/C4/C43657.asm:25 LDA CURRENT_FLASHING_ROW
    case 0xC10D3E: cpu.execute_instruction<0xAD>(0x008D0C, 3); return true;
    // src/unknown/C4/C43657.asm:25 LDA CURRENT_FLASHING_ROW
    // Overlapping static entry reached from 0xC10D3D.
    case 0xC10D40: cpu.execute_instruction<0x8D>(0x0005F0, 3); return true;
    // src/unknown/C4/C43657.asm:26 BEQ @UNKNOWN1
    case 0xC10D41: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C43657.asm:27 LDA NUM_BATTLERS_IN_BACK_ROW
    case 0xC10D43: cpu.execute_instruction<0xAD>(0x00AF2D, 3); return true;
    // src/unknown/C4/C43657.asm:28 BRA @UNKNOWN2
    case 0xC10D46: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C43657.asm:30 LDA NUM_BATTLERS_IN_FRONT_ROW
    case 0xC10D48: cpu.execute_instruction<0xAD>(0x00AF2B, 3); return true;
    // src/unknown/C4/C43657.asm:32 STA @VIRTUAL02
    case 0xC10D4B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C43657.asm:33 LDX #0
    case 0xC10D4D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C43657.asm:33 LDX #0
    // Overlapping static entry reached from 0xC10D4D.
    case 0xC10D4F: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C43657.asm:34 STX @LOCAL00
    case 0xC10D50: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C43657.asm:35 BRA @UNKNOWN6
    case 0xC10D52: cpu.execute_instruction<0x80>(0x000036, 2); return true;
    // src/unknown/C4/C43657.asm:37 LDA CURRENT_FLASHING_ROW
    case 0xC10D54: cpu.execute_instruction<0xAD>(0x008D0C, 3); return true;
    // src/unknown/C4/C43657.asm:38 BEQ @UNKNOWN4
    case 0xC10D57: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/unknown/C4/C43657.asm:39 LDA BACK_ROW_BATTLERS,X
    case 0xC10D59: cpu.execute_instruction<0xBD>(0x00AF57, 3); return true;
    // src/unknown/C4/C43657.asm:40 AND #$00FF
    case 0xC10D5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C43657.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC10D5C.
    case 0xC10D5E: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C4/C43657.asm:41 LDY #.SIZEOF(battler)
    case 0xC10D5F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C4/C43657.asm:41 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC10D5F.
    case 0xC10D61: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C43657.asm:42 JSL MULT168
    case 0xC10D62: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C4/C43657.asm:43 TAX
    case 0xC10D66: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43657.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC10D67: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C43657.asm:45 LDA #1
    case 0xC10D69: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/unknown/C4/C43657.asm:46 STA BATTLERS_TABLE + battler::unknown74,X
    case 0xC10D6B: cpu.execute_instruction<0x9D>(0x00A1F8, 3); return true;
    // src/unknown/C4/C43657.asm:46 STA BATTLERS_TABLE + battler::unknown74,X
    // Overlapping static entry reached from 0xC10D69.
    case 0xC10D6C: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // src/unknown/C4/C43657.asm:46 STA BATTLERS_TABLE + battler::unknown74,X
    // Overlapping static entry reached from 0xC10D6C.
    case 0xC10D6D: cpu.execute_instruction<0xA1>(0x000080, 2); return true;
    // src/unknown/C4/C43657.asm:47 BRA @UNKNOWN5
    case 0xC10D6E: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/unknown/C4/C43657.asm:47 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC10D6D.
    case 0xC10D6F: cpu.execute_instruction<0x15>(0x0000BD, 2); return true;
    // src/unknown/C4/C43657.asm:50 LDA FRONT_ROW_BATTLERS,X
    case 0xC10D70: cpu.execute_instruction<0xBD>(0x00AF4F, 3); return true;
    // src/unknown/C4/C43657.asm:50 LDA FRONT_ROW_BATTLERS,X
    // Overlapping static entry reached from 0xC10D6F.
    case 0xC10D71: cpu.execute_instruction<0x4F>(0xFF29AF, 4); return true;
    // src/unknown/C4/C43657.asm:51 AND #$00FF
    case 0xC10D73: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C43657.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xC10D73.
    case 0xC10D75: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C4/C43657.asm:52 LDY #.SIZEOF(battler)
    case 0xC10D76: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/unknown/C4/C43657.asm:52 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC10D76.
    case 0xC10D78: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C43657.asm:53 JSL MULT168
    case 0xC10D79: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C4/C43657.asm:54 TAX
    case 0xC10D7D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43657.asm:55 SEP #PROC_FLAGS::ACCUM8
    case 0xC10D7E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C43657.asm:56 LDA #1
    case 0xC10D80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/unknown/C4/C43657.asm:57 STA BATTLERS_TABLE + battler::unknown74,X
    case 0xC10D82: cpu.execute_instruction<0x9D>(0x00A1F8, 3); return true;
    // src/unknown/C4/C43657.asm:57 STA BATTLERS_TABLE + battler::unknown74,X
    // Overlapping static entry reached from 0xC10D80.
    case 0xC10D83: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // src/unknown/C4/C43657.asm:57 STA BATTLERS_TABLE + battler::unknown74,X
    // Overlapping static entry reached from 0xC10D83.
    case 0xC10D84: cpu.execute_instruction<0xA1>(0x0000A6, 2); return true;
    // src/unknown/C4/C43657.asm:59 LDX @LOCAL00
    case 0xC10D85: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C43657.asm:59 LDX @LOCAL00
    // Overlapping static entry reached from 0xC10D84.
    case 0xC10D86: cpu.execute_instruction<0x0E>(0x0086E8, 3); return true;
    // src/unknown/C4/C43657.asm:60 INX
    case 0xC10D87: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C43657.asm:61 STX @LOCAL00
    case 0xC10D88: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C43657.asm:61 STX @LOCAL00
    // Overlapping static entry reached from 0xC10D86.
    case 0xC10D89: cpu.execute_instruction<0x0E>(0x0020C2, 3); return true;
    // src/unknown/C4/C43657.asm:63 REP #PROC_FLAGS::ACCUM8
    case 0xC10D8A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C43657.asm:64 TXA
    case 0xC10D8C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C43657.asm:65 CMP @VIRTUAL02
    case 0xC10D8D: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C43657.asm:66 BCC @UNKNOWN3
    case 0xC10D8F: cpu.execute_instruction<0x90>(0x0000C3, 2); return true;
    // src/unknown/C4/C43657.asm:67 LDA #1
    case 0xC10D91: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C43657.asm:67 LDA #1
    // Overlapping static entry reached from 0xC10D91.
    case 0xC10D93: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C43657.asm:68 STA ENEMY_TARGETTING_FLASHING
    case 0xC10D94: cpu.execute_instruction<0x8D>(0x00AF77, 3); return true;
    // src/unknown/C4/C43657.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC10D97: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C43657.asm:70 STA REDRAW_ALL_WINDOWS
    case 0xC10D99: cpu.execute_instruction<0x8D>(0x00991B, 3); return true;
    // src/unknown/C4/C43657.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC10D9C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43657.asm:72 END_C_FUNCTION
    case 0xC10D9E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C43657.asm:72 END_C_FUNCTION
    case 0xC10D9F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C436D7.asm (unresolved).
bool execute_unresolved_c4_c436d7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C436D7.asm:4 BEGIN_C_FUNCTION
    case 0xC10EDF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C436D7.asm:13 END_STACK_VARS
    case 0xC10EE1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C436D7.asm:13 END_STACK_VARS
    case 0xC10EE2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C436D7.asm:13 END_STACK_VARS
    case 0xC10EE3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C436D7.asm:13 END_STACK_VARS
    case 0xC10EE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C436D7.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC10EE4.
    case 0xC10EE6: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C436D7.asm:13 END_STACK_VARS
    case 0xC10EE7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C436D7.asm:13 END_STACK_VARS
    case 0xC10EE8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:14 STX @LOCAL02
    case 0xC10EE9: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C436D7.asm:14 STX @LOCAL02
    // Overlapping static entry reached from 0xC10EE6.
    case 0xC10EEA: cpu.execute_instruction<0x12>(0x00000A, 2); return true;
    // src/unknown/C4/C436D7.asm:15 ASL
    case 0xC10EEB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:16 TAX
    case 0xC10EEC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:17 LDY OPEN_WINDOW_TABLE,X
    case 0xC10EED: cpu.execute_instruction<0xBC>(0x008C26, 3); return true;
    // src/unknown/C4/C436D7.asm:18 STY @LOCAL01
    case 0xC10EF0: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C436D7.asm:19 TYA
    case 0xC10EF2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:20 LDY #.SIZEOF(window_stats)
    case 0xC10EF3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C4/C436D7.asm:20 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10EF3.
    case 0xC10EF5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C436D7.asm:21 JSL MULT168
    case 0xC10EF6: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C4/C436D7.asm:22 PHA
    case 0xC10EFA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:23 TAX
    case 0xC10EFB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:24 LDY WINDOW_STATS+window_stats::width,X
    case 0xC10EFC: cpu.execute_instruction<0xBC>(0x0089CC, 3); return true;
    // src/unknown/C4/C436D7.asm:25 LDX @LOCAL02
    case 0xC10EFF: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C436D7.asm:26 TXA
    case 0xC10F01: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:27 JSL MULT16
    case 0xC10F02: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C436D7.asm:28 ASL
    case 0xC10F06: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:29 ASL
    case 0xC10F07: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:30 PLX
    case 0xC10F08: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:31 CLC
    case 0xC10F09: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:32 ADC WINDOW_STATS+window_stats::tilemap_address,X
    case 0xC10F0A: cpu.execute_instruction<0x7D>(0x0089F7, 3); return true;
    // src/unknown/C4/C436D7.asm:33 TAX
    case 0xC10F0D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:34 STX @LOCAL00
    case 0xC10F0E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C436D7.asm:35 LDA #0
    case 0xC10F10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C436D7.asm:35 LDA #0
    // Overlapping static entry reached from 0xC10F10.
    case 0xC10F12: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C436D7.asm:36 STA @LOCAL02
    case 0xC10F13: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C436D7.asm:37 BRA @UNKNOWN1
    case 0xC10F15: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C4/C436D7.asm:39 LDA #64
    case 0xC10F17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/unknown/C4/C436D7.asm:39 LDA #64
    // Overlapping static entry reached from 0xC10F17.
    case 0xC10F19: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C4/C436D7.asm:40 LDX @LOCAL00
    case 0xC10F1A: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C436D7.asm:41 STA __BSS_START__,X
    case 0xC10F1C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C436D7.asm:42 INX
    case 0xC10F1F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:43 INX
    case 0xC10F20: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:44 STX @LOCAL00
    case 0xC10F21: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C436D7.asm:45 LDA @LOCAL02
    case 0xC10F23: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C436D7.asm:46 INC
    case 0xC10F25: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:47 STA @LOCAL02
    case 0xC10F26: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C436D7.asm:49 LDY @LOCAL01
    case 0xC10F28: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C436D7.asm:50 TYA
    case 0xC10F2A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:51 LDY #.SIZEOF(window_stats)
    case 0xC10F2B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C4/C436D7.asm:51 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10F2B.
    case 0xC10F2D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C436D7.asm:52 JSL MULT168
    case 0xC10F2E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C4/C436D7.asm:53 TAX
    case 0xC10F32: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:54 LDA WINDOW_STATS+window_stats::width,X
    case 0xC10F33: cpu.execute_instruction<0xBD>(0x0089CC, 3); return true;
    // src/unknown/C4/C436D7.asm:55 ASL
    case 0xC10F36: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C436D7.asm:56 STA @VIRTUAL02
    case 0xC10F37: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C436D7.asm:57 LDA @LOCAL02
    case 0xC10F39: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C436D7.asm:58 CMP @VIRTUAL02
    case 0xC10F3B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C436D7.asm:59 BNE @UNKNOWN0
    case 0xC10F3D: cpu.execute_instruction<0xD0>(0x0000D8, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C436D7.asm:60 END_C_FUNCTION
    case 0xC10F3F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C436D7.asm:60 END_C_FUNCTION
    case 0xC10F40: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43739-jp.asm (unresolved).
bool execute_unresolved_c4_c43739_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43739-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC10F41: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43739-jp.asm:7 END_STACK_VARS
    case 0xC10F43: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C43739-jp.asm:7 END_STACK_VARS
    case 0xC10F44: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43739-jp.asm:7 END_STACK_VARS
    case 0xC10F45: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43739-jp.asm:7 END_STACK_VARS
    case 0xC10F46: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43739-jp.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC10F46.
    case 0xC10F48: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43739-jp.asm:7 END_STACK_VARS
    case 0xC10F49: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C43739-jp.asm:7 END_STACK_VARS
    case 0xC10F4A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C43739-jp.asm:8 STA @LOCAL00
    case 0xC10F4B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C43739-jp.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC10F48.
    case 0xC10F4C: cpu.execute_instruction<0x0E>(0x00AA0A, 3); return true;
    // src/unknown/C4/C43739-jp.asm:9 ASL
    case 0xC10F4D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43739-jp.asm:10 TAX
    case 0xC10F4E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43739-jp.asm:11 LDA OPEN_WINDOW_TABLE,X
    case 0xC10F4F: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C4/C43739-jp.asm:12 LDY #.SIZEOF(window_stats)
    case 0xC10F52: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C4/C43739-jp.asm:12 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10F52.
    case 0xC10F54: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C43739-jp.asm:13 JSL MULT168
    case 0xC10F55: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C4/C43739-jp.asm:14 TAX
    case 0xC10F59: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43739-jp.asm:15 LDA WINDOW_STATS + window_stats::text_y,X
    case 0xC10F5A: cpu.execute_instruction<0xBD>(0x0089D2, 3); return true;
    // src/unknown/C4/C43739-jp.asm:16 TAX
    case 0xC10F5D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43739-jp.asm:17 LDA @LOCAL00
    case 0xC10F5E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C43739-jp.asm:18 JSR UNKNOWN_C436D7
    case 0xC10F60: cpu.execute_instruction<0x20>(0x000EDF, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43739-jp.asm:19 END_C_FUNCTION
    case 0xC10F63: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C43739-jp.asm:19 END_C_FUNCTION
    case 0xC10F64: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C437B8-jp.asm (unresolved).
bool execute_unresolved_c4_c437b8_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C437B8-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC10F65: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C437B8-jp.asm:12 END_STACK_VARS
    case 0xC10F67: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C437B8-jp.asm:12 END_STACK_VARS
    case 0xC10F68: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C437B8-jp.asm:12 END_STACK_VARS
    case 0xC10F69: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C437B8-jp.asm:12 END_STACK_VARS
    case 0xC10F6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C437B8-jp.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC10F6A.
    case 0xC10F6C: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C437B8-jp.asm:12 END_STACK_VARS
    case 0xC10F6D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C437B8-jp.asm:12 END_STACK_VARS
    case 0xC10F6E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C437B8-jp.asm:13 STA @LOCAL05
    case 0xC10F6F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:13 STA @LOCAL05
    // Overlapping static entry reached from 0xC10F6C.
    case 0xC10F70: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C437B8-jp.asm:14 ASL
    case 0xC10F71: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C437B8-jp.asm:15 TAX
    case 0xC10F72: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C437B8-jp.asm:16 LDA OPEN_WINDOW_TABLE,X
    case 0xC10F73: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C4/C437B8-jp.asm:17 STA @VIRTUAL04
    case 0xC10F76: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:18 LDY #.SIZEOF(window_stats)
    case 0xC10F78: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C4/C437B8-jp.asm:18 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10F78.
    case 0xC10F7A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:19 JSL MULT168
    case 0xC10F7B: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C4/C437B8-jp.asm:20 TAX
    case 0xC10F7F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C437B8-jp.asm:21 LDA WINDOW_STATS + window_stats::tilemap_address,X
    case 0xC10F80: cpu.execute_instruction<0xBD>(0x0089F7, 3); return true;
    // src/unknown/C4/C437B8-jp.asm:22 STA @LOCAL04
    case 0xC10F83: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:23 LDA WINDOW_STATS + window_stats::width,X
    case 0xC10F85: cpu.execute_instruction<0xBD>(0x0089CC, 3); return true;
    // src/unknown/C4/C437B8-jp.asm:24 ASL
    case 0xC10F88: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C437B8-jp.asm:25 ASL
    case 0xC10F89: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C437B8-jp.asm:26 STA @VIRTUAL02
    case 0xC10F8A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:27 LDA @LOCAL04
    case 0xC10F8C: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:28 CLC
    case 0xC10F8E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C437B8-jp.asm:29 ADC @VIRTUAL02
    case 0xC10F8F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:30 STA @VIRTUAL02
    case 0xC10F91: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:31 STA @LOCAL03
    case 0xC10F93: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:32 LDA @LOCAL04
    case 0xC10F95: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:33 TAY
    case 0xC10F97: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C437B8-jp.asm:34 STY @LOCAL02
    case 0xC10F98: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:35 LDX #0
    case 0xC10F9A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C437B8-jp.asm:35 LDX #0
    // Overlapping static entry reached from 0xC10F9A.
    case 0xC10F9C: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:36 STX @LOCAL01
    case 0xC10F9D: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:37 BRA @UNKNOWN1
    case 0xC10F9F: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:39 LDA @LOCAL03
    case 0xC10FA1: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:40 STA @VIRTUAL02
    case 0xC10FA3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:41 LDX @VIRTUAL02
    case 0xC10FA5: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:42 LDA __BSS_START__,X
    case 0xC10FA7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C437B8-jp.asm:43 LDY @LOCAL02
    case 0xC10FAA: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:44 STA __BSS_START__,Y
    case 0xC10FAC: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C437B8-jp.asm:45 INC @VIRTUAL02
    case 0xC10FAF: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:46 INC @VIRTUAL02
    case 0xC10FB1: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:47 LDA @VIRTUAL02
    case 0xC10FB3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:48 STA @LOCAL03
    case 0xC10FB5: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:49 INY
    case 0xC10FB7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C437B8-jp.asm:50 INY
    case 0xC10FB8: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C437B8-jp.asm:51 STY @LOCAL02
    case 0xC10FB9: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:52 LDX @LOCAL01
    case 0xC10FBB: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:53 INX
    case 0xC10FBD: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C437B8-jp.asm:54 STX @LOCAL01
    case 0xC10FBE: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:56 LDA @VIRTUAL04
    case 0xC10FC0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:57 LDY #.SIZEOF(window_stats)
    case 0xC10FC2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C4/C437B8-jp.asm:57 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10FC2.
    case 0xC10FC4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:58 JSL MULT168
    case 0xC10FC5: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C4/C437B8-jp.asm:59 STA @LOCAL04
    case 0xC10FC9: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:60 LDY #.LOWORD(WINDOW_STATS) + window_stats::height
    case 0xC10FCB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000CE, 2); else cpu.execute_instruction<0xA0>(0x0089CE, 3); return true;
    // src/unknown/C4/C437B8-jp.asm:60 LDY #.LOWORD(WINDOW_STATS) + window_stats::height
    // Overlapping static entry reached from 0xC10FCB.
    case 0xC10FCD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000B1, 2); else cpu.execute_instruction<0x89>(0x0016B1, 3); return true;
    // src/unknown/C4/C437B8-jp.asm:61 LDA (@LOCAL04),Y
    case 0xC10FCE: cpu.execute_instruction<0xB1>(0x000016, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:61 LDA (@LOCAL04),Y
    // Overlapping static entry reached from 0xC10FCD.
    case 0xC10FCF: cpu.execute_instruction<0x16>(0x000085, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:62 STA @LOCAL00
    case 0xC10FD0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:62 STA @LOCAL00
    // Overlapping static entry reached from 0xC10FCF.
    case 0xC10FD1: cpu.execute_instruction<0x0E>(0x00CCA0, 3); return true;
    // src/unknown/C4/C437B8-jp.asm:63 LDY #.LOWORD(WINDOW_STATS) + window_stats::width
    case 0xC10FD2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000CC, 2); else cpu.execute_instruction<0xA0>(0x0089CC, 3); return true;
    // src/unknown/C4/C437B8-jp.asm:63 LDY #.LOWORD(WINDOW_STATS) + window_stats::width
    // Overlapping static entry reached from 0xC10FD2.
    case 0xC10FD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000B1, 2); else cpu.execute_instruction<0x89>(0x0016B1, 3); return true;
    // src/unknown/C4/C437B8-jp.asm:64 LDA (@LOCAL04),Y
    case 0xC10FD5: cpu.execute_instruction<0xB1>(0x000016, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:64 LDA (@LOCAL04),Y
    // Overlapping static entry reached from 0xC10FD4.
    case 0xC10FD6: cpu.execute_instruction<0x16>(0x0000A8, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:65 TAY
    case 0xC10FD7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C437B8-jp.asm:66 LDA @LOCAL00
    case 0xC10FD8: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:67 DEC
    case 0xC10FDA: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C437B8-jp.asm:68 DEC
    case 0xC10FDB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C437B8-jp.asm:69 JSL MULT16
    case 0xC10FDC: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C437B8-jp.asm:70 STA @VIRTUAL02
    case 0xC10FE0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:71 TXA
    case 0xC10FE2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C437B8-jp.asm:72 CMP @VIRTUAL02
    case 0xC10FE3: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:73 BNE @UNKNOWN0
    case 0xC10FE5: cpu.execute_instruction<0xD0>(0x0000BA, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:74 LDA @LOCAL00
    case 0xC10FE7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:75 LSR
    case 0xC10FE9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C437B8-jp.asm:76 TAX
    case 0xC10FEA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C437B8-jp.asm:77 DEX
    case 0xC10FEB: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C437B8-jp.asm:78 LDA @LOCAL05
    case 0xC10FEC: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C437B8-jp.asm:79 JSR UNKNOWN_C436D7
    case 0xC10FEE: cpu.execute_instruction<0x20>(0x000EDF, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C437B8-jp.asm:80 END_C_FUNCTION
    case 0xC10FF1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C437B8-jp.asm:80 END_C_FUNCTION
    case 0xC10FF2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C43874.asm (unresolved).
bool execute_unresolved_c4_c43874_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C43874.asm:4 BEGIN_C_FUNCTION
    case 0xC11140: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C43874.asm:16 END_STACK_VARS
    case 0xC11142: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C43874.asm:16 END_STACK_VARS
    case 0xC11143: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C43874.asm:16 END_STACK_VARS
    case 0xC11144: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43874.asm:16 END_STACK_VARS
    case 0xC11145: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C43874.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC11145.
    case 0xC11147: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C43874.asm:16 END_STACK_VARS
    case 0xC11148: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C43874.asm:16 END_STACK_VARS
    case 0xC11149: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C43874.asm:17 STY @VIRTUAL02
    case 0xC1114A: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C43874.asm:17 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC11147.
    case 0xC1114B: cpu.execute_instruction<0x02>(0x00009B, 2); return true;
    // src/unknown/C4/C43874.asm:18 TXY
    case 0xC1114C: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C43874.asm:19 STY @LOCAL01
    case 0xC1114D: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C43874.asm:25 ASL
    case 0xC1114F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C43874.asm:26 TAX
    case 0xC11150: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43874.asm:27 LDA OPEN_WINDOW_TABLE,X
    case 0xC11151: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C4/C43874.asm:28 LDY #.SIZEOF(window_stats)
    case 0xC11154: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C4/C43874.asm:28 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11154.
    case 0xC11156: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C43874.asm:29 JSL MULT168
    case 0xC11157: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C4/C43874.asm:30 TAX
    case 0xC1115B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C43874.asm:31 LDY @LOCAL01
    case 0xC1115C: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C43874.asm:32 TYA
    case 0xC1115E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C43874.asm:33 STA WINDOW_STATS + window_stats::text_x,X
    case 0xC1115F: cpu.execute_instruction<0x9D>(0x0089D0, 3); return true;
    // src/unknown/C4/C43874.asm:34 LDA @VIRTUAL02
    case 0xC11162: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C43874.asm:35 STA WINDOW_STATS + window_stats::text_y,X
    case 0xC11164: cpu.execute_instruction<0x9D>(0x0089D2, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C43874.asm:36 END_C_FUNCTION
    case 0xC11167: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C43874.asm:36 END_C_FUNCTION
    case 0xC11168: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C438A5.asm (unresolved).
bool execute_unresolved_c4_c438a5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C438A5.asm:4 BEGIN_C_FUNCTION
    case 0xC11169: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C438A5.asm:9 TXY
    case 0xC1116B: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C438A5.asm:10 TAX
    case 0xC1116C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C438A5.asm:11 LDA CURRENT_FOCUS_WINDOW
    case 0xC1116D: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C4/C438A5.asm:13 JSR UNKNOWN_C43874
    case 0xC11170: cpu.execute_instruction<0x20>(0x001140, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C438A5.asm:17 END_C_FUNCTION
    case 0xC11173: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C451FA-jp.asm (unresolved).
bool execute_unresolved_c4_c451fa_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C451FA-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC11DEA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C451FA-jp.asm:22 END_STACK_VARS
    case 0xC11DEC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C451FA-jp.asm:22 END_STACK_VARS
    case 0xC11DED: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C451FA-jp.asm:22 END_STACK_VARS
    case 0xC11DEE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C451FA-jp.asm:22 END_STACK_VARS
    case 0xC11DEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D2, 2); else cpu.execute_instruction<0x69>(0x00FFD2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C451FA-jp.asm:22 END_STACK_VARS
    // Overlapping static entry reached from 0xC11DEF.
    case 0xC11DF1: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C451FA-jp.asm:22 END_STACK_VARS
    case 0xC11DF2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C451FA-jp.asm:22 END_STACK_VARS
    case 0xC11DF3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:23 STY @LOCAL0D
    case 0xC11DF4: cpu.execute_instruction<0x84>(0x00002C, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:23 STY @LOCAL0D
    // Overlapping static entry reached from 0xC11DF1.
    case 0xC11DF5: cpu.execute_instruction<0x2C>(0x00849B, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:24 TXY
    case 0xC11DF6: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:25 STY @LOCAL0C
    case 0xC11DF7: cpu.execute_instruction<0x84>(0x00002A, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:25 STY @LOCAL0C
    // Overlapping static entry reached from 0xC11DF5.
    case 0xC11DF8: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:26 STA @VIRTUAL02
    case 0xC11DF9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:27 STA @LOCAL0B
    case 0xC11DFB: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:28 LDA CURRENT_FOCUS_WINDOW
    case 0xC11DFD: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:29 ASL
    case 0xC11E00: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:30 TAX
    case 0xC11E01: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:31 LDA OPEN_WINDOW_TABLE,X
    case 0xC11E02: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:32 LDY #.SIZEOF(window_stats)
    case 0xC11E05: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:32 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11E05.
    case 0xC11E07: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:33 JSL MULT168
    case 0xC11E08: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C4/C451FA-jp.asm:34 CLC
    case 0xC11E0C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:35 ADC #.LOWORD(WINDOW_STATS)
    case 0xC11E0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:35 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC11E0D.
    case 0xC11E0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x002685, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:36 STA @LOCAL0A
    case 0xC11E10: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:36 STA @LOCAL0A
    // Overlapping static entry reached from 0xC11E0F.
    case 0xC11E11: cpu.execute_instruction<0x26>(0x000018, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:37 CLC
    case 0xC11E12: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:38 ADC #window_stats::current_option
    case 0xC11E13: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002B, 2); else cpu.execute_instruction<0x69>(0x00002B, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:38 ADC #window_stats::current_option
    // Overlapping static entry reached from 0xC11E13.
    case 0xC11E15: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:39 TAX
    case 0xC11E16: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:40 LDA __BSS_START__,X
    case 0xC11E17: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:41 CMP #.LOWORD(-1)
    case 0xC11E1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:41 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11E1A.
    case 0xC11E1C: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C451FA-jp.asm:42 BEQL @UNKNOWN24
    case 0xC11E1D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C451FA-jp.asm:42 BEQL @UNKNOWN24
    case 0xC11E1F: cpu.execute_instruction<0x4C>(0x001FA4, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C451FA-jp.asm:42 BEQL @UNKNOWN24
    // Overlapping static entry reached from 0xC11E1C.
    case 0xC11E20: cpu.execute_instruction<0xA4>(0x00001F, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:43 LDA @VIRTUAL02
    case 0xC11E22: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:44 LDY #window_stats::unknown49
    case 0xC11E24: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000031, 2); else cpu.execute_instruction<0xA0>(0x000031, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:44 LDY #window_stats::unknown49
    // Overlapping static entry reached from 0xC11E24.
    case 0xC11E26: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:45 STA (@LOCAL0A),Y
    case 0xC11E27: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:46 LDA __BSS_START__,X
    case 0xC11E29: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:47 STA @LOCAL09
    case 0xC11E2C: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/unknown/C4/C451FA-jp.asm:48 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11E2E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:48 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11E30: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:48 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11E31: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/unknown/C4/C451FA-jp.asm:48 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11E32: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:48 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11E34: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/unknown/C4/C451FA-jp.asm:48 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11E35: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:48 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11E37: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:48 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11E38: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:49 CLC
    case 0xC11E39: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:50 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC11E3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:50 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC11E3A.
    case 0xC11E3C: cpu.execute_instruction<0x8D>(0x000485, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:51 STA @VIRTUAL04
    case 0xC11E3D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:52 LDY @LOCAL0C
    case 0xC11E3F: cpu.execute_instruction<0xA4>(0x00002A, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:53 LDA @VIRTUAL02
    case 0xC11E41: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:54 DEC
    case 0xC11E43: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:55 JSL MULT16
    case 0xC11E44: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C451FA-jp.asm:56 LDY #window_stats::width
    case 0xC11E48: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:56 LDY #window_stats::width
    // Overlapping static entry reached from 0xC11E48.
    case 0xC11E4A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:57 CLC
    case 0xC11E4B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:58 ADC (@LOCAL0A),Y
    case 0xC11E4C: cpu.execute_instruction<0x71>(0x000026, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:59 LDY @VIRTUAL02
    case 0xC11E4E: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:60 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC11E50: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/unknown/C4/C451FA-jp.asm:61 STA @LOCAL08
    case 0xC11E54: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:63 LDY #window_stats::height
    case 0xC11E56: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:63 LDY #window_stats::height
    // Overlapping static entry reached from 0xC11E56.
    case 0xC11E58: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:64 LDA (@LOCAL0A),Y
    case 0xC11E59: cpu.execute_instruction<0xB1>(0x000026, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:65 LSR
    case 0xC11E5B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:66 TAX
    case 0xC11E5C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:67 STX @LOCAL07
    case 0xC11E5D: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:68 LDA @LOCAL09
    case 0xC11E5F: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:69 JSR UNKNOWN_C1138D
    case 0xC11E61: cpu.execute_instruction<0x20>(0x0019B4, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:70 LDX @LOCAL07
    case 0xC11E64: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:71 LDY @VIRTUAL02
    case 0xC11E66: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:72 CLC
    case 0xC11E68: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:73 ADC @VIRTUAL02
    case 0xC11E69: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:74 DEC
    case 0xC11E6B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:75 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC11E6C: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/unknown/C4/C451FA-jp.asm:76 STX @VIRTUAL02
    case 0xC11E70: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:77 CMP @VIRTUAL02
    case 0xC11E72: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C451FA-jp.asm:78 BLTEQ @UNKNOWN7
    case 0xC11E74: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C451FA-jp.asm:78 BLTEQ @UNKNOWN7
    case 0xC11E76: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:79 DEX
    case 0xC11E78: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:80 DEX
    case 0xC11E79: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:82 STX @LOCAL09
    case 0xC11E7A: cpu.execute_instruction<0x86>(0x000024, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:83 STZ @LOCAL06
    case 0xC11E7C: cpu.execute_instruction<0x64>(0x00001E, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:84 LDA #1
    case 0xC11E7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:84 LDA #1
    // Overlapping static entry reached from 0xC11E7E.
    case 0xC11E80: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:85 STA @LOCAL05
    case 0xC11E81: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:87 LDY #window_stats::text_y
    case 0xC11E83: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x000010, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:87 LDY #window_stats::text_y
    // Overlapping static entry reached from 0xC11E83.
    case 0xC11E85: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:88 LDA (@LOCAL0A),Y
    case 0xC11E86: cpu.execute_instruction<0xB1>(0x000026, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:89 STA @LOCAL07
    case 0xC11E88: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:90 LDA @LOCAL09
    case 0xC11E8A: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:91 STA @LOCAL04
    case 0xC11E8C: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:92 BRA @UNKNOWN19
    case 0xC11E8E: cpu.execute_instruction<0x80>(0x000070, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:94 LDA @LOCAL0B
    case 0xC11E90: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:95 STA @VIRTUAL02
    case 0xC11E92: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:96 LDY @VIRTUAL02
    case 0xC11E94: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:97 STY @LOCAL03
    case 0xC11E96: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:98 BRA @UNKNOWN17
    case 0xC11E98: cpu.execute_instruction<0x80>(0x00005E, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:100 LDA @LOCAL0D
    case 0xC11E9A: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:101 BEQ @UNKNOWN12
    case 0xC11E9C: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:102 LDX #30
    case 0xC11E9E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001E, 2); else cpu.execute_instruction<0xA2>(0x00001E, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:102 LDX #30
    // Overlapping static entry reached from 0xC11E9E.
    case 0xC11EA0: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:103 LDA @VIRTUAL04
    case 0xC11EA1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:104 CLC
    case 0xC11EA3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:105 ADC #menu_option::label
    case 0xC11EA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:105 ADC #menu_option::label
    // Overlapping static entry reached from 0xC11EA4.
    case 0xC11EA6: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:106 JSR UNKNOWN_C117E2
    case 0xC11EA7: cpu.execute_instruction<0x20>(0x001DBF, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:106 JSR UNKNOWN_C117E2
    // Overlapping static entry reached from 0xC1AC83.
    case 0xC11EA9: cpu.execute_instruction<0x1D>(0x000285, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:107 STA @VIRTUAL02
    case 0xC11EAA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:108 LDA @LOCAL08
    case 0xC11EAC: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:109 SEC
    case 0xC11EAE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:110 SBC @VIRTUAL02
    case 0xC11EAF: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:111 LSR
    case 0xC11EB1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:112 BRA @UNKNOWN15
    case 0xC11EB2: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:114 LDA #0
    case 0xC11EB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:114 LDA #0
    // Overlapping static entry reached from 0xC11EB4.
    case 0xC11EB6: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:116 CLC
    case 0xC11EB7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:117 ADC @LOCAL06
    case 0xC11EB8: cpu.execute_instruction<0x65>(0x00001E, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:118 LDX @VIRTUAL04
    case 0xC11EBA: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:119 STA a:menu_option::text_x,X
    case 0xC11EBC: cpu.execute_instruction<0x9D>(0x000008, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:120 LDA @LOCAL07
    case 0xC11EBF: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:121 LDX @VIRTUAL04
    case 0xC11EC1: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:122 STA a:menu_option::text_y,X
    case 0xC11EC3: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:123 LDA @LOCAL05
    case 0xC11EC6: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:124 LDX @VIRTUAL04
    case 0xC11EC8: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:125 STA a:menu_option::page,X
    case 0xC11ECA: cpu.execute_instruction<0x9D>(0x000006, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:126 LDX @VIRTUAL04
    case 0xC11ECD: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:127 LDA a:menu_option::next,X
    case 0xC11ECF: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:128 STA @LOCAL02
    case 0xC11ED2: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:129 CMP #.LOWORD(-1)
    case 0xC11ED4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:129 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11ED4.
    case 0xC11ED6: cpu.execute_instruction<0xFF>(0xA530F0, 4); return true;
    // src/unknown/C4/C451FA-jp.asm:130 BEQ @UNKNOWN21
    case 0xC11ED7: cpu.execute_instruction<0xF0>(0x000030, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:131 LDA @LOCAL06
    case 0xC11ED9: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:131 LDA @LOCAL06
    // Overlapping static entry reached from 0xC11ED6.
    case 0xC11EDA: cpu.execute_instruction<0x1E>(0x006518, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:132 CLC
    case 0xC11EDB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:133 ADC @LOCAL08
    case 0xC11EDC: cpu.execute_instruction<0x65>(0x000022, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:133 ADC @LOCAL08
    // Overlapping static entry reached from 0xC11EDA.
    case 0xC11EDD: cpu.execute_instruction<0x22>(0xA51E85, 4); return true;
    // src/unknown/C4/C451FA-jp.asm:134 STA @LOCAL06
    case 0xC11EDE: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:135 LDA @LOCAL02
    case 0xC11EE0: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:135 LDA @LOCAL02
    // Overlapping static entry reached from 0xC11EDD.
    case 0xC11EE1: cpu.execute_instruction<0x16>(0x000085, 2); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/unknown/C4/C451FA-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11EE2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/unknown/C4/C451FA-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11EE1.
    case 0xC11EE3: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11EE4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11EE5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/unknown/C4/C451FA-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11EE6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11EE8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/unknown/C4/C451FA-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11EE9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11EEB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11EEC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:137 CLC
    case 0xC11EED: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:138 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC11EEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:138 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC11EEE.
    case 0xC11EF0: cpu.execute_instruction<0x8D>(0x000485, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:139 STA @VIRTUAL04
    case 0xC11EF1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:141 LDY @LOCAL03
    case 0xC11EF3: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:142 DEY
    case 0xC11EF5: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:143 STY @LOCAL03
    case 0xC11EF6: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:145 BNE @UNKNOWN10
    case 0xC11EF8: cpu.execute_instruction<0xD0>(0x0000A0, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:146 STZ @LOCAL06
    case 0xC11EFA: cpu.execute_instruction<0x64>(0x00001E, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:147 INC @LOCAL07
    case 0xC11EFC: cpu.execute_instruction<0xE6>(0x000020, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:148 DEC @LOCAL04
    case 0xC11EFE: cpu.execute_instruction<0xC6>(0x00001A, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:150 LDA @LOCAL04
    case 0xC11F00: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:151 BNE @UNKNOWN9
    case 0xC11F02: cpu.execute_instruction<0xD0>(0x00008C, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:152 INC @LOCAL05
    case 0xC11F04: cpu.execute_instruction<0xE6>(0x00001C, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:153 JMP @UNKNOWN8
    case 0xC11F06: cpu.execute_instruction<0x4C>(0x001E83, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:155 LDA @LOCAL0A
    case 0xC11F09: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:156 CLC
    case 0xC11F0B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:157 ADC #window_stats::current_option
    case 0xC11F0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002B, 2); else cpu.execute_instruction<0x69>(0x00002B, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:157 ADC #window_stats::current_option
    // Overlapping static entry reached from 0xC11F0C.
    case 0xC11F0E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:158 TAX
    case 0xC11F0F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:159 STX @LOCAL0D
    case 0xC11F10: cpu.execute_instruction<0x86>(0x00002C, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:160 LDA __BSS_START__,X
    case 0xC11F12: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:161 JSR UNKNOWN_C1138D
    case 0xC11F15: cpu.execute_instruction<0x20>(0x0019B4, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:162 STA @LOCAL05
    case 0xC11F18: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:163 LDY #window_stats::height
    case 0xC11F1A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:163 LDY #window_stats::height
    // Overlapping static entry reached from 0xC11F1A.
    case 0xC11F1C: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:164 LDA (@LOCAL0A),Y
    case 0xC11F1D: cpu.execute_instruction<0xB1>(0x000026, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:165 LSR
    case 0xC11F1F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:166 STA @VIRTUAL04
    case 0xC11F20: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:167 LDA @LOCAL0B
    case 0xC11F22: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:168 STA @VIRTUAL02
    case 0xC11F24: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:169 LDY @VIRTUAL02
    case 0xC11F26: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:170 LDA @LOCAL05
    case 0xC11F28: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:171 CLC
    case 0xC11F2A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:172 ADC @VIRTUAL02
    case 0xC11F2B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:173 DEC
    case 0xC11F2D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:174 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC11F2E: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/unknown/C4/C451FA-jp.asm:175 CMP @VIRTUAL04
    case 0xC11F32: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C451FA-jp.asm:176 BLTEQ @UNKNOWN24
    case 0xC11F34: cpu.execute_instruction<0x90>(0x00006E, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C451FA-jp.asm:176 BLTEQ @UNKNOWN24
    case 0xC11F36: cpu.execute_instruction<0xF0>(0x00006C, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:177 LDX @LOCAL0D
    case 0xC11F38: cpu.execute_instruction<0xA6>(0x00002C, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:178 LDA __BSS_START__,X
    case 0xC11F3A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/unknown/C4/C451FA-jp.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F3D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F3F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F40: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/unknown/C4/C451FA-jp.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F41: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F43: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/unknown/C4/C451FA-jp.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F44: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F46: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:179 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F47: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:180 CLC
    case 0xC11F48: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:181 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC11F49: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:181 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC11F49.
    case 0xC11F4B: cpu.execute_instruction<0x8D>(0x0002A6, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:182 LDX @VIRTUAL02
    case 0xC11F4C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:183 DEX
    case 0xC11F4E: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:184 STX @LOCAL03
    case 0xC11F4F: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:185 BRA @UNKNOWN23
    case 0xC11F51: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:187 DEX
    case 0xC11F53: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:188 STX @LOCAL03
    case 0xC11F54: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:189 TAX
    case 0xC11F56: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:190 LDA a:menu_option::next,X
    case 0xC11F57: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/unknown/C4/C451FA-jp.asm:191 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F5A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:191 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F5C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:191 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F5D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/unknown/C4/C451FA-jp.asm:191 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F5E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:191 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F60: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/unknown/C4/C451FA-jp.asm:191 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F61: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:191 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F63: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:191 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F64: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:192 CLC
    case 0xC11F65: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:193 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC11F66: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:193 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC11F66.
    case 0xC11F68: cpu.execute_instruction<0x8D>(0x0018A6, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:195 LDX @LOCAL03
    case 0xC11F69: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:196 BNE @UNKNOWN22
    case 0xC11F6B: cpu.execute_instruction<0xD0>(0x0000E6, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C451FA-jp.asm:197 LOADPTR UNKNOWN_C3E44C, @LOCAL00
    case 0xC11F6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002E, 2); else cpu.execute_instruction<0xA9>(0x00E42E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C451FA-jp.asm:197 LOADPTR UNKNOWN_C3E44C, @LOCAL00
    // Overlapping static entry reached from 0xC11F6D.
    case 0xC11F6F: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C451FA-jp.asm:197 LOADPTR UNKNOWN_C3E44C, @LOCAL00
    case 0xC11F70: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C451FA-jp.asm:197 LOADPTR UNKNOWN_C3E44C, @LOCAL00
    // Overlapping static entry reached from 0xC11F6F.
    case 0xC11F71: cpu.execute_instruction<0x0E>(0x00C3A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C451FA-jp.asm:197 LOADPTR UNKNOWN_C3E44C, @LOCAL00
    case 0xC11F72: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C451FA-jp.asm:197 LOADPTR UNKNOWN_C3E44C, @LOCAL00
    // Overlapping static entry reached from 0xC11F72.
    case 0xC11F74: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C451FA-jp.asm:197 LOADPTR UNKNOWN_C3E44C, @LOCAL00
    case 0xC11F75: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C451FA-jp.asm:198 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC11F77: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C451FA-jp.asm:198 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC11F77.
    case 0xC11F79: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C4/C451FA-jp.asm:198 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC11F7A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C451FA-jp.asm:198 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC11F7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C451FA-jp.asm:198 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC11F7C.
    case 0xC11F7E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C4/C451FA-jp.asm:198 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC11F7F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:199 LDY #window_stats::height
    case 0xC11F81: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:199 LDY #window_stats::height
    // Overlapping static entry reached from 0xC11F81.
    case 0xC11F83: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:200 LDA (@LOCAL0A),Y
    case 0xC11F84: cpu.execute_instruction<0xB1>(0x000026, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:201 LSR
    case 0xC11F86: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:202 TAY
    case 0xC11F87: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:203 DEY
    case 0xC11F88: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:204 LDX #0
    case 0xC11F89: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:204 LDX #0
    // Overlapping static entry reached from 0xC11F89.
    case 0xC11F8B: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:205 TXA
    case 0xC11F8C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:206 JSR UNKNOWN_C1153B
    case 0xC11F8D: cpu.execute_instruction<0x20>(0x001B27, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:207 LDY #window_stats::option_count
    case 0xC11F90: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // src/unknown/C4/C451FA-jp.asm:207 LDY #window_stats::option_count
    // Overlapping static entry reached from 0xC11F90.
    case 0xC11F92: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C4/C451FA-jp.asm:208 LDA (@LOCAL0A),Y
    case 0xC11F93: cpu.execute_instruction<0xB1>(0x000026, 2); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/unknown/C4/C451FA-jp.asm:209 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F95: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:209 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F97: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:209 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F98: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/unknown/C4/C451FA-jp.asm:209 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F99: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:209 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F9B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/unknown/C4/C451FA-jp.asm:209 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F9C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:209 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F9E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/unknown/C4/C451FA-jp.asm:209 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F9F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:210 TAX
    case 0xC11FA0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C451FA-jp.asm:211 STZ MENU_OPTIONS + menu_option::page,X
    case 0xC11FA1: cpu.execute_instruction<0x9E>(0x008D18, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C451FA-jp.asm:213 END_C_FUNCTION
    case 0xC11FA4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C451FA-jp.asm:213 END_C_FUNCTION
    case 0xC11FA5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C45C90.asm (unresolved).
bool execute_unresolved_c4_c45c90_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C45C90.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC439E2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C45C90.asm:11 END_STACK_VARS
    case 0xC439E4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C45C90.asm:11 END_STACK_VARS
    case 0xC439E5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C45C90.asm:11 END_STACK_VARS
    case 0xC439E6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C45C90.asm:11 END_STACK_VARS
    case 0xC439E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C45C90.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC439E7.
    case 0xC439E9: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C45C90.asm:11 END_STACK_VARS
    case 0xC439EA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C45C90.asm:11 END_STACK_VARS
    case 0xC439EB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:12 STA @VIRTUAL04
    case 0xC439EC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C45C90.asm:12 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC439E9.
    case 0xC439ED: cpu.execute_instruction<0x04>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C45C90.asm:13 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC439EE: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C45C90.asm:13 MOVE_INT @PARAM01, @VIRTUAL0A
    // Overlapping static entry reached from 0xC439ED.
    case 0xC439EF: cpu.execute_instruction<0x24>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C45C90.asm:13 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC439F0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C45C90.asm:13 MOVE_INT @PARAM01, @VIRTUAL0A
    // Overlapping static entry reached from 0xC439EF.
    case 0xC439F1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C45C90.asm:13 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC439F2: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C45C90.asm:13 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC439F4: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C45C90.asm:15 LDA DMA_TRANSFER_FLAG
    case 0xC439F6: cpu.execute_instruction<0xAD>(0x00A031, 3); return true;
    // src/unknown/C4/C45C90.asm:16 BNE @UNKNOWN0
    case 0xC439F9: cpu.execute_instruction<0xD0>(0x0000FB, 2); return true;
    // src/unknown/C4/C45C90.asm:17 LDY #8
    case 0xC439FB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C45C90.asm:17 LDY #8
    // Overlapping static entry reached from 0xC439FB.
    case 0xC439FD: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C4/C45C90.asm:18 LDA VWF_X
    case 0xC439FE: cpu.execute_instruction<0xAD>(0x00A029, 3); return true;
    // src/unknown/C4/C45C90.asm:19 JSL MODULUS16
    case 0xC43A01: cpu.execute_instruction<0x22>(0xC09213, 4); return true;
    // src/unknown/C4/C45C90.asm:20 STA @VIRTUAL02
    case 0xC43A05: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C45C90.asm:21 LDA VWF_TILE
    case 0xC43A07: cpu.execute_instruction<0xAD>(0x00A02B, 3); return true;
    // src/unknown/C4/C45C90.asm:22 ASL
    case 0xC43A0A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:23 ASL
    case 0xC43A0B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:24 ASL
    case 0xC43A0C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:25 ASL
    case 0xC43A0D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:26 ASL
    case 0xC43A0E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:27 CLC
    case 0xC43A0F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:28 ADC #.LOWORD(UNKNOWN_7E9D23)
    case 0xC43A10: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009FA9, 3); return true;
    // src/unknown/C4/C45C90.asm:28 ADC #.LOWORD(UNKNOWN_7E9D23)
    // Overlapping static entry reached from 0xC43A10.
    case 0xC43A12: cpu.execute_instruction<0x9F>(0xA51485, 4); return true;
    // src/unknown/C4/C45C90.asm:29 STA @LOCAL03
    case 0xC43A13: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C45C90.asm:30 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC43A15: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C45C90.asm:30 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC43A12.
    case 0xC43A16: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C45C90.asm:30 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC43A17: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C45C90.asm:30 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC43A19: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C45C90.asm:30 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC43A1B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C45C90.asm:31 LDY #0
    case 0xC43A1D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C45C90.asm:31 LDY #0
    // Overlapping static entry reached from 0xC43A1D.
    case 0xC43A1F: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C45C90.asm:32 STY @LOCAL02
    case 0xC43A20: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C4/C45C90.asm:33 BRA @UNKNOWN2
    case 0xC43A22: cpu.execute_instruction<0x80>(0x00006B, 2); return true;
    // src/unknown/C4/C45C90.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC43A24: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C45C90.asm:36 LDA [@VIRTUAL06]
    case 0xC43A26: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C45C90.asm:37 EOR #$FF
    case 0xC43A28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0085FF, 3); return true;
    // src/unknown/C4/C45C90.asm:38 STA @VIRTUAL00
    case 0xC43A2A: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:38 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC43A28.
    case 0xC43A2B: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C45C90.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC43A2C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C45C90.asm:40 LDA @VIRTUAL02
    case 0xC43A2E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C45C90.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC43A30: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C45C90.asm:42 STA @VIRTUAL01
    case 0xC43A32: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C4/C45C90.asm:43 SEP #PROC_FLAGS::INDEX8
    case 0xC43A34: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C45C90.asm:44 LDY @VIRTUAL01
    case 0xC43A36: cpu.execute_instruction<0xA4>(0x000001, 2); return true;
    // src/unknown/C4/C45C90.asm:45 LDA @VIRTUAL00
    case 0xC43A38: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:46 JSL ASR8_UNKNOWN1
    case 0xC43A3A: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/unknown/C4/C45C90.asm:47 EOR #$FF
    case 0xC43A3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0085FF, 3); return true;
    // src/unknown/C4/C45C90.asm:48 STA @VIRTUAL00
    case 0xC43A40: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:48 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC43A3E.
    case 0xC43A41: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C45C90.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC43A42: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C45C90.asm:50 LDA @LOCAL03
    case 0xC43A44: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C45C90.asm:51 PHA
    case 0xC43A46: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:52 REP #PROC_FLAGS::INDEX8
    case 0xC43A47: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C45C90.asm:53 TAX
    case 0xC43A49: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:54 SEP #PROC_FLAGS::ACCUM8
    case 0xC43A4A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C45C90.asm:55 LDA __BSS_START__,X
    case 0xC43A4C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C45C90.asm:56 AND @VIRTUAL00
    case 0xC43A4F: cpu.execute_instruction<0x25>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:57 PLX
    case 0xC43A51: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:58 STA __BSS_START__,X
    case 0xC43A52: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C45C90.asm:59 LDY #256
    case 0xC43A55: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000100, 3); return true;
    // src/unknown/C4/C45C90.asm:59 LDY #256
    // Overlapping static entry reached from 0xC43A55.
    case 0xC43A57: cpu.execute_instruction<0x01>(0x0000B7, 2); return true;
    // src/unknown/C4/C45C90.asm:60 LDA [@VIRTUAL06],Y
    case 0xC43A58: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C45C90.asm:60 LDA [@VIRTUAL06],Y
    // Overlapping static entry reached from 0xC43A57.
    case 0xC43A59: cpu.execute_instruction<0x06>(0x000049, 2); return true;
    // src/unknown/C4/C45C90.asm:61 EOR #$FF
    case 0xC43A5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0085FF, 3); return true;
    // src/unknown/C4/C45C90.asm:61 EOR #$FF
    // Overlapping static entry reached from 0xC43A59.
    case 0xC43A5B: cpu.execute_instruction<0xFF>(0xE20085, 4); return true;
    // src/unknown/C4/C45C90.asm:62 STA @VIRTUAL00
    case 0xC43A5C: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:62 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC43A5A.
    case 0xC43A5D: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C4/C45C90.asm:63 SEP #PROC_FLAGS::INDEX8
    case 0xC43A5E: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C45C90.asm:63 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC43A5B.
    case 0xC43A5F: cpu.execute_instruction<0x10>(0x0000A4, 2); return true;
    // src/unknown/C4/C45C90.asm:64 LDY @VIRTUAL01
    case 0xC43A60: cpu.execute_instruction<0xA4>(0x000001, 2); return true;
    // src/unknown/C4/C45C90.asm:64 LDY @VIRTUAL01
    // Overlapping static entry reached from 0xC43A5F.
    case 0xC43A61: cpu.execute_instruction<0x01>(0x0000A5, 2); return true;
    // src/unknown/C4/C45C90.asm:65 LDA @VIRTUAL00
    case 0xC43A62: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:65 LDA @VIRTUAL00
    // Overlapping static entry reached from 0xC43A61.
    case 0xC43A63: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C45C90.asm:66 JSL ASR8_UNKNOWN1
    case 0xC43A64: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/unknown/C4/C45C90.asm:67 EOR #$FF
    case 0xC43A68: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0085FF, 3); return true;
    // src/unknown/C4/C45C90.asm:68 STA @VIRTUAL00
    case 0xC43A6A: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:68 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC43A68.
    case 0xC43A6B: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C45C90.asm:69 REP #PROC_FLAGS::ACCUM8
    case 0xC43A6C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C45C90.asm:70 LDA @LOCAL03
    case 0xC43A6E: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C45C90.asm:71 CLC
    case 0xC43A70: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:72 ADC #16
    case 0xC43A71: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C45C90.asm:72 ADC #16
    // Overlapping static entry reached from 0xC43A71.
    case 0xC43A73: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C45C90.asm:73 REP #PROC_FLAGS::INDEX8
    case 0xC43A74: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C45C90.asm:74 TAX
    case 0xC43A76: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xC43A77: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C45C90.asm:76 LDA __BSS_START__,X
    case 0xC43A79: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C45C90.asm:77 AND @VIRTUAL00
    case 0xC43A7C: cpu.execute_instruction<0x25>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:78 STA __BSS_START__,X
    case 0xC43A7E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C45C90.asm:79 LDY @LOCAL02
    case 0xC43A81: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C4/C45C90.asm:80 INY
    case 0xC43A83: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:81 STY @LOCAL02
    case 0xC43A84: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C4/C45C90.asm:82 REP #PROC_FLAGS::ACCUM8
    case 0xC43A86: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C45C90.asm:83 INC @VIRTUAL06
    case 0xC43A88: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C45C90.asm:84 LDA @LOCAL03
    case 0xC43A8A: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C45C90.asm:85 INC
    case 0xC43A8C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:86 STA @LOCAL03
    case 0xC43A8D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C45C90.asm:88 CPY #16
    case 0xC43A8F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000010, 2); else cpu.execute_instruction<0xC0>(0x000010, 3); return true;
    // src/unknown/C4/C45C90.asm:88 CPY #16
    // Overlapping static entry reached from 0xC43A8F.
    case 0xC43A91: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C45C90.asm:89 BCC @UNKNOWN1
    case 0xC43A92: cpu.execute_instruction<0x90>(0x000090, 2); return true;
    // src/unknown/C4/C45C90.asm:90 LDA @VIRTUAL04
    case 0xC43A94: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C45C90.asm:91 CLC
    case 0xC43A96: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:92 ADC VWF_X
    case 0xC43A97: cpu.execute_instruction<0x6D>(0x00A029, 3); return true;
    // src/unknown/C4/C45C90.asm:93 STA VWF_X
    case 0xC43A9A: cpu.execute_instruction<0x8D>(0x00A029, 3); return true;
    // src/unknown/C4/C45C90.asm:95 CMP #32
    case 0xC43A9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C4/C45C90.asm:95 CMP #32
    // Overlapping static entry reached from 0xC43A9D.
    case 0xC43A9F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C45C90.asm:99 BCC @UNKNOWN3
    case 0xC43AA0: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // src/unknown/C4/C45C90.asm:100 SEC
    case 0xC43AA2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:102 SBC #32
    case 0xC43AA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000020, 2); else cpu.execute_instruction<0xE9>(0x000020, 3); return true;
    // src/unknown/C4/C45C90.asm:102 SBC #32
    // Overlapping static entry reached from 0xC43AA3.
    case 0xC43AA5: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C45C90.asm:106 STA VWF_X
    case 0xC43AA6: cpu.execute_instruction<0x8D>(0x00A029, 3); return true;
    // src/unknown/C4/C45C90.asm:108 LDA VWF_X
    case 0xC43AA9: cpu.execute_instruction<0xAD>(0x00A029, 3); return true;
    // src/unknown/C4/C45C90.asm:109 LSR
    case 0xC43AAC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:110 LSR
    case 0xC43AAD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:111 LSR
    case 0xC43AAE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:112 STA @LOCAL01
    case 0xC43AAF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C45C90.asm:113 CMP VWF_TILE
    case 0xC43AB1: cpu.execute_instruction<0xCD>(0x00A02B, 3); return true;
    // src/unknown/C4/C45C90.asm:114 BEQ @UNKNOWN6
    case 0xC43AB4: cpu.execute_instruction<0xF0>(0x000077, 2); return true;
    // src/unknown/C4/C45C90.asm:115 STA VWF_TILE
    case 0xC43AB6: cpu.execute_instruction<0x8D>(0x00A02B, 3); return true;
    // src/unknown/C4/C45C90.asm:116 LDA #8
    case 0xC43AB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C4/C45C90.asm:116 LDA #8
    // Overlapping static entry reached from 0xC43AB9.
    case 0xC43ABB: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/unknown/C4/C45C90.asm:117 SEC
    case 0xC43ABC: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:118 SBC @VIRTUAL02
    case 0xC43ABD: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C45C90.asm:119 TAY
    case 0xC43ABF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:120 STY @LOCAL02
    case 0xC43AC0: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C4/C45C90.asm:121 LDA @LOCAL01
    case 0xC43AC2: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C45C90.asm:122 ASL
    case 0xC43AC4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:123 ASL
    case 0xC43AC5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:124 ASL
    case 0xC43AC6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:125 ASL
    case 0xC43AC7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:126 ASL
    case 0xC43AC8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:127 CLC
    case 0xC43AC9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:128 ADC #.LOWORD(UNKNOWN_7E9D23)
    case 0xC43ACA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009FA9, 3); return true;
    // src/unknown/C4/C45C90.asm:128 ADC #.LOWORD(UNKNOWN_7E9D23)
    // Overlapping static entry reached from 0xC43ACA.
    case 0xC43ACC: cpu.execute_instruction<0x9F>(0x1486AA, 4); return true;
    // src/unknown/C4/C45C90.asm:129 TAX
    case 0xC43ACD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:130 STX @LOCAL03
    case 0xC43ACE: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C45C90.asm:131 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC43AD0: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C45C90.asm:131 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC43AD2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C45C90.asm:131 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC43AD4: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C45C90.asm:131 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC43AD6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C45C90.asm:132 LDA #0
    case 0xC43AD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C45C90.asm:132 LDA #0
    // Overlapping static entry reached from 0xC43AD8.
    case 0xC43ADA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C45C90.asm:133 STA @LOCAL00
    case 0xC43ADB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C45C90.asm:134 BRA @UNKNOWN5
    case 0xC43ADD: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/unknown/C4/C45C90.asm:136 SEP #PROC_FLAGS::ACCUM8
    case 0xC43ADF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C45C90.asm:137 LDA [@VIRTUAL06]
    case 0xC43AE1: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C45C90.asm:138 EOR #$FF
    case 0xC43AE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0085FF, 3); return true;
    // src/unknown/C4/C45C90.asm:139 STA @VIRTUAL00
    case 0xC43AE5: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:139 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC43AE3.
    case 0xC43AE6: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/unknown/C4/C45C90.asm:140 LDY @LOCAL02
    case 0xC43AE7: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C4/C45C90.asm:141 SEP #PROC_FLAGS::INDEX8
    case 0xC43AE9: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C45C90.asm:142 STY @VIRTUAL01
    case 0xC43AEB: cpu.execute_instruction<0x84>(0x000001, 2); return true;
    // src/unknown/C4/C45C90.asm:143 LDA @VIRTUAL00
    case 0xC43AED: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:144 JSL ASL16_ENTRY2
    case 0xC43AEF: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/unknown/C4/C45C90.asm:145 EOR #$FF
    case 0xC43AF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0085FF, 3); return true;
    // src/unknown/C4/C45C90.asm:146 STA @VIRTUAL00
    case 0xC43AF5: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:146 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC43AF3.
    case 0xC43AF6: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C45C90.asm:147 REP #PROC_FLAGS::INDEX8
    case 0xC43AF7: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C45C90.asm:148 LDX @LOCAL03
    case 0xC43AF9: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C4/C45C90.asm:149 STA __BSS_START__,X
    case 0xC43AFB: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C45C90.asm:150 LDY #256
    case 0xC43AFE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000100, 3); return true;
    // src/unknown/C4/C45C90.asm:150 LDY #256
    // Overlapping static entry reached from 0xC43AFE.
    case 0xC43B00: cpu.execute_instruction<0x01>(0x0000B7, 2); return true;
    // src/unknown/C4/C45C90.asm:151 LDA [@VIRTUAL06],Y
    case 0xC43B01: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C45C90.asm:151 LDA [@VIRTUAL06],Y
    // Overlapping static entry reached from 0xC43B00.
    case 0xC43B02: cpu.execute_instruction<0x06>(0x000049, 2); return true;
    // src/unknown/C4/C45C90.asm:152 EOR #$FF
    case 0xC43B03: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0085FF, 3); return true;
    // src/unknown/C4/C45C90.asm:152 EOR #$FF
    // Overlapping static entry reached from 0xC43B02.
    case 0xC43B04: cpu.execute_instruction<0xFF>(0xE20085, 4); return true;
    // src/unknown/C4/C45C90.asm:153 STA @VIRTUAL00
    case 0xC43B05: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:153 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC43B03.
    case 0xC43B06: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C4/C45C90.asm:154 SEP #PROC_FLAGS::INDEX8
    case 0xC43B07: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/unknown/C4/C45C90.asm:154 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC43B04.
    case 0xC43B08: cpu.execute_instruction<0x10>(0x0000A4, 2); return true;
    // src/unknown/C4/C45C90.asm:155 LDY @VIRTUAL01
    case 0xC43B09: cpu.execute_instruction<0xA4>(0x000001, 2); return true;
    // src/unknown/C4/C45C90.asm:155 LDY @VIRTUAL01
    // Overlapping static entry reached from 0xC43B08.
    case 0xC43B0A: cpu.execute_instruction<0x01>(0x0000A5, 2); return true;
    // src/unknown/C4/C45C90.asm:156 LDA @VIRTUAL00
    case 0xC43B0B: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:156 LDA @VIRTUAL00
    // Overlapping static entry reached from 0xC43B0A.
    case 0xC43B0C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C45C90.asm:157 JSL ASL16_ENTRY2
    case 0xC43B0D: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/unknown/C4/C45C90.asm:158 EOR #$FF
    case 0xC43B11: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0085FF, 3); return true;
    // src/unknown/C4/C45C90.asm:159 STA @VIRTUAL00
    case 0xC43B13: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C45C90.asm:159 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC43B11.
    case 0xC43B14: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C45C90.asm:160 REP #PROC_FLAGS::INDEX8
    case 0xC43B15: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/unknown/C4/C45C90.asm:161 LDX @LOCAL03
    case 0xC43B17: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/unknown/C4/C45C90.asm:162 STA __BSS_START__+16,X
    case 0xC43B19: cpu.execute_instruction<0x9D>(0x000010, 3); return true;
    // src/unknown/C4/C45C90.asm:163 REP #PROC_FLAGS::ACCUM8
    case 0xC43B1C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C45C90.asm:164 LDA @LOCAL00
    case 0xC43B1E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C45C90.asm:165 INC
    case 0xC43B20: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:166 STA @LOCAL00
    case 0xC43B21: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C45C90.asm:167 INC @VIRTUAL06
    case 0xC43B23: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C45C90.asm:168 INX
    case 0xC43B25: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C45C90.asm:169 STX @LOCAL03
    case 0xC43B26: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C4/C45C90.asm:171 CMP #16
    case 0xC43B28: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/unknown/C4/C45C90.asm:171 CMP #16
    // Overlapping static entry reached from 0xC43B28.
    case 0xC43B2A: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C45C90.asm:172 BCC @UNKNOWN4
    case 0xC43B2B: cpu.execute_instruction<0x90>(0x0000B2, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C45C90.asm:174 END_C_FUNCTION
    case 0xC43B2D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C45C90.asm:174 END_C_FUNCTION
    case 0xC43B2E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C45DDD.asm (unresolved).
bool execute_unresolved_c4_c45ddd_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C45DDD.asm:4 BEGIN_C_FUNCTION_FAR
    case 0xC43B2F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C45DDD.asm:10 END_STACK_VARS
    case 0xC43B31: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C45DDD.asm:10 END_STACK_VARS
    case 0xC43B32: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C45DDD.asm:10 END_STACK_VARS
    case 0xC43B33: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C45DDD.asm:10 END_STACK_VARS
    case 0xC43B34: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C45DDD.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC43B34.
    case 0xC43B36: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C45DDD.asm:10 END_STACK_VARS
    case 0xC43B37: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C45DDD.asm:10 END_STACK_VARS
    case 0xC43B38: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:11 TAX
    case 0xC43B39: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:12 DEC
    case 0xC43B3A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:13 STA @LOCAL02
    case 0xC43B3B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C45DDD.asm:14 LDA UNKNOWN_7E9E27
    case 0xC43B3D: cpu.execute_instruction<0xAD>(0x00A02D, 3); return true;
    // src/unknown/C4/C45DDD.asm:15 DEC
    case 0xC43B40: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:16 STA @LOCAL01
    case 0xC43B41: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C45DDD.asm:18 INC @LOCAL02
    case 0xC43B43: cpu.execute_instruction<0xE6>(0x000014, 2); return true;
    // src/unknown/C4/C45DDD.asm:19 LDA @LOCAL02
    case 0xC43B45: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C45DDD.asm:21 CMP #3
    case 0xC43B47: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C4/C45DDD.asm:21 CMP #3
    // Overlapping static entry reached from 0xC43B47.
    case 0xC43B49: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C45DDD.asm:25 BLTEQ @UNKNOWN1
    case 0xC43B4A: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C45DDD.asm:25 BLTEQ @UNKNOWN1
    case 0xC43B4C: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/unknown/C4/C45DDD.asm:26 STZ @LOCAL02
    case 0xC43B4E: cpu.execute_instruction<0x64>(0x000014, 2); return true;
    // src/unknown/C4/C45DDD.asm:28 INC @LOCAL01
    case 0xC43B50: cpu.execute_instruction<0xE6>(0x000012, 2); return true;
    // src/unknown/C4/C45DDD.asm:29 LDA @LOCAL01
    case 0xC43B52: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C45DDD.asm:30 CMP #48
    case 0xC43B54: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000030, 2); else cpu.execute_instruction<0xC9>(0x000030, 3); return true;
    // src/unknown/C4/C45DDD.asm:30 CMP #48
    // Overlapping static entry reached from 0xC43B54.
    case 0xC43B56: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C45DDD.asm:31 BCC @UNKNOWN2
    case 0xC43B57: cpu.execute_instruction<0x90>(0x000002, 2); return true;
    // src/unknown/C4/C45DDD.asm:32 STZ @LOCAL01
    case 0xC43B59: cpu.execute_instruction<0x64>(0x000012, 2); return true;
    // src/unknown/C4/C45DDD.asm:34 LDA @LOCAL01
    case 0xC43B5B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C45DDD.asm:35 AND #$000F
    case 0xC43B5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/unknown/C4/C45DDD.asm:35 AND #$000F
    // Overlapping static entry reached from 0xC43B5D.
    case 0xC43B5F: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C45DDD.asm:36 ASL
    case 0xC43B60: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:37 ASL
    case 0xC43B61: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:38 ASL
    case 0xC43B62: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:39 STA @VIRTUAL02
    case 0xC43B63: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C45DDD.asm:40 LDA @LOCAL01
    case 0xC43B65: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C45DDD.asm:41 AND #$00F0
    case 0xC43B67: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x0000F0, 3); return true;
    // src/unknown/C4/C45DDD.asm:41 AND #$00F0
    // Overlapping static entry reached from 0xC43B67.
    case 0xC43B69: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C45DDD.asm:42 ASL
    case 0xC43B6A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:43 ASL
    case 0xC43B6B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:44 ASL
    case 0xC43B6C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:45 ASL
    case 0xC43B6D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:46 CLC
    case 0xC43B6E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:47 ADC @VIRTUAL02
    case 0xC43B6F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C45DDD.asm:48 CLC
    case 0xC43B71: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:49 ADC #VRAM::TEXT_LAYER_TILES + $1900
    case 0xC43B72: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007900, 3); return true;
    // src/unknown/C4/C45DDD.asm:49 ADC #VRAM::TEXT_LAYER_TILES + $1900
    // Overlapping static entry reached from 0xC43B72.
    case 0xC43B74: cpu.execute_instruction<0x79>(0x000485, 3); return true;
    // src/unknown/C4/C45DDD.asm:50 STA @VIRTUAL04
    case 0xC43B75: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C45DDD.asm:51 LDA @LOCAL02
    case 0xC43B77: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C45DDD.asm:52 ASL
    case 0xC43B79: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:53 ASL
    case 0xC43B7A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:54 ASL
    case 0xC43B7B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:55 ASL
    case 0xC43B7C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:56 ASL
    case 0xC43B7D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:57 STA @VIRTUAL02
    case 0xC43B7E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C45DDD.asm:58 CLC
    case 0xC43B80: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:59 ADC #.LOWORD(UNKNOWN_7E9D23)
    case 0xC43B81: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009FA9, 3); return true;
    // src/unknown/C4/C45DDD.asm:59 ADC #.LOWORD(UNKNOWN_7E9D23)
    // Overlapping static entry reached from 0xC43B81.
    case 0xC43B83: cpu.execute_instruction<0x9F>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C45DDD.asm:60 PROMOTENEARPTRA @VIRTUAL06
    case 0xC43B84: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C45DDD.asm:60 PROMOTENEARPTRA @VIRTUAL06
    case 0xC43B86: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C45DDD.asm:60 PROMOTENEARPTRA @VIRTUAL06
    case 0xC43B87: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C45DDD.asm:60 PROMOTENEARPTRA @VIRTUAL06
    case 0xC43B89: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C45DDD.asm:60 PROMOTENEARPTRA @VIRTUAL06
    case 0xC43B8A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C45DDD.asm:60 PROMOTENEARPTRA @VIRTUAL06
    case 0xC43B8C: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C45DDD.asm:61 REP #PROC_FLAGS::ACCUM8
    case 0xC43B8E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C45DDD.asm:62 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC43B90: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C45DDD.asm:62 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC43B92: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C45DDD.asm:62 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC43B94: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C45DDD.asm:62 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC43B96: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C45DDD.asm:63 LDY @VIRTUAL04
    case 0xC43B98: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C4/C45DDD.asm:64 LDX #16
    case 0xC43B9A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/unknown/C4/C45DDD.asm:64 LDX #16
    // Overlapping static entry reached from 0xC43B9A.
    case 0xC43B9C: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/unknown/C4/C45DDD.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xC43B9D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C45DDD.asm:66 LDA #0
    case 0xC43B9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C4/C45DDD.asm:67 JSL PREPARE_VRAM_COPY
    case 0xC43BA1: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C4/C45DDD.asm:67 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC43B9F.
    case 0xC43BA2: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C4/C45DDD.asm:67 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC43BA2.
    case 0xC43BA4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0002A5, 3); return true;
    // src/unknown/C4/C45DDD.asm:69 LDA @VIRTUAL02
    case 0xC43BA5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C45DDD.asm:69 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC43BA4.
    case 0xC43BA6: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/unknown/C4/C45DDD.asm:70 CLC
    case 0xC43BA7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:71 ADC #.LOWORD(UNKNOWN_7E9D23) + 16
    case 0xC43BA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B9, 2); else cpu.execute_instruction<0x69>(0x009FB9, 3); return true;
    // src/unknown/C4/C45DDD.asm:71 ADC #.LOWORD(UNKNOWN_7E9D23) + 16
    // Overlapping static entry reached from 0xC43BA8.
    case 0xC43BAA: cpu.execute_instruction<0x9F>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C45DDD.asm:72 PROMOTENEARPTRA @VIRTUAL06
    case 0xC43BAB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C45DDD.asm:72 PROMOTENEARPTRA @VIRTUAL06
    case 0xC43BAD: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C45DDD.asm:72 PROMOTENEARPTRA @VIRTUAL06
    case 0xC43BAE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C45DDD.asm:72 PROMOTENEARPTRA @VIRTUAL06
    case 0xC43BB0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C45DDD.asm:72 PROMOTENEARPTRA @VIRTUAL06
    case 0xC43BB1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C45DDD.asm:72 PROMOTENEARPTRA @VIRTUAL06
    case 0xC43BB3: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C45DDD.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC43BB5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    case 0xC43BB7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    case 0xC43BB9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    case 0xC43BBB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    case 0xC43BBD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1171 LDA dest
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    case 0xC43BBF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:1172 CLC
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    case 0xC43BC1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    case 0xC43BC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x000080, 3); return true;
    // include/macros.asm:1173 ADC #offset
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    // Overlapping static entry reached from 0xC43BC2.
    case 0xC43BC4: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // include/macros.asm:1174 TAY
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    case 0xC43BC5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    case 0xC43BC6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // include/macros.asm:1175 LDX #size
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    // Overlapping static entry reached from 0xC43BC6.
    case 0xC43BC8: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // include/macros.asm:1176 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    case 0xC43BC9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1177 LDA #unk
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    case 0xC43BCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    case 0xC43BCD: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    // Overlapping static entry reached from 0xC43BCB.
    case 0xC43BCE: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1178 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C45DDD.asm:74 COPY_TO_VRAM1OFFSET @VIRTUAL06, @VIRTUAL04, 16, 128, 0
    // Overlapping static entry reached from 0xC43BCE.
    case 0xC43BD0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AD, 2); else cpu.execute_instruction<0xC0>(0x002BAD, 3); return true;
    // src/unknown/C4/C45DDD.asm:76 LDA VWF_TILE
    case 0xC43BD1: cpu.execute_instruction<0xAD>(0x00A02B, 3); return true;
    // src/unknown/C4/C45DDD.asm:76 LDA VWF_TILE
    // Overlapping static entry reached from 0xC43BD0.
    case 0xC43BD2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C45DDD.asm:76 LDA VWF_TILE
    // Overlapping static entry reached from 0xC43BD0.
    case 0xC43BD3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000C5, 2); else cpu.execute_instruction<0xA0>(0x0014C5, 3); return true;
    // src/unknown/C4/C45DDD.asm:77 CMP @LOCAL02
    case 0xC43BD4: cpu.execute_instruction<0xC5>(0x000014, 2); return true;
    // src/unknown/C4/C45DDD.asm:77 CMP @LOCAL02
    // Overlapping static entry reached from 0xC43BD3.
    case 0xC43BD5: cpu.execute_instruction<0x14>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C45DDD.asm:78 BNEL @UNKNOWN0
    case 0xC43BD6: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C45DDD.asm:78 BNEL @UNKNOWN0
    // Overlapping static entry reached from 0xC43BD5.
    case 0xC43BD7: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C45DDD.asm:78 BNEL @UNKNOWN0
    case 0xC43BD8: cpu.execute_instruction<0x4C>(0x003B43, 3); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C45DDD.asm:78 BNEL @UNKNOWN0
    // Overlapping static entry reached from 0xC43BD7.
    case 0xC43BD9: cpu.execute_instruction<0x43>(0x00003B, 2); return true;
    // src/unknown/C4/C45DDD.asm:79 LDA @LOCAL01
    case 0xC43BDB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C45DDD.asm:80 STA UNKNOWN_7E9E27
    case 0xC43BDD: cpu.execute_instruction<0x8D>(0x00A02D, 3); return true;
    // src/unknown/C4/C45DDD.asm:81 LDA #1
    case 0xC43BE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C45DDD.asm:81 LDA #1
    // Overlapping static entry reached from 0xC43BE0.
    case 0xC43BE2: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C45DDD.asm:82 STA DMA_TRANSFER_FLAG
    case 0xC43BE3: cpu.execute_instruction<0x8D>(0x00A031, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C45DDD.asm:83 END_C_FUNCTION
    case 0xC43BE6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C45DDD.asm:83 END_C_FUNCTION
    case 0xC43BE7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C45E96.asm (unresolved).
bool execute_unresolved_c4_c45e96_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C45E96.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43BE8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C45E96.asm:6 LDA DMA_TRANSFER_FLAG
    case 0xC43BEA: cpu.execute_instruction<0xAD>(0x00A031, 3); return true;
    // src/unknown/C4/C45E96.asm:7 BNE @UNKNOWN0
    case 0xC43BED: cpu.execute_instruction<0xD0>(0x0000FB, 2); return true;
    // src/unknown/C4/C45E96.asm:8 LDX #0
    case 0xC43BEF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C45E96.asm:8 LDX #0
    // Overlapping static entry reached from 0xC43BEF.
    case 0xC43BF1: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C45E96.asm:9 BRA @UNKNOWN2
    case 0xC43BF2: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C4/C45E96.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC43BF4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C45E96.asm:12 LDA #<-1
    case 0xC43BF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x009DFF, 3); return true;
    // src/unknown/C4/C45E96.asm:13 STA UNKNOWN_7E9D23,X
    case 0xC43BF8: cpu.execute_instruction<0x9D>(0x009FA9, 3); return true;
    // src/unknown/C4/C45E96.asm:13 STA UNKNOWN_7E9D23,X
    // Overlapping static entry reached from 0xC43BF6.
    case 0xC43BF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x00E89F, 3); return true;
    // src/unknown/C4/C45E96.asm:14 INX
    case 0xC43BFB: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C45E96.asm:16 CPX #32
    case 0xC43BFC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/unknown/C4/C45E96.asm:16 CPX #32
    // Overlapping static entry reached from 0xC43BFC.
    case 0xC43BFE: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C45E96.asm:17 BCC @UNKNOWN1
    case 0xC43BFF: cpu.execute_instruction<0x90>(0x0000F3, 2); return true;
    // src/unknown/C4/C45E96.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC43C01: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C45E96.asm:19 STZ VWF_TILE
    case 0xC43C03: cpu.execute_instruction<0x9C>(0x00A02B, 3); return true;
    // src/unknown/C4/C45E96.asm:20 STZ VWF_X
    case 0xC43C06: cpu.execute_instruction<0x9C>(0x00A029, 3); return true;
    // src/unknown/C4/C45E96.asm:21 LDX UNKNOWN_7E9E27
    case 0xC43C09: cpu.execute_instruction<0xAE>(0x00A02D, 3); return true;
    // src/unknown/C4/C45E96.asm:22 INX
    case 0xC43C0C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C45E96.asm:23 STX UNKNOWN_7E9E27
    case 0xC43C0D: cpu.execute_instruction<0x8E>(0x00A02D, 3); return true;
    // src/unknown/C4/C45E96.asm:24 CPX #48
    case 0xC43C10: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000030, 2); else cpu.execute_instruction<0xE0>(0x000030, 3); return true;
    // src/unknown/C4/C45E96.asm:24 CPX #48
    // Overlapping static entry reached from 0xC43C10.
    case 0xC43C12: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C45E96.asm:25 BCC @UNKNOWN3
    case 0xC43C13: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/unknown/C4/C45E96.asm:26 STZ UNKNOWN_7E9E27
    case 0xC43C15: cpu.execute_instruction<0x9C>(0x00A02D, 3); return true;
    // src/unknown/C4/C45E96.asm:28 STZ UNKNOWN_7E9E29
    case 0xC43C18: cpu.execute_instruction<0x9C>(0x00A02F, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C45E96.asm:32 END_C_FUNCTION
    case 0xC43C1B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46028.asm (unresolved).
bool execute_unresolved_c4_c46028_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46028.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43D76: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46028.asm:9 END_STACK_VARS
    case 0xC43D78: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46028.asm:9 END_STACK_VARS
    case 0xC43D79: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46028.asm:9 END_STACK_VARS
    case 0xC43D7A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46028.asm:9 END_STACK_VARS
    case 0xC43D7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46028.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC43D7B.
    case 0xC43D7D: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46028.asm:9 END_STACK_VARS
    case 0xC43D7E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46028.asm:9 END_STACK_VARS
    case 0xC43D7F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46028.asm:10 TAX
    case 0xC43D80: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46028.asm:11 STX @LOCAL01
    case 0xC43D81: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C46028.asm:12 LDA #0
    case 0xC43D83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C46028.asm:12 LDA #0
    // Overlapping static entry reached from 0xC43D83.
    case 0xC43D85: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C46028.asm:13 STA @LOCAL00
    case 0xC43D86: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46028.asm:14 BRA @UNKNOWN2
    case 0xC43D88: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C4/C46028.asm:16 ASL
    case 0xC43D8A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46028.asm:17 PHA
    case 0xC43D8B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C46028.asm:18 LDX @LOCAL01
    case 0xC43D8C: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C46028.asm:19 TXA
    case 0xC43D8E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C46028.asm:20 PLX
    case 0xC43D8F: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C4/C46028.asm:21 CMP ENTITY_SPRITE_IDS,X
    case 0xC43D90: cpu.execute_instruction<0xDD>(0x0030D4, 3); return true;
    // src/unknown/C4/C46028.asm:22 BNE @UNKNOWN1
    case 0xC43D93: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C4/C46028.asm:23 LDA @LOCAL00
    case 0xC43D95: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46028.asm:24 BRA @UNKNOWN3
    case 0xC43D97: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C4/C46028.asm:26 LDA @LOCAL00
    case 0xC43D99: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46028.asm:27 INC
    case 0xC43D9B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46028.asm:28 STA @LOCAL00
    case 0xC43D9C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46028.asm:30 CMP #MAX_ENTITIES
    case 0xC43D9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C4/C46028.asm:30 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC43D9E.
    case 0xC43DA0: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C46028.asm:31 BCC @UNKNOWN0
    case 0xC43DA1: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/unknown/C4/C46028.asm:32 LDA #.LOWORD(-1)
    case 0xC43DA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46028.asm:32 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC43DA3.
    case 0xC43DA5: cpu.execute_instruction<0xFF>(0xC26B2B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46028.asm:34 END_C_FUNCTION
    case 0xC43DA6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46028.asm:34 END_C_FUNCTION
    case 0xC43DA7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4605A.asm (unresolved).
bool execute_unresolved_c4_c4605a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4605A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43DA8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4605A.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC43DA5.
    case 0xC43DA9: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4605A.asm:9 END_STACK_VARS
    case 0xC43DAA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4605A.asm:9 END_STACK_VARS
    case 0xC43DAB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4605A.asm:9 END_STACK_VARS
    case 0xC43DAC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4605A.asm:9 END_STACK_VARS
    case 0xC43DAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4605A.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC43DAD.
    case 0xC43DAF: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4605A.asm:9 END_STACK_VARS
    case 0xC43DB0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4605A.asm:9 END_STACK_VARS
    case 0xC43DB1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4605A.asm:10 TAX
    case 0xC43DB2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4605A.asm:11 STX @LOCAL01
    case 0xC43DB3: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C4605A.asm:12 LDA #0
    case 0xC43DB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4605A.asm:12 LDA #0
    // Overlapping static entry reached from 0xC43DB5.
    case 0xC43DB7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4605A.asm:13 STA @LOCAL00
    case 0xC43DB8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4605A.asm:14 BRA @UNKNOWN2
    case 0xC43DBA: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/unknown/C4/C4605A.asm:16 ASL
    case 0xC43DBC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4605A.asm:17 PHA
    case 0xC43DBD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C4605A.asm:18 LDX @LOCAL01
    case 0xC43DBE: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C4605A.asm:19 TXA
    case 0xC43DC0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4605A.asm:20 PLX
    case 0xC43DC1: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C4/C4605A.asm:21 CMP ENTITY_NPC_IDS,X
    case 0xC43DC2: cpu.execute_instruction<0xDD>(0x003098, 3); return true;
    // src/unknown/C4/C4605A.asm:22 BNE @UNKNOWN1
    case 0xC43DC5: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C4/C4605A.asm:23 LDA @LOCAL00
    case 0xC43DC7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4605A.asm:24 BRA @UNKNOWN3
    case 0xC43DC9: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C4/C4605A.asm:26 LDA @LOCAL00
    case 0xC43DCB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4605A.asm:27 INC
    case 0xC43DCD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4605A.asm:28 STA @LOCAL00
    case 0xC43DCE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4605A.asm:30 CMP #MAX_ENTITIES
    case 0xC43DD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C4/C4605A.asm:30 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC43DD0.
    case 0xC43DD2: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4605A.asm:31 BCC @UNKNOWN0
    case 0xC43DD3: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/unknown/C4/C4605A.asm:32 LDA #.LOWORD(-1)
    case 0xC43DD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4605A.asm:32 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC43DD5.
    case 0xC43DD7: cpu.execute_instruction<0xFF>(0xC26B2B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4605A.asm:34 END_C_FUNCTION
    case 0xC43DD8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4605A.asm:34 END_C_FUNCTION
    case 0xC43DD9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4608C-jp.asm (unresolved).
bool execute_unresolved_c4_c4608c_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4608C-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43DDA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4608C-jp.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC43DD7.
    case 0xC43DDB: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4608C-jp.asm:8 END_STACK_VARS
    case 0xC43DDC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4608C-jp.asm:8 END_STACK_VARS
    case 0xC43DDD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4608C-jp.asm:8 END_STACK_VARS
    case 0xC43DDE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4608C-jp.asm:8 END_STACK_VARS
    case 0xC43DDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4608C-jp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC43DDF.
    case 0xC43DE1: cpu.execute_instruction<0xFF>(0xE2685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4608C-jp.asm:8 END_STACK_VARS
    case 0xC43DE2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4608C-jp.asm:8 END_STACK_VARS
    case 0xC43DE3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4608C-jp.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC43DE4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4608C-jp.asm:9 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC43DE1.
    case 0xC43DE5: cpu.execute_instruction<0x20>(0x000085, 3); return true;
    // src/unknown/C4/C4608C-jp.asm:10 STA @VIRTUAL00
    case 0xC43DE6: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4608C-jp.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC43DE8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4608C-jp.asm:12 LDA @VIRTUAL00
    case 0xC43DEA: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4608C-jp.asm:13 AND #$00FF
    case 0xC43DEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4608C-jp.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC43DEC.
    case 0xC43DEE: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C4/C4608C-jp.asm:14 CMP #$00FF
    case 0xC43DEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/unknown/C4/C4608C-jp.asm:14 CMP #$00FF
    // Overlapping static entry reached from 0xC43DEF.
    case 0xC43DF1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4608C-jp.asm:15 BNE @UNKNOWN0
    case 0xC43DF2: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C4608C-jp.asm:16 LDA GAME_STATE+game_state::current_party_members
    case 0xC43DF4: cpu.execute_instruction<0xAD>(0x009B3A, 3); return true;
    // src/unknown/C4/C4608C-jp.asm:17 BRA @UNKNOWN4
    case 0xC43DF7: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/unknown/C4/C4608C-jp.asm:19 LDA #0
    case 0xC43DF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4608C-jp.asm:19 LDA #0
    // Overlapping static entry reached from 0xC43DF9.
    case 0xC43DFB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4608C-jp.asm:20 STA @LOCAL00
    case 0xC43DFC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4608C-jp.asm:21 BRA @UNKNOWN3
    case 0xC43DFE: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/unknown/C4/C4608C-jp.asm:23 CLC
    case 0xC43E00: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4608C-jp.asm:24 ADC #.LOWORD(GAME_STATE)
    case 0xC43E01: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C4/C4608C-jp.asm:24 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC43E01.
    case 0xC43E03: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C4/C4608C-jp.asm:25 TAX
    case 0xC43E04: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4608C-jp.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC43E05: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4608C-jp.asm:27 LDA @VIRTUAL00
    case 0xC43E07: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4608C-jp.asm:28 CMP a:game_state::unknown96,X
    case 0xC43E09: cpu.execute_instruction<0xDD>(0x000093, 3); return true;
    // src/unknown/C4/C4608C-jp.asm:29 BNE @UNKNOWN2
    case 0xC43E0C: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C4/C4608C-jp.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC43E0E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4608C-jp.asm:31 LDA @LOCAL00
    case 0xC43E10: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4608C-jp.asm:32 ASL
    case 0xC43E12: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4608C-jp.asm:33 CLC
    case 0xC43E13: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4608C-jp.asm:34 ADC #.LOWORD(GAME_STATE)
    case 0xC43E14: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C4/C4608C-jp.asm:34 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC43E14.
    case 0xC43E16: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C4/C4608C-jp.asm:35 TAX
    case 0xC43E17: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4608C-jp.asm:36 LDA a:game_state::unknownA2,X
    case 0xC43E18: cpu.execute_instruction<0xBD>(0x00009F, 3); return true;
    // src/unknown/C4/C4608C-jp.asm:37 BRA @UNKNOWN4
    case 0xC43E1B: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/C4/C4608C-jp.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC43E1D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4608C-jp.asm:40 LDA @LOCAL00
    case 0xC43E1F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4608C-jp.asm:41 INC
    case 0xC43E21: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4608C-jp.asm:42 STA @LOCAL00
    case 0xC43E22: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4608C-jp.asm:44 CMP #6
    case 0xC43E24: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C4/C4608C-jp.asm:44 CMP #6
    // Overlapping static entry reached from 0xC43E24.
    case 0xC43E26: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4608C-jp.asm:45 BCC @UNKNOWN1
    case 0xC43E27: cpu.execute_instruction<0x90>(0x0000D7, 2); return true;
    // src/unknown/C4/C4608C-jp.asm:46 LDA #.LOWORD(-1)
    case 0xC43E29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4608C-jp.asm:46 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC43E29.
    case 0xC43E2B: cpu.execute_instruction<0xFF>(0xC26B2B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4608C-jp.asm:48 END_C_FUNCTION
    case 0xC43E2C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4608C-jp.asm:48 END_C_FUNCTION
    case 0xC43E2D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C460CE.asm (unresolved).
bool execute_unresolved_c4_c460ce_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C460CE.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43E2E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C460CE.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC43E2B.
    case 0xC43E2F: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C460CE.asm:10 END_STACK_VARS
    case 0xC43E30: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C460CE.asm:10 END_STACK_VARS
    case 0xC43E31: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C460CE.asm:10 END_STACK_VARS
    case 0xC43E32: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C460CE.asm:10 END_STACK_VARS
    case 0xC43E33: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C460CE.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC43E33.
    case 0xC43E35: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C460CE.asm:10 END_STACK_VARS
    case 0xC43E36: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C460CE.asm:10 END_STACK_VARS
    case 0xC43E37: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C460CE.asm:11 TXY
    case 0xC43E38: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C460CE.asm:12 STY @LOCAL02
    case 0xC43E39: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C4/C460CE.asm:13 TAX
    case 0xC43E3B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C460CE.asm:14 JSL UNKNOWN_C4605A
    case 0xC43E3C: cpu.execute_instruction<0x22>(0xC43DA8, 4); return true;
    // src/unknown/C4/C460CE.asm:15 STA @LOCAL01
    case 0xC43E40: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C460CE.asm:16 CMP #.LOWORD(-1)
    case 0xC43E42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C460CE.asm:16 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC43E42.
    case 0xC43E44: cpu.execute_instruction<0xFF>(0x0A3CF0, 4); return true;
    // src/unknown/C4/C460CE.asm:17 BEQ @UNKNOWN2
    case 0xC43E45: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/unknown/C4/C460CE.asm:18 ASL
    case 0xC43E47: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C460CE.asm:19 TAX
    case 0xC43E48: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C460CE.asm:20 LDA ENTITY_ABS_X_TABLE,X
    case 0xC43E49: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C4/C460CE.asm:21 STA ENTITY_PREPARED_X_COORDINATE
    case 0xC43E4C: cpu.execute_instruction<0x8D>(0x00A033, 3); return true;
    // src/unknown/C4/C460CE.asm:22 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC43E4F: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C4/C460CE.asm:23 STA ENTITY_PREPARED_Y_COORDINATE
    case 0xC43E52: cpu.execute_instruction<0x8D>(0x00A035, 3); return true;
    // src/unknown/C4/C460CE.asm:24 LDA ENTITY_DIRECTIONS,X
    case 0xC43E55: cpu.execute_instruction<0xBD>(0x002EF4, 3); return true;
    // src/unknown/C4/C460CE.asm:25 STA ENTITY_PREPARED_DIRECTION
    case 0xC43E58: cpu.execute_instruction<0x8D>(0x00A037, 3); return true;
    // src/unknown/C4/C460CE.asm:26 LDY @LOCAL02
    case 0xC43E5B: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C4/C460CE.asm:27 CPY #6
    case 0xC43E5D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/unknown/C4/C460CE.asm:27 CPY #6
    // Overlapping static entry reached from 0xC43E5D.
    case 0xC43E5F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C460CE.asm:28 BEQ @UNKNOWN0
    case 0xC43E60: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C460CE.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    case 0xC43E62: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F9, 2); else cpu.execute_instruction<0xA9>(0x00A1F9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C460CE.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    // Overlapping static entry reached from 0xC43E62.
    case 0xC43E64: cpu.execute_instruction<0xA1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C460CE.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    case 0xC43E65: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C460CE.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    // Overlapping static entry reached from 0xC43E64.
    case 0xC43E66: cpu.execute_instruction<0x0E>(0x00C3A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C460CE.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    case 0xC43E67: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C460CE.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    // Overlapping static entry reached from 0xC43E67.
    case 0xC43E69: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C460CE.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    case 0xC43E6A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C460CE.asm:30 BRA @UNKNOWN1
    case 0xC43E6C: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C460CE.asm:32 LOADPTR EVENT_35, @LOCAL00
    case 0xC43E6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F4, 2); else cpu.execute_instruction<0xA9>(0x00A1F4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C460CE.asm:32 LOADPTR EVENT_35, @LOCAL00
    // Overlapping static entry reached from 0xC43E6E.
    case 0xC43E70: cpu.execute_instruction<0xA1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C460CE.asm:32 LOADPTR EVENT_35, @LOCAL00
    case 0xC43E71: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C460CE.asm:32 LOADPTR EVENT_35, @LOCAL00
    // Overlapping static entry reached from 0xC43E70.
    case 0xC43E72: cpu.execute_instruction<0x0E>(0x00C3A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C460CE.asm:32 LOADPTR EVENT_35, @LOCAL00
    case 0xC43E73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C460CE.asm:32 LOADPTR EVENT_35, @LOCAL00
    // Overlapping static entry reached from 0xC43E73.
    case 0xC43E75: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C460CE.asm:32 LOADPTR EVENT_35, @LOCAL00
    case 0xC43E76: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C460CE.asm:34 LDY @LOCAL00+2
    case 0xC43E78: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C460CE.asm:35 LDA @LOCAL01
    case 0xC43E7A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C460CE.asm:36 TAX
    case 0xC43E7C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C460CE.asm:37 LDA @LOCAL00
    case 0xC43E7D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C460CE.asm:38 JSL INIT_ENTITY_UNKNOWN1
    case 0xC43E7F: cpu.execute_instruction<0x22>(0xC093D8, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C460CE.asm:40 END_C_FUNCTION
    case 0xC43E83: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C460CE.asm:40 END_C_FUNCTION
    case 0xC43E84: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46125.asm (unresolved).
bool execute_unresolved_c4_c46125_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46125.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43E85: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46125.asm:10 END_STACK_VARS
    case 0xC43E87: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46125.asm:10 END_STACK_VARS
    case 0xC43E88: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46125.asm:10 END_STACK_VARS
    case 0xC43E89: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46125.asm:10 END_STACK_VARS
    case 0xC43E8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46125.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC43E8A.
    case 0xC43E8C: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46125.asm:10 END_STACK_VARS
    case 0xC43E8D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46125.asm:10 END_STACK_VARS
    case 0xC43E8E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46125.asm:11 TXY
    case 0xC43E8F: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C46125.asm:12 STY @LOCAL02
    case 0xC43E90: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C4/C46125.asm:13 TAX
    case 0xC43E92: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46125.asm:14 JSL UNKNOWN_C46028
    case 0xC43E93: cpu.execute_instruction<0x22>(0xC43D76, 4); return true;
    // src/unknown/C4/C46125.asm:15 STA @LOCAL01
    case 0xC43E97: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C46125.asm:16 CMP #.LOWORD(-1)
    case 0xC43E99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46125.asm:16 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC43E99.
    case 0xC43E9B: cpu.execute_instruction<0xFF>(0x0A3CF0, 4); return true;
    // src/unknown/C4/C46125.asm:17 BEQ @UNKNOWN2
    case 0xC43E9C: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/unknown/C4/C46125.asm:18 ASL
    case 0xC43E9E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46125.asm:19 TAX
    case 0xC43E9F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46125.asm:20 LDA ENTITY_ABS_X_TABLE,X
    case 0xC43EA0: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C4/C46125.asm:21 STA ENTITY_PREPARED_X_COORDINATE
    case 0xC43EA3: cpu.execute_instruction<0x8D>(0x00A033, 3); return true;
    // src/unknown/C4/C46125.asm:22 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC43EA6: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C4/C46125.asm:23 STA ENTITY_PREPARED_Y_COORDINATE
    case 0xC43EA9: cpu.execute_instruction<0x8D>(0x00A035, 3); return true;
    // src/unknown/C4/C46125.asm:24 LDA ENTITY_DIRECTIONS,X
    case 0xC43EAC: cpu.execute_instruction<0xBD>(0x002EF4, 3); return true;
    // src/unknown/C4/C46125.asm:25 STA ENTITY_PREPARED_DIRECTION
    case 0xC43EAF: cpu.execute_instruction<0x8D>(0x00A037, 3); return true;
    // src/unknown/C4/C46125.asm:26 LDY @LOCAL02
    case 0xC43EB2: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C4/C46125.asm:27 CPY #6
    case 0xC43EB4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/unknown/C4/C46125.asm:27 CPY #6
    // Overlapping static entry reached from 0xC43EB4.
    case 0xC43EB6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C46125.asm:28 BEQ @UNKNOWN0
    case 0xC43EB7: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C46125.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    case 0xC43EB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F9, 2); else cpu.execute_instruction<0xA9>(0x00A1F9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C46125.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    // Overlapping static entry reached from 0xC43EB9.
    case 0xC43EBB: cpu.execute_instruction<0xA1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C46125.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    case 0xC43EBC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C46125.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    // Overlapping static entry reached from 0xC43EBB.
    case 0xC43EBD: cpu.execute_instruction<0x0E>(0x00C3A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C46125.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    case 0xC43EBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C46125.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    // Overlapping static entry reached from 0xC43EBE.
    case 0xC43EC0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C46125.asm:29 LOADPTR UNKNOWN_C3A209, @LOCAL00
    case 0xC43EC1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C46125.asm:30 BRA @UNKNOWN1
    case 0xC43EC3: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C46125.asm:32 LOADPTR EVENT_35, @LOCAL00
    case 0xC43EC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F4, 2); else cpu.execute_instruction<0xA9>(0x00A1F4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C46125.asm:32 LOADPTR EVENT_35, @LOCAL00
    // Overlapping static entry reached from 0xC43EC5.
    case 0xC43EC7: cpu.execute_instruction<0xA1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C46125.asm:32 LOADPTR EVENT_35, @LOCAL00
    case 0xC43EC8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C46125.asm:32 LOADPTR EVENT_35, @LOCAL00
    // Overlapping static entry reached from 0xC43EC7.
    case 0xC43EC9: cpu.execute_instruction<0x0E>(0x00C3A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C46125.asm:32 LOADPTR EVENT_35, @LOCAL00
    case 0xC43ECA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C46125.asm:32 LOADPTR EVENT_35, @LOCAL00
    // Overlapping static entry reached from 0xC43ECA.
    case 0xC43ECC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C46125.asm:32 LOADPTR EVENT_35, @LOCAL00
    case 0xC43ECD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C46125.asm:34 LDY @LOCAL00+2
    case 0xC43ECF: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C46125.asm:35 LDA @LOCAL01
    case 0xC43ED1: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46125.asm:36 TAX
    case 0xC43ED3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46125.asm:37 LDA @LOCAL00
    case 0xC43ED4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46125.asm:38 JSL INIT_ENTITY_UNKNOWN1
    case 0xC43ED6: cpu.execute_instruction<0x22>(0xC093D8, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46125.asm:40 END_C_FUNCTION
    case 0xC43EDA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46125.asm:40 END_C_FUNCTION
    case 0xC43EDB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4617C.asm (unresolved).
bool execute_unresolved_c4_c4617c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4617C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43EDC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4617C.asm:9 END_STACK_VARS
    case 0xC43EDE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4617C.asm:9 END_STACK_VARS
    case 0xC43EDF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4617C.asm:9 END_STACK_VARS
    case 0xC43EE0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4617C.asm:9 END_STACK_VARS
    case 0xC43EE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4617C.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC43EE1.
    case 0xC43EE3: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4617C.asm:9 END_STACK_VARS
    case 0xC43EE4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4617C.asm:9 END_STACK_VARS
    case 0xC43EE5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4617C.asm:10 TXY
    case 0xC43EE6: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C4617C.asm:11 STY @LOCAL01
    case 0xC43EE7: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C4617C.asm:12 TAX
    case 0xC43EE9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4617C.asm:13 JSL UNKNOWN_C4605A
    case 0xC43EEA: cpu.execute_instruction<0x22>(0xC43DA8, 4); return true;
    // src/unknown/C4/C4617C.asm:14 TAX
    case 0xC43EEE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4617C.asm:15 CPX #.LOWORD(-1)
    case 0xC43EEF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4617C.asm:15 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC43EEF.
    case 0xC43EF1: cpu.execute_instruction<0xFF>(0xA936F0, 4); return true;
    // src/unknown/C4/C4617C.asm:16 BEQ @UNKNOWN0
    case 0xC43EF2: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4617C.asm:17 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    case 0xC43EF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00002F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4617C.asm:17 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC43EF1.
    case 0xC43EF5: cpu.execute_instruction<0x2F>(0x068500, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4617C.asm:17 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC43EF4.
    case 0xC43EF6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4617C.asm:17 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    case 0xC43EF7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4617C.asm:17 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    case 0xC43EF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4617C.asm:17 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC43EF9.
    case 0xC43EFB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4617C.asm:17 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    case 0xC43EFC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4617C.asm:18 LDY @LOCAL01
    case 0xC43EFE: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C4617C.asm:19 TYA
    case 0xC43F00: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C4/C4617C.asm:20 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC43F01: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C4/C4617C.asm:20 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC43F03: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C4/C4617C.asm:20 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC43F04: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4617C.asm:21 STA @LOCAL00
    case 0xC43F06: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4617C.asm:22 INC
    case 0xC43F08: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4617C.asm:23 INC
    case 0xC43F09: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C4617C.asm:24 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC43F0A: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C4/C4617C.asm:24 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC43F0C: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C4/C4617C.asm:24 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC43F0E: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C4/C4617C.asm:24 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC43F10: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/C4/C4617C.asm:25 CLC
    case 0xC43F12: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4617C.asm:26 ADC @VIRTUAL0A
    case 0xC43F13: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4617C.asm:27 STA @VIRTUAL0A
    case 0xC43F15: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4617C.asm:28 LDA [@VIRTUAL0A]
    case 0xC43F17: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4617C.asm:29 AND #$00FF
    case 0xC43F19: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4617C.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC43F19.
    case 0xC43F1B: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C4617C.asm:30 TAY
    case 0xC43F1C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4617C.asm:31 LDA @LOCAL00
    case 0xC43F1D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4617C.asm:32 CLC
    case 0xC43F1F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4617C.asm:33 ADC @VIRTUAL06
    case 0xC43F20: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4617C.asm:34 STA @VIRTUAL06
    case 0xC43F22: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4617C.asm:35 LDA [@VIRTUAL06]
    case 0xC43F24: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4617C.asm:36 JSL INIT_ENTITY_UNKNOWN1
    case 0xC43F26: cpu.execute_instruction<0x22>(0xC093D8, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4617C.asm:38 END_C_FUNCTION
    case 0xC43F2A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4617C.asm:38 END_C_FUNCTION
    case 0xC43F2B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C461CC.asm (unresolved).
bool execute_unresolved_c4_c461cc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C461CC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43F2C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C461CC.asm:8 END_STACK_VARS
    case 0xC43F2E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C461CC.asm:8 END_STACK_VARS
    case 0xC43F2F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C461CC.asm:8 END_STACK_VARS
    case 0xC43F30: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C461CC.asm:8 END_STACK_VARS
    case 0xC43F31: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C461CC.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC43F31.
    case 0xC43F33: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C461CC.asm:8 END_STACK_VARS
    case 0xC43F34: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C461CC.asm:8 END_STACK_VARS
    case 0xC43F35: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C461CC.asm:9 TXY
    case 0xC43F36: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C461CC.asm:10 STY @LOCAL01
    case 0xC43F37: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C461CC.asm:11 TAX
    case 0xC43F39: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C461CC.asm:12 JSL UNKNOWN_C46028
    case 0xC43F3A: cpu.execute_instruction<0x22>(0xC43D76, 4); return true;
    // src/unknown/C4/C461CC.asm:13 TAX
    case 0xC43F3E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C461CC.asm:14 CPX #.LOWORD(-1)
    case 0xC43F3F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C4/C461CC.asm:14 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC43F3F.
    case 0xC43F41: cpu.execute_instruction<0xFF>(0xA936F0, 4); return true;
    // src/unknown/C4/C461CC.asm:15 BEQ @UNKNOWN0
    case 0xC43F42: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C461CC.asm:16 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    case 0xC43F44: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00002F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C461CC.asm:16 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC43F41.
    case 0xC43F45: cpu.execute_instruction<0x2F>(0x068500, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C461CC.asm:16 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC43F44.
    case 0xC43F46: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C461CC.asm:16 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    case 0xC43F47: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C461CC.asm:16 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    case 0xC43F49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C461CC.asm:16 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC43F49.
    case 0xC43F4B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C461CC.asm:16 LOADPTR EVENT_SCRIPT_POINTERS, @VIRTUAL06
    case 0xC43F4C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C461CC.asm:17 LDY @LOCAL01
    case 0xC43F4E: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C461CC.asm:18 TYA
    case 0xC43F50: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C4/C461CC.asm:19 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC43F51: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C4/C461CC.asm:19 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC43F53: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C4/C461CC.asm:19 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC43F54: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C461CC.asm:20 STA @LOCAL00
    case 0xC43F56: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C461CC.asm:21 INC
    case 0xC43F58: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C461CC.asm:22 INC
    case 0xC43F59: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C461CC.asm:23 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC43F5A: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C4/C461CC.asm:23 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC43F5C: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C4/C461CC.asm:23 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC43F5E: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C4/C461CC.asm:23 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC43F60: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/C4/C461CC.asm:24 CLC
    case 0xC43F62: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C461CC.asm:25 ADC @VIRTUAL0A
    case 0xC43F63: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C461CC.asm:26 STA @VIRTUAL0A
    case 0xC43F65: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C461CC.asm:27 LDA [@VIRTUAL0A]
    case 0xC43F67: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C461CC.asm:28 AND #$00FF
    case 0xC43F69: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C461CC.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC43F69.
    case 0xC43F6B: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C461CC.asm:29 TAY
    case 0xC43F6C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C461CC.asm:30 LDA @LOCAL00
    case 0xC43F6D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C461CC.asm:31 CLC
    case 0xC43F6F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C461CC.asm:32 ADC @VIRTUAL06
    case 0xC43F70: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C461CC.asm:33 STA @VIRTUAL06
    case 0xC43F72: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C461CC.asm:34 LDA [@VIRTUAL06]
    case 0xC43F74: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C461CC.asm:35 JSL INIT_ENTITY_UNKNOWN1
    case 0xC43F76: cpu.execute_instruction<0x22>(0xC093D8, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C461CC.asm:37 END_C_FUNCTION
    case 0xC43F7A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C461CC.asm:37 END_C_FUNCTION
    case 0xC43F7B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4621C.asm (unresolved).
bool execute_unresolved_c4_c4621c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4621C.asm:3 BEGIN_C_FUNCTION
    case 0xC43F7C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4621C.asm:8 END_STACK_VARS
    case 0xC43F7E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4621C.asm:8 END_STACK_VARS
    case 0xC43F7F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4621C.asm:8 END_STACK_VARS
    case 0xC43F80: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4621C.asm:8 END_STACK_VARS
    case 0xC43F81: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4621C.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC43F81.
    case 0xC43F83: cpu.execute_instruction<0xFF>(0xF0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4621C.asm:8 END_STACK_VARS
    case 0xC43F84: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4621C.asm:8 END_STACK_VARS
    case 0xC43F85: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4621C.asm:9 BEQ @UNKNOWN0
    case 0xC43F86: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C4/C4621C.asm:9 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC43F83.
    case 0xC43F87: cpu.execute_instruction<0x0C>(0x0001C9, 3); return true;
    // src/unknown/C4/C4621C.asm:10 CMP #1
    case 0xC43F88: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C4621C.asm:10 CMP #1
    // Overlapping static entry reached from 0xC43F88.
    case 0xC43F8A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4621C.asm:11 BEQ @UNKNOWN1
    case 0xC43F8B: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C4/C4621C.asm:12 CMP #2
    case 0xC43F8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C4/C4621C.asm:12 CMP #2
    // Overlapping static entry reached from 0xC43F8D.
    case 0xC43F8F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4621C.asm:13 BEQ @UNKNOWN2
    case 0xC43F90: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C4/C4621C.asm:14 BRA @UNKNOWN3
    case 0xC43F92: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/unknown/C4/C4621C.asm:16 TXA
    case 0xC43F94: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4621C.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC43F95: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4621C.asm:18 JSL UNKNOWN_C4608C
    case 0xC43F97: cpu.execute_instruction<0x22>(0xC43DDA, 4); return true;
    // src/unknown/C4/C4621C.asm:19 TAY
    case 0xC43F9B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4621C.asm:20 STY @LOCAL00
    case 0xC43F9C: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4621C.asm:21 BRA @UNKNOWN3
    case 0xC43F9E: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C4/C4621C.asm:23 TXA
    case 0xC43FA0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4621C.asm:24 JSL UNKNOWN_C4605A
    case 0xC43FA1: cpu.execute_instruction<0x22>(0xC43DA8, 4); return true;
    // src/unknown/C4/C4621C.asm:25 TAY
    case 0xC43FA5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4621C.asm:26 STY @LOCAL00
    case 0xC43FA6: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4621C.asm:27 BRA @UNKNOWN3
    case 0xC43FA8: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/unknown/C4/C4621C.asm:29 TXA
    case 0xC43FAA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4621C.asm:30 JSL UNKNOWN_C46028
    case 0xC43FAB: cpu.execute_instruction<0x22>(0xC43D76, 4); return true;
    // src/unknown/C4/C4621C.asm:31 TAY
    case 0xC43FAF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4621C.asm:32 STY @LOCAL00
    case 0xC43FB0: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4621C.asm:34 LDY @LOCAL00
    case 0xC43FB2: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C4621C.asm:35 TYA
    case 0xC43FB4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4621C.asm:36 END_C_FUNCTION
    case 0xC43FB5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4621C.asm:36 END_C_FUNCTION
    case 0xC43FB6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46257-jp.asm (unresolved).
bool execute_unresolved_c4_c46257_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46257-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC43FB7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46257-jp.asm:14 END_STACK_VARS
    case 0xC43FB9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46257-jp.asm:14 END_STACK_VARS
    case 0xC43FBA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46257-jp.asm:14 END_STACK_VARS
    case 0xC43FBB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46257-jp.asm:14 END_STACK_VARS
    case 0xC43FBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46257-jp.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC43FBC.
    case 0xC43FBE: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46257-jp.asm:14 END_STACK_VARS
    case 0xC43FBF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46257-jp.asm:14 END_STACK_VARS
    case 0xC43FC0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46257-jp.asm:15 STY @VIRTUAL04
    case 0xC43FC1: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C4/C46257-jp.asm:15 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC43FBE.
    case 0xC43FC2: cpu.execute_instruction<0x04>(0x00009B, 2); return true;
    // src/unknown/C4/C46257-jp.asm:16 TXY
    case 0xC43FC3: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C46257-jp.asm:17 LDX @PARAM03
    case 0xC43FC4: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // src/unknown/C4/C46257-jp.asm:18 STX @VIRTUAL02
    case 0xC43FC6: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C46257-jp.asm:19 TYX
    case 0xC43FC8: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C46257-jp.asm:20 JSR UNKNOWN_C4621C
    case 0xC43FC9: cpu.execute_instruction<0x20>(0x003F7C, 3); return true;
    // src/unknown/C4/C46257-jp.asm:21 TAY
    case 0xC43FCC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C46257-jp.asm:22 STY @LOCAL03
    case 0xC43FCD: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C4/C46257-jp.asm:23 LDX @VIRTUAL02
    case 0xC43FCF: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C46257-jp.asm:24 LDA @VIRTUAL04
    case 0xC43FD1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C46257-jp.asm:25 JSR UNKNOWN_C4621C
    case 0xC43FD3: cpu.execute_instruction<0x20>(0x003F7C, 3); return true;
    // src/unknown/C4/C46257-jp.asm:26 TAX
    case 0xC43FD6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46257-jp.asm:27 LDY @LOCAL03
    case 0xC43FD7: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C4/C46257-jp.asm:28 TYA
    case 0xC43FD9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46257-jp.asm:29 ASL
    case 0xC43FDA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46257-jp.asm:30 STA @LOCAL02
    case 0xC43FDB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C46257-jp.asm:31 TXA
    case 0xC43FDD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C46257-jp.asm:32 ASL
    case 0xC43FDE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46257-jp.asm:33 TAX
    case 0xC43FDF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46257-jp.asm:34 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC43FE0: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C4/C46257-jp.asm:35 STA @LOCAL00
    case 0xC43FE3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46257-jp.asm:36 LDY ENTITY_ABS_X_TABLE,X
    case 0xC43FE5: cpu.execute_instruction<0xBC>(0x000B84, 3); return true;
    // src/unknown/C4/C46257-jp.asm:37 LDA @LOCAL02
    case 0xC43FE8: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46257-jp.asm:38 TAX
    case 0xC43FEA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46257-jp.asm:39 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC43FEB: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C4/C46257-jp.asm:40 TAX
    case 0xC43FEE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46257-jp.asm:41 STX @LOCAL01
    case 0xC43FEF: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C46257-jp.asm:42 LDA @LOCAL02
    case 0xC43FF1: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46257-jp.asm:43 TAX
    case 0xC43FF3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46257-jp.asm:44 LDA ENTITY_ABS_X_TABLE,X
    case 0xC43FF4: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C4/C46257-jp.asm:45 LDX @LOCAL01
    case 0xC43FF7: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C46257-jp.asm:46 JSL UNKNOWN_C41EFF
    case 0xC43FF9: cpu.execute_instruction<0x22>(0xC41E4B, 4); return true;
    // src/unknown/C4/C46257-jp.asm:47 LDY #$2000
    case 0xC43FFD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/unknown/C4/C46257-jp.asm:47 LDY #$2000
    // Overlapping static entry reached from 0xC43FFD.
    case 0xC43FFF: cpu.execute_instruction<0x20>(0x006918, 3); return true;
    // src/unknown/C4/C46257-jp.asm:48 CLC
    case 0xC44000: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46257-jp.asm:49 ADC #$1000
    case 0xC44001: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x001000, 3); return true;
    // src/unknown/C4/C46257-jp.asm:49 ADC #$1000
    // Overlapping static entry reached from 0xC43FFF.
    case 0xC44002: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // src/unknown/C4/C46257-jp.asm:49 ADC #$1000
    // Overlapping static entry reached from 0xC44001.
    case 0xC44003: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/unknown/C4/C46257-jp.asm:50 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC44004: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/unknown/C4/C46257-jp.asm:50 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC44003.
    case 0xC44005: cpu.execute_instruction<0x3D>(0x00C091, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46257-jp.asm:51 END_C_FUNCTION
    case 0xC44008: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46257-jp.asm:51 END_C_FUNCTION
    case 0xC44009: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C462AE.asm (unresolved).
bool execute_unresolved_c4_c462ae_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C462AE.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4400A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C462AE.asm:10 END_STACK_VARS
    case 0xC4400C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C462AE.asm:10 END_STACK_VARS
    case 0xC4400D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C462AE.asm:10 END_STACK_VARS
    case 0xC4400E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C462AE.asm:10 END_STACK_VARS
    case 0xC4400F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C462AE.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC4400F.
    case 0xC44011: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C462AE.asm:10 END_STACK_VARS
    case 0xC44012: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C462AE.asm:10 END_STACK_VARS
    case 0xC44013: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C462AE.asm:11 STY @VIRTUAL02
    case 0xC44014: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C462AE.asm:11 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC44011.
    case 0xC44015: cpu.execute_instruction<0x02>(0x00009B, 2); return true;
    // src/unknown/C4/C462AE.asm:12 TXY
    case 0xC44016: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C462AE.asm:13 TAX
    case 0xC44017: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C462AE.asm:14 LDA @VIRTUAL02
    case 0xC44018: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C462AE.asm:15 STA @LOCAL00
    case 0xC4401A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C462AE.asm:16 LDA #1
    case 0xC4401C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C462AE.asm:16 LDA #1
    // Overlapping static entry reached from 0xC4401C.
    case 0xC4401E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C462AE.asm:17 JSL UNKNOWN_C46257
    case 0xC4401F: cpu.execute_instruction<0x22>(0xC43FB7, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C462AE.asm:18 END_C_FUNCTION
    case 0xC44023: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C462AE.asm:18 END_C_FUNCTION
    case 0xC44024: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C462C9.asm (unresolved).
bool execute_unresolved_c4_c462c9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C462C9.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44025: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C462C9.asm:10 END_STACK_VARS
    case 0xC44027: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C462C9.asm:10 END_STACK_VARS
    case 0xC44028: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C462C9.asm:10 END_STACK_VARS
    case 0xC44029: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C462C9.asm:10 END_STACK_VARS
    case 0xC4402A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C462C9.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC4402A.
    case 0xC4402C: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C462C9.asm:10 END_STACK_VARS
    case 0xC4402D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C462C9.asm:10 END_STACK_VARS
    case 0xC4402E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C462C9.asm:11 STY @VIRTUAL02
    case 0xC4402F: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C462C9.asm:11 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC4402C.
    case 0xC44030: cpu.execute_instruction<0x02>(0x00009B, 2); return true;
    // src/unknown/C4/C462C9.asm:12 TXY
    case 0xC44031: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C462C9.asm:13 TAX
    case 0xC44032: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C462C9.asm:14 LDA @VIRTUAL02
    case 0xC44033: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C462C9.asm:15 STA @LOCAL00
    case 0xC44035: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C462C9.asm:16 LDA #2
    case 0xC44037: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C4/C462C9.asm:16 LDA #2
    // Overlapping static entry reached from 0xC44037.
    case 0xC44039: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C462C9.asm:17 JSL UNKNOWN_C46257
    case 0xC4403A: cpu.execute_instruction<0x22>(0xC43FB7, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C462C9.asm:18 END_C_FUNCTION
    case 0xC4403E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C462C9.asm:18 END_C_FUNCTION
    case 0xC4403F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C462E4.asm (unresolved).
bool execute_unresolved_c4_c462e4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C462E4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44040: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C462E4.asm:10 END_STACK_VARS
    case 0xC44042: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C462E4.asm:10 END_STACK_VARS
    case 0xC44043: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C462E4.asm:10 END_STACK_VARS
    case 0xC44044: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C462E4.asm:10 END_STACK_VARS
    case 0xC44045: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C462E4.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC44045.
    case 0xC44047: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C462E4.asm:10 END_STACK_VARS
    case 0xC44048: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C462E4.asm:10 END_STACK_VARS
    case 0xC44049: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C462E4.asm:11 STY @VIRTUAL02
    case 0xC4404A: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C462E4.asm:11 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC44047.
    case 0xC4404B: cpu.execute_instruction<0x02>(0x00009B, 2); return true;
    // src/unknown/C4/C462E4.asm:12 TXY
    case 0xC4404C: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C462E4.asm:13 TAX
    case 0xC4404D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C462E4.asm:14 LDA @VIRTUAL02
    case 0xC4404E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C462E4.asm:15 STA @LOCAL00
    case 0xC44050: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C462E4.asm:16 LDA #0
    case 0xC44052: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C462E4.asm:16 LDA #0
    // Overlapping static entry reached from 0xC44052.
    case 0xC44054: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C462E4.asm:17 JSL UNKNOWN_C46257
    case 0xC44055: cpu.execute_instruction<0x22>(0xC43FB7, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C462E4.asm:18 END_C_FUNCTION
    case 0xC44059: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C462E4.asm:18 END_C_FUNCTION
    case 0xC4405A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C462FF.asm (unresolved).
bool execute_unresolved_c4_c462ff_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C462FF.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4405B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C462FF.asm:8 END_STACK_VARS
    case 0xC4405D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C462FF.asm:8 END_STACK_VARS
    case 0xC4405E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C462FF.asm:8 END_STACK_VARS
    case 0xC4405F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C462FF.asm:8 END_STACK_VARS
    case 0xC44060: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C462FF.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC44060.
    case 0xC44062: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C462FF.asm:8 END_STACK_VARS
    case 0xC44063: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C462FF.asm:8 END_STACK_VARS
    case 0xC44064: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C462FF.asm:9 STX @VIRTUAL02
    case 0xC44065: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C462FF.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC44062.
    case 0xC44066: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C4/C462FF.asm:10 TAX
    case 0xC44067: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C462FF.asm:11 JSL UNKNOWN_C4605A
    case 0xC44068: cpu.execute_instruction<0x22>(0xC43DA8, 4); return true;
    // src/unknown/C4/C462FF.asm:12 STA @LOCAL00
    case 0xC4406C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C462FF.asm:13 CMP #.LOWORD(-1)
    case 0xC4406E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C462FF.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4406E.
    case 0xC44070: cpu.execute_instruction<0xFF>(0x0A18F0, 4); return true;
    // src/unknown/C4/C462FF.asm:14 BEQ @UNKNOWN0
    case 0xC44071: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C4/C462FF.asm:15 ASL
    case 0xC44073: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C462FF.asm:16 CLC
    case 0xC44074: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C462FF.asm:17 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC44075: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F4, 2); else cpu.execute_instruction<0x69>(0x002EF4, 3); return true;
    // src/unknown/C4/C462FF.asm:17 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC44075.
    case 0xC44077: cpu.execute_instruction<0x2E>(0x00BDAA, 3); return true;
    // src/unknown/C4/C462FF.asm:18 TAX
    case 0xC44078: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C462FF.asm:19 LDA __BSS_START__,X
    case 0xC44079: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C462FF.asm:19 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC44077.
    case 0xC4407A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C462FF.asm:20 CMP @VIRTUAL02
    case 0xC4407C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C462FF.asm:21 BEQ @UNKNOWN0
    case 0xC4407E: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/unknown/C4/C462FF.asm:22 LDA @VIRTUAL02
    case 0xC44080: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C462FF.asm:23 STA __BSS_START__,X
    case 0xC44082: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C462FF.asm:24 LDA @LOCAL00
    case 0xC44085: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C462FF.asm:25 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC44087: cpu.execute_instruction<0x22>(0xC0A46E, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C462FF.asm:27 END_C_FUNCTION
    case 0xC4408B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C462FF.asm:27 END_C_FUNCTION
    case 0xC4408C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46331.asm (unresolved).
bool execute_unresolved_c4_c46331_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46331.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4408D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46331.asm:8 END_STACK_VARS
    case 0xC4408F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46331.asm:8 END_STACK_VARS
    case 0xC44090: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46331.asm:8 END_STACK_VARS
    case 0xC44091: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46331.asm:8 END_STACK_VARS
    case 0xC44092: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46331.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC44092.
    case 0xC44094: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46331.asm:8 END_STACK_VARS
    case 0xC44095: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46331.asm:8 END_STACK_VARS
    case 0xC44096: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46331.asm:9 STX @VIRTUAL02
    case 0xC44097: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C46331.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC44094.
    case 0xC44098: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C4/C46331.asm:10 TAX
    case 0xC44099: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46331.asm:11 JSL UNKNOWN_C46028
    case 0xC4409A: cpu.execute_instruction<0x22>(0xC43D76, 4); return true;
    // src/unknown/C4/C46331.asm:12 STA @LOCAL00
    case 0xC4409E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46331.asm:13 CMP #.LOWORD(-1)
    case 0xC440A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46331.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC440A0.
    case 0xC440A2: cpu.execute_instruction<0xFF>(0x0A18F0, 4); return true;
    // src/unknown/C4/C46331.asm:14 BEQ @UNKNOWN0
    case 0xC440A3: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C4/C46331.asm:15 ASL
    case 0xC440A5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46331.asm:16 CLC
    case 0xC440A6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46331.asm:17 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC440A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F4, 2); else cpu.execute_instruction<0x69>(0x002EF4, 3); return true;
    // src/unknown/C4/C46331.asm:17 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC440A7.
    case 0xC440A9: cpu.execute_instruction<0x2E>(0x00BDAA, 3); return true;
    // src/unknown/C4/C46331.asm:18 TAX
    case 0xC440AA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46331.asm:19 LDA __BSS_START__,X
    case 0xC440AB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46331.asm:19 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC440A9.
    case 0xC440AC: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C46331.asm:20 CMP @VIRTUAL02
    case 0xC440AE: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C46331.asm:21 BEQ @UNKNOWN0
    case 0xC440B0: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/unknown/C4/C46331.asm:22 LDA @VIRTUAL02
    case 0xC440B2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C46331.asm:23 STA __BSS_START__,X
    case 0xC440B4: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46331.asm:24 LDA @LOCAL00
    case 0xC440B7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46331.asm:25 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC440B9: cpu.execute_instruction<0x22>(0xC0A46E, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46331.asm:27 END_C_FUNCTION
    case 0xC440BD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46331.asm:27 END_C_FUNCTION
    case 0xC440BE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46363.asm (unresolved).
bool execute_unresolved_c4_c46363_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46363.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC440BF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46363.asm:8 END_STACK_VARS
    case 0xC440C1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46363.asm:8 END_STACK_VARS
    case 0xC440C2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46363.asm:8 END_STACK_VARS
    case 0xC440C3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46363.asm:8 END_STACK_VARS
    case 0xC440C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46363.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC440C4.
    case 0xC440C6: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46363.asm:8 END_STACK_VARS
    case 0xC440C7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46363.asm:8 END_STACK_VARS
    case 0xC440C8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46363.asm:9 STX @VIRTUAL02
    case 0xC440C9: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C46363.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC440C6.
    case 0xC440CA: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/unknown/C4/C46363.asm:10 TAX
    case 0xC440CB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46363.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC440CC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C46363.asm:12 JSL UNKNOWN_C4608C
    case 0xC440CE: cpu.execute_instruction<0x22>(0xC43DDA, 4); return true;
    // src/unknown/C4/C46363.asm:14 STA @LOCAL00
    case 0xC440D2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46363.asm:15 CMP #.LOWORD(-1)
    case 0xC440D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46363.asm:15 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC440D4.
    case 0xC440D6: cpu.execute_instruction<0xFF>(0x0A18F0, 4); return true;
    // src/unknown/C4/C46363.asm:16 BEQ @UNKNOWN0
    case 0xC440D7: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/unknown/C4/C46363.asm:17 ASL
    case 0xC440D9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46363.asm:18 CLC
    case 0xC440DA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46363.asm:19 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC440DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F4, 2); else cpu.execute_instruction<0x69>(0x002EF4, 3); return true;
    // src/unknown/C4/C46363.asm:19 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC440DB.
    case 0xC440DD: cpu.execute_instruction<0x2E>(0x00BDAA, 3); return true;
    // src/unknown/C4/C46363.asm:20 TAX
    case 0xC440DE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46363.asm:21 LDA __BSS_START__,X
    case 0xC440DF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46363.asm:21 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC440DD.
    case 0xC440E0: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C46363.asm:22 CMP @VIRTUAL02
    case 0xC440E2: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C46363.asm:23 BEQ @UNKNOWN0
    case 0xC440E4: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/unknown/C4/C46363.asm:24 LDA @VIRTUAL02
    case 0xC440E6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C46363.asm:25 STA __BSS_START__,X
    case 0xC440E8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46363.asm:26 LDA @LOCAL00
    case 0xC440EB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46363.asm:27 JSL UNKNOWN_C0A780
    case 0xC440ED: cpu.execute_instruction<0x22>(0xC0A75F, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46363.asm:29 END_C_FUNCTION
    case 0xC440F1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46363.asm:29 END_C_FUNCTION
    case 0xC440F2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46397.asm (unresolved).
bool execute_unresolved_c4_c46397_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46397.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC440F3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46397.asm:8 END_STACK_VARS
    case 0xC440F5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46397.asm:8 END_STACK_VARS
    case 0xC440F6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46397.asm:8 END_STACK_VARS
    case 0xC440F7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46397.asm:8 END_STACK_VARS
    case 0xC440F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46397.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4414A.
    case 0xC440F9: cpu.execute_instruction<0xEE>(0x005BFF, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46397.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC440F8.
    case 0xC440FA: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46397.asm:8 END_STACK_VARS
    case 0xC440FB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46397.asm:8 END_STACK_VARS
    case 0xC440FC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:9 STA @VIRTUAL02
    case 0xC440FD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C46397.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC440FA.
    case 0xC440FE: cpu.execute_instruction<0x02>(0x0000A0, 2); return true;
    // src/unknown/C4/C46397.asm:10 LDY #0
    case 0xC440FF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C46397.asm:10 LDY #0
    // Overlapping static entry reached from 0xC440FF.
    case 0xC44101: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C46397.asm:11 STY @LOCAL01
    case 0xC44102: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C46397.asm:12 BRA @UNKNOWN4
    case 0xC44104: cpu.execute_instruction<0x80>(0x000045, 2); return true;
    // src/unknown/C4/C46397.asm:15 TYA
    case 0xC44106: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:16 CLC
    case 0xC44107: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:17 ADC #.LOWORD(GAME_STATE)
    case 0xC44108: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C4/C46397.asm:17 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC44108.
    case 0xC4410A: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:18 TAX
    case 0xC4410B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:19 LDA a:game_state::unknown96,X
    case 0xC4410C: cpu.execute_instruction<0xBD>(0x000093, 3); return true;
    // src/unknown/C4/C46397.asm:23 AND #$00FF
    case 0xC4410F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C46397.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC4410F.
    case 0xC44111: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C46397.asm:24 STA @VIRTUAL04
    case 0xC44112: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C46397.asm:25 LDA #16
    case 0xC44114: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C4/C46397.asm:25 LDA #16
    // Overlapping static entry reached from 0xC44114.
    case 0xC44116: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C46397.asm:26 CLC
    case 0xC44117: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:27 SBC @VIRTUAL04
    case 0xC44118: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C46397.asm:28 BRANCHLTEQS @UNKNOWN3
    case 0xC4411A: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C46397.asm:28 BRANCHLTEQS @UNKNOWN3
    case 0xC4411C: cpu.execute_instruction<0x10>(0x000028, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C46397.asm:28 BRANCHLTEQS @UNKNOWN3
    case 0xC4411E: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C46397.asm:28 BRANCHLTEQS @UNKNOWN3
    case 0xC44120: cpu.execute_instruction<0x30>(0x000024, 2); return true;
    // src/unknown/C4/C46397.asm:29 TYA
    case 0xC44122: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:30 ASL
    case 0xC44123: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:32 CLC
    case 0xC44124: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:33 ADC #.LOWORD(GAME_STATE)
    case 0xC44125: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C4/C46397.asm:33 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC44125.
    case 0xC44127: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:34 TAX
    case 0xC44128: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:35 LDA a:game_state::unknownA2,X
    case 0xC44129: cpu.execute_instruction<0xBD>(0x00009F, 3); return true;
    // src/unknown/C4/C46397.asm:40 STA @LOCAL00
    case 0xC4412C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46397.asm:41 ASL
    case 0xC4412E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:42 CLC
    case 0xC4412F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:43 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC44130: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F4, 2); else cpu.execute_instruction<0x69>(0x002EF4, 3); return true;
    // src/unknown/C4/C46397.asm:43 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC44130.
    case 0xC44132: cpu.execute_instruction<0x2E>(0x00BDAA, 3); return true;
    // src/unknown/C4/C46397.asm:44 TAX
    case 0xC44133: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:45 LDA __BSS_START__,X
    case 0xC44134: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46397.asm:45 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC44132.
    case 0xC44135: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C46397.asm:46 CMP @VIRTUAL02
    case 0xC44137: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C46397.asm:47 BEQ @UNKNOWN3
    case 0xC44139: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/unknown/C4/C46397.asm:48 LDA @VIRTUAL02
    case 0xC4413B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C46397.asm:49 STA __BSS_START__,X
    case 0xC4413D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46397.asm:50 LDA @LOCAL00
    case 0xC44140: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46397.asm:51 JSL UNKNOWN_C0A780
    case 0xC44142: cpu.execute_instruction<0x22>(0xC0A75F, 4); return true;
    // src/unknown/C4/C46397.asm:53 LDY @LOCAL01
    case 0xC44146: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C46397.asm:54 INY
    case 0xC44148: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:55 STY @LOCAL01
    case 0xC44149: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C46397.asm:55 STY @LOCAL01
    // Overlapping static entry reached from 0xC441AB.
    case 0xC4414A: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/unknown/C4/C46397.asm:57 LDA GAME_STATE+game_state::party_count
    case 0xC4414B: cpu.execute_instruction<0xAD>(0x009B54, 3); return true;
    // src/unknown/C4/C46397.asm:57 LDA GAME_STATE+game_state::party_count
    // Overlapping static entry reached from 0xC4414A.
    case 0xC4414C: cpu.execute_instruction<0x54>(0x00299B, 3); return true;
    // src/unknown/C4/C46397.asm:58 AND #$00FF
    case 0xC4414E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C46397.asm:58 AND #$00FF
    // Overlapping static entry reached from 0xC4414C.
    case 0xC4414F: cpu.execute_instruction<0xFF>(0x048500, 4); return true;
    // src/unknown/C4/C46397.asm:58 AND #$00FF
    // Overlapping static entry reached from 0xC4414E.
    case 0xC44150: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C46397.asm:59 STA @VIRTUAL04
    case 0xC44151: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C46397.asm:60 TYA
    case 0xC44153: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46397.asm:61 CMP @VIRTUAL04
    case 0xC44154: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C4/C46397.asm:62 BCC @UNKNOWN0
    case 0xC44156: cpu.execute_instruction<0x90>(0x0000AE, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46397.asm:63 END_C_FUNCTION
    case 0xC44158: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46397.asm:63 END_C_FUNCTION
    case 0xC44159: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C463F4.asm (unresolved).
bool execute_unresolved_c4_c463f4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C463F4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4415A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C463F4.asm:7 END_STACK_VARS
    case 0xC4415C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C463F4.asm:7 END_STACK_VARS
    case 0xC4415D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C463F4.asm:7 END_STACK_VARS
    case 0xC4415E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C463F4.asm:7 END_STACK_VARS
    case 0xC4415F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C463F4.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4415F.
    case 0xC44161: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C463F4.asm:7 END_STACK_VARS
    case 0xC44162: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C463F4.asm:7 END_STACK_VARS
    case 0xC44163: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C463F4.asm:8 STA @LOCAL00
    case 0xC44164: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C463F4.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC44161.
    case 0xC44165: cpu.execute_instruction<0x0E>(0x00AB22, 3); return true;
    // src/unknown/C4/C463F4.asm:9 JSL UNKNOWN_C07C5B
    case 0xC44166: cpu.execute_instruction<0x22>(0xC07EAB, 4); return true;
    // src/unknown/C4/C463F4.asm:9 JSL UNKNOWN_C07C5B
    // Overlapping static entry reached from 0xC44165.
    case 0xC44168: cpu.execute_instruction<0x7E>(0x009CC0, 3); return true;
    // src/unknown/C4/C463F4.asm:10 STZ PLAYER_INTANGIBILITY_FRAMES
    case 0xC4416A: cpu.execute_instruction<0x9C>(0x0060DE, 3); return true;
    // src/unknown/C4/C463F4.asm:10 STZ PLAYER_INTANGIBILITY_FRAMES
    // Overlapping static entry reached from 0xC44168.
    case 0xC4416B: cpu.execute_instruction<0xDE>(0x00A560, 3); return true;
    // src/unknown/C4/C463F4.asm:11 LDA @LOCAL00
    case 0xC4416D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C463F4.asm:11 LDA @LOCAL00
    // Overlapping static entry reached from 0xC4416B.
    case 0xC4416E: cpu.execute_instruction<0x0E>(0x00FFC9, 3); return true;
    // src/unknown/C4/C463F4.asm:12 CMP #$00FF
    case 0xC4416F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/unknown/C4/C463F4.asm:12 CMP #$00FF
    // Overlapping static entry reached from 0xC4416F.
    case 0xC44171: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C463F4.asm:13 BEQ @UNKNOWN0
    case 0xC44172: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C4/C463F4.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC44174: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C463F4.asm:15 JSL UNKNOWN_C4608C
    case 0xC44176: cpu.execute_instruction<0x22>(0xC43DDA, 4); return true;
    // src/unknown/C4/C463F4.asm:17 CMP #.LOWORD(-1)
    case 0xC4417A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C463F4.asm:17 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4417A.
    case 0xC4417C: cpu.execute_instruction<0xFF>(0x0A43F0, 4); return true;
    // src/unknown/C4/C463F4.asm:18 BEQ @UNKNOWN3
    case 0xC4417D: cpu.execute_instruction<0xF0>(0x000043, 2); return true;
    // src/unknown/C4/C463F4.asm:19 ASL
    case 0xC4417F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C463F4.asm:20 CLC
    case 0xC44180: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C463F4.asm:21 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC44181: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x001160, 3); return true;
    // src/unknown/C4/C463F4.asm:21 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC44181.
    case 0xC44183: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/C4/C463F4.asm:22 TAX
    case 0xC44184: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C463F4.asm:23 LDA __BSS_START__,X
    case 0xC44185: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C463F4.asm:24 ORA #SPRITEMAP_FLAGS::DRAW_DISABLED
    case 0xC44188: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/unknown/C4/C463F4.asm:24 ORA #SPRITEMAP_FLAGS::DRAW_DISABLED
    // Overlapping static entry reached from 0xC44188.
    case 0xC4418A: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/C4/C463F4.asm:25 STA __BSS_START__,X
    case 0xC4418B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C463F4.asm:26 BRA @UNKNOWN3
    case 0xC4418E: cpu.execute_instruction<0x80>(0x000032, 2); return true;
    // src/unknown/C4/C463F4.asm:28 LDA #0
    case 0xC44190: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C463F4.asm:28 LDA #0
    // Overlapping static entry reached from 0xC44190.
    case 0xC44192: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C463F4.asm:29 STA @LOCAL00
    case 0xC44193: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C463F4.asm:30 BRA @UNKNOWN2
    case 0xC44195: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/unknown/C4/C463F4.asm:32 ASL
    case 0xC44197: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C463F4.asm:34 CLC
    case 0xC44198: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C463F4.asm:35 ADC #.LOWORD(GAME_STATE)
    case 0xC44199: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C4/C463F4.asm:35 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC44199.
    case 0xC4419B: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C4/C463F4.asm:36 TAX
    case 0xC4419C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C463F4.asm:37 LDA a:game_state::unknownA2,X
    case 0xC4419D: cpu.execute_instruction<0xBD>(0x00009F, 3); return true;
    // src/unknown/C4/C463F4.asm:42 ASL
    case 0xC441A0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C463F4.asm:43 CLC
    case 0xC441A1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C463F4.asm:44 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC441A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x001160, 3); return true;
    // src/unknown/C4/C463F4.asm:44 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC441A2.
    case 0xC441A4: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/C4/C463F4.asm:45 TAX
    case 0xC441A5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C463F4.asm:46 LDA __BSS_START__,X
    case 0xC441A6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C463F4.asm:47 ORA #SPRITEMAP_FLAGS::DRAW_DISABLED
    case 0xC441A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/unknown/C4/C463F4.asm:47 ORA #SPRITEMAP_FLAGS::DRAW_DISABLED
    // Overlapping static entry reached from 0xC441A9.
    case 0xC441AB: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/C4/C463F4.asm:48 STA __BSS_START__,X
    case 0xC441AC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C463F4.asm:49 LDA @LOCAL00
    case 0xC441AF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C463F4.asm:50 INC
    case 0xC441B1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C463F4.asm:51 STA @LOCAL00
    case 0xC441B2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C463F4.asm:53 LDA GAME_STATE+game_state::party_count
    case 0xC441B4: cpu.execute_instruction<0xAD>(0x009B54, 3); return true;
    // src/unknown/C4/C463F4.asm:54 AND #$00FF
    case 0xC441B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C463F4.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC441B7.
    case 0xC441B9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C463F4.asm:55 STA @VIRTUAL02
    case 0xC441BA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C463F4.asm:56 LDA @LOCAL00
    case 0xC441BC: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C463F4.asm:57 CMP @VIRTUAL02
    case 0xC441BE: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C463F4.asm:58 BCC @UNKNOWN1
    case 0xC441C0: cpu.execute_instruction<0x90>(0x0000D5, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C463F4.asm:60 END_C_FUNCTION
    case 0xC441C2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C463F4.asm:60 END_C_FUNCTION
    case 0xC441C3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4645A.asm (unresolved).
bool execute_unresolved_c4_c4645a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4645A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC441C4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4645A.asm:7 END_STACK_VARS
    case 0xC441C6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4645A.asm:7 END_STACK_VARS
    case 0xC441C7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4645A.asm:7 END_STACK_VARS
    case 0xC441C8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4645A.asm:7 END_STACK_VARS
    case 0xC441C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4645A.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC441C9.
    case 0xC441CB: cpu.execute_instruction<0xFF>(0xC9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4645A.asm:7 END_STACK_VARS
    case 0xC441CC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4645A.asm:7 END_STACK_VARS
    case 0xC441CD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4645A.asm:8 CMP #<-1
    case 0xC441CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/unknown/C4/C4645A.asm:8 CMP #<-1
    // Overlapping static entry reached from 0xC441CB.
    case 0xC441CF: cpu.execute_instruction<0xFF>(0x1CF000, 4); return true;
    // src/unknown/C4/C4645A.asm:8 CMP #<-1
    // Overlapping static entry reached from 0xC441CE.
    case 0xC441D0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4645A.asm:9 BEQ @UNKNOWN0
    case 0xC441D1: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C4/C4645A.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC441D3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4645A.asm:11 JSL UNKNOWN_C4608C
    case 0xC441D5: cpu.execute_instruction<0x22>(0xC43DDA, 4); return true;
    // src/unknown/C4/C4645A.asm:13 CMP #.LOWORD(-1)
    case 0xC441D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4645A.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC441D9.
    case 0xC441DB: cpu.execute_instruction<0xFF>(0x0A43F0, 4); return true;
    // src/unknown/C4/C4645A.asm:14 BEQ @UNKNOWN3
    case 0xC441DC: cpu.execute_instruction<0xF0>(0x000043, 2); return true;
    // src/unknown/C4/C4645A.asm:15 ASL
    case 0xC441DE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4645A.asm:16 CLC
    case 0xC441DF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4645A.asm:17 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC441E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x001160, 3); return true;
    // src/unknown/C4/C4645A.asm:17 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC441E0.
    case 0xC441E2: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/C4/C4645A.asm:18 TAX
    case 0xC441E3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4645A.asm:19 LDA __BSS_START__,X
    case 0xC441E4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4645A.asm:20 AND #$FFFF ^ SPRITEMAP_FLAGS::DRAW_DISABLED
    case 0xC441E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C4/C4645A.asm:20 AND #$FFFF ^ SPRITEMAP_FLAGS::DRAW_DISABLED
    // Overlapping static entry reached from 0xC441E7.
    case 0xC441E9: cpu.execute_instruction<0x7F>(0x00009D, 4); return true;
    // src/unknown/C4/C4645A.asm:21 STA __BSS_START__,X
    case 0xC441EA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4645A.asm:22 BRA @UNKNOWN3
    case 0xC441ED: cpu.execute_instruction<0x80>(0x000032, 2); return true;
    // src/unknown/C4/C4645A.asm:24 LDA #0
    case 0xC441EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4645A.asm:24 LDA #0
    // Overlapping static entry reached from 0xC441EF.
    case 0xC441F1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4645A.asm:25 STA @LOCAL00
    case 0xC441F2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4645A.asm:26 BRA @UNKNOWN2
    case 0xC441F4: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/unknown/C4/C4645A.asm:28 ASL
    case 0xC441F6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4645A.asm:30 CLC
    case 0xC441F7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4645A.asm:31 ADC #.LOWORD(GAME_STATE)
    case 0xC441F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C4/C4645A.asm:31 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC441F8.
    case 0xC441FA: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C4/C4645A.asm:32 TAX
    case 0xC441FB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4645A.asm:33 LDA a:game_state::unknownA2,X
    case 0xC441FC: cpu.execute_instruction<0xBD>(0x00009F, 3); return true;
    // src/unknown/C4/C4645A.asm:38 ASL
    case 0xC441FF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4645A.asm:39 CLC
    case 0xC44200: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4645A.asm:40 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC44201: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x001160, 3); return true;
    // src/unknown/C4/C4645A.asm:40 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC44201.
    case 0xC44203: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/C4/C4645A.asm:41 TAX
    case 0xC44204: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4645A.asm:42 LDA __BSS_START__,X
    case 0xC44205: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4645A.asm:43 AND #$FFFF ^ SPRITEMAP_FLAGS::DRAW_DISABLED
    case 0xC44208: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C4/C4645A.asm:43 AND #$FFFF ^ SPRITEMAP_FLAGS::DRAW_DISABLED
    // Overlapping static entry reached from 0xC44208.
    case 0xC4420A: cpu.execute_instruction<0x7F>(0x00009D, 4); return true;
    // src/unknown/C4/C4645A.asm:44 STA __BSS_START__,X
    case 0xC4420B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4645A.asm:45 LDA @LOCAL00
    case 0xC4420E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4645A.asm:46 INC
    case 0xC44210: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4645A.asm:47 STA @LOCAL00
    case 0xC44211: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4645A.asm:49 LDA GAME_STATE+game_state::party_count
    case 0xC44213: cpu.execute_instruction<0xAD>(0x009B54, 3); return true;
    // src/unknown/C4/C4645A.asm:50 AND #$00FF
    case 0xC44216: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4645A.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC44216.
    case 0xC44218: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4645A.asm:51 STA @VIRTUAL02
    case 0xC44219: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4645A.asm:52 LDA @LOCAL00
    case 0xC4421B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4645A.asm:53 CMP @VIRTUAL02
    case 0xC4421D: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4645A.asm:54 BCC @UNKNOWN1
    case 0xC4421F: cpu.execute_instruction<0x90>(0x0000D5, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4645A.asm:56 END_C_FUNCTION
    case 0xC44221: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4645A.asm:56 END_C_FUNCTION
    case 0xC44222: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46534.asm (unresolved).
bool execute_unresolved_c4_c46534_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46534.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC442A2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46534.asm:11 END_STACK_VARS
    case 0xC442A4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46534.asm:11 END_STACK_VARS
    case 0xC442A5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46534.asm:11 END_STACK_VARS
    case 0xC442A6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46534.asm:11 END_STACK_VARS
    case 0xC442A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46534.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC442A7.
    case 0xC442A9: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46534.asm:11 END_STACK_VARS
    case 0xC442AA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46534.asm:11 END_STACK_VARS
    case 0xC442AB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46534.asm:12 STX @VIRTUAL02
    case 0xC442AC: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C46534.asm:12 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC442A9.
    case 0xC442AD: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C46534.asm:13 STA @LOCAL02
    case 0xC442AE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C46534.asm:14 LDA CURRENT_ENTITY_SLOT
    case 0xC442B0: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C46534.asm:15 ASL
    case 0xC442B3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46534.asm:16 TAX
    case 0xC442B4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46534.asm:17 LDA ENTITY_ABS_X_TABLE,X
    case 0xC442B5: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C4/C46534.asm:18 STA @LOCAL00
    case 0xC442B8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46534.asm:19 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC442BA: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C4/C46534.asm:20 STA @LOCAL01
    case 0xC442BD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C46534.asm:21 LDY #.LOWORD(-1)
    case 0xC442BF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46534.asm:21 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC442BF.
    case 0xC442C1: cpu.execute_instruction<0xFF>(0xA502A6, 4); return true;
    // src/unknown/C4/C46534.asm:22 LDX @VIRTUAL02
    case 0xC442C2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C46534.asm:23 LDA @LOCAL02
    case 0xC442C4: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46534.asm:23 LDA @LOCAL02
    // Overlapping static entry reached from 0xC442C1.
    case 0xC442C5: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/unknown/C4/C46534.asm:24 JSL CREATE_ENTITY
    case 0xC442C6: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/unknown/C4/C46534.asm:24 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC442C5.
    case 0xC442C7: cpu.execute_instruction<0x5F>(0x2BC01E, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46534.asm:25 END_C_FUNCTION
    case 0xC442CA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46534.asm:25 END_C_FUNCTION
    case 0xC442CB: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4655E.asm (unresolved).
bool execute_unresolved_c4_c4655e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4655E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC442CC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C4655E.asm:6 JSL UNKNOWN_C4605A
    case 0xC442CE: cpu.execute_instruction<0x22>(0xC43DA8, 4); return true;
    // src/unknown/C4/C4655E.asm:7 CMP #.LOWORD(-1)
    case 0xC442D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4655E.asm:7 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC442D2.
    case 0xC442D4: cpu.execute_instruction<0xFF>(0x0A0FF0, 4); return true;
    // src/unknown/C4/C4655E.asm:8 BEQ @UNKNOWN0
    case 0xC442D5: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C4/C4655E.asm:9 ASL
    case 0xC442D7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4655E.asm:10 CLC
    case 0xC442D8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4655E.asm:11 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC442D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/unknown/C4/C4655E.asm:11 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC442D9.
    case 0xC442DB: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C4655E.asm:12 TAX
    case 0xC442DC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4655E.asm:13 LDA __BSS_START__,X
    case 0xC442DD: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4655E.asm:14 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC442E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C4/C4655E.asm:14 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC442E0.
    case 0xC442E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C4/C4655E.asm:15 STA __BSS_START__,X
    case 0xC442E3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4655E.asm:15 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC442E2.
    case 0xC442E4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4655E.asm:15 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC442E2.
    case 0xC442E5: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4655E.asm:17 END_C_FUNCTION
    case 0xC442E6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46579.asm (unresolved).
bool execute_unresolved_c4_c46579_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46579.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC442E7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46579.asm:6 JSL UNKNOWN_C46028
    case 0xC442E9: cpu.execute_instruction<0x22>(0xC43D76, 4); return true;
    // src/unknown/C4/C46579.asm:7 CMP #.LOWORD(-1)
    case 0xC442ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46579.asm:7 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4432F.
    case 0xC442EE: cpu.execute_instruction<0xFF>(0x0FF0FF, 4); return true;
    // src/unknown/C4/C46579.asm:7 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC442ED.
    case 0xC442EF: cpu.execute_instruction<0xFF>(0x0A0FF0, 4); return true;
    // src/unknown/C4/C46579.asm:8 BEQ @UNKNOWN0
    case 0xC442F0: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C4/C46579.asm:9 ASL
    case 0xC442F2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46579.asm:10 CLC
    case 0xC442F3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46579.asm:11 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC442F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/unknown/C4/C46579.asm:11 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC442F4.
    case 0xC442F6: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C46579.asm:12 TAX
    case 0xC442F7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46579.asm:13 LDA __BSS_START__,X
    case 0xC442F8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46579.asm:13 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC4434D.
    case 0xC442F9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C46579.asm:14 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC442FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C4/C46579.asm:14 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC442FB.
    case 0xC442FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C4/C46579.asm:15 STA __BSS_START__,X
    case 0xC442FE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46579.asm:15 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC442FD.
    case 0xC442FF: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C46579.asm:15 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC442FD.
    case 0xC44300: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46579.asm:17 END_C_FUNCTION
    case 0xC44301: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46594.asm (unresolved).
bool execute_unresolved_c4_c46594_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46594.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44302: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46594.asm:7 END_STACK_VARS
    case 0xC44304: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46594.asm:7 END_STACK_VARS
    case 0xC44305: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46594.asm:7 END_STACK_VARS
    case 0xC44306: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46594.asm:7 END_STACK_VARS
    case 0xC44307: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46594.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC44307.
    case 0xC44309: cpu.execute_instruction<0xFF>(0xC9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46594.asm:7 END_STACK_VARS
    case 0xC4430A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46594.asm:7 END_STACK_VARS
    case 0xC4430B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46594.asm:8 CMP #<-1
    case 0xC4430C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/unknown/C4/C46594.asm:8 CMP #<-1
    // Overlapping static entry reached from 0xC44309.
    case 0xC4430D: cpu.execute_instruction<0xFF>(0x1CF000, 4); return true;
    // src/unknown/C4/C46594.asm:8 CMP #<-1
    // Overlapping static entry reached from 0xC4430C.
    case 0xC4430E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C46594.asm:9 BEQ @UNKNOWN0
    case 0xC4430F: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C4/C46594.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC44311: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C46594.asm:11 JSL UNKNOWN_C4608C
    case 0xC44313: cpu.execute_instruction<0x22>(0xC43DDA, 4); return true;
    // src/unknown/C4/C46594.asm:13 CMP #.LOWORD(-1)
    case 0xC44317: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46594.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC44317.
    case 0xC44319: cpu.execute_instruction<0xFF>(0x0A4FF0, 4); return true;
    // src/unknown/C4/C46594.asm:14 BEQ @UNKNOWN3
    case 0xC4431A: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // src/unknown/C4/C46594.asm:15 ASL
    case 0xC4431C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46594.asm:16 CLC
    case 0xC4431D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46594.asm:17 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC4431E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/unknown/C4/C46594.asm:17 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC4431E.
    case 0xC44320: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C46594.asm:18 TAX
    case 0xC44321: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46594.asm:19 LDA __BSS_START__,X
    case 0xC44322: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46594.asm:20 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC44325: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C4/C46594.asm:20 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC44325.
    case 0xC44327: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C4/C46594.asm:21 STA __BSS_START__,X
    case 0xC44328: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46594.asm:21 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC44327.
    case 0xC44329: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C46594.asm:21 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC44327.
    case 0xC4432A: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C46594.asm:22 BRA @UNKNOWN3
    case 0xC4432B: cpu.execute_instruction<0x80>(0x00003E, 2); return true;
    // src/unknown/C4/C46594.asm:24 LDX #.LOWORD(ENTITY_TICK_CALLBACK_HIGH) + 23 * 2
    case 0xC4432D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000DA, 2); else cpu.execute_instruction<0xA2>(0x0010DA, 3); return true;
    // src/unknown/C4/C46594.asm:24 LDX #.LOWORD(ENTITY_TICK_CALLBACK_HIGH) + 23 * 2
    // Overlapping static entry reached from 0xC4432D.
    case 0xC4432F: cpu.execute_instruction<0x10>(0x0000BD, 2); return true;
    // src/unknown/C4/C46594.asm:25 LDA __BSS_START__,X
    case 0xC44330: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46594.asm:25 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC4432F.
    case 0xC44331: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C46594.asm:26 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC44333: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C4/C46594.asm:26 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC44333.
    case 0xC44335: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C4/C46594.asm:27 STA __BSS_START__,X
    case 0xC44336: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46594.asm:27 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC44335.
    case 0xC44337: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C46594.asm:27 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC44335.
    case 0xC44338: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C46594.asm:28 LDA #0
    case 0xC44339: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C46594.asm:28 LDA #0
    // Overlapping static entry reached from 0xC44339.
    case 0xC4433B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C46594.asm:29 STA @LOCAL00
    case 0xC4433C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46594.asm:30 BRA @UNKNOWN2
    case 0xC4433E: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/unknown/C4/C46594.asm:32 ASL
    case 0xC44340: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46594.asm:34 CLC
    case 0xC44341: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46594.asm:35 ADC #.LOWORD(GAME_STATE)
    case 0xC44342: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C4/C46594.asm:35 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC44397.
    case 0xC44343: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009A, 2); else cpu.execute_instruction<0xA9>(0x00AA9A, 3); return true;
    // src/unknown/C4/C46594.asm:35 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC44342.
    case 0xC44344: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C4/C46594.asm:36 TAX
    case 0xC44345: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46594.asm:37 LDA a:game_state::unknownA2,X
    case 0xC44346: cpu.execute_instruction<0xBD>(0x00009F, 3); return true;
    // src/unknown/C4/C46594.asm:42 ASL
    case 0xC44349: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46594.asm:43 CLC
    case 0xC4434A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46594.asm:44 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC4434B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/unknown/C4/C46594.asm:44 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC4434B.
    case 0xC4434D: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C46594.asm:45 TAX
    case 0xC4434E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46594.asm:46 LDA __BSS_START__,X
    case 0xC4434F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46594.asm:47 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC44352: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C4/C46594.asm:47 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC44352.
    case 0xC44354: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C4/C46594.asm:48 STA __BSS_START__,X
    case 0xC44355: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46594.asm:48 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC44354.
    case 0xC44356: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C46594.asm:48 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC44354.
    case 0xC44357: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C46594.asm:49 LDA @LOCAL00
    case 0xC44358: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46594.asm:50 INC
    case 0xC4435A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46594.asm:51 STA @LOCAL00
    case 0xC4435B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46594.asm:53 LDA GAME_STATE+game_state::party_count
    case 0xC4435D: cpu.execute_instruction<0xAD>(0x009B54, 3); return true;
    // src/unknown/C4/C46594.asm:54 AND #$00FF
    case 0xC44360: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C46594.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC44360.
    case 0xC44362: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C46594.asm:55 STA @VIRTUAL02
    case 0xC44363: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C46594.asm:56 LDA @LOCAL00
    case 0xC44365: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46594.asm:57 CMP @VIRTUAL02
    case 0xC44367: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C46594.asm:58 BCC @UNKNOWN1
    case 0xC44369: cpu.execute_instruction<0x90>(0x0000D5, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46594.asm:60 END_C_FUNCTION
    case 0xC4436B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46594.asm:60 END_C_FUNCTION
    case 0xC4436C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C465FB.asm (unresolved).
bool execute_unresolved_c4_c465fb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C465FB.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4436D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C465FB.asm:6 JSL UNKNOWN_C4605A
    case 0xC4436F: cpu.execute_instruction<0x22>(0xC43DA8, 4); return true;
    // src/unknown/C4/C465FB.asm:7 CMP #.LOWORD(-1)
    case 0xC44373: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C465FB.asm:7 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC44373.
    case 0xC44375: cpu.execute_instruction<0xFF>(0x0A0FF0, 4); return true;
    // src/unknown/C4/C465FB.asm:8 BEQ @UNKNOWN0
    case 0xC44376: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C4/C465FB.asm:9 ASL
    case 0xC44378: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C465FB.asm:10 CLC
    case 0xC44379: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C465FB.asm:11 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC4437A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/unknown/C4/C465FB.asm:11 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC4437A.
    case 0xC4437C: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C465FB.asm:12 TAX
    case 0xC4437D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C465FB.asm:13 LDA __BSS_START__,X
    case 0xC4437E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C465FB.asm:14 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xC44381: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x003FFF, 3); return true;
    // src/unknown/C4/C465FB.asm:14 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xC44381.
    case 0xC44383: cpu.execute_instruction<0x3F>(0x00009D, 4); return true;
    // src/unknown/C4/C465FB.asm:15 STA __BSS_START__,X
    case 0xC44384: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C465FB.asm:17 END_C_FUNCTION
    case 0xC44387: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46616.asm (unresolved).
bool execute_unresolved_c4_c46616_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46616.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44388: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46616.asm:6 JSL UNKNOWN_C46028
    case 0xC4438A: cpu.execute_instruction<0x22>(0xC43D76, 4); return true;
    // src/unknown/C4/C46616.asm:7 CMP #.LOWORD(-1)
    case 0xC4438E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46616.asm:7 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC443D0.
    case 0xC4438F: cpu.execute_instruction<0xFF>(0x0FF0FF, 4); return true;
    // src/unknown/C4/C46616.asm:7 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4438E.
    case 0xC44390: cpu.execute_instruction<0xFF>(0x0A0FF0, 4); return true;
    // src/unknown/C4/C46616.asm:8 BEQ @UNKNOWN0
    case 0xC44391: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/unknown/C4/C46616.asm:9 ASL
    case 0xC44393: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46616.asm:10 CLC
    case 0xC44394: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46616.asm:11 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC44395: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/unknown/C4/C46616.asm:11 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC44395.
    case 0xC44397: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C46616.asm:12 TAX
    case 0xC44398: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46616.asm:13 LDA __BSS_START__,X
    case 0xC44399: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46616.asm:13 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC443EE.
    case 0xC4439A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C46616.asm:14 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xC4439C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x003FFF, 3); return true;
    // src/unknown/C4/C46616.asm:14 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xC4439C.
    case 0xC4439E: cpu.execute_instruction<0x3F>(0x00009D, 4); return true;
    // src/unknown/C4/C46616.asm:15 STA __BSS_START__,X
    case 0xC4439F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46616.asm:17 END_C_FUNCTION
    case 0xC443A2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46631.asm (unresolved).
bool execute_unresolved_c4_c46631_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46631.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC443A3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46631.asm:7 END_STACK_VARS
    case 0xC443A5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46631.asm:7 END_STACK_VARS
    case 0xC443A6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46631.asm:7 END_STACK_VARS
    case 0xC443A7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46631.asm:7 END_STACK_VARS
    case 0xC443A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46631.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC443A8.
    case 0xC443AA: cpu.execute_instruction<0xFF>(0xC9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46631.asm:7 END_STACK_VARS
    case 0xC443AB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46631.asm:7 END_STACK_VARS
    case 0xC443AC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46631.asm:8 CMP #<-1
    case 0xC443AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/unknown/C4/C46631.asm:8 CMP #<-1
    // Overlapping static entry reached from 0xC443AA.
    case 0xC443AE: cpu.execute_instruction<0xFF>(0x1CF000, 4); return true;
    // src/unknown/C4/C46631.asm:8 CMP #<-1
    // Overlapping static entry reached from 0xC443AD.
    case 0xC443AF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C46631.asm:9 BEQ @UNKNOWN0
    case 0xC443B0: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/unknown/C4/C46631.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC443B2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C46631.asm:11 JSL UNKNOWN_C4608C
    case 0xC443B4: cpu.execute_instruction<0x22>(0xC43DDA, 4); return true;
    // src/unknown/C4/C46631.asm:13 CMP #.LOWORD(-1)
    case 0xC443B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46631.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC443B8.
    case 0xC443BA: cpu.execute_instruction<0xFF>(0x0A4FF0, 4); return true;
    // src/unknown/C4/C46631.asm:14 BEQ @UNKNOWN3
    case 0xC443BB: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // src/unknown/C4/C46631.asm:15 ASL
    case 0xC443BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46631.asm:16 CLC
    case 0xC443BE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46631.asm:17 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC443BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/unknown/C4/C46631.asm:17 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC443BF.
    case 0xC443C1: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C46631.asm:18 TAX
    case 0xC443C2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46631.asm:19 LDA __BSS_START__,X
    case 0xC443C3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46631.asm:20 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xC443C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x003FFF, 3); return true;
    // src/unknown/C4/C46631.asm:20 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xC443C6.
    case 0xC443C8: cpu.execute_instruction<0x3F>(0x00009D, 4); return true;
    // src/unknown/C4/C46631.asm:21 STA __BSS_START__,X
    case 0xC443C9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46631.asm:22 BRA @UNKNOWN3
    case 0xC443CC: cpu.execute_instruction<0x80>(0x00003E, 2); return true;
    // src/unknown/C4/C46631.asm:24 LDX #.LOWORD(ENTITY_TICK_CALLBACK_HIGH) + 23 * 2
    case 0xC443CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000DA, 2); else cpu.execute_instruction<0xA2>(0x0010DA, 3); return true;
    // src/unknown/C4/C46631.asm:24 LDX #.LOWORD(ENTITY_TICK_CALLBACK_HIGH) + 23 * 2
    // Overlapping static entry reached from 0xC443CE.
    case 0xC443D0: cpu.execute_instruction<0x10>(0x0000BD, 2); return true;
    // src/unknown/C4/C46631.asm:25 LDA __BSS_START__,X
    case 0xC443D1: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46631.asm:25 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC443D0.
    case 0xC443D2: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C46631.asm:26 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xC443D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x003FFF, 3); return true;
    // src/unknown/C4/C46631.asm:26 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xC443D4.
    case 0xC443D6: cpu.execute_instruction<0x3F>(0x00009D, 4); return true;
    // src/unknown/C4/C46631.asm:27 STA __BSS_START__,X
    case 0xC443D7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46631.asm:28 LDA #0
    case 0xC443DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C46631.asm:28 LDA #0
    // Overlapping static entry reached from 0xC443DA.
    case 0xC443DC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C46631.asm:29 STA @LOCAL00
    case 0xC443DD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46631.asm:30 BRA @UNKNOWN2
    case 0xC443DF: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/unknown/C4/C46631.asm:32 ASL
    case 0xC443E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46631.asm:34 CLC
    case 0xC443E2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46631.asm:35 ADC #.LOWORD(GAME_STATE)
    case 0xC443E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C4/C46631.asm:35 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC443E3.
    case 0xC443E5: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C4/C46631.asm:36 TAX
    case 0xC443E6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46631.asm:37 LDA a:game_state::unknownA2,X
    case 0xC443E7: cpu.execute_instruction<0xBD>(0x00009F, 3); return true;
    // src/unknown/C4/C46631.asm:42 ASL
    case 0xC443EA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46631.asm:43 CLC
    case 0xC443EB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46631.asm:44 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC443EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/unknown/C4/C46631.asm:44 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC443EC.
    case 0xC443EE: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C46631.asm:45 TAX
    case 0xC443EF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46631.asm:46 LDA __BSS_START__,X
    case 0xC443F0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46631.asm:47 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xC443F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x003FFF, 3); return true;
    // src/unknown/C4/C46631.asm:47 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xC443F3.
    case 0xC443F5: cpu.execute_instruction<0x3F>(0x00009D, 4); return true;
    // src/unknown/C4/C46631.asm:48 STA __BSS_START__,X
    case 0xC443F6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46631.asm:49 LDA @LOCAL00
    case 0xC443F9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46631.asm:50 INC
    case 0xC443FB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46631.asm:51 STA @LOCAL00
    case 0xC443FC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46631.asm:53 LDA GAME_STATE+game_state::party_count
    case 0xC443FE: cpu.execute_instruction<0xAD>(0x009B54, 3); return true;
    // src/unknown/C4/C46631.asm:54 AND #$00FF
    case 0xC44401: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C46631.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC44401.
    case 0xC44403: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C46631.asm:55 STA @VIRTUAL02
    case 0xC44404: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C46631.asm:56 LDA @LOCAL00
    case 0xC44406: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46631.asm:57 CMP @VIRTUAL02
    case 0xC44408: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C46631.asm:58 BCC @UNKNOWN1
    case 0xC4440A: cpu.execute_instruction<0x90>(0x0000D5, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46631.asm:60 END_C_FUNCTION
    case 0xC4440C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46631.asm:60 END_C_FUNCTION
    case 0xC4440D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46698.asm (unresolved).
bool execute_unresolved_c4_c46698_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46698.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4440E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46698.asm:6 JSL UNKNOWN_C4605A
    case 0xC44410: cpu.execute_instruction<0x22>(0xC43DA8, 4); return true;
    // src/unknown/C4/C46698.asm:7 STA CAMERA_FOCUS_ENTITY
    case 0xC44414: cpu.execute_instruction<0x8D>(0x00A039, 3); return true;
    // src/unknown/C4/C46698.asm:8 LDA #2
    case 0xC44417: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C4/C46698.asm:8 LDA #2
    // Overlapping static entry reached from 0xC44417.
    case 0xC44419: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C46698.asm:9 STA GAME_STATE + game_state::unknownB0
    case 0xC4441A: cpu.execute_instruction<0x8D>(0x009B56, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46698.asm:10 END_C_FUNCTION
    case 0xC4441D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C466A8.asm (unresolved).
bool execute_unresolved_c4_c466a8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C466A8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4441E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C466A8.asm:6 JSL UNKNOWN_C46028
    case 0xC44420: cpu.execute_instruction<0x22>(0xC43D76, 4); return true;
    // src/unknown/C4/C466A8.asm:7 STA CAMERA_FOCUS_ENTITY
    case 0xC44424: cpu.execute_instruction<0x8D>(0x00A039, 3); return true;
    // src/unknown/C4/C466A8.asm:8 LDA #2
    case 0xC44427: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C4/C466A8.asm:8 LDA #2
    // Overlapping static entry reached from 0xC44427.
    case 0xC44429: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C466A8.asm:9 STA GAME_STATE + game_state::unknownB0
    case 0xC4442A: cpu.execute_instruction<0x8D>(0x009B56, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C466A8.asm:10 END_C_FUNCTION
    case 0xC4442D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C466B8.asm (unresolved).
bool execute_unresolved_c4_c466b8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C466B8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4442E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C466B8.asm:5 STZ GAME_STATE + game_state::unknown90
    case 0xC44430: cpu.execute_instruction<0x9C>(0x009B36, 3); return true;
    // src/unknown/C4/C466B8.asm:6 STZ GAME_STATE + game_state::unknownB0
    case 0xC44433: cpu.execute_instruction<0x9C>(0x009B56, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C466B8.asm:7 END_C_FUNCTION
    case 0xC44436: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C466C1.asm (unresolved).
bool execute_unresolved_c4_c466c1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C466C1.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44437: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C466C1.asm:8 END_STACK_VARS
    case 0xC44439: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C466C1.asm:8 END_STACK_VARS
    case 0xC4443A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C466C1.asm:8 END_STACK_VARS
    case 0xC4443B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C466C1.asm:8 END_STACK_VARS
    case 0xC4443C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C466C1.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4443C.
    case 0xC4443E: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C466C1.asm:8 END_STACK_VARS
    case 0xC4443F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C466C1.asm:8 END_STACK_VARS
    case 0xC44440: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C466C1.asm:9 STA @LOCAL01
    case 0xC44441: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C466C1.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC4443E.
    case 0xC44442: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/unknown/C4/C466C1.asm:10 JSL UNKNOWN_C07C5B
    case 0xC44443: cpu.execute_instruction<0x22>(0xC07EAB, 4); return true;
    // src/unknown/C4/C466C1.asm:10 JSL UNKNOWN_C07C5B
    // Overlapping static entry reached from 0xC44442.
    case 0xC44444: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/unknown/C4/C466C1.asm:10 JSL UNKNOWN_C07C5B
    // Overlapping static entry reached from 0xC44444.
    case 0xC44445: cpu.execute_instruction<0x7E>(0x009CC0, 3); return true;
    // src/unknown/C4/C466C1.asm:11 STZ PLAYER_INTANGIBILITY_FRAMES
    case 0xC44447: cpu.execute_instruction<0x9C>(0x0060DE, 3); return true;
    // src/unknown/C4/C466C1.asm:11 STZ PLAYER_INTANGIBILITY_FRAMES
    // Overlapping static entry reached from 0xC44445.
    case 0xC44448: cpu.execute_instruction<0xDE>(0x00A560, 3); return true;
    // src/unknown/C4/C466C1.asm:12 LDA @LOCAL01
    case 0xC4444A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C466C1.asm:12 LDA @LOCAL01
    // Overlapping static entry reached from 0xC44448.
    case 0xC4444B: cpu.execute_instruction<0x12>(0x00003A, 2); return true;
    // src/unknown/C4/C466C1.asm:13 DEC
    case 0xC4444C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C466C1.asm:14 STA SPAWNING_TRAVELLING_PHOTOGRAPHER_ID
    case 0xC4444D: cpu.execute_instruction<0x8D>(0x00A03B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C466C1.asm:15 DISPLAY_TEXT_PTR MSG_EVT_PHOTOGRAPHER
    case 0xC44450: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0049CF, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C466C1.asm:15 DISPLAY_TEXT_PTR MSG_EVT_PHOTOGRAPHER
    // Overlapping static entry reached from 0xC44450.
    case 0xC44452: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000085, 2); else cpu.execute_instruction<0x49>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C466C1.asm:15 DISPLAY_TEXT_PTR MSG_EVT_PHOTOGRAPHER
    case 0xC44453: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C466C1.asm:15 DISPLAY_TEXT_PTR MSG_EVT_PHOTOGRAPHER
    // Overlapping static entry reached from 0xC44452.
    case 0xC44454: cpu.execute_instruction<0x0E>(0x00C8A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C466C1.asm:15 DISPLAY_TEXT_PTR MSG_EVT_PHOTOGRAPHER
    case 0xC44455: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C466C1.asm:15 DISPLAY_TEXT_PTR MSG_EVT_PHOTOGRAPHER
    // Overlapping static entry reached from 0xC44455.
    case 0xC44457: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C466C1.asm:15 DISPLAY_TEXT_PTR MSG_EVT_PHOTOGRAPHER
    case 0xC44458: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/unknown/C4/C466C1.asm:15 DISPLAY_TEXT_PTR MSG_EVT_PHOTOGRAPHER
    case 0xC4445A: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/unknown/C4/C466C1.asm:15 DISPLAY_TEXT_PTR MSG_EVT_PHOTOGRAPHER
    // Overlapping static entry reached from 0xC444BD.
    case 0xC4445C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000C1, 2); else cpu.execute_instruction<0x89>(0x00A5C1, 3); return true;
    // src/unknown/C4/C466C1.asm:16 LDA @LOCAL01
    case 0xC4445E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C466C1.asm:16 LDA @LOCAL01
    // Overlapping static entry reached from 0xC4445C.
    case 0xC4445F: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/unknown/C4/C466C1.asm:17 JSL UNKNOWN_C4343E
    case 0xC44460: cpu.execute_instruction<0x22>(0xC431B7, 4); return true;
    // src/unknown/C4/C466C1.asm:17 JSL UNKNOWN_C4343E
    // Overlapping static entry reached from 0xC4445F.
    case 0xC44461: cpu.execute_instruction<0xB7>(0x000031, 2); return true;
    // src/unknown/C4/C466C1.asm:17 JSL UNKNOWN_C4343E
    // Overlapping static entry reached from 0xC44461.
    case 0xC44463: cpu.execute_instruction<0xC4>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C466C1.asm:18 END_C_FUNCTION
    case 0xC44464: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C466C1.asm:18 END_C_FUNCTION
    case 0xC44465: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C466F0.asm (unresolved).
bool execute_unresolved_c4_c466f0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C466F0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44466: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C466F0.asm:9 END_STACK_VARS
    case 0xC44468: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C466F0.asm:9 END_STACK_VARS
    case 0xC44469: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C466F0.asm:9 END_STACK_VARS
    case 0xC4446A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C466F0.asm:9 END_STACK_VARS
    case 0xC4446B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C466F0.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4446B.
    case 0xC4446D: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C466F0.asm:9 END_STACK_VARS
    case 0xC4446E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C466F0.asm:9 END_STACK_VARS
    case 0xC4446F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C466F0.asm:10 STX @LOCAL02
    case 0xC44470: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C4/C466F0.asm:10 STX @LOCAL02
    // Overlapping static entry reached from 0xC4446D.
    case 0xC44471: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/unknown/C4/C466F0.asm:11 STA @LOCAL01
    case 0xC44472: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C466F0.asm:11 STA @LOCAL01
    // Overlapping static entry reached from 0xC44471.
    case 0xC44473: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/unknown/C4/C466F0.asm:12 STA @VIRTUAL06
    case 0xC44474: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C466F0.asm:12 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC44473.
    case 0xC44475: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // src/unknown/C4/C466F0.asm:13 LDA @LOCAL02
    case 0xC44476: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C466F0.asm:13 LDA @LOCAL02
    // Overlapping static entry reached from 0xC44475.
    case 0xC44477: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/unknown/C4/C466F0.asm:14 STA @VIRTUAL06+2
    case 0xC44478: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C466F0.asm:14 STA @VIRTUAL06+2
    // Overlapping static entry reached from 0xC44477.
    case 0xC44479: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C466F0.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4447A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C466F0.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4447C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C466F0.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4447E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C466F0.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44480: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C466F0.asm:16 JSL DISPLAY_TEXT
    case 0xC44482: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C466F0.asm:17 END_C_FUNCTION
    case 0xC44486: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C466F0.asm:17 END_C_FUNCTION
    case 0xC44487: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46712.asm (unresolved).
bool execute_unresolved_c4_c46712_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46712.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44488: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46712.asm:6 END_STACK_VARS
    case 0xC4448A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46712.asm:6 END_STACK_VARS
    case 0xC4448B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46712.asm:6 END_STACK_VARS
    case 0xC4448C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46712.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC4448C.
    case 0xC4448E: cpu.execute_instruction<0xFF>(0x48AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46712.asm:6 END_STACK_VARS
    case 0xC4448F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:7 LDA GAME_STATE + game_state::unknownA2
    case 0xC44490: cpu.execute_instruction<0xAD>(0x009B48, 3); return true;
    // src/unknown/C4/C46712.asm:7 LDA GAME_STATE + game_state::unknownA2
    // Overlapping static entry reached from 0xC444E5.
    case 0xC44491: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:7 LDA GAME_STATE + game_state::unknownA2
    // Overlapping static entry reached from 0xC4448E.
    case 0xC44492: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:8 ASL
    case 0xC44493: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:9 CLC
    case 0xC44494: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:10 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC44495: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/unknown/C4/C46712.asm:10 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC44495.
    case 0xC44497: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C46712.asm:11 TAX
    case 0xC44498: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:12 LDA __BSS_START__,X
    case 0xC44499: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46712.asm:13 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    case 0xC4449C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C4/C46712.asm:13 ORA #OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED
    // Overlapping static entry reached from 0xC4449C.
    case 0xC4449E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x00009D, 3); return true;
    // src/unknown/C4/C46712.asm:14 STA __BSS_START__,X
    case 0xC4449F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46712.asm:14 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4449E.
    case 0xC444A0: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C46712.asm:14 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4449E.
    case 0xC444A1: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C46712.asm:15 LDA #$0001
    case 0xC444A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C46712.asm:15 LDA #$0001
    // Overlapping static entry reached from 0xC444A2.
    case 0xC444A4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C46712.asm:16 STA @LOCAL00
    case 0xC444A5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46712.asm:17 BRA @UNKNOWN1
    case 0xC444A7: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/unknown/C4/C46712.asm:19 ASL
    case 0xC444A9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:21 CLC
    case 0xC444AA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:22 ADC #.LOWORD(GAME_STATE)
    case 0xC444AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C4/C46712.asm:22 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC444AB.
    case 0xC444AD: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:23 TAX
    case 0xC444AE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:24 LDA a:game_state::unknownA2,X
    case 0xC444AF: cpu.execute_instruction<0xBD>(0x00009F, 3); return true;
    // src/unknown/C4/C46712.asm:29 ASL
    case 0xC444B2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:30 CLC
    case 0xC444B3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:31 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC444B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x001160, 3); return true;
    // src/unknown/C4/C46712.asm:31 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC444B4.
    case 0xC444B6: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/C4/C46712.asm:32 TAX
    case 0xC444B7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:33 LDA __BSS_START__,X
    case 0xC444B8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46712.asm:34 ORA #SPRITEMAP_FLAGS::DRAW_DISABLED
    case 0xC444BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/unknown/C4/C46712.asm:34 ORA #SPRITEMAP_FLAGS::DRAW_DISABLED
    // Overlapping static entry reached from 0xC444BB.
    case 0xC444BD: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/C4/C46712.asm:35 STA __BSS_START__,X
    case 0xC444BE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46712.asm:36 LDA @LOCAL00
    case 0xC444C1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46712.asm:37 INC
    case 0xC444C3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46712.asm:38 STA @LOCAL00
    case 0xC444C4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46712.asm:40 LDA GAME_STATE+game_state::party_count
    case 0xC444C6: cpu.execute_instruction<0xAD>(0x009B54, 3); return true;
    // src/unknown/C4/C46712.asm:41 AND #$00FF
    case 0xC444C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C46712.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC444C9.
    case 0xC444CB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C46712.asm:42 STA @VIRTUAL02
    case 0xC444CC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C46712.asm:43 LDA @LOCAL00
    case 0xC444CE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46712.asm:44 CMP @VIRTUAL02
    case 0xC444D0: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C46712.asm:45 BCC @UNKNOWN0
    case 0xC444D2: cpu.execute_instruction<0x90>(0x0000D5, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46712.asm:46 END_C_FUNCTION
    case 0xC444D4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46712.asm:46 END_C_FUNCTION
    case 0xC444D5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4675C.asm (unresolved).
bool execute_unresolved_c4_c4675c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4675C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC444D6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4675C.asm:6 END_STACK_VARS
    case 0xC444D8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4675C.asm:6 END_STACK_VARS
    case 0xC444D9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4675C.asm:6 END_STACK_VARS
    case 0xC444DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4675C.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC444DA.
    case 0xC444DC: cpu.execute_instruction<0xFF>(0x48AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4675C.asm:6 END_STACK_VARS
    case 0xC444DD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:7 LDA GAME_STATE + game_state::unknownA2
    case 0xC444DE: cpu.execute_instruction<0xAD>(0x009B48, 3); return true;
    // src/unknown/C4/C4675C.asm:7 LDA GAME_STATE + game_state::unknownA2
    // Overlapping static entry reached from 0xC444DC.
    case 0xC444E0: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:8 ASL
    case 0xC444E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:9 CLC
    case 0xC444E2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:10 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC444E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/unknown/C4/C4675C.asm:10 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC444E3.
    case 0xC444E5: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C4675C.asm:11 TAX
    case 0xC444E6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:12 LDA __BSS_START__,X
    case 0xC444E7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4675C.asm:13 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xC444EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x003FFF, 3); return true;
    // src/unknown/C4/C4675C.asm:13 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xC444EA.
    case 0xC444EC: cpu.execute_instruction<0x3F>(0x00009D, 4); return true;
    // src/unknown/C4/C4675C.asm:14 STA __BSS_START__,X
    case 0xC444ED: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4675C.asm:15 LDA #1
    case 0xC444F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4675C.asm:15 LDA #1
    // Overlapping static entry reached from 0xC444F0.
    case 0xC444F2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4675C.asm:16 STA @LOCAL00
    case 0xC444F3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4675C.asm:17 BRA @UNKNOWN2
    case 0xC444F5: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C4/C4675C.asm:20 CLC
    case 0xC444F7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:21 ADC #.LOWORD(GAME_STATE)
    case 0xC444F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C4/C4675C.asm:21 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC444F8.
    case 0xC444FA: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:22 TAX
    case 0xC444FB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:23 LDA a:game_state::unknown96,X
    case 0xC444FC: cpu.execute_instruction<0xBD>(0x000093, 3); return true;
    // src/unknown/C4/C4675C.asm:28 AND #$00FF
    case 0xC444FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4675C.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC444FF.
    case 0xC44501: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C4/C4675C.asm:29 CMP #9
    case 0xC44502: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/unknown/C4/C4675C.asm:29 CMP #9
    // Overlapping static entry reached from 0xC44502.
    case 0xC44504: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4675C.asm:30 BEQ @UNKNOWN1
    case 0xC44505: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/unknown/C4/C4675C.asm:31 LDA @LOCAL00
    case 0xC44507: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4675C.asm:32 ASL
    case 0xC44509: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:34 CLC
    case 0xC4450A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:35 ADC #.LOWORD(GAME_STATE)
    case 0xC4450B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/unknown/C4/C4675C.asm:35 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC4450B.
    case 0xC4450D: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:36 TAX
    case 0xC4450E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:37 LDA a:game_state::unknownA2,X
    case 0xC4450F: cpu.execute_instruction<0xBD>(0x00009F, 3); return true;
    // src/unknown/C4/C4675C.asm:42 ASL
    case 0xC44512: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:43 CLC
    case 0xC44513: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:44 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC44514: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x001160, 3); return true;
    // src/unknown/C4/C4675C.asm:44 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC44514.
    case 0xC44516: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/C4/C4675C.asm:45 TAX
    case 0xC44517: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:46 LDA __BSS_START__,X
    case 0xC44518: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4675C.asm:47 AND #$FFFF ^ (SPRITEMAP_FLAGS::DRAW_DISABLED)
    case 0xC4451B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C4/C4675C.asm:47 AND #$FFFF ^ (SPRITEMAP_FLAGS::DRAW_DISABLED)
    // Overlapping static entry reached from 0xC4451B.
    case 0xC4451D: cpu.execute_instruction<0x7F>(0x00009D, 4); return true;
    // src/unknown/C4/C4675C.asm:48 STA __BSS_START__,X
    case 0xC4451E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4675C.asm:50 LDA @LOCAL00
    case 0xC44521: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4675C.asm:51 INC
    case 0xC44523: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4675C.asm:52 STA @LOCAL00
    case 0xC44524: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4675C.asm:54 LDA GAME_STATE+game_state::party_count
    case 0xC44526: cpu.execute_instruction<0xAD>(0x009B54, 3); return true;
    // src/unknown/C4/C4675C.asm:55 AND #$00FF
    case 0xC44529: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4675C.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC44529.
    case 0xC4452B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4675C.asm:56 STA @VIRTUAL02
    case 0xC4452C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4675C.asm:57 LDA @LOCAL00
    case 0xC4452E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4675C.asm:58 CMP @VIRTUAL02
    case 0xC44530: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4675C.asm:58 CMP @VIRTUAL02
    // Overlapping static entry reached from 0xC44585.
    case 0xC44531: cpu.execute_instruction<0x02>(0x000090, 2); return true;
    // src/unknown/C4/C4675C.asm:59 BCC @UNKNOWN0
    case 0xC44532: cpu.execute_instruction<0x90>(0x0000C3, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4675C.asm:60 END_C_FUNCTION
    case 0xC44534: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4675C.asm:60 END_C_FUNCTION
    case 0xC44535: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C467B4.asm (unresolved).
bool execute_unresolved_c4_c467b4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C467B4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44536: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C467B4.asm:6 JSL RAND
    case 0xC44538: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/unknown/C4/C467B4.asm:7 AND #$001F
    case 0xC4453C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C467B4.asm:7 AND #$001F
    // Overlapping static entry reached from 0xC4453C.
    case 0xC4453E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C467B4.asm:8 CLC
    case 0xC4453F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C467B4.asm:9 ADC #12
    case 0xC44540: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000C, 2); else cpu.execute_instruction<0x69>(0x00000C, 3); return true;
    // src/unknown/C4/C467B4.asm:9 ADC #12
    // Overlapping static entry reached from 0xC44540.
    case 0xC44542: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C467B4.asm:10 END_C_FUNCTION
    case 0xC44543: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C467C2.asm (unresolved).
bool execute_unresolved_c4_c467c2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C467C2.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44544: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C467C2.asm:6 END_STACK_VARS
    case 0xC44546: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C467C2.asm:6 END_STACK_VARS
    case 0xC44547: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C467C2.asm:6 END_STACK_VARS
    case 0xC44548: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C467C2.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC44548.
    case 0xC4454A: cpu.execute_instruction<0xFF>(0x8B225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C467C2.asm:6 END_STACK_VARS
    case 0xC4454B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C467C2.asm:7 JSL RAND
    case 0xC4454C: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/unknown/C4/C467C2.asm:7 JSL RAND
    // Overlapping static entry reached from 0xC4454A.
    case 0xC4454E: cpu.execute_instruction<0x8E>(0x0029C0, 3); return true;
    // src/unknown/C4/C467C2.asm:8 AND #$001F
    case 0xC44550: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/unknown/C4/C467C2.asm:8 AND #$001F
    // Overlapping static entry reached from 0xC4454E.
    case 0xC44551: cpu.execute_instruction<0x1F>(0x028500, 4); return true;
    // src/unknown/C4/C467C2.asm:8 AND #$001F
    // Overlapping static entry reached from 0xC44550.
    case 0xC44552: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C467C2.asm:9 STA @VIRTUAL02
    case 0xC44553: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C467C2.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC44555: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C467C2.asm:11 ASL
    case 0xC44558: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C467C2.asm:12 TAX
    case 0xC44559: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C467C2.asm:13 LDA #256
    case 0xC4455A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000100, 3); return true;
    // src/unknown/C4/C467C2.asm:13 LDA #256
    // Overlapping static entry reached from 0xC4455A.
    case 0xC4455C: cpu.execute_instruction<0x01>(0x000038, 2); return true;
    // src/unknown/C4/C467C2.asm:14 SEC
    case 0xC4455D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C467C2.asm:15 SBC ENTITY_SCREEN_Y_TABLE,X
    case 0xC4455E: cpu.execute_instruction<0xFD>(0x000B48, 3); return true;
    // src/unknown/C4/C467C2.asm:16 LSR
    case 0xC44561: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C467C2.asm:17 LSR
    case 0xC44562: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C467C2.asm:18 CLC
    case 0xC44563: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C467C2.asm:19 ADC @VIRTUAL02
    case 0xC44564: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C467C2.asm:20 END_C_FUNCTION
    case 0xC44566: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C467C2.asm:20 END_C_FUNCTION
    case 0xC44567: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C467E6.asm (unresolved).
bool execute_unresolved_c4_c467e6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C467E6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44568: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C467E6.asm:6 END_STACK_VARS
    case 0xC4456A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C467E6.asm:6 END_STACK_VARS
    case 0xC4456B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C467E6.asm:6 END_STACK_VARS
    case 0xC4456C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C467E6.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC4456C.
    case 0xC4456E: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C467E6.asm:6 END_STACK_VARS
    case 0xC4456F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C467E6.asm:7 LDA #0
    case 0xC44570: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C467E6.asm:7 LDA #0
    // Overlapping static entry reached from 0xC44570.
    case 0xC44572: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C467E6.asm:8 STA @LOCAL00
    case 0xC44573: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C467E6.asm:9 BRA @UNKNOWN2
    case 0xC44575: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/unknown/C4/C467E6.asm:11 ASL
    case 0xC44577: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C467E6.asm:12 TAX
    case 0xC44578: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C467E6.asm:13 LDA ENTITY_SPRITE_IDS,X
    case 0xC44579: cpu.execute_instruction<0xBD>(0x0030D4, 3); return true;
    // src/unknown/C4/C467E6.asm:14 CMP #OVERWORLD_SPRITE::LEAVES_FOR_TESSIE_SCENE
    case 0xC4457C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00006F, 2); else cpu.execute_instruction<0xC9>(0x00016F, 3); return true;
    // src/unknown/C4/C467E6.asm:14 CMP #OVERWORLD_SPRITE::LEAVES_FOR_TESSIE_SCENE
    // Overlapping static entry reached from 0xC4457C.
    case 0xC4457E: cpu.execute_instruction<0x01>(0x0000D0, 2); return true;
    // src/unknown/C4/C467E6.asm:15 BNE @UNKNOWN1
    case 0xC4457F: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // src/unknown/C4/C467E6.asm:15 BNE @UNKNOWN1
    // Overlapping static entry reached from 0xC4457E.
    case 0xC44580: cpu.execute_instruction<0x0F>(0x69188A, 4); return true;
    // src/unknown/C4/C467E6.asm:16 TXA
    case 0xC44581: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C467E6.asm:17 CLC
    case 0xC44582: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C467E6.asm:18 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    case 0xC44583: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AC, 2); else cpu.execute_instruction<0x69>(0x0010AC, 3); return true;
    // src/unknown/C4/C467E6.asm:18 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC44580.
    case 0xC44584: cpu.execute_instruction<0xAC>(0x00AA10, 3); return true;
    // src/unknown/C4/C467E6.asm:18 ADC #.LOWORD(ENTITY_TICK_CALLBACK_HIGH)
    // Overlapping static entry reached from 0xC44583.
    case 0xC44585: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C467E6.asm:19 TAX
    case 0xC44586: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C467E6.asm:20 LDA __BSS_START__,X
    case 0xC44587: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C467E6.asm:21 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    case 0xC4458A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x003FFF, 3); return true;
    // src/unknown/C4/C467E6.asm:21 AND #$FFFF ^ (OBJECT_TICK_DISABLED | OBJECT_MOVE_DISABLED)
    // Overlapping static entry reached from 0xC4458A.
    case 0xC4458C: cpu.execute_instruction<0x3F>(0x00009D, 4); return true;
    // src/unknown/C4/C467E6.asm:22 STA __BSS_START__,X
    case 0xC4458D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C467E6.asm:24 LDA @LOCAL00
    case 0xC44590: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C467E6.asm:25 INC
    case 0xC44592: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C467E6.asm:26 STA @LOCAL00
    case 0xC44593: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C467E6.asm:28 CMP #MAX_ENTITIES
    case 0xC44595: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/unknown/C4/C467E6.asm:28 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC44595.
    case 0xC44597: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C467E6.asm:29 BCC @UNKNOWN0
    case 0xC44598: cpu.execute_instruction<0x90>(0x0000DD, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C467E6.asm:30 END_C_FUNCTION
    case 0xC4459A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C467E6.asm:30 END_C_FUNCTION
    case 0xC4459B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4681A.asm (unresolved).
bool execute_unresolved_c4_c4681a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4681A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4459C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4681A.asm:7 END_STACK_VARS
    case 0xC4459E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4681A.asm:7 END_STACK_VARS
    case 0xC4459F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4681A.asm:7 END_STACK_VARS
    case 0xC445A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4681A.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC445A0.
    case 0xC445A2: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4681A.asm:7 END_STACK_VARS
    case 0xC445A3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4681A.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC445A4: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C4681A.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC445A2.
    case 0xC445A6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4681A.asm:9 ASL
    case 0xC445A7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4681A.asm:10 TAX
    case 0xC445A8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4681A.asm:11 LDA ENTITY_NPC_IDS,X
    case 0xC445A9: cpu.execute_instruction<0xBD>(0x003098, 3); return true;
    // src/unknown/C4/C4681A.asm:12 STA @LOCAL01
    case 0xC445AC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4681A.asm:13 CMP #.LOWORD(-1)
    case 0xC445AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4681A.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC445AE.
    case 0xC445B0: cpu.execute_instruction<0xFF>(0xA94EF0, 4); return true;
    // src/unknown/C4/C4681A.asm:14 BEQ @UNKNOWN1
    case 0xC445B1: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4681A.asm:15 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    case 0xC445B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0089C1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4681A.asm:15 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC445B0.
    case 0xC445B4: cpu.execute_instruction<0xC1>(0x000089, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4681A.asm:15 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC445B3.
    case 0xC445B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4681A.asm:15 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    case 0xC445B6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4681A.asm:15 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC445B5.
    case 0xC445B7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4681A.asm:15 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    case 0xC445B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4681A.asm:15 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC445B8.
    case 0xC445BA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4681A.asm:15 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    case 0xC445BB: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4681A.asm:16 LDA @LOCAL01
    case 0xC445BD: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/unknown/C4/C4681A.asm:17 OPTIMIZED_MULT $04, .SIZEOF(npc_config)
    case 0xC445BF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/unknown/C4/C4681A.asm:17 OPTIMIZED_MULT $04, .SIZEOF(npc_config)
    case 0xC445C1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/unknown/C4/C4681A.asm:17 OPTIMIZED_MULT $04, .SIZEOF(npc_config)
    case 0xC445C2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/unknown/C4/C4681A.asm:17 OPTIMIZED_MULT $04, .SIZEOF(npc_config)
    case 0xC445C3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/unknown/C4/C4681A.asm:17 OPTIMIZED_MULT $04, .SIZEOF(npc_config)
    case 0xC445C4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/unknown/C4/C4681A.asm:17 OPTIMIZED_MULT $04, .SIZEOF(npc_config)
    case 0xC445C5: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4681A.asm:18 CLC
    case 0xC445C7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4681A.asm:19 ADC #npc_config::text_pointer
    case 0xC445C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/unknown/C4/C4681A.asm:19 ADC #npc_config::text_pointer
    // Overlapping static entry reached from 0xC445C8.
    case 0xC445CA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4681A.asm:20 CLC
    case 0xC445CB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4681A.asm:21 ADC @VIRTUAL0A
    case 0xC445CC: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4681A.asm:22 STA @VIRTUAL0A
    case 0xC445CE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4681A.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC445D0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4681A.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC445D0.
    case 0xC445D2: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4681A.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC445D3: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4681A.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC445D5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4681A.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC445D6: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4681A.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC445D8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4681A.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC445DA: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4681A.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC445DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4681A.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC445DC.
    case 0xC445DE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C4/C4681A.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC445DF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C4/C4681A.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4463C.
    case 0xC445E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4681A.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC445E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4681A.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC445E1.
    case 0xC445E3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C4/C4681A.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC445E4: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/unknown/C4/C4681A.asm:25 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC445E6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/unknown/C4/C4681A.asm:25 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC445E8: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/unknown/C4/C4681A.asm:25 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC445EA: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/unknown/C4/C4681A.asm:25 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC445EC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/unknown/C4/C4681A.asm:25 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC445EE: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/unknown/C4/C4681A.asm:26 BEQ @UNKNOWN1
    case 0xC445F0: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4681A.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC445F2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4681A.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC445F4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4681A.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC445F6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4681A.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC445F8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4681A.asm:28 LDA #8
    case 0xC445FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C4/C4681A.asm:28 LDA #8
    // Overlapping static entry reached from 0xC445FA.
    case 0xC445FC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4681A.asm:29 JSL UNKNOWN_C064E3
    case 0xC445FD: cpu.execute_instruction<0x22>(0xC06711, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4681A.asm:31 END_C_FUNCTION
    case 0xC44601: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4681A.asm:31 END_C_FUNCTION
    case 0xC44602: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46881.asm (unresolved).
bool execute_unresolved_c4_c46881_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46881.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44603: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46881.asm:7 END_STACK_VARS
    case 0xC44605: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46881.asm:7 END_STACK_VARS
    case 0xC44606: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46881.asm:7 END_STACK_VARS
    case 0xC44607: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46881.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC44607.
    case 0xC44609: cpu.execute_instruction<0xFF>(0x20A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46881.asm:7 END_STACK_VARS
    case 0xC4460A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C46881.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC4460B: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C46881.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC4460D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C46881.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC4460F: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C46881.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC44611: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C46881.asm:9 LDA #<-1
    case 0xC44613: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/unknown/C4/C46881.asm:9 LDA #<-1
    // Overlapping static entry reached from 0xC44613.
    case 0xC44615: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C46881.asm:10 JSL UNKNOWN_C46594
    case 0xC44616: cpu.execute_instruction<0x22>(0xC44302, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C46881.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4461A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C46881.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4461C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C46881.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4461E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C46881.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44620: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C46881.asm:12 LDA #8
    case 0xC44622: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C4/C46881.asm:12 LDA #8
    // Overlapping static entry reached from 0xC44622.
    case 0xC44624: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C46881.asm:13 JSL UNKNOWN_C064E3
    case 0xC44625: cpu.execute_instruction<0x22>(0xC06711, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46881.asm:14 END_C_FUNCTION
    case 0xC44629: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46881.asm:14 END_C_FUNCTION
    case 0xC4462A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C468A9.asm (unresolved).
bool execute_unresolved_c4_c468a9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C468A9.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4462B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C468A9.asm:6 LDA PAD_PRESS
    case 0xC4462D: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C468A9.asm:7 END_C_FUNCTION
    case 0xC44630: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C468B5.asm (unresolved).
bool execute_unresolved_c4_c468b5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C468B5.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44631: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C468B5.asm:8 END_STACK_VARS
    case 0xC44633: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C468B5.asm:8 END_STACK_VARS
    case 0xC44634: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C468B5.asm:8 END_STACK_VARS
    case 0xC44635: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C468B5.asm:8 END_STACK_VARS
    case 0xC44636: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C468B5.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC44636.
    case 0xC44638: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C468B5.asm:8 END_STACK_VARS
    case 0xC44639: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C468B5.asm:8 END_STACK_VARS
    case 0xC4463A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C468B5.asm:9 STA @LOCAL01
    case 0xC4463B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C468B5.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC44638.
    case 0xC4463C: cpu.execute_instruction<0x10>(0x0000A2, 2); return true;
    // src/unknown/C4/C468B5.asm:10 LDX #0
    case 0xC4463D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C468B5.asm:10 LDX #0
    // Overlapping static entry reached from 0xC4463C.
    case 0xC4463E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C468B5.asm:10 LDX #0
    // Overlapping static entry reached from 0xC4463D.
    case 0xC4463F: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C468B5.asm:11 STX @LOCAL00
    case 0xC44640: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C468B5.asm:12 LDA CURRENT_ENTITY_SLOT
    case 0xC44642: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C468B5.asm:13 ASL
    case 0xC44645: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C468B5.asm:14 TAX
    case 0xC44646: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C468B5.asm:15 LDA @LOCAL01
    case 0xC44647: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C468B5.asm:16 CMP ENTITY_ABS_X_TABLE,X
    case 0xC44649: cpu.execute_instruction<0xDD>(0x000B84, 3); return true;
    // src/unknown/C4/C468B5.asm:17 BCS @UNKNOWN0
    case 0xC4464C: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C4/C468B5.asm:18 LDX #1
    case 0xC4464E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C468B5.asm:18 LDX #1
    // Overlapping static entry reached from 0xC4464E.
    case 0xC44650: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C468B5.asm:19 STX @LOCAL00
    case 0xC44651: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C468B5.asm:21 LDX @LOCAL00
    case 0xC44653: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C468B5.asm:22 TXA
    case 0xC44655: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C468B5.asm:23 END_C_FUNCTION
    case 0xC44656: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C468B5.asm:23 END_C_FUNCTION
    case 0xC44657: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C468DC.asm (unresolved).
bool execute_unresolved_c4_c468dc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C468DC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44658: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C468DC.asm:8 END_STACK_VARS
    case 0xC4465A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C468DC.asm:8 END_STACK_VARS
    case 0xC4465B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C468DC.asm:8 END_STACK_VARS
    case 0xC4465C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C468DC.asm:8 END_STACK_VARS
    case 0xC4465D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C468DC.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4465D.
    case 0xC4465F: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C468DC.asm:8 END_STACK_VARS
    case 0xC44660: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C468DC.asm:8 END_STACK_VARS
    case 0xC44661: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C468DC.asm:9 STA @LOCAL01
    case 0xC44662: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C468DC.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC4465F.
    case 0xC44663: cpu.execute_instruction<0x10>(0x0000A2, 2); return true;
    // src/unknown/C4/C468DC.asm:10 LDX #0
    case 0xC44664: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C468DC.asm:10 LDX #0
    // Overlapping static entry reached from 0xC44663.
    case 0xC44665: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C468DC.asm:10 LDX #0
    // Overlapping static entry reached from 0xC44664.
    case 0xC44666: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C468DC.asm:11 STX @LOCAL00
    case 0xC44667: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C468DC.asm:12 LDA CURRENT_ENTITY_SLOT
    case 0xC44669: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C468DC.asm:13 ASL
    case 0xC4466C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C468DC.asm:14 TAX
    case 0xC4466D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C468DC.asm:15 LDA @LOCAL01
    case 0xC4466E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C468DC.asm:16 CMP ENTITY_ABS_Y_TABLE,X
    case 0xC44670: cpu.execute_instruction<0xDD>(0x000BC0, 3); return true;
    // src/unknown/C4/C468DC.asm:17 BCS @UNKNOWN0
    case 0xC44673: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C4/C468DC.asm:18 LDX #1
    case 0xC44675: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C468DC.asm:18 LDX #1
    // Overlapping static entry reached from 0xC44675.
    case 0xC44677: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C468DC.asm:19 STX @LOCAL00
    case 0xC44678: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C468DC.asm:21 LDX @LOCAL00
    case 0xC4467A: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C468DC.asm:22 TXA
    case 0xC4467C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C468DC.asm:23 END_C_FUNCTION
    case 0xC4467D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C468DC.asm:23 END_C_FUNCTION
    case 0xC4467E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46903.asm (unresolved).
bool execute_unresolved_c4_c46903_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46903.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4467F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46903.asm:7 LDX #FALSE
    case 0xC44681: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C46903.asm:7 LDX #FALSE
    // Overlapping static entry reached from 0xC44681.
    case 0xC44683: cpu.execute_instruction<0x00>(0x0000CD, 2); return true;
    // src/unknown/C4/C46903.asm:8 CMP GAME_STATE+game_state::leader_y_coord
    case 0xC44684: cpu.execute_instruction<0xCD>(0x009B2C, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C46903.asm:9 BLTEQ @UNKNOWN0
    case 0xC44687: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C46903.asm:9 BLTEQ @UNKNOWN0
    case 0xC44689: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C4/C46903.asm:10 LDX #TRUE
    case 0xC4468B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C46903.asm:10 LDX #TRUE
    // Overlapping static entry reached from 0xC4468B.
    case 0xC4468D: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C4/C46903.asm:12 TXA
    case 0xC4468E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46903.asm:13 END_C_FUNCTION
    case 0xC4468F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46914.asm (unresolved).
bool execute_unresolved_c4_c46914_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46914.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44690: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46914.asm:7 END_STACK_VARS
    case 0xC44692: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46914.asm:7 END_STACK_VARS
    case 0xC44693: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46914.asm:7 END_STACK_VARS
    case 0xC44694: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46914.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC44694.
    case 0xC44696: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46914.asm:7 END_STACK_VARS
    case 0xC44697: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C46914.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC44698: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C46914.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC44696.
    case 0xC4469A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46914.asm:9 ASL
    case 0xC4469B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46914.asm:10 TAX
    case 0xC4469C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46914.asm:11 LDA ENTITY_NPC_IDS,X
    case 0xC4469D: cpu.execute_instruction<0xBD>(0x003098, 3); return true;
    // src/unknown/C4/C46914.asm:12 STA @LOCAL00
    case 0xC446A0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46914.asm:13 CMP #.LOWORD(-1)
    case 0xC446A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46914.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC446A2.
    case 0xC446A4: cpu.execute_instruction<0xFF>(0xA905D0, 4); return true;
    // src/unknown/C4/C46914.asm:14 BNE @UNKNOWN0
    case 0xC446A5: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C46914.asm:15 LDA #4
    case 0xC446A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C4/C46914.asm:15 LDA #4
    // Overlapping static entry reached from 0xC446A4.
    case 0xC446A8: cpu.execute_instruction<0x04>(0x000000, 2); return true;
    // src/unknown/C4/C46914.asm:15 LDA #4
    // Overlapping static entry reached from 0xC446A7.
    case 0xC446A9: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C46914.asm:16 BRA @UNKNOWN1
    case 0xC446AA: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C46914.asm:18 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC446AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0089C1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C46914.asm:18 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC446AC.
    case 0xC446AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C46914.asm:18 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC446AF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C46914.asm:18 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC446AE.
    case 0xC446B0: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C46914.asm:18 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC446B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C46914.asm:18 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC446B0.
    case 0xC446B2: cpu.execute_instruction<0xCF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C46914.asm:18 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC446B1.
    case 0xC446B3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C46914.asm:18 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC446B4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C46914.asm:19 LDA @LOCAL00
    case 0xC446B6: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/unknown/C4/C46914.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC446B8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/unknown/C4/C46914.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC446BA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/unknown/C4/C46914.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC446BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/unknown/C4/C46914.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC446BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/unknown/C4/C46914.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC446BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/unknown/C4/C46914.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC446BE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C46914.asm:21 CLC
    case 0xC446C0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46914.asm:22 ADC @VIRTUAL06
    case 0xC446C1: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C46914.asm:23 STA @VIRTUAL06
    case 0xC446C3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C46914.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC446C5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C46914.asm:25 LDY #npc_config::direction
    case 0xC446C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C4/C46914.asm:25 LDY #npc_config::direction
    // Overlapping static entry reached from 0xC446C7.
    case 0xC446C9: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C46914.asm:26 LDA [@VIRTUAL06],Y
    case 0xC446CA: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C46914.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC446CC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C46914.asm:28 AND #$00FF
    case 0xC446CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C46914.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC446CE.
    case 0xC446D0: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46914.asm:30 END_C_FUNCTION
    case 0xC446D1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46914.asm:30 END_C_FUNCTION
    case 0xC446D2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46957.asm (unresolved).
bool execute_unresolved_c4_c46957_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46957.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC446D3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46957.asm:7 END_STACK_VARS
    case 0xC446D5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46957.asm:7 END_STACK_VARS
    case 0xC446D6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46957.asm:7 END_STACK_VARS
    case 0xC446D7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46957.asm:7 END_STACK_VARS
    case 0xC446D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46957.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC446D8.
    case 0xC446DA: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46957.asm:7 END_STACK_VARS
    case 0xC446DB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46957.asm:7 END_STACK_VARS
    case 0xC446DC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46957.asm:8 STA @LOCAL00
    case 0xC446DD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46957.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC446DA.
    case 0xC446DE: cpu.execute_instruction<0x0E>(0x0038AC, 3); return true;
    // src/unknown/C4/C46957.asm:9 LDY CURRENT_ENTITY_SLOT
    case 0xC446DF: cpu.execute_instruction<0xAC>(0x001A38, 3); return true;
    // src/unknown/C4/C46957.asm:9 LDY CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC446DE.
    case 0xC446E1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46957.asm:10 TYA
    case 0xC446E2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46957.asm:11 ASL
    case 0xC446E3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46957.asm:12 CLC
    case 0xC446E4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46957.asm:13 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC446E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F4, 2); else cpu.execute_instruction<0x69>(0x002EF4, 3); return true;
    // src/unknown/C4/C46957.asm:13 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC446E5.
    case 0xC446E7: cpu.execute_instruction<0x2E>(0x00A5AA, 3); return true;
    // src/unknown/C4/C46957.asm:14 TAX
    case 0xC446E8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46957.asm:15 LDA @LOCAL00
    case 0xC446E9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46957.asm:15 LDA @LOCAL00
    // Overlapping static entry reached from 0xC446E7.
    case 0xC446EA: cpu.execute_instruction<0x0E>(0x000285, 3); return true;
    // src/unknown/C4/C46957.asm:16 STA @VIRTUAL02
    case 0xC446EB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C46957.asm:17 LDA __BSS_START__,X
    case 0xC446ED: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46957.asm:18 CMP @VIRTUAL02
    case 0xC446F0: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C46957.asm:19 BEQ @UNKNOWN0
    case 0xC446F2: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/unknown/C4/C46957.asm:20 LDA @LOCAL00
    case 0xC446F4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46957.asm:21 STA __BSS_START__,X
    case 0xC446F6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46957.asm:22 TYA
    case 0xC446F9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46957.asm:23 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC446FA: cpu.execute_instruction<0x22>(0xC0A46E, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46957.asm:25 END_C_FUNCTION
    case 0xC446FE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46957.asm:25 END_C_FUNCTION
    case 0xC446FF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46984.asm (unresolved).
bool execute_unresolved_c4_c46984_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46984.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44700: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46984.asm:8 END_STACK_VARS
    case 0xC44702: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46984.asm:8 END_STACK_VARS
    case 0xC44703: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46984.asm:8 END_STACK_VARS
    case 0xC44704: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46984.asm:8 END_STACK_VARS
    case 0xC44705: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46984.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC44705.
    case 0xC44707: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46984.asm:8 END_STACK_VARS
    case 0xC44708: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46984.asm:8 END_STACK_VARS
    case 0xC44709: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46984.asm:9 TAX
    case 0xC4470A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46984.asm:10 LDY CURRENT_ENTITY_SLOT
    case 0xC4470B: cpu.execute_instruction<0xAC>(0x001A38, 3); return true;
    // src/unknown/C4/C46984.asm:11 STY @LOCAL01
    case 0xC4470E: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C46984.asm:12 TXA
    case 0xC44710: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C46984.asm:13 JSL UNKNOWN_C4605A
    case 0xC44711: cpu.execute_instruction<0x22>(0xC43DA8, 4); return true;
    // src/unknown/C4/C46984.asm:14 STA @VIRTUAL04
    case 0xC44715: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C46984.asm:15 CMP #.LOWORD(-1)
    case 0xC44717: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46984.asm:15 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC44717.
    case 0xC44719: cpu.execute_instruction<0xFF>(0xA54FF0, 4); return true;
    // src/unknown/C4/C46984.asm:16 BEQ @UNKNOWN0
    case 0xC4471A: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // src/unknown/C4/C46984.asm:17 LDA @VIRTUAL04
    case 0xC4471C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C46984.asm:17 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC44719.
    case 0xC4471D: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // src/unknown/C4/C46984.asm:18 ASL
    case 0xC4471E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46984.asm:19 STA @VIRTUAL02
    case 0xC4471F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C46984.asm:20 LDY @LOCAL01
    case 0xC44721: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C46984.asm:21 TYA
    case 0xC44723: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46984.asm:22 ASL
    case 0xC44724: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46984.asm:23 TAX
    case 0xC44725: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46984.asm:24 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC44726: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C4/C46984.asm:25 STA @LOCAL00
    case 0xC44729: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46984.asm:26 LDY ENTITY_ABS_X_TABLE,X
    case 0xC4472B: cpu.execute_instruction<0xBC>(0x000B84, 3); return true;
    // src/unknown/C4/C46984.asm:27 LDX @VIRTUAL02
    case 0xC4472E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C46984.asm:28 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC44730: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C4/C46984.asm:29 TAX
    case 0xC44733: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46984.asm:30 STX @LOCAL01
    case 0xC44734: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C46984.asm:31 LDX @VIRTUAL02
    case 0xC44736: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C46984.asm:32 LDA ENTITY_ABS_X_TABLE,X
    case 0xC44738: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C4/C46984.asm:33 LDX @LOCAL01
    case 0xC4473B: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C46984.asm:34 JSL UNKNOWN_C41EFF
    case 0xC4473D: cpu.execute_instruction<0x22>(0xC41E4B, 4); return true;
    // src/unknown/C4/C46984.asm:35 LDY #$2000
    case 0xC44741: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/unknown/C4/C46984.asm:35 LDY #$2000
    // Overlapping static entry reached from 0xC44741.
    case 0xC44743: cpu.execute_instruction<0x20>(0x006918, 3); return true;
    // src/unknown/C4/C46984.asm:36 CLC
    case 0xC44744: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46984.asm:37 ADC #$1000
    case 0xC44745: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x001000, 3); return true;
    // src/unknown/C4/C46984.asm:37 ADC #$1000
    // Overlapping static entry reached from 0xC44743.
    case 0xC44746: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // src/unknown/C4/C46984.asm:37 ADC #$1000
    // Overlapping static entry reached from 0xC44745.
    case 0xC44747: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/unknown/C4/C46984.asm:38 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC44748: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/unknown/C4/C46984.asm:38 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC44747.
    case 0xC44749: cpu.execute_instruction<0x3D>(0x00C091, 3); return true;
    // src/unknown/C4/C46984.asm:38 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC447C3.
    case 0xC4474A: cpu.execute_instruction<0x91>(0x0000C0, 2); return true;
    // src/unknown/C4/C46984.asm:39 STA @LOCAL01
    case 0xC4474C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C46984.asm:40 LDA @VIRTUAL02
    case 0xC4474E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C46984.asm:41 CLC
    case 0xC44750: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46984.asm:42 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC44751: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F4, 2); else cpu.execute_instruction<0x69>(0x002EF4, 3); return true;
    // src/unknown/C4/C46984.asm:42 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC44751.
    case 0xC44753: cpu.execute_instruction<0x2E>(0x00A5AA, 3); return true;
    // src/unknown/C4/C46984.asm:43 TAX
    case 0xC44754: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46984.asm:44 LDA @LOCAL01
    case 0xC44755: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C46984.asm:44 LDA @LOCAL01
    // Overlapping static entry reached from 0xC44753.
    case 0xC44756: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // src/unknown/C4/C46984.asm:45 STA @VIRTUAL02
    case 0xC44757: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C46984.asm:45 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC44756.
    case 0xC44758: cpu.execute_instruction<0x02>(0x0000BD, 2); return true;
    // src/unknown/C4/C46984.asm:46 LDA __BSS_START__,X
    case 0xC44759: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46984.asm:47 CMP @VIRTUAL02
    case 0xC4475C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C46984.asm:48 BEQ @UNKNOWN0
    case 0xC4475E: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/unknown/C4/C46984.asm:49 LDA @LOCAL01
    case 0xC44760: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C46984.asm:50 STA __BSS_START__,X
    case 0xC44762: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46984.asm:51 LDA @VIRTUAL04
    case 0xC44765: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C46984.asm:52 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC44767: cpu.execute_instruction<0x22>(0xC0A46E, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46984.asm:54 END_C_FUNCTION
    case 0xC4476B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46984.asm:54 END_C_FUNCTION
    case 0xC4476C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C469F1.asm (unresolved).
bool execute_unresolved_c4_c469f1_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C469F1.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4476D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C469F1.asm:8 END_STACK_VARS
    case 0xC4476F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C469F1.asm:8 END_STACK_VARS
    case 0xC44770: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C469F1.asm:8 END_STACK_VARS
    case 0xC44771: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C469F1.asm:8 END_STACK_VARS
    case 0xC44772: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C469F1.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC44772.
    case 0xC44774: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C469F1.asm:8 END_STACK_VARS
    case 0xC44775: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C469F1.asm:8 END_STACK_VARS
    case 0xC44776: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C469F1.asm:9 TAX
    case 0xC44777: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C469F1.asm:10 LDY CURRENT_ENTITY_SLOT
    case 0xC44778: cpu.execute_instruction<0xAC>(0x001A38, 3); return true;
    // src/unknown/C4/C469F1.asm:11 STY @LOCAL01
    case 0xC4477B: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C469F1.asm:12 TXA
    case 0xC4477D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C469F1.asm:13 JSL UNKNOWN_C46028
    case 0xC4477E: cpu.execute_instruction<0x22>(0xC43D76, 4); return true;
    // src/unknown/C4/C469F1.asm:14 STA @VIRTUAL04
    case 0xC44782: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C469F1.asm:15 CMP #.LOWORD(-1)
    case 0xC44784: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C469F1.asm:15 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC44784.
    case 0xC44786: cpu.execute_instruction<0xFF>(0xA54FF0, 4); return true;
    // src/unknown/C4/C469F1.asm:16 BEQ @UNKNOWN0
    case 0xC44787: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // src/unknown/C4/C469F1.asm:17 LDA @VIRTUAL04
    case 0xC44789: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C469F1.asm:17 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC44786.
    case 0xC4478A: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // src/unknown/C4/C469F1.asm:18 ASL
    case 0xC4478B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C469F1.asm:19 STA @VIRTUAL02
    case 0xC4478C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C469F1.asm:20 LDY @LOCAL01
    case 0xC4478E: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C469F1.asm:21 TYA
    case 0xC44790: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C469F1.asm:22 ASL
    case 0xC44791: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C469F1.asm:23 TAX
    case 0xC44792: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C469F1.asm:24 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC44793: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C4/C469F1.asm:25 STA @LOCAL00
    case 0xC44796: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C469F1.asm:26 LDY ENTITY_ABS_X_TABLE,X
    case 0xC44798: cpu.execute_instruction<0xBC>(0x000B84, 3); return true;
    // src/unknown/C4/C469F1.asm:27 LDX @VIRTUAL02
    case 0xC4479B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C469F1.asm:28 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC4479D: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C4/C469F1.asm:29 TAX
    case 0xC447A0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C469F1.asm:30 STX @LOCAL01
    case 0xC447A1: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C469F1.asm:31 LDX @VIRTUAL02
    case 0xC447A3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C469F1.asm:32 LDA ENTITY_ABS_X_TABLE,X
    case 0xC447A5: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C4/C469F1.asm:33 LDX @LOCAL01
    case 0xC447A8: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C469F1.asm:34 JSL UNKNOWN_C41EFF
    case 0xC447AA: cpu.execute_instruction<0x22>(0xC41E4B, 4); return true;
    // src/unknown/C4/C469F1.asm:35 LDY #$2000
    case 0xC447AE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/unknown/C4/C469F1.asm:35 LDY #$2000
    // Overlapping static entry reached from 0xC447AE.
    case 0xC447B0: cpu.execute_instruction<0x20>(0x006918, 3); return true;
    // src/unknown/C4/C469F1.asm:36 CLC
    case 0xC447B1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C469F1.asm:37 ADC #$1000
    case 0xC447B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x001000, 3); return true;
    // src/unknown/C4/C469F1.asm:37 ADC #$1000
    // Overlapping static entry reached from 0xC447B0.
    case 0xC447B3: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // src/unknown/C4/C469F1.asm:37 ADC #$1000
    // Overlapping static entry reached from 0xC447B2.
    case 0xC447B4: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/unknown/C4/C469F1.asm:38 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC447B5: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/unknown/C4/C469F1.asm:38 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC447B4.
    case 0xC447B6: cpu.execute_instruction<0x3D>(0x00C091, 3); return true;
    // src/unknown/C4/C469F1.asm:39 STA @LOCAL01
    case 0xC447B9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C469F1.asm:40 LDA @VIRTUAL02
    case 0xC447BB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C469F1.asm:41 CLC
    case 0xC447BD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C469F1.asm:42 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC447BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F4, 2); else cpu.execute_instruction<0x69>(0x002EF4, 3); return true;
    // src/unknown/C4/C469F1.asm:42 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC447BE.
    case 0xC447C0: cpu.execute_instruction<0x2E>(0x00A5AA, 3); return true;
    // src/unknown/C4/C469F1.asm:43 TAX
    case 0xC447C1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C469F1.asm:44 LDA @LOCAL01
    case 0xC447C2: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C469F1.asm:44 LDA @LOCAL01
    // Overlapping static entry reached from 0xC447C0.
    case 0xC447C3: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // src/unknown/C4/C469F1.asm:45 STA @VIRTUAL02
    case 0xC447C4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C469F1.asm:45 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC447C3.
    case 0xC447C5: cpu.execute_instruction<0x02>(0x0000BD, 2); return true;
    // src/unknown/C4/C469F1.asm:46 LDA __BSS_START__,X
    case 0xC447C6: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C469F1.asm:47 CMP @VIRTUAL02
    case 0xC447C9: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C469F1.asm:48 BEQ @UNKNOWN0
    case 0xC447CB: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/unknown/C4/C469F1.asm:49 LDA @LOCAL01
    case 0xC447CD: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C469F1.asm:50 STA __BSS_START__,X
    case 0xC447CF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C469F1.asm:51 LDA @VIRTUAL04
    case 0xC447D2: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C469F1.asm:52 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC447D4: cpu.execute_instruction<0x22>(0xC0A46E, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C469F1.asm:54 END_C_FUNCTION
    case 0xC447D8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C469F1.asm:54 END_C_FUNCTION
    case 0xC447D9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46A6E.asm (unresolved).
bool execute_unresolved_c4_c46a6e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46A6E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC447EA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46A6E.asm:6 LDA GAME_STATE+game_state::leader_direction
    case 0xC447EC: cpu.execute_instruction<0xAD>(0x009B30, 3); return true;
    // src/unknown/C4/C46A6E.asm:7 ASL
    case 0xC447EF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46A6E.asm:8 TAX
    case 0xC447F0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46A6E.asm:9 LDA f:UNKNOWN_C46A5E,X
    case 0xC447F1: cpu.execute_instruction<0xBF>(0xC447DA, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46A6E.asm:10 END_C_FUNCTION
    case 0xC447F5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46A9A.asm (unresolved).
bool execute_unresolved_c4_c46a9a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46A9A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44816: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46A9A.asm:7 ASL
    case 0xC44818: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46A9A.asm:8 TAX
    case 0xC44819: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46A9A.asm:9 LDA f:UNKNOWN_C46A7A,X
    case 0xC4481A: cpu.execute_instruction<0xBF>(0xC447F6, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46A9A.asm:10 END_C_FUNCTION
    case 0xC4481E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46AA3.asm (unresolved).
bool execute_unresolved_c4_c46aa3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46AA3.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4481F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46AA3.asm:7 ASL
    case 0xC44821: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46AA3.asm:8 TAX
    case 0xC44822: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46AA3.asm:9 LDA f:UNKNOWN_C46A8A,X
    case 0xC44823: cpu.execute_instruction<0xBF>(0xC44806, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46AA3.asm:10 END_C_FUNCTION
    case 0xC44827: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46AAC.asm (unresolved).
bool execute_unresolved_c4_c46aac_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46AAC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44828: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46AAC.asm:8 END_STACK_VARS
    case 0xC4482A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46AAC.asm:8 END_STACK_VARS
    case 0xC4482B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46AAC.asm:8 END_STACK_VARS
    case 0xC4482C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46AAC.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4482C.
    case 0xC4482E: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46AAC.asm:8 END_STACK_VARS
    case 0xC4482F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C46AAC.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xC44830: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C46AAC.asm:9 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC4482E.
    case 0xC44832: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46AAC.asm:10 ASL
    case 0xC44833: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46AAC.asm:11 STA @LOCAL02
    case 0xC44834: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C46AAC.asm:12 TAX
    case 0xC44836: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46AAC.asm:13 LDA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC44837: cpu.execute_instruction<0xBD>(0x000FF8, 3); return true;
    // src/unknown/C4/C46AAC.asm:14 STA @LOCAL00
    case 0xC4483A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46AAC.asm:15 LDA @LOCAL02
    case 0xC4483C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46AAC.asm:16 TAX
    case 0xC4483E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46AAC.asm:17 LDY ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC4483F: cpu.execute_instruction<0xBC>(0x000FBC, 3); return true;
    // src/unknown/C4/C46AAC.asm:18 TAX
    case 0xC44842: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46AAC.asm:19 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC44843: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C4/C46AAC.asm:20 TAX
    case 0xC44846: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46AAC.asm:21 STX @LOCAL01
    case 0xC44847: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C46AAC.asm:22 LDA @LOCAL02
    case 0xC44849: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46AAC.asm:23 TAX
    case 0xC4484B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46AAC.asm:24 LDA ENTITY_ABS_X_TABLE,X
    case 0xC4484C: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C4/C46AAC.asm:25 LDX @LOCAL01
    case 0xC4484F: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C46AAC.asm:26 JSL GET_DIRECTION_TO
    case 0xC44851: cpu.execute_instruction<0x22>(0xC43CF6, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46AAC.asm:27 END_C_FUNCTION
    case 0xC44855: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46AAC.asm:27 END_C_FUNCTION
    case 0xC44856: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46ADB.asm (unresolved).
bool execute_unresolved_c4_c46adb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46ADB.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44857: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46ADB.asm:8 END_STACK_VARS
    case 0xC44859: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46ADB.asm:8 END_STACK_VARS
    case 0xC4485A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46ADB.asm:8 END_STACK_VARS
    case 0xC4485B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46ADB.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4485B.
    case 0xC4485D: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46ADB.asm:8 END_STACK_VARS
    case 0xC4485E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C46ADB.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xC4485F: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C46ADB.asm:9 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC4485D.
    case 0xC44861: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46ADB.asm:10 ASL
    case 0xC44862: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46ADB.asm:11 STA @LOCAL02
    case 0xC44863: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C46ADB.asm:12 TAX
    case 0xC44865: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46ADB.asm:13 LDA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC44866: cpu.execute_instruction<0xBD>(0x000FF8, 3); return true;
    // src/unknown/C4/C46ADB.asm:14 STA @LOCAL00
    case 0xC44869: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46ADB.asm:15 LDA @LOCAL02
    case 0xC4486B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46ADB.asm:16 TAX
    case 0xC4486D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46ADB.asm:17 LDY ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC4486E: cpu.execute_instruction<0xBC>(0x000FBC, 3); return true;
    // src/unknown/C4/C46ADB.asm:18 TAX
    case 0xC44871: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46ADB.asm:19 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC44872: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C4/C46ADB.asm:20 TAX
    case 0xC44875: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46ADB.asm:21 STX @LOCAL01
    case 0xC44876: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C46ADB.asm:22 LDA @LOCAL02
    case 0xC44878: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46ADB.asm:23 TAX
    case 0xC4487A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46ADB.asm:24 LDA ENTITY_ABS_X_TABLE,X
    case 0xC4487B: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C4/C46ADB.asm:25 LDX @LOCAL01
    case 0xC4487E: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C46ADB.asm:26 JSL UNKNOWN_C41EFF
    case 0xC44880: cpu.execute_instruction<0x22>(0xC41E4B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46ADB.asm:27 END_C_FUNCTION
    case 0xC44884: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46ADB.asm:27 END_C_FUNCTION
    case 0xC44885: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46B0A.asm (unresolved).
bool execute_unresolved_c4_c46b0a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46B0A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44886: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46B0A.asm:7 END_STACK_VARS
    case 0xC44888: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46B0A.asm:7 END_STACK_VARS
    case 0xC44889: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46B0A.asm:7 END_STACK_VARS
    case 0xC4488A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46B0A.asm:7 END_STACK_VARS
    case 0xC4488B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46B0A.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4488B.
    case 0xC4488D: cpu.execute_instruction<0xFF>(0xA0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46B0A.asm:7 END_STACK_VARS
    case 0xC4488E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46B0A.asm:7 END_STACK_VARS
    case 0xC4488F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46B0A.asm:8 LDY #$2000
    case 0xC44890: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/unknown/C4/C46B0A.asm:8 LDY #$2000
    // Overlapping static entry reached from 0xC4488D.
    case 0xC44891: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C46B0A.asm:8 LDY #$2000
    // Overlapping static entry reached from 0xC44890.
    case 0xC44892: cpu.execute_instruction<0x20>(0x006918, 3); return true;
    // src/unknown/C4/C46B0A.asm:9 CLC
    case 0xC44893: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46B0A.asm:10 ADC #$1000
    case 0xC44894: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x001000, 3); return true;
    // src/unknown/C4/C46B0A.asm:10 ADC #$1000
    // Overlapping static entry reached from 0xC44892.
    case 0xC44895: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // src/unknown/C4/C46B0A.asm:10 ADC #$1000
    // Overlapping static entry reached from 0xC44894.
    case 0xC44896: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/unknown/C4/C46B0A.asm:11 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC44897: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/unknown/C4/C46B0A.asm:11 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC44896.
    case 0xC44898: cpu.execute_instruction<0x3D>(0x00C091, 3); return true;
    // src/unknown/C4/C46B0A.asm:12 STA @LOCAL00
    case 0xC4489B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46B0A.asm:13 LDA CURRENT_ENTITY_SLOT
    case 0xC4489D: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C46B0A.asm:14 ASL
    case 0xC448A0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46B0A.asm:15 TAX
    case 0xC448A1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46B0A.asm:16 LDA @LOCAL00
    case 0xC448A2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46B0A.asm:17 STA ENTITY_MOVING_DIRECTIONS,X
    case 0xC448A4: cpu.execute_instruction<0x9D>(0x001A7C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46B0A.asm:18 END_C_FUNCTION
    case 0xC448A7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46B0A.asm:18 END_C_FUNCTION
    case 0xC448A8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46B2D.asm (unresolved).
bool execute_unresolved_c4_c46b2d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46B2D.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC448A9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46B2D.asm:7 LDY #$2000
    case 0xC448AB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/unknown/C4/C46B2D.asm:7 LDY #$2000
    // Overlapping static entry reached from 0xC448AB.
    case 0xC448AD: cpu.execute_instruction<0x20>(0x001422, 3); return true;
    // src/unknown/C4/C46B2D.asm:8 JSL MULT16
    case 0xC448AE: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/unknown/C4/C46B2D.asm:8 JSL MULT16
    // Overlapping static entry reached from 0xC448AD.
    case 0xC448B0: cpu.execute_instruction<0x90>(0x0000C0, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46B2D.asm:9 END_C_FUNCTION
    case 0xC448B2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46B37.asm (unresolved).
bool execute_unresolved_c4_c46b37_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46B37.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC448B3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:508 INC
    // Macro caller: src/unknown/C4/C46B37.asm:7 OPTIMIZED_ADD 4
    case 0xC448B5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:509 INC
    // Macro caller: src/unknown/C4/C46B37.asm:7 OPTIMIZED_ADD 4
    case 0xC448B6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:510 INC
    // Macro caller: src/unknown/C4/C46B37.asm:7 OPTIMIZED_ADD 4
    case 0xC448B7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:511 INC
    // Macro caller: src/unknown/C4/C46B37.asm:7 OPTIMIZED_ADD 4
    case 0xC448B8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46B37.asm:8 AND #$0007
    case 0xC448B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/unknown/C4/C46B37.asm:8 AND #$0007
    // Overlapping static entry reached from 0xC44896.
    case 0xC448BA: cpu.execute_instruction<0x07>(0x000000, 2); return true;
    // src/unknown/C4/C46B37.asm:8 AND #$0007
    // Overlapping static entry reached from 0xC448B9.
    case 0xC448BB: cpu.execute_instruction<0x00>(0x00006B, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46B37.asm:9 END_C_FUNCTION
    case 0xC448BC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46B51.asm (unresolved).
bool execute_unresolved_c4_c46b51_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46B51.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC448CD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46B51.asm:7 LDY #$2000
    case 0xC448CF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/unknown/C4/C46B51.asm:7 LDY #$2000
    // Overlapping static entry reached from 0xC448CF.
    case 0xC448D1: cpu.execute_instruction<0x20>(0x006918, 3); return true;
    // src/unknown/C4/C46B51.asm:8 CLC
    case 0xC448D2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46B51.asm:9 ADC #$1000
    case 0xC448D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x001000, 3); return true;
    // src/unknown/C4/C46B51.asm:9 ADC #$1000
    // Overlapping static entry reached from 0xC448D1.
    case 0xC448D4: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // src/unknown/C4/C46B51.asm:9 ADC #$1000
    // Overlapping static entry reached from 0xC448D3.
    case 0xC448D5: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/unknown/C4/C46B51.asm:10 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC448D6: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/unknown/C4/C46B51.asm:10 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC448D5.
    case 0xC448D7: cpu.execute_instruction<0x3D>(0x00C091, 3); return true;
    // src/unknown/C4/C46B51.asm:11 ASL
    case 0xC448DA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46B51.asm:12 TAX
    case 0xC448DB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46B51.asm:13 LDA f:UNKNOWN_C46B41,X
    case 0xC448DC: cpu.execute_instruction<0xBF>(0xC448BD, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46B51.asm:14 END_C_FUNCTION
    case 0xC448E0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46B65.asm (unresolved).
bool execute_unresolved_c4_c46b65_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46B65.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC448E1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46B65.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC448E3: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C46B65.asm:6 ASL
    case 0xC448E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46B65.asm:7 TAX
    case 0xC448E7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46B65.asm:8 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC448E8: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/unknown/C4/C46B65.asm:9 STA ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC448EB: cpu.execute_instruction<0x9D>(0x000FBC, 3); return true;
    // src/unknown/C4/C46B65.asm:10 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC448EE: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/unknown/C4/C46B65.asm:11 STA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC448F1: cpu.execute_instruction<0x9D>(0x000FF8, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46B65.asm:12 END_C_FUNCTION
    case 0xC448F4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46B79.asm (unresolved).
bool execute_unresolved_c4_c46b79_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46B79.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC448F5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46B79.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC448F7: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C46B79.asm:5 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC448D5.
    case 0xC448F9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46B79.asm:6 ASL
    case 0xC448FA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46B79.asm:7 TAX
    case 0xC448FB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46B79.asm:8 LDA ENTITY_PREPARED_X_COORDINATE
    case 0xC448FC: cpu.execute_instruction<0xAD>(0x00A033, 3); return true;
    // src/unknown/C4/C46B79.asm:9 STA ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC448FF: cpu.execute_instruction<0x9D>(0x000FBC, 3); return true;
    // src/unknown/C4/C46B79.asm:10 LDA ENTITY_PREPARED_Y_COORDINATE
    case 0xC44902: cpu.execute_instruction<0xAD>(0x00A035, 3); return true;
    // src/unknown/C4/C46B79.asm:11 STA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC44905: cpu.execute_instruction<0x9D>(0x000FF8, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46B79.asm:12 END_C_FUNCTION
    case 0xC44908: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46B8D.asm (unresolved).
bool execute_unresolved_c4_c46b8d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46B8D.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44909: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46B8D.asm:8 END_STACK_VARS
    case 0xC4490B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46B8D.asm:8 END_STACK_VARS
    case 0xC4490C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46B8D.asm:8 END_STACK_VARS
    case 0xC4490D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46B8D.asm:8 END_STACK_VARS
    case 0xC4490E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46B8D.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4490E.
    case 0xC44910: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46B8D.asm:8 END_STACK_VARS
    case 0xC44911: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46B8D.asm:8 END_STACK_VARS
    case 0xC44912: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46B8D.asm:9 TAX
    case 0xC44913: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46B8D.asm:10 LDY CURRENT_ENTITY_SLOT
    case 0xC44914: cpu.execute_instruction<0xAC>(0x001A38, 3); return true;
    // src/unknown/C4/C46B8D.asm:11 STY @LOCAL01
    case 0xC44917: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C46B8D.asm:12 TXA
    case 0xC44919: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C46B8D.asm:13 JSL UNKNOWN_C4605A
    case 0xC4491A: cpu.execute_instruction<0x22>(0xC43DA8, 4); return true;
    // src/unknown/C4/C46B8D.asm:14 STA @LOCAL00
    case 0xC4491E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46B8D.asm:15 LDY @LOCAL01
    case 0xC44920: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C46B8D.asm:16 TYA
    case 0xC44922: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46B8D.asm:17 ASL
    case 0xC44923: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46B8D.asm:18 TAY
    case 0xC44924: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C46B8D.asm:19 LDA @LOCAL00
    case 0xC44925: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46B8D.asm:20 ASL
    case 0xC44927: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46B8D.asm:21 TAX
    case 0xC44928: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46B8D.asm:22 LDA ENTITY_ABS_X_TABLE,X
    case 0xC44929: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C4/C46B8D.asm:23 STA ENTITY_SCRIPT_VAR6_TABLE,Y
    case 0xC4492C: cpu.execute_instruction<0x99>(0x000FBC, 3); return true;
    // src/unknown/C4/C46B8D.asm:24 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC4492F: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C4/C46B8D.asm:25 STA ENTITY_SCRIPT_VAR7_TABLE,Y
    case 0xC44932: cpu.execute_instruction<0x99>(0x000FF8, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46B8D.asm:26 END_C_FUNCTION
    case 0xC44935: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46B8D.asm:26 END_C_FUNCTION
    case 0xC44936: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46BBB.asm (unresolved).
bool execute_unresolved_c4_c46bbb_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46BBB.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44937: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46BBB.asm:8 END_STACK_VARS
    case 0xC44939: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46BBB.asm:8 END_STACK_VARS
    case 0xC4493A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46BBB.asm:8 END_STACK_VARS
    case 0xC4493B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46BBB.asm:8 END_STACK_VARS
    case 0xC4493C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46BBB.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4493C.
    case 0xC4493E: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46BBB.asm:8 END_STACK_VARS
    case 0xC4493F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46BBB.asm:8 END_STACK_VARS
    case 0xC44940: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46BBB.asm:9 TAX
    case 0xC44941: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46BBB.asm:10 LDY CURRENT_ENTITY_SLOT
    case 0xC44942: cpu.execute_instruction<0xAC>(0x001A38, 3); return true;
    // src/unknown/C4/C46BBB.asm:11 STY @LOCAL01
    case 0xC44945: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C46BBB.asm:12 TXA
    case 0xC44947: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C46BBB.asm:13 JSL UNKNOWN_C46028
    case 0xC44948: cpu.execute_instruction<0x22>(0xC43D76, 4); return true;
    // src/unknown/C4/C46BBB.asm:14 STA @LOCAL00
    case 0xC4494C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46BBB.asm:15 LDY @LOCAL01
    case 0xC4494E: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C46BBB.asm:16 TYA
    case 0xC44950: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46BBB.asm:17 ASL
    case 0xC44951: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46BBB.asm:18 TAY
    case 0xC44952: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C46BBB.asm:19 LDA @LOCAL00
    case 0xC44953: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46BBB.asm:20 ASL
    case 0xC44955: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46BBB.asm:21 TAX
    case 0xC44956: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46BBB.asm:22 LDA ENTITY_ABS_X_TABLE,X
    case 0xC44957: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C4/C46BBB.asm:23 STA ENTITY_SCRIPT_VAR6_TABLE,Y
    case 0xC4495A: cpu.execute_instruction<0x99>(0x000FBC, 3); return true;
    // src/unknown/C4/C46BBB.asm:24 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC4495D: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C4/C46BBB.asm:25 STA ENTITY_SCRIPT_VAR7_TABLE,Y
    case 0xC44960: cpu.execute_instruction<0x99>(0x000FF8, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46BBB.asm:26 END_C_FUNCTION
    case 0xC44963: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46BBB.asm:26 END_C_FUNCTION
    case 0xC44964: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46C45.asm (unresolved).
bool execute_unresolved_c4_c46c45_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46C45.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC449C9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46C45.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC449CB: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C46C45.asm:6 ASL
    case 0xC449CE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46C45.asm:7 TAX
    case 0xC449CF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46C45.asm:8 LDA ENTITY_ABS_X_TABLE,X
    case 0xC449D0: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C4/C46C45.asm:9 STA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC449D3: cpu.execute_instruction<0x9D>(0x000E54, 3); return true;
    // src/unknown/C4/C46C45.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC449D6: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C46C45.asm:11 ASL
    case 0xC449D9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46C45.asm:12 TAX
    case 0xC449DA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46C45.asm:13 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC449DB: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C4/C46C45.asm:14 STA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC449DE: cpu.execute_instruction<0x9D>(0x000E90, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46C45.asm:15 END_C_FUNCTION
    case 0xC449E1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46C5E.asm (unresolved).
bool execute_unresolved_c4_c46c5e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46C5E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC449E2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46C5E.asm:7 END_STACK_VARS
    case 0xC449E4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46C5E.asm:7 END_STACK_VARS
    case 0xC449E5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46C5E.asm:7 END_STACK_VARS
    case 0xC449E6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46C5E.asm:7 END_STACK_VARS
    case 0xC449E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46C5E.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC449E7.
    case 0xC449E9: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46C5E.asm:7 END_STACK_VARS
    case 0xC449EA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46C5E.asm:7 END_STACK_VARS
    case 0xC449EB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46C5E.asm:8 STA @LOCAL00
    case 0xC449EC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46C5E.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC449E9.
    case 0xC449ED: cpu.execute_instruction<0x0E>(0x0038AD, 3); return true;
    // src/unknown/C4/C46C5E.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xC449EE: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C46C5E.asm:9 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC449ED.
    case 0xC449F0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46C5E.asm:10 ASL
    case 0xC449F1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46C5E.asm:11 TAY
    case 0xC449F2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C46C5E.asm:12 TXA
    case 0xC449F3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C46C5E.asm:13 CLC
    case 0xC449F4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46C5E.asm:14 ADC ENTITY_ABS_X_TABLE,Y
    case 0xC449F5: cpu.execute_instruction<0x79>(0x000B84, 3); return true;
    // src/unknown/C4/C46C5E.asm:15 STA ENTITY_SCRIPT_VAR0_TABLE,Y
    case 0xC449F8: cpu.execute_instruction<0x99>(0x000E54, 3); return true;
    // src/unknown/C4/C46C5E.asm:16 LDA CURRENT_ENTITY_SLOT
    case 0xC449FB: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C46C5E.asm:17 ASL
    case 0xC449FE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46C5E.asm:18 TAX
    case 0xC449FF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46C5E.asm:19 LDA @LOCAL00
    case 0xC44A00: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46C5E.asm:20 CLC
    case 0xC44A02: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46C5E.asm:21 ADC ENTITY_ABS_Y_TABLE,X
    case 0xC44A03: cpu.execute_instruction<0x7D>(0x000BC0, 3); return true;
    // src/unknown/C4/C46C5E.asm:22 STA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC44A06: cpu.execute_instruction<0x9D>(0x000E90, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46C5E.asm:23 END_C_FUNCTION
    case 0xC44A09: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46C5E.asm:23 END_C_FUNCTION
    case 0xC44A0A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46C87.asm (unresolved).
bool execute_unresolved_c4_c46c87_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46C87.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44A0B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46C87.asm:5 LDA CURRENT_ENTITY_SLOT
    case 0xC44A0D: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C46C87.asm:6 ASL
    case 0xC44A10: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46C87.asm:7 TAX
    case 0xC44A11: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46C87.asm:8 LDA ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC44A12: cpu.execute_instruction<0xBD>(0x000FBC, 3); return true;
    // src/unknown/C4/C46C87.asm:9 STA ENTITY_ABS_X_TABLE,X
    case 0xC44A15: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/unknown/C4/C46C87.asm:10 LDA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC44A18: cpu.execute_instruction<0xBD>(0x000FF8, 3); return true;
    // src/unknown/C4/C46C87.asm:11 STA ENTITY_ABS_Y_TABLE,X
    case 0xC44A1B: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46C87.asm:12 END_C_FUNCTION
    case 0xC44A1E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46C9B.asm (unresolved).
bool execute_unresolved_c4_c46c9b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46C9B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44A1F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46C9B.asm:8 END_STACK_VARS
    case 0xC44A21: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46C9B.asm:8 END_STACK_VARS
    case 0xC44A22: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46C9B.asm:8 END_STACK_VARS
    case 0xC44A23: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46C9B.asm:8 END_STACK_VARS
    case 0xC44A24: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46C9B.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC44A24.
    case 0xC44A26: cpu.execute_instruction<0xFF>(0xAE685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46C9B.asm:8 END_STACK_VARS
    case 0xC44A27: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46C9B.asm:8 END_STACK_VARS
    case 0xC44A28: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46C9B.asm:9 LDX CURRENT_ENTITY_SLOT
    case 0xC44A29: cpu.execute_instruction<0xAE>(0x001A38, 3); return true;
    // src/unknown/C4/C46C9B.asm:9 LDX CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC44A26.
    case 0xC44A2A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C46C9B.asm:9 LDX CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC44A2A.
    case 0xC44A2B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46C9B.asm:10 STX @LOCAL01
    case 0xC44A2C: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C46C9B.asm:11 JSL UNKNOWN_C4608C
    case 0xC44A2E: cpu.execute_instruction<0x22>(0xC43DDA, 4); return true;
    // src/unknown/C4/C46C9B.asm:12 STA @LOCAL00
    case 0xC44A32: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46C9B.asm:13 LDX @LOCAL01
    case 0xC44A34: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C46C9B.asm:14 TXA
    case 0xC44A36: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C46C9B.asm:15 ASL
    case 0xC44A37: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46C9B.asm:16 TAY
    case 0xC44A38: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C46C9B.asm:17 LDA @LOCAL00
    case 0xC44A39: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46C9B.asm:18 ASL
    case 0xC44A3B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46C9B.asm:19 TAX
    case 0xC44A3C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46C9B.asm:20 LDA ENTITY_ABS_X_TABLE,X
    case 0xC44A3D: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C4/C46C9B.asm:21 STA ENTITY_ABS_X_TABLE,Y
    case 0xC44A40: cpu.execute_instruction<0x99>(0x000B84, 3); return true;
    // src/unknown/C4/C46C9B.asm:22 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC44A43: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C4/C46C9B.asm:23 STA ENTITY_ABS_Y_TABLE,Y
    case 0xC44A46: cpu.execute_instruction<0x99>(0x000BC0, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46C9B.asm:24 END_C_FUNCTION
    case 0xC44A49: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46C9B.asm:24 END_C_FUNCTION
    case 0xC44A4A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46CC7.asm (unresolved).
bool execute_unresolved_c4_c46cc7_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46CC7.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44A4B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46CC7.asm:8 END_STACK_VARS
    case 0xC44A4D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46CC7.asm:8 END_STACK_VARS
    case 0xC44A4E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46CC7.asm:8 END_STACK_VARS
    case 0xC44A4F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46CC7.asm:8 END_STACK_VARS
    case 0xC44A50: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46CC7.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC44A50.
    case 0xC44A52: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46CC7.asm:8 END_STACK_VARS
    case 0xC44A53: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46CC7.asm:8 END_STACK_VARS
    case 0xC44A54: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46CC7.asm:9 TAX
    case 0xC44A55: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46CC7.asm:10 LDY CURRENT_ENTITY_SLOT
    case 0xC44A56: cpu.execute_instruction<0xAC>(0x001A38, 3); return true;
    // src/unknown/C4/C46CC7.asm:11 STY @LOCAL01
    case 0xC44A59: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C46CC7.asm:12 TXA
    case 0xC44A5B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C46CC7.asm:13 JSL UNKNOWN_C46028
    case 0xC44A5C: cpu.execute_instruction<0x22>(0xC43D76, 4); return true;
    // src/unknown/C4/C46CC7.asm:14 STA @LOCAL00
    case 0xC44A60: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46CC7.asm:15 LDY @LOCAL01
    case 0xC44A62: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C46CC7.asm:16 TYA
    case 0xC44A64: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46CC7.asm:17 ASL
    case 0xC44A65: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46CC7.asm:18 TAY
    case 0xC44A66: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C46CC7.asm:19 LDA @LOCAL00
    case 0xC44A67: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46CC7.asm:20 ASL
    case 0xC44A69: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46CC7.asm:21 TAX
    case 0xC44A6A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46CC7.asm:22 LDA ENTITY_ABS_X_TABLE,X
    case 0xC44A6B: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C4/C46CC7.asm:23 STA ENTITY_ABS_X_TABLE,Y
    case 0xC44A6E: cpu.execute_instruction<0x99>(0x000B84, 3); return true;
    // src/unknown/C4/C46CC7.asm:24 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC44A71: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C4/C46CC7.asm:25 STA ENTITY_ABS_Y_TABLE,Y
    case 0xC44A74: cpu.execute_instruction<0x99>(0x000BC0, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46CC7.asm:26 END_C_FUNCTION
    case 0xC44A77: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46CC7.asm:26 END_C_FUNCTION
    case 0xC44A78: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46CF5.asm (unresolved).
bool execute_unresolved_c4_c46cf5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46CF5.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44A79: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46CF5.asm:7 END_STACK_VARS
    case 0xC44A7B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46CF5.asm:7 END_STACK_VARS
    case 0xC44A7C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46CF5.asm:7 END_STACK_VARS
    case 0xC44A7D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46CF5.asm:7 END_STACK_VARS
    case 0xC44A7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46CF5.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC44A7E.
    case 0xC44A80: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46CF5.asm:7 END_STACK_VARS
    case 0xC44A81: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46CF5.asm:7 END_STACK_VARS
    case 0xC44A82: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46CF5.asm:8 STX @VIRTUAL02
    case 0xC44A83: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C46CF5.asm:8 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC44A80.
    case 0xC44A84: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/unknown/C4/C46CF5.asm:9 TAY
    case 0xC44A85: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C46CF5.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC44A86: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C46CF5.asm:11 ASL
    case 0xC44A89: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46CF5.asm:12 TAX
    case 0xC44A8A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46CF5.asm:13 LDA @VIRTUAL02
    case 0xC44A8B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C46CF5.asm:14 CLC
    case 0xC44A8D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46CF5.asm:15 ADC BG1_X_POS
    case 0xC44A8E: cpu.execute_instruction<0x6D>(0x000031, 3); return true;
    // src/unknown/C4/C46CF5.asm:16 STA ENTITY_ABS_X_TABLE,X
    case 0xC44A91: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/unknown/C4/C46CF5.asm:17 TYA
    case 0xC44A94: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46CF5.asm:18 CLC
    case 0xC44A95: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46CF5.asm:19 ADC BG1_Y_POS
    case 0xC44A96: cpu.execute_instruction<0x6D>(0x000033, 3); return true;
    // src/unknown/C4/C46CF5.asm:20 STA ENTITY_ABS_Y_TABLE,X
    case 0xC44A99: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/unknown/C4/C46CF5.asm:21 LDA #$8000
    case 0xC44A9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // src/unknown/C4/C46CF5.asm:21 LDA #$8000
    // Overlapping static entry reached from 0xC44A9C.
    case 0xC44A9E: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/unknown/C4/C46CF5.asm:22 STA ENTITY_ABS_Y_FRACTION_TABLE,X
    case 0xC44A9F: cpu.execute_instruction<0x9D>(0x000C74, 3); return true;
    // src/unknown/C4/C46CF5.asm:23 STA ENTITY_ABS_X_FRACTION_TABLE,X
    case 0xC44AA2: cpu.execute_instruction<0x9D>(0x000C38, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46CF5.asm:24 END_C_FUNCTION
    case 0xC44AA5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46CF5.asm:24 END_C_FUNCTION
    case 0xC44AA6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46D23.asm (unresolved).
bool execute_unresolved_c4_c46d23_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46D23.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44AA7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46D23.asm:6 END_STACK_VARS
    case 0xC44AA9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46D23.asm:6 END_STACK_VARS
    case 0xC44AAA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46D23.asm:6 END_STACK_VARS
    case 0xC44AAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46D23.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC44AAB.
    case 0xC44AAD: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46D23.asm:6 END_STACK_VARS
    case 0xC44AAE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C46D23.asm:7 LDA CURRENT_ENTITY_SLOT
    case 0xC44AAF: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C46D23.asm:7 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC44AAD.
    case 0xC44AB1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46D23.asm:8 ASL
    case 0xC44AB2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46D23.asm:9 TAX
    case 0xC44AB3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46D23.asm:10 STX @LOCAL00
    case 0xC44AB4: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C46D23.asm:11 JSL RAND
    case 0xC44AB6: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/unknown/C4/C46D23.asm:12 CLC
    case 0xC44ABA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46D23.asm:13 ADC BG1_X_POS
    case 0xC44ABB: cpu.execute_instruction<0x6D>(0x000031, 3); return true;
    // src/unknown/C4/C46D23.asm:14 CLC
    case 0xC44ABE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46D23.asm:15 ADC #112
    case 0xC44ABF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000070, 2); else cpu.execute_instruction<0x69>(0x000070, 3); return true;
    // src/unknown/C4/C46D23.asm:15 ADC #112
    // Overlapping static entry reached from 0xC44ABF.
    case 0xC44AC1: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C4/C46D23.asm:16 LDX @LOCAL00
    case 0xC44AC2: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C46D23.asm:17 STA ENTITY_ABS_X_TABLE,X
    case 0xC44AC4: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/unknown/C4/C46D23.asm:18 LDA BG1_Y_POS
    case 0xC44AC7: cpu.execute_instruction<0xAD>(0x000033, 3); return true;
    // src/unknown/C4/C46D23.asm:19 STA ENTITY_ABS_Y_TABLE,X
    case 0xC44ACA: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46D23.asm:20 END_C_FUNCTION
    case 0xC44ACD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46D23.asm:20 END_C_FUNCTION
    case 0xC44ACE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46D4B.asm (unresolved).
bool execute_unresolved_c4_c46d4b_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46D4B.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44ACF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46D4B.asm:6 END_STACK_VARS
    case 0xC44AD1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46D4B.asm:6 END_STACK_VARS
    case 0xC44AD2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46D4B.asm:6 END_STACK_VARS
    case 0xC44AD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46D4B.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC44AD3.
    case 0xC44AD5: cpu.execute_instruction<0xFF>(0x3BAC5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46D4B.asm:6 END_STACK_VARS
    case 0xC44AD6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:7 LDY SPAWNING_TRAVELLING_PHOTOGRAPHER_ID
    case 0xC44AD7: cpu.execute_instruction<0xAC>(0x00A03B, 3); return true;
    // src/unknown/C4/C46D4B.asm:7 LDY SPAWNING_TRAVELLING_PHOTOGRAPHER_ID
    // Overlapping static entry reached from 0xC44AD5.
    case 0xC44AD9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000AD, 2); else cpu.execute_instruction<0xA0>(0x0038AD, 3); return true;
    // src/unknown/C4/C46D4B.asm:8 LDA CURRENT_ENTITY_SLOT
    case 0xC44ADA: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C46D4B.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC44AD9.
    case 0xC44ADB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:8 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC44AD9.
    case 0xC44ADC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:9 ASL
    case 0xC44ADD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:10 TAX
    case 0xC44ADE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C46D4B.asm:11 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    case 0xC44ADF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0023E1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C46D4B.asm:11 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC44ADF.
    case 0xC44AE1: cpu.execute_instruction<0x23>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C46D4B.asm:11 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    case 0xC44AE2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C46D4B.asm:11 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC44AE1.
    case 0xC44AE3: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C46D4B.asm:11 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    case 0xC44AE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C46D4B.asm:11 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC44AE3.
    case 0xC44AE5: cpu.execute_instruction<0xE1>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C46D4B.asm:11 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC44AE4.
    case 0xC44AE6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C46D4B.asm:11 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    case 0xC44AE7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C46D4B.asm:12 TYA
    case 0xC44AE9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:13 LDY #.SIZEOF(photographer_config_entry)
    case 0xC44AEA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003E, 2); else cpu.execute_instruction<0xA0>(0x00003E, 3); return true;
    // src/unknown/C4/C46D4B.asm:13 LDY #.SIZEOF(photographer_config_entry)
    // Overlapping static entry reached from 0xC44AEA.
    case 0xC44AEC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C46D4B.asm:14 JSL MULT168
    case 0xC44AED: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/unknown/C4/C46D4B.asm:15 STA @LOCAL00
    case 0xC44AF1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46D4B.asm:16 CLC
    case 0xC44AF3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:17 ADC #photographer_config_entry::photographer_x
    case 0xC44AF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/unknown/C4/C46D4B.asm:17 ADC #photographer_config_entry::photographer_x
    // Overlapping static entry reached from 0xC44AF4.
    case 0xC44AF6: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C46D4B.asm:18 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC44AF7: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C4/C46D4B.asm:18 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC44AF9: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C4/C46D4B.asm:18 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC44AFB: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C4/C46D4B.asm:18 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC44AFD: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/unknown/C4/C46D4B.asm:19 CLC
    case 0xC44AFF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:20 ADC @VIRTUAL0A
    case 0xC44B00: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C46D4B.asm:21 STA @VIRTUAL0A
    case 0xC44B02: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C46D4B.asm:22 LDA [@VIRTUAL0A]
    case 0xC44B04: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C46D4B.asm:23 ASL
    case 0xC44B06: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:24 ASL
    case 0xC44B07: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:25 ASL
    case 0xC44B08: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:26 STA ENTITY_ABS_X_TABLE,X
    case 0xC44B09: cpu.execute_instruction<0x9D>(0x000B84, 3); return true;
    // src/unknown/C4/C46D4B.asm:27 LDA @LOCAL00
    case 0xC44B0C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46D4B.asm:28 CLC
    case 0xC44B0E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:29 ADC #photographer_config_entry::photographer_y
    case 0xC44B0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000C, 2); else cpu.execute_instruction<0x69>(0x00000C, 3); return true;
    // src/unknown/C4/C46D4B.asm:29 ADC #photographer_config_entry::photographer_y
    // Overlapping static entry reached from 0xC44B0F.
    case 0xC44B11: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C46D4B.asm:30 CLC
    case 0xC44B12: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:31 ADC @VIRTUAL06
    case 0xC44B13: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C46D4B.asm:32 STA @VIRTUAL06
    case 0xC44B15: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C46D4B.asm:33 LDA [@VIRTUAL06]
    case 0xC44B17: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C46D4B.asm:34 ASL
    case 0xC44B19: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:35 ASL
    case 0xC44B1A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:36 ASL
    case 0xC44B1B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:37 STA ENTITY_ABS_Y_TABLE,X
    case 0xC44B1C: cpu.execute_instruction<0x9D>(0x000BC0, 3); return true;
    // src/unknown/C4/C46D4B.asm:38 LDA CURRENT_ENTITY_SLOT
    case 0xC44B1F: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C46D4B.asm:39 ASL
    case 0xC44B22: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:40 TAX
    case 0xC44B23: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:41 STZ ENTITY_ABS_Y_FRACTION_TABLE,X
    case 0xC44B24: cpu.execute_instruction<0x9E>(0x000C74, 3); return true;
    // src/unknown/C4/C46D4B.asm:42 LDA CURRENT_ENTITY_SLOT
    case 0xC44B27: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C46D4B.asm:43 ASL
    case 0xC44B2A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:44 TAX
    case 0xC44B2B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46D4B.asm:45 STZ ENTITY_ABS_X_FRACTION_TABLE,X
    case 0xC44B2C: cpu.execute_instruction<0x9E>(0x000C38, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46D4B.asm:46 END_C_FUNCTION
    case 0xC44B2F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46D4B.asm:46 END_C_FUNCTION
    case 0xC44B30: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46E46.asm (unresolved).
bool execute_unresolved_c4_c46e46_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46E46.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44BCA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C46E46.asm:5 LDA #1
    case 0xC44BCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C46E46.asm:5 LDA #1
    // Overlapping static entry reached from 0xC44BCC.
    case 0xC44BCE: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C46E46.asm:6 STA ACTIONSCRIPT_STATE
    case 0xC44BCF: cpu.execute_instruction<0x8D>(0x009939, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46E46.asm:7 END_C_FUNCTION
    case 0xC44BD2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46E4F.asm (unresolved).
bool execute_unresolved_c4_c46e4f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46E4F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44BD3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46E4F.asm:9 END_STACK_VARS
    case 0xC44BD5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C46E4F.asm:9 END_STACK_VARS
    case 0xC44BD6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46E4F.asm:9 END_STACK_VARS
    case 0xC44BD7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46E4F.asm:9 END_STACK_VARS
    case 0xC44BD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46E4F.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC44BD8.
    case 0xC44BDA: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46E4F.asm:9 END_STACK_VARS
    case 0xC44BDB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C46E4F.asm:9 END_STACK_VARS
    case 0xC44BDC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C46E4F.asm:10 STX @LOCAL02
    case 0xC44BDD: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/unknown/C4/C46E4F.asm:10 STX @LOCAL02
    // Overlapping static entry reached from 0xC44BDA.
    case 0xC44BDE: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/unknown/C4/C46E4F.asm:11 STA @LOCAL01
    case 0xC44BDF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C46E4F.asm:11 STA @LOCAL01
    // Overlapping static entry reached from 0xC44BDE.
    case 0xC44BE0: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/unknown/C4/C46E4F.asm:12 STA @VIRTUAL06
    case 0xC44BE1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C46E4F.asm:12 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC44BE0.
    case 0xC44BE2: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // src/unknown/C4/C46E4F.asm:13 LDA @LOCAL02
    case 0xC44BE3: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C46E4F.asm:13 LDA @LOCAL02
    // Overlapping static entry reached from 0xC44BE2.
    case 0xC44BE4: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/unknown/C4/C46E4F.asm:14 STA @VIRTUAL06+2
    case 0xC44BE5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C46E4F.asm:14 STA @VIRTUAL06+2
    // Overlapping static entry reached from 0xC44BE4.
    case 0xC44BE6: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C46E4F.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44BE7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C46E4F.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44BE9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C46E4F.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44BEB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C46E4F.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC44BED: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C46E4F.asm:16 LDA #8
    case 0xC44BEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/unknown/C4/C46E4F.asm:16 LDA #8
    // Overlapping static entry reached from 0xC44BEF.
    case 0xC44BF1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C46E4F.asm:17 JSL UNKNOWN_C064E3
    case 0xC44BF2: cpu.execute_instruction<0x22>(0xC06711, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46E4F.asm:18 END_C_FUNCTION
    case 0xC44BF6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46E4F.asm:18 END_C_FUNCTION
    case 0xC44BF7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46EF8.asm (unresolved).
bool execute_unresolved_c4_c46ef8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46EF8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44C7C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46EF8.asm:7 END_STACK_VARS
    case 0xC44C7E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46EF8.asm:7 END_STACK_VARS
    case 0xC44C7F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46EF8.asm:7 END_STACK_VARS
    case 0xC44C80: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46EF8.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC44C80.
    case 0xC44C82: cpu.execute_instruction<0xFF>(0x41AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46EF8.asm:7 END_STACK_VARS
    case 0xC44C83: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:8 LDA PSI_TELEPORT_DESTINATION
    case 0xC44C84: cpu.execute_instruction<0xAD>(0x00A141, 3); return true;
    // src/unknown/C4/C46EF8.asm:8 LDA PSI_TELEPORT_DESTINATION
    // Overlapping static entry reached from 0xC44C82.
    case 0xC44C86: cpu.execute_instruction<0xA1>(0x0000F0, 2); return true;
    // src/unknown/C4/C46EF8.asm:9 BEQ @UNKNOWN0
    case 0xC44C87: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C46EF8.asm:9 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC44C86.
    case 0xC44C88: cpu.execute_instruction<0x05>(0x0000A9, 2); return true;
    // src/unknown/C4/C46EF8.asm:10 LDA #0
    case 0xC44C89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C46EF8.asm:10 LDA #0
    // Overlapping static entry reached from 0xC44C88.
    case 0xC44C8A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C46EF8.asm:10 LDA #0
    // Overlapping static entry reached from 0xC44C89.
    case 0xC44C8B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C46EF8.asm:11 BRA @UNKNOWN10
    case 0xC44C8C: cpu.execute_instruction<0x80>(0x000070, 2); return true;
    // src/unknown/C4/C46EF8.asm:13 LDY CURRENT_ENTITY_SLOT
    case 0xC44C8E: cpu.execute_instruction<0xAC>(0x001A38, 3); return true;
    // src/unknown/C4/C46EF8.asm:14 TYA
    case 0xC44C91: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:15 ASL
    case 0xC44C92: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:16 TAX
    case 0xC44C93: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:17 LDA ENTITY_ABS_X_TABLE,X
    case 0xC44C94: cpu.execute_instruction<0xBD>(0x000B84, 3); return true;
    // src/unknown/C4/C46EF8.asm:18 SEC
    case 0xC44C97: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:19 SBC GAME_STATE+game_state::leader_x_coord
    case 0xC44C98: cpu.execute_instruction<0xED>(0x009B28, 3); return true;
    // src/unknown/C4/C46EF8.asm:20 STA @LOCAL01
    case 0xC44C9B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C46EF8.asm:21 STA @VIRTUAL02
    case 0xC44C9D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C46EF8.asm:22 LDA #0
    case 0xC44C9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C46EF8.asm:22 LDA #0
    // Overlapping static entry reached from 0xC44C9F.
    case 0xC44CA1: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C46EF8.asm:23 CLC
    case 0xC44CA2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:24 SBC @VIRTUAL02
    case 0xC44CA3: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C46EF8.asm:25 BRANCHLTEQS @UNKNOWN3
    case 0xC44CA5: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C46EF8.asm:25 BRANCHLTEQS @UNKNOWN3
    case 0xC44CA7: cpu.execute_instruction<0x10>(0x00000E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C46EF8.asm:25 BRANCHLTEQS @UNKNOWN3
    case 0xC44CA9: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C46EF8.asm:25 BRANCHLTEQS @UNKNOWN3
    case 0xC44CAB: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/unknown/C4/C46EF8.asm:26 LDA @LOCAL01
    case 0xC44CAD: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C46EF8.asm:27 EOR #$FFFF
    case 0xC44CAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46EF8.asm:27 EOR #$FFFF
    // Overlapping static entry reached from 0xC44CAF.
    case 0xC44CB1: cpu.execute_instruction<0xFF>(0x0E851A, 4); return true;
    // src/unknown/C4/C46EF8.asm:28 INC
    case 0xC44CB2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:29 STA @LOCAL00
    case 0xC44CB3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46EF8.asm:30 BRA @UNKNOWN4
    case 0xC44CB5: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C4/C46EF8.asm:32 LDA @LOCAL01
    case 0xC44CB7: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C46EF8.asm:33 STA @LOCAL00
    case 0xC44CB9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46EF8.asm:35 TYA
    case 0xC44CBB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:36 ASL
    case 0xC44CBC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:37 TAX
    case 0xC44CBD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:38 LDA @LOCAL00
    case 0xC44CBE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46EF8.asm:39 CMP ENTITY_SCRIPT_VAR2_TABLE,X
    case 0xC44CC0: cpu.execute_instruction<0xDD>(0x000ECC, 3); return true;
    // src/unknown/C4/C46EF8.asm:40 BCS @UNKNOWN9
    case 0xC44CC3: cpu.execute_instruction<0xB0>(0x000036, 2); return true;
    // src/unknown/C4/C46EF8.asm:41 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC44CC5: cpu.execute_instruction<0xBD>(0x000BC0, 3); return true;
    // src/unknown/C4/C46EF8.asm:42 SEC
    case 0xC44CC8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:43 SBC GAME_STATE+game_state::leader_y_coord
    case 0xC44CC9: cpu.execute_instruction<0xED>(0x009B2C, 3); return true;
    // src/unknown/C4/C46EF8.asm:44 STA @LOCAL01
    case 0xC44CCC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C46EF8.asm:45 STA @VIRTUAL02
    case 0xC44CCE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C46EF8.asm:46 LDA #0
    case 0xC44CD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C46EF8.asm:46 LDA #0
    // Overlapping static entry reached from 0xC44CD0.
    case 0xC44CD2: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C46EF8.asm:47 CLC
    case 0xC44CD3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:48 SBC @VIRTUAL02
    case 0xC44CD4: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C46EF8.asm:49 BRANCHLTEQS @UNKNOWN7
    case 0xC44CD6: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C46EF8.asm:49 BRANCHLTEQS @UNKNOWN7
    case 0xC44CD8: cpu.execute_instruction<0x10>(0x00000E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C46EF8.asm:49 BRANCHLTEQS @UNKNOWN7
    case 0xC44CDA: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C46EF8.asm:49 BRANCHLTEQS @UNKNOWN7
    case 0xC44CDC: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/unknown/C4/C46EF8.asm:50 LDA @LOCAL01
    case 0xC44CDE: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C46EF8.asm:51 EOR #$FFFF
    case 0xC44CE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46EF8.asm:51 EOR #$FFFF
    // Overlapping static entry reached from 0xC44CE0.
    case 0xC44CE2: cpu.execute_instruction<0xFF>(0x10851A, 4); return true;
    // src/unknown/C4/C46EF8.asm:52 INC
    case 0xC44CE3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:53 STA @LOCAL01
    case 0xC44CE4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C46EF8.asm:54 BRA @UNKNOWN8
    case 0xC44CE6: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C4/C46EF8.asm:56 LDA @LOCAL01
    case 0xC44CE8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C46EF8.asm:57 STA @LOCAL01
    case 0xC44CEA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C46EF8.asm:59 TYA
    case 0xC44CEC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:60 ASL
    case 0xC44CED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:61 TAX
    case 0xC44CEE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46EF8.asm:62 LDA @LOCAL01
    case 0xC44CEF: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C46EF8.asm:63 CMP ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC44CF1: cpu.execute_instruction<0xDD>(0x000F08, 3); return true;
    // src/unknown/C4/C46EF8.asm:64 BCS @UNKNOWN9
    case 0xC44CF4: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C4/C46EF8.asm:65 LDA #1
    case 0xC44CF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C46EF8.asm:65 LDA #1
    // Overlapping static entry reached from 0xC44CF6.
    case 0xC44CF8: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C46EF8.asm:66 BRA @UNKNOWN10
    case 0xC44CF9: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C46EF8.asm:68 LDA #0
    case 0xC44CFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C46EF8.asm:68 LDA #0
    // Overlapping static entry reached from 0xC44CFB.
    case 0xC44CFD: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46EF8.asm:70 END_C_FUNCTION
    case 0xC44CFE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46EF8.asm:70 END_C_FUNCTION
    case 0xC44CFF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C46F7C.asm (unresolved).
bool execute_unresolved_c4_c46f7c_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C46F7C.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44D00: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C46F7C.asm:9 END_STACK_VARS
    case 0xC44D02: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C46F7C.asm:9 END_STACK_VARS
    case 0xC44D03: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46F7C.asm:9 END_STACK_VARS
    case 0xC44D04: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C46F7C.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC44D04.
    case 0xC44D06: cpu.execute_instruction<0xFF>(0x38AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C46F7C.asm:9 END_STACK_VARS
    case 0xC44D07: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC44D08: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C46F7C.asm:10 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC44D06.
    case 0xC44D0A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:11 ASL
    case 0xC44D0B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:12 TAX
    case 0xC44D0C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:13 LDA ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC44D0D: cpu.execute_instruction<0xBD>(0x000FBC, 3); return true;
    // src/unknown/C4/C46F7C.asm:14 SEC
    case 0xC44D10: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:15 SBC ENTITY_ABS_X_TABLE,X
    case 0xC44D11: cpu.execute_instruction<0xFD>(0x000B84, 3); return true;
    // src/unknown/C4/C46F7C.asm:16 STA @LOCAL02
    case 0xC44D14: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C46F7C.asm:17 STA @VIRTUAL02
    case 0xC44D16: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C46F7C.asm:18 LDA #0
    case 0xC44D18: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C46F7C.asm:18 LDA #0
    // Overlapping static entry reached from 0xC44D18.
    case 0xC44D1A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C46F7C.asm:19 CLC
    case 0xC44D1B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:20 SBC @VIRTUAL02
    case 0xC44D1C: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C46F7C.asm:21 BRANCHLTEQS @UNKNOWN2
    case 0xC44D1E: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C46F7C.asm:21 BRANCHLTEQS @UNKNOWN2
    case 0xC44D20: cpu.execute_instruction<0x10>(0x00000E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C46F7C.asm:21 BRANCHLTEQS @UNKNOWN2
    case 0xC44D22: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C46F7C.asm:21 BRANCHLTEQS @UNKNOWN2
    case 0xC44D24: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/unknown/C4/C46F7C.asm:22 LDA @LOCAL02
    case 0xC44D26: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46F7C.asm:23 EOR #$FFFF
    case 0xC44D28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46F7C.asm:23 EOR #$FFFF
    // Overlapping static entry reached from 0xC44D28.
    case 0xC44D2A: cpu.execute_instruction<0xFF>(0x10851A, 4); return true;
    // src/unknown/C4/C46F7C.asm:24 INC
    case 0xC44D2B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:25 STA @LOCAL01
    case 0xC44D2C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C46F7C.asm:26 BRA @UNKNOWN3
    case 0xC44D2E: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C4/C46F7C.asm:28 LDA @LOCAL02
    case 0xC44D30: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46F7C.asm:29 STA @LOCAL01
    case 0xC44D32: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C46F7C.asm:31 LDA CURRENT_ENTITY_SLOT
    case 0xC44D34: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C46F7C.asm:32 ASL
    case 0xC44D37: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:33 TAX
    case 0xC44D38: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:34 LDA @LOCAL01
    case 0xC44D39: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C46F7C.asm:35 CMP ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC44D3B: cpu.execute_instruction<0xDD>(0x000F80, 3); return true;
    // src/unknown/C4/C46F7C.asm:36 BCS @UNKNOWN8
    case 0xC44D3E: cpu.execute_instruction<0xB0>(0x000038, 2); return true;
    // src/unknown/C4/C46F7C.asm:37 LDA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC44D40: cpu.execute_instruction<0xBD>(0x000FF8, 3); return true;
    // src/unknown/C4/C46F7C.asm:38 SEC
    case 0xC44D43: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:39 SBC ENTITY_ABS_Y_TABLE,X
    case 0xC44D44: cpu.execute_instruction<0xFD>(0x000BC0, 3); return true;
    // src/unknown/C4/C46F7C.asm:40 STA @LOCAL02
    case 0xC44D47: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C46F7C.asm:41 STA @VIRTUAL02
    case 0xC44D49: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C46F7C.asm:42 LDA #0
    case 0xC44D4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C46F7C.asm:42 LDA #0
    // Overlapping static entry reached from 0xC44D4B.
    case 0xC44D4D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C46F7C.asm:43 CLC
    case 0xC44D4E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:44 SBC @VIRTUAL02
    case 0xC44D4F: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C46F7C.asm:45 BRANCHLTEQS @UNKNOWN6
    case 0xC44D51: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C46F7C.asm:45 BRANCHLTEQS @UNKNOWN6
    case 0xC44D53: cpu.execute_instruction<0x10>(0x00000E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C46F7C.asm:45 BRANCHLTEQS @UNKNOWN6
    case 0xC44D55: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C46F7C.asm:45 BRANCHLTEQS @UNKNOWN6
    case 0xC44D57: cpu.execute_instruction<0x30>(0x00000A, 2); return true;
    // src/unknown/C4/C46F7C.asm:46 LDA @LOCAL02
    case 0xC44D59: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46F7C.asm:47 EOR #$FFFF
    case 0xC44D5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C46F7C.asm:47 EOR #$FFFF
    // Overlapping static entry reached from 0xC44D5B.
    case 0xC44D5D: cpu.execute_instruction<0xFF>(0x0E851A, 4); return true;
    // src/unknown/C4/C46F7C.asm:48 INC
    case 0xC44D5E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:49 STA @LOCAL00
    case 0xC44D5F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46F7C.asm:50 BRA @UNKNOWN7
    case 0xC44D61: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C4/C46F7C.asm:52 LDA @LOCAL02
    case 0xC44D63: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46F7C.asm:53 STA @LOCAL00
    case 0xC44D65: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C46F7C.asm:55 LDA CURRENT_ENTITY_SLOT
    case 0xC44D67: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C46F7C.asm:56 ASL
    case 0xC44D6A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:57 TAX
    case 0xC44D6B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:58 LDA @LOCAL00
    case 0xC44D6C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C46F7C.asm:59 CMP ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC44D6E: cpu.execute_instruction<0xDD>(0x000F80, 3); return true;
    // src/unknown/C4/C46F7C.asm:60 BCS @UNKNOWN8
    case 0xC44D71: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C4/C46F7C.asm:61 LDA #TRUE
    case 0xC44D73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C46F7C.asm:61 LDA #TRUE
    // Overlapping static entry reached from 0xC44D73.
    case 0xC44D75: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C46F7C.asm:62 BRA @UNKNOWN10
    case 0xC44D76: cpu.execute_instruction<0x80>(0x00004E, 2); return true;
    // src/unknown/C4/C46F7C.asm:64 JSL UNKNOWN_C46AAC
    case 0xC44D78: cpu.execute_instruction<0x22>(0xC44828, 4); return true;
    // src/unknown/C4/C46F7C.asm:65 TAY
    case 0xC44D7C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:66 STY @LOCAL01
    case 0xC44D7D: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C46F7C.asm:67 LDA CURRENT_ENTITY_SLOT
    case 0xC44D7F: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C46F7C.asm:68 ASL
    case 0xC44D82: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:69 TAX
    case 0xC44D83: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:70 TYA
    case 0xC44D84: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:71 CMP ENTITY_DIRECTIONS,X
    case 0xC44D85: cpu.execute_instruction<0xDD>(0x002EF4, 3); return true;
    // src/unknown/C4/C46F7C.asm:72 BEQ @UNKNOWN9
    case 0xC44D88: cpu.execute_instruction<0xF0>(0x000039, 2); return true;
    // src/unknown/C4/C46F7C.asm:73 TYA
    case 0xC44D8A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:74 JSL UNKNOWN_C0C83B
    case 0xC44D8B: cpu.execute_instruction<0x22>(0xC0C81D, 4); return true;
    // src/unknown/C4/C46F7C.asm:75 LDA CURRENT_ENTITY_SLOT
    case 0xC44D8F: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C46F7C.asm:76 ASL
    case 0xC44D92: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:77 CLC
    case 0xC44D93: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:78 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC44D94: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F4, 2); else cpu.execute_instruction<0x69>(0x002EF4, 3); return true;
    // src/unknown/C4/C46F7C.asm:78 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC44D94.
    case 0xC44D96: cpu.execute_instruction<0x2E>(0x00BDAA, 3); return true;
    // src/unknown/C4/C46F7C.asm:79 TAX
    case 0xC44D97: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:80 LDA __BSS_START__,X
    case 0xC44D98: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C46F7C.asm:80 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC44D96.
    case 0xC44D99: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C46F7C.asm:81 STA @LOCAL02
    case 0xC44D9B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C46F7C.asm:82 LDY @LOCAL01
    case 0xC44D9D: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C46F7C.asm:83 TYA
    case 0xC44D9F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:84 STA __BSS_START__,X
    case 0xC44DA0: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C46F7C.asm:85 LDA @LOCAL02
    case 0xC44DA3: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C46F7C.asm:86 JSL UNKNOWN_C46AA3
    case 0xC44DA5: cpu.execute_instruction<0x22>(0xC4481F, 4); return true;
    // src/unknown/C4/C46F7C.asm:87 TAX
    case 0xC44DA9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:88 STX @LOCAL00
    case 0xC44DAA: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C46F7C.asm:89 LDY @LOCAL01
    case 0xC44DAC: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C46F7C.asm:89 LDY @LOCAL01
    // Overlapping static entry reached from 0xC44E0B.
    case 0xC44DAD: cpu.execute_instruction<0x10>(0x000098, 2); return true;
    // src/unknown/C4/C46F7C.asm:90 TYA
    case 0xC44DAE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:91 JSL UNKNOWN_C46AA3
    case 0xC44DAF: cpu.execute_instruction<0x22>(0xC4481F, 4); return true;
    // src/unknown/C4/C46F7C.asm:92 STA @VIRTUAL02
    case 0xC44DB3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C46F7C.asm:93 LDX @LOCAL00
    case 0xC44DB5: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C46F7C.asm:94 TXA
    case 0xC44DB7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C46F7C.asm:95 CMP @VIRTUAL02
    case 0xC44DB8: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C46F7C.asm:96 BEQ @UNKNOWN9
    case 0xC44DBA: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C4/C46F7C.asm:97 LDA CURRENT_ENTITY_SLOT
    case 0xC44DBC: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/unknown/C4/C46F7C.asm:98 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC44DBF: cpu.execute_instruction<0x22>(0xC0A46E, 4); return true;
    // src/unknown/C4/C46F7C.asm:100 LDA #FALSE
    case 0xC44DC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C46F7C.asm:100 LDA #FALSE
    // Overlapping static entry reached from 0xC44DC3.
    case 0xC44DC5: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C46F7C.asm:102 END_C_FUNCTION
    case 0xC44DC6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C46F7C.asm:102 END_C_FUNCTION
    case 0xC44DC7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
