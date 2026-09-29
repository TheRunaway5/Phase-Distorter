// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/intro/decomp_itoi_production.asm (source_named).
bool execute_introduction_decomp_itoi_production_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/decomp_itoi_production.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4AF39: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/decomp_itoi_production.asm:7 END_STACK_VARS
    case 0xC4AF3B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/decomp_itoi_production.asm:7 END_STACK_VARS
    case 0xC4AF3C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/decomp_itoi_production.asm:7 END_STACK_VARS
    case 0xC4AF3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/decomp_itoi_production.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4AF3D.
    case 0xC4AF3F: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/decomp_itoi_production.asm:7 END_STACK_VARS
    case 0xC4AF40: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4AF41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AF41.
    case 0xC4AF43: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_itoi_production.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4AF44: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4AF46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AF46.
    case 0xC4AF48: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_itoi_production.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4AF49: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    case 0xC4AF4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000070, 2); else cpu.execute_instruction<0xA9>(0x00C470, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC4AF4B.
    case 0xC4AF4D: cpu.execute_instruction<0xC4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    case 0xC4AF4E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC4AF4D.
    case 0xC4AF4F: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    case 0xC4AF50: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC4AF50.
    case 0xC4AF52: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    case 0xC4AF53: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_itoi_production.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AF55: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AF57: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_itoi_production.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AF59: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_itoi_production.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AF5B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/decomp_itoi_production.asm:11 JSL DECOMP
    case 0xC4AF5D: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/intro/decomp_itoi_production.asm:12 JSR UNKNOWN_C4DCF6
    case 0xC4AF61: cpu.execute_instruction<0x20>(0x00AF07, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4AF64: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4AF66: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4AF68: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4AF6A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4AF6C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4AF6C.
    case 0xC4AF6E: cpu.execute_instruction<0x7C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4AF6F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4AF6F.
    case 0xC4AF71: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4AF72: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4AF74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4AF76: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4AF74.
    case 0xC4AF77: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4AF77.
    case 0xC4AF79: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4AF7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000800, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AF79.
    case 0xC4AF7B: cpu.execute_instruction<0x00>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AF7A.
    case 0xC4AF7C: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4AF7D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4AF7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AF7F.
    case 0xC4AF81: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4AF82: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    case 0xC4AF84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DC, 2); else cpu.execute_instruction<0xA9>(0x00C4DC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4AF84.
    case 0xC4AF86: cpu.execute_instruction<0xC4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    case 0xC4AF87: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4AF86.
    case 0xC4AF88: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    case 0xC4AF89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4AF89.
    case 0xC4AF8B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    case 0xC4AF8C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_itoi_production.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AF8E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AF90: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_itoi_production.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AF92: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_itoi_production.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AF94: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/decomp_itoi_production.asm:18 JSL DECOMP
    case 0xC4AF96: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4AF9A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4AF9C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4AF9E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4AFA0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4AFA2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4AFA2.
    case 0xC4AFA4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4AFA5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000400, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4AFA5.
    case 0xC4AFA7: cpu.execute_instruction<0x04>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4AFA8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4AFA7.
    case 0xC4AFA9: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4AFAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4AFAC: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4AFAA.
    case 0xC4AFAD: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4AFAD.
    case 0xC4AFAF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4AFB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00C800, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4AFAF.
    case 0xC4AFB1: cpu.execute_instruction<0x00>(0x0000C8, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4AFB0.
    case 0xC4AFB2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4AFB3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4AFB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4AFB5.
    case 0xC4AFB7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4AFB8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4AFBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    // Overlapping static entry reached from 0xC4AFBA.
    case 0xC4AFBC: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4AFBD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4AFBF: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4AFC0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4AFC2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4AFC3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4AFC5: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/decomp_itoi_production.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC4AFC7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_itoi_production.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AFC9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AFCB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_itoi_production.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AFCD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_itoi_production.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AFCF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/decomp_itoi_production.asm:25 JSL DECOMP
    case 0xC4AFD1: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/intro/decomp_itoi_production.asm:26 STZ PALETTES
    case 0xC4AFD5: cpu.execute_instruction<0x9C>(0x000200, 3); return true;
    // src/intro/decomp_itoi_production.asm:27 LDA #24
    case 0xC4AFD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/intro/decomp_itoi_production.asm:27 LDA #24
    // Overlapping static entry reached from 0xC4AFD8.
    case 0xC4AFDA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/decomp_itoi_production.asm:28 JSL UNKNOWN_C0856B
    case 0xC4AFDB: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/decomp_itoi_production.asm:29 END_C_FUNCTION
    case 0xC4AFDF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/decomp_itoi_production.asm:29 END_C_FUNCTION
    case 0xC4AFE0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/decomp_nintendo_presentation.asm (source_named).
bool execute_introduction_decomp_nintendo_presentation_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4AFE1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:7 END_STACK_VARS
    case 0xC4AFE3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:7 END_STACK_VARS
    case 0xC4AFE4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:7 END_STACK_VARS
    case 0xC4AFE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4AFE5.
    case 0xC4AFE7: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:7 END_STACK_VARS
    case 0xC4AFE8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4AFE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AFE9.
    case 0xC4AFEB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4AFEC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4AFEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AFEE.
    case 0xC4AFF0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4AFF1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:9 LOADPTR NINTENDO_PRESENTATION_ARRANGEMENT, @LOCAL00
    case 0xC4AFF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000092, 2); else cpu.execute_instruction<0xA9>(0x00C692, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:9 LOADPTR NINTENDO_PRESENTATION_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC4AFF3.
    case 0xC4AFF5: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:9 LOADPTR NINTENDO_PRESENTATION_ARRANGEMENT, @LOCAL00
    case 0xC4AFF6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:9 LOADPTR NINTENDO_PRESENTATION_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC4AFF5.
    case 0xC4AFF7: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:9 LOADPTR NINTENDO_PRESENTATION_ARRANGEMENT, @LOCAL00
    case 0xC4AFF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:9 LOADPTR NINTENDO_PRESENTATION_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC4AFF8.
    case 0xC4AFFA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:9 LOADPTR NINTENDO_PRESENTATION_ARRANGEMENT, @LOCAL00
    case 0xC4AFFB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AFFD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AFFF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B001: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B003: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/decomp_nintendo_presentation.asm:11 JSL DECOMP
    case 0xC4B005: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/intro/decomp_nintendo_presentation.asm:12 JSR UNKNOWN_C4DCF6
    case 0xC4B009: cpu.execute_instruction<0x20>(0x00AF07, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4B00C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4B00E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4B010: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4B012: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4B014: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4B014.
    case 0xC4B016: cpu.execute_instruction<0x7C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4B017: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4B017.
    case 0xC4B019: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4B01A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4B01C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4B01E: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4B01C.
    case 0xC4B01F: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4B01F.
    case 0xC4B021: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4B022: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000800, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B021.
    case 0xC4B023: cpu.execute_instruction<0x00>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B022.
    case 0xC4B024: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4B025: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4B027: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B027.
    case 0xC4B029: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4B02A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:16 LOADPTR NINTENDO_PRESENTATION_GRAPHICS, @LOCAL00
    case 0xC4B02C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DF, 2); else cpu.execute_instruction<0xA9>(0x00C6DF, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:16 LOADPTR NINTENDO_PRESENTATION_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4B02C.
    case 0xC4B02E: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:16 LOADPTR NINTENDO_PRESENTATION_GRAPHICS, @LOCAL00
    case 0xC4B02F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:16 LOADPTR NINTENDO_PRESENTATION_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4B02E.
    case 0xC4B030: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:16 LOADPTR NINTENDO_PRESENTATION_GRAPHICS, @LOCAL00
    case 0xC4B031: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:16 LOADPTR NINTENDO_PRESENTATION_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4B031.
    case 0xC4B033: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:16 LOADPTR NINTENDO_PRESENTATION_GRAPHICS, @LOCAL00
    case 0xC4B034: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B036: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B038: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B03A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B03C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/decomp_nintendo_presentation.asm:18 JSL DECOMP
    case 0xC4B03E: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4B042: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4B044: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4B046: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4B048: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4B04A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4B04A.
    case 0xC4B04C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4B04D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000400, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4B04D.
    case 0xC4B04F: cpu.execute_instruction<0x04>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4B050: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4B04F.
    case 0xC4B051: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4B052: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4B054: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4B052.
    case 0xC4B055: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4B055.
    case 0xC4B057: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4B058: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00C800, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4B057.
    case 0xC4B059: cpu.execute_instruction<0x00>(0x0000C8, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4B058.
    case 0xC4B05A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4B05B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4B05D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4B05D.
    case 0xC4B05F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4B060: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:22 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B062: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:22 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B062.
    case 0xC4B064: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:22 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B065: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:22 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B067: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:22 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B068: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:22 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B06A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:22 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B06B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:22 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4B06D: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/decomp_nintendo_presentation.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC4B06F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/decomp_nintendo_presentation.asm:23 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4B0B8.
    case 0xC4B070: cpu.execute_instruction<0x20>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B071: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B073: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B075: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B077: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/decomp_nintendo_presentation.asm:25 JSL DECOMP
    case 0xC4B079: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/intro/decomp_nintendo_presentation.asm:26 STZ PALETTES
    case 0xC4B07D: cpu.execute_instruction<0x9C>(0x000200, 3); return true;
    // src/intro/decomp_nintendo_presentation.asm:27 LDA #24
    case 0xC4B080: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/intro/decomp_nintendo_presentation.asm:27 LDA #24
    // Overlapping static entry reached from 0xC4B080.
    case 0xC4B082: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/decomp_nintendo_presentation.asm:28 JSL UNKNOWN_C0856B
    case 0xC4B083: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:29 END_C_FUNCTION
    case 0xC4B087: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:29 END_C_FUNCTION
    case 0xC4B088: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/display_animated_naming_sprite.asm (source_named).
bool execute_introduction_display_animated_naming_sprite_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/display_animated_naming_sprite.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4AAA9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    case 0xC4AAAB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    case 0xC4AAAC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    case 0xC4AAAD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    case 0xC4AAAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC4AAAE.
    case 0xC4AAB0: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    case 0xC4AAB1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    case 0xC4AAB2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/intro/display_animated_naming_sprite.asm:12 STA @LOCAL04
    case 0xC4AAB3: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:12 STA @LOCAL04
    // Overlapping static entry reached from 0xC4AAB0.
    case 0xC4AAB4: cpu.execute_instruction<0x16>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    case 0xC4AAB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000063, 2); else cpu.execute_instruction<0xA9>(0x00F863, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4AAB4.
    case 0xC4AAB6: cpu.execute_instruction<0x63>(0x0000F8, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4AAB5.
    case 0xC4AAB7: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    case 0xC4AAB8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    case 0xC4AABA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4AABA.
    case 0xC4AABC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    case 0xC4AABD: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:14 LDA @LOCAL04
    case 0xC4AABF: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:15 ASL
    case 0xC4AAC1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/display_animated_naming_sprite.asm:16 ASL
    case 0xC4AAC2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/display_animated_naming_sprite.asm:17 CLC
    case 0xC4AAC3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/display_animated_naming_sprite.asm:18 ADC @VIRTUAL0A
    case 0xC4AAC4: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:19 STA @VIRTUAL0A
    case 0xC4AAC6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4AAC8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AAC8.
    case 0xC4AACA: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4AACB: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4AACD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4AACE: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4AAD0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4AAD2: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:21 BRA @UNKNOWN1
    case 0xC4AAD4: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:24 LDA #0
    case 0xC4AAD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/display_animated_naming_sprite.asm:24 LDA #0
    // Overlapping static entry reached from 0xC4AAD6.
    case 0xC4AAD8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:25 STA @LOCAL00
    case 0xC4AAD9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:26 STA @LOCAL01
    case 0xC4AADB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:31 LDY #$FFFF
    case 0xC4AADD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/intro/display_animated_naming_sprite.asm:31 LDY #$FFFF
    // Overlapping static entry reached from 0xC4AADD.
    case 0xC4AADF: cpu.execute_instruction<0xFF>(0xA01484, 4); return true;
    // src/intro/display_animated_naming_sprite.asm:32 STY @LOCAL03
    case 0xC4AAE0: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:33 LDY #naming_screen_entity::script
    case 0xC4AAE2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/intro/display_animated_naming_sprite.asm:33 LDY #naming_screen_entity::script
    // Overlapping static entry reached from 0xC4AADF.
    case 0xC4AAE3: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:33 LDY #naming_screen_entity::script
    // Overlapping static entry reached from 0xC4AAE2.
    case 0xC4AAE4: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:34 LDA [@VIRTUAL06],Y
    case 0xC4AAE5: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:35 TAX
    case 0xC4AAE7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/display_animated_naming_sprite.asm:36 LDA @LOCAL02
    case 0xC4AAE8: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:37 LDY @LOCAL03
    case 0xC4AAEA: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:38 JSL CREATE_ENTITY
    case 0xC4AAEC: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/intro/display_animated_naming_sprite.asm:39 LDA #.SIZEOF(naming_screen_entity)
    case 0xC4AAF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/intro/display_animated_naming_sprite.asm:39 LDA #.SIZEOF(naming_screen_entity)
    // Overlapping static entry reached from 0xC4AAF0.
    case 0xC4AAF2: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:40 CLC
    case 0xC4AAF3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/display_animated_naming_sprite.asm:41 ADC @VIRTUAL06
    case 0xC4AAF4: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:42 STA @VIRTUAL06
    case 0xC4AAF6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:44 LDA [@VIRTUAL06]
    case 0xC4AAF8: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:45 STA @LOCAL02
    case 0xC4AAFA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:46 BNE @UNKNOWN0
    case 0xC4AAFC: cpu.execute_instruction<0xD0>(0x0000D8, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:47 STZ WAIT_FOR_NAMING_SCREEN_ACTIONSCRIPT
    case 0xC4AAFE: cpu.execute_instruction<0x9C>(0x00B688, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/display_animated_naming_sprite.asm:48 END_C_FUNCTION
    case 0xC4AB01: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/display_animated_naming_sprite.asm:48 END_C_FUNCTION
    case 0xC4AB02: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/file_select/open_flavour_menu.asm (source_named).
bool execute_introduction_file_select_open_flavour_menu_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:3 BEGIN_C_FUNCTION
    case 0xC1F55E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:9 END_STACK_VARS
    case 0xC1F560: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:9 END_STACK_VARS
    case 0xC1F561: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:9 END_STACK_VARS
    case 0xC1F562: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1F562.
    case 0xC1F564: cpu.execute_instruction<0xFF>(0x32A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:9 END_STACK_VARS
    case 0xC1F565: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:17 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_FLAVOUR_CHOICE
    case 0xC1F566: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000032, 2); else cpu.execute_instruction<0xA9>(0x000032, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:17 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_FLAVOUR_CHOICE
    // Overlapping static entry reached from 0xC1F566.
    case 0xC1F568: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:17 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_FLAVOUR_CHOICE
    case 0xC1F569: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:18 JSR SET_INSTANT_PRINTING
    case 0xC1F56C: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    case 0xC1F56F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x009503, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    // Overlapping static entry reached from 0xC1F56F.
    case 0xC1F571: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    case 0xC1F572: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    // Overlapping static entry reached from 0xC1F571.
    case 0xC1F573: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    case 0xC1F574: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    // Overlapping static entry reached from 0xC1F574.
    case 0xC1F576: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    case 0xC1F577: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:20 LDA #@FLAVOURDESCLENGTH
    case 0xC1F579: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:20 LDA #@FLAVOURDESCLENGTH
    // Overlapping static entry reached from 0xC1F579.
    case 0xC1F57B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:21 JSR PRINT_STRING
    case 0xC1F57C: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F57F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F57F.
    case 0xC1F581: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F582: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F584: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F584.
    case 0xC1F586: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F587: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    case 0xC1F589: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00950D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    // Overlapping static entry reached from 0xC1F589.
    case 0xC1F58B: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    case 0xC1F58C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    // Overlapping static entry reached from 0xC1F58B.
    case 0xC1F58D: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    case 0xC1F58E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    // Overlapping static entry reached from 0xC1F58E.
    case 0xC1F590: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    case 0xC1F591: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F593: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F595: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F597: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F599: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:25 LDX #@FLAVOURSTARTLINE
    case 0xC1F59B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:25 LDX #@FLAVOURSTARTLINE
    // Overlapping static entry reached from 0xC1F59B.
    case 0xC1F59D: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:26 LDA #0
    case 0xC1F59E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:26 LDA #0
    // Overlapping static entry reached from 0xC1F59E.
    case 0xC1F5A0: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:27 JSR UNKNOWN_C114B1
    case 0xC1F5A1: cpu.execute_instruction<0x20>(0x001AE6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    case 0xC1F5A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x009512, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    // Overlapping static entry reached from 0xC1F5A4.
    case 0xC1F5A6: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    case 0xC1F5A7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    // Overlapping static entry reached from 0xC1F5A6.
    case 0xC1F5A8: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    case 0xC1F5A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    // Overlapping static entry reached from 0xC1F5A9.
    case 0xC1F5AB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    case 0xC1F5AC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:29 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5AE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:29 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5B0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:29 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5B2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:29 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5B4: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:30 LDX #@FLAVOURSTARTLINE+1
    case 0xC1F5B6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:30 LDX #@FLAVOURSTARTLINE+1
    // Overlapping static entry reached from 0xC1F5B6.
    case 0xC1F5B8: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:31 LDA #0
    case 0xC1F5B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:31 LDA #0
    // Overlapping static entry reached from 0xC1F5B9.
    case 0xC1F5BB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:32 JSR UNKNOWN_C114B1
    case 0xC1F5BC: cpu.execute_instruction<0x20>(0x001AE6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    case 0xC1F5BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000016, 2); else cpu.execute_instruction<0xA9>(0x009516, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    // Overlapping static entry reached from 0xC1F5BF.
    case 0xC1F5C1: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    case 0xC1F5C2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    // Overlapping static entry reached from 0xC1F5C1.
    case 0xC1F5C3: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    case 0xC1F5C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    // Overlapping static entry reached from 0xC1F5C4.
    case 0xC1F5C6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    case 0xC1F5C7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5C9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5CB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5CD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5CF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:35 LDX #@FLAVOURSTARTLINE+2
    case 0xC1F5D1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:35 LDX #@FLAVOURSTARTLINE+2
    // Overlapping static entry reached from 0xC1F5D1.
    case 0xC1F5D3: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:36 LDA #0
    case 0xC1F5D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:36 LDA #0
    // Overlapping static entry reached from 0xC1F5D4.
    case 0xC1F5D6: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:37 JSR UNKNOWN_C114B1
    case 0xC1F5D7: cpu.execute_instruction<0x20>(0x001AE6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    case 0xC1F5DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001D, 2); else cpu.execute_instruction<0xA9>(0x00951D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    // Overlapping static entry reached from 0xC1F5DA.
    case 0xC1F5DC: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    case 0xC1F5DD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    // Overlapping static entry reached from 0xC1F5DC.
    case 0xC1F5DE: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    case 0xC1F5DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    // Overlapping static entry reached from 0xC1F5DF.
    case 0xC1F5E1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    case 0xC1F5E2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:39 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5E4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:39 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5E6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:39 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5E8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:39 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5EA: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:40 LDX #@FLAVOURSTARTLINE+3
    case 0xC1F5EC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:40 LDX #@FLAVOURSTARTLINE+3
    // Overlapping static entry reached from 0xC1F5EC.
    case 0xC1F5EE: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:41 LDA #0
    case 0xC1F5EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:41 LDA #0
    // Overlapping static entry reached from 0xC1F5EF.
    case 0xC1F5F1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:42 JSR UNKNOWN_C114B1
    case 0xC1F5F2: cpu.execute_instruction<0x20>(0x001AE6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    case 0xC1F5F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000021, 2); else cpu.execute_instruction<0xA9>(0x009521, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    // Overlapping static entry reached from 0xC1F5F5.
    case 0xC1F5F7: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    case 0xC1F5F8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    // Overlapping static entry reached from 0xC1F5F7.
    case 0xC1F5F9: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    case 0xC1F5FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    // Overlapping static entry reached from 0xC1F5FA.
    case 0xC1F5FC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    case 0xC1F5FD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5FF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F601: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F603: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F605: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:45 LDX #@FLAVOURSTARTLINE+4
    case 0xC1F607: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:45 LDX #@FLAVOURSTARTLINE+4
    // Overlapping static entry reached from 0xC1F607.
    case 0xC1F609: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:46 LDA #0
    case 0xC1F60A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:46 LDA #0
    // Overlapping static entry reached from 0xC1F60A.
    case 0xC1F60C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:47 JSR UNKNOWN_C114B1
    case 0xC1F60D: cpu.execute_instruction<0x20>(0x001AE6, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:48 LDX #.LOWORD(GAME_STATE) + game_state::text_flavour
    case 0xC1F610: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00007E, 2); else cpu.execute_instruction<0xA2>(0x009C7E, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:48 LDX #.LOWORD(GAME_STATE) + game_state::text_flavour
    // Overlapping static entry reached from 0xC1F610.
    case 0xC1F612: cpu.execute_instruction<0x9C>(0x0000BD, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:49 LDA __BSS_START__,X
    case 0xC1F613: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:49 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC1F612.
    case 0xC1F615: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:50 AND #$00FF
    case 0xC1F616: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC1F616.
    case 0xC1F618: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:51 BNE @UNKNOWN0
    case 0xC1F619: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC1F61B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:53 LDA #1
    case 0xC1F61D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:54 STA __BSS_START__,X
    case 0xC1F61F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:54 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC1F61D.
    case 0xC1F620: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:56 LDX #.LOWORD(GAME_STATE) + game_state::text_flavour
    case 0xC1F622: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00007E, 2); else cpu.execute_instruction<0xA2>(0x009C7E, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:56 LDX #.LOWORD(GAME_STATE) + game_state::text_flavour
    // Overlapping static entry reached from 0xC1F622.
    case 0xC1F624: cpu.execute_instruction<0x9C>(0x001886, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:57 STX @LOCAL03
    case 0xC1F625: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC1F627: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:59 LDA __BSS_START__,X
    case 0xC1F629: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:60 AND #$00FF
    case 0xC1F62C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC1F62C.
    case 0xC1F62E: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:61 DEC
    case 0xC1F62F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/intro/file_select/open_flavour_menu.asm:62 JSR UNKNOWN_C11887
    case 0xC1F630: cpu.execute_instruction<0x20>(0x002022, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:63 LOADPTR UNKNOWN_C1EC8F, @LOCAL00
    case 0xC1F633: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F6, 2); else cpu.execute_instruction<0xA9>(0x00EBF6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:63 LOADPTR UNKNOWN_C1EC8F, @LOCAL00
    // Overlapping static entry reached from 0xC1F633.
    case 0xC1F635: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:63 LOADPTR UNKNOWN_C1EC8F, @LOCAL00
    case 0xC1F636: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:63 LOADPTR UNKNOWN_C1EC8F, @LOCAL00
    case 0xC1F638: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:63 LOADPTR UNKNOWN_C1EC8F, @LOCAL00
    // Overlapping static entry reached from 0xC1F638.
    case 0xC1F63A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:63 LOADPTR UNKNOWN_C1EC8F, @LOCAL00
    case 0xC1F63B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:64 JSR UNKNOWN_C11F5A
    case 0xC1F63D: cpu.execute_instruction<0x20>(0x00267B, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:65 LDA #1
    case 0xC1F640: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:65 LDA #1
    // Overlapping static entry reached from 0xC1F640.
    case 0xC1F642: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:66 JSR SELECTION_MENU
    case 0xC1F643: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:67 TAY
    case 0xC1F646: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/intro/file_select/open_flavour_menu.asm:68 STY @LOCAL02
    case 0xC1F647: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:69 BEQ @UNKNOWN1
    case 0xC1F649: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:70 TYA
    case 0xC1F64B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select/open_flavour_menu.asm:71 SEP #PROC_FLAGS::ACCUM8
    case 0xC1F64C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:72 LDX @LOCAL03
    case 0xC1F64E: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:73 STA __BSS_START__,X
    case 0xC1F650: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:74 BRA @UNKNOWN4
    case 0xC1F653: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:77 LDX @LOCAL03
    case 0xC1F655: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:78 LDA __BSS_START__,X
    case 0xC1F657: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:79 AND #$00FF
    case 0xC1F65A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC1F65A.
    case 0xC1F65C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:80 BEQ @UNKNOWN2
    case 0xC1F65D: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:81 AND #$00FF
    case 0xC1F65F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC1F65F.
    case 0xC1F661: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:82 TAX
    case 0xC1F662: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select/open_flavour_menu.asm:83 BRA @UNKNOWN3
    case 0xC1F663: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:85 LDX #1
    case 0xC1F665: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:85 LDX #1
    // Overlapping static entry reached from 0xC1F665.
    case 0xC1F667: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:87 TXA
    case 0xC1F668: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/file_select/open_flavour_menu.asm:88 JSL UNKNOWN_C1EC8F
    case 0xC1F669: cpu.execute_instruction<0x22>(0xC1EBF6, 4); return true;
    // src/intro/file_select/open_flavour_menu.asm:90 REP #PROC_FLAGS::ACCUM8
    case 0xC1F66D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:92 LDA #WINDOW::FILE_SELECT_FLAVOUR_CHOICE
    case 0xC1F66F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000032, 2); else cpu.execute_instruction<0xA9>(0x000032, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:92 LDA #WINDOW::FILE_SELECT_FLAVOUR_CHOICE
    // Overlapping static entry reached from 0xC1F66F.
    case 0xC1F671: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:93 JSR CLOSE_WINDOW
    case 0xC1F672: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:95 LDA CURRENT_SAVE_SLOT
    case 0xC1F675: cpu.execute_instruction<0xAD>(0x00B675, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:96 AND #$00FF
    case 0xC1F678: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:96 AND #$00FF
    // Overlapping static entry reached from 0xC1F678.
    case 0xC1F67A: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:97 DEC
    case 0xC1F67B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/intro/file_select/open_flavour_menu.asm:98 JSL SAVE_GAME_SLOT
    case 0xC1F67C: cpu.execute_instruction<0x22>(0xC0F962, 4); return true;
    // src/intro/file_select/open_flavour_menu.asm:99 LDY @LOCAL02
    case 0xC1F680: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:100 TYA
    case 0xC1F682: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:101 END_C_FUNCTION
    case 0xC1F683: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:101 END_C_FUNCTION
    case 0xC1F684: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/file_select/open_sound_menu-jp.asm (source_named).
bool execute_introduction_file_select_open_sound_menu_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1F408: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:12 END_STACK_VARS
    case 0xC1F40A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:12 END_STACK_VARS
    case 0xC1F40B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:12 END_STACK_VARS
    case 0xC1F40C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:12 END_STACK_VARS
    case 0xC1F40D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC1F40D.
    case 0xC1F40F: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:12 END_STACK_VARS
    case 0xC1F410: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:12 END_STACK_VARS
    case 0xC1F411: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:13 TAY
    case 0xC1F412: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:14 STY @LOCAL04
    case 0xC1F413: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:15 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MUSIC_MODE
    case 0xC1F415: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x000019, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:15 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MUSIC_MODE
    // Overlapping static entry reached from 0xC1F415.
    case 0xC1F417: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:15 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MUSIC_MODE
    case 0xC1F418: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:16 JSR SET_INSTANT_PRINTING
    case 0xC1F41B: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    case 0xC1F41E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F3, 2); else cpu.execute_instruction<0xA9>(0x0094F3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    // Overlapping static entry reached from 0xC1F41E.
    case 0xC1F420: cpu.execute_instruction<0x94>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    case 0xC1F421: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    // Overlapping static entry reached from 0xC1F420.
    case 0xC1F422: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    case 0xC1F423: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    // Overlapping static entry reached from 0xC1F423.
    case 0xC1F425: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    case 0xC1F426: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:18 LDA #6
    case 0xC1F428: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:18 LDA #6
    // Overlapping static entry reached from 0xC1F428.
    case 0xC1F42A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:19 JSR PRINT_STRING
    case 0xC1F42B: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    case 0xC1F42E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F9, 2); else cpu.execute_instruction<0xA9>(0x0094F9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1F42E.
    case 0xC1F430: cpu.execute_instruction<0x94>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    case 0xC1F431: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1F430.
    case 0xC1F432: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    case 0xC1F433: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1F433.
    case 0xC1F435: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    case 0xC1F436: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F438: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F438.
    case 0xC1F43A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F43B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F43D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F43D.
    case 0xC1F43F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F440: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:22 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC1F442: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:22 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC1F444: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:22 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC1F446: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:22 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC1F448: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:23 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F44A: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:23 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F44C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:23 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F44E: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:23 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F450: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F452: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F454: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F456: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F458: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:25 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC1F45A: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:25 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC1F45C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:25 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC1F45E: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:25 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC1F460: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F462: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F464: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F466: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F468: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:27 LDX #1
    case 0xC1F46A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:27 LDX #1
    // Overlapping static entry reached from 0xC1F46A.
    case 0xC1F46C: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:28 LDA #0
    case 0xC1F46D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:28 LDA #0
    // Overlapping static entry reached from 0xC1F46D.
    case 0xC1F46F: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:29 JSR UNKNOWN_C114B1
    case 0xC1F470: cpu.execute_instruction<0x20>(0x001AE6, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:30 LDA #SOUND_SETTING_STRING_LENGTH
    case 0xC1F473: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:30 LDA #SOUND_SETTING_STRING_LENGTH
    // Overlapping static entry reached from 0xC1F473.
    case 0xC1F475: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:31 CLC
    case 0xC1F476: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:32 ADC @VIRTUAL0A
    case 0xC1F477: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:33 STA @VIRTUAL0A
    case 0xC1F479: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:34 STA @LOCAL00
    case 0xC1F47B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:35 LDA @VIRTUAL0A+2
    case 0xC1F47D: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:36 STA @LOCAL00+2
    case 0xC1F47F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F481: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F483: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F485: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F487: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:38 LDX #2
    case 0xC1F489: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:38 LDX #2
    // Overlapping static entry reached from 0xC1F489.
    case 0xC1F48B: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:39 LDA #0
    case 0xC1F48C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:39 LDA #0
    // Overlapping static entry reached from 0xC1F48C.
    case 0xC1F48E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:40 JSR UNKNOWN_C114B1
    case 0xC1F48F: cpu.execute_instruction<0x20>(0x001AE6, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:41 LDA GAME_STATE + game_state::sound_setting
    case 0xC1F492: cpu.execute_instruction<0xAD>(0x009B68, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:42 AND #$00FF
    case 0xC1F495: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC1F495.
    case 0xC1F497: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:43 BEQ @UNKNOWN0
    case 0xC1F498: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:44 AND #$00FF
    case 0xC1F49A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC1F49A.
    case 0xC1F49C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:45 TAX
    case 0xC1F49D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:46 DEX
    case 0xC1F49E: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:47 BRA @UNKNOWN1
    case 0xC1F49F: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:49 LDX #0
    case 0xC1F4A1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:49 LDX #0
    // Overlapping static entry reached from 0xC1F4A1.
    case 0xC1F4A3: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:51 TXA
    case 0xC1F4A4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:52 JSR UNKNOWN_C11887
    case 0xC1F4A5: cpu.execute_instruction<0x20>(0x002022, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:53 LDY @LOCAL04
    case 0xC1F4A8: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:54 BEQL @UNKNOWN5
    case 0xC1F4AA: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:54 BEQL @UNKNOWN5
    case 0xC1F4AC: cpu.execute_instruction<0x4C>(0x00F53B, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:55 LDA CURRENT_FOCUS_WINDOW
    case 0xC1F4AF: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:56 ASL
    case 0xC1F4B2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:57 TAX
    case 0xC1F4B3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:58 LDA OPEN_WINDOW_TABLE,X
    case 0xC1F4B4: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1F4B7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1F4B7.
    case 0xC1F4B9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1F4BA: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:60 TAX
    case 0xC1F4BE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:61 LDA WINDOW_STATS + window_stats::current_option,X
    case 0xC1F4BF: cpu.execute_instruction<0xBD>(0x0089ED, 3); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:62 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4C2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:62 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4C4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:62 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:62 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4C6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:62 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4C8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:62 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4C9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:62 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4CB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:62 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:63 CLC
    case 0xC1F4CD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:64 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1F4CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:64 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1F4CE.
    case 0xC1F4D0: cpu.execute_instruction<0x8D>(0x0084A8, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:65 TAY
    case 0xC1F4D1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:66 STY @LOCAL04
    case 0xC1F4D2: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:66 STY @LOCAL04
    // Overlapping static entry reached from 0xC1F4D0.
    case 0xC1F4D3: cpu.execute_instruction<0x1C>(0x0068AD, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:67 LDA GAME_STATE + game_state::sound_setting
    case 0xC1F4D4: cpu.execute_instruction<0xAD>(0x009B68, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:67 LDA GAME_STATE + game_state::sound_setting
    // Overlapping static entry reached from 0xC1F4D3.
    case 0xC1F4D6: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:68 AND #$00FF
    case 0xC1F4D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:68 AND #$00FF
    // Overlapping static entry reached from 0xC1F4D7.
    case 0xC1F4D9: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:69 TAX
    case 0xC1F4DA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:70 DEX
    case 0xC1F4DB: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:71 BRA @UNKNOWN4
    case 0xC1F4DC: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:73 LDA __BSS_START__ + menu_option::next,Y
    case 0xC1F4DE: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4E1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4E3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4E4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4E5: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4E7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4E8: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4EA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:74 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F4EB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:75 CLC
    case 0xC1F4EC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:76 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1F4ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:76 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1F4ED.
    case 0xC1F4EF: cpu.execute_instruction<0x8D>(0x0084A8, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:77 TAY
    case 0xC1F4F0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:78 STY @LOCAL04
    case 0xC1F4F1: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:78 STY @LOCAL04
    // Overlapping static entry reached from 0xC1F4EF.
    case 0xC1F4F2: cpu.execute_instruction<0x1C>(0x00D0CA, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:79 DEX
    case 0xC1F4F3: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:81 BNE @UNKNOWN3
    case 0xC1F4F4: cpu.execute_instruction<0xD0>(0x0000E8, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:81 BNE @UNKNOWN3
    // Overlapping static entry reached from 0xC1F4F2.
    case 0xC1F4F5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:82 LDA #6
    case 0xC1F4F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:82 LDA #6
    // Overlapping static entry reached from 0xC1F4F6.
    case 0xC1F4F8: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:83 JSR UNKNOWN_C10FEA
    case 0xC1F4F9: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:84 LDY @LOCAL04
    case 0xC1F4FC: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:85 LDA __BSS_START__ + menu_option::text_y,Y
    case 0xC1F4FE: cpu.execute_instruction<0xB9>(0x00000A, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:86 TAX
    case 0xC1F501: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:87 LDA __BSS_START__ + menu_option::text_x,Y
    case 0xC1F502: cpu.execute_instruction<0xB9>(0x000008, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:88 INC
    case 0xC1F505: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:89 JSR UNKNOWN_C438A5
    case 0xC1F506: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:90 LDY @LOCAL04
    case 0xC1F509: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:91 TYA
    case 0xC1F50B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:92 CLC
    case 0xC1F50C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:93 ADC #menu_option::label
    case 0xC1F50D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:93 ADC #menu_option::label
    // Overlapping static entry reached from 0xC1F50D.
    case 0xC1F50F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:94 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F510: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:94 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F512: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:94 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F513: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:94 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F515: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:94 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F516: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:94 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F518: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:95 REP #PROC_FLAGS::ACCUM8
    case 0xC1F51A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:96 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F51C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:96 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F51E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:96 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F520: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:96 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F522: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:97 LDA #$FFFF
    case 0xC1F524: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:97 LDA #$FFFF
    // Overlapping static entry reached from 0xC1F524.
    case 0xC1F526: cpu.execute_instruction<0xFF>(0x14DD20, 4); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:98 JSR PRINT_STRING
    case 0xC1F527: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:99 LDA #0
    case 0xC1F52A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:99 LDA #0
    // Overlapping static entry reached from 0xC1F52A.
    case 0xC1F52C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:100 JSR UNKNOWN_C10FEA
    case 0xC1F52D: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:101 LDA GAME_STATE + game_state::sound_setting
    case 0xC1F530: cpu.execute_instruction<0xAD>(0x009B68, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:102 AND #$00FF
    case 0xC1F533: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:102 AND #$00FF
    // Overlapping static entry reached from 0xC1F533.
    case 0xC1F535: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:103 TAX
    case 0xC1F536: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:104 STX @LOCAL02
    case 0xC1F537: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:105 BRA @UNKNOWN7
    case 0xC1F539: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:107 LDA #1
    case 0xC1F53B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:107 LDA #1
    // Overlapping static entry reached from 0xC1F53B.
    case 0xC1F53D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:108 JSR SELECTION_MENU
    case 0xC1F53E: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:109 TAX
    case 0xC1F541: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:110 STX @LOCAL02
    case 0xC1F542: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:111 BEQ @UNKNOWN6
    case 0xC1F544: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:112 TXA
    case 0xC1F546: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:113 SEP #PROC_FLAGS::ACCUM8
    case 0xC1F547: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:114 STA GAME_STATE + game_state::sound_setting
    case 0xC1F549: cpu.execute_instruction<0x8D>(0x009B68, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:116 REP #PROC_FLAGS::ACCUM8
    case 0xC1F54C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:117 LDA CURRENT_SAVE_SLOT
    case 0xC1F54E: cpu.execute_instruction<0xAD>(0x00B675, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:118 AND #$00FF
    case 0xC1F551: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:118 AND #$00FF
    // Overlapping static entry reached from 0xC1F551.
    case 0xC1F553: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:119 DEC
    case 0xC1F554: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:120 JSL SAVE_GAME_SLOT
    case 0xC1F555: cpu.execute_instruction<0x22>(0xC0F962, 4); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:122 LDX @LOCAL02
    case 0xC1F559: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/intro/file_select/open_sound_menu-jp.asm:123 TXA
    case 0xC1F55B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:124 END_C_FUNCTION
    case 0xC1F55C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/file_select/open_sound_menu-jp.asm:124 END_C_FUNCTION
    case 0xC1F55D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/file_select/open_text_speed_menu-jp.asm (source_named).
bool execute_introduction_file_select_open_text_speed_menu_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1F293: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:12 END_STACK_VARS
    case 0xC1F295: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:12 END_STACK_VARS
    case 0xC1F296: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:12 END_STACK_VARS
    case 0xC1F297: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:12 END_STACK_VARS
    case 0xC1F298: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC1F298.
    case 0xC1F29A: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:12 END_STACK_VARS
    case 0xC1F29B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:12 END_STACK_VARS
    case 0xC1F29C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:13 TAY
    case 0xC1F29D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:14 STY @LOCAL04
    case 0xC1F29E: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:15 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_TEXT_SPEED
    case 0xC1F2A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:15 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_TEXT_SPEED
    // Overlapping static entry reached from 0xC1F2A0.
    case 0xC1F2A2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:15 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_TEXT_SPEED
    case 0xC1F2A3: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:16 JSR SET_INSTANT_PRINTING
    case 0xC1F2A6: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    case 0xC1F2A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EA, 2); else cpu.execute_instruction<0xA9>(0x0094EA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    // Overlapping static entry reached from 0xC1F2A9.
    case 0xC1F2AB: cpu.execute_instruction<0x94>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    case 0xC1F2AC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    // Overlapping static entry reached from 0xC1F2AB.
    case 0xC1F2AD: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    case 0xC1F2AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    // Overlapping static entry reached from 0xC1F2AE.
    case 0xC1F2B0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:17 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    case 0xC1F2B1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:18 LDA #9
    case 0xC1F2B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:18 LDA #9
    // Overlapping static entry reached from 0xC1F2B3.
    case 0xC1F2B5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:19 JSR PRINT_STRING
    case 0xC1F2B6: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1F2B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AE, 2); else cpu.execute_instruction<0xA9>(0x0094AE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F2B9.
    case 0xC1F2BB: cpu.execute_instruction<0x94>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1F2BC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F2BB.
    case 0xC1F2BD: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1F2BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F2BD.
    case 0xC1F2BF: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F2BE.
    case 0xC1F2C0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:20 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1F2C1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:21 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC1F2C3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:21 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC1F2C5: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:21 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC1F2C7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:21 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC1F2C9: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1F2CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1F2CB.
    case 0xC1F2CD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1F2CE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1F2D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1F2D0.
    case 0xC1F2D2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1F2D3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F2D5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F2D7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F2D9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F2DB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:24 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC1F2DD: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:24 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC1F2DF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:24 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC1F2E1: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:24 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC1F2E3: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:25 LDX #1
    case 0xC1F2E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:25 LDX #1
    // Overlapping static entry reached from 0xC1F2E5.
    case 0xC1F2E7: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:26 LDA #0
    case 0xC1F2E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:26 LDA #0
    // Overlapping static entry reached from 0xC1F2E8.
    case 0xC1F2EA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:27 JSR UNKNOWN_C114B1
    case 0xC1F2EB: cpu.execute_instruction<0x20>(0x001AE6, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:28 LDA #TEXT_SPEED_STRING_LENGTH
    case 0xC1F2EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:28 LDA #TEXT_SPEED_STRING_LENGTH
    // Overlapping static entry reached from 0xC1F2EE.
    case 0xC1F2F0: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:29 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC1F2F1: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:29 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC1F2F3: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:29 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC1F2F5: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:29 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC1F2F7: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:30 CLC
    case 0xC1F2F9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:31 ADC @VIRTUAL06
    case 0xC1F2FA: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:32 STA @VIRTUAL06
    case 0xC1F2FC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:33 STA @LOCAL00
    case 0xC1F2FE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:34 LDA @VIRTUAL06+2
    case 0xC1F300: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:35 STA @LOCAL00+2
    case 0xC1F302: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:36 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC1F304: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:36 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC1F306: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:36 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC1F308: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:36 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC1F30A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:37 LDX #2
    case 0xC1F30C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:37 LDX #2
    // Overlapping static entry reached from 0xC1F30C.
    case 0xC1F30E: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:38 LDA #0
    case 0xC1F30F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:38 LDA #0
    // Overlapping static entry reached from 0xC1F30F.
    case 0xC1F311: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:39 JSR UNKNOWN_C114B1
    case 0xC1F312: cpu.execute_instruction<0x20>(0x001AE6, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:40 LDA #TEXT_SPEED_STRING_LENGTH*2
    case 0xC1F315: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:40 LDA #TEXT_SPEED_STRING_LENGTH*2
    // Overlapping static entry reached from 0xC1F315.
    case 0xC1F317: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:41 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC1F318: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:41 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC1F31A: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:41 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC1F31C: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:41 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC1F31E: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:42 CLC
    case 0xC1F320: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:43 ADC @VIRTUAL06
    case 0xC1F321: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:44 STA @VIRTUAL06
    case 0xC1F323: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:45 STA @LOCAL00
    case 0xC1F325: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:46 LDA @VIRTUAL06+2
    case 0xC1F327: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:47 STA @LOCAL00+2
    case 0xC1F329: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:48 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC1F32B: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:48 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC1F32D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:48 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC1F32F: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:48 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC1F331: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:49 LDX #3
    case 0xC1F333: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:49 LDX #3
    // Overlapping static entry reached from 0xC1F333.
    case 0xC1F335: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:50 LDA #0
    case 0xC1F336: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:50 LDA #0
    // Overlapping static entry reached from 0xC1F336.
    case 0xC1F338: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:51 JSR UNKNOWN_C114B1
    case 0xC1F339: cpu.execute_instruction<0x20>(0x001AE6, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:52 LDA GAME_STATE+game_state::text_speed
    case 0xC1F33C: cpu.execute_instruction<0xAD>(0x009B67, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:53 AND #$00FF
    case 0xC1F33F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC1F33F.
    case 0xC1F341: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:54 BEQ @UNKNOWN0
    case 0xC1F342: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:55 AND #$00FF
    case 0xC1F344: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC1F344.
    case 0xC1F346: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:56 TAX
    case 0xC1F347: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:57 DEX
    case 0xC1F348: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:58 BRA @UNKNOWN1
    case 0xC1F349: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:60 LDX #1
    case 0xC1F34B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:60 LDX #1
    // Overlapping static entry reached from 0xC1F34B.
    case 0xC1F34D: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:62 TXA
    case 0xC1F34E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:63 JSR UNKNOWN_C11887
    case 0xC1F34F: cpu.execute_instruction<0x20>(0x002022, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:64 LDY @LOCAL04
    case 0xC1F352: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:65 BEQL @UNKNOWN5
    case 0xC1F354: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:65 BEQL @UNKNOWN5
    case 0xC1F356: cpu.execute_instruction<0x4C>(0x00F3E5, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:66 LDA CURRENT_FOCUS_WINDOW
    case 0xC1F359: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:67 ASL
    case 0xC1F35C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:68 TAX
    case 0xC1F35D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:69 LDA OPEN_WINDOW_TABLE,X
    case 0xC1F35E: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:70 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1F361: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:70 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1F361.
    case 0xC1F363: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:70 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1F364: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:71 TAX
    case 0xC1F368: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:72 LDA WINDOW_STATS + window_stats::current_option,X
    case 0xC1F369: cpu.execute_instruction<0xBD>(0x0089ED, 3); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:73 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F36C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:73 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F36E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:73 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F36F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:73 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F370: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:73 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F372: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:73 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F373: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:73 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F375: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:73 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F376: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:74 CLC
    case 0xC1F377: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:75 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1F378: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:75 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1F378.
    case 0xC1F37A: cpu.execute_instruction<0x8D>(0x0084A8, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:76 TAY
    case 0xC1F37B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:77 STY @LOCAL04
    case 0xC1F37C: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:77 STY @LOCAL04
    // Overlapping static entry reached from 0xC1F37A.
    case 0xC1F37D: cpu.execute_instruction<0x1C>(0x0067AD, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:78 LDA GAME_STATE + game_state::text_speed
    case 0xC1F37E: cpu.execute_instruction<0xAD>(0x009B67, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:78 LDA GAME_STATE + game_state::text_speed
    // Overlapping static entry reached from 0xC1F37D.
    case 0xC1F380: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:79 AND #$00FF
    case 0xC1F381: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC1F381.
    case 0xC1F383: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:80 TAX
    case 0xC1F384: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:81 DEX
    case 0xC1F385: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:82 BRA @UNKNOWN4
    case 0xC1F386: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:84 LDA __BSS_START__ + menu_option::next,Y
    case 0xC1F388: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:85 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F38B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:85 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F38D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:85 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F38E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:85 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F38F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:85 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F391: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:85 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F392: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:85 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F394: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:85 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1F395: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:86 CLC
    case 0xC1F396: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:87 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1F397: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:87 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1F397.
    case 0xC1F399: cpu.execute_instruction<0x8D>(0x0084A8, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:88 TAY
    case 0xC1F39A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:89 STY @LOCAL04
    case 0xC1F39B: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:89 STY @LOCAL04
    // Overlapping static entry reached from 0xC1F399.
    case 0xC1F39C: cpu.execute_instruction<0x1C>(0x00D0CA, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:90 DEX
    case 0xC1F39D: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:92 BNE @UNKNOWN3
    case 0xC1F39E: cpu.execute_instruction<0xD0>(0x0000E8, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:92 BNE @UNKNOWN3
    // Overlapping static entry reached from 0xC1F39C.
    case 0xC1F39F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:93 LDA #6
    case 0xC1F3A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:93 LDA #6
    // Overlapping static entry reached from 0xC1F3A0.
    case 0xC1F3A2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:94 JSR UNKNOWN_C10FEA
    case 0xC1F3A3: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:95 LDY @LOCAL04
    case 0xC1F3A6: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:96 LDA __BSS_START__ + menu_option::text_y,Y
    case 0xC1F3A8: cpu.execute_instruction<0xB9>(0x00000A, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:97 TAX
    case 0xC1F3AB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:98 LDA __BSS_START__ + menu_option::text_x,Y
    case 0xC1F3AC: cpu.execute_instruction<0xB9>(0x000008, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:99 INC
    case 0xC1F3AF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:100 JSR UNKNOWN_C438A5
    case 0xC1F3B0: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:101 LDY @LOCAL04
    case 0xC1F3B3: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:102 TYA
    case 0xC1F3B5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:103 CLC
    case 0xC1F3B6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:104 ADC #menu_option::label
    case 0xC1F3B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:104 ADC #menu_option::label
    // Overlapping static entry reached from 0xC1F3B7.
    case 0xC1F3B9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:105 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F3BA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:105 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F3BC: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:105 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F3BD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:105 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F3BF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:105 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F3C0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:105 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F3C2: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:106 REP #PROC_FLAGS::ACCUM8
    case 0xC1F3C4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:107 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F3C6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:107 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F3C8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:107 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F3CA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:107 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F3CC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:108 LDA #$FFFF
    case 0xC1F3CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:108 LDA #$FFFF
    // Overlapping static entry reached from 0xC1F3CE.
    case 0xC1F3D0: cpu.execute_instruction<0xFF>(0x14DD20, 4); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:109 JSR PRINT_STRING
    case 0xC1F3D1: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:110 LDA #0
    case 0xC1F3D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:110 LDA #0
    // Overlapping static entry reached from 0xC1F3D4.
    case 0xC1F3D6: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:111 JSR UNKNOWN_C10FEA
    case 0xC1F3D7: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:112 LDA GAME_STATE + game_state::text_speed
    case 0xC1F3DA: cpu.execute_instruction<0xAD>(0x009B67, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:113 AND #$00FF
    case 0xC1F3DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:113 AND #$00FF
    // Overlapping static entry reached from 0xC1F3DD.
    case 0xC1F3DF: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:114 TAX
    case 0xC1F3E0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:115 STX @LOCAL02
    case 0xC1F3E1: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:116 BRA @UNKNOWN6
    case 0xC1F3E3: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:118 LDA #1
    case 0xC1F3E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:118 LDA #1
    // Overlapping static entry reached from 0xC1F3E5.
    case 0xC1F3E7: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:119 JSR SELECTION_MENU
    case 0xC1F3E8: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:120 TAX
    case 0xC1F3EB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:121 STX @LOCAL02
    case 0xC1F3EC: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:122 BEQ @UNKNOWN6
    case 0xC1F3EE: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:123 TXA
    case 0xC1F3F0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:124 SEP #PROC_FLAGS::ACCUM8
    case 0xC1F3F1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:125 STA GAME_STATE + game_state::text_speed
    case 0xC1F3F3: cpu.execute_instruction<0x8D>(0x009B67, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:127 REP #PROC_FLAGS::ACCUM8
    case 0xC1F3F6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:128 LDA CURRENT_SAVE_SLOT
    case 0xC1F3F8: cpu.execute_instruction<0xAD>(0x00B675, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:129 AND #$00FF
    case 0xC1F3FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:129 AND #$00FF
    // Overlapping static entry reached from 0xC1F3FB.
    case 0xC1F3FD: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:130 DEC
    case 0xC1F3FE: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:131 JSL SAVE_GAME_SLOT
    case 0xC1F3FF: cpu.execute_instruction<0x22>(0xC0F962, 4); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:133 LDX @LOCAL02
    case 0xC1F403: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/intro/file_select/open_text_speed_menu-jp.asm:134 TXA
    case 0xC1F405: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:135 END_C_FUNCTION
    case 0xC1F406: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/file_select/open_text_speed_menu-jp.asm:135 END_C_FUNCTION
    case 0xC1F407: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/file_select_menu-jp.asm (source_named).
bool execute_introduction_file_select_menu_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/file_select_menu-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1ECD9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/file_select_menu-jp.asm:11 END_STACK_VARS
    case 0xC1ECDB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/intro/file_select_menu-jp.asm:11 END_STACK_VARS
    case 0xC1ECDC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/file_select_menu-jp.asm:11 END_STACK_VARS
    case 0xC1ECDD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select_menu-jp.asm:11 END_STACK_VARS
    case 0xC1ECDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select_menu-jp.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1ECDE.
    case 0xC1ECE0: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/file_select_menu-jp.asm:11 END_STACK_VARS
    case 0xC1ECE1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/intro/file_select_menu-jp.asm:11 END_STACK_VARS
    case 0xC1ECE2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:12 STA @VIRTUAL04
    case 0xC1ECE3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/intro/file_select_menu-jp.asm:12 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC1ECE0.
    case 0xC1ECE4: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/intro/file_select_menu-jp.asm:13 LDA #WINDOW::FILE_SELECT_MAIN
    case 0xC1ECE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x000013, 3); return true;
    // src/intro/file_select_menu-jp.asm:13 LDA #WINDOW::FILE_SELECT_MAIN
    // Overlapping static entry reached from 0xC1ECE4.
    case 0xC1ECE6: cpu.execute_instruction<0x13>(0x000000, 2); return true;
    // src/intro/file_select_menu-jp.asm:13 LDA #WINDOW::FILE_SELECT_MAIN
    // Overlapping static entry reached from 0xC1ECE5.
    case 0xC1ECE7: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu-jp.asm:14 JSR CREATE_WINDOW
    case 0xC1ECE8: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/intro/file_select_menu-jp.asm:15 LDY #0
    case 0xC1ECEB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/file_select_menu-jp.asm:15 LDY #0
    // Overlapping static entry reached from 0xC1ECEB.
    case 0xC1ECED: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/intro/file_select_menu-jp.asm:16 STY @LOCAL03
    case 0xC1ECEE: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/intro/file_select_menu-jp.asm:17 JMP @UNKNOWN14
    case 0xC1ECF0: cpu.execute_instruction<0x4C>(0x00EEA5, 3); return true;
    // src/intro/file_select_menu-jp.asm:19 TYA
    case 0xC1ECF3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:20 JSL LOAD_GAME_SLOT
    case 0xC1ECF4: cpu.execute_instruction<0x22>(0xC0F97D, 4); return true;
    // src/intro/file_select_menu-jp.asm:21 LDA GAME_STATE + game_state::favourite_thing + 1
    case 0xC1ECF8: cpu.execute_instruction<0xAD>(0x009ADA, 3); return true;
    // src/intro/file_select_menu-jp.asm:22 AND #$00FF
    case 0xC1ECFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select_menu-jp.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC1ECFB.
    case 0xC1ECFD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/file_select_menu-jp.asm:23 BEQL @UNKNOWN8
    case 0xC1ECFE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/file_select_menu-jp.asm:23 BEQL @UNKNOWN8
    case 0xC1ED00: cpu.execute_instruction<0x4C>(0x00EE2E, 3); return true;
    // src/intro/file_select_menu-jp.asm:24 LDY @LOCAL03
    case 0xC1ED03: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/intro/file_select_menu-jp.asm:25 TYA
    case 0xC1ED05: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ED06: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select_menu-jp.asm:27 CLC
    case 0xC1ED08: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:28 ADC #CHAR::ONE
    case 0xC1ED09: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000031, 2); else cpu.execute_instruction<0x69>(0x008D31, 3); return true;
    // src/intro/file_select_menu-jp.asm:29 STA TEMPORARY_TEXT_BUFFER
    case 0xC1ED0B: cpu.execute_instruction<0x8D>(0x009F4A, 3); return true;
    // src/intro/file_select_menu-jp.asm:29 STA TEMPORARY_TEXT_BUFFER
    // Overlapping static entry reached from 0xC1ED09.
    case 0xC1ED0C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:29 STA TEMPORARY_TEXT_BUFFER
    // Overlapping static entry reached from 0xC1ED0C.
    case 0xC1ED0D: cpu.execute_instruction<0x9F>(0x8D5BA9, 4); return true;
    // src/intro/file_select_menu-jp.asm:30 LDA #CHAR::COLON
    case 0xC1ED0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005B, 2); else cpu.execute_instruction<0xA9>(0x008D5B, 3); return true;
    // src/intro/file_select_menu-jp.asm:31 STA TEMPORARY_TEXT_BUFFER + 1
    case 0xC1ED10: cpu.execute_instruction<0x8D>(0x009F4B, 3); return true;
    // src/intro/file_select_menu-jp.asm:31 STA TEMPORARY_TEXT_BUFFER + 1
    // Overlapping static entry reached from 0xC1ED0E.
    case 0xC1ED11: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:31 STA TEMPORARY_TEXT_BUFFER + 1
    // Overlapping static entry reached from 0xC1ED11.
    case 0xC1ED12: cpu.execute_instruction<0x9F>(0x8D20A9, 4); return true;
    // src/intro/file_select_menu-jp.asm:32 LDA #CHAR::SPACE
    case 0xC1ED13: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x008D20, 3); return true;
    // src/intro/file_select_menu-jp.asm:33 STA TEMPORARY_TEXT_BUFFER + 2
    case 0xC1ED15: cpu.execute_instruction<0x8D>(0x009F4C, 3); return true;
    // src/intro/file_select_menu-jp.asm:33 STA TEMPORARY_TEXT_BUFFER + 2
    // Overlapping static entry reached from 0xC1ED13.
    case 0xC1ED16: cpu.execute_instruction<0x4C>(0x00A29F, 3); return true;
    // src/intro/file_select_menu-jp.asm:34 LDX #0
    case 0xC1ED18: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/file_select_menu-jp.asm:34 LDX #0
    // Overlapping static entry reached from 0xC1ED18.
    case 0xC1ED1A: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/intro/file_select_menu-jp.asm:35 BRA @UNKNOWN4
    case 0xC1ED1B: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/intro/file_select_menu-jp.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ED1D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select_menu-jp.asm:38 STA TEMPORARY_TEXT_BUFFER + 3,X
    case 0xC1ED1F: cpu.execute_instruction<0x9D>(0x009F4D, 3); return true;
    // src/intro/file_select_menu-jp.asm:39 INX
    case 0xC1ED22: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC1ED23: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/file_select_menu-jp.asm:42 LDA PARTY_CHARACTERS + char_struct::name,X
    case 0xC1ED25: cpu.execute_instruction<0xBD>(0x009C7F, 3); return true;
    // src/intro/file_select_menu-jp.asm:43 AND #$00FF
    case 0xC1ED28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select_menu-jp.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC1ED28.
    case 0xC1ED2A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu-jp.asm:44 BEQ @UNKNOWN3
    case 0xC1ED2B: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/intro/file_select_menu-jp.asm:45 CPX #.SIZEOF(char_struct::name)
    case 0xC1ED2D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/intro/file_select_menu-jp.asm:45 CPX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1ED2D.
    case 0xC1ED2F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/intro/file_select_menu-jp.asm:46 BCC @UNKNOWN1
    case 0xC1ED30: cpu.execute_instruction<0x90>(0x0000EB, 2); return true;
    // src/intro/file_select_menu-jp.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ED32: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select_menu-jp.asm:49 LDA #CHAR::SPACE
    case 0xC1ED34: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x009D20, 3); return true;
    // src/intro/file_select_menu-jp.asm:50 STA TEMPORARY_TEXT_BUFFER + 3,X
    case 0xC1ED36: cpu.execute_instruction<0x9D>(0x009F4D, 3); return true;
    // src/intro/file_select_menu-jp.asm:50 STA TEMPORARY_TEXT_BUFFER + 3,X
    // Overlapping static entry reached from 0xC1ED34.
    case 0xC1ED37: cpu.execute_instruction<0x4D>(0x00E89F, 3); return true;
    // src/intro/file_select_menu-jp.asm:51 INX
    case 0xC1ED39: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:53 CPX #.SIZEOF(char_struct::name)
    case 0xC1ED3A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/intro/file_select_menu-jp.asm:53 CPX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1ED3A.
    case 0xC1ED3C: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/intro/file_select_menu-jp.asm:54 BCC @UNKNOWN2
    case 0xC1ED3D: cpu.execute_instruction<0x90>(0x0000E4, 2); return true;
    // src/intro/file_select_menu-jp.asm:56 REP #PROC_FLAGS::ACCUM8
    case 0xC1ED3F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu-jp.asm:57 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 7, @VIRTUAL06
    case 0xC1ED41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000051, 2); else cpu.execute_instruction<0xA9>(0x009F51, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu-jp.asm:57 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 7, @VIRTUAL06
    // Overlapping static entry reached from 0xC1ED41.
    case 0xC1ED43: cpu.execute_instruction<0x9F>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:57 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 7, @VIRTUAL06
    case 0xC1ED44: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu-jp.asm:57 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 7, @VIRTUAL06
    case 0xC1ED46: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu-jp.asm:57 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 7, @VIRTUAL06
    case 0xC1ED47: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu-jp.asm:57 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 7, @VIRTUAL06
    case 0xC1ED49: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:57 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 7, @VIRTUAL06
    case 0xC1ED4A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu-jp.asm:57 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 7, @VIRTUAL06
    case 0xC1ED4C: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/file_select_menu-jp.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC1ED4E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu-jp.asm:59 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ED50: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:59 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ED52: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu-jp.asm:59 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ED54: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu-jp.asm:59 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ED56: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:60 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    case 0xC1ED58: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A3, 2); else cpu.execute_instruction<0xA9>(0x0094A3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:60 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    // Overlapping static entry reached from 0xC1ED58.
    case 0xC1ED5A: cpu.execute_instruction<0x94>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu-jp.asm:60 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    case 0xC1ED5B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu-jp.asm:60 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    // Overlapping static entry reached from 0xC1ED5A.
    case 0xC1ED5C: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:60 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    case 0xC1ED5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:60 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    // Overlapping static entry reached from 0xC1ED5C.
    case 0xC1ED5E: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:60 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    // Overlapping static entry reached from 0xC1ED5D.
    case 0xC1ED5F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu-jp.asm:60 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    case 0xC1ED60: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select_menu-jp.asm:61 LDA #FILE_SELECT_TEXT_LEVEL_LENGTH
    case 0xC1ED62: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/intro/file_select_menu-jp.asm:61 LDA #FILE_SELECT_TEXT_LEVEL_LENGTH
    // Overlapping static entry reached from 0xC1ED62.
    case 0xC1ED64: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu-jp.asm:62 JSL MEMCPY24
    case 0xC1ED65: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // src/intro/file_select_menu-jp.asm:63 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ED69: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/intro/file_select_menu-jp.asm:64 MOVE_INT832 .LOWORD(PARTY_CHARACTERS) + (PARTY_MEMBER::NESS - 1) * .SIZEOF(char_struct) + char_struct::level, @VIRTUAL06
    case 0xC1ED6B: cpu.execute_instruction<0xAD>(0x009C83, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:64 MOVE_INT832 .LOWORD(PARTY_CHARACTERS) + (PARTY_MEMBER::NESS - 1) * .SIZEOF(char_struct) + char_struct::level, @VIRTUAL06
    case 0xC1ED6E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/intro/file_select_menu-jp.asm:64 MOVE_INT832 .LOWORD(PARTY_CHARACTERS) + (PARTY_MEMBER::NESS - 1) * .SIZEOF(char_struct) + char_struct::level, @VIRTUAL06
    case 0xC1ED70: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/intro/file_select_menu-jp.asm:64 MOVE_INT832 .LOWORD(PARTY_CHARACTERS) + (PARTY_MEMBER::NESS - 1) * .SIZEOF(char_struct) + char_struct::level, @VIRTUAL06
    case 0xC1ED72: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/intro/file_select_menu-jp.asm:64 MOVE_INT832 .LOWORD(PARTY_CHARACTERS) + (PARTY_MEMBER::NESS - 1) * .SIZEOF(char_struct) + char_struct::level, @VIRTUAL06
    case 0xC1ED74: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/file_select_menu-jp.asm:65 REP #PROC_FLAGS::ACCUM8
    case 0xC1ED76: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu-jp.asm:66 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ED78: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:66 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ED7A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu-jp.asm:66 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ED7C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu-jp.asm:66 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1ED7E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu-jp.asm:67 JSR UNKNOWN_C10D7C
    case 0xC1ED80: cpu.execute_instruction<0x20>(0x0012CA, 3); return true;
    // src/intro/file_select_menu-jp.asm:68 TAX
    case 0xC1ED83: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:69 CPX #1
    case 0xC1ED84: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/intro/file_select_menu-jp.asm:69 CPX #1
    // Overlapping static entry reached from 0xC1ED84.
    case 0xC1ED86: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu-jp.asm:70 BNE @UNKNOWN6
    case 0xC1ED87: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/intro/file_select_menu-jp.asm:71 LDA #CHAR::SPACE
    case 0xC1ED89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/intro/file_select_menu-jp.asm:71 LDA #CHAR::SPACE
    // Overlapping static entry reached from 0xC1ED89.
    case 0xC1ED8B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/intro/file_select_menu-jp.asm:72 BRA @UNKNOWN6_
    case 0xC1ED8C: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/intro/file_select_menu-jp.asm:74 STX @VIRTUAL02
    case 0xC1ED8E: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/intro/file_select_menu-jp.asm:75 LDA #7
    case 0xC1ED90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/intro/file_select_menu-jp.asm:75 LDA #7
    // Overlapping static entry reached from 0xC1ED90.
    case 0xC1ED92: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/intro/file_select_menu-jp.asm:76 SEC
    case 0xC1ED93: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:77 SBC @VIRTUAL02
    case 0xC1ED94: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/intro/file_select_menu-jp.asm:78 TAX
    case 0xC1ED96: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:79 LDA NUMBER_TEXT_BUFFER,X
    case 0xC1ED97: cpu.execute_instruction<0xBD>(0x008C98, 3); return true;
    // src/intro/file_select_menu-jp.asm:80 AND #$00FF
    case 0xC1ED9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select_menu-jp.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC1ED9A.
    case 0xC1ED9C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/intro/file_select_menu-jp.asm:81 CLC
    case 0xC1ED9D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:82 ADC #CHAR::ZERO
    case 0xC1ED9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // src/intro/file_select_menu-jp.asm:82 ADC #CHAR::ZERO
    // Overlapping static entry reached from 0xC1ED9E.
    case 0xC1EDA0: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/intro/file_select_menu-jp.asm:84 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EDA1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select_menu-jp.asm:85 STA TEMPORARY_TEXT_BUFFER + 12
    case 0xC1EDA3: cpu.execute_instruction<0x8D>(0x009F56, 3); return true;
    // src/intro/file_select_menu-jp.asm:86 LDA NUMBER_TEXT_BUFFER + 6
    case 0xC1EDA6: cpu.execute_instruction<0xAD>(0x008C9E, 3); return true;
    // src/intro/file_select_menu-jp.asm:87 CLC
    case 0xC1EDA9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:88 ADC #CHAR::ZERO
    case 0xC1EDAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x008D30, 3); return true;
    // src/intro/file_select_menu-jp.asm:89 STA TEMPORARY_TEXT_BUFFER + 13
    case 0xC1EDAC: cpu.execute_instruction<0x8D>(0x009F57, 3); return true;
    // src/intro/file_select_menu-jp.asm:89 STA TEMPORARY_TEXT_BUFFER + 13
    // Overlapping static entry reached from 0xC1EDAA.
    case 0xC1EDAD: cpu.execute_instruction<0x57>(0x00009F, 2); return true;
    // src/intro/file_select_menu-jp.asm:90 REP #PROC_FLAGS::ACCUM8
    case 0xC1EDAF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu-jp.asm:91 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 14, @VIRTUAL06
    case 0xC1EDB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000058, 2); else cpu.execute_instruction<0xA9>(0x009F58, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu-jp.asm:91 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 14, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EDB1.
    case 0xC1EDB3: cpu.execute_instruction<0x9F>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:91 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 14, @VIRTUAL06
    case 0xC1EDB4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu-jp.asm:91 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 14, @VIRTUAL06
    case 0xC1EDB6: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu-jp.asm:91 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 14, @VIRTUAL06
    case 0xC1EDB7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu-jp.asm:91 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 14, @VIRTUAL06
    case 0xC1EDB9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:91 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 14, @VIRTUAL06
    case 0xC1EDBA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu-jp.asm:91 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 14, @VIRTUAL06
    case 0xC1EDBC: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/file_select_menu-jp.asm:92 REP #PROC_FLAGS::ACCUM8
    case 0xC1EDBE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu-jp.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EDC0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EDC2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu-jp.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EDC4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu-jp.asm:93 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EDC6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:95 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    case 0xC1EDC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A8, 2); else cpu.execute_instruction<0xA9>(0x0094A8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:95 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    // Overlapping static entry reached from 0xC1EDC8.
    case 0xC1EDCA: cpu.execute_instruction<0x94>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu-jp.asm:95 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    case 0xC1EDCB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu-jp.asm:95 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    // Overlapping static entry reached from 0xC1EDCA.
    case 0xC1EDCC: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:95 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    case 0xC1EDCD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:95 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    // Overlapping static entry reached from 0xC1EDCC.
    case 0xC1EDCE: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:95 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    // Overlapping static entry reached from 0xC1EDCD.
    case 0xC1EDCF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu-jp.asm:95 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    case 0xC1EDD0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select_menu-jp.asm:96 LDA #FILE_SELECT_TEXT_TEXT_SPEED_LENGTH
    case 0xC1EDD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/intro/file_select_menu-jp.asm:96 LDA #FILE_SELECT_TEXT_TEXT_SPEED_LENGTH
    // Overlapping static entry reached from 0xC1EDD2.
    case 0xC1EDD4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu-jp.asm:97 JSL MEMCPY24
    case 0xC1EDD5: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu-jp.asm:98 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 20, @VIRTUAL06
    case 0xC1EDD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005E, 2); else cpu.execute_instruction<0xA9>(0x009F5E, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu-jp.asm:98 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 20, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EDD9.
    case 0xC1EDDB: cpu.execute_instruction<0x9F>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:98 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 20, @VIRTUAL06
    case 0xC1EDDC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu-jp.asm:98 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 20, @VIRTUAL06
    case 0xC1EDDE: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu-jp.asm:98 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 20, @VIRTUAL06
    case 0xC1EDDF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu-jp.asm:98 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 20, @VIRTUAL06
    case 0xC1EDE1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:98 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 20, @VIRTUAL06
    case 0xC1EDE2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu-jp.asm:98 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 20, @VIRTUAL06
    case 0xC1EDE4: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/file_select_menu-jp.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC1EDE6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu-jp.asm:100 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EDE8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:100 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EDEA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu-jp.asm:100 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EDEC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu-jp.asm:100 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EDEE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:101 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1EDF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AE, 2); else cpu.execute_instruction<0xA9>(0x0094AE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:101 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EDF0.
    case 0xC1EDF2: cpu.execute_instruction<0x94>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu-jp.asm:101 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1EDF3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu-jp.asm:101 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EDF2.
    case 0xC1EDF4: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:101 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1EDF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:101 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EDF4.
    case 0xC1EDF6: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:101 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EDF5.
    case 0xC1EDF7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu-jp.asm:101 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1EDF8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/intro/file_select_menu-jp.asm:102 LDA GAME_STATE + game_state::text_speed
    case 0xC1EDFA: cpu.execute_instruction<0xAD>(0x009B67, 3); return true;
    // src/intro/file_select_menu-jp.asm:103 AND #$00FF
    case 0xC1EDFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select_menu-jp.asm:103 AND #$00FF
    // Overlapping static entry reached from 0xC1EDFD.
    case 0xC1EDFF: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/intro/file_select_menu-jp.asm:104 DEC
    case 0xC1EE00: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/intro/file_select_menu-jp.asm:105 OPTIMIZED_MULT @VIRTUAL04, TEXT_SPEED_STRING_LENGTH
    case 0xC1EE01: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/intro/file_select_menu-jp.asm:105 OPTIMIZED_MULT @VIRTUAL04, TEXT_SPEED_STRING_LENGTH
    case 0xC1EE02: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:106 CLC
    case 0xC1EE03: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:107 ADC @VIRTUAL06
    case 0xC1EE04: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/intro/file_select_menu-jp.asm:108 STA @VIRTUAL06
    case 0xC1EE06: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/intro/file_select_menu-jp.asm:109 STA @LOCAL01
    case 0xC1EE08: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/intro/file_select_menu-jp.asm:110 LDA @VIRTUAL06+2
    case 0xC1EE0A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/intro/file_select_menu-jp.asm:111 STA @LOCAL01+2
    case 0xC1EE0C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select_menu-jp.asm:112 LDA #TEXT_SPEED_STRING_LENGTH
    case 0xC1EE0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/intro/file_select_menu-jp.asm:112 LDA #TEXT_SPEED_STRING_LENGTH
    // Overlapping static entry reached from 0xC1EE0E.
    case 0xC1EE10: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu-jp.asm:113 JSL MEMCPY24
    case 0xC1EE11: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // src/intro/file_select_menu-jp.asm:114 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EE15: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select_menu-jp.asm:115 LDA #1
    case 0xC1EE17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A401, 3); return true;
    // src/intro/file_select_menu-jp.asm:116 LDY @LOCAL03
    case 0xC1EE19: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/intro/file_select_menu-jp.asm:116 LDY @LOCAL03
    // Overlapping static entry reached from 0xC1EE17.
    case 0xC1EE1A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:117 STA SAVE_FILES_PRESENT,Y
    case 0xC1EE1B: cpu.execute_instruction<0x99>(0x00B672, 3); return true;
    // src/intro/file_select_menu-jp.asm:118 REP #PROC_FLAGS::ACCUM8
    case 0xC1EE1E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/file_select_menu-jp.asm:119 LDA GAME_STATE + game_state::text_flavour
    case 0xC1EE20: cpu.execute_instruction<0xAD>(0x009C7E, 3); return true;
    // src/intro/file_select_menu-jp.asm:120 AND #$00FF
    case 0xC1EE23: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select_menu-jp.asm:120 AND #$00FF
    // Overlapping static entry reached from 0xC1EE23.
    case 0xC1EE25: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/intro/file_select_menu-jp.asm:121 XBA
    case 0xC1EE26: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:122 AND #$FF00
    case 0xC1EE27: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/intro/file_select_menu-jp.asm:122 AND #$FF00
    // Overlapping static entry reached from 0xC1EE27.
    case 0xC1EE29: cpu.execute_instruction<0xFF>(0x801685, 4); return true;
    // src/intro/file_select_menu-jp.asm:123 STA @LOCAL02
    case 0xC1EE2A: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/intro/file_select_menu-jp.asm:124 BRA @UNKNOWN7
    case 0xC1EE2C: cpu.execute_instruction<0x80>(0x000047, 2); return true;
    // src/intro/file_select_menu-jp.asm:124 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC1EE29.
    case 0xC1EE2D: cpu.execute_instruction<0x47>(0x0000A4, 2); return true;
    // src/intro/file_select_menu-jp.asm:126 LDY @LOCAL03
    case 0xC1EE2E: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/intro/file_select_menu-jp.asm:126 LDY @LOCAL03
    // Overlapping static entry reached from 0xC1EE2D.
    case 0xC1EE2F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:127 TYA
    case 0xC1EE30: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:128 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EE31: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select_menu-jp.asm:129 CLC
    case 0xC1EE33: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:130 ADC #CHAR::ONE
    case 0xC1EE34: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000031, 2); else cpu.execute_instruction<0x69>(0x008D31, 3); return true;
    // src/intro/file_select_menu-jp.asm:131 STA TEMPORARY_TEXT_BUFFER
    case 0xC1EE36: cpu.execute_instruction<0x8D>(0x009F4A, 3); return true;
    // src/intro/file_select_menu-jp.asm:131 STA TEMPORARY_TEXT_BUFFER
    // Overlapping static entry reached from 0xC1EE34.
    case 0xC1EE37: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:131 STA TEMPORARY_TEXT_BUFFER
    // Overlapping static entry reached from 0xC1EE37.
    case 0xC1EE38: cpu.execute_instruction<0x9F>(0xA920C2, 4); return true;
    // src/intro/file_select_menu-jp.asm:132 REP #PROC_FLAGS::ACCUM8
    case 0xC1EE39: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu-jp.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EE3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004B, 2); else cpu.execute_instruction<0xA9>(0x009F4B, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu-jp.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EE38.
    case 0xC1EE3C: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu-jp.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EE3B.
    case 0xC1EE3D: cpu.execute_instruction<0x9F>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EE3E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu-jp.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EE40: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu-jp.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EE41: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu-jp.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EE43: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EE44: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu-jp.asm:133 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EE46: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/file_select_menu-jp.asm:134 REP #PROC_FLAGS::ACCUM8
    case 0xC1EE48: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu-jp.asm:135 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE4A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:135 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE4C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu-jp.asm:135 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE4E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu-jp.asm:135 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE50: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:136 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    case 0xC1EE52: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000099, 2); else cpu.execute_instruction<0xA9>(0x009499, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:136 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    // Overlapping static entry reached from 0xC1EE52.
    case 0xC1EE54: cpu.execute_instruction<0x94>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu-jp.asm:136 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    case 0xC1EE55: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu-jp.asm:136 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    // Overlapping static entry reached from 0xC1EE54.
    case 0xC1EE56: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:136 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    case 0xC1EE57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:136 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    // Overlapping static entry reached from 0xC1EE56.
    case 0xC1EE58: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:136 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    // Overlapping static entry reached from 0xC1EE57.
    case 0xC1EE59: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu-jp.asm:136 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    case 0xC1EE5A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select_menu-jp.asm:137 LDA #FILE_SELECT_TEXT_NEW_GAME_LENGTH
    case 0xC1EE5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/intro/file_select_menu-jp.asm:137 LDA #FILE_SELECT_TEXT_NEW_GAME_LENGTH
    // Overlapping static entry reached from 0xC1EE5C.
    case 0xC1EE5E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu-jp.asm:138 JSL MEMCPY24
    case 0xC1EE5F: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // src/intro/file_select_menu-jp.asm:139 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EE63: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select_menu-jp.asm:140 STZ TEMPORARY_TEXT_BUFFER + 11
    case 0xC1EE65: cpu.execute_instruction<0x9C>(0x009F55, 3); return true;
    // src/intro/file_select_menu-jp.asm:141 LDY @LOCAL03
    case 0xC1EE68: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/intro/file_select_menu-jp.asm:142 TYX
    case 0xC1EE6A: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:143 STZ SAVE_FILES_PRESENT,X
    case 0xC1EE6B: cpu.execute_instruction<0x9E>(0x00B672, 3); return true;
    // src/intro/file_select_menu-jp.asm:144 REP #PROC_FLAGS::ACCUM8
    case 0xC1EE6E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/file_select_menu-jp.asm:145 LDA #$100
    case 0xC1EE70: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000100, 3); return true;
    // src/intro/file_select_menu-jp.asm:145 LDA #$100
    // Overlapping static entry reached from 0xC1EE70.
    case 0xC1EE72: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/intro/file_select_menu-jp.asm:146 STA @LOCAL02
    case 0xC1EE73: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/intro/file_select_menu-jp.asm:146 STA @LOCAL02
    // Overlapping static entry reached from 0xC1EE72.
    case 0xC1EE74: cpu.execute_instruction<0x16>(0x000084, 2); return true;
    // src/intro/file_select_menu-jp.asm:148 STY @VIRTUAL02
    case 0xC1EE75: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/intro/file_select_menu-jp.asm:148 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC1EE74.
    case 0xC1EE76: cpu.execute_instruction<0x02>(0x0000E6, 2); return true;
    // src/intro/file_select_menu-jp.asm:149 INC @VIRTUAL02
    case 0xC1EE77: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu-jp.asm:150 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE79: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu-jp.asm:150 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EE79.
    case 0xC1EE7B: cpu.execute_instruction<0x9F>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:150 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE7C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu-jp.asm:150 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE7E: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu-jp.asm:150 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE7F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu-jp.asm:150 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE81: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:150 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE82: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu-jp.asm:150 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE84: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/file_select_menu-jp.asm:151 REP #PROC_FLAGS::ACCUM8
    case 0xC1EE86: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu-jp.asm:152 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE88: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:152 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE8A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu-jp.asm:152 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE8C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu-jp.asm:152 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE8E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select_menu-jp.asm:153 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1EE90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select_menu-jp.asm:153 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1EE90.
    case 0xC1EE92: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:153 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1EE93: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select_menu-jp.asm:153 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1EE95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select_menu-jp.asm:153 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1EE95.
    case 0xC1EE97: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/intro/file_select_menu-jp.asm:153 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1EE98: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select_menu-jp.asm:154 LDA @LOCAL02
    case 0xC1EE9A: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/intro/file_select_menu-jp.asm:155 ORA @VIRTUAL02
    case 0xC1EE9C: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/intro/file_select_menu-jp.asm:156 JSR UNKNOWN_C115F4
    case 0xC1EE9E: cpu.execute_instruction<0x20>(0x001BB0, 3); return true;
    // src/intro/file_select_menu-jp.asm:157 LDY @VIRTUAL02
    case 0xC1EEA1: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/intro/file_select_menu-jp.asm:158 STY @LOCAL03
    case 0xC1EEA3: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/intro/file_select_menu-jp.asm:160 CPY #3
    case 0xC1EEA5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000003, 2); else cpu.execute_instruction<0xC0>(0x000003, 3); return true;
    // src/intro/file_select_menu-jp.asm:160 CPY #3
    // Overlapping static entry reached from 0xC1EEA5.
    case 0xC1EEA7: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/intro/file_select_menu-jp.asm:161 BCCL @UNKNOWN0
    case 0xC1EEA8: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/intro/file_select_menu-jp.asm:161 BCCL @UNKNOWN0
    case 0xC1EEAA: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/intro/file_select_menu-jp.asm:161 BCCL @UNKNOWN0
    case 0xC1EEAC: cpu.execute_instruction<0x4C>(0x00ECF3, 3); return true;
    // src/intro/file_select_menu-jp.asm:162 LDY #0
    case 0xC1EEAF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/file_select_menu-jp.asm:162 LDY #0
    // Overlapping static entry reached from 0xC1EEAF.
    case 0xC1EEB1: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/intro/file_select_menu-jp.asm:163 TYX
    case 0xC1EEB2: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:164 LDA #1
    case 0xC1EEB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select_menu-jp.asm:164 LDA #1
    // Overlapping static entry reached from 0xC1EEB3.
    case 0xC1EEB5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu-jp.asm:165 JSR UNKNOWN_C1180D
    case 0xC1EEB6: cpu.execute_instruction<0x20>(0x001FA6, 3); return true;
    // src/intro/file_select_menu-jp.asm:166 LDA @VIRTUAL04
    case 0xC1EEB9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/file_select_menu-jp.asm:167 BEQL @UNKNOWN18
    case 0xC1EEBB: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/file_select_menu-jp.asm:167 BEQL @UNKNOWN18
    case 0xC1EEBD: cpu.execute_instruction<0x4C>(0x00EF43, 3); return true;
    // src/intro/file_select_menu-jp.asm:168 LDA CURRENT_FOCUS_WINDOW
    case 0xC1EEC0: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/intro/file_select_menu-jp.asm:169 ASL
    case 0xC1EEC3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:170 TAX
    case 0xC1EEC4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:171 LDA OPEN_WINDOW_TABLE,X
    case 0xC1EEC5: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/intro/file_select_menu-jp.asm:172 LDY #.SIZEOF(window_stats)
    case 0xC1EEC8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/intro/file_select_menu-jp.asm:172 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1EEC8.
    case 0xC1EECA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu-jp.asm:173 JSL MULT168
    case 0xC1EECB: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/intro/file_select_menu-jp.asm:174 TAX
    case 0xC1EECF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:175 LDA WINDOW_STATS + WINDOW::UNKNOWN2B,X
    case 0xC1EED0: cpu.execute_instruction<0xBD>(0x0089ED, 3); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/intro/file_select_menu-jp.asm:176 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EED3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/intro/file_select_menu-jp.asm:176 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EED5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/intro/file_select_menu-jp.asm:176 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EED6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/intro/file_select_menu-jp.asm:176 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EED7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/intro/file_select_menu-jp.asm:176 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EED9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/intro/file_select_menu-jp.asm:176 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EEDA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/intro/file_select_menu-jp.asm:176 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EEDC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/intro/file_select_menu-jp.asm:176 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EEDD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:177 CLC
    case 0xC1EEDE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:178 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1EEDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/intro/file_select_menu-jp.asm:178 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1EEDF.
    case 0xC1EEE1: cpu.execute_instruction<0x8D>(0x0084A8, 3); return true;
    // src/intro/file_select_menu-jp.asm:179 TAY
    case 0xC1EEE2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:180 STY @LOCAL02
    case 0xC1EEE3: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/intro/file_select_menu-jp.asm:180 STY @LOCAL02
    // Overlapping static entry reached from 0xC1EEE1.
    case 0xC1EEE4: cpu.execute_instruction<0x16>(0x0000AD, 2); return true;
    // src/intro/file_select_menu-jp.asm:181 LDA CURRENT_SAVE_SLOT
    case 0xC1EEE5: cpu.execute_instruction<0xAD>(0x00B675, 3); return true;
    // src/intro/file_select_menu-jp.asm:181 LDA CURRENT_SAVE_SLOT
    // Overlapping static entry reached from 0xC1EEE4.
    case 0xC1EEE6: cpu.execute_instruction<0x75>(0x0000B6, 2); return true;
    // src/intro/file_select_menu-jp.asm:182 AND #$00FF
    case 0xC1EEE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select_menu-jp.asm:182 AND #$00FF
    // Overlapping static entry reached from 0xC1EEE8.
    case 0xC1EEEA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/intro/file_select_menu-jp.asm:183 TAX
    case 0xC1EEEB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:184 DEX
    case 0xC1EEEC: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:185 BRA @UNKNOWN17
    case 0xC1EEED: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/intro/file_select_menu-jp.asm:187 LDA __BSS_START__ + menu_option::next,Y
    case 0xC1EEEF: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/intro/file_select_menu-jp.asm:188 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EEF2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/intro/file_select_menu-jp.asm:188 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EEF4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/intro/file_select_menu-jp.asm:188 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EEF5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/intro/file_select_menu-jp.asm:188 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EEF6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/intro/file_select_menu-jp.asm:188 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EEF8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/intro/file_select_menu-jp.asm:188 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EEF9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/intro/file_select_menu-jp.asm:188 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EEFB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/intro/file_select_menu-jp.asm:188 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1EEFC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:189 CLC
    case 0xC1EEFD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:190 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1EEFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/intro/file_select_menu-jp.asm:190 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1EEFE.
    case 0xC1EF00: cpu.execute_instruction<0x8D>(0x0084A8, 3); return true;
    // src/intro/file_select_menu-jp.asm:191 TAY
    case 0xC1EF01: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:192 STY @LOCAL02
    case 0xC1EF02: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/intro/file_select_menu-jp.asm:192 STY @LOCAL02
    // Overlapping static entry reached from 0xC1EF00.
    case 0xC1EF03: cpu.execute_instruction<0x16>(0x0000CA, 2); return true;
    // src/intro/file_select_menu-jp.asm:193 DEX
    case 0xC1EF04: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:195 BNE @UNKNOWN16
    case 0xC1EF05: cpu.execute_instruction<0xD0>(0x0000E8, 2); return true;
    // src/intro/file_select_menu-jp.asm:196 LDA #6
    case 0xC1EF07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/intro/file_select_menu-jp.asm:196 LDA #6
    // Overlapping static entry reached from 0xC1EF07.
    case 0xC1EF09: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu-jp.asm:197 JSR UNKNOWN_C10FEA
    case 0xC1EF0A: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // src/intro/file_select_menu-jp.asm:198 LDY @LOCAL02
    case 0xC1EF0D: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/intro/file_select_menu-jp.asm:199 LDA a:menu_option::text_y,Y
    case 0xC1EF0F: cpu.execute_instruction<0xB9>(0x00000A, 3); return true;
    // src/intro/file_select_menu-jp.asm:200 TAX
    case 0xC1EF12: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:201 LDA a:menu_option::text_x,Y
    case 0xC1EF13: cpu.execute_instruction<0xB9>(0x000008, 3); return true;
    // src/intro/file_select_menu-jp.asm:202 INC
    case 0xC1EF16: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:203 JSR UNKNOWN_C438A5
    case 0xC1EF17: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/intro/file_select_menu-jp.asm:204 LDY @LOCAL02
    case 0xC1EF1A: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/intro/file_select_menu-jp.asm:205 TYA
    case 0xC1EF1C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:206 CLC
    case 0xC1EF1D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:207 ADC #menu_option::label
    case 0xC1EF1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/intro/file_select_menu-jp.asm:207 ADC #menu_option::label
    // Overlapping static entry reached from 0xC1EF1E.
    case 0xC1EF20: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:208 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1EF21: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu-jp.asm:208 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1EF23: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu-jp.asm:208 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1EF24: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu-jp.asm:208 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1EF26: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:208 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1EF27: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu-jp.asm:208 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1EF29: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/file_select_menu-jp.asm:209 REP #PROC_FLAGS::ACCUM8
    case 0xC1EF2B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu-jp.asm:210 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF2D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu-jp.asm:210 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF2F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu-jp.asm:210 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF31: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu-jp.asm:210 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF33: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu-jp.asm:211 LDA #$FFFF
    case 0xC1EF35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/intro/file_select_menu-jp.asm:211 LDA #$FFFF
    // Overlapping static entry reached from 0xC1EF35.
    case 0xC1EF37: cpu.execute_instruction<0xFF>(0x14DD20, 4); return true;
    // src/intro/file_select_menu-jp.asm:212 JSR PRINT_STRING
    case 0xC1EF38: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/intro/file_select_menu-jp.asm:213 LDA #0
    case 0xC1EF3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select_menu-jp.asm:213 LDA #0
    // Overlapping static entry reached from 0xC1EF3B.
    case 0xC1EF3D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu-jp.asm:214 JSR UNKNOWN_C10FEA
    case 0xC1EF3E: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // src/intro/file_select_menu-jp.asm:215 BRA @UNKNOWN20
    case 0xC1EF41: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/intro/file_select_menu-jp.asm:217 JSR CORRUPTION_CHECK
    case 0xC1EF43: cpu.execute_instruction<0x20>(0x00EC5A, 3); return true;
    // src/intro/file_select_menu-jp.asm:219 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC1EF46: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/intro/file_select_menu-jp.asm:220 AND #$00FF
    case 0xC1EF49: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select_menu-jp.asm:220 AND #$00FF
    // Overlapping static entry reached from 0xC1EF49.
    case 0xC1EF4B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu-jp.asm:221 BNE @UNKNOWN19
    case 0xC1EF4C: cpu.execute_instruction<0xD0>(0x0000F8, 2); return true;
    // src/intro/file_select_menu-jp.asm:222 LDA #MUSIC::SETUP_SCREEN
    case 0xC1EF4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/intro/file_select_menu-jp.asm:222 LDA #MUSIC::SETUP_SCREEN
    // Overlapping static entry reached from 0xC1EF4E.
    case 0xC1EF50: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu-jp.asm:223 JSL CHANGE_MUSIC
    case 0xC1EF51: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:224 LOADPTR UNKNOWN_C1ECD1, @LOCAL00
    case 0xC1EF55: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004F, 2); else cpu.execute_instruction<0xA9>(0x00EC4F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:224 LOADPTR UNKNOWN_C1ECD1, @LOCAL00
    // Overlapping static entry reached from 0xC1EF55.
    case 0xC1EF57: cpu.execute_instruction<0xEC>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu-jp.asm:224 LOADPTR UNKNOWN_C1ECD1, @LOCAL00
    case 0xC1EF58: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:224 LOADPTR UNKNOWN_C1ECD1, @LOCAL00
    case 0xC1EF5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu-jp.asm:224 LOADPTR UNKNOWN_C1ECD1, @LOCAL00
    // Overlapping static entry reached from 0xC1EF5A.
    case 0xC1EF5C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu-jp.asm:224 LOADPTR UNKNOWN_C1ECD1, @LOCAL00
    case 0xC1EF5D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu-jp.asm:225 JSR UNKNOWN_C11F5A
    case 0xC1EF5F: cpu.execute_instruction<0x20>(0x00267B, 3); return true;
    // src/intro/file_select_menu-jp.asm:226 LDA #0
    case 0xC1EF62: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select_menu-jp.asm:226 LDA #0
    // Overlapping static entry reached from 0xC1EF62.
    case 0xC1EF64: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu-jp.asm:227 JSR SELECTION_MENU
    case 0xC1EF65: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // src/intro/file_select_menu-jp.asm:228 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EF68: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select_menu-jp.asm:229 STA CURRENT_SAVE_SLOT
    case 0xC1EF6A: cpu.execute_instruction<0x8D>(0x00B675, 3); return true;
    // src/intro/file_select_menu-jp.asm:230 JSR UNKNOWN_C11F8A
    case 0xC1EF6D: cpu.execute_instruction<0x20>(0x0026AB, 3); return true;
    // src/intro/file_select_menu-jp.asm:233 LDA CURRENT_SAVE_SLOT
    case 0xC1EF70: cpu.execute_instruction<0xAD>(0x00B675, 3); return true;
    // src/intro/file_select_menu-jp.asm:234 AND #$00FF
    case 0xC1EF73: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select_menu-jp.asm:234 AND #$00FF
    // Overlapping static entry reached from 0xC1EF73.
    case 0xC1EF75: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/intro/file_select_menu-jp.asm:235 DEC
    case 0xC1EF76: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/intro/file_select_menu-jp.asm:236 JSL LOAD_GAME_SLOT
    case 0xC1EF77: cpu.execute_instruction<0x22>(0xC0F97D, 4); return true;
    // src/intro/file_select_menu-jp.asm:237 LDA CURRENT_SAVE_SLOT
    case 0xC1EF7B: cpu.execute_instruction<0xAD>(0x00B675, 3); return true;
    // src/intro/file_select_menu-jp.asm:238 AND #$00FF
    case 0xC1EF7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select_menu-jp.asm:238 AND #$00FF
    // Overlapping static entry reached from 0xC1EF7E.
    case 0xC1EF80: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/file_select_menu-jp.asm:239 END_C_FUNCTION
    case 0xC1EF81: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/file_select_menu-jp.asm:239 END_C_FUNCTION
    case 0xC1EF82: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/file_select_menu_loop-jp.asm (source_named).
bool execute_introduction_file_select_menu_loop_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC1F685: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:15 END_STACK_VARS
    case 0xC1F687: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:15 END_STACK_VARS
    case 0xC1F688: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:15 END_STACK_VARS
    case 0xC1F689: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D8, 2); else cpu.execute_instruction<0x69>(0x00FFD8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC1F689.
    case 0xC1F68B: cpu.execute_instruction<0xFF>(0xF7205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:15 END_STACK_VARS
    case 0xC1F68C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:17 JSR SET_INSTANT_PRINTING
    case 0xC1F68D: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:17 JSR SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC1F68B.
    case 0xC1F68F: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:18 LDA #0
    case 0xC1F690: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:18 LDA #0
    // Overlapping static entry reached from 0xC1F690.
    case 0xC1F692: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:19 JSR FILE_SELECT_MENU
    case 0xC1F693: cpu.execute_instruction<0x20>(0x00ECD9, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:20 TAX
    case 0xC1F696: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:21 DEX
    case 0xC1F697: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:22 LDA SAVE_FILES_PRESENT,X
    case 0xC1F698: cpu.execute_instruction<0xBD>(0x00B672, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:23 AND #$00FF
    case 0xC1F69B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC1F69B.
    case 0xC1F69D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:24 BEQL @EMPTY_FILE_SELECTED
    case 0xC1F69E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:24 BEQL @EMPTY_FILE_SELECTED
    case 0xC1F6A0: cpu.execute_instruction<0x4C>(0x00F725, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:26 JSR UNKNOWN_C1F07E
    case 0xC1F6A3: cpu.execute_instruction<0x20>(0x00EF83, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:27 CMP #0
    case 0xC1F6A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:27 CMP #0
    // Overlapping static entry reached from 0xC1F6A6.
    case 0xC1F6A8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:28 BEQ @MENU_B_PRESSED
    case 0xC1F6A9: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:29 CMP #1
    case 0xC1F6AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:29 CMP #1
    // Overlapping static entry reached from 0xC1F6AB.
    case 0xC1F6AD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:30 BEQ @MENU_STARTGAME_SELECTED
    case 0xC1F6AE: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:31 CMP #2
    case 0xC1F6B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:31 CMP #2
    // Overlapping static entry reached from 0xC1F6B0.
    case 0xC1F6B2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:32 BEQ @MENU_COPY_SELECTED
    case 0xC1F6B3: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:33 CMP #3
    case 0xC1F6B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:33 CMP #3
    // Overlapping static entry reached from 0xC1F6B5.
    case 0xC1F6B7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:34 BEQ @MENU_DELETE_SELECTED
    case 0xC1F6B8: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:35 CMP #4
    case 0xC1F6BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:35 CMP #4
    // Overlapping static entry reached from 0xC1F6BA.
    case 0xC1F6BC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:36 BEQ @MENU_SETUP_SELECTED
    case 0xC1F6BD: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:37 BRA @MENU_OTHER_SELECTED
    case 0xC1F6BF: cpu.execute_instruction<0x80>(0x00005E, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:39 JSR UNKNOWN_C1008E
    case 0xC1F6C1: cpu.execute_instruction<0x20>(0x0002AF, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:40 BRA @UNKNOWN0
    case 0xC1F6C4: cpu.execute_instruction<0x80>(0x0000C7, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:42 JSL UNKNOWN_C064D4
    case 0xC1F6C6: cpu.execute_instruction<0x22>(0xC06702, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:43 JSL RELOAD_HOTSPOTS
    case 0xC1F6CA: cpu.execute_instruction<0x22>(0xC07447, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:44 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC1F6CE: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:45 STA RESPAWN_X
    case 0xC1F6D1: cpu.execute_instruction<0x8D>(0x009FA5, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:46 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC1F6D4: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:47 STA RESPAWN_Y
    case 0xC1F6D7: cpu.execute_instruction<0x8D>(0x009FA7, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:48 JMP @UNKNOWN59
    case 0xC1F6DA: cpu.execute_instruction<0x4C>(0x00FC3F, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:50 JSR UNKNOWN_C1F14F
    case 0xC1F6DD: cpu.execute_instruction<0x20>(0x00F04E, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:51 CMP #0
    case 0xC1F6E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:51 CMP #0
    // Overlapping static entry reached from 0xC1F6E0.
    case 0xC1F6E2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:52 BEQ @VALID_FILE_SELECTED
    case 0xC1F6E3: cpu.execute_instruction<0xF0>(0x0000BE, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:53 BRA @MENU_OTHER_SELECTED
    case 0xC1F6E5: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:55 JSR UNKNOWN_C1F2A8
    case 0xC1F6E7: cpu.execute_instruction<0x20>(0x00F1A2, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:56 CMP #0
    case 0xC1F6EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:56 CMP #0
    // Overlapping static entry reached from 0xC1F6EA.
    case 0xC1F6EC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:57 BEQ @VALID_FILE_SELECTED
    case 0xC1F6ED: cpu.execute_instruction<0xF0>(0x0000B4, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:58 BRA @MENU_OTHER_SELECTED
    case 0xC1F6EF: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:60 LDA #0
    case 0xC1F6F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:60 LDA #0
    // Overlapping static entry reached from 0xC1F6F1.
    case 0xC1F6F3: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:61 JSR OPEN_TEXT_SPEED_MENU
    case 0xC1F6F4: cpu.execute_instruction<0x20>(0x00F293, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:62 CMP #0
    case 0xC1F6F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:62 CMP #0
    // Overlapping static entry reached from 0xC1F6F7.
    case 0xC1F6F9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:63 BNE @MENU_SETUP_SELECTED2
    case 0xC1F6FA: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:64 LDA #WINDOW::FILE_SELECT_TEXT_SPEED
    case 0xC1F6FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:64 LDA #WINDOW::FILE_SELECT_TEXT_SPEED
    // Overlapping static entry reached from 0xC1F6FC.
    case 0xC1F6FE: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:65 JSR CLOSE_WINDOW
    case 0xC1F6FF: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:66 BRA @VALID_FILE_SELECTED
    case 0xC1F702: cpu.execute_instruction<0x80>(0x00009F, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:68 LDA #0
    case 0xC1F704: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:68 LDA #0
    // Overlapping static entry reached from 0xC1F704.
    case 0xC1F706: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:69 JSR OPEN_SOUND_MENU
    case 0xC1F707: cpu.execute_instruction<0x20>(0x00F408, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:70 CMP #0
    case 0xC1F70A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:70 CMP #0
    // Overlapping static entry reached from 0xC1F70A.
    case 0xC1F70C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:71 BNE @MENU_SETUP_SELECTED3
    case 0xC1F70D: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:72 LDA #WINDOW::FILE_SELECT_MUSIC_MODE
    case 0xC1F70F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x000019, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:72 LDA #WINDOW::FILE_SELECT_MUSIC_MODE
    // Overlapping static entry reached from 0xC1F70F.
    case 0xC1F711: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:73 JSR CLOSE_WINDOW
    case 0xC1F712: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:74 BRA @MENU_SETUP_SELECTED
    case 0xC1F715: cpu.execute_instruction<0x80>(0x0000DA, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:76 JSR OPEN_FLAVOUR_MENU
    case 0xC1F717: cpu.execute_instruction<0x20>(0x00F55E, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:77 CMP #0
    case 0xC1F71A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:77 CMP #0
    // Overlapping static entry reached from 0xC1F71A.
    case 0xC1F71C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:78 BEQ @MENU_SETUP_SELECTED2
    case 0xC1F71D: cpu.execute_instruction<0xF0>(0x0000E5, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:80 JSR UNKNOWN_C1008E
    case 0xC1F71F: cpu.execute_instruction<0x20>(0x0002AF, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:81 JMP @UNKNOWN0
    case 0xC1F722: cpu.execute_instruction<0x4C>(0x00F68D, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:83 LDA #0
    case 0xC1F725: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:83 LDA #0
    // Overlapping static entry reached from 0xC1F725.
    case 0xC1F727: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:84 JSR OPEN_TEXT_SPEED_MENU
    case 0xC1F728: cpu.execute_instruction<0x20>(0x00F293, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:85 CMP #0
    case 0xC1F72B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:85 CMP #0
    // Overlapping static entry reached from 0xC1F72B.
    case 0xC1F72D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:86 BNE @UNKNOWN14
    case 0xC1F72E: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:87 LDA #WINDOW::FILE_SELECT_TEXT_SPEED
    case 0xC1F730: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:87 LDA #WINDOW::FILE_SELECT_TEXT_SPEED
    // Overlapping static entry reached from 0xC1F730.
    case 0xC1F732: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:88 JSR CLOSE_WINDOW
    case 0xC1F733: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:89 JMP @UNKNOWN0
    case 0xC1F736: cpu.execute_instruction<0x4C>(0x00F68D, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:91 LDA #0
    case 0xC1F739: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:91 LDA #0
    // Overlapping static entry reached from 0xC1F739.
    case 0xC1F73B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:92 JSR OPEN_SOUND_MENU
    case 0xC1F73C: cpu.execute_instruction<0x20>(0x00F408, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:93 CMP #0
    case 0xC1F73F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:93 CMP #0
    // Overlapping static entry reached from 0xC1F73F.
    case 0xC1F741: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:94 BNE @UNKNOWN16
    case 0xC1F742: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:95 LDA #WINDOW::FILE_SELECT_MUSIC_MODE
    case 0xC1F744: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x000019, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:95 LDA #WINDOW::FILE_SELECT_MUSIC_MODE
    // Overlapping static entry reached from 0xC1F744.
    case 0xC1F746: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:96 JSR CLOSE_WINDOW
    case 0xC1F747: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:97 BRA @EMPTY_FILE_SELECTED
    case 0xC1F74A: cpu.execute_instruction<0x80>(0x0000D9, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:99 JSR OPEN_FLAVOUR_MENU
    case 0xC1F74C: cpu.execute_instruction<0x20>(0x00F55E, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:100 CMP #0
    case 0xC1F74F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:100 CMP #0
    // Overlapping static entry reached from 0xC1F74F.
    case 0xC1F751: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:101 BEQ @UNKNOWN14
    case 0xC1F752: cpu.execute_instruction<0xF0>(0x0000E5, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:103 LDA #MUSIC::NAMING_SCREEN
    case 0xC1F754: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:103 LDA #MUSIC::NAMING_SCREEN
    // Overlapping static entry reached from 0xC1F754.
    case 0xC1F756: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:104 JSL CHANGE_MUSIC
    case 0xC1F757: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:106 JSR UNKNOWN_C1008E
    case 0xC1F75B: cpu.execute_instruction<0x20>(0x0002AF, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:107 LDA #0
    case 0xC1F75E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:107 LDA #0
    // Overlapping static entry reached from 0xC1F75E.
    case 0xC1F760: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:108 STA @VIRTUAL02
    case 0xC1F761: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:109 JMP @UNKNOWN31
    case 0xC1F763: cpu.execute_instruction<0x4C>(0x00F8FA, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:111 LDA @VIRTUAL02
    case 0xC1F766: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:112 CMP #$FFFF
    case 0xC1F768: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:112 CMP #$FFFF
    // Overlapping static entry reached from 0xC1F768.
    case 0xC1F76A: cpu.execute_instruction<0xFF>(0x201ED0, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:113 BNE @UNKNOWN20
    case 0xC1F76B: cpu.execute_instruction<0xD0>(0x00001E, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:114 JSR UNKNOWN_C1008E
    case 0xC1F76D: cpu.execute_instruction<0x20>(0x0002AF, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:114 JSR UNKNOWN_C1008E
    // Overlapping static entry reached from 0xC1F76A.
    case 0xC1F76E: cpu.execute_instruction<0xAF>(0x01A902, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:115 LDA #1
    case 0xC1F770: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:115 LDA #1
    // Overlapping static entry reached from 0xC1F770.
    case 0xC1F772: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:116 JSR FILE_SELECT_MENU
    case 0xC1F773: cpu.execute_instruction<0x20>(0x00ECD9, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:117 LDA #1
    case 0xC1F776: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:117 LDA #1
    // Overlapping static entry reached from 0xC1F776.
    case 0xC1F778: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:118 JSR OPEN_TEXT_SPEED_MENU
    case 0xC1F779: cpu.execute_instruction<0x20>(0x00F293, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:119 LDA #1
    case 0xC1F77C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:119 LDA #1
    // Overlapping static entry reached from 0xC1F77C.
    case 0xC1F77E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:120 JSR OPEN_SOUND_MENU
    case 0xC1F77F: cpu.execute_instruction<0x20>(0x00F408, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:121 LDA #MUSIC::SETUP_SCREEN
    case 0xC1F782: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:121 LDA #MUSIC::SETUP_SCREEN
    // Overlapping static entry reached from 0xC1F782.
    case 0xC1F784: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:122 JSL CHANGE_MUSIC
    case 0xC1F785: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:123 BRA @UNKNOWN16
    case 0xC1F789: cpu.execute_instruction<0x80>(0x0000C1, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:125 LDA @VIRTUAL02
    case 0xC1F78B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:126 JSL DISPLAY_ANIMATED_NAMING_SPRITE
    case 0xC1F78D: cpu.execute_instruction<0x22>(0xC4AAA9, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:127 LDA #FILE_MENU_NEW_GAME_NAME::DOG
    case 0xC1F791: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:127 LDA #FILE_MENU_NEW_GAME_NAME::DOG
    // Overlapping static entry reached from 0xC1F791.
    case 0xC1F793: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:128 CLC
    case 0xC1F794: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:129 SBC @VIRTUAL02
    case 0xC1F795: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:130 BRANCHLTEQS @UNKNOWN24
    case 0xC1F797: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:130 BRANCHLTEQS @UNKNOWN24
    case 0xC1F799: cpu.execute_instruction<0x10>(0x00005E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:130 BRANCHLTEQS @UNKNOWN24
    case 0xC1F79B: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:130 BRANCHLTEQS @UNKNOWN24
    case 0xC1F79D: cpu.execute_instruction<0x30>(0x00005A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:131 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F79F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000025, 2); else cpu.execute_instruction<0xA9>(0x009525, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:131 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F79F.
    case 0xC1F7A1: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:131 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F7A2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:131 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F7A1.
    case 0xC1F7A3: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:131 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F7A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:131 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F7A3.
    case 0xC1F7A5: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:131 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F7A4.
    case 0xC1F7A6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:131 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F7A7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:132 LDA @VIRTUAL02
    case 0xC1F7A9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:133 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F7AB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:133 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F7AD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:133 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F7AE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:133 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F7B0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:133 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F7B1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:133 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F7B3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:133 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F7B4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:134 CLC
    case 0xC1F7B6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:135 ADC @VIRTUAL06
    case 0xC1F7B7: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:136 STA @VIRTUAL06
    case 0xC1F7B9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:137 STA @LOCAL00
    case 0xC1F7BB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:138 LDA @VIRTUAL06+2
    case 0xC1F7BD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:139 STA @LOCAL00+2
    case 0xC1F7BF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:140 LDA #NAME_THEM_STRING_LENGTH
    case 0xC1F7C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00000F, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:140 LDA #NAME_THEM_STRING_LENGTH
    // Overlapping static entry reached from 0xC1F7C1.
    case 0xC1F7C3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:141 STA @LOCAL01
    case 0xC1F7C4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:142 LDY @VIRTUAL02
    case 0xC1F7C6: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:143 STY @LOCAL09
    case 0xC1F7C8: cpu.execute_instruction<0x84>(0x000026, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:144 LDA @VIRTUAL02
    case 0xC1F7CA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:145 LDY #.SIZEOF(char_struct)
    case 0xC1F7CC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:145 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1F7CC.
    case 0xC1F7CE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:146 JSL MULT168
    case 0xC1F7CF: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:147 CLC
    case 0xC1F7D3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:148 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1F7D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:148 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1F7D4.
    case 0xC1F7D6: cpu.execute_instruction<0x9C>(0x00A9AA, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:149 TAX
    case 0xC1F7D7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:150 LDA #.SIZEOF(char_struct::name)
    case 0xC1F7D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:150 LDA #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1F7D6.
    case 0xC1F7D9: cpu.execute_instruction<0x04>(0x000000, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:150 LDA #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1F7D8.
    case 0xC1F7DA: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:151 LDY @LOCAL09
    case 0xC1F7DB: cpu.execute_instruction<0xA4>(0x000026, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:152 JSR NAME_A_CHARACTER
    case 0xC1F7DD: cpu.execute_instruction<0x20>(0x00EAF3, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:153 CMP #0
    case 0xC1F7E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:153 CMP #0
    // Overlapping static entry reached from 0xC1F7E0.
    case 0xC1F7E2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:154 BEQ @UNKNOWN23
    case 0xC1F7E3: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:155 LDA #$FFFF
    case 0xC1F7E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:155 LDA #$FFFF
    // Overlapping static entry reached from 0xC1F7E5.
    case 0xC1F7E7: cpu.execute_instruction<0xFF>(0x850485, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:156 STA @VIRTUAL04
    case 0xC1F7E8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:157 STA @LOCAL08
    case 0xC1F7EA: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:157 STA @LOCAL08
    // Overlapping static entry reached from 0xC1F7E7.
    case 0xC1F7EB: cpu.execute_instruction<0x24>(0x00004C, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:158 JMP @UNKNOWN30
    case 0xC1F7EC: cpu.execute_instruction<0x4C>(0x00F8E9, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:158 JMP @UNKNOWN30
    // Overlapping static entry reached from 0xC1F7EB.
    case 0xC1F7ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000F8, 2); else cpu.execute_instruction<0xE9>(0x00A9F8, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:160 LDA #1
    case 0xC1F7EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:160 LDA #1
    // Overlapping static entry reached from 0xC1F7ED.
    case 0xC1F7F0: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:160 LDA #1
    // Overlapping static entry reached from 0xC1F7EF.
    case 0xC1F7F1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:161 STA @VIRTUAL04
    case 0xC1F7F2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:162 STA @LOCAL08
    case 0xC1F7F4: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:163 JMP @UNKNOWN30
    case 0xC1F7F6: cpu.execute_instruction<0x4C>(0x00F8E9, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:165 LDA @VIRTUAL02
    case 0xC1F7F9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:166 CMP #FILE_MENU_NEW_GAME_NAME::DOG
    case 0xC1F7FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:166 CMP #FILE_MENU_NEW_GAME_NAME::DOG
    // Overlapping static entry reached from 0xC1F7FB.
    case 0xC1F7FD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:167 BNE @UNKNOWN26
    case 0xC1F7FE: cpu.execute_instruction<0xD0>(0x00004B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:168 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F800: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000025, 2); else cpu.execute_instruction<0xA9>(0x009525, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:168 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F800.
    case 0xC1F802: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:168 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F803: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:168 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F802.
    case 0xC1F804: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:168 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F805: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:168 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F804.
    case 0xC1F806: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:168 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F805.
    case 0xC1F807: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:168 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F808: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:169 LDA @VIRTUAL02
    case 0xC1F80A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F80C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F80E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F80F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F811: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F812: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F814: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F815: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:171 CLC
    case 0xC1F817: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:172 ADC @VIRTUAL06
    case 0xC1F818: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:173 STA @VIRTUAL06
    case 0xC1F81A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:174 STA @LOCAL00
    case 0xC1F81C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:175 LDA @VIRTUAL06+2
    case 0xC1F81E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:176 STA @LOCAL00+2
    case 0xC1F820: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:177 LDA #NAME_THEM_STRING_LENGTH
    case 0xC1F822: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00000F, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:177 LDA #NAME_THEM_STRING_LENGTH
    // Overlapping static entry reached from 0xC1F822.
    case 0xC1F824: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:178 STA @LOCAL01
    case 0xC1F825: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:179 LDY @VIRTUAL02
    case 0xC1F827: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:180 LDX #.LOWORD(GAME_STATE) + game_state::pet_name
    case 0xC1F829: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000CD, 2); else cpu.execute_instruction<0xA2>(0x009ACD, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:180 LDX #.LOWORD(GAME_STATE) + game_state::pet_name
    // Overlapping static entry reached from 0xC1F829.
    case 0xC1F82B: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:181 LDA #.SIZEOF(game_state::pet_name)
    case 0xC1F82C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:181 LDA #.SIZEOF(game_state::pet_name)
    // Overlapping static entry reached from 0xC1F82C.
    case 0xC1F82E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:182 JSR NAME_A_CHARACTER
    case 0xC1F82F: cpu.execute_instruction<0x20>(0x00EAF3, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:183 CMP #0
    case 0xC1F832: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:183 CMP #0
    // Overlapping static entry reached from 0xC1F832.
    case 0xC1F834: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:184 BEQ @UNKNOWN25
    case 0xC1F835: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:185 LDA #$FFFF
    case 0xC1F837: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:185 LDA #$FFFF
    // Overlapping static entry reached from 0xC1F837.
    case 0xC1F839: cpu.execute_instruction<0xFF>(0x850485, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:186 STA @VIRTUAL04
    case 0xC1F83A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:187 STA @LOCAL08
    case 0xC1F83C: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:187 STA @LOCAL08
    // Overlapping static entry reached from 0xC1F839.
    case 0xC1F83D: cpu.execute_instruction<0x24>(0x00004C, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:188 JMP @UNKNOWN30
    case 0xC1F83E: cpu.execute_instruction<0x4C>(0x00F8E9, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:188 JMP @UNKNOWN30
    // Overlapping static entry reached from 0xC1F83D.
    case 0xC1F83F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000F8, 2); else cpu.execute_instruction<0xE9>(0x00A9F8, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:190 LDA #1
    case 0xC1F841: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:190 LDA #1
    // Overlapping static entry reached from 0xC1F83F.
    case 0xC1F842: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:190 LDA #1
    // Overlapping static entry reached from 0xC1F841.
    case 0xC1F843: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:191 STA @VIRTUAL04
    case 0xC1F844: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:192 STA @LOCAL08
    case 0xC1F846: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:193 JMP @UNKNOWN30
    case 0xC1F848: cpu.execute_instruction<0x4C>(0x00F8E9, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:195 LDA @VIRTUAL02
    case 0xC1F84B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:196 CMP #FILE_MENU_NEW_GAME_NAME::FAVORITE_FOOD
    case 0xC1F84D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:196 CMP #FILE_MENU_NEW_GAME_NAME::FAVORITE_FOOD
    // Overlapping static entry reached from 0xC1F84D.
    case 0xC1F84F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:197 BNE @UNKNOWN28
    case 0xC1F850: cpu.execute_instruction<0xD0>(0x000049, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:198 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F852: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000025, 2); else cpu.execute_instruction<0xA9>(0x009525, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:198 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F852.
    case 0xC1F854: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:198 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F855: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:198 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F854.
    case 0xC1F856: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:198 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F857: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:198 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F856.
    case 0xC1F858: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:198 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F857.
    case 0xC1F859: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:198 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F85A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:199 LDA @VIRTUAL02
    case 0xC1F85C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:200 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F85E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:200 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F860: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:200 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F861: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:200 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F863: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:200 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F864: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:200 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F866: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:200 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F867: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:201 CLC
    case 0xC1F869: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:202 ADC @VIRTUAL06
    case 0xC1F86A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:203 STA @VIRTUAL06
    case 0xC1F86C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:204 STA @LOCAL00
    case 0xC1F86E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:205 LDA @VIRTUAL06+2
    case 0xC1F870: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:206 STA @LOCAL00+2
    case 0xC1F872: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:207 LDA #NAME_THEM_STRING_LENGTH
    case 0xC1F874: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00000F, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:207 LDA #NAME_THEM_STRING_LENGTH
    // Overlapping static entry reached from 0xC1F874.
    case 0xC1F876: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:208 STA @LOCAL01
    case 0xC1F877: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:209 LDY @VIRTUAL02
    case 0xC1F879: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:210 LDX #.LOWORD(GAME_STATE) + game_state::favourite_food
    case 0xC1F87B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000D3, 2); else cpu.execute_instruction<0xA2>(0x009AD3, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:210 LDX #.LOWORD(GAME_STATE) + game_state::favourite_food
    // Overlapping static entry reached from 0xC1F87B.
    case 0xC1F87D: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:211 LDA #.SIZEOF(game_state::favourite_food)
    case 0xC1F87E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:211 LDA #.SIZEOF(game_state::favourite_food)
    // Overlapping static entry reached from 0xC1F87E.
    case 0xC1F880: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:212 JSR NAME_A_CHARACTER
    case 0xC1F881: cpu.execute_instruction<0x20>(0x00EAF3, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:213 CMP #0
    case 0xC1F884: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:213 CMP #0
    // Overlapping static entry reached from 0xC1F884.
    case 0xC1F886: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:214 BEQ @UNKNOWN27
    case 0xC1F887: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:215 LDA #$FFFF
    case 0xC1F889: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:215 LDA #$FFFF
    // Overlapping static entry reached from 0xC1F889.
    case 0xC1F88B: cpu.execute_instruction<0xFF>(0x850485, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:216 STA @VIRTUAL04
    case 0xC1F88C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:217 STA @LOCAL08
    case 0xC1F88E: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:217 STA @LOCAL08
    // Overlapping static entry reached from 0xC1F88B.
    case 0xC1F88F: cpu.execute_instruction<0x24>(0x000080, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:218 BRA @UNKNOWN30
    case 0xC1F890: cpu.execute_instruction<0x80>(0x000057, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:218 BRA @UNKNOWN30
    // Overlapping static entry reached from 0xC1F88F.
    case 0xC1F891: cpu.execute_instruction<0x57>(0x0000A9, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:220 LDA #1
    case 0xC1F892: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:220 LDA #1
    // Overlapping static entry reached from 0xC1F891.
    case 0xC1F893: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:220 LDA #1
    // Overlapping static entry reached from 0xC1F892.
    case 0xC1F894: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:221 STA @VIRTUAL04
    case 0xC1F895: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:222 STA @LOCAL08
    case 0xC1F897: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:223 BRA @UNKNOWN30
    case 0xC1F899: cpu.execute_instruction<0x80>(0x00004E, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:225 LDA @VIRTUAL02
    case 0xC1F89B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:226 CMP #FILE_MENU_NEW_GAME_NAME::FAVORITE_THING
    case 0xC1F89D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:226 CMP #FILE_MENU_NEW_GAME_NAME::FAVORITE_THING
    // Overlapping static entry reached from 0xC1F89D.
    case 0xC1F89F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:227 BNE @UNKNOWN30
    case 0xC1F8A0: cpu.execute_instruction<0xD0>(0x000047, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:228 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F8A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000025, 2); else cpu.execute_instruction<0xA9>(0x009525, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:228 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F8A2.
    case 0xC1F8A4: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:228 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F8A5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:228 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F8A4.
    case 0xC1F8A6: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:228 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F8A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:228 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F8A6.
    case 0xC1F8A8: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:228 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F8A7.
    case 0xC1F8A9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:228 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F8AA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:229 LDA @VIRTUAL02
    case 0xC1F8AC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:581 STA scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:230 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F8AE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:582 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:230 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F8B0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:583 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:230 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F8B1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:584 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:230 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F8B3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:585 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:230 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F8B4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:586 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:230 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F8B6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:587 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:230 OPTIMIZED_MULT @VIRTUAL04, 15
    case 0xC1F8B7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:231 CLC
    case 0xC1F8B9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:232 ADC @VIRTUAL06
    case 0xC1F8BA: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:233 STA @VIRTUAL06
    case 0xC1F8BC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:234 STA @LOCAL00
    case 0xC1F8BE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:235 LDA @VIRTUAL06+2
    case 0xC1F8C0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:236 STA @LOCAL00+2
    case 0xC1F8C2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:237 LDA #NAME_THEM_STRING_LENGTH
    case 0xC1F8C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00000F, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:237 LDA #NAME_THEM_STRING_LENGTH
    // Overlapping static entry reached from 0xC1F8C4.
    case 0xC1F8C6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:238 STA @LOCAL01
    case 0xC1F8C7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:239 LDY @VIRTUAL02
    case 0xC1F8C9: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:240 LDX #.LOWORD(GAME_STATE) + game_state::favourite_thing + 2 ; part after 'PK ' prefix
    case 0xC1F8CB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000DB, 2); else cpu.execute_instruction<0xA2>(0x009ADB, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:240 LDX #.LOWORD(GAME_STATE) + game_state::favourite_thing + 2 ; part after 'PK ' prefix
    // Overlapping static entry reached from 0xC1F8CB.
    case 0xC1F8CD: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:241 LDA #.SIZEOF(game_state::favourite_thing) - 3
    case 0xC1F8CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:241 LDA #.SIZEOF(game_state::favourite_thing) - 3
    // Overlapping static entry reached from 0xC1F8CE.
    case 0xC1F8D0: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:242 JSR NAME_A_CHARACTER
    case 0xC1F8D1: cpu.execute_instruction<0x20>(0x00EAF3, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:243 CMP #0
    case 0xC1F8D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:243 CMP #0
    // Overlapping static entry reached from 0xC1F8D4.
    case 0xC1F8D6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:244 BEQ @UNKNOWN29
    case 0xC1F8D7: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:245 LDA #$FFFF
    case 0xC1F8D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:245 LDA #$FFFF
    // Overlapping static entry reached from 0xC1F8D9.
    case 0xC1F8DB: cpu.execute_instruction<0xFF>(0x850485, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:246 STA @VIRTUAL04
    case 0xC1F8DC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:247 STA @LOCAL08
    case 0xC1F8DE: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:247 STA @LOCAL08
    // Overlapping static entry reached from 0xC1F8DB.
    case 0xC1F8DF: cpu.execute_instruction<0x24>(0x000080, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:248 BRA @UNKNOWN30
    case 0xC1F8E0: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:248 BRA @UNKNOWN30
    // Overlapping static entry reached from 0xC1F8DF.
    case 0xC1F8E1: cpu.execute_instruction<0x07>(0x0000A9, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:250 LDA #1
    case 0xC1F8E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:250 LDA #1
    // Overlapping static entry reached from 0xC1F8E1.
    case 0xC1F8E3: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:250 LDA #1
    // Overlapping static entry reached from 0xC1F8E2.
    case 0xC1F8E4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:251 STA @VIRTUAL04
    case 0xC1F8E5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:252 STA @LOCAL08
    case 0xC1F8E7: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:254 LDA @VIRTUAL02
    case 0xC1F8E9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:255 JSL UNKNOWN_C4D830
    case 0xC1F8EB: cpu.execute_instruction<0x22>(0xC4AB03, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:256 LDA @LOCAL08
    case 0xC1F8EF: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:257 STA @VIRTUAL04
    case 0xC1F8F1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:258 LDA @VIRTUAL02
    case 0xC1F8F3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:259 CLC
    case 0xC1F8F5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:260 ADC @VIRTUAL04
    case 0xC1F8F6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:261 STA @VIRTUAL02
    case 0xC1F8F8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:263 LDA #THINGS_NAMED_COUNT
    case 0xC1F8FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:263 LDA #THINGS_NAMED_COUNT
    // Overlapping static entry reached from 0xC1F8FA.
    case 0xC1F8FC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:264 CLC
    case 0xC1F8FD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:265 SBC @VIRTUAL02
    case 0xC1F8FE: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:266 JUMPGTS @UNKNOWN19
    case 0xC1F900: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:266 JUMPGTS @UNKNOWN19
    case 0xC1F902: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:266 JUMPGTS @UNKNOWN19
    case 0xC1F904: cpu.execute_instruction<0x4C>(0x00F766, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:266 JUMPGTS @UNKNOWN19
    case 0xC1F907: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:266 JUMPGTS @UNKNOWN19
    case 0xC1F909: cpu.execute_instruction<0x4C>(0x00F766, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:267 JSR UNKNOWN_C1008E
    case 0xC1F90C: cpu.execute_instruction<0x20>(0x0002AF, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:268 JSR SET_INSTANT_PRINTING
    case 0xC1F90F: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:269 LDX #0
    case 0xC1F912: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:269 LDX #0
    // Overlapping static entry reached from 0xC1F912.
    case 0xC1F914: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:270 STX @LOCAL07
    case 0xC1F915: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:271 BRA @UNKNOWN35
    case 0xC1F917: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:273 TXA
    case 0xC1F919: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:274 CLC
    case 0xC1F91A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:275 ADC #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_NESS
    case 0xC1F91B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001D, 2); else cpu.execute_instruction<0x69>(0x00001D, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:275 ADC #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_NESS
    // Overlapping static entry reached from 0xC1F91B.
    case 0xC1F91D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:276 JSR CREATE_WINDOW
    case 0xC1F91E: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:277 LDX @LOCAL07
    case 0xC1F921: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:278 INX
    case 0xC1F923: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:279 STX @LOCAL06
    case 0xC1F924: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:280 TXA
    case 0xC1F926: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:281 JSR UNKNOWN_C1931B
    case 0xC1F927: cpu.execute_instruction<0x20>(0x00940D, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:282 LDX @LOCAL06
    case 0xC1F92A: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:283 STX @LOCAL07
    case 0xC1F92C: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:285 STX @VIRTUAL02
    case 0xC1F92E: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:286 LDA #PLAYER_CHAR_COUNT
    case 0xC1F930: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:286 LDA #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC1F930.
    case 0xC1F932: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:287 CLC
    case 0xC1F933: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:288 SBC @VIRTUAL02
    case 0xC1F934: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:289 BRANCHGTS @UNKNOWN34
    case 0xC1F936: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:289 BRANCHGTS @UNKNOWN34
    case 0xC1F938: cpu.execute_instruction<0x10>(0x0000DF, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:289 BRANCHGTS @UNKNOWN34
    case 0xC1F93A: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:289 BRANCHGTS @UNKNOWN34
    case 0xC1F93C: cpu.execute_instruction<0x30>(0x0000DB, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:290 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_KING
    case 0xC1F93E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000021, 2); else cpu.execute_instruction<0xA9>(0x000021, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:290 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_KING
    // Overlapping static entry reached from 0xC1F93E.
    case 0xC1F940: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:290 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_KING
    case 0xC1F941: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:291 LDA #7
    case 0xC1F944: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:291 LDA #7
    // Overlapping static entry reached from 0xC1F944.
    case 0xC1F946: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:292 JSR UNKNOWN_C1931B
    case 0xC1F947: cpu.execute_instruction<0x20>(0x00940D, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:293 LDA #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_FOOD
    case 0xC1F94A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x000022, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:293 LDA #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_FOOD
    // Overlapping static entry reached from 0xC1F94A.
    case 0xC1F94C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:294 JSR CREATE_WINDOW
    case 0xC1F94D: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:295 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    case 0xC1F950: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008E, 2); else cpu.execute_instruction<0xA9>(0x00958E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:295 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    // Overlapping static entry reached from 0xC1F950.
    case 0xC1F952: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:295 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    case 0xC1F953: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:295 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    // Overlapping static entry reached from 0xC1F952.
    case 0xC1F954: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:295 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    case 0xC1F955: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:295 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    // Overlapping static entry reached from 0xC1F955.
    case 0xC1F957: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:295 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    case 0xC1F958: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:296 LDA #9
    case 0xC1F95A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:296 LDA #9
    // Overlapping static entry reached from 0xC1F95A.
    case 0xC1F95C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:297 JSR PRINT_STRING
    case 0xC1F95D: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:298 LDA #.LOWORD(WINDOW_STATS) + window_stats::width
    case 0xC1F960: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CC, 2); else cpu.execute_instruction<0xA9>(0x0089CC, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:298 LDA #.LOWORD(WINDOW_STATS) + window_stats::width
    // Overlapping static entry reached from 0xC1F960.
    case 0xC1F962: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000285, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:299 STA @VIRTUAL02
    case 0xC1F963: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:299 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC1F962.
    case 0xC1F964: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:300 STA @LOCAL07
    case 0xC1F965: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:301 LDY #.LOWORD(GAME_STATE) + game_state::favourite_food
    case 0xC1F967: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D3, 2); else cpu.execute_instruction<0xA0>(0x009AD3, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:301 LDY #.LOWORD(GAME_STATE) + game_state::favourite_food
    // Overlapping static entry reached from 0xC1F967.
    case 0xC1F969: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:302 STY @LOCAL06
    case 0xC1F96A: cpu.execute_instruction<0x84>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:303 LDX #6
    case 0xC1F96C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:303 LDX #6
    // Overlapping static entry reached from 0xC1F96C.
    case 0xC1F96E: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:304 TYA
    case 0xC1F96F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:305 JSR UNKNOWN_C117E2
    case 0xC1F970: cpu.execute_instruction<0x20>(0x001DBF, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:306 LDX #1
    case 0xC1F973: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:306 LDX #1
    // Overlapping static entry reached from 0xC1F973.
    case 0xC1F975: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:307 STX @LOCAL05
    case 0xC1F976: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:308 PHA
    case 0xC1F978: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:309 LDA OPEN_WINDOW_TABLE + WINDOW::FILE_SELECT_NAMING_CONFIRMATION_FOOD * 2
    case 0xC1F979: cpu.execute_instruction<0xAD>(0x008C6A, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:310 LDY #.SIZEOF(window_stats)
    case 0xC1F97C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:310 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1F97C.
    case 0xC1F97E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:311 JSL MULT168
    case 0xC1F97F: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:312 CLC
    case 0xC1F983: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:313 ADC @VIRTUAL02
    case 0xC1F984: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:314 TAX
    case 0xC1F986: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:315 LDA __BSS_START__,X
    case 0xC1F987: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:316 PLY
    case 0xC1F98A: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:317 STY @VIRTUAL02
    case 0xC1F98B: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:318 SEC
    case 0xC1F98D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:319 SBC @VIRTUAL02
    case 0xC1F98E: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:320 LDX @LOCAL05
    case 0xC1F990: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:321 JSR UNKNOWN_C438A5
    case 0xC1F992: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:322 LDY @LOCAL06
    case 0xC1F995: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:323 TYA
    case 0xC1F997: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:324 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F998: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:324 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F99A: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:324 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F99B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:324 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F99D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:324 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F99E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:324 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F9A0: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:325 REP #PROC_FLAGS::ACCUM8
    case 0xC1F9A2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:326 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F9A4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:326 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F9A6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:326 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F9A8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:326 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F9AA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:327 LDA #6
    case 0xC1F9AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:327 LDA #6
    // Overlapping static entry reached from 0xC1F9AC.
    case 0xC1F9AE: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:328 JSR PRINT_STRING
    case 0xC1F9AF: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:329 LDA #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_THING
    case 0xC1F9B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000023, 2); else cpu.execute_instruction<0xA9>(0x000023, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:329 LDA #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_THING
    // Overlapping static entry reached from 0xC1F9B2.
    case 0xC1F9B4: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:330 JSR CREATE_WINDOW
    case 0xC1F9B5: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:331 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    case 0xC1F9B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000097, 2); else cpu.execute_instruction<0xA9>(0x009597, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:331 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    // Overlapping static entry reached from 0xC1F9B8.
    case 0xC1F9BA: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:331 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    case 0xC1F9BB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:331 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    // Overlapping static entry reached from 0xC1F9BA.
    case 0xC1F9BC: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:331 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    case 0xC1F9BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:331 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    // Overlapping static entry reached from 0xC1F9BD.
    case 0xC1F9BF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:331 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    case 0xC1F9C0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:332 LDA #11
    case 0xC1F9C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000B, 2); else cpu.execute_instruction<0xA9>(0x00000B, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:332 LDA #11
    // Overlapping static entry reached from 0xC1F9C2.
    case 0xC1F9C4: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:333 JSR PRINT_STRING
    case 0xC1F9C5: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:334 LDY #.LOWORD(GAME_STATE) + game_state::favourite_thing + 2 ; part after 'PSI ' prefix
    case 0xC1F9C8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000DB, 2); else cpu.execute_instruction<0xA0>(0x009ADB, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:334 LDY #.LOWORD(GAME_STATE) + game_state::favourite_thing + 2 ; part after 'PSI ' prefix
    // Overlapping static entry reached from 0xC1F9C8.
    case 0xC1F9CA: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:335 STY @LOCAL04
    case 0xC1F9CB: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:336 LDX #6
    case 0xC1F9CD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:336 LDX #6
    // Overlapping static entry reached from 0xC1F9CD.
    case 0xC1F9CF: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:337 TYA
    case 0xC1F9D0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:338 JSR UNKNOWN_C117E2
    case 0xC1F9D1: cpu.execute_instruction<0x20>(0x001DBF, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:339 LDX #1
    case 0xC1F9D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:339 LDX #1
    // Overlapping static entry reached from 0xC1F9D4.
    case 0xC1F9D6: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:340 STX @LOCAL05
    case 0xC1F9D7: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:341 PHA
    case 0xC1F9D9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:342 LDA @LOCAL07
    case 0xC1F9DA: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:343 STA @VIRTUAL02
    case 0xC1F9DC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:344 LDA OPEN_WINDOW_TABLE + WINDOW::FILE_SELECT_NAMING_CONFIRMATION_THING * 2
    case 0xC1F9DE: cpu.execute_instruction<0xAD>(0x008C6C, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:345 LDY #.SIZEOF(window_stats)
    case 0xC1F9E1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:345 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1F9E1.
    case 0xC1F9E3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:346 JSL MULT168
    case 0xC1F9E4: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:347 CLC
    case 0xC1F9E8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:348 ADC @VIRTUAL02
    case 0xC1F9E9: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:349 TAX
    case 0xC1F9EB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:350 LDA __BSS_START__,X
    case 0xC1F9EC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:351 PLY
    case 0xC1F9EF: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:352 STY @VIRTUAL02
    case 0xC1F9F0: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:353 SEC
    case 0xC1F9F2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:354 SBC @VIRTUAL02
    case 0xC1F9F3: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:355 LDX @LOCAL05
    case 0xC1F9F5: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:356 JSR UNKNOWN_C438A5
    case 0xC1F9F7: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:357 LDY @LOCAL04
    case 0xC1F9FA: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:358 TYA
    case 0xC1F9FC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:359 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F9FD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:359 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1F9FF: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:359 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1FA00: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:359 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1FA02: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:359 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1FA03: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:359 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1FA05: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:360 REP #PROC_FLAGS::ACCUM8
    case 0xC1FA07: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:361 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FA09: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:361 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FA0B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:361 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FA0D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:361 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FA0F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:362 LDA #7
    case 0xC1FA11: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:362 LDA #7
    // Overlapping static entry reached from 0xC1FA11.
    case 0xC1FA13: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:363 JSR PRINT_STRING
    case 0xC1FA14: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:364 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_MESSAGE
    case 0xC1FA17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x000024, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:364 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_MESSAGE
    // Overlapping static entry reached from 0xC1FA17.
    case 0xC1FA19: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:364 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_MESSAGE
    case 0xC1FA1A: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:365 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    case 0xC1FA1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A2, 2); else cpu.execute_instruction<0xA9>(0x0095A2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:365 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    // Overlapping static entry reached from 0xC1FA1D.
    case 0xC1FA1F: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:365 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    case 0xC1FA20: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:365 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    // Overlapping static entry reached from 0xC1FA1F.
    case 0xC1FA21: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:365 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    case 0xC1FA22: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:365 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    // Overlapping static entry reached from 0xC1FA22.
    case 0xC1FA24: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:365 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    case 0xC1FA25: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:366 LDA #12
    case 0xC1FA27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:366 LDA #12
    // Overlapping static entry reached from 0xC1FA27.
    case 0xC1FA29: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:367 JSR PRINT_STRING
    case 0xC1FA2A: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:368 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1FA2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:368 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FA2D.
    case 0xC1FA2F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:368 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1FA30: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:368 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1FA32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:368 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FA32.
    case 0xC1FA34: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:368 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1FA35: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:369 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    case 0xC1FA37: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AE, 2); else cpu.execute_instruction<0xA9>(0x0095AE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:369 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    // Overlapping static entry reached from 0xC1FA37.
    case 0xC1FA39: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:369 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    case 0xC1FA3A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:369 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    // Overlapping static entry reached from 0xC1FA39.
    case 0xC1FA3B: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:369 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    case 0xC1FA3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:369 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    // Overlapping static entry reached from 0xC1FA3C.
    case 0xC1FA3E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:369 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    case 0xC1FA3F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:370 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FA41: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:370 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FA43: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:370 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FA45: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:370 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FA47: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:371 LDY #0
    case 0xC1FA49: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:371 LDY #0
    // Overlapping static entry reached from 0xC1FA49.
    case 0xC1FA4B: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:372 LDX #13
    case 0xC1FA4C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000D, 2); else cpu.execute_instruction<0xA2>(0x00000D, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:372 LDX #13
    // Overlapping static entry reached from 0xC1FA4C.
    case 0xC1FA4E: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:373 LDA #1
    case 0xC1FA4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:373 LDA #1
    // Overlapping static entry reached from 0xC1FA4F.
    case 0xC1FA51: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:374 JSR UNKNOWN_C1153B
    case 0xC1FA52: cpu.execute_instruction<0x20>(0x001B27, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:375 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    case 0xC1FA55: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B1, 2); else cpu.execute_instruction<0xA9>(0x0095B1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:375 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    // Overlapping static entry reached from 0xC1FA55.
    case 0xC1FA57: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:375 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    case 0xC1FA58: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:375 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    // Overlapping static entry reached from 0xC1FA57.
    case 0xC1FA59: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:375 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    case 0xC1FA5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:375 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    // Overlapping static entry reached from 0xC1FA5A.
    case 0xC1FA5C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:375 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    case 0xC1FA5D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:376 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FA5F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:376 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FA61: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:376 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FA63: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:376 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FA65: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:377 LDY #0
    case 0xC1FA67: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:377 LDY #0
    // Overlapping static entry reached from 0xC1FA67.
    case 0xC1FA69: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:378 LDX #17
    case 0xC1FA6A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000011, 2); else cpu.execute_instruction<0xA2>(0x000011, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:378 LDX #17
    // Overlapping static entry reached from 0xC1FA6A.
    case 0xC1FA6C: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:379 TYA
    case 0xC1FA6D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:380 JSR UNKNOWN_C1153B
    case 0xC1FA6E: cpu.execute_instruction<0x20>(0x001B27, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:381 JSR PRINT_MENU_ITEMS
    case 0xC1FA71: cpu.execute_instruction<0x20>(0x001BF0, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:382 JSL UNKNOWN_C4D8FA
    case 0xC1FA74: cpu.execute_instruction<0x22>(0xC4ABCD, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:383 LDA #1
    case 0xC1FA78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:383 LDA #1
    // Overlapping static entry reached from 0xC1FA78.
    case 0xC1FA7A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:384 JSR SELECTION_MENU
    case 0xC1FA7B: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:385 TAX
    case 0xC1FA7E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:386 BNE @EVERYTHING_OKAY
    case 0xC1FA7F: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:387 JSL UNKNOWN_C021E6
    case 0xC1FA81: cpu.execute_instruction<0x22>(0xC021F4, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:388 JMP @UNKNOWN18
    case 0xC1FA85: cpu.execute_instruction<0x4C>(0x00F75B, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:390 LDA #MUSIC::NAME_CONFIRMATION
    case 0xC1FA88: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009E, 2); else cpu.execute_instruction<0xA9>(0x00009E, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:390 LDA #MUSIC::NAME_CONFIRMATION
    // Overlapping static entry reached from 0xC1FA88.
    case 0xC1FA8A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:391 JSL CHANGE_MUSIC
    case 0xC1FA8B: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:392 JSL WINDOW_TICK
    case 0xC1FA8F: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:393 LDX #0
    case 0xC1FA93: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:393 LDX #0
    // Overlapping static entry reached from 0xC1FA93.
    case 0xC1FA95: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:394 STX @LOCAL03
    case 0xC1FA96: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:395 BRA @UNKNOWN46
    case 0xC1FA98: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:397 JSL UNKNOWN_C1004E
    case 0xC1FA9A: cpu.execute_instruction<0x22>(0xC100C4, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:398 LDX @LOCAL03
    case 0xC1FA9E: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:399 INX
    case 0xC1FAA0: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:400 STX @LOCAL03
    case 0xC1FAA1: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:402 STX @VIRTUAL02
    case 0xC1FAA3: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:403 LDA #180
    case 0xC1FAA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B4, 2); else cpu.execute_instruction<0xA9>(0x0000B4, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:403 LDA #180
    // Overlapping static entry reached from 0xC1FAA5.
    case 0xC1FAA7: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:404 CLC
    case 0xC1FAA8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:405 SBC @VIRTUAL02
    case 0xC1FAA9: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:406 BRANCHGTS @UNKNOWN45
    case 0xC1FAAB: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:406 BRANCHGTS @UNKNOWN45
    case 0xC1FAAD: cpu.execute_instruction<0x10>(0x0000EB, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:406 BRANCHGTS @UNKNOWN45
    case 0xC1FAAF: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:406 BRANCHGTS @UNKNOWN45
    case 0xC1FAB1: cpu.execute_instruction<0x30>(0x0000E7, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:407 JSL UNKNOWN_C021E6
    case 0xC1FAB3: cpu.execute_instruction<0x22>(0xC021F4, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:408 STZ @LOCAL03
    case 0xC1FAB7: cpu.execute_instruction<0x64>(0x00001A, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:409 JMP @UNKNOWN51
    case 0xC1FAB9: cpu.execute_instruction<0x4C>(0x00FBA3, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:411 LDA @LOCAL03
    case 0xC1FABC: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:412 STA @VIRTUAL04
    case 0xC1FABE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:413 INC @VIRTUAL04
    case 0xC1FAC0: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:414 LDA @VIRTUAL04
    case 0xC1FAC2: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:415 STA @LOCAL07
    case 0xC1FAC4: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:416 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FAC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000055, 2); else cpu.execute_instruction<0xA9>(0x00F555, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:416 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FAC6.
    case 0xC1FAC8: cpu.execute_instruction<0xF5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:416 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FAC9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:416 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FAC8.
    case 0xC1FACA: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:416 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FACB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:416 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FACA.
    case 0xC1FACC: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:416 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FACB.
    case 0xC1FACD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:416 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FACE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:417 LDA @LOCAL03
    case 0xC1FAD0: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:418 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FAD2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:418 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FAD4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:418 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FAD5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:418 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FAD6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:418 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FAD8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:418 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FAD9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:419 STA @VIRTUAL02
    case 0xC1FADA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:420 LDY #0
    case 0xC1FADC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:420 LDY #0
    // Overlapping static entry reached from 0xC1FADC.
    case 0xC1FADE: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:421 LDA @VIRTUAL02
    case 0xC1FADF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:422 CLC
    case 0xC1FAE1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:423 ADC #initial_stats::level
    case 0xC1FAE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:423 ADC #initial_stats::level
    // Overlapping static entry reached from 0xC1FAE2.
    case 0xC1FAE4: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:424 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1FAE5: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:424 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1FAE7: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:424 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1FAE9: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:424 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1FAEB: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:425 CLC
    case 0xC1FAED: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:426 ADC @VIRTUAL0A
    case 0xC1FAEE: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:427 STA @VIRTUAL0A
    case 0xC1FAF0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:428 LDA [@VIRTUAL0A]
    case 0xC1FAF2: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:429 TAX
    case 0xC1FAF4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:430 LDA @LOCAL07
    case 0xC1FAF5: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:431 STA @VIRTUAL04
    case 0xC1FAF7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:432 JSR RESET_CHAR_LEVEL_ONE
    case 0xC1FAF9: cpu.execute_instruction<0x20>(0x00D6CB, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:433 LDA @VIRTUAL02
    case 0xC1FAFC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:434 CLC
    case 0xC1FAFE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:435 ADC #initial_stats::exp
    case 0xC1FAFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:435 ADC #initial_stats::exp
    // Overlapping static entry reached from 0xC1FAFF.
    case 0xC1FB01: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:436 CLC
    case 0xC1FB02: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:437 ADC @VIRTUAL06
    case 0xC1FB03: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:438 STA @VIRTUAL06
    case 0xC1FB05: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:439 LDA [@VIRTUAL06]
    case 0xC1FB07: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:440 BEQ @UNKNOWN50
    case 0xC1FB09: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:441 STORE_INT1632 @VIRTUAL06
    case 0xC1FB0B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:441 STORE_INT1632 @VIRTUAL06
    case 0xC1FB0D: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:442 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB0F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:442 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB11: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:442 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB13: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:442 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB15: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:443 LDX #0
    case 0xC1FB17: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:443 LDX #0
    // Overlapping static entry reached from 0xC1FB17.
    case 0xC1FB19: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:444 LDA @VIRTUAL04
    case 0xC1FB1A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:445 JSL GAIN_EXP
    case 0xC1FB1C: cpu.execute_instruction<0x22>(0xC1D7E4, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:447 LDA @LOCAL03
    case 0xC1FB20: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:448 LDY #.SIZEOF(char_struct)
    case 0xC1FB22: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:448 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1FB22.
    case 0xC1FB24: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:449 JSL MULT168
    case 0xC1FB25: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:450 STA @VIRTUAL02
    case 0xC1FB29: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:451 LDX @VIRTUAL02
    case 0xC1FB2B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:452 LDA PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xC1FB2D: cpu.execute_instruction<0xBD>(0x009C88, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:453 LDX @VIRTUAL02
    case 0xC1FB30: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:454 STA PARTY_CHARACTERS+char_struct::current_hp,X
    case 0xC1FB32: cpu.execute_instruction<0x9D>(0x009CC3, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:455 LDX @VIRTUAL02
    case 0xC1FB35: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:456 STA PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC1FB37: cpu.execute_instruction<0x9D>(0x009CC5, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:457 LDX @VIRTUAL02
    case 0xC1FB3A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:458 LDA PARTY_CHARACTERS+char_struct::max_pp,X
    case 0xC1FB3C: cpu.execute_instruction<0xBD>(0x009C8A, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:459 LDX @VIRTUAL02
    case 0xC1FB3F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:460 STA PARTY_CHARACTERS+char_struct::current_pp,X
    case 0xC1FB41: cpu.execute_instruction<0x9D>(0x009CC9, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:461 LDX @VIRTUAL02
    case 0xC1FB44: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:462 STA PARTY_CHARACTERS+char_struct::current_pp_target,X
    case 0xC1FB46: cpu.execute_instruction<0x9D>(0x009CCB, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:463 LDX @VIRTUAL02
    case 0xC1FB49: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:464 STZ PARTY_CHARACTERS+char_struct::current_pp_fraction,X
    case 0xC1FB4B: cpu.execute_instruction<0x9E>(0x009CC7, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:465 LDX @VIRTUAL02
    case 0xC1FB4E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:466 STZ PARTY_CHARACTERS+char_struct::current_hp_fraction,X
    case 0xC1FB50: cpu.execute_instruction<0x9E>(0x009CC1, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:467 LDA @VIRTUAL02
    case 0xC1FB53: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:468 CLC
    case 0xC1FB55: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:469 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC1FB56: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A1, 2); else cpu.execute_instruction<0x69>(0x009CA1, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:469 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC1FB56.
    case 0xC1FB58: cpu.execute_instruction<0x9C>(0x0084A8, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:470 TAY
    case 0xC1FB59: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:471 STY @LOCAL07
    case 0xC1FB5A: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:471 STY @LOCAL07
    // Overlapping static entry reached from 0xC1FB58.
    case 0xC1FB5B: cpu.execute_instruction<0x22>(0xA920E2, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:472 SEP #PROC_FLAGS::ACCUM8
    case 0xC1FB5C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:473 STZ_BADOPT @LOCAL00
    case 0xC1FB5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:473 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC1FB5B.
    case 0xC1FB5F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:473 STZ_BADOPT @LOCAL00
    case 0xC1FB60: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:473 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC1FB5E.
    case 0xC1FB61: cpu.execute_instruction<0x0E>(0x000EA2, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:474 LDX #14
    case 0xC1FB62: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000E, 2); else cpu.execute_instruction<0xA2>(0x00000E, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:474 LDX #14
    // Overlapping static entry reached from 0xC1FB62.
    case 0xC1FB64: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:475 REP #PROC_FLAGS::ACCUM8
    case 0xC1FB65: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:476 TYA
    case 0xC1FB67: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:477 JSL MEMSET16
    case 0xC1FB68: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:478 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FB6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000055, 2); else cpu.execute_instruction<0xA9>(0x00F555, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:478 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FB6C.
    case 0xC1FB6E: cpu.execute_instruction<0xF5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:478 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FB6F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:478 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FB6E.
    case 0xC1FB70: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:478 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FB71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:478 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FB70.
    case 0xC1FB72: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:478 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FB71.
    case 0xC1FB73: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:478 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FB74: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:479 LDA @LOCAL03
    case 0xC1FB76: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:480 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FB78: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:480 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FB7A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:480 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FB7B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:480 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FB7C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:480 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FB7E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:480 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FB7F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:481 CLC
    case 0xC1FB80: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:482 ADC #initial_stats::items
    case 0xC1FB81: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:482 ADC #initial_stats::items
    // Overlapping static entry reached from 0xC1FB81.
    case 0xC1FB83: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:483 CLC
    case 0xC1FB84: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:484 ADC @VIRTUAL06
    case 0xC1FB85: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:485 STA @VIRTUAL06
    case 0xC1FB87: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:486 STA @LOCAL00
    case 0xC1FB89: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:487 LDA @VIRTUAL06+2
    case 0xC1FB8B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:488 STA @LOCAL00+2
    case 0xC1FB8D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:489 LDX #.SIZEOF(initial_stats::items)
    case 0xC1FB8F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:489 LDX #.SIZEOF(initial_stats::items)
    // Overlapping static entry reached from 0xC1FB8F.
    case 0xC1FB91: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:490 LDY @LOCAL07
    case 0xC1FB92: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:491 TYA
    case 0xC1FB94: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:492 JSL MEMCPY16
    case 0xC1FB95: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:493 LDA #$0400
    case 0xC1FB99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000400, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:493 LDA #$0400
    // Overlapping static entry reached from 0xC1FB99.
    case 0xC1FB9B: cpu.execute_instruction<0x04>(0x0000A6, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:494 LDX @VIRTUAL02
    case 0xC1FB9C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:494 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC1FB9B.
    case 0xC1FB9D: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:495 STA PARTY_CHARACTERS+char_struct::hp_pp_window_options,X
    case 0xC1FB9E: cpu.execute_instruction<0x9D>(0x009CCD, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:496 INC @LOCAL03
    case 0xC1FBA1: cpu.execute_instruction<0xE6>(0x00001A, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:498 LDA #PLAYER_CHAR_COUNT
    case 0xC1FBA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:498 LDA #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC1FBA3.
    case 0xC1FBA5: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:499 CLC
    case 0xC1FBA6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:500 SBC @LOCAL03
    case 0xC1FBA7: cpu.execute_instruction<0xE5>(0x00001A, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:501 JUMPGTS @UNKNOWN49
    case 0xC1FBA9: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:501 JUMPGTS @UNKNOWN49
    case 0xC1FBAB: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:501 JUMPGTS @UNKNOWN49
    case 0xC1FBAD: cpu.execute_instruction<0x4C>(0x00FABC, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:501 JUMPGTS @UNKNOWN49
    case 0xC1FBB0: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:501 JUMPGTS @UNKNOWN49
    case 0xC1FBB2: cpu.execute_instruction<0x4C>(0x00FABC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:502 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FBB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000055, 2); else cpu.execute_instruction<0xA9>(0x00F555, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:502 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FBB5.
    case 0xC1FBB7: cpu.execute_instruction<0xF5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:502 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FBB8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:502 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FBB7.
    case 0xC1FBB9: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:502 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FBBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:502 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FBB9.
    case 0xC1FBBB: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:502 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FBBA.
    case 0xC1FBBC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:502 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FBBD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:503 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1FBBF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:503 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1FBC1: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:503 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1FBC3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:503 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1FBC5: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:504 LDY #initial_stats::money
    case 0xC1FBC7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:504 LDY #initial_stats::money
    // Overlapping static entry reached from 0xC1FBC7.
    case 0xC1FBC9: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:505 LDA [@VIRTUAL06],Y
    case 0xC1FBCA: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:506 STORE_INT1632 @VIRTUAL06
    case 0xC1FBCC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:506 STORE_INT1632 @VIRTUAL06
    case 0xC1FBCE: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:507 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC1FBD0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:507 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC1FBD2: cpu.execute_instruction<0x8D>(0x009AE2, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:507 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC1FBD5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:507 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC1FBD7: cpu.execute_instruction<0x8D>(0x009AE4, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:508 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1FBDA: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:508 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1FBDC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:508 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1FBDE: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:508 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1FBE0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:509 LDY #initial_stats::unknown2
    case 0xC1FBE2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:509 LDY #initial_stats::unknown2
    // Overlapping static entry reached from 0xC1FBE2.
    case 0xC1FBE4: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:510 LDA [@VIRTUAL06],Y
    case 0xC1FBE5: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:511 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC1FBE7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:511 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC1FBE8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:511 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC1FBE9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:512 TAX
    case 0xC1FBEA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:513 LDA [@VIRTUAL06]
    case 0xC1FBEB: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:514 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC1FBED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:514 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC1FBEE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:514 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC1FBEF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:515 JSL UNKNOWN_C0B65F
    case 0xC1FBF0: cpu.execute_instruction<0x22>(0xC0B632, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:516 SEP #PROC_FLAGS::ACCUM8
    case 0xC1FBF4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:517 LDA #CHAR::P
    case 0xC1FBF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x008D50, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:518 STA GAME_STATE+game_state::favourite_thing
    case 0xC1FBF8: cpu.execute_instruction<0x8D>(0x009AD9, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:518 STA GAME_STATE+game_state::favourite_thing
    // Overlapping static entry reached from 0xC1FBF6.
    case 0xC1FBF9: cpu.execute_instruction<0xD9>(0x00A99A, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:519 LDA #CHAR::K
    case 0xC1FBFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004B, 2); else cpu.execute_instruction<0xA9>(0x008D4B, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:519 LDA #CHAR::K
    // Overlapping static entry reached from 0xC1FBF9.
    case 0xC1FBFC: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:520 STA GAME_STATE+game_state::favourite_thing+1
    case 0xC1FBFD: cpu.execute_instruction<0x8D>(0x009ADA, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:520 STA GAME_STATE+game_state::favourite_thing+1
    // Overlapping static entry reached from 0xC1FBFB.
    case 0xC1FBFE: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:520 STA GAME_STATE+game_state::favourite_thing+1
    // Overlapping static entry reached from 0xC1FBFE.
    case 0xC1FBFF: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:521 LDA #1
    case 0xC1FC00: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:522 STA GAME_STATE + game_state::unknownC3
    case 0xC1FC02: cpu.execute_instruction<0x8D>(0x009B69, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:522 STA GAME_STATE + game_state::unknownC3
    // Overlapping static entry reached from 0xC1FC00.
    case 0xC1FC03: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00009B, 2); else cpu.execute_instruction<0x69>(0x00C29B, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:523 REP #PROC_FLAGS::ACCUM8
    case 0xC1FC05: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:523 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1FC03.
    case 0xC1FC06: cpu.execute_instruction<0x20>(0x0028AD, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:524 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC1FC07: cpu.execute_instruction<0xAD>(0x009B28, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:524 LDA GAME_STATE+game_state::leader_x_coord
    // Overlapping static entry reached from 0xC1FC06.
    case 0xC1FC09: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:525 STA RESPAWN_X
    case 0xC1FC0A: cpu.execute_instruction<0x8D>(0x009FA5, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:526 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC1FC0D: cpu.execute_instruction<0xAD>(0x009B2C, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:527 STA RESPAWN_Y
    case 0xC1FC10: cpu.execute_instruction<0x8D>(0x009FA7, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:528 JSL UNKNOWN_C064D4
    case 0xC1FC13: cpu.execute_instruction<0x22>(0xC06702, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:529 LDX #1768
    case 0xC1FC17: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E8, 2); else cpu.execute_instruction<0xA2>(0x0006E8, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:529 LDX #1768
    // Overlapping static entry reached from 0xC1FC17.
    case 0xC1FC19: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:530 LDA #2112
    case 0xC1FC1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000840, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:530 LDA #2112
    // Overlapping static entry reached from 0xC1FC19.
    case 0xC1FC1B: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:530 LDA #2112
    // Overlapping static entry reached from 0xC1FC1A.
    case 0xC1FC1C: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:531 JSL UNKNOWN_C0B65F
    case 0xC1FC1D: cpu.execute_instruction<0x22>(0xC0B632, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:532 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    case 0xC1FC21: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004F, 2); else cpu.execute_instruction<0xA9>(0x00014F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:532 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    // Overlapping static entry reached from 0xC1FC21.
    case 0xC1FC23: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:532 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    case 0xC1FC24: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:532 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    // Overlapping static entry reached from 0xC1FC23.
    case 0xC1FC25: cpu.execute_instruction<0x0E>(0x00C5A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:532 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    case 0xC1FC26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C5, 2); else cpu.execute_instruction<0xA9>(0x0000C5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:532 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    // Overlapping static entry reached from 0xC1FC26.
    case 0xC1FC28: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:532 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    case 0xC1FC29: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:533 JSL UNKNOWN_C46881
    case 0xC1FC2B: cpu.execute_instruction<0x22>(0xC44603, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:534 LDX #1
    case 0xC1FC2F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:534 LDX #1
    // Overlapping static entry reached from 0xC1FC2F.
    case 0xC1FC31: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:535 LDA #EVENT_FLAG::FLG_SYS_MONSTER_OFF
    case 0xC1FC32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000B, 2); else cpu.execute_instruction<0xA9>(0x00000B, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:535 LDA #EVENT_FLAG::FLG_SYS_MONSTER_OFF
    // Overlapping static entry reached from 0xC1FC32.
    case 0xC1FC34: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:536 JSL SET_EVENT_FLAG
    case 0xC1FC35: cpu.execute_instruction<0x22>(0xC21506, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:537 LDA #1
    case 0xC1FC39: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:537 LDA #1
    // Overlapping static entry reached from 0xC1FC39.
    case 0xC1FC3B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:538 STA SHOW_NPC_FLAG
    case 0xC1FC3C: cpu.execute_instruction<0x8D>(0x004DEC, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:540 JSR UNKNOWN_C1008E
    case 0xC1FC3F: cpu.execute_instruction<0x20>(0x0002AF, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:541 JSL UNKNOWN_C3EBCA
    case 0xC1FC42: cpu.execute_instruction<0x22>(0xC3E790, 4); return true;
    // src/intro/file_select_menu_loop-jp.asm:542 LDA GAME_STATE+game_state::text_speed
    case 0xC1FC46: cpu.execute_instruction<0xAD>(0x009B67, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:543 AND #$00FF
    case 0xC1FC49: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:543 AND #$00FF
    // Overlapping static entry reached from 0xC1FC49.
    case 0xC1FC4B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:544 TAX
    case 0xC1FC4C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:545 DEC
    case 0xC1FC4D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:546 STA @LOCAL07
    case 0xC1FC4E: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:547 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    case 0xC1FC50: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x00F664, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:547 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1FC50.
    case 0xC1FC52: cpu.execute_instruction<0xF6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:547 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    case 0xC1FC53: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:547 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1FC52.
    case 0xC1FC54: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:547 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    case 0xC1FC55: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:547 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1FC55.
    case 0xC1FC57: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:547 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    case 0xC1FC58: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:548 LDA @LOCAL07
    case 0xC1FC5A: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:549 ASL
    case 0xC1FC5C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:550 ASL
    case 0xC1FC5D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:551 CLC
    case 0xC1FC5E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:552 ADC @VIRTUAL0A
    case 0xC1FC5F: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:553 STA @VIRTUAL0A
    case 0xC1FC61: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:554 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1FC63: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:554 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FC63.
    case 0xC1FC65: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:554 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1FC66: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:554 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1FC68: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:554 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1FC69: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:554 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1FC6B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:554 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1FC6D: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:555 MOVE_INT @VIRTUAL06, HP_METER_SPEED
    case 0xC1FC6F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:555 MOVE_INT @VIRTUAL06, HP_METER_SPEED
    case 0xC1FC71: cpu.execute_instruction<0x8D>(0x00991F, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:555 MOVE_INT @VIRTUAL06, HP_METER_SPEED
    case 0xC1FC74: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:555 MOVE_INT @VIRTUAL06, HP_METER_SPEED
    case 0xC1FC76: cpu.execute_instruction<0x8D>(0x009921, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:556 LDA @LOCAL07
    case 0xC1FC79: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:557 STA SELECTED_TEXT_SPEED
    case 0xC1FC7B: cpu.execute_instruction<0x8D>(0x00991D, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:558 CPX #3
    case 0xC1FC7E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:558 CPX #3
    // Overlapping static entry reached from 0xC1FC7E.
    case 0xC1FC80: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:559 BNE @UNKNOWN60
    case 0xC1FC81: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:560 LDA #0
    case 0xC1FC83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:560 LDA #0
    // Overlapping static entry reached from 0xC1FC83.
    case 0xC1FC85: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:561 BRA @UNKNOWN61
    case 0xC1FC86: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/intro/file_select_menu_loop-jp.asm:563 TXA
    case 0xC1FC88: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:647 STA scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:564 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FC89: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:648 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:564 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FC8B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:649 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:564 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FC8C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:650 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:564 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FC8E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:651 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:564 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FC8F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:652 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:564 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FC91: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:653 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:564 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FC92: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:654 ASL
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:564 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FC94: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop-jp.asm:566 STA TEXT_SPEED_BASED_WAIT
    case 0xC1FC95: cpu.execute_instruction<0x8D>(0x009943, 3); return true;
    // src/intro/file_select_menu_loop-jp.asm:567 STZ UNREAD_7E5DBA
    case 0xC1FC98: cpu.execute_instruction<0x9C>(0x006140, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:568 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    case 0xC1FC9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F3, 2); else cpu.execute_instruction<0xA9>(0x003BF3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:568 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    // Overlapping static entry reached from 0xC1FC9B.
    case 0xC1FC9D: cpu.execute_instruction<0x3B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:568 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    case 0xC1FC9E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:568 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    case 0xC1FCA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:568 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    // Overlapping static entry reached from 0xC1FCA0.
    case 0xC1FCA2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:568 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    case 0xC1FCA3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:568 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    case 0xC1FCA5: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:569 END_C_FUNCTION
    case 0xC1FCA9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/file_select_menu_loop-jp.asm:569 END_C_FUNCTION
    case 0xC1FCAA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/gas_station.asm (source_named).
bool execute_introduction_gas_station_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/gas_station.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0F409: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/gas_station.asm:8 END_STACK_VARS
    case 0xC0F40B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/gas_station.asm:8 END_STACK_VARS
    case 0xC0F40C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/gas_station.asm:8 END_STACK_VARS
    case 0xC0F40D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000ED, 2); else cpu.execute_instruction<0x69>(0x00FFED, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/gas_station.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F40D.
    case 0xC0F40F: cpu.execute_instruction<0xFF>(0x5E225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/gas_station.asm:8 END_STACK_VARS
    case 0xC0F410: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/intro/gas_station.asm:9 JSL UNKNOWN_C0927C
    case 0xC0F411: cpu.execute_instruction<0x22>(0xC0925E, 4); return true;
    // src/intro/gas_station.asm:9 JSL UNKNOWN_C0927C
    // Overlapping static entry reached from 0xC0F40F.
    case 0xC0F413: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/intro/gas_station.asm:10 JSR GAS_STATION_LOAD
    case 0xC0F415: cpu.execute_instruction<0x20>(0x00F19B, 3); return true;
    // src/intro/gas_station.asm:11 LDX #11
    case 0xC0F418: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000B, 2); else cpu.execute_instruction<0xA2>(0x00000B, 3); return true;
    // src/intro/gas_station.asm:11 LDX #11
    // Overlapping static entry reached from 0xC0F418.
    case 0xC0F41A: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/gas_station.asm:12 LDA #1
    case 0xC0F41B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/gas_station.asm:12 LDA #1
    // Overlapping static entry reached from 0xC0F41B.
    case 0xC0F41D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/gas_station.asm:13 JSL FADE_IN
    case 0xC0F41E: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/intro/gas_station.asm:14 JSR UNKNOWN_C0F21E
    case 0xC0F422: cpu.execute_instruction<0x20>(0x00F2EB, 3); return true;
    // src/intro/gas_station.asm:15 TAY
    case 0xC0F425: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/intro/gas_station.asm:16 STY @LOCAL02
    case 0xC0F426: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/intro/gas_station.asm:17 BEQ @UNKNOWN0
    case 0xC0F428: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/intro/gas_station.asm:18 LDA #1
    case 0xC0F42A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/gas_station.asm:18 LDA #1
    // Overlapping static entry reached from 0xC0F42A.
    case 0xC0F42C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/intro/gas_station.asm:19 BRA @UNKNOWN5
    case 0xC0F42D: cpu.execute_instruction<0x80>(0x000050, 2); return true;
    // src/intro/gas_station.asm:21 LDX #0
    case 0xC0F42F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/gas_station.asm:21 LDX #0
    // Overlapping static entry reached from 0xC0F42F.
    case 0xC0F431: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/intro/gas_station.asm:22 STX @LOCAL01
    case 0xC0F432: cpu.execute_instruction<0x86>(0x00000F, 2); return true;
    // src/intro/gas_station.asm:23 BRA @UNKNOWN3
    case 0xC0F434: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/intro/gas_station.asm:25 LDA PAD_PRESS
    case 0xC0F436: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/intro/gas_station.asm:26 BEQ @UNKNOWN2
    case 0xC0F439: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/intro/gas_station.asm:27 LDA #1
    case 0xC0F43B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/gas_station.asm:27 LDA #1
    // Overlapping static entry reached from 0xC0F43B.
    case 0xC0F43D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/intro/gas_station.asm:28 BRA @UNKNOWN5
    case 0xC0F43E: cpu.execute_instruction<0x80>(0x00003F, 2); return true;
    // src/intro/gas_station.asm:30 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC0F440: cpu.execute_instruction<0x22>(0xC4262B, 4); return true;
    // src/intro/gas_station.asm:31 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0F444: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/intro/gas_station.asm:32 LDX @LOCAL01
    case 0xC0F448: cpu.execute_instruction<0xA6>(0x00000F, 2); return true;
    // src/intro/gas_station.asm:33 INX
    case 0xC0F44A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/intro/gas_station.asm:34 STX @LOCAL01
    case 0xC0F44B: cpu.execute_instruction<0x86>(0x00000F, 2); return true;
    // src/intro/gas_station.asm:36 CPX #330
    case 0xC0F44D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00004A, 2); else cpu.execute_instruction<0xE0>(0x00014A, 3); return true;
    // src/intro/gas_station.asm:36 CPX #330
    // Overlapping static entry reached from 0xC0F44D.
    case 0xC0F44F: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/intro/gas_station.asm:37 BCC @UNKNOWN1
    case 0xC0F450: cpu.execute_instruction<0x90>(0x0000E4, 2); return true;
    // src/intro/gas_station.asm:37 BCC @UNKNOWN1
    // Overlapping static entry reached from 0xC0F44F.
    case 0xC0F451: cpu.execute_instruction<0xE4>(0x0000E2, 2); return true;
    // src/intro/gas_station.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F452: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/gas_station.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0F451.
    case 0xC0F453: cpu.execute_instruction<0x20>(0x001A9C, 3); return true;
    // src/intro/gas_station.asm:39 STZ TM_MIRROR
    case 0xC0F454: cpu.execute_instruction<0x9C>(0x00001A, 3); return true;
    // src/intro/gas_station.asm:39 STZ TM_MIRROR
    // Overlapping static entry reached from 0xC0F453.
    case 0xC0F456: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/intro/gas_station.asm:40 STZ_BADOPT @LOCAL00
    case 0xC0F457: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/intro/gas_station.asm:40 STZ_BADOPT @LOCAL00
    case 0xC0F459: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/intro/gas_station.asm:40 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC0F457.
    case 0xC0F45A: cpu.execute_instruction<0x0E>(0x0000A2, 3); return true;
    // src/intro/gas_station.asm:41 LDX #BPP4PALETTE_SIZE * 16
    case 0xC0F45B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/intro/gas_station.asm:41 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC0F45B.
    case 0xC0F45D: cpu.execute_instruction<0x02>(0x0000C2, 2); return true;
    // src/intro/gas_station.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC0F45E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/gas_station.asm:43 LDA #.LOWORD(PALETTES)
    case 0xC0F460: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/intro/gas_station.asm:43 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0F460.
    case 0xC0F462: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/intro/gas_station.asm:44 JSL MEMSET16
    case 0xC0F463: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/intro/gas_station.asm:45 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F467: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/gas_station.asm:46 LDA #PALETTE_UPLOAD::FULL
    case 0xC0F469: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/intro/gas_station.asm:47 STA PALETTE_UPLOAD_MODE
    case 0xC0F46B: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/intro/gas_station.asm:47 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0F469.
    case 0xC0F46C: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/intro/gas_station.asm:48 LDY @LOCAL02
    case 0xC0F46E: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/intro/gas_station.asm:49 BNE @UNKNOWN4
    case 0xC0F470: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/intro/gas_station.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC0F472: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/gas_station.asm:51 LDA #30
    case 0xC0F474: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00001E, 3); return true;
    // src/intro/gas_station.asm:51 LDA #30
    // Overlapping static entry reached from 0xC0F474.
    case 0xC0F476: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/gas_station.asm:52 JSR UNKNOWN_C0EFE1
    case 0xC0F477: cpu.execute_instruction<0x20>(0x00F0AA, 3); return true;
    // src/intro/gas_station.asm:54 LDY @LOCAL02
    case 0xC0F47A: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/intro/gas_station.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC0F47C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/gas_station.asm:56 TYA
    case 0xC0F47E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/gas_station.asm:58 END_C_FUNCTION
    case 0xC0F47F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/gas_station.asm:58 END_C_FUNCTION
    case 0xC0F480: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/gas_station_load.asm (source_named).
bool execute_introduction_gas_station_load_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/gas_station_load.asm:3 BEGIN_C_FUNCTION
    case 0xC0F19B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/gas_station_load.asm:7 END_STACK_VARS
    case 0xC0F19D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/gas_station_load.asm:7 END_STACK_VARS
    case 0xC0F19E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/gas_station_load.asm:7 END_STACK_VARS
    case 0xC0F19F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/gas_station_load.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F19F.
    case 0xC0F1A1: cpu.execute_instruction<0xFF>(0x379C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/gas_station_load.asm:7 END_STACK_VARS
    case 0xC0F1A2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/intro/gas_station_load.asm:8 STZ BG2_Y_POS
    case 0xC0F1A3: cpu.execute_instruction<0x9C>(0x000037, 3); return true;
    // src/intro/gas_station_load.asm:8 STZ BG2_Y_POS
    // Overlapping static entry reached from 0xC0F1A1.
    case 0xC0F1A5: cpu.execute_instruction<0x00>(0x00009C, 2); return true;
    // src/intro/gas_station_load.asm:9 STZ BG2_X_POS
    case 0xC0F1A6: cpu.execute_instruction<0x9C>(0x000035, 3); return true;
    // src/intro/gas_station_load.asm:10 STZ BG1_Y_POS
    case 0xC0F1A9: cpu.execute_instruction<0x9C>(0x000033, 3); return true;
    // src/intro/gas_station_load.asm:11 STZ BG1_X_POS
    case 0xC0F1AC: cpu.execute_instruction<0x9C>(0x000031, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:12 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0F1AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:12 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F1AF.
    case 0xC0F1B1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:12 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0F1B2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:12 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0F1B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:12 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F1B4.
    case 0xC0F1B6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/gas_station_load.asm:12 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0F1B7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    case 0xC0F1B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004E, 2); else cpu.execute_instruction<0xA9>(0x004F4E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0F1B9.
    case 0xC0F1BB: cpu.execute_instruction<0x4F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    case 0xC0F1BC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    case 0xC0F1BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0F1BB.
    case 0xC0F1BF: cpu.execute_instruction<0xE1>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0F1BE.
    case 0xC0F1C0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    case 0xC0F1C1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/gas_station_load.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F1C3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/gas_station_load.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F1C5: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/gas_station_load.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F1C7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/gas_station_load.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F1C9: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/gas_station_load.asm:15 JSL DECOMP
    case 0xC0F1CB: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F1CF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F1D1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F1D3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F1D5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F1D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    // Overlapping static entry reached from 0xC0F1D7.
    case 0xC0F1D9: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F1DA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x00C000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    // Overlapping static entry reached from 0xC0F1DA.
    case 0xC0F1DC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F1DD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    // Overlapping static entry reached from 0xC0F1DC.
    case 0xC0F1DE: cpu.execute_instruction<0x20>(0x002298, 3); return true;
    // include/macros.asm:1161 TYA
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F1DF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F1E0: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    // Overlapping static entry reached from 0xC0F1DE.
    case 0xC0F1E1: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    // Overlapping static entry reached from 0xC0F1E1.
    case 0xC0F1E3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00FCA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    case 0xC0F1E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x0049FC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0F1E3.
    case 0xC0F1E5: cpu.execute_instruction<0xFC>(0x008549, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0F1E4.
    case 0xC0F1E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000085, 2); else cpu.execute_instruction<0x49>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    case 0xC0F1E7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0F1E6.
    case 0xC0F1E8: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    case 0xC0F1E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0F1E9.
    case 0xC0F1EB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    case 0xC0F1EC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/gas_station_load.asm:19 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F1EE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/gas_station_load.asm:19 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F1F0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/gas_station_load.asm:19 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F1F2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/gas_station_load.asm:19 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F1F4: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/gas_station_load.asm:20 JSL DECOMP
    case 0xC0F1F6: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F1FA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F1FC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F1FE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F200: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F202: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007800, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    // Overlapping static entry reached from 0xC0F202.
    case 0xC0F204: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F205: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    // Overlapping static entry reached from 0xC0F205.
    case 0xC0F207: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F208: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F20A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F20C: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    // Overlapping static entry reached from 0xC0F20A.
    case 0xC0F20D: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    // Overlapping static entry reached from 0xC0F20D.
    case 0xC0F20F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00B9A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F210: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B9, 2); else cpu.execute_instruction<0xA9>(0x009CB9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F20F.
    case 0xC0F211: cpu.execute_instruction<0xB9>(0x00859C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F210.
    case 0xC0F212: cpu.execute_instruction<0x9C>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F213: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F211.
    case 0xC0F214: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F215: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F215.
    case 0xC0F217: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F218: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F21A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    // Overlapping static entry reached from 0xC0F21A.
    case 0xC0F21C: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F21D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F21F: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F220: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F222: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F223: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F225: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/gas_station_load.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC0F227: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/gas_station_load.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F229: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/gas_station_load.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F22B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/gas_station_load.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F22D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/gas_station_load.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F22F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/gas_station_load.asm:27 JSL DECOMP
    case 0xC0F231: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/intro/gas_station_load.asm:28 JSL UNKNOWN_C4A377
    case 0xC0F235: cpu.execute_instruction<0x22>(0xC477E4, 4); return true;
    // src/intro/gas_station_load.asm:29 JSL UNKNOWN_C496F9
    case 0xC0F239: cpu.execute_instruction<0x22>(0xC46D43, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:30 LOADPTR BUFFER + BPP4PALETTE_SIZE * 2, @LOCAL00
    case 0xC0F23D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:30 LOADPTR BUFFER + BPP4PALETTE_SIZE * 2, @LOCAL00
    // Overlapping static entry reached from 0xC0F23D.
    case 0xC0F23F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:30 LOADPTR BUFFER + BPP4PALETTE_SIZE * 2, @LOCAL00
    case 0xC0F240: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:30 LOADPTR BUFFER + BPP4PALETTE_SIZE * 2, @LOCAL00
    case 0xC0F242: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:30 LOADPTR BUFFER + BPP4PALETTE_SIZE * 2, @LOCAL00
    // Overlapping static entry reached from 0xC0F242.
    case 0xC0F244: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/gas_station_load.asm:30 LOADPTR BUFFER + BPP4PALETTE_SIZE * 2, @LOCAL00
    case 0xC0F245: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/gas_station_load.asm:31 LDX #BPP4PALETTE_SIZE
    case 0xC0F247: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/intro/gas_station_load.asm:31 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC0F247.
    case 0xC0F249: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/intro/gas_station_load.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F24A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/gas_station_load.asm:33 LDA #0
    case 0xC0F24C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/intro/gas_station_load.asm:34 JSL MEMSET24
    case 0xC0F24E: cpu.execute_instruction<0x22>(0xC08F06, 4); return true;
    // src/intro/gas_station_load.asm:34 JSL MEMSET24
    // Overlapping static entry reached from 0xC0F24C.
    case 0xC0F24F: cpu.execute_instruction<0x06>(0x00008F, 2); return true;
    // src/intro/gas_station_load.asm:34 JSL MEMSET24
    // Overlapping static entry reached from 0xC0F24F.
    case 0xC0F251: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/intro/gas_station_load.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F252: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/gas_station_load.asm:35 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0F251.
    case 0xC0F253: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/intro/gas_station_load.asm:36 STZ_BADOPT @LOCAL00
    case 0xC0F254: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/intro/gas_station_load.asm:36 STZ_BADOPT @LOCAL00
    case 0xC0F256: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/intro/gas_station_load.asm:36 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC0F254.
    case 0xC0F257: cpu.execute_instruction<0x0E>(0x0040A2, 3); return true;
    // src/intro/gas_station_load.asm:37 LDX #BPP4PALETTE_SIZE * 2
    case 0xC0F258: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // src/intro/gas_station_load.asm:37 LDX #BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC0F258.
    case 0xC0F25A: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/intro/gas_station_load.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC0F25B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/gas_station_load.asm:39 LDA #.LOWORD(PALETTES)
    case 0xC0F25D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/intro/gas_station_load.asm:39 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0F25D.
    case 0xC0F25F: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/intro/gas_station_load.asm:40 JSL MEMSET16
    case 0xC0F260: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/intro/gas_station_load.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F264: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/intro/gas_station_load.asm:42 STZ_BADOPT @LOCAL00
    case 0xC0F266: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/intro/gas_station_load.asm:42 STZ_BADOPT @LOCAL00
    case 0xC0F268: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/intro/gas_station_load.asm:42 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC0F266.
    case 0xC0F269: cpu.execute_instruction<0x0E>(0x00A0A2, 3); return true;
    // src/intro/gas_station_load.asm:43 LDX #13 * BPP4PALETTE_SIZE
    case 0xC0F26A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000A0, 2); else cpu.execute_instruction<0xA2>(0x0001A0, 3); return true;
    // src/intro/gas_station_load.asm:43 LDX #13 * BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC0F26A.
    case 0xC0F26C: cpu.execute_instruction<0x01>(0x0000C2, 2); return true;
    // src/intro/gas_station_load.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC0F26D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/gas_station_load.asm:44 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0F26C.
    case 0xC0F26E: cpu.execute_instruction<0x20>(0x0060A9, 3); return true;
    // src/intro/gas_station_load.asm:45 LDA #.LOWORD(PALETTES) + 3 * BPP4PALETTE_SIZE
    case 0xC0F26F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000060, 2); else cpu.execute_instruction<0xA9>(0x000260, 3); return true;
    // src/intro/gas_station_load.asm:45 LDA #.LOWORD(PALETTES) + 3 * BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC0F26F.
    case 0xC0F271: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/intro/gas_station_load.asm:46 JSL MEMSET16
    case 0xC0F272: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/intro/gas_station_load.asm:47 LDX #$FFFF
    case 0xC0F276: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/intro/gas_station_load.asm:47 LDX #$FFFF
    // Overlapping static entry reached from 0xC0F276.
    case 0xC0F278: cpu.execute_instruction<0xFF>(0x01E0A9, 4); return true;
    // src/intro/gas_station_load.asm:48 LDA #RGBVAL 0,15,0
    case 0xC0F279: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0001E0, 3); return true;
    // src/intro/gas_station_load.asm:48 LDA #RGBVAL 0,15,0
    // Overlapping static entry reached from 0xC0F279.
    case 0xC0F27B: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/intro/gas_station_load.asm:49 JSL UNKNOWN_C496E7
    case 0xC0F27C: cpu.execute_instruction<0x22>(0xC46D31, 4); return true;
    // src/intro/gas_station_load.asm:49 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC0F27B.
    case 0xC0F27D: cpu.execute_instruction<0x31>(0x00006D, 2); return true;
    // src/intro/gas_station_load.asm:49 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC0F27D.
    case 0xC0F27F: cpu.execute_instruction<0xC4>(0x0000E2, 2); return true;
    // src/intro/gas_station_load.asm:50 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F280: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/gas_station_load.asm:50 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0F27F.
    case 0xC0F281: cpu.execute_instruction<0x20>(0x0001A9, 3); return true;
    // src/intro/gas_station_load.asm:51 LDA #$01
    case 0xC0F282: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/intro/gas_station_load.asm:52 STA TM_MIRROR
    case 0xC0F284: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/intro/gas_station_load.asm:52 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0F282.
    case 0xC0F285: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/intro/gas_station_load.asm:52 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0F285.
    case 0xC0F286: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/gas_station_load.asm:53 LDA #$02
    case 0xC0F287: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x008D02, 3); return true;
    // src/intro/gas_station_load.asm:54 STA TD_MIRROR
    case 0xC0F289: cpu.execute_instruction<0x8D>(0x00001B, 3); return true;
    // src/intro/gas_station_load.asm:54 STA TD_MIRROR
    // Overlapping static entry reached from 0xC0F287.
    case 0xC0F28A: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/intro/gas_station_load.asm:54 STA TD_MIRROR
    // Overlapping static entry reached from 0xC0F28A.
    case 0xC0F28B: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/intro/gas_station_load.asm:55 STA f:CGWSEL
    case 0xC0F28C: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/intro/gas_station_load.asm:56 LDA #$03
    case 0xC0F290: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x008F03, 3); return true;
    // src/intro/gas_station_load.asm:57 STA f:CGADSUB
    case 0xC0F292: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/intro/gas_station_load.asm:57 STA f:CGADSUB
    // Overlapping static entry reached from 0xC0F290.
    case 0xC0F293: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/intro/gas_station_load.asm:57 STA f:CGADSUB
    // Overlapping static entry reached from 0xC0F293.
    case 0xC0F295: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/gas_station_load.asm:58 LDA #PALETTE_UPLOAD::FULL
    case 0xC0F296: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/intro/gas_station_load.asm:59 STA PALETTE_UPLOAD_MODE
    case 0xC0F298: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/intro/gas_station_load.asm:59 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0F296.
    case 0xC0F299: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/intro/gas_station_load.asm:60 REP #PROC_FLAGS::ACCUM8
    case 0xC0F29B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/gas_station_load.asm:61 END_C_FUNCTION
    case 0xC0F29D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/gas_station_load.asm:61 END_C_FUNCTION
    case 0xC0F29E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/init_intro.asm (source_named).
bool execute_introduction_init_intro_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/init_intro.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4ADB2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/init_intro.asm:9 END_STACK_VARS
    case 0xC4ADB4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/init_intro.asm:9 END_STACK_VARS
    case 0xC4ADB5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/init_intro.asm:9 END_STACK_VARS
    case 0xC4ADB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/init_intro.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4ADB6.
    case 0xC4ADB8: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/init_intro.asm:9 END_STACK_VARS
    case 0xC4ADB9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/intro/init_intro.asm:12 LDY #0
    case 0xC4ADBA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/init_intro.asm:12 LDY #0
    // Overlapping static entry reached from 0xC4ADBA.
    case 0xC4ADBC: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/intro/init_intro.asm:13 STY @LOCAL01
    case 0xC4ADBD: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/intro/init_intro.asm:19 LDA #1
    case 0xC4ADBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/init_intro.asm:19 LDA #1
    // Overlapping static entry reached from 0xC4ADBF.
    case 0xC4ADC1: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/intro/init_intro.asm:20 STA DISABLED_TRANSITIONS
    case 0xC4ADC2: cpu.execute_instruction<0x8D>(0x00B68A, 3); return true;
    // src/intro/init_intro.asm:21 LDA #2
    case 0xC4ADC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/intro/init_intro.asm:21 LDA #2
    // Overlapping static entry reached from 0xC4ADC5.
    case 0xC4ADC7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:22 JSL UNKNOWN_C0AC0C
    case 0xC4ADC8: cpu.execute_instruction<0x22>(0xC0ABEB, 4); return true;
    // src/intro/init_intro.asm:23 JSL UNKNOWN_C0927C
    case 0xC4ADCC: cpu.execute_instruction<0x22>(0xC0925E, 4); return true;
    // src/intro/init_intro.asm:24 JSL UNKNOWN_C200D9
    case 0xC4ADD0: cpu.execute_instruction<0x22>(0xC200D9, 4); return true;
    // src/intro/init_intro.asm:25 JSL UNKNOWN_C432B1
    case 0xC4ADD4: cpu.execute_instruction<0x22>(0xC4302A, 4); return true;
    // src/intro/init_intro.asm:26 LDA #1
    case 0xC4ADD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/init_intro.asm:26 LDA #1
    // Overlapping static entry reached from 0xC4ADD8.
    case 0xC4ADDA: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/intro/init_intro.asm:27 STA DISABLE_MUSIC_CHANGES
    case 0xC4ADDB: cpu.execute_instruction<0x8D>(0x00615E, 3); return true;
    // src/intro/init_intro.asm:46 LDY @LOCAL01
    case 0xC4ADDE: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/intro/init_intro.asm:47 TYA
    case 0xC4ADE0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/init_intro.asm:51 BEQ @UNKNOWN11
    case 0xC4ADE1: cpu.execute_instruction<0xF0>(0x000044, 2); return true;
    // src/intro/init_intro.asm:52 CMP #1
    case 0xC4ADE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/intro/init_intro.asm:52 CMP #1
    // Overlapping static entry reached from 0xC4ADE3.
    case 0xC4ADE5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/init_intro.asm:53 _BEQL @UNKNOWN14
    case 0xC4ADE6: cpu.execute_instruction<0xF0>(0x000049, 2); return true;
    // src/intro/init_intro.asm:54 CMP #2
    case 0xC4ADE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/intro/init_intro.asm:54 CMP #2
    // Overlapping static entry reached from 0xC4ADE8.
    case 0xC4ADEA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/init_intro.asm:55 _BEQL @UNKNOWN17
    case 0xC4ADEB: cpu.execute_instruction<0xF0>(0x000055, 2); return true;
    // src/intro/init_intro.asm:56 CMP #3
    case 0xC4ADED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/intro/init_intro.asm:56 CMP #3
    // Overlapping static entry reached from 0xC4ADED.
    case 0xC4ADEF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/init_intro.asm:57 _BEQL @UNKNOWN18
    case 0xC4ADF0: cpu.execute_instruction<0xF0>(0x000063, 2); return true;
    // src/intro/init_intro.asm:58 CMP #4
    case 0xC4ADF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/intro/init_intro.asm:58 CMP #4
    // Overlapping static entry reached from 0xC4ADF2.
    case 0xC4ADF4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/init_intro.asm:59 _BEQL @UNKNOWN19
    case 0xC4ADF5: cpu.execute_instruction<0xF0>(0x000071, 2); return true;
    // src/intro/init_intro.asm:60 CMP #5
    case 0xC4ADF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/intro/init_intro.asm:60 CMP #5
    // Overlapping static entry reached from 0xC4ADF7.
    case 0xC4ADF9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/init_intro.asm:61 _BEQL @UNKNOWN20
    case 0xC4ADFA: cpu.execute_instruction<0xF0>(0x000078, 2); return true;
    // src/intro/init_intro.asm:62 CMP #6
    case 0xC4ADFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/intro/init_intro.asm:62 CMP #6
    // Overlapping static entry reached from 0xC4ADFC.
    case 0xC4ADFE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:63 BEQL @UNKNOWN21
    case 0xC4ADFF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:63 BEQL @UNKNOWN21
    case 0xC4AE01: cpu.execute_instruction<0x4C>(0x00AE80, 3); return true;
    // src/intro/init_intro.asm:64 CMP #7
    case 0xC4AE04: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/intro/init_intro.asm:64 CMP #7
    // Overlapping static entry reached from 0xC4AE04.
    case 0xC4AE06: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:65 BEQL @UNKNOWN22
    case 0xC4AE07: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:65 BEQL @UNKNOWN22
    case 0xC4AE09: cpu.execute_instruction<0x4C>(0x00AE8C, 3); return true;
    // src/intro/init_intro.asm:66 CMP #8
    case 0xC4AE0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/intro/init_intro.asm:66 CMP #8
    // Overlapping static entry reached from 0xC4AE0C.
    case 0xC4AE0E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:67 BEQL @UNKNOWN23
    case 0xC4AE0F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:67 BEQL @UNKNOWN23
    case 0xC4AE11: cpu.execute_instruction<0x4C>(0x00AE98, 3); return true;
    // src/intro/init_intro.asm:68 CMP #9
    case 0xC4AE14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/intro/init_intro.asm:68 CMP #9
    // Overlapping static entry reached from 0xC4AE14.
    case 0xC4AE16: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:69 BEQL @UNKNOWN24
    case 0xC4AE17: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:69 BEQL @UNKNOWN24
    case 0xC4AE19: cpu.execute_instruction<0x4C>(0x00AEA4, 3); return true;
    // src/intro/init_intro.asm:70 CMP #10
    case 0xC4AE1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/intro/init_intro.asm:70 CMP #10
    // Overlapping static entry reached from 0xC4AE1C.
    case 0xC4AE1E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:71 BEQL @UNKNOWN25
    case 0xC4AE1F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:71 BEQL @UNKNOWN25
    case 0xC4AE21: cpu.execute_instruction<0x4C>(0x00AEB0, 3); return true;
    // src/intro/init_intro.asm:72 JMP @UNKNOWN26
    case 0xC4AE24: cpu.execute_instruction<0x4C>(0x00AEBC, 3); return true;
    // src/intro/init_intro.asm:74 JSL LOGO_SCREEN
    case 0xC4AE27: cpu.execute_instruction<0x22>(0xC0F0D2, 4); return true;
    // src/intro/init_intro.asm:101 TAX
    case 0xC4AE2B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/init_intro.asm:103 STX @LOCAL00
    case 0xC4AE2C: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/init_intro.asm:104 JMP @UNKNOWN27
    case 0xC4AE2E: cpu.execute_instruction<0x4C>(0x00AEC1, 3); return true;
    // src/intro/init_intro.asm:106 LDA #MUSIC::GAS_STATION
    case 0xC4AE31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/init_intro.asm:106 LDA #MUSIC::GAS_STATION
    // Overlapping static entry reached from 0xC4AE31.
    case 0xC4AE33: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:107 JSL CHANGE_MUSIC
    case 0xC4AE34: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/intro/init_intro.asm:108 JSL GAS_STATION
    case 0xC4AE38: cpu.execute_instruction<0x22>(0xC0F409, 4); return true;
    // src/intro/init_intro.asm:142 TAX
    case 0xC4AE3C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/init_intro.asm:144 STX @LOCAL00
    case 0xC4AE3D: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/init_intro.asm:145 JMP @UNKNOWN27
    case 0xC4AE3F: cpu.execute_instruction<0x4C>(0x00AEC1, 3); return true;
    // src/intro/init_intro.asm:147 LDA #MUSIC::TITLE_SCREEN
    case 0xC4AE42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AF, 2); else cpu.execute_instruction<0xA9>(0x0000AF, 3); return true;
    // src/intro/init_intro.asm:147 LDA #MUSIC::TITLE_SCREEN
    // Overlapping static entry reached from 0xC4AE42.
    case 0xC4AE44: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:148 JSL CHANGE_MUSIC
    case 0xC4AE45: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/intro/init_intro.asm:149 LDA #0
    case 0xC4AE49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/init_intro.asm:149 LDA #0
    // Overlapping static entry reached from 0xC4AE49.
    case 0xC4AE4B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:150 JSL SHOW_TITLE_SCREEN
    case 0xC4AE4C: cpu.execute_instruction<0x22>(0xC0EDC0, 4); return true;
    // src/intro/init_intro.asm:151 TAX
    case 0xC4AE50: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/init_intro.asm:152 STX @LOCAL00
    case 0xC4AE51: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/init_intro.asm:153 BRA @UNKNOWN27
    case 0xC4AE53: cpu.execute_instruction<0x80>(0x00006C, 2); return true;
    // src/intro/init_intro.asm:155 LDA #MUSIC::ATTRACT_MODE
    case 0xC4AE55: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009D, 2); else cpu.execute_instruction<0xA9>(0x00009D, 3); return true;
    // src/intro/init_intro.asm:155 LDA #MUSIC::ATTRACT_MODE
    // Overlapping static entry reached from 0xC4AE55.
    case 0xC4AE57: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:156 JSL CHANGE_MUSIC
    case 0xC4AE58: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/intro/init_intro.asm:157 LDA #0
    case 0xC4AE5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/init_intro.asm:157 LDA #0
    // Overlapping static entry reached from 0xC4AE5C.
    case 0xC4AE5E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:158 JSL UNKNOWN_C4D989
    case 0xC4AE5F: cpu.execute_instruction<0x22>(0xC4AC5C, 4); return true;
    // src/intro/init_intro.asm:159 TAX
    case 0xC4AE63: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/init_intro.asm:160 STX @LOCAL00
    case 0xC4AE64: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/init_intro.asm:161 BRA @UNKNOWN27
    case 0xC4AE66: cpu.execute_instruction<0x80>(0x000059, 2); return true;
    // src/intro/init_intro.asm:163 LDA #2
    case 0xC4AE68: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/intro/init_intro.asm:163 LDA #2
    // Overlapping static entry reached from 0xC4AE68.
    case 0xC4AE6A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:164 JSL UNKNOWN_C4D989
    case 0xC4AE6B: cpu.execute_instruction<0x22>(0xC4AC5C, 4); return true;
    // src/intro/init_intro.asm:165 TAX
    case 0xC4AE6F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/init_intro.asm:166 STX @LOCAL00
    case 0xC4AE70: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/init_intro.asm:167 BRA @UNKNOWN27
    case 0xC4AE72: cpu.execute_instruction<0x80>(0x00004D, 2); return true;
    // src/intro/init_intro.asm:169 LDA #3
    case 0xC4AE74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/intro/init_intro.asm:169 LDA #3
    // Overlapping static entry reached from 0xC4AE74.
    case 0xC4AE76: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:170 JSL UNKNOWN_C4D989
    case 0xC4AE77: cpu.execute_instruction<0x22>(0xC4AC5C, 4); return true;
    // src/intro/init_intro.asm:171 TAX
    case 0xC4AE7B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/init_intro.asm:172 STX @LOCAL00
    case 0xC4AE7C: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/init_intro.asm:173 BRA @UNKNOWN27
    case 0xC4AE7E: cpu.execute_instruction<0x80>(0x000041, 2); return true;
    // src/intro/init_intro.asm:175 LDA #4
    case 0xC4AE80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/intro/init_intro.asm:175 LDA #4
    // Overlapping static entry reached from 0xC4AE80.
    case 0xC4AE82: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:176 JSL UNKNOWN_C4D989
    case 0xC4AE83: cpu.execute_instruction<0x22>(0xC4AC5C, 4); return true;
    // src/intro/init_intro.asm:177 TAX
    case 0xC4AE87: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/init_intro.asm:178 STX @LOCAL00
    case 0xC4AE88: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/init_intro.asm:179 BRA @UNKNOWN27
    case 0xC4AE8A: cpu.execute_instruction<0x80>(0x000035, 2); return true;
    // src/intro/init_intro.asm:181 LDA #5
    case 0xC4AE8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/intro/init_intro.asm:181 LDA #5
    // Overlapping static entry reached from 0xC4AE8C.
    case 0xC4AE8E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:182 JSL UNKNOWN_C4D989
    case 0xC4AE8F: cpu.execute_instruction<0x22>(0xC4AC5C, 4); return true;
    // src/intro/init_intro.asm:183 TAX
    case 0xC4AE93: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/init_intro.asm:184 STX @LOCAL00
    case 0xC4AE94: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/init_intro.asm:185 BRA @UNKNOWN27
    case 0xC4AE96: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/intro/init_intro.asm:187 LDA #6
    case 0xC4AE98: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/intro/init_intro.asm:187 LDA #6
    // Overlapping static entry reached from 0xC4AE98.
    case 0xC4AE9A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:188 JSL UNKNOWN_C4D989
    case 0xC4AE9B: cpu.execute_instruction<0x22>(0xC4AC5C, 4); return true;
    // src/intro/init_intro.asm:189 TAX
    case 0xC4AE9F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/init_intro.asm:190 STX @LOCAL00
    case 0xC4AEA0: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/init_intro.asm:191 BRA @UNKNOWN27
    case 0xC4AEA2: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/intro/init_intro.asm:193 LDA #7
    case 0xC4AEA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/intro/init_intro.asm:193 LDA #7
    // Overlapping static entry reached from 0xC4AEA4.
    case 0xC4AEA6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:194 JSL UNKNOWN_C4D989
    case 0xC4AEA7: cpu.execute_instruction<0x22>(0xC4AC5C, 4); return true;
    // src/intro/init_intro.asm:195 TAX
    case 0xC4AEAB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/init_intro.asm:196 STX @LOCAL00
    case 0xC4AEAC: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/init_intro.asm:197 BRA @UNKNOWN27
    case 0xC4AEAE: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/intro/init_intro.asm:199 LDA #9
    case 0xC4AEB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/intro/init_intro.asm:199 LDA #9
    // Overlapping static entry reached from 0xC4AEB0.
    case 0xC4AEB2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:200 JSL UNKNOWN_C4D989
    case 0xC4AEB3: cpu.execute_instruction<0x22>(0xC4AC5C, 4); return true;
    // src/intro/init_intro.asm:201 TAX
    case 0xC4AEB7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/init_intro.asm:202 STX @LOCAL00
    case 0xC4AEB8: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/init_intro.asm:203 BRA @UNKNOWN27
    case 0xC4AEBA: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/intro/init_intro.asm:206 LDY #1
    case 0xC4AEBC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/intro/init_intro.asm:206 LDY #1
    // Overlapping static entry reached from 0xC4AEBC.
    case 0xC4AEBE: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/intro/init_intro.asm:207 STY @LOCAL01
    case 0xC4AEBF: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/intro/init_intro.asm:214 LDY @LOCAL01
    case 0xC4AEC1: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/intro/init_intro.asm:215 INY
    case 0xC4AEC3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/intro/init_intro.asm:216 STY @LOCAL01
    case 0xC4AEC4: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/intro/init_intro.asm:220 LDX @LOCAL00
    case 0xC4AEC6: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:221 BEQL @UNKNOWN0
    case 0xC4AEC8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:221 BEQL @UNKNOWN0
    case 0xC4AECA: cpu.execute_instruction<0x4C>(0x00ADDE, 3); return true;
    // src/intro/init_intro.asm:222 LDA #2
    case 0xC4AECD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/intro/init_intro.asm:222 LDA #2
    // Overlapping static entry reached from 0xC4AECD.
    case 0xC4AECF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:223 JSL UNKNOWN_C0AC0C
    case 0xC4AED0: cpu.execute_instruction<0x22>(0xC0ABEB, 4); return true;
    // src/intro/init_intro.asm:229 LDA INIDISP_MIRROR
    case 0xC4AED4: cpu.execute_instruction<0xAD>(0x00000D, 3); return true;
    // src/intro/init_intro.asm:230 AND #$00FF
    case 0xC4AED7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/init_intro.asm:230 AND #$00FF
    // Overlapping static entry reached from 0xC4AED7.
    case 0xC4AED9: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/intro/init_intro.asm:231 CMP #$80
    case 0xC4AEDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000080, 3); return true;
    // src/intro/init_intro.asm:231 CMP #$80
    // Overlapping static entry reached from 0xC4AEDA.
    case 0xC4AEDC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/init_intro.asm:232 BEQ @UNKNOWN29
    case 0xC4AEDD: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/intro/init_intro.asm:233 LDY #0
    case 0xC4AEDF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/init_intro.asm:233 LDY #0
    // Overlapping static entry reached from 0xC4AEDF.
    case 0xC4AEE1: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/init_intro.asm:234 LDX #1
    case 0xC4AEE2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/init_intro.asm:234 LDX #1
    // Overlapping static entry reached from 0xC4AEE2.
    case 0xC4AEE4: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/init_intro.asm:235 LDA #4
    case 0xC4AEE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/intro/init_intro.asm:235 LDA #4
    // Overlapping static entry reached from 0xC4AEE5.
    case 0xC4AEE7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:236 JSL FADE_OUT_WITH_MOSAIC
    case 0xC4AEE8: cpu.execute_instruction<0x22>(0xC0880A, 4); return true;
    // src/intro/init_intro.asm:238 SEP #PROC_FLAGS::ACCUM8
    case 0xC4AEEC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/init_intro.asm:239 LDA #$00
    case 0xC4AEEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/intro/init_intro.asm:240 STA f:CGADSUB
    case 0xC4AEF0: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/intro/init_intro.asm:240 STA f:CGADSUB
    // Overlapping static entry reached from 0xC4AEEE.
    case 0xC4AEF1: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/intro/init_intro.asm:240 STA f:CGADSUB
    // Overlapping static entry reached from 0xC4AEF1.
    case 0xC4AEF3: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/intro/init_intro.asm:241 STA f:CGWSEL
    case 0xC4AEF4: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/intro/init_intro.asm:242 LDA #$01
    case 0xC4AEF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/intro/init_intro.asm:243 STA TM_MIRROR
    case 0xC4AEFA: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/intro/init_intro.asm:243 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4AEF8.
    case 0xC4AEFB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/intro/init_intro.asm:243 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4AEFB.
    case 0xC4AEFC: cpu.execute_instruction<0x00>(0x00009C, 2); return true;
    // src/intro/init_intro.asm:244 STZ TD_MIRROR
    case 0xC4AEFD: cpu.execute_instruction<0x9C>(0x00001B, 3); return true;
    // src/intro/init_intro.asm:245 REP #PROC_FLAGS::ACCUM8
    case 0xC4AF00: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/init_intro.asm:246 STZ DISABLE_MUSIC_CHANGES
    case 0xC4AF02: cpu.execute_instruction<0x9C>(0x00615E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/init_intro.asm:247 END_C_FUNCTION
    case 0xC4AF05: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/init_intro.asm:247 END_C_FUNCTION
    case 0xC4AF06: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/load_gas_station_flash_palette.asm (source_named).
bool execute_introduction_load_gas_station_flash_palette_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0F481: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:7 END_STACK_VARS
    case 0xC0F483: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:7 END_STACK_VARS
    case 0xC0F484: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:7 END_STACK_VARS
    case 0xC0F485: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F485.
    case 0xC0F487: cpu.execute_instruction<0xFF>(0x5FA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:7 END_STACK_VARS
    case 0xC0F488: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:8 LOADPTR GAS_STATION_PALETTE_2, @LOCAL00
    case 0xC0F489: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005F, 2); else cpu.execute_instruction<0xA9>(0x009D5F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:8 LOADPTR GAS_STATION_PALETTE_2, @LOCAL00
    // Overlapping static entry reached from 0xC0F489.
    case 0xC0F48B: cpu.execute_instruction<0x9D>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:8 LOADPTR GAS_STATION_PALETTE_2, @LOCAL00
    case 0xC0F48C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:8 LOADPTR GAS_STATION_PALETTE_2, @LOCAL00
    case 0xC0F48E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:8 LOADPTR GAS_STATION_PALETTE_2, @LOCAL00
    // Overlapping static entry reached from 0xC0F48E.
    case 0xC0F490: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:8 LOADPTR GAS_STATION_PALETTE_2, @LOCAL00
    case 0xC0F491: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F493: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F493.
    case 0xC0F495: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F496: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F498: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F499: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F49B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F49C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F49E: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/load_gas_station_flash_palette.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC0F4A0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:11 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F4A2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:11 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F4A4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:11 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F4A6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:11 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F4A8: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/load_gas_station_flash_palette.asm:12 JSL DECOMP
    case 0xC0F4AA: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/intro/load_gas_station_flash_palette.asm:13 LDA #$18
    case 0xC0F4AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/intro/load_gas_station_flash_palette.asm:13 LDA #$18
    // Overlapping static entry reached from 0xC0F4AE.
    case 0xC0F4B0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/load_gas_station_flash_palette.asm:14 JSL UNKNOWN_C0856B
    case 0xC0F4B1: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:15 END_C_FUNCTION
    case 0xC0F4B5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:15 END_C_FUNCTION
    case 0xC0F4B6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/load_gas_station_palette.asm (source_named).
bool execute_introduction_load_gas_station_palette_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/load_gas_station_palette.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0F4B7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/load_gas_station_palette.asm:7 END_STACK_VARS
    case 0xC0F4B9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/load_gas_station_palette.asm:7 END_STACK_VARS
    case 0xC0F4BA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/load_gas_station_palette.asm:7 END_STACK_VARS
    case 0xC0F4BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/load_gas_station_palette.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F4BB.
    case 0xC0F4BD: cpu.execute_instruction<0xFF>(0xB9A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/load_gas_station_palette.asm:7 END_STACK_VARS
    case 0xC0F4BE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/load_gas_station_palette.asm:8 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F4BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B9, 2); else cpu.execute_instruction<0xA9>(0x009CB9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/load_gas_station_palette.asm:8 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F4BF.
    case 0xC0F4C1: cpu.execute_instruction<0x9C>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/load_gas_station_palette.asm:8 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F4C2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/load_gas_station_palette.asm:8 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F4C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/load_gas_station_palette.asm:8 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F4C4.
    case 0xC0F4C6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/load_gas_station_palette.asm:8 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F4C7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/load_gas_station_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F4C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/load_gas_station_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F4C9.
    case 0xC0F4CB: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/load_gas_station_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F4CC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/load_gas_station_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F4CE: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/load_gas_station_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F4CF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/load_gas_station_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F4D1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/load_gas_station_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F4D2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/load_gas_station_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F4D4: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/load_gas_station_palette.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC0F4D6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/load_gas_station_palette.asm:11 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F4D8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/load_gas_station_palette.asm:11 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F4DA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/load_gas_station_palette.asm:11 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F4DC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/load_gas_station_palette.asm:11 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F4DE: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/load_gas_station_palette.asm:12 JSL DECOMP
    case 0xC0F4E0: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/intro/load_gas_station_palette.asm:13 LDA #$18
    case 0xC0F4E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/intro/load_gas_station_palette.asm:13 LDA #$18
    // Overlapping static entry reached from 0xC0F4E4.
    case 0xC0F4E6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/load_gas_station_palette.asm:14 JSL UNKNOWN_C0856B
    case 0xC0F4E7: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/load_gas_station_palette.asm:15 END_C_FUNCTION
    case 0xC0F4EB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/load_gas_station_palette.asm:15 END_C_FUNCTION
    case 0xC0F4EC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/logo_screen.asm (source_named).
bool execute_introduction_logo_screen_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/logo_screen.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0F0D2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/logo_screen.asm:7 END_STACK_VARS
    case 0xC0F0D4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/logo_screen.asm:7 END_STACK_VARS
    case 0xC0F0D5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/logo_screen.asm:7 END_STACK_VARS
    case 0xC0F0D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/logo_screen.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F0D6.
    case 0xC0F0D8: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/logo_screen.asm:7 END_STACK_VARS
    case 0xC0F0D9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/intro/logo_screen.asm:8 LDA #0
    case 0xC0F0DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:8 LDA #0
    // Overlapping static entry reached from 0xC0F0DA.
    case 0xC0F0DC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/logo_screen.asm:9 JSR LOGO_SCREEN_LOAD
    case 0xC0F0DD: cpu.execute_instruction<0x20>(0x00EF31, 3); return true;
    // src/intro/logo_screen.asm:10 LDY #0
    case 0xC0F0E0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:10 LDY #0
    // Overlapping static entry reached from 0xC0F0E0.
    case 0xC0F0E2: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/logo_screen.asm:11 LDX #2
    case 0xC0F0E3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/intro/logo_screen.asm:11 LDX #2
    // Overlapping static entry reached from 0xC0F0E3.
    case 0xC0F0E5: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/logo_screen.asm:12 LDA #1
    case 0xC0F0E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/logo_screen.asm:12 LDA #1
    // Overlapping static entry reached from 0xC0F0E6.
    case 0xC0F0E8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/logo_screen.asm:13 JSL FADE_IN_WITH_MOSAIC
    case 0xC0F0E9: cpu.execute_instruction<0x22>(0xC087C4, 4); return true;
    // src/intro/logo_screen.asm:14 LDA DEBUG
    case 0xC0F0ED: cpu.execute_instruction<0xAD>(0x0046F2, 3); return true;
    // src/intro/logo_screen.asm:15 BEQ @UNKNOWN0
    case 0xC0F0F0: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/intro/logo_screen.asm:16 LDA #180
    case 0xC0F0F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B4, 2); else cpu.execute_instruction<0xA9>(0x0000B4, 3); return true;
    // src/intro/logo_screen.asm:16 LDA #180
    // Overlapping static entry reached from 0xC0F0F2.
    case 0xC0F0F4: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/logo_screen.asm:17 JSR UNKNOWN_C0EFE1
    case 0xC0F0F5: cpu.execute_instruction<0x20>(0x00F0AA, 3); return true;
    // src/intro/logo_screen.asm:18 BRA @UNKNOWN3
    case 0xC0F0F8: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/intro/logo_screen.asm:20 LDX #0
    case 0xC0F0FA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:20 LDX #0
    // Overlapping static entry reached from 0xC0F0FA.
    case 0xC0F0FC: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/intro/logo_screen.asm:21 STX @LOCAL00
    case 0xC0F0FD: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/logo_screen.asm:22 BRA @UNKNOWN2
    case 0xC0F0FF: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/intro/logo_screen.asm:24 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0F101: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/intro/logo_screen.asm:25 LDX @LOCAL00
    case 0xC0F105: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/intro/logo_screen.asm:26 INX
    case 0xC0F107: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/intro/logo_screen.asm:27 STX @LOCAL00
    case 0xC0F108: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/logo_screen.asm:29 CPX #180
    case 0xC0F10A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000B4, 2); else cpu.execute_instruction<0xE0>(0x0000B4, 3); return true;
    // src/intro/logo_screen.asm:29 CPX #180
    // Overlapping static entry reached from 0xC0F10A.
    case 0xC0F10C: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/intro/logo_screen.asm:30 BCC @UNKNOWN1
    case 0xC0F10D: cpu.execute_instruction<0x90>(0x0000F2, 2); return true;
    // src/intro/logo_screen.asm:32 LDY #0
    case 0xC0F10F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:32 LDY #0
    // Overlapping static entry reached from 0xC0F10F.
    case 0xC0F111: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/logo_screen.asm:33 LDX #2
    case 0xC0F112: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/intro/logo_screen.asm:33 LDX #2
    // Overlapping static entry reached from 0xC0F112.
    case 0xC0F114: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/logo_screen.asm:34 LDA #1
    case 0xC0F115: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/logo_screen.asm:34 LDA #1
    // Overlapping static entry reached from 0xC0F115.
    case 0xC0F117: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/logo_screen.asm:35 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0F118: cpu.execute_instruction<0x22>(0xC0880A, 4); return true;
    // src/intro/logo_screen.asm:36 LDA #1
    case 0xC0F11C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/logo_screen.asm:36 LDA #1
    // Overlapping static entry reached from 0xC0F11C.
    case 0xC0F11E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/logo_screen.asm:37 JSR LOGO_SCREEN_LOAD
    case 0xC0F11F: cpu.execute_instruction<0x20>(0x00EF31, 3); return true;
    // src/intro/logo_screen.asm:38 LDY #0
    case 0xC0F122: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:38 LDY #0
    // Overlapping static entry reached from 0xC0F122.
    case 0xC0F124: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/logo_screen.asm:39 LDX #2
    case 0xC0F125: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/intro/logo_screen.asm:39 LDX #2
    // Overlapping static entry reached from 0xC0F125.
    case 0xC0F127: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/logo_screen.asm:40 LDA #1
    case 0xC0F128: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/logo_screen.asm:40 LDA #1
    // Overlapping static entry reached from 0xC0F128.
    case 0xC0F12A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/logo_screen.asm:41 JSL FADE_IN_WITH_MOSAIC
    case 0xC0F12B: cpu.execute_instruction<0x22>(0xC087C4, 4); return true;
    // src/intro/logo_screen.asm:42 LDA #120
    case 0xC0F12F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x000078, 3); return true;
    // src/intro/logo_screen.asm:42 LDA #120
    // Overlapping static entry reached from 0xC0F12F.
    case 0xC0F131: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/logo_screen.asm:43 JSR UNKNOWN_C0EFE1
    case 0xC0F132: cpu.execute_instruction<0x20>(0x00F0AA, 3); return true;
    // src/intro/logo_screen.asm:44 CMP #0
    case 0xC0F135: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:44 CMP #0
    // Overlapping static entry reached from 0xC0F135.
    case 0xC0F137: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/logo_screen.asm:45 BEQ @UNKNOWN4
    case 0xC0F138: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/intro/logo_screen.asm:46 LDY #0
    case 0xC0F13A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:46 LDY #0
    // Overlapping static entry reached from 0xC0F13A.
    case 0xC0F13C: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/logo_screen.asm:47 LDX #1
    case 0xC0F13D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/logo_screen.asm:47 LDX #1
    // Overlapping static entry reached from 0xC0F13D.
    case 0xC0F13F: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/logo_screen.asm:48 LDA #2
    case 0xC0F140: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/intro/logo_screen.asm:48 LDA #2
    // Overlapping static entry reached from 0xC0F140.
    case 0xC0F142: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/logo_screen.asm:49 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0F143: cpu.execute_instruction<0x22>(0xC0880A, 4); return true;
    // src/intro/logo_screen.asm:50 LDA #1
    case 0xC0F147: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/logo_screen.asm:50 LDA #1
    // Overlapping static entry reached from 0xC0F147.
    case 0xC0F149: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/intro/logo_screen.asm:51 BRA @UNKNOWN6
    case 0xC0F14A: cpu.execute_instruction<0x80>(0x00004D, 2); return true;
    // src/intro/logo_screen.asm:53 LDY #0
    case 0xC0F14C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:53 LDY #0
    // Overlapping static entry reached from 0xC0F14C.
    case 0xC0F14E: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/logo_screen.asm:54 LDX #2
    case 0xC0F14F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/intro/logo_screen.asm:54 LDX #2
    // Overlapping static entry reached from 0xC0F14F.
    case 0xC0F151: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/logo_screen.asm:55 LDA #1
    case 0xC0F152: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/logo_screen.asm:55 LDA #1
    // Overlapping static entry reached from 0xC0F152.
    case 0xC0F154: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/logo_screen.asm:56 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0F155: cpu.execute_instruction<0x22>(0xC0880A, 4); return true;
    // src/intro/logo_screen.asm:57 LDA #2
    case 0xC0F159: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/intro/logo_screen.asm:57 LDA #2
    // Overlapping static entry reached from 0xC0F159.
    case 0xC0F15B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/logo_screen.asm:58 JSR LOGO_SCREEN_LOAD
    case 0xC0F15C: cpu.execute_instruction<0x20>(0x00EF31, 3); return true;
    // src/intro/logo_screen.asm:59 LDY #0
    case 0xC0F15F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:59 LDY #0
    // Overlapping static entry reached from 0xC0F15F.
    case 0xC0F161: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/logo_screen.asm:60 LDX #2
    case 0xC0F162: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/intro/logo_screen.asm:60 LDX #2
    // Overlapping static entry reached from 0xC0F162.
    case 0xC0F164: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/logo_screen.asm:61 LDA #1
    case 0xC0F165: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/logo_screen.asm:61 LDA #1
    // Overlapping static entry reached from 0xC0F165.
    case 0xC0F167: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/logo_screen.asm:62 JSL FADE_IN_WITH_MOSAIC
    case 0xC0F168: cpu.execute_instruction<0x22>(0xC087C4, 4); return true;
    // src/intro/logo_screen.asm:63 LDA #120
    case 0xC0F16C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x000078, 3); return true;
    // src/intro/logo_screen.asm:63 LDA #120
    // Overlapping static entry reached from 0xC0F16C.
    case 0xC0F16E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/logo_screen.asm:64 JSR UNKNOWN_C0EFE1
    case 0xC0F16F: cpu.execute_instruction<0x20>(0x00F0AA, 3); return true;
    // src/intro/logo_screen.asm:65 CMP #0
    case 0xC0F172: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:65 CMP #0
    // Overlapping static entry reached from 0xC0F172.
    case 0xC0F174: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/logo_screen.asm:66 BEQ @UNKNOWN5
    case 0xC0F175: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/intro/logo_screen.asm:67 LDY #0
    case 0xC0F177: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:67 LDY #0
    // Overlapping static entry reached from 0xC0F177.
    case 0xC0F179: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/logo_screen.asm:68 LDX #1
    case 0xC0F17A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/logo_screen.asm:68 LDX #1
    // Overlapping static entry reached from 0xC0F17A.
    case 0xC0F17C: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/logo_screen.asm:69 LDA #2
    case 0xC0F17D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/intro/logo_screen.asm:69 LDA #2
    // Overlapping static entry reached from 0xC0F17D.
    case 0xC0F17F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/logo_screen.asm:70 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0F180: cpu.execute_instruction<0x22>(0xC0880A, 4); return true;
    // src/intro/logo_screen.asm:71 LDA #1
    case 0xC0F184: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/logo_screen.asm:71 LDA #1
    // Overlapping static entry reached from 0xC0F184.
    case 0xC0F186: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/intro/logo_screen.asm:72 BRA @UNKNOWN6
    case 0xC0F187: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/intro/logo_screen.asm:74 LDY #0
    case 0xC0F189: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:74 LDY #0
    // Overlapping static entry reached from 0xC0F189.
    case 0xC0F18B: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/logo_screen.asm:75 LDX #2
    case 0xC0F18C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/intro/logo_screen.asm:75 LDX #2
    // Overlapping static entry reached from 0xC0F18C.
    case 0xC0F18E: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/logo_screen.asm:76 LDA #1
    case 0xC0F18F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/logo_screen.asm:76 LDA #1
    // Overlapping static entry reached from 0xC0F18F.
    case 0xC0F191: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/logo_screen.asm:77 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0F192: cpu.execute_instruction<0x22>(0xC0880A, 4); return true;
    // src/intro/logo_screen.asm:78 LDA #0
    case 0xC0F196: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:78 LDA #0
    // Overlapping static entry reached from 0xC0F196.
    case 0xC0F198: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/logo_screen.asm:80 END_C_FUNCTION
    case 0xC0F199: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/logo_screen.asm:80 END_C_FUNCTION
    case 0xC0F19A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/logo_screen_load.asm (source_named).
bool execute_introduction_logo_screen_load_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/logo_screen_load.asm:3 BEGIN_C_FUNCTION
    case 0xC0EF31: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    case 0xC0EF33: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    case 0xC0EF34: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    case 0xC0EF35: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    case 0xC0EF36: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0EF36.
    case 0xC0EF38: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    case 0xC0EF39: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    case 0xC0EF3A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/intro/logo_screen_load.asm:9 STA @VIRTUAL02
    case 0xC0EF3B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/logo_screen_load.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC0EF38.
    case 0xC0EF3C: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/intro/logo_screen_load.asm:10 LDA #1
    case 0xC0EF3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/logo_screen_load.asm:10 LDA #1
    // Overlapping static entry reached from 0xC0EF3D.
    case 0xC0EF3F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/logo_screen_load.asm:11 JSL UNKNOWN_C08D79
    case 0xC0EF40: cpu.execute_instruction<0x22>(0xC08D6A, 4); return true;
    // src/intro/logo_screen_load.asm:12 LDY #$0000
    case 0xC0EF44: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/logo_screen_load.asm:12 LDY #$0000
    // Overlapping static entry reached from 0xC0EF44.
    case 0xC0EF46: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/logo_screen_load.asm:13 LDX #$4000
    case 0xC0EF47: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x004000, 3); return true;
    // src/intro/logo_screen_load.asm:13 LDX #$4000
    // Overlapping static entry reached from 0xC0EF47.
    case 0xC0EF49: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/intro/logo_screen_load.asm:14 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC0EF4A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/logo_screen_load.asm:15 JSL SET_BG3_VRAM_LOCATION
    case 0xC0EF4B: cpu.execute_instruction<0x22>(0xC08E0D, 4); return true;
    // src/intro/logo_screen_load.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC0EF4F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/logo_screen_load.asm:17 LDA #4
    case 0xC0EF51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x008D04, 3); return true;
    // src/intro/logo_screen_load.asm:18 STA TM_MIRROR
    case 0xC0EF53: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/intro/logo_screen_load.asm:18 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0EF51.
    case 0xC0EF54: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/intro/logo_screen_load.asm:18 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0EF54.
    case 0xC0EF55: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/intro/logo_screen_load.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC0EF56: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/logo_screen_load.asm:20 LDA @VIRTUAL02
    case 0xC0EF58: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/logo_screen_load.asm:21 BEQ @UNKNOWN1
    case 0xC0EF5A: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/intro/logo_screen_load.asm:22 CMP #1
    case 0xC0EF5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/intro/logo_screen_load.asm:22 CMP #1
    // Overlapping static entry reached from 0xC0EF5C.
    case 0xC0EF5E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/logo_screen_load.asm:23 BEQ @UNKNOWN2
    case 0xC0EF5F: cpu.execute_instruction<0xF0>(0x000063, 2); return true;
    // src/intro/logo_screen_load.asm:24 CMP #2
    case 0xC0EF61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/intro/logo_screen_load.asm:24 CMP #2
    // Overlapping static entry reached from 0xC0EF61.
    case 0xC0EF63: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/logo_screen_load.asm:25 BEQL @UNKNOWN4
    case 0xC0EF64: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/logo_screen_load.asm:25 BEQL @UNKNOWN4
    case 0xC0EF66: cpu.execute_instruction<0x4C>(0x00F01B, 3); return true;
    // src/intro/logo_screen_load.asm:26 JMP @UNKNOWN5
    case 0xC0EF69: cpu.execute_instruction<0x4C>(0x00F070, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:28 LOADPTR NINTENDO_GRAPHICS, @LOCAL00
    case 0xC0EF6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0048EF, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:28 LOADPTR NINTENDO_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EF6C.
    case 0xC0EF6E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:28 LOADPTR NINTENDO_GRAPHICS, @LOCAL00
    case 0xC0EF6F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:28 LOADPTR NINTENDO_GRAPHICS, @LOCAL00
    case 0xC0EF71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:28 LOADPTR NINTENDO_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EF71.
    case 0xC0EF73: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:28 LOADPTR NINTENDO_GRAPHICS, @LOCAL00
    case 0xC0EF74: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:29 LOADPTR BUFFER, @LOCAL01
    case 0xC0EF76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:29 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EF76.
    case 0xC0EF78: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:29 LOADPTR BUFFER, @LOCAL01
    case 0xC0EF79: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:29 LOADPTR BUFFER, @LOCAL01
    case 0xC0EF7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:29 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EF7B.
    case 0xC0EF7D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:29 LOADPTR BUFFER, @LOCAL01
    case 0xC0EF7E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/logo_screen_load.asm:30 JSL DECOMP
    case 0xC0EF80: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:31 LOADPTR NINTENDO_ARRANGEMENT, @LOCAL00
    case 0xC0EF84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AB, 2); else cpu.execute_instruction<0xA9>(0x0048AB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:31 LOADPTR NINTENDO_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EF84.
    case 0xC0EF86: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:31 LOADPTR NINTENDO_ARRANGEMENT, @LOCAL00
    case 0xC0EF87: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:31 LOADPTR NINTENDO_ARRANGEMENT, @LOCAL00
    case 0xC0EF89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:31 LOADPTR NINTENDO_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EF89.
    case 0xC0EF8B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:31 LOADPTR NINTENDO_ARRANGEMENT, @LOCAL00
    case 0xC0EF8C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:32 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EF8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:32 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EF8E.
    case 0xC0EF90: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:32 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EF91: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:32 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EF93: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:32 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EF93.
    case 0xC0EF95: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:32 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EF96: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/logo_screen_load.asm:33 JSL DECOMP
    case 0xC0EF98: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    case 0xC0EF9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B8, 2); else cpu.execute_instruction<0xA9>(0x0049B8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EF9C.
    case 0xC0EF9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000085, 2); else cpu.execute_instruction<0x49>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    case 0xC0EF9F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EF9E.
    case 0xC0EFA0: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    case 0xC0EFA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EFA1.
    case 0xC0EFA3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    case 0xC0EFA4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EFA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0EFA6.
    case 0xC0EFA8: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EFA9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EFAB: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EFAC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EFAE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EFAF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EFB1: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/logo_screen_load.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC0EFB3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/logo_screen_load.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EFB5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EFB7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/logo_screen_load.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EFB9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/logo_screen_load.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EFBB: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/logo_screen_load.asm:38 JSL DECOMP
    case 0xC0EFBD: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/intro/logo_screen_load.asm:39 JMP @UNKNOWN5
    case 0xC0EFC1: cpu.execute_instruction<0x4C>(0x00F070, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    case 0xC0EFC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x004380, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EFC4.
    case 0xC0EFC6: cpu.execute_instruction<0x43>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    case 0xC0EFC7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EFC6.
    case 0xC0EFC8: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    case 0xC0EFC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EFC9.
    case 0xC0EFCB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    case 0xC0EFCC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:42 LOADPTR BUFFER, @LOCAL01
    case 0xC0EFCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:42 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EFCE.
    case 0xC0EFD0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:42 LOADPTR BUFFER, @LOCAL01
    case 0xC0EFD1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:42 LOADPTR BUFFER, @LOCAL01
    case 0xC0EFD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:42 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EFD3.
    case 0xC0EFD5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:42 LOADPTR BUFFER, @LOCAL01
    case 0xC0EFD6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/logo_screen_load.asm:43 JSL DECOMP
    case 0xC0EFD8: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    case 0xC0EFDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x004317, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EFDC.
    case 0xC0EFDE: cpu.execute_instruction<0x43>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    case 0xC0EFDF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EFDE.
    case 0xC0EFE0: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    case 0xC0EFE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EFE1.
    case 0xC0EFE3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    case 0xC0EFE4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:45 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EFE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:45 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EFE6.
    case 0xC0EFE8: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:45 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EFE9: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:45 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EFEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:45 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EFEB.
    case 0xC0EFED: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:45 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EFEE: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/logo_screen_load.asm:46 JSL DECOMP
    case 0xC0EFF0: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    case 0xC0EFF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000086, 2); else cpu.execute_instruction<0xA9>(0x004586, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EFF4.
    case 0xC0EFF6: cpu.execute_instruction<0x45>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    case 0xC0EFF7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EFF6.
    case 0xC0EFF8: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    case 0xC0EFF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EFF9.
    case 0xC0EFFB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    case 0xC0EFFC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EFFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0EFFE.
    case 0xC0F000: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F001: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F003: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F004: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F006: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F007: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F009: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/logo_screen_load.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC0F00B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/logo_screen_load.asm:50 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F00D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:50 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F00F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:50 MOVE_INT @VIRTUAL06, @LOCAL01
    // Overlapping static entry reached from 0xC0F089.
    case 0xC0F010: cpu.execute_instruction<0x12>(0x0000A5, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/logo_screen_load.asm:50 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F011: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/logo_screen_load.asm:50 MOVE_INT @VIRTUAL06, @LOCAL01
    // Overlapping static entry reached from 0xC0F010.
    case 0xC0F012: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/logo_screen_load.asm:50 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F013: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/logo_screen_load.asm:51 JSL DECOMP
    case 0xC0F015: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/intro/logo_screen_load.asm:52 BRA @UNKNOWN5
    case 0xC0F019: cpu.execute_instruction<0x80>(0x000055, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    case 0xC0F01B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003E, 2); else cpu.execute_instruction<0xA9>(0x00463E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0F01B.
    case 0xC0F01D: cpu.execute_instruction<0x46>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    case 0xC0F01E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0F01D.
    case 0xC0F01F: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    case 0xC0F020: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0F020.
    case 0xC0F022: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    case 0xC0F023: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:55 LOADPTR BUFFER, @LOCAL01
    case 0xC0F025: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:55 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0F025.
    case 0xC0F027: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:55 LOADPTR BUFFER, @LOCAL01
    case 0xC0F028: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:55 LOADPTR BUFFER, @LOCAL01
    case 0xC0F02A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:55 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0F02A.
    case 0xC0F02C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:55 LOADPTR BUFFER, @LOCAL01
    case 0xC0F02D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/logo_screen_load.asm:56 JSL DECOMP
    case 0xC0F02F: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    case 0xC0F033: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0045CA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0F033.
    case 0xC0F035: cpu.execute_instruction<0x45>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    case 0xC0F036: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0F035.
    case 0xC0F037: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    case 0xC0F038: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0F038.
    case 0xC0F03A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    case 0xC0F03B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:58 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0F03D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:58 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0F03D.
    case 0xC0F03F: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:58 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0F040: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:58 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0F042: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:58 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0F042.
    case 0xC0F044: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:58 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0F045: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/logo_screen_load.asm:59 JSL DECOMP
    case 0xC0F047: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    case 0xC0F04B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00480E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F04B.
    case 0xC0F04D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    case 0xC0F04E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    case 0xC0F050: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F050.
    case 0xC0F052: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    case 0xC0F053: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F055: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F055.
    case 0xC0F057: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F058: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F05A: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F05B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F05D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F05E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F060: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC042E8.
    case 0xC0F061: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000C2, 2); else cpu.execute_instruction<0x09>(0x0020C2, 3); return true;
    // src/intro/logo_screen_load.asm:62 REP #PROC_FLAGS::ACCUM8
    case 0xC0F062: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/logo_screen_load.asm:62 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0F07F.
    case 0xC0F063: cpu.execute_instruction<0x20>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/logo_screen_load.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F064: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F066: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/logo_screen_load.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F068: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/logo_screen_load.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F06A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/logo_screen_load.asm:64 JSL DECOMP
    case 0xC0F06C: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0F070: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    // Overlapping static entry reached from 0xC0F070.
    case 0xC0F072: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0F073: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0F075: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    // Overlapping static entry reached from 0xC0F075.
    case 0xC0F077: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0F078: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0F07A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    // Overlapping static entry reached from 0xC0F07A.
    case 0xC0F07C: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0F07D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x008000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    // Overlapping static entry reached from 0xC0F07D.
    case 0xC0F07F: cpu.execute_instruction<0x80>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0F080: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1161 TYA
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0F082: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0F083: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0F087: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    // Overlapping static entry reached from 0xC0F087.
    case 0xC0F089: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0F08A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0F08C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    // Overlapping static entry reached from 0xC0F08C.
    case 0xC0F08E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0F08F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0F091: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x004000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    // Overlapping static entry reached from 0xC0F091.
    case 0xC0F093: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0F094: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    // Overlapping static entry reached from 0xC0F094.
    case 0xC0F096: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0F097: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0F099: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0F09B: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    // Overlapping static entry reached from 0xC0F099.
    case 0xC0F09C: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    // Overlapping static entry reached from 0xC0F09C.
    case 0xC0F09E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/intro/logo_screen_load.asm:70 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F09F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/logo_screen_load.asm:70 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0F09E.
    case 0xC0F0A0: cpu.execute_instruction<0x20>(0x0018A9, 3); return true;
    // src/intro/logo_screen_load.asm:71 LDA #PALETTE_UPLOAD::FULL
    case 0xC0F0A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/intro/logo_screen_load.asm:72 STA PALETTE_UPLOAD_MODE
    case 0xC0F0A3: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/intro/logo_screen_load.asm:72 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0F0A1.
    case 0xC0F0A4: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/intro/logo_screen_load.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC0F0A6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/logo_screen_load.asm:74 END_C_FUNCTION
    case 0xC0F0A8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/logo_screen_load.asm:74 END_C_FUNCTION
    case 0xC0F0A9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/name_a_character.asm (source_named).
bool execute_introduction_name_a_character_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/name_a_character.asm:3 BEGIN_C_FUNCTION
    case 0xC1EAF3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    case 0xC1EAF5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    case 0xC1EAF6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    case 0xC1EAF7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    case 0xC1EAF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    // Overlapping static entry reached from 0xC1EAF8.
    case 0xC1EAFA: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    case 0xC1EAFB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    case 0xC1EAFC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/intro/name_a_character.asm:20 STY @LOCAL05
    case 0xC1EAFD: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/intro/name_a_character.asm:20 STY @LOCAL05
    // Overlapping static entry reached from 0xC1EAFA.
    case 0xC1EAFE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/intro/name_a_character.asm:21 TXY
    case 0xC1EAFF: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/intro/name_a_character.asm:22 STY @LOCAL04
    case 0xC1EB00: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/intro/name_a_character.asm:23 STA @VIRTUAL02
    case 0xC1EB02: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/name_a_character.asm:25 STA @LOCAL03
    case 0xC1EB04: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/intro/name_a_character.asm:27 LDX @PARAM04
    case 0xC1EB06: cpu.execute_instruction<0xA6>(0x00002E, 2); return true;
    // src/intro/name_a_character.asm:28 STX @VIRTUAL04
    case 0xC1EB08: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/name_a_character.asm:29 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC1EB0A: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/name_a_character.asm:29 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC1EB0C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/name_a_character.asm:29 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC1EB0E: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/name_a_character.asm:29 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC1EB10: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/intro/name_a_character.asm:30 JSR SET_INSTANT_PRINTING
    case 0xC1EB12: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/name_a_character.asm:31 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_NAME_BOX
    case 0xC1EB15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001A, 2); else cpu.execute_instruction<0xA9>(0x00001A, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/name_a_character.asm:31 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_NAME_BOX
    // Overlapping static entry reached from 0xC1EB15.
    case 0xC1EB17: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/name_a_character.asm:31 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_NAME_BOX
    case 0xC1EB18: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/intro/name_a_character.asm:35 LDX #0
    case 0xC1EB1B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/name_a_character.asm:35 LDX #0
    // Overlapping static entry reached from 0xC1EB1B.
    case 0xC1EB1D: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/intro/name_a_character.asm:36 STX @LOCAL02
    case 0xC1EB1E: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/intro/name_a_character.asm:37 BRA @UNKNOWN1
    case 0xC1EB20: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/intro/name_a_character.asm:39 LDA #CHAR::PLACEHOLDER
    case 0xC1EB22: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005C, 2); else cpu.execute_instruction<0xA9>(0x00005C, 3); return true;
    // src/intro/name_a_character.asm:39 LDA #CHAR::PLACEHOLDER
    // Overlapping static entry reached from 0xC1EB22.
    case 0xC1EB24: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/name_a_character.asm:40 JSR PRINT_LETTER
    case 0xC1EB25: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/intro/name_a_character.asm:41 LDX @LOCAL02
    case 0xC1EB28: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/intro/name_a_character.asm:42 INX
    case 0xC1EB2A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/intro/name_a_character.asm:43 STX @LOCAL02
    case 0xC1EB2B: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/intro/name_a_character.asm:45 TXA
    case 0xC1EB2D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/name_a_character.asm:46 CMP @VIRTUAL02
    case 0xC1EB2E: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/intro/name_a_character.asm:47 BCC @UNKNOWN0
    case 0xC1EB30: cpu.execute_instruction<0x90>(0x0000F0, 2); return true;
    // src/intro/name_a_character.asm:48 LDX #0
    case 0xC1EB32: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/name_a_character.asm:48 LDX #0
    // Overlapping static entry reached from 0xC1EB32.
    case 0xC1EB34: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/intro/name_a_character.asm:49 TXA
    case 0xC1EB35: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/name_a_character.asm:50 JSR UNKNOWN_C438A5
    case 0xC1EB36: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/intro/name_a_character.asm:52 LDY @LOCAL04
    case 0xC1EB39: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/intro/name_a_character.asm:53 LDA __BSS_START__,Y
    case 0xC1EB3B: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/intro/name_a_character.asm:54 AND #$00FF
    case 0xC1EB3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/name_a_character.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC1EB3E.
    case 0xC1EB40: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/name_a_character.asm:55 BEQ @UNKNOWN2
    case 0xC1EB41: cpu.execute_instruction<0xF0>(0x000065, 2); return true;
    // src/intro/name_a_character.asm:57 TYA
    case 0xC1EB43: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/name_a_character.asm:58 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC1EB44: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/name_a_character.asm:58 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC1EB46: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/name_a_character.asm:58 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC1EB47: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/name_a_character.asm:58 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC1EB49: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/name_a_character.asm:58 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC1EB4A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/name_a_character.asm:58 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC1EB4C: cpu.execute_instruction<0x64>(0x00000D, 2); return true;
    // src/intro/name_a_character.asm:59 REP #PROC_FLAGS::ACCUM8
    case 0xC1EB4E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/name_a_character.asm:60 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1EB50: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/name_a_character.asm:60 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1EB52: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/name_a_character.asm:60 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1EB54: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/name_a_character.asm:60 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1EB56: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/name_a_character.asm:61 LDA @VIRTUAL02
    case 0xC1EB58: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/name_a_character.asm:62 JSR PRINT_STRING
    case 0xC1EB5A: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/intro/name_a_character.asm:63 LDX #.LOWORD(WINDOW_STATS) + window_stats::text_x
    case 0xC1EB5D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000D0, 2); else cpu.execute_instruction<0xA2>(0x0089D0, 3); return true;
    // src/intro/name_a_character.asm:63 LDX #.LOWORD(WINDOW_STATS) + window_stats::text_x
    // Overlapping static entry reached from 0xC1EB5D.
    case 0xC1EB5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000086, 2); else cpu.execute_instruction<0x89>(0x001286, 3); return true;
    // src/intro/name_a_character.asm:64 STX @LOCAL01
    case 0xC1EB60: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/intro/name_a_character.asm:64 STX @LOCAL01
    // Overlapping static entry reached from 0xC1EB5F.
    case 0xC1EB61: cpu.execute_instruction<0x12>(0x000086, 2); return true;
    // src/intro/name_a_character.asm:65 STX @VIRTUAL02
    case 0xC1EB62: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/intro/name_a_character.asm:65 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC1EB61.
    case 0xC1EB63: cpu.execute_instruction<0x02>(0x0000AD, 2); return true;
    // src/intro/name_a_character.asm:66 LDA CURRENT_FOCUS_WINDOW
    case 0xC1EB64: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/intro/name_a_character.asm:67 ASL
    case 0xC1EB67: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/name_a_character.asm:68 TAX
    case 0xC1EB68: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/name_a_character.asm:69 LDA OPEN_WINDOW_TABLE,X
    case 0xC1EB69: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/intro/name_a_character.asm:70 LDY #.SIZEOF(window_stats)
    case 0xC1EB6C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/intro/name_a_character.asm:70 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1EB6C.
    case 0xC1EB6E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/name_a_character.asm:71 JSL MULT168
    case 0xC1EB6F: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/intro/name_a_character.asm:72 CLC
    case 0xC1EB73: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/name_a_character.asm:73 ADC @VIRTUAL02
    case 0xC1EB74: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/intro/name_a_character.asm:74 TAX
    case 0xC1EB76: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/name_a_character.asm:75 LDA __BSS_START__,X
    case 0xC1EB77: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/intro/name_a_character.asm:76 LDX @LOCAL03
    case 0xC1EB7A: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/intro/name_a_character.asm:77 STX @VIRTUAL02
    case 0xC1EB7C: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/intro/name_a_character.asm:78 CMP @VIRTUAL02
    case 0xC1EB7E: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/intro/name_a_character.asm:79 BCS @UNKNOWN3
    case 0xC1EB80: cpu.execute_instruction<0xB0>(0x000033, 2); return true;
    // src/intro/name_a_character.asm:80 LDA #CHAR::BULLET
    case 0xC1EB82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/intro/name_a_character.asm:80 LDA #CHAR::BULLET
    // Overlapping static entry reached from 0xC1EB82.
    case 0xC1EB84: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/name_a_character.asm:81 JSR PRINT_LETTER
    case 0xC1EB85: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/intro/name_a_character.asm:82 LDX @LOCAL01
    case 0xC1EB88: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/intro/name_a_character.asm:83 STX @VIRTUAL02
    case 0xC1EB8A: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/intro/name_a_character.asm:84 LDA CURRENT_FOCUS_WINDOW
    case 0xC1EB8C: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/intro/name_a_character.asm:85 ASL
    case 0xC1EB8F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/name_a_character.asm:86 TAX
    case 0xC1EB90: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/name_a_character.asm:87 LDA OPEN_WINDOW_TABLE,X
    case 0xC1EB91: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/intro/name_a_character.asm:88 LDY #.SIZEOF(window_stats)
    case 0xC1EB94: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/intro/name_a_character.asm:88 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1EB94.
    case 0xC1EB96: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/name_a_character.asm:89 JSL MULT168
    case 0xC1EB97: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/intro/name_a_character.asm:90 CLC
    case 0xC1EB9B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/name_a_character.asm:91 ADC @VIRTUAL02
    case 0xC1EB9C: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/intro/name_a_character.asm:92 TAX
    case 0xC1EB9E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/name_a_character.asm:93 LDA __BSS_START__,X
    case 0xC1EB9F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/intro/name_a_character.asm:94 DEC
    case 0xC1EBA2: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/intro/name_a_character.asm:95 STA __BSS_START__,X
    case 0xC1EBA3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/intro/name_a_character.asm:101 BRA @UNKNOWN3
    case 0xC1EBA6: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/intro/name_a_character.asm:104 LDA #CHAR::BULLET
    case 0xC1EBA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/intro/name_a_character.asm:104 LDA #CHAR::BULLET
    // Overlapping static entry reached from 0xC1EBA8.
    case 0xC1EBAA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/name_a_character.asm:105 JSR PRINT_LETTER
    case 0xC1EBAB: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/intro/name_a_character.asm:106 LDX #0
    case 0xC1EBAE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/name_a_character.asm:106 LDX #0
    // Overlapping static entry reached from 0xC1EBAE.
    case 0xC1EBB0: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/intro/name_a_character.asm:107 TXA
    case 0xC1EBB1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/name_a_character.asm:108 JSR UNKNOWN_C438A5
    case 0xC1EBB2: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/name_a_character.asm:119 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_MESSAGE
    case 0xC1EBB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00001B, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/name_a_character.asm:119 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_MESSAGE
    // Overlapping static entry reached from 0xC1EBB5.
    case 0xC1EBB7: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/name_a_character.asm:119 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_MESSAGE
    case 0xC1EBB8: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/name_a_character.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EBBB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/name_a_character.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EBBD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/name_a_character.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EBBF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/name_a_character.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EBC1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/name_a_character.asm:124 LDA @VIRTUAL04
    case 0xC1EBC3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/intro/name_a_character.asm:125 JSR PRINT_STRING
    case 0xC1EBC5: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/intro/name_a_character.asm:126 LDX #0
    case 0xC1EBC8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/name_a_character.asm:126 LDX #0
    // Overlapping static entry reached from 0xC1EBC8.
    case 0xC1EBCA: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/name_a_character.asm:127 LDA #1
    case 0xC1EBCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/name_a_character.asm:127 LDA #1
    // Overlapping static entry reached from 0xC1EBCB.
    case 0xC1EBCD: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/name_a_character.asm:128 JSR CC_13_14
    case 0xC1EBCE: cpu.execute_instruction<0x20>(0x00036B, 3); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/intro/name_a_character.asm:129 STZ_BADOPT @LOCAL00
    case 0xC1EBD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/intro/name_a_character.asm:129 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC1EBD1.
    case 0xC1EBD3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/intro/name_a_character.asm:129 STZ_BADOPT @LOCAL00
    case 0xC1EBD4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/intro/name_a_character.asm:130 LDA @LOCAL05
    case 0xC1EBD6: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/intro/name_a_character.asm:131 STA @LOCAL00+2
    case 0xC1EBD8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/name_a_character.asm:132 LDY @LOCAL04
    case 0xC1EBDA: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/intro/name_a_character.asm:134 LDA @LOCAL03
    case 0xC1EBDC: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/intro/name_a_character.asm:135 STA @VIRTUAL02
    case 0xC1EBDE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/name_a_character.asm:137 LDX @VIRTUAL02
    case 0xC1EBE0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/intro/name_a_character.asm:138 LDA #WINDOW::FILE_SELECT_NAMING_NAME_BOX
    case 0xC1EBE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001A, 2); else cpu.execute_instruction<0xA9>(0x00001A, 3); return true;
    // src/intro/name_a_character.asm:138 LDA #WINDOW::FILE_SELECT_NAMING_NAME_BOX
    // Overlapping static entry reached from 0xC1EBE2.
    case 0xC1EBE4: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/name_a_character.asm:139 JSR TEXT_INPUT_DIALOG
    case 0xC1EBE5: cpu.execute_instruction<0x20>(0x00E498, 3); return true;
    // src/intro/name_a_character.asm:140 TAX
    case 0xC1EBE8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/name_a_character.asm:141 STX @LOCAL05
    case 0xC1EBE9: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/intro/name_a_character.asm:142 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    case 0xC1EBEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00001C, 3); return true;
    // src/intro/name_a_character.asm:142 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    // Overlapping static entry reached from 0xC1EBEB.
    case 0xC1EBED: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/name_a_character.asm:143 JSR CLOSE_WINDOW
    case 0xC1EBEE: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/intro/name_a_character.asm:144 LDX @LOCAL05
    case 0xC1EBF1: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/intro/name_a_character.asm:145 TXA
    case 0xC1EBF3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/name_a_character.asm:146 END_C_FUNCTION
    case 0xC1EBF4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/name_a_character.asm:146 END_C_FUNCTION
    case 0xC1EBF5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/show_title_screen-jp.asm (source_named).
bool execute_introduction_show_title_screen_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/show_title_screen-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0EDC0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/show_title_screen-jp.asm:9 END_STACK_VARS
    case 0xC0EDC2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/intro/show_title_screen-jp.asm:9 END_STACK_VARS
    case 0xC0EDC3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/show_title_screen-jp.asm:9 END_STACK_VARS
    case 0xC0EDC4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/show_title_screen-jp.asm:9 END_STACK_VARS
    case 0xC0EDC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/show_title_screen-jp.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC0EDC5.
    case 0xC0EDC7: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/show_title_screen-jp.asm:9 END_STACK_VARS
    case 0xC0EDC8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/intro/show_title_screen-jp.asm:9 END_STACK_VARS
    case 0xC0EDC9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/intro/show_title_screen-jp.asm:10 STA @VIRTUAL02
    case 0xC0EDCA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/show_title_screen-jp.asm:10 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC0EDC7.
    case 0xC0EDCB: cpu.execute_instruction<0x02>(0x00008D, 2); return true;
    // src/intro/show_title_screen-jp.asm:11 STA TITLE_SCREEN_QUICK_MODE
    case 0xC0EDCC: cpu.execute_instruction<0x8D>(0x00A177, 3); return true;
    // src/intro/show_title_screen-jp.asm:12 JSL UNKNOWN_C08726
    case 0xC0EDCF: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/intro/show_title_screen-jp.asm:13 LDA @VIRTUAL02
    case 0xC0EDD3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/show_title_screen-jp.asm:14 BNE @UNKNOWN0
    case 0xC0EDD5: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/intro/show_title_screen-jp.asm:15 JSL UNKNOWN_C0927C
    case 0xC0EDD7: cpu.execute_instruction<0x22>(0xC0925E, 4); return true;
    // src/intro/show_title_screen-jp.asm:16 BRA @UNKNOWN1
    case 0xC0EDDB: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // src/intro/show_title_screen-jp.asm:18 LDY #0
    case 0xC0EDDD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/show_title_screen-jp.asm:18 LDY #0
    // Overlapping static entry reached from 0xC0EDDD.
    case 0xC0EDDF: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/show_title_screen-jp.asm:19 LDX #1
    case 0xC0EDE0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/show_title_screen-jp.asm:19 LDX #1
    // Overlapping static entry reached from 0xC0EDE0.
    case 0xC0EDE2: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/intro/show_title_screen-jp.asm:20 TXA
    case 0xC0EDE3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/show_title_screen-jp.asm:21 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0EDE4: cpu.execute_instruction<0x22>(0xC0880A, 4); return true;
    // src/intro/show_title_screen-jp.asm:22 LDA #0
    case 0xC0EDE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/show_title_screen-jp.asm:22 LDA #0
    // Overlapping static entry reached from 0xC0EDE8.
    case 0xC0EDEA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/show_title_screen-jp.asm:23 STA @LOCAL02
    case 0xC0EDEB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/intro/show_title_screen-jp.asm:24 BRA @UNKNOWN2
    case 0xC0EDED: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/intro/show_title_screen-jp.asm:26 ASL
    case 0xC0EDEF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/show_title_screen-jp.asm:27 CLC
    case 0xC0EDF0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/show_title_screen-jp.asm:28 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC0EDF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x001160, 3); return true;
    // src/intro/show_title_screen-jp.asm:28 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC0EDF1.
    case 0xC0EDF3: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/intro/show_title_screen-jp.asm:29 TAX
    case 0xC0EDF4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/show_title_screen-jp.asm:30 LDA __BSS_START__,X
    case 0xC0EDF5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/intro/show_title_screen-jp.asm:31 ORA #$8000
    case 0xC0EDF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/intro/show_title_screen-jp.asm:31 ORA #$8000
    // Overlapping static entry reached from 0xC0EDF8.
    case 0xC0EDFA: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/intro/show_title_screen-jp.asm:32 STA __BSS_START__,X
    case 0xC0EDFB: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/intro/show_title_screen-jp.asm:33 LDA @LOCAL02
    case 0xC0EDFE: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/intro/show_title_screen-jp.asm:34 INC
    case 0xC0EE00: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/intro/show_title_screen-jp.asm:35 STA @LOCAL02
    case 0xC0EE01: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/intro/show_title_screen-jp.asm:37 CMP #MAX_ENTITIES
    case 0xC0EE03: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/intro/show_title_screen-jp.asm:37 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC0EE03.
    case 0xC0EE05: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/intro/show_title_screen-jp.asm:38 BCC @UNKNOWN3
    case 0xC0EE06: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/intro/show_title_screen-jp.asm:40 LDA #9
    case 0xC0EE08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/intro/show_title_screen-jp.asm:40 LDA #9
    // Overlapping static entry reached from 0xC0EE08.
    case 0xC0EE0A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/show_title_screen-jp.asm:41 JSL UNKNOWN_C08D79
    case 0xC0EE0B: cpu.execute_instruction<0x22>(0xC08D6A, 4); return true;
    // src/intro/show_title_screen-jp.asm:42 LDA #1
    case 0xC0EE0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/show_title_screen-jp.asm:42 LDA #1
    // Overlapping static entry reached from 0xC0EE0F.
    case 0xC0EE11: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/show_title_screen-jp.asm:43 JSL SET_OAM_SIZE
    case 0xC0EE12: cpu.execute_instruction<0x22>(0xC08D83, 4); return true;
    // src/intro/show_title_screen-jp.asm:44 LDY #$0000
    case 0xC0EE16: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/show_title_screen-jp.asm:44 LDY #$0000
    // Overlapping static entry reached from 0xC0EE16.
    case 0xC0EE18: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/show_title_screen-jp.asm:45 LDX #$3800
    case 0xC0EE19: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003800, 3); return true;
    // src/intro/show_title_screen-jp.asm:45 LDX #$3800
    // Overlapping static entry reached from 0xC0EE19.
    case 0xC0EE1B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/intro/show_title_screen-jp.asm:46 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC0EE1C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/show_title_screen-jp.asm:47 JSL SET_BG1_VRAM_LOCATION
    case 0xC0EE1D: cpu.execute_instruction<0x22>(0xC08D8F, 4); return true;
    // src/intro/show_title_screen-jp.asm:48 LDY #$1000
    case 0xC0EE21: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x001000, 3); return true;
    // src/intro/show_title_screen-jp.asm:48 LDY #$1000
    // Overlapping static entry reached from 0xC0EE21.
    case 0xC0EE23: cpu.execute_instruction<0x10>(0x0000A2, 2); return true;
    // src/intro/show_title_screen-jp.asm:49 LDX #$3C00
    case 0xC0EE24: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003C00, 3); return true;
    // src/intro/show_title_screen-jp.asm:49 LDX #$3C00
    // Overlapping static entry reached from 0xC0EE23.
    case 0xC0EE25: cpu.execute_instruction<0x00>(0x00003C, 2); return true;
    // src/intro/show_title_screen-jp.asm:49 LDX #$3C00
    // Overlapping static entry reached from 0xC0EE24.
    case 0xC0EE26: cpu.execute_instruction<0x3C>(0x0000A9, 3); return true;
    // src/intro/show_title_screen-jp.asm:50 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC0EE27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/show_title_screen-jp.asm:50 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC0EE27.
    case 0xC0EE29: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/show_title_screen-jp.asm:51 JSL SET_BG2_VRAM_LOCATION
    case 0xC0EE2A: cpu.execute_instruction<0x22>(0xC08DCF, 4); return true;
    // src/intro/show_title_screen-jp.asm:52 STZ BG3_X_POS
    case 0xC0EE2E: cpu.execute_instruction<0x9C>(0x000039, 3); return true;
    // src/intro/show_title_screen-jp.asm:53 STZ BG3_Y_POS
    case 0xC0EE31: cpu.execute_instruction<0x9C>(0x00003B, 3); return true;
    // src/intro/show_title_screen-jp.asm:54 STZ BG2_Y_POS
    case 0xC0EE34: cpu.execute_instruction<0x9C>(0x000037, 3); return true;
    // src/intro/show_title_screen-jp.asm:55 STZ BG2_X_POS
    case 0xC0EE37: cpu.execute_instruction<0x9C>(0x000035, 3); return true;
    // src/intro/show_title_screen-jp.asm:55 STZ BG2_X_POS
    // Overlapping static entry reached from 0xC0EE8A.
    case 0xC0EE39: cpu.execute_instruction<0x00>(0x00009C, 2); return true;
    // src/intro/show_title_screen-jp.asm:56 STZ BG1_Y_POS
    case 0xC0EE3A: cpu.execute_instruction<0x9C>(0x000033, 3); return true;
    // src/intro/show_title_screen-jp.asm:57 STZ BG1_X_POS
    case 0xC0EE3D: cpu.execute_instruction<0x9C>(0x000031, 3); return true;
    // src/intro/show_title_screen-jp.asm:58 JSL UPDATE_SCREEN
    case 0xC0EE40: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/intro/show_title_screen-jp.asm:59 JSL UNKNOWN_C0EBE0
    case 0xC0EE44: cpu.execute_instruction<0x22>(0xC0EC20, 4); return true;
    // src/intro/show_title_screen-jp.asm:60 LDA @VIRTUAL02
    case 0xC0EE48: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/show_title_screen-jp.asm:61 BNE @UNKNOWN4
    case 0xC0EE4A: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/intro/show_title_screen-jp.asm:62 LDX #$10
    case 0xC0EE4C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/intro/show_title_screen-jp.asm:62 LDX #$10
    // Overlapping static entry reached from 0xC0EE4C.
    case 0xC0EE4E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/intro/show_title_screen-jp.asm:63 BRA @UNKNOWN5
    case 0xC0EE4F: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/intro/show_title_screen-jp.asm:65 LDX #$13
    case 0xC0EE51: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000013, 2); else cpu.execute_instruction<0xA2>(0x000013, 3); return true;
    // src/intro/show_title_screen-jp.asm:65 LDX #$13
    // Overlapping static entry reached from 0xC0EE51.
    case 0xC0EE53: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/intro/show_title_screen-jp.asm:67 TXA
    case 0xC0EE54: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/show_title_screen-jp.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC0EE55: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/show_title_screen-jp.asm:69 STA TM_MIRROR
    case 0xC0EE57: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/intro/show_title_screen-jp.asm:70 JSL UNKNOWN_C08744
    case 0xC0EE5A: cpu.execute_instruction<0x22>(0xC0873A, 4); return true;
    // src/intro/show_title_screen-jp.asm:71 JSL OAM_CLEAR
    case 0xC0EE5E: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/intro/show_title_screen-jp.asm:74 LDX #1
    case 0xC0EE62: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/show_title_screen-jp.asm:74 LDX #1
    // Overlapping static entry reached from 0xC0EE62.
    case 0xC0EE64: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/intro/show_title_screen-jp.asm:75 TXA
    case 0xC0EE65: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/show_title_screen-jp.asm:76 JSL FADE_IN
    case 0xC0EE66: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/intro/show_title_screen-jp.asm:77 LDY #0
    case 0xC0EE6A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/show_title_screen-jp.asm:77 LDY #0
    // Overlapping static entry reached from 0xC0EE6A.
    case 0xC0EE6C: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/intro/show_title_screen-jp.asm:78 TYX
    case 0xC0EE6D: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/intro/show_title_screen-jp.asm:79 LDA #EVENT_SCRIPT::TITLE_SCREEN_1
    case 0xC0EE6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000314, 3); return true;
    // src/intro/show_title_screen-jp.asm:79 LDA #EVENT_SCRIPT::TITLE_SCREEN_1
    // Overlapping static entry reached from 0xC0EE6E.
    case 0xC0EE70: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/intro/show_title_screen-jp.asm:80 JSL INIT_ENTITY_WIPE
    case 0xC0EE71: cpu.execute_instruction<0x22>(0xC092D4, 4); return true;
    // src/intro/show_title_screen-jp.asm:80 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC0EE70.
    case 0xC0EE72: cpu.execute_instruction<0xD4>(0x000092, 2); return true;
    // src/intro/show_title_screen-jp.asm:80 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC0EE72.
    case 0xC0EE74: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009C, 2); else cpu.execute_instruction<0xC0>(0x00399C, 3); return true;
    // src/intro/show_title_screen-jp.asm:81 STZ ACTIONSCRIPT_STATE
    case 0xC0EE75: cpu.execute_instruction<0x9C>(0x009939, 3); return true;
    // src/intro/show_title_screen-jp.asm:81 STZ ACTIONSCRIPT_STATE
    // Overlapping static entry reached from 0xC0EE74.
    case 0xC0EE76: cpu.execute_instruction<0x39>(0x00A099, 3); return true;
    // src/intro/show_title_screen-jp.asm:81 STZ ACTIONSCRIPT_STATE
    // Overlapping static entry reached from 0xC0EE74.
    case 0xC0EE77: cpu.execute_instruction<0x99>(0x0000A0, 3); return true;
    // src/intro/show_title_screen-jp.asm:82 LDY #0
    case 0xC0EE78: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/show_title_screen-jp.asm:82 LDY #0
    // Overlapping static entry reached from 0xC0EE76.
    case 0xC0EE79: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/intro/show_title_screen-jp.asm:82 LDY #0
    // Overlapping static entry reached from 0xC0EE78.
    case 0xC0EE7A: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/intro/show_title_screen-jp.asm:83 STY @LOCAL01
    case 0xC0EE7B: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/intro/show_title_screen-jp.asm:84 BRA @UNKNOWN13__
    case 0xC0EE7D: cpu.execute_instruction<0x80>(0x000027, 2); return true;
    // src/intro/show_title_screen-jp.asm:86 LDA @VIRTUAL02
    case 0xC0EE7F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/show_title_screen-jp.asm:87 BNE @UNKNOWN13_
    case 0xC0EE81: cpu.execute_instruction<0xD0>(0x00001F, 2); return true;
    // src/intro/show_title_screen-jp.asm:88 LDA PAD_PRESS
    case 0xC0EE83: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/intro/show_title_screen-jp.asm:89 AND #PAD::A_BUTTON
    case 0xC0EE86: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/intro/show_title_screen-jp.asm:89 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xC0EE86.
    case 0xC0EE88: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/show_title_screen-jp.asm:90 BNE @UNKNOWN13
    case 0xC0EE89: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/intro/show_title_screen-jp.asm:90 BNE @UNKNOWN13
    // Overlapping static entry reached from 0xC0EE98.
    case 0xC0EE8A: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/intro/show_title_screen-jp.asm:91 LDA PAD_PRESS
    case 0xC0EE8B: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/intro/show_title_screen-jp.asm:91 LDA PAD_PRESS
    // Overlapping static entry reached from 0xC0EE8A.
    case 0xC0EE8C: cpu.execute_instruction<0x6D>(0x002900, 3); return true;
    // src/intro/show_title_screen-jp.asm:92 AND #PAD::B_BUTTON
    case 0xC0EE8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/intro/show_title_screen-jp.asm:92 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC0EE8C.
    case 0xC0EE8F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/intro/show_title_screen-jp.asm:92 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC0EE8E.
    case 0xC0EE90: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // src/intro/show_title_screen-jp.asm:93 BNE @UNKNOWN13
    case 0xC0EE91: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/intro/show_title_screen-jp.asm:94 LDA PAD_PRESS
    case 0xC0EE93: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/intro/show_title_screen-jp.asm:95 AND #PAD::START_BUTTON
    case 0xC0EE96: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001000, 3); return true;
    // src/intro/show_title_screen-jp.asm:95 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xC0EE96.
    case 0xC0EE98: cpu.execute_instruction<0x10>(0x0000F0, 2); return true;
    // src/intro/show_title_screen-jp.asm:96 BEQ @UNKNOWN13_
    case 0xC0EE99: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/intro/show_title_screen-jp.asm:96 BEQ @UNKNOWN13_
    // Overlapping static entry reached from 0xC0EE98.
    case 0xC0EE9A: cpu.execute_instruction<0x07>(0x0000A0, 2); return true;
    // src/intro/show_title_screen-jp.asm:98 LDY #1
    case 0xC0EE9B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/intro/show_title_screen-jp.asm:98 LDY #1
    // Overlapping static entry reached from 0xC0EE9A.
    case 0xC0EE9C: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/intro/show_title_screen-jp.asm:98 LDY #1
    // Overlapping static entry reached from 0xC0EE9B.
    case 0xC0EE9D: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/intro/show_title_screen-jp.asm:99 STY @LOCAL01
    case 0xC0EE9E: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/intro/show_title_screen-jp.asm:100 BRA @UNKNOWN13___
    case 0xC0EEA0: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/intro/show_title_screen-jp.asm:102 JSL UNKNOWN_C1004E
    case 0xC0EEA2: cpu.execute_instruction<0x22>(0xC100C4, 4); return true;
    // src/intro/show_title_screen-jp.asm:104 LDA ACTIONSCRIPT_STATE
    case 0xC0EEA6: cpu.execute_instruction<0xAD>(0x009939, 3); return true;
    // src/intro/show_title_screen-jp.asm:105 BEQ @UNKNOWN12
    case 0xC0EEA9: cpu.execute_instruction<0xF0>(0x0000D4, 2); return true;
    // src/intro/show_title_screen-jp.asm:107 LDX #1
    case 0xC0EEAB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/show_title_screen-jp.asm:107 LDX #1
    // Overlapping static entry reached from 0xC0EEAB.
    case 0xC0EEAD: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/intro/show_title_screen-jp.asm:108 TXA
    case 0xC0EEAE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/show_title_screen-jp.asm:109 JSL FADE_OUT
    case 0xC0EEAF: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/intro/show_title_screen-jp.asm:110 BRA @UNKNOWN15
    case 0xC0EEB3: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/intro/show_title_screen-jp.asm:112 JSL UNKNOWN_C1004E
    case 0xC0EEB5: cpu.execute_instruction<0x22>(0xC100C4, 4); return true;
    // src/intro/show_title_screen-jp.asm:114 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC0EEB9: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/intro/show_title_screen-jp.asm:115 AND #$00FF
    case 0xC0EEBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/show_title_screen-jp.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC0EEBC.
    case 0xC0EEBE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/show_title_screen-jp.asm:116 BNE @UNKNOWN14
    case 0xC0EEBF: cpu.execute_instruction<0xD0>(0x0000F4, 2); return true;
    // src/intro/show_title_screen-jp.asm:117 LDA @VIRTUAL02
    case 0xC0EEC1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/show_title_screen-jp.asm:118 BNE @UNKNOWN18
    case 0xC0EEC3: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/intro/show_title_screen-jp.asm:119 STZ ACTIONSCRIPT_STATE
    case 0xC0EEC5: cpu.execute_instruction<0x9C>(0x009939, 3); return true;
    // src/intro/show_title_screen-jp.asm:120 LDA #0
    case 0xC0EEC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/show_title_screen-jp.asm:120 LDA #0
    // Overlapping static entry reached from 0xC0EEC8.
    case 0xC0EECA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/show_title_screen-jp.asm:121 JSL UNKNOWN_C474A8
    case 0xC0EECB: cpu.execute_instruction<0x22>(0xC4522C, 4); return true;
    // src/intro/show_title_screen-jp.asm:122 JSL UNKNOWN_C0927C
    case 0xC0EECF: cpu.execute_instruction<0x22>(0xC0925E, 4); return true;
    // src/intro/show_title_screen-jp.asm:123 LDY @LOCAL01
    case 0xC0EED3: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/intro/show_title_screen-jp.asm:124 TYA
    case 0xC0EED5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/show_title_screen-jp.asm:125 BRA @UNKNOWN23
    case 0xC0EED6: cpu.execute_instruction<0x80>(0x000057, 2); return true;
    // src/intro/show_title_screen-jp.asm:127 LDX #0
    case 0xC0EED8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/show_title_screen-jp.asm:127 LDX #0
    // Overlapping static entry reached from 0xC0EED8.
    case 0xC0EEDA: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/intro/show_title_screen-jp.asm:128 STX @LOCAL00
    case 0xC0EEDB: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/show_title_screen-jp.asm:129 BRA @UNKNOWN22
    case 0xC0EEDD: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/intro/show_title_screen-jp.asm:131 TXA
    case 0xC0EEDF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/show_title_screen-jp.asm:132 ASL
    case 0xC0EEE0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/show_title_screen-jp.asm:133 TAX
    case 0xC0EEE1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/show_title_screen-jp.asm:134 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC0EEE2: cpu.execute_instruction<0xBD>(0x000A58, 3); return true;
    // src/intro/show_title_screen-jp.asm:135 CMP #EVENT_SCRIPT::TITLE_SCREEN_1
    case 0xC0EEE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000014, 2); else cpu.execute_instruction<0xC9>(0x000314, 3); return true;
    // src/intro/show_title_screen-jp.asm:135 CMP #EVENT_SCRIPT::TITLE_SCREEN_1
    // Overlapping static entry reached from 0xC0EEE5.
    case 0xC0EEE7: cpu.execute_instruction<0x03>(0x000090, 2); return true;
    // src/intro/show_title_screen-jp.asm:136 BCC @UNKNOWN21
    case 0xC0EEE8: cpu.execute_instruction<0x90>(0x00000E, 2); return true;
    // src/intro/show_title_screen-jp.asm:136 BCC @UNKNOWN21
    // Overlapping static entry reached from 0xC0EEE7.
    case 0xC0EEE9: cpu.execute_instruction<0x0E>(0x001AC9, 3); return true;
    // src/intro/show_title_screen-jp.asm:137 CMP #EVENT_SCRIPT::TITLE_SCREEN_7
    case 0xC0EEEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001A, 2); else cpu.execute_instruction<0xC9>(0x00031A, 3); return true;
    // src/intro/show_title_screen-jp.asm:137 CMP #EVENT_SCRIPT::TITLE_SCREEN_7
    // Overlapping static entry reached from 0xC0EEEA.
    case 0xC0EEEC: cpu.execute_instruction<0x03>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/intro/show_title_screen-jp.asm:138 BGT @UNKNOWN21
    case 0xC0EEED: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/intro/show_title_screen-jp.asm:138 BGT @UNKNOWN21
    // Overlapping static entry reached from 0xC0EEEC.
    case 0xC0EEEE: cpu.execute_instruction<0x02>(0x0000B0, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/intro/show_title_screen-jp.asm:138 BGT @UNKNOWN21
    case 0xC0EEEF: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/intro/show_title_screen-jp.asm:139 LDX @LOCAL00
    case 0xC0EEF1: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/intro/show_title_screen-jp.asm:140 TXA
    case 0xC0EEF3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/show_title_screen-jp.asm:141 JSL UNKNOWN_C09C35
    case 0xC0EEF4: cpu.execute_instruction<0x22>(0xC09C14, 4); return true;
    // src/intro/show_title_screen-jp.asm:143 LDX @LOCAL00
    case 0xC0EEF8: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/intro/show_title_screen-jp.asm:144 TXA
    case 0xC0EEFA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/show_title_screen-jp.asm:145 ASL
    case 0xC0EEFB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/show_title_screen-jp.asm:146 CLC
    case 0xC0EEFC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/show_title_screen-jp.asm:147 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC0EEFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x001160, 3); return true;
    // src/intro/show_title_screen-jp.asm:147 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC0EEFD.
    case 0xC0EEFF: cpu.execute_instruction<0x11>(0x0000A8, 2); return true;
    // src/intro/show_title_screen-jp.asm:148 TAY
    case 0xC0EF00: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/intro/show_title_screen-jp.asm:149 LDA __BSS_START__,Y
    case 0xC0EF01: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/intro/show_title_screen-jp.asm:150 AND #$7FFF
    case 0xC0EF04: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/intro/show_title_screen-jp.asm:150 AND #$7FFF
    // Overlapping static entry reached from 0xC0EF04.
    case 0xC0EF06: cpu.execute_instruction<0x7F>(0x000099, 4); return true;
    // src/intro/show_title_screen-jp.asm:151 STA __BSS_START__,Y
    case 0xC0EF07: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/intro/show_title_screen-jp.asm:152 INX
    case 0xC0EF0A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/intro/show_title_screen-jp.asm:153 STX @LOCAL00
    case 0xC0EF0B: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/show_title_screen-jp.asm:155 CPX #MAX_ENTITIES
    case 0xC0EF0D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00001E, 2); else cpu.execute_instruction<0xE0>(0x00001E, 3); return true;
    // src/intro/show_title_screen-jp.asm:155 CPX #MAX_ENTITIES
    // Overlapping static entry reached from 0xC0EF0D.
    case 0xC0EF0F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/intro/show_title_screen-jp.asm:156 BCC @UNKNOWN19
    case 0xC0EF10: cpu.execute_instruction<0x90>(0x0000CD, 2); return true;
    // src/intro/show_title_screen-jp.asm:157 JSL UNKNOWN_C08726
    case 0xC0EF12: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/intro/show_title_screen-jp.asm:158 JSL RELOAD_MAP
    case 0xC0EF16: cpu.execute_instruction<0x22>(0xC01909, 4); return true;
    // src/intro/show_title_screen-jp.asm:158 JSL RELOAD_MAP
    // Overlapping static entry reached from 0xC0EF90.
    case 0xC0EF17: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000019, 2); else cpu.execute_instruction<0x09>(0x00C019, 3); return true;
    // src/intro/show_title_screen-jp.asm:158 JSL RELOAD_MAP
    // Overlapping static entry reached from 0xC0EF17.
    case 0xC0EF19: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x00A222, 3); return true;
    // src/intro/show_title_screen-jp.asm:159 JSL UNDRAW_FLYOVER_TEXT
    case 0xC0EF1A: cpu.execute_instruction<0x22>(0xC45CA2, 4); return true;
    // src/intro/show_title_screen-jp.asm:159 JSL UNDRAW_FLYOVER_TEXT
    // Overlapping static entry reached from 0xC0EF19.
    case 0xC0EF1B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00005C, 2); else cpu.execute_instruction<0xA2>(0x00C45C, 3); return true;
    // src/intro/show_title_screen-jp.asm:159 JSL UNDRAW_FLYOVER_TEXT
    // Overlapping static entry reached from 0xC0EF19.
    case 0xC0EF1C: cpu.execute_instruction<0x5C>(0x20E2C4, 4); return true;
    // src/intro/show_title_screen-jp.asm:159 JSL UNDRAW_FLYOVER_TEXT
    // Overlapping static entry reached from 0xC0EF1B.
    case 0xC0EF1D: cpu.execute_instruction<0xC4>(0x0000E2, 2); return true;
    // src/intro/show_title_screen-jp.asm:160 SEP #PROC_FLAGS::ACCUM8
    case 0xC0EF1E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/show_title_screen-jp.asm:160 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0EF1D.
    case 0xC0EF1F: cpu.execute_instruction<0x20>(0x0017A9, 3); return true;
    // src/intro/show_title_screen-jp.asm:161 LDA #$17
    case 0xC0EF20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/intro/show_title_screen-jp.asm:162 STA TM_MIRROR
    case 0xC0EF22: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/intro/show_title_screen-jp.asm:162 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0EF20.
    case 0xC0EF23: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/intro/show_title_screen-jp.asm:162 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0EF23.
    case 0xC0EF24: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/show_title_screen-jp.asm:163 LDX #1
    case 0xC0EF25: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/show_title_screen-jp.asm:163 LDX #1
    // Overlapping static entry reached from 0xC0EF25.
    case 0xC0EF27: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/intro/show_title_screen-jp.asm:164 REP #PROC_FLAGS::ACCUM8
    case 0xC0EF28: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/show_title_screen-jp.asm:165 TXA
    case 0xC0EF2A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/show_title_screen-jp.asm:166 JSL FADE_IN
    case 0xC0EF2B: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/show_title_screen-jp.asm:168 END_C_FUNCTION
    case 0xC0EF2F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/show_title_screen-jp.asm:168 END_C_FUNCTION
    case 0xC0EF30: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
