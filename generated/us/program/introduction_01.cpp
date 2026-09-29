// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/intro/decomp_itoi_production.asm (source_named).
bool execute_introduction_decomp_itoi_production_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/decomp_itoi_production.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4DD28: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/decomp_itoi_production.asm:7 END_STACK_VARS
    case 0xC4DD2A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/decomp_itoi_production.asm:7 END_STACK_VARS
    case 0xC4DD2B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/decomp_itoi_production.asm:7 END_STACK_VARS
    case 0xC4DD2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/decomp_itoi_production.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4DD2C.
    case 0xC4DD2E: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/decomp_itoi_production.asm:7 END_STACK_VARS
    case 0xC4DD2F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4DD30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DD30.
    case 0xC4DD32: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_itoi_production.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4DD33: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4DD35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DD35.
    case 0xC4DD37: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_itoi_production.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4DD38: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    case 0xC4DD3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DF, 2); else cpu.execute_instruction<0xA9>(0x00AADF, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC4DD3A.
    case 0xC4DD3C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    case 0xC4DD3D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    case 0xC4DD3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC4DD3F.
    case 0xC4DD41: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_itoi_production.asm:9 LOADPTR PRODUCED_ITOI_ARRANGEMENT, @LOCAL00
    case 0xC4DD42: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_itoi_production.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DD44: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DD46: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_itoi_production.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DD48: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_itoi_production.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DD4A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/decomp_itoi_production.asm:11 JSL DECOMP
    case 0xC4DD4C: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/intro/decomp_itoi_production.asm:12 JSR UNKNOWN_C4DCF6
    case 0xC4DD50: cpu.execute_instruction<0x20>(0x00DCF6, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DD53: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DD55: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DD57: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DD59: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DD5B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4DD5B.
    case 0xC4DD5D: cpu.execute_instruction<0x7C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DD5E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4DD5E.
    case 0xC4DD60: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DD61: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DD63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DD65: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4DD63.
    case 0xC4DD66: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_itoi_production.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4DD66.
    case 0xC4DD68: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4DD69: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000800, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DD68.
    case 0xC4DD6A: cpu.execute_instruction<0x00>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DD69.
    case 0xC4DD6B: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4DD6C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4DD6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DD6E.
    case 0xC4DD70: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_itoi_production.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4DD71: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    case 0xC4DD73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004B, 2); else cpu.execute_instruction<0xA9>(0x00AB4B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4DD73.
    case 0xC4DD75: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    case 0xC4DD76: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    case 0xC4DD78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4DD78.
    case 0xC4DD7A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_itoi_production.asm:16 LOADPTR PRODUCED_ITOI_GRAPHICS, @LOCAL00
    case 0xC4DD7B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_itoi_production.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DD7D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DD7F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_itoi_production.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DD81: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_itoi_production.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DD83: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/decomp_itoi_production.asm:18 JSL DECOMP
    case 0xC4DD85: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DD89: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DD8B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DD8D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DD8F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DD91: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4DD91.
    case 0xC4DD93: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DD94: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000400, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4DD94.
    case 0xC4DD96: cpu.execute_instruction<0x04>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DD97: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4DD96.
    case 0xC4DD98: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DD99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DD9B: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4DD99.
    case 0xC4DD9C: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_itoi_production.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4DD9C.
    case 0xC4DD9E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x006FA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4DD9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006F, 2); else cpu.execute_instruction<0xA9>(0x00AE6F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4DD9E.
    case 0xC4DDA0: cpu.execute_instruction<0x6F>(0x0E85AE, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4DD9F.
    case 0xC4DDA1: cpu.execute_instruction<0xAE>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4DDA2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4DDA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4DDA4.
    case 0xC4DDA6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_itoi_production.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4DDA7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4DDA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    // Overlapping static entry reached from 0xC4DDA9.
    case 0xC4DDAB: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4DDAC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4DDAE: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4DDAF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4DDB1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4DDB2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/decomp_itoi_production.asm:22 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC4DDB4: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/decomp_itoi_production.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC4DDB6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_itoi_production.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DDB8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_itoi_production.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DDBA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_itoi_production.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DDBC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_itoi_production.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DDBE: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/decomp_itoi_production.asm:25 JSL DECOMP
    case 0xC4DDC0: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/intro/decomp_itoi_production.asm:26 STZ PALETTES
    case 0xC4DDC4: cpu.execute_instruction<0x9C>(0x000200, 3); return true;
    // src/intro/decomp_itoi_production.asm:27 LDA #24
    case 0xC4DDC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/intro/decomp_itoi_production.asm:27 LDA #24
    // Overlapping static entry reached from 0xC4DDC7.
    case 0xC4DDC9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/decomp_itoi_production.asm:28 JSL UNKNOWN_C0856B
    case 0xC4DDCA: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/decomp_itoi_production.asm:29 END_C_FUNCTION
    case 0xC4DDCE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/decomp_itoi_production.asm:29 END_C_FUNCTION
    case 0xC4DDCF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/decomp_nintendo_presentation.asm (source_named).
bool execute_introduction_decomp_nintendo_presentation_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4DDD0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:7 END_STACK_VARS
    case 0xC4DDD2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:7 END_STACK_VARS
    case 0xC4DDD3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:7 END_STACK_VARS
    case 0xC4DDD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4DDD4.
    case 0xC4DDD6: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:7 END_STACK_VARS
    case 0xC4DDD7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4DDD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DDD8.
    case 0xC4DDDA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4DDDB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4DDDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DDDD.
    case 0xC4DDDF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4DDE0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:9 LOADPTR NINTENDO_PRESENTATION_ARRANGEMENT, @LOCAL00
    case 0xC4DDE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00AD01, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:9 LOADPTR NINTENDO_PRESENTATION_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC4DDE2.
    case 0xC4DDE4: cpu.execute_instruction<0xAD>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:9 LOADPTR NINTENDO_PRESENTATION_ARRANGEMENT, @LOCAL00
    case 0xC4DDE5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:9 LOADPTR NINTENDO_PRESENTATION_ARRANGEMENT, @LOCAL00
    case 0xC4DDE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:9 LOADPTR NINTENDO_PRESENTATION_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC4DDE7.
    case 0xC4DDE9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:9 LOADPTR NINTENDO_PRESENTATION_ARRANGEMENT, @LOCAL00
    case 0xC4DDEA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DDEC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DDEE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DDF0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:10 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DDF2: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/decomp_nintendo_presentation.asm:11 JSL DECOMP
    case 0xC4DDF4: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/intro/decomp_nintendo_presentation.asm:12 JSR UNKNOWN_C4DCF6
    case 0xC4DDF8: cpu.execute_instruction<0x20>(0x00DCF6, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DDFB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DDFD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DDFF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DE01: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DE03: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4DE03.
    case 0xC4DE05: cpu.execute_instruction<0x7C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DE06: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4DE06.
    case 0xC4DE08: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DE09: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DE0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    case 0xC4DE0D: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4DE0B.
    case 0xC4DE0E: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:13 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 0
    // Overlapping static entry reached from 0xC4DE0E.
    case 0xC4DE10: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4DE11: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000800, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DE10.
    case 0xC4DE12: cpu.execute_instruction<0x00>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DE11.
    case 0xC4DE13: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4DE14: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4DE16: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DE16.
    case 0xC4DE18: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:15 LOADPTR BUFFER + $800, @VIRTUAL06
    case 0xC4DE19: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:16 LOADPTR NINTENDO_PRESENTATION_GRAPHICS, @LOCAL00
    case 0xC4DE1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004E, 2); else cpu.execute_instruction<0xA9>(0x00AD4E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:16 LOADPTR NINTENDO_PRESENTATION_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4DE1B.
    case 0xC4DE1D: cpu.execute_instruction<0xAD>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:16 LOADPTR NINTENDO_PRESENTATION_GRAPHICS, @LOCAL00
    case 0xC4DE1E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:16 LOADPTR NINTENDO_PRESENTATION_GRAPHICS, @LOCAL00
    case 0xC4DE20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:16 LOADPTR NINTENDO_PRESENTATION_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4DE20.
    case 0xC4DE22: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:16 LOADPTR NINTENDO_PRESENTATION_GRAPHICS, @LOCAL00
    case 0xC4DE23: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DE25: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DE27: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DE29: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DE2B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/decomp_nintendo_presentation.asm:18 JSL DECOMP
    case 0xC4DE2D: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DE31: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DE33: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DE35: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DE37: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DE39: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4DE39.
    case 0xC4DE3B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DE3C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000400, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4DE3C.
    case 0xC4DE3E: cpu.execute_instruction<0x04>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DE3F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4DE3E.
    case 0xC4DE40: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DE41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    case 0xC4DE43: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4DE41.
    case 0xC4DE44: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:19 COPY_TO_VRAM1P @VIRTUAL06, $6000, $400, 0
    // Overlapping static entry reached from 0xC4DE44.
    case 0xC4DE46: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x006FA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4DE47: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006F, 2); else cpu.execute_instruction<0xA9>(0x00AE6F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4DE46.
    case 0xC4DE48: cpu.execute_instruction<0x6F>(0x0E85AE, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4DE47.
    case 0xC4DE49: cpu.execute_instruction<0xAE>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4DE4A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4DE4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4DE4C.
    case 0xC4DE4E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:21 LOADPTR NINTENDO_ITOI_PALETTE, @LOCAL00
    case 0xC4DE4F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:22 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4DE51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:22 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4DE51.
    case 0xC4DE53: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:22 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4DE54: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:22 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4DE56: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:22 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4DE57: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:22 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4DE59: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:22 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4DE5A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:22 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4DE5C: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/decomp_nintendo_presentation.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC4DE5E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DE60: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DE62: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DE64: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4DE66: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/decomp_nintendo_presentation.asm:25 JSL DECOMP
    case 0xC4DE68: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/intro/decomp_nintendo_presentation.asm:26 STZ PALETTES
    case 0xC4DE6C: cpu.execute_instruction<0x9C>(0x000200, 3); return true;
    // src/intro/decomp_nintendo_presentation.asm:27 LDA #24
    case 0xC4DE6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/intro/decomp_nintendo_presentation.asm:27 LDA #24
    // Overlapping static entry reached from 0xC4DE6F.
    case 0xC4DE71: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/decomp_nintendo_presentation.asm:28 JSL UNKNOWN_C0856B
    case 0xC4DE72: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:29 END_C_FUNCTION
    case 0xC4DE76: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/decomp_nintendo_presentation.asm:29 END_C_FUNCTION
    case 0xC4DE77: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/display_animated_naming_sprite.asm (source_named).
bool execute_introduction_display_animated_naming_sprite_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/display_animated_naming_sprite.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4D7D9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    case 0xC4D7DB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    case 0xC4D7DC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    case 0xC4D7DD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    case 0xC4D7DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC4D7DE.
    case 0xC4D7E0: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    case 0xC4D7E1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/intro/display_animated_naming_sprite.asm:11 END_STACK_VARS
    case 0xC4D7E2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/intro/display_animated_naming_sprite.asm:12 STA @LOCAL04
    case 0xC4D7E3: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:12 STA @LOCAL04
    // Overlapping static entry reached from 0xC4D7E0.
    case 0xC4D7E4: cpu.execute_instruction<0x16>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    case 0xC4D7E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002D, 2); else cpu.execute_instruction<0xA9>(0x00FD2D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4D7E4.
    case 0xC4D7E6: cpu.execute_instruction<0x2D>(0x0085FD, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4D7E5.
    case 0xC4D7E7: cpu.execute_instruction<0xFD>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    case 0xC4D7E8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4D7E6.
    case 0xC4D7E9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    case 0xC4D7EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4D7EA.
    case 0xC4D7EC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/display_animated_naming_sprite.asm:13 LOADPTR NAMING_SCREEN_ENTITIES, @VIRTUAL0A
    case 0xC4D7ED: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:14 LDA @LOCAL04
    case 0xC4D7EF: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:15 ASL
    case 0xC4D7F1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/display_animated_naming_sprite.asm:16 ASL
    case 0xC4D7F2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/display_animated_naming_sprite.asm:17 CLC
    case 0xC4D7F3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/display_animated_naming_sprite.asm:18 ADC @VIRTUAL0A
    case 0xC4D7F4: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:19 STA @VIRTUAL0A
    case 0xC4D7F6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D7F8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D7F8.
    case 0xC4D7FA: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D7FB: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D7FD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D7FE: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D800: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/intro/display_animated_naming_sprite.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D802: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:21 BRA @UNKNOWN1
    case 0xC4D804: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:28 STZ @LOCAL00
    case 0xC4D806: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:29 STZ @LOCAL01
    case 0xC4D808: cpu.execute_instruction<0x64>(0x000010, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:31 LDY #$FFFF
    case 0xC4D80A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/intro/display_animated_naming_sprite.asm:31 LDY #$FFFF
    // Overlapping static entry reached from 0xC4D80A.
    case 0xC4D80C: cpu.execute_instruction<0xFF>(0xA01484, 4); return true;
    // src/intro/display_animated_naming_sprite.asm:32 STY @LOCAL03
    case 0xC4D80D: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:33 LDY #naming_screen_entity::script
    case 0xC4D80F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/intro/display_animated_naming_sprite.asm:33 LDY #naming_screen_entity::script
    // Overlapping static entry reached from 0xC4D80C.
    case 0xC4D810: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:33 LDY #naming_screen_entity::script
    // Overlapping static entry reached from 0xC4D80F.
    case 0xC4D811: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:34 LDA [@VIRTUAL06],Y
    case 0xC4D812: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:35 TAX
    case 0xC4D814: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/display_animated_naming_sprite.asm:36 LDA @LOCAL02
    case 0xC4D815: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:37 LDY @LOCAL03
    case 0xC4D817: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:38 JSL CREATE_ENTITY
    case 0xC4D819: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/intro/display_animated_naming_sprite.asm:39 LDA #.SIZEOF(naming_screen_entity)
    case 0xC4D81D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/intro/display_animated_naming_sprite.asm:39 LDA #.SIZEOF(naming_screen_entity)
    // Overlapping static entry reached from 0xC4D81D.
    case 0xC4D81F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:40 CLC
    case 0xC4D820: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/display_animated_naming_sprite.asm:41 ADC @VIRTUAL06
    case 0xC4D821: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:42 STA @VIRTUAL06
    case 0xC4D823: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:44 LDA [@VIRTUAL06]
    case 0xC4D825: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:45 STA @LOCAL02
    case 0xC4D827: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:46 BNE @UNKNOWN0
    case 0xC4D829: cpu.execute_instruction<0xD0>(0x0000DB, 2); return true;
    // src/intro/display_animated_naming_sprite.asm:47 STZ WAIT_FOR_NAMING_SCREEN_ACTIONSCRIPT
    case 0xC4D82B: cpu.execute_instruction<0x9C>(0x00B4B4, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/display_animated_naming_sprite.asm:48 END_C_FUNCTION
    case 0xC4D82E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/display_animated_naming_sprite.asm:48 END_C_FUNCTION
    case 0xC4D82F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/file_select/open_flavour_menu.asm (source_named).
bool execute_introduction_file_select_open_flavour_menu_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:3 BEGIN_C_FUNCTION
    case 0xC1F6E3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:9 END_STACK_VARS
    case 0xC1F6E5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:9 END_STACK_VARS
    case 0xC1F6E6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:9 END_STACK_VARS
    case 0xC1F6E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1F6E7.
    case 0xC1F6E9: cpu.execute_instruction<0xFF>(0x32A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:9 END_STACK_VARS
    case 0xC1F6EA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:17 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_FLAVOUR_CHOICE
    case 0xC1F6EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000032, 2); else cpu.execute_instruction<0xA9>(0x000032, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:17 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_FLAVOUR_CHOICE
    // Overlapping static entry reached from 0xC1F6EB.
    case 0xC1F6ED: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:17 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_FLAVOUR_CHOICE
    case 0xC1F6EE: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:18 JSR SET_INSTANT_PRINTING
    case 0xC1F6F1: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    case 0xC1F6F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x00C128, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    // Overlapping static entry reached from 0xC1F6F5.
    case 0xC1F6F7: cpu.execute_instruction<0xC1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    case 0xC1F6F8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    // Overlapping static entry reached from 0xC1F6F7.
    case 0xC1F6F9: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    case 0xC1F6FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    // Overlapping static entry reached from 0xC1F6FA.
    case 0xC1F6FC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:19 LOADPTR FILE_SELECT_TEXT_WHICH_STYLE, @LOCAL00
    case 0xC1F6FD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:20 LDA #@FLAVOURDESCLENGTH
    case 0xC1F6FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000025, 2); else cpu.execute_instruction<0xA9>(0x000025, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:20 LDA #@FLAVOURDESCLENGTH
    // Overlapping static entry reached from 0xC1F6FF.
    case 0xC1F701: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:21 JSR PRINT_STRING
    case 0xC1F702: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F705: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F705.
    case 0xC1F707: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F708: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F70A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F70A.
    case 0xC1F70C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:22 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F70D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    case 0xC1F70F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004D, 2); else cpu.execute_instruction<0xA9>(0x00C14D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    // Overlapping static entry reached from 0xC1F70F.
    case 0xC1F711: cpu.execute_instruction<0xC1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    case 0xC1F712: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    // Overlapping static entry reached from 0xC1F711.
    case 0xC1F713: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    case 0xC1F714: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    // Overlapping static entry reached from 0xC1F714.
    case 0xC1F716: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:23 LOADPTR FILE_SELECT_TEXT_FLAVOR_PLAIN, @LOCAL00
    case 0xC1F717: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F719: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F71B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F71D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:24 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F71F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:25 LDX #@FLAVOURSTARTLINE
    case 0xC1F721: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:25 LDX #@FLAVOURSTARTLINE
    // Overlapping static entry reached from 0xC1F721.
    case 0xC1F723: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:26 LDA #0
    case 0xC1F724: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:26 LDA #0
    // Overlapping static entry reached from 0xC1F724.
    case 0xC1F726: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:27 JSR UNKNOWN_C114B1
    case 0xC1F727: cpu.execute_instruction<0x20>(0x0014B1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    case 0xC1F72A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005A, 2); else cpu.execute_instruction<0xA9>(0x00C15A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    // Overlapping static entry reached from 0xC1F72A.
    case 0xC1F72C: cpu.execute_instruction<0xC1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    case 0xC1F72D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    // Overlapping static entry reached from 0xC1F72C.
    case 0xC1F72E: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    case 0xC1F72F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    // Overlapping static entry reached from 0xC1F72F.
    case 0xC1F731: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:28 LOADPTR FILE_SELECT_TEXT_FLAVOR_MINT, @LOCAL00
    case 0xC1F732: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:29 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F734: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:29 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F736: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:29 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F738: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:29 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F73A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:30 LDX #@FLAVOURSTARTLINE+1
    case 0xC1F73C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:30 LDX #@FLAVOURSTARTLINE+1
    // Overlapping static entry reached from 0xC1F73C.
    case 0xC1F73E: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:31 LDA #0
    case 0xC1F73F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:31 LDA #0
    // Overlapping static entry reached from 0xC1F73F.
    case 0xC1F741: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:32 JSR UNKNOWN_C114B1
    case 0xC1F742: cpu.execute_instruction<0x20>(0x0014B1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    case 0xC1F745: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000066, 2); else cpu.execute_instruction<0xA9>(0x00C166, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    // Overlapping static entry reached from 0xC1F745.
    case 0xC1F747: cpu.execute_instruction<0xC1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    case 0xC1F748: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    // Overlapping static entry reached from 0xC1F747.
    case 0xC1F749: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    case 0xC1F74A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    // Overlapping static entry reached from 0xC1F74A.
    case 0xC1F74C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:33 LOADPTR FILE_SELECT_TEXT_FLAVOR_STRAWBERRY, @LOCAL00
    case 0xC1F74D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F74F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F751: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F753: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F755: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:35 LDX #@FLAVOURSTARTLINE+2
    case 0xC1F757: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:35 LDX #@FLAVOURSTARTLINE+2
    // Overlapping static entry reached from 0xC1F757.
    case 0xC1F759: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:36 LDA #0
    case 0xC1F75A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:36 LDA #0
    // Overlapping static entry reached from 0xC1F75A.
    case 0xC1F75C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:37 JSR UNKNOWN_C114B1
    case 0xC1F75D: cpu.execute_instruction<0x20>(0x0014B1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    case 0xC1F760: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x00C178, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    // Overlapping static entry reached from 0xC1F760.
    case 0xC1F762: cpu.execute_instruction<0xC1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    case 0xC1F763: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    // Overlapping static entry reached from 0xC1F762.
    case 0xC1F764: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    case 0xC1F765: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    // Overlapping static entry reached from 0xC1F765.
    case 0xC1F767: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:38 LOADPTR FILE_SELECT_TEXT_FLAVOR_BANANA, @LOCAL00
    case 0xC1F768: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:39 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F76A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:39 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F76C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:39 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F76E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:39 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F770: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:40 LDX #@FLAVOURSTARTLINE+3
    case 0xC1F772: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:40 LDX #@FLAVOURSTARTLINE+3
    // Overlapping static entry reached from 0xC1F772.
    case 0xC1F774: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:41 LDA #0
    case 0xC1F775: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:41 LDA #0
    // Overlapping static entry reached from 0xC1F775.
    case 0xC1F777: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:42 JSR UNKNOWN_C114B1
    case 0xC1F778: cpu.execute_instruction<0x20>(0x0014B1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    case 0xC1F77B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000086, 2); else cpu.execute_instruction<0xA9>(0x00C186, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    // Overlapping static entry reached from 0xC1F77B.
    case 0xC1F77D: cpu.execute_instruction<0xC1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    case 0xC1F77E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    // Overlapping static entry reached from 0xC1F77D.
    case 0xC1F77F: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    case 0xC1F780: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    // Overlapping static entry reached from 0xC1F780.
    case 0xC1F782: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:43 LOADPTR FILE_SELECT_TEXT_FLAVOR_PEANUT, @LOCAL00
    case 0xC1F783: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F785: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F787: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F789: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:44 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F78B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:45 LDX #@FLAVOURSTARTLINE+4
    case 0xC1F78D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:45 LDX #@FLAVOURSTARTLINE+4
    // Overlapping static entry reached from 0xC1F78D.
    case 0xC1F78F: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:46 LDA #0
    case 0xC1F790: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:46 LDA #0
    // Overlapping static entry reached from 0xC1F790.
    case 0xC1F792: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:47 JSR UNKNOWN_C114B1
    case 0xC1F793: cpu.execute_instruction<0x20>(0x0014B1, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:48 LDX #.LOWORD(GAME_STATE) + game_state::text_flavour
    case 0xC1F796: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000CD, 2); else cpu.execute_instruction<0xA2>(0x0099CD, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:48 LDX #.LOWORD(GAME_STATE) + game_state::text_flavour
    // Overlapping static entry reached from 0xC1F796.
    case 0xC1F798: cpu.execute_instruction<0x99>(0x0000BD, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:49 LDA __BSS_START__,X
    case 0xC1F799: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:49 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC1F798.
    case 0xC1F79B: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:50 AND #$00FF
    case 0xC1F79C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC1F79C.
    case 0xC1F79E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:51 BNE @UNKNOWN0
    case 0xC1F79F: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:52 SEP #PROC_FLAGS::ACCUM8
    case 0xC1F7A1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:53 LDA #1
    case 0xC1F7A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:54 STA __BSS_START__,X
    case 0xC1F7A5: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:54 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC1F7A3.
    case 0xC1F7A6: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:56 LDX #.LOWORD(GAME_STATE) + game_state::text_flavour
    case 0xC1F7A8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000CD, 2); else cpu.execute_instruction<0xA2>(0x0099CD, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:56 LDX #.LOWORD(GAME_STATE) + game_state::text_flavour
    // Overlapping static entry reached from 0xC1F7A8.
    case 0xC1F7AA: cpu.execute_instruction<0x99>(0x001886, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:57 STX @LOCAL03
    case 0xC1F7AB: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC1F7AD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:59 LDA __BSS_START__,X
    case 0xC1F7AF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:60 AND #$00FF
    case 0xC1F7B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC1F7B2.
    case 0xC1F7B4: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:61 DEC
    case 0xC1F7B5: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/intro/file_select/open_flavour_menu.asm:62 JSR UNKNOWN_C11887
    case 0xC1F7B6: cpu.execute_instruction<0x20>(0x001887, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:63 LOADPTR UNKNOWN_C1EC8F, @LOCAL00
    case 0xC1F7B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008F, 2); else cpu.execute_instruction<0xA9>(0x00EC8F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:63 LOADPTR UNKNOWN_C1EC8F, @LOCAL00
    // Overlapping static entry reached from 0xC1F7B9.
    case 0xC1F7BB: cpu.execute_instruction<0xEC>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:63 LOADPTR UNKNOWN_C1EC8F, @LOCAL00
    case 0xC1F7BC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:63 LOADPTR UNKNOWN_C1EC8F, @LOCAL00
    case 0xC1F7BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:63 LOADPTR UNKNOWN_C1EC8F, @LOCAL00
    // Overlapping static entry reached from 0xC1F7BE.
    case 0xC1F7C0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:63 LOADPTR UNKNOWN_C1EC8F, @LOCAL00
    case 0xC1F7C1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:64 JSR UNKNOWN_C11F5A
    case 0xC1F7C3: cpu.execute_instruction<0x20>(0x001F5A, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:65 LDA #1
    case 0xC1F7C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:65 LDA #1
    // Overlapping static entry reached from 0xC1F7C6.
    case 0xC1F7C8: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:66 JSR SELECTION_MENU
    case 0xC1F7C9: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:67 TAY
    case 0xC1F7CC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/intro/file_select/open_flavour_menu.asm:68 STY @LOCAL02
    case 0xC1F7CD: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:69 BEQ @UNKNOWN1
    case 0xC1F7CF: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:70 TYA
    case 0xC1F7D1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select/open_flavour_menu.asm:71 SEP #PROC_FLAGS::ACCUM8
    case 0xC1F7D2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:72 LDX @LOCAL03
    case 0xC1F7D4: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:73 STA __BSS_START__,X
    case 0xC1F7D6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:74 BRA @UNKNOWN4
    case 0xC1F7D9: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:77 LDX @LOCAL03
    case 0xC1F7DB: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:78 LDA __BSS_START__,X
    case 0xC1F7DD: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:79 AND #$00FF
    case 0xC1F7E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC1F7E0.
    case 0xC1F7E2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:80 BEQ @UNKNOWN2
    case 0xC1F7E3: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:81 AND #$00FF
    case 0xC1F7E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC1F7E5.
    case 0xC1F7E7: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:82 TAX
    case 0xC1F7E8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select/open_flavour_menu.asm:83 BRA @UNKNOWN3
    case 0xC1F7E9: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:85 LDX #1
    case 0xC1F7EB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:85 LDX #1
    // Overlapping static entry reached from 0xC1F7EB.
    case 0xC1F7ED: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:87 TXA
    case 0xC1F7EE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/file_select/open_flavour_menu.asm:88 JSL UNKNOWN_C1EC8F
    case 0xC1F7EF: cpu.execute_instruction<0x22>(0xC1EC8F, 4); return true;
    // src/intro/file_select/open_flavour_menu.asm:90 REP #PROC_FLAGS::ACCUM8
    case 0xC1F7F3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:95 LDA CURRENT_SAVE_SLOT
    case 0xC1F7F5: cpu.execute_instruction<0xAD>(0x00B4A1, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:96 AND #$00FF
    case 0xC1F7F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select/open_flavour_menu.asm:96 AND #$00FF
    // Overlapping static entry reached from 0xC1F7F8.
    case 0xC1F7FA: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:97 DEC
    case 0xC1F7FB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/intro/file_select/open_flavour_menu.asm:98 JSL SAVE_GAME_SLOT
    case 0xC1F7FC: cpu.execute_instruction<0x22>(0xEF0A4D, 4); return true;
    // src/intro/file_select/open_flavour_menu.asm:99 LDY @LOCAL02
    case 0xC1F800: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/intro/file_select/open_flavour_menu.asm:100 TYA
    case 0xC1F802: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:101 END_C_FUNCTION
    case 0xC1F803: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/file_select/open_flavour_menu.asm:101 END_C_FUNCTION
    case 0xC1F804: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/file_select/open_sound_menu.asm (source_named).
bool execute_introduction_file_select_open_sound_menu_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/file_select/open_sound_menu.asm:3 BEGIN_C_FUNCTION
    case 0xC1F568: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/file_select/open_sound_menu.asm:9 END_STACK_VARS
    case 0xC1F56A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/file_select/open_sound_menu.asm:9 END_STACK_VARS
    case 0xC1F56B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select/open_sound_menu.asm:9 END_STACK_VARS
    case 0xC1F56C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select/open_sound_menu.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1F56C.
    case 0xC1F56E: cpu.execute_instruction<0xFF>(0x19A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/file_select/open_sound_menu.asm:9 END_STACK_VARS
    case 0xC1F56F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select/open_sound_menu.asm:10 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MUSIC_MODE
    case 0xC1F570: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x000019, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select/open_sound_menu.asm:10 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MUSIC_MODE
    // Overlapping static entry reached from 0xC1F570.
    case 0xC1F572: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/file_select/open_sound_menu.asm:10 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_MUSIC_MODE
    case 0xC1F573: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/intro/file_select/open_sound_menu.asm:11 JSR SET_INSTANT_PRINTING
    case 0xC1F576: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu.asm:12 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    case 0xC1F57A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x00C0FE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu.asm:12 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    // Overlapping static entry reached from 0xC1F57A.
    case 0xC1F57C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_sound_menu.asm:12 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    case 0xC1F57D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_sound_menu.asm:12 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    // Overlapping static entry reached from 0xC1F57C.
    case 0xC1F57E: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu.asm:12 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    case 0xC1F57F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu.asm:12 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    // Overlapping static entry reached from 0xC1F57F.
    case 0xC1F581: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:12 LOADPTR FILE_SELECT_TEXT_SELECT_SOUND_SETTING, @LOCAL00
    case 0xC1F582: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select/open_sound_menu.asm:13 LDA #28
    case 0xC1F584: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00001C, 3); return true;
    // src/intro/file_select/open_sound_menu.asm:13 LDA #28
    // Overlapping static entry reached from 0xC1F584.
    case 0xC1F586: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_sound_menu.asm:14 JSR PRINT_STRING
    case 0xC1F587: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu.asm:15 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    case 0xC1F58A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001A, 2); else cpu.execute_instruction<0xA9>(0x00C11A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu.asm:15 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1F58A.
    case 0xC1F58C: cpu.execute_instruction<0xC1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_sound_menu.asm:15 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    case 0xC1F58D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_sound_menu.asm:15 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1F58C.
    case 0xC1F58E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu.asm:15 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    case 0xC1F58F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_sound_menu.asm:15 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1F58F.
    case 0xC1F591: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:15 LOADPTR FILE_SELECT_TEXT_SOUND_SETTING_STRINGS, @VIRTUAL0A
    case 0xC1F592: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select/open_sound_menu.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F594: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select/open_sound_menu.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F594.
    case 0xC1F596: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F597: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select/open_sound_menu.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F599: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select/open_sound_menu.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F599.
    case 0xC1F59B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1F59C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu.asm:17 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1F59E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu.asm:17 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1F5A0: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:17 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1F5A2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:17 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1F5A4: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu.asm:18 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F5A6: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu.asm:18 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F5A8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:18 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F5AA: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:18 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F5AC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F5AE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F5B0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F5B2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F5B4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu.asm:20 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1F5B6: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu.asm:20 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1F5B8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:20 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1F5BA: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:20 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1F5BC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu.asm:21 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5BE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu.asm:21 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5C0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:21 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5C2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:21 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5C4: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select/open_sound_menu.asm:22 LDX #1
    case 0xC1F5C6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/file_select/open_sound_menu.asm:22 LDX #1
    // Overlapping static entry reached from 0xC1F5C6.
    case 0xC1F5C8: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select/open_sound_menu.asm:23 LDA #0
    case 0xC1F5C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select/open_sound_menu.asm:23 LDA #0
    // Overlapping static entry reached from 0xC1F5C9.
    case 0xC1F5CB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_sound_menu.asm:24 JSR UNKNOWN_C114B1
    case 0xC1F5CC: cpu.execute_instruction<0x20>(0x0014B1, 3); return true;
    // src/intro/file_select/open_sound_menu.asm:25 LDA #SOUND_SETTING_STRING_LENGTH
    case 0xC1F5CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/intro/file_select/open_sound_menu.asm:25 LDA #SOUND_SETTING_STRING_LENGTH
    // Overlapping static entry reached from 0xC1F5CF.
    case 0xC1F5D1: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/intro/file_select/open_sound_menu.asm:26 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1F5D2: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/intro/file_select/open_sound_menu.asm:26 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1F5D4: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:26 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1F5D6: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:26 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1F5D8: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/intro/file_select/open_sound_menu.asm:27 CLC
    case 0xC1F5DA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu.asm:28 ADC @VIRTUAL06
    case 0xC1F5DB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/intro/file_select/open_sound_menu.asm:29 STA @VIRTUAL06
    case 0xC1F5DD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/intro/file_select/open_sound_menu.asm:30 STA @LOCAL00
    case 0xC1F5DF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/intro/file_select/open_sound_menu.asm:31 LDA @VIRTUAL06+2
    case 0xC1F5E1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/intro/file_select/open_sound_menu.asm:32 STA @LOCAL00+2
    case 0xC1F5E3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu.asm:33 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1F5E5: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu.asm:33 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1F5E7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:33 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1F5E9: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:33 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1F5EB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_sound_menu.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5ED: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_sound_menu.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5EF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5F1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_sound_menu.asm:34 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F5F3: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select/open_sound_menu.asm:35 LDX #2
    case 0xC1F5F5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/intro/file_select/open_sound_menu.asm:35 LDX #2
    // Overlapping static entry reached from 0xC1F5F5.
    case 0xC1F5F7: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select/open_sound_menu.asm:36 LDA #0
    case 0xC1F5F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select/open_sound_menu.asm:36 LDA #0
    // Overlapping static entry reached from 0xC1F5F8.
    case 0xC1F5FA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_sound_menu.asm:37 JSR UNKNOWN_C114B1
    case 0xC1F5FB: cpu.execute_instruction<0x20>(0x0014B1, 3); return true;
    // src/intro/file_select/open_sound_menu.asm:38 LDA GAME_STATE + game_state::sound_setting
    case 0xC1F5FE: cpu.execute_instruction<0xAD>(0x0098B7, 3); return true;
    // src/intro/file_select/open_sound_menu.asm:39 AND #$00FF
    case 0xC1F601: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select/open_sound_menu.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC1F601.
    case 0xC1F603: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select/open_sound_menu.asm:40 BEQ @UNKNOWN0
    case 0xC1F604: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/intro/file_select/open_sound_menu.asm:41 AND #$00FF
    case 0xC1F606: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select/open_sound_menu.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC1F606.
    case 0xC1F608: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/intro/file_select/open_sound_menu.asm:42 TAX
    case 0xC1F609: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu.asm:43 DEX
    case 0xC1F60A: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu.asm:44 BRA @UNKNOWN1
    case 0xC1F60B: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/intro/file_select/open_sound_menu.asm:46 LDX #0
    case 0xC1F60D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/file_select/open_sound_menu.asm:46 LDX #0
    // Overlapping static entry reached from 0xC1F60D.
    case 0xC1F60F: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/intro/file_select/open_sound_menu.asm:48 TXA
    case 0xC1F610: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/file_select/open_sound_menu.asm:49 JSR UNKNOWN_C11887
    case 0xC1F611: cpu.execute_instruction<0x20>(0x001887, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/file_select/open_sound_menu.asm:50 END_C_FUNCTION
    case 0xC1F614: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/file_select/open_sound_menu.asm:50 END_C_FUNCTION
    case 0xC1F615: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/file_select/open_text_speed_menu.asm (source_named).
bool execute_introduction_file_select_open_text_speed_menu_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1F3C2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:8 END_STACK_VARS
    case 0xC1F3C4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:8 END_STACK_VARS
    case 0xC1F3C5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:8 END_STACK_VARS
    case 0xC1F3C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1F3C6.
    case 0xC1F3C8: cpu.execute_instruction<0xFF>(0x18A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:8 END_STACK_VARS
    case 0xC1F3C9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:9 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_TEXT_SPEED
    case 0xC1F3CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:9 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_TEXT_SPEED
    // Overlapping static entry reached from 0xC1F3CA.
    case 0xC1F3CC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:9 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_TEXT_SPEED
    case 0xC1F3CD: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/intro/file_select/open_text_speed_menu.asm:10 JSL SET_INSTANT_PRINTING
    case 0xC1F3D0: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:11 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    case 0xC1F3D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E5, 2); else cpu.execute_instruction<0xA9>(0x00C0E5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:11 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    // Overlapping static entry reached from 0xC1F3D4.
    case 0xC1F3D6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:11 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    case 0xC1F3D7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:11 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    // Overlapping static entry reached from 0xC1F3D6.
    case 0xC1F3D8: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:11 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    case 0xC1F3D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:11 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    // Overlapping static entry reached from 0xC1F3D9.
    case 0xC1F3DB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:11 LOADPTR FILE_SELECT_TEXT_SELECT_TEXT_SPEED, @LOCAL00
    case 0xC1F3DC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:12 LDA #25
    case 0xC1F3DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x000019, 3); return true;
    // src/intro/file_select/open_text_speed_menu.asm:12 LDA #25
    // Overlapping static entry reached from 0xC1F3DE.
    case 0xC1F3E0: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:13 JSR PRINT_STRING
    case 0xC1F3E1: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:14 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1F3E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00C07F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:14 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F3E4.
    case 0xC1F3E6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:14 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1F3E7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:14 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F3E6.
    case 0xC1F3E8: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:14 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1F3E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:14 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F3E8.
    case 0xC1F3EA: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:14 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F3E9.
    case 0xC1F3EB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:14 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1F3EC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:15 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1F3EE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:15 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1F3F0: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:15 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1F3F2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:15 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1F3F4: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1F3F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1F3F6.
    case 0xC1F3F8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1F3F9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1F3FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1F3FB.
    case 0xC1F3FD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1F3FE: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F400: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F402: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F404: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1F406: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:18 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F408: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:18 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F40A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:18 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F40C: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:18 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F40E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:19 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F410: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:19 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F412: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:19 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F414: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:19 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F416: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:20 LDX #1
    case 0xC1F418: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/file_select/open_text_speed_menu.asm:20 LDX #1
    // Overlapping static entry reached from 0xC1F418.
    case 0xC1F41A: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:21 LDA #0
    case 0xC1F41B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select/open_text_speed_menu.asm:21 LDA #0
    // Overlapping static entry reached from 0xC1F41B.
    case 0xC1F41D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:22 JSR UNKNOWN_C114B1
    case 0xC1F41E: cpu.execute_instruction<0x20>(0x0014B1, 3); return true;
    // src/intro/file_select/open_text_speed_menu.asm:23 LDA #TEXT_SPEED_STRING_LENGTH
    case 0xC1F421: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/intro/file_select/open_text_speed_menu.asm:23 LDA #TEXT_SPEED_STRING_LENGTH
    // Overlapping static entry reached from 0xC1F421.
    case 0xC1F423: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:24 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1F424: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:24 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1F426: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:24 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1F428: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:24 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1F42A: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:25 CLC
    case 0xC1F42C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu.asm:26 ADC @VIRTUAL06
    case 0xC1F42D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:27 STA @VIRTUAL06
    case 0xC1F42F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:28 STA @LOCAL00
    case 0xC1F431: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:29 LDA @VIRTUAL06+2
    case 0xC1F433: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:30 STA @LOCAL00+2
    case 0xC1F435: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:31 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F437: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:31 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F439: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:31 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F43B: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:31 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F43D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F43F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F441: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F443: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:32 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F445: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:33 LDX #2
    case 0xC1F447: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/intro/file_select/open_text_speed_menu.asm:33 LDX #2
    // Overlapping static entry reached from 0xC1F447.
    case 0xC1F449: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:34 LDA #0
    case 0xC1F44A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select/open_text_speed_menu.asm:34 LDA #0
    // Overlapping static entry reached from 0xC1F44A.
    case 0xC1F44C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:35 JSR UNKNOWN_C114B1
    case 0xC1F44D: cpu.execute_instruction<0x20>(0x0014B1, 3); return true;
    // src/intro/file_select/open_text_speed_menu.asm:36 LDA #TEXT_SPEED_STRING_LENGTH*2
    case 0xC1F450: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/intro/file_select/open_text_speed_menu.asm:36 LDA #TEXT_SPEED_STRING_LENGTH*2
    // Overlapping static entry reached from 0xC1F450.
    case 0xC1F452: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:37 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1F453: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:37 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1F455: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:37 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1F457: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:37 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC1F459: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:38 CLC
    case 0xC1F45B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu.asm:39 ADC @VIRTUAL06
    case 0xC1F45C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:40 STA @VIRTUAL06
    case 0xC1F45E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:41 STA @LOCAL00
    case 0xC1F460: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:42 LDA @VIRTUAL06+2
    case 0xC1F462: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:43 STA @LOCAL00+2
    case 0xC1F464: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:44 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F466: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:44 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F468: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:44 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F46A: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:44 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1F46C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F46E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F470: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F472: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:45 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1F474: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:46 LDX #3
    case 0xC1F476: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/intro/file_select/open_text_speed_menu.asm:46 LDX #3
    // Overlapping static entry reached from 0xC1F476.
    case 0xC1F478: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:47 LDA #0
    case 0xC1F479: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select/open_text_speed_menu.asm:47 LDA #0
    // Overlapping static entry reached from 0xC1F479.
    case 0xC1F47B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:48 JSR UNKNOWN_C114B1
    case 0xC1F47C: cpu.execute_instruction<0x20>(0x0014B1, 3); return true;
    // src/intro/file_select/open_text_speed_menu.asm:49 LDA GAME_STATE+game_state::text_speed
    case 0xC1F47F: cpu.execute_instruction<0xAD>(0x0098B6, 3); return true;
    // src/intro/file_select/open_text_speed_menu.asm:50 AND #$00FF
    case 0xC1F482: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select/open_text_speed_menu.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC1F482.
    case 0xC1F484: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:51 BEQ @UNKNOWN0
    case 0xC1F485: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:52 AND #$00FF
    case 0xC1F487: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select/open_text_speed_menu.asm:52 AND #$00FF
    // Overlapping static entry reached from 0xC1F487.
    case 0xC1F489: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:53 TAX
    case 0xC1F48A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu.asm:54 DEX
    case 0xC1F48B: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu.asm:55 BRA @UNKNOWN1
    case 0xC1F48C: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:57 LDX #1
    case 0xC1F48E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/file_select/open_text_speed_menu.asm:57 LDX #1
    // Overlapping static entry reached from 0xC1F48E.
    case 0xC1F490: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/intro/file_select/open_text_speed_menu.asm:59 TXA
    case 0xC1F491: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/file_select/open_text_speed_menu.asm:60 JSR UNKNOWN_C11887
    case 0xC1F492: cpu.execute_instruction<0x20>(0x001887, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:61 END_C_FUNCTION
    case 0xC1F495: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/file_select/open_text_speed_menu.asm:61 END_C_FUNCTION
    case 0xC1F496: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/file_select_menu.asm (source_named).
bool execute_introduction_file_select_menu_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/file_select_menu.asm:3 BEGIN_C_FUNCTION
    case 0xC1ED5B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/file_select_menu.asm:13 END_STACK_VARS
    case 0xC1ED5D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/intro/file_select_menu.asm:13 END_STACK_VARS
    case 0xC1ED5E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/file_select_menu.asm:13 END_STACK_VARS
    case 0xC1ED5F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select_menu.asm:13 END_STACK_VARS
    case 0xC1ED60: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select_menu.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC1ED60.
    case 0xC1ED62: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/file_select_menu.asm:13 END_STACK_VARS
    case 0xC1ED63: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/intro/file_select_menu.asm:13 END_STACK_VARS
    case 0xC1ED64: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:14 STA @VIRTUAL02
    case 0xC1ED65: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/file_select_menu.asm:14 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC1ED62.
    case 0xC1ED66: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/intro/file_select_menu.asm:15 LDA #WINDOW::FILE_SELECT_MAIN
    case 0xC1ED67: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x000013, 3); return true;
    // src/intro/file_select_menu.asm:15 LDA #WINDOW::FILE_SELECT_MAIN
    // Overlapping static entry reached from 0xC1ED67.
    case 0xC1ED69: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu.asm:16 JSR CREATE_WINDOW
    case 0xC1ED6A: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/intro/file_select_menu.asm:17 LDY #0
    case 0xC1ED6D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/file_select_menu.asm:17 LDY #0
    // Overlapping static entry reached from 0xC1ED6D.
    case 0xC1ED6F: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/intro/file_select_menu.asm:18 STY @LOCAL03
    case 0xC1ED70: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/intro/file_select_menu.asm:19 JMP @UNKNOWN7
    case 0xC1ED72: cpu.execute_instruction<0x4C>(0x00EE58, 3); return true;
    // src/intro/file_select_menu.asm:21 TYA
    case 0xC1ED75: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:22 JSL LOAD_GAME_SLOT
    case 0xC1ED76: cpu.execute_instruction<0x22>(0xEF0A68, 4); return true;
    // src/intro/file_select_menu.asm:23 LDA GAME_STATE + game_state::favourite_thing + 1
    case 0xC1ED7A: cpu.execute_instruction<0xAD>(0x009826, 3); return true;
    // src/intro/file_select_menu.asm:24 AND #$00FF
    case 0xC1ED7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select_menu.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC1ED7D.
    case 0xC1ED7F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu.asm:25 BEQ @UNKNOWN5
    case 0xC1ED80: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // src/intro/file_select_menu.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ED82: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select_menu.asm:27 STZ @LOCAL00
    case 0xC1ED84: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/intro/file_select_menu.asm:28 LDX #32
    case 0xC1ED86: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/intro/file_select_menu.asm:28 LDX #32
    // Overlapping static entry reached from 0xC1ED86.
    case 0xC1ED88: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/intro/file_select_menu.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC1ED89: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/file_select_menu.asm:30 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC1ED8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // src/intro/file_select_menu.asm:30 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC1ED8B.
    case 0xC1ED8D: cpu.execute_instruction<0x9C>(0x00FC22, 3); return true;
    // src/intro/file_select_menu.asm:31 JSL MEMSET16
    case 0xC1ED8E: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/intro/file_select_menu.asm:31 JSL MEMSET16
    // Overlapping static entry reached from 0xC1ED8D.
    case 0xC1ED90: cpu.execute_instruction<0x8E>(0x00A4C0, 3); return true;
    // src/intro/file_select_menu.asm:32 LDY @LOCAL03
    case 0xC1ED92: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/intro/file_select_menu.asm:32 LDY @LOCAL03
    // Overlapping static entry reached from 0xC1ED90.
    case 0xC1ED93: cpu.execute_instruction<0x1E>(0x00E298, 3); return true;
    // src/intro/file_select_menu.asm:33 TYA
    case 0xC1ED94: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC1ED95: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select_menu.asm:34 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1ED93.
    case 0xC1ED96: cpu.execute_instruction<0x20>(0x006918, 3); return true;
    // src/intro/file_select_menu.asm:35 CLC
    case 0xC1ED97: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:36 ADC #CHAR::ONE
    case 0xC1ED98: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000061, 2); else cpu.execute_instruction<0x69>(0x008D61, 3); return true;
    // src/intro/file_select_menu.asm:36 ADC #CHAR::ONE
    // Overlapping static entry reached from 0xC1ED96.
    case 0xC1ED99: cpu.execute_instruction<0x61>(0x00008D, 2); return true;
    // src/intro/file_select_menu.asm:37 STA TEMPORARY_TEXT_BUFFER
    case 0xC1ED9A: cpu.execute_instruction<0x8D>(0x009C9F, 3); return true;
    // src/intro/file_select_menu.asm:37 STA TEMPORARY_TEXT_BUFFER
    // Overlapping static entry reached from 0xC1ED98.
    case 0xC1ED9B: cpu.execute_instruction<0x9F>(0x6AA99C, 4); return true;
    // src/intro/file_select_menu.asm:38 LDA #CHAR::COLON
    case 0xC1ED9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006A, 2); else cpu.execute_instruction<0xA9>(0x008D6A, 3); return true;
    // src/intro/file_select_menu.asm:39 STA TEMPORARY_TEXT_BUFFER + 1
    case 0xC1ED9F: cpu.execute_instruction<0x8D>(0x009CA0, 3); return true;
    // src/intro/file_select_menu.asm:39 STA TEMPORARY_TEXT_BUFFER + 1
    // Overlapping static entry reached from 0xC1ED9D.
    case 0xC1EDA0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00009C, 2); else cpu.execute_instruction<0xA0>(0x00A99C, 3); return true;
    // src/intro/file_select_menu.asm:40 LDA #CHAR::SPACE
    case 0xC1EDA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x008D50, 3); return true;
    // src/intro/file_select_menu.asm:40 LDA #CHAR::SPACE
    // Overlapping static entry reached from 0xC1EDA0.
    case 0xC1EDA3: cpu.execute_instruction<0x50>(0x00008D, 2); return true;
    // src/intro/file_select_menu.asm:41 STA TEMPORARY_TEXT_BUFFER + 2
    case 0xC1EDA4: cpu.execute_instruction<0x8D>(0x009CA1, 3); return true;
    // src/intro/file_select_menu.asm:41 STA TEMPORARY_TEXT_BUFFER + 2
    // Overlapping static entry reached from 0xC1EDA2.
    case 0xC1EDA5: cpu.execute_instruction<0xA1>(0x00009C, 2); return true;
    // src/intro/file_select_menu.asm:42 LDX #0
    case 0xC1EDA7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/file_select_menu.asm:42 LDX #0
    // Overlapping static entry reached from 0xC1EDA7.
    case 0xC1EDA9: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/intro/file_select_menu.asm:43 BRA @UNKNOWN4
    case 0xC1EDAA: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/intro/file_select_menu.asm:45 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EDAC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select_menu.asm:46 STA TEMPORARY_TEXT_BUFFER + 3,X
    case 0xC1EDAE: cpu.execute_instruction<0x9D>(0x009CA2, 3); return true;
    // src/intro/file_select_menu.asm:47 INX
    case 0xC1EDB1: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC1EDB2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/file_select_menu.asm:50 LDA PARTY_CHARACTERS + char_struct::name,X
    case 0xC1EDB4: cpu.execute_instruction<0xBD>(0x0099CE, 3); return true;
    // src/intro/file_select_menu.asm:51 AND #$00FF
    case 0xC1EDB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select_menu.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xC1EDB7.
    case 0xC1EDB9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu.asm:52 BEQ @UNKNOWN3
    case 0xC1EDBA: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/intro/file_select_menu.asm:53 CPX #.SIZEOF(char_struct::name)
    case 0xC1EDBC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000005, 2); else cpu.execute_instruction<0xE0>(0x000005, 3); return true;
    // src/intro/file_select_menu.asm:53 CPX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1EDBC.
    case 0xC1EDBE: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/intro/file_select_menu.asm:54 BCC @UNKNOWN1
    case 0xC1EDBF: cpu.execute_instruction<0x90>(0x0000EB, 2); return true;
    // src/intro/file_select_menu.asm:56 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EDC1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select_menu.asm:57 STZ TEMPORARY_TEXT_BUFFER + 3,X
    case 0xC1EDC3: cpu.execute_instruction<0x9E>(0x009CA2, 3); return true;
    // src/intro/file_select_menu.asm:58 INX
    case 0xC1EDC6: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:60 CPX #.SIZEOF(char_struct::name)
    case 0xC1EDC7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000005, 2); else cpu.execute_instruction<0xE0>(0x000005, 3); return true;
    // src/intro/file_select_menu.asm:60 CPX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1EDC7.
    case 0xC1EDC9: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/intro/file_select_menu.asm:61 BCC @UNKNOWN2
    case 0xC1EDCA: cpu.execute_instruction<0x90>(0x0000E6, 2); return true;
    // src/intro/file_select_menu.asm:62 LDA #1
    case 0xC1EDCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009901, 3); return true;
    // src/intro/file_select_menu.asm:63 STA SAVE_FILES_PRESENT,Y
    case 0xC1EDCE: cpu.execute_instruction<0x99>(0x00B49E, 3); return true;
    // src/intro/file_select_menu.asm:63 STA SAVE_FILES_PRESENT,Y
    // Overlapping static entry reached from 0xC1EDCC.
    case 0xC1EDCF: cpu.execute_instruction<0x9E>(0x00C2B4, 3); return true;
    // src/intro/file_select_menu.asm:64 REP #PROC_FLAGS::ACCUM8
    case 0xC1EDD1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/file_select_menu.asm:64 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1EDCF.
    case 0xC1EDD2: cpu.execute_instruction<0x20>(0x00CDAD, 3); return true;
    // src/intro/file_select_menu.asm:65 LDA GAME_STATE + game_state::text_flavour
    case 0xC1EDD3: cpu.execute_instruction<0xAD>(0x0099CD, 3); return true;
    // src/intro/file_select_menu.asm:65 LDA GAME_STATE + game_state::text_flavour
    // Overlapping static entry reached from 0xC1EDD2.
    case 0xC1EDD5: cpu.execute_instruction<0x99>(0x00FF29, 3); return true;
    // src/intro/file_select_menu.asm:66 AND #$00FF
    case 0xC1EDD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select_menu.asm:66 AND #$00FF
    // Overlapping static entry reached from 0xC1EDD6.
    case 0xC1EDD8: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/intro/file_select_menu.asm:67 XBA
    case 0xC1EDD9: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:68 AND #$FF00
    case 0xC1EDDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/intro/file_select_menu.asm:68 AND #$FF00
    // Overlapping static entry reached from 0xC1EDDA.
    case 0xC1EDDC: cpu.execute_instruction<0xFF>(0x801C85, 4); return true;
    // src/intro/file_select_menu.asm:69 STA @LOCAL02
    case 0xC1EDDD: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/intro/file_select_menu.asm:70 BRA @UNKNOWN6
    case 0xC1EDDF: cpu.execute_instruction<0x80>(0x000047, 2); return true;
    // src/intro/file_select_menu.asm:70 BRA @UNKNOWN6
    // Overlapping static entry reached from 0xC1EDDC.
    case 0xC1EDE0: cpu.execute_instruction<0x47>(0x0000A4, 2); return true;
    // src/intro/file_select_menu.asm:72 LDY @LOCAL03
    case 0xC1EDE1: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/intro/file_select_menu.asm:72 LDY @LOCAL03
    // Overlapping static entry reached from 0xC1EDE0.
    case 0xC1EDE2: cpu.execute_instruction<0x1E>(0x00E298, 3); return true;
    // src/intro/file_select_menu.asm:73 TYA
    case 0xC1EDE3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:74 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EDE4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select_menu.asm:74 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1EDE2.
    case 0xC1EDE5: cpu.execute_instruction<0x20>(0x006918, 3); return true;
    // src/intro/file_select_menu.asm:75 CLC
    case 0xC1EDE6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:76 ADC #CHAR::ONE
    case 0xC1EDE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000061, 2); else cpu.execute_instruction<0x69>(0x008D61, 3); return true;
    // src/intro/file_select_menu.asm:76 ADC #CHAR::ONE
    // Overlapping static entry reached from 0xC1EDE5.
    case 0xC1EDE8: cpu.execute_instruction<0x61>(0x00008D, 2); return true;
    // src/intro/file_select_menu.asm:77 STA TEMPORARY_TEXT_BUFFER
    case 0xC1EDE9: cpu.execute_instruction<0x8D>(0x009C9F, 3); return true;
    // src/intro/file_select_menu.asm:77 STA TEMPORARY_TEXT_BUFFER
    // Overlapping static entry reached from 0xC1EDE7.
    case 0xC1EDEA: cpu.execute_instruction<0x9F>(0x20C29C, 4); return true;
    // src/intro/file_select_menu.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC1EDEC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu.asm:79 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EDEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A0, 2); else cpu.execute_instruction<0xA9>(0x009CA0, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu.asm:79 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EDEE.
    case 0xC1EDF0: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu.asm:79 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EDF1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu.asm:79 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EDF3: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu.asm:79 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EDF4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu.asm:79 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EDF6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu.asm:79 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EDF7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu.asm:79 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 1, @VIRTUAL06
    case 0xC1EDF9: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/file_select_menu.asm:80 REP #PROC_FLAGS::ACCUM8
    case 0xC1EDFB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu.asm:81 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EDFD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu.asm:81 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EDFF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu.asm:81 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE01: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu.asm:81 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE03: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:82 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    case 0xC1EE05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005E, 2); else cpu.execute_instruction<0xA9>(0x00C05E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:82 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    // Overlapping static entry reached from 0xC1EE05.
    case 0xC1EE07: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x001285, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu.asm:82 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    case 0xC1EE08: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu.asm:82 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    // Overlapping static entry reached from 0xC1EE07.
    case 0xC1EE09: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:82 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    case 0xC1EE0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:82 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    // Overlapping static entry reached from 0xC1EE09.
    case 0xC1EE0B: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:82 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    // Overlapping static entry reached from 0xC1EE0A.
    case 0xC1EE0C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu.asm:82 LOADPTR FILE_SELECT_TEXT_START_NEW_GAME, @LOCAL01
    case 0xC1EE0D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select_menu.asm:83 LDA #FILE_SELECT_TEXT_NEW_GAME_LENGTH
    case 0xC1EE0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/intro/file_select_menu.asm:83 LDA #FILE_SELECT_TEXT_NEW_GAME_LENGTH
    // Overlapping static entry reached from 0xC1EE0F.
    case 0xC1EE11: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu.asm:84 JSL MEMCPY24
    case 0xC1EE12: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/intro/file_select_menu.asm:85 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EE16: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select_menu.asm:86 STZ TEMPORARY_TEXT_BUFFER + 17
    case 0xC1EE18: cpu.execute_instruction<0x9C>(0x009CB0, 3); return true;
    // src/intro/file_select_menu.asm:87 LDY @LOCAL03
    case 0xC1EE1B: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/intro/file_select_menu.asm:88 TYX
    case 0xC1EE1D: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:89 STZ SAVE_FILES_PRESENT,X
    case 0xC1EE1E: cpu.execute_instruction<0x9E>(0x00B49E, 3); return true;
    // src/intro/file_select_menu.asm:90 REP #PROC_FLAGS::ACCUM8
    case 0xC1EE21: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/file_select_menu.asm:91 LDA #$100
    case 0xC1EE23: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000100, 3); return true;
    // src/intro/file_select_menu.asm:91 LDA #$100
    // Overlapping static entry reached from 0xC1EE23.
    case 0xC1EE25: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/intro/file_select_menu.asm:92 STA @LOCAL02
    case 0xC1EE26: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/intro/file_select_menu.asm:92 STA @LOCAL02
    // Overlapping static entry reached from 0xC1EE25.
    case 0xC1EE27: cpu.execute_instruction<0x1C>(0x000484, 3); return true;
    // src/intro/file_select_menu.asm:94 STY @VIRTUAL04
    case 0xC1EE28: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/intro/file_select_menu.asm:95 INC @VIRTUAL04
    case 0xC1EE2A: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu.asm:96 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu.asm:96 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EE2C.
    case 0xC1EE2E: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu.asm:96 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE2F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu.asm:96 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE31: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu.asm:96 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE32: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu.asm:96 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE34: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu.asm:96 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE35: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu.asm:96 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE37: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/file_select_menu.asm:97 REP #PROC_FLAGS::ACCUM8
    case 0xC1EE39: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu.asm:98 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE3B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu.asm:98 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE3D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu.asm:98 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE3F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu.asm:98 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE41: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select_menu.asm:99 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1EE43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select_menu.asm:99 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1EE43.
    case 0xC1EE45: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/intro/file_select_menu.asm:99 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1EE46: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select_menu.asm:99 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1EE48: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select_menu.asm:99 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC1EE48.
    case 0xC1EE4A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/intro/file_select_menu.asm:99 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC1EE4B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select_menu.asm:100 LDA @LOCAL02
    case 0xC1EE4D: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/intro/file_select_menu.asm:101 ORA @VIRTUAL04
    case 0xC1EE4F: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/intro/file_select_menu.asm:102 JSR UNKNOWN_C115F4
    case 0xC1EE51: cpu.execute_instruction<0x20>(0x0015F4, 3); return true;
    // src/intro/file_select_menu.asm:103 LDY @VIRTUAL04
    case 0xC1EE54: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/intro/file_select_menu.asm:104 STY @LOCAL03
    case 0xC1EE56: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/intro/file_select_menu.asm:106 CPY #SAVE_COUNT
    case 0xC1EE58: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000003, 2); else cpu.execute_instruction<0xC0>(0x000003, 3); return true;
    // src/intro/file_select_menu.asm:106 CPY #SAVE_COUNT
    // Overlapping static entry reached from 0xC1EE58.
    case 0xC1EE5A: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/intro/file_select_menu.asm:107 BCCL @UNKNOWN0
    case 0xC1EE5B: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/intro/file_select_menu.asm:107 BCCL @UNKNOWN0
    case 0xC1EE5D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/intro/file_select_menu.asm:107 BCCL @UNKNOWN0
    case 0xC1EE5F: cpu.execute_instruction<0x4C>(0x00ED75, 3); return true;
    // src/intro/file_select_menu.asm:108 LDY #0
    case 0xC1EE62: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/file_select_menu.asm:108 LDY #0
    // Overlapping static entry reached from 0xC1EE62.
    case 0xC1EE64: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/intro/file_select_menu.asm:109 TYX
    case 0xC1EE65: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:110 LDA #1
    case 0xC1EE66: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select_menu.asm:110 LDA #1
    // Overlapping static entry reached from 0xC1EE66.
    case 0xC1EE68: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu.asm:111 JSR UNKNOWN_C1180D
    case 0xC1EE69: cpu.execute_instruction<0x20>(0x00180D, 3); return true;
    // src/intro/file_select_menu.asm:112 LDY #0
    case 0xC1EE6C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/file_select_menu.asm:112 LDY #0
    // Overlapping static entry reached from 0xC1EE6C.
    case 0xC1EE6E: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/intro/file_select_menu.asm:113 STY @LOCALEB2
    case 0xC1EE6F: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/intro/file_select_menu.asm:114 JMP @UNKNOWN14
    case 0xC1EE71: cpu.execute_instruction<0x4C>(0x00EFCE, 3); return true;
    // src/intro/file_select_menu.asm:116 TYA
    case 0xC1EE74: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:117 JSL LOAD_GAME_SLOT
    case 0xC1EE75: cpu.execute_instruction<0x22>(0xEF0A68, 4); return true;
    // src/intro/file_select_menu.asm:118 LDA GAME_STATE + game_state::favourite_thing + 1
    case 0xC1EE79: cpu.execute_instruction<0xAD>(0x009826, 3); return true;
    // src/intro/file_select_menu.asm:119 AND #$00FF
    case 0xC1EE7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select_menu.asm:119 AND #$00FF
    // Overlapping static entry reached from 0xC1EE7C.
    case 0xC1EE7E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/file_select_menu.asm:120 BEQL @UNKNOWN13
    case 0xC1EE7F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/file_select_menu.asm:120 BEQL @UNKNOWN13
    case 0xC1EE81: cpu.execute_instruction<0x4C>(0x00EFC9, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu.asm:121 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu.asm:121 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EE84.
    case 0xC1EE86: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu.asm:121 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE87: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu.asm:121 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE89: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu.asm:121 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE8A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu.asm:121 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE8C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu.asm:121 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE8D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu.asm:121 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EE8F: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/file_select_menu.asm:122 REP #PROC_FLAGS::ACCUM8
    case 0xC1EE91: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE93: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE95: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE97: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EE99: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:124 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    case 0xC1EE9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006E, 2); else cpu.execute_instruction<0xA9>(0x00C06E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:124 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    // Overlapping static entry reached from 0xC1EE9B.
    case 0xC1EE9D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x001285, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu.asm:124 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    case 0xC1EE9E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu.asm:124 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    // Overlapping static entry reached from 0xC1EE9D.
    case 0xC1EE9F: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:124 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    case 0xC1EEA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:124 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    // Overlapping static entry reached from 0xC1EE9F.
    case 0xC1EEA1: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:124 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    // Overlapping static entry reached from 0xC1EEA0.
    case 0xC1EEA2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu.asm:124 LOADPTR FILE_SELECT_TEXT_LEVEL, @LOCAL01
    case 0xC1EEA3: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select_menu.asm:125 LDA #FILE_SELECT_TEXT_LEVEL_LENGTH
    case 0xC1EEA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/intro/file_select_menu.asm:125 LDA #FILE_SELECT_TEXT_LEVEL_LENGTH
    // Overlapping static entry reached from 0xC1EEA5.
    case 0xC1EEA7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu.asm:126 JSL MEMCPY24
    case 0xC1EEA8: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/intro/file_select_menu.asm:127 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EEAC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select_menu.asm:128 STZ TEMPORARY_TEXT_BUFFER + 6
    case 0xC1EEAE: cpu.execute_instruction<0x9C>(0x009CA5, 3); return true;
    // src/intro/file_select_menu.asm:129 LDY @LOCALEB2
    case 0xC1EEB1: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/intro/file_select_menu.asm:130 TYX
    case 0xC1EEB3: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:131 REP #PROC_FLAGS::ACCUM8
    case 0xC1EEB4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/file_select_menu.asm:132 LDA #9
    case 0xC1EEB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/intro/file_select_menu.asm:132 LDA #9
    // Overlapping static entry reached from 0xC1EEB6.
    case 0xC1EEB8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu.asm:133 JSL UNKNOWN_C438A5
    case 0xC1EEB9: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu.asm:134 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EEBD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu.asm:134 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EEBF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu.asm:134 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EEC1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu.asm:134 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EEC3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu.asm:135 LDA #32
    case 0xC1EEC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/intro/file_select_menu.asm:135 LDA #32
    // Overlapping static entry reached from 0xC1EEC5.
    case 0xC1EEC7: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu.asm:136 JSR PRINT_STRING
    case 0xC1EEC8: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/intro/file_select_menu.asm:137 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EECB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/intro/file_select_menu.asm:138 MOVE_INT832 .LOWORD(PARTY_CHARACTERS) + (PARTY_MEMBER::NESS - 1) * .SIZEOF(char_struct) + char_struct::level, @VIRTUAL06
    case 0xC1EECD: cpu.execute_instruction<0xAD>(0x0099D3, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/intro/file_select_menu.asm:138 MOVE_INT832 .LOWORD(PARTY_CHARACTERS) + (PARTY_MEMBER::NESS - 1) * .SIZEOF(char_struct) + char_struct::level, @VIRTUAL06
    case 0xC1EED0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/intro/file_select_menu.asm:138 MOVE_INT832 .LOWORD(PARTY_CHARACTERS) + (PARTY_MEMBER::NESS - 1) * .SIZEOF(char_struct) + char_struct::level, @VIRTUAL06
    case 0xC1EED2: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/intro/file_select_menu.asm:138 MOVE_INT832 .LOWORD(PARTY_CHARACTERS) + (PARTY_MEMBER::NESS - 1) * .SIZEOF(char_struct) + char_struct::level, @VIRTUAL06
    case 0xC1EED4: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/intro/file_select_menu.asm:138 MOVE_INT832 .LOWORD(PARTY_CHARACTERS) + (PARTY_MEMBER::NESS - 1) * .SIZEOF(char_struct) + char_struct::level, @VIRTUAL06
    case 0xC1EED6: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/file_select_menu.asm:139 REP #PROC_FLAGS::ACCUM8
    case 0xC1EED8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu.asm:140 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EEDA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu.asm:140 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EEDC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu.asm:140 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EEDE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu.asm:140 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EEE0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu.asm:141 JSR UNKNOWN_C10D7C
    case 0xC1EEE2: cpu.execute_instruction<0x20>(0x000D7C, 3); return true;
    // src/intro/file_select_menu.asm:142 TAX
    case 0xC1EEE5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:143 CPX #1
    case 0xC1EEE6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/intro/file_select_menu.asm:143 CPX #1
    // Overlapping static entry reached from 0xC1EEE6.
    case 0xC1EEE8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu.asm:144 BNE @UNKNOWN11
    case 0xC1EEE9: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/intro/file_select_menu.asm:145 LDA #CHAR::SPACE
    case 0xC1EEEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x000050, 3); return true;
    // src/intro/file_select_menu.asm:145 LDA #CHAR::SPACE
    // Overlapping static entry reached from 0xC1EEEB.
    case 0xC1EEED: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/intro/file_select_menu.asm:146 BRA @UNKNOWN12
    case 0xC1EEEE: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/intro/file_select_menu.asm:148 STX @VIRTUAL04
    case 0xC1EEF0: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/intro/file_select_menu.asm:149 LDA #7
    case 0xC1EEF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/intro/file_select_menu.asm:149 LDA #7
    // Overlapping static entry reached from 0xC1EEF2.
    case 0xC1EEF4: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/intro/file_select_menu.asm:150 SEC
    case 0xC1EEF5: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:151 SBC @VIRTUAL04
    case 0xC1EEF6: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/intro/file_select_menu.asm:152 TAX
    case 0xC1EEF8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:153 LDA NUMBER_TEXT_BUFFER,X
    case 0xC1EEF9: cpu.execute_instruction<0xBD>(0x00895A, 3); return true;
    // src/intro/file_select_menu.asm:154 AND #$00FF
    case 0xC1EEFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select_menu.asm:154 AND #$00FF
    // Overlapping static entry reached from 0xC1EEFC.
    case 0xC1EEFE: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/intro/file_select_menu.asm:155 CLC
    case 0xC1EEFF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:156 ADC #CHAR::ZERO
    case 0xC1EF00: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x000060, 3); return true;
    // src/intro/file_select_menu.asm:156 ADC #CHAR::ZERO
    // Overlapping static entry reached from 0xC1EF00.
    case 0xC1EF02: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/intro/file_select_menu.asm:158 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EF03: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select_menu.asm:159 STA TEMPORARY_TEXT_BUFFER
    case 0xC1EF05: cpu.execute_instruction<0x8D>(0x009C9F, 3); return true;
    // src/intro/file_select_menu.asm:160 LDA NUMBER_TEXT_BUFFER + 6
    case 0xC1EF08: cpu.execute_instruction<0xAD>(0x008960, 3); return true;
    // src/intro/file_select_menu.asm:161 CLC
    case 0xC1EF0B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:162 ADC #CHAR::ZERO
    case 0xC1EF0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x008D60, 3); return true;
    // src/intro/file_select_menu.asm:163 STA TEMPORARY_TEXT_BUFFER + 1
    case 0xC1EF0E: cpu.execute_instruction<0x8D>(0x009CA0, 3); return true;
    // src/intro/file_select_menu.asm:163 STA TEMPORARY_TEXT_BUFFER + 1
    // Overlapping static entry reached from 0xC1EF0C.
    case 0xC1EF0F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00009C, 2); else cpu.execute_instruction<0xA0>(0x009C9C, 3); return true;
    // src/intro/file_select_menu.asm:164 STZ TEMPORARY_TEXT_BUFFER + 2
    case 0xC1EF11: cpu.execute_instruction<0x9C>(0x009CA1, 3); return true;
    // src/intro/file_select_menu.asm:164 STZ TEMPORARY_TEXT_BUFFER + 2
    // Overlapping static entry reached from 0xC1EF0F.
    case 0xC1EF12: cpu.execute_instruction<0xA1>(0x00009C, 2); return true;
    // src/intro/file_select_menu.asm:165 LDY @LOCALEB2
    case 0xC1EF14: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/intro/file_select_menu.asm:166 TYX
    case 0xC1EF16: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:167 REP #PROC_FLAGS::ACCUM8
    case 0xC1EF17: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/file_select_menu.asm:168 LDA #13
    case 0xC1EF19: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00000D, 3); return true;
    // src/intro/file_select_menu.asm:168 LDA #13
    // Overlapping static entry reached from 0xC1EF19.
    case 0xC1EF1B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu.asm:169 JSL UNKNOWN_C438A5
    case 0xC1EF1C: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu.asm:170 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EF20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu.asm:170 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EF20.
    case 0xC1EF22: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu.asm:170 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EF23: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu.asm:170 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EF25: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu.asm:170 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EF26: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu.asm:170 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EF28: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu.asm:170 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EF29: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu.asm:170 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EF2B: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/file_select_menu.asm:171 REP #PROC_FLAGS::ACCUM8
    case 0xC1EF2D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu.asm:172 MOVE_INT @VIRTUAL06, @LOCALEB1
    case 0xC1EF2F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu.asm:172 MOVE_INT @VIRTUAL06, @LOCALEB1
    case 0xC1EF31: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu.asm:172 MOVE_INT @VIRTUAL06, @LOCALEB1
    case 0xC1EF33: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu.asm:172 MOVE_INT @VIRTUAL06, @LOCALEB1
    case 0xC1EF35: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu.asm:173 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF37: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu.asm:173 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF39: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu.asm:173 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF3B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu.asm:173 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF3D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu.asm:174 LDA #32
    case 0xC1EF3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/intro/file_select_menu.asm:174 LDA #32
    // Overlapping static entry reached from 0xC1EF3F.
    case 0xC1EF41: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu.asm:175 JSR PRINT_STRING
    case 0xC1EF42: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu.asm:176 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF45: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu.asm:176 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF47: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu.asm:176 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF49: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu.asm:176 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF4B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:177 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    case 0xC1EF4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000074, 2); else cpu.execute_instruction<0xA9>(0x00C074, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:177 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    // Overlapping static entry reached from 0xC1EF4D.
    case 0xC1EF4F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x001285, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu.asm:177 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    case 0xC1EF50: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu.asm:177 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    // Overlapping static entry reached from 0xC1EF4F.
    case 0xC1EF51: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:177 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    case 0xC1EF52: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:177 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    // Overlapping static entry reached from 0xC1EF51.
    case 0xC1EF53: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:177 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    // Overlapping static entry reached from 0xC1EF52.
    case 0xC1EF54: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu.asm:177 LOADPTR FILE_SELECT_TEXT_TEXTSPEED, @LOCAL01
    case 0xC1EF55: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select_menu.asm:178 LDA #FILE_SELECT_TEXT_TEXT_SPEED_LENGTH
    case 0xC1EF57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000B, 2); else cpu.execute_instruction<0xA9>(0x00000B, 3); return true;
    // src/intro/file_select_menu.asm:178 LDA #FILE_SELECT_TEXT_TEXT_SPEED_LENGTH
    // Overlapping static entry reached from 0xC1EF57.
    case 0xC1EF59: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu.asm:179 JSL MEMCPY24
    case 0xC1EF5A: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/intro/file_select_menu.asm:180 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EF5E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select_menu.asm:181 LDA #CHAR::SPACE
    case 0xC1EF60: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x008D50, 3); return true;
    // src/intro/file_select_menu.asm:182 STA TEMPORARY_TEXT_BUFFER + 11
    case 0xC1EF62: cpu.execute_instruction<0x8D>(0x009CAA, 3); return true;
    // src/intro/file_select_menu.asm:182 STA TEMPORARY_TEXT_BUFFER + 11
    // Overlapping static entry reached from 0xC1EF60.
    case 0xC1EF63: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:182 STA TEMPORARY_TEXT_BUFFER + 11
    // Overlapping static entry reached from 0xC1EF63.
    case 0xC1EF64: cpu.execute_instruction<0x9C>(0x0020C2, 3); return true;
    // src/intro/file_select_menu.asm:183 REP #PROC_FLAGS::ACCUM8
    case 0xC1EF65: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu.asm:184 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 12, @VIRTUAL06
    case 0xC1EF67: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AB, 2); else cpu.execute_instruction<0xA9>(0x009CAB, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu.asm:184 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 12, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EF67.
    case 0xC1EF69: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu.asm:184 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 12, @VIRTUAL06
    case 0xC1EF6A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu.asm:184 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 12, @VIRTUAL06
    case 0xC1EF6C: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu.asm:184 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 12, @VIRTUAL06
    case 0xC1EF6D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu.asm:184 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 12, @VIRTUAL06
    case 0xC1EF6F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu.asm:184 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 12, @VIRTUAL06
    case 0xC1EF70: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu.asm:184 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER + 12, @VIRTUAL06
    case 0xC1EF72: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/file_select_menu.asm:185 REP #PROC_FLAGS::ACCUM8
    case 0xC1EF74: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF76: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF78: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF7A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EF7C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:187 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1EF7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00C07F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:187 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EF7E.
    case 0xC1EF80: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu.asm:187 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1EF81: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu.asm:187 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EF80.
    case 0xC1EF82: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:187 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1EF83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:187 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EF82.
    case 0xC1EF84: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:187 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EF83.
    case 0xC1EF85: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu.asm:187 LOADPTR FILE_SELECT_TEXT_TEXTSPEED_STRINGS, @VIRTUAL06
    case 0xC1EF86: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/intro/file_select_menu.asm:188 LDA GAME_STATE + game_state::text_speed
    case 0xC1EF88: cpu.execute_instruction<0xAD>(0x0098B6, 3); return true;
    // src/intro/file_select_menu.asm:189 AND #$00FF
    case 0xC1EF8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select_menu.asm:189 AND #$00FF
    // Overlapping static entry reached from 0xC1EF8B.
    case 0xC1EF8D: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/intro/file_select_menu.asm:190 DEC
    case 0xC1EF8E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/intro/file_select_menu.asm:191 OPTIMIZED_MULT @VIRTUAL04, TEXT_SPEED_STRING_LENGTH
    case 0xC1EF8F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/intro/file_select_menu.asm:191 OPTIMIZED_MULT @VIRTUAL04, TEXT_SPEED_STRING_LENGTH
    case 0xC1EF91: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/intro/file_select_menu.asm:191 OPTIMIZED_MULT @VIRTUAL04, TEXT_SPEED_STRING_LENGTH
    case 0xC1EF92: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/intro/file_select_menu.asm:191 OPTIMIZED_MULT @VIRTUAL04, TEXT_SPEED_STRING_LENGTH
    case 0xC1EF94: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/intro/file_select_menu.asm:191 OPTIMIZED_MULT @VIRTUAL04, TEXT_SPEED_STRING_LENGTH
    case 0xC1EF95: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/intro/file_select_menu.asm:192 CLC
    case 0xC1EF97: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:193 ADC @VIRTUAL06
    case 0xC1EF98: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/intro/file_select_menu.asm:194 STA @VIRTUAL06
    case 0xC1EF9A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/intro/file_select_menu.asm:195 STA @LOCAL01
    case 0xC1EF9C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/intro/file_select_menu.asm:196 LDA @VIRTUAL06+2
    case 0xC1EF9E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/intro/file_select_menu.asm:197 STA @LOCAL01+2
    case 0xC1EFA0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select_menu.asm:198 LDA #TEXT_SPEED_STRING_LENGTH
    case 0xC1EFA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/intro/file_select_menu.asm:198 LDA #TEXT_SPEED_STRING_LENGTH
    // Overlapping static entry reached from 0xC1EFA2.
    case 0xC1EFA4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu.asm:199 JSL MEMCPY24
    case 0xC1EFA5: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/intro/file_select_menu.asm:200 LDY @LOCALEB2
    case 0xC1EFA9: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/intro/file_select_menu.asm:201 TYX
    case 0xC1EFAB: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:202 LDA #16
    case 0xC1EFAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/intro/file_select_menu.asm:202 LDA #16
    // Overlapping static entry reached from 0xC1EFAC.
    case 0xC1EFAE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu.asm:203 JSL UNKNOWN_C438A5
    case 0xC1EFAF: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu.asm:204 MOVE_INT @LOCALEB1, @VIRTUAL06
    case 0xC1EFB3: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu.asm:204 MOVE_INT @LOCALEB1, @VIRTUAL06
    case 0xC1EFB5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu.asm:204 MOVE_INT @LOCALEB1, @VIRTUAL06
    case 0xC1EFB7: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu.asm:204 MOVE_INT @LOCALEB1, @VIRTUAL06
    case 0xC1EFB9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu.asm:205 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EFBB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu.asm:205 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EFBD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu.asm:205 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EFBF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu.asm:205 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EFC1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu.asm:206 LDA #32
    case 0xC1EFC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/intro/file_select_menu.asm:206 LDA #32
    // Overlapping static entry reached from 0xC1EFC3.
    case 0xC1EFC5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu.asm:207 JSR PRINT_STRING
    case 0xC1EFC6: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/intro/file_select_menu.asm:209 LDY @LOCALEB2
    case 0xC1EFC9: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/intro/file_select_menu.asm:210 INY
    case 0xC1EFCB: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:211 STY @LOCALEB2
    case 0xC1EFCC: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/intro/file_select_menu.asm:213 CPY #3
    case 0xC1EFCE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000003, 2); else cpu.execute_instruction<0xC0>(0x000003, 3); return true;
    // src/intro/file_select_menu.asm:213 CPY #3
    // Overlapping static entry reached from 0xC1EFCE.
    case 0xC1EFD0: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/intro/file_select_menu.asm:214 BCCL @UNKNOWN9
    case 0xC1EFD1: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/intro/file_select_menu.asm:214 BCCL @UNKNOWN9
    case 0xC1EFD3: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/intro/file_select_menu.asm:214 BCCL @UNKNOWN9
    case 0xC1EFD5: cpu.execute_instruction<0x4C>(0x00EE74, 3); return true;
    // src/intro/file_select_menu.asm:215 LDA @VIRTUAL02
    case 0xC1EFD8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/file_select_menu.asm:216 BEQ @UNKNOWN18
    case 0xC1EFDA: cpu.execute_instruction<0xF0>(0x000062, 2); return true;
    // src/intro/file_select_menu.asm:217 LDA CURRENT_FOCUS_WINDOW
    case 0xC1EFDC: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/intro/file_select_menu.asm:218 ASL
    case 0xC1EFDF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:219 TAX
    case 0xC1EFE0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:220 LDA OPEN_WINDOW_TABLE,X
    case 0xC1EFE1: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/intro/file_select_menu.asm:221 LDY #.SIZEOF(window_stats)
    case 0xC1EFE4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/intro/file_select_menu.asm:221 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1EFE4.
    case 0xC1EFE6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu.asm:222 JSL MULT168
    case 0xC1EFE7: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/intro/file_select_menu.asm:223 TAX
    case 0xC1EFEB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:224 LDA WINDOW_STATS + window_stats::current_option,X
    case 0xC1EFEC: cpu.execute_instruction<0xBD>(0x00867B, 3); return true;
    // src/intro/file_select_menu.asm:225 LDY #.SIZEOF(menu_option)
    case 0xC1EFEF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // src/intro/file_select_menu.asm:225 LDY #.SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC1EFEF.
    case 0xC1EFF1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu.asm:226 JSL MULT168
    case 0xC1EFF2: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/intro/file_select_menu.asm:227 CLC
    case 0xC1EFF6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:228 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1EFF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/intro/file_select_menu.asm:228 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1EFF7.
    case 0xC1EFF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x0084A8, 3); return true;
    // src/intro/file_select_menu.asm:229 TAY
    case 0xC1EFFA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:230 STY @LOCAL02
    case 0xC1EFFB: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/intro/file_select_menu.asm:230 STY @LOCAL02
    // Overlapping static entry reached from 0xC1EFF9.
    case 0xC1EFFC: cpu.execute_instruction<0x1C>(0x00A1AD, 3); return true;
    // src/intro/file_select_menu.asm:231 LDA CURRENT_SAVE_SLOT
    case 0xC1EFFD: cpu.execute_instruction<0xAD>(0x00B4A1, 3); return true;
    // src/intro/file_select_menu.asm:231 LDA CURRENT_SAVE_SLOT
    // Overlapping static entry reached from 0xC1EFFC.
    case 0xC1EFFF: cpu.execute_instruction<0xB4>(0x000029, 2); return true;
    // src/intro/file_select_menu.asm:232 AND #$00FF
    case 0xC1F000: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select_menu.asm:232 AND #$00FF
    // Overlapping static entry reached from 0xC1EFFF.
    case 0xC1F001: cpu.execute_instruction<0xFF>(0xCAAA00, 4); return true;
    // src/intro/file_select_menu.asm:232 AND #$00FF
    // Overlapping static entry reached from 0xC1F000.
    case 0xC1F002: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/intro/file_select_menu.asm:233 TAX
    case 0xC1F003: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:234 DEX
    case 0xC1F004: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:235 BRA @UNKNOWN17
    case 0xC1F005: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/intro/file_select_menu.asm:237 LDA __BSS_START__ + menu_option::next,Y
    case 0xC1F007: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // src/intro/file_select_menu.asm:238 LDY #.SIZEOF(menu_option)
    case 0xC1F00A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // src/intro/file_select_menu.asm:238 LDY #.SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC1F00A.
    case 0xC1F00C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu.asm:239 JSL MULT168
    case 0xC1F00D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/intro/file_select_menu.asm:240 CLC
    case 0xC1F011: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:241 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC1F012: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/intro/file_select_menu.asm:241 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1F012.
    case 0xC1F014: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x0084A8, 3); return true;
    // src/intro/file_select_menu.asm:242 TAY
    case 0xC1F015: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:243 STY @LOCAL02
    case 0xC1F016: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/intro/file_select_menu.asm:243 STY @LOCAL02
    // Overlapping static entry reached from 0xC1F014.
    case 0xC1F017: cpu.execute_instruction<0x1C>(0x00D0CA, 3); return true;
    // src/intro/file_select_menu.asm:244 DEX
    case 0xC1F018: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:246 BNE @UNKNOWN16
    case 0xC1F019: cpu.execute_instruction<0xD0>(0x0000EC, 2); return true;
    // src/intro/file_select_menu.asm:246 BNE @UNKNOWN16
    // Overlapping static entry reached from 0xC1F017.
    case 0xC1F01A: cpu.execute_instruction<0xEC>(0x0006A9, 3); return true;
    // src/intro/file_select_menu.asm:247 LDA #6
    case 0xC1F01B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/intro/file_select_menu.asm:247 LDA #6
    // Overlapping static entry reached from 0xC1F01B.
    case 0xC1F01D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu.asm:248 JSR UNKNOWN_C10FEA
    case 0xC1F01E: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // src/intro/file_select_menu.asm:249 LDY @LOCAL02
    case 0xC1F021: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/intro/file_select_menu.asm:250 LDA a:menu_option::text_y,Y
    case 0xC1F023: cpu.execute_instruction<0xB9>(0x00000A, 3); return true;
    // src/intro/file_select_menu.asm:251 TAX
    case 0xC1F026: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:252 LDA a:menu_option::text_x,Y
    case 0xC1F027: cpu.execute_instruction<0xB9>(0x000008, 3); return true;
    // src/intro/file_select_menu.asm:253 INC
    case 0xC1F02A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:254 JSL UNKNOWN_C438A5
    case 0xC1F02B: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/intro/file_select_menu.asm:255 STZ ENABLE_WORD_WRAP
    case 0xC1F02F: cpu.execute_instruction<0x9C>(0x005E6E, 3); return true;
    // src/intro/file_select_menu.asm:256 JSL UNKNOWN_C43B15
    case 0xC1F032: cpu.execute_instruction<0x22>(0xC43B15, 4); return true;
    // src/intro/file_select_menu.asm:257 LDA #0
    case 0xC1F036: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select_menu.asm:257 LDA #0
    // Overlapping static entry reached from 0xC1F036.
    case 0xC1F038: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu.asm:258 JSR UNKNOWN_C10FEA
    case 0xC1F039: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // src/intro/file_select_menu.asm:259 BRA @UNKNOWN20
    case 0xC1F03C: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/intro/file_select_menu.asm:261 JSR CORRUPTION_CHECK
    case 0xC1F03E: cpu.execute_instruction<0x20>(0x00ECDC, 3); return true;
    // src/intro/file_select_menu.asm:263 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC1F041: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/intro/file_select_menu.asm:264 AND #$00FF
    case 0xC1F044: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select_menu.asm:264 AND #$00FF
    // Overlapping static entry reached from 0xC1F044.
    case 0xC1F046: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu.asm:265 BNE @UNKNOWN19
    case 0xC1F047: cpu.execute_instruction<0xD0>(0x0000F8, 2); return true;
    // src/intro/file_select_menu.asm:266 LDA #MUSIC::SETUP_SCREEN
    case 0xC1F049: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/intro/file_select_menu.asm:266 LDA #MUSIC::SETUP_SCREEN
    // Overlapping static entry reached from 0xC1F049.
    case 0xC1F04B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu.asm:267 JSL CHANGE_MUSIC
    case 0xC1F04C: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:268 LOADPTR UNKNOWN_C1ECD1, @LOCAL00
    case 0xC1F050: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D1, 2); else cpu.execute_instruction<0xA9>(0x00ECD1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:268 LOADPTR UNKNOWN_C1ECD1, @LOCAL00
    // Overlapping static entry reached from 0xC1F050.
    case 0xC1F052: cpu.execute_instruction<0xEC>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu.asm:268 LOADPTR UNKNOWN_C1ECD1, @LOCAL00
    case 0xC1F053: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:268 LOADPTR UNKNOWN_C1ECD1, @LOCAL00
    case 0xC1F055: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0000C1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu.asm:268 LOADPTR UNKNOWN_C1ECD1, @LOCAL00
    // Overlapping static entry reached from 0xC1F055.
    case 0xC1F057: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu.asm:268 LOADPTR UNKNOWN_C1ECD1, @LOCAL00
    case 0xC1F058: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu.asm:269 JSR UNKNOWN_C11F5A
    case 0xC1F05A: cpu.execute_instruction<0x20>(0x001F5A, 3); return true;
    // src/intro/file_select_menu.asm:270 LDA #0
    case 0xC1F05D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select_menu.asm:270 LDA #0
    // Overlapping static entry reached from 0xC1F05D.
    case 0xC1F05F: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu.asm:271 JSR SELECTION_MENU
    case 0xC1F060: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // src/intro/file_select_menu.asm:272 SEP #PROC_FLAGS::ACCUM8
    case 0xC1F063: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select_menu.asm:273 STA CURRENT_SAVE_SLOT
    case 0xC1F065: cpu.execute_instruction<0x8D>(0x00B4A1, 3); return true;
    // src/intro/file_select_menu.asm:274 JSR UNKNOWN_C11F8A
    case 0xC1F068: cpu.execute_instruction<0x20>(0x001F8A, 3); return true;
    // src/intro/file_select_menu.asm:277 LDA CURRENT_SAVE_SLOT
    case 0xC1F06B: cpu.execute_instruction<0xAD>(0x00B4A1, 3); return true;
    // src/intro/file_select_menu.asm:278 AND #$00FF
    case 0xC1F06E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select_menu.asm:278 AND #$00FF
    // Overlapping static entry reached from 0xC1F06E.
    case 0xC1F070: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/intro/file_select_menu.asm:279 DEC
    case 0xC1F071: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/intro/file_select_menu.asm:280 JSL LOAD_GAME_SLOT
    case 0xC1F072: cpu.execute_instruction<0x22>(0xEF0A68, 4); return true;
    // src/intro/file_select_menu.asm:281 LDA CURRENT_SAVE_SLOT
    case 0xC1F076: cpu.execute_instruction<0xAD>(0x00B4A1, 3); return true;
    // src/intro/file_select_menu.asm:282 AND #$00FF
    case 0xC1F079: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select_menu.asm:282 AND #$00FF
    // Overlapping static entry reached from 0xC1F079.
    case 0xC1F07B: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/file_select_menu.asm:283 END_C_FUNCTION
    case 0xC1F07C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/file_select_menu.asm:283 END_C_FUNCTION
    case 0xC1F07D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/file_select_menu_loop.asm (source_named).
bool execute_introduction_file_select_menu_loop_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/file_select_menu_loop.asm:3 BEGIN_C_FUNCTION
    case 0xC1F805: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/file_select_menu_loop.asm:16 END_STACK_VARS
    case 0xC1F807: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/file_select_menu_loop.asm:16 END_STACK_VARS
    case 0xC1F808: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select_menu_loop.asm:16 END_STACK_VARS
    case 0xC1F809: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DA, 2); else cpu.execute_instruction<0x69>(0x00FFDA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/file_select_menu_loop.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC1F809.
    case 0xC1F80B: cpu.execute_instruction<0xFF>(0xD4225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/file_select_menu_loop.asm:16 END_STACK_VARS
    case 0xC1F80C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:29 JSR SET_INSTANT_PRINTING
    case 0xC1F80D: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/intro/file_select_menu_loop.asm:29 JSR SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC1F80B.
    case 0xC1F80F: cpu.execute_instruction<0xE4>(0x0000C3, 2); return true;
    // src/intro/file_select_menu_loop.asm:30 LDA #0
    case 0xC1F811: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:30 LDA #0
    // Overlapping static entry reached from 0xC1F811.
    case 0xC1F813: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:31 JSR FILE_SELECT_MENU
    case 0xC1F814: cpu.execute_instruction<0x20>(0x00ED5B, 3); return true;
    // src/intro/file_select_menu_loop.asm:32 TAX
    case 0xC1F817: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:33 DEX
    case 0xC1F818: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:34 LDA SAVE_FILES_PRESENT,X
    case 0xC1F819: cpu.execute_instruction<0xBD>(0x00B49E, 3); return true;
    // src/intro/file_select_menu_loop.asm:35 AND #$00FF
    case 0xC1F81C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select_menu_loop.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC1F81C.
    case 0xC1F81E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/file_select_menu_loop.asm:36 BEQL @EMPTY_FILE_SELECTED
    case 0xC1F81F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/file_select_menu_loop.asm:36 BEQL @EMPTY_FILE_SELECTED
    case 0xC1F821: cpu.execute_instruction<0x4C>(0x00F8B9, 3); return true;
    // src/intro/file_select_menu_loop.asm:38 JSR UNKNOWN_C1F07E
    case 0xC1F824: cpu.execute_instruction<0x20>(0x00F07E, 3); return true;
    // src/intro/file_select_menu_loop.asm:39 CMP #0
    case 0xC1F827: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:39 CMP #0
    // Overlapping static entry reached from 0xC1F827.
    case 0xC1F829: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu_loop.asm:40 BEQ @MENU_B_PRESSED
    case 0xC1F82A: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/intro/file_select_menu_loop.asm:41 CMP #1
    case 0xC1F82C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop.asm:41 CMP #1
    // Overlapping static entry reached from 0xC1F82C.
    case 0xC1F82E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu_loop.asm:42 BEQ @MENU_STARTGAME_SELECTED
    case 0xC1F82F: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/intro/file_select_menu_loop.asm:43 CMP #2
    case 0xC1F831: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/intro/file_select_menu_loop.asm:43 CMP #2
    // Overlapping static entry reached from 0xC1F831.
    case 0xC1F833: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu_loop.asm:44 BEQ @MENU_COPY_SELECTED
    case 0xC1F834: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // src/intro/file_select_menu_loop.asm:45 CMP #3
    case 0xC1F836: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/intro/file_select_menu_loop.asm:45 CMP #3
    // Overlapping static entry reached from 0xC1F836.
    case 0xC1F838: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu_loop.asm:46 BEQ @MENU_DELETE_SELECTED
    case 0xC1F839: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/intro/file_select_menu_loop.asm:47 CMP #4
    case 0xC1F83B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/intro/file_select_menu_loop.asm:47 CMP #4
    // Overlapping static entry reached from 0xC1F83B.
    case 0xC1F83D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu_loop.asm:48 BEQ @MENU_SETUP_SELECTED
    case 0xC1F83E: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/intro/file_select_menu_loop.asm:49 BRA @MENU_OTHER_SELECTED
    case 0xC1F840: cpu.execute_instruction<0x80>(0x000071, 2); return true;
    // src/intro/file_select_menu_loop.asm:51 JSR CLOSE_FOCUS_WINDOW
    case 0xC1F842: cpu.execute_instruction<0x20>(0x000084, 3); return true;
    // src/intro/file_select_menu_loop.asm:52 BRA @UNKNOWN0
    case 0xC1F845: cpu.execute_instruction<0x80>(0x0000C6, 2); return true;
    // src/intro/file_select_menu_loop.asm:54 JSL UNKNOWN_C064D4
    case 0xC1F847: cpu.execute_instruction<0x22>(0xC064D4, 4); return true;
    // src/intro/file_select_menu_loop.asm:55 JSL RELOAD_HOTSPOTS
    case 0xC1F84B: cpu.execute_instruction<0x22>(0xC07213, 4); return true;
    // src/intro/file_select_menu_loop.asm:56 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC1F84F: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/intro/file_select_menu_loop.asm:57 STA RESPAWN_X
    case 0xC1F852: cpu.execute_instruction<0x8D>(0x009D1F, 3); return true;
    // src/intro/file_select_menu_loop.asm:58 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC1F855: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/intro/file_select_menu_loop.asm:59 STA RESPAWN_Y
    case 0xC1F858: cpu.execute_instruction<0x8D>(0x009D21, 3); return true;
    // src/intro/file_select_menu_loop.asm:60 JMP @UNKNOWN59
    case 0xC1F85B: cpu.execute_instruction<0x4C>(0x00FEC2, 3); return true;
    // src/intro/file_select_menu_loop.asm:62 JSR UNKNOWN_C1F14F
    case 0xC1F85E: cpu.execute_instruction<0x20>(0x00F14F, 3); return true;
    // src/intro/file_select_menu_loop.asm:63 CMP #0
    case 0xC1F861: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:63 CMP #0
    // Overlapping static entry reached from 0xC1F861.
    case 0xC1F863: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu_loop.asm:64 BEQ @VALID_FILE_SELECTED
    case 0xC1F864: cpu.execute_instruction<0xF0>(0x0000BE, 2); return true;
    // src/intro/file_select_menu_loop.asm:65 BRA @MENU_OTHER_SELECTED
    case 0xC1F866: cpu.execute_instruction<0x80>(0x00004B, 2); return true;
    // src/intro/file_select_menu_loop.asm:67 JSR UNKNOWN_C1F2A8
    case 0xC1F868: cpu.execute_instruction<0x20>(0x00F2A8, 3); return true;
    // src/intro/file_select_menu_loop.asm:68 CMP #0
    case 0xC1F86B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:68 CMP #0
    // Overlapping static entry reached from 0xC1F86B.
    case 0xC1F86D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu_loop.asm:69 BEQ @VALID_FILE_SELECTED
    case 0xC1F86E: cpu.execute_instruction<0xF0>(0x0000B4, 2); return true;
    // src/intro/file_select_menu_loop.asm:70 BRA @MENU_OTHER_SELECTED
    case 0xC1F870: cpu.execute_instruction<0x80>(0x000041, 2); return true;
    // src/intro/file_select_menu_loop.asm:72 JSL OPEN_TEXT_SPEED_MENU
    case 0xC1F872: cpu.execute_instruction<0x22>(0xC1F3C2, 4); return true;
    // src/intro/file_select_menu_loop.asm:74 LDA #0
    case 0xC1F876: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:74 LDA #0
    // Overlapping static entry reached from 0xC1F876.
    case 0xC1F878: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop.asm:75 JSL UNKNOWN_C1F497
    case 0xC1F879: cpu.execute_instruction<0x22>(0xC1F497, 4); return true;
    // src/intro/file_select_menu_loop.asm:76 CMP #0
    case 0xC1F87D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:76 CMP #0
    // Overlapping static entry reached from 0xC1F87D.
    case 0xC1F87F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu_loop.asm:77 BNE @MENU_SETUP_SELECTED2
    case 0xC1F880: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/intro/file_select_menu_loop.asm:78 LDA #WINDOW::FILE_SELECT_TEXT_SPEED
    case 0xC1F882: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/intro/file_select_menu_loop.asm:78 LDA #WINDOW::FILE_SELECT_TEXT_SPEED
    // Overlapping static entry reached from 0xC1F882.
    case 0xC1F884: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop.asm:79 JSR CLOSE_WINDOW
    case 0xC1F885: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/intro/file_select_menu_loop.asm:80 BRA @VALID_FILE_SELECTED
    case 0xC1F889: cpu.execute_instruction<0x80>(0x000099, 2); return true;
    // src/intro/file_select_menu_loop.asm:82 JSR OPEN_SOUND_MENU
    case 0xC1F88B: cpu.execute_instruction<0x20>(0x00F568, 3); return true;
    // src/intro/file_select_menu_loop.asm:84 LDA #0
    case 0xC1F88E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:84 LDA #0
    // Overlapping static entry reached from 0xC1F88E.
    case 0xC1F890: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:85 JSR UNKNOWN_C1F616
    case 0xC1F891: cpu.execute_instruction<0x20>(0x00F616, 3); return true;
    // src/intro/file_select_menu_loop.asm:86 CMP #0
    case 0xC1F894: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:86 CMP #0
    // Overlapping static entry reached from 0xC1F894.
    case 0xC1F896: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu_loop.asm:87 BNE @MENU_SETUP_SELECTED3
    case 0xC1F897: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/intro/file_select_menu_loop.asm:88 LDA #WINDOW::FILE_SELECT_MUSIC_MODE
    case 0xC1F899: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x000019, 3); return true;
    // src/intro/file_select_menu_loop.asm:88 LDA #WINDOW::FILE_SELECT_MUSIC_MODE
    // Overlapping static entry reached from 0xC1F899.
    case 0xC1F89B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop.asm:89 JSR CLOSE_WINDOW
    case 0xC1F89C: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/intro/file_select_menu_loop.asm:90 BRA @UNKNOWN7
    case 0xC1F8A0: cpu.execute_instruction<0x80>(0x0000D4, 2); return true;
    // src/intro/file_select_menu_loop.asm:92 JSR OPEN_FLAVOUR_MENU
    case 0xC1F8A2: cpu.execute_instruction<0x20>(0x00F6E3, 3); return true;
    // src/intro/file_select_menu_loop.asm:93 CMP #0
    case 0xC1F8A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:93 CMP #0
    // Overlapping static entry reached from 0xC1F8A5.
    case 0xC1F8A7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu_loop.asm:94 BNE @MENU_OTHER_SELECTED
    case 0xC1F8A8: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/intro/file_select_menu_loop.asm:95 LDA #WINDOW::FILE_SELECT_FLAVOUR_CHOICE
    case 0xC1F8AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000032, 2); else cpu.execute_instruction<0xA9>(0x000032, 3); return true;
    // src/intro/file_select_menu_loop.asm:95 LDA #WINDOW::FILE_SELECT_FLAVOUR_CHOICE
    // Overlapping static entry reached from 0xC1F8AA.
    case 0xC1F8AC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop.asm:96 JSR CLOSE_WINDOW
    case 0xC1F8AD: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/intro/file_select_menu_loop.asm:97 BRA @UNKNOWN9
    case 0xC1F8B1: cpu.execute_instruction<0x80>(0x0000DB, 2); return true;
    // src/intro/file_select_menu_loop.asm:99 JSR UNKNOWN_C1008E
    case 0xC1F8B3: cpu.execute_instruction<0x20>(0x00008E, 3); return true;
    // src/intro/file_select_menu_loop.asm:100 JMP @UNKNOWN0
    case 0xC1F8B6: cpu.execute_instruction<0x4C>(0x00F80D, 3); return true;
    // src/intro/file_select_menu_loop.asm:102 JSL OPEN_TEXT_SPEED_MENU
    case 0xC1F8B9: cpu.execute_instruction<0x22>(0xC1F3C2, 4); return true;
    // src/intro/file_select_menu_loop.asm:104 LDA #0
    case 0xC1F8BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:104 LDA #0
    // Overlapping static entry reached from 0xC1F8BD.
    case 0xC1F8BF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop.asm:105 JSL UNKNOWN_C1F497
    case 0xC1F8C0: cpu.execute_instruction<0x22>(0xC1F497, 4); return true;
    // src/intro/file_select_menu_loop.asm:106 CMP #0
    case 0xC1F8C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:106 CMP #0
    // Overlapping static entry reached from 0xC1F8C4.
    case 0xC1F8C6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu_loop.asm:107 BNE @UNKNOWN14
    case 0xC1F8C7: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/intro/file_select_menu_loop.asm:108 LDA #WINDOW::FILE_SELECT_TEXT_SPEED
    case 0xC1F8C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/intro/file_select_menu_loop.asm:108 LDA #WINDOW::FILE_SELECT_TEXT_SPEED
    // Overlapping static entry reached from 0xC1F8C9.
    case 0xC1F8CB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop.asm:109 JSR CLOSE_WINDOW
    case 0xC1F8CC: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/intro/file_select_menu_loop.asm:110 JMP @UNKNOWN0
    case 0xC1F8D0: cpu.execute_instruction<0x4C>(0x00F80D, 3); return true;
    // src/intro/file_select_menu_loop.asm:112 JSR OPEN_SOUND_MENU
    case 0xC1F8D3: cpu.execute_instruction<0x20>(0x00F568, 3); return true;
    // src/intro/file_select_menu_loop.asm:114 LDA #0
    case 0xC1F8D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:114 LDA #0
    // Overlapping static entry reached from 0xC1F8D6.
    case 0xC1F8D8: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:115 JSR UNKNOWN_C1F616
    case 0xC1F8D9: cpu.execute_instruction<0x20>(0x00F616, 3); return true;
    // src/intro/file_select_menu_loop.asm:116 CMP #0
    case 0xC1F8DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:116 CMP #0
    // Overlapping static entry reached from 0xC1F8DC.
    case 0xC1F8DE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu_loop.asm:117 BNE @UNKNOWN16
    case 0xC1F8DF: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/intro/file_select_menu_loop.asm:118 LDA #WINDOW::FILE_SELECT_MUSIC_MODE
    case 0xC1F8E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x000019, 3); return true;
    // src/intro/file_select_menu_loop.asm:118 LDA #WINDOW::FILE_SELECT_MUSIC_MODE
    // Overlapping static entry reached from 0xC1F8E1.
    case 0xC1F8E3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop.asm:119 JSR CLOSE_WINDOW
    case 0xC1F8E4: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/intro/file_select_menu_loop.asm:120 BRA @UNKNOWN13
    case 0xC1F8E8: cpu.execute_instruction<0x80>(0x0000D3, 2); return true;
    // src/intro/file_select_menu_loop.asm:122 JSR OPEN_FLAVOUR_MENU
    case 0xC1F8EA: cpu.execute_instruction<0x20>(0x00F6E3, 3); return true;
    // src/intro/file_select_menu_loop.asm:123 CMP #0
    case 0xC1F8ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:123 CMP #0
    // Overlapping static entry reached from 0xC1F8ED.
    case 0xC1F8EF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu_loop.asm:124 BNE @CHANGE_TO_NAMING_SCREEN_MUSIC
    case 0xC1F8F0: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/intro/file_select_menu_loop.asm:125 LDA #WINDOW::FILE_SELECT_FLAVOUR_CHOICE
    case 0xC1F8F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000032, 2); else cpu.execute_instruction<0xA9>(0x000032, 3); return true;
    // src/intro/file_select_menu_loop.asm:125 LDA #WINDOW::FILE_SELECT_FLAVOUR_CHOICE
    // Overlapping static entry reached from 0xC1F8F2.
    case 0xC1F8F4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop.asm:126 JSR CLOSE_WINDOW
    case 0xC1F8F5: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/intro/file_select_menu_loop.asm:127 BRA @UNKNOWN15
    case 0xC1F8F9: cpu.execute_instruction<0x80>(0x0000DB, 2); return true;
    // src/intro/file_select_menu_loop.asm:129 LDA #MUSIC::NAMING_SCREEN
    case 0xC1F8FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/intro/file_select_menu_loop.asm:129 LDA #MUSIC::NAMING_SCREEN
    // Overlapping static entry reached from 0xC1F8FB.
    case 0xC1F8FD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop.asm:130 JSL CHANGE_MUSIC
    case 0xC1F8FE: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/intro/file_select_menu_loop.asm:132 JSR UNKNOWN_C1008E
    case 0xC1F902: cpu.execute_instruction<0x20>(0x00008E, 3); return true;
    // src/intro/file_select_menu_loop.asm:133 LDA #0
    case 0xC1F905: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:133 LDA #0
    // Overlapping static entry reached from 0xC1F905.
    case 0xC1F907: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/file_select_menu_loop.asm:134 STA @VIRTUAL04
    case 0xC1F908: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:135 STA @LOCAL08
    case 0xC1F90A: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop.asm:136 JMP @UNKNOWN31
    case 0xC1F90C: cpu.execute_instruction<0x4C>(0x00FAAE, 3); return true;
    // src/intro/file_select_menu_loop.asm:138 LDA @VIRTUAL04
    case 0xC1F90F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:139 CMP #$FFFF
    case 0xC1F911: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/intro/file_select_menu_loop.asm:139 CMP #$FFFF
    // Overlapping static entry reached from 0xC1F911.
    case 0xC1F913: cpu.execute_instruction<0xFF>(0x201FD0, 4); return true;
    // src/intro/file_select_menu_loop.asm:140 BNE @UNKNOWN20
    case 0xC1F914: cpu.execute_instruction<0xD0>(0x00001F, 2); return true;
    // src/intro/file_select_menu_loop.asm:141 JSR UNKNOWN_C1008E
    case 0xC1F916: cpu.execute_instruction<0x20>(0x00008E, 3); return true;
    // src/intro/file_select_menu_loop.asm:141 JSR UNKNOWN_C1008E
    // Overlapping static entry reached from 0xC1F913.
    case 0xC1F917: cpu.execute_instruction<0x8E>(0x00A900, 3); return true;
    // src/intro/file_select_menu_loop.asm:142 LDA #1
    case 0xC1F919: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop.asm:142 LDA #1
    // Overlapping static entry reached from 0xC1F917.
    case 0xC1F91A: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/intro/file_select_menu_loop.asm:142 LDA #1
    // Overlapping static entry reached from 0xC1F919.
    case 0xC1F91B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:143 JSR FILE_SELECT_MENU
    case 0xC1F91C: cpu.execute_instruction<0x20>(0x00ED5B, 3); return true;
    // src/intro/file_select_menu_loop.asm:144 LDA #1
    case 0xC1F91F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop.asm:144 LDA #1
    // Overlapping static entry reached from 0xC1F91F.
    case 0xC1F921: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop.asm:145 JSL UNKNOWN_C1F497
    case 0xC1F922: cpu.execute_instruction<0x22>(0xC1F497, 4); return true;
    // src/intro/file_select_menu_loop.asm:146 LDA #1
    case 0xC1F926: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop.asm:146 LDA #1
    // Overlapping static entry reached from 0xC1F926.
    case 0xC1F928: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:147 JSR UNKNOWN_C1F616
    case 0xC1F929: cpu.execute_instruction<0x20>(0x00F616, 3); return true;
    // src/intro/file_select_menu_loop.asm:148 LDA #MUSIC::SETUP_SCREEN
    case 0xC1F92C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/intro/file_select_menu_loop.asm:148 LDA #MUSIC::SETUP_SCREEN
    // Overlapping static entry reached from 0xC1F92C.
    case 0xC1F92E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop.asm:149 JSL CHANGE_MUSIC
    case 0xC1F92F: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/intro/file_select_menu_loop.asm:150 BRA @UNKNOWN16
    case 0xC1F933: cpu.execute_instruction<0x80>(0x0000B5, 2); return true;
    // src/intro/file_select_menu_loop.asm:152 LDA @VIRTUAL04
    case 0xC1F935: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:153 JSL DISPLAY_ANIMATED_NAMING_SPRITE
    case 0xC1F937: cpu.execute_instruction<0x22>(0xC4D7D9, 4); return true;
    // src/intro/file_select_menu_loop.asm:154 LDA #FILE_MENU_NEW_GAME_NAME::DOG
    case 0xC1F93B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/intro/file_select_menu_loop.asm:154 LDA #FILE_MENU_NEW_GAME_NAME::DOG
    // Overlapping static entry reached from 0xC1F93B.
    case 0xC1F93D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/intro/file_select_menu_loop.asm:155 CLC
    case 0xC1F93E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:156 SBC @VIRTUAL04
    case 0xC1F93F: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/intro/file_select_menu_loop.asm:157 BRANCHLTEQS @UNKNOWN24
    case 0xC1F941: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/intro/file_select_menu_loop.asm:157 BRANCHLTEQS @UNKNOWN24
    case 0xC1F943: cpu.execute_instruction<0x10>(0x000060, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/intro/file_select_menu_loop.asm:157 BRANCHLTEQS @UNKNOWN24
    case 0xC1F945: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/intro/file_select_menu_loop.asm:157 BRANCHLTEQS @UNKNOWN24
    case 0xC1F947: cpu.execute_instruction<0x30>(0x00005C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:158 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F949: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000094, 2); else cpu.execute_instruction<0xA9>(0x00C194, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:158 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F949.
    case 0xC1F94B: cpu.execute_instruction<0xC1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:158 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F94C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:158 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F94B.
    case 0xC1F94D: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:158 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F94E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:158 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F94D.
    case 0xC1F94F: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:158 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F94E.
    case 0xC1F950: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:158 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F951: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop.asm:159 LDA @VIRTUAL04
    case 0xC1F953: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:662 STA scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:160 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F955: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:663 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:160 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F957: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:664 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:160 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F958: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:665 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:160 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F959: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:666 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:160 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F95B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:667 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:160 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F95C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:668 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:160 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F95D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:161 CLC
    case 0xC1F95E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:162 ADC @VIRTUAL06
    case 0xC1F95F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop.asm:163 STA @VIRTUAL06
    case 0xC1F961: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop.asm:164 STA @LOCAL00
    case 0xC1F963: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/intro/file_select_menu_loop.asm:165 LDA @VIRTUAL06+2
    case 0xC1F965: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop.asm:166 STA @LOCAL00+2
    case 0xC1F967: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop.asm:167 LDA #NAME_THEM_STRING_LENGTH
    case 0xC1F969: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x000028, 3); return true;
    // src/intro/file_select_menu_loop.asm:167 LDA #NAME_THEM_STRING_LENGTH
    // Overlapping static entry reached from 0xC1F969.
    case 0xC1F96B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/file_select_menu_loop.asm:168 STA @LOCAL01
    case 0xC1F96C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/intro/file_select_menu_loop.asm:169 LDA @LOCAL08
    case 0xC1F96E: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop.asm:170 STA @VIRTUAL04
    case 0xC1F970: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:171 LDY @VIRTUAL04
    case 0xC1F972: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:172 STY @LOCAL07
    case 0xC1F974: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop.asm:173 LDA @VIRTUAL04
    case 0xC1F976: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:174 LDY #.SIZEOF(char_struct)
    case 0xC1F978: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/intro/file_select_menu_loop.asm:174 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1F978.
    case 0xC1F97A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop.asm:175 JSL MULT168
    case 0xC1F97B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/intro/file_select_menu_loop.asm:176 CLC
    case 0xC1F97F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:177 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1F980: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/intro/file_select_menu_loop.asm:177 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1F980.
    case 0xC1F982: cpu.execute_instruction<0x99>(0x00A9AA, 3); return true;
    // src/intro/file_select_menu_loop.asm:178 TAX
    case 0xC1F983: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:179 LDA #.SIZEOF(char_struct::name)
    case 0xC1F984: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/intro/file_select_menu_loop.asm:179 LDA #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1F982.
    case 0xC1F985: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/intro/file_select_menu_loop.asm:179 LDA #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1F984.
    case 0xC1F986: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/intro/file_select_menu_loop.asm:180 LDY @LOCAL07
    case 0xC1F987: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop.asm:181 JSR NAME_A_CHARACTER
    case 0xC1F989: cpu.execute_instruction<0x20>(0x00EC04, 3); return true;
    // src/intro/file_select_menu_loop.asm:182 CMP #0
    case 0xC1F98C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:182 CMP #0
    // Overlapping static entry reached from 0xC1F98C.
    case 0xC1F98E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu_loop.asm:183 BEQ @UNKNOWN23
    case 0xC1F98F: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/intro/file_select_menu_loop.asm:184 LDA #$FFFF
    case 0xC1F991: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/intro/file_select_menu_loop.asm:184 LDA #$FFFF
    // Overlapping static entry reached from 0xC1F991.
    case 0xC1F993: cpu.execute_instruction<0xFF>(0x850285, 4); return true;
    // src/intro/file_select_menu_loop.asm:185 STA @VIRTUAL02
    case 0xC1F994: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop.asm:186 STA @LOCAL06
    case 0xC1F996: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:186 STA @LOCAL06
    // Overlapping static entry reached from 0xC1F993.
    case 0xC1F997: cpu.execute_instruction<0x20>(0x009B4C, 3); return true;
    // src/intro/file_select_menu_loop.asm:187 JMP @UNKNOWN30
    case 0xC1F998: cpu.execute_instruction<0x4C>(0x00FA9B, 3); return true;
    // src/intro/file_select_menu_loop.asm:187 JMP @UNKNOWN30
    // Overlapping static entry reached from 0xC1F997.
    case 0xC1F99A: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:189 LDA #1
    case 0xC1F99B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop.asm:189 LDA #1
    // Overlapping static entry reached from 0xC1F99B.
    case 0xC1F99D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/file_select_menu_loop.asm:190 STA @VIRTUAL02
    case 0xC1F99E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop.asm:191 STA @LOCAL06
    case 0xC1F9A0: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:192 JMP @UNKNOWN30
    case 0xC1F9A2: cpu.execute_instruction<0x4C>(0x00FA9B, 3); return true;
    // src/intro/file_select_menu_loop.asm:194 LDA @VIRTUAL04
    case 0xC1F9A5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:195 CMP #FILE_MENU_NEW_GAME_NAME::DOG
    case 0xC1F9A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/intro/file_select_menu_loop.asm:195 CMP #FILE_MENU_NEW_GAME_NAME::DOG
    // Overlapping static entry reached from 0xC1F9A7.
    case 0xC1F9A9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu_loop.asm:196 BNE @UNKNOWN26
    case 0xC1F9AA: cpu.execute_instruction<0xD0>(0x00004D, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:197 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F9AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000094, 2); else cpu.execute_instruction<0xA9>(0x00C194, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:197 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F9AC.
    case 0xC1F9AE: cpu.execute_instruction<0xC1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:197 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F9AF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:197 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F9AE.
    case 0xC1F9B0: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:197 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F9B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:197 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F9B0.
    case 0xC1F9B2: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:197 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1F9B1.
    case 0xC1F9B3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:197 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1F9B4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop.asm:198 LDA @VIRTUAL04
    case 0xC1F9B6: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:662 STA scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:199 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F9B8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:663 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:199 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F9BA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:664 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:199 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F9BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:665 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:199 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F9BC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:666 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:199 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F9BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:667 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:199 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F9BF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:668 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:199 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1F9C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:200 CLC
    case 0xC1F9C1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:201 ADC @VIRTUAL06
    case 0xC1F9C2: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop.asm:202 STA @VIRTUAL06
    case 0xC1F9C4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop.asm:203 STA @LOCAL00
    case 0xC1F9C6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/intro/file_select_menu_loop.asm:204 LDA @VIRTUAL06+2
    case 0xC1F9C8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop.asm:205 STA @LOCAL00+2
    case 0xC1F9CA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop.asm:206 LDA #NAME_THEM_STRING_LENGTH
    case 0xC1F9CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x000028, 3); return true;
    // src/intro/file_select_menu_loop.asm:206 LDA #NAME_THEM_STRING_LENGTH
    // Overlapping static entry reached from 0xC1F9CC.
    case 0xC1F9CE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/file_select_menu_loop.asm:207 STA @LOCAL01
    case 0xC1F9CF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/intro/file_select_menu_loop.asm:208 LDA @LOCAL08
    case 0xC1F9D1: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop.asm:209 STA @VIRTUAL04
    case 0xC1F9D3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:210 LDY @VIRTUAL04
    case 0xC1F9D5: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:211 LDX #.LOWORD(GAME_STATE) + game_state::pet_name
    case 0xC1F9D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000019, 2); else cpu.execute_instruction<0xA2>(0x009819, 3); return true;
    // src/intro/file_select_menu_loop.asm:211 LDX #.LOWORD(GAME_STATE) + game_state::pet_name
    // Overlapping static entry reached from 0xC1F9D7.
    case 0xC1F9D9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:212 LDA #.SIZEOF(game_state::pet_name)
    case 0xC1F9DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/intro/file_select_menu_loop.asm:212 LDA #.SIZEOF(game_state::pet_name)
    // Overlapping static entry reached from 0xC1F9DA.
    case 0xC1F9DC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:213 JSR NAME_A_CHARACTER
    case 0xC1F9DD: cpu.execute_instruction<0x20>(0x00EC04, 3); return true;
    // src/intro/file_select_menu_loop.asm:214 CMP #0
    case 0xC1F9E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:214 CMP #0
    // Overlapping static entry reached from 0xC1F9E0.
    case 0xC1F9E2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu_loop.asm:215 BEQ @UNKNOWN25
    case 0xC1F9E3: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/intro/file_select_menu_loop.asm:216 LDA #$FFFF
    case 0xC1F9E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/intro/file_select_menu_loop.asm:216 LDA #$FFFF
    // Overlapping static entry reached from 0xC1F9E5.
    case 0xC1F9E7: cpu.execute_instruction<0xFF>(0x850285, 4); return true;
    // src/intro/file_select_menu_loop.asm:217 STA @VIRTUAL02
    case 0xC1F9E8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop.asm:218 STA @LOCAL06
    case 0xC1F9EA: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:218 STA @LOCAL06
    // Overlapping static entry reached from 0xC1F9E7.
    case 0xC1F9EB: cpu.execute_instruction<0x20>(0x009B4C, 3); return true;
    // src/intro/file_select_menu_loop.asm:219 JMP @UNKNOWN30
    case 0xC1F9EC: cpu.execute_instruction<0x4C>(0x00FA9B, 3); return true;
    // src/intro/file_select_menu_loop.asm:219 JMP @UNKNOWN30
    // Overlapping static entry reached from 0xC1F9EB.
    case 0xC1F9EE: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:221 LDA #1
    case 0xC1F9EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop.asm:221 LDA #1
    // Overlapping static entry reached from 0xC1F9EF.
    case 0xC1F9F1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/file_select_menu_loop.asm:222 STA @VIRTUAL02
    case 0xC1F9F2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop.asm:223 STA @LOCAL06
    case 0xC1F9F4: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:224 JMP @UNKNOWN30
    case 0xC1F9F6: cpu.execute_instruction<0x4C>(0x00FA9B, 3); return true;
    // src/intro/file_select_menu_loop.asm:226 LDA @VIRTUAL04
    case 0xC1F9F9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:227 CMP #FILE_MENU_NEW_GAME_NAME::FAVORITE_FOOD
    case 0xC1F9FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/intro/file_select_menu_loop.asm:227 CMP #FILE_MENU_NEW_GAME_NAME::FAVORITE_FOOD
    // Overlapping static entry reached from 0xC1F9FB.
    case 0xC1F9FD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu_loop.asm:228 BNE @UNKNOWN28
    case 0xC1F9FE: cpu.execute_instruction<0xD0>(0x00004B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:229 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1FA00: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000094, 2); else cpu.execute_instruction<0xA9>(0x00C194, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:229 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FA00.
    case 0xC1FA02: cpu.execute_instruction<0xC1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:229 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1FA03: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:229 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FA02.
    case 0xC1FA04: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:229 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1FA05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:229 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FA04.
    case 0xC1FA06: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:229 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FA05.
    case 0xC1FA07: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:229 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1FA08: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop.asm:230 LDA @VIRTUAL04
    case 0xC1FA0A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:662 STA scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:231 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA0C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:663 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:231 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA0E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:664 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:231 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA0F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:665 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:231 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA10: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:666 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:231 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA12: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:667 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:231 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA13: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:668 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:231 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA14: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:232 CLC
    case 0xC1FA15: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:233 ADC @VIRTUAL06
    case 0xC1FA16: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop.asm:234 STA @VIRTUAL06
    case 0xC1FA18: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop.asm:235 STA @LOCAL00
    case 0xC1FA1A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/intro/file_select_menu_loop.asm:236 LDA @VIRTUAL06+2
    case 0xC1FA1C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop.asm:237 STA @LOCAL00+2
    case 0xC1FA1E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop.asm:238 LDA #NAME_THEM_STRING_LENGTH
    case 0xC1FA20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x000028, 3); return true;
    // src/intro/file_select_menu_loop.asm:238 LDA #NAME_THEM_STRING_LENGTH
    // Overlapping static entry reached from 0xC1FA20.
    case 0xC1FA22: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/file_select_menu_loop.asm:239 STA @LOCAL01
    case 0xC1FA23: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/intro/file_select_menu_loop.asm:240 LDA @LOCAL08
    case 0xC1FA25: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop.asm:241 STA @VIRTUAL04
    case 0xC1FA27: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:242 LDY @VIRTUAL04
    case 0xC1FA29: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:243 LDX #.LOWORD(GAME_STATE) + game_state::favourite_food
    case 0xC1FA2B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001F, 2); else cpu.execute_instruction<0xA2>(0x00981F, 3); return true;
    // src/intro/file_select_menu_loop.asm:243 LDX #.LOWORD(GAME_STATE) + game_state::favourite_food
    // Overlapping static entry reached from 0xC1FA2B.
    case 0xC1FA2D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:244 LDA #.SIZEOF(game_state::favourite_food)
    case 0xC1FA2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/intro/file_select_menu_loop.asm:244 LDA #.SIZEOF(game_state::favourite_food)
    // Overlapping static entry reached from 0xC1FA2E.
    case 0xC1FA30: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:245 JSR NAME_A_CHARACTER
    case 0xC1FA31: cpu.execute_instruction<0x20>(0x00EC04, 3); return true;
    // src/intro/file_select_menu_loop.asm:246 CMP #0
    case 0xC1FA34: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:246 CMP #0
    // Overlapping static entry reached from 0xC1FA34.
    case 0xC1FA36: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu_loop.asm:247 BEQ @UNKNOWN27
    case 0xC1FA37: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/intro/file_select_menu_loop.asm:248 LDA #$FFFF
    case 0xC1FA39: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/intro/file_select_menu_loop.asm:248 LDA #$FFFF
    // Overlapping static entry reached from 0xC1FA39.
    case 0xC1FA3B: cpu.execute_instruction<0xFF>(0x850285, 4); return true;
    // src/intro/file_select_menu_loop.asm:249 STA @VIRTUAL02
    case 0xC1FA3C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop.asm:250 STA @LOCAL06
    case 0xC1FA3E: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:250 STA @LOCAL06
    // Overlapping static entry reached from 0xC1FA3B.
    case 0xC1FA3F: cpu.execute_instruction<0x20>(0x005980, 3); return true;
    // src/intro/file_select_menu_loop.asm:251 BRA @UNKNOWN30
    case 0xC1FA40: cpu.execute_instruction<0x80>(0x000059, 2); return true;
    // src/intro/file_select_menu_loop.asm:253 LDA #1
    case 0xC1FA42: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop.asm:253 LDA #1
    // Overlapping static entry reached from 0xC1FA42.
    case 0xC1FA44: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/file_select_menu_loop.asm:254 STA @VIRTUAL02
    case 0xC1FA45: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop.asm:255 STA @LOCAL06
    case 0xC1FA47: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:256 BRA @UNKNOWN30
    case 0xC1FA49: cpu.execute_instruction<0x80>(0x000050, 2); return true;
    // src/intro/file_select_menu_loop.asm:258 LDA @VIRTUAL04
    case 0xC1FA4B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:259 CMP #FILE_MENU_NEW_GAME_NAME::FAVORITE_THING
    case 0xC1FA4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/intro/file_select_menu_loop.asm:259 CMP #FILE_MENU_NEW_GAME_NAME::FAVORITE_THING
    // Overlapping static entry reached from 0xC1FA4D.
    case 0xC1FA4F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu_loop.asm:260 BNE @UNKNOWN30
    case 0xC1FA50: cpu.execute_instruction<0xD0>(0x000049, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:261 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1FA52: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000094, 2); else cpu.execute_instruction<0xA9>(0x00C194, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:261 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FA52.
    case 0xC1FA54: cpu.execute_instruction<0xC1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:261 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1FA55: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:261 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FA54.
    case 0xC1FA56: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:261 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1FA57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:261 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FA56.
    case 0xC1FA58: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:261 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FA57.
    case 0xC1FA59: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:261 LOADPTR FILE_SELECT_TEXT_PLEASE_NAME_THEM_STRINGS, @VIRTUAL06
    case 0xC1FA5A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop.asm:262 LDA @VIRTUAL04
    case 0xC1FA5C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:662 STA scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:263 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA5E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:663 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:263 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA60: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:664 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:263 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA61: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:665 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:263 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA62: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:666 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:263 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA64: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:667 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:263 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA65: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:668 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:263 OPTIMIZED_MULT @VIRTUAL04, 40
    case 0xC1FA66: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:264 CLC
    case 0xC1FA67: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:265 ADC @VIRTUAL06
    case 0xC1FA68: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop.asm:266 STA @VIRTUAL06
    case 0xC1FA6A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop.asm:267 STA @LOCAL00
    case 0xC1FA6C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/intro/file_select_menu_loop.asm:268 LDA @VIRTUAL06+2
    case 0xC1FA6E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop.asm:269 STA @LOCAL00+2
    case 0xC1FA70: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop.asm:270 LDA #NAME_THEM_STRING_LENGTH
    case 0xC1FA72: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x000028, 3); return true;
    // src/intro/file_select_menu_loop.asm:270 LDA #NAME_THEM_STRING_LENGTH
    // Overlapping static entry reached from 0xC1FA72.
    case 0xC1FA74: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/file_select_menu_loop.asm:271 STA @LOCAL01
    case 0xC1FA75: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/intro/file_select_menu_loop.asm:272 LDA @LOCAL08
    case 0xC1FA77: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop.asm:273 STA @VIRTUAL04
    case 0xC1FA79: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:274 LDY @VIRTUAL04
    case 0xC1FA7B: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:275 LDX #.LOWORD(GAME_STATE) + game_state::favourite_thing + 4 ; part after 'PSI ' prefix
    case 0xC1FA7D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000029, 2); else cpu.execute_instruction<0xA2>(0x009829, 3); return true;
    // src/intro/file_select_menu_loop.asm:275 LDX #.LOWORD(GAME_STATE) + game_state::favourite_thing + 4 ; part after 'PSI ' prefix
    // Overlapping static entry reached from 0xC1FA7D.
    case 0xC1FA7F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:279 LDA #.SIZEOF(game_state::favourite_thing) - 6
    case 0xC1FA80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/intro/file_select_menu_loop.asm:279 LDA #.SIZEOF(game_state::favourite_thing) - 6
    // Overlapping static entry reached from 0xC1FA80.
    case 0xC1FA82: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:281 JSR NAME_A_CHARACTER
    case 0xC1FA83: cpu.execute_instruction<0x20>(0x00EC04, 3); return true;
    // src/intro/file_select_menu_loop.asm:282 CMP #0
    case 0xC1FA86: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:282 CMP #0
    // Overlapping static entry reached from 0xC1FA86.
    case 0xC1FA88: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/file_select_menu_loop.asm:283 BEQ @UNKNOWN29
    case 0xC1FA89: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/intro/file_select_menu_loop.asm:284 LDA #$FFFF
    case 0xC1FA8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/intro/file_select_menu_loop.asm:284 LDA #$FFFF
    // Overlapping static entry reached from 0xC1FA8B.
    case 0xC1FA8D: cpu.execute_instruction<0xFF>(0x850285, 4); return true;
    // src/intro/file_select_menu_loop.asm:285 STA @VIRTUAL02
    case 0xC1FA8E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop.asm:286 STA @LOCAL06
    case 0xC1FA90: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:286 STA @LOCAL06
    // Overlapping static entry reached from 0xC1FA8D.
    case 0xC1FA91: cpu.execute_instruction<0x20>(0x000780, 3); return true;
    // src/intro/file_select_menu_loop.asm:287 BRA @UNKNOWN30
    case 0xC1FA92: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/intro/file_select_menu_loop.asm:289 LDA #1
    case 0xC1FA94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop.asm:289 LDA #1
    // Overlapping static entry reached from 0xC1FA94.
    case 0xC1FA96: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/file_select_menu_loop.asm:290 STA @VIRTUAL02
    case 0xC1FA97: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop.asm:291 STA @LOCAL06
    case 0xC1FA99: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:293 LDA @VIRTUAL04
    case 0xC1FA9B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:294 JSL UNKNOWN_C4D830
    case 0xC1FA9D: cpu.execute_instruction<0x22>(0xC4D830, 4); return true;
    // src/intro/file_select_menu_loop.asm:295 LDA @LOCAL06
    case 0xC1FAA1: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:296 STA @VIRTUAL02
    case 0xC1FAA3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop.asm:297 LDA @VIRTUAL04
    case 0xC1FAA5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:298 CLC
    case 0xC1FAA7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:299 ADC @VIRTUAL02
    case 0xC1FAA8: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop.asm:300 STA @VIRTUAL04
    case 0xC1FAAA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:301 STA @LOCAL08
    case 0xC1FAAC: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop.asm:303 LDA #THINGS_NAMED_COUNT
    case 0xC1FAAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/intro/file_select_menu_loop.asm:303 LDA #THINGS_NAMED_COUNT
    // Overlapping static entry reached from 0xC1FAAE.
    case 0xC1FAB0: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/intro/file_select_menu_loop.asm:304 CLC
    case 0xC1FAB1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:305 SBC @VIRTUAL04
    case 0xC1FAB2: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/intro/file_select_menu_loop.asm:306 JUMPGTS @UNKNOWN19
    case 0xC1FAB4: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/intro/file_select_menu_loop.asm:306 JUMPGTS @UNKNOWN19
    case 0xC1FAB6: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/intro/file_select_menu_loop.asm:306 JUMPGTS @UNKNOWN19
    case 0xC1FAB8: cpu.execute_instruction<0x4C>(0x00F90F, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/intro/file_select_menu_loop.asm:306 JUMPGTS @UNKNOWN19
    case 0xC1FABB: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/intro/file_select_menu_loop.asm:306 JUMPGTS @UNKNOWN19
    case 0xC1FABD: cpu.execute_instruction<0x4C>(0x00F90F, 3); return true;
    // src/intro/file_select_menu_loop.asm:307 JSR UNKNOWN_C1008E
    case 0xC1FAC0: cpu.execute_instruction<0x20>(0x00008E, 3); return true;
    // src/intro/file_select_menu_loop.asm:308 JSR SET_INSTANT_PRINTING
    case 0xC1FAC3: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/intro/file_select_menu_loop.asm:309 LDX #0
    case 0xC1FAC7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:309 LDX #0
    // Overlapping static entry reached from 0xC1FAC7.
    case 0xC1FAC9: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/intro/file_select_menu_loop.asm:310 STX @LOCAL08
    case 0xC1FACA: cpu.execute_instruction<0x86>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop.asm:311 BRA @UNKNOWN35
    case 0xC1FACC: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/intro/file_select_menu_loop.asm:313 TXA
    case 0xC1FACE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:314 CLC
    case 0xC1FACF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:315 ADC #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_NESS
    case 0xC1FAD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001D, 2); else cpu.execute_instruction<0x69>(0x00001D, 3); return true;
    // src/intro/file_select_menu_loop.asm:315 ADC #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_NESS
    // Overlapping static entry reached from 0xC1FAD0.
    case 0xC1FAD2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:316 JSR CREATE_WINDOW
    case 0xC1FAD3: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/intro/file_select_menu_loop.asm:317 LDX @LOCAL08
    case 0xC1FAD6: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop.asm:318 INX
    case 0xC1FAD8: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:319 STX @LOCAL08
    case 0xC1FAD9: cpu.execute_instruction<0x86>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop.asm:320 TXA
    case 0xC1FADB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:321 JSR UNKNOWN_C1931B
    case 0xC1FADC: cpu.execute_instruction<0x20>(0x00931B, 3); return true;
    // src/intro/file_select_menu_loop.asm:322 LDX @LOCAL08
    case 0xC1FADF: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop.asm:323 STX @LOCAL08
    case 0xC1FAE1: cpu.execute_instruction<0x86>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop.asm:325 STX @VIRTUAL04
    case 0xC1FAE3: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:326 LDA #PLAYER_CHAR_COUNT
    case 0xC1FAE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/intro/file_select_menu_loop.asm:326 LDA #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC1FAE5.
    case 0xC1FAE7: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/intro/file_select_menu_loop.asm:327 CLC
    case 0xC1FAE8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:328 SBC @VIRTUAL04
    case 0xC1FAE9: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/intro/file_select_menu_loop.asm:329 BRANCHGTS @UNKNOWN34
    case 0xC1FAEB: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/intro/file_select_menu_loop.asm:329 BRANCHGTS @UNKNOWN34
    case 0xC1FAED: cpu.execute_instruction<0x10>(0x0000DF, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/intro/file_select_menu_loop.asm:329 BRANCHGTS @UNKNOWN34
    case 0xC1FAEF: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/intro/file_select_menu_loop.asm:329 BRANCHGTS @UNKNOWN34
    case 0xC1FAF1: cpu.execute_instruction<0x30>(0x0000DB, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select_menu_loop.asm:330 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_KING
    case 0xC1FAF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000021, 2); else cpu.execute_instruction<0xA9>(0x000021, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select_menu_loop.asm:330 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_KING
    // Overlapping static entry reached from 0xC1FAF3.
    case 0xC1FAF5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/file_select_menu_loop.asm:330 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_KING
    case 0xC1FAF6: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/intro/file_select_menu_loop.asm:331 LDA #7
    case 0xC1FAF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/intro/file_select_menu_loop.asm:331 LDA #7
    // Overlapping static entry reached from 0xC1FAF9.
    case 0xC1FAFB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:332 JSR UNKNOWN_C1931B
    case 0xC1FAFC: cpu.execute_instruction<0x20>(0x00931B, 3); return true;
    // src/intro/file_select_menu_loop.asm:333 LDA #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_FOOD
    case 0xC1FAFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x000022, 3); return true;
    // src/intro/file_select_menu_loop.asm:333 LDA #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_FOOD
    // Overlapping static entry reached from 0xC1FAFF.
    case 0xC1FB01: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:334 JSR CREATE_WINDOW
    case 0xC1FB02: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:335 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    case 0xC1FB05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AC, 2); else cpu.execute_instruction<0xA9>(0x00C2AC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:335 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    // Overlapping static entry reached from 0xC1FB05.
    case 0xC1FB07: cpu.execute_instruction<0xC2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:335 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    case 0xC1FB08: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:335 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    // Overlapping static entry reached from 0xC1FB07.
    case 0xC1FB09: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:335 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    case 0xC1FB0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:335 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    // Overlapping static entry reached from 0xC1FB0A.
    case 0xC1FB0C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:335 LOADPTR FILE_SELECT_TEXT_FAVORITE_FOOD, @LOCAL00
    case 0xC1FB0D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop.asm:336 LDA #14
    case 0xC1FB0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/intro/file_select_menu_loop.asm:336 LDA #14
    // Overlapping static entry reached from 0xC1FB0F.
    case 0xC1FB11: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:337 JSR PRINT_STRING
    case 0xC1FB12: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu_loop.asm:338 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x00981F, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu_loop.asm:338 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FB15.
    case 0xC1FB17: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:338 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB18: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu_loop.asm:338 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB1A: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu_loop.asm:338 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB1B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu_loop.asm:338 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB1D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:338 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB1E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu_loop.asm:338 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB20: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/file_select_menu_loop.asm:339 REP #PROC_FLAGS::ACCUM8
    case 0xC1FB22: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:340 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB24: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:340 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB26: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:340 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB28: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:340 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB2A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop.asm:341 JSL STRLEN
    case 0xC1FB2C: cpu.execute_instruction<0x22>(0xC08F22, 4); return true;
    // src/intro/file_select_menu_loop.asm:342 STA @LOCAL05
    case 0xC1FB30: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:343 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB32: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:343 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB34: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:343 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB36: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:343 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB38: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop.asm:344 LDX #0
    case 0xC1FB3A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:344 LDX #0
    // Overlapping static entry reached from 0xC1FB3A.
    case 0xC1FB3C: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/intro/file_select_menu_loop.asm:345 LDA @LOCAL05
    case 0xC1FB3D: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/intro/file_select_menu_loop.asm:346 JSL UNKNOWN_C44FF3
    case 0xC1FB3F: cpu.execute_instruction<0x22>(0xC44FF3, 4); return true;
    // src/intro/file_select_menu_loop.asm:347 TAX
    case 0xC1FB43: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:348 ASL
    case 0xC1FB44: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:349 PHP
    case 0xC1FB45: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:350 LSR
    case 0xC1FB46: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:351 LSR
    case 0xC1FB47: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:352 LSR
    case 0xC1FB48: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:353 LSR
    case 0xC1FB49: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:354 PLP
    case 0xC1FB4A: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:355 BCC @UNKNOWN38
    case 0xC1FB4B: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/intro/file_select_menu_loop.asm:356 ORA #$F000
    case 0xC1FB4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00F000, 3); return true;
    // src/intro/file_select_menu_loop.asm:356 ORA #$F000
    // Overlapping static entry reached from 0xC1FB4D.
    case 0xC1FB4F: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // src/intro/file_select_menu_loop.asm:358 STA @LOCAL08
    case 0xC1FB50: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop.asm:358 STA @LOCAL08
    // Overlapping static entry reached from 0xC1FB4F.
    case 0xC1FB51: cpu.execute_instruction<0x24>(0x0000A0, 2); return true;
    // src/intro/file_select_menu_loop.asm:359 LDY #8
    case 0xC1FB52: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/intro/file_select_menu_loop.asm:359 LDY #8
    // Overlapping static entry reached from 0xC1FB51.
    case 0xC1FB53: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:359 LDY #8
    // Overlapping static entry reached from 0xC1FB52.
    case 0xC1FB54: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/intro/file_select_menu_loop.asm:360 TXA
    case 0xC1FB55: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:361 JSL MODULUS16S
    case 0xC1FB56: cpu.execute_instruction<0x22>(0xC091F4, 4); return true;
    // src/intro/file_select_menu_loop.asm:362 CMP #0
    case 0xC1FB5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:362 CMP #0
    // Overlapping static entry reached from 0xC1FB5A.
    case 0xC1FB5C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu_loop.asm:363 BNE @UNKNOWN39
    case 0xC1FB5D: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/intro/file_select_menu_loop.asm:364 LDA @LOCAL08
    case 0xC1FB5F: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop.asm:365 CMP #6
    case 0xC1FB61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/intro/file_select_menu_loop.asm:365 CMP #6
    // Overlapping static entry reached from 0xC1FB61.
    case 0xC1FB63: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu_loop.asm:366 BNE @UNKNOWN40
    case 0xC1FB64: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/intro/file_select_menu_loop.asm:368 LDA @LOCAL08
    case 0xC1FB66: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop.asm:369 INC
    case 0xC1FB68: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:371 LDX #1
    case 0xC1FB69: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop.asm:371 LDX #1
    // Overlapping static entry reached from 0xC1FB69.
    case 0xC1FB6B: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/intro/file_select_menu_loop.asm:372 STX @LOCAL04
    case 0xC1FB6C: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/intro/file_select_menu_loop.asm:373 STA @VIRTUAL04
    case 0xC1FB6E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:374 LDA OPEN_WINDOW_TABLE + WINDOW::FILE_SELECT_NAMING_CONFIRMATION_FOOD * 2
    case 0xC1FB70: cpu.execute_instruction<0xAD>(0x008928, 3); return true;
    // src/intro/file_select_menu_loop.asm:375 LDY #.SIZEOF(window_stats)
    case 0xC1FB73: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/intro/file_select_menu_loop.asm:375 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1FB73.
    case 0xC1FB75: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop.asm:376 JSL MULT168
    case 0xC1FB76: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/intro/file_select_menu_loop.asm:377 TAX
    case 0xC1FB7A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:378 LDA WINDOW_STATS+window_stats::width,X
    case 0xC1FB7B: cpu.execute_instruction<0xBD>(0x00865A, 3); return true;
    // src/intro/file_select_menu_loop.asm:379 SEC
    case 0xC1FB7E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:380 SBC @VIRTUAL04
    case 0xC1FB7F: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:381 LDX @LOCAL04
    case 0xC1FB81: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/intro/file_select_menu_loop.asm:382 JSL UNKNOWN_C438A5
    case 0xC1FB83: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu_loop.asm:383 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x00981F, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu_loop.asm:383 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FC01.
    case 0xC1FB88: cpu.execute_instruction<0x1F>(0x068598, 4); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu_loop.asm:383 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FB87.
    case 0xC1FB89: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:383 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB8A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu_loop.asm:383 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB8C: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu_loop.asm:383 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB8D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu_loop.asm:383 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB8F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:383 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB90: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu_loop.asm:383 PROMOTENEARPTR GAME_STATE + game_state::favourite_food, @VIRTUAL06
    case 0xC1FB92: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/file_select_menu_loop.asm:384 REP #PROC_FLAGS::ACCUM8
    case 0xC1FB94: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:385 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB96: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:385 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB98: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:385 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB9A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:385 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FB9C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop.asm:386 JSL STRLEN
    case 0xC1FB9E: cpu.execute_instruction<0x22>(0xC08F22, 4); return true;
    // src/intro/file_select_menu_loop.asm:387 STA @LOCAL08
    case 0xC1FBA2: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:388 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FBA4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:388 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FBA6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:388 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FBA8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:388 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FBAA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop.asm:389 LDA @LOCAL08
    case 0xC1FBAC: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop.asm:390 JSR PRINT_STRING
    case 0xC1FBAE: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/intro/file_select_menu_loop.asm:391 LDA #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_THING
    case 0xC1FBB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000023, 2); else cpu.execute_instruction<0xA9>(0x000023, 3); return true;
    // src/intro/file_select_menu_loop.asm:391 LDA #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_THING
    // Overlapping static entry reached from 0xC1FBB1.
    case 0xC1FBB3: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:392 JSR CREATE_WINDOW
    case 0xC1FBB4: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:393 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    case 0xC1FBB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BA, 2); else cpu.execute_instruction<0xA9>(0x00C2BA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:393 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    // Overlapping static entry reached from 0xC1FBB7.
    case 0xC1FBB9: cpu.execute_instruction<0xC2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:393 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    case 0xC1FBBA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:393 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    // Overlapping static entry reached from 0xC1FBB9.
    case 0xC1FBBB: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:393 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    case 0xC1FBBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:393 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    // Overlapping static entry reached from 0xC1FBBC.
    case 0xC1FBBE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:393 LOADPTR FILE_SELECT_TEXT_COOLEST_THING, @LOCAL00
    case 0xC1FBBF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop.asm:394 LDA #14
    case 0xC1FBC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/intro/file_select_menu_loop.asm:394 LDA #14
    // Overlapping static entry reached from 0xC1FBC1.
    case 0xC1FBC3: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:395 JSR PRINT_STRING
    case 0xC1FBC4: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu_loop.asm:396 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FBC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000029, 2); else cpu.execute_instruction<0xA9>(0x009829, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu_loop.asm:396 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    // Overlapping static entry reached from 0xC1FBC7.
    case 0xC1FBC9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:396 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FBCA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu_loop.asm:396 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FBCC: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu_loop.asm:396 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FBCD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu_loop.asm:396 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FBCF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:396 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FBD0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu_loop.asm:396 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FBD2: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/file_select_menu_loop.asm:397 REP #PROC_FLAGS::ACCUM8
    case 0xC1FBD4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:398 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FBD6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:398 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FBD8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:398 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FBDA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:398 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FBDC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop.asm:399 JSL STRLEN
    case 0xC1FBDE: cpu.execute_instruction<0x22>(0xC08F22, 4); return true;
    // src/intro/file_select_menu_loop.asm:400 STA @LOCAL05
    case 0xC1FBE2: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:401 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FBE4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:401 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FBE6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:401 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FBE8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:401 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FBEA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop.asm:402 LDX #0
    case 0xC1FBEC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:402 LDX #0
    // Overlapping static entry reached from 0xC1FBEC.
    case 0xC1FBEE: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/intro/file_select_menu_loop.asm:403 LDA @LOCAL05
    case 0xC1FBEF: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/intro/file_select_menu_loop.asm:404 JSL UNKNOWN_C44FF3
    case 0xC1FBF1: cpu.execute_instruction<0x22>(0xC44FF3, 4); return true;
    // src/intro/file_select_menu_loop.asm:406 TAX
    case 0xC1FBF5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:408 ASL
    case 0xC1FBF6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:409 PHP
    case 0xC1FBF7: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:410 LSR
    case 0xC1FBF8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:411 LSR
    case 0xC1FBF9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:412 LSR
    case 0xC1FBFA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:413 LSR
    case 0xC1FBFB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:414 PLP
    case 0xC1FBFC: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:415 BCC @UNKNOWN41
    case 0xC1FBFD: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/intro/file_select_menu_loop.asm:416 ORA #$F000
    case 0xC1FBFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00F000, 3); return true;
    // src/intro/file_select_menu_loop.asm:416 ORA #$F000
    // Overlapping static entry reached from 0xC1FBFF.
    case 0xC1FC01: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // src/intro/file_select_menu_loop.asm:418 STA @LOCAL08
    case 0xC1FC02: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop.asm:418 STA @LOCAL08
    // Overlapping static entry reached from 0xC1FC01.
    case 0xC1FC03: cpu.execute_instruction<0x24>(0x0000A0, 2); return true;
    // src/intro/file_select_menu_loop.asm:419 LDY #8
    case 0xC1FC04: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/intro/file_select_menu_loop.asm:419 LDY #8
    // Overlapping static entry reached from 0xC1FC03.
    case 0xC1FC05: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:419 LDY #8
    // Overlapping static entry reached from 0xC1FC04.
    case 0xC1FC06: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/intro/file_select_menu_loop.asm:421 TXA
    case 0xC1FC07: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:423 JSL MODULUS16S
    case 0xC1FC08: cpu.execute_instruction<0x22>(0xC091F4, 4); return true;
    // src/intro/file_select_menu_loop.asm:424 CMP #0
    case 0xC1FC0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:424 CMP #0
    // Overlapping static entry reached from 0xC1FC0C.
    case 0xC1FC0E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu_loop.asm:425 BNE @UNKNOWN42
    case 0xC1FC0F: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/intro/file_select_menu_loop.asm:426 LDA @LOCAL08
    case 0xC1FC11: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop.asm:427 CMP #6
    case 0xC1FC13: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/intro/file_select_menu_loop.asm:427 CMP #6
    // Overlapping static entry reached from 0xC1FC13.
    case 0xC1FC15: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu_loop.asm:428 BNE @UNKNOWN43
    case 0xC1FC16: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/intro/file_select_menu_loop.asm:430 LDA @LOCAL08
    case 0xC1FC18: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop.asm:431 INC
    case 0xC1FC1A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:433 LDX #1
    case 0xC1FC1B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop.asm:433 LDX #1
    // Overlapping static entry reached from 0xC1FC1B.
    case 0xC1FC1D: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/intro/file_select_menu_loop.asm:434 STX @LOCAL07
    case 0xC1FC1E: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop.asm:435 STA @VIRTUAL04
    case 0xC1FC20: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:436 LDA OPEN_WINDOW_TABLE + WINDOW::FILE_SELECT_NAMING_CONFIRMATION_THING * 2
    case 0xC1FC22: cpu.execute_instruction<0xAD>(0x00892A, 3); return true;
    // src/intro/file_select_menu_loop.asm:437 LDY #.SIZEOF(window_stats)
    case 0xC1FC25: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/intro/file_select_menu_loop.asm:437 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1FC25.
    case 0xC1FC27: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop.asm:438 JSL MULT168
    case 0xC1FC28: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/intro/file_select_menu_loop.asm:439 TAX
    case 0xC1FC2C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:440 LDA WINDOW_STATS+window_stats::width,X
    case 0xC1FC2D: cpu.execute_instruction<0xBD>(0x00865A, 3); return true;
    // src/intro/file_select_menu_loop.asm:441 SEC
    case 0xC1FC30: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:442 SBC @VIRTUAL04
    case 0xC1FC31: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:443 LDX @LOCAL07
    case 0xC1FC33: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop.asm:444 JSL UNKNOWN_C438A5
    case 0xC1FC35: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu_loop.asm:445 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FC39: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000029, 2); else cpu.execute_instruction<0xA9>(0x009829, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/file_select_menu_loop.asm:445 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    // Overlapping static entry reached from 0xC1FC39.
    case 0xC1FC3B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:445 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FC3C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/file_select_menu_loop.asm:445 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FC3E: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/file_select_menu_loop.asm:445 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FC3F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/file_select_menu_loop.asm:445 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FC41: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:445 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FC42: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/file_select_menu_loop.asm:445 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing + 4, @VIRTUAL06 ; part after 'PSI ' prefix
    case 0xC1FC44: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/file_select_menu_loop.asm:446 REP #PROC_FLAGS::ACCUM8
    case 0xC1FC46: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:447 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FC48: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:447 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FC4A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:447 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FC4C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:447 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FC4E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop.asm:448 JSL STRLEN
    case 0xC1FC50: cpu.execute_instruction<0x22>(0xC08F22, 4); return true;
    // src/intro/file_select_menu_loop.asm:449 STA @LOCAL08
    case 0xC1FC54: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:450 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FC56: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:450 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FC58: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:450 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FC5A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:450 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FC5C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop.asm:451 LDA @LOCAL08
    case 0xC1FC5E: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop.asm:452 JSR PRINT_STRING
    case 0xC1FC60: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select_menu_loop.asm:453 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_MESSAGE
    case 0xC1FC63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000024, 2); else cpu.execute_instruction<0xA9>(0x000024, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/file_select_menu_loop.asm:453 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_MESSAGE
    // Overlapping static entry reached from 0xC1FC63.
    case 0xC1FC65: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/file_select_menu_loop.asm:453 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_CONFIRMATION_MESSAGE
    case 0xC1FC66: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:454 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    case 0xC1FC69: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x00C2C8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:454 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    // Overlapping static entry reached from 0xC1FC69.
    case 0xC1FC6B: cpu.execute_instruction<0xC2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:454 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    case 0xC1FC6C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:454 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    // Overlapping static entry reached from 0xC1FC6B.
    case 0xC1FC6D: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:454 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    case 0xC1FC6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:454 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    // Overlapping static entry reached from 0xC1FC6E.
    case 0xC1FC70: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:454 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE, @LOCAL00
    case 0xC1FC71: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop.asm:455 LDA #13
    case 0xC1FC73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000D, 2); else cpu.execute_instruction<0xA9>(0x00000D, 3); return true;
    // src/intro/file_select_menu_loop.asm:455 LDA #13
    // Overlapping static entry reached from 0xC1FC73.
    case 0xC1FC75: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:456 JSR PRINT_STRING
    case 0xC1FC76: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select_menu_loop.asm:457 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1FC79: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/intro/file_select_menu_loop.asm:457 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FC79.
    case 0xC1FC7B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:457 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1FC7C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select_menu_loop.asm:457 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1FC7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/intro/file_select_menu_loop.asm:457 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FC7E.
    case 0xC1FC80: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:457 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1FC81: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:458 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    case 0xC1FC83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x00C2D5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:458 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    // Overlapping static entry reached from 0xC1FC83.
    case 0xC1FC85: cpu.execute_instruction<0xC2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:458 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    case 0xC1FC86: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:458 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    // Overlapping static entry reached from 0xC1FC85.
    case 0xC1FC87: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:458 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    case 0xC1FC88: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:458 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    // Overlapping static entry reached from 0xC1FC88.
    case 0xC1FC8A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:458 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_YEP, @LOCAL00
    case 0xC1FC8B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:459 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FC8D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:459 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FC8F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:459 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FC91: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:459 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FC93: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select_menu_loop.asm:460 LDY #0
    case 0xC1FC95: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:460 LDY #0
    // Overlapping static entry reached from 0xC1FC95.
    case 0xC1FC97: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/file_select_menu_loop.asm:461 LDX #14
    case 0xC1FC98: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000E, 2); else cpu.execute_instruction<0xA2>(0x00000E, 3); return true;
    // src/intro/file_select_menu_loop.asm:461 LDX #14
    // Overlapping static entry reached from 0xC1FC98.
    case 0xC1FC9A: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select_menu_loop.asm:462 LDA #1
    case 0xC1FC9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop.asm:462 LDA #1
    // Overlapping static entry reached from 0xC1FC9B.
    case 0xC1FC9D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:463 JSR UNKNOWN_C1153B
    case 0xC1FC9E: cpu.execute_instruction<0x20>(0x00153B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:464 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    case 0xC1FCA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D9, 2); else cpu.execute_instruction<0xA9>(0x00C2D9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:464 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    // Overlapping static entry reached from 0xC1FCA1.
    case 0xC1FCA3: cpu.execute_instruction<0xC2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:464 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    case 0xC1FCA4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:464 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    // Overlapping static entry reached from 0xC1FCA3.
    case 0xC1FCA5: cpu.execute_instruction<0x0E>(0x00C4A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:464 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    case 0xC1FCA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:464 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    // Overlapping static entry reached from 0xC1FCA6.
    case 0xC1FCA8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:464 LOADPTR FILE_SELECT_TEXT_ARE_YOU_SURE_NOPE, @LOCAL00
    case 0xC1FCA9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:465 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FCAB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:465 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FCAD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:465 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FCAF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:465 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1FCB1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/file_select_menu_loop.asm:466 LDY #0
    case 0xC1FCB3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:466 LDY #0
    // Overlapping static entry reached from 0xC1FCB3.
    case 0xC1FCB5: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/file_select_menu_loop.asm:467 LDX #18
    case 0xC1FCB6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000012, 2); else cpu.execute_instruction<0xA2>(0x000012, 3); return true;
    // src/intro/file_select_menu_loop.asm:467 LDX #18
    // Overlapping static entry reached from 0xC1FCB6.
    case 0xC1FCB8: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/intro/file_select_menu_loop.asm:468 TYA
    case 0xC1FCB9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:469 JSR UNKNOWN_C1153B
    case 0xC1FCBA: cpu.execute_instruction<0x20>(0x00153B, 3); return true;
    // src/intro/file_select_menu_loop.asm:470 JSR PRINT_MENU_ITEMS
    case 0xC1FCBD: cpu.execute_instruction<0x20>(0x00163C, 3); return true;
    // src/intro/file_select_menu_loop.asm:471 JSL UNKNOWN_C4D8FA
    case 0xC1FCC0: cpu.execute_instruction<0x22>(0xC4D8FA, 4); return true;
    // src/intro/file_select_menu_loop.asm:472 LDA #$00FF
    case 0xC1FCC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/intro/file_select_menu_loop.asm:472 LDA #$00FF
    // Overlapping static entry reached from 0xC1FCC4.
    case 0xC1FCC6: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/intro/file_select_menu_loop.asm:473 STA ENABLE_WORD_WRAP
    case 0xC1FCC7: cpu.execute_instruction<0x8D>(0x005E6E, 3); return true;
    // src/intro/file_select_menu_loop.asm:474 LDA #1
    case 0xC1FCCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop.asm:474 LDA #1
    // Overlapping static entry reached from 0xC1FCCA.
    case 0xC1FCCC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:475 JSR SELECTION_MENU
    case 0xC1FCCD: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // src/intro/file_select_menu_loop.asm:476 TAX
    case 0xC1FCD0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:477 BNE @EVERYTHING_OKAY
    case 0xC1FCD1: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/intro/file_select_menu_loop.asm:478 JSL UNKNOWN_C021E6
    case 0xC1FCD3: cpu.execute_instruction<0x22>(0xC021E6, 4); return true;
    // src/intro/file_select_menu_loop.asm:479 JMP @UNKNOWN18
    case 0xC1FCD7: cpu.execute_instruction<0x4C>(0x00F902, 3); return true;
    // src/intro/file_select_menu_loop.asm:481 LDA #MUSIC::NAME_CONFIRMATION
    case 0xC1FCDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009E, 2); else cpu.execute_instruction<0xA9>(0x00009E, 3); return true;
    // src/intro/file_select_menu_loop.asm:481 LDA #MUSIC::NAME_CONFIRMATION
    // Overlapping static entry reached from 0xC1FCDA.
    case 0xC1FCDC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop.asm:482 JSL CHANGE_MUSIC
    case 0xC1FCDD: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/intro/file_select_menu_loop.asm:483 JSL WINDOW_TICK
    case 0xC1FCE1: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/intro/file_select_menu_loop.asm:484 LDX #0
    case 0xC1FCE5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:484 LDX #0
    // Overlapping static entry reached from 0xC1FCE5.
    case 0xC1FCE7: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/intro/file_select_menu_loop.asm:485 STX @LOCAL08ALT
    case 0xC1FCE8: cpu.execute_instruction<0x86>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop.asm:486 BRA @UNKNOWN46
    case 0xC1FCEA: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/intro/file_select_menu_loop.asm:488 JSL UNKNOWN_C1004E
    case 0xC1FCEC: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/intro/file_select_menu_loop.asm:489 LDX @LOCAL08ALT
    case 0xC1FCF0: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop.asm:490 INX
    case 0xC1FCF2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:491 STX @LOCAL08ALT
    case 0xC1FCF3: cpu.execute_instruction<0x86>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop.asm:493 STX @VIRTUAL02
    case 0xC1FCF5: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop.asm:494 LDA #180
    case 0xC1FCF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B4, 2); else cpu.execute_instruction<0xA9>(0x0000B4, 3); return true;
    // src/intro/file_select_menu_loop.asm:494 LDA #180
    // Overlapping static entry reached from 0xC1FCF7.
    case 0xC1FCF9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/intro/file_select_menu_loop.asm:495 CLC
    case 0xC1FCFA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:496 SBC @VIRTUAL02
    case 0xC1FCFB: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/intro/file_select_menu_loop.asm:497 BRANCHGTS @UNKNOWN45
    case 0xC1FCFD: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/intro/file_select_menu_loop.asm:497 BRANCHGTS @UNKNOWN45
    case 0xC1FCFF: cpu.execute_instruction<0x10>(0x0000EB, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/intro/file_select_menu_loop.asm:497 BRANCHGTS @UNKNOWN45
    case 0xC1FD01: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/intro/file_select_menu_loop.asm:497 BRANCHGTS @UNKNOWN45
    case 0xC1FD03: cpu.execute_instruction<0x30>(0x0000E7, 2); return true;
    // src/intro/file_select_menu_loop.asm:498 JSL UNKNOWN_C021E6
    case 0xC1FD05: cpu.execute_instruction<0x22>(0xC021E6, 4); return true;
    // src/intro/file_select_menu_loop.asm:499 STZ @LOCAL05
    case 0xC1FD09: cpu.execute_instruction<0x64>(0x00001E, 2); return true;
    // src/intro/file_select_menu_loop.asm:500 JMP @UNKNOWN51
    case 0xC1FD0B: cpu.execute_instruction<0x4C>(0x00FDE4, 3); return true;
    // src/intro/file_select_menu_loop.asm:502 LDA @LOCAL05
    case 0xC1FD0E: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/intro/file_select_menu_loop.asm:503 STA @VIRTUAL04
    case 0xC1FD10: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:504 INC @VIRTUAL04
    case 0xC1FD12: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:505 LDA @VIRTUAL04
    case 0xC1FD14: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:506 STA @LOCAL08ALT2
    case 0xC1FD16: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:507 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FD18: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F5, 2); else cpu.execute_instruction<0xA9>(0x00F5F5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:507 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FD18.
    case 0xC1FD1A: cpu.execute_instruction<0xF5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:507 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FD1B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:507 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FD1A.
    case 0xC1FD1C: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:507 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FD1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:507 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FD1C.
    case 0xC1FD1E: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:507 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FD1D.
    case 0xC1FD1F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:507 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FD20: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop.asm:508 LDA @LOCAL05
    case 0xC1FD22: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:509 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FD24: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:509 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FD26: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:509 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FD27: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:509 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FD28: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:509 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FD2A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:509 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FD2B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:510 STA @VIRTUAL02
    case 0xC1FD2C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop.asm:511 LDY #0
    case 0xC1FD2E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:511 LDY #0
    // Overlapping static entry reached from 0xC1FD2E.
    case 0xC1FD30: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/intro/file_select_menu_loop.asm:512 LDA @VIRTUAL02
    case 0xC1FD31: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop.asm:513 CLC
    case 0xC1FD33: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:514 ADC #initial_stats::level
    case 0xC1FD34: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/intro/file_select_menu_loop.asm:514 ADC #initial_stats::level
    // Overlapping static entry reached from 0xC1FD34.
    case 0xC1FD36: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/intro/file_select_menu_loop.asm:515 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1FD37: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/intro/file_select_menu_loop.asm:515 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1FD39: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:515 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1FD3B: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:515 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1FD3D: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/intro/file_select_menu_loop.asm:516 CLC
    case 0xC1FD3F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:517 ADC @VIRTUAL0A
    case 0xC1FD40: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/intro/file_select_menu_loop.asm:518 STA @VIRTUAL0A
    case 0xC1FD42: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/intro/file_select_menu_loop.asm:519 LDA [@VIRTUAL0A]
    case 0xC1FD44: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/intro/file_select_menu_loop.asm:520 TAX
    case 0xC1FD46: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:521 LDA @LOCAL08ALT2
    case 0xC1FD47: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/intro/file_select_menu_loop.asm:522 STA @VIRTUAL04
    case 0xC1FD49: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:523 JSR RESET_CHAR_LEVEL_ONE
    case 0xC1FD4B: cpu.execute_instruction<0x20>(0x00D8D0, 3); return true;
    // src/intro/file_select_menu_loop.asm:524 LDA @VIRTUAL02
    case 0xC1FD4E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop.asm:525 CLC
    case 0xC1FD50: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:526 ADC #initial_stats::exp
    case 0xC1FD51: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/intro/file_select_menu_loop.asm:526 ADC #initial_stats::exp
    // Overlapping static entry reached from 0xC1FD51.
    case 0xC1FD53: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/intro/file_select_menu_loop.asm:527 CLC
    case 0xC1FD54: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:528 ADC @VIRTUAL06
    case 0xC1FD55: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop.asm:529 STA @VIRTUAL06
    case 0xC1FD57: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop.asm:530 LDA [@VIRTUAL06]
    case 0xC1FD59: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop.asm:531 BEQ @UNKNOWN50
    case 0xC1FD5B: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:532 STORE_INT1632 @VIRTUAL06
    case 0xC1FD5D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:532 STORE_INT1632 @VIRTUAL06
    case 0xC1FD5F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:533 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FD61: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:533 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FD63: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:533 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FD65: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:533 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1FD67: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop.asm:534 LDX #0
    case 0xC1FD69: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:534 LDX #0
    // Overlapping static entry reached from 0xC1FD69.
    case 0xC1FD6B: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/intro/file_select_menu_loop.asm:535 LDA @VIRTUAL04
    case 0xC1FD6C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/intro/file_select_menu_loop.asm:536 JSL GAIN_EXP
    case 0xC1FD6E: cpu.execute_instruction<0x22>(0xC1D9E9, 4); return true;
    // src/intro/file_select_menu_loop.asm:538 LDA @LOCAL05
    case 0xC1FD72: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/intro/file_select_menu_loop.asm:539 LDY #.SIZEOF(char_struct)
    case 0xC1FD74: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/intro/file_select_menu_loop.asm:539 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1FD74.
    case 0xC1FD76: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop.asm:540 JSL MULT168
    case 0xC1FD77: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/intro/file_select_menu_loop.asm:541 TAY
    case 0xC1FD7B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:542 STY @LOCAL03T
    case 0xC1FD7C: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/intro/file_select_menu_loop.asm:543 LDA PARTY_CHARACTERS+char_struct::max_hp,Y
    case 0xC1FD7E: cpu.execute_instruction<0xB9>(0x0099D8, 3); return true;
    // src/intro/file_select_menu_loop.asm:544 STA PARTY_CHARACTERS+char_struct::current_hp,Y
    case 0xC1FD81: cpu.execute_instruction<0x99>(0x009A13, 3); return true;
    // src/intro/file_select_menu_loop.asm:545 STA PARTY_CHARACTERS+char_struct::current_hp_target,Y
    case 0xC1FD84: cpu.execute_instruction<0x99>(0x009A15, 3); return true;
    // src/intro/file_select_menu_loop.asm:546 LDA PARTY_CHARACTERS+char_struct::max_pp,Y
    case 0xC1FD87: cpu.execute_instruction<0xB9>(0x0099DA, 3); return true;
    // src/intro/file_select_menu_loop.asm:547 STA PARTY_CHARACTERS+char_struct::current_pp,Y
    case 0xC1FD8A: cpu.execute_instruction<0x99>(0x009A19, 3); return true;
    // src/intro/file_select_menu_loop.asm:548 STA PARTY_CHARACTERS+char_struct::current_pp_target,Y
    case 0xC1FD8D: cpu.execute_instruction<0x99>(0x009A1B, 3); return true;
    // src/intro/file_select_menu_loop.asm:549 TYX
    case 0xC1FD90: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:550 STZ PARTY_CHARACTERS+char_struct::current_pp_fraction,X
    case 0xC1FD91: cpu.execute_instruction<0x9E>(0x009A17, 3); return true;
    // src/intro/file_select_menu_loop.asm:551 TYX
    case 0xC1FD94: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:552 STZ PARTY_CHARACTERS+char_struct::current_hp_fraction,X
    case 0xC1FD95: cpu.execute_instruction<0x9E>(0x009A11, 3); return true;
    // src/intro/file_select_menu_loop.asm:553 TYA
    case 0xC1FD98: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:554 CLC
    case 0xC1FD99: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:555 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC1FD9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/intro/file_select_menu_loop.asm:555 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC1FD9A.
    case 0xC1FD9C: cpu.execute_instruction<0x99>(0x000285, 3); return true;
    // src/intro/file_select_menu_loop.asm:556 STA @VIRTUAL02
    case 0xC1FD9D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop.asm:557 SEP #PROC_FLAGS::ACCUM8
    case 0xC1FD9F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/intro/file_select_menu_loop.asm:558 STZ_BADOPT @LOCAL00
    case 0xC1FDA1: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/intro/file_select_menu_loop.asm:559 LDX #14
    case 0xC1FDA3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000E, 2); else cpu.execute_instruction<0xA2>(0x00000E, 3); return true;
    // src/intro/file_select_menu_loop.asm:559 LDX #14
    // Overlapping static entry reached from 0xC1FDA3.
    case 0xC1FDA5: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/intro/file_select_menu_loop.asm:560 REP #PROC_FLAGS::ACCUM8
    case 0xC1FDA6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:561 LDA @VIRTUAL02
    case 0xC1FDA8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop.asm:562 JSL MEMSET16
    case 0xC1FDAA: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:563 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FDAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F5, 2); else cpu.execute_instruction<0xA9>(0x00F5F5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:563 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FDAE.
    case 0xC1FDB0: cpu.execute_instruction<0xF5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:563 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FDB1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:563 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FDB0.
    case 0xC1FDB2: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:563 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FDB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:563 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FDB2.
    case 0xC1FDB4: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:563 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FDB3.
    case 0xC1FDB5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:563 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FDB6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop.asm:564 LDA @LOCAL05
    case 0xC1FDB8: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:565 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FDBA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:565 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FDBC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:565 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FDBD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:565 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FDBE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:565 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FDC0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:565 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(initial_stats)
    case 0xC1FDC1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:566 CLC
    case 0xC1FDC2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:567 ADC #initial_stats::items
    case 0xC1FDC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/intro/file_select_menu_loop.asm:567 ADC #initial_stats::items
    // Overlapping static entry reached from 0xC1FDC3.
    case 0xC1FDC5: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/intro/file_select_menu_loop.asm:568 CLC
    case 0xC1FDC6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:569 ADC @VIRTUAL06
    case 0xC1FDC7: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop.asm:570 STA @VIRTUAL06
    case 0xC1FDC9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop.asm:571 STA @LOCAL00
    case 0xC1FDCB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/intro/file_select_menu_loop.asm:572 LDA @VIRTUAL06+2
    case 0xC1FDCD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop.asm:573 STA @LOCAL00+2
    case 0xC1FDCF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop.asm:574 LDX #.SIZEOF(initial_stats::items)
    case 0xC1FDD1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/intro/file_select_menu_loop.asm:574 LDX #.SIZEOF(initial_stats::items)
    // Overlapping static entry reached from 0xC1FDD1.
    case 0xC1FDD3: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/intro/file_select_menu_loop.asm:575 LDA @VIRTUAL02
    case 0xC1FDD4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop.asm:576 JSL MEMCPY16
    case 0xC1FDD6: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/intro/file_select_menu_loop.asm:577 LDA #$0400
    case 0xC1FDDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000400, 3); return true;
    // src/intro/file_select_menu_loop.asm:577 LDA #$0400
    // Overlapping static entry reached from 0xC1FDDA.
    case 0xC1FDDC: cpu.execute_instruction<0x04>(0x0000A4, 2); return true;
    // src/intro/file_select_menu_loop.asm:578 LDY @LOCAL03T
    case 0xC1FDDD: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/intro/file_select_menu_loop.asm:578 LDY @LOCAL03T
    // Overlapping static entry reached from 0xC1FDDC.
    case 0xC1FDDE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:579 STA PARTY_CHARACTERS+char_struct::hp_pp_window_options,Y
    case 0xC1FDDF: cpu.execute_instruction<0x99>(0x009A1D, 3); return true;
    // src/intro/file_select_menu_loop.asm:580 INC @LOCAL05
    case 0xC1FDE2: cpu.execute_instruction<0xE6>(0x00001E, 2); return true;
    // src/intro/file_select_menu_loop.asm:582 LDA #PLAYER_CHAR_COUNT
    case 0xC1FDE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/intro/file_select_menu_loop.asm:582 LDA #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC1FDE4.
    case 0xC1FDE6: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/intro/file_select_menu_loop.asm:583 CLC
    case 0xC1FDE7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:584 SBC @LOCAL05
    case 0xC1FDE8: cpu.execute_instruction<0xE5>(0x00001E, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/intro/file_select_menu_loop.asm:585 JUMPGTS @UNKNOWN49
    case 0xC1FDEA: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/intro/file_select_menu_loop.asm:585 JUMPGTS @UNKNOWN49
    case 0xC1FDEC: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/intro/file_select_menu_loop.asm:585 JUMPGTS @UNKNOWN49
    case 0xC1FDEE: cpu.execute_instruction<0x4C>(0x00FD0E, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/intro/file_select_menu_loop.asm:585 JUMPGTS @UNKNOWN49
    case 0xC1FDF1: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/intro/file_select_menu_loop.asm:585 JUMPGTS @UNKNOWN49
    case 0xC1FDF3: cpu.execute_instruction<0x4C>(0x00FD0E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:586 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FDF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F5, 2); else cpu.execute_instruction<0xA9>(0x00F5F5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:586 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FDF6.
    case 0xC1FDF8: cpu.execute_instruction<0xF5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:586 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FDF9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:586 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FDF8.
    case 0xC1FDFA: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:586 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FDFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:586 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FDFA.
    case 0xC1FDFC: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:586 LOADPTR INITIAL_STATS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FDFB.
    case 0xC1FDFD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:586 LOADPTR INITIAL_STATS, @VIRTUAL06
    case 0xC1FDFE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:587 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1FE00: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:587 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1FE02: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:587 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1FE04: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:587 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC1FE06: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/intro/file_select_menu_loop.asm:588 LDY #initial_stats::money
    case 0xC1FE08: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/intro/file_select_menu_loop.asm:588 LDY #initial_stats::money
    // Overlapping static entry reached from 0xC1FE08.
    case 0xC1FE0A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/intro/file_select_menu_loop.asm:589 LDA [@VIRTUAL06],Y
    case 0xC1FE0B: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:590 STORE_INT1632 @VIRTUAL06
    case 0xC1FE0D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:590 STORE_INT1632 @VIRTUAL06
    case 0xC1FE0F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:591 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC1FE11: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:591 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC1FE13: cpu.execute_instruction<0x8D>(0x009831, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:591 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC1FE16: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:591 MOVE_INT @VIRTUAL06, GAME_STATE+game_state::money_carried
    case 0xC1FE18: cpu.execute_instruction<0x8D>(0x009833, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:592 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1FE1B: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:592 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1FE1D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:592 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1FE1F: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:592 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC1FE21: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/intro/file_select_menu_loop.asm:593 LDY #initial_stats::unknown2
    case 0xC1FE23: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/intro/file_select_menu_loop.asm:593 LDY #initial_stats::unknown2
    // Overlapping static entry reached from 0xC1FE23.
    case 0xC1FE25: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/intro/file_select_menu_loop.asm:594 LDA [@VIRTUAL06],Y
    case 0xC1FE26: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop.asm:595 ASL
    case 0xC1FE28: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:596 ASL
    case 0xC1FE29: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:597 ASL
    case 0xC1FE2A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:598 TAX
    case 0xC1FE2B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:599 LDA [@VIRTUAL06]
    case 0xC1FE2C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/intro/file_select_menu_loop.asm:600 ASL
    case 0xC1FE2E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:601 ASL
    case 0xC1FE2F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:602 ASL
    case 0xC1FE30: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:603 JSL UNKNOWN_C0B65F
    case 0xC1FE31: cpu.execute_instruction<0x22>(0xC0B65F, 4); return true;
    // src/intro/file_select_menu_loop.asm:604 SEP #PROC_FLAGS::ACCUM8
    case 0xC1FE35: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:605 LDA #CHAR::P
    case 0xC1FE37: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008D80, 3); return true;
    // src/intro/file_select_menu_loop.asm:606 STA GAME_STATE+game_state::favourite_thing
    case 0xC1FE39: cpu.execute_instruction<0x8D>(0x009825, 3); return true;
    // src/intro/file_select_menu_loop.asm:606 STA GAME_STATE+game_state::favourite_thing
    // Overlapping static entry reached from 0xC1FE37.
    case 0xC1FE3A: cpu.execute_instruction<0x25>(0x000098, 2); return true;
    // src/intro/file_select_menu_loop.asm:607 LDA #CHAR::S_
    case 0xC1FE3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000083, 2); else cpu.execute_instruction<0xA9>(0x008D83, 3); return true;
    // src/intro/file_select_menu_loop.asm:608 STA GAME_STATE+game_state::favourite_thing+1
    case 0xC1FE3E: cpu.execute_instruction<0x8D>(0x009826, 3); return true;
    // src/intro/file_select_menu_loop.asm:608 STA GAME_STATE+game_state::favourite_thing+1
    // Overlapping static entry reached from 0xC1FE3C.
    case 0xC1FE3F: cpu.execute_instruction<0x26>(0x000098, 2); return true;
    // src/intro/file_select_menu_loop.asm:609 LDA #CHAR::I
    case 0xC1FE41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000079, 2); else cpu.execute_instruction<0xA9>(0x008D79, 3); return true;
    // src/intro/file_select_menu_loop.asm:610 STA GAME_STATE+game_state::favourite_thing+2
    case 0xC1FE43: cpu.execute_instruction<0x8D>(0x009827, 3); return true;
    // src/intro/file_select_menu_loop.asm:610 STA GAME_STATE+game_state::favourite_thing+2
    // Overlapping static entry reached from 0xC1FE41.
    case 0xC1FE44: cpu.execute_instruction<0x27>(0x000098, 2); return true;
    // src/intro/file_select_menu_loop.asm:611 LDA #CHAR::SPACE
    case 0xC1FE46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x008D50, 3); return true;
    // src/intro/file_select_menu_loop.asm:612 STA GAME_STATE+game_state::favourite_thing+3
    case 0xC1FE48: cpu.execute_instruction<0x8D>(0x009828, 3); return true;
    // src/intro/file_select_menu_loop.asm:612 STA GAME_STATE+game_state::favourite_thing+3
    // Overlapping static entry reached from 0xC1FE46.
    case 0xC1FE49: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:612 STA GAME_STATE+game_state::favourite_thing+3
    // Overlapping static entry reached from 0xC1FE49.
    case 0xC1FE4A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:614 REP #PROC_FLAGS::ACCUM8
    case 0xC1FE4B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:615 LDA #4 ;Length of 'PSI ' string
    case 0xC1FE4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/intro/file_select_menu_loop.asm:615 LDA #4 ;Length of 'PSI ' string
    // Overlapping static entry reached from 0xC1FE4D.
    case 0xC1FE4F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/file_select_menu_loop.asm:616 STA @LOCAL05
    case 0xC1FE50: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/intro/file_select_menu_loop.asm:617 BRA @UNKNOWN56
    case 0xC1FE52: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/intro/file_select_menu_loop.asm:619 LDA @LOCAL05
    case 0xC1FE54: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/intro/file_select_menu_loop.asm:620 CLC
    case 0xC1FE56: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:621 ADC #.LOWORD(GAME_STATE) + game_state::favourite_thing
    case 0xC1FE57: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000025, 2); else cpu.execute_instruction<0x69>(0x009825, 3); return true;
    // src/intro/file_select_menu_loop.asm:621 ADC #.LOWORD(GAME_STATE) + game_state::favourite_thing
    // Overlapping static entry reached from 0xC1FE57.
    case 0xC1FE59: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:622 TAX
    case 0xC1FE5A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:623 LDA __BSS_START__,X
    case 0xC1FE5B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:624 AND #$00FF
    case 0xC1FE5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select_menu_loop.asm:624 AND #$00FF
    // Overlapping static entry reached from 0xC1FE5E.
    case 0xC1FE60: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu_loop.asm:625 BNE @UNKNOWN55
    case 0xC1FE61: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/intro/file_select_menu_loop.asm:626 SEP #PROC_FLAGS::ACCUM8
    case 0xC1FE63: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:627 LDA #CHAR::SPACE
    case 0xC1FE65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x009D50, 3); return true;
    // src/intro/file_select_menu_loop.asm:628 STA __BSS_START__,X
    case 0xC1FE67: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:628 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC1FE65.
    case 0xC1FE68: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/intro/file_select_menu_loop.asm:629 BRA @UNKNOWN58
    case 0xC1FE6A: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/intro/file_select_menu_loop.asm:631 LDA @LOCAL05
    case 0xC1FE6C: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/intro/file_select_menu_loop.asm:632 INC
    case 0xC1FE6E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:633 STA @LOCAL05
    case 0xC1FE6F: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/intro/file_select_menu_loop.asm:636 STA @VIRTUAL02
    case 0xC1FE71: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/file_select_menu_loop.asm:637 LDA #.SIZEOF(game_state::favourite_thing) - 1 ;Last byte should be \0
    case 0xC1FE73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000B, 2); else cpu.execute_instruction<0xA9>(0x00000B, 3); return true;
    // src/intro/file_select_menu_loop.asm:637 LDA #.SIZEOF(game_state::favourite_thing) - 1 ;Last byte should be \0
    // Overlapping static entry reached from 0xC1FE73.
    case 0xC1FE75: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/intro/file_select_menu_loop.asm:638 CLC
    case 0xC1FE76: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:639 SBC @VIRTUAL02
    case 0xC1FE77: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/intro/file_select_menu_loop.asm:640 BRANCHGTS @UNKNOWN54
    case 0xC1FE79: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/intro/file_select_menu_loop.asm:640 BRANCHGTS @UNKNOWN54
    case 0xC1FE7B: cpu.execute_instruction<0x10>(0x0000D7, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/intro/file_select_menu_loop.asm:640 BRANCHGTS @UNKNOWN54
    case 0xC1FE7D: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/intro/file_select_menu_loop.asm:640 BRANCHGTS @UNKNOWN54
    case 0xC1FE7F: cpu.execute_instruction<0x30>(0x0000D3, 2); return true;
    // src/intro/file_select_menu_loop.asm:642 SEP #PROC_FLAGS::ACCUM8
    case 0xC1FE81: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:644 LDA #1
    case 0xC1FE83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/intro/file_select_menu_loop.asm:645 STA GAME_STATE + game_state::unknownC3
    case 0xC1FE85: cpu.execute_instruction<0x8D>(0x0098B8, 3); return true;
    // src/intro/file_select_menu_loop.asm:645 STA GAME_STATE + game_state::unknownC3
    // Overlapping static entry reached from 0xC1FE83.
    case 0xC1FE86: cpu.execute_instruction<0xB8>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:645 STA GAME_STATE + game_state::unknownC3
    // Overlapping static entry reached from 0xC1FE86.
    case 0xC1FE87: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:646 REP #PROC_FLAGS::ACCUM8
    case 0xC1FE88: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:647 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC1FE8A: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/intro/file_select_menu_loop.asm:648 STA RESPAWN_X
    case 0xC1FE8D: cpu.execute_instruction<0x8D>(0x009D1F, 3); return true;
    // src/intro/file_select_menu_loop.asm:649 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC1FE90: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/intro/file_select_menu_loop.asm:650 STA RESPAWN_Y
    case 0xC1FE93: cpu.execute_instruction<0x8D>(0x009D21, 3); return true;
    // src/intro/file_select_menu_loop.asm:651 JSL UNKNOWN_C064D4
    case 0xC1FE96: cpu.execute_instruction<0x22>(0xC064D4, 4); return true;
    // src/intro/file_select_menu_loop.asm:652 LDX #1768
    case 0xC1FE9A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E8, 2); else cpu.execute_instruction<0xA2>(0x0006E8, 3); return true;
    // src/intro/file_select_menu_loop.asm:652 LDX #1768
    // Overlapping static entry reached from 0xC1FE9A.
    case 0xC1FE9C: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // src/intro/file_select_menu_loop.asm:653 LDA #2112
    case 0xC1FE9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000840, 3); return true;
    // src/intro/file_select_menu_loop.asm:653 LDA #2112
    // Overlapping static entry reached from 0xC1FE9C.
    case 0xC1FE9E: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:653 LDA #2112
    // Overlapping static entry reached from 0xC1FE9D.
    case 0xC1FE9F: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:654 JSL UNKNOWN_C0B65F
    case 0xC1FEA0: cpu.execute_instruction<0x22>(0xC0B65F, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:655 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    case 0xC1FEA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000B, 2); else cpu.execute_instruction<0xA9>(0x00E70B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:655 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    // Overlapping static entry reached from 0xC1FEA4.
    case 0xC1FEA6: cpu.execute_instruction<0xE7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:655 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    case 0xC1FEA7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:655 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    // Overlapping static entry reached from 0xC1FEA6.
    case 0xC1FEA8: cpu.execute_instruction<0x0E>(0x00C5A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:655 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    case 0xC1FEA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C5, 2); else cpu.execute_instruction<0xA9>(0x0000C5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:655 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    // Overlapping static entry reached from 0xC1FEA9.
    case 0xC1FEAB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:655 LOADPTR MSG_EVT_PROLOGUE_NEW, @LOCAL00
    case 0xC1FEAC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/file_select_menu_loop.asm:656 JSL UNKNOWN_C46881
    case 0xC1FEAE: cpu.execute_instruction<0x22>(0xC46881, 4); return true;
    // src/intro/file_select_menu_loop.asm:657 LDX #1
    case 0xC1FEB2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop.asm:657 LDX #1
    // Overlapping static entry reached from 0xC1FEB2.
    case 0xC1FEB4: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/file_select_menu_loop.asm:658 LDA #EVENT_FLAG::FLG_SYS_MONSTER_OFF
    case 0xC1FEB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000B, 2); else cpu.execute_instruction<0xA9>(0x00000B, 3); return true;
    // src/intro/file_select_menu_loop.asm:658 LDA #EVENT_FLAG::FLG_SYS_MONSTER_OFF
    // Overlapping static entry reached from 0xC1FEB5.
    case 0xC1FEB7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/file_select_menu_loop.asm:659 JSL SET_EVENT_FLAG
    case 0xC1FEB8: cpu.execute_instruction<0x22>(0xC2165E, 4); return true;
    // src/intro/file_select_menu_loop.asm:660 LDA #1
    case 0xC1FEBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/file_select_menu_loop.asm:660 LDA #1
    // Overlapping static entry reached from 0xC1FEBC.
    case 0xC1FEBE: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/intro/file_select_menu_loop.asm:661 STA SHOW_NPC_FLAG
    case 0xC1FEBF: cpu.execute_instruction<0x8D>(0x004A66, 3); return true;
    // src/intro/file_select_menu_loop.asm:663 JSR UNKNOWN_C1008E
    case 0xC1FEC2: cpu.execute_instruction<0x20>(0x00008E, 3); return true;
    // src/intro/file_select_menu_loop.asm:664 JSL UNKNOWN_C3EBCA
    case 0xC1FEC5: cpu.execute_instruction<0x22>(0xC3EBCA, 4); return true;
    // src/intro/file_select_menu_loop.asm:665 LDA GAME_STATE+game_state::text_speed
    case 0xC1FEC9: cpu.execute_instruction<0xAD>(0x0098B6, 3); return true;
    // src/intro/file_select_menu_loop.asm:666 AND #$00FF
    case 0xC1FECC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/file_select_menu_loop.asm:666 AND #$00FF
    // Overlapping static entry reached from 0xC1FECC.
    case 0xC1FECE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/file_select_menu_loop.asm:667 STA @LOCAL06ALT
    case 0xC1FECF: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:668 TAX
    case 0xC1FED1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:669 DEX
    case 0xC1FED2: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:670 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    case 0xC1FED3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x00FB1F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:670 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1FED3.
    case 0xC1FED5: cpu.execute_instruction<0xFB>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:670 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    case 0xC1FED6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:670 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    case 0xC1FED8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:670 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1FED8.
    case 0xC1FEDA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:670 LOADPTR HP_METER_SPEEDS, @VIRTUAL0A
    case 0xC1FEDB: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/intro/file_select_menu_loop.asm:671 TXA
    case 0xC1FEDD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:672 ASL
    case 0xC1FEDE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:673 ASL
    case 0xC1FEDF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:674 CLC
    case 0xC1FEE0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:675 ADC @VIRTUAL0A
    case 0xC1FEE1: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/intro/file_select_menu_loop.asm:676 STA @VIRTUAL0A
    case 0xC1FEE3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/intro/file_select_menu_loop.asm:677 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1FEE5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/intro/file_select_menu_loop.asm:677 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1FEE5.
    case 0xC1FEE7: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/intro/file_select_menu_loop.asm:677 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1FEE8: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/intro/file_select_menu_loop.asm:677 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1FEEA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/intro/file_select_menu_loop.asm:677 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1FEEB: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:677 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1FEED: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:677 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1FEEF: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/file_select_menu_loop.asm:678 MOVE_INT @VIRTUAL06, HP_METER_SPEED
    case 0xC1FEF1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/file_select_menu_loop.asm:678 MOVE_INT @VIRTUAL06, HP_METER_SPEED
    case 0xC1FEF3: cpu.execute_instruction<0x8D>(0x009627, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/file_select_menu_loop.asm:678 MOVE_INT @VIRTUAL06, HP_METER_SPEED
    case 0xC1FEF6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/file_select_menu_loop.asm:678 MOVE_INT @VIRTUAL06, HP_METER_SPEED
    case 0xC1FEF8: cpu.execute_instruction<0x8D>(0x009629, 3); return true;
    // src/intro/file_select_menu_loop.asm:679 STX SELECTED_TEXT_SPEED
    case 0xC1FEFB: cpu.execute_instruction<0x8E>(0x009625, 3); return true;
    // src/intro/file_select_menu_loop.asm:680 LDA @LOCAL06ALT
    case 0xC1FEFE: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/intro/file_select_menu_loop.asm:681 CMP #3
    case 0xC1FF00: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/intro/file_select_menu_loop.asm:681 CMP #3
    // Overlapping static entry reached from 0xC1FF00.
    case 0xC1FF02: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/file_select_menu_loop.asm:682 BNE @UNKNOWN60
    case 0xC1FF03: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/intro/file_select_menu_loop.asm:683 LDA #0
    case 0xC1FF05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/file_select_menu_loop.asm:683 LDA #0
    // Overlapping static entry reached from 0xC1FF05.
    case 0xC1FF07: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/intro/file_select_menu_loop.asm:684 BRA @UNKNOWN61
    case 0xC1FF08: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // include/macros.asm:647 STA scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:686 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FF0A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:648 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:686 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FF0C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:649 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:686 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FF0D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:650 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:686 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FF0F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:651 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:686 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FF10: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:652 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:686 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FF12: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:653 ADC scratch
    // Macro caller: src/intro/file_select_menu_loop.asm:686 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FF13: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:654 ASL
    // Macro caller: src/intro/file_select_menu_loop.asm:686 OPTIMIZED_MULT @VIRTUAL04, 30
    case 0xC1FF15: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/file_select_menu_loop.asm:688 STA TEXT_SPEED_BASED_WAIT
    case 0xC1FF16: cpu.execute_instruction<0x8D>(0x00964B, 3); return true;
    // src/intro/file_select_menu_loop.asm:689 STZ UNREAD_7E5DBA
    case 0xC1FF19: cpu.execute_instruction<0x9C>(0x005DBA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:690 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    case 0xC1FF1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002B, 2); else cpu.execute_instruction<0xA9>(0x00DE2B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:690 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    // Overlapping static entry reached from 0xC1FF1C.
    case 0xC1FF1E: cpu.execute_instruction<0xDE>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/file_select_menu_loop.asm:690 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    case 0xC1FF1F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:690 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    case 0xC1FF21: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/file_select_menu_loop.asm:690 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    // Overlapping static entry reached from 0xC1FF21.
    case 0xC1FF23: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/file_select_menu_loop.asm:690 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    case 0xC1FF24: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/intro/file_select_menu_loop.asm:690 DISPLAY_TEXT_PTR MSG_SYS_PRE_GAMESTART
    case 0xC1FF26: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/file_select_menu_loop.asm:691 END_C_FUNCTION
    case 0xC1FF2A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/file_select_menu_loop.asm:691 END_C_FUNCTION
    case 0xC1FF2B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/gas_station.asm (source_named).
bool execute_introduction_gas_station_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/gas_station.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0F33C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/gas_station.asm:8 END_STACK_VARS
    case 0xC0F33E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/gas_station.asm:8 END_STACK_VARS
    case 0xC0F33F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/gas_station.asm:8 END_STACK_VARS
    case 0xC0F340: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000ED, 2); else cpu.execute_instruction<0x69>(0x00FFED, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/gas_station.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F340.
    case 0xC0F342: cpu.execute_instruction<0xFF>(0x7C225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/gas_station.asm:8 END_STACK_VARS
    case 0xC0F343: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/intro/gas_station.asm:9 JSL UNKNOWN_C0927C
    case 0xC0F344: cpu.execute_instruction<0x22>(0xC0927C, 4); return true;
    // src/intro/gas_station.asm:9 JSL UNKNOWN_C0927C
    // Overlapping static entry reached from 0xC0F342.
    case 0xC0F346: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/intro/gas_station.asm:10 JSR GAS_STATION_LOAD
    case 0xC0F348: cpu.execute_instruction<0x20>(0x00F0D2, 3); return true;
    // src/intro/gas_station.asm:11 LDX #11
    case 0xC0F34B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000B, 2); else cpu.execute_instruction<0xA2>(0x00000B, 3); return true;
    // src/intro/gas_station.asm:11 LDX #11
    // Overlapping static entry reached from 0xC0F34B.
    case 0xC0F34D: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/gas_station.asm:12 LDA #1
    case 0xC0F34E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/gas_station.asm:12 LDA #1
    // Overlapping static entry reached from 0xC0F34E.
    case 0xC0F350: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/gas_station.asm:13 JSL FADE_IN
    case 0xC0F351: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/intro/gas_station.asm:14 JSR UNKNOWN_C0F21E
    case 0xC0F355: cpu.execute_instruction<0x20>(0x00F21E, 3); return true;
    // src/intro/gas_station.asm:15 TAY
    case 0xC0F358: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/intro/gas_station.asm:16 STY @LOCAL02
    case 0xC0F359: cpu.execute_instruction<0x84>(0x000011, 2); return true;
    // src/intro/gas_station.asm:17 BEQ @UNKNOWN0
    case 0xC0F35B: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/intro/gas_station.asm:18 LDA #1
    case 0xC0F35D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/gas_station.asm:18 LDA #1
    // Overlapping static entry reached from 0xC0F35D.
    case 0xC0F35F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/intro/gas_station.asm:19 BRA @UNKNOWN5
    case 0xC0F360: cpu.execute_instruction<0x80>(0x00004E, 2); return true;
    // src/intro/gas_station.asm:21 LDX #0
    case 0xC0F362: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/gas_station.asm:21 LDX #0
    // Overlapping static entry reached from 0xC0F362.
    case 0xC0F364: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/intro/gas_station.asm:22 STX @LOCAL01
    case 0xC0F365: cpu.execute_instruction<0x86>(0x00000F, 2); return true;
    // src/intro/gas_station.asm:23 BRA @UNKNOWN3
    case 0xC0F367: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/intro/gas_station.asm:25 LDA PAD_PRESS
    case 0xC0F369: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/intro/gas_station.asm:26 BEQ @UNKNOWN2
    case 0xC0F36C: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/intro/gas_station.asm:27 LDA #1
    case 0xC0F36E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/gas_station.asm:27 LDA #1
    // Overlapping static entry reached from 0xC0F36E.
    case 0xC0F370: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/intro/gas_station.asm:28 BRA @UNKNOWN5
    case 0xC0F371: cpu.execute_instruction<0x80>(0x00003D, 2); return true;
    // src/intro/gas_station.asm:30 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC0F373: cpu.execute_instruction<0x22>(0xC426ED, 4); return true;
    // src/intro/gas_station.asm:31 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0F377: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/intro/gas_station.asm:32 LDX @LOCAL01
    case 0xC0F37B: cpu.execute_instruction<0xA6>(0x00000F, 2); return true;
    // src/intro/gas_station.asm:33 INX
    case 0xC0F37D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/intro/gas_station.asm:34 STX @LOCAL01
    case 0xC0F37E: cpu.execute_instruction<0x86>(0x00000F, 2); return true;
    // src/intro/gas_station.asm:36 CPX #330
    case 0xC0F380: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00004A, 2); else cpu.execute_instruction<0xE0>(0x00014A, 3); return true;
    // src/intro/gas_station.asm:36 CPX #330
    // Overlapping static entry reached from 0xC0F380.
    case 0xC0F382: cpu.execute_instruction<0x01>(0x000090, 2); return true;
    // src/intro/gas_station.asm:37 BCC @UNKNOWN1
    case 0xC0F383: cpu.execute_instruction<0x90>(0x0000E4, 2); return true;
    // src/intro/gas_station.asm:37 BCC @UNKNOWN1
    // Overlapping static entry reached from 0xC0F382.
    case 0xC0F384: cpu.execute_instruction<0xE4>(0x0000E2, 2); return true;
    // src/intro/gas_station.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F385: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/gas_station.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0F384.
    case 0xC0F386: cpu.execute_instruction<0x20>(0x001A9C, 3); return true;
    // src/intro/gas_station.asm:39 STZ TM_MIRROR
    case 0xC0F387: cpu.execute_instruction<0x9C>(0x00001A, 3); return true;
    // src/intro/gas_station.asm:39 STZ TM_MIRROR
    // Overlapping static entry reached from 0xC0F386.
    case 0xC0F389: cpu.execute_instruction<0x00>(0x000064, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/intro/gas_station.asm:40 STZ_BADOPT @LOCAL00
    case 0xC0F38A: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/intro/gas_station.asm:41 LDX #BPP4PALETTE_SIZE * 16
    case 0xC0F38C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/intro/gas_station.asm:41 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC0F38C.
    case 0xC0F38E: cpu.execute_instruction<0x02>(0x0000C2, 2); return true;
    // src/intro/gas_station.asm:42 REP #PROC_FLAGS::ACCUM8
    case 0xC0F38F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/gas_station.asm:43 LDA #.LOWORD(PALETTES)
    case 0xC0F391: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/intro/gas_station.asm:43 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0F391.
    case 0xC0F393: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/intro/gas_station.asm:44 JSL MEMSET16
    case 0xC0F394: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/intro/gas_station.asm:45 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F398: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/gas_station.asm:46 LDA #PALETTE_UPLOAD::FULL
    case 0xC0F39A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/intro/gas_station.asm:47 STA PALETTE_UPLOAD_MODE
    case 0xC0F39C: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/intro/gas_station.asm:47 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0F39A.
    case 0xC0F39D: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/intro/gas_station.asm:48 LDY @LOCAL02
    case 0xC0F39F: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/intro/gas_station.asm:49 BNE @UNKNOWN4
    case 0xC0F3A1: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/intro/gas_station.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC0F3A3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/gas_station.asm:51 LDA #30
    case 0xC0F3A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00001E, 3); return true;
    // src/intro/gas_station.asm:51 LDA #30
    // Overlapping static entry reached from 0xC0F3A5.
    case 0xC0F3A7: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/gas_station.asm:52 JSR UNKNOWN_C0EFE1
    case 0xC0F3A8: cpu.execute_instruction<0x20>(0x00EFE1, 3); return true;
    // src/intro/gas_station.asm:54 LDY @LOCAL02
    case 0xC0F3AB: cpu.execute_instruction<0xA4>(0x000011, 2); return true;
    // src/intro/gas_station.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC0F3AD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/gas_station.asm:56 TYA
    case 0xC0F3AF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/gas_station.asm:58 END_C_FUNCTION
    case 0xC0F3B0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/gas_station.asm:58 END_C_FUNCTION
    case 0xC0F3B1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/gas_station_load.asm (source_named).
bool execute_introduction_gas_station_load_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/gas_station_load.asm:3 BEGIN_C_FUNCTION
    case 0xC0F0D2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/gas_station_load.asm:7 END_STACK_VARS
    case 0xC0F0D4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/gas_station_load.asm:7 END_STACK_VARS
    case 0xC0F0D5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/gas_station_load.asm:7 END_STACK_VARS
    case 0xC0F0D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/gas_station_load.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F0D6.
    case 0xC0F0D8: cpu.execute_instruction<0xFF>(0x379C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/gas_station_load.asm:7 END_STACK_VARS
    case 0xC0F0D9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/intro/gas_station_load.asm:8 STZ BG2_Y_POS
    case 0xC0F0DA: cpu.execute_instruction<0x9C>(0x000037, 3); return true;
    // src/intro/gas_station_load.asm:8 STZ BG2_Y_POS
    // Overlapping static entry reached from 0xC0F0D8.
    case 0xC0F0DC: cpu.execute_instruction<0x00>(0x00009C, 2); return true;
    // src/intro/gas_station_load.asm:9 STZ BG2_X_POS
    case 0xC0F0DD: cpu.execute_instruction<0x9C>(0x000035, 3); return true;
    // src/intro/gas_station_load.asm:10 STZ BG1_Y_POS
    case 0xC0F0E0: cpu.execute_instruction<0x9C>(0x000033, 3); return true;
    // src/intro/gas_station_load.asm:11 STZ BG1_X_POS
    case 0xC0F0E3: cpu.execute_instruction<0x9C>(0x000031, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:12 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0F0E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:12 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F0E6.
    case 0xC0F0E8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:12 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0F0E9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:12 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0F0EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:12 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F0EB.
    case 0xC0F0ED: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/gas_station_load.asm:12 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0F0EE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    case 0xC0F0F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000033, 2); else cpu.execute_instruction<0xA9>(0x005B33, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0F0F0.
    case 0xC0F0F2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    case 0xC0F0F3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    case 0xC0F0F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0F0F5.
    case 0xC0F0F7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/gas_station_load.asm:13 LOADPTR GAS_STATION_GRAPHICS, @LOCAL00
    case 0xC0F0F8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/gas_station_load.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F0FA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/gas_station_load.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F0FC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/gas_station_load.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F0FE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/gas_station_load.asm:14 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F100: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/gas_station_load.asm:15 JSL DECOMP
    case 0xC0F102: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F106: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F108: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F10A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F10C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F10E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    // Overlapping static entry reached from 0xC0F10E.
    case 0xC0F110: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F111: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x00C000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    // Overlapping static entry reached from 0xC0F111.
    case 0xC0F113: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F114: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    // Overlapping static entry reached from 0xC0F113.
    case 0xC0F115: cpu.execute_instruction<0x20>(0x002298, 3); return true;
    // include/macros.asm:1161 TYA
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F116: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    case 0xC0F117: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    // Overlapping static entry reached from 0xC0F115.
    case 0xC0F118: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/gas_station_load.asm:16 COPY_TO_VRAM1P @VIRTUAL06, $0000, $C000, 0
    // Overlapping static entry reached from 0xC0F118.
    case 0xC0F11A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00D3A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    case 0xC0F11B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D3, 2); else cpu.execute_instruction<0xA9>(0x0055D3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0F11A.
    case 0xC0F11C: cpu.execute_instruction<0xD3>(0x000055, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0F11B.
    case 0xC0F11D: cpu.execute_instruction<0x55>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    case 0xC0F11E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0F11D.
    case 0xC0F11F: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    case 0xC0F120: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0F120.
    case 0xC0F122: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/gas_station_load.asm:18 LOADPTR GAS_STATION_ARRANGEMENT, @LOCAL00
    case 0xC0F123: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/gas_station_load.asm:19 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F125: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/gas_station_load.asm:19 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F127: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/gas_station_load.asm:19 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F129: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/gas_station_load.asm:19 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F12B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/gas_station_load.asm:20 JSL DECOMP
    case 0xC0F12D: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F131: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F133: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F135: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F137: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F139: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007800, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    // Overlapping static entry reached from 0xC0F139.
    case 0xC0F13B: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F13C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    // Overlapping static entry reached from 0xC0F13C.
    case 0xC0F13E: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F13F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F141: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    case 0xC0F143: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    // Overlapping static entry reached from 0xC0F141.
    case 0xC0F144: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/gas_station_load.asm:21 COPY_TO_VRAM1P @VIRTUAL06, $7800, $800, 0
    // Overlapping static entry reached from 0xC0F144.
    case 0xC0F146: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00B7A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F147: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B7, 2); else cpu.execute_instruction<0xA9>(0x00A9B7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F146.
    case 0xC0F148: cpu.execute_instruction<0xB7>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F147.
    case 0xC0F149: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000085, 2); else cpu.execute_instruction<0xA9>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F14A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F149.
    case 0xC0F14B: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F14C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F14C.
    case 0xC0F14E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/gas_station_load.asm:23 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F14F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F151: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    // Overlapping static entry reached from 0xC0F151.
    case 0xC0F153: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F154: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F156: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F157: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F159: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F15A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/gas_station_load.asm:24 PROMOTENEARPTR .LOWORD(PALETTES), @VIRTUAL06
    case 0xC0F15C: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/gas_station_load.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC0F15E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/gas_station_load.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F160: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/gas_station_load.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F162: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/gas_station_load.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F164: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/gas_station_load.asm:26 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F166: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/gas_station_load.asm:27 JSL DECOMP
    case 0xC0F168: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/intro/gas_station_load.asm:28 JSL UNKNOWN_C4A377
    case 0xC0F16C: cpu.execute_instruction<0x22>(0xC4A377, 4); return true;
    // src/intro/gas_station_load.asm:29 JSL UNKNOWN_C496F9
    case 0xC0F170: cpu.execute_instruction<0x22>(0xC496F9, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:30 LOADPTR BUFFER + BPP4PALETTE_SIZE * 2, @LOCAL00
    case 0xC0F174: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:30 LOADPTR BUFFER + BPP4PALETTE_SIZE * 2, @LOCAL00
    // Overlapping static entry reached from 0xC0F174.
    case 0xC0F176: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/gas_station_load.asm:30 LOADPTR BUFFER + BPP4PALETTE_SIZE * 2, @LOCAL00
    case 0xC0F177: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:30 LOADPTR BUFFER + BPP4PALETTE_SIZE * 2, @LOCAL00
    case 0xC0F179: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/gas_station_load.asm:30 LOADPTR BUFFER + BPP4PALETTE_SIZE * 2, @LOCAL00
    // Overlapping static entry reached from 0xC0F179.
    case 0xC0F17B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/gas_station_load.asm:30 LOADPTR BUFFER + BPP4PALETTE_SIZE * 2, @LOCAL00
    case 0xC0F17C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/gas_station_load.asm:31 LDX #BPP4PALETTE_SIZE
    case 0xC0F17E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/intro/gas_station_load.asm:31 LDX #BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC0F17E.
    case 0xC0F180: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/intro/gas_station_load.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F181: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/gas_station_load.asm:33 LDA #0
    case 0xC0F183: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/intro/gas_station_load.asm:34 JSL MEMSET24
    case 0xC0F185: cpu.execute_instruction<0x22>(0xC08F15, 4); return true;
    // src/intro/gas_station_load.asm:34 JSL MEMSET24
    // Overlapping static entry reached from 0xC0F183.
    case 0xC0F186: cpu.execute_instruction<0x15>(0x00008F, 2); return true;
    // src/intro/gas_station_load.asm:34 JSL MEMSET24
    // Overlapping static entry reached from 0xC0F186.
    case 0xC0F188: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/intro/gas_station_load.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F189: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/gas_station_load.asm:35 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0F188.
    case 0xC0F18A: cpu.execute_instruction<0x20>(0x000E64, 3); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/intro/gas_station_load.asm:36 STZ_BADOPT @LOCAL00
    case 0xC0F18B: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/intro/gas_station_load.asm:37 LDX #BPP4PALETTE_SIZE * 2
    case 0xC0F18D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // src/intro/gas_station_load.asm:37 LDX #BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC0F18D.
    case 0xC0F18F: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/intro/gas_station_load.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC0F190: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/gas_station_load.asm:39 LDA #.LOWORD(PALETTES)
    case 0xC0F192: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/intro/gas_station_load.asm:39 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC0F192.
    case 0xC0F194: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/intro/gas_station_load.asm:40 JSL MEMSET16
    case 0xC0F195: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/intro/gas_station_load.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F199: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/intro/gas_station_load.asm:42 STZ_BADOPT @LOCAL00
    case 0xC0F19B: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/intro/gas_station_load.asm:43 LDX #13 * BPP4PALETTE_SIZE
    case 0xC0F19D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000A0, 2); else cpu.execute_instruction<0xA2>(0x0001A0, 3); return true;
    // src/intro/gas_station_load.asm:43 LDX #13 * BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC0F19D.
    case 0xC0F19F: cpu.execute_instruction<0x01>(0x0000C2, 2); return true;
    // src/intro/gas_station_load.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC0F1A0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/gas_station_load.asm:44 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0F19F.
    case 0xC0F1A1: cpu.execute_instruction<0x20>(0x0060A9, 3); return true;
    // src/intro/gas_station_load.asm:45 LDA #.LOWORD(PALETTES) + 3 * BPP4PALETTE_SIZE
    case 0xC0F1A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000060, 2); else cpu.execute_instruction<0xA9>(0x000260, 3); return true;
    // src/intro/gas_station_load.asm:45 LDA #.LOWORD(PALETTES) + 3 * BPP4PALETTE_SIZE
    // Overlapping static entry reached from 0xC0F1A2.
    case 0xC0F1A4: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/intro/gas_station_load.asm:46 JSL MEMSET16
    case 0xC0F1A5: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/intro/gas_station_load.asm:47 LDX #$FFFF
    case 0xC0F1A9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/intro/gas_station_load.asm:47 LDX #$FFFF
    // Overlapping static entry reached from 0xC0F1A9.
    case 0xC0F1AB: cpu.execute_instruction<0xFF>(0x01E0A9, 4); return true;
    // src/intro/gas_station_load.asm:48 LDA #RGBVAL 0,15,0
    case 0xC0F1AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0001E0, 3); return true;
    // src/intro/gas_station_load.asm:48 LDA #RGBVAL 0,15,0
    // Overlapping static entry reached from 0xC0F1AC.
    case 0xC0F1AE: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/intro/gas_station_load.asm:49 JSL UNKNOWN_C496E7
    case 0xC0F1AF: cpu.execute_instruction<0x22>(0xC496E7, 4); return true;
    // src/intro/gas_station_load.asm:49 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC0F1AE.
    case 0xC0F1B0: cpu.execute_instruction<0xE7>(0x000096, 2); return true;
    // src/intro/gas_station_load.asm:49 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC0F1B0.
    case 0xC0F1B2: cpu.execute_instruction<0xC4>(0x0000E2, 2); return true;
    // src/intro/gas_station_load.asm:50 SEP #PROC_FLAGS::ACCUM8
    case 0xC0F1B3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/gas_station_load.asm:50 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0F1B2.
    case 0xC0F1B4: cpu.execute_instruction<0x20>(0x0001A9, 3); return true;
    // src/intro/gas_station_load.asm:51 LDA #$01
    case 0xC0F1B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/intro/gas_station_load.asm:52 STA TM_MIRROR
    case 0xC0F1B7: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/intro/gas_station_load.asm:52 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0F1B5.
    case 0xC0F1B8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/intro/gas_station_load.asm:52 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0F1B8.
    case 0xC0F1B9: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/gas_station_load.asm:53 LDA #$02
    case 0xC0F1BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x008D02, 3); return true;
    // src/intro/gas_station_load.asm:54 STA TD_MIRROR
    case 0xC0F1BC: cpu.execute_instruction<0x8D>(0x00001B, 3); return true;
    // src/intro/gas_station_load.asm:54 STA TD_MIRROR
    // Overlapping static entry reached from 0xC0F1BA.
    case 0xC0F1BD: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/intro/gas_station_load.asm:54 STA TD_MIRROR
    // Overlapping static entry reached from 0xC0F1BD.
    case 0xC0F1BE: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/intro/gas_station_load.asm:55 STA f:CGWSEL
    case 0xC0F1BF: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/intro/gas_station_load.asm:56 LDA #$03
    case 0xC0F1C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x008F03, 3); return true;
    // src/intro/gas_station_load.asm:57 STA f:CGADSUB
    case 0xC0F1C5: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/intro/gas_station_load.asm:57 STA f:CGADSUB
    // Overlapping static entry reached from 0xC0F1C3.
    case 0xC0F1C6: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/intro/gas_station_load.asm:57 STA f:CGADSUB
    // Overlapping static entry reached from 0xC0F1C6.
    case 0xC0F1C8: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/gas_station_load.asm:58 LDA #PALETTE_UPLOAD::FULL
    case 0xC0F1C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/intro/gas_station_load.asm:59 STA PALETTE_UPLOAD_MODE
    case 0xC0F1CB: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/intro/gas_station_load.asm:59 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0F1C9.
    case 0xC0F1CC: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/intro/gas_station_load.asm:60 REP #PROC_FLAGS::ACCUM8
    case 0xC0F1CE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/gas_station_load.asm:61 END_C_FUNCTION
    case 0xC0F1D0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/gas_station_load.asm:61 END_C_FUNCTION
    case 0xC0F1D1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/init_intro.asm (source_named).
bool execute_introduction_init_intro_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/init_intro.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4DAD2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/init_intro.asm:9 END_STACK_VARS
    case 0xC4DAD4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/init_intro.asm:9 END_STACK_VARS
    case 0xC4DAD5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/init_intro.asm:9 END_STACK_VARS
    case 0xC4DAD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/init_intro.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4DAD6.
    case 0xC4DAD8: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/init_intro.asm:9 END_STACK_VARS
    case 0xC4DAD9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/intro/init_intro.asm:16 LDA #0
    case 0xC4DADA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/init_intro.asm:16 LDA #0
    // Overlapping static entry reached from 0xC4DADA.
    case 0xC4DADC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/init_intro.asm:17 STA @VIRTUAL02
    case 0xC4DADD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/init_intro.asm:19 LDA #1
    case 0xC4DADF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/init_intro.asm:19 LDA #1
    // Overlapping static entry reached from 0xC4DADF.
    case 0xC4DAE1: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/intro/init_intro.asm:20 STA DISABLED_TRANSITIONS
    case 0xC4DAE2: cpu.execute_instruction<0x8D>(0x00B4B6, 3); return true;
    // src/intro/init_intro.asm:21 LDA #2
    case 0xC4DAE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/intro/init_intro.asm:21 LDA #2
    // Overlapping static entry reached from 0xC4DAE5.
    case 0xC4DAE7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:22 JSL UNKNOWN_C0AC0C
    case 0xC4DAE8: cpu.execute_instruction<0x22>(0xC0AC0C, 4); return true;
    // src/intro/init_intro.asm:23 JSL UNKNOWN_C0927C
    case 0xC4DAEC: cpu.execute_instruction<0x22>(0xC0927C, 4); return true;
    // src/intro/init_intro.asm:24 JSL UNKNOWN_C200D9
    case 0xC4DAF0: cpu.execute_instruction<0x22>(0xC200D9, 4); return true;
    // src/intro/init_intro.asm:25 JSL UNKNOWN_C432B1
    case 0xC4DAF4: cpu.execute_instruction<0x22>(0xC432B1, 4); return true;
    // src/intro/init_intro.asm:26 LDA #1
    case 0xC4DAF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/init_intro.asm:26 LDA #1
    // Overlapping static entry reached from 0xC4DAF8.
    case 0xC4DAFA: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/intro/init_intro.asm:27 STA DISABLE_MUSIC_CHANGES
    case 0xC4DAFB: cpu.execute_instruction<0x8D>(0x005DD8, 3); return true;
    // src/intro/init_intro.asm:29 STZ BG3_X_POS
    case 0xC4DAFE: cpu.execute_instruction<0x9C>(0x000039, 3); return true;
    // src/intro/init_intro.asm:30 STZ BG3_Y_POS
    case 0xC4DB01: cpu.execute_instruction<0x9C>(0x00003B, 3); return true;
    // src/intro/init_intro.asm:31 STZ BG2_Y_POS
    case 0xC4DB04: cpu.execute_instruction<0x9C>(0x000037, 3); return true;
    // src/intro/init_intro.asm:32 STZ BG2_X_POS
    case 0xC4DB07: cpu.execute_instruction<0x9C>(0x000035, 3); return true;
    // src/intro/init_intro.asm:33 STZ BG1_Y_POS
    case 0xC4DB0A: cpu.execute_instruction<0x9C>(0x000033, 3); return true;
    // src/intro/init_intro.asm:34 STZ BG1_X_POS
    case 0xC4DB0D: cpu.execute_instruction<0x9C>(0x000031, 3); return true;
    // src/intro/init_intro.asm:35 JSL UPDATE_SCREEN
    case 0xC4DB10: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/intro/init_intro.asm:36 STZ BG3_X_POS
    case 0xC4DB14: cpu.execute_instruction<0x9C>(0x000039, 3); return true;
    // src/intro/init_intro.asm:37 STZ BG3_Y_POS
    case 0xC4DB17: cpu.execute_instruction<0x9C>(0x00003B, 3); return true;
    // src/intro/init_intro.asm:38 STZ BG2_Y_POS
    case 0xC4DB1A: cpu.execute_instruction<0x9C>(0x000037, 3); return true;
    // src/intro/init_intro.asm:39 STZ BG2_X_POS
    case 0xC4DB1D: cpu.execute_instruction<0x9C>(0x000035, 3); return true;
    // src/intro/init_intro.asm:40 STZ BG1_Y_POS
    case 0xC4DB20: cpu.execute_instruction<0x9C>(0x000033, 3); return true;
    // src/intro/init_intro.asm:41 STZ BG1_X_POS
    case 0xC4DB23: cpu.execute_instruction<0x9C>(0x000031, 3); return true;
    // src/intro/init_intro.asm:42 JSL UPDATE_SCREEN
    case 0xC4DB26: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/intro/init_intro.asm:49 LDA @VIRTUAL02
    case 0xC4DB2A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/init_intro.asm:51 BEQ @UNKNOWN11
    case 0xC4DB2C: cpu.execute_instruction<0xF0>(0x000053, 2); return true;
    // src/intro/init_intro.asm:52 CMP #1
    case 0xC4DB2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/intro/init_intro.asm:52 CMP #1
    // Overlapping static entry reached from 0xC4DB2E.
    case 0xC4DB30: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:53 _BEQL @UNKNOWN14
    case 0xC4DB31: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:53 _BEQL @UNKNOWN14
    case 0xC4DB33: cpu.execute_instruction<0x4C>(0x00DBCA, 3); return true;
    // src/intro/init_intro.asm:54 CMP #2
    case 0xC4DB36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/intro/init_intro.asm:54 CMP #2
    // Overlapping static entry reached from 0xC4DB36.
    case 0xC4DB38: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:55 _BEQL @UNKNOWN17
    case 0xC4DB39: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:55 _BEQL @UNKNOWN17
    case 0xC4DB3B: cpu.execute_instruction<0x4C>(0x00DC2D, 3); return true;
    // src/intro/init_intro.asm:56 CMP #3
    case 0xC4DB3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/intro/init_intro.asm:56 CMP #3
    // Overlapping static entry reached from 0xC4DB3E.
    case 0xC4DB40: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:57 _BEQL @UNKNOWN18
    case 0xC4DB41: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:57 _BEQL @UNKNOWN18
    case 0xC4DB43: cpu.execute_instruction<0x4C>(0x00DC40, 3); return true;
    // src/intro/init_intro.asm:58 CMP #4
    case 0xC4DB46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/intro/init_intro.asm:58 CMP #4
    // Overlapping static entry reached from 0xC4DB46.
    case 0xC4DB48: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:59 _BEQL @UNKNOWN19
    case 0xC4DB49: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:59 _BEQL @UNKNOWN19
    case 0xC4DB4B: cpu.execute_instruction<0x4C>(0x00DC53, 3); return true;
    // src/intro/init_intro.asm:60 CMP #5
    case 0xC4DB4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/intro/init_intro.asm:60 CMP #5
    // Overlapping static entry reached from 0xC4DB4E.
    case 0xC4DB50: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:61 _BEQL @UNKNOWN20
    case 0xC4DB51: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:61 _BEQL @UNKNOWN20
    case 0xC4DB53: cpu.execute_instruction<0x4C>(0x00DC5F, 3); return true;
    // src/intro/init_intro.asm:62 CMP #6
    case 0xC4DB56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/intro/init_intro.asm:62 CMP #6
    // Overlapping static entry reached from 0xC4DB56.
    case 0xC4DB58: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:63 BEQL @UNKNOWN21
    case 0xC4DB59: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:63 BEQL @UNKNOWN21
    case 0xC4DB5B: cpu.execute_instruction<0x4C>(0x00DC6B, 3); return true;
    // src/intro/init_intro.asm:64 CMP #7
    case 0xC4DB5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/intro/init_intro.asm:64 CMP #7
    // Overlapping static entry reached from 0xC4DB5E.
    case 0xC4DB60: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:65 BEQL @UNKNOWN22
    case 0xC4DB61: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:65 BEQL @UNKNOWN22
    case 0xC4DB63: cpu.execute_instruction<0x4C>(0x00DC77, 3); return true;
    // src/intro/init_intro.asm:66 CMP #8
    case 0xC4DB66: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/intro/init_intro.asm:66 CMP #8
    // Overlapping static entry reached from 0xC4DB66.
    case 0xC4DB68: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:67 BEQL @UNKNOWN23
    case 0xC4DB69: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:67 BEQL @UNKNOWN23
    case 0xC4DB6B: cpu.execute_instruction<0x4C>(0x00DC83, 3); return true;
    // src/intro/init_intro.asm:68 CMP #9
    case 0xC4DB6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/intro/init_intro.asm:68 CMP #9
    // Overlapping static entry reached from 0xC4DB6E.
    case 0xC4DB70: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:69 BEQL @UNKNOWN24
    case 0xC4DB71: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:69 BEQL @UNKNOWN24
    case 0xC4DB73: cpu.execute_instruction<0x4C>(0x00DC8F, 3); return true;
    // src/intro/init_intro.asm:70 CMP #10
    case 0xC4DB76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/intro/init_intro.asm:70 CMP #10
    // Overlapping static entry reached from 0xC4DB76.
    case 0xC4DB78: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:71 BEQL @UNKNOWN25
    case 0xC4DB79: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:71 BEQL @UNKNOWN25
    case 0xC4DB7B: cpu.execute_instruction<0x4C>(0x00DC9B, 3); return true;
    // src/intro/init_intro.asm:72 JMP @UNKNOWN26
    case 0xC4DB7E: cpu.execute_instruction<0x4C>(0x00DCA7, 3); return true;
    // src/intro/init_intro.asm:74 JSL LOGO_SCREEN
    case 0xC4DB81: cpu.execute_instruction<0x22>(0xC0F009, 4); return true;
    // src/intro/init_intro.asm:76 CMP #0
    case 0xC4DB85: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/init_intro.asm:76 CMP #0
    // Overlapping static entry reached from 0xC4DB85.
    case 0xC4DB87: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/init_intro.asm:77 BEQ @UNKNOWN13
    case 0xC4DB88: cpu.execute_instruction<0xF0>(0x000038, 2); return true;
    // src/intro/init_intro.asm:78 LDA #2
    case 0xC4DB8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/intro/init_intro.asm:78 LDA #2
    // Overlapping static entry reached from 0xC4DB8A.
    case 0xC4DB8C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:79 JSL UNKNOWN_C0AC0C
    case 0xC4DB8D: cpu.execute_instruction<0x22>(0xC0AC0C, 4); return true;
    // src/intro/init_intro.asm:80 LDA INIDISP_MIRROR
    case 0xC4DB91: cpu.execute_instruction<0xAD>(0x00000D, 3); return true;
    // src/intro/init_intro.asm:81 AND #$00FF
    case 0xC4DB94: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/init_intro.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC4DB94.
    case 0xC4DB96: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/intro/init_intro.asm:82 CMP #$80
    case 0xC4DB97: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000080, 3); return true;
    // src/intro/init_intro.asm:82 CMP #$80
    // Overlapping static entry reached from 0xC4DB97.
    case 0xC4DB99: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/init_intro.asm:83 BEQ @UNKNOWN12
    case 0xC4DB9A: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/intro/init_intro.asm:84 LDY #0
    case 0xC4DB9C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/init_intro.asm:84 LDY #0
    // Overlapping static entry reached from 0xC4DB9C.
    case 0xC4DB9E: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/init_intro.asm:85 LDX #1
    case 0xC4DB9F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/init_intro.asm:85 LDX #1
    // Overlapping static entry reached from 0xC4DB9F.
    case 0xC4DBA1: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/init_intro.asm:86 LDA #4
    case 0xC4DBA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/intro/init_intro.asm:86 LDA #4
    // Overlapping static entry reached from 0xC4DBA2.
    case 0xC4DBA4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:87 JSL FADE_OUT_WITH_MOSAIC
    case 0xC4DBA5: cpu.execute_instruction<0x22>(0xC08814, 4); return true;
    // src/intro/init_intro.asm:89 LDA #MUSIC::TITLE_SCREEN
    case 0xC4DBA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AF, 2); else cpu.execute_instruction<0xA9>(0x0000AF, 3); return true;
    // src/intro/init_intro.asm:89 LDA #MUSIC::TITLE_SCREEN
    // Overlapping static entry reached from 0xC4DBA9.
    case 0xC4DBAB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:90 JSL CHANGE_MUSIC
    case 0xC4DBAC: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/intro/init_intro.asm:91 LDA #1
    case 0xC4DBB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/init_intro.asm:91 LDA #1
    // Overlapping static entry reached from 0xC4DBB0.
    case 0xC4DBB2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:92 JSL SHOW_TITLE_SCREEN
    case 0xC4DBB3: cpu.execute_instruction<0x22>(0xC3F3C5, 4); return true;
    // src/intro/init_intro.asm:93 TAX
    case 0xC4DBB7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/init_intro.asm:94 STX @LOCAL00
    case 0xC4DBB8: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/init_intro.asm:95 LDA #2
    case 0xC4DBBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/intro/init_intro.asm:95 LDA #2
    // Overlapping static entry reached from 0xC4DBBA.
    case 0xC4DBBC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/init_intro.asm:96 STA @VIRTUAL02
    case 0xC4DBBD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/init_intro.asm:97 JMP @UNKNOWN27
    case 0xC4DBBF: cpu.execute_instruction<0x4C>(0x00DCAC, 3); return true;
    // src/intro/init_intro.asm:99 LDX #0
    case 0xC4DBC2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/init_intro.asm:99 LDX #0
    // Overlapping static entry reached from 0xC4DBC2.
    case 0xC4DBC4: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/intro/init_intro.asm:103 STX @LOCAL00
    case 0xC4DBC5: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/init_intro.asm:104 JMP @UNKNOWN27
    case 0xC4DBC7: cpu.execute_instruction<0x4C>(0x00DCAC, 3); return true;
    // src/intro/init_intro.asm:106 LDA #MUSIC::GAS_STATION
    case 0xC4DBCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/init_intro.asm:106 LDA #MUSIC::GAS_STATION
    // Overlapping static entry reached from 0xC4DBCA.
    case 0xC4DBCC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:107 JSL CHANGE_MUSIC
    case 0xC4DBCD: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/intro/init_intro.asm:108 JSL GAS_STATION
    case 0xC4DBD1: cpu.execute_instruction<0x22>(0xC0F33C, 4); return true;
    // src/intro/init_intro.asm:110 CMP #0
    case 0xC4DBD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/init_intro.asm:110 CMP #0
    // Overlapping static entry reached from 0xC4DBD5.
    case 0xC4DBD7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/init_intro.asm:111 BEQ @UNKNOWN16
    case 0xC4DBD8: cpu.execute_instruction<0xF0>(0x00004B, 2); return true;
    // src/intro/init_intro.asm:112 LDA #2
    case 0xC4DBDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/intro/init_intro.asm:112 LDA #2
    // Overlapping static entry reached from 0xC4DBDA.
    case 0xC4DBDC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:113 JSL UNKNOWN_C0AC0C
    case 0xC4DBDD: cpu.execute_instruction<0x22>(0xC0AC0C, 4); return true;
    // src/intro/init_intro.asm:114 LDA INIDISP_MIRROR
    case 0xC4DBE1: cpu.execute_instruction<0xAD>(0x00000D, 3); return true;
    // src/intro/init_intro.asm:115 AND #$00FF
    case 0xC4DBE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/init_intro.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC4DBE4.
    case 0xC4DBE6: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/intro/init_intro.asm:116 CMP #$80
    case 0xC4DBE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000080, 3); return true;
    // src/intro/init_intro.asm:116 CMP #$80
    // Overlapping static entry reached from 0xC4DBE7.
    case 0xC4DBE9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/init_intro.asm:117 BEQ @UNKNOWN15
    case 0xC4DBEA: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/intro/init_intro.asm:118 LDY #0
    case 0xC4DBEC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/init_intro.asm:118 LDY #0
    // Overlapping static entry reached from 0xC4DBEC.
    case 0xC4DBEE: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/init_intro.asm:119 LDX #1
    case 0xC4DBEF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/init_intro.asm:119 LDX #1
    // Overlapping static entry reached from 0xC4DBEF.
    case 0xC4DBF1: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/init_intro.asm:120 LDA #4
    case 0xC4DBF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/intro/init_intro.asm:120 LDA #4
    // Overlapping static entry reached from 0xC4DBF2.
    case 0xC4DBF4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:121 JSL FADE_OUT_WITH_MOSAIC
    case 0xC4DBF5: cpu.execute_instruction<0x22>(0xC08814, 4); return true;
    // src/intro/init_intro.asm:123 SEP #PROC_FLAGS::ACCUM8
    case 0xC4DBF9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/init_intro.asm:124 LDA #0
    case 0xC4DBFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/intro/init_intro.asm:125 STA f:CGADSUB
    case 0xC4DBFD: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/intro/init_intro.asm:125 STA f:CGADSUB
    // Overlapping static entry reached from 0xC4DBFB.
    case 0xC4DBFE: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/intro/init_intro.asm:125 STA f:CGADSUB
    // Overlapping static entry reached from 0xC4DBFE.
    case 0xC4DC00: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/intro/init_intro.asm:126 STA f:CGWSEL
    case 0xC4DC01: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/intro/init_intro.asm:127 LDA #1
    case 0xC4DC05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/intro/init_intro.asm:128 STA TM_MIRROR
    case 0xC4DC07: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/intro/init_intro.asm:128 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4DC05.
    case 0xC4DC08: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/intro/init_intro.asm:128 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4DC08.
    case 0xC4DC09: cpu.execute_instruction<0x00>(0x00009C, 2); return true;
    // src/intro/init_intro.asm:129 STZ TD_MIRROR
    case 0xC4DC0A: cpu.execute_instruction<0x9C>(0x00001B, 3); return true;
    // src/intro/init_intro.asm:130 REP #PROC_FLAGS::ACCUM8
    case 0xC4DC0D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/init_intro.asm:131 LDA #MUSIC::TITLE_SCREEN
    case 0xC4DC0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AF, 2); else cpu.execute_instruction<0xA9>(0x0000AF, 3); return true;
    // src/intro/init_intro.asm:131 LDA #MUSIC::TITLE_SCREEN
    // Overlapping static entry reached from 0xC4DC0F.
    case 0xC4DC11: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:132 JSL CHANGE_MUSIC
    case 0xC4DC12: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/intro/init_intro.asm:133 LDA #1
    case 0xC4DC16: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/init_intro.asm:133 LDA #1
    // Overlapping static entry reached from 0xC4DC16.
    case 0xC4DC18: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:134 JSL SHOW_TITLE_SCREEN
    case 0xC4DC19: cpu.execute_instruction<0x22>(0xC3F3C5, 4); return true;
    // src/intro/init_intro.asm:135 TAX
    case 0xC4DC1D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/init_intro.asm:136 STX @LOCAL00
    case 0xC4DC1E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/init_intro.asm:137 INC @VIRTUAL02
    case 0xC4DC20: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/intro/init_intro.asm:138 JMP @UNKNOWN27
    case 0xC4DC22: cpu.execute_instruction<0x4C>(0x00DCAC, 3); return true;
    // src/intro/init_intro.asm:140 LDX #0
    case 0xC4DC25: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/init_intro.asm:140 LDX #0
    // Overlapping static entry reached from 0xC4DC25.
    case 0xC4DC27: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/intro/init_intro.asm:144 STX @LOCAL00
    case 0xC4DC28: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/init_intro.asm:145 JMP @UNKNOWN27
    case 0xC4DC2A: cpu.execute_instruction<0x4C>(0x00DCAC, 3); return true;
    // src/intro/init_intro.asm:147 LDA #MUSIC::TITLE_SCREEN
    case 0xC4DC2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AF, 2); else cpu.execute_instruction<0xA9>(0x0000AF, 3); return true;
    // src/intro/init_intro.asm:147 LDA #MUSIC::TITLE_SCREEN
    // Overlapping static entry reached from 0xC4DC2D.
    case 0xC4DC2F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:148 JSL CHANGE_MUSIC
    case 0xC4DC30: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/intro/init_intro.asm:149 LDA #0
    case 0xC4DC34: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/init_intro.asm:149 LDA #0
    // Overlapping static entry reached from 0xC4DC34.
    case 0xC4DC36: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:150 JSL SHOW_TITLE_SCREEN
    case 0xC4DC37: cpu.execute_instruction<0x22>(0xC3F3C5, 4); return true;
    // src/intro/init_intro.asm:151 TAX
    case 0xC4DC3B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/init_intro.asm:152 STX @LOCAL00
    case 0xC4DC3C: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/init_intro.asm:153 BRA @UNKNOWN27
    case 0xC4DC3E: cpu.execute_instruction<0x80>(0x00006C, 2); return true;
    // src/intro/init_intro.asm:155 LDA #MUSIC::ATTRACT_MODE
    case 0xC4DC40: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009D, 2); else cpu.execute_instruction<0xA9>(0x00009D, 3); return true;
    // src/intro/init_intro.asm:155 LDA #MUSIC::ATTRACT_MODE
    // Overlapping static entry reached from 0xC4DC40.
    case 0xC4DC42: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:156 JSL CHANGE_MUSIC
    case 0xC4DC43: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/intro/init_intro.asm:157 LDA #0
    case 0xC4DC47: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/init_intro.asm:157 LDA #0
    // Overlapping static entry reached from 0xC4DC47.
    case 0xC4DC49: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:158 JSL UNKNOWN_C4D989
    case 0xC4DC4A: cpu.execute_instruction<0x22>(0xC4D989, 4); return true;
    // src/intro/init_intro.asm:159 TAX
    case 0xC4DC4E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/init_intro.asm:160 STX @LOCAL00
    case 0xC4DC4F: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/init_intro.asm:161 BRA @UNKNOWN27
    case 0xC4DC51: cpu.execute_instruction<0x80>(0x000059, 2); return true;
    // src/intro/init_intro.asm:163 LDA #2
    case 0xC4DC53: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/intro/init_intro.asm:163 LDA #2
    // Overlapping static entry reached from 0xC4DC53.
    case 0xC4DC55: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:164 JSL UNKNOWN_C4D989
    case 0xC4DC56: cpu.execute_instruction<0x22>(0xC4D989, 4); return true;
    // src/intro/init_intro.asm:165 TAX
    case 0xC4DC5A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/init_intro.asm:166 STX @LOCAL00
    case 0xC4DC5B: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/init_intro.asm:167 BRA @UNKNOWN27
    case 0xC4DC5D: cpu.execute_instruction<0x80>(0x00004D, 2); return true;
    // src/intro/init_intro.asm:169 LDA #3
    case 0xC4DC5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/intro/init_intro.asm:169 LDA #3
    // Overlapping static entry reached from 0xC4DC5F.
    case 0xC4DC61: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:170 JSL UNKNOWN_C4D989
    case 0xC4DC62: cpu.execute_instruction<0x22>(0xC4D989, 4); return true;
    // src/intro/init_intro.asm:171 TAX
    case 0xC4DC66: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/init_intro.asm:172 STX @LOCAL00
    case 0xC4DC67: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/init_intro.asm:173 BRA @UNKNOWN27
    case 0xC4DC69: cpu.execute_instruction<0x80>(0x000041, 2); return true;
    // src/intro/init_intro.asm:175 LDA #4
    case 0xC4DC6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/intro/init_intro.asm:175 LDA #4
    // Overlapping static entry reached from 0xC4DC6B.
    case 0xC4DC6D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:176 JSL UNKNOWN_C4D989
    case 0xC4DC6E: cpu.execute_instruction<0x22>(0xC4D989, 4); return true;
    // src/intro/init_intro.asm:177 TAX
    case 0xC4DC72: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/init_intro.asm:178 STX @LOCAL00
    case 0xC4DC73: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/init_intro.asm:179 BRA @UNKNOWN27
    case 0xC4DC75: cpu.execute_instruction<0x80>(0x000035, 2); return true;
    // src/intro/init_intro.asm:181 LDA #5
    case 0xC4DC77: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/intro/init_intro.asm:181 LDA #5
    // Overlapping static entry reached from 0xC4DC77.
    case 0xC4DC79: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:182 JSL UNKNOWN_C4D989
    case 0xC4DC7A: cpu.execute_instruction<0x22>(0xC4D989, 4); return true;
    // src/intro/init_intro.asm:183 TAX
    case 0xC4DC7E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/init_intro.asm:184 STX @LOCAL00
    case 0xC4DC7F: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/init_intro.asm:185 BRA @UNKNOWN27
    case 0xC4DC81: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/intro/init_intro.asm:187 LDA #6
    case 0xC4DC83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/intro/init_intro.asm:187 LDA #6
    // Overlapping static entry reached from 0xC4DC83.
    case 0xC4DC85: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:188 JSL UNKNOWN_C4D989
    case 0xC4DC86: cpu.execute_instruction<0x22>(0xC4D989, 4); return true;
    // src/intro/init_intro.asm:189 TAX
    case 0xC4DC8A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/init_intro.asm:190 STX @LOCAL00
    case 0xC4DC8B: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/init_intro.asm:191 BRA @UNKNOWN27
    case 0xC4DC8D: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/intro/init_intro.asm:193 LDA #7
    case 0xC4DC8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/intro/init_intro.asm:193 LDA #7
    // Overlapping static entry reached from 0xC4DC8F.
    case 0xC4DC91: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:194 JSL UNKNOWN_C4D989
    case 0xC4DC92: cpu.execute_instruction<0x22>(0xC4D989, 4); return true;
    // src/intro/init_intro.asm:195 TAX
    case 0xC4DC96: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/init_intro.asm:196 STX @LOCAL00
    case 0xC4DC97: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/init_intro.asm:197 BRA @UNKNOWN27
    case 0xC4DC99: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/intro/init_intro.asm:199 LDA #9
    case 0xC4DC9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/intro/init_intro.asm:199 LDA #9
    // Overlapping static entry reached from 0xC4DC9B.
    case 0xC4DC9D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:200 JSL UNKNOWN_C4D989
    case 0xC4DC9E: cpu.execute_instruction<0x22>(0xC4D989, 4); return true;
    // src/intro/init_intro.asm:201 TAX
    case 0xC4DCA2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/init_intro.asm:202 STX @LOCAL00
    case 0xC4DCA3: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/init_intro.asm:203 BRA @UNKNOWN27
    case 0xC4DCA5: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/intro/init_intro.asm:209 LDA #1
    case 0xC4DCA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/init_intro.asm:209 LDA #1
    // Overlapping static entry reached from 0xC4DCA7.
    case 0xC4DCA9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/init_intro.asm:210 STA @VIRTUAL02
    case 0xC4DCAA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/init_intro.asm:218 INC @VIRTUAL02
    case 0xC4DCAC: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/intro/init_intro.asm:220 LDX @LOCAL00
    case 0xC4DCAE: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/init_intro.asm:221 BEQL @UNKNOWN0
    case 0xC4DCB0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/init_intro.asm:221 BEQL @UNKNOWN0
    case 0xC4DCB2: cpu.execute_instruction<0x4C>(0x00DB2A, 3); return true;
    // src/intro/init_intro.asm:222 LDA #2
    case 0xC4DCB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/intro/init_intro.asm:222 LDA #2
    // Overlapping static entry reached from 0xC4DCB5.
    case 0xC4DCB7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:223 JSL UNKNOWN_C0AC0C
    case 0xC4DCB8: cpu.execute_instruction<0x22>(0xC0AC0C, 4); return true;
    // src/intro/init_intro.asm:225 SEP #PROC_FLAGS::ACCUM8
    case 0xC4DCBC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/init_intro.asm:226 STZ FADE_PARAMETERS + fade_parameters::step
    case 0xC4DCBE: cpu.execute_instruction<0x9C>(0x000028, 3); return true;
    // src/intro/init_intro.asm:227 REP #PROC_FLAGS::ACCUM8
    case 0xC4DCC1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/init_intro.asm:229 LDA INIDISP_MIRROR
    case 0xC4DCC3: cpu.execute_instruction<0xAD>(0x00000D, 3); return true;
    // src/intro/init_intro.asm:230 AND #$00FF
    case 0xC4DCC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/init_intro.asm:230 AND #$00FF
    // Overlapping static entry reached from 0xC4DCC6.
    case 0xC4DCC8: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/intro/init_intro.asm:231 CMP #$80
    case 0xC4DCC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000080, 2); else cpu.execute_instruction<0xC9>(0x000080, 3); return true;
    // src/intro/init_intro.asm:231 CMP #$80
    // Overlapping static entry reached from 0xC4DCC9.
    case 0xC4DCCB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/init_intro.asm:232 BEQ @UNKNOWN29
    case 0xC4DCCC: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/intro/init_intro.asm:233 LDY #0
    case 0xC4DCCE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/init_intro.asm:233 LDY #0
    // Overlapping static entry reached from 0xC4DCCE.
    case 0xC4DCD0: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/init_intro.asm:234 LDX #1
    case 0xC4DCD1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/init_intro.asm:234 LDX #1
    // Overlapping static entry reached from 0xC4DCD1.
    case 0xC4DCD3: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/init_intro.asm:235 LDA #4
    case 0xC4DCD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/intro/init_intro.asm:235 LDA #4
    // Overlapping static entry reached from 0xC4DCD4.
    case 0xC4DCD6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/init_intro.asm:236 JSL FADE_OUT_WITH_MOSAIC
    case 0xC4DCD7: cpu.execute_instruction<0x22>(0xC08814, 4); return true;
    // src/intro/init_intro.asm:238 SEP #PROC_FLAGS::ACCUM8
    case 0xC4DCDB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/init_intro.asm:239 LDA #$00
    case 0xC4DCDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008F00, 3); return true;
    // src/intro/init_intro.asm:240 STA f:CGADSUB
    case 0xC4DCDF: cpu.execute_instruction<0x8F>(0x002131, 4); return true;
    // src/intro/init_intro.asm:240 STA f:CGADSUB
    // Overlapping static entry reached from 0xC4DCDD.
    case 0xC4DCE0: cpu.execute_instruction<0x31>(0x000021, 2); return true;
    // src/intro/init_intro.asm:240 STA f:CGADSUB
    // Overlapping static entry reached from 0xC4DCE0.
    case 0xC4DCE2: cpu.execute_instruction<0x00>(0x00008F, 2); return true;
    // src/intro/init_intro.asm:241 STA f:CGWSEL
    case 0xC4DCE3: cpu.execute_instruction<0x8F>(0x002130, 4); return true;
    // src/intro/init_intro.asm:242 LDA #$01
    case 0xC4DCE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/intro/init_intro.asm:243 STA TM_MIRROR
    case 0xC4DCE9: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/intro/init_intro.asm:243 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4DCE7.
    case 0xC4DCEA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/intro/init_intro.asm:243 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4DCEA.
    case 0xC4DCEB: cpu.execute_instruction<0x00>(0x00009C, 2); return true;
    // src/intro/init_intro.asm:244 STZ TD_MIRROR
    case 0xC4DCEC: cpu.execute_instruction<0x9C>(0x00001B, 3); return true;
    // src/intro/init_intro.asm:245 REP #PROC_FLAGS::ACCUM8
    case 0xC4DCEF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/init_intro.asm:246 STZ DISABLE_MUSIC_CHANGES
    case 0xC4DCF1: cpu.execute_instruction<0x9C>(0x005DD8, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/init_intro.asm:247 END_C_FUNCTION
    case 0xC4DCF4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/init_intro.asm:247 END_C_FUNCTION
    case 0xC4DCF5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/load_gas_station_flash_palette.asm (source_named).
bool execute_introduction_load_gas_station_flash_palette_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0F3B2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:7 END_STACK_VARS
    case 0xC0F3B4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:7 END_STACK_VARS
    case 0xC0F3B5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:7 END_STACK_VARS
    case 0xC0F3B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F3B6.
    case 0xC0F3B8: cpu.execute_instruction<0xFF>(0x5DA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:7 END_STACK_VARS
    case 0xC0F3B9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:8 LOADPTR GAS_STATION_PALETTE_2, @LOCAL00
    case 0xC0F3BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005D, 2); else cpu.execute_instruction<0xA9>(0x00AA5D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:8 LOADPTR GAS_STATION_PALETTE_2, @LOCAL00
    // Overlapping static entry reached from 0xC0F3BA.
    case 0xC0F3BC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:8 LOADPTR GAS_STATION_PALETTE_2, @LOCAL00
    case 0xC0F3BD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:8 LOADPTR GAS_STATION_PALETTE_2, @LOCAL00
    case 0xC0F3BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:8 LOADPTR GAS_STATION_PALETTE_2, @LOCAL00
    // Overlapping static entry reached from 0xC0F3BF.
    case 0xC0F3C1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:8 LOADPTR GAS_STATION_PALETTE_2, @LOCAL00
    case 0xC0F3C2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F3C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F3C4.
    case 0xC0F3C6: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F3C7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F3C9: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F3CA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F3CC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F3CD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F3CF: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/load_gas_station_flash_palette.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC0F3D1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:11 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F3D3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:11 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F3D5: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:11 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F3D7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:11 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F3D9: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/load_gas_station_flash_palette.asm:12 JSL DECOMP
    case 0xC0F3DB: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/intro/load_gas_station_flash_palette.asm:13 LDA #$18
    case 0xC0F3DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/intro/load_gas_station_flash_palette.asm:13 LDA #$18
    // Overlapping static entry reached from 0xC0F3DF.
    case 0xC0F3E1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/load_gas_station_flash_palette.asm:14 JSL UNKNOWN_C0856B
    case 0xC0F3E2: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:15 END_C_FUNCTION
    case 0xC0F3E6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/load_gas_station_flash_palette.asm:15 END_C_FUNCTION
    case 0xC0F3E7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/load_gas_station_palette.asm (source_named).
bool execute_introduction_load_gas_station_palette_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/load_gas_station_palette.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0F3E8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/load_gas_station_palette.asm:7 END_STACK_VARS
    case 0xC0F3EA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/load_gas_station_palette.asm:7 END_STACK_VARS
    case 0xC0F3EB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/load_gas_station_palette.asm:7 END_STACK_VARS
    case 0xC0F3EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/load_gas_station_palette.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F3EC.
    case 0xC0F3EE: cpu.execute_instruction<0xFF>(0xB7A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/load_gas_station_palette.asm:7 END_STACK_VARS
    case 0xC0F3EF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/load_gas_station_palette.asm:8 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F3F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B7, 2); else cpu.execute_instruction<0xA9>(0x00A9B7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/load_gas_station_palette.asm:8 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F3F0.
    case 0xC0F3F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000085, 2); else cpu.execute_instruction<0xA9>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/load_gas_station_palette.asm:8 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F3F3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/load_gas_station_palette.asm:8 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F3F2.
    case 0xC0F3F4: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/load_gas_station_palette.asm:8 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F3F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/load_gas_station_palette.asm:8 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0F3F5.
    case 0xC0F3F7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/load_gas_station_palette.asm:8 LOADPTR GAS_STATION_PALETTE, @LOCAL00
    case 0xC0F3F8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/load_gas_station_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F3FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/load_gas_station_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0F3FA.
    case 0xC0F3FC: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/load_gas_station_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F3FD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/load_gas_station_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F3FF: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/load_gas_station_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F400: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/load_gas_station_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F402: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/load_gas_station_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F403: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/load_gas_station_palette.asm:9 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0F405: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/load_gas_station_palette.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC0F407: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/load_gas_station_palette.asm:11 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F409: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/load_gas_station_palette.asm:11 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F40B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/load_gas_station_palette.asm:11 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F40D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/load_gas_station_palette.asm:11 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0F40F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/load_gas_station_palette.asm:12 JSL DECOMP
    case 0xC0F411: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/intro/load_gas_station_palette.asm:13 LDA #$18
    case 0xC0F415: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/intro/load_gas_station_palette.asm:13 LDA #$18
    // Overlapping static entry reached from 0xC0F415.
    case 0xC0F417: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/load_gas_station_palette.asm:14 JSL UNKNOWN_C0856B
    case 0xC0F418: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/load_gas_station_palette.asm:15 END_C_FUNCTION
    case 0xC0F41C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/load_gas_station_palette.asm:15 END_C_FUNCTION
    case 0xC0F41D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/logo_screen.asm (source_named).
bool execute_introduction_logo_screen_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/logo_screen.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0F009: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/logo_screen.asm:7 END_STACK_VARS
    case 0xC0F00B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/logo_screen.asm:7 END_STACK_VARS
    case 0xC0F00C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/logo_screen.asm:7 END_STACK_VARS
    case 0xC0F00D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/logo_screen.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0F00D.
    case 0xC0F00F: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/logo_screen.asm:7 END_STACK_VARS
    case 0xC0F010: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/intro/logo_screen.asm:8 LDA #0
    case 0xC0F011: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:8 LDA #0
    // Overlapping static entry reached from 0xC0F011.
    case 0xC0F013: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/logo_screen.asm:9 JSR LOGO_SCREEN_LOAD
    case 0xC0F014: cpu.execute_instruction<0x20>(0x00EE68, 3); return true;
    // src/intro/logo_screen.asm:10 LDY #0
    case 0xC0F017: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:10 LDY #0
    // Overlapping static entry reached from 0xC0F017.
    case 0xC0F019: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/logo_screen.asm:11 LDX #2
    case 0xC0F01A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/intro/logo_screen.asm:11 LDX #2
    // Overlapping static entry reached from 0xC0F01A.
    case 0xC0F01C: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/logo_screen.asm:12 LDA #1
    case 0xC0F01D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/logo_screen.asm:12 LDA #1
    // Overlapping static entry reached from 0xC0F01D.
    case 0xC0F01F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/logo_screen.asm:13 JSL FADE_IN_WITH_MOSAIC
    case 0xC0F020: cpu.execute_instruction<0x22>(0xC087CE, 4); return true;
    // src/intro/logo_screen.asm:14 LDA DEBUG
    case 0xC0F024: cpu.execute_instruction<0xAD>(0x00436C, 3); return true;
    // src/intro/logo_screen.asm:15 BEQ @UNKNOWN0
    case 0xC0F027: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/intro/logo_screen.asm:16 LDA #180
    case 0xC0F029: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B4, 2); else cpu.execute_instruction<0xA9>(0x0000B4, 3); return true;
    // src/intro/logo_screen.asm:16 LDA #180
    // Overlapping static entry reached from 0xC0F029.
    case 0xC0F02B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/logo_screen.asm:17 JSR UNKNOWN_C0EFE1
    case 0xC0F02C: cpu.execute_instruction<0x20>(0x00EFE1, 3); return true;
    // src/intro/logo_screen.asm:18 BRA @UNKNOWN3
    case 0xC0F02F: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/intro/logo_screen.asm:20 LDX #0
    case 0xC0F031: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:20 LDX #0
    // Overlapping static entry reached from 0xC0F031.
    case 0xC0F033: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/intro/logo_screen.asm:21 STX @LOCAL00
    case 0xC0F034: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/logo_screen.asm:22 BRA @UNKNOWN2
    case 0xC0F036: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/intro/logo_screen.asm:24 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0F038: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/intro/logo_screen.asm:25 LDX @LOCAL00
    case 0xC0F03C: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/intro/logo_screen.asm:26 INX
    case 0xC0F03E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/intro/logo_screen.asm:27 STX @LOCAL00
    case 0xC0F03F: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/intro/logo_screen.asm:29 CPX #180
    case 0xC0F041: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000B4, 2); else cpu.execute_instruction<0xE0>(0x0000B4, 3); return true;
    // src/intro/logo_screen.asm:29 CPX #180
    // Overlapping static entry reached from 0xC0F041.
    case 0xC0F043: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/intro/logo_screen.asm:30 BCC @UNKNOWN1
    case 0xC0F044: cpu.execute_instruction<0x90>(0x0000F2, 2); return true;
    // src/intro/logo_screen.asm:32 LDY #0
    case 0xC0F046: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:32 LDY #0
    // Overlapping static entry reached from 0xC0F046.
    case 0xC0F048: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/logo_screen.asm:33 LDX #2
    case 0xC0F049: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/intro/logo_screen.asm:33 LDX #2
    // Overlapping static entry reached from 0xC0F049.
    case 0xC0F04B: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/logo_screen.asm:34 LDA #1
    case 0xC0F04C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/logo_screen.asm:34 LDA #1
    // Overlapping static entry reached from 0xC0F04C.
    case 0xC0F04E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/logo_screen.asm:35 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0F04F: cpu.execute_instruction<0x22>(0xC08814, 4); return true;
    // src/intro/logo_screen.asm:36 LDA #1
    case 0xC0F053: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/logo_screen.asm:36 LDA #1
    // Overlapping static entry reached from 0xC0F053.
    case 0xC0F055: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/logo_screen.asm:37 JSR LOGO_SCREEN_LOAD
    case 0xC0F056: cpu.execute_instruction<0x20>(0x00EE68, 3); return true;
    // src/intro/logo_screen.asm:38 LDY #0
    case 0xC0F059: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:38 LDY #0
    // Overlapping static entry reached from 0xC0F059.
    case 0xC0F05B: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/logo_screen.asm:39 LDX #2
    case 0xC0F05C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/intro/logo_screen.asm:39 LDX #2
    // Overlapping static entry reached from 0xC0F05C.
    case 0xC0F05E: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/logo_screen.asm:40 LDA #1
    case 0xC0F05F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/logo_screen.asm:40 LDA #1
    // Overlapping static entry reached from 0xC0F05F.
    case 0xC0F061: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/logo_screen.asm:41 JSL FADE_IN_WITH_MOSAIC
    case 0xC0F062: cpu.execute_instruction<0x22>(0xC087CE, 4); return true;
    // src/intro/logo_screen.asm:42 LDA #120
    case 0xC0F066: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x000078, 3); return true;
    // src/intro/logo_screen.asm:42 LDA #120
    // Overlapping static entry reached from 0xC0F066.
    case 0xC0F068: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/logo_screen.asm:43 JSR UNKNOWN_C0EFE1
    case 0xC0F069: cpu.execute_instruction<0x20>(0x00EFE1, 3); return true;
    // src/intro/logo_screen.asm:44 CMP #0
    case 0xC0F06C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:44 CMP #0
    // Overlapping static entry reached from 0xC0F06C.
    case 0xC0F06E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/logo_screen.asm:45 BEQ @UNKNOWN4
    case 0xC0F06F: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/intro/logo_screen.asm:46 LDY #0
    case 0xC0F071: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:46 LDY #0
    // Overlapping static entry reached from 0xC0F071.
    case 0xC0F073: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/logo_screen.asm:47 LDX #1
    case 0xC0F074: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/logo_screen.asm:47 LDX #1
    // Overlapping static entry reached from 0xC0F074.
    case 0xC0F076: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/logo_screen.asm:48 LDA #2
    case 0xC0F077: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/intro/logo_screen.asm:48 LDA #2
    // Overlapping static entry reached from 0xC0F077.
    case 0xC0F079: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/logo_screen.asm:49 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0F07A: cpu.execute_instruction<0x22>(0xC08814, 4); return true;
    // src/intro/logo_screen.asm:50 LDA #1
    case 0xC0F07E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/logo_screen.asm:50 LDA #1
    // Overlapping static entry reached from 0xC0F07E.
    case 0xC0F080: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/intro/logo_screen.asm:51 BRA @UNKNOWN6
    case 0xC0F081: cpu.execute_instruction<0x80>(0x00004D, 2); return true;
    // src/intro/logo_screen.asm:53 LDY #0
    case 0xC0F083: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:53 LDY #0
    // Overlapping static entry reached from 0xC0F083.
    case 0xC0F085: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/logo_screen.asm:54 LDX #2
    case 0xC0F086: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/intro/logo_screen.asm:54 LDX #2
    // Overlapping static entry reached from 0xC0F086.
    case 0xC0F088: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/logo_screen.asm:55 LDA #1
    case 0xC0F089: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/logo_screen.asm:55 LDA #1
    // Overlapping static entry reached from 0xC0F089.
    case 0xC0F08B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/logo_screen.asm:56 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0F08C: cpu.execute_instruction<0x22>(0xC08814, 4); return true;
    // src/intro/logo_screen.asm:57 LDA #2
    case 0xC0F090: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/intro/logo_screen.asm:57 LDA #2
    // Overlapping static entry reached from 0xC0F090.
    case 0xC0F092: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/logo_screen.asm:58 JSR LOGO_SCREEN_LOAD
    case 0xC0F093: cpu.execute_instruction<0x20>(0x00EE68, 3); return true;
    // src/intro/logo_screen.asm:59 LDY #0
    case 0xC0F096: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:59 LDY #0
    // Overlapping static entry reached from 0xC0F096.
    case 0xC0F098: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/logo_screen.asm:60 LDX #2
    case 0xC0F099: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/intro/logo_screen.asm:60 LDX #2
    // Overlapping static entry reached from 0xC0F099.
    case 0xC0F09B: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/logo_screen.asm:61 LDA #1
    case 0xC0F09C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/logo_screen.asm:61 LDA #1
    // Overlapping static entry reached from 0xC0F09C.
    case 0xC0F09E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/logo_screen.asm:62 JSL FADE_IN_WITH_MOSAIC
    case 0xC0F09F: cpu.execute_instruction<0x22>(0xC087CE, 4); return true;
    // src/intro/logo_screen.asm:63 LDA #120
    case 0xC0F0A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000078, 2); else cpu.execute_instruction<0xA9>(0x000078, 3); return true;
    // src/intro/logo_screen.asm:63 LDA #120
    // Overlapping static entry reached from 0xC0F0A3.
    case 0xC0F0A5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/logo_screen.asm:64 JSR UNKNOWN_C0EFE1
    case 0xC0F0A6: cpu.execute_instruction<0x20>(0x00EFE1, 3); return true;
    // src/intro/logo_screen.asm:65 CMP #0
    case 0xC0F0A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:65 CMP #0
    // Overlapping static entry reached from 0xC0F0A9.
    case 0xC0F0AB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/logo_screen.asm:66 BEQ @UNKNOWN5
    case 0xC0F0AC: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/intro/logo_screen.asm:67 LDY #0
    case 0xC0F0AE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:67 LDY #0
    // Overlapping static entry reached from 0xC0F0AE.
    case 0xC0F0B0: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/logo_screen.asm:68 LDX #1
    case 0xC0F0B1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/logo_screen.asm:68 LDX #1
    // Overlapping static entry reached from 0xC0F0B1.
    case 0xC0F0B3: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/logo_screen.asm:69 LDA #2
    case 0xC0F0B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/intro/logo_screen.asm:69 LDA #2
    // Overlapping static entry reached from 0xC0F0B4.
    case 0xC0F0B6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/logo_screen.asm:70 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0F0B7: cpu.execute_instruction<0x22>(0xC08814, 4); return true;
    // src/intro/logo_screen.asm:71 LDA #1
    case 0xC0F0BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/logo_screen.asm:71 LDA #1
    // Overlapping static entry reached from 0xC0F0BB.
    case 0xC0F0BD: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/intro/logo_screen.asm:72 BRA @UNKNOWN6
    case 0xC0F0BE: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/intro/logo_screen.asm:74 LDY #0
    case 0xC0F0C0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:74 LDY #0
    // Overlapping static entry reached from 0xC0F0C0.
    case 0xC0F0C2: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/logo_screen.asm:75 LDX #2
    case 0xC0F0C3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/intro/logo_screen.asm:75 LDX #2
    // Overlapping static entry reached from 0xC0F0C3.
    case 0xC0F0C5: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/logo_screen.asm:76 LDA #1
    case 0xC0F0C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/logo_screen.asm:76 LDA #1
    // Overlapping static entry reached from 0xC0F0C6.
    case 0xC0F0C8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/logo_screen.asm:77 JSL FADE_OUT_WITH_MOSAIC
    case 0xC0F0C9: cpu.execute_instruction<0x22>(0xC08814, 4); return true;
    // src/intro/logo_screen.asm:78 LDA #0
    case 0xC0F0CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/logo_screen.asm:78 LDA #0
    // Overlapping static entry reached from 0xC0F0CD.
    case 0xC0F0CF: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/logo_screen.asm:80 END_C_FUNCTION
    case 0xC0F0D0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/logo_screen.asm:80 END_C_FUNCTION
    case 0xC0F0D1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/logo_screen_load.asm (source_named).
bool execute_introduction_logo_screen_load_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/logo_screen_load.asm:3 BEGIN_C_FUNCTION
    case 0xC0EE68: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    case 0xC0EE6A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    case 0xC0EE6B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    case 0xC0EE6C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    case 0xC0EE6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0EE6D.
    case 0xC0EE6F: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    case 0xC0EE70: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/intro/logo_screen_load.asm:8 END_STACK_VARS
    case 0xC0EE71: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/intro/logo_screen_load.asm:9 STA @VIRTUAL02
    case 0xC0EE72: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/logo_screen_load.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC0EE6F.
    case 0xC0EE73: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/intro/logo_screen_load.asm:10 LDA #1
    case 0xC0EE74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/logo_screen_load.asm:10 LDA #1
    // Overlapping static entry reached from 0xC0EE74.
    case 0xC0EE76: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/logo_screen_load.asm:11 JSL UNKNOWN_C08D79
    case 0xC0EE77: cpu.execute_instruction<0x22>(0xC08D79, 4); return true;
    // src/intro/logo_screen_load.asm:12 LDY #$0000
    case 0xC0EE7B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/logo_screen_load.asm:12 LDY #$0000
    // Overlapping static entry reached from 0xC0EE7B.
    case 0xC0EE7D: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/logo_screen_load.asm:13 LDX #$4000
    case 0xC0EE7E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x004000, 3); return true;
    // src/intro/logo_screen_load.asm:13 LDX #$4000
    // Overlapping static entry reached from 0xC0EE7E.
    case 0xC0EE80: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/intro/logo_screen_load.asm:14 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC0EE81: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/logo_screen_load.asm:15 JSL SET_BG3_VRAM_LOCATION
    case 0xC0EE82: cpu.execute_instruction<0x22>(0xC08E1C, 4); return true;
    // src/intro/logo_screen_load.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC0EE86: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/logo_screen_load.asm:17 LDA #4
    case 0xC0EE88: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x008D04, 3); return true;
    // src/intro/logo_screen_load.asm:18 STA TM_MIRROR
    case 0xC0EE8A: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/intro/logo_screen_load.asm:18 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0EE88.
    case 0xC0EE8B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/intro/logo_screen_load.asm:18 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0EE8B.
    case 0xC0EE8C: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/intro/logo_screen_load.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC0EE8D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/logo_screen_load.asm:20 LDA @VIRTUAL02
    case 0xC0EE8F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/logo_screen_load.asm:21 BEQ @UNKNOWN1
    case 0xC0EE91: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/intro/logo_screen_load.asm:22 CMP #1
    case 0xC0EE93: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/intro/logo_screen_load.asm:22 CMP #1
    // Overlapping static entry reached from 0xC0EE93.
    case 0xC0EE95: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/logo_screen_load.asm:23 BEQ @UNKNOWN2
    case 0xC0EE96: cpu.execute_instruction<0xF0>(0x000063, 2); return true;
    // src/intro/logo_screen_load.asm:24 CMP #2
    case 0xC0EE98: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/intro/logo_screen_load.asm:24 CMP #2
    // Overlapping static entry reached from 0xC0EE98.
    case 0xC0EE9A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/intro/logo_screen_load.asm:25 BEQL @UNKNOWN4
    case 0xC0EE9B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/intro/logo_screen_load.asm:25 BEQL @UNKNOWN4
    case 0xC0EE9D: cpu.execute_instruction<0x4C>(0x00EF52, 3); return true;
    // src/intro/logo_screen_load.asm:26 JMP @UNKNOWN5
    case 0xC0EEA0: cpu.execute_instruction<0x4C>(0x00EFA7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:28 LOADPTR NINTENDO_GRAPHICS, @LOCAL00
    case 0xC0EEA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009E, 2); else cpu.execute_instruction<0xA9>(0x00549E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:28 LOADPTR NINTENDO_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EEA3.
    case 0xC0EEA5: cpu.execute_instruction<0x54>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:28 LOADPTR NINTENDO_GRAPHICS, @LOCAL00
    case 0xC0EEA6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:28 LOADPTR NINTENDO_GRAPHICS, @LOCAL00
    case 0xC0EEA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:28 LOADPTR NINTENDO_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EEA8.
    case 0xC0EEAA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:28 LOADPTR NINTENDO_GRAPHICS, @LOCAL00
    case 0xC0EEAB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:29 LOADPTR BUFFER, @LOCAL01
    case 0xC0EEAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:29 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EEAD.
    case 0xC0EEAF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:29 LOADPTR BUFFER, @LOCAL01
    case 0xC0EEB0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:29 LOADPTR BUFFER, @LOCAL01
    case 0xC0EEB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:29 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EEB2.
    case 0xC0EEB4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:29 LOADPTR BUFFER, @LOCAL01
    case 0xC0EEB5: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/logo_screen_load.asm:30 JSL DECOMP
    case 0xC0EEB7: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:31 LOADPTR NINTENDO_ARRANGEMENT, @LOCAL00
    case 0xC0EEBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000055, 2); else cpu.execute_instruction<0xA9>(0x005455, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:31 LOADPTR NINTENDO_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EEBB.
    case 0xC0EEBD: cpu.execute_instruction<0x54>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:31 LOADPTR NINTENDO_ARRANGEMENT, @LOCAL00
    case 0xC0EEBE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:31 LOADPTR NINTENDO_ARRANGEMENT, @LOCAL00
    case 0xC0EEC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:31 LOADPTR NINTENDO_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EEC0.
    case 0xC0EEC2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:31 LOADPTR NINTENDO_ARRANGEMENT, @LOCAL00
    case 0xC0EEC3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:32 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EEC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:32 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EEC5.
    case 0xC0EEC7: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:32 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EEC8: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:32 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EECA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:32 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EECA.
    case 0xC0EECC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:32 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EECD: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/logo_screen_load.asm:33 JSL DECOMP
    case 0xC0EECF: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    case 0xC0EED3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008F, 2); else cpu.execute_instruction<0xA9>(0x00558F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EED3.
    case 0xC0EED5: cpu.execute_instruction<0x55>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    case 0xC0EED6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EED5.
    case 0xC0EED7: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    case 0xC0EED8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EED8.
    case 0xC0EEDA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:34 LOADPTR NINTENDO_PALETTE, @LOCAL00
    case 0xC0EEDB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EEDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0EEDD.
    case 0xC0EEDF: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EEE0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EEE2: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EEE3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EEE5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EEE6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/logo_screen_load.asm:35 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EEE8: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/logo_screen_load.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC0EEEA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/logo_screen_load.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EEEC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EEEE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/logo_screen_load.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EEF0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/logo_screen_load.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EEF2: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/logo_screen_load.asm:38 JSL DECOMP
    case 0xC0EEF4: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/intro/logo_screen_load.asm:39 JMP @UNKNOWN5
    case 0xC0EEF8: cpu.execute_instruction<0x4C>(0x00EFA7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    case 0xC0EEFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002A, 2); else cpu.execute_instruction<0xA9>(0x004F2A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EEFB.
    case 0xC0EEFD: cpu.execute_instruction<0x4F>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    case 0xC0EEFE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    case 0xC0EF00: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EEFD.
    case 0xC0EF01: cpu.execute_instruction<0xE1>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EF00.
    case 0xC0EF02: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:41 LOADPTR APE_GRAPHICS, @LOCAL00
    case 0xC0EF03: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:42 LOADPTR BUFFER, @LOCAL01
    case 0xC0EF05: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:42 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EF05.
    case 0xC0EF07: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:42 LOADPTR BUFFER, @LOCAL01
    case 0xC0EF08: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:42 LOADPTR BUFFER, @LOCAL01
    case 0xC0EF0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:42 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EF0A.
    case 0xC0EF0C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:42 LOADPTR BUFFER, @LOCAL01
    case 0xC0EF0D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/logo_screen_load.asm:43 JSL DECOMP
    case 0xC0EF0F: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    case 0xC0EF13: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x004EC1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EF13.
    case 0xC0EF15: cpu.execute_instruction<0x4E>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    case 0xC0EF16: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    case 0xC0EF18: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EF18.
    case 0xC0EF1A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:44 LOADPTR APE_ARRANGEMENT, @LOCAL00
    case 0xC0EF1B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:45 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EF1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:45 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EF1D.
    case 0xC0EF1F: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:45 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EF20: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:45 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EF22: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:45 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EF22.
    case 0xC0EF24: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:45 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EF25: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/logo_screen_load.asm:46 JSL DECOMP
    case 0xC0EF27: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    case 0xC0EF2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x005130, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EF2B.
    case 0xC0EF2D: cpu.execute_instruction<0x51>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    case 0xC0EF2E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EF2D.
    case 0xC0EF2F: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    case 0xC0EF30: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EF30.
    case 0xC0EF32: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:47 LOADPTR APE_PALETTE, @LOCAL00
    case 0xC0EF33: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0EF35.
    case 0xC0EF37: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF38: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF3A: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF3B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF3D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF3E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/logo_screen_load.asm:48 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF40: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/logo_screen_load.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC0EF42: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/logo_screen_load.asm:50 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EF44: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:50 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EF46: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:50 MOVE_INT @VIRTUAL06, @LOCAL01
    // Overlapping static entry reached from 0xC0EFC0.
    case 0xC0EF47: cpu.execute_instruction<0x12>(0x0000A5, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/logo_screen_load.asm:50 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EF48: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/logo_screen_load.asm:50 MOVE_INT @VIRTUAL06, @LOCAL01
    // Overlapping static entry reached from 0xC0EF47.
    case 0xC0EF49: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/logo_screen_load.asm:50 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EF4A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/logo_screen_load.asm:51 JSL DECOMP
    case 0xC0EF4C: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/intro/logo_screen_load.asm:52 BRA @UNKNOWN5
    case 0xC0EF50: cpu.execute_instruction<0x80>(0x000055, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    case 0xC0EF52: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E8, 2); else cpu.execute_instruction<0xA9>(0x0051E8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EF52.
    case 0xC0EF54: cpu.execute_instruction<0x51>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    case 0xC0EF55: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EF54.
    case 0xC0EF56: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    case 0xC0EF57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC0EF57.
    case 0xC0EF59: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:54 LOADPTR HALKEN_GRAPHICS, @LOCAL00
    case 0xC0EF5A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:55 LOADPTR BUFFER, @LOCAL01
    case 0xC0EF5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:55 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EF5C.
    case 0xC0EF5E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:55 LOADPTR BUFFER, @LOCAL01
    case 0xC0EF5F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:55 LOADPTR BUFFER, @LOCAL01
    case 0xC0EF61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:55 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EF61.
    case 0xC0EF63: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:55 LOADPTR BUFFER, @LOCAL01
    case 0xC0EF64: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/logo_screen_load.asm:56 JSL DECOMP
    case 0xC0EF66: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    case 0xC0EF6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000074, 2); else cpu.execute_instruction<0xA9>(0x005174, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EF6A.
    case 0xC0EF6C: cpu.execute_instruction<0x51>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    case 0xC0EF6D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EF6C.
    case 0xC0EF6E: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    case 0xC0EF6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    // Overlapping static entry reached from 0xC0EF6F.
    case 0xC0EF71: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:57 LOADPTR HALKEN_ARRANGEMENT, @LOCAL00
    case 0xC0EF72: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:58 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EF74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:58 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EF74.
    case 0xC0EF76: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:58 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EF77: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:58 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EF79: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:58 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC0EF79.
    case 0xC0EF7B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:58 LOADPTR INTRO_BG2_BUFFER, @LOCAL01
    case 0xC0EF7C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/logo_screen_load.asm:59 JSL DECOMP
    case 0xC0EF7E: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    case 0xC0EF82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B8, 2); else cpu.execute_instruction<0xA9>(0x0053B8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EF82.
    case 0xC0EF84: cpu.execute_instruction<0x53>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    case 0xC0EF85: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EF84.
    case 0xC0EF86: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    case 0xC0EF87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC0EF87.
    case 0xC0EF89: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:60 LOADPTR HALKEN_PALETTE, @LOCAL00
    case 0xC0EF8A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0EF8C.
    case 0xC0EF8E: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF8F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF91: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF92: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF94: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF95: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/logo_screen_load.asm:61 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0EF97: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/logo_screen_load.asm:62 REP #PROC_FLAGS::ACCUM8
    case 0xC0EF99: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/logo_screen_load.asm:62 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0EFB6.
    case 0xC0EF9A: cpu.execute_instruction<0x20>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/logo_screen_load.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EF9B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/logo_screen_load.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EF9D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/logo_screen_load.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EF9F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/logo_screen_load.asm:63 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0EFA1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/logo_screen_load.asm:64 JSL DECOMP
    case 0xC0EFA3: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0EFA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    // Overlapping static entry reached from 0xC0EFA7.
    case 0xC0EFA9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0EFAA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0EFAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    // Overlapping static entry reached from 0xC0EFAC.
    case 0xC0EFAE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0EFAF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0EFB1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    // Overlapping static entry reached from 0xC0EFB1.
    case 0xC0EFB3: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0EFB4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x008000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    // Overlapping static entry reached from 0xC0EFB4.
    case 0xC0EFB6: cpu.execute_instruction<0x80>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0EFB7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1161 TYA
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0EFB9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/logo_screen_load.asm:66 COPY_TO_VRAM1 BUFFER, $0000, $8000, 0
    case 0xC0EFBA: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0EFBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    // Overlapping static entry reached from 0xC0EFBE.
    case 0xC0EFC0: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0EFC1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0EFC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    // Overlapping static entry reached from 0xC0EFC3.
    case 0xC0EFC5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0EFC6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0EFC8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x004000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    // Overlapping static entry reached from 0xC0EFC8.
    case 0xC0EFCA: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0EFCB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    // Overlapping static entry reached from 0xC0EFCB.
    case 0xC0EFCD: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0EFCE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0EFD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    case 0xC0EFD2: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    // Overlapping static entry reached from 0xC0EFD0.
    case 0xC0EFD3: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/intro/logo_screen_load.asm:68 COPY_TO_VRAM1 INTRO_BG2_BUFFER, $4000, $800, 0
    // Overlapping static entry reached from 0xC0EFD3.
    case 0xC0EFD5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/intro/logo_screen_load.asm:70 SEP #PROC_FLAGS::ACCUM8
    case 0xC0EFD6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/logo_screen_load.asm:70 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0EFD5.
    case 0xC0EFD7: cpu.execute_instruction<0x20>(0x0018A9, 3); return true;
    // src/intro/logo_screen_load.asm:71 LDA #PALETTE_UPLOAD::FULL
    case 0xC0EFD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/intro/logo_screen_load.asm:72 STA PALETTE_UPLOAD_MODE
    case 0xC0EFDA: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/intro/logo_screen_load.asm:72 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC0EFD8.
    case 0xC0EFDB: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/intro/logo_screen_load.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC0EFDD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/logo_screen_load.asm:74 END_C_FUNCTION
    case 0xC0EFDF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/logo_screen_load.asm:74 END_C_FUNCTION
    case 0xC0EFE0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/name_a_character.asm (source_named).
bool execute_introduction_name_a_character_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/name_a_character.asm:3 BEGIN_C_FUNCTION
    case 0xC1EC04: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    case 0xC1EC06: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    case 0xC1EC07: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    case 0xC1EC08: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    case 0xC1EC09: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    // Overlapping static entry reached from 0xC1EC09.
    case 0xC1EC0B: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    case 0xC1EC0C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/intro/name_a_character.asm:19 END_STACK_VARS
    case 0xC1EC0D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/intro/name_a_character.asm:20 STY @LOCAL05
    case 0xC1EC0E: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/intro/name_a_character.asm:20 STY @LOCAL05
    // Overlapping static entry reached from 0xC1EC0B.
    case 0xC1EC0F: cpu.execute_instruction<0x14>(0x00009B, 2); return true;
    // src/intro/name_a_character.asm:21 TXY
    case 0xC1EC10: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/intro/name_a_character.asm:22 STY @LOCAL04
    case 0xC1EC11: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/intro/name_a_character.asm:23 STA @VIRTUAL02
    case 0xC1EC13: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/name_a_character.asm:27 LDX @PARAM04
    case 0xC1EC15: cpu.execute_instruction<0xA6>(0x000028, 2); return true;
    // src/intro/name_a_character.asm:28 STX @VIRTUAL04
    case 0xC1EC17: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/name_a_character.asm:29 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC1EC19: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/name_a_character.asm:29 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC1EC1B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/name_a_character.asm:29 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC1EC1D: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/name_a_character.asm:29 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC1EC1F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/intro/name_a_character.asm:30 JSR SET_INSTANT_PRINTING
    case 0xC1EC21: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/name_a_character.asm:31 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_NAME_BOX
    case 0xC1EC25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001A, 2); else cpu.execute_instruction<0xA9>(0x00001A, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/name_a_character.asm:31 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_NAME_BOX
    // Overlapping static entry reached from 0xC1EC25.
    case 0xC1EC27: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/name_a_character.asm:31 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_NAME_BOX
    case 0xC1EC28: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/intro/name_a_character.asm:33 JSL WINDOW_TICK_WITHOUT_INSTANT_PRINTING
    case 0xC1EC2B: cpu.execute_instruction<0x22>(0xC3E4E0, 4); return true;
    // src/intro/name_a_character.asm:52 LDY @LOCAL04
    case 0xC1EC2F: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/intro/name_a_character.asm:53 LDA __BSS_START__,Y
    case 0xC1EC31: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/intro/name_a_character.asm:54 AND #$00FF
    case 0xC1EC34: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/intro/name_a_character.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC1EC34.
    case 0xC1EC36: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/name_a_character.asm:55 BEQ @UNKNOWN2
    case 0xC1EC37: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/intro/name_a_character.asm:97 LDX @VIRTUAL02
    case 0xC1EC39: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/intro/name_a_character.asm:98 TYA
    case 0xC1EC3B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/name_a_character.asm:99 JSL UNKNOWN_C440B5
    case 0xC1EC3C: cpu.execute_instruction<0x22>(0xC440B5, 4); return true;
    // src/intro/name_a_character.asm:99 JSL UNKNOWN_C440B5
    // Overlapping static entry reached from 0xC1EC9A.
    case 0xC1EC3E: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/intro/name_a_character.asm:101 BRA @UNKNOWN3
    case 0xC1EC40: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/intro/name_a_character.asm:110 LDA @VIRTUAL02
    case 0xC1EC42: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/name_a_character.asm:111 JSL UNKNOWN_C441B7
    case 0xC1EC44: cpu.execute_instruction<0x22>(0xC441B7, 4); return true;
    // src/intro/name_a_character.asm:115 LDX #0
    case 0xC1EC48: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/name_a_character.asm:115 LDX #0
    // Overlapping static entry reached from 0xC1EC48.
    case 0xC1EC4A: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/intro/name_a_character.asm:116 TXA
    case 0xC1EC4B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/name_a_character.asm:117 JSR UNKNOWN_C438A5
    case 0xC1EC4C: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/name_a_character.asm:119 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_MESSAGE
    case 0xC1EC50: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00001B, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/intro/name_a_character.asm:119 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_MESSAGE
    // Overlapping static entry reached from 0xC1EC50.
    case 0xC1EC52: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/intro/name_a_character.asm:119 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_MESSAGE
    case 0xC1EC53: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/intro/name_a_character.asm:121 JSL WINDOW_TICK_WITHOUT_INSTANT_PRINTING
    case 0xC1EC56: cpu.execute_instruction<0x22>(0xC3E4E0, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/intro/name_a_character.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EC5A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/intro/name_a_character.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EC5C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/intro/name_a_character.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EC5E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/intro/name_a_character.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EC60: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/name_a_character.asm:124 LDA @VIRTUAL04
    case 0xC1EC62: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/intro/name_a_character.asm:125 JSR PRINT_STRING
    case 0xC1EC64: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/intro/name_a_character.asm:126 LDX #0
    case 0xC1EC67: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/name_a_character.asm:126 LDX #0
    // Overlapping static entry reached from 0xC1EC67.
    case 0xC1EC69: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/name_a_character.asm:127 LDA #1
    case 0xC1EC6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/name_a_character.asm:127 LDA #1
    // Overlapping static entry reached from 0xC1EC6A.
    case 0xC1EC6C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/name_a_character.asm:128 JSR CC_13_14
    case 0xC1EC6D: cpu.execute_instruction<0x20>(0x000166, 3); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/intro/name_a_character.asm:129 STZ_BADOPT @LOCAL00
    case 0xC1EC70: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/intro/name_a_character.asm:130 LDA @LOCAL05
    case 0xC1EC72: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/intro/name_a_character.asm:131 STA @LOCAL00+2
    case 0xC1EC74: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/intro/name_a_character.asm:132 LDY @LOCAL04
    case 0xC1EC76: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/intro/name_a_character.asm:137 LDX @VIRTUAL02
    case 0xC1EC78: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/intro/name_a_character.asm:138 LDA #WINDOW::FILE_SELECT_NAMING_NAME_BOX
    case 0xC1EC7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001A, 2); else cpu.execute_instruction<0xA9>(0x00001A, 3); return true;
    // src/intro/name_a_character.asm:138 LDA #WINDOW::FILE_SELECT_NAMING_NAME_BOX
    // Overlapping static entry reached from 0xC1EC7A.
    case 0xC1EC7C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/intro/name_a_character.asm:139 JSR TEXT_INPUT_DIALOG
    case 0xC1EC7D: cpu.execute_instruction<0x20>(0x00E57F, 3); return true;
    // src/intro/name_a_character.asm:140 TAX
    case 0xC1EC80: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/name_a_character.asm:141 STX @LOCAL05
    case 0xC1EC81: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/intro/name_a_character.asm:142 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    case 0xC1EC83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00001C, 3); return true;
    // src/intro/name_a_character.asm:142 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    // Overlapping static entry reached from 0xC1EC83.
    case 0xC1EC85: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/name_a_character.asm:143 JSR CLOSE_WINDOW
    case 0xC1EC86: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/intro/name_a_character.asm:144 LDX @LOCAL05
    case 0xC1EC8A: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/intro/name_a_character.asm:145 TXA
    case 0xC1EC8C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/name_a_character.asm:146 END_C_FUNCTION
    case 0xC1EC8D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/intro/name_a_character.asm:146 END_C_FUNCTION
    case 0xC1EC8E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/intro/show_title_screen.asm (source_named).
bool execute_introduction_show_title_screen_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/intro/show_title_screen.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC3F3C5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/intro/show_title_screen.asm:11 END_STACK_VARS
    case 0xC3F3C7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/intro/show_title_screen.asm:11 END_STACK_VARS
    case 0xC3F3C8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/intro/show_title_screen.asm:11 END_STACK_VARS
    case 0xC3F3C9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/show_title_screen.asm:11 END_STACK_VARS
    case 0xC3F3CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/intro/show_title_screen.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC3F3CA.
    case 0xC3F3CC: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/intro/show_title_screen.asm:11 END_STACK_VARS
    case 0xC3F3CD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/intro/show_title_screen.asm:11 END_STACK_VARS
    case 0xC3F3CE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:12 TAX
    case 0xC3F3CF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:13 STX TITLE_SCREEN_QUICK_MODE
    case 0xC3F3D0: cpu.execute_instruction<0x8E>(0x009F75, 3); return true;
    // src/intro/show_title_screen.asm:14 LDA #0
    case 0xC3F3D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:14 LDA #0
    // Overlapping static entry reached from 0xC3F3D3.
    case 0xC3F3D5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/show_title_screen.asm:15 STA @VIRTUAL04
    case 0xC3F3D6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/intro/show_title_screen.asm:16 JSL UNKNOWN_C08726
    case 0xC3F3D8: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/intro/show_title_screen.asm:17 JSL UNKNOWN_C0927C
    case 0xC3F3DC: cpu.execute_instruction<0x22>(0xC0927C, 4); return true;
    // src/intro/show_title_screen.asm:18 BRA @UNKNOWN1
    case 0xC3F3E0: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/intro/show_title_screen.asm:20 ASL
    case 0xC3F3E2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:21 CLC
    case 0xC3F3E3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:22 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC3F3E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006A, 2); else cpu.execute_instruction<0x69>(0x00116A, 3); return true;
    // src/intro/show_title_screen.asm:22 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC3F3E4.
    case 0xC3F3E6: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/intro/show_title_screen.asm:23 TAX
    case 0xC3F3E7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:24 LDA __BSS_START__,X
    case 0xC3F3E8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:25 ORA #$8000
    case 0xC3F3EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/intro/show_title_screen.asm:25 ORA #$8000
    // Overlapping static entry reached from 0xC3F3EB.
    case 0xC3F3ED: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/intro/show_title_screen.asm:26 STA __BSS_START__,X
    case 0xC3F3EE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:27 LDA @LOCAL04
    case 0xC3F3F1: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/intro/show_title_screen.asm:28 INC
    case 0xC3F3F3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:29 STA @LOCAL04
    case 0xC3F3F4: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/intro/show_title_screen.asm:30 CMP #MAX_ENTITIES
    case 0xC3F3F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/intro/show_title_screen.asm:30 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC3F3F6.
    case 0xC3F3F8: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/intro/show_title_screen.asm:31 BCC @UNKNOWN0
    case 0xC3F3F9: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/intro/show_title_screen.asm:33 LDA #11
    case 0xC3F3FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000B, 2); else cpu.execute_instruction<0xA9>(0x00000B, 3); return true;
    // src/intro/show_title_screen.asm:33 LDA #11
    // Overlapping static entry reached from 0xC3F3FB.
    case 0xC3F3FD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/show_title_screen.asm:34 JSL UNKNOWN_C08D79
    case 0xC3F3FE: cpu.execute_instruction<0x22>(0xC08D79, 4); return true;
    // src/intro/show_title_screen.asm:35 LDA #3
    case 0xC3F402: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/intro/show_title_screen.asm:35 LDA #3
    // Overlapping static entry reached from 0xC3F402.
    case 0xC3F404: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/show_title_screen.asm:36 JSL SET_OAM_SIZE
    case 0xC3F405: cpu.execute_instruction<0x22>(0xC08D92, 4); return true;
    // src/intro/show_title_screen.asm:37 LDY #$0000
    case 0xC3F409: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:37 LDY #$0000
    // Overlapping static entry reached from 0xC3F409.
    case 0xC3F40B: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/show_title_screen.asm:38 LDX #$5800
    case 0xC3F40C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005800, 3); return true;
    // src/intro/show_title_screen.asm:38 LDX #$5800
    // Overlapping static entry reached from 0xC3F40C.
    case 0xC3F40E: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:39 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC3F40F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:40 JSL SET_BG1_VRAM_LOCATION
    case 0xC3F410: cpu.execute_instruction<0x22>(0xC08D9E, 4); return true;
    // src/intro/show_title_screen.asm:41 STZ BG3_X_POS
    case 0xC3F414: cpu.execute_instruction<0x9C>(0x000039, 3); return true;
    // src/intro/show_title_screen.asm:42 STZ BG3_Y_POS
    case 0xC3F417: cpu.execute_instruction<0x9C>(0x00003B, 3); return true;
    // src/intro/show_title_screen.asm:43 STZ BG2_Y_POS
    case 0xC3F41A: cpu.execute_instruction<0x9C>(0x000037, 3); return true;
    // src/intro/show_title_screen.asm:44 STZ BG2_X_POS
    case 0xC3F41D: cpu.execute_instruction<0x9C>(0x000035, 3); return true;
    // src/intro/show_title_screen.asm:45 STZ BG1_Y_POS
    case 0xC3F420: cpu.execute_instruction<0x9C>(0x000033, 3); return true;
    // src/intro/show_title_screen.asm:46 STZ BG1_X_POS
    case 0xC3F423: cpu.execute_instruction<0x9C>(0x000031, 3); return true;
    // src/intro/show_title_screen.asm:47 JSL UPDATE_SCREEN
    case 0xC3F426: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/intro/show_title_screen.asm:48 STZ BG3_X_POS
    case 0xC3F42A: cpu.execute_instruction<0x9C>(0x000039, 3); return true;
    // src/intro/show_title_screen.asm:49 STZ BG3_Y_POS
    case 0xC3F42D: cpu.execute_instruction<0x9C>(0x00003B, 3); return true;
    // src/intro/show_title_screen.asm:50 STZ BG2_Y_POS
    case 0xC3F430: cpu.execute_instruction<0x9C>(0x000037, 3); return true;
    // src/intro/show_title_screen.asm:51 STZ BG2_X_POS
    case 0xC3F433: cpu.execute_instruction<0x9C>(0x000035, 3); return true;
    // src/intro/show_title_screen.asm:52 STZ BG1_Y_POS
    case 0xC3F436: cpu.execute_instruction<0x9C>(0x000033, 3); return true;
    // src/intro/show_title_screen.asm:53 STZ BG1_X_POS
    case 0xC3F439: cpu.execute_instruction<0x9C>(0x000031, 3); return true;
    // src/intro/show_title_screen.asm:54 JSL UPDATE_SCREEN
    case 0xC3F43C: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/intro/show_title_screen.asm:55 JSL UNKNOWN_C0EBE0
    case 0xC3F440: cpu.execute_instruction<0x22>(0xC0EBE0, 4); return true;
    // src/intro/show_title_screen.asm:56 SEP #PROC_FLAGS::ACCUM8
    case 0xC3F444: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:57 LDA #$11
    case 0xC3F446: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000011, 2); else cpu.execute_instruction<0xA9>(0x008D11, 3); return true;
    // src/intro/show_title_screen.asm:58 STA TM_MIRROR
    case 0xC3F448: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/intro/show_title_screen.asm:58 STA TM_MIRROR
    // Overlapping static entry reached from 0xC3F446.
    case 0xC3F449: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:58 STA TM_MIRROR
    // Overlapping static entry reached from 0xC3F449.
    case 0xC3F44A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/show_title_screen.asm:59 JSL OAM_CLEAR
    case 0xC3F44B: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/intro/show_title_screen.asm:61 LDY #0
    case 0xC3F44F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:61 LDY #0
    // Overlapping static entry reached from 0xC3F44F.
    case 0xC3F451: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/intro/show_title_screen.asm:62 TYX
    case 0xC3F452: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:63 LDA #EVENT_SCRIPT::TITLE_SCREEN_1
    case 0xC3F453: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000314, 3); return true;
    // src/intro/show_title_screen.asm:63 LDA #EVENT_SCRIPT::TITLE_SCREEN_1
    // Overlapping static entry reached from 0xC3F453.
    case 0xC3F455: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/intro/show_title_screen.asm:64 JSL INIT_ENTITY_WIPE
    case 0xC3F456: cpu.execute_instruction<0x22>(0xC092F5, 4); return true;
    // src/intro/show_title_screen.asm:64 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC3F455.
    case 0xC3F457: cpu.execute_instruction<0xF5>(0x000092, 2); return true;
    // src/intro/show_title_screen.asm:64 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC3F457.
    case 0xC3F459: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009C, 2); else cpu.execute_instruction<0xC0>(0x00419C, 3); return true;
    // src/intro/show_title_screen.asm:65 STZ ACTIONSCRIPT_STATE
    case 0xC3F45A: cpu.execute_instruction<0x9C>(0x009641, 3); return true;
    // src/intro/show_title_screen.asm:65 STZ ACTIONSCRIPT_STATE
    // Overlapping static entry reached from 0xC3F459.
    case 0xC3F45B: cpu.execute_instruction<0x41>(0x000096, 2); return true;
    // src/intro/show_title_screen.asm:65 STZ ACTIONSCRIPT_STATE
    // Overlapping static entry reached from 0xC3F459.
    case 0xC3F45C: cpu.execute_instruction<0x96>(0x0000AD, 2); return true;
    // src/intro/show_title_screen.asm:66 LDA TITLE_SCREEN_QUICK_MODE
    case 0xC3F45D: cpu.execute_instruction<0xAD>(0x009F75, 3); return true;
    // src/intro/show_title_screen.asm:66 LDA TITLE_SCREEN_QUICK_MODE
    // Overlapping static entry reached from 0xC3F45C.
    case 0xC3F45E: cpu.execute_instruction<0x75>(0x00009F, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/intro/show_title_screen.asm:67 BNEL @UNKNOWN7
    case 0xC3F460: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/intro/show_title_screen.asm:67 BNEL @UNKNOWN7
    case 0xC3F462: cpu.execute_instruction<0x4C>(0x00F50A, 3); return true;
    // src/intro/show_title_screen.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC3F465: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:69 STZ @LOCAL00
    case 0xC3F467: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/intro/show_title_screen.asm:70 LDX #.LOWORD(PALETTES)
    case 0xC3F469: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/intro/show_title_screen.asm:70 LDX #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC3F469.
    case 0xC3F46B: cpu.execute_instruction<0x02>(0x0000C2, 2); return true;
    // src/intro/show_title_screen.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC3F46C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:72 LDA #BPP4PALETTE_SIZE * 16
    case 0xC3F46E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/intro/show_title_screen.asm:72 LDA #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC3F46E.
    case 0xC3F470: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/intro/show_title_screen.asm:73 JSL MEMSET16
    case 0xC3F471: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/intro/show_title_screen.asm:74 SEP #PROC_FLAGS::ACCUM8
    case 0xC3F475: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:75 LDA #PALETTE_UPLOAD::FULL
    case 0xC3F477: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/intro/show_title_screen.asm:76 STA PALETTE_UPLOAD_MODE
    case 0xC3F479: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/intro/show_title_screen.asm:76 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC3F477.
    case 0xC3F47A: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/intro/show_title_screen.asm:77 JSL UNKNOWN_C08744
    case 0xC3F47C: cpu.execute_instruction<0x22>(0xC08744, 4); return true;
    // src/intro/show_title_screen.asm:78 SEP #PROC_FLAGS::ACCUM8
    case 0xC3F480: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:79 LDA #$0F
    case 0xC3F482: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x008D0F, 3); return true;
    // src/intro/show_title_screen.asm:80 STA INIDISP_MIRROR
    case 0xC3F484: cpu.execute_instruction<0x8D>(0x00000D, 3); return true;
    // src/intro/show_title_screen.asm:80 STA INIDISP_MIRROR
    // Overlapping static entry reached from 0xC3F482.
    case 0xC3F485: cpu.execute_instruction<0x0D>(0x002200, 3); return true;
    // src/intro/show_title_screen.asm:81 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC3F487: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/intro/show_title_screen.asm:81 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC3F485.
    case 0xC3F488: cpu.execute_instruction<0x56>(0x000087, 2); return true;
    // src/intro/show_title_screen.asm:81 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC3F488.
    case 0xC3F48A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/intro/show_title_screen.asm:82 SEP #PROC_FLAGS::ACCUM8
    case 0xC3F48B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:82 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC3F48A.
    case 0xC3F48C: cpu.execute_instruction<0x20>(0x00309C, 3); return true;
    // src/intro/show_title_screen.asm:83 STZ PALETTE_UPLOAD_MODE
    case 0xC3F48D: cpu.execute_instruction<0x9C>(0x000030, 3); return true;
    // src/intro/show_title_screen.asm:83 STZ PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC3F48C.
    case 0xC3F48F: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/intro/show_title_screen.asm:84 REP #PROC_FLAGS::ACCUM8
    case 0xC3F490: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/show_title_screen.asm:85 LOADPTR UNKNOWN_E1AE7C, @LOCAL00
    case 0xC3F492: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007C, 2); else cpu.execute_instruction<0xA9>(0x00AE7C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/intro/show_title_screen.asm:85 LOADPTR UNKNOWN_E1AE7C, @LOCAL00
    // Overlapping static entry reached from 0xC3F492.
    case 0xC3F494: cpu.execute_instruction<0xAE>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/intro/show_title_screen.asm:85 LOADPTR UNKNOWN_E1AE7C, @LOCAL00
    case 0xC3F495: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/show_title_screen.asm:85 LOADPTR UNKNOWN_E1AE7C, @LOCAL00
    case 0xC3F497: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/intro/show_title_screen.asm:85 LOADPTR UNKNOWN_E1AE7C, @LOCAL00
    // Overlapping static entry reached from 0xC3F497.
    case 0xC3F499: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/intro/show_title_screen.asm:85 LOADPTR UNKNOWN_E1AE7C, @LOCAL00
    case 0xC3F49A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/show_title_screen.asm:86 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC3F49C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/intro/show_title_screen.asm:86 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3F49C.
    case 0xC3F49E: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/intro/show_title_screen.asm:86 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC3F49F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/intro/show_title_screen.asm:86 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC3F4A1: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/intro/show_title_screen.asm:86 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC3F4A2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/intro/show_title_screen.asm:86 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC3F4A4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/intro/show_title_screen.asm:86 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC3F4A5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/intro/show_title_screen.asm:86 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC3F4A7: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/intro/show_title_screen.asm:87 REP #PROC_FLAGS::ACCUM8
    case 0xC3F4A9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:88 LDA #BPP4PALETTE_SIZE * 8
    case 0xC3F4AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000100, 3); return true;
    // src/intro/show_title_screen.asm:88 LDA #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC3F4AB.
    case 0xC3F4AD: cpu.execute_instruction<0x01>(0x000018, 2); return true;
    // src/intro/show_title_screen.asm:89 CLC
    case 0xC3F4AE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:90 ADC @VIRTUAL06
    case 0xC3F4AF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/intro/show_title_screen.asm:91 STA @VIRTUAL06
    case 0xC3F4B1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/intro/show_title_screen.asm:92 STA @LOCAL01
    case 0xC3F4B3: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/intro/show_title_screen.asm:93 LDA @VIRTUAL06+2
    case 0xC3F4B5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/intro/show_title_screen.asm:94 STA @LOCAL01+2
    case 0xC3F4B7: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/intro/show_title_screen.asm:95 JSL DECOMP
    case 0xC3F4B9: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/intro/show_title_screen.asm:96 JSL UNKNOWN_C496F9
    case 0xC3F4BD: cpu.execute_instruction<0x22>(0xC496F9, 4); return true;
    // src/intro/show_title_screen.asm:97 SEP #PROC_FLAGS::ACCUM8
    case 0xC3F4C1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:98 STZ @LOCAL00
    case 0xC3F4C3: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/intro/show_title_screen.asm:99 LDX #.LOWORD(PALETTES)
    case 0xC3F4C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/intro/show_title_screen.asm:99 LDX #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC3F4C5.
    case 0xC3F4C7: cpu.execute_instruction<0x02>(0x0000C2, 2); return true;
    // src/intro/show_title_screen.asm:100 REP #PROC_FLAGS::ACCUM8
    case 0xC3F4C8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:101 LDA #BPP4PALETTE_SIZE * 16
    case 0xC3F4CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/intro/show_title_screen.asm:101 LDA #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC3F4CA.
    case 0xC3F4CC: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/intro/show_title_screen.asm:102 JSL MEMSET16
    case 0xC3F4CD: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/intro/show_title_screen.asm:103 LDX #$0100
    case 0xC3F4D1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/intro/show_title_screen.asm:103 LDX #$0100
    // Overlapping static entry reached from 0xC3F4D1.
    case 0xC3F4D3: cpu.execute_instruction<0x01>(0x0000A9, 2); return true;
    // src/intro/show_title_screen.asm:104 LDA #60
    case 0xC3F4D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/intro/show_title_screen.asm:104 LDA #60
    // Overlapping static entry reached from 0xC3F4D3.
    case 0xC3F4D5: cpu.execute_instruction<0x3C>(0x002200, 3); return true;
    // src/intro/show_title_screen.asm:104 LDA #60
    // Overlapping static entry reached from 0xC3F4D4.
    case 0xC3F4D6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/show_title_screen.asm:105 JSL UNKNOWN_C496E7
    case 0xC3F4D7: cpu.execute_instruction<0x22>(0xC496E7, 4); return true;
    // src/intro/show_title_screen.asm:105 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC3F4D5.
    case 0xC3F4D8: cpu.execute_instruction<0xE7>(0x000096, 2); return true;
    // src/intro/show_title_screen.asm:105 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC3F4D8.
    case 0xC3F4DA: cpu.execute_instruction<0xC4>(0x0000E2, 2); return true;
    // src/intro/show_title_screen.asm:106 SEP #PROC_FLAGS::ACCUM8
    case 0xC3F4DB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:106 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC3F4DA.
    case 0xC3F4DC: cpu.execute_instruction<0x20>(0x0018A9, 3); return true;
    // src/intro/show_title_screen.asm:107 LDA #PALETTE_UPLOAD::FULL
    case 0xC3F4DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/intro/show_title_screen.asm:108 STA PALETTE_UPLOAD_MODE
    case 0xC3F4DF: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/intro/show_title_screen.asm:108 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC3F4DD.
    case 0xC3F4E0: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/intro/show_title_screen.asm:109 LDX #0
    case 0xC3F4E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:109 LDX #0
    // Overlapping static entry reached from 0xC3F4E2.
    case 0xC3F4E4: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/intro/show_title_screen.asm:110 STX @LOCAL03
    case 0xC3F4E5: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/intro/show_title_screen.asm:111 BRA @UNKNOWN4
    case 0xC3F4E7: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/intro/show_title_screen.asm:113 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC3F4E9: cpu.execute_instruction<0x22>(0xC426ED, 4); return true;
    // src/intro/show_title_screen.asm:114 JSL UNKNOWN_C1004E
    case 0xC3F4ED: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/intro/show_title_screen.asm:115 LDX @LOCAL03
    case 0xC3F4F1: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/intro/show_title_screen.asm:116 INX
    case 0xC3F4F3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:117 STX @LOCAL03
    case 0xC3F4F4: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/intro/show_title_screen.asm:117 STX @LOCAL03
    // Overlapping static entry reached from 0xC3F546.
    case 0xC3F4F5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:119 STX @VIRTUAL02
    case 0xC3F4F6: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/intro/show_title_screen.asm:120 REP #PROC_FLAGS::ACCUM8
    case 0xC3F4F8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:121 LDA #60
    case 0xC3F4FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/intro/show_title_screen.asm:121 LDA #60
    // Overlapping static entry reached from 0xC3F4FA.
    case 0xC3F4FC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/intro/show_title_screen.asm:122 CLC
    case 0xC3F4FD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:123 SBC @VIRTUAL02
    case 0xC3F4FE: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/intro/show_title_screen.asm:124 BRANCHGTS @UNKNOWN3
    case 0xC3F500: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/intro/show_title_screen.asm:124 BRANCHGTS @UNKNOWN3
    case 0xC3F502: cpu.execute_instruction<0x10>(0x0000E5, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/intro/show_title_screen.asm:124 BRANCHGTS @UNKNOWN3
    case 0xC3F504: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/intro/show_title_screen.asm:124 BRANCHGTS @UNKNOWN3
    case 0xC3F506: cpu.execute_instruction<0x30>(0x0000E1, 2); return true;
    // src/intro/show_title_screen.asm:125 BRA @UNKNOWN11
    case 0xC3F508: cpu.execute_instruction<0x80>(0x00002A, 2); return true;
    // src/intro/show_title_screen.asm:127 LDX #1
    case 0xC3F50A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/show_title_screen.asm:127 LDX #1
    // Overlapping static entry reached from 0xC3F50A.
    case 0xC3F50C: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/show_title_screen.asm:128 LDA #4
    case 0xC3F50D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/intro/show_title_screen.asm:128 LDA #4
    // Overlapping static entry reached from 0xC3F50D.
    case 0xC3F50F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/show_title_screen.asm:129 JSL FADE_IN
    case 0xC3F510: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/intro/show_title_screen.asm:130 LDX #0
    case 0xC3F514: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:130 LDX #0
    // Overlapping static entry reached from 0xC3F514.
    case 0xC3F516: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/intro/show_title_screen.asm:131 STX @LOCAL04
    case 0xC3F517: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/intro/show_title_screen.asm:132 BRA @UNKNOWN9
    case 0xC3F519: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/intro/show_title_screen.asm:134 JSL UNKNOWN_C1004E
    case 0xC3F51B: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/intro/show_title_screen.asm:134 JSL UNKNOWN_C1004E
    // Overlapping static entry reached from 0xC3F54C.
    case 0xC3F51E: cpu.execute_instruction<0xC1>(0x0000A6, 2); return true;
    // src/intro/show_title_screen.asm:135 LDX @LOCAL04
    case 0xC3F51F: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/intro/show_title_screen.asm:135 LDX @LOCAL04
    // Overlapping static entry reached from 0xC3F51E.
    case 0xC3F520: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:136 INX
    case 0xC3F521: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:137 STX @LOCAL04
    case 0xC3F522: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/intro/show_title_screen.asm:139 STX @VIRTUAL02
    case 0xC3F524: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/intro/show_title_screen.asm:140 LDA #60
    case 0xC3F526: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/intro/show_title_screen.asm:140 LDA #60
    // Overlapping static entry reached from 0xC3F526.
    case 0xC3F528: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/intro/show_title_screen.asm:141 CLC
    case 0xC3F529: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:142 SBC @VIRTUAL02
    case 0xC3F52A: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/intro/show_title_screen.asm:143 BRANCHGTS @UNKNOWN8
    case 0xC3F52C: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/intro/show_title_screen.asm:143 BRANCHGTS @UNKNOWN8
    case 0xC3F52E: cpu.execute_instruction<0x10>(0x0000EB, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/intro/show_title_screen.asm:143 BRANCHGTS @UNKNOWN8
    case 0xC3F530: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/intro/show_title_screen.asm:143 BRANCHGTS @UNKNOWN8
    case 0xC3F532: cpu.execute_instruction<0x30>(0x0000E7, 2); return true;
    // src/intro/show_title_screen.asm:145 LDA #0
    case 0xC3F534: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:145 LDA #0
    // Overlapping static entry reached from 0xC3F534.
    case 0xC3F536: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/show_title_screen.asm:146 STA @VIRTUAL02
    case 0xC3F537: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/show_title_screen.asm:147 BRA @UNKNOWN15
    case 0xC3F539: cpu.execute_instruction<0x80>(0x000027, 2); return true;
    // src/intro/show_title_screen.asm:149 LDA @VIRTUAL04
    case 0xC3F53B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/intro/show_title_screen.asm:150 BNE @UNKNOWN14
    case 0xC3F53D: cpu.execute_instruction<0xD0>(0x00001F, 2); return true;
    // src/intro/show_title_screen.asm:151 LDA PAD_PRESS
    case 0xC3F53F: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/intro/show_title_screen.asm:152 AND #PAD::A_BUTTON
    case 0xC3F542: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/intro/show_title_screen.asm:152 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xC3F542.
    case 0xC3F544: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/intro/show_title_screen.asm:153 BNE @UNKNOWN13
    case 0xC3F545: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/intro/show_title_screen.asm:153 BNE @UNKNOWN13
    // Overlapping static entry reached from 0xC3F554.
    case 0xC3F546: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/intro/show_title_screen.asm:154 LDA PAD_PRESS
    case 0xC3F547: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/intro/show_title_screen.asm:154 LDA PAD_PRESS
    // Overlapping static entry reached from 0xC3F546.
    case 0xC3F548: cpu.execute_instruction<0x6D>(0x002900, 3); return true;
    // src/intro/show_title_screen.asm:155 AND #PAD::B_BUTTON
    case 0xC3F54A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/intro/show_title_screen.asm:155 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC3F548.
    case 0xC3F54B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/intro/show_title_screen.asm:155 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC3F54A.
    case 0xC3F54C: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // src/intro/show_title_screen.asm:156 BNE @UNKNOWN13
    case 0xC3F54D: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/intro/show_title_screen.asm:157 LDA PAD_PRESS
    case 0xC3F54F: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/intro/show_title_screen.asm:158 AND #PAD::START_BUTTON
    case 0xC3F552: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001000, 3); return true;
    // src/intro/show_title_screen.asm:158 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xC3F552.
    case 0xC3F554: cpu.execute_instruction<0x10>(0x0000F0, 2); return true;
    // src/intro/show_title_screen.asm:159 BEQ @UNKNOWN14
    case 0xC3F555: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/intro/show_title_screen.asm:159 BEQ @UNKNOWN14
    // Overlapping static entry reached from 0xC3F554.
    case 0xC3F556: cpu.execute_instruction<0x07>(0x0000A9, 2); return true;
    // src/intro/show_title_screen.asm:161 LDA #1
    case 0xC3F557: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/show_title_screen.asm:161 LDA #1
    // Overlapping static entry reached from 0xC3F556.
    case 0xC3F558: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/intro/show_title_screen.asm:161 LDA #1
    // Overlapping static entry reached from 0xC3F557.
    case 0xC3F559: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/intro/show_title_screen.asm:162 STA @VIRTUAL02
    case 0xC3F55A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/show_title_screen.asm:163 BRA @UNKNOWN16
    case 0xC3F55C: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/intro/show_title_screen.asm:165 JSL UNKNOWN_C1004E
    case 0xC3F55E: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/intro/show_title_screen.asm:167 LDA ACTIONSCRIPT_STATE
    case 0xC3F562: cpu.execute_instruction<0xAD>(0x009641, 3); return true;
    // src/intro/show_title_screen.asm:168 BEQ @UNKNOWN12
    case 0xC3F565: cpu.execute_instruction<0xF0>(0x0000D4, 2); return true;
    // src/intro/show_title_screen.asm:169 LDA ACTIONSCRIPT_STATE
    case 0xC3F567: cpu.execute_instruction<0xAD>(0x009641, 3); return true;
    // src/intro/show_title_screen.asm:170 CMP #2
    case 0xC3F56A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/intro/show_title_screen.asm:170 CMP #2
    // Overlapping static entry reached from 0xC3F56A.
    case 0xC3F56C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/intro/show_title_screen.asm:171 BEQ @UNKNOWN12
    case 0xC3F56D: cpu.execute_instruction<0xF0>(0x0000CC, 2); return true;
    // src/intro/show_title_screen.asm:173 LDA TITLE_SCREEN_QUICK_MODE
    case 0xC3F56F: cpu.execute_instruction<0xAD>(0x009F75, 3); return true;
    // src/intro/show_title_screen.asm:174 BNE @UNKNOWN17
    case 0xC3F572: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/intro/show_title_screen.asm:175 LDA ACTIONSCRIPT_STATE
    case 0xC3F574: cpu.execute_instruction<0xAD>(0x009641, 3); return true;
    // src/intro/show_title_screen.asm:176 BNE @UNKNOWN17
    case 0xC3F577: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/intro/show_title_screen.asm:177 JSL UNKNOWN_EF04DC
    case 0xC3F579: cpu.execute_instruction<0x22>(0xEF04DC, 4); return true;
    // src/intro/show_title_screen.asm:178 STA @VIRTUAL02
    case 0xC3F57D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/intro/show_title_screen.asm:180 LDY #0
    case 0xC3F57F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:180 LDY #0
    // Overlapping static entry reached from 0xC3F57F.
    case 0xC3F581: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/show_title_screen.asm:181 LDX #4
    case 0xC3F582: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/intro/show_title_screen.asm:181 LDX #4
    // Overlapping static entry reached from 0xC3F582.
    case 0xC3F584: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/intro/show_title_screen.asm:182 LDA #1
    case 0xC3F585: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/intro/show_title_screen.asm:182 LDA #1
    // Overlapping static entry reached from 0xC3F585.
    case 0xC3F587: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/show_title_screen.asm:183 JSL FADE_OUT_WITH_MOSAIC
    case 0xC3F588: cpu.execute_instruction<0x22>(0xC08814, 4); return true;
    // src/intro/show_title_screen.asm:184 LDA @VIRTUAL04
    case 0xC3F58C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/intro/show_title_screen.asm:185 BNE @UNKNOWN18
    case 0xC3F58E: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/intro/show_title_screen.asm:186 STZ ACTIONSCRIPT_STATE
    case 0xC3F590: cpu.execute_instruction<0x9C>(0x009641, 3); return true;
    // src/intro/show_title_screen.asm:187 LDA #0
    case 0xC3F593: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:187 LDA #0
    // Overlapping static entry reached from 0xC3F593.
    case 0xC3F595: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/intro/show_title_screen.asm:188 JSL UNKNOWN_C474A8
    case 0xC3F596: cpu.execute_instruction<0x22>(0xC474A8, 4); return true;
    // src/intro/show_title_screen.asm:189 JSL UNKNOWN_C0927C
    case 0xC3F59A: cpu.execute_instruction<0x22>(0xC0927C, 4); return true;
    // src/intro/show_title_screen.asm:190 LDA @VIRTUAL02
    case 0xC3F59E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/intro/show_title_screen.asm:191 BRA @UNKNOWN23
    case 0xC3F5A0: cpu.execute_instruction<0x80>(0x000055, 2); return true;
    // src/intro/show_title_screen.asm:193 LDY #0
    case 0xC3F5A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:193 LDY #0
    // Overlapping static entry reached from 0xC3F5A2.
    case 0xC3F5A4: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/intro/show_title_screen.asm:194 STY @LOCAL02
    case 0xC3F5A5: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/intro/show_title_screen.asm:195 BRA @UNKNOWN22
    case 0xC3F5A7: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/intro/show_title_screen.asm:197 TYA
    case 0xC3F5A9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:198 ASL
    case 0xC3F5AA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:199 TAX
    case 0xC3F5AB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:200 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC3F5AC: cpu.execute_instruction<0xBD>(0x000A62, 3); return true;
    // src/intro/show_title_screen.asm:201 CMP #EVENT_SCRIPT::TITLE_SCREEN_1
    case 0xC3F5AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000014, 2); else cpu.execute_instruction<0xC9>(0x000314, 3); return true;
    // src/intro/show_title_screen.asm:201 CMP #EVENT_SCRIPT::TITLE_SCREEN_1
    // Overlapping static entry reached from 0xC3F5AF.
    case 0xC3F5B1: cpu.execute_instruction<0x03>(0x000090, 2); return true;
    // src/intro/show_title_screen.asm:202 BCC @UNKNOWN21
    case 0xC3F5B2: cpu.execute_instruction<0x90>(0x00000C, 2); return true;
    // src/intro/show_title_screen.asm:202 BCC @UNKNOWN21
    // Overlapping static entry reached from 0xC3F5B1.
    case 0xC3F5B3: cpu.execute_instruction<0x0C>(0x001EC9, 3); return true;
    // src/intro/show_title_screen.asm:203 CMP #EVENT_SCRIPT::TITLE_SCREEN_11
    case 0xC3F5B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00031E, 3); return true;
    // src/intro/show_title_screen.asm:203 CMP #EVENT_SCRIPT::TITLE_SCREEN_11
    // Overlapping static entry reached from 0xC3F5B4.
    case 0xC3F5B6: cpu.execute_instruction<0x03>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/intro/show_title_screen.asm:204 BGT @UNKNOWN21
    case 0xC3F5B7: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/intro/show_title_screen.asm:204 BGT @UNKNOWN21
    // Overlapping static entry reached from 0xC3F5B6.
    case 0xC3F5B8: cpu.execute_instruction<0x02>(0x0000B0, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/intro/show_title_screen.asm:204 BGT @UNKNOWN21
    case 0xC3F5B9: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/intro/show_title_screen.asm:205 TYA
    case 0xC3F5BB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:206 JSL UNKNOWN_C09C35
    case 0xC3F5BC: cpu.execute_instruction<0x22>(0xC09C35, 4); return true;
    // src/intro/show_title_screen.asm:208 LDY @LOCAL02
    case 0xC3F5C0: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/intro/show_title_screen.asm:209 TYA
    case 0xC3F5C2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:210 ASL
    case 0xC3F5C3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:211 CLC
    case 0xC3F5C4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:212 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC3F5C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006A, 2); else cpu.execute_instruction<0x69>(0x00116A, 3); return true;
    // src/intro/show_title_screen.asm:212 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC3F5C5.
    case 0xC3F5C7: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/intro/show_title_screen.asm:213 TAX
    case 0xC3F5C8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:214 LDA __BSS_START__,X
    case 0xC3F5C9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:215 AND #$7FFF
    case 0xC3F5CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/intro/show_title_screen.asm:215 AND #$7FFF
    // Overlapping static entry reached from 0xC3F5CC.
    case 0xC3F5CE: cpu.execute_instruction<0x7F>(0x00009D, 4); return true;
    // src/intro/show_title_screen.asm:216 STA __BSS_START__,X
    case 0xC3F5CF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/intro/show_title_screen.asm:217 INY
    case 0xC3F5D2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:218 STY @LOCAL02
    case 0xC3F5D3: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/intro/show_title_screen.asm:220 CPY #MAX_ENTITIES
    case 0xC3F5D5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00001E, 2); else cpu.execute_instruction<0xC0>(0x00001E, 3); return true;
    // src/intro/show_title_screen.asm:220 CPY #MAX_ENTITIES
    // Overlapping static entry reached from 0xC3F5D5.
    case 0xC3F5D7: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/intro/show_title_screen.asm:221 BCC @UNKNOWN19
    case 0xC3F5D8: cpu.execute_instruction<0x90>(0x0000CF, 2); return true;
    // src/intro/show_title_screen.asm:222 JSL UNKNOWN_C08726
    case 0xC3F5DA: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/intro/show_title_screen.asm:223 JSL RELOAD_MAP
    case 0xC3F5DE: cpu.execute_instruction<0x22>(0xC018F3, 4); return true;
    // src/intro/show_title_screen.asm:224 JSL UNDRAW_FLYOVER_TEXT
    case 0xC3F5E2: cpu.execute_instruction<0x22>(0xC4800B, 4); return true;
    // src/intro/show_title_screen.asm:225 SEP #PROC_FLAGS::ACCUM8
    case 0xC3F5E6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:226 LDA #$17
    case 0xC3F5E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/intro/show_title_screen.asm:227 STA TM_MIRROR
    case 0xC3F5EA: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/intro/show_title_screen.asm:227 STA TM_MIRROR
    // Overlapping static entry reached from 0xC3F5E8.
    case 0xC3F5EB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:227 STA TM_MIRROR
    // Overlapping static entry reached from 0xC3F5EB.
    case 0xC3F5EC: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/intro/show_title_screen.asm:228 LDX #1
    case 0xC3F5ED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/intro/show_title_screen.asm:228 LDX #1
    // Overlapping static entry reached from 0xC3F5ED.
    case 0xC3F5EF: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/intro/show_title_screen.asm:229 REP #PROC_FLAGS::ACCUM8
    case 0xC3F5F0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/intro/show_title_screen.asm:230 TXA
    case 0xC3F5F2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/intro/show_title_screen.asm:231 JSL FADE_IN
    case 0xC3F5F3: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/intro/show_title_screen.asm:233 END_C_FUNCTION
    case 0xC3F5F7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/intro/show_title_screen.asm:233 END_C_FUNCTION
    case 0xC3F5F8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
