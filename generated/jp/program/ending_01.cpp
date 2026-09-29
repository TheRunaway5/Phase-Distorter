// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/ending/check_cast_scroll_threshold.asm (source_named).
bool execute_ending_check_cast_scroll_threshold_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BB56: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4BB58: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4BB59: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4BB5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BB5A.
    case 0xC4BB5C: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4BB5D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/ending/check_cast_scroll_threshold.asm:8 LDA #0
    case 0xC4BB5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/check_cast_scroll_threshold.asm:8 LDA #0
    // Overlapping static entry reached from 0xC4BB5E.
    case 0xC4BB60: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/check_cast_scroll_threshold.asm:9 STA @LOCAL00
    case 0xC4BB61: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/check_cast_scroll_threshold.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC4BB63: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/ending/check_cast_scroll_threshold.asm:11 ASL
    case 0xC4BB66: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/check_cast_scroll_threshold.asm:12 TAX
    case 0xC4BB67: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/check_cast_scroll_threshold.asm:13 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4BB68: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/ending/check_cast_scroll_threshold.asm:14 CMP BG3_Y_POS
    case 0xC4BB6B: cpu.execute_instruction<0xCD>(0x00003B, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:15 BGT @UNKNOWN1
    case 0xC4BB6E: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:15 BGT @UNKNOWN1
    case 0xC4BB70: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/ending/check_cast_scroll_threshold.asm:16 LDA #1
    case 0xC4BB72: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/ending/check_cast_scroll_threshold.asm:16 LDA #1
    // Overlapping static entry reached from 0xC4BB72.
    case 0xC4BB74: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/check_cast_scroll_threshold.asm:17 STA @LOCAL00
    case 0xC4BB75: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/check_cast_scroll_threshold.asm:19 LDA @LOCAL00
    case 0xC4BB77: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:20 END_C_FUNCTION
    case 0xC4BB79: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/check_cast_scroll_threshold.asm:20 END_C_FUNCTION
    case 0xC4BB7A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/copy_cast_name_tilemap-jp.asm (source_named).
bool execute_ending_copy_cast_name_tilemap_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BC65: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    case 0xC4BC67: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    case 0xC4BC68: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    case 0xC4BC69: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    case 0xC4BC6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BC6A.
    case 0xC4BC6C: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    case 0xC4BC6D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    case 0xC4BC6E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:13 STY @VIRTUAL04
    case 0xC4BC6F: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:13 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC4BC6C.
    case 0xC4BC70: cpu.execute_instruction<0x04>(0x000086, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:14 STX @VIRTUAL02
    case 0xC4BC71: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:14 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4BC70.
    case 0xC4BC72: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:15 STA @LOCAL03
    case 0xC4BC73: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:16 LDA BG3_Y_POS
    case 0xC4BC75: cpu.execute_instruction<0xAD>(0x00003B, 3); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:17 LSR
    case 0xC4BC78: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:18 LSR
    case 0xC4BC79: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:19 LSR
    case 0xC4BC7A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:20 CLC
    case 0xC4BC7B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:21 ADC @VIRTUAL02
    case 0xC4BC7C: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:22 AND #$001F
    case 0xC4BC7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:22 AND #$001F
    // Overlapping static entry reached from 0xC4BC7E.
    case 0xC4BC80: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:23 STA @LOCAL02
    case 0xC4BC81: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:24 LDX @VIRTUAL04
    case 0xC4BC83: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:25 LDA @LOCAL03
    case 0xC4BC85: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:26 JSL UNKNOWN_C4B8E2
    case 0xC4BC87: cpu.execute_instruction<0x22>(0xC4B8E2, 4); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:27 LDA @VIRTUAL04
    case 0xC4BC8B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:28 AND #$0001
    case 0xC4BC8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:28 AND #$0001
    // Overlapping static entry reached from 0xC4BC8D.
    case 0xC4BC8F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:29 BEQ @UNKNOWN0_
    case 0xC4BC90: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:30 INC @VIRTUAL04
    case 0xC4BC92: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:32 LDA @VIRTUAL04
    case 0xC4BC94: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:33 INC
    case 0xC4BC96: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:34 LSR
    case 0xC4BC97: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:35 STA @VIRTUAL02
    case 0xC4BC98: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:36 LDA @LOCAL02
    case 0xC4BC9A: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:37 ASL
    case 0xC4BC9C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:38 ASL
    case 0xC4BC9D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:39 ASL
    case 0xC4BC9E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:40 ASL
    case 0xC4BC9F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:41 ASL
    case 0xC4BCA0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:42 CLC
    case 0xC4BCA1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:43 ADC @LOCAL03
    case 0xC4BCA2: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:44 CLC
    case 0xC4BCA4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:45 ADC #VRAM::CAST_TILEMAP
    case 0xC4BCA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007C00, 3); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:45 ADC #VRAM::CAST_TILEMAP
    // Overlapping static entry reached from 0xC4BCA5.
    case 0xC4BCA7: cpu.execute_instruction<0x7C>(0x00E538, 3); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:46 SEC
    case 0xC4BCA8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:47 SBC @VIRTUAL02
    case 0xC4BCA9: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:48 STA @VIRTUAL02
    case 0xC4BCAB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:49 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4BCAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:49 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BCAD.
    case 0xC4BCAF: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:49 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4BCB0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:49 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4BCB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:49 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BCB2.
    case 0xC4BCB4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:49 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4BCB5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:50 LDA @LOCAL03
    case 0xC4BCB7: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:51 ASL
    case 0xC4BCB9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:52 CLC
    case 0xC4BCBA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:53 ADC @VIRTUAL06
    case 0xC4BCBB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:54 STA @VIRTUAL06
    case 0xC4BCBD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:55 STA @LOCAL00
    case 0xC4BCBF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:56 LDA @VIRTUAL06+2
    case 0xC4BCC1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:57 STA @LOCAL00+2
    case 0xC4BCC3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:58 LDY @VIRTUAL02
    case 0xC4BCC5: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:59 LDA @VIRTUAL04
    case 0xC4BCC7: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:60 ASL
    case 0xC4BCC9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:61 TAX
    case 0xC4BCCA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:62 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BCCB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:63 LDA #0
    case 0xC4BCCD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:64 JSL PREPARE_VRAM_COPY
    case 0xC4BCCF: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:64 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4BCCD.
    case 0xC4BCD0: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:64 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4BCD0.
    case 0xC4BCD2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0014A5, 3); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:66 LDA @LOCAL02
    case 0xC4BCD3: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:66 LDA @LOCAL02
    // Overlapping static entry reached from 0xC4BCD2.
    case 0xC4BCD4: cpu.execute_instruction<0x14>(0x0000C9, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:67 CMP #31
    case 0xC4BCD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001F, 2); else cpu.execute_instruction<0xC9>(0x00001F, 3); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:67 CMP #31
    // Overlapping static entry reached from 0xC4BCD4.
    case 0xC4BCD6: cpu.execute_instruction<0x1F>(0x0AF000, 4); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:67 CMP #31
    // Overlapping static entry reached from 0xC4BCD5.
    case 0xC4BCD7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:68 BEQ @UNKNOWN0
    case 0xC4BCD8: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:69 LDA @VIRTUAL02
    case 0xC4BCDA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:70 CLC
    case 0xC4BCDC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:71 ADC #32
    case 0xC4BCDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:71 ADC #32
    // Overlapping static entry reached from 0xC4BCDD.
    case 0xC4BCDF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:72 STA @LOCAL01
    case 0xC4BCE0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:73 BRA @UNKNOWN1
    case 0xC4BCE2: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:75 LDA @VIRTUAL02
    case 0xC4BCE4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:76 SEC
    case 0xC4BCE6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:77 SBC #$03E0
    case 0xC4BCE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000E0, 2); else cpu.execute_instruction<0xE9>(0x0003E0, 3); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:77 SBC #$03E0
    // Overlapping static entry reached from 0xC4BCE7.
    case 0xC4BCE9: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:78 STA @LOCAL01
    case 0xC4BCEA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:78 STA @LOCAL01
    // Overlapping static entry reached from 0xC4BCE9.
    case 0xC4BCEB: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:80 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4BCEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:80 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BCEB.
    case 0xC4BCED: cpu.execute_instruction<0x00>(0x000040, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:80 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BCEC.
    case 0xC4BCEE: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:80 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4BCEF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:80 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4BCF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:80 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BCF1.
    case 0xC4BCF3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:80 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4BCF4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:81 LDA @LOCAL03
    case 0xC4BCF6: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:82 ASL
    case 0xC4BCF8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:83 CLC
    case 0xC4BCF9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:84 ADC #64
    case 0xC4BCFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x000040, 3); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:84 ADC #64
    // Overlapping static entry reached from 0xC4BCFA.
    case 0xC4BCFC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:85 CLC
    case 0xC4BCFD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:86 ADC @VIRTUAL06
    case 0xC4BCFE: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:87 STA @VIRTUAL06
    case 0xC4BD00: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:88 STA @LOCAL00
    case 0xC4BD02: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:89 LDA @VIRTUAL06+2
    case 0xC4BD04: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:90 STA @LOCAL00+2
    case 0xC4BD06: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:91 LDA @LOCAL01
    case 0xC4BD08: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:92 TAY
    case 0xC4BD0A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:93 LDA @VIRTUAL04
    case 0xC4BD0B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:94 ASL
    case 0xC4BD0D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:95 TAX
    case 0xC4BD0E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:96 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BD0F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:97 LDA #0
    case 0xC4BD11: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:98 JSL PREPARE_VRAM_COPY
    case 0xC4BD13: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:98 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4BD11.
    case 0xC4BD14: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/ending/copy_cast_name_tilemap-jp.asm:98 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4BD14.
    case 0xC4BD16: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:99 END_C_FUNCTION
    case 0xC4BD17: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/copy_cast_name_tilemap-jp.asm:99 END_C_FUNCTION
    case 0xC4BD18: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/count_photo_flags.asm (source_named).
bool execute_ending_count_photo_flags_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/count_photo_flags.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C473: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/count_photo_flags.asm:8 END_STACK_VARS
    case 0xC4C475: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/count_photo_flags.asm:8 END_STACK_VARS
    case 0xC4C476: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/count_photo_flags.asm:8 END_STACK_VARS
    case 0xC4C477: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/count_photo_flags.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C477.
    case 0xC4C479: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/count_photo_flags.asm:8 END_STACK_VARS
    case 0xC4C47A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/ending/count_photo_flags.asm:9 LDY #0
    case 0xC4C47B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/ending/count_photo_flags.asm:9 LDY #0
    // Overlapping static entry reached from 0xC4C47B.
    case 0xC4C47D: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/ending/count_photo_flags.asm:10 STY @LOCAL01
    case 0xC4C47E: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/ending/count_photo_flags.asm:11 TYX
    case 0xC4C480: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/ending/count_photo_flags.asm:12 STX @LOCAL00
    case 0xC4C481: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/ending/count_photo_flags.asm:13 BRA @LOOP_ENTRY
    case 0xC4C483: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/ending/count_photo_flags.asm:15 TXA
    case 0xC4C485: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/ending/count_photo_flags.asm:16 LDY #.SIZEOF(photographer_config_entry)
    case 0xC4C486: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003E, 2); else cpu.execute_instruction<0xA0>(0x00003E, 3); return true;
    // src/ending/count_photo_flags.asm:16 LDY #.SIZEOF(photographer_config_entry)
    // Overlapping static entry reached from 0xC4C486.
    case 0xC4C488: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/count_photo_flags.asm:17 JSL MULT168
    case 0xC4C489: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/ending/count_photo_flags.asm:18 TAX
    case 0xC4C48D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/count_photo_flags.asm:19 LDA f:PHOTOGRAPHER_CFG_TABLE,X
    case 0xC4C48E: cpu.execute_instruction<0xBF>(0xE123E1, 4); return true;
    // src/ending/count_photo_flags.asm:20 JSL GET_EVENT_FLAG
    case 0xC4C492: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/ending/count_photo_flags.asm:21 CMP #0
    case 0xC4C496: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/ending/count_photo_flags.asm:21 CMP #0
    // Overlapping static entry reached from 0xC4C496.
    case 0xC4C498: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/count_photo_flags.asm:22 BEQ @EVENT_FLAG_UNSET
    case 0xC4C499: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/ending/count_photo_flags.asm:23 LDY @LOCAL01
    case 0xC4C49B: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/ending/count_photo_flags.asm:24 INY
    case 0xC4C49D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/ending/count_photo_flags.asm:25 STY @LOCAL01
    case 0xC4C49E: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/ending/count_photo_flags.asm:27 LDX @LOCAL00
    case 0xC4C4A0: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/ending/count_photo_flags.asm:28 INX
    case 0xC4C4A2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/ending/count_photo_flags.asm:29 STX @LOCAL00
    case 0xC4C4A3: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/ending/count_photo_flags.asm:31 CPX #NUM_PHOTOS
    case 0xC4C4A5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/ending/count_photo_flags.asm:31 CPX #NUM_PHOTOS
    // Overlapping static entry reached from 0xC4C4A5.
    case 0xC4C4A7: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/ending/count_photo_flags.asm:32 BCC @LOOP_BEGIN
    case 0xC4C4A8: cpu.execute_instruction<0x90>(0x0000DB, 2); return true;
    // src/ending/count_photo_flags.asm:33 LDY @LOCAL01
    case 0xC4C4AA: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/ending/count_photo_flags.asm:34 TYA
    case 0xC4C4AC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/count_photo_flags.asm:35 END_C_FUNCTION
    case 0xC4C4AD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/count_photo_flags.asm:35 END_C_FUNCTION
    case 0xC4C4AE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/create_entity_at_v01_plus_bg3y.asm (source_named).
bool execute_ending_create_entity_at_v01_plus_bg3y_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BF08: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:11 END_STACK_VARS
    case 0xC4BF0A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:11 END_STACK_VARS
    case 0xC4BF0B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:11 END_STACK_VARS
    case 0xC4BF0C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:11 END_STACK_VARS
    case 0xC4BF0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BF0D.
    case 0xC4BF0F: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:11 END_STACK_VARS
    case 0xC4BF10: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:11 END_STACK_VARS
    case 0xC4BF11: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:12 STX @VIRTUAL02
    case 0xC4BF12: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:12 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4BF0F.
    case 0xC4BF13: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:13 STA @LOCAL02
    case 0xC4BF14: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:14 LDA INITIAL_CAST_ENTITY_SLEEP_FRAMES
    case 0xC4BF16: cpu.execute_instruction<0xAD>(0x00B6A6, 3); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:15 AND #$0003
    case 0xC4BF19: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:15 AND #$0003
    // Overlapping static entry reached from 0xC4BF19.
    case 0xC4BF1B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:16 STA NEW_ENTITY_VAR0
    case 0xC4BF1C: cpu.execute_instruction<0x8D>(0x000A2E, 3); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:17 INC INITIAL_CAST_ENTITY_SLEEP_FRAMES
    case 0xC4BF1F: cpu.execute_instruction<0xEE>(0x00B6A6, 3); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:18 LDA CURRENT_ENTITY_SLOT
    case 0xC4BF22: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:19 ASL
    case 0xC4BF25: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:20 TAX
    case 0xC4BF26: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:21 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4BF27: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:22 STA @LOCAL00
    case 0xC4BF2A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:23 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC4BF2C: cpu.execute_instruction<0xBD>(0x000E90, 3); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:24 CLC
    case 0xC4BF2F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:25 ADC BG3_Y_POS
    case 0xC4BF30: cpu.execute_instruction<0x6D>(0x00003B, 3); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:26 STA @LOCAL01
    case 0xC4BF33: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:27 LDY #.LOWORD(-1)
    case 0xC4BF35: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:27 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4BF35.
    case 0xC4BF37: cpu.execute_instruction<0xFF>(0xA502A6, 4); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:28 LDX @VIRTUAL02
    case 0xC4BF38: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:29 LDA @LOCAL02
    case 0xC4BF3A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:29 LDA @LOCAL02
    // Overlapping static entry reached from 0xC4BF37.
    case 0xC4BF3B: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:30 JSL CREATE_ENTITY
    case 0xC4BF3C: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/ending/create_entity_at_v01_plus_bg3y.asm:30 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4BF3B.
    case 0xC4BF3D: cpu.execute_instruction<0x5F>(0x2BC01E, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:31 END_C_FUNCTION
    case 0xC4BF40: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/create_entity_at_v01_plus_bg3y.asm:31 END_C_FUNCTION
    case 0xC4BF41: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/credits_scroll_frame-jp.asm (source_named).
bool execute_ending_credits_scroll_frame_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC0FB8D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:13 END_STACK_VARS
    case 0xC0FB8F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:13 END_STACK_VARS
    case 0xC0FB90: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:13 END_STACK_VARS
    case 0xC0FB91: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x00FFDC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC0FB91.
    case 0xC0FB93: cpu.execute_instruction<0xFF>(0x3BAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:13 END_STACK_VARS
    case 0xC0FB94: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:14 LDA BG3_Y_POS
    case 0xC0FB95: cpu.execute_instruction<0xAD>(0x00003B, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:14 LDA BG3_Y_POS
    // Overlapping static entry reached from 0xC0FB93.
    case 0xC0FB97: cpu.execute_instruction<0x00>(0x0000CD, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:15 CMP CREDITS_NEXT_CREDIT_POSITION
    case 0xC0FB98: cpu.execute_instruction<0xCD>(0x00B6AC, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:16 BCS @UNKNOWN1
    case 0xC0FB9B: cpu.execute_instruction<0xB0>(0x000003, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:17 JMP @UNKNOWN37
    case 0xC0FB9D: cpu.execute_instruction<0x4C>(0x00FF03, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:19 LDA CREDITS_CURRENT_ROW
    case 0xC0FBA0: cpu.execute_instruction<0xAD>(0x00B6C0, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:20 STA @LOCAL07
    case 0xC0FBA3: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:21 LDA CREDITS_CURRENT_ROW
    case 0xC0FBA5: cpu.execute_instruction<0xAD>(0x00B6C0, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:22 INC
    case 0xC0FBA8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:23 STA @LOCAL06
    case 0xC0FBA9: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:24 LDA CREDITS_CURRENT_ROW
    case 0xC0FBAB: cpu.execute_instruction<0xAD>(0x00B6C0, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:25 INC
    case 0xC0FBAE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:26 INC
    case 0xC0FBAF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:27 AND #$000F
    case 0xC0FBB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:27 AND #$000F
    // Overlapping static entry reached from 0xC0FBB0.
    case 0xC0FBB2: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:28 STA CREDITS_CURRENT_ROW
    case 0xC0FBB3: cpu.execute_instruction<0x8D>(0x00B6C0, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:29 LDA BG3_Y_POS
    case 0xC0FBB6: cpu.execute_instruction<0xAD>(0x00003B, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:30 LSR
    case 0xC0FBB9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:31 LSR
    case 0xC0FBBA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:32 LSR
    case 0xC0FBBB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:33 CLC
    case 0xC0FBBC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:34 ADC #$001D
    case 0xC0FBBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001D, 2); else cpu.execute_instruction<0x69>(0x00001D, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:34 ADC #$001D
    // Overlapping static entry reached from 0xC0FBBD.
    case 0xC0FBBF: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:35 AND #$001F
    case 0xC0FBC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:35 AND #$001F
    // Overlapping static entry reached from 0xC0FBC0.
    case 0xC0FBC2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:36 STA @LOCAL05
    case 0xC0FBC3: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:37 LDA #0
    case 0xC0FBC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:37 LDA #0
    // Overlapping static entry reached from 0xC0FBC5.
    case 0xC0FBC7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:38 STA @VIRTUAL04
    case 0xC0FBC8: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:39 MOVE_INT CREDITS_SCRIPT_DATA, @VIRTUAL06
    case 0xC0FBCA: cpu.execute_instruction<0xAD>(0x00B6B0, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:39 MOVE_INT CREDITS_SCRIPT_DATA, @VIRTUAL06
    case 0xC0FBCD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:39 MOVE_INT CREDITS_SCRIPT_DATA, @VIRTUAL06
    case 0xC0FBCF: cpu.execute_instruction<0xAD>(0x00B6B2, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:39 MOVE_INT CREDITS_SCRIPT_DATA, @VIRTUAL06
    case 0xC0FBD2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:40 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FBD4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:40 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FBD6: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:40 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FBD8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:40 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FBDA: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:41 LDA @LOCAL07
    case 0xC0FBDC: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:42 ASL
    case 0xC0FBDE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:43 ASL
    case 0xC0FBDF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:44 ASL
    case 0xC0FBE0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:45 ASL
    case 0xC0FBE1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:46 ASL
    case 0xC0FBE2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:47 ASL
    case 0xC0FBE3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:48 CLC
    case 0xC0FBE4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:49 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0FBE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000076, 2); else cpu.execute_instruction<0x69>(0x008176, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:49 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0FBE5.
    case 0xC0FBE7: cpu.execute_instruction<0x81>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:50 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FBE8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:50 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC0FBE7.
    case 0xC0FBE9: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:50 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FBEA: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:50 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FBEB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:50 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FBED: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:50 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FBEE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:50 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FBF0: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:51 REP #PROC_FLAGS::ACCUM8
    case 0xC0FBF2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:52 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FBF4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:52 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FBF6: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:52 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FBF8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:52 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FBFA: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:53 LDA @LOCAL06
    case 0xC0FBFC: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:54 ASL
    case 0xC0FBFE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:55 ASL
    case 0xC0FBFF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:56 ASL
    case 0xC0FC00: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:57 ASL
    case 0xC0FC01: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:58 ASL
    case 0xC0FC02: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:59 ASL
    case 0xC0FC03: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:60 CLC
    case 0xC0FC04: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:61 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0FC05: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000076, 2); else cpu.execute_instruction<0x69>(0x008176, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:61 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0FC05.
    case 0xC0FC07: cpu.execute_instruction<0x81>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:62 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC0FC08: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:62 PROMOTENEARPTRA @VIRTUAL0A
    // Overlapping static entry reached from 0xC0FC07.
    case 0xC0FC09: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:62 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC0FC0A: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:62 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC0FC0B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:62 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC0FC0D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:62 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC0FC0E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:62 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC0FC10: cpu.execute_instruction<0x64>(0x00000D, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:63 REP #PROC_FLAGS::ACCUM8
    case 0xC0FC12: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:64 LDA [@LOCAL04]
    case 0xC0FC14: cpu.execute_instruction<0xA7>(0x00001A, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:65 AND #$00FF
    case 0xC0FC16: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:65 AND #$00FF
    // Overlapping static entry reached from 0xC0FC16.
    case 0xC0FC18: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:66 STA @LOCAL02
    case 0xC0FC19: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:67 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FC1B: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:67 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FC1D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:67 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FC1F: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:67 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FC21: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:68 INC @VIRTUAL06
    case 0xC0FC23: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:69 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FC25: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:69 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FC27: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:69 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FC29: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:69 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FC2B: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:70 LDA @LOCAL02
    case 0xC0FC2D: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:71 CMP #1
    case 0xC0FC2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:71 CMP #1
    // Overlapping static entry reached from 0xC0FC2F.
    case 0xC0FC31: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:72 BEQ @UNKNOWN6
    case 0xC0FC32: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:73 CMP #2
    case 0xC0FC34: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:73 CMP #2
    // Overlapping static entry reached from 0xC0FC34.
    case 0xC0FC36: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:74 BEQL @UNKNOWN9
    case 0xC0FC37: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:74 BEQL @UNKNOWN9
    case 0xC0FC39: cpu.execute_instruction<0x4C>(0x00FCEA, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:75 CMP #3
    case 0xC0FC3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:75 CMP #3
    // Overlapping static entry reached from 0xC0FC3C.
    case 0xC0FC3E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:76 BEQL @UNKNOWN14
    case 0xC0FC3F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:76 BEQL @UNKNOWN14
    case 0xC0FC41: cpu.execute_instruction<0x4C>(0x00FDCB, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:77 CMP #4
    case 0xC0FC44: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:77 CMP #4
    // Overlapping static entry reached from 0xC0FC44.
    case 0xC0FC46: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:78 BEQL @UNKNOWN15
    case 0xC0FC47: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:78 BEQL @UNKNOWN15
    case 0xC0FC49: cpu.execute_instruction<0x4C>(0x00FDDD, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:79 CMP #<-1
    case 0xC0FC4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:79 CMP #<-1
    // Overlapping static entry reached from 0xC0FC4C.
    case 0xC0FC4E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:80 BEQL @UNKNOWN35
    case 0xC0FC4F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:80 BEQL @UNKNOWN35
    case 0xC0FC51: cpu.execute_instruction<0x4C>(0x00FEE9, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:81 JMP @UNKNOWN36
    case 0xC0FC54: cpu.execute_instruction<0x4C>(0x00FEEF, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:83 LDA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0FC57: cpu.execute_instruction<0xAD>(0x00B6AC, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:84 CLC
    case 0xC0FC5A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:85 ADC #8
    case 0xC0FC5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:85 ADC #8
    // Overlapping static entry reached from 0xC0FC5B.
    case 0xC0FC5D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:86 STA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0FC5E: cpu.execute_instruction<0x8D>(0x00B6AC, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:87 BRA @UNKNOWN8
    case 0xC0FC61: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:89 AND #$00FF
    case 0xC0FC63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:89 AND #$00FF
    // Overlapping static entry reached from 0xC0FC63.
    case 0xC0FC65: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:90 CLC
    case 0xC0FC66: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:91 ADC #$2000
    case 0xC0FC67: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002000, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:91 ADC #$2000
    // Overlapping static entry reached from 0xC0FC67.
    case 0xC0FC69: cpu.execute_instruction<0x20>(0x0016A6, 3); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:92 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC0FC6A: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:92 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC0FC6C: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:92 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC0FC6E: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:92 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC0FC70: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:93 STA [@VIRTUAL06]
    case 0xC0FC72: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:94 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FC74: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:94 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FC76: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:94 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FC78: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:94 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FC7A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:95 INC @VIRTUAL06
    case 0xC0FC7C: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:96 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FC7E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:96 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FC80: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:96 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FC82: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:96 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FC84: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:97 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0FC86: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:97 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0FC88: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:97 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0FC8A: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:97 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0FC8C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:98 INC @VIRTUAL06
    case 0xC0FC8E: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:99 INC @VIRTUAL06
    case 0xC0FC90: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:100 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FC92: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:100 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FC94: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:100 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FC96: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:100 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FC98: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:101 INC @VIRTUAL04
    case 0xC0FC9A: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:103 LDA [@LOCAL04]
    case 0xC0FC9C: cpu.execute_instruction<0xA7>(0x00001A, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:104 AND #$00FF
    case 0xC0FC9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:104 AND #$00FF
    // Overlapping static entry reached from 0xC0FC9E.
    case 0xC0FCA0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:105 BNE @UNKNOWN7
    case 0xC0FCA1: cpu.execute_instruction<0xD0>(0x0000C0, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:106 LDA @VIRTUAL04
    case 0xC0FCA3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:107 LSR
    case 0xC0FCA5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:108 STA @VIRTUAL02
    case 0xC0FCA6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:109 LDA @LOCAL05
    case 0xC0FCA8: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:110 ASL
    case 0xC0FCAA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:111 ASL
    case 0xC0FCAB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:112 ASL
    case 0xC0FCAC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:113 ASL
    case 0xC0FCAD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:114 ASL
    case 0xC0FCAE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:115 CLC
    case 0xC0FCAF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:116 ADC #$6C10
    case 0xC0FCB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x006C10, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:116 ADC #$6C10
    // Overlapping static entry reached from 0xC0FCB0.
    case 0xC0FCB2: cpu.execute_instruction<0x6C>(0x00E538, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:117 SEC
    case 0xC0FCB3: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:118 SBC @VIRTUAL02
    case 0xC0FCB4: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:119 STA @LOCAL02
    case 0xC0FCB6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:120 LDA @LOCAL07
    case 0xC0FCB8: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:121 ASL
    case 0xC0FCBA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:122 ASL
    case 0xC0FCBB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:123 ASL
    case 0xC0FCBC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:124 ASL
    case 0xC0FCBD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:125 ASL
    case 0xC0FCBE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:126 ASL
    case 0xC0FCBF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:127 CLC
    case 0xC0FCC0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:128 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0FCC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000076, 2); else cpu.execute_instruction<0x69>(0x008176, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:128 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0FCC1.
    case 0xC0FCC3: cpu.execute_instruction<0x81>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:129 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FCC4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:129 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC0FCC3.
    case 0xC0FCC5: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:129 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FCC6: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:129 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FCC7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:129 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FCC9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:129 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FCCA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:129 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FCCC: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:130 REP #PROC_FLAGS::ACCUM8
    case 0xC0FCCE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:131 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FCD0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:131 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FCD2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:131 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FCD4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:131 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FCD6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:132 LDA @LOCAL02
    case 0xC0FCD8: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:133 TAY
    case 0xC0FCDA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:134 LDA @VIRTUAL04
    case 0xC0FCDB: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:135 ASL
    case 0xC0FCDD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:136 TAX
    case 0xC0FCDE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:137 SEP #PROC_FLAGS::ACCUM8
    case 0xC0FCDF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:138 LDA #0
    case 0xC0FCE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:139 JSL ENQUEUE_CREDITS_DMA
    case 0xC0FCE3: cpu.execute_instruction<0x22>(0xC4BFFE, 4); return true;
    // src/ending/credits_scroll_frame-jp.asm:139 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0FCE1.
    case 0xC0FCE4: cpu.execute_instruction<0xFE>(0x00C4BF, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:140 JMP @UNKNOWN36
    case 0xC0FCE7: cpu.execute_instruction<0x4C>(0x00FEEF, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:143 LDA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0FCEA: cpu.execute_instruction<0xAD>(0x00B6AC, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:144 CLC
    case 0xC0FCED: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:145 ADC #16
    case 0xC0FCEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:145 ADC #16
    // Overlapping static entry reached from 0xC0FCEE.
    case 0xC0FCF0: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:146 STA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0FCF1: cpu.execute_instruction<0x8D>(0x00B6AC, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:147 BRA @UNKNOWN11
    case 0xC0FCF4: cpu.execute_instruction<0x80>(0x000040, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:149 AND #$00FF
    case 0xC0FCF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:149 AND #$00FF
    // Overlapping static entry reached from 0xC0FCF6.
    case 0xC0FCF8: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:150 CLC
    case 0xC0FCF9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:151 ADC #$2400
    case 0xC0FCFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002400, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:151 ADC #$2400
    // Overlapping static entry reached from 0xC0FCFA.
    case 0xC0FCFC: cpu.execute_instruction<0x24>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:152 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC0FCFD: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:152 MOVE_INTX @LOCAL03, @VIRTUAL06
    // Overlapping static entry reached from 0xC0FCFC.
    case 0xC0FCFE: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:152 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC0FCFF: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:152 MOVE_INTX @LOCAL03, @VIRTUAL06
    // Overlapping static entry reached from 0xC0FCFE.
    case 0xC0FD00: cpu.execute_instruction<0x06>(0x0000A6, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:152 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC0FD01: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:152 MOVE_INTX @LOCAL03, @VIRTUAL06
    // Overlapping static entry reached from 0xC0FD00.
    case 0xC0FD02: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:152 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC0FD03: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:153 STA [@VIRTUAL06]
    case 0xC0FD05: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:154 INC @VIRTUAL06
    case 0xC0FD07: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:155 INC @VIRTUAL06
    case 0xC0FD09: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:156 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FD0B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:156 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FD0D: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:156 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FD0F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:156 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FD11: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:157 LDA [@LOCAL04]
    case 0xC0FD13: cpu.execute_instruction<0xA7>(0x00001A, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:158 AND #$00FF
    case 0xC0FD15: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:158 AND #$00FF
    // Overlapping static entry reached from 0xC0FD15.
    case 0xC0FD17: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:159 CLC
    case 0xC0FD18: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:160 ADC #$2410
    case 0xC0FD19: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x002410, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:160 ADC #$2410
    // Overlapping static entry reached from 0xC0FD19.
    case 0xC0FD1B: cpu.execute_instruction<0x24>(0x000087, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:161 STA [@VIRTUAL0A]
    case 0xC0FD1C: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:161 STA [@VIRTUAL0A]
    // Overlapping static entry reached from 0xC0FD1B.
    case 0xC0FD1D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:162 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FD1E: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:162 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FD20: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:162 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FD22: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:162 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FD24: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:163 INC @VIRTUAL06
    case 0xC0FD26: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:164 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FD28: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:164 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FD2A: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:164 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FD2C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:164 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FD2E: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:165 INC @VIRTUAL0A
    case 0xC0FD30: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:166 INC @VIRTUAL0A
    case 0xC0FD32: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:167 INC @VIRTUAL04
    case 0xC0FD34: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:169 LDA [@LOCAL04]
    case 0xC0FD36: cpu.execute_instruction<0xA7>(0x00001A, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:170 AND #$00FF
    case 0xC0FD38: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:170 AND #$00FF
    // Overlapping static entry reached from 0xC0FD38.
    case 0xC0FD3A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:171 BNE @UNKNOWN10
    case 0xC0FD3B: cpu.execute_instruction<0xD0>(0x0000B9, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:172 LDA @VIRTUAL04
    case 0xC0FD3D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:173 LSR
    case 0xC0FD3F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:174 STA @VIRTUAL02
    case 0xC0FD40: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:175 LDA @LOCAL05
    case 0xC0FD42: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:176 ASL
    case 0xC0FD44: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:177 ASL
    case 0xC0FD45: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:178 ASL
    case 0xC0FD46: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:179 ASL
    case 0xC0FD47: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:180 ASL
    case 0xC0FD48: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:181 CLC
    case 0xC0FD49: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:182 ADC #$6C10
    case 0xC0FD4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x006C10, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:182 ADC #$6C10
    // Overlapping static entry reached from 0xC0FD4A.
    case 0xC0FD4C: cpu.execute_instruction<0x6C>(0x00E538, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:183 SEC
    case 0xC0FD4D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:184 SBC @VIRTUAL02
    case 0xC0FD4E: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:185 STA @VIRTUAL02
    case 0xC0FD50: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:186 LDA @LOCAL07
    case 0xC0FD52: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:187 ASL
    case 0xC0FD54: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:188 ASL
    case 0xC0FD55: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:189 ASL
    case 0xC0FD56: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:190 ASL
    case 0xC0FD57: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:191 ASL
    case 0xC0FD58: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:192 ASL
    case 0xC0FD59: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:193 CLC
    case 0xC0FD5A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:194 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0FD5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000076, 2); else cpu.execute_instruction<0x69>(0x008176, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:194 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0FD5B.
    case 0xC0FD5D: cpu.execute_instruction<0x81>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:195 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FD5E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:195 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC0FD5D.
    case 0xC0FD5F: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:195 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FD60: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:195 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FD61: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:195 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FD63: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:195 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FD64: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:195 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FD66: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:196 REP #PROC_FLAGS::ACCUM8
    case 0xC0FD68: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:197 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FD6A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:197 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FD6C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:197 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FD6E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:197 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FD70: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:198 LDY @VIRTUAL02
    case 0xC0FD72: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:199 LDA @VIRTUAL04
    case 0xC0FD74: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:200 ASL
    case 0xC0FD76: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:201 TAX
    case 0xC0FD77: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:202 SEP #PROC_FLAGS::ACCUM8
    case 0xC0FD78: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:203 LDA #0
    case 0xC0FD7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:204 JSL ENQUEUE_CREDITS_DMA
    case 0xC0FD7C: cpu.execute_instruction<0x22>(0xC4BFFE, 4); return true;
    // src/ending/credits_scroll_frame-jp.asm:204 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0FD7A.
    case 0xC0FD7D: cpu.execute_instruction<0xFE>(0x00C4BF, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:205 LDA @LOCAL05
    case 0xC0FD80: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:207 CMP #31
    case 0xC0FD82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001F, 2); else cpu.execute_instruction<0xC9>(0x00001F, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:207 CMP #31
    // Overlapping static entry reached from 0xC0FD82.
    case 0xC0FD84: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:208 BEQ @UNKNOWN12
    case 0xC0FD85: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:209 LDA @VIRTUAL02
    case 0xC0FD87: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:210 CLC
    case 0xC0FD89: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:211 ADC #32
    case 0xC0FD8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:211 ADC #32
    // Overlapping static entry reached from 0xC0FD8A.
    case 0xC0FD8C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:212 STA @LOCAL01
    case 0xC0FD8D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:213 BRA @UNKNOWN13
    case 0xC0FD8F: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:215 LDA @VIRTUAL02
    case 0xC0FD91: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:216 SEC
    case 0xC0FD93: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:217 SBC #$03E0
    case 0xC0FD94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000E0, 2); else cpu.execute_instruction<0xE9>(0x0003E0, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:217 SBC #$03E0
    // Overlapping static entry reached from 0xC0FD94.
    case 0xC0FD96: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:218 STA @LOCAL01
    case 0xC0FD97: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:218 STA @LOCAL01
    // Overlapping static entry reached from 0xC0FD96.
    case 0xC0FD98: cpu.execute_instruction<0x12>(0x0000A5, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:220 LDA @LOCAL06
    case 0xC0FD99: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:220 LDA @LOCAL06
    // Overlapping static entry reached from 0xC0FD98.
    case 0xC0FD9A: cpu.execute_instruction<0x20>(0x000A0A, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:221 ASL
    case 0xC0FD9B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:222 ASL
    case 0xC0FD9C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:223 ASL
    case 0xC0FD9D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:224 ASL
    case 0xC0FD9E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:225 ASL
    case 0xC0FD9F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:226 ASL
    case 0xC0FDA0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:227 CLC
    case 0xC0FDA1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:228 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0FDA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000076, 2); else cpu.execute_instruction<0x69>(0x008176, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:228 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0FDA2.
    case 0xC0FDA4: cpu.execute_instruction<0x81>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:229 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FDA5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:229 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC0FDA4.
    case 0xC0FDA6: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:229 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FDA7: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:229 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FDA8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:229 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FDAA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:229 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FDAB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:229 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FDAD: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:230 REP #PROC_FLAGS::ACCUM8
    case 0xC0FDAF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:231 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FDB1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:231 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FDB3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:231 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FDB5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:231 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FDB7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:232 LDA @LOCAL01
    case 0xC0FDB9: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:233 TAY
    case 0xC0FDBB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:234 LDA @VIRTUAL04
    case 0xC0FDBC: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:235 ASL
    case 0xC0FDBE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:236 TAX
    case 0xC0FDBF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:237 SEP #PROC_FLAGS::ACCUM8
    case 0xC0FDC0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:238 LDA #0
    case 0xC0FDC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:239 JSL ENQUEUE_CREDITS_DMA
    case 0xC0FDC4: cpu.execute_instruction<0x22>(0xC4BFFE, 4); return true;
    // src/ending/credits_scroll_frame-jp.asm:239 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0FDC2.
    case 0xC0FDC5: cpu.execute_instruction<0xFE>(0x00C4BF, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:240 JMP @UNKNOWN36
    case 0xC0FDC8: cpu.execute_instruction<0x4C>(0x00FEEF, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:243 LDA [@LOCAL04]
    case 0xC0FDCB: cpu.execute_instruction<0xA7>(0x00001A, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:244 AND #$00FF
    case 0xC0FDCD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:244 AND #$00FF
    // Overlapping static entry reached from 0xC0FDCD.
    case 0xC0FDCF: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:245 ASL
    case 0xC0FDD0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:246 ASL
    case 0xC0FDD1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:247 ASL
    case 0xC0FDD2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:248 CLC
    case 0xC0FDD3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:249 ADC CREDITS_NEXT_CREDIT_POSITION
    case 0xC0FDD4: cpu.execute_instruction<0x6D>(0x00B6AC, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:250 STA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0FDD7: cpu.execute_instruction<0x8D>(0x00B6AC, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:251 JMP @UNKNOWN36
    case 0xC0FDDA: cpu.execute_instruction<0x4C>(0x00FEEF, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:253 LDX #.LOWORD(GAME_STATE) + game_state::earthbound_playername
    case 0xC0FDDD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000B5, 2); else cpu.execute_instruction<0xA2>(0x009AB5, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:253 LDX #.LOWORD(GAME_STATE) + game_state::earthbound_playername
    // Overlapping static entry reached from 0xC0FDDD.
    case 0xC0FDDF: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:254 LDA __BSS_START__,X
    case 0xC0FDE0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:255 AND #$00FF
    case 0xC0FDE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:255 AND #$00FF
    // Overlapping static entry reached from 0xC0FDE3.
    case 0xC0FDE5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:256 BEQL @UNKNOWN34
    case 0xC0FDE6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:256 BEQL @UNKNOWN34
    case 0xC0FDE8: cpu.execute_instruction<0x4C>(0x00FED5, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:257 LDA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0FDEB: cpu.execute_instruction<0xAD>(0x00B6AC, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:258 CLC
    case 0xC0FDEE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:259 ADC #16
    case 0xC0FDEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:259 ADC #16
    // Overlapping static entry reached from 0xC0FDEF.
    case 0xC0FDF1: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:260 STA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0FDF2: cpu.execute_instruction<0x8D>(0x00B6AC, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:261 LDY #0
    case 0xC0FDF5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:261 LDY #0
    // Overlapping static entry reached from 0xC0FDF5.
    case 0xC0FDF7: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:262 BRA @UNKNOWN30
    case 0xC0FDF8: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:264 AND #$00FF
    case 0xC0FDFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:264 AND #$00FF
    // Overlapping static entry reached from 0xC0FDFA.
    case 0xC0FDFC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:265 STA @VIRTUAL02
    case 0xC0FDFD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:266 AND #$00F0
    case 0xC0FDFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x0000F0, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:266 AND #$00F0
    // Overlapping static entry reached from 0xC0FDFF.
    case 0xC0FE01: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:267 CLC
    case 0xC0FE02: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:268 ADC @VIRTUAL02
    case 0xC0FE03: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:269 CLC
    case 0xC0FE05: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:270 ADC #$2400
    case 0xC0FE06: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002400, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:270 ADC #$2400
    // Overlapping static entry reached from 0xC0FE06.
    case 0xC0FE08: cpu.execute_instruction<0x24>(0x000048, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:271 PHA
    case 0xC0FE09: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:272 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0FE0A: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:272 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0FE0C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:272 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0FE0E: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:272 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC0FE10: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:273 PLA
    case 0xC0FE12: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:274 STA [@VIRTUAL06]
    case 0xC0FE13: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:275 INC @VIRTUAL06
    case 0xC0FE15: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:276 INC @VIRTUAL06
    case 0xC0FE17: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:277 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FE19: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:277 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FE1B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:277 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FE1D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:277 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC0FE1F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:278 LDA __BSS_START__,X
    case 0xC0FE21: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:279 AND #$00FF
    case 0xC0FE24: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:279 AND #$00FF
    // Overlapping static entry reached from 0xC0FE24.
    case 0xC0FE26: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:280 STA @VIRTUAL02
    case 0xC0FE27: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:281 AND #$00F0
    case 0xC0FE29: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x0000F0, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:281 AND #$00F0
    // Overlapping static entry reached from 0xC0FE29.
    case 0xC0FE2B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:282 CLC
    case 0xC0FE2C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:283 ADC @VIRTUAL02
    case 0xC0FE2D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:284 CLC
    case 0xC0FE2F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:285 ADC #$2410
    case 0xC0FE30: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x002410, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:285 ADC #$2410
    // Overlapping static entry reached from 0xC0FE30.
    case 0xC0FE32: cpu.execute_instruction<0x24>(0x000087, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:286 STA [@VIRTUAL0A]
    case 0xC0FE33: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:286 STA [@VIRTUAL0A]
    // Overlapping static entry reached from 0xC0FE32.
    case 0xC0FE34: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:287 INC @VIRTUAL0A
    case 0xC0FE35: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:288 INC @VIRTUAL0A
    case 0xC0FE37: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:289 INX
    case 0xC0FE39: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:290 INC @VIRTUAL04
    case 0xC0FE3A: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:291 INY
    case 0xC0FE3C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:293 LDA __BSS_START__,X
    case 0xC0FE3D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:294 AND #$00FF
    case 0xC0FE40: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:294 AND #$00FF
    // Overlapping static entry reached from 0xC0FE40.
    case 0xC0FE42: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:295 BEQ @UNKNOWN31
    case 0xC0FE43: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:296 CPY #24
    case 0xC0FE45: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000018, 2); else cpu.execute_instruction<0xC0>(0x000018, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:296 CPY #24
    // Overlapping static entry reached from 0xC0FE45.
    case 0xC0FE47: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:297 BCC @UNKNOWN29
    case 0xC0FE48: cpu.execute_instruction<0x90>(0x0000B0, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:299 LDA @VIRTUAL04
    case 0xC0FE4A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:300 LSR
    case 0xC0FE4C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:301 STA @VIRTUAL02
    case 0xC0FE4D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:302 LDA @LOCAL05
    case 0xC0FE4F: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:303 ASL
    case 0xC0FE51: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:304 ASL
    case 0xC0FE52: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:305 ASL
    case 0xC0FE53: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:306 ASL
    case 0xC0FE54: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:307 ASL
    case 0xC0FE55: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:308 CLC
    case 0xC0FE56: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:309 ADC #$6C10
    case 0xC0FE57: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x006C10, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:309 ADC #$6C10
    // Overlapping static entry reached from 0xC0FE57.
    case 0xC0FE59: cpu.execute_instruction<0x6C>(0x00E538, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:310 SEC
    case 0xC0FE5A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:311 SBC @VIRTUAL02
    case 0xC0FE5B: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:312 STA @VIRTUAL02
    case 0xC0FE5D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:313 LDA @LOCAL07
    case 0xC0FE5F: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:314 ASL
    case 0xC0FE61: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:315 ASL
    case 0xC0FE62: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:316 ASL
    case 0xC0FE63: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:317 ASL
    case 0xC0FE64: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:318 ASL
    case 0xC0FE65: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:319 ASL
    case 0xC0FE66: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:320 CLC
    case 0xC0FE67: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:321 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0FE68: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000076, 2); else cpu.execute_instruction<0x69>(0x008176, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:321 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0FE68.
    case 0xC0FE6A: cpu.execute_instruction<0x81>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:322 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FE6B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:322 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC0FE6A.
    case 0xC0FE6C: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:322 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FE6D: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:322 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FE6E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:322 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FE70: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:322 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FE71: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:322 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FE73: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:323 REP #PROC_FLAGS::ACCUM8
    case 0xC0FE75: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:324 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FE77: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:324 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FE79: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:324 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FE7B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:324 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FE7D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:325 LDY @VIRTUAL02
    case 0xC0FE7F: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:326 LDA @VIRTUAL04
    case 0xC0FE81: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:327 ASL
    case 0xC0FE83: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:328 TAX
    case 0xC0FE84: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:329 SEP #PROC_FLAGS::ACCUM8
    case 0xC0FE85: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:330 LDA #0
    case 0xC0FE87: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:331 JSL ENQUEUE_CREDITS_DMA
    case 0xC0FE89: cpu.execute_instruction<0x22>(0xC4BFFE, 4); return true;
    // src/ending/credits_scroll_frame-jp.asm:331 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0FE87.
    case 0xC0FE8A: cpu.execute_instruction<0xFE>(0x00C4BF, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:333 LDA @LOCAL05
    case 0xC0FE8D: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:334 CMP #$001F
    case 0xC0FE8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001F, 2); else cpu.execute_instruction<0xC9>(0x00001F, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:334 CMP #$001F
    // Overlapping static entry reached from 0xC0FE8F.
    case 0xC0FE91: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:335 BEQ @UNKNOWN32
    case 0xC0FE92: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:336 LDA @VIRTUAL02
    case 0xC0FE94: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:337 CLC
    case 0xC0FE96: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:338 ADC #32
    case 0xC0FE97: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:338 ADC #32
    // Overlapping static entry reached from 0xC0FE97.
    case 0xC0FE99: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:339 STA @LOCAL01
    case 0xC0FE9A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:340 BRA @UNKNOWN33
    case 0xC0FE9C: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:343 LDA @VIRTUAL02
    case 0xC0FE9E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:344 SEC
    case 0xC0FEA0: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:345 SBC #$03E0
    case 0xC0FEA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000E0, 2); else cpu.execute_instruction<0xE9>(0x0003E0, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:345 SBC #$03E0
    // Overlapping static entry reached from 0xC0FEA1.
    case 0xC0FEA3: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:346 STA @LOCAL01
    case 0xC0FEA4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:346 STA @LOCAL01
    // Overlapping static entry reached from 0xC0FEA3.
    case 0xC0FEA5: cpu.execute_instruction<0x12>(0x0000A5, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:348 LDA @LOCAL06
    case 0xC0FEA6: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:348 LDA @LOCAL06
    // Overlapping static entry reached from 0xC0FEA5.
    case 0xC0FEA7: cpu.execute_instruction<0x20>(0x000A0A, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:349 ASL
    case 0xC0FEA8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:350 ASL
    case 0xC0FEA9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:351 ASL
    case 0xC0FEAA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:352 ASL
    case 0xC0FEAB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:353 ASL
    case 0xC0FEAC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:354 ASL
    case 0xC0FEAD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:355 CLC
    case 0xC0FEAE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:356 ADC #.LOWORD(BG2_BUFFER)
    case 0xC0FEAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000076, 2); else cpu.execute_instruction<0x69>(0x008176, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:356 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC0FEAF.
    case 0xC0FEB1: cpu.execute_instruction<0x81>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:357 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FEB2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:357 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC0FEB1.
    case 0xC0FEB3: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:357 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FEB4: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:357 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FEB5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:357 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FEB7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:357 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FEB8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:357 PROMOTENEARPTRA @VIRTUAL06
    case 0xC0FEBA: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:358 REP #PROC_FLAGS::ACCUM8
    case 0xC0FEBC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:359 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FEBE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:359 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FEC0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:359 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FEC2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:359 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0FEC4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:360 LDA @LOCAL01
    case 0xC0FEC6: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:361 TAY
    case 0xC0FEC8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:362 LDA @VIRTUAL04
    case 0xC0FEC9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:363 ASL
    case 0xC0FECB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:364 TAX
    case 0xC0FECC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:365 SEP #PROC_FLAGS::ACCUM8
    case 0xC0FECD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:366 LDA #0
    case 0xC0FECF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:367 JSL ENQUEUE_CREDITS_DMA
    case 0xC0FED1: cpu.execute_instruction<0x22>(0xC4BFFE, 4); return true;
    // src/ending/credits_scroll_frame-jp.asm:367 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0FECF.
    case 0xC0FED2: cpu.execute_instruction<0xFE>(0x00C4BF, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:369 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FED5: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:369 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FED7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:369 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FED9: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:369 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FEDB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:370 DEC @VIRTUAL06
    case 0xC0FEDD: cpu.execute_instruction<0xC6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:371 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FEDF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:371 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FEE1: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:371 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FEE3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:371 MOVE_INT @VIRTUAL06, @LOCAL04
    case 0xC0FEE5: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:372 BRA @UNKNOWN36
    case 0xC0FEE7: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:375 LDA #.LOWORD(-1)
    case 0xC0FEE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:375 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0FEE9.
    case 0xC0FEEB: cpu.execute_instruction<0xFF>(0xB6AC8D, 4); return true;
    // src/ending/credits_scroll_frame-jp.asm:376 STA CREDITS_NEXT_CREDIT_POSITION
    case 0xC0FEEC: cpu.execute_instruction<0x8D>(0x00B6AC, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:378 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FEEF: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:378 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FEF1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:378 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FEF3: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:378 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0FEF5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:379 INC @VIRTUAL06
    case 0xC0FEF7: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:380 MOVE_INT @VIRTUAL06, CREDITS_SCRIPT_DATA
    case 0xC0FEF9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:380 MOVE_INT @VIRTUAL06, CREDITS_SCRIPT_DATA
    case 0xC0FEFB: cpu.execute_instruction<0x8D>(0x00B6B0, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:380 MOVE_INT @VIRTUAL06, CREDITS_SCRIPT_DATA
    case 0xC0FEFE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:380 MOVE_INT @VIRTUAL06, CREDITS_SCRIPT_DATA
    case 0xC0FF00: cpu.execute_instruction<0x8D>(0x00B6B2, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:382 LDA CREDITS_ROW_WIPE_THRESHOLD
    case 0xC0FF03: cpu.execute_instruction<0xAD>(0x00B6AE, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:383 CMP BG3_Y_POS
    case 0xC0FF06: cpu.execute_instruction<0xCD>(0x00003B, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:384 BCS @UNKNOWN38
    case 0xC0FF09: cpu.execute_instruction<0xB0>(0x000033, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:385 LDA CREDITS_ROW_WIPE_THRESHOLD
    case 0xC0FF0B: cpu.execute_instruction<0xAD>(0x00B6AE, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:386 CLC
    case 0xC0FF0E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:387 ADC #8
    case 0xC0FF0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:387 ADC #8
    // Overlapping static entry reached from 0xC0FF0F.
    case 0xC0FF11: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:388 STA CREDITS_ROW_WIPE_THRESHOLD
    case 0xC0FF12: cpu.execute_instruction<0x8D>(0x00B6AE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:389 LOADPTR UNKNOWN_C40BE8, @LOCAL00
    case 0xC0FF15: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000034, 2); else cpu.execute_instruction<0xA9>(0x000B34, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:389 LOADPTR UNKNOWN_C40BE8, @LOCAL00
    // Overlapping static entry reached from 0xC0FF15.
    case 0xC0FF17: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:389 LOADPTR UNKNOWN_C40BE8, @LOCAL00
    case 0xC0FF18: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:389 LOADPTR UNKNOWN_C40BE8, @LOCAL00
    case 0xC0FF1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:389 LOADPTR UNKNOWN_C40BE8, @LOCAL00
    // Overlapping static entry reached from 0xC0FF1A.
    case 0xC0FF1C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:389 LOADPTR UNKNOWN_C40BE8, @LOCAL00
    case 0xC0FF1D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:390 LDA BG3_Y_POS
    case 0xC0FF1F: cpu.execute_instruction<0xAD>(0x00003B, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:391 LSR
    case 0xC0FF22: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:392 LSR
    case 0xC0FF23: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:393 LSR
    case 0xC0FF24: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:394 DEC
    case 0xC0FF25: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:395 AND #$001F
    case 0xC0FF26: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:395 AND #$001F
    // Overlapping static entry reached from 0xC0FF26.
    case 0xC0FF28: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:396 ASL
    case 0xC0FF29: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:397 ASL
    case 0xC0FF2A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:398 ASL
    case 0xC0FF2B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:399 ASL
    case 0xC0FF2C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:400 ASL
    case 0xC0FF2D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:401 CLC
    case 0xC0FF2E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:402 ADC #$6C00
    case 0xC0FF2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x006C00, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:402 ADC #$6C00
    // Overlapping static entry reached from 0xC0FF2F.
    case 0xC0FF31: cpu.execute_instruction<0x6C>(0x00A2A8, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:403 TAY
    case 0xC0FF32: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:404 LDX #64
    case 0xC0FF33: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:404 LDX #64
    // Overlapping static entry reached from 0xC0FF33.
    case 0xC0FF35: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:405 SEP #PROC_FLAGS::ACCUM8
    case 0xC0FF36: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:406 LDA #3
    case 0xC0FF38: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:407 JSL ENQUEUE_CREDITS_DMA
    case 0xC0FF3A: cpu.execute_instruction<0x22>(0xC4BFFE, 4); return true;
    // src/ending/credits_scroll_frame-jp.asm:407 JSL ENQUEUE_CREDITS_DMA
    // Overlapping static entry reached from 0xC0FF38.
    case 0xC0FF3B: cpu.execute_instruction<0xFE>(0x00C4BF, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:410 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    case 0xC0FF3E: cpu.execute_instruction<0xAD>(0x00B6B4, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:410 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    case 0xC0FF41: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:410 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    case 0xC0FF43: cpu.execute_instruction<0xAD>(0x00B6B6, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:410 MOVE_INT CREDITS_SCROLL_POSITION, @VIRTUAL06
    case 0xC0FF46: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:411 CLC
    case 0xC0FF48: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:412 LDA @VIRTUAL06 + fixed_point::fraction
    case 0xC0FF49: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:413 ADC #$4000
    case 0xC0FF4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x004000, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:413 ADC #$4000
    // Overlapping static entry reached from 0xC0FF4B.
    case 0xC0FF4D: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/ending/credits_scroll_frame-jp.asm:414 STA @VIRTUAL06 + fixed_point::fraction
    case 0xC0FF4E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:415 BCC @UNKNOWN39
    case 0xC0FF50: cpu.execute_instruction<0x90>(0x000002, 2); return true;
    // src/ending/credits_scroll_frame-jp.asm:416 INC @VIRTUAL06 + fixed_point::integer
    case 0xC0FF52: cpu.execute_instruction<0xE6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:418 MOVE_INT @VIRTUAL06, CREDITS_SCROLL_POSITION
    case 0xC0FF54: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:418 MOVE_INT @VIRTUAL06, CREDITS_SCROLL_POSITION
    case 0xC0FF56: cpu.execute_instruction<0x8D>(0x00B6B4, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:418 MOVE_INT @VIRTUAL06, CREDITS_SCROLL_POSITION
    case 0xC0FF59: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:418 MOVE_INT @VIRTUAL06, CREDITS_SCROLL_POSITION
    case 0xC0FF5B: cpu.execute_instruction<0x8D>(0x00B6B6, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:419 STA BG3_Y_POS
    case 0xC0FF5E: cpu.execute_instruction<0x8D>(0x00003B, 3); return true;
    // src/ending/credits_scroll_frame-jp.asm:420 JSR UNKNOWN_C0AD9F
    case 0xC0FF61: cpu.execute_instruction<0x20>(0x00AD7E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:421 END_C_FUNCTION
    case 0xC0FF64: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/ending/credits_scroll_frame-jp.asm:421 END_C_FUNCTION
    case 0xC0FF65: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/enqueue_credits_dma.asm (source_named).
bool execute_ending_enqueue_credits_dma_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/enqueue_credits_dma.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BFFE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/enqueue_credits_dma.asm:10 END_STACK_VARS
    case 0xC4C000: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/enqueue_credits_dma.asm:10 END_STACK_VARS
    case 0xC4C001: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/enqueue_credits_dma.asm:10 END_STACK_VARS
    case 0xC4C002: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/enqueue_credits_dma.asm:10 END_STACK_VARS
    case 0xC4C003: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/enqueue_credits_dma.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C003.
    case 0xC4C005: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/enqueue_credits_dma.asm:10 END_STACK_VARS
    case 0xC4C006: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/enqueue_credits_dma.asm:10 END_STACK_VARS
    case 0xC4C007: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/enqueue_credits_dma.asm:11 STY @VIRTUAL02
    case 0xC4C008: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/ending/enqueue_credits_dma.asm:11 STY @VIRTUAL02
    // Overlapping static entry reached from 0xC4C005.
    case 0xC4C009: cpu.execute_instruction<0x02>(0x00009B, 2); return true;
    // src/ending/enqueue_credits_dma.asm:12 TXY
    case 0xC4C00A: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/ending/enqueue_credits_dma.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C00B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/enqueue_credits_dma.asm:14 STA @LOCAL00
    case 0xC4C00D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/enqueue_credits_dma.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC4C00F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/enqueue_credits_dma.asm:16 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC4C011: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/enqueue_credits_dma.asm:16 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC4C013: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/enqueue_credits_dma.asm:16 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC4C015: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/enqueue_credits_dma.asm:16 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC4C017: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/enqueue_credits_dma.asm:17 LDA CREDITS_DMA_QUEUE_START
    case 0xC4C019: cpu.execute_instruction<0xAD>(0x00B6BE, 3); return true;
    // include/macros.asm:549 STA scratch
    // Macro caller: src/ending/enqueue_credits_dma.asm:18 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4C01C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:550 ASL
    // Macro caller: src/ending/enqueue_credits_dma.asm:18 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4C01E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:551 ASL
    // Macro caller: src/ending/enqueue_credits_dma.asm:18 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4C01F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:552 ASL
    // Macro caller: src/ending/enqueue_credits_dma.asm:18 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4C020: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:553 ADC scratch
    // Macro caller: src/ending/enqueue_credits_dma.asm:18 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4C021: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/ending/enqueue_credits_dma.asm:19 CLC
    case 0xC4C023: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/enqueue_credits_dma.asm:20 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC4C024: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0054DC, 3); return true;
    // src/ending/enqueue_credits_dma.asm:20 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC4C024.
    case 0xC4C026: cpu.execute_instruction<0x54>(0x00E2AA, 3); return true;
    // src/ending/enqueue_credits_dma.asm:21 TAX
    case 0xC4C027: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/enqueue_credits_dma.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C028: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/enqueue_credits_dma.asm:22 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4C026.
    case 0xC4C029: cpu.execute_instruction<0x20>(0x000EA5, 3); return true;
    // src/ending/enqueue_credits_dma.asm:23 LDA @LOCAL00
    case 0xC4C02A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/ending/enqueue_credits_dma.asm:24 STA __BSS_START__,X
    case 0xC4C02C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/ending/enqueue_credits_dma.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC4C02F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/enqueue_credits_dma.asm:26 TYA
    case 0xC4C031: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/ending/enqueue_credits_dma.asm:27 STA __BSS_START__+1,X
    case 0xC4C032: cpu.execute_instruction<0x9D>(0x000001, 3); return true;
    // src/ending/enqueue_credits_dma.asm:28 TXY
    case 0xC4C035: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/ending/enqueue_credits_dma.asm:29 INY
    case 0xC4C036: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/ending/enqueue_credits_dma.asm:30 INY
    case 0xC4C037: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/ending/enqueue_credits_dma.asm:31 INY
    case 0xC4C038: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/ending/enqueue_credits_dma.asm:32 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4C039: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/ending/enqueue_credits_dma.asm:32 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4C03B: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/ending/enqueue_credits_dma.asm:32 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4C03E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/ending/enqueue_credits_dma.asm:32 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4C040: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/ending/enqueue_credits_dma.asm:33 LDA @VIRTUAL02
    case 0xC4C043: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/enqueue_credits_dma.asm:34 STA __BSS_START__+7,X
    case 0xC4C045: cpu.execute_instruction<0x9D>(0x000007, 3); return true;
    // src/ending/enqueue_credits_dma.asm:35 LDA CREDITS_DMA_QUEUE_START
    case 0xC4C048: cpu.execute_instruction<0xAD>(0x00B6BE, 3); return true;
    // src/ending/enqueue_credits_dma.asm:36 INC
    case 0xC4C04B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/enqueue_credits_dma.asm:37 STA CREDITS_DMA_QUEUE_START
    case 0xC4C04C: cpu.execute_instruction<0x8D>(0x00B6BE, 3); return true;
    // src/ending/enqueue_credits_dma.asm:38 AND #$007F
    case 0xC4C04F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/ending/enqueue_credits_dma.asm:38 AND #$007F
    // Overlapping static entry reached from 0xC4C04F.
    case 0xC4C051: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/enqueue_credits_dma.asm:39 STA CREDITS_DMA_QUEUE_START
    case 0xC4C052: cpu.execute_instruction<0x8D>(0x00B6BE, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/enqueue_credits_dma.asm:40 END_C_FUNCTION
    case 0xC4C055: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/enqueue_credits_dma.asm:40 END_C_FUNCTION
    case 0xC4C056: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/handle_cast_scrolling.asm (source_named).
bool execute_ending_handle_cast_scrolling_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/handle_cast_scrolling.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BB7B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/handle_cast_scrolling.asm:7 END_STACK_VARS
    case 0xC4BB7D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/handle_cast_scrolling.asm:7 END_STACK_VARS
    case 0xC4BB7E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/handle_cast_scrolling.asm:7 END_STACK_VARS
    case 0xC4BB7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/handle_cast_scrolling.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BB7F.
    case 0xC4BB81: cpu.execute_instruction<0xFF>(0xFEA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/handle_cast_scrolling.asm:7 END_STACK_VARS
    case 0xC4BB82: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/handle_cast_scrolling.asm:8 LOADPTR BUFFER + $7F00+$FE, @VIRTUAL06
    case 0xC4BB83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x007FFE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/handle_cast_scrolling.asm:8 LOADPTR BUFFER + $7F00+$FE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BB83.
    case 0xC4BB85: cpu.execute_instruction<0x7F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/handle_cast_scrolling.asm:8 LOADPTR BUFFER + $7F00+$FE, @VIRTUAL06
    case 0xC4BB86: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/handle_cast_scrolling.asm:8 LOADPTR BUFFER + $7F00+$FE, @VIRTUAL06
    case 0xC4BB88: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/handle_cast_scrolling.asm:8 LOADPTR BUFFER + $7F00+$FE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BB85.
    case 0xC4BB89: cpu.execute_instruction<0x7F>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/handle_cast_scrolling.asm:8 LOADPTR BUFFER + $7F00+$FE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BB88.
    case 0xC4BB8A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/handle_cast_scrolling.asm:8 LOADPTR BUFFER + $7F00+$FE, @VIRTUAL06
    case 0xC4BB8B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/handle_cast_scrolling.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xC4BB8D: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/ending/handle_cast_scrolling.asm:10 ASL
    case 0xC4BB90: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:11 TAX
    case 0xC4BB91: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:12 LDY ENTITY_ABS_Y_TABLE,X
    case 0xC4BB92: cpu.execute_instruction<0xBC>(0x000BC0, 3); return true;
    // src/ending/handle_cast_scrolling.asm:13 STY BG3_Y_POS
    case 0xC4BB95: cpu.execute_instruction<0x8C>(0x00003B, 3); return true;
    // src/ending/handle_cast_scrolling.asm:14 TXA
    case 0xC4BB98: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:15 CLC
    case 0xC4BB99: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:16 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    case 0xC4BB9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F8, 2); else cpu.execute_instruction<0x69>(0x000FF8, 3); return true;
    // src/ending/handle_cast_scrolling.asm:16 ADC #.LOWORD(ENTITY_SCRIPT_VAR7_TABLE)
    // Overlapping static entry reached from 0xC4BB9A.
    case 0xC4BB9C: cpu.execute_instruction<0x0F>(0x00BDAA, 4); return true;
    // src/ending/handle_cast_scrolling.asm:17 TAX
    case 0xC4BB9D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:18 LDA __BSS_START__,X
    case 0xC4BB9E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/ending/handle_cast_scrolling.asm:18 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC4BB9C.
    case 0xC4BBA0: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/ending/handle_cast_scrolling.asm:19 STY @VIRTUAL02
    case 0xC4BBA1: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/ending/handle_cast_scrolling.asm:20 CMP @VIRTUAL02
    case 0xC4BBA3: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/ending/handle_cast_scrolling.asm:21 BCS @UNKNOWN0
    case 0xC4BBA5: cpu.execute_instruction<0xB0>(0x000037, 2); return true;
    // src/ending/handle_cast_scrolling.asm:22 CLC
    case 0xC4BBA7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:23 ADC #8
    case 0xC4BBA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/ending/handle_cast_scrolling.asm:23 ADC #8
    // Overlapping static entry reached from 0xC4BBA8.
    case 0xC4BBAA: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/ending/handle_cast_scrolling.asm:24 STA __BSS_START__,X
    case 0xC4BBAB: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/ending/handle_cast_scrolling.asm:24 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC48064.
    case 0xC4BBAD: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/ending/handle_cast_scrolling.asm:25 LDA BG3_Y_POS
    case 0xC4BBAE: cpu.execute_instruction<0xAD>(0x00003B, 3); return true;
    // src/ending/handle_cast_scrolling.asm:26 LSR
    case 0xC4BBB1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:27 LSR
    case 0xC4BBB2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:28 LSR
    case 0xC4BBB3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:29 DEC
    case 0xC4BBB4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:30 AND #$001F
    case 0xC4BBB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/ending/handle_cast_scrolling.asm:30 AND #$001F
    // Overlapping static entry reached from 0xC4BBB5.
    case 0xC4BBB7: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/ending/handle_cast_scrolling.asm:31 ASL
    case 0xC4BBB8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:32 ASL
    case 0xC4BBB9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:33 ASL
    case 0xC4BBBA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:34 ASL
    case 0xC4BBBB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:35 ASL
    case 0xC4BBBC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:36 CLC
    case 0xC4BBBD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:37 ADC #VRAM::CAST_TILEMAP
    case 0xC4BBBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007C00, 3); return true;
    // src/ending/handle_cast_scrolling.asm:37 ADC #VRAM::CAST_TILEMAP
    // Overlapping static entry reached from 0xC4BBBE.
    case 0xC4BBC0: cpu.execute_instruction<0x7C>(0x001285, 3); return true;
    // src/ending/handle_cast_scrolling.asm:38 STA @LOCAL01
    case 0xC4BBC1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/ending/handle_cast_scrolling.asm:39 LDA #0
    case 0xC4BBC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/handle_cast_scrolling.asm:39 LDA #0
    // Overlapping static entry reached from 0xC4BBC3.
    case 0xC4BBC5: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/ending/handle_cast_scrolling.asm:40 STA [@VIRTUAL06]
    case 0xC4BBC6: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/handle_cast_scrolling.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BBC8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/handle_cast_scrolling.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BBCA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/handle_cast_scrolling.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BBCC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/handle_cast_scrolling.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BBCE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/handle_cast_scrolling.asm:42 LDA @LOCAL01
    case 0xC4BBD0: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/ending/handle_cast_scrolling.asm:43 TAY
    case 0xC4BBD2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/handle_cast_scrolling.asm:44 LDX #64
    case 0xC4BBD3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // src/ending/handle_cast_scrolling.asm:44 LDX #64
    // Overlapping static entry reached from 0xC4BBD3.
    case 0xC4BBD5: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/ending/handle_cast_scrolling.asm:45 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BBD6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/handle_cast_scrolling.asm:46 LDA #3
    case 0xC4BBD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // src/ending/handle_cast_scrolling.asm:47 JSL PREPARE_VRAM_COPY
    case 0xC4BBDA: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/ending/handle_cast_scrolling.asm:47 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4BBD8.
    case 0xC4BBDB: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/ending/handle_cast_scrolling.asm:47 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4BBDB.
    case 0xC4BBDD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/handle_cast_scrolling.asm:49 END_C_FUNCTION
    case 0xC4BBDE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/handle_cast_scrolling.asm:49 END_C_FUNCTION
    case 0xC4BBDF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/initialize_credits_scene.asm (source_named).
bool execute_ending_initialize_credits_scene_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/initialize_credits_scene.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C0B7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/initialize_credits_scene.asm:7 END_STACK_VARS
    case 0xC4C0B9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/initialize_credits_scene.asm:7 END_STACK_VARS
    case 0xC4C0BA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/initialize_credits_scene.asm:7 END_STACK_VARS
    case 0xC4C0BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/initialize_credits_scene.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C0BB.
    case 0xC4C0BD: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/initialize_credits_scene.asm:7 END_STACK_VARS
    case 0xC4C0BE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4C0BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C0BF.
    case 0xC4C0C1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4C0C2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4C0C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:8 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C0C4.
    case 0xC4C0C6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:8 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4C0C7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/initialize_credits_scene.asm:9 JSL UNKNOWN_C08726
    case 0xC4C0C9: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/ending/initialize_credits_scene.asm:10 JSL UNKNOWN_C021E6
    case 0xC4C0CD: cpu.execute_instruction<0x22>(0xC021F4, 4); return true;
    // src/ending/initialize_credits_scene.asm:11 STZ CREDITS_CURRENT_ROW
    case 0xC4C0D1: cpu.execute_instruction<0x9C>(0x00B6C0, 3); return true;
    // src/ending/initialize_credits_scene.asm:12 STZ CREDITS_DMA_QUEUE_START
    case 0xC4C0D4: cpu.execute_instruction<0x9C>(0x00B6BE, 3); return true;
    // src/ending/initialize_credits_scene.asm:13 STZ CREDITS_DMA_QUEUE_END
    case 0xC4C0D7: cpu.execute_instruction<0x9C>(0x00B6BC, 3); return true;
    // src/ending/initialize_credits_scene.asm:14 LDY #VRAM::CREDITS_LAYER_1_TILES
    case 0xC4C0DA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/ending/initialize_credits_scene.asm:14 LDY #VRAM::CREDITS_LAYER_1_TILES
    // Overlapping static entry reached from 0xC4C0DA.
    case 0xC4C0DC: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/ending/initialize_credits_scene.asm:15 LDX #VRAM::CREDITS_LAYER_1_TILEMAP
    case 0xC4C0DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003800, 3); return true;
    // src/ending/initialize_credits_scene.asm:15 LDX #VRAM::CREDITS_LAYER_1_TILEMAP
    // Overlapping static entry reached from 0xC4C0DD.
    case 0xC4C0DF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/ending/initialize_credits_scene.asm:16 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xC4C0E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/ending/initialize_credits_scene.asm:16 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xC4C0E0.
    case 0xC4C0E2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/initialize_credits_scene.asm:17 JSL SET_BG1_VRAM_LOCATION
    case 0xC4C0E3: cpu.execute_instruction<0x22>(0xC08D8F, 4); return true;
    // src/ending/initialize_credits_scene.asm:18 LDY #VRAM::CREDITS_LAYER_2_TILES
    case 0xC4C0E7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/ending/initialize_credits_scene.asm:18 LDY #VRAM::CREDITS_LAYER_2_TILES
    // Overlapping static entry reached from 0xC4C0E7.
    case 0xC4C0E9: cpu.execute_instruction<0x20>(0x0000A2, 3); return true;
    // src/ending/initialize_credits_scene.asm:19 LDX #VRAM::CREDITS_LAYER_2_TILEMAP
    case 0xC4C0EA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007000, 3); return true;
    // src/ending/initialize_credits_scene.asm:19 LDX #VRAM::CREDITS_LAYER_2_TILEMAP
    // Overlapping static entry reached from 0xC4C0EA.
    case 0xC4C0EC: cpu.execute_instruction<0x70>(0x0000A9, 2); return true;
    // src/ending/initialize_credits_scene.asm:20 LDA #BG_TILEMAP_SIZE::BOTH
    case 0xC4C0ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/ending/initialize_credits_scene.asm:20 LDA #BG_TILEMAP_SIZE::BOTH
    // Overlapping static entry reached from 0xC4C0EC.
    case 0xC4C0EE: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/ending/initialize_credits_scene.asm:20 LDA #BG_TILEMAP_SIZE::BOTH
    // Overlapping static entry reached from 0xC4C0ED.
    case 0xC4C0EF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/initialize_credits_scene.asm:21 JSL SET_BG2_VRAM_LOCATION
    case 0xC4C0F0: cpu.execute_instruction<0x22>(0xC08DCF, 4); return true;
    // src/ending/initialize_credits_scene.asm:22 LDY #VRAM::CREDITS_LAYER_3_TILES
    case 0xC4C0F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // src/ending/initialize_credits_scene.asm:22 LDY #VRAM::CREDITS_LAYER_3_TILES
    // Overlapping static entry reached from 0xC4C0F4.
    case 0xC4C0F6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/ending/initialize_credits_scene.asm:23 LDX #VRAM::CREDITS_LAYER_3_TILEMAP
    case 0xC4C0F7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x006C00, 3); return true;
    // src/ending/initialize_credits_scene.asm:23 LDX #VRAM::CREDITS_LAYER_3_TILEMAP
    // Overlapping static entry reached from 0xC4C0F7.
    case 0xC4C0F9: cpu.execute_instruction<0x6C>(0x0000A9, 3); return true;
    // src/ending/initialize_credits_scene.asm:24 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC4C0FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/initialize_credits_scene.asm:24 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC4C0FA.
    case 0xC4C0FC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/initialize_credits_scene.asm:25 JSL SET_BG3_VRAM_LOCATION
    case 0xC4C0FD: cpu.execute_instruction<0x22>(0xC08E0D, 4); return true;
    // src/ending/initialize_credits_scene.asm:26 LDA #$62
    case 0xC4C101: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000062, 2); else cpu.execute_instruction<0xA9>(0x000062, 3); return true;
    // src/ending/initialize_credits_scene.asm:26 LDA #$62
    // Overlapping static entry reached from 0xC4C101.
    case 0xC4C103: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/initialize_credits_scene.asm:27 JSL SET_OAM_SIZE
    case 0xC4C104: cpu.execute_instruction<0x22>(0xC08D83, 4); return true;
    // src/ending/initialize_credits_scene.asm:28 STZ BG3_X_POS
    case 0xC4C108: cpu.execute_instruction<0x9C>(0x000039, 3); return true;
    // src/ending/initialize_credits_scene.asm:29 STZ BG3_Y_POS
    case 0xC4C10B: cpu.execute_instruction<0x9C>(0x00003B, 3); return true;
    // src/ending/initialize_credits_scene.asm:30 STZ BG2_Y_POS
    case 0xC4C10E: cpu.execute_instruction<0x9C>(0x000037, 3); return true;
    // src/ending/initialize_credits_scene.asm:31 STZ BG2_X_POS
    case 0xC4C111: cpu.execute_instruction<0x9C>(0x000035, 3); return true;
    // src/ending/initialize_credits_scene.asm:32 STZ BG1_Y_POS
    case 0xC4C114: cpu.execute_instruction<0x9C>(0x000033, 3); return true;
    // src/ending/initialize_credits_scene.asm:33 STZ BG1_X_POS
    case 0xC4C117: cpu.execute_instruction<0x9C>(0x000031, 3); return true;
    // src/ending/initialize_credits_scene.asm:34 JSL UPDATE_SCREEN
    case 0xC4C11A: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/ending/initialize_credits_scene.asm:35 LDA #0
    case 0xC4C11E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/initialize_credits_scene.asm:35 LDA #0
    // Overlapping static entry reached from 0xC4C11E.
    case 0xC4C120: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/ending/initialize_credits_scene.asm:36 STA [@VIRTUAL06]
    case 0xC4C121: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4C123: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4C125: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4C127: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4C129: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4C12B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x003800, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    // Overlapping static entry reached from 0xC4C12B.
    case 0xC4C12D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4C12E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x001000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    // Overlapping static entry reached from 0xC4C14B.
    case 0xC4C12F: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    // Overlapping static entry reached from 0xC4C12E.
    case 0xC4C130: cpu.execute_instruction<0x10>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4C131: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    // Overlapping static entry reached from 0xC4C130.
    case 0xC4C132: cpu.execute_instruction<0x20>(0x0003A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4C133: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    case 0xC4C135: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    // Overlapping static entry reached from 0xC4C133.
    case 0xC4C136: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:37 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_1_TILEMAP, 4096, 3
    // Overlapping static entry reached from 0xC4C136.
    case 0xC4C138: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x000CA9, 3); return true;
    // src/ending/initialize_credits_scene.asm:38 LDA #$240C
    case 0xC4C139: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00240C, 3); return true;
    // src/ending/initialize_credits_scene.asm:38 LDA #$240C
    // Overlapping static entry reached from 0xC4C138.
    case 0xC4C13A: cpu.execute_instruction<0x0C>(0x008724, 3); return true;
    // src/ending/initialize_credits_scene.asm:38 LDA #$240C
    // Overlapping static entry reached from 0xC4C139.
    case 0xC4C13B: cpu.execute_instruction<0x24>(0x000087, 2); return true;
    // src/ending/initialize_credits_scene.asm:39 STA [@VIRTUAL06]
    case 0xC4C13C: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/ending/initialize_credits_scene.asm:39 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4C13B.
    case 0xC4C13D: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4C13E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4C13D.
    case 0xC4C13F: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4C140: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4C13F.
    case 0xC4C141: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4C142: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4C144: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4C146: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4C163.
    case 0xC4C147: cpu.execute_instruction<0x00>(0x000070, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4C146.
    case 0xC4C148: cpu.execute_instruction<0x70>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4C149: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x001000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4C148.
    case 0xC4C14A: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4C149.
    case 0xC4C14B: cpu.execute_instruction<0x10>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4C14C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4C14B.
    case 0xC4C14D: cpu.execute_instruction<0x20>(0x0009A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4C14E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x002209, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    case 0xC4C150: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4C14E.
    case 0xC4C151: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:40 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 9
    // Overlapping static entry reached from 0xC4C151.
    case 0xC4C153: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0001A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4C154: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4C153.
    case 0xC4C155: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4C154.
    case 0xC4C156: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4C157: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4C159: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4C159.
    case 0xC4C15B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4C15C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4C15E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4C15E.
    case 0xC4C160: cpu.execute_instruction<0x70>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4C161: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x001000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4C160.
    case 0xC4C162: cpu.execute_instruction<0x00>(0x000010, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4C161.
    case 0xC4C163: cpu.execute_instruction<0x10>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4C164: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4C163.
    case 0xC4C165: cpu.execute_instruction<0x20>(0x000FA9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4C166: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00220F, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    case 0xC4C168: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4C166.
    case 0xC4C169: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:41 COPY_TO_VRAM1 BUFFER+1, VRAM::CREDITS_LAYER_2_TILEMAP, 4096, 15
    // Overlapping static entry reached from 0xC4C169.
    case 0xC4C16B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00DCA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    case 0xC4C16C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DC, 2); else cpu.execute_instruction<0xA9>(0x00D6DC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    // Overlapping static entry reached from 0xC4C16B.
    case 0xC4C16D: cpu.execute_instruction<0xDC>(0x0085D6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    // Overlapping static entry reached from 0xC4C16C.
    case 0xC4C16E: cpu.execute_instruction<0xD6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    case 0xC4C16F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    // Overlapping static entry reached from 0xC4C16E.
    case 0xC4C170: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    case 0xC4C171: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    // Overlapping static entry reached from 0xC4C171.
    case 0xC4C173: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:42 LOADPTR UNKNOWN_E1E94A, @LOCAL00
    case 0xC4C174: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C176: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C178: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C17A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:43 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C17C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/initialize_credits_scene.asm:44 JSL DECOMP
    case 0xC4C17E: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/ending/initialize_credits_scene.asm:45 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    case 0xC4C182: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000220, 3); return true;
    // src/ending/initialize_credits_scene.asm:45 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4C182.
    case 0xC4C184: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/ending/initialize_credits_scene.asm:46 STA @VIRTUAL02
    case 0xC4C185: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4C187: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BC, 2); else cpu.execute_instruction<0xA9>(0x00D6BC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    // Overlapping static entry reached from 0xC4C187.
    case 0xC4C189: cpu.execute_instruction<0xD6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4C18A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    // Overlapping static entry reached from 0xC4C189.
    case 0xC4C18B: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4C18C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    // Overlapping static entry reached from 0xC4C18C.
    case 0xC4C18E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:47 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4C18F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/initialize_credits_scene.asm:48 LDX #BPP4PALETTE_SIZE * 1
    case 0xC4C191: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/ending/initialize_credits_scene.asm:48 LDX #BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4C191.
    case 0xC4C193: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/ending/initialize_credits_scene.asm:49 LDA @VIRTUAL02
    case 0xC4C194: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/initialize_credits_scene.asm:50 JSL MEMCPY16
    case 0xC4C196: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4C19A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4C19C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4C19E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4C1A0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4C1A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    // Overlapping static entry reached from 0xC4C1A2.
    case 0xC4C1A4: cpu.execute_instruction<0x70>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4C1A5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000700, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    // Overlapping static entry reached from 0xC4C1A4.
    case 0xC4C1A6: cpu.execute_instruction<0x00>(0x000007, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    // Overlapping static entry reached from 0xC4C1A5.
    case 0xC4C1A7: cpu.execute_instruction<0x07>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4C1A8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    // Overlapping static entry reached from 0xC4C1A7.
    case 0xC4C1A9: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4C1AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    case 0xC4C1AC: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    // Overlapping static entry reached from 0xC4C1AA.
    case 0xC4C1AD: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:51 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_2_TILEMAP, 1792, 0
    // Overlapping static entry reached from 0xC4C1AD.
    case 0xC4C1AF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4C1B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000700, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4C1AF.
    case 0xC4C1B1: cpu.execute_instruction<0x00>(0x000007, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4C1B0.
    case 0xC4C1B2: cpu.execute_instruction<0x07>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4C1B3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4C1B2.
    case 0xC4C1B4: cpu.execute_instruction<0x0E>(0x007FA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4C1B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4C1B5.
    case 0xC4C1B7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4C1B8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4C1BA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4C1BA.
    case 0xC4C1BC: cpu.execute_instruction<0x20>(0x00E2BB, 3); return true;
    // include/macros.asm:1155 TYX
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4C1BD: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4C1BE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4C1BC.
    case 0xC4C1BF: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4C1C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    case 0xC4C1C2: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4C1C0.
    case 0xC4C1C3: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:52 COPY_TO_VRAM1 BUFFER + $700, VRAM::CREDITS_LAYER_2_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4C1C3.
    case 0xC4C1C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // src/ending/initialize_credits_scene.asm:53 LDA #0
    case 0xC4C1C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/initialize_credits_scene.asm:53 LDA #0
    // Overlapping static entry reached from 0xC4C1C5.
    case 0xC4C1C7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/ending/initialize_credits_scene.asm:53 LDA #0
    // Overlapping static entry reached from 0xC4C1C6.
    case 0xC4C1C8: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/ending/initialize_credits_scene.asm:54 STA [@VIRTUAL06]
    case 0xC4C1C9: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4C1CB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4C1CD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4C1CF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4C1D1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4C1D3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4C1D3.
    case 0xC4C1D5: cpu.execute_instruction<0x6C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4C1D6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4C1D6.
    case 0xC4C1D8: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4C1D9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4C1DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    case 0xC4C1DD: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4C1DB.
    case 0xC4C1DE: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:55 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4C1DE.
    case 0xC4C1E0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00CCA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    case 0xC4C1E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CC, 2); else cpu.execute_instruction<0xA9>(0x00D2CC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4C1E0.
    case 0xC4C1E2: cpu.execute_instruction<0xCC>(0x0085D2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4C1E1.
    case 0xC4C1E3: cpu.execute_instruction<0xD2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    case 0xC4C1E4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4C1E3.
    case 0xC4C1E5: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    case 0xC4C1E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    // Overlapping static entry reached from 0xC4C1E6.
    case 0xC4C1E8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:56 LOADPTR STAFF_CREDITS_FONT_GRAPHICS, @LOCAL00
    case 0xC4C1E9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C1EB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C1ED: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C1EF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C1F1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/initialize_credits_scene.asm:58 JSL DECOMP
    case 0xC4C1F3: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4C1F7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4C1F9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4C1FB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4C1FD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4C1FF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006200, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4C1FF.
    case 0xC4C201: cpu.execute_instruction<0x62>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4C202: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4C202.
    case 0xC4C204: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4C205: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4C207: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    case 0xC4C209: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4C207.
    case 0xC4C20A: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/initialize_credits_scene.asm:59 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CREDITS_LAYER_3_TILES + $200, STAFF_CREDITS_FONT_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4C20A.
    case 0xC4C20C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00A6A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    case 0xC4C20D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A6, 2); else cpu.execute_instruction<0xA9>(0x00D6A6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4C20C.
    case 0xC4C20E: cpu.execute_instruction<0xA6>(0x0000D6, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4C20D.
    case 0xC4C20F: cpu.execute_instruction<0xD6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    case 0xC4C210: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4C20F.
    case 0xC4C211: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    case 0xC4C212: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4C212.
    case 0xC4C214: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:60 LOADPTR STAFF_CREDITS_FONT_PALETTE, @LOCAL00
    case 0xC4C215: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/initialize_credits_scene.asm:61 LDX #BPP2PALETTE_SIZE * 2
    case 0xC4C217: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/ending/initialize_credits_scene.asm:61 LDX #BPP2PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC4C217.
    case 0xC4C219: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/ending/initialize_credits_scene.asm:62 LDA #.LOWORD(PALETTES)
    case 0xC4C21A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/ending/initialize_credits_scene.asm:62 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC4C21A.
    case 0xC4C21C: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/ending/initialize_credits_scene.asm:63 JSL MEMCPY16
    case 0xC4C21D: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:64 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4C221: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:64 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4C221.
    case 0xC4C223: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/initialize_credits_scene.asm:64 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4C224: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:64 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4C226: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/initialize_credits_scene.asm:64 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4C226.
    case 0xC4C228: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/initialize_credits_scene.asm:64 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4C229: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/initialize_credits_scene.asm:65 LDX #BPP4PALETTE_SIZE * 8
    case 0xC4C22B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/ending/initialize_credits_scene.asm:65 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4C22B.
    case 0xC4C22D: cpu.execute_instruction<0x01>(0x0000A9, 2); return true;
    // src/ending/initialize_credits_scene.asm:66 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC4C22E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000300, 3); return true;
    // src/ending/initialize_credits_scene.asm:66 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4C22D.
    case 0xC4C22F: cpu.execute_instruction<0x00>(0x000003, 2); return true;
    // src/ending/initialize_credits_scene.asm:66 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4C22E.
    case 0xC4C230: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/ending/initialize_credits_scene.asm:67 JSL MEMCPY16
    case 0xC4C231: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/ending/initialize_credits_scene.asm:67 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4C230.
    case 0xC4C232: cpu.execute_instruction<0xC3>(0x00008E, 2); return true;
    // src/ending/initialize_credits_scene.asm:67 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4C232.
    case 0xC4C234: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/ending/initialize_credits_scene.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C235: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/initialize_credits_scene.asm:68 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4C234.
    case 0xC4C236: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/ending/initialize_credits_scene.asm:69 STZ_BADOPT @LOCAL00
    case 0xC4C237: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:69 STZ_BADOPT @LOCAL00
    case 0xC4C239: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:69 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC4C237.
    case 0xC4C23A: cpu.execute_instruction<0x0E>(0x00E0A2, 3); return true;
    // src/ending/initialize_credits_scene.asm:70 LDX #BPP4PALETTE_SIZE * 15
    case 0xC4C23B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E0, 2); else cpu.execute_instruction<0xA2>(0x0001E0, 3); return true;
    // src/ending/initialize_credits_scene.asm:70 LDX #BPP4PALETTE_SIZE * 15
    // Overlapping static entry reached from 0xC4C23B.
    case 0xC4C23D: cpu.execute_instruction<0x01>(0x0000C2, 2); return true;
    // src/ending/initialize_credits_scene.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC4C23E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/initialize_credits_scene.asm:71 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4C23D.
    case 0xC4C23F: cpu.execute_instruction<0x20>(0x0002A5, 3); return true;
    // src/ending/initialize_credits_scene.asm:72 LDA @VIRTUAL02
    case 0xC4C240: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/initialize_credits_scene.asm:73 JSL MEMSET16
    case 0xC4C242: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/ending/initialize_credits_scene.asm:74 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C246: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/initialize_credits_scene.asm:75 LDA #PALETTE_UPLOAD::FULL
    case 0xC4C248: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/ending/initialize_credits_scene.asm:76 STA PALETTE_UPLOAD_MODE
    case 0xC4C24A: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/ending/initialize_credits_scene.asm:76 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC4C248.
    case 0xC4C24B: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/ending/initialize_credits_scene.asm:77 LDA #$17
    case 0xC4C24D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/ending/initialize_credits_scene.asm:78 STA TM_MIRROR
    case 0xC4C24F: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/ending/initialize_credits_scene.asm:78 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4C24D.
    case 0xC4C250: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/initialize_credits_scene.asm:78 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4C250.
    case 0xC4C251: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/ending/initialize_credits_scene.asm:79 REP #PROC_FLAGS::ACCUM8
    case 0xC4C252: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/initialize_credits_scene.asm:80 STZ CREDITS_NEXT_CREDIT_POSITION
    case 0xC4C254: cpu.execute_instruction<0x9C>(0x00B6AC, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:81 MOVE_INT_CONSTANT NULL, CREDITS_SCROLL_POSITION
    case 0xC4C257: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:81 MOVE_INT_CONSTANT NULL, CREDITS_SCROLL_POSITION
    // Overlapping static entry reached from 0xC4C257.
    case 0xC4C259: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:81 MOVE_INT_CONSTANT NULL, CREDITS_SCROLL_POSITION
    case 0xC4C25A: cpu.execute_instruction<0x8D>(0x00B6B4, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:81 MOVE_INT_CONSTANT NULL, CREDITS_SCROLL_POSITION
    case 0xC4C25D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:81 MOVE_INT_CONSTANT NULL, CREDITS_SCROLL_POSITION
    // Overlapping static entry reached from 0xC4C25D.
    case 0xC4C25F: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:81 MOVE_INT_CONSTANT NULL, CREDITS_SCROLL_POSITION
    case 0xC4C260: cpu.execute_instruction<0x8D>(0x00B6B6, 3); return true;
    // src/ending/initialize_credits_scene.asm:82 LDA #7
    case 0xC4C263: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/ending/initialize_credits_scene.asm:82 LDA #7
    // Overlapping static entry reached from 0xC4C263.
    case 0xC4C265: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/initialize_credits_scene.asm:83 STA CREDITS_ROW_WIPE_THRESHOLD
    case 0xC4C266: cpu.execute_instruction<0x8D>(0x00B6AE, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C269: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000076, 2); else cpu.execute_instruction<0xA9>(0x008176, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C269.
    case 0xC4C26B: cpu.execute_instruction<0x81>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C26C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C26B.
    case 0xC4C26D: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C26E: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C26F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C271: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C272: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/initialize_credits_scene.asm:84 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C274: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/initialize_credits_scene.asm:85 LDX #0
    case 0xC4C276: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/ending/initialize_credits_scene.asm:85 LDX #0
    // Overlapping static entry reached from 0xC4C276.
    case 0xC4C278: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/ending/initialize_credits_scene.asm:86 BRA @UNKNOWN1
    case 0xC4C279: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/ending/initialize_credits_scene.asm:88 REP #PROC_FLAGS::ACCUM8
    case 0xC4C27B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/initialize_credits_scene.asm:89 LDA #0
    case 0xC4C27D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/initialize_credits_scene.asm:89 LDA #0
    // Overlapping static entry reached from 0xC4C27D.
    case 0xC4C27F: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/ending/initialize_credits_scene.asm:90 STA [@VIRTUAL06]
    case 0xC4C280: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/ending/initialize_credits_scene.asm:91 INC @VIRTUAL06
    case 0xC4C282: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/ending/initialize_credits_scene.asm:92 INC @VIRTUAL06
    case 0xC4C284: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/ending/initialize_credits_scene.asm:93 INX
    case 0xC4C286: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/ending/initialize_credits_scene.asm:95 CPX #512
    case 0xC4C287: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000200, 3); return true;
    // src/ending/initialize_credits_scene.asm:95 CPX #512
    // Overlapping static entry reached from 0xC4C287.
    case 0xC4C289: cpu.execute_instruction<0x02>(0x000090, 2); return true;
    // src/ending/initialize_credits_scene.asm:96 BCC @UNKNOWN0
    case 0xC4C28A: cpu.execute_instruction<0x90>(0x0000EF, 2); return true;
    // src/ending/initialize_credits_scene.asm:97 REP #PROC_FLAGS::ACCUM8
    case 0xC4C28C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    case 0xC4C28E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000096, 2); else cpu.execute_instruction<0xA9>(0x003596, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    // Overlapping static entry reached from 0xC4C28E.
    case 0xC4C290: cpu.execute_instruction<0x35>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    case 0xC4C291: cpu.execute_instruction<0x8D>(0x00B6B0, 3); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    // Overlapping static entry reached from 0xC4C290.
    case 0xC4C292: cpu.execute_instruction<0xB0>(0x0000B6, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    case 0xC4C294: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    // Overlapping static entry reached from 0xC4C294.
    case 0xC4C296: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/ending/initialize_credits_scene.asm:98 MOVE_INT_CONSTANT STAFF_TEXT, CREDITS_SCRIPT_DATA
    case 0xC4C297: cpu.execute_instruction<0x8D>(0x00B6B2, 3); return true;
    // src/ending/initialize_credits_scene.asm:99 JSL UNKNOWN_C08744
    case 0xC4C29A: cpu.execute_instruction<0x22>(0xC0873A, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/initialize_credits_scene.asm:100 END_C_FUNCTION
    case 0xC4C29E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/initialize_credits_scene.asm:100 END_C_FUNCTION
    case 0xC4C29F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/is_entity_still_on_cast_screen.asm (source_named).
bool execute_ending_is_entity_still_on_cast_screen_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/is_entity_still_on_cast_screen.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BF42: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/is_entity_still_on_cast_screen.asm:7 END_STACK_VARS
    case 0xC4BF44: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/is_entity_still_on_cast_screen.asm:7 END_STACK_VARS
    case 0xC4BF45: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/is_entity_still_on_cast_screen.asm:7 END_STACK_VARS
    case 0xC4BF46: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/is_entity_still_on_cast_screen.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BF46.
    case 0xC4BF48: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/is_entity_still_on_cast_screen.asm:7 END_STACK_VARS
    case 0xC4BF49: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:8 LDA #0
    case 0xC4BF4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:8 LDA #0
    // Overlapping static entry reached from 0xC4BF4A.
    case 0xC4BF4C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:9 STA @LOCAL00
    case 0xC4BF4D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:10 LDA CURRENT_ENTITY_SLOT
    case 0xC4BF4F: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:11 ASL
    case 0xC4BF52: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:12 TAX
    case 0xC4BF53: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:13 LDA BG3_Y_POS
    case 0xC4BF54: cpu.execute_instruction<0xAD>(0x00003B, 3); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:14 SEC
    case 0xC4BF57: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:15 SBC #8
    case 0xC4BF58: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:15 SBC #8
    // Overlapping static entry reached from 0xC4BF58.
    case 0xC4BF5A: cpu.execute_instruction<0x00>(0x0000DD, 2); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:16 CMP ENTITY_ABS_Y_TABLE,X
    case 0xC4BF5B: cpu.execute_instruction<0xDD>(0x000BC0, 3); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:17 BCS @UNKNOWN0
    case 0xC4BF5E: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:18 LDA #1
    case 0xC4BF60: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:18 LDA #1
    // Overlapping static entry reached from 0xC4BF60.
    case 0xC4BF62: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:19 STA @LOCAL00
    case 0xC4BF63: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/is_entity_still_on_cast_screen.asm:21 LDA @LOCAL00
    case 0xC4BF65: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/is_entity_still_on_cast_screen.asm:22 END_C_FUNCTION
    case 0xC4BF67: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/is_entity_still_on_cast_screen.asm:22 END_C_FUNCTION
    case 0xC4BF68: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/load_cast_scene-jp.asm (source_named).
bool execute_ending_load_cast_scene_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/load_cast_scene-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B5B6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/load_cast_scene-jp.asm:9 END_STACK_VARS
    case 0xC4B5B8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/load_cast_scene-jp.asm:9 END_STACK_VARS
    case 0xC4B5B9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/load_cast_scene-jp.asm:9 END_STACK_VARS
    case 0xC4B5BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/load_cast_scene-jp.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B5BA.
    case 0xC4B5BC: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/load_cast_scene-jp.asm:9 END_STACK_VARS
    case 0xC4B5BD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:10 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B5BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:10 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B5BE.
    case 0xC4B5C0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:10 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B5C1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:10 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B5C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:10 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B5C3.
    case 0xC4B5C5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:10 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B5C6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/load_cast_scene-jp.asm:11 LDY #0
    case 0xC4B5C8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/ending/load_cast_scene-jp.asm:11 LDY #0
    // Overlapping static entry reached from 0xC4B5C8.
    case 0xC4B5CA: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/ending/load_cast_scene-jp.asm:12 LDX #1
    case 0xC4B5CB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/ending/load_cast_scene-jp.asm:12 LDX #1
    // Overlapping static entry reached from 0xC4B5CB.
    case 0xC4B5CD: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/ending/load_cast_scene-jp.asm:13 TXA
    case 0xC4B5CE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/ending/load_cast_scene-jp.asm:14 JSL FADE_OUT_WITH_MOSAIC
    case 0xC4B5CF: cpu.execute_instruction<0x22>(0xC0880A, 4); return true;
    // src/ending/load_cast_scene-jp.asm:15 JSL UNKNOWN_C08726
    case 0xC4B5D3: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/ending/load_cast_scene-jp.asm:16 JSL UNKNOWN_C021E6
    case 0xC4B5D7: cpu.execute_instruction<0x22>(0xC021F4, 4); return true;
    // src/ending/load_cast_scene-jp.asm:17 LDA #0
    case 0xC4B5DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/load_cast_scene-jp.asm:17 LDA #0
    // Overlapping static entry reached from 0xC4B5DB.
    case 0xC4B5DD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/load_cast_scene-jp.asm:18 STA @LOCAL03
    case 0xC4B5DE: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/ending/load_cast_scene-jp.asm:19 BRA @UNKNOWN3
    case 0xC4B5E0: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/ending/load_cast_scene-jp.asm:21 ASL
    case 0xC4B5E2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/load_cast_scene-jp.asm:22 TAX
    case 0xC4B5E3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/load_cast_scene-jp.asm:23 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC4B5E4: cpu.execute_instruction<0xBD>(0x000A58, 3); return true;
    // src/ending/load_cast_scene-jp.asm:24 CMP #.LOWORD(-1)
    case 0xC4B5E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/ending/load_cast_scene-jp.asm:24 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4B5E7.
    case 0xC4B5E9: cpu.execute_instruction<0xFF>(0x8A0FF0, 4); return true;
    // src/ending/load_cast_scene-jp.asm:25 BEQ @UNKNOWN2
    case 0xC4B5EA: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/ending/load_cast_scene-jp.asm:26 TXA
    case 0xC4B5EC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/ending/load_cast_scene-jp.asm:27 CLC
    case 0xC4B5ED: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/load_cast_scene-jp.asm:28 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC4B5EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x001160, 3); return true;
    // src/ending/load_cast_scene-jp.asm:28 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC4B5EE.
    case 0xC4B5F0: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/ending/load_cast_scene-jp.asm:29 TAX
    case 0xC4B5F1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/load_cast_scene-jp.asm:30 LDA __BSS_START__,X
    case 0xC4B5F2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/ending/load_cast_scene-jp.asm:31 ORA #$8000
    case 0xC4B5F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x008000, 3); return true;
    // src/ending/load_cast_scene-jp.asm:31 ORA #$8000
    // Overlapping static entry reached from 0xC4B5F5.
    case 0xC4B5F7: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/ending/load_cast_scene-jp.asm:32 STA __BSS_START__,X
    case 0xC4B5F8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/ending/load_cast_scene-jp.asm:34 LDA @LOCAL03
    case 0xC4B5FB: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/ending/load_cast_scene-jp.asm:35 INC
    case 0xC4B5FD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/load_cast_scene-jp.asm:36 STA @LOCAL03
    case 0xC4B5FE: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/ending/load_cast_scene-jp.asm:38 CMP #MAX_ENTITIES
    case 0xC4B600: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/ending/load_cast_scene-jp.asm:38 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC4B600.
    case 0xC4B602: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/ending/load_cast_scene-jp.asm:39 BCC @UNKNOWN1
    case 0xC4B603: cpu.execute_instruction<0x90>(0x0000DD, 2); return true;
    // src/ending/load_cast_scene-jp.asm:40 LDX #BATTLEBG_LAYER::NONE
    case 0xC4B605: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/ending/load_cast_scene-jp.asm:40 LDX #BATTLEBG_LAYER::NONE
    // Overlapping static entry reached from 0xC4B605.
    case 0xC4B607: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/ending/load_cast_scene-jp.asm:41 LDA #BATTLEBG_LAYER::UNKNOWN279
    case 0xC4B608: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000117, 3); return true;
    // src/ending/load_cast_scene-jp.asm:41 LDA #BATTLEBG_LAYER::UNKNOWN279
    // Overlapping static entry reached from 0xC4B608.
    case 0xC4B60A: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/ending/load_cast_scene-jp.asm:42 JSL LOAD_BACKGROUND_ANIMATION
    case 0xC4B60B: cpu.execute_instruction<0x22>(0xC450F4, 4); return true;
    // src/ending/load_cast_scene-jp.asm:42 JSL LOAD_BACKGROUND_ANIMATION
    // Overlapping static entry reached from 0xC4B60A.
    case 0xC4B60C: cpu.execute_instruction<0xF4>(0x00C450, 3); return true;
    // src/ending/load_cast_scene-jp.asm:43 LDY #VRAM::CAST_TILES
    case 0xC4B60F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // src/ending/load_cast_scene-jp.asm:43 LDY #VRAM::CAST_TILES
    // Overlapping static entry reached from 0xC4B60F.
    case 0xC4B611: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/ending/load_cast_scene-jp.asm:44 LDX #VRAM::CAST_TILEMAP
    case 0xC4B612: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007C00, 3); return true;
    // src/ending/load_cast_scene-jp.asm:44 LDX #VRAM::CAST_TILEMAP
    // Overlapping static entry reached from 0xC4B612.
    case 0xC4B614: cpu.execute_instruction<0x7C>(0x0000A9, 3); return true;
    // src/ending/load_cast_scene-jp.asm:45 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC4B615: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/load_cast_scene-jp.asm:45 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC4B615.
    case 0xC4B617: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/load_cast_scene-jp.asm:46 JSL SET_BG3_VRAM_LOCATION
    case 0xC4B618: cpu.execute_instruction<0x22>(0xC08E0D, 4); return true;
    // src/ending/load_cast_scene-jp.asm:47 LDA #$62
    case 0xC4B61C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000062, 2); else cpu.execute_instruction<0xA9>(0x000062, 3); return true;
    // src/ending/load_cast_scene-jp.asm:47 LDA #$62
    // Overlapping static entry reached from 0xC4B61C.
    case 0xC4B61E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/load_cast_scene-jp.asm:48 JSL SET_OAM_SIZE
    case 0xC4B61F: cpu.execute_instruction<0x22>(0xC08D83, 4); return true;
    // src/ending/load_cast_scene-jp.asm:49 STZ BG3_X_POS
    case 0xC4B623: cpu.execute_instruction<0x9C>(0x000039, 3); return true;
    // src/ending/load_cast_scene-jp.asm:50 STZ BG3_Y_POS
    case 0xC4B626: cpu.execute_instruction<0x9C>(0x00003B, 3); return true;
    // src/ending/load_cast_scene-jp.asm:51 STZ BG2_Y_POS
    case 0xC4B629: cpu.execute_instruction<0x9C>(0x000037, 3); return true;
    // src/ending/load_cast_scene-jp.asm:52 STZ BG2_X_POS
    case 0xC4B62C: cpu.execute_instruction<0x9C>(0x000035, 3); return true;
    // src/ending/load_cast_scene-jp.asm:53 STZ BG1_Y_POS
    case 0xC4B62F: cpu.execute_instruction<0x9C>(0x000033, 3); return true;
    // src/ending/load_cast_scene-jp.asm:54 STZ BG1_X_POS
    case 0xC4B632: cpu.execute_instruction<0x9C>(0x000031, 3); return true;
    // src/ending/load_cast_scene-jp.asm:55 JSL UPDATE_SCREEN
    case 0xC4B635: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/ending/load_cast_scene-jp.asm:56 LDA #0
    case 0xC4B639: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/load_cast_scene-jp.asm:56 LDA #0
    // Overlapping static entry reached from 0xC4B639.
    case 0xC4B63B: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/ending/load_cast_scene-jp.asm:57 STA [@VIRTUAL06]
    case 0xC4B63C: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4B63E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4B640: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4B642: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4B644: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4B646: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4B646.
    case 0xC4B648: cpu.execute_instruction<0x7C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4B649: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4B649.
    case 0xC4B64B: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4B64C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4B64E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    case 0xC4B650: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4B64E.
    case 0xC4B651: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/load_cast_scene-jp.asm:58 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILEMAP, 2048, 3
    // Overlapping static entry reached from 0xC4B651.
    case 0xC4B653: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:60 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B654: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:60 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B653.
    case 0xC4B655: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:60 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B654.
    case 0xC4B656: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:60 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B657: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:60 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B659: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:60 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B659.
    case 0xC4B65B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:60 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4B65C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:61 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC4B65E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:61 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4B65E.
    case 0xC4B660: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:61 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC4B661: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:61 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC4B663: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:61 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4B663.
    case 0xC4B665: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:61 LOADPTR TEXT_WINDOW_GFX, @LOCAL00
    case 0xC4B666: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/load_cast_scene-jp.asm:62 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B668: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/load_cast_scene-jp.asm:62 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B66A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:62 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B66C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:62 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4B66E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/load_cast_scene-jp.asm:63 JSL DECOMP
    case 0xC4B670: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:65 LOADPTR CAST_NAMES_GFX, @LOCAL00
    case 0xC4B674: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008C, 2); else cpu.execute_instruction<0xA9>(0x00D18C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:65 LOADPTR CAST_NAMES_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4B674.
    case 0xC4B676: cpu.execute_instruction<0xD1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:65 LOADPTR CAST_NAMES_GFX, @LOCAL00
    case 0xC4B677: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:65 LOADPTR CAST_NAMES_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4B676.
    case 0xC4B678: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:65 LOADPTR CAST_NAMES_GFX, @LOCAL00
    case 0xC4B679: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:65 LOADPTR CAST_NAMES_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4B679.
    case 0xC4B67B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:65 LOADPTR CAST_NAMES_GFX, @LOCAL00
    case 0xC4B67C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:66 LOADPTR BUFFER + $200, @LOCAL01
    case 0xC4B67E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:66 LOADPTR BUFFER + $200, @LOCAL01
    // Overlapping static entry reached from 0xC4B67E.
    case 0xC4B680: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:66 LOADPTR BUFFER + $200, @LOCAL01
    case 0xC4B681: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:66 LOADPTR BUFFER + $200, @LOCAL01
    case 0xC4B683: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:66 LOADPTR BUFFER + $200, @LOCAL01
    // Overlapping static entry reached from 0xC4B683.
    case 0xC4B685: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:66 LOADPTR BUFFER + $200, @LOCAL01
    case 0xC4B686: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/load_cast_scene-jp.asm:67 JSL DECOMP
    case 0xC4B688: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    case 0xC4B68C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    case 0xC4B68E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    case 0xC4B690: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    case 0xC4B692: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    case 0xC4B694: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4B694.
    case 0xC4B696: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    case 0xC4B697: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x002000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4B697.
    case 0xC4B699: cpu.execute_instruction<0x20>(0x0020E2, 3); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    case 0xC4B69A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    case 0xC4B69C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    case 0xC4B69E: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4B69C.
    case 0xC4B69F: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/ending/load_cast_scene-jp.asm:68 COPY_TO_VRAM1P @VIRTUAL06, VRAM::CAST_TILES, 8192, 0
    // Overlapping static entry reached from 0xC4B69F.
    case 0xC4B6A1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x001A22, 3); return true;
    // src/ending/load_cast_scene-jp.asm:69 JSL UNKNOWN_C47F87
    case 0xC4B6A2: cpu.execute_instruction<0x22>(0xC45C1A, 4); return true;
    // src/ending/load_cast_scene-jp.asm:69 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xC4B6A1.
    case 0xC4B6A3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/load_cast_scene-jp.asm:69 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xC4B6A1.
    case 0xC4B6A4: cpu.execute_instruction<0x5C>(0x6AA9C4, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:71 LOADPTR UNKNOWN_E1D815, @LOCAL00
    case 0xC4B6A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006A, 2); else cpu.execute_instruction<0xA9>(0x00D26A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:71 LOADPTR UNKNOWN_E1D815, @LOCAL00
    // Overlapping static entry reached from 0xC4B6A6.
    case 0xC4B6A8: cpu.execute_instruction<0xD2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:71 LOADPTR UNKNOWN_E1D815, @LOCAL00
    case 0xC4B6A9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:71 LOADPTR UNKNOWN_E1D815, @LOCAL00
    // Overlapping static entry reached from 0xC4B6A8.
    case 0xC4B6AA: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:71 LOADPTR UNKNOWN_E1D815, @LOCAL00
    case 0xC4B6AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:71 LOADPTR UNKNOWN_E1D815, @LOCAL00
    // Overlapping static entry reached from 0xC4B6AB.
    case 0xC4B6AD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:71 LOADPTR UNKNOWN_E1D815, @LOCAL00
    case 0xC4B6AE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/load_cast_scene-jp.asm:72 LDX #BPP2PALETTE_SIZE * 4
    case 0xC4B6B0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/ending/load_cast_scene-jp.asm:72 LDX #BPP2PALETTE_SIZE * 4
    // Overlapping static entry reached from 0xC4B6B0.
    case 0xC4B6B2: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/ending/load_cast_scene-jp.asm:73 LDA #.LOWORD(PALETTES) + BPP2PALETTE_SIZE * 1
    case 0xC4B6B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000208, 3); return true;
    // src/ending/load_cast_scene-jp.asm:73 LDA #.LOWORD(PALETTES) + BPP2PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4B6B3.
    case 0xC4B6B5: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/ending/load_cast_scene-jp.asm:74 JSL MEMCPY16
    case 0xC4B6B6: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:75 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4B6BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:75 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4B6BA.
    case 0xC4B6BC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:75 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4B6BD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:75 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4B6BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:75 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    // Overlapping static entry reached from 0xC4B6BF.
    case 0xC4B6C1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:75 LOADPTR SPRITE_GROUP_PALETTES, @LOCAL00
    case 0xC4B6C2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/load_cast_scene-jp.asm:76 LDX #BPP4PALETTE_SIZE * 8
    case 0xC4B6C4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/ending/load_cast_scene-jp.asm:76 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4B6C4.
    case 0xC4B6C6: cpu.execute_instruction<0x01>(0x0000A9, 2); return true;
    // src/ending/load_cast_scene-jp.asm:77 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC4B6C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000300, 3); return true;
    // src/ending/load_cast_scene-jp.asm:77 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4B6C6.
    case 0xC4B6C8: cpu.execute_instruction<0x00>(0x000003, 2); return true;
    // src/ending/load_cast_scene-jp.asm:77 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4B6C7.
    case 0xC4B6C9: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/ending/load_cast_scene-jp.asm:78 JSL MEMCPY16
    case 0xC4B6CA: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/ending/load_cast_scene-jp.asm:78 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4B6C9.
    case 0xC4B6CB: cpu.execute_instruction<0xC3>(0x00008E, 2); return true;
    // src/ending/load_cast_scene-jp.asm:78 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4B6CB.
    case 0xC4B6CD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x008AA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:79 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    case 0xC4B6CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x00D28A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:79 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    // Overlapping static entry reached from 0xC4B6CD.
    case 0xC4B6CF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:79 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    // Overlapping static entry reached from 0xC4B6CE.
    case 0xC4B6D0: cpu.execute_instruction<0xD2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:79 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    case 0xC4B6D1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:79 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    // Overlapping static entry reached from 0xC4B6D0.
    case 0xC4B6D2: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:79 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    case 0xC4B6D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:79 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    // Overlapping static entry reached from 0xC4B6D3.
    case 0xC4B6D5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:79 LOADPTR UNKNOWN_E1E4E6, @LOCAL00
    case 0xC4B6D6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:80 LOADPTR BUFFER + $7000, @LOCAL01
    case 0xC4B6D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:80 LOADPTR BUFFER + $7000, @LOCAL01
    // Overlapping static entry reached from 0xC4B6D8.
    case 0xC4B6DA: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:80 LOADPTR BUFFER + $7000, @LOCAL01
    case 0xC4B6DB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/load_cast_scene-jp.asm:80 LOADPTR BUFFER + $7000, @LOCAL01
    // Overlapping static entry reached from 0xC4B6DA.
    case 0xC4B6DC: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:80 LOADPTR BUFFER + $7000, @LOCAL01
    case 0xC4B6DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:80 LOADPTR BUFFER + $7000, @LOCAL01
    // Overlapping static entry reached from 0xC4B6DC.
    case 0xC4B6DE: cpu.execute_instruction<0x7F>(0x148500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/load_cast_scene-jp.asm:80 LOADPTR BUFFER + $7000, @LOCAL01
    // Overlapping static entry reached from 0xC4B6DD.
    case 0xC4B6DF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/load_cast_scene-jp.asm:80 LOADPTR BUFFER + $7000, @LOCAL01
    case 0xC4B6E0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/load_cast_scene-jp.asm:81 JSL DECOMP
    case 0xC4B6E2: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/ending/load_cast_scene-jp.asm:82 STZ PALETTES + 6
    case 0xC4B6E6: cpu.execute_instruction<0x9C>(0x000206, 3); return true;
    // src/ending/load_cast_scene-jp.asm:83 STZ PALETTES
    case 0xC4B6E9: cpu.execute_instruction<0x9C>(0x000200, 3); return true;
    // src/ending/load_cast_scene-jp.asm:84 LDY #.LOWORD(PALETTES) + 2
    case 0xC4B6EC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000202, 3); return true;
    // src/ending/load_cast_scene-jp.asm:84 LDY #.LOWORD(PALETTES) + 2
    // Overlapping static entry reached from 0xC4B6EC.
    case 0xC4B6EE: cpu.execute_instruction<0x02>(0x0000B9, 2); return true;
    // src/ending/load_cast_scene-jp.asm:85 LDA __BSS_START__,Y
    case 0xC4B6EF: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/ending/load_cast_scene-jp.asm:86 STA @LOCAL02
    case 0xC4B6F2: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/ending/load_cast_scene-jp.asm:87 LDX #.LOWORD(PALETTES) + 4
    case 0xC4B6F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000204, 3); return true;
    // src/ending/load_cast_scene-jp.asm:87 LDX #.LOWORD(PALETTES) + 4
    // Overlapping static entry reached from 0xC4B6F4.
    case 0xC4B6F6: cpu.execute_instruction<0x02>(0x0000BD, 2); return true;
    // src/ending/load_cast_scene-jp.asm:88 LDA __BSS_START__,X
    case 0xC4B6F7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/ending/load_cast_scene-jp.asm:89 STA __BSS_START__,Y
    case 0xC4B6FA: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/ending/load_cast_scene-jp.asm:90 LDA @LOCAL02
    case 0xC4B6FD: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/ending/load_cast_scene-jp.asm:91 STA __BSS_START__,X
    case 0xC4B6FF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/ending/load_cast_scene-jp.asm:92 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B702: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/load_cast_scene-jp.asm:93 LDA #PALETTE_UPLOAD::FULL
    case 0xC4B704: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/ending/load_cast_scene-jp.asm:94 STA PALETTE_UPLOAD_MODE
    case 0xC4B706: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/ending/load_cast_scene-jp.asm:94 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC4B704.
    case 0xC4B707: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/ending/load_cast_scene-jp.asm:95 LDA #$14
    case 0xC4B709: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x008D14, 3); return true;
    // src/ending/load_cast_scene-jp.asm:96 STA TM_MIRROR
    case 0xC4B70B: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/ending/load_cast_scene-jp.asm:96 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4B709.
    case 0xC4B70C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/load_cast_scene-jp.asm:96 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4B70C.
    case 0xC4B70D: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/ending/load_cast_scene-jp.asm:97 LDA #$16
    case 0xC4B70E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000016, 2); else cpu.execute_instruction<0xA9>(0x008D16, 3); return true;
    // src/ending/load_cast_scene-jp.asm:98 STA TM_MIRROR
    case 0xC4B710: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/ending/load_cast_scene-jp.asm:98 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4B70E.
    case 0xC4B711: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/load_cast_scene-jp.asm:98 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4B711.
    case 0xC4B712: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/ending/load_cast_scene-jp.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC4B713: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/load_cast_scene-jp.asm:100 STZ UNKNOWN_7EB4CF
    case 0xC4B715: cpu.execute_instruction<0x9C>(0x00B6A2, 3); return true;
    // src/ending/load_cast_scene-jp.asm:101 STZ CAST_TILE_OFFSET
    case 0xC4B718: cpu.execute_instruction<0x9C>(0x00B6A4, 3); return true;
    // src/ending/load_cast_scene-jp.asm:102 JSL UNKNOWN_C08744
    case 0xC4B71B: cpu.execute_instruction<0x22>(0xC0873A, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/load_cast_scene-jp.asm:103 END_C_FUNCTION
    case 0xC4B71F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/load_cast_scene-jp.asm:103 END_C_FUNCTION
    case 0xC4B720: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/play_cast_scene.asm (source_named).
bool execute_ending_play_cast_scene_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/play_cast_scene.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BF69: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/play_cast_scene.asm:6 END_STACK_VARS
    case 0xC4BF6B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/play_cast_scene.asm:6 END_STACK_VARS
    case 0xC4BF6C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/play_cast_scene.asm:6 END_STACK_VARS
    case 0xC4BF6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/play_cast_scene.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BF6D.
    case 0xC4BF6F: cpu.execute_instruction<0xFF>(0xB6225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/play_cast_scene.asm:6 END_STACK_VARS
    case 0xC4BF70: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/ending/play_cast_scene.asm:7 JSL LOAD_CAST_SCENE
    case 0xC4BF71: cpu.execute_instruction<0x22>(0xC4B5B6, 4); return true;
    // src/ending/play_cast_scene.asm:7 JSL LOAD_CAST_SCENE
    // Overlapping static entry reached from 0xC4BF6F.
    case 0xC4BF73: cpu.execute_instruction<0xB5>(0x0000C4, 2); return true;
    // src/ending/play_cast_scene.asm:8 JSL OAM_CLEAR
    case 0xC4BF75: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/ending/play_cast_scene.asm:9 LDX #1
    case 0xC4BF79: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/ending/play_cast_scene.asm:9 LDX #1
    // Overlapping static entry reached from 0xC4BF79.
    case 0xC4BF7B: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/ending/play_cast_scene.asm:10 TXA
    case 0xC4BF7C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/ending/play_cast_scene.asm:11 JSL FADE_IN
    case 0xC4BF7D: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/ending/play_cast_scene.asm:12 LDY #0
    case 0xC4BF81: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/ending/play_cast_scene.asm:12 LDY #0
    // Overlapping static entry reached from 0xC4BF81.
    case 0xC4BF83: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/ending/play_cast_scene.asm:13 TYX
    case 0xC4BF84: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/ending/play_cast_scene.asm:14 LDA #EVENT_SCRIPT::EVENT_801
    case 0xC4BF85: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001D, 2); else cpu.execute_instruction<0xA9>(0x00031D, 3); return true;
    // src/ending/play_cast_scene.asm:14 LDA #EVENT_SCRIPT::EVENT_801
    // Overlapping static entry reached from 0xC4BF85.
    case 0xC4BF87: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/ending/play_cast_scene.asm:15 JSL INIT_ENTITY_WIPE
    case 0xC4BF88: cpu.execute_instruction<0x22>(0xC092D4, 4); return true;
    // src/ending/play_cast_scene.asm:15 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC4BF87.
    case 0xC4BF89: cpu.execute_instruction<0xD4>(0x000092, 2); return true;
    // src/ending/play_cast_scene.asm:15 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC4BF89.
    case 0xC4BF8B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009C, 2); else cpu.execute_instruction<0xC0>(0x00399C, 3); return true;
    // src/ending/play_cast_scene.asm:16 STZ ACTIONSCRIPT_STATE
    case 0xC4BF8C: cpu.execute_instruction<0x9C>(0x009939, 3); return true;
    // src/ending/play_cast_scene.asm:16 STZ ACTIONSCRIPT_STATE
    // Overlapping static entry reached from 0xC4BF8B.
    case 0xC4BF8D: cpu.execute_instruction<0x39>(0x008099, 3); return true;
    // src/ending/play_cast_scene.asm:16 STZ ACTIONSCRIPT_STATE
    // Overlapping static entry reached from 0xC4BF8B.
    case 0xC4BF8E: cpu.execute_instruction<0x99>(0x000880, 3); return true;
    // src/ending/play_cast_scene.asm:17 BRA @UNKNOWN1
    case 0xC4BF8F: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/ending/play_cast_scene.asm:17 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC4BF8D.
    case 0xC4BF90: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/ending/play_cast_scene.asm:19 JSL UNKNOWN_C1004E
    case 0xC4BF91: cpu.execute_instruction<0x22>(0xC100C4, 4); return true;
    // src/ending/play_cast_scene.asm:20 JSL UNKNOWN_C2DB3F
    case 0xC4BF95: cpu.execute_instruction<0x22>(0xC2DAB4, 4); return true;
    // src/ending/play_cast_scene.asm:22 LDA ACTIONSCRIPT_STATE
    case 0xC4BF99: cpu.execute_instruction<0xAD>(0x009939, 3); return true;
    // src/ending/play_cast_scene.asm:23 BEQ @UNKNOWN0
    case 0xC4BF9C: cpu.execute_instruction<0xF0>(0x0000F3, 2); return true;
    // src/ending/play_cast_scene.asm:24 LDY #0
    case 0xC4BF9E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/ending/play_cast_scene.asm:24 LDY #0
    // Overlapping static entry reached from 0xC4BF9E.
    case 0xC4BFA0: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/ending/play_cast_scene.asm:25 LDX #1
    case 0xC4BFA1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/ending/play_cast_scene.asm:25 LDX #1
    // Overlapping static entry reached from 0xC4BFA1.
    case 0xC4BFA3: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/ending/play_cast_scene.asm:26 TXA
    case 0xC4BFA4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/ending/play_cast_scene.asm:27 JSL FADE_OUT_WITH_MOSAIC
    case 0xC4BFA5: cpu.execute_instruction<0x22>(0xC0880A, 4); return true;
    // src/ending/play_cast_scene.asm:28 LDX #0
    case 0xC4BFA9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/ending/play_cast_scene.asm:28 LDX #0
    // Overlapping static entry reached from 0xC4BFA9.
    case 0xC4BFAB: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/ending/play_cast_scene.asm:29 STX @LOCAL00
    case 0xC4BFAC: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/ending/play_cast_scene.asm:30 BRA @UNKNOWN4
    case 0xC4BFAE: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/ending/play_cast_scene.asm:32 TXA
    case 0xC4BFB0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/ending/play_cast_scene.asm:33 ASL
    case 0xC4BFB1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/play_cast_scene.asm:34 TAX
    case 0xC4BFB2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/play_cast_scene.asm:35 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC4BFB3: cpu.execute_instruction<0xBD>(0x000A58, 3); return true;
    // src/ending/play_cast_scene.asm:36 CMP #EVENT_SCRIPT::EVENT_801
    case 0xC4BFB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001D, 2); else cpu.execute_instruction<0xC9>(0x00031D, 3); return true;
    // src/ending/play_cast_scene.asm:36 CMP #EVENT_SCRIPT::EVENT_801
    // Overlapping static entry reached from 0xC4BFB6.
    case 0xC4BFB8: cpu.execute_instruction<0x03>(0x0000D0, 2); return true;
    // src/ending/play_cast_scene.asm:37 BNE @UNKNOWN3
    case 0xC4BFB9: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/ending/play_cast_scene.asm:37 BNE @UNKNOWN3
    // Overlapping static entry reached from 0xC4BFB8.
    case 0xC4BFBA: cpu.execute_instruction<0x07>(0x0000A6, 2); return true;
    // src/ending/play_cast_scene.asm:38 LDX @LOCAL00
    case 0xC4BFBB: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/ending/play_cast_scene.asm:38 LDX @LOCAL00
    // Overlapping static entry reached from 0xC4BFBA.
    case 0xC4BFBC: cpu.execute_instruction<0x0E>(0x00228A, 3); return true;
    // src/ending/play_cast_scene.asm:39 TXA
    case 0xC4BFBD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/ending/play_cast_scene.asm:40 JSL UNKNOWN_C09C35
    case 0xC4BFBE: cpu.execute_instruction<0x22>(0xC09C14, 4); return true;
    // src/ending/play_cast_scene.asm:40 JSL UNKNOWN_C09C35
    // Overlapping static entry reached from 0xC4BFBC.
    case 0xC4BFBF: cpu.execute_instruction<0x14>(0x00009C, 2); return true;
    // src/ending/play_cast_scene.asm:40 JSL UNKNOWN_C09C35
    // Overlapping static entry reached from 0xC4BFBF.
    case 0xC4BFC1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A6, 2); else cpu.execute_instruction<0xC0>(0x000EA6, 3); return true;
    // src/ending/play_cast_scene.asm:42 LDX @LOCAL00
    case 0xC4BFC2: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/ending/play_cast_scene.asm:42 LDX @LOCAL00
    // Overlapping static entry reached from 0xC4BFC1.
    case 0xC4BFC3: cpu.execute_instruction<0x0E>(0x0086E8, 3); return true;
    // src/ending/play_cast_scene.asm:43 INX
    case 0xC4BFC4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/ending/play_cast_scene.asm:44 STX @LOCAL00
    case 0xC4BFC5: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/ending/play_cast_scene.asm:44 STX @LOCAL00
    // Overlapping static entry reached from 0xC4BFC3.
    case 0xC4BFC6: cpu.execute_instruction<0x0E>(0x001EE0, 3); return true;
    // src/ending/play_cast_scene.asm:46 CPX #MAX_ENTITIES
    case 0xC4BFC7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00001E, 2); else cpu.execute_instruction<0xE0>(0x00001E, 3); return true;
    // src/ending/play_cast_scene.asm:46 CPX #MAX_ENTITIES
    // Overlapping static entry reached from 0xC4BFC7.
    case 0xC4BFC9: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/ending/play_cast_scene.asm:47 BCC @UNKNOWN2
    case 0xC4BFCA: cpu.execute_instruction<0x90>(0x0000E4, 2); return true;
    // src/ending/play_cast_scene.asm:48 LDA #23
    case 0xC4BFCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/ending/play_cast_scene.asm:48 LDA #23
    // Overlapping static entry reached from 0xC4BFCC.
    case 0xC4BFCE: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/play_cast_scene.asm:49 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC4BFCF: cpu.execute_instruction<0x8D>(0x000A42, 3); return true;
    // src/ending/play_cast_scene.asm:50 LDA #24
    case 0xC4BFD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/ending/play_cast_scene.asm:50 LDA #24
    // Overlapping static entry reached from 0xC4BFD2.
    case 0xC4BFD4: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/play_cast_scene.asm:51 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC4BFD5: cpu.execute_instruction<0x8D>(0x000A44, 3); return true;
    // src/ending/play_cast_scene.asm:52 LDY #0
    case 0xC4BFD8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/ending/play_cast_scene.asm:52 LDY #0
    // Overlapping static entry reached from 0xC4BFD8.
    case 0xC4BFDA: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/ending/play_cast_scene.asm:53 TYX
    case 0xC4BFDB: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/ending/play_cast_scene.asm:54 LDA #EVENT_SCRIPT::EVENT_001
    case 0xC4BFDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/ending/play_cast_scene.asm:54 LDA #EVENT_SCRIPT::EVENT_001
    // Overlapping static entry reached from 0xC4BFDC.
    case 0xC4BFDE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/play_cast_scene.asm:55 JSL INIT_ENTITY
    case 0xC4BFDF: cpu.execute_instruction<0x22>(0xC09300, 4); return true;
    // src/ending/play_cast_scene.asm:56 JSL UNKNOWN_C02D29
    case 0xC4BFE3: cpu.execute_instruction<0x22>(0xC02EFE, 4); return true;
    // src/ending/play_cast_scene.asm:57 JSL UNKNOWN_C03A24
    case 0xC4BFE7: cpu.execute_instruction<0x22>(0xC03C74, 4); return true;
    // src/ending/play_cast_scene.asm:58 JSL UNKNOWN_C08726
    case 0xC4BFEB: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/ending/play_cast_scene.asm:59 JSL UNDRAW_FLYOVER_TEXT
    case 0xC4BFEF: cpu.execute_instruction<0x22>(0xC45CA2, 4); return true;
    // src/ending/play_cast_scene.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BFF3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/play_cast_scene.asm:61 LDA #$17
    case 0xC4BFF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/ending/play_cast_scene.asm:62 STA TM_MIRROR
    case 0xC4BFF7: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/ending/play_cast_scene.asm:62 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4BFF5.
    case 0xC4BFF8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/play_cast_scene.asm:62 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4BFF8.
    case 0xC4BFF9: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/ending/play_cast_scene.asm:63 REP #PROC_FLAGS::ACCUM8
    case 0xC4BFFA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/play_cast_scene.asm:64 END_C_FUNCTION
    case 0xC4BFFC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/play_cast_scene.asm:64 END_C_FUNCTION
    case 0xC4BFFD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/play_credits.asm (source_named).
bool execute_ending_play_credits_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/play_credits.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C594: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/play_credits.asm:8 END_STACK_VARS
    case 0xC4C596: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/play_credits.asm:8 END_STACK_VARS
    case 0xC4C597: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/play_credits.asm:8 END_STACK_VARS
    case 0xC4C598: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/play_credits.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C598.
    case 0xC4C59A: cpu.execute_instruction<0xFF>(0x01A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/play_credits.asm:8 END_STACK_VARS
    case 0xC4C59B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/ending/play_credits.asm:9 LDA #1
    case 0xC4C59C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/ending/play_credits.asm:9 LDA #1
    // Overlapping static entry reached from 0xC4C59C.
    case 0xC4C59E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/play_credits.asm:10 STA DISABLED_TRANSITIONS
    case 0xC4C59F: cpu.execute_instruction<0x8D>(0x00B68A, 3); return true;
    // src/ending/play_credits.asm:11 JSL INITIALIZE_CREDITS_SCENE
    case 0xC4C5A2: cpu.execute_instruction<0x22>(0xC4C0B7, 4); return true;
    // src/ending/play_credits.asm:12 JSL OAM_CLEAR
    case 0xC4C5A6: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/ending/play_credits.asm:13 LDX #2
    case 0xC4C5AA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/ending/play_credits.asm:13 LDX #2
    // Overlapping static entry reached from 0xC4C5AA.
    case 0xC4C5AC: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/ending/play_credits.asm:14 LDA #1
    case 0xC4C5AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/ending/play_credits.asm:14 LDA #1
    // Overlapping static entry reached from 0xC4C5AD.
    case 0xC4C5AF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/play_credits.asm:15 JSL FADE_IN
    case 0xC4C5B0: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/ending/play_credits.asm:16 JSL COUNT_PHOTO_FLAGS
    case 0xC4C5B4: cpu.execute_instruction<0x22>(0xC4C473, 4); return true;
    // src/ending/play_credits.asm:17 CMP #0
    case 0xC4C5B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/ending/play_credits.asm:17 CMP #0
    // Overlapping static entry reached from 0xC4C5B8.
    case 0xC4C5BA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/play_credits.asm:18 BEQ @UNKNOWN0
    case 0xC4C5BB: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/ending/play_credits.asm:19 JSL COUNT_PHOTO_FLAGS
    case 0xC4C5BD: cpu.execute_instruction<0x22>(0xC4C473, 4); return true;
    // src/ending/play_credits.asm:20 TAY
    case 0xC4C5C1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/play_credits.asm:21 LDA #CREDITS_LENGTH
    case 0xC4C5C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A8, 2); else cpu.execute_instruction<0xA9>(0x0011A8, 3); return true;
    // src/ending/play_credits.asm:21 LDA #CREDITS_LENGTH
    // Overlapping static entry reached from 0xC4C5C2.
    case 0xC4C5C4: cpu.execute_instruction<0x11>(0x000022, 2); return true;
    // src/ending/play_credits.asm:22 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC4C5C5: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/ending/play_credits.asm:22 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC4C5C4.
    case 0xC4C5C6: cpu.execute_instruction<0x3D>(0x00C091, 3); return true;
    // src/ending/play_credits.asm:23 BRA @UNKNOWN1
    case 0xC4C5C9: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/ending/play_credits.asm:25 LDA #CREDITS_LENGTH
    case 0xC4C5CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A8, 2); else cpu.execute_instruction<0xA9>(0x0011A8, 3); return true;
    // src/ending/play_credits.asm:25 LDA #CREDITS_LENGTH
    // Overlapping static entry reached from 0xC4C5CB.
    case 0xC4C5CD: cpu.execute_instruction<0x11>(0x000085, 2); return true;
    // src/ending/play_credits.asm:27 STA @VIRTUAL04
    case 0xC4C5CE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/ending/play_credits.asm:27 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC4C5CD.
    case 0xC4C5CF: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/ending/play_credits.asm:28 STA @VIRTUAL02
    case 0xC4C5D0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/play_credits.asm:28 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4C5CF.
    case 0xC4C5D1: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/ending/play_credits.asm:29 LDA #.LOWORD(CREDITS_SCROLL_FRAME)
    case 0xC4C5D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008D, 2); else cpu.execute_instruction<0xA9>(0x00FB8D, 3); return true;
    // src/ending/play_credits.asm:29 LDA #.LOWORD(CREDITS_SCROLL_FRAME)
    // Overlapping static entry reached from 0xC4C5D2.
    case 0xC4C5D4: cpu.execute_instruction<0xFB>(0x000000, 1); return true;
    // src/ending/play_credits.asm:30 JSL SET_IRQ_CALLBACK
    case 0xC4C5D5: cpu.execute_instruction<0x22>(0xC0851C, 4); return true;
    // src/ending/play_credits.asm:31 LDY #0
    case 0xC4C5D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/ending/play_credits.asm:31 LDY #0
    // Overlapping static entry reached from 0xC4C5D9.
    case 0xC4C5DB: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/ending/play_credits.asm:32 STY @LOCAL02
    case 0xC4C5DC: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/ending/play_credits.asm:33 JMP @UNKNOWN12
    case 0xC4C5DE: cpu.execute_instruction<0x4C>(0x00C699, 3); return true;
    // src/ending/play_credits.asm:35 TYA
    case 0xC4C5E1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/ending/play_credits.asm:36 JSL TRY_RENDERING_PHOTOGRAPH
    case 0xC4C5E2: cpu.execute_instruction<0x22>(0xC4C2A0, 4); return true;
    // src/ending/play_credits.asm:37 CMP #0
    case 0xC4C5E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/ending/play_credits.asm:37 CMP #0
    // Overlapping static entry reached from 0xC4C5E6.
    case 0xC4C5E8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/play_credits.asm:38 BEQL @UNKNOWN11
    case 0xC4C5E9: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/play_credits.asm:38 BEQL @UNKNOWN11
    case 0xC4C5EB: cpu.execute_instruction<0x4C>(0x00C694, 3); return true;
    // src/ending/play_credits.asm:39 LDX #$FFFF
    case 0xC4C5EE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/ending/play_credits.asm:39 LDX #$FFFF
    // Overlapping static entry reached from 0xC4C5EE.
    case 0xC4C5F0: cpu.execute_instruction<0xFF>(0x0040A9, 4); return true;
    // src/ending/play_credits.asm:40 LDA #64
    case 0xC4C5F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/ending/play_credits.asm:40 LDA #64
    // Overlapping static entry reached from 0xC4C5F1.
    case 0xC4C5F3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/play_credits.asm:41 JSL UNKNOWN_C496E7
    case 0xC4C5F4: cpu.execute_instruction<0x22>(0xC46D31, 4); return true;
    // src/ending/play_credits.asm:43 LDX #64
    case 0xC4C5F8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000040, 2); else cpu.execute_instruction<0xA2>(0x000040, 3); return true;
    // src/ending/play_credits.asm:43 LDX #64
    // Overlapping static entry reached from 0xC4C5F8.
    case 0xC4C5FA: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/ending/play_credits.asm:44 STX @LOCAL01
    case 0xC4C5FB: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/ending/play_credits.asm:45 BRA @UNKNOWN5
    case 0xC4C5FD: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/ending/play_credits.asm:47 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC4C5FF: cpu.execute_instruction<0x22>(0xC4262B, 4); return true;
    // src/ending/play_credits.asm:48 JSL PROCESS_CREDITS_DMA_QUEUE
    case 0xC4C603: cpu.execute_instruction<0x22>(0xC4C057, 4); return true;
    // src/ending/play_credits.asm:49 JSL UNKNOWN_C1004E
    case 0xC4C607: cpu.execute_instruction<0x22>(0xC100C4, 4); return true;
    // src/ending/play_credits.asm:50 LDX @LOCAL01
    case 0xC4C60B: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/ending/play_credits.asm:51 DEX
    case 0xC4C60D: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/ending/play_credits.asm:52 STX @LOCAL01
    case 0xC4C60E: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/ending/play_credits.asm:54 BNE @UNKNOWN4
    case 0xC4C610: cpu.execute_instruction<0xD0>(0x0000ED, 2); return true;
    // src/ending/play_credits.asm:55 JSL UNKNOWN_C49740
    case 0xC4C612: cpu.execute_instruction<0x22>(0xC46D8A, 4); return true;
    // src/ending/play_credits.asm:56 LDY @LOCAL02
    case 0xC4C616: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/ending/play_credits.asm:57 TYA
    case 0xC4C618: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/ending/play_credits.asm:58 JSL SLIDE_CREDITS_PHOTOGRAPH
    case 0xC4C619: cpu.execute_instruction<0x22>(0xC4C4AF, 4); return true;
    // src/ending/play_credits.asm:59 BRA @UNKNOWN7
    case 0xC4C61D: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/ending/play_credits.asm:61 JSL PROCESS_CREDITS_DMA_QUEUE
    case 0xC4C61F: cpu.execute_instruction<0x22>(0xC4C057, 4); return true;
    // src/ending/play_credits.asm:62 JSL UNKNOWN_C1004E
    case 0xC4C623: cpu.execute_instruction<0x22>(0xC100C4, 4); return true;
    // src/ending/play_credits.asm:64 LDA @VIRTUAL02
    case 0xC4C627: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/play_credits.asm:65 CMP BG3_Y_POS
    case 0xC4C629: cpu.execute_instruction<0xCD>(0x00003B, 3); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/ending/play_credits.asm:66 BGT @UNKNOWN6
    case 0xC4C62C: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/ending/play_credits.asm:66 BGT @UNKNOWN6
    case 0xC4C62E: cpu.execute_instruction<0xB0>(0x0000EF, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/play_credits.asm:67 LOADPTR BUFFER+32, @LOCAL00
    case 0xC4C630: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/play_credits.asm:67 LOADPTR BUFFER+32, @LOCAL00
    // Overlapping static entry reached from 0xC4C630.
    case 0xC4C632: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/play_credits.asm:67 LOADPTR BUFFER+32, @LOCAL00
    case 0xC4C633: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/play_credits.asm:67 LOADPTR BUFFER+32, @LOCAL00
    case 0xC4C635: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/play_credits.asm:67 LOADPTR BUFFER+32, @LOCAL00
    // Overlapping static entry reached from 0xC4C635.
    case 0xC4C637: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/play_credits.asm:67 LOADPTR BUFFER+32, @LOCAL00
    case 0xC4C638: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/play_credits.asm:68 LDX #480
    case 0xC4C63A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E0, 2); else cpu.execute_instruction<0xA2>(0x0001E0, 3); return true;
    // src/ending/play_credits.asm:68 LDX #480
    // Overlapping static entry reached from 0xC4C63A.
    case 0xC4C63C: cpu.execute_instruction<0x01>(0x0000E2, 2); return true;
    // src/ending/play_credits.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C63D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/play_credits.asm:69 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4C63C.
    case 0xC4C63E: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/ending/play_credits.asm:70 LDA #0
    case 0xC4C63F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/ending/play_credits.asm:71 JSL MEMSET24
    case 0xC4C641: cpu.execute_instruction<0x22>(0xC08F06, 4); return true;
    // src/ending/play_credits.asm:71 JSL MEMSET24
    // Overlapping static entry reached from 0xC4C63F.
    case 0xC4C642: cpu.execute_instruction<0x06>(0x00008F, 2); return true;
    // src/ending/play_credits.asm:71 JSL MEMSET24
    // Overlapping static entry reached from 0xC4C642.
    case 0xC4C644: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A2, 2); else cpu.execute_instruction<0xC0>(0x00FFA2, 3); return true;
    // src/ending/play_credits.asm:73 LDX #$FFFF
    case 0xC4C645: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/ending/play_credits.asm:73 LDX #$FFFF
    // Overlapping static entry reached from 0xC4C644.
    case 0xC4C646: cpu.execute_instruction<0xFF>(0x40A9FF, 4); return true;
    // src/ending/play_credits.asm:73 LDX #$FFFF
    // Overlapping static entry reached from 0xC4C645.
    case 0xC4C647: cpu.execute_instruction<0xFF>(0x0040A9, 4); return true;
    // src/ending/play_credits.asm:74 LDA #64
    case 0xC4C648: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/ending/play_credits.asm:74 LDA #64
    // Overlapping static entry reached from 0xC4C648.
    case 0xC4C64A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/play_credits.asm:75 JSL UNKNOWN_C496E7
    case 0xC4C64B: cpu.execute_instruction<0x22>(0xC46D31, 4); return true;
    // src/ending/play_credits.asm:76 LDX #0
    case 0xC4C64F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/ending/play_credits.asm:76 LDX #0
    // Overlapping static entry reached from 0xC4C64F.
    case 0xC4C651: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/ending/play_credits.asm:77 STX @LOCAL01
    case 0xC4C652: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/ending/play_credits.asm:78 BRA @UNKNOWN10
    case 0xC4C654: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/ending/play_credits.asm:80 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC4C656: cpu.execute_instruction<0x22>(0xC4262B, 4); return true;
    // src/ending/play_credits.asm:81 JSL PROCESS_CREDITS_DMA_QUEUE
    case 0xC4C65A: cpu.execute_instruction<0x22>(0xC4C057, 4); return true;
    // src/ending/play_credits.asm:82 JSL UNKNOWN_C1004E
    case 0xC4C65E: cpu.execute_instruction<0x22>(0xC100C4, 4); return true;
    // src/ending/play_credits.asm:83 LDX @LOCAL01
    case 0xC4C662: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/ending/play_credits.asm:84 INX
    case 0xC4C664: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/ending/play_credits.asm:85 STX @LOCAL01
    case 0xC4C665: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/ending/play_credits.asm:87 CPX #64
    case 0xC4C667: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000040, 2); else cpu.execute_instruction<0xE0>(0x000040, 3); return true;
    // src/ending/play_credits.asm:87 CPX #64
    // Overlapping static entry reached from 0xC4C667.
    case 0xC4C669: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/ending/play_credits.asm:88 BCC @UNKNOWN9
    case 0xC4C66A: cpu.execute_instruction<0x90>(0x0000EA, 2); return true;
    // src/ending/play_credits.asm:89 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C66C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/ending/play_credits.asm:90 STZ_BADOPT @LOCAL00
    case 0xC4C66E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/ending/play_credits.asm:90 STZ_BADOPT @LOCAL00
    case 0xC4C670: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/ending/play_credits.asm:90 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC4C66E.
    case 0xC4C671: cpu.execute_instruction<0x0E>(0x00E0A2, 3); return true;
    // src/ending/play_credits.asm:91 LDX #480
    case 0xC4C672: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E0, 2); else cpu.execute_instruction<0xA2>(0x0001E0, 3); return true;
    // src/ending/play_credits.asm:91 LDX #480
    // Overlapping static entry reached from 0xC4C672.
    case 0xC4C674: cpu.execute_instruction<0x01>(0x0000C2, 2); return true;
    // src/ending/play_credits.asm:92 REP #PROC_FLAGS::ACCUM8
    case 0xC4C675: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/play_credits.asm:92 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4C674.
    case 0xC4C676: cpu.execute_instruction<0x20>(0x0020A9, 3); return true;
    // src/ending/play_credits.asm:93 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    case 0xC4C677: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000220, 3); return true;
    // src/ending/play_credits.asm:93 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4C677.
    case 0xC4C679: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/ending/play_credits.asm:94 JSL MEMSET16
    case 0xC4C67A: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/ending/play_credits.asm:95 LDA #24
    case 0xC4C67E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/ending/play_credits.asm:95 LDA #24
    // Overlapping static entry reached from 0xC4C67E.
    case 0xC4C680: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/play_credits.asm:96 JSL UNKNOWN_C0856B
    case 0xC4C681: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/ending/play_credits.asm:97 JSL PROCESS_CREDITS_DMA_QUEUE
    case 0xC4C685: cpu.execute_instruction<0x22>(0xC4C057, 4); return true;
    // src/ending/play_credits.asm:98 JSL UNKNOWN_C1004E
    case 0xC4C689: cpu.execute_instruction<0x22>(0xC100C4, 4); return true;
    // src/ending/play_credits.asm:99 LDA @VIRTUAL02
    case 0xC4C68D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/play_credits.asm:100 CLC
    case 0xC4C68F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/play_credits.asm:101 ADC @VIRTUAL04
    case 0xC4C690: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/ending/play_credits.asm:102 STA @VIRTUAL02
    case 0xC4C692: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/play_credits.asm:104 LDY @LOCAL02
    case 0xC4C694: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/ending/play_credits.asm:105 INY
    case 0xC4C696: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/ending/play_credits.asm:106 STY @LOCAL02
    case 0xC4C697: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/ending/play_credits.asm:108 CPY #NUM_PHOTOS
    case 0xC4C699: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/ending/play_credits.asm:108 CPY #NUM_PHOTOS
    // Overlapping static entry reached from 0xC4C699.
    case 0xC4C69B: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/ending/play_credits.asm:109 BCCL @UNKNOWN2
    case 0xC4C69C: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/ending/play_credits.asm:109 BCCL @UNKNOWN2
    case 0xC4C69E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/ending/play_credits.asm:109 BCCL @UNKNOWN2
    case 0xC4C6A0: cpu.execute_instruction<0x4C>(0x00C5E1, 3); return true;
    // src/ending/play_credits.asm:110 BRA @UNKNOWN15
    case 0xC4C6A3: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/ending/play_credits.asm:112 JSL PROCESS_CREDITS_DMA_QUEUE
    case 0xC4C6A5: cpu.execute_instruction<0x22>(0xC4C057, 4); return true;
    // src/ending/play_credits.asm:113 JSL UNKNOWN_C1004E
    case 0xC4C6A9: cpu.execute_instruction<0x22>(0xC100C4, 4); return true;
    // src/ending/play_credits.asm:115 LDA BG3_Y_POS
    case 0xC4C6AD: cpu.execute_instruction<0xAD>(0x00003B, 3); return true;
    // src/ending/play_credits.asm:116 CMP #CREDITS_LENGTH
    case 0xC4C6B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000A8, 2); else cpu.execute_instruction<0xC9>(0x0011A8, 3); return true;
    // src/ending/play_credits.asm:116 CMP #CREDITS_LENGTH
    // Overlapping static entry reached from 0xC4C6B0.
    case 0xC4C6B2: cpu.execute_instruction<0x11>(0x000090, 2); return true;
    // src/ending/play_credits.asm:117 BCC @UNKNOWN14
    case 0xC4C6B3: cpu.execute_instruction<0x90>(0x0000F0, 2); return true;
    // src/ending/play_credits.asm:117 BCC @UNKNOWN14
    // Overlapping static entry reached from 0xC4C6B2.
    case 0xC4C6B4: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/ending/play_credits.asm:118 JSL RESET_IRQ_CALLBACK
    case 0xC4C6B5: cpu.execute_instruction<0x22>(0xC08522, 4); return true;
    // src/ending/play_credits.asm:118 JSL RESET_IRQ_CALLBACK
    // Overlapping static entry reached from 0xC4C6B4.
    case 0xC4C6B6: cpu.execute_instruction<0x22>(0xA2C085, 4); return true;
    // src/ending/play_credits.asm:119 LDX #0
    case 0xC4C6B9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/ending/play_credits.asm:119 LDX #0
    // Overlapping static entry reached from 0xC4C6B6.
    case 0xC4C6BA: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/ending/play_credits.asm:119 LDX #0
    // Overlapping static entry reached from 0xC4C6B9.
    case 0xC4C6BB: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/ending/play_credits.asm:120 STX @LOCAL01
    case 0xC4C6BC: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/ending/play_credits.asm:121 BRA @UNKNOWN17
    case 0xC4C6BE: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/ending/play_credits.asm:123 JSL UNKNOWN_C1004E
    case 0xC4C6C0: cpu.execute_instruction<0x22>(0xC100C4, 4); return true;
    // src/ending/play_credits.asm:124 LDX @LOCAL01
    case 0xC4C6C4: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/ending/play_credits.asm:125 INX
    case 0xC4C6C6: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/ending/play_credits.asm:126 STX @LOCAL01
    case 0xC4C6C7: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/ending/play_credits.asm:128 CPX #2000
    case 0xC4C6C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000D0, 2); else cpu.execute_instruction<0xE0>(0x0007D0, 3); return true;
    // src/ending/play_credits.asm:128 CPX #2000
    // Overlapping static entry reached from 0xC4C6C9.
    case 0xC4C6CB: cpu.execute_instruction<0x07>(0x000090, 2); return true;
    // src/ending/play_credits.asm:129 BCC @UNKNOWN16
    case 0xC4C6CC: cpu.execute_instruction<0x90>(0x0000F2, 2); return true;
    // src/ending/play_credits.asm:129 BCC @UNKNOWN16
    // Overlapping static entry reached from 0xC4C6CB.
    case 0xC4C6CD: cpu.execute_instruction<0xF2>(0x0000A0, 2); return true;
    // src/ending/play_credits.asm:130 LDY #0
    case 0xC4C6CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/ending/play_credits.asm:130 LDY #0
    // Overlapping static entry reached from 0xC4C6CD.
    case 0xC4C6CF: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/ending/play_credits.asm:130 LDY #0
    // Overlapping static entry reached from 0xC4C6CE.
    case 0xC4C6D0: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/ending/play_credits.asm:131 LDX #2
    case 0xC4C6D1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/ending/play_credits.asm:131 LDX #2
    // Overlapping static entry reached from 0xC4C6D1.
    case 0xC4C6D3: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/ending/play_credits.asm:132 LDA #1
    case 0xC4C6D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/ending/play_credits.asm:132 LDA #1
    // Overlapping static entry reached from 0xC4C6D4.
    case 0xC4C6D6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/play_credits.asm:133 JSL FADE_OUT_WITH_MOSAIC
    case 0xC4C6D7: cpu.execute_instruction<0x22>(0xC0880A, 4); return true;
    // src/ending/play_credits.asm:133 JSL FADE_OUT_WITH_MOSAIC
    // Overlapping static entry reached from 0xC4C6B4.
    case 0xC4C6D8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/play_credits.asm:133 JSL FADE_OUT_WITH_MOSAIC
    // Overlapping static entry reached from 0xC4C6D8.
    case 0xC4C6D9: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/ending/play_credits.asm:133 JSL FADE_OUT_WITH_MOSAIC
    // Overlapping static entry reached from 0xC4C6D9.
    case 0xC4C6DA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A2, 2); else cpu.execute_instruction<0xC0>(0x0000A2, 3); return true;
    // src/ending/play_credits.asm:134 LDX #0
    case 0xC4C6DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/ending/play_credits.asm:134 LDX #0
    // Overlapping static entry reached from 0xC4C6DA.
    case 0xC4C6DC: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/ending/play_credits.asm:134 LDX #0
    // Overlapping static entry reached from 0xC4C6DB.
    case 0xC4C6DD: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/ending/play_credits.asm:135 LDA #$B3
    case 0xC4C6DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B3, 2); else cpu.execute_instruction<0xA9>(0x0000B3, 3); return true;
    // src/ending/play_credits.asm:135 LDA #$B3
    // Overlapping static entry reached from 0xC4C6DE.
    case 0xC4C6E0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/play_credits.asm:136 JSL UNKNOWN_C4249A
    case 0xC4C6E1: cpu.execute_instruction<0x22>(0xC423D8, 4); return true;
    // src/ending/play_credits.asm:137 JSL UNKNOWN_C08726
    case 0xC4C6E5: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/ending/play_credits.asm:138 JSL OVERWORLD_SETUP_VRAM
    case 0xC4C6E9: cpu.execute_instruction<0x22>(0xC00013, 4); return true;
    // src/ending/play_credits.asm:139 JSL UNKNOWN_C021E6
    case 0xC4C6ED: cpu.execute_instruction<0x22>(0xC021F4, 4); return true;
    // src/ending/play_credits.asm:140 LDA #23
    case 0xC4C6F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/ending/play_credits.asm:140 LDA #23
    // Overlapping static entry reached from 0xC4C6F1.
    case 0xC4C6F3: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/play_credits.asm:141 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC4C6F4: cpu.execute_instruction<0x8D>(0x000A42, 3); return true;
    // src/ending/play_credits.asm:142 LDA #24
    case 0xC4C6F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/ending/play_credits.asm:142 LDA #24
    // Overlapping static entry reached from 0xC4C6F7.
    case 0xC4C6F9: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/play_credits.asm:143 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC4C6FA: cpu.execute_instruction<0x8D>(0x000A44, 3); return true;
    // src/ending/play_credits.asm:144 LDY #0
    case 0xC4C6FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/ending/play_credits.asm:144 LDY #0
    // Overlapping static entry reached from 0xC4C6FD.
    case 0xC4C6FF: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/ending/play_credits.asm:145 TYX
    case 0xC4C700: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/ending/play_credits.asm:146 LDA #EVENT_SCRIPT::EVENT_001
    case 0xC4C701: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/ending/play_credits.asm:146 LDA #EVENT_SCRIPT::EVENT_001
    // Overlapping static entry reached from 0xC4C701.
    case 0xC4C703: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/play_credits.asm:147 JSL INIT_ENTITY
    case 0xC4C704: cpu.execute_instruction<0x22>(0xC09300, 4); return true;
    // src/ending/play_credits.asm:148 JSL UNKNOWN_C02D29
    case 0xC4C708: cpu.execute_instruction<0x22>(0xC02EFE, 4); return true;
    // src/ending/play_credits.asm:149 JSL UNKNOWN_C03A24
    case 0xC4C70C: cpu.execute_instruction<0x22>(0xC03C74, 4); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C710: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000076, 2); else cpu.execute_instruction<0xA9>(0x008176, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C710.
    case 0xC4C712: cpu.execute_instruction<0x81>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C713: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C712.
    case 0xC4C714: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C715: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C716: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C718: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C719: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/play_credits.asm:150 PROMOTENEARPTR BG2_BUFFER, @VIRTUAL06
    case 0xC4C71B: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/play_credits.asm:151 LDX #0
    case 0xC4C71D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/ending/play_credits.asm:151 LDX #0
    // Overlapping static entry reached from 0xC4C71D.
    case 0xC4C71F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/ending/play_credits.asm:152 BRA @UNKNOWN19
    case 0xC4C720: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/ending/play_credits.asm:154 REP #PROC_FLAGS::ACCUM8
    case 0xC4C722: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/play_credits.asm:155 LDA #0
    case 0xC4C724: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/play_credits.asm:155 LDA #0
    // Overlapping static entry reached from 0xC4C724.
    case 0xC4C726: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/ending/play_credits.asm:156 STA [@VIRTUAL06]
    case 0xC4C727: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/ending/play_credits.asm:157 INC @VIRTUAL06
    case 0xC4C729: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/ending/play_credits.asm:158 INC @VIRTUAL06
    case 0xC4C72B: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/ending/play_credits.asm:159 INX
    case 0xC4C72D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/ending/play_credits.asm:161 CPX #512
    case 0xC4C72E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000200, 3); return true;
    // src/ending/play_credits.asm:161 CPX #512
    // Overlapping static entry reached from 0xC4C72E.
    case 0xC4C730: cpu.execute_instruction<0x02>(0x000090, 2); return true;
    // src/ending/play_credits.asm:162 BCC @UNKNOWN18
    case 0xC4C731: cpu.execute_instruction<0x90>(0x0000EF, 2); return true;
    // src/ending/play_credits.asm:163 JSL UNDRAW_FLYOVER_TEXT
    case 0xC4C733: cpu.execute_instruction<0x22>(0xC45CA2, 4); return true;
    // src/ending/play_credits.asm:164 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C737: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/play_credits.asm:165 LDA #$0017
    case 0xC4C739: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/ending/play_credits.asm:166 STA TM_MIRROR
    case 0xC4C73B: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/ending/play_credits.asm:166 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4C739.
    case 0xC4C73C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/play_credits.asm:166 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4C73C.
    case 0xC4C73D: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/ending/play_credits.asm:167 REP #PROC_FLAGS::ACCUM8
    case 0xC4C73E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/play_credits.asm:168 LDA #.LOWORD(PROCESS_OVERWORLD_TASKS)
    case 0xC4C740: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000016, 2); else cpu.execute_instruction<0xA9>(0x00DC16, 3); return true;
    // src/ending/play_credits.asm:168 LDA #.LOWORD(PROCESS_OVERWORLD_TASKS)
    // Overlapping static entry reached from 0xC4C740.
    case 0xC4C742: cpu.execute_instruction<0xDC>(0x001C22, 3); return true;
    // src/ending/play_credits.asm:169 JSL SET_IRQ_CALLBACK
    case 0xC4C743: cpu.execute_instruction<0x22>(0xC0851C, 4); return true;
    // src/ending/play_credits.asm:170 STZ DISABLED_TRANSITIONS
    case 0xC4C747: cpu.execute_instruction<0x9C>(0x00B68A, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/play_credits.asm:171 END_C_FUNCTION
    case 0xC4C74A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/play_credits.asm:171 END_C_FUNCTION
    case 0xC4C74B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/prepare_cast_name_tilemap-jp.asm (source_named).
bool execute_ending_prepare_cast_name_tilemap_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BBE0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    case 0xC4BBE2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    case 0xC4BBE3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    case 0xC4BBE4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    case 0xC4BBE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000ED, 2); else cpu.execute_instruction<0x69>(0x00FFED, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BBE5.
    case 0xC4BBE7: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    case 0xC4BBE8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:12 END_STACK_VARS
    case 0xC4BBE9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:13 STX @VIRTUAL02
    case 0xC4BBEA: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:13 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4BBE7.
    case 0xC4BBEB: cpu.execute_instruction<0x02>(0x000086, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:14 STX @LOCAL02
    case 0xC4BBEC: cpu.execute_instruction<0x86>(0x000011, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:15 STA @LOCAL01
    case 0xC4BBEE: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:16 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC4BBF0: cpu.execute_instruction<0xA5>(0x000021, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:16 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC4BBF2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:16 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC4BBF4: cpu.execute_instruction<0xA5>(0x000023, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:16 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC4BBF6: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:17 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4BBF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x004000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:17 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BBF8.
    case 0xC4BBFA: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:17 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4BBFB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:17 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4BBFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:17 LOADPTR BUFFER + $4000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BBFD.
    case 0xC4BBFF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:17 LOADPTR BUFFER + $4000, @VIRTUAL06
    case 0xC4BC00: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:18 LDA @LOCAL01
    case 0xC4BC02: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:19 ASL
    case 0xC4BC04: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:20 CLC
    case 0xC4BC05: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:21 ADC @VIRTUAL06
    case 0xC4BC06: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:22 STA @VIRTUAL06
    case 0xC4BC08: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:23 LDX #0
    case 0xC4BC0A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:23 LDX #0
    // Overlapping static entry reached from 0xC4BC0A.
    case 0xC4BC0C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:24 BRA @UNKNOWN1
    case 0xC4BC0D: cpu.execute_instruction<0x80>(0x00003D, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:26 LDA @LOCAL00
    case 0xC4BC0F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:27 AND #$00FF
    case 0xC4BC11: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC4BC11.
    case 0xC4BC13: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:28 STA @LOCAL01
    case 0xC4BC14: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:29 AND #$1C00
    case 0xC4BC16: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001C00, 3); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:29 AND #$1C00
    // Overlapping static entry reached from 0xC4BC16.
    case 0xC4BC18: cpu.execute_instruction<0x1C>(0x000485, 3); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:30 STA @VIRTUAL04
    case 0xC4BC19: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:31 LDA @LOCAL01
    case 0xC4BC1B: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:32 AND #$000F
    case 0xC4BC1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:32 AND #$000F
    // Overlapping static entry reached from 0xC4BC1D.
    case 0xC4BC1F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:33 STA @VIRTUAL02
    case 0xC4BC20: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:34 LDA @LOCAL01
    case 0xC4BC22: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:35 AND #$03F0
    case 0xC4BC24: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x0003F0, 3); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:35 AND #$03F0
    // Overlapping static entry reached from 0xC4BC24.
    case 0xC4BC26: cpu.execute_instruction<0x03>(0x00000A, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:36 ASL
    case 0xC4BC27: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:37 CLC
    case 0xC4BC28: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:38 ADC @VIRTUAL02
    case 0xC4BC29: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:39 CLC
    case 0xC4BC2B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:40 ADC @VIRTUAL04
    case 0xC4BC2C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:41 STA @LOCAL01
    case 0xC4BC2E: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:42 CLC
    case 0xC4BC30: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:43 ADC CAST_TILE_OFFSET
    case 0xC4BC31: cpu.execute_instruction<0x6D>(0x00B6A4, 3); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:44 STA [@VIRTUAL06]
    case 0xC4BC34: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:45 LDA @LOCAL01
    case 0xC4BC36: cpu.execute_instruction<0xA5>(0x00000F, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:46 CLC
    case 0xC4BC38: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:47 ADC CAST_TILE_OFFSET
    case 0xC4BC39: cpu.execute_instruction<0x6D>(0x00B6A4, 3); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:48 CLC
    case 0xC4BC3C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:49 ADC #16
    case 0xC4BC3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:49 ADC #16
    // Overlapping static entry reached from 0xC4BC3D.
    case 0xC4BC3F: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:50 LDY #64
    case 0xC4BC40: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000040, 2); else cpu.execute_instruction<0xA0>(0x000040, 3); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:50 LDY #64
    // Overlapping static entry reached from 0xC4BC40.
    case 0xC4BC42: cpu.execute_instruction<0x00>(0x000097, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:51 STA [@VIRTUAL06],Y
    case 0xC4BC43: cpu.execute_instruction<0x97>(0x000006, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:52 INC @VIRTUAL06
    case 0xC4BC45: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:53 INC @VIRTUAL06
    case 0xC4BC47: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:54 INC @VIRTUAL0A
    case 0xC4BC49: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:55 INX
    case 0xC4BC4B: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BC4C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:58 LDA [@VIRTUAL0A]
    case 0xC4BC4E: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:59 STA @LOCAL00
    case 0xC4BC50: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:60 REP #PROC_FLAGS::ACCUM8
    case 0xC4BC52: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:61 AND #$00FF
    case 0xC4BC54: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:61 AND #$00FF
    // Overlapping static entry reached from 0xC4BC54.
    case 0xC4BC56: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:62 BEQ @UNKNOWN2
    case 0xC4BC57: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:63 LDA @LOCAL02
    case 0xC4BC59: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:64 STA @VIRTUAL02
    case 0xC4BC5B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:65 TXA
    case 0xC4BC5D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:66 CMP @VIRTUAL02
    case 0xC4BC5E: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:67 BCC @UNKNOWN0
    case 0xC4BC60: cpu.execute_instruction<0x90>(0x0000AD, 2); return true;
    // src/ending/prepare_cast_name_tilemap-jp.asm:69 TXA
    case 0xC4BC62: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:70 END_C_FUNCTION
    case 0xC4BC63: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/prepare_cast_name_tilemap-jp.asm:70 END_C_FUNCTION
    case 0xC4BC64: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/print_cast_name-jp.asm (source_named).
bool execute_ending_print_cast_name_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/print_cast_name-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BD19: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/print_cast_name-jp.asm:11 END_STACK_VARS
    case 0xC4BD1B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/print_cast_name-jp.asm:11 END_STACK_VARS
    case 0xC4BD1C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/print_cast_name-jp.asm:11 END_STACK_VARS
    case 0xC4BD1D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/print_cast_name-jp.asm:11 END_STACK_VARS
    case 0xC4BD1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/print_cast_name-jp.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BD1E.
    case 0xC4BD20: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/print_cast_name-jp.asm:11 END_STACK_VARS
    case 0xC4BD21: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/print_cast_name-jp.asm:11 END_STACK_VARS
    case 0xC4BD22: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/print_cast_name-jp.asm:12 STY @VIRTUAL04
    case 0xC4BD23: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/ending/print_cast_name-jp.asm:12 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC4BD20.
    case 0xC4BD24: cpu.execute_instruction<0x04>(0x000086, 2); return true;
    // src/ending/print_cast_name-jp.asm:13 STX @VIRTUAL02
    case 0xC4BD25: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/ending/print_cast_name-jp.asm:13 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4BD24.
    case 0xC4BD26: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/ending/print_cast_name-jp.asm:14 STA @LOCAL02
    case 0xC4BD27: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/print_cast_name-jp.asm:15 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    case 0xC4BD29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000081, 2); else cpu.execute_instruction<0xA9>(0x002381, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/print_cast_name-jp.asm:15 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BD29.
    case 0xC4BD2B: cpu.execute_instruction<0x23>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/print_cast_name-jp.asm:15 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    case 0xC4BD2C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/print_cast_name-jp.asm:15 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BD2B.
    case 0xC4BD2D: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/print_cast_name-jp.asm:15 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    case 0xC4BD2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/print_cast_name-jp.asm:15 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BD2D.
    case 0xC4BD2F: cpu.execute_instruction<0xE1>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/print_cast_name-jp.asm:15 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BD2E.
    case 0xC4BD30: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/print_cast_name-jp.asm:15 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    case 0xC4BD31: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/print_cast_name-jp.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4BD33: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/print_cast_name-jp.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4BD35: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/print_cast_name-jp.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4BD37: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/print_cast_name-jp.asm:16 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4BD39: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/print_cast_name-jp.asm:17 LDA @LOCAL02
    case 0xC4BD3B: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/ending/print_cast_name-jp.asm:18 ASL
    case 0xC4BD3D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/print_cast_name-jp.asm:19 CLC
    case 0xC4BD3E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/print_cast_name-jp.asm:20 ADC @VIRTUAL06
    case 0xC4BD3F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/print_cast_name-jp.asm:21 STA @VIRTUAL06
    case 0xC4BD41: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/print_cast_name-jp.asm:22 LDA [@VIRTUAL06]
    case 0xC4BD43: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/ending/print_cast_name-jp.asm:23 STORE_INT1632 @VIRTUAL0A
    case 0xC4BD45: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/ending/print_cast_name-jp.asm:23 STORE_INT1632 @VIRTUAL0A
    case 0xC4BD47: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/ending/print_cast_name-jp.asm:24 PUSH32 @VIRTUAL0A
    case 0xC4BD49: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/ending/print_cast_name-jp.asm:24 PUSH32 @VIRTUAL0A
    case 0xC4BD4B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/ending/print_cast_name-jp.asm:24 PUSH32 @VIRTUAL0A
    case 0xC4BD4C: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/ending/print_cast_name-jp.asm:24 PUSH32 @VIRTUAL0A
    case 0xC4BD4E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/ending/print_cast_name-jp.asm:25 MOVE_INT_CONSTANT $FF0000, @VIRTUAL0A
    case 0xC4BD4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/ending/print_cast_name-jp.asm:25 MOVE_INT_CONSTANT $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4BD4F.
    case 0xC4BD51: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/ending/print_cast_name-jp.asm:25 MOVE_INT_CONSTANT $FF0000, @VIRTUAL0A
    case 0xC4BD52: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/ending/print_cast_name-jp.asm:25 MOVE_INT_CONSTANT $FF0000, @VIRTUAL0A
    case 0xC4BD54: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/ending/print_cast_name-jp.asm:25 MOVE_INT_CONSTANT $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4BD54.
    case 0xC4BD56: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/ending/print_cast_name-jp.asm:25 MOVE_INT_CONSTANT $FF0000, @VIRTUAL0A
    case 0xC4BD57: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/print_cast_name-jp.asm:26 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4BD59: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/print_cast_name-jp.asm:26 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4BD5B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/print_cast_name-jp.asm:26 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4BD5D: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/print_cast_name-jp.asm:26 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4BD5F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:968 LDA val1
    // Macro caller: src/ending/print_cast_name-jp.asm:27 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BD61: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:969 AND val2
    // Macro caller: src/ending/print_cast_name-jp.asm:27 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BD63: cpu.execute_instruction<0x25>(0x00000A, 2); return true;
    // include/macros.asm:970 STA dest
    // Macro caller: src/ending/print_cast_name-jp.asm:27 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BD65: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:971 LDA val1+2
    // Macro caller: src/ending/print_cast_name-jp.asm:27 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BD67: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:972 AND val2+2
    // Macro caller: src/ending/print_cast_name-jp.asm:27 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BD69: cpu.execute_instruction<0x25>(0x00000C, 2); return true;
    // include/macros.asm:973 STA dest+2
    // Macro caller: src/ending/print_cast_name-jp.asm:27 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BD6B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/ending/print_cast_name-jp.asm:28 PULL32 @VIRTUAL0A
    case 0xC4BD6D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/ending/print_cast_name-jp.asm:28 PULL32 @VIRTUAL0A
    case 0xC4BD6E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/ending/print_cast_name-jp.asm:28 PULL32 @VIRTUAL0A
    case 0xC4BD70: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/ending/print_cast_name-jp.asm:28 PULL32 @VIRTUAL0A
    case 0xC4BD71: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/ending/print_cast_name-jp.asm:29 CLC
    case 0xC4BD73: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/ending/print_cast_name-jp.asm:30 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BD74: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/ending/print_cast_name-jp.asm:30 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BD76: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/ending/print_cast_name-jp.asm:30 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BD78: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/ending/print_cast_name-jp.asm:30 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BD7A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/ending/print_cast_name-jp.asm:30 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BD7C: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/ending/print_cast_name-jp.asm:30 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BD7E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/print_cast_name-jp.asm:31 MOVE_INT@VIRTUAL06, @LOCAL00
    case 0xC4BD80: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/print_cast_name-jp.asm:31 MOVE_INT@VIRTUAL06, @LOCAL00
    case 0xC4BD82: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/print_cast_name-jp.asm:31 MOVE_INT@VIRTUAL06, @LOCAL00
    case 0xC4BD84: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/print_cast_name-jp.asm:31 MOVE_INT@VIRTUAL06, @LOCAL00
    case 0xC4BD86: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/print_cast_name-jp.asm:32 LDX #32
    case 0xC4BD88: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/ending/print_cast_name-jp.asm:32 LDX #32
    // Overlapping static entry reached from 0xC4BD88.
    case 0xC4BD8A: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/ending/print_cast_name-jp.asm:33 LDA @VIRTUAL02
    case 0xC4BD8B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/print_cast_name-jp.asm:34 JSL PREPARE_CAST_NAME_TILEMAP
    case 0xC4BD8D: cpu.execute_instruction<0x22>(0xC4BBE0, 4); return true;
    // src/ending/print_cast_name-jp.asm:35 TAX
    case 0xC4BD91: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/print_cast_name-jp.asm:36 TXY
    case 0xC4BD92: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/ending/print_cast_name-jp.asm:37 LDX @VIRTUAL04
    case 0xC4BD93: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/ending/print_cast_name-jp.asm:38 LDA @VIRTUAL02
    case 0xC4BD95: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/print_cast_name-jp.asm:39 JSL COPY_CAST_NAME_TILEMAP
    case 0xC4BD97: cpu.execute_instruction<0x22>(0xC4BC65, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/print_cast_name-jp.asm:40 END_C_FUNCTION
    case 0xC4BD9B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/print_cast_name-jp.asm:40 END_C_FUNCTION
    case 0xC4BD9C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/print_cast_name_entity_var0.asm (source_named).
bool execute_ending_print_cast_name_entity_var0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BE0A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    case 0xC4BE0C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    case 0xC4BE0D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    case 0xC4BE0E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    case 0xC4BE0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BE0F.
    case 0xC4BE11: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    case 0xC4BE12: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:13 END_STACK_VARS
    case 0xC4BE13: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/print_cast_name_entity_var0.asm:15 STY @LOCAL02
    case 0xC4BE14: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/ending/print_cast_name_entity_var0.asm:15 STY @LOCAL02
    // Overlapping static entry reached from 0xC4BE11.
    case 0xC4BE15: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/ending/print_cast_name_entity_var0.asm:16 STX @VIRTUAL04
    case 0xC4BE16: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/ending/print_cast_name_entity_var0.asm:16 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC4BE15.
    case 0xC4BE17: cpu.execute_instruction<0x04>(0x0000AA, 2); return true;
    // src/ending/print_cast_name_entity_var0.asm:17 TAX
    case 0xC4BE18: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/print_cast_name_entity_var0.asm:18 DEC
    case 0xC4BE19: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/ending/print_cast_name_entity_var0.asm:19 LDY #.SIZEOF(char_struct)
    case 0xC4BE1A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/ending/print_cast_name_entity_var0.asm:19 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4BE1A.
    case 0xC4BE1C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/print_cast_name_entity_var0.asm:20 JSL MULT168
    case 0xC4BE1D: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/ending/print_cast_name_entity_var0.asm:21 CLC
    case 0xC4BE21: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/print_cast_name_entity_var0.asm:22 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::name
    case 0xC4BE22: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/ending/print_cast_name_entity_var0.asm:22 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::name
    // Overlapping static entry reached from 0xC4BE22.
    case 0xC4BE24: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:23 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4BE25: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:23 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4BE27: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:23 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4BE28: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:23 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4BE2A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:23 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4BE2B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:23 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4BE2D: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/print_cast_name_entity_var0.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC4BE2F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BE31: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BE33: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BE35: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BE37: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/print_cast_name_entity_var0.asm:26 LDX #.SIZEOF(char_struct::name)
    case 0xC4BE39: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/ending/print_cast_name_entity_var0.asm:26 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC4BE39.
    case 0xC4BE3B: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/ending/print_cast_name_entity_var0.asm:27 LDA @VIRTUAL04
    case 0xC4BE3C: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/print_cast_name_entity_var0.asm:28 JSL PREPARE_CAST_NAME_TILEMAP
    case 0xC4BE3E: cpu.execute_instruction<0x22>(0xC4BBE0, 4); return true;
    // src/ending/print_cast_name_entity_var0.asm:29 STA @VIRTUAL02
    case 0xC4BE42: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:30 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    case 0xC4BE44: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000081, 2); else cpu.execute_instruction<0xA9>(0x002381, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:30 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BE44.
    case 0xC4BE46: cpu.execute_instruction<0x23>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:30 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    case 0xC4BE47: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:30 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BE46.
    case 0xC4BE48: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:30 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    case 0xC4BE49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:30 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BE48.
    case 0xC4BE4A: cpu.execute_instruction<0xE1>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:30 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BE49.
    case 0xC4BE4B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:30 LOADPTR UNKNOWN_E12381, @VIRTUAL06
    case 0xC4BE4C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4BE4E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4BE50: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4BE52: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4BE54: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/print_cast_name_entity_var0.asm:32 LDA CURRENT_ENTITY_SLOT
    case 0xC4BE56: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/ending/print_cast_name_entity_var0.asm:33 ASL
    case 0xC4BE59: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/print_cast_name_entity_var0.asm:34 TAX
    case 0xC4BE5A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/print_cast_name_entity_var0.asm:35 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4BE5B: cpu.execute_instruction<0xBD>(0x000E54, 3); return true;
    // src/ending/print_cast_name_entity_var0.asm:36 ASL
    case 0xC4BE5E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/print_cast_name_entity_var0.asm:37 CLC
    case 0xC4BE5F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/print_cast_name_entity_var0.asm:38 ADC @VIRTUAL06
    case 0xC4BE60: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/print_cast_name_entity_var0.asm:39 STA @VIRTUAL06
    case 0xC4BE62: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/print_cast_name_entity_var0.asm:40 LDA [@VIRTUAL06]
    case 0xC4BE64: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:41 STORE_INT1632 @VIRTUAL0A
    case 0xC4BE66: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:41 STORE_INT1632 @VIRTUAL0A
    case 0xC4BE68: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:42 PUSH32 @VIRTUAL0A
    case 0xC4BE6A: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:42 PUSH32 @VIRTUAL0A
    case 0xC4BE6C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:42 PUSH32 @VIRTUAL0A
    case 0xC4BE6D: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:42 PUSH32 @VIRTUAL0A
    case 0xC4BE6F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:43 MOVE_INT_CONSTANT $FF0000, @VIRTUAL0A
    case 0xC4BE70: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:43 MOVE_INT_CONSTANT $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4BE70.
    case 0xC4BE72: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:43 MOVE_INT_CONSTANT $FF0000, @VIRTUAL0A
    case 0xC4BE73: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:43 MOVE_INT_CONSTANT $FF0000, @VIRTUAL0A
    case 0xC4BE75: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:43 MOVE_INT_CONSTANT $FF0000, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4BE75.
    case 0xC4BE77: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:43 MOVE_INT_CONSTANT $FF0000, @VIRTUAL0A
    case 0xC4BE78: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:44 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4BE7A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:44 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4BE7C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:44 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4BE7E: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:44 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4BE80: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:968 LDA val1
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:45 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BE82: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:969 AND val2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:45 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BE84: cpu.execute_instruction<0x25>(0x00000A, 2); return true;
    // include/macros.asm:970 STA dest
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:45 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BE86: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:971 LDA val1+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:45 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BE88: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:972 AND val2+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:45 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BE8A: cpu.execute_instruction<0x25>(0x00000C, 2); return true;
    // include/macros.asm:973 STA dest+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:45 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BE8C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:46 PULL32 @VIRTUAL0A
    case 0xC4BE8E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:46 PULL32 @VIRTUAL0A
    case 0xC4BE8F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:46 PULL32 @VIRTUAL0A
    case 0xC4BE91: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:46 PULL32 @VIRTUAL0A
    case 0xC4BE92: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/ending/print_cast_name_entity_var0.asm:47 CLC
    case 0xC4BE94: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:48 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BE95: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:48 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BE97: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:48 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BE99: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:48 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BE9B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:48 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BE9D: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:48 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4BE9F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BEA1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BEA3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BEA5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/print_cast_name_entity_var0.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BEA7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/print_cast_name_entity_var0.asm:50 LDX #32
    case 0xC4BEA9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/ending/print_cast_name_entity_var0.asm:50 LDX #32
    // Overlapping static entry reached from 0xC4BEA9.
    case 0xC4BEAB: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/ending/print_cast_name_entity_var0.asm:51 LDA @VIRTUAL04
    case 0xC4BEAC: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/print_cast_name_entity_var0.asm:52 CLC
    case 0xC4BEAE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/print_cast_name_entity_var0.asm:53 ADC @VIRTUAL02
    case 0xC4BEAF: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/ending/print_cast_name_entity_var0.asm:54 JSL PREPARE_CAST_NAME_TILEMAP
    case 0xC4BEB1: cpu.execute_instruction<0x22>(0xC4BBE0, 4); return true;
    // src/ending/print_cast_name_entity_var0.asm:55 PHA
    case 0xC4BEB5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/ending/print_cast_name_entity_var0.asm:56 LDA @VIRTUAL02
    case 0xC4BEB6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/print_cast_name_entity_var0.asm:57 PLY
    case 0xC4BEB8: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/ending/print_cast_name_entity_var0.asm:58 STY @VIRTUAL02
    case 0xC4BEB9: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/ending/print_cast_name_entity_var0.asm:59 CLC
    case 0xC4BEBB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/print_cast_name_entity_var0.asm:60 ADC @VIRTUAL02
    case 0xC4BEBC: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/ending/print_cast_name_entity_var0.asm:61 TAY
    case 0xC4BEBE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/print_cast_name_entity_var0.asm:62 LDX @LOCAL02
    case 0xC4BEBF: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/ending/print_cast_name_entity_var0.asm:63 LDA @VIRTUAL04
    case 0xC4BEC1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/print_cast_name_entity_var0.asm:64 JSL COPY_CAST_NAME_TILEMAP
    case 0xC4BEC3: cpu.execute_instruction<0x22>(0xC4BC65, 4); return true;
    // src/ending/print_cast_name_entity_var0.asm:74 PLD
    case 0xC4BEC7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/ending/print_cast_name_entity_var0.asm:75 RTL
    case 0xC4BEC8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/print_cast_name_party.asm (source_named).
bool execute_ending_print_cast_name_party_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/print_cast_name_party.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BD9D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    case 0xC4BD9F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    case 0xC4BDA0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    case 0xC4BDA1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    case 0xC4BDA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BDA2.
    case 0xC4BDA4: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    case 0xC4BDA5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/print_cast_name_party.asm:12 END_STACK_VARS
    case 0xC4BDA6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/print_cast_name_party.asm:14 STY @VIRTUAL04
    case 0xC4BDA7: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/ending/print_cast_name_party.asm:14 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC4BDA4.
    case 0xC4BDA8: cpu.execute_instruction<0x04>(0x000086, 2); return true;
    // src/ending/print_cast_name_party.asm:15 STX @VIRTUAL02
    case 0xC4BDA9: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/ending/print_cast_name_party.asm:15 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4BDA8.
    case 0xC4BDAA: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/ending/print_cast_name_party.asm:16 TAX
    case 0xC4BDAB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/print_cast_name_party.asm:17 CPX #7
    case 0xC4BDAC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000007, 2); else cpu.execute_instruction<0xE0>(0x000007, 3); return true;
    // src/ending/print_cast_name_party.asm:17 CPX #7
    // Overlapping static entry reached from 0xC4BDAC.
    case 0xC4BDAE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/print_cast_name_party.asm:18 BEQ @UNKNOWN0
    case 0xC4BDAF: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/ending/print_cast_name_party.asm:19 TXA
    case 0xC4BDB1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/ending/print_cast_name_party.asm:20 DEC
    case 0xC4BDB2: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/ending/print_cast_name_party.asm:21 LDY #.SIZEOF(char_struct)
    case 0xC4BDB3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/ending/print_cast_name_party.asm:21 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4BDB3.
    case 0xC4BDB5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/print_cast_name_party.asm:22 JSL MULT168
    case 0xC4BDB6: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/ending/print_cast_name_party.asm:23 CLC
    case 0xC4BDBA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/print_cast_name_party.asm:24 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::name
    case 0xC4BDBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/ending/print_cast_name_party.asm:24 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::name
    // Overlapping static entry reached from 0xC4BDBB.
    case 0xC4BDBD: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/print_cast_name_party.asm:25 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4BDBE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/print_cast_name_party.asm:25 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4BDC0: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/print_cast_name_party.asm:25 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4BDC1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/print_cast_name_party.asm:25 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4BDC3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/print_cast_name_party.asm:25 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4BDC4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/print_cast_name_party.asm:25 PROMOTENEARPTRA @VIRTUAL06
    case 0xC4BDC6: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/print_cast_name_party.asm:26 REP #PROC_FLAGS::ACCUM8
    case 0xC4BDC8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/print_cast_name_party.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BDCA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/print_cast_name_party.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BDCC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/print_cast_name_party.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BDCE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/print_cast_name_party.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BDD0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/print_cast_name_party.asm:28 LDX #.SIZEOF(char_struct::name)
    case 0xC4BDD2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/ending/print_cast_name_party.asm:28 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC4BDD2.
    case 0xC4BDD4: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/ending/print_cast_name_party.asm:29 LDA @VIRTUAL02
    case 0xC4BDD5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/print_cast_name_party.asm:30 JSL PREPARE_CAST_NAME_TILEMAP
    case 0xC4BDD7: cpu.execute_instruction<0x22>(0xC4BBE0, 4); return true;
    // src/ending/print_cast_name_party.asm:31 TAX
    case 0xC4BDDB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/print_cast_name_party.asm:32 BRA @UNKNOWN1
    case 0xC4BDDC: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/print_cast_name_party.asm:34 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4BDDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CD, 2); else cpu.execute_instruction<0xA9>(0x009ACD, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/ending/print_cast_name_party.asm:34 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BDDE.
    case 0xC4BDE0: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/ending/print_cast_name_party.asm:34 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4BDE1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/ending/print_cast_name_party.asm:34 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4BDE3: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/ending/print_cast_name_party.asm:34 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4BDE4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/ending/print_cast_name_party.asm:34 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4BDE6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/ending/print_cast_name_party.asm:34 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4BDE7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/ending/print_cast_name_party.asm:34 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC4BDE9: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/ending/print_cast_name_party.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC4BDEB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/print_cast_name_party.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BDED: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/print_cast_name_party.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BDEF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/print_cast_name_party.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BDF1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/print_cast_name_party.asm:36 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BDF3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/print_cast_name_party.asm:37 LDX #.SIZEOF(game_state::pet_name)
    case 0xC4BDF5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/ending/print_cast_name_party.asm:37 LDX #.SIZEOF(game_state::pet_name)
    // Overlapping static entry reached from 0xC4BDF5.
    case 0xC4BDF7: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/ending/print_cast_name_party.asm:38 LDA @VIRTUAL02
    case 0xC4BDF8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/print_cast_name_party.asm:39 JSL PREPARE_CAST_NAME_TILEMAP
    case 0xC4BDFA: cpu.execute_instruction<0x22>(0xC4BBE0, 4); return true;
    // src/ending/print_cast_name_party.asm:40 TAX
    case 0xC4BDFE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/print_cast_name_party.asm:42 TXY
    case 0xC4BDFF: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/ending/print_cast_name_party.asm:43 LDX @VIRTUAL04
    case 0xC4BE00: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/ending/print_cast_name_party.asm:44 LDA @VIRTUAL02
    case 0xC4BE02: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/print_cast_name_party.asm:45 JSL COPY_CAST_NAME_TILEMAP
    case 0xC4BE04: cpu.execute_instruction<0x22>(0xC4BC65, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/print_cast_name_party.asm:76 END_C_FUNCTION
    case 0xC4BE08: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/print_cast_name_party.asm:76 END_C_FUNCTION
    case 0xC4BE09: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/process_credits_dma_queue.asm (source_named).
bool execute_ending_process_credits_dma_queue_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/process_credits_dma_queue.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C057: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/process_credits_dma_queue.asm:8 END_STACK_VARS
    case 0xC4C059: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/process_credits_dma_queue.asm:8 END_STACK_VARS
    case 0xC4C05A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/process_credits_dma_queue.asm:8 END_STACK_VARS
    case 0xC4C05B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/process_credits_dma_queue.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C05B.
    case 0xC4C05D: cpu.execute_instruction<0xFF>(0xBEAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/process_credits_dma_queue.asm:8 END_STACK_VARS
    case 0xC4C05E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/ending/process_credits_dma_queue.asm:9 LDA CREDITS_DMA_QUEUE_START
    case 0xC4C05F: cpu.execute_instruction<0xAD>(0x00B6BE, 3); return true;
    // src/ending/process_credits_dma_queue.asm:9 LDA CREDITS_DMA_QUEUE_START
    // Overlapping static entry reached from 0xC4C05D.
    case 0xC4C061: cpu.execute_instruction<0xB6>(0x0000CD, 2); return true;
    // src/ending/process_credits_dma_queue.asm:10 CMP CREDITS_DMA_QUEUE_END
    case 0xC4C062: cpu.execute_instruction<0xCD>(0x00B6BC, 3); return true;
    // src/ending/process_credits_dma_queue.asm:10 CMP CREDITS_DMA_QUEUE_END
    // Overlapping static entry reached from 0xC4C061.
    case 0xC4C063: cpu.execute_instruction<0xBC>(0x00F0B6, 3); return true;
    // src/ending/process_credits_dma_queue.asm:11 BEQ @RETURN
    case 0xC4C065: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/ending/process_credits_dma_queue.asm:11 BEQ @RETURN
    // Overlapping static entry reached from 0xC4C063.
    case 0xC4C066: cpu.execute_instruction<0x4E>(0x00BCAD, 3); return true;
    // src/ending/process_credits_dma_queue.asm:12 LDA CREDITS_DMA_QUEUE_END
    case 0xC4C067: cpu.execute_instruction<0xAD>(0x00B6BC, 3); return true;
    // src/ending/process_credits_dma_queue.asm:12 LDA CREDITS_DMA_QUEUE_END
    // Overlapping static entry reached from 0xC4C066.
    case 0xC4C069: cpu.execute_instruction<0xB6>(0x000085, 2); return true;
    // include/macros.asm:549 STA scratch
    // Macro caller: src/ending/process_credits_dma_queue.asm:13 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4C06A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:549 STA scratch
    // Macro caller: src/ending/process_credits_dma_queue.asm:13 OPTIMIZED_MULT @VIRTUAL04, 9
    // Overlapping static entry reached from 0xC4C069.
    case 0xC4C06B: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:550 ASL
    // Macro caller: src/ending/process_credits_dma_queue.asm:13 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4C06C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:551 ASL
    // Macro caller: src/ending/process_credits_dma_queue.asm:13 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4C06D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:552 ASL
    // Macro caller: src/ending/process_credits_dma_queue.asm:13 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4C06E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:553 ADC scratch
    // Macro caller: src/ending/process_credits_dma_queue.asm:13 OPTIMIZED_MULT @VIRTUAL04, 9
    case 0xC4C06F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/ending/process_credits_dma_queue.asm:14 CLC
    case 0xC4C071: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/process_credits_dma_queue.asm:15 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    case 0xC4C072: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0054DC, 3); return true;
    // src/ending/process_credits_dma_queue.asm:15 ADC #.LOWORD(PLAYER_POSITION_BUFFER)
    // Overlapping static entry reached from 0xC4C072.
    case 0xC4C074: cpu.execute_instruction<0x54>(0x001485, 3); return true;
    // src/ending/process_credits_dma_queue.asm:16 STA @LOCAL02
    case 0xC4C075: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/process_credits_dma_queue.asm:17 TAY
    case 0xC4C077: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/process_credits_dma_queue.asm:18 INY
    case 0xC4C078: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/ending/process_credits_dma_queue.asm:19 INY
    case 0xC4C079: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/ending/process_credits_dma_queue.asm:20 INY
    case 0xC4C07A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/ending/process_credits_dma_queue.asm:21 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4C07B: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/ending/process_credits_dma_queue.asm:21 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4C07E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/ending/process_credits_dma_queue.asm:21 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4C080: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/ending/process_credits_dma_queue.asm:21 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4C083: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/process_credits_dma_queue.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C085: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/process_credits_dma_queue.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C087: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/process_credits_dma_queue.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C089: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/process_credits_dma_queue.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C08B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/process_credits_dma_queue.asm:23 LDA @LOCAL02
    case 0xC4C08D: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/ending/process_credits_dma_queue.asm:24 TAX
    case 0xC4C08F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/process_credits_dma_queue.asm:25 LDY __BSS_START__+7,X
    case 0xC4C090: cpu.execute_instruction<0xBC>(0x000007, 3); return true;
    // src/ending/process_credits_dma_queue.asm:25 LDY __BSS_START__+7,X
    // Overlapping static entry reached from 0xC471DC.
    case 0xC4C092: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/ending/process_credits_dma_queue.asm:26 TAX
    case 0xC4C093: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/process_credits_dma_queue.asm:27 LDA __BSS_START__+1,X
    case 0xC4C094: cpu.execute_instruction<0xBD>(0x000001, 3); return true;
    // src/ending/process_credits_dma_queue.asm:28 TAX
    case 0xC4C097: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/process_credits_dma_queue.asm:29 STX @LOCAL01
    case 0xC4C098: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/ending/process_credits_dma_queue.asm:30 LDA @LOCAL02
    case 0xC4C09A: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/ending/process_credits_dma_queue.asm:31 TAX
    case 0xC4C09C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/process_credits_dma_queue.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C09D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/process_credits_dma_queue.asm:33 LDA __BSS_START__,X
    case 0xC4C09F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/ending/process_credits_dma_queue.asm:34 LDX @LOCAL01
    case 0xC4C0A2: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/ending/process_credits_dma_queue.asm:35 JSL PREPARE_VRAM_COPY
    case 0xC4C0A4: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/ending/process_credits_dma_queue.asm:37 LDA CREDITS_DMA_QUEUE_END
    case 0xC4C0A8: cpu.execute_instruction<0xAD>(0x00B6BC, 3); return true;
    // src/ending/process_credits_dma_queue.asm:38 INC
    case 0xC4C0AB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/process_credits_dma_queue.asm:39 STA CREDITS_DMA_QUEUE_END
    case 0xC4C0AC: cpu.execute_instruction<0x8D>(0x00B6BC, 3); return true;
    // src/ending/process_credits_dma_queue.asm:40 AND #$007F
    case 0xC4C0AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/ending/process_credits_dma_queue.asm:40 AND #$007F
    // Overlapping static entry reached from 0xC4C0AF.
    case 0xC4C0B1: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/process_credits_dma_queue.asm:41 STA CREDITS_DMA_QUEUE_END
    case 0xC4C0B2: cpu.execute_instruction<0x8D>(0x00B6BC, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/process_credits_dma_queue.asm:43 END_C_FUNCTION
    case 0xC4C0B5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/process_credits_dma_queue.asm:43 END_C_FUNCTION
    case 0xC4C0B6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/set_cast_scroll_threshold.asm (source_named).
bool execute_ending_set_cast_scroll_threshold_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BB37: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4BB39: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4BB3A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4BB3B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4BB3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BB3C.
    case 0xC4BB3E: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4BB3F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:7 END_STACK_VARS
    case 0xC4BB40: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/set_cast_scroll_threshold.asm:8 STA @LOCAL00
    case 0xC4BB41: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/set_cast_scroll_threshold.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC4BB3E.
    case 0xC4BB42: cpu.execute_instruction<0x0E>(0x0038AD, 3); return true;
    // src/ending/set_cast_scroll_threshold.asm:9 LDA CURRENT_ENTITY_SLOT
    case 0xC4BB43: cpu.execute_instruction<0xAD>(0x001A38, 3); return true;
    // src/ending/set_cast_scroll_threshold.asm:9 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC4BB42.
    case 0xC4BB45: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/ending/set_cast_scroll_threshold.asm:10 ASL
    case 0xC4BB46: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/set_cast_scroll_threshold.asm:11 TAX
    case 0xC4BB47: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/set_cast_scroll_threshold.asm:12 LDA @LOCAL00
    case 0xC4BB48: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/ending/set_cast_scroll_threshold.asm:13 ASL
    case 0xC4BB4A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/set_cast_scroll_threshold.asm:14 ASL
    case 0xC4BB4B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/set_cast_scroll_threshold.asm:15 ASL
    case 0xC4BB4C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/set_cast_scroll_threshold.asm:16 CLC
    case 0xC4BB4D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/set_cast_scroll_threshold.asm:17 ADC BG3_Y_POS
    case 0xC4BB4E: cpu.execute_instruction<0x6D>(0x00003B, 3); return true;
    // src/ending/set_cast_scroll_threshold.asm:18 STA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4BB51: cpu.execute_instruction<0x9D>(0x000E54, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:19 END_C_FUNCTION
    case 0xC4BB54: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/set_cast_scroll_threshold.asm:19 END_C_FUNCTION
    case 0xC4BB55: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/slide_credits_photograph.asm (source_named).
bool execute_ending_slide_credits_photograph_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/slide_credits_photograph.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C4AF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    case 0xC4C4B1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    case 0xC4C4B2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    case 0xC4C4B3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    case 0xC4C4B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x00FFDC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C4B4.
    case 0xC4C4B6: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    case 0xC4C4B7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/slide_credits_photograph.asm:15 END_STACK_VARS
    case 0xC4C4B8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/slide_credits_photograph.asm:16 STA @LOCAL08
    case 0xC4C4B9: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/ending/slide_credits_photograph.asm:16 STA @LOCAL08
    // Overlapping static entry reached from 0xC4C4B6.
    case 0xC4C4BA: cpu.execute_instruction<0x22>(0x23E1A9, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    case 0xC4C4BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0023E1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C4BB.
    case 0xC4C4BD: cpu.execute_instruction<0x23>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    case 0xC4C4BE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C4BD.
    case 0xC4C4BF: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    case 0xC4C4C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C4BF.
    case 0xC4C4C1: cpu.execute_instruction<0xE1>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C4C0.
    case 0xC4C4C2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/slide_credits_photograph.asm:17 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL06
    case 0xC4C4C3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/slide_credits_photograph.asm:18 LDA @LOCAL08
    case 0xC4C4C5: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/ending/slide_credits_photograph.asm:19 LDY #.SIZEOF(photographer_config_entry)
    case 0xC4C4C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003E, 2); else cpu.execute_instruction<0xA0>(0x00003E, 3); return true;
    // src/ending/slide_credits_photograph.asm:19 LDY #.SIZEOF(photographer_config_entry)
    // Overlapping static entry reached from 0xC4C4C7.
    case 0xC4C4C9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/slide_credits_photograph.asm:20 JSL MULT168
    case 0xC4C4CA: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/ending/slide_credits_photograph.asm:21 CLC
    case 0xC4C4CE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/slide_credits_photograph.asm:22 ADC @VIRTUAL06
    case 0xC4C4CF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/slide_credits_photograph.asm:23 STA @VIRTUAL06
    case 0xC4C4D1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/slide_credits_photograph.asm:24 STA @LOCAL07
    case 0xC4C4D3: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/ending/slide_credits_photograph.asm:25 LDA @VIRTUAL06+2
    case 0xC4C4D5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/ending/slide_credits_photograph.asm:26 STA @LOCAL07+2
    case 0xC4C4D7: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/ending/slide_credits_photograph.asm:27 LDX #256
    case 0xC4C4D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000100, 3); return true;
    // src/ending/slide_credits_photograph.asm:27 LDX #256
    // Overlapping static entry reached from 0xC4C4D9.
    case 0xC4C4DB: cpu.execute_instruction<0x01>(0x0000E2, 2); return true;
    // src/ending/slide_credits_photograph.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C4DC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/slide_credits_photograph.asm:28 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4C4DB.
    case 0xC4C4DD: cpu.execute_instruction<0x20>(0x0008A0, 3); return true;
    // src/ending/slide_credits_photograph.asm:29 LDY #photographer_config_entry::slide_direction
    case 0xC4C4DE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/ending/slide_credits_photograph.asm:29 LDY #photographer_config_entry::slide_direction
    // Overlapping static entry reached from 0xC4C4DE.
    case 0xC4C4E0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/ending/slide_credits_photograph.asm:30 LDA [@VIRTUAL06],Y
    case 0xC4C4E1: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/ending/slide_credits_photograph.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC4C4E3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/slide_credits_photograph.asm:32 AND #$00FF
    case 0xC4C4E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/slide_credits_photograph.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC4C4E5.
    case 0xC4C4E7: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/ending/slide_credits_photograph.asm:33 LDY #1024
    case 0xC4C4E8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000400, 3); return true;
    // src/ending/slide_credits_photograph.asm:33 LDY #1024
    // Overlapping static entry reached from 0xC4C4E8.
    case 0xC4C4EA: cpu.execute_instruction<0x04>(0x000022, 2); return true;
    // src/ending/slide_credits_photograph.asm:34 JSL MULT16
    case 0xC4C4EB: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/ending/slide_credits_photograph.asm:34 JSL MULT16
    // Overlapping static entry reached from 0xC4C4EA.
    case 0xC4C4EC: cpu.execute_instruction<0x14>(0x000090, 2); return true;
    // src/ending/slide_credits_photograph.asm:34 JSL MULT16
    // Overlapping static entry reached from 0xC4C4EC.
    case 0xC4C4EE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x004B22, 3); return true;
    // src/ending/slide_credits_photograph.asm:35 JSL UNKNOWN_C41FFF
    case 0xC4C4EF: cpu.execute_instruction<0x22>(0xC41F4B, 4); return true;
    // src/ending/slide_credits_photograph.asm:35 JSL UNKNOWN_C41FFF
    // Overlapping static entry reached from 0xC4C4EE.
    case 0xC4C4F0: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/ending/slide_credits_photograph.asm:35 JSL UNKNOWN_C41FFF
    // Overlapping static entry reached from 0xC4C4EE.
    case 0xC4C4F1: cpu.execute_instruction<0x1F>(0x06A5C4, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/slide_credits_photograph.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4C4F3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/slide_credits_photograph.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4C4F5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/slide_credits_photograph.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4C4F7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/slide_credits_photograph.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4C4F9: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/slide_credits_photograph.asm:37 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4C4FB: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/slide_credits_photograph.asm:37 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4C4FD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/slide_credits_photograph.asm:37 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4C4FF: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/slide_credits_photograph.asm:37 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4C501: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/slide_credits_photograph.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C503: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/slide_credits_photograph.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C505: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/slide_credits_photograph.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C507: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/slide_credits_photograph.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C509: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/slide_credits_photograph.asm:39 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4C50B: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/slide_credits_photograph.asm:39 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4C50D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/slide_credits_photograph.asm:39 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4C50F: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/slide_credits_photograph.asm:39 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC4C511: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/slide_credits_photograph.asm:40 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C513: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/slide_credits_photograph.asm:41 LDY #photographer_config_entry::slide_distance
    case 0xC4C515: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000009, 2); else cpu.execute_instruction<0xA0>(0x000009, 3); return true;
    // src/ending/slide_credits_photograph.asm:41 LDY #photographer_config_entry::slide_distance
    // Overlapping static entry reached from 0xC4C515.
    case 0xC4C517: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/ending/slide_credits_photograph.asm:42 LDA [@VIRTUAL06],Y
    case 0xC4C518: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/ending/slide_credits_photograph.asm:43 REP #PROC_FLAGS::ACCUM8
    case 0xC4C51A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/ending/slide_credits_photograph.asm:44 AND #$00FF
    case 0xC4C51C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/slide_credits_photograph.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC4C51C.
    case 0xC4C51E: cpu.execute_instruction<0x00>(0x0000EB, 2); return true;
    // src/ending/slide_credits_photograph.asm:45 XBA
    case 0xC4C51F: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/ending/slide_credits_photograph.asm:46 AND #$FF00
    case 0xC4C520: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/ending/slide_credits_photograph.asm:46 AND #$FF00
    // Overlapping static entry reached from 0xC4C520.
    case 0xC4C522: cpu.execute_instruction<0xFF>(0x0100A0, 4); return true;
    // src/ending/slide_credits_photograph.asm:47 LDY #256
    case 0xC4C523: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000100, 3); return true;
    // src/ending/slide_credits_photograph.asm:47 LDY #256
    // Overlapping static entry reached from 0xC4C523.
    case 0xC4C525: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/ending/slide_credits_photograph.asm:48 JSL DIVISION16
    case 0xC4C526: cpu.execute_instruction<0x22>(0xC090C8, 4); return true;
    // src/ending/slide_credits_photograph.asm:48 JSL DIVISION16
    // Overlapping static entry reached from 0xC4C525.
    case 0xC4C527: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/ending/slide_credits_photograph.asm:48 JSL DIVISION16
    // Overlapping static entry reached from 0xC4C527.
    case 0xC4C528: cpu.execute_instruction<0x90>(0x0000C0, 2); return true;
    // src/ending/slide_credits_photograph.asm:49 STA @LOCAL08
    case 0xC4C52A: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/ending/slide_credits_photograph.asm:50 LDA @LOCAL00+2
    case 0xC4C52C: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/ending/slide_credits_photograph.asm:51 STA @LOCAL06
    case 0xC4C52E: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/ending/slide_credits_photograph.asm:52 LDA @LOCAL00
    case 0xC4C530: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/ending/slide_credits_photograph.asm:52 LDA @LOCAL00
    // Overlapping static entry reached from 0xC4C56F.
    case 0xC4C531: cpu.execute_instruction<0x0E>(0x001A85, 3); return true;
    // src/ending/slide_credits_photograph.asm:53 STA @LOCAL05
    case 0xC4C532: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/ending/slide_credits_photograph.asm:54 LDA BG1_X_POS
    case 0xC4C534: cpu.execute_instruction<0xAD>(0x000031, 3); return true;
    // src/ending/slide_credits_photograph.asm:55 STA @LOCAL04
    case 0xC4C537: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/ending/slide_credits_photograph.asm:56 LDA BG1_Y_POS
    case 0xC4C539: cpu.execute_instruction<0xAD>(0x000033, 3); return true;
    // src/ending/slide_credits_photograph.asm:57 STA @LOCAL03
    case 0xC4C53C: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/ending/slide_credits_photograph.asm:58 LDA #0
    case 0xC4C53E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/slide_credits_photograph.asm:58 LDA #0
    // Overlapping static entry reached from 0xC4C53E.
    case 0xC4C540: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/slide_credits_photograph.asm:59 STA @VIRTUAL04
    case 0xC4C541: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/ending/slide_credits_photograph.asm:60 STA @VIRTUAL02
    case 0xC4C543: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/slide_credits_photograph.asm:61 TAY
    case 0xC4C545: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/slide_credits_photograph.asm:62 STY @LOCAL02
    case 0xC4C546: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/ending/slide_credits_photograph.asm:63 BRA @UNKNOWN1
    case 0xC4C548: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/ending/slide_credits_photograph.asm:65 LDA @VIRTUAL02
    case 0xC4C54A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/slide_credits_photograph.asm:66 CLC
    case 0xC4C54C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/slide_credits_photograph.asm:67 ADC @LOCAL06
    case 0xC4C54D: cpu.execute_instruction<0x65>(0x00001C, 2); return true;
    // src/ending/slide_credits_photograph.asm:68 STA @VIRTUAL02
    case 0xC4C54F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/slide_credits_photograph.asm:69 LDA @VIRTUAL04
    case 0xC4C551: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/slide_credits_photograph.asm:70 CLC
    case 0xC4C553: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/slide_credits_photograph.asm:71 ADC @LOCAL05
    case 0xC4C554: cpu.execute_instruction<0x65>(0x00001A, 2); return true;
    // src/ending/slide_credits_photograph.asm:72 STA @VIRTUAL04
    case 0xC4C556: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/ending/slide_credits_photograph.asm:73 LDY #256
    case 0xC4C558: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000100, 3); return true;
    // src/ending/slide_credits_photograph.asm:73 LDY #256
    // Overlapping static entry reached from 0xC4C558.
    case 0xC4C55A: cpu.execute_instruction<0x01>(0x0000A5, 2); return true;
    // src/ending/slide_credits_photograph.asm:74 LDA @VIRTUAL02
    case 0xC4C55B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/slide_credits_photograph.asm:74 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC4C55A.
    case 0xC4C55C: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/ending/slide_credits_photograph.asm:75 JSL DIVISION16
    case 0xC4C55D: cpu.execute_instruction<0x22>(0xC090C8, 4); return true;
    // src/ending/slide_credits_photograph.asm:76 TAX
    case 0xC4C561: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/slide_credits_photograph.asm:77 CLC
    case 0xC4C562: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/slide_credits_photograph.asm:78 ADC @LOCAL04
    case 0xC4C563: cpu.execute_instruction<0x65>(0x000018, 2); return true;
    // src/ending/slide_credits_photograph.asm:79 STA BG1_X_POS
    case 0xC4C565: cpu.execute_instruction<0x8D>(0x000031, 3); return true;
    // src/ending/slide_credits_photograph.asm:80 LDY #256
    case 0xC4C568: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000100, 3); return true;
    // src/ending/slide_credits_photograph.asm:80 LDY #256
    // Overlapping static entry reached from 0xC4C568.
    case 0xC4C56A: cpu.execute_instruction<0x01>(0x0000A5, 2); return true;
    // src/ending/slide_credits_photograph.asm:81 LDA @VIRTUAL04
    case 0xC4C56B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/slide_credits_photograph.asm:81 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC4C56A.
    case 0xC4C56C: cpu.execute_instruction<0x04>(0x000022, 2); return true;
    // src/ending/slide_credits_photograph.asm:82 JSL DIVISION16
    case 0xC4C56D: cpu.execute_instruction<0x22>(0xC090C8, 4); return true;
    // src/ending/slide_credits_photograph.asm:82 JSL DIVISION16
    // Overlapping static entry reached from 0xC4C56C.
    case 0xC4C56E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/ending/slide_credits_photograph.asm:82 JSL DIVISION16
    // Overlapping static entry reached from 0xC4C56E.
    case 0xC4C56F: cpu.execute_instruction<0x90>(0x0000C0, 2); return true;
    // src/ending/slide_credits_photograph.asm:83 STA @LOCAL01
    case 0xC4C571: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/ending/slide_credits_photograph.asm:84 CLC
    case 0xC4C573: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/slide_credits_photograph.asm:85 ADC @LOCAL03
    case 0xC4C574: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/ending/slide_credits_photograph.asm:86 STA BG1_Y_POS
    case 0xC4C576: cpu.execute_instruction<0x8D>(0x000033, 3); return true;
    // src/ending/slide_credits_photograph.asm:87 STX BG2_X_POS
    case 0xC4C579: cpu.execute_instruction<0x8E>(0x000035, 3); return true;
    // src/ending/slide_credits_photograph.asm:88 LDA @LOCAL01
    case 0xC4C57C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/ending/slide_credits_photograph.asm:89 STA BG2_Y_POS
    case 0xC4C57E: cpu.execute_instruction<0x8D>(0x000037, 3); return true;
    // src/ending/slide_credits_photograph.asm:90 JSL PROCESS_CREDITS_DMA_QUEUE
    case 0xC4C581: cpu.execute_instruction<0x22>(0xC4C057, 4); return true;
    // src/ending/slide_credits_photograph.asm:91 JSL UNKNOWN_C1004E
    case 0xC4C585: cpu.execute_instruction<0x22>(0xC100C4, 4); return true;
    // src/ending/slide_credits_photograph.asm:92 LDY @LOCAL02
    case 0xC4C589: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/ending/slide_credits_photograph.asm:93 INY
    case 0xC4C58B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/ending/slide_credits_photograph.asm:94 STY @LOCAL02
    case 0xC4C58C: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/ending/slide_credits_photograph.asm:96 CPY @LOCAL08
    case 0xC4C58E: cpu.execute_instruction<0xC4>(0x000022, 2); return true;
    // src/ending/slide_credits_photograph.asm:97 BCC @UNKNOWN0
    case 0xC4C590: cpu.execute_instruction<0x90>(0x0000B8, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/slide_credits_photograph.asm:98 END_C_FUNCTION
    case 0xC4C592: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/slide_credits_photograph.asm:98 END_C_FUNCTION
    case 0xC4C593: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/try_rendering_photograph.asm (source_named).
bool execute_ending_try_rendering_photograph_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/try_rendering_photograph.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C2A0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    case 0xC4C2A2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    case 0xC4C2A3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    case 0xC4C2A4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    case 0xC4C2A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C2A5.
    case 0xC4C2A7: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    case 0xC4C2A8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/try_rendering_photograph.asm:14 END_STACK_VARS
    case 0xC4C2A9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:15 STA @LOCAL06
    case 0xC4C2AA: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/ending/try_rendering_photograph.asm:15 STA @LOCAL06
    // Overlapping static entry reached from 0xC4C2A7.
    case 0xC4C2AB: cpu.execute_instruction<0x1E>(0x0000A2, 3); return true;
    // src/ending/try_rendering_photograph.asm:16 LDX #0
    case 0xC4C2AC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/ending/try_rendering_photograph.asm:16 LDX #0
    // Overlapping static entry reached from 0xC4C2AC.
    case 0xC4C2AE: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/ending/try_rendering_photograph.asm:17 STX @LOCAL05
    case 0xC4C2AF: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    case 0xC4C2B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0023E1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4C2B1.
    case 0xC4C2B3: cpu.execute_instruction<0x23>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    case 0xC4C2B4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4C2B3.
    case 0xC4C2B5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    case 0xC4C2B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4C2B6.
    case 0xC4C2B8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/try_rendering_photograph.asm:18 LOADPTR PHOTOGRAPHER_CFG_TABLE, @VIRTUAL0A
    case 0xC4C2B9: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/ending/try_rendering_photograph.asm:19 LDA @LOCAL06
    case 0xC4C2BB: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/ending/try_rendering_photograph.asm:20 LDY #.SIZEOF(photographer_config_entry)
    case 0xC4C2BD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003E, 2); else cpu.execute_instruction<0xA0>(0x00003E, 3); return true;
    // src/ending/try_rendering_photograph.asm:20 LDY #.SIZEOF(photographer_config_entry)
    // Overlapping static entry reached from 0xC4C2BD.
    case 0xC4C2BF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/ending/try_rendering_photograph.asm:21 JSL MULT168
    case 0xC4C2C0: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/ending/try_rendering_photograph.asm:22 CLC
    case 0xC4C2C4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:23 ADC @VIRTUAL0A
    case 0xC4C2C5: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/ending/try_rendering_photograph.asm:24 STA @VIRTUAL0A
    case 0xC4C2C7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/ending/try_rendering_photograph.asm:25 STA @VIRTUAL06
    case 0xC4C2C9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:26 LDA @VIRTUAL0A+2
    case 0xC4C2CB: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/ending/try_rendering_photograph.asm:27 STA @VIRTUAL06+2
    case 0xC4C2CD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/ending/try_rendering_photograph.asm:28 LDA [@VIRTUAL06]
    case 0xC4C2CF: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:29 JSL GET_EVENT_FLAG
    case 0xC4C2D1: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/ending/try_rendering_photograph.asm:30 CMP #0
    case 0xC4C2D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/ending/try_rendering_photograph.asm:30 CMP #0
    // Overlapping static entry reached from 0xC4C2D5.
    case 0xC4C2D7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/ending/try_rendering_photograph.asm:31 BEQL @RETURN
    case 0xC4C2D8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/ending/try_rendering_photograph.asm:31 BEQL @RETURN
    case 0xC4C2DA: cpu.execute_instruction<0x4C>(0x00C46E, 3); return true;
    // src/ending/try_rendering_photograph.asm:32 LDA #1
    case 0xC4C2DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/ending/try_rendering_photograph.asm:32 LDA #1
    // Overlapping static entry reached from 0xC4C2DD.
    case 0xC4C2DF: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/ending/try_rendering_photograph.asm:33 STA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC4C2E0: cpu.execute_instruction<0x8D>(0x00B6B8, 3); return true;
    // src/ending/try_rendering_photograph.asm:34 LDA @LOCAL06
    case 0xC4C2E3: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/ending/try_rendering_photograph.asm:35 STA CUR_PHOTO_DISPLAY
    case 0xC4C2E5: cpu.execute_instruction<0x8D>(0x00B6BA, 3); return true;
    // src/ending/try_rendering_photograph.asm:36 LDA ENEMY_SPAWNS_ENABLED
    case 0xC4C2E8: cpu.execute_instruction<0xAD>(0x004DE0, 3); return true;
    // src/ending/try_rendering_photograph.asm:37 STA @VIRTUAL02
    case 0xC4C2EB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/try_rendering_photograph.asm:38 STZ ENEMY_SPAWNS_ENABLED
    case 0xC4C2ED: cpu.execute_instruction<0x9C>(0x004DE0, 3); return true;
    // src/ending/try_rendering_photograph.asm:39 LDY #0
    case 0xC4C2F0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/ending/try_rendering_photograph.asm:39 LDY #0
    // Overlapping static entry reached from 0xC4C2F0.
    case 0xC4C2F2: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/ending/try_rendering_photograph.asm:40 LDX #$2000
    case 0xC4C2F3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x002000, 3); return true;
    // src/ending/try_rendering_photograph.asm:40 LDX #$2000
    // Overlapping static entry reached from 0xC4C2F3.
    case 0xC4C2F5: cpu.execute_instruction<0x20>(0x000980, 3); return true;
    // src/ending/try_rendering_photograph.asm:41 BRA @UNKNOWN2
    case 0xC4C2F6: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/ending/try_rendering_photograph.asm:43 LDA #0
    case 0xC4C2F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/try_rendering_photograph.asm:43 LDA #0
    // Overlapping static entry reached from 0xC4C2F8.
    case 0xC4C2FA: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/ending/try_rendering_photograph.asm:44 STA __BSS_START__,X
    case 0xC4C2FB: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/ending/try_rendering_photograph.asm:45 INX
    case 0xC4C2FE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:46 INX
    case 0xC4C2FF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:47 INY
    case 0xC4C300: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:49 CPY #1024
    case 0xC4C301: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000400, 3); return true;
    // src/ending/try_rendering_photograph.asm:49 CPY #1024
    // Overlapping static entry reached from 0xC4C301.
    case 0xC4C303: cpu.execute_instruction<0x04>(0x000090, 2); return true;
    // src/ending/try_rendering_photograph.asm:50 BCC @UNKNOWN1
    case 0xC4C304: cpu.execute_instruction<0x90>(0x0000F2, 2); return true;
    // src/ending/try_rendering_photograph.asm:50 BCC @UNKNOWN1
    // Overlapping static entry reached from 0xC4C303.
    case 0xC4C305: cpu.execute_instruction<0xF2>(0x0000E2, 2); return true;
    // src/ending/try_rendering_photograph.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C306: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/try_rendering_photograph.asm:51 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4C305.
    case 0xC4C307: cpu.execute_instruction<0x20>(0x00309C, 3); return true;
    // src/ending/try_rendering_photograph.asm:52 STZ PALETTE_UPLOAD_MODE
    case 0xC4C308: cpu.execute_instruction<0x9C>(0x000030, 3); return true;
    // src/ending/try_rendering_photograph.asm:52 STZ PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC4C307.
    case 0xC4C30A: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/ending/try_rendering_photograph.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC4C30B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4C30D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BC, 2); else cpu.execute_instruction<0xA9>(0x00D6BC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    // Overlapping static entry reached from 0xC4C30D.
    case 0xC4C30F: cpu.execute_instruction<0xD6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4C310: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    // Overlapping static entry reached from 0xC4C30F.
    case 0xC4C311: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4C312: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    // Overlapping static entry reached from 0xC4C312.
    case 0xC4C314: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/ending/try_rendering_photograph.asm:54 LOADPTR UNKNOWN_E1E924+6, @LOCAL00
    case 0xC4C315: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/try_rendering_photograph.asm:55 LDX #BPP4PALETTE_SIZE * 1
    case 0xC4C317: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/ending/try_rendering_photograph.asm:55 LDX #BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4C317.
    case 0xC4C319: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/ending/try_rendering_photograph.asm:56 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    case 0xC4C31A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000220, 3); return true;
    // src/ending/try_rendering_photograph.asm:56 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4C31A.
    case 0xC4C31C: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/ending/try_rendering_photograph.asm:57 JSL MEMCPY16
    case 0xC4C31D: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/ending/try_rendering_photograph.asm:58 LDY #4
    case 0xC4C321: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/ending/try_rendering_photograph.asm:58 LDY #4
    // Overlapping static entry reached from 0xC4C321.
    case 0xC4C323: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/ending/try_rendering_photograph.asm:59 LDA [@VIRTUAL0A],Y
    case 0xC4C324: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/ending/try_rendering_photograph.asm:60 ASL
    case 0xC4C326: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:61 ASL
    case 0xC4C327: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:62 ASL
    case 0xC4C328: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:63 TAX
    case 0xC4C329: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:64 LDY #2
    case 0xC4C32A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/ending/try_rendering_photograph.asm:64 LDY #2
    // Overlapping static entry reached from 0xC4C32A.
    case 0xC4C32C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/ending/try_rendering_photograph.asm:65 LDA [@VIRTUAL0A],Y
    case 0xC4C32D: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/ending/try_rendering_photograph.asm:66 ASL
    case 0xC4C32F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:67 ASL
    case 0xC4C330: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:68 ASL
    case 0xC4C331: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:69 JSL LOAD_MAP_AT_POSITION
    case 0xC4C332: cpu.execute_instruction<0x22>(0xC0140C, 4); return true;
    // src/ending/try_rendering_photograph.asm:70 LDA @VIRTUAL02
    case 0xC4C336: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/try_rendering_photograph.asm:71 STA ENEMY_SPAWNS_ENABLED
    case 0xC4C338: cpu.execute_instruction<0x8D>(0x004DE0, 3); return true;
    // src/ending/try_rendering_photograph.asm:72 STZ BG2_Y_POS
    case 0xC4C33B: cpu.execute_instruction<0x9C>(0x000037, 3); return true;
    // src/ending/try_rendering_photograph.asm:73 STZ BG2_X_POS
    case 0xC4C33E: cpu.execute_instruction<0x9C>(0x000035, 3); return true;
    // src/ending/try_rendering_photograph.asm:74 STZ PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC4C341: cpu.execute_instruction<0x9C>(0x00B6B8, 3); return true;
    // src/ending/try_rendering_photograph.asm:75 STZ @LOCAL04
    case 0xC4C344: cpu.execute_instruction<0x64>(0x00001A, 2); return true;
    // src/ending/try_rendering_photograph.asm:76 LDA #0
    case 0xC4C346: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/try_rendering_photograph.asm:76 LDA #0
    // Overlapping static entry reached from 0xC4C346.
    case 0xC4C348: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/try_rendering_photograph.asm:77 STA @VIRTUAL02
    case 0xC4C349: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/try_rendering_photograph.asm:78 BRA @UNKNOWN5
    case 0xC4C34B: cpu.execute_instruction<0x80>(0x000076, 2); return true;
    // src/ending/try_rendering_photograph.asm:80 LDA @VIRTUAL02
    case 0xC4C34D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/ending/try_rendering_photograph.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC4C34F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/ending/try_rendering_photograph.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC4C351: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/ending/try_rendering_photograph.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC4C352: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/ending/try_rendering_photograph.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC4C354: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:82 STA @LOCAL03
    case 0xC4C355: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/ending/try_rendering_photograph.asm:83 CLC
    case 0xC4C357: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:84 ADC #42
    case 0xC4C358: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002A, 2); else cpu.execute_instruction<0x69>(0x00002A, 3); return true;
    // src/ending/try_rendering_photograph.asm:84 ADC #42
    // Overlapping static entry reached from 0xC4C358.
    case 0xC4C35A: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/try_rendering_photograph.asm:85 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C35B: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/try_rendering_photograph.asm:85 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C35D: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:85 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C35F: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:85 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C361: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/ending/try_rendering_photograph.asm:86 CLC
    case 0xC4C363: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:87 ADC @VIRTUAL06
    case 0xC4C364: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:88 STA @VIRTUAL06
    case 0xC4C366: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:89 STA @LOCAL02
    case 0xC4C368: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/ending/try_rendering_photograph.asm:90 LDA @VIRTUAL06+2
    case 0xC4C36A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/ending/try_rendering_photograph.asm:91 STA @LOCAL02+2
    case 0xC4C36C: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/ending/try_rendering_photograph.asm:92 LDA [@VIRTUAL06]
    case 0xC4C36E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:93 BEQ @UNKNOWN4
    case 0xC4C370: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // src/ending/try_rendering_photograph.asm:94 LDA @LOCAL04
    case 0xC4C372: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/ending/try_rendering_photograph.asm:95 STA NEW_ENTITY_VAR0
    case 0xC4C374: cpu.execute_instruction<0x8D>(0x000A2E, 3); return true;
    // src/ending/try_rendering_photograph.asm:96 INC @LOCAL04
    case 0xC4C377: cpu.execute_instruction<0xE6>(0x00001A, 2); return true;
    // src/ending/try_rendering_photograph.asm:97 LDA @LOCAL03
    case 0xC4C379: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/ending/try_rendering_photograph.asm:98 CLC
    case 0xC4C37B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:99 ADC #photographer_config_entry::object_config + photographer_config_entry_object::tile_x
    case 0xC4C37C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000026, 2); else cpu.execute_instruction<0x69>(0x000026, 3); return true;
    // src/ending/try_rendering_photograph.asm:99 ADC #photographer_config_entry::object_config + photographer_config_entry_object::tile_x
    // Overlapping static entry reached from 0xC4C37C.
    case 0xC4C37E: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/try_rendering_photograph.asm:100 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C37F: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/try_rendering_photograph.asm:100 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C381: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:100 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C383: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:100 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C385: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/ending/try_rendering_photograph.asm:101 CLC
    case 0xC4C387: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:102 ADC @VIRTUAL06
    case 0xC4C388: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:103 STA @VIRTUAL06
    case 0xC4C38A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:104 LDA [@VIRTUAL06]
    case 0xC4C38C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:105 ASL
    case 0xC4C38E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:106 ASL
    case 0xC4C38F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:107 ASL
    case 0xC4C390: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:108 STA @LOCAL00
    case 0xC4C391: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/try_rendering_photograph.asm:109 LDA @LOCAL03
    case 0xC4C393: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/ending/try_rendering_photograph.asm:110 CLC
    case 0xC4C395: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:111 ADC #photographer_config_entry::object_config + photographer_config_entry_object::tile_y
    case 0xC4C396: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x000028, 3); return true;
    // src/ending/try_rendering_photograph.asm:111 ADC #photographer_config_entry::object_config + photographer_config_entry_object::tile_y
    // Overlapping static entry reached from 0xC4C396.
    case 0xC4C398: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/try_rendering_photograph.asm:112 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C399: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/try_rendering_photograph.asm:112 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C39B: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:112 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C39D: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:112 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C39F: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/ending/try_rendering_photograph.asm:113 CLC
    case 0xC4C3A1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:114 ADC @VIRTUAL06
    case 0xC4C3A2: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:115 STA @VIRTUAL06
    case 0xC4C3A4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:116 LDA [@VIRTUAL06]
    case 0xC4C3A6: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:117 ASL
    case 0xC4C3A8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:118 ASL
    case 0xC4C3A9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:119 ASL
    case 0xC4C3AA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:120 STA @LOCAL00+2
    case 0xC4C3AB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/try_rendering_photograph.asm:121 LDY #.LOWORD(-1)
    case 0xC4C3AD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/ending/try_rendering_photograph.asm:121 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4C3AD.
    case 0xC4C3AF: cpu.execute_instruction<0xFF>(0x031BA2, 4); return true;
    // src/ending/try_rendering_photograph.asm:122 LDX #EVENT_SCRIPT::EVENT_799
    case 0xC4C3B0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001B, 2); else cpu.execute_instruction<0xA2>(0x00031B, 3); return true;
    // src/ending/try_rendering_photograph.asm:122 LDX #EVENT_SCRIPT::EVENT_799
    // Overlapping static entry reached from 0xC4C3B0.
    case 0xC4C3B2: cpu.execute_instruction<0x03>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4C3B3: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C3B2.
    case 0xC4C3B4: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4C3B5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C3B4.
    case 0xC4C3B6: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4C3B7: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C3B6.
    case 0xC4C3B8: cpu.execute_instruction<0x16>(0x000085, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC4C3B9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:123 MOVE_INT @LOCAL02, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C3B8.
    case 0xC4C3BA: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:124 LDA [@VIRTUAL06]
    case 0xC4C3BB: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:125 JSL CREATE_ENTITY
    case 0xC4C3BD: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/ending/try_rendering_photograph.asm:127 INC @VIRTUAL02
    case 0xC4C3C1: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/ending/try_rendering_photograph.asm:129 LDA @VIRTUAL02
    case 0xC4C3C3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/try_rendering_photograph.asm:130 CMP #4
    case 0xC4C3C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/ending/try_rendering_photograph.asm:130 CMP #4
    // Overlapping static entry reached from 0xC4C3C5.
    case 0xC4C3C7: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/ending/try_rendering_photograph.asm:131 BCCL @UNKNOWN3
    case 0xC4C3C8: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/ending/try_rendering_photograph.asm:131 BCCL @UNKNOWN3
    case 0xC4C3CA: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/ending/try_rendering_photograph.asm:131 BCCL @UNKNOWN3
    case 0xC4C3CC: cpu.execute_instruction<0x4C>(0x00C34D, 3); return true;
    // src/ending/try_rendering_photograph.asm:132 LDA #0
    case 0xC4C3CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/ending/try_rendering_photograph.asm:132 LDA #0
    // Overlapping static entry reached from 0xC4C3CF.
    case 0xC4C3D1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/try_rendering_photograph.asm:133 STA @VIRTUAL04
    case 0xC4C3D2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/ending/try_rendering_photograph.asm:134 JMP @UNKNOWN9
    case 0xC4C3D4: cpu.execute_instruction<0x4C>(0x00C45D, 3); return true;
    // src/ending/try_rendering_photograph.asm:136 LDA @LOCAL06
    case 0xC4C3D7: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/ending/try_rendering_photograph.asm:137 ASL
    case 0xC4C3D9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:138 ASL
    case 0xC4C3DA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:139 ASL
    case 0xC4C3DB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:140 CLC
    case 0xC4C3DC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:142 ADC #.LOWORD(GAME_STATE)
    case 0xC4C3DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/ending/try_rendering_photograph.asm:142 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC4C3DD.
    case 0xC4C3DF: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:143 CLC
    case 0xC4C3E0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:144 ADC @VIRTUAL04
    case 0xC4C3E1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/ending/try_rendering_photograph.asm:145 TAX
    case 0xC4C3E3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:146 LDA a:game_state::saved_photo_states + photo_state::party,X
    case 0xC4C3E4: cpu.execute_instruction<0xBD>(0x0000D3, 3); return true;
    // src/ending/try_rendering_photograph.asm:152 AND #$00FF
    case 0xC4C3E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/ending/try_rendering_photograph.asm:152 AND #$00FF
    // Overlapping static entry reached from 0xC4C3E7.
    case 0xC4C3E9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/ending/try_rendering_photograph.asm:153 STA @VIRTUAL02
    case 0xC4C3EA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/ending/try_rendering_photograph.asm:154 BEQ @UNKNOWN8
    case 0xC4C3EC: cpu.execute_instruction<0xF0>(0x00006D, 2); return true;
    // src/ending/try_rendering_photograph.asm:155 LDA @VIRTUAL02
    case 0xC4C3EE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/try_rendering_photograph.asm:156 AND #$001F
    case 0xC4C3F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/ending/try_rendering_photograph.asm:156 AND #$001F
    // Overlapping static entry reached from 0xC4C3F0.
    case 0xC4C3F2: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/ending/try_rendering_photograph.asm:157 CMP #18
    case 0xC4C3F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000012, 2); else cpu.execute_instruction<0xC9>(0x000012, 3); return true;
    // src/ending/try_rendering_photograph.asm:157 CMP #18
    // Overlapping static entry reached from 0xC4C3F3.
    case 0xC4C3F5: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/ending/try_rendering_photograph.asm:158 BCS @UNKNOWN8
    case 0xC4C3F6: cpu.execute_instruction<0xB0>(0x000063, 2); return true;
    // src/ending/try_rendering_photograph.asm:159 CMP #0
    case 0xC4C3F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/ending/try_rendering_photograph.asm:159 CMP #0
    // Overlapping static entry reached from 0xC4C3F8.
    case 0xC4C3FA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/ending/try_rendering_photograph.asm:160 BEQ @UNKNOWN8
    case 0xC4C3FB: cpu.execute_instruction<0xF0>(0x00005E, 2); return true;
    // src/ending/try_rendering_photograph.asm:161 LDA @LOCAL04
    case 0xC4C3FD: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/ending/try_rendering_photograph.asm:162 STA NEW_ENTITY_VAR0
    case 0xC4C3FF: cpu.execute_instruction<0x8D>(0x000A2E, 3); return true;
    // src/ending/try_rendering_photograph.asm:163 INC @LOCAL04
    case 0xC4C402: cpu.execute_instruction<0xE6>(0x00001A, 2); return true;
    // src/ending/try_rendering_photograph.asm:164 LDA @VIRTUAL04
    case 0xC4C404: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/try_rendering_photograph.asm:165 ASL
    case 0xC4C406: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:166 ASL
    case 0xC4C407: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:167 TAX
    case 0xC4C408: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:168 STX @LOCAL05
    case 0xC4C409: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/ending/try_rendering_photograph.asm:169 LDA @VIRTUAL02
    case 0xC4C40B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/ending/try_rendering_photograph.asm:170 JSL UNKNOWN_C079EC
    case 0xC4C40D: cpu.execute_instruction<0x22>(0xC07C3C, 4); return true;
    // src/ending/try_rendering_photograph.asm:171 STA @LOCAL01
    case 0xC4C411: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/ending/try_rendering_photograph.asm:172 LDX @LOCAL05
    case 0xC4C413: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/ending/try_rendering_photograph.asm:173 TXA
    case 0xC4C415: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:174 CLC
    case 0xC4C416: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:175 ADC #14
    case 0xC4C417: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000E, 2); else cpu.execute_instruction<0x69>(0x00000E, 3); return true;
    // src/ending/try_rendering_photograph.asm:175 ADC #14
    // Overlapping static entry reached from 0xC4C417.
    case 0xC4C419: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/ending/try_rendering_photograph.asm:176 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4C41A: cpu.execute_instruction<0xA4>(0x00000A, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/ending/try_rendering_photograph.asm:176 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4C41C: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:176 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4C41E: cpu.execute_instruction<0xA4>(0x00000C, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:176 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4C420: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/ending/try_rendering_photograph.asm:177 CLC
    case 0xC4C422: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:178 ADC @VIRTUAL06
    case 0xC4C423: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:179 STA @VIRTUAL06
    case 0xC4C425: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:180 LDA [@VIRTUAL06]
    case 0xC4C427: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:181 ASL
    case 0xC4C429: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:182 ASL
    case 0xC4C42A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:183 ASL
    case 0xC4C42B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:184 STA @LOCAL00
    case 0xC4C42C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/ending/try_rendering_photograph.asm:185 TXA
    case 0xC4C42E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:186 CLC
    case 0xC4C42F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:187 ADC #16
    case 0xC4C430: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/ending/try_rendering_photograph.asm:187 ADC #16
    // Overlapping static entry reached from 0xC4C430.
    case 0xC4C432: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/ending/try_rendering_photograph.asm:188 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C433: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/ending/try_rendering_photograph.asm:188 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C435: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/ending/try_rendering_photograph.asm:188 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C437: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/ending/try_rendering_photograph.asm:188 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4C439: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/ending/try_rendering_photograph.asm:189 CLC
    case 0xC4C43B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:190 ADC @VIRTUAL06
    case 0xC4C43C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:191 STA @VIRTUAL06
    case 0xC4C43E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:192 LDA [@VIRTUAL06]
    case 0xC4C440: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/ending/try_rendering_photograph.asm:193 ASL
    case 0xC4C442: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:194 ASL
    case 0xC4C443: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:195 ASL
    case 0xC4C444: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:196 STA @LOCAL00+2
    case 0xC4C445: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/try_rendering_photograph.asm:197 LDY #.LOWORD(-1)
    case 0xC4C447: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/ending/try_rendering_photograph.asm:197 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4C447.
    case 0xC4C449: cpu.execute_instruction<0xFF>(0x031CA2, 4); return true;
    // src/ending/try_rendering_photograph.asm:198 LDX #EVENT_SCRIPT::EVENT_800
    case 0xC4C44A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001C, 2); else cpu.execute_instruction<0xA2>(0x00031C, 3); return true;
    // src/ending/try_rendering_photograph.asm:198 LDX #EVENT_SCRIPT::EVENT_800
    // Overlapping static entry reached from 0xC4C44A.
    case 0xC4C44C: cpu.execute_instruction<0x03>(0x0000A5, 2); return true;
    // src/ending/try_rendering_photograph.asm:199 LDA @LOCAL01
    case 0xC4C44D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/ending/try_rendering_photograph.asm:199 LDA @LOCAL01
    // Overlapping static entry reached from 0xC4C44C.
    case 0xC4C44E: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/ending/try_rendering_photograph.asm:200 JSL CREATE_ENTITY
    case 0xC4C44F: cpu.execute_instruction<0x22>(0xC01E5F, 4); return true;
    // src/ending/try_rendering_photograph.asm:200 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4C44E.
    case 0xC4C450: cpu.execute_instruction<0x5F>(0xA8C01E, 4); return true;
    // src/ending/try_rendering_photograph.asm:201 TAY
    case 0xC4C453: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:202 LDX @VIRTUAL02
    case 0xC4C454: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/ending/try_rendering_photograph.asm:203 TYA
    case 0xC4C456: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/ending/try_rendering_photograph.asm:204 JSL UNKNOWN_C07A31
    case 0xC4C457: cpu.execute_instruction<0x22>(0xC07C81, 4); return true;
    // src/ending/try_rendering_photograph.asm:206 INC @VIRTUAL04
    case 0xC4C45B: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/ending/try_rendering_photograph.asm:208 LDA @VIRTUAL04
    case 0xC4C45D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/ending/try_rendering_photograph.asm:209 CMP #6
    case 0xC4C45F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/ending/try_rendering_photograph.asm:209 CMP #6
    // Overlapping static entry reached from 0xC4C45F.
    case 0xC4C461: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/ending/try_rendering_photograph.asm:210 BCCL @UNKNOWN7
    case 0xC4C462: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/ending/try_rendering_photograph.asm:210 BCCL @UNKNOWN7
    case 0xC4C464: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/ending/try_rendering_photograph.asm:210 BCCL @UNKNOWN7
    case 0xC4C466: cpu.execute_instruction<0x4C>(0x00C3D7, 3); return true;
    // src/ending/try_rendering_photograph.asm:211 LDX #1
    case 0xC4C469: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/ending/try_rendering_photograph.asm:211 LDX #1
    // Overlapping static entry reached from 0xC4C469.
    case 0xC4C46B: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/ending/try_rendering_photograph.asm:212 STX @LOCAL05
    case 0xC4C46C: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/ending/try_rendering_photograph.asm:214 LDX @LOCAL05
    case 0xC4C46E: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/ending/try_rendering_photograph.asm:215 TXA
    case 0xC4C470: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/try_rendering_photograph.asm:216 END_C_FUNCTION
    case 0xC4C471: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/try_rendering_photograph.asm:216 END_C_FUNCTION
    case 0xC4C472: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/ending/upload_special_cast_palette.asm (source_named).
bool execute_ending_upload_special_cast_palette_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/ending/upload_special_cast_palette.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4BEC9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/ending/upload_special_cast_palette.asm:7 END_STACK_VARS
    case 0xC4BECB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/ending/upload_special_cast_palette.asm:7 END_STACK_VARS
    case 0xC4BECC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/ending/upload_special_cast_palette.asm:7 END_STACK_VARS
    case 0xC4BECD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/upload_special_cast_palette.asm:7 END_STACK_VARS
    case 0xC4BECE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/ending/upload_special_cast_palette.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BECE.
    case 0xC4BED0: cpu.execute_instruction<0xFF>(0x0A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/ending/upload_special_cast_palette.asm:7 END_STACK_VARS
    case 0xC4BED1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/ending/upload_special_cast_palette.asm:7 END_STACK_VARS
    case 0xC4BED2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/ending/upload_special_cast_palette.asm:8 ASL
    case 0xC4BED3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/upload_special_cast_palette.asm:9 ASL
    case 0xC4BED4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/upload_special_cast_palette.asm:10 ASL
    case 0xC4BED5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/upload_special_cast_palette.asm:11 ASL
    case 0xC4BED6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/ending/upload_special_cast_palette.asm:12 ASL
    case 0xC4BED7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/ending/upload_special_cast_palette.asm:13 STORE_INT1632 @VIRTUAL06
    case 0xC4BED8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/ending/upload_special_cast_palette.asm:13 STORE_INT1632 @VIRTUAL06
    case 0xC4BEDA: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/ending/upload_special_cast_palette.asm:14 CLC
    case 0xC4BEDC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    case 0xC4BEDD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    case 0xC4BEDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007000, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BEDF.
    case 0xC4BEE1: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    case 0xC4BEE2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BEE1.
    case 0xC4BEE3: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    case 0xC4BEE4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BEE3.
    case 0xC4BEE5: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    case 0xC4BEE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4BEE6.
    case 0xC4BEE8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/ending/upload_special_cast_palette.asm:15 VAR_ADD_CONST_INT_ASSIGN BUFFER + $7000, @VIRTUAL06
    case 0xC4BEE9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/ending/upload_special_cast_palette.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BEEB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/ending/upload_special_cast_palette.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BEED: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/ending/upload_special_cast_palette.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BEEF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/ending/upload_special_cast_palette.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4BEF1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/ending/upload_special_cast_palette.asm:17 LDX #BPP4PALETTE_SIZE * 1
    case 0xC4BEF3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/ending/upload_special_cast_palette.asm:17 LDX #BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4BEF3.
    case 0xC4BEF5: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/ending/upload_special_cast_palette.asm:18 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 12
    case 0xC4BEF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000380, 3); return true;
    // src/ending/upload_special_cast_palette.asm:18 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 12
    // Overlapping static entry reached from 0xC4BEF6.
    case 0xC4BEF8: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/ending/upload_special_cast_palette.asm:19 JSL MEMCPY16
    case 0xC4BEF9: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/ending/upload_special_cast_palette.asm:19 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4BEF8.
    case 0xC4BEFA: cpu.execute_instruction<0xC3>(0x00008E, 2); return true;
    // src/ending/upload_special_cast_palette.asm:19 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4BEFA.
    case 0xC4BEFC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/ending/upload_special_cast_palette.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BEFD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/ending/upload_special_cast_palette.asm:20 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4BEFC.
    case 0xC4BEFE: cpu.execute_instruction<0x20>(0x0010A9, 3); return true;
    // src/ending/upload_special_cast_palette.asm:21 LDA #PALETTE_UPLOAD::OBJ_ONLY
    case 0xC4BEFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x008D10, 3); return true;
    // src/ending/upload_special_cast_palette.asm:22 STA PALETTE_UPLOAD_MODE
    case 0xC4BF01: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/ending/upload_special_cast_palette.asm:22 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC4BEFF.
    case 0xC4BF02: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/ending/upload_special_cast_palette.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC4BF04: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/ending/upload_special_cast_palette.asm:24 END_C_FUNCTION
    case 0xC4BF06: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/ending/upload_special_cast_palette.asm:24 END_C_FUNCTION
    case 0xC4BF07: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
